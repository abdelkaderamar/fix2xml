#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"

#include <quickfix/fix50sp2/TradingSessionStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatusRequest, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());
  FIX50SP2::TradingSessionStatusRequest msg;

  list<multiset<string>> all_values;
  multiset<string> TradingSessionStatusRequest_0;
  FIX::MarketID MarketID_29("EXCHANGE_1959857709");
  msg.set(MarketID_29);
  TradingSessionStatusRequest_0.insert(MarketID_29.getString());
  FIX::MarketSegmentID MarketSegmentID_29("STRING_220041164");
  msg.set(MarketSegmentID_29);
  TradingSessionStatusRequest_0.insert(MarketSegmentID_29.getString());
  FIX::SecurityExchange SecurityExchange_103("EXCHANGE_1758137541");
  msg.set(SecurityExchange_103);
  TradingSessionStatusRequest_0.insert(SecurityExchange_103.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_18('2');
  msg.set(SubscriptionRequestType_18);
  TradingSessionStatusRequest_0.insert(SubscriptionRequestType_18.getString());
  FIX::TradSesMethod TradSesMethod_4(3);
  msg.set(TradSesMethod_4);
  TradingSessionStatusRequest_0.insert(TradSesMethod_4.getString());
  FIX::TradSesMode TradSesMode_4(3);
  msg.set(TradSesMode_4);
  TradingSessionStatusRequest_0.insert(TradSesMode_4.getString());
  FIX::TradSesReqID TradSesReqID_4("STRING_880015250");
  msg.set(TradSesReqID_4);
  TradingSessionStatusRequest_0.insert(TradSesReqID_4.getString());
  FIX::TradingSessionID TradingSessionID_97("STRING_6");
  msg.set(TradingSessionID_97);
  TradingSessionStatusRequest_0.insert(TradingSessionID_97.getString());
  FIX::TradingSessionSubID TradingSessionSubID_97("STRING_5");
  msg.set(TradingSessionSubID_97);
  TradingSessionStatusRequest_0.insert(TradingSessionSubID_97.getString());
  all_values.push_back(TradingSessionStatusRequest_0);


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
