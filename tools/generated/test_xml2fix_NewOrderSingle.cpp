#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderSingle.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderSingle_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Order" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderSingle_message_t_0;
  elt.add_attribute("ID", "ClOrdID_t_251250687");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_790920685");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_158670720");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1558890322");
  elt.add_attribute("TrdDt", "TradeDate_t_522454069");
  elt.add_attribute("Acct", "Account_t_309752014");
  elt.add_attribute("AcctIDSrc", "3");
  elt.add_attribute("AcctTyp", "2");
  elt.add_attribute("DayBkngInst", "2");
  elt.add_attribute("BkngUnit", "2");
  elt.add_attribute("PreallocMeth", "1");
  elt.add_attribute("AllocID", "AllocID_t_87791921");
  elt.add_attribute("SettlTyp", "1");
  elt.add_attribute("SettlDt", "SettlDate_t_719177316");
  elt.add_attribute("CshMgn", "3");
  elt.add_attribute("ClrFeeInd", "C");
  elt.add_attribute("HandlInst", "2");
  elt.add_attribute("ExecInst", "s");
  elt.add_attribute("MinQty", "12274641.760000");
  elt.add_attribute("MtchInc", "7586071.010000");
  elt.add_attribute("MxPxLvls", "237367292");
  elt.add_attribute("MaxFloor", "11435839.000000");
  elt.add_attribute("ExDest", "ExDestination_t_1880240818");
  elt.add_attribute("ExDestIDSrc", "G");
  elt.add_attribute("ProcCode", "5");
  elt.add_attribute("PrevClsPx", "8390909.260000");
  elt.add_attribute("Side", "B");
  elt.add_attribute("LocReqd", "N");
  elt.add_attribute("TxnTm", "TransactTime_t_504089811");
  elt.add_attribute("QtyTyp", "2");
  elt.add_attribute("Typ", "Q");
  elt.add_attribute("PxTyp", "1");
  elt.add_attribute("Px", "12506780.550000");
  elt.add_attribute("PxPrtScp", "0");
  elt.add_attribute("StopPx", "1667471.730000");
  elt.add_attribute("Ccy", "JPY");
  elt.add_attribute("ComplianceID", "ComplianceID_t_265755407");
  elt.add_attribute("SolFlag", "Y");
  elt.add_attribute("IOIID", "IOIID_t_922467772");
  elt.add_attribute("QID", "QuoteID_t_1992201706");
  elt.add_attribute("TmInForce", "2");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1010259693");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1798412512");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1423638968");
  elt.add_attribute("GTBkngInst", "0");
  elt.add_attribute("Cpcty", "P");
  elt.add_attribute("Rstctions", "5");
  elt.add_attribute("PrTrdAnon", "true");
  elt.add_attribute("CustCpcty", "2");
  elt.add_attribute("ForexReq", "N");
  elt.add_attribute("SettlCcy", "CHF");
  elt.add_attribute("BkngTyp", "0");
  elt.add_attribute("Txt", "Text_t_642924601");
  elt.add_attribute("EncTxtLen", "1455345886");
  elt.add_attribute("EncTxt", "EncodedText_t_332040104");
  elt.add_attribute("SettlDt2", "SettlDate2_t_248580915");
  elt.add_attribute("Qty2", "12964137.620000");
  elt.add_attribute("Px2", "8361299.150000");
  elt.add_attribute("PosEfct", "D");
  elt.add_attribute("Covered", "0");
  elt.add_attribute("MaxShow", "15914704.130000");
  elt.add_attribute("TgtStrategy", "3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1734751202");
  elt.add_attribute("ParticipationRt", "17582175.860000");
  elt.add_attribute("CxllationRights", "M");
  elt.add_attribute("MnyLaunderingStat", "N");
  elt.add_attribute("RegistID", "RegistID_t_2023972993");
  elt.add_attribute("Designation", "Designation_t_264843031");
  elt.add_attribute("ManOrdInd", "true");
  elt.add_attribute("CustDrctdOrd", "true");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_969304683");
  elt.add_attribute("CustOrdHdlInst", "RSV");
  elt.add_attribute("OrdHndlInstSrc", "1");
  elt.add_attribute("RefOrdID", "RefOrderID_t_245460003");
  elt.add_attribute("RefOrdIDSrc", "2");
  all_values.push_back(NewOrderSingle_message_t_0);
  all_compo_names.insert("NewOrderSingle_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
