#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MarketDataSnapshotFullRefresh.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MarketDataSnapshotFullRefresh_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataFull" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_message_t_0;
  elt.add_attribute("TotNumRpts", "431869750"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("431869750");
  elt.add_attribute("RptID", "84991151"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("84991151");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1947664957"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("ClearingBusinessDate_t_1947664957");
  elt.add_attribute("MDBkTyp", "2"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("2");
  elt.add_attribute("MDSubBkTyp", "1984974205"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1984974205");
  elt.add_attribute("MktDepth", "1045483843"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1045483843");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_441938317"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDFeedType_t_441938317");
  elt.add_attribute("RefInd", "false"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("false");
  elt.add_attribute("TrdDt", "TradeDate_t_723587183"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("TradeDate_t_723587183");
  elt.add_attribute("ReqID", "MDReqID_t_1131343887"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDReqID_t_1131343887");
  elt.add_attribute("MDStrmID", "MDStreamID_t_1180521180"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDStreamID_t_1180521180");
  elt.add_attribute("FinclStat", "2"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("2");
  elt.add_attribute("CorpActn", "P"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("P");
  elt.add_attribute("NetChgPrevDay", "14087199.880000"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("14087199.880000");
  elt.add_attribute("ApplQuDepth", "1090093899"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1090093899");
  elt.add_attribute("ApplQuResolution", "0"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("0");
  all_values.push_back(MarketDataSnapshotFullRefresh_message_t_0);
  all_compo_names.insert("MarketDataSnapshotFullRefresh_message_t");

  { // Hdr
    xml_element Hdr_42{"Hdr"};
    multiset<string> Hdr_42_set;
    Hdr_42.add_attribute("SeqNum", "905590916"); // 1
    Hdr_42_set.insert("905590916");
    Hdr_42.add_attribute("SID", "SenderCompID_t_1203361478"); // 1
    Hdr_42_set.insert("SenderCompID_t_1203361478");
    Hdr_42.add_attribute("TID", "TargetCompID_t_845542868"); // 1
    Hdr_42_set.insert("TargetCompID_t_845542868");
    Hdr_42.add_attribute("OBID", "OnBehalfOfCompID_t_83791586"); // 1
    Hdr_42_set.insert("OnBehalfOfCompID_t_83791586");
    Hdr_42.add_attribute("D2ID", "DeliverToCompID_t_2057612203"); // 1
    Hdr_42_set.insert("DeliverToCompID_t_2057612203");
    Hdr_42.add_attribute("SSub", "SenderSubID_t_1950204659"); // 1
    Hdr_42_set.insert("SenderSubID_t_1950204659");
    Hdr_42.add_attribute("SLoc", "SenderLocationID_t_166600776"); // 1
    Hdr_42_set.insert("SenderLocationID_t_166600776");
    Hdr_42.add_attribute("TSub", "TargetSubID_t_1229158490"); // 1
    Hdr_42_set.insert("TargetSubID_t_1229158490");
    Hdr_42.add_attribute("TLoc", "TargetLocationID_t_683621885"); // 1
    Hdr_42_set.insert("TargetLocationID_t_683621885");
    Hdr_42.add_attribute("OBSub", "OnBehalfOfSubID_t_462413963"); // 1
    Hdr_42_set.insert("OnBehalfOfSubID_t_462413963");
    Hdr_42.add_attribute("OBLoc", "OnBehalfOfLocationID_t_485065368"); // 1
    Hdr_42_set.insert("OnBehalfOfLocationID_t_485065368");
    Hdr_42.add_attribute("D2Sub", "DeliverToSubID_t_54157805"); // 1
    Hdr_42_set.insert("DeliverToSubID_t_54157805");
    Hdr_42.add_attribute("D2Loc", "DeliverToLocationID_t_1766708954"); // 1
    Hdr_42_set.insert("DeliverToLocationID_t_1766708954");
    Hdr_42.add_attribute("PosDup", "Y"); // 1
    Hdr_42_set.insert("Y");
    Hdr_42.add_attribute("PosRsnd", "N"); // 1
    Hdr_42_set.insert("N");
    Hdr_42.add_attribute("Snt", "SendingTime_t_51095056"); // 1
    Hdr_42_set.insert("SendingTime_t_51095056");
    Hdr_42.add_attribute("OrigSnt", "OrigSendingTime_t_416850216"); // 1
    Hdr_42_set.insert("OrigSendingTime_t_416850216");
    Hdr_42.add_attribute("MsgEncd", "MessageEncoding_t_437272711"); // 1
    Hdr_42_set.insert("MessageEncoding_t_437272711");
    all_values.push_back(Hdr_42_set);
    all_compo_names.insert("Hdr_42_set");

    {
      xml_element Hop_42{"Hop"};
      multiset<string> Hop_42_set;
      Hop_42.add_attribute("ID", "HopCompID_t_1545296621"); // 2
      Hop_42_set.insert("HopCompID_t_1545296621");
      Hop_42.add_attribute("Ref", "254340774"); // 2
      Hop_42_set.insert("254340774");
      Hop_42.add_attribute("Snt", "HopSendingTime_t_1482756555"); // 2
      Hop_42_set.insert("HopSendingTime_t_1482756555");
      all_values.push_back(Hop_42_set);
      all_compo_names.insert("Hop_42_set");

      Hdr_42.add_element(Hop_42);
    }
    elt.add_element(Hdr_42);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_7{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_7_set;
    ApplSeqCtrl_7.add_attribute("ApplID", "ApplID_t_1987234938"); // 1
    ApplSeqCtrl_7_set.insert("ApplID_t_1987234938");
    ApplSeqCtrl_7.add_attribute("ApplSeqNum", "570656307"); // 1
    ApplSeqCtrl_7_set.insert("570656307");
    ApplSeqCtrl_7.add_attribute("ApplLastSeqNum", "58860090"); // 1
    ApplSeqCtrl_7_set.insert("58860090");
    ApplSeqCtrl_7.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_7_set.insert("false");
    all_values.push_back(ApplSeqCtrl_7_set);
    all_compo_names.insert("ApplSeqCtrl_7_set");

    elt.add_element(ApplSeqCtrl_7);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_34{"Instrmt"};
    multiset<string> Instrmt_34_set;
    Instrmt_34.add_attribute("Sym", "Symbol_t_1751177487"); // 1
    Instrmt_34_set.insert("Symbol_t_1751177487");
    Instrmt_34.add_attribute("Sfx", "CD"); // 1
    Instrmt_34_set.insert("CD");
    Instrmt_34.add_attribute("ID", "SecurityID_t_1160763381"); // 1
    Instrmt_34_set.insert("SecurityID_t_1160763381");
    Instrmt_34.add_attribute("Src", "8"); // 1
    Instrmt_34_set.insert("8");
    Instrmt_34.add_attribute("Prod", "9"); // 1
    Instrmt_34_set.insert("9");
    Instrmt_34.add_attribute("ProdCmplx", "ProductComplex_t_2077441466"); // 1
    Instrmt_34_set.insert("ProductComplex_t_2077441466");
    Instrmt_34.add_attribute("SecGrp", "SecurityGroup_t_1918004743"); // 1
    Instrmt_34_set.insert("SecurityGroup_t_1918004743");
    Instrmt_34.add_attribute("CFI", "CFICode_t_1406668243"); // 1
    Instrmt_34_set.insert("CFICode_t_1406668243");
    Instrmt_34.add_attribute("SecTyp", "TPRN"); // 1
    Instrmt_34_set.insert("TPRN");
    Instrmt_34.add_attribute("SubTyp", "SecuritySubType_t_2001796330"); // 1
    Instrmt_34_set.insert("SecuritySubType_t_2001796330");
    Instrmt_34.add_attribute("MMY", "1316796799"); // 1
    Instrmt_34_set.insert("1316796799");
    Instrmt_34.add_attribute("MatDt", "MaturityDate_t_578221697"); // 1
    Instrmt_34_set.insert("MaturityDate_t_578221697");
    Instrmt_34.add_attribute("MatTm", "20913458"); // 1
    Instrmt_34_set.insert("20913458");
    Instrmt_34.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_398471641"); // 1
    Instrmt_34_set.insert("SettleOnOpenFlag_t_398471641");
    Instrmt_34.add_attribute("AsgnMeth", "1261843583"); // 1
    Instrmt_34_set.insert("1261843583");
    Instrmt_34.add_attribute("Status", "2"); // 1
    Instrmt_34_set.insert("2");
    Instrmt_34.add_attribute("CpnPmt", "CouponPaymentDate_t_883537010"); // 1
    Instrmt_34_set.insert("CouponPaymentDate_t_883537010");
    Instrmt_34.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_34_set.insert("FR");
    Instrmt_34.add_attribute("Snrty", "SR"); // 1
    Instrmt_34_set.insert("SR");
    Instrmt_34.add_attribute("NotlPctOut", "12153960.750000"); // 1
    Instrmt_34_set.insert("12153960.750000");
    Instrmt_34.add_attribute("OrigNotlPctOut", "19530927.900000"); // 1
    Instrmt_34_set.insert("19530927.900000");
    Instrmt_34.add_attribute("AttchPnt", "1536477.830000"); // 1
    Instrmt_34_set.insert("1536477.830000");
    Instrmt_34.add_attribute("DetchPnt", "16322462.910000"); // 1
    Instrmt_34_set.insert("16322462.910000");
    Instrmt_34.add_attribute("Issued", "IssueDate_t_242881854"); // 1
    Instrmt_34_set.insert("IssueDate_t_242881854");
    Instrmt_34.add_attribute("RepoCollSecTyp", "1698944404"); // 1
    Instrmt_34_set.insert("1698944404");
    Instrmt_34.add_attribute("RepoTrm", "1886587065"); // 1
    Instrmt_34_set.insert("1886587065");
    Instrmt_34.add_attribute("RepoRt", "17256384.090000"); // 1
    Instrmt_34_set.insert("17256384.090000");
    Instrmt_34.add_attribute("Fctr", "15386956.940000"); // 1
    Instrmt_34_set.insert("15386956.940000");
    Instrmt_34.add_attribute("CrdRtg", "CreditRating_t_309759724"); // 1
    Instrmt_34_set.insert("CreditRating_t_309759724");
    Instrmt_34.add_attribute("Rgstry", "InstrRegistry_t_1784498499"); // 1
    Instrmt_34_set.insert("InstrRegistry_t_1784498499");
    Instrmt_34.add_attribute("IssuCtry", "362307224"); // 1
    Instrmt_34_set.insert("362307224");
    Instrmt_34.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2060937211"); // 1
    Instrmt_34_set.insert("StateOrProvinceOfIssue_t_2060937211");
    Instrmt_34.add_attribute("Lcl", "LocaleOfIssue_t_897711365"); // 1
    Instrmt_34_set.insert("LocaleOfIssue_t_897711365");
    Instrmt_34.add_attribute("Redeem", "RedemptionDate_t_1523070605"); // 1
    Instrmt_34_set.insert("RedemptionDate_t_1523070605");
    Instrmt_34.add_attribute("StrkPx", "9258673.910000"); // 1
    Instrmt_34_set.insert("9258673.910000");
    Instrmt_34.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_34_set.insert("CAN");
    Instrmt_34.add_attribute("StrkMult", "6963884.860000"); // 1
    Instrmt_34_set.insert("6963884.860000");
    Instrmt_34.add_attribute("StrkValu", "3602027.260000"); // 1
    Instrmt_34_set.insert("3602027.260000");
    Instrmt_34.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_34_set.insert("3");
    Instrmt_34.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_34_set.insert("4");
    Instrmt_34.add_attribute("StrkPxBndryPrcsn", "16769995.250000"); // 1
    Instrmt_34_set.insert("16769995.250000");
    Instrmt_34.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_34_set.insert("4");
    Instrmt_34.add_attribute("OptAt", "571614627"); // 1
    Instrmt_34_set.insert("571614627");
    Instrmt_34.add_attribute("Mult", "20754711.660000"); // 1
    Instrmt_34_set.insert("20754711.660000");
    Instrmt_34.add_attribute("MultTyp", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_34_set.insert("3");
    Instrmt_34.add_attribute("MinPxIncr", "8115245.280000"); // 1
    Instrmt_34_set.insert("8115245.280000");
    Instrmt_34.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1089628483"); // 1
    Instrmt_34_set.insert("MinPriceIncrementAmount_t_1089628483");
    Instrmt_34.add_attribute("UOM", "USD"); // 1
    Instrmt_34_set.insert("USD");
    Instrmt_34.add_attribute("UOMQty", "20269206.030000"); // 1
    Instrmt_34_set.insert("20269206.030000");
    Instrmt_34.add_attribute("PxUOM", "USD"); // 1
    Instrmt_34_set.insert("USD");
    Instrmt_34.add_attribute("PxUOMQty", "13111425.590000"); // 1
    Instrmt_34_set.insert("13111425.590000");
    Instrmt_34.add_attribute("SettlMeth", "P"); // 1
    Instrmt_34_set.insert("P");
    Instrmt_34.add_attribute("ExerStyle", "2"); // 1
    Instrmt_34_set.insert("2");
    Instrmt_34.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_34_set.insert("3");
    Instrmt_34.add_attribute("OptPayAmt", "OptPayoutAmount_t_1250786664"); // 1
    Instrmt_34_set.insert("OptPayoutAmount_t_1250786664");
    Instrmt_34.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_34_set.insert("STD");
    Instrmt_34.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_34_set.insert("FUTDA");
    Instrmt_34.add_attribute("ListMeth", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("CapPx", "3532890.910000"); // 1
    Instrmt_34_set.insert("3532890.910000");
    Instrmt_34.add_attribute("FlrPx", "6161225.860000"); // 1
    Instrmt_34_set.insert("6161225.860000");
    Instrmt_34.add_attribute("PutCall", "0"); // 1
    Instrmt_34_set.insert("0");
    Instrmt_34.add_attribute("FlexInd", "true"); // 1
    Instrmt_34_set.insert("true");
    Instrmt_34.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_34_set.insert("true");
    Instrmt_34.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_34_set.insert("Wk");
    Instrmt_34.add_attribute("CpnRt", "2045349.390000"); // 1
    Instrmt_34_set.insert("2045349.390000");
    Instrmt_34.add_attribute("Exch", "SecurityExchange_t_1444737967"); // 1
    Instrmt_34_set.insert("SecurityExchange_t_1444737967");
    Instrmt_34.add_attribute("PosLmt", "948772182"); // 1
    Instrmt_34_set.insert("948772182");
    Instrmt_34.add_attribute("NTPosLmt", "564737665"); // 1
    Instrmt_34_set.insert("564737665");
    Instrmt_34.add_attribute("Issr", "Issuer_t_1525783429"); // 1
    Instrmt_34_set.insert("Issuer_t_1525783429");
    Instrmt_34.add_attribute("EncIssrLen", "1499473350"); // 1
    Instrmt_34_set.insert("1499473350");
    Instrmt_34.add_attribute("EncIssr", "EncodedIssuer_t_94253542"); // 1
    Instrmt_34_set.insert("EncodedIssuer_t_94253542");
    Instrmt_34.add_attribute("Desc", "SecurityDesc_t_37566941"); // 1
    Instrmt_34_set.insert("SecurityDesc_t_37566941");
    Instrmt_34.add_attribute("EncSecDescLen", "2071087977"); // 1
    Instrmt_34_set.insert("2071087977");
    Instrmt_34.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_22241060"); // 1
    Instrmt_34_set.insert("EncodedSecurityDesc_t_22241060");
    Instrmt_34.add_attribute("Pool", "Pool_t_1958677683"); // 1
    Instrmt_34_set.insert("Pool_t_1958677683");
    Instrmt_34.add_attribute("CSetMo", "978546378"); // 1
    Instrmt_34_set.insert("978546378");
    Instrmt_34.add_attribute("CPPgm", "1"); // 1
    Instrmt_34_set.insert("1");
    Instrmt_34.add_attribute("CPRegT", "CPRegType_t_900822518"); // 1
    Instrmt_34_set.insert("CPRegType_t_900822518");
    Instrmt_34.add_attribute("Dated", "DatedDate_t_2136041154"); // 1
    Instrmt_34_set.insert("DatedDate_t_2136041154");
    Instrmt_34.add_attribute("IntAcrl", "InterestAccrualDate_t_713202544"); // 1
    Instrmt_34_set.insert("InterestAccrualDate_t_713202544");
    all_values.push_back(Instrmt_34_set);
    all_compo_names.insert("Instrmt_34_set");

    {
      xml_element AID_37{"AID"};
      multiset<string> AID_37_set;
      AID_37.add_attribute("AltID", "SecurityAltID_t_1796060144"); // 2
      AID_37_set.insert("SecurityAltID_t_1796060144");
      AID_37.add_attribute("AltIDSrc", "G"); // 2
      AID_37_set.insert("G");
      all_values.push_back(AID_37_set);
      all_compo_names.insert("AID_37_set");

      Instrmt_34.add_element(AID_37);
    }
    {
      xml_element SecXML_37{"SecXML"};
      multiset<string> SecXML_37_set;
      SecXML_37.add_attribute("Schema", "SecurityXMLSchema_t_77402143"); // 2
      SecXML_37_set.insert("SecurityXMLSchema_t_77402143");
      all_values.push_back(SecXML_37_set);
      all_compo_names.insert("SecXML_37_set");

      Instrmt_34.add_element(SecXML_37);
    }
    {
      xml_element Evnt_37{"Evnt"};
      multiset<string> Evnt_37_set;
      Evnt_37.add_attribute("EventTyp", "15"); // 2
      Evnt_37_set.insert("15");
      Evnt_37.add_attribute("Dt", "EventDate_t_14819733"); // 2
      Evnt_37_set.insert("EventDate_t_14819733");
      Evnt_37.add_attribute("Tm", "EventTime_t_1328188808"); // 2
      Evnt_37_set.insert("EventTime_t_1328188808");
      Evnt_37.add_attribute("Px", "15029702.160000"); // 2
      Evnt_37_set.insert("15029702.160000");
      Evnt_37.add_attribute("Txt", "EventText_t_268635096"); // 2
      Evnt_37_set.insert("EventText_t_268635096");
      all_values.push_back(Evnt_37_set);
      all_compo_names.insert("Evnt_37_set");

      Instrmt_34.add_element(Evnt_37);
    }
    {
      xml_element Pty_186{"Pty"};
      multiset<string> Pty_186_set;
      Pty_186.add_attribute("ID", "InstrumentPartyID_t_741251549"); // 2
      Pty_186_set.insert("InstrumentPartyID_t_741251549");
      Pty_186.add_attribute("Src", "2"); // 2
      Pty_186_set.insert("2");
      Pty_186.add_attribute("R", "49"); // 2
      Pty_186_set.insert("49");
      all_values.push_back(Pty_186_set);
      all_compo_names.insert("Pty_186_set");

      {
        xml_element Sub_186{"Sub"};
        multiset<string> Sub_186_set;
        Sub_186.add_attribute("ID", "InstrumentPartySubID_t_67767853"); // 3
        Sub_186_set.insert("InstrumentPartySubID_t_67767853");
        Sub_186.add_attribute("Typ", "8"); // 3
        Sub_186_set.insert("8");
        all_values.push_back(Sub_186_set);
        all_compo_names.insert("Sub_186_set");

        Pty_186.add_element(Sub_186);
      }
      Instrmt_34.add_element(Pty_186);
    }
    {
      xml_element CmplxEvnt_34{"CmplxEvnt"};
      multiset<string> CmplxEvnt_34_set;
      CmplxEvnt_34.add_attribute("Typ", "4"); // 2
      CmplxEvnt_34_set.insert("4");
      CmplxEvnt_34.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_320151549"); // 2
      CmplxEvnt_34_set.insert("ComplexOptPayoutAmount_t_320151549");
      CmplxEvnt_34.add_attribute("Px", "11643110.550000"); // 2
      CmplxEvnt_34_set.insert("11643110.550000");
      CmplxEvnt_34.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_34_set.insert("2");
      CmplxEvnt_34.add_attribute("PxBndryPrcsn", "12689237.310000"); // 2
      CmplxEvnt_34_set.insert("12689237.310000");
      CmplxEvnt_34.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_34_set.insert("2");
      CmplxEvnt_34.add_attribute("Cond", "2"); // 2
      CmplxEvnt_34_set.insert("2");
      all_values.push_back(CmplxEvnt_34_set);
      all_compo_names.insert("CmplxEvnt_34_set");

      {
        xml_element EvntDts_34{"EvntDts"};
        multiset<string> EvntDts_34_set;
        EvntDts_34.add_attribute("StartDt", "ComplexEventStartDate_t_620913433"); // 3
        EvntDts_34_set.insert("ComplexEventStartDate_t_620913433");
        EvntDts_34.add_attribute("EndDt", "ComplexEventEndDate_t_1823302262"); // 3
        EvntDts_34_set.insert("ComplexEventEndDate_t_1823302262");
        all_values.push_back(EvntDts_34_set);
        all_compo_names.insert("EvntDts_34_set");

        {
          xml_element EvntTms_34{"EvntTms"};
          multiset<string> EvntTms_34_set;
          EvntTms_34.add_attribute("StartTm", "1737071916"); // 4
          EvntTms_34_set.insert("1737071916");
          EvntTms_34.add_attribute("EndTm", "544517763"); // 4
          EvntTms_34_set.insert("544517763");
          all_values.push_back(EvntTms_34_set);
          all_compo_names.insert("EvntTms_34_set");

          EvntDts_34.add_element(EvntTms_34);
        }
        CmplxEvnt_34.add_element(EvntDts_34);
      }
      Instrmt_34.add_element(CmplxEvnt_34);
    }
    elt.add_element(Instrmt_34);
  } // end Instrmt
  { // Undly
    xml_element Undly_46{"Undly"};
    multiset<string> Undly_46_set;
    Undly_46.add_attribute("Sym", "UnderlyingSymbol_t_1548265952"); // 1
    Undly_46_set.insert("UnderlyingSymbol_t_1548265952");
    Undly_46.add_attribute("Sfx", "WI"); // 1
    Undly_46_set.insert("WI");
    Undly_46.add_attribute("ID", "UnderlyingSecurityID_t_531825263"); // 1
    Undly_46_set.insert("UnderlyingSecurityID_t_531825263");
    Undly_46.add_attribute("Src", "3"); // 1
    Undly_46_set.insert("3");
    Undly_46.add_attribute("Prod", "12"); // 1
    Undly_46_set.insert("12");
    Undly_46.add_attribute("CFI", "UnderlyingCFICode_t_1245027808"); // 1
    Undly_46_set.insert("UnderlyingCFICode_t_1245027808");
    Undly_46.add_attribute("SecTyp", "VRDN"); // 1
    Undly_46_set.insert("VRDN");
    Undly_46.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_663838064"); // 1
    Undly_46_set.insert("UnderlyingSecuritySubType_t_663838064");
    Undly_46.add_attribute("MMY", "1322429951"); // 1
    Undly_46_set.insert("1322429951");
    Undly_46.add_attribute("Mat", "UnderlyingMaturityDate_t_736877294"); // 1
    Undly_46_set.insert("UnderlyingMaturityDate_t_736877294");
    Undly_46.add_attribute("MatTm", "678657798"); // 1
    Undly_46_set.insert("678657798");
    Undly_46.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_503135111"); // 1
    Undly_46_set.insert("UnderlyingCouponPaymentDate_t_503135111");
    Undly_46.add_attribute("RestrctTyp", "MM"); // 1
    Undly_46_set.insert("MM");
    Undly_46.add_attribute("Snrty", "SD"); // 1
    Undly_46_set.insert("SD");
    Undly_46.add_attribute("NotlPctOut", "12443866.600000"); // 1
    Undly_46_set.insert("12443866.600000");
    Undly_46.add_attribute("OrigNotlPctOut", "19486231.690000"); // 1
    Undly_46_set.insert("19486231.690000");
    Undly_46.add_attribute("AttchPnt", "18320505.760000"); // 1
    Undly_46_set.insert("18320505.760000");
    Undly_46.add_attribute("DetchPnt", "13121545.140000"); // 1
    Undly_46_set.insert("13121545.140000");
    Undly_46.add_attribute("Issued", "UnderlyingIssueDate_t_760915637"); // 1
    Undly_46_set.insert("UnderlyingIssueDate_t_760915637");
    Undly_46.add_attribute("RepoCollSecTyp", "561034155"); // 1
    Undly_46_set.insert("561034155");
    Undly_46.add_attribute("RepoTrm", "1632306063"); // 1
    Undly_46_set.insert("1632306063");
    Undly_46.add_attribute("RepoRt", "19252266.920000"); // 1
    Undly_46_set.insert("19252266.920000");
    Undly_46.add_attribute("Fctr", "7347557.010000"); // 1
    Undly_46_set.insert("7347557.010000");
    Undly_46.add_attribute("CrdRtg", "UnderlyingCreditRating_t_753746146"); // 1
    Undly_46_set.insert("UnderlyingCreditRating_t_753746146");
    Undly_46.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1506791764"); // 1
    Undly_46_set.insert("UnderlyingInstrRegistry_t_1506791764");
    Undly_46.add_attribute("Ctry", "286777028"); // 1
    Undly_46_set.insert("286777028");
    Undly_46.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1374659579"); // 1
    Undly_46_set.insert("UnderlyingStateOrProvinceOfIssue_t_1374659579");
    Undly_46.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1182610378"); // 1
    Undly_46_set.insert("UnderlyingLocaleOfIssue_t_1182610378");
    Undly_46.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2023848945"); // 1
    Undly_46_set.insert("UnderlyingRedemptionDate_t_2023848945");
    Undly_46.add_attribute("StrkPx", "19191773.420000"); // 1
    Undly_46_set.insert("19191773.420000");
    Undly_46.add_attribute("StrkCcy", "CHF"); // 1
    Undly_46_set.insert("CHF");
    Undly_46.add_attribute("OptA", "1294757835"); // 1
    Undly_46_set.insert("1294757835");
    Undly_46.add_attribute("Mult", "14124953.160000"); // 1
    Undly_46_set.insert("14124953.160000");
    Undly_46.add_attribute("MultTyp", "2"); // 1
    Undly_46_set.insert("2");
    Undly_46.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_46_set.insert("4");
    Undly_46.add_attribute("UOM", "Bu"); // 1
    Undly_46_set.insert("Bu");
    Undly_46.add_attribute("UOMQty", "16764173.900000"); // 1
    Undly_46_set.insert("16764173.900000");
    Undly_46.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_46_set.insert("MMbbl");
    Undly_46.add_attribute("PxUOMQty", "18324694.280000"); // 1
    Undly_46_set.insert("18324694.280000");
    Undly_46.add_attribute("TmUnit", "Min"); // 1
    Undly_46_set.insert("Min");
    Undly_46.add_attribute("ExerStyle", "2"); // 1
    Undly_46_set.insert("2");
    Undly_46.add_attribute("CpnRt", "1881208.910000"); // 1
    Undly_46_set.insert("1881208.910000");
    Undly_46.add_attribute("Exch", "UnderlyingSecurityExchange_t_358174898"); // 1
    Undly_46_set.insert("UnderlyingSecurityExchange_t_358174898");
    Undly_46.add_attribute("Issr", "UnderlyingIssuer_t_801200943"); // 1
    Undly_46_set.insert("UnderlyingIssuer_t_801200943");
    Undly_46.add_attribute("EncUndIssrLen", "1432507552"); // 1
    Undly_46_set.insert("1432507552");
    Undly_46.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_159314419"); // 1
    Undly_46_set.insert("EncodedUnderlyingIssuer_t_159314419");
    Undly_46.add_attribute("Desc", "UnderlyingSecurityDesc_t_485767871"); // 1
    Undly_46_set.insert("UnderlyingSecurityDesc_t_485767871");
    Undly_46.add_attribute("EncUndSecDescLen", "597178418"); // 1
    Undly_46_set.insert("597178418");
    Undly_46.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_920230057"); // 1
    Undly_46_set.insert("EncodedUnderlyingSecurityDesc_t_920230057");
    Undly_46.add_attribute("CPPgm", "UnderlyingCPProgram_t_1046802026"); // 1
    Undly_46_set.insert("UnderlyingCPProgram_t_1046802026");
    Undly_46.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_82000833"); // 1
    Undly_46_set.insert("UnderlyingCPRegType_t_82000833");
    Undly_46.add_attribute("AllocPct", "6979731.010000"); // 1
    Undly_46_set.insert("6979731.010000");
    Undly_46.add_attribute("Ccy", "EUR"); // 1
    Undly_46_set.insert("EUR");
    Undly_46.add_attribute("Qty", "572812.180000"); // 1
    Undly_46_set.insert("572812.180000");
    Undly_46.add_attribute("SettlTyp", "5"); // 1
    Undly_46_set.insert("5");
    Undly_46.add_attribute("CashAmt", "UnderlyingCashAmount_t_62922910"); // 1
    Undly_46_set.insert("UnderlyingCashAmount_t_62922910");
    Undly_46.add_attribute("CashTyp", "FIXED"); // 1
    Undly_46_set.insert("FIXED");
    Undly_46.add_attribute("Px", "19447000.530000"); // 1
    Undly_46_set.insert("19447000.530000");
    Undly_46.add_attribute("DirtPx", "19821002.530000"); // 1
    Undly_46_set.insert("19821002.530000");
    Undly_46.add_attribute("EndPx", "21205616.490000"); // 1
    Undly_46_set.insert("21205616.490000");
    Undly_46.add_attribute("StartVal", "UnderlyingStartValue_t_1221847654"); // 1
    Undly_46_set.insert("UnderlyingStartValue_t_1221847654");
    Undly_46.add_attribute("CurVal", "UnderlyingCurrentValue_t_1129374440"); // 1
    Undly_46_set.insert("UnderlyingCurrentValue_t_1129374440");
    Undly_46.add_attribute("EndVal", "UnderlyingEndValue_t_1385573318"); // 1
    Undly_46_set.insert("UnderlyingEndValue_t_1385573318");
    Undly_46.add_attribute("AdjQty", "8006000.770000"); // 1
    Undly_46_set.insert("8006000.770000");
    Undly_46.add_attribute("FxRate", "17882702.750000"); // 1
    Undly_46_set.insert("17882702.750000");
    Undly_46.add_attribute("FxRateCalc", "M"); // 1
    Undly_46_set.insert("M");
    Undly_46.add_attribute("CapValu", "UnderlyingCapValue_t_329533819"); // 1
    Undly_46_set.insert("UnderlyingCapValue_t_329533819");
    Undly_46.add_attribute("SetMeth", "UnderlyingSettlMethod_t_963520526"); // 1
    Undly_46_set.insert("UnderlyingSettlMethod_t_963520526");
    Undly_46.add_attribute("PutCall", "1580598574"); // 1
    Undly_46_set.insert("1580598574");
    all_values.push_back(Undly_46_set);
    all_compo_names.insert("Undly_46_set");

    {
      xml_element UndAID_46{"UndAID"};
      multiset<string> UndAID_46_set;
      UndAID_46.add_attribute("AltID", "UnderlyingSecurityAltID_t_595344855"); // 2
      UndAID_46_set.insert("UnderlyingSecurityAltID_t_595344855");
      UndAID_46.add_attribute("AltIDSrc", "8"); // 2
      UndAID_46_set.insert("8");
      all_values.push_back(UndAID_46_set);
      all_compo_names.insert("UndAID_46_set");

      Undly_46.add_element(UndAID_46);
    }
    {
      xml_element Stip_73{"Stip"};
      multiset<string> Stip_73_set;
      Stip_73.add_attribute("Typ", "MININCR"); // 2
      Stip_73_set.insert("MININCR");
      Stip_73.add_attribute("Val", "UnderlyingStipValue_t_953519753"); // 2
      Stip_73_set.insert("UnderlyingStipValue_t_953519753");
      all_values.push_back(Stip_73_set);
      all_compo_names.insert("Stip_73_set");

      Undly_46.add_element(Stip_73);
    }
    {
      xml_element Pty_187{"Pty"};
      multiset<string> Pty_187_set;
      Pty_187.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1618629518"); // 2
      Pty_187_set.insert("UnderlyingInstrumentPartyID_t_1618629518");
      Pty_187.add_attribute("Src", "7"); // 2
      Pty_187_set.insert("7");
      Pty_187.add_attribute("R", "75"); // 2
      Pty_187_set.insert("75");
      all_values.push_back(Pty_187_set);
      all_compo_names.insert("Pty_187_set");

      {
        xml_element Sub_187{"Sub"};
        multiset<string> Sub_187_set;
        Sub_187.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2104397389"); // 3
        Sub_187_set.insert("UnderlyingInstrumentPartySubID_t_2104397389");
        Sub_187.add_attribute("Typ", "33"); // 3
        Sub_187_set.insert("33");
        all_values.push_back(Sub_187_set);
        all_compo_names.insert("Sub_187_set");

        Pty_187.add_element(Sub_187);
      }
      Undly_46.add_element(Pty_187);
    }
    elt.add_element(Undly_46);
  } // end Undly
  { // Undly
    xml_element Undly_47{"Undly"};
    multiset<string> Undly_47_set;
    Undly_47.add_attribute("Sym", "UnderlyingSymbol_t_2033064230"); // 1
    Undly_47_set.insert("UnderlyingSymbol_t_2033064230");
    Undly_47.add_attribute("Sfx", "CD"); // 1
    Undly_47_set.insert("CD");
    Undly_47.add_attribute("ID", "UnderlyingSecurityID_t_1732922621"); // 1
    Undly_47_set.insert("UnderlyingSecurityID_t_1732922621");
    Undly_47.add_attribute("Src", "A"); // 1
    Undly_47_set.insert("A");
    Undly_47.add_attribute("Prod", "3"); // 1
    Undly_47_set.insert("3");
    Undly_47.add_attribute("CFI", "UnderlyingCFICode_t_421185952"); // 1
    Undly_47_set.insert("UnderlyingCFICode_t_421185952");
    Undly_47.add_attribute("SecTyp", "FAC"); // 1
    Undly_47_set.insert("FAC");
    Undly_47.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_558640955"); // 1
    Undly_47_set.insert("UnderlyingSecuritySubType_t_558640955");
    Undly_47.add_attribute("MMY", "484108862"); // 1
    Undly_47_set.insert("484108862");
    Undly_47.add_attribute("Mat", "UnderlyingMaturityDate_t_1880726498"); // 1
    Undly_47_set.insert("UnderlyingMaturityDate_t_1880726498");
    Undly_47.add_attribute("MatTm", "355857360"); // 1
    Undly_47_set.insert("355857360");
    Undly_47.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_318725467"); // 1
    Undly_47_set.insert("UnderlyingCouponPaymentDate_t_318725467");
    Undly_47.add_attribute("RestrctTyp", "XR"); // 1
    Undly_47_set.insert("XR");
    Undly_47.add_attribute("Snrty", "SR"); // 1
    Undly_47_set.insert("SR");
    Undly_47.add_attribute("NotlPctOut", "14480999.080000"); // 1
    Undly_47_set.insert("14480999.080000");
    Undly_47.add_attribute("OrigNotlPctOut", "10918941.690000"); // 1
    Undly_47_set.insert("10918941.690000");
    Undly_47.add_attribute("AttchPnt", "2308214.440000"); // 1
    Undly_47_set.insert("2308214.440000");
    Undly_47.add_attribute("DetchPnt", "10888865.350000"); // 1
    Undly_47_set.insert("10888865.350000");
    Undly_47.add_attribute("Issued", "UnderlyingIssueDate_t_840023316"); // 1
    Undly_47_set.insert("UnderlyingIssueDate_t_840023316");
    Undly_47.add_attribute("RepoCollSecTyp", "560355263"); // 1
    Undly_47_set.insert("560355263");
    Undly_47.add_attribute("RepoTrm", "2052407061"); // 1
    Undly_47_set.insert("2052407061");
    Undly_47.add_attribute("RepoRt", "2731382.420000"); // 1
    Undly_47_set.insert("2731382.420000");
    Undly_47.add_attribute("Fctr", "11557001.190000"); // 1
    Undly_47_set.insert("11557001.190000");
    Undly_47.add_attribute("CrdRtg", "UnderlyingCreditRating_t_722351988"); // 1
    Undly_47_set.insert("UnderlyingCreditRating_t_722351988");
    Undly_47.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2041857708"); // 1
    Undly_47_set.insert("UnderlyingInstrRegistry_t_2041857708");
    Undly_47.add_attribute("Ctry", "2109219872"); // 1
    Undly_47_set.insert("2109219872");
    Undly_47.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_193497858"); // 1
    Undly_47_set.insert("UnderlyingStateOrProvinceOfIssue_t_193497858");
    Undly_47.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_948117430"); // 1
    Undly_47_set.insert("UnderlyingLocaleOfIssue_t_948117430");
    Undly_47.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1074570397"); // 1
    Undly_47_set.insert("UnderlyingRedemptionDate_t_1074570397");
    Undly_47.add_attribute("StrkPx", "1504115.990000"); // 1
    Undly_47_set.insert("1504115.990000");
    Undly_47.add_attribute("StrkCcy", "EUR"); // 1
    Undly_47_set.insert("EUR");
    Undly_47.add_attribute("OptA", "1154127367"); // 1
    Undly_47_set.insert("1154127367");
    Undly_47.add_attribute("Mult", "369945.430000"); // 1
    Undly_47_set.insert("369945.430000");
    Undly_47.add_attribute("MultTyp", "0"); // 1
    Undly_47_set.insert("0");
    Undly_47.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_47_set.insert("0");
    Undly_47.add_attribute("UOM", "MMbbl"); // 1
    Undly_47_set.insert("MMbbl");
    Undly_47.add_attribute("UOMQty", "370559.160000"); // 1
    Undly_47_set.insert("370559.160000");
    Undly_47.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_47_set.insert("MMBtu");
    Undly_47.add_attribute("PxUOMQty", "9422893.580000"); // 1
    Undly_47_set.insert("9422893.580000");
    Undly_47.add_attribute("TmUnit", "H"); // 1
    Undly_47_set.insert("H");
    Undly_47.add_attribute("ExerStyle", "2"); // 1
    Undly_47_set.insert("2");
    Undly_47.add_attribute("CpnRt", "12610148.250000"); // 1
    Undly_47_set.insert("12610148.250000");
    Undly_47.add_attribute("Exch", "UnderlyingSecurityExchange_t_1624103266"); // 1
    Undly_47_set.insert("UnderlyingSecurityExchange_t_1624103266");
    Undly_47.add_attribute("Issr", "UnderlyingIssuer_t_2136636897"); // 1
    Undly_47_set.insert("UnderlyingIssuer_t_2136636897");
    Undly_47.add_attribute("EncUndIssrLen", "561631085"); // 1
    Undly_47_set.insert("561631085");
    Undly_47.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_568513787"); // 1
    Undly_47_set.insert("EncodedUnderlyingIssuer_t_568513787");
    Undly_47.add_attribute("Desc", "UnderlyingSecurityDesc_t_219974693"); // 1
    Undly_47_set.insert("UnderlyingSecurityDesc_t_219974693");
    Undly_47.add_attribute("EncUndSecDescLen", "1650517620"); // 1
    Undly_47_set.insert("1650517620");
    Undly_47.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1408537103"); // 1
    Undly_47_set.insert("EncodedUnderlyingSecurityDesc_t_1408537103");
    Undly_47.add_attribute("CPPgm", "UnderlyingCPProgram_t_780329957"); // 1
    Undly_47_set.insert("UnderlyingCPProgram_t_780329957");
    Undly_47.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1555441033"); // 1
    Undly_47_set.insert("UnderlyingCPRegType_t_1555441033");
    Undly_47.add_attribute("AllocPct", "16816753.460000"); // 1
    Undly_47_set.insert("16816753.460000");
    Undly_47.add_attribute("Ccy", "CAN"); // 1
    Undly_47_set.insert("CAN");
    Undly_47.add_attribute("Qty", "15760494.060000"); // 1
    Undly_47_set.insert("15760494.060000");
    Undly_47.add_attribute("SettlTyp", "5"); // 1
    Undly_47_set.insert("5");
    Undly_47.add_attribute("CashAmt", "UnderlyingCashAmount_t_323807231"); // 1
    Undly_47_set.insert("UnderlyingCashAmount_t_323807231");
    Undly_47.add_attribute("CashTyp", "DIFF"); // 1
    Undly_47_set.insert("DIFF");
    Undly_47.add_attribute("Px", "8248530.500000"); // 1
    Undly_47_set.insert("8248530.500000");
    Undly_47.add_attribute("DirtPx", "4742188.310000"); // 1
    Undly_47_set.insert("4742188.310000");
    Undly_47.add_attribute("EndPx", "8282387.590000"); // 1
    Undly_47_set.insert("8282387.590000");
    Undly_47.add_attribute("StartVal", "UnderlyingStartValue_t_1785004029"); // 1
    Undly_47_set.insert("UnderlyingStartValue_t_1785004029");
    Undly_47.add_attribute("CurVal", "UnderlyingCurrentValue_t_1628346198"); // 1
    Undly_47_set.insert("UnderlyingCurrentValue_t_1628346198");
    Undly_47.add_attribute("EndVal", "UnderlyingEndValue_t_865233303"); // 1
    Undly_47_set.insert("UnderlyingEndValue_t_865233303");
    Undly_47.add_attribute("AdjQty", "11812250.440000"); // 1
    Undly_47_set.insert("11812250.440000");
    Undly_47.add_attribute("FxRate", "12727797.650000"); // 1
    Undly_47_set.insert("12727797.650000");
    Undly_47.add_attribute("FxRateCalc", "M"); // 1
    Undly_47_set.insert("M");
    Undly_47.add_attribute("CapValu", "UnderlyingCapValue_t_1218280961"); // 1
    Undly_47_set.insert("UnderlyingCapValue_t_1218280961");
    Undly_47.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1475854288"); // 1
    Undly_47_set.insert("UnderlyingSettlMethod_t_1475854288");
    Undly_47.add_attribute("PutCall", "118219508"); // 1
    Undly_47_set.insert("118219508");
    all_values.push_back(Undly_47_set);
    all_compo_names.insert("Undly_47_set");

    {
      xml_element UndAID_47{"UndAID"};
      multiset<string> UndAID_47_set;
      UndAID_47.add_attribute("AltID", "UnderlyingSecurityAltID_t_988579727"); // 2
      UndAID_47_set.insert("UnderlyingSecurityAltID_t_988579727");
      UndAID_47.add_attribute("AltIDSrc", "C"); // 2
      UndAID_47_set.insert("C");
      all_values.push_back(UndAID_47_set);
      all_compo_names.insert("UndAID_47_set");

      Undly_47.add_element(UndAID_47);
    }
    {
      xml_element Stip_74{"Stip"};
      multiset<string> Stip_74_set;
      Stip_74.add_attribute("Typ", "INSURED"); // 2
      Stip_74_set.insert("INSURED");
      Stip_74.add_attribute("Val", "UnderlyingStipValue_t_465199345"); // 2
      Stip_74_set.insert("UnderlyingStipValue_t_465199345");
      all_values.push_back(Stip_74_set);
      all_compo_names.insert("Stip_74_set");

      Undly_47.add_element(Stip_74);
    }
    {
      xml_element Pty_188{"Pty"};
      multiset<string> Pty_188_set;
      Pty_188.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2023939420"); // 2
      Pty_188_set.insert("UnderlyingInstrumentPartyID_t_2023939420");
      Pty_188.add_attribute("Src", "C"); // 2
      Pty_188_set.insert("C");
      Pty_188.add_attribute("R", "63"); // 2
      Pty_188_set.insert("63");
      all_values.push_back(Pty_188_set);
      all_compo_names.insert("Pty_188_set");

      {
        xml_element Sub_188{"Sub"};
        multiset<string> Sub_188_set;
        Sub_188.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_96430466"); // 3
        Sub_188_set.insert("UnderlyingInstrumentPartySubID_t_96430466");
        Sub_188.add_attribute("Typ", "10"); // 3
        Sub_188_set.insert("10");
        all_values.push_back(Sub_188_set);
        all_compo_names.insert("Sub_188_set");

        Pty_188.add_element(Sub_188);
      }
      Undly_47.add_element(Pty_188);
    }
    elt.add_element(Undly_47);
  } // end Undly
  { // Leg
    xml_element Leg_46{"Leg"};
    multiset<string> Leg_46_set;
    Leg_46.add_attribute("Sym", "LegSymbol_t_876760423"); // 1
    Leg_46_set.insert("LegSymbol_t_876760423");
    Leg_46.add_attribute("Sfx", "WI"); // 1
    Leg_46_set.insert("WI");
    Leg_46.add_attribute("ID", "LegSecurityID_t_1976441934"); // 1
    Leg_46_set.insert("LegSecurityID_t_1976441934");
    Leg_46.add_attribute("Src", "C"); // 1
    Leg_46_set.insert("C");
    Leg_46.add_attribute("Prod", "2"); // 1
    Leg_46_set.insert("2");
    Leg_46.add_attribute("CFI", "LegCFICode_t_1405007693"); // 1
    Leg_46_set.insert("LegCFICode_t_1405007693");
    Leg_46.add_attribute("SecTyp", "TB"); // 1
    Leg_46_set.insert("TB");
    Leg_46.add_attribute("SecSubTyp", "LegSecuritySubType_t_1305973382"); // 1
    Leg_46_set.insert("LegSecuritySubType_t_1305973382");
    Leg_46.add_attribute("MMY", "1781690882"); // 1
    Leg_46_set.insert("1781690882");
    Leg_46.add_attribute("Mat", "LegMaturityDate_t_1240442553"); // 1
    Leg_46_set.insert("LegMaturityDate_t_1240442553");
    Leg_46.add_attribute("MatTm", "1780192213"); // 1
    Leg_46_set.insert("1780192213");
    Leg_46.add_attribute("CpnPmt", "LegCouponPaymentDate_t_462445993"); // 1
    Leg_46_set.insert("LegCouponPaymentDate_t_462445993");
    Leg_46.add_attribute("Issued", "LegIssueDate_t_877962935"); // 1
    Leg_46_set.insert("LegIssueDate_t_877962935");
    Leg_46.add_attribute("RepoCollSecTyp", "1261054764"); // 1
    Leg_46_set.insert("1261054764");
    Leg_46.add_attribute("RepoTrm", "1327679296"); // 1
    Leg_46_set.insert("1327679296");
    Leg_46.add_attribute("RepoRt", "20591879.790000"); // 1
    Leg_46_set.insert("20591879.790000");
    Leg_46.add_attribute("Fctr", "3863508.810000"); // 1
    Leg_46_set.insert("3863508.810000");
    Leg_46.add_attribute("CrdRtg", "LegCreditRating_t_503609447"); // 1
    Leg_46_set.insert("LegCreditRating_t_503609447");
    Leg_46.add_attribute("Rgstry", "LegInstrRegistry_t_1129985292"); // 1
    Leg_46_set.insert("LegInstrRegistry_t_1129985292");
    Leg_46.add_attribute("Ctry", "1862205169"); // 1
    Leg_46_set.insert("1862205169");
    Leg_46.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_621828955"); // 1
    Leg_46_set.insert("LegStateOrProvinceOfIssue_t_621828955");
    Leg_46.add_attribute("Lcl", "LegLocaleOfIssue_t_2118565020"); // 1
    Leg_46_set.insert("LegLocaleOfIssue_t_2118565020");
    Leg_46.add_attribute("Redeem", "LegRedemptionDate_t_1749507692"); // 1
    Leg_46_set.insert("LegRedemptionDate_t_1749507692");
    Leg_46.add_attribute("Strk", "20010632.890000"); // 1
    Leg_46_set.insert("20010632.890000");
    Leg_46.add_attribute("StrkCcy", "CAN"); // 1
    Leg_46_set.insert("CAN");
    Leg_46.add_attribute("OptA", "1794445061"); // 1
    Leg_46_set.insert("1794445061");
    Leg_46.add_attribute("Cmult", "14699938.500000"); // 1
    Leg_46_set.insert("14699938.500000");
    Leg_46.add_attribute("MultTyp", "1"); // 1
    Leg_46_set.insert("1");
    Leg_46.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_46_set.insert("0");
    Leg_46.add_attribute("UOM", "MWh"); // 1
    Leg_46_set.insert("MWh");
    Leg_46.add_attribute("UOMQty", "4516707.060000"); // 1
    Leg_46_set.insert("4516707.060000");
    Leg_46.add_attribute("PxUOM", "MWh"); // 1
    Leg_46_set.insert("MWh");
    Leg_46.add_attribute("PxUOMQty", "15937187.250000"); // 1
    Leg_46_set.insert("15937187.250000");
    Leg_46.add_attribute("TmUnit", "D"); // 1
    Leg_46_set.insert("D");
    Leg_46.add_attribute("ExerStyle", "2"); // 1
    Leg_46_set.insert("2");
    Leg_46.add_attribute("CpnRt", "8512427.700000"); // 1
    Leg_46_set.insert("8512427.700000");
    Leg_46.add_attribute("Exch", "LegSecurityExchange_t_1532567060"); // 1
    Leg_46_set.insert("LegSecurityExchange_t_1532567060");
    Leg_46.add_attribute("Issr", "LegIssuer_t_2083373468"); // 1
    Leg_46_set.insert("LegIssuer_t_2083373468");
    Leg_46.add_attribute("EncLegIssrLen", "485450004"); // 1
    Leg_46_set.insert("485450004");
    Leg_46.add_attribute("EncLegIssr", "EncodedLegIssuer_t_625525966"); // 1
    Leg_46_set.insert("EncodedLegIssuer_t_625525966");
    Leg_46.add_attribute("Desc", "LegSecurityDesc_t_1716082033"); // 1
    Leg_46_set.insert("LegSecurityDesc_t_1716082033");
    Leg_46.add_attribute("EncLegSecDescLen", "947895998"); // 1
    Leg_46_set.insert("947895998");
    Leg_46.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1503488901"); // 1
    Leg_46_set.insert("EncodedLegSecurityDesc_t_1503488901");
    Leg_46.add_attribute("RatioQty", "8296531.490000"); // 1
    Leg_46_set.insert("8296531.490000");
    Leg_46.add_attribute("Side", "F"); // 1
    Leg_46_set.insert("F");
    Leg_46.add_attribute("Ccy", "CHF"); // 1
    Leg_46_set.insert("CHF");
    Leg_46.add_attribute("Pool", "LegPool_t_631701093"); // 1
    Leg_46_set.insert("LegPool_t_631701093");
    Leg_46.add_attribute("Dated", "LegDatedDate_t_397694877"); // 1
    Leg_46_set.insert("LegDatedDate_t_397694877");
    Leg_46.add_attribute("CSetMo", "930725552"); // 1
    Leg_46_set.insert("930725552");
    Leg_46.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1253530049"); // 1
    Leg_46_set.insert("LegInterestAccrualDate_t_1253530049");
    Leg_46.add_attribute("PutCall", "368776249"); // 1
    Leg_46_set.insert("368776249");
    Leg_46.add_attribute("LegOptionRatio", "5327495.970000"); // 1
    Leg_46_set.insert("5327495.970000");
    Leg_46.add_attribute("Px", "11071096.900000"); // 1
    Leg_46_set.insert("11071096.900000");
    all_values.push_back(Leg_46_set);
    all_compo_names.insert("Leg_46_set");

    {
      xml_element LegAID_46{"LegAID"};
      multiset<string> LegAID_46_set;
      LegAID_46.add_attribute("SecAltID", "LegSecurityAltID_t_805056966"); // 2
      LegAID_46_set.insert("LegSecurityAltID_t_805056966");
      LegAID_46.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_46_set.insert("K");
      all_values.push_back(LegAID_46_set);
      all_compo_names.insert("LegAID_46_set");

      Leg_46.add_element(LegAID_46);
    }
    elt.add_element(Leg_46);
  } // end Leg
  { // Leg
    xml_element Leg_47{"Leg"};
    multiset<string> Leg_47_set;
    Leg_47.add_attribute("Sym", "LegSymbol_t_754071103"); // 1
    Leg_47_set.insert("LegSymbol_t_754071103");
    Leg_47.add_attribute("Sfx", "WI"); // 1
    Leg_47_set.insert("WI");
    Leg_47.add_attribute("ID", "LegSecurityID_t_1733623345"); // 1
    Leg_47_set.insert("LegSecurityID_t_1733623345");
    Leg_47.add_attribute("Src", "7"); // 1
    Leg_47_set.insert("7");
    Leg_47.add_attribute("Prod", "11"); // 1
    Leg_47_set.insert("11");
    Leg_47.add_attribute("CFI", "LegCFICode_t_37810403"); // 1
    Leg_47_set.insert("LegCFICode_t_37810403");
    Leg_47.add_attribute("SecTyp", "SECLOAN"); // 1
    Leg_47_set.insert("SECLOAN");
    Leg_47.add_attribute("SecSubTyp", "LegSecuritySubType_t_1338562685"); // 1
    Leg_47_set.insert("LegSecuritySubType_t_1338562685");
    Leg_47.add_attribute("MMY", "1154787960"); // 1
    Leg_47_set.insert("1154787960");
    Leg_47.add_attribute("Mat", "LegMaturityDate_t_270082280"); // 1
    Leg_47_set.insert("LegMaturityDate_t_270082280");
    Leg_47.add_attribute("MatTm", "42321808"); // 1
    Leg_47_set.insert("42321808");
    Leg_47.add_attribute("CpnPmt", "LegCouponPaymentDate_t_539871372"); // 1
    Leg_47_set.insert("LegCouponPaymentDate_t_539871372");
    Leg_47.add_attribute("Issued", "LegIssueDate_t_205972100"); // 1
    Leg_47_set.insert("LegIssueDate_t_205972100");
    Leg_47.add_attribute("RepoCollSecTyp", "527771812"); // 1
    Leg_47_set.insert("527771812");
    Leg_47.add_attribute("RepoTrm", "1165397338"); // 1
    Leg_47_set.insert("1165397338");
    Leg_47.add_attribute("RepoRt", "19220541.340000"); // 1
    Leg_47_set.insert("19220541.340000");
    Leg_47.add_attribute("Fctr", "14756678.100000"); // 1
    Leg_47_set.insert("14756678.100000");
    Leg_47.add_attribute("CrdRtg", "LegCreditRating_t_521402591"); // 1
    Leg_47_set.insert("LegCreditRating_t_521402591");
    Leg_47.add_attribute("Rgstry", "LegInstrRegistry_t_604223635"); // 1
    Leg_47_set.insert("LegInstrRegistry_t_604223635");
    Leg_47.add_attribute("Ctry", "1603759457"); // 1
    Leg_47_set.insert("1603759457");
    Leg_47.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1936595824"); // 1
    Leg_47_set.insert("LegStateOrProvinceOfIssue_t_1936595824");
    Leg_47.add_attribute("Lcl", "LegLocaleOfIssue_t_1820227666"); // 1
    Leg_47_set.insert("LegLocaleOfIssue_t_1820227666");
    Leg_47.add_attribute("Redeem", "LegRedemptionDate_t_87976902"); // 1
    Leg_47_set.insert("LegRedemptionDate_t_87976902");
    Leg_47.add_attribute("Strk", "1868070.530000"); // 1
    Leg_47_set.insert("1868070.530000");
    Leg_47.add_attribute("StrkCcy", "CAN"); // 1
    Leg_47_set.insert("CAN");
    Leg_47.add_attribute("OptA", "555583302"); // 1
    Leg_47_set.insert("555583302");
    Leg_47.add_attribute("Cmult", "11362191.680000"); // 1
    Leg_47_set.insert("11362191.680000");
    Leg_47.add_attribute("MultTyp", "2"); // 1
    Leg_47_set.insert("2");
    Leg_47.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_47_set.insert("3");
    Leg_47.add_attribute("UOM", "lbs"); // 1
    Leg_47_set.insert("lbs");
    Leg_47.add_attribute("UOMQty", "10552040.970000"); // 1
    Leg_47_set.insert("10552040.970000");
    Leg_47.add_attribute("PxUOM", "Bbl"); // 1
    Leg_47_set.insert("Bbl");
    Leg_47.add_attribute("PxUOMQty", "7335882.790000"); // 1
    Leg_47_set.insert("7335882.790000");
    Leg_47.add_attribute("TmUnit", "D"); // 1
    Leg_47_set.insert("D");
    Leg_47.add_attribute("ExerStyle", "1"); // 1
    Leg_47_set.insert("1");
    Leg_47.add_attribute("CpnRt", "7713986.820000"); // 1
    Leg_47_set.insert("7713986.820000");
    Leg_47.add_attribute("Exch", "LegSecurityExchange_t_245334553"); // 1
    Leg_47_set.insert("LegSecurityExchange_t_245334553");
    Leg_47.add_attribute("Issr", "LegIssuer_t_424130435"); // 1
    Leg_47_set.insert("LegIssuer_t_424130435");
    Leg_47.add_attribute("EncLegIssrLen", "1926186642"); // 1
    Leg_47_set.insert("1926186642");
    Leg_47.add_attribute("EncLegIssr", "EncodedLegIssuer_t_515416833"); // 1
    Leg_47_set.insert("EncodedLegIssuer_t_515416833");
    Leg_47.add_attribute("Desc", "LegSecurityDesc_t_466452243"); // 1
    Leg_47_set.insert("LegSecurityDesc_t_466452243");
    Leg_47.add_attribute("EncLegSecDescLen", "318574366"); // 1
    Leg_47_set.insert("318574366");
    Leg_47.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_721388934"); // 1
    Leg_47_set.insert("EncodedLegSecurityDesc_t_721388934");
    Leg_47.add_attribute("RatioQty", "9942240.550000"); // 1
    Leg_47_set.insert("9942240.550000");
    Leg_47.add_attribute("Side", "A"); // 1
    Leg_47_set.insert("A");
    Leg_47.add_attribute("Ccy", "USD"); // 1
    Leg_47_set.insert("USD");
    Leg_47.add_attribute("Pool", "LegPool_t_2005374296"); // 1
    Leg_47_set.insert("LegPool_t_2005374296");
    Leg_47.add_attribute("Dated", "LegDatedDate_t_1100183055"); // 1
    Leg_47_set.insert("LegDatedDate_t_1100183055");
    Leg_47.add_attribute("CSetMo", "1926167675"); // 1
    Leg_47_set.insert("1926167675");
    Leg_47.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1794486472"); // 1
    Leg_47_set.insert("LegInterestAccrualDate_t_1794486472");
    Leg_47.add_attribute("PutCall", "772927074"); // 1
    Leg_47_set.insert("772927074");
    Leg_47.add_attribute("LegOptionRatio", "20141445.770000"); // 1
    Leg_47_set.insert("20141445.770000");
    Leg_47.add_attribute("Px", "19812935.250000"); // 1
    Leg_47_set.insert("19812935.250000");
    all_values.push_back(Leg_47_set);
    all_compo_names.insert("Leg_47_set");

    {
      xml_element LegAID_47{"LegAID"};
      multiset<string> LegAID_47_set;
      LegAID_47.add_attribute("SecAltID", "LegSecurityAltID_t_1376396645"); // 2
      LegAID_47_set.insert("LegSecurityAltID_t_1376396645");
      LegAID_47.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_47_set.insert("L");
      all_values.push_back(LegAID_47_set);
      all_compo_names.insert("LegAID_47_set");

      Leg_47.add_element(LegAID_47);
    }
    elt.add_element(Leg_47);
  } // end Leg
  { // Full
    xml_element Full_0{"Full"};
    multiset<string> Full_0_set;
    Full_0.add_attribute("Typ", "5"); // 1
    Full_0_set.insert("5");
    Full_0.add_attribute("ID", "MDEntryID_t_1509300875"); // 1
    Full_0_set.insert("MDEntryID_t_1509300875");
    Full_0.add_attribute("Px", "17500334.480000"); // 1
    Full_0_set.insert("17500334.480000");
    Full_0.add_attribute("PxTyp", "15"); // 1
    Full_0_set.insert("15");
    Full_0.add_attribute("OrdTyp", "D"); // 1
    Full_0_set.insert("D");
    Full_0.add_attribute("Ccy", "USD"); // 1
    Full_0_set.insert("USD");
    Full_0.add_attribute("SettlCcy", "CAN"); // 1
    Full_0_set.insert("CAN");
    Full_0.add_attribute("Sz", "8700840.600000"); // 1
    Full_0_set.insert("8700840.600000");
    Full_0.add_attribute("LotTyp", "4"); // 1
    Full_0_set.insert("4");
    Full_0.add_attribute("Dt", "600455422"); // 1
    Full_0_set.insert("600455422");
    Full_0.add_attribute("Tm", "648787054"); // 1
    Full_0_set.insert("648787054");
    Full_0.add_attribute("TickDirctn", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("Mkt", "MDMkt_t_1066907665"); // 1
    Full_0_set.insert("MDMkt_t_1066907665");
    Full_0.add_attribute("SesID", "3"); // 1
    Full_0_set.insert("3");
    Full_0.add_attribute("SesSub", "5"); // 1
    Full_0_set.insert("5");
    Full_0.add_attribute("TrdgStat", "25"); // 1
    Full_0_set.insert("25");
    Full_0.add_attribute("HaltRsn", "3"); // 1
    Full_0_set.insert("3");
    Full_0.add_attribute("QCond", "P"); // 1
    Full_0_set.insert("P");
    Full_0.add_attribute("TrdCond", "I"); // 1
    Full_0_set.insert("I");
    Full_0.add_attribute("Orig", "MDEntryOriginator_t_161740126"); // 1
    Full_0_set.insert("MDEntryOriginator_t_161740126");
    Full_0.add_attribute("LctnID", "LocationID_t_2100472830"); // 1
    Full_0_set.insert("LocationID_t_2100472830");
    Full_0.add_attribute("DeskID", "DeskID_t_14740317"); // 1
    Full_0_set.insert("DeskID_t_14740317");
    Full_0.add_attribute("OpenClsSettlFlag", "2"); // 1
    Full_0_set.insert("2");
    Full_0.add_attribute("TmInForce", "6"); // 1
    Full_0_set.insert("6");
    Full_0.add_attribute("ExpireDt", "ExpireDate_t_2028884895"); // 1
    Full_0_set.insert("ExpireDate_t_2028884895");
    Full_0.add_attribute("ExpireTm", "ExpireTime_t_1790036476"); // 1
    Full_0_set.insert("ExpireTime_t_1790036476");
    Full_0.add_attribute("MinQty", "21023129.010000"); // 1
    Full_0_set.insert("21023129.010000");
    Full_0.add_attribute("ExecInst", "R"); // 1
    Full_0_set.insert("R");
    Full_0.add_attribute("SellerDays", "31946007"); // 1
    Full_0_set.insert("31946007");
    Full_0.add_attribute("OrdID", "OrderID_t_319961418"); // 1
    Full_0_set.insert("OrderID_t_319961418");
    Full_0.add_attribute("OrdID2", "SecondaryOrderID_t_451386355"); // 1
    Full_0_set.insert("SecondaryOrderID_t_451386355");
    Full_0.add_attribute("EntryID", "QuoteEntryID_t_1781979455"); // 1
    Full_0_set.insert("QuoteEntryID_t_1781979455");
    Full_0.add_attribute("Buyer", "MDEntryBuyer_t_1832542165"); // 1
    Full_0_set.insert("MDEntryBuyer_t_1832542165");
    Full_0.add_attribute("Seller", "MDEntrySeller_t_868407679"); // 1
    Full_0_set.insert("MDEntrySeller_t_868407679");
    Full_0.add_attribute("NumOfOrds", "725253045"); // 1
    Full_0_set.insert("725253045");
    Full_0.add_attribute("PosNo", "1931227543"); // 1
    Full_0_set.insert("1931227543");
    Full_0.add_attribute("Scope", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("PxDelta", "9015780.320000"); // 1
    Full_0_set.insert("9015780.320000");
    Full_0.add_attribute("TrdTyp", "0"); // 1
    Full_0_set.insert("0");
    Full_0.add_attribute("Txt", "Text_t_1305605949"); // 1
    Full_0_set.insert("Text_t_1305605949");
    Full_0.add_attribute("EncTxtLen", "1502033454"); // 1
    Full_0_set.insert("1502033454");
    Full_0.add_attribute("EncTxt", "EncodedText_t_1302615009"); // 1
    Full_0_set.insert("EncodedText_t_1302615009");
    Full_0.add_attribute("MDPxLvl", "1088547370"); // 1
    Full_0_set.insert("1088547370");
    Full_0.add_attribute("Cpcty", "W"); // 1
    Full_0_set.insert("W");
    Full_0.add_attribute("MDOrigTyp", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("HighPx", "15928777.250000"); // 1
    Full_0_set.insert("15928777.250000");
    Full_0.add_attribute("LowPx", "3351055.430000"); // 1
    Full_0_set.insert("3351055.430000");
    Full_0.add_attribute("FirstPx", "4263422.590000"); // 1
    Full_0_set.insert("4263422.590000");
    Full_0.add_attribute("LastPx", "4456838.520000"); // 1
    Full_0_set.insert("4456838.520000");
    Full_0.add_attribute("TrdVol", "5711618.340000"); // 1
    Full_0_set.insert("5711618.340000");
    Full_0.add_attribute("SettlTyp", "5"); // 1
    Full_0_set.insert("5");
    Full_0.add_attribute("SettlDt", "SettlDate_t_398673035"); // 1
    Full_0_set.insert("SettlDate_t_398673035");
    Full_0.add_attribute("MDQteTyp", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("RptSeq", "396825336"); // 1
    Full_0_set.insert("396825336");
    Full_0.add_attribute("DealingCpcty", "A"); // 1
    Full_0_set.insert("A");
    Full_0.add_attribute("MDEntrySpotRt", "4673033.980000"); // 1
    Full_0_set.insert("4673033.980000");
    Full_0.add_attribute("MDEntryFwdPnts", "393781.640000"); // 1
    Full_0_set.insert("393781.640000");
    all_values.push_back(Full_0_set);
    all_compo_names.insert("Full_0_set");

    {
      xml_element Yield_10{"Yield"};
      multiset<string> Yield_10_set;
      Yield_10.add_attribute("Typ", "CURRENT"); // 2
      Yield_10_set.insert("CURRENT");
      Yield_10.add_attribute("Yld", "15568725.260000"); // 2
      Yield_10_set.insert("15568725.260000");
      Yield_10.add_attribute("CalcDt", "YieldCalcDate_t_71324171"); // 2
      Yield_10_set.insert("YieldCalcDate_t_71324171");
      Yield_10.add_attribute("RedDt", "YieldRedemptionDate_t_1399379963"); // 2
      Yield_10_set.insert("YieldRedemptionDate_t_1399379963");
      Yield_10.add_attribute("RedPx", "20082588.810000"); // 2
      Yield_10_set.insert("20082588.810000");
      Yield_10.add_attribute("RedPxTyp", "13"); // 2
      Yield_10_set.insert("13");
      all_values.push_back(Yield_10_set);
      all_compo_names.insert("Yield_10_set");

      Full_0.add_element(Yield_10);
    }
    {
      xml_element SprdBnchmkCurve_15{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_15_set;
      SprdBnchmkCurve_15.add_attribute("Spread", "10844384.810000"); // 2
      SprdBnchmkCurve_15_set.insert("10844384.810000");
      SprdBnchmkCurve_15.add_attribute("Ccy", "USD"); // 2
      SprdBnchmkCurve_15_set.insert("USD");
      SprdBnchmkCurve_15.add_attribute("Name", "LIBID"); // 2
      SprdBnchmkCurve_15_set.insert("LIBID");
      SprdBnchmkCurve_15.add_attribute("Point", "BenchmarkCurvePoint_t_619780627"); // 2
      SprdBnchmkCurve_15_set.insert("BenchmarkCurvePoint_t_619780627");
      SprdBnchmkCurve_15.add_attribute("Px", "13326510.560000"); // 2
      SprdBnchmkCurve_15_set.insert("13326510.560000");
      SprdBnchmkCurve_15.add_attribute("PxTyp", "9"); // 2
      SprdBnchmkCurve_15_set.insert("9");
      SprdBnchmkCurve_15.add_attribute("SecID", "BenchmarkSecurityID_t_1925386576"); // 2
      SprdBnchmkCurve_15_set.insert("BenchmarkSecurityID_t_1925386576");
      SprdBnchmkCurve_15.add_attribute("SecIDSrc", "J"); // 2
      SprdBnchmkCurve_15_set.insert("J");
      all_values.push_back(SprdBnchmkCurve_15_set);
      all_compo_names.insert("SprdBnchmkCurve_15_set");

      Full_0.add_element(SprdBnchmkCurve_15);
    }
    {
      xml_element RtSrc_8{"RtSrc"};
      multiset<string> RtSrc_8_set;
      RtSrc_8.add_attribute("RtSrc", "1"); // 2
      RtSrc_8_set.insert("1");
      RtSrc_8.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_8_set.insert("1");
      RtSrc_8.add_attribute("RefPg", "ReferencePage_t_1108658333"); // 2
      RtSrc_8_set.insert("ReferencePage_t_1108658333");
      all_values.push_back(RtSrc_8_set);
      all_compo_names.insert("RtSrc_8_set");

      Full_0.add_element(RtSrc_8);
    }
    {
      xml_element SecSizesGrp_3{"SecSizesGrp"};
      multiset<string> SecSizesGrp_3_set;
      SecSizesGrp_3.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_3_set.insert("1");
      SecSizesGrp_3.add_attribute("MDSecSize", "3118443.760000"); // 2
      SecSizesGrp_3_set.insert("3118443.760000");
      all_values.push_back(SecSizesGrp_3_set);
      all_compo_names.insert("SecSizesGrp_3_set");

      Full_0.add_element(SecSizesGrp_3);
    }
    {
      xml_element Pty_189{"Pty"};
      multiset<string> Pty_189_set;
      Pty_189.add_attribute("ID", "PartyID_t_1443763876"); // 2
      Pty_189_set.insert("PartyID_t_1443763876");
      Pty_189.add_attribute("Src", "C"); // 2
      Pty_189_set.insert("C");
      Pty_189.add_attribute("R", "26"); // 2
      Pty_189_set.insert("26");
      all_values.push_back(Pty_189_set);
      all_compo_names.insert("Pty_189_set");

      {
        xml_element Sub_189{"Sub"};
        multiset<string> Sub_189_set;
        Sub_189.add_attribute("ID", "PartySubID_t_2014925710"); // 3
        Sub_189_set.insert("PartySubID_t_2014925710");
        Sub_189.add_attribute("Typ", "24"); // 3
        Sub_189_set.insert("24");
        all_values.push_back(Sub_189_set);
        all_compo_names.insert("Sub_189_set");

        Pty_189.add_element(Sub_189);
      }
      Full_0.add_element(Pty_189);
    }
    elt.add_element(Full_0);
  } // end Full
  { // Full
    xml_element Full_1{"Full"};
    multiset<string> Full_1_set;
    Full_1.add_attribute("Typ", "T"); // 1
    Full_1_set.insert("T");
    Full_1.add_attribute("ID", "MDEntryID_t_453344214"); // 1
    Full_1_set.insert("MDEntryID_t_453344214");
    Full_1.add_attribute("Px", "634008.080000"); // 1
    Full_1_set.insert("634008.080000");
    Full_1.add_attribute("PxTyp", "4"); // 1
    Full_1_set.insert("4");
    Full_1.add_attribute("OrdTyp", "5"); // 1
    Full_1_set.insert("5");
    Full_1.add_attribute("Ccy", "JPY"); // 1
    Full_1_set.insert("JPY");
    Full_1.add_attribute("SettlCcy", "JPY"); // 1
    Full_1_set.insert("JPY");
    Full_1.add_attribute("Sz", "4646217.680000"); // 1
    Full_1_set.insert("4646217.680000");
    Full_1.add_attribute("LotTyp", "1"); // 1
    Full_1_set.insert("1");
    Full_1.add_attribute("Dt", "2027406771"); // 1
    Full_1_set.insert("2027406771");
    Full_1.add_attribute("Tm", "1549060249"); // 1
    Full_1_set.insert("1549060249");
    Full_1.add_attribute("TickDirctn", "1"); // 1
    Full_1_set.insert("1");
    Full_1.add_attribute("Mkt", "MDMkt_t_310996147"); // 1
    Full_1_set.insert("MDMkt_t_310996147");
    Full_1.add_attribute("SesID", "4"); // 1
    Full_1_set.insert("4");
    Full_1.add_attribute("SesSub", "7"); // 1
    Full_1_set.insert("7");
    Full_1.add_attribute("TrdgStat", "12"); // 1
    Full_1_set.insert("12");
    Full_1.add_attribute("HaltRsn", "1"); // 1
    Full_1_set.insert("1");
    Full_1.add_attribute("QCond", "N"); // 1
    Full_1_set.insert("N");
    Full_1.add_attribute("TrdCond", "F"); // 1
    Full_1_set.insert("F");
    Full_1.add_attribute("Orig", "MDEntryOriginator_t_321427355"); // 1
    Full_1_set.insert("MDEntryOriginator_t_321427355");
    Full_1.add_attribute("LctnID", "LocationID_t_36644844"); // 1
    Full_1_set.insert("LocationID_t_36644844");
    Full_1.add_attribute("DeskID", "DeskID_t_1292022750"); // 1
    Full_1_set.insert("DeskID_t_1292022750");
    Full_1.add_attribute("OpenClsSettlFlag", "2"); // 1
    Full_1_set.insert("2");
    Full_1.add_attribute("TmInForce", "0"); // 1
    Full_1_set.insert("0");
    Full_1.add_attribute("ExpireDt", "ExpireDate_t_588302978"); // 1
    Full_1_set.insert("ExpireDate_t_588302978");
    Full_1.add_attribute("ExpireTm", "ExpireTime_t_199554917"); // 1
    Full_1_set.insert("ExpireTime_t_199554917");
    Full_1.add_attribute("MinQty", "11060174.490000"); // 1
    Full_1_set.insert("11060174.490000");
    Full_1.add_attribute("ExecInst", "D"); // 1
    Full_1_set.insert("D");
    Full_1.add_attribute("SellerDays", "2013614038"); // 1
    Full_1_set.insert("2013614038");
    Full_1.add_attribute("OrdID", "OrderID_t_114735065"); // 1
    Full_1_set.insert("OrderID_t_114735065");
    Full_1.add_attribute("OrdID2", "SecondaryOrderID_t_909089255"); // 1
    Full_1_set.insert("SecondaryOrderID_t_909089255");
    Full_1.add_attribute("EntryID", "QuoteEntryID_t_2077014846"); // 1
    Full_1_set.insert("QuoteEntryID_t_2077014846");
    Full_1.add_attribute("Buyer", "MDEntryBuyer_t_248041973"); // 1
    Full_1_set.insert("MDEntryBuyer_t_248041973");
    Full_1.add_attribute("Seller", "MDEntrySeller_t_1829736867"); // 1
    Full_1_set.insert("MDEntrySeller_t_1829736867");
    Full_1.add_attribute("NumOfOrds", "32310171"); // 1
    Full_1_set.insert("32310171");
    Full_1.add_attribute("PosNo", "1460767425"); // 1
    Full_1_set.insert("1460767425");
    Full_1.add_attribute("Scope", "1"); // 1
    Full_1_set.insert("1");
    Full_1.add_attribute("PxDelta", "2064133.150000"); // 1
    Full_1_set.insert("2064133.150000");
    Full_1.add_attribute("TrdTyp", "13"); // 1
    Full_1_set.insert("13");
    Full_1.add_attribute("Txt", "Text_t_203101435"); // 1
    Full_1_set.insert("Text_t_203101435");
    Full_1.add_attribute("EncTxtLen", "86336438"); // 1
    Full_1_set.insert("86336438");
    Full_1.add_attribute("EncTxt", "EncodedText_t_1326965794"); // 1
    Full_1_set.insert("EncodedText_t_1326965794");
    Full_1.add_attribute("MDPxLvl", "1123096072"); // 1
    Full_1_set.insert("1123096072");
    Full_1.add_attribute("Cpcty", "P"); // 1
    Full_1_set.insert("P");
    Full_1.add_attribute("MDOrigTyp", "2"); // 1
    Full_1_set.insert("2");
    Full_1.add_attribute("HighPx", "5153876.890000"); // 1
    Full_1_set.insert("5153876.890000");
    Full_1.add_attribute("LowPx", "20409797.880000"); // 1
    Full_1_set.insert("20409797.880000");
    Full_1.add_attribute("FirstPx", "12410104.330000"); // 1
    Full_1_set.insert("12410104.330000");
    Full_1.add_attribute("LastPx", "18330658.820000"); // 1
    Full_1_set.insert("18330658.820000");
    Full_1.add_attribute("TrdVol", "768605.570000"); // 1
    Full_1_set.insert("768605.570000");
    Full_1.add_attribute("SettlTyp", "0"); // 1
    Full_1_set.insert("0");
    Full_1.add_attribute("SettlDt", "SettlDate_t_1869710726"); // 1
    Full_1_set.insert("SettlDate_t_1869710726");
    Full_1.add_attribute("MDQteTyp", "2"); // 1
    Full_1_set.insert("2");
    Full_1.add_attribute("RptSeq", "536015971"); // 1
    Full_1_set.insert("536015971");
    Full_1.add_attribute("DealingCpcty", "P"); // 1
    Full_1_set.insert("P");
    Full_1.add_attribute("MDEntrySpotRt", "19571862.850000"); // 1
    Full_1_set.insert("19571862.850000");
    Full_1.add_attribute("MDEntryFwdPnts", "7355708.880000"); // 1
    Full_1_set.insert("7355708.880000");
    all_values.push_back(Full_1_set);
    all_compo_names.insert("Full_1_set");

    {
      xml_element Yield_11{"Yield"};
      multiset<string> Yield_11_set;
      Yield_11.add_attribute("Typ", "BOOK"); // 2
      Yield_11_set.insert("BOOK");
      Yield_11.add_attribute("Yld", "2654476.780000"); // 2
      Yield_11_set.insert("2654476.780000");
      Yield_11.add_attribute("CalcDt", "YieldCalcDate_t_601701278"); // 2
      Yield_11_set.insert("YieldCalcDate_t_601701278");
      Yield_11.add_attribute("RedDt", "YieldRedemptionDate_t_1291468813"); // 2
      Yield_11_set.insert("YieldRedemptionDate_t_1291468813");
      Yield_11.add_attribute("RedPx", "11745369.330000"); // 2
      Yield_11_set.insert("11745369.330000");
      Yield_11.add_attribute("RedPxTyp", "6"); // 2
      Yield_11_set.insert("6");
      all_values.push_back(Yield_11_set);
      all_compo_names.insert("Yield_11_set");

      Full_1.add_element(Yield_11);
    }
    {
      xml_element SprdBnchmkCurve_16{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_16_set;
      SprdBnchmkCurve_16.add_attribute("Spread", "15395107.860000"); // 2
      SprdBnchmkCurve_16_set.insert("15395107.860000");
      SprdBnchmkCurve_16.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_16_set.insert("JPY");
      SprdBnchmkCurve_16.add_attribute("Name", "Pfandbriefe"); // 2
      SprdBnchmkCurve_16_set.insert("Pfandbriefe");
      SprdBnchmkCurve_16.add_attribute("Point", "BenchmarkCurvePoint_t_869079863"); // 2
      SprdBnchmkCurve_16_set.insert("BenchmarkCurvePoint_t_869079863");
      SprdBnchmkCurve_16.add_attribute("Px", "7699559.630000"); // 2
      SprdBnchmkCurve_16_set.insert("7699559.630000");
      SprdBnchmkCurve_16.add_attribute("PxTyp", "19"); // 2
      SprdBnchmkCurve_16_set.insert("19");
      SprdBnchmkCurve_16.add_attribute("SecID", "BenchmarkSecurityID_t_1072181298"); // 2
      SprdBnchmkCurve_16_set.insert("BenchmarkSecurityID_t_1072181298");
      SprdBnchmkCurve_16.add_attribute("SecIDSrc", "L"); // 2
      SprdBnchmkCurve_16_set.insert("L");
      all_values.push_back(SprdBnchmkCurve_16_set);
      all_compo_names.insert("SprdBnchmkCurve_16_set");

      Full_1.add_element(SprdBnchmkCurve_16);
    }
    {
      xml_element RtSrc_9{"RtSrc"};
      multiset<string> RtSrc_9_set;
      RtSrc_9.add_attribute("RtSrc", "0"); // 2
      RtSrc_9_set.insert("0");
      RtSrc_9.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_9_set.insert("1");
      RtSrc_9.add_attribute("RefPg", "ReferencePage_t_1253624986"); // 2
      RtSrc_9_set.insert("ReferencePage_t_1253624986");
      all_values.push_back(RtSrc_9_set);
      all_compo_names.insert("RtSrc_9_set");

      Full_1.add_element(RtSrc_9);
    }
    {
      xml_element SecSizesGrp_4{"SecSizesGrp"};
      multiset<string> SecSizesGrp_4_set;
      SecSizesGrp_4.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_4_set.insert("1");
      SecSizesGrp_4.add_attribute("MDSecSize", "5631814.120000"); // 2
      SecSizesGrp_4_set.insert("5631814.120000");
      all_values.push_back(SecSizesGrp_4_set);
      all_compo_names.insert("SecSizesGrp_4_set");

      Full_1.add_element(SecSizesGrp_4);
    }
    {
      xml_element Pty_190{"Pty"};
      multiset<string> Pty_190_set;
      Pty_190.add_attribute("ID", "PartyID_t_1147121126"); // 2
      Pty_190_set.insert("PartyID_t_1147121126");
      Pty_190.add_attribute("Src", "A"); // 2
      Pty_190_set.insert("A");
      Pty_190.add_attribute("R", "84"); // 2
      Pty_190_set.insert("84");
      all_values.push_back(Pty_190_set);
      all_compo_names.insert("Pty_190_set");

      {
        xml_element Sub_190{"Sub"};
        multiset<string> Sub_190_set;
        Sub_190.add_attribute("ID", "PartySubID_t_1223981683"); // 3
        Sub_190_set.insert("PartySubID_t_1223981683");
        Sub_190.add_attribute("Typ", "6"); // 3
        Sub_190_set.insert("6");
        all_values.push_back(Sub_190_set);
        all_compo_names.insert("Sub_190_set");

        Pty_190.add_element(Sub_190);
      }
      Full_1.add_element(Pty_190);
    }
    elt.add_element(Full_1);
  } // end Full
  { // Rtg
    xml_element Rtg_5{"Rtg"};
    multiset<string> Rtg_5_set;
    Rtg_5.add_attribute("RtgTyp", "3"); // 1
    Rtg_5_set.insert("3");
    Rtg_5.add_attribute("RtgID", "RoutingID_t_451403925"); // 1
    Rtg_5_set.insert("RoutingID_t_451403925");
    all_values.push_back(Rtg_5_set);
    all_compo_names.insert("Rtg_5_set");

    elt.add_element(Rtg_5);
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
