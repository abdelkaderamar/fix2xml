#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ListStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> ListStatusRequest_0;
  FIX::EncodedText EncodedText_42("DATA_1157683403");
  msg.set(EncodedText_42);
  ListStatusRequest_0.insert(EncodedText_42.getString());
  FIX::EncodedTextLen EncodedTextLen_42(1312818693);
  msg.set(EncodedTextLen_42);
  ListStatusRequest_0.insert(EncodedTextLen_42.getString());
  FIX::ListID ListID_17("STRING_441785928");
  msg.set(ListID_17);
  ListStatusRequest_0.insert(ListID_17.getString());
  FIX::Text Text_42("STRING_1967215525");
  msg.set(Text_42);
  ListStatusRequest_0.insert(Text_42.getString());
  all_values.push_back(ListStatusRequest_0);


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
