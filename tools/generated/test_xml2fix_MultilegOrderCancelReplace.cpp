#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MultilegOrderCancelReplace.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MultilegOrderCancelReplace_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MlegOrdCxlRplc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_736083939");
  elt.add_attribute("OrigClOrdID", "OrigClOrdID_t_2059809287");
  elt.add_attribute("ClOrdID", "ClOrdID_t_312493280");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1072841803");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_2101212297");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1664155763");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_343628518");
  elt.add_attribute("TrdDt", "TradeDate_t_1964970408");
  elt.add_attribute("Acct", "Account_t_1131489267");
  elt.add_attribute("AcctIDSrc", "5");
  elt.add_attribute("AcctTyp", "8");
  elt.add_attribute("DayBkngInst", "2");
  elt.add_attribute("BkngUnit", "0");
  elt.add_attribute("PreallocMeth", "0");
  elt.add_attribute("AllocID", "AllocID_t_1260659547");
  elt.add_attribute("SettlTyp", "8");
  elt.add_attribute("SettlDt", "SettlDate_t_1322286178");
  elt.add_attribute("CshMgn", "2");
  elt.add_attribute("ClrFeeInd", "5");
  elt.add_attribute("HandlInst", "1");
  elt.add_attribute("ExecInst", "n");
  elt.add_attribute("MinQty", "12218014.420000");
  elt.add_attribute("MtchInc", "9931804.290000");
  elt.add_attribute("MxPxLvls", "442225914");
  elt.add_attribute("MaxFloor", "16235286.790000");
  elt.add_attribute("ExDest", "ExDestination_t_188687435");
  elt.add_attribute("ExDestIDSrc", "C");
  elt.add_attribute("ProcCode", "4");
  elt.add_attribute("Side", "6");
  elt.add_attribute("PrevClsPx", "11852055.620000");
  elt.add_attribute("SwapPnts", "15462468.320000");
  elt.add_attribute("LocReqd", "N");
  elt.add_attribute("TxnTm", "TransactTime_t_1097531201");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("OrdTyp", "D");
  elt.add_attribute("MlegModel", "0");
  elt.add_attribute("MlegPxMeth", "1");
  elt.add_attribute("PxTyp", "18");
  elt.add_attribute("Px", "8687466.110000");
  elt.add_attribute("PxPrtScp", "2");
  elt.add_attribute("StopPx", "15912361.530000");
  elt.add_attribute("Ccy", "CAN");
  elt.add_attribute("ComplianceID", "ComplianceID_t_70842913");
  elt.add_attribute("SolFlag", "Y");
  elt.add_attribute("IOIID", "IOIID_t_112865094");
  elt.add_attribute("QID", "QuoteID_t_1384770190");
  elt.add_attribute("TmInForce", "7");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1142511794");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1279319546");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1059623249");
  elt.add_attribute("GTBkngInst", "1");
  elt.add_attribute("Cpcty", "R");
  elt.add_attribute("Rstctions", "9");
  elt.add_attribute("PrTrdAnon", "true");
  elt.add_attribute("CustCpcty", "4");
  elt.add_attribute("ForexReq", "N");
  elt.add_attribute("SettlCcy", "EUR");
  elt.add_attribute("BkngTyp", "0");
  elt.add_attribute("Txt", "Text_t_372536916");
  elt.add_attribute("EncTxtLen", "1490441018");
  elt.add_attribute("EncTxt", "EncodedText_t_1071419479");
  elt.add_attribute("PosEfct", "C");
  elt.add_attribute("Covered", "0");
  elt.add_attribute("MaxShow", "19272674.350000");
  elt.add_attribute("TgtStrategy", "2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_429626062");
  elt.add_attribute("RFR", "9792602.620000");
  elt.add_attribute("ParticipationRt", "12425909.310000");
  elt.add_attribute("CxllationRights", "M");
  elt.add_attribute("MnyLaunderingStat", "3");
  elt.add_attribute("RegistID", "RegistID_t_376284185");
  elt.add_attribute("Designation", "Designation_t_1788733103");
  elt.add_attribute("MLEGRptTypReq", "0");
  all_values.push_back(MultilegOrderCancelReplace_message_t_0);
  all_compo_names.insert("MultilegOrderCancelReplace_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
