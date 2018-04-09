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
  elt.add_attribute("RptID", "1023235589"); // 0
  SecurityDefinition_message_t_0.insert("1023235589");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1826305005"); // 0
  SecurityDefinition_message_t_0.insert("ClearingBusinessDate_t_1826305005");
  elt.add_attribute("ReqID", "SecurityReqID_t_1690755505"); // 0
  SecurityDefinition_message_t_0.insert("SecurityReqID_t_1690755505");
  elt.add_attribute("RspID", "SecurityResponseID_t_111182426"); // 0
  SecurityDefinition_message_t_0.insert("SecurityResponseID_t_111182426");
  elt.add_attribute("RspTyp", "2"); // 0
  SecurityDefinition_message_t_0.insert("2");
  elt.add_attribute("CorpActn", "T"); // 0
  SecurityDefinition_message_t_0.insert("T");
  elt.add_attribute("Ccy", "GBP"); // 0
  SecurityDefinition_message_t_0.insert("GBP");
  elt.add_attribute("Txt", "Text_t_412545525"); // 0
  SecurityDefinition_message_t_0.insert("Text_t_412545525");
  elt.add_attribute("EncTxtLen", "1384959305"); // 0
  SecurityDefinition_message_t_0.insert("1384959305");
  elt.add_attribute("EncTxt", "EncodedText_t_286482362"); // 0
  SecurityDefinition_message_t_0.insert("EncodedText_t_286482362");
  elt.add_attribute("TxnTm", "TransactTime_t_401603901"); // 0
  SecurityDefinition_message_t_0.insert("TransactTime_t_401603901");
  all_values.push_back(SecurityDefinition_message_t_0);
  all_compo_names.insert("SecurityDefinition_message_t");

  { // Hdr
    xml_element Hdr_80{"Hdr"};
    multiset<string> Hdr_80_set;
    Hdr_80.add_attribute("SeqNum", "1299897529"); // 1
    Hdr_80_set.insert("1299897529");
    Hdr_80.add_attribute("SID", "SenderCompID_t_1126262539"); // 1
    Hdr_80_set.insert("SenderCompID_t_1126262539");
    Hdr_80.add_attribute("TID", "TargetCompID_t_834209907"); // 1
    Hdr_80_set.insert("TargetCompID_t_834209907");
    Hdr_80.add_attribute("OBID", "OnBehalfOfCompID_t_35793111"); // 1
    Hdr_80_set.insert("OnBehalfOfCompID_t_35793111");
    Hdr_80.add_attribute("D2ID", "DeliverToCompID_t_764324077"); // 1
    Hdr_80_set.insert("DeliverToCompID_t_764324077");
    Hdr_80.add_attribute("SSub", "SenderSubID_t_305028426"); // 1
    Hdr_80_set.insert("SenderSubID_t_305028426");
    Hdr_80.add_attribute("SLoc", "SenderLocationID_t_53852364"); // 1
    Hdr_80_set.insert("SenderLocationID_t_53852364");
    Hdr_80.add_attribute("TSub", "TargetSubID_t_1916023848"); // 1
    Hdr_80_set.insert("TargetSubID_t_1916023848");
    Hdr_80.add_attribute("TLoc", "TargetLocationID_t_1099273681"); // 1
    Hdr_80_set.insert("TargetLocationID_t_1099273681");
    Hdr_80.add_attribute("OBSub", "OnBehalfOfSubID_t_472408521"); // 1
    Hdr_80_set.insert("OnBehalfOfSubID_t_472408521");
    Hdr_80.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1526515300"); // 1
    Hdr_80_set.insert("OnBehalfOfLocationID_t_1526515300");
    Hdr_80.add_attribute("D2Sub", "DeliverToSubID_t_299245343"); // 1
    Hdr_80_set.insert("DeliverToSubID_t_299245343");
    Hdr_80.add_attribute("D2Loc", "DeliverToLocationID_t_784336360"); // 1
    Hdr_80_set.insert("DeliverToLocationID_t_784336360");
    Hdr_80.add_attribute("PosDup", "Y"); // 1
    Hdr_80_set.insert("Y");
    Hdr_80.add_attribute("PosRsnd", "Y"); // 1
    Hdr_80_set.insert("Y");
    Hdr_80.add_attribute("Snt", "SendingTime_t_190010660"); // 1
    Hdr_80_set.insert("SendingTime_t_190010660");
    Hdr_80.add_attribute("OrigSnt", "OrigSendingTime_t_1764932291"); // 1
    Hdr_80_set.insert("OrigSendingTime_t_1764932291");
    Hdr_80.add_attribute("MsgEncd", "MessageEncoding_t_879903956"); // 1
    Hdr_80_set.insert("MessageEncoding_t_879903956");
    all_values.push_back(Hdr_80_set);
    all_compo_names.insert("Hdr_80_set");

    {
      xml_element Hop_80{"Hop"};
      multiset<string> Hop_80_set;
      Hop_80.add_attribute("ID", "HopCompID_t_635817174"); // 2
      Hop_80_set.insert("HopCompID_t_635817174");
      Hop_80.add_attribute("Ref", "640684232"); // 2
      Hop_80_set.insert("640684232");
      Hop_80.add_attribute("Snt", "HopSendingTime_t_558725313"); // 2
      Hop_80_set.insert("HopSendingTime_t_558725313");
      all_values.push_back(Hop_80_set);
      all_compo_names.insert("Hop_80_set");

      Hdr_80.add_element(Hop_80);
    }
    elt.add_element(Hdr_80);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_12{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_12_set;
    ApplSeqCtrl_12.add_attribute("ApplID", "ApplID_t_179089031"); // 1
    ApplSeqCtrl_12_set.insert("ApplID_t_179089031");
    ApplSeqCtrl_12.add_attribute("ApplSeqNum", "751866659"); // 1
    ApplSeqCtrl_12_set.insert("751866659");
    ApplSeqCtrl_12.add_attribute("ApplLastSeqNum", "630240011"); // 1
    ApplSeqCtrl_12_set.insert("630240011");
    ApplSeqCtrl_12.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_12_set.insert("true");
    all_values.push_back(ApplSeqCtrl_12_set);
    all_compo_names.insert("ApplSeqCtrl_12_set");

    elt.add_element(ApplSeqCtrl_12);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_68{"Instrmt"};
    multiset<string> Instrmt_68_set;
    Instrmt_68.add_attribute("Sym", "Symbol_t_732233756"); // 1
    Instrmt_68_set.insert("Symbol_t_732233756");
    Instrmt_68.add_attribute("Sfx", "WI"); // 1
    Instrmt_68_set.insert("WI");
    Instrmt_68.add_attribute("ID", "SecurityID_t_643916611"); // 1
    Instrmt_68_set.insert("SecurityID_t_643916611");
    Instrmt_68.add_attribute("Src", "7"); // 1
    Instrmt_68_set.insert("7");
    Instrmt_68.add_attribute("Prod", "13"); // 1
    Instrmt_68_set.insert("13");
    Instrmt_68.add_attribute("ProdCmplx", "ProductComplex_t_1045520512"); // 1
    Instrmt_68_set.insert("ProductComplex_t_1045520512");
    Instrmt_68.add_attribute("SecGrp", "SecurityGroup_t_1269606943"); // 1
    Instrmt_68_set.insert("SecurityGroup_t_1269606943");
    Instrmt_68.add_attribute("CFI", "CFICode_t_1647006650"); // 1
    Instrmt_68_set.insert("CFICode_t_1647006650");
    Instrmt_68.add_attribute("SecTyp", "YCD"); // 1
    Instrmt_68_set.insert("YCD");
    Instrmt_68.add_attribute("SubTyp", "SecuritySubType_t_1305400054"); // 1
    Instrmt_68_set.insert("SecuritySubType_t_1305400054");
    Instrmt_68.add_attribute("MMY", "263847079"); // 1
    Instrmt_68_set.insert("263847079");
    Instrmt_68.add_attribute("MatDt", "MaturityDate_t_37275198"); // 1
    Instrmt_68_set.insert("MaturityDate_t_37275198");
    Instrmt_68.add_attribute("MatTm", "1359252419"); // 1
    Instrmt_68_set.insert("1359252419");
    Instrmt_68.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_32387279"); // 1
    Instrmt_68_set.insert("SettleOnOpenFlag_t_32387279");
    Instrmt_68.add_attribute("AsgnMeth", "1136548879"); // 1
    Instrmt_68_set.insert("1136548879");
    Instrmt_68.add_attribute("Status", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("CpnPmt", "CouponPaymentDate_t_1558902580"); // 1
    Instrmt_68_set.insert("CouponPaymentDate_t_1558902580");
    Instrmt_68.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_68_set.insert("MM");
    Instrmt_68.add_attribute("Snrty", "SR"); // 1
    Instrmt_68_set.insert("SR");
    Instrmt_68.add_attribute("NotlPctOut", "6945546.810000"); // 1
    Instrmt_68_set.insert("6945546.810000");
    Instrmt_68.add_attribute("OrigNotlPctOut", "10139969.100000"); // 1
    Instrmt_68_set.insert("10139969.100000");
    Instrmt_68.add_attribute("AttchPnt", "6585243.130000"); // 1
    Instrmt_68_set.insert("6585243.130000");
    Instrmt_68.add_attribute("DetchPnt", "3120033.250000"); // 1
    Instrmt_68_set.insert("3120033.250000");
    Instrmt_68.add_attribute("Issued", "IssueDate_t_1893900866"); // 1
    Instrmt_68_set.insert("IssueDate_t_1893900866");
    Instrmt_68.add_attribute("RepoCollSecTyp", "1294341487"); // 1
    Instrmt_68_set.insert("1294341487");
    Instrmt_68.add_attribute("RepoTrm", "952687557"); // 1
    Instrmt_68_set.insert("952687557");
    Instrmt_68.add_attribute("RepoRt", "3051425.310000"); // 1
    Instrmt_68_set.insert("3051425.310000");
    Instrmt_68.add_attribute("Fctr", "14734305.180000"); // 1
    Instrmt_68_set.insert("14734305.180000");
    Instrmt_68.add_attribute("CrdRtg", "CreditRating_t_1704554216"); // 1
    Instrmt_68_set.insert("CreditRating_t_1704554216");
    Instrmt_68.add_attribute("Rgstry", "InstrRegistry_t_935382542"); // 1
    Instrmt_68_set.insert("InstrRegistry_t_935382542");
    Instrmt_68.add_attribute("IssuCtry", "1704801604"); // 1
    Instrmt_68_set.insert("1704801604");
    Instrmt_68.add_attribute("StPrv", "StateOrProvinceOfIssue_t_289304325"); // 1
    Instrmt_68_set.insert("StateOrProvinceOfIssue_t_289304325");
    Instrmt_68.add_attribute("Lcl", "LocaleOfIssue_t_1169644291"); // 1
    Instrmt_68_set.insert("LocaleOfIssue_t_1169644291");
    Instrmt_68.add_attribute("Redeem", "RedemptionDate_t_201234567"); // 1
    Instrmt_68_set.insert("RedemptionDate_t_201234567");
    Instrmt_68.add_attribute("StrkPx", "2590137.390000"); // 1
    Instrmt_68_set.insert("2590137.390000");
    Instrmt_68.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_68_set.insert("GBP");
    Instrmt_68.add_attribute("StrkMult", "15286206.820000"); // 1
    Instrmt_68_set.insert("15286206.820000");
    Instrmt_68.add_attribute("StrkValu", "11899114.040000"); // 1
    Instrmt_68_set.insert("11899114.040000");
    Instrmt_68.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_68_set.insert("4");
    Instrmt_68.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_68_set.insert("4");
    Instrmt_68.add_attribute("StrkPxBndryPrcsn", "14537584.830000"); // 1
    Instrmt_68_set.insert("14537584.830000");
    Instrmt_68.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_68_set.insert("2");
    Instrmt_68.add_attribute("OptAt", "2045789507"); // 1
    Instrmt_68_set.insert("2045789507");
    Instrmt_68.add_attribute("Mult", "14861457.630000"); // 1
    Instrmt_68_set.insert("14861457.630000");
    Instrmt_68.add_attribute("MultTyp", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_68_set.insert("0");
    Instrmt_68.add_attribute("MinPxIncr", "8975646.950000"); // 1
    Instrmt_68_set.insert("8975646.950000");
    Instrmt_68.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1441136503"); // 1
    Instrmt_68_set.insert("MinPriceIncrementAmount_t_1441136503");
    Instrmt_68.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_68_set.insert("MMBtu");
    Instrmt_68.add_attribute("UOMQty", "15921193.760000"); // 1
    Instrmt_68_set.insert("15921193.760000");
    Instrmt_68.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_68_set.insert("lbs");
    Instrmt_68.add_attribute("PxUOMQty", "7095211.170000"); // 1
    Instrmt_68_set.insert("7095211.170000");
    Instrmt_68.add_attribute("SettlMeth", "P"); // 1
    Instrmt_68_set.insert("P");
    Instrmt_68.add_attribute("ExerStyle", "2"); // 1
    Instrmt_68_set.insert("2");
    Instrmt_68.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_68_set.insert("2");
    Instrmt_68.add_attribute("OptPayAmt", "OptPayoutAmount_t_709326611"); // 1
    Instrmt_68_set.insert("OptPayoutAmount_t_709326611");
    Instrmt_68.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_68_set.insert("PCTPAR");
    Instrmt_68.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_68_set.insert("CDSD");
    Instrmt_68.add_attribute("ListMeth", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("CapPx", "12945920.570000"); // 1
    Instrmt_68_set.insert("12945920.570000");
    Instrmt_68.add_attribute("FlrPx", "8871274.300000"); // 1
    Instrmt_68_set.insert("8871274.300000");
    Instrmt_68.add_attribute("PutCall", "0"); // 1
    Instrmt_68_set.insert("0");
    Instrmt_68.add_attribute("FlexInd", "false"); // 1
    Instrmt_68_set.insert("false");
    Instrmt_68.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_68_set.insert("true");
    Instrmt_68.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_68_set.insert("Yr");
    Instrmt_68.add_attribute("CpnRt", "20071411.030000"); // 1
    Instrmt_68_set.insert("20071411.030000");
    Instrmt_68.add_attribute("Exch", "SecurityExchange_t_187633430"); // 1
    Instrmt_68_set.insert("SecurityExchange_t_187633430");
    Instrmt_68.add_attribute("PosLmt", "195852277"); // 1
    Instrmt_68_set.insert("195852277");
    Instrmt_68.add_attribute("NTPosLmt", "1049568860"); // 1
    Instrmt_68_set.insert("1049568860");
    Instrmt_68.add_attribute("Issr", "Issuer_t_1166635281"); // 1
    Instrmt_68_set.insert("Issuer_t_1166635281");
    Instrmt_68.add_attribute("EncIssrLen", "882389366"); // 1
    Instrmt_68_set.insert("882389366");
    Instrmt_68.add_attribute("EncIssr", "EncodedIssuer_t_355843695"); // 1
    Instrmt_68_set.insert("EncodedIssuer_t_355843695");
    Instrmt_68.add_attribute("Desc", "SecurityDesc_t_35428683"); // 1
    Instrmt_68_set.insert("SecurityDesc_t_35428683");
    Instrmt_68.add_attribute("EncSecDescLen", "780695225"); // 1
    Instrmt_68_set.insert("780695225");
    Instrmt_68.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1841989458"); // 1
    Instrmt_68_set.insert("EncodedSecurityDesc_t_1841989458");
    Instrmt_68.add_attribute("Pool", "Pool_t_40770964"); // 1
    Instrmt_68_set.insert("Pool_t_40770964");
    Instrmt_68.add_attribute("CSetMo", "363178377"); // 1
    Instrmt_68_set.insert("363178377");
    Instrmt_68.add_attribute("CPPgm", "1"); // 1
    Instrmt_68_set.insert("1");
    Instrmt_68.add_attribute("CPRegT", "CPRegType_t_1481907467"); // 1
    Instrmt_68_set.insert("CPRegType_t_1481907467");
    Instrmt_68.add_attribute("Dated", "DatedDate_t_414175182"); // 1
    Instrmt_68_set.insert("DatedDate_t_414175182");
    Instrmt_68.add_attribute("IntAcrl", "InterestAccrualDate_t_36706234"); // 1
    Instrmt_68_set.insert("InterestAccrualDate_t_36706234");
    all_values.push_back(Instrmt_68_set);
    all_compo_names.insert("Instrmt_68_set");

    {
      xml_element AID_71{"AID"};
      multiset<string> AID_71_set;
      AID_71.add_attribute("AltID", "SecurityAltID_t_1789557233"); // 2
      AID_71_set.insert("SecurityAltID_t_1789557233");
      AID_71.add_attribute("AltIDSrc", "C"); // 2
      AID_71_set.insert("C");
      all_values.push_back(AID_71_set);
      all_compo_names.insert("AID_71_set");

      Instrmt_68.add_element(AID_71);
    }
    {
      xml_element SecXML_71{"SecXML"};
      multiset<string> SecXML_71_set;
      SecXML_71.add_attribute("Schema", "SecurityXMLSchema_t_1940828935"); // 2
      SecXML_71_set.insert("SecurityXMLSchema_t_1940828935");
      all_values.push_back(SecXML_71_set);
      all_compo_names.insert("SecXML_71_set");

      Instrmt_68.add_element(SecXML_71);
    }
    {
      xml_element Evnt_71{"Evnt"};
      multiset<string> Evnt_71_set;
      Evnt_71.add_attribute("EventTyp", "16"); // 2
      Evnt_71_set.insert("16");
      Evnt_71.add_attribute("Dt", "EventDate_t_980075256"); // 2
      Evnt_71_set.insert("EventDate_t_980075256");
      Evnt_71.add_attribute("Tm", "EventTime_t_502671898"); // 2
      Evnt_71_set.insert("EventTime_t_502671898");
      Evnt_71.add_attribute("Px", "553500.830000"); // 2
      Evnt_71_set.insert("553500.830000");
      Evnt_71.add_attribute("Txt", "EventText_t_162401082"); // 2
      Evnt_71_set.insert("EventText_t_162401082");
      all_values.push_back(Evnt_71_set);
      all_compo_names.insert("Evnt_71_set");

      Instrmt_68.add_element(Evnt_71);
    }
    {
      xml_element Pty_369{"Pty"};
      multiset<string> Pty_369_set;
      Pty_369.add_attribute("ID", "InstrumentPartyID_t_769069078"); // 2
      Pty_369_set.insert("InstrumentPartyID_t_769069078");
      Pty_369.add_attribute("Src", "C"); // 2
      Pty_369_set.insert("C");
      Pty_369.add_attribute("R", "14"); // 2
      Pty_369_set.insert("14");
      all_values.push_back(Pty_369_set);
      all_compo_names.insert("Pty_369_set");

      {
        xml_element Sub_369{"Sub"};
        multiset<string> Sub_369_set;
        Sub_369.add_attribute("ID", "InstrumentPartySubID_t_1324770582"); // 3
        Sub_369_set.insert("InstrumentPartySubID_t_1324770582");
        Sub_369.add_attribute("Typ", "19"); // 3
        Sub_369_set.insert("19");
        all_values.push_back(Sub_369_set);
        all_compo_names.insert("Sub_369_set");

        Pty_369.add_element(Sub_369);
      }
      Instrmt_68.add_element(Pty_369);
    }
    {
      xml_element CmplxEvnt_68{"CmplxEvnt"};
      multiset<string> CmplxEvnt_68_set;
      CmplxEvnt_68.add_attribute("Typ", "2"); // 2
      CmplxEvnt_68_set.insert("2");
      CmplxEvnt_68.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2139485826"); // 2
      CmplxEvnt_68_set.insert("ComplexOptPayoutAmount_t_2139485826");
      CmplxEvnt_68.add_attribute("Px", "15263522.970000"); // 2
      CmplxEvnt_68_set.insert("15263522.970000");
      CmplxEvnt_68.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_68_set.insert("4");
      CmplxEvnt_68.add_attribute("PxBndryPrcsn", "1878544.550000"); // 2
      CmplxEvnt_68_set.insert("1878544.550000");
      CmplxEvnt_68.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_68_set.insert("1");
      CmplxEvnt_68.add_attribute("Cond", "1"); // 2
      CmplxEvnt_68_set.insert("1");
      all_values.push_back(CmplxEvnt_68_set);
      all_compo_names.insert("CmplxEvnt_68_set");

      {
        xml_element EvntDts_68{"EvntDts"};
        multiset<string> EvntDts_68_set;
        EvntDts_68.add_attribute("StartDt", "ComplexEventStartDate_t_1070243821"); // 3
        EvntDts_68_set.insert("ComplexEventStartDate_t_1070243821");
        EvntDts_68.add_attribute("EndDt", "ComplexEventEndDate_t_784281205"); // 3
        EvntDts_68_set.insert("ComplexEventEndDate_t_784281205");
        all_values.push_back(EvntDts_68_set);
        all_compo_names.insert("EvntDts_68_set");

        {
          xml_element EvntTms_68{"EvntTms"};
          multiset<string> EvntTms_68_set;
          EvntTms_68.add_attribute("StartTm", "1380104257"); // 4
          EvntTms_68_set.insert("1380104257");
          EvntTms_68.add_attribute("EndTm", "1850939047"); // 4
          EvntTms_68_set.insert("1850939047");
          all_values.push_back(EvntTms_68_set);
          all_compo_names.insert("EvntTms_68_set");

          EvntDts_68.add_element(EvntTms_68);
        }
        CmplxEvnt_68.add_element(EvntDts_68);
      }
      Instrmt_68.add_element(CmplxEvnt_68);
    }
    elt.add_element(Instrmt_68);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_7{"InstrmtExt"};
    multiset<string> InstrmtExt_7_set;
    InstrmtExt_7.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_7_set.insert("2");
    InstrmtExt_7.add_attribute("PctAtRisk", "14208752.210000"); // 1
    InstrmtExt_7_set.insert("14208752.210000");
    all_values.push_back(InstrmtExt_7_set);
    all_compo_names.insert("InstrmtExt_7_set");

    {
      xml_element Attrb_11{"Attrb"};
      multiset<string> Attrb_11_set;
      Attrb_11.add_attribute("Typ", "26"); // 2
      Attrb_11_set.insert("26");
      Attrb_11.add_attribute("Val", "InstrAttribValue_t_1070857521"); // 2
      Attrb_11_set.insert("InstrAttribValue_t_1070857521");
      all_values.push_back(Attrb_11_set);
      all_compo_names.insert("Attrb_11_set");

      InstrmtExt_7.add_element(Attrb_11);
    }
    elt.add_element(InstrmtExt_7);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_98{"Undly"};
    multiset<string> Undly_98_set;
    Undly_98.add_attribute("Sym", "UnderlyingSymbol_t_480808958"); // 1
    Undly_98_set.insert("UnderlyingSymbol_t_480808958");
    Undly_98.add_attribute("Sfx", "WI"); // 1
    Undly_98_set.insert("WI");
    Undly_98.add_attribute("ID", "UnderlyingSecurityID_t_397372626"); // 1
    Undly_98_set.insert("UnderlyingSecurityID_t_397372626");
    Undly_98.add_attribute("Src", "5"); // 1
    Undly_98_set.insert("5");
    Undly_98.add_attribute("Prod", "4"); // 1
    Undly_98_set.insert("4");
    Undly_98.add_attribute("CFI", "UnderlyingCFICode_t_93513194"); // 1
    Undly_98_set.insert("UnderlyingCFICode_t_93513194");
    Undly_98.add_attribute("SecTyp", "UST"); // 1
    Undly_98_set.insert("UST");
    Undly_98.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1403580941"); // 1
    Undly_98_set.insert("UnderlyingSecuritySubType_t_1403580941");
    Undly_98.add_attribute("MMY", "148863278"); // 1
    Undly_98_set.insert("148863278");
    Undly_98.add_attribute("Mat", "UnderlyingMaturityDate_t_599497948"); // 1
    Undly_98_set.insert("UnderlyingMaturityDate_t_599497948");
    Undly_98.add_attribute("MatTm", "25166371"); // 1
    Undly_98_set.insert("25166371");
    Undly_98.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1498805419"); // 1
    Undly_98_set.insert("UnderlyingCouponPaymentDate_t_1498805419");
    Undly_98.add_attribute("RestrctTyp", "MR"); // 1
    Undly_98_set.insert("MR");
    Undly_98.add_attribute("Snrty", "SR"); // 1
    Undly_98_set.insert("SR");
    Undly_98.add_attribute("NotlPctOut", "10180166.130000"); // 1
    Undly_98_set.insert("10180166.130000");
    Undly_98.add_attribute("OrigNotlPctOut", "16394333.240000"); // 1
    Undly_98_set.insert("16394333.240000");
    Undly_98.add_attribute("AttchPnt", "13419391.310000"); // 1
    Undly_98_set.insert("13419391.310000");
    Undly_98.add_attribute("DetchPnt", "3968852.620000"); // 1
    Undly_98_set.insert("3968852.620000");
    Undly_98.add_attribute("Issued", "UnderlyingIssueDate_t_1817473617"); // 1
    Undly_98_set.insert("UnderlyingIssueDate_t_1817473617");
    Undly_98.add_attribute("RepoCollSecTyp", "1529793587"); // 1
    Undly_98_set.insert("1529793587");
    Undly_98.add_attribute("RepoTrm", "825322772"); // 1
    Undly_98_set.insert("825322772");
    Undly_98.add_attribute("RepoRt", "10146655.440000"); // 1
    Undly_98_set.insert("10146655.440000");
    Undly_98.add_attribute("Fctr", "4525537.600000"); // 1
    Undly_98_set.insert("4525537.600000");
    Undly_98.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1609603977"); // 1
    Undly_98_set.insert("UnderlyingCreditRating_t_1609603977");
    Undly_98.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_247286153"); // 1
    Undly_98_set.insert("UnderlyingInstrRegistry_t_247286153");
    Undly_98.add_attribute("Ctry", "156009159"); // 1
    Undly_98_set.insert("156009159");
    Undly_98.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2088390992"); // 1
    Undly_98_set.insert("UnderlyingStateOrProvinceOfIssue_t_2088390992");
    Undly_98.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1668161375"); // 1
    Undly_98_set.insert("UnderlyingLocaleOfIssue_t_1668161375");
    Undly_98.add_attribute("Redeem", "UnderlyingRedemptionDate_t_222642936"); // 1
    Undly_98_set.insert("UnderlyingRedemptionDate_t_222642936");
    Undly_98.add_attribute("StrkPx", "10117648.650000"); // 1
    Undly_98_set.insert("10117648.650000");
    Undly_98.add_attribute("StrkCcy", "GBP"); // 1
    Undly_98_set.insert("GBP");
    Undly_98.add_attribute("OptA", "2119328620"); // 1
    Undly_98_set.insert("2119328620");
    Undly_98.add_attribute("Mult", "6733493.940000"); // 1
    Undly_98_set.insert("6733493.940000");
    Undly_98.add_attribute("MultTyp", "0"); // 1
    Undly_98_set.insert("0");
    Undly_98.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_98_set.insert("0");
    Undly_98.add_attribute("UOM", "Bu"); // 1
    Undly_98_set.insert("Bu");
    Undly_98.add_attribute("UOMQty", "5975703.700000"); // 1
    Undly_98_set.insert("5975703.700000");
    Undly_98.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_98_set.insert("MMBtu");
    Undly_98.add_attribute("PxUOMQty", "9157258.660000"); // 1
    Undly_98_set.insert("9157258.660000");
    Undly_98.add_attribute("TmUnit", "Yr"); // 1
    Undly_98_set.insert("Yr");
    Undly_98.add_attribute("ExerStyle", "1"); // 1
    Undly_98_set.insert("1");
    Undly_98.add_attribute("CpnRt", "2670476.370000"); // 1
    Undly_98_set.insert("2670476.370000");
    Undly_98.add_attribute("Exch", "UnderlyingSecurityExchange_t_698611132"); // 1
    Undly_98_set.insert("UnderlyingSecurityExchange_t_698611132");
    Undly_98.add_attribute("Issr", "UnderlyingIssuer_t_1503954632"); // 1
    Undly_98_set.insert("UnderlyingIssuer_t_1503954632");
    Undly_98.add_attribute("EncUndIssrLen", "1285064250"); // 1
    Undly_98_set.insert("1285064250");
    Undly_98.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_190560809"); // 1
    Undly_98_set.insert("EncodedUnderlyingIssuer_t_190560809");
    Undly_98.add_attribute("Desc", "UnderlyingSecurityDesc_t_698410116"); // 1
    Undly_98_set.insert("UnderlyingSecurityDesc_t_698410116");
    Undly_98.add_attribute("EncUndSecDescLen", "1681949513"); // 1
    Undly_98_set.insert("1681949513");
    Undly_98.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2008034426"); // 1
    Undly_98_set.insert("EncodedUnderlyingSecurityDesc_t_2008034426");
    Undly_98.add_attribute("CPPgm", "UnderlyingCPProgram_t_80720055"); // 1
    Undly_98_set.insert("UnderlyingCPProgram_t_80720055");
    Undly_98.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_359788637"); // 1
    Undly_98_set.insert("UnderlyingCPRegType_t_359788637");
    Undly_98.add_attribute("AllocPct", "8752163.220000"); // 1
    Undly_98_set.insert("8752163.220000");
    Undly_98.add_attribute("Ccy", "GBP"); // 1
    Undly_98_set.insert("GBP");
    Undly_98.add_attribute("Qty", "11225024.760000"); // 1
    Undly_98_set.insert("11225024.760000");
    Undly_98.add_attribute("SettlTyp", "5"); // 1
    Undly_98_set.insert("5");
    Undly_98.add_attribute("CashAmt", "UnderlyingCashAmount_t_1910299958"); // 1
    Undly_98_set.insert("UnderlyingCashAmount_t_1910299958");
    Undly_98.add_attribute("CashTyp", "DIFF"); // 1
    Undly_98_set.insert("DIFF");
    Undly_98.add_attribute("Px", "9119259.110000"); // 1
    Undly_98_set.insert("9119259.110000");
    Undly_98.add_attribute("DirtPx", "7745811.760000"); // 1
    Undly_98_set.insert("7745811.760000");
    Undly_98.add_attribute("EndPx", "9191569.710000"); // 1
    Undly_98_set.insert("9191569.710000");
    Undly_98.add_attribute("StartVal", "UnderlyingStartValue_t_1615377805"); // 1
    Undly_98_set.insert("UnderlyingStartValue_t_1615377805");
    Undly_98.add_attribute("CurVal", "UnderlyingCurrentValue_t_746426148"); // 1
    Undly_98_set.insert("UnderlyingCurrentValue_t_746426148");
    Undly_98.add_attribute("EndVal", "UnderlyingEndValue_t_1592506365"); // 1
    Undly_98_set.insert("UnderlyingEndValue_t_1592506365");
    Undly_98.add_attribute("AdjQty", "17758513.100000"); // 1
    Undly_98_set.insert("17758513.100000");
    Undly_98.add_attribute("FxRate", "16191801.630000"); // 1
    Undly_98_set.insert("16191801.630000");
    Undly_98.add_attribute("FxRateCalc", "D"); // 1
    Undly_98_set.insert("D");
    Undly_98.add_attribute("CapValu", "UnderlyingCapValue_t_225938032"); // 1
    Undly_98_set.insert("UnderlyingCapValue_t_225938032");
    Undly_98.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1748031471"); // 1
    Undly_98_set.insert("UnderlyingSettlMethod_t_1748031471");
    Undly_98.add_attribute("PutCall", "1127611172"); // 1
    Undly_98_set.insert("1127611172");
    all_values.push_back(Undly_98_set);
    all_compo_names.insert("Undly_98_set");

    {
      xml_element UndAID_98{"UndAID"};
      multiset<string> UndAID_98_set;
      UndAID_98.add_attribute("AltID", "UnderlyingSecurityAltID_t_1423006351"); // 2
      UndAID_98_set.insert("UnderlyingSecurityAltID_t_1423006351");
      UndAID_98.add_attribute("AltIDSrc", "D"); // 2
      UndAID_98_set.insert("D");
      all_values.push_back(UndAID_98_set);
      all_compo_names.insert("UndAID_98_set");

      Undly_98.add_element(UndAID_98);
    }
    {
      xml_element Stip_154{"Stip"};
      multiset<string> Stip_154_set;
      Stip_154.add_attribute("Typ", "CURRENCY"); // 2
      Stip_154_set.insert("CURRENCY");
      Stip_154.add_attribute("Val", "UnderlyingStipValue_t_2121617484"); // 2
      Stip_154_set.insert("UnderlyingStipValue_t_2121617484");
      all_values.push_back(Stip_154_set);
      all_compo_names.insert("Stip_154_set");

      Undly_98.add_element(Stip_154);
    }
    {
      xml_element Pty_370{"Pty"};
      multiset<string> Pty_370_set;
      Pty_370.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1258520135"); // 2
      Pty_370_set.insert("UnderlyingInstrumentPartyID_t_1258520135");
      Pty_370.add_attribute("Src", "5"); // 2
      Pty_370_set.insert("5");
      Pty_370.add_attribute("R", "48"); // 2
      Pty_370_set.insert("48");
      all_values.push_back(Pty_370_set);
      all_compo_names.insert("Pty_370_set");

      {
        xml_element Sub_370{"Sub"};
        multiset<string> Sub_370_set;
        Sub_370.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1956930251"); // 3
        Sub_370_set.insert("UnderlyingInstrumentPartySubID_t_1956930251");
        Sub_370.add_attribute("Typ", "10"); // 3
        Sub_370_set.insert("10");
        all_values.push_back(Sub_370_set);
        all_compo_names.insert("Sub_370_set");

        Pty_370.add_element(Sub_370);
      }
      Undly_98.add_element(Pty_370);
    }
    elt.add_element(Undly_98);
  } // end Undly
  { // Stip
    xml_element Stip_155{"Stip"};
    multiset<string> Stip_155_set;
    Stip_155.add_attribute("Typ", "REFPRIN"); // 1
    Stip_155_set.insert("REFPRIN");
    Stip_155.add_attribute("Val", "StipulationValue_t_426493914"); // 1
    Stip_155_set.insert("StipulationValue_t_426493914");
    all_values.push_back(Stip_155_set);
    all_compo_names.insert("Stip_155_set");

    elt.add_element(Stip_155);
  } // end Stip
  { // Leg
    xml_element Leg_84{"Leg"};
    multiset<string> Leg_84_set;
    Leg_84.add_attribute("Sym", "LegSymbol_t_423440473"); // 1
    Leg_84_set.insert("LegSymbol_t_423440473");
    Leg_84.add_attribute("Sfx", "CD"); // 1
    Leg_84_set.insert("CD");
    Leg_84.add_attribute("ID", "LegSecurityID_t_2022964222"); // 1
    Leg_84_set.insert("LegSecurityID_t_2022964222");
    Leg_84.add_attribute("Src", "D"); // 1
    Leg_84_set.insert("D");
    Leg_84.add_attribute("Prod", "5"); // 1
    Leg_84_set.insert("5");
    Leg_84.add_attribute("CFI", "LegCFICode_t_518660777"); // 1
    Leg_84_set.insert("LegCFICode_t_518660777");
    Leg_84.add_attribute("SecTyp", "ONITE"); // 1
    Leg_84_set.insert("ONITE");
    Leg_84.add_attribute("SecSubTyp", "LegSecuritySubType_t_785800366"); // 1
    Leg_84_set.insert("LegSecuritySubType_t_785800366");
    Leg_84.add_attribute("MMY", "1437817748"); // 1
    Leg_84_set.insert("1437817748");
    Leg_84.add_attribute("Mat", "LegMaturityDate_t_1492543517"); // 1
    Leg_84_set.insert("LegMaturityDate_t_1492543517");
    Leg_84.add_attribute("MatTm", "1532226515"); // 1
    Leg_84_set.insert("1532226515");
    Leg_84.add_attribute("CpnPmt", "LegCouponPaymentDate_t_882840465"); // 1
    Leg_84_set.insert("LegCouponPaymentDate_t_882840465");
    Leg_84.add_attribute("Issued", "LegIssueDate_t_1120911179"); // 1
    Leg_84_set.insert("LegIssueDate_t_1120911179");
    Leg_84.add_attribute("RepoCollSecTyp", "1003923030"); // 1
    Leg_84_set.insert("1003923030");
    Leg_84.add_attribute("RepoTrm", "1094725770"); // 1
    Leg_84_set.insert("1094725770");
    Leg_84.add_attribute("RepoRt", "13468492.110000"); // 1
    Leg_84_set.insert("13468492.110000");
    Leg_84.add_attribute("Fctr", "6044708.540000"); // 1
    Leg_84_set.insert("6044708.540000");
    Leg_84.add_attribute("CrdRtg", "LegCreditRating_t_74853294"); // 1
    Leg_84_set.insert("LegCreditRating_t_74853294");
    Leg_84.add_attribute("Rgstry", "LegInstrRegistry_t_622371915"); // 1
    Leg_84_set.insert("LegInstrRegistry_t_622371915");
    Leg_84.add_attribute("Ctry", "359036356"); // 1
    Leg_84_set.insert("359036356");
    Leg_84.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1469512104"); // 1
    Leg_84_set.insert("LegStateOrProvinceOfIssue_t_1469512104");
    Leg_84.add_attribute("Lcl", "LegLocaleOfIssue_t_596505751"); // 1
    Leg_84_set.insert("LegLocaleOfIssue_t_596505751");
    Leg_84.add_attribute("Redeem", "LegRedemptionDate_t_1617556491"); // 1
    Leg_84_set.insert("LegRedemptionDate_t_1617556491");
    Leg_84.add_attribute("Strk", "20017515.160000"); // 1
    Leg_84_set.insert("20017515.160000");
    Leg_84.add_attribute("StrkCcy", "USD"); // 1
    Leg_84_set.insert("USD");
    Leg_84.add_attribute("OptA", "2068456793"); // 1
    Leg_84_set.insert("2068456793");
    Leg_84.add_attribute("Cmult", "7864458.190000"); // 1
    Leg_84_set.insert("7864458.190000");
    Leg_84.add_attribute("MultTyp", "0"); // 1
    Leg_84_set.insert("0");
    Leg_84.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_84_set.insert("4");
    Leg_84.add_attribute("UOM", "tn"); // 1
    Leg_84_set.insert("tn");
    Leg_84.add_attribute("UOMQty", "17406102.260000"); // 1
    Leg_84_set.insert("17406102.260000");
    Leg_84.add_attribute("PxUOM", "Bbl"); // 1
    Leg_84_set.insert("Bbl");
    Leg_84.add_attribute("PxUOMQty", "15623881.390000"); // 1
    Leg_84_set.insert("15623881.390000");
    Leg_84.add_attribute("TmUnit", "S"); // 1
    Leg_84_set.insert("S");
    Leg_84.add_attribute("ExerStyle", "0"); // 1
    Leg_84_set.insert("0");
    Leg_84.add_attribute("CpnRt", "20810489.160000"); // 1
    Leg_84_set.insert("20810489.160000");
    Leg_84.add_attribute("Exch", "LegSecurityExchange_t_583015738"); // 1
    Leg_84_set.insert("LegSecurityExchange_t_583015738");
    Leg_84.add_attribute("Issr", "LegIssuer_t_1392889496"); // 1
    Leg_84_set.insert("LegIssuer_t_1392889496");
    Leg_84.add_attribute("EncLegIssrLen", "1371383016"); // 1
    Leg_84_set.insert("1371383016");
    Leg_84.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2075559255"); // 1
    Leg_84_set.insert("EncodedLegIssuer_t_2075559255");
    Leg_84.add_attribute("Desc", "LegSecurityDesc_t_777632363"); // 1
    Leg_84_set.insert("LegSecurityDesc_t_777632363");
    Leg_84.add_attribute("EncLegSecDescLen", "106739833"); // 1
    Leg_84_set.insert("106739833");
    Leg_84.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1048986786"); // 1
    Leg_84_set.insert("EncodedLegSecurityDesc_t_1048986786");
    Leg_84.add_attribute("RatioQty", "17815553.930000"); // 1
    Leg_84_set.insert("17815553.930000");
    Leg_84.add_attribute("Side", "5"); // 1
    Leg_84_set.insert("5");
    Leg_84.add_attribute("Ccy", "CAN"); // 1
    Leg_84_set.insert("CAN");
    Leg_84.add_attribute("Pool", "LegPool_t_1276318898"); // 1
    Leg_84_set.insert("LegPool_t_1276318898");
    Leg_84.add_attribute("Dated", "LegDatedDate_t_870724264"); // 1
    Leg_84_set.insert("LegDatedDate_t_870724264");
    Leg_84.add_attribute("CSetMo", "597578956"); // 1
    Leg_84_set.insert("597578956");
    Leg_84.add_attribute("IntAcrl", "LegInterestAccrualDate_t_598347354"); // 1
    Leg_84_set.insert("LegInterestAccrualDate_t_598347354");
    Leg_84.add_attribute("PutCall", "1467230015"); // 1
    Leg_84_set.insert("1467230015");
    Leg_84.add_attribute("LegOptionRatio", "676517.990000"); // 1
    Leg_84_set.insert("676517.990000");
    Leg_84.add_attribute("Px", "4526152.220000"); // 1
    Leg_84_set.insert("4526152.220000");
    all_values.push_back(Leg_84_set);
    all_compo_names.insert("Leg_84_set");

    {
      xml_element LegAID_81{"LegAID"};
      multiset<string> LegAID_81_set;
      LegAID_81.add_attribute("SecAltID", "LegSecurityAltID_t_80946763"); // 2
      LegAID_81_set.insert("LegSecurityAltID_t_80946763");
      LegAID_81.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_81_set.insert("J");
      all_values.push_back(LegAID_81_set);
      all_compo_names.insert("LegAID_81_set");

      Leg_84.add_element(LegAID_81);
    }
    elt.add_element(Leg_84);
  } // end Leg
  { // Leg
    xml_element Leg_85{"Leg"};
    multiset<string> Leg_85_set;
    Leg_85.add_attribute("Sym", "LegSymbol_t_373588367"); // 1
    Leg_85_set.insert("LegSymbol_t_373588367");
    Leg_85.add_attribute("Sfx", "WI"); // 1
    Leg_85_set.insert("WI");
    Leg_85.add_attribute("ID", "LegSecurityID_t_664340998"); // 1
    Leg_85_set.insert("LegSecurityID_t_664340998");
    Leg_85.add_attribute("Src", "F"); // 1
    Leg_85_set.insert("F");
    Leg_85.add_attribute("Prod", "9"); // 1
    Leg_85_set.insert("9");
    Leg_85.add_attribute("CFI", "LegCFICode_t_257467576"); // 1
    Leg_85_set.insert("LegCFICode_t_257467576");
    Leg_85.add_attribute("SecTyp", "PN"); // 1
    Leg_85_set.insert("PN");
    Leg_85.add_attribute("SecSubTyp", "LegSecuritySubType_t_1969204640"); // 1
    Leg_85_set.insert("LegSecuritySubType_t_1969204640");
    Leg_85.add_attribute("MMY", "963317603"); // 1
    Leg_85_set.insert("963317603");
    Leg_85.add_attribute("Mat", "LegMaturityDate_t_1924014495"); // 1
    Leg_85_set.insert("LegMaturityDate_t_1924014495");
    Leg_85.add_attribute("MatTm", "1902769908"); // 1
    Leg_85_set.insert("1902769908");
    Leg_85.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1546333341"); // 1
    Leg_85_set.insert("LegCouponPaymentDate_t_1546333341");
    Leg_85.add_attribute("Issued", "LegIssueDate_t_1169420343"); // 1
    Leg_85_set.insert("LegIssueDate_t_1169420343");
    Leg_85.add_attribute("RepoCollSecTyp", "1126669277"); // 1
    Leg_85_set.insert("1126669277");
    Leg_85.add_attribute("RepoTrm", "1474408948"); // 1
    Leg_85_set.insert("1474408948");
    Leg_85.add_attribute("RepoRt", "19470527.060000"); // 1
    Leg_85_set.insert("19470527.060000");
    Leg_85.add_attribute("Fctr", "12334091.100000"); // 1
    Leg_85_set.insert("12334091.100000");
    Leg_85.add_attribute("CrdRtg", "LegCreditRating_t_375912086"); // 1
    Leg_85_set.insert("LegCreditRating_t_375912086");
    Leg_85.add_attribute("Rgstry", "LegInstrRegistry_t_1581124451"); // 1
    Leg_85_set.insert("LegInstrRegistry_t_1581124451");
    Leg_85.add_attribute("Ctry", "287391066"); // 1
    Leg_85_set.insert("287391066");
    Leg_85.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_624264435"); // 1
    Leg_85_set.insert("LegStateOrProvinceOfIssue_t_624264435");
    Leg_85.add_attribute("Lcl", "LegLocaleOfIssue_t_1819667051"); // 1
    Leg_85_set.insert("LegLocaleOfIssue_t_1819667051");
    Leg_85.add_attribute("Redeem", "LegRedemptionDate_t_1563709965"); // 1
    Leg_85_set.insert("LegRedemptionDate_t_1563709965");
    Leg_85.add_attribute("Strk", "14949887.000000"); // 1
    Leg_85_set.insert("14949887.000000");
    Leg_85.add_attribute("StrkCcy", "EUR"); // 1
    Leg_85_set.insert("EUR");
    Leg_85.add_attribute("OptA", "814735067"); // 1
    Leg_85_set.insert("814735067");
    Leg_85.add_attribute("Cmult", "3374141.580000"); // 1
    Leg_85_set.insert("3374141.580000");
    Leg_85.add_attribute("MultTyp", "1"); // 1
    Leg_85_set.insert("1");
    Leg_85.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_85_set.insert("1");
    Leg_85.add_attribute("UOM", "oz_tr"); // 1
    Leg_85_set.insert("oz_tr");
    Leg_85.add_attribute("UOMQty", "8407772.610000"); // 1
    Leg_85_set.insert("8407772.610000");
    Leg_85.add_attribute("PxUOM", "Bcf"); // 1
    Leg_85_set.insert("Bcf");
    Leg_85.add_attribute("PxUOMQty", "3489264.030000"); // 1
    Leg_85_set.insert("3489264.030000");
    Leg_85.add_attribute("TmUnit", "D"); // 1
    Leg_85_set.insert("D");
    Leg_85.add_attribute("ExerStyle", "2"); // 1
    Leg_85_set.insert("2");
    Leg_85.add_attribute("CpnRt", "6063939.790000"); // 1
    Leg_85_set.insert("6063939.790000");
    Leg_85.add_attribute("Exch", "LegSecurityExchange_t_731274405"); // 1
    Leg_85_set.insert("LegSecurityExchange_t_731274405");
    Leg_85.add_attribute("Issr", "LegIssuer_t_1991611906"); // 1
    Leg_85_set.insert("LegIssuer_t_1991611906");
    Leg_85.add_attribute("EncLegIssrLen", "1569711582"); // 1
    Leg_85_set.insert("1569711582");
    Leg_85.add_attribute("EncLegIssr", "EncodedLegIssuer_t_507805252"); // 1
    Leg_85_set.insert("EncodedLegIssuer_t_507805252");
    Leg_85.add_attribute("Desc", "LegSecurityDesc_t_1746898167"); // 1
    Leg_85_set.insert("LegSecurityDesc_t_1746898167");
    Leg_85.add_attribute("EncLegSecDescLen", "968561275"); // 1
    Leg_85_set.insert("968561275");
    Leg_85.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1677225595"); // 1
    Leg_85_set.insert("EncodedLegSecurityDesc_t_1677225595");
    Leg_85.add_attribute("RatioQty", "7260837.960000"); // 1
    Leg_85_set.insert("7260837.960000");
    Leg_85.add_attribute("Side", "G"); // 1
    Leg_85_set.insert("G");
    Leg_85.add_attribute("Ccy", "USD"); // 1
    Leg_85_set.insert("USD");
    Leg_85.add_attribute("Pool", "LegPool_t_671398661"); // 1
    Leg_85_set.insert("LegPool_t_671398661");
    Leg_85.add_attribute("Dated", "LegDatedDate_t_910435457"); // 1
    Leg_85_set.insert("LegDatedDate_t_910435457");
    Leg_85.add_attribute("CSetMo", "99400325"); // 1
    Leg_85_set.insert("99400325");
    Leg_85.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1295663097"); // 1
    Leg_85_set.insert("LegInterestAccrualDate_t_1295663097");
    Leg_85.add_attribute("PutCall", "582618860"); // 1
    Leg_85_set.insert("582618860");
    Leg_85.add_attribute("LegOptionRatio", "16631102.900000"); // 1
    Leg_85_set.insert("16631102.900000");
    Leg_85.add_attribute("Px", "6431681.490000"); // 1
    Leg_85_set.insert("6431681.490000");
    all_values.push_back(Leg_85_set);
    all_compo_names.insert("Leg_85_set");

    {
      xml_element LegAID_82{"LegAID"};
      multiset<string> LegAID_82_set;
      LegAID_82.add_attribute("SecAltID", "LegSecurityAltID_t_852381219"); // 2
      LegAID_82_set.insert("LegSecurityAltID_t_852381219");
      LegAID_82.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_82_set.insert("L");
      all_values.push_back(LegAID_82_set);
      all_compo_names.insert("LegAID_82_set");

      Leg_85.add_element(LegAID_82);
    }
    elt.add_element(Leg_85);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_25{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_25_set;
    SprdBnchmkCurve_25.add_attribute("Spread", "14579032.160000"); // 1
    SprdBnchmkCurve_25_set.insert("14579032.160000");
    SprdBnchmkCurve_25.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_25_set.insert("EUR");
    SprdBnchmkCurve_25.add_attribute("Name", "OTHER"); // 1
    SprdBnchmkCurve_25_set.insert("OTHER");
    SprdBnchmkCurve_25.add_attribute("Point", "BenchmarkCurvePoint_t_874380782"); // 1
    SprdBnchmkCurve_25_set.insert("BenchmarkCurvePoint_t_874380782");
    SprdBnchmkCurve_25.add_attribute("Px", "8381664.690000"); // 1
    SprdBnchmkCurve_25_set.insert("8381664.690000");
    SprdBnchmkCurve_25.add_attribute("PxTyp", "4"); // 1
    SprdBnchmkCurve_25_set.insert("4");
    SprdBnchmkCurve_25.add_attribute("SecID", "BenchmarkSecurityID_t_1223307185"); // 1
    SprdBnchmkCurve_25_set.insert("BenchmarkSecurityID_t_1223307185");
    SprdBnchmkCurve_25.add_attribute("SecIDSrc", "G"); // 1
    SprdBnchmkCurve_25_set.insert("G");
    all_values.push_back(SprdBnchmkCurve_25_set);
    all_compo_names.insert("SprdBnchmkCurve_25_set");

    elt.add_element(SprdBnchmkCurve_25);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_20{"Yield"};
    multiset<string> Yield_20_set;
    Yield_20.add_attribute("Typ", "VALUE1_32"); // 1
    Yield_20_set.insert("VALUE1_32");
    Yield_20.add_attribute("Yld", "18297011.640000"); // 1
    Yield_20_set.insert("18297011.640000");
    Yield_20.add_attribute("CalcDt", "YieldCalcDate_t_983789914"); // 1
    Yield_20_set.insert("YieldCalcDate_t_983789914");
    Yield_20.add_attribute("RedDt", "YieldRedemptionDate_t_1835711338"); // 1
    Yield_20_set.insert("YieldRedemptionDate_t_1835711338");
    Yield_20.add_attribute("RedPx", "12519290.990000"); // 1
    Yield_20_set.insert("12519290.990000");
    Yield_20.add_attribute("RedPxTyp", "2"); // 1
    Yield_20_set.insert("2");
    all_values.push_back(Yield_20_set);
    all_compo_names.insert("Yield_20_set");

    elt.add_element(Yield_20);
  } // end Yield
  { // MktSegGrp
    xml_element MktSegGrp_2{"MktSegGrp"};
    multiset<string> MktSegGrp_2_set;
    MktSegGrp_2.add_attribute("MktID", "MarketID_t_73006726"); // 1
    MktSegGrp_2_set.insert("MarketID_t_73006726");
    MktSegGrp_2.add_attribute("MktSegID", "MarketSegmentID_t_1021337114"); // 1
    MktSegGrp_2_set.insert("MarketSegmentID_t_1021337114");
    all_values.push_back(MktSegGrp_2_set);
    all_compo_names.insert("MktSegGrp_2_set");

    {
      xml_element SecTrdgRules_2{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_4{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_4_set;
        BaseTrdgRules_4.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_4_set.insert("0");
        BaseTrdgRules_4.add_attribute("MinTrdVol", "3684933.020000"); // 3
        BaseTrdgRules_4_set.insert("3684933.020000");
        BaseTrdgRules_4.add_attribute("MaxTrdVol", "3506481.200000"); // 3
        BaseTrdgRules_4_set.insert("3506481.200000");
        BaseTrdgRules_4.add_attribute("MxPxVar", "19732189.120000"); // 3
        BaseTrdgRules_4_set.insert("19732189.120000");
        BaseTrdgRules_4.add_attribute("ImpldMktInd", "3"); // 3
        BaseTrdgRules_4_set.insert("3");
        BaseTrdgRules_4.add_attribute("TrdCcy", "CHF"); // 3
        BaseTrdgRules_4_set.insert("CHF");
        BaseTrdgRules_4.add_attribute("RndLot", "1880714.120000"); // 3
        BaseTrdgRules_4_set.insert("1880714.120000");
        BaseTrdgRules_4.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_4_set.insert("0");
        BaseTrdgRules_4.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_4_set.insert("3");
        BaseTrdgRules_4.add_attribute("PxTyp", "13"); // 3
        BaseTrdgRules_4_set.insert("13");
        all_values.push_back(BaseTrdgRules_4_set);
        all_compo_names.insert("BaseTrdgRules_4_set");

        {
          xml_element TickRules_4{"TickRules"};
          multiset<string> TickRules_4_set;
          TickRules_4.add_attribute("StartTickPxRng", "5486000.080000"); // 4
          TickRules_4_set.insert("5486000.080000");
          TickRules_4.add_attribute("EndTickPxRng", "11184461.920000"); // 4
          TickRules_4_set.insert("11184461.920000");
          TickRules_4.add_attribute("TickIncr", "1416591.300000"); // 4
          TickRules_4_set.insert("1416591.300000");
          TickRules_4.add_attribute("TickRuleTyp", "0"); // 4
          TickRules_4_set.insert("0");
          all_values.push_back(TickRules_4_set);
          all_compo_names.insert("TickRules_4_set");

          BaseTrdgRules_4.add_element(TickRules_4);
        }
        {
          xml_element LotTypeRules_4{"LotTypeRules"};
          multiset<string> LotTypeRules_4_set;
          LotTypeRules_4.add_attribute("LotTyp", "1"); // 4
          LotTypeRules_4_set.insert("1");
          LotTypeRules_4.add_attribute("MinLotSz", "3477605.290000"); // 4
          LotTypeRules_4_set.insert("3477605.290000");
          all_values.push_back(LotTypeRules_4_set);
          all_compo_names.insert("LotTypeRules_4_set");

          BaseTrdgRules_4.add_element(LotTypeRules_4);
        }
        {
          xml_element PxLmts_4{"PxLmts"};
          multiset<string> PxLmts_4_set;
          PxLmts_4.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_4_set.insert("1");
          PxLmts_4.add_attribute("LowLmtPx", "19540018.690000"); // 4
          PxLmts_4_set.insert("19540018.690000");
          PxLmts_4.add_attribute("HiLmtPx", "1694526.950000"); // 4
          PxLmts_4_set.insert("1694526.950000");
          PxLmts_4.add_attribute("TrdgRefPx", "16885997.040000"); // 4
          PxLmts_4_set.insert("16885997.040000");
          all_values.push_back(PxLmts_4_set);
          all_compo_names.insert("PxLmts_4_set");

          BaseTrdgRules_4.add_element(PxLmts_4);
        }
        SecTrdgRules_2.add_element(BaseTrdgRules_4);
      }
      {
        xml_element TrdgSesRulesGrp_2{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_2_set;
        TrdgSesRulesGrp_2.add_attribute("SesID", "1"); // 3
        TrdgSesRulesGrp_2_set.insert("1");
        TrdgSesRulesGrp_2.add_attribute("SesSub", "2"); // 3
        TrdgSesRulesGrp_2_set.insert("2");
        all_values.push_back(TrdgSesRulesGrp_2_set);
        all_compo_names.insert("TrdgSesRulesGrp_2_set");

        {
          xml_element TrdgSesRules_2{"TrdgSesRules"};
          {
            xml_element OrdTypRules_5{"OrdTypRules"};
            multiset<string> OrdTypRules_5_set;
            OrdTypRules_5.add_attribute("OrdTyp", "6"); // 5
            OrdTypRules_5_set.insert("6");
            all_values.push_back(OrdTypRules_5_set);
            all_compo_names.insert("OrdTypRules_5_set");

            TrdgSesRules_2.add_element(OrdTypRules_5);
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
            xml_element ExecInstRules_6{"ExecInstRules"};
            multiset<string> ExecInstRules_6_set;
            ExecInstRules_6.add_attribute("ExecInstValu", "n"); // 5
            ExecInstRules_6_set.insert("n");
            all_values.push_back(ExecInstRules_6_set);
            all_compo_names.insert("ExecInstRules_6_set");

            TrdgSesRules_2.add_element(ExecInstRules_6);
          }
          {
            xml_element MtchRules_2{"MtchRules"};
            multiset<string> MtchRules_2_set;
            MtchRules_2.add_attribute("MtchAlgo", "MatchAlgorithm_t_475262672"); // 5
            MtchRules_2_set.insert("MatchAlgorithm_t_475262672");
            MtchRules_2.add_attribute("MtchTyp", "S5"); // 5
            MtchRules_2_set.insert("S5");
            all_values.push_back(MtchRules_2_set);
            all_compo_names.insert("MtchRules_2_set");

            TrdgSesRules_2.add_element(MtchRules_2);
          }
          {
            xml_element MDFeedTyps_2{"MDFeedTyps"};
            multiset<string> MDFeedTyps_2_set;
            MDFeedTyps_2.add_attribute("MDFeedTyp", "MDFeedType_t_1136905675"); // 5
            MDFeedTyps_2_set.insert("MDFeedType_t_1136905675");
            MDFeedTyps_2.add_attribute("MktDepth", "548269398"); // 5
            MDFeedTyps_2_set.insert("548269398");
            MDFeedTyps_2.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_2_set.insert("3");
            all_values.push_back(MDFeedTyps_2_set);
            all_compo_names.insert("MDFeedTyps_2_set");

            TrdgSesRules_2.add_element(MDFeedTyps_2);
          }
          TrdgSesRulesGrp_2.add_element(TrdgSesRules_2);
        }
        SecTrdgRules_2.add_element(TrdgSesRulesGrp_2);
      }
      {
        xml_element Attrb_12{"Attrb"};
        multiset<string> Attrb_12_set;
        Attrb_12.add_attribute("Typ", "19"); // 3
        Attrb_12_set.insert("19");
        Attrb_12.add_attribute("Val", "NestedInstrAttribValue_t_916762700"); // 3
        Attrb_12_set.insert("NestedInstrAttribValue_t_916762700");
        all_values.push_back(Attrb_12_set);
        all_compo_names.insert("Attrb_12_set");

        SecTrdgRules_2.add_element(Attrb_12);
      }
      MktSegGrp_2.add_element(SecTrdgRules_2);
    }
    {
      xml_element StrkRules_2{"StrkRules"};
      multiset<string> StrkRules_2_set;
      StrkRules_2.add_attribute("StrkRule", "StrikeRuleID_t_1758920398"); // 2
      StrkRules_2_set.insert("StrikeRuleID_t_1758920398");
      StrkRules_2.add_attribute("StartStrkPxRng", "9763669.440000"); // 2
      StrkRules_2_set.insert("9763669.440000");
      StrkRules_2.add_attribute("EndStrkPxRng", "19566546.640000"); // 2
      StrkRules_2_set.insert("19566546.640000");
      StrkRules_2.add_attribute("StrkIncr", "8725203.270000"); // 2
      StrkRules_2_set.insert("8725203.270000");
      StrkRules_2.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_2_set.insert("1");
      all_values.push_back(StrkRules_2_set);
      all_compo_names.insert("StrkRules_2_set");

      {
        xml_element MatRules_2{"MatRules"};
        multiset<string> MatRules_2_set;
        MatRules_2.add_attribute("MatRuleID", "MaturityRuleID_t_2144726076"); // 3
        MatRules_2_set.insert("MaturityRuleID_t_2144726076");
        MatRules_2.add_attribute("MMYFmt", "1"); // 3
        MatRules_2_set.insert("1");
        MatRules_2.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_2_set.insert("0");
        MatRules_2.add_attribute("StartMMY", "828481990"); // 3
        MatRules_2_set.insert("828481990");
        MatRules_2.add_attribute("EndMMY", "1117339124"); // 3
        MatRules_2_set.insert("1117339124");
        MatRules_2.add_attribute("MMYIncr", "1460710957"); // 3
        MatRules_2_set.insert("1460710957");
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
    MktSegGrp_3.add_attribute("MktID", "MarketID_t_970141120"); // 1
    MktSegGrp_3_set.insert("MarketID_t_970141120");
    MktSegGrp_3.add_attribute("MktSegID", "MarketSegmentID_t_708250861"); // 1
    MktSegGrp_3_set.insert("MarketSegmentID_t_708250861");
    all_values.push_back(MktSegGrp_3_set);
    all_compo_names.insert("MktSegGrp_3_set");

    {
      xml_element SecTrdgRules_3{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_5{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_5_set;
        BaseTrdgRules_5.add_attribute("ExpirationCycle", "0"); // 3
        BaseTrdgRules_5_set.insert("0");
        BaseTrdgRules_5.add_attribute("MinTrdVol", "13179016.490000"); // 3
        BaseTrdgRules_5_set.insert("13179016.490000");
        BaseTrdgRules_5.add_attribute("MaxTrdVol", "11735433.810000"); // 3
        BaseTrdgRules_5_set.insert("11735433.810000");
        BaseTrdgRules_5.add_attribute("MxPxVar", "2355809.300000"); // 3
        BaseTrdgRules_5_set.insert("2355809.300000");
        BaseTrdgRules_5.add_attribute("ImpldMktInd", "0"); // 3
        BaseTrdgRules_5_set.insert("0");
        BaseTrdgRules_5.add_attribute("TrdCcy", "GBP"); // 3
        BaseTrdgRules_5_set.insert("GBP");
        BaseTrdgRules_5.add_attribute("RndLot", "15009064.710000"); // 3
        BaseTrdgRules_5_set.insert("15009064.710000");
        BaseTrdgRules_5.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_5_set.insert("0");
        BaseTrdgRules_5.add_attribute("MlegPxMeth", "0"); // 3
        BaseTrdgRules_5_set.insert("0");
        BaseTrdgRules_5.add_attribute("PxTyp", "19"); // 3
        BaseTrdgRules_5_set.insert("19");
        all_values.push_back(BaseTrdgRules_5_set);
        all_compo_names.insert("BaseTrdgRules_5_set");

        {
          xml_element TickRules_5{"TickRules"};
          multiset<string> TickRules_5_set;
          TickRules_5.add_attribute("StartTickPxRng", "4132556.820000"); // 4
          TickRules_5_set.insert("4132556.820000");
          TickRules_5.add_attribute("EndTickPxRng", "17243734.680000"); // 4
          TickRules_5_set.insert("17243734.680000");
          TickRules_5.add_attribute("TickIncr", "1921083.160000"); // 4
          TickRules_5_set.insert("1921083.160000");
          TickRules_5.add_attribute("TickRuleTyp", "1"); // 4
          TickRules_5_set.insert("1");
          all_values.push_back(TickRules_5_set);
          all_compo_names.insert("TickRules_5_set");

          BaseTrdgRules_5.add_element(TickRules_5);
        }
        {
          xml_element LotTypeRules_5{"LotTypeRules"};
          multiset<string> LotTypeRules_5_set;
          LotTypeRules_5.add_attribute("LotTyp", "3"); // 4
          LotTypeRules_5_set.insert("3");
          LotTypeRules_5.add_attribute("MinLotSz", "13427399.960000"); // 4
          LotTypeRules_5_set.insert("13427399.960000");
          all_values.push_back(LotTypeRules_5_set);
          all_compo_names.insert("LotTypeRules_5_set");

          BaseTrdgRules_5.add_element(LotTypeRules_5);
        }
        {
          xml_element PxLmts_5{"PxLmts"};
          multiset<string> PxLmts_5_set;
          PxLmts_5.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_5_set.insert("0");
          PxLmts_5.add_attribute("LowLmtPx", "5965988.480000"); // 4
          PxLmts_5_set.insert("5965988.480000");
          PxLmts_5.add_attribute("HiLmtPx", "1716232.930000"); // 4
          PxLmts_5_set.insert("1716232.930000");
          PxLmts_5.add_attribute("TrdgRefPx", "16874587.970000"); // 4
          PxLmts_5_set.insert("16874587.970000");
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
        TrdgSesRulesGrp_3.add_attribute("SesSub", "4"); // 3
        TrdgSesRulesGrp_3_set.insert("4");
        all_values.push_back(TrdgSesRulesGrp_3_set);
        all_compo_names.insert("TrdgSesRulesGrp_3_set");

        {
          xml_element TrdgSesRules_3{"TrdgSesRules"};
          {
            xml_element OrdTypRules_6{"OrdTypRules"};
            multiset<string> OrdTypRules_6_set;
            OrdTypRules_6.add_attribute("OrdTyp", "B"); // 5
            OrdTypRules_6_set.insert("B");
            all_values.push_back(OrdTypRules_6_set);
            all_compo_names.insert("OrdTypRules_6_set");

            TrdgSesRules_3.add_element(OrdTypRules_6);
          }
          {
            xml_element TmInForceRules_7{"TmInForceRules"};
            multiset<string> TmInForceRules_7_set;
            TmInForceRules_7.add_attribute("TmInForce", "1"); // 5
            TmInForceRules_7_set.insert("1");
            all_values.push_back(TmInForceRules_7_set);
            all_compo_names.insert("TmInForceRules_7_set");

            TrdgSesRules_3.add_element(TmInForceRules_7);
          }
          {
            xml_element ExecInstRules_7{"ExecInstRules"};
            multiset<string> ExecInstRules_7_set;
            ExecInstRules_7.add_attribute("ExecInstValu", "t"); // 5
            ExecInstRules_7_set.insert("t");
            all_values.push_back(ExecInstRules_7_set);
            all_compo_names.insert("ExecInstRules_7_set");

            TrdgSesRules_3.add_element(ExecInstRules_7);
          }
          {
            xml_element MtchRules_3{"MtchRules"};
            multiset<string> MtchRules_3_set;
            MtchRules_3.add_attribute("MtchAlgo", "MatchAlgorithm_t_365699568"); // 5
            MtchRules_3_set.insert("MatchAlgorithm_t_365699568");
            MtchRules_3.add_attribute("MtchTyp", "4"); // 5
            MtchRules_3_set.insert("4");
            all_values.push_back(MtchRules_3_set);
            all_compo_names.insert("MtchRules_3_set");

            TrdgSesRules_3.add_element(MtchRules_3);
          }
          {
            xml_element MDFeedTyps_3{"MDFeedTyps"};
            multiset<string> MDFeedTyps_3_set;
            MDFeedTyps_3.add_attribute("MDFeedTyp", "MDFeedType_t_728617900"); // 5
            MDFeedTyps_3_set.insert("MDFeedType_t_728617900");
            MDFeedTyps_3.add_attribute("MktDepth", "1335840688"); // 5
            MDFeedTyps_3_set.insert("1335840688");
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
        xml_element Attrb_13{"Attrb"};
        multiset<string> Attrb_13_set;
        Attrb_13.add_attribute("Typ", "7"); // 3
        Attrb_13_set.insert("7");
        Attrb_13.add_attribute("Val", "NestedInstrAttribValue_t_506258689"); // 3
        Attrb_13_set.insert("NestedInstrAttribValue_t_506258689");
        all_values.push_back(Attrb_13_set);
        all_compo_names.insert("Attrb_13_set");

        SecTrdgRules_3.add_element(Attrb_13);
      }
      MktSegGrp_3.add_element(SecTrdgRules_3);
    }
    {
      xml_element StrkRules_3{"StrkRules"};
      multiset<string> StrkRules_3_set;
      StrkRules_3.add_attribute("StrkRule", "StrikeRuleID_t_742024361"); // 2
      StrkRules_3_set.insert("StrikeRuleID_t_742024361");
      StrkRules_3.add_attribute("StartStrkPxRng", "13932615.390000"); // 2
      StrkRules_3_set.insert("13932615.390000");
      StrkRules_3.add_attribute("EndStrkPxRng", "19936130.340000"); // 2
      StrkRules_3_set.insert("19936130.340000");
      StrkRules_3.add_attribute("StrkIncr", "14566837.990000"); // 2
      StrkRules_3_set.insert("14566837.990000");
      StrkRules_3.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_3_set.insert("2");
      all_values.push_back(StrkRules_3_set);
      all_compo_names.insert("StrkRules_3_set");

      {
        xml_element MatRules_3{"MatRules"};
        multiset<string> MatRules_3_set;
        MatRules_3.add_attribute("MatRuleID", "MaturityRuleID_t_1347035857"); // 3
        MatRules_3_set.insert("MaturityRuleID_t_1347035857");
        MatRules_3.add_attribute("MMYFmt", "2"); // 3
        MatRules_3_set.insert("2");
        MatRules_3.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_3_set.insert("3");
        MatRules_3.add_attribute("StartMMY", "402238498"); // 3
        MatRules_3_set.insert("402238498");
        MatRules_3.add_attribute("EndMMY", "1807932492"); // 3
        MatRules_3_set.insert("1807932492");
        MatRules_3.add_attribute("MMYIncr", "454720675"); // 3
        MatRules_3_set.insert("454720675");
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
    MktSegGrp_4.add_attribute("MktID", "MarketID_t_594346814"); // 1
    MktSegGrp_4_set.insert("MarketID_t_594346814");
    MktSegGrp_4.add_attribute("MktSegID", "MarketSegmentID_t_621973925"); // 1
    MktSegGrp_4_set.insert("MarketSegmentID_t_621973925");
    all_values.push_back(MktSegGrp_4_set);
    all_compo_names.insert("MktSegGrp_4_set");

    {
      xml_element SecTrdgRules_4{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_6{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_6_set;
        BaseTrdgRules_6.add_attribute("ExpirationCycle", "1"); // 3
        BaseTrdgRules_6_set.insert("1");
        BaseTrdgRules_6.add_attribute("MinTrdVol", "19370868.110000"); // 3
        BaseTrdgRules_6_set.insert("19370868.110000");
        BaseTrdgRules_6.add_attribute("MaxTrdVol", "3527780.580000"); // 3
        BaseTrdgRules_6_set.insert("3527780.580000");
        BaseTrdgRules_6.add_attribute("MxPxVar", "20364816.210000"); // 3
        BaseTrdgRules_6_set.insert("20364816.210000");
        BaseTrdgRules_6.add_attribute("ImpldMktInd", "0"); // 3
        BaseTrdgRules_6_set.insert("0");
        BaseTrdgRules_6.add_attribute("TrdCcy", "USD"); // 3
        BaseTrdgRules_6_set.insert("USD");
        BaseTrdgRules_6.add_attribute("RndLot", "10343522.820000"); // 3
        BaseTrdgRules_6_set.insert("10343522.820000");
        BaseTrdgRules_6.add_attribute("MlegModel", "2"); // 3
        BaseTrdgRules_6_set.insert("2");
        BaseTrdgRules_6.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_6_set.insert("1");
        BaseTrdgRules_6.add_attribute("PxTyp", "2"); // 3
        BaseTrdgRules_6_set.insert("2");
        all_values.push_back(BaseTrdgRules_6_set);
        all_compo_names.insert("BaseTrdgRules_6_set");

        {
          xml_element TickRules_6{"TickRules"};
          multiset<string> TickRules_6_set;
          TickRules_6.add_attribute("StartTickPxRng", "19431540.020000"); // 4
          TickRules_6_set.insert("19431540.020000");
          TickRules_6.add_attribute("EndTickPxRng", "1087219.100000"); // 4
          TickRules_6_set.insert("1087219.100000");
          TickRules_6.add_attribute("TickIncr", "10308771.250000"); // 4
          TickRules_6_set.insert("10308771.250000");
          TickRules_6.add_attribute("TickRuleTyp", "2"); // 4
          TickRules_6_set.insert("2");
          all_values.push_back(TickRules_6_set);
          all_compo_names.insert("TickRules_6_set");

          BaseTrdgRules_6.add_element(TickRules_6);
        }
        {
          xml_element LotTypeRules_6{"LotTypeRules"};
          multiset<string> LotTypeRules_6_set;
          LotTypeRules_6.add_attribute("LotTyp", "4"); // 4
          LotTypeRules_6_set.insert("4");
          LotTypeRules_6.add_attribute("MinLotSz", "410740.860000"); // 4
          LotTypeRules_6_set.insert("410740.860000");
          all_values.push_back(LotTypeRules_6_set);
          all_compo_names.insert("LotTypeRules_6_set");

          BaseTrdgRules_6.add_element(LotTypeRules_6);
        }
        {
          xml_element PxLmts_6{"PxLmts"};
          multiset<string> PxLmts_6_set;
          PxLmts_6.add_attribute("PxLmtTyp", "2"); // 4
          PxLmts_6_set.insert("2");
          PxLmts_6.add_attribute("LowLmtPx", "4192272.520000"); // 4
          PxLmts_6_set.insert("4192272.520000");
          PxLmts_6.add_attribute("HiLmtPx", "14343356.250000"); // 4
          PxLmts_6_set.insert("14343356.250000");
          PxLmts_6.add_attribute("TrdgRefPx", "14838991.170000"); // 4
          PxLmts_6_set.insert("14838991.170000");
          all_values.push_back(PxLmts_6_set);
          all_compo_names.insert("PxLmts_6_set");

          BaseTrdgRules_6.add_element(PxLmts_6);
        }
        SecTrdgRules_4.add_element(BaseTrdgRules_6);
      }
      {
        xml_element TrdgSesRulesGrp_4{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_4_set;
        TrdgSesRulesGrp_4.add_attribute("SesID", "6"); // 3
        TrdgSesRulesGrp_4_set.insert("6");
        TrdgSesRulesGrp_4.add_attribute("SesSub", "3"); // 3
        TrdgSesRulesGrp_4_set.insert("3");
        all_values.push_back(TrdgSesRulesGrp_4_set);
        all_compo_names.insert("TrdgSesRulesGrp_4_set");

        {
          xml_element TrdgSesRules_4{"TrdgSesRules"};
          {
            xml_element OrdTypRules_7{"OrdTypRules"};
            multiset<string> OrdTypRules_7_set;
            OrdTypRules_7.add_attribute("OrdTyp", "G"); // 5
            OrdTypRules_7_set.insert("G");
            all_values.push_back(OrdTypRules_7_set);
            all_compo_names.insert("OrdTypRules_7_set");

            TrdgSesRules_4.add_element(OrdTypRules_7);
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
            xml_element ExecInstRules_8{"ExecInstRules"};
            multiset<string> ExecInstRules_8_set;
            ExecInstRules_8.add_attribute("ExecInstValu", "d"); // 5
            ExecInstRules_8_set.insert("d");
            all_values.push_back(ExecInstRules_8_set);
            all_compo_names.insert("ExecInstRules_8_set");

            TrdgSesRules_4.add_element(ExecInstRules_8);
          }
          {
            xml_element MtchRules_4{"MtchRules"};
            multiset<string> MtchRules_4_set;
            MtchRules_4.add_attribute("MtchAlgo", "MatchAlgorithm_t_1085689825"); // 5
            MtchRules_4_set.insert("MatchAlgorithm_t_1085689825");
            MtchRules_4.add_attribute("MtchTyp", "A2"); // 5
            MtchRules_4_set.insert("A2");
            all_values.push_back(MtchRules_4_set);
            all_compo_names.insert("MtchRules_4_set");

            TrdgSesRules_4.add_element(MtchRules_4);
          }
          {
            xml_element MDFeedTyps_4{"MDFeedTyps"};
            multiset<string> MDFeedTyps_4_set;
            MDFeedTyps_4.add_attribute("MDFeedTyp", "MDFeedType_t_159796059"); // 5
            MDFeedTyps_4_set.insert("MDFeedType_t_159796059");
            MDFeedTyps_4.add_attribute("MktDepth", "1680036640"); // 5
            MDFeedTyps_4_set.insert("1680036640");
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
        xml_element Attrb_14{"Attrb"};
        multiset<string> Attrb_14_set;
        Attrb_14.add_attribute("Typ", "23"); // 3
        Attrb_14_set.insert("23");
        Attrb_14.add_attribute("Val", "NestedInstrAttribValue_t_1469639803"); // 3
        Attrb_14_set.insert("NestedInstrAttribValue_t_1469639803");
        all_values.push_back(Attrb_14_set);
        all_compo_names.insert("Attrb_14_set");

        SecTrdgRules_4.add_element(Attrb_14);
      }
      MktSegGrp_4.add_element(SecTrdgRules_4);
    }
    {
      xml_element StrkRules_4{"StrkRules"};
      multiset<string> StrkRules_4_set;
      StrkRules_4.add_attribute("StrkRule", "StrikeRuleID_t_1758305040"); // 2
      StrkRules_4_set.insert("StrikeRuleID_t_1758305040");
      StrkRules_4.add_attribute("StartStrkPxRng", "14886768.060000"); // 2
      StrkRules_4_set.insert("14886768.060000");
      StrkRules_4.add_attribute("EndStrkPxRng", "14308662.590000"); // 2
      StrkRules_4_set.insert("14308662.590000");
      StrkRules_4.add_attribute("StrkIncr", "16510582.480000"); // 2
      StrkRules_4_set.insert("16510582.480000");
      StrkRules_4.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_4_set.insert("2");
      all_values.push_back(StrkRules_4_set);
      all_compo_names.insert("StrkRules_4_set");

      {
        xml_element MatRules_4{"MatRules"};
        multiset<string> MatRules_4_set;
        MatRules_4.add_attribute("MatRuleID", "MaturityRuleID_t_317734893"); // 3
        MatRules_4_set.insert("MaturityRuleID_t_317734893");
        MatRules_4.add_attribute("MMYFmt", "1"); // 3
        MatRules_4_set.insert("1");
        MatRules_4.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_4_set.insert("2");
        MatRules_4.add_attribute("StartMMY", "619994119"); // 3
        MatRules_4_set.insert("619994119");
        MatRules_4.add_attribute("EndMMY", "876699388"); // 3
        MatRules_4_set.insert("876699388");
        MatRules_4.add_attribute("MMYIncr", "2056524009"); // 3
        MatRules_4_set.insert("2056524009");
        all_values.push_back(MatRules_4_set);
        all_compo_names.insert("MatRules_4_set");

        StrkRules_4.add_element(MatRules_4);
      }
      MktSegGrp_4.add_element(StrkRules_4);
    }
    elt.add_element(MktSegGrp_4);
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
