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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AsgnRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AssignmentReport_message_t_0;
  elt.add_attribute("RptID", "AsgnRptID_t_1289417645"); // 0
  AssignmentReport_message_t_0.insert("AsgnRptID_t_1289417645");
  elt.add_attribute("ReqID", "PosReqID_t_1249206789"); // 0
  AssignmentReport_message_t_0.insert("PosReqID_t_1249206789");
  elt.add_attribute("TotNumAsgnRpts", "1875454634"); // 0
  AssignmentReport_message_t_0.insert("1875454634");
  elt.add_attribute("LastRptReqed", "N"); // 0
  AssignmentReport_message_t_0.insert("N");
  elt.add_attribute("Acct", "Account_t_1588048106"); // 0
  AssignmentReport_message_t_0.insert("Account_t_1588048106");
  elt.add_attribute("AcctTyp", "6"); // 0
  AssignmentReport_message_t_0.insert("6");
  elt.add_attribute("Ccy", "USD"); // 0
  AssignmentReport_message_t_0.insert("USD");
  elt.add_attribute("ThresholdAmt", "14175806.910000"); // 0
  AssignmentReport_message_t_0.insert("14175806.910000");
  elt.add_attribute("SetPx", "12866809.200000"); // 0
  AssignmentReport_message_t_0.insert("12866809.200000");
  elt.add_attribute("SetPxTyp", "2"); // 0
  AssignmentReport_message_t_0.insert("2");
  elt.add_attribute("UndSetPx", "153360.140000"); // 0
  AssignmentReport_message_t_0.insert("153360.140000");
  elt.add_attribute("PriSetPx", "12545367.710000"); // 0
  AssignmentReport_message_t_0.insert("12545367.710000");
  elt.add_attribute("ExpireDt", "ExpireDate_t_564826839"); // 0
  AssignmentReport_message_t_0.insert("ExpireDate_t_564826839");
  elt.add_attribute("AsgnMeth", "R"); // 0
  AssignmentReport_message_t_0.insert("R");
  elt.add_attribute("Unit", "2834530.630000"); // 0
  AssignmentReport_message_t_0.insert("2834530.630000");
  elt.add_attribute("OpenInt", "OpenInterest_t_1323737785"); // 0
  AssignmentReport_message_t_0.insert("OpenInterest_t_1323737785");
  elt.add_attribute("ExrMethod", "M"); // 0
  AssignmentReport_message_t_0.insert("M");
  elt.add_attribute("SetSesID", "EOD"); // 0
  AssignmentReport_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_533710859"); // 0
  AssignmentReport_message_t_0.insert("SettlSessSubID_t_533710859");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_256754078"); // 0
  AssignmentReport_message_t_0.insert("ClearingBusinessDate_t_256754078");
  elt.add_attribute("Txt", "Text_t_570798119"); // 0
  AssignmentReport_message_t_0.insert("Text_t_570798119");
  elt.add_attribute("EncTxtLen", "1068695741"); // 0
  AssignmentReport_message_t_0.insert("1068695741");
  elt.add_attribute("EncTxt", "EncodedText_t_1239817000"); // 0
  AssignmentReport_message_t_0.insert("EncodedText_t_1239817000");
  all_values.push_back(AssignmentReport_message_t_0);
  all_compo_names.insert("AssignmentReport_message_t");

  { // Hdr
    xml_element Hdr_10{"Hdr"};
    multiset<string> Hdr_10_set;
    Hdr_10.add_attribute("SeqNum", "162071867"); // 1
    Hdr_10_set.insert("162071867");
    Hdr_10.add_attribute("SID", "SenderCompID_t_1327499690"); // 1
    Hdr_10_set.insert("SenderCompID_t_1327499690");
    Hdr_10.add_attribute("TID", "TargetCompID_t_1814256829"); // 1
    Hdr_10_set.insert("TargetCompID_t_1814256829");
    Hdr_10.add_attribute("OBID", "OnBehalfOfCompID_t_1344287153"); // 1
    Hdr_10_set.insert("OnBehalfOfCompID_t_1344287153");
    Hdr_10.add_attribute("D2ID", "DeliverToCompID_t_1312940877"); // 1
    Hdr_10_set.insert("DeliverToCompID_t_1312940877");
    Hdr_10.add_attribute("SSub", "SenderSubID_t_30666197"); // 1
    Hdr_10_set.insert("SenderSubID_t_30666197");
    Hdr_10.add_attribute("SLoc", "SenderLocationID_t_716406566"); // 1
    Hdr_10_set.insert("SenderLocationID_t_716406566");
    Hdr_10.add_attribute("TSub", "TargetSubID_t_454874874"); // 1
    Hdr_10_set.insert("TargetSubID_t_454874874");
    Hdr_10.add_attribute("TLoc", "TargetLocationID_t_1279872986"); // 1
    Hdr_10_set.insert("TargetLocationID_t_1279872986");
    Hdr_10.add_attribute("OBSub", "OnBehalfOfSubID_t_444377552"); // 1
    Hdr_10_set.insert("OnBehalfOfSubID_t_444377552");
    Hdr_10.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1478052711"); // 1
    Hdr_10_set.insert("OnBehalfOfLocationID_t_1478052711");
    Hdr_10.add_attribute("D2Sub", "DeliverToSubID_t_720437444"); // 1
    Hdr_10_set.insert("DeliverToSubID_t_720437444");
    Hdr_10.add_attribute("D2Loc", "DeliverToLocationID_t_1480126614"); // 1
    Hdr_10_set.insert("DeliverToLocationID_t_1480126614");
    Hdr_10.add_attribute("PosDup", "N"); // 1
    Hdr_10_set.insert("N");
    Hdr_10.add_attribute("PosRsnd", "Y"); // 1
    Hdr_10_set.insert("Y");
    Hdr_10.add_attribute("Snt", "SendingTime_t_750223657"); // 1
    Hdr_10_set.insert("SendingTime_t_750223657");
    Hdr_10.add_attribute("OrigSnt", "OrigSendingTime_t_1054690542"); // 1
    Hdr_10_set.insert("OrigSendingTime_t_1054690542");
    Hdr_10.add_attribute("MsgEncd", "MessageEncoding_t_1609344918"); // 1
    Hdr_10_set.insert("MessageEncoding_t_1609344918");
    all_values.push_back(Hdr_10_set);
    all_compo_names.insert("Hdr_10_set");

    {
      xml_element Hop_10{"Hop"};
      multiset<string> Hop_10_set;
      Hop_10.add_attribute("ID", "HopCompID_t_765559671"); // 2
      Hop_10_set.insert("HopCompID_t_765559671");
      Hop_10.add_attribute("Ref", "161743665"); // 2
      Hop_10_set.insert("161743665");
      Hop_10.add_attribute("Snt", "HopSendingTime_t_26688109"); // 2
      Hop_10_set.insert("HopSendingTime_t_26688109");
      all_values.push_back(Hop_10_set);
      all_compo_names.insert("Hop_10_set");

      Hdr_10.add_element(Hop_10);
    }
    elt.add_element(Hdr_10);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_0{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_0_set;
    ApplSeqCtrl_0.add_attribute("ApplID", "ApplID_t_947337900"); // 1
    ApplSeqCtrl_0_set.insert("ApplID_t_947337900");
    ApplSeqCtrl_0.add_attribute("ApplSeqNum", "445196728"); // 1
    ApplSeqCtrl_0_set.insert("445196728");
    ApplSeqCtrl_0.add_attribute("ApplLastSeqNum", "1350425894"); // 1
    ApplSeqCtrl_0_set.insert("1350425894");
    ApplSeqCtrl_0.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_0_set.insert("false");
    all_values.push_back(ApplSeqCtrl_0_set);
    all_compo_names.insert("ApplSeqCtrl_0_set");

    elt.add_element(ApplSeqCtrl_0);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_56{"Pty"};
    multiset<string> Pty_56_set;
    Pty_56.add_attribute("ID", "PartyID_t_1884136753"); // 1
    Pty_56_set.insert("PartyID_t_1884136753");
    Pty_56.add_attribute("Src", "I"); // 1
    Pty_56_set.insert("I");
    Pty_56.add_attribute("R", "42"); // 1
    Pty_56_set.insert("42");
    all_values.push_back(Pty_56_set);
    all_compo_names.insert("Pty_56_set");

    {
      xml_element Sub_56{"Sub"};
      multiset<string> Sub_56_set;
      Sub_56.add_attribute("ID", "PartySubID_t_805348846"); // 2
      Sub_56_set.insert("PartySubID_t_805348846");
      Sub_56.add_attribute("Typ", "5"); // 2
      Sub_56_set.insert("5");
      all_values.push_back(Sub_56_set);
      all_compo_names.insert("Sub_56_set");

      Pty_56.add_element(Sub_56);
    }
    elt.add_element(Pty_56);
  } // end Pty
  { // Pty
    xml_element Pty_57{"Pty"};
    multiset<string> Pty_57_set;
    Pty_57.add_attribute("ID", "PartyID_t_1355918210"); // 1
    Pty_57_set.insert("PartyID_t_1355918210");
    Pty_57.add_attribute("Src", "8"); // 1
    Pty_57_set.insert("8");
    Pty_57.add_attribute("R", "39"); // 1
    Pty_57_set.insert("39");
    all_values.push_back(Pty_57_set);
    all_compo_names.insert("Pty_57_set");

    {
      xml_element Sub_57{"Sub"};
      multiset<string> Sub_57_set;
      Sub_57.add_attribute("ID", "PartySubID_t_552721715"); // 2
      Sub_57_set.insert("PartySubID_t_552721715");
      Sub_57.add_attribute("Typ", "33"); // 2
      Sub_57_set.insert("33");
      all_values.push_back(Sub_57_set);
      all_compo_names.insert("Sub_57_set");

      Pty_57.add_element(Sub_57);
    }
    elt.add_element(Pty_57);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_5{"Instrmt"};
    multiset<string> Instrmt_5_set;
    Instrmt_5.add_attribute("Sym", "Symbol_t_1696761230"); // 1
    Instrmt_5_set.insert("Symbol_t_1696761230");
    Instrmt_5.add_attribute("Sfx", "WI"); // 1
    Instrmt_5_set.insert("WI");
    Instrmt_5.add_attribute("ID", "SecurityID_t_1753180641"); // 1
    Instrmt_5_set.insert("SecurityID_t_1753180641");
    Instrmt_5.add_attribute("Src", "5"); // 1
    Instrmt_5_set.insert("5");
    Instrmt_5.add_attribute("Prod", "10"); // 1
    Instrmt_5_set.insert("10");
    Instrmt_5.add_attribute("ProdCmplx", "ProductComplex_t_1083749704"); // 1
    Instrmt_5_set.insert("ProductComplex_t_1083749704");
    Instrmt_5.add_attribute("SecGrp", "SecurityGroup_t_1549588012"); // 1
    Instrmt_5_set.insert("SecurityGroup_t_1549588012");
    Instrmt_5.add_attribute("CFI", "CFICode_t_1046148800"); // 1
    Instrmt_5_set.insert("CFICode_t_1046148800");
    Instrmt_5.add_attribute("SecTyp", "MPP"); // 1
    Instrmt_5_set.insert("MPP");
    Instrmt_5.add_attribute("SubTyp", "SecuritySubType_t_1290231773"); // 1
    Instrmt_5_set.insert("SecuritySubType_t_1290231773");
    Instrmt_5.add_attribute("MMY", "1796372457"); // 1
    Instrmt_5_set.insert("1796372457");
    Instrmt_5.add_attribute("MatDt", "MaturityDate_t_1906449868"); // 1
    Instrmt_5_set.insert("MaturityDate_t_1906449868");
    Instrmt_5.add_attribute("MatTm", "752093043"); // 1
    Instrmt_5_set.insert("752093043");
    Instrmt_5.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_414448480"); // 1
    Instrmt_5_set.insert("SettleOnOpenFlag_t_414448480");
    Instrmt_5.add_attribute("AsgnMeth", "2068193534"); // 1
    Instrmt_5_set.insert("2068193534");
    Instrmt_5.add_attribute("Status", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CpnPmt", "CouponPaymentDate_t_1361786380"); // 1
    Instrmt_5_set.insert("CouponPaymentDate_t_1361786380");
    Instrmt_5.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_5_set.insert("MM");
    Instrmt_5.add_attribute("Snrty", "SD"); // 1
    Instrmt_5_set.insert("SD");
    Instrmt_5.add_attribute("NotlPctOut", "18645371.530000"); // 1
    Instrmt_5_set.insert("18645371.530000");
    Instrmt_5.add_attribute("OrigNotlPctOut", "9889548.380000"); // 1
    Instrmt_5_set.insert("9889548.380000");
    Instrmt_5.add_attribute("AttchPnt", "18658601.510000"); // 1
    Instrmt_5_set.insert("18658601.510000");
    Instrmt_5.add_attribute("DetchPnt", "4765583.560000"); // 1
    Instrmt_5_set.insert("4765583.560000");
    Instrmt_5.add_attribute("Issued", "IssueDate_t_35317533"); // 1
    Instrmt_5_set.insert("IssueDate_t_35317533");
    Instrmt_5.add_attribute("RepoCollSecTyp", "523725350"); // 1
    Instrmt_5_set.insert("523725350");
    Instrmt_5.add_attribute("RepoTrm", "328396560"); // 1
    Instrmt_5_set.insert("328396560");
    Instrmt_5.add_attribute("RepoRt", "13912357.440000"); // 1
    Instrmt_5_set.insert("13912357.440000");
    Instrmt_5.add_attribute("Fctr", "5090902.390000"); // 1
    Instrmt_5_set.insert("5090902.390000");
    Instrmt_5.add_attribute("CrdRtg", "CreditRating_t_1994491593"); // 1
    Instrmt_5_set.insert("CreditRating_t_1994491593");
    Instrmt_5.add_attribute("Rgstry", "InstrRegistry_t_1943957459"); // 1
    Instrmt_5_set.insert("InstrRegistry_t_1943957459");
    Instrmt_5.add_attribute("IssuCtry", "1807396005"); // 1
    Instrmt_5_set.insert("1807396005");
    Instrmt_5.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1543769175"); // 1
    Instrmt_5_set.insert("StateOrProvinceOfIssue_t_1543769175");
    Instrmt_5.add_attribute("Lcl", "LocaleOfIssue_t_1065602093"); // 1
    Instrmt_5_set.insert("LocaleOfIssue_t_1065602093");
    Instrmt_5.add_attribute("Redeem", "RedemptionDate_t_1413092998"); // 1
    Instrmt_5_set.insert("RedemptionDate_t_1413092998");
    Instrmt_5.add_attribute("StrkPx", "2254360.950000"); // 1
    Instrmt_5_set.insert("2254360.950000");
    Instrmt_5.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_5_set.insert("USD");
    Instrmt_5.add_attribute("StrkMult", "17750241.070000"); // 1
    Instrmt_5_set.insert("17750241.070000");
    Instrmt_5.add_attribute("StrkValu", "16777730.790000"); // 1
    Instrmt_5_set.insert("16777730.790000");
    Instrmt_5.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_5_set.insert("4");
    Instrmt_5.add_attribute("StrkPxBndryPrcsn", "13266618.880000"); // 1
    Instrmt_5_set.insert("13266618.880000");
    Instrmt_5.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_5_set.insert("2");
    Instrmt_5.add_attribute("OptAt", "1669865276"); // 1
    Instrmt_5_set.insert("1669865276");
    Instrmt_5.add_attribute("Mult", "17411103.680000"); // 1
    Instrmt_5_set.insert("17411103.680000");
    Instrmt_5.add_attribute("MultTyp", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("MinPxIncr", "9554131.000000"); // 1
    Instrmt_5_set.insert("9554131.000000");
    Instrmt_5.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1246701101"); // 1
    Instrmt_5_set.insert("MinPriceIncrementAmount_t_1246701101");
    Instrmt_5.add_attribute("UOM", "t"); // 1
    Instrmt_5_set.insert("t");
    Instrmt_5.add_attribute("UOMQty", "6724666.050000"); // 1
    Instrmt_5_set.insert("6724666.050000");
    Instrmt_5.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_5_set.insert("MWh");
    Instrmt_5.add_attribute("PxUOMQty", "12626.830000"); // 1
    Instrmt_5_set.insert("12626.830000");
    Instrmt_5.add_attribute("SettlMeth", "P"); // 1
    Instrmt_5_set.insert("P");
    Instrmt_5.add_attribute("ExerStyle", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("OptPayAmt", "OptPayoutAmount_t_1477421521"); // 1
    Instrmt_5_set.insert("OptPayoutAmount_t_1477421521");
    Instrmt_5.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_5_set.insert("INX");
    Instrmt_5.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_5_set.insert("FUTDA");
    Instrmt_5.add_attribute("ListMeth", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("CapPx", "13111993.810000"); // 1
    Instrmt_5_set.insert("13111993.810000");
    Instrmt_5.add_attribute("FlrPx", "6939906.290000"); // 1
    Instrmt_5_set.insert("6939906.290000");
    Instrmt_5.add_attribute("PutCall", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("FlexInd", "true"); // 1
    Instrmt_5_set.insert("true");
    Instrmt_5.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_5_set.insert("true");
    Instrmt_5.add_attribute("TmUnit", "Min"); // 1
    Instrmt_5_set.insert("Min");
    Instrmt_5.add_attribute("CpnRt", "8609421.050000"); // 1
    Instrmt_5_set.insert("8609421.050000");
    Instrmt_5.add_attribute("Exch", "SecurityExchange_t_308959034"); // 1
    Instrmt_5_set.insert("SecurityExchange_t_308959034");
    Instrmt_5.add_attribute("PosLmt", "573691548"); // 1
    Instrmt_5_set.insert("573691548");
    Instrmt_5.add_attribute("NTPosLmt", "391231536"); // 1
    Instrmt_5_set.insert("391231536");
    Instrmt_5.add_attribute("Issr", "Issuer_t_1510077415"); // 1
    Instrmt_5_set.insert("Issuer_t_1510077415");
    Instrmt_5.add_attribute("EncIssrLen", "1491463781"); // 1
    Instrmt_5_set.insert("1491463781");
    Instrmt_5.add_attribute("EncIssr", "EncodedIssuer_t_1717893424"); // 1
    Instrmt_5_set.insert("EncodedIssuer_t_1717893424");
    Instrmt_5.add_attribute("Desc", "SecurityDesc_t_322678368"); // 1
    Instrmt_5_set.insert("SecurityDesc_t_322678368");
    Instrmt_5.add_attribute("EncSecDescLen", "1013845409"); // 1
    Instrmt_5_set.insert("1013845409");
    Instrmt_5.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1311520144"); // 1
    Instrmt_5_set.insert("EncodedSecurityDesc_t_1311520144");
    Instrmt_5.add_attribute("Pool", "Pool_t_1203472855"); // 1
    Instrmt_5_set.insert("Pool_t_1203472855");
    Instrmt_5.add_attribute("CSetMo", "1315008190"); // 1
    Instrmt_5_set.insert("1315008190");
    Instrmt_5.add_attribute("CPPgm", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CPRegT", "CPRegType_t_302690308"); // 1
    Instrmt_5_set.insert("CPRegType_t_302690308");
    Instrmt_5.add_attribute("Dated", "DatedDate_t_1597894370"); // 1
    Instrmt_5_set.insert("DatedDate_t_1597894370");
    Instrmt_5.add_attribute("IntAcrl", "InterestAccrualDate_t_791916201"); // 1
    Instrmt_5_set.insert("InterestAccrualDate_t_791916201");
    all_values.push_back(Instrmt_5_set);
    all_compo_names.insert("Instrmt_5_set");

    {
      xml_element AID_5{"AID"};
      multiset<string> AID_5_set;
      AID_5.add_attribute("AltID", "SecurityAltID_t_390862600"); // 2
      AID_5_set.insert("SecurityAltID_t_390862600");
      AID_5.add_attribute("AltIDSrc", "M"); // 2
      AID_5_set.insert("M");
      all_values.push_back(AID_5_set);
      all_compo_names.insert("AID_5_set");

      Instrmt_5.add_element(AID_5);
    }
    {
      xml_element SecXML_5{"SecXML"};
      multiset<string> SecXML_5_set;
      SecXML_5.add_attribute("Schema", "SecurityXMLSchema_t_1940941162"); // 2
      SecXML_5_set.insert("SecurityXMLSchema_t_1940941162");
      all_values.push_back(SecXML_5_set);
      all_compo_names.insert("SecXML_5_set");

      Instrmt_5.add_element(SecXML_5);
    }
    {
      xml_element Evnt_5{"Evnt"};
      multiset<string> Evnt_5_set;
      Evnt_5.add_attribute("EventTyp", "6"); // 2
      Evnt_5_set.insert("6");
      Evnt_5.add_attribute("Dt", "EventDate_t_2124145086"); // 2
      Evnt_5_set.insert("EventDate_t_2124145086");
      Evnt_5.add_attribute("Tm", "EventTime_t_1270879036"); // 2
      Evnt_5_set.insert("EventTime_t_1270879036");
      Evnt_5.add_attribute("Px", "20290779.950000"); // 2
      Evnt_5_set.insert("20290779.950000");
      Evnt_5.add_attribute("Txt", "EventText_t_1010739710"); // 2
      Evnt_5_set.insert("EventText_t_1010739710");
      all_values.push_back(Evnt_5_set);
      all_compo_names.insert("Evnt_5_set");

      Instrmt_5.add_element(Evnt_5);
    }
    {
      xml_element Pty_58{"Pty"};
      multiset<string> Pty_58_set;
      Pty_58.add_attribute("ID", "InstrumentPartyID_t_447824854"); // 2
      Pty_58_set.insert("InstrumentPartyID_t_447824854");
      Pty_58.add_attribute("Src", "5"); // 2
      Pty_58_set.insert("5");
      Pty_58.add_attribute("R", "69"); // 2
      Pty_58_set.insert("69");
      all_values.push_back(Pty_58_set);
      all_compo_names.insert("Pty_58_set");

      {
        xml_element Sub_58{"Sub"};
        multiset<string> Sub_58_set;
        Sub_58.add_attribute("ID", "InstrumentPartySubID_t_1168539848"); // 3
        Sub_58_set.insert("InstrumentPartySubID_t_1168539848");
        Sub_58.add_attribute("Typ", "25"); // 3
        Sub_58_set.insert("25");
        all_values.push_back(Sub_58_set);
        all_compo_names.insert("Sub_58_set");

        Pty_58.add_element(Sub_58);
      }
      Instrmt_5.add_element(Pty_58);
    }
    {
      xml_element CmplxEvnt_5{"CmplxEvnt"};
      multiset<string> CmplxEvnt_5_set;
      CmplxEvnt_5.add_attribute("Typ", "1"); // 2
      CmplxEvnt_5_set.insert("1");
      CmplxEvnt_5.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2114690936"); // 2
      CmplxEvnt_5_set.insert("ComplexOptPayoutAmount_t_2114690936");
      CmplxEvnt_5.add_attribute("Px", "1355700.110000"); // 2
      CmplxEvnt_5_set.insert("1355700.110000");
      CmplxEvnt_5.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_5_set.insert("5");
      CmplxEvnt_5.add_attribute("PxBndryPrcsn", "5408988.360000"); // 2
      CmplxEvnt_5_set.insert("5408988.360000");
      CmplxEvnt_5.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_5_set.insert("3");
      CmplxEvnt_5.add_attribute("Cond", "2"); // 2
      CmplxEvnt_5_set.insert("2");
      all_values.push_back(CmplxEvnt_5_set);
      all_compo_names.insert("CmplxEvnt_5_set");

      {
        xml_element EvntDts_5{"EvntDts"};
        multiset<string> EvntDts_5_set;
        EvntDts_5.add_attribute("StartDt", "ComplexEventStartDate_t_2032362617"); // 3
        EvntDts_5_set.insert("ComplexEventStartDate_t_2032362617");
        EvntDts_5.add_attribute("EndDt", "ComplexEventEndDate_t_97211323"); // 3
        EvntDts_5_set.insert("ComplexEventEndDate_t_97211323");
        all_values.push_back(EvntDts_5_set);
        all_compo_names.insert("EvntDts_5_set");

        {
          xml_element EvntTms_5{"EvntTms"};
          multiset<string> EvntTms_5_set;
          EvntTms_5.add_attribute("StartTm", "1658561489"); // 4
          EvntTms_5_set.insert("1658561489");
          EvntTms_5.add_attribute("EndTm", "898724379"); // 4
          EvntTms_5_set.insert("898724379");
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
    xml_element Leg_7{"Leg"};
    multiset<string> Leg_7_set;
    Leg_7.add_attribute("Sym", "LegSymbol_t_714550696"); // 1
    Leg_7_set.insert("LegSymbol_t_714550696");
    Leg_7.add_attribute("Sfx", "WI"); // 1
    Leg_7_set.insert("WI");
    Leg_7.add_attribute("ID", "LegSecurityID_t_1528181063"); // 1
    Leg_7_set.insert("LegSecurityID_t_1528181063");
    Leg_7.add_attribute("Src", "B"); // 1
    Leg_7_set.insert("B");
    Leg_7.add_attribute("Prod", "2"); // 1
    Leg_7_set.insert("2");
    Leg_7.add_attribute("CFI", "LegCFICode_t_172613616"); // 1
    Leg_7_set.insert("LegCFICode_t_172613616");
    Leg_7.add_attribute("SecTyp", "MTN"); // 1
    Leg_7_set.insert("MTN");
    Leg_7.add_attribute("SecSubTyp", "LegSecuritySubType_t_1115816696"); // 1
    Leg_7_set.insert("LegSecuritySubType_t_1115816696");
    Leg_7.add_attribute("MMY", "2113554779"); // 1
    Leg_7_set.insert("2113554779");
    Leg_7.add_attribute("Mat", "LegMaturityDate_t_1922456031"); // 1
    Leg_7_set.insert("LegMaturityDate_t_1922456031");
    Leg_7.add_attribute("MatTm", "1092478134"); // 1
    Leg_7_set.insert("1092478134");
    Leg_7.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1236950167"); // 1
    Leg_7_set.insert("LegCouponPaymentDate_t_1236950167");
    Leg_7.add_attribute("Issued", "LegIssueDate_t_1804050378"); // 1
    Leg_7_set.insert("LegIssueDate_t_1804050378");
    Leg_7.add_attribute("RepoCollSecTyp", "2103217844"); // 1
    Leg_7_set.insert("2103217844");
    Leg_7.add_attribute("RepoTrm", "1684775021"); // 1
    Leg_7_set.insert("1684775021");
    Leg_7.add_attribute("RepoRt", "8493604.590000"); // 1
    Leg_7_set.insert("8493604.590000");
    Leg_7.add_attribute("Fctr", "16604645.360000"); // 1
    Leg_7_set.insert("16604645.360000");
    Leg_7.add_attribute("CrdRtg", "LegCreditRating_t_705831221"); // 1
    Leg_7_set.insert("LegCreditRating_t_705831221");
    Leg_7.add_attribute("Rgstry", "LegInstrRegistry_t_123988365"); // 1
    Leg_7_set.insert("LegInstrRegistry_t_123988365");
    Leg_7.add_attribute("Ctry", "1177311207"); // 1
    Leg_7_set.insert("1177311207");
    Leg_7.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_673038510"); // 1
    Leg_7_set.insert("LegStateOrProvinceOfIssue_t_673038510");
    Leg_7.add_attribute("Lcl", "LegLocaleOfIssue_t_259558377"); // 1
    Leg_7_set.insert("LegLocaleOfIssue_t_259558377");
    Leg_7.add_attribute("Redeem", "LegRedemptionDate_t_1003116913"); // 1
    Leg_7_set.insert("LegRedemptionDate_t_1003116913");
    Leg_7.add_attribute("Strk", "12139373.460000"); // 1
    Leg_7_set.insert("12139373.460000");
    Leg_7.add_attribute("StrkCcy", "JPY"); // 1
    Leg_7_set.insert("JPY");
    Leg_7.add_attribute("OptA", "1098816316"); // 1
    Leg_7_set.insert("1098816316");
    Leg_7.add_attribute("Cmult", "8835712.480000"); // 1
    Leg_7_set.insert("8835712.480000");
    Leg_7.add_attribute("MultTyp", "0"); // 1
    Leg_7_set.insert("0");
    Leg_7.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_7_set.insert("0");
    Leg_7.add_attribute("UOM", "Gal"); // 1
    Leg_7_set.insert("Gal");
    Leg_7.add_attribute("UOMQty", "4171449.230000"); // 1
    Leg_7_set.insert("4171449.230000");
    Leg_7.add_attribute("PxUOM", "tn"); // 1
    Leg_7_set.insert("tn");
    Leg_7.add_attribute("PxUOMQty", "16730001.310000"); // 1
    Leg_7_set.insert("16730001.310000");
    Leg_7.add_attribute("TmUnit", "D"); // 1
    Leg_7_set.insert("D");
    Leg_7.add_attribute("ExerStyle", "0"); // 1
    Leg_7_set.insert("0");
    Leg_7.add_attribute("CpnRt", "18456137.470000"); // 1
    Leg_7_set.insert("18456137.470000");
    Leg_7.add_attribute("Exch", "LegSecurityExchange_t_695005885"); // 1
    Leg_7_set.insert("LegSecurityExchange_t_695005885");
    Leg_7.add_attribute("Issr", "LegIssuer_t_548782308"); // 1
    Leg_7_set.insert("LegIssuer_t_548782308");
    Leg_7.add_attribute("EncLegIssrLen", "1811684878"); // 1
    Leg_7_set.insert("1811684878");
    Leg_7.add_attribute("EncLegIssr", "EncodedLegIssuer_t_469978268"); // 1
    Leg_7_set.insert("EncodedLegIssuer_t_469978268");
    Leg_7.add_attribute("Desc", "LegSecurityDesc_t_1641260443"); // 1
    Leg_7_set.insert("LegSecurityDesc_t_1641260443");
    Leg_7.add_attribute("EncLegSecDescLen", "901151397"); // 1
    Leg_7_set.insert("901151397");
    Leg_7.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_126544998"); // 1
    Leg_7_set.insert("EncodedLegSecurityDesc_t_126544998");
    Leg_7.add_attribute("RatioQty", "15969946.390000"); // 1
    Leg_7_set.insert("15969946.390000");
    Leg_7.add_attribute("Side", "4"); // 1
    Leg_7_set.insert("4");
    Leg_7.add_attribute("Ccy", "EUR"); // 1
    Leg_7_set.insert("EUR");
    Leg_7.add_attribute("Pool", "LegPool_t_1144273992"); // 1
    Leg_7_set.insert("LegPool_t_1144273992");
    Leg_7.add_attribute("Dated", "LegDatedDate_t_1099893823"); // 1
    Leg_7_set.insert("LegDatedDate_t_1099893823");
    Leg_7.add_attribute("CSetMo", "139803087"); // 1
    Leg_7_set.insert("139803087");
    Leg_7.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1817312502"); // 1
    Leg_7_set.insert("LegInterestAccrualDate_t_1817312502");
    Leg_7.add_attribute("PutCall", "1359452200"); // 1
    Leg_7_set.insert("1359452200");
    Leg_7.add_attribute("LegOptionRatio", "11429200.000000"); // 1
    Leg_7_set.insert("11429200.000000");
    Leg_7.add_attribute("Px", "8837662.010000"); // 1
    Leg_7_set.insert("8837662.010000");
    all_values.push_back(Leg_7_set);
    all_compo_names.insert("Leg_7_set");

    {
      xml_element LegAID_7{"LegAID"};
      multiset<string> LegAID_7_set;
      LegAID_7.add_attribute("SecAltID", "LegSecurityAltID_t_2145812124"); // 2
      LegAID_7_set.insert("LegSecurityAltID_t_2145812124");
      LegAID_7.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_7_set.insert("A");
      all_values.push_back(LegAID_7_set);
      all_compo_names.insert("LegAID_7_set");

      Leg_7.add_element(LegAID_7);
    }
    elt.add_element(Leg_7);
  } // end Leg
  { // Leg
    xml_element Leg_8{"Leg"};
    multiset<string> Leg_8_set;
    Leg_8.add_attribute("Sym", "LegSymbol_t_1982582517"); // 1
    Leg_8_set.insert("LegSymbol_t_1982582517");
    Leg_8.add_attribute("Sfx", "CD"); // 1
    Leg_8_set.insert("CD");
    Leg_8.add_attribute("ID", "LegSecurityID_t_1037030614"); // 1
    Leg_8_set.insert("LegSecurityID_t_1037030614");
    Leg_8.add_attribute("Src", "9"); // 1
    Leg_8_set.insert("9");
    Leg_8.add_attribute("Prod", "5"); // 1
    Leg_8_set.insert("5");
    Leg_8.add_attribute("CFI", "LegCFICode_t_1454175538"); // 1
    Leg_8_set.insert("LegCFICode_t_1454175538");
    Leg_8.add_attribute("SecTyp", "LOFC"); // 1
    Leg_8_set.insert("LOFC");
    Leg_8.add_attribute("SecSubTyp", "LegSecuritySubType_t_552235275"); // 1
    Leg_8_set.insert("LegSecuritySubType_t_552235275");
    Leg_8.add_attribute("MMY", "741077818"); // 1
    Leg_8_set.insert("741077818");
    Leg_8.add_attribute("Mat", "LegMaturityDate_t_1181911144"); // 1
    Leg_8_set.insert("LegMaturityDate_t_1181911144");
    Leg_8.add_attribute("MatTm", "250365374"); // 1
    Leg_8_set.insert("250365374");
    Leg_8.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1436083703"); // 1
    Leg_8_set.insert("LegCouponPaymentDate_t_1436083703");
    Leg_8.add_attribute("Issued", "LegIssueDate_t_1730693453"); // 1
    Leg_8_set.insert("LegIssueDate_t_1730693453");
    Leg_8.add_attribute("RepoCollSecTyp", "2062050253"); // 1
    Leg_8_set.insert("2062050253");
    Leg_8.add_attribute("RepoTrm", "1906061971"); // 1
    Leg_8_set.insert("1906061971");
    Leg_8.add_attribute("RepoRt", "12244702.480000"); // 1
    Leg_8_set.insert("12244702.480000");
    Leg_8.add_attribute("Fctr", "8157180.020000"); // 1
    Leg_8_set.insert("8157180.020000");
    Leg_8.add_attribute("CrdRtg", "LegCreditRating_t_2032606969"); // 1
    Leg_8_set.insert("LegCreditRating_t_2032606969");
    Leg_8.add_attribute("Rgstry", "LegInstrRegistry_t_673981239"); // 1
    Leg_8_set.insert("LegInstrRegistry_t_673981239");
    Leg_8.add_attribute("Ctry", "1254160773"); // 1
    Leg_8_set.insert("1254160773");
    Leg_8.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_861028779"); // 1
    Leg_8_set.insert("LegStateOrProvinceOfIssue_t_861028779");
    Leg_8.add_attribute("Lcl", "LegLocaleOfIssue_t_1783956767"); // 1
    Leg_8_set.insert("LegLocaleOfIssue_t_1783956767");
    Leg_8.add_attribute("Redeem", "LegRedemptionDate_t_250951118"); // 1
    Leg_8_set.insert("LegRedemptionDate_t_250951118");
    Leg_8.add_attribute("Strk", "19609226.020000"); // 1
    Leg_8_set.insert("19609226.020000");
    Leg_8.add_attribute("StrkCcy", "GBP"); // 1
    Leg_8_set.insert("GBP");
    Leg_8.add_attribute("OptA", "1172891154"); // 1
    Leg_8_set.insert("1172891154");
    Leg_8.add_attribute("Cmult", "9191962.060000"); // 1
    Leg_8_set.insert("9191962.060000");
    Leg_8.add_attribute("MultTyp", "2"); // 1
    Leg_8_set.insert("2");
    Leg_8.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_8_set.insert("0");
    Leg_8.add_attribute("UOM", "MMbbl"); // 1
    Leg_8_set.insert("MMbbl");
    Leg_8.add_attribute("UOMQty", "6396450.420000"); // 1
    Leg_8_set.insert("6396450.420000");
    Leg_8.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_8_set.insert("MMBtu");
    Leg_8.add_attribute("PxUOMQty", "11431795.600000"); // 1
    Leg_8_set.insert("11431795.600000");
    Leg_8.add_attribute("TmUnit", "Yr"); // 1
    Leg_8_set.insert("Yr");
    Leg_8.add_attribute("ExerStyle", "0"); // 1
    Leg_8_set.insert("0");
    Leg_8.add_attribute("CpnRt", "4498714.500000"); // 1
    Leg_8_set.insert("4498714.500000");
    Leg_8.add_attribute("Exch", "LegSecurityExchange_t_2073746491"); // 1
    Leg_8_set.insert("LegSecurityExchange_t_2073746491");
    Leg_8.add_attribute("Issr", "LegIssuer_t_1484589774"); // 1
    Leg_8_set.insert("LegIssuer_t_1484589774");
    Leg_8.add_attribute("EncLegIssrLen", "1190949268"); // 1
    Leg_8_set.insert("1190949268");
    Leg_8.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1108173987"); // 1
    Leg_8_set.insert("EncodedLegIssuer_t_1108173987");
    Leg_8.add_attribute("Desc", "LegSecurityDesc_t_1734955148"); // 1
    Leg_8_set.insert("LegSecurityDesc_t_1734955148");
    Leg_8.add_attribute("EncLegSecDescLen", "479549323"); // 1
    Leg_8_set.insert("479549323");
    Leg_8.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_691383792"); // 1
    Leg_8_set.insert("EncodedLegSecurityDesc_t_691383792");
    Leg_8.add_attribute("RatioQty", "16495217.530000"); // 1
    Leg_8_set.insert("16495217.530000");
    Leg_8.add_attribute("Side", "F"); // 1
    Leg_8_set.insert("F");
    Leg_8.add_attribute("Ccy", "GBP"); // 1
    Leg_8_set.insert("GBP");
    Leg_8.add_attribute("Pool", "LegPool_t_123250967"); // 1
    Leg_8_set.insert("LegPool_t_123250967");
    Leg_8.add_attribute("Dated", "LegDatedDate_t_442351632"); // 1
    Leg_8_set.insert("LegDatedDate_t_442351632");
    Leg_8.add_attribute("CSetMo", "1571916881"); // 1
    Leg_8_set.insert("1571916881");
    Leg_8.add_attribute("IntAcrl", "LegInterestAccrualDate_t_984279746"); // 1
    Leg_8_set.insert("LegInterestAccrualDate_t_984279746");
    Leg_8.add_attribute("PutCall", "78824751"); // 1
    Leg_8_set.insert("78824751");
    Leg_8.add_attribute("LegOptionRatio", "18228679.990000"); // 1
    Leg_8_set.insert("18228679.990000");
    Leg_8.add_attribute("Px", "7977187.000000"); // 1
    Leg_8_set.insert("7977187.000000");
    all_values.push_back(Leg_8_set);
    all_compo_names.insert("Leg_8_set");

    {
      xml_element LegAID_8{"LegAID"};
      multiset<string> LegAID_8_set;
      LegAID_8.add_attribute("SecAltID", "LegSecurityAltID_t_2002584605"); // 2
      LegAID_8_set.insert("LegSecurityAltID_t_2002584605");
      LegAID_8.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_8_set.insert("1");
      all_values.push_back(LegAID_8_set);
      all_compo_names.insert("LegAID_8_set");

      Leg_8.add_element(LegAID_8);
    }
    elt.add_element(Leg_8);
  } // end Leg
  { // Leg
    xml_element Leg_9{"Leg"};
    multiset<string> Leg_9_set;
    Leg_9.add_attribute("Sym", "LegSymbol_t_1970609854"); // 1
    Leg_9_set.insert("LegSymbol_t_1970609854");
    Leg_9.add_attribute("Sfx", "WI"); // 1
    Leg_9_set.insert("WI");
    Leg_9.add_attribute("ID", "LegSecurityID_t_400710497"); // 1
    Leg_9_set.insert("LegSecurityID_t_400710497");
    Leg_9.add_attribute("Src", "2"); // 1
    Leg_9_set.insert("2");
    Leg_9.add_attribute("Prod", "7"); // 1
    Leg_9_set.insert("7");
    Leg_9.add_attribute("CFI", "LegCFICode_t_1040355540"); // 1
    Leg_9_set.insert("LegCFICode_t_1040355540");
    Leg_9.add_attribute("SecTyp", "EUSUPRA"); // 1
    Leg_9_set.insert("EUSUPRA");
    Leg_9.add_attribute("SecSubTyp", "LegSecuritySubType_t_2023625669"); // 1
    Leg_9_set.insert("LegSecuritySubType_t_2023625669");
    Leg_9.add_attribute("MMY", "1365156498"); // 1
    Leg_9_set.insert("1365156498");
    Leg_9.add_attribute("Mat", "LegMaturityDate_t_1832336043"); // 1
    Leg_9_set.insert("LegMaturityDate_t_1832336043");
    Leg_9.add_attribute("MatTm", "326013471"); // 1
    Leg_9_set.insert("326013471");
    Leg_9.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1291419341"); // 1
    Leg_9_set.insert("LegCouponPaymentDate_t_1291419341");
    Leg_9.add_attribute("Issued", "LegIssueDate_t_1169442169"); // 1
    Leg_9_set.insert("LegIssueDate_t_1169442169");
    Leg_9.add_attribute("RepoCollSecTyp", "1516962739"); // 1
    Leg_9_set.insert("1516962739");
    Leg_9.add_attribute("RepoTrm", "252109681"); // 1
    Leg_9_set.insert("252109681");
    Leg_9.add_attribute("RepoRt", "7569136.690000"); // 1
    Leg_9_set.insert("7569136.690000");
    Leg_9.add_attribute("Fctr", "19965120.620000"); // 1
    Leg_9_set.insert("19965120.620000");
    Leg_9.add_attribute("CrdRtg", "LegCreditRating_t_943493473"); // 1
    Leg_9_set.insert("LegCreditRating_t_943493473");
    Leg_9.add_attribute("Rgstry", "LegInstrRegistry_t_258951775"); // 1
    Leg_9_set.insert("LegInstrRegistry_t_258951775");
    Leg_9.add_attribute("Ctry", "87156060"); // 1
    Leg_9_set.insert("87156060");
    Leg_9.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_711863866"); // 1
    Leg_9_set.insert("LegStateOrProvinceOfIssue_t_711863866");
    Leg_9.add_attribute("Lcl", "LegLocaleOfIssue_t_576707883"); // 1
    Leg_9_set.insert("LegLocaleOfIssue_t_576707883");
    Leg_9.add_attribute("Redeem", "LegRedemptionDate_t_210407027"); // 1
    Leg_9_set.insert("LegRedemptionDate_t_210407027");
    Leg_9.add_attribute("Strk", "11542154.980000"); // 1
    Leg_9_set.insert("11542154.980000");
    Leg_9.add_attribute("StrkCcy", "GBP"); // 1
    Leg_9_set.insert("GBP");
    Leg_9.add_attribute("OptA", "1233040249"); // 1
    Leg_9_set.insert("1233040249");
    Leg_9.add_attribute("Cmult", "18240091.160000"); // 1
    Leg_9_set.insert("18240091.160000");
    Leg_9.add_attribute("MultTyp", "0"); // 1
    Leg_9_set.insert("0");
    Leg_9.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_9_set.insert("1");
    Leg_9.add_attribute("UOM", "Bcf"); // 1
    Leg_9_set.insert("Bcf");
    Leg_9.add_attribute("UOMQty", "18155316.810000"); // 1
    Leg_9_set.insert("18155316.810000");
    Leg_9.add_attribute("PxUOM", "Alw"); // 1
    Leg_9_set.insert("Alw");
    Leg_9.add_attribute("PxUOMQty", "18208839.370000"); // 1
    Leg_9_set.insert("18208839.370000");
    Leg_9.add_attribute("TmUnit", "Mo"); // 1
    Leg_9_set.insert("Mo");
    Leg_9.add_attribute("ExerStyle", "1"); // 1
    Leg_9_set.insert("1");
    Leg_9.add_attribute("CpnRt", "7137558.290000"); // 1
    Leg_9_set.insert("7137558.290000");
    Leg_9.add_attribute("Exch", "LegSecurityExchange_t_1562375414"); // 1
    Leg_9_set.insert("LegSecurityExchange_t_1562375414");
    Leg_9.add_attribute("Issr", "LegIssuer_t_471542851"); // 1
    Leg_9_set.insert("LegIssuer_t_471542851");
    Leg_9.add_attribute("EncLegIssrLen", "2078912328"); // 1
    Leg_9_set.insert("2078912328");
    Leg_9.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1247227809"); // 1
    Leg_9_set.insert("EncodedLegIssuer_t_1247227809");
    Leg_9.add_attribute("Desc", "LegSecurityDesc_t_797556322"); // 1
    Leg_9_set.insert("LegSecurityDesc_t_797556322");
    Leg_9.add_attribute("EncLegSecDescLen", "1222848021"); // 1
    Leg_9_set.insert("1222848021");
    Leg_9.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_269186330"); // 1
    Leg_9_set.insert("EncodedLegSecurityDesc_t_269186330");
    Leg_9.add_attribute("RatioQty", "1670354.130000"); // 1
    Leg_9_set.insert("1670354.130000");
    Leg_9.add_attribute("Side", "7"); // 1
    Leg_9_set.insert("7");
    Leg_9.add_attribute("Ccy", "CHF"); // 1
    Leg_9_set.insert("CHF");
    Leg_9.add_attribute("Pool", "LegPool_t_270967528"); // 1
    Leg_9_set.insert("LegPool_t_270967528");
    Leg_9.add_attribute("Dated", "LegDatedDate_t_1285051774"); // 1
    Leg_9_set.insert("LegDatedDate_t_1285051774");
    Leg_9.add_attribute("CSetMo", "103219887"); // 1
    Leg_9_set.insert("103219887");
    Leg_9.add_attribute("IntAcrl", "LegInterestAccrualDate_t_982831394"); // 1
    Leg_9_set.insert("LegInterestAccrualDate_t_982831394");
    Leg_9.add_attribute("PutCall", "1861759657"); // 1
    Leg_9_set.insert("1861759657");
    Leg_9.add_attribute("LegOptionRatio", "3136269.150000"); // 1
    Leg_9_set.insert("3136269.150000");
    Leg_9.add_attribute("Px", "21370468.920000"); // 1
    Leg_9_set.insert("21370468.920000");
    all_values.push_back(Leg_9_set);
    all_compo_names.insert("Leg_9_set");

    {
      xml_element LegAID_9{"LegAID"};
      multiset<string> LegAID_9_set;
      LegAID_9.add_attribute("SecAltID", "LegSecurityAltID_t_1862900774"); // 2
      LegAID_9_set.insert("LegSecurityAltID_t_1862900774");
      LegAID_9.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_9_set.insert("4");
      all_values.push_back(LegAID_9_set);
      all_compo_names.insert("LegAID_9_set");

      Leg_9.add_element(LegAID_9);
    }
    elt.add_element(Leg_9);
  } // end Leg
  { // Undly
    xml_element Undly_6{"Undly"};
    multiset<string> Undly_6_set;
    Undly_6.add_attribute("Sym", "UnderlyingSymbol_t_1539426242"); // 1
    Undly_6_set.insert("UnderlyingSymbol_t_1539426242");
    Undly_6.add_attribute("Sfx", "WI"); // 1
    Undly_6_set.insert("WI");
    Undly_6.add_attribute("ID", "UnderlyingSecurityID_t_163261051"); // 1
    Undly_6_set.insert("UnderlyingSecurityID_t_163261051");
    Undly_6.add_attribute("Src", "5"); // 1
    Undly_6_set.insert("5");
    Undly_6.add_attribute("Prod", "9"); // 1
    Undly_6_set.insert("9");
    Undly_6.add_attribute("CFI", "UnderlyingCFICode_t_2025699420"); // 1
    Undly_6_set.insert("UnderlyingCFICode_t_2025699420");
    Undly_6.add_attribute("SecTyp", "CMO"); // 1
    Undly_6_set.insert("CMO");
    Undly_6.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1683677418"); // 1
    Undly_6_set.insert("UnderlyingSecuritySubType_t_1683677418");
    Undly_6.add_attribute("MMY", "473616603"); // 1
    Undly_6_set.insert("473616603");
    Undly_6.add_attribute("Mat", "UnderlyingMaturityDate_t_1199272153"); // 1
    Undly_6_set.insert("UnderlyingMaturityDate_t_1199272153");
    Undly_6.add_attribute("MatTm", "1098569184"); // 1
    Undly_6_set.insert("1098569184");
    Undly_6.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_945159454"); // 1
    Undly_6_set.insert("UnderlyingCouponPaymentDate_t_945159454");
    Undly_6.add_attribute("RestrctTyp", "MR"); // 1
    Undly_6_set.insert("MR");
    Undly_6.add_attribute("Snrty", "SR"); // 1
    Undly_6_set.insert("SR");
    Undly_6.add_attribute("NotlPctOut", "17427157.770000"); // 1
    Undly_6_set.insert("17427157.770000");
    Undly_6.add_attribute("OrigNotlPctOut", "2060652.060000"); // 1
    Undly_6_set.insert("2060652.060000");
    Undly_6.add_attribute("AttchPnt", "4674996.750000"); // 1
    Undly_6_set.insert("4674996.750000");
    Undly_6.add_attribute("DetchPnt", "19097511.900000"); // 1
    Undly_6_set.insert("19097511.900000");
    Undly_6.add_attribute("Issued", "UnderlyingIssueDate_t_1681022909"); // 1
    Undly_6_set.insert("UnderlyingIssueDate_t_1681022909");
    Undly_6.add_attribute("RepoCollSecTyp", "1493599675"); // 1
    Undly_6_set.insert("1493599675");
    Undly_6.add_attribute("RepoTrm", "1925815018"); // 1
    Undly_6_set.insert("1925815018");
    Undly_6.add_attribute("RepoRt", "19519904.370000"); // 1
    Undly_6_set.insert("19519904.370000");
    Undly_6.add_attribute("Fctr", "6311678.010000"); // 1
    Undly_6_set.insert("6311678.010000");
    Undly_6.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2029034905"); // 1
    Undly_6_set.insert("UnderlyingCreditRating_t_2029034905");
    Undly_6.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_787338183"); // 1
    Undly_6_set.insert("UnderlyingInstrRegistry_t_787338183");
    Undly_6.add_attribute("Ctry", "345443811"); // 1
    Undly_6_set.insert("345443811");
    Undly_6.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_195178172"); // 1
    Undly_6_set.insert("UnderlyingStateOrProvinceOfIssue_t_195178172");
    Undly_6.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_776901427"); // 1
    Undly_6_set.insert("UnderlyingLocaleOfIssue_t_776901427");
    Undly_6.add_attribute("Redeem", "UnderlyingRedemptionDate_t_60860937"); // 1
    Undly_6_set.insert("UnderlyingRedemptionDate_t_60860937");
    Undly_6.add_attribute("StrkPx", "17034918.610000"); // 1
    Undly_6_set.insert("17034918.610000");
    Undly_6.add_attribute("StrkCcy", "CAN"); // 1
    Undly_6_set.insert("CAN");
    Undly_6.add_attribute("OptA", "909243729"); // 1
    Undly_6_set.insert("909243729");
    Undly_6.add_attribute("Mult", "152823.230000"); // 1
    Undly_6_set.insert("152823.230000");
    Undly_6.add_attribute("MultTyp", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("UOM", "oz_tr"); // 1
    Undly_6_set.insert("oz_tr");
    Undly_6.add_attribute("UOMQty", "7504358.880000"); // 1
    Undly_6_set.insert("7504358.880000");
    Undly_6.add_attribute("PxUOM", "MWh"); // 1
    Undly_6_set.insert("MWh");
    Undly_6.add_attribute("PxUOMQty", "3671146.980000"); // 1
    Undly_6_set.insert("3671146.980000");
    Undly_6.add_attribute("TmUnit", "Min"); // 1
    Undly_6_set.insert("Min");
    Undly_6.add_attribute("ExerStyle", "1"); // 1
    Undly_6_set.insert("1");
    Undly_6.add_attribute("CpnRt", "13122741.530000"); // 1
    Undly_6_set.insert("13122741.530000");
    Undly_6.add_attribute("Exch", "UnderlyingSecurityExchange_t_932925226"); // 1
    Undly_6_set.insert("UnderlyingSecurityExchange_t_932925226");
    Undly_6.add_attribute("Issr", "UnderlyingIssuer_t_616119930"); // 1
    Undly_6_set.insert("UnderlyingIssuer_t_616119930");
    Undly_6.add_attribute("EncUndIssrLen", "907506282"); // 1
    Undly_6_set.insert("907506282");
    Undly_6.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1138990433"); // 1
    Undly_6_set.insert("EncodedUnderlyingIssuer_t_1138990433");
    Undly_6.add_attribute("Desc", "UnderlyingSecurityDesc_t_1083619605"); // 1
    Undly_6_set.insert("UnderlyingSecurityDesc_t_1083619605");
    Undly_6.add_attribute("EncUndSecDescLen", "669773824"); // 1
    Undly_6_set.insert("669773824");
    Undly_6.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_672529694"); // 1
    Undly_6_set.insert("EncodedUnderlyingSecurityDesc_t_672529694");
    Undly_6.add_attribute("CPPgm", "UnderlyingCPProgram_t_429735632"); // 1
    Undly_6_set.insert("UnderlyingCPProgram_t_429735632");
    Undly_6.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_448105194"); // 1
    Undly_6_set.insert("UnderlyingCPRegType_t_448105194");
    Undly_6.add_attribute("AllocPct", "4770364.830000"); // 1
    Undly_6_set.insert("4770364.830000");
    Undly_6.add_attribute("Ccy", "USD"); // 1
    Undly_6_set.insert("USD");
    Undly_6.add_attribute("Qty", "12643746.660000"); // 1
    Undly_6_set.insert("12643746.660000");
    Undly_6.add_attribute("SettlTyp", "2"); // 1
    Undly_6_set.insert("2");
    Undly_6.add_attribute("CashAmt", "UnderlyingCashAmount_t_524834624"); // 1
    Undly_6_set.insert("UnderlyingCashAmount_t_524834624");
    Undly_6.add_attribute("CashTyp", "DIFF"); // 1
    Undly_6_set.insert("DIFF");
    Undly_6.add_attribute("Px", "14672081.820000"); // 1
    Undly_6_set.insert("14672081.820000");
    Undly_6.add_attribute("DirtPx", "808428.380000"); // 1
    Undly_6_set.insert("808428.380000");
    Undly_6.add_attribute("EndPx", "18932973.650000"); // 1
    Undly_6_set.insert("18932973.650000");
    Undly_6.add_attribute("StartVal", "UnderlyingStartValue_t_920011713"); // 1
    Undly_6_set.insert("UnderlyingStartValue_t_920011713");
    Undly_6.add_attribute("CurVal", "UnderlyingCurrentValue_t_990086567"); // 1
    Undly_6_set.insert("UnderlyingCurrentValue_t_990086567");
    Undly_6.add_attribute("EndVal", "UnderlyingEndValue_t_1908579688"); // 1
    Undly_6_set.insert("UnderlyingEndValue_t_1908579688");
    Undly_6.add_attribute("AdjQty", "11849312.780000"); // 1
    Undly_6_set.insert("11849312.780000");
    Undly_6.add_attribute("FxRate", "7731301.960000"); // 1
    Undly_6_set.insert("7731301.960000");
    Undly_6.add_attribute("FxRateCalc", "D"); // 1
    Undly_6_set.insert("D");
    Undly_6.add_attribute("CapValu", "UnderlyingCapValue_t_1935367166"); // 1
    Undly_6_set.insert("UnderlyingCapValue_t_1935367166");
    Undly_6.add_attribute("SetMeth", "UnderlyingSettlMethod_t_92367596"); // 1
    Undly_6_set.insert("UnderlyingSettlMethod_t_92367596");
    Undly_6.add_attribute("PutCall", "21708834"); // 1
    Undly_6_set.insert("21708834");
    all_values.push_back(Undly_6_set);
    all_compo_names.insert("Undly_6_set");

    {
      xml_element UndAID_6{"UndAID"};
      multiset<string> UndAID_6_set;
      UndAID_6.add_attribute("AltID", "UnderlyingSecurityAltID_t_1737591560"); // 2
      UndAID_6_set.insert("UnderlyingSecurityAltID_t_1737591560");
      UndAID_6.add_attribute("AltIDSrc", "C"); // 2
      UndAID_6_set.insert("C");
      all_values.push_back(UndAID_6_set);
      all_compo_names.insert("UndAID_6_set");

      Undly_6.add_element(UndAID_6);
    }
    {
      xml_element Stip_12{"Stip"};
      multiset<string> Stip_12_set;
      Stip_12.add_attribute("Typ", "MINQTY"); // 2
      Stip_12_set.insert("MINQTY");
      Stip_12.add_attribute("Val", "UnderlyingStipValue_t_523033138"); // 2
      Stip_12_set.insert("UnderlyingStipValue_t_523033138");
      all_values.push_back(Stip_12_set);
      all_compo_names.insert("Stip_12_set");

      Undly_6.add_element(Stip_12);
    }
    {
      xml_element Pty_59{"Pty"};
      multiset<string> Pty_59_set;
      Pty_59.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1126294111"); // 2
      Pty_59_set.insert("UnderlyingInstrumentPartyID_t_1126294111");
      Pty_59.add_attribute("Src", "A"); // 2
      Pty_59_set.insert("A");
      Pty_59.add_attribute("R", "77"); // 2
      Pty_59_set.insert("77");
      all_values.push_back(Pty_59_set);
      all_compo_names.insert("Pty_59_set");

      {
        xml_element Sub_59{"Sub"};
        multiset<string> Sub_59_set;
        Sub_59.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_62430068"); // 3
        Sub_59_set.insert("UnderlyingInstrumentPartySubID_t_62430068");
        Sub_59.add_attribute("Typ", "6"); // 3
        Sub_59_set.insert("6");
        all_values.push_back(Sub_59_set);
        all_compo_names.insert("Sub_59_set");

        Pty_59.add_element(Sub_59);
      }
      Undly_6.add_element(Pty_59);
    }
    elt.add_element(Undly_6);
  } // end Undly
  { // Undly
    xml_element Undly_7{"Undly"};
    multiset<string> Undly_7_set;
    Undly_7.add_attribute("Sym", "UnderlyingSymbol_t_187069617"); // 1
    Undly_7_set.insert("UnderlyingSymbol_t_187069617");
    Undly_7.add_attribute("Sfx", "WI"); // 1
    Undly_7_set.insert("WI");
    Undly_7.add_attribute("ID", "UnderlyingSecurityID_t_1211884640"); // 1
    Undly_7_set.insert("UnderlyingSecurityID_t_1211884640");
    Undly_7.add_attribute("Src", "K"); // 1
    Undly_7_set.insert("K");
    Undly_7.add_attribute("Prod", "4"); // 1
    Undly_7_set.insert("4");
    Undly_7.add_attribute("CFI", "UnderlyingCFICode_t_1541541092"); // 1
    Undly_7_set.insert("UnderlyingCFICode_t_1541541092");
    Undly_7.add_attribute("SecTyp", "MF"); // 1
    Undly_7_set.insert("MF");
    Undly_7.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_811932732"); // 1
    Undly_7_set.insert("UnderlyingSecuritySubType_t_811932732");
    Undly_7.add_attribute("MMY", "2066375716"); // 1
    Undly_7_set.insert("2066375716");
    Undly_7.add_attribute("Mat", "UnderlyingMaturityDate_t_1822273211"); // 1
    Undly_7_set.insert("UnderlyingMaturityDate_t_1822273211");
    Undly_7.add_attribute("MatTm", "131657266"); // 1
    Undly_7_set.insert("131657266");
    Undly_7.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2147218554"); // 1
    Undly_7_set.insert("UnderlyingCouponPaymentDate_t_2147218554");
    Undly_7.add_attribute("RestrctTyp", "FR"); // 1
    Undly_7_set.insert("FR");
    Undly_7.add_attribute("Snrty", "SR"); // 1
    Undly_7_set.insert("SR");
    Undly_7.add_attribute("NotlPctOut", "9898214.730000"); // 1
    Undly_7_set.insert("9898214.730000");
    Undly_7.add_attribute("OrigNotlPctOut", "13291829.680000"); // 1
    Undly_7_set.insert("13291829.680000");
    Undly_7.add_attribute("AttchPnt", "891166.090000"); // 1
    Undly_7_set.insert("891166.090000");
    Undly_7.add_attribute("DetchPnt", "17629516.700000"); // 1
    Undly_7_set.insert("17629516.700000");
    Undly_7.add_attribute("Issued", "UnderlyingIssueDate_t_983777104"); // 1
    Undly_7_set.insert("UnderlyingIssueDate_t_983777104");
    Undly_7.add_attribute("RepoCollSecTyp", "2024483775"); // 1
    Undly_7_set.insert("2024483775");
    Undly_7.add_attribute("RepoTrm", "1855319266"); // 1
    Undly_7_set.insert("1855319266");
    Undly_7.add_attribute("RepoRt", "10054859.380000"); // 1
    Undly_7_set.insert("10054859.380000");
    Undly_7.add_attribute("Fctr", "16145916.870000"); // 1
    Undly_7_set.insert("16145916.870000");
    Undly_7.add_attribute("CrdRtg", "UnderlyingCreditRating_t_218009799"); // 1
    Undly_7_set.insert("UnderlyingCreditRating_t_218009799");
    Undly_7.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_191985277"); // 1
    Undly_7_set.insert("UnderlyingInstrRegistry_t_191985277");
    Undly_7.add_attribute("Ctry", "2137624826"); // 1
    Undly_7_set.insert("2137624826");
    Undly_7.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1344303910"); // 1
    Undly_7_set.insert("UnderlyingStateOrProvinceOfIssue_t_1344303910");
    Undly_7.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_285990898"); // 1
    Undly_7_set.insert("UnderlyingLocaleOfIssue_t_285990898");
    Undly_7.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1652164749"); // 1
    Undly_7_set.insert("UnderlyingRedemptionDate_t_1652164749");
    Undly_7.add_attribute("StrkPx", "14067339.790000"); // 1
    Undly_7_set.insert("14067339.790000");
    Undly_7.add_attribute("StrkCcy", "EUR"); // 1
    Undly_7_set.insert("EUR");
    Undly_7.add_attribute("OptA", "1898899680"); // 1
    Undly_7_set.insert("1898899680");
    Undly_7.add_attribute("Mult", "1141713.350000"); // 1
    Undly_7_set.insert("1141713.350000");
    Undly_7.add_attribute("MultTyp", "2"); // 1
    Undly_7_set.insert("2");
    Undly_7.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_7_set.insert("2");
    Undly_7.add_attribute("UOM", "tn"); // 1
    Undly_7_set.insert("tn");
    Undly_7.add_attribute("UOMQty", "1368539.380000"); // 1
    Undly_7_set.insert("1368539.380000");
    Undly_7.add_attribute("PxUOM", "Bu"); // 1
    Undly_7_set.insert("Bu");
    Undly_7.add_attribute("PxUOMQty", "15746044.960000"); // 1
    Undly_7_set.insert("15746044.960000");
    Undly_7.add_attribute("TmUnit", "S"); // 1
    Undly_7_set.insert("S");
    Undly_7.add_attribute("ExerStyle", "2"); // 1
    Undly_7_set.insert("2");
    Undly_7.add_attribute("CpnRt", "15743394.020000"); // 1
    Undly_7_set.insert("15743394.020000");
    Undly_7.add_attribute("Exch", "UnderlyingSecurityExchange_t_1379730430"); // 1
    Undly_7_set.insert("UnderlyingSecurityExchange_t_1379730430");
    Undly_7.add_attribute("Issr", "UnderlyingIssuer_t_1152260496"); // 1
    Undly_7_set.insert("UnderlyingIssuer_t_1152260496");
    Undly_7.add_attribute("EncUndIssrLen", "416677228"); // 1
    Undly_7_set.insert("416677228");
    Undly_7.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_561429750"); // 1
    Undly_7_set.insert("EncodedUnderlyingIssuer_t_561429750");
    Undly_7.add_attribute("Desc", "UnderlyingSecurityDesc_t_1241377105"); // 1
    Undly_7_set.insert("UnderlyingSecurityDesc_t_1241377105");
    Undly_7.add_attribute("EncUndSecDescLen", "32145250"); // 1
    Undly_7_set.insert("32145250");
    Undly_7.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1545206854"); // 1
    Undly_7_set.insert("EncodedUnderlyingSecurityDesc_t_1545206854");
    Undly_7.add_attribute("CPPgm", "UnderlyingCPProgram_t_1118377232"); // 1
    Undly_7_set.insert("UnderlyingCPProgram_t_1118377232");
    Undly_7.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1887464516"); // 1
    Undly_7_set.insert("UnderlyingCPRegType_t_1887464516");
    Undly_7.add_attribute("AllocPct", "4032091.440000"); // 1
    Undly_7_set.insert("4032091.440000");
    Undly_7.add_attribute("Ccy", "USD"); // 1
    Undly_7_set.insert("USD");
    Undly_7.add_attribute("Qty", "5951944.210000"); // 1
    Undly_7_set.insert("5951944.210000");
    Undly_7.add_attribute("SettlTyp", "4"); // 1
    Undly_7_set.insert("4");
    Undly_7.add_attribute("CashAmt", "UnderlyingCashAmount_t_1302294578"); // 1
    Undly_7_set.insert("UnderlyingCashAmount_t_1302294578");
    Undly_7.add_attribute("CashTyp", "DIFF"); // 1
    Undly_7_set.insert("DIFF");
    Undly_7.add_attribute("Px", "803075.510000"); // 1
    Undly_7_set.insert("803075.510000");
    Undly_7.add_attribute("DirtPx", "5615449.090000"); // 1
    Undly_7_set.insert("5615449.090000");
    Undly_7.add_attribute("EndPx", "19309556.630000"); // 1
    Undly_7_set.insert("19309556.630000");
    Undly_7.add_attribute("StartVal", "UnderlyingStartValue_t_1919541918"); // 1
    Undly_7_set.insert("UnderlyingStartValue_t_1919541918");
    Undly_7.add_attribute("CurVal", "UnderlyingCurrentValue_t_312960941"); // 1
    Undly_7_set.insert("UnderlyingCurrentValue_t_312960941");
    Undly_7.add_attribute("EndVal", "UnderlyingEndValue_t_2045126998"); // 1
    Undly_7_set.insert("UnderlyingEndValue_t_2045126998");
    Undly_7.add_attribute("AdjQty", "1279150.900000"); // 1
    Undly_7_set.insert("1279150.900000");
    Undly_7.add_attribute("FxRate", "16174461.080000"); // 1
    Undly_7_set.insert("16174461.080000");
    Undly_7.add_attribute("FxRateCalc", "M"); // 1
    Undly_7_set.insert("M");
    Undly_7.add_attribute("CapValu", "UnderlyingCapValue_t_264769028"); // 1
    Undly_7_set.insert("UnderlyingCapValue_t_264769028");
    Undly_7.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1586380359"); // 1
    Undly_7_set.insert("UnderlyingSettlMethod_t_1586380359");
    Undly_7.add_attribute("PutCall", "980476626"); // 1
    Undly_7_set.insert("980476626");
    all_values.push_back(Undly_7_set);
    all_compo_names.insert("Undly_7_set");

    {
      xml_element UndAID_7{"UndAID"};
      multiset<string> UndAID_7_set;
      UndAID_7.add_attribute("AltID", "UnderlyingSecurityAltID_t_76412529"); // 2
      UndAID_7_set.insert("UnderlyingSecurityAltID_t_76412529");
      UndAID_7.add_attribute("AltIDSrc", "J"); // 2
      UndAID_7_set.insert("J");
      all_values.push_back(UndAID_7_set);
      all_compo_names.insert("UndAID_7_set");

      Undly_7.add_element(UndAID_7);
    }
    {
      xml_element Stip_13{"Stip"};
      multiset<string> Stip_13_set;
      Stip_13.add_attribute("Typ", "AVFICO"); // 2
      Stip_13_set.insert("AVFICO");
      Stip_13.add_attribute("Val", "UnderlyingStipValue_t_1456142959"); // 2
      Stip_13_set.insert("UnderlyingStipValue_t_1456142959");
      all_values.push_back(Stip_13_set);
      all_compo_names.insert("Stip_13_set");

      Undly_7.add_element(Stip_13);
    }
    {
      xml_element Pty_60{"Pty"};
      multiset<string> Pty_60_set;
      Pty_60.add_attribute("ID", "UnderlyingInstrumentPartyID_t_691748724"); // 2
      Pty_60_set.insert("UnderlyingInstrumentPartyID_t_691748724");
      Pty_60.add_attribute("Src", "B"); // 2
      Pty_60_set.insert("B");
      Pty_60.add_attribute("R", "64"); // 2
      Pty_60_set.insert("64");
      all_values.push_back(Pty_60_set);
      all_compo_names.insert("Pty_60_set");

      {
        xml_element Sub_60{"Sub"};
        multiset<string> Sub_60_set;
        Sub_60.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1933125829"); // 3
        Sub_60_set.insert("UnderlyingInstrumentPartySubID_t_1933125829");
        Sub_60.add_attribute("Typ", "4"); // 3
        Sub_60_set.insert("4");
        all_values.push_back(Sub_60_set);
        all_compo_names.insert("Sub_60_set");

        Pty_60.add_element(Sub_60);
      }
      Undly_7.add_element(Pty_60);
    }
    elt.add_element(Undly_7);
  } // end Undly
  { // Undly
    xml_element Undly_8{"Undly"};
    multiset<string> Undly_8_set;
    Undly_8.add_attribute("Sym", "UnderlyingSymbol_t_1415295916"); // 1
    Undly_8_set.insert("UnderlyingSymbol_t_1415295916");
    Undly_8.add_attribute("Sfx", "CD"); // 1
    Undly_8_set.insert("CD");
    Undly_8.add_attribute("ID", "UnderlyingSecurityID_t_596135727"); // 1
    Undly_8_set.insert("UnderlyingSecurityID_t_596135727");
    Undly_8.add_attribute("Src", "M"); // 1
    Undly_8_set.insert("M");
    Undly_8.add_attribute("Prod", "4"); // 1
    Undly_8_set.insert("4");
    Undly_8.add_attribute("CFI", "UnderlyingCFICode_t_554126395"); // 1
    Undly_8_set.insert("UnderlyingCFICode_t_554126395");
    Undly_8.add_attribute("SecTyp", "MT"); // 1
    Undly_8_set.insert("MT");
    Undly_8.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2065131136"); // 1
    Undly_8_set.insert("UnderlyingSecuritySubType_t_2065131136");
    Undly_8.add_attribute("MMY", "1856420973"); // 1
    Undly_8_set.insert("1856420973");
    Undly_8.add_attribute("Mat", "UnderlyingMaturityDate_t_1147401154"); // 1
    Undly_8_set.insert("UnderlyingMaturityDate_t_1147401154");
    Undly_8.add_attribute("MatTm", "2145438687"); // 1
    Undly_8_set.insert("2145438687");
    Undly_8.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_270482235"); // 1
    Undly_8_set.insert("UnderlyingCouponPaymentDate_t_270482235");
    Undly_8.add_attribute("RestrctTyp", "MR"); // 1
    Undly_8_set.insert("MR");
    Undly_8.add_attribute("Snrty", "SB"); // 1
    Undly_8_set.insert("SB");
    Undly_8.add_attribute("NotlPctOut", "5834431.760000"); // 1
    Undly_8_set.insert("5834431.760000");
    Undly_8.add_attribute("OrigNotlPctOut", "8285165.190000"); // 1
    Undly_8_set.insert("8285165.190000");
    Undly_8.add_attribute("AttchPnt", "20454120.480000"); // 1
    Undly_8_set.insert("20454120.480000");
    Undly_8.add_attribute("DetchPnt", "534056.370000"); // 1
    Undly_8_set.insert("534056.370000");
    Undly_8.add_attribute("Issued", "UnderlyingIssueDate_t_234388649"); // 1
    Undly_8_set.insert("UnderlyingIssueDate_t_234388649");
    Undly_8.add_attribute("RepoCollSecTyp", "162697428"); // 1
    Undly_8_set.insert("162697428");
    Undly_8.add_attribute("RepoTrm", "1639785996"); // 1
    Undly_8_set.insert("1639785996");
    Undly_8.add_attribute("RepoRt", "12148652.750000"); // 1
    Undly_8_set.insert("12148652.750000");
    Undly_8.add_attribute("Fctr", "2391099.570000"); // 1
    Undly_8_set.insert("2391099.570000");
    Undly_8.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1179274225"); // 1
    Undly_8_set.insert("UnderlyingCreditRating_t_1179274225");
    Undly_8.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1622197656"); // 1
    Undly_8_set.insert("UnderlyingInstrRegistry_t_1622197656");
    Undly_8.add_attribute("Ctry", "1695252917"); // 1
    Undly_8_set.insert("1695252917");
    Undly_8.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1871022949"); // 1
    Undly_8_set.insert("UnderlyingStateOrProvinceOfIssue_t_1871022949");
    Undly_8.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_298723616"); // 1
    Undly_8_set.insert("UnderlyingLocaleOfIssue_t_298723616");
    Undly_8.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1565341979"); // 1
    Undly_8_set.insert("UnderlyingRedemptionDate_t_1565341979");
    Undly_8.add_attribute("StrkPx", "16566651.310000"); // 1
    Undly_8_set.insert("16566651.310000");
    Undly_8.add_attribute("StrkCcy", "EUR"); // 1
    Undly_8_set.insert("EUR");
    Undly_8.add_attribute("OptA", "413200897"); // 1
    Undly_8_set.insert("413200897");
    Undly_8.add_attribute("Mult", "17510142.020000"); // 1
    Undly_8_set.insert("17510142.020000");
    Undly_8.add_attribute("MultTyp", "1"); // 1
    Undly_8_set.insert("1");
    Undly_8.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_8_set.insert("3");
    Undly_8.add_attribute("UOM", "oz_tr"); // 1
    Undly_8_set.insert("oz_tr");
    Undly_8.add_attribute("UOMQty", "7703914.950000"); // 1
    Undly_8_set.insert("7703914.950000");
    Undly_8.add_attribute("PxUOM", "t"); // 1
    Undly_8_set.insert("t");
    Undly_8.add_attribute("PxUOMQty", "20140779.220000"); // 1
    Undly_8_set.insert("20140779.220000");
    Undly_8.add_attribute("TmUnit", "D"); // 1
    Undly_8_set.insert("D");
    Undly_8.add_attribute("ExerStyle", "1"); // 1
    Undly_8_set.insert("1");
    Undly_8.add_attribute("CpnRt", "1370765.090000"); // 1
    Undly_8_set.insert("1370765.090000");
    Undly_8.add_attribute("Exch", "UnderlyingSecurityExchange_t_701182170"); // 1
    Undly_8_set.insert("UnderlyingSecurityExchange_t_701182170");
    Undly_8.add_attribute("Issr", "UnderlyingIssuer_t_1588321420"); // 1
    Undly_8_set.insert("UnderlyingIssuer_t_1588321420");
    Undly_8.add_attribute("EncUndIssrLen", "720519686"); // 1
    Undly_8_set.insert("720519686");
    Undly_8.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1529698689"); // 1
    Undly_8_set.insert("EncodedUnderlyingIssuer_t_1529698689");
    Undly_8.add_attribute("Desc", "UnderlyingSecurityDesc_t_1486249820"); // 1
    Undly_8_set.insert("UnderlyingSecurityDesc_t_1486249820");
    Undly_8.add_attribute("EncUndSecDescLen", "773925323"); // 1
    Undly_8_set.insert("773925323");
    Undly_8.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1764087339"); // 1
    Undly_8_set.insert("EncodedUnderlyingSecurityDesc_t_1764087339");
    Undly_8.add_attribute("CPPgm", "UnderlyingCPProgram_t_1648947248"); // 1
    Undly_8_set.insert("UnderlyingCPProgram_t_1648947248");
    Undly_8.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_266227671"); // 1
    Undly_8_set.insert("UnderlyingCPRegType_t_266227671");
    Undly_8.add_attribute("AllocPct", "8314689.660000"); // 1
    Undly_8_set.insert("8314689.660000");
    Undly_8.add_attribute("Ccy", "JPY"); // 1
    Undly_8_set.insert("JPY");
    Undly_8.add_attribute("Qty", "3061829.740000"); // 1
    Undly_8_set.insert("3061829.740000");
    Undly_8.add_attribute("SettlTyp", "2"); // 1
    Undly_8_set.insert("2");
    Undly_8.add_attribute("CashAmt", "UnderlyingCashAmount_t_1169041198"); // 1
    Undly_8_set.insert("UnderlyingCashAmount_t_1169041198");
    Undly_8.add_attribute("CashTyp", "DIFF"); // 1
    Undly_8_set.insert("DIFF");
    Undly_8.add_attribute("Px", "8536848.060000"); // 1
    Undly_8_set.insert("8536848.060000");
    Undly_8.add_attribute("DirtPx", "6782226.810000"); // 1
    Undly_8_set.insert("6782226.810000");
    Undly_8.add_attribute("EndPx", "17597850.660000"); // 1
    Undly_8_set.insert("17597850.660000");
    Undly_8.add_attribute("StartVal", "UnderlyingStartValue_t_1686839053"); // 1
    Undly_8_set.insert("UnderlyingStartValue_t_1686839053");
    Undly_8.add_attribute("CurVal", "UnderlyingCurrentValue_t_1091423578"); // 1
    Undly_8_set.insert("UnderlyingCurrentValue_t_1091423578");
    Undly_8.add_attribute("EndVal", "UnderlyingEndValue_t_1363315620"); // 1
    Undly_8_set.insert("UnderlyingEndValue_t_1363315620");
    Undly_8.add_attribute("AdjQty", "435310.660000"); // 1
    Undly_8_set.insert("435310.660000");
    Undly_8.add_attribute("FxRate", "8466455.130000"); // 1
    Undly_8_set.insert("8466455.130000");
    Undly_8.add_attribute("FxRateCalc", "D"); // 1
    Undly_8_set.insert("D");
    Undly_8.add_attribute("CapValu", "UnderlyingCapValue_t_813922561"); // 1
    Undly_8_set.insert("UnderlyingCapValue_t_813922561");
    Undly_8.add_attribute("SetMeth", "UnderlyingSettlMethod_t_519514936"); // 1
    Undly_8_set.insert("UnderlyingSettlMethod_t_519514936");
    Undly_8.add_attribute("PutCall", "1387566843"); // 1
    Undly_8_set.insert("1387566843");
    all_values.push_back(Undly_8_set);
    all_compo_names.insert("Undly_8_set");

    {
      xml_element UndAID_8{"UndAID"};
      multiset<string> UndAID_8_set;
      UndAID_8.add_attribute("AltID", "UnderlyingSecurityAltID_t_584231562"); // 2
      UndAID_8_set.insert("UnderlyingSecurityAltID_t_584231562");
      UndAID_8.add_attribute("AltIDSrc", "J"); // 2
      UndAID_8_set.insert("J");
      all_values.push_back(UndAID_8_set);
      all_compo_names.insert("UndAID_8_set");

      Undly_8.add_element(UndAID_8);
    }
    {
      xml_element Stip_14{"Stip"};
      multiset<string> Stip_14_set;
      Stip_14.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_14_set.insert("MAXORDQTY");
      Stip_14.add_attribute("Val", "UnderlyingStipValue_t_1285413732"); // 2
      Stip_14_set.insert("UnderlyingStipValue_t_1285413732");
      all_values.push_back(Stip_14_set);
      all_compo_names.insert("Stip_14_set");

      Undly_8.add_element(Stip_14);
    }
    {
      xml_element Pty_61{"Pty"};
      multiset<string> Pty_61_set;
      Pty_61.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1778660819"); // 2
      Pty_61_set.insert("UnderlyingInstrumentPartyID_t_1778660819");
      Pty_61.add_attribute("Src", "G"); // 2
      Pty_61_set.insert("G");
      Pty_61.add_attribute("R", "52"); // 2
      Pty_61_set.insert("52");
      all_values.push_back(Pty_61_set);
      all_compo_names.insert("Pty_61_set");

      {
        xml_element Sub_61{"Sub"};
        multiset<string> Sub_61_set;
        Sub_61.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1117426991"); // 3
        Sub_61_set.insert("UnderlyingInstrumentPartySubID_t_1117426991");
        Sub_61.add_attribute("Typ", "11"); // 3
        Sub_61_set.insert("11");
        all_values.push_back(Sub_61_set);
        all_compo_names.insert("Sub_61_set");

        Pty_61.add_element(Sub_61);
      }
      Undly_8.add_element(Pty_61);
    }
    elt.add_element(Undly_8);
  } // end Undly
  { // Qty
    xml_element Qty_1{"Qty"};
    multiset<string> Qty_1_set;
    Qty_1.add_attribute("Typ", "DN"); // 1
    Qty_1_set.insert("DN");
    Qty_1.add_attribute("Long", "11378323.850000"); // 1
    Qty_1_set.insert("11378323.850000");
    Qty_1.add_attribute("Short", "11157014.310000"); // 1
    Qty_1_set.insert("11157014.310000");
    Qty_1.add_attribute("Stat", "1"); // 1
    Qty_1_set.insert("1");
    Qty_1.add_attribute("QtyDt", "QuantityDate_t_435850634"); // 1
    Qty_1_set.insert("QuantityDate_t_435850634");
    all_values.push_back(Qty_1_set);
    all_compo_names.insert("Qty_1_set");

    {
      xml_element Pty_62{"Pty"};
      multiset<string> Pty_62_set;
      Pty_62.add_attribute("ID", "NestedPartyID_t_1421884405"); // 2
      Pty_62_set.insert("NestedPartyID_t_1421884405");
      Pty_62.add_attribute("Src", "2"); // 2
      Pty_62_set.insert("2");
      Pty_62.add_attribute("R", "20"); // 2
      Pty_62_set.insert("20");
      all_values.push_back(Pty_62_set);
      all_compo_names.insert("Pty_62_set");

      {
        xml_element Sub_62{"Sub"};
        multiset<string> Sub_62_set;
        Sub_62.add_attribute("ID", "NestedPartySubID_t_2026790996"); // 3
        Sub_62_set.insert("NestedPartySubID_t_2026790996");
        Sub_62.add_attribute("Typ", "7"); // 3
        Sub_62_set.insert("7");
        all_values.push_back(Sub_62_set);
        all_compo_names.insert("Sub_62_set");

        Pty_62.add_element(Sub_62);
      }
      Qty_1.add_element(Pty_62);
    }
    elt.add_element(Qty_1);
  } // end Qty
  { // Qty
    xml_element Qty_2{"Qty"};
    multiset<string> Qty_2_set;
    Qty_2.add_attribute("Typ", "PIT"); // 1
    Qty_2_set.insert("PIT");
    Qty_2.add_attribute("Long", "16390924.140000"); // 1
    Qty_2_set.insert("16390924.140000");
    Qty_2.add_attribute("Short", "408471.880000"); // 1
    Qty_2_set.insert("408471.880000");
    Qty_2.add_attribute("Stat", "2"); // 1
    Qty_2_set.insert("2");
    Qty_2.add_attribute("QtyDt", "QuantityDate_t_854924386"); // 1
    Qty_2_set.insert("QuantityDate_t_854924386");
    all_values.push_back(Qty_2_set);
    all_compo_names.insert("Qty_2_set");

    {
      xml_element Pty_63{"Pty"};
      multiset<string> Pty_63_set;
      Pty_63.add_attribute("ID", "NestedPartyID_t_84378254"); // 2
      Pty_63_set.insert("NestedPartyID_t_84378254");
      Pty_63.add_attribute("Src", "3"); // 2
      Pty_63_set.insert("3");
      Pty_63.add_attribute("R", "12"); // 2
      Pty_63_set.insert("12");
      all_values.push_back(Pty_63_set);
      all_compo_names.insert("Pty_63_set");

      {
        xml_element Sub_63{"Sub"};
        multiset<string> Sub_63_set;
        Sub_63.add_attribute("ID", "NestedPartySubID_t_898300815"); // 3
        Sub_63_set.insert("NestedPartySubID_t_898300815");
        Sub_63.add_attribute("Typ", "21"); // 3
        Sub_63_set.insert("21");
        all_values.push_back(Sub_63_set);
        all_compo_names.insert("Sub_63_set");

        Pty_63.add_element(Sub_63);
      }
      Qty_2.add_element(Pty_63);
    }
    elt.add_element(Qty_2);
  } // end Qty
  { // Qty
    xml_element Qty_3{"Qty"};
    multiset<string> Qty_3_set;
    Qty_3.add_attribute("Typ", "RCV"); // 1
    Qty_3_set.insert("RCV");
    Qty_3.add_attribute("Long", "14825323.770000"); // 1
    Qty_3_set.insert("14825323.770000");
    Qty_3.add_attribute("Short", "6360706.420000"); // 1
    Qty_3_set.insert("6360706.420000");
    Qty_3.add_attribute("Stat", "2"); // 1
    Qty_3_set.insert("2");
    Qty_3.add_attribute("QtyDt", "QuantityDate_t_620462461"); // 1
    Qty_3_set.insert("QuantityDate_t_620462461");
    all_values.push_back(Qty_3_set);
    all_compo_names.insert("Qty_3_set");

    {
      xml_element Pty_64{"Pty"};
      multiset<string> Pty_64_set;
      Pty_64.add_attribute("ID", "NestedPartyID_t_267247813"); // 2
      Pty_64_set.insert("NestedPartyID_t_267247813");
      Pty_64.add_attribute("Src", "6"); // 2
      Pty_64_set.insert("6");
      Pty_64.add_attribute("R", "42"); // 2
      Pty_64_set.insert("42");
      all_values.push_back(Pty_64_set);
      all_compo_names.insert("Pty_64_set");

      {
        xml_element Sub_64{"Sub"};
        multiset<string> Sub_64_set;
        Sub_64.add_attribute("ID", "NestedPartySubID_t_1384674805"); // 3
        Sub_64_set.insert("NestedPartySubID_t_1384674805");
        Sub_64.add_attribute("Typ", "9"); // 3
        Sub_64_set.insert("9");
        all_values.push_back(Sub_64_set);
        all_compo_names.insert("Sub_64_set");

        Pty_64.add_element(Sub_64);
      }
      Qty_3.add_element(Pty_64);
    }
    elt.add_element(Qty_3);
  } // end Qty
  { // Amt
    xml_element Amt_7{"Amt"};
    multiset<string> Amt_7_set;
    Amt_7.add_attribute("Typ", "CMTM"); // 1
    Amt_7_set.insert("CMTM");
    Amt_7.add_attribute("Amt", "PosAmt_t_952772698"); // 1
    Amt_7_set.insert("PosAmt_t_952772698");
    Amt_7.add_attribute("Ccy", "PositionCurrency_t_540541482"); // 1
    Amt_7_set.insert("PositionCurrency_t_540541482");
    all_values.push_back(Amt_7_set);
    all_compo_names.insert("Amt_7_set");

    elt.add_element(Amt_7);
  } // end Amt
  { // Amt
    xml_element Amt_8{"Amt"};
    multiset<string> Amt_8_set;
    Amt_8.add_attribute("Typ", "IMTM"); // 1
    Amt_8_set.insert("IMTM");
    Amt_8.add_attribute("Amt", "PosAmt_t_1388623332"); // 1
    Amt_8_set.insert("PosAmt_t_1388623332");
    Amt_8.add_attribute("Ccy", "PositionCurrency_t_1962425888"); // 1
    Amt_8_set.insert("PositionCurrency_t_1962425888");
    all_values.push_back(Amt_8_set);
    all_compo_names.insert("Amt_8_set");

    elt.add_element(Amt_8);
  } // end Amt
  { // Amt
    xml_element Amt_9{"Amt"};
    multiset<string> Amt_9_set;
    Amt_9.add_attribute("Typ", "PREM"); // 1
    Amt_9_set.insert("PREM");
    Amt_9.add_attribute("Amt", "PosAmt_t_846031516"); // 1
    Amt_9_set.insert("PosAmt_t_846031516");
    Amt_9.add_attribute("Ccy", "PositionCurrency_t_1841733236"); // 1
    Amt_9_set.insert("PositionCurrency_t_1841733236");
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
