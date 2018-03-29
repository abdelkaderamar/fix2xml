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
  multiset<string> all_compo_names;
  multiset<string> StreamAssignmentReportACK_0;
  FIX::EncodedText EncodedText_99("DATA_396774676");
  msg.set(EncodedText_99);
  StreamAssignmentReportACK_0.insert(EncodedText_99.getString());
  FIX::EncodedTextLen EncodedTextLen_99(117741279);
  msg.set(EncodedTextLen_99);
  StreamAssignmentReportACK_0.insert(EncodedTextLen_99.getString());
  FIX::StreamAsgnAckType StreamAsgnAckType_0(1);
  msg.set(StreamAsgnAckType_0);
  StreamAssignmentReportACK_0.insert(StreamAsgnAckType_0.getString());
  FIX::StreamAsgnRejReason StreamAsgnRejReason_4(2);
  msg.set(StreamAsgnRejReason_4);
  StreamAssignmentReportACK_0.insert(StreamAsgnRejReason_4.getString());
  FIX::StreamAsgnRptID StreamAsgnRptID_1("STRING_654334884");
  msg.set(StreamAsgnRptID_1);
  StreamAssignmentReportACK_0.insert(StreamAsgnRptID_1.getString());
  FIX::Text Text_99("STRING_1343427786");
  msg.set(Text_99);
  StreamAssignmentReportACK_0.insert(Text_99.getString());
  all_values.push_back(StreamAssignmentReportACK_0);

  all_compo_names.insert("StreamAssignmentReportACK");


  xml_element elt;
  converter.fix2fixml(msg, elt);
  cout << elt.to_string() << endl;
  list<multiset<string>> elt_lists;
  elt.to_list(elt_lists);
  EXPECT_EQ(elt_lists.size(), all_values.size());

  if (elt_lists.size() != all_values.size())  {
    cout << "########################" << endl;
    multiset<string> elt_compo_name;
    elt.all_components(elt_compo_name);
    copy(elt_compo_name.begin(), elt_compo_name.end(), ostream_iterator<string>(cout, "\n"));
    cout << "########################" << endl; 
    copy(all_compo_names.begin(), all_compo_names.end(), ostream_iterator<string>(cout, "\n"));
  }  cout << "FIX components" << endl;
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
