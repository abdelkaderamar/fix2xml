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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ListExecute msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ListExecute_0;
  FIX::BidID BidID_2("STRING_849658433");
  msg.set(BidID_2);
  ListExecute_0.insert(BidID_2.getString());
  FIX::ClientBidID ClientBidID_2("STRING_88667882");
  msg.set(ClientBidID_2);
  ListExecute_0.insert(ClientBidID_2.getString());
  FIX::EncodedText EncodedText_42("DATA_928335121");
  msg.set(EncodedText_42);
  ListExecute_0.insert(EncodedText_42.getString());
  FIX::EncodedTextLen EncodedTextLen_42(1267913033);
  msg.set(EncodedTextLen_42);
  ListExecute_0.insert(EncodedTextLen_42.getString());
  FIX::ListID ListID_18("STRING_335239480");
  msg.set(ListID_18);
  ListExecute_0.insert(ListID_18.getString());
  FIX::Text Text_42("STRING_2027137043");
  msg.set(Text_42);
  ListExecute_0.insert(Text_42.getString());
  FIX::TransactTime TransactTime_21(FIX::UTCTIMESTAMP(11, 25, 7, 4, 12, 2005));
  msg.set(TransactTime_21);
  ListExecute_0.insert(TransactTime_21.getString());
  all_values.push_back(ListExecute_0);

  all_compo_names.insert("ListExecute");


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
