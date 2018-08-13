#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataIncrementalRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataIncrementalRefresh_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataInc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataIncrementalRefresh_message_t_0;
  elt.add_attribute("MDBkTyp", "3"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("3");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_1351761712"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("MDFeedType_t_1351761712");
  elt.add_attribute("TrdDt", "TradeDate_t_817287007"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("TradeDate_t_817287007");
  elt.add_attribute("ReqID", "MDReqID_t_1455570868"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("MDReqID_t_1455570868");
  elt.add_attribute("ApplQuDepth", "1633837801"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("1633837801");
  elt.add_attribute("ApplQuResolution", "0"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("0");
  all_values.push_back(MarketDataIncrementalRefresh_message_t_0);
  all_compo_names.insert("MarketDataIncrementalRefresh_message_t");

  { // Hdr
    xml_element Hdr_39{"Hdr"};
    multiset<string> Hdr_39_set;
    Hdr_39.add_attribute("SeqNum", "805120461"); // 1
    Hdr_39_set.insert("805120461");
    Hdr_39.add_attribute("SID", "SenderCompID_t_959553511"); // 1
    Hdr_39_set.insert("SenderCompID_t_959553511");
    Hdr_39.add_attribute("TID", "TargetCompID_t_618833466"); // 1
    Hdr_39_set.insert("TargetCompID_t_618833466");
    Hdr_39.add_attribute("OBID", "OnBehalfOfCompID_t_148609147"); // 1
    Hdr_39_set.insert("OnBehalfOfCompID_t_148609147");
    Hdr_39.add_attribute("D2ID", "DeliverToCompID_t_210042855"); // 1
    Hdr_39_set.insert("DeliverToCompID_t_210042855");
    Hdr_39.add_attribute("SSub", "SenderSubID_t_1207069699"); // 1
    Hdr_39_set.insert("SenderSubID_t_1207069699");
    Hdr_39.add_attribute("SLoc", "SenderLocationID_t_663644700"); // 1
    Hdr_39_set.insert("SenderLocationID_t_663644700");
    Hdr_39.add_attribute("TSub", "TargetSubID_t_2071069307"); // 1
    Hdr_39_set.insert("TargetSubID_t_2071069307");
    Hdr_39.add_attribute("TLoc", "TargetLocationID_t_275514227"); // 1
    Hdr_39_set.insert("TargetLocationID_t_275514227");
    Hdr_39.add_attribute("OBSub", "OnBehalfOfSubID_t_700385283"); // 1
    Hdr_39_set.insert("OnBehalfOfSubID_t_700385283");
    Hdr_39.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1842267707"); // 1
    Hdr_39_set.insert("OnBehalfOfLocationID_t_1842267707");
    Hdr_39.add_attribute("D2Sub", "DeliverToSubID_t_861481148"); // 1
    Hdr_39_set.insert("DeliverToSubID_t_861481148");
    Hdr_39.add_attribute("D2Loc", "DeliverToLocationID_t_1361730407"); // 1
    Hdr_39_set.insert("DeliverToLocationID_t_1361730407");
    Hdr_39.add_attribute("PosDup", "Y"); // 1
    Hdr_39_set.insert("Y");
    Hdr_39.add_attribute("PosRsnd", "N"); // 1
    Hdr_39_set.insert("N");
    Hdr_39.add_attribute("Snt", "SendingTime_t_701142400"); // 1
    Hdr_39_set.insert("SendingTime_t_701142400");
    Hdr_39.add_attribute("OrigSnt", "OrigSendingTime_t_2049097514"); // 1
    Hdr_39_set.insert("OrigSendingTime_t_2049097514");
    Hdr_39.add_attribute("MsgEncd", "MessageEncoding_t_2120138597"); // 1
    Hdr_39_set.insert("MessageEncoding_t_2120138597");
    all_values.push_back(Hdr_39_set);
    all_compo_names.insert("Hdr_39_set");

    {
      xml_element Hop_39{"Hop"};
      multiset<string> Hop_39_set;
      Hop_39.add_attribute("ID", "HopCompID_t_263687350"); // 2
      Hop_39_set.insert("HopCompID_t_263687350");
      Hop_39.add_attribute("Ref", "1385248599"); // 2
      Hop_39_set.insert("1385248599");
      Hop_39.add_attribute("Snt", "HopSendingTime_t_1677037641"); // 2
      Hop_39_set.insert("HopSendingTime_t_1677037641");
      all_values.push_back(Hop_39_set);
      all_compo_names.insert("Hop_39_set");

      Hdr_39.add_element(Hop_39);
    }
    elt.add_element(Hdr_39);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_6{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_6_set;
    ApplSeqCtrl_6.add_attribute("ApplID", "ApplID_t_1552302971"); // 1
    ApplSeqCtrl_6_set.insert("ApplID_t_1552302971");
    ApplSeqCtrl_6.add_attribute("ApplSeqNum", "1375858539"); // 1
    ApplSeqCtrl_6_set.insert("1375858539");
    ApplSeqCtrl_6.add_attribute("ApplLastSeqNum", "112097935"); // 1
    ApplSeqCtrl_6_set.insert("112097935");
    ApplSeqCtrl_6.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_6_set.insert("true");
    all_values.push_back(ApplSeqCtrl_6_set);
    all_compo_names.insert("ApplSeqCtrl_6_set");

    elt.add_element(ApplSeqCtrl_6);
  } // end ApplSeqCtrl
  { // Inc
    xml_element Inc_0{"Inc"};
    multiset<string> Inc_0_set;
    Inc_0.add_attribute("UpdtAct", "5"); // 1
    Inc_0_set.insert("5");
    Inc_0.add_attribute("DelRsn", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("MDSubBkTyp", "1169268004"); // 1
    Inc_0_set.insert("1169268004");
    Inc_0.add_attribute("MktDepth", "950213800"); // 1
    Inc_0_set.insert("950213800");
    Inc_0.add_attribute("Typ", "Y"); // 1
    Inc_0_set.insert("Y");
    Inc_0.add_attribute("ID", "MDEntryID_t_1974388465"); // 1
    Inc_0_set.insert("MDEntryID_t_1974388465");
    Inc_0.add_attribute("RefID", "MDEntryRefID_t_1909767311"); // 1
    Inc_0_set.insert("MDEntryRefID_t_1909767311");
    Inc_0.add_attribute("MDStrmID", "MDStreamID_t_2111393390"); // 1
    Inc_0_set.insert("MDStreamID_t_2111393390");
    Inc_0.add_attribute("FinclStat", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("CorpActn", "J"); // 1
    Inc_0_set.insert("J");
    Inc_0.add_attribute("Px", "11709794.410000"); // 1
    Inc_0_set.insert("11709794.410000");
    Inc_0.add_attribute("PxTyp", "14"); // 1
    Inc_0_set.insert("14");
    Inc_0.add_attribute("OrdTyp", "J"); // 1
    Inc_0_set.insert("J");
    Inc_0.add_attribute("Ccy", "CHF"); // 1
    Inc_0_set.insert("CHF");
    Inc_0.add_attribute("SettlCcy", "USD"); // 1
    Inc_0_set.insert("USD");
    Inc_0.add_attribute("Sz", "5537907.060000"); // 1
    Inc_0_set.insert("5537907.060000");
    Inc_0.add_attribute("LotTyp", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("Dt", "679322938"); // 1
    Inc_0_set.insert("679322938");
    Inc_0.add_attribute("Tm", "1254933106"); // 1
    Inc_0_set.insert("1254933106");
    Inc_0.add_attribute("TickDirctn", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("Mkt", "MDMkt_t_651977887"); // 1
    Inc_0_set.insert("MDMkt_t_651977887");
    Inc_0.add_attribute("SesID", "4"); // 1
    Inc_0_set.insert("4");
    Inc_0.add_attribute("SesSub", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("TrdgStat", "19"); // 1
    Inc_0_set.insert("19");
    Inc_0.add_attribute("HaltRsn", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("QCond", "u"); // 1
    Inc_0_set.insert("u");
    Inc_0.add_attribute("TrdCond", "Y"); // 1
    Inc_0_set.insert("Y");
    Inc_0.add_attribute("TrdTyp", "55"); // 1
    Inc_0_set.insert("55");
    Inc_0.add_attribute("MtchTyp", "MT"); // 1
    Inc_0_set.insert("MT");
    Inc_0.add_attribute("Orig", "MDEntryOriginator_t_1757489462"); // 1
    Inc_0_set.insert("MDEntryOriginator_t_1757489462");
    Inc_0.add_attribute("LctnID", "LocationID_t_72392955"); // 1
    Inc_0_set.insert("LocationID_t_72392955");
    Inc_0.add_attribute("DeskID", "DeskID_t_2007968606"); // 1
    Inc_0_set.insert("DeskID_t_2007968606");
    Inc_0.add_attribute("OpenClsSettlFlag", "4"); // 1
    Inc_0_set.insert("4");
    Inc_0.add_attribute("TmInForce", "8"); // 1
    Inc_0_set.insert("8");
    Inc_0.add_attribute("ExpireDt", "ExpireDate_t_1834873423"); // 1
    Inc_0_set.insert("ExpireDate_t_1834873423");
    Inc_0.add_attribute("ExpireTm", "ExpireTime_t_322503277"); // 1
    Inc_0_set.insert("ExpireTime_t_322503277");
    Inc_0.add_attribute("MinQty", "15288626.200000"); // 1
    Inc_0_set.insert("15288626.200000");
    Inc_0.add_attribute("ExecInst", "a"); // 1
    Inc_0_set.insert("a");
    Inc_0.add_attribute("SellerDays", "294829796"); // 1
    Inc_0_set.insert("294829796");
    Inc_0.add_attribute("OrdID", "OrderID_t_552358413"); // 1
    Inc_0_set.insert("OrderID_t_552358413");
    Inc_0.add_attribute("OrdID2", "SecondaryOrderID_t_302062403"); // 1
    Inc_0_set.insert("SecondaryOrderID_t_302062403");
    Inc_0.add_attribute("EntryID", "QuoteEntryID_t_190741974"); // 1
    Inc_0_set.insert("QuoteEntryID_t_190741974");
    Inc_0.add_attribute("TrdID", "TradeID_t_1998852081"); // 1
    Inc_0_set.insert("TradeID_t_1998852081");
    Inc_0.add_attribute("Buyer", "MDEntryBuyer_t_1641606350"); // 1
    Inc_0_set.insert("MDEntryBuyer_t_1641606350");
    Inc_0.add_attribute("Seller", "MDEntrySeller_t_1928921859"); // 1
    Inc_0_set.insert("MDEntrySeller_t_1928921859");
    Inc_0.add_attribute("NumOfOrds", "11859601"); // 1
    Inc_0_set.insert("11859601");
    Inc_0.add_attribute("PosNo", "47913409"); // 1
    Inc_0_set.insert("47913409");
    Inc_0.add_attribute("Scope", "2"); // 1
    Inc_0_set.insert("2");
    Inc_0.add_attribute("PxDelta", "6911825.390000"); // 1
    Inc_0_set.insert("6911825.390000");
    Inc_0.add_attribute("NetChgPrevDay", "13028465.150000"); // 1
    Inc_0_set.insert("13028465.150000");
    Inc_0.add_attribute("Txt", "Text_t_902584298"); // 1
    Inc_0_set.insert("Text_t_902584298");
    Inc_0.add_attribute("EncTxtLen", "1343160426"); // 1
    Inc_0_set.insert("1343160426");
    Inc_0.add_attribute("EncTxt", "EncodedText_t_673983324"); // 1
    Inc_0_set.insert("EncodedText_t_673983324");
    Inc_0.add_attribute("MDPxLvl", "651729225"); // 1
    Inc_0_set.insert("651729225");
    Inc_0.add_attribute("Cpcty", "P"); // 1
    Inc_0_set.insert("P");
    Inc_0.add_attribute("MDOrigTyp", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("HighPx", "17767326.920000"); // 1
    Inc_0_set.insert("17767326.920000");
    Inc_0.add_attribute("LowPx", "18183221.220000"); // 1
    Inc_0_set.insert("18183221.220000");
    Inc_0.add_attribute("FirstPx", "16866959.680000"); // 1
    Inc_0_set.insert("16866959.680000");
    Inc_0.add_attribute("LastPx", "4679496.460000"); // 1
    Inc_0_set.insert("4679496.460000");
    Inc_0.add_attribute("TrdVol", "14283279.370000"); // 1
    Inc_0_set.insert("14283279.370000");
    Inc_0.add_attribute("SettlTyp", "7"); // 1
    Inc_0_set.insert("7");
    Inc_0.add_attribute("SettlDt", "SettlDate_t_328434605"); // 1
    Inc_0_set.insert("SettlDate_t_328434605");
    Inc_0.add_attribute("TransBkdTm", "TransBkdTime_t_1988547551"); // 1
    Inc_0_set.insert("TransBkdTime_t_1988547551");
    Inc_0.add_attribute("TxnTm", "TransactTime_t_1176558154"); // 1
    Inc_0_set.insert("TransactTime_t_1176558154");
    Inc_0.add_attribute("MDQteTyp", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("RptSeq", "163567181"); // 1
    Inc_0_set.insert("163567181");
    Inc_0.add_attribute("DealingCpcty", "A"); // 1
    Inc_0_set.insert("A");
    Inc_0.add_attribute("MDEntrySpotRt", "18262117.680000"); // 1
    Inc_0_set.insert("18262117.680000");
    Inc_0.add_attribute("MDEntryFwdPnts", "4583969.770000"); // 1
    Inc_0_set.insert("4583969.770000");
    all_values.push_back(Inc_0_set);
    all_compo_names.insert("Inc_0_set");

    {
      xml_element Instrmt_28{"Instrmt"};
      multiset<string> Instrmt_28_set;
      Instrmt_28.add_attribute("Sym", "Symbol_t_1110295540"); // 2
      Instrmt_28_set.insert("Symbol_t_1110295540");
      Instrmt_28.add_attribute("Sfx", "WI"); // 2
      Instrmt_28_set.insert("WI");
      Instrmt_28.add_attribute("ID", "SecurityID_t_649138951"); // 2
      Instrmt_28_set.insert("SecurityID_t_649138951");
      Instrmt_28.add_attribute("Src", "I"); // 2
      Instrmt_28_set.insert("I");
      Instrmt_28.add_attribute("Prod", "4"); // 2
      Instrmt_28_set.insert("4");
      Instrmt_28.add_attribute("ProdCmplx", "ProductComplex_t_430577162"); // 2
      Instrmt_28_set.insert("ProductComplex_t_430577162");
      Instrmt_28.add_attribute("SecGrp", "SecurityGroup_t_973523575"); // 2
      Instrmt_28_set.insert("SecurityGroup_t_973523575");
      Instrmt_28.add_attribute("CFI", "CFICode_t_1670310283"); // 2
      Instrmt_28_set.insert("CFICode_t_1670310283");
      Instrmt_28.add_attribute("SecTyp", "BDN"); // 2
      Instrmt_28_set.insert("BDN");
      Instrmt_28.add_attribute("SubTyp", "SecuritySubType_t_1664706114"); // 2
      Instrmt_28_set.insert("SecuritySubType_t_1664706114");
      Instrmt_28.add_attribute("MMY", "825673150"); // 2
      Instrmt_28_set.insert("825673150");
      Instrmt_28.add_attribute("MatDt", "MaturityDate_t_1724365781"); // 2
      Instrmt_28_set.insert("MaturityDate_t_1724365781");
      Instrmt_28.add_attribute("MatTm", "860382893"); // 2
      Instrmt_28_set.insert("860382893");
      Instrmt_28.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1499656475"); // 2
      Instrmt_28_set.insert("SettleOnOpenFlag_t_1499656475");
      Instrmt_28.add_attribute("AsgnMeth", "228611359"); // 2
      Instrmt_28_set.insert("228611359");
      Instrmt_28.add_attribute("Status", "1"); // 2
      Instrmt_28_set.insert("1");
      Instrmt_28.add_attribute("CpnPmt", "CouponPaymentDate_t_949595931"); // 2
      Instrmt_28_set.insert("CouponPaymentDate_t_949595931");
      Instrmt_28.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_28_set.insert("XR");
      Instrmt_28.add_attribute("Snrty", "SD"); // 2
      Instrmt_28_set.insert("SD");
      Instrmt_28.add_attribute("NotlPctOut", "4888082.520000"); // 2
      Instrmt_28_set.insert("4888082.520000");
      Instrmt_28.add_attribute("OrigNotlPctOut", "3258100.490000"); // 2
      Instrmt_28_set.insert("3258100.490000");
      Instrmt_28.add_attribute("AttchPnt", "13367579.630000"); // 2
      Instrmt_28_set.insert("13367579.630000");
      Instrmt_28.add_attribute("DetchPnt", "1004135.270000"); // 2
      Instrmt_28_set.insert("1004135.270000");
      Instrmt_28.add_attribute("Issued", "IssueDate_t_654244654"); // 2
      Instrmt_28_set.insert("IssueDate_t_654244654");
      Instrmt_28.add_attribute("RepoCollSecTyp", "1177821867"); // 2
      Instrmt_28_set.insert("1177821867");
      Instrmt_28.add_attribute("RepoTrm", "1276971681"); // 2
      Instrmt_28_set.insert("1276971681");
      Instrmt_28.add_attribute("RepoRt", "6700690.350000"); // 2
      Instrmt_28_set.insert("6700690.350000");
      Instrmt_28.add_attribute("Fctr", "13413890.480000"); // 2
      Instrmt_28_set.insert("13413890.480000");
      Instrmt_28.add_attribute("CrdRtg", "CreditRating_t_1834908808"); // 2
      Instrmt_28_set.insert("CreditRating_t_1834908808");
      Instrmt_28.add_attribute("Rgstry", "InstrRegistry_t_348797155"); // 2
      Instrmt_28_set.insert("InstrRegistry_t_348797155");
      Instrmt_28.add_attribute("IssuCtry", "1799786025"); // 2
      Instrmt_28_set.insert("1799786025");
      Instrmt_28.add_attribute("StPrv", "StateOrProvinceOfIssue_t_797720700"); // 2
      Instrmt_28_set.insert("StateOrProvinceOfIssue_t_797720700");
      Instrmt_28.add_attribute("Lcl", "LocaleOfIssue_t_329587678"); // 2
      Instrmt_28_set.insert("LocaleOfIssue_t_329587678");
      Instrmt_28.add_attribute("Redeem", "RedemptionDate_t_301441328"); // 2
      Instrmt_28_set.insert("RedemptionDate_t_301441328");
      Instrmt_28.add_attribute("StrkPx", "17593846.730000"); // 2
      Instrmt_28_set.insert("17593846.730000");
      Instrmt_28.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_28_set.insert("JPY");
      Instrmt_28.add_attribute("StrkMult", "5854246.000000"); // 2
      Instrmt_28_set.insert("5854246.000000");
      Instrmt_28.add_attribute("StrkValu", "14748111.870000"); // 2
      Instrmt_28_set.insert("14748111.870000");
      Instrmt_28.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_28_set.insert("3");
      Instrmt_28.add_attribute("StrkPxBndryPrcsn", "1530006.900000"); // 2
      Instrmt_28_set.insert("1530006.900000");
      Instrmt_28.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_28_set.insert("4");
      Instrmt_28.add_attribute("OptAt", "963029960"); // 2
      Instrmt_28_set.insert("963029960");
      Instrmt_28.add_attribute("Mult", "16526571.650000"); // 2
      Instrmt_28_set.insert("16526571.650000");
      Instrmt_28.add_attribute("MultTyp", "0"); // 2
      Instrmt_28_set.insert("0");
      Instrmt_28.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("MinPxIncr", "4547694.480000"); // 2
      Instrmt_28_set.insert("4547694.480000");
      Instrmt_28.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1217153869"); // 2
      Instrmt_28_set.insert("MinPriceIncrementAmount_t_1217153869");
      Instrmt_28.add_attribute("UOM", "Bcf"); // 2
      Instrmt_28_set.insert("Bcf");
      Instrmt_28.add_attribute("UOMQty", "9435777.000000"); // 2
      Instrmt_28_set.insert("9435777.000000");
      Instrmt_28.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_28_set.insert("Bbl");
      Instrmt_28.add_attribute("PxUOMQty", "2983258.540000"); // 2
      Instrmt_28_set.insert("2983258.540000");
      Instrmt_28.add_attribute("SettlMeth", "C"); // 2
      Instrmt_28_set.insert("C");
      Instrmt_28.add_attribute("ExerStyle", "0"); // 2
      Instrmt_28_set.insert("0");
      Instrmt_28.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("OptPayAmt", "OptPayoutAmount_t_173479261"); // 2
      Instrmt_28_set.insert("OptPayoutAmount_t_173479261");
      Instrmt_28.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_28_set.insert("STD");
      Instrmt_28.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_28_set.insert("FUT");
      Instrmt_28.add_attribute("ListMeth", "1"); // 2
      Instrmt_28_set.insert("1");
      Instrmt_28.add_attribute("CapPx", "10685911.150000"); // 2
      Instrmt_28_set.insert("10685911.150000");
      Instrmt_28.add_attribute("FlrPx", "3223554.980000"); // 2
      Instrmt_28_set.insert("3223554.980000");
      Instrmt_28.add_attribute("PutCall", "1"); // 2
      Instrmt_28_set.insert("1");
      Instrmt_28.add_attribute("FlexInd", "false"); // 2
      Instrmt_28_set.insert("false");
      Instrmt_28.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_28_set.insert("true");
      Instrmt_28.add_attribute("TmUnit", "D"); // 2
      Instrmt_28_set.insert("D");
      Instrmt_28.add_attribute("CpnRt", "12026796.980000"); // 2
      Instrmt_28_set.insert("12026796.980000");
      Instrmt_28.add_attribute("Exch", "SecurityExchange_t_1355815316"); // 2
      Instrmt_28_set.insert("SecurityExchange_t_1355815316");
      Instrmt_28.add_attribute("PosLmt", "855950747"); // 2
      Instrmt_28_set.insert("855950747");
      Instrmt_28.add_attribute("NTPosLmt", "530007237"); // 2
      Instrmt_28_set.insert("530007237");
      Instrmt_28.add_attribute("Issr", "Issuer_t_762131641"); // 2
      Instrmt_28_set.insert("Issuer_t_762131641");
      Instrmt_28.add_attribute("EncIssrLen", "958597814"); // 2
      Instrmt_28_set.insert("958597814");
      Instrmt_28.add_attribute("EncIssr", "EncodedIssuer_t_683007927"); // 2
      Instrmt_28_set.insert("EncodedIssuer_t_683007927");
      Instrmt_28.add_attribute("Desc", "SecurityDesc_t_1892813748"); // 2
      Instrmt_28_set.insert("SecurityDesc_t_1892813748");
      Instrmt_28.add_attribute("EncSecDescLen", "1921627774"); // 2
      Instrmt_28_set.insert("1921627774");
      Instrmt_28.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_188181444"); // 2
      Instrmt_28_set.insert("EncodedSecurityDesc_t_188181444");
      Instrmt_28.add_attribute("Pool", "Pool_t_1104623566"); // 2
      Instrmt_28_set.insert("Pool_t_1104623566");
      Instrmt_28.add_attribute("CSetMo", "974765638"); // 2
      Instrmt_28_set.insert("974765638");
      Instrmt_28.add_attribute("CPPgm", "2"); // 2
      Instrmt_28_set.insert("2");
      Instrmt_28.add_attribute("CPRegT", "CPRegType_t_174293787"); // 2
      Instrmt_28_set.insert("CPRegType_t_174293787");
      Instrmt_28.add_attribute("Dated", "DatedDate_t_2083817177"); // 2
      Instrmt_28_set.insert("DatedDate_t_2083817177");
      Instrmt_28.add_attribute("IntAcrl", "InterestAccrualDate_t_1586528593"); // 2
      Instrmt_28_set.insert("InterestAccrualDate_t_1586528593");
      all_values.push_back(Instrmt_28_set);
      all_compo_names.insert("Instrmt_28_set");

      {
        xml_element AID_31{"AID"};
        multiset<string> AID_31_set;
        AID_31.add_attribute("AltID", "SecurityAltID_t_1717257706"); // 3
        AID_31_set.insert("SecurityAltID_t_1717257706");
        AID_31.add_attribute("AltIDSrc", "E"); // 3
        AID_31_set.insert("E");
        all_values.push_back(AID_31_set);
        all_compo_names.insert("AID_31_set");

        Instrmt_28.add_element(AID_31);
      }
      {
        xml_element SecXML_31{"SecXML"};
        multiset<string> SecXML_31_set;
        SecXML_31.add_attribute("Schema", "SecurityXMLSchema_t_483036173"); // 3
        SecXML_31_set.insert("SecurityXMLSchema_t_483036173");
        all_values.push_back(SecXML_31_set);
        all_compo_names.insert("SecXML_31_set");

        Instrmt_28.add_element(SecXML_31);
      }
      {
        xml_element Evnt_31{"Evnt"};
        multiset<string> Evnt_31_set;
        Evnt_31.add_attribute("EventTyp", "10"); // 3
        Evnt_31_set.insert("10");
        Evnt_31.add_attribute("Dt", "EventDate_t_1710807104"); // 3
        Evnt_31_set.insert("EventDate_t_1710807104");
        Evnt_31.add_attribute("Tm", "EventTime_t_656515435"); // 3
        Evnt_31_set.insert("EventTime_t_656515435");
        Evnt_31.add_attribute("Px", "3392929.430000"); // 3
        Evnt_31_set.insert("3392929.430000");
        Evnt_31.add_attribute("Txt", "EventText_t_233376577"); // 3
        Evnt_31_set.insert("EventText_t_233376577");
        all_values.push_back(Evnt_31_set);
        all_compo_names.insert("Evnt_31_set");

        Instrmt_28.add_element(Evnt_31);
      }
      {
        xml_element Pty_165{"Pty"};
        multiset<string> Pty_165_set;
        Pty_165.add_attribute("ID", "InstrumentPartyID_t_517419856"); // 3
        Pty_165_set.insert("InstrumentPartyID_t_517419856");
        Pty_165.add_attribute("Src", "1"); // 3
        Pty_165_set.insert("1");
        Pty_165.add_attribute("R", "12"); // 3
        Pty_165_set.insert("12");
        all_values.push_back(Pty_165_set);
        all_compo_names.insert("Pty_165_set");

        {
          xml_element Sub_165{"Sub"};
          multiset<string> Sub_165_set;
          Sub_165.add_attribute("ID", "InstrumentPartySubID_t_1176044978"); // 4
          Sub_165_set.insert("InstrumentPartySubID_t_1176044978");
          Sub_165.add_attribute("Typ", "26"); // 4
          Sub_165_set.insert("26");
          all_values.push_back(Sub_165_set);
          all_compo_names.insert("Sub_165_set");

          Pty_165.add_element(Sub_165);
        }
        Instrmt_28.add_element(Pty_165);
      }
      {
        xml_element CmplxEvnt_28{"CmplxEvnt"};
        multiset<string> CmplxEvnt_28_set;
        CmplxEvnt_28.add_attribute("Typ", "8"); // 3
        CmplxEvnt_28_set.insert("8");
        CmplxEvnt_28.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1446571125"); // 3
        CmplxEvnt_28_set.insert("ComplexOptPayoutAmount_t_1446571125");
        CmplxEvnt_28.add_attribute("Px", "18612589.010000"); // 3
        CmplxEvnt_28_set.insert("18612589.010000");
        CmplxEvnt_28.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_28_set.insert("5");
        CmplxEvnt_28.add_attribute("PxBndryPrcsn", "1550382.240000"); // 3
        CmplxEvnt_28_set.insert("1550382.240000");
        CmplxEvnt_28.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_28_set.insert("2");
        CmplxEvnt_28.add_attribute("Cond", "1"); // 3
        CmplxEvnt_28_set.insert("1");
        all_values.push_back(CmplxEvnt_28_set);
        all_compo_names.insert("CmplxEvnt_28_set");

        {
          xml_element EvntDts_28{"EvntDts"};
          multiset<string> EvntDts_28_set;
          EvntDts_28.add_attribute("StartDt", "ComplexEventStartDate_t_1113636039"); // 4
          EvntDts_28_set.insert("ComplexEventStartDate_t_1113636039");
          EvntDts_28.add_attribute("EndDt", "ComplexEventEndDate_t_926790418"); // 4
          EvntDts_28_set.insert("ComplexEventEndDate_t_926790418");
          all_values.push_back(EvntDts_28_set);
          all_compo_names.insert("EvntDts_28_set");

          {
            xml_element EvntTms_28{"EvntTms"};
            multiset<string> EvntTms_28_set;
            EvntTms_28.add_attribute("StartTm", "895322311"); // 5
            EvntTms_28_set.insert("895322311");
            EvntTms_28.add_attribute("EndTm", "887780165"); // 5
            EvntTms_28_set.insert("887780165");
            all_values.push_back(EvntTms_28_set);
            all_compo_names.insert("EvntTms_28_set");

            EvntDts_28.add_element(EvntTms_28);
          }
          CmplxEvnt_28.add_element(EvntDts_28);
        }
        Instrmt_28.add_element(CmplxEvnt_28);
      }
      Inc_0.add_element(Instrmt_28);
    }
    {
      xml_element Undly_40{"Undly"};
      multiset<string> Undly_40_set;
      Undly_40.add_attribute("Sym", "UnderlyingSymbol_t_1114971863"); // 2
      Undly_40_set.insert("UnderlyingSymbol_t_1114971863");
      Undly_40.add_attribute("Sfx", "WI"); // 2
      Undly_40_set.insert("WI");
      Undly_40.add_attribute("ID", "UnderlyingSecurityID_t_1862545804"); // 2
      Undly_40_set.insert("UnderlyingSecurityID_t_1862545804");
      Undly_40.add_attribute("Src", "J"); // 2
      Undly_40_set.insert("J");
      Undly_40.add_attribute("Prod", "11"); // 2
      Undly_40_set.insert("11");
      Undly_40.add_attribute("CFI", "UnderlyingCFICode_t_1798879333"); // 2
      Undly_40_set.insert("UnderlyingCFICode_t_1798879333");
      Undly_40.add_attribute("SecTyp", "CB"); // 2
      Undly_40_set.insert("CB");
      Undly_40.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1744013723"); // 2
      Undly_40_set.insert("UnderlyingSecuritySubType_t_1744013723");
      Undly_40.add_attribute("MMY", "2033538716"); // 2
      Undly_40_set.insert("2033538716");
      Undly_40.add_attribute("Mat", "UnderlyingMaturityDate_t_1680003875"); // 2
      Undly_40_set.insert("UnderlyingMaturityDate_t_1680003875");
      Undly_40.add_attribute("MatTm", "1363512706"); // 2
      Undly_40_set.insert("1363512706");
      Undly_40.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1596862172"); // 2
      Undly_40_set.insert("UnderlyingCouponPaymentDate_t_1596862172");
      Undly_40.add_attribute("RestrctTyp", "MM"); // 2
      Undly_40_set.insert("MM");
      Undly_40.add_attribute("Snrty", "SD"); // 2
      Undly_40_set.insert("SD");
      Undly_40.add_attribute("NotlPctOut", "18302387.490000"); // 2
      Undly_40_set.insert("18302387.490000");
      Undly_40.add_attribute("OrigNotlPctOut", "7064555.180000"); // 2
      Undly_40_set.insert("7064555.180000");
      Undly_40.add_attribute("AttchPnt", "9632060.590000"); // 2
      Undly_40_set.insert("9632060.590000");
      Undly_40.add_attribute("DetchPnt", "2384871.760000"); // 2
      Undly_40_set.insert("2384871.760000");
      Undly_40.add_attribute("Issued", "UnderlyingIssueDate_t_1882500496"); // 2
      Undly_40_set.insert("UnderlyingIssueDate_t_1882500496");
      Undly_40.add_attribute("RepoCollSecTyp", "1621785262"); // 2
      Undly_40_set.insert("1621785262");
      Undly_40.add_attribute("RepoTrm", "1418016077"); // 2
      Undly_40_set.insert("1418016077");
      Undly_40.add_attribute("RepoRt", "11815879.730000"); // 2
      Undly_40_set.insert("11815879.730000");
      Undly_40.add_attribute("Fctr", "13355605.160000"); // 2
      Undly_40_set.insert("13355605.160000");
      Undly_40.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1805876646"); // 2
      Undly_40_set.insert("UnderlyingCreditRating_t_1805876646");
      Undly_40.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1336626198"); // 2
      Undly_40_set.insert("UnderlyingInstrRegistry_t_1336626198");
      Undly_40.add_attribute("Ctry", "1579343007"); // 2
      Undly_40_set.insert("1579343007");
      Undly_40.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_808385208"); // 2
      Undly_40_set.insert("UnderlyingStateOrProvinceOfIssue_t_808385208");
      Undly_40.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_302778589"); // 2
      Undly_40_set.insert("UnderlyingLocaleOfIssue_t_302778589");
      Undly_40.add_attribute("Redeem", "UnderlyingRedemptionDate_t_358649777"); // 2
      Undly_40_set.insert("UnderlyingRedemptionDate_t_358649777");
      Undly_40.add_attribute("StrkPx", "17037075.190000"); // 2
      Undly_40_set.insert("17037075.190000");
      Undly_40.add_attribute("StrkCcy", "JPY"); // 2
      Undly_40_set.insert("JPY");
      Undly_40.add_attribute("OptA", "1556169749"); // 2
      Undly_40_set.insert("1556169749");
      Undly_40.add_attribute("Mult", "9056209.100000"); // 2
      Undly_40_set.insert("9056209.100000");
      Undly_40.add_attribute("MultTyp", "2"); // 2
      Undly_40_set.insert("2");
      Undly_40.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_40_set.insert("1");
      Undly_40.add_attribute("UOM", "tn"); // 2
      Undly_40_set.insert("tn");
      Undly_40.add_attribute("UOMQty", "1335448.020000"); // 2
      Undly_40_set.insert("1335448.020000");
      Undly_40.add_attribute("PxUOM", "tn"); // 2
      Undly_40_set.insert("tn");
      Undly_40.add_attribute("PxUOMQty", "4430716.630000"); // 2
      Undly_40_set.insert("4430716.630000");
      Undly_40.add_attribute("TmUnit", "D"); // 2
      Undly_40_set.insert("D");
      Undly_40.add_attribute("ExerStyle", "2"); // 2
      Undly_40_set.insert("2");
      Undly_40.add_attribute("CpnRt", "20399338.350000"); // 2
      Undly_40_set.insert("20399338.350000");
      Undly_40.add_attribute("Exch", "UnderlyingSecurityExchange_t_2002584339"); // 2
      Undly_40_set.insert("UnderlyingSecurityExchange_t_2002584339");
      Undly_40.add_attribute("Issr", "UnderlyingIssuer_t_2098290548"); // 2
      Undly_40_set.insert("UnderlyingIssuer_t_2098290548");
      Undly_40.add_attribute("EncUndIssrLen", "1722688936"); // 2
      Undly_40_set.insert("1722688936");
      Undly_40.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_561556209"); // 2
      Undly_40_set.insert("EncodedUnderlyingIssuer_t_561556209");
      Undly_40.add_attribute("Desc", "UnderlyingSecurityDesc_t_914012959"); // 2
      Undly_40_set.insert("UnderlyingSecurityDesc_t_914012959");
      Undly_40.add_attribute("EncUndSecDescLen", "1961176112"); // 2
      Undly_40_set.insert("1961176112");
      Undly_40.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_296573058"); // 2
      Undly_40_set.insert("EncodedUnderlyingSecurityDesc_t_296573058");
      Undly_40.add_attribute("CPPgm", "UnderlyingCPProgram_t_388314573"); // 2
      Undly_40_set.insert("UnderlyingCPProgram_t_388314573");
      Undly_40.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1231708541"); // 2
      Undly_40_set.insert("UnderlyingCPRegType_t_1231708541");
      Undly_40.add_attribute("AllocPct", "14781610.310000"); // 2
      Undly_40_set.insert("14781610.310000");
      Undly_40.add_attribute("Ccy", "CHF"); // 2
      Undly_40_set.insert("CHF");
      Undly_40.add_attribute("Qty", "6673035.810000"); // 2
      Undly_40_set.insert("6673035.810000");
      Undly_40.add_attribute("SettlTyp", "2"); // 2
      Undly_40_set.insert("2");
      Undly_40.add_attribute("CashAmt", "UnderlyingCashAmount_t_1698486748"); // 2
      Undly_40_set.insert("UnderlyingCashAmount_t_1698486748");
      Undly_40.add_attribute("CashTyp", "FIXED"); // 2
      Undly_40_set.insert("FIXED");
      Undly_40.add_attribute("Px", "15143842.260000"); // 2
      Undly_40_set.insert("15143842.260000");
      Undly_40.add_attribute("DirtPx", "12547106.190000"); // 2
      Undly_40_set.insert("12547106.190000");
      Undly_40.add_attribute("EndPx", "131572.770000"); // 2
      Undly_40_set.insert("131572.770000");
      Undly_40.add_attribute("StartVal", "UnderlyingStartValue_t_840522218"); // 2
      Undly_40_set.insert("UnderlyingStartValue_t_840522218");
      Undly_40.add_attribute("CurVal", "UnderlyingCurrentValue_t_663396720"); // 2
      Undly_40_set.insert("UnderlyingCurrentValue_t_663396720");
      Undly_40.add_attribute("EndVal", "UnderlyingEndValue_t_918778187"); // 2
      Undly_40_set.insert("UnderlyingEndValue_t_918778187");
      Undly_40.add_attribute("AdjQty", "19245829.670000"); // 2
      Undly_40_set.insert("19245829.670000");
      Undly_40.add_attribute("FxRate", "988388.380000"); // 2
      Undly_40_set.insert("988388.380000");
      Undly_40.add_attribute("FxRateCalc", "D"); // 2
      Undly_40_set.insert("D");
      Undly_40.add_attribute("CapValu", "UnderlyingCapValue_t_2058127769"); // 2
      Undly_40_set.insert("UnderlyingCapValue_t_2058127769");
      Undly_40.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1278294679"); // 2
      Undly_40_set.insert("UnderlyingSettlMethod_t_1278294679");
      Undly_40.add_attribute("PutCall", "1918866446"); // 2
      Undly_40_set.insert("1918866446");
      all_values.push_back(Undly_40_set);
      all_compo_names.insert("Undly_40_set");

      {
        xml_element UndAID_40{"UndAID"};
        multiset<string> UndAID_40_set;
        UndAID_40.add_attribute("AltID", "UnderlyingSecurityAltID_t_1724192798"); // 3
        UndAID_40_set.insert("UnderlyingSecurityAltID_t_1724192798");
        UndAID_40.add_attribute("AltIDSrc", "K"); // 3
        UndAID_40_set.insert("K");
        all_values.push_back(UndAID_40_set);
        all_compo_names.insert("UndAID_40_set");

        Undly_40.add_element(UndAID_40);
      }
      {
        xml_element Stip_67{"Stip"};
        multiset<string> Stip_67_set;
        Stip_67.add_attribute("Typ", "ORDRINCR"); // 3
        Stip_67_set.insert("ORDRINCR");
        Stip_67.add_attribute("Val", "UnderlyingStipValue_t_1579293489"); // 3
        Stip_67_set.insert("UnderlyingStipValue_t_1579293489");
        all_values.push_back(Stip_67_set);
        all_compo_names.insert("Stip_67_set");

        Undly_40.add_element(Stip_67);
      }
      {
        xml_element Pty_166{"Pty"};
        multiset<string> Pty_166_set;
        Pty_166.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1624586478"); // 3
        Pty_166_set.insert("UnderlyingInstrumentPartyID_t_1624586478");
        Pty_166.add_attribute("Src", "D"); // 3
        Pty_166_set.insert("D");
        Pty_166.add_attribute("R", "80"); // 3
        Pty_166_set.insert("80");
        all_values.push_back(Pty_166_set);
        all_compo_names.insert("Pty_166_set");

        {
          xml_element Sub_166{"Sub"};
          multiset<string> Sub_166_set;
          Sub_166.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_391115789"); // 4
          Sub_166_set.insert("UnderlyingInstrumentPartySubID_t_391115789");
          Sub_166.add_attribute("Typ", "32"); // 4
          Sub_166_set.insert("32");
          all_values.push_back(Sub_166_set);
          all_compo_names.insert("Sub_166_set");

          Pty_166.add_element(Sub_166);
        }
        Undly_40.add_element(Pty_166);
      }
      Inc_0.add_element(Undly_40);
    }
    {
      xml_element Leg_40{"Leg"};
      multiset<string> Leg_40_set;
      Leg_40.add_attribute("Sym", "LegSymbol_t_289939108"); // 2
      Leg_40_set.insert("LegSymbol_t_289939108");
      Leg_40.add_attribute("Sfx", "WI"); // 2
      Leg_40_set.insert("WI");
      Leg_40.add_attribute("ID", "LegSecurityID_t_284439280"); // 2
      Leg_40_set.insert("LegSecurityID_t_284439280");
      Leg_40.add_attribute("Src", "5"); // 2
      Leg_40_set.insert("5");
      Leg_40.add_attribute("Prod", "1"); // 2
      Leg_40_set.insert("1");
      Leg_40.add_attribute("CFI", "LegCFICode_t_1174540820"); // 2
      Leg_40_set.insert("LegCFICode_t_1174540820");
      Leg_40.add_attribute("SecTyp", "TAXA"); // 2
      Leg_40_set.insert("TAXA");
      Leg_40.add_attribute("SecSubTyp", "LegSecuritySubType_t_1511556253"); // 2
      Leg_40_set.insert("LegSecuritySubType_t_1511556253");
      Leg_40.add_attribute("MMY", "725543920"); // 2
      Leg_40_set.insert("725543920");
      Leg_40.add_attribute("Mat", "LegMaturityDate_t_1258002244"); // 2
      Leg_40_set.insert("LegMaturityDate_t_1258002244");
      Leg_40.add_attribute("MatTm", "878456831"); // 2
      Leg_40_set.insert("878456831");
      Leg_40.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1980254539"); // 2
      Leg_40_set.insert("LegCouponPaymentDate_t_1980254539");
      Leg_40.add_attribute("Issued", "LegIssueDate_t_1271159521"); // 2
      Leg_40_set.insert("LegIssueDate_t_1271159521");
      Leg_40.add_attribute("RepoCollSecTyp", "1718979049"); // 2
      Leg_40_set.insert("1718979049");
      Leg_40.add_attribute("RepoTrm", "496167612"); // 2
      Leg_40_set.insert("496167612");
      Leg_40.add_attribute("RepoRt", "424540.600000"); // 2
      Leg_40_set.insert("424540.600000");
      Leg_40.add_attribute("Fctr", "14960783.680000"); // 2
      Leg_40_set.insert("14960783.680000");
      Leg_40.add_attribute("CrdRtg", "LegCreditRating_t_595006450"); // 2
      Leg_40_set.insert("LegCreditRating_t_595006450");
      Leg_40.add_attribute("Rgstry", "LegInstrRegistry_t_1518248843"); // 2
      Leg_40_set.insert("LegInstrRegistry_t_1518248843");
      Leg_40.add_attribute("Ctry", "1406722489"); // 2
      Leg_40_set.insert("1406722489");
      Leg_40.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1873301130"); // 2
      Leg_40_set.insert("LegStateOrProvinceOfIssue_t_1873301130");
      Leg_40.add_attribute("Lcl", "LegLocaleOfIssue_t_1289631642"); // 2
      Leg_40_set.insert("LegLocaleOfIssue_t_1289631642");
      Leg_40.add_attribute("Redeem", "LegRedemptionDate_t_983431639"); // 2
      Leg_40_set.insert("LegRedemptionDate_t_983431639");
      Leg_40.add_attribute("Strk", "13995970.600000"); // 2
      Leg_40_set.insert("13995970.600000");
      Leg_40.add_attribute("StrkCcy", "GBP"); // 2
      Leg_40_set.insert("GBP");
      Leg_40.add_attribute("OptA", "876699891"); // 2
      Leg_40_set.insert("876699891");
      Leg_40.add_attribute("Cmult", "1925029.020000"); // 2
      Leg_40_set.insert("1925029.020000");
      Leg_40.add_attribute("MultTyp", "1"); // 2
      Leg_40_set.insert("1");
      Leg_40.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_40_set.insert("0");
      Leg_40.add_attribute("UOM", "Bbl"); // 2
      Leg_40_set.insert("Bbl");
      Leg_40.add_attribute("UOMQty", "6985466.390000"); // 2
      Leg_40_set.insert("6985466.390000");
      Leg_40.add_attribute("PxUOM", "Bu"); // 2
      Leg_40_set.insert("Bu");
      Leg_40.add_attribute("PxUOMQty", "16771565.700000"); // 2
      Leg_40_set.insert("16771565.700000");
      Leg_40.add_attribute("TmUnit", "S"); // 2
      Leg_40_set.insert("S");
      Leg_40.add_attribute("ExerStyle", "1"); // 2
      Leg_40_set.insert("1");
      Leg_40.add_attribute("CpnRt", "7042137.420000"); // 2
      Leg_40_set.insert("7042137.420000");
      Leg_40.add_attribute("Exch", "LegSecurityExchange_t_607083205"); // 2
      Leg_40_set.insert("LegSecurityExchange_t_607083205");
      Leg_40.add_attribute("Issr", "LegIssuer_t_1767140453"); // 2
      Leg_40_set.insert("LegIssuer_t_1767140453");
      Leg_40.add_attribute("EncLegIssrLen", "1429757662"); // 2
      Leg_40_set.insert("1429757662");
      Leg_40.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1865085449"); // 2
      Leg_40_set.insert("EncodedLegIssuer_t_1865085449");
      Leg_40.add_attribute("Desc", "LegSecurityDesc_t_498113636"); // 2
      Leg_40_set.insert("LegSecurityDesc_t_498113636");
      Leg_40.add_attribute("EncLegSecDescLen", "1262528553"); // 2
      Leg_40_set.insert("1262528553");
      Leg_40.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_988761322"); // 2
      Leg_40_set.insert("EncodedLegSecurityDesc_t_988761322");
      Leg_40.add_attribute("RatioQty", "696090.370000"); // 2
      Leg_40_set.insert("696090.370000");
      Leg_40.add_attribute("Side", "6"); // 2
      Leg_40_set.insert("6");
      Leg_40.add_attribute("Ccy", "USD"); // 2
      Leg_40_set.insert("USD");
      Leg_40.add_attribute("Pool", "LegPool_t_206218968"); // 2
      Leg_40_set.insert("LegPool_t_206218968");
      Leg_40.add_attribute("Dated", "LegDatedDate_t_401980578"); // 2
      Leg_40_set.insert("LegDatedDate_t_401980578");
      Leg_40.add_attribute("CSetMo", "824926247"); // 2
      Leg_40_set.insert("824926247");
      Leg_40.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2079520098"); // 2
      Leg_40_set.insert("LegInterestAccrualDate_t_2079520098");
      Leg_40.add_attribute("PutCall", "1691612220"); // 2
      Leg_40_set.insert("1691612220");
      Leg_40.add_attribute("LegOptionRatio", "18083578.870000"); // 2
      Leg_40_set.insert("18083578.870000");
      Leg_40.add_attribute("Px", "13316335.100000"); // 2
      Leg_40_set.insert("13316335.100000");
      all_values.push_back(Leg_40_set);
      all_compo_names.insert("Leg_40_set");

      {
        xml_element LegAID_40{"LegAID"};
        multiset<string> LegAID_40_set;
        LegAID_40.add_attribute("SecAltID", "LegSecurityAltID_t_497593200"); // 3
        LegAID_40_set.insert("LegSecurityAltID_t_497593200");
        LegAID_40.add_attribute("SecAltIDSrc", "A"); // 3
        LegAID_40_set.insert("A");
        all_values.push_back(LegAID_40_set);
        all_compo_names.insert("LegAID_40_set");

        Leg_40.add_element(LegAID_40);
      }
      Inc_0.add_element(Leg_40);
    }
    {
      xml_element Yield_7{"Yield"};
      multiset<string> Yield_7_set;
      Yield_7.add_attribute("Typ", "NEXTREFUND"); // 2
      Yield_7_set.insert("NEXTREFUND");
      Yield_7.add_attribute("Yld", "6900961.020000"); // 2
      Yield_7_set.insert("6900961.020000");
      Yield_7.add_attribute("CalcDt", "YieldCalcDate_t_484723250"); // 2
      Yield_7_set.insert("YieldCalcDate_t_484723250");
      Yield_7.add_attribute("RedDt", "YieldRedemptionDate_t_1328665434"); // 2
      Yield_7_set.insert("YieldRedemptionDate_t_1328665434");
      Yield_7.add_attribute("RedPx", "20828133.920000"); // 2
      Yield_7_set.insert("20828133.920000");
      Yield_7.add_attribute("RedPxTyp", "11"); // 2
      Yield_7_set.insert("11");
      all_values.push_back(Yield_7_set);
      all_compo_names.insert("Yield_7_set");

      Inc_0.add_element(Yield_7);
    }
    {
      xml_element SprdBnchmkCurve_12{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_12_set;
      SprdBnchmkCurve_12.add_attribute("Spread", "12284278.290000"); // 2
      SprdBnchmkCurve_12_set.insert("12284278.290000");
      SprdBnchmkCurve_12.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_12_set.insert("CHF");
      SprdBnchmkCurve_12.add_attribute("Name", "EUREPO"); // 2
      SprdBnchmkCurve_12_set.insert("EUREPO");
      SprdBnchmkCurve_12.add_attribute("Point", "BenchmarkCurvePoint_t_169216408"); // 2
      SprdBnchmkCurve_12_set.insert("BenchmarkCurvePoint_t_169216408");
      SprdBnchmkCurve_12.add_attribute("Px", "21095162.260000"); // 2
      SprdBnchmkCurve_12_set.insert("21095162.260000");
      SprdBnchmkCurve_12.add_attribute("PxTyp", "3"); // 2
      SprdBnchmkCurve_12_set.insert("3");
      SprdBnchmkCurve_12.add_attribute("SecID", "BenchmarkSecurityID_t_1598974070"); // 2
      SprdBnchmkCurve_12_set.insert("BenchmarkSecurityID_t_1598974070");
      SprdBnchmkCurve_12.add_attribute("SecIDSrc", "A"); // 2
      SprdBnchmkCurve_12_set.insert("A");
      all_values.push_back(SprdBnchmkCurve_12_set);
      all_compo_names.insert("SprdBnchmkCurve_12_set");

      Inc_0.add_element(SprdBnchmkCurve_12);
    }
    {
      xml_element RtSrc_5{"RtSrc"};
      multiset<string> RtSrc_5_set;
      RtSrc_5.add_attribute("RtSrc", "2"); // 2
      RtSrc_5_set.insert("2");
      RtSrc_5.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_5_set.insert("1");
      RtSrc_5.add_attribute("RefPg", "ReferencePage_t_668395701"); // 2
      RtSrc_5_set.insert("ReferencePage_t_668395701");
      all_values.push_back(RtSrc_5_set);
      all_compo_names.insert("RtSrc_5_set");

      Inc_0.add_element(RtSrc_5);
    }
    {
      xml_element SecSizesGrp_0{"SecSizesGrp"};
      multiset<string> SecSizesGrp_0_set;
      SecSizesGrp_0.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_0_set.insert("1");
      SecSizesGrp_0.add_attribute("MDSecSize", "3252314.930000"); // 2
      SecSizesGrp_0_set.insert("3252314.930000");
      all_values.push_back(SecSizesGrp_0_set);
      all_compo_names.insert("SecSizesGrp_0_set");

      Inc_0.add_element(SecSizesGrp_0);
    }
    {
      xml_element StatsIndGrp_0{"StatsIndGrp"};
      multiset<string> StatsIndGrp_0_set;
      StatsIndGrp_0.add_attribute("StatsTyp", "1"); // 2
      StatsIndGrp_0_set.insert("1");
      all_values.push_back(StatsIndGrp_0_set);
      all_compo_names.insert("StatsIndGrp_0_set");

      Inc_0.add_element(StatsIndGrp_0);
    }
    {
      xml_element Pty_167{"Pty"};
      multiset<string> Pty_167_set;
      Pty_167.add_attribute("ID", "PartyID_t_1089595266"); // 2
      Pty_167_set.insert("PartyID_t_1089595266");
      Pty_167.add_attribute("Src", "C"); // 2
      Pty_167_set.insert("C");
      Pty_167.add_attribute("R", "38"); // 2
      Pty_167_set.insert("38");
      all_values.push_back(Pty_167_set);
      all_compo_names.insert("Pty_167_set");

      {
        xml_element Sub_167{"Sub"};
        multiset<string> Sub_167_set;
        Sub_167.add_attribute("ID", "PartySubID_t_1914521513"); // 3
        Sub_167_set.insert("PartySubID_t_1914521513");
        Sub_167.add_attribute("Typ", "31"); // 3
        Sub_167_set.insert("31");
        all_values.push_back(Sub_167_set);
        all_compo_names.insert("Sub_167_set");

        Pty_167.add_element(Sub_167);
      }
      Inc_0.add_element(Pty_167);
    }
    elt.add_element(Inc_0);
  } // end Inc
  { // Inc
    xml_element Inc_1{"Inc"};
    multiset<string> Inc_1_set;
    Inc_1.add_attribute("UpdtAct", "4"); // 1
    Inc_1_set.insert("4");
    Inc_1.add_attribute("DelRsn", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("MDSubBkTyp", "1795120421"); // 1
    Inc_1_set.insert("1795120421");
    Inc_1.add_attribute("MktDepth", "2143313434"); // 1
    Inc_1_set.insert("2143313434");
    Inc_1.add_attribute("Typ", "P"); // 1
    Inc_1_set.insert("P");
    Inc_1.add_attribute("ID", "MDEntryID_t_1855970175"); // 1
    Inc_1_set.insert("MDEntryID_t_1855970175");
    Inc_1.add_attribute("RefID", "MDEntryRefID_t_685925888"); // 1
    Inc_1_set.insert("MDEntryRefID_t_685925888");
    Inc_1.add_attribute("MDStrmID", "MDStreamID_t_2136234722"); // 1
    Inc_1_set.insert("MDStreamID_t_2136234722");
    Inc_1.add_attribute("FinclStat", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("CorpActn", "K"); // 1
    Inc_1_set.insert("K");
    Inc_1.add_attribute("Px", "11720209.640000"); // 1
    Inc_1_set.insert("11720209.640000");
    Inc_1.add_attribute("PxTyp", "16"); // 1
    Inc_1_set.insert("16");
    Inc_1.add_attribute("OrdTyp", "J"); // 1
    Inc_1_set.insert("J");
    Inc_1.add_attribute("Ccy", "JPY"); // 1
    Inc_1_set.insert("JPY");
    Inc_1.add_attribute("SettlCcy", "USD"); // 1
    Inc_1_set.insert("USD");
    Inc_1.add_attribute("Sz", "5582933.580000"); // 1
    Inc_1_set.insert("5582933.580000");
    Inc_1.add_attribute("LotTyp", "1"); // 1
    Inc_1_set.insert("1");
    Inc_1.add_attribute("Dt", "168637296"); // 1
    Inc_1_set.insert("168637296");
    Inc_1.add_attribute("Tm", "12592181"); // 1
    Inc_1_set.insert("12592181");
    Inc_1.add_attribute("TickDirctn", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("Mkt", "MDMkt_t_837032997"); // 1
    Inc_1_set.insert("MDMkt_t_837032997");
    Inc_1.add_attribute("SesID", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("SesSub", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("TrdgStat", "26"); // 1
    Inc_1_set.insert("26");
    Inc_1.add_attribute("HaltRsn", "5"); // 1
    Inc_1_set.insert("5");
    Inc_1.add_attribute("QCond", "S"); // 1
    Inc_1_set.insert("S");
    Inc_1.add_attribute("TrdCond", "AI"); // 1
    Inc_1_set.insert("AI");
    Inc_1.add_attribute("TrdTyp", "48"); // 1
    Inc_1_set.insert("48");
    Inc_1.add_attribute("MtchTyp", "6"); // 1
    Inc_1_set.insert("6");
    Inc_1.add_attribute("Orig", "MDEntryOriginator_t_1988988681"); // 1
    Inc_1_set.insert("MDEntryOriginator_t_1988988681");
    Inc_1.add_attribute("LctnID", "LocationID_t_1968528925"); // 1
    Inc_1_set.insert("LocationID_t_1968528925");
    Inc_1.add_attribute("DeskID", "DeskID_t_1388789742"); // 1
    Inc_1_set.insert("DeskID_t_1388789742");
    Inc_1.add_attribute("OpenClsSettlFlag", "5"); // 1
    Inc_1_set.insert("5");
    Inc_1.add_attribute("TmInForce", "9"); // 1
    Inc_1_set.insert("9");
    Inc_1.add_attribute("ExpireDt", "ExpireDate_t_1097276269"); // 1
    Inc_1_set.insert("ExpireDate_t_1097276269");
    Inc_1.add_attribute("ExpireTm", "ExpireTime_t_523260708"); // 1
    Inc_1_set.insert("ExpireTime_t_523260708");
    Inc_1.add_attribute("MinQty", "14613078.230000"); // 1
    Inc_1_set.insert("14613078.230000");
    Inc_1.add_attribute("ExecInst", "k"); // 1
    Inc_1_set.insert("k");
    Inc_1.add_attribute("SellerDays", "1144516340"); // 1
    Inc_1_set.insert("1144516340");
    Inc_1.add_attribute("OrdID", "OrderID_t_485845140"); // 1
    Inc_1_set.insert("OrderID_t_485845140");
    Inc_1.add_attribute("OrdID2", "SecondaryOrderID_t_105040725"); // 1
    Inc_1_set.insert("SecondaryOrderID_t_105040725");
    Inc_1.add_attribute("EntryID", "QuoteEntryID_t_1230774639"); // 1
    Inc_1_set.insert("QuoteEntryID_t_1230774639");
    Inc_1.add_attribute("TrdID", "TradeID_t_1012815478"); // 1
    Inc_1_set.insert("TradeID_t_1012815478");
    Inc_1.add_attribute("Buyer", "MDEntryBuyer_t_1707148897"); // 1
    Inc_1_set.insert("MDEntryBuyer_t_1707148897");
    Inc_1.add_attribute("Seller", "MDEntrySeller_t_1486249345"); // 1
    Inc_1_set.insert("MDEntrySeller_t_1486249345");
    Inc_1.add_attribute("NumOfOrds", "1501818394"); // 1
    Inc_1_set.insert("1501818394");
    Inc_1.add_attribute("PosNo", "117958607"); // 1
    Inc_1_set.insert("117958607");
    Inc_1.add_attribute("Scope", "1"); // 1
    Inc_1_set.insert("1");
    Inc_1.add_attribute("PxDelta", "16704556.900000"); // 1
    Inc_1_set.insert("16704556.900000");
    Inc_1.add_attribute("NetChgPrevDay", "1305507.880000"); // 1
    Inc_1_set.insert("1305507.880000");
    Inc_1.add_attribute("Txt", "Text_t_1614198578"); // 1
    Inc_1_set.insert("Text_t_1614198578");
    Inc_1.add_attribute("EncTxtLen", "360005040"); // 1
    Inc_1_set.insert("360005040");
    Inc_1.add_attribute("EncTxt", "EncodedText_t_1814534477"); // 1
    Inc_1_set.insert("EncodedText_t_1814534477");
    Inc_1.add_attribute("MDPxLvl", "212930527"); // 1
    Inc_1_set.insert("212930527");
    Inc_1.add_attribute("Cpcty", "G"); // 1
    Inc_1_set.insert("G");
    Inc_1.add_attribute("MDOrigTyp", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("HighPx", "14905965.850000"); // 1
    Inc_1_set.insert("14905965.850000");
    Inc_1.add_attribute("LowPx", "10924339.210000"); // 1
    Inc_1_set.insert("10924339.210000");
    Inc_1.add_attribute("FirstPx", "6862793.090000"); // 1
    Inc_1_set.insert("6862793.090000");
    Inc_1.add_attribute("LastPx", "10842659.060000"); // 1
    Inc_1_set.insert("10842659.060000");
    Inc_1.add_attribute("TrdVol", "9339389.540000"); // 1
    Inc_1_set.insert("9339389.540000");
    Inc_1.add_attribute("SettlTyp", "C"); // 1
    Inc_1_set.insert("C");
    Inc_1.add_attribute("SettlDt", "SettlDate_t_325572000"); // 1
    Inc_1_set.insert("SettlDate_t_325572000");
    Inc_1.add_attribute("TransBkdTm", "TransBkdTime_t_771273774"); // 1
    Inc_1_set.insert("TransBkdTime_t_771273774");
    Inc_1.add_attribute("TxnTm", "TransactTime_t_1979881335"); // 1
    Inc_1_set.insert("TransactTime_t_1979881335");
    Inc_1.add_attribute("MDQteTyp", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("RptSeq", "1294534482"); // 1
    Inc_1_set.insert("1294534482");
    Inc_1.add_attribute("DealingCpcty", "A"); // 1
    Inc_1_set.insert("A");
    Inc_1.add_attribute("MDEntrySpotRt", "14097928.520000"); // 1
    Inc_1_set.insert("14097928.520000");
    Inc_1.add_attribute("MDEntryFwdPnts", "2915671.740000"); // 1
    Inc_1_set.insert("2915671.740000");
    all_values.push_back(Inc_1_set);
    all_compo_names.insert("Inc_1_set");

    {
      xml_element Instrmt_29{"Instrmt"};
      multiset<string> Instrmt_29_set;
      Instrmt_29.add_attribute("Sym", "Symbol_t_1779550650"); // 2
      Instrmt_29_set.insert("Symbol_t_1779550650");
      Instrmt_29.add_attribute("Sfx", "WI"); // 2
      Instrmt_29_set.insert("WI");
      Instrmt_29.add_attribute("ID", "SecurityID_t_1522341813"); // 2
      Instrmt_29_set.insert("SecurityID_t_1522341813");
      Instrmt_29.add_attribute("Src", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("Prod", "8"); // 2
      Instrmt_29_set.insert("8");
      Instrmt_29.add_attribute("ProdCmplx", "ProductComplex_t_861107511"); // 2
      Instrmt_29_set.insert("ProductComplex_t_861107511");
      Instrmt_29.add_attribute("SecGrp", "SecurityGroup_t_2146700875"); // 2
      Instrmt_29_set.insert("SecurityGroup_t_2146700875");
      Instrmt_29.add_attribute("CFI", "CFICode_t_1192457434"); // 2
      Instrmt_29_set.insert("CFICode_t_1192457434");
      Instrmt_29.add_attribute("SecTyp", "MIO"); // 2
      Instrmt_29_set.insert("MIO");
      Instrmt_29.add_attribute("SubTyp", "SecuritySubType_t_1669672917"); // 2
      Instrmt_29_set.insert("SecuritySubType_t_1669672917");
      Instrmt_29.add_attribute("MMY", "1323008222"); // 2
      Instrmt_29_set.insert("1323008222");
      Instrmt_29.add_attribute("MatDt", "MaturityDate_t_1521036915"); // 2
      Instrmt_29_set.insert("MaturityDate_t_1521036915");
      Instrmt_29.add_attribute("MatTm", "2029677957"); // 2
      Instrmt_29_set.insert("2029677957");
      Instrmt_29.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_990059052"); // 2
      Instrmt_29_set.insert("SettleOnOpenFlag_t_990059052");
      Instrmt_29.add_attribute("AsgnMeth", "1733967442"); // 2
      Instrmt_29_set.insert("1733967442");
      Instrmt_29.add_attribute("Status", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("CpnPmt", "CouponPaymentDate_t_1283205188"); // 2
      Instrmt_29_set.insert("CouponPaymentDate_t_1283205188");
      Instrmt_29.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_29_set.insert("XR");
      Instrmt_29.add_attribute("Snrty", "SR"); // 2
      Instrmt_29_set.insert("SR");
      Instrmt_29.add_attribute("NotlPctOut", "19694844.970000"); // 2
      Instrmt_29_set.insert("19694844.970000");
      Instrmt_29.add_attribute("OrigNotlPctOut", "138626.370000"); // 2
      Instrmt_29_set.insert("138626.370000");
      Instrmt_29.add_attribute("AttchPnt", "5102490.100000"); // 2
      Instrmt_29_set.insert("5102490.100000");
      Instrmt_29.add_attribute("DetchPnt", "3293254.350000"); // 2
      Instrmt_29_set.insert("3293254.350000");
      Instrmt_29.add_attribute("Issued", "IssueDate_t_339434637"); // 2
      Instrmt_29_set.insert("IssueDate_t_339434637");
      Instrmt_29.add_attribute("RepoCollSecTyp", "1281522784"); // 2
      Instrmt_29_set.insert("1281522784");
      Instrmt_29.add_attribute("RepoTrm", "161723122"); // 2
      Instrmt_29_set.insert("161723122");
      Instrmt_29.add_attribute("RepoRt", "17622829.070000"); // 2
      Instrmt_29_set.insert("17622829.070000");
      Instrmt_29.add_attribute("Fctr", "4285736.180000"); // 2
      Instrmt_29_set.insert("4285736.180000");
      Instrmt_29.add_attribute("CrdRtg", "CreditRating_t_1455428633"); // 2
      Instrmt_29_set.insert("CreditRating_t_1455428633");
      Instrmt_29.add_attribute("Rgstry", "InstrRegistry_t_1024592112"); // 2
      Instrmt_29_set.insert("InstrRegistry_t_1024592112");
      Instrmt_29.add_attribute("IssuCtry", "720140793"); // 2
      Instrmt_29_set.insert("720140793");
      Instrmt_29.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1087495635"); // 2
      Instrmt_29_set.insert("StateOrProvinceOfIssue_t_1087495635");
      Instrmt_29.add_attribute("Lcl", "LocaleOfIssue_t_391942041"); // 2
      Instrmt_29_set.insert("LocaleOfIssue_t_391942041");
      Instrmt_29.add_attribute("Redeem", "RedemptionDate_t_94998958"); // 2
      Instrmt_29_set.insert("RedemptionDate_t_94998958");
      Instrmt_29.add_attribute("StrkPx", "17323781.160000"); // 2
      Instrmt_29_set.insert("17323781.160000");
      Instrmt_29.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_29_set.insert("EUR");
      Instrmt_29.add_attribute("StrkMult", "17315953.430000"); // 2
      Instrmt_29_set.insert("17315953.430000");
      Instrmt_29.add_attribute("StrkValu", "5114146.540000"); // 2
      Instrmt_29_set.insert("5114146.540000");
      Instrmt_29.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_29_set.insert("3");
      Instrmt_29.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_29_set.insert("3");
      Instrmt_29.add_attribute("StrkPxBndryPrcsn", "18344228.760000"); // 2
      Instrmt_29_set.insert("18344228.760000");
      Instrmt_29.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("OptAt", "1135978922"); // 2
      Instrmt_29_set.insert("1135978922");
      Instrmt_29.add_attribute("Mult", "6769982.800000"); // 2
      Instrmt_29_set.insert("6769982.800000");
      Instrmt_29.add_attribute("MultTyp", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_29_set.insert("0");
      Instrmt_29.add_attribute("MinPxIncr", "19602034.690000"); // 2
      Instrmt_29_set.insert("19602034.690000");
      Instrmt_29.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_900062246"); // 2
      Instrmt_29_set.insert("MinPriceIncrementAmount_t_900062246");
      Instrmt_29.add_attribute("UOM", "MWh"); // 2
      Instrmt_29_set.insert("MWh");
      Instrmt_29.add_attribute("UOMQty", "17822043.180000"); // 2
      Instrmt_29_set.insert("17822043.180000");
      Instrmt_29.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_29_set.insert("MMBtu");
      Instrmt_29.add_attribute("PxUOMQty", "18538977.710000"); // 2
      Instrmt_29_set.insert("18538977.710000");
      Instrmt_29.add_attribute("SettlMeth", "C"); // 2
      Instrmt_29_set.insert("C");
      Instrmt_29.add_attribute("ExerStyle", "0"); // 2
      Instrmt_29_set.insert("0");
      Instrmt_29.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_29_set.insert("3");
      Instrmt_29.add_attribute("OptPayAmt", "OptPayoutAmount_t_125769228"); // 2
      Instrmt_29_set.insert("OptPayoutAmount_t_125769228");
      Instrmt_29.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_29_set.insert("STD");
      Instrmt_29.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_29_set.insert("FUT");
      Instrmt_29.add_attribute("ListMeth", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("CapPx", "18927508.920000"); // 2
      Instrmt_29_set.insert("18927508.920000");
      Instrmt_29.add_attribute("FlrPx", "21366513.190000"); // 2
      Instrmt_29_set.insert("21366513.190000");
      Instrmt_29.add_attribute("PutCall", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("FlexInd", "true"); // 2
      Instrmt_29_set.insert("true");
      Instrmt_29.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_29_set.insert("true");
      Instrmt_29.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_29_set.insert("Wk");
      Instrmt_29.add_attribute("CpnRt", "16036501.540000"); // 2
      Instrmt_29_set.insert("16036501.540000");
      Instrmt_29.add_attribute("Exch", "SecurityExchange_t_1040273099"); // 2
      Instrmt_29_set.insert("SecurityExchange_t_1040273099");
      Instrmt_29.add_attribute("PosLmt", "1837699660"); // 2
      Instrmt_29_set.insert("1837699660");
      Instrmt_29.add_attribute("NTPosLmt", "2115064808"); // 2
      Instrmt_29_set.insert("2115064808");
      Instrmt_29.add_attribute("Issr", "Issuer_t_1903217906"); // 2
      Instrmt_29_set.insert("Issuer_t_1903217906");
      Instrmt_29.add_attribute("EncIssrLen", "944000624"); // 2
      Instrmt_29_set.insert("944000624");
      Instrmt_29.add_attribute("EncIssr", "EncodedIssuer_t_1802004036"); // 2
      Instrmt_29_set.insert("EncodedIssuer_t_1802004036");
      Instrmt_29.add_attribute("Desc", "SecurityDesc_t_2139715979"); // 2
      Instrmt_29_set.insert("SecurityDesc_t_2139715979");
      Instrmt_29.add_attribute("EncSecDescLen", "2079979546"); // 2
      Instrmt_29_set.insert("2079979546");
      Instrmt_29.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_331518669"); // 2
      Instrmt_29_set.insert("EncodedSecurityDesc_t_331518669");
      Instrmt_29.add_attribute("Pool", "Pool_t_1962697847"); // 2
      Instrmt_29_set.insert("Pool_t_1962697847");
      Instrmt_29.add_attribute("CSetMo", "1699834603"); // 2
      Instrmt_29_set.insert("1699834603");
      Instrmt_29.add_attribute("CPPgm", "99"); // 2
      Instrmt_29_set.insert("99");
      Instrmt_29.add_attribute("CPRegT", "CPRegType_t_715276445"); // 2
      Instrmt_29_set.insert("CPRegType_t_715276445");
      Instrmt_29.add_attribute("Dated", "DatedDate_t_895999716"); // 2
      Instrmt_29_set.insert("DatedDate_t_895999716");
      Instrmt_29.add_attribute("IntAcrl", "InterestAccrualDate_t_1926442808"); // 2
      Instrmt_29_set.insert("InterestAccrualDate_t_1926442808");
      all_values.push_back(Instrmt_29_set);
      all_compo_names.insert("Instrmt_29_set");

      {
        xml_element AID_32{"AID"};
        multiset<string> AID_32_set;
        AID_32.add_attribute("AltID", "SecurityAltID_t_1629201329"); // 3
        AID_32_set.insert("SecurityAltID_t_1629201329");
        AID_32.add_attribute("AltIDSrc", "7"); // 3
        AID_32_set.insert("7");
        all_values.push_back(AID_32_set);
        all_compo_names.insert("AID_32_set");

        Instrmt_29.add_element(AID_32);
      }
      {
        xml_element SecXML_32{"SecXML"};
        multiset<string> SecXML_32_set;
        SecXML_32.add_attribute("Schema", "SecurityXMLSchema_t_1890488914"); // 3
        SecXML_32_set.insert("SecurityXMLSchema_t_1890488914");
        all_values.push_back(SecXML_32_set);
        all_compo_names.insert("SecXML_32_set");

        Instrmt_29.add_element(SecXML_32);
      }
      {
        xml_element Evnt_32{"Evnt"};
        multiset<string> Evnt_32_set;
        Evnt_32.add_attribute("EventTyp", "3"); // 3
        Evnt_32_set.insert("3");
        Evnt_32.add_attribute("Dt", "EventDate_t_1590350748"); // 3
        Evnt_32_set.insert("EventDate_t_1590350748");
        Evnt_32.add_attribute("Tm", "EventTime_t_2016258143"); // 3
        Evnt_32_set.insert("EventTime_t_2016258143");
        Evnt_32.add_attribute("Px", "16032359.820000"); // 3
        Evnt_32_set.insert("16032359.820000");
        Evnt_32.add_attribute("Txt", "EventText_t_859377626"); // 3
        Evnt_32_set.insert("EventText_t_859377626");
        all_values.push_back(Evnt_32_set);
        all_compo_names.insert("Evnt_32_set");

        Instrmt_29.add_element(Evnt_32);
      }
      {
        xml_element Pty_168{"Pty"};
        multiset<string> Pty_168_set;
        Pty_168.add_attribute("ID", "InstrumentPartyID_t_1449972356"); // 3
        Pty_168_set.insert("InstrumentPartyID_t_1449972356");
        Pty_168.add_attribute("Src", "I"); // 3
        Pty_168_set.insert("I");
        Pty_168.add_attribute("R", "64"); // 3
        Pty_168_set.insert("64");
        all_values.push_back(Pty_168_set);
        all_compo_names.insert("Pty_168_set");

        {
          xml_element Sub_168{"Sub"};
          multiset<string> Sub_168_set;
          Sub_168.add_attribute("ID", "InstrumentPartySubID_t_1971182205"); // 4
          Sub_168_set.insert("InstrumentPartySubID_t_1971182205");
          Sub_168.add_attribute("Typ", "19"); // 4
          Sub_168_set.insert("19");
          all_values.push_back(Sub_168_set);
          all_compo_names.insert("Sub_168_set");

          Pty_168.add_element(Sub_168);
        }
        Instrmt_29.add_element(Pty_168);
      }
      {
        xml_element CmplxEvnt_29{"CmplxEvnt"};
        multiset<string> CmplxEvnt_29_set;
        CmplxEvnt_29.add_attribute("Typ", "7"); // 3
        CmplxEvnt_29_set.insert("7");
        CmplxEvnt_29.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2077286522"); // 3
        CmplxEvnt_29_set.insert("ComplexOptPayoutAmount_t_2077286522");
        CmplxEvnt_29.add_attribute("Px", "9418790.190000"); // 3
        CmplxEvnt_29_set.insert("9418790.190000");
        CmplxEvnt_29.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_29_set.insert("3");
        CmplxEvnt_29.add_attribute("PxBndryPrcsn", "17675025.340000"); // 3
        CmplxEvnt_29_set.insert("17675025.340000");
        CmplxEvnt_29.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_29_set.insert("1");
        CmplxEvnt_29.add_attribute("Cond", "2"); // 3
        CmplxEvnt_29_set.insert("2");
        all_values.push_back(CmplxEvnt_29_set);
        all_compo_names.insert("CmplxEvnt_29_set");

        {
          xml_element EvntDts_29{"EvntDts"};
          multiset<string> EvntDts_29_set;
          EvntDts_29.add_attribute("StartDt", "ComplexEventStartDate_t_564019511"); // 4
          EvntDts_29_set.insert("ComplexEventStartDate_t_564019511");
          EvntDts_29.add_attribute("EndDt", "ComplexEventEndDate_t_563980567"); // 4
          EvntDts_29_set.insert("ComplexEventEndDate_t_563980567");
          all_values.push_back(EvntDts_29_set);
          all_compo_names.insert("EvntDts_29_set");

          {
            xml_element EvntTms_29{"EvntTms"};
            multiset<string> EvntTms_29_set;
            EvntTms_29.add_attribute("StartTm", "1720951617"); // 5
            EvntTms_29_set.insert("1720951617");
            EvntTms_29.add_attribute("EndTm", "496515409"); // 5
            EvntTms_29_set.insert("496515409");
            all_values.push_back(EvntTms_29_set);
            all_compo_names.insert("EvntTms_29_set");

            EvntDts_29.add_element(EvntTms_29);
          }
          CmplxEvnt_29.add_element(EvntDts_29);
        }
        Instrmt_29.add_element(CmplxEvnt_29);
      }
      Inc_1.add_element(Instrmt_29);
    }
    {
      xml_element Undly_41{"Undly"};
      multiset<string> Undly_41_set;
      Undly_41.add_attribute("Sym", "UnderlyingSymbol_t_895499236"); // 2
      Undly_41_set.insert("UnderlyingSymbol_t_895499236");
      Undly_41.add_attribute("Sfx", "CD"); // 2
      Undly_41_set.insert("CD");
      Undly_41.add_attribute("ID", "UnderlyingSecurityID_t_48866365"); // 2
      Undly_41_set.insert("UnderlyingSecurityID_t_48866365");
      Undly_41.add_attribute("Src", "H"); // 2
      Undly_41_set.insert("H");
      Undly_41.add_attribute("Prod", "2"); // 2
      Undly_41_set.insert("2");
      Undly_41.add_attribute("CFI", "UnderlyingCFICode_t_944866081"); // 2
      Undly_41_set.insert("UnderlyingCFICode_t_944866081");
      Undly_41.add_attribute("SecTyp", "EUCORP"); // 2
      Undly_41_set.insert("EUCORP");
      Undly_41.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1733159942"); // 2
      Undly_41_set.insert("UnderlyingSecuritySubType_t_1733159942");
      Undly_41.add_attribute("MMY", "1547279921"); // 2
      Undly_41_set.insert("1547279921");
      Undly_41.add_attribute("Mat", "UnderlyingMaturityDate_t_561702153"); // 2
      Undly_41_set.insert("UnderlyingMaturityDate_t_561702153");
      Undly_41.add_attribute("MatTm", "320753496"); // 2
      Undly_41_set.insert("320753496");
      Undly_41.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_990147021"); // 2
      Undly_41_set.insert("UnderlyingCouponPaymentDate_t_990147021");
      Undly_41.add_attribute("RestrctTyp", "FR"); // 2
      Undly_41_set.insert("FR");
      Undly_41.add_attribute("Snrty", "SR"); // 2
      Undly_41_set.insert("SR");
      Undly_41.add_attribute("NotlPctOut", "18495246.480000"); // 2
      Undly_41_set.insert("18495246.480000");
      Undly_41.add_attribute("OrigNotlPctOut", "18804490.050000"); // 2
      Undly_41_set.insert("18804490.050000");
      Undly_41.add_attribute("AttchPnt", "11250090.580000"); // 2
      Undly_41_set.insert("11250090.580000");
      Undly_41.add_attribute("DetchPnt", "5505862.980000"); // 2
      Undly_41_set.insert("5505862.980000");
      Undly_41.add_attribute("Issued", "UnderlyingIssueDate_t_1704147562"); // 2
      Undly_41_set.insert("UnderlyingIssueDate_t_1704147562");
      Undly_41.add_attribute("RepoCollSecTyp", "463237923"); // 2
      Undly_41_set.insert("463237923");
      Undly_41.add_attribute("RepoTrm", "1483298226"); // 2
      Undly_41_set.insert("1483298226");
      Undly_41.add_attribute("RepoRt", "16339504.370000"); // 2
      Undly_41_set.insert("16339504.370000");
      Undly_41.add_attribute("Fctr", "14051169.420000"); // 2
      Undly_41_set.insert("14051169.420000");
      Undly_41.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1308799605"); // 2
      Undly_41_set.insert("UnderlyingCreditRating_t_1308799605");
      Undly_41.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1253969323"); // 2
      Undly_41_set.insert("UnderlyingInstrRegistry_t_1253969323");
      Undly_41.add_attribute("Ctry", "167093473"); // 2
      Undly_41_set.insert("167093473");
      Undly_41.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_890035243"); // 2
      Undly_41_set.insert("UnderlyingStateOrProvinceOfIssue_t_890035243");
      Undly_41.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1817988834"); // 2
      Undly_41_set.insert("UnderlyingLocaleOfIssue_t_1817988834");
      Undly_41.add_attribute("Redeem", "UnderlyingRedemptionDate_t_731074040"); // 2
      Undly_41_set.insert("UnderlyingRedemptionDate_t_731074040");
      Undly_41.add_attribute("StrkPx", "4635032.120000"); // 2
      Undly_41_set.insert("4635032.120000");
      Undly_41.add_attribute("StrkCcy", "EUR"); // 2
      Undly_41_set.insert("EUR");
      Undly_41.add_attribute("OptA", "1999669028"); // 2
      Undly_41_set.insert("1999669028");
      Undly_41.add_attribute("Mult", "2158869.610000"); // 2
      Undly_41_set.insert("2158869.610000");
      Undly_41.add_attribute("MultTyp", "2"); // 2
      Undly_41_set.insert("2");
      Undly_41.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_41_set.insert("1");
      Undly_41.add_attribute("UOM", "lbs"); // 2
      Undly_41_set.insert("lbs");
      Undly_41.add_attribute("UOMQty", "13375242.420000"); // 2
      Undly_41_set.insert("13375242.420000");
      Undly_41.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_41_set.insert("oz_tr");
      Undly_41.add_attribute("PxUOMQty", "5605493.160000"); // 2
      Undly_41_set.insert("5605493.160000");
      Undly_41.add_attribute("TmUnit", "Wk"); // 2
      Undly_41_set.insert("Wk");
      Undly_41.add_attribute("ExerStyle", "0"); // 2
      Undly_41_set.insert("0");
      Undly_41.add_attribute("CpnRt", "15506963.370000"); // 2
      Undly_41_set.insert("15506963.370000");
      Undly_41.add_attribute("Exch", "UnderlyingSecurityExchange_t_182219396"); // 2
      Undly_41_set.insert("UnderlyingSecurityExchange_t_182219396");
      Undly_41.add_attribute("Issr", "UnderlyingIssuer_t_1786563263"); // 2
      Undly_41_set.insert("UnderlyingIssuer_t_1786563263");
      Undly_41.add_attribute("EncUndIssrLen", "1252737337"); // 2
      Undly_41_set.insert("1252737337");
      Undly_41.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2062668401"); // 2
      Undly_41_set.insert("EncodedUnderlyingIssuer_t_2062668401");
      Undly_41.add_attribute("Desc", "UnderlyingSecurityDesc_t_764088673"); // 2
      Undly_41_set.insert("UnderlyingSecurityDesc_t_764088673");
      Undly_41.add_attribute("EncUndSecDescLen", "1803323635"); // 2
      Undly_41_set.insert("1803323635");
      Undly_41.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1619332316"); // 2
      Undly_41_set.insert("EncodedUnderlyingSecurityDesc_t_1619332316");
      Undly_41.add_attribute("CPPgm", "UnderlyingCPProgram_t_1227326596"); // 2
      Undly_41_set.insert("UnderlyingCPProgram_t_1227326596");
      Undly_41.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1139138213"); // 2
      Undly_41_set.insert("UnderlyingCPRegType_t_1139138213");
      Undly_41.add_attribute("AllocPct", "11057991.050000"); // 2
      Undly_41_set.insert("11057991.050000");
      Undly_41.add_attribute("Ccy", "EUR"); // 2
      Undly_41_set.insert("EUR");
      Undly_41.add_attribute("Qty", "2122847.800000"); // 2
      Undly_41_set.insert("2122847.800000");
      Undly_41.add_attribute("SettlTyp", "2"); // 2
      Undly_41_set.insert("2");
      Undly_41.add_attribute("CashAmt", "UnderlyingCashAmount_t_1190489414"); // 2
      Undly_41_set.insert("UnderlyingCashAmount_t_1190489414");
      Undly_41.add_attribute("CashTyp", "DIFF"); // 2
      Undly_41_set.insert("DIFF");
      Undly_41.add_attribute("Px", "13831274.040000"); // 2
      Undly_41_set.insert("13831274.040000");
      Undly_41.add_attribute("DirtPx", "16539926.260000"); // 2
      Undly_41_set.insert("16539926.260000");
      Undly_41.add_attribute("EndPx", "498105.630000"); // 2
      Undly_41_set.insert("498105.630000");
      Undly_41.add_attribute("StartVal", "UnderlyingStartValue_t_862217033"); // 2
      Undly_41_set.insert("UnderlyingStartValue_t_862217033");
      Undly_41.add_attribute("CurVal", "UnderlyingCurrentValue_t_1506178006"); // 2
      Undly_41_set.insert("UnderlyingCurrentValue_t_1506178006");
      Undly_41.add_attribute("EndVal", "UnderlyingEndValue_t_265697524"); // 2
      Undly_41_set.insert("UnderlyingEndValue_t_265697524");
      Undly_41.add_attribute("AdjQty", "13810443.880000"); // 2
      Undly_41_set.insert("13810443.880000");
      Undly_41.add_attribute("FxRate", "14623219.990000"); // 2
      Undly_41_set.insert("14623219.990000");
      Undly_41.add_attribute("FxRateCalc", "M"); // 2
      Undly_41_set.insert("M");
      Undly_41.add_attribute("CapValu", "UnderlyingCapValue_t_571084983"); // 2
      Undly_41_set.insert("UnderlyingCapValue_t_571084983");
      Undly_41.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1004142287"); // 2
      Undly_41_set.insert("UnderlyingSettlMethod_t_1004142287");
      Undly_41.add_attribute("PutCall", "1986999882"); // 2
      Undly_41_set.insert("1986999882");
      all_values.push_back(Undly_41_set);
      all_compo_names.insert("Undly_41_set");

      {
        xml_element UndAID_41{"UndAID"};
        multiset<string> UndAID_41_set;
        UndAID_41.add_attribute("AltID", "UnderlyingSecurityAltID_t_322827731"); // 3
        UndAID_41_set.insert("UnderlyingSecurityAltID_t_322827731");
        UndAID_41.add_attribute("AltIDSrc", "3"); // 3
        UndAID_41_set.insert("3");
        all_values.push_back(UndAID_41_set);
        all_compo_names.insert("UndAID_41_set");

        Undly_41.add_element(UndAID_41);
      }
      {
        xml_element Stip_68{"Stip"};
        multiset<string> Stip_68_set;
        Stip_68.add_attribute("Typ", "HAIRCUT"); // 3
        Stip_68_set.insert("HAIRCUT");
        Stip_68.add_attribute("Val", "UnderlyingStipValue_t_505047127"); // 3
        Stip_68_set.insert("UnderlyingStipValue_t_505047127");
        all_values.push_back(Stip_68_set);
        all_compo_names.insert("Stip_68_set");

        Undly_41.add_element(Stip_68);
      }
      {
        xml_element Pty_169{"Pty"};
        multiset<string> Pty_169_set;
        Pty_169.add_attribute("ID", "UnderlyingInstrumentPartyID_t_505795687"); // 3
        Pty_169_set.insert("UnderlyingInstrumentPartyID_t_505795687");
        Pty_169.add_attribute("Src", "8"); // 3
        Pty_169_set.insert("8");
        Pty_169.add_attribute("R", "44"); // 3
        Pty_169_set.insert("44");
        all_values.push_back(Pty_169_set);
        all_compo_names.insert("Pty_169_set");

        {
          xml_element Sub_169{"Sub"};
          multiset<string> Sub_169_set;
          Sub_169.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1269884361"); // 4
          Sub_169_set.insert("UnderlyingInstrumentPartySubID_t_1269884361");
          Sub_169.add_attribute("Typ", "29"); // 4
          Sub_169_set.insert("29");
          all_values.push_back(Sub_169_set);
          all_compo_names.insert("Sub_169_set");

          Pty_169.add_element(Sub_169);
        }
        Undly_41.add_element(Pty_169);
      }
      Inc_1.add_element(Undly_41);
    }
    {
      xml_element Leg_41{"Leg"};
      multiset<string> Leg_41_set;
      Leg_41.add_attribute("Sym", "LegSymbol_t_2039564197"); // 2
      Leg_41_set.insert("LegSymbol_t_2039564197");
      Leg_41.add_attribute("Sfx", "WI"); // 2
      Leg_41_set.insert("WI");
      Leg_41.add_attribute("ID", "LegSecurityID_t_1290444462"); // 2
      Leg_41_set.insert("LegSecurityID_t_1290444462");
      Leg_41.add_attribute("Src", "3"); // 2
      Leg_41_set.insert("3");
      Leg_41.add_attribute("Prod", "6"); // 2
      Leg_41_set.insert("6");
      Leg_41.add_attribute("CFI", "LegCFICode_t_1590898633"); // 2
      Leg_41_set.insert("LegCFICode_t_1590898633");
      Leg_41.add_attribute("SecTyp", "YANK"); // 2
      Leg_41_set.insert("YANK");
      Leg_41.add_attribute("SecSubTyp", "LegSecuritySubType_t_1486740563"); // 2
      Leg_41_set.insert("LegSecuritySubType_t_1486740563");
      Leg_41.add_attribute("MMY", "633904399"); // 2
      Leg_41_set.insert("633904399");
      Leg_41.add_attribute("Mat", "LegMaturityDate_t_1092954401"); // 2
      Leg_41_set.insert("LegMaturityDate_t_1092954401");
      Leg_41.add_attribute("MatTm", "722384319"); // 2
      Leg_41_set.insert("722384319");
      Leg_41.add_attribute("CpnPmt", "LegCouponPaymentDate_t_140413377"); // 2
      Leg_41_set.insert("LegCouponPaymentDate_t_140413377");
      Leg_41.add_attribute("Issued", "LegIssueDate_t_1142764964"); // 2
      Leg_41_set.insert("LegIssueDate_t_1142764964");
      Leg_41.add_attribute("RepoCollSecTyp", "1584601352"); // 2
      Leg_41_set.insert("1584601352");
      Leg_41.add_attribute("RepoTrm", "1646591383"); // 2
      Leg_41_set.insert("1646591383");
      Leg_41.add_attribute("RepoRt", "14084624.880000"); // 2
      Leg_41_set.insert("14084624.880000");
      Leg_41.add_attribute("Fctr", "8181620.930000"); // 2
      Leg_41_set.insert("8181620.930000");
      Leg_41.add_attribute("CrdRtg", "LegCreditRating_t_961429735"); // 2
      Leg_41_set.insert("LegCreditRating_t_961429735");
      Leg_41.add_attribute("Rgstry", "LegInstrRegistry_t_687429407"); // 2
      Leg_41_set.insert("LegInstrRegistry_t_687429407");
      Leg_41.add_attribute("Ctry", "1389247076"); // 2
      Leg_41_set.insert("1389247076");
      Leg_41.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1965572022"); // 2
      Leg_41_set.insert("LegStateOrProvinceOfIssue_t_1965572022");
      Leg_41.add_attribute("Lcl", "LegLocaleOfIssue_t_526945641"); // 2
      Leg_41_set.insert("LegLocaleOfIssue_t_526945641");
      Leg_41.add_attribute("Redeem", "LegRedemptionDate_t_1712074807"); // 2
      Leg_41_set.insert("LegRedemptionDate_t_1712074807");
      Leg_41.add_attribute("Strk", "6848044.460000"); // 2
      Leg_41_set.insert("6848044.460000");
      Leg_41.add_attribute("StrkCcy", "USD"); // 2
      Leg_41_set.insert("USD");
      Leg_41.add_attribute("OptA", "1190600134"); // 2
      Leg_41_set.insert("1190600134");
      Leg_41.add_attribute("Cmult", "2651408.270000"); // 2
      Leg_41_set.insert("2651408.270000");
      Leg_41.add_attribute("MultTyp", "2"); // 2
      Leg_41_set.insert("2");
      Leg_41.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_41_set.insert("2");
      Leg_41.add_attribute("UOM", "MMbbl"); // 2
      Leg_41_set.insert("MMbbl");
      Leg_41.add_attribute("UOMQty", "3819507.160000"); // 2
      Leg_41_set.insert("3819507.160000");
      Leg_41.add_attribute("PxUOM", "Alw"); // 2
      Leg_41_set.insert("Alw");
      Leg_41.add_attribute("PxUOMQty", "17068915.380000"); // 2
      Leg_41_set.insert("17068915.380000");
      Leg_41.add_attribute("TmUnit", "H"); // 2
      Leg_41_set.insert("H");
      Leg_41.add_attribute("ExerStyle", "0"); // 2
      Leg_41_set.insert("0");
      Leg_41.add_attribute("CpnRt", "11503065.240000"); // 2
      Leg_41_set.insert("11503065.240000");
      Leg_41.add_attribute("Exch", "LegSecurityExchange_t_442511157"); // 2
      Leg_41_set.insert("LegSecurityExchange_t_442511157");
      Leg_41.add_attribute("Issr", "LegIssuer_t_836672272"); // 2
      Leg_41_set.insert("LegIssuer_t_836672272");
      Leg_41.add_attribute("EncLegIssrLen", "1784210923"); // 2
      Leg_41_set.insert("1784210923");
      Leg_41.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1535465558"); // 2
      Leg_41_set.insert("EncodedLegIssuer_t_1535465558");
      Leg_41.add_attribute("Desc", "LegSecurityDesc_t_1559056591"); // 2
      Leg_41_set.insert("LegSecurityDesc_t_1559056591");
      Leg_41.add_attribute("EncLegSecDescLen", "1924624301"); // 2
      Leg_41_set.insert("1924624301");
      Leg_41.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_530746875"); // 2
      Leg_41_set.insert("EncodedLegSecurityDesc_t_530746875");
      Leg_41.add_attribute("RatioQty", "9961742.960000"); // 2
      Leg_41_set.insert("9961742.960000");
      Leg_41.add_attribute("Side", "5"); // 2
      Leg_41_set.insert("5");
      Leg_41.add_attribute("Ccy", "EUR"); // 2
      Leg_41_set.insert("EUR");
      Leg_41.add_attribute("Pool", "LegPool_t_237678123"); // 2
      Leg_41_set.insert("LegPool_t_237678123");
      Leg_41.add_attribute("Dated", "LegDatedDate_t_479155122"); // 2
      Leg_41_set.insert("LegDatedDate_t_479155122");
      Leg_41.add_attribute("CSetMo", "1056099817"); // 2
      Leg_41_set.insert("1056099817");
      Leg_41.add_attribute("IntAcrl", "LegInterestAccrualDate_t_55766498"); // 2
      Leg_41_set.insert("LegInterestAccrualDate_t_55766498");
      Leg_41.add_attribute("PutCall", "1006100764"); // 2
      Leg_41_set.insert("1006100764");
      Leg_41.add_attribute("LegOptionRatio", "6206909.760000"); // 2
      Leg_41_set.insert("6206909.760000");
      Leg_41.add_attribute("Px", "7405709.440000"); // 2
      Leg_41_set.insert("7405709.440000");
      all_values.push_back(Leg_41_set);
      all_compo_names.insert("Leg_41_set");

      {
        xml_element LegAID_41{"LegAID"};
        multiset<string> LegAID_41_set;
        LegAID_41.add_attribute("SecAltID", "LegSecurityAltID_t_775775329"); // 3
        LegAID_41_set.insert("LegSecurityAltID_t_775775329");
        LegAID_41.add_attribute("SecAltIDSrc", "J"); // 3
        LegAID_41_set.insert("J");
        all_values.push_back(LegAID_41_set);
        all_compo_names.insert("LegAID_41_set");

        Leg_41.add_element(LegAID_41);
      }
      Inc_1.add_element(Leg_41);
    }
    {
      xml_element Yield_8{"Yield"};
      multiset<string> Yield_8_set;
      Yield_8.add_attribute("Typ", "INFLATION"); // 2
      Yield_8_set.insert("INFLATION");
      Yield_8.add_attribute("Yld", "10409161.560000"); // 2
      Yield_8_set.insert("10409161.560000");
      Yield_8.add_attribute("CalcDt", "YieldCalcDate_t_1180199430"); // 2
      Yield_8_set.insert("YieldCalcDate_t_1180199430");
      Yield_8.add_attribute("RedDt", "YieldRedemptionDate_t_96688277"); // 2
      Yield_8_set.insert("YieldRedemptionDate_t_96688277");
      Yield_8.add_attribute("RedPx", "14573632.320000"); // 2
      Yield_8_set.insert("14573632.320000");
      Yield_8.add_attribute("RedPxTyp", "3"); // 2
      Yield_8_set.insert("3");
      all_values.push_back(Yield_8_set);
      all_compo_names.insert("Yield_8_set");

      Inc_1.add_element(Yield_8);
    }
    {
      xml_element SprdBnchmkCurve_13{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_13_set;
      SprdBnchmkCurve_13.add_attribute("Spread", "7594164.340000"); // 2
      SprdBnchmkCurve_13_set.insert("7594164.340000");
      SprdBnchmkCurve_13.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_13_set.insert("CAN");
      SprdBnchmkCurve_13.add_attribute("Name", "Euribor"); // 2
      SprdBnchmkCurve_13_set.insert("Euribor");
      SprdBnchmkCurve_13.add_attribute("Point", "BenchmarkCurvePoint_t_19593999"); // 2
      SprdBnchmkCurve_13_set.insert("BenchmarkCurvePoint_t_19593999");
      SprdBnchmkCurve_13.add_attribute("Px", "12370080.260000"); // 2
      SprdBnchmkCurve_13_set.insert("12370080.260000");
      SprdBnchmkCurve_13.add_attribute("PxTyp", "14"); // 2
      SprdBnchmkCurve_13_set.insert("14");
      SprdBnchmkCurve_13.add_attribute("SecID", "BenchmarkSecurityID_t_1803804922"); // 2
      SprdBnchmkCurve_13_set.insert("BenchmarkSecurityID_t_1803804922");
      SprdBnchmkCurve_13.add_attribute("SecIDSrc", "B"); // 2
      SprdBnchmkCurve_13_set.insert("B");
      all_values.push_back(SprdBnchmkCurve_13_set);
      all_compo_names.insert("SprdBnchmkCurve_13_set");

      Inc_1.add_element(SprdBnchmkCurve_13);
    }
    {
      xml_element RtSrc_6{"RtSrc"};
      multiset<string> RtSrc_6_set;
      RtSrc_6.add_attribute("RtSrc", "2"); // 2
      RtSrc_6_set.insert("2");
      RtSrc_6.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_6_set.insert("1");
      RtSrc_6.add_attribute("RefPg", "ReferencePage_t_1155736811"); // 2
      RtSrc_6_set.insert("ReferencePage_t_1155736811");
      all_values.push_back(RtSrc_6_set);
      all_compo_names.insert("RtSrc_6_set");

      Inc_1.add_element(RtSrc_6);
    }
    {
      xml_element SecSizesGrp_1{"SecSizesGrp"};
      multiset<string> SecSizesGrp_1_set;
      SecSizesGrp_1.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_1_set.insert("1");
      SecSizesGrp_1.add_attribute("MDSecSize", "8571939.640000"); // 2
      SecSizesGrp_1_set.insert("8571939.640000");
      all_values.push_back(SecSizesGrp_1_set);
      all_compo_names.insert("SecSizesGrp_1_set");

      Inc_1.add_element(SecSizesGrp_1);
    }
    {
      xml_element StatsIndGrp_1{"StatsIndGrp"};
      multiset<string> StatsIndGrp_1_set;
      StatsIndGrp_1.add_attribute("StatsTyp", "4"); // 2
      StatsIndGrp_1_set.insert("4");
      all_values.push_back(StatsIndGrp_1_set);
      all_compo_names.insert("StatsIndGrp_1_set");

      Inc_1.add_element(StatsIndGrp_1);
    }
    {
      xml_element Pty_170{"Pty"};
      multiset<string> Pty_170_set;
      Pty_170.add_attribute("ID", "PartyID_t_1020620395"); // 2
      Pty_170_set.insert("PartyID_t_1020620395");
      Pty_170.add_attribute("Src", "2"); // 2
      Pty_170_set.insert("2");
      Pty_170.add_attribute("R", "60"); // 2
      Pty_170_set.insert("60");
      all_values.push_back(Pty_170_set);
      all_compo_names.insert("Pty_170_set");

      {
        xml_element Sub_170{"Sub"};
        multiset<string> Sub_170_set;
        Sub_170.add_attribute("ID", "PartySubID_t_2076720212"); // 3
        Sub_170_set.insert("PartySubID_t_2076720212");
        Sub_170.add_attribute("Typ", "31"); // 3
        Sub_170_set.insert("31");
        all_values.push_back(Sub_170_set);
        all_compo_names.insert("Sub_170_set");

        Pty_170.add_element(Sub_170);
      }
      Inc_1.add_element(Pty_170);
    }
    elt.add_element(Inc_1);
  } // end Inc
  { // Inc
    xml_element Inc_2{"Inc"};
    multiset<string> Inc_2_set;
    Inc_2.add_attribute("UpdtAct", "3"); // 1
    Inc_2_set.insert("3");
    Inc_2.add_attribute("DelRsn", "0"); // 1
    Inc_2_set.insert("0");
    Inc_2.add_attribute("MDSubBkTyp", "1891209530"); // 1
    Inc_2_set.insert("1891209530");
    Inc_2.add_attribute("MktDepth", "1061010095"); // 1
    Inc_2_set.insert("1061010095");
    Inc_2.add_attribute("Typ", "V"); // 1
    Inc_2_set.insert("V");
    Inc_2.add_attribute("ID", "MDEntryID_t_1674896960"); // 1
    Inc_2_set.insert("MDEntryID_t_1674896960");
    Inc_2.add_attribute("RefID", "MDEntryRefID_t_2101926251"); // 1
    Inc_2_set.insert("MDEntryRefID_t_2101926251");
    Inc_2.add_attribute("MDStrmID", "MDStreamID_t_272972584"); // 1
    Inc_2_set.insert("MDStreamID_t_272972584");
    Inc_2.add_attribute("FinclStat", "3"); // 1
    Inc_2_set.insert("3");
    Inc_2.add_attribute("CorpActn", "K"); // 1
    Inc_2_set.insert("K");
    Inc_2.add_attribute("Px", "18351227.310000"); // 1
    Inc_2_set.insert("18351227.310000");
    Inc_2.add_attribute("PxTyp", "18"); // 1
    Inc_2_set.insert("18");
    Inc_2.add_attribute("OrdTyp", "8"); // 1
    Inc_2_set.insert("8");
    Inc_2.add_attribute("Ccy", "USD"); // 1
    Inc_2_set.insert("USD");
    Inc_2.add_attribute("SettlCcy", "GBP"); // 1
    Inc_2_set.insert("GBP");
    Inc_2.add_attribute("Sz", "14388865.810000"); // 1
    Inc_2_set.insert("14388865.810000");
    Inc_2.add_attribute("LotTyp", "1"); // 1
    Inc_2_set.insert("1");
    Inc_2.add_attribute("Dt", "196650266"); // 1
    Inc_2_set.insert("196650266");
    Inc_2.add_attribute("Tm", "1796479939"); // 1
    Inc_2_set.insert("1796479939");
    Inc_2.add_attribute("TickDirctn", "0"); // 1
    Inc_2_set.insert("0");
    Inc_2.add_attribute("Mkt", "MDMkt_t_1352387078"); // 1
    Inc_2_set.insert("MDMkt_t_1352387078");
    Inc_2.add_attribute("SesID", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("SesSub", "4"); // 1
    Inc_2_set.insert("4");
    Inc_2.add_attribute("TrdgStat", "12"); // 1
    Inc_2_set.insert("12");
    Inc_2.add_attribute("HaltRsn", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("QCond", "X"); // 1
    Inc_2_set.insert("X");
    Inc_2.add_attribute("TrdCond", "u"); // 1
    Inc_2_set.insert("u");
    Inc_2.add_attribute("TrdTyp", "14"); // 1
    Inc_2_set.insert("14");
    Inc_2.add_attribute("MtchTyp", "8"); // 1
    Inc_2_set.insert("8");
    Inc_2.add_attribute("Orig", "MDEntryOriginator_t_1864218372"); // 1
    Inc_2_set.insert("MDEntryOriginator_t_1864218372");
    Inc_2.add_attribute("LctnID", "LocationID_t_355064796"); // 1
    Inc_2_set.insert("LocationID_t_355064796");
    Inc_2.add_attribute("DeskID", "DeskID_t_89417383"); // 1
    Inc_2_set.insert("DeskID_t_89417383");
    Inc_2.add_attribute("OpenClsSettlFlag", "3"); // 1
    Inc_2_set.insert("3");
    Inc_2.add_attribute("TmInForce", "8"); // 1
    Inc_2_set.insert("8");
    Inc_2.add_attribute("ExpireDt", "ExpireDate_t_1764314343"); // 1
    Inc_2_set.insert("ExpireDate_t_1764314343");
    Inc_2.add_attribute("ExpireTm", "ExpireTime_t_732187422"); // 1
    Inc_2_set.insert("ExpireTime_t_732187422");
    Inc_2.add_attribute("MinQty", "18682941.830000"); // 1
    Inc_2_set.insert("18682941.830000");
    Inc_2.add_attribute("ExecInst", "X"); // 1
    Inc_2_set.insert("X");
    Inc_2.add_attribute("SellerDays", "2143993258"); // 1
    Inc_2_set.insert("2143993258");
    Inc_2.add_attribute("OrdID", "OrderID_t_1555933266"); // 1
    Inc_2_set.insert("OrderID_t_1555933266");
    Inc_2.add_attribute("OrdID2", "SecondaryOrderID_t_1771933957"); // 1
    Inc_2_set.insert("SecondaryOrderID_t_1771933957");
    Inc_2.add_attribute("EntryID", "QuoteEntryID_t_277602921"); // 1
    Inc_2_set.insert("QuoteEntryID_t_277602921");
    Inc_2.add_attribute("TrdID", "TradeID_t_2038069218"); // 1
    Inc_2_set.insert("TradeID_t_2038069218");
    Inc_2.add_attribute("Buyer", "MDEntryBuyer_t_117316476"); // 1
    Inc_2_set.insert("MDEntryBuyer_t_117316476");
    Inc_2.add_attribute("Seller", "MDEntrySeller_t_578290231"); // 1
    Inc_2_set.insert("MDEntrySeller_t_578290231");
    Inc_2.add_attribute("NumOfOrds", "1609729548"); // 1
    Inc_2_set.insert("1609729548");
    Inc_2.add_attribute("PosNo", "1556203057"); // 1
    Inc_2_set.insert("1556203057");
    Inc_2.add_attribute("Scope", "3"); // 1
    Inc_2_set.insert("3");
    Inc_2.add_attribute("PxDelta", "18063798.140000"); // 1
    Inc_2_set.insert("18063798.140000");
    Inc_2.add_attribute("NetChgPrevDay", "12051993.480000"); // 1
    Inc_2_set.insert("12051993.480000");
    Inc_2.add_attribute("Txt", "Text_t_2073252976"); // 1
    Inc_2_set.insert("Text_t_2073252976");
    Inc_2.add_attribute("EncTxtLen", "1011283244"); // 1
    Inc_2_set.insert("1011283244");
    Inc_2.add_attribute("EncTxt", "EncodedText_t_60479645"); // 1
    Inc_2_set.insert("EncodedText_t_60479645");
    Inc_2.add_attribute("MDPxLvl", "173433804"); // 1
    Inc_2_set.insert("173433804");
    Inc_2.add_attribute("Cpcty", "P"); // 1
    Inc_2_set.insert("P");
    Inc_2.add_attribute("MDOrigTyp", "1"); // 1
    Inc_2_set.insert("1");
    Inc_2.add_attribute("HighPx", "15159703.670000"); // 1
    Inc_2_set.insert("15159703.670000");
    Inc_2.add_attribute("LowPx", "5951491.600000"); // 1
    Inc_2_set.insert("5951491.600000");
    Inc_2.add_attribute("FirstPx", "18890012.410000"); // 1
    Inc_2_set.insert("18890012.410000");
    Inc_2.add_attribute("LastPx", "18616618.680000"); // 1
    Inc_2_set.insert("18616618.680000");
    Inc_2.add_attribute("TrdVol", "3118838.840000"); // 1
    Inc_2_set.insert("3118838.840000");
    Inc_2.add_attribute("SettlTyp", "5"); // 1
    Inc_2_set.insert("5");
    Inc_2.add_attribute("SettlDt", "SettlDate_t_1951079251"); // 1
    Inc_2_set.insert("SettlDate_t_1951079251");
    Inc_2.add_attribute("TransBkdTm", "TransBkdTime_t_1089628703"); // 1
    Inc_2_set.insert("TransBkdTime_t_1089628703");
    Inc_2.add_attribute("TxnTm", "TransactTime_t_1691903987"); // 1
    Inc_2_set.insert("TransactTime_t_1691903987");
    Inc_2.add_attribute("MDQteTyp", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("RptSeq", "1821816125"); // 1
    Inc_2_set.insert("1821816125");
    Inc_2.add_attribute("DealingCpcty", "R"); // 1
    Inc_2_set.insert("R");
    Inc_2.add_attribute("MDEntrySpotRt", "8088422.320000"); // 1
    Inc_2_set.insert("8088422.320000");
    Inc_2.add_attribute("MDEntryFwdPnts", "18183257.360000"); // 1
    Inc_2_set.insert("18183257.360000");
    all_values.push_back(Inc_2_set);
    all_compo_names.insert("Inc_2_set");

    {
      xml_element Instrmt_30{"Instrmt"};
      multiset<string> Instrmt_30_set;
      Instrmt_30.add_attribute("Sym", "Symbol_t_821164140"); // 2
      Instrmt_30_set.insert("Symbol_t_821164140");
      Instrmt_30.add_attribute("Sfx", "CD"); // 2
      Instrmt_30_set.insert("CD");
      Instrmt_30.add_attribute("ID", "SecurityID_t_2095928657"); // 2
      Instrmt_30_set.insert("SecurityID_t_2095928657");
      Instrmt_30.add_attribute("Src", "D"); // 2
      Instrmt_30_set.insert("D");
      Instrmt_30.add_attribute("Prod", "8"); // 2
      Instrmt_30_set.insert("8");
      Instrmt_30.add_attribute("ProdCmplx", "ProductComplex_t_526735241"); // 2
      Instrmt_30_set.insert("ProductComplex_t_526735241");
      Instrmt_30.add_attribute("SecGrp", "SecurityGroup_t_173995610"); // 2
      Instrmt_30_set.insert("SecurityGroup_t_173995610");
      Instrmt_30.add_attribute("CFI", "CFICode_t_2106812075"); // 2
      Instrmt_30_set.insert("CFICode_t_2106812075");
      Instrmt_30.add_attribute("SecTyp", "TAXA"); // 2
      Instrmt_30_set.insert("TAXA");
      Instrmt_30.add_attribute("SubTyp", "SecuritySubType_t_1980375425"); // 2
      Instrmt_30_set.insert("SecuritySubType_t_1980375425");
      Instrmt_30.add_attribute("MMY", "1164527775"); // 2
      Instrmt_30_set.insert("1164527775");
      Instrmt_30.add_attribute("MatDt", "MaturityDate_t_987803385"); // 2
      Instrmt_30_set.insert("MaturityDate_t_987803385");
      Instrmt_30.add_attribute("MatTm", "844175021"); // 2
      Instrmt_30_set.insert("844175021");
      Instrmt_30.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1225007420"); // 2
      Instrmt_30_set.insert("SettleOnOpenFlag_t_1225007420");
      Instrmt_30.add_attribute("AsgnMeth", "1161237189"); // 2
      Instrmt_30_set.insert("1161237189");
      Instrmt_30.add_attribute("Status", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("CpnPmt", "CouponPaymentDate_t_1161387757"); // 2
      Instrmt_30_set.insert("CouponPaymentDate_t_1161387757");
      Instrmt_30.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_30_set.insert("FR");
      Instrmt_30.add_attribute("Snrty", "SB"); // 2
      Instrmt_30_set.insert("SB");
      Instrmt_30.add_attribute("NotlPctOut", "9029053.500000"); // 2
      Instrmt_30_set.insert("9029053.500000");
      Instrmt_30.add_attribute("OrigNotlPctOut", "2439021.290000"); // 2
      Instrmt_30_set.insert("2439021.290000");
      Instrmt_30.add_attribute("AttchPnt", "7673736.190000"); // 2
      Instrmt_30_set.insert("7673736.190000");
      Instrmt_30.add_attribute("DetchPnt", "9994877.390000"); // 2
      Instrmt_30_set.insert("9994877.390000");
      Instrmt_30.add_attribute("Issued", "IssueDate_t_47497732"); // 2
      Instrmt_30_set.insert("IssueDate_t_47497732");
      Instrmt_30.add_attribute("RepoCollSecTyp", "1857002322"); // 2
      Instrmt_30_set.insert("1857002322");
      Instrmt_30.add_attribute("RepoTrm", "543908078"); // 2
      Instrmt_30_set.insert("543908078");
      Instrmt_30.add_attribute("RepoRt", "16154076.790000"); // 2
      Instrmt_30_set.insert("16154076.790000");
      Instrmt_30.add_attribute("Fctr", "15313347.990000"); // 2
      Instrmt_30_set.insert("15313347.990000");
      Instrmt_30.add_attribute("CrdRtg", "CreditRating_t_1956622601"); // 2
      Instrmt_30_set.insert("CreditRating_t_1956622601");
      Instrmt_30.add_attribute("Rgstry", "InstrRegistry_t_276766264"); // 2
      Instrmt_30_set.insert("InstrRegistry_t_276766264");
      Instrmt_30.add_attribute("IssuCtry", "1202176887"); // 2
      Instrmt_30_set.insert("1202176887");
      Instrmt_30.add_attribute("StPrv", "StateOrProvinceOfIssue_t_630303093"); // 2
      Instrmt_30_set.insert("StateOrProvinceOfIssue_t_630303093");
      Instrmt_30.add_attribute("Lcl", "LocaleOfIssue_t_710058806"); // 2
      Instrmt_30_set.insert("LocaleOfIssue_t_710058806");
      Instrmt_30.add_attribute("Redeem", "RedemptionDate_t_1150621897"); // 2
      Instrmt_30_set.insert("RedemptionDate_t_1150621897");
      Instrmt_30.add_attribute("StrkPx", "13420528.040000"); // 2
      Instrmt_30_set.insert("13420528.040000");
      Instrmt_30.add_attribute("StrkCcy", "USD"); // 2
      Instrmt_30_set.insert("USD");
      Instrmt_30.add_attribute("StrkMult", "15160484.140000"); // 2
      Instrmt_30_set.insert("15160484.140000");
      Instrmt_30.add_attribute("StrkValu", "12199962.510000"); // 2
      Instrmt_30_set.insert("12199962.510000");
      Instrmt_30.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_30_set.insert("4");
      Instrmt_30.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("StrkPxBndryPrcsn", "2370403.780000"); // 2
      Instrmt_30_set.insert("2370403.780000");
      Instrmt_30.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("OptAt", "45631565"); // 2
      Instrmt_30_set.insert("45631565");
      Instrmt_30.add_attribute("Mult", "14620477.980000"); // 2
      Instrmt_30_set.insert("14620477.980000");
      Instrmt_30.add_attribute("MultTyp", "0"); // 2
      Instrmt_30_set.insert("0");
      Instrmt_30.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_30_set.insert("3");
      Instrmt_30.add_attribute("MinPxIncr", "4759519.070000"); // 2
      Instrmt_30_set.insert("4759519.070000");
      Instrmt_30.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1123188381"); // 2
      Instrmt_30_set.insert("MinPriceIncrementAmount_t_1123188381");
      Instrmt_30.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_30_set.insert("oz_tr");
      Instrmt_30.add_attribute("UOMQty", "13788572.570000"); // 2
      Instrmt_30_set.insert("13788572.570000");
      Instrmt_30.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_30_set.insert("MMbbl");
      Instrmt_30.add_attribute("PxUOMQty", "11288354.940000"); // 2
      Instrmt_30_set.insert("11288354.940000");
      Instrmt_30.add_attribute("SettlMeth", "C"); // 2
      Instrmt_30_set.insert("C");
      Instrmt_30.add_attribute("ExerStyle", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("OptPayAmt", "OptPayoutAmount_t_774769426"); // 2
      Instrmt_30_set.insert("OptPayoutAmount_t_774769426");
      Instrmt_30.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_30_set.insert("INT");
      Instrmt_30.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_30_set.insert("CDSD");
      Instrmt_30.add_attribute("ListMeth", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("CapPx", "11592785.380000"); // 2
      Instrmt_30_set.insert("11592785.380000");
      Instrmt_30.add_attribute("FlrPx", "14243822.070000"); // 2
      Instrmt_30_set.insert("14243822.070000");
      Instrmt_30.add_attribute("PutCall", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("FlexInd", "true"); // 2
      Instrmt_30_set.insert("true");
      Instrmt_30.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_30_set.insert("true");
      Instrmt_30.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_30_set.insert("Mo");
      Instrmt_30.add_attribute("CpnRt", "9825215.200000"); // 2
      Instrmt_30_set.insert("9825215.200000");
      Instrmt_30.add_attribute("Exch", "SecurityExchange_t_2104877594"); // 2
      Instrmt_30_set.insert("SecurityExchange_t_2104877594");
      Instrmt_30.add_attribute("PosLmt", "1924829043"); // 2
      Instrmt_30_set.insert("1924829043");
      Instrmt_30.add_attribute("NTPosLmt", "55034123"); // 2
      Instrmt_30_set.insert("55034123");
      Instrmt_30.add_attribute("Issr", "Issuer_t_549301493"); // 2
      Instrmt_30_set.insert("Issuer_t_549301493");
      Instrmt_30.add_attribute("EncIssrLen", "1126285587"); // 2
      Instrmt_30_set.insert("1126285587");
      Instrmt_30.add_attribute("EncIssr", "EncodedIssuer_t_292074501"); // 2
      Instrmt_30_set.insert("EncodedIssuer_t_292074501");
      Instrmt_30.add_attribute("Desc", "SecurityDesc_t_2129012425"); // 2
      Instrmt_30_set.insert("SecurityDesc_t_2129012425");
      Instrmt_30.add_attribute("EncSecDescLen", "1171917152"); // 2
      Instrmt_30_set.insert("1171917152");
      Instrmt_30.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1754122299"); // 2
      Instrmt_30_set.insert("EncodedSecurityDesc_t_1754122299");
      Instrmt_30.add_attribute("Pool", "Pool_t_574993250"); // 2
      Instrmt_30_set.insert("Pool_t_574993250");
      Instrmt_30.add_attribute("CSetMo", "1077889292"); // 2
      Instrmt_30_set.insert("1077889292");
      Instrmt_30.add_attribute("CPPgm", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("CPRegT", "CPRegType_t_1698181631"); // 2
      Instrmt_30_set.insert("CPRegType_t_1698181631");
      Instrmt_30.add_attribute("Dated", "DatedDate_t_1439351167"); // 2
      Instrmt_30_set.insert("DatedDate_t_1439351167");
      Instrmt_30.add_attribute("IntAcrl", "InterestAccrualDate_t_1461447815"); // 2
      Instrmt_30_set.insert("InterestAccrualDate_t_1461447815");
      all_values.push_back(Instrmt_30_set);
      all_compo_names.insert("Instrmt_30_set");

      {
        xml_element AID_33{"AID"};
        multiset<string> AID_33_set;
        AID_33.add_attribute("AltID", "SecurityAltID_t_917788494"); // 3
        AID_33_set.insert("SecurityAltID_t_917788494");
        AID_33.add_attribute("AltIDSrc", "6"); // 3
        AID_33_set.insert("6");
        all_values.push_back(AID_33_set);
        all_compo_names.insert("AID_33_set");

        Instrmt_30.add_element(AID_33);
      }
      {
        xml_element SecXML_33{"SecXML"};
        multiset<string> SecXML_33_set;
        SecXML_33.add_attribute("Schema", "SecurityXMLSchema_t_1692309163"); // 3
        SecXML_33_set.insert("SecurityXMLSchema_t_1692309163");
        all_values.push_back(SecXML_33_set);
        all_compo_names.insert("SecXML_33_set");

        Instrmt_30.add_element(SecXML_33);
      }
      {
        xml_element Evnt_33{"Evnt"};
        multiset<string> Evnt_33_set;
        Evnt_33.add_attribute("EventTyp", "9"); // 3
        Evnt_33_set.insert("9");
        Evnt_33.add_attribute("Dt", "EventDate_t_1259057181"); // 3
        Evnt_33_set.insert("EventDate_t_1259057181");
        Evnt_33.add_attribute("Tm", "EventTime_t_319594942"); // 3
        Evnt_33_set.insert("EventTime_t_319594942");
        Evnt_33.add_attribute("Px", "10674053.630000"); // 3
        Evnt_33_set.insert("10674053.630000");
        Evnt_33.add_attribute("Txt", "EventText_t_1481262500"); // 3
        Evnt_33_set.insert("EventText_t_1481262500");
        all_values.push_back(Evnt_33_set);
        all_compo_names.insert("Evnt_33_set");

        Instrmt_30.add_element(Evnt_33);
      }
      {
        xml_element Pty_171{"Pty"};
        multiset<string> Pty_171_set;
        Pty_171.add_attribute("ID", "InstrumentPartyID_t_903503321"); // 3
        Pty_171_set.insert("InstrumentPartyID_t_903503321");
        Pty_171.add_attribute("Src", "3"); // 3
        Pty_171_set.insert("3");
        Pty_171.add_attribute("R", "77"); // 3
        Pty_171_set.insert("77");
        all_values.push_back(Pty_171_set);
        all_compo_names.insert("Pty_171_set");

        {
          xml_element Sub_171{"Sub"};
          multiset<string> Sub_171_set;
          Sub_171.add_attribute("ID", "InstrumentPartySubID_t_2117714794"); // 4
          Sub_171_set.insert("InstrumentPartySubID_t_2117714794");
          Sub_171.add_attribute("Typ", "30"); // 4
          Sub_171_set.insert("30");
          all_values.push_back(Sub_171_set);
          all_compo_names.insert("Sub_171_set");

          Pty_171.add_element(Sub_171);
        }
        Instrmt_30.add_element(Pty_171);
      }
      {
        xml_element CmplxEvnt_30{"CmplxEvnt"};
        multiset<string> CmplxEvnt_30_set;
        CmplxEvnt_30.add_attribute("Typ", "6"); // 3
        CmplxEvnt_30_set.insert("6");
        CmplxEvnt_30.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_379011775"); // 3
        CmplxEvnt_30_set.insert("ComplexOptPayoutAmount_t_379011775");
        CmplxEvnt_30.add_attribute("Px", "7835754.710000"); // 3
        CmplxEvnt_30_set.insert("7835754.710000");
        CmplxEvnt_30.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_30_set.insert("2");
        CmplxEvnt_30.add_attribute("PxBndryPrcsn", "1563571.710000"); // 3
        CmplxEvnt_30_set.insert("1563571.710000");
        CmplxEvnt_30.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_30_set.insert("2");
        CmplxEvnt_30.add_attribute("Cond", "1"); // 3
        CmplxEvnt_30_set.insert("1");
        all_values.push_back(CmplxEvnt_30_set);
        all_compo_names.insert("CmplxEvnt_30_set");

        {
          xml_element EvntDts_30{"EvntDts"};
          multiset<string> EvntDts_30_set;
          EvntDts_30.add_attribute("StartDt", "ComplexEventStartDate_t_1282642758"); // 4
          EvntDts_30_set.insert("ComplexEventStartDate_t_1282642758");
          EvntDts_30.add_attribute("EndDt", "ComplexEventEndDate_t_1130684096"); // 4
          EvntDts_30_set.insert("ComplexEventEndDate_t_1130684096");
          all_values.push_back(EvntDts_30_set);
          all_compo_names.insert("EvntDts_30_set");

          {
            xml_element EvntTms_30{"EvntTms"};
            multiset<string> EvntTms_30_set;
            EvntTms_30.add_attribute("StartTm", "1673905731"); // 5
            EvntTms_30_set.insert("1673905731");
            EvntTms_30.add_attribute("EndTm", "307076262"); // 5
            EvntTms_30_set.insert("307076262");
            all_values.push_back(EvntTms_30_set);
            all_compo_names.insert("EvntTms_30_set");

            EvntDts_30.add_element(EvntTms_30);
          }
          CmplxEvnt_30.add_element(EvntDts_30);
        }
        Instrmt_30.add_element(CmplxEvnt_30);
      }
      Inc_2.add_element(Instrmt_30);
    }
    {
      xml_element Undly_42{"Undly"};
      multiset<string> Undly_42_set;
      Undly_42.add_attribute("Sym", "UnderlyingSymbol_t_737322747"); // 2
      Undly_42_set.insert("UnderlyingSymbol_t_737322747");
      Undly_42.add_attribute("Sfx", "WI"); // 2
      Undly_42_set.insert("WI");
      Undly_42.add_attribute("ID", "UnderlyingSecurityID_t_1384965554"); // 2
      Undly_42_set.insert("UnderlyingSecurityID_t_1384965554");
      Undly_42.add_attribute("Src", "F"); // 2
      Undly_42_set.insert("F");
      Undly_42.add_attribute("Prod", "7"); // 2
      Undly_42_set.insert("7");
      Undly_42.add_attribute("CFI", "UnderlyingCFICode_t_676833073"); // 2
      Undly_42_set.insert("UnderlyingCFICode_t_676833073");
      Undly_42.add_attribute("SecTyp", "BDN"); // 2
      Undly_42_set.insert("BDN");
      Undly_42.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_569901811"); // 2
      Undly_42_set.insert("UnderlyingSecuritySubType_t_569901811");
      Undly_42.add_attribute("MMY", "1097536086"); // 2
      Undly_42_set.insert("1097536086");
      Undly_42.add_attribute("Mat", "UnderlyingMaturityDate_t_1826186637"); // 2
      Undly_42_set.insert("UnderlyingMaturityDate_t_1826186637");
      Undly_42.add_attribute("MatTm", "754794900"); // 2
      Undly_42_set.insert("754794900");
      Undly_42.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_209109619"); // 2
      Undly_42_set.insert("UnderlyingCouponPaymentDate_t_209109619");
      Undly_42.add_attribute("RestrctTyp", "XR"); // 2
      Undly_42_set.insert("XR");
      Undly_42.add_attribute("Snrty", "SB"); // 2
      Undly_42_set.insert("SB");
      Undly_42.add_attribute("NotlPctOut", "16903721.190000"); // 2
      Undly_42_set.insert("16903721.190000");
      Undly_42.add_attribute("OrigNotlPctOut", "9018012.520000"); // 2
      Undly_42_set.insert("9018012.520000");
      Undly_42.add_attribute("AttchPnt", "19014005.170000"); // 2
      Undly_42_set.insert("19014005.170000");
      Undly_42.add_attribute("DetchPnt", "3010495.310000"); // 2
      Undly_42_set.insert("3010495.310000");
      Undly_42.add_attribute("Issued", "UnderlyingIssueDate_t_872032399"); // 2
      Undly_42_set.insert("UnderlyingIssueDate_t_872032399");
      Undly_42.add_attribute("RepoCollSecTyp", "1702454468"); // 2
      Undly_42_set.insert("1702454468");
      Undly_42.add_attribute("RepoTrm", "1486731046"); // 2
      Undly_42_set.insert("1486731046");
      Undly_42.add_attribute("RepoRt", "12510441.740000"); // 2
      Undly_42_set.insert("12510441.740000");
      Undly_42.add_attribute("Fctr", "3385462.910000"); // 2
      Undly_42_set.insert("3385462.910000");
      Undly_42.add_attribute("CrdRtg", "UnderlyingCreditRating_t_482322860"); // 2
      Undly_42_set.insert("UnderlyingCreditRating_t_482322860");
      Undly_42.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1407401345"); // 2
      Undly_42_set.insert("UnderlyingInstrRegistry_t_1407401345");
      Undly_42.add_attribute("Ctry", "1177155885"); // 2
      Undly_42_set.insert("1177155885");
      Undly_42.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_27216166"); // 2
      Undly_42_set.insert("UnderlyingStateOrProvinceOfIssue_t_27216166");
      Undly_42.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_542560455"); // 2
      Undly_42_set.insert("UnderlyingLocaleOfIssue_t_542560455");
      Undly_42.add_attribute("Redeem", "UnderlyingRedemptionDate_t_160356333"); // 2
      Undly_42_set.insert("UnderlyingRedemptionDate_t_160356333");
      Undly_42.add_attribute("StrkPx", "17011218.980000"); // 2
      Undly_42_set.insert("17011218.980000");
      Undly_42.add_attribute("StrkCcy", "EUR"); // 2
      Undly_42_set.insert("EUR");
      Undly_42.add_attribute("OptA", "1802537231"); // 2
      Undly_42_set.insert("1802537231");
      Undly_42.add_attribute("Mult", "871186.230000"); // 2
      Undly_42_set.insert("871186.230000");
      Undly_42.add_attribute("MultTyp", "2"); // 2
      Undly_42_set.insert("2");
      Undly_42.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_42_set.insert("3");
      Undly_42.add_attribute("UOM", "MMBtu"); // 2
      Undly_42_set.insert("MMBtu");
      Undly_42.add_attribute("UOMQty", "18514698.600000"); // 2
      Undly_42_set.insert("18514698.600000");
      Undly_42.add_attribute("PxUOM", "Bu"); // 2
      Undly_42_set.insert("Bu");
      Undly_42.add_attribute("PxUOMQty", "18614877.820000"); // 2
      Undly_42_set.insert("18614877.820000");
      Undly_42.add_attribute("TmUnit", "H"); // 2
      Undly_42_set.insert("H");
      Undly_42.add_attribute("ExerStyle", "2"); // 2
      Undly_42_set.insert("2");
      Undly_42.add_attribute("CpnRt", "20705974.010000"); // 2
      Undly_42_set.insert("20705974.010000");
      Undly_42.add_attribute("Exch", "UnderlyingSecurityExchange_t_1528470780"); // 2
      Undly_42_set.insert("UnderlyingSecurityExchange_t_1528470780");
      Undly_42.add_attribute("Issr", "UnderlyingIssuer_t_306580227"); // 2
      Undly_42_set.insert("UnderlyingIssuer_t_306580227");
      Undly_42.add_attribute("EncUndIssrLen", "1613485873"); // 2
      Undly_42_set.insert("1613485873");
      Undly_42.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_282788385"); // 2
      Undly_42_set.insert("EncodedUnderlyingIssuer_t_282788385");
      Undly_42.add_attribute("Desc", "UnderlyingSecurityDesc_t_60497096"); // 2
      Undly_42_set.insert("UnderlyingSecurityDesc_t_60497096");
      Undly_42.add_attribute("EncUndSecDescLen", "1914535404"); // 2
      Undly_42_set.insert("1914535404");
      Undly_42.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1154820784"); // 2
      Undly_42_set.insert("EncodedUnderlyingSecurityDesc_t_1154820784");
      Undly_42.add_attribute("CPPgm", "UnderlyingCPProgram_t_1762951564"); // 2
      Undly_42_set.insert("UnderlyingCPProgram_t_1762951564");
      Undly_42.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1253782802"); // 2
      Undly_42_set.insert("UnderlyingCPRegType_t_1253782802");
      Undly_42.add_attribute("AllocPct", "2583813.100000"); // 2
      Undly_42_set.insert("2583813.100000");
      Undly_42.add_attribute("Ccy", "JPY"); // 2
      Undly_42_set.insert("JPY");
      Undly_42.add_attribute("Qty", "16657826.560000"); // 2
      Undly_42_set.insert("16657826.560000");
      Undly_42.add_attribute("SettlTyp", "5"); // 2
      Undly_42_set.insert("5");
      Undly_42.add_attribute("CashAmt", "UnderlyingCashAmount_t_1763321829"); // 2
      Undly_42_set.insert("UnderlyingCashAmount_t_1763321829");
      Undly_42.add_attribute("CashTyp", "DIFF"); // 2
      Undly_42_set.insert("DIFF");
      Undly_42.add_attribute("Px", "12915264.260000"); // 2
      Undly_42_set.insert("12915264.260000");
      Undly_42.add_attribute("DirtPx", "13169600.790000"); // 2
      Undly_42_set.insert("13169600.790000");
      Undly_42.add_attribute("EndPx", "9104961.810000"); // 2
      Undly_42_set.insert("9104961.810000");
      Undly_42.add_attribute("StartVal", "UnderlyingStartValue_t_41721859"); // 2
      Undly_42_set.insert("UnderlyingStartValue_t_41721859");
      Undly_42.add_attribute("CurVal", "UnderlyingCurrentValue_t_972013662"); // 2
      Undly_42_set.insert("UnderlyingCurrentValue_t_972013662");
      Undly_42.add_attribute("EndVal", "UnderlyingEndValue_t_997614804"); // 2
      Undly_42_set.insert("UnderlyingEndValue_t_997614804");
      Undly_42.add_attribute("AdjQty", "17593142.460000"); // 2
      Undly_42_set.insert("17593142.460000");
      Undly_42.add_attribute("FxRate", "2791805.630000"); // 2
      Undly_42_set.insert("2791805.630000");
      Undly_42.add_attribute("FxRateCalc", "D"); // 2
      Undly_42_set.insert("D");
      Undly_42.add_attribute("CapValu", "UnderlyingCapValue_t_1463300459"); // 2
      Undly_42_set.insert("UnderlyingCapValue_t_1463300459");
      Undly_42.add_attribute("SetMeth", "UnderlyingSettlMethod_t_156249274"); // 2
      Undly_42_set.insert("UnderlyingSettlMethod_t_156249274");
      Undly_42.add_attribute("PutCall", "1475570635"); // 2
      Undly_42_set.insert("1475570635");
      all_values.push_back(Undly_42_set);
      all_compo_names.insert("Undly_42_set");

      {
        xml_element UndAID_42{"UndAID"};
        multiset<string> UndAID_42_set;
        UndAID_42.add_attribute("AltID", "UnderlyingSecurityAltID_t_845989660"); // 3
        UndAID_42_set.insert("UnderlyingSecurityAltID_t_845989660");
        UndAID_42.add_attribute("AltIDSrc", "1"); // 3
        UndAID_42_set.insert("1");
        all_values.push_back(UndAID_42_set);
        all_compo_names.insert("UndAID_42_set");

        Undly_42.add_element(UndAID_42);
      }
      {
        xml_element Stip_69{"Stip"};
        multiset<string> Stip_69_set;
        Stip_69.add_attribute("Typ", "BROKERCREDIT"); // 3
        Stip_69_set.insert("BROKERCREDIT");
        Stip_69.add_attribute("Val", "UnderlyingStipValue_t_226976793"); // 3
        Stip_69_set.insert("UnderlyingStipValue_t_226976793");
        all_values.push_back(Stip_69_set);
        all_compo_names.insert("Stip_69_set");

        Undly_42.add_element(Stip_69);
      }
      {
        xml_element Pty_172{"Pty"};
        multiset<string> Pty_172_set;
        Pty_172.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1094693113"); // 3
        Pty_172_set.insert("UnderlyingInstrumentPartyID_t_1094693113");
        Pty_172.add_attribute("Src", "5"); // 3
        Pty_172_set.insert("5");
        Pty_172.add_attribute("R", "15"); // 3
        Pty_172_set.insert("15");
        all_values.push_back(Pty_172_set);
        all_compo_names.insert("Pty_172_set");

        {
          xml_element Sub_172{"Sub"};
          multiset<string> Sub_172_set;
          Sub_172.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1155190209"); // 4
          Sub_172_set.insert("UnderlyingInstrumentPartySubID_t_1155190209");
          Sub_172.add_attribute("Typ", "33"); // 4
          Sub_172_set.insert("33");
          all_values.push_back(Sub_172_set);
          all_compo_names.insert("Sub_172_set");

          Pty_172.add_element(Sub_172);
        }
        Undly_42.add_element(Pty_172);
      }
      Inc_2.add_element(Undly_42);
    }
    {
      xml_element Leg_42{"Leg"};
      multiset<string> Leg_42_set;
      Leg_42.add_attribute("Sym", "LegSymbol_t_1664585962"); // 2
      Leg_42_set.insert("LegSymbol_t_1664585962");
      Leg_42.add_attribute("Sfx", "CD"); // 2
      Leg_42_set.insert("CD");
      Leg_42.add_attribute("ID", "LegSecurityID_t_1885521172"); // 2
      Leg_42_set.insert("LegSecurityID_t_1885521172");
      Leg_42.add_attribute("Src", "7"); // 2
      Leg_42_set.insert("7");
      Leg_42.add_attribute("Prod", "5"); // 2
      Leg_42_set.insert("5");
      Leg_42.add_attribute("CFI", "LegCFICode_t_1474143187"); // 2
      Leg_42_set.insert("LegCFICode_t_1474143187");
      Leg_42.add_attribute("SecTyp", "AN"); // 2
      Leg_42_set.insert("AN");
      Leg_42.add_attribute("SecSubTyp", "LegSecuritySubType_t_1855842426"); // 2
      Leg_42_set.insert("LegSecuritySubType_t_1855842426");
      Leg_42.add_attribute("MMY", "1089981368"); // 2
      Leg_42_set.insert("1089981368");
      Leg_42.add_attribute("Mat", "LegMaturityDate_t_1502125744"); // 2
      Leg_42_set.insert("LegMaturityDate_t_1502125744");
      Leg_42.add_attribute("MatTm", "999885205"); // 2
      Leg_42_set.insert("999885205");
      Leg_42.add_attribute("CpnPmt", "LegCouponPaymentDate_t_259457799"); // 2
      Leg_42_set.insert("LegCouponPaymentDate_t_259457799");
      Leg_42.add_attribute("Issued", "LegIssueDate_t_265138277"); // 2
      Leg_42_set.insert("LegIssueDate_t_265138277");
      Leg_42.add_attribute("RepoCollSecTyp", "1041607064"); // 2
      Leg_42_set.insert("1041607064");
      Leg_42.add_attribute("RepoTrm", "1231471461"); // 2
      Leg_42_set.insert("1231471461");
      Leg_42.add_attribute("RepoRt", "12627530.810000"); // 2
      Leg_42_set.insert("12627530.810000");
      Leg_42.add_attribute("Fctr", "6534376.630000"); // 2
      Leg_42_set.insert("6534376.630000");
      Leg_42.add_attribute("CrdRtg", "LegCreditRating_t_1510652024"); // 2
      Leg_42_set.insert("LegCreditRating_t_1510652024");
      Leg_42.add_attribute("Rgstry", "LegInstrRegistry_t_876835934"); // 2
      Leg_42_set.insert("LegInstrRegistry_t_876835934");
      Leg_42.add_attribute("Ctry", "2116738122"); // 2
      Leg_42_set.insert("2116738122");
      Leg_42.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1666901299"); // 2
      Leg_42_set.insert("LegStateOrProvinceOfIssue_t_1666901299");
      Leg_42.add_attribute("Lcl", "LegLocaleOfIssue_t_204922922"); // 2
      Leg_42_set.insert("LegLocaleOfIssue_t_204922922");
      Leg_42.add_attribute("Redeem", "LegRedemptionDate_t_815244134"); // 2
      Leg_42_set.insert("LegRedemptionDate_t_815244134");
      Leg_42.add_attribute("Strk", "3075305.370000"); // 2
      Leg_42_set.insert("3075305.370000");
      Leg_42.add_attribute("StrkCcy", "CAN"); // 2
      Leg_42_set.insert("CAN");
      Leg_42.add_attribute("OptA", "1402223650"); // 2
      Leg_42_set.insert("1402223650");
      Leg_42.add_attribute("Cmult", "3208102.770000"); // 2
      Leg_42_set.insert("3208102.770000");
      Leg_42.add_attribute("MultTyp", "2"); // 2
      Leg_42_set.insert("2");
      Leg_42.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_42_set.insert("1");
      Leg_42.add_attribute("UOM", "Bu"); // 2
      Leg_42_set.insert("Bu");
      Leg_42.add_attribute("UOMQty", "10690884.190000"); // 2
      Leg_42_set.insert("10690884.190000");
      Leg_42.add_attribute("PxUOM", "MMbbl"); // 2
      Leg_42_set.insert("MMbbl");
      Leg_42.add_attribute("PxUOMQty", "6905861.710000"); // 2
      Leg_42_set.insert("6905861.710000");
      Leg_42.add_attribute("TmUnit", "Min"); // 2
      Leg_42_set.insert("Min");
      Leg_42.add_attribute("ExerStyle", "1"); // 2
      Leg_42_set.insert("1");
      Leg_42.add_attribute("CpnRt", "172457.100000"); // 2
      Leg_42_set.insert("172457.100000");
      Leg_42.add_attribute("Exch", "LegSecurityExchange_t_138354676"); // 2
      Leg_42_set.insert("LegSecurityExchange_t_138354676");
      Leg_42.add_attribute("Issr", "LegIssuer_t_1613619449"); // 2
      Leg_42_set.insert("LegIssuer_t_1613619449");
      Leg_42.add_attribute("EncLegIssrLen", "1107227078"); // 2
      Leg_42_set.insert("1107227078");
      Leg_42.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1640480420"); // 2
      Leg_42_set.insert("EncodedLegIssuer_t_1640480420");
      Leg_42.add_attribute("Desc", "LegSecurityDesc_t_466021006"); // 2
      Leg_42_set.insert("LegSecurityDesc_t_466021006");
      Leg_42.add_attribute("EncLegSecDescLen", "1366684877"); // 2
      Leg_42_set.insert("1366684877");
      Leg_42.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1905618697"); // 2
      Leg_42_set.insert("EncodedLegSecurityDesc_t_1905618697");
      Leg_42.add_attribute("RatioQty", "15076280.710000"); // 2
      Leg_42_set.insert("15076280.710000");
      Leg_42.add_attribute("Side", "4"); // 2
      Leg_42_set.insert("4");
      Leg_42.add_attribute("Ccy", "USD"); // 2
      Leg_42_set.insert("USD");
      Leg_42.add_attribute("Pool", "LegPool_t_1961324715"); // 2
      Leg_42_set.insert("LegPool_t_1961324715");
      Leg_42.add_attribute("Dated", "LegDatedDate_t_1897724065"); // 2
      Leg_42_set.insert("LegDatedDate_t_1897724065");
      Leg_42.add_attribute("CSetMo", "2130320208"); // 2
      Leg_42_set.insert("2130320208");
      Leg_42.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1480742366"); // 2
      Leg_42_set.insert("LegInterestAccrualDate_t_1480742366");
      Leg_42.add_attribute("PutCall", "2102646987"); // 2
      Leg_42_set.insert("2102646987");
      Leg_42.add_attribute("LegOptionRatio", "7980806.940000"); // 2
      Leg_42_set.insert("7980806.940000");
      Leg_42.add_attribute("Px", "17882729.030000"); // 2
      Leg_42_set.insert("17882729.030000");
      all_values.push_back(Leg_42_set);
      all_compo_names.insert("Leg_42_set");

      {
        xml_element LegAID_42{"LegAID"};
        multiset<string> LegAID_42_set;
        LegAID_42.add_attribute("SecAltID", "LegSecurityAltID_t_1558770650"); // 3
        LegAID_42_set.insert("LegSecurityAltID_t_1558770650");
        LegAID_42.add_attribute("SecAltIDSrc", "H"); // 3
        LegAID_42_set.insert("H");
        all_values.push_back(LegAID_42_set);
        all_compo_names.insert("LegAID_42_set");

        Leg_42.add_element(LegAID_42);
      }
      Inc_2.add_element(Leg_42);
    }
    {
      xml_element Yield_9{"Yield"};
      multiset<string> Yield_9_set;
      Yield_9.add_attribute("Typ", "CALL"); // 2
      Yield_9_set.insert("CALL");
      Yield_9.add_attribute("Yld", "18795809.270000"); // 2
      Yield_9_set.insert("18795809.270000");
      Yield_9.add_attribute("CalcDt", "YieldCalcDate_t_1244804079"); // 2
      Yield_9_set.insert("YieldCalcDate_t_1244804079");
      Yield_9.add_attribute("RedDt", "YieldRedemptionDate_t_1452943117"); // 2
      Yield_9_set.insert("YieldRedemptionDate_t_1452943117");
      Yield_9.add_attribute("RedPx", "6846459.260000"); // 2
      Yield_9_set.insert("6846459.260000");
      Yield_9.add_attribute("RedPxTyp", "2"); // 2
      Yield_9_set.insert("2");
      all_values.push_back(Yield_9_set);
      all_compo_names.insert("Yield_9_set");

      Inc_2.add_element(Yield_9);
    }
    {
      xml_element SprdBnchmkCurve_14{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_14_set;
      SprdBnchmkCurve_14.add_attribute("Spread", "4860478.060000"); // 2
      SprdBnchmkCurve_14_set.insert("4860478.060000");
      SprdBnchmkCurve_14.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_14_set.insert("CAN");
      SprdBnchmkCurve_14.add_attribute("Name", "SONIA"); // 2
      SprdBnchmkCurve_14_set.insert("SONIA");
      SprdBnchmkCurve_14.add_attribute("Point", "BenchmarkCurvePoint_t_1392477808"); // 2
      SprdBnchmkCurve_14_set.insert("BenchmarkCurvePoint_t_1392477808");
      SprdBnchmkCurve_14.add_attribute("Px", "11493355.710000"); // 2
      SprdBnchmkCurve_14_set.insert("11493355.710000");
      SprdBnchmkCurve_14.add_attribute("PxTyp", "17"); // 2
      SprdBnchmkCurve_14_set.insert("17");
      SprdBnchmkCurve_14.add_attribute("SecID", "BenchmarkSecurityID_t_352221239"); // 2
      SprdBnchmkCurve_14_set.insert("BenchmarkSecurityID_t_352221239");
      SprdBnchmkCurve_14.add_attribute("SecIDSrc", "H"); // 2
      SprdBnchmkCurve_14_set.insert("H");
      all_values.push_back(SprdBnchmkCurve_14_set);
      all_compo_names.insert("SprdBnchmkCurve_14_set");

      Inc_2.add_element(SprdBnchmkCurve_14);
    }
    {
      xml_element RtSrc_7{"RtSrc"};
      multiset<string> RtSrc_7_set;
      RtSrc_7.add_attribute("RtSrc", "1"); // 2
      RtSrc_7_set.insert("1");
      RtSrc_7.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_7_set.insert("0");
      RtSrc_7.add_attribute("RefPg", "ReferencePage_t_400467393"); // 2
      RtSrc_7_set.insert("ReferencePage_t_400467393");
      all_values.push_back(RtSrc_7_set);
      all_compo_names.insert("RtSrc_7_set");

      Inc_2.add_element(RtSrc_7);
    }
    {
      xml_element SecSizesGrp_2{"SecSizesGrp"};
      multiset<string> SecSizesGrp_2_set;
      SecSizesGrp_2.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_2_set.insert("1");
      SecSizesGrp_2.add_attribute("MDSecSize", "220951.590000"); // 2
      SecSizesGrp_2_set.insert("220951.590000");
      all_values.push_back(SecSizesGrp_2_set);
      all_compo_names.insert("SecSizesGrp_2_set");

      Inc_2.add_element(SecSizesGrp_2);
    }
    {
      xml_element StatsIndGrp_2{"StatsIndGrp"};
      multiset<string> StatsIndGrp_2_set;
      StatsIndGrp_2.add_attribute("StatsTyp", "1"); // 2
      StatsIndGrp_2_set.insert("1");
      all_values.push_back(StatsIndGrp_2_set);
      all_compo_names.insert("StatsIndGrp_2_set");

      Inc_2.add_element(StatsIndGrp_2);
    }
    {
      xml_element Pty_173{"Pty"};
      multiset<string> Pty_173_set;
      Pty_173.add_attribute("ID", "PartyID_t_1697191794"); // 2
      Pty_173_set.insert("PartyID_t_1697191794");
      Pty_173.add_attribute("Src", "2"); // 2
      Pty_173_set.insert("2");
      Pty_173.add_attribute("R", "64"); // 2
      Pty_173_set.insert("64");
      all_values.push_back(Pty_173_set);
      all_compo_names.insert("Pty_173_set");

      {
        xml_element Sub_173{"Sub"};
        multiset<string> Sub_173_set;
        Sub_173.add_attribute("ID", "PartySubID_t_1680028354"); // 3
        Sub_173_set.insert("PartySubID_t_1680028354");
        Sub_173.add_attribute("Typ", "19"); // 3
        Sub_173_set.insert("19");
        all_values.push_back(Sub_173_set);
        all_compo_names.insert("Sub_173_set");

        Pty_173.add_element(Sub_173);
      }
      Inc_2.add_element(Pty_173);
    }
    elt.add_element(Inc_2);
  } // end Inc
  { // Rtg
    xml_element Rtg_4{"Rtg"};
    multiset<string> Rtg_4_set;
    Rtg_4.add_attribute("RtgTyp", "2"); // 1
    Rtg_4_set.insert("2");
    Rtg_4.add_attribute("RtgID", "RoutingID_t_957467849"); // 1
    Rtg_4_set.insert("RoutingID_t_957467849");
    all_values.push_back(Rtg_4_set);
    all_compo_names.insert("Rtg_4_set");

    elt.add_element(Rtg_4);
  } // end Rtg
  cout << "////////////////////////////////////////////" << endl;
  cout << elt.to_string() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  FIX::Message fix_msg;
  ASSERT_TRUE(converter.fixml2fix(elt, fix_msg));

  cout << endl << "////////////////////////////////////////////" << endl;
  cout << fix_msg.toXML() << endl;
  cout << "////////////////////////////////////////////" << endl << endl;

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> fix_s;
  list<multiset<string>> fix_ls;
  msg_to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
  fix_ls.push_back(fix_s);

  BOOST_LOG_TRIVIAL(debug) << "All FIX components (" << fix_ls.size() << ")";
  for (const auto &l : fix_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  cout << endl << "////////////////////////////////////////////" << endl;
  multiset<string> xml_s;
  list<multiset<string>> xml_ls;
  elt_to_list(elt, fixml_dict, xml_s, xml_ls);
  xml_ls.push_back(xml_s);
  BOOST_LOG_TRIVIAL(debug) << "All XML components (" << xml_ls.size() << ")";
  for (const auto &l : xml_ls) {
    cout << "	[";
    copy(l.begin(), l.end(), ostream_iterator<string>(cout, " "));
    cout << "]" << endl;
  }

  for (const auto &fix_l : fix_ls) {
    bool found = false;
    for (const auto &xml_l : xml_ls) {
      if (includes(xml_l.begin(), xml_l.end(), fix_l.begin(), fix_l.end())) {
        found = true;
        break;
      } // end if includes
    }   // end for all_values
    EXPECT_TRUE(found);
    if (!found) {
      BOOST_LOG_TRIVIAL(debug)
        << "[TO CHECK] This FIX component was not found in XML message";
      cout << "	 ---> [";
      copy(fix_l.begin(), fix_l.end(), ostream_iterator<string>(cout, " "));
      cout << "]" << endl << endl;
    } // end if ! found
  }   // end for elt_lists
}
