#include "fix_field_parser.hxx"

#include "util/xml_helper.hxx"
#include "util/xml_string.hxx"

#include <xercesc/parsers/XercesDOMParser.hpp>
#include <xercesc/dom/DOMNodeList.hpp>
#include <xercesc/dom/DOMElement.hpp>

namespace fix2xml
{
  using namespace std;
  XERCES_CPP_NAMESPACE_USE

  //----------------------------------------------------------------------------

  fix_field_parser::fix_field_parser()
  {
    NAME_ATTR = XMLString::transcode("name");
    NUMBER_ATTR = XMLString::transcode("number");
    TYPE_ATTR = XMLString::transcode("type");
  } // end ctor

  //----------------------------------------------------------------------------

  fix_field_parser::~fix_field_parser()
  {
    XMLString::release(&NAME_ATTR);
    XMLString::release(&NUMBER_ATTR);
    XMLString::release(&TYPE_ATTR);
  }

  //----------------------------------------------------------------------------

  void fix_field_parser::parse(DOMElement * field_elt,
                               fix_field_type& field_type)
  {
    field_type._name = xml_string::to_string(field_elt->getAttribute(NAME_ATTR));
    field_type._type = xml_string::to_string(field_elt->getAttribute(TYPE_ATTR));
    field_type._tag = xml_string::to_string(field_elt->getAttribute(NUMBER_ATTR));
  }

  //----------------------------------------------------------------------------

}
