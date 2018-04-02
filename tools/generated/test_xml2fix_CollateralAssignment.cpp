#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralAssignment.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralAssignment_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollAsgn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_message_t_0;
  elt.add_attribute("ID", "CollAsgnID_t_118949406");
  elt.add_attribute("ReqID", "CollReqID_t_2025016272");
  elt.add_attribute("AsgnRsn", "4");
  elt.add_attribute("TransTyp", "3");
  elt.add_attribute("RefID", "CollAsgnRefID_t_1280990202");
  elt.add_attribute("TxnTm", "TransactTime_t_1867379413");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1164653178");
  elt.add_attribute("Acct", "Account_t_2076688914");
  elt.add_attribute("AcctTyp", "1");
  elt.add_attribute("ClOrdID", "ClOrdID_t_41485919");
  elt.add_attribute("OrdID", "OrderID_t_1368263976");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_860883399");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1139842517");
  elt.add_attribute("SettlDt", "SettlDate_t_815431036");
  elt.add_attribute("Qty", "8768427.440000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("MgnExcess", "MarginExcess_t_995116898");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_729784972");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_492565409");
  elt.add_attribute("Side", "6");
  elt.add_attribute("Px", "18497324.430000");
  elt.add_attribute("PxTyp", "15");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_2074791374");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1511060433");
  elt.add_attribute("StartCsh", "StartCash_t_1135714732");
  elt.add_attribute("EndCsh", "EndCash_t_668880417");
  elt.add_attribute("SesID", "4");
  elt.add_attribute("SesSub", "5");
  elt.add_attribute("SetSesID", "ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_751074915");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_760940000");
  elt.add_attribute("Txt", "Text_t_63531811");
  elt.add_attribute("EncTxtLen", "989212964");
  elt.add_attribute("EncTxt", "EncodedText_t_2041930202");
  all_values.push_back(CollateralAssignment_message_t_0);
  all_compo_names.insert("CollateralAssignment_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
