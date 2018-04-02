#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralReport_message_t_0;
  elt.add_attribute("RptID", "CollRptID_t_1230626256");
  elt.add_attribute("ID", "CollInquiryID_t_48765228");
  elt.add_attribute("TxnTm", "TransactTime_t_517546971");
  elt.add_attribute("ApplTyp", "0");
  elt.add_attribute("FinclStat", "2");
  elt.add_attribute("Stat", "3");
  elt.add_attribute("TotNumRpts", "1171948829");
  elt.add_attribute("LastRptReqed", "N");
  elt.add_attribute("Acct", "Account_t_1295681898");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1096021682");
  elt.add_attribute("OrdID", "OrderID_t_748910852");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1033134353");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_639230412");
  elt.add_attribute("SettlDt", "SettlDate_t_1470455505");
  elt.add_attribute("Qty", "12318691.780000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("MgnExcess", "MarginExcess_t_212248160");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1504238997");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_240606652");
  elt.add_attribute("Side", "1");
  elt.add_attribute("Px", "11341165.420000");
  elt.add_attribute("PxTyp", "8");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1796558469");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1866462163");
  elt.add_attribute("StartCsh", "StartCash_t_1053176938");
  elt.add_attribute("EndCsh", "EndCash_t_1789054080");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "7");
  elt.add_attribute("SetSesID", "RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_126533262");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1729520117");
  elt.add_attribute("Txt", "Text_t_1087916497");
  elt.add_attribute("EncTxtLen", "1796185424");
  elt.add_attribute("EncTxt", "EncodedText_t_464716697");
  all_values.push_back(CollateralReport_message_t_0);
  all_compo_names.insert("CollateralReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
