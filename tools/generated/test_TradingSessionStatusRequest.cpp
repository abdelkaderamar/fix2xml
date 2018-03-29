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
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatusRequest_0;
  FIX::MarketID MarketID_37("EXCHANGE_1839008233");
  msg.set(MarketID_37);
  TradingSessionStatusRequest_0.insert(MarketID_37.getString());
  FIX::MarketSegmentID MarketSegmentID_37("STRING_1042939712");
  msg.set(MarketSegmentID_37);
  TradingSessionStatusRequest_0.insert(MarketSegmentID_37.getString());
  FIX::SecurityExchange SecurityExchange_112("EXCHANGE_727248566");
  msg.set(SecurityExchange_112);
  TradingSessionStatusRequest_0.insert(SecurityExchange_112.getString());
  FIX::SubscriptionRequestType SubscriptionRequestType_18('2');
  msg.set(SubscriptionRequestType_18);
  TradingSessionStatusRequest_0.insert(SubscriptionRequestType_18.getString());
  FIX::TradSesMethod TradSesMethod_8(2);
  msg.set(TradSesMethod_8);
  TradingSessionStatusRequest_0.insert(TradSesMethod_8.getString());
  FIX::TradSesMode TradSesMode_8(3);
  msg.set(TradSesMode_8);
  TradingSessionStatusRequest_0.insert(TradSesMode_8.getString());
  FIX::TradSesReqID TradSesReqID_4("STRING_1185395535");
  msg.set(TradSesReqID_4);
  TradingSessionStatusRequest_0.insert(TradSesReqID_4.getString());
  FIX::TradingSessionID TradingSessionID_131("STRING_1");
  msg.set(TradingSessionID_131);
  TradingSessionStatusRequest_0.insert(TradingSessionID_131.getString());
  FIX::TradingSessionSubID TradingSessionSubID_131("STRING_5");
  msg.set(TradingSessionSubID_131);
  TradingSessionStatusRequest_0.insert(TradingSessionSubID_131.getString());
  all_values.push_back(TradingSessionStatusRequest_0);

  all_compo_names.insert("TradingSessionStatusRequest");


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
