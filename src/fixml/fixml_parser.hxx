#pragma once

#include "data/xml_element.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <string>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}

namespace fix2xml
{
  class fixml_parser
  {
  public:
    fixml_parser();

    bool to_xml_element(const std::string& str, xml_element& elt);
    void parse(XERCES_CPP_NAMESPACE::DOMElement *dom_elt, xml_element& elt);

  protected:
    XERCES_CPP_NAMESPACE::XercesDOMParser *_parser;
  };

}
