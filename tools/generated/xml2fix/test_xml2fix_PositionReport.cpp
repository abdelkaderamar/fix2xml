#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_2116395054"); // 0
  PositionReport_message_t_0.insert("PosMaintRptID_t_2116395054");
  elt.add_attribute("ReqID", "PosReqID_t_1355279346"); // 0
  PositionReport_message_t_0.insert("PosReqID_t_1355279346");
  elt.add_attribute("ReqTyp", "4"); // 0
  PositionReport_message_t_0.insert("4");
  elt.add_attribute("SubReqTyp", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("TotRpts", "787172610"); // 0
  PositionReport_message_t_0.insert("787172610");
  elt.add_attribute("Rslt", "99"); // 0
  PositionReport_message_t_0.insert("99");
  elt.add_attribute("Unsol", "Y"); // 0
  PositionReport_message_t_0.insert("Y");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1077708002"); // 0
  PositionReport_message_t_0.insert("ClearingBusinessDate_t_1077708002");
  elt.add_attribute("SetSesID", "ITD"); // 0
  PositionReport_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_593003211"); // 0
  PositionReport_message_t_0.insert("SettlSessSubID_t_593003211");
  elt.add_attribute("PxTyp", "16"); // 0
  PositionReport_message_t_0.insert("16");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  PositionReport_message_t_0.insert("CHF");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_444246854"); // 0
  PositionReport_message_t_0.insert("MessageEventSource_t_444246854");
  elt.add_attribute("Acct", "Account_t_86201696"); // 0
  PositionReport_message_t_0.insert("Account_t_86201696");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  PositionReport_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "6"); // 0
  PositionReport_message_t_0.insert("6");
  elt.add_attribute("Ccy", "EUR"); // 0
  PositionReport_message_t_0.insert("EUR");
  elt.add_attribute("SetPx", "1681165.080000"); // 0
  PositionReport_message_t_0.insert("1681165.080000");
  elt.add_attribute("SetPxTyp", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("PriSetPx", "16145757.570000"); // 0
  PositionReport_message_t_0.insert("16145757.570000");
  elt.add_attribute("MtchStat", "2"); // 0
  PositionReport_message_t_0.insert("2");
  elt.add_attribute("RegStat", "R"); // 0
  PositionReport_message_t_0.insert("R");
  elt.add_attribute("DlvDt", "DeliveryDate_t_562276277"); // 0
  PositionReport_message_t_0.insert("DeliveryDate_t_562276277");
  elt.add_attribute("ModelTyp", "1"); // 0
  PositionReport_message_t_0.insert("1");
  elt.add_attribute("PxDelta", "18863096.050000"); // 0
  PositionReport_message_t_0.insert("18863096.050000");
  elt.add_attribute("Txt", "Text_t_936022466"); // 0
  PositionReport_message_t_0.insert("Text_t_936022466");
  elt.add_attribute("EncTxtLen", "2031979371"); // 0
  PositionReport_message_t_0.insert("2031979371");
  elt.add_attribute("EncTxt", "EncodedText_t_261333268"); // 0
  PositionReport_message_t_0.insert("EncodedText_t_261333268");
  all_values.push_back(PositionReport_message_t_0);
  all_compo_names.insert("PositionReport_message_t");

  { // Hdr
    xml_element Hdr_67{"Hdr"};
    multiset<string> Hdr_67_set;
    Hdr_67.add_attribute("SeqNum", "1905788494"); // 1
    Hdr_67_set.insert("1905788494");
    Hdr_67.add_attribute("SID", "SenderCompID_t_2000890777"); // 1
    Hdr_67_set.insert("SenderCompID_t_2000890777");
    Hdr_67.add_attribute("TID", "TargetCompID_t_1616612614"); // 1
    Hdr_67_set.insert("TargetCompID_t_1616612614");
    Hdr_67.add_attribute("OBID", "OnBehalfOfCompID_t_1947045308"); // 1
    Hdr_67_set.insert("OnBehalfOfCompID_t_1947045308");
    Hdr_67.add_attribute("D2ID", "DeliverToCompID_t_1683302191"); // 1
    Hdr_67_set.insert("DeliverToCompID_t_1683302191");
    Hdr_67.add_attribute("SSub", "SenderSubID_t_256301576"); // 1
    Hdr_67_set.insert("SenderSubID_t_256301576");
    Hdr_67.add_attribute("SLoc", "SenderLocationID_t_1127407427"); // 1
    Hdr_67_set.insert("SenderLocationID_t_1127407427");
    Hdr_67.add_attribute("TSub", "TargetSubID_t_1098451144"); // 1
    Hdr_67_set.insert("TargetSubID_t_1098451144");
    Hdr_67.add_attribute("TLoc", "TargetLocationID_t_1334009578"); // 1
    Hdr_67_set.insert("TargetLocationID_t_1334009578");
    Hdr_67.add_attribute("OBSub", "OnBehalfOfSubID_t_313162300"); // 1
    Hdr_67_set.insert("OnBehalfOfSubID_t_313162300");
    Hdr_67.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1691454355"); // 1
    Hdr_67_set.insert("OnBehalfOfLocationID_t_1691454355");
    Hdr_67.add_attribute("D2Sub", "DeliverToSubID_t_914640514"); // 1
    Hdr_67_set.insert("DeliverToSubID_t_914640514");
    Hdr_67.add_attribute("D2Loc", "DeliverToLocationID_t_746917796"); // 1
    Hdr_67_set.insert("DeliverToLocationID_t_746917796");
    Hdr_67.add_attribute("PosDup", "N"); // 1
    Hdr_67_set.insert("N");
    Hdr_67.add_attribute("PosRsnd", "Y"); // 1
    Hdr_67_set.insert("Y");
    Hdr_67.add_attribute("Snt", "SendingTime_t_833119493"); // 1
    Hdr_67_set.insert("SendingTime_t_833119493");
    Hdr_67.add_attribute("OrigSnt", "OrigSendingTime_t_502149406"); // 1
    Hdr_67_set.insert("OrigSendingTime_t_502149406");
    Hdr_67.add_attribute("MsgEncd", "MessageEncoding_t_329810959"); // 1
    Hdr_67_set.insert("MessageEncoding_t_329810959");
    all_values.push_back(Hdr_67_set);
    all_compo_names.insert("Hdr_67_set");

    {
      xml_element Hop_67{"Hop"};
      multiset<string> Hop_67_set;
      Hop_67.add_attribute("ID", "HopCompID_t_1856913615"); // 2
      Hop_67_set.insert("HopCompID_t_1856913615");
      Hop_67.add_attribute("Ref", "639211439"); // 2
      Hop_67_set.insert("639211439");
      Hop_67.add_attribute("Snt", "HopSendingTime_t_497927468"); // 2
      Hop_67_set.insert("HopSendingTime_t_497927468");
      all_values.push_back(Hop_67_set);
      all_compo_names.insert("Hop_67_set");

      Hdr_67.add_element(Hop_67);
    }
    elt.add_element(Hdr_67);
  } // end Hdr
  { // ApplSeqCtrl
    xml_element ApplSeqCtrl_11{"ApplSeqCtrl"};
    multiset<string> ApplSeqCtrl_11_set;
    ApplSeqCtrl_11.add_attribute("ApplID", "ApplID_t_1577833992"); // 1
    ApplSeqCtrl_11_set.insert("ApplID_t_1577833992");
    ApplSeqCtrl_11.add_attribute("ApplSeqNum", "106303549"); // 1
    ApplSeqCtrl_11_set.insert("106303549");
    ApplSeqCtrl_11.add_attribute("ApplLastSeqNum", "1908311485"); // 1
    ApplSeqCtrl_11_set.insert("1908311485");
    ApplSeqCtrl_11.add_attribute("ApplResendFlag", "false"); // 1
    ApplSeqCtrl_11_set.insert("false");
    all_values.push_back(ApplSeqCtrl_11_set);
    all_compo_names.insert("ApplSeqCtrl_11_set");

    elt.add_element(ApplSeqCtrl_11);
  } // end ApplSeqCtrl
  { // Pty
    xml_element Pty_288{"Pty"};
    multiset<string> Pty_288_set;
    Pty_288.add_attribute("ID", "PartyID_t_741473469"); // 1
    Pty_288_set.insert("PartyID_t_741473469");
    Pty_288.add_attribute("Src", "C"); // 1
    Pty_288_set.insert("C");
    Pty_288.add_attribute("R", "29"); // 1
    Pty_288_set.insert("29");
    all_values.push_back(Pty_288_set);
    all_compo_names.insert("Pty_288_set");

    {
      xml_element Sub_288{"Sub"};
      multiset<string> Sub_288_set;
      Sub_288.add_attribute("ID", "PartySubID_t_625969192"); // 2
      Sub_288_set.insert("PartySubID_t_625969192");
      Sub_288.add_attribute("Typ", "10"); // 2
      Sub_288_set.insert("10");
      all_values.push_back(Sub_288_set);
      all_compo_names.insert("Sub_288_set");

      Pty_288.add_element(Sub_288);
    }
    elt.add_element(Pty_288);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_55{"Instrmt"};
    multiset<string> Instrmt_55_set;
    Instrmt_55.add_attribute("Sym", "Symbol_t_1362907139"); // 1
    Instrmt_55_set.insert("Symbol_t_1362907139");
    Instrmt_55.add_attribute("Sfx", "CD"); // 1
    Instrmt_55_set.insert("CD");
    Instrmt_55.add_attribute("ID", "SecurityID_t_1797539603"); // 1
    Instrmt_55_set.insert("SecurityID_t_1797539603");
    Instrmt_55.add_attribute("Src", "L"); // 1
    Instrmt_55_set.insert("L");
    Instrmt_55.add_attribute("Prod", "7"); // 1
    Instrmt_55_set.insert("7");
    Instrmt_55.add_attribute("ProdCmplx", "ProductComplex_t_2053841179"); // 1
    Instrmt_55_set.insert("ProductComplex_t_2053841179");
    Instrmt_55.add_attribute("SecGrp", "SecurityGroup_t_142392579"); // 1
    Instrmt_55_set.insert("SecurityGroup_t_142392579");
    Instrmt_55.add_attribute("CFI", "CFICode_t_1113646009"); // 1
    Instrmt_55_set.insert("CFICode_t_1113646009");
    Instrmt_55.add_attribute("SecTyp", "TERM"); // 1
    Instrmt_55_set.insert("TERM");
    Instrmt_55.add_attribute("SubTyp", "SecuritySubType_t_455554879"); // 1
    Instrmt_55_set.insert("SecuritySubType_t_455554879");
    Instrmt_55.add_attribute("MMY", "657616717"); // 1
    Instrmt_55_set.insert("657616717");
    Instrmt_55.add_attribute("MatDt", "MaturityDate_t_7523976"); // 1
    Instrmt_55_set.insert("MaturityDate_t_7523976");
    Instrmt_55.add_attribute("MatTm", "1202472675"); // 1
    Instrmt_55_set.insert("1202472675");
    Instrmt_55.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_771842847"); // 1
    Instrmt_55_set.insert("SettleOnOpenFlag_t_771842847");
    Instrmt_55.add_attribute("AsgnMeth", "1366411345"); // 1
    Instrmt_55_set.insert("1366411345");
    Instrmt_55.add_attribute("Status", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("CpnPmt", "CouponPaymentDate_t_1273992253"); // 1
    Instrmt_55_set.insert("CouponPaymentDate_t_1273992253");
    Instrmt_55.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_55_set.insert("MR");
    Instrmt_55.add_attribute("Snrty", "SR"); // 1
    Instrmt_55_set.insert("SR");
    Instrmt_55.add_attribute("NotlPctOut", "19132036.930000"); // 1
    Instrmt_55_set.insert("19132036.930000");
    Instrmt_55.add_attribute("OrigNotlPctOut", "466661.250000"); // 1
    Instrmt_55_set.insert("466661.250000");
    Instrmt_55.add_attribute("AttchPnt", "11753724.800000"); // 1
    Instrmt_55_set.insert("11753724.800000");
    Instrmt_55.add_attribute("DetchPnt", "20195072.420000"); // 1
    Instrmt_55_set.insert("20195072.420000");
    Instrmt_55.add_attribute("Issued", "IssueDate_t_1954977610"); // 1
    Instrmt_55_set.insert("IssueDate_t_1954977610");
    Instrmt_55.add_attribute("RepoCollSecTyp", "1356140243"); // 1
    Instrmt_55_set.insert("1356140243");
    Instrmt_55.add_attribute("RepoTrm", "540603420"); // 1
    Instrmt_55_set.insert("540603420");
    Instrmt_55.add_attribute("RepoRt", "5489674.310000"); // 1
    Instrmt_55_set.insert("5489674.310000");
    Instrmt_55.add_attribute("Fctr", "12757339.640000"); // 1
    Instrmt_55_set.insert("12757339.640000");
    Instrmt_55.add_attribute("CrdRtg", "CreditRating_t_2145205713"); // 1
    Instrmt_55_set.insert("CreditRating_t_2145205713");
    Instrmt_55.add_attribute("Rgstry", "InstrRegistry_t_1174936624"); // 1
    Instrmt_55_set.insert("InstrRegistry_t_1174936624");
    Instrmt_55.add_attribute("IssuCtry", "1456660953"); // 1
    Instrmt_55_set.insert("1456660953");
    Instrmt_55.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1360629204"); // 1
    Instrmt_55_set.insert("StateOrProvinceOfIssue_t_1360629204");
    Instrmt_55.add_attribute("Lcl", "LocaleOfIssue_t_1654312946"); // 1
    Instrmt_55_set.insert("LocaleOfIssue_t_1654312946");
    Instrmt_55.add_attribute("Redeem", "RedemptionDate_t_1106716908"); // 1
    Instrmt_55_set.insert("RedemptionDate_t_1106716908");
    Instrmt_55.add_attribute("StrkPx", "3756143.550000"); // 1
    Instrmt_55_set.insert("3756143.550000");
    Instrmt_55.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_55_set.insert("USD");
    Instrmt_55.add_attribute("StrkMult", "5180069.340000"); // 1
    Instrmt_55_set.insert("5180069.340000");
    Instrmt_55.add_attribute("StrkValu", "6356701.720000"); // 1
    Instrmt_55_set.insert("6356701.720000");
    Instrmt_55.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_55_set.insert("3");
    Instrmt_55.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_55_set.insert("4");
    Instrmt_55.add_attribute("StrkPxBndryPrcsn", "12932868.890000"); // 1
    Instrmt_55_set.insert("12932868.890000");
    Instrmt_55.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_55_set.insert("3");
    Instrmt_55.add_attribute("OptAt", "28550841"); // 1
    Instrmt_55_set.insert("28550841");
    Instrmt_55.add_attribute("Mult", "20651297.370000"); // 1
    Instrmt_55_set.insert("20651297.370000");
    Instrmt_55.add_attribute("MultTyp", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_55_set.insert("4");
    Instrmt_55.add_attribute("MinPxIncr", "11916383.420000"); // 1
    Instrmt_55_set.insert("11916383.420000");
    Instrmt_55.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1028631881"); // 1
    Instrmt_55_set.insert("MinPriceIncrementAmount_t_1028631881");
    Instrmt_55.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_55_set.insert("oz_tr");
    Instrmt_55.add_attribute("UOMQty", "9573583.870000"); // 1
    Instrmt_55_set.insert("9573583.870000");
    Instrmt_55.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_55_set.insert("Gal");
    Instrmt_55.add_attribute("PxUOMQty", "6895703.290000"); // 1
    Instrmt_55_set.insert("6895703.290000");
    Instrmt_55.add_attribute("SettlMeth", "P"); // 1
    Instrmt_55_set.insert("P");
    Instrmt_55.add_attribute("ExerStyle", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("OptPayAmt", "OptPayoutAmount_t_1369985402"); // 1
    Instrmt_55_set.insert("OptPayoutAmount_t_1369985402");
    Instrmt_55.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_55_set.insert("STD");
    Instrmt_55.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_55_set.insert("CDSD");
    Instrmt_55.add_attribute("ListMeth", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("CapPx", "4592123.760000"); // 1
    Instrmt_55_set.insert("4592123.760000");
    Instrmt_55.add_attribute("FlrPx", "4831381.950000"); // 1
    Instrmt_55_set.insert("4831381.950000");
    Instrmt_55.add_attribute("PutCall", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("FlexInd", "true"); // 1
    Instrmt_55_set.insert("true");
    Instrmt_55.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_55_set.insert("false");
    Instrmt_55.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_55_set.insert("Yr");
    Instrmt_55.add_attribute("CpnRt", "16355494.850000"); // 1
    Instrmt_55_set.insert("16355494.850000");
    Instrmt_55.add_attribute("Exch", "SecurityExchange_t_455445895"); // 1
    Instrmt_55_set.insert("SecurityExchange_t_455445895");
    Instrmt_55.add_attribute("PosLmt", "1474474313"); // 1
    Instrmt_55_set.insert("1474474313");
    Instrmt_55.add_attribute("NTPosLmt", "123736009"); // 1
    Instrmt_55_set.insert("123736009");
    Instrmt_55.add_attribute("Issr", "Issuer_t_561403797"); // 1
    Instrmt_55_set.insert("Issuer_t_561403797");
    Instrmt_55.add_attribute("EncIssrLen", "300552478"); // 1
    Instrmt_55_set.insert("300552478");
    Instrmt_55.add_attribute("EncIssr", "EncodedIssuer_t_1417022899"); // 1
    Instrmt_55_set.insert("EncodedIssuer_t_1417022899");
    Instrmt_55.add_attribute("Desc", "SecurityDesc_t_674885676"); // 1
    Instrmt_55_set.insert("SecurityDesc_t_674885676");
    Instrmt_55.add_attribute("EncSecDescLen", "329103319"); // 1
    Instrmt_55_set.insert("329103319");
    Instrmt_55.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1334668988"); // 1
    Instrmt_55_set.insert("EncodedSecurityDesc_t_1334668988");
    Instrmt_55.add_attribute("Pool", "Pool_t_7295252"); // 1
    Instrmt_55_set.insert("Pool_t_7295252");
    Instrmt_55.add_attribute("CSetMo", "245762681"); // 1
    Instrmt_55_set.insert("245762681");
    Instrmt_55.add_attribute("CPPgm", "99"); // 1
    Instrmt_55_set.insert("99");
    Instrmt_55.add_attribute("CPRegT", "CPRegType_t_1035927133"); // 1
    Instrmt_55_set.insert("CPRegType_t_1035927133");
    Instrmt_55.add_attribute("Dated", "DatedDate_t_1907444178"); // 1
    Instrmt_55_set.insert("DatedDate_t_1907444178");
    Instrmt_55.add_attribute("IntAcrl", "InterestAccrualDate_t_1336182070"); // 1
    Instrmt_55_set.insert("InterestAccrualDate_t_1336182070");
    all_values.push_back(Instrmt_55_set);
    all_compo_names.insert("Instrmt_55_set");

    {
      xml_element AID_58{"AID"};
      multiset<string> AID_58_set;
      AID_58.add_attribute("AltID", "SecurityAltID_t_2111225139"); // 2
      AID_58_set.insert("SecurityAltID_t_2111225139");
      AID_58.add_attribute("AltIDSrc", "K"); // 2
      AID_58_set.insert("K");
      all_values.push_back(AID_58_set);
      all_compo_names.insert("AID_58_set");

      Instrmt_55.add_element(AID_58);
    }
    {
      xml_element SecXML_58{"SecXML"};
      multiset<string> SecXML_58_set;
      SecXML_58.add_attribute("Schema", "SecurityXMLSchema_t_18080403"); // 2
      SecXML_58_set.insert("SecurityXMLSchema_t_18080403");
      all_values.push_back(SecXML_58_set);
      all_compo_names.insert("SecXML_58_set");

      Instrmt_55.add_element(SecXML_58);
    }
    {
      xml_element Evnt_58{"Evnt"};
      multiset<string> Evnt_58_set;
      Evnt_58.add_attribute("EventTyp", "19"); // 2
      Evnt_58_set.insert("19");
      Evnt_58.add_attribute("Dt", "EventDate_t_347757785"); // 2
      Evnt_58_set.insert("EventDate_t_347757785");
      Evnt_58.add_attribute("Tm", "EventTime_t_1388065805"); // 2
      Evnt_58_set.insert("EventTime_t_1388065805");
      Evnt_58.add_attribute("Px", "1308092.110000"); // 2
      Evnt_58_set.insert("1308092.110000");
      Evnt_58.add_attribute("Txt", "EventText_t_1521718674"); // 2
      Evnt_58_set.insert("EventText_t_1521718674");
      all_values.push_back(Evnt_58_set);
      all_compo_names.insert("Evnt_58_set");

      Instrmt_55.add_element(Evnt_58);
    }
    {
      xml_element Pty_289{"Pty"};
      multiset<string> Pty_289_set;
      Pty_289.add_attribute("ID", "InstrumentPartyID_t_608289624"); // 2
      Pty_289_set.insert("InstrumentPartyID_t_608289624");
      Pty_289.add_attribute("Src", "2"); // 2
      Pty_289_set.insert("2");
      Pty_289.add_attribute("R", "39"); // 2
      Pty_289_set.insert("39");
      all_values.push_back(Pty_289_set);
      all_compo_names.insert("Pty_289_set");

      {
        xml_element Sub_289{"Sub"};
        multiset<string> Sub_289_set;
        Sub_289.add_attribute("ID", "InstrumentPartySubID_t_1189142647"); // 3
        Sub_289_set.insert("InstrumentPartySubID_t_1189142647");
        Sub_289.add_attribute("Typ", "29"); // 3
        Sub_289_set.insert("29");
        all_values.push_back(Sub_289_set);
        all_compo_names.insert("Sub_289_set");

        Pty_289.add_element(Sub_289);
      }
      Instrmt_55.add_element(Pty_289);
    }
    {
      xml_element CmplxEvnt_55{"CmplxEvnt"};
      multiset<string> CmplxEvnt_55_set;
      CmplxEvnt_55.add_attribute("Typ", "3"); // 2
      CmplxEvnt_55_set.insert("3");
      CmplxEvnt_55.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2145610026"); // 2
      CmplxEvnt_55_set.insert("ComplexOptPayoutAmount_t_2145610026");
      CmplxEvnt_55.add_attribute("Px", "441290.980000"); // 2
      CmplxEvnt_55_set.insert("441290.980000");
      CmplxEvnt_55.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_55_set.insert("1");
      CmplxEvnt_55.add_attribute("PxBndryPrcsn", "14726006.910000"); // 2
      CmplxEvnt_55_set.insert("14726006.910000");
      CmplxEvnt_55.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_55_set.insert("1");
      CmplxEvnt_55.add_attribute("Cond", "1"); // 2
      CmplxEvnt_55_set.insert("1");
      all_values.push_back(CmplxEvnt_55_set);
      all_compo_names.insert("CmplxEvnt_55_set");

      {
        xml_element EvntDts_55{"EvntDts"};
        multiset<string> EvntDts_55_set;
        EvntDts_55.add_attribute("StartDt", "ComplexEventStartDate_t_1773153169"); // 3
        EvntDts_55_set.insert("ComplexEventStartDate_t_1773153169");
        EvntDts_55.add_attribute("EndDt", "ComplexEventEndDate_t_1584888007"); // 3
        EvntDts_55_set.insert("ComplexEventEndDate_t_1584888007");
        all_values.push_back(EvntDts_55_set);
        all_compo_names.insert("EvntDts_55_set");

        {
          xml_element EvntTms_55{"EvntTms"};
          multiset<string> EvntTms_55_set;
          EvntTms_55.add_attribute("StartTm", "991480046"); // 4
          EvntTms_55_set.insert("991480046");
          EvntTms_55.add_attribute("EndTm", "2102256489"); // 4
          EvntTms_55_set.insert("2102256489");
          all_values.push_back(EvntTms_55_set);
          all_compo_names.insert("EvntTms_55_set");

          EvntDts_55.add_element(EvntTms_55);
        }
        CmplxEvnt_55.add_element(EvntDts_55);
      }
      Instrmt_55.add_element(CmplxEvnt_55);
    }
    elt.add_element(Instrmt_55);
  } // end Instrmt
  { // Leg
    xml_element Leg_62{"Leg"};
    multiset<string> Leg_62_set;
    Leg_62.add_attribute("Sym", "LegSymbol_t_998775298"); // 1
    Leg_62_set.insert("LegSymbol_t_998775298");
    Leg_62.add_attribute("Sfx", "CD"); // 1
    Leg_62_set.insert("CD");
    Leg_62.add_attribute("ID", "LegSecurityID_t_1150897029"); // 1
    Leg_62_set.insert("LegSecurityID_t_1150897029");
    Leg_62.add_attribute("Src", "4"); // 1
    Leg_62_set.insert("4");
    Leg_62.add_attribute("Prod", "5"); // 1
    Leg_62_set.insert("5");
    Leg_62.add_attribute("CFI", "LegCFICode_t_339595451"); // 1
    Leg_62_set.insert("LegCFICode_t_339595451");
    Leg_62.add_attribute("SecTyp", "PFAND"); // 1
    Leg_62_set.insert("PFAND");
    Leg_62.add_attribute("SecSubTyp", "LegSecuritySubType_t_410026912"); // 1
    Leg_62_set.insert("LegSecuritySubType_t_410026912");
    Leg_62.add_attribute("MMY", "357675855"); // 1
    Leg_62_set.insert("357675855");
    Leg_62.add_attribute("Mat", "LegMaturityDate_t_697493733"); // 1
    Leg_62_set.insert("LegMaturityDate_t_697493733");
    Leg_62.add_attribute("MatTm", "757784697"); // 1
    Leg_62_set.insert("757784697");
    Leg_62.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1745741660"); // 1
    Leg_62_set.insert("LegCouponPaymentDate_t_1745741660");
    Leg_62.add_attribute("Issued", "LegIssueDate_t_828302945"); // 1
    Leg_62_set.insert("LegIssueDate_t_828302945");
    Leg_62.add_attribute("RepoCollSecTyp", "132019724"); // 1
    Leg_62_set.insert("132019724");
    Leg_62.add_attribute("RepoTrm", "206547637"); // 1
    Leg_62_set.insert("206547637");
    Leg_62.add_attribute("RepoRt", "14183245.320000"); // 1
    Leg_62_set.insert("14183245.320000");
    Leg_62.add_attribute("Fctr", "21368765.930000"); // 1
    Leg_62_set.insert("21368765.930000");
    Leg_62.add_attribute("CrdRtg", "LegCreditRating_t_1395690284"); // 1
    Leg_62_set.insert("LegCreditRating_t_1395690284");
    Leg_62.add_attribute("Rgstry", "LegInstrRegistry_t_1974387794"); // 1
    Leg_62_set.insert("LegInstrRegistry_t_1974387794");
    Leg_62.add_attribute("Ctry", "1436621270"); // 1
    Leg_62_set.insert("1436621270");
    Leg_62.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1393816662"); // 1
    Leg_62_set.insert("LegStateOrProvinceOfIssue_t_1393816662");
    Leg_62.add_attribute("Lcl", "LegLocaleOfIssue_t_2018516892"); // 1
    Leg_62_set.insert("LegLocaleOfIssue_t_2018516892");
    Leg_62.add_attribute("Redeem", "LegRedemptionDate_t_1191811843"); // 1
    Leg_62_set.insert("LegRedemptionDate_t_1191811843");
    Leg_62.add_attribute("Strk", "7189337.050000"); // 1
    Leg_62_set.insert("7189337.050000");
    Leg_62.add_attribute("StrkCcy", "CHF"); // 1
    Leg_62_set.insert("CHF");
    Leg_62.add_attribute("OptA", "344603227"); // 1
    Leg_62_set.insert("344603227");
    Leg_62.add_attribute("Cmult", "16237863.590000"); // 1
    Leg_62_set.insert("16237863.590000");
    Leg_62.add_attribute("MultTyp", "0"); // 1
    Leg_62_set.insert("0");
    Leg_62.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_62_set.insert("3");
    Leg_62.add_attribute("UOM", "oz_tr"); // 1
    Leg_62_set.insert("oz_tr");
    Leg_62.add_attribute("UOMQty", "13511779.090000"); // 1
    Leg_62_set.insert("13511779.090000");
    Leg_62.add_attribute("PxUOM", "USD"); // 1
    Leg_62_set.insert("USD");
    Leg_62.add_attribute("PxUOMQty", "13992730.880000"); // 1
    Leg_62_set.insert("13992730.880000");
    Leg_62.add_attribute("TmUnit", "Min"); // 1
    Leg_62_set.insert("Min");
    Leg_62.add_attribute("ExerStyle", "0"); // 1
    Leg_62_set.insert("0");
    Leg_62.add_attribute("CpnRt", "17388685.390000"); // 1
    Leg_62_set.insert("17388685.390000");
    Leg_62.add_attribute("Exch", "LegSecurityExchange_t_1089356966"); // 1
    Leg_62_set.insert("LegSecurityExchange_t_1089356966");
    Leg_62.add_attribute("Issr", "LegIssuer_t_870434555"); // 1
    Leg_62_set.insert("LegIssuer_t_870434555");
    Leg_62.add_attribute("EncLegIssrLen", "2096544394"); // 1
    Leg_62_set.insert("2096544394");
    Leg_62.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1786850699"); // 1
    Leg_62_set.insert("EncodedLegIssuer_t_1786850699");
    Leg_62.add_attribute("Desc", "LegSecurityDesc_t_1628219252"); // 1
    Leg_62_set.insert("LegSecurityDesc_t_1628219252");
    Leg_62.add_attribute("EncLegSecDescLen", "1694802407"); // 1
    Leg_62_set.insert("1694802407");
    Leg_62.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_467669996"); // 1
    Leg_62_set.insert("EncodedLegSecurityDesc_t_467669996");
    Leg_62.add_attribute("RatioQty", "17602389.760000"); // 1
    Leg_62_set.insert("17602389.760000");
    Leg_62.add_attribute("Side", "D"); // 1
    Leg_62_set.insert("D");
    Leg_62.add_attribute("Ccy", "GBP"); // 1
    Leg_62_set.insert("GBP");
    Leg_62.add_attribute("Pool", "LegPool_t_1149556680"); // 1
    Leg_62_set.insert("LegPool_t_1149556680");
    Leg_62.add_attribute("Dated", "LegDatedDate_t_1712898675"); // 1
    Leg_62_set.insert("LegDatedDate_t_1712898675");
    Leg_62.add_attribute("CSetMo", "1038769544"); // 1
    Leg_62_set.insert("1038769544");
    Leg_62.add_attribute("IntAcrl", "LegInterestAccrualDate_t_395889695"); // 1
    Leg_62_set.insert("LegInterestAccrualDate_t_395889695");
    Leg_62.add_attribute("PutCall", "1583931919"); // 1
    Leg_62_set.insert("1583931919");
    Leg_62.add_attribute("LegOptionRatio", "830977.390000"); // 1
    Leg_62_set.insert("830977.390000");
    Leg_62.add_attribute("Px", "11148234.000000"); // 1
    Leg_62_set.insert("11148234.000000");
    all_values.push_back(Leg_62_set);
    all_compo_names.insert("Leg_62_set");

    {
      xml_element LegAID_62{"LegAID"};
      multiset<string> LegAID_62_set;
      LegAID_62.add_attribute("SecAltID", "LegSecurityAltID_t_1622830272"); // 2
      LegAID_62_set.insert("LegSecurityAltID_t_1622830272");
      LegAID_62.add_attribute("SecAltIDSrc", "H"); // 2
      LegAID_62_set.insert("H");
      all_values.push_back(LegAID_62_set);
      all_compo_names.insert("LegAID_62_set");

      Leg_62.add_element(LegAID_62);
    }
    elt.add_element(Leg_62);
  } // end Leg
  { // Leg
    xml_element Leg_63{"Leg"};
    multiset<string> Leg_63_set;
    Leg_63.add_attribute("Sym", "LegSymbol_t_1459426627"); // 1
    Leg_63_set.insert("LegSymbol_t_1459426627");
    Leg_63.add_attribute("Sfx", "WI"); // 1
    Leg_63_set.insert("WI");
    Leg_63.add_attribute("ID", "LegSecurityID_t_1943906563"); // 1
    Leg_63_set.insert("LegSecurityID_t_1943906563");
    Leg_63.add_attribute("Src", "2"); // 1
    Leg_63_set.insert("2");
    Leg_63.add_attribute("Prod", "6"); // 1
    Leg_63_set.insert("6");
    Leg_63.add_attribute("CFI", "LegCFICode_t_1147600824"); // 1
    Leg_63_set.insert("LegCFICode_t_1147600824");
    Leg_63.add_attribute("SecTyp", "RVLV"); // 1
    Leg_63_set.insert("RVLV");
    Leg_63.add_attribute("SecSubTyp", "LegSecuritySubType_t_599298482"); // 1
    Leg_63_set.insert("LegSecuritySubType_t_599298482");
    Leg_63.add_attribute("MMY", "238513868"); // 1
    Leg_63_set.insert("238513868");
    Leg_63.add_attribute("Mat", "LegMaturityDate_t_571638280"); // 1
    Leg_63_set.insert("LegMaturityDate_t_571638280");
    Leg_63.add_attribute("MatTm", "190683373"); // 1
    Leg_63_set.insert("190683373");
    Leg_63.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1327870834"); // 1
    Leg_63_set.insert("LegCouponPaymentDate_t_1327870834");
    Leg_63.add_attribute("Issued", "LegIssueDate_t_1442072835"); // 1
    Leg_63_set.insert("LegIssueDate_t_1442072835");
    Leg_63.add_attribute("RepoCollSecTyp", "139744120"); // 1
    Leg_63_set.insert("139744120");
    Leg_63.add_attribute("RepoTrm", "967237886"); // 1
    Leg_63_set.insert("967237886");
    Leg_63.add_attribute("RepoRt", "9228084.390000"); // 1
    Leg_63_set.insert("9228084.390000");
    Leg_63.add_attribute("Fctr", "18345465.270000"); // 1
    Leg_63_set.insert("18345465.270000");
    Leg_63.add_attribute("CrdRtg", "LegCreditRating_t_1434907882"); // 1
    Leg_63_set.insert("LegCreditRating_t_1434907882");
    Leg_63.add_attribute("Rgstry", "LegInstrRegistry_t_535563768"); // 1
    Leg_63_set.insert("LegInstrRegistry_t_535563768");
    Leg_63.add_attribute("Ctry", "1588412923"); // 1
    Leg_63_set.insert("1588412923");
    Leg_63.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1173418763"); // 1
    Leg_63_set.insert("LegStateOrProvinceOfIssue_t_1173418763");
    Leg_63.add_attribute("Lcl", "LegLocaleOfIssue_t_137712042"); // 1
    Leg_63_set.insert("LegLocaleOfIssue_t_137712042");
    Leg_63.add_attribute("Redeem", "LegRedemptionDate_t_590485955"); // 1
    Leg_63_set.insert("LegRedemptionDate_t_590485955");
    Leg_63.add_attribute("Strk", "7388337.900000"); // 1
    Leg_63_set.insert("7388337.900000");
    Leg_63.add_attribute("StrkCcy", "JPY"); // 1
    Leg_63_set.insert("JPY");
    Leg_63.add_attribute("OptA", "175282062"); // 1
    Leg_63_set.insert("175282062");
    Leg_63.add_attribute("Cmult", "12595793.260000"); // 1
    Leg_63_set.insert("12595793.260000");
    Leg_63.add_attribute("MultTyp", "2"); // 1
    Leg_63_set.insert("2");
    Leg_63.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_63_set.insert("4");
    Leg_63.add_attribute("UOM", "MMbbl"); // 1
    Leg_63_set.insert("MMbbl");
    Leg_63.add_attribute("UOMQty", "14131420.300000"); // 1
    Leg_63_set.insert("14131420.300000");
    Leg_63.add_attribute("PxUOM", "lbs"); // 1
    Leg_63_set.insert("lbs");
    Leg_63.add_attribute("PxUOMQty", "5000225.460000"); // 1
    Leg_63_set.insert("5000225.460000");
    Leg_63.add_attribute("TmUnit", "Wk"); // 1
    Leg_63_set.insert("Wk");
    Leg_63.add_attribute("ExerStyle", "0"); // 1
    Leg_63_set.insert("0");
    Leg_63.add_attribute("CpnRt", "16476233.700000"); // 1
    Leg_63_set.insert("16476233.700000");
    Leg_63.add_attribute("Exch", "LegSecurityExchange_t_1135691715"); // 1
    Leg_63_set.insert("LegSecurityExchange_t_1135691715");
    Leg_63.add_attribute("Issr", "LegIssuer_t_549085545"); // 1
    Leg_63_set.insert("LegIssuer_t_549085545");
    Leg_63.add_attribute("EncLegIssrLen", "1886137239"); // 1
    Leg_63_set.insert("1886137239");
    Leg_63.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1707329995"); // 1
    Leg_63_set.insert("EncodedLegIssuer_t_1707329995");
    Leg_63.add_attribute("Desc", "LegSecurityDesc_t_739768919"); // 1
    Leg_63_set.insert("LegSecurityDesc_t_739768919");
    Leg_63.add_attribute("EncLegSecDescLen", "1066524425"); // 1
    Leg_63_set.insert("1066524425");
    Leg_63.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1001919182"); // 1
    Leg_63_set.insert("EncodedLegSecurityDesc_t_1001919182");
    Leg_63.add_attribute("RatioQty", "8795130.390000"); // 1
    Leg_63_set.insert("8795130.390000");
    Leg_63.add_attribute("Side", "8"); // 1
    Leg_63_set.insert("8");
    Leg_63.add_attribute("Ccy", "JPY"); // 1
    Leg_63_set.insert("JPY");
    Leg_63.add_attribute("Pool", "LegPool_t_1321186546"); // 1
    Leg_63_set.insert("LegPool_t_1321186546");
    Leg_63.add_attribute("Dated", "LegDatedDate_t_312807742"); // 1
    Leg_63_set.insert("LegDatedDate_t_312807742");
    Leg_63.add_attribute("CSetMo", "7505193"); // 1
    Leg_63_set.insert("7505193");
    Leg_63.add_attribute("IntAcrl", "LegInterestAccrualDate_t_347121661"); // 1
    Leg_63_set.insert("LegInterestAccrualDate_t_347121661");
    Leg_63.add_attribute("PutCall", "450519784"); // 1
    Leg_63_set.insert("450519784");
    Leg_63.add_attribute("LegOptionRatio", "5979911.480000"); // 1
    Leg_63_set.insert("5979911.480000");
    Leg_63.add_attribute("Px", "10859554.520000"); // 1
    Leg_63_set.insert("10859554.520000");
    all_values.push_back(Leg_63_set);
    all_compo_names.insert("Leg_63_set");

    {
      xml_element LegAID_63{"LegAID"};
      multiset<string> LegAID_63_set;
      LegAID_63.add_attribute("SecAltID", "LegSecurityAltID_t_1627001370"); // 2
      LegAID_63_set.insert("LegSecurityAltID_t_1627001370");
      LegAID_63.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_63_set.insert("G");
      all_values.push_back(LegAID_63_set);
      all_compo_names.insert("LegAID_63_set");

      Leg_63.add_element(LegAID_63);
    }
    elt.add_element(Leg_63);
  } // end Leg
  { // PosUnd
    xml_element PosUnd_0{"PosUnd"};
    multiset<string> PosUnd_0_set;
    PosUnd_0.add_attribute("UndSetPx", "7390970.480000"); // 1
    PosUnd_0_set.insert("7390970.480000");
    PosUnd_0.add_attribute("UndSetPxTyp", "1"); // 1
    PosUnd_0_set.insert("1");
    PosUnd_0.add_attribute("UndlyDlvAmt", "UnderlyingDeliveryAmount_t_911866200"); // 1
    PosUnd_0_set.insert("UnderlyingDeliveryAmount_t_911866200");
    all_values.push_back(PosUnd_0_set);
    all_compo_names.insert("PosUnd_0_set");

    {
      xml_element Undly_76{"Undly"};
      multiset<string> Undly_76_set;
      Undly_76.add_attribute("Sym", "UnderlyingSymbol_t_1442696679"); // 2
      Undly_76_set.insert("UnderlyingSymbol_t_1442696679");
      Undly_76.add_attribute("Sfx", "CD"); // 2
      Undly_76_set.insert("CD");
      Undly_76.add_attribute("ID", "UnderlyingSecurityID_t_1661627869"); // 2
      Undly_76_set.insert("UnderlyingSecurityID_t_1661627869");
      Undly_76.add_attribute("Src", "8"); // 2
      Undly_76_set.insert("8");
      Undly_76.add_attribute("Prod", "10"); // 2
      Undly_76_set.insert("10");
      Undly_76.add_attribute("CFI", "UnderlyingCFICode_t_1611414933"); // 2
      Undly_76_set.insert("UnderlyingCFICode_t_1611414933");
      Undly_76.add_attribute("SecTyp", "DUAL"); // 2
      Undly_76_set.insert("DUAL");
      Undly_76.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_816409730"); // 2
      Undly_76_set.insert("UnderlyingSecuritySubType_t_816409730");
      Undly_76.add_attribute("MMY", "13016830"); // 2
      Undly_76_set.insert("13016830");
      Undly_76.add_attribute("Mat", "UnderlyingMaturityDate_t_1181512538"); // 2
      Undly_76_set.insert("UnderlyingMaturityDate_t_1181512538");
      Undly_76.add_attribute("MatTm", "376256077"); // 2
      Undly_76_set.insert("376256077");
      Undly_76.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_752785749"); // 2
      Undly_76_set.insert("UnderlyingCouponPaymentDate_t_752785749");
      Undly_76.add_attribute("RestrctTyp", "FR"); // 2
      Undly_76_set.insert("FR");
      Undly_76.add_attribute("Snrty", "SR"); // 2
      Undly_76_set.insert("SR");
      Undly_76.add_attribute("NotlPctOut", "16322987.880000"); // 2
      Undly_76_set.insert("16322987.880000");
      Undly_76.add_attribute("OrigNotlPctOut", "21343156.270000"); // 2
      Undly_76_set.insert("21343156.270000");
      Undly_76.add_attribute("AttchPnt", "11554192.340000"); // 2
      Undly_76_set.insert("11554192.340000");
      Undly_76.add_attribute("DetchPnt", "513910.580000"); // 2
      Undly_76_set.insert("513910.580000");
      Undly_76.add_attribute("Issued", "UnderlyingIssueDate_t_1308018525"); // 2
      Undly_76_set.insert("UnderlyingIssueDate_t_1308018525");
      Undly_76.add_attribute("RepoCollSecTyp", "1468226976"); // 2
      Undly_76_set.insert("1468226976");
      Undly_76.add_attribute("RepoTrm", "58896251"); // 2
      Undly_76_set.insert("58896251");
      Undly_76.add_attribute("RepoRt", "16551401.870000"); // 2
      Undly_76_set.insert("16551401.870000");
      Undly_76.add_attribute("Fctr", "19187467.600000"); // 2
      Undly_76_set.insert("19187467.600000");
      Undly_76.add_attribute("CrdRtg", "UnderlyingCreditRating_t_656887400"); // 2
      Undly_76_set.insert("UnderlyingCreditRating_t_656887400");
      Undly_76.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_593611991"); // 2
      Undly_76_set.insert("UnderlyingInstrRegistry_t_593611991");
      Undly_76.add_attribute("Ctry", "1398264482"); // 2
      Undly_76_set.insert("1398264482");
      Undly_76.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_93770551"); // 2
      Undly_76_set.insert("UnderlyingStateOrProvinceOfIssue_t_93770551");
      Undly_76.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1854849505"); // 2
      Undly_76_set.insert("UnderlyingLocaleOfIssue_t_1854849505");
      Undly_76.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2137361531"); // 2
      Undly_76_set.insert("UnderlyingRedemptionDate_t_2137361531");
      Undly_76.add_attribute("StrkPx", "16318527.530000"); // 2
      Undly_76_set.insert("16318527.530000");
      Undly_76.add_attribute("StrkCcy", "USD"); // 2
      Undly_76_set.insert("USD");
      Undly_76.add_attribute("OptA", "288109689"); // 2
      Undly_76_set.insert("288109689");
      Undly_76.add_attribute("Mult", "1333762.780000"); // 2
      Undly_76_set.insert("1333762.780000");
      Undly_76.add_attribute("MultTyp", "1"); // 2
      Undly_76_set.insert("1");
      Undly_76.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_76_set.insert("2");
      Undly_76.add_attribute("UOM", "lbs"); // 2
      Undly_76_set.insert("lbs");
      Undly_76.add_attribute("UOMQty", "5231854.380000"); // 2
      Undly_76_set.insert("5231854.380000");
      Undly_76.add_attribute("PxUOM", "lbs"); // 2
      Undly_76_set.insert("lbs");
      Undly_76.add_attribute("PxUOMQty", "17578080.420000"); // 2
      Undly_76_set.insert("17578080.420000");
      Undly_76.add_attribute("TmUnit", "D"); // 2
      Undly_76_set.insert("D");
      Undly_76.add_attribute("ExerStyle", "2"); // 2
      Undly_76_set.insert("2");
      Undly_76.add_attribute("CpnRt", "3631101.430000"); // 2
      Undly_76_set.insert("3631101.430000");
      Undly_76.add_attribute("Exch", "UnderlyingSecurityExchange_t_1805251293"); // 2
      Undly_76_set.insert("UnderlyingSecurityExchange_t_1805251293");
      Undly_76.add_attribute("Issr", "UnderlyingIssuer_t_392185123"); // 2
      Undly_76_set.insert("UnderlyingIssuer_t_392185123");
      Undly_76.add_attribute("EncUndIssrLen", "1995408932"); // 2
      Undly_76_set.insert("1995408932");
      Undly_76.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1792083272"); // 2
      Undly_76_set.insert("EncodedUnderlyingIssuer_t_1792083272");
      Undly_76.add_attribute("Desc", "UnderlyingSecurityDesc_t_1547604357"); // 2
      Undly_76_set.insert("UnderlyingSecurityDesc_t_1547604357");
      Undly_76.add_attribute("EncUndSecDescLen", "2046799990"); // 2
      Undly_76_set.insert("2046799990");
      Undly_76.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_952618150"); // 2
      Undly_76_set.insert("EncodedUnderlyingSecurityDesc_t_952618150");
      Undly_76.add_attribute("CPPgm", "UnderlyingCPProgram_t_868347685"); // 2
      Undly_76_set.insert("UnderlyingCPProgram_t_868347685");
      Undly_76.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2105696242"); // 2
      Undly_76_set.insert("UnderlyingCPRegType_t_2105696242");
      Undly_76.add_attribute("AllocPct", "4602746.890000"); // 2
      Undly_76_set.insert("4602746.890000");
      Undly_76.add_attribute("Ccy", "JPY"); // 2
      Undly_76_set.insert("JPY");
      Undly_76.add_attribute("Qty", "10538866.800000"); // 2
      Undly_76_set.insert("10538866.800000");
      Undly_76.add_attribute("SettlTyp", "2"); // 2
      Undly_76_set.insert("2");
      Undly_76.add_attribute("CashAmt", "UnderlyingCashAmount_t_708870545"); // 2
      Undly_76_set.insert("UnderlyingCashAmount_t_708870545");
      Undly_76.add_attribute("CashTyp", "DIFF"); // 2
      Undly_76_set.insert("DIFF");
      Undly_76.add_attribute("Px", "20277531.630000"); // 2
      Undly_76_set.insert("20277531.630000");
      Undly_76.add_attribute("DirtPx", "1932396.500000"); // 2
      Undly_76_set.insert("1932396.500000");
      Undly_76.add_attribute("EndPx", "13804845.940000"); // 2
      Undly_76_set.insert("13804845.940000");
      Undly_76.add_attribute("StartVal", "UnderlyingStartValue_t_1312844077"); // 2
      Undly_76_set.insert("UnderlyingStartValue_t_1312844077");
      Undly_76.add_attribute("CurVal", "UnderlyingCurrentValue_t_481349339"); // 2
      Undly_76_set.insert("UnderlyingCurrentValue_t_481349339");
      Undly_76.add_attribute("EndVal", "UnderlyingEndValue_t_1513860872"); // 2
      Undly_76_set.insert("UnderlyingEndValue_t_1513860872");
      Undly_76.add_attribute("AdjQty", "3931705.680000"); // 2
      Undly_76_set.insert("3931705.680000");
      Undly_76.add_attribute("FxRate", "4501770.430000"); // 2
      Undly_76_set.insert("4501770.430000");
      Undly_76.add_attribute("FxRateCalc", "M"); // 2
      Undly_76_set.insert("M");
      Undly_76.add_attribute("CapValu", "UnderlyingCapValue_t_916356006"); // 2
      Undly_76_set.insert("UnderlyingCapValue_t_916356006");
      Undly_76.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1235414477"); // 2
      Undly_76_set.insert("UnderlyingSettlMethod_t_1235414477");
      Undly_76.add_attribute("PutCall", "721492830"); // 2
      Undly_76_set.insert("721492830");
      all_values.push_back(Undly_76_set);
      all_compo_names.insert("Undly_76_set");

      {
        xml_element UndAID_76{"UndAID"};
        multiset<string> UndAID_76_set;
        UndAID_76.add_attribute("AltID", "UnderlyingSecurityAltID_t_473570335"); // 3
        UndAID_76_set.insert("UnderlyingSecurityAltID_t_473570335");
        UndAID_76.add_attribute("AltIDSrc", "2"); // 3
        UndAID_76_set.insert("2");
        all_values.push_back(UndAID_76_set);
        all_compo_names.insert("UndAID_76_set");

        Undly_76.add_element(UndAID_76);
      }
      {
        xml_element Stip_113{"Stip"};
        multiset<string> Stip_113_set;
        Stip_113.add_attribute("Typ", "HEP"); // 3
        Stip_113_set.insert("HEP");
        Stip_113.add_attribute("Val", "UnderlyingStipValue_t_131337980"); // 3
        Stip_113_set.insert("UnderlyingStipValue_t_131337980");
        all_values.push_back(Stip_113_set);
        all_compo_names.insert("Stip_113_set");

        Undly_76.add_element(Stip_113);
      }
      {
        xml_element Pty_290{"Pty"};
        multiset<string> Pty_290_set;
        Pty_290.add_attribute("ID", "UnderlyingInstrumentPartyID_t_641609464"); // 3
        Pty_290_set.insert("UnderlyingInstrumentPartyID_t_641609464");
        Pty_290.add_attribute("Src", "8"); // 3
        Pty_290_set.insert("8");
        Pty_290.add_attribute("R", "14"); // 3
        Pty_290_set.insert("14");
        all_values.push_back(Pty_290_set);
        all_compo_names.insert("Pty_290_set");

        {
          xml_element Sub_290{"Sub"};
          multiset<string> Sub_290_set;
          Sub_290.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_41730174"); // 4
          Sub_290_set.insert("UnderlyingInstrumentPartySubID_t_41730174");
          Sub_290.add_attribute("Typ", "13"); // 4
          Sub_290_set.insert("13");
          all_values.push_back(Sub_290_set);
          all_compo_names.insert("Sub_290_set");

          Pty_290.add_element(Sub_290);
        }
        Undly_76.add_element(Pty_290);
      }
      PosUnd_0.add_element(Undly_76);
    }
    {
      xml_element UndDlvAmt_0{"UndDlvAmt"};
      multiset<string> UndDlvAmt_0_set;
      UndDlvAmt_0.add_attribute("PayAmt", "UnderlyingPayAmount_t_728555755"); // 2
      UndDlvAmt_0_set.insert("UnderlyingPayAmount_t_728555755");
      UndDlvAmt_0.add_attribute("ColAmt", "UnderlyingCollectAmount_t_910077859"); // 2
      UndDlvAmt_0_set.insert("UnderlyingCollectAmount_t_910077859");
      UndDlvAmt_0.add_attribute("StlDt", "UnderlyingSettlementDate_t_790057194"); // 2
      UndDlvAmt_0_set.insert("UnderlyingSettlementDate_t_790057194");
      UndDlvAmt_0.add_attribute("SetStat", "UnderlyingSettlementStatus_t_1188830444"); // 2
      UndDlvAmt_0_set.insert("UnderlyingSettlementStatus_t_1188830444");
      all_values.push_back(UndDlvAmt_0_set);
      all_compo_names.insert("UndDlvAmt_0_set");

      PosUnd_0.add_element(UndDlvAmt_0);
    }
    elt.add_element(PosUnd_0);
  } // end PosUnd
  { // PosUnd
    xml_element PosUnd_1{"PosUnd"};
    multiset<string> PosUnd_1_set;
    PosUnd_1.add_attribute("UndSetPx", "15496886.570000"); // 1
    PosUnd_1_set.insert("15496886.570000");
    PosUnd_1.add_attribute("UndSetPxTyp", "1"); // 1
    PosUnd_1_set.insert("1");
    PosUnd_1.add_attribute("UndlyDlvAmt", "UnderlyingDeliveryAmount_t_95233476"); // 1
    PosUnd_1_set.insert("UnderlyingDeliveryAmount_t_95233476");
    all_values.push_back(PosUnd_1_set);
    all_compo_names.insert("PosUnd_1_set");

    {
      xml_element Undly_77{"Undly"};
      multiset<string> Undly_77_set;
      Undly_77.add_attribute("Sym", "UnderlyingSymbol_t_1440080289"); // 2
      Undly_77_set.insert("UnderlyingSymbol_t_1440080289");
      Undly_77.add_attribute("Sfx", "WI"); // 2
      Undly_77_set.insert("WI");
      Undly_77.add_attribute("ID", "UnderlyingSecurityID_t_856486013"); // 2
      Undly_77_set.insert("UnderlyingSecurityID_t_856486013");
      Undly_77.add_attribute("Src", "5"); // 2
      Undly_77_set.insert("5");
      Undly_77.add_attribute("Prod", "4"); // 2
      Undly_77_set.insert("4");
      Undly_77.add_attribute("CFI", "UnderlyingCFICode_t_89486959"); // 2
      Undly_77_set.insert("UnderlyingCFICode_t_89486959");
      Undly_77.add_attribute("SecTyp", "ONITE"); // 2
      Undly_77_set.insert("ONITE");
      Undly_77.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_641133074"); // 2
      Undly_77_set.insert("UnderlyingSecuritySubType_t_641133074");
      Undly_77.add_attribute("MMY", "1603347831"); // 2
      Undly_77_set.insert("1603347831");
      Undly_77.add_attribute("Mat", "UnderlyingMaturityDate_t_878880801"); // 2
      Undly_77_set.insert("UnderlyingMaturityDate_t_878880801");
      Undly_77.add_attribute("MatTm", "1091310118"); // 2
      Undly_77_set.insert("1091310118");
      Undly_77.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_567032619"); // 2
      Undly_77_set.insert("UnderlyingCouponPaymentDate_t_567032619");
      Undly_77.add_attribute("RestrctTyp", "XR"); // 2
      Undly_77_set.insert("XR");
      Undly_77.add_attribute("Snrty", "SR"); // 2
      Undly_77_set.insert("SR");
      Undly_77.add_attribute("NotlPctOut", "12885254.490000"); // 2
      Undly_77_set.insert("12885254.490000");
      Undly_77.add_attribute("OrigNotlPctOut", "1213234.950000"); // 2
      Undly_77_set.insert("1213234.950000");
      Undly_77.add_attribute("AttchPnt", "4286652.880000"); // 2
      Undly_77_set.insert("4286652.880000");
      Undly_77.add_attribute("DetchPnt", "2256447.750000"); // 2
      Undly_77_set.insert("2256447.750000");
      Undly_77.add_attribute("Issued", "UnderlyingIssueDate_t_252661475"); // 2
      Undly_77_set.insert("UnderlyingIssueDate_t_252661475");
      Undly_77.add_attribute("RepoCollSecTyp", "1070274753"); // 2
      Undly_77_set.insert("1070274753");
      Undly_77.add_attribute("RepoTrm", "1158173032"); // 2
      Undly_77_set.insert("1158173032");
      Undly_77.add_attribute("RepoRt", "285990.800000"); // 2
      Undly_77_set.insert("285990.800000");
      Undly_77.add_attribute("Fctr", "11120049.270000"); // 2
      Undly_77_set.insert("11120049.270000");
      Undly_77.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1990017632"); // 2
      Undly_77_set.insert("UnderlyingCreditRating_t_1990017632");
      Undly_77.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_757154835"); // 2
      Undly_77_set.insert("UnderlyingInstrRegistry_t_757154835");
      Undly_77.add_attribute("Ctry", "2022082786"); // 2
      Undly_77_set.insert("2022082786");
      Undly_77.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_632591178"); // 2
      Undly_77_set.insert("UnderlyingStateOrProvinceOfIssue_t_632591178");
      Undly_77.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1945985279"); // 2
      Undly_77_set.insert("UnderlyingLocaleOfIssue_t_1945985279");
      Undly_77.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1424287795"); // 2
      Undly_77_set.insert("UnderlyingRedemptionDate_t_1424287795");
      Undly_77.add_attribute("StrkPx", "20377483.660000"); // 2
      Undly_77_set.insert("20377483.660000");
      Undly_77.add_attribute("StrkCcy", "GBP"); // 2
      Undly_77_set.insert("GBP");
      Undly_77.add_attribute("OptA", "2004292451"); // 2
      Undly_77_set.insert("2004292451");
      Undly_77.add_attribute("Mult", "7502211.200000"); // 2
      Undly_77_set.insert("7502211.200000");
      Undly_77.add_attribute("MultTyp", "0"); // 2
      Undly_77_set.insert("0");
      Undly_77.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_77_set.insert("3");
      Undly_77.add_attribute("UOM", "Bbl"); // 2
      Undly_77_set.insert("Bbl");
      Undly_77.add_attribute("UOMQty", "3754608.250000"); // 2
      Undly_77_set.insert("3754608.250000");
      Undly_77.add_attribute("PxUOM", "Alw"); // 2
      Undly_77_set.insert("Alw");
      Undly_77.add_attribute("PxUOMQty", "2955722.630000"); // 2
      Undly_77_set.insert("2955722.630000");
      Undly_77.add_attribute("TmUnit", "Yr"); // 2
      Undly_77_set.insert("Yr");
      Undly_77.add_attribute("ExerStyle", "1"); // 2
      Undly_77_set.insert("1");
      Undly_77.add_attribute("CpnRt", "8626048.820000"); // 2
      Undly_77_set.insert("8626048.820000");
      Undly_77.add_attribute("Exch", "UnderlyingSecurityExchange_t_902094786"); // 2
      Undly_77_set.insert("UnderlyingSecurityExchange_t_902094786");
      Undly_77.add_attribute("Issr", "UnderlyingIssuer_t_1928276678"); // 2
      Undly_77_set.insert("UnderlyingIssuer_t_1928276678");
      Undly_77.add_attribute("EncUndIssrLen", "3646684"); // 2
      Undly_77_set.insert("3646684");
      Undly_77.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1023418281"); // 2
      Undly_77_set.insert("EncodedUnderlyingIssuer_t_1023418281");
      Undly_77.add_attribute("Desc", "UnderlyingSecurityDesc_t_209458319"); // 2
      Undly_77_set.insert("UnderlyingSecurityDesc_t_209458319");
      Undly_77.add_attribute("EncUndSecDescLen", "229291459"); // 2
      Undly_77_set.insert("229291459");
      Undly_77.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1276079756"); // 2
      Undly_77_set.insert("EncodedUnderlyingSecurityDesc_t_1276079756");
      Undly_77.add_attribute("CPPgm", "UnderlyingCPProgram_t_1279733072"); // 2
      Undly_77_set.insert("UnderlyingCPProgram_t_1279733072");
      Undly_77.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1387464491"); // 2
      Undly_77_set.insert("UnderlyingCPRegType_t_1387464491");
      Undly_77.add_attribute("AllocPct", "13046788.370000"); // 2
      Undly_77_set.insert("13046788.370000");
      Undly_77.add_attribute("Ccy", "USD"); // 2
      Undly_77_set.insert("USD");
      Undly_77.add_attribute("Qty", "20618336.720000"); // 2
      Undly_77_set.insert("20618336.720000");
      Undly_77.add_attribute("SettlTyp", "5"); // 2
      Undly_77_set.insert("5");
      Undly_77.add_attribute("CashAmt", "UnderlyingCashAmount_t_1862589654"); // 2
      Undly_77_set.insert("UnderlyingCashAmount_t_1862589654");
      Undly_77.add_attribute("CashTyp", "FIXED"); // 2
      Undly_77_set.insert("FIXED");
      Undly_77.add_attribute("Px", "15431412.850000"); // 2
      Undly_77_set.insert("15431412.850000");
      Undly_77.add_attribute("DirtPx", "17528543.730000"); // 2
      Undly_77_set.insert("17528543.730000");
      Undly_77.add_attribute("EndPx", "17540704.110000"); // 2
      Undly_77_set.insert("17540704.110000");
      Undly_77.add_attribute("StartVal", "UnderlyingStartValue_t_112542073"); // 2
      Undly_77_set.insert("UnderlyingStartValue_t_112542073");
      Undly_77.add_attribute("CurVal", "UnderlyingCurrentValue_t_1609663176"); // 2
      Undly_77_set.insert("UnderlyingCurrentValue_t_1609663176");
      Undly_77.add_attribute("EndVal", "UnderlyingEndValue_t_356807884"); // 2
      Undly_77_set.insert("UnderlyingEndValue_t_356807884");
      Undly_77.add_attribute("AdjQty", "22926.660000"); // 2
      Undly_77_set.insert("22926.660000");
      Undly_77.add_attribute("FxRate", "16262557.150000"); // 2
      Undly_77_set.insert("16262557.150000");
      Undly_77.add_attribute("FxRateCalc", "D"); // 2
      Undly_77_set.insert("D");
      Undly_77.add_attribute("CapValu", "UnderlyingCapValue_t_377753491"); // 2
      Undly_77_set.insert("UnderlyingCapValue_t_377753491");
      Undly_77.add_attribute("SetMeth", "UnderlyingSettlMethod_t_136497680"); // 2
      Undly_77_set.insert("UnderlyingSettlMethod_t_136497680");
      Undly_77.add_attribute("PutCall", "1492088226"); // 2
      Undly_77_set.insert("1492088226");
      all_values.push_back(Undly_77_set);
      all_compo_names.insert("Undly_77_set");

      {
        xml_element UndAID_77{"UndAID"};
        multiset<string> UndAID_77_set;
        UndAID_77.add_attribute("AltID", "UnderlyingSecurityAltID_t_1632095118"); // 3
        UndAID_77_set.insert("UnderlyingSecurityAltID_t_1632095118");
        UndAID_77.add_attribute("AltIDSrc", "4"); // 3
        UndAID_77_set.insert("4");
        all_values.push_back(UndAID_77_set);
        all_compo_names.insert("UndAID_77_set");

        Undly_77.add_element(UndAID_77);
      }
      {
        xml_element Stip_114{"Stip"};
        multiset<string> Stip_114_set;
        Stip_114.add_attribute("Typ", "MAT"); // 3
        Stip_114_set.insert("MAT");
        Stip_114.add_attribute("Val", "UnderlyingStipValue_t_386706256"); // 3
        Stip_114_set.insert("UnderlyingStipValue_t_386706256");
        all_values.push_back(Stip_114_set);
        all_compo_names.insert("Stip_114_set");

        Undly_77.add_element(Stip_114);
      }
      {
        xml_element Pty_291{"Pty"};
        multiset<string> Pty_291_set;
        Pty_291.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1666326441"); // 3
        Pty_291_set.insert("UnderlyingInstrumentPartyID_t_1666326441");
        Pty_291.add_attribute("Src", "6"); // 3
        Pty_291_set.insert("6");
        Pty_291.add_attribute("R", "75"); // 3
        Pty_291_set.insert("75");
        all_values.push_back(Pty_291_set);
        all_compo_names.insert("Pty_291_set");

        {
          xml_element Sub_291{"Sub"};
          multiset<string> Sub_291_set;
          Sub_291.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1875784760"); // 4
          Sub_291_set.insert("UnderlyingInstrumentPartySubID_t_1875784760");
          Sub_291.add_attribute("Typ", "15"); // 4
          Sub_291_set.insert("15");
          all_values.push_back(Sub_291_set);
          all_compo_names.insert("Sub_291_set");

          Pty_291.add_element(Sub_291);
        }
        Undly_77.add_element(Pty_291);
      }
      PosUnd_1.add_element(Undly_77);
    }
    {
      xml_element UndDlvAmt_1{"UndDlvAmt"};
      multiset<string> UndDlvAmt_1_set;
      UndDlvAmt_1.add_attribute("PayAmt", "UnderlyingPayAmount_t_538720645"); // 2
      UndDlvAmt_1_set.insert("UnderlyingPayAmount_t_538720645");
      UndDlvAmt_1.add_attribute("ColAmt", "UnderlyingCollectAmount_t_1008034184"); // 2
      UndDlvAmt_1_set.insert("UnderlyingCollectAmount_t_1008034184");
      UndDlvAmt_1.add_attribute("StlDt", "UnderlyingSettlementDate_t_1827612095"); // 2
      UndDlvAmt_1_set.insert("UnderlyingSettlementDate_t_1827612095");
      UndDlvAmt_1.add_attribute("SetStat", "UnderlyingSettlementStatus_t_1843399482"); // 2
      UndDlvAmt_1_set.insert("UnderlyingSettlementStatus_t_1843399482");
      all_values.push_back(UndDlvAmt_1_set);
      all_compo_names.insert("UndDlvAmt_1_set");

      PosUnd_1.add_element(UndDlvAmt_1);
    }
    elt.add_element(PosUnd_1);
  } // end PosUnd
  { // PosUnd
    xml_element PosUnd_2{"PosUnd"};
    multiset<string> PosUnd_2_set;
    PosUnd_2.add_attribute("UndSetPx", "12522885.350000"); // 1
    PosUnd_2_set.insert("12522885.350000");
    PosUnd_2.add_attribute("UndSetPxTyp", "2"); // 1
    PosUnd_2_set.insert("2");
    PosUnd_2.add_attribute("UndlyDlvAmt", "UnderlyingDeliveryAmount_t_1757749507"); // 1
    PosUnd_2_set.insert("UnderlyingDeliveryAmount_t_1757749507");
    all_values.push_back(PosUnd_2_set);
    all_compo_names.insert("PosUnd_2_set");

    {
      xml_element Undly_78{"Undly"};
      multiset<string> Undly_78_set;
      Undly_78.add_attribute("Sym", "UnderlyingSymbol_t_1371142025"); // 2
      Undly_78_set.insert("UnderlyingSymbol_t_1371142025");
      Undly_78.add_attribute("Sfx", "CD"); // 2
      Undly_78_set.insert("CD");
      Undly_78.add_attribute("ID", "UnderlyingSecurityID_t_1470601163"); // 2
      Undly_78_set.insert("UnderlyingSecurityID_t_1470601163");
      Undly_78.add_attribute("Src", "3"); // 2
      Undly_78_set.insert("3");
      Undly_78.add_attribute("Prod", "6"); // 2
      Undly_78_set.insert("6");
      Undly_78.add_attribute("CFI", "UnderlyingCFICode_t_1077187926"); // 2
      Undly_78_set.insert("UnderlyingCFICode_t_1077187926");
      Undly_78.add_attribute("SecTyp", "SWING"); // 2
      Undly_78_set.insert("SWING");
      Undly_78.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1840266831"); // 2
      Undly_78_set.insert("UnderlyingSecuritySubType_t_1840266831");
      Undly_78.add_attribute("MMY", "1433995810"); // 2
      Undly_78_set.insert("1433995810");
      Undly_78.add_attribute("Mat", "UnderlyingMaturityDate_t_881634401"); // 2
      Undly_78_set.insert("UnderlyingMaturityDate_t_881634401");
      Undly_78.add_attribute("MatTm", "1319038898"); // 2
      Undly_78_set.insert("1319038898");
      Undly_78.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_483028126"); // 2
      Undly_78_set.insert("UnderlyingCouponPaymentDate_t_483028126");
      Undly_78.add_attribute("RestrctTyp", "MR"); // 2
      Undly_78_set.insert("MR");
      Undly_78.add_attribute("Snrty", "SR"); // 2
      Undly_78_set.insert("SR");
      Undly_78.add_attribute("NotlPctOut", "19751163.520000"); // 2
      Undly_78_set.insert("19751163.520000");
      Undly_78.add_attribute("OrigNotlPctOut", "7439993.630000"); // 2
      Undly_78_set.insert("7439993.630000");
      Undly_78.add_attribute("AttchPnt", "11935863.410000"); // 2
      Undly_78_set.insert("11935863.410000");
      Undly_78.add_attribute("DetchPnt", "348421.650000"); // 2
      Undly_78_set.insert("348421.650000");
      Undly_78.add_attribute("Issued", "UnderlyingIssueDate_t_1130705619"); // 2
      Undly_78_set.insert("UnderlyingIssueDate_t_1130705619");
      Undly_78.add_attribute("RepoCollSecTyp", "712429135"); // 2
      Undly_78_set.insert("712429135");
      Undly_78.add_attribute("RepoTrm", "245698310"); // 2
      Undly_78_set.insert("245698310");
      Undly_78.add_attribute("RepoRt", "3933465.080000"); // 2
      Undly_78_set.insert("3933465.080000");
      Undly_78.add_attribute("Fctr", "4407302.470000"); // 2
      Undly_78_set.insert("4407302.470000");
      Undly_78.add_attribute("CrdRtg", "UnderlyingCreditRating_t_685845914"); // 2
      Undly_78_set.insert("UnderlyingCreditRating_t_685845914");
      Undly_78.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_932067153"); // 2
      Undly_78_set.insert("UnderlyingInstrRegistry_t_932067153");
      Undly_78.add_attribute("Ctry", "1448764432"); // 2
      Undly_78_set.insert("1448764432");
      Undly_78.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_365974362"); // 2
      Undly_78_set.insert("UnderlyingStateOrProvinceOfIssue_t_365974362");
      Undly_78.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_627982988"); // 2
      Undly_78_set.insert("UnderlyingLocaleOfIssue_t_627982988");
      Undly_78.add_attribute("Redeem", "UnderlyingRedemptionDate_t_553569319"); // 2
      Undly_78_set.insert("UnderlyingRedemptionDate_t_553569319");
      Undly_78.add_attribute("StrkPx", "12761012.850000"); // 2
      Undly_78_set.insert("12761012.850000");
      Undly_78.add_attribute("StrkCcy", "USD"); // 2
      Undly_78_set.insert("USD");
      Undly_78.add_attribute("OptA", "1901334215"); // 2
      Undly_78_set.insert("1901334215");
      Undly_78.add_attribute("Mult", "17088500.100000"); // 2
      Undly_78_set.insert("17088500.100000");
      Undly_78.add_attribute("MultTyp", "2"); // 2
      Undly_78_set.insert("2");
      Undly_78.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_78_set.insert("0");
      Undly_78.add_attribute("UOM", "oz_tr"); // 2
      Undly_78_set.insert("oz_tr");
      Undly_78.add_attribute("UOMQty", "14233690.940000"); // 2
      Undly_78_set.insert("14233690.940000");
      Undly_78.add_attribute("PxUOM", "MWh"); // 2
      Undly_78_set.insert("MWh");
      Undly_78.add_attribute("PxUOMQty", "20725500.990000"); // 2
      Undly_78_set.insert("20725500.990000");
      Undly_78.add_attribute("TmUnit", "H"); // 2
      Undly_78_set.insert("H");
      Undly_78.add_attribute("ExerStyle", "1"); // 2
      Undly_78_set.insert("1");
      Undly_78.add_attribute("CpnRt", "4080945.770000"); // 2
      Undly_78_set.insert("4080945.770000");
      Undly_78.add_attribute("Exch", "UnderlyingSecurityExchange_t_1416907740"); // 2
      Undly_78_set.insert("UnderlyingSecurityExchange_t_1416907740");
      Undly_78.add_attribute("Issr", "UnderlyingIssuer_t_304329235"); // 2
      Undly_78_set.insert("UnderlyingIssuer_t_304329235");
      Undly_78.add_attribute("EncUndIssrLen", "235727281"); // 2
      Undly_78_set.insert("235727281");
      Undly_78.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_13423455"); // 2
      Undly_78_set.insert("EncodedUnderlyingIssuer_t_13423455");
      Undly_78.add_attribute("Desc", "UnderlyingSecurityDesc_t_1497915576"); // 2
      Undly_78_set.insert("UnderlyingSecurityDesc_t_1497915576");
      Undly_78.add_attribute("EncUndSecDescLen", "270569447"); // 2
      Undly_78_set.insert("270569447");
      Undly_78.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1144129074"); // 2
      Undly_78_set.insert("EncodedUnderlyingSecurityDesc_t_1144129074");
      Undly_78.add_attribute("CPPgm", "UnderlyingCPProgram_t_62861063"); // 2
      Undly_78_set.insert("UnderlyingCPProgram_t_62861063");
      Undly_78.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_516267757"); // 2
      Undly_78_set.insert("UnderlyingCPRegType_t_516267757");
      Undly_78.add_attribute("AllocPct", "15374755.820000"); // 2
      Undly_78_set.insert("15374755.820000");
      Undly_78.add_attribute("Ccy", "JPY"); // 2
      Undly_78_set.insert("JPY");
      Undly_78.add_attribute("Qty", "3220590.880000"); // 2
      Undly_78_set.insert("3220590.880000");
      Undly_78.add_attribute("SettlTyp", "5"); // 2
      Undly_78_set.insert("5");
      Undly_78.add_attribute("CashAmt", "UnderlyingCashAmount_t_1568088034"); // 2
      Undly_78_set.insert("UnderlyingCashAmount_t_1568088034");
      Undly_78.add_attribute("CashTyp", "FIXED"); // 2
      Undly_78_set.insert("FIXED");
      Undly_78.add_attribute("Px", "3584414.140000"); // 2
      Undly_78_set.insert("3584414.140000");
      Undly_78.add_attribute("DirtPx", "6967056.710000"); // 2
      Undly_78_set.insert("6967056.710000");
      Undly_78.add_attribute("EndPx", "11882909.230000"); // 2
      Undly_78_set.insert("11882909.230000");
      Undly_78.add_attribute("StartVal", "UnderlyingStartValue_t_135669111"); // 2
      Undly_78_set.insert("UnderlyingStartValue_t_135669111");
      Undly_78.add_attribute("CurVal", "UnderlyingCurrentValue_t_450556239"); // 2
      Undly_78_set.insert("UnderlyingCurrentValue_t_450556239");
      Undly_78.add_attribute("EndVal", "UnderlyingEndValue_t_749657285"); // 2
      Undly_78_set.insert("UnderlyingEndValue_t_749657285");
      Undly_78.add_attribute("AdjQty", "6796964.690000"); // 2
      Undly_78_set.insert("6796964.690000");
      Undly_78.add_attribute("FxRate", "4350104.610000"); // 2
      Undly_78_set.insert("4350104.610000");
      Undly_78.add_attribute("FxRateCalc", "D"); // 2
      Undly_78_set.insert("D");
      Undly_78.add_attribute("CapValu", "UnderlyingCapValue_t_2103065563"); // 2
      Undly_78_set.insert("UnderlyingCapValue_t_2103065563");
      Undly_78.add_attribute("SetMeth", "UnderlyingSettlMethod_t_112247867"); // 2
      Undly_78_set.insert("UnderlyingSettlMethod_t_112247867");
      Undly_78.add_attribute("PutCall", "1313278024"); // 2
      Undly_78_set.insert("1313278024");
      all_values.push_back(Undly_78_set);
      all_compo_names.insert("Undly_78_set");

      {
        xml_element UndAID_78{"UndAID"};
        multiset<string> UndAID_78_set;
        UndAID_78.add_attribute("AltID", "UnderlyingSecurityAltID_t_113101763"); // 3
        UndAID_78_set.insert("UnderlyingSecurityAltID_t_113101763");
        UndAID_78.add_attribute("AltIDSrc", "9"); // 3
        UndAID_78_set.insert("9");
        all_values.push_back(UndAID_78_set);
        all_compo_names.insert("UndAID_78_set");

        Undly_78.add_element(UndAID_78);
      }
      {
        xml_element Stip_115{"Stip"};
        multiset<string> Stip_115_set;
        Stip_115.add_attribute("Typ", "PURPOSE"); // 3
        Stip_115_set.insert("PURPOSE");
        Stip_115.add_attribute("Val", "UnderlyingStipValue_t_1530009503"); // 3
        Stip_115_set.insert("UnderlyingStipValue_t_1530009503");
        all_values.push_back(Stip_115_set);
        all_compo_names.insert("Stip_115_set");

        Undly_78.add_element(Stip_115);
      }
      {
        xml_element Pty_292{"Pty"};
        multiset<string> Pty_292_set;
        Pty_292.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1412853407"); // 3
        Pty_292_set.insert("UnderlyingInstrumentPartyID_t_1412853407");
        Pty_292.add_attribute("Src", "6"); // 3
        Pty_292_set.insert("6");
        Pty_292.add_attribute("R", "77"); // 3
        Pty_292_set.insert("77");
        all_values.push_back(Pty_292_set);
        all_compo_names.insert("Pty_292_set");

        {
          xml_element Sub_292{"Sub"};
          multiset<string> Sub_292_set;
          Sub_292.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_763285335"); // 4
          Sub_292_set.insert("UnderlyingInstrumentPartySubID_t_763285335");
          Sub_292.add_attribute("Typ", "14"); // 4
          Sub_292_set.insert("14");
          all_values.push_back(Sub_292_set);
          all_compo_names.insert("Sub_292_set");

          Pty_292.add_element(Sub_292);
        }
        Undly_78.add_element(Pty_292);
      }
      PosUnd_2.add_element(Undly_78);
    }
    {
      xml_element UndDlvAmt_2{"UndDlvAmt"};
      multiset<string> UndDlvAmt_2_set;
      UndDlvAmt_2.add_attribute("PayAmt", "UnderlyingPayAmount_t_540078385"); // 2
      UndDlvAmt_2_set.insert("UnderlyingPayAmount_t_540078385");
      UndDlvAmt_2.add_attribute("ColAmt", "UnderlyingCollectAmount_t_826146399"); // 2
      UndDlvAmt_2_set.insert("UnderlyingCollectAmount_t_826146399");
      UndDlvAmt_2.add_attribute("StlDt", "UnderlyingSettlementDate_t_596453439"); // 2
      UndDlvAmt_2_set.insert("UnderlyingSettlementDate_t_596453439");
      UndDlvAmt_2.add_attribute("SetStat", "UnderlyingSettlementStatus_t_2077553968"); // 2
      UndDlvAmt_2_set.insert("UnderlyingSettlementStatus_t_2077553968");
      all_values.push_back(UndDlvAmt_2_set);
      all_compo_names.insert("UndDlvAmt_2_set");

      PosUnd_2.add_element(UndDlvAmt_2);
    }
    elt.add_element(PosUnd_2);
  } // end PosUnd
  { // Qty
    xml_element Qty_8{"Qty"};
    multiset<string> Qty_8_set;
    Qty_8.add_attribute("Typ", "RCV"); // 1
    Qty_8_set.insert("RCV");
    Qty_8.add_attribute("Long", "2521294.080000"); // 1
    Qty_8_set.insert("2521294.080000");
    Qty_8.add_attribute("Short", "11346098.050000"); // 1
    Qty_8_set.insert("11346098.050000");
    Qty_8.add_attribute("Stat", "0"); // 1
    Qty_8_set.insert("0");
    Qty_8.add_attribute("QtyDt", "QuantityDate_t_1202171484"); // 1
    Qty_8_set.insert("QuantityDate_t_1202171484");
    all_values.push_back(Qty_8_set);
    all_compo_names.insert("Qty_8_set");

    {
      xml_element Pty_293{"Pty"};
      multiset<string> Pty_293_set;
      Pty_293.add_attribute("ID", "NestedPartyID_t_1493051219"); // 2
      Pty_293_set.insert("NestedPartyID_t_1493051219");
      Pty_293.add_attribute("Src", "A"); // 2
      Pty_293_set.insert("A");
      Pty_293.add_attribute("R", "31"); // 2
      Pty_293_set.insert("31");
      all_values.push_back(Pty_293_set);
      all_compo_names.insert("Pty_293_set");

      {
        xml_element Sub_293{"Sub"};
        multiset<string> Sub_293_set;
        Sub_293.add_attribute("ID", "NestedPartySubID_t_1628720330"); // 3
        Sub_293_set.insert("NestedPartySubID_t_1628720330");
        Sub_293.add_attribute("Typ", "16"); // 3
        Sub_293_set.insert("16");
        all_values.push_back(Sub_293_set);
        all_compo_names.insert("Sub_293_set");

        Pty_293.add_element(Sub_293);
      }
      Qty_8.add_element(Pty_293);
    }
    elt.add_element(Qty_8);
  } // end Qty
  { // Qty
    xml_element Qty_9{"Qty"};
    multiset<string> Qty_9_set;
    Qty_9.add_attribute("Typ", "CEA"); // 1
    Qty_9_set.insert("CEA");
    Qty_9.add_attribute("Long", "1609331.520000"); // 1
    Qty_9_set.insert("1609331.520000");
    Qty_9.add_attribute("Short", "6539602.210000"); // 1
    Qty_9_set.insert("6539602.210000");
    Qty_9.add_attribute("Stat", "2"); // 1
    Qty_9_set.insert("2");
    Qty_9.add_attribute("QtyDt", "QuantityDate_t_116515067"); // 1
    Qty_9_set.insert("QuantityDate_t_116515067");
    all_values.push_back(Qty_9_set);
    all_compo_names.insert("Qty_9_set");

    {
      xml_element Pty_294{"Pty"};
      multiset<string> Pty_294_set;
      Pty_294.add_attribute("ID", "NestedPartyID_t_766208089"); // 2
      Pty_294_set.insert("NestedPartyID_t_766208089");
      Pty_294.add_attribute("Src", "5"); // 2
      Pty_294_set.insert("5");
      Pty_294.add_attribute("R", "40"); // 2
      Pty_294_set.insert("40");
      all_values.push_back(Pty_294_set);
      all_compo_names.insert("Pty_294_set");

      {
        xml_element Sub_294{"Sub"};
        multiset<string> Sub_294_set;
        Sub_294.add_attribute("ID", "NestedPartySubID_t_1874732261"); // 3
        Sub_294_set.insert("NestedPartySubID_t_1874732261");
        Sub_294.add_attribute("Typ", "17"); // 3
        Sub_294_set.insert("17");
        all_values.push_back(Sub_294_set);
        all_compo_names.insert("Sub_294_set");

        Pty_294.add_element(Sub_294);
      }
      Qty_9.add_element(Pty_294);
    }
    elt.add_element(Qty_9);
  } // end Qty
  { // Amt
    xml_element Amt_12{"Amt"};
    multiset<string> Amt_12_set;
    Amt_12.add_attribute("Typ", "FMTM"); // 1
    Amt_12_set.insert("FMTM");
    Amt_12.add_attribute("Amt", "PosAmt_t_930147182"); // 1
    Amt_12_set.insert("PosAmt_t_930147182");
    Amt_12.add_attribute("Ccy", "PositionCurrency_t_1155575645"); // 1
    Amt_12_set.insert("PositionCurrency_t_1155575645");
    all_values.push_back(Amt_12_set);
    all_compo_names.insert("Amt_12_set");

    elt.add_element(Amt_12);
  } // end Amt
  { // Amt
    xml_element Amt_13{"Amt"};
    multiset<string> Amt_13_set;
    Amt_13.add_attribute("Typ", "COLAT"); // 1
    Amt_13_set.insert("COLAT");
    Amt_13.add_attribute("Amt", "PosAmt_t_1010332864"); // 1
    Amt_13_set.insert("PosAmt_t_1010332864");
    Amt_13.add_attribute("Ccy", "PositionCurrency_t_1695654030"); // 1
    Amt_13_set.insert("PositionCurrency_t_1695654030");
    all_values.push_back(Amt_13_set);
    all_compo_names.insert("Amt_13_set");

    elt.add_element(Amt_13);
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
