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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MktDataFull" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MarketDataSnapshotFullRefresh_message_t_0;
  elt.add_attribute("TotNumRpts", "277230502"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("277230502");
  elt.add_attribute("RptID", "1549847455"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1549847455");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1036988734"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("ClearingBusinessDate_t_1036988734");
  elt.add_attribute("MDBkTyp", "1"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1");
  elt.add_attribute("MDSubBkTyp", "260109921"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("260109921");
  elt.add_attribute("MktDepth", "953936701"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("953936701");
  elt.add_attribute("MDFeedTyp", "MDFeedType_t_93539325"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDFeedType_t_93539325");
  elt.add_attribute("RefInd", "false"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("false");
  elt.add_attribute("TrdDt", "TradeDate_t_2062343170"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("TradeDate_t_2062343170");
  elt.add_attribute("ReqID", "MDReqID_t_1586930852"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDReqID_t_1586930852");
  elt.add_attribute("MDStrmID", "MDStreamID_t_37979658"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("MDStreamID_t_37979658");
  elt.add_attribute("FinclStat", "2"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("2");
  elt.add_attribute("CorpActn", "B"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("B");
  elt.add_attribute("NetChgPrevDay", "5814309.330000"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("5814309.330000");
  elt.add_attribute("ApplQuDepth", "1575511193"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("1575511193");
  elt.add_attribute("ApplQuResolution", "3"); // 0
  MarketDataSnapshotFullRefresh_message_t_0.insert("3");
  all_values.push_back(MarketDataSnapshotFullRefresh_message_t_0);
  all_compo_names.insert("MarketDataSnapshotFullRefresh_message_t");

  { // Hdr
    xml_element Hdr_42{"Hdr"};
    multiset<string> Hdr_42_set;
    Hdr_42.add_attribute("SeqNum", "183230619"); // 1
    Hdr_42_set.insert("183230619");
    Hdr_42.add_attribute("SID", "SenderCompID_t_1447534420"); // 1
    Hdr_42_set.insert("SenderCompID_t_1447534420");
    Hdr_42.add_attribute("TID", "TargetCompID_t_76297035"); // 1
    Hdr_42_set.insert("TargetCompID_t_76297035");
    Hdr_42.add_attribute("OBID", "OnBehalfOfCompID_t_265471002"); // 1
    Hdr_42_set.insert("OnBehalfOfCompID_t_265471002");
    Hdr_42.add_attribute("D2ID", "DeliverToCompID_t_584276430"); // 1
    Hdr_42_set.insert("DeliverToCompID_t_584276430");
    Hdr_42.add_attribute("SSub", "SenderSubID_t_225073846"); // 1
    Hdr_42_set.insert("SenderSubID_t_225073846");
    Hdr_42.add_attribute("SLoc", "SenderLocationID_t_1777873096"); // 1
    Hdr_42_set.insert("SenderLocationID_t_1777873096");
    Hdr_42.add_attribute("TSub", "TargetSubID_t_1572044651"); // 1
    Hdr_42_set.insert("TargetSubID_t_1572044651");
    Hdr_42.add_attribute("TLoc", "TargetLocationID_t_625405802"); // 1
    Hdr_42_set.insert("TargetLocationID_t_625405802");
    Hdr_42.add_attribute("OBSub", "OnBehalfOfSubID_t_1188543114"); // 1
    Hdr_42_set.insert("OnBehalfOfSubID_t_1188543114");
    Hdr_42.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1081077852"); // 1
    Hdr_42_set.insert("OnBehalfOfLocationID_t_1081077852");
    Hdr_42.add_attribute("D2Sub", "DeliverToSubID_t_787001357"); // 1
    Hdr_42_set.insert("DeliverToSubID_t_787001357");
    Hdr_42.add_attribute("D2Loc", "DeliverToLocationID_t_1708654445"); // 1
    Hdr_42_set.insert("DeliverToLocationID_t_1708654445");
    Hdr_42.add_attribute("PosDup", "N"); // 1
    Hdr_42_set.insert("N");
    Hdr_42.add_attribute("PosRsnd", "N"); // 1
    Hdr_42_set.insert("N");
    Hdr_42.add_attribute("Snt", "SendingTime_t_1985884947"); // 1
    Hdr_42_set.insert("SendingTime_t_1985884947");
    Hdr_42.add_attribute("OrigSnt", "OrigSendingTime_t_1099173985"); // 1
    Hdr_42_set.insert("OrigSendingTime_t_1099173985");
    Hdr_42.add_attribute("MsgEncd", "MessageEncoding_t_1281188370"); // 1
    Hdr_42_set.insert("MessageEncoding_t_1281188370");
    all_values.push_back(Hdr_42_set);
    all_compo_names.insert("Hdr_42_set");

    {
      xml_element Hop_42{"Hop"};
      multiset<string> Hop_42_set;
      Hop_42.add_attribute("ID", "HopCompID_t_781116235"); // 2
      Hop_42_set.insert("HopCompID_t_781116235");
      Hop_42.add_attribute("Ref", "1359283906"); // 2
      Hop_42_set.insert("1359283906");
      Hop_42.add_attribute("Snt", "HopSendingTime_t_87641423"); // 2
      Hop_42_set.insert("HopSendingTime_t_87641423");
      all_values.push_back(Hop_42_set);
      all_compo_names.insert("Hop_42_set");

      Hdr_42.add_element(Hop_42);
    }
    elt.add_element(Hdr_42);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_7{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_7_set;
    ApplSeqCtrl_7.add_attribute("ApplID", "ApplID_t_874655560"); // 1
    ApplSeqCtrl_7_set.insert("ApplID_t_874655560");
    ApplSeqCtrl_7.add_attribute("ApplSeqNum", "165241648"); // 1
    ApplSeqCtrl_7_set.insert("165241648");
    ApplSeqCtrl_7.add_attribute("ApplLastSeqNum", "2500946"); // 1
    ApplSeqCtrl_7_set.insert("2500946");
    ApplSeqCtrl_7.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_7_set.insert("true");
    all_values.push_back(ApplSeqCtrl_7_set);
    all_compo_names.insert("ApplSeqCtrl_7_set");

    elt.add_element(ApplSeqCtrl_7);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_32{"Instrmt"};
    multiset<string> Instrmt_32_set;
    Instrmt_32.add_attribute("Sym", "Symbol_t_203221306"); // 1
    Instrmt_32_set.insert("Symbol_t_203221306");
    Instrmt_32.add_attribute("Sfx", "CD"); // 1
    Instrmt_32_set.insert("CD");
    Instrmt_32.add_attribute("ID", "SecurityID_t_809506390"); // 1
    Instrmt_32_set.insert("SecurityID_t_809506390");
    Instrmt_32.add_attribute("Src", "L"); // 1
    Instrmt_32_set.insert("L");
    Instrmt_32.add_attribute("Prod", "8"); // 1
    Instrmt_32_set.insert("8");
    Instrmt_32.add_attribute("ProdCmplx", "ProductComplex_t_1519595145"); // 1
    Instrmt_32_set.insert("ProductComplex_t_1519595145");
    Instrmt_32.add_attribute("SecGrp", "SecurityGroup_t_967882858"); // 1
    Instrmt_32_set.insert("SecurityGroup_t_967882858");
    Instrmt_32.add_attribute("CFI", "CFICode_t_357266190"); // 1
    Instrmt_32_set.insert("CFICode_t_357266190");
    Instrmt_32.add_attribute("SecTyp", "ABS"); // 1
    Instrmt_32_set.insert("ABS");
    Instrmt_32.add_attribute("SubTyp", "SecuritySubType_t_1233353860"); // 1
    Instrmt_32_set.insert("SecuritySubType_t_1233353860");
    Instrmt_32.add_attribute("MMY", "941542620"); // 1
    Instrmt_32_set.insert("941542620");
    Instrmt_32.add_attribute("MatDt", "MaturityDate_t_1820966026"); // 1
    Instrmt_32_set.insert("MaturityDate_t_1820966026");
    Instrmt_32.add_attribute("MatTm", "863743309"); // 1
    Instrmt_32_set.insert("863743309");
    Instrmt_32.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_366103623"); // 1
    Instrmt_32_set.insert("SettleOnOpenFlag_t_366103623");
    Instrmt_32.add_attribute("AsgnMeth", "298888180"); // 1
    Instrmt_32_set.insert("298888180");
    Instrmt_32.add_attribute("Status", "2"); // 1
    Instrmt_32_set.insert("2");
    Instrmt_32.add_attribute("CpnPmt", "CouponPaymentDate_t_1447181475"); // 1
    Instrmt_32_set.insert("CouponPaymentDate_t_1447181475");
    Instrmt_32.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_32_set.insert("MR");
    Instrmt_32.add_attribute("Snrty", "SR"); // 1
    Instrmt_32_set.insert("SR");
    Instrmt_32.add_attribute("NotlPctOut", "9965080.050000"); // 1
    Instrmt_32_set.insert("9965080.050000");
    Instrmt_32.add_attribute("OrigNotlPctOut", "13300891.740000"); // 1
    Instrmt_32_set.insert("13300891.740000");
    Instrmt_32.add_attribute("AttchPnt", "14518585.190000"); // 1
    Instrmt_32_set.insert("14518585.190000");
    Instrmt_32.add_attribute("DetchPnt", "20956819.900000"); // 1
    Instrmt_32_set.insert("20956819.900000");
    Instrmt_32.add_attribute("Issued", "IssueDate_t_463793896"); // 1
    Instrmt_32_set.insert("IssueDate_t_463793896");
    Instrmt_32.add_attribute("RepoCollSecTyp", "85491107"); // 1
    Instrmt_32_set.insert("85491107");
    Instrmt_32.add_attribute("RepoTrm", "1307482249"); // 1
    Instrmt_32_set.insert("1307482249");
    Instrmt_32.add_attribute("RepoRt", "5514353.200000"); // 1
    Instrmt_32_set.insert("5514353.200000");
    Instrmt_32.add_attribute("Fctr", "9601466.670000"); // 1
    Instrmt_32_set.insert("9601466.670000");
    Instrmt_32.add_attribute("CrdRtg", "CreditRating_t_1472723897"); // 1
    Instrmt_32_set.insert("CreditRating_t_1472723897");
    Instrmt_32.add_attribute("Rgstry", "InstrRegistry_t_553936266"); // 1
    Instrmt_32_set.insert("InstrRegistry_t_553936266");
    Instrmt_32.add_attribute("IssuCtry", "1274249432"); // 1
    Instrmt_32_set.insert("1274249432");
    Instrmt_32.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1675945203"); // 1
    Instrmt_32_set.insert("StateOrProvinceOfIssue_t_1675945203");
    Instrmt_32.add_attribute("Lcl", "LocaleOfIssue_t_35640490"); // 1
    Instrmt_32_set.insert("LocaleOfIssue_t_35640490");
    Instrmt_32.add_attribute("Redeem", "RedemptionDate_t_2083755822"); // 1
    Instrmt_32_set.insert("RedemptionDate_t_2083755822");
    Instrmt_32.add_attribute("StrkPx", "3131137.950000"); // 1
    Instrmt_32_set.insert("3131137.950000");
    Instrmt_32.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_32_set.insert("EUR");
    Instrmt_32.add_attribute("StrkMult", "12809966.530000"); // 1
    Instrmt_32_set.insert("12809966.530000");
    Instrmt_32.add_attribute("StrkValu", "14501220.980000"); // 1
    Instrmt_32_set.insert("14501220.980000");
    Instrmt_32.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_32_set.insert("4");
    Instrmt_32.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_32_set.insert("2");
    Instrmt_32.add_attribute("StrkPxBndryPrcsn", "2441810.700000"); // 1
    Instrmt_32_set.insert("2441810.700000");
    Instrmt_32.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_32_set.insert("2");
    Instrmt_32.add_attribute("OptAt", "1230610175"); // 1
    Instrmt_32_set.insert("1230610175");
    Instrmt_32.add_attribute("Mult", "6102846.930000"); // 1
    Instrmt_32_set.insert("6102846.930000");
    Instrmt_32.add_attribute("MultTyp", "0"); // 1
    Instrmt_32_set.insert("0");
    Instrmt_32.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_32_set.insert("0");
    Instrmt_32.add_attribute("MinPxIncr", "20574661.680000"); // 1
    Instrmt_32_set.insert("20574661.680000");
    Instrmt_32.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1962535947"); // 1
    Instrmt_32_set.insert("MinPriceIncrementAmount_t_1962535947");
    Instrmt_32.add_attribute("UOM", "Bcf"); // 1
    Instrmt_32_set.insert("Bcf");
    Instrmt_32.add_attribute("UOMQty", "9064905.250000"); // 1
    Instrmt_32_set.insert("9064905.250000");
    Instrmt_32.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_32_set.insert("oz_tr");
    Instrmt_32.add_attribute("PxUOMQty", "20532450.420000"); // 1
    Instrmt_32_set.insert("20532450.420000");
    Instrmt_32.add_attribute("SettlMeth", "P"); // 1
    Instrmt_32_set.insert("P");
    Instrmt_32.add_attribute("ExerStyle", "0"); // 1
    Instrmt_32_set.insert("0");
    Instrmt_32.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_32_set.insert("3");
    Instrmt_32.add_attribute("OptPayAmt", "OptPayoutAmount_t_14687468"); // 1
    Instrmt_32_set.insert("OptPayoutAmount_t_14687468");
    Instrmt_32.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_32_set.insert("INT");
    Instrmt_32.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_32_set.insert("CDSD");
    Instrmt_32.add_attribute("ListMeth", "1"); // 1
    Instrmt_32_set.insert("1");
    Instrmt_32.add_attribute("CapPx", "5668233.080000"); // 1
    Instrmt_32_set.insert("5668233.080000");
    Instrmt_32.add_attribute("FlrPx", "781649.530000"); // 1
    Instrmt_32_set.insert("781649.530000");
    Instrmt_32.add_attribute("PutCall", "1"); // 1
    Instrmt_32_set.insert("1");
    Instrmt_32.add_attribute("FlexInd", "true"); // 1
    Instrmt_32_set.insert("true");
    Instrmt_32.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_32_set.insert("false");
    Instrmt_32.add_attribute("TmUnit", "Min"); // 1
    Instrmt_32_set.insert("Min");
    Instrmt_32.add_attribute("CpnRt", "16953197.060000"); // 1
    Instrmt_32_set.insert("16953197.060000");
    Instrmt_32.add_attribute("Exch", "SecurityExchange_t_1470304446"); // 1
    Instrmt_32_set.insert("SecurityExchange_t_1470304446");
    Instrmt_32.add_attribute("PosLmt", "462499721"); // 1
    Instrmt_32_set.insert("462499721");
    Instrmt_32.add_attribute("NTPosLmt", "997958156"); // 1
    Instrmt_32_set.insert("997958156");
    Instrmt_32.add_attribute("Issr", "Issuer_t_227096649"); // 1
    Instrmt_32_set.insert("Issuer_t_227096649");
    Instrmt_32.add_attribute("EncIssrLen", "829366587"); // 1
    Instrmt_32_set.insert("829366587");
    Instrmt_32.add_attribute("EncIssr", "EncodedIssuer_t_1242139226"); // 1
    Instrmt_32_set.insert("EncodedIssuer_t_1242139226");
    Instrmt_32.add_attribute("Desc", "SecurityDesc_t_804854878"); // 1
    Instrmt_32_set.insert("SecurityDesc_t_804854878");
    Instrmt_32.add_attribute("EncSecDescLen", "2059976762"); // 1
    Instrmt_32_set.insert("2059976762");
    Instrmt_32.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1852423919"); // 1
    Instrmt_32_set.insert("EncodedSecurityDesc_t_1852423919");
    Instrmt_32.add_attribute("Pool", "Pool_t_1681501288"); // 1
    Instrmt_32_set.insert("Pool_t_1681501288");
    Instrmt_32.add_attribute("CSetMo", "1047906065"); // 1
    Instrmt_32_set.insert("1047906065");
    Instrmt_32.add_attribute("CPPgm", "1"); // 1
    Instrmt_32_set.insert("1");
    Instrmt_32.add_attribute("CPRegT", "CPRegType_t_1496553588"); // 1
    Instrmt_32_set.insert("CPRegType_t_1496553588");
    Instrmt_32.add_attribute("Dated", "DatedDate_t_1649292588"); // 1
    Instrmt_32_set.insert("DatedDate_t_1649292588");
    Instrmt_32.add_attribute("IntAcrl", "InterestAccrualDate_t_521413316"); // 1
    Instrmt_32_set.insert("InterestAccrualDate_t_521413316");
    all_values.push_back(Instrmt_32_set);
    all_compo_names.insert("Instrmt_32_set");

    {
      xml_element AID_35{"AID"};
      multiset<string> AID_35_set;
      AID_35.add_attribute("AltID", "SecurityAltID_t_494211413"); // 2
      AID_35_set.insert("SecurityAltID_t_494211413");
      AID_35.add_attribute("AltIDSrc", "K"); // 2
      AID_35_set.insert("K");
      all_values.push_back(AID_35_set);
      all_compo_names.insert("AID_35_set");

      Instrmt_32.add_element(AID_35);
    }
    {
      xml_element SecXML_35{"SecXML"};
      multiset<string> SecXML_35_set;
      SecXML_35.add_attribute("Schema", "SecurityXMLSchema_t_1376102184"); // 2
      SecXML_35_set.insert("SecurityXMLSchema_t_1376102184");
      all_values.push_back(SecXML_35_set);
      all_compo_names.insert("SecXML_35_set");

      Instrmt_32.add_element(SecXML_35);
    }
    {
      xml_element Evnt_35{"Evnt"};
      multiset<string> Evnt_35_set;
      Evnt_35.add_attribute("EventTyp", "4"); // 2
      Evnt_35_set.insert("4");
      Evnt_35.add_attribute("Dt", "EventDate_t_1546306484"); // 2
      Evnt_35_set.insert("EventDate_t_1546306484");
      Evnt_35.add_attribute("Tm", "EventTime_t_1390789652"); // 2
      Evnt_35_set.insert("EventTime_t_1390789652");
      Evnt_35.add_attribute("Px", "21160338.250000"); // 2
      Evnt_35_set.insert("21160338.250000");
      Evnt_35.add_attribute("Txt", "EventText_t_350222005"); // 2
      Evnt_35_set.insert("EventText_t_350222005");
      all_values.push_back(Evnt_35_set);
      all_compo_names.insert("Evnt_35_set");

      Instrmt_32.add_element(Evnt_35);
    }
    {
      xml_element Pty_177{"Pty"};
      multiset<string> Pty_177_set;
      Pty_177.add_attribute("ID", "InstrumentPartyID_t_730717370"); // 2
      Pty_177_set.insert("InstrumentPartyID_t_730717370");
      Pty_177.add_attribute("Src", "8"); // 2
      Pty_177_set.insert("8");
      Pty_177.add_attribute("R", "64"); // 2
      Pty_177_set.insert("64");
      all_values.push_back(Pty_177_set);
      all_compo_names.insert("Pty_177_set");

      {
        xml_element Sub_177{"Sub"};
        multiset<string> Sub_177_set;
        Sub_177.add_attribute("ID", "InstrumentPartySubID_t_1746590291"); // 3
        Sub_177_set.insert("InstrumentPartySubID_t_1746590291");
        Sub_177.add_attribute("Typ", "7"); // 3
        Sub_177_set.insert("7");
        all_values.push_back(Sub_177_set);
        all_compo_names.insert("Sub_177_set");

        Pty_177.add_element(Sub_177);
      }
      Instrmt_32.add_element(Pty_177);
    }
    {
      xml_element CmplxEvnt_32{"CmplxEvnt"};
      multiset<string> CmplxEvnt_32_set;
      CmplxEvnt_32.add_attribute("Typ", "2"); // 2
      CmplxEvnt_32_set.insert("2");
      CmplxEvnt_32.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_928093359"); // 2
      CmplxEvnt_32_set.insert("ComplexOptPayoutAmount_t_928093359");
      CmplxEvnt_32.add_attribute("Px", "6856733.420000"); // 2
      CmplxEvnt_32_set.insert("6856733.420000");
      CmplxEvnt_32.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_32_set.insert("2");
      CmplxEvnt_32.add_attribute("PxBndryPrcsn", "13905930.800000"); // 2
      CmplxEvnt_32_set.insert("13905930.800000");
      CmplxEvnt_32.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_32_set.insert("3");
      CmplxEvnt_32.add_attribute("Cond", "1"); // 2
      CmplxEvnt_32_set.insert("1");
      all_values.push_back(CmplxEvnt_32_set);
      all_compo_names.insert("CmplxEvnt_32_set");

      {
        xml_element EvntDts_32{"EvntDts"};
        multiset<string> EvntDts_32_set;
        EvntDts_32.add_attribute("StartDt", "ComplexEventStartDate_t_72476020"); // 3
        EvntDts_32_set.insert("ComplexEventStartDate_t_72476020");
        EvntDts_32.add_attribute("EndDt", "ComplexEventEndDate_t_778287077"); // 3
        EvntDts_32_set.insert("ComplexEventEndDate_t_778287077");
        all_values.push_back(EvntDts_32_set);
        all_compo_names.insert("EvntDts_32_set");

        {
          xml_element EvntTms_32{"EvntTms"};
          multiset<string> EvntTms_32_set;
          EvntTms_32.add_attribute("StartTm", "797596410"); // 4
          EvntTms_32_set.insert("797596410");
          EvntTms_32.add_attribute("EndTm", "2132452782"); // 4
          EvntTms_32_set.insert("2132452782");
          all_values.push_back(EvntTms_32_set);
          all_compo_names.insert("EvntTms_32_set");

          EvntDts_32.add_element(EvntTms_32);
        }
        CmplxEvnt_32.add_element(EvntDts_32);
      }
      Instrmt_32.add_element(CmplxEvnt_32);
    }
    elt.add_element(Instrmt_32);
  } // end Instrmt
  { // Undly
    xml_element Undly_44{"Undly"};
    multiset<string> Undly_44_set;
    Undly_44.add_attribute("Sym", "UnderlyingSymbol_t_331614051"); // 1
    Undly_44_set.insert("UnderlyingSymbol_t_331614051");
    Undly_44.add_attribute("Sfx", "WI"); // 1
    Undly_44_set.insert("WI");
    Undly_44.add_attribute("ID", "UnderlyingSecurityID_t_98150140"); // 1
    Undly_44_set.insert("UnderlyingSecurityID_t_98150140");
    Undly_44.add_attribute("Src", "2"); // 1
    Undly_44_set.insert("2");
    Undly_44.add_attribute("Prod", "11"); // 1
    Undly_44_set.insert("11");
    Undly_44.add_attribute("CFI", "UnderlyingCFICode_t_619563457"); // 1
    Undly_44_set.insert("UnderlyingCFICode_t_619563457");
    Undly_44.add_attribute("SecTyp", "PFAND"); // 1
    Undly_44_set.insert("PFAND");
    Undly_44.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2089738122"); // 1
    Undly_44_set.insert("UnderlyingSecuritySubType_t_2089738122");
    Undly_44.add_attribute("MMY", "1995665641"); // 1
    Undly_44_set.insert("1995665641");
    Undly_44.add_attribute("Mat", "UnderlyingMaturityDate_t_130558540"); // 1
    Undly_44_set.insert("UnderlyingMaturityDate_t_130558540");
    Undly_44.add_attribute("MatTm", "1488560958"); // 1
    Undly_44_set.insert("1488560958");
    Undly_44.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1238971645"); // 1
    Undly_44_set.insert("UnderlyingCouponPaymentDate_t_1238971645");
    Undly_44.add_attribute("RestrctTyp", "MR"); // 1
    Undly_44_set.insert("MR");
    Undly_44.add_attribute("Snrty", "SR"); // 1
    Undly_44_set.insert("SR");
    Undly_44.add_attribute("NotlPctOut", "19696890.150000"); // 1
    Undly_44_set.insert("19696890.150000");
    Undly_44.add_attribute("OrigNotlPctOut", "6344822.030000"); // 1
    Undly_44_set.insert("6344822.030000");
    Undly_44.add_attribute("AttchPnt", "1196862.730000"); // 1
    Undly_44_set.insert("1196862.730000");
    Undly_44.add_attribute("DetchPnt", "15687956.580000"); // 1
    Undly_44_set.insert("15687956.580000");
    Undly_44.add_attribute("Issued", "UnderlyingIssueDate_t_1772319487"); // 1
    Undly_44_set.insert("UnderlyingIssueDate_t_1772319487");
    Undly_44.add_attribute("RepoCollSecTyp", "562510358"); // 1
    Undly_44_set.insert("562510358");
    Undly_44.add_attribute("RepoTrm", "349405369"); // 1
    Undly_44_set.insert("349405369");
    Undly_44.add_attribute("RepoRt", "3105091.810000"); // 1
    Undly_44_set.insert("3105091.810000");
    Undly_44.add_attribute("Fctr", "3281552.410000"); // 1
    Undly_44_set.insert("3281552.410000");
    Undly_44.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1739998450"); // 1
    Undly_44_set.insert("UnderlyingCreditRating_t_1739998450");
    Undly_44.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1994140680"); // 1
    Undly_44_set.insert("UnderlyingInstrRegistry_t_1994140680");
    Undly_44.add_attribute("Ctry", "320896773"); // 1
    Undly_44_set.insert("320896773");
    Undly_44.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1812474470"); // 1
    Undly_44_set.insert("UnderlyingStateOrProvinceOfIssue_t_1812474470");
    Undly_44.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_624944110"); // 1
    Undly_44_set.insert("UnderlyingLocaleOfIssue_t_624944110");
    Undly_44.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1118493183"); // 1
    Undly_44_set.insert("UnderlyingRedemptionDate_t_1118493183");
    Undly_44.add_attribute("StrkPx", "17974436.040000"); // 1
    Undly_44_set.insert("17974436.040000");
    Undly_44.add_attribute("StrkCcy", "USD"); // 1
    Undly_44_set.insert("USD");
    Undly_44.add_attribute("OptA", "682835156"); // 1
    Undly_44_set.insert("682835156");
    Undly_44.add_attribute("Mult", "12063215.990000"); // 1
    Undly_44_set.insert("12063215.990000");
    Undly_44.add_attribute("MultTyp", "1"); // 1
    Undly_44_set.insert("1");
    Undly_44.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_44_set.insert("0");
    Undly_44.add_attribute("UOM", "oz_tr"); // 1
    Undly_44_set.insert("oz_tr");
    Undly_44.add_attribute("UOMQty", "13056866.300000"); // 1
    Undly_44_set.insert("13056866.300000");
    Undly_44.add_attribute("PxUOM", "Bu"); // 1
    Undly_44_set.insert("Bu");
    Undly_44.add_attribute("PxUOMQty", "16740670.490000"); // 1
    Undly_44_set.insert("16740670.490000");
    Undly_44.add_attribute("TmUnit", "D"); // 1
    Undly_44_set.insert("D");
    Undly_44.add_attribute("ExerStyle", "2"); // 1
    Undly_44_set.insert("2");
    Undly_44.add_attribute("CpnRt", "7655550.470000"); // 1
    Undly_44_set.insert("7655550.470000");
    Undly_44.add_attribute("Exch", "UnderlyingSecurityExchange_t_1535353887"); // 1
    Undly_44_set.insert("UnderlyingSecurityExchange_t_1535353887");
    Undly_44.add_attribute("Issr", "UnderlyingIssuer_t_192150394"); // 1
    Undly_44_set.insert("UnderlyingIssuer_t_192150394");
    Undly_44.add_attribute("EncUndIssrLen", "587760414"); // 1
    Undly_44_set.insert("587760414");
    Undly_44.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_22352442"); // 1
    Undly_44_set.insert("EncodedUnderlyingIssuer_t_22352442");
    Undly_44.add_attribute("Desc", "UnderlyingSecurityDesc_t_311836667"); // 1
    Undly_44_set.insert("UnderlyingSecurityDesc_t_311836667");
    Undly_44.add_attribute("EncUndSecDescLen", "9072425"); // 1
    Undly_44_set.insert("9072425");
    Undly_44.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1794671929"); // 1
    Undly_44_set.insert("EncodedUnderlyingSecurityDesc_t_1794671929");
    Undly_44.add_attribute("CPPgm", "UnderlyingCPProgram_t_874347025"); // 1
    Undly_44_set.insert("UnderlyingCPProgram_t_874347025");
    Undly_44.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_358477794"); // 1
    Undly_44_set.insert("UnderlyingCPRegType_t_358477794");
    Undly_44.add_attribute("AllocPct", "21051811.110000"); // 1
    Undly_44_set.insert("21051811.110000");
    Undly_44.add_attribute("Ccy", "JPY"); // 1
    Undly_44_set.insert("JPY");
    Undly_44.add_attribute("Qty", "19518381.430000"); // 1
    Undly_44_set.insert("19518381.430000");
    Undly_44.add_attribute("SettlTyp", "5"); // 1
    Undly_44_set.insert("5");
    Undly_44.add_attribute("CashAmt", "UnderlyingCashAmount_t_1763467066"); // 1
    Undly_44_set.insert("UnderlyingCashAmount_t_1763467066");
    Undly_44.add_attribute("CashTyp", "DIFF"); // 1
    Undly_44_set.insert("DIFF");
    Undly_44.add_attribute("Px", "4944085.750000"); // 1
    Undly_44_set.insert("4944085.750000");
    Undly_44.add_attribute("DirtPx", "14134270.230000"); // 1
    Undly_44_set.insert("14134270.230000");
    Undly_44.add_attribute("EndPx", "15374700.640000"); // 1
    Undly_44_set.insert("15374700.640000");
    Undly_44.add_attribute("StartVal", "UnderlyingStartValue_t_1944515809"); // 1
    Undly_44_set.insert("UnderlyingStartValue_t_1944515809");
    Undly_44.add_attribute("CurVal", "UnderlyingCurrentValue_t_2096262179"); // 1
    Undly_44_set.insert("UnderlyingCurrentValue_t_2096262179");
    Undly_44.add_attribute("EndVal", "UnderlyingEndValue_t_596308016"); // 1
    Undly_44_set.insert("UnderlyingEndValue_t_596308016");
    Undly_44.add_attribute("AdjQty", "9278233.870000"); // 1
    Undly_44_set.insert("9278233.870000");
    Undly_44.add_attribute("FxRate", "11662978.260000"); // 1
    Undly_44_set.insert("11662978.260000");
    Undly_44.add_attribute("FxRateCalc", "M"); // 1
    Undly_44_set.insert("M");
    Undly_44.add_attribute("CapValu", "UnderlyingCapValue_t_86026369"); // 1
    Undly_44_set.insert("UnderlyingCapValue_t_86026369");
    Undly_44.add_attribute("SetMeth", "UnderlyingSettlMethod_t_178587948"); // 1
    Undly_44_set.insert("UnderlyingSettlMethod_t_178587948");
    Undly_44.add_attribute("PutCall", "1948776474"); // 1
    Undly_44_set.insert("1948776474");
    all_values.push_back(Undly_44_set);
    all_compo_names.insert("Undly_44_set");

    {
      xml_element UndAID_44{"UndAID"};
      multiset<string> UndAID_44_set;
      UndAID_44.add_attribute("AltID", "UnderlyingSecurityAltID_t_1522271539"); // 2
      UndAID_44_set.insert("UnderlyingSecurityAltID_t_1522271539");
      UndAID_44.add_attribute("AltIDSrc", "4"); // 2
      UndAID_44_set.insert("4");
      all_values.push_back(UndAID_44_set);
      all_compo_names.insert("UndAID_44_set");

      Undly_44.add_element(UndAID_44);
    }
    {
      xml_element Stip_71{"Stip"};
      multiset<string> Stip_71_set;
      Stip_71.add_attribute("Typ", "PPL"); // 2
      Stip_71_set.insert("PPL");
      Stip_71.add_attribute("Val", "UnderlyingStipValue_t_910141778"); // 2
      Stip_71_set.insert("UnderlyingStipValue_t_910141778");
      all_values.push_back(Stip_71_set);
      all_compo_names.insert("Stip_71_set");

      Undly_44.add_element(Stip_71);
    }
    {
      xml_element Pty_178{"Pty"};
      multiset<string> Pty_178_set;
      Pty_178.add_attribute("ID", "UnderlyingInstrumentPartyID_t_871589422"); // 2
      Pty_178_set.insert("UnderlyingInstrumentPartyID_t_871589422");
      Pty_178.add_attribute("Src", "G"); // 2
      Pty_178_set.insert("G");
      Pty_178.add_attribute("R", "39"); // 2
      Pty_178_set.insert("39");
      all_values.push_back(Pty_178_set);
      all_compo_names.insert("Pty_178_set");

      {
        xml_element Sub_178{"Sub"};
        multiset<string> Sub_178_set;
        Sub_178.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1183426089"); // 3
        Sub_178_set.insert("UnderlyingInstrumentPartySubID_t_1183426089");
        Sub_178.add_attribute("Typ", "30"); // 3
        Sub_178_set.insert("30");
        all_values.push_back(Sub_178_set);
        all_compo_names.insert("Sub_178_set");

        Pty_178.add_element(Sub_178);
      }
      Undly_44.add_element(Pty_178);
    }
    elt.add_element(Undly_44);
  } // end Undly
  { // Leg
    xml_element Leg_42{"Leg"};
    multiset<string> Leg_42_set;
    Leg_42.add_attribute("Sym", "LegSymbol_t_2057773115"); // 1
    Leg_42_set.insert("LegSymbol_t_2057773115");
    Leg_42.add_attribute("Sfx", "WI"); // 1
    Leg_42_set.insert("WI");
    Leg_42.add_attribute("ID", "LegSecurityID_t_537379965"); // 1
    Leg_42_set.insert("LegSecurityID_t_537379965");
    Leg_42.add_attribute("Src", "A"); // 1
    Leg_42_set.insert("A");
    Leg_42.add_attribute("Prod", "5"); // 1
    Leg_42_set.insert("5");
    Leg_42.add_attribute("CFI", "LegCFICode_t_341734461"); // 1
    Leg_42_set.insert("LegCFICode_t_341734461");
    Leg_42.add_attribute("SecTyp", "YCD"); // 1
    Leg_42_set.insert("YCD");
    Leg_42.add_attribute("SecSubTyp", "LegSecuritySubType_t_1089134522"); // 1
    Leg_42_set.insert("LegSecuritySubType_t_1089134522");
    Leg_42.add_attribute("MMY", "771033066"); // 1
    Leg_42_set.insert("771033066");
    Leg_42.add_attribute("Mat", "LegMaturityDate_t_983115700"); // 1
    Leg_42_set.insert("LegMaturityDate_t_983115700");
    Leg_42.add_attribute("MatTm", "355077897"); // 1
    Leg_42_set.insert("355077897");
    Leg_42.add_attribute("CpnPmt", "LegCouponPaymentDate_t_161019483"); // 1
    Leg_42_set.insert("LegCouponPaymentDate_t_161019483");
    Leg_42.add_attribute("Issued", "LegIssueDate_t_780147861"); // 1
    Leg_42_set.insert("LegIssueDate_t_780147861");
    Leg_42.add_attribute("RepoCollSecTyp", "303856428"); // 1
    Leg_42_set.insert("303856428");
    Leg_42.add_attribute("RepoTrm", "757327499"); // 1
    Leg_42_set.insert("757327499");
    Leg_42.add_attribute("RepoRt", "17079712.480000"); // 1
    Leg_42_set.insert("17079712.480000");
    Leg_42.add_attribute("Fctr", "14701542.540000"); // 1
    Leg_42_set.insert("14701542.540000");
    Leg_42.add_attribute("CrdRtg", "LegCreditRating_t_1032036923"); // 1
    Leg_42_set.insert("LegCreditRating_t_1032036923");
    Leg_42.add_attribute("Rgstry", "LegInstrRegistry_t_1793997617"); // 1
    Leg_42_set.insert("LegInstrRegistry_t_1793997617");
    Leg_42.add_attribute("Ctry", "1648742202"); // 1
    Leg_42_set.insert("1648742202");
    Leg_42.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_833329749"); // 1
    Leg_42_set.insert("LegStateOrProvinceOfIssue_t_833329749");
    Leg_42.add_attribute("Lcl", "LegLocaleOfIssue_t_1168785508"); // 1
    Leg_42_set.insert("LegLocaleOfIssue_t_1168785508");
    Leg_42.add_attribute("Redeem", "LegRedemptionDate_t_180697582"); // 1
    Leg_42_set.insert("LegRedemptionDate_t_180697582");
    Leg_42.add_attribute("Strk", "14001776.220000"); // 1
    Leg_42_set.insert("14001776.220000");
    Leg_42.add_attribute("StrkCcy", "GBP"); // 1
    Leg_42_set.insert("GBP");
    Leg_42.add_attribute("OptA", "407302262"); // 1
    Leg_42_set.insert("407302262");
    Leg_42.add_attribute("Cmult", "8639378.600000"); // 1
    Leg_42_set.insert("8639378.600000");
    Leg_42.add_attribute("MultTyp", "0"); // 1
    Leg_42_set.insert("0");
    Leg_42.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_42_set.insert("4");
    Leg_42.add_attribute("UOM", "Bbl"); // 1
    Leg_42_set.insert("Bbl");
    Leg_42.add_attribute("UOMQty", "21460025.600000"); // 1
    Leg_42_set.insert("21460025.600000");
    Leg_42.add_attribute("PxUOM", "Gal"); // 1
    Leg_42_set.insert("Gal");
    Leg_42.add_attribute("PxUOMQty", "19810003.280000"); // 1
    Leg_42_set.insert("19810003.280000");
    Leg_42.add_attribute("TmUnit", "Mo"); // 1
    Leg_42_set.insert("Mo");
    Leg_42.add_attribute("ExerStyle", "0"); // 1
    Leg_42_set.insert("0");
    Leg_42.add_attribute("CpnRt", "1752511.410000"); // 1
    Leg_42_set.insert("1752511.410000");
    Leg_42.add_attribute("Exch", "LegSecurityExchange_t_1600017771"); // 1
    Leg_42_set.insert("LegSecurityExchange_t_1600017771");
    Leg_42.add_attribute("Issr", "LegIssuer_t_1360459811"); // 1
    Leg_42_set.insert("LegIssuer_t_1360459811");
    Leg_42.add_attribute("EncLegIssrLen", "946284207"); // 1
    Leg_42_set.insert("946284207");
    Leg_42.add_attribute("EncLegIssr", "EncodedLegIssuer_t_435649823"); // 1
    Leg_42_set.insert("EncodedLegIssuer_t_435649823");
    Leg_42.add_attribute("Desc", "LegSecurityDesc_t_1715537708"); // 1
    Leg_42_set.insert("LegSecurityDesc_t_1715537708");
    Leg_42.add_attribute("EncLegSecDescLen", "1107303690"); // 1
    Leg_42_set.insert("1107303690");
    Leg_42.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1215797684"); // 1
    Leg_42_set.insert("EncodedLegSecurityDesc_t_1215797684");
    Leg_42.add_attribute("RatioQty", "20193941.360000"); // 1
    Leg_42_set.insert("20193941.360000");
    Leg_42.add_attribute("Side", "6"); // 1
    Leg_42_set.insert("6");
    Leg_42.add_attribute("Ccy", "USD"); // 1
    Leg_42_set.insert("USD");
    Leg_42.add_attribute("Pool", "LegPool_t_749184465"); // 1
    Leg_42_set.insert("LegPool_t_749184465");
    Leg_42.add_attribute("Dated", "LegDatedDate_t_422799254"); // 1
    Leg_42_set.insert("LegDatedDate_t_422799254");
    Leg_42.add_attribute("CSetMo", "843323297"); // 1
    Leg_42_set.insert("843323297");
    Leg_42.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1582514214"); // 1
    Leg_42_set.insert("LegInterestAccrualDate_t_1582514214");
    Leg_42.add_attribute("PutCall", "1591584763"); // 1
    Leg_42_set.insert("1591584763");
    Leg_42.add_attribute("LegOptionRatio", "10240208.790000"); // 1
    Leg_42_set.insert("10240208.790000");
    Leg_42.add_attribute("Px", "8352081.890000"); // 1
    Leg_42_set.insert("8352081.890000");
    all_values.push_back(Leg_42_set);
    all_compo_names.insert("Leg_42_set");

    {
      xml_element LegAID_42{"LegAID"};
      multiset<string> LegAID_42_set;
      LegAID_42.add_attribute("SecAltID", "LegSecurityAltID_t_1523028402"); // 2
      LegAID_42_set.insert("LegSecurityAltID_t_1523028402");
      LegAID_42.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_42_set.insert("2");
      all_values.push_back(LegAID_42_set);
      all_compo_names.insert("LegAID_42_set");

      Leg_42.add_element(LegAID_42);
    }
    elt.add_element(Leg_42);
  } // end Leg
  { // Leg
    xml_element Leg_43{"Leg"};
    multiset<string> Leg_43_set;
    Leg_43.add_attribute("Sym", "LegSymbol_t_1242510451"); // 1
    Leg_43_set.insert("LegSymbol_t_1242510451");
    Leg_43.add_attribute("Sfx", "CD"); // 1
    Leg_43_set.insert("CD");
    Leg_43.add_attribute("ID", "LegSecurityID_t_17053680"); // 1
    Leg_43_set.insert("LegSecurityID_t_17053680");
    Leg_43.add_attribute("Src", "G"); // 1
    Leg_43_set.insert("G");
    Leg_43.add_attribute("Prod", "6"); // 1
    Leg_43_set.insert("6");
    Leg_43.add_attribute("CFI", "LegCFICode_t_15572593"); // 1
    Leg_43_set.insert("LegCFICode_t_15572593");
    Leg_43.add_attribute("SecTyp", "CL"); // 1
    Leg_43_set.insert("CL");
    Leg_43.add_attribute("SecSubTyp", "LegSecuritySubType_t_1516619656"); // 1
    Leg_43_set.insert("LegSecuritySubType_t_1516619656");
    Leg_43.add_attribute("MMY", "1126883239"); // 1
    Leg_43_set.insert("1126883239");
    Leg_43.add_attribute("Mat", "LegMaturityDate_t_1882992900"); // 1
    Leg_43_set.insert("LegMaturityDate_t_1882992900");
    Leg_43.add_attribute("MatTm", "1691870797"); // 1
    Leg_43_set.insert("1691870797");
    Leg_43.add_attribute("CpnPmt", "LegCouponPaymentDate_t_579417362"); // 1
    Leg_43_set.insert("LegCouponPaymentDate_t_579417362");
    Leg_43.add_attribute("Issued", "LegIssueDate_t_1095969063"); // 1
    Leg_43_set.insert("LegIssueDate_t_1095969063");
    Leg_43.add_attribute("RepoCollSecTyp", "490671357"); // 1
    Leg_43_set.insert("490671357");
    Leg_43.add_attribute("RepoTrm", "1015067185"); // 1
    Leg_43_set.insert("1015067185");
    Leg_43.add_attribute("RepoRt", "6640231.230000"); // 1
    Leg_43_set.insert("6640231.230000");
    Leg_43.add_attribute("Fctr", "15979750.470000"); // 1
    Leg_43_set.insert("15979750.470000");
    Leg_43.add_attribute("CrdRtg", "LegCreditRating_t_83381221"); // 1
    Leg_43_set.insert("LegCreditRating_t_83381221");
    Leg_43.add_attribute("Rgstry", "LegInstrRegistry_t_535933611"); // 1
    Leg_43_set.insert("LegInstrRegistry_t_535933611");
    Leg_43.add_attribute("Ctry", "1315122589"); // 1
    Leg_43_set.insert("1315122589");
    Leg_43.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_859666506"); // 1
    Leg_43_set.insert("LegStateOrProvinceOfIssue_t_859666506");
    Leg_43.add_attribute("Lcl", "LegLocaleOfIssue_t_1877998353"); // 1
    Leg_43_set.insert("LegLocaleOfIssue_t_1877998353");
    Leg_43.add_attribute("Redeem", "LegRedemptionDate_t_2064307054"); // 1
    Leg_43_set.insert("LegRedemptionDate_t_2064307054");
    Leg_43.add_attribute("Strk", "12824657.610000"); // 1
    Leg_43_set.insert("12824657.610000");
    Leg_43.add_attribute("StrkCcy", "GBP"); // 1
    Leg_43_set.insert("GBP");
    Leg_43.add_attribute("OptA", "726566876"); // 1
    Leg_43_set.insert("726566876");
    Leg_43.add_attribute("Cmult", "15978588.810000"); // 1
    Leg_43_set.insert("15978588.810000");
    Leg_43.add_attribute("MultTyp", "2"); // 1
    Leg_43_set.insert("2");
    Leg_43.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_43_set.insert("0");
    Leg_43.add_attribute("UOM", "Bcf"); // 1
    Leg_43_set.insert("Bcf");
    Leg_43.add_attribute("UOMQty", "14295726.120000"); // 1
    Leg_43_set.insert("14295726.120000");
    Leg_43.add_attribute("PxUOM", "t"); // 1
    Leg_43_set.insert("t");
    Leg_43.add_attribute("PxUOMQty", "15437367.970000"); // 1
    Leg_43_set.insert("15437367.970000");
    Leg_43.add_attribute("TmUnit", "Yr"); // 1
    Leg_43_set.insert("Yr");
    Leg_43.add_attribute("ExerStyle", "1"); // 1
    Leg_43_set.insert("1");
    Leg_43.add_attribute("CpnRt", "15593093.900000"); // 1
    Leg_43_set.insert("15593093.900000");
    Leg_43.add_attribute("Exch", "LegSecurityExchange_t_1559766353"); // 1
    Leg_43_set.insert("LegSecurityExchange_t_1559766353");
    Leg_43.add_attribute("Issr", "LegIssuer_t_1393833229"); // 1
    Leg_43_set.insert("LegIssuer_t_1393833229");
    Leg_43.add_attribute("EncLegIssrLen", "538708981"); // 1
    Leg_43_set.insert("538708981");
    Leg_43.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1295275605"); // 1
    Leg_43_set.insert("EncodedLegIssuer_t_1295275605");
    Leg_43.add_attribute("Desc", "LegSecurityDesc_t_938220378"); // 1
    Leg_43_set.insert("LegSecurityDesc_t_938220378");
    Leg_43.add_attribute("EncLegSecDescLen", "1118126343"); // 1
    Leg_43_set.insert("1118126343");
    Leg_43.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_243761020"); // 1
    Leg_43_set.insert("EncodedLegSecurityDesc_t_243761020");
    Leg_43.add_attribute("RatioQty", "14288917.350000"); // 1
    Leg_43_set.insert("14288917.350000");
    Leg_43.add_attribute("Side", "9"); // 1
    Leg_43_set.insert("9");
    Leg_43.add_attribute("Ccy", "CAN"); // 1
    Leg_43_set.insert("CAN");
    Leg_43.add_attribute("Pool", "LegPool_t_69091101"); // 1
    Leg_43_set.insert("LegPool_t_69091101");
    Leg_43.add_attribute("Dated", "LegDatedDate_t_1443717754"); // 1
    Leg_43_set.insert("LegDatedDate_t_1443717754");
    Leg_43.add_attribute("CSetMo", "47022076"); // 1
    Leg_43_set.insert("47022076");
    Leg_43.add_attribute("IntAcrl", "LegInterestAccrualDate_t_928757608"); // 1
    Leg_43_set.insert("LegInterestAccrualDate_t_928757608");
    Leg_43.add_attribute("PutCall", "1174232459"); // 1
    Leg_43_set.insert("1174232459");
    Leg_43.add_attribute("LegOptionRatio", "21113291.300000"); // 1
    Leg_43_set.insert("21113291.300000");
    Leg_43.add_attribute("Px", "637397.210000"); // 1
    Leg_43_set.insert("637397.210000");
    all_values.push_back(Leg_43_set);
    all_compo_names.insert("Leg_43_set");

    {
      xml_element LegAID_43{"LegAID"};
      multiset<string> LegAID_43_set;
      LegAID_43.add_attribute("SecAltID", "LegSecurityAltID_t_1748070462"); // 2
      LegAID_43_set.insert("LegSecurityAltID_t_1748070462");
      LegAID_43.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_43_set.insert("J");
      all_values.push_back(LegAID_43_set);
      all_compo_names.insert("LegAID_43_set");

      Leg_43.add_element(LegAID_43);
    }
    elt.add_element(Leg_43);
  } // end Leg
  { // Leg
    xml_element Leg_44{"Leg"};
    multiset<string> Leg_44_set;
    Leg_44.add_attribute("Sym", "LegSymbol_t_790306597"); // 1
    Leg_44_set.insert("LegSymbol_t_790306597");
    Leg_44.add_attribute("Sfx", "WI"); // 1
    Leg_44_set.insert("WI");
    Leg_44.add_attribute("ID", "LegSecurityID_t_1650245264"); // 1
    Leg_44_set.insert("LegSecurityID_t_1650245264");
    Leg_44.add_attribute("Src", "L"); // 1
    Leg_44_set.insert("L");
    Leg_44.add_attribute("Prod", "2"); // 1
    Leg_44_set.insert("2");
    Leg_44.add_attribute("CFI", "LegCFICode_t_932334228"); // 1
    Leg_44_set.insert("LegCFICode_t_932334228");
    Leg_44.add_attribute("SecTyp", "YCD"); // 1
    Leg_44_set.insert("YCD");
    Leg_44.add_attribute("SecSubTyp", "LegSecuritySubType_t_2121381961"); // 1
    Leg_44_set.insert("LegSecuritySubType_t_2121381961");
    Leg_44.add_attribute("MMY", "880432970"); // 1
    Leg_44_set.insert("880432970");
    Leg_44.add_attribute("Mat", "LegMaturityDate_t_1111226043"); // 1
    Leg_44_set.insert("LegMaturityDate_t_1111226043");
    Leg_44.add_attribute("MatTm", "1533207703"); // 1
    Leg_44_set.insert("1533207703");
    Leg_44.add_attribute("CpnPmt", "LegCouponPaymentDate_t_292715675"); // 1
    Leg_44_set.insert("LegCouponPaymentDate_t_292715675");
    Leg_44.add_attribute("Issued", "LegIssueDate_t_357575624"); // 1
    Leg_44_set.insert("LegIssueDate_t_357575624");
    Leg_44.add_attribute("RepoCollSecTyp", "2071916684"); // 1
    Leg_44_set.insert("2071916684");
    Leg_44.add_attribute("RepoTrm", "1587991280"); // 1
    Leg_44_set.insert("1587991280");
    Leg_44.add_attribute("RepoRt", "12957960.030000"); // 1
    Leg_44_set.insert("12957960.030000");
    Leg_44.add_attribute("Fctr", "10425593.790000"); // 1
    Leg_44_set.insert("10425593.790000");
    Leg_44.add_attribute("CrdRtg", "LegCreditRating_t_1831752300"); // 1
    Leg_44_set.insert("LegCreditRating_t_1831752300");
    Leg_44.add_attribute("Rgstry", "LegInstrRegistry_t_577204090"); // 1
    Leg_44_set.insert("LegInstrRegistry_t_577204090");
    Leg_44.add_attribute("Ctry", "1028269259"); // 1
    Leg_44_set.insert("1028269259");
    Leg_44.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_592052795"); // 1
    Leg_44_set.insert("LegStateOrProvinceOfIssue_t_592052795");
    Leg_44.add_attribute("Lcl", "LegLocaleOfIssue_t_1456587225"); // 1
    Leg_44_set.insert("LegLocaleOfIssue_t_1456587225");
    Leg_44.add_attribute("Redeem", "LegRedemptionDate_t_1097360360"); // 1
    Leg_44_set.insert("LegRedemptionDate_t_1097360360");
    Leg_44.add_attribute("Strk", "20357705.490000"); // 1
    Leg_44_set.insert("20357705.490000");
    Leg_44.add_attribute("StrkCcy", "USD"); // 1
    Leg_44_set.insert("USD");
    Leg_44.add_attribute("OptA", "1062519361"); // 1
    Leg_44_set.insert("1062519361");
    Leg_44.add_attribute("Cmult", "14674547.830000"); // 1
    Leg_44_set.insert("14674547.830000");
    Leg_44.add_attribute("MultTyp", "2"); // 1
    Leg_44_set.insert("2");
    Leg_44.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_44_set.insert("0");
    Leg_44.add_attribute("UOM", "USD"); // 1
    Leg_44_set.insert("USD");
    Leg_44.add_attribute("UOMQty", "7326806.380000"); // 1
    Leg_44_set.insert("7326806.380000");
    Leg_44.add_attribute("PxUOM", "USD"); // 1
    Leg_44_set.insert("USD");
    Leg_44.add_attribute("PxUOMQty", "2859158.540000"); // 1
    Leg_44_set.insert("2859158.540000");
    Leg_44.add_attribute("TmUnit", "Mo"); // 1
    Leg_44_set.insert("Mo");
    Leg_44.add_attribute("ExerStyle", "1"); // 1
    Leg_44_set.insert("1");
    Leg_44.add_attribute("CpnRt", "12182500.820000"); // 1
    Leg_44_set.insert("12182500.820000");
    Leg_44.add_attribute("Exch", "LegSecurityExchange_t_711627688"); // 1
    Leg_44_set.insert("LegSecurityExchange_t_711627688");
    Leg_44.add_attribute("Issr", "LegIssuer_t_265611699"); // 1
    Leg_44_set.insert("LegIssuer_t_265611699");
    Leg_44.add_attribute("EncLegIssrLen", "2098683053"); // 1
    Leg_44_set.insert("2098683053");
    Leg_44.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1822853732"); // 1
    Leg_44_set.insert("EncodedLegIssuer_t_1822853732");
    Leg_44.add_attribute("Desc", "LegSecurityDesc_t_1798819402"); // 1
    Leg_44_set.insert("LegSecurityDesc_t_1798819402");
    Leg_44.add_attribute("EncLegSecDescLen", "243915080"); // 1
    Leg_44_set.insert("243915080");
    Leg_44.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_32945708"); // 1
    Leg_44_set.insert("EncodedLegSecurityDesc_t_32945708");
    Leg_44.add_attribute("RatioQty", "17232524.380000"); // 1
    Leg_44_set.insert("17232524.380000");
    Leg_44.add_attribute("Side", "A"); // 1
    Leg_44_set.insert("A");
    Leg_44.add_attribute("Ccy", "CAN"); // 1
    Leg_44_set.insert("CAN");
    Leg_44.add_attribute("Pool", "LegPool_t_1516175013"); // 1
    Leg_44_set.insert("LegPool_t_1516175013");
    Leg_44.add_attribute("Dated", "LegDatedDate_t_1905945802"); // 1
    Leg_44_set.insert("LegDatedDate_t_1905945802");
    Leg_44.add_attribute("CSetMo", "1646597428"); // 1
    Leg_44_set.insert("1646597428");
    Leg_44.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2108227809"); // 1
    Leg_44_set.insert("LegInterestAccrualDate_t_2108227809");
    Leg_44.add_attribute("PutCall", "1215049379"); // 1
    Leg_44_set.insert("1215049379");
    Leg_44.add_attribute("LegOptionRatio", "5964741.410000"); // 1
    Leg_44_set.insert("5964741.410000");
    Leg_44.add_attribute("Px", "19965147.100000"); // 1
    Leg_44_set.insert("19965147.100000");
    all_values.push_back(Leg_44_set);
    all_compo_names.insert("Leg_44_set");

    {
      xml_element LegAID_44{"LegAID"};
      multiset<string> LegAID_44_set;
      LegAID_44.add_attribute("SecAltID", "LegSecurityAltID_t_571175033"); // 2
      LegAID_44_set.insert("LegSecurityAltID_t_571175033");
      LegAID_44.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_44_set.insert("4");
      all_values.push_back(LegAID_44_set);
      all_compo_names.insert("LegAID_44_set");

      Leg_44.add_element(LegAID_44);
    }
    elt.add_element(Leg_44);
  } // end Leg
  { // Full
    xml_element Full_0{"Full"};
    multiset<string> Full_0_set;
    Full_0.add_attribute("Typ", "0"); // 1
    Full_0_set.insert("0");
    Full_0.add_attribute("ID", "MDEntryID_t_417482503"); // 1
    Full_0_set.insert("MDEntryID_t_417482503");
    Full_0.add_attribute("Px", "15746565.980000"); // 1
    Full_0_set.insert("15746565.980000");
    Full_0.add_attribute("PxTyp", "14"); // 1
    Full_0_set.insert("14");
    Full_0.add_attribute("OrdTyp", "6"); // 1
    Full_0_set.insert("6");
    Full_0.add_attribute("Ccy", "GBP"); // 1
    Full_0_set.insert("GBP");
    Full_0.add_attribute("SettlCcy", "CAN"); // 1
    Full_0_set.insert("CAN");
    Full_0.add_attribute("Sz", "309826.950000"); // 1
    Full_0_set.insert("309826.950000");
    Full_0.add_attribute("LotTyp", "4"); // 1
    Full_0_set.insert("4");
    Full_0.add_attribute("Dt", "1846049907"); // 1
    Full_0_set.insert("1846049907");
    Full_0.add_attribute("Tm", "2129665748"); // 1
    Full_0_set.insert("2129665748");
    Full_0.add_attribute("TickDirctn", "3"); // 1
    Full_0_set.insert("3");
    Full_0.add_attribute("Mkt", "MDMkt_t_1497385661"); // 1
    Full_0_set.insert("MDMkt_t_1497385661");
    Full_0.add_attribute("SesID", "3"); // 1
    Full_0_set.insert("3");
    Full_0.add_attribute("SesSub", "5"); // 1
    Full_0_set.insert("5");
    Full_0.add_attribute("TrdgStat", "15"); // 1
    Full_0_set.insert("15");
    Full_0.add_attribute("HaltRsn", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("QCond", "r"); // 1
    Full_0_set.insert("r");
    Full_0.add_attribute("TrdCond", "AH"); // 1
    Full_0_set.insert("AH");
    Full_0.add_attribute("Orig", "MDEntryOriginator_t_1426694907"); // 1
    Full_0_set.insert("MDEntryOriginator_t_1426694907");
    Full_0.add_attribute("LctnID", "LocationID_t_2134925705"); // 1
    Full_0_set.insert("LocationID_t_2134925705");
    Full_0.add_attribute("DeskID", "DeskID_t_1190596402"); // 1
    Full_0_set.insert("DeskID_t_1190596402");
    Full_0.add_attribute("OpenClsSettlFlag", "4"); // 1
    Full_0_set.insert("4");
    Full_0.add_attribute("TmInForce", "7"); // 1
    Full_0_set.insert("7");
    Full_0.add_attribute("ExpireDt", "ExpireDate_t_1787070543"); // 1
    Full_0_set.insert("ExpireDate_t_1787070543");
    Full_0.add_attribute("ExpireTm", "ExpireTime_t_1236470130"); // 1
    Full_0_set.insert("ExpireTime_t_1236470130");
    Full_0.add_attribute("MinQty", "17736664.700000"); // 1
    Full_0_set.insert("17736664.700000");
    Full_0.add_attribute("ExecInst", "F"); // 1
    Full_0_set.insert("F");
    Full_0.add_attribute("SellerDays", "536906"); // 1
    Full_0_set.insert("536906");
    Full_0.add_attribute("OrdID", "OrderID_t_1664812638"); // 1
    Full_0_set.insert("OrderID_t_1664812638");
    Full_0.add_attribute("OrdID2", "SecondaryOrderID_t_532177859"); // 1
    Full_0_set.insert("SecondaryOrderID_t_532177859");
    Full_0.add_attribute("EntryID", "QuoteEntryID_t_1575193504"); // 1
    Full_0_set.insert("QuoteEntryID_t_1575193504");
    Full_0.add_attribute("Buyer", "MDEntryBuyer_t_191629397"); // 1
    Full_0_set.insert("MDEntryBuyer_t_191629397");
    Full_0.add_attribute("Seller", "MDEntrySeller_t_1682341001"); // 1
    Full_0_set.insert("MDEntrySeller_t_1682341001");
    Full_0.add_attribute("NumOfOrds", "716434677"); // 1
    Full_0_set.insert("716434677");
    Full_0.add_attribute("PosNo", "1151845657"); // 1
    Full_0_set.insert("1151845657");
    Full_0.add_attribute("Scope", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("PxDelta", "1493892.370000"); // 1
    Full_0_set.insert("1493892.370000");
    Full_0.add_attribute("TrdTyp", "10"); // 1
    Full_0_set.insert("10");
    Full_0.add_attribute("Txt", "Text_t_1502041759"); // 1
    Full_0_set.insert("Text_t_1502041759");
    Full_0.add_attribute("EncTxtLen", "1995439144"); // 1
    Full_0_set.insert("1995439144");
    Full_0.add_attribute("EncTxt", "EncodedText_t_1165010452"); // 1
    Full_0_set.insert("EncodedText_t_1165010452");
    Full_0.add_attribute("MDPxLvl", "369334243"); // 1
    Full_0_set.insert("369334243");
    Full_0.add_attribute("Cpcty", "G"); // 1
    Full_0_set.insert("G");
    Full_0.add_attribute("MDOrigTyp", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("HighPx", "14170560.830000"); // 1
    Full_0_set.insert("14170560.830000");
    Full_0.add_attribute("LowPx", "2710119.610000"); // 1
    Full_0_set.insert("2710119.610000");
    Full_0.add_attribute("FirstPx", "13016275.260000"); // 1
    Full_0_set.insert("13016275.260000");
    Full_0.add_attribute("LastPx", "16460359.860000"); // 1
    Full_0_set.insert("16460359.860000");
    Full_0.add_attribute("TrdVol", "19624945.830000"); // 1
    Full_0_set.insert("19624945.830000");
    Full_0.add_attribute("SettlTyp", "1"); // 1
    Full_0_set.insert("1");
    Full_0.add_attribute("SettlDt", "SettlDate_t_1633478044"); // 1
    Full_0_set.insert("SettlDate_t_1633478044");
    Full_0.add_attribute("MDQteTyp", "2"); // 1
    Full_0_set.insert("2");
    Full_0.add_attribute("RptSeq", "1968277853"); // 1
    Full_0_set.insert("1968277853");
    Full_0.add_attribute("DealingCpcty", "R"); // 1
    Full_0_set.insert("R");
    Full_0.add_attribute("MDEntrySpotRt", "6451942.320000"); // 1
    Full_0_set.insert("6451942.320000");
    Full_0.add_attribute("MDEntryFwdPnts", "10572643.360000"); // 1
    Full_0_set.insert("10572643.360000");
    all_values.push_back(Full_0_set);
    all_compo_names.insert("Full_0_set");

    {
      xml_element Yield_9{"Yield"};
      multiset<string> Yield_9_set;
      Yield_9.add_attribute("Typ", "LASTMONTH"); // 2
      Yield_9_set.insert("LASTMONTH");
      Yield_9.add_attribute("Yld", "7598895.880000"); // 2
      Yield_9_set.insert("7598895.880000");
      Yield_9.add_attribute("CalcDt", "YieldCalcDate_t_1057801242"); // 2
      Yield_9_set.insert("YieldCalcDate_t_1057801242");
      Yield_9.add_attribute("RedDt", "YieldRedemptionDate_t_1979481293"); // 2
      Yield_9_set.insert("YieldRedemptionDate_t_1979481293");
      Yield_9.add_attribute("RedPx", "12920674.480000"); // 2
      Yield_9_set.insert("12920674.480000");
      Yield_9.add_attribute("RedPxTyp", "16"); // 2
      Yield_9_set.insert("16");
      all_values.push_back(Yield_9_set);
      all_compo_names.insert("Yield_9_set");

      Full_0.add_element(Yield_9);
    }
    {
      xml_element SprdBnchmkCurve_14{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_14_set;
      SprdBnchmkCurve_14.add_attribute("Spread", "236270.420000"); // 2
      SprdBnchmkCurve_14_set.insert("236270.420000");
      SprdBnchmkCurve_14.add_attribute("Ccy", "USD"); // 2
      SprdBnchmkCurve_14_set.insert("USD");
      SprdBnchmkCurve_14.add_attribute("Name", "LIBID"); // 2
      SprdBnchmkCurve_14_set.insert("LIBID");
      SprdBnchmkCurve_14.add_attribute("Point", "BenchmarkCurvePoint_t_989560513"); // 2
      SprdBnchmkCurve_14_set.insert("BenchmarkCurvePoint_t_989560513");
      SprdBnchmkCurve_14.add_attribute("Px", "13513350.130000"); // 2
      SprdBnchmkCurve_14_set.insert("13513350.130000");
      SprdBnchmkCurve_14.add_attribute("PxTyp", "1"); // 2
      SprdBnchmkCurve_14_set.insert("1");
      SprdBnchmkCurve_14.add_attribute("SecID", "BenchmarkSecurityID_t_344118624"); // 2
      SprdBnchmkCurve_14_set.insert("BenchmarkSecurityID_t_344118624");
      SprdBnchmkCurve_14.add_attribute("SecIDSrc", "M"); // 2
      SprdBnchmkCurve_14_set.insert("M");
      all_values.push_back(SprdBnchmkCurve_14_set);
      all_compo_names.insert("SprdBnchmkCurve_14_set");

      Full_0.add_element(SprdBnchmkCurve_14);
    }
    {
      xml_element RtSrc_8{"RtSrc"};
      multiset<string> RtSrc_8_set;
      RtSrc_8.add_attribute("RtSrc", "1"); // 2
      RtSrc_8_set.insert("1");
      RtSrc_8.add_attribute("RtSrcTyp", "1"); // 2
      RtSrc_8_set.insert("1");
      RtSrc_8.add_attribute("RefPg", "ReferencePage_t_397148018"); // 2
      RtSrc_8_set.insert("ReferencePage_t_397148018");
      all_values.push_back(RtSrc_8_set);
      all_compo_names.insert("RtSrc_8_set");

      Full_0.add_element(RtSrc_8);
    }
    {
      xml_element SecSizesGrp_2{"SecSizesGrp"};
      multiset<string> SecSizesGrp_2_set;
      SecSizesGrp_2.add_attribute("MDSecSizeType", "1"); // 2
      SecSizesGrp_2_set.insert("1");
      SecSizesGrp_2.add_attribute("MDSecSize", "21305089.500000"); // 2
      SecSizesGrp_2_set.insert("21305089.500000");
      all_values.push_back(SecSizesGrp_2_set);
      all_compo_names.insert("SecSizesGrp_2_set");

      Full_0.add_element(SecSizesGrp_2);
    }
    {
      xml_element Pty_179{"Pty"};
      multiset<string> Pty_179_set;
      Pty_179.add_attribute("ID", "PartyID_t_668159980"); // 2
      Pty_179_set.insert("PartyID_t_668159980");
      Pty_179.add_attribute("Src", "B"); // 2
      Pty_179_set.insert("B");
      Pty_179.add_attribute("R", "67"); // 2
      Pty_179_set.insert("67");
      all_values.push_back(Pty_179_set);
      all_compo_names.insert("Pty_179_set");

      {
        xml_element Sub_179{"Sub"};
        multiset<string> Sub_179_set;
        Sub_179.add_attribute("ID", "PartySubID_t_483170915"); // 3
        Sub_179_set.insert("PartySubID_t_483170915");
        Sub_179.add_attribute("Typ", "3"); // 3
        Sub_179_set.insert("3");
        all_values.push_back(Sub_179_set);
        all_compo_names.insert("Sub_179_set");

        Pty_179.add_element(Sub_179);
      }
      Full_0.add_element(Pty_179);
    }
    elt.add_element(Full_0);
  } // end Full
  { // Rtg
    xml_element Rtg_7{"Rtg"};
    multiset<string> Rtg_7_set;
    Rtg_7.add_attribute("RtgTyp", "1"); // 1
    Rtg_7_set.insert("1");
    Rtg_7.add_attribute("RtgID", "RoutingID_t_175228711"); // 1
    Rtg_7_set.insert("RoutingID_t_175228711");
    all_values.push_back(Rtg_7_set);
    all_compo_names.insert("Rtg_7_set");

    elt.add_element(Rtg_7);
  } // end Rtg
  { // Rtg
    xml_element Rtg_8{"Rtg"};
    multiset<string> Rtg_8_set;
    Rtg_8.add_attribute("RtgTyp", "3"); // 1
    Rtg_8_set.insert("3");
    Rtg_8.add_attribute("RtgID", "RoutingID_t_2133972484"); // 1
    Rtg_8_set.insert("RoutingID_t_2133972484");
    all_values.push_back(Rtg_8_set);
    all_compo_names.insert("Rtg_8_set");

    elt.add_element(Rtg_8);
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
