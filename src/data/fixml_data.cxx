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

#include "fixml_data.hxx"

#include <sstream>

namespace fix2xml
{
  using namespace std;

  //----------------------------------------------------------------------------

  std::string fixml_field_data::to_string() const
  {
    stringstream ss;
    ss << "@field name=[" << _name << "]; type=[" << _type << "]";
    return ss.str();
  }

  //----------------------------------------------------------------------------

  fixml_component_data::fixml_component_data(const string& name, const string& type,
                                             const size_t min_occurs, const size_t max_occurs) :
    fixml_base_data(name, type),
    _min_occurs(min_occurs), _max_occurs(max_occurs)
  {
  }

  //----------------------------------------------------------------------------

  string fixml_component_data::to_string() const
  {
    stringstream ss;
    ss << "@component name=[" << _name << "]; type=[" << _type << "]";
    return ss.str();
  }

  //----------------------------------------------------------------------------

  bool fixml_component_data::is_block() const
  {
    return _max_occurs == 1;
  }

  //----------------------------------------------------------------------------

  bool fixml_component_data::is_group() const
  {
    return _max_occurs > 1;
  }

  //----------------------------------------------------------------------------

  bool fixml_component_data::is_required() const
  {
    return _min_occurs > 0;
  }

  //----------------------------------------------------------------------------

  fixml_fix_data::fixml_fix_data(const string& name, const string& component_type,
                                 const string& tag) :
    _name(name), _component_type(component_type), _tag(tag) {
  }

  //----------------------------------------------------------------------------

}
