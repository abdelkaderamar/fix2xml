#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassActionRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassActionRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1093910197"); // 0
  OrderMassActionRequest_message_t_0.insert("ClOrdID_t_1093910197");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1788352929"); // 0
  OrderMassActionRequest_message_t_0.insert("SecondaryClOrdID_t_1788352929");
  elt.add_attribute("MassActionType", "1"); // 0
  OrderMassActionRequest_message_t_0.insert("1");
  elt.add_attribute("MassActionScope", "12"); // 0
  OrderMassActionRequest_message_t_0.insert("12");
  elt.add_attribute("MktID", "MarketID_t_799207399"); // 0
  OrderMassActionRequest_message_t_0.insert("MarketID_t_799207399");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_624184069"); // 0
  OrderMassActionRequest_message_t_0.insert("MarketSegmentID_t_624184069");
  elt.add_attribute("SesID", "5"); // 0
  OrderMassActionRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "6"); // 0
  OrderMassActionRequest_message_t_0.insert("6");
  elt.add_attribute("Side", "4"); // 0
  OrderMassActionRequest_message_t_0.insert("4");
  elt.add_attribute("TxnTm", "TransactTime_t_2141947783"); // 0
  OrderMassActionRequest_message_t_0.insert("TransactTime_t_2141947783");
  elt.add_attribute("Txt", "Text_t_1397462997"); // 0
  OrderMassActionRequest_message_t_0.insert("Text_t_1397462997");
  elt.add_attribute("EncTxtLen", "1480706598"); // 0
  OrderMassActionRequest_message_t_0.insert("1480706598");
  elt.add_attribute("EncTxt", "EncodedText_t_1310064640"); // 0
  OrderMassActionRequest_message_t_0.insert("EncodedText_t_1310064640");
  all_values.push_back(OrderMassActionRequest_message_t_0);
  all_compo_names.insert("OrderMassActionRequest_message_t");

  { // Hdr
    xml_element Hdr_60{"Hdr"};
    multiset<string> Hdr_60_set;
    Hdr_60.add_attribute("SeqNum", "1179213136"); // 1
    Hdr_60_set.insert("1179213136");
    Hdr_60.add_attribute("SID", "SenderCompID_t_2139540644"); // 1
    Hdr_60_set.insert("SenderCompID_t_2139540644");
    Hdr_60.add_attribute("TID", "TargetCompID_t_1800400628"); // 1
    Hdr_60_set.insert("TargetCompID_t_1800400628");
    Hdr_60.add_attribute("OBID", "OnBehalfOfCompID_t_754258511"); // 1
    Hdr_60_set.insert("OnBehalfOfCompID_t_754258511");
    Hdr_60.add_attribute("D2ID", "DeliverToCompID_t_1303947462"); // 1
    Hdr_60_set.insert("DeliverToCompID_t_1303947462");
    Hdr_60.add_attribute("SSub", "SenderSubID_t_573508004"); // 1
    Hdr_60_set.insert("SenderSubID_t_573508004");
    Hdr_60.add_attribute("SLoc", "SenderLocationID_t_222736984"); // 1
    Hdr_60_set.insert("SenderLocationID_t_222736984");
    Hdr_60.add_attribute("TSub", "TargetSubID_t_475229530"); // 1
    Hdr_60_set.insert("TargetSubID_t_475229530");
    Hdr_60.add_attribute("TLoc", "TargetLocationID_t_802925946"); // 1
    Hdr_60_set.insert("TargetLocationID_t_802925946");
    Hdr_60.add_attribute("OBSub", "OnBehalfOfSubID_t_834171784"); // 1
    Hdr_60_set.insert("OnBehalfOfSubID_t_834171784");
    Hdr_60.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1991526101"); // 1
    Hdr_60_set.insert("OnBehalfOfLocationID_t_1991526101");
    Hdr_60.add_attribute("D2Sub", "DeliverToSubID_t_1589024519"); // 1
    Hdr_60_set.insert("DeliverToSubID_t_1589024519");
    Hdr_60.add_attribute("D2Loc", "DeliverToLocationID_t_1099487128"); // 1
    Hdr_60_set.insert("DeliverToLocationID_t_1099487128");
    Hdr_60.add_attribute("PosDup", "N"); // 1
    Hdr_60_set.insert("N");
    Hdr_60.add_attribute("PosRsnd", "Y"); // 1
    Hdr_60_set.insert("Y");
    Hdr_60.add_attribute("Snt", "SendingTime_t_1768339031"); // 1
    Hdr_60_set.insert("SendingTime_t_1768339031");
    Hdr_60.add_attribute("OrigSnt", "OrigSendingTime_t_502657559"); // 1
    Hdr_60_set.insert("OrigSendingTime_t_502657559");
    Hdr_60.add_attribute("MsgEncd", "MessageEncoding_t_1503605450"); // 1
    Hdr_60_set.insert("MessageEncoding_t_1503605450");
    all_values.push_back(Hdr_60_set);
    all_compo_names.insert("Hdr_60_set");

    {
      xml_element Hop_60{"Hop"};
      multiset<string> Hop_60_set;
      Hop_60.add_attribute("ID", "HopCompID_t_714765581"); // 2
      Hop_60_set.insert("HopCompID_t_714765581");
      Hop_60.add_attribute("Ref", "143526840"); // 2
      Hop_60_set.insert("143526840");
      Hop_60.add_attribute("Snt", "HopSendingTime_t_1707200144"); // 2
      Hop_60_set.insert("HopSendingTime_t_1707200144");
      all_values.push_back(Hop_60_set);
      all_compo_names.insert("Hop_60_set");

      Hdr_60.add_element(Hop_60);
    }
    elt.add_element(Hdr_60);
  } // end Hdr
  { // Pty
    xml_element Pty_283{"Pty"};
    multiset<string> Pty_283_set;
    Pty_283.add_attribute("ID", "PartyID_t_942734239"); // 1
    Pty_283_set.insert("PartyID_t_942734239");
    Pty_283.add_attribute("Src", "3"); // 1
    Pty_283_set.insert("3");
    Pty_283.add_attribute("R", "60"); // 1
    Pty_283_set.insert("60");
    all_values.push_back(Pty_283_set);
    all_compo_names.insert("Pty_283_set");

    {
      xml_element Sub_283{"Sub"};
      multiset<string> Sub_283_set;
      Sub_283.add_attribute("ID", "PartySubID_t_959808428"); // 2
      Sub_283_set.insert("PartySubID_t_959808428");
      Sub_283.add_attribute("Typ", "4"); // 2
      Sub_283_set.insert("4");
      all_values.push_back(Sub_283_set);
      all_compo_names.insert("Sub_283_set");

      Pty_283.add_element(Sub_283);
    }
    elt.add_element(Pty_283);
  } // end Pty
  { // Pty
    xml_element Pty_284{"Pty"};
    multiset<string> Pty_284_set;
    Pty_284.add_attribute("ID", "PartyID_t_1849069176"); // 1
    Pty_284_set.insert("PartyID_t_1849069176");
    Pty_284.add_attribute("Src", "A"); // 1
    Pty_284_set.insert("A");
    Pty_284.add_attribute("R", "12"); // 1
    Pty_284_set.insert("12");
    all_values.push_back(Pty_284_set);
    all_compo_names.insert("Pty_284_set");

    {
      xml_element Sub_284{"Sub"};
      multiset<string> Sub_284_set;
      Sub_284.add_attribute("ID", "PartySubID_t_1011650168"); // 2
      Sub_284_set.insert("PartySubID_t_1011650168");
      Sub_284.add_attribute("Typ", "9"); // 2
      Sub_284_set.insert("9");
      all_values.push_back(Sub_284_set);
      all_compo_names.insert("Sub_284_set");

      Pty_284.add_element(Sub_284);
    }
    elt.add_element(Pty_284);
  } // end Pty
  { // Pty
    xml_element Pty_285{"Pty"};
    multiset<string> Pty_285_set;
    Pty_285.add_attribute("ID", "PartyID_t_1396841668"); // 1
    Pty_285_set.insert("PartyID_t_1396841668");
    Pty_285.add_attribute("Src", "4"); // 1
    Pty_285_set.insert("4");
    Pty_285.add_attribute("R", "21"); // 1
    Pty_285_set.insert("21");
    all_values.push_back(Pty_285_set);
    all_compo_names.insert("Pty_285_set");

    {
      xml_element Sub_285{"Sub"};
      multiset<string> Sub_285_set;
      Sub_285.add_attribute("ID", "PartySubID_t_553305482"); // 2
      Sub_285_set.insert("PartySubID_t_553305482");
      Sub_285.add_attribute("Typ", "30"); // 2
      Sub_285_set.insert("30");
      all_values.push_back(Sub_285_set);
      all_compo_names.insert("Sub_285_set");

      Pty_285.add_element(Sub_285);
    }
    elt.add_element(Pty_285);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_4{"TgtPty"};
    multiset<string> TgtPty_4_set;
    TgtPty_4.add_attribute("ID", "TargetPartyID_t_1028535012"); // 1
    TgtPty_4_set.insert("TargetPartyID_t_1028535012");
    TgtPty_4.add_attribute("Src", "I"); // 1
    TgtPty_4_set.insert("I");
    TgtPty_4.add_attribute("R", "75"); // 1
    TgtPty_4_set.insert("75");
    all_values.push_back(TgtPty_4_set);
    all_compo_names.insert("TgtPty_4_set");

    elt.add_element(TgtPty_4);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_50{"Instrmt"};
    multiset<string> Instrmt_50_set;
    Instrmt_50.add_attribute("Sym", "Symbol_t_872577465"); // 1
    Instrmt_50_set.insert("Symbol_t_872577465");
    Instrmt_50.add_attribute("Sfx", "WI"); // 1
    Instrmt_50_set.insert("WI");
    Instrmt_50.add_attribute("ID", "SecurityID_t_4688025"); // 1
    Instrmt_50_set.insert("SecurityID_t_4688025");
    Instrmt_50.add_attribute("Src", "6"); // 1
    Instrmt_50_set.insert("6");
    Instrmt_50.add_attribute("Prod", "9"); // 1
    Instrmt_50_set.insert("9");
    Instrmt_50.add_attribute("ProdCmplx", "ProductComplex_t_1773027057"); // 1
    Instrmt_50_set.insert("ProductComplex_t_1773027057");
    Instrmt_50.add_attribute("SecGrp", "SecurityGroup_t_2040732212"); // 1
    Instrmt_50_set.insert("SecurityGroup_t_2040732212");
    Instrmt_50.add_attribute("CFI", "CFICode_t_447176896"); // 1
    Instrmt_50_set.insert("CFICode_t_447176896");
    Instrmt_50.add_attribute("SecTyp", "REPO"); // 1
    Instrmt_50_set.insert("REPO");
    Instrmt_50.add_attribute("SubTyp", "SecuritySubType_t_36775404"); // 1
    Instrmt_50_set.insert("SecuritySubType_t_36775404");
    Instrmt_50.add_attribute("MMY", "6893393"); // 1
    Instrmt_50_set.insert("6893393");
    Instrmt_50.add_attribute("MatDt", "MaturityDate_t_912422498"); // 1
    Instrmt_50_set.insert("MaturityDate_t_912422498");
    Instrmt_50.add_attribute("MatTm", "979509644"); // 1
    Instrmt_50_set.insert("979509644");
    Instrmt_50.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_190793959"); // 1
    Instrmt_50_set.insert("SettleOnOpenFlag_t_190793959");
    Instrmt_50.add_attribute("AsgnMeth", "619543891"); // 1
    Instrmt_50_set.insert("619543891");
    Instrmt_50.add_attribute("Status", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("CpnPmt", "CouponPaymentDate_t_114872032"); // 1
    Instrmt_50_set.insert("CouponPaymentDate_t_114872032");
    Instrmt_50.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_50_set.insert("XR");
    Instrmt_50.add_attribute("Snrty", "SB"); // 1
    Instrmt_50_set.insert("SB");
    Instrmt_50.add_attribute("NotlPctOut", "15196567.030000"); // 1
    Instrmt_50_set.insert("15196567.030000");
    Instrmt_50.add_attribute("OrigNotlPctOut", "13327795.880000"); // 1
    Instrmt_50_set.insert("13327795.880000");
    Instrmt_50.add_attribute("AttchPnt", "13906231.140000"); // 1
    Instrmt_50_set.insert("13906231.140000");
    Instrmt_50.add_attribute("DetchPnt", "7690147.230000"); // 1
    Instrmt_50_set.insert("7690147.230000");
    Instrmt_50.add_attribute("Issued", "IssueDate_t_1997346737"); // 1
    Instrmt_50_set.insert("IssueDate_t_1997346737");
    Instrmt_50.add_attribute("RepoCollSecTyp", "1386398891"); // 1
    Instrmt_50_set.insert("1386398891");
    Instrmt_50.add_attribute("RepoTrm", "1322320205"); // 1
    Instrmt_50_set.insert("1322320205");
    Instrmt_50.add_attribute("RepoRt", "10879382.420000"); // 1
    Instrmt_50_set.insert("10879382.420000");
    Instrmt_50.add_attribute("Fctr", "16049116.530000"); // 1
    Instrmt_50_set.insert("16049116.530000");
    Instrmt_50.add_attribute("CrdRtg", "CreditRating_t_203371570"); // 1
    Instrmt_50_set.insert("CreditRating_t_203371570");
    Instrmt_50.add_attribute("Rgstry", "InstrRegistry_t_981455693"); // 1
    Instrmt_50_set.insert("InstrRegistry_t_981455693");
    Instrmt_50.add_attribute("IssuCtry", "510112550"); // 1
    Instrmt_50_set.insert("510112550");
    Instrmt_50.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1075949035"); // 1
    Instrmt_50_set.insert("StateOrProvinceOfIssue_t_1075949035");
    Instrmt_50.add_attribute("Lcl", "LocaleOfIssue_t_316514016"); // 1
    Instrmt_50_set.insert("LocaleOfIssue_t_316514016");
    Instrmt_50.add_attribute("Redeem", "RedemptionDate_t_514800576"); // 1
    Instrmt_50_set.insert("RedemptionDate_t_514800576");
    Instrmt_50.add_attribute("StrkPx", "4665400.410000"); // 1
    Instrmt_50_set.insert("4665400.410000");
    Instrmt_50.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_50_set.insert("EUR");
    Instrmt_50.add_attribute("StrkMult", "3597886.050000"); // 1
    Instrmt_50_set.insert("3597886.050000");
    Instrmt_50.add_attribute("StrkValu", "18547460.070000"); // 1
    Instrmt_50_set.insert("18547460.070000");
    Instrmt_50.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_50_set.insert("4");
    Instrmt_50.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("StrkPxBndryPrcsn", "18616394.000000"); // 1
    Instrmt_50_set.insert("18616394.000000");
    Instrmt_50.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("OptAt", "1376073654"); // 1
    Instrmt_50_set.insert("1376073654");
    Instrmt_50.add_attribute("Mult", "20524333.590000"); // 1
    Instrmt_50_set.insert("20524333.590000");
    Instrmt_50.add_attribute("MultTyp", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_50_set.insert("3");
    Instrmt_50.add_attribute("MinPxIncr", "198217.430000"); // 1
    Instrmt_50_set.insert("198217.430000");
    Instrmt_50.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_186265136"); // 1
    Instrmt_50_set.insert("MinPriceIncrementAmount_t_186265136");
    Instrmt_50.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_50_set.insert("oz_tr");
    Instrmt_50.add_attribute("UOMQty", "15394784.460000"); // 1
    Instrmt_50_set.insert("15394784.460000");
    Instrmt_50.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_50_set.insert("Bbl");
    Instrmt_50.add_attribute("PxUOMQty", "4126697.450000"); // 1
    Instrmt_50_set.insert("4126697.450000");
    Instrmt_50.add_attribute("SettlMeth", "C"); // 1
    Instrmt_50_set.insert("C");
    Instrmt_50.add_attribute("ExerStyle", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_50_set.insert("3");
    Instrmt_50.add_attribute("OptPayAmt", "OptPayoutAmount_t_1483329727"); // 1
    Instrmt_50_set.insert("OptPayoutAmount_t_1483329727");
    Instrmt_50.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_50_set.insert("PCTPAR");
    Instrmt_50.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_50_set.insert("FUTDA");
    Instrmt_50.add_attribute("ListMeth", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("CapPx", "12908181.010000"); // 1
    Instrmt_50_set.insert("12908181.010000");
    Instrmt_50.add_attribute("FlrPx", "17666091.920000"); // 1
    Instrmt_50_set.insert("17666091.920000");
    Instrmt_50.add_attribute("PutCall", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("FlexInd", "false"); // 1
    Instrmt_50_set.insert("false");
    Instrmt_50.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_50_set.insert("true");
    Instrmt_50.add_attribute("TmUnit", "H"); // 1
    Instrmt_50_set.insert("H");
    Instrmt_50.add_attribute("CpnRt", "8674175.800000"); // 1
    Instrmt_50_set.insert("8674175.800000");
    Instrmt_50.add_attribute("Exch", "SecurityExchange_t_274270105"); // 1
    Instrmt_50_set.insert("SecurityExchange_t_274270105");
    Instrmt_50.add_attribute("PosLmt", "1441495331"); // 1
    Instrmt_50_set.insert("1441495331");
    Instrmt_50.add_attribute("NTPosLmt", "574679939"); // 1
    Instrmt_50_set.insert("574679939");
    Instrmt_50.add_attribute("Issr", "Issuer_t_754923080"); // 1
    Instrmt_50_set.insert("Issuer_t_754923080");
    Instrmt_50.add_attribute("EncIssrLen", "1838059341"); // 1
    Instrmt_50_set.insert("1838059341");
    Instrmt_50.add_attribute("EncIssr", "EncodedIssuer_t_288835691"); // 1
    Instrmt_50_set.insert("EncodedIssuer_t_288835691");
    Instrmt_50.add_attribute("Desc", "SecurityDesc_t_514906"); // 1
    Instrmt_50_set.insert("SecurityDesc_t_514906");
    Instrmt_50.add_attribute("EncSecDescLen", "1066649347"); // 1
    Instrmt_50_set.insert("1066649347");
    Instrmt_50.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_193785402"); // 1
    Instrmt_50_set.insert("EncodedSecurityDesc_t_193785402");
    Instrmt_50.add_attribute("Pool", "Pool_t_2013134271"); // 1
    Instrmt_50_set.insert("Pool_t_2013134271");
    Instrmt_50.add_attribute("CSetMo", "87073777"); // 1
    Instrmt_50_set.insert("87073777");
    Instrmt_50.add_attribute("CPPgm", "99"); // 1
    Instrmt_50_set.insert("99");
    Instrmt_50.add_attribute("CPRegT", "CPRegType_t_51915759"); // 1
    Instrmt_50_set.insert("CPRegType_t_51915759");
    Instrmt_50.add_attribute("Dated", "DatedDate_t_1256604056"); // 1
    Instrmt_50_set.insert("DatedDate_t_1256604056");
    Instrmt_50.add_attribute("IntAcrl", "InterestAccrualDate_t_1753085591"); // 1
    Instrmt_50_set.insert("InterestAccrualDate_t_1753085591");
    all_values.push_back(Instrmt_50_set);
    all_compo_names.insert("Instrmt_50_set");

    {
      xml_element AID_53{"AID"};
      multiset<string> AID_53_set;
      AID_53.add_attribute("AltID", "SecurityAltID_t_1570960484"); // 2
      AID_53_set.insert("SecurityAltID_t_1570960484");
      AID_53.add_attribute("AltIDSrc", "K"); // 2
      AID_53_set.insert("K");
      all_values.push_back(AID_53_set);
      all_compo_names.insert("AID_53_set");

      Instrmt_50.add_element(AID_53);
    }
    {
      xml_element SecXML_53{"SecXML"};
      multiset<string> SecXML_53_set;
      SecXML_53.add_attribute("Schema", "SecurityXMLSchema_t_1914095113"); // 2
      SecXML_53_set.insert("SecurityXMLSchema_t_1914095113");
      all_values.push_back(SecXML_53_set);
      all_compo_names.insert("SecXML_53_set");

      Instrmt_50.add_element(SecXML_53);
    }
    {
      xml_element Evnt_53{"Evnt"};
      multiset<string> Evnt_53_set;
      Evnt_53.add_attribute("EventTyp", "9"); // 2
      Evnt_53_set.insert("9");
      Evnt_53.add_attribute("Dt", "EventDate_t_1320858791"); // 2
      Evnt_53_set.insert("EventDate_t_1320858791");
      Evnt_53.add_attribute("Tm", "EventTime_t_1249941193"); // 2
      Evnt_53_set.insert("EventTime_t_1249941193");
      Evnt_53.add_attribute("Px", "11017470.570000"); // 2
      Evnt_53_set.insert("11017470.570000");
      Evnt_53.add_attribute("Txt", "EventText_t_429871785"); // 2
      Evnt_53_set.insert("EventText_t_429871785");
      all_values.push_back(Evnt_53_set);
      all_compo_names.insert("Evnt_53_set");

      Instrmt_50.add_element(Evnt_53);
    }
    {
      xml_element Pty_286{"Pty"};
      multiset<string> Pty_286_set;
      Pty_286.add_attribute("ID", "InstrumentPartyID_t_789158842"); // 2
      Pty_286_set.insert("InstrumentPartyID_t_789158842");
      Pty_286.add_attribute("Src", "9"); // 2
      Pty_286_set.insert("9");
      Pty_286.add_attribute("R", "48"); // 2
      Pty_286_set.insert("48");
      all_values.push_back(Pty_286_set);
      all_compo_names.insert("Pty_286_set");

      {
        xml_element Sub_286{"Sub"};
        multiset<string> Sub_286_set;
        Sub_286.add_attribute("ID", "InstrumentPartySubID_t_1404325527"); // 3
        Sub_286_set.insert("InstrumentPartySubID_t_1404325527");
        Sub_286.add_attribute("Typ", "18"); // 3
        Sub_286_set.insert("18");
        all_values.push_back(Sub_286_set);
        all_compo_names.insert("Sub_286_set");

        Pty_286.add_element(Sub_286);
      }
      Instrmt_50.add_element(Pty_286);
    }
    {
      xml_element CmplxEvnt_50{"CmplxEvnt"};
      multiset<string> CmplxEvnt_50_set;
      CmplxEvnt_50.add_attribute("Typ", "8"); // 2
      CmplxEvnt_50_set.insert("8");
      CmplxEvnt_50.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_338548605"); // 2
      CmplxEvnt_50_set.insert("ComplexOptPayoutAmount_t_338548605");
      CmplxEvnt_50.add_attribute("Px", "5723475.590000"); // 2
      CmplxEvnt_50_set.insert("5723475.590000");
      CmplxEvnt_50.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_50_set.insert("1");
      CmplxEvnt_50.add_attribute("PxBndryPrcsn", "17800439.370000"); // 2
      CmplxEvnt_50_set.insert("17800439.370000");
      CmplxEvnt_50.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_50_set.insert("2");
      CmplxEvnt_50.add_attribute("Cond", "1"); // 2
      CmplxEvnt_50_set.insert("1");
      all_values.push_back(CmplxEvnt_50_set);
      all_compo_names.insert("CmplxEvnt_50_set");

      {
        xml_element EvntDts_50{"EvntDts"};
        multiset<string> EvntDts_50_set;
        EvntDts_50.add_attribute("StartDt", "ComplexEventStartDate_t_1470619630"); // 3
        EvntDts_50_set.insert("ComplexEventStartDate_t_1470619630");
        EvntDts_50.add_attribute("EndDt", "ComplexEventEndDate_t_1435863189"); // 3
        EvntDts_50_set.insert("ComplexEventEndDate_t_1435863189");
        all_values.push_back(EvntDts_50_set);
        all_compo_names.insert("EvntDts_50_set");

        {
          xml_element EvntTms_50{"EvntTms"};
          multiset<string> EvntTms_50_set;
          EvntTms_50.add_attribute("StartTm", "1212631542"); // 4
          EvntTms_50_set.insert("1212631542");
          EvntTms_50.add_attribute("EndTm", "389785330"); // 4
          EvntTms_50_set.insert("389785330");
          all_values.push_back(EvntTms_50_set);
          all_compo_names.insert("EvntTms_50_set");

          EvntDts_50.add_element(EvntTms_50);
        }
        CmplxEvnt_50.add_element(EvntDts_50);
      }
      Instrmt_50.add_element(CmplxEvnt_50);
    }
    elt.add_element(Instrmt_50);
  } // end Instrmt
  { // Undly
    xml_element Undly_71{"Undly"};
    multiset<string> Undly_71_set;
    Undly_71.add_attribute("Sym", "UnderlyingSymbol_t_1629648591"); // 1
    Undly_71_set.insert("UnderlyingSymbol_t_1629648591");
    Undly_71.add_attribute("Sfx", "WI"); // 1
    Undly_71_set.insert("WI");
    Undly_71.add_attribute("ID", "UnderlyingSecurityID_t_476859107"); // 1
    Undly_71_set.insert("UnderlyingSecurityID_t_476859107");
    Undly_71.add_attribute("Src", "F"); // 1
    Undly_71_set.insert("F");
    Undly_71.add_attribute("Prod", "8"); // 1
    Undly_71_set.insert("8");
    Undly_71.add_attribute("CFI", "UnderlyingCFICode_t_1733463164"); // 1
    Undly_71_set.insert("UnderlyingCFICode_t_1733463164");
    Undly_71.add_attribute("SecTyp", "FRN"); // 1
    Undly_71_set.insert("FRN");
    Undly_71.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_553674760"); // 1
    Undly_71_set.insert("UnderlyingSecuritySubType_t_553674760");
    Undly_71.add_attribute("MMY", "1255253318"); // 1
    Undly_71_set.insert("1255253318");
    Undly_71.add_attribute("Mat", "UnderlyingMaturityDate_t_1215469145"); // 1
    Undly_71_set.insert("UnderlyingMaturityDate_t_1215469145");
    Undly_71.add_attribute("MatTm", "1346059410"); // 1
    Undly_71_set.insert("1346059410");
    Undly_71.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_428628461"); // 1
    Undly_71_set.insert("UnderlyingCouponPaymentDate_t_428628461");
    Undly_71.add_attribute("RestrctTyp", "MM"); // 1
    Undly_71_set.insert("MM");
    Undly_71.add_attribute("Snrty", "SR"); // 1
    Undly_71_set.insert("SR");
    Undly_71.add_attribute("NotlPctOut", "8585002.460000"); // 1
    Undly_71_set.insert("8585002.460000");
    Undly_71.add_attribute("OrigNotlPctOut", "11070855.330000"); // 1
    Undly_71_set.insert("11070855.330000");
    Undly_71.add_attribute("AttchPnt", "5454043.290000"); // 1
    Undly_71_set.insert("5454043.290000");
    Undly_71.add_attribute("DetchPnt", "9074975.750000"); // 1
    Undly_71_set.insert("9074975.750000");
    Undly_71.add_attribute("Issued", "UnderlyingIssueDate_t_363927412"); // 1
    Undly_71_set.insert("UnderlyingIssueDate_t_363927412");
    Undly_71.add_attribute("RepoCollSecTyp", "250334308"); // 1
    Undly_71_set.insert("250334308");
    Undly_71.add_attribute("RepoTrm", "1090421025"); // 1
    Undly_71_set.insert("1090421025");
    Undly_71.add_attribute("RepoRt", "7024760.180000"); // 1
    Undly_71_set.insert("7024760.180000");
    Undly_71.add_attribute("Fctr", "8226818.680000"); // 1
    Undly_71_set.insert("8226818.680000");
    Undly_71.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1547614581"); // 1
    Undly_71_set.insert("UnderlyingCreditRating_t_1547614581");
    Undly_71.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_335036307"); // 1
    Undly_71_set.insert("UnderlyingInstrRegistry_t_335036307");
    Undly_71.add_attribute("Ctry", "1969709366"); // 1
    Undly_71_set.insert("1969709366");
    Undly_71.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_612247569"); // 1
    Undly_71_set.insert("UnderlyingStateOrProvinceOfIssue_t_612247569");
    Undly_71.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1805655937"); // 1
    Undly_71_set.insert("UnderlyingLocaleOfIssue_t_1805655937");
    Undly_71.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1258088908"); // 1
    Undly_71_set.insert("UnderlyingRedemptionDate_t_1258088908");
    Undly_71.add_attribute("StrkPx", "18248791.110000"); // 1
    Undly_71_set.insert("18248791.110000");
    Undly_71.add_attribute("StrkCcy", "CAN"); // 1
    Undly_71_set.insert("CAN");
    Undly_71.add_attribute("OptA", "755677628"); // 1
    Undly_71_set.insert("755677628");
    Undly_71.add_attribute("Mult", "5248167.270000"); // 1
    Undly_71_set.insert("5248167.270000");
    Undly_71.add_attribute("MultTyp", "0"); // 1
    Undly_71_set.insert("0");
    Undly_71.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_71_set.insert("2");
    Undly_71.add_attribute("UOM", "Alw"); // 1
    Undly_71_set.insert("Alw");
    Undly_71.add_attribute("UOMQty", "18848836.200000"); // 1
    Undly_71_set.insert("18848836.200000");
    Undly_71.add_attribute("PxUOM", "lbs"); // 1
    Undly_71_set.insert("lbs");
    Undly_71.add_attribute("PxUOMQty", "13660495.610000"); // 1
    Undly_71_set.insert("13660495.610000");
    Undly_71.add_attribute("TmUnit", "Wk"); // 1
    Undly_71_set.insert("Wk");
    Undly_71.add_attribute("ExerStyle", "0"); // 1
    Undly_71_set.insert("0");
    Undly_71.add_attribute("CpnRt", "17946780.220000"); // 1
    Undly_71_set.insert("17946780.220000");
    Undly_71.add_attribute("Exch", "UnderlyingSecurityExchange_t_1270795808"); // 1
    Undly_71_set.insert("UnderlyingSecurityExchange_t_1270795808");
    Undly_71.add_attribute("Issr", "UnderlyingIssuer_t_1938448894"); // 1
    Undly_71_set.insert("UnderlyingIssuer_t_1938448894");
    Undly_71.add_attribute("EncUndIssrLen", "505694620"); // 1
    Undly_71_set.insert("505694620");
    Undly_71.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_230397693"); // 1
    Undly_71_set.insert("EncodedUnderlyingIssuer_t_230397693");
    Undly_71.add_attribute("Desc", "UnderlyingSecurityDesc_t_336369575"); // 1
    Undly_71_set.insert("UnderlyingSecurityDesc_t_336369575");
    Undly_71.add_attribute("EncUndSecDescLen", "1413192195"); // 1
    Undly_71_set.insert("1413192195");
    Undly_71.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_594325105"); // 1
    Undly_71_set.insert("EncodedUnderlyingSecurityDesc_t_594325105");
    Undly_71.add_attribute("CPPgm", "UnderlyingCPProgram_t_586703883"); // 1
    Undly_71_set.insert("UnderlyingCPProgram_t_586703883");
    Undly_71.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_356129573"); // 1
    Undly_71_set.insert("UnderlyingCPRegType_t_356129573");
    Undly_71.add_attribute("AllocPct", "12968011.230000"); // 1
    Undly_71_set.insert("12968011.230000");
    Undly_71.add_attribute("Ccy", "GBP"); // 1
    Undly_71_set.insert("GBP");
    Undly_71.add_attribute("Qty", "16318374.300000"); // 1
    Undly_71_set.insert("16318374.300000");
    Undly_71.add_attribute("SettlTyp", "5"); // 1
    Undly_71_set.insert("5");
    Undly_71.add_attribute("CashAmt", "UnderlyingCashAmount_t_368508075"); // 1
    Undly_71_set.insert("UnderlyingCashAmount_t_368508075");
    Undly_71.add_attribute("CashTyp", "FIXED"); // 1
    Undly_71_set.insert("FIXED");
    Undly_71.add_attribute("Px", "3422167.300000"); // 1
    Undly_71_set.insert("3422167.300000");
    Undly_71.add_attribute("DirtPx", "459035.380000"); // 1
    Undly_71_set.insert("459035.380000");
    Undly_71.add_attribute("EndPx", "13379673.390000"); // 1
    Undly_71_set.insert("13379673.390000");
    Undly_71.add_attribute("StartVal", "UnderlyingStartValue_t_1082470581"); // 1
    Undly_71_set.insert("UnderlyingStartValue_t_1082470581");
    Undly_71.add_attribute("CurVal", "UnderlyingCurrentValue_t_801581166"); // 1
    Undly_71_set.insert("UnderlyingCurrentValue_t_801581166");
    Undly_71.add_attribute("EndVal", "UnderlyingEndValue_t_1862784066"); // 1
    Undly_71_set.insert("UnderlyingEndValue_t_1862784066");
    Undly_71.add_attribute("AdjQty", "15184965.210000"); // 1
    Undly_71_set.insert("15184965.210000");
    Undly_71.add_attribute("FxRate", "5399730.700000"); // 1
    Undly_71_set.insert("5399730.700000");
    Undly_71.add_attribute("FxRateCalc", "D"); // 1
    Undly_71_set.insert("D");
    Undly_71.add_attribute("CapValu", "UnderlyingCapValue_t_1255896493"); // 1
    Undly_71_set.insert("UnderlyingCapValue_t_1255896493");
    Undly_71.add_attribute("SetMeth", "UnderlyingSettlMethod_t_832039735"); // 1
    Undly_71_set.insert("UnderlyingSettlMethod_t_832039735");
    Undly_71.add_attribute("PutCall", "1192146222"); // 1
    Undly_71_set.insert("1192146222");
    all_values.push_back(Undly_71_set);
    all_compo_names.insert("Undly_71_set");

    {
      xml_element UndAID_71{"UndAID"};
      multiset<string> UndAID_71_set;
      UndAID_71.add_attribute("AltID", "UnderlyingSecurityAltID_t_61281963"); // 2
      UndAID_71_set.insert("UnderlyingSecurityAltID_t_61281963");
      UndAID_71.add_attribute("AltIDSrc", "1"); // 2
      UndAID_71_set.insert("1");
      all_values.push_back(UndAID_71_set);
      all_compo_names.insert("UndAID_71_set");

      Undly_71.add_element(UndAID_71);
    }
    {
      xml_element Stip_107{"Stip"};
      multiset<string> Stip_107_set;
      Stip_107.add_attribute("Typ", "PRICE"); // 2
      Stip_107_set.insert("PRICE");
      Stip_107.add_attribute("Val", "UnderlyingStipValue_t_1332077771"); // 2
      Stip_107_set.insert("UnderlyingStipValue_t_1332077771");
      all_values.push_back(Stip_107_set);
      all_compo_names.insert("Stip_107_set");

      Undly_71.add_element(Stip_107);
    }
    {
      xml_element Pty_287{"Pty"};
      multiset<string> Pty_287_set;
      Pty_287.add_attribute("ID", "UnderlyingInstrumentPartyID_t_113647408"); // 2
      Pty_287_set.insert("UnderlyingInstrumentPartyID_t_113647408");
      Pty_287.add_attribute("Src", "D"); // 2
      Pty_287_set.insert("D");
      Pty_287.add_attribute("R", "5"); // 2
      Pty_287_set.insert("5");
      all_values.push_back(Pty_287_set);
      all_compo_names.insert("Pty_287_set");

      {
        xml_element Sub_287{"Sub"};
        multiset<string> Sub_287_set;
        Sub_287.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_450016983"); // 3
        Sub_287_set.insert("UnderlyingInstrumentPartySubID_t_450016983");
        Sub_287.add_attribute("Typ", "27"); // 3
        Sub_287_set.insert("27");
        all_values.push_back(Sub_287_set);
        all_compo_names.insert("Sub_287_set");

        Pty_287.add_element(Sub_287);
      }
      Undly_71.add_element(Pty_287);
    }
    elt.add_element(Undly_71);
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
