#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionListRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionListRequest, set_fields)
{

  fixml2fix_converter converter {"FIX50SP2.xml", "fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionListRequest_0;
  FIX::MarketID MarketID_31("EXCHANGE_1786963060");
  msg.set(MarketID_31);
  TradingSessionListRequest_0.insert(MarketID_31.getString());
  FIX::MarketSegmentID MarketSegmentID_31("STRING_767594147");
  msg.set(MarketSegmentID_31);
  TradingSessionListRequest_0.insert(MarketSegmentID_31.getString());
  FIX::SecurityExchange SecurityExchange_94("EXCHANGE_69024773");
  msg.set(SecurityExchange_94);
  TradingSessionListRequest_0.insert(SecurityExchange_94.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_17('0');
  msg.set(SubscriptionRequestType_17);
  TradingSessionListRequest_0.insert(SubscriptionRequestType_17.getString());
  FIX::TradSesMethod TradSesMethod_1(1);
  msg.set(TradSesMethod_1);
  TradingSessionListRequest_0.insert(TradSesMethod_1.getString());
  FIX::TradSesMode TradSesMode_1(1);
  msg.set(TradSesMode_1);
  TradingSessionListRequest_0.insert(TradSesMode_1.getString());
  FIX::TradSesReqID TradSesReqID_1("STRING_1891496788");
  msg.set(TradSesReqID_1);
  TradingSessionListRequest_0.insert(TradSesReqID_1.getString());
  FIX::TradingSessionID TradingSessionID_104("STRING_2");
  msg.set(TradingSessionID_104);
  TradingSessionListRequest_0.insert(TradingSessionID_104.getString());
  FIX::TradingSessionSubID TradingSessionSubID_104("STRING_5");
  msg.set(TradingSessionSubID_104);
  TradingSessionListRequest_0.insert(TradingSessionSubID_104.getString());
  all_values.push_back(TradingSessionListRequest_0);


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
