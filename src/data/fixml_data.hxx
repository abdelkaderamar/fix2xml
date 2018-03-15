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

#include <ostream>
#include <string>

namespace fix2xml
{
  //----------------------------------------------------------------------------

  class fixml_base_data
  {
  public:
    fixml_base_data(const std::string& name, const std::string& type) :
      _name(name), _type(type) {}

    virtual std::string to_string() const = 0;

    std::string _name;
    std::string _type;
  };

  //----------------------------------------------------------------------------

  class fixml_field_data : public fixml_base_data
  {
  public:
    fixml_field_data(const std::string& name, const std::string& type) :
      fixml_base_data(name, type) {}

    std::string to_string() const override;

  };

  //----------------------------------------------------------------------------

  class fixml_component_data : public fixml_base_data
  {
  public:
    fixml_component_data(const std::string& name, const std::string& type,
			 const size_t min_occurs, const size_t max_occurs);


    std::string to_string() const override;

    bool is_block() const;
    bool is_group() const;
    bool is_required() const;

    size_t _min_occurs, _max_occurs;
  }; // end fixml_component_data

  //----------------------------------------------------------------------------

  class fixml_fix_data
  {
  public:
    fixml_fix_data() {}
    fixml_fix_data(const std::string& name, const std::string& component_type,
		   const std::string& tag);

    std::string _name;
    std::string _component_type;
    std::string _tag;

  private:
  }; // end class fixml_fix_data

  //----------------------------------------------------------------------------

  class fixml_element_data
  {
  public:
    fixml_element_data(const std::string& name, const std::string& type) :
      _name(name), _type(type) {}

    std::string _name;
    std::string _type;
  };

  //----------------------------------------------------------------------------

} // end namespace fix2xml

inline std::ostream& operator << (std::ostream& os, const fix2xml::fixml_base_data& data)
{
  os << data.to_string();
  return os;
}
