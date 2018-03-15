#pragma once

#include "data/xml_element.hxx"
#include "fix/fix_dico_container.hxx"
#include "fixml/fixml_dico_container.hxx"
#include "fixml/fixml_parser.hxx"

#include <quickfix/DataDictionary.h>

#include <list>
#include <memory>
#include <string>

namespace FIX
{
  class Message;
  class FieldMap;
}

namespace fix2xml
{

  class fixml2fix_converter
  {
  public:

    fixml2fix_converter(const std::string& fix_xml_filename,
                        const std::string& fixml_xsd_schema);

    bool init();

    const bool fix2fixml(const FIX::Message& fix_msg, std::string& xml_string);

    const bool fix2fixml(const FIX::Message& fix_msg, xml_element& fixml_elt);

    const bool fixml2fix(const std::string& xml_string, FIX::Message& fix_msg);

    const bool fixml2fix(const xml_element& fixml_elt,  FIX::Message& fix_msg);

    bool set_msg_type(const FIX::Message& fix_msg, xml_element& fixml_elt,
                      fixml_type& fixml_msg_type);

  protected:

    std::string          _fix_xml_filename;
    std::string          _fixml_xsd_schema;
    std::shared_ptr<fixml_dico_container> _fixml_dictionary;
    std::shared_ptr<fix_dico_container>   _fix_dictionary;
    FIX::DataDictionary  _quickfix_dictionary;
    fixml_parser         _fixml_parser;

    void add_fixml_attrs_and_compos(const fixml_type& type,
                                    const FIX::FieldMap& fix_msg,
                                    xml_element& fixml_elt);

    void add_fixml_attributes(const fixml_type& type,
                              const FIX::FieldMap& fix_msg,
                              xml_element& fixml_elt);

    void add_fixml_attribute(const fixml_field_data& field_data,
                              const FIX::FieldMap& fix_msg,
                              xml_element& fixml_elt);

    void add_fixml_components(const fixml_type& type,
                              const FIX::FieldMap& fix_msg,
                              xml_element& fixml_elt);

    void add_fixml_component(const fixml_component_data& compo_data,
                             const FIX::FieldMap& fix_msg,
                             xml_element& fixml_elt);

    void add_fixml_group(const fixml_component_data& compo_data,
                         const FIX::FieldMap& fix_msg,
                         xml_element& fixml_elt,
                         fixml_type& fixml_compo_type);

    void add_fix_fields_and_compos(const std::string& fix_msg_type,
                                   const fixml_type& type,
                                   const xml_element& fixml_elt,
                                   FIX::FieldMap& fix_msg);

    void add_fix_fields(const fixml_type& type,
                        const xml_element& fixml_elt,
                        FIX::FieldMap& fix_msg);

    void add_fix_field(const fixml_field_data& fixml_field,
                       const xml_element& fixml_elt,
                       FIX::FieldMap& fix_msg);

    void add_fix_components(const std::string& fix_msg_type,
                            const fixml_type& type,
                            const xml_element& fixml_elt,
                            FIX::FieldMap& fix_msg);

    void add_fix_component(const std::string& fix_msg_type,
                           const fixml_component_data& fixml_compo,
                           const xml_element& fixml_elt,
                           FIX::FieldMap& fix_msg);

    void add_fix_group(const std::string& fix_msg_type,
                       const fixml_component_data& fixml_compo,
                       const xml_element& fixml_elt,
                       FIX::FieldMap& fix_msg);

  private:
    bool _initialized;
  };
}
