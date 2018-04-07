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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataInc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataIncrementalRefresh_message_t_0;
  elt.add_attribute("MDBkTyp", "1"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("1");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_1638004642"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("MDFeedType_t_1638004642");
  elt.add_attribute("TrdDt", "TradeDate_t_1770733457"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("TradeDate_t_1770733457");
  elt.add_attribute("ReqID", "MDReqID_t_1764456490"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("MDReqID_t_1764456490");
  elt.add_attribute("ApplQuDepth", "1603287722"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("1603287722");
  elt.add_attribute("ApplQuResolution", "3"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("3");
  all_values.push_back(MarketDataIncrementalRefresh_message_t_0);
  all_compo_names.insert("MarketDataIncrementalRefresh_message_t");

  { // Hdr
    xml_element Hdr_39{"Hdr"};
    multiset<string> Hdr_39_set;
    Hdr_39.add_attribute("SeqNum", "1923296156"); // 1
    Hdr_39_set.insert("1923296156");
    Hdr_39.add_attribute("SID", "SenderCompID_t_2143521276"); // 1
    Hdr_39_set.insert("SenderCompID_t_2143521276");
    Hdr_39.add_attribute("TID", "TargetCompID_t_1949163470"); // 1
    Hdr_39_set.insert("TargetCompID_t_1949163470");
    Hdr_39.add_attribute("OBID", "OnBehalfOfCompID_t_1321774245"); // 1
    Hdr_39_set.insert("OnBehalfOfCompID_t_1321774245");
    Hdr_39.add_attribute("D2ID", "DeliverToCompID_t_909808343"); // 1
    Hdr_39_set.insert("DeliverToCompID_t_909808343");
    Hdr_39.add_attribute("SSub", "SenderSubID_t_244949296"); // 1
    Hdr_39_set.insert("SenderSubID_t_244949296");
    Hdr_39.add_attribute("SLoc", "SenderLocationID_t_1870428693"); // 1
    Hdr_39_set.insert("SenderLocationID_t_1870428693");
    Hdr_39.add_attribute("TSub", "TargetSubID_t_550578333"); // 1
    Hdr_39_set.insert("TargetSubID_t_550578333");
    Hdr_39.add_attribute("TLoc", "TargetLocationID_t_1097561547"); // 1
    Hdr_39_set.insert("TargetLocationID_t_1097561547");
    Hdr_39.add_attribute("OBSub", "OnBehalfOfSubID_t_1937307226"); // 1
    Hdr_39_set.insert("OnBehalfOfSubID_t_1937307226");
    Hdr_39.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2012800117"); // 1
    Hdr_39_set.insert("OnBehalfOfLocationID_t_2012800117");
    Hdr_39.add_attribute("D2Sub", "DeliverToSubID_t_240974807"); // 1
    Hdr_39_set.insert("DeliverToSubID_t_240974807");
    Hdr_39.add_attribute("D2Loc", "DeliverToLocationID_t_1364328837"); // 1
    Hdr_39_set.insert("DeliverToLocationID_t_1364328837");
    Hdr_39.add_attribute("PosDup", "Y"); // 1
    Hdr_39_set.insert("Y");
    Hdr_39.add_attribute("PosRsnd", "N"); // 1
    Hdr_39_set.insert("N");
    Hdr_39.add_attribute("Snt", "SendingTime_t_1556597934"); // 1
    Hdr_39_set.insert("SendingTime_t_1556597934");
    Hdr_39.add_attribute("OrigSnt", "OrigSendingTime_t_1627236500"); // 1
    Hdr_39_set.insert("OrigSendingTime_t_1627236500");
    Hdr_39.add_attribute("MsgEncd", "MessageEncoding_t_2026126030"); // 1
    Hdr_39_set.insert("MessageEncoding_t_2026126030");
    all_values.push_back(Hdr_39_set);
    all_compo_names.insert("Hdr_39_set");

    {
      xml_element Hop_39{"Hop"};
      multiset<string> Hop_39_set;
      Hop_39.add_attribute("ID", "HopCompID_t_1352109430"); // 2
      Hop_39_set.insert("HopCompID_t_1352109430");
      Hop_39.add_attribute("Ref", "1145549498"); // 2
      Hop_39_set.insert("1145549498");
      Hop_39.add_attribute("Snt", "HopSendingTime_t_1163533802"); // 2
      Hop_39_set.insert("HopSendingTime_t_1163533802");
      all_values.push_back(Hop_39_set);
      all_compo_names.insert("Hop_39_set");

      Hdr_39.add_element(Hop_39);
    }
    elt.add_element(Hdr_39);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_6{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_6_set;
    ApplSeqCtrl_6.add_attribute("ApplID", "ApplID_t_925856136"); // 1
    ApplSeqCtrl_6_set.insert("ApplID_t_925856136");
    ApplSeqCtrl_6.add_attribute("ApplSeqNum", "587571766"); // 1
    ApplSeqCtrl_6_set.insert("587571766");
    ApplSeqCtrl_6.add_attribute("ApplLastSeqNum", "1454645087"); // 1
    ApplSeqCtrl_6_set.insert("1454645087");
    ApplSeqCtrl_6.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_6_set.insert("false");
    all_values.push_back(ApplSeqCtrl_6_set);
    all_compo_names.insert("ApplSeqCtrl_6_set");

    elt.add_element(ApplSeqCtrl_6);
  } // end ApplSeqCtrl
  { // Inc
    xml_element Inc_0{"Inc"};
    multiset<string> Inc_0_set;
    Inc_0.add_attribute("UpdtAct", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("DelRsn", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("MDSubBkTyp", "2001221170"); // 1
    Inc_0_set.insert("2001221170");
    Inc_0.add_attribute("MktDepth", "400970155"); // 1
    Inc_0_set.insert("400970155");
    Inc_0.add_attribute("Typ", "C"); // 1
    Inc_0_set.insert("C");
    Inc_0.add_attribute("ID", "MDEntryID_t_1777033678"); // 1
    Inc_0_set.insert("MDEntryID_t_1777033678");
    Inc_0.add_attribute("RefID", "MDEntryRefID_t_397007784"); // 1
    Inc_0_set.insert("MDEntryRefID_t_397007784");
    Inc_0.add_attribute("MDStrmID", "MDStreamID_t_1340751402"); // 1
    Inc_0_set.insert("MDStreamID_t_1340751402");
    Inc_0.add_attribute("FinclStat", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("CorpActn", "L"); // 1
    Inc_0_set.insert("L");
    Inc_0.add_attribute("Px", "15857006.990000"); // 1
    Inc_0_set.insert("15857006.990000");
    Inc_0.add_attribute("PxTyp", "14"); // 1
    Inc_0_set.insert("14");
    Inc_0.add_attribute("OrdTyp", "L"); // 1
    Inc_0_set.insert("L");
    Inc_0.add_attribute("Ccy", "GBP"); // 1
    Inc_0_set.insert("GBP");
    Inc_0.add_attribute("SettlCcy", "CAN"); // 1
    Inc_0_set.insert("CAN");
    Inc_0.add_attribute("Sz", "18284217.360000"); // 1
    Inc_0_set.insert("18284217.360000");
    Inc_0.add_attribute("LotTyp", "4"); // 1
    Inc_0_set.insert("4");
    Inc_0.add_attribute("Dt", "965406825"); // 1
    Inc_0_set.insert("965406825");
    Inc_0.add_attribute("Tm", "1237536022"); // 1
    Inc_0_set.insert("1237536022");
    Inc_0.add_attribute("TickDirctn", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("Mkt", "MDMkt_t_844049207"); // 1
    Inc_0_set.insert("MDMkt_t_844049207");
    Inc_0.add_attribute("SesID", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("SesSub", "7"); // 1
    Inc_0_set.insert("7");
    Inc_0.add_attribute("TrdgStat", "12"); // 1
    Inc_0_set.insert("12");
    Inc_0.add_attribute("HaltRsn", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("QCond", "7"); // 1
    Inc_0_set.insert("7");
    Inc_0.add_attribute("TrdCond", "Y"); // 1
    Inc_0_set.insert("Y");
    Inc_0.add_attribute("TrdTyp", "25"); // 1
    Inc_0_set.insert("25");
    Inc_0.add_attribute("MtchTyp", "6"); // 1
    Inc_0_set.insert("6");
    Inc_0.add_attribute("Orig", "MDEntryOriginator_t_112426881"); // 1
    Inc_0_set.insert("MDEntryOriginator_t_112426881");
    Inc_0.add_attribute("LctnID", "LocationID_t_328443100"); // 1
    Inc_0_set.insert("LocationID_t_328443100");
    Inc_0.add_attribute("DeskID", "DeskID_t_237516421"); // 1
    Inc_0_set.insert("DeskID_t_237516421");
    Inc_0.add_attribute("OpenClsSettlFlag", "5"); // 1
    Inc_0_set.insert("5");
    Inc_0.add_attribute("TmInForce", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("ExpireDt", "ExpireDate_t_2014550099"); // 1
    Inc_0_set.insert("ExpireDate_t_2014550099");
    Inc_0.add_attribute("ExpireTm", "ExpireTime_t_910404821"); // 1
    Inc_0_set.insert("ExpireTime_t_910404821");
    Inc_0.add_attribute("MinQty", "10607824.340000"); // 1
    Inc_0_set.insert("10607824.340000");
    Inc_0.add_attribute("ExecInst", "7"); // 1
    Inc_0_set.insert("7");
    Inc_0.add_attribute("SellerDays", "69737300"); // 1
    Inc_0_set.insert("69737300");
    Inc_0.add_attribute("OrdID", "OrderID_t_498999485"); // 1
    Inc_0_set.insert("OrderID_t_498999485");
    Inc_0.add_attribute("OrdID2", "SecondaryOrderID_t_1492660047"); // 1
    Inc_0_set.insert("SecondaryOrderID_t_1492660047");
    Inc_0.add_attribute("EntryID", "QuoteEntryID_t_1927131760"); // 1
    Inc_0_set.insert("QuoteEntryID_t_1927131760");
    Inc_0.add_attribute("TrdID", "TradeID_t_1034778083"); // 1
    Inc_0_set.insert("TradeID_t_1034778083");
    Inc_0.add_attribute("Buyer", "MDEntryBuyer_t_1956752946"); // 1
    Inc_0_set.insert("MDEntryBuyer_t_1956752946");
    Inc_0.add_attribute("Seller", "MDEntrySeller_t_1502359042"); // 1
    Inc_0_set.insert("MDEntrySeller_t_1502359042");
    Inc_0.add_attribute("NumOfOrds", "1811531488"); // 1
    Inc_0_set.insert("1811531488");
    Inc_0.add_attribute("PosNo", "1637691034"); // 1
    Inc_0_set.insert("1637691034");
    Inc_0.add_attribute("Scope", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("PxDelta", "6294546.650000"); // 1
    Inc_0_set.insert("6294546.650000");
    Inc_0.add_attribute("NetChgPrevDay", "7277434.080000"); // 1
    Inc_0_set.insert("7277434.080000");
    Inc_0.add_attribute("Txt", "Text_t_997875748"); // 1
    Inc_0_set.insert("Text_t_997875748");
    Inc_0.add_attribute("EncTxtLen", "1473503872"); // 1
    Inc_0_set.insert("1473503872");
    Inc_0.add_attribute("EncTxt", "EncodedText_t_1169905212"); // 1
    Inc_0_set.insert("EncodedText_t_1169905212");
    Inc_0.add_attribute("MDPxLvl", "557318202"); // 1
    Inc_0_set.insert("557318202");
    Inc_0.add_attribute("Cpcty", "P"); // 1
    Inc_0_set.insert("P");
    Inc_0.add_attribute("MDOrigTyp", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("HighPx", "7043324.210000"); // 1
    Inc_0_set.insert("7043324.210000");
    Inc_0.add_attribute("LowPx", "5008640.330000"); // 1
    Inc_0_set.insert("5008640.330000");
    Inc_0.add_attribute("FirstPx", "3533032.960000"); // 1
    Inc_0_set.insert("3533032.960000");
    Inc_0.add_attribute("LastPx", "10881113.200000"); // 1
    Inc_0_set.insert("10881113.200000");
    Inc_0.add_attribute("TrdVol", "6132909.150000"); // 1
    Inc_0_set.insert("6132909.150000");
    Inc_0.add_attribute("SettlTyp", "8"); // 1
    Inc_0_set.insert("8");
    Inc_0.add_attribute("SettlDt", "SettlDate_t_1325627741"); // 1
    Inc_0_set.insert("SettlDate_t_1325627741");
    Inc_0.add_attribute("TransBkdTm", "TransBkdTime_t_1126687952"); // 1
    Inc_0_set.insert("TransBkdTime_t_1126687952");
    Inc_0.add_attribute("TxnTm", "TransactTime_t_401777428"); // 1
    Inc_0_set.insert("TransactTime_t_401777428");
    Inc_0.add_attribute("MDQteTyp", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("RptSeq", "2037092773"); // 1
    Inc_0_set.insert("2037092773");
    Inc_0.add_attribute("DealingCpcty", "A"); // 1
    Inc_0_set.insert("A");
    Inc_0.add_attribute("MDEntrySpotRt", "20110849.200000"); // 1
    Inc_0_set.insert("20110849.200000");
    Inc_0.add_attribute("MDEntryFwdPnts", "21068300.730000"); // 1
    Inc_0_set.insert("21068300.730000");
    all_values.push_back(Inc_0_set);
    all_compo_names.insert("Inc_0_set");

    {
      xml_element Instrmt_30{"Instrmt"};
      multiset<string> Instrmt_30_set;
      Instrmt_30.add_attribute("Sym", "Symbol_t_1961559348"); // 2
      Instrmt_30_set.insert("Symbol_t_1961559348");
      Instrmt_30.add_attribute("Sfx", "WI"); // 2
      Instrmt_30_set.insert("WI");
      Instrmt_30.add_attribute("ID", "SecurityID_t_1886478185"); // 2
      Instrmt_30_set.insert("SecurityID_t_1886478185");
      Instrmt_30.add_attribute("Src", "L"); // 2
      Instrmt_30_set.insert("L");
      Instrmt_30.add_attribute("Prod", "13"); // 2
      Instrmt_30_set.insert("13");
      Instrmt_30.add_attribute("ProdCmplx", "ProductComplex_t_1241353580"); // 2
      Instrmt_30_set.insert("ProductComplex_t_1241353580");
      Instrmt_30.add_attribute("SecGrp", "SecurityGroup_t_512901624"); // 2
      Instrmt_30_set.insert("SecurityGroup_t_512901624");
      Instrmt_30.add_attribute("CFI", "CFICode_t_655738003"); // 2
      Instrmt_30_set.insert("CFICode_t_655738003");
      Instrmt_30.add_attribute("SecTyp", "CDS"); // 2
      Instrmt_30_set.insert("CDS");
      Instrmt_30.add_attribute("SubTyp", "SecuritySubType_t_1142356289"); // 2
      Instrmt_30_set.insert("SecuritySubType_t_1142356289");
      Instrmt_30.add_attribute("MMY", "1383481411"); // 2
      Instrmt_30_set.insert("1383481411");
      Instrmt_30.add_attribute("MatDt", "MaturityDate_t_528244826"); // 2
      Instrmt_30_set.insert("MaturityDate_t_528244826");
      Instrmt_30.add_attribute("MatTm", "468376514"); // 2
      Instrmt_30_set.insert("468376514");
      Instrmt_30.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_405902975"); // 2
      Instrmt_30_set.insert("SettleOnOpenFlag_t_405902975");
      Instrmt_30.add_attribute("AsgnMeth", "1085563028"); // 2
      Instrmt_30_set.insert("1085563028");
      Instrmt_30.add_attribute("Status", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("CpnPmt", "CouponPaymentDate_t_796342480"); // 2
      Instrmt_30_set.insert("CouponPaymentDate_t_796342480");
      Instrmt_30.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_30_set.insert("MR");
      Instrmt_30.add_attribute("Snrty", "SD"); // 2
      Instrmt_30_set.insert("SD");
      Instrmt_30.add_attribute("NotlPctOut", "11496457.760000"); // 2
      Instrmt_30_set.insert("11496457.760000");
      Instrmt_30.add_attribute("OrigNotlPctOut", "7305231.220000"); // 2
      Instrmt_30_set.insert("7305231.220000");
      Instrmt_30.add_attribute("AttchPnt", "7686510.480000"); // 2
      Instrmt_30_set.insert("7686510.480000");
      Instrmt_30.add_attribute("DetchPnt", "18313921.720000"); // 2
      Instrmt_30_set.insert("18313921.720000");
      Instrmt_30.add_attribute("Issued", "IssueDate_t_2056150863"); // 2
      Instrmt_30_set.insert("IssueDate_t_2056150863");
      Instrmt_30.add_attribute("RepoCollSecTyp", "1895339000"); // 2
      Instrmt_30_set.insert("1895339000");
      Instrmt_30.add_attribute("RepoTrm", "85685952"); // 2
      Instrmt_30_set.insert("85685952");
      Instrmt_30.add_attribute("RepoRt", "11013614.080000"); // 2
      Instrmt_30_set.insert("11013614.080000");
      Instrmt_30.add_attribute("Fctr", "17849481.250000"); // 2
      Instrmt_30_set.insert("17849481.250000");
      Instrmt_30.add_attribute("CrdRtg", "CreditRating_t_1548245814"); // 2
      Instrmt_30_set.insert("CreditRating_t_1548245814");
      Instrmt_30.add_attribute("Rgstry", "InstrRegistry_t_964962680"); // 2
      Instrmt_30_set.insert("InstrRegistry_t_964962680");
      Instrmt_30.add_attribute("IssuCtry", "1744294550"); // 2
      Instrmt_30_set.insert("1744294550");
      Instrmt_30.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1362321514"); // 2
      Instrmt_30_set.insert("StateOrProvinceOfIssue_t_1362321514");
      Instrmt_30.add_attribute("Lcl", "LocaleOfIssue_t_173740352"); // 2
      Instrmt_30_set.insert("LocaleOfIssue_t_173740352");
      Instrmt_30.add_attribute("Redeem", "RedemptionDate_t_1483289087"); // 2
      Instrmt_30_set.insert("RedemptionDate_t_1483289087");
      Instrmt_30.add_attribute("StrkPx", "636916.500000"); // 2
      Instrmt_30_set.insert("636916.500000");
      Instrmt_30.add_attribute("StrkCcy", "CAN"); // 2
      Instrmt_30_set.insert("CAN");
      Instrmt_30.add_attribute("StrkMult", "5765932.740000"); // 2
      Instrmt_30_set.insert("5765932.740000");
      Instrmt_30.add_attribute("StrkValu", "19950089.730000"); // 2
      Instrmt_30_set.insert("19950089.730000");
      Instrmt_30.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_30_set.insert("4");
      Instrmt_30.add_attribute("StrkPxBndryPrcsn", "12310067.360000"); // 2
      Instrmt_30_set.insert("12310067.360000");
      Instrmt_30.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_30_set.insert("4");
      Instrmt_30.add_attribute("OptAt", "39842429"); // 2
      Instrmt_30_set.insert("39842429");
      Instrmt_30.add_attribute("Mult", "16369097.120000"); // 2
      Instrmt_30_set.insert("16369097.120000");
      Instrmt_30.add_attribute("MultTyp", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("MinPxIncr", "2857685.440000"); // 2
      Instrmt_30_set.insert("2857685.440000");
      Instrmt_30.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1363747752"); // 2
      Instrmt_30_set.insert("MinPriceIncrementAmount_t_1363747752");
      Instrmt_30.add_attribute("UOM", "MMbbl"); // 2
      Instrmt_30_set.insert("MMbbl");
      Instrmt_30.add_attribute("UOMQty", "14354143.200000"); // 2
      Instrmt_30_set.insert("14354143.200000");
      Instrmt_30.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_30_set.insert("lbs");
      Instrmt_30.add_attribute("PxUOMQty", "6183497.100000"); // 2
      Instrmt_30_set.insert("6183497.100000");
      Instrmt_30.add_attribute("SettlMeth", "C"); // 2
      Instrmt_30_set.insert("C");
      Instrmt_30.add_attribute("ExerStyle", "0"); // 2
      Instrmt_30_set.insert("0");
      Instrmt_30.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("OptPayAmt", "OptPayoutAmount_t_1205008796"); // 2
      Instrmt_30_set.insert("OptPayoutAmount_t_1205008796");
      Instrmt_30.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_30_set.insert("INT");
      Instrmt_30.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_30_set.insert("CDSD");
      Instrmt_30.add_attribute("ListMeth", "0"); // 2
      Instrmt_30_set.insert("0");
      Instrmt_30.add_attribute("CapPx", "19217785.310000"); // 2
      Instrmt_30_set.insert("19217785.310000");
      Instrmt_30.add_attribute("FlrPx", "17479640.890000"); // 2
      Instrmt_30_set.insert("17479640.890000");
      Instrmt_30.add_attribute("PutCall", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("FlexInd", "false"); // 2
      Instrmt_30_set.insert("false");
      Instrmt_30.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_30_set.insert("true");
      Instrmt_30.add_attribute("TmUnit", "H"); // 2
      Instrmt_30_set.insert("H");
      Instrmt_30.add_attribute("CpnRt", "12873062.040000"); // 2
      Instrmt_30_set.insert("12873062.040000");
      Instrmt_30.add_attribute("Exch", "SecurityExchange_t_1660928548"); // 2
      Instrmt_30_set.insert("SecurityExchange_t_1660928548");
      Instrmt_30.add_attribute("PosLmt", "460893753"); // 2
      Instrmt_30_set.insert("460893753");
      Instrmt_30.add_attribute("NTPosLmt", "1134831529"); // 2
      Instrmt_30_set.insert("1134831529");
      Instrmt_30.add_attribute("Issr", "Issuer_t_1768456645"); // 2
      Instrmt_30_set.insert("Issuer_t_1768456645");
      Instrmt_30.add_attribute("EncIssrLen", "32359668"); // 2
      Instrmt_30_set.insert("32359668");
      Instrmt_30.add_attribute("EncIssr", "EncodedIssuer_t_218354618"); // 2
      Instrmt_30_set.insert("EncodedIssuer_t_218354618");
      Instrmt_30.add_attribute("Desc", "SecurityDesc_t_256745920"); // 2
      Instrmt_30_set.insert("SecurityDesc_t_256745920");
      Instrmt_30.add_attribute("EncSecDescLen", "72202098"); // 2
      Instrmt_30_set.insert("72202098");
      Instrmt_30.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1855264330"); // 2
      Instrmt_30_set.insert("EncodedSecurityDesc_t_1855264330");
      Instrmt_30.add_attribute("Pool", "Pool_t_1978081871"); // 2
      Instrmt_30_set.insert("Pool_t_1978081871");
      Instrmt_30.add_attribute("CSetMo", "1914024275"); // 2
      Instrmt_30_set.insert("1914024275");
      Instrmt_30.add_attribute("CPPgm", "99"); // 2
      Instrmt_30_set.insert("99");
      Instrmt_30.add_attribute("CPRegT", "CPRegType_t_1194345975"); // 2
      Instrmt_30_set.insert("CPRegType_t_1194345975");
      Instrmt_30.add_attribute("Dated", "DatedDate_t_1763722937"); // 2
      Instrmt_30_set.insert("DatedDate_t_1763722937");
      Instrmt_30.add_attribute("IntAcrl", "InterestAccrualDate_t_1428963546"); // 2
      Instrmt_30_set.insert("InterestAccrualDate_t_1428963546");
      all_values.push_back(Instrmt_30_set);
      all_compo_names.insert("Instrmt_30_set");

      {
        xml_element AID_33{"AID"};
        multiset<string> AID_33_set;
        AID_33.add_attribute("AltID", "SecurityAltID_t_1141133202"); // 3
        AID_33_set.insert("SecurityAltID_t_1141133202");
        AID_33.add_attribute("AltIDSrc", "8"); // 3
        AID_33_set.insert("8");
        all_values.push_back(AID_33_set);
        all_compo_names.insert("AID_33_set");

        Instrmt_30.add_element(AID_33);
      }
      {
        xml_element SecXML_33{"SecXML"};
        multiset<string> SecXML_33_set;
        SecXML_33.add_attribute("Schema", "SecurityXMLSchema_t_400802742"); // 3
        SecXML_33_set.insert("SecurityXMLSchema_t_400802742");
        all_values.push_back(SecXML_33_set);
        all_compo_names.insert("SecXML_33_set");

        Instrmt_30.add_element(SecXML_33);
      }
      {
        xml_element Evnt_33{"Evnt"};
        multiset<string> Evnt_33_set;
        Evnt_33.add_attribute("EventTyp", "99"); // 3
        Evnt_33_set.insert("99");
        Evnt_33.add_attribute("Dt", "EventDate_t_600794061"); // 3
        Evnt_33_set.insert("EventDate_t_600794061");
        Evnt_33.add_attribute("Tm", "EventTime_t_1605811538"); // 3
        Evnt_33_set.insert("EventTime_t_1605811538");
        Evnt_33.add_attribute("Px", "19534034.940000"); // 3
        Evnt_33_set.insert("19534034.940000");
        Evnt_33.add_attribute("Txt", "EventText_t_604463600"); // 3
        Evnt_33_set.insert("EventText_t_604463600");
        all_values.push_back(Evnt_33_set);
        all_compo_names.insert("Evnt_33_set");

        Instrmt_30.add_element(Evnt_33);
      }
      {
        xml_element Pty_181{"Pty"};
        multiset<string> Pty_181_set;
        Pty_181.add_attribute("ID", "InstrumentPartyID_t_64098852"); // 3
        Pty_181_set.insert("InstrumentPartyID_t_64098852");
        Pty_181.add_attribute("Src", "4"); // 3
        Pty_181_set.insert("4");
        Pty_181.add_attribute("R", "10"); // 3
        Pty_181_set.insert("10");
        all_values.push_back(Pty_181_set);
        all_compo_names.insert("Pty_181_set");

        {
          xml_element Sub_181{"Sub"};
          multiset<string> Sub_181_set;
          Sub_181.add_attribute("ID", "InstrumentPartySubID_t_2032191329"); // 4
          Sub_181_set.insert("InstrumentPartySubID_t_2032191329");
          Sub_181.add_attribute("Typ", "22"); // 4
          Sub_181_set.insert("22");
          all_values.push_back(Sub_181_set);
          all_compo_names.insert("Sub_181_set");

          Pty_181.add_element(Sub_181);
        }
        Instrmt_30.add_element(Pty_181);
      }
      {
        xml_element CmplxEvnt_30{"CmplxEvnt"};
        multiset<string> CmplxEvnt_30_set;
        CmplxEvnt_30.add_attribute("Typ", "6"); // 3
        CmplxEvnt_30_set.insert("6");
        CmplxEvnt_30.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1916491808"); // 3
        CmplxEvnt_30_set.insert("ComplexOptPayoutAmount_t_1916491808");
        CmplxEvnt_30.add_attribute("Px", "8155561.690000"); // 3
        CmplxEvnt_30_set.insert("8155561.690000");
        CmplxEvnt_30.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_30_set.insert("5");
        CmplxEvnt_30.add_attribute("PxBndryPrcsn", "2299019.130000"); // 3
        CmplxEvnt_30_set.insert("2299019.130000");
        CmplxEvnt_30.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_30_set.insert("3");
        CmplxEvnt_30.add_attribute("Cond", "1"); // 3
        CmplxEvnt_30_set.insert("1");
        all_values.push_back(CmplxEvnt_30_set);
        all_compo_names.insert("CmplxEvnt_30_set");

        {
          xml_element EvntDts_30{"EvntDts"};
          multiset<string> EvntDts_30_set;
          EvntDts_30.add_attribute("StartDt", "ComplexEventStartDate_t_262261582"); // 4
          EvntDts_30_set.insert("ComplexEventStartDate_t_262261582");
          EvntDts_30.add_attribute("EndDt", "ComplexEventEndDate_t_21258668"); // 4
          EvntDts_30_set.insert("ComplexEventEndDate_t_21258668");
          all_values.push_back(EvntDts_30_set);
          all_compo_names.insert("EvntDts_30_set");

          {
            xml_element EvntTms_30{"EvntTms"};
            multiset<string> EvntTms_30_set;
            EvntTms_30.add_attribute("StartTm", "679877386"); // 5
            EvntTms_30_set.insert("679877386");
            EvntTms_30.add_attribute("EndTm", "334463680"); // 5
            EvntTms_30_set.insert("334463680");
            all_values.push_back(EvntTms_30_set);
            all_compo_names.insert("EvntTms_30_set");

            EvntDts_30.add_element(EvntTms_30);
          }
          CmplxEvnt_30.add_element(EvntDts_30);
        }
        Instrmt_30.add_element(CmplxEvnt_30);
      }
      Inc_0.add_element(Instrmt_30);
    }
    {
      xml_element Undly_43{"Undly"};
      multiset<string> Undly_43_set;
      Undly_43.add_attribute("Sym", "UnderlyingSymbol_t_1876522998"); // 2
      Undly_43_set.insert("UnderlyingSymbol_t_1876522998");
      Undly_43.add_attribute("Sfx", "WI"); // 2
      Undly_43_set.insert("WI");
      Undly_43.add_attribute("ID", "UnderlyingSecurityID_t_101004307"); // 2
      Undly_43_set.insert("UnderlyingSecurityID_t_101004307");
      Undly_43.add_attribute("Src", "K"); // 2
      Undly_43_set.insert("K");
      Undly_43.add_attribute("Prod", "9"); // 2
      Undly_43_set.insert("9");
      Undly_43.add_attribute("CFI", "UnderlyingCFICode_t_1864727244"); // 2
      Undly_43_set.insert("UnderlyingCFICode_t_1864727244");
      Undly_43.add_attribute("SecTyp", "GO"); // 2
      Undly_43_set.insert("GO");
      Undly_43.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_698471139"); // 2
      Undly_43_set.insert("UnderlyingSecuritySubType_t_698471139");
      Undly_43.add_attribute("MMY", "2099316243"); // 2
      Undly_43_set.insert("2099316243");
      Undly_43.add_attribute("Mat", "UnderlyingMaturityDate_t_1552354864"); // 2
      Undly_43_set.insert("UnderlyingMaturityDate_t_1552354864");
      Undly_43.add_attribute("MatTm", "1695058783"); // 2
      Undly_43_set.insert("1695058783");
      Undly_43.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_552626656"); // 2
      Undly_43_set.insert("UnderlyingCouponPaymentDate_t_552626656");
      Undly_43.add_attribute("RestrctTyp", "MM"); // 2
      Undly_43_set.insert("MM");
      Undly_43.add_attribute("Snrty", "SB"); // 2
      Undly_43_set.insert("SB");
      Undly_43.add_attribute("NotlPctOut", "11570902.560000"); // 2
      Undly_43_set.insert("11570902.560000");
      Undly_43.add_attribute("OrigNotlPctOut", "10747816.070000"); // 2
      Undly_43_set.insert("10747816.070000");
      Undly_43.add_attribute("AttchPnt", "10811933.590000"); // 2
      Undly_43_set.insert("10811933.590000");
      Undly_43.add_attribute("DetchPnt", "13620342.970000"); // 2
      Undly_43_set.insert("13620342.970000");
      Undly_43.add_attribute("Issued", "UnderlyingIssueDate_t_959489288"); // 2
      Undly_43_set.insert("UnderlyingIssueDate_t_959489288");
      Undly_43.add_attribute("RepoCollSecTyp", "609443323"); // 2
      Undly_43_set.insert("609443323");
      Undly_43.add_attribute("RepoTrm", "503264218"); // 2
      Undly_43_set.insert("503264218");
      Undly_43.add_attribute("RepoRt", "7284974.490000"); // 2
      Undly_43_set.insert("7284974.490000");
      Undly_43.add_attribute("Fctr", "14249994.920000"); // 2
      Undly_43_set.insert("14249994.920000");
      Undly_43.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1305422688"); // 2
      Undly_43_set.insert("UnderlyingCreditRating_t_1305422688");
      Undly_43.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_958399362"); // 2
      Undly_43_set.insert("UnderlyingInstrRegistry_t_958399362");
      Undly_43.add_attribute("Ctry", "1227903543"); // 2
      Undly_43_set.insert("1227903543");
      Undly_43.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1728554154"); // 2
      Undly_43_set.insert("UnderlyingStateOrProvinceOfIssue_t_1728554154");
      Undly_43.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1220660944"); // 2
      Undly_43_set.insert("UnderlyingLocaleOfIssue_t_1220660944");
      Undly_43.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1249162211"); // 2
      Undly_43_set.insert("UnderlyingRedemptionDate_t_1249162211");
      Undly_43.add_attribute("StrkPx", "2609478.930000"); // 2
      Undly_43_set.insert("2609478.930000");
      Undly_43.add_attribute("StrkCcy", "JPY"); // 2
      Undly_43_set.insert("JPY");
      Undly_43.add_attribute("OptA", "771423502"); // 2
      Undly_43_set.insert("771423502");
      Undly_43.add_attribute("Mult", "16561289.310000"); // 2
      Undly_43_set.insert("16561289.310000");
      Undly_43.add_attribute("MultTyp", "2"); // 2
      Undly_43_set.insert("2");
      Undly_43.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_43_set.insert("4");
      Undly_43.add_attribute("UOM", "lbs"); // 2
      Undly_43_set.insert("lbs");
      Undly_43.add_attribute("UOMQty", "18523422.610000"); // 2
      Undly_43_set.insert("18523422.610000");
      Undly_43.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_43_set.insert("oz_tr");
      Undly_43.add_attribute("PxUOMQty", "13252051.220000"); // 2
      Undly_43_set.insert("13252051.220000");
      Undly_43.add_attribute("TmUnit", "H"); // 2
      Undly_43_set.insert("H");
      Undly_43.add_attribute("ExerStyle", "0"); // 2
      Undly_43_set.insert("0");
      Undly_43.add_attribute("CpnRt", "18778317.780000"); // 2
      Undly_43_set.insert("18778317.780000");
      Undly_43.add_attribute("Exch", "UnderlyingSecurityExchange_t_120412584"); // 2
      Undly_43_set.insert("UnderlyingSecurityExchange_t_120412584");
      Undly_43.add_attribute("Issr", "UnderlyingIssuer_t_2075786343"); // 2
      Undly_43_set.insert("UnderlyingIssuer_t_2075786343");
      Undly_43.add_attribute("EncUndIssrLen", "887438386"); // 2
      Undly_43_set.insert("887438386");
      Undly_43.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1195194191"); // 2
      Undly_43_set.insert("EncodedUnderlyingIssuer_t_1195194191");
      Undly_43.add_attribute("Desc", "UnderlyingSecurityDesc_t_1009496054"); // 2
      Undly_43_set.insert("UnderlyingSecurityDesc_t_1009496054");
      Undly_43.add_attribute("EncUndSecDescLen", "101989035"); // 2
      Undly_43_set.insert("101989035");
      Undly_43.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_7199831"); // 2
      Undly_43_set.insert("EncodedUnderlyingSecurityDesc_t_7199831");
      Undly_43.add_attribute("CPPgm", "UnderlyingCPProgram_t_1618939377"); // 2
      Undly_43_set.insert("UnderlyingCPProgram_t_1618939377");
      Undly_43.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_605253254"); // 2
      Undly_43_set.insert("UnderlyingCPRegType_t_605253254");
      Undly_43.add_attribute("AllocPct", "7356972.800000"); // 2
      Undly_43_set.insert("7356972.800000");
      Undly_43.add_attribute("Ccy", "GBP"); // 2
      Undly_43_set.insert("GBP");
      Undly_43.add_attribute("Qty", "16940966.430000"); // 2
      Undly_43_set.insert("16940966.430000");
      Undly_43.add_attribute("SettlTyp", "4"); // 2
      Undly_43_set.insert("4");
      Undly_43.add_attribute("CashAmt", "UnderlyingCashAmount_t_1491746448"); // 2
      Undly_43_set.insert("UnderlyingCashAmount_t_1491746448");
      Undly_43.add_attribute("CashTyp", "DIFF"); // 2
      Undly_43_set.insert("DIFF");
      Undly_43.add_attribute("Px", "12260373.280000"); // 2
      Undly_43_set.insert("12260373.280000");
      Undly_43.add_attribute("DirtPx", "17526943.410000"); // 2
      Undly_43_set.insert("17526943.410000");
      Undly_43.add_attribute("EndPx", "1749149.160000"); // 2
      Undly_43_set.insert("1749149.160000");
      Undly_43.add_attribute("StartVal", "UnderlyingStartValue_t_56755242"); // 2
      Undly_43_set.insert("UnderlyingStartValue_t_56755242");
      Undly_43.add_attribute("CurVal", "UnderlyingCurrentValue_t_376634196"); // 2
      Undly_43_set.insert("UnderlyingCurrentValue_t_376634196");
      Undly_43.add_attribute("EndVal", "UnderlyingEndValue_t_1831043847"); // 2
      Undly_43_set.insert("UnderlyingEndValue_t_1831043847");
      Undly_43.add_attribute("AdjQty", "7575453.810000"); // 2
      Undly_43_set.insert("7575453.810000");
      Undly_43.add_attribute("FxRate", "7053956.350000"); // 2
      Undly_43_set.insert("7053956.350000");
      Undly_43.add_attribute("FxRateCalc", "D"); // 2
      Undly_43_set.insert("D");
      Undly_43.add_attribute("CapValu", "UnderlyingCapValue_t_462403994"); // 2
      Undly_43_set.insert("UnderlyingCapValue_t_462403994");
      Undly_43.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1732628214"); // 2
      Undly_43_set.insert("UnderlyingSettlMethod_t_1732628214");
      Undly_43.add_attribute("PutCall", "234654201"); // 2
      Undly_43_set.insert("234654201");
      all_values.push_back(Undly_43_set);
      all_compo_names.insert("Undly_43_set");

      {
        xml_element UndAID_43{"UndAID"};
        multiset<string> UndAID_43_set;
        UndAID_43.add_attribute("AltID", "UnderlyingSecurityAltID_t_1719617471"); // 3
        UndAID_43_set.insert("UnderlyingSecurityAltID_t_1719617471");
        UndAID_43.add_attribute("AltIDSrc", "4"); // 3
        UndAID_43_set.insert("4");
        all_values.push_back(UndAID_43_set);
        all_compo_names.insert("UndAID_43_set");

        Undly_43.add_element(UndAID_43);
      }
      {
        xml_element Stip_67{"Stip"};
        multiset<string> Stip_67_set;
        Stip_67.add_attribute("Typ", "AVFICO"); // 3
        Stip_67_set.insert("AVFICO");
        Stip_67.add_attribute("Val", "UnderlyingStipValue_t_1840030055"); // 3
        Stip_67_set.insert("UnderlyingStipValue_t_1840030055");
        all_values.push_back(Stip_67_set);
        all_compo_names.insert("Stip_67_set");

        Undly_43.add_element(Stip_67);
      }
      {
        xml_element Pty_182{"Pty"};
        multiset<string> Pty_182_set;
        Pty_182.add_attribute("ID", "UnderlyingInstrumentPartyID_t_88254974"); // 3
        Pty_182_set.insert("UnderlyingInstrumentPartyID_t_88254974");
        Pty_182.add_attribute("Src", "D"); // 3
        Pty_182_set.insert("D");
        Pty_182.add_attribute("R", "41"); // 3
        Pty_182_set.insert("41");
        all_values.push_back(Pty_182_set);
        all_compo_names.insert("Pty_182_set");

        {
          xml_element Sub_182{"Sub"};
          multiset<string> Sub_182_set;
          Sub_182.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1097751028"); // 4
          Sub_182_set.insert("UnderlyingInstrumentPartySubID_t_1097751028");
          Sub_182.add_attribute("Typ", "9"); // 4
          Sub_182_set.insert("9");
          all_values.push_back(Sub_182_set);
          all_compo_names.insert("Sub_182_set");

          Pty_182.add_element(Sub_182);
        }
        Undly_43.add_element(Pty_182);
      }
      Inc_0.add_element(Undly_43);
    }
    {
      xml_element Leg_41{"Leg"};
      multiset<string> Leg_41_set;
      Leg_41.add_attribute("Sym", "LegSymbol_t_894940430"); // 2
      Leg_41_set.insert("LegSymbol_t_894940430");
      Leg_41.add_attribute("Sfx", "CD"); // 2
      Leg_41_set.insert("CD");
      Leg_41.add_attribute("ID", "LegSecurityID_t_1559683008"); // 2
      Leg_41_set.insert("LegSecurityID_t_1559683008");
      Leg_41.add_attribute("Src", "K"); // 2
      Leg_41_set.insert("K");
      Leg_41.add_attribute("Prod", "12"); // 2
      Leg_41_set.insert("12");
      Leg_41.add_attribute("CFI", "LegCFICode_t_1322875302"); // 2
      Leg_41_set.insert("LegCFICode_t_1322875302");
      Leg_41.add_attribute("SecTyp", "CDS"); // 2
      Leg_41_set.insert("CDS");
      Leg_41.add_attribute("SecSubTyp", "LegSecuritySubType_t_1442537097"); // 2
      Leg_41_set.insert("LegSecuritySubType_t_1442537097");
      Leg_41.add_attribute("MMY", "667138102"); // 2
      Leg_41_set.insert("667138102");
      Leg_41.add_attribute("Mat", "LegMaturityDate_t_1944524645"); // 2
      Leg_41_set.insert("LegMaturityDate_t_1944524645");
      Leg_41.add_attribute("MatTm", "521090777"); // 2
      Leg_41_set.insert("521090777");
      Leg_41.add_attribute("CpnPmt", "LegCouponPaymentDate_t_272348796"); // 2
      Leg_41_set.insert("LegCouponPaymentDate_t_272348796");
      Leg_41.add_attribute("Issued", "LegIssueDate_t_2119439561"); // 2
      Leg_41_set.insert("LegIssueDate_t_2119439561");
      Leg_41.add_attribute("RepoCollSecTyp", "577846020"); // 2
      Leg_41_set.insert("577846020");
      Leg_41.add_attribute("RepoTrm", "648982992"); // 2
      Leg_41_set.insert("648982992");
      Leg_41.add_attribute("RepoRt", "18029997.600000"); // 2
      Leg_41_set.insert("18029997.600000");
      Leg_41.add_attribute("Fctr", "13353914.010000"); // 2
      Leg_41_set.insert("13353914.010000");
      Leg_41.add_attribute("CrdRtg", "LegCreditRating_t_1354378627"); // 2
      Leg_41_set.insert("LegCreditRating_t_1354378627");
      Leg_41.add_attribute("Rgstry", "LegInstrRegistry_t_712448839"); // 2
      Leg_41_set.insert("LegInstrRegistry_t_712448839");
      Leg_41.add_attribute("Ctry", "1797795395"); // 2
      Leg_41_set.insert("1797795395");
      Leg_41.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_939523193"); // 2
      Leg_41_set.insert("LegStateOrProvinceOfIssue_t_939523193");
      Leg_41.add_attribute("Lcl", "LegLocaleOfIssue_t_947103041"); // 2
      Leg_41_set.insert("LegLocaleOfIssue_t_947103041");
      Leg_41.add_attribute("Redeem", "LegRedemptionDate_t_1369929218"); // 2
      Leg_41_set.insert("LegRedemptionDate_t_1369929218");
      Leg_41.add_attribute("Strk", "10994754.730000"); // 2
      Leg_41_set.insert("10994754.730000");
      Leg_41.add_attribute("StrkCcy", "USD"); // 2
      Leg_41_set.insert("USD");
      Leg_41.add_attribute("OptA", "1187730447"); // 2
      Leg_41_set.insert("1187730447");
      Leg_41.add_attribute("Cmult", "17645460.910000"); // 2
      Leg_41_set.insert("17645460.910000");
      Leg_41.add_attribute("MultTyp", "2"); // 2
      Leg_41_set.insert("2");
      Leg_41.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_41_set.insert("3");
      Leg_41.add_attribute("UOM", "Gal"); // 2
      Leg_41_set.insert("Gal");
      Leg_41.add_attribute("UOMQty", "6976730.060000"); // 2
      Leg_41_set.insert("6976730.060000");
      Leg_41.add_attribute("PxUOM", "Bcf"); // 2
      Leg_41_set.insert("Bcf");
      Leg_41.add_attribute("PxUOMQty", "21311752.050000"); // 2
      Leg_41_set.insert("21311752.050000");
      Leg_41.add_attribute("TmUnit", "D"); // 2
      Leg_41_set.insert("D");
      Leg_41.add_attribute("ExerStyle", "2"); // 2
      Leg_41_set.insert("2");
      Leg_41.add_attribute("CpnRt", "13065668.590000"); // 2
      Leg_41_set.insert("13065668.590000");
      Leg_41.add_attribute("Exch", "LegSecurityExchange_t_1358077774"); // 2
      Leg_41_set.insert("LegSecurityExchange_t_1358077774");
      Leg_41.add_attribute("Issr", "LegIssuer_t_1467920015"); // 2
      Leg_41_set.insert("LegIssuer_t_1467920015");
      Leg_41.add_attribute("EncLegIssrLen", "1973704962"); // 2
      Leg_41_set.insert("1973704962");
      Leg_41.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1155118771"); // 2
      Leg_41_set.insert("EncodedLegIssuer_t_1155118771");
      Leg_41.add_attribute("Desc", "LegSecurityDesc_t_1989010792"); // 2
      Leg_41_set.insert("LegSecurityDesc_t_1989010792");
      Leg_41.add_attribute("EncLegSecDescLen", "98570110"); // 2
      Leg_41_set.insert("98570110");
      Leg_41.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1127074684"); // 2
      Leg_41_set.insert("EncodedLegSecurityDesc_t_1127074684");
      Leg_41.add_attribute("RatioQty", "4193731.640000"); // 2
      Leg_41_set.insert("4193731.640000");
      Leg_41.add_attribute("Side", "F"); // 2
      Leg_41_set.insert("F");
      Leg_41.add_attribute("Ccy", "CAN"); // 2
      Leg_41_set.insert("CAN");
      Leg_41.add_attribute("Pool", "LegPool_t_2101931729"); // 2
      Leg_41_set.insert("LegPool_t_2101931729");
      Leg_41.add_attribute("Dated", "LegDatedDate_t_1495039636"); // 2
      Leg_41_set.insert("LegDatedDate_t_1495039636");
      Leg_41.add_attribute("CSetMo", "1405076312"); // 2
      Leg_41_set.insert("1405076312");
      Leg_41.add_attribute("IntAcrl", "LegInterestAccrualDate_t_893971275"); // 2
      Leg_41_set.insert("LegInterestAccrualDate_t_893971275");
      Leg_41.add_attribute("PutCall", "294659029"); // 2
      Leg_41_set.insert("294659029");
      Leg_41.add_attribute("LegOptionRatio", "6275218.830000"); // 2
      Leg_41_set.insert("6275218.830000");
      Leg_41.add_attribute("Px", "19934467.480000"); // 2
      Leg_41_set.insert("19934467.480000");
      all_values.push_back(Leg_41_set);
      all_compo_names.insert("Leg_41_set");

      {
        xml_element LegAID_41{"LegAID"};
        multiset<string> LegAID_41_set;
        LegAID_41.add_attribute("SecAltID", "LegSecurityAltID_t_1206764402"); // 3
        LegAID_41_set.insert("LegSecurityAltID_t_1206764402");
        LegAID_41.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_41_set.insert("E");
        all_values.push_back(LegAID_41_set);
        all_compo_names.insert("LegAID_41_set");

        Leg_41.add_element(LegAID_41);
      }
      Inc_0.add_element(Leg_41);
    }
    {
      xml_element Yield_7{"Yield"};
      multiset<string> Yield_7_set;
      Yield_7.add_attribute("Typ", "INVERSEFLOATER"); // 2
      Yield_7_set.insert("INVERSEFLOATER");
      Yield_7.add_attribute("Yld", "8238268.460000"); // 2
      Yield_7_set.insert("8238268.460000");
      Yield_7.add_attribute("CalcDt", "YieldCalcDate_t_1492730085"); // 2
      Yield_7_set.insert("YieldCalcDate_t_1492730085");
      Yield_7.add_attribute("RedDt", "YieldRedemptionDate_t_1171691375"); // 2
      Yield_7_set.insert("YieldRedemptionDate_t_1171691375");
      Yield_7.add_attribute("RedPx", "13953190.430000"); // 2
      Yield_7_set.insert("13953190.430000");
      Yield_7.add_attribute("RedPxTyp", "9"); // 2
      Yield_7_set.insert("9");
      all_values.push_back(Yield_7_set);
      all_compo_names.insert("Yield_7_set");

      Inc_0.add_element(Yield_7);
    }
    {
      xml_element SprdBnchmkCurve_12{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_12_set;
      SprdBnchmkCurve_12.add_attribute("Spread", "18788959.610000"); // 2
      SprdBnchmkCurve_12_set.insert("18788959.610000");
      SprdBnchmkCurve_12.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_12_set.insert("CHF");
      SprdBnchmkCurve_12.add_attribute("Name", "OTHER"); // 2
      SprdBnchmkCurve_12_set.insert("OTHER");
      SprdBnchmkCurve_12.add_attribute("Point", "BenchmarkCurvePoint_t_538093812"); // 2
      SprdBnchmkCurve_12_set.insert("BenchmarkCurvePoint_t_538093812");
      SprdBnchmkCurve_12.add_attribute("Px", "15818242.870000"); // 2
      SprdBnchmkCurve_12_set.insert("15818242.870000");
      SprdBnchmkCurve_12.add_attribute("PxTyp", "18"); // 2
      SprdBnchmkCurve_12_set.insert("18");
      SprdBnchmkCurve_12.add_attribute("SecID", "BenchmarkSecurityID_t_364315126"); // 2
      SprdBnchmkCurve_12_set.insert("BenchmarkSecurityID_t_364315126");
      SprdBnchmkCurve_12.add_attribute("SecIDSrc", "E"); // 2
      SprdBnchmkCurve_12_set.insert("E");
      all_values.push_back(SprdBnchmkCurve_12_set);
      all_compo_names.insert("SprdBnchmkCurve_12_set");

      Inc_0.add_element(SprdBnchmkCurve_12);
    }
    {
      xml_element RtSrc_7{"RtSrc"};
      multiset<string> RtSrc_7_set;
      RtSrc_7.add_attribute("RtSrc", "99"); // 2
      RtSrc_7_set.insert("99");
      RtSrc_7.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_7_set.insert("0");
      RtSrc_7.add_attribute("RefPg", "ReferencePage_t_1716534095"); // 2
      RtSrc_7_set.insert("ReferencePage_t_1716534095");
      all_values.push_back(RtSrc_7_set);
      all_compo_names.insert("RtSrc_7_set");

      Inc_0.add_element(RtSrc_7);
    }
    {
      xml_element SecSizesGrp_0{"SecSizesGrp"};
      multiset<string> SecSizesGrp_0_set;
      SecSizesGrp_0.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_0_set.insert("1");
      SecSizesGrp_0.add_attribute("MDSecSize", "12104383.380000"); // 2
      SecSizesGrp_0_set.insert("12104383.380000");
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
      xml_element Pty_183{"Pty"};
      multiset<string> Pty_183_set;
      Pty_183.add_attribute("ID", "PartyID_t_1092896473"); // 2
      Pty_183_set.insert("PartyID_t_1092896473");
      Pty_183.add_attribute("Src", "5"); // 2
      Pty_183_set.insert("5");
      Pty_183.add_attribute("R", "26"); // 2
      Pty_183_set.insert("26");
      all_values.push_back(Pty_183_set);
      all_compo_names.insert("Pty_183_set");

      {
        xml_element Sub_183{"Sub"};
        multiset<string> Sub_183_set;
        Sub_183.add_attribute("ID", "PartySubID_t_350489137"); // 3
        Sub_183_set.insert("PartySubID_t_350489137");
        Sub_183.add_attribute("Typ", "13"); // 3
        Sub_183_set.insert("13");
        all_values.push_back(Sub_183_set);
        all_compo_names.insert("Sub_183_set");

        Pty_183.add_element(Sub_183);
      }
      Inc_0.add_element(Pty_183);
    }
    elt.add_element(Inc_0);
  } // end Inc
  { // Inc
    xml_element Inc_1{"Inc"};
    multiset<string> Inc_1_set;
    Inc_1.add_attribute("UpdtAct", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("DelRsn", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("MDSubBkTyp", "1904820795"); // 1
    Inc_1_set.insert("1904820795");
    Inc_1.add_attribute("MktDepth", "1200620665"); // 1
    Inc_1_set.insert("1200620665");
    Inc_1.add_attribute("Typ", "H"); // 1
    Inc_1_set.insert("H");
    Inc_1.add_attribute("ID", "MDEntryID_t_791030694"); // 1
    Inc_1_set.insert("MDEntryID_t_791030694");
    Inc_1.add_attribute("RefID", "MDEntryRefID_t_2024447511"); // 1
    Inc_1_set.insert("MDEntryRefID_t_2024447511");
    Inc_1.add_attribute("MDStrmID", "MDStreamID_t_2013254967"); // 1
    Inc_1_set.insert("MDStreamID_t_2013254967");
    Inc_1.add_attribute("FinclStat", "1"); // 1
    Inc_1_set.insert("1");
    Inc_1.add_attribute("CorpActn", "C"); // 1
    Inc_1_set.insert("C");
    Inc_1.add_attribute("Px", "20561744.110000"); // 1
    Inc_1_set.insert("20561744.110000");
    Inc_1.add_attribute("PxTyp", "17"); // 1
    Inc_1_set.insert("17");
    Inc_1.add_attribute("OrdTyp", "C"); // 1
    Inc_1_set.insert("C");
    Inc_1.add_attribute("Ccy", "CHF"); // 1
    Inc_1_set.insert("CHF");
    Inc_1.add_attribute("SettlCcy", "CHF"); // 1
    Inc_1_set.insert("CHF");
    Inc_1.add_attribute("Sz", "5281612.130000"); // 1
    Inc_1_set.insert("5281612.130000");
    Inc_1.add_attribute("LotTyp", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("Dt", "156237326"); // 1
    Inc_1_set.insert("156237326");
    Inc_1.add_attribute("Tm", "1594403604"); // 1
    Inc_1_set.insert("1594403604");
    Inc_1.add_attribute("TickDirctn", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("Mkt", "MDMkt_t_1872771422"); // 1
    Inc_1_set.insert("MDMkt_t_1872771422");
    Inc_1.add_attribute("SesID", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("SesSub", "4"); // 1
    Inc_1_set.insert("4");
    Inc_1.add_attribute("TrdgStat", "19"); // 1
    Inc_1_set.insert("19");
    Inc_1.add_attribute("HaltRsn", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("QCond", "t"); // 1
    Inc_1_set.insert("t");
    Inc_1.add_attribute("TrdCond", "AF"); // 1
    Inc_1_set.insert("AF");
    Inc_1.add_attribute("TrdTyp", "35"); // 1
    Inc_1_set.insert("35");
    Inc_1.add_attribute("MtchTyp", "5"); // 1
    Inc_1_set.insert("5");
    Inc_1.add_attribute("Orig", "MDEntryOriginator_t_1917466162"); // 1
    Inc_1_set.insert("MDEntryOriginator_t_1917466162");
    Inc_1.add_attribute("LctnID", "LocationID_t_1206448495"); // 1
    Inc_1_set.insert("LocationID_t_1206448495");
    Inc_1.add_attribute("DeskID", "DeskID_t_1765656339"); // 1
    Inc_1_set.insert("DeskID_t_1765656339");
    Inc_1.add_attribute("OpenClsSettlFlag", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("TmInForce", "6"); // 1
    Inc_1_set.insert("6");
    Inc_1.add_attribute("ExpireDt", "ExpireDate_t_409203386"); // 1
    Inc_1_set.insert("ExpireDate_t_409203386");
    Inc_1.add_attribute("ExpireTm", "ExpireTime_t_847567042"); // 1
    Inc_1_set.insert("ExpireTime_t_847567042");
    Inc_1.add_attribute("MinQty", "15927446.950000"); // 1
    Inc_1_set.insert("15927446.950000");
    Inc_1.add_attribute("ExecInst", "J"); // 1
    Inc_1_set.insert("J");
    Inc_1.add_attribute("SellerDays", "2119849948"); // 1
    Inc_1_set.insert("2119849948");
    Inc_1.add_attribute("OrdID", "OrderID_t_1501435458"); // 1
    Inc_1_set.insert("OrderID_t_1501435458");
    Inc_1.add_attribute("OrdID2", "SecondaryOrderID_t_1918576191"); // 1
    Inc_1_set.insert("SecondaryOrderID_t_1918576191");
    Inc_1.add_attribute("EntryID", "QuoteEntryID_t_476176160"); // 1
    Inc_1_set.insert("QuoteEntryID_t_476176160");
    Inc_1.add_attribute("TrdID", "TradeID_t_1633872734"); // 1
    Inc_1_set.insert("TradeID_t_1633872734");
    Inc_1.add_attribute("Buyer", "MDEntryBuyer_t_1222022158"); // 1
    Inc_1_set.insert("MDEntryBuyer_t_1222022158");
    Inc_1.add_attribute("Seller", "MDEntrySeller_t_1518079832"); // 1
    Inc_1_set.insert("MDEntrySeller_t_1518079832");
    Inc_1.add_attribute("NumOfOrds", "1200650650"); // 1
    Inc_1_set.insert("1200650650");
    Inc_1.add_attribute("PosNo", "1750183372"); // 1
    Inc_1_set.insert("1750183372");
    Inc_1.add_attribute("Scope", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("PxDelta", "13568879.760000"); // 1
    Inc_1_set.insert("13568879.760000");
    Inc_1.add_attribute("NetChgPrevDay", "11971033.280000"); // 1
    Inc_1_set.insert("11971033.280000");
    Inc_1.add_attribute("Txt", "Text_t_498435369"); // 1
    Inc_1_set.insert("Text_t_498435369");
    Inc_1.add_attribute("EncTxtLen", "1082175750"); // 1
    Inc_1_set.insert("1082175750");
    Inc_1.add_attribute("EncTxt", "EncodedText_t_2129638840"); // 1
    Inc_1_set.insert("EncodedText_t_2129638840");
    Inc_1.add_attribute("MDPxLvl", "1430494095"); // 1
    Inc_1_set.insert("1430494095");
    Inc_1.add_attribute("Cpcty", "G"); // 1
    Inc_1_set.insert("G");
    Inc_1.add_attribute("MDOrigTyp", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("HighPx", "13799555.920000"); // 1
    Inc_1_set.insert("13799555.920000");
    Inc_1.add_attribute("LowPx", "9352310.200000"); // 1
    Inc_1_set.insert("9352310.200000");
    Inc_1.add_attribute("FirstPx", "885410.040000"); // 1
    Inc_1_set.insert("885410.040000");
    Inc_1.add_attribute("LastPx", "12407911.370000"); // 1
    Inc_1_set.insert("12407911.370000");
    Inc_1.add_attribute("TrdVol", "7052135.340000"); // 1
    Inc_1_set.insert("7052135.340000");
    Inc_1.add_attribute("SettlTyp", "7"); // 1
    Inc_1_set.insert("7");
    Inc_1.add_attribute("SettlDt", "SettlDate_t_858963828"); // 1
    Inc_1_set.insert("SettlDate_t_858963828");
    Inc_1.add_attribute("TransBkdTm", "TransBkdTime_t_1675816713"); // 1
    Inc_1_set.insert("TransBkdTime_t_1675816713");
    Inc_1.add_attribute("TxnTm", "TransactTime_t_874479227"); // 1
    Inc_1_set.insert("TransactTime_t_874479227");
    Inc_1.add_attribute("MDQteTyp", "4"); // 1
    Inc_1_set.insert("4");
    Inc_1.add_attribute("RptSeq", "375900107"); // 1
    Inc_1_set.insert("375900107");
    Inc_1.add_attribute("DealingCpcty", "R"); // 1
    Inc_1_set.insert("R");
    Inc_1.add_attribute("MDEntrySpotRt", "14926090.220000"); // 1
    Inc_1_set.insert("14926090.220000");
    Inc_1.add_attribute("MDEntryFwdPnts", "3482664.080000"); // 1
    Inc_1_set.insert("3482664.080000");
    all_values.push_back(Inc_1_set);
    all_compo_names.insert("Inc_1_set");

    {
      xml_element Instrmt_31{"Instrmt"};
      multiset<string> Instrmt_31_set;
      Instrmt_31.add_attribute("Sym", "Symbol_t_1821175733"); // 2
      Instrmt_31_set.insert("Symbol_t_1821175733");
      Instrmt_31.add_attribute("Sfx", "CD"); // 2
      Instrmt_31_set.insert("CD");
      Instrmt_31.add_attribute("ID", "SecurityID_t_824442568"); // 2
      Instrmt_31_set.insert("SecurityID_t_824442568");
      Instrmt_31.add_attribute("Src", "D"); // 2
      Instrmt_31_set.insert("D");
      Instrmt_31.add_attribute("Prod", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("ProdCmplx", "ProductComplex_t_195038752"); // 2
      Instrmt_31_set.insert("ProductComplex_t_195038752");
      Instrmt_31.add_attribute("SecGrp", "SecurityGroup_t_360731822"); // 2
      Instrmt_31_set.insert("SecurityGroup_t_360731822");
      Instrmt_31.add_attribute("CFI", "CFICode_t_2088423448"); // 2
      Instrmt_31_set.insert("CFICode_t_2088423448");
      Instrmt_31.add_attribute("SecTyp", "SUPRA"); // 2
      Instrmt_31_set.insert("SUPRA");
      Instrmt_31.add_attribute("SubTyp", "SecuritySubType_t_1717619798"); // 2
      Instrmt_31_set.insert("SecuritySubType_t_1717619798");
      Instrmt_31.add_attribute("MMY", "1138043129"); // 2
      Instrmt_31_set.insert("1138043129");
      Instrmt_31.add_attribute("MatDt", "MaturityDate_t_1470289104"); // 2
      Instrmt_31_set.insert("MaturityDate_t_1470289104");
      Instrmt_31.add_attribute("MatTm", "652311901"); // 2
      Instrmt_31_set.insert("652311901");
      Instrmt_31.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1120198321"); // 2
      Instrmt_31_set.insert("SettleOnOpenFlag_t_1120198321");
      Instrmt_31.add_attribute("AsgnMeth", "753299551"); // 2
      Instrmt_31_set.insert("753299551");
      Instrmt_31.add_attribute("Status", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("CpnPmt", "CouponPaymentDate_t_980301851"); // 2
      Instrmt_31_set.insert("CouponPaymentDate_t_980301851");
      Instrmt_31.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_31_set.insert("XR");
      Instrmt_31.add_attribute("Snrty", "SR"); // 2
      Instrmt_31_set.insert("SR");
      Instrmt_31.add_attribute("NotlPctOut", "10688428.550000"); // 2
      Instrmt_31_set.insert("10688428.550000");
      Instrmt_31.add_attribute("OrigNotlPctOut", "12265626.320000"); // 2
      Instrmt_31_set.insert("12265626.320000");
      Instrmt_31.add_attribute("AttchPnt", "13043775.770000"); // 2
      Instrmt_31_set.insert("13043775.770000");
      Instrmt_31.add_attribute("DetchPnt", "2163487.060000"); // 2
      Instrmt_31_set.insert("2163487.060000");
      Instrmt_31.add_attribute("Issued", "IssueDate_t_2085526461"); // 2
      Instrmt_31_set.insert("IssueDate_t_2085526461");
      Instrmt_31.add_attribute("RepoCollSecTyp", "832710642"); // 2
      Instrmt_31_set.insert("832710642");
      Instrmt_31.add_attribute("RepoTrm", "1090827933"); // 2
      Instrmt_31_set.insert("1090827933");
      Instrmt_31.add_attribute("RepoRt", "12062100.270000"); // 2
      Instrmt_31_set.insert("12062100.270000");
      Instrmt_31.add_attribute("Fctr", "12086107.500000"); // 2
      Instrmt_31_set.insert("12086107.500000");
      Instrmt_31.add_attribute("CrdRtg", "CreditRating_t_1410568208"); // 2
      Instrmt_31_set.insert("CreditRating_t_1410568208");
      Instrmt_31.add_attribute("Rgstry", "InstrRegistry_t_551335402"); // 2
      Instrmt_31_set.insert("InstrRegistry_t_551335402");
      Instrmt_31.add_attribute("IssuCtry", "1556877158"); // 2
      Instrmt_31_set.insert("1556877158");
      Instrmt_31.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1084260294"); // 2
      Instrmt_31_set.insert("StateOrProvinceOfIssue_t_1084260294");
      Instrmt_31.add_attribute("Lcl", "LocaleOfIssue_t_1815036968"); // 2
      Instrmt_31_set.insert("LocaleOfIssue_t_1815036968");
      Instrmt_31.add_attribute("Redeem", "RedemptionDate_t_233836078"); // 2
      Instrmt_31_set.insert("RedemptionDate_t_233836078");
      Instrmt_31.add_attribute("StrkPx", "2443414.660000"); // 2
      Instrmt_31_set.insert("2443414.660000");
      Instrmt_31.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_31_set.insert("GBP");
      Instrmt_31.add_attribute("StrkMult", "6050732.880000"); // 2
      Instrmt_31_set.insert("6050732.880000");
      Instrmt_31.add_attribute("StrkValu", "20942168.450000"); // 2
      Instrmt_31_set.insert("20942168.450000");
      Instrmt_31.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_31_set.insert("4");
      Instrmt_31.add_attribute("StrkPxBndryPrcsn", "10847763.260000"); // 2
      Instrmt_31_set.insert("10847763.260000");
      Instrmt_31.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("OptAt", "827521339"); // 2
      Instrmt_31_set.insert("827521339");
      Instrmt_31.add_attribute("Mult", "574909.990000"); // 2
      Instrmt_31_set.insert("574909.990000");
      Instrmt_31.add_attribute("MultTyp", "0"); // 2
      Instrmt_31_set.insert("0");
      Instrmt_31.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("MinPxIncr", "10377928.500000"); // 2
      Instrmt_31_set.insert("10377928.500000");
      Instrmt_31.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1462605067"); // 2
      Instrmt_31_set.insert("MinPriceIncrementAmount_t_1462605067");
      Instrmt_31.add_attribute("UOM", "tn"); // 2
      Instrmt_31_set.insert("tn");
      Instrmt_31.add_attribute("UOMQty", "21066357.050000"); // 2
      Instrmt_31_set.insert("21066357.050000");
      Instrmt_31.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_31_set.insert("Alw");
      Instrmt_31.add_attribute("PxUOMQty", "2475123.330000"); // 2
      Instrmt_31_set.insert("2475123.330000");
      Instrmt_31.add_attribute("SettlMeth", "P"); // 2
      Instrmt_31_set.insert("P");
      Instrmt_31.add_attribute("ExerStyle", "2"); // 2
      Instrmt_31_set.insert("2");
      Instrmt_31.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("OptPayAmt", "OptPayoutAmount_t_1266328697"); // 2
      Instrmt_31_set.insert("OptPayoutAmount_t_1266328697");
      Instrmt_31.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_31_set.insert("STD");
      Instrmt_31.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_31_set.insert("FUTDA");
      Instrmt_31.add_attribute("ListMeth", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("CapPx", "897886.460000"); // 2
      Instrmt_31_set.insert("897886.460000");
      Instrmt_31.add_attribute("FlrPx", "16982272.350000"); // 2
      Instrmt_31_set.insert("16982272.350000");
      Instrmt_31.add_attribute("PutCall", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("FlexInd", "true"); // 2
      Instrmt_31_set.insert("true");
      Instrmt_31.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_31_set.insert("false");
      Instrmt_31.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_31_set.insert("Mo");
      Instrmt_31.add_attribute("CpnRt", "19106190.100000"); // 2
      Instrmt_31_set.insert("19106190.100000");
      Instrmt_31.add_attribute("Exch", "SecurityExchange_t_213454495"); // 2
      Instrmt_31_set.insert("SecurityExchange_t_213454495");
      Instrmt_31.add_attribute("PosLmt", "315604657"); // 2
      Instrmt_31_set.insert("315604657");
      Instrmt_31.add_attribute("NTPosLmt", "1857352207"); // 2
      Instrmt_31_set.insert("1857352207");
      Instrmt_31.add_attribute("Issr", "Issuer_t_1614183060"); // 2
      Instrmt_31_set.insert("Issuer_t_1614183060");
      Instrmt_31.add_attribute("EncIssrLen", "490814096"); // 2
      Instrmt_31_set.insert("490814096");
      Instrmt_31.add_attribute("EncIssr", "EncodedIssuer_t_794644885"); // 2
      Instrmt_31_set.insert("EncodedIssuer_t_794644885");
      Instrmt_31.add_attribute("Desc", "SecurityDesc_t_190233432"); // 2
      Instrmt_31_set.insert("SecurityDesc_t_190233432");
      Instrmt_31.add_attribute("EncSecDescLen", "1318335435"); // 2
      Instrmt_31_set.insert("1318335435");
      Instrmt_31.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_852135885"); // 2
      Instrmt_31_set.insert("EncodedSecurityDesc_t_852135885");
      Instrmt_31.add_attribute("Pool", "Pool_t_1667067004"); // 2
      Instrmt_31_set.insert("Pool_t_1667067004");
      Instrmt_31.add_attribute("CSetMo", "1809789797"); // 2
      Instrmt_31_set.insert("1809789797");
      Instrmt_31.add_attribute("CPPgm", "1"); // 2
      Instrmt_31_set.insert("1");
      Instrmt_31.add_attribute("CPRegT", "CPRegType_t_982188423"); // 2
      Instrmt_31_set.insert("CPRegType_t_982188423");
      Instrmt_31.add_attribute("Dated", "DatedDate_t_752924553"); // 2
      Instrmt_31_set.insert("DatedDate_t_752924553");
      Instrmt_31.add_attribute("IntAcrl", "InterestAccrualDate_t_1849080793"); // 2
      Instrmt_31_set.insert("InterestAccrualDate_t_1849080793");
      all_values.push_back(Instrmt_31_set);
      all_compo_names.insert("Instrmt_31_set");

      {
        xml_element AID_34{"AID"};
        multiset<string> AID_34_set;
        AID_34.add_attribute("AltID", "SecurityAltID_t_1523872474"); // 3
        AID_34_set.insert("SecurityAltID_t_1523872474");
        AID_34.add_attribute("AltIDSrc", "K"); // 3
        AID_34_set.insert("K");
        all_values.push_back(AID_34_set);
        all_compo_names.insert("AID_34_set");

        Instrmt_31.add_element(AID_34);
      }
      {
        xml_element SecXML_34{"SecXML"};
        multiset<string> SecXML_34_set;
        SecXML_34.add_attribute("Schema", "SecurityXMLSchema_t_2024581556"); // 3
        SecXML_34_set.insert("SecurityXMLSchema_t_2024581556");
        all_values.push_back(SecXML_34_set);
        all_compo_names.insert("SecXML_34_set");

        Instrmt_31.add_element(SecXML_34);
      }
      {
        xml_element Evnt_34{"Evnt"};
        multiset<string> Evnt_34_set;
        Evnt_34.add_attribute("EventTyp", "19"); // 3
        Evnt_34_set.insert("19");
        Evnt_34.add_attribute("Dt", "EventDate_t_2080659861"); // 3
        Evnt_34_set.insert("EventDate_t_2080659861");
        Evnt_34.add_attribute("Tm", "EventTime_t_1143426605"); // 3
        Evnt_34_set.insert("EventTime_t_1143426605");
        Evnt_34.add_attribute("Px", "15420525.830000"); // 3
        Evnt_34_set.insert("15420525.830000");
        Evnt_34.add_attribute("Txt", "EventText_t_74526291"); // 3
        Evnt_34_set.insert("EventText_t_74526291");
        all_values.push_back(Evnt_34_set);
        all_compo_names.insert("Evnt_34_set");

        Instrmt_31.add_element(Evnt_34);
      }
      {
        xml_element Pty_184{"Pty"};
        multiset<string> Pty_184_set;
        Pty_184.add_attribute("ID", "InstrumentPartyID_t_1672839863"); // 3
        Pty_184_set.insert("InstrumentPartyID_t_1672839863");
        Pty_184.add_attribute("Src", "2"); // 3
        Pty_184_set.insert("2");
        Pty_184.add_attribute("R", "57"); // 3
        Pty_184_set.insert("57");
        all_values.push_back(Pty_184_set);
        all_compo_names.insert("Pty_184_set");

        {
          xml_element Sub_184{"Sub"};
          multiset<string> Sub_184_set;
          Sub_184.add_attribute("ID", "InstrumentPartySubID_t_1139029766"); // 4
          Sub_184_set.insert("InstrumentPartySubID_t_1139029766");
          Sub_184.add_attribute("Typ", "23"); // 4
          Sub_184_set.insert("23");
          all_values.push_back(Sub_184_set);
          all_compo_names.insert("Sub_184_set");

          Pty_184.add_element(Sub_184);
        }
        Instrmt_31.add_element(Pty_184);
      }
      {
        xml_element CmplxEvnt_31{"CmplxEvnt"};
        multiset<string> CmplxEvnt_31_set;
        CmplxEvnt_31.add_attribute("Typ", "4"); // 3
        CmplxEvnt_31_set.insert("4");
        CmplxEvnt_31.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_849561136"); // 3
        CmplxEvnt_31_set.insert("ComplexOptPayoutAmount_t_849561136");
        CmplxEvnt_31.add_attribute("Px", "11523185.570000"); // 3
        CmplxEvnt_31_set.insert("11523185.570000");
        CmplxEvnt_31.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_31_set.insert("3");
        CmplxEvnt_31.add_attribute("PxBndryPrcsn", "11651657.930000"); // 3
        CmplxEvnt_31_set.insert("11651657.930000");
        CmplxEvnt_31.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_31_set.insert("3");
        CmplxEvnt_31.add_attribute("Cond", "2"); // 3
        CmplxEvnt_31_set.insert("2");
        all_values.push_back(CmplxEvnt_31_set);
        all_compo_names.insert("CmplxEvnt_31_set");

        {
          xml_element EvntDts_31{"EvntDts"};
          multiset<string> EvntDts_31_set;
          EvntDts_31.add_attribute("StartDt", "ComplexEventStartDate_t_1655979889"); // 4
          EvntDts_31_set.insert("ComplexEventStartDate_t_1655979889");
          EvntDts_31.add_attribute("EndDt", "ComplexEventEndDate_t_1656832002"); // 4
          EvntDts_31_set.insert("ComplexEventEndDate_t_1656832002");
          all_values.push_back(EvntDts_31_set);
          all_compo_names.insert("EvntDts_31_set");

          {
            xml_element EvntTms_31{"EvntTms"};
            multiset<string> EvntTms_31_set;
            EvntTms_31.add_attribute("StartTm", "1427720532"); // 5
            EvntTms_31_set.insert("1427720532");
            EvntTms_31.add_attribute("EndTm", "826831677"); // 5
            EvntTms_31_set.insert("826831677");
            all_values.push_back(EvntTms_31_set);
            all_compo_names.insert("EvntTms_31_set");

            EvntDts_31.add_element(EvntTms_31);
          }
          CmplxEvnt_31.add_element(EvntDts_31);
        }
        Instrmt_31.add_element(CmplxEvnt_31);
      }
      Inc_1.add_element(Instrmt_31);
    }
    {
      xml_element Undly_44{"Undly"};
      multiset<string> Undly_44_set;
      Undly_44.add_attribute("Sym", "UnderlyingSymbol_t_361484239"); // 2
      Undly_44_set.insert("UnderlyingSymbol_t_361484239");
      Undly_44.add_attribute("Sfx", "CD"); // 2
      Undly_44_set.insert("CD");
      Undly_44.add_attribute("ID", "UnderlyingSecurityID_t_489137826"); // 2
      Undly_44_set.insert("UnderlyingSecurityID_t_489137826");
      Undly_44.add_attribute("Src", "8"); // 2
      Undly_44_set.insert("8");
      Undly_44.add_attribute("Prod", "3"); // 2
      Undly_44_set.insert("3");
      Undly_44.add_attribute("CFI", "UnderlyingCFICode_t_1242062379"); // 2
      Undly_44_set.insert("UnderlyingCFICode_t_1242062379");
      Undly_44.add_attribute("SecTyp", "EUCP"); // 2
      Undly_44_set.insert("EUCP");
      Undly_44.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1305881137"); // 2
      Undly_44_set.insert("UnderlyingSecuritySubType_t_1305881137");
      Undly_44.add_attribute("MMY", "95015617"); // 2
      Undly_44_set.insert("95015617");
      Undly_44.add_attribute("Mat", "UnderlyingMaturityDate_t_1830108028"); // 2
      Undly_44_set.insert("UnderlyingMaturityDate_t_1830108028");
      Undly_44.add_attribute("MatTm", "1161996828"); // 2
      Undly_44_set.insert("1161996828");
      Undly_44.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_28191830"); // 2
      Undly_44_set.insert("UnderlyingCouponPaymentDate_t_28191830");
      Undly_44.add_attribute("RestrctTyp", "MM"); // 2
      Undly_44_set.insert("MM");
      Undly_44.add_attribute("Snrty", "SD"); // 2
      Undly_44_set.insert("SD");
      Undly_44.add_attribute("NotlPctOut", "1027181.210000"); // 2
      Undly_44_set.insert("1027181.210000");
      Undly_44.add_attribute("OrigNotlPctOut", "3514072.010000"); // 2
      Undly_44_set.insert("3514072.010000");
      Undly_44.add_attribute("AttchPnt", "409233.440000"); // 2
      Undly_44_set.insert("409233.440000");
      Undly_44.add_attribute("DetchPnt", "18754716.480000"); // 2
      Undly_44_set.insert("18754716.480000");
      Undly_44.add_attribute("Issued", "UnderlyingIssueDate_t_1490436967"); // 2
      Undly_44_set.insert("UnderlyingIssueDate_t_1490436967");
      Undly_44.add_attribute("RepoCollSecTyp", "1430106539"); // 2
      Undly_44_set.insert("1430106539");
      Undly_44.add_attribute("RepoTrm", "1285321192"); // 2
      Undly_44_set.insert("1285321192");
      Undly_44.add_attribute("RepoRt", "1925144.550000"); // 2
      Undly_44_set.insert("1925144.550000");
      Undly_44.add_attribute("Fctr", "4349414.490000"); // 2
      Undly_44_set.insert("4349414.490000");
      Undly_44.add_attribute("CrdRtg", "UnderlyingCreditRating_t_908625231"); // 2
      Undly_44_set.insert("UnderlyingCreditRating_t_908625231");
      Undly_44.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1357680249"); // 2
      Undly_44_set.insert("UnderlyingInstrRegistry_t_1357680249");
      Undly_44.add_attribute("Ctry", "1297128566"); // 2
      Undly_44_set.insert("1297128566");
      Undly_44.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2146112331"); // 2
      Undly_44_set.insert("UnderlyingStateOrProvinceOfIssue_t_2146112331");
      Undly_44.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_866176490"); // 2
      Undly_44_set.insert("UnderlyingLocaleOfIssue_t_866176490");
      Undly_44.add_attribute("Redeem", "UnderlyingRedemptionDate_t_806476920"); // 2
      Undly_44_set.insert("UnderlyingRedemptionDate_t_806476920");
      Undly_44.add_attribute("StrkPx", "14263492.150000"); // 2
      Undly_44_set.insert("14263492.150000");
      Undly_44.add_attribute("StrkCcy", "GBP"); // 2
      Undly_44_set.insert("GBP");
      Undly_44.add_attribute("OptA", "226169455"); // 2
      Undly_44_set.insert("226169455");
      Undly_44.add_attribute("Mult", "346623.450000"); // 2
      Undly_44_set.insert("346623.450000");
      Undly_44.add_attribute("MultTyp", "2"); // 2
      Undly_44_set.insert("2");
      Undly_44.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_44_set.insert("3");
      Undly_44.add_attribute("UOM", "Bbl"); // 2
      Undly_44_set.insert("Bbl");
      Undly_44.add_attribute("UOMQty", "10774169.590000"); // 2
      Undly_44_set.insert("10774169.590000");
      Undly_44.add_attribute("PxUOM", "Bbl"); // 2
      Undly_44_set.insert("Bbl");
      Undly_44.add_attribute("PxUOMQty", "13717403.410000"); // 2
      Undly_44_set.insert("13717403.410000");
      Undly_44.add_attribute("TmUnit", "Min"); // 2
      Undly_44_set.insert("Min");
      Undly_44.add_attribute("ExerStyle", "1"); // 2
      Undly_44_set.insert("1");
      Undly_44.add_attribute("CpnRt", "13999321.720000"); // 2
      Undly_44_set.insert("13999321.720000");
      Undly_44.add_attribute("Exch", "UnderlyingSecurityExchange_t_1586092325"); // 2
      Undly_44_set.insert("UnderlyingSecurityExchange_t_1586092325");
      Undly_44.add_attribute("Issr", "UnderlyingIssuer_t_885138199"); // 2
      Undly_44_set.insert("UnderlyingIssuer_t_885138199");
      Undly_44.add_attribute("EncUndIssrLen", "1502650293"); // 2
      Undly_44_set.insert("1502650293");
      Undly_44.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1937499526"); // 2
      Undly_44_set.insert("EncodedUnderlyingIssuer_t_1937499526");
      Undly_44.add_attribute("Desc", "UnderlyingSecurityDesc_t_926061544"); // 2
      Undly_44_set.insert("UnderlyingSecurityDesc_t_926061544");
      Undly_44.add_attribute("EncUndSecDescLen", "1230638293"); // 2
      Undly_44_set.insert("1230638293");
      Undly_44.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1280452846"); // 2
      Undly_44_set.insert("EncodedUnderlyingSecurityDesc_t_1280452846");
      Undly_44.add_attribute("CPPgm", "UnderlyingCPProgram_t_208684435"); // 2
      Undly_44_set.insert("UnderlyingCPProgram_t_208684435");
      Undly_44.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_368475837"); // 2
      Undly_44_set.insert("UnderlyingCPRegType_t_368475837");
      Undly_44.add_attribute("AllocPct", "14729673.010000"); // 2
      Undly_44_set.insert("14729673.010000");
      Undly_44.add_attribute("Ccy", "EUR"); // 2
      Undly_44_set.insert("EUR");
      Undly_44.add_attribute("Qty", "6831639.020000"); // 2
      Undly_44_set.insert("6831639.020000");
      Undly_44.add_attribute("SettlTyp", "2"); // 2
      Undly_44_set.insert("2");
      Undly_44.add_attribute("CashAmt", "UnderlyingCashAmount_t_1275729752"); // 2
      Undly_44_set.insert("UnderlyingCashAmount_t_1275729752");
      Undly_44.add_attribute("CashTyp", "DIFF"); // 2
      Undly_44_set.insert("DIFF");
      Undly_44.add_attribute("Px", "5997477.230000"); // 2
      Undly_44_set.insert("5997477.230000");
      Undly_44.add_attribute("DirtPx", "5545953.190000"); // 2
      Undly_44_set.insert("5545953.190000");
      Undly_44.add_attribute("EndPx", "10948649.120000"); // 2
      Undly_44_set.insert("10948649.120000");
      Undly_44.add_attribute("StartVal", "UnderlyingStartValue_t_1767708883"); // 2
      Undly_44_set.insert("UnderlyingStartValue_t_1767708883");
      Undly_44.add_attribute("CurVal", "UnderlyingCurrentValue_t_780764774"); // 2
      Undly_44_set.insert("UnderlyingCurrentValue_t_780764774");
      Undly_44.add_attribute("EndVal", "UnderlyingEndValue_t_1129527258"); // 2
      Undly_44_set.insert("UnderlyingEndValue_t_1129527258");
      Undly_44.add_attribute("AdjQty", "8921157.220000"); // 2
      Undly_44_set.insert("8921157.220000");
      Undly_44.add_attribute("FxRate", "7889428.920000"); // 2
      Undly_44_set.insert("7889428.920000");
      Undly_44.add_attribute("FxRateCalc", "M"); // 2
      Undly_44_set.insert("M");
      Undly_44.add_attribute("CapValu", "UnderlyingCapValue_t_1969532681"); // 2
      Undly_44_set.insert("UnderlyingCapValue_t_1969532681");
      Undly_44.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2103002147"); // 2
      Undly_44_set.insert("UnderlyingSettlMethod_t_2103002147");
      Undly_44.add_attribute("PutCall", "1630508676"); // 2
      Undly_44_set.insert("1630508676");
      all_values.push_back(Undly_44_set);
      all_compo_names.insert("Undly_44_set");

      {
        xml_element UndAID_44{"UndAID"};
        multiset<string> UndAID_44_set;
        UndAID_44.add_attribute("AltID", "UnderlyingSecurityAltID_t_582090372"); // 3
        UndAID_44_set.insert("UnderlyingSecurityAltID_t_582090372");
        UndAID_44.add_attribute("AltIDSrc", "8"); // 3
        UndAID_44_set.insert("8");
        all_values.push_back(UndAID_44_set);
        all_compo_names.insert("UndAID_44_set");

        Undly_44.add_element(UndAID_44);
      }
      {
        xml_element Stip_68{"Stip"};
        multiset<string> Stip_68_set;
        Stip_68.add_attribute("Typ", "ABS"); // 3
        Stip_68_set.insert("ABS");
        Stip_68.add_attribute("Val", "UnderlyingStipValue_t_20699050"); // 3
        Stip_68_set.insert("UnderlyingStipValue_t_20699050");
        all_values.push_back(Stip_68_set);
        all_compo_names.insert("Stip_68_set");

        Undly_44.add_element(Stip_68);
      }
      {
        xml_element Pty_185{"Pty"};
        multiset<string> Pty_185_set;
        Pty_185.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1169229135"); // 3
        Pty_185_set.insert("UnderlyingInstrumentPartyID_t_1169229135");
        Pty_185.add_attribute("Src", "A"); // 3
        Pty_185_set.insert("A");
        Pty_185.add_attribute("R", "70"); // 3
        Pty_185_set.insert("70");
        all_values.push_back(Pty_185_set);
        all_compo_names.insert("Pty_185_set");

        {
          xml_element Sub_185{"Sub"};
          multiset<string> Sub_185_set;
          Sub_185.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2095290679"); // 4
          Sub_185_set.insert("UnderlyingInstrumentPartySubID_t_2095290679");
          Sub_185.add_attribute("Typ", "4"); // 4
          Sub_185_set.insert("4");
          all_values.push_back(Sub_185_set);
          all_compo_names.insert("Sub_185_set");

          Pty_185.add_element(Sub_185);
        }
        Undly_44.add_element(Pty_185);
      }
      Inc_1.add_element(Undly_44);
    }
    {
      xml_element Leg_42{"Leg"};
      multiset<string> Leg_42_set;
      Leg_42.add_attribute("Sym", "LegSymbol_t_1091167774"); // 2
      Leg_42_set.insert("LegSymbol_t_1091167774");
      Leg_42.add_attribute("Sfx", "CD"); // 2
      Leg_42_set.insert("CD");
      Leg_42.add_attribute("ID", "LegSecurityID_t_1837237976"); // 2
      Leg_42_set.insert("LegSecurityID_t_1837237976");
      Leg_42.add_attribute("Src", "7"); // 2
      Leg_42_set.insert("7");
      Leg_42.add_attribute("Prod", "4"); // 2
      Leg_42_set.insert("4");
      Leg_42.add_attribute("CFI", "LegCFICode_t_966855397"); // 2
      Leg_42_set.insert("LegCFICode_t_966855397");
      Leg_42.add_attribute("SecTyp", "CMB"); // 2
      Leg_42_set.insert("CMB");
      Leg_42.add_attribute("SecSubTyp", "LegSecuritySubType_t_593388153"); // 2
      Leg_42_set.insert("LegSecuritySubType_t_593388153");
      Leg_42.add_attribute("MMY", "95101501"); // 2
      Leg_42_set.insert("95101501");
      Leg_42.add_attribute("Mat", "LegMaturityDate_t_501672075"); // 2
      Leg_42_set.insert("LegMaturityDate_t_501672075");
      Leg_42.add_attribute("MatTm", "1193135876"); // 2
      Leg_42_set.insert("1193135876");
      Leg_42.add_attribute("CpnPmt", "LegCouponPaymentDate_t_649696820"); // 2
      Leg_42_set.insert("LegCouponPaymentDate_t_649696820");
      Leg_42.add_attribute("Issued", "LegIssueDate_t_1596536988"); // 2
      Leg_42_set.insert("LegIssueDate_t_1596536988");
      Leg_42.add_attribute("RepoCollSecTyp", "813361111"); // 2
      Leg_42_set.insert("813361111");
      Leg_42.add_attribute("RepoTrm", "1430461594"); // 2
      Leg_42_set.insert("1430461594");
      Leg_42.add_attribute("RepoRt", "5785805.980000"); // 2
      Leg_42_set.insert("5785805.980000");
      Leg_42.add_attribute("Fctr", "17054768.330000"); // 2
      Leg_42_set.insert("17054768.330000");
      Leg_42.add_attribute("CrdRtg", "LegCreditRating_t_71920838"); // 2
      Leg_42_set.insert("LegCreditRating_t_71920838");
      Leg_42.add_attribute("Rgstry", "LegInstrRegistry_t_837348932"); // 2
      Leg_42_set.insert("LegInstrRegistry_t_837348932");
      Leg_42.add_attribute("Ctry", "1527525866"); // 2
      Leg_42_set.insert("1527525866");
      Leg_42.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_27439338"); // 2
      Leg_42_set.insert("LegStateOrProvinceOfIssue_t_27439338");
      Leg_42.add_attribute("Lcl", "LegLocaleOfIssue_t_320373960"); // 2
      Leg_42_set.insert("LegLocaleOfIssue_t_320373960");
      Leg_42.add_attribute("Redeem", "LegRedemptionDate_t_2109616239"); // 2
      Leg_42_set.insert("LegRedemptionDate_t_2109616239");
      Leg_42.add_attribute("Strk", "3115302.730000"); // 2
      Leg_42_set.insert("3115302.730000");
      Leg_42.add_attribute("StrkCcy", "EUR"); // 2
      Leg_42_set.insert("EUR");
      Leg_42.add_attribute("OptA", "1480759408"); // 2
      Leg_42_set.insert("1480759408");
      Leg_42.add_attribute("Cmult", "14414550.060000"); // 2
      Leg_42_set.insert("14414550.060000");
      Leg_42.add_attribute("MultTyp", "1"); // 2
      Leg_42_set.insert("1");
      Leg_42.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_42_set.insert("4");
      Leg_42.add_attribute("UOM", "MMbbl"); // 2
      Leg_42_set.insert("MMbbl");
      Leg_42.add_attribute("UOMQty", "8847143.440000"); // 2
      Leg_42_set.insert("8847143.440000");
      Leg_42.add_attribute("PxUOM", "Gal"); // 2
      Leg_42_set.insert("Gal");
      Leg_42.add_attribute("PxUOMQty", "4524878.250000"); // 2
      Leg_42_set.insert("4524878.250000");
      Leg_42.add_attribute("TmUnit", "S"); // 2
      Leg_42_set.insert("S");
      Leg_42.add_attribute("ExerStyle", "1"); // 2
      Leg_42_set.insert("1");
      Leg_42.add_attribute("CpnRt", "14193432.230000"); // 2
      Leg_42_set.insert("14193432.230000");
      Leg_42.add_attribute("Exch", "LegSecurityExchange_t_253697454"); // 2
      Leg_42_set.insert("LegSecurityExchange_t_253697454");
      Leg_42.add_attribute("Issr", "LegIssuer_t_831079762"); // 2
      Leg_42_set.insert("LegIssuer_t_831079762");
      Leg_42.add_attribute("EncLegIssrLen", "1514444724"); // 2
      Leg_42_set.insert("1514444724");
      Leg_42.add_attribute("EncLegIssr", "EncodedLegIssuer_t_755369530"); // 2
      Leg_42_set.insert("EncodedLegIssuer_t_755369530");
      Leg_42.add_attribute("Desc", "LegSecurityDesc_t_2024215639"); // 2
      Leg_42_set.insert("LegSecurityDesc_t_2024215639");
      Leg_42.add_attribute("EncLegSecDescLen", "16657897"); // 2
      Leg_42_set.insert("16657897");
      Leg_42.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_204422870"); // 2
      Leg_42_set.insert("EncodedLegSecurityDesc_t_204422870");
      Leg_42.add_attribute("RatioQty", "6900931.020000"); // 2
      Leg_42_set.insert("6900931.020000");
      Leg_42.add_attribute("Side", "4"); // 2
      Leg_42_set.insert("4");
      Leg_42.add_attribute("Ccy", "JPY"); // 2
      Leg_42_set.insert("JPY");
      Leg_42.add_attribute("Pool", "LegPool_t_1519040330"); // 2
      Leg_42_set.insert("LegPool_t_1519040330");
      Leg_42.add_attribute("Dated", "LegDatedDate_t_1620352400"); // 2
      Leg_42_set.insert("LegDatedDate_t_1620352400");
      Leg_42.add_attribute("CSetMo", "1775612154"); // 2
      Leg_42_set.insert("1775612154");
      Leg_42.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1546479668"); // 2
      Leg_42_set.insert("LegInterestAccrualDate_t_1546479668");
      Leg_42.add_attribute("PutCall", "1940726361"); // 2
      Leg_42_set.insert("1940726361");
      Leg_42.add_attribute("LegOptionRatio", "17377447.450000"); // 2
      Leg_42_set.insert("17377447.450000");
      Leg_42.add_attribute("Px", "18580099.410000"); // 2
      Leg_42_set.insert("18580099.410000");
      all_values.push_back(Leg_42_set);
      all_compo_names.insert("Leg_42_set");

      {
        xml_element LegAID_42{"LegAID"};
        multiset<string> LegAID_42_set;
        LegAID_42.add_attribute("SecAltID", "LegSecurityAltID_t_996573873"); // 3
        LegAID_42_set.insert("LegSecurityAltID_t_996573873");
        LegAID_42.add_attribute("SecAltIDSrc", "D"); // 3
        LegAID_42_set.insert("D");
        all_values.push_back(LegAID_42_set);
        all_compo_names.insert("LegAID_42_set");

        Leg_42.add_element(LegAID_42);
      }
      Inc_1.add_element(Leg_42);
    }
    {
      xml_element Yield_8{"Yield"};
      multiset<string> Yield_8_set;
      Yield_8.add_attribute("Typ", "SEMIANNUAL"); // 2
      Yield_8_set.insert("SEMIANNUAL");
      Yield_8.add_attribute("Yld", "2905452.310000"); // 2
      Yield_8_set.insert("2905452.310000");
      Yield_8.add_attribute("CalcDt", "YieldCalcDate_t_1514122956"); // 2
      Yield_8_set.insert("YieldCalcDate_t_1514122956");
      Yield_8.add_attribute("RedDt", "YieldRedemptionDate_t_472368493"); // 2
      Yield_8_set.insert("YieldRedemptionDate_t_472368493");
      Yield_8.add_attribute("RedPx", "10532787.280000"); // 2
      Yield_8_set.insert("10532787.280000");
      Yield_8.add_attribute("RedPxTyp", "16"); // 2
      Yield_8_set.insert("16");
      all_values.push_back(Yield_8_set);
      all_compo_names.insert("Yield_8_set");

      Inc_1.add_element(Yield_8);
    }
    {
      xml_element SprdBnchmkCurve_13{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_13_set;
      SprdBnchmkCurve_13.add_attribute("Spread", "20574263.990000"); // 2
      SprdBnchmkCurve_13_set.insert("20574263.990000");
      SprdBnchmkCurve_13.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_13_set.insert("JPY");
      SprdBnchmkCurve_13.add_attribute("Name", "LIBID"); // 2
      SprdBnchmkCurve_13_set.insert("LIBID");
      SprdBnchmkCurve_13.add_attribute("Point", "BenchmarkCurvePoint_t_777626129"); // 2
      SprdBnchmkCurve_13_set.insert("BenchmarkCurvePoint_t_777626129");
      SprdBnchmkCurve_13.add_attribute("Px", "18064168.780000"); // 2
      SprdBnchmkCurve_13_set.insert("18064168.780000");
      SprdBnchmkCurve_13.add_attribute("PxTyp", "17"); // 2
      SprdBnchmkCurve_13_set.insert("17");
      SprdBnchmkCurve_13.add_attribute("SecID", "BenchmarkSecurityID_t_144587205"); // 2
      SprdBnchmkCurve_13_set.insert("BenchmarkSecurityID_t_144587205");
      SprdBnchmkCurve_13.add_attribute("SecIDSrc", "F"); // 2
      SprdBnchmkCurve_13_set.insert("F");
      all_values.push_back(SprdBnchmkCurve_13_set);
      all_compo_names.insert("SprdBnchmkCurve_13_set");

      Inc_1.add_element(SprdBnchmkCurve_13);
    }
    {
      xml_element RtSrc_8{"RtSrc"};
      multiset<string> RtSrc_8_set;
      RtSrc_8.add_attribute("RtSrc", "2"); // 2
      RtSrc_8_set.insert("2");
      RtSrc_8.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_8_set.insert("0");
      RtSrc_8.add_attribute("RefPg", "ReferencePage_t_618725630"); // 2
      RtSrc_8_set.insert("ReferencePage_t_618725630");
      all_values.push_back(RtSrc_8_set);
      all_compo_names.insert("RtSrc_8_set");

      Inc_1.add_element(RtSrc_8);
    }
    {
      xml_element SecSizesGrp_1{"SecSizesGrp"};
      multiset<string> SecSizesGrp_1_set;
      SecSizesGrp_1.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_1_set.insert("1");
      SecSizesGrp_1.add_attribute("MDSecSize", "16083645.940000"); // 2
      SecSizesGrp_1_set.insert("16083645.940000");
      all_values.push_back(SecSizesGrp_1_set);
      all_compo_names.insert("SecSizesGrp_1_set");

      Inc_1.add_element(SecSizesGrp_1);
    }
    {
      xml_element StatsIndGrp_1{"StatsIndGrp"};
      multiset<string> StatsIndGrp_1_set;
      StatsIndGrp_1.add_attribute("StatsTyp", "3"); // 2
      StatsIndGrp_1_set.insert("3");
      all_values.push_back(StatsIndGrp_1_set);
      all_compo_names.insert("StatsIndGrp_1_set");

      Inc_1.add_element(StatsIndGrp_1);
    }
    {
      xml_element Pty_186{"Pty"};
      multiset<string> Pty_186_set;
      Pty_186.add_attribute("ID", "PartyID_t_1793625504"); // 2
      Pty_186_set.insert("PartyID_t_1793625504");
      Pty_186.add_attribute("Src", "H"); // 2
      Pty_186_set.insert("H");
      Pty_186.add_attribute("R", "24"); // 2
      Pty_186_set.insert("24");
      all_values.push_back(Pty_186_set);
      all_compo_names.insert("Pty_186_set");

      {
        xml_element Sub_186{"Sub"};
        multiset<string> Sub_186_set;
        Sub_186.add_attribute("ID", "PartySubID_t_1421754011"); // 3
        Sub_186_set.insert("PartySubID_t_1421754011");
        Sub_186.add_attribute("Typ", "19"); // 3
        Sub_186_set.insert("19");
        all_values.push_back(Sub_186_set);
        all_compo_names.insert("Sub_186_set");

        Pty_186.add_element(Sub_186);
      }
      Inc_1.add_element(Pty_186);
    }
    elt.add_element(Inc_1);
  } // end Inc
  { // Inc
    xml_element Inc_2{"Inc"};
    multiset<string> Inc_2_set;
    Inc_2.add_attribute("UpdtAct", "4"); // 1
    Inc_2_set.insert("4");
    Inc_2.add_attribute("DelRsn", "0"); // 1
    Inc_2_set.insert("0");
    Inc_2.add_attribute("MDSubBkTyp", "89443589"); // 1
    Inc_2_set.insert("89443589");
    Inc_2.add_attribute("MktDepth", "1664414437"); // 1
    Inc_2_set.insert("1664414437");
    Inc_2.add_attribute("Typ", "R"); // 1
    Inc_2_set.insert("R");
    Inc_2.add_attribute("ID", "MDEntryID_t_1280729291"); // 1
    Inc_2_set.insert("MDEntryID_t_1280729291");
    Inc_2.add_attribute("RefID", "MDEntryRefID_t_1954959669"); // 1
    Inc_2_set.insert("MDEntryRefID_t_1954959669");
    Inc_2.add_attribute("MDStrmID", "MDStreamID_t_2099230803"); // 1
    Inc_2_set.insert("MDStreamID_t_2099230803");
    Inc_2.add_attribute("FinclStat", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("CorpActn", "M"); // 1
    Inc_2_set.insert("M");
    Inc_2.add_attribute("Px", "2031008.070000"); // 1
    Inc_2_set.insert("2031008.070000");
    Inc_2.add_attribute("PxTyp", "18"); // 1
    Inc_2_set.insert("18");
    Inc_2.add_attribute("OrdTyp", "Q"); // 1
    Inc_2_set.insert("Q");
    Inc_2.add_attribute("Ccy", "CHF"); // 1
    Inc_2_set.insert("CHF");
    Inc_2.add_attribute("SettlCcy", "CHF"); // 1
    Inc_2_set.insert("CHF");
    Inc_2.add_attribute("Sz", "6419053.720000"); // 1
    Inc_2_set.insert("6419053.720000");
    Inc_2.add_attribute("LotTyp", "3"); // 1
    Inc_2_set.insert("3");
    Inc_2.add_attribute("Dt", "1829056222"); // 1
    Inc_2_set.insert("1829056222");
    Inc_2.add_attribute("Tm", "1497351486"); // 1
    Inc_2_set.insert("1497351486");
    Inc_2.add_attribute("TickDirctn", "0"); // 1
    Inc_2_set.insert("0");
    Inc_2.add_attribute("Mkt", "MDMkt_t_300298204"); // 1
    Inc_2_set.insert("MDMkt_t_300298204");
    Inc_2.add_attribute("SesID", "1"); // 1
    Inc_2_set.insert("1");
    Inc_2.add_attribute("SesSub", "5"); // 1
    Inc_2_set.insert("5");
    Inc_2.add_attribute("TrdgStat", "23"); // 1
    Inc_2_set.insert("23");
    Inc_2.add_attribute("HaltRsn", "5"); // 1
    Inc_2_set.insert("5");
    Inc_2.add_attribute("QCond", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("TrdCond", "X"); // 1
    Inc_2_set.insert("X");
    Inc_2.add_attribute("TrdTyp", "43"); // 1
    Inc_2_set.insert("43");
    Inc_2.add_attribute("MtchTyp", "M6"); // 1
    Inc_2_set.insert("M6");
    Inc_2.add_attribute("Orig", "MDEntryOriginator_t_1096982070"); // 1
    Inc_2_set.insert("MDEntryOriginator_t_1096982070");
    Inc_2.add_attribute("LctnID", "LocationID_t_827834382"); // 1
    Inc_2_set.insert("LocationID_t_827834382");
    Inc_2.add_attribute("DeskID", "DeskID_t_64175552"); // 1
    Inc_2_set.insert("DeskID_t_64175552");
    Inc_2.add_attribute("OpenClsSettlFlag", "5"); // 1
    Inc_2_set.insert("5");
    Inc_2.add_attribute("TmInForce", "9"); // 1
    Inc_2_set.insert("9");
    Inc_2.add_attribute("ExpireDt", "ExpireDate_t_1344904843"); // 1
    Inc_2_set.insert("ExpireDate_t_1344904843");
    Inc_2.add_attribute("ExpireTm", "ExpireTime_t_421388880"); // 1
    Inc_2_set.insert("ExpireTime_t_421388880");
    Inc_2.add_attribute("MinQty", "13646893.840000"); // 1
    Inc_2_set.insert("13646893.840000");
    Inc_2.add_attribute("ExecInst", "B"); // 1
    Inc_2_set.insert("B");
    Inc_2.add_attribute("SellerDays", "1282143630"); // 1
    Inc_2_set.insert("1282143630");
    Inc_2.add_attribute("OrdID", "OrderID_t_1567790191"); // 1
    Inc_2_set.insert("OrderID_t_1567790191");
    Inc_2.add_attribute("OrdID2", "SecondaryOrderID_t_466075869"); // 1
    Inc_2_set.insert("SecondaryOrderID_t_466075869");
    Inc_2.add_attribute("EntryID", "QuoteEntryID_t_1501181285"); // 1
    Inc_2_set.insert("QuoteEntryID_t_1501181285");
    Inc_2.add_attribute("TrdID", "TradeID_t_1176126774"); // 1
    Inc_2_set.insert("TradeID_t_1176126774");
    Inc_2.add_attribute("Buyer", "MDEntryBuyer_t_129267118"); // 1
    Inc_2_set.insert("MDEntryBuyer_t_129267118");
    Inc_2.add_attribute("Seller", "MDEntrySeller_t_350361422"); // 1
    Inc_2_set.insert("MDEntrySeller_t_350361422");
    Inc_2.add_attribute("NumOfOrds", "443396588"); // 1
    Inc_2_set.insert("443396588");
    Inc_2.add_attribute("PosNo", "771172490"); // 1
    Inc_2_set.insert("771172490");
    Inc_2.add_attribute("Scope", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("PxDelta", "1249691.620000"); // 1
    Inc_2_set.insert("1249691.620000");
    Inc_2.add_attribute("NetChgPrevDay", "1210403.280000"); // 1
    Inc_2_set.insert("1210403.280000");
    Inc_2.add_attribute("Txt", "Text_t_646624856"); // 1
    Inc_2_set.insert("Text_t_646624856");
    Inc_2.add_attribute("EncTxtLen", "425267366"); // 1
    Inc_2_set.insert("425267366");
    Inc_2.add_attribute("EncTxt", "EncodedText_t_1016447382"); // 1
    Inc_2_set.insert("EncodedText_t_1016447382");
    Inc_2.add_attribute("MDPxLvl", "1410001895"); // 1
    Inc_2_set.insert("1410001895");
    Inc_2.add_attribute("Cpcty", "P"); // 1
    Inc_2_set.insert("P");
    Inc_2.add_attribute("MDOrigTyp", "2"); // 1
    Inc_2_set.insert("2");
    Inc_2.add_attribute("HighPx", "10058165.610000"); // 1
    Inc_2_set.insert("10058165.610000");
    Inc_2.add_attribute("LowPx", "4089525.270000"); // 1
    Inc_2_set.insert("4089525.270000");
    Inc_2.add_attribute("FirstPx", "13738155.670000"); // 1
    Inc_2_set.insert("13738155.670000");
    Inc_2.add_attribute("LastPx", "9805485.240000"); // 1
    Inc_2_set.insert("9805485.240000");
    Inc_2.add_attribute("TrdVol", "15059345.970000"); // 1
    Inc_2_set.insert("15059345.970000");
    Inc_2.add_attribute("SettlTyp", "6"); // 1
    Inc_2_set.insert("6");
    Inc_2.add_attribute("SettlDt", "SettlDate_t_1044724076"); // 1
    Inc_2_set.insert("SettlDate_t_1044724076");
    Inc_2.add_attribute("TransBkdTm", "TransBkdTime_t_2119847457"); // 1
    Inc_2_set.insert("TransBkdTime_t_2119847457");
    Inc_2.add_attribute("TxnTm", "TransactTime_t_1467108531"); // 1
    Inc_2_set.insert("TransactTime_t_1467108531");
    Inc_2.add_attribute("MDQteTyp", "1"); // 1
    Inc_2_set.insert("1");
    Inc_2.add_attribute("RptSeq", "393752689"); // 1
    Inc_2_set.insert("393752689");
    Inc_2.add_attribute("DealingCpcty", "A"); // 1
    Inc_2_set.insert("A");
    Inc_2.add_attribute("MDEntrySpotRt", "11926642.520000"); // 1
    Inc_2_set.insert("11926642.520000");
    Inc_2.add_attribute("MDEntryFwdPnts", "16758963.190000"); // 1
    Inc_2_set.insert("16758963.190000");
    all_values.push_back(Inc_2_set);
    all_compo_names.insert("Inc_2_set");

    {
      xml_element Instrmt_32{"Instrmt"};
      multiset<string> Instrmt_32_set;
      Instrmt_32.add_attribute("Sym", "Symbol_t_104620811"); // 2
      Instrmt_32_set.insert("Symbol_t_104620811");
      Instrmt_32.add_attribute("Sfx", "WI"); // 2
      Instrmt_32_set.insert("WI");
      Instrmt_32.add_attribute("ID", "SecurityID_t_1029593957"); // 2
      Instrmt_32_set.insert("SecurityID_t_1029593957");
      Instrmt_32.add_attribute("Src", "9"); // 2
      Instrmt_32_set.insert("9");
      Instrmt_32.add_attribute("Prod", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("ProdCmplx", "ProductComplex_t_1379955379"); // 2
      Instrmt_32_set.insert("ProductComplex_t_1379955379");
      Instrmt_32.add_attribute("SecGrp", "SecurityGroup_t_1724144174"); // 2
      Instrmt_32_set.insert("SecurityGroup_t_1724144174");
      Instrmt_32.add_attribute("CFI", "CFICode_t_411696081"); // 2
      Instrmt_32_set.insert("CFICode_t_411696081");
      Instrmt_32.add_attribute("SecTyp", "IET"); // 2
      Instrmt_32_set.insert("IET");
      Instrmt_32.add_attribute("SubTyp", "SecuritySubType_t_1849113336"); // 2
      Instrmt_32_set.insert("SecuritySubType_t_1849113336");
      Instrmt_32.add_attribute("MMY", "532736409"); // 2
      Instrmt_32_set.insert("532736409");
      Instrmt_32.add_attribute("MatDt", "MaturityDate_t_1370708999"); // 2
      Instrmt_32_set.insert("MaturityDate_t_1370708999");
      Instrmt_32.add_attribute("MatTm", "126897054"); // 2
      Instrmt_32_set.insert("126897054");
      Instrmt_32.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1549183791"); // 2
      Instrmt_32_set.insert("SettleOnOpenFlag_t_1549183791");
      Instrmt_32.add_attribute("AsgnMeth", "633227246"); // 2
      Instrmt_32_set.insert("633227246");
      Instrmt_32.add_attribute("Status", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("CpnPmt", "CouponPaymentDate_t_959696437"); // 2
      Instrmt_32_set.insert("CouponPaymentDate_t_959696437");
      Instrmt_32.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_32_set.insert("FR");
      Instrmt_32.add_attribute("Snrty", "SB"); // 2
      Instrmt_32_set.insert("SB");
      Instrmt_32.add_attribute("NotlPctOut", "1860283.560000"); // 2
      Instrmt_32_set.insert("1860283.560000");
      Instrmt_32.add_attribute("OrigNotlPctOut", "4721086.840000"); // 2
      Instrmt_32_set.insert("4721086.840000");
      Instrmt_32.add_attribute("AttchPnt", "20215952.010000"); // 2
      Instrmt_32_set.insert("20215952.010000");
      Instrmt_32.add_attribute("DetchPnt", "2401946.580000"); // 2
      Instrmt_32_set.insert("2401946.580000");
      Instrmt_32.add_attribute("Issued", "IssueDate_t_1516832760"); // 2
      Instrmt_32_set.insert("IssueDate_t_1516832760");
      Instrmt_32.add_attribute("RepoCollSecTyp", "1993959010"); // 2
      Instrmt_32_set.insert("1993959010");
      Instrmt_32.add_attribute("RepoTrm", "1707303190"); // 2
      Instrmt_32_set.insert("1707303190");
      Instrmt_32.add_attribute("RepoRt", "17589780.310000"); // 2
      Instrmt_32_set.insert("17589780.310000");
      Instrmt_32.add_attribute("Fctr", "2402280.510000"); // 2
      Instrmt_32_set.insert("2402280.510000");
      Instrmt_32.add_attribute("CrdRtg", "CreditRating_t_244133810"); // 2
      Instrmt_32_set.insert("CreditRating_t_244133810");
      Instrmt_32.add_attribute("Rgstry", "InstrRegistry_t_804158635"); // 2
      Instrmt_32_set.insert("InstrRegistry_t_804158635");
      Instrmt_32.add_attribute("IssuCtry", "1916124371"); // 2
      Instrmt_32_set.insert("1916124371");
      Instrmt_32.add_attribute("StPrv", "StateOrProvinceOfIssue_t_348754621"); // 2
      Instrmt_32_set.insert("StateOrProvinceOfIssue_t_348754621");
      Instrmt_32.add_attribute("Lcl", "LocaleOfIssue_t_315415108"); // 2
      Instrmt_32_set.insert("LocaleOfIssue_t_315415108");
      Instrmt_32.add_attribute("Redeem", "RedemptionDate_t_798234680"); // 2
      Instrmt_32_set.insert("RedemptionDate_t_798234680");
      Instrmt_32.add_attribute("StrkPx", "16295022.070000"); // 2
      Instrmt_32_set.insert("16295022.070000");
      Instrmt_32.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_32_set.insert("EUR");
      Instrmt_32.add_attribute("StrkMult", "12061627.330000"); // 2
      Instrmt_32_set.insert("12061627.330000");
      Instrmt_32.add_attribute("StrkValu", "3676347.800000"); // 2
      Instrmt_32_set.insert("3676347.800000");
      Instrmt_32.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_32_set.insert("3");
      Instrmt_32.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("StrkPxBndryPrcsn", "9003711.890000"); // 2
      Instrmt_32_set.insert("9003711.890000");
      Instrmt_32.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("OptAt", "1034689476"); // 2
      Instrmt_32_set.insert("1034689476");
      Instrmt_32.add_attribute("Mult", "3020713.330000"); // 2
      Instrmt_32_set.insert("3020713.330000");
      Instrmt_32.add_attribute("MultTyp", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("MinPxIncr", "12617677.700000"); // 2
      Instrmt_32_set.insert("12617677.700000");
      Instrmt_32.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_102803312"); // 2
      Instrmt_32_set.insert("MinPriceIncrementAmount_t_102803312");
      Instrmt_32.add_attribute("UOM", "Alw"); // 2
      Instrmt_32_set.insert("Alw");
      Instrmt_32.add_attribute("UOMQty", "14477961.260000"); // 2
      Instrmt_32_set.insert("14477961.260000");
      Instrmt_32.add_attribute("PxUOM", "USD"); // 2
      Instrmt_32_set.insert("USD");
      Instrmt_32.add_attribute("PxUOMQty", "15311697.080000"); // 2
      Instrmt_32_set.insert("15311697.080000");
      Instrmt_32.add_attribute("SettlMeth", "P"); // 2
      Instrmt_32_set.insert("P");
      Instrmt_32.add_attribute("ExerStyle", "0"); // 2
      Instrmt_32_set.insert("0");
      Instrmt_32.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_32_set.insert("2");
      Instrmt_32.add_attribute("OptPayAmt", "OptPayoutAmount_t_1247810327"); // 2
      Instrmt_32_set.insert("OptPayoutAmount_t_1247810327");
      Instrmt_32.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_32_set.insert("PCTPAR");
      Instrmt_32.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_32_set.insert("FUTDA");
      Instrmt_32.add_attribute("ListMeth", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("CapPx", "3599141.270000"); // 2
      Instrmt_32_set.insert("3599141.270000");
      Instrmt_32.add_attribute("FlrPx", "13865138.450000"); // 2
      Instrmt_32_set.insert("13865138.450000");
      Instrmt_32.add_attribute("PutCall", "0"); // 2
      Instrmt_32_set.insert("0");
      Instrmt_32.add_attribute("FlexInd", "false"); // 2
      Instrmt_32_set.insert("false");
      Instrmt_32.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_32_set.insert("false");
      Instrmt_32.add_attribute("TmUnit", "Yr"); // 2
      Instrmt_32_set.insert("Yr");
      Instrmt_32.add_attribute("CpnRt", "6312679.350000"); // 2
      Instrmt_32_set.insert("6312679.350000");
      Instrmt_32.add_attribute("Exch", "SecurityExchange_t_67971288"); // 2
      Instrmt_32_set.insert("SecurityExchange_t_67971288");
      Instrmt_32.add_attribute("PosLmt", "381396403"); // 2
      Instrmt_32_set.insert("381396403");
      Instrmt_32.add_attribute("NTPosLmt", "998902715"); // 2
      Instrmt_32_set.insert("998902715");
      Instrmt_32.add_attribute("Issr", "Issuer_t_822761842"); // 2
      Instrmt_32_set.insert("Issuer_t_822761842");
      Instrmt_32.add_attribute("EncIssrLen", "1289188825"); // 2
      Instrmt_32_set.insert("1289188825");
      Instrmt_32.add_attribute("EncIssr", "EncodedIssuer_t_1899273905"); // 2
      Instrmt_32_set.insert("EncodedIssuer_t_1899273905");
      Instrmt_32.add_attribute("Desc", "SecurityDesc_t_800777747"); // 2
      Instrmt_32_set.insert("SecurityDesc_t_800777747");
      Instrmt_32.add_attribute("EncSecDescLen", "176394653"); // 2
      Instrmt_32_set.insert("176394653");
      Instrmt_32.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_53861590"); // 2
      Instrmt_32_set.insert("EncodedSecurityDesc_t_53861590");
      Instrmt_32.add_attribute("Pool", "Pool_t_1412020899"); // 2
      Instrmt_32_set.insert("Pool_t_1412020899");
      Instrmt_32.add_attribute("CSetMo", "1317792205"); // 2
      Instrmt_32_set.insert("1317792205");
      Instrmt_32.add_attribute("CPPgm", "1"); // 2
      Instrmt_32_set.insert("1");
      Instrmt_32.add_attribute("CPRegT", "CPRegType_t_1514824211"); // 2
      Instrmt_32_set.insert("CPRegType_t_1514824211");
      Instrmt_32.add_attribute("Dated", "DatedDate_t_827366712"); // 2
      Instrmt_32_set.insert("DatedDate_t_827366712");
      Instrmt_32.add_attribute("IntAcrl", "InterestAccrualDate_t_615941838"); // 2
      Instrmt_32_set.insert("InterestAccrualDate_t_615941838");
      all_values.push_back(Instrmt_32_set);
      all_compo_names.insert("Instrmt_32_set");

      {
        xml_element AID_35{"AID"};
        multiset<string> AID_35_set;
        AID_35.add_attribute("AltID", "SecurityAltID_t_2089736207"); // 3
        AID_35_set.insert("SecurityAltID_t_2089736207");
        AID_35.add_attribute("AltIDSrc", "L"); // 3
        AID_35_set.insert("L");
        all_values.push_back(AID_35_set);
        all_compo_names.insert("AID_35_set");

        Instrmt_32.add_element(AID_35);
      }
      {
        xml_element SecXML_35{"SecXML"};
        multiset<string> SecXML_35_set;
        SecXML_35.add_attribute("Schema", "SecurityXMLSchema_t_156448975"); // 3
        SecXML_35_set.insert("SecurityXMLSchema_t_156448975");
        all_values.push_back(SecXML_35_set);
        all_compo_names.insert("SecXML_35_set");

        Instrmt_32.add_element(SecXML_35);
      }
      {
        xml_element Evnt_35{"Evnt"};
        multiset<string> Evnt_35_set;
        Evnt_35.add_attribute("EventTyp", "15"); // 3
        Evnt_35_set.insert("15");
        Evnt_35.add_attribute("Dt", "EventDate_t_1588697843"); // 3
        Evnt_35_set.insert("EventDate_t_1588697843");
        Evnt_35.add_attribute("Tm", "EventTime_t_1404259302"); // 3
        Evnt_35_set.insert("EventTime_t_1404259302");
        Evnt_35.add_attribute("Px", "15897528.070000"); // 3
        Evnt_35_set.insert("15897528.070000");
        Evnt_35.add_attribute("Txt", "EventText_t_1059087317"); // 3
        Evnt_35_set.insert("EventText_t_1059087317");
        all_values.push_back(Evnt_35_set);
        all_compo_names.insert("Evnt_35_set");

        Instrmt_32.add_element(Evnt_35);
      }
      {
        xml_element Pty_187{"Pty"};
        multiset<string> Pty_187_set;
        Pty_187.add_attribute("ID", "InstrumentPartyID_t_748719791"); // 3
        Pty_187_set.insert("InstrumentPartyID_t_748719791");
        Pty_187.add_attribute("Src", "D"); // 3
        Pty_187_set.insert("D");
        Pty_187.add_attribute("R", "11"); // 3
        Pty_187_set.insert("11");
        all_values.push_back(Pty_187_set);
        all_compo_names.insert("Pty_187_set");

        {
          xml_element Sub_187{"Sub"};
          multiset<string> Sub_187_set;
          Sub_187.add_attribute("ID", "InstrumentPartySubID_t_441934902"); // 4
          Sub_187_set.insert("InstrumentPartySubID_t_441934902");
          Sub_187.add_attribute("Typ", "21"); // 4
          Sub_187_set.insert("21");
          all_values.push_back(Sub_187_set);
          all_compo_names.insert("Sub_187_set");

          Pty_187.add_element(Sub_187);
        }
        Instrmt_32.add_element(Pty_187);
      }
      {
        xml_element CmplxEvnt_32{"CmplxEvnt"};
        multiset<string> CmplxEvnt_32_set;
        CmplxEvnt_32.add_attribute("Typ", "2"); // 3
        CmplxEvnt_32_set.insert("2");
        CmplxEvnt_32.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1764652220"); // 3
        CmplxEvnt_32_set.insert("ComplexOptPayoutAmount_t_1764652220");
        CmplxEvnt_32.add_attribute("Px", "11087804.560000"); // 3
        CmplxEvnt_32_set.insert("11087804.560000");
        CmplxEvnt_32.add_attribute("PxBndryMeth", "5"); // 3
        CmplxEvnt_32_set.insert("5");
        CmplxEvnt_32.add_attribute("PxBndryPrcsn", "21460486.230000"); // 3
        CmplxEvnt_32_set.insert("21460486.230000");
        CmplxEvnt_32.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_32_set.insert("2");
        CmplxEvnt_32.add_attribute("Cond", "2"); // 3
        CmplxEvnt_32_set.insert("2");
        all_values.push_back(CmplxEvnt_32_set);
        all_compo_names.insert("CmplxEvnt_32_set");

        {
          xml_element EvntDts_32{"EvntDts"};
          multiset<string> EvntDts_32_set;
          EvntDts_32.add_attribute("StartDt", "ComplexEventStartDate_t_1287753800"); // 4
          EvntDts_32_set.insert("ComplexEventStartDate_t_1287753800");
          EvntDts_32.add_attribute("EndDt", "ComplexEventEndDate_t_1859473429"); // 4
          EvntDts_32_set.insert("ComplexEventEndDate_t_1859473429");
          all_values.push_back(EvntDts_32_set);
          all_compo_names.insert("EvntDts_32_set");

          {
            xml_element EvntTms_32{"EvntTms"};
            multiset<string> EvntTms_32_set;
            EvntTms_32.add_attribute("StartTm", "2026893269"); // 5
            EvntTms_32_set.insert("2026893269");
            EvntTms_32.add_attribute("EndTm", "1464148453"); // 5
            EvntTms_32_set.insert("1464148453");
            all_values.push_back(EvntTms_32_set);
            all_compo_names.insert("EvntTms_32_set");

            EvntDts_32.add_element(EvntTms_32);
          }
          CmplxEvnt_32.add_element(EvntDts_32);
        }
        Instrmt_32.add_element(CmplxEvnt_32);
      }
      Inc_2.add_element(Instrmt_32);
    }
    {
      xml_element Undly_45{"Undly"};
      multiset<string> Undly_45_set;
      Undly_45.add_attribute("Sym", "UnderlyingSymbol_t_1913335019"); // 2
      Undly_45_set.insert("UnderlyingSymbol_t_1913335019");
      Undly_45.add_attribute("Sfx", "CD"); // 2
      Undly_45_set.insert("CD");
      Undly_45.add_attribute("ID", "UnderlyingSecurityID_t_634457010"); // 2
      Undly_45_set.insert("UnderlyingSecurityID_t_634457010");
      Undly_45.add_attribute("Src", "2"); // 2
      Undly_45_set.insert("2");
      Undly_45.add_attribute("Prod", "7"); // 2
      Undly_45_set.insert("7");
      Undly_45.add_attribute("CFI", "UnderlyingCFICode_t_1461823723"); // 2
      Undly_45_set.insert("UnderlyingCFICode_t_1461823723");
      Undly_45.add_attribute("SecTyp", "BA"); // 2
      Undly_45_set.insert("BA");
      Undly_45.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_601023643"); // 2
      Undly_45_set.insert("UnderlyingSecuritySubType_t_601023643");
      Undly_45.add_attribute("MMY", "1672876496"); // 2
      Undly_45_set.insert("1672876496");
      Undly_45.add_attribute("Mat", "UnderlyingMaturityDate_t_1853871545"); // 2
      Undly_45_set.insert("UnderlyingMaturityDate_t_1853871545");
      Undly_45.add_attribute("MatTm", "487537311"); // 2
      Undly_45_set.insert("487537311");
      Undly_45.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1114090691"); // 2
      Undly_45_set.insert("UnderlyingCouponPaymentDate_t_1114090691");
      Undly_45.add_attribute("RestrctTyp", "XR"); // 2
      Undly_45_set.insert("XR");
      Undly_45.add_attribute("Snrty", "SR"); // 2
      Undly_45_set.insert("SR");
      Undly_45.add_attribute("NotlPctOut", "256943.610000"); // 2
      Undly_45_set.insert("256943.610000");
      Undly_45.add_attribute("OrigNotlPctOut", "18593669.910000"); // 2
      Undly_45_set.insert("18593669.910000");
      Undly_45.add_attribute("AttchPnt", "18794734.040000"); // 2
      Undly_45_set.insert("18794734.040000");
      Undly_45.add_attribute("DetchPnt", "3238118.750000"); // 2
      Undly_45_set.insert("3238118.750000");
      Undly_45.add_attribute("Issued", "UnderlyingIssueDate_t_153818245"); // 2
      Undly_45_set.insert("UnderlyingIssueDate_t_153818245");
      Undly_45.add_attribute("RepoCollSecTyp", "209502277"); // 2
      Undly_45_set.insert("209502277");
      Undly_45.add_attribute("RepoTrm", "659194267"); // 2
      Undly_45_set.insert("659194267");
      Undly_45.add_attribute("RepoRt", "19184704.650000"); // 2
      Undly_45_set.insert("19184704.650000");
      Undly_45.add_attribute("Fctr", "13182827.340000"); // 2
      Undly_45_set.insert("13182827.340000");
      Undly_45.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1062547946"); // 2
      Undly_45_set.insert("UnderlyingCreditRating_t_1062547946");
      Undly_45.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1917035440"); // 2
      Undly_45_set.insert("UnderlyingInstrRegistry_t_1917035440");
      Undly_45.add_attribute("Ctry", "1278482258"); // 2
      Undly_45_set.insert("1278482258");
      Undly_45.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_141179820"); // 2
      Undly_45_set.insert("UnderlyingStateOrProvinceOfIssue_t_141179820");
      Undly_45.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1057305593"); // 2
      Undly_45_set.insert("UnderlyingLocaleOfIssue_t_1057305593");
      Undly_45.add_attribute("Redeem", "UnderlyingRedemptionDate_t_990472039"); // 2
      Undly_45_set.insert("UnderlyingRedemptionDate_t_990472039");
      Undly_45.add_attribute("StrkPx", "205894.410000"); // 2
      Undly_45_set.insert("205894.410000");
      Undly_45.add_attribute("StrkCcy", "JPY"); // 2
      Undly_45_set.insert("JPY");
      Undly_45.add_attribute("OptA", "1312019961"); // 2
      Undly_45_set.insert("1312019961");
      Undly_45.add_attribute("Mult", "10084274.090000"); // 2
      Undly_45_set.insert("10084274.090000");
      Undly_45.add_attribute("MultTyp", "1"); // 2
      Undly_45_set.insert("1");
      Undly_45.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_45_set.insert("0");
      Undly_45.add_attribute("UOM", "MWh"); // 2
      Undly_45_set.insert("MWh");
      Undly_45.add_attribute("UOMQty", "13877430.620000"); // 2
      Undly_45_set.insert("13877430.620000");
      Undly_45.add_attribute("PxUOM", "t"); // 2
      Undly_45_set.insert("t");
      Undly_45.add_attribute("PxUOMQty", "19956439.800000"); // 2
      Undly_45_set.insert("19956439.800000");
      Undly_45.add_attribute("TmUnit", "Mo"); // 2
      Undly_45_set.insert("Mo");
      Undly_45.add_attribute("ExerStyle", "1"); // 2
      Undly_45_set.insert("1");
      Undly_45.add_attribute("CpnRt", "9622510.230000"); // 2
      Undly_45_set.insert("9622510.230000");
      Undly_45.add_attribute("Exch", "UnderlyingSecurityExchange_t_57294511"); // 2
      Undly_45_set.insert("UnderlyingSecurityExchange_t_57294511");
      Undly_45.add_attribute("Issr", "UnderlyingIssuer_t_841674822"); // 2
      Undly_45_set.insert("UnderlyingIssuer_t_841674822");
      Undly_45.add_attribute("EncUndIssrLen", "987945384"); // 2
      Undly_45_set.insert("987945384");
      Undly_45.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1916661502"); // 2
      Undly_45_set.insert("EncodedUnderlyingIssuer_t_1916661502");
      Undly_45.add_attribute("Desc", "UnderlyingSecurityDesc_t_573664578"); // 2
      Undly_45_set.insert("UnderlyingSecurityDesc_t_573664578");
      Undly_45.add_attribute("EncUndSecDescLen", "1311757260"); // 2
      Undly_45_set.insert("1311757260");
      Undly_45.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2070479747"); // 2
      Undly_45_set.insert("EncodedUnderlyingSecurityDesc_t_2070479747");
      Undly_45.add_attribute("CPPgm", "UnderlyingCPProgram_t_783166855"); // 2
      Undly_45_set.insert("UnderlyingCPProgram_t_783166855");
      Undly_45.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1970951527"); // 2
      Undly_45_set.insert("UnderlyingCPRegType_t_1970951527");
      Undly_45.add_attribute("AllocPct", "18414665.640000"); // 2
      Undly_45_set.insert("18414665.640000");
      Undly_45.add_attribute("Ccy", "EUR"); // 2
      Undly_45_set.insert("EUR");
      Undly_45.add_attribute("Qty", "16110183.560000"); // 2
      Undly_45_set.insert("16110183.560000");
      Undly_45.add_attribute("SettlTyp", "4"); // 2
      Undly_45_set.insert("4");
      Undly_45.add_attribute("CashAmt", "UnderlyingCashAmount_t_1027195645"); // 2
      Undly_45_set.insert("UnderlyingCashAmount_t_1027195645");
      Undly_45.add_attribute("CashTyp", "DIFF"); // 2
      Undly_45_set.insert("DIFF");
      Undly_45.add_attribute("Px", "754365.900000"); // 2
      Undly_45_set.insert("754365.900000");
      Undly_45.add_attribute("DirtPx", "10477850.860000"); // 2
      Undly_45_set.insert("10477850.860000");
      Undly_45.add_attribute("EndPx", "8948107.000000"); // 2
      Undly_45_set.insert("8948107.000000");
      Undly_45.add_attribute("StartVal", "UnderlyingStartValue_t_831760000"); // 2
      Undly_45_set.insert("UnderlyingStartValue_t_831760000");
      Undly_45.add_attribute("CurVal", "UnderlyingCurrentValue_t_212321400"); // 2
      Undly_45_set.insert("UnderlyingCurrentValue_t_212321400");
      Undly_45.add_attribute("EndVal", "UnderlyingEndValue_t_1903238109"); // 2
      Undly_45_set.insert("UnderlyingEndValue_t_1903238109");
      Undly_45.add_attribute("AdjQty", "5220804.930000"); // 2
      Undly_45_set.insert("5220804.930000");
      Undly_45.add_attribute("FxRate", "356287.970000"); // 2
      Undly_45_set.insert("356287.970000");
      Undly_45.add_attribute("FxRateCalc", "D"); // 2
      Undly_45_set.insert("D");
      Undly_45.add_attribute("CapValu", "UnderlyingCapValue_t_1909823556"); // 2
      Undly_45_set.insert("UnderlyingCapValue_t_1909823556");
      Undly_45.add_attribute("SetMeth", "UnderlyingSettlMethod_t_459959838"); // 2
      Undly_45_set.insert("UnderlyingSettlMethod_t_459959838");
      Undly_45.add_attribute("PutCall", "2074165925"); // 2
      Undly_45_set.insert("2074165925");
      all_values.push_back(Undly_45_set);
      all_compo_names.insert("Undly_45_set");

      {
        xml_element UndAID_45{"UndAID"};
        multiset<string> UndAID_45_set;
        UndAID_45.add_attribute("AltID", "UnderlyingSecurityAltID_t_856470867"); // 3
        UndAID_45_set.insert("UnderlyingSecurityAltID_t_856470867");
        UndAID_45.add_attribute("AltIDSrc", "J"); // 3
        UndAID_45_set.insert("J");
        all_values.push_back(UndAID_45_set);
        all_compo_names.insert("UndAID_45_set");

        Undly_45.add_element(UndAID_45);
      }
      {
        xml_element Stip_69{"Stip"};
        multiset<string> Stip_69_set;
        Stip_69.add_attribute("Typ", "LOTVAR"); // 3
        Stip_69_set.insert("LOTVAR");
        Stip_69.add_attribute("Val", "UnderlyingStipValue_t_913765378"); // 3
        Stip_69_set.insert("UnderlyingStipValue_t_913765378");
        all_values.push_back(Stip_69_set);
        all_compo_names.insert("Stip_69_set");

        Undly_45.add_element(Stip_69);
      }
      {
        xml_element Pty_188{"Pty"};
        multiset<string> Pty_188_set;
        Pty_188.add_attribute("ID", "UnderlyingInstrumentPartyID_t_66019364"); // 3
        Pty_188_set.insert("UnderlyingInstrumentPartyID_t_66019364");
        Pty_188.add_attribute("Src", "2"); // 3
        Pty_188_set.insert("2");
        Pty_188.add_attribute("R", "51"); // 3
        Pty_188_set.insert("51");
        all_values.push_back(Pty_188_set);
        all_compo_names.insert("Pty_188_set");

        {
          xml_element Sub_188{"Sub"};
          multiset<string> Sub_188_set;
          Sub_188.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_639683942"); // 4
          Sub_188_set.insert("UnderlyingInstrumentPartySubID_t_639683942");
          Sub_188.add_attribute("Typ", "4"); // 4
          Sub_188_set.insert("4");
          all_values.push_back(Sub_188_set);
          all_compo_names.insert("Sub_188_set");

          Pty_188.add_element(Sub_188);
        }
        Undly_45.add_element(Pty_188);
      }
      Inc_2.add_element(Undly_45);
    }
    {
      xml_element Leg_43{"Leg"};
      multiset<string> Leg_43_set;
      Leg_43.add_attribute("Sym", "LegSymbol_t_605939331"); // 2
      Leg_43_set.insert("LegSymbol_t_605939331");
      Leg_43.add_attribute("Sfx", "CD"); // 2
      Leg_43_set.insert("CD");
      Leg_43.add_attribute("ID", "LegSecurityID_t_864620176"); // 2
      Leg_43_set.insert("LegSecurityID_t_864620176");
      Leg_43.add_attribute("Src", "A"); // 2
      Leg_43_set.insert("A");
      Leg_43.add_attribute("Prod", "9"); // 2
      Leg_43_set.insert("9");
      Leg_43.add_attribute("CFI", "LegCFICode_t_1750636001"); // 2
      Leg_43_set.insert("LegCFICode_t_1750636001");
      Leg_43.add_attribute("SecTyp", "CMB"); // 2
      Leg_43_set.insert("CMB");
      Leg_43.add_attribute("SecSubTyp", "LegSecuritySubType_t_461781291"); // 2
      Leg_43_set.insert("LegSecuritySubType_t_461781291");
      Leg_43.add_attribute("MMY", "630347999"); // 2
      Leg_43_set.insert("630347999");
      Leg_43.add_attribute("Mat", "LegMaturityDate_t_284297257"); // 2
      Leg_43_set.insert("LegMaturityDate_t_284297257");
      Leg_43.add_attribute("MatTm", "537217881"); // 2
      Leg_43_set.insert("537217881");
      Leg_43.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1678133085"); // 2
      Leg_43_set.insert("LegCouponPaymentDate_t_1678133085");
      Leg_43.add_attribute("Issued", "LegIssueDate_t_1179107957"); // 2
      Leg_43_set.insert("LegIssueDate_t_1179107957");
      Leg_43.add_attribute("RepoCollSecTyp", "1368977882"); // 2
      Leg_43_set.insert("1368977882");
      Leg_43.add_attribute("RepoTrm", "1890454485"); // 2
      Leg_43_set.insert("1890454485");
      Leg_43.add_attribute("RepoRt", "9348624.180000"); // 2
      Leg_43_set.insert("9348624.180000");
      Leg_43.add_attribute("Fctr", "18910583.750000"); // 2
      Leg_43_set.insert("18910583.750000");
      Leg_43.add_attribute("CrdRtg", "LegCreditRating_t_1926083283"); // 2
      Leg_43_set.insert("LegCreditRating_t_1926083283");
      Leg_43.add_attribute("Rgstry", "LegInstrRegistry_t_1013384363"); // 2
      Leg_43_set.insert("LegInstrRegistry_t_1013384363");
      Leg_43.add_attribute("Ctry", "1653398283"); // 2
      Leg_43_set.insert("1653398283");
      Leg_43.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_238559473"); // 2
      Leg_43_set.insert("LegStateOrProvinceOfIssue_t_238559473");
      Leg_43.add_attribute("Lcl", "LegLocaleOfIssue_t_940066640"); // 2
      Leg_43_set.insert("LegLocaleOfIssue_t_940066640");
      Leg_43.add_attribute("Redeem", "LegRedemptionDate_t_362385503"); // 2
      Leg_43_set.insert("LegRedemptionDate_t_362385503");
      Leg_43.add_attribute("Strk", "16103876.640000"); // 2
      Leg_43_set.insert("16103876.640000");
      Leg_43.add_attribute("StrkCcy", "CHF"); // 2
      Leg_43_set.insert("CHF");
      Leg_43.add_attribute("OptA", "1676407028"); // 2
      Leg_43_set.insert("1676407028");
      Leg_43.add_attribute("Cmult", "15583949.780000"); // 2
      Leg_43_set.insert("15583949.780000");
      Leg_43.add_attribute("MultTyp", "1"); // 2
      Leg_43_set.insert("1");
      Leg_43.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_43_set.insert("3");
      Leg_43.add_attribute("UOM", "Bbl"); // 2
      Leg_43_set.insert("Bbl");
      Leg_43.add_attribute("UOMQty", "4175497.970000"); // 2
      Leg_43_set.insert("4175497.970000");
      Leg_43.add_attribute("PxUOM", "MMbbl"); // 2
      Leg_43_set.insert("MMbbl");
      Leg_43.add_attribute("PxUOMQty", "13166838.030000"); // 2
      Leg_43_set.insert("13166838.030000");
      Leg_43.add_attribute("TmUnit", "D"); // 2
      Leg_43_set.insert("D");
      Leg_43.add_attribute("ExerStyle", "2"); // 2
      Leg_43_set.insert("2");
      Leg_43.add_attribute("CpnRt", "9198361.560000"); // 2
      Leg_43_set.insert("9198361.560000");
      Leg_43.add_attribute("Exch", "LegSecurityExchange_t_480929001"); // 2
      Leg_43_set.insert("LegSecurityExchange_t_480929001");
      Leg_43.add_attribute("Issr", "LegIssuer_t_1282572503"); // 2
      Leg_43_set.insert("LegIssuer_t_1282572503");
      Leg_43.add_attribute("EncLegIssrLen", "1550184155"); // 2
      Leg_43_set.insert("1550184155");
      Leg_43.add_attribute("EncLegIssr", "EncodedLegIssuer_t_765226258"); // 2
      Leg_43_set.insert("EncodedLegIssuer_t_765226258");
      Leg_43.add_attribute("Desc", "LegSecurityDesc_t_1819790385"); // 2
      Leg_43_set.insert("LegSecurityDesc_t_1819790385");
      Leg_43.add_attribute("EncLegSecDescLen", "1080833593"); // 2
      Leg_43_set.insert("1080833593");
      Leg_43.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1944334216"); // 2
      Leg_43_set.insert("EncodedLegSecurityDesc_t_1944334216");
      Leg_43.add_attribute("RatioQty", "10412846.190000"); // 2
      Leg_43_set.insert("10412846.190000");
      Leg_43.add_attribute("Side", "F"); // 2
      Leg_43_set.insert("F");
      Leg_43.add_attribute("Ccy", "USD"); // 2
      Leg_43_set.insert("USD");
      Leg_43.add_attribute("Pool", "LegPool_t_602404065"); // 2
      Leg_43_set.insert("LegPool_t_602404065");
      Leg_43.add_attribute("Dated", "LegDatedDate_t_1745097350"); // 2
      Leg_43_set.insert("LegDatedDate_t_1745097350");
      Leg_43.add_attribute("CSetMo", "290773982"); // 2
      Leg_43_set.insert("290773982");
      Leg_43.add_attribute("IntAcrl", "LegInterestAccrualDate_t_840963539"); // 2
      Leg_43_set.insert("LegInterestAccrualDate_t_840963539");
      Leg_43.add_attribute("PutCall", "537680342"); // 2
      Leg_43_set.insert("537680342");
      Leg_43.add_attribute("LegOptionRatio", "6531594.850000"); // 2
      Leg_43_set.insert("6531594.850000");
      Leg_43.add_attribute("Px", "3038675.550000"); // 2
      Leg_43_set.insert("3038675.550000");
      all_values.push_back(Leg_43_set);
      all_compo_names.insert("Leg_43_set");

      {
        xml_element LegAID_43{"LegAID"};
        multiset<string> LegAID_43_set;
        LegAID_43.add_attribute("SecAltID", "LegSecurityAltID_t_219196635"); // 3
        LegAID_43_set.insert("LegSecurityAltID_t_219196635");
        LegAID_43.add_attribute("SecAltIDSrc", "H"); // 3
        LegAID_43_set.insert("H");
        all_values.push_back(LegAID_43_set);
        all_compo_names.insert("LegAID_43_set");

        Leg_43.add_element(LegAID_43);
      }
      Inc_2.add_element(Leg_43);
    }
    {
      xml_element Yield_9{"Yield"};
      multiset<string> Yield_9_set;
      Yield_9.add_attribute("Typ", "AVGMATURITY"); // 2
      Yield_9_set.insert("AVGMATURITY");
      Yield_9.add_attribute("Yld", "17775916.130000"); // 2
      Yield_9_set.insert("17775916.130000");
      Yield_9.add_attribute("CalcDt", "YieldCalcDate_t_1740920832"); // 2
      Yield_9_set.insert("YieldCalcDate_t_1740920832");
      Yield_9.add_attribute("RedDt", "YieldRedemptionDate_t_1398258"); // 2
      Yield_9_set.insert("YieldRedemptionDate_t_1398258");
      Yield_9.add_attribute("RedPx", "821715.920000"); // 2
      Yield_9_set.insert("821715.920000");
      Yield_9.add_attribute("RedPxTyp", "18"); // 2
      Yield_9_set.insert("18");
      all_values.push_back(Yield_9_set);
      all_compo_names.insert("Yield_9_set");

      Inc_2.add_element(Yield_9);
    }
    {
      xml_element SprdBnchmkCurve_14{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_14_set;
      SprdBnchmkCurve_14.add_attribute("Spread", "15928563.790000"); // 2
      SprdBnchmkCurve_14_set.insert("15928563.790000");
      SprdBnchmkCurve_14.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_14_set.insert("CAN");
      SprdBnchmkCurve_14.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_14_set.insert("Pfandbriefe");
      SprdBnchmkCurve_14.add_attribute("Point", "BenchmarkCurvePoint_t_171207904"); // 2
      SprdBnchmkCurve_14_set.insert("BenchmarkCurvePoint_t_171207904");
      SprdBnchmkCurve_14.add_attribute("Px", "12093880.280000"); // 2
      SprdBnchmkCurve_14_set.insert("12093880.280000");
      SprdBnchmkCurve_14.add_attribute("PxTyp", "15"); // 2
      SprdBnchmkCurve_14_set.insert("15");
      SprdBnchmkCurve_14.add_attribute("SecID", "BenchmarkSecurityID_t_1721392059"); // 2
      SprdBnchmkCurve_14_set.insert("BenchmarkSecurityID_t_1721392059");
      SprdBnchmkCurve_14.add_attribute("SecIDSrc", "J"); // 2
      SprdBnchmkCurve_14_set.insert("J");
      all_values.push_back(SprdBnchmkCurve_14_set);
      all_compo_names.insert("SprdBnchmkCurve_14_set");

      Inc_2.add_element(SprdBnchmkCurve_14);
    }
    {
      xml_element RtSrc_9{"RtSrc"};
      multiset<string> RtSrc_9_set;
      RtSrc_9.add_attribute("RtSrc", "0"); // 2
      RtSrc_9_set.insert("0");
      RtSrc_9.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_9_set.insert("0");
      RtSrc_9.add_attribute("RefPg", "ReferencePage_t_1771464854"); // 2
      RtSrc_9_set.insert("ReferencePage_t_1771464854");
      all_values.push_back(RtSrc_9_set);
      all_compo_names.insert("RtSrc_9_set");

      Inc_2.add_element(RtSrc_9);
    }
    {
      xml_element SecSizesGrp_2{"SecSizesGrp"};
      multiset<string> SecSizesGrp_2_set;
      SecSizesGrp_2.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_2_set.insert("1");
      SecSizesGrp_2.add_attribute("MDSecSize", "14785464.350000"); // 2
      SecSizesGrp_2_set.insert("14785464.350000");
      all_values.push_back(SecSizesGrp_2_set);
      all_compo_names.insert("SecSizesGrp_2_set");

      Inc_2.add_element(SecSizesGrp_2);
    }
    {
      xml_element StatsIndGrp_2{"StatsIndGrp"};
      multiset<string> StatsIndGrp_2_set;
      StatsIndGrp_2.add_attribute("StatsTyp", "2"); // 2
      StatsIndGrp_2_set.insert("2");
      all_values.push_back(StatsIndGrp_2_set);
      all_compo_names.insert("StatsIndGrp_2_set");

      Inc_2.add_element(StatsIndGrp_2);
    }
    {
      xml_element Pty_189{"Pty"};
      multiset<string> Pty_189_set;
      Pty_189.add_attribute("ID", "PartyID_t_899703502"); // 2
      Pty_189_set.insert("PartyID_t_899703502");
      Pty_189.add_attribute("Src", "3"); // 2
      Pty_189_set.insert("3");
      Pty_189.add_attribute("R", "2"); // 2
      Pty_189_set.insert("2");
      all_values.push_back(Pty_189_set);
      all_compo_names.insert("Pty_189_set");

      {
        xml_element Sub_189{"Sub"};
        multiset<string> Sub_189_set;
        Sub_189.add_attribute("ID", "PartySubID_t_1190477484"); // 3
        Sub_189_set.insert("PartySubID_t_1190477484");
        Sub_189.add_attribute("Typ", "4"); // 3
        Sub_189_set.insert("4");
        all_values.push_back(Sub_189_set);
        all_compo_names.insert("Sub_189_set");

        Pty_189.add_element(Sub_189);
      }
      Inc_2.add_element(Pty_189);
    }
    elt.add_element(Inc_2);
  } // end Inc
  { // Rtg
    xml_element Rtg_4{"Rtg"};
    multiset<string> Rtg_4_set;
    Rtg_4.add_attribute("RtgTyp", "2"); // 1
    Rtg_4_set.insert("2");
    Rtg_4.add_attribute("RtgID", "RoutingID_t_1078297946"); // 1
    Rtg_4_set.insert("RoutingID_t_1078297946");
    all_values.push_back(Rtg_4_set);
    all_compo_names.insert("Rtg_4_set");

    elt.add_element(Rtg_4);
  } // end Rtg
  { // Rtg
    xml_element Rtg_5{"Rtg"};
    multiset<string> Rtg_5_set;
    Rtg_5.add_attribute("RtgTyp", "2"); // 1
    Rtg_5_set.insert("2");
    Rtg_5.add_attribute("RtgID", "RoutingID_t_1625463687"); // 1
    Rtg_5_set.insert("RoutingID_t_1625463687");
    all_values.push_back(Rtg_5_set);
    all_compo_names.insert("Rtg_5_set");

    elt.add_element(Rtg_5);
  } // end Rtg
  { // Rtg
    xml_element Rtg_6{"Rtg"};
    multiset<string> Rtg_6_set;
    Rtg_6.add_attribute("RtgTyp", "3"); // 1
    Rtg_6_set.insert("3");
    Rtg_6.add_attribute("RtgID", "RoutingID_t_340292838"); // 1
    Rtg_6_set.insert("RoutingID_t_340292838");
    all_values.push_back(Rtg_6_set);
    all_compo_names.insert("Rtg_6_set");

    elt.add_element(Rtg_6);
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
  to_list(fix_msg, quickfix_dico, fix_s, fix_ls);
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
