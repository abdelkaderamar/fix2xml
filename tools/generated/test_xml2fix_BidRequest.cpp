#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/BidRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( BidRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"BidReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> BidRequest_message_t_0;
  elt.add_attribute("BidID", "BidID_t_868509782");
  elt.add_attribute("ClBidID", "ClientBidID_t_1812203927");
  elt.add_attribute("BidReqTransTyp", "N");
  elt.add_attribute("ListName", "ListName_t_688864167");
  elt.add_attribute("TotNoReltdSym", "682501958");
  elt.add_attribute("BidTyp", "3");
  elt.add_attribute("NumTkts", "1607220734");
  elt.add_attribute("Ccy", "USD");
  elt.add_attribute("SideValu1", "SideValue1_t_997884329");
  elt.add_attribute("SideValu2", "SideValue2_t_129839981");
  elt.add_attribute("LqdtyIndTyp", "4");
  elt.add_attribute("WtAvgLqdty", "1191886.420000");
  elt.add_attribute("EFP", "N");
  elt.add_attribute("OutMainCntryUNdx", "OutMainCntryUIndex_t_327823425");
  elt.add_attribute("CrssPct", "9265151.290000");
  elt.add_attribute("ProgRptReqs", "3");
  elt.add_attribute("ProgPeriodIntvl", "369569841");
  elt.add_attribute("IncTaxInd", "2");
  elt.add_attribute("ForexReq", "N");
  elt.add_attribute("NumBidders", "771417792");
  elt.add_attribute("TrdDt", "TradeDate_t_1098356598");
  elt.add_attribute("BidTrdTyp", "A");
  elt.add_attribute("BasisPxTyp", "Z");
  elt.add_attribute("StrkTm", "StrikeTime_t_1088245899");
  elt.add_attribute("Txt", "Text_t_1810399895");
  elt.add_attribute("EncTxtLen", "373861086");
  elt.add_attribute("EncTxt", "EncodedText_t_914512129");
  all_values.push_back(BidRequest_message_t_0);
  all_compo_names.insert("BidRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
