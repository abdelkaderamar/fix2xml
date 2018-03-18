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

#include "data/xml_element.hxx"

using namespace std;
using namespace fix2xml;

TEST(xml_element_test, ctor)
{
  {
    xml_element elt;
    EXPECT_TRUE(elt.empty());
    EXPECT_EQ(string(), elt.name());
  }
  {
    const string name { "foo" };
    xml_element elt(name);
    EXPECT_TRUE(elt.empty());
    EXPECT_EQ(name, elt.name());
  }
  {
    const string name { "foo" };
    xml_element elt(name);
    elt.add_attribute("attr", "value");
    EXPECT_FALSE(elt.empty());
  }
  {
    // If all child elements are empty the parent is empty 
    const string name { "foo" };
    xml_element elt(name);
    xml_element child("bar");
    elt.add_element(child);
    EXPECT_TRUE(elt.empty());
  }
}

TEST(xml_element_test, to_string)
{
  {
    xml_element elt("foo");
    elt.add_attribute("attr1", "value1");
    EXPECT_EQ("<foo attr1='value1'>\n</foo>", elt.to_string());
  }
  {
    xml_element elt("foo");
    elt.add_attribute("attr1", "value1");
    xml_element child("bar");
    child.add_attribute("attr2", "v2");
    child.add_attribute("attr3", "v3");
    elt.add_element(child);
    const std::string expected = "<foo attr1='value1'>\n"
      "  <bar attr2='v2' attr3='v3'>\n"
      "  </bar>\n"
      "</foo>";
    EXPECT_EQ(expected, elt.to_string());
  }
}
