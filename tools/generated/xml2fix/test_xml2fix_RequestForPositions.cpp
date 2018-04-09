#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositions.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositions_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPoss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositions_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_1572679673"); // 0
  RequestForPositions_message_t_0.insert("PosReqID_t_1572679673");
  elt.add_attribute("ReqTyp", "6"); // 0
  RequestForPositions_message_t_0.insert("6");
  elt.add_attribute("MtchStat", "1"); // 0
  RequestForPositions_message_t_0.insert("1");
  elt.add_attribute("SubReqTyp", "1"); // 0
  RequestForPositions_message_t_0.insert("1");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  RequestForPositions_message_t_0.insert("JPY");
  elt.add_attribute("Acct", "Account_t_1699198181"); // 0
  RequestForPositions_message_t_0.insert("Account_t_1699198181");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  RequestForPositions_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "3"); // 0
  RequestForPositions_message_t_0.insert("3");
  elt.add_attribute("Ccy", "JPY"); // 0
  RequestForPositions_message_t_0.insert("JPY");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_651763095"); // 0
  RequestForPositions_message_t_0.insert("ClearingBusinessDate_t_651763095");
  elt.add_attribute("SetSesID", "RTH"); // 0
  RequestForPositions_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_2060166346"); // 0
  RequestForPositions_message_t_0.insert("SettlSessSubID_t_2060166346");
  elt.add_attribute("TxnTm", "TransactTime_t_642124821"); // 0
  RequestForPositions_message_t_0.insert("TransactTime_t_642124821");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  RequestForPositions_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_2096104861"); // 0
  RequestForPositions_message_t_0.insert("ResponseDestination_t_2096104861");
  elt.add_attribute("Txt", "Text_t_2050260572"); // 0
  RequestForPositions_message_t_0.insert("Text_t_2050260572");
  elt.add_attribute("EncTxtLen", "275404531"); // 0
  RequestForPositions_message_t_0.insert("275404531");
  elt.add_attribute("EncTxt", "EncodedText_t_780956167"); // 0
  RequestForPositions_message_t_0.insert("EncodedText_t_780956167");
  all_values.push_back(RequestForPositions_message_t_0);
  all_compo_names.insert("RequestForPositions_message_t");

  { // Hdr
    xml_element Hdr_78{"Hdr"};
    multiset<string> Hdr_78_set;
    Hdr_78.add_attribute("SeqNum", "1805784619"); // 1
    Hdr_78_set.insert("1805784619");
    Hdr_78.add_attribute("SID", "SenderCompID_t_1476475169"); // 1
    Hdr_78_set.insert("SenderCompID_t_1476475169");
    Hdr_78.add_attribute("TID", "TargetCompID_t_1926874971"); // 1
    Hdr_78_set.insert("TargetCompID_t_1926874971");
    Hdr_78.add_attribute("OBID", "OnBehalfOfCompID_t_1336900667"); // 1
    Hdr_78_set.insert("OnBehalfOfCompID_t_1336900667");
    Hdr_78.add_attribute("D2ID", "DeliverToCompID_t_1199582512"); // 1
    Hdr_78_set.insert("DeliverToCompID_t_1199582512");
    Hdr_78.add_attribute("SSub", "SenderSubID_t_1257905131"); // 1
    Hdr_78_set.insert("SenderSubID_t_1257905131");
    Hdr_78.add_attribute("SLoc", "SenderLocationID_t_2029568304"); // 1
    Hdr_78_set.insert("SenderLocationID_t_2029568304");
    Hdr_78.add_attribute("TSub", "TargetSubID_t_968857927"); // 1
    Hdr_78_set.insert("TargetSubID_t_968857927");
    Hdr_78.add_attribute("TLoc", "TargetLocationID_t_112517312"); // 1
    Hdr_78_set.insert("TargetLocationID_t_112517312");
    Hdr_78.add_attribute("OBSub", "OnBehalfOfSubID_t_2043289613"); // 1
    Hdr_78_set.insert("OnBehalfOfSubID_t_2043289613");
    Hdr_78.add_attribute("OBLoc", "OnBehalfOfLocationID_t_553186693"); // 1
    Hdr_78_set.insert("OnBehalfOfLocationID_t_553186693");
    Hdr_78.add_attribute("D2Sub", "DeliverToSubID_t_1685196985"); // 1
    Hdr_78_set.insert("DeliverToSubID_t_1685196985");
    Hdr_78.add_attribute("D2Loc", "DeliverToLocationID_t_1945506960"); // 1
    Hdr_78_set.insert("DeliverToLocationID_t_1945506960");
    Hdr_78.add_attribute("PosDup", "N"); // 1
    Hdr_78_set.insert("N");
    Hdr_78.add_attribute("PosRsnd", "Y"); // 1
    Hdr_78_set.insert("Y");
    Hdr_78.add_attribute("Snt", "SendingTime_t_1554893637"); // 1
    Hdr_78_set.insert("SendingTime_t_1554893637");
    Hdr_78.add_attribute("OrigSnt", "OrigSendingTime_t_1466259845"); // 1
    Hdr_78_set.insert("OrigSendingTime_t_1466259845");
    Hdr_78.add_attribute("MsgEncd", "MessageEncoding_t_1639154247"); // 1
    Hdr_78_set.insert("MessageEncoding_t_1639154247");
    all_values.push_back(Hdr_78_set);
    all_compo_names.insert("Hdr_78_set");

    {
      xml_element Hop_78{"Hop"};
      multiset<string> Hop_78_set;
      Hop_78.add_attribute("ID", "HopCompID_t_1426794253"); // 2
      Hop_78_set.insert("HopCompID_t_1426794253");
      Hop_78.add_attribute("Ref", "238200593"); // 2
      Hop_78_set.insert("238200593");
      Hop_78.add_attribute("Snt", "HopSendingTime_t_357396806"); // 2
      Hop_78_set.insert("HopSendingTime_t_357396806");
      all_values.push_back(Hop_78_set);
      all_compo_names.insert("Hop_78_set");

      Hdr_78.add_element(Hop_78);
    }
    elt.add_element(Hdr_78);
  } // end Hdr
  { // Pty
    xml_element Pty_358{"Pty"};
    multiset<string> Pty_358_set;
    Pty_358.add_attribute("ID", "PartyID_t_889963689"); // 1
    Pty_358_set.insert("PartyID_t_889963689");
    Pty_358.add_attribute("Src", "E"); // 1
    Pty_358_set.insert("E");
    Pty_358.add_attribute("R", "5"); // 1
    Pty_358_set.insert("5");
    all_values.push_back(Pty_358_set);
    all_compo_names.insert("Pty_358_set");

    {
      xml_element Sub_358{"Sub"};
      multiset<string> Sub_358_set;
      Sub_358.add_attribute("ID", "PartySubID_t_1532088510"); // 2
      Sub_358_set.insert("PartySubID_t_1532088510");
      Sub_358.add_attribute("Typ", "9"); // 2
      Sub_358_set.insert("9");
      all_values.push_back(Sub_358_set);
      all_compo_names.insert("Sub_358_set");

      Pty_358.add_element(Sub_358);
    }
    elt.add_element(Pty_358);
  } // end Pty
  { // Pty
    xml_element Pty_359{"Pty"};
    multiset<string> Pty_359_set;
    Pty_359.add_attribute("ID", "PartyID_t_1524943657"); // 1
    Pty_359_set.insert("PartyID_t_1524943657");
    Pty_359.add_attribute("Src", "7"); // 1
    Pty_359_set.insert("7");
    Pty_359.add_attribute("R", "45"); // 1
    Pty_359_set.insert("45");
    all_values.push_back(Pty_359_set);
    all_compo_names.insert("Pty_359_set");

    {
      xml_element Sub_359{"Sub"};
      multiset<string> Sub_359_set;
      Sub_359.add_attribute("ID", "PartySubID_t_158416176"); // 2
      Sub_359_set.insert("PartySubID_t_158416176");
      Sub_359.add_attribute("Typ", "7"); // 2
      Sub_359_set.insert("7");
      all_values.push_back(Sub_359_set);
      all_compo_names.insert("Sub_359_set");

      Pty_359.add_element(Sub_359);
    }
    elt.add_element(Pty_359);
  } // end Pty
  { // Pty
    xml_element Pty_360{"Pty"};
    multiset<string> Pty_360_set;
    Pty_360.add_attribute("ID", "PartyID_t_2127737879"); // 1
    Pty_360_set.insert("PartyID_t_2127737879");
    Pty_360.add_attribute("Src", "5"); // 1
    Pty_360_set.insert("5");
    Pty_360.add_attribute("R", "6"); // 1
    Pty_360_set.insert("6");
    all_values.push_back(Pty_360_set);
    all_compo_names.insert("Pty_360_set");

    {
      xml_element Sub_360{"Sub"};
      multiset<string> Sub_360_set;
      Sub_360.add_attribute("ID", "PartySubID_t_1179836744"); // 2
      Sub_360_set.insert("PartySubID_t_1179836744");
      Sub_360.add_attribute("Typ", "12"); // 2
      Sub_360_set.insert("12");
      all_values.push_back(Sub_360_set);
      all_compo_names.insert("Sub_360_set");

      Pty_360.add_element(Sub_360);
    }
    elt.add_element(Pty_360);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_66{"Instrmt"};
    multiset<string> Instrmt_66_set;
    Instrmt_66.add_attribute("Sym", "Symbol_t_164668081"); // 1
    Instrmt_66_set.insert("Symbol_t_164668081");
    Instrmt_66.add_attribute("Sfx", "WI"); // 1
    Instrmt_66_set.insert("WI");
    Instrmt_66.add_attribute("ID", "SecurityID_t_1308229943"); // 1
    Instrmt_66_set.insert("SecurityID_t_1308229943");
    Instrmt_66.add_attribute("Src", "7"); // 1
    Instrmt_66_set.insert("7");
    Instrmt_66.add_attribute("Prod", "12"); // 1
    Instrmt_66_set.insert("12");
    Instrmt_66.add_attribute("ProdCmplx", "ProductComplex_t_845943281"); // 1
    Instrmt_66_set.insert("ProductComplex_t_845943281");
    Instrmt_66.add_attribute("SecGrp", "SecurityGroup_t_2005981006"); // 1
    Instrmt_66_set.insert("SecurityGroup_t_2005981006");
    Instrmt_66.add_attribute("CFI", "CFICode_t_388092291"); // 1
    Instrmt_66_set.insert("CFICode_t_388092291");
    Instrmt_66.add_attribute("SecTyp", "TLQN"); // 1
    Instrmt_66_set.insert("TLQN");
    Instrmt_66.add_attribute("SubTyp", "SecuritySubType_t_1413390996"); // 1
    Instrmt_66_set.insert("SecuritySubType_t_1413390996");
    Instrmt_66.add_attribute("MMY", "1854352136"); // 1
    Instrmt_66_set.insert("1854352136");
    Instrmt_66.add_attribute("MatDt", "MaturityDate_t_277569945"); // 1
    Instrmt_66_set.insert("MaturityDate_t_277569945");
    Instrmt_66.add_attribute("MatTm", "692701601"); // 1
    Instrmt_66_set.insert("692701601");
    Instrmt_66.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2092552730"); // 1
    Instrmt_66_set.insert("SettleOnOpenFlag_t_2092552730");
    Instrmt_66.add_attribute("AsgnMeth", "634966751"); // 1
    Instrmt_66_set.insert("634966751");
    Instrmt_66.add_attribute("Status", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("CpnPmt", "CouponPaymentDate_t_835032771"); // 1
    Instrmt_66_set.insert("CouponPaymentDate_t_835032771");
    Instrmt_66.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_66_set.insert("MM");
    Instrmt_66.add_attribute("Snrty", "SB"); // 1
    Instrmt_66_set.insert("SB");
    Instrmt_66.add_attribute("NotlPctOut", "2196376.330000"); // 1
    Instrmt_66_set.insert("2196376.330000");
    Instrmt_66.add_attribute("OrigNotlPctOut", "3727662.690000"); // 1
    Instrmt_66_set.insert("3727662.690000");
    Instrmt_66.add_attribute("AttchPnt", "11626401.520000"); // 1
    Instrmt_66_set.insert("11626401.520000");
    Instrmt_66.add_attribute("DetchPnt", "16545030.680000"); // 1
    Instrmt_66_set.insert("16545030.680000");
    Instrmt_66.add_attribute("Issued", "IssueDate_t_1024028979"); // 1
    Instrmt_66_set.insert("IssueDate_t_1024028979");
    Instrmt_66.add_attribute("RepoCollSecTyp", "1321056329"); // 1
    Instrmt_66_set.insert("1321056329");
    Instrmt_66.add_attribute("RepoTrm", "600185825"); // 1
    Instrmt_66_set.insert("600185825");
    Instrmt_66.add_attribute("RepoRt", "10042832.100000"); // 1
    Instrmt_66_set.insert("10042832.100000");
    Instrmt_66.add_attribute("Fctr", "12588638.290000"); // 1
    Instrmt_66_set.insert("12588638.290000");
    Instrmt_66.add_attribute("CrdRtg", "CreditRating_t_882769250"); // 1
    Instrmt_66_set.insert("CreditRating_t_882769250");
    Instrmt_66.add_attribute("Rgstry", "InstrRegistry_t_36636306"); // 1
    Instrmt_66_set.insert("InstrRegistry_t_36636306");
    Instrmt_66.add_attribute("IssuCtry", "307092812"); // 1
    Instrmt_66_set.insert("307092812");
    Instrmt_66.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1047437331"); // 1
    Instrmt_66_set.insert("StateOrProvinceOfIssue_t_1047437331");
    Instrmt_66.add_attribute("Lcl", "LocaleOfIssue_t_37847330"); // 1
    Instrmt_66_set.insert("LocaleOfIssue_t_37847330");
    Instrmt_66.add_attribute("Redeem", "RedemptionDate_t_1615322756"); // 1
    Instrmt_66_set.insert("RedemptionDate_t_1615322756");
    Instrmt_66.add_attribute("StrkPx", "11079113.770000"); // 1
    Instrmt_66_set.insert("11079113.770000");
    Instrmt_66.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_66_set.insert("CAN");
    Instrmt_66.add_attribute("StrkMult", "9664087.360000"); // 1
    Instrmt_66_set.insert("9664087.360000");
    Instrmt_66.add_attribute("StrkValu", "9803373.380000"); // 1
    Instrmt_66_set.insert("9803373.380000");
    Instrmt_66.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_66_set.insert("4");
    Instrmt_66.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_66_set.insert("5");
    Instrmt_66.add_attribute("StrkPxBndryPrcsn", "6872058.270000"); // 1
    Instrmt_66_set.insert("6872058.270000");
    Instrmt_66.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("OptAt", "925017685"); // 1
    Instrmt_66_set.insert("925017685");
    Instrmt_66.add_attribute("Mult", "6322749.090000"); // 1
    Instrmt_66_set.insert("6322749.090000");
    Instrmt_66.add_attribute("MultTyp", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_66_set.insert("4");
    Instrmt_66.add_attribute("MinPxIncr", "14673076.800000"); // 1
    Instrmt_66_set.insert("14673076.800000");
    Instrmt_66.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2009126523"); // 1
    Instrmt_66_set.insert("MinPriceIncrementAmount_t_2009126523");
    Instrmt_66.add_attribute("UOM", "MWh"); // 1
    Instrmt_66_set.insert("MWh");
    Instrmt_66.add_attribute("UOMQty", "16869453.130000"); // 1
    Instrmt_66_set.insert("16869453.130000");
    Instrmt_66.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_66_set.insert("oz_tr");
    Instrmt_66.add_attribute("PxUOMQty", "19342120.320000"); // 1
    Instrmt_66_set.insert("19342120.320000");
    Instrmt_66.add_attribute("SettlMeth", "P"); // 1
    Instrmt_66_set.insert("P");
    Instrmt_66.add_attribute("ExerStyle", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("OptPayAmt", "OptPayoutAmount_t_1794150559"); // 1
    Instrmt_66_set.insert("OptPayoutAmount_t_1794150559");
    Instrmt_66.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_66_set.insert("INX");
    Instrmt_66.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_66_set.insert("CDSD");
    Instrmt_66.add_attribute("ListMeth", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("CapPx", "1518739.920000"); // 1
    Instrmt_66_set.insert("1518739.920000");
    Instrmt_66.add_attribute("FlrPx", "5262577.060000"); // 1
    Instrmt_66_set.insert("5262577.060000");
    Instrmt_66.add_attribute("PutCall", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("FlexInd", "true"); // 1
    Instrmt_66_set.insert("true");
    Instrmt_66.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_66_set.insert("true");
    Instrmt_66.add_attribute("TmUnit", "D"); // 1
    Instrmt_66_set.insert("D");
    Instrmt_66.add_attribute("CpnRt", "7819663.690000"); // 1
    Instrmt_66_set.insert("7819663.690000");
    Instrmt_66.add_attribute("Exch", "SecurityExchange_t_307879203"); // 1
    Instrmt_66_set.insert("SecurityExchange_t_307879203");
    Instrmt_66.add_attribute("PosLmt", "1503709958"); // 1
    Instrmt_66_set.insert("1503709958");
    Instrmt_66.add_attribute("NTPosLmt", "1762303707"); // 1
    Instrmt_66_set.insert("1762303707");
    Instrmt_66.add_attribute("Issr", "Issuer_t_1407560939"); // 1
    Instrmt_66_set.insert("Issuer_t_1407560939");
    Instrmt_66.add_attribute("EncIssrLen", "1736026042"); // 1
    Instrmt_66_set.insert("1736026042");
    Instrmt_66.add_attribute("EncIssr", "EncodedIssuer_t_302025886"); // 1
    Instrmt_66_set.insert("EncodedIssuer_t_302025886");
    Instrmt_66.add_attribute("Desc", "SecurityDesc_t_637328972"); // 1
    Instrmt_66_set.insert("SecurityDesc_t_637328972");
    Instrmt_66.add_attribute("EncSecDescLen", "513560080"); // 1
    Instrmt_66_set.insert("513560080");
    Instrmt_66.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_934300795"); // 1
    Instrmt_66_set.insert("EncodedSecurityDesc_t_934300795");
    Instrmt_66.add_attribute("Pool", "Pool_t_502063756"); // 1
    Instrmt_66_set.insert("Pool_t_502063756");
    Instrmt_66.add_attribute("CSetMo", "1647435464"); // 1
    Instrmt_66_set.insert("1647435464");
    Instrmt_66.add_attribute("CPPgm", "99"); // 1
    Instrmt_66_set.insert("99");
    Instrmt_66.add_attribute("CPRegT", "CPRegType_t_363706631"); // 1
    Instrmt_66_set.insert("CPRegType_t_363706631");
    Instrmt_66.add_attribute("Dated", "DatedDate_t_271523696"); // 1
    Instrmt_66_set.insert("DatedDate_t_271523696");
    Instrmt_66.add_attribute("IntAcrl", "InterestAccrualDate_t_1941070141"); // 1
    Instrmt_66_set.insert("InterestAccrualDate_t_1941070141");
    all_values.push_back(Instrmt_66_set);
    all_compo_names.insert("Instrmt_66_set");

    {
      xml_element AID_69{"AID"};
      multiset<string> AID_69_set;
      AID_69.add_attribute("AltID", "SecurityAltID_t_598115775"); // 2
      AID_69_set.insert("SecurityAltID_t_598115775");
      AID_69.add_attribute("AltIDSrc", "J"); // 2
      AID_69_set.insert("J");
      all_values.push_back(AID_69_set);
      all_compo_names.insert("AID_69_set");

      Instrmt_66.add_element(AID_69);
    }
    {
      xml_element SecXML_69{"SecXML"};
      multiset<string> SecXML_69_set;
      SecXML_69.add_attribute("Schema", "SecurityXMLSchema_t_987551226"); // 2
      SecXML_69_set.insert("SecurityXMLSchema_t_987551226");
      all_values.push_back(SecXML_69_set);
      all_compo_names.insert("SecXML_69_set");

      Instrmt_66.add_element(SecXML_69);
    }
    {
      xml_element Evnt_69{"Evnt"};
      multiset<string> Evnt_69_set;
      Evnt_69.add_attribute("EventTyp", "18"); // 2
      Evnt_69_set.insert("18");
      Evnt_69.add_attribute("Dt", "EventDate_t_1166036793"); // 2
      Evnt_69_set.insert("EventDate_t_1166036793");
      Evnt_69.add_attribute("Tm", "EventTime_t_634218137"); // 2
      Evnt_69_set.insert("EventTime_t_634218137");
      Evnt_69.add_attribute("Px", "19717915.840000"); // 2
      Evnt_69_set.insert("19717915.840000");
      Evnt_69.add_attribute("Txt", "EventText_t_1385201687"); // 2
      Evnt_69_set.insert("EventText_t_1385201687");
      all_values.push_back(Evnt_69_set);
      all_compo_names.insert("Evnt_69_set");

      Instrmt_66.add_element(Evnt_69);
    }
    {
      xml_element Pty_361{"Pty"};
      multiset<string> Pty_361_set;
      Pty_361.add_attribute("ID", "InstrumentPartyID_t_1163654299"); // 2
      Pty_361_set.insert("InstrumentPartyID_t_1163654299");
      Pty_361.add_attribute("Src", "H"); // 2
      Pty_361_set.insert("H");
      Pty_361.add_attribute("R", "83"); // 2
      Pty_361_set.insert("83");
      all_values.push_back(Pty_361_set);
      all_compo_names.insert("Pty_361_set");

      {
        xml_element Sub_361{"Sub"};
        multiset<string> Sub_361_set;
        Sub_361.add_attribute("ID", "InstrumentPartySubID_t_593044144"); // 3
        Sub_361_set.insert("InstrumentPartySubID_t_593044144");
        Sub_361.add_attribute("Typ", "16"); // 3
        Sub_361_set.insert("16");
        all_values.push_back(Sub_361_set);
        all_compo_names.insert("Sub_361_set");

        Pty_361.add_element(Sub_361);
      }
      Instrmt_66.add_element(Pty_361);
    }
    {
      xml_element CmplxEvnt_66{"CmplxEvnt"};
      multiset<string> CmplxEvnt_66_set;
      CmplxEvnt_66.add_attribute("Typ", "6"); // 2
      CmplxEvnt_66_set.insert("6");
      CmplxEvnt_66.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1130345366"); // 2
      CmplxEvnt_66_set.insert("ComplexOptPayoutAmount_t_1130345366");
      CmplxEvnt_66.add_attribute("Px", "9478696.190000"); // 2
      CmplxEvnt_66_set.insert("9478696.190000");
      CmplxEvnt_66.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_66_set.insert("4");
      CmplxEvnt_66.add_attribute("PxBndryPrcsn", "4865716.770000"); // 2
      CmplxEvnt_66_set.insert("4865716.770000");
      CmplxEvnt_66.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_66_set.insert("1");
      CmplxEvnt_66.add_attribute("Cond", "1"); // 2
      CmplxEvnt_66_set.insert("1");
      all_values.push_back(CmplxEvnt_66_set);
      all_compo_names.insert("CmplxEvnt_66_set");

      {
        xml_element EvntDts_66{"EvntDts"};
        multiset<string> EvntDts_66_set;
        EvntDts_66.add_attribute("StartDt", "ComplexEventStartDate_t_75114071"); // 3
        EvntDts_66_set.insert("ComplexEventStartDate_t_75114071");
        EvntDts_66.add_attribute("EndDt", "ComplexEventEndDate_t_864715565"); // 3
        EvntDts_66_set.insert("ComplexEventEndDate_t_864715565");
        all_values.push_back(EvntDts_66_set);
        all_compo_names.insert("EvntDts_66_set");

        {
          xml_element EvntTms_66{"EvntTms"};
          multiset<string> EvntTms_66_set;
          EvntTms_66.add_attribute("StartTm", "2110841674"); // 4
          EvntTms_66_set.insert("2110841674");
          EvntTms_66.add_attribute("EndTm", "588674151"); // 4
          EvntTms_66_set.insert("588674151");
          all_values.push_back(EvntTms_66_set);
          all_compo_names.insert("EvntTms_66_set");

          EvntDts_66.add_element(EvntTms_66);
        }
        CmplxEvnt_66.add_element(EvntDts_66);
      }
      Instrmt_66.add_element(CmplxEvnt_66);
    }
    elt.add_element(Instrmt_66);
  } // end Instrmt
  { // Leg
    xml_element Leg_80{"Leg"};
    multiset<string> Leg_80_set;
    Leg_80.add_attribute("Sym", "LegSymbol_t_465421783"); // 1
    Leg_80_set.insert("LegSymbol_t_465421783");
    Leg_80.add_attribute("Sfx", "CD"); // 1
    Leg_80_set.insert("CD");
    Leg_80.add_attribute("ID", "LegSecurityID_t_2053141188"); // 1
    Leg_80_set.insert("LegSecurityID_t_2053141188");
    Leg_80.add_attribute("Src", "5"); // 1
    Leg_80_set.insert("5");
    Leg_80.add_attribute("Prod", "13"); // 1
    Leg_80_set.insert("13");
    Leg_80.add_attribute("CFI", "LegCFICode_t_1846727681"); // 1
    Leg_80_set.insert("LegCFICode_t_1846727681");
    Leg_80.add_attribute("SecTyp", "VRDN"); // 1
    Leg_80_set.insert("VRDN");
    Leg_80.add_attribute("SecSubTyp", "LegSecuritySubType_t_418401744"); // 1
    Leg_80_set.insert("LegSecuritySubType_t_418401744");
    Leg_80.add_attribute("MMY", "686795259"); // 1
    Leg_80_set.insert("686795259");
    Leg_80.add_attribute("Mat", "LegMaturityDate_t_1136314440"); // 1
    Leg_80_set.insert("LegMaturityDate_t_1136314440");
    Leg_80.add_attribute("MatTm", "1584438537"); // 1
    Leg_80_set.insert("1584438537");
    Leg_80.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1321013397"); // 1
    Leg_80_set.insert("LegCouponPaymentDate_t_1321013397");
    Leg_80.add_attribute("Issued", "LegIssueDate_t_960622376"); // 1
    Leg_80_set.insert("LegIssueDate_t_960622376");
    Leg_80.add_attribute("RepoCollSecTyp", "822156576"); // 1
    Leg_80_set.insert("822156576");
    Leg_80.add_attribute("RepoTrm", "337184048"); // 1
    Leg_80_set.insert("337184048");
    Leg_80.add_attribute("RepoRt", "9368043.040000"); // 1
    Leg_80_set.insert("9368043.040000");
    Leg_80.add_attribute("Fctr", "5861323.210000"); // 1
    Leg_80_set.insert("5861323.210000");
    Leg_80.add_attribute("CrdRtg", "LegCreditRating_t_930228192"); // 1
    Leg_80_set.insert("LegCreditRating_t_930228192");
    Leg_80.add_attribute("Rgstry", "LegInstrRegistry_t_1102707554"); // 1
    Leg_80_set.insert("LegInstrRegistry_t_1102707554");
    Leg_80.add_attribute("Ctry", "344204881"); // 1
    Leg_80_set.insert("344204881");
    Leg_80.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2060573558"); // 1
    Leg_80_set.insert("LegStateOrProvinceOfIssue_t_2060573558");
    Leg_80.add_attribute("Lcl", "LegLocaleOfIssue_t_2050577173"); // 1
    Leg_80_set.insert("LegLocaleOfIssue_t_2050577173");
    Leg_80.add_attribute("Redeem", "LegRedemptionDate_t_410156645"); // 1
    Leg_80_set.insert("LegRedemptionDate_t_410156645");
    Leg_80.add_attribute("Strk", "3996615.870000"); // 1
    Leg_80_set.insert("3996615.870000");
    Leg_80.add_attribute("StrkCcy", "EUR"); // 1
    Leg_80_set.insert("EUR");
    Leg_80.add_attribute("OptA", "474775659"); // 1
    Leg_80_set.insert("474775659");
    Leg_80.add_attribute("Cmult", "13304987.690000"); // 1
    Leg_80_set.insert("13304987.690000");
    Leg_80.add_attribute("MultTyp", "1"); // 1
    Leg_80_set.insert("1");
    Leg_80.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_80_set.insert("0");
    Leg_80.add_attribute("UOM", "Bbl"); // 1
    Leg_80_set.insert("Bbl");
    Leg_80.add_attribute("UOMQty", "1649655.090000"); // 1
    Leg_80_set.insert("1649655.090000");
    Leg_80.add_attribute("PxUOM", "USD"); // 1
    Leg_80_set.insert("USD");
    Leg_80.add_attribute("PxUOMQty", "8876890.210000"); // 1
    Leg_80_set.insert("8876890.210000");
    Leg_80.add_attribute("TmUnit", "Wk"); // 1
    Leg_80_set.insert("Wk");
    Leg_80.add_attribute("ExerStyle", "1"); // 1
    Leg_80_set.insert("1");
    Leg_80.add_attribute("CpnRt", "5869330.540000"); // 1
    Leg_80_set.insert("5869330.540000");
    Leg_80.add_attribute("Exch", "LegSecurityExchange_t_273854465"); // 1
    Leg_80_set.insert("LegSecurityExchange_t_273854465");
    Leg_80.add_attribute("Issr", "LegIssuer_t_1930627186"); // 1
    Leg_80_set.insert("LegIssuer_t_1930627186");
    Leg_80.add_attribute("EncLegIssrLen", "1273728314"); // 1
    Leg_80_set.insert("1273728314");
    Leg_80.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1410168906"); // 1
    Leg_80_set.insert("EncodedLegIssuer_t_1410168906");
    Leg_80.add_attribute("Desc", "LegSecurityDesc_t_1367582075"); // 1
    Leg_80_set.insert("LegSecurityDesc_t_1367582075");
    Leg_80.add_attribute("EncLegSecDescLen", "447258063"); // 1
    Leg_80_set.insert("447258063");
    Leg_80.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_223307634"); // 1
    Leg_80_set.insert("EncodedLegSecurityDesc_t_223307634");
    Leg_80.add_attribute("RatioQty", "422550.030000"); // 1
    Leg_80_set.insert("422550.030000");
    Leg_80.add_attribute("Side", "G"); // 1
    Leg_80_set.insert("G");
    Leg_80.add_attribute("Ccy", "CAN"); // 1
    Leg_80_set.insert("CAN");
    Leg_80.add_attribute("Pool", "LegPool_t_1714670303"); // 1
    Leg_80_set.insert("LegPool_t_1714670303");
    Leg_80.add_attribute("Dated", "LegDatedDate_t_115335845"); // 1
    Leg_80_set.insert("LegDatedDate_t_115335845");
    Leg_80.add_attribute("CSetMo", "972592206"); // 1
    Leg_80_set.insert("972592206");
    Leg_80.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1627760213"); // 1
    Leg_80_set.insert("LegInterestAccrualDate_t_1627760213");
    Leg_80.add_attribute("PutCall", "18429371"); // 1
    Leg_80_set.insert("18429371");
    Leg_80.add_attribute("LegOptionRatio", "13827488.510000"); // 1
    Leg_80_set.insert("13827488.510000");
    Leg_80.add_attribute("Px", "20274218.010000"); // 1
    Leg_80_set.insert("20274218.010000");
    all_values.push_back(Leg_80_set);
    all_compo_names.insert("Leg_80_set");

    {
      xml_element LegAID_77{"LegAID"};
      multiset<string> LegAID_77_set;
      LegAID_77.add_attribute("SecAltID", "LegSecurityAltID_t_484212575"); // 2
      LegAID_77_set.insert("LegSecurityAltID_t_484212575");
      LegAID_77.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_77_set.insert("A");
      all_values.push_back(LegAID_77_set);
      all_compo_names.insert("LegAID_77_set");

      Leg_80.add_element(LegAID_77);
    }
    elt.add_element(Leg_80);
  } // end Leg
  { // Undly
    xml_element Undly_94{"Undly"};
    multiset<string> Undly_94_set;
    Undly_94.add_attribute("Sym", "UnderlyingSymbol_t_1814711344"); // 1
    Undly_94_set.insert("UnderlyingSymbol_t_1814711344");
    Undly_94.add_attribute("Sfx", "WI"); // 1
    Undly_94_set.insert("WI");
    Undly_94.add_attribute("ID", "UnderlyingSecurityID_t_1418163622"); // 1
    Undly_94_set.insert("UnderlyingSecurityID_t_1418163622");
    Undly_94.add_attribute("Src", "I"); // 1
    Undly_94_set.insert("I");
    Undly_94.add_attribute("Prod", "1"); // 1
    Undly_94_set.insert("1");
    Undly_94.add_attribute("CFI", "UnderlyingCFICode_t_422755753"); // 1
    Undly_94_set.insert("UnderlyingCFICode_t_422755753");
    Undly_94.add_attribute("SecTyp", "USTB"); // 1
    Undly_94_set.insert("USTB");
    Undly_94.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1977537709"); // 1
    Undly_94_set.insert("UnderlyingSecuritySubType_t_1977537709");
    Undly_94.add_attribute("MMY", "1934981195"); // 1
    Undly_94_set.insert("1934981195");
    Undly_94.add_attribute("Mat", "UnderlyingMaturityDate_t_2123881253"); // 1
    Undly_94_set.insert("UnderlyingMaturityDate_t_2123881253");
    Undly_94.add_attribute("MatTm", "103908527"); // 1
    Undly_94_set.insert("103908527");
    Undly_94.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1718124734"); // 1
    Undly_94_set.insert("UnderlyingCouponPaymentDate_t_1718124734");
    Undly_94.add_attribute("RestrctTyp", "XR"); // 1
    Undly_94_set.insert("XR");
    Undly_94.add_attribute("Snrty", "SB"); // 1
    Undly_94_set.insert("SB");
    Undly_94.add_attribute("NotlPctOut", "9382231.610000"); // 1
    Undly_94_set.insert("9382231.610000");
    Undly_94.add_attribute("OrigNotlPctOut", "16973839.820000"); // 1
    Undly_94_set.insert("16973839.820000");
    Undly_94.add_attribute("AttchPnt", "17373850.670000"); // 1
    Undly_94_set.insert("17373850.670000");
    Undly_94.add_attribute("DetchPnt", "9804781.650000"); // 1
    Undly_94_set.insert("9804781.650000");
    Undly_94.add_attribute("Issued", "UnderlyingIssueDate_t_334342445"); // 1
    Undly_94_set.insert("UnderlyingIssueDate_t_334342445");
    Undly_94.add_attribute("RepoCollSecTyp", "750013358"); // 1
    Undly_94_set.insert("750013358");
    Undly_94.add_attribute("RepoTrm", "1608865490"); // 1
    Undly_94_set.insert("1608865490");
    Undly_94.add_attribute("RepoRt", "20490127.480000"); // 1
    Undly_94_set.insert("20490127.480000");
    Undly_94.add_attribute("Fctr", "8653492.040000"); // 1
    Undly_94_set.insert("8653492.040000");
    Undly_94.add_attribute("CrdRtg", "UnderlyingCreditRating_t_433974048"); // 1
    Undly_94_set.insert("UnderlyingCreditRating_t_433974048");
    Undly_94.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1529289314"); // 1
    Undly_94_set.insert("UnderlyingInstrRegistry_t_1529289314");
    Undly_94.add_attribute("Ctry", "883778575"); // 1
    Undly_94_set.insert("883778575");
    Undly_94.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1816722900"); // 1
    Undly_94_set.insert("UnderlyingStateOrProvinceOfIssue_t_1816722900");
    Undly_94.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1409227467"); // 1
    Undly_94_set.insert("UnderlyingLocaleOfIssue_t_1409227467");
    Undly_94.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1367991150"); // 1
    Undly_94_set.insert("UnderlyingRedemptionDate_t_1367991150");
    Undly_94.add_attribute("StrkPx", "7881738.030000"); // 1
    Undly_94_set.insert("7881738.030000");
    Undly_94.add_attribute("StrkCcy", "GBP"); // 1
    Undly_94_set.insert("GBP");
    Undly_94.add_attribute("OptA", "1606652080"); // 1
    Undly_94_set.insert("1606652080");
    Undly_94.add_attribute("Mult", "10346212.530000"); // 1
    Undly_94_set.insert("10346212.530000");
    Undly_94.add_attribute("MultTyp", "1"); // 1
    Undly_94_set.insert("1");
    Undly_94.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_94_set.insert("3");
    Undly_94.add_attribute("UOM", "lbs"); // 1
    Undly_94_set.insert("lbs");
    Undly_94.add_attribute("UOMQty", "10739425.740000"); // 1
    Undly_94_set.insert("10739425.740000");
    Undly_94.add_attribute("PxUOM", "Bbl"); // 1
    Undly_94_set.insert("Bbl");
    Undly_94.add_attribute("PxUOMQty", "12448745.540000"); // 1
    Undly_94_set.insert("12448745.540000");
    Undly_94.add_attribute("TmUnit", "Min"); // 1
    Undly_94_set.insert("Min");
    Undly_94.add_attribute("ExerStyle", "1"); // 1
    Undly_94_set.insert("1");
    Undly_94.add_attribute("CpnRt", "8155156.400000"); // 1
    Undly_94_set.insert("8155156.400000");
    Undly_94.add_attribute("Exch", "UnderlyingSecurityExchange_t_152982451"); // 1
    Undly_94_set.insert("UnderlyingSecurityExchange_t_152982451");
    Undly_94.add_attribute("Issr", "UnderlyingIssuer_t_1890652239"); // 1
    Undly_94_set.insert("UnderlyingIssuer_t_1890652239");
    Undly_94.add_attribute("EncUndIssrLen", "1753738801"); // 1
    Undly_94_set.insert("1753738801");
    Undly_94.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1850366434"); // 1
    Undly_94_set.insert("EncodedUnderlyingIssuer_t_1850366434");
    Undly_94.add_attribute("Desc", "UnderlyingSecurityDesc_t_1480553659"); // 1
    Undly_94_set.insert("UnderlyingSecurityDesc_t_1480553659");
    Undly_94.add_attribute("EncUndSecDescLen", "586733318"); // 1
    Undly_94_set.insert("586733318");
    Undly_94.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_37225231"); // 1
    Undly_94_set.insert("EncodedUnderlyingSecurityDesc_t_37225231");
    Undly_94.add_attribute("CPPgm", "UnderlyingCPProgram_t_83083369"); // 1
    Undly_94_set.insert("UnderlyingCPProgram_t_83083369");
    Undly_94.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_48115160"); // 1
    Undly_94_set.insert("UnderlyingCPRegType_t_48115160");
    Undly_94.add_attribute("AllocPct", "20862379.800000"); // 1
    Undly_94_set.insert("20862379.800000");
    Undly_94.add_attribute("Ccy", "CHF"); // 1
    Undly_94_set.insert("CHF");
    Undly_94.add_attribute("Qty", "14680436.460000"); // 1
    Undly_94_set.insert("14680436.460000");
    Undly_94.add_attribute("SettlTyp", "4"); // 1
    Undly_94_set.insert("4");
    Undly_94.add_attribute("CashAmt", "UnderlyingCashAmount_t_151328461"); // 1
    Undly_94_set.insert("UnderlyingCashAmount_t_151328461");
    Undly_94.add_attribute("CashTyp", "DIFF"); // 1
    Undly_94_set.insert("DIFF");
    Undly_94.add_attribute("Px", "10527186.500000"); // 1
    Undly_94_set.insert("10527186.500000");
    Undly_94.add_attribute("DirtPx", "9395022.640000"); // 1
    Undly_94_set.insert("9395022.640000");
    Undly_94.add_attribute("EndPx", "3462450.960000"); // 1
    Undly_94_set.insert("3462450.960000");
    Undly_94.add_attribute("StartVal", "UnderlyingStartValue_t_2087937496"); // 1
    Undly_94_set.insert("UnderlyingStartValue_t_2087937496");
    Undly_94.add_attribute("CurVal", "UnderlyingCurrentValue_t_398670696"); // 1
    Undly_94_set.insert("UnderlyingCurrentValue_t_398670696");
    Undly_94.add_attribute("EndVal", "UnderlyingEndValue_t_1380866349"); // 1
    Undly_94_set.insert("UnderlyingEndValue_t_1380866349");
    Undly_94.add_attribute("AdjQty", "16249318.720000"); // 1
    Undly_94_set.insert("16249318.720000");
    Undly_94.add_attribute("FxRate", "8412829.140000"); // 1
    Undly_94_set.insert("8412829.140000");
    Undly_94.add_attribute("FxRateCalc", "M"); // 1
    Undly_94_set.insert("M");
    Undly_94.add_attribute("CapValu", "UnderlyingCapValue_t_551390798"); // 1
    Undly_94_set.insert("UnderlyingCapValue_t_551390798");
    Undly_94.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1113949193"); // 1
    Undly_94_set.insert("UnderlyingSettlMethod_t_1113949193");
    Undly_94.add_attribute("PutCall", "1935634262"); // 1
    Undly_94_set.insert("1935634262");
    all_values.push_back(Undly_94_set);
    all_compo_names.insert("Undly_94_set");

    {
      xml_element UndAID_94{"UndAID"};
      multiset<string> UndAID_94_set;
      UndAID_94.add_attribute("AltID", "UnderlyingSecurityAltID_t_1601730978"); // 2
      UndAID_94_set.insert("UnderlyingSecurityAltID_t_1601730978");
      UndAID_94.add_attribute("AltIDSrc", "K"); // 2
      UndAID_94_set.insert("K");
      all_values.push_back(UndAID_94_set);
      all_compo_names.insert("UndAID_94_set");

      Undly_94.add_element(UndAID_94);
    }
    {
      xml_element Stip_150{"Stip"};
      multiset<string> Stip_150_set;
      Stip_150.add_attribute("Typ", "INSURED"); // 2
      Stip_150_set.insert("INSURED");
      Stip_150.add_attribute("Val", "UnderlyingStipValue_t_1754713430"); // 2
      Stip_150_set.insert("UnderlyingStipValue_t_1754713430");
      all_values.push_back(Stip_150_set);
      all_compo_names.insert("Stip_150_set");

      Undly_94.add_element(Stip_150);
    }
    {
      xml_element Pty_362{"Pty"};
      multiset<string> Pty_362_set;
      Pty_362.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1233692591"); // 2
      Pty_362_set.insert("UnderlyingInstrumentPartyID_t_1233692591");
      Pty_362.add_attribute("Src", "8"); // 2
      Pty_362_set.insert("8");
      Pty_362.add_attribute("R", "78"); // 2
      Pty_362_set.insert("78");
      all_values.push_back(Pty_362_set);
      all_compo_names.insert("Pty_362_set");

      {
        xml_element Sub_362{"Sub"};
        multiset<string> Sub_362_set;
        Sub_362.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_566762602"); // 3
        Sub_362_set.insert("UnderlyingInstrumentPartySubID_t_566762602");
        Sub_362.add_attribute("Typ", "19"); // 3
        Sub_362_set.insert("19");
        all_values.push_back(Sub_362_set);
        all_compo_names.insert("Sub_362_set");

        Pty_362.add_element(Sub_362);
      }
      Undly_94.add_element(Pty_362);
    }
    elt.add_element(Undly_94);
  } // end Undly
  { // Undly
    xml_element Undly_95{"Undly"};
    multiset<string> Undly_95_set;
    Undly_95.add_attribute("Sym", "UnderlyingSymbol_t_1494821447"); // 1
    Undly_95_set.insert("UnderlyingSymbol_t_1494821447");
    Undly_95.add_attribute("Sfx", "CD"); // 1
    Undly_95_set.insert("CD");
    Undly_95.add_attribute("ID", "UnderlyingSecurityID_t_844769886"); // 1
    Undly_95_set.insert("UnderlyingSecurityID_t_844769886");
    Undly_95.add_attribute("Src", "A"); // 1
    Undly_95_set.insert("A");
    Undly_95.add_attribute("Prod", "3"); // 1
    Undly_95_set.insert("3");
    Undly_95.add_attribute("CFI", "UnderlyingCFICode_t_1326859095"); // 1
    Undly_95_set.insert("UnderlyingCFICode_t_1326859095");
    Undly_95.add_attribute("SecTyp", "CS"); // 1
    Undly_95_set.insert("CS");
    Undly_95.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1283006046"); // 1
    Undly_95_set.insert("UnderlyingSecuritySubType_t_1283006046");
    Undly_95.add_attribute("MMY", "1478187556"); // 1
    Undly_95_set.insert("1478187556");
    Undly_95.add_attribute("Mat", "UnderlyingMaturityDate_t_1483923242"); // 1
    Undly_95_set.insert("UnderlyingMaturityDate_t_1483923242");
    Undly_95.add_attribute("MatTm", "188241048"); // 1
    Undly_95_set.insert("188241048");
    Undly_95.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_270206172"); // 1
    Undly_95_set.insert("UnderlyingCouponPaymentDate_t_270206172");
    Undly_95.add_attribute("RestrctTyp", "MM"); // 1
    Undly_95_set.insert("MM");
    Undly_95.add_attribute("Snrty", "SD"); // 1
    Undly_95_set.insert("SD");
    Undly_95.add_attribute("NotlPctOut", "6688768.680000"); // 1
    Undly_95_set.insert("6688768.680000");
    Undly_95.add_attribute("OrigNotlPctOut", "10635510.400000"); // 1
    Undly_95_set.insert("10635510.400000");
    Undly_95.add_attribute("AttchPnt", "17536267.690000"); // 1
    Undly_95_set.insert("17536267.690000");
    Undly_95.add_attribute("DetchPnt", "15101597.820000"); // 1
    Undly_95_set.insert("15101597.820000");
    Undly_95.add_attribute("Issued", "UnderlyingIssueDate_t_1754310748"); // 1
    Undly_95_set.insert("UnderlyingIssueDate_t_1754310748");
    Undly_95.add_attribute("RepoCollSecTyp", "157533919"); // 1
    Undly_95_set.insert("157533919");
    Undly_95.add_attribute("RepoTrm", "476625328"); // 1
    Undly_95_set.insert("476625328");
    Undly_95.add_attribute("RepoRt", "15424613.620000"); // 1
    Undly_95_set.insert("15424613.620000");
    Undly_95.add_attribute("Fctr", "17592648.980000"); // 1
    Undly_95_set.insert("17592648.980000");
    Undly_95.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1967149328"); // 1
    Undly_95_set.insert("UnderlyingCreditRating_t_1967149328");
    Undly_95.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2146127616"); // 1
    Undly_95_set.insert("UnderlyingInstrRegistry_t_2146127616");
    Undly_95.add_attribute("Ctry", "1366494680"); // 1
    Undly_95_set.insert("1366494680");
    Undly_95.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1053358271"); // 1
    Undly_95_set.insert("UnderlyingStateOrProvinceOfIssue_t_1053358271");
    Undly_95.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_208565375"); // 1
    Undly_95_set.insert("UnderlyingLocaleOfIssue_t_208565375");
    Undly_95.add_attribute("Redeem", "UnderlyingRedemptionDate_t_676607248"); // 1
    Undly_95_set.insert("UnderlyingRedemptionDate_t_676607248");
    Undly_95.add_attribute("StrkPx", "16201208.740000"); // 1
    Undly_95_set.insert("16201208.740000");
    Undly_95.add_attribute("StrkCcy", "EUR"); // 1
    Undly_95_set.insert("EUR");
    Undly_95.add_attribute("OptA", "122483198"); // 1
    Undly_95_set.insert("122483198");
    Undly_95.add_attribute("Mult", "18499899.880000"); // 1
    Undly_95_set.insert("18499899.880000");
    Undly_95.add_attribute("MultTyp", "2"); // 1
    Undly_95_set.insert("2");
    Undly_95.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_95_set.insert("3");
    Undly_95.add_attribute("UOM", "lbs"); // 1
    Undly_95_set.insert("lbs");
    Undly_95.add_attribute("UOMQty", "641729.560000"); // 1
    Undly_95_set.insert("641729.560000");
    Undly_95.add_attribute("PxUOM", "Bu"); // 1
    Undly_95_set.insert("Bu");
    Undly_95.add_attribute("PxUOMQty", "3600693.440000"); // 1
    Undly_95_set.insert("3600693.440000");
    Undly_95.add_attribute("TmUnit", "Yr"); // 1
    Undly_95_set.insert("Yr");
    Undly_95.add_attribute("ExerStyle", "1"); // 1
    Undly_95_set.insert("1");
    Undly_95.add_attribute("CpnRt", "6302755.160000"); // 1
    Undly_95_set.insert("6302755.160000");
    Undly_95.add_attribute("Exch", "UnderlyingSecurityExchange_t_1230780889"); // 1
    Undly_95_set.insert("UnderlyingSecurityExchange_t_1230780889");
    Undly_95.add_attribute("Issr", "UnderlyingIssuer_t_1173220087"); // 1
    Undly_95_set.insert("UnderlyingIssuer_t_1173220087");
    Undly_95.add_attribute("EncUndIssrLen", "1299152385"); // 1
    Undly_95_set.insert("1299152385");
    Undly_95.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_146848281"); // 1
    Undly_95_set.insert("EncodedUnderlyingIssuer_t_146848281");
    Undly_95.add_attribute("Desc", "UnderlyingSecurityDesc_t_779363208"); // 1
    Undly_95_set.insert("UnderlyingSecurityDesc_t_779363208");
    Undly_95.add_attribute("EncUndSecDescLen", "661828519"); // 1
    Undly_95_set.insert("661828519");
    Undly_95.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1901159029"); // 1
    Undly_95_set.insert("EncodedUnderlyingSecurityDesc_t_1901159029");
    Undly_95.add_attribute("CPPgm", "UnderlyingCPProgram_t_936897127"); // 1
    Undly_95_set.insert("UnderlyingCPProgram_t_936897127");
    Undly_95.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1138453847"); // 1
    Undly_95_set.insert("UnderlyingCPRegType_t_1138453847");
    Undly_95.add_attribute("AllocPct", "12961367.430000"); // 1
    Undly_95_set.insert("12961367.430000");
    Undly_95.add_attribute("Ccy", "CAN"); // 1
    Undly_95_set.insert("CAN");
    Undly_95.add_attribute("Qty", "12947807.110000"); // 1
    Undly_95_set.insert("12947807.110000");
    Undly_95.add_attribute("SettlTyp", "2"); // 1
    Undly_95_set.insert("2");
    Undly_95.add_attribute("CashAmt", "UnderlyingCashAmount_t_2011477799"); // 1
    Undly_95_set.insert("UnderlyingCashAmount_t_2011477799");
    Undly_95.add_attribute("CashTyp", "DIFF"); // 1
    Undly_95_set.insert("DIFF");
    Undly_95.add_attribute("Px", "4442966.570000"); // 1
    Undly_95_set.insert("4442966.570000");
    Undly_95.add_attribute("DirtPx", "14841150.250000"); // 1
    Undly_95_set.insert("14841150.250000");
    Undly_95.add_attribute("EndPx", "3610825.400000"); // 1
    Undly_95_set.insert("3610825.400000");
    Undly_95.add_attribute("StartVal", "UnderlyingStartValue_t_468241705"); // 1
    Undly_95_set.insert("UnderlyingStartValue_t_468241705");
    Undly_95.add_attribute("CurVal", "UnderlyingCurrentValue_t_1606598223"); // 1
    Undly_95_set.insert("UnderlyingCurrentValue_t_1606598223");
    Undly_95.add_attribute("EndVal", "UnderlyingEndValue_t_63588880"); // 1
    Undly_95_set.insert("UnderlyingEndValue_t_63588880");
    Undly_95.add_attribute("AdjQty", "19257625.320000"); // 1
    Undly_95_set.insert("19257625.320000");
    Undly_95.add_attribute("FxRate", "11798763.180000"); // 1
    Undly_95_set.insert("11798763.180000");
    Undly_95.add_attribute("FxRateCalc", "M"); // 1
    Undly_95_set.insert("M");
    Undly_95.add_attribute("CapValu", "UnderlyingCapValue_t_1989935488"); // 1
    Undly_95_set.insert("UnderlyingCapValue_t_1989935488");
    Undly_95.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2036160460"); // 1
    Undly_95_set.insert("UnderlyingSettlMethod_t_2036160460");
    Undly_95.add_attribute("PutCall", "1453023660"); // 1
    Undly_95_set.insert("1453023660");
    all_values.push_back(Undly_95_set);
    all_compo_names.insert("Undly_95_set");

    {
      xml_element UndAID_95{"UndAID"};
      multiset<string> UndAID_95_set;
      UndAID_95.add_attribute("AltID", "UnderlyingSecurityAltID_t_1390548039"); // 2
      UndAID_95_set.insert("UnderlyingSecurityAltID_t_1390548039");
      UndAID_95.add_attribute("AltIDSrc", "J"); // 2
      UndAID_95_set.insert("J");
      all_values.push_back(UndAID_95_set);
      all_compo_names.insert("UndAID_95_set");

      Undly_95.add_element(UndAID_95);
    }
    {
      xml_element Stip_151{"Stip"};
      multiset<string> Stip_151_set;
      Stip_151.add_attribute("Typ", "WALA"); // 2
      Stip_151_set.insert("WALA");
      Stip_151.add_attribute("Val", "UnderlyingStipValue_t_473845281"); // 2
      Stip_151_set.insert("UnderlyingStipValue_t_473845281");
      all_values.push_back(Stip_151_set);
      all_compo_names.insert("Stip_151_set");

      Undly_95.add_element(Stip_151);
    }
    {
      xml_element Pty_363{"Pty"};
      multiset<string> Pty_363_set;
      Pty_363.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2106422089"); // 2
      Pty_363_set.insert("UnderlyingInstrumentPartyID_t_2106422089");
      Pty_363.add_attribute("Src", "A"); // 2
      Pty_363_set.insert("A");
      Pty_363.add_attribute("R", "15"); // 2
      Pty_363_set.insert("15");
      all_values.push_back(Pty_363_set);
      all_compo_names.insert("Pty_363_set");

      {
        xml_element Sub_363{"Sub"};
        multiset<string> Sub_363_set;
        Sub_363.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_738301649"); // 3
        Sub_363_set.insert("UnderlyingInstrumentPartySubID_t_738301649");
        Sub_363.add_attribute("Typ", "27"); // 3
        Sub_363_set.insert("27");
        all_values.push_back(Sub_363_set);
        all_compo_names.insert("Sub_363_set");

        Pty_363.add_element(Sub_363);
      }
      Undly_95.add_element(Pty_363);
    }
    elt.add_element(Undly_95);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_19{"TrdSes"};
    multiset<string> TrdSes_19_set;
    TrdSes_19.add_attribute("SesID", "1"); // 1
    TrdSes_19_set.insert("1");
    TrdSes_19.add_attribute("SesSub", "5"); // 1
    TrdSes_19_set.insert("5");
    all_values.push_back(TrdSes_19_set);
    all_compo_names.insert("TrdSes_19_set");

    elt.add_element(TrdSes_19);
  } // end TrdSes
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
