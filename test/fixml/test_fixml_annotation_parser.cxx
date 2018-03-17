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

#include <gtest/gtest.h>

#include "data/fixml_type.hxx"
#include "fixml/xsd_annotation_parser.hxx"

#include <iostream>

using namespace std;
using namespace fix2xml;

TEST(fixml_annotation_parser, parse_annotation)
{
  const std::string str =
    "    <xs:annotation>"
    "    <xs:documentation xml:lang=\"en\">NewOrderSingle can be found in Volume4 of the specification </xs:documentation> "
    "    <xs:appinfo>"
    "    <fm:Xref Protocol=\"FIX\" name=\"NewOrderSingle\" ComponentType=\"Message\" MsgID=\"14\" Section=\"Trade\" Category=\"SingleGeneralOrderHandling\"/>"
    "    </xs:appinfo>"
    "    </xs:annotation>";

  xsd_annotation_parser parser;
  fixml_type type;
  parser.parse_type_annotation(str, type);
  EXPECT_EQ("Message", type._fix_data._component_type);
  EXPECT_EQ("NewOrderSingle", type._fix_data._name);

}
