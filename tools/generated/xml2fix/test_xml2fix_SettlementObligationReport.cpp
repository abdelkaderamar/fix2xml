#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SettlementObligationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SettlementObligationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SettlObligation" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SettlementObligationReport_message_t_0;
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1672555619"); // 0
  SettlementObligationReport_message_t_0.insert("ClearingBusinessDate_t_1672555619");
  elt.add_attribute("CycleNo", "1692043089"); // 0
  SettlementObligationReport_message_t_0.insert("1692043089");
  elt.add_attribute("SettlMsgID", "SettlObligMsgID_t_1401397896"); // 0
  SettlementObligationReport_message_t_0.insert("SettlObligMsgID_t_1401397896");
  elt.add_attribute("SettlMode", "2"); // 0
  SettlementObligationReport_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_468904722"); // 0
  SettlementObligationReport_message_t_0.insert("Text_t_468904722");
  elt.add_attribute("EncTxtLen", "392118708"); // 0
  SettlementObligationReport_message_t_0.insert("392118708");
  elt.add_attribute("EncTxt", "EncodedText_t_282923937"); // 0
  SettlementObligationReport_message_t_0.insert("EncodedText_t_282923937");
  elt.add_attribute("TxnTm", "TransactTime_t_1624292195"); // 0
  SettlementObligationReport_message_t_0.insert("TransactTime_t_1624292195");
  all_values.push_back(SettlementObligationReport_message_t_0);
  all_compo_names.insert("SettlementObligationReport_message_t");

  { // Hdr
    xml_element Hdr_92{"Hdr"};
    multiset<string> Hdr_92_set;
    Hdr_92.add_attribute("SeqNum", "1122111722"); // 1
    Hdr_92_set.insert("1122111722");
    Hdr_92.add_attribute("SID", "SenderCompID_t_1080385213"); // 1
    Hdr_92_set.insert("SenderCompID_t_1080385213");
    Hdr_92.add_attribute("TID", "TargetCompID_t_1580047527"); // 1
    Hdr_92_set.insert("TargetCompID_t_1580047527");
    Hdr_92.add_attribute("OBID", "OnBehalfOfCompID_t_1906622767"); // 1
    Hdr_92_set.insert("OnBehalfOfCompID_t_1906622767");
    Hdr_92.add_attribute("D2ID", "DeliverToCompID_t_282876741"); // 1
    Hdr_92_set.insert("DeliverToCompID_t_282876741");
    Hdr_92.add_attribute("SSub", "SenderSubID_t_379259436"); // 1
    Hdr_92_set.insert("SenderSubID_t_379259436");
    Hdr_92.add_attribute("SLoc", "SenderLocationID_t_1437818616"); // 1
    Hdr_92_set.insert("SenderLocationID_t_1437818616");
    Hdr_92.add_attribute("TSub", "TargetSubID_t_2008863449"); // 1
    Hdr_92_set.insert("TargetSubID_t_2008863449");
    Hdr_92.add_attribute("TLoc", "TargetLocationID_t_1840886072"); // 1
    Hdr_92_set.insert("TargetLocationID_t_1840886072");
    Hdr_92.add_attribute("OBSub", "OnBehalfOfSubID_t_945216793"); // 1
    Hdr_92_set.insert("OnBehalfOfSubID_t_945216793");
    Hdr_92.add_attribute("OBLoc", "OnBehalfOfLocationID_t_331466535"); // 1
    Hdr_92_set.insert("OnBehalfOfLocationID_t_331466535");
    Hdr_92.add_attribute("D2Sub", "DeliverToSubID_t_1190999717"); // 1
    Hdr_92_set.insert("DeliverToSubID_t_1190999717");
    Hdr_92.add_attribute("D2Loc", "DeliverToLocationID_t_1437159472"); // 1
    Hdr_92_set.insert("DeliverToLocationID_t_1437159472");
    Hdr_92.add_attribute("PosDup", "N"); // 1
    Hdr_92_set.insert("N");
    Hdr_92.add_attribute("PosRsnd", "Y"); // 1
    Hdr_92_set.insert("Y");
    Hdr_92.add_attribute("Snt", "SendingTime_t_6908088"); // 1
    Hdr_92_set.insert("SendingTime_t_6908088");
    Hdr_92.add_attribute("OrigSnt", "OrigSendingTime_t_1203374"); // 1
    Hdr_92_set.insert("OrigSendingTime_t_1203374");
    Hdr_92.add_attribute("MsgEncd", "MessageEncoding_t_1184219533"); // 1
    Hdr_92_set.insert("MessageEncoding_t_1184219533");
    all_values.push_back(Hdr_92_set);
    all_compo_names.insert("Hdr_92_set");

    {
      xml_element Hop_92{"Hop"};
      multiset<string> Hop_92_set;
      Hop_92.add_attribute("ID", "HopCompID_t_901921856"); // 2
      Hop_92_set.insert("HopCompID_t_901921856");
      Hop_92.add_attribute("Ref", "164529586"); // 2
      Hop_92_set.insert("164529586");
      Hop_92.add_attribute("Snt", "HopSendingTime_t_942484303"); // 2
      Hop_92_set.insert("HopSendingTime_t_942484303");
      all_values.push_back(Hop_92_set);
      all_compo_names.insert("Hop_92_set");

      Hdr_92.add_element(Hop_92);
    }
    elt.add_element(Hdr_92);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_18{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_18_set;
    ApplSeqCtrl_18.add_attribute("ApplID", "ApplID_t_802603754"); // 1
    ApplSeqCtrl_18_set.insert("ApplID_t_802603754");
    ApplSeqCtrl_18.add_attribute("ApplSeqNum", "136635481"); // 1
    ApplSeqCtrl_18_set.insert("136635481");
    ApplSeqCtrl_18.add_attribute("ApplLastSeqNum", "467556275"); // 1
    ApplSeqCtrl_18_set.insert("467556275");
    ApplSeqCtrl_18.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_18_set.insert("false");
    all_values.push_back(ApplSeqCtrl_18_set);
    all_compo_names.insert("ApplSeqCtrl_18_set");

    elt.add_element(ApplSeqCtrl_18);
  } // end ApplSeqCtrl
  { // SettlObligInst
    xml_element SettlObligInst_0{"SettlObligInst"};
    multiset<string> SettlObligInst_0_set;
    SettlObligInst_0.add_attribute("NetGrossInd", "1"); // 1
    SettlObligInst_0_set.insert("1");
    SettlObligInst_0.add_attribute("SettlID", "SettlObligID_t_816067918"); // 1
    SettlObligInst_0_set.insert("SettlObligID_t_816067918");
    SettlObligInst_0.add_attribute("SettlTransTyp", "N"); // 1
    SettlObligInst_0_set.insert("N");
    SettlObligInst_0.add_attribute("SettlRefID", "SettlObligRefID_t_538903318"); // 1
    SettlObligInst_0_set.insert("SettlObligRefID_t_538903318");
    SettlObligInst_0.add_attribute("CcyAmt", "CcyAmt_t_292876465"); // 1
    SettlObligInst_0_set.insert("CcyAmt_t_292876465");
    SettlObligInst_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_904780159"); // 1
    SettlObligInst_0_set.insert("SettlCurrAmt_t_904780159");
    SettlObligInst_0.add_attribute("Ccy", "CAN"); // 1
    SettlObligInst_0_set.insert("CAN");
    SettlObligInst_0.add_attribute("SettlCcy", "GBP"); // 1
    SettlObligInst_0_set.insert("GBP");
    SettlObligInst_0.add_attribute("SettlCurrFxRt", "1046997.810000"); // 1
    SettlObligInst_0_set.insert("1046997.810000");
    SettlObligInst_0.add_attribute("SettlDt", "SettlDate_t_2101737895"); // 1
    SettlObligInst_0_set.insert("SettlDate_t_2101737895");
    SettlObligInst_0.add_attribute("EfctvTm", "EffectiveTime_t_1763545073"); // 1
    SettlObligInst_0_set.insert("EffectiveTime_t_1763545073");
    SettlObligInst_0.add_attribute("ExpireTm", "ExpireTime_t_1945585853"); // 1
    SettlObligInst_0_set.insert("ExpireTime_t_1945585853");
    SettlObligInst_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_899471040"); // 1
    SettlObligInst_0_set.insert("LastUpdateTime_t_899471040");
    all_values.push_back(SettlObligInst_0_set);
    all_compo_names.insert("SettlObligInst_0_set");

    {
      xml_element Instrmt_78{"Instrmt"};
      multiset<string> Instrmt_78_set;
      Instrmt_78.add_attribute("Sym", "Symbol_t_2095011608"); // 2
      Instrmt_78_set.insert("Symbol_t_2095011608");
      Instrmt_78.add_attribute("Sfx", "WI"); // 2
      Instrmt_78_set.insert("WI");
      Instrmt_78.add_attribute("ID", "SecurityID_t_189146864"); // 2
      Instrmt_78_set.insert("SecurityID_t_189146864");
      Instrmt_78.add_attribute("Src", "9"); // 2
      Instrmt_78_set.insert("9");
      Instrmt_78.add_attribute("Prod", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("ProdCmplx", "ProductComplex_t_196054952"); // 2
      Instrmt_78_set.insert("ProductComplex_t_196054952");
      Instrmt_78.add_attribute("SecGrp", "SecurityGroup_t_1190259866"); // 2
      Instrmt_78_set.insert("SecurityGroup_t_1190259866");
      Instrmt_78.add_attribute("CFI", "CFICode_t_748791243"); // 2
      Instrmt_78_set.insert("CFICode_t_748791243");
      Instrmt_78.add_attribute("SecTyp", "EUCORP"); // 2
      Instrmt_78_set.insert("EUCORP");
      Instrmt_78.add_attribute("SubTyp", "SecuritySubType_t_1354789453"); // 2
      Instrmt_78_set.insert("SecuritySubType_t_1354789453");
      Instrmt_78.add_attribute("MMY", "1691275547"); // 2
      Instrmt_78_set.insert("1691275547");
      Instrmt_78.add_attribute("MatDt", "MaturityDate_t_1900580563"); // 2
      Instrmt_78_set.insert("MaturityDate_t_1900580563");
      Instrmt_78.add_attribute("MatTm", "1491424934"); // 2
      Instrmt_78_set.insert("1491424934");
      Instrmt_78.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_11348174"); // 2
      Instrmt_78_set.insert("SettleOnOpenFlag_t_11348174");
      Instrmt_78.add_attribute("AsgnMeth", "100260111"); // 2
      Instrmt_78_set.insert("100260111");
      Instrmt_78.add_attribute("Status", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("CpnPmt", "CouponPaymentDate_t_267327554"); // 2
      Instrmt_78_set.insert("CouponPaymentDate_t_267327554");
      Instrmt_78.add_attribute("RestrctTyp", "MR"); // 2
      Instrmt_78_set.insert("MR");
      Instrmt_78.add_attribute("Snrty", "SR"); // 2
      Instrmt_78_set.insert("SR");
      Instrmt_78.add_attribute("NotlPctOut", "8062308.720000"); // 2
      Instrmt_78_set.insert("8062308.720000");
      Instrmt_78.add_attribute("OrigNotlPctOut", "12092044.940000"); // 2
      Instrmt_78_set.insert("12092044.940000");
      Instrmt_78.add_attribute("AttchPnt", "15694232.610000"); // 2
      Instrmt_78_set.insert("15694232.610000");
      Instrmt_78.add_attribute("DetchPnt", "2780357.560000"); // 2
      Instrmt_78_set.insert("2780357.560000");
      Instrmt_78.add_attribute("Issued", "IssueDate_t_934644839"); // 2
      Instrmt_78_set.insert("IssueDate_t_934644839");
      Instrmt_78.add_attribute("RepoCollSecTyp", "85858892"); // 2
      Instrmt_78_set.insert("85858892");
      Instrmt_78.add_attribute("RepoTrm", "32717380"); // 2
      Instrmt_78_set.insert("32717380");
      Instrmt_78.add_attribute("RepoRt", "10393446.200000"); // 2
      Instrmt_78_set.insert("10393446.200000");
      Instrmt_78.add_attribute("Fctr", "401131.390000"); // 2
      Instrmt_78_set.insert("401131.390000");
      Instrmt_78.add_attribute("CrdRtg", "CreditRating_t_1796262454"); // 2
      Instrmt_78_set.insert("CreditRating_t_1796262454");
      Instrmt_78.add_attribute("Rgstry", "InstrRegistry_t_837446826"); // 2
      Instrmt_78_set.insert("InstrRegistry_t_837446826");
      Instrmt_78.add_attribute("IssuCtry", "939584180"); // 2
      Instrmt_78_set.insert("939584180");
      Instrmt_78.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1743790414"); // 2
      Instrmt_78_set.insert("StateOrProvinceOfIssue_t_1743790414");
      Instrmt_78.add_attribute("Lcl", "LocaleOfIssue_t_1826548749"); // 2
      Instrmt_78_set.insert("LocaleOfIssue_t_1826548749");
      Instrmt_78.add_attribute("Redeem", "RedemptionDate_t_1128731044"); // 2
      Instrmt_78_set.insert("RedemptionDate_t_1128731044");
      Instrmt_78.add_attribute("StrkPx", "7853632.590000"); // 2
      Instrmt_78_set.insert("7853632.590000");
      Instrmt_78.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_78_set.insert("EUR");
      Instrmt_78.add_attribute("StrkMult", "19756231.250000"); // 2
      Instrmt_78_set.insert("19756231.250000");
      Instrmt_78.add_attribute("StrkValu", "21399117.030000"); // 2
      Instrmt_78_set.insert("21399117.030000");
      Instrmt_78.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_78_set.insert("3");
      Instrmt_78.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("StrkPxBndryPrcsn", "16837036.020000"); // 2
      Instrmt_78_set.insert("16837036.020000");
      Instrmt_78.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_78_set.insert("2");
      Instrmt_78.add_attribute("OptAt", "526870217"); // 2
      Instrmt_78_set.insert("526870217");
      Instrmt_78.add_attribute("Mult", "16950517.760000"); // 2
      Instrmt_78_set.insert("16950517.760000");
      Instrmt_78.add_attribute("MultTyp", "0"); // 2
      Instrmt_78_set.insert("0");
      Instrmt_78.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("MinPxIncr", "19623793.300000"); // 2
      Instrmt_78_set.insert("19623793.300000");
      Instrmt_78.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1044964213"); // 2
      Instrmt_78_set.insert("MinPriceIncrementAmount_t_1044964213");
      Instrmt_78.add_attribute("UOM", "lbs"); // 2
      Instrmt_78_set.insert("lbs");
      Instrmt_78.add_attribute("UOMQty", "6211265.550000"); // 2
      Instrmt_78_set.insert("6211265.550000");
      Instrmt_78.add_attribute("PxUOM", "MMBtu"); // 2
      Instrmt_78_set.insert("MMBtu");
      Instrmt_78.add_attribute("PxUOMQty", "14954275.950000"); // 2
      Instrmt_78_set.insert("14954275.950000");
      Instrmt_78.add_attribute("SettlMeth", "P"); // 2
      Instrmt_78_set.insert("P");
      Instrmt_78.add_attribute("ExerStyle", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_78_set.insert("3");
      Instrmt_78.add_attribute("OptPayAmt", "OptPayoutAmount_t_931879691"); // 2
      Instrmt_78_set.insert("OptPayoutAmount_t_931879691");
      Instrmt_78.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_78_set.insert("STD");
      Instrmt_78.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_78_set.insert("FUTDA");
      Instrmt_78.add_attribute("ListMeth", "1"); // 2
      Instrmt_78_set.insert("1");
      Instrmt_78.add_attribute("CapPx", "7706376.980000"); // 2
      Instrmt_78_set.insert("7706376.980000");
      Instrmt_78.add_attribute("FlrPx", "4135001.590000"); // 2
      Instrmt_78_set.insert("4135001.590000");
      Instrmt_78.add_attribute("PutCall", "0"); // 2
      Instrmt_78_set.insert("0");
      Instrmt_78.add_attribute("FlexInd", "false"); // 2
      Instrmt_78_set.insert("false");
      Instrmt_78.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_78_set.insert("false");
      Instrmt_78.add_attribute("TmUnit", "H"); // 2
      Instrmt_78_set.insert("H");
      Instrmt_78.add_attribute("CpnRt", "18408232.580000"); // 2
      Instrmt_78_set.insert("18408232.580000");
      Instrmt_78.add_attribute("Exch", "SecurityExchange_t_719533552"); // 2
      Instrmt_78_set.insert("SecurityExchange_t_719533552");
      Instrmt_78.add_attribute("PosLmt", "790468000"); // 2
      Instrmt_78_set.insert("790468000");
      Instrmt_78.add_attribute("NTPosLmt", "1833251313"); // 2
      Instrmt_78_set.insert("1833251313");
      Instrmt_78.add_attribute("Issr", "Issuer_t_994812710"); // 2
      Instrmt_78_set.insert("Issuer_t_994812710");
      Instrmt_78.add_attribute("EncIssrLen", "1973396931"); // 2
      Instrmt_78_set.insert("1973396931");
      Instrmt_78.add_attribute("EncIssr", "EncodedIssuer_t_1369471267"); // 2
      Instrmt_78_set.insert("EncodedIssuer_t_1369471267");
      Instrmt_78.add_attribute("Desc", "SecurityDesc_t_1023188784"); // 2
      Instrmt_78_set.insert("SecurityDesc_t_1023188784");
      Instrmt_78.add_attribute("EncSecDescLen", "352783500"); // 2
      Instrmt_78_set.insert("352783500");
      Instrmt_78.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_917039395"); // 2
      Instrmt_78_set.insert("EncodedSecurityDesc_t_917039395");
      Instrmt_78.add_attribute("Pool", "Pool_t_1151824968"); // 2
      Instrmt_78_set.insert("Pool_t_1151824968");
      Instrmt_78.add_attribute("CSetMo", "1761628381"); // 2
      Instrmt_78_set.insert("1761628381");
      Instrmt_78.add_attribute("CPPgm", "2"); // 2
      Instrmt_78_set.insert("2");
      Instrmt_78.add_attribute("CPRegT", "CPRegType_t_49305534"); // 2
      Instrmt_78_set.insert("CPRegType_t_49305534");
      Instrmt_78.add_attribute("Dated", "DatedDate_t_1687632715"); // 2
      Instrmt_78_set.insert("DatedDate_t_1687632715");
      Instrmt_78.add_attribute("IntAcrl", "InterestAccrualDate_t_1353061633"); // 2
      Instrmt_78_set.insert("InterestAccrualDate_t_1353061633");
      all_values.push_back(Instrmt_78_set);
      all_compo_names.insert("Instrmt_78_set");

      {
        xml_element AID_81{"AID"};
        multiset<string> AID_81_set;
        AID_81.add_attribute("AltID", "SecurityAltID_t_155990594"); // 3
        AID_81_set.insert("SecurityAltID_t_155990594");
        AID_81.add_attribute("AltIDSrc", "C"); // 3
        AID_81_set.insert("C");
        all_values.push_back(AID_81_set);
        all_compo_names.insert("AID_81_set");

        Instrmt_78.add_element(AID_81);
      }
      {
        xml_element SecXML_81{"SecXML"};
        multiset<string> SecXML_81_set;
        SecXML_81.add_attribute("Schema", "SecurityXMLSchema_t_104740296"); // 3
        SecXML_81_set.insert("SecurityXMLSchema_t_104740296");
        all_values.push_back(SecXML_81_set);
        all_compo_names.insert("SecXML_81_set");

        Instrmt_78.add_element(SecXML_81);
      }
      {
        xml_element Evnt_81{"Evnt"};
        multiset<string> Evnt_81_set;
        Evnt_81.add_attribute("EventTyp", "13"); // 3
        Evnt_81_set.insert("13");
        Evnt_81.add_attribute("Dt", "EventDate_t_469379502"); // 3
        Evnt_81_set.insert("EventDate_t_469379502");
        Evnt_81.add_attribute("Tm", "EventTime_t_1036619987"); // 3
        Evnt_81_set.insert("EventTime_t_1036619987");
        Evnt_81.add_attribute("Px", "11305113.650000"); // 3
        Evnt_81_set.insert("11305113.650000");
        Evnt_81.add_attribute("Txt", "EventText_t_2090779129"); // 3
        Evnt_81_set.insert("EventText_t_2090779129");
        all_values.push_back(Evnt_81_set);
        all_compo_names.insert("Evnt_81_set");

        Instrmt_78.add_element(Evnt_81);
      }
      {
        xml_element Pty_400{"Pty"};
        multiset<string> Pty_400_set;
        Pty_400.add_attribute("ID", "InstrumentPartyID_t_1617278485"); // 3
        Pty_400_set.insert("InstrumentPartyID_t_1617278485");
        Pty_400.add_attribute("Src", "8"); // 3
        Pty_400_set.insert("8");
        Pty_400.add_attribute("R", "20"); // 3
        Pty_400_set.insert("20");
        all_values.push_back(Pty_400_set);
        all_compo_names.insert("Pty_400_set");

        {
          xml_element Sub_400{"Sub"};
          multiset<string> Sub_400_set;
          Sub_400.add_attribute("ID", "InstrumentPartySubID_t_1794243749"); // 4
          Sub_400_set.insert("InstrumentPartySubID_t_1794243749");
          Sub_400.add_attribute("Typ", "14"); // 4
          Sub_400_set.insert("14");
          all_values.push_back(Sub_400_set);
          all_compo_names.insert("Sub_400_set");

          Pty_400.add_element(Sub_400);
        }
        Instrmt_78.add_element(Pty_400);
      }
      {
        xml_element CmplxEvnt_78{"CmplxEvnt"};
        multiset<string> CmplxEvnt_78_set;
        CmplxEvnt_78.add_attribute("Typ", "7"); // 3
        CmplxEvnt_78_set.insert("7");
        CmplxEvnt_78.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_609088624"); // 3
        CmplxEvnt_78_set.insert("ComplexOptPayoutAmount_t_609088624");
        CmplxEvnt_78.add_attribute("Px", "20441914.730000"); // 3
        CmplxEvnt_78_set.insert("20441914.730000");
        CmplxEvnt_78.add_attribute("PxBndryMeth", "4"); // 3
        CmplxEvnt_78_set.insert("4");
        CmplxEvnt_78.add_attribute("PxBndryPrcsn", "13995566.240000"); // 3
        CmplxEvnt_78_set.insert("13995566.240000");
        CmplxEvnt_78.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_78_set.insert("1");
        CmplxEvnt_78.add_attribute("Cond", "2"); // 3
        CmplxEvnt_78_set.insert("2");
        all_values.push_back(CmplxEvnt_78_set);
        all_compo_names.insert("CmplxEvnt_78_set");

        {
          xml_element EvntDts_78{"EvntDts"};
          multiset<string> EvntDts_78_set;
          EvntDts_78.add_attribute("StartDt", "ComplexEventStartDate_t_1225469907"); // 4
          EvntDts_78_set.insert("ComplexEventStartDate_t_1225469907");
          EvntDts_78.add_attribute("EndDt", "ComplexEventEndDate_t_951946758"); // 4
          EvntDts_78_set.insert("ComplexEventEndDate_t_951946758");
          all_values.push_back(EvntDts_78_set);
          all_compo_names.insert("EvntDts_78_set");

          {
            xml_element EvntTms_78{"EvntTms"};
            multiset<string> EvntTms_78_set;
            EvntTms_78.add_attribute("StartTm", "341594595"); // 5
            EvntTms_78_set.insert("341594595");
            EvntTms_78.add_attribute("EndTm", "1578253407"); // 5
            EvntTms_78_set.insert("1578253407");
            all_values.push_back(EvntTms_78_set);
            all_compo_names.insert("EvntTms_78_set");

            EvntDts_78.add_element(EvntTms_78);
          }
          CmplxEvnt_78.add_element(EvntDts_78);
        }
        Instrmt_78.add_element(CmplxEvnt_78);
      }
      SettlObligInst_0.add_element(Instrmt_78);
    }
    {
      xml_element Pty_401{"Pty"};
      multiset<string> Pty_401_set;
      Pty_401.add_attribute("ID", "PartyID_t_1868986153"); // 2
      Pty_401_set.insert("PartyID_t_1868986153");
      Pty_401.add_attribute("Src", "A"); // 2
      Pty_401_set.insert("A");
      Pty_401.add_attribute("R", "82"); // 2
      Pty_401_set.insert("82");
      all_values.push_back(Pty_401_set);
      all_compo_names.insert("Pty_401_set");

      {
        xml_element Sub_401{"Sub"};
        multiset<string> Sub_401_set;
        Sub_401.add_attribute("ID", "PartySubID_t_453437583"); // 3
        Sub_401_set.insert("PartySubID_t_453437583");
        Sub_401.add_attribute("Typ", "20"); // 3
        Sub_401_set.insert("20");
        all_values.push_back(Sub_401_set);
        all_compo_names.insert("Sub_401_set");

        Pty_401.add_element(Sub_401);
      }
      SettlObligInst_0.add_element(Pty_401);
    }
    {
      xml_element SettlDetails_0{"SettlDetails"};
      multiset<string> SettlDetails_0_set;
      SettlDetails_0.add_attribute("SettlSrc", "3"); // 2
      SettlDetails_0_set.insert("3");
      all_values.push_back(SettlDetails_0_set);
      all_compo_names.insert("SettlDetails_0_set");

      {
        xml_element Pty_402{"Pty"};
        multiset<string> Pty_402_set;
        Pty_402.add_attribute("ID", "SettlPartyID_t_1806499216"); // 3
        Pty_402_set.insert("SettlPartyID_t_1806499216");
        Pty_402.add_attribute("Src", "I"); // 3
        Pty_402_set.insert("I");
        Pty_402.add_attribute("R", "61"); // 3
        Pty_402_set.insert("61");
        all_values.push_back(Pty_402_set);
        all_compo_names.insert("Pty_402_set");

        {
          xml_element Sub_402{"Sub"};
          multiset<string> Sub_402_set;
          Sub_402.add_attribute("ID", "SettlPartySubID_t_1911239512"); // 4
          Sub_402_set.insert("SettlPartySubID_t_1911239512");
          Sub_402.add_attribute("Typ", "16"); // 4
          Sub_402_set.insert("16");
          all_values.push_back(Sub_402_set);
          all_compo_names.insert("Sub_402_set");

          Pty_402.add_element(Sub_402);
        }
        SettlDetails_0.add_element(Pty_402);
      }
      SettlObligInst_0.add_element(SettlDetails_0);
    }
    elt.add_element(SettlObligInst_0);
  } // end SettlObligInst
  { // SettlObligInst
    xml_element SettlObligInst_1{"SettlObligInst"};
    multiset<string> SettlObligInst_1_set;
    SettlObligInst_1.add_attribute("NetGrossInd", "2"); // 1
    SettlObligInst_1_set.insert("2");
    SettlObligInst_1.add_attribute("SettlID", "SettlObligID_t_800375852"); // 1
    SettlObligInst_1_set.insert("SettlObligID_t_800375852");
    SettlObligInst_1.add_attribute("SettlTransTyp", "R"); // 1
    SettlObligInst_1_set.insert("R");
    SettlObligInst_1.add_attribute("SettlRefID", "SettlObligRefID_t_33315207"); // 1
    SettlObligInst_1_set.insert("SettlObligRefID_t_33315207");
    SettlObligInst_1.add_attribute("CcyAmt", "CcyAmt_t_270170689"); // 1
    SettlObligInst_1_set.insert("CcyAmt_t_270170689");
    SettlObligInst_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1632729318"); // 1
    SettlObligInst_1_set.insert("SettlCurrAmt_t_1632729318");
    SettlObligInst_1.add_attribute("Ccy", "USD"); // 1
    SettlObligInst_1_set.insert("USD");
    SettlObligInst_1.add_attribute("SettlCcy", "EUR"); // 1
    SettlObligInst_1_set.insert("EUR");
    SettlObligInst_1.add_attribute("SettlCurrFxRt", "5260194.140000"); // 1
    SettlObligInst_1_set.insert("5260194.140000");
    SettlObligInst_1.add_attribute("SettlDt", "SettlDate_t_1732805357"); // 1
    SettlObligInst_1_set.insert("SettlDate_t_1732805357");
    SettlObligInst_1.add_attribute("EfctvTm", "EffectiveTime_t_612730792"); // 1
    SettlObligInst_1_set.insert("EffectiveTime_t_612730792");
    SettlObligInst_1.add_attribute("ExpireTm", "ExpireTime_t_1925576038"); // 1
    SettlObligInst_1_set.insert("ExpireTime_t_1925576038");
    SettlObligInst_1.add_attribute("LastUpdateTm", "LastUpdateTime_t_1315280848"); // 1
    SettlObligInst_1_set.insert("LastUpdateTime_t_1315280848");
    all_values.push_back(SettlObligInst_1_set);
    all_compo_names.insert("SettlObligInst_1_set");

    {
      xml_element Instrmt_79{"Instrmt"};
      multiset<string> Instrmt_79_set;
      Instrmt_79.add_attribute("Sym", "Symbol_t_2078620251"); // 2
      Instrmt_79_set.insert("Symbol_t_2078620251");
      Instrmt_79.add_attribute("Sfx", "CD"); // 2
      Instrmt_79_set.insert("CD");
      Instrmt_79.add_attribute("ID", "SecurityID_t_119743958"); // 2
      Instrmt_79_set.insert("SecurityID_t_119743958");
      Instrmt_79.add_attribute("Src", "F"); // 2
      Instrmt_79_set.insert("F");
      Instrmt_79.add_attribute("Prod", "12"); // 2
      Instrmt_79_set.insert("12");
      Instrmt_79.add_attribute("ProdCmplx", "ProductComplex_t_1988730111"); // 2
      Instrmt_79_set.insert("ProductComplex_t_1988730111");
      Instrmt_79.add_attribute("SecGrp", "SecurityGroup_t_1766150761"); // 2
      Instrmt_79_set.insert("SecurityGroup_t_1766150761");
      Instrmt_79.add_attribute("CFI", "CFICode_t_1626730198"); // 2
      Instrmt_79_set.insert("CFICode_t_1626730198");
      Instrmt_79.add_attribute("SecTyp", "PEF"); // 2
      Instrmt_79_set.insert("PEF");
      Instrmt_79.add_attribute("SubTyp", "SecuritySubType_t_1161392211"); // 2
      Instrmt_79_set.insert("SecuritySubType_t_1161392211");
      Instrmt_79.add_attribute("MMY", "211793758"); // 2
      Instrmt_79_set.insert("211793758");
      Instrmt_79.add_attribute("MatDt", "MaturityDate_t_2101183263"); // 2
      Instrmt_79_set.insert("MaturityDate_t_2101183263");
      Instrmt_79.add_attribute("MatTm", "712624254"); // 2
      Instrmt_79_set.insert("712624254");
      Instrmt_79.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1979917629"); // 2
      Instrmt_79_set.insert("SettleOnOpenFlag_t_1979917629");
      Instrmt_79.add_attribute("AsgnMeth", "1864939128"); // 2
      Instrmt_79_set.insert("1864939128");
      Instrmt_79.add_attribute("Status", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("CpnPmt", "CouponPaymentDate_t_2069937354"); // 2
      Instrmt_79_set.insert("CouponPaymentDate_t_2069937354");
      Instrmt_79.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_79_set.insert("FR");
      Instrmt_79.add_attribute("Snrty", "SD"); // 2
      Instrmt_79_set.insert("SD");
      Instrmt_79.add_attribute("NotlPctOut", "21032525.610000"); // 2
      Instrmt_79_set.insert("21032525.610000");
      Instrmt_79.add_attribute("OrigNotlPctOut", "7880020.210000"); // 2
      Instrmt_79_set.insert("7880020.210000");
      Instrmt_79.add_attribute("AttchPnt", "6780027.160000"); // 2
      Instrmt_79_set.insert("6780027.160000");
      Instrmt_79.add_attribute("DetchPnt", "3458797.610000"); // 2
      Instrmt_79_set.insert("3458797.610000");
      Instrmt_79.add_attribute("Issued", "IssueDate_t_704932811"); // 2
      Instrmt_79_set.insert("IssueDate_t_704932811");
      Instrmt_79.add_attribute("RepoCollSecTyp", "366616600"); // 2
      Instrmt_79_set.insert("366616600");
      Instrmt_79.add_attribute("RepoTrm", "487533804"); // 2
      Instrmt_79_set.insert("487533804");
      Instrmt_79.add_attribute("RepoRt", "12309522.250000"); // 2
      Instrmt_79_set.insert("12309522.250000");
      Instrmt_79.add_attribute("Fctr", "20994219.580000"); // 2
      Instrmt_79_set.insert("20994219.580000");
      Instrmt_79.add_attribute("CrdRtg", "CreditRating_t_1100264596"); // 2
      Instrmt_79_set.insert("CreditRating_t_1100264596");
      Instrmt_79.add_attribute("Rgstry", "InstrRegistry_t_1009044615"); // 2
      Instrmt_79_set.insert("InstrRegistry_t_1009044615");
      Instrmt_79.add_attribute("IssuCtry", "1267219158"); // 2
      Instrmt_79_set.insert("1267219158");
      Instrmt_79.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1031401199"); // 2
      Instrmt_79_set.insert("StateOrProvinceOfIssue_t_1031401199");
      Instrmt_79.add_attribute("Lcl", "LocaleOfIssue_t_2012606913"); // 2
      Instrmt_79_set.insert("LocaleOfIssue_t_2012606913");
      Instrmt_79.add_attribute("Redeem", "RedemptionDate_t_1386963116"); // 2
      Instrmt_79_set.insert("RedemptionDate_t_1386963116");
      Instrmt_79.add_attribute("StrkPx", "13041323.970000"); // 2
      Instrmt_79_set.insert("13041323.970000");
      Instrmt_79.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_79_set.insert("CHF");
      Instrmt_79.add_attribute("StrkMult", "9227995.110000"); // 2
      Instrmt_79_set.insert("9227995.110000");
      Instrmt_79.add_attribute("StrkValu", "19261855.210000"); // 2
      Instrmt_79_set.insert("19261855.210000");
      Instrmt_79.add_attribute("StrkPxDtrmnMeth", "3"); // 2
      Instrmt_79_set.insert("3");
      Instrmt_79.add_attribute("StrkPxBndryMeth", "3"); // 2
      Instrmt_79_set.insert("3");
      Instrmt_79.add_attribute("StrkPxBndryPrcsn", "21379792.790000"); // 2
      Instrmt_79_set.insert("21379792.790000");
      Instrmt_79.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_79_set.insert("3");
      Instrmt_79.add_attribute("OptAt", "649332328"); // 2
      Instrmt_79_set.insert("649332328");
      Instrmt_79.add_attribute("Mult", "19704132.600000"); // 2
      Instrmt_79_set.insert("19704132.600000");
      Instrmt_79.add_attribute("MultTyp", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("FlowSchedTyp", "0"); // 2
      Instrmt_79_set.insert("0");
      Instrmt_79.add_attribute("MinPxIncr", "18928669.660000"); // 2
      Instrmt_79_set.insert("18928669.660000");
      Instrmt_79.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1711880054"); // 2
      Instrmt_79_set.insert("MinPriceIncrementAmount_t_1711880054");
      Instrmt_79.add_attribute("UOM", "lbs"); // 2
      Instrmt_79_set.insert("lbs");
      Instrmt_79.add_attribute("UOMQty", "18486358.800000"); // 2
      Instrmt_79_set.insert("18486358.800000");
      Instrmt_79.add_attribute("PxUOM", "t"); // 2
      Instrmt_79_set.insert("t");
      Instrmt_79.add_attribute("PxUOMQty", "18337852.340000"); // 2
      Instrmt_79_set.insert("18337852.340000");
      Instrmt_79.add_attribute("SettlMeth", "P"); // 2
      Instrmt_79_set.insert("P");
      Instrmt_79.add_attribute("ExerStyle", "0"); // 2
      Instrmt_79_set.insert("0");
      Instrmt_79.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("OptPayAmt", "OptPayoutAmount_t_534565797"); // 2
      Instrmt_79_set.insert("OptPayoutAmount_t_534565797");
      Instrmt_79.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_79_set.insert("PCTPAR");
      Instrmt_79.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_79_set.insert("FUT");
      Instrmt_79.add_attribute("ListMeth", "0"); // 2
      Instrmt_79_set.insert("0");
      Instrmt_79.add_attribute("CapPx", "11498444.300000"); // 2
      Instrmt_79_set.insert("11498444.300000");
      Instrmt_79.add_attribute("FlrPx", "12720756.540000"); // 2
      Instrmt_79_set.insert("12720756.540000");
      Instrmt_79.add_attribute("PutCall", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("FlexInd", "true"); // 2
      Instrmt_79_set.insert("true");
      Instrmt_79.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_79_set.insert("true");
      Instrmt_79.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_79_set.insert("Wk");
      Instrmt_79.add_attribute("CpnRt", "13144230.190000"); // 2
      Instrmt_79_set.insert("13144230.190000");
      Instrmt_79.add_attribute("Exch", "SecurityExchange_t_1739764702"); // 2
      Instrmt_79_set.insert("SecurityExchange_t_1739764702");
      Instrmt_79.add_attribute("PosLmt", "598196206"); // 2
      Instrmt_79_set.insert("598196206");
      Instrmt_79.add_attribute("NTPosLmt", "1093124892"); // 2
      Instrmt_79_set.insert("1093124892");
      Instrmt_79.add_attribute("Issr", "Issuer_t_1115174680"); // 2
      Instrmt_79_set.insert("Issuer_t_1115174680");
      Instrmt_79.add_attribute("EncIssrLen", "534904280"); // 2
      Instrmt_79_set.insert("534904280");
      Instrmt_79.add_attribute("EncIssr", "EncodedIssuer_t_1083620523"); // 2
      Instrmt_79_set.insert("EncodedIssuer_t_1083620523");
      Instrmt_79.add_attribute("Desc", "SecurityDesc_t_444284274"); // 2
      Instrmt_79_set.insert("SecurityDesc_t_444284274");
      Instrmt_79.add_attribute("EncSecDescLen", "1184236608"); // 2
      Instrmt_79_set.insert("1184236608");
      Instrmt_79.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_906550135"); // 2
      Instrmt_79_set.insert("EncodedSecurityDesc_t_906550135");
      Instrmt_79.add_attribute("Pool", "Pool_t_1638332996"); // 2
      Instrmt_79_set.insert("Pool_t_1638332996");
      Instrmt_79.add_attribute("CSetMo", "1147262080"); // 2
      Instrmt_79_set.insert("1147262080");
      Instrmt_79.add_attribute("CPPgm", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("CPRegT", "CPRegType_t_1202729402"); // 2
      Instrmt_79_set.insert("CPRegType_t_1202729402");
      Instrmt_79.add_attribute("Dated", "DatedDate_t_155560950"); // 2
      Instrmt_79_set.insert("DatedDate_t_155560950");
      Instrmt_79.add_attribute("IntAcrl", "InterestAccrualDate_t_353085685"); // 2
      Instrmt_79_set.insert("InterestAccrualDate_t_353085685");
      all_values.push_back(Instrmt_79_set);
      all_compo_names.insert("Instrmt_79_set");

      {
        xml_element AID_82{"AID"};
        multiset<string> AID_82_set;
        AID_82.add_attribute("AltID", "SecurityAltID_t_1555127829"); // 3
        AID_82_set.insert("SecurityAltID_t_1555127829");
        AID_82.add_attribute("AltIDSrc", "D"); // 3
        AID_82_set.insert("D");
        all_values.push_back(AID_82_set);
        all_compo_names.insert("AID_82_set");

        Instrmt_79.add_element(AID_82);
      }
      {
        xml_element SecXML_82{"SecXML"};
        multiset<string> SecXML_82_set;
        SecXML_82.add_attribute("Schema", "SecurityXMLSchema_t_400117678"); // 3
        SecXML_82_set.insert("SecurityXMLSchema_t_400117678");
        all_values.push_back(SecXML_82_set);
        all_compo_names.insert("SecXML_82_set");

        Instrmt_79.add_element(SecXML_82);
      }
      {
        xml_element Evnt_82{"Evnt"};
        multiset<string> Evnt_82_set;
        Evnt_82.add_attribute("EventTyp", "19"); // 3
        Evnt_82_set.insert("19");
        Evnt_82.add_attribute("Dt", "EventDate_t_2042264371"); // 3
        Evnt_82_set.insert("EventDate_t_2042264371");
        Evnt_82.add_attribute("Tm", "EventTime_t_934683476"); // 3
        Evnt_82_set.insert("EventTime_t_934683476");
        Evnt_82.add_attribute("Px", "6057752.340000"); // 3
        Evnt_82_set.insert("6057752.340000");
        Evnt_82.add_attribute("Txt", "EventText_t_2047120867"); // 3
        Evnt_82_set.insert("EventText_t_2047120867");
        all_values.push_back(Evnt_82_set);
        all_compo_names.insert("Evnt_82_set");

        Instrmt_79.add_element(Evnt_82);
      }
      {
        xml_element Pty_403{"Pty"};
        multiset<string> Pty_403_set;
        Pty_403.add_attribute("ID", "InstrumentPartyID_t_422030222"); // 3
        Pty_403_set.insert("InstrumentPartyID_t_422030222");
        Pty_403.add_attribute("Src", "G"); // 3
        Pty_403_set.insert("G");
        Pty_403.add_attribute("R", "68"); // 3
        Pty_403_set.insert("68");
        all_values.push_back(Pty_403_set);
        all_compo_names.insert("Pty_403_set");

        {
          xml_element Sub_403{"Sub"};
          multiset<string> Sub_403_set;
          Sub_403.add_attribute("ID", "InstrumentPartySubID_t_940778167"); // 4
          Sub_403_set.insert("InstrumentPartySubID_t_940778167");
          Sub_403.add_attribute("Typ", "7"); // 4
          Sub_403_set.insert("7");
          all_values.push_back(Sub_403_set);
          all_compo_names.insert("Sub_403_set");

          Pty_403.add_element(Sub_403);
        }
        Instrmt_79.add_element(Pty_403);
      }
      {
        xml_element CmplxEvnt_79{"CmplxEvnt"};
        multiset<string> CmplxEvnt_79_set;
        CmplxEvnt_79.add_attribute("Typ", "4"); // 3
        CmplxEvnt_79_set.insert("4");
        CmplxEvnt_79.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_616174862"); // 3
        CmplxEvnt_79_set.insert("ComplexOptPayoutAmount_t_616174862");
        CmplxEvnt_79.add_attribute("Px", "19375267.320000"); // 3
        CmplxEvnt_79_set.insert("19375267.320000");
        CmplxEvnt_79.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_79_set.insert("1");
        CmplxEvnt_79.add_attribute("PxBndryPrcsn", "12143710.680000"); // 3
        CmplxEvnt_79_set.insert("12143710.680000");
        CmplxEvnt_79.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_79_set.insert("2");
        CmplxEvnt_79.add_attribute("Cond", "2"); // 3
        CmplxEvnt_79_set.insert("2");
        all_values.push_back(CmplxEvnt_79_set);
        all_compo_names.insert("CmplxEvnt_79_set");

        {
          xml_element EvntDts_79{"EvntDts"};
          multiset<string> EvntDts_79_set;
          EvntDts_79.add_attribute("StartDt", "ComplexEventStartDate_t_1749275348"); // 4
          EvntDts_79_set.insert("ComplexEventStartDate_t_1749275348");
          EvntDts_79.add_attribute("EndDt", "ComplexEventEndDate_t_1966788499"); // 4
          EvntDts_79_set.insert("ComplexEventEndDate_t_1966788499");
          all_values.push_back(EvntDts_79_set);
          all_compo_names.insert("EvntDts_79_set");

          {
            xml_element EvntTms_79{"EvntTms"};
            multiset<string> EvntTms_79_set;
            EvntTms_79.add_attribute("StartTm", "687524357"); // 5
            EvntTms_79_set.insert("687524357");
            EvntTms_79.add_attribute("EndTm", "786028309"); // 5
            EvntTms_79_set.insert("786028309");
            all_values.push_back(EvntTms_79_set);
            all_compo_names.insert("EvntTms_79_set");

            EvntDts_79.add_element(EvntTms_79);
          }
          CmplxEvnt_79.add_element(EvntDts_79);
        }
        Instrmt_79.add_element(CmplxEvnt_79);
      }
      SettlObligInst_1.add_element(Instrmt_79);
    }
    {
      xml_element Pty_404{"Pty"};
      multiset<string> Pty_404_set;
      Pty_404.add_attribute("ID", "PartyID_t_725854986"); // 2
      Pty_404_set.insert("PartyID_t_725854986");
      Pty_404.add_attribute("Src", "7"); // 2
      Pty_404_set.insert("7");
      Pty_404.add_attribute("R", "67"); // 2
      Pty_404_set.insert("67");
      all_values.push_back(Pty_404_set);
      all_compo_names.insert("Pty_404_set");

      {
        xml_element Sub_404{"Sub"};
        multiset<string> Sub_404_set;
        Sub_404.add_attribute("ID", "PartySubID_t_1377788439"); // 3
        Sub_404_set.insert("PartySubID_t_1377788439");
        Sub_404.add_attribute("Typ", "2"); // 3
        Sub_404_set.insert("2");
        all_values.push_back(Sub_404_set);
        all_compo_names.insert("Sub_404_set");

        Pty_404.add_element(Sub_404);
      }
      SettlObligInst_1.add_element(Pty_404);
    }
    {
      xml_element SettlDetails_1{"SettlDetails"};
      multiset<string> SettlDetails_1_set;
      SettlDetails_1.add_attribute("SettlSrc", "1"); // 2
      SettlDetails_1_set.insert("1");
      all_values.push_back(SettlDetails_1_set);
      all_compo_names.insert("SettlDetails_1_set");

      {
        xml_element Pty_405{"Pty"};
        multiset<string> Pty_405_set;
        Pty_405.add_attribute("ID", "SettlPartyID_t_1730874125"); // 3
        Pty_405_set.insert("SettlPartyID_t_1730874125");
        Pty_405.add_attribute("Src", "H"); // 3
        Pty_405_set.insert("H");
        Pty_405.add_attribute("R", "1"); // 3
        Pty_405_set.insert("1");
        all_values.push_back(Pty_405_set);
        all_compo_names.insert("Pty_405_set");

        {
          xml_element Sub_405{"Sub"};
          multiset<string> Sub_405_set;
          Sub_405.add_attribute("ID", "SettlPartySubID_t_2130991803"); // 4
          Sub_405_set.insert("SettlPartySubID_t_2130991803");
          Sub_405.add_attribute("Typ", "17"); // 4
          Sub_405_set.insert("17");
          all_values.push_back(Sub_405_set);
          all_compo_names.insert("Sub_405_set");

          Pty_405.add_element(Sub_405);
        }
        SettlDetails_1.add_element(Pty_405);
      }
      SettlObligInst_1.add_element(SettlDetails_1);
    }
    elt.add_element(SettlObligInst_1);
  } // end SettlObligInst
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
