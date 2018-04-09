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
  elt.add_attribute("MDBkTyp", "3"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("3");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_78049141"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("MDFeedType_t_78049141");
  elt.add_attribute("TrdDt", "TradeDate_t_473284840"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("TradeDate_t_473284840");
  elt.add_attribute("ReqID", "MDReqID_t_1042536014"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("MDReqID_t_1042536014");
  elt.add_attribute("ApplQuDepth", "951236843"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("951236843");
  elt.add_attribute("ApplQuResolution", "3"); // 0
  MarketDataIncrementalRefresh_message_t_0.insert("3");
  all_values.push_back(MarketDataIncrementalRefresh_message_t_0);
  all_compo_names.insert("MarketDataIncrementalRefresh_message_t");

  { // Hdr
    xml_element Hdr_39{"Hdr"};
    multiset<string> Hdr_39_set;
    Hdr_39.add_attribute("SeqNum", "621644806"); // 1
    Hdr_39_set.insert("621644806");
    Hdr_39.add_attribute("SID", "SenderCompID_t_869758317"); // 1
    Hdr_39_set.insert("SenderCompID_t_869758317");
    Hdr_39.add_attribute("TID", "TargetCompID_t_1577928372"); // 1
    Hdr_39_set.insert("TargetCompID_t_1577928372");
    Hdr_39.add_attribute("OBID", "OnBehalfOfCompID_t_277109000"); // 1
    Hdr_39_set.insert("OnBehalfOfCompID_t_277109000");
    Hdr_39.add_attribute("D2ID", "DeliverToCompID_t_409496682"); // 1
    Hdr_39_set.insert("DeliverToCompID_t_409496682");
    Hdr_39.add_attribute("SSub", "SenderSubID_t_653231716"); // 1
    Hdr_39_set.insert("SenderSubID_t_653231716");
    Hdr_39.add_attribute("SLoc", "SenderLocationID_t_1972326508"); // 1
    Hdr_39_set.insert("SenderLocationID_t_1972326508");
    Hdr_39.add_attribute("TSub", "TargetSubID_t_756446882"); // 1
    Hdr_39_set.insert("TargetSubID_t_756446882");
    Hdr_39.add_attribute("TLoc", "TargetLocationID_t_428182537"); // 1
    Hdr_39_set.insert("TargetLocationID_t_428182537");
    Hdr_39.add_attribute("OBSub", "OnBehalfOfSubID_t_869996049"); // 1
    Hdr_39_set.insert("OnBehalfOfSubID_t_869996049");
    Hdr_39.add_attribute("OBLoc", "OnBehalfOfLocationID_t_284191777"); // 1
    Hdr_39_set.insert("OnBehalfOfLocationID_t_284191777");
    Hdr_39.add_attribute("D2Sub", "DeliverToSubID_t_1817049056"); // 1
    Hdr_39_set.insert("DeliverToSubID_t_1817049056");
    Hdr_39.add_attribute("D2Loc", "DeliverToLocationID_t_543001472"); // 1
    Hdr_39_set.insert("DeliverToLocationID_t_543001472");
    Hdr_39.add_attribute("PosDup", "Y"); // 1
    Hdr_39_set.insert("Y");
    Hdr_39.add_attribute("PosRsnd", "N"); // 1
    Hdr_39_set.insert("N");
    Hdr_39.add_attribute("Snt", "SendingTime_t_677667828"); // 1
    Hdr_39_set.insert("SendingTime_t_677667828");
    Hdr_39.add_attribute("OrigSnt", "OrigSendingTime_t_237886971"); // 1
    Hdr_39_set.insert("OrigSendingTime_t_237886971");
    Hdr_39.add_attribute("MsgEncd", "MessageEncoding_t_560819923"); // 1
    Hdr_39_set.insert("MessageEncoding_t_560819923");
    all_values.push_back(Hdr_39_set);
    all_compo_names.insert("Hdr_39_set");

    {
      xml_element Hop_39{"Hop"};
      multiset<string> Hop_39_set;
      Hop_39.add_attribute("ID", "HopCompID_t_2096266599"); // 2
      Hop_39_set.insert("HopCompID_t_2096266599");
      Hop_39.add_attribute("Ref", "1896178378"); // 2
      Hop_39_set.insert("1896178378");
      Hop_39.add_attribute("Snt", "HopSendingTime_t_1062941767"); // 2
      Hop_39_set.insert("HopSendingTime_t_1062941767");
      all_values.push_back(Hop_39_set);
      all_compo_names.insert("Hop_39_set");

      Hdr_39.add_element(Hop_39);
    }
    elt.add_element(Hdr_39);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_6{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_6_set;
    ApplSeqCtrl_6.add_attribute("ApplID", "ApplID_t_1644758269"); // 1
    ApplSeqCtrl_6_set.insert("ApplID_t_1644758269");
    ApplSeqCtrl_6.add_attribute("ApplSeqNum", "415318115"); // 1
    ApplSeqCtrl_6_set.insert("415318115");
    ApplSeqCtrl_6.add_attribute("ApplLastSeqNum", "936149983"); // 1
    ApplSeqCtrl_6_set.insert("936149983");
    ApplSeqCtrl_6.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_6_set.insert("false");
    all_values.push_back(ApplSeqCtrl_6_set);
    all_compo_names.insert("ApplSeqCtrl_6_set");

    elt.add_element(ApplSeqCtrl_6);
  } // end ApplSeqCtrl
  { // Inc
    xml_element Inc_0{"Inc"};
    multiset<string> Inc_0_set;
    Inc_0.add_attribute("UpdtAct", "2"); // 1
    Inc_0_set.insert("2");
    Inc_0.add_attribute("DelRsn", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("MDSubBkTyp", "1527987703"); // 1
    Inc_0_set.insert("1527987703");
    Inc_0.add_attribute("MktDepth", "1965435967"); // 1
    Inc_0_set.insert("1965435967");
    Inc_0.add_attribute("Typ", "B"); // 1
    Inc_0_set.insert("B");
    Inc_0.add_attribute("ID", "MDEntryID_t_2148861"); // 1
    Inc_0_set.insert("MDEntryID_t_2148861");
    Inc_0.add_attribute("RefID", "MDEntryRefID_t_687710637"); // 1
    Inc_0_set.insert("MDEntryRefID_t_687710637");
    Inc_0.add_attribute("MDStrmID", "MDStreamID_t_1047902595"); // 1
    Inc_0_set.insert("MDStreamID_t_1047902595");
    Inc_0.add_attribute("FinclStat", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("CorpActn", "B"); // 1
    Inc_0_set.insert("B");
    Inc_0.add_attribute("Px", "17011343.120000"); // 1
    Inc_0_set.insert("17011343.120000");
    Inc_0.add_attribute("PxTyp", "6"); // 1
    Inc_0_set.insert("6");
    Inc_0.add_attribute("OrdTyp", "J"); // 1
    Inc_0_set.insert("J");
    Inc_0.add_attribute("Ccy", "JPY"); // 1
    Inc_0_set.insert("JPY");
    Inc_0.add_attribute("SettlCcy", "CHF"); // 1
    Inc_0_set.insert("CHF");
    Inc_0.add_attribute("Sz", "15170982.420000"); // 1
    Inc_0_set.insert("15170982.420000");
    Inc_0.add_attribute("LotTyp", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("Dt", "1318400944"); // 1
    Inc_0_set.insert("1318400944");
    Inc_0.add_attribute("Tm", "47282423"); // 1
    Inc_0_set.insert("47282423");
    Inc_0.add_attribute("TickDirctn", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("Mkt", "MDMkt_t_1879220867"); // 1
    Inc_0_set.insert("MDMkt_t_1879220867");
    Inc_0.add_attribute("SesID", "3"); // 1
    Inc_0_set.insert("3");
    Inc_0.add_attribute("SesSub", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("TrdgStat", "19"); // 1
    Inc_0_set.insert("19");
    Inc_0.add_attribute("HaltRsn", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("QCond", "x"); // 1
    Inc_0_set.insert("x");
    Inc_0.add_attribute("TrdCond", "W"); // 1
    Inc_0_set.insert("W");
    Inc_0.add_attribute("TrdTyp", "26"); // 1
    Inc_0_set.insert("26");
    Inc_0.add_attribute("MtchTyp", "M6"); // 1
    Inc_0_set.insert("M6");
    Inc_0.add_attribute("Orig", "MDEntryOriginator_t_597544446"); // 1
    Inc_0_set.insert("MDEntryOriginator_t_597544446");
    Inc_0.add_attribute("LctnID", "LocationID_t_1087581258"); // 1
    Inc_0_set.insert("LocationID_t_1087581258");
    Inc_0.add_attribute("DeskID", "DeskID_t_2114440201"); // 1
    Inc_0_set.insert("DeskID_t_2114440201");
    Inc_0.add_attribute("OpenClsSettlFlag", "5"); // 1
    Inc_0_set.insert("5");
    Inc_0.add_attribute("TmInForce", "2"); // 1
    Inc_0_set.insert("2");
    Inc_0.add_attribute("ExpireDt", "ExpireDate_t_2116589062"); // 1
    Inc_0_set.insert("ExpireDate_t_2116589062");
    Inc_0.add_attribute("ExpireTm", "ExpireTime_t_1103207402"); // 1
    Inc_0_set.insert("ExpireTime_t_1103207402");
    Inc_0.add_attribute("MinQty", "16054580.770000"); // 1
    Inc_0_set.insert("16054580.770000");
    Inc_0.add_attribute("ExecInst", "M"); // 1
    Inc_0_set.insert("M");
    Inc_0.add_attribute("SellerDays", "52931074"); // 1
    Inc_0_set.insert("52931074");
    Inc_0.add_attribute("OrdID", "OrderID_t_1159108741"); // 1
    Inc_0_set.insert("OrderID_t_1159108741");
    Inc_0.add_attribute("OrdID2", "SecondaryOrderID_t_352463996"); // 1
    Inc_0_set.insert("SecondaryOrderID_t_352463996");
    Inc_0.add_attribute("EntryID", "QuoteEntryID_t_1906585276"); // 1
    Inc_0_set.insert("QuoteEntryID_t_1906585276");
    Inc_0.add_attribute("TrdID", "TradeID_t_1140941942"); // 1
    Inc_0_set.insert("TradeID_t_1140941942");
    Inc_0.add_attribute("Buyer", "MDEntryBuyer_t_1326560766"); // 1
    Inc_0_set.insert("MDEntryBuyer_t_1326560766");
    Inc_0.add_attribute("Seller", "MDEntrySeller_t_1896947607"); // 1
    Inc_0_set.insert("MDEntrySeller_t_1896947607");
    Inc_0.add_attribute("NumOfOrds", "792340552"); // 1
    Inc_0_set.insert("792340552");
    Inc_0.add_attribute("PosNo", "696175361"); // 1
    Inc_0_set.insert("696175361");
    Inc_0.add_attribute("Scope", "1"); // 1
    Inc_0_set.insert("1");
    Inc_0.add_attribute("PxDelta", "21107414.960000"); // 1
    Inc_0_set.insert("21107414.960000");
    Inc_0.add_attribute("NetChgPrevDay", "7434577.840000"); // 1
    Inc_0_set.insert("7434577.840000");
    Inc_0.add_attribute("Txt", "Text_t_1533036563"); // 1
    Inc_0_set.insert("Text_t_1533036563");
    Inc_0.add_attribute("EncTxtLen", "1842478715"); // 1
    Inc_0_set.insert("1842478715");
    Inc_0.add_attribute("EncTxt", "EncodedText_t_739523158"); // 1
    Inc_0_set.insert("EncodedText_t_739523158");
    Inc_0.add_attribute("MDPxLvl", "1218719257"); // 1
    Inc_0_set.insert("1218719257");
    Inc_0.add_attribute("Cpcty", "I"); // 1
    Inc_0_set.insert("I");
    Inc_0.add_attribute("MDOrigTyp", "0"); // 1
    Inc_0_set.insert("0");
    Inc_0.add_attribute("HighPx", "13197200.670000"); // 1
    Inc_0_set.insert("13197200.670000");
    Inc_0.add_attribute("LowPx", "730193.750000"); // 1
    Inc_0_set.insert("730193.750000");
    Inc_0.add_attribute("FirstPx", "13604231.830000"); // 1
    Inc_0_set.insert("13604231.830000");
    Inc_0.add_attribute("LastPx", "19061725.650000"); // 1
    Inc_0_set.insert("19061725.650000");
    Inc_0.add_attribute("TrdVol", "6705638.210000"); // 1
    Inc_0_set.insert("6705638.210000");
    Inc_0.add_attribute("SettlTyp", "6"); // 1
    Inc_0_set.insert("6");
    Inc_0.add_attribute("SettlDt", "SettlDate_t_1873129118"); // 1
    Inc_0_set.insert("SettlDate_t_1873129118");
    Inc_0.add_attribute("TransBkdTm", "TransBkdTime_t_1086060587"); // 1
    Inc_0_set.insert("TransBkdTime_t_1086060587");
    Inc_0.add_attribute("TxnTm", "TransactTime_t_858076276"); // 1
    Inc_0_set.insert("TransactTime_t_858076276");
    Inc_0.add_attribute("MDQteTyp", "2"); // 1
    Inc_0_set.insert("2");
    Inc_0.add_attribute("RptSeq", "41784341"); // 1
    Inc_0_set.insert("41784341");
    Inc_0.add_attribute("DealingCpcty", "A"); // 1
    Inc_0_set.insert("A");
    Inc_0.add_attribute("MDEntrySpotRt", "20905978.070000"); // 1
    Inc_0_set.insert("20905978.070000");
    Inc_0.add_attribute("MDEntryFwdPnts", "947154.150000"); // 1
    Inc_0_set.insert("947154.150000");
    all_values.push_back(Inc_0_set);
    all_compo_names.insert("Inc_0_set");

    {
      xml_element Instrmt_29{"Instrmt"};
      multiset<string> Instrmt_29_set;
      Instrmt_29.add_attribute("Sym", "Symbol_t_1475159447"); // 2
      Instrmt_29_set.insert("Symbol_t_1475159447");
      Instrmt_29.add_attribute("Sfx", "WI"); // 2
      Instrmt_29_set.insert("WI");
      Instrmt_29.add_attribute("ID", "SecurityID_t_2001300691"); // 2
      Instrmt_29_set.insert("SecurityID_t_2001300691");
      Instrmt_29.add_attribute("Src", "A"); // 2
      Instrmt_29_set.insert("A");
      Instrmt_29.add_attribute("Prod", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("ProdCmplx", "ProductComplex_t_1750764651"); // 2
      Instrmt_29_set.insert("ProductComplex_t_1750764651");
      Instrmt_29.add_attribute("SecGrp", "SecurityGroup_t_1260958293"); // 2
      Instrmt_29_set.insert("SecurityGroup_t_1260958293");
      Instrmt_29.add_attribute("CFI", "CFICode_t_170830634"); // 2
      Instrmt_29_set.insert("CFICode_t_170830634");
      Instrmt_29.add_attribute("SecTyp", "DUAL"); // 2
      Instrmt_29_set.insert("DUAL");
      Instrmt_29.add_attribute("SubTyp", "SecuritySubType_t_1224216141"); // 2
      Instrmt_29_set.insert("SecuritySubType_t_1224216141");
      Instrmt_29.add_attribute("MMY", "914288418"); // 2
      Instrmt_29_set.insert("914288418");
      Instrmt_29.add_attribute("MatDt", "MaturityDate_t_584882518"); // 2
      Instrmt_29_set.insert("MaturityDate_t_584882518");
      Instrmt_29.add_attribute("MatTm", "919211209"); // 2
      Instrmt_29_set.insert("919211209");
      Instrmt_29.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1653811576"); // 2
      Instrmt_29_set.insert("SettleOnOpenFlag_t_1653811576");
      Instrmt_29.add_attribute("AsgnMeth", "1803601776"); // 2
      Instrmt_29_set.insert("1803601776");
      Instrmt_29.add_attribute("Status", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("CpnPmt", "CouponPaymentDate_t_1886674729"); // 2
      Instrmt_29_set.insert("CouponPaymentDate_t_1886674729");
      Instrmt_29.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_29_set.insert("XR");
      Instrmt_29.add_attribute("Snrty", "SB"); // 2
      Instrmt_29_set.insert("SB");
      Instrmt_29.add_attribute("NotlPctOut", "10996142.650000"); // 2
      Instrmt_29_set.insert("10996142.650000");
      Instrmt_29.add_attribute("OrigNotlPctOut", "7345271.120000"); // 2
      Instrmt_29_set.insert("7345271.120000");
      Instrmt_29.add_attribute("AttchPnt", "49848.120000"); // 2
      Instrmt_29_set.insert("49848.120000");
      Instrmt_29.add_attribute("DetchPnt", "14001350.590000"); // 2
      Instrmt_29_set.insert("14001350.590000");
      Instrmt_29.add_attribute("Issued", "IssueDate_t_460172582"); // 2
      Instrmt_29_set.insert("IssueDate_t_460172582");
      Instrmt_29.add_attribute("RepoCollSecTyp", "1091045399"); // 2
      Instrmt_29_set.insert("1091045399");
      Instrmt_29.add_attribute("RepoTrm", "110727687"); // 2
      Instrmt_29_set.insert("110727687");
      Instrmt_29.add_attribute("RepoRt", "1549234.660000"); // 2
      Instrmt_29_set.insert("1549234.660000");
      Instrmt_29.add_attribute("Fctr", "11328297.400000"); // 2
      Instrmt_29_set.insert("11328297.400000");
      Instrmt_29.add_attribute("CrdRtg", "CreditRating_t_426778392"); // 2
      Instrmt_29_set.insert("CreditRating_t_426778392");
      Instrmt_29.add_attribute("Rgstry", "InstrRegistry_t_98037625"); // 2
      Instrmt_29_set.insert("InstrRegistry_t_98037625");
      Instrmt_29.add_attribute("IssuCtry", "1227545156"); // 2
      Instrmt_29_set.insert("1227545156");
      Instrmt_29.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1901937839"); // 2
      Instrmt_29_set.insert("StateOrProvinceOfIssue_t_1901937839");
      Instrmt_29.add_attribute("Lcl", "LocaleOfIssue_t_393615780"); // 2
      Instrmt_29_set.insert("LocaleOfIssue_t_393615780");
      Instrmt_29.add_attribute("Redeem", "RedemptionDate_t_1081362199"); // 2
      Instrmt_29_set.insert("RedemptionDate_t_1081362199");
      Instrmt_29.add_attribute("StrkPx", "2230719.330000"); // 2
      Instrmt_29_set.insert("2230719.330000");
      Instrmt_29.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_29_set.insert("GBP");
      Instrmt_29.add_attribute("StrkMult", "14840302.260000"); // 2
      Instrmt_29_set.insert("14840302.260000");
      Instrmt_29.add_attribute("StrkValu", "391016.880000"); // 2
      Instrmt_29_set.insert("391016.880000");
      Instrmt_29.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("StrkPxBndryPrcsn", "9533901.060000"); // 2
      Instrmt_29_set.insert("9533901.060000");
      Instrmt_29.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("OptAt", "1479973929"); // 2
      Instrmt_29_set.insert("1479973929");
      Instrmt_29.add_attribute("Mult", "4597180.350000"); // 2
      Instrmt_29_set.insert("4597180.350000");
      Instrmt_29.add_attribute("MultTyp", "0"); // 2
      Instrmt_29_set.insert("0");
      Instrmt_29.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_29_set.insert("4");
      Instrmt_29.add_attribute("MinPxIncr", "1989091.160000"); // 2
      Instrmt_29_set.insert("1989091.160000");
      Instrmt_29.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_953327999"); // 2
      Instrmt_29_set.insert("MinPriceIncrementAmount_t_953327999");
      Instrmt_29.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_29_set.insert("oz_tr");
      Instrmt_29.add_attribute("UOMQty", "12985233.810000"); // 2
      Instrmt_29_set.insert("12985233.810000");
      Instrmt_29.add_attribute("PxUOM", "lbs"); // 2
      Instrmt_29_set.insert("lbs");
      Instrmt_29.add_attribute("PxUOMQty", "807813.460000"); // 2
      Instrmt_29_set.insert("807813.460000");
      Instrmt_29.add_attribute("SettlMeth", "C"); // 2
      Instrmt_29_set.insert("C");
      Instrmt_29.add_attribute("ExerStyle", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("OptPayAmt", "OptPayoutAmount_t_661902479"); // 2
      Instrmt_29_set.insert("OptPayoutAmount_t_661902479");
      Instrmt_29.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_29_set.insert("PCTPAR");
      Instrmt_29.add_attribute("ValMeth", "CDS"); // 2
      Instrmt_29_set.insert("CDS");
      Instrmt_29.add_attribute("ListMeth", "0"); // 2
      Instrmt_29_set.insert("0");
      Instrmt_29.add_attribute("CapPx", "2535051.360000"); // 2
      Instrmt_29_set.insert("2535051.360000");
      Instrmt_29.add_attribute("FlrPx", "13847179.940000"); // 2
      Instrmt_29_set.insert("13847179.940000");
      Instrmt_29.add_attribute("PutCall", "1"); // 2
      Instrmt_29_set.insert("1");
      Instrmt_29.add_attribute("FlexInd", "true"); // 2
      Instrmt_29_set.insert("true");
      Instrmt_29.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_29_set.insert("false");
      Instrmt_29.add_attribute("TmUnit", "Min"); // 2
      Instrmt_29_set.insert("Min");
      Instrmt_29.add_attribute("CpnRt", "5153919.690000"); // 2
      Instrmt_29_set.insert("5153919.690000");
      Instrmt_29.add_attribute("Exch", "SecurityExchange_t_1003239748"); // 2
      Instrmt_29_set.insert("SecurityExchange_t_1003239748");
      Instrmt_29.add_attribute("PosLmt", "402753575"); // 2
      Instrmt_29_set.insert("402753575");
      Instrmt_29.add_attribute("NTPosLmt", "554493657"); // 2
      Instrmt_29_set.insert("554493657");
      Instrmt_29.add_attribute("Issr", "Issuer_t_739728905"); // 2
      Instrmt_29_set.insert("Issuer_t_739728905");
      Instrmt_29.add_attribute("EncIssrLen", "963516295"); // 2
      Instrmt_29_set.insert("963516295");
      Instrmt_29.add_attribute("EncIssr", "EncodedIssuer_t_1507883764"); // 2
      Instrmt_29_set.insert("EncodedIssuer_t_1507883764");
      Instrmt_29.add_attribute("Desc", "SecurityDesc_t_1061100581"); // 2
      Instrmt_29_set.insert("SecurityDesc_t_1061100581");
      Instrmt_29.add_attribute("EncSecDescLen", "296006576"); // 2
      Instrmt_29_set.insert("296006576");
      Instrmt_29.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1967601799"); // 2
      Instrmt_29_set.insert("EncodedSecurityDesc_t_1967601799");
      Instrmt_29.add_attribute("Pool", "Pool_t_1038590385"); // 2
      Instrmt_29_set.insert("Pool_t_1038590385");
      Instrmt_29.add_attribute("CSetMo", "1037382120"); // 2
      Instrmt_29_set.insert("1037382120");
      Instrmt_29.add_attribute("CPPgm", "2"); // 2
      Instrmt_29_set.insert("2");
      Instrmt_29.add_attribute("CPRegT", "CPRegType_t_1991918384"); // 2
      Instrmt_29_set.insert("CPRegType_t_1991918384");
      Instrmt_29.add_attribute("Dated", "DatedDate_t_1113178654"); // 2
      Instrmt_29_set.insert("DatedDate_t_1113178654");
      Instrmt_29.add_attribute("IntAcrl", "InterestAccrualDate_t_1317550649"); // 2
      Instrmt_29_set.insert("InterestAccrualDate_t_1317550649");
      all_values.push_back(Instrmt_29_set);
      all_compo_names.insert("Instrmt_29_set");

      {
        xml_element AID_32{"AID"};
        multiset<string> AID_32_set;
        AID_32.add_attribute("AltID", "SecurityAltID_t_1532289847"); // 3
        AID_32_set.insert("SecurityAltID_t_1532289847");
        AID_32.add_attribute("AltIDSrc", "4"); // 3
        AID_32_set.insert("4");
        all_values.push_back(AID_32_set);
        all_compo_names.insert("AID_32_set");

        Instrmt_29.add_element(AID_32);
      }
      {
        xml_element SecXML_32{"SecXML"};
        multiset<string> SecXML_32_set;
        SecXML_32.add_attribute("Schema", "SecurityXMLSchema_t_1868725441"); // 3
        SecXML_32_set.insert("SecurityXMLSchema_t_1868725441");
        all_values.push_back(SecXML_32_set);
        all_compo_names.insert("SecXML_32_set");

        Instrmt_29.add_element(SecXML_32);
      }
      {
        xml_element Evnt_32{"Evnt"};
        multiset<string> Evnt_32_set;
        Evnt_32.add_attribute("EventTyp", "12"); // 3
        Evnt_32_set.insert("12");
        Evnt_32.add_attribute("Dt", "EventDate_t_218303098"); // 3
        Evnt_32_set.insert("EventDate_t_218303098");
        Evnt_32.add_attribute("Tm", "EventTime_t_383144273"); // 3
        Evnt_32_set.insert("EventTime_t_383144273");
        Evnt_32.add_attribute("Px", "16883014.030000"); // 3
        Evnt_32_set.insert("16883014.030000");
        Evnt_32.add_attribute("Txt", "EventText_t_375475936"); // 3
        Evnt_32_set.insert("EventText_t_375475936");
        all_values.push_back(Evnt_32_set);
        all_compo_names.insert("Evnt_32_set");

        Instrmt_29.add_element(Evnt_32);
      }
      {
        xml_element Pty_164{"Pty"};
        multiset<string> Pty_164_set;
        Pty_164.add_attribute("ID", "InstrumentPartyID_t_1471825145"); // 3
        Pty_164_set.insert("InstrumentPartyID_t_1471825145");
        Pty_164.add_attribute("Src", "2"); // 3
        Pty_164_set.insert("2");
        Pty_164.add_attribute("R", "57"); // 3
        Pty_164_set.insert("57");
        all_values.push_back(Pty_164_set);
        all_compo_names.insert("Pty_164_set");

        {
          xml_element Sub_164{"Sub"};
          multiset<string> Sub_164_set;
          Sub_164.add_attribute("ID", "InstrumentPartySubID_t_167476560"); // 4
          Sub_164_set.insert("InstrumentPartySubID_t_167476560");
          Sub_164.add_attribute("Typ", "11"); // 4
          Sub_164_set.insert("11");
          all_values.push_back(Sub_164_set);
          all_compo_names.insert("Sub_164_set");

          Pty_164.add_element(Sub_164);
        }
        Instrmt_29.add_element(Pty_164);
      }
      {
        xml_element CmplxEvnt_29{"CmplxEvnt"};
        multiset<string> CmplxEvnt_29_set;
        CmplxEvnt_29.add_attribute("Typ", "6"); // 3
        CmplxEvnt_29_set.insert("6");
        CmplxEvnt_29.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1233683557"); // 3
        CmplxEvnt_29_set.insert("ComplexOptPayoutAmount_t_1233683557");
        CmplxEvnt_29.add_attribute("Px", "9568357.770000"); // 3
        CmplxEvnt_29_set.insert("9568357.770000");
        CmplxEvnt_29.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_29_set.insert("2");
        CmplxEvnt_29.add_attribute("PxBndryPrcsn", "16364371.320000"); // 3
        CmplxEvnt_29_set.insert("16364371.320000");
        CmplxEvnt_29.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_29_set.insert("1");
        CmplxEvnt_29.add_attribute("Cond", "2"); // 3
        CmplxEvnt_29_set.insert("2");
        all_values.push_back(CmplxEvnt_29_set);
        all_compo_names.insert("CmplxEvnt_29_set");

        {
          xml_element EvntDts_29{"EvntDts"};
          multiset<string> EvntDts_29_set;
          EvntDts_29.add_attribute("StartDt", "ComplexEventStartDate_t_452469779"); // 4
          EvntDts_29_set.insert("ComplexEventStartDate_t_452469779");
          EvntDts_29.add_attribute("EndDt", "ComplexEventEndDate_t_871729550"); // 4
          EvntDts_29_set.insert("ComplexEventEndDate_t_871729550");
          all_values.push_back(EvntDts_29_set);
          all_compo_names.insert("EvntDts_29_set");

          {
            xml_element EvntTms_29{"EvntTms"};
            multiset<string> EvntTms_29_set;
            EvntTms_29.add_attribute("StartTm", "587892415"); // 5
            EvntTms_29_set.insert("587892415");
            EvntTms_29.add_attribute("EndTm", "748476355"); // 5
            EvntTms_29_set.insert("748476355");
            all_values.push_back(EvntTms_29_set);
            all_compo_names.insert("EvntTms_29_set");

            EvntDts_29.add_element(EvntTms_29);
          }
          CmplxEvnt_29.add_element(EvntDts_29);
        }
        Instrmt_29.add_element(CmplxEvnt_29);
      }
      Inc_0.add_element(Instrmt_29);
    }
    {
      xml_element Undly_41{"Undly"};
      multiset<string> Undly_41_set;
      Undly_41.add_attribute("Sym", "UnderlyingSymbol_t_691847701"); // 2
      Undly_41_set.insert("UnderlyingSymbol_t_691847701");
      Undly_41.add_attribute("Sfx", "CD"); // 2
      Undly_41_set.insert("CD");
      Undly_41.add_attribute("ID", "UnderlyingSecurityID_t_1785858475"); // 2
      Undly_41_set.insert("UnderlyingSecurityID_t_1785858475");
      Undly_41.add_attribute("Src", "E"); // 2
      Undly_41_set.insert("E");
      Undly_41.add_attribute("Prod", "8"); // 2
      Undly_41_set.insert("8");
      Undly_41.add_attribute("CFI", "UnderlyingCFICode_t_751553481"); // 2
      Undly_41_set.insert("UnderlyingCFICode_t_751553481");
      Undly_41.add_attribute("SecTyp", "TAN"); // 2
      Undly_41_set.insert("TAN");
      Undly_41.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_855723736"); // 2
      Undly_41_set.insert("UnderlyingSecuritySubType_t_855723736");
      Undly_41.add_attribute("MMY", "1945513482"); // 2
      Undly_41_set.insert("1945513482");
      Undly_41.add_attribute("Mat", "UnderlyingMaturityDate_t_1749667411"); // 2
      Undly_41_set.insert("UnderlyingMaturityDate_t_1749667411");
      Undly_41.add_attribute("MatTm", "241073981"); // 2
      Undly_41_set.insert("241073981");
      Undly_41.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_16332933"); // 2
      Undly_41_set.insert("UnderlyingCouponPaymentDate_t_16332933");
      Undly_41.add_attribute("RestrctTyp", "FR"); // 2
      Undly_41_set.insert("FR");
      Undly_41.add_attribute("Snrty", "SD"); // 2
      Undly_41_set.insert("SD");
      Undly_41.add_attribute("NotlPctOut", "3918088.690000"); // 2
      Undly_41_set.insert("3918088.690000");
      Undly_41.add_attribute("OrigNotlPctOut", "14571531.810000"); // 2
      Undly_41_set.insert("14571531.810000");
      Undly_41.add_attribute("AttchPnt", "17236982.760000"); // 2
      Undly_41_set.insert("17236982.760000");
      Undly_41.add_attribute("DetchPnt", "45191.520000"); // 2
      Undly_41_set.insert("45191.520000");
      Undly_41.add_attribute("Issued", "UnderlyingIssueDate_t_1624629742"); // 2
      Undly_41_set.insert("UnderlyingIssueDate_t_1624629742");
      Undly_41.add_attribute("RepoCollSecTyp", "17658435"); // 2
      Undly_41_set.insert("17658435");
      Undly_41.add_attribute("RepoTrm", "2083309628"); // 2
      Undly_41_set.insert("2083309628");
      Undly_41.add_attribute("RepoRt", "7108296.510000"); // 2
      Undly_41_set.insert("7108296.510000");
      Undly_41.add_attribute("Fctr", "9744942.120000"); // 2
      Undly_41_set.insert("9744942.120000");
      Undly_41.add_attribute("CrdRtg", "UnderlyingCreditRating_t_870372556"); // 2
      Undly_41_set.insert("UnderlyingCreditRating_t_870372556");
      Undly_41.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_199783135"); // 2
      Undly_41_set.insert("UnderlyingInstrRegistry_t_199783135");
      Undly_41.add_attribute("Ctry", "338339999"); // 2
      Undly_41_set.insert("338339999");
      Undly_41.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_397164389"); // 2
      Undly_41_set.insert("UnderlyingStateOrProvinceOfIssue_t_397164389");
      Undly_41.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_652252914"); // 2
      Undly_41_set.insert("UnderlyingLocaleOfIssue_t_652252914");
      Undly_41.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1210069549"); // 2
      Undly_41_set.insert("UnderlyingRedemptionDate_t_1210069549");
      Undly_41.add_attribute("StrkPx", "9850568.040000"); // 2
      Undly_41_set.insert("9850568.040000");
      Undly_41.add_attribute("StrkCcy", "CHF"); // 2
      Undly_41_set.insert("CHF");
      Undly_41.add_attribute("OptA", "464055957"); // 2
      Undly_41_set.insert("464055957");
      Undly_41.add_attribute("Mult", "10391040.960000"); // 2
      Undly_41_set.insert("10391040.960000");
      Undly_41.add_attribute("MultTyp", "1"); // 2
      Undly_41_set.insert("1");
      Undly_41.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_41_set.insert("4");
      Undly_41.add_attribute("UOM", "lbs"); // 2
      Undly_41_set.insert("lbs");
      Undly_41.add_attribute("UOMQty", "3462505.420000"); // 2
      Undly_41_set.insert("3462505.420000");
      Undly_41.add_attribute("PxUOM", "Bu"); // 2
      Undly_41_set.insert("Bu");
      Undly_41.add_attribute("PxUOMQty", "15886874.120000"); // 2
      Undly_41_set.insert("15886874.120000");
      Undly_41.add_attribute("TmUnit", "D"); // 2
      Undly_41_set.insert("D");
      Undly_41.add_attribute("ExerStyle", "0"); // 2
      Undly_41_set.insert("0");
      Undly_41.add_attribute("CpnRt", "16050203.450000"); // 2
      Undly_41_set.insert("16050203.450000");
      Undly_41.add_attribute("Exch", "UnderlyingSecurityExchange_t_2081245990"); // 2
      Undly_41_set.insert("UnderlyingSecurityExchange_t_2081245990");
      Undly_41.add_attribute("Issr", "UnderlyingIssuer_t_666179300"); // 2
      Undly_41_set.insert("UnderlyingIssuer_t_666179300");
      Undly_41.add_attribute("EncUndIssrLen", "1996829214"); // 2
      Undly_41_set.insert("1996829214");
      Undly_41.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1390915523"); // 2
      Undly_41_set.insert("EncodedUnderlyingIssuer_t_1390915523");
      Undly_41.add_attribute("Desc", "UnderlyingSecurityDesc_t_242393928"); // 2
      Undly_41_set.insert("UnderlyingSecurityDesc_t_242393928");
      Undly_41.add_attribute("EncUndSecDescLen", "2001348366"); // 2
      Undly_41_set.insert("2001348366");
      Undly_41.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_868061617"); // 2
      Undly_41_set.insert("EncodedUnderlyingSecurityDesc_t_868061617");
      Undly_41.add_attribute("CPPgm", "UnderlyingCPProgram_t_260052363"); // 2
      Undly_41_set.insert("UnderlyingCPProgram_t_260052363");
      Undly_41.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1937174346"); // 2
      Undly_41_set.insert("UnderlyingCPRegType_t_1937174346");
      Undly_41.add_attribute("AllocPct", "15788912.680000"); // 2
      Undly_41_set.insert("15788912.680000");
      Undly_41.add_attribute("Ccy", "GBP"); // 2
      Undly_41_set.insert("GBP");
      Undly_41.add_attribute("Qty", "17786744.030000"); // 2
      Undly_41_set.insert("17786744.030000");
      Undly_41.add_attribute("SettlTyp", "2"); // 2
      Undly_41_set.insert("2");
      Undly_41.add_attribute("CashAmt", "UnderlyingCashAmount_t_1057227644"); // 2
      Undly_41_set.insert("UnderlyingCashAmount_t_1057227644");
      Undly_41.add_attribute("CashTyp", "DIFF"); // 2
      Undly_41_set.insert("DIFF");
      Undly_41.add_attribute("Px", "6354724.760000"); // 2
      Undly_41_set.insert("6354724.760000");
      Undly_41.add_attribute("DirtPx", "20422844.480000"); // 2
      Undly_41_set.insert("20422844.480000");
      Undly_41.add_attribute("EndPx", "16841729.380000"); // 2
      Undly_41_set.insert("16841729.380000");
      Undly_41.add_attribute("StartVal", "UnderlyingStartValue_t_389906079"); // 2
      Undly_41_set.insert("UnderlyingStartValue_t_389906079");
      Undly_41.add_attribute("CurVal", "UnderlyingCurrentValue_t_358856757"); // 2
      Undly_41_set.insert("UnderlyingCurrentValue_t_358856757");
      Undly_41.add_attribute("EndVal", "UnderlyingEndValue_t_575793386"); // 2
      Undly_41_set.insert("UnderlyingEndValue_t_575793386");
      Undly_41.add_attribute("AdjQty", "8552146.510000"); // 2
      Undly_41_set.insert("8552146.510000");
      Undly_41.add_attribute("FxRate", "1463466.030000"); // 2
      Undly_41_set.insert("1463466.030000");
      Undly_41.add_attribute("FxRateCalc", "M"); // 2
      Undly_41_set.insert("M");
      Undly_41.add_attribute("CapValu", "UnderlyingCapValue_t_1201465193"); // 2
      Undly_41_set.insert("UnderlyingCapValue_t_1201465193");
      Undly_41.add_attribute("SetMeth", "UnderlyingSettlMethod_t_789560186"); // 2
      Undly_41_set.insert("UnderlyingSettlMethod_t_789560186");
      Undly_41.add_attribute("PutCall", "1807654728"); // 2
      Undly_41_set.insert("1807654728");
      all_values.push_back(Undly_41_set);
      all_compo_names.insert("Undly_41_set");

      {
        xml_element UndAID_41{"UndAID"};
        multiset<string> UndAID_41_set;
        UndAID_41.add_attribute("AltID", "UnderlyingSecurityAltID_t_1149899499"); // 3
        UndAID_41_set.insert("UnderlyingSecurityAltID_t_1149899499");
        UndAID_41.add_attribute("AltIDSrc", "E"); // 3
        UndAID_41_set.insert("E");
        all_values.push_back(UndAID_41_set);
        all_compo_names.insert("UndAID_41_set");

        Undly_41.add_element(UndAID_41);
      }
      {
        xml_element Stip_68{"Stip"};
        multiset<string> Stip_68_set;
        Stip_68.add_attribute("Typ", "REFTRADE"); // 3
        Stip_68_set.insert("REFTRADE");
        Stip_68.add_attribute("Val", "UnderlyingStipValue_t_1083661841"); // 3
        Stip_68_set.insert("UnderlyingStipValue_t_1083661841");
        all_values.push_back(Stip_68_set);
        all_compo_names.insert("Stip_68_set");

        Undly_41.add_element(Stip_68);
      }
      {
        xml_element Pty_165{"Pty"};
        multiset<string> Pty_165_set;
        Pty_165.add_attribute("ID", "UnderlyingInstrumentPartyID_t_192543401"); // 3
        Pty_165_set.insert("UnderlyingInstrumentPartyID_t_192543401");
        Pty_165.add_attribute("Src", "E"); // 3
        Pty_165_set.insert("E");
        Pty_165.add_attribute("R", "70"); // 3
        Pty_165_set.insert("70");
        all_values.push_back(Pty_165_set);
        all_compo_names.insert("Pty_165_set");

        {
          xml_element Sub_165{"Sub"};
          multiset<string> Sub_165_set;
          Sub_165.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_434937329"); // 4
          Sub_165_set.insert("UnderlyingInstrumentPartySubID_t_434937329");
          Sub_165.add_attribute("Typ", "20"); // 4
          Sub_165_set.insert("20");
          all_values.push_back(Sub_165_set);
          all_compo_names.insert("Sub_165_set");

          Pty_165.add_element(Sub_165);
        }
        Undly_41.add_element(Pty_165);
      }
      Inc_0.add_element(Undly_41);
    }
    {
      xml_element Leg_39{"Leg"};
      multiset<string> Leg_39_set;
      Leg_39.add_attribute("Sym", "LegSymbol_t_1195155334"); // 2
      Leg_39_set.insert("LegSymbol_t_1195155334");
      Leg_39.add_attribute("Sfx", "WI"); // 2
      Leg_39_set.insert("WI");
      Leg_39.add_attribute("ID", "LegSecurityID_t_758092408"); // 2
      Leg_39_set.insert("LegSecurityID_t_758092408");
      Leg_39.add_attribute("Src", "7"); // 2
      Leg_39_set.insert("7");
      Leg_39.add_attribute("Prod", "8"); // 2
      Leg_39_set.insert("8");
      Leg_39.add_attribute("CFI", "LegCFICode_t_1418155663"); // 2
      Leg_39_set.insert("LegCFICode_t_1418155663");
      Leg_39.add_attribute("SecTyp", "RAN"); // 2
      Leg_39_set.insert("RAN");
      Leg_39.add_attribute("SecSubTyp", "LegSecuritySubType_t_1354939196"); // 2
      Leg_39_set.insert("LegSecuritySubType_t_1354939196");
      Leg_39.add_attribute("MMY", "327899659"); // 2
      Leg_39_set.insert("327899659");
      Leg_39.add_attribute("Mat", "LegMaturityDate_t_541197379"); // 2
      Leg_39_set.insert("LegMaturityDate_t_541197379");
      Leg_39.add_attribute("MatTm", "1990411672"); // 2
      Leg_39_set.insert("1990411672");
      Leg_39.add_attribute("CpnPmt", "LegCouponPaymentDate_t_222700459"); // 2
      Leg_39_set.insert("LegCouponPaymentDate_t_222700459");
      Leg_39.add_attribute("Issued", "LegIssueDate_t_77886670"); // 2
      Leg_39_set.insert("LegIssueDate_t_77886670");
      Leg_39.add_attribute("RepoCollSecTyp", "232834104"); // 2
      Leg_39_set.insert("232834104");
      Leg_39.add_attribute("RepoTrm", "581557217"); // 2
      Leg_39_set.insert("581557217");
      Leg_39.add_attribute("RepoRt", "6536800.560000"); // 2
      Leg_39_set.insert("6536800.560000");
      Leg_39.add_attribute("Fctr", "10880487.550000"); // 2
      Leg_39_set.insert("10880487.550000");
      Leg_39.add_attribute("CrdRtg", "LegCreditRating_t_727903820"); // 2
      Leg_39_set.insert("LegCreditRating_t_727903820");
      Leg_39.add_attribute("Rgstry", "LegInstrRegistry_t_872647372"); // 2
      Leg_39_set.insert("LegInstrRegistry_t_872647372");
      Leg_39.add_attribute("Ctry", "142030301"); // 2
      Leg_39_set.insert("142030301");
      Leg_39.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1517464006"); // 2
      Leg_39_set.insert("LegStateOrProvinceOfIssue_t_1517464006");
      Leg_39.add_attribute("Lcl", "LegLocaleOfIssue_t_532818452"); // 2
      Leg_39_set.insert("LegLocaleOfIssue_t_532818452");
      Leg_39.add_attribute("Redeem", "LegRedemptionDate_t_1291929800"); // 2
      Leg_39_set.insert("LegRedemptionDate_t_1291929800");
      Leg_39.add_attribute("Strk", "10438281.080000"); // 2
      Leg_39_set.insert("10438281.080000");
      Leg_39.add_attribute("StrkCcy", "CAN"); // 2
      Leg_39_set.insert("CAN");
      Leg_39.add_attribute("OptA", "1236371509"); // 2
      Leg_39_set.insert("1236371509");
      Leg_39.add_attribute("Cmult", "7650632.210000"); // 2
      Leg_39_set.insert("7650632.210000");
      Leg_39.add_attribute("MultTyp", "1"); // 2
      Leg_39_set.insert("1");
      Leg_39.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_39_set.insert("4");
      Leg_39.add_attribute("UOM", "Gal"); // 2
      Leg_39_set.insert("Gal");
      Leg_39.add_attribute("UOMQty", "17503570.430000"); // 2
      Leg_39_set.insert("17503570.430000");
      Leg_39.add_attribute("PxUOM", "Bbl"); // 2
      Leg_39_set.insert("Bbl");
      Leg_39.add_attribute("PxUOMQty", "3440736.910000"); // 2
      Leg_39_set.insert("3440736.910000");
      Leg_39.add_attribute("TmUnit", "D"); // 2
      Leg_39_set.insert("D");
      Leg_39.add_attribute("ExerStyle", "1"); // 2
      Leg_39_set.insert("1");
      Leg_39.add_attribute("CpnRt", "17622293.540000"); // 2
      Leg_39_set.insert("17622293.540000");
      Leg_39.add_attribute("Exch", "LegSecurityExchange_t_487190060"); // 2
      Leg_39_set.insert("LegSecurityExchange_t_487190060");
      Leg_39.add_attribute("Issr", "LegIssuer_t_1355806701"); // 2
      Leg_39_set.insert("LegIssuer_t_1355806701");
      Leg_39.add_attribute("EncLegIssrLen", "2090129013"); // 2
      Leg_39_set.insert("2090129013");
      Leg_39.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1028387439"); // 2
      Leg_39_set.insert("EncodedLegIssuer_t_1028387439");
      Leg_39.add_attribute("Desc", "LegSecurityDesc_t_1198734725"); // 2
      Leg_39_set.insert("LegSecurityDesc_t_1198734725");
      Leg_39.add_attribute("EncLegSecDescLen", "165345825"); // 2
      Leg_39_set.insert("165345825");
      Leg_39.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1106274109"); // 2
      Leg_39_set.insert("EncodedLegSecurityDesc_t_1106274109");
      Leg_39.add_attribute("RatioQty", "14315688.290000"); // 2
      Leg_39_set.insert("14315688.290000");
      Leg_39.add_attribute("Side", "3"); // 2
      Leg_39_set.insert("3");
      Leg_39.add_attribute("Ccy", "CAN"); // 2
      Leg_39_set.insert("CAN");
      Leg_39.add_attribute("Pool", "LegPool_t_1474806862"); // 2
      Leg_39_set.insert("LegPool_t_1474806862");
      Leg_39.add_attribute("Dated", "LegDatedDate_t_485117890"); // 2
      Leg_39_set.insert("LegDatedDate_t_485117890");
      Leg_39.add_attribute("CSetMo", "514164238"); // 2
      Leg_39_set.insert("514164238");
      Leg_39.add_attribute("IntAcrl", "LegInterestAccrualDate_t_844787221"); // 2
      Leg_39_set.insert("LegInterestAccrualDate_t_844787221");
      Leg_39.add_attribute("PutCall", "1017936343"); // 2
      Leg_39_set.insert("1017936343");
      Leg_39.add_attribute("LegOptionRatio", "18060940.380000"); // 2
      Leg_39_set.insert("18060940.380000");
      Leg_39.add_attribute("Px", "18886153.290000"); // 2
      Leg_39_set.insert("18886153.290000");
      all_values.push_back(Leg_39_set);
      all_compo_names.insert("Leg_39_set");

      {
        xml_element LegAID_39{"LegAID"};
        multiset<string> LegAID_39_set;
        LegAID_39.add_attribute("SecAltID", "LegSecurityAltID_t_668462572"); // 3
        LegAID_39_set.insert("LegSecurityAltID_t_668462572");
        LegAID_39.add_attribute("SecAltIDSrc", "G"); // 3
        LegAID_39_set.insert("G");
        all_values.push_back(LegAID_39_set);
        all_compo_names.insert("LegAID_39_set");

        Leg_39.add_element(LegAID_39);
      }
      Inc_0.add_element(Leg_39);
    }
    {
      xml_element Yield_7{"Yield"};
      multiset<string> Yield_7_set;
      Yield_7.add_attribute("Typ", "SIMPLE"); // 2
      Yield_7_set.insert("SIMPLE");
      Yield_7.add_attribute("Yld", "14335257.930000"); // 2
      Yield_7_set.insert("14335257.930000");
      Yield_7.add_attribute("CalcDt", "YieldCalcDate_t_441920092"); // 2
      Yield_7_set.insert("YieldCalcDate_t_441920092");
      Yield_7.add_attribute("RedDt", "YieldRedemptionDate_t_501328381"); // 2
      Yield_7_set.insert("YieldRedemptionDate_t_501328381");
      Yield_7.add_attribute("RedPx", "10195070.760000"); // 2
      Yield_7_set.insert("10195070.760000");
      Yield_7.add_attribute("RedPxTyp", "11"); // 2
      Yield_7_set.insert("11");
      all_values.push_back(Yield_7_set);
      all_compo_names.insert("Yield_7_set");

      Inc_0.add_element(Yield_7);
    }
    {
      xml_element SprdBnchmkCurve_12{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_12_set;
      SprdBnchmkCurve_12.add_attribute("Spread", "7201432.650000"); // 2
      SprdBnchmkCurve_12_set.insert("7201432.650000");
      SprdBnchmkCurve_12.add_attribute("Ccy", "USD"); // 2
      SprdBnchmkCurve_12_set.insert("USD");
      SprdBnchmkCurve_12.add_attribute("Name", "SWAP"); // 2
      SprdBnchmkCurve_12_set.insert("SWAP");
      SprdBnchmkCurve_12.add_attribute("Point", "BenchmarkCurvePoint_t_978326474"); // 2
      SprdBnchmkCurve_12_set.insert("BenchmarkCurvePoint_t_978326474");
      SprdBnchmkCurve_12.add_attribute("Px", "7614198.980000"); // 2
      SprdBnchmkCurve_12_set.insert("7614198.980000");
      SprdBnchmkCurve_12.add_attribute("PxTyp", "6"); // 2
      SprdBnchmkCurve_12_set.insert("6");
      SprdBnchmkCurve_12.add_attribute("SecID", "BenchmarkSecurityID_t_920971840"); // 2
      SprdBnchmkCurve_12_set.insert("BenchmarkSecurityID_t_920971840");
      SprdBnchmkCurve_12.add_attribute("SecIDSrc", "M"); // 2
      SprdBnchmkCurve_12_set.insert("M");
      all_values.push_back(SprdBnchmkCurve_12_set);
      all_compo_names.insert("SprdBnchmkCurve_12_set");

      Inc_0.add_element(SprdBnchmkCurve_12);
    }
    {
      xml_element RtSrc_6{"RtSrc"};
      multiset<string> RtSrc_6_set;
      RtSrc_6.add_attribute("RtSrc", "1"); // 2
      RtSrc_6_set.insert("1");
      RtSrc_6.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_6_set.insert("1");
      RtSrc_6.add_attribute("RefPg", "ReferencePage_t_748597799"); // 2
      RtSrc_6_set.insert("ReferencePage_t_748597799");
      all_values.push_back(RtSrc_6_set);
      all_compo_names.insert("RtSrc_6_set");

      Inc_0.add_element(RtSrc_6);
    }
    {
      xml_element SecSizesGrp_0{"SecSizesGrp"};
      multiset<string> SecSizesGrp_0_set;
      SecSizesGrp_0.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_0_set.insert("1");
      SecSizesGrp_0.add_attribute("MDSecSize", "18332207.070000"); // 2
      SecSizesGrp_0_set.insert("18332207.070000");
      all_values.push_back(SecSizesGrp_0_set);
      all_compo_names.insert("SecSizesGrp_0_set");

      Inc_0.add_element(SecSizesGrp_0);
    }
    {
      xml_element StatsIndGrp_0{"StatsIndGrp"};
      multiset<string> StatsIndGrp_0_set;
      StatsIndGrp_0.add_attribute("StatsTyp", "2"); // 2
      StatsIndGrp_0_set.insert("2");
      all_values.push_back(StatsIndGrp_0_set);
      all_compo_names.insert("StatsIndGrp_0_set");

      Inc_0.add_element(StatsIndGrp_0);
    }
    {
      xml_element Pty_166{"Pty"};
      multiset<string> Pty_166_set;
      Pty_166.add_attribute("ID", "PartyID_t_784287667"); // 2
      Pty_166_set.insert("PartyID_t_784287667");
      Pty_166.add_attribute("Src", "6"); // 2
      Pty_166_set.insert("6");
      Pty_166.add_attribute("R", "35"); // 2
      Pty_166_set.insert("35");
      all_values.push_back(Pty_166_set);
      all_compo_names.insert("Pty_166_set");

      {
        xml_element Sub_166{"Sub"};
        multiset<string> Sub_166_set;
        Sub_166.add_attribute("ID", "PartySubID_t_1298451905"); // 3
        Sub_166_set.insert("PartySubID_t_1298451905");
        Sub_166.add_attribute("Typ", "20"); // 3
        Sub_166_set.insert("20");
        all_values.push_back(Sub_166_set);
        all_compo_names.insert("Sub_166_set");

        Pty_166.add_element(Sub_166);
      }
      Inc_0.add_element(Pty_166);
    }
    elt.add_element(Inc_0);
  } // end Inc
  { // Inc
    xml_element Inc_1{"Inc"};
    multiset<string> Inc_1_set;
    Inc_1.add_attribute("UpdtAct", "4"); // 1
    Inc_1_set.insert("4");
    Inc_1.add_attribute("DelRsn", "1"); // 1
    Inc_1_set.insert("1");
    Inc_1.add_attribute("MDSubBkTyp", "1746462823"); // 1
    Inc_1_set.insert("1746462823");
    Inc_1.add_attribute("MktDepth", "385101475"); // 1
    Inc_1_set.insert("385101475");
    Inc_1.add_attribute("Typ", "6"); // 1
    Inc_1_set.insert("6");
    Inc_1.add_attribute("ID", "MDEntryID_t_576482366"); // 1
    Inc_1_set.insert("MDEntryID_t_576482366");
    Inc_1.add_attribute("RefID", "MDEntryRefID_t_1818627268"); // 1
    Inc_1_set.insert("MDEntryRefID_t_1818627268");
    Inc_1.add_attribute("MDStrmID", "MDStreamID_t_1285700771"); // 1
    Inc_1_set.insert("MDStreamID_t_1285700771");
    Inc_1.add_attribute("FinclStat", "1"); // 1
    Inc_1_set.insert("1");
    Inc_1.add_attribute("CorpActn", "E"); // 1
    Inc_1_set.insert("E");
    Inc_1.add_attribute("Px", "13304942.590000"); // 1
    Inc_1_set.insert("13304942.590000");
    Inc_1.add_attribute("PxTyp", "10"); // 1
    Inc_1_set.insert("10");
    Inc_1.add_attribute("OrdTyp", "I"); // 1
    Inc_1_set.insert("I");
    Inc_1.add_attribute("Ccy", "CHF"); // 1
    Inc_1_set.insert("CHF");
    Inc_1.add_attribute("SettlCcy", "EUR"); // 1
    Inc_1_set.insert("EUR");
    Inc_1.add_attribute("Sz", "3008149.590000"); // 1
    Inc_1_set.insert("3008149.590000");
    Inc_1.add_attribute("LotTyp", "4"); // 1
    Inc_1_set.insert("4");
    Inc_1.add_attribute("Dt", "2008467684"); // 1
    Inc_1_set.insert("2008467684");
    Inc_1.add_attribute("Tm", "1428883508"); // 1
    Inc_1_set.insert("1428883508");
    Inc_1.add_attribute("TickDirctn", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("Mkt", "MDMkt_t_609581835"); // 1
    Inc_1_set.insert("MDMkt_t_609581835");
    Inc_1.add_attribute("SesID", "5"); // 1
    Inc_1_set.insert("5");
    Inc_1.add_attribute("SesSub", "7"); // 1
    Inc_1_set.insert("7");
    Inc_1.add_attribute("TrdgStat", "13"); // 1
    Inc_1_set.insert("13");
    Inc_1.add_attribute("HaltRsn", "4"); // 1
    Inc_1_set.insert("4");
    Inc_1.add_attribute("QCond", "L"); // 1
    Inc_1_set.insert("L");
    Inc_1.add_attribute("TrdCond", "f"); // 1
    Inc_1_set.insert("f");
    Inc_1.add_attribute("TrdTyp", "18"); // 1
    Inc_1_set.insert("18");
    Inc_1.add_attribute("MtchTyp", "6"); // 1
    Inc_1_set.insert("6");
    Inc_1.add_attribute("Orig", "MDEntryOriginator_t_1533475262"); // 1
    Inc_1_set.insert("MDEntryOriginator_t_1533475262");
    Inc_1.add_attribute("LctnID", "LocationID_t_585871811"); // 1
    Inc_1_set.insert("LocationID_t_585871811");
    Inc_1.add_attribute("DeskID", "DeskID_t_1047987799"); // 1
    Inc_1_set.insert("DeskID_t_1047987799");
    Inc_1.add_attribute("OpenClsSettlFlag", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("TmInForce", "9"); // 1
    Inc_1_set.insert("9");
    Inc_1.add_attribute("ExpireDt", "ExpireDate_t_1624470165"); // 1
    Inc_1_set.insert("ExpireDate_t_1624470165");
    Inc_1.add_attribute("ExpireTm", "ExpireTime_t_1589720358"); // 1
    Inc_1_set.insert("ExpireTime_t_1589720358");
    Inc_1.add_attribute("MinQty", "5678696.120000"); // 1
    Inc_1_set.insert("5678696.120000");
    Inc_1.add_attribute("ExecInst", "0"); // 1
    Inc_1_set.insert("0");
    Inc_1.add_attribute("SellerDays", "132887407"); // 1
    Inc_1_set.insert("132887407");
    Inc_1.add_attribute("OrdID", "OrderID_t_1898363871"); // 1
    Inc_1_set.insert("OrderID_t_1898363871");
    Inc_1.add_attribute("OrdID2", "SecondaryOrderID_t_205267629"); // 1
    Inc_1_set.insert("SecondaryOrderID_t_205267629");
    Inc_1.add_attribute("EntryID", "QuoteEntryID_t_39635224"); // 1
    Inc_1_set.insert("QuoteEntryID_t_39635224");
    Inc_1.add_attribute("TrdID", "TradeID_t_1355604320"); // 1
    Inc_1_set.insert("TradeID_t_1355604320");
    Inc_1.add_attribute("Buyer", "MDEntryBuyer_t_576748765"); // 1
    Inc_1_set.insert("MDEntryBuyer_t_576748765");
    Inc_1.add_attribute("Seller", "MDEntrySeller_t_924709515"); // 1
    Inc_1_set.insert("MDEntrySeller_t_924709515");
    Inc_1.add_attribute("NumOfOrds", "1574264667"); // 1
    Inc_1_set.insert("1574264667");
    Inc_1.add_attribute("PosNo", "877563724"); // 1
    Inc_1_set.insert("877563724");
    Inc_1.add_attribute("Scope", "3"); // 1
    Inc_1_set.insert("3");
    Inc_1.add_attribute("PxDelta", "14352487.040000"); // 1
    Inc_1_set.insert("14352487.040000");
    Inc_1.add_attribute("NetChgPrevDay", "1589635.840000"); // 1
    Inc_1_set.insert("1589635.840000");
    Inc_1.add_attribute("Txt", "Text_t_1328152147"); // 1
    Inc_1_set.insert("Text_t_1328152147");
    Inc_1.add_attribute("EncTxtLen", "2044830539"); // 1
    Inc_1_set.insert("2044830539");
    Inc_1.add_attribute("EncTxt", "EncodedText_t_2000000822"); // 1
    Inc_1_set.insert("EncodedText_t_2000000822");
    Inc_1.add_attribute("MDPxLvl", "1758769355"); // 1
    Inc_1_set.insert("1758769355");
    Inc_1.add_attribute("Cpcty", "A"); // 1
    Inc_1_set.insert("A");
    Inc_1.add_attribute("MDOrigTyp", "1"); // 1
    Inc_1_set.insert("1");
    Inc_1.add_attribute("HighPx", "12024468.360000"); // 1
    Inc_1_set.insert("12024468.360000");
    Inc_1.add_attribute("LowPx", "5373497.560000"); // 1
    Inc_1_set.insert("5373497.560000");
    Inc_1.add_attribute("FirstPx", "21066515.960000"); // 1
    Inc_1_set.insert("21066515.960000");
    Inc_1.add_attribute("LastPx", "5039718.110000"); // 1
    Inc_1_set.insert("5039718.110000");
    Inc_1.add_attribute("TrdVol", "20708250.180000"); // 1
    Inc_1_set.insert("20708250.180000");
    Inc_1.add_attribute("SettlTyp", "B"); // 1
    Inc_1_set.insert("B");
    Inc_1.add_attribute("SettlDt", "SettlDate_t_1551959610"); // 1
    Inc_1_set.insert("SettlDate_t_1551959610");
    Inc_1.add_attribute("TransBkdTm", "TransBkdTime_t_1841918108"); // 1
    Inc_1_set.insert("TransBkdTime_t_1841918108");
    Inc_1.add_attribute("TxnTm", "TransactTime_t_1974692248"); // 1
    Inc_1_set.insert("TransactTime_t_1974692248");
    Inc_1.add_attribute("MDQteTyp", "2"); // 1
    Inc_1_set.insert("2");
    Inc_1.add_attribute("RptSeq", "1284154818"); // 1
    Inc_1_set.insert("1284154818");
    Inc_1.add_attribute("DealingCpcty", "R"); // 1
    Inc_1_set.insert("R");
    Inc_1.add_attribute("MDEntrySpotRt", "15837433.920000"); // 1
    Inc_1_set.insert("15837433.920000");
    Inc_1.add_attribute("MDEntryFwdPnts", "14170422.250000"); // 1
    Inc_1_set.insert("14170422.250000");
    all_values.push_back(Inc_1_set);
    all_compo_names.insert("Inc_1_set");

    {
      xml_element Instrmt_30{"Instrmt"};
      multiset<string> Instrmt_30_set;
      Instrmt_30.add_attribute("Sym", "Symbol_t_145958436"); // 2
      Instrmt_30_set.insert("Symbol_t_145958436");
      Instrmt_30.add_attribute("Sfx", "WI"); // 2
      Instrmt_30_set.insert("WI");
      Instrmt_30.add_attribute("ID", "SecurityID_t_1456677449"); // 2
      Instrmt_30_set.insert("SecurityID_t_1456677449");
      Instrmt_30.add_attribute("Src", "E"); // 2
      Instrmt_30_set.insert("E");
      Instrmt_30.add_attribute("Prod", "11"); // 2
      Instrmt_30_set.insert("11");
      Instrmt_30.add_attribute("ProdCmplx", "ProductComplex_t_233903316"); // 2
      Instrmt_30_set.insert("ProductComplex_t_233903316");
      Instrmt_30.add_attribute("SecGrp", "SecurityGroup_t_928343776"); // 2
      Instrmt_30_set.insert("SecurityGroup_t_928343776");
      Instrmt_30.add_attribute("CFI", "CFICode_t_1095839862"); // 2
      Instrmt_30_set.insert("CFICode_t_1095839862");
      Instrmt_30.add_attribute("SecTyp", "SECLOAN"); // 2
      Instrmt_30_set.insert("SECLOAN");
      Instrmt_30.add_attribute("SubTyp", "SecuritySubType_t_216108832"); // 2
      Instrmt_30_set.insert("SecuritySubType_t_216108832");
      Instrmt_30.add_attribute("MMY", "1254803446"); // 2
      Instrmt_30_set.insert("1254803446");
      Instrmt_30.add_attribute("MatDt", "MaturityDate_t_2145327463"); // 2
      Instrmt_30_set.insert("MaturityDate_t_2145327463");
      Instrmt_30.add_attribute("MatTm", "113455724"); // 2
      Instrmt_30_set.insert("113455724");
      Instrmt_30.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1107320621"); // 2
      Instrmt_30_set.insert("SettleOnOpenFlag_t_1107320621");
      Instrmt_30.add_attribute("AsgnMeth", "1756613170"); // 2
      Instrmt_30_set.insert("1756613170");
      Instrmt_30.add_attribute("Status", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("CpnPmt", "CouponPaymentDate_t_1437679053"); // 2
      Instrmt_30_set.insert("CouponPaymentDate_t_1437679053");
      Instrmt_30.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_30_set.insert("MM");
      Instrmt_30.add_attribute("Snrty", "SD"); // 2
      Instrmt_30_set.insert("SD");
      Instrmt_30.add_attribute("NotlPctOut", "13968470.010000"); // 2
      Instrmt_30_set.insert("13968470.010000");
      Instrmt_30.add_attribute("OrigNotlPctOut", "13155481.690000"); // 2
      Instrmt_30_set.insert("13155481.690000");
      Instrmt_30.add_attribute("AttchPnt", "14421438.940000"); // 2
      Instrmt_30_set.insert("14421438.940000");
      Instrmt_30.add_attribute("DetchPnt", "19418867.600000"); // 2
      Instrmt_30_set.insert("19418867.600000");
      Instrmt_30.add_attribute("Issued", "IssueDate_t_720024132"); // 2
      Instrmt_30_set.insert("IssueDate_t_720024132");
      Instrmt_30.add_attribute("RepoCollSecTyp", "1136578354"); // 2
      Instrmt_30_set.insert("1136578354");
      Instrmt_30.add_attribute("RepoTrm", "1769095361"); // 2
      Instrmt_30_set.insert("1769095361");
      Instrmt_30.add_attribute("RepoRt", "17489702.590000"); // 2
      Instrmt_30_set.insert("17489702.590000");
      Instrmt_30.add_attribute("Fctr", "2732495.240000"); // 2
      Instrmt_30_set.insert("2732495.240000");
      Instrmt_30.add_attribute("CrdRtg", "CreditRating_t_16689926"); // 2
      Instrmt_30_set.insert("CreditRating_t_16689926");
      Instrmt_30.add_attribute("Rgstry", "InstrRegistry_t_1185230003"); // 2
      Instrmt_30_set.insert("InstrRegistry_t_1185230003");
      Instrmt_30.add_attribute("IssuCtry", "1690291749"); // 2
      Instrmt_30_set.insert("1690291749");
      Instrmt_30.add_attribute("StPrv", "StateOrProvinceOfIssue_t_162648362"); // 2
      Instrmt_30_set.insert("StateOrProvinceOfIssue_t_162648362");
      Instrmt_30.add_attribute("Lcl", "LocaleOfIssue_t_826757377"); // 2
      Instrmt_30_set.insert("LocaleOfIssue_t_826757377");
      Instrmt_30.add_attribute("Redeem", "RedemptionDate_t_999485550"); // 2
      Instrmt_30_set.insert("RedemptionDate_t_999485550");
      Instrmt_30.add_attribute("StrkPx", "16642111.190000"); // 2
      Instrmt_30_set.insert("16642111.190000");
      Instrmt_30.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_30_set.insert("EUR");
      Instrmt_30.add_attribute("StrkMult", "4450712.480000"); // 2
      Instrmt_30_set.insert("4450712.480000");
      Instrmt_30.add_attribute("StrkValu", "21408733.780000"); // 2
      Instrmt_30_set.insert("21408733.780000");
      Instrmt_30.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_30_set.insert("3");
      Instrmt_30.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("StrkPxBndryPrcsn", "12481931.760000"); // 2
      Instrmt_30_set.insert("12481931.760000");
      Instrmt_30.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("OptAt", "774635804"); // 2
      Instrmt_30_set.insert("774635804");
      Instrmt_30.add_attribute("Mult", "2080301.490000"); // 2
      Instrmt_30_set.insert("2080301.490000");
      Instrmt_30.add_attribute("MultTyp", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("MinPxIncr", "16457092.030000"); // 2
      Instrmt_30_set.insert("16457092.030000");
      Instrmt_30.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_321630229"); // 2
      Instrmt_30_set.insert("MinPriceIncrementAmount_t_321630229");
      Instrmt_30.add_attribute("UOM", "Bu"); // 2
      Instrmt_30_set.insert("Bu");
      Instrmt_30.add_attribute("UOMQty", "8950725.560000"); // 2
      Instrmt_30_set.insert("8950725.560000");
      Instrmt_30.add_attribute("PxUOM", "Alw"); // 2
      Instrmt_30_set.insert("Alw");
      Instrmt_30.add_attribute("PxUOMQty", "4220676.950000"); // 2
      Instrmt_30_set.insert("4220676.950000");
      Instrmt_30.add_attribute("SettlMeth", "P"); // 2
      Instrmt_30_set.insert("P");
      Instrmt_30.add_attribute("ExerStyle", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_30_set.insert("1");
      Instrmt_30.add_attribute("OptPayAmt", "OptPayoutAmount_t_311087382"); // 2
      Instrmt_30_set.insert("OptPayoutAmount_t_311087382");
      Instrmt_30.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_30_set.insert("INT");
      Instrmt_30.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_30_set.insert("CDSD");
      Instrmt_30.add_attribute("ListMeth", "0"); // 2
      Instrmt_30_set.insert("0");
      Instrmt_30.add_attribute("CapPx", "9964354.980000"); // 2
      Instrmt_30_set.insert("9964354.980000");
      Instrmt_30.add_attribute("FlrPx", "13747036.750000"); // 2
      Instrmt_30_set.insert("13747036.750000");
      Instrmt_30.add_attribute("PutCall", "0"); // 2
      Instrmt_30_set.insert("0");
      Instrmt_30.add_attribute("FlexInd", "false"); // 2
      Instrmt_30_set.insert("false");
      Instrmt_30.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_30_set.insert("true");
      Instrmt_30.add_attribute("TmUnit", "D"); // 2
      Instrmt_30_set.insert("D");
      Instrmt_30.add_attribute("CpnRt", "7207427.420000"); // 2
      Instrmt_30_set.insert("7207427.420000");
      Instrmt_30.add_attribute("Exch", "SecurityExchange_t_1460094445"); // 2
      Instrmt_30_set.insert("SecurityExchange_t_1460094445");
      Instrmt_30.add_attribute("PosLmt", "452224390"); // 2
      Instrmt_30_set.insert("452224390");
      Instrmt_30.add_attribute("NTPosLmt", "714132472"); // 2
      Instrmt_30_set.insert("714132472");
      Instrmt_30.add_attribute("Issr", "Issuer_t_1363174979"); // 2
      Instrmt_30_set.insert("Issuer_t_1363174979");
      Instrmt_30.add_attribute("EncIssrLen", "1113404470"); // 2
      Instrmt_30_set.insert("1113404470");
      Instrmt_30.add_attribute("EncIssr", "EncodedIssuer_t_1962325649"); // 2
      Instrmt_30_set.insert("EncodedIssuer_t_1962325649");
      Instrmt_30.add_attribute("Desc", "SecurityDesc_t_1264099329"); // 2
      Instrmt_30_set.insert("SecurityDesc_t_1264099329");
      Instrmt_30.add_attribute("EncSecDescLen", "1888040275"); // 2
      Instrmt_30_set.insert("1888040275");
      Instrmt_30.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_22872150"); // 2
      Instrmt_30_set.insert("EncodedSecurityDesc_t_22872150");
      Instrmt_30.add_attribute("Pool", "Pool_t_774153200"); // 2
      Instrmt_30_set.insert("Pool_t_774153200");
      Instrmt_30.add_attribute("CSetMo", "1496645199"); // 2
      Instrmt_30_set.insert("1496645199");
      Instrmt_30.add_attribute("CPPgm", "2"); // 2
      Instrmt_30_set.insert("2");
      Instrmt_30.add_attribute("CPRegT", "CPRegType_t_1095783430"); // 2
      Instrmt_30_set.insert("CPRegType_t_1095783430");
      Instrmt_30.add_attribute("Dated", "DatedDate_t_476569000"); // 2
      Instrmt_30_set.insert("DatedDate_t_476569000");
      Instrmt_30.add_attribute("IntAcrl", "InterestAccrualDate_t_416170262"); // 2
      Instrmt_30_set.insert("InterestAccrualDate_t_416170262");
      all_values.push_back(Instrmt_30_set);
      all_compo_names.insert("Instrmt_30_set");

      {
        xml_element AID_33{"AID"};
        multiset<string> AID_33_set;
        AID_33.add_attribute("AltID", "SecurityAltID_t_585478181"); // 3
        AID_33_set.insert("SecurityAltID_t_585478181");
        AID_33.add_attribute("AltIDSrc", "C"); // 3
        AID_33_set.insert("C");
        all_values.push_back(AID_33_set);
        all_compo_names.insert("AID_33_set");

        Instrmt_30.add_element(AID_33);
      }
      {
        xml_element SecXML_33{"SecXML"};
        multiset<string> SecXML_33_set;
        SecXML_33.add_attribute("Schema", "SecurityXMLSchema_t_1105645931"); // 3
        SecXML_33_set.insert("SecurityXMLSchema_t_1105645931");
        all_values.push_back(SecXML_33_set);
        all_compo_names.insert("SecXML_33_set");

        Instrmt_30.add_element(SecXML_33);
      }
      {
        xml_element Evnt_33{"Evnt"};
        multiset<string> Evnt_33_set;
        Evnt_33.add_attribute("EventTyp", "99"); // 3
        Evnt_33_set.insert("99");
        Evnt_33.add_attribute("Dt", "EventDate_t_309799096"); // 3
        Evnt_33_set.insert("EventDate_t_309799096");
        Evnt_33.add_attribute("Tm", "EventTime_t_1416733313"); // 3
        Evnt_33_set.insert("EventTime_t_1416733313");
        Evnt_33.add_attribute("Px", "6064025.580000"); // 3
        Evnt_33_set.insert("6064025.580000");
        Evnt_33.add_attribute("Txt", "EventText_t_2141694670"); // 3
        Evnt_33_set.insert("EventText_t_2141694670");
        all_values.push_back(Evnt_33_set);
        all_compo_names.insert("Evnt_33_set");

        Instrmt_30.add_element(Evnt_33);
      }
      {
        xml_element Pty_167{"Pty"};
        multiset<string> Pty_167_set;
        Pty_167.add_attribute("ID", "InstrumentPartyID_t_1744510621"); // 3
        Pty_167_set.insert("InstrumentPartyID_t_1744510621");
        Pty_167.add_attribute("Src", "D"); // 3
        Pty_167_set.insert("D");
        Pty_167.add_attribute("R", "49"); // 3
        Pty_167_set.insert("49");
        all_values.push_back(Pty_167_set);
        all_compo_names.insert("Pty_167_set");

        {
          xml_element Sub_167{"Sub"};
          multiset<string> Sub_167_set;
          Sub_167.add_attribute("ID", "InstrumentPartySubID_t_87452643"); // 4
          Sub_167_set.insert("InstrumentPartySubID_t_87452643");
          Sub_167.add_attribute("Typ", "11"); // 4
          Sub_167_set.insert("11");
          all_values.push_back(Sub_167_set);
          all_compo_names.insert("Sub_167_set");

          Pty_167.add_element(Sub_167);
        }
        Instrmt_30.add_element(Pty_167);
      }
      {
        xml_element CmplxEvnt_30{"CmplxEvnt"};
        multiset<string> CmplxEvnt_30_set;
        CmplxEvnt_30.add_attribute("Typ", "8"); // 3
        CmplxEvnt_30_set.insert("8");
        CmplxEvnt_30.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_94605785"); // 3
        CmplxEvnt_30_set.insert("ComplexOptPayoutAmount_t_94605785");
        CmplxEvnt_30.add_attribute("Px", "19992900.260000"); // 3
        CmplxEvnt_30_set.insert("19992900.260000");
        CmplxEvnt_30.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_30_set.insert("4");
        CmplxEvnt_30.add_attribute("PxBndryPrcsn", "5468301.750000"); // 3
        CmplxEvnt_30_set.insert("5468301.750000");
        CmplxEvnt_30.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_30_set.insert("2");
        CmplxEvnt_30.add_attribute("Cond", "1"); // 3
        CmplxEvnt_30_set.insert("1");
        all_values.push_back(CmplxEvnt_30_set);
        all_compo_names.insert("CmplxEvnt_30_set");

        {
          xml_element EvntDts_30{"EvntDts"};
          multiset<string> EvntDts_30_set;
          EvntDts_30.add_attribute("StartDt", "ComplexEventStartDate_t_1660234646"); // 4
          EvntDts_30_set.insert("ComplexEventStartDate_t_1660234646");
          EvntDts_30.add_attribute("EndDt", "ComplexEventEndDate_t_380780851"); // 4
          EvntDts_30_set.insert("ComplexEventEndDate_t_380780851");
          all_values.push_back(EvntDts_30_set);
          all_compo_names.insert("EvntDts_30_set");

          {
            xml_element EvntTms_30{"EvntTms"};
            multiset<string> EvntTms_30_set;
            EvntTms_30.add_attribute("StartTm", "1388021733"); // 5
            EvntTms_30_set.insert("1388021733");
            EvntTms_30.add_attribute("EndTm", "1400791273"); // 5
            EvntTms_30_set.insert("1400791273");
            all_values.push_back(EvntTms_30_set);
            all_compo_names.insert("EvntTms_30_set");

            EvntDts_30.add_element(EvntTms_30);
          }
          CmplxEvnt_30.add_element(EvntDts_30);
        }
        Instrmt_30.add_element(CmplxEvnt_30);
      }
      Inc_1.add_element(Instrmt_30);
    }
    {
      xml_element Undly_42{"Undly"};
      multiset<string> Undly_42_set;
      Undly_42.add_attribute("Sym", "UnderlyingSymbol_t_403653002"); // 2
      Undly_42_set.insert("UnderlyingSymbol_t_403653002");
      Undly_42.add_attribute("Sfx", "CD"); // 2
      Undly_42_set.insert("CD");
      Undly_42.add_attribute("ID", "UnderlyingSecurityID_t_749952824"); // 2
      Undly_42_set.insert("UnderlyingSecurityID_t_749952824");
      Undly_42.add_attribute("Src", "G"); // 2
      Undly_42_set.insert("G");
      Undly_42.add_attribute("Prod", "1"); // 2
      Undly_42_set.insert("1");
      Undly_42.add_attribute("CFI", "UnderlyingCFICode_t_1226521824"); // 2
      Undly_42_set.insert("UnderlyingCFICode_t_1226521824");
      Undly_42.add_attribute("SecTyp", "WAR"); // 2
      Undly_42_set.insert("WAR");
      Undly_42.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1695952897"); // 2
      Undly_42_set.insert("UnderlyingSecuritySubType_t_1695952897");
      Undly_42.add_attribute("MMY", "2125158519"); // 2
      Undly_42_set.insert("2125158519");
      Undly_42.add_attribute("Mat", "UnderlyingMaturityDate_t_1446566900"); // 2
      Undly_42_set.insert("UnderlyingMaturityDate_t_1446566900");
      Undly_42.add_attribute("MatTm", "343666313"); // 2
      Undly_42_set.insert("343666313");
      Undly_42.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_287473968"); // 2
      Undly_42_set.insert("UnderlyingCouponPaymentDate_t_287473968");
      Undly_42.add_attribute("RestrctTyp", "MR"); // 2
      Undly_42_set.insert("MR");
      Undly_42.add_attribute("Snrty", "SB"); // 2
      Undly_42_set.insert("SB");
      Undly_42.add_attribute("NotlPctOut", "2816849.900000"); // 2
      Undly_42_set.insert("2816849.900000");
      Undly_42.add_attribute("OrigNotlPctOut", "3128435.380000"); // 2
      Undly_42_set.insert("3128435.380000");
      Undly_42.add_attribute("AttchPnt", "4054232.800000"); // 2
      Undly_42_set.insert("4054232.800000");
      Undly_42.add_attribute("DetchPnt", "16505996.880000"); // 2
      Undly_42_set.insert("16505996.880000");
      Undly_42.add_attribute("Issued", "UnderlyingIssueDate_t_400296182"); // 2
      Undly_42_set.insert("UnderlyingIssueDate_t_400296182");
      Undly_42.add_attribute("RepoCollSecTyp", "1683970563"); // 2
      Undly_42_set.insert("1683970563");
      Undly_42.add_attribute("RepoTrm", "1098736316"); // 2
      Undly_42_set.insert("1098736316");
      Undly_42.add_attribute("RepoRt", "4949019.670000"); // 2
      Undly_42_set.insert("4949019.670000");
      Undly_42.add_attribute("Fctr", "15357769.410000"); // 2
      Undly_42_set.insert("15357769.410000");
      Undly_42.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2006967389"); // 2
      Undly_42_set.insert("UnderlyingCreditRating_t_2006967389");
      Undly_42.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1041732143"); // 2
      Undly_42_set.insert("UnderlyingInstrRegistry_t_1041732143");
      Undly_42.add_attribute("Ctry", "2101715792"); // 2
      Undly_42_set.insert("2101715792");
      Undly_42.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2130889794"); // 2
      Undly_42_set.insert("UnderlyingStateOrProvinceOfIssue_t_2130889794");
      Undly_42.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_554483141"); // 2
      Undly_42_set.insert("UnderlyingLocaleOfIssue_t_554483141");
      Undly_42.add_attribute("Redeem", "UnderlyingRedemptionDate_t_335012995"); // 2
      Undly_42_set.insert("UnderlyingRedemptionDate_t_335012995");
      Undly_42.add_attribute("StrkPx", "13714278.790000"); // 2
      Undly_42_set.insert("13714278.790000");
      Undly_42.add_attribute("StrkCcy", "CHF"); // 2
      Undly_42_set.insert("CHF");
      Undly_42.add_attribute("OptA", "1386119165"); // 2
      Undly_42_set.insert("1386119165");
      Undly_42.add_attribute("Mult", "5577435.900000"); // 2
      Undly_42_set.insert("5577435.900000");
      Undly_42.add_attribute("MultTyp", "2"); // 2
      Undly_42_set.insert("2");
      Undly_42.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_42_set.insert("3");
      Undly_42.add_attribute("UOM", "Bcf"); // 2
      Undly_42_set.insert("Bcf");
      Undly_42.add_attribute("UOMQty", "10043376.740000"); // 2
      Undly_42_set.insert("10043376.740000");
      Undly_42.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_42_set.insert("MMbbl");
      Undly_42.add_attribute("PxUOMQty", "17619402.860000"); // 2
      Undly_42_set.insert("17619402.860000");
      Undly_42.add_attribute("TmUnit", "Mo"); // 2
      Undly_42_set.insert("Mo");
      Undly_42.add_attribute("ExerStyle", "0"); // 2
      Undly_42_set.insert("0");
      Undly_42.add_attribute("CpnRt", "20494142.540000"); // 2
      Undly_42_set.insert("20494142.540000");
      Undly_42.add_attribute("Exch", "UnderlyingSecurityExchange_t_1019237492"); // 2
      Undly_42_set.insert("UnderlyingSecurityExchange_t_1019237492");
      Undly_42.add_attribute("Issr", "UnderlyingIssuer_t_1191314667"); // 2
      Undly_42_set.insert("UnderlyingIssuer_t_1191314667");
      Undly_42.add_attribute("EncUndIssrLen", "183615597"); // 2
      Undly_42_set.insert("183615597");
      Undly_42.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1332081031"); // 2
      Undly_42_set.insert("EncodedUnderlyingIssuer_t_1332081031");
      Undly_42.add_attribute("Desc", "UnderlyingSecurityDesc_t_1596737947"); // 2
      Undly_42_set.insert("UnderlyingSecurityDesc_t_1596737947");
      Undly_42.add_attribute("EncUndSecDescLen", "1834215285"); // 2
      Undly_42_set.insert("1834215285");
      Undly_42.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1732377213"); // 2
      Undly_42_set.insert("EncodedUnderlyingSecurityDesc_t_1732377213");
      Undly_42.add_attribute("CPPgm", "UnderlyingCPProgram_t_1133224862"); // 2
      Undly_42_set.insert("UnderlyingCPProgram_t_1133224862");
      Undly_42.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_785467954"); // 2
      Undly_42_set.insert("UnderlyingCPRegType_t_785467954");
      Undly_42.add_attribute("AllocPct", "797955.320000"); // 2
      Undly_42_set.insert("797955.320000");
      Undly_42.add_attribute("Ccy", "EUR"); // 2
      Undly_42_set.insert("EUR");
      Undly_42.add_attribute("Qty", "11215276.750000"); // 2
      Undly_42_set.insert("11215276.750000");
      Undly_42.add_attribute("SettlTyp", "4"); // 2
      Undly_42_set.insert("4");
      Undly_42.add_attribute("CashAmt", "UnderlyingCashAmount_t_628357841"); // 2
      Undly_42_set.insert("UnderlyingCashAmount_t_628357841");
      Undly_42.add_attribute("CashTyp", "FIXED"); // 2
      Undly_42_set.insert("FIXED");
      Undly_42.add_attribute("Px", "8107632.950000"); // 2
      Undly_42_set.insert("8107632.950000");
      Undly_42.add_attribute("DirtPx", "19997857.210000"); // 2
      Undly_42_set.insert("19997857.210000");
      Undly_42.add_attribute("EndPx", "14838015.820000"); // 2
      Undly_42_set.insert("14838015.820000");
      Undly_42.add_attribute("StartVal", "UnderlyingStartValue_t_1549429293"); // 2
      Undly_42_set.insert("UnderlyingStartValue_t_1549429293");
      Undly_42.add_attribute("CurVal", "UnderlyingCurrentValue_t_1238421238"); // 2
      Undly_42_set.insert("UnderlyingCurrentValue_t_1238421238");
      Undly_42.add_attribute("EndVal", "UnderlyingEndValue_t_2041545173"); // 2
      Undly_42_set.insert("UnderlyingEndValue_t_2041545173");
      Undly_42.add_attribute("AdjQty", "653623.500000"); // 2
      Undly_42_set.insert("653623.500000");
      Undly_42.add_attribute("FxRate", "15875314.720000"); // 2
      Undly_42_set.insert("15875314.720000");
      Undly_42.add_attribute("FxRateCalc", "M"); // 2
      Undly_42_set.insert("M");
      Undly_42.add_attribute("CapValu", "UnderlyingCapValue_t_1069700024"); // 2
      Undly_42_set.insert("UnderlyingCapValue_t_1069700024");
      Undly_42.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1485110954"); // 2
      Undly_42_set.insert("UnderlyingSettlMethod_t_1485110954");
      Undly_42.add_attribute("PutCall", "1292783578"); // 2
      Undly_42_set.insert("1292783578");
      all_values.push_back(Undly_42_set);
      all_compo_names.insert("Undly_42_set");

      {
        xml_element UndAID_42{"UndAID"};
        multiset<string> UndAID_42_set;
        UndAID_42.add_attribute("AltID", "UnderlyingSecurityAltID_t_1373120951"); // 3
        UndAID_42_set.insert("UnderlyingSecurityAltID_t_1373120951");
        UndAID_42.add_attribute("AltIDSrc", "9"); // 3
        UndAID_42_set.insert("9");
        all_values.push_back(UndAID_42_set);
        all_compo_names.insert("UndAID_42_set");

        Undly_42.add_element(UndAID_42);
      }
      {
        xml_element Stip_69{"Stip"};
        multiset<string> Stip_69_set;
        Stip_69.add_attribute("Typ", "MINDNOM"); // 3
        Stip_69_set.insert("MINDNOM");
        Stip_69.add_attribute("Val", "UnderlyingStipValue_t_244874796"); // 3
        Stip_69_set.insert("UnderlyingStipValue_t_244874796");
        all_values.push_back(Stip_69_set);
        all_compo_names.insert("Stip_69_set");

        Undly_42.add_element(Stip_69);
      }
      {
        xml_element Pty_168{"Pty"};
        multiset<string> Pty_168_set;
        Pty_168.add_attribute("ID", "UnderlyingInstrumentPartyID_t_770187769"); // 3
        Pty_168_set.insert("UnderlyingInstrumentPartyID_t_770187769");
        Pty_168.add_attribute("Src", "F"); // 3
        Pty_168_set.insert("F");
        Pty_168.add_attribute("R", "58"); // 3
        Pty_168_set.insert("58");
        all_values.push_back(Pty_168_set);
        all_compo_names.insert("Pty_168_set");

        {
          xml_element Sub_168{"Sub"};
          multiset<string> Sub_168_set;
          Sub_168.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_219442068"); // 4
          Sub_168_set.insert("UnderlyingInstrumentPartySubID_t_219442068");
          Sub_168.add_attribute("Typ", "23"); // 4
          Sub_168_set.insert("23");
          all_values.push_back(Sub_168_set);
          all_compo_names.insert("Sub_168_set");

          Pty_168.add_element(Sub_168);
        }
        Undly_42.add_element(Pty_168);
      }
      Inc_1.add_element(Undly_42);
    }
    {
      xml_element Leg_40{"Leg"};
      multiset<string> Leg_40_set;
      Leg_40.add_attribute("Sym", "LegSymbol_t_1161849392"); // 2
      Leg_40_set.insert("LegSymbol_t_1161849392");
      Leg_40.add_attribute("Sfx", "CD"); // 2
      Leg_40_set.insert("CD");
      Leg_40.add_attribute("ID", "LegSecurityID_t_1850529373"); // 2
      Leg_40_set.insert("LegSecurityID_t_1850529373");
      Leg_40.add_attribute("Src", "F"); // 2
      Leg_40_set.insert("F");
      Leg_40.add_attribute("Prod", "4"); // 2
      Leg_40_set.insert("4");
      Leg_40.add_attribute("CFI", "LegCFICode_t_347997421"); // 2
      Leg_40_set.insert("LegCFICode_t_347997421");
      Leg_40.add_attribute("SecTyp", "RAN"); // 2
      Leg_40_set.insert("RAN");
      Leg_40.add_attribute("SecSubTyp", "LegSecuritySubType_t_202451738"); // 2
      Leg_40_set.insert("LegSecuritySubType_t_202451738");
      Leg_40.add_attribute("MMY", "976355262"); // 2
      Leg_40_set.insert("976355262");
      Leg_40.add_attribute("Mat", "LegMaturityDate_t_1891699768"); // 2
      Leg_40_set.insert("LegMaturityDate_t_1891699768");
      Leg_40.add_attribute("MatTm", "1013215034"); // 2
      Leg_40_set.insert("1013215034");
      Leg_40.add_attribute("CpnPmt", "LegCouponPaymentDate_t_828657335"); // 2
      Leg_40_set.insert("LegCouponPaymentDate_t_828657335");
      Leg_40.add_attribute("Issued", "LegIssueDate_t_1228017703"); // 2
      Leg_40_set.insert("LegIssueDate_t_1228017703");
      Leg_40.add_attribute("RepoCollSecTyp", "415160679"); // 2
      Leg_40_set.insert("415160679");
      Leg_40.add_attribute("RepoTrm", "2067078574"); // 2
      Leg_40_set.insert("2067078574");
      Leg_40.add_attribute("RepoRt", "11220792.280000"); // 2
      Leg_40_set.insert("11220792.280000");
      Leg_40.add_attribute("Fctr", "4805230.290000"); // 2
      Leg_40_set.insert("4805230.290000");
      Leg_40.add_attribute("CrdRtg", "LegCreditRating_t_1507126398"); // 2
      Leg_40_set.insert("LegCreditRating_t_1507126398");
      Leg_40.add_attribute("Rgstry", "LegInstrRegistry_t_652922520"); // 2
      Leg_40_set.insert("LegInstrRegistry_t_652922520");
      Leg_40.add_attribute("Ctry", "1550223053"); // 2
      Leg_40_set.insert("1550223053");
      Leg_40.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_844753704"); // 2
      Leg_40_set.insert("LegStateOrProvinceOfIssue_t_844753704");
      Leg_40.add_attribute("Lcl", "LegLocaleOfIssue_t_1945706098"); // 2
      Leg_40_set.insert("LegLocaleOfIssue_t_1945706098");
      Leg_40.add_attribute("Redeem", "LegRedemptionDate_t_775860357"); // 2
      Leg_40_set.insert("LegRedemptionDate_t_775860357");
      Leg_40.add_attribute("Strk", "4236268.060000"); // 2
      Leg_40_set.insert("4236268.060000");
      Leg_40.add_attribute("StrkCcy", "CHF"); // 2
      Leg_40_set.insert("CHF");
      Leg_40.add_attribute("OptA", "1193814575"); // 2
      Leg_40_set.insert("1193814575");
      Leg_40.add_attribute("Cmult", "2237827.690000"); // 2
      Leg_40_set.insert("2237827.690000");
      Leg_40.add_attribute("MultTyp", "2"); // 2
      Leg_40_set.insert("2");
      Leg_40.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_40_set.insert("3");
      Leg_40.add_attribute("UOM", "USD"); // 2
      Leg_40_set.insert("USD");
      Leg_40.add_attribute("UOMQty", "16120567.240000"); // 2
      Leg_40_set.insert("16120567.240000");
      Leg_40.add_attribute("PxUOM", "MWh"); // 2
      Leg_40_set.insert("MWh");
      Leg_40.add_attribute("PxUOMQty", "9918899.140000"); // 2
      Leg_40_set.insert("9918899.140000");
      Leg_40.add_attribute("TmUnit", "Mo"); // 2
      Leg_40_set.insert("Mo");
      Leg_40.add_attribute("ExerStyle", "1"); // 2
      Leg_40_set.insert("1");
      Leg_40.add_attribute("CpnRt", "13398873.350000"); // 2
      Leg_40_set.insert("13398873.350000");
      Leg_40.add_attribute("Exch", "LegSecurityExchange_t_921906952"); // 2
      Leg_40_set.insert("LegSecurityExchange_t_921906952");
      Leg_40.add_attribute("Issr", "LegIssuer_t_547593103"); // 2
      Leg_40_set.insert("LegIssuer_t_547593103");
      Leg_40.add_attribute("EncLegIssrLen", "168758950"); // 2
      Leg_40_set.insert("168758950");
      Leg_40.add_attribute("EncLegIssr", "EncodedLegIssuer_t_666123073"); // 2
      Leg_40_set.insert("EncodedLegIssuer_t_666123073");
      Leg_40.add_attribute("Desc", "LegSecurityDesc_t_1560808137"); // 2
      Leg_40_set.insert("LegSecurityDesc_t_1560808137");
      Leg_40.add_attribute("EncLegSecDescLen", "997416285"); // 2
      Leg_40_set.insert("997416285");
      Leg_40.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1894140776"); // 2
      Leg_40_set.insert("EncodedLegSecurityDesc_t_1894140776");
      Leg_40.add_attribute("RatioQty", "19759688.160000"); // 2
      Leg_40_set.insert("19759688.160000");
      Leg_40.add_attribute("Side", "C"); // 2
      Leg_40_set.insert("C");
      Leg_40.add_attribute("Ccy", "EUR"); // 2
      Leg_40_set.insert("EUR");
      Leg_40.add_attribute("Pool", "LegPool_t_276653961"); // 2
      Leg_40_set.insert("LegPool_t_276653961");
      Leg_40.add_attribute("Dated", "LegDatedDate_t_1521658876"); // 2
      Leg_40_set.insert("LegDatedDate_t_1521658876");
      Leg_40.add_attribute("CSetMo", "1859231250"); // 2
      Leg_40_set.insert("1859231250");
      Leg_40.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1121407666"); // 2
      Leg_40_set.insert("LegInterestAccrualDate_t_1121407666");
      Leg_40.add_attribute("PutCall", "1319881326"); // 2
      Leg_40_set.insert("1319881326");
      Leg_40.add_attribute("LegOptionRatio", "4876079.590000"); // 2
      Leg_40_set.insert("4876079.590000");
      Leg_40.add_attribute("Px", "15450344.720000"); // 2
      Leg_40_set.insert("15450344.720000");
      all_values.push_back(Leg_40_set);
      all_compo_names.insert("Leg_40_set");

      {
        xml_element LegAID_40{"LegAID"};
        multiset<string> LegAID_40_set;
        LegAID_40.add_attribute("SecAltID", "LegSecurityAltID_t_165334314"); // 3
        LegAID_40_set.insert("LegSecurityAltID_t_165334314");
        LegAID_40.add_attribute("SecAltIDSrc", "D"); // 3
        LegAID_40_set.insert("D");
        all_values.push_back(LegAID_40_set);
        all_compo_names.insert("LegAID_40_set");

        Leg_40.add_element(LegAID_40);
      }
      Inc_1.add_element(Leg_40);
    }
    {
      xml_element Yield_8{"Yield"};
      multiset<string> Yield_8_set;
      Yield_8.add_attribute("Typ", "AFTERTAX"); // 2
      Yield_8_set.insert("AFTERTAX");
      Yield_8.add_attribute("Yld", "3891170.830000"); // 2
      Yield_8_set.insert("3891170.830000");
      Yield_8.add_attribute("CalcDt", "YieldCalcDate_t_1958550444"); // 2
      Yield_8_set.insert("YieldCalcDate_t_1958550444");
      Yield_8.add_attribute("RedDt", "YieldRedemptionDate_t_2004622043"); // 2
      Yield_8_set.insert("YieldRedemptionDate_t_2004622043");
      Yield_8.add_attribute("RedPx", "16779612.720000"); // 2
      Yield_8_set.insert("16779612.720000");
      Yield_8.add_attribute("RedPxTyp", "16"); // 2
      Yield_8_set.insert("16");
      all_values.push_back(Yield_8_set);
      all_compo_names.insert("Yield_8_set");

      Inc_1.add_element(Yield_8);
    }
    {
      xml_element SprdBnchmkCurve_13{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_13_set;
      SprdBnchmkCurve_13.add_attribute("Spread", "4755783.210000"); // 2
      SprdBnchmkCurve_13_set.insert("4755783.210000");
      SprdBnchmkCurve_13.add_attribute("Ccy", "CHF"); // 2
      SprdBnchmkCurve_13_set.insert("CHF");
      SprdBnchmkCurve_13.add_attribute("Name", "Euribor"); // 2
      SprdBnchmkCurve_13_set.insert("Euribor");
      SprdBnchmkCurve_13.add_attribute("Point", "BenchmarkCurvePoint_t_1862254874"); // 2
      SprdBnchmkCurve_13_set.insert("BenchmarkCurvePoint_t_1862254874");
      SprdBnchmkCurve_13.add_attribute("Px", "9037648.250000"); // 2
      SprdBnchmkCurve_13_set.insert("9037648.250000");
      SprdBnchmkCurve_13.add_attribute("PxTyp", "2"); // 2
      SprdBnchmkCurve_13_set.insert("2");
      SprdBnchmkCurve_13.add_attribute("SecID", "BenchmarkSecurityID_t_2031013824"); // 2
      SprdBnchmkCurve_13_set.insert("BenchmarkSecurityID_t_2031013824");
      SprdBnchmkCurve_13.add_attribute("SecIDSrc", "J"); // 2
      SprdBnchmkCurve_13_set.insert("J");
      all_values.push_back(SprdBnchmkCurve_13_set);
      all_compo_names.insert("SprdBnchmkCurve_13_set");

      Inc_1.add_element(SprdBnchmkCurve_13);
    }
    {
      xml_element RtSrc_7{"RtSrc"};
      multiset<string> RtSrc_7_set;
      RtSrc_7.add_attribute("RtSrc", "2"); // 2
      RtSrc_7_set.insert("2");
      RtSrc_7.add_attribute("RtSrcTyp", "0"); // 2
      RtSrc_7_set.insert("0");
      RtSrc_7.add_attribute("RefPg", "ReferencePage_t_1316545026"); // 2
      RtSrc_7_set.insert("ReferencePage_t_1316545026");
      all_values.push_back(RtSrc_7_set);
      all_compo_names.insert("RtSrc_7_set");

      Inc_1.add_element(RtSrc_7);
    }
    {
      xml_element SecSizesGrp_1{"SecSizesGrp"};
      multiset<string> SecSizesGrp_1_set;
      SecSizesGrp_1.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_1_set.insert("1");
      SecSizesGrp_1.add_attribute("MDSecSize", "17979576.730000"); // 2
      SecSizesGrp_1_set.insert("17979576.730000");
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
      xml_element Pty_169{"Pty"};
      multiset<string> Pty_169_set;
      Pty_169.add_attribute("ID", "PartyID_t_919130643"); // 2
      Pty_169_set.insert("PartyID_t_919130643");
      Pty_169.add_attribute("Src", "I"); // 2
      Pty_169_set.insert("I");
      Pty_169.add_attribute("R", "57"); // 2
      Pty_169_set.insert("57");
      all_values.push_back(Pty_169_set);
      all_compo_names.insert("Pty_169_set");

      {
        xml_element Sub_169{"Sub"};
        multiset<string> Sub_169_set;
        Sub_169.add_attribute("ID", "PartySubID_t_630878245"); // 3
        Sub_169_set.insert("PartySubID_t_630878245");
        Sub_169.add_attribute("Typ", "6"); // 3
        Sub_169_set.insert("6");
        all_values.push_back(Sub_169_set);
        all_compo_names.insert("Sub_169_set");

        Pty_169.add_element(Sub_169);
      }
      Inc_1.add_element(Pty_169);
    }
    elt.add_element(Inc_1);
  } // end Inc
  { // Rtg
    xml_element Rtg_4{"Rtg"};
    multiset<string> Rtg_4_set;
    Rtg_4.add_attribute("RtgTyp", "2"); // 1
    Rtg_4_set.insert("2");
    Rtg_4.add_attribute("RtgID", "RoutingID_t_446086477"); // 1
    Rtg_4_set.insert("RoutingID_t_446086477");
    all_values.push_back(Rtg_4_set);
    all_compo_names.insert("Rtg_4_set");

    elt.add_element(Rtg_4);
  } // end Rtg
  { // Rtg
    xml_element Rtg_5{"Rtg"};
    multiset<string> Rtg_5_set;
    Rtg_5.add_attribute("RtgTyp", "4"); // 1
    Rtg_5_set.insert("4");
    Rtg_5.add_attribute("RtgID", "RoutingID_t_479345669"); // 1
    Rtg_5_set.insert("RoutingID_t_479345669");
    all_values.push_back(Rtg_5_set);
    all_compo_names.insert("Rtg_5_set");

    elt.add_element(Rtg_5);
  } // end Rtg
  { // Rtg
    xml_element Rtg_6{"Rtg"};
    multiset<string> Rtg_6_set;
    Rtg_6.add_attribute("RtgTyp", "2"); // 1
    Rtg_6_set.insert("2");
    Rtg_6.add_attribute("RtgID", "RoutingID_t_1286305686"); // 1
    Rtg_6_set.insert("RoutingID_t_1286305686");
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
