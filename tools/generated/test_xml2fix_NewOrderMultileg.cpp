#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderMultileg.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderMultileg_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdMleg" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderMultileg_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1715566853");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1164148367");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_2014636535");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_209014605");
  elt.add_attribute("TrdDt", "TradeDate_t_1585953153");
  elt.add_attribute("Acct", "Account_t_357711875");
  elt.add_attribute("AcctIDSrc", "5");
  elt.add_attribute("AcctTyp", "8");
  elt.add_attribute("DayBkngInst", "1");
  elt.add_attribute("BkngUnit", "1");
  elt.add_attribute("PreallocMeth", "0");
  elt.add_attribute("AllocID", "AllocID_t_2003431291");
  elt.add_attribute("SettlTyp", "1");
  elt.add_attribute("SettlDt", "SettlDate_t_554728722");
  elt.add_attribute("CshMgn", "2");
  elt.add_attribute("ClrFeeInd", "5");
  elt.add_attribute("HandlInst", "1");
  elt.add_attribute("ExecInst", "J");
  elt.add_attribute("MinQty", "15274455.720000");
  elt.add_attribute("MtchInc", "9480259.340000");
  elt.add_attribute("MxPxLvls", "2000862017");
  elt.add_attribute("MaxFloor", "9398365.060000");
  elt.add_attribute("ExDest", "ExDestination_t_142710732");
  elt.add_attribute("ExDestIDSrc", "G");
  elt.add_attribute("ProcCode", "0");
  elt.add_attribute("Side", "6");
  elt.add_attribute("PrevClsPx", "5806351.170000");
  elt.add_attribute("SwapPnts", "7039318.140000");
  elt.add_attribute("LocReqd", "Y");
  elt.add_attribute("TxnTm", "TransactTime_t_23421523");
  elt.add_attribute("QtyTyp", "2");
  elt.add_attribute("OrdTyp", "D");
  elt.add_attribute("MlegModel", "0");
  elt.add_attribute("MlegPxMeth", "5");
  elt.add_attribute("PxTyp", "6");
  elt.add_attribute("Px", "6260393.950000");
  elt.add_attribute("PxPrtScp", "0");
  elt.add_attribute("StopPx", "21321836.870000");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("ComplianceID", "ComplianceID_t_706148777");
  elt.add_attribute("SolFlag", "Y");
  elt.add_attribute("IOIID", "IOIID_t_1301159427");
  elt.add_attribute("QID", "QuoteID_t_586251802");
  elt.add_attribute("RefOrdID", "RefOrderID_t_2084303277");
  elt.add_attribute("RefOrdIDSrc", "0");
  elt.add_attribute("TmInForce", "5");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1879017032");
  elt.add_attribute("ExpireDt", "ExpireDate_t_151081294");
  elt.add_attribute("ExpireTm", "ExpireTime_t_687601559");
  elt.add_attribute("GTBkngInst", "2");
  elt.add_attribute("Cpcty", "G");
  elt.add_attribute("Rstctions", "1");
  elt.add_attribute("PrTrdAnon", "true");
  elt.add_attribute("CustCpcty", "1");
  elt.add_attribute("ForexReq", "N");
  elt.add_attribute("SettlCcy", "CHF");
  elt.add_attribute("BkngTyp", "2");
  elt.add_attribute("Txt", "Text_t_1153735918");
  elt.add_attribute("EncTxtLen", "377636884");
  elt.add_attribute("EncTxt", "EncodedText_t_490073402");
  elt.add_attribute("PosEfct", "R");
  elt.add_attribute("Covered", "0");
  elt.add_attribute("MaxShow", "20636033.720000");
  elt.add_attribute("TgtStrategy", "2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_43762521");
  elt.add_attribute("RFR", "18473615.680000");
  elt.add_attribute("ParticipationRt", "11063337.560000");
  elt.add_attribute("CxllationRights", "M");
  elt.add_attribute("MnyLaunderingStat", "Y");
  elt.add_attribute("RegistID", "RegistID_t_1812482533");
  elt.add_attribute("Designation", "Designation_t_854101055");
  elt.add_attribute("MLEGRptTypReq", "1");
  all_values.push_back(NewOrderMultileg_message_t_0);
  all_compo_names.insert("NewOrderMultileg_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
