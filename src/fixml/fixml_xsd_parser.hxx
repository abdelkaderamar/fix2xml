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

#pragma once

#include "fixml_dico_container.hxx"

#include "data/fixml_type.hxx"
#include "xsd_annotation_parser.hxx"
#include <xercesc/sax/ErrorHandler.hpp>
#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/util/Xerces_autoconf_config.hpp>

#include <memory>

namespace XERCES_CPP_NAMESPACE {
class XMLGrammarPool;
class SAX2XMLReader;
class XSModel;
class XSElementDeclaration;
class XSTypeDefinition;
}

namespace fix2xml {
class xsd_parser_error_handler : public XERCES_CPP_NAMESPACE::ErrorHandler {
public:
  xsd_parser_error_handler();

  void warning(const XERCES_CPP_NAMESPACE::SAXParseException &e) override;
  void error(const XERCES_CPP_NAMESPACE::SAXParseException &e) override;
  void fatalError(const XERCES_CPP_NAMESPACE::SAXParseException &e) override;
  void resetErrors() override;

  size_t warning_count() const { return _warning_count; }
  size_t error_count() const { return _error_count; }
  size_t fatal_error_count() const { return _fatal_error_count; }

protected:
  size_t _warning_count, _error_count, _fatal_error_count;
};

class fixml_xsd_parser {
public:
  fixml_xsd_parser();
  ~fixml_xsd_parser();

  bool parse(const char *xsd_file);

  void reset();

  std::shared_ptr<fixml_dico_container> dico() { return _dico; }

protected:
  void process_namespace(XERCES_CPP_NAMESPACE::XSModel *xsmodel,
                         const XMLCh *ns);
  void
  process_element(const XERCES_CPP_NAMESPACE::XSElementDeclaration *element);
  void parse_annotation(XERCES_CPP_NAMESPACE::XSTypeDefinition *xs_type_def,
                        fixml_type &type);
  void parse_restriction(XERCES_CPP_NAMESPACE::XSTypeDefinition *xs_type_def,
                         fixml_type &type);
  std::shared_ptr<fixml_dico_container> _dico;

private:
  XERCES_CPP_NAMESPACE::XMLGrammarPool *_grammarPool;
  XERCES_CPP_NAMESPACE::SAX2XMLReader *_parser;
  xsd_annotation_parser _annotation_parser;
  xsd_parser_error_handler _error_handler;
}; // end fixml_xsd_parser

} // end namespace fix2xml
