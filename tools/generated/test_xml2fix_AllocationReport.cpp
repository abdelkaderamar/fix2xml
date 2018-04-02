#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_727071722");
  elt.add_attribute("ID", "AllocID_t_1772845109");
  elt.add_attribute("TransTyp", "0");
  elt.add_attribute("RptRefID", "AllocReportRefID_t_1064096916");
  elt.add_attribute("CxlRplcRsn", "1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1173875904");
  elt.add_attribute("RptTyp", "11");
  elt.add_attribute("Stat", "5");
  elt.add_attribute("RejCode", "2");
  elt.add_attribute("RefID", "RefAllocID_t_796515985");
  elt.add_attribute("ImReqTyp", "5");
  elt.add_attribute("LinkID", "AllocLinkID_t_302822438");
  elt.add_attribute("LinkTyp", "0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_111636005");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1652052152");
  elt.add_attribute("TrdTyp", "8");
  elt.add_attribute("TrdSubTyp", "31");
  elt.add_attribute("MLegRptTyp", "2");
  elt.add_attribute("CustCpcty", "1");
  elt.add_attribute("InptSrc", "TradeInputSource_t_697047766");
  elt.add_attribute("RndPx", "3039422.320000");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1703290012");
  elt.add_attribute("InptDev", "TradeInputDevice_t_2091522087");
  elt.add_attribute("AvgPxInd", "1");
  elt.add_attribute("NoOrdsTyp", "0");
  elt.add_attribute("PrevlyRpted", "N");
  elt.add_attribute("ReversalInd", "true");
  elt.add_attribute("MtchTyp", "A2");
  elt.add_attribute("Side", "2");
  elt.add_attribute("Qty", "1393284.100000");
  elt.add_attribute("QtyTyp", "0");
  elt.add_attribute("LastMkt", "LastMkt_t_2128401339");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1912173520");
  elt.add_attribute("SesID", "5");
  elt.add_attribute("SesSub", "1");
  elt.add_attribute("PxTyp", "16");
  elt.add_attribute("AvgPx", "5949151.770000");
  elt.add_attribute("AvgParPx", "20410825.440000");
  elt.add_attribute("Ccy", "EUR");
  elt.add_attribute("AvgPxPrcsn", "690114881");
  elt.add_attribute("TrdDt", "TradeDate_t_1557636137");
  elt.add_attribute("TxnTm", "TransactTime_t_384746944");
  elt.add_attribute("SettlTyp", "1");
  elt.add_attribute("SettlDt", "SettlDate_t_1669272142");
  elt.add_attribute("BkngTyp", "0");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_783532079");
  elt.add_attribute("Concession", "Concession_t_1258333690");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_807262157");
  elt.add_attribute("NetMny", "NetMoney_t_885250351");
  elt.add_attribute("PosEfct", "O");
  elt.add_attribute("AutoAcceptInd", "false");
  elt.add_attribute("Txt", "Text_t_441056715");
  elt.add_attribute("EncTxtLen", "1899419895");
  elt.add_attribute("EncTxt", "EncodedText_t_985011681");
  elt.add_attribute("NumDaysInt", "1256685255");
  elt.add_attribute("AcrdIntRt", "6857641.750000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_408596781");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_630075716");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_2087093792");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_547925191");
  elt.add_attribute("StartCsh", "StartCash_t_123182938");
  elt.add_attribute("EndCsh", "EndCash_t_2068011483");
  elt.add_attribute("LegalCnfm", "Y");
  elt.add_attribute("TotNoAllocs", "1691705858");
  elt.add_attribute("LastFragment", "N");
  all_values.push_back(AllocationReport_message_t_0);
  all_compo_names.insert("AllocationReport_message_t");

  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

}
