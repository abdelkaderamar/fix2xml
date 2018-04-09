#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassStatusRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassStatusRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassStatReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassStatusRequest_message_t_0;
  elt.add_attribute("ReqID", "MassStatusReqID_t_13800696"); // 0
  OrderMassStatusRequest_message_t_0.insert("MassStatusReqID_t_13800696");
  elt.add_attribute("MassStatReqTyp", "1"); // 0
  OrderMassStatusRequest_message_t_0.insert("1");
  elt.add_attribute("Acct", "Account_t_612342603"); // 0
  OrderMassStatusRequest_message_t_0.insert("Account_t_612342603");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  OrderMassStatusRequest_message_t_0.insert("2");
  elt.add_attribute("SesID", "3"); // 0
  OrderMassStatusRequest_message_t_0.insert("3");
  elt.add_attribute("SesSub", "7"); // 0
  OrderMassStatusRequest_message_t_0.insert("7");
  elt.add_attribute("Side", "C"); // 0
  OrderMassStatusRequest_message_t_0.insert("C");
  all_values.push_back(OrderMassStatusRequest_message_t_0);
  all_compo_names.insert("OrderMassStatusRequest_message_t");

  { // Hdr
    xml_element Hdr_63{"Hdr"};
    multiset<string> Hdr_63_set;
    Hdr_63.add_attribute("SeqNum", "504307888"); // 1
    Hdr_63_set.insert("504307888");
    Hdr_63.add_attribute("SID", "SenderCompID_t_172584438"); // 1
    Hdr_63_set.insert("SenderCompID_t_172584438");
    Hdr_63.add_attribute("TID", "TargetCompID_t_32927736"); // 1
    Hdr_63_set.insert("TargetCompID_t_32927736");
    Hdr_63.add_attribute("OBID", "OnBehalfOfCompID_t_1210884619"); // 1
    Hdr_63_set.insert("OnBehalfOfCompID_t_1210884619");
    Hdr_63.add_attribute("D2ID", "DeliverToCompID_t_969914078"); // 1
    Hdr_63_set.insert("DeliverToCompID_t_969914078");
    Hdr_63.add_attribute("SSub", "SenderSubID_t_616372077"); // 1
    Hdr_63_set.insert("SenderSubID_t_616372077");
    Hdr_63.add_attribute("SLoc", "SenderLocationID_t_2057840137"); // 1
    Hdr_63_set.insert("SenderLocationID_t_2057840137");
    Hdr_63.add_attribute("TSub", "TargetSubID_t_1173957795"); // 1
    Hdr_63_set.insert("TargetSubID_t_1173957795");
    Hdr_63.add_attribute("TLoc", "TargetLocationID_t_464388412"); // 1
    Hdr_63_set.insert("TargetLocationID_t_464388412");
    Hdr_63.add_attribute("OBSub", "OnBehalfOfSubID_t_1721200148"); // 1
    Hdr_63_set.insert("OnBehalfOfSubID_t_1721200148");
    Hdr_63.add_attribute("OBLoc", "OnBehalfOfLocationID_t_620095628"); // 1
    Hdr_63_set.insert("OnBehalfOfLocationID_t_620095628");
    Hdr_63.add_attribute("D2Sub", "DeliverToSubID_t_6470909"); // 1
    Hdr_63_set.insert("DeliverToSubID_t_6470909");
    Hdr_63.add_attribute("D2Loc", "DeliverToLocationID_t_189101173"); // 1
    Hdr_63_set.insert("DeliverToLocationID_t_189101173");
    Hdr_63.add_attribute("PosDup", "Y"); // 1
    Hdr_63_set.insert("Y");
    Hdr_63.add_attribute("PosRsnd", "N"); // 1
    Hdr_63_set.insert("N");
    Hdr_63.add_attribute("Snt", "SendingTime_t_1560490596"); // 1
    Hdr_63_set.insert("SendingTime_t_1560490596");
    Hdr_63.add_attribute("OrigSnt", "OrigSendingTime_t_717951595"); // 1
    Hdr_63_set.insert("OrigSendingTime_t_717951595");
    Hdr_63.add_attribute("MsgEncd", "MessageEncoding_t_19815643"); // 1
    Hdr_63_set.insert("MessageEncoding_t_19815643");
    all_values.push_back(Hdr_63_set);
    all_compo_names.insert("Hdr_63_set");

    {
      xml_element Hop_63{"Hop"};
      multiset<string> Hop_63_set;
      Hop_63.add_attribute("ID", "HopCompID_t_1656320005"); // 2
      Hop_63_set.insert("HopCompID_t_1656320005");
      Hop_63.add_attribute("Ref", "1526377230"); // 2
      Hop_63_set.insert("1526377230");
      Hop_63.add_attribute("Snt", "HopSendingTime_t_943053358"); // 2
      Hop_63_set.insert("HopSendingTime_t_943053358");
      all_values.push_back(Hop_63_set);
      all_compo_names.insert("Hop_63_set");

      Hdr_63.add_element(Hop_63);
    }
    elt.add_element(Hdr_63);
  } // end Hdr
  { // Pty
    xml_element Pty_265{"Pty"};
    multiset<string> Pty_265_set;
    Pty_265.add_attribute("ID", "PartyID_t_1678226334"); // 1
    Pty_265_set.insert("PartyID_t_1678226334");
    Pty_265.add_attribute("Src", "5"); // 1
    Pty_265_set.insert("5");
    Pty_265.add_attribute("R", "16"); // 1
    Pty_265_set.insert("16");
    all_values.push_back(Pty_265_set);
    all_compo_names.insert("Pty_265_set");

    {
      xml_element Sub_265{"Sub"};
      multiset<string> Sub_265_set;
      Sub_265.add_attribute("ID", "PartySubID_t_804759066"); // 2
      Sub_265_set.insert("PartySubID_t_804759066");
      Sub_265.add_attribute("Typ", "2"); // 2
      Sub_265_set.insert("2");
      all_values.push_back(Sub_265_set);
      all_compo_names.insert("Sub_265_set");

      Pty_265.add_element(Sub_265);
    }
    elt.add_element(Pty_265);
  } // end Pty
  { // Pty
    xml_element Pty_266{"Pty"};
    multiset<string> Pty_266_set;
    Pty_266.add_attribute("ID", "PartyID_t_1637242352"); // 1
    Pty_266_set.insert("PartyID_t_1637242352");
    Pty_266.add_attribute("Src", "G"); // 1
    Pty_266_set.insert("G");
    Pty_266.add_attribute("R", "22"); // 1
    Pty_266_set.insert("22");
    all_values.push_back(Pty_266_set);
    all_compo_names.insert("Pty_266_set");

    {
      xml_element Sub_266{"Sub"};
      multiset<string> Sub_266_set;
      Sub_266.add_attribute("ID", "PartySubID_t_1148637995"); // 2
      Sub_266_set.insert("PartySubID_t_1148637995");
      Sub_266.add_attribute("Typ", "17"); // 2
      Sub_266_set.insert("17");
      all_values.push_back(Sub_266_set);
      all_compo_names.insert("Sub_266_set");

      Pty_266.add_element(Sub_266);
    }
    elt.add_element(Pty_266);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_10{"TgtPty"};
    multiset<string> TgtPty_10_set;
    TgtPty_10.add_attribute("ID", "TargetPartyID_t_1181565731"); // 1
    TgtPty_10_set.insert("TargetPartyID_t_1181565731");
    TgtPty_10.add_attribute("Src", "7"); // 1
    TgtPty_10_set.insert("7");
    TgtPty_10.add_attribute("R", "84"); // 1
    TgtPty_10_set.insert("84");
    all_values.push_back(TgtPty_10_set);
    all_compo_names.insert("TgtPty_10_set");

    elt.add_element(TgtPty_10);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_11{"TgtPty"};
    multiset<string> TgtPty_11_set;
    TgtPty_11.add_attribute("ID", "TargetPartyID_t_1797937808"); // 1
    TgtPty_11_set.insert("TargetPartyID_t_1797937808");
    TgtPty_11.add_attribute("Src", "6"); // 1
    TgtPty_11_set.insert("6");
    TgtPty_11.add_attribute("R", "44"); // 1
    TgtPty_11_set.insert("44");
    all_values.push_back(TgtPty_11_set);
    all_compo_names.insert("TgtPty_11_set");

    elt.add_element(TgtPty_11);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_12{"TgtPty"};
    multiset<string> TgtPty_12_set;
    TgtPty_12.add_attribute("ID", "TargetPartyID_t_114842572"); // 1
    TgtPty_12_set.insert("TargetPartyID_t_114842572");
    TgtPty_12.add_attribute("Src", "C"); // 1
    TgtPty_12_set.insert("C");
    TgtPty_12.add_attribute("R", "34"); // 1
    TgtPty_12_set.insert("34");
    all_values.push_back(TgtPty_12_set);
    all_compo_names.insert("TgtPty_12_set");

    elt.add_element(TgtPty_12);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_51{"Instrmt"};
    multiset<string> Instrmt_51_set;
    Instrmt_51.add_attribute("Sym", "Symbol_t_121313481"); // 1
    Instrmt_51_set.insert("Symbol_t_121313481");
    Instrmt_51.add_attribute("Sfx", "WI"); // 1
    Instrmt_51_set.insert("WI");
    Instrmt_51.add_attribute("ID", "SecurityID_t_1276243755"); // 1
    Instrmt_51_set.insert("SecurityID_t_1276243755");
    Instrmt_51.add_attribute("Src", "G"); // 1
    Instrmt_51_set.insert("G");
    Instrmt_51.add_attribute("Prod", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("ProdCmplx", "ProductComplex_t_1994195350"); // 1
    Instrmt_51_set.insert("ProductComplex_t_1994195350");
    Instrmt_51.add_attribute("SecGrp", "SecurityGroup_t_800740881"); // 1
    Instrmt_51_set.insert("SecurityGroup_t_800740881");
    Instrmt_51.add_attribute("CFI", "CFICode_t_56386516"); // 1
    Instrmt_51_set.insert("CFICode_t_56386516");
    Instrmt_51.add_attribute("SecTyp", "CTB"); // 1
    Instrmt_51_set.insert("CTB");
    Instrmt_51.add_attribute("SubTyp", "SecuritySubType_t_1743794239"); // 1
    Instrmt_51_set.insert("SecuritySubType_t_1743794239");
    Instrmt_51.add_attribute("MMY", "1403375999"); // 1
    Instrmt_51_set.insert("1403375999");
    Instrmt_51.add_attribute("MatDt", "MaturityDate_t_903831618"); // 1
    Instrmt_51_set.insert("MaturityDate_t_903831618");
    Instrmt_51.add_attribute("MatTm", "2141195975"); // 1
    Instrmt_51_set.insert("2141195975");
    Instrmt_51.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_616682531"); // 1
    Instrmt_51_set.insert("SettleOnOpenFlag_t_616682531");
    Instrmt_51.add_attribute("AsgnMeth", "1708590685"); // 1
    Instrmt_51_set.insert("1708590685");
    Instrmt_51.add_attribute("Status", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("CpnPmt", "CouponPaymentDate_t_106441235"); // 1
    Instrmt_51_set.insert("CouponPaymentDate_t_106441235");
    Instrmt_51.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_51_set.insert("MM");
    Instrmt_51.add_attribute("Snrty", "SB"); // 1
    Instrmt_51_set.insert("SB");
    Instrmt_51.add_attribute("NotlPctOut", "12550792.310000"); // 1
    Instrmt_51_set.insert("12550792.310000");
    Instrmt_51.add_attribute("OrigNotlPctOut", "17052516.550000"); // 1
    Instrmt_51_set.insert("17052516.550000");
    Instrmt_51.add_attribute("AttchPnt", "18717457.660000"); // 1
    Instrmt_51_set.insert("18717457.660000");
    Instrmt_51.add_attribute("DetchPnt", "2891613.140000"); // 1
    Instrmt_51_set.insert("2891613.140000");
    Instrmt_51.add_attribute("Issued", "IssueDate_t_1019137056"); // 1
    Instrmt_51_set.insert("IssueDate_t_1019137056");
    Instrmt_51.add_attribute("RepoCollSecTyp", "1214612965"); // 1
    Instrmt_51_set.insert("1214612965");
    Instrmt_51.add_attribute("RepoTrm", "2087099123"); // 1
    Instrmt_51_set.insert("2087099123");
    Instrmt_51.add_attribute("RepoRt", "2433789.450000"); // 1
    Instrmt_51_set.insert("2433789.450000");
    Instrmt_51.add_attribute("Fctr", "17314379.580000"); // 1
    Instrmt_51_set.insert("17314379.580000");
    Instrmt_51.add_attribute("CrdRtg", "CreditRating_t_54458047"); // 1
    Instrmt_51_set.insert("CreditRating_t_54458047");
    Instrmt_51.add_attribute("Rgstry", "InstrRegistry_t_1188820983"); // 1
    Instrmt_51_set.insert("InstrRegistry_t_1188820983");
    Instrmt_51.add_attribute("IssuCtry", "720874932"); // 1
    Instrmt_51_set.insert("720874932");
    Instrmt_51.add_attribute("StPrv", "StateOrProvinceOfIssue_t_175771529"); // 1
    Instrmt_51_set.insert("StateOrProvinceOfIssue_t_175771529");
    Instrmt_51.add_attribute("Lcl", "LocaleOfIssue_t_175880546"); // 1
    Instrmt_51_set.insert("LocaleOfIssue_t_175880546");
    Instrmt_51.add_attribute("Redeem", "RedemptionDate_t_1997118688"); // 1
    Instrmt_51_set.insert("RedemptionDate_t_1997118688");
    Instrmt_51.add_attribute("StrkPx", "9566967.660000"); // 1
    Instrmt_51_set.insert("9566967.660000");
    Instrmt_51.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_51_set.insert("USD");
    Instrmt_51.add_attribute("StrkMult", "17574376.470000"); // 1
    Instrmt_51_set.insert("17574376.470000");
    Instrmt_51.add_attribute("StrkValu", "7798172.210000"); // 1
    Instrmt_51_set.insert("7798172.210000");
    Instrmt_51.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_51_set.insert("4");
    Instrmt_51.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_51_set.insert("4");
    Instrmt_51.add_attribute("StrkPxBndryPrcsn", "357095.720000"); // 1
    Instrmt_51_set.insert("357095.720000");
    Instrmt_51.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("OptAt", "1347460566"); // 1
    Instrmt_51_set.insert("1347460566");
    Instrmt_51.add_attribute("Mult", "6523921.030000"); // 1
    Instrmt_51_set.insert("6523921.030000");
    Instrmt_51.add_attribute("MultTyp", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("MinPxIncr", "7588333.390000"); // 1
    Instrmt_51_set.insert("7588333.390000");
    Instrmt_51.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_841657908"); // 1
    Instrmt_51_set.insert("MinPriceIncrementAmount_t_841657908");
    Instrmt_51.add_attribute("UOM", "t"); // 1
    Instrmt_51_set.insert("t");
    Instrmt_51.add_attribute("UOMQty", "20139125.700000"); // 1
    Instrmt_51_set.insert("20139125.700000");
    Instrmt_51.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_51_set.insert("MMbbl");
    Instrmt_51.add_attribute("PxUOMQty", "12790047.020000"); // 1
    Instrmt_51_set.insert("12790047.020000");
    Instrmt_51.add_attribute("SettlMeth", "C"); // 1
    Instrmt_51_set.insert("C");
    Instrmt_51.add_attribute("ExerStyle", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_51_set.insert("2");
    Instrmt_51.add_attribute("OptPayAmt", "OptPayoutAmount_t_95205711"); // 1
    Instrmt_51_set.insert("OptPayoutAmount_t_95205711");
    Instrmt_51.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_51_set.insert("INX");
    Instrmt_51.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_51_set.insert("FUTDA");
    Instrmt_51.add_attribute("ListMeth", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("CapPx", "7032792.520000"); // 1
    Instrmt_51_set.insert("7032792.520000");
    Instrmt_51.add_attribute("FlrPx", "6509632.620000"); // 1
    Instrmt_51_set.insert("6509632.620000");
    Instrmt_51.add_attribute("PutCall", "0"); // 1
    Instrmt_51_set.insert("0");
    Instrmt_51.add_attribute("FlexInd", "true"); // 1
    Instrmt_51_set.insert("true");
    Instrmt_51.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_51_set.insert("true");
    Instrmt_51.add_attribute("TmUnit", "S"); // 1
    Instrmt_51_set.insert("S");
    Instrmt_51.add_attribute("CpnRt", "16025905.030000"); // 1
    Instrmt_51_set.insert("16025905.030000");
    Instrmt_51.add_attribute("Exch", "SecurityExchange_t_196945044"); // 1
    Instrmt_51_set.insert("SecurityExchange_t_196945044");
    Instrmt_51.add_attribute("PosLmt", "892086054"); // 1
    Instrmt_51_set.insert("892086054");
    Instrmt_51.add_attribute("NTPosLmt", "234924076"); // 1
    Instrmt_51_set.insert("234924076");
    Instrmt_51.add_attribute("Issr", "Issuer_t_1266380719"); // 1
    Instrmt_51_set.insert("Issuer_t_1266380719");
    Instrmt_51.add_attribute("EncIssrLen", "98350644"); // 1
    Instrmt_51_set.insert("98350644");
    Instrmt_51.add_attribute("EncIssr", "EncodedIssuer_t_270633649"); // 1
    Instrmt_51_set.insert("EncodedIssuer_t_270633649");
    Instrmt_51.add_attribute("Desc", "SecurityDesc_t_1092164365"); // 1
    Instrmt_51_set.insert("SecurityDesc_t_1092164365");
    Instrmt_51.add_attribute("EncSecDescLen", "1445811210"); // 1
    Instrmt_51_set.insert("1445811210");
    Instrmt_51.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_923025752"); // 1
    Instrmt_51_set.insert("EncodedSecurityDesc_t_923025752");
    Instrmt_51.add_attribute("Pool", "Pool_t_479055047"); // 1
    Instrmt_51_set.insert("Pool_t_479055047");
    Instrmt_51.add_attribute("CSetMo", "1649244796"); // 1
    Instrmt_51_set.insert("1649244796");
    Instrmt_51.add_attribute("CPPgm", "1"); // 1
    Instrmt_51_set.insert("1");
    Instrmt_51.add_attribute("CPRegT", "CPRegType_t_1320712956"); // 1
    Instrmt_51_set.insert("CPRegType_t_1320712956");
    Instrmt_51.add_attribute("Dated", "DatedDate_t_1056503731"); // 1
    Instrmt_51_set.insert("DatedDate_t_1056503731");
    Instrmt_51.add_attribute("IntAcrl", "InterestAccrualDate_t_1548288013"); // 1
    Instrmt_51_set.insert("InterestAccrualDate_t_1548288013");
    all_values.push_back(Instrmt_51_set);
    all_compo_names.insert("Instrmt_51_set");

    {
      xml_element AID_54{"AID"};
      multiset<string> AID_54_set;
      AID_54.add_attribute("AltID", "SecurityAltID_t_1720138872"); // 2
      AID_54_set.insert("SecurityAltID_t_1720138872");
      AID_54.add_attribute("AltIDSrc", "4"); // 2
      AID_54_set.insert("4");
      all_values.push_back(AID_54_set);
      all_compo_names.insert("AID_54_set");

      Instrmt_51.add_element(AID_54);
    }
    {
      xml_element SecXML_54{"SecXML"};
      multiset<string> SecXML_54_set;
      SecXML_54.add_attribute("Schema", "SecurityXMLSchema_t_1703878250"); // 2
      SecXML_54_set.insert("SecurityXMLSchema_t_1703878250");
      all_values.push_back(SecXML_54_set);
      all_compo_names.insert("SecXML_54_set");

      Instrmt_51.add_element(SecXML_54);
    }
    {
      xml_element Evnt_54{"Evnt"};
      multiset<string> Evnt_54_set;
      Evnt_54.add_attribute("EventTyp", "16"); // 2
      Evnt_54_set.insert("16");
      Evnt_54.add_attribute("Dt", "EventDate_t_534158804"); // 2
      Evnt_54_set.insert("EventDate_t_534158804");
      Evnt_54.add_attribute("Tm", "EventTime_t_1799083961"); // 2
      Evnt_54_set.insert("EventTime_t_1799083961");
      Evnt_54.add_attribute("Px", "5056764.650000"); // 2
      Evnt_54_set.insert("5056764.650000");
      Evnt_54.add_attribute("Txt", "EventText_t_464247134"); // 2
      Evnt_54_set.insert("EventText_t_464247134");
      all_values.push_back(Evnt_54_set);
      all_compo_names.insert("Evnt_54_set");

      Instrmt_51.add_element(Evnt_54);
    }
    {
      xml_element Pty_267{"Pty"};
      multiset<string> Pty_267_set;
      Pty_267.add_attribute("ID", "InstrumentPartyID_t_1948747720"); // 2
      Pty_267_set.insert("InstrumentPartyID_t_1948747720");
      Pty_267.add_attribute("Src", "B"); // 2
      Pty_267_set.insert("B");
      Pty_267.add_attribute("R", "29"); // 2
      Pty_267_set.insert("29");
      all_values.push_back(Pty_267_set);
      all_compo_names.insert("Pty_267_set");

      {
        xml_element Sub_267{"Sub"};
        multiset<string> Sub_267_set;
        Sub_267.add_attribute("ID", "InstrumentPartySubID_t_126699360"); // 3
        Sub_267_set.insert("InstrumentPartySubID_t_126699360");
        Sub_267.add_attribute("Typ", "9"); // 3
        Sub_267_set.insert("9");
        all_values.push_back(Sub_267_set);
        all_compo_names.insert("Sub_267_set");

        Pty_267.add_element(Sub_267);
      }
      Instrmt_51.add_element(Pty_267);
    }
    {
      xml_element CmplxEvnt_51{"CmplxEvnt"};
      multiset<string> CmplxEvnt_51_set;
      CmplxEvnt_51.add_attribute("Typ", "8"); // 2
      CmplxEvnt_51_set.insert("8");
      CmplxEvnt_51.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1408831415"); // 2
      CmplxEvnt_51_set.insert("ComplexOptPayoutAmount_t_1408831415");
      CmplxEvnt_51.add_attribute("Px", "15432223.720000"); // 2
      CmplxEvnt_51_set.insert("15432223.720000");
      CmplxEvnt_51.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_51_set.insert("3");
      CmplxEvnt_51.add_attribute("PxBndryPrcsn", "1534338.210000"); // 2
      CmplxEvnt_51_set.insert("1534338.210000");
      CmplxEvnt_51.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_51_set.insert("3");
      CmplxEvnt_51.add_attribute("Cond", "1"); // 2
      CmplxEvnt_51_set.insert("1");
      all_values.push_back(CmplxEvnt_51_set);
      all_compo_names.insert("CmplxEvnt_51_set");

      {
        xml_element EvntDts_51{"EvntDts"};
        multiset<string> EvntDts_51_set;
        EvntDts_51.add_attribute("StartDt", "ComplexEventStartDate_t_251784465"); // 3
        EvntDts_51_set.insert("ComplexEventStartDate_t_251784465");
        EvntDts_51.add_attribute("EndDt", "ComplexEventEndDate_t_2048780097"); // 3
        EvntDts_51_set.insert("ComplexEventEndDate_t_2048780097");
        all_values.push_back(EvntDts_51_set);
        all_compo_names.insert("EvntDts_51_set");

        {
          xml_element EvntTms_51{"EvntTms"};
          multiset<string> EvntTms_51_set;
          EvntTms_51.add_attribute("StartTm", "2023815179"); // 4
          EvntTms_51_set.insert("2023815179");
          EvntTms_51.add_attribute("EndTm", "1697595676"); // 4
          EvntTms_51_set.insert("1697595676");
          all_values.push_back(EvntTms_51_set);
          all_compo_names.insert("EvntTms_51_set");

          EvntDts_51.add_element(EvntTms_51);
        }
        CmplxEvnt_51.add_element(EvntDts_51);
      }
      Instrmt_51.add_element(CmplxEvnt_51);
    }
    elt.add_element(Instrmt_51);
  } // end Instrmt
  { // Undly
    xml_element Undly_68{"Undly"};
    multiset<string> Undly_68_set;
    Undly_68.add_attribute("Sym", "UnderlyingSymbol_t_824322202"); // 1
    Undly_68_set.insert("UnderlyingSymbol_t_824322202");
    Undly_68.add_attribute("Sfx", "CD"); // 1
    Undly_68_set.insert("CD");
    Undly_68.add_attribute("ID", "UnderlyingSecurityID_t_1199356824"); // 1
    Undly_68_set.insert("UnderlyingSecurityID_t_1199356824");
    Undly_68.add_attribute("Src", "A"); // 1
    Undly_68_set.insert("A");
    Undly_68.add_attribute("Prod", "2"); // 1
    Undly_68_set.insert("2");
    Undly_68.add_attribute("CFI", "UnderlyingCFICode_t_108376907"); // 1
    Undly_68_set.insert("UnderlyingCFICode_t_108376907");
    Undly_68.add_attribute("SecTyp", "ONITE"); // 1
    Undly_68_set.insert("ONITE");
    Undly_68.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1248754758"); // 1
    Undly_68_set.insert("UnderlyingSecuritySubType_t_1248754758");
    Undly_68.add_attribute("MMY", "296401693"); // 1
    Undly_68_set.insert("296401693");
    Undly_68.add_attribute("Mat", "UnderlyingMaturityDate_t_1463380261"); // 1
    Undly_68_set.insert("UnderlyingMaturityDate_t_1463380261");
    Undly_68.add_attribute("MatTm", "92489306"); // 1
    Undly_68_set.insert("92489306");
    Undly_68.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_830560497"); // 1
    Undly_68_set.insert("UnderlyingCouponPaymentDate_t_830560497");
    Undly_68.add_attribute("RestrctTyp", "MM"); // 1
    Undly_68_set.insert("MM");
    Undly_68.add_attribute("Snrty", "SB"); // 1
    Undly_68_set.insert("SB");
    Undly_68.add_attribute("NotlPctOut", "12948076.310000"); // 1
    Undly_68_set.insert("12948076.310000");
    Undly_68.add_attribute("OrigNotlPctOut", "9162446.470000"); // 1
    Undly_68_set.insert("9162446.470000");
    Undly_68.add_attribute("AttchPnt", "18071214.900000"); // 1
    Undly_68_set.insert("18071214.900000");
    Undly_68.add_attribute("DetchPnt", "2625343.790000"); // 1
    Undly_68_set.insert("2625343.790000");
    Undly_68.add_attribute("Issued", "UnderlyingIssueDate_t_1042944007"); // 1
    Undly_68_set.insert("UnderlyingIssueDate_t_1042944007");
    Undly_68.add_attribute("RepoCollSecTyp", "1747753358"); // 1
    Undly_68_set.insert("1747753358");
    Undly_68.add_attribute("RepoTrm", "1878343077"); // 1
    Undly_68_set.insert("1878343077");
    Undly_68.add_attribute("RepoRt", "3042917.740000"); // 1
    Undly_68_set.insert("3042917.740000");
    Undly_68.add_attribute("Fctr", "11434920.820000"); // 1
    Undly_68_set.insert("11434920.820000");
    Undly_68.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1543613172"); // 1
    Undly_68_set.insert("UnderlyingCreditRating_t_1543613172");
    Undly_68.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_457725595"); // 1
    Undly_68_set.insert("UnderlyingInstrRegistry_t_457725595");
    Undly_68.add_attribute("Ctry", "774154883"); // 1
    Undly_68_set.insert("774154883");
    Undly_68.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_327780338"); // 1
    Undly_68_set.insert("UnderlyingStateOrProvinceOfIssue_t_327780338");
    Undly_68.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_709510061"); // 1
    Undly_68_set.insert("UnderlyingLocaleOfIssue_t_709510061");
    Undly_68.add_attribute("Redeem", "UnderlyingRedemptionDate_t_675451332"); // 1
    Undly_68_set.insert("UnderlyingRedemptionDate_t_675451332");
    Undly_68.add_attribute("StrkPx", "2041118.690000"); // 1
    Undly_68_set.insert("2041118.690000");
    Undly_68.add_attribute("StrkCcy", "JPY"); // 1
    Undly_68_set.insert("JPY");
    Undly_68.add_attribute("OptA", "559498447"); // 1
    Undly_68_set.insert("559498447");
    Undly_68.add_attribute("Mult", "14589789.130000"); // 1
    Undly_68_set.insert("14589789.130000");
    Undly_68.add_attribute("MultTyp", "1"); // 1
    Undly_68_set.insert("1");
    Undly_68.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_68_set.insert("4");
    Undly_68.add_attribute("UOM", "t"); // 1
    Undly_68_set.insert("t");
    Undly_68.add_attribute("UOMQty", "16179731.910000"); // 1
    Undly_68_set.insert("16179731.910000");
    Undly_68.add_attribute("PxUOM", "MWh"); // 1
    Undly_68_set.insert("MWh");
    Undly_68.add_attribute("PxUOMQty", "18637575.130000"); // 1
    Undly_68_set.insert("18637575.130000");
    Undly_68.add_attribute("TmUnit", "S"); // 1
    Undly_68_set.insert("S");
    Undly_68.add_attribute("ExerStyle", "2"); // 1
    Undly_68_set.insert("2");
    Undly_68.add_attribute("CpnRt", "5468343.630000"); // 1
    Undly_68_set.insert("5468343.630000");
    Undly_68.add_attribute("Exch", "UnderlyingSecurityExchange_t_2048850378"); // 1
    Undly_68_set.insert("UnderlyingSecurityExchange_t_2048850378");
    Undly_68.add_attribute("Issr", "UnderlyingIssuer_t_2027524171"); // 1
    Undly_68_set.insert("UnderlyingIssuer_t_2027524171");
    Undly_68.add_attribute("EncUndIssrLen", "1841641994"); // 1
    Undly_68_set.insert("1841641994");
    Undly_68.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_817611377"); // 1
    Undly_68_set.insert("EncodedUnderlyingIssuer_t_817611377");
    Undly_68.add_attribute("Desc", "UnderlyingSecurityDesc_t_1687162013"); // 1
    Undly_68_set.insert("UnderlyingSecurityDesc_t_1687162013");
    Undly_68.add_attribute("EncUndSecDescLen", "2104176374"); // 1
    Undly_68_set.insert("2104176374");
    Undly_68.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1860555385"); // 1
    Undly_68_set.insert("EncodedUnderlyingSecurityDesc_t_1860555385");
    Undly_68.add_attribute("CPPgm", "UnderlyingCPProgram_t_1287431723"); // 1
    Undly_68_set.insert("UnderlyingCPProgram_t_1287431723");
    Undly_68.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1835035803"); // 1
    Undly_68_set.insert("UnderlyingCPRegType_t_1835035803");
    Undly_68.add_attribute("AllocPct", "173635.110000"); // 1
    Undly_68_set.insert("173635.110000");
    Undly_68.add_attribute("Ccy", "EUR"); // 1
    Undly_68_set.insert("EUR");
    Undly_68.add_attribute("Qty", "4750891.070000"); // 1
    Undly_68_set.insert("4750891.070000");
    Undly_68.add_attribute("SettlTyp", "4"); // 1
    Undly_68_set.insert("4");
    Undly_68.add_attribute("CashAmt", "UnderlyingCashAmount_t_1558945665"); // 1
    Undly_68_set.insert("UnderlyingCashAmount_t_1558945665");
    Undly_68.add_attribute("CashTyp", "FIXED"); // 1
    Undly_68_set.insert("FIXED");
    Undly_68.add_attribute("Px", "17330463.730000"); // 1
    Undly_68_set.insert("17330463.730000");
    Undly_68.add_attribute("DirtPx", "17630575.340000"); // 1
    Undly_68_set.insert("17630575.340000");
    Undly_68.add_attribute("EndPx", "14442212.570000"); // 1
    Undly_68_set.insert("14442212.570000");
    Undly_68.add_attribute("StartVal", "UnderlyingStartValue_t_1085336260"); // 1
    Undly_68_set.insert("UnderlyingStartValue_t_1085336260");
    Undly_68.add_attribute("CurVal", "UnderlyingCurrentValue_t_175072334"); // 1
    Undly_68_set.insert("UnderlyingCurrentValue_t_175072334");
    Undly_68.add_attribute("EndVal", "UnderlyingEndValue_t_755716522"); // 1
    Undly_68_set.insert("UnderlyingEndValue_t_755716522");
    Undly_68.add_attribute("AdjQty", "7963237.920000"); // 1
    Undly_68_set.insert("7963237.920000");
    Undly_68.add_attribute("FxRate", "2631866.680000"); // 1
    Undly_68_set.insert("2631866.680000");
    Undly_68.add_attribute("FxRateCalc", "M"); // 1
    Undly_68_set.insert("M");
    Undly_68.add_attribute("CapValu", "UnderlyingCapValue_t_266813335"); // 1
    Undly_68_set.insert("UnderlyingCapValue_t_266813335");
    Undly_68.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1600055760"); // 1
    Undly_68_set.insert("UnderlyingSettlMethod_t_1600055760");
    Undly_68.add_attribute("PutCall", "2039346208"); // 1
    Undly_68_set.insert("2039346208");
    all_values.push_back(Undly_68_set);
    all_compo_names.insert("Undly_68_set");

    {
      xml_element UndAID_68{"UndAID"};
      multiset<string> UndAID_68_set;
      UndAID_68.add_attribute("AltID", "UnderlyingSecurityAltID_t_1200683139"); // 2
      UndAID_68_set.insert("UnderlyingSecurityAltID_t_1200683139");
      UndAID_68.add_attribute("AltIDSrc", "C"); // 2
      UndAID_68_set.insert("C");
      all_values.push_back(UndAID_68_set);
      all_compo_names.insert("UndAID_68_set");

      Undly_68.add_element(UndAID_68);
    }
    {
      xml_element Stip_105{"Stip"};
      multiset<string> Stip_105_set;
      Stip_105.add_attribute("Typ", "RATING"); // 2
      Stip_105_set.insert("RATING");
      Stip_105.add_attribute("Val", "UnderlyingStipValue_t_1102049869"); // 2
      Stip_105_set.insert("UnderlyingStipValue_t_1102049869");
      all_values.push_back(Stip_105_set);
      all_compo_names.insert("Stip_105_set");

      Undly_68.add_element(Stip_105);
    }
    {
      xml_element Pty_268{"Pty"};
      multiset<string> Pty_268_set;
      Pty_268.add_attribute("ID", "UnderlyingInstrumentPartyID_t_761971034"); // 2
      Pty_268_set.insert("UnderlyingInstrumentPartyID_t_761971034");
      Pty_268.add_attribute("Src", "6"); // 2
      Pty_268_set.insert("6");
      Pty_268.add_attribute("R", "16"); // 2
      Pty_268_set.insert("16");
      all_values.push_back(Pty_268_set);
      all_compo_names.insert("Pty_268_set");

      {
        xml_element Sub_268{"Sub"};
        multiset<string> Sub_268_set;
        Sub_268.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_301649399"); // 3
        Sub_268_set.insert("UnderlyingInstrumentPartySubID_t_301649399");
        Sub_268.add_attribute("Typ", "4"); // 3
        Sub_268_set.insert("4");
        all_values.push_back(Sub_268_set);
        all_compo_names.insert("Sub_268_set");

        Pty_268.add_element(Sub_268);
      }
      Undly_68.add_element(Pty_268);
    }
    elt.add_element(Undly_68);
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
