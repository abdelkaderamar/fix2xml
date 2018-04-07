#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinitionUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinitionUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionUpdateReport_message_t_0;
  elt.add_attribute("RptID", "1592119942"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("1592119942");
  elt.add_attribute("ReqID", "SecurityReqID_t_175290197"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("SecurityReqID_t_175290197");
  elt.add_attribute("RspID", "SecurityResponseID_t_428425076"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("SecurityResponseID_t_428425076");
  elt.add_attribute("RspTyp", "6"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("6");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1684341917"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("ClearingBusinessDate_t_1684341917");
  elt.add_attribute("UpdActn", "D"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("D");
  elt.add_attribute("CorpActn", "M"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("M");
  elt.add_attribute("Ccy", "CAN"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("CAN");
  elt.add_attribute("Txt", "Text_t_2060720501"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("Text_t_2060720501");
  elt.add_attribute("EncTxtLen", "810234041"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("810234041");
  elt.add_attribute("EncTxt", "EncodedText_t_1691385205"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("EncodedText_t_1691385205");
  elt.add_attribute("TxnTm", "TransactTime_t_1989153148"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("TransactTime_t_1989153148");
  all_values.push_back(SecurityDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("SecurityDefinitionUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_82{"Hdr"};
    multiset<string> Hdr_82_set;
    Hdr_82.add_attribute("SeqNum", "438494567"); // 1
    Hdr_82_set.insert("438494567");
    Hdr_82.add_attribute("SID", "SenderCompID_t_1016565636"); // 1
    Hdr_82_set.insert("SenderCompID_t_1016565636");
    Hdr_82.add_attribute("TID", "TargetCompID_t_89367271"); // 1
    Hdr_82_set.insert("TargetCompID_t_89367271");
    Hdr_82.add_attribute("OBID", "OnBehalfOfCompID_t_313000522"); // 1
    Hdr_82_set.insert("OnBehalfOfCompID_t_313000522");
    Hdr_82.add_attribute("D2ID", "DeliverToCompID_t_2096028713"); // 1
    Hdr_82_set.insert("DeliverToCompID_t_2096028713");
    Hdr_82.add_attribute("SSub", "SenderSubID_t_987641944"); // 1
    Hdr_82_set.insert("SenderSubID_t_987641944");
    Hdr_82.add_attribute("SLoc", "SenderLocationID_t_489452528"); // 1
    Hdr_82_set.insert("SenderLocationID_t_489452528");
    Hdr_82.add_attribute("TSub", "TargetSubID_t_651250200"); // 1
    Hdr_82_set.insert("TargetSubID_t_651250200");
    Hdr_82.add_attribute("TLoc", "TargetLocationID_t_1284300680"); // 1
    Hdr_82_set.insert("TargetLocationID_t_1284300680");
    Hdr_82.add_attribute("OBSub", "OnBehalfOfSubID_t_668732927"); // 1
    Hdr_82_set.insert("OnBehalfOfSubID_t_668732927");
    Hdr_82.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1487966466"); // 1
    Hdr_82_set.insert("OnBehalfOfLocationID_t_1487966466");
    Hdr_82.add_attribute("D2Sub", "DeliverToSubID_t_1270918087"); // 1
    Hdr_82_set.insert("DeliverToSubID_t_1270918087");
    Hdr_82.add_attribute("D2Loc", "DeliverToLocationID_t_51309113"); // 1
    Hdr_82_set.insert("DeliverToLocationID_t_51309113");
    Hdr_82.add_attribute("PosDup", "N"); // 1
    Hdr_82_set.insert("N");
    Hdr_82.add_attribute("PosRsnd", "N"); // 1
    Hdr_82_set.insert("N");
    Hdr_82.add_attribute("Snt", "SendingTime_t_1210582585"); // 1
    Hdr_82_set.insert("SendingTime_t_1210582585");
    Hdr_82.add_attribute("OrigSnt", "OrigSendingTime_t_18883171"); // 1
    Hdr_82_set.insert("OrigSendingTime_t_18883171");
    Hdr_82.add_attribute("MsgEncd", "MessageEncoding_t_2136701178"); // 1
    Hdr_82_set.insert("MessageEncoding_t_2136701178");
    all_values.push_back(Hdr_82_set);
    all_compo_names.insert("Hdr_82_set");

    {
      xml_element Hop_82{"Hop"};
      multiset<string> Hop_82_set;
      Hop_82.add_attribute("ID", "HopCompID_t_655218880"); // 2
      Hop_82_set.insert("HopCompID_t_655218880");
      Hop_82.add_attribute("Ref", "194173368"); // 2
      Hop_82_set.insert("194173368");
      Hop_82.add_attribute("Snt", "HopSendingTime_t_417642606"); // 2
      Hop_82_set.insert("HopSendingTime_t_417642606");
      all_values.push_back(Hop_82_set);
      all_compo_names.insert("Hop_82_set");

      Hdr_82.add_element(Hop_82);
    }
    elt.add_element(Hdr_82);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_13{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_13_set;
    ApplSeqCtrl_13.add_attribute("ApplID", "ApplID_t_1418056287"); // 1
    ApplSeqCtrl_13_set.insert("ApplID_t_1418056287");
    ApplSeqCtrl_13.add_attribute("ApplSeqNum", "1878515286"); // 1
    ApplSeqCtrl_13_set.insert("1878515286");
    ApplSeqCtrl_13.add_attribute("ApplLastSeqNum", "1745564662"); // 1
    ApplSeqCtrl_13_set.insert("1745564662");
    ApplSeqCtrl_13.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_13_set.insert("false");
    all_values.push_back(ApplSeqCtrl_13_set);
    all_compo_names.insert("ApplSeqCtrl_13_set");

    elt.add_element(ApplSeqCtrl_13);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_75{"Instrmt"};
    multiset<string> Instrmt_75_set;
    Instrmt_75.add_attribute("Sym", "Symbol_t_1968313821"); // 1
    Instrmt_75_set.insert("Symbol_t_1968313821");
    Instrmt_75.add_attribute("Sfx", "CD"); // 1
    Instrmt_75_set.insert("CD");
    Instrmt_75.add_attribute("ID", "SecurityID_t_304195808"); // 1
    Instrmt_75_set.insert("SecurityID_t_304195808");
    Instrmt_75.add_attribute("Src", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("Prod", "9"); // 1
    Instrmt_75_set.insert("9");
    Instrmt_75.add_attribute("ProdCmplx", "ProductComplex_t_145865309"); // 1
    Instrmt_75_set.insert("ProductComplex_t_145865309");
    Instrmt_75.add_attribute("SecGrp", "SecurityGroup_t_1069558782"); // 1
    Instrmt_75_set.insert("SecurityGroup_t_1069558782");
    Instrmt_75.add_attribute("CFI", "CFICode_t_414171481"); // 1
    Instrmt_75_set.insert("CFICode_t_414171481");
    Instrmt_75.add_attribute("SecTyp", "PFAND"); // 1
    Instrmt_75_set.insert("PFAND");
    Instrmt_75.add_attribute("SubTyp", "SecuritySubType_t_1382559304"); // 1
    Instrmt_75_set.insert("SecuritySubType_t_1382559304");
    Instrmt_75.add_attribute("MMY", "362716546"); // 1
    Instrmt_75_set.insert("362716546");
    Instrmt_75.add_attribute("MatDt", "MaturityDate_t_1222874525"); // 1
    Instrmt_75_set.insert("MaturityDate_t_1222874525");
    Instrmt_75.add_attribute("MatTm", "1872011833"); // 1
    Instrmt_75_set.insert("1872011833");
    Instrmt_75.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1013966746"); // 1
    Instrmt_75_set.insert("SettleOnOpenFlag_t_1013966746");
    Instrmt_75.add_attribute("AsgnMeth", "359691557"); // 1
    Instrmt_75_set.insert("359691557");
    Instrmt_75.add_attribute("Status", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("CpnPmt", "CouponPaymentDate_t_354449564"); // 1
    Instrmt_75_set.insert("CouponPaymentDate_t_354449564");
    Instrmt_75.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_75_set.insert("MR");
    Instrmt_75.add_attribute("Snrty", "SD"); // 1
    Instrmt_75_set.insert("SD");
    Instrmt_75.add_attribute("NotlPctOut", "8753601.120000"); // 1
    Instrmt_75_set.insert("8753601.120000");
    Instrmt_75.add_attribute("OrigNotlPctOut", "1803557.330000"); // 1
    Instrmt_75_set.insert("1803557.330000");
    Instrmt_75.add_attribute("AttchPnt", "16551528.110000"); // 1
    Instrmt_75_set.insert("16551528.110000");
    Instrmt_75.add_attribute("DetchPnt", "8942432.830000"); // 1
    Instrmt_75_set.insert("8942432.830000");
    Instrmt_75.add_attribute("Issued", "IssueDate_t_169573263"); // 1
    Instrmt_75_set.insert("IssueDate_t_169573263");
    Instrmt_75.add_attribute("RepoCollSecTyp", "162888043"); // 1
    Instrmt_75_set.insert("162888043");
    Instrmt_75.add_attribute("RepoTrm", "1088416652"); // 1
    Instrmt_75_set.insert("1088416652");
    Instrmt_75.add_attribute("RepoRt", "5872158.690000"); // 1
    Instrmt_75_set.insert("5872158.690000");
    Instrmt_75.add_attribute("Fctr", "15809443.300000"); // 1
    Instrmt_75_set.insert("15809443.300000");
    Instrmt_75.add_attribute("CrdRtg", "CreditRating_t_819448290"); // 1
    Instrmt_75_set.insert("CreditRating_t_819448290");
    Instrmt_75.add_attribute("Rgstry", "InstrRegistry_t_185296883"); // 1
    Instrmt_75_set.insert("InstrRegistry_t_185296883");
    Instrmt_75.add_attribute("IssuCtry", "1971903286"); // 1
    Instrmt_75_set.insert("1971903286");
    Instrmt_75.add_attribute("StPrv", "StateOrProvinceOfIssue_t_640278463"); // 1
    Instrmt_75_set.insert("StateOrProvinceOfIssue_t_640278463");
    Instrmt_75.add_attribute("Lcl", "LocaleOfIssue_t_39001171"); // 1
    Instrmt_75_set.insert("LocaleOfIssue_t_39001171");
    Instrmt_75.add_attribute("Redeem", "RedemptionDate_t_128615446"); // 1
    Instrmt_75_set.insert("RedemptionDate_t_128615446");
    Instrmt_75.add_attribute("StrkPx", "12713426.780000"); // 1
    Instrmt_75_set.insert("12713426.780000");
    Instrmt_75.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_75_set.insert("CHF");
    Instrmt_75.add_attribute("StrkMult", "1934178.120000"); // 1
    Instrmt_75_set.insert("1934178.120000");
    Instrmt_75.add_attribute("StrkValu", "19982621.450000"); // 1
    Instrmt_75_set.insert("19982621.450000");
    Instrmt_75.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("StrkPxBndryPrcsn", "2134950.430000"); // 1
    Instrmt_75_set.insert("2134950.430000");
    Instrmt_75.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("OptAt", "1300505301"); // 1
    Instrmt_75_set.insert("1300505301");
    Instrmt_75.add_attribute("Mult", "12274617.900000"); // 1
    Instrmt_75_set.insert("12274617.900000");
    Instrmt_75.add_attribute("MultTyp", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_75_set.insert("4");
    Instrmt_75.add_attribute("MinPxIncr", "15819113.540000"); // 1
    Instrmt_75_set.insert("15819113.540000");
    Instrmt_75.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1575405415"); // 1
    Instrmt_75_set.insert("MinPriceIncrementAmount_t_1575405415");
    Instrmt_75.add_attribute("UOM", "Bcf"); // 1
    Instrmt_75_set.insert("Bcf");
    Instrmt_75.add_attribute("UOMQty", "3097878.190000"); // 1
    Instrmt_75_set.insert("3097878.190000");
    Instrmt_75.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_75_set.insert("Bu");
    Instrmt_75.add_attribute("PxUOMQty", "16460058.020000"); // 1
    Instrmt_75_set.insert("16460058.020000");
    Instrmt_75.add_attribute("SettlMeth", "C"); // 1
    Instrmt_75_set.insert("C");
    Instrmt_75.add_attribute("ExerStyle", "0"); // 1
    Instrmt_75_set.insert("0");
    Instrmt_75.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("OptPayAmt", "OptPayoutAmount_t_144964106"); // 1
    Instrmt_75_set.insert("OptPayoutAmount_t_144964106");
    Instrmt_75.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_75_set.insert("STD");
    Instrmt_75.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_75_set.insert("CDS");
    Instrmt_75.add_attribute("ListMeth", "0"); // 1
    Instrmt_75_set.insert("0");
    Instrmt_75.add_attribute("CapPx", "5503635.160000"); // 1
    Instrmt_75_set.insert("5503635.160000");
    Instrmt_75.add_attribute("FlrPx", "10667741.660000"); // 1
    Instrmt_75_set.insert("10667741.660000");
    Instrmt_75.add_attribute("PutCall", "0"); // 1
    Instrmt_75_set.insert("0");
    Instrmt_75.add_attribute("FlexInd", "false"); // 1
    Instrmt_75_set.insert("false");
    Instrmt_75.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_75_set.insert("true");
    Instrmt_75.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_75_set.insert("Mo");
    Instrmt_75.add_attribute("CpnRt", "259717.040000"); // 1
    Instrmt_75_set.insert("259717.040000");
    Instrmt_75.add_attribute("Exch", "SecurityExchange_t_1469870368"); // 1
    Instrmt_75_set.insert("SecurityExchange_t_1469870368");
    Instrmt_75.add_attribute("PosLmt", "921967702"); // 1
    Instrmt_75_set.insert("921967702");
    Instrmt_75.add_attribute("NTPosLmt", "2024233849"); // 1
    Instrmt_75_set.insert("2024233849");
    Instrmt_75.add_attribute("Issr", "Issuer_t_1979583704"); // 1
    Instrmt_75_set.insert("Issuer_t_1979583704");
    Instrmt_75.add_attribute("EncIssrLen", "350461170"); // 1
    Instrmt_75_set.insert("350461170");
    Instrmt_75.add_attribute("EncIssr", "EncodedIssuer_t_90245245"); // 1
    Instrmt_75_set.insert("EncodedIssuer_t_90245245");
    Instrmt_75.add_attribute("Desc", "SecurityDesc_t_1564687917"); // 1
    Instrmt_75_set.insert("SecurityDesc_t_1564687917");
    Instrmt_75.add_attribute("EncSecDescLen", "1650966472"); // 1
    Instrmt_75_set.insert("1650966472");
    Instrmt_75.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1317707035"); // 1
    Instrmt_75_set.insert("EncodedSecurityDesc_t_1317707035");
    Instrmt_75.add_attribute("Pool", "Pool_t_1509483687"); // 1
    Instrmt_75_set.insert("Pool_t_1509483687");
    Instrmt_75.add_attribute("CSetMo", "1197249238"); // 1
    Instrmt_75_set.insert("1197249238");
    Instrmt_75.add_attribute("CPPgm", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("CPRegT", "CPRegType_t_937405455"); // 1
    Instrmt_75_set.insert("CPRegType_t_937405455");
    Instrmt_75.add_attribute("Dated", "DatedDate_t_1188102229"); // 1
    Instrmt_75_set.insert("DatedDate_t_1188102229");
    Instrmt_75.add_attribute("IntAcrl", "InterestAccrualDate_t_1061922560"); // 1
    Instrmt_75_set.insert("InterestAccrualDate_t_1061922560");
    all_values.push_back(Instrmt_75_set);
    all_compo_names.insert("Instrmt_75_set");

    {
      xml_element AID_78{"AID"};
      multiset<string> AID_78_set;
      AID_78.add_attribute("AltID", "SecurityAltID_t_545682955"); // 2
      AID_78_set.insert("SecurityAltID_t_545682955");
      AID_78.add_attribute("AltIDSrc", "7"); // 2
      AID_78_set.insert("7");
      all_values.push_back(AID_78_set);
      all_compo_names.insert("AID_78_set");

      Instrmt_75.add_element(AID_78);
    }
    {
      xml_element SecXML_78{"SecXML"};
      multiset<string> SecXML_78_set;
      SecXML_78.add_attribute("Schema", "SecurityXMLSchema_t_118470015"); // 2
      SecXML_78_set.insert("SecurityXMLSchema_t_118470015");
      all_values.push_back(SecXML_78_set);
      all_compo_names.insert("SecXML_78_set");

      Instrmt_75.add_element(SecXML_78);
    }
    {
      xml_element Evnt_78{"Evnt"};
      multiset<string> Evnt_78_set;
      Evnt_78.add_attribute("EventTyp", "19"); // 2
      Evnt_78_set.insert("19");
      Evnt_78.add_attribute("Dt", "EventDate_t_348034581"); // 2
      Evnt_78_set.insert("EventDate_t_348034581");
      Evnt_78.add_attribute("Tm", "EventTime_t_263434121"); // 2
      Evnt_78_set.insert("EventTime_t_263434121");
      Evnt_78.add_attribute("Px", "6886003.510000"); // 2
      Evnt_78_set.insert("6886003.510000");
      Evnt_78.add_attribute("Txt", "EventText_t_1590389109"); // 2
      Evnt_78_set.insert("EventText_t_1590389109");
      all_values.push_back(Evnt_78_set);
      all_compo_names.insert("Evnt_78_set");

      Instrmt_75.add_element(Evnt_78);
    }
    {
      xml_element Pty_405{"Pty"};
      multiset<string> Pty_405_set;
      Pty_405.add_attribute("ID", "InstrumentPartyID_t_1227846518"); // 2
      Pty_405_set.insert("InstrumentPartyID_t_1227846518");
      Pty_405.add_attribute("Src", "I"); // 2
      Pty_405_set.insert("I");
      Pty_405.add_attribute("R", "54"); // 2
      Pty_405_set.insert("54");
      all_values.push_back(Pty_405_set);
      all_compo_names.insert("Pty_405_set");

      {
        xml_element Sub_405{"Sub"};
        multiset<string> Sub_405_set;
        Sub_405.add_attribute("ID", "InstrumentPartySubID_t_685053730"); // 3
        Sub_405_set.insert("InstrumentPartySubID_t_685053730");
        Sub_405.add_attribute("Typ", "4"); // 3
        Sub_405_set.insert("4");
        all_values.push_back(Sub_405_set);
        all_compo_names.insert("Sub_405_set");

        Pty_405.add_element(Sub_405);
      }
      Instrmt_75.add_element(Pty_405);
    }
    {
      xml_element CmplxEvnt_75{"CmplxEvnt"};
      multiset<string> CmplxEvnt_75_set;
      CmplxEvnt_75.add_attribute("Typ", "8"); // 2
      CmplxEvnt_75_set.insert("8");
      CmplxEvnt_75.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1413603620"); // 2
      CmplxEvnt_75_set.insert("ComplexOptPayoutAmount_t_1413603620");
      CmplxEvnt_75.add_attribute("Px", "18543002.590000"); // 2
      CmplxEvnt_75_set.insert("18543002.590000");
      CmplxEvnt_75.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_75_set.insert("1");
      CmplxEvnt_75.add_attribute("PxBndryPrcsn", "1880876.740000"); // 2
      CmplxEvnt_75_set.insert("1880876.740000");
      CmplxEvnt_75.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_75_set.insert("1");
      CmplxEvnt_75.add_attribute("Cond", "1"); // 2
      CmplxEvnt_75_set.insert("1");
      all_values.push_back(CmplxEvnt_75_set);
      all_compo_names.insert("CmplxEvnt_75_set");

      {
        xml_element EvntDts_75{"EvntDts"};
        multiset<string> EvntDts_75_set;
        EvntDts_75.add_attribute("StartDt", "ComplexEventStartDate_t_538548844"); // 3
        EvntDts_75_set.insert("ComplexEventStartDate_t_538548844");
        EvntDts_75.add_attribute("EndDt", "ComplexEventEndDate_t_1821295705"); // 3
        EvntDts_75_set.insert("ComplexEventEndDate_t_1821295705");
        all_values.push_back(EvntDts_75_set);
        all_compo_names.insert("EvntDts_75_set");

        {
          xml_element EvntTms_75{"EvntTms"};
          multiset<string> EvntTms_75_set;
          EvntTms_75.add_attribute("StartTm", "276760285"); // 4
          EvntTms_75_set.insert("276760285");
          EvntTms_75.add_attribute("EndTm", "42031668"); // 4
          EvntTms_75_set.insert("42031668");
          all_values.push_back(EvntTms_75_set);
          all_compo_names.insert("EvntTms_75_set");

          EvntDts_75.add_element(EvntTms_75);
        }
        CmplxEvnt_75.add_element(EvntDts_75);
      }
      Instrmt_75.add_element(CmplxEvnt_75);
    }
    elt.add_element(Instrmt_75);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_10{"InstrmtExt"};
    multiset<string> InstrmtExt_10_set;
    InstrmtExt_10.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_10_set.insert("1");
    InstrmtExt_10.add_attribute("PctAtRisk", "17862439.720000"); // 1
    InstrmtExt_10_set.insert("17862439.720000");
    all_values.push_back(InstrmtExt_10_set);
    all_compo_names.insert("InstrmtExt_10_set");

    {
      xml_element Attrb_15{"Attrb"};
      multiset<string> Attrb_15_set;
      Attrb_15.add_attribute("Typ", "4"); // 2
      Attrb_15_set.insert("4");
      Attrb_15.add_attribute("Val", "InstrAttribValue_t_1743653834"); // 2
      Attrb_15_set.insert("InstrAttribValue_t_1743653834");
      all_values.push_back(Attrb_15_set);
      all_compo_names.insert("Attrb_15_set");

      InstrmtExt_10.add_element(Attrb_15);
    }
    elt.add_element(InstrmtExt_10);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_106{"Undly"};
    multiset<string> Undly_106_set;
    Undly_106.add_attribute("Sym", "UnderlyingSymbol_t_279899488"); // 1
    Undly_106_set.insert("UnderlyingSymbol_t_279899488");
    Undly_106.add_attribute("Sfx", "CD"); // 1
    Undly_106_set.insert("CD");
    Undly_106.add_attribute("ID", "UnderlyingSecurityID_t_1121848735"); // 1
    Undly_106_set.insert("UnderlyingSecurityID_t_1121848735");
    Undly_106.add_attribute("Src", "7"); // 1
    Undly_106_set.insert("7");
    Undly_106.add_attribute("Prod", "1"); // 1
    Undly_106_set.insert("1");
    Undly_106.add_attribute("CFI", "UnderlyingCFICode_t_1445382454"); // 1
    Undly_106_set.insert("UnderlyingCFICode_t_1445382454");
    Undly_106.add_attribute("SecTyp", "CAN"); // 1
    Undly_106_set.insert("CAN");
    Undly_106.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1039996883"); // 1
    Undly_106_set.insert("UnderlyingSecuritySubType_t_1039996883");
    Undly_106.add_attribute("MMY", "2133982805"); // 1
    Undly_106_set.insert("2133982805");
    Undly_106.add_attribute("Mat", "UnderlyingMaturityDate_t_757463915"); // 1
    Undly_106_set.insert("UnderlyingMaturityDate_t_757463915");
    Undly_106.add_attribute("MatTm", "120359753"); // 1
    Undly_106_set.insert("120359753");
    Undly_106.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1225463025"); // 1
    Undly_106_set.insert("UnderlyingCouponPaymentDate_t_1225463025");
    Undly_106.add_attribute("RestrctTyp", "MM"); // 1
    Undly_106_set.insert("MM");
    Undly_106.add_attribute("Snrty", "SD"); // 1
    Undly_106_set.insert("SD");
    Undly_106.add_attribute("NotlPctOut", "9063079.320000"); // 1
    Undly_106_set.insert("9063079.320000");
    Undly_106.add_attribute("OrigNotlPctOut", "8247291.340000"); // 1
    Undly_106_set.insert("8247291.340000");
    Undly_106.add_attribute("AttchPnt", "715334.550000"); // 1
    Undly_106_set.insert("715334.550000");
    Undly_106.add_attribute("DetchPnt", "6131245.430000"); // 1
    Undly_106_set.insert("6131245.430000");
    Undly_106.add_attribute("Issued", "UnderlyingIssueDate_t_1852185094"); // 1
    Undly_106_set.insert("UnderlyingIssueDate_t_1852185094");
    Undly_106.add_attribute("RepoCollSecTyp", "259621129"); // 1
    Undly_106_set.insert("259621129");
    Undly_106.add_attribute("RepoTrm", "196691355"); // 1
    Undly_106_set.insert("196691355");
    Undly_106.add_attribute("RepoRt", "5642574.620000"); // 1
    Undly_106_set.insert("5642574.620000");
    Undly_106.add_attribute("Fctr", "7981699.730000"); // 1
    Undly_106_set.insert("7981699.730000");
    Undly_106.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2017987061"); // 1
    Undly_106_set.insert("UnderlyingCreditRating_t_2017987061");
    Undly_106.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_841017747"); // 1
    Undly_106_set.insert("UnderlyingInstrRegistry_t_841017747");
    Undly_106.add_attribute("Ctry", "840201642"); // 1
    Undly_106_set.insert("840201642");
    Undly_106.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_862022505"); // 1
    Undly_106_set.insert("UnderlyingStateOrProvinceOfIssue_t_862022505");
    Undly_106.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_479778072"); // 1
    Undly_106_set.insert("UnderlyingLocaleOfIssue_t_479778072");
    Undly_106.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2079482548"); // 1
    Undly_106_set.insert("UnderlyingRedemptionDate_t_2079482548");
    Undly_106.add_attribute("StrkPx", "4581926.910000"); // 1
    Undly_106_set.insert("4581926.910000");
    Undly_106.add_attribute("StrkCcy", "USD"); // 1
    Undly_106_set.insert("USD");
    Undly_106.add_attribute("OptA", "1116285438"); // 1
    Undly_106_set.insert("1116285438");
    Undly_106.add_attribute("Mult", "303089.380000"); // 1
    Undly_106_set.insert("303089.380000");
    Undly_106.add_attribute("MultTyp", "0"); // 1
    Undly_106_set.insert("0");
    Undly_106.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_106_set.insert("4");
    Undly_106.add_attribute("UOM", "MMbbl"); // 1
    Undly_106_set.insert("MMbbl");
    Undly_106.add_attribute("UOMQty", "3454970.660000"); // 1
    Undly_106_set.insert("3454970.660000");
    Undly_106.add_attribute("PxUOM", "MWh"); // 1
    Undly_106_set.insert("MWh");
    Undly_106.add_attribute("PxUOMQty", "14621905.500000"); // 1
    Undly_106_set.insert("14621905.500000");
    Undly_106.add_attribute("TmUnit", "D"); // 1
    Undly_106_set.insert("D");
    Undly_106.add_attribute("ExerStyle", "1"); // 1
    Undly_106_set.insert("1");
    Undly_106.add_attribute("CpnRt", "5401699.270000"); // 1
    Undly_106_set.insert("5401699.270000");
    Undly_106.add_attribute("Exch", "UnderlyingSecurityExchange_t_222620875"); // 1
    Undly_106_set.insert("UnderlyingSecurityExchange_t_222620875");
    Undly_106.add_attribute("Issr", "UnderlyingIssuer_t_1711134670"); // 1
    Undly_106_set.insert("UnderlyingIssuer_t_1711134670");
    Undly_106.add_attribute("EncUndIssrLen", "1446477859"); // 1
    Undly_106_set.insert("1446477859");
    Undly_106.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1047350010"); // 1
    Undly_106_set.insert("EncodedUnderlyingIssuer_t_1047350010");
    Undly_106.add_attribute("Desc", "UnderlyingSecurityDesc_t_1782668125"); // 1
    Undly_106_set.insert("UnderlyingSecurityDesc_t_1782668125");
    Undly_106.add_attribute("EncUndSecDescLen", "2059602402"); // 1
    Undly_106_set.insert("2059602402");
    Undly_106.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_752051456"); // 1
    Undly_106_set.insert("EncodedUnderlyingSecurityDesc_t_752051456");
    Undly_106.add_attribute("CPPgm", "UnderlyingCPProgram_t_2042289254"); // 1
    Undly_106_set.insert("UnderlyingCPProgram_t_2042289254");
    Undly_106.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_108810109"); // 1
    Undly_106_set.insert("UnderlyingCPRegType_t_108810109");
    Undly_106.add_attribute("AllocPct", "13163089.190000"); // 1
    Undly_106_set.insert("13163089.190000");
    Undly_106.add_attribute("Ccy", "USD"); // 1
    Undly_106_set.insert("USD");
    Undly_106.add_attribute("Qty", "98430.180000"); // 1
    Undly_106_set.insert("98430.180000");
    Undly_106.add_attribute("SettlTyp", "2"); // 1
    Undly_106_set.insert("2");
    Undly_106.add_attribute("CashAmt", "UnderlyingCashAmount_t_841336028"); // 1
    Undly_106_set.insert("UnderlyingCashAmount_t_841336028");
    Undly_106.add_attribute("CashTyp", "FIXED"); // 1
    Undly_106_set.insert("FIXED");
    Undly_106.add_attribute("Px", "14651761.220000"); // 1
    Undly_106_set.insert("14651761.220000");
    Undly_106.add_attribute("DirtPx", "12995287.190000"); // 1
    Undly_106_set.insert("12995287.190000");
    Undly_106.add_attribute("EndPx", "15455649.420000"); // 1
    Undly_106_set.insert("15455649.420000");
    Undly_106.add_attribute("StartVal", "UnderlyingStartValue_t_1677074511"); // 1
    Undly_106_set.insert("UnderlyingStartValue_t_1677074511");
    Undly_106.add_attribute("CurVal", "UnderlyingCurrentValue_t_268330509"); // 1
    Undly_106_set.insert("UnderlyingCurrentValue_t_268330509");
    Undly_106.add_attribute("EndVal", "UnderlyingEndValue_t_1575873880"); // 1
    Undly_106_set.insert("UnderlyingEndValue_t_1575873880");
    Undly_106.add_attribute("AdjQty", "7080131.230000"); // 1
    Undly_106_set.insert("7080131.230000");
    Undly_106.add_attribute("FxRate", "136950.610000"); // 1
    Undly_106_set.insert("136950.610000");
    Undly_106.add_attribute("FxRateCalc", "D"); // 1
    Undly_106_set.insert("D");
    Undly_106.add_attribute("CapValu", "UnderlyingCapValue_t_1053510189"); // 1
    Undly_106_set.insert("UnderlyingCapValue_t_1053510189");
    Undly_106.add_attribute("SetMeth", "UnderlyingSettlMethod_t_799056495"); // 1
    Undly_106_set.insert("UnderlyingSettlMethod_t_799056495");
    Undly_106.add_attribute("PutCall", "218788527"); // 1
    Undly_106_set.insert("218788527");
    all_values.push_back(Undly_106_set);
    all_compo_names.insert("Undly_106_set");

    {
      xml_element UndAID_106{"UndAID"};
      multiset<string> UndAID_106_set;
      UndAID_106.add_attribute("AltID", "UnderlyingSecurityAltID_t_8987522"); // 2
      UndAID_106_set.insert("UnderlyingSecurityAltID_t_8987522");
      UndAID_106.add_attribute("AltIDSrc", "G"); // 2
      UndAID_106_set.insert("G");
      all_values.push_back(UndAID_106_set);
      all_compo_names.insert("UndAID_106_set");

      Undly_106.add_element(UndAID_106);
    }
    {
      xml_element Stip_166{"Stip"};
      multiset<string> Stip_166_set;
      Stip_166.add_attribute("Typ", "WAC"); // 2
      Stip_166_set.insert("WAC");
      Stip_166.add_attribute("Val", "UnderlyingStipValue_t_231608398"); // 2
      Stip_166_set.insert("UnderlyingStipValue_t_231608398");
      all_values.push_back(Stip_166_set);
      all_compo_names.insert("Stip_166_set");

      Undly_106.add_element(Stip_166);
    }
    {
      xml_element Pty_406{"Pty"};
      multiset<string> Pty_406_set;
      Pty_406.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1268428705"); // 2
      Pty_406_set.insert("UnderlyingInstrumentPartyID_t_1268428705");
      Pty_406.add_attribute("Src", "A"); // 2
      Pty_406_set.insert("A");
      Pty_406.add_attribute("R", "36"); // 2
      Pty_406_set.insert("36");
      all_values.push_back(Pty_406_set);
      all_compo_names.insert("Pty_406_set");

      {
        xml_element Sub_406{"Sub"};
        multiset<string> Sub_406_set;
        Sub_406.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_903613183"); // 3
        Sub_406_set.insert("UnderlyingInstrumentPartySubID_t_903613183");
        Sub_406.add_attribute("Typ", "20"); // 3
        Sub_406_set.insert("20");
        all_values.push_back(Sub_406_set);
        all_compo_names.insert("Sub_406_set");

        Pty_406.add_element(Sub_406);
      }
      Undly_106.add_element(Pty_406);
    }
    elt.add_element(Undly_106);
  } // end Undly
  { // Undly
    xml_element Undly_107{"Undly"};
    multiset<string> Undly_107_set;
    Undly_107.add_attribute("Sym", "UnderlyingSymbol_t_2031009864"); // 1
    Undly_107_set.insert("UnderlyingSymbol_t_2031009864");
    Undly_107.add_attribute("Sfx", "WI"); // 1
    Undly_107_set.insert("WI");
    Undly_107.add_attribute("ID", "UnderlyingSecurityID_t_78881528"); // 1
    Undly_107_set.insert("UnderlyingSecurityID_t_78881528");
    Undly_107.add_attribute("Src", "G"); // 1
    Undly_107_set.insert("G");
    Undly_107.add_attribute("Prod", "7"); // 1
    Undly_107_set.insert("7");
    Undly_107.add_attribute("CFI", "UnderlyingCFICode_t_58195051"); // 1
    Undly_107_set.insert("UnderlyingCFICode_t_58195051");
    Undly_107.add_attribute("SecTyp", "XCN"); // 1
    Undly_107_set.insert("XCN");
    Undly_107.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_877087943"); // 1
    Undly_107_set.insert("UnderlyingSecuritySubType_t_877087943");
    Undly_107.add_attribute("MMY", "899531079"); // 1
    Undly_107_set.insert("899531079");
    Undly_107.add_attribute("Mat", "UnderlyingMaturityDate_t_1699299244"); // 1
    Undly_107_set.insert("UnderlyingMaturityDate_t_1699299244");
    Undly_107.add_attribute("MatTm", "194780418"); // 1
    Undly_107_set.insert("194780418");
    Undly_107.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_51576150"); // 1
    Undly_107_set.insert("UnderlyingCouponPaymentDate_t_51576150");
    Undly_107.add_attribute("RestrctTyp", "MM"); // 1
    Undly_107_set.insert("MM");
    Undly_107.add_attribute("Snrty", "SD"); // 1
    Undly_107_set.insert("SD");
    Undly_107.add_attribute("NotlPctOut", "3199066.600000"); // 1
    Undly_107_set.insert("3199066.600000");
    Undly_107.add_attribute("OrigNotlPctOut", "5257707.710000"); // 1
    Undly_107_set.insert("5257707.710000");
    Undly_107.add_attribute("AttchPnt", "4323844.040000"); // 1
    Undly_107_set.insert("4323844.040000");
    Undly_107.add_attribute("DetchPnt", "3336017.210000"); // 1
    Undly_107_set.insert("3336017.210000");
    Undly_107.add_attribute("Issued", "UnderlyingIssueDate_t_1429852396"); // 1
    Undly_107_set.insert("UnderlyingIssueDate_t_1429852396");
    Undly_107.add_attribute("RepoCollSecTyp", "1485894594"); // 1
    Undly_107_set.insert("1485894594");
    Undly_107.add_attribute("RepoTrm", "1132658216"); // 1
    Undly_107_set.insert("1132658216");
    Undly_107.add_attribute("RepoRt", "16486409.230000"); // 1
    Undly_107_set.insert("16486409.230000");
    Undly_107.add_attribute("Fctr", "14948821.160000"); // 1
    Undly_107_set.insert("14948821.160000");
    Undly_107.add_attribute("CrdRtg", "UnderlyingCreditRating_t_689952251"); // 1
    Undly_107_set.insert("UnderlyingCreditRating_t_689952251");
    Undly_107.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_260115729"); // 1
    Undly_107_set.insert("UnderlyingInstrRegistry_t_260115729");
    Undly_107.add_attribute("Ctry", "1726490514"); // 1
    Undly_107_set.insert("1726490514");
    Undly_107.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1958380957"); // 1
    Undly_107_set.insert("UnderlyingStateOrProvinceOfIssue_t_1958380957");
    Undly_107.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_318068394"); // 1
    Undly_107_set.insert("UnderlyingLocaleOfIssue_t_318068394");
    Undly_107.add_attribute("Redeem", "UnderlyingRedemptionDate_t_857965274"); // 1
    Undly_107_set.insert("UnderlyingRedemptionDate_t_857965274");
    Undly_107.add_attribute("StrkPx", "7145104.920000"); // 1
    Undly_107_set.insert("7145104.920000");
    Undly_107.add_attribute("StrkCcy", "EUR"); // 1
    Undly_107_set.insert("EUR");
    Undly_107.add_attribute("OptA", "1512929281"); // 1
    Undly_107_set.insert("1512929281");
    Undly_107.add_attribute("Mult", "3670213.410000"); // 1
    Undly_107_set.insert("3670213.410000");
    Undly_107.add_attribute("MultTyp", "1"); // 1
    Undly_107_set.insert("1");
    Undly_107.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_107_set.insert("3");
    Undly_107.add_attribute("UOM", "Gal"); // 1
    Undly_107_set.insert("Gal");
    Undly_107.add_attribute("UOMQty", "10035211.320000"); // 1
    Undly_107_set.insert("10035211.320000");
    Undly_107.add_attribute("PxUOM", "Bcf"); // 1
    Undly_107_set.insert("Bcf");
    Undly_107.add_attribute("PxUOMQty", "13247474.710000"); // 1
    Undly_107_set.insert("13247474.710000");
    Undly_107.add_attribute("TmUnit", "D"); // 1
    Undly_107_set.insert("D");
    Undly_107.add_attribute("ExerStyle", "0"); // 1
    Undly_107_set.insert("0");
    Undly_107.add_attribute("CpnRt", "13763236.220000"); // 1
    Undly_107_set.insert("13763236.220000");
    Undly_107.add_attribute("Exch", "UnderlyingSecurityExchange_t_1652717267"); // 1
    Undly_107_set.insert("UnderlyingSecurityExchange_t_1652717267");
    Undly_107.add_attribute("Issr", "UnderlyingIssuer_t_1653079645"); // 1
    Undly_107_set.insert("UnderlyingIssuer_t_1653079645");
    Undly_107.add_attribute("EncUndIssrLen", "1696230282"); // 1
    Undly_107_set.insert("1696230282");
    Undly_107.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_31004390"); // 1
    Undly_107_set.insert("EncodedUnderlyingIssuer_t_31004390");
    Undly_107.add_attribute("Desc", "UnderlyingSecurityDesc_t_2085464050"); // 1
    Undly_107_set.insert("UnderlyingSecurityDesc_t_2085464050");
    Undly_107.add_attribute("EncUndSecDescLen", "2029832003"); // 1
    Undly_107_set.insert("2029832003");
    Undly_107.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1460856786"); // 1
    Undly_107_set.insert("EncodedUnderlyingSecurityDesc_t_1460856786");
    Undly_107.add_attribute("CPPgm", "UnderlyingCPProgram_t_1423874996"); // 1
    Undly_107_set.insert("UnderlyingCPProgram_t_1423874996");
    Undly_107.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1015006571"); // 1
    Undly_107_set.insert("UnderlyingCPRegType_t_1015006571");
    Undly_107.add_attribute("AllocPct", "9620140.610000"); // 1
    Undly_107_set.insert("9620140.610000");
    Undly_107.add_attribute("Ccy", "CAN"); // 1
    Undly_107_set.insert("CAN");
    Undly_107.add_attribute("Qty", "12221297.900000"); // 1
    Undly_107_set.insert("12221297.900000");
    Undly_107.add_attribute("SettlTyp", "4"); // 1
    Undly_107_set.insert("4");
    Undly_107.add_attribute("CashAmt", "UnderlyingCashAmount_t_1515856132"); // 1
    Undly_107_set.insert("UnderlyingCashAmount_t_1515856132");
    Undly_107.add_attribute("CashTyp", "FIXED"); // 1
    Undly_107_set.insert("FIXED");
    Undly_107.add_attribute("Px", "12082456.050000"); // 1
    Undly_107_set.insert("12082456.050000");
    Undly_107.add_attribute("DirtPx", "828829.760000"); // 1
    Undly_107_set.insert("828829.760000");
    Undly_107.add_attribute("EndPx", "18283379.970000"); // 1
    Undly_107_set.insert("18283379.970000");
    Undly_107.add_attribute("StartVal", "UnderlyingStartValue_t_1949737096"); // 1
    Undly_107_set.insert("UnderlyingStartValue_t_1949737096");
    Undly_107.add_attribute("CurVal", "UnderlyingCurrentValue_t_1595812257"); // 1
    Undly_107_set.insert("UnderlyingCurrentValue_t_1595812257");
    Undly_107.add_attribute("EndVal", "UnderlyingEndValue_t_47875691"); // 1
    Undly_107_set.insert("UnderlyingEndValue_t_47875691");
    Undly_107.add_attribute("AdjQty", "17435800.750000"); // 1
    Undly_107_set.insert("17435800.750000");
    Undly_107.add_attribute("FxRate", "3051686.120000"); // 1
    Undly_107_set.insert("3051686.120000");
    Undly_107.add_attribute("FxRateCalc", "D"); // 1
    Undly_107_set.insert("D");
    Undly_107.add_attribute("CapValu", "UnderlyingCapValue_t_599617559"); // 1
    Undly_107_set.insert("UnderlyingCapValue_t_599617559");
    Undly_107.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2039096559"); // 1
    Undly_107_set.insert("UnderlyingSettlMethod_t_2039096559");
    Undly_107.add_attribute("PutCall", "1797839555"); // 1
    Undly_107_set.insert("1797839555");
    all_values.push_back(Undly_107_set);
    all_compo_names.insert("Undly_107_set");

    {
      xml_element UndAID_107{"UndAID"};
      multiset<string> UndAID_107_set;
      UndAID_107.add_attribute("AltID", "UnderlyingSecurityAltID_t_1154954288"); // 2
      UndAID_107_set.insert("UnderlyingSecurityAltID_t_1154954288");
      UndAID_107.add_attribute("AltIDSrc", "4"); // 2
      UndAID_107_set.insert("4");
      all_values.push_back(UndAID_107_set);
      all_compo_names.insert("UndAID_107_set");

      Undly_107.add_element(UndAID_107);
    }
    {
      xml_element Stip_167{"Stip"};
      multiset<string> Stip_167_set;
      Stip_167.add_attribute("Typ", "CURRENCY"); // 2
      Stip_167_set.insert("CURRENCY");
      Stip_167.add_attribute("Val", "UnderlyingStipValue_t_660187908"); // 2
      Stip_167_set.insert("UnderlyingStipValue_t_660187908");
      all_values.push_back(Stip_167_set);
      all_compo_names.insert("Stip_167_set");

      Undly_107.add_element(Stip_167);
    }
    {
      xml_element Pty_407{"Pty"};
      multiset<string> Pty_407_set;
      Pty_407.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1325917273"); // 2
      Pty_407_set.insert("UnderlyingInstrumentPartyID_t_1325917273");
      Pty_407.add_attribute("Src", "4"); // 2
      Pty_407_set.insert("4");
      Pty_407.add_attribute("R", "64"); // 2
      Pty_407_set.insert("64");
      all_values.push_back(Pty_407_set);
      all_compo_names.insert("Pty_407_set");

      {
        xml_element Sub_407{"Sub"};
        multiset<string> Sub_407_set;
        Sub_407.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1263897675"); // 3
        Sub_407_set.insert("UnderlyingInstrumentPartySubID_t_1263897675");
        Sub_407.add_attribute("Typ", "12"); // 3
        Sub_407_set.insert("12");
        all_values.push_back(Sub_407_set);
        all_compo_names.insert("Sub_407_set");

        Pty_407.add_element(Sub_407);
      }
      Undly_107.add_element(Pty_407);
    }
    elt.add_element(Undly_107);
  } // end Undly
  { // Undly
    xml_element Undly_108{"Undly"};
    multiset<string> Undly_108_set;
    Undly_108.add_attribute("Sym", "UnderlyingSymbol_t_4565437"); // 1
    Undly_108_set.insert("UnderlyingSymbol_t_4565437");
    Undly_108.add_attribute("Sfx", "WI"); // 1
    Undly_108_set.insert("WI");
    Undly_108.add_attribute("ID", "UnderlyingSecurityID_t_1472781089"); // 1
    Undly_108_set.insert("UnderlyingSecurityID_t_1472781089");
    Undly_108.add_attribute("Src", "H"); // 1
    Undly_108_set.insert("H");
    Undly_108.add_attribute("Prod", "10"); // 1
    Undly_108_set.insert("10");
    Undly_108.add_attribute("CFI", "UnderlyingCFICode_t_1030256264"); // 1
    Undly_108_set.insert("UnderlyingCFICode_t_1030256264");
    Undly_108.add_attribute("SecTyp", "OOC"); // 1
    Undly_108_set.insert("OOC");
    Undly_108.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1661842818"); // 1
    Undly_108_set.insert("UnderlyingSecuritySubType_t_1661842818");
    Undly_108.add_attribute("MMY", "398628748"); // 1
    Undly_108_set.insert("398628748");
    Undly_108.add_attribute("Mat", "UnderlyingMaturityDate_t_1581423825"); // 1
    Undly_108_set.insert("UnderlyingMaturityDate_t_1581423825");
    Undly_108.add_attribute("MatTm", "722604776"); // 1
    Undly_108_set.insert("722604776");
    Undly_108.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_481511724"); // 1
    Undly_108_set.insert("UnderlyingCouponPaymentDate_t_481511724");
    Undly_108.add_attribute("RestrctTyp", "XR"); // 1
    Undly_108_set.insert("XR");
    Undly_108.add_attribute("Snrty", "SR"); // 1
    Undly_108_set.insert("SR");
    Undly_108.add_attribute("NotlPctOut", "20773239.820000"); // 1
    Undly_108_set.insert("20773239.820000");
    Undly_108.add_attribute("OrigNotlPctOut", "13101538.660000"); // 1
    Undly_108_set.insert("13101538.660000");
    Undly_108.add_attribute("AttchPnt", "1209546.510000"); // 1
    Undly_108_set.insert("1209546.510000");
    Undly_108.add_attribute("DetchPnt", "2350089.460000"); // 1
    Undly_108_set.insert("2350089.460000");
    Undly_108.add_attribute("Issued", "UnderlyingIssueDate_t_1783245949"); // 1
    Undly_108_set.insert("UnderlyingIssueDate_t_1783245949");
    Undly_108.add_attribute("RepoCollSecTyp", "720572211"); // 1
    Undly_108_set.insert("720572211");
    Undly_108.add_attribute("RepoTrm", "126621857"); // 1
    Undly_108_set.insert("126621857");
    Undly_108.add_attribute("RepoRt", "14336018.560000"); // 1
    Undly_108_set.insert("14336018.560000");
    Undly_108.add_attribute("Fctr", "18755264.990000"); // 1
    Undly_108_set.insert("18755264.990000");
    Undly_108.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1946943133"); // 1
    Undly_108_set.insert("UnderlyingCreditRating_t_1946943133");
    Undly_108.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_312797737"); // 1
    Undly_108_set.insert("UnderlyingInstrRegistry_t_312797737");
    Undly_108.add_attribute("Ctry", "388230759"); // 1
    Undly_108_set.insert("388230759");
    Undly_108.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1125376758"); // 1
    Undly_108_set.insert("UnderlyingStateOrProvinceOfIssue_t_1125376758");
    Undly_108.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_888223900"); // 1
    Undly_108_set.insert("UnderlyingLocaleOfIssue_t_888223900");
    Undly_108.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1079423058"); // 1
    Undly_108_set.insert("UnderlyingRedemptionDate_t_1079423058");
    Undly_108.add_attribute("StrkPx", "2417907.850000"); // 1
    Undly_108_set.insert("2417907.850000");
    Undly_108.add_attribute("StrkCcy", "EUR"); // 1
    Undly_108_set.insert("EUR");
    Undly_108.add_attribute("OptA", "782079808"); // 1
    Undly_108_set.insert("782079808");
    Undly_108.add_attribute("Mult", "6712958.600000"); // 1
    Undly_108_set.insert("6712958.600000");
    Undly_108.add_attribute("MultTyp", "1"); // 1
    Undly_108_set.insert("1");
    Undly_108.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_108_set.insert("0");
    Undly_108.add_attribute("UOM", "Alw"); // 1
    Undly_108_set.insert("Alw");
    Undly_108.add_attribute("UOMQty", "20917936.340000"); // 1
    Undly_108_set.insert("20917936.340000");
    Undly_108.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_108_set.insert("MMbbl");
    Undly_108.add_attribute("PxUOMQty", "21001808.730000"); // 1
    Undly_108_set.insert("21001808.730000");
    Undly_108.add_attribute("TmUnit", "Min"); // 1
    Undly_108_set.insert("Min");
    Undly_108.add_attribute("ExerStyle", "2"); // 1
    Undly_108_set.insert("2");
    Undly_108.add_attribute("CpnRt", "4342089.490000"); // 1
    Undly_108_set.insert("4342089.490000");
    Undly_108.add_attribute("Exch", "UnderlyingSecurityExchange_t_640528339"); // 1
    Undly_108_set.insert("UnderlyingSecurityExchange_t_640528339");
    Undly_108.add_attribute("Issr", "UnderlyingIssuer_t_707980818"); // 1
    Undly_108_set.insert("UnderlyingIssuer_t_707980818");
    Undly_108.add_attribute("EncUndIssrLen", "364049283"); // 1
    Undly_108_set.insert("364049283");
    Undly_108.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1950682205"); // 1
    Undly_108_set.insert("EncodedUnderlyingIssuer_t_1950682205");
    Undly_108.add_attribute("Desc", "UnderlyingSecurityDesc_t_828935470"); // 1
    Undly_108_set.insert("UnderlyingSecurityDesc_t_828935470");
    Undly_108.add_attribute("EncUndSecDescLen", "599058230"); // 1
    Undly_108_set.insert("599058230");
    Undly_108.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1586444506"); // 1
    Undly_108_set.insert("EncodedUnderlyingSecurityDesc_t_1586444506");
    Undly_108.add_attribute("CPPgm", "UnderlyingCPProgram_t_1549507681"); // 1
    Undly_108_set.insert("UnderlyingCPProgram_t_1549507681");
    Undly_108.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_725680087"); // 1
    Undly_108_set.insert("UnderlyingCPRegType_t_725680087");
    Undly_108.add_attribute("AllocPct", "8725627.150000"); // 1
    Undly_108_set.insert("8725627.150000");
    Undly_108.add_attribute("Ccy", "USD"); // 1
    Undly_108_set.insert("USD");
    Undly_108.add_attribute("Qty", "11853604.520000"); // 1
    Undly_108_set.insert("11853604.520000");
    Undly_108.add_attribute("SettlTyp", "5"); // 1
    Undly_108_set.insert("5");
    Undly_108.add_attribute("CashAmt", "UnderlyingCashAmount_t_1650516330"); // 1
    Undly_108_set.insert("UnderlyingCashAmount_t_1650516330");
    Undly_108.add_attribute("CashTyp", "DIFF"); // 1
    Undly_108_set.insert("DIFF");
    Undly_108.add_attribute("Px", "5977207.020000"); // 1
    Undly_108_set.insert("5977207.020000");
    Undly_108.add_attribute("DirtPx", "18923071.150000"); // 1
    Undly_108_set.insert("18923071.150000");
    Undly_108.add_attribute("EndPx", "12720991.230000"); // 1
    Undly_108_set.insert("12720991.230000");
    Undly_108.add_attribute("StartVal", "UnderlyingStartValue_t_1681709197"); // 1
    Undly_108_set.insert("UnderlyingStartValue_t_1681709197");
    Undly_108.add_attribute("CurVal", "UnderlyingCurrentValue_t_526903275"); // 1
    Undly_108_set.insert("UnderlyingCurrentValue_t_526903275");
    Undly_108.add_attribute("EndVal", "UnderlyingEndValue_t_1943394983"); // 1
    Undly_108_set.insert("UnderlyingEndValue_t_1943394983");
    Undly_108.add_attribute("AdjQty", "15847935.420000"); // 1
    Undly_108_set.insert("15847935.420000");
    Undly_108.add_attribute("FxRate", "4730619.230000"); // 1
    Undly_108_set.insert("4730619.230000");
    Undly_108.add_attribute("FxRateCalc", "M"); // 1
    Undly_108_set.insert("M");
    Undly_108.add_attribute("CapValu", "UnderlyingCapValue_t_1529103529"); // 1
    Undly_108_set.insert("UnderlyingCapValue_t_1529103529");
    Undly_108.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2081063389"); // 1
    Undly_108_set.insert("UnderlyingSettlMethod_t_2081063389");
    Undly_108.add_attribute("PutCall", "1450160685"); // 1
    Undly_108_set.insert("1450160685");
    all_values.push_back(Undly_108_set);
    all_compo_names.insert("Undly_108_set");

    {
      xml_element UndAID_108{"UndAID"};
      multiset<string> UndAID_108_set;
      UndAID_108.add_attribute("AltID", "UnderlyingSecurityAltID_t_907353693"); // 2
      UndAID_108_set.insert("UnderlyingSecurityAltID_t_907353693");
      UndAID_108.add_attribute("AltIDSrc", "E"); // 2
      UndAID_108_set.insert("E");
      all_values.push_back(UndAID_108_set);
      all_compo_names.insert("UndAID_108_set");

      Undly_108.add_element(UndAID_108);
    }
    {
      xml_element Stip_168{"Stip"};
      multiset<string> Stip_168_set;
      Stip_168.add_attribute("Typ", "PPM"); // 2
      Stip_168_set.insert("PPM");
      Stip_168.add_attribute("Val", "UnderlyingStipValue_t_1547882032"); // 2
      Stip_168_set.insert("UnderlyingStipValue_t_1547882032");
      all_values.push_back(Stip_168_set);
      all_compo_names.insert("Stip_168_set");

      Undly_108.add_element(Stip_168);
    }
    {
      xml_element Pty_408{"Pty"};
      multiset<string> Pty_408_set;
      Pty_408.add_attribute("ID", "UnderlyingInstrumentPartyID_t_824683153"); // 2
      Pty_408_set.insert("UnderlyingInstrumentPartyID_t_824683153");
      Pty_408.add_attribute("Src", "1"); // 2
      Pty_408_set.insert("1");
      Pty_408.add_attribute("R", "63"); // 2
      Pty_408_set.insert("63");
      all_values.push_back(Pty_408_set);
      all_compo_names.insert("Pty_408_set");

      {
        xml_element Sub_408{"Sub"};
        multiset<string> Sub_408_set;
        Sub_408.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1653618623"); // 3
        Sub_408_set.insert("UnderlyingInstrumentPartySubID_t_1653618623");
        Sub_408.add_attribute("Typ", "17"); // 3
        Sub_408_set.insert("17");
        all_values.push_back(Sub_408_set);
        all_compo_names.insert("Sub_408_set");

        Pty_408.add_element(Sub_408);
      }
      Undly_108.add_element(Pty_408);
    }
    elt.add_element(Undly_108);
  } // end Undly
  { // Stip
    xml_element Stip_169{"Stip"};
    multiset<string> Stip_169_set;
    Stip_169.add_attribute("Typ", "ISSUER"); // 1
    Stip_169_set.insert("ISSUER");
    Stip_169.add_attribute("Val", "StipulationValue_t_1425673587"); // 1
    Stip_169_set.insert("StipulationValue_t_1425673587");
    all_values.push_back(Stip_169_set);
    all_compo_names.insert("Stip_169_set");

    elt.add_element(Stip_169);
  } // end Stip
  { // Leg
    xml_element Leg_93{"Leg"};
    multiset<string> Leg_93_set;
    Leg_93.add_attribute("Sym", "LegSymbol_t_185709541"); // 1
    Leg_93_set.insert("LegSymbol_t_185709541");
    Leg_93.add_attribute("Sfx", "CD"); // 1
    Leg_93_set.insert("CD");
    Leg_93.add_attribute("ID", "LegSecurityID_t_700480967"); // 1
    Leg_93_set.insert("LegSecurityID_t_700480967");
    Leg_93.add_attribute("Src", "6"); // 1
    Leg_93_set.insert("6");
    Leg_93.add_attribute("Prod", "4"); // 1
    Leg_93_set.insert("4");
    Leg_93.add_attribute("CFI", "LegCFICode_t_626581672"); // 1
    Leg_93_set.insert("LegCFICode_t_626581672");
    Leg_93.add_attribute("SecTyp", "FXSWAP"); // 1
    Leg_93_set.insert("FXSWAP");
    Leg_93.add_attribute("SecSubTyp", "LegSecuritySubType_t_1198669310"); // 1
    Leg_93_set.insert("LegSecuritySubType_t_1198669310");
    Leg_93.add_attribute("MMY", "1898680795"); // 1
    Leg_93_set.insert("1898680795");
    Leg_93.add_attribute("Mat", "LegMaturityDate_t_1983437084"); // 1
    Leg_93_set.insert("LegMaturityDate_t_1983437084");
    Leg_93.add_attribute("MatTm", "1725572585"); // 1
    Leg_93_set.insert("1725572585");
    Leg_93.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1694592131"); // 1
    Leg_93_set.insert("LegCouponPaymentDate_t_1694592131");
    Leg_93.add_attribute("Issued", "LegIssueDate_t_1420746978"); // 1
    Leg_93_set.insert("LegIssueDate_t_1420746978");
    Leg_93.add_attribute("RepoCollSecTyp", "51150860"); // 1
    Leg_93_set.insert("51150860");
    Leg_93.add_attribute("RepoTrm", "1044571943"); // 1
    Leg_93_set.insert("1044571943");
    Leg_93.add_attribute("RepoRt", "8023668.590000"); // 1
    Leg_93_set.insert("8023668.590000");
    Leg_93.add_attribute("Fctr", "21322142.490000"); // 1
    Leg_93_set.insert("21322142.490000");
    Leg_93.add_attribute("CrdRtg", "LegCreditRating_t_347248980"); // 1
    Leg_93_set.insert("LegCreditRating_t_347248980");
    Leg_93.add_attribute("Rgstry", "LegInstrRegistry_t_1709720552"); // 1
    Leg_93_set.insert("LegInstrRegistry_t_1709720552");
    Leg_93.add_attribute("Ctry", "101432936"); // 1
    Leg_93_set.insert("101432936");
    Leg_93.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_84134966"); // 1
    Leg_93_set.insert("LegStateOrProvinceOfIssue_t_84134966");
    Leg_93.add_attribute("Lcl", "LegLocaleOfIssue_t_1110118936"); // 1
    Leg_93_set.insert("LegLocaleOfIssue_t_1110118936");
    Leg_93.add_attribute("Redeem", "LegRedemptionDate_t_926116090"); // 1
    Leg_93_set.insert("LegRedemptionDate_t_926116090");
    Leg_93.add_attribute("Strk", "1850702.360000"); // 1
    Leg_93_set.insert("1850702.360000");
    Leg_93.add_attribute("StrkCcy", "EUR"); // 1
    Leg_93_set.insert("EUR");
    Leg_93.add_attribute("OptA", "885063736"); // 1
    Leg_93_set.insert("885063736");
    Leg_93.add_attribute("Cmult", "11037573.250000"); // 1
    Leg_93_set.insert("11037573.250000");
    Leg_93.add_attribute("MultTyp", "0"); // 1
    Leg_93_set.insert("0");
    Leg_93.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_93_set.insert("1");
    Leg_93.add_attribute("UOM", "oz_tr"); // 1
    Leg_93_set.insert("oz_tr");
    Leg_93.add_attribute("UOMQty", "16736032.630000"); // 1
    Leg_93_set.insert("16736032.630000");
    Leg_93.add_attribute("PxUOM", "Bu"); // 1
    Leg_93_set.insert("Bu");
    Leg_93.add_attribute("PxUOMQty", "13193588.060000"); // 1
    Leg_93_set.insert("13193588.060000");
    Leg_93.add_attribute("TmUnit", "Wk"); // 1
    Leg_93_set.insert("Wk");
    Leg_93.add_attribute("ExerStyle", "1"); // 1
    Leg_93_set.insert("1");
    Leg_93.add_attribute("CpnRt", "19459404.780000"); // 1
    Leg_93_set.insert("19459404.780000");
    Leg_93.add_attribute("Exch", "LegSecurityExchange_t_1679338335"); // 1
    Leg_93_set.insert("LegSecurityExchange_t_1679338335");
    Leg_93.add_attribute("Issr", "LegIssuer_t_471614692"); // 1
    Leg_93_set.insert("LegIssuer_t_471614692");
    Leg_93.add_attribute("EncLegIssrLen", "1697137626"); // 1
    Leg_93_set.insert("1697137626");
    Leg_93.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1515291771"); // 1
    Leg_93_set.insert("EncodedLegIssuer_t_1515291771");
    Leg_93.add_attribute("Desc", "LegSecurityDesc_t_49703630"); // 1
    Leg_93_set.insert("LegSecurityDesc_t_49703630");
    Leg_93.add_attribute("EncLegSecDescLen", "1244246109"); // 1
    Leg_93_set.insert("1244246109");
    Leg_93.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_788555101"); // 1
    Leg_93_set.insert("EncodedLegSecurityDesc_t_788555101");
    Leg_93.add_attribute("RatioQty", "1008544.900000"); // 1
    Leg_93_set.insert("1008544.900000");
    Leg_93.add_attribute("Side", "5"); // 1
    Leg_93_set.insert("5");
    Leg_93.add_attribute("Ccy", "USD"); // 1
    Leg_93_set.insert("USD");
    Leg_93.add_attribute("Pool", "LegPool_t_488583384"); // 1
    Leg_93_set.insert("LegPool_t_488583384");
    Leg_93.add_attribute("Dated", "LegDatedDate_t_1153158865"); // 1
    Leg_93_set.insert("LegDatedDate_t_1153158865");
    Leg_93.add_attribute("CSetMo", "187018028"); // 1
    Leg_93_set.insert("187018028");
    Leg_93.add_attribute("IntAcrl", "LegInterestAccrualDate_t_572718350"); // 1
    Leg_93_set.insert("LegInterestAccrualDate_t_572718350");
    Leg_93.add_attribute("PutCall", "115794154"); // 1
    Leg_93_set.insert("115794154");
    Leg_93.add_attribute("LegOptionRatio", "11131341.180000"); // 1
    Leg_93_set.insert("11131341.180000");
    Leg_93.add_attribute("Px", "7577885.870000"); // 1
    Leg_93_set.insert("7577885.870000");
    all_values.push_back(Leg_93_set);
    all_compo_names.insert("Leg_93_set");

    {
      xml_element LegAID_88{"LegAID"};
      multiset<string> LegAID_88_set;
      LegAID_88.add_attribute("SecAltID", "LegSecurityAltID_t_429510031"); // 2
      LegAID_88_set.insert("LegSecurityAltID_t_429510031");
      LegAID_88.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_88_set.insert("3");
      all_values.push_back(LegAID_88_set);
      all_compo_names.insert("LegAID_88_set");

      Leg_93.add_element(LegAID_88);
    }
    elt.add_element(Leg_93);
  } // end Leg
  { // Leg
    xml_element Leg_94{"Leg"};
    multiset<string> Leg_94_set;
    Leg_94.add_attribute("Sym", "LegSymbol_t_1642852323"); // 1
    Leg_94_set.insert("LegSymbol_t_1642852323");
    Leg_94.add_attribute("Sfx", "CD"); // 1
    Leg_94_set.insert("CD");
    Leg_94.add_attribute("ID", "LegSecurityID_t_885795258"); // 1
    Leg_94_set.insert("LegSecurityID_t_885795258");
    Leg_94.add_attribute("Src", "6"); // 1
    Leg_94_set.insert("6");
    Leg_94.add_attribute("Prod", "5"); // 1
    Leg_94_set.insert("5");
    Leg_94.add_attribute("CFI", "LegCFICode_t_411914873"); // 1
    Leg_94_set.insert("LegCFICode_t_411914873");
    Leg_94.add_attribute("SecTyp", "TRAN"); // 1
    Leg_94_set.insert("TRAN");
    Leg_94.add_attribute("SecSubTyp", "LegSecuritySubType_t_1324020354"); // 1
    Leg_94_set.insert("LegSecuritySubType_t_1324020354");
    Leg_94.add_attribute("MMY", "1789525321"); // 1
    Leg_94_set.insert("1789525321");
    Leg_94.add_attribute("Mat", "LegMaturityDate_t_1045634570"); // 1
    Leg_94_set.insert("LegMaturityDate_t_1045634570");
    Leg_94.add_attribute("MatTm", "1122477185"); // 1
    Leg_94_set.insert("1122477185");
    Leg_94.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1321380008"); // 1
    Leg_94_set.insert("LegCouponPaymentDate_t_1321380008");
    Leg_94.add_attribute("Issued", "LegIssueDate_t_1517249262"); // 1
    Leg_94_set.insert("LegIssueDate_t_1517249262");
    Leg_94.add_attribute("RepoCollSecTyp", "672131163"); // 1
    Leg_94_set.insert("672131163");
    Leg_94.add_attribute("RepoTrm", "689188131"); // 1
    Leg_94_set.insert("689188131");
    Leg_94.add_attribute("RepoRt", "15669528.920000"); // 1
    Leg_94_set.insert("15669528.920000");
    Leg_94.add_attribute("Fctr", "19163772.720000"); // 1
    Leg_94_set.insert("19163772.720000");
    Leg_94.add_attribute("CrdRtg", "LegCreditRating_t_1477743232"); // 1
    Leg_94_set.insert("LegCreditRating_t_1477743232");
    Leg_94.add_attribute("Rgstry", "LegInstrRegistry_t_1667807383"); // 1
    Leg_94_set.insert("LegInstrRegistry_t_1667807383");
    Leg_94.add_attribute("Ctry", "2057711676"); // 1
    Leg_94_set.insert("2057711676");
    Leg_94.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_921181545"); // 1
    Leg_94_set.insert("LegStateOrProvinceOfIssue_t_921181545");
    Leg_94.add_attribute("Lcl", "LegLocaleOfIssue_t_1753392475"); // 1
    Leg_94_set.insert("LegLocaleOfIssue_t_1753392475");
    Leg_94.add_attribute("Redeem", "LegRedemptionDate_t_398811412"); // 1
    Leg_94_set.insert("LegRedemptionDate_t_398811412");
    Leg_94.add_attribute("Strk", "20743404.110000"); // 1
    Leg_94_set.insert("20743404.110000");
    Leg_94.add_attribute("StrkCcy", "USD"); // 1
    Leg_94_set.insert("USD");
    Leg_94.add_attribute("OptA", "42650917"); // 1
    Leg_94_set.insert("42650917");
    Leg_94.add_attribute("Cmult", "9060609.740000"); // 1
    Leg_94_set.insert("9060609.740000");
    Leg_94.add_attribute("MultTyp", "2"); // 1
    Leg_94_set.insert("2");
    Leg_94.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_94_set.insert("3");
    Leg_94.add_attribute("UOM", "lbs"); // 1
    Leg_94_set.insert("lbs");
    Leg_94.add_attribute("UOMQty", "12246870.250000"); // 1
    Leg_94_set.insert("12246870.250000");
    Leg_94.add_attribute("PxUOM", "Bcf"); // 1
    Leg_94_set.insert("Bcf");
    Leg_94.add_attribute("PxUOMQty", "11897577.680000"); // 1
    Leg_94_set.insert("11897577.680000");
    Leg_94.add_attribute("TmUnit", "Mo"); // 1
    Leg_94_set.insert("Mo");
    Leg_94.add_attribute("ExerStyle", "0"); // 1
    Leg_94_set.insert("0");
    Leg_94.add_attribute("CpnRt", "16016726.410000"); // 1
    Leg_94_set.insert("16016726.410000");
    Leg_94.add_attribute("Exch", "LegSecurityExchange_t_508514916"); // 1
    Leg_94_set.insert("LegSecurityExchange_t_508514916");
    Leg_94.add_attribute("Issr", "LegIssuer_t_1186626559"); // 1
    Leg_94_set.insert("LegIssuer_t_1186626559");
    Leg_94.add_attribute("EncLegIssrLen", "1243714314"); // 1
    Leg_94_set.insert("1243714314");
    Leg_94.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1554149486"); // 1
    Leg_94_set.insert("EncodedLegIssuer_t_1554149486");
    Leg_94.add_attribute("Desc", "LegSecurityDesc_t_161620096"); // 1
    Leg_94_set.insert("LegSecurityDesc_t_161620096");
    Leg_94.add_attribute("EncLegSecDescLen", "417610674"); // 1
    Leg_94_set.insert("417610674");
    Leg_94.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_923915100"); // 1
    Leg_94_set.insert("EncodedLegSecurityDesc_t_923915100");
    Leg_94.add_attribute("RatioQty", "8337512.590000"); // 1
    Leg_94_set.insert("8337512.590000");
    Leg_94.add_attribute("Side", "6"); // 1
    Leg_94_set.insert("6");
    Leg_94.add_attribute("Ccy", "CAN"); // 1
    Leg_94_set.insert("CAN");
    Leg_94.add_attribute("Pool", "LegPool_t_437058389"); // 1
    Leg_94_set.insert("LegPool_t_437058389");
    Leg_94.add_attribute("Dated", "LegDatedDate_t_2011191728"); // 1
    Leg_94_set.insert("LegDatedDate_t_2011191728");
    Leg_94.add_attribute("CSetMo", "512872911"); // 1
    Leg_94_set.insert("512872911");
    Leg_94.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1358239935"); // 1
    Leg_94_set.insert("LegInterestAccrualDate_t_1358239935");
    Leg_94.add_attribute("PutCall", "1617100555"); // 1
    Leg_94_set.insert("1617100555");
    Leg_94.add_attribute("LegOptionRatio", "9116843.230000"); // 1
    Leg_94_set.insert("9116843.230000");
    Leg_94.add_attribute("Px", "12850966.980000"); // 1
    Leg_94_set.insert("12850966.980000");
    all_values.push_back(Leg_94_set);
    all_compo_names.insert("Leg_94_set");

    {
      xml_element LegAID_89{"LegAID"};
      multiset<string> LegAID_89_set;
      LegAID_89.add_attribute("SecAltID", "LegSecurityAltID_t_1410027410"); // 2
      LegAID_89_set.insert("LegSecurityAltID_t_1410027410");
      LegAID_89.add_attribute("SecAltIDSrc", "7"); // 2
      LegAID_89_set.insert("7");
      all_values.push_back(LegAID_89_set);
      all_compo_names.insert("LegAID_89_set");

      Leg_94.add_element(LegAID_89);
    }
    elt.add_element(Leg_94);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_31{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_31_set;
    SprdBnchmkCurve_31.add_attribute("Spread", "13277476.150000"); // 1
    SprdBnchmkCurve_31_set.insert("13277476.150000");
    SprdBnchmkCurve_31.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_31_set.insert("CAN");
    SprdBnchmkCurve_31.add_attribute("Name", "FutureSWAP"); // 1
    SprdBnchmkCurve_31_set.insert("FutureSWAP");
    SprdBnchmkCurve_31.add_attribute("Point", "BenchmarkCurvePoint_t_472567246"); // 1
    SprdBnchmkCurve_31_set.insert("BenchmarkCurvePoint_t_472567246");
    SprdBnchmkCurve_31.add_attribute("Px", "5422521.640000"); // 1
    SprdBnchmkCurve_31_set.insert("5422521.640000");
    SprdBnchmkCurve_31.add_attribute("PxTyp", "14"); // 1
    SprdBnchmkCurve_31_set.insert("14");
    SprdBnchmkCurve_31.add_attribute("SecID", "BenchmarkSecurityID_t_1662325014"); // 1
    SprdBnchmkCurve_31_set.insert("BenchmarkSecurityID_t_1662325014");
    SprdBnchmkCurve_31.add_attribute("SecIDSrc", "L"); // 1
    SprdBnchmkCurve_31_set.insert("L");
    all_values.push_back(SprdBnchmkCurve_31_set);
    all_compo_names.insert("SprdBnchmkCurve_31_set");

    elt.add_element(SprdBnchmkCurve_31);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_26{"Yield"};
    multiset<string> Yield_26_set;
    Yield_26.add_attribute("Typ", "TAXEQUIV"); // 1
    Yield_26_set.insert("TAXEQUIV");
    Yield_26.add_attribute("Yld", "11165140.070000"); // 1
    Yield_26_set.insert("11165140.070000");
    Yield_26.add_attribute("CalcDt", "YieldCalcDate_t_1934076457"); // 1
    Yield_26_set.insert("YieldCalcDate_t_1934076457");
    Yield_26.add_attribute("RedDt", "YieldRedemptionDate_t_559602337"); // 1
    Yield_26_set.insert("YieldRedemptionDate_t_559602337");
    Yield_26.add_attribute("RedPx", "2127446.730000"); // 1
    Yield_26_set.insert("2127446.730000");
    Yield_26.add_attribute("RedPxTyp", "10"); // 1
    Yield_26_set.insert("10");
    all_values.push_back(Yield_26_set);
    all_compo_names.insert("Yield_26_set");

    elt.add_element(Yield_26);
  } // end Yield
  { // MktSegGrp
    xml_element MktSegGrp_3{"MktSegGrp"};
    multiset<string> MktSegGrp_3_set;
    MktSegGrp_3.add_attribute("MktID", "MarketID_t_630355347"); // 1
    MktSegGrp_3_set.insert("MarketID_t_630355347");
    MktSegGrp_3.add_attribute("MktSegID", "MarketSegmentID_t_117173747"); // 1
    MktSegGrp_3_set.insert("MarketSegmentID_t_117173747");
    all_values.push_back(MktSegGrp_3_set);
    all_compo_names.insert("MktSegGrp_3_set");

    {
      xml_element SecTrdgRules_3{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_5{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_5_set;
        BaseTrdgRules_5.add_attribute("ExpirationCycle", "1"); // 3
        BaseTrdgRules_5_set.insert("1");
        BaseTrdgRules_5.add_attribute("MinTrdVol", "17371541.520000"); // 3
        BaseTrdgRules_5_set.insert("17371541.520000");
        BaseTrdgRules_5.add_attribute("MaxTrdVol", "4605580.920000"); // 3
        BaseTrdgRules_5_set.insert("4605580.920000");
        BaseTrdgRules_5.add_attribute("MxPxVar", "101349.280000"); // 3
        BaseTrdgRules_5_set.insert("101349.280000");
        BaseTrdgRules_5.add_attribute("ImpldMktInd", "2"); // 3
        BaseTrdgRules_5_set.insert("2");
        BaseTrdgRules_5.add_attribute("TrdCcy", "GBP"); // 3
        BaseTrdgRules_5_set.insert("GBP");
        BaseTrdgRules_5.add_attribute("RndLot", "13849688.290000"); // 3
        BaseTrdgRules_5_set.insert("13849688.290000");
        BaseTrdgRules_5.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_5_set.insert("1");
        BaseTrdgRules_5.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_5_set.insert("3");
        BaseTrdgRules_5.add_attribute("PxTyp", "13"); // 3
        BaseTrdgRules_5_set.insert("13");
        all_values.push_back(BaseTrdgRules_5_set);
        all_compo_names.insert("BaseTrdgRules_5_set");

        {
          xml_element TickRules_5{"TickRules"};
          multiset<string> TickRules_5_set;
          TickRules_5.add_attribute("StartTickPxRng", "12039104.900000"); // 4
          TickRules_5_set.insert("12039104.900000");
          TickRules_5.add_attribute("EndTickPxRng", "11704226.010000"); // 4
          TickRules_5_set.insert("11704226.010000");
          TickRules_5.add_attribute("TickIncr", "18503294.940000"); // 4
          TickRules_5_set.insert("18503294.940000");
          TickRules_5.add_attribute("TickRuleTyp", "1"); // 4
          TickRules_5_set.insert("1");
          all_values.push_back(TickRules_5_set);
          all_compo_names.insert("TickRules_5_set");

          BaseTrdgRules_5.add_element(TickRules_5);
        }
        {
          xml_element LotTypeRules_5{"LotTypeRules"};
          multiset<string> LotTypeRules_5_set;
          LotTypeRules_5.add_attribute("LotTyp", "2"); // 4
          LotTypeRules_5_set.insert("2");
          LotTypeRules_5.add_attribute("MinLotSz", "15027544.090000"); // 4
          LotTypeRules_5_set.insert("15027544.090000");
          all_values.push_back(LotTypeRules_5_set);
          all_compo_names.insert("LotTypeRules_5_set");

          BaseTrdgRules_5.add_element(LotTypeRules_5);
        }
        {
          xml_element PxLmts_5{"PxLmts"};
          multiset<string> PxLmts_5_set;
          PxLmts_5.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_5_set.insert("0");
          PxLmts_5.add_attribute("LowLmtPx", "10302399.050000"); // 4
          PxLmts_5_set.insert("10302399.050000");
          PxLmts_5.add_attribute("HiLmtPx", "10131239.820000"); // 4
          PxLmts_5_set.insert("10131239.820000");
          PxLmts_5.add_attribute("TrdgRefPx", "13599238.390000"); // 4
          PxLmts_5_set.insert("13599238.390000");
          all_values.push_back(PxLmts_5_set);
          all_compo_names.insert("PxLmts_5_set");

          BaseTrdgRules_5.add_element(PxLmts_5);
        }
        SecTrdgRules_3.add_element(BaseTrdgRules_5);
      }
      {
        xml_element TrdgSesRulesGrp_3{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_3_set;
        TrdgSesRulesGrp_3.add_attribute("SesID", "5"); // 3
        TrdgSesRulesGrp_3_set.insert("5");
        TrdgSesRulesGrp_3.add_attribute("SesSub", "4"); // 3
        TrdgSesRulesGrp_3_set.insert("4");
        all_values.push_back(TrdgSesRulesGrp_3_set);
        all_compo_names.insert("TrdgSesRulesGrp_3_set");

        {
          xml_element TrdgSesRules_3{"TrdgSesRules"};
          {
            xml_element OrdTypRules_9{"OrdTypRules"};
            multiset<string> OrdTypRules_9_set;
            OrdTypRules_9.add_attribute("OrdTyp", "Q"); // 5
            OrdTypRules_9_set.insert("Q");
            all_values.push_back(OrdTypRules_9_set);
            all_compo_names.insert("OrdTypRules_9_set");

            TrdgSesRules_3.add_element(OrdTypRules_9);
          }
          {
            xml_element TmInForceRules_5{"TmInForceRules"};
            multiset<string> TmInForceRules_5_set;
            TmInForceRules_5.add_attribute("TmInForce", "7"); // 5
            TmInForceRules_5_set.insert("7");
            all_values.push_back(TmInForceRules_5_set);
            all_compo_names.insert("TmInForceRules_5_set");

            TrdgSesRules_3.add_element(TmInForceRules_5);
          }
          {
            xml_element ExecInstRules_8{"ExecInstRules"};
            multiset<string> ExecInstRules_8_set;
            ExecInstRules_8.add_attribute("ExecInstValu", "J"); // 5
            ExecInstRules_8_set.insert("J");
            all_values.push_back(ExecInstRules_8_set);
            all_compo_names.insert("ExecInstRules_8_set");

            TrdgSesRules_3.add_element(ExecInstRules_8);
          }
          {
            xml_element MtchRules_3{"MtchRules"};
            multiset<string> MtchRules_3_set;
            MtchRules_3.add_attribute("MtchAlgo", "MatchAlgorithm_t_541698872"); // 5
            MtchRules_3_set.insert("MatchAlgorithm_t_541698872");
            MtchRules_3.add_attribute("MtchTyp", "M6"); // 5
            MtchRules_3_set.insert("M6");
            all_values.push_back(MtchRules_3_set);
            all_compo_names.insert("MtchRules_3_set");

            TrdgSesRules_3.add_element(MtchRules_3);
          }
          {
            xml_element MDFeedTyps_3{"MDFeedTyps"};
            multiset<string> MDFeedTyps_3_set;
            MDFeedTyps_3.add_attribute("MDFeedTyp", "MDFeedType_t_1666924530"); // 5
            MDFeedTyps_3_set.insert("MDFeedType_t_1666924530");
            MDFeedTyps_3.add_attribute("MktDepth", "1172054220"); // 5
            MDFeedTyps_3_set.insert("1172054220");
            MDFeedTyps_3.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_3_set.insert("2");
            all_values.push_back(MDFeedTyps_3_set);
            all_compo_names.insert("MDFeedTyps_3_set");

            TrdgSesRules_3.add_element(MDFeedTyps_3);
          }
          TrdgSesRulesGrp_3.add_element(TrdgSesRules_3);
        }
        SecTrdgRules_3.add_element(TrdgSesRulesGrp_3);
      }
      {
        xml_element Attrb_16{"Attrb"};
        multiset<string> Attrb_16_set;
        Attrb_16.add_attribute("Typ", "14"); // 3
        Attrb_16_set.insert("14");
        Attrb_16.add_attribute("Val", "NestedInstrAttribValue_t_761724724"); // 3
        Attrb_16_set.insert("NestedInstrAttribValue_t_761724724");
        all_values.push_back(Attrb_16_set);
        all_compo_names.insert("Attrb_16_set");

        SecTrdgRules_3.add_element(Attrb_16);
      }
      MktSegGrp_3.add_element(SecTrdgRules_3);
    }
    {
      xml_element StrkRules_3{"StrkRules"};
      multiset<string> StrkRules_3_set;
      StrkRules_3.add_attribute("StrkRule", "StrikeRuleID_t_2013384742"); // 2
      StrkRules_3_set.insert("StrikeRuleID_t_2013384742");
      StrkRules_3.add_attribute("StartStrkPxRng", "10845495.030000"); // 2
      StrkRules_3_set.insert("10845495.030000");
      StrkRules_3.add_attribute("EndStrkPxRng", "7884536.180000"); // 2
      StrkRules_3_set.insert("7884536.180000");
      StrkRules_3.add_attribute("StrkIncr", "1901672.670000"); // 2
      StrkRules_3_set.insert("1901672.670000");
      StrkRules_3.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_3_set.insert("2");
      all_values.push_back(StrkRules_3_set);
      all_compo_names.insert("StrkRules_3_set");

      {
        xml_element MatRules_3{"MatRules"};
        multiset<string> MatRules_3_set;
        MatRules_3.add_attribute("MatRuleID", "MaturityRuleID_t_25938799"); // 3
        MatRules_3_set.insert("MaturityRuleID_t_25938799");
        MatRules_3.add_attribute("MMYFmt", "1"); // 3
        MatRules_3_set.insert("1");
        MatRules_3.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_3_set.insert("3");
        MatRules_3.add_attribute("StartMMY", "548520678"); // 3
        MatRules_3_set.insert("548520678");
        MatRules_3.add_attribute("EndMMY", "1187960836"); // 3
        MatRules_3_set.insert("1187960836");
        MatRules_3.add_attribute("MMYIncr", "2065188460"); // 3
        MatRules_3_set.insert("2065188460");
        all_values.push_back(MatRules_3_set);
        all_compo_names.insert("MatRules_3_set");

        StrkRules_3.add_element(MatRules_3);
      }
      MktSegGrp_3.add_element(StrkRules_3);
    }
    elt.add_element(MktSegGrp_3);
  } // end MktSegGrp
  { // MktSegGrp
    xml_element MktSegGrp_4{"MktSegGrp"};
    multiset<string> MktSegGrp_4_set;
    MktSegGrp_4.add_attribute("MktID", "MarketID_t_251366524"); // 1
    MktSegGrp_4_set.insert("MarketID_t_251366524");
    MktSegGrp_4.add_attribute("MktSegID", "MarketSegmentID_t_412992415"); // 1
    MktSegGrp_4_set.insert("MarketSegmentID_t_412992415");
    all_values.push_back(MktSegGrp_4_set);
    all_compo_names.insert("MktSegGrp_4_set");

    {
      xml_element SecTrdgRules_4{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_6{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_6_set;
        BaseTrdgRules_6.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_6_set.insert("0");
        BaseTrdgRules_6.add_attribute("MinTrdVol", "17541209.340000"); // 3
        BaseTrdgRules_6_set.insert("17541209.340000");
        BaseTrdgRules_6.add_attribute("MaxTrdVol", "1105912.400000"); // 3
        BaseTrdgRules_6_set.insert("1105912.400000");
        BaseTrdgRules_6.add_attribute("MxPxVar", "14359324.590000"); // 3
        BaseTrdgRules_6_set.insert("14359324.590000");
        BaseTrdgRules_6.add_attribute("ImpldMktInd", "0"); // 3
        BaseTrdgRules_6_set.insert("0");
        BaseTrdgRules_6.add_attribute("TrdCcy", "EUR"); // 3
        BaseTrdgRules_6_set.insert("EUR");
        BaseTrdgRules_6.add_attribute("RndLot", "10058610.270000"); // 3
        BaseTrdgRules_6_set.insert("10058610.270000");
        BaseTrdgRules_6.add_attribute("MlegModel", "2"); // 3
        BaseTrdgRules_6_set.insert("2");
        BaseTrdgRules_6.add_attribute("MlegPxMeth", "5"); // 3
        BaseTrdgRules_6_set.insert("5");
        BaseTrdgRules_6.add_attribute("PxTyp", "9"); // 3
        BaseTrdgRules_6_set.insert("9");
        all_values.push_back(BaseTrdgRules_6_set);
        all_compo_names.insert("BaseTrdgRules_6_set");

        {
          xml_element TickRules_6{"TickRules"};
          multiset<string> TickRules_6_set;
          TickRules_6.add_attribute("StartTickPxRng", "1936845.030000"); // 4
          TickRules_6_set.insert("1936845.030000");
          TickRules_6.add_attribute("EndTickPxRng", "11273301.190000"); // 4
          TickRules_6_set.insert("11273301.190000");
          TickRules_6.add_attribute("TickIncr", "14710040.060000"); // 4
          TickRules_6_set.insert("14710040.060000");
          TickRules_6.add_attribute("TickRuleTyp", "3"); // 4
          TickRules_6_set.insert("3");
          all_values.push_back(TickRules_6_set);
          all_compo_names.insert("TickRules_6_set");

          BaseTrdgRules_6.add_element(TickRules_6);
        }
        {
          xml_element LotTypeRules_6{"LotTypeRules"};
          multiset<string> LotTypeRules_6_set;
          LotTypeRules_6.add_attribute("LotTyp", "2"); // 4
          LotTypeRules_6_set.insert("2");
          LotTypeRules_6.add_attribute("MinLotSz", "3979349.330000"); // 4
          LotTypeRules_6_set.insert("3979349.330000");
          all_values.push_back(LotTypeRules_6_set);
          all_compo_names.insert("LotTypeRules_6_set");

          BaseTrdgRules_6.add_element(LotTypeRules_6);
        }
        {
          xml_element PxLmts_6{"PxLmts"};
          multiset<string> PxLmts_6_set;
          PxLmts_6.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_6_set.insert("1");
          PxLmts_6.add_attribute("LowLmtPx", "3985742.160000"); // 4
          PxLmts_6_set.insert("3985742.160000");
          PxLmts_6.add_attribute("HiLmtPx", "14824844.360000"); // 4
          PxLmts_6_set.insert("14824844.360000");
          PxLmts_6.add_attribute("TrdgRefPx", "7684334.180000"); // 4
          PxLmts_6_set.insert("7684334.180000");
          all_values.push_back(PxLmts_6_set);
          all_compo_names.insert("PxLmts_6_set");

          BaseTrdgRules_6.add_element(PxLmts_6);
        }
        SecTrdgRules_4.add_element(BaseTrdgRules_6);
      }
      {
        xml_element TrdgSesRulesGrp_4{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_4_set;
        TrdgSesRulesGrp_4.add_attribute("SesID", "4"); // 3
        TrdgSesRulesGrp_4_set.insert("4");
        TrdgSesRulesGrp_4.add_attribute("SesSub", "6"); // 3
        TrdgSesRulesGrp_4_set.insert("6");
        all_values.push_back(TrdgSesRulesGrp_4_set);
        all_compo_names.insert("TrdgSesRulesGrp_4_set");

        {
          xml_element TrdgSesRules_4{"TrdgSesRules"};
          {
            xml_element OrdTypRules_10{"OrdTypRules"};
            multiset<string> OrdTypRules_10_set;
            OrdTypRules_10.add_attribute("OrdTyp", "A"); // 5
            OrdTypRules_10_set.insert("A");
            all_values.push_back(OrdTypRules_10_set);
            all_compo_names.insert("OrdTypRules_10_set");

            TrdgSesRules_4.add_element(OrdTypRules_10);
          }
          {
            xml_element TmInForceRules_6{"TmInForceRules"};
            multiset<string> TmInForceRules_6_set;
            TmInForceRules_6.add_attribute("TmInForce", "9"); // 5
            TmInForceRules_6_set.insert("9");
            all_values.push_back(TmInForceRules_6_set);
            all_compo_names.insert("TmInForceRules_6_set");

            TrdgSesRules_4.add_element(TmInForceRules_6);
          }
          {
            xml_element ExecInstRules_9{"ExecInstRules"};
            multiset<string> ExecInstRules_9_set;
            ExecInstRules_9.add_attribute("ExecInstValu", "t"); // 5
            ExecInstRules_9_set.insert("t");
            all_values.push_back(ExecInstRules_9_set);
            all_compo_names.insert("ExecInstRules_9_set");

            TrdgSesRules_4.add_element(ExecInstRules_9);
          }
          {
            xml_element MtchRules_4{"MtchRules"};
            multiset<string> MtchRules_4_set;
            MtchRules_4.add_attribute("MtchAlgo", "MatchAlgorithm_t_1342892896"); // 5
            MtchRules_4_set.insert("MatchAlgorithm_t_1342892896");
            MtchRules_4.add_attribute("MtchTyp", "M1"); // 5
            MtchRules_4_set.insert("M1");
            all_values.push_back(MtchRules_4_set);
            all_compo_names.insert("MtchRules_4_set");

            TrdgSesRules_4.add_element(MtchRules_4);
          }
          {
            xml_element MDFeedTyps_4{"MDFeedTyps"};
            multiset<string> MDFeedTyps_4_set;
            MDFeedTyps_4.add_attribute("MDFeedTyp", "MDFeedType_t_1755028803"); // 5
            MDFeedTyps_4_set.insert("MDFeedType_t_1755028803");
            MDFeedTyps_4.add_attribute("MktDepth", "1594259420"); // 5
            MDFeedTyps_4_set.insert("1594259420");
            MDFeedTyps_4.add_attribute("MDBkTyp", "1"); // 5
            MDFeedTyps_4_set.insert("1");
            all_values.push_back(MDFeedTyps_4_set);
            all_compo_names.insert("MDFeedTyps_4_set");

            TrdgSesRules_4.add_element(MDFeedTyps_4);
          }
          TrdgSesRulesGrp_4.add_element(TrdgSesRules_4);
        }
        SecTrdgRules_4.add_element(TrdgSesRulesGrp_4);
      }
      {
        xml_element Attrb_17{"Attrb"};
        multiset<string> Attrb_17_set;
        Attrb_17.add_attribute("Typ", "29"); // 3
        Attrb_17_set.insert("29");
        Attrb_17.add_attribute("Val", "NestedInstrAttribValue_t_1200896706"); // 3
        Attrb_17_set.insert("NestedInstrAttribValue_t_1200896706");
        all_values.push_back(Attrb_17_set);
        all_compo_names.insert("Attrb_17_set");

        SecTrdgRules_4.add_element(Attrb_17);
      }
      MktSegGrp_4.add_element(SecTrdgRules_4);
    }
    {
      xml_element StrkRules_4{"StrkRules"};
      multiset<string> StrkRules_4_set;
      StrkRules_4.add_attribute("StrkRule", "StrikeRuleID_t_136852673"); // 2
      StrkRules_4_set.insert("StrikeRuleID_t_136852673");
      StrkRules_4.add_attribute("StartStrkPxRng", "14491701.680000"); // 2
      StrkRules_4_set.insert("14491701.680000");
      StrkRules_4.add_attribute("EndStrkPxRng", "18206579.740000"); // 2
      StrkRules_4_set.insert("18206579.740000");
      StrkRules_4.add_attribute("StrkIncr", "16073677.520000"); // 2
      StrkRules_4_set.insert("16073677.520000");
      StrkRules_4.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_4_set.insert("1");
      all_values.push_back(StrkRules_4_set);
      all_compo_names.insert("StrkRules_4_set");

      {
        xml_element MatRules_4{"MatRules"};
        multiset<string> MatRules_4_set;
        MatRules_4.add_attribute("MatRuleID", "MaturityRuleID_t_679035354"); // 3
        MatRules_4_set.insert("MaturityRuleID_t_679035354");
        MatRules_4.add_attribute("MMYFmt", "0"); // 3
        MatRules_4_set.insert("0");
        MatRules_4.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_4_set.insert("2");
        MatRules_4.add_attribute("StartMMY", "483114830"); // 3
        MatRules_4_set.insert("483114830");
        MatRules_4.add_attribute("EndMMY", "1453037886"); // 3
        MatRules_4_set.insert("1453037886");
        MatRules_4.add_attribute("MMYIncr", "1864944114"); // 3
        MatRules_4_set.insert("1864944114");
        all_values.push_back(MatRules_4_set);
        all_compo_names.insert("MatRules_4_set");

        StrkRules_4.add_element(MatRules_4);
      }
      MktSegGrp_4.add_element(StrkRules_4);
    }
    elt.add_element(MktSegGrp_4);
  } // end MktSegGrp
  { // MktSegGrp
    xml_element MktSegGrp_5{"MktSegGrp"};
    multiset<string> MktSegGrp_5_set;
    MktSegGrp_5.add_attribute("MktID", "MarketID_t_1954118836"); // 1
    MktSegGrp_5_set.insert("MarketID_t_1954118836");
    MktSegGrp_5.add_attribute("MktSegID", "MarketSegmentID_t_671292961"); // 1
    MktSegGrp_5_set.insert("MarketSegmentID_t_671292961");
    all_values.push_back(MktSegGrp_5_set);
    all_compo_names.insert("MktSegGrp_5_set");

    {
      xml_element SecTrdgRules_5{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_7{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_7_set;
        BaseTrdgRules_7.add_attribute("ExpirationCycle", "1"); // 3
        BaseTrdgRules_7_set.insert("1");
        BaseTrdgRules_7.add_attribute("MinTrdVol", "2045701.210000"); // 3
        BaseTrdgRules_7_set.insert("2045701.210000");
        BaseTrdgRules_7.add_attribute("MaxTrdVol", "6512727.600000"); // 3
        BaseTrdgRules_7_set.insert("6512727.600000");
        BaseTrdgRules_7.add_attribute("MxPxVar", "6487078.030000"); // 3
        BaseTrdgRules_7_set.insert("6487078.030000");
        BaseTrdgRules_7.add_attribute("ImpldMktInd", "1"); // 3
        BaseTrdgRules_7_set.insert("1");
        BaseTrdgRules_7.add_attribute("TrdCcy", "JPY"); // 3
        BaseTrdgRules_7_set.insert("JPY");
        BaseTrdgRules_7.add_attribute("RndLot", "4821290.410000"); // 3
        BaseTrdgRules_7_set.insert("4821290.410000");
        BaseTrdgRules_7.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_7_set.insert("1");
        BaseTrdgRules_7.add_attribute("MlegPxMeth", "4"); // 3
        BaseTrdgRules_7_set.insert("4");
        BaseTrdgRules_7.add_attribute("PxTyp", "14"); // 3
        BaseTrdgRules_7_set.insert("14");
        all_values.push_back(BaseTrdgRules_7_set);
        all_compo_names.insert("BaseTrdgRules_7_set");

        {
          xml_element TickRules_7{"TickRules"};
          multiset<string> TickRules_7_set;
          TickRules_7.add_attribute("StartTickPxRng", "14094876.440000"); // 4
          TickRules_7_set.insert("14094876.440000");
          TickRules_7.add_attribute("EndTickPxRng", "14235101.340000"); // 4
          TickRules_7_set.insert("14235101.340000");
          TickRules_7.add_attribute("TickIncr", "19269981.880000"); // 4
          TickRules_7_set.insert("19269981.880000");
          TickRules_7.add_attribute("TickRuleTyp", "1"); // 4
          TickRules_7_set.insert("1");
          all_values.push_back(TickRules_7_set);
          all_compo_names.insert("TickRules_7_set");

          BaseTrdgRules_7.add_element(TickRules_7);
        }
        {
          xml_element LotTypeRules_7{"LotTypeRules"};
          multiset<string> LotTypeRules_7_set;
          LotTypeRules_7.add_attribute("LotTyp", "4"); // 4
          LotTypeRules_7_set.insert("4");
          LotTypeRules_7.add_attribute("MinLotSz", "19402358.970000"); // 4
          LotTypeRules_7_set.insert("19402358.970000");
          all_values.push_back(LotTypeRules_7_set);
          all_compo_names.insert("LotTypeRules_7_set");

          BaseTrdgRules_7.add_element(LotTypeRules_7);
        }
        {
          xml_element PxLmts_7{"PxLmts"};
          multiset<string> PxLmts_7_set;
          PxLmts_7.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_7_set.insert("0");
          PxLmts_7.add_attribute("LowLmtPx", "15866242.400000"); // 4
          PxLmts_7_set.insert("15866242.400000");
          PxLmts_7.add_attribute("HiLmtPx", "12419224.170000"); // 4
          PxLmts_7_set.insert("12419224.170000");
          PxLmts_7.add_attribute("TrdgRefPx", "17303344.490000"); // 4
          PxLmts_7_set.insert("17303344.490000");
          all_values.push_back(PxLmts_7_set);
          all_compo_names.insert("PxLmts_7_set");

          BaseTrdgRules_7.add_element(PxLmts_7);
        }
        SecTrdgRules_5.add_element(BaseTrdgRules_7);
      }
      {
        xml_element TrdgSesRulesGrp_5{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_5_set;
        TrdgSesRulesGrp_5.add_attribute("SesID", "3"); // 3
        TrdgSesRulesGrp_5_set.insert("3");
        TrdgSesRulesGrp_5.add_attribute("SesSub", "4"); // 3
        TrdgSesRulesGrp_5_set.insert("4");
        all_values.push_back(TrdgSesRulesGrp_5_set);
        all_compo_names.insert("TrdgSesRulesGrp_5_set");

        {
          xml_element TrdgSesRules_5{"TrdgSesRules"};
          {
            xml_element OrdTypRules_11{"OrdTypRules"};
            multiset<string> OrdTypRules_11_set;
            OrdTypRules_11.add_attribute("OrdTyp", "4"); // 5
            OrdTypRules_11_set.insert("4");
            all_values.push_back(OrdTypRules_11_set);
            all_compo_names.insert("OrdTypRules_11_set");

            TrdgSesRules_5.add_element(OrdTypRules_11);
          }
          {
            xml_element TmInForceRules_7{"TmInForceRules"};
            multiset<string> TmInForceRules_7_set;
            TmInForceRules_7.add_attribute("TmInForce", "9"); // 5
            TmInForceRules_7_set.insert("9");
            all_values.push_back(TmInForceRules_7_set);
            all_compo_names.insert("TmInForceRules_7_set");

            TrdgSesRules_5.add_element(TmInForceRules_7);
          }
          {
            xml_element ExecInstRules_10{"ExecInstRules"};
            multiset<string> ExecInstRules_10_set;
            ExecInstRules_10.add_attribute("ExecInstValu", "X"); // 5
            ExecInstRules_10_set.insert("X");
            all_values.push_back(ExecInstRules_10_set);
            all_compo_names.insert("ExecInstRules_10_set");

            TrdgSesRules_5.add_element(ExecInstRules_10);
          }
          {
            xml_element MtchRules_5{"MtchRules"};
            multiset<string> MtchRules_5_set;
            MtchRules_5.add_attribute("MtchAlgo", "MatchAlgorithm_t_745000985"); // 5
            MtchRules_5_set.insert("MatchAlgorithm_t_745000985");
            MtchRules_5.add_attribute("MtchTyp", "A4"); // 5
            MtchRules_5_set.insert("A4");
            all_values.push_back(MtchRules_5_set);
            all_compo_names.insert("MtchRules_5_set");

            TrdgSesRules_5.add_element(MtchRules_5);
          }
          {
            xml_element MDFeedTyps_5{"MDFeedTyps"};
            multiset<string> MDFeedTyps_5_set;
            MDFeedTyps_5.add_attribute("MDFeedTyp", "MDFeedType_t_595450007"); // 5
            MDFeedTyps_5_set.insert("MDFeedType_t_595450007");
            MDFeedTyps_5.add_attribute("MktDepth", "551636173"); // 5
            MDFeedTyps_5_set.insert("551636173");
            MDFeedTyps_5.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_5_set.insert("3");
            all_values.push_back(MDFeedTyps_5_set);
            all_compo_names.insert("MDFeedTyps_5_set");

            TrdgSesRules_5.add_element(MDFeedTyps_5);
          }
          TrdgSesRulesGrp_5.add_element(TrdgSesRules_5);
        }
        SecTrdgRules_5.add_element(TrdgSesRulesGrp_5);
      }
      {
        xml_element Attrb_18{"Attrb"};
        multiset<string> Attrb_18_set;
        Attrb_18.add_attribute("Typ", "24"); // 3
        Attrb_18_set.insert("24");
        Attrb_18.add_attribute("Val", "NestedInstrAttribValue_t_756206294"); // 3
        Attrb_18_set.insert("NestedInstrAttribValue_t_756206294");
        all_values.push_back(Attrb_18_set);
        all_compo_names.insert("Attrb_18_set");

        SecTrdgRules_5.add_element(Attrb_18);
      }
      MktSegGrp_5.add_element(SecTrdgRules_5);
    }
    {
      xml_element StrkRules_5{"StrkRules"};
      multiset<string> StrkRules_5_set;
      StrkRules_5.add_attribute("StrkRule", "StrikeRuleID_t_786498039"); // 2
      StrkRules_5_set.insert("StrikeRuleID_t_786498039");
      StrkRules_5.add_attribute("StartStrkPxRng", "14942913.980000"); // 2
      StrkRules_5_set.insert("14942913.980000");
      StrkRules_5.add_attribute("EndStrkPxRng", "2957772.040000"); // 2
      StrkRules_5_set.insert("2957772.040000");
      StrkRules_5.add_attribute("StrkIncr", "587205.690000"); // 2
      StrkRules_5_set.insert("587205.690000");
      StrkRules_5.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_5_set.insert("1");
      all_values.push_back(StrkRules_5_set);
      all_compo_names.insert("StrkRules_5_set");

      {
        xml_element MatRules_5{"MatRules"};
        multiset<string> MatRules_5_set;
        MatRules_5.add_attribute("MatRuleID", "MaturityRuleID_t_777906245"); // 3
        MatRules_5_set.insert("MaturityRuleID_t_777906245");
        MatRules_5.add_attribute("MMYFmt", "1"); // 3
        MatRules_5_set.insert("1");
        MatRules_5.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_5_set.insert("0");
        MatRules_5.add_attribute("StartMMY", "949875630"); // 3
        MatRules_5_set.insert("949875630");
        MatRules_5.add_attribute("EndMMY", "1534802961"); // 3
        MatRules_5_set.insert("1534802961");
        MatRules_5.add_attribute("MMYIncr", "1670524638"); // 3
        MatRules_5_set.insert("1670524638");
        all_values.push_back(MatRules_5_set);
        all_compo_names.insert("MatRules_5_set");

        StrkRules_5.add_element(MatRules_5);
      }
      MktSegGrp_5.add_element(StrkRules_5);
    }
    elt.add_element(MktSegGrp_5);
  } // end MktSegGrp
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
