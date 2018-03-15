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

#include <set>
#include <string>

namespace fix2xml
{
  //----------------------------------------------------------------------------

  enum class fix_component_type_enum { UNKNOWN, BLOCK, GROUP };

  struct fix_base_type
  {
    fix_base_type() {}
    fix_base_type(const std::string& name) : _name(name) {}

    virtual std::string to_string() const = 0;

    std::string _name;
  };

  //----------------------------------------------------------------------------

  struct fix_field_type : public fix_base_type
  {
    fix_field_type() {}
    fix_field_type(const std::string& name, const std::string& type,
                   const std::string& tag) :
      fix_base_type(name), _type(type), _tag(tag)
    {}

    std::string to_string() const override;

    std::string _type;
    std::string _tag;
  }; // end fix_field_type

  //----------------------------------------------------------------------------

  struct fix_component_type : public fix_base_type
  {
    fix_component_type() {}
    fix_component_type(const std::string& name, const std::string& type) :
      fix_base_type(name), _type(type)
    {}

    std::string to_string() const override;

    void add_field(const std::string& field) { _fields.insert(field); }
    void add_component(const std::string& compo) { _components.insert(compo); }

    std::string _type;
    std::set<std::string> _fields;
    std::set<std::string> _components;
  }; // end fix_component_type

  //----------------------------------------------------------------------------

  struct fix_message_type : public fix_base_type
  {
    fix_message_type() {}
    fix_message_type(const std::string& name, const std::string& msgtype) :
      fix_base_type(name), _msgtype(msgtype)
    {}

    std::string to_string() const override;

    void add_field(const std::string& field) { _fields.insert(field); }
    void add_component(const std::string& compo) { _components.insert(compo); }

    std::string _msgtype;
    std::set<std::string> _fields;
    std::set<std::string> _components;
  }; // end fix_component_type

  //----------------------------------------------------------------------------

}
