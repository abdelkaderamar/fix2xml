#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Email.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Email_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Email" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Email_message_t_0;
  elt.add_attribute("EmailThreadID", "EmailThreadID_t_1416933792");
  elt.add_attribute("EmailTyp", "1");
  elt.add_attribute("OrigTm", "OrigTime_t_324507204");
  elt.add_attribute("Subject", "Subject_t_1121837659");
  elt.add_attribute("EncSubjectLen", "747868342");
  elt.add_attribute("EncSubject", "EncodedSubject_t_838570403");
  elt.add_attribute("OrdID", "OrderID_t_11843591");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1423915643");
  elt.add_attribute("RawDataLength", "1039832032");
  elt.add_attribute("RawData", "RawData_t_1529838988");
  all_values.push_back(Email_message_t_0);
  all_compo_names.insert("Email_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
