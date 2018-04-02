#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstruction.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstruction_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_message_t_0;
  elt.add_attribute("ID", "AllocID_t_18457332");
  elt.add_attribute("TransTyp", "4");
  elt.add_attribute("Typ", "1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_816936996");
  elt.add_attribute("RefID", "RefAllocID_t_1630079152");
  elt.add_attribute("CxlRplcRsn", "99");
  elt.add_attribute("ImReqTyp", "1");
  elt.add_attribute("LinkID", "AllocLinkID_t_1871942196");
  elt.add_attribute("LinkTyp", "1");
  elt.add_attribute("BkngRefID", "BookingRefID_t_2068153972");
  elt.add_attribute("NoOrdsTyp", "0");
  elt.add_attribute("PrevlyRpted", "N");
  elt.add_attribute("ReversalInd", "false");
  elt.add_attribute("MtchTyp", "AQ");
  elt.add_attribute("Side", "9");
  elt.add_attribute("Qty", "5436201.700000");
  elt.add_attribute("QtyTyp", "1");
  elt.add_attribute("LastMkt", "LastMkt_t_619288158");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_221893341");
  elt.add_attribute("SesID", "1");
  elt.add_attribute("SesSub", "3");
  elt.add_attribute("PxTyp", "15");
  elt.add_attribute("AvgPx", "8165711.760000");
  elt.add_attribute("AvgParPx", "12160945.150000");
  elt.add_attribute("Ccy", "CHF");
  elt.add_attribute("AvgPxPrcsn", "1185181394");
  elt.add_attribute("TrdDt", "TradeDate_t_264020689");
  elt.add_attribute("TxnTm", "TransactTime_t_1775215433");
  elt.add_attribute("SettlTyp", "8");
  elt.add_attribute("SettlDt", "SettlDate_t_914688647");
  elt.add_attribute("BkngTyp", "0");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_525220589");
  elt.add_attribute("Concession", "Concession_t_1424284574");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_463126114");
  elt.add_attribute("NetMny", "NetMoney_t_7816094");
  elt.add_attribute("PosEfct", "O");
  elt.add_attribute("AutoAcceptInd", "true");
  elt.add_attribute("Txt", "Text_t_1879758290");
  elt.add_attribute("EncTxtLen", "525536211");
  elt.add_attribute("EncTxt", "EncodedText_t_573569964");
  elt.add_attribute("NumDaysInt", "1390009540");
  elt.add_attribute("AcrdIntRt", "1818748.390000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_899460804");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_852567192");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_424696303");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1443080974");
  elt.add_attribute("StartCsh", "StartCash_t_1403795242");
  elt.add_attribute("EndCsh", "EndCash_t_1043984462");
  elt.add_attribute("LegalCnfm", "Y");
  elt.add_attribute("TotNoAllocs", "856640199");
  elt.add_attribute("LastFragment", "N");
  elt.add_attribute("AvgPxInd", "0");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1673211375");
  elt.add_attribute("TrdTyp", "30");
  elt.add_attribute("TrdSubTyp", "5");
  elt.add_attribute("CustCpcty", "1");
  elt.add_attribute("InptSrc", "TradeInputSource_t_178220566");
  elt.add_attribute("MLegRptTyp", "3");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_694095842");
  elt.add_attribute("RndPx", "16782155.340000");
  all_values.push_back(AllocationInstruction_message_t_0);
  all_compo_names.insert("AllocationInstruction_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
