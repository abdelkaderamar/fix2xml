#pragma once

#include "data/fix_types.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <list>

namespace XERCES_CPP_NAMESPACE
{
  class DOMElement;
}

namespace fix2xml
{

  class fix_component_parser
  {
  public:
    fix_component_parser();
    ~fix_component_parser();

    void parse(XERCES_CPP_NAMESPACE::DOMElement *component_elt,
               fix_component_type& compo_type,
               std::list<fix_component_type>& groups);

    void parse_component_component(XERCES_CPP_NAMESPACE::DOMElement *compo_compo_elt,
                                   fix_component_type& compo_type,
                                   std::list<fix_component_type>& groups);

    void parse_component_group(XERCES_CPP_NAMESPACE::DOMElement *compo_group_elt,
                               fix_component_type& compo_type,
                               std::list<fix_component_type>& groups);

    void parse_component_field(XERCES_CPP_NAMESPACE::DOMElement *compo_field_elt,
                               fix_component_type& compo_type);

    XMLCh *NAME_ATTR, *REQUIRED_ATTR;

  }; // end fix_component_parser

}
