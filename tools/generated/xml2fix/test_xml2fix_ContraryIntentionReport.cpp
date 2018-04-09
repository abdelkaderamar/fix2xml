#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/ContraryIntentionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( ContraryIntentionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ContIntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> ContraryIntentionReport_message_t_0;
  elt.add_attribute("RptID", "ContIntRptID_t_1990062701"); // 0
  ContraryIntentionReport_message_t_0.insert("ContIntRptID_t_1990062701");
  elt.add_attribute("TxnTm", "TransactTime_t_1264855351"); // 0
  ContraryIntentionReport_message_t_0.insert("TransactTime_t_1264855351");
  elt.add_attribute("LateInd", "false"); // 0
  ContraryIntentionReport_message_t_0.insert("false");
  elt.add_attribute("InptSrc", "InputSource_t_515003010"); // 0
  ContraryIntentionReport_message_t_0.insert("InputSource_t_515003010");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1032940771"); // 0
  ContraryIntentionReport_message_t_0.insert("ClearingBusinessDate_t_1032940771");
  elt.add_attribute("Txt", "Text_t_1911401908"); // 0
  ContraryIntentionReport_message_t_0.insert("Text_t_1911401908");
  elt.add_attribute("EncTxtLen", "1561268866"); // 0
  ContraryIntentionReport_message_t_0.insert("1561268866");
  elt.add_attribute("EncTxt", "EncodedText_t_313790263"); // 0
  ContraryIntentionReport_message_t_0.insert("EncodedText_t_313790263");
  all_values.push_back(ContraryIntentionReport_message_t_0);
  all_compo_names.insert("ContraryIntentionReport_message_t");

  { // Hdr
    xml_element Hdr_23{"Hdr"};
    multiset<string> Hdr_23_set;
    Hdr_23.add_attribute("SeqNum", "926422983"); // 1
    Hdr_23_set.insert("926422983");
    Hdr_23.add_attribute("SID", "SenderCompID_t_1003764344"); // 1
    Hdr_23_set.insert("SenderCompID_t_1003764344");
    Hdr_23.add_attribute("TID", "TargetCompID_t_948050815"); // 1
    Hdr_23_set.insert("TargetCompID_t_948050815");
    Hdr_23.add_attribute("OBID", "OnBehalfOfCompID_t_987554502"); // 1
    Hdr_23_set.insert("OnBehalfOfCompID_t_987554502");
    Hdr_23.add_attribute("D2ID", "DeliverToCompID_t_135928043"); // 1
    Hdr_23_set.insert("DeliverToCompID_t_135928043");
    Hdr_23.add_attribute("SSub", "SenderSubID_t_286297221"); // 1
    Hdr_23_set.insert("SenderSubID_t_286297221");
    Hdr_23.add_attribute("SLoc", "SenderLocationID_t_1445352738"); // 1
    Hdr_23_set.insert("SenderLocationID_t_1445352738");
    Hdr_23.add_attribute("TSub", "TargetSubID_t_2058707607"); // 1
    Hdr_23_set.insert("TargetSubID_t_2058707607");
    Hdr_23.add_attribute("TLoc", "TargetLocationID_t_392796530"); // 1
    Hdr_23_set.insert("TargetLocationID_t_392796530");
    Hdr_23.add_attribute("OBSub", "OnBehalfOfSubID_t_695547328"); // 1
    Hdr_23_set.insert("OnBehalfOfSubID_t_695547328");
    Hdr_23.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1017126436"); // 1
    Hdr_23_set.insert("OnBehalfOfLocationID_t_1017126436");
    Hdr_23.add_attribute("D2Sub", "DeliverToSubID_t_318201046"); // 1
    Hdr_23_set.insert("DeliverToSubID_t_318201046");
    Hdr_23.add_attribute("D2Loc", "DeliverToLocationID_t_1686589380"); // 1
    Hdr_23_set.insert("DeliverToLocationID_t_1686589380");
    Hdr_23.add_attribute("PosDup", "Y"); // 1
    Hdr_23_set.insert("Y");
    Hdr_23.add_attribute("PosRsnd", "Y"); // 1
    Hdr_23_set.insert("Y");
    Hdr_23.add_attribute("Snt", "SendingTime_t_1370151874"); // 1
    Hdr_23_set.insert("SendingTime_t_1370151874");
    Hdr_23.add_attribute("OrigSnt", "OrigSendingTime_t_171317199"); // 1
    Hdr_23_set.insert("OrigSendingTime_t_171317199");
    Hdr_23.add_attribute("MsgEncd", "MessageEncoding_t_755975209"); // 1
    Hdr_23_set.insert("MessageEncoding_t_755975209");
    all_values.push_back(Hdr_23_set);
    all_compo_names.insert("Hdr_23_set");

    {
      xml_element Hop_23{"Hop"};
      multiset<string> Hop_23_set;
      Hop_23.add_attribute("ID", "HopCompID_t_1271012517"); // 2
      Hop_23_set.insert("HopCompID_t_1271012517");
      Hop_23.add_attribute("Ref", "471170620"); // 2
      Hop_23_set.insert("471170620");
      Hop_23.add_attribute("Snt", "HopSendingTime_t_448860975"); // 2
      Hop_23_set.insert("HopSendingTime_t_448860975");
      all_values.push_back(Hop_23_set);
      all_compo_names.insert("Hop_23_set");

      Hdr_23.add_element(Hop_23);
    }
    elt.add_element(Hdr_23);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_1{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_1_set;
    ApplSeqCtrl_1.add_attribute("ApplID", "ApplID_t_1447887018"); // 1
    ApplSeqCtrl_1_set.insert("ApplID_t_1447887018");
    ApplSeqCtrl_1.add_attribute("ApplSeqNum", "472484630"); // 1
    ApplSeqCtrl_1_set.insert("472484630");
    ApplSeqCtrl_1.add_attribute("ApplLastSeqNum", "291440028"); // 1
    ApplSeqCtrl_1_set.insert("291440028");
    ApplSeqCtrl_1.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_1_set.insert("false");
    all_values.push_back(ApplSeqCtrl_1_set);
    all_compo_names.insert("ApplSeqCtrl_1_set");

    elt.add_element(ApplSeqCtrl_1);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_96{"Pty"};
    multiset<string> Pty_96_set;
    Pty_96.add_attribute("ID", "PartyID_t_806443038"); // 1
    Pty_96_set.insert("PartyID_t_806443038");
    Pty_96.add_attribute("Src", "D"); // 1
    Pty_96_set.insert("D");
    Pty_96.add_attribute("R", "19"); // 1
    Pty_96_set.insert("19");
    all_values.push_back(Pty_96_set);
    all_compo_names.insert("Pty_96_set");

    {
      xml_element Sub_96{"Sub"};
      multiset<string> Sub_96_set;
      Sub_96.add_attribute("ID", "PartySubID_t_220228256"); // 2
      Sub_96_set.insert("PartySubID_t_220228256");
      Sub_96.add_attribute("Typ", "24"); // 2
      Sub_96_set.insert("24");
      all_values.push_back(Sub_96_set);
      all_compo_names.insert("Sub_96_set");

      Pty_96.add_element(Sub_96);
    }
    elt.add_element(Pty_96);
  } // end Pty
  { // Pty
    xml_element Pty_97{"Pty"};
    multiset<string> Pty_97_set;
    Pty_97.add_attribute("ID", "PartyID_t_282143033"); // 1
    Pty_97_set.insert("PartyID_t_282143033");
    Pty_97.add_attribute("Src", "H"); // 1
    Pty_97_set.insert("H");
    Pty_97.add_attribute("R", "45"); // 1
    Pty_97_set.insert("45");
    all_values.push_back(Pty_97_set);
    all_compo_names.insert("Pty_97_set");

    {
      xml_element Sub_97{"Sub"};
      multiset<string> Sub_97_set;
      Sub_97.add_attribute("ID", "PartySubID_t_1269697535"); // 2
      Sub_97_set.insert("PartySubID_t_1269697535");
      Sub_97.add_attribute("Typ", "23"); // 2
      Sub_97_set.insert("23");
      all_values.push_back(Sub_97_set);
      all_compo_names.insert("Sub_97_set");

      Pty_97.add_element(Sub_97);
    }
    elt.add_element(Pty_97);
  } // end Pty
  { // Qty
    xml_element Qty_4{"Qty"};
    multiset<string> Qty_4_set;
    Qty_4.add_attribute("ExpTyp", "1"); // 1
    Qty_4_set.insert("1");
    Qty_4.add_attribute("ExpQty", "12711446.020000"); // 1
    Qty_4_set.insert("12711446.020000");
    all_values.push_back(Qty_4_set);
    all_compo_names.insert("Qty_4_set");

    elt.add_element(Qty_4);
  } // end Qty
  { // Instrmt
    xml_element Instrmt_13{"Instrmt"};
    multiset<string> Instrmt_13_set;
    Instrmt_13.add_attribute("Sym", "Symbol_t_1391650674"); // 1
    Instrmt_13_set.insert("Symbol_t_1391650674");
    Instrmt_13.add_attribute("Sfx", "CD"); // 1
    Instrmt_13_set.insert("CD");
    Instrmt_13.add_attribute("ID", "SecurityID_t_140787391"); // 1
    Instrmt_13_set.insert("SecurityID_t_140787391");
    Instrmt_13.add_attribute("Src", "H"); // 1
    Instrmt_13_set.insert("H");
    Instrmt_13.add_attribute("Prod", "5"); // 1
    Instrmt_13_set.insert("5");
    Instrmt_13.add_attribute("ProdCmplx", "ProductComplex_t_1195268208"); // 1
    Instrmt_13_set.insert("ProductComplex_t_1195268208");
    Instrmt_13.add_attribute("SecGrp", "SecurityGroup_t_82715981"); // 1
    Instrmt_13_set.insert("SecurityGroup_t_82715981");
    Instrmt_13.add_attribute("CFI", "CFICode_t_24887912"); // 1
    Instrmt_13_set.insert("CFICode_t_24887912");
    Instrmt_13.add_attribute("SecTyp", "FORWARD"); // 1
    Instrmt_13_set.insert("FORWARD");
    Instrmt_13.add_attribute("SubTyp", "SecuritySubType_t_838691190"); // 1
    Instrmt_13_set.insert("SecuritySubType_t_838691190");
    Instrmt_13.add_attribute("MMY", "1295900430"); // 1
    Instrmt_13_set.insert("1295900430");
    Instrmt_13.add_attribute("MatDt", "MaturityDate_t_1837756028"); // 1
    Instrmt_13_set.insert("MaturityDate_t_1837756028");
    Instrmt_13.add_attribute("MatTm", "1287552165"); // 1
    Instrmt_13_set.insert("1287552165");
    Instrmt_13.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_596303800"); // 1
    Instrmt_13_set.insert("SettleOnOpenFlag_t_596303800");
    Instrmt_13.add_attribute("AsgnMeth", "162757010"); // 1
    Instrmt_13_set.insert("162757010");
    Instrmt_13.add_attribute("Status", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("CpnPmt", "CouponPaymentDate_t_1161562521"); // 1
    Instrmt_13_set.insert("CouponPaymentDate_t_1161562521");
    Instrmt_13.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_13_set.insert("XR");
    Instrmt_13.add_attribute("Snrty", "SR"); // 1
    Instrmt_13_set.insert("SR");
    Instrmt_13.add_attribute("NotlPctOut", "6122783.650000"); // 1
    Instrmt_13_set.insert("6122783.650000");
    Instrmt_13.add_attribute("OrigNotlPctOut", "12577624.970000"); // 1
    Instrmt_13_set.insert("12577624.970000");
    Instrmt_13.add_attribute("AttchPnt", "4581798.390000"); // 1
    Instrmt_13_set.insert("4581798.390000");
    Instrmt_13.add_attribute("DetchPnt", "3767844.730000"); // 1
    Instrmt_13_set.insert("3767844.730000");
    Instrmt_13.add_attribute("Issued", "IssueDate_t_1539905530"); // 1
    Instrmt_13_set.insert("IssueDate_t_1539905530");
    Instrmt_13.add_attribute("RepoCollSecTyp", "1682172439"); // 1
    Instrmt_13_set.insert("1682172439");
    Instrmt_13.add_attribute("RepoTrm", "1089341395"); // 1
    Instrmt_13_set.insert("1089341395");
    Instrmt_13.add_attribute("RepoRt", "6621194.180000"); // 1
    Instrmt_13_set.insert("6621194.180000");
    Instrmt_13.add_attribute("Fctr", "8946094.340000"); // 1
    Instrmt_13_set.insert("8946094.340000");
    Instrmt_13.add_attribute("CrdRtg", "CreditRating_t_2088195539"); // 1
    Instrmt_13_set.insert("CreditRating_t_2088195539");
    Instrmt_13.add_attribute("Rgstry", "InstrRegistry_t_1229686043"); // 1
    Instrmt_13_set.insert("InstrRegistry_t_1229686043");
    Instrmt_13.add_attribute("IssuCtry", "18270389"); // 1
    Instrmt_13_set.insert("18270389");
    Instrmt_13.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1332362565"); // 1
    Instrmt_13_set.insert("StateOrProvinceOfIssue_t_1332362565");
    Instrmt_13.add_attribute("Lcl", "LocaleOfIssue_t_345316349"); // 1
    Instrmt_13_set.insert("LocaleOfIssue_t_345316349");
    Instrmt_13.add_attribute("Redeem", "RedemptionDate_t_159057780"); // 1
    Instrmt_13_set.insert("RedemptionDate_t_159057780");
    Instrmt_13.add_attribute("StrkPx", "8947306.370000"); // 1
    Instrmt_13_set.insert("8947306.370000");
    Instrmt_13.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_13_set.insert("USD");
    Instrmt_13.add_attribute("StrkMult", "9774466.190000"); // 1
    Instrmt_13_set.insert("9774466.190000");
    Instrmt_13.add_attribute("StrkValu", "11724239.480000"); // 1
    Instrmt_13_set.insert("11724239.480000");
    Instrmt_13.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_13_set.insert("5");
    Instrmt_13.add_attribute("StrkPxBndryPrcsn", "3208407.300000"); // 1
    Instrmt_13_set.insert("3208407.300000");
    Instrmt_13.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("OptAt", "956206327"); // 1
    Instrmt_13_set.insert("956206327");
    Instrmt_13.add_attribute("Mult", "9171445.300000"); // 1
    Instrmt_13_set.insert("9171445.300000");
    Instrmt_13.add_attribute("MultTyp", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("MinPxIncr", "20787070.510000"); // 1
    Instrmt_13_set.insert("20787070.510000");
    Instrmt_13.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_181015938"); // 1
    Instrmt_13_set.insert("MinPriceIncrementAmount_t_181015938");
    Instrmt_13.add_attribute("UOM", "Alw"); // 1
    Instrmt_13_set.insert("Alw");
    Instrmt_13.add_attribute("UOMQty", "5435017.690000"); // 1
    Instrmt_13_set.insert("5435017.690000");
    Instrmt_13.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_13_set.insert("Gal");
    Instrmt_13.add_attribute("PxUOMQty", "10838462.950000"); // 1
    Instrmt_13_set.insert("10838462.950000");
    Instrmt_13.add_attribute("SettlMeth", "C"); // 1
    Instrmt_13_set.insert("C");
    Instrmt_13.add_attribute("ExerStyle", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("OptPayAmt", "OptPayoutAmount_t_2009627637"); // 1
    Instrmt_13_set.insert("OptPayoutAmount_t_2009627637");
    Instrmt_13.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_13_set.insert("STD");
    Instrmt_13.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_13_set.insert("FUT");
    Instrmt_13.add_attribute("ListMeth", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("CapPx", "5755221.310000"); // 1
    Instrmt_13_set.insert("5755221.310000");
    Instrmt_13.add_attribute("FlrPx", "15314149.100000"); // 1
    Instrmt_13_set.insert("15314149.100000");
    Instrmt_13.add_attribute("PutCall", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("FlexInd", "false"); // 1
    Instrmt_13_set.insert("false");
    Instrmt_13.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_13_set.insert("true");
    Instrmt_13.add_attribute("TmUnit", "Min"); // 1
    Instrmt_13_set.insert("Min");
    Instrmt_13.add_attribute("CpnRt", "20683745.170000"); // 1
    Instrmt_13_set.insert("20683745.170000");
    Instrmt_13.add_attribute("Exch", "SecurityExchange_t_897315031"); // 1
    Instrmt_13_set.insert("SecurityExchange_t_897315031");
    Instrmt_13.add_attribute("PosLmt", "859912054"); // 1
    Instrmt_13_set.insert("859912054");
    Instrmt_13.add_attribute("NTPosLmt", "1093314817"); // 1
    Instrmt_13_set.insert("1093314817");
    Instrmt_13.add_attribute("Issr", "Issuer_t_1470742779"); // 1
    Instrmt_13_set.insert("Issuer_t_1470742779");
    Instrmt_13.add_attribute("EncIssrLen", "528566215"); // 1
    Instrmt_13_set.insert("528566215");
    Instrmt_13.add_attribute("EncIssr", "EncodedIssuer_t_1414155548"); // 1
    Instrmt_13_set.insert("EncodedIssuer_t_1414155548");
    Instrmt_13.add_attribute("Desc", "SecurityDesc_t_1734442908"); // 1
    Instrmt_13_set.insert("SecurityDesc_t_1734442908");
    Instrmt_13.add_attribute("EncSecDescLen", "1484772542"); // 1
    Instrmt_13_set.insert("1484772542");
    Instrmt_13.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_183816430"); // 1
    Instrmt_13_set.insert("EncodedSecurityDesc_t_183816430");
    Instrmt_13.add_attribute("Pool", "Pool_t_13416398"); // 1
    Instrmt_13_set.insert("Pool_t_13416398");
    Instrmt_13.add_attribute("CSetMo", "1872487415"); // 1
    Instrmt_13_set.insert("1872487415");
    Instrmt_13.add_attribute("CPPgm", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("CPRegT", "CPRegType_t_194432336"); // 1
    Instrmt_13_set.insert("CPRegType_t_194432336");
    Instrmt_13.add_attribute("Dated", "DatedDate_t_350670223"); // 1
    Instrmt_13_set.insert("DatedDate_t_350670223");
    Instrmt_13.add_attribute("IntAcrl", "InterestAccrualDate_t_658541603"); // 1
    Instrmt_13_set.insert("InterestAccrualDate_t_658541603");
    all_values.push_back(Instrmt_13_set);
    all_compo_names.insert("Instrmt_13_set");

    {
      xml_element AID_13{"AID"};
      multiset<string> AID_13_set;
      AID_13.add_attribute("AltID", "SecurityAltID_t_1633210772"); // 2
      AID_13_set.insert("SecurityAltID_t_1633210772");
      AID_13.add_attribute("AltIDSrc", "7"); // 2
      AID_13_set.insert("7");
      all_values.push_back(AID_13_set);
      all_compo_names.insert("AID_13_set");

      Instrmt_13.add_element(AID_13);
    }
    {
      xml_element SecXML_13{"SecXML"};
      multiset<string> SecXML_13_set;
      SecXML_13.add_attribute("Schema", "SecurityXMLSchema_t_1578827845"); // 2
      SecXML_13_set.insert("SecurityXMLSchema_t_1578827845");
      all_values.push_back(SecXML_13_set);
      all_compo_names.insert("SecXML_13_set");

      Instrmt_13.add_element(SecXML_13);
    }
    {
      xml_element Evnt_13{"Evnt"};
      multiset<string> Evnt_13_set;
      Evnt_13.add_attribute("EventTyp", "3"); // 2
      Evnt_13_set.insert("3");
      Evnt_13.add_attribute("Dt", "EventDate_t_2053051605"); // 2
      Evnt_13_set.insert("EventDate_t_2053051605");
      Evnt_13.add_attribute("Tm", "EventTime_t_1440971834"); // 2
      Evnt_13_set.insert("EventTime_t_1440971834");
      Evnt_13.add_attribute("Px", "18102471.780000"); // 2
      Evnt_13_set.insert("18102471.780000");
      Evnt_13.add_attribute("Txt", "EventText_t_1418712479"); // 2
      Evnt_13_set.insert("EventText_t_1418712479");
      all_values.push_back(Evnt_13_set);
      all_compo_names.insert("Evnt_13_set");

      Instrmt_13.add_element(Evnt_13);
    }
    {
      xml_element Pty_98{"Pty"};
      multiset<string> Pty_98_set;
      Pty_98.add_attribute("ID", "InstrumentPartyID_t_1243827715"); // 2
      Pty_98_set.insert("InstrumentPartyID_t_1243827715");
      Pty_98.add_attribute("Src", "6"); // 2
      Pty_98_set.insert("6");
      Pty_98.add_attribute("R", "56"); // 2
      Pty_98_set.insert("56");
      all_values.push_back(Pty_98_set);
      all_compo_names.insert("Pty_98_set");

      {
        xml_element Sub_98{"Sub"};
        multiset<string> Sub_98_set;
        Sub_98.add_attribute("ID", "InstrumentPartySubID_t_231562512"); // 3
        Sub_98_set.insert("InstrumentPartySubID_t_231562512");
        Sub_98.add_attribute("Typ", "1"); // 3
        Sub_98_set.insert("1");
        all_values.push_back(Sub_98_set);
        all_compo_names.insert("Sub_98_set");

        Pty_98.add_element(Sub_98);
      }
      Instrmt_13.add_element(Pty_98);
    }
    {
      xml_element CmplxEvnt_13{"CmplxEvnt"};
      multiset<string> CmplxEvnt_13_set;
      CmplxEvnt_13.add_attribute("Typ", "7"); // 2
      CmplxEvnt_13_set.insert("7");
      CmplxEvnt_13.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_114027947"); // 2
      CmplxEvnt_13_set.insert("ComplexOptPayoutAmount_t_114027947");
      CmplxEvnt_13.add_attribute("Px", "10800150.110000"); // 2
      CmplxEvnt_13_set.insert("10800150.110000");
      CmplxEvnt_13.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_13_set.insert("1");
      CmplxEvnt_13.add_attribute("PxBndryPrcsn", "9739400.010000"); // 2
      CmplxEvnt_13_set.insert("9739400.010000");
      CmplxEvnt_13.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_13_set.insert("3");
      CmplxEvnt_13.add_attribute("Cond", "1"); // 2
      CmplxEvnt_13_set.insert("1");
      all_values.push_back(CmplxEvnt_13_set);
      all_compo_names.insert("CmplxEvnt_13_set");

      {
        xml_element EvntDts_13{"EvntDts"};
        multiset<string> EvntDts_13_set;
        EvntDts_13.add_attribute("StartDt", "ComplexEventStartDate_t_1502506217"); // 3
        EvntDts_13_set.insert("ComplexEventStartDate_t_1502506217");
        EvntDts_13.add_attribute("EndDt", "ComplexEventEndDate_t_1440001729"); // 3
        EvntDts_13_set.insert("ComplexEventEndDate_t_1440001729");
        all_values.push_back(EvntDts_13_set);
        all_compo_names.insert("EvntDts_13_set");

        {
          xml_element EvntTms_13{"EvntTms"};
          multiset<string> EvntTms_13_set;
          EvntTms_13.add_attribute("StartTm", "153166206"); // 4
          EvntTms_13_set.insert("153166206");
          EvntTms_13.add_attribute("EndTm", "839795111"); // 4
          EvntTms_13_set.insert("839795111");
          all_values.push_back(EvntTms_13_set);
          all_compo_names.insert("EvntTms_13_set");

          EvntDts_13.add_element(EvntTms_13);
        }
        CmplxEvnt_13.add_element(EvntDts_13);
      }
      Instrmt_13.add_element(CmplxEvnt_13);
    }
    elt.add_element(Instrmt_13);
  } // end Instrmt
  { // Undly
    xml_element Undly_17{"Undly"};
    multiset<string> Undly_17_set;
    Undly_17.add_attribute("Sym", "UnderlyingSymbol_t_166582605"); // 1
    Undly_17_set.insert("UnderlyingSymbol_t_166582605");
    Undly_17.add_attribute("Sfx", "CD"); // 1
    Undly_17_set.insert("CD");
    Undly_17.add_attribute("ID", "UnderlyingSecurityID_t_1738857993"); // 1
    Undly_17_set.insert("UnderlyingSecurityID_t_1738857993");
    Undly_17.add_attribute("Src", "2"); // 1
    Undly_17_set.insert("2");
    Undly_17.add_attribute("Prod", "10"); // 1
    Undly_17_set.insert("10");
    Undly_17.add_attribute("CFI", "UnderlyingCFICode_t_249915948"); // 1
    Undly_17_set.insert("UnderlyingCFICode_t_249915948");
    Undly_17.add_attribute("SecTyp", "EUFRN"); // 1
    Undly_17_set.insert("EUFRN");
    Undly_17.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_202501972"); // 1
    Undly_17_set.insert("UnderlyingSecuritySubType_t_202501972");
    Undly_17.add_attribute("MMY", "1828743793"); // 1
    Undly_17_set.insert("1828743793");
    Undly_17.add_attribute("Mat", "UnderlyingMaturityDate_t_163669507"); // 1
    Undly_17_set.insert("UnderlyingMaturityDate_t_163669507");
    Undly_17.add_attribute("MatTm", "108069929"); // 1
    Undly_17_set.insert("108069929");
    Undly_17.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1122231980"); // 1
    Undly_17_set.insert("UnderlyingCouponPaymentDate_t_1122231980");
    Undly_17.add_attribute("RestrctTyp", "MR"); // 1
    Undly_17_set.insert("MR");
    Undly_17.add_attribute("Snrty", "SR"); // 1
    Undly_17_set.insert("SR");
    Undly_17.add_attribute("NotlPctOut", "2185760.470000"); // 1
    Undly_17_set.insert("2185760.470000");
    Undly_17.add_attribute("OrigNotlPctOut", "647186.990000"); // 1
    Undly_17_set.insert("647186.990000");
    Undly_17.add_attribute("AttchPnt", "1819425.020000"); // 1
    Undly_17_set.insert("1819425.020000");
    Undly_17.add_attribute("DetchPnt", "4501385.590000"); // 1
    Undly_17_set.insert("4501385.590000");
    Undly_17.add_attribute("Issued", "UnderlyingIssueDate_t_1223842841"); // 1
    Undly_17_set.insert("UnderlyingIssueDate_t_1223842841");
    Undly_17.add_attribute("RepoCollSecTyp", "527575286"); // 1
    Undly_17_set.insert("527575286");
    Undly_17.add_attribute("RepoTrm", "564166507"); // 1
    Undly_17_set.insert("564166507");
    Undly_17.add_attribute("RepoRt", "1563742.050000"); // 1
    Undly_17_set.insert("1563742.050000");
    Undly_17.add_attribute("Fctr", "17705231.010000"); // 1
    Undly_17_set.insert("17705231.010000");
    Undly_17.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1538106508"); // 1
    Undly_17_set.insert("UnderlyingCreditRating_t_1538106508");
    Undly_17.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_182220386"); // 1
    Undly_17_set.insert("UnderlyingInstrRegistry_t_182220386");
    Undly_17.add_attribute("Ctry", "189246399"); // 1
    Undly_17_set.insert("189246399");
    Undly_17.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_893129077"); // 1
    Undly_17_set.insert("UnderlyingStateOrProvinceOfIssue_t_893129077");
    Undly_17.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1622222115"); // 1
    Undly_17_set.insert("UnderlyingLocaleOfIssue_t_1622222115");
    Undly_17.add_attribute("Redeem", "UnderlyingRedemptionDate_t_342412606"); // 1
    Undly_17_set.insert("UnderlyingRedemptionDate_t_342412606");
    Undly_17.add_attribute("StrkPx", "17329241.890000"); // 1
    Undly_17_set.insert("17329241.890000");
    Undly_17.add_attribute("StrkCcy", "EUR"); // 1
    Undly_17_set.insert("EUR");
    Undly_17.add_attribute("OptA", "150239419"); // 1
    Undly_17_set.insert("150239419");
    Undly_17.add_attribute("Mult", "6899309.720000"); // 1
    Undly_17_set.insert("6899309.720000");
    Undly_17.add_attribute("MultTyp", "0"); // 1
    Undly_17_set.insert("0");
    Undly_17.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_17_set.insert("1");
    Undly_17.add_attribute("UOM", "Alw"); // 1
    Undly_17_set.insert("Alw");
    Undly_17.add_attribute("UOMQty", "7167522.180000"); // 1
    Undly_17_set.insert("7167522.180000");
    Undly_17.add_attribute("PxUOM", "t"); // 1
    Undly_17_set.insert("t");
    Undly_17.add_attribute("PxUOMQty", "6211070.660000"); // 1
    Undly_17_set.insert("6211070.660000");
    Undly_17.add_attribute("TmUnit", "Min"); // 1
    Undly_17_set.insert("Min");
    Undly_17.add_attribute("ExerStyle", "2"); // 1
    Undly_17_set.insert("2");
    Undly_17.add_attribute("CpnRt", "17433390.460000"); // 1
    Undly_17_set.insert("17433390.460000");
    Undly_17.add_attribute("Exch", "UnderlyingSecurityExchange_t_706854763"); // 1
    Undly_17_set.insert("UnderlyingSecurityExchange_t_706854763");
    Undly_17.add_attribute("Issr", "UnderlyingIssuer_t_755579183"); // 1
    Undly_17_set.insert("UnderlyingIssuer_t_755579183");
    Undly_17.add_attribute("EncUndIssrLen", "1961915093"); // 1
    Undly_17_set.insert("1961915093");
    Undly_17.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_771573462"); // 1
    Undly_17_set.insert("EncodedUnderlyingIssuer_t_771573462");
    Undly_17.add_attribute("Desc", "UnderlyingSecurityDesc_t_937521685"); // 1
    Undly_17_set.insert("UnderlyingSecurityDesc_t_937521685");
    Undly_17.add_attribute("EncUndSecDescLen", "264570004"); // 1
    Undly_17_set.insert("264570004");
    Undly_17.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1995416303"); // 1
    Undly_17_set.insert("EncodedUnderlyingSecurityDesc_t_1995416303");
    Undly_17.add_attribute("CPPgm", "UnderlyingCPProgram_t_1465096971"); // 1
    Undly_17_set.insert("UnderlyingCPProgram_t_1465096971");
    Undly_17.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_828736511"); // 1
    Undly_17_set.insert("UnderlyingCPRegType_t_828736511");
    Undly_17.add_attribute("AllocPct", "43068.600000"); // 1
    Undly_17_set.insert("43068.600000");
    Undly_17.add_attribute("Ccy", "GBP"); // 1
    Undly_17_set.insert("GBP");
    Undly_17.add_attribute("Qty", "1865272.460000"); // 1
    Undly_17_set.insert("1865272.460000");
    Undly_17.add_attribute("SettlTyp", "4"); // 1
    Undly_17_set.insert("4");
    Undly_17.add_attribute("CashAmt", "UnderlyingCashAmount_t_1112488449"); // 1
    Undly_17_set.insert("UnderlyingCashAmount_t_1112488449");
    Undly_17.add_attribute("CashTyp", "DIFF"); // 1
    Undly_17_set.insert("DIFF");
    Undly_17.add_attribute("Px", "16197954.290000"); // 1
    Undly_17_set.insert("16197954.290000");
    Undly_17.add_attribute("DirtPx", "6979289.900000"); // 1
    Undly_17_set.insert("6979289.900000");
    Undly_17.add_attribute("EndPx", "7598223.400000"); // 1
    Undly_17_set.insert("7598223.400000");
    Undly_17.add_attribute("StartVal", "UnderlyingStartValue_t_2128790640"); // 1
    Undly_17_set.insert("UnderlyingStartValue_t_2128790640");
    Undly_17.add_attribute("CurVal", "UnderlyingCurrentValue_t_848168410"); // 1
    Undly_17_set.insert("UnderlyingCurrentValue_t_848168410");
    Undly_17.add_attribute("EndVal", "UnderlyingEndValue_t_1449753312"); // 1
    Undly_17_set.insert("UnderlyingEndValue_t_1449753312");
    Undly_17.add_attribute("AdjQty", "8513171.450000"); // 1
    Undly_17_set.insert("8513171.450000");
    Undly_17.add_attribute("FxRate", "19138769.310000"); // 1
    Undly_17_set.insert("19138769.310000");
    Undly_17.add_attribute("FxRateCalc", "M"); // 1
    Undly_17_set.insert("M");
    Undly_17.add_attribute("CapValu", "UnderlyingCapValue_t_1568069363"); // 1
    Undly_17_set.insert("UnderlyingCapValue_t_1568069363");
    Undly_17.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1034603776"); // 1
    Undly_17_set.insert("UnderlyingSettlMethod_t_1034603776");
    Undly_17.add_attribute("PutCall", "863223650"); // 1
    Undly_17_set.insert("863223650");
    all_values.push_back(Undly_17_set);
    all_compo_names.insert("Undly_17_set");

    {
      xml_element UndAID_17{"UndAID"};
      multiset<string> UndAID_17_set;
      UndAID_17.add_attribute("AltID", "UnderlyingSecurityAltID_t_301007440"); // 2
      UndAID_17_set.insert("UnderlyingSecurityAltID_t_301007440");
      UndAID_17.add_attribute("AltIDSrc", "7"); // 2
      UndAID_17_set.insert("7");
      all_values.push_back(UndAID_17_set);
      all_compo_names.insert("UndAID_17_set");

      Undly_17.add_element(UndAID_17);
    }
    {
      xml_element Stip_37{"Stip"};
      multiset<string> Stip_37_set;
      Stip_37.add_attribute("Typ", "CPY"); // 2
      Stip_37_set.insert("CPY");
      Stip_37.add_attribute("Val", "UnderlyingStipValue_t_1007862203"); // 2
      Stip_37_set.insert("UnderlyingStipValue_t_1007862203");
      all_values.push_back(Stip_37_set);
      all_compo_names.insert("Stip_37_set");

      Undly_17.add_element(Stip_37);
    }
    {
      xml_element Pty_99{"Pty"};
      multiset<string> Pty_99_set;
      Pty_99.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1018979733"); // 2
      Pty_99_set.insert("UnderlyingInstrumentPartyID_t_1018979733");
      Pty_99.add_attribute("Src", "8"); // 2
      Pty_99_set.insert("8");
      Pty_99.add_attribute("R", "79"); // 2
      Pty_99_set.insert("79");
      all_values.push_back(Pty_99_set);
      all_compo_names.insert("Pty_99_set");

      {
        xml_element Sub_99{"Sub"};
        multiset<string> Sub_99_set;
        Sub_99.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1956501418"); // 3
        Sub_99_set.insert("UnderlyingInstrumentPartySubID_t_1956501418");
        Sub_99.add_attribute("Typ", "5"); // 3
        Sub_99_set.insert("5");
        all_values.push_back(Sub_99_set);
        all_compo_names.insert("Sub_99_set");

        Pty_99.add_element(Sub_99);
      }
      Undly_17.add_element(Pty_99);
    }
    elt.add_element(Undly_17);
  } // end Undly
  { // Undly
    xml_element Undly_18{"Undly"};
    multiset<string> Undly_18_set;
    Undly_18.add_attribute("Sym", "UnderlyingSymbol_t_1627368321"); // 1
    Undly_18_set.insert("UnderlyingSymbol_t_1627368321");
    Undly_18.add_attribute("Sfx", "WI"); // 1
    Undly_18_set.insert("WI");
    Undly_18.add_attribute("ID", "UnderlyingSecurityID_t_1366817009"); // 1
    Undly_18_set.insert("UnderlyingSecurityID_t_1366817009");
    Undly_18.add_attribute("Src", "G"); // 1
    Undly_18_set.insert("G");
    Undly_18.add_attribute("Prod", "12"); // 1
    Undly_18_set.insert("12");
    Undly_18.add_attribute("CFI", "UnderlyingCFICode_t_1586176381"); // 1
    Undly_18_set.insert("UnderlyingCFICode_t_1586176381");
    Undly_18.add_attribute("SecTyp", "CPP"); // 1
    Undly_18_set.insert("CPP");
    Undly_18.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1492150341"); // 1
    Undly_18_set.insert("UnderlyingSecuritySubType_t_1492150341");
    Undly_18.add_attribute("MMY", "551181183"); // 1
    Undly_18_set.insert("551181183");
    Undly_18.add_attribute("Mat", "UnderlyingMaturityDate_t_1479468141"); // 1
    Undly_18_set.insert("UnderlyingMaturityDate_t_1479468141");
    Undly_18.add_attribute("MatTm", "964462122"); // 1
    Undly_18_set.insert("964462122");
    Undly_18.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1249110173"); // 1
    Undly_18_set.insert("UnderlyingCouponPaymentDate_t_1249110173");
    Undly_18.add_attribute("RestrctTyp", "MR"); // 1
    Undly_18_set.insert("MR");
    Undly_18.add_attribute("Snrty", "SB"); // 1
    Undly_18_set.insert("SB");
    Undly_18.add_attribute("NotlPctOut", "20972785.830000"); // 1
    Undly_18_set.insert("20972785.830000");
    Undly_18.add_attribute("OrigNotlPctOut", "15415601.450000"); // 1
    Undly_18_set.insert("15415601.450000");
    Undly_18.add_attribute("AttchPnt", "17970862.600000"); // 1
    Undly_18_set.insert("17970862.600000");
    Undly_18.add_attribute("DetchPnt", "18636718.660000"); // 1
    Undly_18_set.insert("18636718.660000");
    Undly_18.add_attribute("Issued", "UnderlyingIssueDate_t_1783676730"); // 1
    Undly_18_set.insert("UnderlyingIssueDate_t_1783676730");
    Undly_18.add_attribute("RepoCollSecTyp", "1217671975"); // 1
    Undly_18_set.insert("1217671975");
    Undly_18.add_attribute("RepoTrm", "750791994"); // 1
    Undly_18_set.insert("750791994");
    Undly_18.add_attribute("RepoRt", "4994167.320000"); // 1
    Undly_18_set.insert("4994167.320000");
    Undly_18.add_attribute("Fctr", "15186794.150000"); // 1
    Undly_18_set.insert("15186794.150000");
    Undly_18.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1014192545"); // 1
    Undly_18_set.insert("UnderlyingCreditRating_t_1014192545");
    Undly_18.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_958495781"); // 1
    Undly_18_set.insert("UnderlyingInstrRegistry_t_958495781");
    Undly_18.add_attribute("Ctry", "379057971"); // 1
    Undly_18_set.insert("379057971");
    Undly_18.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2033172278"); // 1
    Undly_18_set.insert("UnderlyingStateOrProvinceOfIssue_t_2033172278");
    Undly_18.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1232006274"); // 1
    Undly_18_set.insert("UnderlyingLocaleOfIssue_t_1232006274");
    Undly_18.add_attribute("Redeem", "UnderlyingRedemptionDate_t_11009988"); // 1
    Undly_18_set.insert("UnderlyingRedemptionDate_t_11009988");
    Undly_18.add_attribute("StrkPx", "18421900.490000"); // 1
    Undly_18_set.insert("18421900.490000");
    Undly_18.add_attribute("StrkCcy", "CHF"); // 1
    Undly_18_set.insert("CHF");
    Undly_18.add_attribute("OptA", "968821142"); // 1
    Undly_18_set.insert("968821142");
    Undly_18.add_attribute("Mult", "9894201.340000"); // 1
    Undly_18_set.insert("9894201.340000");
    Undly_18.add_attribute("MultTyp", "2"); // 1
    Undly_18_set.insert("2");
    Undly_18.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_18_set.insert("0");
    Undly_18.add_attribute("UOM", "MWh"); // 1
    Undly_18_set.insert("MWh");
    Undly_18.add_attribute("UOMQty", "7932886.230000"); // 1
    Undly_18_set.insert("7932886.230000");
    Undly_18.add_attribute("PxUOM", "Bbl"); // 1
    Undly_18_set.insert("Bbl");
    Undly_18.add_attribute("PxUOMQty", "9792940.500000"); // 1
    Undly_18_set.insert("9792940.500000");
    Undly_18.add_attribute("TmUnit", "D"); // 1
    Undly_18_set.insert("D");
    Undly_18.add_attribute("ExerStyle", "2"); // 1
    Undly_18_set.insert("2");
    Undly_18.add_attribute("CpnRt", "809205.760000"); // 1
    Undly_18_set.insert("809205.760000");
    Undly_18.add_attribute("Exch", "UnderlyingSecurityExchange_t_217079950"); // 1
    Undly_18_set.insert("UnderlyingSecurityExchange_t_217079950");
    Undly_18.add_attribute("Issr", "UnderlyingIssuer_t_291002942"); // 1
    Undly_18_set.insert("UnderlyingIssuer_t_291002942");
    Undly_18.add_attribute("EncUndIssrLen", "30715511"); // 1
    Undly_18_set.insert("30715511");
    Undly_18.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1758640095"); // 1
    Undly_18_set.insert("EncodedUnderlyingIssuer_t_1758640095");
    Undly_18.add_attribute("Desc", "UnderlyingSecurityDesc_t_2088089202"); // 1
    Undly_18_set.insert("UnderlyingSecurityDesc_t_2088089202");
    Undly_18.add_attribute("EncUndSecDescLen", "1894387378"); // 1
    Undly_18_set.insert("1894387378");
    Undly_18.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1394833177"); // 1
    Undly_18_set.insert("EncodedUnderlyingSecurityDesc_t_1394833177");
    Undly_18.add_attribute("CPPgm", "UnderlyingCPProgram_t_1158277529"); // 1
    Undly_18_set.insert("UnderlyingCPProgram_t_1158277529");
    Undly_18.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_497695724"); // 1
    Undly_18_set.insert("UnderlyingCPRegType_t_497695724");
    Undly_18.add_attribute("AllocPct", "18942499.100000"); // 1
    Undly_18_set.insert("18942499.100000");
    Undly_18.add_attribute("Ccy", "EUR"); // 1
    Undly_18_set.insert("EUR");
    Undly_18.add_attribute("Qty", "7052620.430000"); // 1
    Undly_18_set.insert("7052620.430000");
    Undly_18.add_attribute("SettlTyp", "2"); // 1
    Undly_18_set.insert("2");
    Undly_18.add_attribute("CashAmt", "UnderlyingCashAmount_t_1397576900"); // 1
    Undly_18_set.insert("UnderlyingCashAmount_t_1397576900");
    Undly_18.add_attribute("CashTyp", "DIFF"); // 1
    Undly_18_set.insert("DIFF");
    Undly_18.add_attribute("Px", "9195412.560000"); // 1
    Undly_18_set.insert("9195412.560000");
    Undly_18.add_attribute("DirtPx", "10922833.010000"); // 1
    Undly_18_set.insert("10922833.010000");
    Undly_18.add_attribute("EndPx", "15598714.420000"); // 1
    Undly_18_set.insert("15598714.420000");
    Undly_18.add_attribute("StartVal", "UnderlyingStartValue_t_410435918"); // 1
    Undly_18_set.insert("UnderlyingStartValue_t_410435918");
    Undly_18.add_attribute("CurVal", "UnderlyingCurrentValue_t_2061104443"); // 1
    Undly_18_set.insert("UnderlyingCurrentValue_t_2061104443");
    Undly_18.add_attribute("EndVal", "UnderlyingEndValue_t_401807928"); // 1
    Undly_18_set.insert("UnderlyingEndValue_t_401807928");
    Undly_18.add_attribute("AdjQty", "15330057.610000"); // 1
    Undly_18_set.insert("15330057.610000");
    Undly_18.add_attribute("FxRate", "10972094.550000"); // 1
    Undly_18_set.insert("10972094.550000");
    Undly_18.add_attribute("FxRateCalc", "D"); // 1
    Undly_18_set.insert("D");
    Undly_18.add_attribute("CapValu", "UnderlyingCapValue_t_178810736"); // 1
    Undly_18_set.insert("UnderlyingCapValue_t_178810736");
    Undly_18.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1625464808"); // 1
    Undly_18_set.insert("UnderlyingSettlMethod_t_1625464808");
    Undly_18.add_attribute("PutCall", "1809214846"); // 1
    Undly_18_set.insert("1809214846");
    all_values.push_back(Undly_18_set);
    all_compo_names.insert("Undly_18_set");

    {
      xml_element UndAID_18{"UndAID"};
      multiset<string> UndAID_18_set;
      UndAID_18.add_attribute("AltID", "UnderlyingSecurityAltID_t_304083852"); // 2
      UndAID_18_set.insert("UnderlyingSecurityAltID_t_304083852");
      UndAID_18.add_attribute("AltIDSrc", "7"); // 2
      UndAID_18_set.insert("7");
      all_values.push_back(UndAID_18_set);
      all_compo_names.insert("UndAID_18_set");

      Undly_18.add_element(UndAID_18);
    }
    {
      xml_element Stip_38{"Stip"};
      multiset<string> Stip_38_set;
      Stip_38.add_attribute("Typ", "MAXBAL"); // 2
      Stip_38_set.insert("MAXBAL");
      Stip_38.add_attribute("Val", "UnderlyingStipValue_t_521163802"); // 2
      Stip_38_set.insert("UnderlyingStipValue_t_521163802");
      all_values.push_back(Stip_38_set);
      all_compo_names.insert("Stip_38_set");

      Undly_18.add_element(Stip_38);
    }
    {
      xml_element Pty_100{"Pty"};
      multiset<string> Pty_100_set;
      Pty_100.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1261701578"); // 2
      Pty_100_set.insert("UnderlyingInstrumentPartyID_t_1261701578");
      Pty_100.add_attribute("Src", "E"); // 2
      Pty_100_set.insert("E");
      Pty_100.add_attribute("R", "15"); // 2
      Pty_100_set.insert("15");
      all_values.push_back(Pty_100_set);
      all_compo_names.insert("Pty_100_set");

      {
        xml_element Sub_100{"Sub"};
        multiset<string> Sub_100_set;
        Sub_100.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1202307133"); // 3
        Sub_100_set.insert("UnderlyingInstrumentPartySubID_t_1202307133");
        Sub_100.add_attribute("Typ", "12"); // 3
        Sub_100_set.insert("12");
        all_values.push_back(Sub_100_set);
        all_compo_names.insert("Sub_100_set");

        Pty_100.add_element(Sub_100);
      }
      Undly_18.add_element(Pty_100);
    }
    elt.add_element(Undly_18);
  } // end Undly
  { // Undly
    xml_element Undly_19{"Undly"};
    multiset<string> Undly_19_set;
    Undly_19.add_attribute("Sym", "UnderlyingSymbol_t_1527153427"); // 1
    Undly_19_set.insert("UnderlyingSymbol_t_1527153427");
    Undly_19.add_attribute("Sfx", "CD"); // 1
    Undly_19_set.insert("CD");
    Undly_19.add_attribute("ID", "UnderlyingSecurityID_t_17966740"); // 1
    Undly_19_set.insert("UnderlyingSecurityID_t_17966740");
    Undly_19.add_attribute("Src", "A"); // 1
    Undly_19_set.insert("A");
    Undly_19.add_attribute("Prod", "8"); // 1
    Undly_19_set.insert("8");
    Undly_19.add_attribute("CFI", "UnderlyingCFICode_t_1529855009"); // 1
    Undly_19_set.insert("UnderlyingCFICode_t_1529855009");
    Undly_19.add_attribute("SecTyp", "SECPLEDGE"); // 1
    Undly_19_set.insert("SECPLEDGE");
    Undly_19.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1651105579"); // 1
    Undly_19_set.insert("UnderlyingSecuritySubType_t_1651105579");
    Undly_19.add_attribute("MMY", "779948261"); // 1
    Undly_19_set.insert("779948261");
    Undly_19.add_attribute("Mat", "UnderlyingMaturityDate_t_1768966402"); // 1
    Undly_19_set.insert("UnderlyingMaturityDate_t_1768966402");
    Undly_19.add_attribute("MatTm", "423163188"); // 1
    Undly_19_set.insert("423163188");
    Undly_19.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1872231562"); // 1
    Undly_19_set.insert("UnderlyingCouponPaymentDate_t_1872231562");
    Undly_19.add_attribute("RestrctTyp", "FR"); // 1
    Undly_19_set.insert("FR");
    Undly_19.add_attribute("Snrty", "SB"); // 1
    Undly_19_set.insert("SB");
    Undly_19.add_attribute("NotlPctOut", "17858523.580000"); // 1
    Undly_19_set.insert("17858523.580000");
    Undly_19.add_attribute("OrigNotlPctOut", "15831621.240000"); // 1
    Undly_19_set.insert("15831621.240000");
    Undly_19.add_attribute("AttchPnt", "2191212.190000"); // 1
    Undly_19_set.insert("2191212.190000");
    Undly_19.add_attribute("DetchPnt", "7355781.650000"); // 1
    Undly_19_set.insert("7355781.650000");
    Undly_19.add_attribute("Issued", "UnderlyingIssueDate_t_265599271"); // 1
    Undly_19_set.insert("UnderlyingIssueDate_t_265599271");
    Undly_19.add_attribute("RepoCollSecTyp", "397931955"); // 1
    Undly_19_set.insert("397931955");
    Undly_19.add_attribute("RepoTrm", "213559326"); // 1
    Undly_19_set.insert("213559326");
    Undly_19.add_attribute("RepoRt", "20748141.170000"); // 1
    Undly_19_set.insert("20748141.170000");
    Undly_19.add_attribute("Fctr", "7020158.070000"); // 1
    Undly_19_set.insert("7020158.070000");
    Undly_19.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1184257962"); // 1
    Undly_19_set.insert("UnderlyingCreditRating_t_1184257962");
    Undly_19.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1817465891"); // 1
    Undly_19_set.insert("UnderlyingInstrRegistry_t_1817465891");
    Undly_19.add_attribute("Ctry", "1223179610"); // 1
    Undly_19_set.insert("1223179610");
    Undly_19.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_298475892"); // 1
    Undly_19_set.insert("UnderlyingStateOrProvinceOfIssue_t_298475892");
    Undly_19.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1590833177"); // 1
    Undly_19_set.insert("UnderlyingLocaleOfIssue_t_1590833177");
    Undly_19.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1355499860"); // 1
    Undly_19_set.insert("UnderlyingRedemptionDate_t_1355499860");
    Undly_19.add_attribute("StrkPx", "15007830.250000"); // 1
    Undly_19_set.insert("15007830.250000");
    Undly_19.add_attribute("StrkCcy", "EUR"); // 1
    Undly_19_set.insert("EUR");
    Undly_19.add_attribute("OptA", "1713884040"); // 1
    Undly_19_set.insert("1713884040");
    Undly_19.add_attribute("Mult", "11290709.320000"); // 1
    Undly_19_set.insert("11290709.320000");
    Undly_19.add_attribute("MultTyp", "0"); // 1
    Undly_19_set.insert("0");
    Undly_19.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_19_set.insert("3");
    Undly_19.add_attribute("UOM", "Alw"); // 1
    Undly_19_set.insert("Alw");
    Undly_19.add_attribute("UOMQty", "18407874.130000"); // 1
    Undly_19_set.insert("18407874.130000");
    Undly_19.add_attribute("PxUOM", "tn"); // 1
    Undly_19_set.insert("tn");
    Undly_19.add_attribute("PxUOMQty", "12913905.550000"); // 1
    Undly_19_set.insert("12913905.550000");
    Undly_19.add_attribute("TmUnit", "Min"); // 1
    Undly_19_set.insert("Min");
    Undly_19.add_attribute("ExerStyle", "2"); // 1
    Undly_19_set.insert("2");
    Undly_19.add_attribute("CpnRt", "10161384.700000"); // 1
    Undly_19_set.insert("10161384.700000");
    Undly_19.add_attribute("Exch", "UnderlyingSecurityExchange_t_496140715"); // 1
    Undly_19_set.insert("UnderlyingSecurityExchange_t_496140715");
    Undly_19.add_attribute("Issr", "UnderlyingIssuer_t_1069358929"); // 1
    Undly_19_set.insert("UnderlyingIssuer_t_1069358929");
    Undly_19.add_attribute("EncUndIssrLen", "654507180"); // 1
    Undly_19_set.insert("654507180");
    Undly_19.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2079302839"); // 1
    Undly_19_set.insert("EncodedUnderlyingIssuer_t_2079302839");
    Undly_19.add_attribute("Desc", "UnderlyingSecurityDesc_t_1288480148"); // 1
    Undly_19_set.insert("UnderlyingSecurityDesc_t_1288480148");
    Undly_19.add_attribute("EncUndSecDescLen", "1390085345"); // 1
    Undly_19_set.insert("1390085345");
    Undly_19.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_197418463"); // 1
    Undly_19_set.insert("EncodedUnderlyingSecurityDesc_t_197418463");
    Undly_19.add_attribute("CPPgm", "UnderlyingCPProgram_t_1686412103"); // 1
    Undly_19_set.insert("UnderlyingCPProgram_t_1686412103");
    Undly_19.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1603644671"); // 1
    Undly_19_set.insert("UnderlyingCPRegType_t_1603644671");
    Undly_19.add_attribute("AllocPct", "1247489.320000"); // 1
    Undly_19_set.insert("1247489.320000");
    Undly_19.add_attribute("Ccy", "CHF"); // 1
    Undly_19_set.insert("CHF");
    Undly_19.add_attribute("Qty", "19422148.240000"); // 1
    Undly_19_set.insert("19422148.240000");
    Undly_19.add_attribute("SettlTyp", "5"); // 1
    Undly_19_set.insert("5");
    Undly_19.add_attribute("CashAmt", "UnderlyingCashAmount_t_938894878"); // 1
    Undly_19_set.insert("UnderlyingCashAmount_t_938894878");
    Undly_19.add_attribute("CashTyp", "DIFF"); // 1
    Undly_19_set.insert("DIFF");
    Undly_19.add_attribute("Px", "6721400.840000"); // 1
    Undly_19_set.insert("6721400.840000");
    Undly_19.add_attribute("DirtPx", "2921942.550000"); // 1
    Undly_19_set.insert("2921942.550000");
    Undly_19.add_attribute("EndPx", "3491848.970000"); // 1
    Undly_19_set.insert("3491848.970000");
    Undly_19.add_attribute("StartVal", "UnderlyingStartValue_t_1407309724"); // 1
    Undly_19_set.insert("UnderlyingStartValue_t_1407309724");
    Undly_19.add_attribute("CurVal", "UnderlyingCurrentValue_t_2006078295"); // 1
    Undly_19_set.insert("UnderlyingCurrentValue_t_2006078295");
    Undly_19.add_attribute("EndVal", "UnderlyingEndValue_t_1478255830"); // 1
    Undly_19_set.insert("UnderlyingEndValue_t_1478255830");
    Undly_19.add_attribute("AdjQty", "12689154.050000"); // 1
    Undly_19_set.insert("12689154.050000");
    Undly_19.add_attribute("FxRate", "1675693.510000"); // 1
    Undly_19_set.insert("1675693.510000");
    Undly_19.add_attribute("FxRateCalc", "M"); // 1
    Undly_19_set.insert("M");
    Undly_19.add_attribute("CapValu", "UnderlyingCapValue_t_962219170"); // 1
    Undly_19_set.insert("UnderlyingCapValue_t_962219170");
    Undly_19.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2127649634"); // 1
    Undly_19_set.insert("UnderlyingSettlMethod_t_2127649634");
    Undly_19.add_attribute("PutCall", "1133605031"); // 1
    Undly_19_set.insert("1133605031");
    all_values.push_back(Undly_19_set);
    all_compo_names.insert("Undly_19_set");

    {
      xml_element UndAID_19{"UndAID"};
      multiset<string> UndAID_19_set;
      UndAID_19.add_attribute("AltID", "UnderlyingSecurityAltID_t_277005690"); // 2
      UndAID_19_set.insert("UnderlyingSecurityAltID_t_277005690");
      UndAID_19.add_attribute("AltIDSrc", "C"); // 2
      UndAID_19_set.insert("C");
      all_values.push_back(UndAID_19_set);
      all_compo_names.insert("UndAID_19_set");

      Undly_19.add_element(UndAID_19);
    }
    {
      xml_element Stip_39{"Stip"};
      multiset<string> Stip_39_set;
      Stip_39.add_attribute("Typ", "HEP"); // 2
      Stip_39_set.insert("HEP");
      Stip_39.add_attribute("Val", "UnderlyingStipValue_t_773146405"); // 2
      Stip_39_set.insert("UnderlyingStipValue_t_773146405");
      all_values.push_back(Stip_39_set);
      all_compo_names.insert("Stip_39_set");

      Undly_19.add_element(Stip_39);
    }
    {
      xml_element Pty_101{"Pty"};
      multiset<string> Pty_101_set;
      Pty_101.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1285284738"); // 2
      Pty_101_set.insert("UnderlyingInstrumentPartyID_t_1285284738");
      Pty_101.add_attribute("Src", "8"); // 2
      Pty_101_set.insert("8");
      Pty_101.add_attribute("R", "52"); // 2
      Pty_101_set.insert("52");
      all_values.push_back(Pty_101_set);
      all_compo_names.insert("Pty_101_set");

      {
        xml_element Sub_101{"Sub"};
        multiset<string> Sub_101_set;
        Sub_101.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_426281238"); // 3
        Sub_101_set.insert("UnderlyingInstrumentPartySubID_t_426281238");
        Sub_101.add_attribute("Typ", "6"); // 3
        Sub_101_set.insert("6");
        all_values.push_back(Sub_101_set);
        all_compo_names.insert("Sub_101_set");

        Pty_101.add_element(Sub_101);
      }
      Undly_19.add_element(Pty_101);
    }
    elt.add_element(Undly_19);
  } // end Undly
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
