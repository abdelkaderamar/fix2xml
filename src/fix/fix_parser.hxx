#pragma once

#include "fix_dico_container.hxx"
#include "fix_message_parser.hxx"
#include "fix_component_parser.hxx"
#include "fix_field_parser.hxx"

#include <xercesc/util/XercesVersion.hpp>
#include <xercesc/framework/psvi/XSConstants.hpp>

#include <memory>

namespace XERCES_CPP_NAMESPACE
{
  class XercesDOMParser;
  class DOMElement;
}

namespace fix2xml
{
  class fix_parser
  {
  public:

    fix_parser();
    ~fix_parser();

    bool parse(const char *fix_dico_filename);

    std::shared_ptr<fix_dico_container> dico() { return _fix_dico; }

  protected:

    void parse_messages(XERCES_CPP_NAMESPACE::DOMElement *messages_elt);
    void parse_components(XERCES_CPP_NAMESPACE::DOMElement *components_elt);
    void parse_fields(XERCES_CPP_NAMESPACE::DOMElement *fields_elt);

    XERCES_CPP_NAMESPACE::XercesDOMParser *_parser;

    std::shared_ptr<fix_dico_container> _fix_dico;
    fix_message_parser _message_parser;
    fix_component_parser _component_parser;
    fix_field_parser _field_parser;
  private:
  };
};
