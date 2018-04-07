#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AssignmentReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AssignmentReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AsgnRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AssignmentReport_message_t_0;
  elt.add_attribute("RptID", "AsgnRptID_t_4344277"); // 0
  AssignmentReport_message_t_0.insert("AsgnRptID_t_4344277");
  elt.add_attribute("ReqID", "PosReqID_t_2087579792"); // 0
  AssignmentReport_message_t_0.insert("PosReqID_t_2087579792");
  elt.add_attribute("TotNumAsgnRpts", "612696457"); // 0
  AssignmentReport_message_t_0.insert("612696457");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  AssignmentReport_message_t_0.insert("Y");
  elt.add_attribute("Acct", "Account_t_465744697"); // 0
  AssignmentReport_message_t_0.insert("Account_t_465744697");
  elt.add_attribute("AcctTyp", "8"); // 0
  AssignmentReport_message_t_0.insert("8");
  elt.add_attribute("Ccy", "USD"); // 0
  AssignmentReport_message_t_0.insert("USD");
  elt.add_attribute("ThresholdAmt", "3905789.000000"); // 0
  AssignmentReport_message_t_0.insert("3905789.000000");
  elt.add_attribute("SetPx", "285222.120000"); // 0
  AssignmentReport_message_t_0.insert("285222.120000");
  elt.add_attribute("SetPxTyp", "2"); // 0
  AssignmentReport_message_t_0.insert("2");
  elt.add_attribute("UndSetPx", "5299160.620000"); // 0
  AssignmentReport_message_t_0.insert("5299160.620000");
  elt.add_attribute("PriSetPx", "18364552.500000"); // 0
  AssignmentReport_message_t_0.insert("18364552.500000");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1366313907"); // 0
  AssignmentReport_message_t_0.insert("ExpireDate_t_1366313907");
  elt.add_attribute("AsgnMeth", "P"); // 0
  AssignmentReport_message_t_0.insert("P");
  elt.add_attribute("Unit", "6277167.320000"); // 0
  AssignmentReport_message_t_0.insert("6277167.320000");
  elt.add_attribute("OpenInt", "OpenInterest_t_1398673795"); // 0
  AssignmentReport_message_t_0.insert("OpenInterest_t_1398673795");
  elt.add_attribute("ExrMethod", "A"); // 0
  AssignmentReport_message_t_0.insert("A");
  elt.add_attribute("SetSesID", "ETH"); // 0
  AssignmentReport_message_t_0.insert("ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_704226226"); // 0
  AssignmentReport_message_t_0.insert("SettlSessSubID_t_704226226");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1064702735"); // 0
  AssignmentReport_message_t_0.insert("ClearingBusinessDate_t_1064702735");
  elt.add_attribute("Txt", "Text_t_1755577941"); // 0
  AssignmentReport_message_t_0.insert("Text_t_1755577941");
  elt.add_attribute("EncTxtLen", "2126008776"); // 0
  AssignmentReport_message_t_0.insert("2126008776");
  elt.add_attribute("EncTxt", "EncodedText_t_582074783"); // 0
  AssignmentReport_message_t_0.insert("EncodedText_t_582074783");
  all_values.push_back(AssignmentReport_message_t_0);
  all_compo_names.insert("AssignmentReport_message_t");

  { // Hdr
    xml_element Hdr_10{"Hdr"};
    multiset<string> Hdr_10_set;
    Hdr_10.add_attribute("SeqNum", "159601059"); // 1
    Hdr_10_set.insert("159601059");
    Hdr_10.add_attribute("SID", "SenderCompID_t_494808655"); // 1
    Hdr_10_set.insert("SenderCompID_t_494808655");
    Hdr_10.add_attribute("TID", "TargetCompID_t_568375756"); // 1
    Hdr_10_set.insert("TargetCompID_t_568375756");
    Hdr_10.add_attribute("OBID", "OnBehalfOfCompID_t_445101430"); // 1
    Hdr_10_set.insert("OnBehalfOfCompID_t_445101430");
    Hdr_10.add_attribute("D2ID", "DeliverToCompID_t_721191461"); // 1
    Hdr_10_set.insert("DeliverToCompID_t_721191461");
    Hdr_10.add_attribute("SSub", "SenderSubID_t_997941201"); // 1
    Hdr_10_set.insert("SenderSubID_t_997941201");
    Hdr_10.add_attribute("SLoc", "SenderLocationID_t_937164941"); // 1
    Hdr_10_set.insert("SenderLocationID_t_937164941");
    Hdr_10.add_attribute("TSub", "TargetSubID_t_725535739"); // 1
    Hdr_10_set.insert("TargetSubID_t_725535739");
    Hdr_10.add_attribute("TLoc", "TargetLocationID_t_938037345"); // 1
    Hdr_10_set.insert("TargetLocationID_t_938037345");
    Hdr_10.add_attribute("OBSub", "OnBehalfOfSubID_t_1549861399"); // 1
    Hdr_10_set.insert("OnBehalfOfSubID_t_1549861399");
    Hdr_10.add_attribute("OBLoc", "OnBehalfOfLocationID_t_841643152"); // 1
    Hdr_10_set.insert("OnBehalfOfLocationID_t_841643152");
    Hdr_10.add_attribute("D2Sub", "DeliverToSubID_t_1403782042"); // 1
    Hdr_10_set.insert("DeliverToSubID_t_1403782042");
    Hdr_10.add_attribute("D2Loc", "DeliverToLocationID_t_1345031421"); // 1
    Hdr_10_set.insert("DeliverToLocationID_t_1345031421");
    Hdr_10.add_attribute("PosDup", "Y"); // 1
    Hdr_10_set.insert("Y");
    Hdr_10.add_attribute("PosRsnd", "N"); // 1
    Hdr_10_set.insert("N");
    Hdr_10.add_attribute("Snt", "SendingTime_t_1735610321"); // 1
    Hdr_10_set.insert("SendingTime_t_1735610321");
    Hdr_10.add_attribute("OrigSnt", "OrigSendingTime_t_1407875042"); // 1
    Hdr_10_set.insert("OrigSendingTime_t_1407875042");
    Hdr_10.add_attribute("MsgEncd", "MessageEncoding_t_2029072305"); // 1
    Hdr_10_set.insert("MessageEncoding_t_2029072305");
    all_values.push_back(Hdr_10_set);
    all_compo_names.insert("Hdr_10_set");

    {
      xml_element Hop_10{"Hop"};
      multiset<string> Hop_10_set;
      Hop_10.add_attribute("ID", "HopCompID_t_118042735"); // 2
      Hop_10_set.insert("HopCompID_t_118042735");
      Hop_10.add_attribute("Ref", "1096846644"); // 2
      Hop_10_set.insert("1096846644");
      Hop_10.add_attribute("Snt", "HopSendingTime_t_1247902564"); // 2
      Hop_10_set.insert("HopSendingTime_t_1247902564");
      all_values.push_back(Hop_10_set);
      all_compo_names.insert("Hop_10_set");

      Hdr_10.add_element(Hop_10);
    }
    elt.add_element(Hdr_10);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_0{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_0_set;
    ApplSeqCtrl_0.add_attribute("ApplID", "ApplID_t_1212503682"); // 1
    ApplSeqCtrl_0_set.insert("ApplID_t_1212503682");
    ApplSeqCtrl_0.add_attribute("ApplSeqNum", "1724563376"); // 1
    ApplSeqCtrl_0_set.insert("1724563376");
    ApplSeqCtrl_0.add_attribute("ApplLastSeqNum", "499092712"); // 1
    ApplSeqCtrl_0_set.insert("499092712");
    ApplSeqCtrl_0.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_0_set.insert("true");
    all_values.push_back(ApplSeqCtrl_0_set);
    all_compo_names.insert("ApplSeqCtrl_0_set");

    elt.add_element(ApplSeqCtrl_0);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_64{"Pty"};
    multiset<string> Pty_64_set;
    Pty_64.add_attribute("ID", "PartyID_t_1203318938"); // 1
    Pty_64_set.insert("PartyID_t_1203318938");
    Pty_64.add_attribute("Src", "G"); // 1
    Pty_64_set.insert("G");
    Pty_64.add_attribute("R", "35"); // 1
    Pty_64_set.insert("35");
    all_values.push_back(Pty_64_set);
    all_compo_names.insert("Pty_64_set");

    {
      xml_element Sub_64{"Sub"};
      multiset<string> Sub_64_set;
      Sub_64.add_attribute("ID", "PartySubID_t_1181844066"); // 2
      Sub_64_set.insert("PartySubID_t_1181844066");
      Sub_64.add_attribute("Typ", "26"); // 2
      Sub_64_set.insert("26");
      all_values.push_back(Sub_64_set);
      all_compo_names.insert("Sub_64_set");

      Pty_64.add_element(Sub_64);
    }
    elt.add_element(Pty_64);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_7{"Instrmt"};
    multiset<string> Instrmt_7_set;
    Instrmt_7.add_attribute("Sym", "Symbol_t_86896942"); // 1
    Instrmt_7_set.insert("Symbol_t_86896942");
    Instrmt_7.add_attribute("Sfx", "WI"); // 1
    Instrmt_7_set.insert("WI");
    Instrmt_7.add_attribute("ID", "SecurityID_t_2092137871"); // 1
    Instrmt_7_set.insert("SecurityID_t_2092137871");
    Instrmt_7.add_attribute("Src", "5"); // 1
    Instrmt_7_set.insert("5");
    Instrmt_7.add_attribute("Prod", "6"); // 1
    Instrmt_7_set.insert("6");
    Instrmt_7.add_attribute("ProdCmplx", "ProductComplex_t_942595424"); // 1
    Instrmt_7_set.insert("ProductComplex_t_942595424");
    Instrmt_7.add_attribute("SecGrp", "SecurityGroup_t_1469163314"); // 1
    Instrmt_7_set.insert("SecurityGroup_t_1469163314");
    Instrmt_7.add_attribute("CFI", "CFICode_t_975896274"); // 1
    Instrmt_7_set.insert("CFICode_t_975896274");
    Instrmt_7.add_attribute("SecTyp", "OOC"); // 1
    Instrmt_7_set.insert("OOC");
    Instrmt_7.add_attribute("SubTyp", "SecuritySubType_t_871541065"); // 1
    Instrmt_7_set.insert("SecuritySubType_t_871541065");
    Instrmt_7.add_attribute("MMY", "1817539426"); // 1
    Instrmt_7_set.insert("1817539426");
    Instrmt_7.add_attribute("MatDt", "MaturityDate_t_1136931163"); // 1
    Instrmt_7_set.insert("MaturityDate_t_1136931163");
    Instrmt_7.add_attribute("MatTm", "69088838"); // 1
    Instrmt_7_set.insert("69088838");
    Instrmt_7.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1049408607"); // 1
    Instrmt_7_set.insert("SettleOnOpenFlag_t_1049408607");
    Instrmt_7.add_attribute("AsgnMeth", "209056760"); // 1
    Instrmt_7_set.insert("209056760");
    Instrmt_7.add_attribute("Status", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("CpnPmt", "CouponPaymentDate_t_309800001"); // 1
    Instrmt_7_set.insert("CouponPaymentDate_t_309800001");
    Instrmt_7.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_7_set.insert("MR");
    Instrmt_7.add_attribute("Snrty", "SD"); // 1
    Instrmt_7_set.insert("SD");
    Instrmt_7.add_attribute("NotlPctOut", "14066466.450000"); // 1
    Instrmt_7_set.insert("14066466.450000");
    Instrmt_7.add_attribute("OrigNotlPctOut", "13385479.820000"); // 1
    Instrmt_7_set.insert("13385479.820000");
    Instrmt_7.add_attribute("AttchPnt", "9877619.290000"); // 1
    Instrmt_7_set.insert("9877619.290000");
    Instrmt_7.add_attribute("DetchPnt", "9837263.730000"); // 1
    Instrmt_7_set.insert("9837263.730000");
    Instrmt_7.add_attribute("Issued", "IssueDate_t_1837640694"); // 1
    Instrmt_7_set.insert("IssueDate_t_1837640694");
    Instrmt_7.add_attribute("RepoCollSecTyp", "864746526"); // 1
    Instrmt_7_set.insert("864746526");
    Instrmt_7.add_attribute("RepoTrm", "1302927964"); // 1
    Instrmt_7_set.insert("1302927964");
    Instrmt_7.add_attribute("RepoRt", "8934759.840000"); // 1
    Instrmt_7_set.insert("8934759.840000");
    Instrmt_7.add_attribute("Fctr", "18064338.570000"); // 1
    Instrmt_7_set.insert("18064338.570000");
    Instrmt_7.add_attribute("CrdRtg", "CreditRating_t_1230223847"); // 1
    Instrmt_7_set.insert("CreditRating_t_1230223847");
    Instrmt_7.add_attribute("Rgstry", "InstrRegistry_t_2075320050"); // 1
    Instrmt_7_set.insert("InstrRegistry_t_2075320050");
    Instrmt_7.add_attribute("IssuCtry", "1182712324"); // 1
    Instrmt_7_set.insert("1182712324");
    Instrmt_7.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1317120790"); // 1
    Instrmt_7_set.insert("StateOrProvinceOfIssue_t_1317120790");
    Instrmt_7.add_attribute("Lcl", "LocaleOfIssue_t_1604489124"); // 1
    Instrmt_7_set.insert("LocaleOfIssue_t_1604489124");
    Instrmt_7.add_attribute("Redeem", "RedemptionDate_t_1127366547"); // 1
    Instrmt_7_set.insert("RedemptionDate_t_1127366547");
    Instrmt_7.add_attribute("StrkPx", "18491191.620000"); // 1
    Instrmt_7_set.insert("18491191.620000");
    Instrmt_7.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_7_set.insert("CAN");
    Instrmt_7.add_attribute("StrkMult", "11707988.280000"); // 1
    Instrmt_7_set.insert("11707988.280000");
    Instrmt_7.add_attribute("StrkValu", "6832622.850000"); // 1
    Instrmt_7_set.insert("6832622.850000");
    Instrmt_7.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("StrkPxBndryPrcsn", "3533180.630000"); // 1
    Instrmt_7_set.insert("3533180.630000");
    Instrmt_7.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("OptAt", "2111428732"); // 1
    Instrmt_7_set.insert("2111428732");
    Instrmt_7.add_attribute("Mult", "14027266.700000"); // 1
    Instrmt_7_set.insert("14027266.700000");
    Instrmt_7.add_attribute("MultTyp", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("MinPxIncr", "17125266.720000"); // 1
    Instrmt_7_set.insert("17125266.720000");
    Instrmt_7.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1092260785"); // 1
    Instrmt_7_set.insert("MinPriceIncrementAmount_t_1092260785");
    Instrmt_7.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_7_set.insert("MMBtu");
    Instrmt_7.add_attribute("UOMQty", "9716896.690000"); // 1
    Instrmt_7_set.insert("9716896.690000");
    Instrmt_7.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_7_set.insert("Alw");
    Instrmt_7.add_attribute("PxUOMQty", "3841807.730000"); // 1
    Instrmt_7_set.insert("3841807.730000");
    Instrmt_7.add_attribute("SettlMeth", "P"); // 1
    Instrmt_7_set.insert("P");
    Instrmt_7.add_attribute("ExerStyle", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_7_set.insert("3");
    Instrmt_7.add_attribute("OptPayAmt", "OptPayoutAmount_t_1110860359"); // 1
    Instrmt_7_set.insert("OptPayoutAmount_t_1110860359");
    Instrmt_7.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_7_set.insert("INX");
    Instrmt_7.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_7_set.insert("CDS");
    Instrmt_7.add_attribute("ListMeth", "0"); // 1
    Instrmt_7_set.insert("0");
    Instrmt_7.add_attribute("CapPx", "7947945.520000"); // 1
    Instrmt_7_set.insert("7947945.520000");
    Instrmt_7.add_attribute("FlrPx", "20905898.330000"); // 1
    Instrmt_7_set.insert("20905898.330000");
    Instrmt_7.add_attribute("PutCall", "0"); // 1
    Instrmt_7_set.insert("0");
    Instrmt_7.add_attribute("FlexInd", "true"); // 1
    Instrmt_7_set.insert("true");
    Instrmt_7.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_7_set.insert("true");
    Instrmt_7.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_7_set.insert("Wk");
    Instrmt_7.add_attribute("CpnRt", "21066496.870000"); // 1
    Instrmt_7_set.insert("21066496.870000");
    Instrmt_7.add_attribute("Exch", "SecurityExchange_t_992951056"); // 1
    Instrmt_7_set.insert("SecurityExchange_t_992951056");
    Instrmt_7.add_attribute("PosLmt", "235672043"); // 1
    Instrmt_7_set.insert("235672043");
    Instrmt_7.add_attribute("NTPosLmt", "642428324"); // 1
    Instrmt_7_set.insert("642428324");
    Instrmt_7.add_attribute("Issr", "Issuer_t_648578500"); // 1
    Instrmt_7_set.insert("Issuer_t_648578500");
    Instrmt_7.add_attribute("EncIssrLen", "130528289"); // 1
    Instrmt_7_set.insert("130528289");
    Instrmt_7.add_attribute("EncIssr", "EncodedIssuer_t_995746387"); // 1
    Instrmt_7_set.insert("EncodedIssuer_t_995746387");
    Instrmt_7.add_attribute("Desc", "SecurityDesc_t_1441137108"); // 1
    Instrmt_7_set.insert("SecurityDesc_t_1441137108");
    Instrmt_7.add_attribute("EncSecDescLen", "94473373"); // 1
    Instrmt_7_set.insert("94473373");
    Instrmt_7.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_250989409"); // 1
    Instrmt_7_set.insert("EncodedSecurityDesc_t_250989409");
    Instrmt_7.add_attribute("Pool", "Pool_t_295268828"); // 1
    Instrmt_7_set.insert("Pool_t_295268828");
    Instrmt_7.add_attribute("CSetMo", "1863117617"); // 1
    Instrmt_7_set.insert("1863117617");
    Instrmt_7.add_attribute("CPPgm", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("CPRegT", "CPRegType_t_1387529614"); // 1
    Instrmt_7_set.insert("CPRegType_t_1387529614");
    Instrmt_7.add_attribute("Dated", "DatedDate_t_1259536460"); // 1
    Instrmt_7_set.insert("DatedDate_t_1259536460");
    Instrmt_7.add_attribute("IntAcrl", "InterestAccrualDate_t_787722103"); // 1
    Instrmt_7_set.insert("InterestAccrualDate_t_787722103");
    all_values.push_back(Instrmt_7_set);
    all_compo_names.insert("Instrmt_7_set");

    {
      xml_element AID_7{"AID"};
      multiset<string> AID_7_set;
      AID_7.add_attribute("AltID", "SecurityAltID_t_1670854733"); // 2
      AID_7_set.insert("SecurityAltID_t_1670854733");
      AID_7.add_attribute("AltIDSrc", "G"); // 2
      AID_7_set.insert("G");
      all_values.push_back(AID_7_set);
      all_compo_names.insert("AID_7_set");

      Instrmt_7.add_element(AID_7);
    }
    {
      xml_element SecXML_7{"SecXML"};
      multiset<string> SecXML_7_set;
      SecXML_7.add_attribute("Schema", "SecurityXMLSchema_t_595654498"); // 2
      SecXML_7_set.insert("SecurityXMLSchema_t_595654498");
      all_values.push_back(SecXML_7_set);
      all_compo_names.insert("SecXML_7_set");

      Instrmt_7.add_element(SecXML_7);
    }
    {
      xml_element Evnt_7{"Evnt"};
      multiset<string> Evnt_7_set;
      Evnt_7.add_attribute("EventTyp", "19"); // 2
      Evnt_7_set.insert("19");
      Evnt_7.add_attribute("Dt", "EventDate_t_745160884"); // 2
      Evnt_7_set.insert("EventDate_t_745160884");
      Evnt_7.add_attribute("Tm", "EventTime_t_1706514857"); // 2
      Evnt_7_set.insert("EventTime_t_1706514857");
      Evnt_7.add_attribute("Px", "3638114.000000"); // 2
      Evnt_7_set.insert("3638114.000000");
      Evnt_7.add_attribute("Txt", "EventText_t_1653038393"); // 2
      Evnt_7_set.insert("EventText_t_1653038393");
      all_values.push_back(Evnt_7_set);
      all_compo_names.insert("Evnt_7_set");

      Instrmt_7.add_element(Evnt_7);
    }
    {
      xml_element Pty_65{"Pty"};
      multiset<string> Pty_65_set;
      Pty_65.add_attribute("ID", "InstrumentPartyID_t_1900115415"); // 2
      Pty_65_set.insert("InstrumentPartyID_t_1900115415");
      Pty_65.add_attribute("Src", "7"); // 2
      Pty_65_set.insert("7");
      Pty_65.add_attribute("R", "22"); // 2
      Pty_65_set.insert("22");
      all_values.push_back(Pty_65_set);
      all_compo_names.insert("Pty_65_set");

      {
        xml_element Sub_65{"Sub"};
        multiset<string> Sub_65_set;
        Sub_65.add_attribute("ID", "InstrumentPartySubID_t_1263353116"); // 3
        Sub_65_set.insert("InstrumentPartySubID_t_1263353116");
        Sub_65.add_attribute("Typ", "14"); // 3
        Sub_65_set.insert("14");
        all_values.push_back(Sub_65_set);
        all_compo_names.insert("Sub_65_set");

        Pty_65.add_element(Sub_65);
      }
      Instrmt_7.add_element(Pty_65);
    }
    {
      xml_element CmplxEvnt_7{"CmplxEvnt"};
      multiset<string> CmplxEvnt_7_set;
      CmplxEvnt_7.add_attribute("Typ", "1"); // 2
      CmplxEvnt_7_set.insert("1");
      CmplxEvnt_7.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_328226331"); // 2
      CmplxEvnt_7_set.insert("ComplexOptPayoutAmount_t_328226331");
      CmplxEvnt_7.add_attribute("Px", "13695720.190000"); // 2
      CmplxEvnt_7_set.insert("13695720.190000");
      CmplxEvnt_7.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_7_set.insert("4");
      CmplxEvnt_7.add_attribute("PxBndryPrcsn", "5638983.740000"); // 2
      CmplxEvnt_7_set.insert("5638983.740000");
      CmplxEvnt_7.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_7_set.insert("1");
      CmplxEvnt_7.add_attribute("Cond", "2"); // 2
      CmplxEvnt_7_set.insert("2");
      all_values.push_back(CmplxEvnt_7_set);
      all_compo_names.insert("CmplxEvnt_7_set");

      {
        xml_element EvntDts_7{"EvntDts"};
        multiset<string> EvntDts_7_set;
        EvntDts_7.add_attribute("StartDt", "ComplexEventStartDate_t_694426663"); // 3
        EvntDts_7_set.insert("ComplexEventStartDate_t_694426663");
        EvntDts_7.add_attribute("EndDt", "ComplexEventEndDate_t_860263082"); // 3
        EvntDts_7_set.insert("ComplexEventEndDate_t_860263082");
        all_values.push_back(EvntDts_7_set);
        all_compo_names.insert("EvntDts_7_set");

        {
          xml_element EvntTms_7{"EvntTms"};
          multiset<string> EvntTms_7_set;
          EvntTms_7.add_attribute("StartTm", "1454316679"); // 4
          EvntTms_7_set.insert("1454316679");
          EvntTms_7.add_attribute("EndTm", "788900036"); // 4
          EvntTms_7_set.insert("788900036");
          all_values.push_back(EvntTms_7_set);
          all_compo_names.insert("EvntTms_7_set");

          EvntDts_7.add_element(EvntTms_7);
        }
        CmplxEvnt_7.add_element(EvntDts_7);
      }
      Instrmt_7.add_element(CmplxEvnt_7);
    }
    elt.add_element(Instrmt_7);
  } // end Instrmt
  { // Leg
    xml_element Leg_9{"Leg"};
    multiset<string> Leg_9_set;
    Leg_9.add_attribute("Sym", "LegSymbol_t_1749585508"); // 1
    Leg_9_set.insert("LegSymbol_t_1749585508");
    Leg_9.add_attribute("Sfx", "WI"); // 1
    Leg_9_set.insert("WI");
    Leg_9.add_attribute("ID", "LegSecurityID_t_927284925"); // 1
    Leg_9_set.insert("LegSecurityID_t_927284925");
    Leg_9.add_attribute("Src", "J"); // 1
    Leg_9_set.insert("J");
    Leg_9.add_attribute("Prod", "11"); // 1
    Leg_9_set.insert("11");
    Leg_9.add_attribute("CFI", "LegCFICode_t_1715007028"); // 1
    Leg_9_set.insert("LegCFICode_t_1715007028");
    Leg_9.add_attribute("SecTyp", "LQN"); // 1
    Leg_9_set.insert("LQN");
    Leg_9.add_attribute("SecSubTyp", "LegSecuritySubType_t_1260304051"); // 1
    Leg_9_set.insert("LegSecuritySubType_t_1260304051");
    Leg_9.add_attribute("MMY", "163177878"); // 1
    Leg_9_set.insert("163177878");
    Leg_9.add_attribute("Mat", "LegMaturityDate_t_9855810"); // 1
    Leg_9_set.insert("LegMaturityDate_t_9855810");
    Leg_9.add_attribute("MatTm", "2005464936"); // 1
    Leg_9_set.insert("2005464936");
    Leg_9.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1869692735"); // 1
    Leg_9_set.insert("LegCouponPaymentDate_t_1869692735");
    Leg_9.add_attribute("Issued", "LegIssueDate_t_373667211"); // 1
    Leg_9_set.insert("LegIssueDate_t_373667211");
    Leg_9.add_attribute("RepoCollSecTyp", "1511019681"); // 1
    Leg_9_set.insert("1511019681");
    Leg_9.add_attribute("RepoTrm", "1622324503"); // 1
    Leg_9_set.insert("1622324503");
    Leg_9.add_attribute("RepoRt", "15322731.630000"); // 1
    Leg_9_set.insert("15322731.630000");
    Leg_9.add_attribute("Fctr", "9596806.110000"); // 1
    Leg_9_set.insert("9596806.110000");
    Leg_9.add_attribute("CrdRtg", "LegCreditRating_t_738193971"); // 1
    Leg_9_set.insert("LegCreditRating_t_738193971");
    Leg_9.add_attribute("Rgstry", "LegInstrRegistry_t_795195496"); // 1
    Leg_9_set.insert("LegInstrRegistry_t_795195496");
    Leg_9.add_attribute("Ctry", "1478814273"); // 1
    Leg_9_set.insert("1478814273");
    Leg_9.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1066420302"); // 1
    Leg_9_set.insert("LegStateOrProvinceOfIssue_t_1066420302");
    Leg_9.add_attribute("Lcl", "LegLocaleOfIssue_t_17283867"); // 1
    Leg_9_set.insert("LegLocaleOfIssue_t_17283867");
    Leg_9.add_attribute("Redeem", "LegRedemptionDate_t_843415344"); // 1
    Leg_9_set.insert("LegRedemptionDate_t_843415344");
    Leg_9.add_attribute("Strk", "16303186.760000"); // 1
    Leg_9_set.insert("16303186.760000");
    Leg_9.add_attribute("StrkCcy", "EUR"); // 1
    Leg_9_set.insert("EUR");
    Leg_9.add_attribute("OptA", "177261692"); // 1
    Leg_9_set.insert("177261692");
    Leg_9.add_attribute("Cmult", "7420636.450000"); // 1
    Leg_9_set.insert("7420636.450000");
    Leg_9.add_attribute("MultTyp", "0"); // 1
    Leg_9_set.insert("0");
    Leg_9.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_9_set.insert("3");
    Leg_9.add_attribute("UOM", "Bcf"); // 1
    Leg_9_set.insert("Bcf");
    Leg_9.add_attribute("UOMQty", "19130134.540000"); // 1
    Leg_9_set.insert("19130134.540000");
    Leg_9.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_9_set.insert("MMBtu");
    Leg_9.add_attribute("PxUOMQty", "6331174.150000"); // 1
    Leg_9_set.insert("6331174.150000");
    Leg_9.add_attribute("TmUnit", "Yr"); // 1
    Leg_9_set.insert("Yr");
    Leg_9.add_attribute("ExerStyle", "1"); // 1
    Leg_9_set.insert("1");
    Leg_9.add_attribute("CpnRt", "2006407.950000"); // 1
    Leg_9_set.insert("2006407.950000");
    Leg_9.add_attribute("Exch", "LegSecurityExchange_t_1268163840"); // 1
    Leg_9_set.insert("LegSecurityExchange_t_1268163840");
    Leg_9.add_attribute("Issr", "LegIssuer_t_200102955"); // 1
    Leg_9_set.insert("LegIssuer_t_200102955");
    Leg_9.add_attribute("EncLegIssrLen", "363818674"); // 1
    Leg_9_set.insert("363818674");
    Leg_9.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1278019650"); // 1
    Leg_9_set.insert("EncodedLegIssuer_t_1278019650");
    Leg_9.add_attribute("Desc", "LegSecurityDesc_t_58084243"); // 1
    Leg_9_set.insert("LegSecurityDesc_t_58084243");
    Leg_9.add_attribute("EncLegSecDescLen", "86027761"); // 1
    Leg_9_set.insert("86027761");
    Leg_9.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1651686861"); // 1
    Leg_9_set.insert("EncodedLegSecurityDesc_t_1651686861");
    Leg_9.add_attribute("RatioQty", "15691039.240000"); // 1
    Leg_9_set.insert("15691039.240000");
    Leg_9.add_attribute("Side", "9"); // 1
    Leg_9_set.insert("9");
    Leg_9.add_attribute("Ccy", "CAN"); // 1
    Leg_9_set.insert("CAN");
    Leg_9.add_attribute("Pool", "LegPool_t_299062587"); // 1
    Leg_9_set.insert("LegPool_t_299062587");
    Leg_9.add_attribute("Dated", "LegDatedDate_t_1831671873"); // 1
    Leg_9_set.insert("LegDatedDate_t_1831671873");
    Leg_9.add_attribute("CSetMo", "1860115161"); // 1
    Leg_9_set.insert("1860115161");
    Leg_9.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1365482889"); // 1
    Leg_9_set.insert("LegInterestAccrualDate_t_1365482889");
    Leg_9.add_attribute("PutCall", "1848955740"); // 1
    Leg_9_set.insert("1848955740");
    Leg_9.add_attribute("LegOptionRatio", "5560468.570000"); // 1
    Leg_9_set.insert("5560468.570000");
    Leg_9.add_attribute("Px", "8483179.180000"); // 1
    Leg_9_set.insert("8483179.180000");
    all_values.push_back(Leg_9_set);
    all_compo_names.insert("Leg_9_set");

    {
      xml_element LegAID_9{"LegAID"};
      multiset<string> LegAID_9_set;
      LegAID_9.add_attribute("SecAltID", "LegSecurityAltID_t_1730756303"); // 2
      LegAID_9_set.insert("LegSecurityAltID_t_1730756303");
      LegAID_9.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_9_set.insert("F");
      all_values.push_back(LegAID_9_set);
      all_compo_names.insert("LegAID_9_set");

      Leg_9.add_element(LegAID_9);
    }
    elt.add_element(Leg_9);
  } // end Leg
  { // Leg
    xml_element Leg_10{"Leg"};
    multiset<string> Leg_10_set;
    Leg_10.add_attribute("Sym", "LegSymbol_t_1025579610"); // 1
    Leg_10_set.insert("LegSymbol_t_1025579610");
    Leg_10.add_attribute("Sfx", "WI"); // 1
    Leg_10_set.insert("WI");
    Leg_10.add_attribute("ID", "LegSecurityID_t_1576069718"); // 1
    Leg_10_set.insert("LegSecurityID_t_1576069718");
    Leg_10.add_attribute("Src", "5"); // 1
    Leg_10_set.insert("5");
    Leg_10.add_attribute("Prod", "12"); // 1
    Leg_10_set.insert("12");
    Leg_10.add_attribute("CFI", "LegCFICode_t_1341599525"); // 1
    Leg_10_set.insert("LegCFICode_t_1341599525");
    Leg_10.add_attribute("SecTyp", "CD"); // 1
    Leg_10_set.insert("CD");
    Leg_10.add_attribute("SecSubTyp", "LegSecuritySubType_t_664286205"); // 1
    Leg_10_set.insert("LegSecuritySubType_t_664286205");
    Leg_10.add_attribute("MMY", "2096760805"); // 1
    Leg_10_set.insert("2096760805");
    Leg_10.add_attribute("Mat", "LegMaturityDate_t_254752328"); // 1
    Leg_10_set.insert("LegMaturityDate_t_254752328");
    Leg_10.add_attribute("MatTm", "864927001"); // 1
    Leg_10_set.insert("864927001");
    Leg_10.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1217440997"); // 1
    Leg_10_set.insert("LegCouponPaymentDate_t_1217440997");
    Leg_10.add_attribute("Issued", "LegIssueDate_t_454855284"); // 1
    Leg_10_set.insert("LegIssueDate_t_454855284");
    Leg_10.add_attribute("RepoCollSecTyp", "1228745675"); // 1
    Leg_10_set.insert("1228745675");
    Leg_10.add_attribute("RepoTrm", "347977000"); // 1
    Leg_10_set.insert("347977000");
    Leg_10.add_attribute("RepoRt", "5129395.270000"); // 1
    Leg_10_set.insert("5129395.270000");
    Leg_10.add_attribute("Fctr", "13147734.360000"); // 1
    Leg_10_set.insert("13147734.360000");
    Leg_10.add_attribute("CrdRtg", "LegCreditRating_t_1999663861"); // 1
    Leg_10_set.insert("LegCreditRating_t_1999663861");
    Leg_10.add_attribute("Rgstry", "LegInstrRegistry_t_2082043452"); // 1
    Leg_10_set.insert("LegInstrRegistry_t_2082043452");
    Leg_10.add_attribute("Ctry", "875642053"); // 1
    Leg_10_set.insert("875642053");
    Leg_10.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_888656590"); // 1
    Leg_10_set.insert("LegStateOrProvinceOfIssue_t_888656590");
    Leg_10.add_attribute("Lcl", "LegLocaleOfIssue_t_315860691"); // 1
    Leg_10_set.insert("LegLocaleOfIssue_t_315860691");
    Leg_10.add_attribute("Redeem", "LegRedemptionDate_t_1174704640"); // 1
    Leg_10_set.insert("LegRedemptionDate_t_1174704640");
    Leg_10.add_attribute("Strk", "5728448.150000"); // 1
    Leg_10_set.insert("5728448.150000");
    Leg_10.add_attribute("StrkCcy", "USD"); // 1
    Leg_10_set.insert("USD");
    Leg_10.add_attribute("OptA", "274316908"); // 1
    Leg_10_set.insert("274316908");
    Leg_10.add_attribute("Cmult", "5845390.610000"); // 1
    Leg_10_set.insert("5845390.610000");
    Leg_10.add_attribute("MultTyp", "1"); // 1
    Leg_10_set.insert("1");
    Leg_10.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_10_set.insert("1");
    Leg_10.add_attribute("UOM", "Bu"); // 1
    Leg_10_set.insert("Bu");
    Leg_10.add_attribute("UOMQty", "1191177.620000"); // 1
    Leg_10_set.insert("1191177.620000");
    Leg_10.add_attribute("PxUOM", "t"); // 1
    Leg_10_set.insert("t");
    Leg_10.add_attribute("PxUOMQty", "14257669.040000"); // 1
    Leg_10_set.insert("14257669.040000");
    Leg_10.add_attribute("TmUnit", "S"); // 1
    Leg_10_set.insert("S");
    Leg_10.add_attribute("ExerStyle", "0"); // 1
    Leg_10_set.insert("0");
    Leg_10.add_attribute("CpnRt", "6198827.810000"); // 1
    Leg_10_set.insert("6198827.810000");
    Leg_10.add_attribute("Exch", "LegSecurityExchange_t_1278328877"); // 1
    Leg_10_set.insert("LegSecurityExchange_t_1278328877");
    Leg_10.add_attribute("Issr", "LegIssuer_t_878380860"); // 1
    Leg_10_set.insert("LegIssuer_t_878380860");
    Leg_10.add_attribute("EncLegIssrLen", "569159938"); // 1
    Leg_10_set.insert("569159938");
    Leg_10.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1533081205"); // 1
    Leg_10_set.insert("EncodedLegIssuer_t_1533081205");
    Leg_10.add_attribute("Desc", "LegSecurityDesc_t_1743307861"); // 1
    Leg_10_set.insert("LegSecurityDesc_t_1743307861");
    Leg_10.add_attribute("EncLegSecDescLen", "1786600936"); // 1
    Leg_10_set.insert("1786600936");
    Leg_10.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1987936489"); // 1
    Leg_10_set.insert("EncodedLegSecurityDesc_t_1987936489");
    Leg_10.add_attribute("RatioQty", "8245698.880000"); // 1
    Leg_10_set.insert("8245698.880000");
    Leg_10.add_attribute("Side", "1"); // 1
    Leg_10_set.insert("1");
    Leg_10.add_attribute("Ccy", "CAN"); // 1
    Leg_10_set.insert("CAN");
    Leg_10.add_attribute("Pool", "LegPool_t_1986758149"); // 1
    Leg_10_set.insert("LegPool_t_1986758149");
    Leg_10.add_attribute("Dated", "LegDatedDate_t_287952173"); // 1
    Leg_10_set.insert("LegDatedDate_t_287952173");
    Leg_10.add_attribute("CSetMo", "867501730"); // 1
    Leg_10_set.insert("867501730");
    Leg_10.add_attribute("IntAcrl", "LegInterestAccrualDate_t_727931092"); // 1
    Leg_10_set.insert("LegInterestAccrualDate_t_727931092");
    Leg_10.add_attribute("PutCall", "603812864"); // 1
    Leg_10_set.insert("603812864");
    Leg_10.add_attribute("LegOptionRatio", "20422063.700000"); // 1
    Leg_10_set.insert("20422063.700000");
    Leg_10.add_attribute("Px", "13007759.070000"); // 1
    Leg_10_set.insert("13007759.070000");
    all_values.push_back(Leg_10_set);
    all_compo_names.insert("Leg_10_set");

    {
      xml_element LegAID_10{"LegAID"};
      multiset<string> LegAID_10_set;
      LegAID_10.add_attribute("SecAltID", "LegSecurityAltID_t_632305069"); // 2
      LegAID_10_set.insert("LegSecurityAltID_t_632305069");
      LegAID_10.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_10_set.insert("F");
      all_values.push_back(LegAID_10_set);
      all_compo_names.insert("LegAID_10_set");

      Leg_10.add_element(LegAID_10);
    }
    elt.add_element(Leg_10);
  } // end Leg
  { // Undly
    xml_element Undly_6{"Undly"};
    multiset<string> Undly_6_set;
    Undly_6.add_attribute("Sym", "UnderlyingSymbol_t_1216844130"); // 1
    Undly_6_set.insert("UnderlyingSymbol_t_1216844130");
    Undly_6.add_attribute("Sfx", "CD"); // 1
    Undly_6_set.insert("CD");
    Undly_6.add_attribute("ID", "UnderlyingSecurityID_t_1432682379"); // 1
    Undly_6_set.insert("UnderlyingSecurityID_t_1432682379");
    Undly_6.add_attribute("Src", "H"); // 1
    Undly_6_set.insert("H");
    Undly_6.add_attribute("Prod", "9"); // 1
    Undly_6_set.insert("9");
    Undly_6.add_attribute("CFI", "UnderlyingCFICode_t_1615608243"); // 1
    Undly_6_set.insert("UnderlyingCFICode_t_1615608243");
    Undly_6.add_attribute("SecTyp", "CORP"); // 1
    Undly_6_set.insert("CORP");
    Undly_6.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1610941619"); // 1
    Undly_6_set.insert("UnderlyingSecuritySubType_t_1610941619");
    Undly_6.add_attribute("MMY", "1829702898"); // 1
    Undly_6_set.insert("1829702898");
    Undly_6.add_attribute("Mat", "UnderlyingMaturityDate_t_964707353"); // 1
    Undly_6_set.insert("UnderlyingMaturityDate_t_964707353");
    Undly_6.add_attribute("MatTm", "741786848"); // 1
    Undly_6_set.insert("741786848");
    Undly_6.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_560600111"); // 1
    Undly_6_set.insert("UnderlyingCouponPaymentDate_t_560600111");
    Undly_6.add_attribute("RestrctTyp", "XR"); // 1
    Undly_6_set.insert("XR");
    Undly_6.add_attribute("Snrty", "SR"); // 1
    Undly_6_set.insert("SR");
    Undly_6.add_attribute("NotlPctOut", "1564243.240000"); // 1
    Undly_6_set.insert("1564243.240000");
    Undly_6.add_attribute("OrigNotlPctOut", "11729845.790000"); // 1
    Undly_6_set.insert("11729845.790000");
    Undly_6.add_attribute("AttchPnt", "21153208.950000"); // 1
    Undly_6_set.insert("21153208.950000");
    Undly_6.add_attribute("DetchPnt", "9809942.130000"); // 1
    Undly_6_set.insert("9809942.130000");
    Undly_6.add_attribute("Issued", "UnderlyingIssueDate_t_1160078867"); // 1
    Undly_6_set.insert("UnderlyingIssueDate_t_1160078867");
    Undly_6.add_attribute("RepoCollSecTyp", "321229616"); // 1
    Undly_6_set.insert("321229616");
    Undly_6.add_attribute("RepoTrm", "972853890"); // 1
    Undly_6_set.insert("972853890");
    Undly_6.add_attribute("RepoRt", "9993533.690000"); // 1
    Undly_6_set.insert("9993533.690000");
    Undly_6.add_attribute("Fctr", "6091817.890000"); // 1
    Undly_6_set.insert("6091817.890000");
    Undly_6.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1840355620"); // 1
    Undly_6_set.insert("UnderlyingCreditRating_t_1840355620");
    Undly_6.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1727284461"); // 1
    Undly_6_set.insert("UnderlyingInstrRegistry_t_1727284461");
    Undly_6.add_attribute("Ctry", "1212994653"); // 1
    Undly_6_set.insert("1212994653");
    Undly_6.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1735078342"); // 1
    Undly_6_set.insert("UnderlyingStateOrProvinceOfIssue_t_1735078342");
    Undly_6.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_880576720"); // 1
    Undly_6_set.insert("UnderlyingLocaleOfIssue_t_880576720");
    Undly_6.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1845299722"); // 1
    Undly_6_set.insert("UnderlyingRedemptionDate_t_1845299722");
    Undly_6.add_attribute("StrkPx", "20225049.470000"); // 1
    Undly_6_set.insert("20225049.470000");
    Undly_6.add_attribute("StrkCcy", "CHF"); // 1
    Undly_6_set.insert("CHF");
    Undly_6.add_attribute("OptA", "1403469703"); // 1
    Undly_6_set.insert("1403469703");
    Undly_6.add_attribute("Mult", "17408682.670000"); // 1
    Undly_6_set.insert("17408682.670000");
    Undly_6.add_attribute("MultTyp", "0"); // 1
    Undly_6_set.insert("0");
    Undly_6.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("UOM", "Alw"); // 1
    Undly_6_set.insert("Alw");
    Undly_6.add_attribute("UOMQty", "1785424.450000"); // 1
    Undly_6_set.insert("1785424.450000");
    Undly_6.add_attribute("PxUOM", "t"); // 1
    Undly_6_set.insert("t");
    Undly_6.add_attribute("PxUOMQty", "8912121.130000"); // 1
    Undly_6_set.insert("8912121.130000");
    Undly_6.add_attribute("TmUnit", "Mo"); // 1
    Undly_6_set.insert("Mo");
    Undly_6.add_attribute("ExerStyle", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("CpnRt", "14518122.240000"); // 1
    Undly_6_set.insert("14518122.240000");
    Undly_6.add_attribute("Exch", "UnderlyingSecurityExchange_t_529633441"); // 1
    Undly_6_set.insert("UnderlyingSecurityExchange_t_529633441");
    Undly_6.add_attribute("Issr", "UnderlyingIssuer_t_1236181446"); // 1
    Undly_6_set.insert("UnderlyingIssuer_t_1236181446");
    Undly_6.add_attribute("EncUndIssrLen", "1608236548"); // 1
    Undly_6_set.insert("1608236548");
    Undly_6.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1702618021"); // 1
    Undly_6_set.insert("EncodedUnderlyingIssuer_t_1702618021");
    Undly_6.add_attribute("Desc", "UnderlyingSecurityDesc_t_1204018693"); // 1
    Undly_6_set.insert("UnderlyingSecurityDesc_t_1204018693");
    Undly_6.add_attribute("EncUndSecDescLen", "441747113"); // 1
    Undly_6_set.insert("441747113");
    Undly_6.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_715213240"); // 1
    Undly_6_set.insert("EncodedUnderlyingSecurityDesc_t_715213240");
    Undly_6.add_attribute("CPPgm", "UnderlyingCPProgram_t_1525248309"); // 1
    Undly_6_set.insert("UnderlyingCPProgram_t_1525248309");
    Undly_6.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1414601003"); // 1
    Undly_6_set.insert("UnderlyingCPRegType_t_1414601003");
    Undly_6.add_attribute("AllocPct", "17145666.090000"); // 1
    Undly_6_set.insert("17145666.090000");
    Undly_6.add_attribute("Ccy", "EUR"); // 1
    Undly_6_set.insert("EUR");
    Undly_6.add_attribute("Qty", "12943674.220000"); // 1
    Undly_6_set.insert("12943674.220000");
    Undly_6.add_attribute("SettlTyp", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("CashAmt", "UnderlyingCashAmount_t_695067670"); // 1
    Undly_6_set.insert("UnderlyingCashAmount_t_695067670");
    Undly_6.add_attribute("CashTyp", "DIFF"); // 1
    Undly_6_set.insert("DIFF");
    Undly_6.add_attribute("Px", "8977571.780000"); // 1
    Undly_6_set.insert("8977571.780000");
    Undly_6.add_attribute("DirtPx", "5700889.690000"); // 1
    Undly_6_set.insert("5700889.690000");
    Undly_6.add_attribute("EndPx", "3356463.830000"); // 1
    Undly_6_set.insert("3356463.830000");
    Undly_6.add_attribute("StartVal", "UnderlyingStartValue_t_1812417383"); // 1
    Undly_6_set.insert("UnderlyingStartValue_t_1812417383");
    Undly_6.add_attribute("CurVal", "UnderlyingCurrentValue_t_1973558672"); // 1
    Undly_6_set.insert("UnderlyingCurrentValue_t_1973558672");
    Undly_6.add_attribute("EndVal", "UnderlyingEndValue_t_2076514650"); // 1
    Undly_6_set.insert("UnderlyingEndValue_t_2076514650");
    Undly_6.add_attribute("AdjQty", "16461352.560000"); // 1
    Undly_6_set.insert("16461352.560000");
    Undly_6.add_attribute("FxRate", "7296272.460000"); // 1
    Undly_6_set.insert("7296272.460000");
    Undly_6.add_attribute("FxRateCalc", "M"); // 1
    Undly_6_set.insert("M");
    Undly_6.add_attribute("CapValu", "UnderlyingCapValue_t_1824677701"); // 1
    Undly_6_set.insert("UnderlyingCapValue_t_1824677701");
    Undly_6.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1096637439"); // 1
    Undly_6_set.insert("UnderlyingSettlMethod_t_1096637439");
    Undly_6.add_attribute("PutCall", "2029235977"); // 1
    Undly_6_set.insert("2029235977");
    all_values.push_back(Undly_6_set);
    all_compo_names.insert("Undly_6_set");

    {
      xml_element UndAID_6{"UndAID"};
      multiset<string> UndAID_6_set;
      UndAID_6.add_attribute("AltID", "UnderlyingSecurityAltID_t_820443851"); // 2
      UndAID_6_set.insert("UnderlyingSecurityAltID_t_820443851");
      UndAID_6.add_attribute("AltIDSrc", "H"); // 2
      UndAID_6_set.insert("H");
      all_values.push_back(UndAID_6_set);
      all_compo_names.insert("UndAID_6_set");

      Undly_6.add_element(UndAID_6);
    }
    {
      xml_element Stip_10{"Stip"};
      multiset<string> Stip_10_set;
      Stip_10.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_10_set.insert("MAXORDQTY");
      Stip_10.add_attribute("Val", "UnderlyingStipValue_t_1350077293"); // 2
      Stip_10_set.insert("UnderlyingStipValue_t_1350077293");
      all_values.push_back(Stip_10_set);
      all_compo_names.insert("Stip_10_set");

      Undly_6.add_element(Stip_10);
    }
    {
      xml_element Pty_66{"Pty"};
      multiset<string> Pty_66_set;
      Pty_66.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1294132279"); // 2
      Pty_66_set.insert("UnderlyingInstrumentPartyID_t_1294132279");
      Pty_66.add_attribute("Src", "9"); // 2
      Pty_66_set.insert("9");
      Pty_66.add_attribute("R", "38"); // 2
      Pty_66_set.insert("38");
      all_values.push_back(Pty_66_set);
      all_compo_names.insert("Pty_66_set");

      {
        xml_element Sub_66{"Sub"};
        multiset<string> Sub_66_set;
        Sub_66.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_350667324"); // 3
        Sub_66_set.insert("UnderlyingInstrumentPartySubID_t_350667324");
        Sub_66.add_attribute("Typ", "10"); // 3
        Sub_66_set.insert("10");
        all_values.push_back(Sub_66_set);
        all_compo_names.insert("Sub_66_set");

        Pty_66.add_element(Sub_66);
      }
      Undly_6.add_element(Pty_66);
    }
    elt.add_element(Undly_6);
  } // end Undly
  { // Undly
    xml_element Undly_7{"Undly"};
    multiset<string> Undly_7_set;
    Undly_7.add_attribute("Sym", "UnderlyingSymbol_t_1620424906"); // 1
    Undly_7_set.insert("UnderlyingSymbol_t_1620424906");
    Undly_7.add_attribute("Sfx", "CD"); // 1
    Undly_7_set.insert("CD");
    Undly_7.add_attribute("ID", "UnderlyingSecurityID_t_503181923"); // 1
    Undly_7_set.insert("UnderlyingSecurityID_t_503181923");
    Undly_7.add_attribute("Src", "9"); // 1
    Undly_7_set.insert("9");
    Undly_7.add_attribute("Prod", "2"); // 1
    Undly_7_set.insert("2");
    Undly_7.add_attribute("CFI", "UnderlyingCFICode_t_1610654898"); // 1
    Undly_7_set.insert("UnderlyingCFICode_t_1610654898");
    Undly_7.add_attribute("SecTyp", "RAN"); // 1
    Undly_7_set.insert("RAN");
    Undly_7.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_915319540"); // 1
    Undly_7_set.insert("UnderlyingSecuritySubType_t_915319540");
    Undly_7.add_attribute("MMY", "158238920"); // 1
    Undly_7_set.insert("158238920");
    Undly_7.add_attribute("Mat", "UnderlyingMaturityDate_t_361852137"); // 1
    Undly_7_set.insert("UnderlyingMaturityDate_t_361852137");
    Undly_7.add_attribute("MatTm", "1813076719"); // 1
    Undly_7_set.insert("1813076719");
    Undly_7.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_728327889"); // 1
    Undly_7_set.insert("UnderlyingCouponPaymentDate_t_728327889");
    Undly_7.add_attribute("RestrctTyp", "FR"); // 1
    Undly_7_set.insert("FR");
    Undly_7.add_attribute("Snrty", "SR"); // 1
    Undly_7_set.insert("SR");
    Undly_7.add_attribute("NotlPctOut", "5544029.140000"); // 1
    Undly_7_set.insert("5544029.140000");
    Undly_7.add_attribute("OrigNotlPctOut", "6265295.220000"); // 1
    Undly_7_set.insert("6265295.220000");
    Undly_7.add_attribute("AttchPnt", "9766620.630000"); // 1
    Undly_7_set.insert("9766620.630000");
    Undly_7.add_attribute("DetchPnt", "12840301.600000"); // 1
    Undly_7_set.insert("12840301.600000");
    Undly_7.add_attribute("Issued", "UnderlyingIssueDate_t_1764553387"); // 1
    Undly_7_set.insert("UnderlyingIssueDate_t_1764553387");
    Undly_7.add_attribute("RepoCollSecTyp", "653856116"); // 1
    Undly_7_set.insert("653856116");
    Undly_7.add_attribute("RepoTrm", "233183952"); // 1
    Undly_7_set.insert("233183952");
    Undly_7.add_attribute("RepoRt", "16463057.160000"); // 1
    Undly_7_set.insert("16463057.160000");
    Undly_7.add_attribute("Fctr", "14742999.680000"); // 1
    Undly_7_set.insert("14742999.680000");
    Undly_7.add_attribute("CrdRtg", "UnderlyingCreditRating_t_291134784"); // 1
    Undly_7_set.insert("UnderlyingCreditRating_t_291134784");
    Undly_7.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_832386622"); // 1
    Undly_7_set.insert("UnderlyingInstrRegistry_t_832386622");
    Undly_7.add_attribute("Ctry", "676893613"); // 1
    Undly_7_set.insert("676893613");
    Undly_7.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1585267063"); // 1
    Undly_7_set.insert("UnderlyingStateOrProvinceOfIssue_t_1585267063");
    Undly_7.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1626704076"); // 1
    Undly_7_set.insert("UnderlyingLocaleOfIssue_t_1626704076");
    Undly_7.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1582105279"); // 1
    Undly_7_set.insert("UnderlyingRedemptionDate_t_1582105279");
    Undly_7.add_attribute("StrkPx", "19359343.880000"); // 1
    Undly_7_set.insert("19359343.880000");
    Undly_7.add_attribute("StrkCcy", "CHF"); // 1
    Undly_7_set.insert("CHF");
    Undly_7.add_attribute("OptA", "1664366374"); // 1
    Undly_7_set.insert("1664366374");
    Undly_7.add_attribute("Mult", "12184669.180000"); // 1
    Undly_7_set.insert("12184669.180000");
    Undly_7.add_attribute("MultTyp", "1"); // 1
    Undly_7_set.insert("1");
    Undly_7.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_7_set.insert("0");
    Undly_7.add_attribute("UOM", "t"); // 1
    Undly_7_set.insert("t");
    Undly_7.add_attribute("UOMQty", "4294624.000000"); // 1
    Undly_7_set.insert("4294624.000000");
    Undly_7.add_attribute("PxUOM", "Bcf"); // 1
    Undly_7_set.insert("Bcf");
    Undly_7.add_attribute("PxUOMQty", "8398770.890000"); // 1
    Undly_7_set.insert("8398770.890000");
    Undly_7.add_attribute("TmUnit", "Yr"); // 1
    Undly_7_set.insert("Yr");
    Undly_7.add_attribute("ExerStyle", "0"); // 1
    Undly_7_set.insert("0");
    Undly_7.add_attribute("CpnRt", "15682049.790000"); // 1
    Undly_7_set.insert("15682049.790000");
    Undly_7.add_attribute("Exch", "UnderlyingSecurityExchange_t_1488813058"); // 1
    Undly_7_set.insert("UnderlyingSecurityExchange_t_1488813058");
    Undly_7.add_attribute("Issr", "UnderlyingIssuer_t_1291184228"); // 1
    Undly_7_set.insert("UnderlyingIssuer_t_1291184228");
    Undly_7.add_attribute("EncUndIssrLen", "2122607893"); // 1
    Undly_7_set.insert("2122607893");
    Undly_7.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2115342580"); // 1
    Undly_7_set.insert("EncodedUnderlyingIssuer_t_2115342580");
    Undly_7.add_attribute("Desc", "UnderlyingSecurityDesc_t_120362643"); // 1
    Undly_7_set.insert("UnderlyingSecurityDesc_t_120362643");
    Undly_7.add_attribute("EncUndSecDescLen", "1259154405"); // 1
    Undly_7_set.insert("1259154405");
    Undly_7.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1732412319"); // 1
    Undly_7_set.insert("EncodedUnderlyingSecurityDesc_t_1732412319");
    Undly_7.add_attribute("CPPgm", "UnderlyingCPProgram_t_774218760"); // 1
    Undly_7_set.insert("UnderlyingCPProgram_t_774218760");
    Undly_7.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1492338357"); // 1
    Undly_7_set.insert("UnderlyingCPRegType_t_1492338357");
    Undly_7.add_attribute("AllocPct", "12312343.880000"); // 1
    Undly_7_set.insert("12312343.880000");
    Undly_7.add_attribute("Ccy", "JPY"); // 1
    Undly_7_set.insert("JPY");
    Undly_7.add_attribute("Qty", "20636210.100000"); // 1
    Undly_7_set.insert("20636210.100000");
    Undly_7.add_attribute("SettlTyp", "4"); // 1
    Undly_7_set.insert("4");
    Undly_7.add_attribute("CashAmt", "UnderlyingCashAmount_t_1221256557"); // 1
    Undly_7_set.insert("UnderlyingCashAmount_t_1221256557");
    Undly_7.add_attribute("CashTyp", "FIXED"); // 1
    Undly_7_set.insert("FIXED");
    Undly_7.add_attribute("Px", "2125503.240000"); // 1
    Undly_7_set.insert("2125503.240000");
    Undly_7.add_attribute("DirtPx", "10097072.970000"); // 1
    Undly_7_set.insert("10097072.970000");
    Undly_7.add_attribute("EndPx", "1106427.850000"); // 1
    Undly_7_set.insert("1106427.850000");
    Undly_7.add_attribute("StartVal", "UnderlyingStartValue_t_1267596861"); // 1
    Undly_7_set.insert("UnderlyingStartValue_t_1267596861");
    Undly_7.add_attribute("CurVal", "UnderlyingCurrentValue_t_526590023"); // 1
    Undly_7_set.insert("UnderlyingCurrentValue_t_526590023");
    Undly_7.add_attribute("EndVal", "UnderlyingEndValue_t_1329109704"); // 1
    Undly_7_set.insert("UnderlyingEndValue_t_1329109704");
    Undly_7.add_attribute("AdjQty", "13626676.190000"); // 1
    Undly_7_set.insert("13626676.190000");
    Undly_7.add_attribute("FxRate", "19063348.340000"); // 1
    Undly_7_set.insert("19063348.340000");
    Undly_7.add_attribute("FxRateCalc", "D"); // 1
    Undly_7_set.insert("D");
    Undly_7.add_attribute("CapValu", "UnderlyingCapValue_t_1792130019"); // 1
    Undly_7_set.insert("UnderlyingCapValue_t_1792130019");
    Undly_7.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2053915537"); // 1
    Undly_7_set.insert("UnderlyingSettlMethod_t_2053915537");
    Undly_7.add_attribute("PutCall", "703141314"); // 1
    Undly_7_set.insert("703141314");
    all_values.push_back(Undly_7_set);
    all_compo_names.insert("Undly_7_set");

    {
      xml_element UndAID_7{"UndAID"};
      multiset<string> UndAID_7_set;
      UndAID_7.add_attribute("AltID", "UnderlyingSecurityAltID_t_435960908"); // 2
      UndAID_7_set.insert("UnderlyingSecurityAltID_t_435960908");
      UndAID_7.add_attribute("AltIDSrc", "M"); // 2
      UndAID_7_set.insert("M");
      all_values.push_back(UndAID_7_set);
      all_compo_names.insert("UndAID_7_set");

      Undly_7.add_element(UndAID_7);
    }
    {
      xml_element Stip_11{"Stip"};
      multiset<string> Stip_11_set;
      Stip_11.add_attribute("Typ", "COUPON"); // 2
      Stip_11_set.insert("COUPON");
      Stip_11.add_attribute("Val", "UnderlyingStipValue_t_1924773966"); // 2
      Stip_11_set.insert("UnderlyingStipValue_t_1924773966");
      all_values.push_back(Stip_11_set);
      all_compo_names.insert("Stip_11_set");

      Undly_7.add_element(Stip_11);
    }
    {
      xml_element Pty_67{"Pty"};
      multiset<string> Pty_67_set;
      Pty_67.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1010789891"); // 2
      Pty_67_set.insert("UnderlyingInstrumentPartyID_t_1010789891");
      Pty_67.add_attribute("Src", "D"); // 2
      Pty_67_set.insert("D");
      Pty_67.add_attribute("R", "12"); // 2
      Pty_67_set.insert("12");
      all_values.push_back(Pty_67_set);
      all_compo_names.insert("Pty_67_set");

      {
        xml_element Sub_67{"Sub"};
        multiset<string> Sub_67_set;
        Sub_67.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1131152535"); // 3
        Sub_67_set.insert("UnderlyingInstrumentPartySubID_t_1131152535");
        Sub_67.add_attribute("Typ", "29"); // 3
        Sub_67_set.insert("29");
        all_values.push_back(Sub_67_set);
        all_compo_names.insert("Sub_67_set");

        Pty_67.add_element(Sub_67);
      }
      Undly_7.add_element(Pty_67);
    }
    elt.add_element(Undly_7);
  } // end Undly
  { // Qty
    xml_element Qty_1{"Qty"};
    multiset<string> Qty_1_set;
    Qty_1.add_attribute("Typ", "FIN"); // 1
    Qty_1_set.insert("FIN");
    Qty_1.add_attribute("Long", "7029960.050000"); // 1
    Qty_1_set.insert("7029960.050000");
    Qty_1.add_attribute("Short", "5613123.100000"); // 1
    Qty_1_set.insert("5613123.100000");
    Qty_1.add_attribute("Stat", "0"); // 1
    Qty_1_set.insert("0");
    Qty_1.add_attribute("QtyDt", "QuantityDate_t_338985499"); // 1
    Qty_1_set.insert("QuantityDate_t_338985499");
    all_values.push_back(Qty_1_set);
    all_compo_names.insert("Qty_1_set");

    {
      xml_element Pty_68{"Pty"};
      multiset<string> Pty_68_set;
      Pty_68.add_attribute("ID", "NestedPartyID_t_477449672"); // 2
      Pty_68_set.insert("NestedPartyID_t_477449672");
      Pty_68.add_attribute("Src", "9"); // 2
      Pty_68_set.insert("9");
      Pty_68.add_attribute("R", "26"); // 2
      Pty_68_set.insert("26");
      all_values.push_back(Pty_68_set);
      all_compo_names.insert("Pty_68_set");

      {
        xml_element Sub_68{"Sub"};
        multiset<string> Sub_68_set;
        Sub_68.add_attribute("ID", "NestedPartySubID_t_2020291110"); // 3
        Sub_68_set.insert("NestedPartySubID_t_2020291110");
        Sub_68.add_attribute("Typ", "27"); // 3
        Sub_68_set.insert("27");
        all_values.push_back(Sub_68_set);
        all_compo_names.insert("Sub_68_set");

        Pty_68.add_element(Sub_68);
      }
      Qty_1.add_element(Pty_68);
    }
    elt.add_element(Qty_1);
  } // end Qty
  { // Qty
    xml_element Qty_2{"Qty"};
    multiset<string> Qty_2_set;
    Qty_2.add_attribute("Typ", "ALC"); // 1
    Qty_2_set.insert("ALC");
    Qty_2.add_attribute("Long", "21309338.960000"); // 1
    Qty_2_set.insert("21309338.960000");
    Qty_2.add_attribute("Short", "21169986.050000"); // 1
    Qty_2_set.insert("21169986.050000");
    Qty_2.add_attribute("Stat", "0"); // 1
    Qty_2_set.insert("0");
    Qty_2.add_attribute("QtyDt", "QuantityDate_t_1312559952"); // 1
    Qty_2_set.insert("QuantityDate_t_1312559952");
    all_values.push_back(Qty_2_set);
    all_compo_names.insert("Qty_2_set");

    {
      xml_element Pty_69{"Pty"};
      multiset<string> Pty_69_set;
      Pty_69.add_attribute("ID", "NestedPartyID_t_1332182576"); // 2
      Pty_69_set.insert("NestedPartyID_t_1332182576");
      Pty_69.add_attribute("Src", "1"); // 2
      Pty_69_set.insert("1");
      Pty_69.add_attribute("R", "75"); // 2
      Pty_69_set.insert("75");
      all_values.push_back(Pty_69_set);
      all_compo_names.insert("Pty_69_set");

      {
        xml_element Sub_69{"Sub"};
        multiset<string> Sub_69_set;
        Sub_69.add_attribute("ID", "NestedPartySubID_t_976828947"); // 3
        Sub_69_set.insert("NestedPartySubID_t_976828947");
        Sub_69.add_attribute("Typ", "22"); // 3
        Sub_69_set.insert("22");
        all_values.push_back(Sub_69_set);
        all_compo_names.insert("Sub_69_set");

        Pty_69.add_element(Sub_69);
      }
      Qty_2.add_element(Pty_69);
    }
    elt.add_element(Qty_2);
  } // end Qty
  { // Amt
    xml_element Amt_8{"Amt"};
    multiset<string> Amt_8_set;
    Amt_8.add_attribute("Typ", "TVAR"); // 1
    Amt_8_set.insert("TVAR");
    Amt_8.add_attribute("Amt", "PosAmt_t_333944468"); // 1
    Amt_8_set.insert("PosAmt_t_333944468");
    Amt_8.add_attribute("Ccy", "PositionCurrency_t_2002828137"); // 1
    Amt_8_set.insert("PositionCurrency_t_2002828137");
    all_values.push_back(Amt_8_set);
    all_compo_names.insert("Amt_8_set");

    elt.add_element(Amt_8);
  } // end Amt
  { // Amt
    xml_element Amt_9{"Amt"};
    multiset<string> Amt_9_set;
    Amt_9.add_attribute("Typ", "PREM"); // 1
    Amt_9_set.insert("PREM");
    Amt_9.add_attribute("Amt", "PosAmt_t_1344734359"); // 1
    Amt_9_set.insert("PosAmt_t_1344734359");
    Amt_9.add_attribute("Ccy", "PositionCurrency_t_2101815027"); // 1
    Amt_9_set.insert("PositionCurrency_t_2101815027");
    all_values.push_back(Amt_9_set);
    all_compo_names.insert("Amt_9_set");

    elt.add_element(Amt_9);
  } // end Amt
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
