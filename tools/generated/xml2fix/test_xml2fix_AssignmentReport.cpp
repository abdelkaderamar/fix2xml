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
  elt.add_attribute("RptID", "AsgnRptID_t_1650114393"); // 0
  AssignmentReport_message_t_0.insert("AsgnRptID_t_1650114393");
  elt.add_attribute("ReqID", "PosReqID_t_398413942"); // 0
  AssignmentReport_message_t_0.insert("PosReqID_t_398413942");
  elt.add_attribute("TotNumAsgnRpts", "1094737903"); // 0
  AssignmentReport_message_t_0.insert("1094737903");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  AssignmentReport_message_t_0.insert("Y");
  elt.add_attribute("Acct", "Account_t_1217030938"); // 0
  AssignmentReport_message_t_0.insert("Account_t_1217030938");
  elt.add_attribute("AcctTyp", "4"); // 0
  AssignmentReport_message_t_0.insert("4");
  elt.add_attribute("Ccy", "CHF"); // 0
  AssignmentReport_message_t_0.insert("CHF");
  elt.add_attribute("ThresholdAmt", "11812519.530000"); // 0
  AssignmentReport_message_t_0.insert("11812519.530000");
  elt.add_attribute("SetPx", "1082717.700000"); // 0
  AssignmentReport_message_t_0.insert("1082717.700000");
  elt.add_attribute("SetPxTyp", "2"); // 0
  AssignmentReport_message_t_0.insert("2");
  elt.add_attribute("UndSetPx", "7047727.390000"); // 0
  AssignmentReport_message_t_0.insert("7047727.390000");
  elt.add_attribute("PriSetPx", "13824752.830000"); // 0
  AssignmentReport_message_t_0.insert("13824752.830000");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1461318958"); // 0
  AssignmentReport_message_t_0.insert("ExpireDate_t_1461318958");
  elt.add_attribute("AsgnMeth", "P"); // 0
  AssignmentReport_message_t_0.insert("P");
  elt.add_attribute("Unit", "6586053.820000"); // 0
  AssignmentReport_message_t_0.insert("6586053.820000");
  elt.add_attribute("OpenInt", "OpenInterest_t_972534151"); // 0
  AssignmentReport_message_t_0.insert("OpenInterest_t_972534151");
  elt.add_attribute("ExrMethod", "A"); // 0
  AssignmentReport_message_t_0.insert("A");
  elt.add_attribute("SetSesID", "RTH"); // 0
  AssignmentReport_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1151789306"); // 0
  AssignmentReport_message_t_0.insert("SettlSessSubID_t_1151789306");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1072251690"); // 0
  AssignmentReport_message_t_0.insert("ClearingBusinessDate_t_1072251690");
  elt.add_attribute("Txt", "Text_t_25717569"); // 0
  AssignmentReport_message_t_0.insert("Text_t_25717569");
  elt.add_attribute("EncTxtLen", "368755585"); // 0
  AssignmentReport_message_t_0.insert("368755585");
  elt.add_attribute("EncTxt", "EncodedText_t_474779466"); // 0
  AssignmentReport_message_t_0.insert("EncodedText_t_474779466");
  all_values.push_back(AssignmentReport_message_t_0);
  all_compo_names.insert("AssignmentReport_message_t");

  { // Hdr
    xml_element Hdr_10{"Hdr"};
    multiset<string> Hdr_10_set;
    Hdr_10.add_attribute("SeqNum", "914455556"); // 1
    Hdr_10_set.insert("914455556");
    Hdr_10.add_attribute("SID", "SenderCompID_t_841403756"); // 1
    Hdr_10_set.insert("SenderCompID_t_841403756");
    Hdr_10.add_attribute("TID", "TargetCompID_t_1123638957"); // 1
    Hdr_10_set.insert("TargetCompID_t_1123638957");
    Hdr_10.add_attribute("OBID", "OnBehalfOfCompID_t_1293620587"); // 1
    Hdr_10_set.insert("OnBehalfOfCompID_t_1293620587");
    Hdr_10.add_attribute("D2ID", "DeliverToCompID_t_102969431"); // 1
    Hdr_10_set.insert("DeliverToCompID_t_102969431");
    Hdr_10.add_attribute("SSub", "SenderSubID_t_1336099849"); // 1
    Hdr_10_set.insert("SenderSubID_t_1336099849");
    Hdr_10.add_attribute("SLoc", "SenderLocationID_t_1351168007"); // 1
    Hdr_10_set.insert("SenderLocationID_t_1351168007");
    Hdr_10.add_attribute("TSub", "TargetSubID_t_1753083825"); // 1
    Hdr_10_set.insert("TargetSubID_t_1753083825");
    Hdr_10.add_attribute("TLoc", "TargetLocationID_t_1734513791"); // 1
    Hdr_10_set.insert("TargetLocationID_t_1734513791");
    Hdr_10.add_attribute("OBSub", "OnBehalfOfSubID_t_298422263"); // 1
    Hdr_10_set.insert("OnBehalfOfSubID_t_298422263");
    Hdr_10.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1822387880"); // 1
    Hdr_10_set.insert("OnBehalfOfLocationID_t_1822387880");
    Hdr_10.add_attribute("D2Sub", "DeliverToSubID_t_804061081"); // 1
    Hdr_10_set.insert("DeliverToSubID_t_804061081");
    Hdr_10.add_attribute("D2Loc", "DeliverToLocationID_t_1905965833"); // 1
    Hdr_10_set.insert("DeliverToLocationID_t_1905965833");
    Hdr_10.add_attribute("PosDup", "Y"); // 1
    Hdr_10_set.insert("Y");
    Hdr_10.add_attribute("PosRsnd", "Y"); // 1
    Hdr_10_set.insert("Y");
    Hdr_10.add_attribute("Snt", "SendingTime_t_939734138"); // 1
    Hdr_10_set.insert("SendingTime_t_939734138");
    Hdr_10.add_attribute("OrigSnt", "OrigSendingTime_t_231219697"); // 1
    Hdr_10_set.insert("OrigSendingTime_t_231219697");
    Hdr_10.add_attribute("MsgEncd", "MessageEncoding_t_708745328"); // 1
    Hdr_10_set.insert("MessageEncoding_t_708745328");
    all_values.push_back(Hdr_10_set);
    all_compo_names.insert("Hdr_10_set");

    {
      xml_element Hop_10{"Hop"};
      multiset<string> Hop_10_set;
      Hop_10.add_attribute("ID", "HopCompID_t_1644506877"); // 2
      Hop_10_set.insert("HopCompID_t_1644506877");
      Hop_10.add_attribute("Ref", "1613694980"); // 2
      Hop_10_set.insert("1613694980");
      Hop_10.add_attribute("Snt", "HopSendingTime_t_22580639"); // 2
      Hop_10_set.insert("HopSendingTime_t_22580639");
      all_values.push_back(Hop_10_set);
      all_compo_names.insert("Hop_10_set");

      Hdr_10.add_element(Hop_10);
    }
    elt.add_element(Hdr_10);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_0{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_0_set;
    ApplSeqCtrl_0.add_attribute("ApplID", "ApplID_t_1227720170"); // 1
    ApplSeqCtrl_0_set.insert("ApplID_t_1227720170");
    ApplSeqCtrl_0.add_attribute("ApplSeqNum", "124816715"); // 1
    ApplSeqCtrl_0_set.insert("124816715");
    ApplSeqCtrl_0.add_attribute("ApplLastSeqNum", "995114790"); // 1
    ApplSeqCtrl_0_set.insert("995114790");
    ApplSeqCtrl_0.add_attribute("ApplResendFlag", "true"); // 1
    ApplSeqCtrl_0_set.insert("true");
    all_values.push_back(ApplSeqCtrl_0_set);
    all_compo_names.insert("ApplSeqCtrl_0_set");

    elt.add_element(ApplSeqCtrl_0);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_50{"Pty"};
    multiset<string> Pty_50_set;
    Pty_50.add_attribute("ID", "PartyID_t_2146904096"); // 1
    Pty_50_set.insert("PartyID_t_2146904096");
    Pty_50.add_attribute("Src", "C"); // 1
    Pty_50_set.insert("C");
    Pty_50.add_attribute("R", "71"); // 1
    Pty_50_set.insert("71");
    all_values.push_back(Pty_50_set);
    all_compo_names.insert("Pty_50_set");

    {
      xml_element Sub_50{"Sub"};
      multiset<string> Sub_50_set;
      Sub_50.add_attribute("ID", "PartySubID_t_368176034"); // 2
      Sub_50_set.insert("PartySubID_t_368176034");
      Sub_50.add_attribute("Typ", "26"); // 2
      Sub_50_set.insert("26");
      all_values.push_back(Sub_50_set);
      all_compo_names.insert("Sub_50_set");

      Pty_50.add_element(Sub_50);
    }
    elt.add_element(Pty_50);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_5{"Instrmt"};
    multiset<string> Instrmt_5_set;
    Instrmt_5.add_attribute("Sym", "Symbol_t_222139425"); // 1
    Instrmt_5_set.insert("Symbol_t_222139425");
    Instrmt_5.add_attribute("Sfx", "CD"); // 1
    Instrmt_5_set.insert("CD");
    Instrmt_5.add_attribute("ID", "SecurityID_t_1541380860"); // 1
    Instrmt_5_set.insert("SecurityID_t_1541380860");
    Instrmt_5.add_attribute("Src", "9"); // 1
    Instrmt_5_set.insert("9");
    Instrmt_5.add_attribute("Prod", "7"); // 1
    Instrmt_5_set.insert("7");
    Instrmt_5.add_attribute("ProdCmplx", "ProductComplex_t_729997061"); // 1
    Instrmt_5_set.insert("ProductComplex_t_729997061");
    Instrmt_5.add_attribute("SecGrp", "SecurityGroup_t_719444372"); // 1
    Instrmt_5_set.insert("SecurityGroup_t_719444372");
    Instrmt_5.add_attribute("CFI", "CFICode_t_918149399"); // 1
    Instrmt_5_set.insert("CFICode_t_918149399");
    Instrmt_5.add_attribute("SecTyp", "EUCP"); // 1
    Instrmt_5_set.insert("EUCP");
    Instrmt_5.add_attribute("SubTyp", "SecuritySubType_t_1017866635"); // 1
    Instrmt_5_set.insert("SecuritySubType_t_1017866635");
    Instrmt_5.add_attribute("MMY", "593053631"); // 1
    Instrmt_5_set.insert("593053631");
    Instrmt_5.add_attribute("MatDt", "MaturityDate_t_1121088286"); // 1
    Instrmt_5_set.insert("MaturityDate_t_1121088286");
    Instrmt_5.add_attribute("MatTm", "776348820"); // 1
    Instrmt_5_set.insert("776348820");
    Instrmt_5.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_716001559"); // 1
    Instrmt_5_set.insert("SettleOnOpenFlag_t_716001559");
    Instrmt_5.add_attribute("AsgnMeth", "465320485"); // 1
    Instrmt_5_set.insert("465320485");
    Instrmt_5.add_attribute("Status", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CpnPmt", "CouponPaymentDate_t_947221256"); // 1
    Instrmt_5_set.insert("CouponPaymentDate_t_947221256");
    Instrmt_5.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_5_set.insert("MR");
    Instrmt_5.add_attribute("Snrty", "SD"); // 1
    Instrmt_5_set.insert("SD");
    Instrmt_5.add_attribute("NotlPctOut", "4134325.890000"); // 1
    Instrmt_5_set.insert("4134325.890000");
    Instrmt_5.add_attribute("OrigNotlPctOut", "11966464.520000"); // 1
    Instrmt_5_set.insert("11966464.520000");
    Instrmt_5.add_attribute("AttchPnt", "2933427.090000"); // 1
    Instrmt_5_set.insert("2933427.090000");
    Instrmt_5.add_attribute("DetchPnt", "5382493.040000"); // 1
    Instrmt_5_set.insert("5382493.040000");
    Instrmt_5.add_attribute("Issued", "IssueDate_t_44277594"); // 1
    Instrmt_5_set.insert("IssueDate_t_44277594");
    Instrmt_5.add_attribute("RepoCollSecTyp", "1311537104"); // 1
    Instrmt_5_set.insert("1311537104");
    Instrmt_5.add_attribute("RepoTrm", "1967699252"); // 1
    Instrmt_5_set.insert("1967699252");
    Instrmt_5.add_attribute("RepoRt", "436980.430000"); // 1
    Instrmt_5_set.insert("436980.430000");
    Instrmt_5.add_attribute("Fctr", "12544995.410000"); // 1
    Instrmt_5_set.insert("12544995.410000");
    Instrmt_5.add_attribute("CrdRtg", "CreditRating_t_1275383121"); // 1
    Instrmt_5_set.insert("CreditRating_t_1275383121");
    Instrmt_5.add_attribute("Rgstry", "InstrRegistry_t_411874077"); // 1
    Instrmt_5_set.insert("InstrRegistry_t_411874077");
    Instrmt_5.add_attribute("IssuCtry", "1672241444"); // 1
    Instrmt_5_set.insert("1672241444");
    Instrmt_5.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1497522546"); // 1
    Instrmt_5_set.insert("StateOrProvinceOfIssue_t_1497522546");
    Instrmt_5.add_attribute("Lcl", "LocaleOfIssue_t_1621453867"); // 1
    Instrmt_5_set.insert("LocaleOfIssue_t_1621453867");
    Instrmt_5.add_attribute("Redeem", "RedemptionDate_t_1066138657"); // 1
    Instrmt_5_set.insert("RedemptionDate_t_1066138657");
    Instrmt_5.add_attribute("StrkPx", "8657989.110000"); // 1
    Instrmt_5_set.insert("8657989.110000");
    Instrmt_5.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_5_set.insert("USD");
    Instrmt_5.add_attribute("StrkMult", "15852432.830000"); // 1
    Instrmt_5_set.insert("15852432.830000");
    Instrmt_5.add_attribute("StrkValu", "17046688.400000"); // 1
    Instrmt_5_set.insert("17046688.400000");
    Instrmt_5.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_5_set.insert("4");
    Instrmt_5.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("StrkPxBndryPrcsn", "1502388.240000"); // 1
    Instrmt_5_set.insert("1502388.240000");
    Instrmt_5.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_5_set.insert("2");
    Instrmt_5.add_attribute("OptAt", "1231975090"); // 1
    Instrmt_5_set.insert("1231975090");
    Instrmt_5.add_attribute("Mult", "8662403.830000"); // 1
    Instrmt_5_set.insert("8662403.830000");
    Instrmt_5.add_attribute("MultTyp", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("MinPxIncr", "18134616.390000"); // 1
    Instrmt_5_set.insert("18134616.390000");
    Instrmt_5.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_578670211"); // 1
    Instrmt_5_set.insert("MinPriceIncrementAmount_t_578670211");
    Instrmt_5.add_attribute("UOM", "USD"); // 1
    Instrmt_5_set.insert("USD");
    Instrmt_5.add_attribute("UOMQty", "794105.800000"); // 1
    Instrmt_5_set.insert("794105.800000");
    Instrmt_5.add_attribute("PxUOM", "t"); // 1
    Instrmt_5_set.insert("t");
    Instrmt_5.add_attribute("PxUOMQty", "1595396.490000"); // 1
    Instrmt_5_set.insert("1595396.490000");
    Instrmt_5.add_attribute("SettlMeth", "C"); // 1
    Instrmt_5_set.insert("C");
    Instrmt_5.add_attribute("ExerStyle", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_5_set.insert("3");
    Instrmt_5.add_attribute("OptPayAmt", "OptPayoutAmount_t_437875488"); // 1
    Instrmt_5_set.insert("OptPayoutAmount_t_437875488");
    Instrmt_5.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_5_set.insert("INX");
    Instrmt_5.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_5_set.insert("FUT");
    Instrmt_5.add_attribute("ListMeth", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CapPx", "1276827.300000"); // 1
    Instrmt_5_set.insert("1276827.300000");
    Instrmt_5.add_attribute("FlrPx", "1028504.420000"); // 1
    Instrmt_5_set.insert("1028504.420000");
    Instrmt_5.add_attribute("PutCall", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("FlexInd", "true"); // 1
    Instrmt_5_set.insert("true");
    Instrmt_5.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_5_set.insert("false");
    Instrmt_5.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_5_set.insert("Mo");
    Instrmt_5.add_attribute("CpnRt", "3881723.910000"); // 1
    Instrmt_5_set.insert("3881723.910000");
    Instrmt_5.add_attribute("Exch", "SecurityExchange_t_817641170"); // 1
    Instrmt_5_set.insert("SecurityExchange_t_817641170");
    Instrmt_5.add_attribute("PosLmt", "1366856054"); // 1
    Instrmt_5_set.insert("1366856054");
    Instrmt_5.add_attribute("NTPosLmt", "2092841232"); // 1
    Instrmt_5_set.insert("2092841232");
    Instrmt_5.add_attribute("Issr", "Issuer_t_783320445"); // 1
    Instrmt_5_set.insert("Issuer_t_783320445");
    Instrmt_5.add_attribute("EncIssrLen", "1822482324"); // 1
    Instrmt_5_set.insert("1822482324");
    Instrmt_5.add_attribute("EncIssr", "EncodedIssuer_t_95596408"); // 1
    Instrmt_5_set.insert("EncodedIssuer_t_95596408");
    Instrmt_5.add_attribute("Desc", "SecurityDesc_t_1870088006"); // 1
    Instrmt_5_set.insert("SecurityDesc_t_1870088006");
    Instrmt_5.add_attribute("EncSecDescLen", "906973766"); // 1
    Instrmt_5_set.insert("906973766");
    Instrmt_5.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_961836791"); // 1
    Instrmt_5_set.insert("EncodedSecurityDesc_t_961836791");
    Instrmt_5.add_attribute("Pool", "Pool_t_1274692404"); // 1
    Instrmt_5_set.insert("Pool_t_1274692404");
    Instrmt_5.add_attribute("CSetMo", "1707548166"); // 1
    Instrmt_5_set.insert("1707548166");
    Instrmt_5.add_attribute("CPPgm", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CPRegT", "CPRegType_t_1853362615"); // 1
    Instrmt_5_set.insert("CPRegType_t_1853362615");
    Instrmt_5.add_attribute("Dated", "DatedDate_t_1573745105"); // 1
    Instrmt_5_set.insert("DatedDate_t_1573745105");
    Instrmt_5.add_attribute("IntAcrl", "InterestAccrualDate_t_707225363"); // 1
    Instrmt_5_set.insert("InterestAccrualDate_t_707225363");
    all_values.push_back(Instrmt_5_set);
    all_compo_names.insert("Instrmt_5_set");

    {
      xml_element AID_5{"AID"};
      multiset<string> AID_5_set;
      AID_5.add_attribute("AltID", "SecurityAltID_t_1481195631"); // 2
      AID_5_set.insert("SecurityAltID_t_1481195631");
      AID_5.add_attribute("AltIDSrc", "F"); // 2
      AID_5_set.insert("F");
      all_values.push_back(AID_5_set);
      all_compo_names.insert("AID_5_set");

      Instrmt_5.add_element(AID_5);
    }
    {
      xml_element SecXML_5{"SecXML"};
      multiset<string> SecXML_5_set;
      SecXML_5.add_attribute("Schema", "SecurityXMLSchema_t_1324885247"); // 2
      SecXML_5_set.insert("SecurityXMLSchema_t_1324885247");
      all_values.push_back(SecXML_5_set);
      all_compo_names.insert("SecXML_5_set");

      Instrmt_5.add_element(SecXML_5);
    }
    {
      xml_element Evnt_5{"Evnt"};
      multiset<string> Evnt_5_set;
      Evnt_5.add_attribute("EventTyp", "3"); // 2
      Evnt_5_set.insert("3");
      Evnt_5.add_attribute("Dt", "EventDate_t_1056877859"); // 2
      Evnt_5_set.insert("EventDate_t_1056877859");
      Evnt_5.add_attribute("Tm", "EventTime_t_1762760736"); // 2
      Evnt_5_set.insert("EventTime_t_1762760736");
      Evnt_5.add_attribute("Px", "8691148.950000"); // 2
      Evnt_5_set.insert("8691148.950000");
      Evnt_5.add_attribute("Txt", "EventText_t_1634970505"); // 2
      Evnt_5_set.insert("EventText_t_1634970505");
      all_values.push_back(Evnt_5_set);
      all_compo_names.insert("Evnt_5_set");

      Instrmt_5.add_element(Evnt_5);
    }
    {
      xml_element Pty_51{"Pty"};
      multiset<string> Pty_51_set;
      Pty_51.add_attribute("ID", "InstrumentPartyID_t_1328535697"); // 2
      Pty_51_set.insert("InstrumentPartyID_t_1328535697");
      Pty_51.add_attribute("Src", "H"); // 2
      Pty_51_set.insert("H");
      Pty_51.add_attribute("R", "55"); // 2
      Pty_51_set.insert("55");
      all_values.push_back(Pty_51_set);
      all_compo_names.insert("Pty_51_set");

      {
        xml_element Sub_51{"Sub"};
        multiset<string> Sub_51_set;
        Sub_51.add_attribute("ID", "InstrumentPartySubID_t_244349557"); // 3
        Sub_51_set.insert("InstrumentPartySubID_t_244349557");
        Sub_51.add_attribute("Typ", "32"); // 3
        Sub_51_set.insert("32");
        all_values.push_back(Sub_51_set);
        all_compo_names.insert("Sub_51_set");

        Pty_51.add_element(Sub_51);
      }
      Instrmt_5.add_element(Pty_51);
    }
    {
      xml_element CmplxEvnt_5{"CmplxEvnt"};
      multiset<string> CmplxEvnt_5_set;
      CmplxEvnt_5.add_attribute("Typ", "9"); // 2
      CmplxEvnt_5_set.insert("9");
      CmplxEvnt_5.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_25962328"); // 2
      CmplxEvnt_5_set.insert("ComplexOptPayoutAmount_t_25962328");
      CmplxEvnt_5.add_attribute("Px", "9866229.670000"); // 2
      CmplxEvnt_5_set.insert("9866229.670000");
      CmplxEvnt_5.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_5_set.insert("5");
      CmplxEvnt_5.add_attribute("PxBndryPrcsn", "13928183.820000"); // 2
      CmplxEvnt_5_set.insert("13928183.820000");
      CmplxEvnt_5.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_5_set.insert("3");
      CmplxEvnt_5.add_attribute("Cond", "1"); // 2
      CmplxEvnt_5_set.insert("1");
      all_values.push_back(CmplxEvnt_5_set);
      all_compo_names.insert("CmplxEvnt_5_set");

      {
        xml_element EvntDts_5{"EvntDts"};
        multiset<string> EvntDts_5_set;
        EvntDts_5.add_attribute("StartDt", "ComplexEventStartDate_t_1067817058"); // 3
        EvntDts_5_set.insert("ComplexEventStartDate_t_1067817058");
        EvntDts_5.add_attribute("EndDt", "ComplexEventEndDate_t_1027576959"); // 3
        EvntDts_5_set.insert("ComplexEventEndDate_t_1027576959");
        all_values.push_back(EvntDts_5_set);
        all_compo_names.insert("EvntDts_5_set");

        {
          xml_element EvntTms_5{"EvntTms"};
          multiset<string> EvntTms_5_set;
          EvntTms_5.add_attribute("StartTm", "2082892372"); // 4
          EvntTms_5_set.insert("2082892372");
          EvntTms_5.add_attribute("EndTm", "1974790824"); // 4
          EvntTms_5_set.insert("1974790824");
          all_values.push_back(EvntTms_5_set);
          all_compo_names.insert("EvntTms_5_set");

          EvntDts_5.add_element(EvntTms_5);
        }
        CmplxEvnt_5.add_element(EvntDts_5);
      }
      Instrmt_5.add_element(CmplxEvnt_5);
    }
    elt.add_element(Instrmt_5);
  } // end Instrmt
  { // Leg
    xml_element Leg_8{"Leg"};
    multiset<string> Leg_8_set;
    Leg_8.add_attribute("Sym", "LegSymbol_t_1210101128"); // 1
    Leg_8_set.insert("LegSymbol_t_1210101128");
    Leg_8.add_attribute("Sfx", "CD"); // 1
    Leg_8_set.insert("CD");
    Leg_8.add_attribute("ID", "LegSecurityID_t_469744885"); // 1
    Leg_8_set.insert("LegSecurityID_t_469744885");
    Leg_8.add_attribute("Src", "K"); // 1
    Leg_8_set.insert("K");
    Leg_8.add_attribute("Prod", "4"); // 1
    Leg_8_set.insert("4");
    Leg_8.add_attribute("CFI", "LegCFICode_t_1176970248"); // 1
    Leg_8_set.insert("LegCFICode_t_1176970248");
    Leg_8.add_attribute("SecTyp", "SPCLT"); // 1
    Leg_8_set.insert("SPCLT");
    Leg_8.add_attribute("SecSubTyp", "LegSecuritySubType_t_546917906"); // 1
    Leg_8_set.insert("LegSecuritySubType_t_546917906");
    Leg_8.add_attribute("MMY", "354371847"); // 1
    Leg_8_set.insert("354371847");
    Leg_8.add_attribute("Mat", "LegMaturityDate_t_1402998321"); // 1
    Leg_8_set.insert("LegMaturityDate_t_1402998321");
    Leg_8.add_attribute("MatTm", "1603795766"); // 1
    Leg_8_set.insert("1603795766");
    Leg_8.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2117132583"); // 1
    Leg_8_set.insert("LegCouponPaymentDate_t_2117132583");
    Leg_8.add_attribute("Issued", "LegIssueDate_t_124629569"); // 1
    Leg_8_set.insert("LegIssueDate_t_124629569");
    Leg_8.add_attribute("RepoCollSecTyp", "1091282623"); // 1
    Leg_8_set.insert("1091282623");
    Leg_8.add_attribute("RepoTrm", "1298184633"); // 1
    Leg_8_set.insert("1298184633");
    Leg_8.add_attribute("RepoRt", "11214271.950000"); // 1
    Leg_8_set.insert("11214271.950000");
    Leg_8.add_attribute("Fctr", "6816199.230000"); // 1
    Leg_8_set.insert("6816199.230000");
    Leg_8.add_attribute("CrdRtg", "LegCreditRating_t_1542534190"); // 1
    Leg_8_set.insert("LegCreditRating_t_1542534190");
    Leg_8.add_attribute("Rgstry", "LegInstrRegistry_t_1719877771"); // 1
    Leg_8_set.insert("LegInstrRegistry_t_1719877771");
    Leg_8.add_attribute("Ctry", "1440946323"); // 1
    Leg_8_set.insert("1440946323");
    Leg_8.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1568496519"); // 1
    Leg_8_set.insert("LegStateOrProvinceOfIssue_t_1568496519");
    Leg_8.add_attribute("Lcl", "LegLocaleOfIssue_t_559017090"); // 1
    Leg_8_set.insert("LegLocaleOfIssue_t_559017090");
    Leg_8.add_attribute("Redeem", "LegRedemptionDate_t_870430244"); // 1
    Leg_8_set.insert("LegRedemptionDate_t_870430244");
    Leg_8.add_attribute("Strk", "8138312.530000"); // 1
    Leg_8_set.insert("8138312.530000");
    Leg_8.add_attribute("StrkCcy", "CAN"); // 1
    Leg_8_set.insert("CAN");
    Leg_8.add_attribute("OptA", "1881648312"); // 1
    Leg_8_set.insert("1881648312");
    Leg_8.add_attribute("Cmult", "3710909.530000"); // 1
    Leg_8_set.insert("3710909.530000");
    Leg_8.add_attribute("MultTyp", "1"); // 1
    Leg_8_set.insert("1");
    Leg_8.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_8_set.insert("3");
    Leg_8.add_attribute("UOM", "MMBtu"); // 1
    Leg_8_set.insert("MMBtu");
    Leg_8.add_attribute("UOMQty", "812608.160000"); // 1
    Leg_8_set.insert("812608.160000");
    Leg_8.add_attribute("PxUOM", "Gal"); // 1
    Leg_8_set.insert("Gal");
    Leg_8.add_attribute("PxUOMQty", "6827659.410000"); // 1
    Leg_8_set.insert("6827659.410000");
    Leg_8.add_attribute("TmUnit", "D"); // 1
    Leg_8_set.insert("D");
    Leg_8.add_attribute("ExerStyle", "0"); // 1
    Leg_8_set.insert("0");
    Leg_8.add_attribute("CpnRt", "18597361.890000"); // 1
    Leg_8_set.insert("18597361.890000");
    Leg_8.add_attribute("Exch", "LegSecurityExchange_t_1246932991"); // 1
    Leg_8_set.insert("LegSecurityExchange_t_1246932991");
    Leg_8.add_attribute("Issr", "LegIssuer_t_456878241"); // 1
    Leg_8_set.insert("LegIssuer_t_456878241");
    Leg_8.add_attribute("EncLegIssrLen", "66624388"); // 1
    Leg_8_set.insert("66624388");
    Leg_8.add_attribute("EncLegIssr", "EncodedLegIssuer_t_502447665"); // 1
    Leg_8_set.insert("EncodedLegIssuer_t_502447665");
    Leg_8.add_attribute("Desc", "LegSecurityDesc_t_2060674007"); // 1
    Leg_8_set.insert("LegSecurityDesc_t_2060674007");
    Leg_8.add_attribute("EncLegSecDescLen", "36273324"); // 1
    Leg_8_set.insert("36273324");
    Leg_8.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_627077234"); // 1
    Leg_8_set.insert("EncodedLegSecurityDesc_t_627077234");
    Leg_8.add_attribute("RatioQty", "10044729.830000"); // 1
    Leg_8_set.insert("10044729.830000");
    Leg_8.add_attribute("Side", "6"); // 1
    Leg_8_set.insert("6");
    Leg_8.add_attribute("Ccy", "GBP"); // 1
    Leg_8_set.insert("GBP");
    Leg_8.add_attribute("Pool", "LegPool_t_729508499"); // 1
    Leg_8_set.insert("LegPool_t_729508499");
    Leg_8.add_attribute("Dated", "LegDatedDate_t_1320898552"); // 1
    Leg_8_set.insert("LegDatedDate_t_1320898552");
    Leg_8.add_attribute("CSetMo", "979555581"); // 1
    Leg_8_set.insert("979555581");
    Leg_8.add_attribute("IntAcrl", "LegInterestAccrualDate_t_150521370"); // 1
    Leg_8_set.insert("LegInterestAccrualDate_t_150521370");
    Leg_8.add_attribute("PutCall", "1879915642"); // 1
    Leg_8_set.insert("1879915642");
    Leg_8.add_attribute("LegOptionRatio", "18499858.260000"); // 1
    Leg_8_set.insert("18499858.260000");
    Leg_8.add_attribute("Px", "9643526.240000"); // 1
    Leg_8_set.insert("9643526.240000");
    all_values.push_back(Leg_8_set);
    all_compo_names.insert("Leg_8_set");

    {
      xml_element LegAID_8{"LegAID"};
      multiset<string> LegAID_8_set;
      LegAID_8.add_attribute("SecAltID", "LegSecurityAltID_t_1223429636"); // 2
      LegAID_8_set.insert("LegSecurityAltID_t_1223429636");
      LegAID_8.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_8_set.insert("E");
      all_values.push_back(LegAID_8_set);
      all_compo_names.insert("LegAID_8_set");

      Leg_8.add_element(LegAID_8);
    }
    elt.add_element(Leg_8);
  } // end Leg
  { // Leg
    xml_element Leg_9{"Leg"};
    multiset<string> Leg_9_set;
    Leg_9.add_attribute("Sym", "LegSymbol_t_698517288"); // 1
    Leg_9_set.insert("LegSymbol_t_698517288");
    Leg_9.add_attribute("Sfx", "CD"); // 1
    Leg_9_set.insert("CD");
    Leg_9.add_attribute("ID", "LegSecurityID_t_1804380124"); // 1
    Leg_9_set.insert("LegSecurityID_t_1804380124");
    Leg_9.add_attribute("Src", "F"); // 1
    Leg_9_set.insert("F");
    Leg_9.add_attribute("Prod", "10"); // 1
    Leg_9_set.insert("10");
    Leg_9.add_attribute("CFI", "LegCFICode_t_1885640940"); // 1
    Leg_9_set.insert("LegCFICode_t_1885640940");
    Leg_9.add_attribute("SecTyp", "BA"); // 1
    Leg_9_set.insert("BA");
    Leg_9.add_attribute("SecSubTyp", "LegSecuritySubType_t_342823939"); // 1
    Leg_9_set.insert("LegSecuritySubType_t_342823939");
    Leg_9.add_attribute("MMY", "735398204"); // 1
    Leg_9_set.insert("735398204");
    Leg_9.add_attribute("Mat", "LegMaturityDate_t_1266276646"); // 1
    Leg_9_set.insert("LegMaturityDate_t_1266276646");
    Leg_9.add_attribute("MatTm", "55076480"); // 1
    Leg_9_set.insert("55076480");
    Leg_9.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1982331196"); // 1
    Leg_9_set.insert("LegCouponPaymentDate_t_1982331196");
    Leg_9.add_attribute("Issued", "LegIssueDate_t_1723154888"); // 1
    Leg_9_set.insert("LegIssueDate_t_1723154888");
    Leg_9.add_attribute("RepoCollSecTyp", "121700868"); // 1
    Leg_9_set.insert("121700868");
    Leg_9.add_attribute("RepoTrm", "337295213"); // 1
    Leg_9_set.insert("337295213");
    Leg_9.add_attribute("RepoRt", "16363452.470000"); // 1
    Leg_9_set.insert("16363452.470000");
    Leg_9.add_attribute("Fctr", "1579741.920000"); // 1
    Leg_9_set.insert("1579741.920000");
    Leg_9.add_attribute("CrdRtg", "LegCreditRating_t_964372447"); // 1
    Leg_9_set.insert("LegCreditRating_t_964372447");
    Leg_9.add_attribute("Rgstry", "LegInstrRegistry_t_493334582"); // 1
    Leg_9_set.insert("LegInstrRegistry_t_493334582");
    Leg_9.add_attribute("Ctry", "1492432149"); // 1
    Leg_9_set.insert("1492432149");
    Leg_9.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_565393228"); // 1
    Leg_9_set.insert("LegStateOrProvinceOfIssue_t_565393228");
    Leg_9.add_attribute("Lcl", "LegLocaleOfIssue_t_31943841"); // 1
    Leg_9_set.insert("LegLocaleOfIssue_t_31943841");
    Leg_9.add_attribute("Redeem", "LegRedemptionDate_t_74457001"); // 1
    Leg_9_set.insert("LegRedemptionDate_t_74457001");
    Leg_9.add_attribute("Strk", "18862917.800000"); // 1
    Leg_9_set.insert("18862917.800000");
    Leg_9.add_attribute("StrkCcy", "EUR"); // 1
    Leg_9_set.insert("EUR");
    Leg_9.add_attribute("OptA", "1618723774"); // 1
    Leg_9_set.insert("1618723774");
    Leg_9.add_attribute("Cmult", "7140016.000000"); // 1
    Leg_9_set.insert("7140016.000000");
    Leg_9.add_attribute("MultTyp", "0"); // 1
    Leg_9_set.insert("0");
    Leg_9.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_9_set.insert("3");
    Leg_9.add_attribute("UOM", "MMbbl"); // 1
    Leg_9_set.insert("MMbbl");
    Leg_9.add_attribute("UOMQty", "18878482.830000"); // 1
    Leg_9_set.insert("18878482.830000");
    Leg_9.add_attribute("PxUOM", "Bcf"); // 1
    Leg_9_set.insert("Bcf");
    Leg_9.add_attribute("PxUOMQty", "11566348.660000"); // 1
    Leg_9_set.insert("11566348.660000");
    Leg_9.add_attribute("TmUnit", "Mo"); // 1
    Leg_9_set.insert("Mo");
    Leg_9.add_attribute("ExerStyle", "1"); // 1
    Leg_9_set.insert("1");
    Leg_9.add_attribute("CpnRt", "8947921.580000"); // 1
    Leg_9_set.insert("8947921.580000");
    Leg_9.add_attribute("Exch", "LegSecurityExchange_t_1356670075"); // 1
    Leg_9_set.insert("LegSecurityExchange_t_1356670075");
    Leg_9.add_attribute("Issr", "LegIssuer_t_144588642"); // 1
    Leg_9_set.insert("LegIssuer_t_144588642");
    Leg_9.add_attribute("EncLegIssrLen", "1630190363"); // 1
    Leg_9_set.insert("1630190363");
    Leg_9.add_attribute("EncLegIssr", "EncodedLegIssuer_t_475463074"); // 1
    Leg_9_set.insert("EncodedLegIssuer_t_475463074");
    Leg_9.add_attribute("Desc", "LegSecurityDesc_t_199665122"); // 1
    Leg_9_set.insert("LegSecurityDesc_t_199665122");
    Leg_9.add_attribute("EncLegSecDescLen", "1465037911"); // 1
    Leg_9_set.insert("1465037911");
    Leg_9.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_51134314"); // 1
    Leg_9_set.insert("EncodedLegSecurityDesc_t_51134314");
    Leg_9.add_attribute("RatioQty", "3213659.900000"); // 1
    Leg_9_set.insert("3213659.900000");
    Leg_9.add_attribute("Side", "5"); // 1
    Leg_9_set.insert("5");
    Leg_9.add_attribute("Ccy", "CHF"); // 1
    Leg_9_set.insert("CHF");
    Leg_9.add_attribute("Pool", "LegPool_t_619221923"); // 1
    Leg_9_set.insert("LegPool_t_619221923");
    Leg_9.add_attribute("Dated", "LegDatedDate_t_33330496"); // 1
    Leg_9_set.insert("LegDatedDate_t_33330496");
    Leg_9.add_attribute("CSetMo", "1971772332"); // 1
    Leg_9_set.insert("1971772332");
    Leg_9.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1184615151"); // 1
    Leg_9_set.insert("LegInterestAccrualDate_t_1184615151");
    Leg_9.add_attribute("PutCall", "65274337"); // 1
    Leg_9_set.insert("65274337");
    Leg_9.add_attribute("LegOptionRatio", "20462293.330000"); // 1
    Leg_9_set.insert("20462293.330000");
    Leg_9.add_attribute("Px", "9234232.830000"); // 1
    Leg_9_set.insert("9234232.830000");
    all_values.push_back(Leg_9_set);
    all_compo_names.insert("Leg_9_set");

    {
      xml_element LegAID_9{"LegAID"};
      multiset<string> LegAID_9_set;
      LegAID_9.add_attribute("SecAltID", "LegSecurityAltID_t_1076773759"); // 2
      LegAID_9_set.insert("LegSecurityAltID_t_1076773759");
      LegAID_9.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_9_set.insert("I");
      all_values.push_back(LegAID_9_set);
      all_compo_names.insert("LegAID_9_set");

      Leg_9.add_element(LegAID_9);
    }
    elt.add_element(Leg_9);
  } // end Leg
  { // Leg
    xml_element Leg_10{"Leg"};
    multiset<string> Leg_10_set;
    Leg_10.add_attribute("Sym", "LegSymbol_t_394663409"); // 1
    Leg_10_set.insert("LegSymbol_t_394663409");
    Leg_10.add_attribute("Sfx", "CD"); // 1
    Leg_10_set.insert("CD");
    Leg_10.add_attribute("ID", "LegSecurityID_t_1313055052"); // 1
    Leg_10_set.insert("LegSecurityID_t_1313055052");
    Leg_10.add_attribute("Src", "5"); // 1
    Leg_10_set.insert("5");
    Leg_10.add_attribute("Prod", "2"); // 1
    Leg_10_set.insert("2");
    Leg_10.add_attribute("CFI", "LegCFICode_t_1053419688"); // 1
    Leg_10_set.insert("LegCFICode_t_1053419688");
    Leg_10.add_attribute("SecTyp", "MBS"); // 1
    Leg_10_set.insert("MBS");
    Leg_10.add_attribute("SecSubTyp", "LegSecuritySubType_t_152181319"); // 1
    Leg_10_set.insert("LegSecuritySubType_t_152181319");
    Leg_10.add_attribute("MMY", "1053773452"); // 1
    Leg_10_set.insert("1053773452");
    Leg_10.add_attribute("Mat", "LegMaturityDate_t_1032804580"); // 1
    Leg_10_set.insert("LegMaturityDate_t_1032804580");
    Leg_10.add_attribute("MatTm", "1046973478"); // 1
    Leg_10_set.insert("1046973478");
    Leg_10.add_attribute("CpnPmt", "LegCouponPaymentDate_t_262959879"); // 1
    Leg_10_set.insert("LegCouponPaymentDate_t_262959879");
    Leg_10.add_attribute("Issued", "LegIssueDate_t_1177393222"); // 1
    Leg_10_set.insert("LegIssueDate_t_1177393222");
    Leg_10.add_attribute("RepoCollSecTyp", "529680193"); // 1
    Leg_10_set.insert("529680193");
    Leg_10.add_attribute("RepoTrm", "738422953"); // 1
    Leg_10_set.insert("738422953");
    Leg_10.add_attribute("RepoRt", "13770583.440000"); // 1
    Leg_10_set.insert("13770583.440000");
    Leg_10.add_attribute("Fctr", "19947181.040000"); // 1
    Leg_10_set.insert("19947181.040000");
    Leg_10.add_attribute("CrdRtg", "LegCreditRating_t_789557267"); // 1
    Leg_10_set.insert("LegCreditRating_t_789557267");
    Leg_10.add_attribute("Rgstry", "LegInstrRegistry_t_1698424335"); // 1
    Leg_10_set.insert("LegInstrRegistry_t_1698424335");
    Leg_10.add_attribute("Ctry", "1649567580"); // 1
    Leg_10_set.insert("1649567580");
    Leg_10.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_329553181"); // 1
    Leg_10_set.insert("LegStateOrProvinceOfIssue_t_329553181");
    Leg_10.add_attribute("Lcl", "LegLocaleOfIssue_t_30280870"); // 1
    Leg_10_set.insert("LegLocaleOfIssue_t_30280870");
    Leg_10.add_attribute("Redeem", "LegRedemptionDate_t_121305855"); // 1
    Leg_10_set.insert("LegRedemptionDate_t_121305855");
    Leg_10.add_attribute("Strk", "3628836.770000"); // 1
    Leg_10_set.insert("3628836.770000");
    Leg_10.add_attribute("StrkCcy", "USD"); // 1
    Leg_10_set.insert("USD");
    Leg_10.add_attribute("OptA", "428158014"); // 1
    Leg_10_set.insert("428158014");
    Leg_10.add_attribute("Cmult", "19007988.880000"); // 1
    Leg_10_set.insert("19007988.880000");
    Leg_10.add_attribute("MultTyp", "1"); // 1
    Leg_10_set.insert("1");
    Leg_10.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_10_set.insert("3");
    Leg_10.add_attribute("UOM", "Gal"); // 1
    Leg_10_set.insert("Gal");
    Leg_10.add_attribute("UOMQty", "4765240.500000"); // 1
    Leg_10_set.insert("4765240.500000");
    Leg_10.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_10_set.insert("MMbbl");
    Leg_10.add_attribute("PxUOMQty", "11900943.490000"); // 1
    Leg_10_set.insert("11900943.490000");
    Leg_10.add_attribute("TmUnit", "S"); // 1
    Leg_10_set.insert("S");
    Leg_10.add_attribute("ExerStyle", "0"); // 1
    Leg_10_set.insert("0");
    Leg_10.add_attribute("CpnRt", "960303.890000"); // 1
    Leg_10_set.insert("960303.890000");
    Leg_10.add_attribute("Exch", "LegSecurityExchange_t_649413452"); // 1
    Leg_10_set.insert("LegSecurityExchange_t_649413452");
    Leg_10.add_attribute("Issr", "LegIssuer_t_295951258"); // 1
    Leg_10_set.insert("LegIssuer_t_295951258");
    Leg_10.add_attribute("EncLegIssrLen", "1149803841"); // 1
    Leg_10_set.insert("1149803841");
    Leg_10.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1682218033"); // 1
    Leg_10_set.insert("EncodedLegIssuer_t_1682218033");
    Leg_10.add_attribute("Desc", "LegSecurityDesc_t_1342924736"); // 1
    Leg_10_set.insert("LegSecurityDesc_t_1342924736");
    Leg_10.add_attribute("EncLegSecDescLen", "1412763721"); // 1
    Leg_10_set.insert("1412763721");
    Leg_10.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_712127607"); // 1
    Leg_10_set.insert("EncodedLegSecurityDesc_t_712127607");
    Leg_10.add_attribute("RatioQty", "18726049.290000"); // 1
    Leg_10_set.insert("18726049.290000");
    Leg_10.add_attribute("Side", "3"); // 1
    Leg_10_set.insert("3");
    Leg_10.add_attribute("Ccy", "CHF"); // 1
    Leg_10_set.insert("CHF");
    Leg_10.add_attribute("Pool", "LegPool_t_793260294"); // 1
    Leg_10_set.insert("LegPool_t_793260294");
    Leg_10.add_attribute("Dated", "LegDatedDate_t_1640126639"); // 1
    Leg_10_set.insert("LegDatedDate_t_1640126639");
    Leg_10.add_attribute("CSetMo", "1221923317"); // 1
    Leg_10_set.insert("1221923317");
    Leg_10.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1122813475"); // 1
    Leg_10_set.insert("LegInterestAccrualDate_t_1122813475");
    Leg_10.add_attribute("PutCall", "1670407509"); // 1
    Leg_10_set.insert("1670407509");
    Leg_10.add_attribute("LegOptionRatio", "13432291.720000"); // 1
    Leg_10_set.insert("13432291.720000");
    Leg_10.add_attribute("Px", "14856971.520000"); // 1
    Leg_10_set.insert("14856971.520000");
    all_values.push_back(Leg_10_set);
    all_compo_names.insert("Leg_10_set");

    {
      xml_element LegAID_10{"LegAID"};
      multiset<string> LegAID_10_set;
      LegAID_10.add_attribute("SecAltID", "LegSecurityAltID_t_1524977063"); // 2
      LegAID_10_set.insert("LegSecurityAltID_t_1524977063");
      LegAID_10.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_10_set.insert("3");
      all_values.push_back(LegAID_10_set);
      all_compo_names.insert("LegAID_10_set");

      Leg_10.add_element(LegAID_10);
    }
    elt.add_element(Leg_10);
  } // end Leg
  { // Undly
    xml_element Undly_6{"Undly"};
    multiset<string> Undly_6_set;
    Undly_6.add_attribute("Sym", "UnderlyingSymbol_t_1278292303"); // 1
    Undly_6_set.insert("UnderlyingSymbol_t_1278292303");
    Undly_6.add_attribute("Sfx", "WI"); // 1
    Undly_6_set.insert("WI");
    Undly_6.add_attribute("ID", "UnderlyingSecurityID_t_1271303291"); // 1
    Undly_6_set.insert("UnderlyingSecurityID_t_1271303291");
    Undly_6.add_attribute("Src", "H"); // 1
    Undly_6_set.insert("H");
    Undly_6.add_attribute("Prod", "6"); // 1
    Undly_6_set.insert("6");
    Undly_6.add_attribute("CFI", "UnderlyingCFICode_t_272043129"); // 1
    Undly_6_set.insert("UnderlyingCFICode_t_272043129");
    Undly_6.add_attribute("SecTyp", "CORP"); // 1
    Undly_6_set.insert("CORP");
    Undly_6.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_478424797"); // 1
    Undly_6_set.insert("UnderlyingSecuritySubType_t_478424797");
    Undly_6.add_attribute("MMY", "415813068"); // 1
    Undly_6_set.insert("415813068");
    Undly_6.add_attribute("Mat", "UnderlyingMaturityDate_t_293972691"); // 1
    Undly_6_set.insert("UnderlyingMaturityDate_t_293972691");
    Undly_6.add_attribute("MatTm", "1127838249"); // 1
    Undly_6_set.insert("1127838249");
    Undly_6.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_711764326"); // 1
    Undly_6_set.insert("UnderlyingCouponPaymentDate_t_711764326");
    Undly_6.add_attribute("RestrctTyp", "MR"); // 1
    Undly_6_set.insert("MR");
    Undly_6.add_attribute("Snrty", "SB"); // 1
    Undly_6_set.insert("SB");
    Undly_6.add_attribute("NotlPctOut", "20546890.630000"); // 1
    Undly_6_set.insert("20546890.630000");
    Undly_6.add_attribute("OrigNotlPctOut", "7090566.060000"); // 1
    Undly_6_set.insert("7090566.060000");
    Undly_6.add_attribute("AttchPnt", "13747002.420000"); // 1
    Undly_6_set.insert("13747002.420000");
    Undly_6.add_attribute("DetchPnt", "17798103.440000"); // 1
    Undly_6_set.insert("17798103.440000");
    Undly_6.add_attribute("Issued", "UnderlyingIssueDate_t_712759632"); // 1
    Undly_6_set.insert("UnderlyingIssueDate_t_712759632");
    Undly_6.add_attribute("RepoCollSecTyp", "1316402546"); // 1
    Undly_6_set.insert("1316402546");
    Undly_6.add_attribute("RepoTrm", "1352166082"); // 1
    Undly_6_set.insert("1352166082");
    Undly_6.add_attribute("RepoRt", "15060199.260000"); // 1
    Undly_6_set.insert("15060199.260000");
    Undly_6.add_attribute("Fctr", "8090455.370000"); // 1
    Undly_6_set.insert("8090455.370000");
    Undly_6.add_attribute("CrdRtg", "UnderlyingCreditRating_t_426605751"); // 1
    Undly_6_set.insert("UnderlyingCreditRating_t_426605751");
    Undly_6.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_481349753"); // 1
    Undly_6_set.insert("UnderlyingInstrRegistry_t_481349753");
    Undly_6.add_attribute("Ctry", "331969398"); // 1
    Undly_6_set.insert("331969398");
    Undly_6.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1769834924"); // 1
    Undly_6_set.insert("UnderlyingStateOrProvinceOfIssue_t_1769834924");
    Undly_6.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1967046905"); // 1
    Undly_6_set.insert("UnderlyingLocaleOfIssue_t_1967046905");
    Undly_6.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1856946461"); // 1
    Undly_6_set.insert("UnderlyingRedemptionDate_t_1856946461");
    Undly_6.add_attribute("StrkPx", "1240178.060000"); // 1
    Undly_6_set.insert("1240178.060000");
    Undly_6.add_attribute("StrkCcy", "CAN"); // 1
    Undly_6_set.insert("CAN");
    Undly_6.add_attribute("OptA", "707544978"); // 1
    Undly_6_set.insert("707544978");
    Undly_6.add_attribute("Mult", "8572380.670000"); // 1
    Undly_6_set.insert("8572380.670000");
    Undly_6.add_attribute("MultTyp", "0"); // 1
    Undly_6_set.insert("0");
    Undly_6.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_6_set.insert("0");
    Undly_6.add_attribute("UOM", "t"); // 1
    Undly_6_set.insert("t");
    Undly_6.add_attribute("UOMQty", "1935453.710000"); // 1
    Undly_6_set.insert("1935453.710000");
    Undly_6.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_6_set.insert("MMBtu");
    Undly_6.add_attribute("PxUOMQty", "15450942.640000"); // 1
    Undly_6_set.insert("15450942.640000");
    Undly_6.add_attribute("TmUnit", "Wk"); // 1
    Undly_6_set.insert("Wk");
    Undly_6.add_attribute("ExerStyle", "0"); // 1
    Undly_6_set.insert("0");
    Undly_6.add_attribute("CpnRt", "1093749.420000"); // 1
    Undly_6_set.insert("1093749.420000");
    Undly_6.add_attribute("Exch", "UnderlyingSecurityExchange_t_1931294596"); // 1
    Undly_6_set.insert("UnderlyingSecurityExchange_t_1931294596");
    Undly_6.add_attribute("Issr", "UnderlyingIssuer_t_1888948233"); // 1
    Undly_6_set.insert("UnderlyingIssuer_t_1888948233");
    Undly_6.add_attribute("EncUndIssrLen", "16580357"); // 1
    Undly_6_set.insert("16580357");
    Undly_6.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_492867554"); // 1
    Undly_6_set.insert("EncodedUnderlyingIssuer_t_492867554");
    Undly_6.add_attribute("Desc", "UnderlyingSecurityDesc_t_1116164827"); // 1
    Undly_6_set.insert("UnderlyingSecurityDesc_t_1116164827");
    Undly_6.add_attribute("EncUndSecDescLen", "1796390702"); // 1
    Undly_6_set.insert("1796390702");
    Undly_6.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1205627186"); // 1
    Undly_6_set.insert("EncodedUnderlyingSecurityDesc_t_1205627186");
    Undly_6.add_attribute("CPPgm", "UnderlyingCPProgram_t_285083725"); // 1
    Undly_6_set.insert("UnderlyingCPProgram_t_285083725");
    Undly_6.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1001073136"); // 1
    Undly_6_set.insert("UnderlyingCPRegType_t_1001073136");
    Undly_6.add_attribute("AllocPct", "5641634.650000"); // 1
    Undly_6_set.insert("5641634.650000");
    Undly_6.add_attribute("Ccy", "EUR"); // 1
    Undly_6_set.insert("EUR");
    Undly_6.add_attribute("Qty", "10455132.180000"); // 1
    Undly_6_set.insert("10455132.180000");
    Undly_6.add_attribute("SettlTyp", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("CashAmt", "UnderlyingCashAmount_t_1050030163"); // 1
    Undly_6_set.insert("UnderlyingCashAmount_t_1050030163");
    Undly_6.add_attribute("CashTyp", "FIXED"); // 1
    Undly_6_set.insert("FIXED");
    Undly_6.add_attribute("Px", "11355614.730000"); // 1
    Undly_6_set.insert("11355614.730000");
    Undly_6.add_attribute("DirtPx", "11740479.700000"); // 1
    Undly_6_set.insert("11740479.700000");
    Undly_6.add_attribute("EndPx", "4510112.510000"); // 1
    Undly_6_set.insert("4510112.510000");
    Undly_6.add_attribute("StartVal", "UnderlyingStartValue_t_2123316590"); // 1
    Undly_6_set.insert("UnderlyingStartValue_t_2123316590");
    Undly_6.add_attribute("CurVal", "UnderlyingCurrentValue_t_1881592948"); // 1
    Undly_6_set.insert("UnderlyingCurrentValue_t_1881592948");
    Undly_6.add_attribute("EndVal", "UnderlyingEndValue_t_1308249318"); // 1
    Undly_6_set.insert("UnderlyingEndValue_t_1308249318");
    Undly_6.add_attribute("AdjQty", "21189196.600000"); // 1
    Undly_6_set.insert("21189196.600000");
    Undly_6.add_attribute("FxRate", "15017055.000000"); // 1
    Undly_6_set.insert("15017055.000000");
    Undly_6.add_attribute("FxRateCalc", "M"); // 1
    Undly_6_set.insert("M");
    Undly_6.add_attribute("CapValu", "UnderlyingCapValue_t_164981383"); // 1
    Undly_6_set.insert("UnderlyingCapValue_t_164981383");
    Undly_6.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1600242849"); // 1
    Undly_6_set.insert("UnderlyingSettlMethod_t_1600242849");
    Undly_6.add_attribute("PutCall", "1835141130"); // 1
    Undly_6_set.insert("1835141130");
    all_values.push_back(Undly_6_set);
    all_compo_names.insert("Undly_6_set");

    {
      xml_element UndAID_6{"UndAID"};
      multiset<string> UndAID_6_set;
      UndAID_6.add_attribute("AltID", "UnderlyingSecurityAltID_t_652499446"); // 2
      UndAID_6_set.insert("UnderlyingSecurityAltID_t_652499446");
      UndAID_6.add_attribute("AltIDSrc", "E"); // 2
      UndAID_6_set.insert("E");
      all_values.push_back(UndAID_6_set);
      all_compo_names.insert("UndAID_6_set");

      Undly_6.add_element(UndAID_6);
    }
    {
      xml_element Stip_14{"Stip"};
      multiset<string> Stip_14_set;
      Stip_14.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_14_set.insert("MAXORDQTY");
      Stip_14.add_attribute("Val", "UnderlyingStipValue_t_436310394"); // 2
      Stip_14_set.insert("UnderlyingStipValue_t_436310394");
      all_values.push_back(Stip_14_set);
      all_compo_names.insert("Stip_14_set");

      Undly_6.add_element(Stip_14);
    }
    {
      xml_element Pty_52{"Pty"};
      multiset<string> Pty_52_set;
      Pty_52.add_attribute("ID", "UnderlyingInstrumentPartyID_t_420599384"); // 2
      Pty_52_set.insert("UnderlyingInstrumentPartyID_t_420599384");
      Pty_52.add_attribute("Src", "D"); // 2
      Pty_52_set.insert("D");
      Pty_52.add_attribute("R", "29"); // 2
      Pty_52_set.insert("29");
      all_values.push_back(Pty_52_set);
      all_compo_names.insert("Pty_52_set");

      {
        xml_element Sub_52{"Sub"};
        multiset<string> Sub_52_set;
        Sub_52.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1536764211"); // 3
        Sub_52_set.insert("UnderlyingInstrumentPartySubID_t_1536764211");
        Sub_52.add_attribute("Typ", "20"); // 3
        Sub_52_set.insert("20");
        all_values.push_back(Sub_52_set);
        all_compo_names.insert("Sub_52_set");

        Pty_52.add_element(Sub_52);
      }
      Undly_6.add_element(Pty_52);
    }
    elt.add_element(Undly_6);
  } // end Undly
  { // Qty
    xml_element Qty_1{"Qty"};
    multiset<string> Qty_1_set;
    Qty_1.add_attribute("Typ", "TA"); // 1
    Qty_1_set.insert("TA");
    Qty_1.add_attribute("Long", "4635929.720000"); // 1
    Qty_1_set.insert("4635929.720000");
    Qty_1.add_attribute("Short", "5514849.520000"); // 1
    Qty_1_set.insert("5514849.520000");
    Qty_1.add_attribute("Stat", "2"); // 1
    Qty_1_set.insert("2");
    Qty_1.add_attribute("QtyDt", "QuantityDate_t_1891271860"); // 1
    Qty_1_set.insert("QuantityDate_t_1891271860");
    all_values.push_back(Qty_1_set);
    all_compo_names.insert("Qty_1_set");

    {
      xml_element Pty_53{"Pty"};
      multiset<string> Pty_53_set;
      Pty_53.add_attribute("ID", "NestedPartyID_t_1596998170"); // 2
      Pty_53_set.insert("NestedPartyID_t_1596998170");
      Pty_53.add_attribute("Src", "7"); // 2
      Pty_53_set.insert("7");
      Pty_53.add_attribute("R", "65"); // 2
      Pty_53_set.insert("65");
      all_values.push_back(Pty_53_set);
      all_compo_names.insert("Pty_53_set");

      {
        xml_element Sub_53{"Sub"};
        multiset<string> Sub_53_set;
        Sub_53.add_attribute("ID", "NestedPartySubID_t_314590998"); // 3
        Sub_53_set.insert("NestedPartySubID_t_314590998");
        Sub_53.add_attribute("Typ", "32"); // 3
        Sub_53_set.insert("32");
        all_values.push_back(Sub_53_set);
        all_compo_names.insert("Sub_53_set");

        Pty_53.add_element(Sub_53);
      }
      Qty_1.add_element(Pty_53);
    }
    elt.add_element(Qty_1);
  } // end Qty
  { // Qty
    xml_element Qty_2{"Qty"};
    multiset<string> Qty_2_set;
    Qty_2.add_attribute("Typ", "RCV"); // 1
    Qty_2_set.insert("RCV");
    Qty_2.add_attribute("Long", "7656022.500000"); // 1
    Qty_2_set.insert("7656022.500000");
    Qty_2.add_attribute("Short", "11585029.780000"); // 1
    Qty_2_set.insert("11585029.780000");
    Qty_2.add_attribute("Stat", "0"); // 1
    Qty_2_set.insert("0");
    Qty_2.add_attribute("QtyDt", "QuantityDate_t_2073851568"); // 1
    Qty_2_set.insert("QuantityDate_t_2073851568");
    all_values.push_back(Qty_2_set);
    all_compo_names.insert("Qty_2_set");

    {
      xml_element Pty_54{"Pty"};
      multiset<string> Pty_54_set;
      Pty_54.add_attribute("ID", "NestedPartyID_t_1129938990"); // 2
      Pty_54_set.insert("NestedPartyID_t_1129938990");
      Pty_54.add_attribute("Src", "E"); // 2
      Pty_54_set.insert("E");
      Pty_54.add_attribute("R", "46"); // 2
      Pty_54_set.insert("46");
      all_values.push_back(Pty_54_set);
      all_compo_names.insert("Pty_54_set");

      {
        xml_element Sub_54{"Sub"};
        multiset<string> Sub_54_set;
        Sub_54.add_attribute("ID", "NestedPartySubID_t_1294920374"); // 3
        Sub_54_set.insert("NestedPartySubID_t_1294920374");
        Sub_54.add_attribute("Typ", "17"); // 3
        Sub_54_set.insert("17");
        all_values.push_back(Sub_54_set);
        all_compo_names.insert("Sub_54_set");

        Pty_54.add_element(Sub_54);
      }
      Qty_2.add_element(Pty_54);
    }
    elt.add_element(Qty_2);
  } // end Qty
  { // Qty
    xml_element Qty_3{"Qty"};
    multiset<string> Qty_3_set;
    Qty_3.add_attribute("Typ", "TA"); // 1
    Qty_3_set.insert("TA");
    Qty_3.add_attribute("Long", "19474198.200000"); // 1
    Qty_3_set.insert("19474198.200000");
    Qty_3.add_attribute("Short", "11880914.980000"); // 1
    Qty_3_set.insert("11880914.980000");
    Qty_3.add_attribute("Stat", "0"); // 1
    Qty_3_set.insert("0");
    Qty_3.add_attribute("QtyDt", "QuantityDate_t_236246567"); // 1
    Qty_3_set.insert("QuantityDate_t_236246567");
    all_values.push_back(Qty_3_set);
    all_compo_names.insert("Qty_3_set");

    {
      xml_element Pty_55{"Pty"};
      multiset<string> Pty_55_set;
      Pty_55.add_attribute("ID", "NestedPartyID_t_1608690882"); // 2
      Pty_55_set.insert("NestedPartyID_t_1608690882");
      Pty_55.add_attribute("Src", "I"); // 2
      Pty_55_set.insert("I");
      Pty_55.add_attribute("R", "4"); // 2
      Pty_55_set.insert("4");
      all_values.push_back(Pty_55_set);
      all_compo_names.insert("Pty_55_set");

      {
        xml_element Sub_55{"Sub"};
        multiset<string> Sub_55_set;
        Sub_55.add_attribute("ID", "NestedPartySubID_t_997971446"); // 3
        Sub_55_set.insert("NestedPartySubID_t_997971446");
        Sub_55.add_attribute("Typ", "20"); // 3
        Sub_55_set.insert("20");
        all_values.push_back(Sub_55_set);
        all_compo_names.insert("Sub_55_set");

        Pty_55.add_element(Sub_55);
      }
      Qty_3.add_element(Pty_55);
    }
    elt.add_element(Qty_3);
  } // end Qty
  { // Amt
    xml_element Amt_5{"Amt"};
    multiset<string> Amt_5_set;
    Amt_5.add_attribute("Typ", "PREM"); // 1
    Amt_5_set.insert("PREM");
    Amt_5.add_attribute("Amt", "PosAmt_t_1588313934"); // 1
    Amt_5_set.insert("PosAmt_t_1588313934");
    Amt_5.add_attribute("Ccy", "PositionCurrency_t_1704230954"); // 1
    Amt_5_set.insert("PositionCurrency_t_1704230954");
    all_values.push_back(Amt_5_set);
    all_compo_names.insert("Amt_5_set");

    elt.add_element(Amt_5);
  } // end Amt
  { // Amt
    xml_element Amt_6{"Amt"};
    multiset<string> Amt_6_set;
    Amt_6.add_attribute("Typ", "VADJ"); // 1
    Amt_6_set.insert("VADJ");
    Amt_6.add_attribute("Amt", "PosAmt_t_1332102146"); // 1
    Amt_6_set.insert("PosAmt_t_1332102146");
    Amt_6.add_attribute("Ccy", "PositionCurrency_t_1153745477"); // 1
    Amt_6_set.insert("PositionCurrency_t_1153745477");
    all_values.push_back(Amt_6_set);
    all_compo_names.insert("Amt_6_set");

    elt.add_element(Amt_6);
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
