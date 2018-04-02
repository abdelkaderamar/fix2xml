#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/StreamAssignmentReportACK.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReportACK_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"StrmAsgnRptACK" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReportACK_message_t_0;
  elt.add_attribute("ActTyp", "0");
  elt.add_attribute("RptID", "StreamAsgnRptID_t_1109786565");
  elt.add_attribute("RejRsn", "2");
  elt.add_attribute("Txt", "Text_t_824489019");
  elt.add_attribute("EncTxtLen", "1974824041");
  elt.add_attribute("EncTxt", "EncodedText_t_1397109508");
  all_values.push_back(StreamAssignmentReportACK_message_t_0);
  all_compo_names.insert("StreamAssignmentReportACK_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
