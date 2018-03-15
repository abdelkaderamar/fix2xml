#pragma once

#include "data/fix_types.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

namespace XERCES_CPP_NAMESPACE
{
  class DOMElement;
}

namespace fix2xml
{

  class fix_field_parser
  {
  public:
    fix_field_parser();
    ~fix_field_parser();

    void parse(XERCES_CPP_NAMESPACE::DOMElement *field_elt,
               fix_field_type& field_type);

    XMLCh *NAME_ATTR, *NUMBER_ATTR, *TYPE_ATTR;
  }; // end fix_field_parser

}
