#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReplaceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_977089109");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_354220285");
  elt.add_attribute("TrdDt", "TradeDate_t_1230015506");
  elt.add_attribute("OrigID", "OrigClOrdID_t_817729245");
  elt.add_attribute("ID", "ClOrdID_t_1001890029");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1644713182");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_2113715268");
  elt.add_attribute("ListID", "ListID_t_1981599877");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_160508126");
  elt.add_attribute("Acct", "Account_t_411147757");
  elt.add_attribute("AcctIDSrc", "3");
  elt.add_attribute("AcctTyp", "6");
  elt.add_attribute("DayBkngInst", "1");
  elt.add_attribute("BkngUnit", "0");
  elt.add_attribute("PreallocMeth", "0");
  elt.add_attribute("AllocID", "AllocID_t_1613258181");
  elt.add_attribute("SettlTyp", "7");
  elt.add_attribute("SettlDt", "SettlDate_t_1188121664");
  elt.add_attribute("CshMgn", "2");
  elt.add_attribute("ClrFeeInd", "H");
  elt.add_attribute("HandlInst", "1");
  elt.add_attribute("ExecInst", "i");
  elt.add_attribute("MinQty", "7006827.200000");
  elt.add_attribute("MtchInc", "17802902.400000");
  elt.add_attribute("MxPxLvls", "231937280");
  elt.add_attribute("MaxFloor", "5410762.050000");
  elt.add_attribute("ExDest", "ExDestination_t_1732745049");
  elt.add_attribute("ExDestIDSrc", "G");
  elt.add_attribute("Side", "C");
  elt.add_attribute("TxnTm", "TransactTime_t_932244768");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("Typ", "H");
  elt.add_attribute("PxTyp", "15");
  elt.add_attribute("Px", "6734920.630000");
  elt.add_attribute("PxPrtScp", "1");
  elt.add_attribute("StopPx", "1408714.340000");
  elt.add_attribute("TgtStrategy", "1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1902975569");
  elt.add_attribute("ParticipationRt", "21224713.110000");
  elt.add_attribute("ComplianceID", "ComplianceID_t_331229724");
  elt.add_attribute("SolFlag", "N");
  elt.add_attribute("Ccy", "GBP");
  elt.add_attribute("TmInForce", "6");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_239758879");
  elt.add_attribute("ExpireDt", "ExpireDate_t_283662006");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1924725227");
  elt.add_attribute("GTBkngInst", "0");
  elt.add_attribute("Cpcty", "I");
  elt.add_attribute("Rstctions", "F");
  elt.add_attribute("PrTrdAnon", "false");
  elt.add_attribute("CustCpcty", "2");
  elt.add_attribute("ForexReq", "N");
  elt.add_attribute("SettlCcy", "CAN");
  elt.add_attribute("BkngTyp", "2");
  elt.add_attribute("Txt", "Text_t_1199319000");
  elt.add_attribute("EncTxtLen", "615663450");
  elt.add_attribute("EncTxt", "EncodedText_t_888333209");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1341244595");
  elt.add_attribute("Qty2", "15479082.180000");
  elt.add_attribute("Px2", "3318097.660000");
  elt.add_attribute("PosEfct", "F");
  elt.add_attribute("Covered", "1");
  elt.add_attribute("MaxShow", "10053018.290000");
  elt.add_attribute("LocReqd", "Y");
  elt.add_attribute("CxllationRights", "N");
  elt.add_attribute("MnyLaunderingStat", "3");
  elt.add_attribute("RegistID", "RegistID_t_2005011522");
  elt.add_attribute("Designation", "Designation_t_802748720");
  elt.add_attribute("ManOrdInd", "false");
  elt.add_attribute("CustDrctdOrd", "false");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_280208727");
  elt.add_attribute("CustOrdHdlInst", "NH");
  elt.add_attribute("OrdHndlInstSrc", "1");
  all_values.push_back(OrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("OrderCancelReplaceRequest_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
