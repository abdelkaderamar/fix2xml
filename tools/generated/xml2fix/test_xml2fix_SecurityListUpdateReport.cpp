#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/SecurityListUpdateReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( SecurityListUpdateReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"SecListUpd" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> SecurityListUpdateReport_message_t_0;
  elt.add_attribute("RptID", "2111083323"); // 0
  SecurityListUpdateReport_message_t_0.insert("2111083323");
  elt.add_attribute("ListID", "SecurityListID_t_1243209082"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListID_t_1243209082");
  elt.add_attribute("ListRefID", "SecurityListRefID_t_57650533"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListRefID_t_57650533");
  elt.add_attribute("ListDesc", "SecurityListDesc_t_1048190888"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityListDesc_t_1048190888");
  elt.add_attribute("ListTyp", "1"); // 0
  SecurityListUpdateReport_message_t_0.insert("1");
  elt.add_attribute("LstTypSrc", "2"); // 0
  SecurityListUpdateReport_message_t_0.insert("2");
  elt.add_attribute("ReqID", "SecurityReqID_t_1386738729"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityReqID_t_1386738729");
  elt.add_attribute("RspID", "SecurityResponseID_t_171472509"); // 0
  SecurityListUpdateReport_message_t_0.insert("SecurityResponseID_t_171472509");
  elt.add_attribute("ReqRslt", "2"); // 0
  SecurityListUpdateReport_message_t_0.insert("2");
  elt.add_attribute("TotNoReltdSym", "696569024"); // 0
  SecurityListUpdateReport_message_t_0.insert("696569024");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1121704728"); // 0
  SecurityListUpdateReport_message_t_0.insert("ClearingBusinessDate_t_1121704728");
  elt.add_attribute("UpdActn", "A"); // 0
  SecurityListUpdateReport_message_t_0.insert("A");
  elt.add_attribute("CorpActn", "A"); // 0
  SecurityListUpdateReport_message_t_0.insert("A");
  elt.add_attribute("MktID", "MarketID_t_256506268"); // 0
  SecurityListUpdateReport_message_t_0.insert("MarketID_t_256506268");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_929856509"); // 0
  SecurityListUpdateReport_message_t_0.insert("MarketSegmentID_t_929856509");
  elt.add_attribute("TxnTm", "TransactTime_t_128576417"); // 0
  SecurityListUpdateReport_message_t_0.insert("TransactTime_t_128576417");
  elt.add_attribute("LastFragment", "Y"); // 0
  SecurityListUpdateReport_message_t_0.insert("Y");
  all_values.push_back(SecurityListUpdateReport_message_t_0);
  all_compo_names.insert("SecurityListUpdateReport_message_t");

  { // Hdr
    xml_element Hdr_85{"Hdr"};
    multiset<string> Hdr_85_set;
    Hdr_85.add_attribute("SeqNum", "354066479"); // 1
    Hdr_85_set.insert("354066479");
    Hdr_85.add_attribute("SID", "SenderCompID_t_189564561"); // 1
    Hdr_85_set.insert("SenderCompID_t_189564561");
    Hdr_85.add_attribute("TID", "TargetCompID_t_1753683380"); // 1
    Hdr_85_set.insert("TargetCompID_t_1753683380");
    Hdr_85.add_attribute("OBID", "OnBehalfOfCompID_t_316620328"); // 1
    Hdr_85_set.insert("OnBehalfOfCompID_t_316620328");
    Hdr_85.add_attribute("D2ID", "DeliverToCompID_t_152419484"); // 1
    Hdr_85_set.insert("DeliverToCompID_t_152419484");
    Hdr_85.add_attribute("SSub", "SenderSubID_t_171828669"); // 1
    Hdr_85_set.insert("SenderSubID_t_171828669");
    Hdr_85.add_attribute("SLoc", "SenderLocationID_t_1852234657"); // 1
    Hdr_85_set.insert("SenderLocationID_t_1852234657");
    Hdr_85.add_attribute("TSub", "TargetSubID_t_1565342417"); // 1
    Hdr_85_set.insert("TargetSubID_t_1565342417");
    Hdr_85.add_attribute("TLoc", "TargetLocationID_t_326283584"); // 1
    Hdr_85_set.insert("TargetLocationID_t_326283584");
    Hdr_85.add_attribute("OBSub", "OnBehalfOfSubID_t_1569805244"); // 1
    Hdr_85_set.insert("OnBehalfOfSubID_t_1569805244");
    Hdr_85.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1171724188"); // 1
    Hdr_85_set.insert("OnBehalfOfLocationID_t_1171724188");
    Hdr_85.add_attribute("D2Sub", "DeliverToSubID_t_1569355267"); // 1
    Hdr_85_set.insert("DeliverToSubID_t_1569355267");
    Hdr_85.add_attribute("D2Loc", "DeliverToLocationID_t_1503177305"); // 1
    Hdr_85_set.insert("DeliverToLocationID_t_1503177305");
    Hdr_85.add_attribute("PosDup", "Y"); // 1
    Hdr_85_set.insert("Y");
    Hdr_85.add_attribute("PosRsnd", "N"); // 1
    Hdr_85_set.insert("N");
    Hdr_85.add_attribute("Snt", "SendingTime_t_598902739"); // 1
    Hdr_85_set.insert("SendingTime_t_598902739");
    Hdr_85.add_attribute("OrigSnt", "OrigSendingTime_t_1059610756"); // 1
    Hdr_85_set.insert("OrigSendingTime_t_1059610756");
    Hdr_85.add_attribute("MsgEncd", "MessageEncoding_t_433662183"); // 1
    Hdr_85_set.insert("MessageEncoding_t_433662183");
    all_values.push_back(Hdr_85_set);
    all_compo_names.insert("Hdr_85_set");

    {
      xml_element Hop_85{"Hop"};
      multiset<string> Hop_85_set;
      Hop_85.add_attribute("ID", "HopCompID_t_1596153264"); // 2
      Hop_85_set.insert("HopCompID_t_1596153264");
      Hop_85.add_attribute("Ref", "1741578231"); // 2
      Hop_85_set.insert("1741578231");
      Hop_85.add_attribute("Snt", "HopSendingTime_t_1820400912"); // 2
      Hop_85_set.insert("HopSendingTime_t_1820400912");
      all_values.push_back(Hop_85_set);
      all_compo_names.insert("Hop_85_set");

      Hdr_85.add_element(Hop_85);
    }
    elt.add_element(Hdr_85);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_15{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_15_set;
    ApplSeqCtrl_15.add_attribute("ApplID", "ApplID_t_1767625773"); // 1
    ApplSeqCtrl_15_set.insert("ApplID_t_1767625773");
    ApplSeqCtrl_15.add_attribute("ApplSeqNum", "31259805"); // 1
    ApplSeqCtrl_15_set.insert("31259805");
    ApplSeqCtrl_15.add_attribute("ApplLastSeqNum", "369486288"); // 1
    ApplSeqCtrl_15_set.insert("369486288");
    ApplSeqCtrl_15.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_15_set.insert("false");
    all_values.push_back(ApplSeqCtrl_15_set);
    all_compo_names.insert("ApplSeqCtrl_15_set");

    elt.add_element(ApplSeqCtrl_15);
  } // end ApplSeqCtrl
  { // SecL
    xml_element SecL_4{"SecL"};
    multiset<string> SecL_4_set;
    SecL_4.add_attribute("ListUpdActn", "A"); // 1
    SecL_4_set.insert("A");
    SecL_4.add_attribute("Ccy", "JPY"); // 1
    SecL_4_set.insert("JPY");
    SecL_4.add_attribute("TxnTm", "RelSymTransactTime_t_1676544825"); // 1
    SecL_4_set.insert("RelSymTransactTime_t_1676544825");
    SecL_4.add_attribute("Txt", "Text_t_2142875634"); // 1
    SecL_4_set.insert("Text_t_2142875634");
    SecL_4.add_attribute("EncTxtLen", "454248435"); // 1
    SecL_4_set.insert("454248435");
    SecL_4.add_attribute("EncTxt", "EncodedText_t_1866109386"); // 1
    SecL_4_set.insert("EncodedText_t_1866109386");
    all_values.push_back(SecL_4_set);
    all_compo_names.insert("SecL_4_set");

    {
      xml_element Instrmt_79{"Instrmt"};
      multiset<string> Instrmt_79_set;
      Instrmt_79.add_attribute("Sym", "Symbol_t_1749075366"); // 2
      Instrmt_79_set.insert("Symbol_t_1749075366");
      Instrmt_79.add_attribute("Sfx", "CD"); // 2
      Instrmt_79_set.insert("CD");
      Instrmt_79.add_attribute("ID", "SecurityID_t_2018528870"); // 2
      Instrmt_79_set.insert("SecurityID_t_2018528870");
      Instrmt_79.add_attribute("Src", "I"); // 2
      Instrmt_79_set.insert("I");
      Instrmt_79.add_attribute("Prod", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("ProdCmplx", "ProductComplex_t_1436387640"); // 2
      Instrmt_79_set.insert("ProductComplex_t_1436387640");
      Instrmt_79.add_attribute("SecGrp", "SecurityGroup_t_99703972"); // 2
      Instrmt_79_set.insert("SecurityGroup_t_99703972");
      Instrmt_79.add_attribute("CFI", "CFICode_t_2045425017"); // 2
      Instrmt_79_set.insert("CFICode_t_2045425017");
      Instrmt_79.add_attribute("SecTyp", "TBOND"); // 2
      Instrmt_79_set.insert("TBOND");
      Instrmt_79.add_attribute("SubTyp", "SecuritySubType_t_1669059239"); // 2
      Instrmt_79_set.insert("SecuritySubType_t_1669059239");
      Instrmt_79.add_attribute("MMY", "1401118674"); // 2
      Instrmt_79_set.insert("1401118674");
      Instrmt_79.add_attribute("MatDt", "MaturityDate_t_1462588403"); // 2
      Instrmt_79_set.insert("MaturityDate_t_1462588403");
      Instrmt_79.add_attribute("MatTm", "1054530534"); // 2
      Instrmt_79_set.insert("1054530534");
      Instrmt_79.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2000021413"); // 2
      Instrmt_79_set.insert("SettleOnOpenFlag_t_2000021413");
      Instrmt_79.add_attribute("AsgnMeth", "374715512"); // 2
      Instrmt_79_set.insert("374715512");
      Instrmt_79.add_attribute("Status", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("CpnPmt", "CouponPaymentDate_t_1448691029"); // 2
      Instrmt_79_set.insert("CouponPaymentDate_t_1448691029");
      Instrmt_79.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_79_set.insert("XR");
      Instrmt_79.add_attribute("Snrty", "SR"); // 2
      Instrmt_79_set.insert("SR");
      Instrmt_79.add_attribute("NotlPctOut", "10688331.540000"); // 2
      Instrmt_79_set.insert("10688331.540000");
      Instrmt_79.add_attribute("OrigNotlPctOut", "699.000000"); // 2
      Instrmt_79_set.insert("699.000000");
      Instrmt_79.add_attribute("AttchPnt", "15305962.690000"); // 2
      Instrmt_79_set.insert("15305962.690000");
      Instrmt_79.add_attribute("DetchPnt", "18106800.070000"); // 2
      Instrmt_79_set.insert("18106800.070000");
      Instrmt_79.add_attribute("Issued", "IssueDate_t_1317878995"); // 2
      Instrmt_79_set.insert("IssueDate_t_1317878995");
      Instrmt_79.add_attribute("RepoCollSecTyp", "931081029"); // 2
      Instrmt_79_set.insert("931081029");
      Instrmt_79.add_attribute("RepoTrm", "661549480"); // 2
      Instrmt_79_set.insert("661549480");
      Instrmt_79.add_attribute("RepoRt", "14180609.510000"); // 2
      Instrmt_79_set.insert("14180609.510000");
      Instrmt_79.add_attribute("Fctr", "4601422.060000"); // 2
      Instrmt_79_set.insert("4601422.060000");
      Instrmt_79.add_attribute("CrdRtg", "CreditRating_t_656941466"); // 2
      Instrmt_79_set.insert("CreditRating_t_656941466");
      Instrmt_79.add_attribute("Rgstry", "InstrRegistry_t_1872309386"); // 2
      Instrmt_79_set.insert("InstrRegistry_t_1872309386");
      Instrmt_79.add_attribute("IssuCtry", "178767944"); // 2
      Instrmt_79_set.insert("178767944");
      Instrmt_79.add_attribute("StPrv", "StateOrProvinceOfIssue_t_258533185"); // 2
      Instrmt_79_set.insert("StateOrProvinceOfIssue_t_258533185");
      Instrmt_79.add_attribute("Lcl", "LocaleOfIssue_t_495694502"); // 2
      Instrmt_79_set.insert("LocaleOfIssue_t_495694502");
      Instrmt_79.add_attribute("Redeem", "RedemptionDate_t_49813167"); // 2
      Instrmt_79_set.insert("RedemptionDate_t_49813167");
      Instrmt_79.add_attribute("StrkPx", "319535.720000"); // 2
      Instrmt_79_set.insert("319535.720000");
      Instrmt_79.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_79_set.insert("CHF");
      Instrmt_79.add_attribute("StrkMult", "1316575.440000"); // 2
      Instrmt_79_set.insert("1316575.440000");
      Instrmt_79.add_attribute("StrkValu", "8692556.440000"); // 2
      Instrmt_79_set.insert("8692556.440000");
      Instrmt_79.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_79_set.insert("4");
      Instrmt_79.add_attribute("StrkPxBndryMeth", "5"); // 2
      Instrmt_79_set.insert("5");
      Instrmt_79.add_attribute("StrkPxBndryPrcsn", "1228906.700000"); // 2
      Instrmt_79_set.insert("1228906.700000");
      Instrmt_79.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_79_set.insert("3");
      Instrmt_79.add_attribute("OptAt", "707763670"); // 2
      Instrmt_79_set.insert("707763670");
      Instrmt_79.add_attribute("Mult", "21229120.840000"); // 2
      Instrmt_79_set.insert("21229120.840000");
      Instrmt_79.add_attribute("MultTyp", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("FlowSchedTyp", "4"); // 2
      Instrmt_79_set.insert("4");
      Instrmt_79.add_attribute("MinPxIncr", "14241194.650000"); // 2
      Instrmt_79_set.insert("14241194.650000");
      Instrmt_79.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1605459349"); // 2
      Instrmt_79_set.insert("MinPriceIncrementAmount_t_1605459349");
      Instrmt_79.add_attribute("UOM", "oz_tr"); // 2
      Instrmt_79_set.insert("oz_tr");
      Instrmt_79.add_attribute("UOMQty", "3454689.720000"); // 2
      Instrmt_79_set.insert("3454689.720000");
      Instrmt_79.add_attribute("PxUOM", "MWh"); // 2
      Instrmt_79_set.insert("MWh");
      Instrmt_79.add_attribute("PxUOMQty", "5926953.410000"); // 2
      Instrmt_79_set.insert("5926953.410000");
      Instrmt_79.add_attribute("SettlMeth", "P"); // 2
      Instrmt_79_set.insert("P");
      Instrmt_79.add_attribute("ExerStyle", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_79_set.insert("3");
      Instrmt_79.add_attribute("OptPayAmt", "OptPayoutAmount_t_670214812"); // 2
      Instrmt_79_set.insert("OptPayoutAmount_t_670214812");
      Instrmt_79.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_79_set.insert("STD");
      Instrmt_79.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_79_set.insert("FUT");
      Instrmt_79.add_attribute("ListMeth", "0"); // 2
      Instrmt_79_set.insert("0");
      Instrmt_79.add_attribute("CapPx", "19188112.860000"); // 2
      Instrmt_79_set.insert("19188112.860000");
      Instrmt_79.add_attribute("FlrPx", "152028.730000"); // 2
      Instrmt_79_set.insert("152028.730000");
      Instrmt_79.add_attribute("PutCall", "1"); // 2
      Instrmt_79_set.insert("1");
      Instrmt_79.add_attribute("FlexInd", "false"); // 2
      Instrmt_79_set.insert("false");
      Instrmt_79.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_79_set.insert("true");
      Instrmt_79.add_attribute("TmUnit", "H"); // 2
      Instrmt_79_set.insert("H");
      Instrmt_79.add_attribute("CpnRt", "12383364.160000"); // 2
      Instrmt_79_set.insert("12383364.160000");
      Instrmt_79.add_attribute("Exch", "SecurityExchange_t_1551216847"); // 2
      Instrmt_79_set.insert("SecurityExchange_t_1551216847");
      Instrmt_79.add_attribute("PosLmt", "1749300580"); // 2
      Instrmt_79_set.insert("1749300580");
      Instrmt_79.add_attribute("NTPosLmt", "2107592061"); // 2
      Instrmt_79_set.insert("2107592061");
      Instrmt_79.add_attribute("Issr", "Issuer_t_1350562186"); // 2
      Instrmt_79_set.insert("Issuer_t_1350562186");
      Instrmt_79.add_attribute("EncIssrLen", "1402533716"); // 2
      Instrmt_79_set.insert("1402533716");
      Instrmt_79.add_attribute("EncIssr", "EncodedIssuer_t_82999083"); // 2
      Instrmt_79_set.insert("EncodedIssuer_t_82999083");
      Instrmt_79.add_attribute("Desc", "SecurityDesc_t_465012280"); // 2
      Instrmt_79_set.insert("SecurityDesc_t_465012280");
      Instrmt_79.add_attribute("EncSecDescLen", "2110297386"); // 2
      Instrmt_79_set.insert("2110297386");
      Instrmt_79.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_58427519"); // 2
      Instrmt_79_set.insert("EncodedSecurityDesc_t_58427519");
      Instrmt_79.add_attribute("Pool", "Pool_t_2101661535"); // 2
      Instrmt_79_set.insert("Pool_t_2101661535");
      Instrmt_79.add_attribute("CSetMo", "11286477"); // 2
      Instrmt_79_set.insert("11286477");
      Instrmt_79.add_attribute("CPPgm", "2"); // 2
      Instrmt_79_set.insert("2");
      Instrmt_79.add_attribute("CPRegT", "CPRegType_t_1559637236"); // 2
      Instrmt_79_set.insert("CPRegType_t_1559637236");
      Instrmt_79.add_attribute("Dated", "DatedDate_t_1220869197"); // 2
      Instrmt_79_set.insert("DatedDate_t_1220869197");
      Instrmt_79.add_attribute("IntAcrl", "InterestAccrualDate_t_1828015957"); // 2
      Instrmt_79_set.insert("InterestAccrualDate_t_1828015957");
      all_values.push_back(Instrmt_79_set);
      all_compo_names.insert("Instrmt_79_set");

      {
        xml_element AID_82{"AID"};
        multiset<string> AID_82_set;
        AID_82.add_attribute("AltID", "SecurityAltID_t_1017682838"); // 3
        AID_82_set.insert("SecurityAltID_t_1017682838");
        AID_82.add_attribute("AltIDSrc", "I"); // 3
        AID_82_set.insert("I");
        all_values.push_back(AID_82_set);
        all_compo_names.insert("AID_82_set");

        Instrmt_79.add_element(AID_82);
      }
      {
        xml_element SecXML_82{"SecXML"};
        multiset<string> SecXML_82_set;
        SecXML_82.add_attribute("Schema", "SecurityXMLSchema_t_1836681288"); // 3
        SecXML_82_set.insert("SecurityXMLSchema_t_1836681288");
        all_values.push_back(SecXML_82_set);
        all_compo_names.insert("SecXML_82_set");

        Instrmt_79.add_element(SecXML_82);
      }
      {
        xml_element Evnt_82{"Evnt"};
        multiset<string> Evnt_82_set;
        Evnt_82.add_attribute("EventTyp", "15"); // 3
        Evnt_82_set.insert("15");
        Evnt_82.add_attribute("Dt", "EventDate_t_1189857261"); // 3
        Evnt_82_set.insert("EventDate_t_1189857261");
        Evnt_82.add_attribute("Tm", "EventTime_t_359412452"); // 3
        Evnt_82_set.insert("EventTime_t_359412452");
        Evnt_82.add_attribute("Px", "18401093.350000"); // 3
        Evnt_82_set.insert("18401093.350000");
        Evnt_82.add_attribute("Txt", "EventText_t_1026292190"); // 3
        Evnt_82_set.insert("EventText_t_1026292190");
        all_values.push_back(Evnt_82_set);
        all_compo_names.insert("Evnt_82_set");

        Instrmt_79.add_element(Evnt_82);
      }
      {
        xml_element Pty_411{"Pty"};
        multiset<string> Pty_411_set;
        Pty_411.add_attribute("ID", "InstrumentPartyID_t_1686568731"); // 3
        Pty_411_set.insert("InstrumentPartyID_t_1686568731");
        Pty_411.add_attribute("Src", "7"); // 3
        Pty_411_set.insert("7");
        Pty_411.add_attribute("R", "65"); // 3
        Pty_411_set.insert("65");
        all_values.push_back(Pty_411_set);
        all_compo_names.insert("Pty_411_set");

        {
          xml_element Sub_411{"Sub"};
          multiset<string> Sub_411_set;
          Sub_411.add_attribute("ID", "InstrumentPartySubID_t_1124774546"); // 4
          Sub_411_set.insert("InstrumentPartySubID_t_1124774546");
          Sub_411.add_attribute("Typ", "24"); // 4
          Sub_411_set.insert("24");
          all_values.push_back(Sub_411_set);
          all_compo_names.insert("Sub_411_set");

          Pty_411.add_element(Sub_411);
        }
        Instrmt_79.add_element(Pty_411);
      }
      {
        xml_element CmplxEvnt_79{"CmplxEvnt"};
        multiset<string> CmplxEvnt_79_set;
        CmplxEvnt_79.add_attribute("Typ", "2"); // 3
        CmplxEvnt_79_set.insert("2");
        CmplxEvnt_79.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_594933934"); // 3
        CmplxEvnt_79_set.insert("ComplexOptPayoutAmount_t_594933934");
        CmplxEvnt_79.add_attribute("Px", "9693118.830000"); // 3
        CmplxEvnt_79_set.insert("9693118.830000");
        CmplxEvnt_79.add_attribute("PxBndryMeth", "3"); // 3
        CmplxEvnt_79_set.insert("3");
        CmplxEvnt_79.add_attribute("PxBndryPrcsn", "1967508.670000"); // 3
        CmplxEvnt_79_set.insert("1967508.670000");
        CmplxEvnt_79.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_79_set.insert("2");
        CmplxEvnt_79.add_attribute("Cond", "1"); // 3
        CmplxEvnt_79_set.insert("1");
        all_values.push_back(CmplxEvnt_79_set);
        all_compo_names.insert("CmplxEvnt_79_set");

        {
          xml_element EvntDts_79{"EvntDts"};
          multiset<string> EvntDts_79_set;
          EvntDts_79.add_attribute("StartDt", "ComplexEventStartDate_t_1599284583"); // 4
          EvntDts_79_set.insert("ComplexEventStartDate_t_1599284583");
          EvntDts_79.add_attribute("EndDt", "ComplexEventEndDate_t_1012419380"); // 4
          EvntDts_79_set.insert("ComplexEventEndDate_t_1012419380");
          all_values.push_back(EvntDts_79_set);
          all_compo_names.insert("EvntDts_79_set");

          {
            xml_element EvntTms_79{"EvntTms"};
            multiset<string> EvntTms_79_set;
            EvntTms_79.add_attribute("StartTm", "178335120"); // 5
            EvntTms_79_set.insert("178335120");
            EvntTms_79.add_attribute("EndTm", "1562098322"); // 5
            EvntTms_79_set.insert("1562098322");
            all_values.push_back(EvntTms_79_set);
            all_compo_names.insert("EvntTms_79_set");

            EvntDts_79.add_element(EvntTms_79);
          }
          CmplxEvnt_79.add_element(EvntDts_79);
        }
        Instrmt_79.add_element(CmplxEvnt_79);
      }
      SecL_4.add_element(Instrmt_79);
    }
    {
      xml_element InstrmtExt_14{"InstrmtExt"};
      multiset<string> InstrmtExt_14_set;
      InstrmtExt_14.add_attribute("DlvryForm", "2"); // 2
      InstrmtExt_14_set.insert("2");
      InstrmtExt_14.add_attribute("PctAtRisk", "1325130.070000"); // 2
      InstrmtExt_14_set.insert("1325130.070000");
      all_values.push_back(InstrmtExt_14_set);
      all_compo_names.insert("InstrmtExt_14_set");

      {
        xml_element Attrb_24{"Attrb"};
        multiset<string> Attrb_24_set;
        Attrb_24.add_attribute("Typ", "29"); // 3
        Attrb_24_set.insert("29");
        Attrb_24.add_attribute("Val", "InstrAttribValue_t_405910236"); // 3
        Attrb_24_set.insert("InstrAttribValue_t_405910236");
        all_values.push_back(Attrb_24_set);
        all_compo_names.insert("Attrb_24_set");

        InstrmtExt_14.add_element(Attrb_24);
      }
      SecL_4.add_element(InstrmtExt_14);
    }
    {
      xml_element FinDetls_29{"FinDetls"};
      multiset<string> FinDetls_29_set;
      FinDetls_29.add_attribute("AgmtDesc", "AgreementDesc_t_1692150244"); // 2
      FinDetls_29_set.insert("AgreementDesc_t_1692150244");
      FinDetls_29.add_attribute("AgmtID", "AgreementID_t_646770349"); // 2
      FinDetls_29_set.insert("AgreementID_t_646770349");
      FinDetls_29.add_attribute("AgmtDt", "AgreementDate_t_86442545"); // 2
      FinDetls_29_set.insert("AgreementDate_t_86442545");
      FinDetls_29.add_attribute("AgmtCcy", "GBP"); // 2
      FinDetls_29_set.insert("GBP");
      FinDetls_29.add_attribute("TrmTyp", "3"); // 2
      FinDetls_29_set.insert("3");
      FinDetls_29.add_attribute("StartDt", "StartDate_t_208473222"); // 2
      FinDetls_29_set.insert("StartDate_t_208473222");
      FinDetls_29.add_attribute("EndDt", "EndDate_t_1502708501"); // 2
      FinDetls_29_set.insert("EndDate_t_1502708501");
      FinDetls_29.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_29_set.insert("2");
      FinDetls_29.add_attribute("MgnRatio", "20485825.570000"); // 2
      FinDetls_29_set.insert("20485825.570000");
      all_values.push_back(FinDetls_29_set);
      all_compo_names.insert("FinDetls_29_set");

      SecL_4.add_element(FinDetls_29);
    }
    {
      xml_element SecTrdgRules_8{"SecTrdgRules"};
      {
        xml_element BaseTrdgRules_10{"BaseTrdgRules"};
        multiset<string> BaseTrdgRules_10_set;
        BaseTrdgRules_10.add_attribute("ExpirationCycle", "2"); // 3
        BaseTrdgRules_10_set.insert("2");
        BaseTrdgRules_10.add_attribute("MinTrdVol", "18216213.690000"); // 3
        BaseTrdgRules_10_set.insert("18216213.690000");
        BaseTrdgRules_10.add_attribute("MaxTrdVol", "15125358.830000"); // 3
        BaseTrdgRules_10_set.insert("15125358.830000");
        BaseTrdgRules_10.add_attribute("MxPxVar", "14230121.060000"); // 3
        BaseTrdgRules_10_set.insert("14230121.060000");
        BaseTrdgRules_10.add_attribute("ImpldMktInd", "0"); // 3
        BaseTrdgRules_10_set.insert("0");
        BaseTrdgRules_10.add_attribute("TrdCcy", "EUR"); // 3
        BaseTrdgRules_10_set.insert("EUR");
        BaseTrdgRules_10.add_attribute("RndLot", "13938462.020000"); // 3
        BaseTrdgRules_10_set.insert("13938462.020000");
        BaseTrdgRules_10.add_attribute("MlegModel", "0"); // 3
        BaseTrdgRules_10_set.insert("0");
        BaseTrdgRules_10.add_attribute("MlegPxMeth", "1"); // 3
        BaseTrdgRules_10_set.insert("1");
        BaseTrdgRules_10.add_attribute("PxTyp", "17"); // 3
        BaseTrdgRules_10_set.insert("17");
        all_values.push_back(BaseTrdgRules_10_set);
        all_compo_names.insert("BaseTrdgRules_10_set");

        {
          xml_element TickRules_10{"TickRules"};
          multiset<string> TickRules_10_set;
          TickRules_10.add_attribute("StartTickPxRng", "9947598.820000"); // 4
          TickRules_10_set.insert("9947598.820000");
          TickRules_10.add_attribute("EndTickPxRng", "6056067.030000"); // 4
          TickRules_10_set.insert("6056067.030000");
          TickRules_10.add_attribute("TickIncr", "10423980.050000"); // 4
          TickRules_10_set.insert("10423980.050000");
          TickRules_10.add_attribute("TickRuleTyp", "2"); // 4
          TickRules_10_set.insert("2");
          all_values.push_back(TickRules_10_set);
          all_compo_names.insert("TickRules_10_set");

          BaseTrdgRules_10.add_element(TickRules_10);
        }
        {
          xml_element LotTypeRules_10{"LotTypeRules"};
          multiset<string> LotTypeRules_10_set;
          LotTypeRules_10.add_attribute("LotTyp", "1"); // 4
          LotTypeRules_10_set.insert("1");
          LotTypeRules_10.add_attribute("MinLotSz", "4570126.790000"); // 4
          LotTypeRules_10_set.insert("4570126.790000");
          all_values.push_back(LotTypeRules_10_set);
          all_compo_names.insert("LotTypeRules_10_set");

          BaseTrdgRules_10.add_element(LotTypeRules_10);
        }
        {
          xml_element PxLmts_10{"PxLmts"};
          multiset<string> PxLmts_10_set;
          PxLmts_10.add_attribute("PxLmtTyp", "0"); // 4
          PxLmts_10_set.insert("0");
          PxLmts_10.add_attribute("LowLmtPx", "9164548.310000"); // 4
          PxLmts_10_set.insert("9164548.310000");
          PxLmts_10.add_attribute("HiLmtPx", "20303974.780000"); // 4
          PxLmts_10_set.insert("20303974.780000");
          PxLmts_10.add_attribute("TrdgRefPx", "13364527.500000"); // 4
          PxLmts_10_set.insert("13364527.500000");
          all_values.push_back(PxLmts_10_set);
          all_compo_names.insert("PxLmts_10_set");

          BaseTrdgRules_10.add_element(PxLmts_10);
        }
        SecTrdgRules_8.add_element(BaseTrdgRules_10);
      }
      {
        xml_element TrdgSesRulesGrp_8{"TrdgSesRulesGrp"};
        multiset<string> TrdgSesRulesGrp_8_set;
        TrdgSesRulesGrp_8.add_attribute("SesID", "2"); // 3
        TrdgSesRulesGrp_8_set.insert("2");
        TrdgSesRulesGrp_8.add_attribute("SesSub", "4"); // 3
        TrdgSesRulesGrp_8_set.insert("4");
        all_values.push_back(TrdgSesRulesGrp_8_set);
        all_compo_names.insert("TrdgSesRulesGrp_8_set");

        {
          xml_element TrdgSesRules_8{"TrdgSesRules"};
          {
            xml_element OrdTypRules_13{"OrdTypRules"};
            multiset<string> OrdTypRules_13_set;
            OrdTypRules_13.add_attribute("OrdTyp", "1"); // 5
            OrdTypRules_13_set.insert("1");
            all_values.push_back(OrdTypRules_13_set);
            all_compo_names.insert("OrdTypRules_13_set");

            TrdgSesRules_8.add_element(OrdTypRules_13);
          }
          {
            xml_element TmInForceRules_12{"TmInForceRules"};
            multiset<string> TmInForceRules_12_set;
            TmInForceRules_12.add_attribute("TmInForce", "2"); // 5
            TmInForceRules_12_set.insert("2");
            all_values.push_back(TmInForceRules_12_set);
            all_compo_names.insert("TmInForceRules_12_set");

            TrdgSesRules_8.add_element(TmInForceRules_12);
          }
          {
            xml_element ExecInstRules_11{"ExecInstRules"};
            multiset<string> ExecInstRules_11_set;
            ExecInstRules_11.add_attribute("ExecInstValu", "e"); // 5
            ExecInstRules_11_set.insert("e");
            all_values.push_back(ExecInstRules_11_set);
            all_compo_names.insert("ExecInstRules_11_set");

            TrdgSesRules_8.add_element(ExecInstRules_11);
          }
          {
            xml_element MtchRules_8{"MtchRules"};
            multiset<string> MtchRules_8_set;
            MtchRules_8.add_attribute("MtchAlgo", "MatchAlgorithm_t_1198535482"); // 5
            MtchRules_8_set.insert("MatchAlgorithm_t_1198535482");
            MtchRules_8.add_attribute("MtchTyp", "3"); // 5
            MtchRules_8_set.insert("3");
            all_values.push_back(MtchRules_8_set);
            all_compo_names.insert("MtchRules_8_set");

            TrdgSesRules_8.add_element(MtchRules_8);
          }
          {
            xml_element MDFeedTyps_8{"MDFeedTyps"};
            multiset<string> MDFeedTyps_8_set;
            MDFeedTyps_8.add_attribute("MDFeedTyp", "MDFeedType_t_197760273"); // 5
            MDFeedTyps_8_set.insert("MDFeedType_t_197760273");
            MDFeedTyps_8.add_attribute("MktDepth", "1333588120"); // 5
            MDFeedTyps_8_set.insert("1333588120");
            MDFeedTyps_8.add_attribute("MDBkTyp", "3"); // 5
            MDFeedTyps_8_set.insert("3");
            all_values.push_back(MDFeedTyps_8_set);
            all_compo_names.insert("MDFeedTyps_8_set");

            TrdgSesRules_8.add_element(MDFeedTyps_8);
          }
          TrdgSesRulesGrp_8.add_element(TrdgSesRules_8);
        }
        SecTrdgRules_8.add_element(TrdgSesRulesGrp_8);
      }
      {
        xml_element Attrb_25{"Attrb"};
        multiset<string> Attrb_25_set;
        Attrb_25.add_attribute("Typ", "26"); // 3
        Attrb_25_set.insert("26");
        Attrb_25.add_attribute("Val", "NestedInstrAttribValue_t_1007725842"); // 3
        Attrb_25_set.insert("NestedInstrAttribValue_t_1007725842");
        all_values.push_back(Attrb_25_set);
        all_compo_names.insert("Attrb_25_set");

        SecTrdgRules_8.add_element(Attrb_25);
      }
      SecL_4.add_element(SecTrdgRules_8);
    }
    {
      xml_element StrkRules_8{"StrkRules"};
      multiset<string> StrkRules_8_set;
      StrkRules_8.add_attribute("StrkRule", "StrikeRuleID_t_498095229"); // 2
      StrkRules_8_set.insert("StrikeRuleID_t_498095229");
      StrkRules_8.add_attribute("StartStrkPxRng", "20022894.230000"); // 2
      StrkRules_8_set.insert("20022894.230000");
      StrkRules_8.add_attribute("EndStrkPxRng", "18066381.100000"); // 2
      StrkRules_8_set.insert("18066381.100000");
      StrkRules_8.add_attribute("StrkIncr", "17416065.790000"); // 2
      StrkRules_8_set.insert("17416065.790000");
      StrkRules_8.add_attribute("StrkExrStyle", "1"); // 2
      StrkRules_8_set.insert("1");
      all_values.push_back(StrkRules_8_set);
      all_compo_names.insert("StrkRules_8_set");

      {
        xml_element MatRules_8{"MatRules"};
        multiset<string> MatRules_8_set;
        MatRules_8.add_attribute("MatRuleID", "MaturityRuleID_t_1053000664"); // 3
        MatRules_8_set.insert("MaturityRuleID_t_1053000664");
        MatRules_8.add_attribute("MMYFmt", "1"); // 3
        MatRules_8_set.insert("1");
        MatRules_8.add_attribute("MMYIncrUnits", "0"); // 3
        MatRules_8_set.insert("0");
        MatRules_8.add_attribute("StartMMY", "496114086"); // 3
        MatRules_8_set.insert("496114086");
        MatRules_8.add_attribute("EndMMY", "654222400"); // 3
        MatRules_8_set.insert("654222400");
        MatRules_8.add_attribute("MMYIncr", "1734735903"); // 3
        MatRules_8_set.insert("1734735903");
        all_values.push_back(MatRules_8_set);
        all_compo_names.insert("MatRules_8_set");

        StrkRules_8.add_element(MatRules_8);
      }
      SecL_4.add_element(StrkRules_8);
    }
    {
      xml_element Undly_115{"Undly"};
      multiset<string> Undly_115_set;
      Undly_115.add_attribute("Sym", "UnderlyingSymbol_t_1538512091"); // 2
      Undly_115_set.insert("UnderlyingSymbol_t_1538512091");
      Undly_115.add_attribute("Sfx", "CD"); // 2
      Undly_115_set.insert("CD");
      Undly_115.add_attribute("ID", "UnderlyingSecurityID_t_371194079"); // 2
      Undly_115_set.insert("UnderlyingSecurityID_t_371194079");
      Undly_115.add_attribute("Src", "9"); // 2
      Undly_115_set.insert("9");
      Undly_115.add_attribute("Prod", "13"); // 2
      Undly_115_set.insert("13");
      Undly_115.add_attribute("CFI", "UnderlyingCFICode_t_1287648911"); // 2
      Undly_115_set.insert("UnderlyingCFICode_t_1287648911");
      Undly_115.add_attribute("SecTyp", "DN"); // 2
      Undly_115_set.insert("DN");
      Undly_115.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_633429631"); // 2
      Undly_115_set.insert("UnderlyingSecuritySubType_t_633429631");
      Undly_115.add_attribute("MMY", "1748770338"); // 2
      Undly_115_set.insert("1748770338");
      Undly_115.add_attribute("Mat", "UnderlyingMaturityDate_t_260639132"); // 2
      Undly_115_set.insert("UnderlyingMaturityDate_t_260639132");
      Undly_115.add_attribute("MatTm", "2056324927"); // 2
      Undly_115_set.insert("2056324927");
      Undly_115.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_624757552"); // 2
      Undly_115_set.insert("UnderlyingCouponPaymentDate_t_624757552");
      Undly_115.add_attribute("RestrctTyp", "XR"); // 2
      Undly_115_set.insert("XR");
      Undly_115.add_attribute("Snrty", "SD"); // 2
      Undly_115_set.insert("SD");
      Undly_115.add_attribute("NotlPctOut", "18567016.360000"); // 2
      Undly_115_set.insert("18567016.360000");
      Undly_115.add_attribute("OrigNotlPctOut", "13009348.240000"); // 2
      Undly_115_set.insert("13009348.240000");
      Undly_115.add_attribute("AttchPnt", "2934812.330000"); // 2
      Undly_115_set.insert("2934812.330000");
      Undly_115.add_attribute("DetchPnt", "8422609.820000"); // 2
      Undly_115_set.insert("8422609.820000");
      Undly_115.add_attribute("Issued", "UnderlyingIssueDate_t_1880212141"); // 2
      Undly_115_set.insert("UnderlyingIssueDate_t_1880212141");
      Undly_115.add_attribute("RepoCollSecTyp", "1301207075"); // 2
      Undly_115_set.insert("1301207075");
      Undly_115.add_attribute("RepoTrm", "1340356211"); // 2
      Undly_115_set.insert("1340356211");
      Undly_115.add_attribute("RepoRt", "17350179.160000"); // 2
      Undly_115_set.insert("17350179.160000");
      Undly_115.add_attribute("Fctr", "9603615.370000"); // 2
      Undly_115_set.insert("9603615.370000");
      Undly_115.add_attribute("CrdRtg", "UnderlyingCreditRating_t_934479142"); // 2
      Undly_115_set.insert("UnderlyingCreditRating_t_934479142");
      Undly_115.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1971863252"); // 2
      Undly_115_set.insert("UnderlyingInstrRegistry_t_1971863252");
      Undly_115.add_attribute("Ctry", "2013362202"); // 2
      Undly_115_set.insert("2013362202");
      Undly_115.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_593941660"); // 2
      Undly_115_set.insert("UnderlyingStateOrProvinceOfIssue_t_593941660");
      Undly_115.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_953508804"); // 2
      Undly_115_set.insert("UnderlyingLocaleOfIssue_t_953508804");
      Undly_115.add_attribute("Redeem", "UnderlyingRedemptionDate_t_361992640"); // 2
      Undly_115_set.insert("UnderlyingRedemptionDate_t_361992640");
      Undly_115.add_attribute("StrkPx", "12481640.600000"); // 2
      Undly_115_set.insert("12481640.600000");
      Undly_115.add_attribute("StrkCcy", "CHF"); // 2
      Undly_115_set.insert("CHF");
      Undly_115.add_attribute("OptA", "1762082074"); // 2
      Undly_115_set.insert("1762082074");
      Undly_115.add_attribute("Mult", "9119551.390000"); // 2
      Undly_115_set.insert("9119551.390000");
      Undly_115.add_attribute("MultTyp", "2"); // 2
      Undly_115_set.insert("2");
      Undly_115.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_115_set.insert("0");
      Undly_115.add_attribute("UOM", "USD"); // 2
      Undly_115_set.insert("USD");
      Undly_115.add_attribute("UOMQty", "14795008.050000"); // 2
      Undly_115_set.insert("14795008.050000");
      Undly_115.add_attribute("PxUOM", "USD"); // 2
      Undly_115_set.insert("USD");
      Undly_115.add_attribute("PxUOMQty", "18008907.410000"); // 2
      Undly_115_set.insert("18008907.410000");
      Undly_115.add_attribute("TmUnit", "Wk"); // 2
      Undly_115_set.insert("Wk");
      Undly_115.add_attribute("ExerStyle", "2"); // 2
      Undly_115_set.insert("2");
      Undly_115.add_attribute("CpnRt", "2781646.450000"); // 2
      Undly_115_set.insert("2781646.450000");
      Undly_115.add_attribute("Exch", "UnderlyingSecurityExchange_t_695830841"); // 2
      Undly_115_set.insert("UnderlyingSecurityExchange_t_695830841");
      Undly_115.add_attribute("Issr", "UnderlyingIssuer_t_561222978"); // 2
      Undly_115_set.insert("UnderlyingIssuer_t_561222978");
      Undly_115.add_attribute("EncUndIssrLen", "2134866282"); // 2
      Undly_115_set.insert("2134866282");
      Undly_115.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1996765665"); // 2
      Undly_115_set.insert("EncodedUnderlyingIssuer_t_1996765665");
      Undly_115.add_attribute("Desc", "UnderlyingSecurityDesc_t_854704211"); // 2
      Undly_115_set.insert("UnderlyingSecurityDesc_t_854704211");
      Undly_115.add_attribute("EncUndSecDescLen", "829643616"); // 2
      Undly_115_set.insert("829643616");
      Undly_115.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1729494158"); // 2
      Undly_115_set.insert("EncodedUnderlyingSecurityDesc_t_1729494158");
      Undly_115.add_attribute("CPPgm", "UnderlyingCPProgram_t_8427639"); // 2
      Undly_115_set.insert("UnderlyingCPProgram_t_8427639");
      Undly_115.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_22516179"); // 2
      Undly_115_set.insert("UnderlyingCPRegType_t_22516179");
      Undly_115.add_attribute("AllocPct", "13170284.260000"); // 2
      Undly_115_set.insert("13170284.260000");
      Undly_115.add_attribute("Ccy", "EUR"); // 2
      Undly_115_set.insert("EUR");
      Undly_115.add_attribute("Qty", "11414080.310000"); // 2
      Undly_115_set.insert("11414080.310000");
      Undly_115.add_attribute("SettlTyp", "5"); // 2
      Undly_115_set.insert("5");
      Undly_115.add_attribute("CashAmt", "UnderlyingCashAmount_t_1550936981"); // 2
      Undly_115_set.insert("UnderlyingCashAmount_t_1550936981");
      Undly_115.add_attribute("CashTyp", "DIFF"); // 2
      Undly_115_set.insert("DIFF");
      Undly_115.add_attribute("Px", "11966603.700000"); // 2
      Undly_115_set.insert("11966603.700000");
      Undly_115.add_attribute("DirtPx", "6516173.930000"); // 2
      Undly_115_set.insert("6516173.930000");
      Undly_115.add_attribute("EndPx", "4881942.470000"); // 2
      Undly_115_set.insert("4881942.470000");
      Undly_115.add_attribute("StartVal", "UnderlyingStartValue_t_949681453"); // 2
      Undly_115_set.insert("UnderlyingStartValue_t_949681453");
      Undly_115.add_attribute("CurVal", "UnderlyingCurrentValue_t_266215820"); // 2
      Undly_115_set.insert("UnderlyingCurrentValue_t_266215820");
      Undly_115.add_attribute("EndVal", "UnderlyingEndValue_t_1400149387"); // 2
      Undly_115_set.insert("UnderlyingEndValue_t_1400149387");
      Undly_115.add_attribute("AdjQty", "5507436.580000"); // 2
      Undly_115_set.insert("5507436.580000");
      Undly_115.add_attribute("FxRate", "13252747.750000"); // 2
      Undly_115_set.insert("13252747.750000");
      Undly_115.add_attribute("FxRateCalc", "D"); // 2
      Undly_115_set.insert("D");
      Undly_115.add_attribute("CapValu", "UnderlyingCapValue_t_2030244464"); // 2
      Undly_115_set.insert("UnderlyingCapValue_t_2030244464");
      Undly_115.add_attribute("SetMeth", "UnderlyingSettlMethod_t_870279713"); // 2
      Undly_115_set.insert("UnderlyingSettlMethod_t_870279713");
      Undly_115.add_attribute("PutCall", "1105676882"); // 2
      Undly_115_set.insert("1105676882");
      all_values.push_back(Undly_115_set);
      all_compo_names.insert("Undly_115_set");

      {
        xml_element UndAID_115{"UndAID"};
        multiset<string> UndAID_115_set;
        UndAID_115.add_attribute("AltID", "UnderlyingSecurityAltID_t_1622900753"); // 3
        UndAID_115_set.insert("UnderlyingSecurityAltID_t_1622900753");
        UndAID_115.add_attribute("AltIDSrc", "J"); // 3
        UndAID_115_set.insert("J");
        all_values.push_back(UndAID_115_set);
        all_compo_names.insert("UndAID_115_set");

        Undly_115.add_element(UndAID_115);
      }
      {
        xml_element Stip_184{"Stip"};
        multiset<string> Stip_184_set;
        Stip_184.add_attribute("Typ", "CPY"); // 3
        Stip_184_set.insert("CPY");
        Stip_184.add_attribute("Val", "UnderlyingStipValue_t_171247946"); // 3
        Stip_184_set.insert("UnderlyingStipValue_t_171247946");
        all_values.push_back(Stip_184_set);
        all_compo_names.insert("Stip_184_set");

        Undly_115.add_element(Stip_184);
      }
      {
        xml_element Pty_412{"Pty"};
        multiset<string> Pty_412_set;
        Pty_412.add_attribute("ID", "UnderlyingInstrumentPartyID_t_885348908"); // 3
        Pty_412_set.insert("UnderlyingInstrumentPartyID_t_885348908");
        Pty_412.add_attribute("Src", "3"); // 3
        Pty_412_set.insert("3");
        Pty_412.add_attribute("R", "36"); // 3
        Pty_412_set.insert("36");
        all_values.push_back(Pty_412_set);
        all_compo_names.insert("Pty_412_set");

        {
          xml_element Sub_412{"Sub"};
          multiset<string> Sub_412_set;
          Sub_412.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1740053119"); // 4
          Sub_412_set.insert("UnderlyingInstrumentPartySubID_t_1740053119");
          Sub_412.add_attribute("Typ", "31"); // 4
          Sub_412_set.insert("31");
          all_values.push_back(Sub_412_set);
          all_compo_names.insert("Sub_412_set");

          Pty_412.add_element(Sub_412);
        }
        Undly_115.add_element(Pty_412);
      }
      SecL_4.add_element(Undly_115);
    }
    {
      xml_element Stip_185{"Stip"};
      multiset<string> Stip_185_set;
      Stip_185.add_attribute("Typ", "PXSOURCE"); // 2
      Stip_185_set.insert("PXSOURCE");
      Stip_185.add_attribute("Val", "StipulationValue_t_1748480758"); // 2
      Stip_185_set.insert("StipulationValue_t_1748480758");
      all_values.push_back(Stip_185_set);
      all_compo_names.insert("Stip_185_set");

      SecL_4.add_element(Stip_185);
    }
    {
      xml_element SecLstUpdRelSymsLegGrp_0{"SecLstUpdRelSymsLegGrp"};
      multiset<string> SecLstUpdRelSymsLegGrp_0_set;
      SecLstUpdRelSymsLegGrp_0.add_attribute("SwapTyp", "2"); // 2
      SecLstUpdRelSymsLegGrp_0_set.insert("2");
      SecLstUpdRelSymsLegGrp_0.add_attribute("SettlTyp", "9"); // 2
      SecLstUpdRelSymsLegGrp_0_set.insert("9");
      all_values.push_back(SecLstUpdRelSymsLegGrp_0_set);
      all_compo_names.insert("SecLstUpdRelSymsLegGrp_0_set");

      {
        xml_element Leg_96{"Leg"};
        multiset<string> Leg_96_set;
        Leg_96.add_attribute("Sym", "LegSymbol_t_569786287"); // 3
        Leg_96_set.insert("LegSymbol_t_569786287");
        Leg_96.add_attribute("Sfx", "CD"); // 3
        Leg_96_set.insert("CD");
        Leg_96.add_attribute("ID", "LegSecurityID_t_2060976932"); // 3
        Leg_96_set.insert("LegSecurityID_t_2060976932");
        Leg_96.add_attribute("Src", "M"); // 3
        Leg_96_set.insert("M");
        Leg_96.add_attribute("Prod", "9"); // 3
        Leg_96_set.insert("9");
        Leg_96.add_attribute("CFI", "LegCFICode_t_2008410119"); // 3
        Leg_96_set.insert("LegCFICode_t_2008410119");
        Leg_96.add_attribute("SecTyp", "LOFC"); // 3
        Leg_96_set.insert("LOFC");
        Leg_96.add_attribute("SecSubTyp", "LegSecuritySubType_t_1087966357"); // 3
        Leg_96_set.insert("LegSecuritySubType_t_1087966357");
        Leg_96.add_attribute("MMY", "349120719"); // 3
        Leg_96_set.insert("349120719");
        Leg_96.add_attribute("Mat", "LegMaturityDate_t_1403312193"); // 3
        Leg_96_set.insert("LegMaturityDate_t_1403312193");
        Leg_96.add_attribute("MatTm", "1354182177"); // 3
        Leg_96_set.insert("1354182177");
        Leg_96.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1749270106"); // 3
        Leg_96_set.insert("LegCouponPaymentDate_t_1749270106");
        Leg_96.add_attribute("Issued", "LegIssueDate_t_1954055852"); // 3
        Leg_96_set.insert("LegIssueDate_t_1954055852");
        Leg_96.add_attribute("RepoCollSecTyp", "531973304"); // 3
        Leg_96_set.insert("531973304");
        Leg_96.add_attribute("RepoTrm", "1054056247"); // 3
        Leg_96_set.insert("1054056247");
        Leg_96.add_attribute("RepoRt", "18368166.680000"); // 3
        Leg_96_set.insert("18368166.680000");
        Leg_96.add_attribute("Fctr", "14022530.170000"); // 3
        Leg_96_set.insert("14022530.170000");
        Leg_96.add_attribute("CrdRtg", "LegCreditRating_t_12249482"); // 3
        Leg_96_set.insert("LegCreditRating_t_12249482");
        Leg_96.add_attribute("Rgstry", "LegInstrRegistry_t_1312233773"); // 3
        Leg_96_set.insert("LegInstrRegistry_t_1312233773");
        Leg_96.add_attribute("Ctry", "1726378947"); // 3
        Leg_96_set.insert("1726378947");
        Leg_96.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1396091010"); // 3
        Leg_96_set.insert("LegStateOrProvinceOfIssue_t_1396091010");
        Leg_96.add_attribute("Lcl", "LegLocaleOfIssue_t_1483481720"); // 3
        Leg_96_set.insert("LegLocaleOfIssue_t_1483481720");
        Leg_96.add_attribute("Redeem", "LegRedemptionDate_t_464244207"); // 3
        Leg_96_set.insert("LegRedemptionDate_t_464244207");
        Leg_96.add_attribute("Strk", "6198315.240000"); // 3
        Leg_96_set.insert("6198315.240000");
        Leg_96.add_attribute("StrkCcy", "CHF"); // 3
        Leg_96_set.insert("CHF");
        Leg_96.add_attribute("OptA", "673215654"); // 3
        Leg_96_set.insert("673215654");
        Leg_96.add_attribute("Cmult", "11065521.580000"); // 3
        Leg_96_set.insert("11065521.580000");
        Leg_96.add_attribute("MultTyp", "1"); // 3
        Leg_96_set.insert("1");
        Leg_96.add_attribute("FlowSchedTyp", "3"); // 3
        Leg_96_set.insert("3");
        Leg_96.add_attribute("UOM", "MMBtu"); // 3
        Leg_96_set.insert("MMBtu");
        Leg_96.add_attribute("UOMQty", "2275970.760000"); // 3
        Leg_96_set.insert("2275970.760000");
        Leg_96.add_attribute("PxUOM", "Bu"); // 3
        Leg_96_set.insert("Bu");
        Leg_96.add_attribute("PxUOMQty", "19396143.430000"); // 3
        Leg_96_set.insert("19396143.430000");
        Leg_96.add_attribute("TmUnit", "H"); // 3
        Leg_96_set.insert("H");
        Leg_96.add_attribute("ExerStyle", "1"); // 3
        Leg_96_set.insert("1");
        Leg_96.add_attribute("CpnRt", "18005408.150000"); // 3
        Leg_96_set.insert("18005408.150000");
        Leg_96.add_attribute("Exch", "LegSecurityExchange_t_2085681834"); // 3
        Leg_96_set.insert("LegSecurityExchange_t_2085681834");
        Leg_96.add_attribute("Issr", "LegIssuer_t_1158843267"); // 3
        Leg_96_set.insert("LegIssuer_t_1158843267");
        Leg_96.add_attribute("EncLegIssrLen", "2177886"); // 3
        Leg_96_set.insert("2177886");
        Leg_96.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1341510379"); // 3
        Leg_96_set.insert("EncodedLegIssuer_t_1341510379");
        Leg_96.add_attribute("Desc", "LegSecurityDesc_t_365541796"); // 3
        Leg_96_set.insert("LegSecurityDesc_t_365541796");
        Leg_96.add_attribute("EncLegSecDescLen", "1751447992"); // 3
        Leg_96_set.insert("1751447992");
        Leg_96.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1148082583"); // 3
        Leg_96_set.insert("EncodedLegSecurityDesc_t_1148082583");
        Leg_96.add_attribute("RatioQty", "8975151.010000"); // 3
        Leg_96_set.insert("8975151.010000");
        Leg_96.add_attribute("Side", "G"); // 3
        Leg_96_set.insert("G");
        Leg_96.add_attribute("Ccy", "USD"); // 3
        Leg_96_set.insert("USD");
        Leg_96.add_attribute("Pool", "LegPool_t_670270073"); // 3
        Leg_96_set.insert("LegPool_t_670270073");
        Leg_96.add_attribute("Dated", "LegDatedDate_t_2165729"); // 3
        Leg_96_set.insert("LegDatedDate_t_2165729");
        Leg_96.add_attribute("CSetMo", "1878663418"); // 3
        Leg_96_set.insert("1878663418");
        Leg_96.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2066361083"); // 3
        Leg_96_set.insert("LegInterestAccrualDate_t_2066361083");
        Leg_96.add_attribute("PutCall", "1485647449"); // 3
        Leg_96_set.insert("1485647449");
        Leg_96.add_attribute("LegOptionRatio", "1954239.770000"); // 3
        Leg_96_set.insert("1954239.770000");
        Leg_96.add_attribute("Px", "5387089.590000"); // 3
        Leg_96_set.insert("5387089.590000");
        all_values.push_back(Leg_96_set);
        all_compo_names.insert("Leg_96_set");

        {
          xml_element LegAID_91{"LegAID"};
          multiset<string> LegAID_91_set;
          LegAID_91.add_attribute("SecAltID", "LegSecurityAltID_t_842175485"); // 4
          LegAID_91_set.insert("LegSecurityAltID_t_842175485");
          LegAID_91.add_attribute("SecAltIDSrc", "1"); // 4
          LegAID_91_set.insert("1");
          all_values.push_back(LegAID_91_set);
          all_compo_names.insert("LegAID_91_set");

          Leg_96.add_element(LegAID_91);
        }
        SecLstUpdRelSymsLegGrp_0.add_element(Leg_96);
      }
      {
        xml_element Stip_186{"Stip"};
        multiset<string> Stip_186_set;
        Stip_186.add_attribute("StipTyp", "TRDVAR"); // 3
        Stip_186_set.insert("TRDVAR");
        Stip_186.add_attribute("StipVal", "LegStipulationValue_t_1948727643"); // 3
        Stip_186_set.insert("LegStipulationValue_t_1948727643");
        all_values.push_back(Stip_186_set);
        all_compo_names.insert("Stip_186_set");

        SecLstUpdRelSymsLegGrp_0.add_element(Stip_186);
      }
      {
        xml_element BnchmkCurve_12{"BnchmkCurve"};
        multiset<string> BnchmkCurve_12_set;
        BnchmkCurve_12.add_attribute("Ccy", "USD"); // 3
        BnchmkCurve_12_set.insert("USD");
        BnchmkCurve_12.add_attribute("Name", "FutureSWAP"); // 3
        BnchmkCurve_12_set.insert("FutureSWAP");
        BnchmkCurve_12.add_attribute("Point", "LegBenchmarkCurvePoint_t_137645522"); // 3
        BnchmkCurve_12_set.insert("LegBenchmarkCurvePoint_t_137645522");
        BnchmkCurve_12.add_attribute("Px", "15955685.220000"); // 3
        BnchmkCurve_12_set.insert("15955685.220000");
        BnchmkCurve_12.add_attribute("PxTyp", "1619495750"); // 3
        BnchmkCurve_12_set.insert("1619495750");
        all_values.push_back(BnchmkCurve_12_set);
        all_compo_names.insert("BnchmkCurve_12_set");

        SecLstUpdRelSymsLegGrp_0.add_element(BnchmkCurve_12);
      }
      SecL_4.add_element(SecLstUpdRelSymsLegGrp_0);
    }
    {
      xml_element SprdBnchmkCurve_36{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_36_set;
      SprdBnchmkCurve_36.add_attribute("Spread", "17696966.160000"); // 2
      SprdBnchmkCurve_36_set.insert("17696966.160000");
      SprdBnchmkCurve_36.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_36_set.insert("CAN");
      SprdBnchmkCurve_36.add_attribute("Name", "SWAP"); // 2
      SprdBnchmkCurve_36_set.insert("SWAP");
      SprdBnchmkCurve_36.add_attribute("Point", "BenchmarkCurvePoint_t_677805050"); // 2
      SprdBnchmkCurve_36_set.insert("BenchmarkCurvePoint_t_677805050");
      SprdBnchmkCurve_36.add_attribute("Px", "12747308.030000"); // 2
      SprdBnchmkCurve_36_set.insert("12747308.030000");
      SprdBnchmkCurve_36.add_attribute("PxTyp", "18"); // 2
      SprdBnchmkCurve_36_set.insert("18");
      SprdBnchmkCurve_36.add_attribute("SecID", "BenchmarkSecurityID_t_1043346847"); // 2
      SprdBnchmkCurve_36_set.insert("BenchmarkSecurityID_t_1043346847");
      SprdBnchmkCurve_36.add_attribute("SecIDSrc", "C"); // 2
      SprdBnchmkCurve_36_set.insert("C");
      all_values.push_back(SprdBnchmkCurve_36_set);
      all_compo_names.insert("SprdBnchmkCurve_36_set");

      SecL_4.add_element(SprdBnchmkCurve_36);
    }
    {
      xml_element Yield_31{"Yield"};
      multiset<string> Yield_31_set;
      Yield_31.add_attribute("Typ", "PUT"); // 2
      Yield_31_set.insert("PUT");
      Yield_31.add_attribute("Yld", "19408619.480000"); // 2
      Yield_31_set.insert("19408619.480000");
      Yield_31.add_attribute("CalcDt", "YieldCalcDate_t_1536715739"); // 2
      Yield_31_set.insert("YieldCalcDate_t_1536715739");
      Yield_31.add_attribute("RedDt", "YieldRedemptionDate_t_739936073"); // 2
      Yield_31_set.insert("YieldRedemptionDate_t_739936073");
      Yield_31.add_attribute("RedPx", "20931464.180000"); // 2
      Yield_31_set.insert("20931464.180000");
      Yield_31.add_attribute("RedPxTyp", "16"); // 2
      Yield_31_set.insert("16");
      all_values.push_back(Yield_31_set);
      all_compo_names.insert("Yield_31_set");

      SecL_4.add_element(Yield_31);
    }
    elt.add_element(SecL_4);
  } // end SecL
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
