#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradingSessionStatus.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradingSessionStatus_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdgSesStat" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradingSessionStatus_message_t_0;
  elt.add_attribute("ReqID", "TradSesReqID_t_1722210659");
  elt.add_attribute("MktID", "MarketID_t_2078063258");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_455873325");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("Method", "3");
  elt.add_attribute("Mode", "1");
  elt.add_attribute("Unsol", "Y");
  elt.add_attribute("Stat", "1");
  elt.add_attribute("TradSesEvent", "2");
  elt.add_attribute("StatRejRsn", "99");
  elt.add_attribute("StartTm", "TradSesStartTime_t_852898184");
  elt.add_attribute("OpenTm", "TradSesOpenTime_t_476411936");
  elt.add_attribute("PreClsTm", "TradSesPreCloseTime_t_1096114013");
  elt.add_attribute("ClsTm", "TradSesCloseTime_t_904923513");
  elt.add_attribute("EndTm", "TradSesEndTime_t_1502015418");
  elt.add_attribute("TotVolTrdd", "9887291.960000");
  elt.add_attribute("Txt", "Text_t_1844284988");
  elt.add_attribute("EncTxtLen", "1215970094");
  elt.add_attribute("EncTxt", "EncodedText_t_1228821223");
  all_values.push_back(TradingSessionStatus_message_t_0);
  all_compo_names.insert("TradingSessionStatus_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
