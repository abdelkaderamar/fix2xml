#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/StreamAssignmentReportACK.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( StreamAssignmentReportACK, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::StreamAssignmentReportACK msg;

  list<multiset<string>> all_values;
  multiset<string> StreamAssignmentReportACK_0;
  FIX::EncodedText EncodedText_89("DATA_2057896985");
  msg.set(EncodedText_89);
  StreamAssignmentReportACK_0.insert(EncodedText_89.getString());
  FIX::EncodedTextLen EncodedTextLen_89(1967899558);
  msg.set(EncodedTextLen_89);
  StreamAssignmentReportACK_0.insert(EncodedTextLen_89.getString());
  FIX::StreamAsgnAckType StreamAsgnAckType_0(1);
  msg.set(StreamAsgnAckType_0);
  StreamAssignmentReportACK_0.insert(StreamAsgnAckType_0.getString());
  FIX::StreamAsgnRejReason StreamAsgnRejReason_2(2);
  msg.set(StreamAsgnRejReason_2);
  StreamAssignmentReportACK_0.insert(StreamAsgnRejReason_2.getString());
  FIX::StreamAsgnRptID StreamAsgnRptID_1("STRING_740722244");
  msg.set(StreamAsgnRptID_1);
  StreamAssignmentReportACK_0.insert(StreamAsgnRptID_1.getString());
  FIX::Text Text_89("STRING_1796202210");
  msg.set(Text_89);
  StreamAssignmentReportACK_0.insert(Text_89.getString());
  all_values.push_back(StreamAssignmentReportACK_0);


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  cout << "FIX components" << endl;
  for (const auto& l : all_values) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }
  cout << "XML components" << endl;
  for (const auto& l : elt_lists) {
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << endl;
  }

  for (const auto& xml_l : elt_lists) {
    bool found = false;
    for (const auto& l : all_values) {
      if (includes(l.begin(), l.end(), xml_l.begin(), xml_l.end())) {
        found = true;
        break;
      } // end if includes
    } // end for all_values
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
