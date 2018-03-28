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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionListRequest msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionListRequest_0;
  FIX::MarketID MarketID_26("EXCHANGE_641081013");
  msg.set(MarketID_26);
  TradingSessionListRequest_0.insert(MarketID_26.getString());
  FIX::MarketSegmentID MarketSegmentID_26("STRING_966448928");
  msg.set(MarketSegmentID_26);
  TradingSessionListRequest_0.insert(MarketSegmentID_26.getString());
  FIX::SecurityExchange SecurityExchange_100("EXCHANGE_1913293060");
  msg.set(SecurityExchange_100);
  TradingSessionListRequest_0.insert(SecurityExchange_100.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_17('0');
  msg.set(SubscriptionRequestType_17);
  TradingSessionListRequest_0.insert(SubscriptionRequestType_17.getString());
  FIX::TradSesMethod TradSesMethod_1(3);
  msg.set(TradSesMethod_1);
  TradingSessionListRequest_0.insert(TradSesMethod_1.getString());
  FIX::TradSesMode TradSesMode_1(3);
  msg.set(TradSesMode_1);
  TradingSessionListRequest_0.insert(TradSesMode_1.getString());
  FIX::TradSesReqID TradSesReqID_1("STRING_1095510206");
  msg.set(TradSesReqID_1);
  TradingSessionListRequest_0.insert(TradSesReqID_1.getString());
  FIX::TradingSessionID TradingSessionID_94("STRING_2");
  msg.set(TradingSessionID_94);
  TradingSessionListRequest_0.insert(TradingSessionID_94.getString());
  FIX::TradingSessionSubID TradingSessionSubID_94("STRING_6");
  msg.set(TradingSessionSubID_94);
  TradingSessionListRequest_0.insert(TradingSessionSubID_94.getString());
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
    EXPECT_TRUE(found);
    if ( ! found) {
      cout << "#### NOT FOUND ###" << endl;
      copy(xml_l.begin(), xml_l.end(), ostream_iterator<string>(cout, " "));      cout << endl;
    } // end if ! found
  } // end for elt_lists
}
