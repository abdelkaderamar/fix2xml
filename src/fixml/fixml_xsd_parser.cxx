// MIT License
//
// Copyright 2018 Abdelkader Amar
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#include "fixml_xsd_parser.hxx"

#include "xsd_typedefinition_parser.hxx"

#include "util/xml_string.hxx"

#include <boost/log/trivial.hpp>

#include <xercesc/framework/XMLGrammarPoolImpl.hpp>
#include <xercesc/framework/psvi/XSAnnotation.hpp>
#include <xercesc/framework/psvi/XSComplexTypeDefinition.hpp>
#include <xercesc/framework/psvi/XSElementDeclaration.hpp>
#include <xercesc/framework/psvi/XSFacet.hpp>
#include <xercesc/framework/psvi/XSModel.hpp>
#include <xercesc/framework/psvi/XSMultiValueFacet.hpp>
#include <xercesc/framework/psvi/XSSimpleTypeDefinition.hpp>
#include <xercesc/framework/psvi/XSTypeDefinition.hpp>
#include <xercesc/sax/SAXParseException.hpp>
#include <xercesc/sax2/SAX2XMLReader.hpp>
#include <xercesc/sax2/XMLReaderFactory.hpp>
#include <xercesc/util/PlatformUtils.hpp>

#include <boost/log/trivial.hpp>

namespace fix2xml {
XERCES_CPP_NAMESPACE_USE
using namespace std;

//----------------------------------------------------------------------------

xsd_parser_error_handler::xsd_parser_error_handler()
    : _warning_count(0), _error_count(0), _fatal_error_count(0) {}

//----------------------------------------------------------------------------

void xsd_parser_error_handler::warning(const SAXParseException &e) {
  xml_string msg{e.getMessage()};
  BOOST_LOG_TRIVIAL(warning) << "Parsing warning " << msg;
  ++_warning_count;
}

//----------------------------------------------------------------------------

void xsd_parser_error_handler::error(const SAXParseException &e) {
  xml_string msg{e.getMessage()};
  BOOST_LOG_TRIVIAL(error) << "Parsing error " << msg;
  ++_error_count;
}

//----------------------------------------------------------------------------

void xsd_parser_error_handler::fatalError(const SAXParseException &e) {
  xml_string msg{e.getMessage()};
  BOOST_LOG_TRIVIAL(fatal) << "Parsing fatal error " << msg;
  ++_fatal_error_count;
}

//----------------------------------------------------------------------------

void xsd_parser_error_handler::resetErrors() {
  _warning_count = _error_count = _fatal_error_count = 0;
}

//----------------------------------------------------------------------------

fixml_xsd_parser::fixml_xsd_parser()
    : _dico{make_shared<fixml_dico_container>()}, _grammarPool(nullptr),
      _parser(nullptr), _annotation_parser(), _error_handler() {
  _grammarPool = new XMLGrammarPoolImpl(XMLPlatformUtils::fgMemoryManager);
  _parser = XMLReaderFactory::createXMLReader(XMLPlatformUtils::fgMemoryManager,
                                              _grammarPool);

  _parser->setFeature(XMLUni::fgSAX2CoreNameSpaces, true);
  _parser->setFeature(XMLUni::fgXercesSchema, true);
  _parser->setFeature(XMLUni::fgXercesHandleMultipleImports, true);
  _parser->setFeature(XMLUni::fgXercesSchemaFullChecking, true);
  _parser->setFeature(XMLUni::fgSAX2CoreNameSpacePrefixes, false);
  _parser->setFeature(XMLUni::fgSAX2CoreValidation, true);
  _parser->setFeature(XMLUni::fgXercesDynamic, true);
  _parser->setProperty(XMLUni::fgXercesScannerName,
                       (void *)XMLUni::fgSGXMLScanner);
  _parser->setErrorHandler(&_error_handler);
} // end ctor

//----------------------------------------------------------------------------

fixml_xsd_parser::~fixml_xsd_parser() {
  delete _parser;
  delete _grammarPool;

} // end dtor

//----------------------------------------------------------------------------

bool fixml_xsd_parser::parse(const char *xsd_file) {
  _parser->loadGrammar(xsd_file, Grammar::SchemaGrammarType, true);

  bool updated_xsmodel;
  XSModel *xsmodel = _grammarPool->getXSModel(updated_xsmodel);
  if (xsmodel != nullptr) {
    StringList *namespaces = xsmodel->getNamespaces();
    for (size_t i = 0; i < namespaces->size(); ++i) {
      const XMLCh *ns = namespaces->elementAt(i);
      process_namespace(xsmodel, ns);
    }
  }
  BOOST_LOG_TRIVIAL(info) << "Parsing " << xsd_file << " done with "
                          << _error_handler.warning_count() << " warnings, "
                          << _error_handler.error_count() << " errors and "
                          << _error_handler.fatal_error_count()
                          << " fatal errors";
  return _error_handler.fatal_error_count() == 0 &&
         _error_handler.error_count() == 0 &&
         _error_handler.warning_count() == 0;
} // end parse

//----------------------------------------------------------------------------

void fixml_xsd_parser::process_namespace(XSModel *xsmodel, const XMLCh *ns) {
  XSNamedMap<XSObject> *elements =
      xsmodel->getComponentsByNamespace(XSConstants::ELEMENT_DECLARATION, ns);
  for (size_t i = 0; i < elements->getLength(); ++i) {
    XSElementDeclaration *elt = (XSElementDeclaration *)elements->item(i);
    process_element(elt);
  }

  XSNamedMap<XSObject> *type_definitions =
      xsmodel->getComponentsByNamespace(XSConstants::TYPE_DEFINITION, ns);
  for (size_t i = 0; i < type_definitions->getLength(); ++i) {
    XSTypeDefinition *xsd_type_def =
        (XSTypeDefinition *)type_definitions->item(i);
    fixml_type type;
    if (xsd_typedefinition_parser::parse_type_definition(xsd_type_def, type)) {
      parse_annotation(xsd_type_def, type);
      parse_restriction(xsd_type_def, type);
      _dico->add_type_definition(type);
    }
  }
}

//----------------------------------------------------------------------------

void fixml_xsd_parser::parse_annotation(XSTypeDefinition *xs_type_def,
                                        fixml_type &type) {
  XSAnnotationList *anno_list = nullptr;
  if (type._category == fixml_type_category::SIMPLE) {
    anno_list = ((XSSimpleTypeDefinition *)xs_type_def)->getAnnotations();
  } else if (type._category == fixml_type_category::COMPLEX) {
    anno_list = ((XSComplexTypeDefinition *)xs_type_def)->getAnnotations();
  }
  if (anno_list == nullptr)
    return;

  for (size_t i = 0; i < anno_list->size(); ++i) {
    string content =
        xml_string::to_string(anno_list->elementAt(i)->getAnnotationString());
    _annotation_parser.parse_type_annotation(content, type);
  }
}

//----------------------------------------------------------------------------

void fixml_xsd_parser::parse_restriction(XSTypeDefinition *xs_type_def,
                                         fixml_type &type) {

  if (type._category != fixml_type_category::SIMPLE)
    return;
  XSSimpleTypeDefinition *simple_type = (XSSimpleTypeDefinition *)xs_type_def;
  StringList *lexicalEnums = simple_type->getLexicalEnumeration();
  if (lexicalEnums && lexicalEnums->size()) {
    // BOOST_LOG_TRIVIAL(debug) << "@DeBuG - Enumeration:";
    for (unsigned i = 0; i < lexicalEnums->size(); i++) {
      string enum_value = xml_string::to_string(lexicalEnums->elementAt(i));
      type.add_enum_value(enum_value);
      // BOOST_LOG_TRIVIAL(debug) << "\t@DeBuG\t" << enum_value;
    }
  }

  /*
if (type._category == fixml_type_category::SIMPLE) {
{
auto *facet_list =
((XSSimpleTypeDefinition *)xs_type_def)->getMultiValueFacets();
if (facet_list == nullptr)
return;
for (size_t i = 0; i < facet_list->size(); ++i) {
if (facet_list->elementAt(i) != nullptr) {
BOOST_LOG_TRIVIAL(debug)
<< "@DeBuG "
<< xml_string::to_string(facet_list->elementAt(i)
->getLexicalFacetValues()
->elementAt(0));
if (facet_list->elementAt(i)->getName() != nullptr)
BOOST_LOG_TRIVIAL(debug)
<< "@DeBuG"
<< xml_string::to_string(facet_list->elementAt(i)->getName());
}
XSAnnotationList *anno_list =
facet_list->elementAt(i)->getAnnotations();
if (anno_list != nullptr) {
for (size_t j = 0; j < anno_list->size(); ++j) {
BOOST_LOG_TRIVIAL(debug)
<< "@DeBuG Annotation "
<< xml_string(anno_list->elementAt(i)->getAnnotationString());
}
}
}
}
{
auto *facet_list = ((XSSimpleTypeDefinition *)xs_type_def)->getFacets();
if (facet_list == nullptr)
return;
for (size_t i = 0; i < facet_list->size(); ++i) {
if (facet_list->elementAt(i) != nullptr) {
BOOST_LOG_TRIVIAL(debug)
<< "@DeBuG "
<< xml_string::to_string(
facet_list->elementAt(i)->getLexicalFacetValue());
if (facet_list->elementAt(i)->getName() != nullptr)
BOOST_LOG_TRIVIAL(debug)
<< "@DeBuG"
<< xml_string::to_string(facet_list->elementAt(i)->getName());
}
}
}
}
*/
}
//----------------------------------------------------------------------------

void fixml_xsd_parser::process_element(const XSElementDeclaration *element) {
  string name = xml_string::to_string(element->getName());
  string type = xml_string::to_string(element->getTypeDefinition()->getName());

  _dico->add_element(name, type);
}

//----------------------------------------------------------------------------
}
