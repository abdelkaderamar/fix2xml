#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstructionAlert.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAlert_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrAlert" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_message_t_0;
  elt.add_attribute("ID", "AllocID_t_2038619945");
  elt.add_attribute("TransTyp", "1");
  elt.add_attribute("Typ", "7");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1294931539");
  elt.add_attribute("RefID", "RefAllocID_t_1437728562");
  elt.add_attribute("CxlRplcRsn", "1");
  elt.add_attribute("ImReqTyp", "3");
  elt.add_attribute("LinkID", "AllocLinkID_t_1362156866");
  elt.add_attribute("LinkTyp", "0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_1677299466");
  elt.add_attribute("NoOrdsTyp", "0");
  elt.add_attribute("PrevlyRpted", "Y");
  elt.add_attribute("ReversalInd", "true");
  elt.add_attribute("MtchTyp", "M4");
  elt.add_attribute("Side", "F");
  elt.add_attribute("Qty", "12902757.160000");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("LastMkt", "LastMkt_t_1357371157");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1630560676");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "4");
  elt.add_attribute("PxTyp", "14");
  elt.add_attribute("AvgPx", "1838695.360000");
  elt.add_attribute("AvgParPx", "18057340.840000");
  elt.add_attribute("Ccy", "EUR");
  elt.add_attribute("AvgPxPrcsn", "1592907041");
  elt.add_attribute("TrdDt", "TradeDate_t_1625195847");
  elt.add_attribute("TxnTm", "TransactTime_t_1165965502");
  elt.add_attribute("SettlTyp", "2");
  elt.add_attribute("SettlDt", "SettlDate_t_259570033");
  elt.add_attribute("BkngTyp", "1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1955698939");
  elt.add_attribute("Concession", "Concession_t_337025194");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_204549690");
  elt.add_attribute("NetMny", "NetMoney_t_1245943853");
  elt.add_attribute("PosEfct", "F");
  elt.add_attribute("AutoAcceptInd", "false");
  elt.add_attribute("Txt", "Text_t_460617072");
  elt.add_attribute("EncTxtLen", "1947931695");
  elt.add_attribute("EncTxt", "EncodedText_t_1885937247");
  elt.add_attribute("NumDaysInt", "815813110");
  elt.add_attribute("AcrdIntRt", "4001409.910000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_334633473");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_1349229714");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1995070541");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1624909190");
  elt.add_attribute("StartCsh", "StartCash_t_1413378204");
  elt.add_attribute("EndCsh", "EndCash_t_1204958050");
  elt.add_attribute("LegalCnfm", "N");
  elt.add_attribute("TotNoAllocs", "1533479171");
  elt.add_attribute("LastFragment", "N");
  elt.add_attribute("AvgPxInd", "2");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1717348707");
  elt.add_attribute("TrdTyp", "42");
  elt.add_attribute("TrdSubTyp", "33");
  elt.add_attribute("CustCpcty", "1");
  elt.add_attribute("InptSrc", "TradeInputSource_t_705245569");
  elt.add_attribute("MLegRptTyp", "1");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_715743310");
  elt.add_attribute("RndPx", "1197167.600000");
  all_values.push_back(AllocationInstructionAlert_message_t_0);
  all_compo_names.insert("AllocationInstructionAlert_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
