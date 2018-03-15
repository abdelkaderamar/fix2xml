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
