#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityDefinition.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityDefinition_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDef" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinition_message_t_0;
  elt.add_attribute("RptID", "1692179968"); // 0
  SecurityDefinition_message_t_0.insert("1692179968");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_934026822"); // 0
  SecurityDefinition_message_t_0.insert("ClearingBusinessDate_t_934026822");
  elt.add_attribute("ReqID", "SecurityReqID_t_833250288"); // 0
  SecurityDefinition_message_t_0.insert("SecurityReqID_t_833250288");
  elt.add_attribute("RspID", "SecurityResponseID_t_1483963663"); // 0
  SecurityDefinition_message_t_0.insert("SecurityResponseID_t_1483963663");
  elt.add_attribute("RspTyp", "1"); // 0
  SecurityDefinition_message_t_0.insert("1");
  elt.add_attribute("CorpActn", "I"); // 0
  SecurityDefinition_message_t_0.insert("I");
  elt.add_attribute("Ccy", "USD"); // 0
  SecurityDefinition_message_t_0.insert("USD");
  elt.add_attribute("Txt", "Text_t_1349782692"); // 0
  SecurityDefinition_message_t_0.insert("Text_t_1349782692");
  elt.add_attribute("EncTxtLen", "590838724"); // 0
  SecurityDefinition_message_t_0.insert("590838724");
  elt.add_attribute("EncTxt", "EncodedText_t_939883991"); // 0
  SecurityDefinition_message_t_0.insert("EncodedText_t_939883991");
  elt.add_attribute("TxnTm", "TransactTime_t_965064290"); // 0
  SecurityDefinition_message_t_0.insert("TransactTime_t_965064290");
  all_values.push_back(SecurityDefinition_message_t_0);
  all_compo_names.insert("SecurityDefinition_message_t");

  { // Hdr
    xml_element Hdr_80{"Hdr"};
    multiset<string> Hdr_80_set;
    Hdr_80.add_attribute("SeqNum", "1614664043"); // 1
    Hdr_80_set.insert("1614664043");
    Hdr_80.add_attribute("SID", "SenderCompID_t_1602280030"); // 1
    Hdr_80_set.insert("SenderCompID_t_1602280030");
    Hdr_80.add_attribute("TID", "TargetCompID_t_458316848"); // 1
    Hdr_80_set.insert("TargetCompID_t_458316848");
    Hdr_80.add_attribute("OBID", "OnBehalfOfCompID_t_214245752"); // 1
    Hdr_80_set.insert("OnBehalfOfCompID_t_214245752");
    Hdr_80.add_attribute("D2ID", "DeliverToCompID_t_345295264"); // 1
    Hdr_80_set.insert("DeliverToCompID_t_345295264");
    Hdr_80.add_attribute("SSub", "SenderSubID_t_386738448"); // 1
    Hdr_80_set.insert("SenderSubID_t_386738448");
    Hdr_80.add_attribute("SLoc", "SenderLocationID_t_829742910"); // 1
    Hdr_80_set.insert("SenderLocationID_t_829742910");
    Hdr_80.add_attribute("TSub", "TargetSubID_t_1856584778"); // 1
    Hdr_80_set.insert("TargetSubID_t_1856584778");
    Hdr_80.add_attribute("TLoc", "TargetLocationID_t_1989557228"); // 1
    Hdr_80_set.insert("TargetLocationID_t_1989557228");
    Hdr_80.add_attribute("OBSub", "OnBehalfOfSubID_t_1085769310"); // 1
    Hdr_80_set.insert("OnBehalfOfSubID_t_1085769310");
    Hdr_80.add_attribute("OBLoc", "OnBehalfOfLocationID_t_326855176"); // 1
    Hdr_80_set.insert("OnBehalfOfLocationID_t_326855176");
    Hdr_80.add_attribute("D2Sub", "DeliverToSubID_t_2108422698"); // 1
    Hdr_80_set.insert("DeliverToSubID_t_2108422698");
    Hdr_80.add_attribute("D2Loc", "DeliverToLocationID_t_2060894785"); // 1
    Hdr_80_set.insert("DeliverToLocationID_t_2060894785");
    Hdr_80.add_attribute("PosDup", "N"); // 1
    Hdr_80_set.insert("N");
    Hdr_80.add_attribute("PosRsnd", "Y"); // 1
    Hdr_80_set.insert("Y");
    Hdr_80.add_attribute("Snt", "SendingTime_t_1511130835"); // 1
    Hdr_80_set.insert("SendingTime_t_1511130835");
    Hdr_80.add_attribute("OrigSnt", "OrigSendingTime_t_1222151105"); // 1
    Hdr_80_set.insert("OrigSendingTime_t_1222151105");
    Hdr_80.add_attribute("MsgEncd", "MessageEncoding_t_677566387"); // 1
    Hdr_80_set.insert("MessageEncoding_t_677566387");
    all_values.push_back(Hdr_80_set);
    all_compo_names.insert("Hdr_80_set");

    {
      xml_element Hop_80{"Hop"};
      multiset<string> Hop_80_set;
      Hop_80.add_attribute("ID", "HopCompID_t_848789761"); // 2
      Hop_80_set.insert("HopCompID_t_848789761");
      Hop_80.add_attribute("Ref", "766847425"); // 2
      Hop_80_set.insert("766847425");
      Hop_80.add_attribute("Snt", "HopSendingTime_t_1611593209"); // 2
      Hop_80_set.insert("HopSendingTime_t_1611593209");
      all_values.push_back(Hop_80_set);
      all_compo_names.insert("Hop_80_set");

      Hdr_80.add_element(Hop_80);
    }
    elt.add_element(Hdr_80);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_12{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_12_set;
    ApplSeqCtrl_12.add_attribute("ApplID", "ApplID_t_1682040049"); // 1
    ApplSeqCtrl_12_set.insert("ApplID_t_1682040049");
    ApplSeqCtrl_12.add_attribute("ApplSeqNum", "103327441"); // 1
    ApplSeqCtrl_12_set.insert("103327441");
    ApplSeqCtrl_12.add_attribute("ApplLastSeqNum", "1271594651"); // 1
    ApplSeqCtrl_12_set.insert("1271594651");
    ApplSeqCtrl_12.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_12_set.insert("false");
    all_values.push_back(ApplSeqCtrl_12_set);
    all_compo_names.insert("ApplSeqCtrl_12_set");

    elt.add_element(ApplSeqCtrl_12);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_73{"Instrmt"};
    multiset<string> Instrmt_73_set;
    Instrmt_73.add_attribute("Sym", "Symbol_t_482262907"); // 1
    Instrmt_73_set.insert("Symbol_t_482262907");
    Instrmt_73.add_attribute("Sfx", "CD"); // 1
    Instrmt_73_set.insert("CD");
    Instrmt_73.add_attribute("ID", "SecurityID_t_1809823061"); // 1
    Instrmt_73_set.insert("SecurityID_t_1809823061");
    Instrmt_73.add_attribute("Src", "L"); // 1
    Instrmt_73_set.insert("L");
    Instrmt_73.add_attribute("Prod", "13"); // 1
    Instrmt_73_set.insert("13");
    Instrmt_73.add_attribute("ProdCmplx", "ProductComplex_t_627403703"); // 1
    Instrmt_73_set.insert("ProductComplex_t_627403703");
    Instrmt_73.add_attribute("SecGrp", "SecurityGroup_t_540282026"); // 1
    Instrmt_73_set.insert("SecurityGroup_t_540282026");
    Instrmt_73.add_attribute("CFI", "CFICode_t_2021187445"); // 1
    Instrmt_73_set.insert("CFICode_t_2021187445");
    Instrmt_73.add_attribute("SecTyp", "TAXA"); // 1
    Instrmt_73_set.insert("TAXA");
    Instrmt_73.add_attribute("SubTyp", "SecuritySubType_t_754527779"); // 1
    Instrmt_73_set.insert("SecuritySubType_t_754527779");
    Instrmt_73.add_attribute("MMY", "218999062"); // 1
    Instrmt_73_set.insert("218999062");
    Instrmt_73.add_attribute("MatDt", "MaturityDate_t_1472459000"); // 1
    Instrmt_73_set.insert("MaturityDate_t_1472459000");
    Instrmt_73.add_attribute("MatTm", "1584270689"); // 1
    Instrmt_73_set.insert("1584270689");
    Instrmt_73.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2075583840"); // 1
    Instrmt_73_set.insert("SettleOnOpenFlag_t_2075583840");
    Instrmt_73.add_attribute("AsgnMeth", "1314532580"); // 1
    Instrmt_73_set.insert("1314532580");
    Instrmt_73.add_attribute("Status", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("CpnPmt", "CouponPaymentDate_t_254955368"); // 1
    Instrmt_73_set.insert("CouponPaymentDate_t_254955368");
    Instrmt_73.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_73_set.insert("MM");
    Instrmt_73.add_attribute("Snrty", "SD"); // 1
    Instrmt_73_set.insert("SD");
    Instrmt_73.add_attribute("NotlPctOut", "11826801.160000"); // 1
    Instrmt_73_set.insert("11826801.160000");
    Instrmt_73.add_attribute("OrigNotlPctOut", "1551125.970000"); // 1
    Instrmt_73_set.insert("1551125.970000");
    Instrmt_73.add_attribute("AttchPnt", "19470983.230000"); // 1
    Instrmt_73_set.insert("19470983.230000");
    Instrmt_73.add_attribute("DetchPnt", "2573475.730000"); // 1
    Instrmt_73_set.insert("2573475.730000");
    Instrmt_73.add_attribute("Issued", "IssueDate_t_832678984"); // 1
    Instrmt_73_set.insert("IssueDate_t_832678984");
    Instrmt_73.add_attribute("RepoCollSecTyp", "648404436"); // 1
    Instrmt_73_set.insert("648404436");
    Instrmt_73.add_attribute("RepoTrm", "1024194999"); // 1
    Instrmt_73_set.insert("1024194999");
    Instrmt_73.add_attribute("RepoRt", "2967885.450000"); // 1
    Instrmt_73_set.insert("2967885.450000");
    Instrmt_73.add_attribute("Fctr", "1829608.370000"); // 1
    Instrmt_73_set.insert("1829608.370000");
    Instrmt_73.add_attribute("CrdRtg", "CreditRating_t_1127522440"); // 1
    Instrmt_73_set.insert("CreditRating_t_1127522440");
    Instrmt_73.add_attribute("Rgstry", "InstrRegistry_t_1568383197"); // 1
    Instrmt_73_set.insert("InstrRegistry_t_1568383197");
    Instrmt_73.add_attribute("IssuCtry", "643001206"); // 1
    Instrmt_73_set.insert("643001206");
    Instrmt_73.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1609785347"); // 1
    Instrmt_73_set.insert("StateOrProvinceOfIssue_t_1609785347");
    Instrmt_73.add_attribute("Lcl", "LocaleOfIssue_t_1047406621"); // 1
    Instrmt_73_set.insert("LocaleOfIssue_t_1047406621");
    Instrmt_73.add_attribute("Redeem", "RedemptionDate_t_305340619"); // 1
    Instrmt_73_set.insert("RedemptionDate_t_305340619");
    Instrmt_73.add_attribute("StrkPx", "5354033.300000"); // 1
    Instrmt_73_set.insert("5354033.300000");
    Instrmt_73.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_73_set.insert("EUR");
    Instrmt_73.add_attribute("StrkMult", "10756853.560000"); // 1
    Instrmt_73_set.insert("10756853.560000");
    Instrmt_73.add_attribute("StrkValu", "13400178.340000"); // 1
    Instrmt_73_set.insert("13400178.340000");
    Instrmt_73.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_73_set.insert("3");
    Instrmt_73.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("StrkPxBndryPrcsn", "15590168.960000"); // 1
    Instrmt_73_set.insert("15590168.960000");
    Instrmt_73.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_73_set.insert("3");
    Instrmt_73.add_attribute("OptAt", "1267000176"); // 1
    Instrmt_73_set.insert("1267000176");
    Instrmt_73.add_attribute("Mult", "14871170.880000"); // 1
    Instrmt_73_set.insert("14871170.880000");
    Instrmt_73.add_attribute("MultTyp", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("MinPxIncr", "17420724.560000"); // 1
    Instrmt_73_set.insert("17420724.560000");
    Instrmt_73.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1785960788"); // 1
    Instrmt_73_set.insert("MinPriceIncrementAmount_t_1785960788");
    Instrmt_73.add_attribute("UOM", "Bbl"); // 1
    Instrmt_73_set.insert("Bbl");
    Instrmt_73.add_attribute("UOMQty", "7772689.240000"); // 1
    Instrmt_73_set.insert("7772689.240000");
    Instrmt_73.add_attribute("PxUOM", "tn"); // 1
    Instrmt_73_set.insert("tn");
    Instrmt_73.add_attribute("PxUOMQty", "20251386.900000"); // 1
    Instrmt_73_set.insert("20251386.900000");
    Instrmt_73.add_attribute("SettlMeth", "C"); // 1
    Instrmt_73_set.insert("C");
    Instrmt_73.add_attribute("ExerStyle", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("OptPayAmt", "OptPayoutAmount_t_2058811497"); // 1
    Instrmt_73_set.insert("OptPayoutAmount_t_2058811497");
    Instrmt_73.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_73_set.insert("STD");
    Instrmt_73.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_73_set.insert("FUT");
    Instrmt_73.add_attribute("ListMeth", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("CapPx", "3439568.170000"); // 1
    Instrmt_73_set.insert("3439568.170000");
    Instrmt_73.add_attribute("FlrPx", "13520215.220000"); // 1
    Instrmt_73_set.insert("13520215.220000");
    Instrmt_73.add_attribute("PutCall", "0"); // 1
    Instrmt_73_set.insert("0");
    Instrmt_73.add_attribute("FlexInd", "true"); // 1
    Instrmt_73_set.insert("true");
    Instrmt_73.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_73_set.insert("true");
    Instrmt_73.add_attribute("TmUnit", "Min"); // 1
    Instrmt_73_set.insert("Min");
    Instrmt_73.add_attribute("CpnRt", "7101938.260000"); // 1
    Instrmt_73_set.insert("7101938.260000");
    Instrmt_73.add_attribute("Exch", "SecurityExchange_t_442622817"); // 1
    Instrmt_73_set.insert("SecurityExchange_t_442622817");
    Instrmt_73.add_attribute("PosLmt", "2112240674"); // 1
    Instrmt_73_set.insert("2112240674");
    Instrmt_73.add_attribute("NTPosLmt", "2050211660"); // 1
    Instrmt_73_set.insert("2050211660");
    Instrmt_73.add_attribute("Issr", "Issuer_t_313604043"); // 1
    Instrmt_73_set.insert("Issuer_t_313604043");
    Instrmt_73.add_attribute("EncIssrLen", "1794970162"); // 1
    Instrmt_73_set.insert("1794970162");
    Instrmt_73.add_attribute("EncIssr", "EncodedIssuer_t_1461744908"); // 1
    Instrmt_73_set.insert("EncodedIssuer_t_1461744908");
    Instrmt_73.add_attribute("Desc", "SecurityDesc_t_1657044270"); // 1
    Instrmt_73_set.insert("SecurityDesc_t_1657044270");
    Instrmt_73.add_attribute("EncSecDescLen", "914486690"); // 1
    Instrmt_73_set.insert("914486690");
    Instrmt_73.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_801378348"); // 1
    Instrmt_73_set.insert("EncodedSecurityDesc_t_801378348");
    Instrmt_73.add_attribute("Pool", "Pool_t_20049780"); // 1
    Instrmt_73_set.insert("Pool_t_20049780");
    Instrmt_73.add_attribute("CSetMo", "556559570"); // 1
    Instrmt_73_set.insert("556559570");
    Instrmt_73.add_attribute("CPPgm", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("CPRegT", "CPRegType_t_1806010569"); // 1
    Instrmt_73_set.insert("CPRegType_t_1806010569");
    Instrmt_73.add_attribute("Dated", "DatedDate_t_634599937"); // 1
    Instrmt_73_set.insert("DatedDate_t_634599937");
    Instrmt_73.add_attribute("IntAcrl", "InterestAccrualDate_t_1173236081"); // 1
    Instrmt_73_set.insert("InterestAccrualDate_t_1173236081");
    all_values.push_back(Instrmt_73_set);
    all_compo_names.insert("Instrmt_73_set");

    {
      xml_element AID_76{"AID"};
      multiset<string> AID_76_set;
      AID_76.add_attribute("AltID", "SecurityAltID_t_1599600307"); // 2
      AID_76_set.insert("SecurityAltID_t_1599600307");
      AID_76.add_attribute("AltIDSrc", "7"); // 2
      AID_76_set.insert("7");
      all_values.push_back(AID_76_set);
      all_compo_names.insert("AID_76_set");

      Instrmt_73.add_element(AID_76);
    }
    {
      xml_element SecXML_76{"SecXML"};
      multiset<string> SecXML_76_set;
      SecXML_76.add_attribute("Schema", "SecurityXMLSchema_t_60368931"); // 2
      SecXML_76_set.insert("SecurityXMLSchema_t_60368931");
      all_values.push_back(SecXML_76_set);
      all_compo_names.insert("SecXML_76_set");

      Instrmt_73.add_element(SecXML_76);
    }
    {
      xml_element Evnt_76{"Evnt"};
      multiset<string> Evnt_76_set;
      Evnt_76.add_attribute("EventTyp", "2"); // 2
      Evnt_76_set.insert("2");
      Evnt_76.add_attribute("Dt", "EventDate_t_1038314458"); // 2
      Evnt_76_set.insert("EventDate_t_1038314458");
      Evnt_76.add_attribute("Tm", "EventTime_t_2119180428"); // 2
      Evnt_76_set.insert("EventTime_t_2119180428");
      Evnt_76.add_attribute("Px", "10014426.490000"); // 2
      Evnt_76_set.insert("10014426.490000");
      Evnt_76.add_attribute("Txt", "EventText_t_1747334774"); // 2
      Evnt_76_set.insert("EventText_t_1747334774");
      all_values.push_back(Evnt_76_set);
      all_compo_names.insert("Evnt_76_set");

      Instrmt_73.add_element(Evnt_76);
    }
    {
      xml_element Pty_393{"Pty"};
      multiset<string> Pty_393_set;
      Pty_393.add_attribute("ID", "InstrumentPartyID_t_1010547069"); // 2
      Pty_393_set.insert("InstrumentPartyID_t_1010547069");
      Pty_393.add_attribute("Src", "F"); // 2
      Pty_393_set.insert("F");
      Pty_393.add_attribute("R", "3"); // 2
      Pty_393_set.insert("3");
      all_values.push_back(Pty_393_set);
      all_compo_names.insert("Pty_393_set");

      {
        xml_element Sub_393{"Sub"};
        multiset<string> Sub_393_set;
        Sub_393.add_attribute("ID", "InstrumentPartySubID_t_1511699057"); // 3
        Sub_393_set.insert("InstrumentPartySubID_t_1511699057");
        Sub_393.add_attribute("Typ", "14"); // 3
        Sub_393_set.insert("14");
        all_values.push_back(Sub_393_set);
        all_compo_names.insert("Sub_393_set");

        Pty_393.add_element(Sub_393);
      }
      Instrmt_73.add_element(Pty_393);
    }
    {
      xml_element CmplxEvnt_73{"CmplxEvnt"};
      multiset<string> CmplxEvnt_73_set;
      CmplxEvnt_73.add_attribute("Typ", "6"); // 2
      CmplxEvnt_73_set.insert("6");
      CmplxEvnt_73.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_400770727"); // 2
      CmplxEvnt_73_set.insert("ComplexOptPayoutAmount_t_400770727");
      CmplxEvnt_73.add_attribute("Px", "12994730.830000"); // 2
      CmplxEvnt_73_set.insert("12994730.830000");
      CmplxEvnt_73.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_73_set.insert("1");
      CmplxEvnt_73.add_attribute("PxBndryPrcsn", "3655277.530000"); // 2
      CmplxEvnt_73_set.insert("3655277.530000");
      CmplxEvnt_73.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_73_set.insert("2");
      CmplxEvnt_73.add_attribute("Cond", "2"); // 2
      CmplxEvnt_73_set.insert("2");
      all_values.push_back(CmplxEvnt_73_set);
      all_compo_names.insert("CmplxEvnt_73_set");

      {
        xml_element EvntDts_73{"EvntDts"};
        multiset<string> EvntDts_73_set;
        EvntDts_73.add_attribute("StartDt", "ComplexEventStartDate_t_13014267"); // 3
        EvntDts_73_set.insert("ComplexEventStartDate_t_13014267");
        EvntDts_73.add_attribute("EndDt", "ComplexEventEndDate_t_516462356"); // 3
        EvntDts_73_set.insert("ComplexEventEndDate_t_516462356");
        all_values.push_back(EvntDts_73_set);
        all_compo_names.insert("EvntDts_73_set");

        {
          xml_element EvntTms_73{"EvntTms"};
          multiset<string> EvntTms_73_set;
          EvntTms_73.add_attribute("StartTm", "727538625"); // 4
          EvntTms_73_set.insert("727538625");
          EvntTms_73.add_attribute("EndTm", "927500958"); // 4
          EvntTms_73_set.insert("927500958");
          all_values.push_back(EvntTms_73_set);
          all_compo_names.insert("EvntTms_73_set");

          EvntDts_73.add_element(EvntTms_73);
        }
        CmplxEvnt_73.add_element(EvntDts_73);
      }
      Instrmt_73.add_element(CmplxEvnt_73);
    }
    elt.add_element(Instrmt_73);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_8{"InstrmtExt"};
    multiset<string> InstrmtExt_8_set;
    InstrmtExt_8.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_8_set.insert("1");
    InstrmtExt_8.add_attribute("PctAtRisk", "7475884.060000"); // 1
    InstrmtExt_8_set.insert("7475884.060000");
    all_values.push_back(InstrmtExt_8_set);
    all_compo_names.insert("InstrmtExt_8_set");

    {
      xml_element Attrb_12{"Attrb"};
      multiset<string> Attrb_12_set;
      Attrb_12.add_attribute("Typ", "17"); // 2
      Attrb_12_set.insert("17");
      Attrb_12.add_attribute("Val", "InstrAttribValue_t_1713807861"); // 2
      Attrb_12_set.insert("InstrAttribValue_t_1713807861");
      all_values.push_back(Attrb_12_set);
      all_compo_names.insert("Attrb_12_set");

      InstrmtExt_8.add_element(Attrb_12);
    }
    elt.add_element(InstrmtExt_8);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_103{"Undly"};
    multiset<string> Undly_103_set;
    Undly_103.add_attribute("Sym", "UnderlyingSymbol_t_2118660465"); // 1
    Undly_103_set.insert("UnderlyingSymbol_t_2118660465");
    Undly_103.add_attribute("Sfx", "CD"); // 1
    Undly_103_set.insert("CD");
    Undly_103.add_attribute("ID", "UnderlyingSecurityID_t_2005715634"); // 1
    Undly_103_set.insert("UnderlyingSecurityID_t_2005715634");
    Undly_103.add_attribute("Src", "E"); // 1
    Undly_103_set.insert("E");
    Undly_103.add_attribute("Prod", "13"); // 1
    Undly_103_set.insert("13");
    Undly_103.add_attribute("CFI", "UnderlyingCFICode_t_2084101015"); // 1
    Undly_103_set.insert("UnderlyingCFICode_t_2084101015");
    Undly_103.add_attribute("SecTyp", "TPRN"); // 1
    Undly_103_set.insert("TPRN");
    Undly_103.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_771626005"); // 1
    Undly_103_set.insert("UnderlyingSecuritySubType_t_771626005");
    Undly_103.add_attribute("MMY", "938060017"); // 1
    Undly_103_set.insert("938060017");
    Undly_103.add_attribute("Mat", "UnderlyingMaturityDate_t_1121597382"); // 1
    Undly_103_set.insert("UnderlyingMaturityDate_t_1121597382");
    Undly_103.add_attribute("MatTm", "1782173074"); // 1
    Undly_103_set.insert("1782173074");
    Undly_103.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_135975835"); // 1
    Undly_103_set.insert("UnderlyingCouponPaymentDate_t_135975835");
    Undly_103.add_attribute("RestrctTyp", "XR"); // 1
    Undly_103_set.insert("XR");
    Undly_103.add_attribute("Snrty", "SR"); // 1
    Undly_103_set.insert("SR");
    Undly_103.add_attribute("NotlPctOut", "7252550.920000"); // 1
    Undly_103_set.insert("7252550.920000");
    Undly_103.add_attribute("OrigNotlPctOut", "3877375.260000"); // 1
    Undly_103_set.insert("3877375.260000");
    Undly_103.add_attribute("AttchPnt", "15471592.100000"); // 1
    Undly_103_set.insert("15471592.100000");
    Undly_103.add_attribute("DetchPnt", "20247281.750000"); // 1
    Undly_103_set.insert("20247281.750000");
    Undly_103.add_attribute("Issued", "UnderlyingIssueDate_t_1292111486"); // 1
    Undly_103_set.insert("UnderlyingIssueDate_t_1292111486");
    Undly_103.add_attribute("RepoCollSecTyp", "1912686963"); // 1
    Undly_103_set.insert("1912686963");
    Undly_103.add_attribute("RepoTrm", "1079445622"); // 1
    Undly_103_set.insert("1079445622");
    Undly_103.add_attribute("RepoRt", "3626058.420000"); // 1
    Undly_103_set.insert("3626058.420000");
    Undly_103.add_attribute("Fctr", "19257012.310000"); // 1
    Undly_103_set.insert("19257012.310000");
    Undly_103.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1595907978"); // 1
    Undly_103_set.insert("UnderlyingCreditRating_t_1595907978");
    Undly_103.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1090144467"); // 1
    Undly_103_set.insert("UnderlyingInstrRegistry_t_1090144467");
    Undly_103.add_attribute("Ctry", "705718541"); // 1
    Undly_103_set.insert("705718541");
    Undly_103.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_766265035"); // 1
    Undly_103_set.insert("UnderlyingStateOrProvinceOfIssue_t_766265035");
    Undly_103.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1837732873"); // 1
    Undly_103_set.insert("UnderlyingLocaleOfIssue_t_1837732873");
    Undly_103.add_attribute("Redeem", "UnderlyingRedemptionDate_t_42295421"); // 1
    Undly_103_set.insert("UnderlyingRedemptionDate_t_42295421");
    Undly_103.add_attribute("StrkPx", "3325892.480000"); // 1
    Undly_103_set.insert("3325892.480000");
    Undly_103.add_attribute("StrkCcy", "USD"); // 1
    Undly_103_set.insert("USD");
    Undly_103.add_attribute("OptA", "1072149542"); // 1
    Undly_103_set.insert("1072149542");
    Undly_103.add_attribute("Mult", "21020801.860000"); // 1
    Undly_103_set.insert("21020801.860000");
    Undly_103.add_attribute("MultTyp", "2"); // 1
    Undly_103_set.insert("2");
    Undly_103.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_103_set.insert("2");
    Undly_103.add_attribute("UOM", "Bcf"); // 1
    Undly_103_set.insert("Bcf");
    Undly_103.add_attribute("UOMQty", "20186502.920000"); // 1
    Undly_103_set.insert("20186502.920000");
    Undly_103.add_attribute("PxUOM", "USD"); // 1
    Undly_103_set.insert("USD");
    Undly_103.add_attribute("PxUOMQty", "8292739.230000"); // 1
    Undly_103_set.insert("8292739.230000");
    Undly_103.add_attribute("TmUnit", "H"); // 1
    Undly_103_set.insert("H");
    Undly_103.add_attribute("ExerStyle", "0"); // 1
    Undly_103_set.insert("0");
    Undly_103.add_attribute("CpnRt", "9652497.580000"); // 1
    Undly_103_set.insert("9652497.580000");
    Undly_103.add_attribute("Exch", "UnderlyingSecurityExchange_t_918750410"); // 1
    Undly_103_set.insert("UnderlyingSecurityExchange_t_918750410");
    Undly_103.add_attribute("Issr", "UnderlyingIssuer_t_1277299033"); // 1
    Undly_103_set.insert("UnderlyingIssuer_t_1277299033");
    Undly_103.add_attribute("EncUndIssrLen", "1690504850"); // 1
    Undly_103_set.insert("1690504850");
    Undly_103.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1306487936"); // 1
    Undly_103_set.insert("EncodedUnderlyingIssuer_t_1306487936");
    Undly_103.add_attribute("Desc", "UnderlyingSecurityDesc_t_676974595"); // 1
    Undly_103_set.insert("UnderlyingSecurityDesc_t_676974595");
    Undly_103.add_attribute("EncUndSecDescLen", "1567749377"); // 1
    Undly_103_set.insert("1567749377");
    Undly_103.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_451115775"); // 1
    Undly_103_set.insert("EncodedUnderlyingSecurityDesc_t_451115775");
    Undly_103.add_attribute("CPPgm", "UnderlyingCPProgram_t_442177910"); // 1
    Undly_103_set.insert("UnderlyingCPProgram_t_442177910");
    Undly_103.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_499711352"); // 1
    Undly_103_set.insert("UnderlyingCPRegType_t_499711352");
    Undly_103.add_attribute("AllocPct", "8137216.170000"); // 1
    Undly_103_set.insert("8137216.170000");
    Undly_103.add_attribute("Ccy", "GBP"); // 1
    Undly_103_set.insert("GBP");
    Undly_103.add_attribute("Qty", "19038660.840000"); // 1
    Undly_103_set.insert("19038660.840000");
    Undly_103.add_attribute("SettlTyp", "2"); // 1
    Undly_103_set.insert("2");
    Undly_103.add_attribute("CashAmt", "UnderlyingCashAmount_t_714400717"); // 1
    Undly_103_set.insert("UnderlyingCashAmount_t_714400717");
    Undly_103.add_attribute("CashTyp", "FIXED"); // 1
    Undly_103_set.insert("FIXED");
    Undly_103.add_attribute("Px", "9684094.550000"); // 1
    Undly_103_set.insert("9684094.550000");
    Undly_103.add_attribute("DirtPx", "10469899.650000"); // 1
    Undly_103_set.insert("10469899.650000");
    Undly_103.add_attribute("EndPx", "16904798.620000"); // 1
    Undly_103_set.insert("16904798.620000");
    Undly_103.add_attribute("StartVal", "UnderlyingStartValue_t_981881694"); // 1
    Undly_103_set.insert("UnderlyingStartValue_t_981881694");
    Undly_103.add_attribute("CurVal", "UnderlyingCurrentValue_t_2119139507"); // 1
    Undly_103_set.insert("UnderlyingCurrentValue_t_2119139507");
    Undly_103.add_attribute("EndVal", "UnderlyingEndValue_t_1645076401"); // 1
    Undly_103_set.insert("UnderlyingEndValue_t_1645076401");
    Undly_103.add_attribute("AdjQty", "14787857.300000"); // 1
    Undly_103_set.insert("14787857.300000");
    Undly_103.add_attribute("FxRate", "18437346.260000"); // 1
    Undly_103_set.insert("18437346.260000");
    Undly_103.add_attribute("FxRateCalc", "D"); // 1
    Undly_103_set.insert("D");
    Undly_103.add_attribute("CapValu", "UnderlyingCapValue_t_1349952374"); // 1
    Undly_103_set.insert("UnderlyingCapValue_t_1349952374");
    Undly_103.add_attribute("SetMeth", "UnderlyingSettlMethod_t_192472102"); // 1
    Undly_103_set.insert("UnderlyingSettlMethod_t_192472102");
    Undly_103.add_attribute("PutCall", "218080582"); // 1
    Undly_103_set.insert("218080582");
    all_values.push_back(Undly_103_set);
    all_compo_names.insert("Undly_103_set");

    {
      xml_element UndAID_103{"UndAID"};
      multiset<string> UndAID_103_set;
      UndAID_103.add_attribute("AltID", "UnderlyingSecurityAltID_t_195232752"); // 2
      UndAID_103_set.insert("UnderlyingSecurityAltID_t_195232752");
      UndAID_103.add_attribute("AltIDSrc", "B"); // 2
      UndAID_103_set.insert("B");
      all_values.push_back(UndAID_103_set);
      all_compo_names.insert("UndAID_103_set");

      Undly_103.add_element(UndAID_103);
    }
    {
      xml_element Stip_164{"Stip"};
      multiset<string> Stip_164_set;
      Stip_164.add_attribute("Typ", "LOTVAR"); // 2
      Stip_164_set.insert("LOTVAR");
      Stip_164.add_attribute("Val", "UnderlyingStipValue_t_1113983162"); // 2
      Stip_164_set.insert("UnderlyingStipValue_t_1113983162");
      all_values.push_back(Stip_164_set);
      all_compo_names.insert("Stip_164_set");

      Undly_103.add_element(Stip_164);
    }
    {
      xml_element Pty_394{"Pty"};
      multiset<string> Pty_394_set;
      Pty_394.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1600681685"); // 2
      Pty_394_set.insert("UnderlyingInstrumentPartyID_t_1600681685");
      Pty_394.add_attribute("Src", "A"); // 2
      Pty_394_set.insert("A");
      Pty_394.add_attribute("R", "54"); // 2
      Pty_394_set.insert("54");
      all_values.push_back(Pty_394_set);
      all_compo_names.insert("Pty_394_set");

      {
        xml_element Sub_394{"Sub"};
        multiset<string> Sub_394_set;
        Sub_394.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_130172632"); // 3
        Sub_394_set.insert("UnderlyingInstrumentPartySubID_t_130172632");
        Sub_394.add_attribute("Typ", "5"); // 3
        Sub_394_set.insert("5");
        all_values.push_back(Sub_394_set);
        all_compo_names.insert("Sub_394_set");

        Pty_394.add_element(Sub_394);
      }
      Undly_103.add_element(Pty_394);
    }
    elt.add_element(Undly_103);
  } // end Undly
  { // Undly
    xml_element Undly_104{"Undly"};
    multiset<string> Undly_104_set;
    Undly_104.add_attribute("Sym", "UnderlyingSymbol_t_724103226"); // 1
    Undly_104_set.insert("UnderlyingSymbol_t_724103226");
    Undly_104.add_attribute("Sfx", "WI"); // 1
    Undly_104_set.insert("WI");
    Undly_104.add_attribute("ID", "UnderlyingSecurityID_t_646328624"); // 1
    Undly_104_set.insert("UnderlyingSecurityID_t_646328624");
    Undly_104.add_attribute("Src", "6"); // 1
    Undly_104_set.insert("6");
    Undly_104.add_attribute("Prod", "13"); // 1
    Undly_104_set.insert("13");
    Undly_104.add_attribute("CFI", "UnderlyingCFICode_t_594464307"); // 1
    Undly_104_set.insert("UnderlyingCFICode_t_594464307");
    Undly_104.add_attribute("SecTyp", "IET"); // 1
    Undly_104_set.insert("IET");
    Undly_104.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1718860071"); // 1
    Undly_104_set.insert("UnderlyingSecuritySubType_t_1718860071");
    Undly_104.add_attribute("MMY", "1308865024"); // 1
    Undly_104_set.insert("1308865024");
    Undly_104.add_attribute("Mat", "UnderlyingMaturityDate_t_740838941"); // 1
    Undly_104_set.insert("UnderlyingMaturityDate_t_740838941");
    Undly_104.add_attribute("MatTm", "539785878"); // 1
    Undly_104_set.insert("539785878");
    Undly_104.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_208371342"); // 1
    Undly_104_set.insert("UnderlyingCouponPaymentDate_t_208371342");
    Undly_104.add_attribute("RestrctTyp", "FR"); // 1
    Undly_104_set.insert("FR");
    Undly_104.add_attribute("Snrty", "SD"); // 1
    Undly_104_set.insert("SD");
    Undly_104.add_attribute("NotlPctOut", "1800272.010000"); // 1
    Undly_104_set.insert("1800272.010000");
    Undly_104.add_attribute("OrigNotlPctOut", "19289115.570000"); // 1
    Undly_104_set.insert("19289115.570000");
    Undly_104.add_attribute("AttchPnt", "8529696.540000"); // 1
    Undly_104_set.insert("8529696.540000");
    Undly_104.add_attribute("DetchPnt", "20237618.280000"); // 1
    Undly_104_set.insert("20237618.280000");
    Undly_104.add_attribute("Issued", "UnderlyingIssueDate_t_1317718216"); // 1
    Undly_104_set.insert("UnderlyingIssueDate_t_1317718216");
    Undly_104.add_attribute("RepoCollSecTyp", "55438380"); // 1
    Undly_104_set.insert("55438380");
    Undly_104.add_attribute("RepoTrm", "68750282"); // 1
    Undly_104_set.insert("68750282");
    Undly_104.add_attribute("RepoRt", "15357987.980000"); // 1
    Undly_104_set.insert("15357987.980000");
    Undly_104.add_attribute("Fctr", "2506711.330000"); // 1
    Undly_104_set.insert("2506711.330000");
    Undly_104.add_attribute("CrdRtg", "UnderlyingCreditRating_t_392132935"); // 1
    Undly_104_set.insert("UnderlyingCreditRating_t_392132935");
    Undly_104.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_571645490"); // 1
    Undly_104_set.insert("UnderlyingInstrRegistry_t_571645490");
    Undly_104.add_attribute("Ctry", "1364654295"); // 1
    Undly_104_set.insert("1364654295");
    Undly_104.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1992814620"); // 1
    Undly_104_set.insert("UnderlyingStateOrProvinceOfIssue_t_1992814620");
    Undly_104.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1297997033"); // 1
    Undly_104_set.insert("UnderlyingLocaleOfIssue_t_1297997033");
    Undly_104.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1637641746"); // 1
    Undly_104_set.insert("UnderlyingRedemptionDate_t_1637641746");
    Undly_104.add_attribute("StrkPx", "21229872.530000"); // 1
    Undly_104_set.insert("21229872.530000");
    Undly_104.add_attribute("StrkCcy", "JPY"); // 1
    Undly_104_set.insert("JPY");
    Undly_104.add_attribute("OptA", "547854148"); // 1
    Undly_104_set.insert("547854148");
    Undly_104.add_attribute("Mult", "20909429.300000"); // 1
    Undly_104_set.insert("20909429.300000");
    Undly_104.add_attribute("MultTyp", "1"); // 1
    Undly_104_set.insert("1");
    Undly_104.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_104_set.insert("4");
    Undly_104.add_attribute("UOM", "oz_tr"); // 1
    Undly_104_set.insert("oz_tr");
    Undly_104.add_attribute("UOMQty", "8988097.990000"); // 1
    Undly_104_set.insert("8988097.990000");
    Undly_104.add_attribute("PxUOM", "USD"); // 1
    Undly_104_set.insert("USD");
    Undly_104.add_attribute("PxUOMQty", "18467886.140000"); // 1
    Undly_104_set.insert("18467886.140000");
    Undly_104.add_attribute("TmUnit", "H"); // 1
    Undly_104_set.insert("H");
    Undly_104.add_attribute("ExerStyle", "2"); // 1
    Undly_104_set.insert("2");
    Undly_104.add_attribute("CpnRt", "20551599.560000"); // 1
    Undly_104_set.insert("20551599.560000");
    Undly_104.add_attribute("Exch", "UnderlyingSecurityExchange_t_1923483896"); // 1
    Undly_104_set.insert("UnderlyingSecurityExchange_t_1923483896");
    Undly_104.add_attribute("Issr", "UnderlyingIssuer_t_825946410"); // 1
    Undly_104_set.insert("UnderlyingIssuer_t_825946410");
    Undly_104.add_attribute("EncUndIssrLen", "87703509"); // 1
    Undly_104_set.insert("87703509");
    Undly_104.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1704911805"); // 1
    Undly_104_set.insert("EncodedUnderlyingIssuer_t_1704911805");
    Undly_104.add_attribute("Desc", "UnderlyingSecurityDesc_t_1678916065"); // 1
    Undly_104_set.insert("UnderlyingSecurityDesc_t_1678916065");
    Undly_104.add_attribute("EncUndSecDescLen", "2111465337"); // 1
    Undly_104_set.insert("2111465337");
    Undly_104.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_875146373"); // 1
    Undly_104_set.insert("EncodedUnderlyingSecurityDesc_t_875146373");
    Undly_104.add_attribute("CPPgm", "UnderlyingCPProgram_t_1734354445"); // 1
    Undly_104_set.insert("UnderlyingCPProgram_t_1734354445");
    Undly_104.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_32731972"); // 1
    Undly_104_set.insert("UnderlyingCPRegType_t_32731972");
    Undly_104.add_attribute("AllocPct", "2634615.230000"); // 1
    Undly_104_set.insert("2634615.230000");
    Undly_104.add_attribute("Ccy", "CAN"); // 1
    Undly_104_set.insert("CAN");
    Undly_104.add_attribute("Qty", "8351070.140000"); // 1
    Undly_104_set.insert("8351070.140000");
    Undly_104.add_attribute("SettlTyp", "4"); // 1
    Undly_104_set.insert("4");
    Undly_104.add_attribute("CashAmt", "UnderlyingCashAmount_t_270195879"); // 1
    Undly_104_set.insert("UnderlyingCashAmount_t_270195879");
    Undly_104.add_attribute("CashTyp", "DIFF"); // 1
    Undly_104_set.insert("DIFF");
    Undly_104.add_attribute("Px", "6923543.240000"); // 1
    Undly_104_set.insert("6923543.240000");
    Undly_104.add_attribute("DirtPx", "2456994.840000"); // 1
    Undly_104_set.insert("2456994.840000");
    Undly_104.add_attribute("EndPx", "14302347.050000"); // 1
    Undly_104_set.insert("14302347.050000");
    Undly_104.add_attribute("StartVal", "UnderlyingStartValue_t_906615649"); // 1
    Undly_104_set.insert("UnderlyingStartValue_t_906615649");
    Undly_104.add_attribute("CurVal", "UnderlyingCurrentValue_t_793553632"); // 1
    Undly_104_set.insert("UnderlyingCurrentValue_t_793553632");
    Undly_104.add_attribute("EndVal", "UnderlyingEndValue_t_1373693988"); // 1
    Undly_104_set.insert("UnderlyingEndValue_t_1373693988");
    Undly_104.add_attribute("AdjQty", "5112181.680000"); // 1
    Undly_104_set.insert("5112181.680000");
    Undly_104.add_attribute("FxRate", "21341538.170000"); // 1
    Undly_104_set.insert("21341538.170000");
    Undly_104.add_attribute("FxRateCalc", "D"); // 1
    Undly_104_set.insert("D");
    Undly_104.add_attribute("CapValu", "UnderlyingCapValue_t_1410027967"); // 1
    Undly_104_set.insert("UnderlyingCapValue_t_1410027967");
    Undly_104.add_attribute("SetMeth", "UnderlyingSettlMethod_t_898646776"); // 1
    Undly_104_set.insert("UnderlyingSettlMethod_t_898646776");
    Undly_104.add_attribute("PutCall", "1610922543"); // 1
    Undly_104_set.insert("1610922543");
    all_values.push_back(Undly_104_set);
    all_compo_names.insert("Undly_104_set");

    {
      xml_element UndAID_104{"UndAID"};
      multiset<string> UndAID_104_set;
      UndAID_104.add_attribute("AltID", "UnderlyingSecurityAltID_t_902193060"); // 2
      UndAID_104_set.insert("UnderlyingSecurityAltID_t_902193060");
      UndAID_104.add_attribute("AltIDSrc", "D"); // 2
      UndAID_104_set.insert("D");
      all_values.push_back(UndAID_104_set);
      all_compo_names.insert("UndAID_104_set");

      Undly_104.add_element(UndAID_104);
    }
    {
      xml_element Stip_165{"Stip"};
      multiset<string> Stip_165_set;
      Stip_165.add_attribute("Typ", "SUBSLEFT"); // 2
      Stip_165_set.insert("SUBSLEFT");
      Stip_165.add_attribute("Val", "UnderlyingStipValue_t_678193308"); // 2
      Stip_165_set.insert("UnderlyingStipValue_t_678193308");
      all_values.push_back(Stip_165_set);
      all_compo_names.insert("Stip_165_set");

      Undly_104.add_element(Stip_165);
    }
    {
      xml_element Pty_395{"Pty"};
      multiset<string> Pty_395_set;
      Pty_395.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1028872025"); // 2
      Pty_395_set.insert("UnderlyingInstrumentPartyID_t_1028872025");
      Pty_395.add_attribute("Src", "2"); // 2
      Pty_395_set.insert("2");
      Pty_395.add_attribute("R", "41"); // 2
      Pty_395_set.insert("41");
      all_values.push_back(Pty_395_set);
      all_compo_names.insert("Pty_395_set");

      {
        xml_element Sub_395{"Sub"};
        multiset<string> Sub_395_set;
        Sub_395.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_560304442"); // 3
        Sub_395_set.insert("UnderlyingInstrumentPartySubID_t_560304442");
        Sub_395.add_attribute("Typ", "14"); // 3
        Sub_395_set.insert("14");
        all_values.push_back(Sub_395_set);
        all_compo_names.insert("Sub_395_set");

        Pty_395.add_element(Sub_395);
      }
      Undly_104.add_element(Pty_395);
    }
    elt.add_element(Undly_104);
  } // end Undly
  { // Undly
    xml_element Undly_105{"Undly"};
    multiset<string> Undly_105_set;
    Undly_105.add_attribute("Sym", "UnderlyingSymbol_t_1110767839"); // 1
    Undly_105_set.insert("UnderlyingSymbol_t_1110767839");
    Undly_105.add_attribute("Sfx", "WI"); // 1
    Undly_105_set.insert("WI");
    Undly_105.add_attribute("ID", "UnderlyingSecurityID_t_1603016022"); // 1
    Undly_105_set.insert("UnderlyingSecurityID_t_1603016022");
    Undly_105.add_attribute("Src", "2"); // 1
    Undly_105_set.insert("2");
    Undly_105.add_attribute("Prod", "4"); // 1
    Undly_105_set.insert("4");
    Undly_105.add_attribute("CFI", "UnderlyingCFICode_t_2027880929"); // 1
    Undly_105_set.insert("UnderlyingCFICode_t_2027880929");
    Undly_105.add_attribute("SecTyp", "TECP"); // 1
    Undly_105_set.insert("TECP");
    Undly_105.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1186913396"); // 1
    Undly_105_set.insert("UnderlyingSecuritySubType_t_1186913396");
    Undly_105.add_attribute("MMY", "150593161"); // 1
    Undly_105_set.insert("150593161");
    Undly_105.add_attribute("Mat", "UnderlyingMaturityDate_t_47473128"); // 1
    Undly_105_set.insert("UnderlyingMaturityDate_t_47473128");
    Undly_105.add_attribute("MatTm", "1879267720"); // 1
    Undly_105_set.insert("1879267720");
    Undly_105.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_396292645"); // 1
    Undly_105_set.insert("UnderlyingCouponPaymentDate_t_396292645");
    Undly_105.add_attribute("RestrctTyp", "MM"); // 1
    Undly_105_set.insert("MM");
    Undly_105.add_attribute("Snrty", "SD"); // 1
    Undly_105_set.insert("SD");
    Undly_105.add_attribute("NotlPctOut", "11898462.780000"); // 1
    Undly_105_set.insert("11898462.780000");
    Undly_105.add_attribute("OrigNotlPctOut", "7039181.740000"); // 1
    Undly_105_set.insert("7039181.740000");
    Undly_105.add_attribute("AttchPnt", "11496178.900000"); // 1
    Undly_105_set.insert("11496178.900000");
    Undly_105.add_attribute("DetchPnt", "11765164.470000"); // 1
    Undly_105_set.insert("11765164.470000");
    Undly_105.add_attribute("Issued", "UnderlyingIssueDate_t_468052103"); // 1
    Undly_105_set.insert("UnderlyingIssueDate_t_468052103");
    Undly_105.add_attribute("RepoCollSecTyp", "412162209"); // 1
    Undly_105_set.insert("412162209");
    Undly_105.add_attribute("RepoTrm", "2075163223"); // 1
    Undly_105_set.insert("2075163223");
    Undly_105.add_attribute("RepoRt", "20789746.470000"); // 1
    Undly_105_set.insert("20789746.470000");
    Undly_105.add_attribute("Fctr", "13143552.690000"); // 1
    Undly_105_set.insert("13143552.690000");
    Undly_105.add_attribute("CrdRtg", "UnderlyingCreditRating_t_130605190"); // 1
    Undly_105_set.insert("UnderlyingCreditRating_t_130605190");
    Undly_105.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1450089850"); // 1
    Undly_105_set.insert("UnderlyingInstrRegistry_t_1450089850");
    Undly_105.add_attribute("Ctry", "1992548578"); // 1
    Undly_105_set.insert("1992548578");
    Undly_105.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1159477215"); // 1
    Undly_105_set.insert("UnderlyingStateOrProvinceOfIssue_t_1159477215");
    Undly_105.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_908908563"); // 1
    Undly_105_set.insert("UnderlyingLocaleOfIssue_t_908908563");
    Undly_105.add_attribute("Redeem", "UnderlyingRedemptionDate_t_80686396"); // 1
    Undly_105_set.insert("UnderlyingRedemptionDate_t_80686396");
    Undly_105.add_attribute("StrkPx", "17197816.570000"); // 1
    Undly_105_set.insert("17197816.570000");
    Undly_105.add_attribute("StrkCcy", "CAN"); // 1
    Undly_105_set.insert("CAN");
    Undly_105.add_attribute("OptA", "1866956896"); // 1
    Undly_105_set.insert("1866956896");
    Undly_105.add_attribute("Mult", "19347249.880000"); // 1
    Undly_105_set.insert("19347249.880000");
    Undly_105.add_attribute("MultTyp", "1"); // 1
    Undly_105_set.insert("1");
    Undly_105.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_105_set.insert("1");
    Undly_105.add_attribute("UOM", "MWh"); // 1
    Undly_105_set.insert("MWh");
    Undly_105.add_attribute("UOMQty", "4800526.790000"); // 1
    Undly_105_set.insert("4800526.790000");
    Undly_105.add_attribute("PxUOM", "Gal"); // 1
    Undly_105_set.insert("Gal");
    Undly_105.add_attribute("PxUOMQty", "19657154.310000"); // 1
    Undly_105_set.insert("19657154.310000");
    Undly_105.add_attribute("TmUnit", "Mo"); // 1
    Undly_105_set.insert("Mo");
    Undly_105.add_attribute("ExerStyle", "2"); // 1
    Undly_105_set.insert("2");
    Undly_105.add_attribute("CpnRt", "2145244.280000"); // 1
    Undly_105_set.insert("2145244.280000");
    Undly_105.add_attribute("Exch", "UnderlyingSecurityExchange_t_2005233642"); // 1
    Undly_105_set.insert("UnderlyingSecurityExchange_t_2005233642");
    Undly_105.add_attribute("Issr", "UnderlyingIssuer_t_1261287608"); // 1
    Undly_105_set.insert("UnderlyingIssuer_t_1261287608");
    Undly_105.add_attribute("EncUndIssrLen", "1404370706"); // 1
    Undly_105_set.insert("1404370706");
    Undly_105.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_561668168"); // 1
    Undly_105_set.insert("EncodedUnderlyingIssuer_t_561668168");
    Undly_105.add_attribute("Desc", "UnderlyingSecurityDesc_t_263421850"); // 1
    Undly_105_set.insert("UnderlyingSecurityDesc_t_263421850");
    Undly_105.add_attribute("EncUndSecDescLen", "433403505"); // 1
    Undly_105_set.insert("433403505");
    Undly_105.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1029720271"); // 1
    Undly_105_set.insert("EncodedUnderlyingSecurityDesc_t_1029720271");
    Undly_105.add_attribute("CPPgm", "UnderlyingCPProgram_t_675584060"); // 1
    Undly_105_set.insert("UnderlyingCPProgram_t_675584060");
    Undly_105.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_361083081"); // 1
    Undly_105_set.insert("UnderlyingCPRegType_t_361083081");
    Undly_105.add_attribute("AllocPct", "9612112.700000"); // 1
    Undly_105_set.insert("9612112.700000");
    Undly_105.add_attribute("Ccy", "EUR"); // 1
    Undly_105_set.insert("EUR");
    Undly_105.add_attribute("Qty", "2638174.730000"); // 1
    Undly_105_set.insert("2638174.730000");
    Undly_105.add_attribute("SettlTyp", "4"); // 1
    Undly_105_set.insert("4");
    Undly_105.add_attribute("CashAmt", "UnderlyingCashAmount_t_1651165486"); // 1
    Undly_105_set.insert("UnderlyingCashAmount_t_1651165486");
    Undly_105.add_attribute("CashTyp", "FIXED"); // 1
    Undly_105_set.insert("FIXED");
    Undly_105.add_attribute("Px", "19156906.550000"); // 1
    Undly_105_set.insert("19156906.550000");
    Undly_105.add_attribute("DirtPx", "12234634.950000"); // 1
    Undly_105_set.insert("12234634.950000");
    Undly_105.add_attribute("EndPx", "15044350.020000"); // 1
    Undly_105_set.insert("15044350.020000");
    Undly_105.add_attribute("StartVal", "UnderlyingStartValue_t_959661243"); // 1
    Undly_105_set.insert("UnderlyingStartValue_t_959661243");
    Undly_105.add_attribute("CurVal", "UnderlyingCurrentValue_t_942936743"); // 1
    Undly_105_set.insert("UnderlyingCurrentValue_t_942936743");
    Undly_105.add_attribute("EndVal", "UnderlyingEndValue_t_1291676343"); // 1
    Undly_105_set.insert("UnderlyingEndValue_t_1291676343");
    Undly_105.add_attribute("AdjQty", "13778611.930000"); // 1
    Undly_105_set.insert("13778611.930000");
    Undly_105.add_attribute("FxRate", "6471271.620000"); // 1
    Undly_105_set.insert("6471271.620000");
    Undly_105.add_attribute("FxRateCalc", "D"); // 1
    Undly_105_set.insert("D");
    Undly_105.add_attribute("CapValu", "UnderlyingCapValue_t_1857913873"); // 1
    Undly_105_set.insert("UnderlyingCapValue_t_1857913873");
    Undly_105.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1538230976"); // 1
    Undly_105_set.insert("UnderlyingSettlMethod_t_1538230976");
    Undly_105.add_attribute("PutCall", "777546748"); // 1
    Undly_105_set.insert("777546748");
    all_values.push_back(Undly_105_set);
    all_compo_names.insert("Undly_105_set");

    {
      xml_element UndAID_105{"UndAID"};
      multiset<string> UndAID_105_set;
      UndAID_105.add_attribute("AltID", "UnderlyingSecurityAltID_t_237956033"); // 2
      UndAID_105_set.insert("UnderlyingSecurityAltID_t_237956033");
      UndAID_105.add_attribute("AltIDSrc", "C"); // 2
      UndAID_105_set.insert("C");
      all_values.push_back(UndAID_105_set);
      all_compo_names.insert("UndAID_105_set");

      Undly_105.add_element(UndAID_105);
    }
    {
      xml_element Stip_166{"Stip"};
      multiset<string> Stip_166_set;
      Stip_166.add_attribute("Typ", "WALA"); // 2
      Stip_166_set.insert("WALA");
      Stip_166.add_attribute("Val", "UnderlyingStipValue_t_95706027"); // 2
      Stip_166_set.insert("UnderlyingStipValue_t_95706027");
      all_values.push_back(Stip_166_set);
      all_compo_names.insert("Stip_166_set");

      Undly_105.add_element(Stip_166);
    }
    {
      xml_element Pty_396{"Pty"};
      multiset<string> Pty_396_set;
      Pty_396.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1274922824"); // 2
      Pty_396_set.insert("UnderlyingInstrumentPartyID_t_1274922824");
      Pty_396.add_attribute("Src", "2"); // 2
      Pty_396_set.insert("2");
      Pty_396.add_attribute("R", "31"); // 2
      Pty_396_set.insert("31");
      all_values.push_back(Pty_396_set);
      all_compo_names.insert("Pty_396_set");

      {
        xml_element Sub_396{"Sub"};
        multiset<string> Sub_396_set;
        Sub_396.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1538344674"); // 3
        Sub_396_set.insert("UnderlyingInstrumentPartySubID_t_1538344674");
        Sub_396.add_attribute("Typ", "24"); // 3
        Sub_396_set.insert("24");
        all_values.push_back(Sub_396_set);
        all_compo_names.insert("Sub_396_set");

        Pty_396.add_element(Sub_396);
      }
      Undly_105.add_element(Pty_396);
    }
    elt.add_element(Undly_105);
  } // end Undly
  { // Stip
    xml_element Stip_167{"Stip"};
    multiset<string> Stip_167_set;
    Stip_167.add_attribute("Typ", "SECTOR"); // 1
    Stip_167_set.insert("SECTOR");
    Stip_167.add_attribute("Val", "StipulationValue_t_1043444821"); // 1
    Stip_167_set.insert("StipulationValue_t_1043444821");
    all_values.push_back(Stip_167_set);
    all_compo_names.insert("Stip_167_set");

    elt.add_element(Stip_167);
  } // end Stip
  { // Leg
    xml_element Leg_87{"Leg"};
    multiset<string> Leg_87_set;
    Leg_87.add_attribute("Sym", "LegSymbol_t_2056384416"); // 1
    Leg_87_set.insert("LegSymbol_t_2056384416");
    Leg_87.add_attribute("Sfx", "CD"); // 1
    Leg_87_set.insert("CD");
    Leg_87.add_attribute("ID", "LegSecurityID_t_764639562"); // 1
    Leg_87_set.insert("LegSecurityID_t_764639562");
    Leg_87.add_attribute("Src", "8"); // 1
    Leg_87_set.insert("8");
    Leg_87.add_attribute("Prod", "7"); // 1
    Leg_87_set.insert("7");
    Leg_87.add_attribute("CFI", "LegCFICode_t_1937365598"); // 1
    Leg_87_set.insert("LegCFICode_t_1937365598");
    Leg_87.add_attribute("SecTyp", "?"); // 1
    Leg_87_set.insert("?");
    Leg_87.add_attribute("SecSubTyp", "LegSecuritySubType_t_114794777"); // 1
    Leg_87_set.insert("LegSecuritySubType_t_114794777");
    Leg_87.add_attribute("MMY", "1294316953"); // 1
    Leg_87_set.insert("1294316953");
    Leg_87.add_attribute("Mat", "LegMaturityDate_t_324289630"); // 1
    Leg_87_set.insert("LegMaturityDate_t_324289630");
    Leg_87.add_attribute("MatTm", "1057731521"); // 1
    Leg_87_set.insert("1057731521");
    Leg_87.add_attribute("CpnPmt", "LegCouponPaymentDate_t_438509648"); // 1
    Leg_87_set.insert("LegCouponPaymentDate_t_438509648");
    Leg_87.add_attribute("Issued", "LegIssueDate_t_1702150823"); // 1
    Leg_87_set.insert("LegIssueDate_t_1702150823");
    Leg_87.add_attribute("RepoCollSecTyp", "1704858683"); // 1
    Leg_87_set.insert("1704858683");
    Leg_87.add_attribute("RepoTrm", "1397824613"); // 1
    Leg_87_set.insert("1397824613");
    Leg_87.add_attribute("RepoRt", "14125810.480000"); // 1
    Leg_87_set.insert("14125810.480000");
    Leg_87.add_attribute("Fctr", "10956060.110000"); // 1
    Leg_87_set.insert("10956060.110000");
    Leg_87.add_attribute("CrdRtg", "LegCreditRating_t_27887713"); // 1
    Leg_87_set.insert("LegCreditRating_t_27887713");
    Leg_87.add_attribute("Rgstry", "LegInstrRegistry_t_1650537081"); // 1
    Leg_87_set.insert("LegInstrRegistry_t_1650537081");
    Leg_87.add_attribute("Ctry", "1109241227"); // 1
    Leg_87_set.insert("1109241227");
    Leg_87.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1019958889"); // 1
    Leg_87_set.insert("LegStateOrProvinceOfIssue_t_1019958889");
    Leg_87.add_attribute("Lcl", "LegLocaleOfIssue_t_1746243108"); // 1
    Leg_87_set.insert("LegLocaleOfIssue_t_1746243108");
    Leg_87.add_attribute("Redeem", "LegRedemptionDate_t_236680403"); // 1
    Leg_87_set.insert("LegRedemptionDate_t_236680403");
    Leg_87.add_attribute("Strk", "12689171.240000"); // 1
    Leg_87_set.insert("12689171.240000");
    Leg_87.add_attribute("StrkCcy", "CAN"); // 1
    Leg_87_set.insert("CAN");
    Leg_87.add_attribute("OptA", "1951278865"); // 1
    Leg_87_set.insert("1951278865");
    Leg_87.add_attribute("Cmult", "19432281.220000"); // 1
    Leg_87_set.insert("19432281.220000");
    Leg_87.add_attribute("MultTyp", "0"); // 1
    Leg_87_set.insert("0");
    Leg_87.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_87_set.insert("3");
    Leg_87.add_attribute("UOM", "lbs"); // 1
    Leg_87_set.insert("lbs");
    Leg_87.add_attribute("UOMQty", "17503709.320000"); // 1
    Leg_87_set.insert("17503709.320000");
    Leg_87.add_attribute("PxUOM", "Bcf"); // 1
    Leg_87_set.insert("Bcf");
    Leg_87.add_attribute("PxUOMQty", "10612061.250000"); // 1
    Leg_87_set.insert("10612061.250000");
    Leg_87.add_attribute("TmUnit", "Wk"); // 1
    Leg_87_set.insert("Wk");
    Leg_87.add_attribute("ExerStyle", "2"); // 1
    Leg_87_set.insert("2");
    Leg_87.add_attribute("CpnRt", "8510880.750000"); // 1
    Leg_87_set.insert("8510880.750000");
    Leg_87.add_attribute("Exch", "LegSecurityExchange_t_711420698"); // 1
    Leg_87_set.insert("LegSecurityExchange_t_711420698");
    Leg_87.add_attribute("Issr", "LegIssuer_t_1388499191"); // 1
    Leg_87_set.insert("LegIssuer_t_1388499191");
    Leg_87.add_attribute("EncLegIssrLen", "2145405028"); // 1
    Leg_87_set.insert("2145405028");
    Leg_87.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1035710328"); // 1
    Leg_87_set.insert("EncodedLegIssuer_t_1035710328");
    Leg_87.add_attribute("Desc", "LegSecurityDesc_t_298747064"); // 1
    Leg_87_set.insert("LegSecurityDesc_t_298747064");
    Leg_87.add_attribute("EncLegSecDescLen", "436431028"); // 1
    Leg_87_set.insert("436431028");
    Leg_87.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_590377504"); // 1
    Leg_87_set.insert("EncodedLegSecurityDesc_t_590377504");
    Leg_87.add_attribute("RatioQty", "20036057.470000"); // 1
    Leg_87_set.insert("20036057.470000");
    Leg_87.add_attribute("Side", "A"); // 1
    Leg_87_set.insert("A");
    Leg_87.add_attribute("Ccy", "JPY"); // 1
    Leg_87_set.insert("JPY");
    Leg_87.add_attribute("Pool", "LegPool_t_1862143354"); // 1
    Leg_87_set.insert("LegPool_t_1862143354");
    Leg_87.add_attribute("Dated", "LegDatedDate_t_1506011986"); // 1
    Leg_87_set.insert("LegDatedDate_t_1506011986");
    Leg_87.add_attribute("CSetMo", "2060969337"); // 1
    Leg_87_set.insert("2060969337");
    Leg_87.add_attribute("IntAcrl", "LegInterestAccrualDate_t_734618596"); // 1
    Leg_87_set.insert("LegInterestAccrualDate_t_734618596");
    Leg_87.add_attribute("PutCall", "1104771446"); // 1
    Leg_87_set.insert("1104771446");
    Leg_87.add_attribute("LegOptionRatio", "1501660.920000"); // 1
    Leg_87_set.insert("1501660.920000");
    Leg_87.add_attribute("Px", "20035357.200000"); // 1
    Leg_87_set.insert("20035357.200000");
    all_values.push_back(Leg_87_set);
    all_compo_names.insert("Leg_87_set");

    {
      xml_element LegAID_82{"LegAID"};
      multiset<string> LegAID_82_set;
      LegAID_82.add_attribute("SecAltID", "LegSecurityAltID_t_1360905102"); // 2
      LegAID_82_set.insert("LegSecurityAltID_t_1360905102");
      LegAID_82.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_82_set.insert("D");
      all_values.push_back(LegAID_82_set);
      all_compo_names.insert("LegAID_82_set");

      Leg_87.add_element(LegAID_82);
    }
    elt.add_element(Leg_87);
  } // end Leg
  { // Leg
    xml_element Leg_88{"Leg"};
    multiset<string> Leg_88_set;
    Leg_88.add_attribute("Sym", "LegSymbol_t_1807330937"); // 1
    Leg_88_set.insert("LegSymbol_t_1807330937");
    Leg_88.add_attribute("Sfx", "CD"); // 1
    Leg_88_set.insert("CD");
    Leg_88.add_attribute("ID", "LegSecurityID_t_1619177686"); // 1
    Leg_88_set.insert("LegSecurityID_t_1619177686");
    Leg_88.add_attribute("Src", "1"); // 1
    Leg_88_set.insert("1");
    Leg_88.add_attribute("Prod", "8"); // 1
    Leg_88_set.insert("8");
    Leg_88.add_attribute("CFI", "LegCFICode_t_1222064970"); // 1
    Leg_88_set.insert("LegCFICode_t_1222064970");
    Leg_88.add_attribute("SecTyp", "CB"); // 1
    Leg_88_set.insert("CB");
    Leg_88.add_attribute("SecSubTyp", "LegSecuritySubType_t_366938616"); // 1
    Leg_88_set.insert("LegSecuritySubType_t_366938616");
    Leg_88.add_attribute("MMY", "421373633"); // 1
    Leg_88_set.insert("421373633");
    Leg_88.add_attribute("Mat", "LegMaturityDate_t_2015681224"); // 1
    Leg_88_set.insert("LegMaturityDate_t_2015681224");
    Leg_88.add_attribute("MatTm", "1218026691"); // 1
    Leg_88_set.insert("1218026691");
    Leg_88.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1132794332"); // 1
    Leg_88_set.insert("LegCouponPaymentDate_t_1132794332");
    Leg_88.add_attribute("Issued", "LegIssueDate_t_1256696767"); // 1
    Leg_88_set.insert("LegIssueDate_t_1256696767");
    Leg_88.add_attribute("RepoCollSecTyp", "1215948072"); // 1
    Leg_88_set.insert("1215948072");
    Leg_88.add_attribute("RepoTrm", "21021012"); // 1
    Leg_88_set.insert("21021012");
    Leg_88.add_attribute("RepoRt", "15554438.310000"); // 1
    Leg_88_set.insert("15554438.310000");
    Leg_88.add_attribute("Fctr", "16523791.000000"); // 1
    Leg_88_set.insert("16523791.000000");
    Leg_88.add_attribute("CrdRtg", "LegCreditRating_t_611398516"); // 1
    Leg_88_set.insert("LegCreditRating_t_611398516");
    Leg_88.add_attribute("Rgstry", "LegInstrRegistry_t_1411565930"); // 1
    Leg_88_set.insert("LegInstrRegistry_t_1411565930");
    Leg_88.add_attribute("Ctry", "1339151094"); // 1
    Leg_88_set.insert("1339151094");
    Leg_88.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_466873421"); // 1
    Leg_88_set.insert("LegStateOrProvinceOfIssue_t_466873421");
    Leg_88.add_attribute("Lcl", "LegLocaleOfIssue_t_215810393"); // 1
    Leg_88_set.insert("LegLocaleOfIssue_t_215810393");
    Leg_88.add_attribute("Redeem", "LegRedemptionDate_t_1053810800"); // 1
    Leg_88_set.insert("LegRedemptionDate_t_1053810800");
    Leg_88.add_attribute("Strk", "19728854.070000"); // 1
    Leg_88_set.insert("19728854.070000");
    Leg_88.add_attribute("StrkCcy", "USD"); // 1
    Leg_88_set.insert("USD");
    Leg_88.add_attribute("OptA", "930173205"); // 1
    Leg_88_set.insert("930173205");
    Leg_88.add_attribute("Cmult", "2794621.750000"); // 1
    Leg_88_set.insert("2794621.750000");
    Leg_88.add_attribute("MultTyp", "2"); // 1
    Leg_88_set.insert("2");
    Leg_88.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_88_set.insert("4");
    Leg_88.add_attribute("UOM", "MWh"); // 1
    Leg_88_set.insert("MWh");
    Leg_88.add_attribute("UOMQty", "13043287.580000"); // 1
    Leg_88_set.insert("13043287.580000");
    Leg_88.add_attribute("PxUOM", "t"); // 1
    Leg_88_set.insert("t");
    Leg_88.add_attribute("PxUOMQty", "16763473.830000"); // 1
    Leg_88_set.insert("16763473.830000");
    Leg_88.add_attribute("TmUnit", "Wk"); // 1
    Leg_88_set.insert("Wk");
    Leg_88.add_attribute("ExerStyle", "0"); // 1
    Leg_88_set.insert("0");
    Leg_88.add_attribute("CpnRt", "7509287.050000"); // 1
    Leg_88_set.insert("7509287.050000");
    Leg_88.add_attribute("Exch", "LegSecurityExchange_t_405909249"); // 1
    Leg_88_set.insert("LegSecurityExchange_t_405909249");
    Leg_88.add_attribute("Issr", "LegIssuer_t_972915342"); // 1
    Leg_88_set.insert("LegIssuer_t_972915342");
    Leg_88.add_attribute("EncLegIssrLen", "1172302338"); // 1
    Leg_88_set.insert("1172302338");
    Leg_88.add_attribute("EncLegIssr", "EncodedLegIssuer_t_274106826"); // 1
    Leg_88_set.insert("EncodedLegIssuer_t_274106826");
    Leg_88.add_attribute("Desc", "LegSecurityDesc_t_43458386"); // 1
    Leg_88_set.insert("LegSecurityDesc_t_43458386");
    Leg_88.add_attribute("EncLegSecDescLen", "157613022"); // 1
    Leg_88_set.insert("157613022");
    Leg_88.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1530803593"); // 1
    Leg_88_set.insert("EncodedLegSecurityDesc_t_1530803593");
    Leg_88.add_attribute("RatioQty", "12594064.580000"); // 1
    Leg_88_set.insert("12594064.580000");
    Leg_88.add_attribute("Side", "4"); // 1
    Leg_88_set.insert("4");
    Leg_88.add_attribute("Ccy", "JPY"); // 1
    Leg_88_set.insert("JPY");
    Leg_88.add_attribute("Pool", "LegPool_t_790032551"); // 1
    Leg_88_set.insert("LegPool_t_790032551");
    Leg_88.add_attribute("Dated", "LegDatedDate_t_202846059"); // 1
    Leg_88_set.insert("LegDatedDate_t_202846059");
    Leg_88.add_attribute("CSetMo", "2103453004"); // 1
    Leg_88_set.insert("2103453004");
    Leg_88.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1256905972"); // 1
    Leg_88_set.insert("LegInterestAccrualDate_t_1256905972");
    Leg_88.add_attribute("PutCall", "418656452"); // 1
    Leg_88_set.insert("418656452");
    Leg_88.add_attribute("LegOptionRatio", "10097801.570000"); // 1
    Leg_88_set.insert("10097801.570000");
    Leg_88.add_attribute("Px", "10823077.310000"); // 1
    Leg_88_set.insert("10823077.310000");
    all_values.push_back(Leg_88_set);
    all_compo_names.insert("Leg_88_set");

    {
      xml_element LegAID_83{"LegAID"};
      multiset<string> LegAID_83_set;
      LegAID_83.add_attribute("SecAltID", "LegSecurityAltID_t_547952535"); // 2
      LegAID_83_set.insert("LegSecurityAltID_t_547952535");
      LegAID_83.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_83_set.insert("6");
      all_values.push_back(LegAID_83_set);
      all_compo_names.insert("LegAID_83_set");

      Leg_88.add_element(LegAID_83);
    }
    elt.add_element(Leg_88);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_31{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_31_set;
    SprdBnchmkCurve_31.add_attribute("Spread", "20124809.370000"); // 1
    SprdBnchmkCurve_31_set.insert("20124809.370000");
    SprdBnchmkCurve_31.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_31_set.insert("USD");
    SprdBnchmkCurve_31.add_attribute("Name", "Pfandbriefe"); // 1
    SprdBnchmkCurve_31_set.insert("Pfandbriefe");
    SprdBnchmkCurve_31.add_attribute("Point", "BenchmarkCurvePoint_t_884584407"); // 1
    SprdBnchmkCurve_31_set.insert("BenchmarkCurvePoint_t_884584407");
    SprdBnchmkCurve_31.add_attribute("Px", "14520524.850000"); // 1
    SprdBnchmkCurve_31_set.insert("14520524.850000");
    SprdBnchmkCurve_31.add_attribute("PxTyp", "5"); // 1
    SprdBnchmkCurve_31_set.insert("5");
    SprdBnchmkCurve_31.add_attribute("SecID", "BenchmarkSecurityID_t_413448142"); // 1
    SprdBnchmkCurve_31_set.insert("BenchmarkSecurityID_t_413448142");
    SprdBnchmkCurve_31.add_attribute("SecIDSrc", "A"); // 1
    SprdBnchmkCurve_31_set.insert("A");
    all_values.push_back(SprdBnchmkCurve_31_set);
    all_compo_names.insert("SprdBnchmkCurve_31_set");

    elt.add_element(SprdBnchmkCurve_31);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_26{"Yield"};
    multiset<string> Yield_26_set;
    Yield_26.add_attribute("Typ", "SEMIANNUAL"); // 1
    Yield_26_set.insert("SEMIANNUAL");
    Yield_26.add_attribute("Yld", "11643768.470000"); // 1
    Yield_26_set.insert("11643768.470000");
    Yield_26.add_attribute("CalcDt", "YieldCalcDate_t_1521894173"); // 1
    Yield_26_set.insert("YieldCalcDate_t_1521894173");
    Yield_26.add_attribute("RedDt", "YieldRedemptionDate_t_740244605"); // 1
    Yield_26_set.insert("YieldRedemptionDate_t_740244605");
    Yield_26.add_attribute("RedPx", "1891955.370000"); // 1
    Yield_26_set.insert("1891955.370000");
    Yield_26.add_attribute("RedPxTyp", "4"); // 1
    Yield_26_set.insert("4");
    all_values.push_back(Yield_26_set);
    all_compo_names.insert("Yield_26_set");

    elt.add_element(Yield_26);
  } // end Yield
  { // MktSegGrp
    xml_element MktSegGrp_2{"MktSegGrp"};
    multiset<string> MktSegGrp_2_set;
    MktSegGrp_2.add_attribute("MktID", "MarketID_t_346808560"); // 1
    MktSegGrp_2_set.insert("MarketID_t_346808560");
    MktSegGrp_2.add_attribute("MktSegID", "MarketSegmentID_t_1179320944"); // 1
    MktSegGrp_2_set.insert("MarketSegmentID_t_1179320944");
    all_values.push_back(MktSegGrp_2_set);
    all_compo_names.insert("MktSegGrp_2_set");

    {
      xml_element SecTrdgRules_2{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_4{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_4_set;
        BaseTrdgRules_4.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_4_set.insert("0");
        BaseTrdgRules_4.add_attribute("MinTrdVol", "5254425.950000"); // 3
        BaseTrdgRules_4_set.insert("5254425.950000");
        BaseTrdgRules_4.add_attribute("MaxTrdVol", "21180847.210000"); // 3
        BaseTrdgRules_4_set.insert("21180847.210000");
        BaseTrdgRules_4.add_attribute("MxPxVar", "6599277.110000"); // 3
        BaseTrdgRules_4_set.insert("6599277.110000");
        BaseTrdgRules_4.add_attribute("ImpldMktInd", "2"); // 3
        BaseTrdgRules_4_set.insert("2");
        BaseTrdgRules_4.add_attribute("TrdCcy", "GBP"); // 3
        BaseTrdgRules_4_set.insert("GBP");
        BaseTrdgRules_4.add_attribute("RndLot", "4248974.710000"); // 3
        BaseTrdgRules_4_set.insert("4248974.710000");
        BaseTrdgRules_4.add_attribute("MlegModel", "2"); // 3
        BaseTrdgRules_4_set.insert("2");
        BaseTrdgRules_4.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_4_set.insert("1");
        BaseTrdgRules_4.add_attribute("PxTyp", "5"); // 3
        BaseTrdgRules_4_set.insert("5");
        all_values.push_back(BaseTrdgRules_4_set);
        all_compo_names.insert("BaseTrdgRules_4_set");

        {
          xml_element TickRules_4{"TickRules"};
          multiset<string> TickRules_4_set;
          TickRules_4.add_attribute("StartTickPxRng", "11400561.200000"); // 4
          TickRules_4_set.insert("11400561.200000");
          TickRules_4.add_attribute("EndTickPxRng", "1289194.820000"); // 4
          TickRules_4_set.insert("1289194.820000");
          TickRules_4.add_attribute("TickIncr", "13722024.910000"); // 4
          TickRules_4_set.insert("13722024.910000");
          TickRules_4.add_attribute("TickRuleTyp", "0"); // 4
          TickRules_4_set.insert("0");
          all_values.push_back(TickRules_4_set);
          all_compo_names.insert("TickRules_4_set");

          BaseTrdgRules_4.add_element(TickRules_4);
        }
        {
          xml_element LotTypeRules_4{"LotTypeRules"};
          multiset<string> LotTypeRules_4_set;
          LotTypeRules_4.add_attribute("LotTyp", "2"); // 4
          LotTypeRules_4_set.insert("2");
          LotTypeRules_4.add_attribute("MinLotSz", "13807944.400000"); // 4
          LotTypeRules_4_set.insert("13807944.400000");
          all_values.push_back(LotTypeRules_4_set);
          all_compo_names.insert("LotTypeRules_4_set");

          BaseTrdgRules_4.add_element(LotTypeRules_4);
        }
        {
          xml_element PxLmts_4{"PxLmts"};
          multiset<string> PxLmts_4_set;
          PxLmts_4.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_4_set.insert("1");
          PxLmts_4.add_attribute("LowLmtPx", "17286956.940000"); // 4
          PxLmts_4_set.insert("17286956.940000");
          PxLmts_4.add_attribute("HiLmtPx", "5421469.760000"); // 4
          PxLmts_4_set.insert("5421469.760000");
          PxLmts_4.add_attribute("TrdgRefPx", "11180197.310000"); // 4
          PxLmts_4_set.insert("11180197.310000");
          all_values.push_back(PxLmts_4_set);
          all_compo_names.insert("PxLmts_4_set");

          BaseTrdgRules_4.add_element(PxLmts_4);
        }
        SecTrdgRules_2.add_element(BaseTrdgRules_4);
      }
      {
        xml_element TrdgSesRulesGrp_2{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_2_set;
        TrdgSesRulesGrp_2.add_attribute("SesID", "6"); // 3
        TrdgSesRulesGrp_2_set.insert("6");
        TrdgSesRulesGrp_2.add_attribute("SesSub", "2"); // 3
        TrdgSesRulesGrp_2_set.insert("2");
        all_values.push_back(TrdgSesRulesGrp_2_set);
        all_compo_names.insert("TrdgSesRulesGrp_2_set");

        {
          xml_element TrdgSesRules_2{"TrdgSesRules"};
          {
            xml_element OrdTypRules_7{"OrdTypRules"};
            multiset<string> OrdTypRules_7_set;
            OrdTypRules_7.add_attribute("OrdTyp", "3"); // 5
            OrdTypRules_7_set.insert("3");
            all_values.push_back(OrdTypRules_7_set);
            all_compo_names.insert("OrdTypRules_7_set");

            TrdgSesRules_2.add_element(OrdTypRules_7);
          }
          {
            xml_element TmInForceRules_6{"TmInForceRules"};
            multiset<string> TmInForceRules_6_set;
            TmInForceRules_6.add_attribute("TmInForce", "4"); // 5
            TmInForceRules_6_set.insert("4");
            all_values.push_back(TmInForceRules_6_set);
            all_compo_names.insert("TmInForceRules_6_set");

            TrdgSesRules_2.add_element(TmInForceRules_6);
          }
          {
            xml_element ExecInstRules_5{"ExecInstRules"};
            multiset<string> ExecInstRules_5_set;
            ExecInstRules_5.add_attribute("ExecInstValu", "3"); // 5
            ExecInstRules_5_set.insert("3");
            all_values.push_back(ExecInstRules_5_set);
            all_compo_names.insert("ExecInstRules_5_set");

            TrdgSesRules_2.add_element(ExecInstRules_5);
          }
          {
            xml_element MtchRules_2{"MtchRules"};
            multiset<string> MtchRules_2_set;
            MtchRules_2.add_attribute("MtchAlgo", "MatchAlgorithm_t_324108468"); // 5
            MtchRules_2_set.insert("MatchAlgorithm_t_324108468");
            MtchRules_2.add_attribute("MtchTyp", "6"); // 5
            MtchRules_2_set.insert("6");
            all_values.push_back(MtchRules_2_set);
            all_compo_names.insert("MtchRules_2_set");

            TrdgSesRules_2.add_element(MtchRules_2);
          }
          {
            xml_element MDFeedTyps_2{"MDFeedTyps"};
            multiset<string> MDFeedTyps_2_set;
            MDFeedTyps_2.add_attribute("MDFeedTyp", "MDFeedType_t_1833423834"); // 5
            MDFeedTyps_2_set.insert("MDFeedType_t_1833423834");
            MDFeedTyps_2.add_attribute("MktDepth", "670917028"); // 5
            MDFeedTyps_2_set.insert("670917028");
            MDFeedTyps_2.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_2_set.insert("2");
            all_values.push_back(MDFeedTyps_2_set);
            all_compo_names.insert("MDFeedTyps_2_set");

            TrdgSesRules_2.add_element(MDFeedTyps_2);
          }
          TrdgSesRulesGrp_2.add_element(TrdgSesRules_2);
        }
        SecTrdgRules_2.add_element(TrdgSesRulesGrp_2);
      }
      {
        xml_element Attrb_13{"Attrb"};
        multiset<string> Attrb_13_set;
        Attrb_13.add_attribute("Typ", "25"); // 3
        Attrb_13_set.insert("25");
        Attrb_13.add_attribute("Val", "NestedInstrAttribValue_t_1196359623"); // 3
        Attrb_13_set.insert("NestedInstrAttribValue_t_1196359623");
        all_values.push_back(Attrb_13_set);
        all_compo_names.insert("Attrb_13_set");

        SecTrdgRules_2.add_element(Attrb_13);
      }
      MktSegGrp_2.add_element(SecTrdgRules_2);
    }
    {
      xml_element StrkRules_2{"StrkRules"};
      multiset<string> StrkRules_2_set;
      StrkRules_2.add_attribute("StrkRule", "StrikeRuleID_t_870046863"); // 2
      StrkRules_2_set.insert("StrikeRuleID_t_870046863");
      StrkRules_2.add_attribute("StartStrkPxRng", "2414936.990000"); // 2
      StrkRules_2_set.insert("2414936.990000");
      StrkRules_2.add_attribute("EndStrkPxRng", "3643511.210000"); // 2
      StrkRules_2_set.insert("3643511.210000");
      StrkRules_2.add_attribute("StrkIncr", "10434939.960000"); // 2
      StrkRules_2_set.insert("10434939.960000");
      StrkRules_2.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_2_set.insert("1");
      all_values.push_back(StrkRules_2_set);
      all_compo_names.insert("StrkRules_2_set");

      {
        xml_element MatRules_2{"MatRules"};
        multiset<string> MatRules_2_set;
        MatRules_2.add_attribute("MatRuleID", "MaturityRuleID_t_789248592"); // 3
        MatRules_2_set.insert("MaturityRuleID_t_789248592");
        MatRules_2.add_attribute("MMYFmt", "0"); // 3
        MatRules_2_set.insert("0");
        MatRules_2.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_2_set.insert("0");
        MatRules_2.add_attribute("StartMMY", "148970147"); // 3
        MatRules_2_set.insert("148970147");
        MatRules_2.add_attribute("EndMMY", "628170054"); // 3
        MatRules_2_set.insert("628170054");
        MatRules_2.add_attribute("MMYIncr", "464503826"); // 3
        MatRules_2_set.insert("464503826");
        all_values.push_back(MatRules_2_set);
        all_compo_names.insert("MatRules_2_set");

        StrkRules_2.add_element(MatRules_2);
      }
      MktSegGrp_2.add_element(StrkRules_2);
    }
    elt.add_element(MktSegGrp_2);
  } // end MktSegGrp
  { // MktSegGrp
    xml_element MktSegGrp_3{"MktSegGrp"};
    multiset<string> MktSegGrp_3_set;
    MktSegGrp_3.add_attribute("MktID", "MarketID_t_1521172638"); // 1
    MktSegGrp_3_set.insert("MarketID_t_1521172638");
    MktSegGrp_3.add_attribute("MktSegID", "MarketSegmentID_t_448157237"); // 1
    MktSegGrp_3_set.insert("MarketSegmentID_t_448157237");
    all_values.push_back(MktSegGrp_3_set);
    all_compo_names.insert("MktSegGrp_3_set");

    {
      xml_element SecTrdgRules_3{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_5{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_5_set;
        BaseTrdgRules_5.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_5_set.insert("2");
        BaseTrdgRules_5.add_attribute("MinTrdVol", "7544834.300000"); // 3
        BaseTrdgRules_5_set.insert("7544834.300000");
        BaseTrdgRules_5.add_attribute("MaxTrdVol", "11527288.260000"); // 3
        BaseTrdgRules_5_set.insert("11527288.260000");
        BaseTrdgRules_5.add_attribute("MxPxVar", "3223590.810000"); // 3
        BaseTrdgRules_5_set.insert("3223590.810000");
        BaseTrdgRules_5.add_attribute("ImpldMktInd", "2"); // 3
        BaseTrdgRules_5_set.insert("2");
        BaseTrdgRules_5.add_attribute("TrdCcy", "CHF"); // 3
        BaseTrdgRules_5_set.insert("CHF");
        BaseTrdgRules_5.add_attribute("RndLot", "16061066.450000"); // 3
        BaseTrdgRules_5_set.insert("16061066.450000");
        BaseTrdgRules_5.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_5_set.insert("0");
        BaseTrdgRules_5.add_attribute("MlegPxMeth", "5"); // 3
        BaseTrdgRules_5_set.insert("5");
        BaseTrdgRules_5.add_attribute("PxTyp", "7"); // 3
        BaseTrdgRules_5_set.insert("7");
        all_values.push_back(BaseTrdgRules_5_set);
        all_compo_names.insert("BaseTrdgRules_5_set");

        {
          xml_element TickRules_5{"TickRules"};
          multiset<string> TickRules_5_set;
          TickRules_5.add_attribute("StartTickPxRng", "5822863.080000"); // 4
          TickRules_5_set.insert("5822863.080000");
          TickRules_5.add_attribute("EndTickPxRng", "8112883.910000"); // 4
          TickRules_5_set.insert("8112883.910000");
          TickRules_5.add_attribute("TickIncr", "1942840.270000"); // 4
          TickRules_5_set.insert("1942840.270000");
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
          LotTypeRules_5.add_attribute("MinLotSz", "19233336.620000"); // 4
          LotTypeRules_5_set.insert("19233336.620000");
          all_values.push_back(LotTypeRules_5_set);
          all_compo_names.insert("LotTypeRules_5_set");

          BaseTrdgRules_5.add_element(LotTypeRules_5);
        }
        {
          xml_element PxLmts_5{"PxLmts"};
          multiset<string> PxLmts_5_set;
          PxLmts_5.add_attribute("PxLmtTyp", "2"); // 4
          PxLmts_5_set.insert("2");
          PxLmts_5.add_attribute("LowLmtPx", "4332973.960000"); // 4
          PxLmts_5_set.insert("4332973.960000");
          PxLmts_5.add_attribute("HiLmtPx", "173437.130000"); // 4
          PxLmts_5_set.insert("173437.130000");
          PxLmts_5.add_attribute("TrdgRefPx", "6664304.330000"); // 4
          PxLmts_5_set.insert("6664304.330000");
          all_values.push_back(PxLmts_5_set);
          all_compo_names.insert("PxLmts_5_set");

          BaseTrdgRules_5.add_element(PxLmts_5);
        }
        SecTrdgRules_3.add_element(BaseTrdgRules_5);
      }
      {
        xml_element TrdgSesRulesGrp_3{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_3_set;
        TrdgSesRulesGrp_3.add_attribute("SesID", "6"); // 3
        TrdgSesRulesGrp_3_set.insert("6");
        TrdgSesRulesGrp_3.add_attribute("SesSub", "5"); // 3
        TrdgSesRulesGrp_3_set.insert("5");
        all_values.push_back(TrdgSesRulesGrp_3_set);
        all_compo_names.insert("TrdgSesRulesGrp_3_set");

        {
          xml_element TrdgSesRules_3{"TrdgSesRules"};
          {
            xml_element OrdTypRules_8{"OrdTypRules"};
            multiset<string> OrdTypRules_8_set;
            OrdTypRules_8.add_attribute("OrdTyp", "I"); // 5
            OrdTypRules_8_set.insert("I");
            all_values.push_back(OrdTypRules_8_set);
            all_compo_names.insert("OrdTypRules_8_set");

            TrdgSesRules_3.add_element(OrdTypRules_8);
          }
          {
            xml_element TmInForceRules_7{"TmInForceRules"};
            multiset<string> TmInForceRules_7_set;
            TmInForceRules_7.add_attribute("TmInForce", "7"); // 5
            TmInForceRules_7_set.insert("7");
            all_values.push_back(TmInForceRules_7_set);
            all_compo_names.insert("TmInForceRules_7_set");

            TrdgSesRules_3.add_element(TmInForceRules_7);
          }
          {
            xml_element ExecInstRules_6{"ExecInstRules"};
            multiset<string> ExecInstRules_6_set;
            ExecInstRules_6.add_attribute("ExecInstValu", "8"); // 5
            ExecInstRules_6_set.insert("8");
            all_values.push_back(ExecInstRules_6_set);
            all_compo_names.insert("ExecInstRules_6_set");

            TrdgSesRules_3.add_element(ExecInstRules_6);
          }
          {
            xml_element MtchRules_3{"MtchRules"};
            multiset<string> MtchRules_3_set;
            MtchRules_3.add_attribute("MtchAlgo", "MatchAlgorithm_t_1604649172"); // 5
            MtchRules_3_set.insert("MatchAlgorithm_t_1604649172");
            MtchRules_3.add_attribute("MtchTyp", "A2"); // 5
            MtchRules_3_set.insert("A2");
            all_values.push_back(MtchRules_3_set);
            all_compo_names.insert("MtchRules_3_set");

            TrdgSesRules_3.add_element(MtchRules_3);
          }
          {
            xml_element MDFeedTyps_3{"MDFeedTyps"};
            multiset<string> MDFeedTyps_3_set;
            MDFeedTyps_3.add_attribute("MDFeedTyp", "MDFeedType_t_1674822651"); // 5
            MDFeedTyps_3_set.insert("MDFeedType_t_1674822651");
            MDFeedTyps_3.add_attribute("MktDepth", "978338163"); // 5
            MDFeedTyps_3_set.insert("978338163");
            MDFeedTyps_3.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_3_set.insert("3");
            all_values.push_back(MDFeedTyps_3_set);
            all_compo_names.insert("MDFeedTyps_3_set");

            TrdgSesRules_3.add_element(MDFeedTyps_3);
          }
          TrdgSesRulesGrp_3.add_element(TrdgSesRules_3);
        }
        SecTrdgRules_3.add_element(TrdgSesRulesGrp_3);
      }
      {
        xml_element Attrb_14{"Attrb"};
        multiset<string> Attrb_14_set;
        Attrb_14.add_attribute("Typ", "6"); // 3
        Attrb_14_set.insert("6");
        Attrb_14.add_attribute("Val", "NestedInstrAttribValue_t_1732821593"); // 3
        Attrb_14_set.insert("NestedInstrAttribValue_t_1732821593");
        all_values.push_back(Attrb_14_set);
        all_compo_names.insert("Attrb_14_set");

        SecTrdgRules_3.add_element(Attrb_14);
      }
      MktSegGrp_3.add_element(SecTrdgRules_3);
    }
    {
      xml_element StrkRules_3{"StrkRules"};
      multiset<string> StrkRules_3_set;
      StrkRules_3.add_attribute("StrkRule", "StrikeRuleID_t_1046477797"); // 2
      StrkRules_3_set.insert("StrikeRuleID_t_1046477797");
      StrkRules_3.add_attribute("StartStrkPxRng", "5908451.200000"); // 2
      StrkRules_3_set.insert("5908451.200000");
      StrkRules_3.add_attribute("EndStrkPxRng", "8819683.520000"); // 2
      StrkRules_3_set.insert("8819683.520000");
      StrkRules_3.add_attribute("StrkIncr", "11697427.070000"); // 2
      StrkRules_3_set.insert("11697427.070000");
      StrkRules_3.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_3_set.insert("1");
      all_values.push_back(StrkRules_3_set);
      all_compo_names.insert("StrkRules_3_set");

      {
        xml_element MatRules_3{"MatRules"};
        multiset<string> MatRules_3_set;
        MatRules_3.add_attribute("MatRuleID", "MaturityRuleID_t_340591349"); // 3
        MatRules_3_set.insert("MaturityRuleID_t_340591349");
        MatRules_3.add_attribute("MMYFmt", "2"); // 3
        MatRules_3_set.insert("2");
        MatRules_3.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_3_set.insert("0");
        MatRules_3.add_attribute("StartMMY", "848935189"); // 3
        MatRules_3_set.insert("848935189");
        MatRules_3.add_attribute("EndMMY", "2010206856"); // 3
        MatRules_3_set.insert("2010206856");
        MatRules_3.add_attribute("MMYIncr", "1365369459"); // 3
        MatRules_3_set.insert("1365369459");
        all_values.push_back(MatRules_3_set);
        all_compo_names.insert("MatRules_3_set");

        StrkRules_3.add_element(MatRules_3);
      }
      MktSegGrp_3.add_element(StrkRules_3);
    }
    elt.add_element(MktSegGrp_3);
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
