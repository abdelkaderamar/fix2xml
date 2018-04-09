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
  elt.add_attribute("RptID", "1365960054"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("1365960054");
  elt.add_attribute("ReqID", "SecurityReqID_t_1859760909"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("SecurityReqID_t_1859760909");
  elt.add_attribute("RspID", "SecurityResponseID_t_1808891785"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("SecurityResponseID_t_1808891785");
  elt.add_attribute("RspTyp", "5"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("5");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_27623999"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("ClearingBusinessDate_t_27623999");
  elt.add_attribute("UpdActn", "M"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("M");
  elt.add_attribute("CorpActn", "U"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("U");
  elt.add_attribute("Ccy", "CHF"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("CHF");
  elt.add_attribute("Txt", "Text_t_547544350"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("Text_t_547544350");
  elt.add_attribute("EncTxtLen", "1898210233"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("1898210233");
  elt.add_attribute("EncTxt", "EncodedText_t_1251305928"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("EncodedText_t_1251305928");
  elt.add_attribute("TxnTm", "TransactTime_t_564612966"); // 0
  SecurityDefinitionUpdateReport_message_t_0.insert("TransactTime_t_564612966");
  all_values.push_back(SecurityDefinitionUpdateReport_message_t_0);
  all_compo_names.insert("SecurityDefinitionUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_82{"Hdr"};
    multiset<string> Hdr_82_set;
    Hdr_82.add_attribute("SeqNum", "558191793"); // 1
    Hdr_82_set.insert("558191793");
    Hdr_82.add_attribute("SID", "SenderCompID_t_1028935208"); // 1
    Hdr_82_set.insert("SenderCompID_t_1028935208");
    Hdr_82.add_attribute("TID", "TargetCompID_t_152496243"); // 1
    Hdr_82_set.insert("TargetCompID_t_152496243");
    Hdr_82.add_attribute("OBID", "OnBehalfOfCompID_t_2041084246"); // 1
    Hdr_82_set.insert("OnBehalfOfCompID_t_2041084246");
    Hdr_82.add_attribute("D2ID", "DeliverToCompID_t_1033933674"); // 1
    Hdr_82_set.insert("DeliverToCompID_t_1033933674");
    Hdr_82.add_attribute("SSub", "SenderSubID_t_1651065989"); // 1
    Hdr_82_set.insert("SenderSubID_t_1651065989");
    Hdr_82.add_attribute("SLoc", "SenderLocationID_t_582992560"); // 1
    Hdr_82_set.insert("SenderLocationID_t_582992560");
    Hdr_82.add_attribute("TSub", "TargetSubID_t_2135296858"); // 1
    Hdr_82_set.insert("TargetSubID_t_2135296858");
    Hdr_82.add_attribute("TLoc", "TargetLocationID_t_338181214"); // 1
    Hdr_82_set.insert("TargetLocationID_t_338181214");
    Hdr_82.add_attribute("OBSub", "OnBehalfOfSubID_t_2035034384"); // 1
    Hdr_82_set.insert("OnBehalfOfSubID_t_2035034384");
    Hdr_82.add_attribute("OBLoc", "OnBehalfOfLocationID_t_261266025"); // 1
    Hdr_82_set.insert("OnBehalfOfLocationID_t_261266025");
    Hdr_82.add_attribute("D2Sub", "DeliverToSubID_t_1032285513"); // 1
    Hdr_82_set.insert("DeliverToSubID_t_1032285513");
    Hdr_82.add_attribute("D2Loc", "DeliverToLocationID_t_1033367380"); // 1
    Hdr_82_set.insert("DeliverToLocationID_t_1033367380");
    Hdr_82.add_attribute("PosDup", "Y"); // 1
    Hdr_82_set.insert("Y");
    Hdr_82.add_attribute("PosRsnd", "Y"); // 1
    Hdr_82_set.insert("Y");
    Hdr_82.add_attribute("Snt", "SendingTime_t_1154309284"); // 1
    Hdr_82_set.insert("SendingTime_t_1154309284");
    Hdr_82.add_attribute("OrigSnt", "OrigSendingTime_t_116992238"); // 1
    Hdr_82_set.insert("OrigSendingTime_t_116992238");
    Hdr_82.add_attribute("MsgEncd", "MessageEncoding_t_22737398"); // 1
    Hdr_82_set.insert("MessageEncoding_t_22737398");
    all_values.push_back(Hdr_82_set);
    all_compo_names.insert("Hdr_82_set");

    {
      xml_element Hop_82{"Hop"};
      multiset<string> Hop_82_set;
      Hop_82.add_attribute("ID", "HopCompID_t_372785690"); // 2
      Hop_82_set.insert("HopCompID_t_372785690");
      Hop_82.add_attribute("Ref", "1976753147"); // 2
      Hop_82_set.insert("1976753147");
      Hop_82.add_attribute("Snt", "HopSendingTime_t_1831629183"); // 2
      Hop_82_set.insert("HopSendingTime_t_1831629183");
      all_values.push_back(Hop_82_set);
      all_compo_names.insert("Hop_82_set");

      Hdr_82.add_element(Hop_82);
    }
    elt.add_element(Hdr_82);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_13{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_13_set;
    ApplSeqCtrl_13.add_attribute("ApplID", "ApplID_t_1366511664"); // 1
    ApplSeqCtrl_13_set.insert("ApplID_t_1366511664");
    ApplSeqCtrl_13.add_attribute("ApplSeqNum", "2004377147"); // 1
    ApplSeqCtrl_13_set.insert("2004377147");
    ApplSeqCtrl_13.add_attribute("ApplLastSeqNum", "1492791043"); // 1
    ApplSeqCtrl_13_set.insert("1492791043");
    ApplSeqCtrl_13.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_13_set.insert("true");
    all_values.push_back(ApplSeqCtrl_13_set);
    all_compo_names.insert("ApplSeqCtrl_13_set");

    elt.add_element(ApplSeqCtrl_13);
  } // end ApplSeqCtrl
  { // Instrmt
    xml_element Instrmt_70{"Instrmt"};
    multiset<string> Instrmt_70_set;
    Instrmt_70.add_attribute("Sym", "Symbol_t_422982060"); // 1
    Instrmt_70_set.insert("Symbol_t_422982060");
    Instrmt_70.add_attribute("Sfx", "CD"); // 1
    Instrmt_70_set.insert("CD");
    Instrmt_70.add_attribute("ID", "SecurityID_t_1646532656"); // 1
    Instrmt_70_set.insert("SecurityID_t_1646532656");
    Instrmt_70.add_attribute("Src", "C"); // 1
    Instrmt_70_set.insert("C");
    Instrmt_70.add_attribute("Prod", "6"); // 1
    Instrmt_70_set.insert("6");
    Instrmt_70.add_attribute("ProdCmplx", "ProductComplex_t_63661974"); // 1
    Instrmt_70_set.insert("ProductComplex_t_63661974");
    Instrmt_70.add_attribute("SecGrp", "SecurityGroup_t_731900438"); // 1
    Instrmt_70_set.insert("SecurityGroup_t_731900438");
    Instrmt_70.add_attribute("CFI", "CFICode_t_96924464"); // 1
    Instrmt_70_set.insert("CFICode_t_96924464");
    Instrmt_70.add_attribute("SecTyp", "LOFC"); // 1
    Instrmt_70_set.insert("LOFC");
    Instrmt_70.add_attribute("SubTyp", "SecuritySubType_t_625501036"); // 1
    Instrmt_70_set.insert("SecuritySubType_t_625501036");
    Instrmt_70.add_attribute("MMY", "1130858139"); // 1
    Instrmt_70_set.insert("1130858139");
    Instrmt_70.add_attribute("MatDt", "MaturityDate_t_1867224207"); // 1
    Instrmt_70_set.insert("MaturityDate_t_1867224207");
    Instrmt_70.add_attribute("MatTm", "1208493597"); // 1
    Instrmt_70_set.insert("1208493597");
    Instrmt_70.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1118671349"); // 1
    Instrmt_70_set.insert("SettleOnOpenFlag_t_1118671349");
    Instrmt_70.add_attribute("AsgnMeth", "57921774"); // 1
    Instrmt_70_set.insert("57921774");
    Instrmt_70.add_attribute("Status", "2"); // 1
    Instrmt_70_set.insert("2");
    Instrmt_70.add_attribute("CpnPmt", "CouponPaymentDate_t_1379937374"); // 1
    Instrmt_70_set.insert("CouponPaymentDate_t_1379937374");
    Instrmt_70.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_70_set.insert("XR");
    Instrmt_70.add_attribute("Snrty", "SR"); // 1
    Instrmt_70_set.insert("SR");
    Instrmt_70.add_attribute("NotlPctOut", "17457555.750000"); // 1
    Instrmt_70_set.insert("17457555.750000");
    Instrmt_70.add_attribute("OrigNotlPctOut", "8840130.940000"); // 1
    Instrmt_70_set.insert("8840130.940000");
    Instrmt_70.add_attribute("AttchPnt", "11362373.490000"); // 1
    Instrmt_70_set.insert("11362373.490000");
    Instrmt_70.add_attribute("DetchPnt", "18627478.130000"); // 1
    Instrmt_70_set.insert("18627478.130000");
    Instrmt_70.add_attribute("Issued", "IssueDate_t_906750493"); // 1
    Instrmt_70_set.insert("IssueDate_t_906750493");
    Instrmt_70.add_attribute("RepoCollSecTyp", "1509023040"); // 1
    Instrmt_70_set.insert("1509023040");
    Instrmt_70.add_attribute("RepoTrm", "1692017313"); // 1
    Instrmt_70_set.insert("1692017313");
    Instrmt_70.add_attribute("RepoRt", "5908960.280000"); // 1
    Instrmt_70_set.insert("5908960.280000");
    Instrmt_70.add_attribute("Fctr", "7280510.560000"); // 1
    Instrmt_70_set.insert("7280510.560000");
    Instrmt_70.add_attribute("CrdRtg", "CreditRating_t_1548910812"); // 1
    Instrmt_70_set.insert("CreditRating_t_1548910812");
    Instrmt_70.add_attribute("Rgstry", "InstrRegistry_t_2083687071"); // 1
    Instrmt_70_set.insert("InstrRegistry_t_2083687071");
    Instrmt_70.add_attribute("IssuCtry", "1827039362"); // 1
    Instrmt_70_set.insert("1827039362");
    Instrmt_70.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1971892872"); // 1
    Instrmt_70_set.insert("StateOrProvinceOfIssue_t_1971892872");
    Instrmt_70.add_attribute("Lcl", "LocaleOfIssue_t_2047854048"); // 1
    Instrmt_70_set.insert("LocaleOfIssue_t_2047854048");
    Instrmt_70.add_attribute("Redeem", "RedemptionDate_t_1326088370"); // 1
    Instrmt_70_set.insert("RedemptionDate_t_1326088370");
    Instrmt_70.add_attribute("StrkPx", "21456015.170000"); // 1
    Instrmt_70_set.insert("21456015.170000");
    Instrmt_70.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_70_set.insert("CHF");
    Instrmt_70.add_attribute("StrkMult", "7300183.070000"); // 1
    Instrmt_70_set.insert("7300183.070000");
    Instrmt_70.add_attribute("StrkValu", "12127677.690000"); // 1
    Instrmt_70_set.insert("12127677.690000");
    Instrmt_70.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_70_set.insert("4");
    Instrmt_70.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_70_set.insert("4");
    Instrmt_70.add_attribute("StrkPxBndryPrcsn", "1961422.600000"); // 1
    Instrmt_70_set.insert("1961422.600000");
    Instrmt_70.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_70_set.insert("3");
    Instrmt_70.add_attribute("OptAt", "416529292"); // 1
    Instrmt_70_set.insert("416529292");
    Instrmt_70.add_attribute("Mult", "13148136.090000"); // 1
    Instrmt_70_set.insert("13148136.090000");
    Instrmt_70.add_attribute("MultTyp", "2"); // 1
    Instrmt_70_set.insert("2");
    Instrmt_70.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_70_set.insert("0");
    Instrmt_70.add_attribute("MinPxIncr", "5472673.360000"); // 1
    Instrmt_70_set.insert("5472673.360000");
    Instrmt_70.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_326294535"); // 1
    Instrmt_70_set.insert("MinPriceIncrementAmount_t_326294535");
    Instrmt_70.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_70_set.insert("MMbbl");
    Instrmt_70.add_attribute("UOMQty", "1455392.630000"); // 1
    Instrmt_70_set.insert("1455392.630000");
    Instrmt_70.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_70_set.insert("Alw");
    Instrmt_70.add_attribute("PxUOMQty", "4832553.920000"); // 1
    Instrmt_70_set.insert("4832553.920000");
    Instrmt_70.add_attribute("SettlMeth", "P"); // 1
    Instrmt_70_set.insert("P");
    Instrmt_70.add_attribute("ExerStyle", "0"); // 1
    Instrmt_70_set.insert("0");
    Instrmt_70.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_70_set.insert("3");
    Instrmt_70.add_attribute("OptPayAmt", "OptPayoutAmount_t_1552820742"); // 1
    Instrmt_70_set.insert("OptPayoutAmount_t_1552820742");
    Instrmt_70.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_70_set.insert("PCTPAR");
    Instrmt_70.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_70_set.insert("EQTY");
    Instrmt_70.add_attribute("ListMeth", "0"); // 1
    Instrmt_70_set.insert("0");
    Instrmt_70.add_attribute("CapPx", "4966739.270000"); // 1
    Instrmt_70_set.insert("4966739.270000");
    Instrmt_70.add_attribute("FlrPx", "2524015.550000"); // 1
    Instrmt_70_set.insert("2524015.550000");
    Instrmt_70.add_attribute("PutCall", "0"); // 1
    Instrmt_70_set.insert("0");
    Instrmt_70.add_attribute("FlexInd", "false"); // 1
    Instrmt_70_set.insert("false");
    Instrmt_70.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_70_set.insert("false");
    Instrmt_70.add_attribute("TmUnit", "S"); // 1
    Instrmt_70_set.insert("S");
    Instrmt_70.add_attribute("CpnRt", "15128876.310000"); // 1
    Instrmt_70_set.insert("15128876.310000");
    Instrmt_70.add_attribute("Exch", "SecurityExchange_t_820756622"); // 1
    Instrmt_70_set.insert("SecurityExchange_t_820756622");
    Instrmt_70.add_attribute("PosLmt", "1506793306"); // 1
    Instrmt_70_set.insert("1506793306");
    Instrmt_70.add_attribute("NTPosLmt", "578171752"); // 1
    Instrmt_70_set.insert("578171752");
    Instrmt_70.add_attribute("Issr", "Issuer_t_279181537"); // 1
    Instrmt_70_set.insert("Issuer_t_279181537");
    Instrmt_70.add_attribute("EncIssrLen", "714829001"); // 1
    Instrmt_70_set.insert("714829001");
    Instrmt_70.add_attribute("EncIssr", "EncodedIssuer_t_774314012"); // 1
    Instrmt_70_set.insert("EncodedIssuer_t_774314012");
    Instrmt_70.add_attribute("Desc", "SecurityDesc_t_1604830660"); // 1
    Instrmt_70_set.insert("SecurityDesc_t_1604830660");
    Instrmt_70.add_attribute("EncSecDescLen", "1131358294"); // 1
    Instrmt_70_set.insert("1131358294");
    Instrmt_70.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2089127622"); // 1
    Instrmt_70_set.insert("EncodedSecurityDesc_t_2089127622");
    Instrmt_70.add_attribute("Pool", "Pool_t_840917908"); // 1
    Instrmt_70_set.insert("Pool_t_840917908");
    Instrmt_70.add_attribute("CSetMo", "496448271"); // 1
    Instrmt_70_set.insert("496448271");
    Instrmt_70.add_attribute("CPPgm", "99"); // 1
    Instrmt_70_set.insert("99");
    Instrmt_70.add_attribute("CPRegT", "CPRegType_t_1167212444"); // 1
    Instrmt_70_set.insert("CPRegType_t_1167212444");
    Instrmt_70.add_attribute("Dated", "DatedDate_t_1990949962"); // 1
    Instrmt_70_set.insert("DatedDate_t_1990949962");
    Instrmt_70.add_attribute("IntAcrl", "InterestAccrualDate_t_634450573"); // 1
    Instrmt_70_set.insert("InterestAccrualDate_t_634450573");
    all_values.push_back(Instrmt_70_set);
    all_compo_names.insert("Instrmt_70_set");

    {
      xml_element AID_73{"AID"};
      multiset<string> AID_73_set;
      AID_73.add_attribute("AltID", "SecurityAltID_t_230036426"); // 2
      AID_73_set.insert("SecurityAltID_t_230036426");
      AID_73.add_attribute("AltIDSrc", "F"); // 2
      AID_73_set.insert("F");
      all_values.push_back(AID_73_set);
      all_compo_names.insert("AID_73_set");

      Instrmt_70.add_element(AID_73);
    }
    {
      xml_element SecXML_73{"SecXML"};
      multiset<string> SecXML_73_set;
      SecXML_73.add_attribute("Schema", "SecurityXMLSchema_t_495254002"); // 2
      SecXML_73_set.insert("SecurityXMLSchema_t_495254002");
      all_values.push_back(SecXML_73_set);
      all_compo_names.insert("SecXML_73_set");

      Instrmt_70.add_element(SecXML_73);
    }
    {
      xml_element Evnt_73{"Evnt"};
      multiset<string> Evnt_73_set;
      Evnt_73.add_attribute("EventTyp", "2"); // 2
      Evnt_73_set.insert("2");
      Evnt_73.add_attribute("Dt", "EventDate_t_171516490"); // 2
      Evnt_73_set.insert("EventDate_t_171516490");
      Evnt_73.add_attribute("Tm", "EventTime_t_2048074744"); // 2
      Evnt_73_set.insert("EventTime_t_2048074744");
      Evnt_73.add_attribute("Px", "7600814.040000"); // 2
      Evnt_73_set.insert("7600814.040000");
      Evnt_73.add_attribute("Txt", "EventText_t_744362330"); // 2
      Evnt_73_set.insert("EventText_t_744362330");
      all_values.push_back(Evnt_73_set);
      all_compo_names.insert("Evnt_73_set");

      Instrmt_70.add_element(Evnt_73);
    }
    {
      xml_element Pty_373{"Pty"};
      multiset<string> Pty_373_set;
      Pty_373.add_attribute("ID", "InstrumentPartyID_t_854839002"); // 2
      Pty_373_set.insert("InstrumentPartyID_t_854839002");
      Pty_373.add_attribute("Src", "C"); // 2
      Pty_373_set.insert("C");
      Pty_373.add_attribute("R", "63"); // 2
      Pty_373_set.insert("63");
      all_values.push_back(Pty_373_set);
      all_compo_names.insert("Pty_373_set");

      {
        xml_element Sub_373{"Sub"};
        multiset<string> Sub_373_set;
        Sub_373.add_attribute("ID", "InstrumentPartySubID_t_1633496132"); // 3
        Sub_373_set.insert("InstrumentPartySubID_t_1633496132");
        Sub_373.add_attribute("Typ", "14"); // 3
        Sub_373_set.insert("14");
        all_values.push_back(Sub_373_set);
        all_compo_names.insert("Sub_373_set");

        Pty_373.add_element(Sub_373);
      }
      Instrmt_70.add_element(Pty_373);
    }
    {
      xml_element CmplxEvnt_70{"CmplxEvnt"};
      multiset<string> CmplxEvnt_70_set;
      CmplxEvnt_70.add_attribute("Typ", "2"); // 2
      CmplxEvnt_70_set.insert("2");
      CmplxEvnt_70.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_262787483"); // 2
      CmplxEvnt_70_set.insert("ComplexOptPayoutAmount_t_262787483");
      CmplxEvnt_70.add_attribute("Px", "10192036.420000"); // 2
      CmplxEvnt_70_set.insert("10192036.420000");
      CmplxEvnt_70.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_70_set.insert("1");
      CmplxEvnt_70.add_attribute("PxBndryPrcsn", "17695807.890000"); // 2
      CmplxEvnt_70_set.insert("17695807.890000");
      CmplxEvnt_70.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_70_set.insert("3");
      CmplxEvnt_70.add_attribute("Cond", "2"); // 2
      CmplxEvnt_70_set.insert("2");
      all_values.push_back(CmplxEvnt_70_set);
      all_compo_names.insert("CmplxEvnt_70_set");

      {
        xml_element EvntDts_70{"EvntDts"};
        multiset<string> EvntDts_70_set;
        EvntDts_70.add_attribute("StartDt", "ComplexEventStartDate_t_336926143"); // 3
        EvntDts_70_set.insert("ComplexEventStartDate_t_336926143");
        EvntDts_70.add_attribute("EndDt", "ComplexEventEndDate_t_224205759"); // 3
        EvntDts_70_set.insert("ComplexEventEndDate_t_224205759");
        all_values.push_back(EvntDts_70_set);
        all_compo_names.insert("EvntDts_70_set");

        {
          xml_element EvntTms_70{"EvntTms"};
          multiset<string> EvntTms_70_set;
          EvntTms_70.add_attribute("StartTm", "985055335"); // 4
          EvntTms_70_set.insert("985055335");
          EvntTms_70.add_attribute("EndTm", "1468284437"); // 4
          EvntTms_70_set.insert("1468284437");
          all_values.push_back(EvntTms_70_set);
          all_compo_names.insert("EvntTms_70_set");

          EvntDts_70.add_element(EvntTms_70);
        }
        CmplxEvnt_70.add_element(EvntDts_70);
      }
      Instrmt_70.add_element(CmplxEvnt_70);
    }
    elt.add_element(Instrmt_70);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_9{"InstrmtExt"};
    multiset<string> InstrmtExt_9_set;
    InstrmtExt_9.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_9_set.insert("2");
    InstrmtExt_9.add_attribute("PctAtRisk", "18259732.430000"); // 1
    InstrmtExt_9_set.insert("18259732.430000");
    all_values.push_back(InstrmtExt_9_set);
    all_compo_names.insert("InstrmtExt_9_set");

    {
      xml_element Attrb_16{"Attrb"};
      multiset<string> Attrb_16_set;
      Attrb_16.add_attribute("Typ", "17"); // 2
      Attrb_16_set.insert("17");
      Attrb_16.add_attribute("Val", "InstrAttribValue_t_654761043"); // 2
      Attrb_16_set.insert("InstrAttribValue_t_654761043");
      all_values.push_back(Attrb_16_set);
      all_compo_names.insert("Attrb_16_set");

      InstrmtExt_9.add_element(Attrb_16);
    }
    elt.add_element(InstrmtExt_9);
  } // end InstrmtExt
  { // Undly
    xml_element Undly_100{"Undly"};
    multiset<string> Undly_100_set;
    Undly_100.add_attribute("Sym", "UnderlyingSymbol_t_1808199022"); // 1
    Undly_100_set.insert("UnderlyingSymbol_t_1808199022");
    Undly_100.add_attribute("Sfx", "CD"); // 1
    Undly_100_set.insert("CD");
    Undly_100.add_attribute("ID", "UnderlyingSecurityID_t_1075738465"); // 1
    Undly_100_set.insert("UnderlyingSecurityID_t_1075738465");
    Undly_100.add_attribute("Src", "7"); // 1
    Undly_100_set.insert("7");
    Undly_100.add_attribute("Prod", "10"); // 1
    Undly_100_set.insert("10");
    Undly_100.add_attribute("CFI", "UnderlyingCFICode_t_1275349366"); // 1
    Undly_100_set.insert("UnderlyingCFICode_t_1275349366");
    Undly_100.add_attribute("SecTyp", "CPP"); // 1
    Undly_100_set.insert("CPP");
    Undly_100.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1685056715"); // 1
    Undly_100_set.insert("UnderlyingSecuritySubType_t_1685056715");
    Undly_100.add_attribute("MMY", "2035430771"); // 1
    Undly_100_set.insert("2035430771");
    Undly_100.add_attribute("Mat", "UnderlyingMaturityDate_t_903315901"); // 1
    Undly_100_set.insert("UnderlyingMaturityDate_t_903315901");
    Undly_100.add_attribute("MatTm", "392412070"); // 1
    Undly_100_set.insert("392412070");
    Undly_100.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1144702454"); // 1
    Undly_100_set.insert("UnderlyingCouponPaymentDate_t_1144702454");
    Undly_100.add_attribute("RestrctTyp", "MM"); // 1
    Undly_100_set.insert("MM");
    Undly_100.add_attribute("Snrty", "SD"); // 1
    Undly_100_set.insert("SD");
    Undly_100.add_attribute("NotlPctOut", "6510184.650000"); // 1
    Undly_100_set.insert("6510184.650000");
    Undly_100.add_attribute("OrigNotlPctOut", "1803663.010000"); // 1
    Undly_100_set.insert("1803663.010000");
    Undly_100.add_attribute("AttchPnt", "1412120.380000"); // 1
    Undly_100_set.insert("1412120.380000");
    Undly_100.add_attribute("DetchPnt", "16702221.070000"); // 1
    Undly_100_set.insert("16702221.070000");
    Undly_100.add_attribute("Issued", "UnderlyingIssueDate_t_1428893087"); // 1
    Undly_100_set.insert("UnderlyingIssueDate_t_1428893087");
    Undly_100.add_attribute("RepoCollSecTyp", "1910792827"); // 1
    Undly_100_set.insert("1910792827");
    Undly_100.add_attribute("RepoTrm", "1120113853"); // 1
    Undly_100_set.insert("1120113853");
    Undly_100.add_attribute("RepoRt", "8091177.620000"); // 1
    Undly_100_set.insert("8091177.620000");
    Undly_100.add_attribute("Fctr", "1002353.220000"); // 1
    Undly_100_set.insert("1002353.220000");
    Undly_100.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1344319612"); // 1
    Undly_100_set.insert("UnderlyingCreditRating_t_1344319612");
    Undly_100.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1794173097"); // 1
    Undly_100_set.insert("UnderlyingInstrRegistry_t_1794173097");
    Undly_100.add_attribute("Ctry", "1568519759"); // 1
    Undly_100_set.insert("1568519759");
    Undly_100.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1510169345"); // 1
    Undly_100_set.insert("UnderlyingStateOrProvinceOfIssue_t_1510169345");
    Undly_100.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1472662692"); // 1
    Undly_100_set.insert("UnderlyingLocaleOfIssue_t_1472662692");
    Undly_100.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1385768820"); // 1
    Undly_100_set.insert("UnderlyingRedemptionDate_t_1385768820");
    Undly_100.add_attribute("StrkPx", "174467.400000"); // 1
    Undly_100_set.insert("174467.400000");
    Undly_100.add_attribute("StrkCcy", "GBP"); // 1
    Undly_100_set.insert("GBP");
    Undly_100.add_attribute("OptA", "1306658357"); // 1
    Undly_100_set.insert("1306658357");
    Undly_100.add_attribute("Mult", "12466195.490000"); // 1
    Undly_100_set.insert("12466195.490000");
    Undly_100.add_attribute("MultTyp", "0"); // 1
    Undly_100_set.insert("0");
    Undly_100.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_100_set.insert("3");
    Undly_100.add_attribute("UOM", "MMBtu"); // 1
    Undly_100_set.insert("MMBtu");
    Undly_100.add_attribute("UOMQty", "11928748.450000"); // 1
    Undly_100_set.insert("11928748.450000");
    Undly_100.add_attribute("PxUOM", "MWh"); // 1
    Undly_100_set.insert("MWh");
    Undly_100.add_attribute("PxUOMQty", "2624323.910000"); // 1
    Undly_100_set.insert("2624323.910000");
    Undly_100.add_attribute("TmUnit", "Yr"); // 1
    Undly_100_set.insert("Yr");
    Undly_100.add_attribute("ExerStyle", "1"); // 1
    Undly_100_set.insert("1");
    Undly_100.add_attribute("CpnRt", "14071348.450000"); // 1
    Undly_100_set.insert("14071348.450000");
    Undly_100.add_attribute("Exch", "UnderlyingSecurityExchange_t_1848786885"); // 1
    Undly_100_set.insert("UnderlyingSecurityExchange_t_1848786885");
    Undly_100.add_attribute("Issr", "UnderlyingIssuer_t_752050020"); // 1
    Undly_100_set.insert("UnderlyingIssuer_t_752050020");
    Undly_100.add_attribute("EncUndIssrLen", "2058153310"); // 1
    Undly_100_set.insert("2058153310");
    Undly_100.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2029153186"); // 1
    Undly_100_set.insert("EncodedUnderlyingIssuer_t_2029153186");
    Undly_100.add_attribute("Desc", "UnderlyingSecurityDesc_t_893262058"); // 1
    Undly_100_set.insert("UnderlyingSecurityDesc_t_893262058");
    Undly_100.add_attribute("EncUndSecDescLen", "1580891769"); // 1
    Undly_100_set.insert("1580891769");
    Undly_100.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1310562625"); // 1
    Undly_100_set.insert("EncodedUnderlyingSecurityDesc_t_1310562625");
    Undly_100.add_attribute("CPPgm", "UnderlyingCPProgram_t_656571237"); // 1
    Undly_100_set.insert("UnderlyingCPProgram_t_656571237");
    Undly_100.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_553521975"); // 1
    Undly_100_set.insert("UnderlyingCPRegType_t_553521975");
    Undly_100.add_attribute("AllocPct", "21196803.870000"); // 1
    Undly_100_set.insert("21196803.870000");
    Undly_100.add_attribute("Ccy", "EUR"); // 1
    Undly_100_set.insert("EUR");
    Undly_100.add_attribute("Qty", "17663698.360000"); // 1
    Undly_100_set.insert("17663698.360000");
    Undly_100.add_attribute("SettlTyp", "4"); // 1
    Undly_100_set.insert("4");
    Undly_100.add_attribute("CashAmt", "UnderlyingCashAmount_t_1260527285"); // 1
    Undly_100_set.insert("UnderlyingCashAmount_t_1260527285");
    Undly_100.add_attribute("CashTyp", "DIFF"); // 1
    Undly_100_set.insert("DIFF");
    Undly_100.add_attribute("Px", "15636114.910000"); // 1
    Undly_100_set.insert("15636114.910000");
    Undly_100.add_attribute("DirtPx", "12779740.250000"); // 1
    Undly_100_set.insert("12779740.250000");
    Undly_100.add_attribute("EndPx", "12624299.650000"); // 1
    Undly_100_set.insert("12624299.650000");
    Undly_100.add_attribute("StartVal", "UnderlyingStartValue_t_462612038"); // 1
    Undly_100_set.insert("UnderlyingStartValue_t_462612038");
    Undly_100.add_attribute("CurVal", "UnderlyingCurrentValue_t_437148734"); // 1
    Undly_100_set.insert("UnderlyingCurrentValue_t_437148734");
    Undly_100.add_attribute("EndVal", "UnderlyingEndValue_t_361565866"); // 1
    Undly_100_set.insert("UnderlyingEndValue_t_361565866");
    Undly_100.add_attribute("AdjQty", "14965333.130000"); // 1
    Undly_100_set.insert("14965333.130000");
    Undly_100.add_attribute("FxRate", "13807890.620000"); // 1
    Undly_100_set.insert("13807890.620000");
    Undly_100.add_attribute("FxRateCalc", "M"); // 1
    Undly_100_set.insert("M");
    Undly_100.add_attribute("CapValu", "UnderlyingCapValue_t_541924510"); // 1
    Undly_100_set.insert("UnderlyingCapValue_t_541924510");
    Undly_100.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1862002458"); // 1
    Undly_100_set.insert("UnderlyingSettlMethod_t_1862002458");
    Undly_100.add_attribute("PutCall", "998483525"); // 1
    Undly_100_set.insert("998483525");
    all_values.push_back(Undly_100_set);
    all_compo_names.insert("Undly_100_set");

    {
      xml_element UndAID_100{"UndAID"};
      multiset<string> UndAID_100_set;
      UndAID_100.add_attribute("AltID", "UnderlyingSecurityAltID_t_490631609"); // 2
      UndAID_100_set.insert("UnderlyingSecurityAltID_t_490631609");
      UndAID_100.add_attribute("AltIDSrc", "G"); // 2
      UndAID_100_set.insert("G");
      all_values.push_back(UndAID_100_set);
      all_compo_names.insert("UndAID_100_set");

      Undly_100.add_element(UndAID_100);
    }
    {
      xml_element Stip_158{"Stip"};
      multiset<string> Stip_158_set;
      Stip_158.add_attribute("Typ", "BANKQUAL"); // 2
      Stip_158_set.insert("BANKQUAL");
      Stip_158.add_attribute("Val", "UnderlyingStipValue_t_191934846"); // 2
      Stip_158_set.insert("UnderlyingStipValue_t_191934846");
      all_values.push_back(Stip_158_set);
      all_compo_names.insert("Stip_158_set");

      Undly_100.add_element(Stip_158);
    }
    {
      xml_element Pty_374{"Pty"};
      multiset<string> Pty_374_set;
      Pty_374.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1340194295"); // 2
      Pty_374_set.insert("UnderlyingInstrumentPartyID_t_1340194295");
      Pty_374.add_attribute("Src", "8"); // 2
      Pty_374_set.insert("8");
      Pty_374.add_attribute("R", "59"); // 2
      Pty_374_set.insert("59");
      all_values.push_back(Pty_374_set);
      all_compo_names.insert("Pty_374_set");

      {
        xml_element Sub_374{"Sub"};
        multiset<string> Sub_374_set;
        Sub_374.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_85972705"); // 3
        Sub_374_set.insert("UnderlyingInstrumentPartySubID_t_85972705");
        Sub_374.add_attribute("Typ", "4"); // 3
        Sub_374_set.insert("4");
        all_values.push_back(Sub_374_set);
        all_compo_names.insert("Sub_374_set");

        Pty_374.add_element(Sub_374);
      }
      Undly_100.add_element(Pty_374);
    }
    elt.add_element(Undly_100);
  } // end Undly
  { // Undly
    xml_element Undly_101{"Undly"};
    multiset<string> Undly_101_set;
    Undly_101.add_attribute("Sym", "UnderlyingSymbol_t_1384167010"); // 1
    Undly_101_set.insert("UnderlyingSymbol_t_1384167010");
    Undly_101.add_attribute("Sfx", "WI"); // 1
    Undly_101_set.insert("WI");
    Undly_101.add_attribute("ID", "UnderlyingSecurityID_t_155734482"); // 1
    Undly_101_set.insert("UnderlyingSecurityID_t_155734482");
    Undly_101.add_attribute("Src", "G"); // 1
    Undly_101_set.insert("G");
    Undly_101.add_attribute("Prod", "10"); // 1
    Undly_101_set.insert("10");
    Undly_101.add_attribute("CFI", "UnderlyingCFICode_t_2053576069"); // 1
    Undly_101_set.insert("UnderlyingCFICode_t_2053576069");
    Undly_101.add_attribute("SecTyp", "FXFWD"); // 1
    Undly_101_set.insert("FXFWD");
    Undly_101.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1677193174"); // 1
    Undly_101_set.insert("UnderlyingSecuritySubType_t_1677193174");
    Undly_101.add_attribute("MMY", "1166619706"); // 1
    Undly_101_set.insert("1166619706");
    Undly_101.add_attribute("Mat", "UnderlyingMaturityDate_t_2066798819"); // 1
    Undly_101_set.insert("UnderlyingMaturityDate_t_2066798819");
    Undly_101.add_attribute("MatTm", "1093321018"); // 1
    Undly_101_set.insert("1093321018");
    Undly_101.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_297110084"); // 1
    Undly_101_set.insert("UnderlyingCouponPaymentDate_t_297110084");
    Undly_101.add_attribute("RestrctTyp", "FR"); // 1
    Undly_101_set.insert("FR");
    Undly_101.add_attribute("Snrty", "SD"); // 1
    Undly_101_set.insert("SD");
    Undly_101.add_attribute("NotlPctOut", "7342588.180000"); // 1
    Undly_101_set.insert("7342588.180000");
    Undly_101.add_attribute("OrigNotlPctOut", "15433110.020000"); // 1
    Undly_101_set.insert("15433110.020000");
    Undly_101.add_attribute("AttchPnt", "9049827.210000"); // 1
    Undly_101_set.insert("9049827.210000");
    Undly_101.add_attribute("DetchPnt", "21150478.810000"); // 1
    Undly_101_set.insert("21150478.810000");
    Undly_101.add_attribute("Issued", "UnderlyingIssueDate_t_131878489"); // 1
    Undly_101_set.insert("UnderlyingIssueDate_t_131878489");
    Undly_101.add_attribute("RepoCollSecTyp", "1446907231"); // 1
    Undly_101_set.insert("1446907231");
    Undly_101.add_attribute("RepoTrm", "1829566691"); // 1
    Undly_101_set.insert("1829566691");
    Undly_101.add_attribute("RepoRt", "11303620.140000"); // 1
    Undly_101_set.insert("11303620.140000");
    Undly_101.add_attribute("Fctr", "19375388.400000"); // 1
    Undly_101_set.insert("19375388.400000");
    Undly_101.add_attribute("CrdRtg", "UnderlyingCreditRating_t_270227318"); // 1
    Undly_101_set.insert("UnderlyingCreditRating_t_270227318");
    Undly_101.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1388496737"); // 1
    Undly_101_set.insert("UnderlyingInstrRegistry_t_1388496737");
    Undly_101.add_attribute("Ctry", "2129473686"); // 1
    Undly_101_set.insert("2129473686");
    Undly_101.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1610421614"); // 1
    Undly_101_set.insert("UnderlyingStateOrProvinceOfIssue_t_1610421614");
    Undly_101.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1557301123"); // 1
    Undly_101_set.insert("UnderlyingLocaleOfIssue_t_1557301123");
    Undly_101.add_attribute("Redeem", "UnderlyingRedemptionDate_t_55594423"); // 1
    Undly_101_set.insert("UnderlyingRedemptionDate_t_55594423");
    Undly_101.add_attribute("StrkPx", "16963943.190000"); // 1
    Undly_101_set.insert("16963943.190000");
    Undly_101.add_attribute("StrkCcy", "CAN"); // 1
    Undly_101_set.insert("CAN");
    Undly_101.add_attribute("OptA", "291454614"); // 1
    Undly_101_set.insert("291454614");
    Undly_101.add_attribute("Mult", "13152481.120000"); // 1
    Undly_101_set.insert("13152481.120000");
    Undly_101.add_attribute("MultTyp", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("UOM", "Bcf"); // 1
    Undly_101_set.insert("Bcf");
    Undly_101.add_attribute("UOMQty", "16238914.720000"); // 1
    Undly_101_set.insert("16238914.720000");
    Undly_101.add_attribute("PxUOM", "lbs"); // 1
    Undly_101_set.insert("lbs");
    Undly_101.add_attribute("PxUOMQty", "2404765.920000"); // 1
    Undly_101_set.insert("2404765.920000");
    Undly_101.add_attribute("TmUnit", "Yr"); // 1
    Undly_101_set.insert("Yr");
    Undly_101.add_attribute("ExerStyle", "2"); // 1
    Undly_101_set.insert("2");
    Undly_101.add_attribute("CpnRt", "5375866.760000"); // 1
    Undly_101_set.insert("5375866.760000");
    Undly_101.add_attribute("Exch", "UnderlyingSecurityExchange_t_577468131"); // 1
    Undly_101_set.insert("UnderlyingSecurityExchange_t_577468131");
    Undly_101.add_attribute("Issr", "UnderlyingIssuer_t_1822285070"); // 1
    Undly_101_set.insert("UnderlyingIssuer_t_1822285070");
    Undly_101.add_attribute("EncUndIssrLen", "1271845494"); // 1
    Undly_101_set.insert("1271845494");
    Undly_101.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2120779134"); // 1
    Undly_101_set.insert("EncodedUnderlyingIssuer_t_2120779134");
    Undly_101.add_attribute("Desc", "UnderlyingSecurityDesc_t_579784143"); // 1
    Undly_101_set.insert("UnderlyingSecurityDesc_t_579784143");
    Undly_101.add_attribute("EncUndSecDescLen", "1239409727"); // 1
    Undly_101_set.insert("1239409727");
    Undly_101.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_105173975"); // 1
    Undly_101_set.insert("EncodedUnderlyingSecurityDesc_t_105173975");
    Undly_101.add_attribute("CPPgm", "UnderlyingCPProgram_t_2026691374"); // 1
    Undly_101_set.insert("UnderlyingCPProgram_t_2026691374");
    Undly_101.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_921492770"); // 1
    Undly_101_set.insert("UnderlyingCPRegType_t_921492770");
    Undly_101.add_attribute("AllocPct", "12355359.890000"); // 1
    Undly_101_set.insert("12355359.890000");
    Undly_101.add_attribute("Ccy", "CAN"); // 1
    Undly_101_set.insert("CAN");
    Undly_101.add_attribute("Qty", "4765490.790000"); // 1
    Undly_101_set.insert("4765490.790000");
    Undly_101.add_attribute("SettlTyp", "4"); // 1
    Undly_101_set.insert("4");
    Undly_101.add_attribute("CashAmt", "UnderlyingCashAmount_t_654658055"); // 1
    Undly_101_set.insert("UnderlyingCashAmount_t_654658055");
    Undly_101.add_attribute("CashTyp", "FIXED"); // 1
    Undly_101_set.insert("FIXED");
    Undly_101.add_attribute("Px", "18543310.280000"); // 1
    Undly_101_set.insert("18543310.280000");
    Undly_101.add_attribute("DirtPx", "2035687.260000"); // 1
    Undly_101_set.insert("2035687.260000");
    Undly_101.add_attribute("EndPx", "10458801.840000"); // 1
    Undly_101_set.insert("10458801.840000");
    Undly_101.add_attribute("StartVal", "UnderlyingStartValue_t_1146608813"); // 1
    Undly_101_set.insert("UnderlyingStartValue_t_1146608813");
    Undly_101.add_attribute("CurVal", "UnderlyingCurrentValue_t_495023341"); // 1
    Undly_101_set.insert("UnderlyingCurrentValue_t_495023341");
    Undly_101.add_attribute("EndVal", "UnderlyingEndValue_t_213644648"); // 1
    Undly_101_set.insert("UnderlyingEndValue_t_213644648");
    Undly_101.add_attribute("AdjQty", "17952503.480000"); // 1
    Undly_101_set.insert("17952503.480000");
    Undly_101.add_attribute("FxRate", "1383448.100000"); // 1
    Undly_101_set.insert("1383448.100000");
    Undly_101.add_attribute("FxRateCalc", "D"); // 1
    Undly_101_set.insert("D");
    Undly_101.add_attribute("CapValu", "UnderlyingCapValue_t_1271658172"); // 1
    Undly_101_set.insert("UnderlyingCapValue_t_1271658172");
    Undly_101.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1458859454"); // 1
    Undly_101_set.insert("UnderlyingSettlMethod_t_1458859454");
    Undly_101.add_attribute("PutCall", "1675461773"); // 1
    Undly_101_set.insert("1675461773");
    all_values.push_back(Undly_101_set);
    all_compo_names.insert("Undly_101_set");

    {
      xml_element UndAID_101{"UndAID"};
      multiset<string> UndAID_101_set;
      UndAID_101.add_attribute("AltID", "UnderlyingSecurityAltID_t_667381168"); // 2
      UndAID_101_set.insert("UnderlyingSecurityAltID_t_667381168");
      UndAID_101.add_attribute("AltIDSrc", "3"); // 2
      UndAID_101_set.insert("3");
      all_values.push_back(UndAID_101_set);
      all_compo_names.insert("UndAID_101_set");

      Undly_101.add_element(UndAID_101);
    }
    {
      xml_element Stip_159{"Stip"};
      multiset<string> Stip_159_set;
      Stip_159.add_attribute("Typ", "AMT"); // 2
      Stip_159_set.insert("AMT");
      Stip_159.add_attribute("Val", "UnderlyingStipValue_t_1244849299"); // 2
      Stip_159_set.insert("UnderlyingStipValue_t_1244849299");
      all_values.push_back(Stip_159_set);
      all_compo_names.insert("Stip_159_set");

      Undly_101.add_element(Stip_159);
    }
    {
      xml_element Pty_375{"Pty"};
      multiset<string> Pty_375_set;
      Pty_375.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1400012890"); // 2
      Pty_375_set.insert("UnderlyingInstrumentPartyID_t_1400012890");
      Pty_375.add_attribute("Src", "1"); // 2
      Pty_375_set.insert("1");
      Pty_375.add_attribute("R", "56"); // 2
      Pty_375_set.insert("56");
      all_values.push_back(Pty_375_set);
      all_compo_names.insert("Pty_375_set");

      {
        xml_element Sub_375{"Sub"};
        multiset<string> Sub_375_set;
        Sub_375.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1979797033"); // 3
        Sub_375_set.insert("UnderlyingInstrumentPartySubID_t_1979797033");
        Sub_375.add_attribute("Typ", "15"); // 3
        Sub_375_set.insert("15");
        all_values.push_back(Sub_375_set);
        all_compo_names.insert("Sub_375_set");

        Pty_375.add_element(Sub_375);
      }
      Undly_101.add_element(Pty_375);
    }
    elt.add_element(Undly_101);
  } // end Undly
  { // Undly
    xml_element Undly_102{"Undly"};
    multiset<string> Undly_102_set;
    Undly_102.add_attribute("Sym", "UnderlyingSymbol_t_1323318760"); // 1
    Undly_102_set.insert("UnderlyingSymbol_t_1323318760");
    Undly_102.add_attribute("Sfx", "CD"); // 1
    Undly_102_set.insert("CD");
    Undly_102.add_attribute("ID", "UnderlyingSecurityID_t_1350829146"); // 1
    Undly_102_set.insert("UnderlyingSecurityID_t_1350829146");
    Undly_102.add_attribute("Src", "B"); // 1
    Undly_102_set.insert("B");
    Undly_102.add_attribute("Prod", "12"); // 1
    Undly_102_set.insert("12");
    Undly_102.add_attribute("CFI", "UnderlyingCFICode_t_395065587"); // 1
    Undly_102_set.insert("UnderlyingCFICode_t_395065587");
    Undly_102.add_attribute("SecTyp", "IET"); // 1
    Undly_102_set.insert("IET");
    Undly_102.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1179520636"); // 1
    Undly_102_set.insert("UnderlyingSecuritySubType_t_1179520636");
    Undly_102.add_attribute("MMY", "1049723642"); // 1
    Undly_102_set.insert("1049723642");
    Undly_102.add_attribute("Mat", "UnderlyingMaturityDate_t_774286735"); // 1
    Undly_102_set.insert("UnderlyingMaturityDate_t_774286735");
    Undly_102.add_attribute("MatTm", "886368017"); // 1
    Undly_102_set.insert("886368017");
    Undly_102.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1253292368"); // 1
    Undly_102_set.insert("UnderlyingCouponPaymentDate_t_1253292368");
    Undly_102.add_attribute("RestrctTyp", "XR"); // 1
    Undly_102_set.insert("XR");
    Undly_102.add_attribute("Snrty", "SR"); // 1
    Undly_102_set.insert("SR");
    Undly_102.add_attribute("NotlPctOut", "17483157.090000"); // 1
    Undly_102_set.insert("17483157.090000");
    Undly_102.add_attribute("OrigNotlPctOut", "20338115.670000"); // 1
    Undly_102_set.insert("20338115.670000");
    Undly_102.add_attribute("AttchPnt", "16807435.300000"); // 1
    Undly_102_set.insert("16807435.300000");
    Undly_102.add_attribute("DetchPnt", "18866605.200000"); // 1
    Undly_102_set.insert("18866605.200000");
    Undly_102.add_attribute("Issued", "UnderlyingIssueDate_t_1321313100"); // 1
    Undly_102_set.insert("UnderlyingIssueDate_t_1321313100");
    Undly_102.add_attribute("RepoCollSecTyp", "804918055"); // 1
    Undly_102_set.insert("804918055");
    Undly_102.add_attribute("RepoTrm", "1198036326"); // 1
    Undly_102_set.insert("1198036326");
    Undly_102.add_attribute("RepoRt", "8492912.260000"); // 1
    Undly_102_set.insert("8492912.260000");
    Undly_102.add_attribute("Fctr", "14722992.230000"); // 1
    Undly_102_set.insert("14722992.230000");
    Undly_102.add_attribute("CrdRtg", "UnderlyingCreditRating_t_775764147"); // 1
    Undly_102_set.insert("UnderlyingCreditRating_t_775764147");
    Undly_102.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_914856027"); // 1
    Undly_102_set.insert("UnderlyingInstrRegistry_t_914856027");
    Undly_102.add_attribute("Ctry", "569664874"); // 1
    Undly_102_set.insert("569664874");
    Undly_102.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_28293389"); // 1
    Undly_102_set.insert("UnderlyingStateOrProvinceOfIssue_t_28293389");
    Undly_102.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_104782675"); // 1
    Undly_102_set.insert("UnderlyingLocaleOfIssue_t_104782675");
    Undly_102.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1787809660"); // 1
    Undly_102_set.insert("UnderlyingRedemptionDate_t_1787809660");
    Undly_102.add_attribute("StrkPx", "20080904.230000"); // 1
    Undly_102_set.insert("20080904.230000");
    Undly_102.add_attribute("StrkCcy", "USD"); // 1
    Undly_102_set.insert("USD");
    Undly_102.add_attribute("OptA", "1719611535"); // 1
    Undly_102_set.insert("1719611535");
    Undly_102.add_attribute("Mult", "18849481.970000"); // 1
    Undly_102_set.insert("18849481.970000");
    Undly_102.add_attribute("MultTyp", "2"); // 1
    Undly_102_set.insert("2");
    Undly_102.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_102_set.insert("1");
    Undly_102.add_attribute("UOM", "Bu"); // 1
    Undly_102_set.insert("Bu");
    Undly_102.add_attribute("UOMQty", "1154524.070000"); // 1
    Undly_102_set.insert("1154524.070000");
    Undly_102.add_attribute("PxUOM", "lbs"); // 1
    Undly_102_set.insert("lbs");
    Undly_102.add_attribute("PxUOMQty", "11822537.780000"); // 1
    Undly_102_set.insert("11822537.780000");
    Undly_102.add_attribute("TmUnit", "Mo"); // 1
    Undly_102_set.insert("Mo");
    Undly_102.add_attribute("ExerStyle", "1"); // 1
    Undly_102_set.insert("1");
    Undly_102.add_attribute("CpnRt", "2880624.980000"); // 1
    Undly_102_set.insert("2880624.980000");
    Undly_102.add_attribute("Exch", "UnderlyingSecurityExchange_t_562422413"); // 1
    Undly_102_set.insert("UnderlyingSecurityExchange_t_562422413");
    Undly_102.add_attribute("Issr", "UnderlyingIssuer_t_904293754"); // 1
    Undly_102_set.insert("UnderlyingIssuer_t_904293754");
    Undly_102.add_attribute("EncUndIssrLen", "2036378208"); // 1
    Undly_102_set.insert("2036378208");
    Undly_102.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_448750332"); // 1
    Undly_102_set.insert("EncodedUnderlyingIssuer_t_448750332");
    Undly_102.add_attribute("Desc", "UnderlyingSecurityDesc_t_437553636"); // 1
    Undly_102_set.insert("UnderlyingSecurityDesc_t_437553636");
    Undly_102.add_attribute("EncUndSecDescLen", "1775555080"); // 1
    Undly_102_set.insert("1775555080");
    Undly_102.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1770063433"); // 1
    Undly_102_set.insert("EncodedUnderlyingSecurityDesc_t_1770063433");
    Undly_102.add_attribute("CPPgm", "UnderlyingCPProgram_t_1242471691"); // 1
    Undly_102_set.insert("UnderlyingCPProgram_t_1242471691");
    Undly_102.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_826107758"); // 1
    Undly_102_set.insert("UnderlyingCPRegType_t_826107758");
    Undly_102.add_attribute("AllocPct", "4718710.110000"); // 1
    Undly_102_set.insert("4718710.110000");
    Undly_102.add_attribute("Ccy", "CAN"); // 1
    Undly_102_set.insert("CAN");
    Undly_102.add_attribute("Qty", "13867270.380000"); // 1
    Undly_102_set.insert("13867270.380000");
    Undly_102.add_attribute("SettlTyp", "2"); // 1
    Undly_102_set.insert("2");
    Undly_102.add_attribute("CashAmt", "UnderlyingCashAmount_t_1630165295"); // 1
    Undly_102_set.insert("UnderlyingCashAmount_t_1630165295");
    Undly_102.add_attribute("CashTyp", "FIXED"); // 1
    Undly_102_set.insert("FIXED");
    Undly_102.add_attribute("Px", "7772781.530000"); // 1
    Undly_102_set.insert("7772781.530000");
    Undly_102.add_attribute("DirtPx", "14907720.700000"); // 1
    Undly_102_set.insert("14907720.700000");
    Undly_102.add_attribute("EndPx", "20256287.650000"); // 1
    Undly_102_set.insert("20256287.650000");
    Undly_102.add_attribute("StartVal", "UnderlyingStartValue_t_1740922925"); // 1
    Undly_102_set.insert("UnderlyingStartValue_t_1740922925");
    Undly_102.add_attribute("CurVal", "UnderlyingCurrentValue_t_1062899957"); // 1
    Undly_102_set.insert("UnderlyingCurrentValue_t_1062899957");
    Undly_102.add_attribute("EndVal", "UnderlyingEndValue_t_1763093314"); // 1
    Undly_102_set.insert("UnderlyingEndValue_t_1763093314");
    Undly_102.add_attribute("AdjQty", "9684551.520000"); // 1
    Undly_102_set.insert("9684551.520000");
    Undly_102.add_attribute("FxRate", "158118.750000"); // 1
    Undly_102_set.insert("158118.750000");
    Undly_102.add_attribute("FxRateCalc", "M"); // 1
    Undly_102_set.insert("M");
    Undly_102.add_attribute("CapValu", "UnderlyingCapValue_t_1083907559"); // 1
    Undly_102_set.insert("UnderlyingCapValue_t_1083907559");
    Undly_102.add_attribute("SetMeth", "UnderlyingSettlMethod_t_148244429"); // 1
    Undly_102_set.insert("UnderlyingSettlMethod_t_148244429");
    Undly_102.add_attribute("PutCall", "930393580"); // 1
    Undly_102_set.insert("930393580");
    all_values.push_back(Undly_102_set);
    all_compo_names.insert("Undly_102_set");

    {
      xml_element UndAID_102{"UndAID"};
      multiset<string> UndAID_102_set;
      UndAID_102.add_attribute("AltID", "UnderlyingSecurityAltID_t_1973646702"); // 2
      UndAID_102_set.insert("UnderlyingSecurityAltID_t_1973646702");
      UndAID_102.add_attribute("AltIDSrc", "2"); // 2
      UndAID_102_set.insert("2");
      all_values.push_back(UndAID_102_set);
      all_compo_names.insert("UndAID_102_set");

      Undly_102.add_element(UndAID_102);
    }
    {
      xml_element Stip_160{"Stip"};
      multiset<string> Stip_160_set;
      Stip_160.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_160_set.insert("DISCOUNT");
      Stip_160.add_attribute("Val", "UnderlyingStipValue_t_388585467"); // 2
      Stip_160_set.insert("UnderlyingStipValue_t_388585467");
      all_values.push_back(Stip_160_set);
      all_compo_names.insert("Stip_160_set");

      Undly_102.add_element(Stip_160);
    }
    {
      xml_element Pty_376{"Pty"};
      multiset<string> Pty_376_set;
      Pty_376.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2071338755"); // 2
      Pty_376_set.insert("UnderlyingInstrumentPartyID_t_2071338755");
      Pty_376.add_attribute("Src", "H"); // 2
      Pty_376_set.insert("H");
      Pty_376.add_attribute("R", "36"); // 2
      Pty_376_set.insert("36");
      all_values.push_back(Pty_376_set);
      all_compo_names.insert("Pty_376_set");

      {
        xml_element Sub_376{"Sub"};
        multiset<string> Sub_376_set;
        Sub_376.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_361408743"); // 3
        Sub_376_set.insert("UnderlyingInstrumentPartySubID_t_361408743");
        Sub_376.add_attribute("Typ", "18"); // 3
        Sub_376_set.insert("18");
        all_values.push_back(Sub_376_set);
        all_compo_names.insert("Sub_376_set");

        Pty_376.add_element(Sub_376);
      }
      Undly_102.add_element(Pty_376);
    }
    elt.add_element(Undly_102);
  } // end Undly
  { // Stip
    xml_element Stip_161{"Stip"};
    multiset<string> Stip_161_set;
    Stip_161.add_attribute("Typ", "PPT"); // 1
    Stip_161_set.insert("PPT");
    Stip_161.add_attribute("Val", "StipulationValue_t_1561529829"); // 1
    Stip_161_set.insert("StipulationValue_t_1561529829");
    all_values.push_back(Stip_161_set);
    all_compo_names.insert("Stip_161_set");

    elt.add_element(Stip_161);
  } // end Stip
  { // Leg
    xml_element Leg_87{"Leg"};
    multiset<string> Leg_87_set;
    Leg_87.add_attribute("Sym", "LegSymbol_t_23684053"); // 1
    Leg_87_set.insert("LegSymbol_t_23684053");
    Leg_87.add_attribute("Sfx", "CD"); // 1
    Leg_87_set.insert("CD");
    Leg_87.add_attribute("ID", "LegSecurityID_t_171029986"); // 1
    Leg_87_set.insert("LegSecurityID_t_171029986");
    Leg_87.add_attribute("Src", "F"); // 1
    Leg_87_set.insert("F");
    Leg_87.add_attribute("Prod", "5"); // 1
    Leg_87_set.insert("5");
    Leg_87.add_attribute("CFI", "LegCFICode_t_1662539700"); // 1
    Leg_87_set.insert("LegCFICode_t_1662539700");
    Leg_87.add_attribute("SecTyp", "TB"); // 1
    Leg_87_set.insert("TB");
    Leg_87.add_attribute("SecSubTyp", "LegSecuritySubType_t_1989371803"); // 1
    Leg_87_set.insert("LegSecuritySubType_t_1989371803");
    Leg_87.add_attribute("MMY", "1540684817"); // 1
    Leg_87_set.insert("1540684817");
    Leg_87.add_attribute("Mat", "LegMaturityDate_t_1531353625"); // 1
    Leg_87_set.insert("LegMaturityDate_t_1531353625");
    Leg_87.add_attribute("MatTm", "904788112"); // 1
    Leg_87_set.insert("904788112");
    Leg_87.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1156294483"); // 1
    Leg_87_set.insert("LegCouponPaymentDate_t_1156294483");
    Leg_87.add_attribute("Issued", "LegIssueDate_t_352325129"); // 1
    Leg_87_set.insert("LegIssueDate_t_352325129");
    Leg_87.add_attribute("RepoCollSecTyp", "920599987"); // 1
    Leg_87_set.insert("920599987");
    Leg_87.add_attribute("RepoTrm", "904434285"); // 1
    Leg_87_set.insert("904434285");
    Leg_87.add_attribute("RepoRt", "14362326.880000"); // 1
    Leg_87_set.insert("14362326.880000");
    Leg_87.add_attribute("Fctr", "10688444.170000"); // 1
    Leg_87_set.insert("10688444.170000");
    Leg_87.add_attribute("CrdRtg", "LegCreditRating_t_1834827865"); // 1
    Leg_87_set.insert("LegCreditRating_t_1834827865");
    Leg_87.add_attribute("Rgstry", "LegInstrRegistry_t_1262395742"); // 1
    Leg_87_set.insert("LegInstrRegistry_t_1262395742");
    Leg_87.add_attribute("Ctry", "88405770"); // 1
    Leg_87_set.insert("88405770");
    Leg_87.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_905800296"); // 1
    Leg_87_set.insert("LegStateOrProvinceOfIssue_t_905800296");
    Leg_87.add_attribute("Lcl", "LegLocaleOfIssue_t_1650981210"); // 1
    Leg_87_set.insert("LegLocaleOfIssue_t_1650981210");
    Leg_87.add_attribute("Redeem", "LegRedemptionDate_t_12260877"); // 1
    Leg_87_set.insert("LegRedemptionDate_t_12260877");
    Leg_87.add_attribute("Strk", "20131509.340000"); // 1
    Leg_87_set.insert("20131509.340000");
    Leg_87.add_attribute("StrkCcy", "USD"); // 1
    Leg_87_set.insert("USD");
    Leg_87.add_attribute("OptA", "601089357"); // 1
    Leg_87_set.insert("601089357");
    Leg_87.add_attribute("Cmult", "8007489.470000"); // 1
    Leg_87_set.insert("8007489.470000");
    Leg_87.add_attribute("MultTyp", "2"); // 1
    Leg_87_set.insert("2");
    Leg_87.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_87_set.insert("3");
    Leg_87.add_attribute("UOM", "Bu"); // 1
    Leg_87_set.insert("Bu");
    Leg_87.add_attribute("UOMQty", "20012341.090000"); // 1
    Leg_87_set.insert("20012341.090000");
    Leg_87.add_attribute("PxUOM", "Gal"); // 1
    Leg_87_set.insert("Gal");
    Leg_87.add_attribute("PxUOMQty", "19035655.290000"); // 1
    Leg_87_set.insert("19035655.290000");
    Leg_87.add_attribute("TmUnit", "H"); // 1
    Leg_87_set.insert("H");
    Leg_87.add_attribute("ExerStyle", "2"); // 1
    Leg_87_set.insert("2");
    Leg_87.add_attribute("CpnRt", "14186215.820000"); // 1
    Leg_87_set.insert("14186215.820000");
    Leg_87.add_attribute("Exch", "LegSecurityExchange_t_804817355"); // 1
    Leg_87_set.insert("LegSecurityExchange_t_804817355");
    Leg_87.add_attribute("Issr", "LegIssuer_t_1371541513"); // 1
    Leg_87_set.insert("LegIssuer_t_1371541513");
    Leg_87.add_attribute("EncLegIssrLen", "811822751"); // 1
    Leg_87_set.insert("811822751");
    Leg_87.add_attribute("EncLegIssr", "EncodedLegIssuer_t_188687332"); // 1
    Leg_87_set.insert("EncodedLegIssuer_t_188687332");
    Leg_87.add_attribute("Desc", "LegSecurityDesc_t_128845978"); // 1
    Leg_87_set.insert("LegSecurityDesc_t_128845978");
    Leg_87.add_attribute("EncLegSecDescLen", "1968117235"); // 1
    Leg_87_set.insert("1968117235");
    Leg_87.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_541012461"); // 1
    Leg_87_set.insert("EncodedLegSecurityDesc_t_541012461");
    Leg_87.add_attribute("RatioQty", "10494459.650000"); // 1
    Leg_87_set.insert("10494459.650000");
    Leg_87.add_attribute("Side", "1"); // 1
    Leg_87_set.insert("1");
    Leg_87.add_attribute("Ccy", "USD"); // 1
    Leg_87_set.insert("USD");
    Leg_87.add_attribute("Pool", "LegPool_t_412412090"); // 1
    Leg_87_set.insert("LegPool_t_412412090");
    Leg_87.add_attribute("Dated", "LegDatedDate_t_1092157244"); // 1
    Leg_87_set.insert("LegDatedDate_t_1092157244");
    Leg_87.add_attribute("CSetMo", "59212504"); // 1
    Leg_87_set.insert("59212504");
    Leg_87.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1318212386"); // 1
    Leg_87_set.insert("LegInterestAccrualDate_t_1318212386");
    Leg_87.add_attribute("PutCall", "595654806"); // 1
    Leg_87_set.insert("595654806");
    Leg_87.add_attribute("LegOptionRatio", "714733.810000"); // 1
    Leg_87_set.insert("714733.810000");
    Leg_87.add_attribute("Px", "11838796.720000"); // 1
    Leg_87_set.insert("11838796.720000");
    all_values.push_back(Leg_87_set);
    all_compo_names.insert("Leg_87_set");

    {
      xml_element LegAID_84{"LegAID"};
      multiset<string> LegAID_84_set;
      LegAID_84.add_attribute("SecAltID", "LegSecurityAltID_t_936488168"); // 2
      LegAID_84_set.insert("LegSecurityAltID_t_936488168");
      LegAID_84.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_84_set.insert("J");
      all_values.push_back(LegAID_84_set);
      all_compo_names.insert("LegAID_84_set");

      Leg_87.add_element(LegAID_84);
    }
    elt.add_element(Leg_87);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_27{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_27_set;
    SprdBnchmkCurve_27.add_attribute("Spread", "17849690.290000"); // 1
    SprdBnchmkCurve_27_set.insert("17849690.290000");
    SprdBnchmkCurve_27.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_27_set.insert("CAN");
    SprdBnchmkCurve_27.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_27_set.insert("Treasury");
    SprdBnchmkCurve_27.add_attribute("Point", "BenchmarkCurvePoint_t_1322289010"); // 1
    SprdBnchmkCurve_27_set.insert("BenchmarkCurvePoint_t_1322289010");
    SprdBnchmkCurve_27.add_attribute("Px", "1289598.700000"); // 1
    SprdBnchmkCurve_27_set.insert("1289598.700000");
    SprdBnchmkCurve_27.add_attribute("PxTyp", "11"); // 1
    SprdBnchmkCurve_27_set.insert("11");
    SprdBnchmkCurve_27.add_attribute("SecID", "BenchmarkSecurityID_t_1078370891"); // 1
    SprdBnchmkCurve_27_set.insert("BenchmarkSecurityID_t_1078370891");
    SprdBnchmkCurve_27.add_attribute("SecIDSrc", "F"); // 1
    SprdBnchmkCurve_27_set.insert("F");
    all_values.push_back(SprdBnchmkCurve_27_set);
    all_compo_names.insert("SprdBnchmkCurve_27_set");

    elt.add_element(SprdBnchmkCurve_27);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_22{"Yield"};
    multiset<string> Yield_22_set;
    Yield_22.add_attribute("Typ", "PROCEEDS"); // 1
    Yield_22_set.insert("PROCEEDS");
    Yield_22.add_attribute("Yld", "3495088.250000"); // 1
    Yield_22_set.insert("3495088.250000");
    Yield_22.add_attribute("CalcDt", "YieldCalcDate_t_1948163881"); // 1
    Yield_22_set.insert("YieldCalcDate_t_1948163881");
    Yield_22.add_attribute("RedDt", "YieldRedemptionDate_t_1437385767"); // 1
    Yield_22_set.insert("YieldRedemptionDate_t_1437385767");
    Yield_22.add_attribute("RedPx", "11613315.770000"); // 1
    Yield_22_set.insert("11613315.770000");
    Yield_22.add_attribute("RedPxTyp", "4"); // 1
    Yield_22_set.insert("4");
    all_values.push_back(Yield_22_set);
    all_compo_names.insert("Yield_22_set");

    elt.add_element(Yield_22);
  } // end Yield
  { // MktSegGrp
    xml_element MktSegGrp_5{"MktSegGrp"};
    multiset<string> MktSegGrp_5_set;
    MktSegGrp_5.add_attribute("MktID", "MarketID_t_981965164"); // 1
    MktSegGrp_5_set.insert("MarketID_t_981965164");
    MktSegGrp_5.add_attribute("MktSegID", "MarketSegmentID_t_530380026"); // 1
    MktSegGrp_5_set.insert("MarketSegmentID_t_530380026");
    all_values.push_back(MktSegGrp_5_set);
    all_compo_names.insert("MktSegGrp_5_set");

    {
      xml_element SecTrdgRules_5{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_7{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_7_set;
        BaseTrdgRules_7.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_7_set.insert("2");
        BaseTrdgRules_7.add_attribute("MinTrdVol", "17070330.360000"); // 3
        BaseTrdgRules_7_set.insert("17070330.360000");
        BaseTrdgRules_7.add_attribute("MaxTrdVol", "3601415.270000"); // 3
        BaseTrdgRules_7_set.insert("3601415.270000");
        BaseTrdgRules_7.add_attribute("MxPxVar", "4390007.970000"); // 3
        BaseTrdgRules_7_set.insert("4390007.970000");
        BaseTrdgRules_7.add_attribute("ImpldMktInd", "2"); // 3
        BaseTrdgRules_7_set.insert("2");
        BaseTrdgRules_7.add_attribute("TrdCcy", "GBP"); // 3
        BaseTrdgRules_7_set.insert("GBP");
        BaseTrdgRules_7.add_attribute("RndLot", "12901738.640000"); // 3
        BaseTrdgRules_7_set.insert("12901738.640000");
        BaseTrdgRules_7.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_7_set.insert("1");
        BaseTrdgRules_7.add_attribute("MlegPxMeth", "3"); // 3
        BaseTrdgRules_7_set.insert("3");
        BaseTrdgRules_7.add_attribute("PxTyp", "13"); // 3
        BaseTrdgRules_7_set.insert("13");
        all_values.push_back(BaseTrdgRules_7_set);
        all_compo_names.insert("BaseTrdgRules_7_set");

        {
          xml_element TickRules_7{"TickRules"};
          multiset<string> TickRules_7_set;
          TickRules_7.add_attribute("StartTickPxRng", "8369580.970000"); // 4
          TickRules_7_set.insert("8369580.970000");
          TickRules_7.add_attribute("EndTickPxRng", "10148296.850000"); // 4
          TickRules_7_set.insert("10148296.850000");
          TickRules_7.add_attribute("TickIncr", "21115389.180000"); // 4
          TickRules_7_set.insert("21115389.180000");
          TickRules_7.add_attribute("TickRuleTyp", "4"); // 4
          TickRules_7_set.insert("4");
          all_values.push_back(TickRules_7_set);
          all_compo_names.insert("TickRules_7_set");

          BaseTrdgRules_7.add_element(TickRules_7);
        }
        {
          xml_element LotTypeRules_7{"LotTypeRules"};
          multiset<string> LotTypeRules_7_set;
          LotTypeRules_7.add_attribute("LotTyp", "4"); // 4
          LotTypeRules_7_set.insert("4");
          LotTypeRules_7.add_attribute("MinLotSz", "17641598.380000"); // 4
          LotTypeRules_7_set.insert("17641598.380000");
          all_values.push_back(LotTypeRules_7_set);
          all_compo_names.insert("LotTypeRules_7_set");

          BaseTrdgRules_7.add_element(LotTypeRules_7);
        }
        {
          xml_element PxLmts_7{"PxLmts"};
          multiset<string> PxLmts_7_set;
          PxLmts_7.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_7_set.insert("1");
          PxLmts_7.add_attribute("LowLmtPx", "14189989.650000"); // 4
          PxLmts_7_set.insert("14189989.650000");
          PxLmts_7.add_attribute("HiLmtPx", "3003507.340000"); // 4
          PxLmts_7_set.insert("3003507.340000");
          PxLmts_7.add_attribute("TrdgRefPx", "6798878.180000"); // 4
          PxLmts_7_set.insert("6798878.180000");
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
        TrdgSesRulesGrp_5.add_attribute("SesSub", "6"); // 3
        TrdgSesRulesGrp_5_set.insert("6");
        all_values.push_back(TrdgSesRulesGrp_5_set);
        all_compo_names.insert("TrdgSesRulesGrp_5_set");

        {
          xml_element TrdgSesRules_5{"TrdgSesRules"};
          {
            xml_element OrdTypRules_8{"OrdTypRules"};
            multiset<string> OrdTypRules_8_set;
            OrdTypRules_8.add_attribute("OrdTyp", "K"); // 5
            OrdTypRules_8_set.insert("K");
            all_values.push_back(OrdTypRules_8_set);
            all_compo_names.insert("OrdTypRules_8_set");

            TrdgSesRules_5.add_element(OrdTypRules_8);
          }
          {
            xml_element TmInForceRules_9{"TmInForceRules"};
            multiset<string> TmInForceRules_9_set;
            TmInForceRules_9.add_attribute("TmInForce", "6"); // 5
            TmInForceRules_9_set.insert("6");
            all_values.push_back(TmInForceRules_9_set);
            all_compo_names.insert("TmInForceRules_9_set");

            TrdgSesRules_5.add_element(TmInForceRules_9);
          }
          {
            xml_element ExecInstRules_9{"ExecInstRules"};
            multiset<string> ExecInstRules_9_set;
            ExecInstRules_9.add_attribute("ExecInstValu", "a"); // 5
            ExecInstRules_9_set.insert("a");
            all_values.push_back(ExecInstRules_9_set);
            all_compo_names.insert("ExecInstRules_9_set");

            TrdgSesRules_5.add_element(ExecInstRules_9);
          }
          {
            xml_element MtchRules_5{"MtchRules"};
            multiset<string> MtchRules_5_set;
            MtchRules_5.add_attribute("MtchAlgo", "MatchAlgorithm_t_43244572"); // 5
            MtchRules_5_set.insert("MatchAlgorithm_t_43244572");
            MtchRules_5.add_attribute("MtchTyp", "A2"); // 5
            MtchRules_5_set.insert("A2");
            all_values.push_back(MtchRules_5_set);
            all_compo_names.insert("MtchRules_5_set");

            TrdgSesRules_5.add_element(MtchRules_5);
          }
          {
            xml_element MDFeedTyps_5{"MDFeedTyps"};
            multiset<string> MDFeedTyps_5_set;
            MDFeedTyps_5.add_attribute("MDFeedTyp", "MDFeedType_t_1222328853"); // 5
            MDFeedTyps_5_set.insert("MDFeedType_t_1222328853");
            MDFeedTyps_5.add_attribute("MktDepth", "1025209736"); // 5
            MDFeedTyps_5_set.insert("1025209736");
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
        xml_element Attrb_17{"Attrb"};
        multiset<string> Attrb_17_set;
        Attrb_17.add_attribute("Typ", "26"); // 3
        Attrb_17_set.insert("26");
        Attrb_17.add_attribute("Val", "NestedInstrAttribValue_t_584759125"); // 3
        Attrb_17_set.insert("NestedInstrAttribValue_t_584759125");
        all_values.push_back(Attrb_17_set);
        all_compo_names.insert("Attrb_17_set");

        SecTrdgRules_5.add_element(Attrb_17);
      }
      MktSegGrp_5.add_element(SecTrdgRules_5);
    }
    {
      xml_element StrkRules_5{"StrkRules"};
      multiset<string> StrkRules_5_set;
      StrkRules_5.add_attribute("StrkRule", "StrikeRuleID_t_1095431195"); // 2
      StrkRules_5_set.insert("StrikeRuleID_t_1095431195");
      StrkRules_5.add_attribute("StartStrkPxRng", "21295237.130000"); // 2
      StrkRules_5_set.insert("21295237.130000");
      StrkRules_5.add_attribute("EndStrkPxRng", "5567206.030000"); // 2
      StrkRules_5_set.insert("5567206.030000");
      StrkRules_5.add_attribute("StrkIncr", "4002463.180000"); // 2
      StrkRules_5_set.insert("4002463.180000");
      StrkRules_5.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_5_set.insert("2");
      all_values.push_back(StrkRules_5_set);
      all_compo_names.insert("StrkRules_5_set");

      {
        xml_element MatRules_5{"MatRules"};
        multiset<string> MatRules_5_set;
        MatRules_5.add_attribute("MatRuleID", "MaturityRuleID_t_1846894468"); // 3
        MatRules_5_set.insert("MaturityRuleID_t_1846894468");
        MatRules_5.add_attribute("MMYFmt", "1"); // 3
        MatRules_5_set.insert("1");
        MatRules_5.add_attribute("MMYIncrUnits", "3"); // 3
        MatRules_5_set.insert("3");
        MatRules_5.add_attribute("StartMMY", "25980709"); // 3
        MatRules_5_set.insert("25980709");
        MatRules_5.add_attribute("EndMMY", "1137674345"); // 3
        MatRules_5_set.insert("1137674345");
        MatRules_5.add_attribute("MMYIncr", "2064769736"); // 3
        MatRules_5_set.insert("2064769736");
        all_values.push_back(MatRules_5_set);
        all_compo_names.insert("MatRules_5_set");

        StrkRules_5.add_element(MatRules_5);
      }
      MktSegGrp_5.add_element(StrkRules_5);
    }
    elt.add_element(MktSegGrp_5);
  } // end MktSegGrp
  { // MktSegGrp
    xml_element MktSegGrp_6{"MktSegGrp"};
    multiset<string> MktSegGrp_6_set;
    MktSegGrp_6.add_attribute("MktID", "MarketID_t_2137519627"); // 1
    MktSegGrp_6_set.insert("MarketID_t_2137519627");
    MktSegGrp_6.add_attribute("MktSegID", "MarketSegmentID_t_1564385910"); // 1
    MktSegGrp_6_set.insert("MarketSegmentID_t_1564385910");
    all_values.push_back(MktSegGrp_6_set);
    all_compo_names.insert("MktSegGrp_6_set");

    {
      xml_element SecTrdgRules_6{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_8{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_8_set;
        BaseTrdgRules_8.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_8_set.insert("2");
        BaseTrdgRules_8.add_attribute("MinTrdVol", "17541958.170000"); // 3
        BaseTrdgRules_8_set.insert("17541958.170000");
        BaseTrdgRules_8.add_attribute("MaxTrdVol", "11659028.360000"); // 3
        BaseTrdgRules_8_set.insert("11659028.360000");
        BaseTrdgRules_8.add_attribute("MxPxVar", "4788405.010000"); // 3
        BaseTrdgRules_8_set.insert("4788405.010000");
        BaseTrdgRules_8.add_attribute("ImpldMktInd", "3"); // 3
        BaseTrdgRules_8_set.insert("3");
        BaseTrdgRules_8.add_attribute("TrdCcy", "JPY"); // 3
        BaseTrdgRules_8_set.insert("JPY");
        BaseTrdgRules_8.add_attribute("RndLot", "2732578.910000"); // 3
        BaseTrdgRules_8_set.insert("2732578.910000");
        BaseTrdgRules_8.add_attribute("MlegModel", "1"); // 3
        BaseTrdgRules_8_set.insert("1");
        BaseTrdgRules_8.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_8_set.insert("1");
        BaseTrdgRules_8.add_attribute("PxTyp", "17"); // 3
        BaseTrdgRules_8_set.insert("17");
        all_values.push_back(BaseTrdgRules_8_set);
        all_compo_names.insert("BaseTrdgRules_8_set");

        {
          xml_element TickRules_8{"TickRules"};
          multiset<string> TickRules_8_set;
          TickRules_8.add_attribute("StartTickPxRng", "7709482.220000"); // 4
          TickRules_8_set.insert("7709482.220000");
          TickRules_8.add_attribute("EndTickPxRng", "13141540.620000"); // 4
          TickRules_8_set.insert("13141540.620000");
          TickRules_8.add_attribute("TickIncr", "11516838.520000"); // 4
          TickRules_8_set.insert("11516838.520000");
          TickRules_8.add_attribute("TickRuleTyp", "4"); // 4
          TickRules_8_set.insert("4");
          all_values.push_back(TickRules_8_set);
          all_compo_names.insert("TickRules_8_set");

          BaseTrdgRules_8.add_element(TickRules_8);
        }
        {
          xml_element LotTypeRules_8{"LotTypeRules"};
          multiset<string> LotTypeRules_8_set;
          LotTypeRules_8.add_attribute("LotTyp", "3"); // 4
          LotTypeRules_8_set.insert("3");
          LotTypeRules_8.add_attribute("MinLotSz", "6947231.200000"); // 4
          LotTypeRules_8_set.insert("6947231.200000");
          all_values.push_back(LotTypeRules_8_set);
          all_compo_names.insert("LotTypeRules_8_set");

          BaseTrdgRules_8.add_element(LotTypeRules_8);
        }
        {
          xml_element PxLmts_8{"PxLmts"};
          multiset<string> PxLmts_8_set;
          PxLmts_8.add_attribute("PxLmtTyp", "1"); // 4
          PxLmts_8_set.insert("1");
          PxLmts_8.add_attribute("LowLmtPx", "9973912.770000"); // 4
          PxLmts_8_set.insert("9973912.770000");
          PxLmts_8.add_attribute("HiLmtPx", "6767631.850000"); // 4
          PxLmts_8_set.insert("6767631.850000");
          PxLmts_8.add_attribute("TrdgRefPx", "7901540.390000"); // 4
          PxLmts_8_set.insert("7901540.390000");
          all_values.push_back(PxLmts_8_set);
          all_compo_names.insert("PxLmts_8_set");

          BaseTrdgRules_8.add_element(PxLmts_8);
        }
        SecTrdgRules_6.add_element(BaseTrdgRules_8);
      }
      {
        xml_element TrdgSesRulesGrp_6{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_6_set;
        TrdgSesRulesGrp_6.add_attribute("SesID", "2"); // 3
        TrdgSesRulesGrp_6_set.insert("2");
        TrdgSesRulesGrp_6.add_attribute("SesSub", "1"); // 3
        TrdgSesRulesGrp_6_set.insert("1");
        all_values.push_back(TrdgSesRulesGrp_6_set);
        all_compo_names.insert("TrdgSesRulesGrp_6_set");

        {
          xml_element TrdgSesRules_6{"TrdgSesRules"};
          {
            xml_element OrdTypRules_9{"OrdTypRules"};
            multiset<string> OrdTypRules_9_set;
            OrdTypRules_9.add_attribute("OrdTyp", "K"); // 5
            OrdTypRules_9_set.insert("K");
            all_values.push_back(OrdTypRules_9_set);
            all_compo_names.insert("OrdTypRules_9_set");

            TrdgSesRules_6.add_element(OrdTypRules_9);
          }
          {
            xml_element TmInForceRules_10{"TmInForceRules"};
            multiset<string> TmInForceRules_10_set;
            TmInForceRules_10.add_attribute("TmInForce", "3"); // 5
            TmInForceRules_10_set.insert("3");
            all_values.push_back(TmInForceRules_10_set);
            all_compo_names.insert("TmInForceRules_10_set");

            TrdgSesRules_6.add_element(TmInForceRules_10);
          }
          {
            xml_element ExecInstRules_10{"ExecInstRules"};
            multiset<string> ExecInstRules_10_set;
            ExecInstRules_10.add_attribute("ExecInstValu", "4"); // 5
            ExecInstRules_10_set.insert("4");
            all_values.push_back(ExecInstRules_10_set);
            all_compo_names.insert("ExecInstRules_10_set");

            TrdgSesRules_6.add_element(ExecInstRules_10);
          }
          {
            xml_element MtchRules_6{"MtchRules"};
            multiset<string> MtchRules_6_set;
            MtchRules_6.add_attribute("MtchAlgo", "MatchAlgorithm_t_515545568"); // 5
            MtchRules_6_set.insert("MatchAlgorithm_t_515545568");
            MtchRules_6.add_attribute("MtchTyp", "AQ"); // 5
            MtchRules_6_set.insert("AQ");
            all_values.push_back(MtchRules_6_set);
            all_compo_names.insert("MtchRules_6_set");

            TrdgSesRules_6.add_element(MtchRules_6);
          }
          {
            xml_element MDFeedTyps_6{"MDFeedTyps"};
            multiset<string> MDFeedTyps_6_set;
            MDFeedTyps_6.add_attribute("MDFeedTyp", "MDFeedType_t_2124242692"); // 5
            MDFeedTyps_6_set.insert("MDFeedType_t_2124242692");
            MDFeedTyps_6.add_attribute("MktDepth", "505581548"); // 5
            MDFeedTyps_6_set.insert("505581548");
            MDFeedTyps_6.add_attribute("MDBkTyp", "2"); // 5
            MDFeedTyps_6_set.insert("2");
            all_values.push_back(MDFeedTyps_6_set);
            all_compo_names.insert("MDFeedTyps_6_set");

            TrdgSesRules_6.add_element(MDFeedTyps_6);
          }
          TrdgSesRulesGrp_6.add_element(TrdgSesRules_6);
        }
        SecTrdgRules_6.add_element(TrdgSesRulesGrp_6);
      }
      {
        xml_element Attrb_18{"Attrb"};
        multiset<string> Attrb_18_set;
        Attrb_18.add_attribute("Typ", "17"); // 3
        Attrb_18_set.insert("17");
        Attrb_18.add_attribute("Val", "NestedInstrAttribValue_t_112293717"); // 3
        Attrb_18_set.insert("NestedInstrAttribValue_t_112293717");
        all_values.push_back(Attrb_18_set);
        all_compo_names.insert("Attrb_18_set");

        SecTrdgRules_6.add_element(Attrb_18);
      }
      MktSegGrp_6.add_element(SecTrdgRules_6);
    }
    {
      xml_element StrkRules_6{"StrkRules"};
      multiset<string> StrkRules_6_set;
      StrkRules_6.add_attribute("StrkRule", "StrikeRuleID_t_1271349639"); // 2
      StrkRules_6_set.insert("StrikeRuleID_t_1271349639");
      StrkRules_6.add_attribute("StartStrkPxRng", "16629247.290000"); // 2
      StrkRules_6_set.insert("16629247.290000");
      StrkRules_6.add_attribute("EndStrkPxRng", "193566.210000"); // 2
      StrkRules_6_set.insert("193566.210000");
      StrkRules_6.add_attribute("StrkIncr", "9696566.460000"); // 2
      StrkRules_6_set.insert("9696566.460000");
      StrkRules_6.add_attribute("StrkExrStyle", "2"); // 2
      StrkRules_6_set.insert("2");
      all_values.push_back(StrkRules_6_set);
      all_compo_names.insert("StrkRules_6_set");

      {
        xml_element MatRules_6{"MatRules"};
        multiset<string> MatRules_6_set;
        MatRules_6.add_attribute("MatRuleID", "MaturityRuleID_t_292614512"); // 3
        MatRules_6_set.insert("MaturityRuleID_t_292614512");
        MatRules_6.add_attribute("MMYFmt", "1"); // 3
        MatRules_6_set.insert("1");
        MatRules_6.add_attribute("MMYIncrUnits", "2"); // 3
        MatRules_6_set.insert("2");
        MatRules_6.add_attribute("StartMMY", "221969511"); // 3
        MatRules_6_set.insert("221969511");
        MatRules_6.add_attribute("EndMMY", "320824870"); // 3
        MatRules_6_set.insert("320824870");
        MatRules_6.add_attribute("MMYIncr", "685058261"); // 3
        MatRules_6_set.insert("685058261");
        all_values.push_back(MatRules_6_set);
        all_compo_names.insert("MatRules_6_set");

        StrkRules_6.add_element(MatRules_6);
      }
      MktSegGrp_6.add_element(StrkRules_6);
    }
    elt.add_element(MktSegGrp_6);
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
