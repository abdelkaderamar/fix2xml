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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDefUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinitionUpdateReport_message_t_0;
  elt.add_attribute("RptID", "153487700"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("153487700");
  elt.add_attribute("ReqID", "SecurityReqID_t_920037935"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("SecurityReqID_t_920037935");
  elt.add_attribute("RspID", "SecurityResponseID_t_1503349357"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("SecurityResponseID_t_1503349357");
  elt.add_attribute("RspTyp", "5"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("5");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_544986348"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("ClearingBusinessDate_t_544986348");
  elt.add_attribute("UpdActn", "A"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("A");
  elt.add_attribute("CorpActn", "A"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("A");
  elt.add_attribute("Ccy", "USD"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("USD");
  elt.add_attribute("Txt", "Text_t_1183089095"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("Text_t_1183089095");
  elt.add_attribute("EncTxtLen", "1529152343"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("1529152343");
  elt.add_attribute("EncTxt", "EncodedText_t_727290829"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("EncodedText_t_727290829");
  elt.add_attribute("TxnTm", "TransactTime_t_1891190221"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("TransactTime_t_1891190221");
  all_values.push_back(SecurityDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("SecurityDefinitionUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_82{"Hdr"};
    multiset<string> Hdr_82_set;
    Hdr_82.add_attribute("SeqNum", "1601410453"); // 1
    Hdr_82_set.insert("1601410453");
    Hdr_82.add_attribute("SID", "SenderCompID_t_906418739"); // 1
    Hdr_82_set.insert("SenderCompID_t_906418739");
    Hdr_82.add_attribute("TID", "TargetCompID_t_742997171"); // 1
    Hdr_82_set.insert("TargetCompID_t_742997171");
    Hdr_82.add_attribute("OBID", "OnBehalfOfCompID_t_123266134"); // 1
    Hdr_82_set.insert("OnBehalfOfCompID_t_123266134");
    Hdr_82.add_attribute("D2ID", "DeliverToCompID_t_393399741"); // 1
    Hdr_82_set.insert("DeliverToCompID_t_393399741");
    Hdr_82.add_attribute("SSub", "SenderSubID_t_560304847"); // 1
    Hdr_82_set.insert("SenderSubID_t_560304847");
    Hdr_82.add_attribute("SLoc", "SenderLocationID_t_83925970"); // 1
    Hdr_82_set.insert("SenderLocationID_t_83925970");
    Hdr_82.add_attribute("TSub", "TargetSubID_t_357115383"); // 1
    Hdr_82_set.insert("TargetSubID_t_357115383");
    Hdr_82.add_attribute("TLoc", "TargetLocationID_t_1148808464"); // 1
    Hdr_82_set.insert("TargetLocationID_t_1148808464");
    Hdr_82.add_attribute("OBSub", "OnBehalfOfSubID_t_714499506"); // 1
    Hdr_82_set.insert("OnBehalfOfSubID_t_714499506");
    Hdr_82.add_attribute("OBLoc", "OnBehalfOfLocationID_t_540619513"); // 1
    Hdr_82_set.insert("OnBehalfOfLocationID_t_540619513");
    Hdr_82.add_attribute("D2Sub", "DeliverToSubID_t_1755370425"); // 1
    Hdr_82_set.insert("DeliverToSubID_t_1755370425");
    Hdr_82.add_attribute("D2Loc", "DeliverToLocationID_t_1284291018"); // 1
    Hdr_82_set.insert("DeliverToLocationID_t_1284291018");
    Hdr_82.add_attribute("PosDup", "N"); // 1
    Hdr_82_set.insert("N");
    Hdr_82.add_attribute("PosRsnd", "Y"); // 1
    Hdr_82_set.insert("Y");
    Hdr_82.add_attribute("Snt", "SendingTime_t_1788121638"); // 1
    Hdr_82_set.insert("SendingTime_t_1788121638");
    Hdr_82.add_attribute("OrigSnt", "OrigSendingTime_t_631986810"); // 1
    Hdr_82_set.insert("OrigSendingTime_t_631986810");
    Hdr_82.add_attribute("MsgEncd", "MessageEncoding_t_477398987"); // 1
    Hdr_82_set.insert("MessageEncoding_t_477398987");
    all_values.push_back(Hdr_82_set);
    all_compo_names.insert("Hdr_82_set");

    {
      xml_element Hop_82{"Hop"};
      multiset<string> Hop_82_set;
      Hop_82.add_attribute("ID", "HopCompID_t_1941609338"); // 2
      Hop_82_set.insert("HopCompID_t_1941609338");
      Hop_82.add_attribute("Ref", "1552024745"); // 2
      Hop_82_set.insert("1552024745");
      Hop_82.add_attribute("Snt", "HopSendingTime_t_1980748344"); // 2
      Hop_82_set.insert("HopSendingTime_t_1980748344");
      all_values.push_back(Hop_82_set);
      all_compo_names.insert("Hop_82_set");

      Hdr_82.add_element(Hop_82);
    }
    elt.add_element(Hdr_82);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_13{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_13_set;
    ApplSeqCtrl_13.add_attribute("ApplID", "ApplID_t_1296906988"); // 1
    ApplSeqCtrl_13_set.insert("ApplID_t_1296906988");
    ApplSeqCtrl_13.add_attribute("ApplSeqNum", "2097011093"); // 1
    ApplSeqCtrl_13_set.insert("2097011093");
    ApplSeqCtrl_13.add_attribute("ApplLastSeqNum", "422982743"); // 1
    ApplSeqCtrl_13_set.insert("422982743");
    ApplSeqCtrl_13.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_13_set.insert("false");
    all_values.push_back(ApplSeqCtrl_13_set);
    all_compo_names.insert("ApplSeqCtrl_13_set");

    elt.add_element(ApplSeqCtrl_13);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_75{"Instrmt"};
    multiset<string> Instrmt_75_set;
    Instrmt_75.add_attribute("Sym", "Symbol_t_790313371"); // 1
    Instrmt_75_set.insert("Symbol_t_790313371");
    Instrmt_75.add_attribute("Sfx", "WI"); // 1
    Instrmt_75_set.insert("WI");
    Instrmt_75.add_attribute("ID", "SecurityID_t_2010636987"); // 1
    Instrmt_75_set.insert("SecurityID_t_2010636987");
    Instrmt_75.add_attribute("Src", "F"); // 1
    Instrmt_75_set.insert("F");
    Instrmt_75.add_attribute("Prod", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("ProdCmplx", "ProductComplex_t_1754343560"); // 1
    Instrmt_75_set.insert("ProductComplex_t_1754343560");
    Instrmt_75.add_attribute("SecGrp", "SecurityGroup_t_1773392519"); // 1
    Instrmt_75_set.insert("SecurityGroup_t_1773392519");
    Instrmt_75.add_attribute("CFI", "CFICode_t_200025436"); // 1
    Instrmt_75_set.insert("CFICode_t_200025436");
    Instrmt_75.add_attribute("SecTyp", "SECPLEDGE"); // 1
    Instrmt_75_set.insert("SECPLEDGE");
    Instrmt_75.add_attribute("SubTyp", "SecuritySubType_t_1896658653"); // 1
    Instrmt_75_set.insert("SecuritySubType_t_1896658653");
    Instrmt_75.add_attribute("MMY", "593425177"); // 1
    Instrmt_75_set.insert("593425177");
    Instrmt_75.add_attribute("MatDt", "MaturityDate_t_910161931"); // 1
    Instrmt_75_set.insert("MaturityDate_t_910161931");
    Instrmt_75.add_attribute("MatTm", "1980584623"); // 1
    Instrmt_75_set.insert("1980584623");
    Instrmt_75.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_950540560"); // 1
    Instrmt_75_set.insert("SettleOnOpenFlag_t_950540560");
    Instrmt_75.add_attribute("AsgnMeth", "2058970395"); // 1
    Instrmt_75_set.insert("2058970395");
    Instrmt_75.add_attribute("Status", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("CpnPmt", "CouponPaymentDate_t_1491160074"); // 1
    Instrmt_75_set.insert("CouponPaymentDate_t_1491160074");
    Instrmt_75.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_75_set.insert("FR");
    Instrmt_75.add_attribute("Snrty", "SD"); // 1
    Instrmt_75_set.insert("SD");
    Instrmt_75.add_attribute("NotlPctOut", "6396803.840000"); // 1
    Instrmt_75_set.insert("6396803.840000");
    Instrmt_75.add_attribute("OrigNotlPctOut", "18786524.160000"); // 1
    Instrmt_75_set.insert("18786524.160000");
    Instrmt_75.add_attribute("AttchPnt", "14725294.900000"); // 1
    Instrmt_75_set.insert("14725294.900000");
    Instrmt_75.add_attribute("DetchPnt", "12716671.950000"); // 1
    Instrmt_75_set.insert("12716671.950000");
    Instrmt_75.add_attribute("Issued", "IssueDate_t_208567755"); // 1
    Instrmt_75_set.insert("IssueDate_t_208567755");
    Instrmt_75.add_attribute("RepoCollSecTyp", "1266655181"); // 1
    Instrmt_75_set.insert("1266655181");
    Instrmt_75.add_attribute("RepoTrm", "676208292"); // 1
    Instrmt_75_set.insert("676208292");
    Instrmt_75.add_attribute("RepoRt", "418324.520000"); // 1
    Instrmt_75_set.insert("418324.520000");
    Instrmt_75.add_attribute("Fctr", "4160785.210000"); // 1
    Instrmt_75_set.insert("4160785.210000");
    Instrmt_75.add_attribute("CrdRtg", "CreditRating_t_625735738"); // 1
    Instrmt_75_set.insert("CreditRating_t_625735738");
    Instrmt_75.add_attribute("Rgstry", "InstrRegistry_t_464815195"); // 1
    Instrmt_75_set.insert("InstrRegistry_t_464815195");
    Instrmt_75.add_attribute("IssuCtry", "1243626413"); // 1
    Instrmt_75_set.insert("1243626413");
    Instrmt_75.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1416049109"); // 1
    Instrmt_75_set.insert("StateOrProvinceOfIssue_t_1416049109");
    Instrmt_75.add_attribute("Lcl", "LocaleOfIssue_t_1178614710"); // 1
    Instrmt_75_set.insert("LocaleOfIssue_t_1178614710");
    Instrmt_75.add_attribute("Redeem", "RedemptionDate_t_1106779752"); // 1
    Instrmt_75_set.insert("RedemptionDate_t_1106779752");
    Instrmt_75.add_attribute("StrkPx", "15880311.750000"); // 1
    Instrmt_75_set.insert("15880311.750000");
    Instrmt_75.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_75_set.insert("USD");
    Instrmt_75.add_attribute("StrkMult", "12139400.470000"); // 1
    Instrmt_75_set.insert("12139400.470000");
    Instrmt_75.add_attribute("StrkValu", "6722468.430000"); // 1
    Instrmt_75_set.insert("6722468.430000");
    Instrmt_75.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_75_set.insert("3");
    Instrmt_75.add_attribute("StrkPxBndryPrcsn", "12656720.200000"); // 1
    Instrmt_75_set.insert("12656720.200000");
    Instrmt_75.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_75_set.insert("4");
    Instrmt_75.add_attribute("OptAt", "796216028"); // 1
    Instrmt_75_set.insert("796216028");
    Instrmt_75.add_attribute("Mult", "687289.320000"); // 1
    Instrmt_75_set.insert("687289.320000");
    Instrmt_75.add_attribute("MultTyp", "0"); // 1
    Instrmt_75_set.insert("0");
    Instrmt_75.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_75_set.insert("4");
    Instrmt_75.add_attribute("MinPxIncr", "15598890.060000"); // 1
    Instrmt_75_set.insert("15598890.060000");
    Instrmt_75.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1404518951"); // 1
    Instrmt_75_set.insert("MinPriceIncrementAmount_t_1404518951");
    Instrmt_75.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_75_set.insert("oz_tr");
    Instrmt_75.add_attribute("UOMQty", "520857.430000"); // 1
    Instrmt_75_set.insert("520857.430000");
    Instrmt_75.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_75_set.insert("Bcf");
    Instrmt_75.add_attribute("PxUOMQty", "3532702.040000"); // 1
    Instrmt_75_set.insert("3532702.040000");
    Instrmt_75.add_attribute("SettlMeth", "C"); // 1
    Instrmt_75_set.insert("C");
    Instrmt_75.add_attribute("ExerStyle", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_75_set.insert("2");
    Instrmt_75.add_attribute("OptPayAmt", "OptPayoutAmount_t_1999961230"); // 1
    Instrmt_75_set.insert("OptPayoutAmount_t_1999961230");
    Instrmt_75.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_75_set.insert("PCTPAR");
    Instrmt_75.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_75_set.insert("FUT");
    Instrmt_75.add_attribute("ListMeth", "0"); // 1
    Instrmt_75_set.insert("0");
    Instrmt_75.add_attribute("CapPx", "18509031.220000"); // 1
    Instrmt_75_set.insert("18509031.220000");
    Instrmt_75.add_attribute("FlrPx", "11321466.710000"); // 1
    Instrmt_75_set.insert("11321466.710000");
    Instrmt_75.add_attribute("PutCall", "1"); // 1
    Instrmt_75_set.insert("1");
    Instrmt_75.add_attribute("FlexInd", "true"); // 1
    Instrmt_75_set.insert("true");
    Instrmt_75.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_75_set.insert("false");
    Instrmt_75.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_75_set.insert("Mo");
    Instrmt_75.add_attribute("CpnRt", "13542555.910000"); // 1
    Instrmt_75_set.insert("13542555.910000");
    Instrmt_75.add_attribute("Exch", "SecurityExchange_t_805082440"); // 1
    Instrmt_75_set.insert("SecurityExchange_t_805082440");
    Instrmt_75.add_attribute("PosLmt", "401266356"); // 1
    Instrmt_75_set.insert("401266356");
    Instrmt_75.add_attribute("NTPosLmt", "2026502434"); // 1
    Instrmt_75_set.insert("2026502434");
    Instrmt_75.add_attribute("Issr", "Issuer_t_1868579188"); // 1
    Instrmt_75_set.insert("Issuer_t_1868579188");
    Instrmt_75.add_attribute("EncIssrLen", "1364381408"); // 1
    Instrmt_75_set.insert("1364381408");
    Instrmt_75.add_attribute("EncIssr", "EncodedIssuer_t_1144690806"); // 1
    Instrmt_75_set.insert("EncodedIssuer_t_1144690806");
    Instrmt_75.add_attribute("Desc", "SecurityDesc_t_1694754220"); // 1
    Instrmt_75_set.insert("SecurityDesc_t_1694754220");
    Instrmt_75.add_attribute("EncSecDescLen", "13113788"); // 1
    Instrmt_75_set.insert("13113788");
    Instrmt_75.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1213419739"); // 1
    Instrmt_75_set.insert("EncodedSecurityDesc_t_1213419739");
    Instrmt_75.add_attribute("Pool", "Pool_t_1432415999"); // 1
    Instrmt_75_set.insert("Pool_t_1432415999");
    Instrmt_75.add_attribute("CSetMo", "1356930298"); // 1
    Instrmt_75_set.insert("1356930298");
    Instrmt_75.add_attribute("CPPgm", "99"); // 1
    Instrmt_75_set.insert("99");
    Instrmt_75.add_attribute("CPRegT", "CPRegType_t_689451302"); // 1
    Instrmt_75_set.insert("CPRegType_t_689451302");
    Instrmt_75.add_attribute("Dated", "DatedDate_t_237671011"); // 1
    Instrmt_75_set.insert("DatedDate_t_237671011");
    Instrmt_75.add_attribute("IntAcrl", "InterestAccrualDate_t_677910840"); // 1
    Instrmt_75_set.insert("InterestAccrualDate_t_677910840");
    all_values.push_back(Instrmt_75_set);
    all_compo_names.insert("Instrmt_75_set");

    {
      xml_element AID_78{"AID"};
      multiset<string> AID_78_set;
      AID_78.add_attribute("AltID", "SecurityAltID_t_1825139022"); // 2
      AID_78_set.insert("SecurityAltID_t_1825139022");
      AID_78.add_attribute("AltIDSrc", "8"); // 2
      AID_78_set.insert("8");
      all_values.push_back(AID_78_set);
      all_compo_names.insert("AID_78_set");

      Instrmt_75.add_element(AID_78);
    }
    {
      xml_element SecXML_78{"SecXML"};
      multiset<string> SecXML_78_set;
      SecXML_78.add_attribute("Schema", "SecurityXMLSchema_t_2001663778"); // 2
      SecXML_78_set.insert("SecurityXMLSchema_t_2001663778");
      all_values.push_back(SecXML_78_set);
      all_compo_names.insert("SecXML_78_set");

      Instrmt_75.add_element(SecXML_78);
    }
    {
      xml_element Evnt_78{"Evnt"};
      multiset<string> Evnt_78_set;
      Evnt_78.add_attribute("EventTyp", "9"); // 2
      Evnt_78_set.insert("9");
      Evnt_78.add_attribute("Dt", "EventDate_t_63382952"); // 2
      Evnt_78_set.insert("EventDate_t_63382952");
      Evnt_78.add_attribute("Tm", "EventTime_t_1854141361"); // 2
      Evnt_78_set.insert("EventTime_t_1854141361");
      Evnt_78.add_attribute("Px", "2605151.280000"); // 2
      Evnt_78_set.insert("2605151.280000");
      Evnt_78.add_attribute("Txt", "EventText_t_2099386859"); // 2
      Evnt_78_set.insert("EventText_t_2099386859");
      all_values.push_back(Evnt_78_set);
      all_compo_names.insert("Evnt_78_set");

      Instrmt_75.add_element(Evnt_78);
    }
    {
      xml_element Pty_399{"Pty"};
      multiset<string> Pty_399_set;
      Pty_399.add_attribute("ID", "InstrumentPartyID_t_184871033"); // 2
      Pty_399_set.insert("InstrumentPartyID_t_184871033");
      Pty_399.add_attribute("Src", "H"); // 2
      Pty_399_set.insert("H");
      Pty_399.add_attribute("R", "64"); // 2
      Pty_399_set.insert("64");
      all_values.push_back(Pty_399_set);
      all_compo_names.insert("Pty_399_set");

      {
        xml_element Sub_399{"Sub"};
        multiset<string> Sub_399_set;
        Sub_399.add_attribute("ID", "InstrumentPartySubID_t_2079133463"); // 3
        Sub_399_set.insert("InstrumentPartySubID_t_2079133463");
        Sub_399.add_attribute("Typ", "9"); // 3
        Sub_399_set.insert("9");
        all_values.push_back(Sub_399_set);
        all_compo_names.insert("Sub_399_set");

        Pty_399.add_element(Sub_399);
      }
      Instrmt_75.add_element(Pty_399);
    }
    {
      xml_element CmplxEvnt_75{"CmplxEvnt"};
      multiset<string> CmplxEvnt_75_set;
      CmplxEvnt_75.add_attribute("Typ", "4"); // 2
      CmplxEvnt_75_set.insert("4");
      CmplxEvnt_75.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1266459772"); // 2
      CmplxEvnt_75_set.insert("ComplexOptPayoutAmount_t_1266459772");
      CmplxEvnt_75.add_attribute("Px", "527407.300000"); // 2
      CmplxEvnt_75_set.insert("527407.300000");
      CmplxEvnt_75.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_75_set.insert("4");
      CmplxEvnt_75.add_attribute("PxBndryPrcsn", "16677261.280000"); // 2
      CmplxEvnt_75_set.insert("16677261.280000");
      CmplxEvnt_75.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_75_set.insert("3");
      CmplxEvnt_75.add_attribute("Cond", "1"); // 2
      CmplxEvnt_75_set.insert("1");
      all_values.push_back(CmplxEvnt_75_set);
      all_compo_names.insert("CmplxEvnt_75_set");

      {
        xml_element EvntDts_75{"EvntDts"};
        multiset<string> EvntDts_75_set;
        EvntDts_75.add_attribute("StartDt", "ComplexEventStartDate_t_884623888"); // 3
        EvntDts_75_set.insert("ComplexEventStartDate_t_884623888");
        EvntDts_75.add_attribute("EndDt", "ComplexEventEndDate_t_1076450323"); // 3
        EvntDts_75_set.insert("ComplexEventEndDate_t_1076450323");
        all_values.push_back(EvntDts_75_set);
        all_compo_names.insert("EvntDts_75_set");

        {
          xml_element EvntTms_75{"EvntTms"};
          multiset<string> EvntTms_75_set;
          EvntTms_75.add_attribute("StartTm", "1248941210"); // 4
          EvntTms_75_set.insert("1248941210");
          EvntTms_75.add_attribute("EndTm", "897737677"); // 4
          EvntTms_75_set.insert("897737677");
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
    InstrmtExt_10.add_attribute("PctAtRisk", "5338735.610000"); // 1
    InstrmtExt_10_set.insert("5338735.610000");
    all_values.push_back(InstrmtExt_10_set);
    all_compo_names.insert("InstrmtExt_10_set");

    {
      xml_element Attrb_16{"Attrb"};
      multiset<string> Attrb_16_set;
      Attrb_16.add_attribute("Typ", "27"); // 2
      Attrb_16_set.insert("27");
      Attrb_16.add_attribute("Val", "InstrAttribValue_t_768211511"); // 2
      Attrb_16_set.insert("InstrAttribValue_t_768211511");
      all_values.push_back(Attrb_16_set);
      all_compo_names.insert("Attrb_16_set");

      InstrmtExt_10.add_element(Attrb_16);
    }
    elt.add_element(InstrmtExt_10);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_107{"Undly"};
    multiset<string> Undly_107_set;
    Undly_107.add_attribute("Sym", "UnderlyingSymbol_t_344855338"); // 1
    Undly_107_set.insert("UnderlyingSymbol_t_344855338");
    Undly_107.add_attribute("Sfx", "CD"); // 1
    Undly_107_set.insert("CD");
    Undly_107.add_attribute("ID", "UnderlyingSecurityID_t_900980238"); // 1
    Undly_107_set.insert("UnderlyingSecurityID_t_900980238");
    Undly_107.add_attribute("Src", "1"); // 1
    Undly_107_set.insert("1");
    Undly_107.add_attribute("Prod", "8"); // 1
    Undly_107_set.insert("8");
    Undly_107.add_attribute("CFI", "UnderlyingCFICode_t_1922891087"); // 1
    Undly_107_set.insert("UnderlyingCFICode_t_1922891087");
    Undly_107.add_attribute("SecTyp", "SLQN"); // 1
    Undly_107_set.insert("SLQN");
    Undly_107.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1006960195"); // 1
    Undly_107_set.insert("UnderlyingSecuritySubType_t_1006960195");
    Undly_107.add_attribute("MMY", "35922567"); // 1
    Undly_107_set.insert("35922567");
    Undly_107.add_attribute("Mat", "UnderlyingMaturityDate_t_951082717"); // 1
    Undly_107_set.insert("UnderlyingMaturityDate_t_951082717");
    Undly_107.add_attribute("MatTm", "1191831229"); // 1
    Undly_107_set.insert("1191831229");
    Undly_107.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2147340817"); // 1
    Undly_107_set.insert("UnderlyingCouponPaymentDate_t_2147340817");
    Undly_107.add_attribute("RestrctTyp", "FR"); // 1
    Undly_107_set.insert("FR");
    Undly_107.add_attribute("Snrty", "SR"); // 1
    Undly_107_set.insert("SR");
    Undly_107.add_attribute("NotlPctOut", "8458259.550000"); // 1
    Undly_107_set.insert("8458259.550000");
    Undly_107.add_attribute("OrigNotlPctOut", "10631416.100000"); // 1
    Undly_107_set.insert("10631416.100000");
    Undly_107.add_attribute("AttchPnt", "2424571.680000"); // 1
    Undly_107_set.insert("2424571.680000");
    Undly_107.add_attribute("DetchPnt", "8985666.850000"); // 1
    Undly_107_set.insert("8985666.850000");
    Undly_107.add_attribute("Issued", "UnderlyingIssueDate_t_896233060"); // 1
    Undly_107_set.insert("UnderlyingIssueDate_t_896233060");
    Undly_107.add_attribute("RepoCollSecTyp", "1910183296"); // 1
    Undly_107_set.insert("1910183296");
    Undly_107.add_attribute("RepoTrm", "830326202"); // 1
    Undly_107_set.insert("830326202");
    Undly_107.add_attribute("RepoRt", "4504200.500000"); // 1
    Undly_107_set.insert("4504200.500000");
    Undly_107.add_attribute("Fctr", "6473235.360000"); // 1
    Undly_107_set.insert("6473235.360000");
    Undly_107.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1906776525"); // 1
    Undly_107_set.insert("UnderlyingCreditRating_t_1906776525");
    Undly_107.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1699361261"); // 1
    Undly_107_set.insert("UnderlyingInstrRegistry_t_1699361261");
    Undly_107.add_attribute("Ctry", "1545061213"); // 1
    Undly_107_set.insert("1545061213");
    Undly_107.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2049162939"); // 1
    Undly_107_set.insert("UnderlyingStateOrProvinceOfIssue_t_2049162939");
    Undly_107.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_85751174"); // 1
    Undly_107_set.insert("UnderlyingLocaleOfIssue_t_85751174");
    Undly_107.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1652245540"); // 1
    Undly_107_set.insert("UnderlyingRedemptionDate_t_1652245540");
    Undly_107.add_attribute("StrkPx", "6698908.020000"); // 1
    Undly_107_set.insert("6698908.020000");
    Undly_107.add_attribute("StrkCcy", "CHF"); // 1
    Undly_107_set.insert("CHF");
    Undly_107.add_attribute("OptA", "2116013154"); // 1
    Undly_107_set.insert("2116013154");
    Undly_107.add_attribute("Mult", "625726.280000"); // 1
    Undly_107_set.insert("625726.280000");
    Undly_107.add_attribute("MultTyp", "0"); // 1
    Undly_107_set.insert("0");
    Undly_107.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_107_set.insert("4");
    Undly_107.add_attribute("UOM", "MMBtu"); // 1
    Undly_107_set.insert("MMBtu");
    Undly_107.add_attribute("UOMQty", "17845932.910000"); // 1
    Undly_107_set.insert("17845932.910000");
    Undly_107.add_attribute("PxUOM", "tn"); // 1
    Undly_107_set.insert("tn");
    Undly_107.add_attribute("PxUOMQty", "20213862.820000"); // 1
    Undly_107_set.insert("20213862.820000");
    Undly_107.add_attribute("TmUnit", "Min"); // 1
    Undly_107_set.insert("Min");
    Undly_107.add_attribute("ExerStyle", "1"); // 1
    Undly_107_set.insert("1");
    Undly_107.add_attribute("CpnRt", "20212434.510000"); // 1
    Undly_107_set.insert("20212434.510000");
    Undly_107.add_attribute("Exch", "UnderlyingSecurityExchange_t_475841313"); // 1
    Undly_107_set.insert("UnderlyingSecurityExchange_t_475841313");
    Undly_107.add_attribute("Issr", "UnderlyingIssuer_t_296137161"); // 1
    Undly_107_set.insert("UnderlyingIssuer_t_296137161");
    Undly_107.add_attribute("EncUndIssrLen", "719585759"); // 1
    Undly_107_set.insert("719585759");
    Undly_107.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1538982923"); // 1
    Undly_107_set.insert("EncodedUnderlyingIssuer_t_1538982923");
    Undly_107.add_attribute("Desc", "UnderlyingSecurityDesc_t_538594329"); // 1
    Undly_107_set.insert("UnderlyingSecurityDesc_t_538594329");
    Undly_107.add_attribute("EncUndSecDescLen", "1618152444"); // 1
    Undly_107_set.insert("1618152444");
    Undly_107.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_287732335"); // 1
    Undly_107_set.insert("EncodedUnderlyingSecurityDesc_t_287732335");
    Undly_107.add_attribute("CPPgm", "UnderlyingCPProgram_t_301293977"); // 1
    Undly_107_set.insert("UnderlyingCPProgram_t_301293977");
    Undly_107.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_300994998"); // 1
    Undly_107_set.insert("UnderlyingCPRegType_t_300994998");
    Undly_107.add_attribute("AllocPct", "7381523.850000"); // 1
    Undly_107_set.insert("7381523.850000");
    Undly_107.add_attribute("Ccy", "EUR"); // 1
    Undly_107_set.insert("EUR");
    Undly_107.add_attribute("Qty", "2900299.980000"); // 1
    Undly_107_set.insert("2900299.980000");
    Undly_107.add_attribute("SettlTyp", "5"); // 1
    Undly_107_set.insert("5");
    Undly_107.add_attribute("CashAmt", "UnderlyingCashAmount_t_2109450814"); // 1
    Undly_107_set.insert("UnderlyingCashAmount_t_2109450814");
    Undly_107.add_attribute("CashTyp", "DIFF"); // 1
    Undly_107_set.insert("DIFF");
    Undly_107.add_attribute("Px", "19984406.200000"); // 1
    Undly_107_set.insert("19984406.200000");
    Undly_107.add_attribute("DirtPx", "6318579.690000"); // 1
    Undly_107_set.insert("6318579.690000");
    Undly_107.add_attribute("EndPx", "16848572.110000"); // 1
    Undly_107_set.insert("16848572.110000");
    Undly_107.add_attribute("StartVal", "UnderlyingStartValue_t_1848057851"); // 1
    Undly_107_set.insert("UnderlyingStartValue_t_1848057851");
    Undly_107.add_attribute("CurVal", "UnderlyingCurrentValue_t_600387475"); // 1
    Undly_107_set.insert("UnderlyingCurrentValue_t_600387475");
    Undly_107.add_attribute("EndVal", "UnderlyingEndValue_t_1747429840"); // 1
    Undly_107_set.insert("UnderlyingEndValue_t_1747429840");
    Undly_107.add_attribute("AdjQty", "4859879.880000"); // 1
    Undly_107_set.insert("4859879.880000");
    Undly_107.add_attribute("FxRate", "18692194.640000"); // 1
    Undly_107_set.insert("18692194.640000");
    Undly_107.add_attribute("FxRateCalc", "D"); // 1
    Undly_107_set.insert("D");
    Undly_107.add_attribute("CapValu", "UnderlyingCapValue_t_123097631"); // 1
    Undly_107_set.insert("UnderlyingCapValue_t_123097631");
    Undly_107.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1997528001"); // 1
    Undly_107_set.insert("UnderlyingSettlMethod_t_1997528001");
    Undly_107.add_attribute("PutCall", "1459312542"); // 1
    Undly_107_set.insert("1459312542");
    all_values.push_back(Undly_107_set);
    all_compo_names.insert("Undly_107_set");

    {
      xml_element UndAID_107{"UndAID"};
      multiset<string> UndAID_107_set;
      UndAID_107.add_attribute("AltID", "UnderlyingSecurityAltID_t_711289992"); // 2
      UndAID_107_set.insert("UnderlyingSecurityAltID_t_711289992");
      UndAID_107.add_attribute("AltIDSrc", "5"); // 2
      UndAID_107_set.insert("5");
      all_values.push_back(UndAID_107_set);
      all_compo_names.insert("UndAID_107_set");

      Undly_107.add_element(UndAID_107);
    }
    {
      xml_element Stip_170{"Stip"};
      multiset<string> Stip_170_set;
      Stip_170.add_attribute("Typ", "MINDNOM"); // 2
      Stip_170_set.insert("MINDNOM");
      Stip_170.add_attribute("Val", "UnderlyingStipValue_t_1187131305"); // 2
      Stip_170_set.insert("UnderlyingStipValue_t_1187131305");
      all_values.push_back(Stip_170_set);
      all_compo_names.insert("Stip_170_set");

      Undly_107.add_element(Stip_170);
    }
    {
      xml_element Pty_400{"Pty"};
      multiset<string> Pty_400_set;
      Pty_400.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1466321280"); // 2
      Pty_400_set.insert("UnderlyingInstrumentPartyID_t_1466321280");
      Pty_400.add_attribute("Src", "7"); // 2
      Pty_400_set.insert("7");
      Pty_400.add_attribute("R", "32"); // 2
      Pty_400_set.insert("32");
      all_values.push_back(Pty_400_set);
      all_compo_names.insert("Pty_400_set");

      {
        xml_element Sub_400{"Sub"};
        multiset<string> Sub_400_set;
        Sub_400.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2004915609"); // 3
        Sub_400_set.insert("UnderlyingInstrumentPartySubID_t_2004915609");
        Sub_400.add_attribute("Typ", "17"); // 3
        Sub_400_set.insert("17");
        all_values.push_back(Sub_400_set);
        all_compo_names.insert("Sub_400_set");

        Pty_400.add_element(Sub_400);
      }
      Undly_107.add_element(Pty_400);
    }
    elt.add_element(Undly_107);
  } // end Undly
  { // Undly
    xml_element Undly_108{"Undly"};
    multiset<string> Undly_108_set;
    Undly_108.add_attribute("Sym", "UnderlyingSymbol_t_866362915"); // 1
    Undly_108_set.insert("UnderlyingSymbol_t_866362915");
    Undly_108.add_attribute("Sfx", "WI"); // 1
    Undly_108_set.insert("WI");
    Undly_108.add_attribute("ID", "UnderlyingSecurityID_t_1824321899"); // 1
    Undly_108_set.insert("UnderlyingSecurityID_t_1824321899");
    Undly_108.add_attribute("Src", "G"); // 1
    Undly_108_set.insert("G");
    Undly_108.add_attribute("Prod", "5"); // 1
    Undly_108_set.insert("5");
    Undly_108.add_attribute("CFI", "UnderlyingCFICode_t_1884609775"); // 1
    Undly_108_set.insert("UnderlyingCFICode_t_1884609775");
    Undly_108.add_attribute("SecTyp", "TBILL"); // 1
    Undly_108_set.insert("TBILL");
    Undly_108.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1453538532"); // 1
    Undly_108_set.insert("UnderlyingSecuritySubType_t_1453538532");
    Undly_108.add_attribute("MMY", "1846576941"); // 1
    Undly_108_set.insert("1846576941");
    Undly_108.add_attribute("Mat", "UnderlyingMaturityDate_t_122842824"); // 1
    Undly_108_set.insert("UnderlyingMaturityDate_t_122842824");
    Undly_108.add_attribute("MatTm", "1304495504"); // 1
    Undly_108_set.insert("1304495504");
    Undly_108.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_330951262"); // 1
    Undly_108_set.insert("UnderlyingCouponPaymentDate_t_330951262");
    Undly_108.add_attribute("RestrctTyp", "FR"); // 1
    Undly_108_set.insert("FR");
    Undly_108.add_attribute("Snrty", "SB"); // 1
    Undly_108_set.insert("SB");
    Undly_108.add_attribute("NotlPctOut", "9313387.380000"); // 1
    Undly_108_set.insert("9313387.380000");
    Undly_108.add_attribute("OrigNotlPctOut", "14076462.280000"); // 1
    Undly_108_set.insert("14076462.280000");
    Undly_108.add_attribute("AttchPnt", "14910576.950000"); // 1
    Undly_108_set.insert("14910576.950000");
    Undly_108.add_attribute("DetchPnt", "6530745.540000"); // 1
    Undly_108_set.insert("6530745.540000");
    Undly_108.add_attribute("Issued", "UnderlyingIssueDate_t_845572487"); // 1
    Undly_108_set.insert("UnderlyingIssueDate_t_845572487");
    Undly_108.add_attribute("RepoCollSecTyp", "1614155327"); // 1
    Undly_108_set.insert("1614155327");
    Undly_108.add_attribute("RepoTrm", "503118907"); // 1
    Undly_108_set.insert("503118907");
    Undly_108.add_attribute("RepoRt", "1574013.810000"); // 1
    Undly_108_set.insert("1574013.810000");
    Undly_108.add_attribute("Fctr", "1779616.710000"); // 1
    Undly_108_set.insert("1779616.710000");
    Undly_108.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1673303026"); // 1
    Undly_108_set.insert("UnderlyingCreditRating_t_1673303026");
    Undly_108.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1490473727"); // 1
    Undly_108_set.insert("UnderlyingInstrRegistry_t_1490473727");
    Undly_108.add_attribute("Ctry", "1365092977"); // 1
    Undly_108_set.insert("1365092977");
    Undly_108.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_992140658"); // 1
    Undly_108_set.insert("UnderlyingStateOrProvinceOfIssue_t_992140658");
    Undly_108.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1395648183"); // 1
    Undly_108_set.insert("UnderlyingLocaleOfIssue_t_1395648183");
    Undly_108.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1943723557"); // 1
    Undly_108_set.insert("UnderlyingRedemptionDate_t_1943723557");
    Undly_108.add_attribute("StrkPx", "8495726.190000"); // 1
    Undly_108_set.insert("8495726.190000");
    Undly_108.add_attribute("StrkCcy", "EUR"); // 1
    Undly_108_set.insert("EUR");
    Undly_108.add_attribute("OptA", "1008298558"); // 1
    Undly_108_set.insert("1008298558");
    Undly_108.add_attribute("Mult", "4483296.880000"); // 1
    Undly_108_set.insert("4483296.880000");
    Undly_108.add_attribute("MultTyp", "1"); // 1
    Undly_108_set.insert("1");
    Undly_108.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_108_set.insert("1");
    Undly_108.add_attribute("UOM", "Alw"); // 1
    Undly_108_set.insert("Alw");
    Undly_108.add_attribute("UOMQty", "20141797.770000"); // 1
    Undly_108_set.insert("20141797.770000");
    Undly_108.add_attribute("PxUOM", "USD"); // 1
    Undly_108_set.insert("USD");
    Undly_108.add_attribute("PxUOMQty", "20320327.560000"); // 1
    Undly_108_set.insert("20320327.560000");
    Undly_108.add_attribute("TmUnit", "Min"); // 1
    Undly_108_set.insert("Min");
    Undly_108.add_attribute("ExerStyle", "1"); // 1
    Undly_108_set.insert("1");
    Undly_108.add_attribute("CpnRt", "2155003.710000"); // 1
    Undly_108_set.insert("2155003.710000");
    Undly_108.add_attribute("Exch", "UnderlyingSecurityExchange_t_1797238990"); // 1
    Undly_108_set.insert("UnderlyingSecurityExchange_t_1797238990");
    Undly_108.add_attribute("Issr", "UnderlyingIssuer_t_1583778460"); // 1
    Undly_108_set.insert("UnderlyingIssuer_t_1583778460");
    Undly_108.add_attribute("EncUndIssrLen", "1146839109"); // 1
    Undly_108_set.insert("1146839109");
    Undly_108.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1057401570"); // 1
    Undly_108_set.insert("EncodedUnderlyingIssuer_t_1057401570");
    Undly_108.add_attribute("Desc", "UnderlyingSecurityDesc_t_927352507"); // 1
    Undly_108_set.insert("UnderlyingSecurityDesc_t_927352507");
    Undly_108.add_attribute("EncUndSecDescLen", "1799913663"); // 1
    Undly_108_set.insert("1799913663");
    Undly_108.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1902974057"); // 1
    Undly_108_set.insert("EncodedUnderlyingSecurityDesc_t_1902974057");
    Undly_108.add_attribute("CPPgm", "UnderlyingCPProgram_t_394024186"); // 1
    Undly_108_set.insert("UnderlyingCPProgram_t_394024186");
    Undly_108.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_155548923"); // 1
    Undly_108_set.insert("UnderlyingCPRegType_t_155548923");
    Undly_108.add_attribute("AllocPct", "20603754.390000"); // 1
    Undly_108_set.insert("20603754.390000");
    Undly_108.add_attribute("Ccy", "EUR"); // 1
    Undly_108_set.insert("EUR");
    Undly_108.add_attribute("Qty", "14033655.180000"); // 1
    Undly_108_set.insert("14033655.180000");
    Undly_108.add_attribute("SettlTyp", "2"); // 1
    Undly_108_set.insert("2");
    Undly_108.add_attribute("CashAmt", "UnderlyingCashAmount_t_673508959"); // 1
    Undly_108_set.insert("UnderlyingCashAmount_t_673508959");
    Undly_108.add_attribute("CashTyp", "DIFF"); // 1
    Undly_108_set.insert("DIFF");
    Undly_108.add_attribute("Px", "17333187.440000"); // 1
    Undly_108_set.insert("17333187.440000");
    Undly_108.add_attribute("DirtPx", "15230815.780000"); // 1
    Undly_108_set.insert("15230815.780000");
    Undly_108.add_attribute("EndPx", "14230214.900000"); // 1
    Undly_108_set.insert("14230214.900000");
    Undly_108.add_attribute("StartVal", "UnderlyingStartValue_t_248437921"); // 1
    Undly_108_set.insert("UnderlyingStartValue_t_248437921");
    Undly_108.add_attribute("CurVal", "UnderlyingCurrentValue_t_383896489"); // 1
    Undly_108_set.insert("UnderlyingCurrentValue_t_383896489");
    Undly_108.add_attribute("EndVal", "UnderlyingEndValue_t_1871351178"); // 1
    Undly_108_set.insert("UnderlyingEndValue_t_1871351178");
    Undly_108.add_attribute("AdjQty", "3680723.990000"); // 1
    Undly_108_set.insert("3680723.990000");
    Undly_108.add_attribute("FxRate", "3520548.520000"); // 1
    Undly_108_set.insert("3520548.520000");
    Undly_108.add_attribute("FxRateCalc", "D"); // 1
    Undly_108_set.insert("D");
    Undly_108.add_attribute("CapValu", "UnderlyingCapValue_t_234768529"); // 1
    Undly_108_set.insert("UnderlyingCapValue_t_234768529");
    Undly_108.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1773751748"); // 1
    Undly_108_set.insert("UnderlyingSettlMethod_t_1773751748");
    Undly_108.add_attribute("PutCall", "1941356101"); // 1
    Undly_108_set.insert("1941356101");
    all_values.push_back(Undly_108_set);
    all_compo_names.insert("Undly_108_set");

    {
      xml_element UndAID_108{"UndAID"};
      multiset<string> UndAID_108_set;
      UndAID_108.add_attribute("AltID", "UnderlyingSecurityAltID_t_224307483"); // 2
      UndAID_108_set.insert("UnderlyingSecurityAltID_t_224307483");
      UndAID_108.add_attribute("AltIDSrc", "G"); // 2
      UndAID_108_set.insert("G");
      all_values.push_back(UndAID_108_set);
      all_compo_names.insert("UndAID_108_set");

      Undly_108.add_element(UndAID_108);
    }
    {
      xml_element Stip_171{"Stip"};
      multiset<string> Stip_171_set;
      Stip_171.add_attribute("Typ", "MHP"); // 2
      Stip_171_set.insert("MHP");
      Stip_171.add_attribute("Val", "UnderlyingStipValue_t_2021546473"); // 2
      Stip_171_set.insert("UnderlyingStipValue_t_2021546473");
      all_values.push_back(Stip_171_set);
      all_compo_names.insert("Stip_171_set");

      Undly_108.add_element(Stip_171);
    }
    {
      xml_element Pty_401{"Pty"};
      multiset<string> Pty_401_set;
      Pty_401.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1788755313"); // 2
      Pty_401_set.insert("UnderlyingInstrumentPartyID_t_1788755313");
      Pty_401.add_attribute("Src", "6"); // 2
      Pty_401_set.insert("6");
      Pty_401.add_attribute("R", "73"); // 2
      Pty_401_set.insert("73");
      all_values.push_back(Pty_401_set);
      all_compo_names.insert("Pty_401_set");

      {
        xml_element Sub_401{"Sub"};
        multiset<string> Sub_401_set;
        Sub_401.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_568624172"); // 3
        Sub_401_set.insert("UnderlyingInstrumentPartySubID_t_568624172");
        Sub_401.add_attribute("Typ", "24"); // 3
        Sub_401_set.insert("24");
        all_values.push_back(Sub_401_set);
        all_compo_names.insert("Sub_401_set");

        Pty_401.add_element(Sub_401);
      }
      Undly_108.add_element(Pty_401);
    }
    elt.add_element(Undly_108);
  } // end Undly
  { // Undly
    xml_element Undly_109{"Undly"};
    multiset<string> Undly_109_set;
    Undly_109.add_attribute("Sym", "UnderlyingSymbol_t_686954804"); // 1
    Undly_109_set.insert("UnderlyingSymbol_t_686954804");
    Undly_109.add_attribute("Sfx", "WI"); // 1
    Undly_109_set.insert("WI");
    Undly_109.add_attribute("ID", "UnderlyingSecurityID_t_964190872"); // 1
    Undly_109_set.insert("UnderlyingSecurityID_t_964190872");
    Undly_109.add_attribute("Src", "8"); // 1
    Undly_109_set.insert("8");
    Undly_109.add_attribute("Prod", "9"); // 1
    Undly_109_set.insert("9");
    Undly_109.add_attribute("CFI", "UnderlyingCFICode_t_645559173"); // 1
    Undly_109_set.insert("UnderlyingCFICode_t_645559173");
    Undly_109.add_attribute("SecTyp", "OOC"); // 1
    Undly_109_set.insert("OOC");
    Undly_109.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1324229404"); // 1
    Undly_109_set.insert("UnderlyingSecuritySubType_t_1324229404");
    Undly_109.add_attribute("MMY", "1319068132"); // 1
    Undly_109_set.insert("1319068132");
    Undly_109.add_attribute("Mat", "UnderlyingMaturityDate_t_507258519"); // 1
    Undly_109_set.insert("UnderlyingMaturityDate_t_507258519");
    Undly_109.add_attribute("MatTm", "910064500"); // 1
    Undly_109_set.insert("910064500");
    Undly_109.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_694666062"); // 1
    Undly_109_set.insert("UnderlyingCouponPaymentDate_t_694666062");
    Undly_109.add_attribute("RestrctTyp", "MR"); // 1
    Undly_109_set.insert("MR");
    Undly_109.add_attribute("Snrty", "SD"); // 1
    Undly_109_set.insert("SD");
    Undly_109.add_attribute("NotlPctOut", "10785625.510000"); // 1
    Undly_109_set.insert("10785625.510000");
    Undly_109.add_attribute("OrigNotlPctOut", "16541475.390000"); // 1
    Undly_109_set.insert("16541475.390000");
    Undly_109.add_attribute("AttchPnt", "15265748.210000"); // 1
    Undly_109_set.insert("15265748.210000");
    Undly_109.add_attribute("DetchPnt", "14306174.040000"); // 1
    Undly_109_set.insert("14306174.040000");
    Undly_109.add_attribute("Issued", "UnderlyingIssueDate_t_1563470884"); // 1
    Undly_109_set.insert("UnderlyingIssueDate_t_1563470884");
    Undly_109.add_attribute("RepoCollSecTyp", "1761343350"); // 1
    Undly_109_set.insert("1761343350");
    Undly_109.add_attribute("RepoTrm", "1056885504"); // 1
    Undly_109_set.insert("1056885504");
    Undly_109.add_attribute("RepoRt", "13573433.370000"); // 1
    Undly_109_set.insert("13573433.370000");
    Undly_109.add_attribute("Fctr", "19856508.330000"); // 1
    Undly_109_set.insert("19856508.330000");
    Undly_109.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1261862357"); // 1
    Undly_109_set.insert("UnderlyingCreditRating_t_1261862357");
    Undly_109.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1366716162"); // 1
    Undly_109_set.insert("UnderlyingInstrRegistry_t_1366716162");
    Undly_109.add_attribute("Ctry", "1859713658"); // 1
    Undly_109_set.insert("1859713658");
    Undly_109.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_903134022"); // 1
    Undly_109_set.insert("UnderlyingStateOrProvinceOfIssue_t_903134022");
    Undly_109.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_375444447"); // 1
    Undly_109_set.insert("UnderlyingLocaleOfIssue_t_375444447");
    Undly_109.add_attribute("Redeem", "UnderlyingRedemptionDate_t_643694405"); // 1
    Undly_109_set.insert("UnderlyingRedemptionDate_t_643694405");
    Undly_109.add_attribute("StrkPx", "14717581.950000"); // 1
    Undly_109_set.insert("14717581.950000");
    Undly_109.add_attribute("StrkCcy", "GBP"); // 1
    Undly_109_set.insert("GBP");
    Undly_109.add_attribute("OptA", "286922906"); // 1
    Undly_109_set.insert("286922906");
    Undly_109.add_attribute("Mult", "7936.200000"); // 1
    Undly_109_set.insert("7936.200000");
    Undly_109.add_attribute("MultTyp", "2"); // 1
    Undly_109_set.insert("2");
    Undly_109.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_109_set.insert("3");
    Undly_109.add_attribute("UOM", "oz_tr"); // 1
    Undly_109_set.insert("oz_tr");
    Undly_109.add_attribute("UOMQty", "17862242.710000"); // 1
    Undly_109_set.insert("17862242.710000");
    Undly_109.add_attribute("PxUOM", "Bbl"); // 1
    Undly_109_set.insert("Bbl");
    Undly_109.add_attribute("PxUOMQty", "19654209.250000"); // 1
    Undly_109_set.insert("19654209.250000");
    Undly_109.add_attribute("TmUnit", "H"); // 1
    Undly_109_set.insert("H");
    Undly_109.add_attribute("ExerStyle", "2"); // 1
    Undly_109_set.insert("2");
    Undly_109.add_attribute("CpnRt", "5126033.400000"); // 1
    Undly_109_set.insert("5126033.400000");
    Undly_109.add_attribute("Exch", "UnderlyingSecurityExchange_t_2076279151"); // 1
    Undly_109_set.insert("UnderlyingSecurityExchange_t_2076279151");
    Undly_109.add_attribute("Issr", "UnderlyingIssuer_t_919386153"); // 1
    Undly_109_set.insert("UnderlyingIssuer_t_919386153");
    Undly_109.add_attribute("EncUndIssrLen", "1591165891"); // 1
    Undly_109_set.insert("1591165891");
    Undly_109.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1582943042"); // 1
    Undly_109_set.insert("EncodedUnderlyingIssuer_t_1582943042");
    Undly_109.add_attribute("Desc", "UnderlyingSecurityDesc_t_298477327"); // 1
    Undly_109_set.insert("UnderlyingSecurityDesc_t_298477327");
    Undly_109.add_attribute("EncUndSecDescLen", "874299647"); // 1
    Undly_109_set.insert("874299647");
    Undly_109.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_998930278"); // 1
    Undly_109_set.insert("EncodedUnderlyingSecurityDesc_t_998930278");
    Undly_109.add_attribute("CPPgm", "UnderlyingCPProgram_t_2059820677"); // 1
    Undly_109_set.insert("UnderlyingCPProgram_t_2059820677");
    Undly_109.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1931185152"); // 1
    Undly_109_set.insert("UnderlyingCPRegType_t_1931185152");
    Undly_109.add_attribute("AllocPct", "2087899.670000"); // 1
    Undly_109_set.insert("2087899.670000");
    Undly_109.add_attribute("Ccy", "CHF"); // 1
    Undly_109_set.insert("CHF");
    Undly_109.add_attribute("Qty", "15755061.290000"); // 1
    Undly_109_set.insert("15755061.290000");
    Undly_109.add_attribute("SettlTyp", "2"); // 1
    Undly_109_set.insert("2");
    Undly_109.add_attribute("CashAmt", "UnderlyingCashAmount_t_1948697884"); // 1
    Undly_109_set.insert("UnderlyingCashAmount_t_1948697884");
    Undly_109.add_attribute("CashTyp", "DIFF"); // 1
    Undly_109_set.insert("DIFF");
    Undly_109.add_attribute("Px", "1064286.310000"); // 1
    Undly_109_set.insert("1064286.310000");
    Undly_109.add_attribute("DirtPx", "12729724.310000"); // 1
    Undly_109_set.insert("12729724.310000");
    Undly_109.add_attribute("EndPx", "9875533.250000"); // 1
    Undly_109_set.insert("9875533.250000");
    Undly_109.add_attribute("StartVal", "UnderlyingStartValue_t_1437077841"); // 1
    Undly_109_set.insert("UnderlyingStartValue_t_1437077841");
    Undly_109.add_attribute("CurVal", "UnderlyingCurrentValue_t_1559895337"); // 1
    Undly_109_set.insert("UnderlyingCurrentValue_t_1559895337");
    Undly_109.add_attribute("EndVal", "UnderlyingEndValue_t_988346946"); // 1
    Undly_109_set.insert("UnderlyingEndValue_t_988346946");
    Undly_109.add_attribute("AdjQty", "12200899.980000"); // 1
    Undly_109_set.insert("12200899.980000");
    Undly_109.add_attribute("FxRate", "12339688.120000"); // 1
    Undly_109_set.insert("12339688.120000");
    Undly_109.add_attribute("FxRateCalc", "D"); // 1
    Undly_109_set.insert("D");
    Undly_109.add_attribute("CapValu", "UnderlyingCapValue_t_858830621"); // 1
    Undly_109_set.insert("UnderlyingCapValue_t_858830621");
    Undly_109.add_attribute("SetMeth", "UnderlyingSettlMethod_t_84788043"); // 1
    Undly_109_set.insert("UnderlyingSettlMethod_t_84788043");
    Undly_109.add_attribute("PutCall", "1452637017"); // 1
    Undly_109_set.insert("1452637017");
    all_values.push_back(Undly_109_set);
    all_compo_names.insert("Undly_109_set");

    {
      xml_element UndAID_109{"UndAID"};
      multiset<string> UndAID_109_set;
      UndAID_109.add_attribute("AltID", "UnderlyingSecurityAltID_t_1004829763"); // 2
      UndAID_109_set.insert("UnderlyingSecurityAltID_t_1004829763");
      UndAID_109.add_attribute("AltIDSrc", "H"); // 2
      UndAID_109_set.insert("H");
      all_values.push_back(UndAID_109_set);
      all_compo_names.insert("UndAID_109_set");

      Undly_109.add_element(UndAID_109);
    }
    {
      xml_element Stip_172{"Stip"};
      multiset<string> Stip_172_set;
      Stip_172.add_attribute("Typ", "PRICEFREQ"); // 2
      Stip_172_set.insert("PRICEFREQ");
      Stip_172.add_attribute("Val", "UnderlyingStipValue_t_933625266"); // 2
      Stip_172_set.insert("UnderlyingStipValue_t_933625266");
      all_values.push_back(Stip_172_set);
      all_compo_names.insert("Stip_172_set");

      Undly_109.add_element(Stip_172);
    }
    {
      xml_element Pty_402{"Pty"};
      multiset<string> Pty_402_set;
      Pty_402.add_attribute("ID", "UnderlyingInstrumentPartyID_t_765057928"); // 2
      Pty_402_set.insert("UnderlyingInstrumentPartyID_t_765057928");
      Pty_402.add_attribute("Src", "F"); // 2
      Pty_402_set.insert("F");
      Pty_402.add_attribute("R", "1"); // 2
      Pty_402_set.insert("1");
      all_values.push_back(Pty_402_set);
      all_compo_names.insert("Pty_402_set");

      {
        xml_element Sub_402{"Sub"};
        multiset<string> Sub_402_set;
        Sub_402.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1063535255"); // 3
        Sub_402_set.insert("UnderlyingInstrumentPartySubID_t_1063535255");
        Sub_402.add_attribute("Typ", "31"); // 3
        Sub_402_set.insert("31");
        all_values.push_back(Sub_402_set);
        all_compo_names.insert("Sub_402_set");

        Pty_402.add_element(Sub_402);
      }
      Undly_109.add_element(Pty_402);
    }
    elt.add_element(Undly_109);
  } // end Undly
  { // Stip
    xml_element Stip_173{"Stip"};
    multiset<string> Stip_173_set;
    Stip_173.add_attribute("Typ", "REDEMPTION"); // 1
    Stip_173_set.insert("REDEMPTION");
    Stip_173.add_attribute("Val", "StipulationValue_t_2066923752"); // 1
    Stip_173_set.insert("StipulationValue_t_2066923752");
    all_values.push_back(Stip_173_set);
    all_compo_names.insert("Stip_173_set");

    elt.add_element(Stip_173);
  } // end Stip
  { // Stip
    xml_element Stip_174{"Stip"};
    multiset<string> Stip_174_set;
    Stip_174.add_attribute("Typ", "MININCR"); // 1
    Stip_174_set.insert("MININCR");
    Stip_174.add_attribute("Val", "StipulationValue_t_726376499"); // 1
    Stip_174_set.insert("StipulationValue_t_726376499");
    all_values.push_back(Stip_174_set);
    all_compo_names.insert("Stip_174_set");

    elt.add_element(Stip_174);
  } // end Stip
  { // Leg
    xml_element Leg_91{"Leg"};
    multiset<string> Leg_91_set;
    Leg_91.add_attribute("Sym", "LegSymbol_t_1004827387"); // 1
    Leg_91_set.insert("LegSymbol_t_1004827387");
    Leg_91.add_attribute("Sfx", "WI"); // 1
    Leg_91_set.insert("WI");
    Leg_91.add_attribute("ID", "LegSecurityID_t_766218201"); // 1
    Leg_91_set.insert("LegSecurityID_t_766218201");
    Leg_91.add_attribute("Src", "H"); // 1
    Leg_91_set.insert("H");
    Leg_91.add_attribute("Prod", "5"); // 1
    Leg_91_set.insert("5");
    Leg_91.add_attribute("CFI", "LegCFICode_t_2039190632"); // 1
    Leg_91_set.insert("LegCFICode_t_2039190632");
    Leg_91.add_attribute("SecTyp", "OOP"); // 1
    Leg_91_set.insert("OOP");
    Leg_91.add_attribute("SecSubTyp", "LegSecuritySubType_t_1732617197"); // 1
    Leg_91_set.insert("LegSecuritySubType_t_1732617197");
    Leg_91.add_attribute("MMY", "1451602321"); // 1
    Leg_91_set.insert("1451602321");
    Leg_91.add_attribute("Mat", "LegMaturityDate_t_636710940"); // 1
    Leg_91_set.insert("LegMaturityDate_t_636710940");
    Leg_91.add_attribute("MatTm", "805223547"); // 1
    Leg_91_set.insert("805223547");
    Leg_91.add_attribute("CpnPmt", "LegCouponPaymentDate_t_538087485"); // 1
    Leg_91_set.insert("LegCouponPaymentDate_t_538087485");
    Leg_91.add_attribute("Issued", "LegIssueDate_t_123927031"); // 1
    Leg_91_set.insert("LegIssueDate_t_123927031");
    Leg_91.add_attribute("RepoCollSecTyp", "1664054169"); // 1
    Leg_91_set.insert("1664054169");
    Leg_91.add_attribute("RepoTrm", "622875528"); // 1
    Leg_91_set.insert("622875528");
    Leg_91.add_attribute("RepoRt", "15765640.480000"); // 1
    Leg_91_set.insert("15765640.480000");
    Leg_91.add_attribute("Fctr", "5214002.840000"); // 1
    Leg_91_set.insert("5214002.840000");
    Leg_91.add_attribute("CrdRtg", "LegCreditRating_t_468547303"); // 1
    Leg_91_set.insert("LegCreditRating_t_468547303");
    Leg_91.add_attribute("Rgstry", "LegInstrRegistry_t_1394320757"); // 1
    Leg_91_set.insert("LegInstrRegistry_t_1394320757");
    Leg_91.add_attribute("Ctry", "1455025551"); // 1
    Leg_91_set.insert("1455025551");
    Leg_91.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1233605231"); // 1
    Leg_91_set.insert("LegStateOrProvinceOfIssue_t_1233605231");
    Leg_91.add_attribute("Lcl", "LegLocaleOfIssue_t_655759710"); // 1
    Leg_91_set.insert("LegLocaleOfIssue_t_655759710");
    Leg_91.add_attribute("Redeem", "LegRedemptionDate_t_1824110211"); // 1
    Leg_91_set.insert("LegRedemptionDate_t_1824110211");
    Leg_91.add_attribute("Strk", "1496568.380000"); // 1
    Leg_91_set.insert("1496568.380000");
    Leg_91.add_attribute("StrkCcy", "USD"); // 1
    Leg_91_set.insert("USD");
    Leg_91.add_attribute("OptA", "1125529122"); // 1
    Leg_91_set.insert("1125529122");
    Leg_91.add_attribute("Cmult", "7109384.140000"); // 1
    Leg_91_set.insert("7109384.140000");
    Leg_91.add_attribute("MultTyp", "2"); // 1
    Leg_91_set.insert("2");
    Leg_91.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_91_set.insert("2");
    Leg_91.add_attribute("UOM", "lbs"); // 1
    Leg_91_set.insert("lbs");
    Leg_91.add_attribute("UOMQty", "14787901.470000"); // 1
    Leg_91_set.insert("14787901.470000");
    Leg_91.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_91_set.insert("MMbbl");
    Leg_91.add_attribute("PxUOMQty", "2946769.330000"); // 1
    Leg_91_set.insert("2946769.330000");
    Leg_91.add_attribute("TmUnit", "Mo"); // 1
    Leg_91_set.insert("Mo");
    Leg_91.add_attribute("ExerStyle", "1"); // 1
    Leg_91_set.insert("1");
    Leg_91.add_attribute("CpnRt", "1863839.170000"); // 1
    Leg_91_set.insert("1863839.170000");
    Leg_91.add_attribute("Exch", "LegSecurityExchange_t_1935448458"); // 1
    Leg_91_set.insert("LegSecurityExchange_t_1935448458");
    Leg_91.add_attribute("Issr", "LegIssuer_t_1921689252"); // 1
    Leg_91_set.insert("LegIssuer_t_1921689252");
    Leg_91.add_attribute("EncLegIssrLen", "1637986239"); // 1
    Leg_91_set.insert("1637986239");
    Leg_91.add_attribute("EncLegIssr", "EncodedLegIssuer_t_424675750"); // 1
    Leg_91_set.insert("EncodedLegIssuer_t_424675750");
    Leg_91.add_attribute("Desc", "LegSecurityDesc_t_579429151"); // 1
    Leg_91_set.insert("LegSecurityDesc_t_579429151");
    Leg_91.add_attribute("EncLegSecDescLen", "28590076"); // 1
    Leg_91_set.insert("28590076");
    Leg_91.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_548602781"); // 1
    Leg_91_set.insert("EncodedLegSecurityDesc_t_548602781");
    Leg_91.add_attribute("RatioQty", "959996.720000"); // 1
    Leg_91_set.insert("959996.720000");
    Leg_91.add_attribute("Side", "6"); // 1
    Leg_91_set.insert("6");
    Leg_91.add_attribute("Ccy", "CAN"); // 1
    Leg_91_set.insert("CAN");
    Leg_91.add_attribute("Pool", "LegPool_t_1120012908"); // 1
    Leg_91_set.insert("LegPool_t_1120012908");
    Leg_91.add_attribute("Dated", "LegDatedDate_t_1372003939"); // 1
    Leg_91_set.insert("LegDatedDate_t_1372003939");
    Leg_91.add_attribute("CSetMo", "2072425508"); // 1
    Leg_91_set.insert("2072425508");
    Leg_91.add_attribute("IntAcrl", "LegInterestAccrualDate_t_206134491"); // 1
    Leg_91_set.insert("LegInterestAccrualDate_t_206134491");
    Leg_91.add_attribute("PutCall", "2027763649"); // 1
    Leg_91_set.insert("2027763649");
    Leg_91.add_attribute("LegOptionRatio", "17490520.710000"); // 1
    Leg_91_set.insert("17490520.710000");
    Leg_91.add_attribute("Px", "3557913.290000"); // 1
    Leg_91_set.insert("3557913.290000");
    all_values.push_back(Leg_91_set);
    all_compo_names.insert("Leg_91_set");

    {
      xml_element LegAID_86{"LegAID"};
      multiset<string> LegAID_86_set;
      LegAID_86.add_attribute("SecAltID", "LegSecurityAltID_t_671778311"); // 2
      LegAID_86_set.insert("LegSecurityAltID_t_671778311");
      LegAID_86.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_86_set.insert("A");
      all_values.push_back(LegAID_86_set);
      all_compo_names.insert("LegAID_86_set");

      Leg_91.add_element(LegAID_86);
    }
    elt.add_element(Leg_91);
  } // end Leg
  { // Leg
    xml_element Leg_92{"Leg"};
    multiset<string> Leg_92_set;
    Leg_92.add_attribute("Sym", "LegSymbol_t_1481320451"); // 1
    Leg_92_set.insert("LegSymbol_t_1481320451");
    Leg_92.add_attribute("Sfx", "WI"); // 1
    Leg_92_set.insert("WI");
    Leg_92.add_attribute("ID", "LegSecurityID_t_1120172685"); // 1
    Leg_92_set.insert("LegSecurityID_t_1120172685");
    Leg_92.add_attribute("Src", "M"); // 1
    Leg_92_set.insert("M");
    Leg_92.add_attribute("Prod", "7"); // 1
    Leg_92_set.insert("7");
    Leg_92.add_attribute("CFI", "LegCFICode_t_451479185"); // 1
    Leg_92_set.insert("LegCFICode_t_451479185");
    Leg_92.add_attribute("SecTyp", "MLEG"); // 1
    Leg_92_set.insert("MLEG");
    Leg_92.add_attribute("SecSubTyp", "LegSecuritySubType_t_1205852390"); // 1
    Leg_92_set.insert("LegSecuritySubType_t_1205852390");
    Leg_92.add_attribute("MMY", "591080001"); // 1
    Leg_92_set.insert("591080001");
    Leg_92.add_attribute("Mat", "LegMaturityDate_t_1268347179"); // 1
    Leg_92_set.insert("LegMaturityDate_t_1268347179");
    Leg_92.add_attribute("MatTm", "1392236307"); // 1
    Leg_92_set.insert("1392236307");
    Leg_92.add_attribute("CpnPmt", "LegCouponPaymentDate_t_379044811"); // 1
    Leg_92_set.insert("LegCouponPaymentDate_t_379044811");
    Leg_92.add_attribute("Issued", "LegIssueDate_t_1042552783"); // 1
    Leg_92_set.insert("LegIssueDate_t_1042552783");
    Leg_92.add_attribute("RepoCollSecTyp", "882738898"); // 1
    Leg_92_set.insert("882738898");
    Leg_92.add_attribute("RepoTrm", "803720561"); // 1
    Leg_92_set.insert("803720561");
    Leg_92.add_attribute("RepoRt", "16219819.350000"); // 1
    Leg_92_set.insert("16219819.350000");
    Leg_92.add_attribute("Fctr", "9113289.750000"); // 1
    Leg_92_set.insert("9113289.750000");
    Leg_92.add_attribute("CrdRtg", "LegCreditRating_t_1352323342"); // 1
    Leg_92_set.insert("LegCreditRating_t_1352323342");
    Leg_92.add_attribute("Rgstry", "LegInstrRegistry_t_1717981607"); // 1
    Leg_92_set.insert("LegInstrRegistry_t_1717981607");
    Leg_92.add_attribute("Ctry", "1562794580"); // 1
    Leg_92_set.insert("1562794580");
    Leg_92.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1330006524"); // 1
    Leg_92_set.insert("LegStateOrProvinceOfIssue_t_1330006524");
    Leg_92.add_attribute("Lcl", "LegLocaleOfIssue_t_187897916"); // 1
    Leg_92_set.insert("LegLocaleOfIssue_t_187897916");
    Leg_92.add_attribute("Redeem", "LegRedemptionDate_t_535323840"); // 1
    Leg_92_set.insert("LegRedemptionDate_t_535323840");
    Leg_92.add_attribute("Strk", "5545268.160000"); // 1
    Leg_92_set.insert("5545268.160000");
    Leg_92.add_attribute("StrkCcy", "CHF"); // 1
    Leg_92_set.insert("CHF");
    Leg_92.add_attribute("OptA", "434806817"); // 1
    Leg_92_set.insert("434806817");
    Leg_92.add_attribute("Cmult", "18618918.480000"); // 1
    Leg_92_set.insert("18618918.480000");
    Leg_92.add_attribute("MultTyp", "2"); // 1
    Leg_92_set.insert("2");
    Leg_92.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_92_set.insert("4");
    Leg_92.add_attribute("UOM", "Bcf"); // 1
    Leg_92_set.insert("Bcf");
    Leg_92.add_attribute("UOMQty", "4310864.630000"); // 1
    Leg_92_set.insert("4310864.630000");
    Leg_92.add_attribute("PxUOM", "Bbl"); // 1
    Leg_92_set.insert("Bbl");
    Leg_92.add_attribute("PxUOMQty", "14807908.110000"); // 1
    Leg_92_set.insert("14807908.110000");
    Leg_92.add_attribute("TmUnit", "Wk"); // 1
    Leg_92_set.insert("Wk");
    Leg_92.add_attribute("ExerStyle", "1"); // 1
    Leg_92_set.insert("1");
    Leg_92.add_attribute("CpnRt", "19322699.960000"); // 1
    Leg_92_set.insert("19322699.960000");
    Leg_92.add_attribute("Exch", "LegSecurityExchange_t_548620365"); // 1
    Leg_92_set.insert("LegSecurityExchange_t_548620365");
    Leg_92.add_attribute("Issr", "LegIssuer_t_311362405"); // 1
    Leg_92_set.insert("LegIssuer_t_311362405");
    Leg_92.add_attribute("EncLegIssrLen", "375866349"); // 1
    Leg_92_set.insert("375866349");
    Leg_92.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1816967545"); // 1
    Leg_92_set.insert("EncodedLegIssuer_t_1816967545");
    Leg_92.add_attribute("Desc", "LegSecurityDesc_t_1703598713"); // 1
    Leg_92_set.insert("LegSecurityDesc_t_1703598713");
    Leg_92.add_attribute("EncLegSecDescLen", "754911160"); // 1
    Leg_92_set.insert("754911160");
    Leg_92.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_712036680"); // 1
    Leg_92_set.insert("EncodedLegSecurityDesc_t_712036680");
    Leg_92.add_attribute("RatioQty", "4388539.630000"); // 1
    Leg_92_set.insert("4388539.630000");
    Leg_92.add_attribute("Side", "A"); // 1
    Leg_92_set.insert("A");
    Leg_92.add_attribute("Ccy", "JPY"); // 1
    Leg_92_set.insert("JPY");
    Leg_92.add_attribute("Pool", "LegPool_t_763471415"); // 1
    Leg_92_set.insert("LegPool_t_763471415");
    Leg_92.add_attribute("Dated", "LegDatedDate_t_1904516575"); // 1
    Leg_92_set.insert("LegDatedDate_t_1904516575");
    Leg_92.add_attribute("CSetMo", "765493870"); // 1
    Leg_92_set.insert("765493870");
    Leg_92.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2093477940"); // 1
    Leg_92_set.insert("LegInterestAccrualDate_t_2093477940");
    Leg_92.add_attribute("PutCall", "2092414491"); // 1
    Leg_92_set.insert("2092414491");
    Leg_92.add_attribute("LegOptionRatio", "13008177.100000"); // 1
    Leg_92_set.insert("13008177.100000");
    Leg_92.add_attribute("Px", "5005211.080000"); // 1
    Leg_92_set.insert("5005211.080000");
    all_values.push_back(Leg_92_set);
    all_compo_names.insert("Leg_92_set");

    {
      xml_element LegAID_87{"LegAID"};
      multiset<string> LegAID_87_set;
      LegAID_87.add_attribute("SecAltID", "LegSecurityAltID_t_57770620"); // 2
      LegAID_87_set.insert("LegSecurityAltID_t_57770620");
      LegAID_87.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_87_set.insert("4");
      all_values.push_back(LegAID_87_set);
      all_compo_names.insert("LegAID_87_set");

      Leg_92.add_element(LegAID_87);
    }
    elt.add_element(Leg_92);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_33{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_33_set;
    SprdBnchmkCurve_33.add_attribute("Spread", "9353279.250000"); // 1
    SprdBnchmkCurve_33_set.insert("9353279.250000");
    SprdBnchmkCurve_33.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_33_set.insert("EUR");
    SprdBnchmkCurve_33.add_attribute("Name", "Euribor"); // 1
    SprdBnchmkCurve_33_set.insert("Euribor");
    SprdBnchmkCurve_33.add_attribute("Point", "BenchmarkCurvePoint_t_132796945"); // 1
    SprdBnchmkCurve_33_set.insert("BenchmarkCurvePoint_t_132796945");
    SprdBnchmkCurve_33.add_attribute("Px", "14231285.170000"); // 1
    SprdBnchmkCurve_33_set.insert("14231285.170000");
    SprdBnchmkCurve_33.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_33_set.insert("6");
    SprdBnchmkCurve_33.add_attribute("SecID", "BenchmarkSecurityID_t_1613587756"); // 1
    SprdBnchmkCurve_33_set.insert("BenchmarkSecurityID_t_1613587756");
    SprdBnchmkCurve_33.add_attribute("SecIDSrc", "1"); // 1
    SprdBnchmkCurve_33_set.insert("1");
    all_values.push_back(SprdBnchmkCurve_33_set);
    all_compo_names.insert("SprdBnchmkCurve_33_set");

    elt.add_element(SprdBnchmkCurve_33);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_28{"Yield"};
    multiset<string> Yield_28_set;
    Yield_28.add_attribute("Typ", "AFTERTAX"); // 1
    Yield_28_set.insert("AFTERTAX");
    Yield_28.add_attribute("Yld", "13983741.040000"); // 1
    Yield_28_set.insert("13983741.040000");
    Yield_28.add_attribute("CalcDt", "YieldCalcDate_t_1441094123"); // 1
    Yield_28_set.insert("YieldCalcDate_t_1441094123");
    Yield_28.add_attribute("RedDt", "YieldRedemptionDate_t_1800603682"); // 1
    Yield_28_set.insert("YieldRedemptionDate_t_1800603682");
    Yield_28.add_attribute("RedPx", "17742404.530000"); // 1
    Yield_28_set.insert("17742404.530000");
    Yield_28.add_attribute("RedPxTyp", "18"); // 1
    Yield_28_set.insert("18");
    all_values.push_back(Yield_28_set);
    all_compo_names.insert("Yield_28_set");

    elt.add_element(Yield_28);
  } // end Yield
  { // MktSegGrp
    xml_element MktSegGrp_4{"MktSegGrp"};
    multiset<string> MktSegGrp_4_set;
    MktSegGrp_4.add_attribute("MktID", "MarketID_t_381667965"); // 1
    MktSegGrp_4_set.insert("MarketID_t_381667965");
    MktSegGrp_4.add_attribute("MktSegID", "MarketSegmentID_t_1822614701"); // 1
    MktSegGrp_4_set.insert("MarketSegmentID_t_1822614701");
    all_values.push_back(MktSegGrp_4_set);
    all_compo_names.insert("MktSegGrp_4_set");

    {
      xml_element SecTrdgRules_4{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_6{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_6_set;
        BaseTrdgRules_6.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_6_set.insert("2");
        BaseTrdgRules_6.add_attribute("MinTrdVol", "19402996.860000"); // 3
        BaseTrdgRules_6_set.insert("19402996.860000");
        BaseTrdgRules_6.add_attribute("MaxTrdVol", "20091496.680000"); // 3
        BaseTrdgRules_6_set.insert("20091496.680000");
        BaseTrdgRules_6.add_attribute("MxPxVar", "9982720.010000"); // 3
        BaseTrdgRules_6_set.insert("9982720.010000");
        BaseTrdgRules_6.add_attribute("ImpldMktInd", "2"); // 3
        BaseTrdgRules_6_set.insert("2");
        BaseTrdgRules_6.add_attribute("TrdCcy", "CHF"); // 3
        BaseTrdgRules_6_set.insert("CHF");
        BaseTrdgRules_6.add_attribute("RndLot", "5022817.460000"); // 3
        BaseTrdgRules_6_set.insert("5022817.460000");
        BaseTrdgRules_6.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_6_set.insert("1");
        BaseTrdgRules_6.add_attribute("MlegPxMeth", "0"); // 3
        BaseTrdgRules_6_set.insert("0");
        BaseTrdgRules_6.add_attribute("PxTyp", "14"); // 3
        BaseTrdgRules_6_set.insert("14");
        all_values.push_back(BaseTrdgRules_6_set);
        all_compo_names.insert("BaseTrdgRules_6_set");

        {
          xml_element TickRules_6{"TickRules"};
          multiset<string> TickRules_6_set;
          TickRules_6.add_attribute("StartTickPxRng", "17688840.590000"); // 4
          TickRules_6_set.insert("17688840.590000");
          TickRules_6.add_attribute("EndTickPxRng", "8118923.270000"); // 4
          TickRules_6_set.insert("8118923.270000");
          TickRules_6.add_attribute("TickIncr", "19381307.790000"); // 4
          TickRules_6_set.insert("19381307.790000");
          TickRules_6.add_attribute("TickRuleTyp", "4"); // 4
          TickRules_6_set.insert("4");
          all_values.push_back(TickRules_6_set);
          all_compo_names.insert("TickRules_6_set");

          BaseTrdgRules_6.add_element(TickRules_6);
        }
        {
          xml_element LotTypeRules_6{"LotTypeRules"};
          multiset<string> LotTypeRules_6_set;
          LotTypeRules_6.add_attribute("LotTyp", "2"); // 4
          LotTypeRules_6_set.insert("2");
          LotTypeRules_6.add_attribute("MinLotSz", "18325601.860000"); // 4
          LotTypeRules_6_set.insert("18325601.860000");
          all_values.push_back(LotTypeRules_6_set);
          all_compo_names.insert("LotTypeRules_6_set");

          BaseTrdgRules_6.add_element(LotTypeRules_6);
        }
        {
          xml_element PxLmts_6{"PxLmts"};
          multiset<string> PxLmts_6_set;
          PxLmts_6.add_attribute("PxLmtTyp", "2"); // 4
          PxLmts_6_set.insert("2");
          PxLmts_6.add_attribute("LowLmtPx", "10795792.500000"); // 4
          PxLmts_6_set.insert("10795792.500000");
          PxLmts_6.add_attribute("HiLmtPx", "20688077.990000"); // 4
          PxLmts_6_set.insert("20688077.990000");
          PxLmts_6.add_attribute("TrdgRefPx", "11399639.330000"); // 4
          PxLmts_6_set.insert("11399639.330000");
          all_values.push_back(PxLmts_6_set);
          all_compo_names.insert("PxLmts_6_set");

          BaseTrdgRules_6.add_element(PxLmts_6);
        }
        SecTrdgRules_4.add_element(BaseTrdgRules_6);
      }
      {
        xml_element TrdgSesRulesGrp_4{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_4_set;
        TrdgSesRulesGrp_4.add_attribute("SesID", "3"); // 3
        TrdgSesRulesGrp_4_set.insert("3");
        TrdgSesRulesGrp_4.add_attribute("SesSub", "6"); // 3
        TrdgSesRulesGrp_4_set.insert("6");
        all_values.push_back(TrdgSesRulesGrp_4_set);
        all_compo_names.insert("TrdgSesRulesGrp_4_set");

        {
          xml_element TrdgSesRules_4{"TrdgSesRules"};
          {
            xml_element OrdTypRules_9{"OrdTypRules"};
            multiset<string> OrdTypRules_9_set;
            OrdTypRules_9.add_attribute("OrdTyp", "E"); // 5
            OrdTypRules_9_set.insert("E");
            all_values.push_back(OrdTypRules_9_set);
            all_compo_names.insert("OrdTypRules_9_set");

            TrdgSesRules_4.add_element(OrdTypRules_9);
          }
          {
            xml_element TmInForceRules_8{"TmInForceRules"};
            multiset<string> TmInForceRules_8_set;
            TmInForceRules_8.add_attribute("TmInForce", "3"); // 5
            TmInForceRules_8_set.insert("3");
            all_values.push_back(TmInForceRules_8_set);
            all_compo_names.insert("TmInForceRules_8_set");

            TrdgSesRules_4.add_element(TmInForceRules_8);
          }
          {
            xml_element ExecInstRules_7{"ExecInstRules"};
            multiset<string> ExecInstRules_7_set;
            ExecInstRules_7.add_attribute("ExecInstValu", "b"); // 5
            ExecInstRules_7_set.insert("b");
            all_values.push_back(ExecInstRules_7_set);
            all_compo_names.insert("ExecInstRules_7_set");

            TrdgSesRules_4.add_element(ExecInstRules_7);
          }
          {
            xml_element MtchRules_4{"MtchRules"};
            multiset<string> MtchRules_4_set;
            MtchRules_4.add_attribute("MtchAlgo", "MatchAlgorithm_t_17611195"); // 5
            MtchRules_4_set.insert("MatchAlgorithm_t_17611195");
            MtchRules_4.add_attribute("MtchTyp", "A3"); // 5
            MtchRules_4_set.insert("A3");
            all_values.push_back(MtchRules_4_set);
            all_compo_names.insert("MtchRules_4_set");

            TrdgSesRules_4.add_element(MtchRules_4);
          }
          {
            xml_element MDFeedTyps_4{"MDFeedTyps"};
            multiset<string> MDFeedTyps_4_set;
            MDFeedTyps_4.add_attribute("MDFeedTyp", "MDFeedType_t_272920560"); // 5
            MDFeedTyps_4_set.insert("MDFeedType_t_272920560");
            MDFeedTyps_4.add_attribute("MktDepth", "399279160"); // 5
            MDFeedTyps_4_set.insert("399279160");
            MDFeedTyps_4.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_4_set.insert("2");
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
        Attrb_17.add_attribute("Typ", "9"); // 3
        Attrb_17_set.insert("9");
        Attrb_17.add_attribute("Val", "NestedInstrAttribValue_t_192095199"); // 3
        Attrb_17_set.insert("NestedInstrAttribValue_t_192095199");
        all_values.push_back(Attrb_17_set);
        all_compo_names.insert("Attrb_17_set");

        SecTrdgRules_4.add_element(Attrb_17);
      }
      MktSegGrp_4.add_element(SecTrdgRules_4);
    }
    {
      xml_element StrkRules_4{"StrkRules"};
      multiset<string> StrkRules_4_set;
      StrkRules_4.add_attribute("StrkRule", "StrikeRuleID_t_1913038577"); // 2
      StrkRules_4_set.insert("StrikeRuleID_t_1913038577");
      StrkRules_4.add_attribute("StartStrkPxRng", "9192816.240000"); // 2
      StrkRules_4_set.insert("9192816.240000");
      StrkRules_4.add_attribute("EndStrkPxRng", "7483826.530000"); // 2
      StrkRules_4_set.insert("7483826.530000");
      StrkRules_4.add_attribute("StrkIncr", "15317375.250000"); // 2
      StrkRules_4_set.insert("15317375.250000");
      StrkRules_4.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_4_set.insert("1");
      all_values.push_back(StrkRules_4_set);
      all_compo_names.insert("StrkRules_4_set");

      {
        xml_element MatRules_4{"MatRules"};
        multiset<string> MatRules_4_set;
        MatRules_4.add_attribute("MatRuleID", "MaturityRuleID_t_1250664399"); // 3
        MatRules_4_set.insert("MaturityRuleID_t_1250664399");
        MatRules_4.add_attribute("MMYFmt", "2"); // 3
        MatRules_4_set.insert("2");
        MatRules_4.add_attribute("MMYIncrUnits", "1"); // 3
        MatRules_4_set.insert("1");
        MatRules_4.add_attribute("StartMMY", "105983605"); // 3
        MatRules_4_set.insert("105983605");
        MatRules_4.add_attribute("EndMMY", "716767727"); // 3
        MatRules_4_set.insert("716767727");
        MatRules_4.add_attribute("MMYIncr", "117072461"); // 3
        MatRules_4_set.insert("117072461");
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
    MktSegGrp_5.add_attribute("MktID", "MarketID_t_2044114384"); // 1
    MktSegGrp_5_set.insert("MarketID_t_2044114384");
    MktSegGrp_5.add_attribute("MktSegID", "MarketSegmentID_t_110346958"); // 1
    MktSegGrp_5_set.insert("MarketSegmentID_t_110346958");
    all_values.push_back(MktSegGrp_5_set);
    all_compo_names.insert("MktSegGrp_5_set");

    {
      xml_element SecTrdgRules_5{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_7{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_7_set;
        BaseTrdgRules_7.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_7_set.insert("0");
        BaseTrdgRules_7.add_attribute("MinTrdVol", "17291909.220000"); // 3
        BaseTrdgRules_7_set.insert("17291909.220000");
        BaseTrdgRules_7.add_attribute("MaxTrdVol", "17842067.820000"); // 3
        BaseTrdgRules_7_set.insert("17842067.820000");
        BaseTrdgRules_7.add_attribute("MxPxVar", "8531024.440000"); // 3
        BaseTrdgRules_7_set.insert("8531024.440000");
        BaseTrdgRules_7.add_attribute("ImpldMktInd", "1"); // 3
        BaseTrdgRules_7_set.insert("1");
        BaseTrdgRules_7.add_attribute("TrdCcy", "JPY"); // 3
        BaseTrdgRules_7_set.insert("JPY");
        BaseTrdgRules_7.add_attribute("RndLot", "9135968.530000"); // 3
        BaseTrdgRules_7_set.insert("9135968.530000");
        BaseTrdgRules_7.add_attribute("MlegModel", "2"); // 3
        BaseTrdgRules_7_set.insert("2");
        BaseTrdgRules_7.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_7_set.insert("3");
        BaseTrdgRules_7.add_attribute("PxTyp", "7"); // 3
        BaseTrdgRules_7_set.insert("7");
        all_values.push_back(BaseTrdgRules_7_set);
        all_compo_names.insert("BaseTrdgRules_7_set");

        {
          xml_element TickRules_7{"TickRules"};
          multiset<string> TickRules_7_set;
          TickRules_7.add_attribute("StartTickPxRng", "11851526.520000"); // 4
          TickRules_7_set.insert("11851526.520000");
          TickRules_7.add_attribute("EndTickPxRng", "246094.950000"); // 4
          TickRules_7_set.insert("246094.950000");
          TickRules_7.add_attribute("TickIncr", "1027192.270000"); // 4
          TickRules_7_set.insert("1027192.270000");
          TickRules_7.add_attribute("TickRuleTyp", "2"); // 4
          TickRules_7_set.insert("2");
          all_values.push_back(TickRules_7_set);
          all_compo_names.insert("TickRules_7_set");

          BaseTrdgRules_7.add_element(TickRules_7);
        }
        {
          xml_element LotTypeRules_7{"LotTypeRules"};
          multiset<string> LotTypeRules_7_set;
          LotTypeRules_7.add_attribute("LotTyp", "1"); // 4
          LotTypeRules_7_set.insert("1");
          LotTypeRules_7.add_attribute("MinLotSz", "237288.500000"); // 4
          LotTypeRules_7_set.insert("237288.500000");
          all_values.push_back(LotTypeRules_7_set);
          all_compo_names.insert("LotTypeRules_7_set");

          BaseTrdgRules_7.add_element(LotTypeRules_7);
        }
        {
          xml_element PxLmts_7{"PxLmts"};
          multiset<string> PxLmts_7_set;
          PxLmts_7.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_7_set.insert("1");
          PxLmts_7.add_attribute("LowLmtPx", "18415369.820000"); // 4
          PxLmts_7_set.insert("18415369.820000");
          PxLmts_7.add_attribute("HiLmtPx", "9430104.740000"); // 4
          PxLmts_7_set.insert("9430104.740000");
          PxLmts_7.add_attribute("TrdgRefPx", "3774260.160000"); // 4
          PxLmts_7_set.insert("3774260.160000");
          all_values.push_back(PxLmts_7_set);
          all_compo_names.insert("PxLmts_7_set");

          BaseTrdgRules_7.add_element(PxLmts_7);
        }
        SecTrdgRules_5.add_element(BaseTrdgRules_7);
      }
      {
        xml_element TrdgSesRulesGrp_5{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_5_set;
        TrdgSesRulesGrp_5.add_attribute("SesID", "4"); // 3
        TrdgSesRulesGrp_5_set.insert("4");
        TrdgSesRulesGrp_5.add_attribute("SesSub", "1"); // 3
        TrdgSesRulesGrp_5_set.insert("1");
        all_values.push_back(TrdgSesRulesGrp_5_set);
        all_compo_names.insert("TrdgSesRulesGrp_5_set");

        {
          xml_element TrdgSesRules_5{"TrdgSesRules"};
          {
            xml_element OrdTypRules_10{"OrdTypRules"};
            multiset<string> OrdTypRules_10_set;
            OrdTypRules_10.add_attribute("OrdTyp", "G"); // 5
            OrdTypRules_10_set.insert("G");
            all_values.push_back(OrdTypRules_10_set);
            all_compo_names.insert("OrdTypRules_10_set");

            TrdgSesRules_5.add_element(OrdTypRules_10);
          }
          {
            xml_element TmInForceRules_9{"TmInForceRules"};
            multiset<string> TmInForceRules_9_set;
            TmInForceRules_9.add_attribute("TmInForce", "7"); // 5
            TmInForceRules_9_set.insert("7");
            all_values.push_back(TmInForceRules_9_set);
            all_compo_names.insert("TmInForceRules_9_set");

            TrdgSesRules_5.add_element(TmInForceRules_9);
          }
          {
            xml_element ExecInstRules_8{"ExecInstRules"};
            multiset<string> ExecInstRules_8_set;
            ExecInstRules_8.add_attribute("ExecInstValu", "C"); // 5
            ExecInstRules_8_set.insert("C");
            all_values.push_back(ExecInstRules_8_set);
            all_compo_names.insert("ExecInstRules_8_set");

            TrdgSesRules_5.add_element(ExecInstRules_8);
          }
          {
            xml_element MtchRules_5{"MtchRules"};
            multiset<string> MtchRules_5_set;
            MtchRules_5.add_attribute("MtchAlgo", "MatchAlgorithm_t_1734074020"); // 5
            MtchRules_5_set.insert("MatchAlgorithm_t_1734074020");
            MtchRules_5.add_attribute("MtchTyp", "A1"); // 5
            MtchRules_5_set.insert("A1");
            all_values.push_back(MtchRules_5_set);
            all_compo_names.insert("MtchRules_5_set");

            TrdgSesRules_5.add_element(MtchRules_5);
          }
          {
            xml_element MDFeedTyps_5{"MDFeedTyps"};
            multiset<string> MDFeedTyps_5_set;
            MDFeedTyps_5.add_attribute("MDFeedTyp", "MDFeedType_t_900826916"); // 5
            MDFeedTyps_5_set.insert("MDFeedType_t_900826916");
            MDFeedTyps_5.add_attribute("MktDepth", "1630704757"); // 5
            MDFeedTyps_5_set.insert("1630704757");
            MDFeedTyps_5.add_attribute("MDBkTyp", "1"); // 5
            MDFeedTyps_5_set.insert("1");
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
        Attrb_18.add_attribute("Typ", "1"); // 3
        Attrb_18_set.insert("1");
        Attrb_18.add_attribute("Val", "NestedInstrAttribValue_t_1212412031"); // 3
        Attrb_18_set.insert("NestedInstrAttribValue_t_1212412031");
        all_values.push_back(Attrb_18_set);
        all_compo_names.insert("Attrb_18_set");

        SecTrdgRules_5.add_element(Attrb_18);
      }
      MktSegGrp_5.add_element(SecTrdgRules_5);
    }
    {
      xml_element StrkRules_5{"StrkRules"};
      multiset<string> StrkRules_5_set;
      StrkRules_5.add_attribute("StrkRule", "StrikeRuleID_t_637512346"); // 2
      StrkRules_5_set.insert("StrikeRuleID_t_637512346");
      StrkRules_5.add_attribute("StartStrkPxRng", "15274525.540000"); // 2
      StrkRules_5_set.insert("15274525.540000");
      StrkRules_5.add_attribute("EndStrkPxRng", "7154434.570000"); // 2
      StrkRules_5_set.insert("7154434.570000");
      StrkRules_5.add_attribute("StrkIncr", "14141994.140000"); // 2
      StrkRules_5_set.insert("14141994.140000");
      StrkRules_5.add_attribute("StrkExrStyle", "0"); // 2
      StrkRules_5_set.insert("0");
      all_values.push_back(StrkRules_5_set);
      all_compo_names.insert("StrkRules_5_set");

      {
        xml_element MatRules_5{"MatRules"};
        multiset<string> MatRules_5_set;
        MatRules_5.add_attribute("MatRuleID", "MaturityRuleID_t_1629040310"); // 3
        MatRules_5_set.insert("MaturityRuleID_t_1629040310");
        MatRules_5.add_attribute("MMYFmt", "2"); // 3
        MatRules_5_set.insert("2");
        MatRules_5.add_attribute("MMYIncrUnits", "1"); // 3
        MatRules_5_set.insert("1");
        MatRules_5.add_attribute("StartMMY", "1458838976"); // 3
        MatRules_5_set.insert("1458838976");
        MatRules_5.add_attribute("EndMMY", "1619409875"); // 3
        MatRules_5_set.insert("1619409875");
        MatRules_5.add_attribute("MMYIncr", "2025585493"); // 3
        MatRules_5_set.insert("2025585493");
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
