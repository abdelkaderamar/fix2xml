#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1549339206");
  elt.add_attribute("ReqID", "PosReqID_t_2073744963");
  elt.add_attribute("ReqTyp", "0");
  elt.add_attribute("SubReqTyp", "0");
  elt.add_attribute("TotRpts", "1583350896");
  elt.add_attribute("Rslt", "1");
  elt.add_attribute("Unsol", "N");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1320675707");
  elt.add_attribute("SetSesID", "ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1181533018");
  elt.add_attribute("PxTyp", "6");
  elt.add_attribute("SettlCcy", "CHF");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_770790264");
  elt.add_attribute("Acct", "Account_t_501432955");
  elt.add_attribute("AcctIDSrc", "4");
  elt.add_attribute("AcctTyp", "3");
  elt.add_attribute("Ccy", "USD");
  elt.add_attribute("SetPx", "14892690.270000");
  elt.add_attribute("SetPxTyp", "1");
  elt.add_attribute("PriSetPx", "20138187.330000");
  elt.add_attribute("MtchStat", "1");
  elt.add_attribute("RegStat", "A");
  elt.add_attribute("DlvDt", "DeliveryDate_t_106641506");
  elt.add_attribute("ModelTyp", "1");
  elt.add_attribute("PxDelta", "12690880.830000");
  elt.add_attribute("Txt", "Text_t_1646843227");
  elt.add_attribute("EncTxtLen", "1409119425");
  elt.add_attribute("EncTxt", "EncodedText_t_1742317070");
  all_values.push_back(PositionReport_message_t_0);
  all_compo_names.insert("PositionReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
