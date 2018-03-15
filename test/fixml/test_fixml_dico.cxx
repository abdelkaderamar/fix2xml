#include <gtest/gtest.h>

#include "fixml/fixml_xsd_parser.hxx"

#include <iostream>

using namespace std;
using namespace fix2xml;

TEST(fixml_xsd_parser, parse)
{

  {
    fixml_xsd_parser parser;
    parser.parse("fixml-empty.xsd");
    auto dico = parser.dico();

    EXPECT_EQ(46, dico->get_type_definitions().size());
  }
  {
    fixml_xsd_parser parser;
    parser.parse("fixml-with-four-types.xsd");
    auto dico = parser.dico();

    EXPECT_EQ(50, dico->get_type_definitions().size());
  }
}
