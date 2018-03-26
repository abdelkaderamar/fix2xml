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

#include "xml_element.hxx"

#include <algorithm>
#include <sstream>


namespace fix2xml
{
  using namespace std;

  //----------------------------------------------------------------------------

  xml_element::xml_element(const string& name) : _name(name)
  {}

  //----------------------------------------------------------------------------

  const string xml_element::name() const {
    return _name;
  }

  //----------------------------------------------------------------------------

  const map<string, string>& xml_element::attributes() const {
    return _attributes;
  }

  //----------------------------------------------------------------------------

  const multimap<string, xml_element>& xml_element::elements() const {
    return _elements;
  }

  //----------------------------------------------------------------------------

  void xml_element::add_attribute(const string& attr_name,
                     const string& attr_value)
  {
    _attributes[attr_name] = attr_value;
  }

  //----------------------------------------------------------------------------

  void xml_element::add_element(const xml_element& child)
  {
    _elements.insert(make_pair(child.name(), child));
  }

  //----------------------------------------------------------------------------

  bool xml_element::empty() const {
    if ( _attributes.size() != 0) return false;
    for (const auto& child : _elements) {
      if ( ! child.second.empty()) return false;
    }
    return true;
  }

  //----------------------------------------------------------------------------

  const string xml_element::to_string() const {
    return to_string(0);
  }

  //----------------------------------------------------------------------------

  const string xml_element::to_string(const size_t tab) const {
    stringstream ss;
    const string spaces (tab, ' ');
    ss << spaces;
    ss << "<" << _name;
    for (const auto& it : _attributes) {
      ss << " " << it.first << "='" << it.second << "'";
    }
    ss << ">";
    for (const auto& it : _elements) {
      ss << endl << it.second.to_string(tab+2);
    }
    ss << endl;
    ss << spaces << "</" << _name << ">";
    return ss.str();
  }

  //----------------------------------------------------------------------------

  bool xml_element::get_component(const string& name, xml_element& compo) const
  {
    auto it = _elements.find(name);
    if (it == _elements.end()) return false;
    compo = it->second;
    return true;
  }

  //----------------------------------------------------------------------------

  bool xml_element::get_components(const string& name, list<xml_element>& compos) const
  {
    auto range = _elements.equal_range(name);
    for (auto it=range.first; it!=range.second; ++it) {
      compos.push_back(it->second);
    }
    return compos.size() != 0;
  }

  //----------------------------------------------------------------------------

  void xml_element::to_list(list<multiset<string>>& l) const
  {
      multiset<string> s;
      for (const auto& att : _attributes) s.insert(att.second);
      l.push_back(s);

      for (const auto& child : _elements) child.second.to_list(l);
  }
}
