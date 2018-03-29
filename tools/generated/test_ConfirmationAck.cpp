#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/ConfirmationAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ConfirmationAck, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::ConfirmationAck msg;

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ConfirmationAck_0;
  FIX::AffirmStatus AffirmStatus_0(3);
  msg.set(AffirmStatus_0);
  ConfirmationAck_0.insert(AffirmStatus_0.getString());
  FIX::ConfirmID ConfirmID_1("STRING_1710190719");
  msg.set(ConfirmID_1);
  ConfirmationAck_0.insert(ConfirmID_1.getString());
  FIX::ConfirmRejReason ConfirmRejReason_0(2);
  msg.set(ConfirmRejReason_0);
  ConfirmationAck_0.insert(ConfirmRejReason_0.getString());
  FIX::EncodedText EncodedText_22("DATA_1454730831");
  msg.set(EncodedText_22);
  ConfirmationAck_0.insert(EncodedText_22.getString());
  FIX::EncodedTextLen EncodedTextLen_22(1148557424);
  msg.set(EncodedTextLen_22);
  ConfirmationAck_0.insert(EncodedTextLen_22.getString());
  FIX::MatchStatus MatchStatus_6('2');
  msg.set(MatchStatus_6);
  ConfirmationAck_0.insert(MatchStatus_6.getString());
  FIX::Text Text_22("STRING_951237321");
  msg.set(Text_22);
  ConfirmationAck_0.insert(Text_22.getString());
  FIX::TradeDate TradeDate_8("LOCALMKTDATE_1750275933");
  msg.set(TradeDate_8);
  ConfirmationAck_0.insert(TradeDate_8.getString());
  FIX::TransactTime TransactTime_11(FIX::UTCTIMESTAMP(21, 19, 47, 20, 11, 2007));
  msg.set(TransactTime_11);
  ConfirmationAck_0.insert(TransactTime_11.getString());
  all_values.push_back(ConfirmationAck_0);

  all_compo_names.insert("ConfirmationAck");


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
