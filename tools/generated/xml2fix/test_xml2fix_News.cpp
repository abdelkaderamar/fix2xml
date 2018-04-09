#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/News.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( News_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"News" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> News_message_t_0;
  elt.add_attribute("ID", "NewsID_t_1708479471"); // 0
  News_message_t_0.insert("NewsID_t_1708479471");
  elt.add_attribute("NewsCatgy", "3"); // 0
  News_message_t_0.insert("3");
  elt.add_attribute("LangCd", "LanguageCode_t_1159168770"); // 0
  News_message_t_0.insert("LanguageCode_t_1159168770");
  elt.add_attribute("OrigTm", "OrigTime_t_586935173"); // 0
  News_message_t_0.insert("OrigTime_t_586935173");
  elt.add_attribute("Urgency", "2"); // 0
  News_message_t_0.insert("2");
  elt.add_attribute("Headline", "Headline_t_470589752"); // 0
  News_message_t_0.insert("Headline_t_470589752");
  elt.add_attribute("EncHeadlineLen", "1152699015"); // 0
  News_message_t_0.insert("1152699015");
  elt.add_attribute("EncHeadline", "EncodedHeadline_t_881181658"); // 0
  News_message_t_0.insert("EncodedHeadline_t_881181658");
  elt.add_attribute("MktID", "MarketID_t_964781968"); // 0
  News_message_t_0.insert("MarketID_t_964781968");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_309310148"); // 0
  News_message_t_0.insert("MarketSegmentID_t_309310148");
  elt.add_attribute("URL", "URLLink_t_1328804083"); // 0
  News_message_t_0.insert("URLLink_t_1328804083");
  elt.add_attribute("RawDataLength", "116288424"); // 0
  News_message_t_0.insert("116288424");
  elt.add_attribute("RawData", "RawData_t_941040048"); // 0
  News_message_t_0.insert("RawData_t_941040048");
  all_values.push_back(News_message_t_0);
  all_compo_names.insert("News_message_t");

  { // Hdr
    xml_element Hdr_55{"Hdr"};
    multiset<string> Hdr_55_set;
    Hdr_55.add_attribute("SeqNum", "1864454822"); // 1
    Hdr_55_set.insert("1864454822");
    Hdr_55.add_attribute("SID", "SenderCompID_t_64508216"); // 1
    Hdr_55_set.insert("SenderCompID_t_64508216");
    Hdr_55.add_attribute("TID", "TargetCompID_t_864685537"); // 1
    Hdr_55_set.insert("TargetCompID_t_864685537");
    Hdr_55.add_attribute("OBID", "OnBehalfOfCompID_t_1577085431"); // 1
    Hdr_55_set.insert("OnBehalfOfCompID_t_1577085431");
    Hdr_55.add_attribute("D2ID", "DeliverToCompID_t_114485113"); // 1
    Hdr_55_set.insert("DeliverToCompID_t_114485113");
    Hdr_55.add_attribute("SSub", "SenderSubID_t_312069672"); // 1
    Hdr_55_set.insert("SenderSubID_t_312069672");
    Hdr_55.add_attribute("SLoc", "SenderLocationID_t_692841744"); // 1
    Hdr_55_set.insert("SenderLocationID_t_692841744");
    Hdr_55.add_attribute("TSub", "TargetSubID_t_492417817"); // 1
    Hdr_55_set.insert("TargetSubID_t_492417817");
    Hdr_55.add_attribute("TLoc", "TargetLocationID_t_186834686"); // 1
    Hdr_55_set.insert("TargetLocationID_t_186834686");
    Hdr_55.add_attribute("OBSub", "OnBehalfOfSubID_t_1116187012"); // 1
    Hdr_55_set.insert("OnBehalfOfSubID_t_1116187012");
    Hdr_55.add_attribute("OBLoc", "OnBehalfOfLocationID_t_111112387"); // 1
    Hdr_55_set.insert("OnBehalfOfLocationID_t_111112387");
    Hdr_55.add_attribute("D2Sub", "DeliverToSubID_t_1598563145"); // 1
    Hdr_55_set.insert("DeliverToSubID_t_1598563145");
    Hdr_55.add_attribute("D2Loc", "DeliverToLocationID_t_1148722898"); // 1
    Hdr_55_set.insert("DeliverToLocationID_t_1148722898");
    Hdr_55.add_attribute("PosDup", "N"); // 1
    Hdr_55_set.insert("N");
    Hdr_55.add_attribute("PosRsnd", "Y"); // 1
    Hdr_55_set.insert("Y");
    Hdr_55.add_attribute("Snt", "SendingTime_t_401319756"); // 1
    Hdr_55_set.insert("SendingTime_t_401319756");
    Hdr_55.add_attribute("OrigSnt", "OrigSendingTime_t_664198917"); // 1
    Hdr_55_set.insert("OrigSendingTime_t_664198917");
    Hdr_55.add_attribute("MsgEncd", "MessageEncoding_t_1290815449"); // 1
    Hdr_55_set.insert("MessageEncoding_t_1290815449");
    all_values.push_back(Hdr_55_set);
    all_compo_names.insert("Hdr_55_set");

    {
      xml_element Hop_55{"Hop"};
      multiset<string> Hop_55_set;
      Hop_55.add_attribute("ID", "HopCompID_t_2109799227"); // 2
      Hop_55_set.insert("HopCompID_t_2109799227");
      Hop_55.add_attribute("Ref", "2003547880"); // 2
      Hop_55_set.insert("2003547880");
      Hop_55.add_attribute("Snt", "HopSendingTime_t_302500572"); // 2
      Hop_55_set.insert("HopSendingTime_t_302500572");
      all_values.push_back(Hop_55_set);
      all_compo_names.insert("Hop_55_set");

      Hdr_55.add_element(Hop_55);
    }
    elt.add_element(Hdr_55);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_10{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_10_set;
    ApplSeqCtrl_10.add_attribute("ApplID", "ApplID_t_549250752"); // 1
    ApplSeqCtrl_10_set.insert("ApplID_t_549250752");
    ApplSeqCtrl_10.add_attribute("ApplSeqNum", "2070250650"); // 1
    ApplSeqCtrl_10_set.insert("2070250650");
    ApplSeqCtrl_10.add_attribute("ApplLastSeqNum", "773090324"); // 1
    ApplSeqCtrl_10_set.insert("773090324");
    ApplSeqCtrl_10.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_10_set.insert("false");
    all_values.push_back(ApplSeqCtrl_10_set);
    all_compo_names.insert("ApplSeqCtrl_10_set");

    elt.add_element(ApplSeqCtrl_10);
  } // end ApplSeqCtrl
  { // Refs
    xml_element Refs_0{"Refs"};
    multiset<string> Refs_0_set;
    Refs_0.add_attribute("RefID", "NewsRefID_t_1737872292"); // 1
    Refs_0_set.insert("NewsRefID_t_1737872292");
    Refs_0.add_attribute("RefTyp", "0"); // 1
    Refs_0_set.insert("0");
    all_values.push_back(Refs_0_set);
    all_compo_names.insert("Refs_0_set");

    elt.add_element(Refs_0);
  } // end Refs
  { // Rtg
    xml_element Rtg_9{"Rtg"};
    multiset<string> Rtg_9_set;
    Rtg_9.add_attribute("RtgTyp", "2"); // 1
    Rtg_9_set.insert("2");
    Rtg_9.add_attribute("RtgID", "RoutingID_t_804816316"); // 1
    Rtg_9_set.insert("RoutingID_t_804816316");
    all_values.push_back(Rtg_9_set);
    all_compo_names.insert("Rtg_9_set");

    elt.add_element(Rtg_9);
  } // end Rtg
  { // Rtg
    xml_element Rtg_10{"Rtg"};
    multiset<string> Rtg_10_set;
    Rtg_10.add_attribute("RtgTyp", "3"); // 1
    Rtg_10_set.insert("3");
    Rtg_10.add_attribute("RtgID", "RoutingID_t_1918668933"); // 1
    Rtg_10_set.insert("RoutingID_t_1918668933");
    all_values.push_back(Rtg_10_set);
    all_compo_names.insert("Rtg_10_set");

    elt.add_element(Rtg_10);
  } // end Rtg
  { // Inst
    xml_element Inst_4{"Inst"};
    {
      xml_element Instrmt_42{"Instrmt"};
      multiset<string> Instrmt_42_set;
      Instrmt_42.add_attribute("Sym", "Symbol_t_1279325702"); // 2
      Instrmt_42_set.insert("Symbol_t_1279325702");
      Instrmt_42.add_attribute("Sfx", "CD"); // 2
      Instrmt_42_set.insert("CD");
      Instrmt_42.add_attribute("ID", "SecurityID_t_1981571525"); // 2
      Instrmt_42_set.insert("SecurityID_t_1981571525");
      Instrmt_42.add_attribute("Src", "J"); // 2
      Instrmt_42_set.insert("J");
      Instrmt_42.add_attribute("Prod", "9"); // 2
      Instrmt_42_set.insert("9");
      Instrmt_42.add_attribute("ProdCmplx", "ProductComplex_t_20922563"); // 2
      Instrmt_42_set.insert("ProductComplex_t_20922563");
      Instrmt_42.add_attribute("SecGrp", "SecurityGroup_t_940870811"); // 2
      Instrmt_42_set.insert("SecurityGroup_t_940870811");
      Instrmt_42.add_attribute("CFI", "CFICode_t_489200603"); // 2
      Instrmt_42_set.insert("CFICode_t_489200603");
      Instrmt_42.add_attribute("SecTyp", "CPP"); // 2
      Instrmt_42_set.insert("CPP");
      Instrmt_42.add_attribute("SubTyp", "SecuritySubType_t_2089593709"); // 2
      Instrmt_42_set.insert("SecuritySubType_t_2089593709");
      Instrmt_42.add_attribute("MMY", "1135838367"); // 2
      Instrmt_42_set.insert("1135838367");
      Instrmt_42.add_attribute("MatDt", "MaturityDate_t_509171666"); // 2
      Instrmt_42_set.insert("MaturityDate_t_509171666");
      Instrmt_42.add_attribute("MatTm", "343429817"); // 2
      Instrmt_42_set.insert("343429817");
      Instrmt_42.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1800037285"); // 2
      Instrmt_42_set.insert("SettleOnOpenFlag_t_1800037285");
      Instrmt_42.add_attribute("AsgnMeth", "1799987115"); // 2
      Instrmt_42_set.insert("1799987115");
      Instrmt_42.add_attribute("Status", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CpnPmt", "CouponPaymentDate_t_1656101517"); // 2
      Instrmt_42_set.insert("CouponPaymentDate_t_1656101517");
      Instrmt_42.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_42_set.insert("XR");
      Instrmt_42.add_attribute("Snrty", "SR"); // 2
      Instrmt_42_set.insert("SR");
      Instrmt_42.add_attribute("NotlPctOut", "15788685.200000"); // 2
      Instrmt_42_set.insert("15788685.200000");
      Instrmt_42.add_attribute("OrigNotlPctOut", "7280943.630000"); // 2
      Instrmt_42_set.insert("7280943.630000");
      Instrmt_42.add_attribute("AttchPnt", "4094622.680000"); // 2
      Instrmt_42_set.insert("4094622.680000");
      Instrmt_42.add_attribute("DetchPnt", "2353335.330000"); // 2
      Instrmt_42_set.insert("2353335.330000");
      Instrmt_42.add_attribute("Issued", "IssueDate_t_318483008"); // 2
      Instrmt_42_set.insert("IssueDate_t_318483008");
      Instrmt_42.add_attribute("RepoCollSecTyp", "273238536"); // 2
      Instrmt_42_set.insert("273238536");
      Instrmt_42.add_attribute("RepoTrm", "220602629"); // 2
      Instrmt_42_set.insert("220602629");
      Instrmt_42.add_attribute("RepoRt", "251600.770000"); // 2
      Instrmt_42_set.insert("251600.770000");
      Instrmt_42.add_attribute("Fctr", "10780548.520000"); // 2
      Instrmt_42_set.insert("10780548.520000");
      Instrmt_42.add_attribute("CrdRtg", "CreditRating_t_2070326547"); // 2
      Instrmt_42_set.insert("CreditRating_t_2070326547");
      Instrmt_42.add_attribute("Rgstry", "InstrRegistry_t_1943829010"); // 2
      Instrmt_42_set.insert("InstrRegistry_t_1943829010");
      Instrmt_42.add_attribute("IssuCtry", "600073057"); // 2
      Instrmt_42_set.insert("600073057");
      Instrmt_42.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1202168601"); // 2
      Instrmt_42_set.insert("StateOrProvinceOfIssue_t_1202168601");
      Instrmt_42.add_attribute("Lcl", "LocaleOfIssue_t_1829499409"); // 2
      Instrmt_42_set.insert("LocaleOfIssue_t_1829499409");
      Instrmt_42.add_attribute("Redeem", "RedemptionDate_t_434160934"); // 2
      Instrmt_42_set.insert("RedemptionDate_t_434160934");
      Instrmt_42.add_attribute("StrkPx", "10268524.000000"); // 2
      Instrmt_42_set.insert("10268524.000000");
      Instrmt_42.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_42_set.insert("CHF");
      Instrmt_42.add_attribute("StrkMult", "19677232.110000"); // 2
      Instrmt_42_set.insert("19677232.110000");
      Instrmt_42.add_attribute("StrkValu", "5493045.800000"); // 2
      Instrmt_42_set.insert("5493045.800000");
      Instrmt_42.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_42_set.insert("3");
      Instrmt_42.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_42_set.insert("3");
      Instrmt_42.add_attribute("StrkPxBndryPrcsn", "16851429.470000"); // 2
      Instrmt_42_set.insert("16851429.470000");
      Instrmt_42.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("OptAt", "105779442"); // 2
      Instrmt_42_set.insert("105779442");
      Instrmt_42.add_attribute("Mult", "13376965.840000"); // 2
      Instrmt_42_set.insert("13376965.840000");
      Instrmt_42.add_attribute("MultTyp", "0"); // 2
      Instrmt_42_set.insert("0");
      Instrmt_42.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_42_set.insert("3");
      Instrmt_42.add_attribute("MinPxIncr", "8463144.540000"); // 2
      Instrmt_42_set.insert("8463144.540000");
      Instrmt_42.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_43764731"); // 2
      Instrmt_42_set.insert("MinPriceIncrementAmount_t_43764731");
      Instrmt_42.add_attribute("UOM", "t"); // 2
      Instrmt_42_set.insert("t");
      Instrmt_42.add_attribute("UOMQty", "2776993.260000"); // 2
      Instrmt_42_set.insert("2776993.260000");
      Instrmt_42.add_attribute("PxUOM", "MMbbl"); // 2
      Instrmt_42_set.insert("MMbbl");
      Instrmt_42.add_attribute("PxUOMQty", "16759832.560000"); // 2
      Instrmt_42_set.insert("16759832.560000");
      Instrmt_42.add_attribute("SettlMeth", "P"); // 2
      Instrmt_42_set.insert("P");
      Instrmt_42.add_attribute("ExerStyle", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_42_set.insert("2");
      Instrmt_42.add_attribute("OptPayAmt", "OptPayoutAmount_t_733635488"); // 2
      Instrmt_42_set.insert("OptPayoutAmount_t_733635488");
      Instrmt_42.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_42_set.insert("PCTPAR");
      Instrmt_42.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_42_set.insert("FUTDA");
      Instrmt_42.add_attribute("ListMeth", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CapPx", "9118475.420000"); // 2
      Instrmt_42_set.insert("9118475.420000");
      Instrmt_42.add_attribute("FlrPx", "14798660.540000"); // 2
      Instrmt_42_set.insert("14798660.540000");
      Instrmt_42.add_attribute("PutCall", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("FlexInd", "false"); // 2
      Instrmt_42_set.insert("false");
      Instrmt_42.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_42_set.insert("false");
      Instrmt_42.add_attribute("TmUnit", "Min"); // 2
      Instrmt_42_set.insert("Min");
      Instrmt_42.add_attribute("CpnRt", "6539672.800000"); // 2
      Instrmt_42_set.insert("6539672.800000");
      Instrmt_42.add_attribute("Exch", "SecurityExchange_t_221626838"); // 2
      Instrmt_42_set.insert("SecurityExchange_t_221626838");
      Instrmt_42.add_attribute("PosLmt", "558255304"); // 2
      Instrmt_42_set.insert("558255304");
      Instrmt_42.add_attribute("NTPosLmt", "1203271860"); // 2
      Instrmt_42_set.insert("1203271860");
      Instrmt_42.add_attribute("Issr", "Issuer_t_148712396"); // 2
      Instrmt_42_set.insert("Issuer_t_148712396");
      Instrmt_42.add_attribute("EncIssrLen", "320604928"); // 2
      Instrmt_42_set.insert("320604928");
      Instrmt_42.add_attribute("EncIssr", "EncodedIssuer_t_740931159"); // 2
      Instrmt_42_set.insert("EncodedIssuer_t_740931159");
      Instrmt_42.add_attribute("Desc", "SecurityDesc_t_584969620"); // 2
      Instrmt_42_set.insert("SecurityDesc_t_584969620");
      Instrmt_42.add_attribute("EncSecDescLen", "426384370"); // 2
      Instrmt_42_set.insert("426384370");
      Instrmt_42.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2078627744"); // 2
      Instrmt_42_set.insert("EncodedSecurityDesc_t_2078627744");
      Instrmt_42.add_attribute("Pool", "Pool_t_673730312"); // 2
      Instrmt_42_set.insert("Pool_t_673730312");
      Instrmt_42.add_attribute("CSetMo", "837909209"); // 2
      Instrmt_42_set.insert("837909209");
      Instrmt_42.add_attribute("CPPgm", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CPRegT", "CPRegType_t_717495043"); // 2
      Instrmt_42_set.insert("CPRegType_t_717495043");
      Instrmt_42.add_attribute("Dated", "DatedDate_t_2104430196"); // 2
      Instrmt_42_set.insert("DatedDate_t_2104430196");
      Instrmt_42.add_attribute("IntAcrl", "InterestAccrualDate_t_1055157876"); // 2
      Instrmt_42_set.insert("InterestAccrualDate_t_1055157876");
      all_values.push_back(Instrmt_42_set);
      all_compo_names.insert("Instrmt_42_set");

      {
        xml_element AID_45{"AID"};
        multiset<string> AID_45_set;
        AID_45.add_attribute("AltID", "SecurityAltID_t_1489354137"); // 3
        AID_45_set.insert("SecurityAltID_t_1489354137");
        AID_45.add_attribute("AltIDSrc", "1"); // 3
        AID_45_set.insert("1");
        all_values.push_back(AID_45_set);
        all_compo_names.insert("AID_45_set");

        Instrmt_42.add_element(AID_45);
      }
      {
        xml_element SecXML_45{"SecXML"};
        multiset<string> SecXML_45_set;
        SecXML_45.add_attribute("Schema", "SecurityXMLSchema_t_1568190735"); // 3
        SecXML_45_set.insert("SecurityXMLSchema_t_1568190735");
        all_values.push_back(SecXML_45_set);
        all_compo_names.insert("SecXML_45_set");

        Instrmt_42.add_element(SecXML_45);
      }
      {
        xml_element Evnt_45{"Evnt"};
        multiset<string> Evnt_45_set;
        Evnt_45.add_attribute("EventTyp", "12"); // 3
        Evnt_45_set.insert("12");
        Evnt_45.add_attribute("Dt", "EventDate_t_1434667949"); // 3
        Evnt_45_set.insert("EventDate_t_1434667949");
        Evnt_45.add_attribute("Tm", "EventTime_t_154342575"); // 3
        Evnt_45_set.insert("EventTime_t_154342575");
        Evnt_45.add_attribute("Px", "15477147.710000"); // 3
        Evnt_45_set.insert("15477147.710000");
        Evnt_45.add_attribute("Txt", "EventText_t_166977298"); // 3
        Evnt_45_set.insert("EventText_t_166977298");
        all_values.push_back(Evnt_45_set);
        all_compo_names.insert("Evnt_45_set");

        Instrmt_42.add_element(Evnt_45);
      }
      {
        xml_element Pty_232{"Pty"};
        multiset<string> Pty_232_set;
        Pty_232.add_attribute("ID", "InstrumentPartyID_t_810820962"); // 3
        Pty_232_set.insert("InstrumentPartyID_t_810820962");
        Pty_232.add_attribute("Src", "C"); // 3
        Pty_232_set.insert("C");
        Pty_232.add_attribute("R", "1"); // 3
        Pty_232_set.insert("1");
        all_values.push_back(Pty_232_set);
        all_compo_names.insert("Pty_232_set");

        {
          xml_element Sub_232{"Sub"};
          multiset<string> Sub_232_set;
          Sub_232.add_attribute("ID", "InstrumentPartySubID_t_521984303"); // 4
          Sub_232_set.insert("InstrumentPartySubID_t_521984303");
          Sub_232.add_attribute("Typ", "31"); // 4
          Sub_232_set.insert("31");
          all_values.push_back(Sub_232_set);
          all_compo_names.insert("Sub_232_set");

          Pty_232.add_element(Sub_232);
        }
        Instrmt_42.add_element(Pty_232);
      }
      {
        xml_element CmplxEvnt_42{"CmplxEvnt"};
        multiset<string> CmplxEvnt_42_set;
        CmplxEvnt_42.add_attribute("Typ", "9"); // 3
        CmplxEvnt_42_set.insert("9");
        CmplxEvnt_42.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1260000044"); // 3
        CmplxEvnt_42_set.insert("ComplexOptPayoutAmount_t_1260000044");
        CmplxEvnt_42.add_attribute("Px", "15599092.480000"); // 3
        CmplxEvnt_42_set.insert("15599092.480000");
        CmplxEvnt_42.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_42_set.insert("3");
        CmplxEvnt_42.add_attribute("PxBndryPrcsn", "18182553.480000"); // 3
        CmplxEvnt_42_set.insert("18182553.480000");
        CmplxEvnt_42.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_42_set.insert("3");
        CmplxEvnt_42.add_attribute("Cond", "1"); // 3
        CmplxEvnt_42_set.insert("1");
        all_values.push_back(CmplxEvnt_42_set);
        all_compo_names.insert("CmplxEvnt_42_set");

        {
          xml_element EvntDts_42{"EvntDts"};
          multiset<string> EvntDts_42_set;
          EvntDts_42.add_attribute("StartDt", "ComplexEventStartDate_t_2138860277"); // 4
          EvntDts_42_set.insert("ComplexEventStartDate_t_2138860277");
          EvntDts_42.add_attribute("EndDt", "ComplexEventEndDate_t_1356628620"); // 4
          EvntDts_42_set.insert("ComplexEventEndDate_t_1356628620");
          all_values.push_back(EvntDts_42_set);
          all_compo_names.insert("EvntDts_42_set");

          {
            xml_element EvntTms_42{"EvntTms"};
            multiset<string> EvntTms_42_set;
            EvntTms_42.add_attribute("StartTm", "221211901"); // 5
            EvntTms_42_set.insert("221211901");
            EvntTms_42.add_attribute("EndTm", "417760999"); // 5
            EvntTms_42_set.insert("417760999");
            all_values.push_back(EvntTms_42_set);
            all_compo_names.insert("EvntTms_42_set");

            EvntDts_42.add_element(EvntTms_42);
          }
          CmplxEvnt_42.add_element(EvntDts_42);
        }
        Instrmt_42.add_element(CmplxEvnt_42);
      }
      Inst_4.add_element(Instrmt_42);
    }
    elt.add_element(Inst_4);
  } // end Inst
  { // Inst
    xml_element Inst_5{"Inst"};
    {
      xml_element Instrmt_43{"Instrmt"};
      multiset<string> Instrmt_43_set;
      Instrmt_43.add_attribute("Sym", "Symbol_t_1287772716"); // 2
      Instrmt_43_set.insert("Symbol_t_1287772716");
      Instrmt_43.add_attribute("Sfx", "WI"); // 2
      Instrmt_43_set.insert("WI");
      Instrmt_43.add_attribute("ID", "SecurityID_t_1255670208"); // 2
      Instrmt_43_set.insert("SecurityID_t_1255670208");
      Instrmt_43.add_attribute("Src", "B"); // 2
      Instrmt_43_set.insert("B");
      Instrmt_43.add_attribute("Prod", "10"); // 2
      Instrmt_43_set.insert("10");
      Instrmt_43.add_attribute("ProdCmplx", "ProductComplex_t_1212616757"); // 2
      Instrmt_43_set.insert("ProductComplex_t_1212616757");
      Instrmt_43.add_attribute("SecGrp", "SecurityGroup_t_972905494"); // 2
      Instrmt_43_set.insert("SecurityGroup_t_972905494");
      Instrmt_43.add_attribute("CFI", "CFICode_t_954307745"); // 2
      Instrmt_43_set.insert("CFICode_t_954307745");
      Instrmt_43.add_attribute("SecTyp", "MTN"); // 2
      Instrmt_43_set.insert("MTN");
      Instrmt_43.add_attribute("SubTyp", "SecuritySubType_t_393612581"); // 2
      Instrmt_43_set.insert("SecuritySubType_t_393612581");
      Instrmt_43.add_attribute("MMY", "1386520337"); // 2
      Instrmt_43_set.insert("1386520337");
      Instrmt_43.add_attribute("MatDt", "MaturityDate_t_2132730862"); // 2
      Instrmt_43_set.insert("MaturityDate_t_2132730862");
      Instrmt_43.add_attribute("MatTm", "547955156"); // 2
      Instrmt_43_set.insert("547955156");
      Instrmt_43.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_786751461"); // 2
      Instrmt_43_set.insert("SettleOnOpenFlag_t_786751461");
      Instrmt_43.add_attribute("AsgnMeth", "152224512"); // 2
      Instrmt_43_set.insert("152224512");
      Instrmt_43.add_attribute("Status", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("CpnPmt", "CouponPaymentDate_t_1098830126"); // 2
      Instrmt_43_set.insert("CouponPaymentDate_t_1098830126");
      Instrmt_43.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_43_set.insert("MR");
      Instrmt_43.add_attribute("Snrty", "SB"); // 2
      Instrmt_43_set.insert("SB");
      Instrmt_43.add_attribute("NotlPctOut", "20047720.950000"); // 2
      Instrmt_43_set.insert("20047720.950000");
      Instrmt_43.add_attribute("OrigNotlPctOut", "10649709.100000"); // 2
      Instrmt_43_set.insert("10649709.100000");
      Instrmt_43.add_attribute("AttchPnt", "9932768.180000"); // 2
      Instrmt_43_set.insert("9932768.180000");
      Instrmt_43.add_attribute("DetchPnt", "14171976.950000"); // 2
      Instrmt_43_set.insert("14171976.950000");
      Instrmt_43.add_attribute("Issued", "IssueDate_t_552500794"); // 2
      Instrmt_43_set.insert("IssueDate_t_552500794");
      Instrmt_43.add_attribute("RepoCollSecTyp", "664048519"); // 2
      Instrmt_43_set.insert("664048519");
      Instrmt_43.add_attribute("RepoTrm", "2032895156"); // 2
      Instrmt_43_set.insert("2032895156");
      Instrmt_43.add_attribute("RepoRt", "1887430.750000"); // 2
      Instrmt_43_set.insert("1887430.750000");
      Instrmt_43.add_attribute("Fctr", "6554251.480000"); // 2
      Instrmt_43_set.insert("6554251.480000");
      Instrmt_43.add_attribute("CrdRtg", "CreditRating_t_1242040128"); // 2
      Instrmt_43_set.insert("CreditRating_t_1242040128");
      Instrmt_43.add_attribute("Rgstry", "InstrRegistry_t_409954976"); // 2
      Instrmt_43_set.insert("InstrRegistry_t_409954976");
      Instrmt_43.add_attribute("IssuCtry", "1073186147"); // 2
      Instrmt_43_set.insert("1073186147");
      Instrmt_43.add_attribute("StPrv", "StateOrProvinceOfIssue_t_382329196"); // 2
      Instrmt_43_set.insert("StateOrProvinceOfIssue_t_382329196");
      Instrmt_43.add_attribute("Lcl", "LocaleOfIssue_t_1304897189"); // 2
      Instrmt_43_set.insert("LocaleOfIssue_t_1304897189");
      Instrmt_43.add_attribute("Redeem", "RedemptionDate_t_181372708"); // 2
      Instrmt_43_set.insert("RedemptionDate_t_181372708");
      Instrmt_43.add_attribute("StrkPx", "3000768.140000"); // 2
      Instrmt_43_set.insert("3000768.140000");
      Instrmt_43.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_43_set.insert("CHF");
      Instrmt_43.add_attribute("StrkMult", "12729823.080000"); // 2
      Instrmt_43_set.insert("12729823.080000");
      Instrmt_43.add_attribute("StrkValu", "17241585.420000"); // 2
      Instrmt_43_set.insert("17241585.420000");
      Instrmt_43.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_43_set.insert("3");
      Instrmt_43.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_43_set.insert("5");
      Instrmt_43.add_attribute("StrkPxBndryPrcsn", "9631952.320000"); // 2
      Instrmt_43_set.insert("9631952.320000");
      Instrmt_43.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_43_set.insert("2");
      Instrmt_43.add_attribute("OptAt", "67066397"); // 2
      Instrmt_43_set.insert("67066397");
      Instrmt_43.add_attribute("Mult", "17499466.930000"); // 2
      Instrmt_43_set.insert("17499466.930000");
      Instrmt_43.add_attribute("MultTyp", "0"); // 2
      Instrmt_43_set.insert("0");
      Instrmt_43.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_43_set.insert("0");
      Instrmt_43.add_attribute("MinPxIncr", "7012931.710000"); // 2
      Instrmt_43_set.insert("7012931.710000");
      Instrmt_43.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1881108322"); // 2
      Instrmt_43_set.insert("MinPriceIncrementAmount_t_1881108322");
      Instrmt_43.add_attribute("UOM", "Gal"); // 2
      Instrmt_43_set.insert("Gal");
      Instrmt_43.add_attribute("UOMQty", "5585816.180000"); // 2
      Instrmt_43_set.insert("5585816.180000");
      Instrmt_43.add_attribute("PxUOM", "oz_tr"); // 2
      Instrmt_43_set.insert("oz_tr");
      Instrmt_43.add_attribute("PxUOMQty", "49124.600000"); // 2
      Instrmt_43_set.insert("49124.600000");
      Instrmt_43.add_attribute("SettlMeth", "C"); // 2
      Instrmt_43_set.insert("C");
      Instrmt_43.add_attribute("ExerStyle", "2"); // 2
      Instrmt_43_set.insert("2");
      Instrmt_43.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_43_set.insert("1");
      Instrmt_43.add_attribute("OptPayAmt", "OptPayoutAmount_t_1861190822"); // 2
      Instrmt_43_set.insert("OptPayoutAmount_t_1861190822");
      Instrmt_43.add_attribute("PxQteMeth", "INT"); // 2
      Instrmt_43_set.insert("INT");
      Instrmt_43.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_43_set.insert("FUTDA");
      Instrmt_43.add_attribute("ListMeth", "0"); // 2
      Instrmt_43_set.insert("0");
      Instrmt_43.add_attribute("CapPx", "19497944.300000"); // 2
      Instrmt_43_set.insert("19497944.300000");
      Instrmt_43.add_attribute("FlrPx", "2500886.260000"); // 2
      Instrmt_43_set.insert("2500886.260000");
      Instrmt_43.add_attribute("PutCall", "0"); // 2
      Instrmt_43_set.insert("0");
      Instrmt_43.add_attribute("FlexInd", "false"); // 2
      Instrmt_43_set.insert("false");
      Instrmt_43.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_43_set.insert("true");
      Instrmt_43.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_43_set.insert("Mo");
      Instrmt_43.add_attribute("CpnRt", "18770587.680000"); // 2
      Instrmt_43_set.insert("18770587.680000");
      Instrmt_43.add_attribute("Exch", "SecurityExchange_t_1825450799"); // 2
      Instrmt_43_set.insert("SecurityExchange_t_1825450799");
      Instrmt_43.add_attribute("PosLmt", "763651972"); // 2
      Instrmt_43_set.insert("763651972");
      Instrmt_43.add_attribute("NTPosLmt", "1453733663"); // 2
      Instrmt_43_set.insert("1453733663");
      Instrmt_43.add_attribute("Issr", "Issuer_t_1770019530"); // 2
      Instrmt_43_set.insert("Issuer_t_1770019530");
      Instrmt_43.add_attribute("EncIssrLen", "282763213"); // 2
      Instrmt_43_set.insert("282763213");
      Instrmt_43.add_attribute("EncIssr", "EncodedIssuer_t_269445247"); // 2
      Instrmt_43_set.insert("EncodedIssuer_t_269445247");
      Instrmt_43.add_attribute("Desc", "SecurityDesc_t_1699835475"); // 2
      Instrmt_43_set.insert("SecurityDesc_t_1699835475");
      Instrmt_43.add_attribute("EncSecDescLen", "349829610"); // 2
      Instrmt_43_set.insert("349829610");
      Instrmt_43.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2019391940"); // 2
      Instrmt_43_set.insert("EncodedSecurityDesc_t_2019391940");
      Instrmt_43.add_attribute("Pool", "Pool_t_1781875932"); // 2
      Instrmt_43_set.insert("Pool_t_1781875932");
      Instrmt_43.add_attribute("CSetMo", "1775672125"); // 2
      Instrmt_43_set.insert("1775672125");
      Instrmt_43.add_attribute("CPPgm", "2"); // 2
      Instrmt_43_set.insert("2");
      Instrmt_43.add_attribute("CPRegT", "CPRegType_t_1515500607"); // 2
      Instrmt_43_set.insert("CPRegType_t_1515500607");
      Instrmt_43.add_attribute("Dated", "DatedDate_t_787307767"); // 2
      Instrmt_43_set.insert("DatedDate_t_787307767");
      Instrmt_43.add_attribute("IntAcrl", "InterestAccrualDate_t_1131783082"); // 2
      Instrmt_43_set.insert("InterestAccrualDate_t_1131783082");
      all_values.push_back(Instrmt_43_set);
      all_compo_names.insert("Instrmt_43_set");

      {
        xml_element AID_46{"AID"};
        multiset<string> AID_46_set;
        AID_46.add_attribute("AltID", "SecurityAltID_t_166612544"); // 3
        AID_46_set.insert("SecurityAltID_t_166612544");
        AID_46.add_attribute("AltIDSrc", "8"); // 3
        AID_46_set.insert("8");
        all_values.push_back(AID_46_set);
        all_compo_names.insert("AID_46_set");

        Instrmt_43.add_element(AID_46);
      }
      {
        xml_element SecXML_46{"SecXML"};
        multiset<string> SecXML_46_set;
        SecXML_46.add_attribute("Schema", "SecurityXMLSchema_t_960078748"); // 3
        SecXML_46_set.insert("SecurityXMLSchema_t_960078748");
        all_values.push_back(SecXML_46_set);
        all_compo_names.insert("SecXML_46_set");

        Instrmt_43.add_element(SecXML_46);
      }
      {
        xml_element Evnt_46{"Evnt"};
        multiset<string> Evnt_46_set;
        Evnt_46.add_attribute("EventTyp", "4"); // 3
        Evnt_46_set.insert("4");
        Evnt_46.add_attribute("Dt", "EventDate_t_1461181206"); // 3
        Evnt_46_set.insert("EventDate_t_1461181206");
        Evnt_46.add_attribute("Tm", "EventTime_t_673785922"); // 3
        Evnt_46_set.insert("EventTime_t_673785922");
        Evnt_46.add_attribute("Px", "9100647.300000"); // 3
        Evnt_46_set.insert("9100647.300000");
        Evnt_46.add_attribute("Txt", "EventText_t_638083685"); // 3
        Evnt_46_set.insert("EventText_t_638083685");
        all_values.push_back(Evnt_46_set);
        all_compo_names.insert("Evnt_46_set");

        Instrmt_43.add_element(Evnt_46);
      }
      {
        xml_element Pty_233{"Pty"};
        multiset<string> Pty_233_set;
        Pty_233.add_attribute("ID", "InstrumentPartyID_t_1629533224"); // 3
        Pty_233_set.insert("InstrumentPartyID_t_1629533224");
        Pty_233.add_attribute("Src", "7"); // 3
        Pty_233_set.insert("7");
        Pty_233.add_attribute("R", "77"); // 3
        Pty_233_set.insert("77");
        all_values.push_back(Pty_233_set);
        all_compo_names.insert("Pty_233_set");

        {
          xml_element Sub_233{"Sub"};
          multiset<string> Sub_233_set;
          Sub_233.add_attribute("ID", "InstrumentPartySubID_t_820126074"); // 4
          Sub_233_set.insert("InstrumentPartySubID_t_820126074");
          Sub_233.add_attribute("Typ", "23"); // 4
          Sub_233_set.insert("23");
          all_values.push_back(Sub_233_set);
          all_compo_names.insert("Sub_233_set");

          Pty_233.add_element(Sub_233);
        }
        Instrmt_43.add_element(Pty_233);
      }
      {
        xml_element CmplxEvnt_43{"CmplxEvnt"};
        multiset<string> CmplxEvnt_43_set;
        CmplxEvnt_43.add_attribute("Typ", "7"); // 3
        CmplxEvnt_43_set.insert("7");
        CmplxEvnt_43.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_310795738"); // 3
        CmplxEvnt_43_set.insert("ComplexOptPayoutAmount_t_310795738");
        CmplxEvnt_43.add_attribute("Px", "15491586.040000"); // 3
        CmplxEvnt_43_set.insert("15491586.040000");
        CmplxEvnt_43.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_43_set.insert("3");
        CmplxEvnt_43.add_attribute("PxBndryPrcsn", "10744477.100000"); // 3
        CmplxEvnt_43_set.insert("10744477.100000");
        CmplxEvnt_43.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_43_set.insert("2");
        CmplxEvnt_43.add_attribute("Cond", "2"); // 3
        CmplxEvnt_43_set.insert("2");
        all_values.push_back(CmplxEvnt_43_set);
        all_compo_names.insert("CmplxEvnt_43_set");

        {
          xml_element EvntDts_43{"EvntDts"};
          multiset<string> EvntDts_43_set;
          EvntDts_43.add_attribute("StartDt", "ComplexEventStartDate_t_1357210923"); // 4
          EvntDts_43_set.insert("ComplexEventStartDate_t_1357210923");
          EvntDts_43.add_attribute("EndDt", "ComplexEventEndDate_t_1124853866"); // 4
          EvntDts_43_set.insert("ComplexEventEndDate_t_1124853866");
          all_values.push_back(EvntDts_43_set);
          all_compo_names.insert("EvntDts_43_set");

          {
            xml_element EvntTms_43{"EvntTms"};
            multiset<string> EvntTms_43_set;
            EvntTms_43.add_attribute("StartTm", "172488506"); // 5
            EvntTms_43_set.insert("172488506");
            EvntTms_43.add_attribute("EndTm", "1707040533"); // 5
            EvntTms_43_set.insert("1707040533");
            all_values.push_back(EvntTms_43_set);
            all_compo_names.insert("EvntTms_43_set");

            EvntDts_43.add_element(EvntTms_43);
          }
          CmplxEvnt_43.add_element(EvntDts_43);
        }
        Instrmt_43.add_element(CmplxEvnt_43);
      }
      Inst_5.add_element(Instrmt_43);
    }
    elt.add_element(Inst_5);
  } // end Inst
  { // Inst
    xml_element Inst_6{"Inst"};
    {
      xml_element Instrmt_44{"Instrmt"};
      multiset<string> Instrmt_44_set;
      Instrmt_44.add_attribute("Sym", "Symbol_t_996762158"); // 2
      Instrmt_44_set.insert("Symbol_t_996762158");
      Instrmt_44.add_attribute("Sfx", "WI"); // 2
      Instrmt_44_set.insert("WI");
      Instrmt_44.add_attribute("ID", "SecurityID_t_1335229010"); // 2
      Instrmt_44_set.insert("SecurityID_t_1335229010");
      Instrmt_44.add_attribute("Src", "J"); // 2
      Instrmt_44_set.insert("J");
      Instrmt_44.add_attribute("Prod", "1"); // 2
      Instrmt_44_set.insert("1");
      Instrmt_44.add_attribute("ProdCmplx", "ProductComplex_t_2122536777"); // 2
      Instrmt_44_set.insert("ProductComplex_t_2122536777");
      Instrmt_44.add_attribute("SecGrp", "SecurityGroup_t_554263056"); // 2
      Instrmt_44_set.insert("SecurityGroup_t_554263056");
      Instrmt_44.add_attribute("CFI", "CFICode_t_1488993942"); // 2
      Instrmt_44_set.insert("CFICode_t_1488993942");
      Instrmt_44.add_attribute("SecTyp", "STN"); // 2
      Instrmt_44_set.insert("STN");
      Instrmt_44.add_attribute("SubTyp", "SecuritySubType_t_1514341804"); // 2
      Instrmt_44_set.insert("SecuritySubType_t_1514341804");
      Instrmt_44.add_attribute("MMY", "859219217"); // 2
      Instrmt_44_set.insert("859219217");
      Instrmt_44.add_attribute("MatDt", "MaturityDate_t_80970914"); // 2
      Instrmt_44_set.insert("MaturityDate_t_80970914");
      Instrmt_44.add_attribute("MatTm", "40644078"); // 2
      Instrmt_44_set.insert("40644078");
      Instrmt_44.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1769283947"); // 2
      Instrmt_44_set.insert("SettleOnOpenFlag_t_1769283947");
      Instrmt_44.add_attribute("AsgnMeth", "719054599"); // 2
      Instrmt_44_set.insert("719054599");
      Instrmt_44.add_attribute("Status", "1"); // 2
      Instrmt_44_set.insert("1");
      Instrmt_44.add_attribute("CpnPmt", "CouponPaymentDate_t_334175812"); // 2
      Instrmt_44_set.insert("CouponPaymentDate_t_334175812");
      Instrmt_44.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_44_set.insert("XR");
      Instrmt_44.add_attribute("Snrty", "SB"); // 2
      Instrmt_44_set.insert("SB");
      Instrmt_44.add_attribute("NotlPctOut", "62756.480000"); // 2
      Instrmt_44_set.insert("62756.480000");
      Instrmt_44.add_attribute("OrigNotlPctOut", "7793769.090000"); // 2
      Instrmt_44_set.insert("7793769.090000");
      Instrmt_44.add_attribute("AttchPnt", "6536154.660000"); // 2
      Instrmt_44_set.insert("6536154.660000");
      Instrmt_44.add_attribute("DetchPnt", "15554342.520000"); // 2
      Instrmt_44_set.insert("15554342.520000");
      Instrmt_44.add_attribute("Issued", "IssueDate_t_1776977706"); // 2
      Instrmt_44_set.insert("IssueDate_t_1776977706");
      Instrmt_44.add_attribute("RepoCollSecTyp", "1728063176"); // 2
      Instrmt_44_set.insert("1728063176");
      Instrmt_44.add_attribute("RepoTrm", "263359224"); // 2
      Instrmt_44_set.insert("263359224");
      Instrmt_44.add_attribute("RepoRt", "2496307.380000"); // 2
      Instrmt_44_set.insert("2496307.380000");
      Instrmt_44.add_attribute("Fctr", "9377904.510000"); // 2
      Instrmt_44_set.insert("9377904.510000");
      Instrmt_44.add_attribute("CrdRtg", "CreditRating_t_1388213090"); // 2
      Instrmt_44_set.insert("CreditRating_t_1388213090");
      Instrmt_44.add_attribute("Rgstry", "InstrRegistry_t_422119244"); // 2
      Instrmt_44_set.insert("InstrRegistry_t_422119244");
      Instrmt_44.add_attribute("IssuCtry", "497347336"); // 2
      Instrmt_44_set.insert("497347336");
      Instrmt_44.add_attribute("StPrv", "StateOrProvinceOfIssue_t_237491601"); // 2
      Instrmt_44_set.insert("StateOrProvinceOfIssue_t_237491601");
      Instrmt_44.add_attribute("Lcl", "LocaleOfIssue_t_229000035"); // 2
      Instrmt_44_set.insert("LocaleOfIssue_t_229000035");
      Instrmt_44.add_attribute("Redeem", "RedemptionDate_t_1832576346"); // 2
      Instrmt_44_set.insert("RedemptionDate_t_1832576346");
      Instrmt_44.add_attribute("StrkPx", "18074552.230000"); // 2
      Instrmt_44_set.insert("18074552.230000");
      Instrmt_44.add_attribute("StrkCcy", "GBP"); // 2
      Instrmt_44_set.insert("GBP");
      Instrmt_44.add_attribute("StrkMult", "2142346.310000"); // 2
      Instrmt_44_set.insert("2142346.310000");
      Instrmt_44.add_attribute("StrkValu", "8928917.270000"); // 2
      Instrmt_44_set.insert("8928917.270000");
      Instrmt_44.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_44_set.insert("1");
      Instrmt_44.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_44_set.insert("1");
      Instrmt_44.add_attribute("StrkPxBndryPrcsn", "17521109.450000"); // 2
      Instrmt_44_set.insert("17521109.450000");
      Instrmt_44.add_attribute("PxDtrmnMeth", "4"); // 2
      Instrmt_44_set.insert("4");
      Instrmt_44.add_attribute("OptAt", "1769220513"); // 2
      Instrmt_44_set.insert("1769220513");
      Instrmt_44.add_attribute("Mult", "13739112.440000"); // 2
      Instrmt_44_set.insert("13739112.440000");
      Instrmt_44.add_attribute("MultTyp", "2"); // 2
      Instrmt_44_set.insert("2");
      Instrmt_44.add_attribute("FlowSchedTyp", "2"); // 2
      Instrmt_44_set.insert("2");
      Instrmt_44.add_attribute("MinPxIncr", "17080870.560000"); // 2
      Instrmt_44_set.insert("17080870.560000");
      Instrmt_44.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_687187961"); // 2
      Instrmt_44_set.insert("MinPriceIncrementAmount_t_687187961");
      Instrmt_44.add_attribute("UOM", "Bbl"); // 2
      Instrmt_44_set.insert("Bbl");
      Instrmt_44.add_attribute("UOMQty", "17143627.040000"); // 2
      Instrmt_44_set.insert("17143627.040000");
      Instrmt_44.add_attribute("PxUOM", "t"); // 2
      Instrmt_44_set.insert("t");
      Instrmt_44.add_attribute("PxUOMQty", "1408657.130000"); // 2
      Instrmt_44_set.insert("1408657.130000");
      Instrmt_44.add_attribute("SettlMeth", "P"); // 2
      Instrmt_44_set.insert("P");
      Instrmt_44.add_attribute("ExerStyle", "1"); // 2
      Instrmt_44_set.insert("1");
      Instrmt_44.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_44_set.insert("2");
      Instrmt_44.add_attribute("OptPayAmt", "OptPayoutAmount_t_1385672533"); // 2
      Instrmt_44_set.insert("OptPayoutAmount_t_1385672533");
      Instrmt_44.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_44_set.insert("PCTPAR");
      Instrmt_44.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_44_set.insert("FUTDA");
      Instrmt_44.add_attribute("ListMeth", "1"); // 2
      Instrmt_44_set.insert("1");
      Instrmt_44.add_attribute("CapPx", "17678089.110000"); // 2
      Instrmt_44_set.insert("17678089.110000");
      Instrmt_44.add_attribute("FlrPx", "11565830.280000"); // 2
      Instrmt_44_set.insert("11565830.280000");
      Instrmt_44.add_attribute("PutCall", "0"); // 2
      Instrmt_44_set.insert("0");
      Instrmt_44.add_attribute("FlexInd", "false"); // 2
      Instrmt_44_set.insert("false");
      Instrmt_44.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_44_set.insert("true");
      Instrmt_44.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_44_set.insert("Mo");
      Instrmt_44.add_attribute("CpnRt", "14007067.320000"); // 2
      Instrmt_44_set.insert("14007067.320000");
      Instrmt_44.add_attribute("Exch", "SecurityExchange_t_501821554"); // 2
      Instrmt_44_set.insert("SecurityExchange_t_501821554");
      Instrmt_44.add_attribute("PosLmt", "738099782"); // 2
      Instrmt_44_set.insert("738099782");
      Instrmt_44.add_attribute("NTPosLmt", "146114812"); // 2
      Instrmt_44_set.insert("146114812");
      Instrmt_44.add_attribute("Issr", "Issuer_t_929240739"); // 2
      Instrmt_44_set.insert("Issuer_t_929240739");
      Instrmt_44.add_attribute("EncIssrLen", "319192569"); // 2
      Instrmt_44_set.insert("319192569");
      Instrmt_44.add_attribute("EncIssr", "EncodedIssuer_t_1898225757"); // 2
      Instrmt_44_set.insert("EncodedIssuer_t_1898225757");
      Instrmt_44.add_attribute("Desc", "SecurityDesc_t_1437630838"); // 2
      Instrmt_44_set.insert("SecurityDesc_t_1437630838");
      Instrmt_44.add_attribute("EncSecDescLen", "2088413082"); // 2
      Instrmt_44_set.insert("2088413082");
      Instrmt_44.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1124653353"); // 2
      Instrmt_44_set.insert("EncodedSecurityDesc_t_1124653353");
      Instrmt_44.add_attribute("Pool", "Pool_t_517591888"); // 2
      Instrmt_44_set.insert("Pool_t_517591888");
      Instrmt_44.add_attribute("CSetMo", "1232843601"); // 2
      Instrmt_44_set.insert("1232843601");
      Instrmt_44.add_attribute("CPPgm", "99"); // 2
      Instrmt_44_set.insert("99");
      Instrmt_44.add_attribute("CPRegT", "CPRegType_t_1204779850"); // 2
      Instrmt_44_set.insert("CPRegType_t_1204779850");
      Instrmt_44.add_attribute("Dated", "DatedDate_t_720093848"); // 2
      Instrmt_44_set.insert("DatedDate_t_720093848");
      Instrmt_44.add_attribute("IntAcrl", "InterestAccrualDate_t_252135818"); // 2
      Instrmt_44_set.insert("InterestAccrualDate_t_252135818");
      all_values.push_back(Instrmt_44_set);
      all_compo_names.insert("Instrmt_44_set");

      {
        xml_element AID_47{"AID"};
        multiset<string> AID_47_set;
        AID_47.add_attribute("AltID", "SecurityAltID_t_523861072"); // 3
        AID_47_set.insert("SecurityAltID_t_523861072");
        AID_47.add_attribute("AltIDSrc", "C"); // 3
        AID_47_set.insert("C");
        all_values.push_back(AID_47_set);
        all_compo_names.insert("AID_47_set");

        Instrmt_44.add_element(AID_47);
      }
      {
        xml_element SecXML_47{"SecXML"};
        multiset<string> SecXML_47_set;
        SecXML_47.add_attribute("Schema", "SecurityXMLSchema_t_1374449127"); // 3
        SecXML_47_set.insert("SecurityXMLSchema_t_1374449127");
        all_values.push_back(SecXML_47_set);
        all_compo_names.insert("SecXML_47_set");

        Instrmt_44.add_element(SecXML_47);
      }
      {
        xml_element Evnt_47{"Evnt"};
        multiset<string> Evnt_47_set;
        Evnt_47.add_attribute("EventTyp", "2"); // 3
        Evnt_47_set.insert("2");
        Evnt_47.add_attribute("Dt", "EventDate_t_582404802"); // 3
        Evnt_47_set.insert("EventDate_t_582404802");
        Evnt_47.add_attribute("Tm", "EventTime_t_612638012"); // 3
        Evnt_47_set.insert("EventTime_t_612638012");
        Evnt_47.add_attribute("Px", "8181260.200000"); // 3
        Evnt_47_set.insert("8181260.200000");
        Evnt_47.add_attribute("Txt", "EventText_t_1241640494"); // 3
        Evnt_47_set.insert("EventText_t_1241640494");
        all_values.push_back(Evnt_47_set);
        all_compo_names.insert("Evnt_47_set");

        Instrmt_44.add_element(Evnt_47);
      }
      {
        xml_element Pty_234{"Pty"};
        multiset<string> Pty_234_set;
        Pty_234.add_attribute("ID", "InstrumentPartyID_t_1239039988"); // 3
        Pty_234_set.insert("InstrumentPartyID_t_1239039988");
        Pty_234.add_attribute("Src", "D"); // 3
        Pty_234_set.insert("D");
        Pty_234.add_attribute("R", "45"); // 3
        Pty_234_set.insert("45");
        all_values.push_back(Pty_234_set);
        all_compo_names.insert("Pty_234_set");

        {
          xml_element Sub_234{"Sub"};
          multiset<string> Sub_234_set;
          Sub_234.add_attribute("ID", "InstrumentPartySubID_t_2102933564"); // 4
          Sub_234_set.insert("InstrumentPartySubID_t_2102933564");
          Sub_234.add_attribute("Typ", "25"); // 4
          Sub_234_set.insert("25");
          all_values.push_back(Sub_234_set);
          all_compo_names.insert("Sub_234_set");

          Pty_234.add_element(Sub_234);
        }
        Instrmt_44.add_element(Pty_234);
      }
      {
        xml_element CmplxEvnt_44{"CmplxEvnt"};
        multiset<string> CmplxEvnt_44_set;
        CmplxEvnt_44.add_attribute("Typ", "3"); // 3
        CmplxEvnt_44_set.insert("3");
        CmplxEvnt_44.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_479315068"); // 3
        CmplxEvnt_44_set.insert("ComplexOptPayoutAmount_t_479315068");
        CmplxEvnt_44.add_attribute("Px", "16884833.150000"); // 3
        CmplxEvnt_44_set.insert("16884833.150000");
        CmplxEvnt_44.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_44_set.insert("1");
        CmplxEvnt_44.add_attribute("PxBndryPrcsn", "12174148.500000"); // 3
        CmplxEvnt_44_set.insert("12174148.500000");
        CmplxEvnt_44.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_44_set.insert("1");
        CmplxEvnt_44.add_attribute("Cond", "1"); // 3
        CmplxEvnt_44_set.insert("1");
        all_values.push_back(CmplxEvnt_44_set);
        all_compo_names.insert("CmplxEvnt_44_set");

        {
          xml_element EvntDts_44{"EvntDts"};
          multiset<string> EvntDts_44_set;
          EvntDts_44.add_attribute("StartDt", "ComplexEventStartDate_t_1536607420"); // 4
          EvntDts_44_set.insert("ComplexEventStartDate_t_1536607420");
          EvntDts_44.add_attribute("EndDt", "ComplexEventEndDate_t_1585340236"); // 4
          EvntDts_44_set.insert("ComplexEventEndDate_t_1585340236");
          all_values.push_back(EvntDts_44_set);
          all_compo_names.insert("EvntDts_44_set");

          {
            xml_element EvntTms_44{"EvntTms"};
            multiset<string> EvntTms_44_set;
            EvntTms_44.add_attribute("StartTm", "1813625084"); // 5
            EvntTms_44_set.insert("1813625084");
            EvntTms_44.add_attribute("EndTm", "1477536854"); // 5
            EvntTms_44_set.insert("1477536854");
            all_values.push_back(EvntTms_44_set);
            all_compo_names.insert("EvntTms_44_set");

            EvntDts_44.add_element(EvntTms_44);
          }
          CmplxEvnt_44.add_element(EvntDts_44);
        }
        Instrmt_44.add_element(CmplxEvnt_44);
      }
      Inst_6.add_element(Instrmt_44);
    }
    elt.add_element(Inst_6);
  } // end Inst
  { // Leg
    xml_element Leg_55{"Leg"};
    multiset<string> Leg_55_set;
    Leg_55.add_attribute("Sym", "LegSymbol_t_183733325"); // 1
    Leg_55_set.insert("LegSymbol_t_183733325");
    Leg_55.add_attribute("Sfx", "CD"); // 1
    Leg_55_set.insert("CD");
    Leg_55.add_attribute("ID", "LegSecurityID_t_1247766704"); // 1
    Leg_55_set.insert("LegSecurityID_t_1247766704");
    Leg_55.add_attribute("Src", "6"); // 1
    Leg_55_set.insert("6");
    Leg_55.add_attribute("Prod", "9"); // 1
    Leg_55_set.insert("9");
    Leg_55.add_attribute("CFI", "LegCFICode_t_1499902522"); // 1
    Leg_55_set.insert("LegCFICode_t_1499902522");
    Leg_55.add_attribute("SecTyp", "ONITE"); // 1
    Leg_55_set.insert("ONITE");
    Leg_55.add_attribute("SecSubTyp", "LegSecuritySubType_t_2143950218"); // 1
    Leg_55_set.insert("LegSecuritySubType_t_2143950218");
    Leg_55.add_attribute("MMY", "726868002"); // 1
    Leg_55_set.insert("726868002");
    Leg_55.add_attribute("Mat", "LegMaturityDate_t_1384810601"); // 1
    Leg_55_set.insert("LegMaturityDate_t_1384810601");
    Leg_55.add_attribute("MatTm", "578871372"); // 1
    Leg_55_set.insert("578871372");
    Leg_55.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1339506014"); // 1
    Leg_55_set.insert("LegCouponPaymentDate_t_1339506014");
    Leg_55.add_attribute("Issued", "LegIssueDate_t_55452973"); // 1
    Leg_55_set.insert("LegIssueDate_t_55452973");
    Leg_55.add_attribute("RepoCollSecTyp", "1820511867"); // 1
    Leg_55_set.insert("1820511867");
    Leg_55.add_attribute("RepoTrm", "431062354"); // 1
    Leg_55_set.insert("431062354");
    Leg_55.add_attribute("RepoRt", "4939042.570000"); // 1
    Leg_55_set.insert("4939042.570000");
    Leg_55.add_attribute("Fctr", "20712517.410000"); // 1
    Leg_55_set.insert("20712517.410000");
    Leg_55.add_attribute("CrdRtg", "LegCreditRating_t_386512271"); // 1
    Leg_55_set.insert("LegCreditRating_t_386512271");
    Leg_55.add_attribute("Rgstry", "LegInstrRegistry_t_781680840"); // 1
    Leg_55_set.insert("LegInstrRegistry_t_781680840");
    Leg_55.add_attribute("Ctry", "1016183694"); // 1
    Leg_55_set.insert("1016183694");
    Leg_55.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_865827339"); // 1
    Leg_55_set.insert("LegStateOrProvinceOfIssue_t_865827339");
    Leg_55.add_attribute("Lcl", "LegLocaleOfIssue_t_322680508"); // 1
    Leg_55_set.insert("LegLocaleOfIssue_t_322680508");
    Leg_55.add_attribute("Redeem", "LegRedemptionDate_t_462937202"); // 1
    Leg_55_set.insert("LegRedemptionDate_t_462937202");
    Leg_55.add_attribute("Strk", "20832421.890000"); // 1
    Leg_55_set.insert("20832421.890000");
    Leg_55.add_attribute("StrkCcy", "USD"); // 1
    Leg_55_set.insert("USD");
    Leg_55.add_attribute("OptA", "1472365961"); // 1
    Leg_55_set.insert("1472365961");
    Leg_55.add_attribute("Cmult", "15951352.240000"); // 1
    Leg_55_set.insert("15951352.240000");
    Leg_55.add_attribute("MultTyp", "1"); // 1
    Leg_55_set.insert("1");
    Leg_55.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_55_set.insert("3");
    Leg_55.add_attribute("UOM", "Gal"); // 1
    Leg_55_set.insert("Gal");
    Leg_55.add_attribute("UOMQty", "6888062.100000"); // 1
    Leg_55_set.insert("6888062.100000");
    Leg_55.add_attribute("PxUOM", "Bu"); // 1
    Leg_55_set.insert("Bu");
    Leg_55.add_attribute("PxUOMQty", "12579282.220000"); // 1
    Leg_55_set.insert("12579282.220000");
    Leg_55.add_attribute("TmUnit", "Min"); // 1
    Leg_55_set.insert("Min");
    Leg_55.add_attribute("ExerStyle", "2"); // 1
    Leg_55_set.insert("2");
    Leg_55.add_attribute("CpnRt", "6103470.960000"); // 1
    Leg_55_set.insert("6103470.960000");
    Leg_55.add_attribute("Exch", "LegSecurityExchange_t_1842209984"); // 1
    Leg_55_set.insert("LegSecurityExchange_t_1842209984");
    Leg_55.add_attribute("Issr", "LegIssuer_t_497289554"); // 1
    Leg_55_set.insert("LegIssuer_t_497289554");
    Leg_55.add_attribute("EncLegIssrLen", "1337215098"); // 1
    Leg_55_set.insert("1337215098");
    Leg_55.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1079536937"); // 1
    Leg_55_set.insert("EncodedLegIssuer_t_1079536937");
    Leg_55.add_attribute("Desc", "LegSecurityDesc_t_1076160927"); // 1
    Leg_55_set.insert("LegSecurityDesc_t_1076160927");
    Leg_55.add_attribute("EncLegSecDescLen", "529237465"); // 1
    Leg_55_set.insert("529237465");
    Leg_55.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1134989911"); // 1
    Leg_55_set.insert("EncodedLegSecurityDesc_t_1134989911");
    Leg_55.add_attribute("RatioQty", "7491891.460000"); // 1
    Leg_55_set.insert("7491891.460000");
    Leg_55.add_attribute("Side", "C"); // 1
    Leg_55_set.insert("C");
    Leg_55.add_attribute("Ccy", "CAN"); // 1
    Leg_55_set.insert("CAN");
    Leg_55.add_attribute("Pool", "LegPool_t_1346812090"); // 1
    Leg_55_set.insert("LegPool_t_1346812090");
    Leg_55.add_attribute("Dated", "LegDatedDate_t_263091361"); // 1
    Leg_55_set.insert("LegDatedDate_t_263091361");
    Leg_55.add_attribute("CSetMo", "1689140934"); // 1
    Leg_55_set.insert("1689140934");
    Leg_55.add_attribute("IntAcrl", "LegInterestAccrualDate_t_65155781"); // 1
    Leg_55_set.insert("LegInterestAccrualDate_t_65155781");
    Leg_55.add_attribute("PutCall", "585771869"); // 1
    Leg_55_set.insert("585771869");
    Leg_55.add_attribute("LegOptionRatio", "45944.880000"); // 1
    Leg_55_set.insert("45944.880000");
    Leg_55.add_attribute("Px", "9143.230000"); // 1
    Leg_55_set.insert("9143.230000");
    all_values.push_back(Leg_55_set);
    all_compo_names.insert("Leg_55_set");

    {
      xml_element LegAID_55{"LegAID"};
      multiset<string> LegAID_55_set;
      LegAID_55.add_attribute("SecAltID", "LegSecurityAltID_t_595566856"); // 2
      LegAID_55_set.insert("LegSecurityAltID_t_595566856");
      LegAID_55.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_55_set.insert("1");
      all_values.push_back(LegAID_55_set);
      all_compo_names.insert("LegAID_55_set");

      Leg_55.add_element(LegAID_55);
    }
    elt.add_element(Leg_55);
  } // end Leg
  { // Undly
    xml_element Undly_57{"Undly"};
    multiset<string> Undly_57_set;
    Undly_57.add_attribute("Sym", "UnderlyingSymbol_t_43218432"); // 1
    Undly_57_set.insert("UnderlyingSymbol_t_43218432");
    Undly_57.add_attribute("Sfx", "WI"); // 1
    Undly_57_set.insert("WI");
    Undly_57.add_attribute("ID", "UnderlyingSecurityID_t_128215804"); // 1
    Undly_57_set.insert("UnderlyingSecurityID_t_128215804");
    Undly_57.add_attribute("Src", "9"); // 1
    Undly_57_set.insert("9");
    Undly_57.add_attribute("Prod", "9"); // 1
    Undly_57_set.insert("9");
    Undly_57.add_attribute("CFI", "UnderlyingCFICode_t_1493531780"); // 1
    Undly_57_set.insert("UnderlyingCFICode_t_1493531780");
    Undly_57.add_attribute("SecTyp", "COFO"); // 1
    Undly_57_set.insert("COFO");
    Undly_57.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1967240768"); // 1
    Undly_57_set.insert("UnderlyingSecuritySubType_t_1967240768");
    Undly_57.add_attribute("MMY", "1994354765"); // 1
    Undly_57_set.insert("1994354765");
    Undly_57.add_attribute("Mat", "UnderlyingMaturityDate_t_1921655269"); // 1
    Undly_57_set.insert("UnderlyingMaturityDate_t_1921655269");
    Undly_57.add_attribute("MatTm", "1661967105"); // 1
    Undly_57_set.insert("1661967105");
    Undly_57.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_344160671"); // 1
    Undly_57_set.insert("UnderlyingCouponPaymentDate_t_344160671");
    Undly_57.add_attribute("RestrctTyp", "XR"); // 1
    Undly_57_set.insert("XR");
    Undly_57.add_attribute("Snrty", "SD"); // 1
    Undly_57_set.insert("SD");
    Undly_57.add_attribute("NotlPctOut", "14203215.980000"); // 1
    Undly_57_set.insert("14203215.980000");
    Undly_57.add_attribute("OrigNotlPctOut", "16406241.840000"); // 1
    Undly_57_set.insert("16406241.840000");
    Undly_57.add_attribute("AttchPnt", "17290103.050000"); // 1
    Undly_57_set.insert("17290103.050000");
    Undly_57.add_attribute("DetchPnt", "220270.960000"); // 1
    Undly_57_set.insert("220270.960000");
    Undly_57.add_attribute("Issued", "UnderlyingIssueDate_t_453440356"); // 1
    Undly_57_set.insert("UnderlyingIssueDate_t_453440356");
    Undly_57.add_attribute("RepoCollSecTyp", "1210420826"); // 1
    Undly_57_set.insert("1210420826");
    Undly_57.add_attribute("RepoTrm", "694984336"); // 1
    Undly_57_set.insert("694984336");
    Undly_57.add_attribute("RepoRt", "18002524.460000"); // 1
    Undly_57_set.insert("18002524.460000");
    Undly_57.add_attribute("Fctr", "14735121.870000"); // 1
    Undly_57_set.insert("14735121.870000");
    Undly_57.add_attribute("CrdRtg", "UnderlyingCreditRating_t_236641622"); // 1
    Undly_57_set.insert("UnderlyingCreditRating_t_236641622");
    Undly_57.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1865408228"); // 1
    Undly_57_set.insert("UnderlyingInstrRegistry_t_1865408228");
    Undly_57.add_attribute("Ctry", "2059284056"); // 1
    Undly_57_set.insert("2059284056");
    Undly_57.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_241236110"); // 1
    Undly_57_set.insert("UnderlyingStateOrProvinceOfIssue_t_241236110");
    Undly_57.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1866322551"); // 1
    Undly_57_set.insert("UnderlyingLocaleOfIssue_t_1866322551");
    Undly_57.add_attribute("Redeem", "UnderlyingRedemptionDate_t_507367264"); // 1
    Undly_57_set.insert("UnderlyingRedemptionDate_t_507367264");
    Undly_57.add_attribute("StrkPx", "10847620.460000"); // 1
    Undly_57_set.insert("10847620.460000");
    Undly_57.add_attribute("StrkCcy", "CAN"); // 1
    Undly_57_set.insert("CAN");
    Undly_57.add_attribute("OptA", "285877220"); // 1
    Undly_57_set.insert("285877220");
    Undly_57.add_attribute("Mult", "13203349.920000"); // 1
    Undly_57_set.insert("13203349.920000");
    Undly_57.add_attribute("MultTyp", "1"); // 1
    Undly_57_set.insert("1");
    Undly_57.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_57_set.insert("3");
    Undly_57.add_attribute("UOM", "t"); // 1
    Undly_57_set.insert("t");
    Undly_57.add_attribute("UOMQty", "19152738.200000"); // 1
    Undly_57_set.insert("19152738.200000");
    Undly_57.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_57_set.insert("MMbbl");
    Undly_57.add_attribute("PxUOMQty", "5132542.410000"); // 1
    Undly_57_set.insert("5132542.410000");
    Undly_57.add_attribute("TmUnit", "Mo"); // 1
    Undly_57_set.insert("Mo");
    Undly_57.add_attribute("ExerStyle", "2"); // 1
    Undly_57_set.insert("2");
    Undly_57.add_attribute("CpnRt", "8574149.130000"); // 1
    Undly_57_set.insert("8574149.130000");
    Undly_57.add_attribute("Exch", "UnderlyingSecurityExchange_t_653348512"); // 1
    Undly_57_set.insert("UnderlyingSecurityExchange_t_653348512");
    Undly_57.add_attribute("Issr", "UnderlyingIssuer_t_104059575"); // 1
    Undly_57_set.insert("UnderlyingIssuer_t_104059575");
    Undly_57.add_attribute("EncUndIssrLen", "130252863"); // 1
    Undly_57_set.insert("130252863");
    Undly_57.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_146489049"); // 1
    Undly_57_set.insert("EncodedUnderlyingIssuer_t_146489049");
    Undly_57.add_attribute("Desc", "UnderlyingSecurityDesc_t_1833069881"); // 1
    Undly_57_set.insert("UnderlyingSecurityDesc_t_1833069881");
    Undly_57.add_attribute("EncUndSecDescLen", "152279960"); // 1
    Undly_57_set.insert("152279960");
    Undly_57.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_599929405"); // 1
    Undly_57_set.insert("EncodedUnderlyingSecurityDesc_t_599929405");
    Undly_57.add_attribute("CPPgm", "UnderlyingCPProgram_t_896007059"); // 1
    Undly_57_set.insert("UnderlyingCPProgram_t_896007059");
    Undly_57.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_847264296"); // 1
    Undly_57_set.insert("UnderlyingCPRegType_t_847264296");
    Undly_57.add_attribute("AllocPct", "2526982.030000"); // 1
    Undly_57_set.insert("2526982.030000");
    Undly_57.add_attribute("Ccy", "GBP"); // 1
    Undly_57_set.insert("GBP");
    Undly_57.add_attribute("Qty", "21181064.310000"); // 1
    Undly_57_set.insert("21181064.310000");
    Undly_57.add_attribute("SettlTyp", "2"); // 1
    Undly_57_set.insert("2");
    Undly_57.add_attribute("CashAmt", "UnderlyingCashAmount_t_1325142028"); // 1
    Undly_57_set.insert("UnderlyingCashAmount_t_1325142028");
    Undly_57.add_attribute("CashTyp", "FIXED"); // 1
    Undly_57_set.insert("FIXED");
    Undly_57.add_attribute("Px", "6412032.700000"); // 1
    Undly_57_set.insert("6412032.700000");
    Undly_57.add_attribute("DirtPx", "2624204.260000"); // 1
    Undly_57_set.insert("2624204.260000");
    Undly_57.add_attribute("EndPx", "8815808.740000"); // 1
    Undly_57_set.insert("8815808.740000");
    Undly_57.add_attribute("StartVal", "UnderlyingStartValue_t_1191788967"); // 1
    Undly_57_set.insert("UnderlyingStartValue_t_1191788967");
    Undly_57.add_attribute("CurVal", "UnderlyingCurrentValue_t_548297646"); // 1
    Undly_57_set.insert("UnderlyingCurrentValue_t_548297646");
    Undly_57.add_attribute("EndVal", "UnderlyingEndValue_t_54432218"); // 1
    Undly_57_set.insert("UnderlyingEndValue_t_54432218");
    Undly_57.add_attribute("AdjQty", "17957546.150000"); // 1
    Undly_57_set.insert("17957546.150000");
    Undly_57.add_attribute("FxRate", "7240962.500000"); // 1
    Undly_57_set.insert("7240962.500000");
    Undly_57.add_attribute("FxRateCalc", "M"); // 1
    Undly_57_set.insert("M");
    Undly_57.add_attribute("CapValu", "UnderlyingCapValue_t_1563544787"); // 1
    Undly_57_set.insert("UnderlyingCapValue_t_1563544787");
    Undly_57.add_attribute("SetMeth", "UnderlyingSettlMethod_t_719651974"); // 1
    Undly_57_set.insert("UnderlyingSettlMethod_t_719651974");
    Undly_57.add_attribute("PutCall", "1234069584"); // 1
    Undly_57_set.insert("1234069584");
    all_values.push_back(Undly_57_set);
    all_compo_names.insert("Undly_57_set");

    {
      xml_element UndAID_57{"UndAID"};
      multiset<string> UndAID_57_set;
      UndAID_57.add_attribute("AltID", "UnderlyingSecurityAltID_t_1105506580"); // 2
      UndAID_57_set.insert("UnderlyingSecurityAltID_t_1105506580");
      UndAID_57.add_attribute("AltIDSrc", "2"); // 2
      UndAID_57_set.insert("2");
      all_values.push_back(UndAID_57_set);
      all_compo_names.insert("UndAID_57_set");

      Undly_57.add_element(UndAID_57);
    }
    {
      xml_element Stip_94{"Stip"};
      multiset<string> Stip_94_set;
      Stip_94.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_94_set.insert("ISSUESIZE");
      Stip_94.add_attribute("Val", "UnderlyingStipValue_t_1758855092"); // 2
      Stip_94_set.insert("UnderlyingStipValue_t_1758855092");
      all_values.push_back(Stip_94_set);
      all_compo_names.insert("Stip_94_set");

      Undly_57.add_element(Stip_94);
    }
    {
      xml_element Pty_235{"Pty"};
      multiset<string> Pty_235_set;
      Pty_235.add_attribute("ID", "UnderlyingInstrumentPartyID_t_333750730"); // 2
      Pty_235_set.insert("UnderlyingInstrumentPartyID_t_333750730");
      Pty_235.add_attribute("Src", "5"); // 2
      Pty_235_set.insert("5");
      Pty_235.add_attribute("R", "37"); // 2
      Pty_235_set.insert("37");
      all_values.push_back(Pty_235_set);
      all_compo_names.insert("Pty_235_set");

      {
        xml_element Sub_235{"Sub"};
        multiset<string> Sub_235_set;
        Sub_235.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_19336963"); // 3
        Sub_235_set.insert("UnderlyingInstrumentPartySubID_t_19336963");
        Sub_235.add_attribute("Typ", "8"); // 3
        Sub_235_set.insert("8");
        all_values.push_back(Sub_235_set);
        all_compo_names.insert("Sub_235_set");

        Pty_235.add_element(Sub_235);
      }
      Undly_57.add_element(Pty_235);
    }
    elt.add_element(Undly_57);
  } // end Undly
  { // TxtLn
    xml_element TxtLn_1{"TxtLn"};
    multiset<string> TxtLn_1_set;
    TxtLn_1.add_attribute("Txt", "Text_t_915344022"); // 1
    TxtLn_1_set.insert("Text_t_915344022");
    TxtLn_1.add_attribute("EncTxtLen", "1073797968"); // 1
    TxtLn_1_set.insert("1073797968");
    TxtLn_1.add_attribute("EncTxt", "EncodedText_t_610488102"); // 1
    TxtLn_1_set.insert("EncodedText_t_610488102");
    all_values.push_back(TxtLn_1_set);
    all_compo_names.insert("TxtLn_1_set");

    elt.add_element(TxtLn_1);
  } // end TxtLn
  { // TxtLn
    xml_element TxtLn_2{"TxtLn"};
    multiset<string> TxtLn_2_set;
    TxtLn_2.add_attribute("Txt", "Text_t_1137379620"); // 1
    TxtLn_2_set.insert("Text_t_1137379620");
    TxtLn_2.add_attribute("EncTxtLen", "10220238"); // 1
    TxtLn_2_set.insert("10220238");
    TxtLn_2.add_attribute("EncTxt", "EncodedText_t_581110885"); // 1
    TxtLn_2_set.insert("EncodedText_t_581110885");
    all_values.push_back(TxtLn_2_set);
    all_compo_names.insert("TxtLn_2_set");

    elt.add_element(TxtLn_2);
  } // end TxtLn
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
