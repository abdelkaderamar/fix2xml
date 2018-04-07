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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecDef" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityDefinition_message_t_0;
  elt.add_attribute("RptID", "884369821"); // 0
  SecurityDefinition_message_t_0.insert("884369821");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1940916575"); // 0
  SecurityDefinition_message_t_0.insert("ClearingBusinessDate_t_1940916575");
  elt.add_attribute("ReqID", "SecurityReqID_t_551273450"); // 0
  SecurityDefinition_message_t_0.insert("SecurityReqID_t_551273450");
  elt.add_attribute("RspID", "SecurityResponseID_t_1098572772"); // 0
  SecurityDefinition_message_t_0.insert("SecurityResponseID_t_1098572772");
  elt.add_attribute("RspTyp", "2"); // 0
  SecurityDefinition_message_t_0.insert("2");
  elt.add_attribute("CorpActn", "W"); // 0
  SecurityDefinition_message_t_0.insert("W");
  elt.add_attribute("Ccy", "JPY"); // 0
  SecurityDefinition_message_t_0.insert("JPY");
  elt.add_attribute("Txt", "Text_t_530261454"); // 0
  SecurityDefinition_message_t_0.insert("Text_t_530261454");
  elt.add_attribute("EncTxtLen", "324508190"); // 0
  SecurityDefinition_message_t_0.insert("324508190");
  elt.add_attribute("EncTxt", "EncodedText_t_1537850480"); // 0
  SecurityDefinition_message_t_0.insert("EncodedText_t_1537850480");
  elt.add_attribute("TxnTm", "TransactTime_t_1489682995"); // 0
  SecurityDefinition_message_t_0.insert("TransactTime_t_1489682995");
  all_values.push_back(SecurityDefinition_message_t_0);
  all_compo_names.insert("SecurityDefinition_message_t");

  { // Hdr
    xml_element Hdr_80{"Hdr"};
    multiset<string> Hdr_80_set;
    Hdr_80.add_attribute("SeqNum", "1216038469"); // 1
    Hdr_80_set.insert("1216038469");
    Hdr_80.add_attribute("SID", "SenderCompID_t_947761963"); // 1
    Hdr_80_set.insert("SenderCompID_t_947761963");
    Hdr_80.add_attribute("TID", "TargetCompID_t_2047128332"); // 1
    Hdr_80_set.insert("TargetCompID_t_2047128332");
    Hdr_80.add_attribute("OBID", "OnBehalfOfCompID_t_199561698"); // 1
    Hdr_80_set.insert("OnBehalfOfCompID_t_199561698");
    Hdr_80.add_attribute("D2ID", "DeliverToCompID_t_812047688"); // 1
    Hdr_80_set.insert("DeliverToCompID_t_812047688");
    Hdr_80.add_attribute("SSub", "SenderSubID_t_407613106"); // 1
    Hdr_80_set.insert("SenderSubID_t_407613106");
    Hdr_80.add_attribute("SLoc", "SenderLocationID_t_822461073"); // 1
    Hdr_80_set.insert("SenderLocationID_t_822461073");
    Hdr_80.add_attribute("TSub", "TargetSubID_t_2067899186"); // 1
    Hdr_80_set.insert("TargetSubID_t_2067899186");
    Hdr_80.add_attribute("TLoc", "TargetLocationID_t_1718999686"); // 1
    Hdr_80_set.insert("TargetLocationID_t_1718999686");
    Hdr_80.add_attribute("OBSub", "OnBehalfOfSubID_t_209692237"); // 1
    Hdr_80_set.insert("OnBehalfOfSubID_t_209692237");
    Hdr_80.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1098415781"); // 1
    Hdr_80_set.insert("OnBehalfOfLocationID_t_1098415781");
    Hdr_80.add_attribute("D2Sub", "DeliverToSubID_t_273966016"); // 1
    Hdr_80_set.insert("DeliverToSubID_t_273966016");
    Hdr_80.add_attribute("D2Loc", "DeliverToLocationID_t_1693923156"); // 1
    Hdr_80_set.insert("DeliverToLocationID_t_1693923156");
    Hdr_80.add_attribute("PosDup", "N"); // 1
    Hdr_80_set.insert("N");
    Hdr_80.add_attribute("PosRsnd", "N"); // 1
    Hdr_80_set.insert("N");
    Hdr_80.add_attribute("Snt", "SendingTime_t_1804384541"); // 1
    Hdr_80_set.insert("SendingTime_t_1804384541");
    Hdr_80.add_attribute("OrigSnt", "OrigSendingTime_t_1546989832"); // 1
    Hdr_80_set.insert("OrigSendingTime_t_1546989832");
    Hdr_80.add_attribute("MsgEncd", "MessageEncoding_t_470132741"); // 1
    Hdr_80_set.insert("MessageEncoding_t_470132741");
    all_values.push_back(Hdr_80_set);
    all_compo_names.insert("Hdr_80_set");

    {
      xml_element Hop_80{"Hop"};
      multiset<string> Hop_80_set;
      Hop_80.add_attribute("ID", "HopCompID_t_1100973895"); // 2
      Hop_80_set.insert("HopCompID_t_1100973895");
      Hop_80.add_attribute("Ref", "283876006"); // 2
      Hop_80_set.insert("283876006");
      Hop_80.add_attribute("Snt", "HopSendingTime_t_263565668"); // 2
      Hop_80_set.insert("HopSendingTime_t_263565668");
      all_values.push_back(Hop_80_set);
      all_compo_names.insert("Hop_80_set");

      Hdr_80.add_element(Hop_80);
    }
    elt.add_element(Hdr_80);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_12{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_12_set;
    ApplSeqCtrl_12.add_attribute("ApplID", "ApplID_t_1652247345"); // 1
    ApplSeqCtrl_12_set.insert("ApplID_t_1652247345");
    ApplSeqCtrl_12.add_attribute("ApplSeqNum", "1382448778"); // 1
    ApplSeqCtrl_12_set.insert("1382448778");
    ApplSeqCtrl_12.add_attribute("ApplLastSeqNum", "830178861"); // 1
    ApplSeqCtrl_12_set.insert("830178861");
    ApplSeqCtrl_12.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_12_set.insert("false");
    all_values.push_back(ApplSeqCtrl_12_set);
    all_compo_names.insert("ApplSeqCtrl_12_set");

    elt.add_element(ApplSeqCtrl_12);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_73{"Instrmt"};
    multiset<string> Instrmt_73_set;
    Instrmt_73.add_attribute("Sym", "Symbol_t_1518568914"); // 1
    Instrmt_73_set.insert("Symbol_t_1518568914");
    Instrmt_73.add_attribute("Sfx", "WI"); // 1
    Instrmt_73_set.insert("WI");
    Instrmt_73.add_attribute("ID", "SecurityID_t_2131302582"); // 1
    Instrmt_73_set.insert("SecurityID_t_2131302582");
    Instrmt_73.add_attribute("Src", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("Prod", "6"); // 1
    Instrmt_73_set.insert("6");
    Instrmt_73.add_attribute("ProdCmplx", "ProductComplex_t_1473501929"); // 1
    Instrmt_73_set.insert("ProductComplex_t_1473501929");
    Instrmt_73.add_attribute("SecGrp", "SecurityGroup_t_911631926"); // 1
    Instrmt_73_set.insert("SecurityGroup_t_911631926");
    Instrmt_73.add_attribute("CFI", "CFICode_t_150544657"); // 1
    Instrmt_73_set.insert("CFICode_t_150544657");
    Instrmt_73.add_attribute("SecTyp", "TNOTE"); // 1
    Instrmt_73_set.insert("TNOTE");
    Instrmt_73.add_attribute("SubTyp", "SecuritySubType_t_1111193624"); // 1
    Instrmt_73_set.insert("SecuritySubType_t_1111193624");
    Instrmt_73.add_attribute("MMY", "962592345"); // 1
    Instrmt_73_set.insert("962592345");
    Instrmt_73.add_attribute("MatDt", "MaturityDate_t_1780759720"); // 1
    Instrmt_73_set.insert("MaturityDate_t_1780759720");
    Instrmt_73.add_attribute("MatTm", "1933654698"); // 1
    Instrmt_73_set.insert("1933654698");
    Instrmt_73.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_883007884"); // 1
    Instrmt_73_set.insert("SettleOnOpenFlag_t_883007884");
    Instrmt_73.add_attribute("AsgnMeth", "1352275758"); // 1
    Instrmt_73_set.insert("1352275758");
    Instrmt_73.add_attribute("Status", "2"); // 1
    Instrmt_73_set.insert("2");
    Instrmt_73.add_attribute("CpnPmt", "CouponPaymentDate_t_1981423665"); // 1
    Instrmt_73_set.insert("CouponPaymentDate_t_1981423665");
    Instrmt_73.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_73_set.insert("MM");
    Instrmt_73.add_attribute("Snrty", "SB"); // 1
    Instrmt_73_set.insert("SB");
    Instrmt_73.add_attribute("NotlPctOut", "15440411.260000"); // 1
    Instrmt_73_set.insert("15440411.260000");
    Instrmt_73.add_attribute("OrigNotlPctOut", "9290214.650000"); // 1
    Instrmt_73_set.insert("9290214.650000");
    Instrmt_73.add_attribute("AttchPnt", "13466873.370000"); // 1
    Instrmt_73_set.insert("13466873.370000");
    Instrmt_73.add_attribute("DetchPnt", "9435473.100000"); // 1
    Instrmt_73_set.insert("9435473.100000");
    Instrmt_73.add_attribute("Issued", "IssueDate_t_1399154206"); // 1
    Instrmt_73_set.insert("IssueDate_t_1399154206");
    Instrmt_73.add_attribute("RepoCollSecTyp", "300177584"); // 1
    Instrmt_73_set.insert("300177584");
    Instrmt_73.add_attribute("RepoTrm", "1227423316"); // 1
    Instrmt_73_set.insert("1227423316");
    Instrmt_73.add_attribute("RepoRt", "16627198.740000"); // 1
    Instrmt_73_set.insert("16627198.740000");
    Instrmt_73.add_attribute("Fctr", "19524249.300000"); // 1
    Instrmt_73_set.insert("19524249.300000");
    Instrmt_73.add_attribute("CrdRtg", "CreditRating_t_462388446"); // 1
    Instrmt_73_set.insert("CreditRating_t_462388446");
    Instrmt_73.add_attribute("Rgstry", "InstrRegistry_t_345415087"); // 1
    Instrmt_73_set.insert("InstrRegistry_t_345415087");
    Instrmt_73.add_attribute("IssuCtry", "1405982409"); // 1
    Instrmt_73_set.insert("1405982409");
    Instrmt_73.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1980957361"); // 1
    Instrmt_73_set.insert("StateOrProvinceOfIssue_t_1980957361");
    Instrmt_73.add_attribute("Lcl", "LocaleOfIssue_t_157830948"); // 1
    Instrmt_73_set.insert("LocaleOfIssue_t_157830948");
    Instrmt_73.add_attribute("Redeem", "RedemptionDate_t_1389801343"); // 1
    Instrmt_73_set.insert("RedemptionDate_t_1389801343");
    Instrmt_73.add_attribute("StrkPx", "16765508.180000"); // 1
    Instrmt_73_set.insert("16765508.180000");
    Instrmt_73.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_73_set.insert("JPY");
    Instrmt_73.add_attribute("StrkMult", "4406990.960000"); // 1
    Instrmt_73_set.insert("4406990.960000");
    Instrmt_73.add_attribute("StrkValu", "16586419.480000"); // 1
    Instrmt_73_set.insert("16586419.480000");
    Instrmt_73.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_73_set.insert("3");
    Instrmt_73.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("StrkPxBndryPrcsn", "4737506.450000"); // 1
    Instrmt_73_set.insert("4737506.450000");
    Instrmt_73.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_73_set.insert("3");
    Instrmt_73.add_attribute("OptAt", "1338063770"); // 1
    Instrmt_73_set.insert("1338063770");
    Instrmt_73.add_attribute("Mult", "13567585.290000"); // 1
    Instrmt_73_set.insert("13567585.290000");
    Instrmt_73.add_attribute("MultTyp", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_73_set.insert("3");
    Instrmt_73.add_attribute("MinPxIncr", "11906985.470000"); // 1
    Instrmt_73_set.insert("11906985.470000");
    Instrmt_73.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_405792546"); // 1
    Instrmt_73_set.insert("MinPriceIncrementAmount_t_405792546");
    Instrmt_73.add_attribute("UOM", "tn"); // 1
    Instrmt_73_set.insert("tn");
    Instrmt_73.add_attribute("UOMQty", "5872560.250000"); // 1
    Instrmt_73_set.insert("5872560.250000");
    Instrmt_73.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_73_set.insert("Bu");
    Instrmt_73.add_attribute("PxUOMQty", "754335.420000"); // 1
    Instrmt_73_set.insert("754335.420000");
    Instrmt_73.add_attribute("SettlMeth", "P"); // 1
    Instrmt_73_set.insert("P");
    Instrmt_73.add_attribute("ExerStyle", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("OptPayAmt", "OptPayoutAmount_t_610743004"); // 1
    Instrmt_73_set.insert("OptPayoutAmount_t_610743004");
    Instrmt_73.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_73_set.insert("PCTPAR");
    Instrmt_73.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_73_set.insert("CDSD");
    Instrmt_73.add_attribute("ListMeth", "0"); // 1
    Instrmt_73_set.insert("0");
    Instrmt_73.add_attribute("CapPx", "4471358.820000"); // 1
    Instrmt_73_set.insert("4471358.820000");
    Instrmt_73.add_attribute("FlrPx", "15865348.180000"); // 1
    Instrmt_73_set.insert("15865348.180000");
    Instrmt_73.add_attribute("PutCall", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("FlexInd", "false"); // 1
    Instrmt_73_set.insert("false");
    Instrmt_73.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_73_set.insert("true");
    Instrmt_73.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_73_set.insert("Mo");
    Instrmt_73.add_attribute("CpnRt", "21130641.210000"); // 1
    Instrmt_73_set.insert("21130641.210000");
    Instrmt_73.add_attribute("Exch", "SecurityExchange_t_1544672138"); // 1
    Instrmt_73_set.insert("SecurityExchange_t_1544672138");
    Instrmt_73.add_attribute("PosLmt", "876371429"); // 1
    Instrmt_73_set.insert("876371429");
    Instrmt_73.add_attribute("NTPosLmt", "1624222421"); // 1
    Instrmt_73_set.insert("1624222421");
    Instrmt_73.add_attribute("Issr", "Issuer_t_1486154728"); // 1
    Instrmt_73_set.insert("Issuer_t_1486154728");
    Instrmt_73.add_attribute("EncIssrLen", "280780502"); // 1
    Instrmt_73_set.insert("280780502");
    Instrmt_73.add_attribute("EncIssr", "EncodedIssuer_t_2097973067"); // 1
    Instrmt_73_set.insert("EncodedIssuer_t_2097973067");
    Instrmt_73.add_attribute("Desc", "SecurityDesc_t_1060913390"); // 1
    Instrmt_73_set.insert("SecurityDesc_t_1060913390");
    Instrmt_73.add_attribute("EncSecDescLen", "1618844272"); // 1
    Instrmt_73_set.insert("1618844272");
    Instrmt_73.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1307247948"); // 1
    Instrmt_73_set.insert("EncodedSecurityDesc_t_1307247948");
    Instrmt_73.add_attribute("Pool", "Pool_t_1987947810"); // 1
    Instrmt_73_set.insert("Pool_t_1987947810");
    Instrmt_73.add_attribute("CSetMo", "805287682"); // 1
    Instrmt_73_set.insert("805287682");
    Instrmt_73.add_attribute("CPPgm", "1"); // 1
    Instrmt_73_set.insert("1");
    Instrmt_73.add_attribute("CPRegT", "CPRegType_t_246256709"); // 1
    Instrmt_73_set.insert("CPRegType_t_246256709");
    Instrmt_73.add_attribute("Dated", "DatedDate_t_1681517536"); // 1
    Instrmt_73_set.insert("DatedDate_t_1681517536");
    Instrmt_73.add_attribute("IntAcrl", "InterestAccrualDate_t_937718872"); // 1
    Instrmt_73_set.insert("InterestAccrualDate_t_937718872");
    all_values.push_back(Instrmt_73_set);
    all_compo_names.insert("Instrmt_73_set");

    {
      xml_element AID_76{"AID"};
      multiset<string> AID_76_set;
      AID_76.add_attribute("AltID", "SecurityAltID_t_1581070720"); // 2
      AID_76_set.insert("SecurityAltID_t_1581070720");
      AID_76.add_attribute("AltIDSrc", "F"); // 2
      AID_76_set.insert("F");
      all_values.push_back(AID_76_set);
      all_compo_names.insert("AID_76_set");

      Instrmt_73.add_element(AID_76);
    }
    {
      xml_element SecXML_76{"SecXML"};
      multiset<string> SecXML_76_set;
      SecXML_76.add_attribute("Schema", "SecurityXMLSchema_t_321038560"); // 2
      SecXML_76_set.insert("SecurityXMLSchema_t_321038560");
      all_values.push_back(SecXML_76_set);
      all_compo_names.insert("SecXML_76_set");

      Instrmt_73.add_element(SecXML_76);
    }
    {
      xml_element Evnt_76{"Evnt"};
      multiset<string> Evnt_76_set;
      Evnt_76.add_attribute("EventTyp", "3"); // 2
      Evnt_76_set.insert("3");
      Evnt_76.add_attribute("Dt", "EventDate_t_2132562205"); // 2
      Evnt_76_set.insert("EventDate_t_2132562205");
      Evnt_76.add_attribute("Tm", "EventTime_t_931781564"); // 2
      Evnt_76_set.insert("EventTime_t_931781564");
      Evnt_76.add_attribute("Px", "1217924.370000"); // 2
      Evnt_76_set.insert("1217924.370000");
      Evnt_76.add_attribute("Txt", "EventText_t_165630966"); // 2
      Evnt_76_set.insert("EventText_t_165630966");
      all_values.push_back(Evnt_76_set);
      all_compo_names.insert("Evnt_76_set");

      Instrmt_73.add_element(Evnt_76);
    }
    {
      xml_element Pty_399{"Pty"};
      multiset<string> Pty_399_set;
      Pty_399.add_attribute("ID", "InstrumentPartyID_t_2004913014"); // 2
      Pty_399_set.insert("InstrumentPartyID_t_2004913014");
      Pty_399.add_attribute("Src", "H"); // 2
      Pty_399_set.insert("H");
      Pty_399.add_attribute("R", "44"); // 2
      Pty_399_set.insert("44");
      all_values.push_back(Pty_399_set);
      all_compo_names.insert("Pty_399_set");

      {
        xml_element Sub_399{"Sub"};
        multiset<string> Sub_399_set;
        Sub_399.add_attribute("ID", "InstrumentPartySubID_t_764034530"); // 3
        Sub_399_set.insert("InstrumentPartySubID_t_764034530");
        Sub_399.add_attribute("Typ", "2"); // 3
        Sub_399_set.insert("2");
        all_values.push_back(Sub_399_set);
        all_compo_names.insert("Sub_399_set");

        Pty_399.add_element(Sub_399);
      }
      Instrmt_73.add_element(Pty_399);
    }
    {
      xml_element CmplxEvnt_73{"CmplxEvnt"};
      multiset<string> CmplxEvnt_73_set;
      CmplxEvnt_73.add_attribute("Typ", "8"); // 2
      CmplxEvnt_73_set.insert("8");
      CmplxEvnt_73.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1199706863"); // 2
      CmplxEvnt_73_set.insert("ComplexOptPayoutAmount_t_1199706863");
      CmplxEvnt_73.add_attribute("Px", "11394756.240000"); // 2
      CmplxEvnt_73_set.insert("11394756.240000");
      CmplxEvnt_73.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_73_set.insert("5");
      CmplxEvnt_73.add_attribute("PxBndryPrcsn", "20760782.930000"); // 2
      CmplxEvnt_73_set.insert("20760782.930000");
      CmplxEvnt_73.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_73_set.insert("2");
      CmplxEvnt_73.add_attribute("Cond", "1"); // 2
      CmplxEvnt_73_set.insert("1");
      all_values.push_back(CmplxEvnt_73_set);
      all_compo_names.insert("CmplxEvnt_73_set");

      {
        xml_element EvntDts_73{"EvntDts"};
        multiset<string> EvntDts_73_set;
        EvntDts_73.add_attribute("StartDt", "ComplexEventStartDate_t_209375147"); // 3
        EvntDts_73_set.insert("ComplexEventStartDate_t_209375147");
        EvntDts_73.add_attribute("EndDt", "ComplexEventEndDate_t_566703817"); // 3
        EvntDts_73_set.insert("ComplexEventEndDate_t_566703817");
        all_values.push_back(EvntDts_73_set);
        all_compo_names.insert("EvntDts_73_set");

        {
          xml_element EvntTms_73{"EvntTms"};
          multiset<string> EvntTms_73_set;
          EvntTms_73.add_attribute("StartTm", "230307612"); // 4
          EvntTms_73_set.insert("230307612");
          EvntTms_73.add_attribute("EndTm", "1828219419"); // 4
          EvntTms_73_set.insert("1828219419");
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
    InstrmtExt_8.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_8_set.insert("2");
    InstrmtExt_8.add_attribute("PctAtRisk", "707717.750000"); // 1
    InstrmtExt_8_set.insert("707717.750000");
    all_values.push_back(InstrmtExt_8_set);
    all_compo_names.insert("InstrmtExt_8_set");

    {
      xml_element Attrb_12{"Attrb"};
      multiset<string> Attrb_12_set;
      Attrb_12.add_attribute("Typ", "24"); // 2
      Attrb_12_set.insert("24");
      Attrb_12.add_attribute("Val", "InstrAttribValue_t_76930965"); // 2
      Attrb_12_set.insert("InstrAttribValue_t_76930965");
      all_values.push_back(Attrb_12_set);
      all_compo_names.insert("Attrb_12_set");

      InstrmtExt_8.add_element(Attrb_12);
    }
    elt.add_element(InstrmtExt_8);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_102{"Undly"};
    multiset<string> Undly_102_set;
    Undly_102.add_attribute("Sym", "UnderlyingSymbol_t_20057342"); // 1
    Undly_102_set.insert("UnderlyingSymbol_t_20057342");
    Undly_102.add_attribute("Sfx", "WI"); // 1
    Undly_102_set.insert("WI");
    Undly_102.add_attribute("ID", "UnderlyingSecurityID_t_1898099204"); // 1
    Undly_102_set.insert("UnderlyingSecurityID_t_1898099204");
    Undly_102.add_attribute("Src", "1"); // 1
    Undly_102_set.insert("1");
    Undly_102.add_attribute("Prod", "13"); // 1
    Undly_102_set.insert("13");
    Undly_102.add_attribute("CFI", "UnderlyingCFICode_t_1918170846"); // 1
    Undly_102_set.insert("UnderlyingCFICode_t_1918170846");
    Undly_102.add_attribute("SecTyp", "REPO"); // 1
    Undly_102_set.insert("REPO");
    Undly_102.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_119986313"); // 1
    Undly_102_set.insert("UnderlyingSecuritySubType_t_119986313");
    Undly_102.add_attribute("MMY", "2039963284"); // 1
    Undly_102_set.insert("2039963284");
    Undly_102.add_attribute("Mat", "UnderlyingMaturityDate_t_1927717944"); // 1
    Undly_102_set.insert("UnderlyingMaturityDate_t_1927717944");
    Undly_102.add_attribute("MatTm", "2124899328"); // 1
    Undly_102_set.insert("2124899328");
    Undly_102.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_461407956"); // 1
    Undly_102_set.insert("UnderlyingCouponPaymentDate_t_461407956");
    Undly_102.add_attribute("RestrctTyp", "MR"); // 1
    Undly_102_set.insert("MR");
    Undly_102.add_attribute("Snrty", "SD"); // 1
    Undly_102_set.insert("SD");
    Undly_102.add_attribute("NotlPctOut", "16353031.070000"); // 1
    Undly_102_set.insert("16353031.070000");
    Undly_102.add_attribute("OrigNotlPctOut", "19659347.320000"); // 1
    Undly_102_set.insert("19659347.320000");
    Undly_102.add_attribute("AttchPnt", "19411570.730000"); // 1
    Undly_102_set.insert("19411570.730000");
    Undly_102.add_attribute("DetchPnt", "6272950.830000"); // 1
    Undly_102_set.insert("6272950.830000");
    Undly_102.add_attribute("Issued", "UnderlyingIssueDate_t_1796657874"); // 1
    Undly_102_set.insert("UnderlyingIssueDate_t_1796657874");
    Undly_102.add_attribute("RepoCollSecTyp", "1869751718"); // 1
    Undly_102_set.insert("1869751718");
    Undly_102.add_attribute("RepoTrm", "1243509481"); // 1
    Undly_102_set.insert("1243509481");
    Undly_102.add_attribute("RepoRt", "9660520.960000"); // 1
    Undly_102_set.insert("9660520.960000");
    Undly_102.add_attribute("Fctr", "20791268.650000"); // 1
    Undly_102_set.insert("20791268.650000");
    Undly_102.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1810213298"); // 1
    Undly_102_set.insert("UnderlyingCreditRating_t_1810213298");
    Undly_102.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1196359708"); // 1
    Undly_102_set.insert("UnderlyingInstrRegistry_t_1196359708");
    Undly_102.add_attribute("Ctry", "1759862637"); // 1
    Undly_102_set.insert("1759862637");
    Undly_102.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1536681416"); // 1
    Undly_102_set.insert("UnderlyingStateOrProvinceOfIssue_t_1536681416");
    Undly_102.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1267131483"); // 1
    Undly_102_set.insert("UnderlyingLocaleOfIssue_t_1267131483");
    Undly_102.add_attribute("Redeem", "UnderlyingRedemptionDate_t_98402443"); // 1
    Undly_102_set.insert("UnderlyingRedemptionDate_t_98402443");
    Undly_102.add_attribute("StrkPx", "16136123.810000"); // 1
    Undly_102_set.insert("16136123.810000");
    Undly_102.add_attribute("StrkCcy", "CHF"); // 1
    Undly_102_set.insert("CHF");
    Undly_102.add_attribute("OptA", "480778570"); // 1
    Undly_102_set.insert("480778570");
    Undly_102.add_attribute("Mult", "13347755.240000"); // 1
    Undly_102_set.insert("13347755.240000");
    Undly_102.add_attribute("MultTyp", "0"); // 1
    Undly_102_set.insert("0");
    Undly_102.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_102_set.insert("3");
    Undly_102.add_attribute("UOM", "MWh"); // 1
    Undly_102_set.insert("MWh");
    Undly_102.add_attribute("UOMQty", "15100715.350000"); // 1
    Undly_102_set.insert("15100715.350000");
    Undly_102.add_attribute("PxUOM", "USD"); // 1
    Undly_102_set.insert("USD");
    Undly_102.add_attribute("PxUOMQty", "9979423.580000"); // 1
    Undly_102_set.insert("9979423.580000");
    Undly_102.add_attribute("TmUnit", "Wk"); // 1
    Undly_102_set.insert("Wk");
    Undly_102.add_attribute("ExerStyle", "1"); // 1
    Undly_102_set.insert("1");
    Undly_102.add_attribute("CpnRt", "14593503.140000"); // 1
    Undly_102_set.insert("14593503.140000");
    Undly_102.add_attribute("Exch", "UnderlyingSecurityExchange_t_675222265"); // 1
    Undly_102_set.insert("UnderlyingSecurityExchange_t_675222265");
    Undly_102.add_attribute("Issr", "UnderlyingIssuer_t_507835523"); // 1
    Undly_102_set.insert("UnderlyingIssuer_t_507835523");
    Undly_102.add_attribute("EncUndIssrLen", "947169773"); // 1
    Undly_102_set.insert("947169773");
    Undly_102.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_493673350"); // 1
    Undly_102_set.insert("EncodedUnderlyingIssuer_t_493673350");
    Undly_102.add_attribute("Desc", "UnderlyingSecurityDesc_t_301508949"); // 1
    Undly_102_set.insert("UnderlyingSecurityDesc_t_301508949");
    Undly_102.add_attribute("EncUndSecDescLen", "1574464857"); // 1
    Undly_102_set.insert("1574464857");
    Undly_102.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_142847576"); // 1
    Undly_102_set.insert("EncodedUnderlyingSecurityDesc_t_142847576");
    Undly_102.add_attribute("CPPgm", "UnderlyingCPProgram_t_23777019"); // 1
    Undly_102_set.insert("UnderlyingCPProgram_t_23777019");
    Undly_102.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_670490690"); // 1
    Undly_102_set.insert("UnderlyingCPRegType_t_670490690");
    Undly_102.add_attribute("AllocPct", "11088996.720000"); // 1
    Undly_102_set.insert("11088996.720000");
    Undly_102.add_attribute("Ccy", "CHF"); // 1
    Undly_102_set.insert("CHF");
    Undly_102.add_attribute("Qty", "1577757.320000"); // 1
    Undly_102_set.insert("1577757.320000");
    Undly_102.add_attribute("SettlTyp", "2"); // 1
    Undly_102_set.insert("2");
    Undly_102.add_attribute("CashAmt", "UnderlyingCashAmount_t_1869901757"); // 1
    Undly_102_set.insert("UnderlyingCashAmount_t_1869901757");
    Undly_102.add_attribute("CashTyp", "FIXED"); // 1
    Undly_102_set.insert("FIXED");
    Undly_102.add_attribute("Px", "18136853.170000"); // 1
    Undly_102_set.insert("18136853.170000");
    Undly_102.add_attribute("DirtPx", "13360304.900000"); // 1
    Undly_102_set.insert("13360304.900000");
    Undly_102.add_attribute("EndPx", "8615835.350000"); // 1
    Undly_102_set.insert("8615835.350000");
    Undly_102.add_attribute("StartVal", "UnderlyingStartValue_t_1932145102"); // 1
    Undly_102_set.insert("UnderlyingStartValue_t_1932145102");
    Undly_102.add_attribute("CurVal", "UnderlyingCurrentValue_t_1816809060"); // 1
    Undly_102_set.insert("UnderlyingCurrentValue_t_1816809060");
    Undly_102.add_attribute("EndVal", "UnderlyingEndValue_t_48875411"); // 1
    Undly_102_set.insert("UnderlyingEndValue_t_48875411");
    Undly_102.add_attribute("AdjQty", "16801296.590000"); // 1
    Undly_102_set.insert("16801296.590000");
    Undly_102.add_attribute("FxRate", "14857923.800000"); // 1
    Undly_102_set.insert("14857923.800000");
    Undly_102.add_attribute("FxRateCalc", "M"); // 1
    Undly_102_set.insert("M");
    Undly_102.add_attribute("CapValu", "UnderlyingCapValue_t_1042717547"); // 1
    Undly_102_set.insert("UnderlyingCapValue_t_1042717547");
    Undly_102.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1274762014"); // 1
    Undly_102_set.insert("UnderlyingSettlMethod_t_1274762014");
    Undly_102.add_attribute("PutCall", "4796844"); // 1
    Undly_102_set.insert("4796844");
    all_values.push_back(Undly_102_set);
    all_compo_names.insert("Undly_102_set");

    {
      xml_element UndAID_102{"UndAID"};
      multiset<string> UndAID_102_set;
      UndAID_102.add_attribute("AltID", "UnderlyingSecurityAltID_t_185539731"); // 2
      UndAID_102_set.insert("UnderlyingSecurityAltID_t_185539731");
      UndAID_102.add_attribute("AltIDSrc", "C"); // 2
      UndAID_102_set.insert("C");
      all_values.push_back(UndAID_102_set);
      all_compo_names.insert("UndAID_102_set");

      Undly_102.add_element(UndAID_102);
    }
    {
      xml_element Stip_158{"Stip"};
      multiset<string> Stip_158_set;
      Stip_158.add_attribute("Typ", "PROTECT"); // 2
      Stip_158_set.insert("PROTECT");
      Stip_158.add_attribute("Val", "UnderlyingStipValue_t_860761996"); // 2
      Stip_158_set.insert("UnderlyingStipValue_t_860761996");
      all_values.push_back(Stip_158_set);
      all_compo_names.insert("Stip_158_set");

      Undly_102.add_element(Stip_158);
    }
    {
      xml_element Pty_400{"Pty"};
      multiset<string> Pty_400_set;
      Pty_400.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1548982851"); // 2
      Pty_400_set.insert("UnderlyingInstrumentPartyID_t_1548982851");
      Pty_400.add_attribute("Src", "D"); // 2
      Pty_400_set.insert("D");
      Pty_400.add_attribute("R", "34"); // 2
      Pty_400_set.insert("34");
      all_values.push_back(Pty_400_set);
      all_compo_names.insert("Pty_400_set");

      {
        xml_element Sub_400{"Sub"};
        multiset<string> Sub_400_set;
        Sub_400.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1850491800"); // 3
        Sub_400_set.insert("UnderlyingInstrumentPartySubID_t_1850491800");
        Sub_400.add_attribute("Typ", "18"); // 3
        Sub_400_set.insert("18");
        all_values.push_back(Sub_400_set);
        all_compo_names.insert("Sub_400_set");

        Pty_400.add_element(Sub_400);
      }
      Undly_102.add_element(Pty_400);
    }
    elt.add_element(Undly_102);
  } // end Undly
  { // Undly
    xml_element Undly_103{"Undly"};
    multiset<string> Undly_103_set;
    Undly_103.add_attribute("Sym", "UnderlyingSymbol_t_1497282922"); // 1
    Undly_103_set.insert("UnderlyingSymbol_t_1497282922");
    Undly_103.add_attribute("Sfx", "WI"); // 1
    Undly_103_set.insert("WI");
    Undly_103.add_attribute("ID", "UnderlyingSecurityID_t_361305184"); // 1
    Undly_103_set.insert("UnderlyingSecurityID_t_361305184");
    Undly_103.add_attribute("Src", "3"); // 1
    Undly_103_set.insert("3");
    Undly_103.add_attribute("Prod", "1"); // 1
    Undly_103_set.insert("1");
    Undly_103.add_attribute("CFI", "UnderlyingCFICode_t_694525525"); // 1
    Undly_103_set.insert("UnderlyingCFICode_t_694525525");
    Undly_103.add_attribute("SecTyp", "TINT"); // 1
    Undly_103_set.insert("TINT");
    Undly_103.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1397488282"); // 1
    Undly_103_set.insert("UnderlyingSecuritySubType_t_1397488282");
    Undly_103.add_attribute("MMY", "416943634"); // 1
    Undly_103_set.insert("416943634");
    Undly_103.add_attribute("Mat", "UnderlyingMaturityDate_t_2041381895"); // 1
    Undly_103_set.insert("UnderlyingMaturityDate_t_2041381895");
    Undly_103.add_attribute("MatTm", "1063689951"); // 1
    Undly_103_set.insert("1063689951");
    Undly_103.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1752974124"); // 1
    Undly_103_set.insert("UnderlyingCouponPaymentDate_t_1752974124");
    Undly_103.add_attribute("RestrctTyp", "MM"); // 1
    Undly_103_set.insert("MM");
    Undly_103.add_attribute("Snrty", "SB"); // 1
    Undly_103_set.insert("SB");
    Undly_103.add_attribute("NotlPctOut", "14222995.360000"); // 1
    Undly_103_set.insert("14222995.360000");
    Undly_103.add_attribute("OrigNotlPctOut", "8043571.940000"); // 1
    Undly_103_set.insert("8043571.940000");
    Undly_103.add_attribute("AttchPnt", "3809974.170000"); // 1
    Undly_103_set.insert("3809974.170000");
    Undly_103.add_attribute("DetchPnt", "7606082.690000"); // 1
    Undly_103_set.insert("7606082.690000");
    Undly_103.add_attribute("Issued", "UnderlyingIssueDate_t_1958695328"); // 1
    Undly_103_set.insert("UnderlyingIssueDate_t_1958695328");
    Undly_103.add_attribute("RepoCollSecTyp", "1423714964"); // 1
    Undly_103_set.insert("1423714964");
    Undly_103.add_attribute("RepoTrm", "2035370283"); // 1
    Undly_103_set.insert("2035370283");
    Undly_103.add_attribute("RepoRt", "19634921.720000"); // 1
    Undly_103_set.insert("19634921.720000");
    Undly_103.add_attribute("Fctr", "16092546.950000"); // 1
    Undly_103_set.insert("16092546.950000");
    Undly_103.add_attribute("CrdRtg", "UnderlyingCreditRating_t_929033962"); // 1
    Undly_103_set.insert("UnderlyingCreditRating_t_929033962");
    Undly_103.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1280155683"); // 1
    Undly_103_set.insert("UnderlyingInstrRegistry_t_1280155683");
    Undly_103.add_attribute("Ctry", "322533043"); // 1
    Undly_103_set.insert("322533043");
    Undly_103.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_330533165"); // 1
    Undly_103_set.insert("UnderlyingStateOrProvinceOfIssue_t_330533165");
    Undly_103.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1543988968"); // 1
    Undly_103_set.insert("UnderlyingLocaleOfIssue_t_1543988968");
    Undly_103.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1676968390"); // 1
    Undly_103_set.insert("UnderlyingRedemptionDate_t_1676968390");
    Undly_103.add_attribute("StrkPx", "335413.170000"); // 1
    Undly_103_set.insert("335413.170000");
    Undly_103.add_attribute("StrkCcy", "USD"); // 1
    Undly_103_set.insert("USD");
    Undly_103.add_attribute("OptA", "1907810137"); // 1
    Undly_103_set.insert("1907810137");
    Undly_103.add_attribute("Mult", "15961086.450000"); // 1
    Undly_103_set.insert("15961086.450000");
    Undly_103.add_attribute("MultTyp", "0"); // 1
    Undly_103_set.insert("0");
    Undly_103.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_103_set.insert("0");
    Undly_103.add_attribute("UOM", "oz_tr"); // 1
    Undly_103_set.insert("oz_tr");
    Undly_103.add_attribute("UOMQty", "21019412.900000"); // 1
    Undly_103_set.insert("21019412.900000");
    Undly_103.add_attribute("PxUOM", "Alw"); // 1
    Undly_103_set.insert("Alw");
    Undly_103.add_attribute("PxUOMQty", "5600941.560000"); // 1
    Undly_103_set.insert("5600941.560000");
    Undly_103.add_attribute("TmUnit", "Yr"); // 1
    Undly_103_set.insert("Yr");
    Undly_103.add_attribute("ExerStyle", "2"); // 1
    Undly_103_set.insert("2");
    Undly_103.add_attribute("CpnRt", "1655846.320000"); // 1
    Undly_103_set.insert("1655846.320000");
    Undly_103.add_attribute("Exch", "UnderlyingSecurityExchange_t_603837671"); // 1
    Undly_103_set.insert("UnderlyingSecurityExchange_t_603837671");
    Undly_103.add_attribute("Issr", "UnderlyingIssuer_t_604577889"); // 1
    Undly_103_set.insert("UnderlyingIssuer_t_604577889");
    Undly_103.add_attribute("EncUndIssrLen", "1587884169"); // 1
    Undly_103_set.insert("1587884169");
    Undly_103.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1408194865"); // 1
    Undly_103_set.insert("EncodedUnderlyingIssuer_t_1408194865");
    Undly_103.add_attribute("Desc", "UnderlyingSecurityDesc_t_985575306"); // 1
    Undly_103_set.insert("UnderlyingSecurityDesc_t_985575306");
    Undly_103.add_attribute("EncUndSecDescLen", "201008790"); // 1
    Undly_103_set.insert("201008790");
    Undly_103.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1219406545"); // 1
    Undly_103_set.insert("EncodedUnderlyingSecurityDesc_t_1219406545");
    Undly_103.add_attribute("CPPgm", "UnderlyingCPProgram_t_261806622"); // 1
    Undly_103_set.insert("UnderlyingCPProgram_t_261806622");
    Undly_103.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_88895425"); // 1
    Undly_103_set.insert("UnderlyingCPRegType_t_88895425");
    Undly_103.add_attribute("AllocPct", "10354150.700000"); // 1
    Undly_103_set.insert("10354150.700000");
    Undly_103.add_attribute("Ccy", "CAN"); // 1
    Undly_103_set.insert("CAN");
    Undly_103.add_attribute("Qty", "1680871.050000"); // 1
    Undly_103_set.insert("1680871.050000");
    Undly_103.add_attribute("SettlTyp", "4"); // 1
    Undly_103_set.insert("4");
    Undly_103.add_attribute("CashAmt", "UnderlyingCashAmount_t_1348462553"); // 1
    Undly_103_set.insert("UnderlyingCashAmount_t_1348462553");
    Undly_103.add_attribute("CashTyp", "DIFF"); // 1
    Undly_103_set.insert("DIFF");
    Undly_103.add_attribute("Px", "17230791.020000"); // 1
    Undly_103_set.insert("17230791.020000");
    Undly_103.add_attribute("DirtPx", "13820038.700000"); // 1
    Undly_103_set.insert("13820038.700000");
    Undly_103.add_attribute("EndPx", "7993958.870000"); // 1
    Undly_103_set.insert("7993958.870000");
    Undly_103.add_attribute("StartVal", "UnderlyingStartValue_t_602363119"); // 1
    Undly_103_set.insert("UnderlyingStartValue_t_602363119");
    Undly_103.add_attribute("CurVal", "UnderlyingCurrentValue_t_1142330359"); // 1
    Undly_103_set.insert("UnderlyingCurrentValue_t_1142330359");
    Undly_103.add_attribute("EndVal", "UnderlyingEndValue_t_248020884"); // 1
    Undly_103_set.insert("UnderlyingEndValue_t_248020884");
    Undly_103.add_attribute("AdjQty", "20878297.300000"); // 1
    Undly_103_set.insert("20878297.300000");
    Undly_103.add_attribute("FxRate", "5848622.570000"); // 1
    Undly_103_set.insert("5848622.570000");
    Undly_103.add_attribute("FxRateCalc", "D"); // 1
    Undly_103_set.insert("D");
    Undly_103.add_attribute("CapValu", "UnderlyingCapValue_t_2042287372"); // 1
    Undly_103_set.insert("UnderlyingCapValue_t_2042287372");
    Undly_103.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1424882437"); // 1
    Undly_103_set.insert("UnderlyingSettlMethod_t_1424882437");
    Undly_103.add_attribute("PutCall", "951265563"); // 1
    Undly_103_set.insert("951265563");
    all_values.push_back(Undly_103_set);
    all_compo_names.insert("Undly_103_set");

    {
      xml_element UndAID_103{"UndAID"};
      multiset<string> UndAID_103_set;
      UndAID_103.add_attribute("AltID", "UnderlyingSecurityAltID_t_1890643261"); // 2
      UndAID_103_set.insert("UnderlyingSecurityAltID_t_1890643261");
      UndAID_103.add_attribute("AltIDSrc", "3"); // 2
      UndAID_103_set.insert("3");
      all_values.push_back(UndAID_103_set);
      all_compo_names.insert("UndAID_103_set");

      Undly_103.add_element(UndAID_103);
    }
    {
      xml_element Stip_159{"Stip"};
      multiset<string> Stip_159_set;
      Stip_159.add_attribute("Typ", "PRICE"); // 2
      Stip_159_set.insert("PRICE");
      Stip_159.add_attribute("Val", "UnderlyingStipValue_t_346997284"); // 2
      Stip_159_set.insert("UnderlyingStipValue_t_346997284");
      all_values.push_back(Stip_159_set);
      all_compo_names.insert("Stip_159_set");

      Undly_103.add_element(Stip_159);
    }
    {
      xml_element Pty_401{"Pty"};
      multiset<string> Pty_401_set;
      Pty_401.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1785686809"); // 2
      Pty_401_set.insert("UnderlyingInstrumentPartyID_t_1785686809");
      Pty_401.add_attribute("Src", "4"); // 2
      Pty_401_set.insert("4");
      Pty_401.add_attribute("R", "57"); // 2
      Pty_401_set.insert("57");
      all_values.push_back(Pty_401_set);
      all_compo_names.insert("Pty_401_set");

      {
        xml_element Sub_401{"Sub"};
        multiset<string> Sub_401_set;
        Sub_401.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_623778467"); // 3
        Sub_401_set.insert("UnderlyingInstrumentPartySubID_t_623778467");
        Sub_401.add_attribute("Typ", "28"); // 3
        Sub_401_set.insert("28");
        all_values.push_back(Sub_401_set);
        all_compo_names.insert("Sub_401_set");

        Pty_401.add_element(Sub_401);
      }
      Undly_103.add_element(Pty_401);
    }
    elt.add_element(Undly_103);
  } // end Undly
  { // Stip
    xml_element Stip_160{"Stip"};
    multiset<string> Stip_160_set;
    Stip_160.add_attribute("Typ", "STRUCT"); // 1
    Stip_160_set.insert("STRUCT");
    Stip_160.add_attribute("Val", "StipulationValue_t_847154932"); // 1
    Stip_160_set.insert("StipulationValue_t_847154932");
    all_values.push_back(Stip_160_set);
    all_compo_names.insert("Stip_160_set");

    elt.add_element(Stip_160);
  } // end Stip
  { // Stip
    xml_element Stip_161{"Stip"};
    multiset<string> Stip_161_set;
    Stip_161.add_attribute("Typ", "PRICEFREQ"); // 1
    Stip_161_set.insert("PRICEFREQ");
    Stip_161.add_attribute("Val", "StipulationValue_t_609162758"); // 1
    Stip_161_set.insert("StipulationValue_t_609162758");
    all_values.push_back(Stip_161_set);
    all_compo_names.insert("Stip_161_set");

    elt.add_element(Stip_161);
  } // end Stip
  { // Stip
    xml_element Stip_162{"Stip"};
    multiset<string> Stip_162_set;
    Stip_162.add_attribute("Typ", "YTM"); // 1
    Stip_162_set.insert("YTM");
    Stip_162.add_attribute("Val", "StipulationValue_t_2030617223"); // 1
    Stip_162_set.insert("StipulationValue_t_2030617223");
    all_values.push_back(Stip_162_set);
    all_compo_names.insert("Stip_162_set");

    elt.add_element(Stip_162);
  } // end Stip
  { // Leg
    xml_element Leg_90{"Leg"};
    multiset<string> Leg_90_set;
    Leg_90.add_attribute("Sym", "LegSymbol_t_1066063224"); // 1
    Leg_90_set.insert("LegSymbol_t_1066063224");
    Leg_90.add_attribute("Sfx", "CD"); // 1
    Leg_90_set.insert("CD");
    Leg_90.add_attribute("ID", "LegSecurityID_t_230868925"); // 1
    Leg_90_set.insert("LegSecurityID_t_230868925");
    Leg_90.add_attribute("Src", "M"); // 1
    Leg_90_set.insert("M");
    Leg_90.add_attribute("Prod", "9"); // 1
    Leg_90_set.insert("9");
    Leg_90.add_attribute("CFI", "LegCFICode_t_833232044"); // 1
    Leg_90_set.insert("LegCFICode_t_833232044");
    Leg_90.add_attribute("SecTyp", "CMBS"); // 1
    Leg_90_set.insert("CMBS");
    Leg_90.add_attribute("SecSubTyp", "LegSecuritySubType_t_495142772"); // 1
    Leg_90_set.insert("LegSecuritySubType_t_495142772");
    Leg_90.add_attribute("MMY", "773578126"); // 1
    Leg_90_set.insert("773578126");
    Leg_90.add_attribute("Mat", "LegMaturityDate_t_2027776063"); // 1
    Leg_90_set.insert("LegMaturityDate_t_2027776063");
    Leg_90.add_attribute("MatTm", "886314179"); // 1
    Leg_90_set.insert("886314179");
    Leg_90.add_attribute("CpnPmt", "LegCouponPaymentDate_t_668381850"); // 1
    Leg_90_set.insert("LegCouponPaymentDate_t_668381850");
    Leg_90.add_attribute("Issued", "LegIssueDate_t_1305174852"); // 1
    Leg_90_set.insert("LegIssueDate_t_1305174852");
    Leg_90.add_attribute("RepoCollSecTyp", "1837579742"); // 1
    Leg_90_set.insert("1837579742");
    Leg_90.add_attribute("RepoTrm", "411541463"); // 1
    Leg_90_set.insert("411541463");
    Leg_90.add_attribute("RepoRt", "3388001.250000"); // 1
    Leg_90_set.insert("3388001.250000");
    Leg_90.add_attribute("Fctr", "8069462.900000"); // 1
    Leg_90_set.insert("8069462.900000");
    Leg_90.add_attribute("CrdRtg", "LegCreditRating_t_758538748"); // 1
    Leg_90_set.insert("LegCreditRating_t_758538748");
    Leg_90.add_attribute("Rgstry", "LegInstrRegistry_t_2124486934"); // 1
    Leg_90_set.insert("LegInstrRegistry_t_2124486934");
    Leg_90.add_attribute("Ctry", "1364197007"); // 1
    Leg_90_set.insert("1364197007");
    Leg_90.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_366247250"); // 1
    Leg_90_set.insert("LegStateOrProvinceOfIssue_t_366247250");
    Leg_90.add_attribute("Lcl", "LegLocaleOfIssue_t_600781754"); // 1
    Leg_90_set.insert("LegLocaleOfIssue_t_600781754");
    Leg_90.add_attribute("Redeem", "LegRedemptionDate_t_2122456514"); // 1
    Leg_90_set.insert("LegRedemptionDate_t_2122456514");
    Leg_90.add_attribute("Strk", "11933622.970000"); // 1
    Leg_90_set.insert("11933622.970000");
    Leg_90.add_attribute("StrkCcy", "JPY"); // 1
    Leg_90_set.insert("JPY");
    Leg_90.add_attribute("OptA", "908408767"); // 1
    Leg_90_set.insert("908408767");
    Leg_90.add_attribute("Cmult", "20955296.020000"); // 1
    Leg_90_set.insert("20955296.020000");
    Leg_90.add_attribute("MultTyp", "0"); // 1
    Leg_90_set.insert("0");
    Leg_90.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_90_set.insert("2");
    Leg_90.add_attribute("UOM", "lbs"); // 1
    Leg_90_set.insert("lbs");
    Leg_90.add_attribute("UOMQty", "16057916.940000"); // 1
    Leg_90_set.insert("16057916.940000");
    Leg_90.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_90_set.insert("MMBtu");
    Leg_90.add_attribute("PxUOMQty", "8341883.500000"); // 1
    Leg_90_set.insert("8341883.500000");
    Leg_90.add_attribute("TmUnit", "Yr"); // 1
    Leg_90_set.insert("Yr");
    Leg_90.add_attribute("ExerStyle", "2"); // 1
    Leg_90_set.insert("2");
    Leg_90.add_attribute("CpnRt", "16674203.950000"); // 1
    Leg_90_set.insert("16674203.950000");
    Leg_90.add_attribute("Exch", "LegSecurityExchange_t_1201805300"); // 1
    Leg_90_set.insert("LegSecurityExchange_t_1201805300");
    Leg_90.add_attribute("Issr", "LegIssuer_t_981533002"); // 1
    Leg_90_set.insert("LegIssuer_t_981533002");
    Leg_90.add_attribute("EncLegIssrLen", "293514873"); // 1
    Leg_90_set.insert("293514873");
    Leg_90.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1082097715"); // 1
    Leg_90_set.insert("EncodedLegIssuer_t_1082097715");
    Leg_90.add_attribute("Desc", "LegSecurityDesc_t_1867847181"); // 1
    Leg_90_set.insert("LegSecurityDesc_t_1867847181");
    Leg_90.add_attribute("EncLegSecDescLen", "961896724"); // 1
    Leg_90_set.insert("961896724");
    Leg_90.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_239788920"); // 1
    Leg_90_set.insert("EncodedLegSecurityDesc_t_239788920");
    Leg_90.add_attribute("RatioQty", "15579432.750000"); // 1
    Leg_90_set.insert("15579432.750000");
    Leg_90.add_attribute("Side", "C"); // 1
    Leg_90_set.insert("C");
    Leg_90.add_attribute("Ccy", "JPY"); // 1
    Leg_90_set.insert("JPY");
    Leg_90.add_attribute("Pool", "LegPool_t_2131976935"); // 1
    Leg_90_set.insert("LegPool_t_2131976935");
    Leg_90.add_attribute("Dated", "LegDatedDate_t_555592331"); // 1
    Leg_90_set.insert("LegDatedDate_t_555592331");
    Leg_90.add_attribute("CSetMo", "1581602925"); // 1
    Leg_90_set.insert("1581602925");
    Leg_90.add_attribute("IntAcrl", "LegInterestAccrualDate_t_350740537"); // 1
    Leg_90_set.insert("LegInterestAccrualDate_t_350740537");
    Leg_90.add_attribute("PutCall", "1156374085"); // 1
    Leg_90_set.insert("1156374085");
    Leg_90.add_attribute("LegOptionRatio", "15565757.920000"); // 1
    Leg_90_set.insert("15565757.920000");
    Leg_90.add_attribute("Px", "15441028.350000"); // 1
    Leg_90_set.insert("15441028.350000");
    all_values.push_back(Leg_90_set);
    all_compo_names.insert("Leg_90_set");

    {
      xml_element LegAID_85{"LegAID"};
      multiset<string> LegAID_85_set;
      LegAID_85.add_attribute("SecAltID", "LegSecurityAltID_t_495257281"); // 2
      LegAID_85_set.insert("LegSecurityAltID_t_495257281");
      LegAID_85.add_attribute("SecAltIDSrc", "9"); // 2
      LegAID_85_set.insert("9");
      all_values.push_back(LegAID_85_set);
      all_compo_names.insert("LegAID_85_set");

      Leg_90.add_element(LegAID_85);
    }
    elt.add_element(Leg_90);
  } // end Leg
  { // Leg
    xml_element Leg_91{"Leg"};
    multiset<string> Leg_91_set;
    Leg_91.add_attribute("Sym", "LegSymbol_t_305027954"); // 1
    Leg_91_set.insert("LegSymbol_t_305027954");
    Leg_91.add_attribute("Sfx", "WI"); // 1
    Leg_91_set.insert("WI");
    Leg_91.add_attribute("ID", "LegSecurityID_t_770948412"); // 1
    Leg_91_set.insert("LegSecurityID_t_770948412");
    Leg_91.add_attribute("Src", "9"); // 1
    Leg_91_set.insert("9");
    Leg_91.add_attribute("Prod", "2"); // 1
    Leg_91_set.insert("2");
    Leg_91.add_attribute("CFI", "LegCFICode_t_229256459"); // 1
    Leg_91_set.insert("LegCFICode_t_229256459");
    Leg_91.add_attribute("SecTyp", "OPT"); // 1
    Leg_91_set.insert("OPT");
    Leg_91.add_attribute("SecSubTyp", "LegSecuritySubType_t_1880811010"); // 1
    Leg_91_set.insert("LegSecuritySubType_t_1880811010");
    Leg_91.add_attribute("MMY", "2135631600"); // 1
    Leg_91_set.insert("2135631600");
    Leg_91.add_attribute("Mat", "LegMaturityDate_t_1822228868"); // 1
    Leg_91_set.insert("LegMaturityDate_t_1822228868");
    Leg_91.add_attribute("MatTm", "1400747757"); // 1
    Leg_91_set.insert("1400747757");
    Leg_91.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1189953252"); // 1
    Leg_91_set.insert("LegCouponPaymentDate_t_1189953252");
    Leg_91.add_attribute("Issued", "LegIssueDate_t_656278222"); // 1
    Leg_91_set.insert("LegIssueDate_t_656278222");
    Leg_91.add_attribute("RepoCollSecTyp", "1694262631"); // 1
    Leg_91_set.insert("1694262631");
    Leg_91.add_attribute("RepoTrm", "124567320"); // 1
    Leg_91_set.insert("124567320");
    Leg_91.add_attribute("RepoRt", "3766417.550000"); // 1
    Leg_91_set.insert("3766417.550000");
    Leg_91.add_attribute("Fctr", "5086757.070000"); // 1
    Leg_91_set.insert("5086757.070000");
    Leg_91.add_attribute("CrdRtg", "LegCreditRating_t_364356240"); // 1
    Leg_91_set.insert("LegCreditRating_t_364356240");
    Leg_91.add_attribute("Rgstry", "LegInstrRegistry_t_1934585031"); // 1
    Leg_91_set.insert("LegInstrRegistry_t_1934585031");
    Leg_91.add_attribute("Ctry", "1882113894"); // 1
    Leg_91_set.insert("1882113894");
    Leg_91.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_942945285"); // 1
    Leg_91_set.insert("LegStateOrProvinceOfIssue_t_942945285");
    Leg_91.add_attribute("Lcl", "LegLocaleOfIssue_t_4507301"); // 1
    Leg_91_set.insert("LegLocaleOfIssue_t_4507301");
    Leg_91.add_attribute("Redeem", "LegRedemptionDate_t_1866607182"); // 1
    Leg_91_set.insert("LegRedemptionDate_t_1866607182");
    Leg_91.add_attribute("Strk", "14985376.160000"); // 1
    Leg_91_set.insert("14985376.160000");
    Leg_91.add_attribute("StrkCcy", "CAN"); // 1
    Leg_91_set.insert("CAN");
    Leg_91.add_attribute("OptA", "507428054"); // 1
    Leg_91_set.insert("507428054");
    Leg_91.add_attribute("Cmult", "9952023.700000"); // 1
    Leg_91_set.insert("9952023.700000");
    Leg_91.add_attribute("MultTyp", "2"); // 1
    Leg_91_set.insert("2");
    Leg_91.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_91_set.insert("0");
    Leg_91.add_attribute("UOM", "Alw"); // 1
    Leg_91_set.insert("Alw");
    Leg_91.add_attribute("UOMQty", "19189948.600000"); // 1
    Leg_91_set.insert("19189948.600000");
    Leg_91.add_attribute("PxUOM", "MWh"); // 1
    Leg_91_set.insert("MWh");
    Leg_91.add_attribute("PxUOMQty", "19973707.250000"); // 1
    Leg_91_set.insert("19973707.250000");
    Leg_91.add_attribute("TmUnit", "S"); // 1
    Leg_91_set.insert("S");
    Leg_91.add_attribute("ExerStyle", "1"); // 1
    Leg_91_set.insert("1");
    Leg_91.add_attribute("CpnRt", "791435.360000"); // 1
    Leg_91_set.insert("791435.360000");
    Leg_91.add_attribute("Exch", "LegSecurityExchange_t_56436499"); // 1
    Leg_91_set.insert("LegSecurityExchange_t_56436499");
    Leg_91.add_attribute("Issr", "LegIssuer_t_78454944"); // 1
    Leg_91_set.insert("LegIssuer_t_78454944");
    Leg_91.add_attribute("EncLegIssrLen", "67291489"); // 1
    Leg_91_set.insert("67291489");
    Leg_91.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1878665367"); // 1
    Leg_91_set.insert("EncodedLegIssuer_t_1878665367");
    Leg_91.add_attribute("Desc", "LegSecurityDesc_t_1479202702"); // 1
    Leg_91_set.insert("LegSecurityDesc_t_1479202702");
    Leg_91.add_attribute("EncLegSecDescLen", "1257244741"); // 1
    Leg_91_set.insert("1257244741");
    Leg_91.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_387459942"); // 1
    Leg_91_set.insert("EncodedLegSecurityDesc_t_387459942");
    Leg_91.add_attribute("RatioQty", "10259816.850000"); // 1
    Leg_91_set.insert("10259816.850000");
    Leg_91.add_attribute("Side", "E"); // 1
    Leg_91_set.insert("E");
    Leg_91.add_attribute("Ccy", "USD"); // 1
    Leg_91_set.insert("USD");
    Leg_91.add_attribute("Pool", "LegPool_t_1746168301"); // 1
    Leg_91_set.insert("LegPool_t_1746168301");
    Leg_91.add_attribute("Dated", "LegDatedDate_t_551203080"); // 1
    Leg_91_set.insert("LegDatedDate_t_551203080");
    Leg_91.add_attribute("CSetMo", "1269287638"); // 1
    Leg_91_set.insert("1269287638");
    Leg_91.add_attribute("IntAcrl", "LegInterestAccrualDate_t_541629938"); // 1
    Leg_91_set.insert("LegInterestAccrualDate_t_541629938");
    Leg_91.add_attribute("PutCall", "555710381"); // 1
    Leg_91_set.insert("555710381");
    Leg_91.add_attribute("LegOptionRatio", "9884111.720000"); // 1
    Leg_91_set.insert("9884111.720000");
    Leg_91.add_attribute("Px", "20401675.550000"); // 1
    Leg_91_set.insert("20401675.550000");
    all_values.push_back(Leg_91_set);
    all_compo_names.insert("Leg_91_set");

    {
      xml_element LegAID_86{"LegAID"};
      multiset<string> LegAID_86_set;
      LegAID_86.add_attribute("SecAltID", "LegSecurityAltID_t_2141820608"); // 2
      LegAID_86_set.insert("LegSecurityAltID_t_2141820608");
      LegAID_86.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_86_set.insert("5");
      all_values.push_back(LegAID_86_set);
      all_compo_names.insert("LegAID_86_set");

      Leg_91.add_element(LegAID_86);
    }
    elt.add_element(Leg_91);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_29{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_29_set;
    SprdBnchmkCurve_29.add_attribute("Spread", "4001119.610000"); // 1
    SprdBnchmkCurve_29_set.insert("4001119.610000");
    SprdBnchmkCurve_29.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_29_set.insert("GBP");
    SprdBnchmkCurve_29.add_attribute("Name", "Pfandbriefe"); // 1
    SprdBnchmkCurve_29_set.insert("Pfandbriefe");
    SprdBnchmkCurve_29.add_attribute("Point", "BenchmarkCurvePoint_t_68477995"); // 1
    SprdBnchmkCurve_29_set.insert("BenchmarkCurvePoint_t_68477995");
    SprdBnchmkCurve_29.add_attribute("Px", "2962697.150000"); // 1
    SprdBnchmkCurve_29_set.insert("2962697.150000");
    SprdBnchmkCurve_29.add_attribute("PxTyp", "5"); // 1
    SprdBnchmkCurve_29_set.insert("5");
    SprdBnchmkCurve_29.add_attribute("SecID", "BenchmarkSecurityID_t_2065848721"); // 1
    SprdBnchmkCurve_29_set.insert("BenchmarkSecurityID_t_2065848721");
    SprdBnchmkCurve_29.add_attribute("SecIDSrc", "E"); // 1
    SprdBnchmkCurve_29_set.insert("E");
    all_values.push_back(SprdBnchmkCurve_29_set);
    all_compo_names.insert("SprdBnchmkCurve_29_set");

    elt.add_element(SprdBnchmkCurve_29);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_24{"Yield"};
    multiset<string> Yield_24_set;
    Yield_24.add_attribute("Typ", "ATISSUE"); // 1
    Yield_24_set.insert("ATISSUE");
    Yield_24.add_attribute("Yld", "21449922.570000"); // 1
    Yield_24_set.insert("21449922.570000");
    Yield_24.add_attribute("CalcDt", "YieldCalcDate_t_1220787722"); // 1
    Yield_24_set.insert("YieldCalcDate_t_1220787722");
    Yield_24.add_attribute("RedDt", "YieldRedemptionDate_t_1124884744"); // 1
    Yield_24_set.insert("YieldRedemptionDate_t_1124884744");
    Yield_24.add_attribute("RedPx", "648000.980000"); // 1
    Yield_24_set.insert("648000.980000");
    Yield_24.add_attribute("RedPxTyp", "3"); // 1
    Yield_24_set.insert("3");
    all_values.push_back(Yield_24_set);
    all_compo_names.insert("Yield_24_set");

    elt.add_element(Yield_24);
  } // end Yield
  { // MktSegGrp
    xml_element MktSegGrp_2{"MktSegGrp"};
    multiset<string> MktSegGrp_2_set;
    MktSegGrp_2.add_attribute("MktID", "MarketID_t_1322044840"); // 1
    MktSegGrp_2_set.insert("MarketID_t_1322044840");
    MktSegGrp_2.add_attribute("MktSegID", "MarketSegmentID_t_1339429384"); // 1
    MktSegGrp_2_set.insert("MarketSegmentID_t_1339429384");
    all_values.push_back(MktSegGrp_2_set);
    all_compo_names.insert("MktSegGrp_2_set");

    {
      xml_element SecTrdgRules_2{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_4{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_4_set;
        BaseTrdgRules_4.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_4_set.insert("0");
        BaseTrdgRules_4.add_attribute("MinTrdVol", "5563732.530000"); // 3
        BaseTrdgRules_4_set.insert("5563732.530000");
        BaseTrdgRules_4.add_attribute("MaxTrdVol", "21035310.810000"); // 3
        BaseTrdgRules_4_set.insert("21035310.810000");
        BaseTrdgRules_4.add_attribute("MxPxVar", "8697592.270000"); // 3
        BaseTrdgRules_4_set.insert("8697592.270000");
        BaseTrdgRules_4.add_attribute("ImpldMktInd", "3"); // 3
        BaseTrdgRules_4_set.insert("3");
        BaseTrdgRules_4.add_attribute("TrdCcy", "USD"); // 3
        BaseTrdgRules_4_set.insert("USD");
        BaseTrdgRules_4.add_attribute("RndLot", "6966878.450000"); // 3
        BaseTrdgRules_4_set.insert("6966878.450000");
        BaseTrdgRules_4.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_4_set.insert("1");
        BaseTrdgRules_4.add_attribute("MlegPxMeth", "0"); // 3
        BaseTrdgRules_4_set.insert("0");
        BaseTrdgRules_4.add_attribute("PxTyp", "11"); // 3
        BaseTrdgRules_4_set.insert("11");
        all_values.push_back(BaseTrdgRules_4_set);
        all_compo_names.insert("BaseTrdgRules_4_set");

        {
          xml_element TickRules_4{"TickRules"};
          multiset<string> TickRules_4_set;
          TickRules_4.add_attribute("StartTickPxRng", "10572978.550000"); // 4
          TickRules_4_set.insert("10572978.550000");
          TickRules_4.add_attribute("EndTickPxRng", "20382496.340000"); // 4
          TickRules_4_set.insert("20382496.340000");
          TickRules_4.add_attribute("TickIncr", "9894837.130000"); // 4
          TickRules_4_set.insert("9894837.130000");
          TickRules_4.add_attribute("TickRuleTyp", "1"); // 4
          TickRules_4_set.insert("1");
          all_values.push_back(TickRules_4_set);
          all_compo_names.insert("TickRules_4_set");

          BaseTrdgRules_4.add_element(TickRules_4);
        }
        {
          xml_element LotTypeRules_4{"LotTypeRules"};
          multiset<string> LotTypeRules_4_set;
          LotTypeRules_4.add_attribute("LotTyp", "2"); // 4
          LotTypeRules_4_set.insert("2");
          LotTypeRules_4.add_attribute("MinLotSz", "2447973.610000"); // 4
          LotTypeRules_4_set.insert("2447973.610000");
          all_values.push_back(LotTypeRules_4_set);
          all_compo_names.insert("LotTypeRules_4_set");

          BaseTrdgRules_4.add_element(LotTypeRules_4);
        }
        {
          xml_element PxLmts_4{"PxLmts"};
          multiset<string> PxLmts_4_set;
          PxLmts_4.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_4_set.insert("1");
          PxLmts_4.add_attribute("LowLmtPx", "7117942.040000"); // 4
          PxLmts_4_set.insert("7117942.040000");
          PxLmts_4.add_attribute("HiLmtPx", "9460995.790000"); // 4
          PxLmts_4_set.insert("9460995.790000");
          PxLmts_4.add_attribute("TrdgRefPx", "20336802.540000"); // 4
          PxLmts_4_set.insert("20336802.540000");
          all_values.push_back(PxLmts_4_set);
          all_compo_names.insert("PxLmts_4_set");

          BaseTrdgRules_4.add_element(PxLmts_4);
        }
        SecTrdgRules_2.add_element(BaseTrdgRules_4);
      }
      {
        xml_element TrdgSesRulesGrp_2{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_2_set;
        TrdgSesRulesGrp_2.add_attribute("SesID", "4"); // 3
        TrdgSesRulesGrp_2_set.insert("4");
        TrdgSesRulesGrp_2.add_attribute("SesSub", "2"); // 3
        TrdgSesRulesGrp_2_set.insert("2");
        all_values.push_back(TrdgSesRulesGrp_2_set);
        all_compo_names.insert("TrdgSesRulesGrp_2_set");

        {
          xml_element TrdgSesRules_2{"TrdgSesRules"};
          {
            xml_element OrdTypRules_8{"OrdTypRules"};
            multiset<string> OrdTypRules_8_set;
            OrdTypRules_8.add_attribute("OrdTyp", "9"); // 5
            OrdTypRules_8_set.insert("9");
            all_values.push_back(OrdTypRules_8_set);
            all_compo_names.insert("OrdTypRules_8_set");

            TrdgSesRules_2.add_element(OrdTypRules_8);
          }
          {
            xml_element TmInForceRules_4{"TmInForceRules"};
            multiset<string> TmInForceRules_4_set;
            TmInForceRules_4.add_attribute("TmInForce", "2"); // 5
            TmInForceRules_4_set.insert("2");
            all_values.push_back(TmInForceRules_4_set);
            all_compo_names.insert("TmInForceRules_4_set");

            TrdgSesRules_2.add_element(TmInForceRules_4);
          }
          {
            xml_element ExecInstRules_7{"ExecInstRules"};
            multiset<string> ExecInstRules_7_set;
            ExecInstRules_7.add_attribute("ExecInstValu", "4"); // 5
            ExecInstRules_7_set.insert("4");
            all_values.push_back(ExecInstRules_7_set);
            all_compo_names.insert("ExecInstRules_7_set");

            TrdgSesRules_2.add_element(ExecInstRules_7);
          }
          {
            xml_element MtchRules_2{"MtchRules"};
            multiset<string> MtchRules_2_set;
            MtchRules_2.add_attribute("MtchAlgo", "MatchAlgorithm_t_2095988962"); // 5
            MtchRules_2_set.insert("MatchAlgorithm_t_2095988962");
            MtchRules_2.add_attribute("MtchTyp", "5"); // 5
            MtchRules_2_set.insert("5");
            all_values.push_back(MtchRules_2_set);
            all_compo_names.insert("MtchRules_2_set");

            TrdgSesRules_2.add_element(MtchRules_2);
          }
          {
            xml_element MDFeedTyps_2{"MDFeedTyps"};
            multiset<string> MDFeedTyps_2_set;
            MDFeedTyps_2.add_attribute("MDFeedTyp", "MDFeedType_t_1426534274"); // 5
            MDFeedTyps_2_set.insert("MDFeedType_t_1426534274");
            MDFeedTyps_2.add_attribute("MktDepth", "1270550154"); // 5
            MDFeedTyps_2_set.insert("1270550154");
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
        Attrb_13.add_attribute("Typ", "19"); // 3
        Attrb_13_set.insert("19");
        Attrb_13.add_attribute("Val", "NestedInstrAttribValue_t_1826923408"); // 3
        Attrb_13_set.insert("NestedInstrAttribValue_t_1826923408");
        all_values.push_back(Attrb_13_set);
        all_compo_names.insert("Attrb_13_set");

        SecTrdgRules_2.add_element(Attrb_13);
      }
      MktSegGrp_2.add_element(SecTrdgRules_2);
    }
    {
      xml_element StrkRules_2{"StrkRules"};
      multiset<string> StrkRules_2_set;
      StrkRules_2.add_attribute("StrkRule", "StrikeRuleID_t_1049412113"); // 2
      StrkRules_2_set.insert("StrikeRuleID_t_1049412113");
      StrkRules_2.add_attribute("StartStrkPxRng", "16313953.370000"); // 2
      StrkRules_2_set.insert("16313953.370000");
      StrkRules_2.add_attribute("EndStrkPxRng", "19819813.150000"); // 2
      StrkRules_2_set.insert("19819813.150000");
      StrkRules_2.add_attribute("StrkIncr", "15566626.270000"); // 2
      StrkRules_2_set.insert("15566626.270000");
      StrkRules_2.add_attribute("StrkExrStyle", "0"); // 2
      StrkRules_2_set.insert("0");
      all_values.push_back(StrkRules_2_set);
      all_compo_names.insert("StrkRules_2_set");

      {
        xml_element MatRules_2{"MatRules"};
        multiset<string> MatRules_2_set;
        MatRules_2.add_attribute("MatRuleID", "MaturityRuleID_t_531185512"); // 3
        MatRules_2_set.insert("MaturityRuleID_t_531185512");
        MatRules_2.add_attribute("MMYFmt", "1"); // 3
        MatRules_2_set.insert("1");
        MatRules_2.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_2_set.insert("2");
        MatRules_2.add_attribute("StartMMY", "1120557265"); // 3
        MatRules_2_set.insert("1120557265");
        MatRules_2.add_attribute("EndMMY", "1529437730"); // 3
        MatRules_2_set.insert("1529437730");
        MatRules_2.add_attribute("MMYIncr", "346215284"); // 3
        MatRules_2_set.insert("346215284");
        all_values.push_back(MatRules_2_set);
        all_compo_names.insert("MatRules_2_set");

        StrkRules_2.add_element(MatRules_2);
      }
      MktSegGrp_2.add_element(StrkRules_2);
    }
    elt.add_element(MktSegGrp_2);
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
