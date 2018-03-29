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
  multiset<string> all_compo_names;
  multiset<string> TradingSessionListRequest_0;
  FIX::MarketID MarketID_32("EXCHANGE_1629936129");
  msg.set(MarketID_32);
  TradingSessionListRequest_0.insert(MarketID_32.getString());
  FIX::MarketSegmentID MarketSegmentID_32("STRING_1468834407");
  msg.set(MarketSegmentID_32);
  TradingSessionListRequest_0.insert(MarketSegmentID_32.getString());
  FIX::SecurityExchange SecurityExchange_107("EXCHANGE_1844281015");
  msg.set(SecurityExchange_107);
  TradingSessionListRequest_0.insert(SecurityExchange_107.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_17('2');
  msg.set(SubscriptionRequestType_17);
  TradingSessionListRequest_0.insert(SubscriptionRequestType_17.getString());
  FIX::TradSesMethod TradSesMethod_3(2);
  msg.set(TradSesMethod_3);
  TradingSessionListRequest_0.insert(TradSesMethod_3.getString());
  FIX::TradSesMode TradSesMode_3(1);
  msg.set(TradSesMode_3);
  TradingSessionListRequest_0.insert(TradSesMode_3.getString());
  FIX::TradSesReqID TradSesReqID_1("STRING_1723492660");
  msg.set(TradSesReqID_1);
  TradingSessionListRequest_0.insert(TradSesReqID_1.getString());
  FIX::TradingSessionID TradingSessionID_126("STRING_4");
  msg.set(TradingSessionID_126);
  TradingSessionListRequest_0.insert(TradingSessionID_126.getString());
  FIX::TradingSessionSubID TradingSessionSubID_126("STRING_7");
  msg.set(TradingSessionSubID_126);
  TradingSessionListRequest_0.insert(TradingSessionSubID_126.getString());
  all_values.push_back(TradingSessionListRequest_0);

  all_compo_names.insert("TradingSessionListRequest");


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
