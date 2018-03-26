// MIT License
//
// Copyright 2018 Abdelkader Amar
//
// Permission is hereby granted, free of charge, to any person obtaining
// a copy of this software and associated documentation files (the
// "Software"), to deal in the Software without restriction, including
// without limitation the rights to use, copy, modify, merge, publish,
// distribute, sublicense, and/or sell copies of the Software, and to
// permit persons to whom the Software is furnished to do so, subject to
// the following conditions:
//
// The above copyright notice and this permission notice shall be
// included in all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
// MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
// LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
// OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
// WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

#pragma once

#include <map>
#include <list>
#include <set>
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

    void to_list(std::list<std::multiset<std::string>>& l) const;

  protected:

    const std::string to_string(const size_t tab) const;

    std::string _name;
    std::map<std::string, std::string> _attributes;
    std::multimap<std::string, xml_element> _elements;

  private:
  };

}
