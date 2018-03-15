#pragma once

#include "util/xml_string.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <list>
#include <string>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}

namespace fix2xml
{
  class fixml_type;

  class xsd_annotation_parser
  {
  public:
    xsd_annotation_parser();
    virtual ~xsd_annotation_parser();

    bool parse_type_annotation(const std::string& annotation,
                               fixml_type& type);

    XMLCh *APPINFO_ELT, *XREF_ELT,
      *PROTOCOL_ATTR, *NAME_ATTR, *COMPONENT_TYPE_ATTR, *TAG_ATTR;

  protected:

    void parse_xref_elements(const std::list<XERCES_CPP_NAMESPACE::DOMElement*>& xref_elts,
                            fixml_type& type);

    XERCES_CPP_NAMESPACE::XercesDOMParser *_parser;

  }; // end xsd_annotation_parser

}
