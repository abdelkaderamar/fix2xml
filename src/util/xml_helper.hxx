#pragma once

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <list>
#include <string>
#include <utility>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}


namespace fix2xml
{

  class xml_helper
  {
  public:
    static std::list<std::pair<std::string, XERCES_CPP_NAMESPACE::DOMElement*>>
    get_child_elements(const XERCES_CPP_NAMESPACE::DOMElement *elt);

    static std::list<XERCES_CPP_NAMESPACE::DOMElement*>
    get_elements_by_tag(const XERCES_CPP_NAMESPACE::DOMElement *elt,
                        const std::string& tag_name);

    static std::list<XERCES_CPP_NAMESPACE::DOMElement*>
    get_elements_by_tag(const XERCES_CPP_NAMESPACE::DOMElement *elt,
                        const XMLCh *tag_name);

  }; // end xml_helper

}
