#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ListExecute.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ListExecute, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListExecute msg;

  list<multiset<string>> all_values;
  multiset<string> ListExecute_0;
  FIX::BidID BidID_2("STRING_1289903480");
  msg.set(BidID_2);
  ListExecute_0.insert(BidID_2.getString());
  FIX::ClientBidID ClientBidID_2("STRING_1798662783");
  msg.set(ClientBidID_2);
  ListExecute_0.insert(ClientBidID_2.getString());
  FIX::EncodedText EncodedText_44("DATA_453542795");
  msg.set(EncodedText_44);
  ListExecute_0.insert(EncodedText_44.getString());
  FIX::EncodedTextLen EncodedTextLen_44(504145313);
  msg.set(EncodedTextLen_44);
  ListExecute_0.insert(EncodedTextLen_44.getString());
  FIX::ListID ListID_16("STRING_1049842351");
  msg.set(ListID_16);
  ListExecute_0.insert(ListID_16.getString());
  FIX::Text Text_44("STRING_1863896229");
  msg.set(Text_44);
  ListExecute_0.insert(Text_44.getString());
  FIX::TransactTime TransactTime_21(FIX::UTCTIMESTAMP(5, 43, 25, 12, 2, 2002));
  msg.set(TransactTime_21);
  ListExecute_0.insert(TransactTime_21.getString());
  all_values.push_back(ListExecute_0);


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
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
int main(int argc, char *argv[]) {
  ::testing::InitGoogleTest(&argc, argv);
  fix2xml::fix_env::init_xerces();
  return RUN_ALL_TESTS();
  fix2xml::fix_env::terminate_xerces();
}
