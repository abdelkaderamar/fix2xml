#pragma once

#include <map>
#include <list>
#include <string>

namespace fix2xml
{
  class xml_element
  {
  public:
    xml_element() {}
    xml_element(const std::string& name);

    const std::string name() const;
    void set_name(const std::string& name) { _name = name; }
    const std::map<std::string, std::string>& attributes() const;
    const std::multimap<std::string, xml_element>& elements() const;

    void add_attribute(const std::string& attr_name,
                       const std::string& attr_value);
    void add_element(const xml_element& child);
    bool empty() const;

    const std::string to_string() const;

    bool get_component(const std::string& name, xml_element& compo) const;
    bool get_components(const std::string& name, std::list<xml_element>& compos) const;

  protected:

    const std::string to_string(const size_t tab) const;

    std::string _name;
    std::map<std::string, std::string> _attributes;
    std::multimap<std::string, xml_element> _elements;

  private:
  };
}
