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

#include "fixml_data.hxx"

#include <list>
#include <string>

namespace fix2xml
{
  enum class fixml_type_category { SIMPLE, COMPLEX };

  class fixml_type
  {
  public:
    fixml_type() {}
    fixml_type(const std::string& ns,
	       const std::string& name,
	       const std::string& base_type,
	       const fixml_type_category cat);

    void add_field(const fixml_field_data& field) { _fields.push_back(field); }
    const std::list<fixml_field_data>& fields() const { return _fields; }

    void add_component(const fixml_component_data& compo) { _components.push_back(compo); }
    const std::list<fixml_component_data>& components() const { return _components; }

    std::string _ns;
    std::string _name;
    std::string _base_type;
    fixml_type_category _category;
    fixml_fix_data _fix_data;

  protected:
    std::list<fixml_field_data> _fields;
    std::list<fixml_component_data> _components;
  private:

  }; // end fixml_type

} // end namespace fixml_type
