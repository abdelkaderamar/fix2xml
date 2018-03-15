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

  class fix_message_parser
  {
  public:
    fix_message_parser();
    ~fix_message_parser();

    void parse(XERCES_CPP_NAMESPACE::DOMElement *message_elt,
                      fix_message_type& msg_type);

    void parse_msg_component(XERCES_CPP_NAMESPACE::DOMElement *msg_compo_elt,
                                    fix_message_type& msg_type);

    void parse_msg_field(XERCES_CPP_NAMESPACE::DOMElement *msg_field_elt,
                                fix_message_type& msg_type);

    XMLCh *NAME_ATTR, *MSGTYPE_ATTR, *REQUIRED_ATTR;

  }; // end fix_message_parser

}
