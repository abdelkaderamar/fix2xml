#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/RequestForPositionsAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( RequestForPositionsAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPossAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1670505687"); // 0
  RequestForPositionsAck_message_t_0.insert("PosMaintRptID_t_1670505687");
  elt.add_attribute("ReqID", "PosReqID_t_76393506"); // 0
  RequestForPositionsAck_message_t_0.insert("PosReqID_t_76393506");
  elt.add_attribute("TotRpts", "1845886160"); // 0
  RequestForPositionsAck_message_t_0.insert("1845886160");
  elt.add_attribute("Unsol", "Y"); // 0
  RequestForPositionsAck_message_t_0.insert("Y");
  elt.add_attribute("Rslt", "3"); // 0
  RequestForPositionsAck_message_t_0.insert("3");
  elt.add_attribute("Stat", "2"); // 0
  RequestForPositionsAck_message_t_0.insert("2");
  elt.add_attribute("ReqTyp", "6"); // 0
  RequestForPositionsAck_message_t_0.insert("6");
  elt.add_attribute("MtchStat", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1046511688"); // 0
  RequestForPositionsAck_message_t_0.insert("ClearingBusinessDate_t_1046511688");
  elt.add_attribute("SubReqTyp", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("SetSesID", "ETH"); // 0
  RequestForPositionsAck_message_t_0.insert("ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_505626263"); // 0
  RequestForPositionsAck_message_t_0.insert("SettlSessSubID_t_505626263");
  elt.add_attribute("SettlCcy", "USD"); // 0
  RequestForPositionsAck_message_t_0.insert("USD");
  elt.add_attribute("Acct", "Account_t_1685502581"); // 0
  RequestForPositionsAck_message_t_0.insert("Account_t_1685502581");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  RequestForPositionsAck_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "8"); // 0
  RequestForPositionsAck_message_t_0.insert("8");
  elt.add_attribute("Ccy", "CAN"); // 0
  RequestForPositionsAck_message_t_0.insert("CAN");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  RequestForPositionsAck_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_359897747"); // 0
  RequestForPositionsAck_message_t_0.insert("ResponseDestination_t_359897747");
  elt.add_attribute("Txt", "Text_t_932646467"); // 0
  RequestForPositionsAck_message_t_0.insert("Text_t_932646467");
  elt.add_attribute("EncTxtLen", "94261675"); // 0
  RequestForPositionsAck_message_t_0.insert("94261675");
  elt.add_attribute("EncTxt", "EncodedText_t_318836188"); // 0
  RequestForPositionsAck_message_t_0.insert("EncodedText_t_318836188");
  all_values.push_back(RequestForPositionsAck_message_t_0);
  all_compo_names.insert("RequestForPositionsAck_message_t");

  { // Hdr
    xml_element Hdr_79{"Hdr"};
    multiset<string> Hdr_79_set;
    Hdr_79.add_attribute("SeqNum", "20130733"); // 1
    Hdr_79_set.insert("20130733");
    Hdr_79.add_attribute("SID", "SenderCompID_t_714955237"); // 1
    Hdr_79_set.insert("SenderCompID_t_714955237");
    Hdr_79.add_attribute("TID", "TargetCompID_t_1057137837"); // 1
    Hdr_79_set.insert("TargetCompID_t_1057137837");
    Hdr_79.add_attribute("OBID", "OnBehalfOfCompID_t_1916927166"); // 1
    Hdr_79_set.insert("OnBehalfOfCompID_t_1916927166");
    Hdr_79.add_attribute("D2ID", "DeliverToCompID_t_1089324181"); // 1
    Hdr_79_set.insert("DeliverToCompID_t_1089324181");
    Hdr_79.add_attribute("SSub", "SenderSubID_t_584852966"); // 1
    Hdr_79_set.insert("SenderSubID_t_584852966");
    Hdr_79.add_attribute("SLoc", "SenderLocationID_t_657210150"); // 1
    Hdr_79_set.insert("SenderLocationID_t_657210150");
    Hdr_79.add_attribute("TSub", "TargetSubID_t_612346221"); // 1
    Hdr_79_set.insert("TargetSubID_t_612346221");
    Hdr_79.add_attribute("TLoc", "TargetLocationID_t_661246472"); // 1
    Hdr_79_set.insert("TargetLocationID_t_661246472");
    Hdr_79.add_attribute("OBSub", "OnBehalfOfSubID_t_355612662"); // 1
    Hdr_79_set.insert("OnBehalfOfSubID_t_355612662");
    Hdr_79.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1430148972"); // 1
    Hdr_79_set.insert("OnBehalfOfLocationID_t_1430148972");
    Hdr_79.add_attribute("D2Sub", "DeliverToSubID_t_505329387"); // 1
    Hdr_79_set.insert("DeliverToSubID_t_505329387");
    Hdr_79.add_attribute("D2Loc", "DeliverToLocationID_t_2065492973"); // 1
    Hdr_79_set.insert("DeliverToLocationID_t_2065492973");
    Hdr_79.add_attribute("PosDup", "N"); // 1
    Hdr_79_set.insert("N");
    Hdr_79.add_attribute("PosRsnd", "N"); // 1
    Hdr_79_set.insert("N");
    Hdr_79.add_attribute("Snt", "SendingTime_t_964521013"); // 1
    Hdr_79_set.insert("SendingTime_t_964521013");
    Hdr_79.add_attribute("OrigSnt", "OrigSendingTime_t_2138561892"); // 1
    Hdr_79_set.insert("OrigSendingTime_t_2138561892");
    Hdr_79.add_attribute("MsgEncd", "MessageEncoding_t_1550330238"); // 1
    Hdr_79_set.insert("MessageEncoding_t_1550330238");
    all_values.push_back(Hdr_79_set);
    all_compo_names.insert("Hdr_79_set");

    {
      xml_element Hop_79{"Hop"};
      multiset<string> Hop_79_set;
      Hop_79.add_attribute("ID", "HopCompID_t_1470147276"); // 2
      Hop_79_set.insert("HopCompID_t_1470147276");
      Hop_79.add_attribute("Ref", "589414855"); // 2
      Hop_79_set.insert("589414855");
      Hop_79.add_attribute("Snt", "HopSendingTime_t_2085230400"); // 2
      Hop_79_set.insert("HopSendingTime_t_2085230400");
      all_values.push_back(Hop_79_set);
      all_compo_names.insert("Hop_79_set");

      Hdr_79.add_element(Hop_79);
    }
    elt.add_element(Hdr_79);
  } // end Hdr
  { // Pty
    xml_element Pty_364{"Pty"};
    multiset<string> Pty_364_set;
    Pty_364.add_attribute("ID", "PartyID_t_133222134"); // 1
    Pty_364_set.insert("PartyID_t_133222134");
    Pty_364.add_attribute("Src", "8"); // 1
    Pty_364_set.insert("8");
    Pty_364.add_attribute("R", "12"); // 1
    Pty_364_set.insert("12");
    all_values.push_back(Pty_364_set);
    all_compo_names.insert("Pty_364_set");

    {
      xml_element Sub_364{"Sub"};
      multiset<string> Sub_364_set;
      Sub_364.add_attribute("ID", "PartySubID_t_1130053073"); // 2
      Sub_364_set.insert("PartySubID_t_1130053073");
      Sub_364.add_attribute("Typ", "6"); // 2
      Sub_364_set.insert("6");
      all_values.push_back(Sub_364_set);
      all_compo_names.insert("Sub_364_set");

      Pty_364.add_element(Sub_364);
    }
    elt.add_element(Pty_364);
  } // end Pty
  { // Pty
    xml_element Pty_365{"Pty"};
    multiset<string> Pty_365_set;
    Pty_365.add_attribute("ID", "PartyID_t_794759703"); // 1
    Pty_365_set.insert("PartyID_t_794759703");
    Pty_365.add_attribute("Src", "I"); // 1
    Pty_365_set.insert("I");
    Pty_365.add_attribute("R", "1"); // 1
    Pty_365_set.insert("1");
    all_values.push_back(Pty_365_set);
    all_compo_names.insert("Pty_365_set");

    {
      xml_element Sub_365{"Sub"};
      multiset<string> Sub_365_set;
      Sub_365.add_attribute("ID", "PartySubID_t_1113595891"); // 2
      Sub_365_set.insert("PartySubID_t_1113595891");
      Sub_365.add_attribute("Typ", "31"); // 2
      Sub_365_set.insert("31");
      all_values.push_back(Sub_365_set);
      all_compo_names.insert("Sub_365_set");

      Pty_365.add_element(Sub_365);
    }
    elt.add_element(Pty_365);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_67{"Instrmt"};
    multiset<string> Instrmt_67_set;
    Instrmt_67.add_attribute("Sym", "Symbol_t_744732061"); // 1
    Instrmt_67_set.insert("Symbol_t_744732061");
    Instrmt_67.add_attribute("Sfx", "WI"); // 1
    Instrmt_67_set.insert("WI");
    Instrmt_67.add_attribute("ID", "SecurityID_t_1852273792"); // 1
    Instrmt_67_set.insert("SecurityID_t_1852273792");
    Instrmt_67.add_attribute("Src", "L"); // 1
    Instrmt_67_set.insert("L");
    Instrmt_67.add_attribute("Prod", "3"); // 1
    Instrmt_67_set.insert("3");
    Instrmt_67.add_attribute("ProdCmplx", "ProductComplex_t_362000294"); // 1
    Instrmt_67_set.insert("ProductComplex_t_362000294");
    Instrmt_67.add_attribute("SecGrp", "SecurityGroup_t_298918816"); // 1
    Instrmt_67_set.insert("SecurityGroup_t_298918816");
    Instrmt_67.add_attribute("CFI", "CFICode_t_1269349519"); // 1
    Instrmt_67_set.insert("CFICode_t_1269349519");
    Instrmt_67.add_attribute("SecTyp", "USTB"); // 1
    Instrmt_67_set.insert("USTB");
    Instrmt_67.add_attribute("SubTyp", "SecuritySubType_t_1729067788"); // 1
    Instrmt_67_set.insert("SecuritySubType_t_1729067788");
    Instrmt_67.add_attribute("MMY", "1774678906"); // 1
    Instrmt_67_set.insert("1774678906");
    Instrmt_67.add_attribute("MatDt", "MaturityDate_t_635622282"); // 1
    Instrmt_67_set.insert("MaturityDate_t_635622282");
    Instrmt_67.add_attribute("MatTm", "1185398302"); // 1
    Instrmt_67_set.insert("1185398302");
    Instrmt_67.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_420904219"); // 1
    Instrmt_67_set.insert("SettleOnOpenFlag_t_420904219");
    Instrmt_67.add_attribute("AsgnMeth", "1600143296"); // 1
    Instrmt_67_set.insert("1600143296");
    Instrmt_67.add_attribute("Status", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("CpnPmt", "CouponPaymentDate_t_1971234457"); // 1
    Instrmt_67_set.insert("CouponPaymentDate_t_1971234457");
    Instrmt_67.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_67_set.insert("FR");
    Instrmt_67.add_attribute("Snrty", "SR"); // 1
    Instrmt_67_set.insert("SR");
    Instrmt_67.add_attribute("NotlPctOut", "19089812.100000"); // 1
    Instrmt_67_set.insert("19089812.100000");
    Instrmt_67.add_attribute("OrigNotlPctOut", "19309731.340000"); // 1
    Instrmt_67_set.insert("19309731.340000");
    Instrmt_67.add_attribute("AttchPnt", "18991135.360000"); // 1
    Instrmt_67_set.insert("18991135.360000");
    Instrmt_67.add_attribute("DetchPnt", "765963.170000"); // 1
    Instrmt_67_set.insert("765963.170000");
    Instrmt_67.add_attribute("Issued", "IssueDate_t_218351442"); // 1
    Instrmt_67_set.insert("IssueDate_t_218351442");
    Instrmt_67.add_attribute("RepoCollSecTyp", "881682962"); // 1
    Instrmt_67_set.insert("881682962");
    Instrmt_67.add_attribute("RepoTrm", "12111466"); // 1
    Instrmt_67_set.insert("12111466");
    Instrmt_67.add_attribute("RepoRt", "10131111.450000"); // 1
    Instrmt_67_set.insert("10131111.450000");
    Instrmt_67.add_attribute("Fctr", "7968988.550000"); // 1
    Instrmt_67_set.insert("7968988.550000");
    Instrmt_67.add_attribute("CrdRtg", "CreditRating_t_41888290"); // 1
    Instrmt_67_set.insert("CreditRating_t_41888290");
    Instrmt_67.add_attribute("Rgstry", "InstrRegistry_t_2126707036"); // 1
    Instrmt_67_set.insert("InstrRegistry_t_2126707036");
    Instrmt_67.add_attribute("IssuCtry", "732245481"); // 1
    Instrmt_67_set.insert("732245481");
    Instrmt_67.add_attribute("StPrv", "StateOrProvinceOfIssue_t_786620351"); // 1
    Instrmt_67_set.insert("StateOrProvinceOfIssue_t_786620351");
    Instrmt_67.add_attribute("Lcl", "LocaleOfIssue_t_2473469"); // 1
    Instrmt_67_set.insert("LocaleOfIssue_t_2473469");
    Instrmt_67.add_attribute("Redeem", "RedemptionDate_t_437035625"); // 1
    Instrmt_67_set.insert("RedemptionDate_t_437035625");
    Instrmt_67.add_attribute("StrkPx", "4731929.460000"); // 1
    Instrmt_67_set.insert("4731929.460000");
    Instrmt_67.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_67_set.insert("EUR");
    Instrmt_67.add_attribute("StrkMult", "7721117.620000"); // 1
    Instrmt_67_set.insert("7721117.620000");
    Instrmt_67.add_attribute("StrkValu", "18799260.350000"); // 1
    Instrmt_67_set.insert("18799260.350000");
    Instrmt_67.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_67_set.insert("3");
    Instrmt_67.add_attribute("StrkPxBndryPrcsn", "15071212.940000"); // 1
    Instrmt_67_set.insert("15071212.940000");
    Instrmt_67.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_67_set.insert("4");
    Instrmt_67.add_attribute("OptAt", "1539094204"); // 1
    Instrmt_67_set.insert("1539094204");
    Instrmt_67.add_attribute("Mult", "19280255.130000"); // 1
    Instrmt_67_set.insert("19280255.130000");
    Instrmt_67.add_attribute("MultTyp", "2"); // 1
    Instrmt_67_set.insert("2");
    Instrmt_67.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_67_set.insert("3");
    Instrmt_67.add_attribute("MinPxIncr", "17517763.220000"); // 1
    Instrmt_67_set.insert("17517763.220000");
    Instrmt_67.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_380254083"); // 1
    Instrmt_67_set.insert("MinPriceIncrementAmount_t_380254083");
    Instrmt_67.add_attribute("UOM", "Gal"); // 1
    Instrmt_67_set.insert("Gal");
    Instrmt_67.add_attribute("UOMQty", "15132738.840000"); // 1
    Instrmt_67_set.insert("15132738.840000");
    Instrmt_67.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_67_set.insert("Gal");
    Instrmt_67.add_attribute("PxUOMQty", "20856083.930000"); // 1
    Instrmt_67_set.insert("20856083.930000");
    Instrmt_67.add_attribute("SettlMeth", "P"); // 1
    Instrmt_67_set.insert("P");
    Instrmt_67.add_attribute("ExerStyle", "0"); // 1
    Instrmt_67_set.insert("0");
    Instrmt_67.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_67_set.insert("3");
    Instrmt_67.add_attribute("OptPayAmt", "OptPayoutAmount_t_1601981667"); // 1
    Instrmt_67_set.insert("OptPayoutAmount_t_1601981667");
    Instrmt_67.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_67_set.insert("INX");
    Instrmt_67.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_67_set.insert("FUTDA");
    Instrmt_67.add_attribute("ListMeth", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("CapPx", "13744295.450000"); // 1
    Instrmt_67_set.insert("13744295.450000");
    Instrmt_67.add_attribute("FlrPx", "2014683.950000"); // 1
    Instrmt_67_set.insert("2014683.950000");
    Instrmt_67.add_attribute("PutCall", "1"); // 1
    Instrmt_67_set.insert("1");
    Instrmt_67.add_attribute("FlexInd", "false"); // 1
    Instrmt_67_set.insert("false");
    Instrmt_67.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_67_set.insert("true");
    Instrmt_67.add_attribute("TmUnit", "H"); // 1
    Instrmt_67_set.insert("H");
    Instrmt_67.add_attribute("CpnRt", "19874795.310000"); // 1
    Instrmt_67_set.insert("19874795.310000");
    Instrmt_67.add_attribute("Exch", "SecurityExchange_t_1437539940"); // 1
    Instrmt_67_set.insert("SecurityExchange_t_1437539940");
    Instrmt_67.add_attribute("PosLmt", "1528311370"); // 1
    Instrmt_67_set.insert("1528311370");
    Instrmt_67.add_attribute("NTPosLmt", "1719921919"); // 1
    Instrmt_67_set.insert("1719921919");
    Instrmt_67.add_attribute("Issr", "Issuer_t_806705168"); // 1
    Instrmt_67_set.insert("Issuer_t_806705168");
    Instrmt_67.add_attribute("EncIssrLen", "1882007272"); // 1
    Instrmt_67_set.insert("1882007272");
    Instrmt_67.add_attribute("EncIssr", "EncodedIssuer_t_1079559565"); // 1
    Instrmt_67_set.insert("EncodedIssuer_t_1079559565");
    Instrmt_67.add_attribute("Desc", "SecurityDesc_t_811492679"); // 1
    Instrmt_67_set.insert("SecurityDesc_t_811492679");
    Instrmt_67.add_attribute("EncSecDescLen", "1273617829"); // 1
    Instrmt_67_set.insert("1273617829");
    Instrmt_67.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_860101430"); // 1
    Instrmt_67_set.insert("EncodedSecurityDesc_t_860101430");
    Instrmt_67.add_attribute("Pool", "Pool_t_268939838"); // 1
    Instrmt_67_set.insert("Pool_t_268939838");
    Instrmt_67.add_attribute("CSetMo", "1841704932"); // 1
    Instrmt_67_set.insert("1841704932");
    Instrmt_67.add_attribute("CPPgm", "99"); // 1
    Instrmt_67_set.insert("99");
    Instrmt_67.add_attribute("CPRegT", "CPRegType_t_649193922"); // 1
    Instrmt_67_set.insert("CPRegType_t_649193922");
    Instrmt_67.add_attribute("Dated", "DatedDate_t_2028199789"); // 1
    Instrmt_67_set.insert("DatedDate_t_2028199789");
    Instrmt_67.add_attribute("IntAcrl", "InterestAccrualDate_t_1977667989"); // 1
    Instrmt_67_set.insert("InterestAccrualDate_t_1977667989");
    all_values.push_back(Instrmt_67_set);
    all_compo_names.insert("Instrmt_67_set");

    {
      xml_element AID_70{"AID"};
      multiset<string> AID_70_set;
      AID_70.add_attribute("AltID", "SecurityAltID_t_812937492"); // 2
      AID_70_set.insert("SecurityAltID_t_812937492");
      AID_70.add_attribute("AltIDSrc", "K"); // 2
      AID_70_set.insert("K");
      all_values.push_back(AID_70_set);
      all_compo_names.insert("AID_70_set");

      Instrmt_67.add_element(AID_70);
    }
    {
      xml_element SecXML_70{"SecXML"};
      multiset<string> SecXML_70_set;
      SecXML_70.add_attribute("Schema", "SecurityXMLSchema_t_1420054542"); // 2
      SecXML_70_set.insert("SecurityXMLSchema_t_1420054542");
      all_values.push_back(SecXML_70_set);
      all_compo_names.insert("SecXML_70_set");

      Instrmt_67.add_element(SecXML_70);
    }
    {
      xml_element Evnt_70{"Evnt"};
      multiset<string> Evnt_70_set;
      Evnt_70.add_attribute("EventTyp", "99"); // 2
      Evnt_70_set.insert("99");
      Evnt_70.add_attribute("Dt", "EventDate_t_638648594"); // 2
      Evnt_70_set.insert("EventDate_t_638648594");
      Evnt_70.add_attribute("Tm", "EventTime_t_874552562"); // 2
      Evnt_70_set.insert("EventTime_t_874552562");
      Evnt_70.add_attribute("Px", "4427550.130000"); // 2
      Evnt_70_set.insert("4427550.130000");
      Evnt_70.add_attribute("Txt", "EventText_t_107871508"); // 2
      Evnt_70_set.insert("EventText_t_107871508");
      all_values.push_back(Evnt_70_set);
      all_compo_names.insert("Evnt_70_set");

      Instrmt_67.add_element(Evnt_70);
    }
    {
      xml_element Pty_366{"Pty"};
      multiset<string> Pty_366_set;
      Pty_366.add_attribute("ID", "InstrumentPartyID_t_370938871"); // 2
      Pty_366_set.insert("InstrumentPartyID_t_370938871");
      Pty_366.add_attribute("Src", "D"); // 2
      Pty_366_set.insert("D");
      Pty_366.add_attribute("R", "78"); // 2
      Pty_366_set.insert("78");
      all_values.push_back(Pty_366_set);
      all_compo_names.insert("Pty_366_set");

      {
        xml_element Sub_366{"Sub"};
        multiset<string> Sub_366_set;
        Sub_366.add_attribute("ID", "InstrumentPartySubID_t_653945532"); // 3
        Sub_366_set.insert("InstrumentPartySubID_t_653945532");
        Sub_366.add_attribute("Typ", "23"); // 3
        Sub_366_set.insert("23");
        all_values.push_back(Sub_366_set);
        all_compo_names.insert("Sub_366_set");

        Pty_366.add_element(Sub_366);
      }
      Instrmt_67.add_element(Pty_366);
    }
    {
      xml_element CmplxEvnt_67{"CmplxEvnt"};
      multiset<string> CmplxEvnt_67_set;
      CmplxEvnt_67.add_attribute("Typ", "6"); // 2
      CmplxEvnt_67_set.insert("6");
      CmplxEvnt_67.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1410145140"); // 2
      CmplxEvnt_67_set.insert("ComplexOptPayoutAmount_t_1410145140");
      CmplxEvnt_67.add_attribute("Px", "8865998.090000"); // 2
      CmplxEvnt_67_set.insert("8865998.090000");
      CmplxEvnt_67.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_67_set.insert("2");
      CmplxEvnt_67.add_attribute("PxBndryPrcsn", "7909728.620000"); // 2
      CmplxEvnt_67_set.insert("7909728.620000");
      CmplxEvnt_67.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_67_set.insert("2");
      CmplxEvnt_67.add_attribute("Cond", "2"); // 2
      CmplxEvnt_67_set.insert("2");
      all_values.push_back(CmplxEvnt_67_set);
      all_compo_names.insert("CmplxEvnt_67_set");

      {
        xml_element EvntDts_67{"EvntDts"};
        multiset<string> EvntDts_67_set;
        EvntDts_67.add_attribute("StartDt", "ComplexEventStartDate_t_525496486"); // 3
        EvntDts_67_set.insert("ComplexEventStartDate_t_525496486");
        EvntDts_67.add_attribute("EndDt", "ComplexEventEndDate_t_1538597645"); // 3
        EvntDts_67_set.insert("ComplexEventEndDate_t_1538597645");
        all_values.push_back(EvntDts_67_set);
        all_compo_names.insert("EvntDts_67_set");

        {
          xml_element EvntTms_67{"EvntTms"};
          multiset<string> EvntTms_67_set;
          EvntTms_67.add_attribute("StartTm", "1856098064"); // 4
          EvntTms_67_set.insert("1856098064");
          EvntTms_67.add_attribute("EndTm", "1799114315"); // 4
          EvntTms_67_set.insert("1799114315");
          all_values.push_back(EvntTms_67_set);
          all_compo_names.insert("EvntTms_67_set");

          EvntDts_67.add_element(EvntTms_67);
        }
        CmplxEvnt_67.add_element(EvntDts_67);
      }
      Instrmt_67.add_element(CmplxEvnt_67);
    }
    elt.add_element(Instrmt_67);
  } // end Instrmt
  { // Leg
    xml_element Leg_81{"Leg"};
    multiset<string> Leg_81_set;
    Leg_81.add_attribute("Sym", "LegSymbol_t_2125037903"); // 1
    Leg_81_set.insert("LegSymbol_t_2125037903");
    Leg_81.add_attribute("Sfx", "WI"); // 1
    Leg_81_set.insert("WI");
    Leg_81.add_attribute("ID", "LegSecurityID_t_715609531"); // 1
    Leg_81_set.insert("LegSecurityID_t_715609531");
    Leg_81.add_attribute("Src", "C"); // 1
    Leg_81_set.insert("C");
    Leg_81.add_attribute("Prod", "6"); // 1
    Leg_81_set.insert("6");
    Leg_81.add_attribute("CFI", "LegCFICode_t_545793872"); // 1
    Leg_81_set.insert("LegCFICode_t_545793872");
    Leg_81.add_attribute("SecTyp", "AMENDED"); // 1
    Leg_81_set.insert("AMENDED");
    Leg_81.add_attribute("SecSubTyp", "LegSecuritySubType_t_1192892627"); // 1
    Leg_81_set.insert("LegSecuritySubType_t_1192892627");
    Leg_81.add_attribute("MMY", "1965848415"); // 1
    Leg_81_set.insert("1965848415");
    Leg_81.add_attribute("Mat", "LegMaturityDate_t_487234525"); // 1
    Leg_81_set.insert("LegMaturityDate_t_487234525");
    Leg_81.add_attribute("MatTm", "1831541221"); // 1
    Leg_81_set.insert("1831541221");
    Leg_81.add_attribute("CpnPmt", "LegCouponPaymentDate_t_692917329"); // 1
    Leg_81_set.insert("LegCouponPaymentDate_t_692917329");
    Leg_81.add_attribute("Issued", "LegIssueDate_t_929989538"); // 1
    Leg_81_set.insert("LegIssueDate_t_929989538");
    Leg_81.add_attribute("RepoCollSecTyp", "1939412729"); // 1
    Leg_81_set.insert("1939412729");
    Leg_81.add_attribute("RepoTrm", "1063856200"); // 1
    Leg_81_set.insert("1063856200");
    Leg_81.add_attribute("RepoRt", "5996904.480000"); // 1
    Leg_81_set.insert("5996904.480000");
    Leg_81.add_attribute("Fctr", "1012689.850000"); // 1
    Leg_81_set.insert("1012689.850000");
    Leg_81.add_attribute("CrdRtg", "LegCreditRating_t_1717801733"); // 1
    Leg_81_set.insert("LegCreditRating_t_1717801733");
    Leg_81.add_attribute("Rgstry", "LegInstrRegistry_t_1646294374"); // 1
    Leg_81_set.insert("LegInstrRegistry_t_1646294374");
    Leg_81.add_attribute("Ctry", "1049112910"); // 1
    Leg_81_set.insert("1049112910");
    Leg_81.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_980463225"); // 1
    Leg_81_set.insert("LegStateOrProvinceOfIssue_t_980463225");
    Leg_81.add_attribute("Lcl", "LegLocaleOfIssue_t_385410535"); // 1
    Leg_81_set.insert("LegLocaleOfIssue_t_385410535");
    Leg_81.add_attribute("Redeem", "LegRedemptionDate_t_1287013126"); // 1
    Leg_81_set.insert("LegRedemptionDate_t_1287013126");
    Leg_81.add_attribute("Strk", "17714360.870000"); // 1
    Leg_81_set.insert("17714360.870000");
    Leg_81.add_attribute("StrkCcy", "CAN"); // 1
    Leg_81_set.insert("CAN");
    Leg_81.add_attribute("OptA", "149448925"); // 1
    Leg_81_set.insert("149448925");
    Leg_81.add_attribute("Cmult", "2355626.120000"); // 1
    Leg_81_set.insert("2355626.120000");
    Leg_81.add_attribute("MultTyp", "2"); // 1
    Leg_81_set.insert("2");
    Leg_81.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_81_set.insert("1");
    Leg_81.add_attribute("UOM", "lbs"); // 1
    Leg_81_set.insert("lbs");
    Leg_81.add_attribute("UOMQty", "20177871.830000"); // 1
    Leg_81_set.insert("20177871.830000");
    Leg_81.add_attribute("PxUOM", "tn"); // 1
    Leg_81_set.insert("tn");
    Leg_81.add_attribute("PxUOMQty", "12023875.700000"); // 1
    Leg_81_set.insert("12023875.700000");
    Leg_81.add_attribute("TmUnit", "D"); // 1
    Leg_81_set.insert("D");
    Leg_81.add_attribute("ExerStyle", "0"); // 1
    Leg_81_set.insert("0");
    Leg_81.add_attribute("CpnRt", "17481814.430000"); // 1
    Leg_81_set.insert("17481814.430000");
    Leg_81.add_attribute("Exch", "LegSecurityExchange_t_1936737381"); // 1
    Leg_81_set.insert("LegSecurityExchange_t_1936737381");
    Leg_81.add_attribute("Issr", "LegIssuer_t_1713875912"); // 1
    Leg_81_set.insert("LegIssuer_t_1713875912");
    Leg_81.add_attribute("EncLegIssrLen", "1566546210"); // 1
    Leg_81_set.insert("1566546210");
    Leg_81.add_attribute("EncLegIssr", "EncodedLegIssuer_t_276488258"); // 1
    Leg_81_set.insert("EncodedLegIssuer_t_276488258");
    Leg_81.add_attribute("Desc", "LegSecurityDesc_t_1397933485"); // 1
    Leg_81_set.insert("LegSecurityDesc_t_1397933485");
    Leg_81.add_attribute("EncLegSecDescLen", "111979891"); // 1
    Leg_81_set.insert("111979891");
    Leg_81.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1206477796"); // 1
    Leg_81_set.insert("EncodedLegSecurityDesc_t_1206477796");
    Leg_81.add_attribute("RatioQty", "11898625.660000"); // 1
    Leg_81_set.insert("11898625.660000");
    Leg_81.add_attribute("Side", "C"); // 1
    Leg_81_set.insert("C");
    Leg_81.add_attribute("Ccy", "USD"); // 1
    Leg_81_set.insert("USD");
    Leg_81.add_attribute("Pool", "LegPool_t_746154176"); // 1
    Leg_81_set.insert("LegPool_t_746154176");
    Leg_81.add_attribute("Dated", "LegDatedDate_t_1304978970"); // 1
    Leg_81_set.insert("LegDatedDate_t_1304978970");
    Leg_81.add_attribute("CSetMo", "192760814"); // 1
    Leg_81_set.insert("192760814");
    Leg_81.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1726617401"); // 1
    Leg_81_set.insert("LegInterestAccrualDate_t_1726617401");
    Leg_81.add_attribute("PutCall", "1690389505"); // 1
    Leg_81_set.insert("1690389505");
    Leg_81.add_attribute("LegOptionRatio", "14797739.400000"); // 1
    Leg_81_set.insert("14797739.400000");
    Leg_81.add_attribute("Px", "13505698.400000"); // 1
    Leg_81_set.insert("13505698.400000");
    all_values.push_back(Leg_81_set);
    all_compo_names.insert("Leg_81_set");

    {
      xml_element LegAID_78{"LegAID"};
      multiset<string> LegAID_78_set;
      LegAID_78.add_attribute("SecAltID", "LegSecurityAltID_t_387354472"); // 2
      LegAID_78_set.insert("LegSecurityAltID_t_387354472");
      LegAID_78.add_attribute("SecAltIDSrc", "9"); // 2
      LegAID_78_set.insert("9");
      all_values.push_back(LegAID_78_set);
      all_compo_names.insert("LegAID_78_set");

      Leg_81.add_element(LegAID_78);
    }
    elt.add_element(Leg_81);
  } // end Leg
  { // Leg
    xml_element Leg_82{"Leg"};
    multiset<string> Leg_82_set;
    Leg_82.add_attribute("Sym", "LegSymbol_t_1500018766"); // 1
    Leg_82_set.insert("LegSymbol_t_1500018766");
    Leg_82.add_attribute("Sfx", "CD"); // 1
    Leg_82_set.insert("CD");
    Leg_82.add_attribute("ID", "LegSecurityID_t_1556658084"); // 1
    Leg_82_set.insert("LegSecurityID_t_1556658084");
    Leg_82.add_attribute("Src", "C"); // 1
    Leg_82_set.insert("C");
    Leg_82.add_attribute("Prod", "13"); // 1
    Leg_82_set.insert("13");
    Leg_82.add_attribute("CFI", "LegCFICode_t_1426961619"); // 1
    Leg_82_set.insert("LegCFICode_t_1426961619");
    Leg_82.add_attribute("SecTyp", "STRUCT"); // 1
    Leg_82_set.insert("STRUCT");
    Leg_82.add_attribute("SecSubTyp", "LegSecuritySubType_t_164599046"); // 1
    Leg_82_set.insert("LegSecuritySubType_t_164599046");
    Leg_82.add_attribute("MMY", "1924013331"); // 1
    Leg_82_set.insert("1924013331");
    Leg_82.add_attribute("Mat", "LegMaturityDate_t_969013188"); // 1
    Leg_82_set.insert("LegMaturityDate_t_969013188");
    Leg_82.add_attribute("MatTm", "1912780489"); // 1
    Leg_82_set.insert("1912780489");
    Leg_82.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1713267064"); // 1
    Leg_82_set.insert("LegCouponPaymentDate_t_1713267064");
    Leg_82.add_attribute("Issued", "LegIssueDate_t_535405452"); // 1
    Leg_82_set.insert("LegIssueDate_t_535405452");
    Leg_82.add_attribute("RepoCollSecTyp", "1331843051"); // 1
    Leg_82_set.insert("1331843051");
    Leg_82.add_attribute("RepoTrm", "1989755322"); // 1
    Leg_82_set.insert("1989755322");
    Leg_82.add_attribute("RepoRt", "19333389.370000"); // 1
    Leg_82_set.insert("19333389.370000");
    Leg_82.add_attribute("Fctr", "14438229.420000"); // 1
    Leg_82_set.insert("14438229.420000");
    Leg_82.add_attribute("CrdRtg", "LegCreditRating_t_1048749470"); // 1
    Leg_82_set.insert("LegCreditRating_t_1048749470");
    Leg_82.add_attribute("Rgstry", "LegInstrRegistry_t_975717856"); // 1
    Leg_82_set.insert("LegInstrRegistry_t_975717856");
    Leg_82.add_attribute("Ctry", "472175385"); // 1
    Leg_82_set.insert("472175385");
    Leg_82.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_707434066"); // 1
    Leg_82_set.insert("LegStateOrProvinceOfIssue_t_707434066");
    Leg_82.add_attribute("Lcl", "LegLocaleOfIssue_t_119365760"); // 1
    Leg_82_set.insert("LegLocaleOfIssue_t_119365760");
    Leg_82.add_attribute("Redeem", "LegRedemptionDate_t_1218329562"); // 1
    Leg_82_set.insert("LegRedemptionDate_t_1218329562");
    Leg_82.add_attribute("Strk", "20124130.370000"); // 1
    Leg_82_set.insert("20124130.370000");
    Leg_82.add_attribute("StrkCcy", "CHF"); // 1
    Leg_82_set.insert("CHF");
    Leg_82.add_attribute("OptA", "1555318894"); // 1
    Leg_82_set.insert("1555318894");
    Leg_82.add_attribute("Cmult", "17919005.140000"); // 1
    Leg_82_set.insert("17919005.140000");
    Leg_82.add_attribute("MultTyp", "1"); // 1
    Leg_82_set.insert("1");
    Leg_82.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_82_set.insert("2");
    Leg_82.add_attribute("UOM", "Bbl"); // 1
    Leg_82_set.insert("Bbl");
    Leg_82.add_attribute("UOMQty", "15005682.740000"); // 1
    Leg_82_set.insert("15005682.740000");
    Leg_82.add_attribute("PxUOM", "Bcf"); // 1
    Leg_82_set.insert("Bcf");
    Leg_82.add_attribute("PxUOMQty", "7175001.060000"); // 1
    Leg_82_set.insert("7175001.060000");
    Leg_82.add_attribute("TmUnit", "Min"); // 1
    Leg_82_set.insert("Min");
    Leg_82.add_attribute("ExerStyle", "0"); // 1
    Leg_82_set.insert("0");
    Leg_82.add_attribute("CpnRt", "21444617.250000"); // 1
    Leg_82_set.insert("21444617.250000");
    Leg_82.add_attribute("Exch", "LegSecurityExchange_t_1102212888"); // 1
    Leg_82_set.insert("LegSecurityExchange_t_1102212888");
    Leg_82.add_attribute("Issr", "LegIssuer_t_1692400973"); // 1
    Leg_82_set.insert("LegIssuer_t_1692400973");
    Leg_82.add_attribute("EncLegIssrLen", "1920991408"); // 1
    Leg_82_set.insert("1920991408");
    Leg_82.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2071226077"); // 1
    Leg_82_set.insert("EncodedLegIssuer_t_2071226077");
    Leg_82.add_attribute("Desc", "LegSecurityDesc_t_1457697814"); // 1
    Leg_82_set.insert("LegSecurityDesc_t_1457697814");
    Leg_82.add_attribute("EncLegSecDescLen", "1486774824"); // 1
    Leg_82_set.insert("1486774824");
    Leg_82.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_459147881"); // 1
    Leg_82_set.insert("EncodedLegSecurityDesc_t_459147881");
    Leg_82.add_attribute("RatioQty", "6420572.170000"); // 1
    Leg_82_set.insert("6420572.170000");
    Leg_82.add_attribute("Side", "3"); // 1
    Leg_82_set.insert("3");
    Leg_82.add_attribute("Ccy", "EUR"); // 1
    Leg_82_set.insert("EUR");
    Leg_82.add_attribute("Pool", "LegPool_t_230312320"); // 1
    Leg_82_set.insert("LegPool_t_230312320");
    Leg_82.add_attribute("Dated", "LegDatedDate_t_1220721027"); // 1
    Leg_82_set.insert("LegDatedDate_t_1220721027");
    Leg_82.add_attribute("CSetMo", "410571896"); // 1
    Leg_82_set.insert("410571896");
    Leg_82.add_attribute("IntAcrl", "LegInterestAccrualDate_t_937746387"); // 1
    Leg_82_set.insert("LegInterestAccrualDate_t_937746387");
    Leg_82.add_attribute("PutCall", "1340086787"); // 1
    Leg_82_set.insert("1340086787");
    Leg_82.add_attribute("LegOptionRatio", "16289014.580000"); // 1
    Leg_82_set.insert("16289014.580000");
    Leg_82.add_attribute("Px", "8026757.760000"); // 1
    Leg_82_set.insert("8026757.760000");
    all_values.push_back(Leg_82_set);
    all_compo_names.insert("Leg_82_set");

    {
      xml_element LegAID_79{"LegAID"};
      multiset<string> LegAID_79_set;
      LegAID_79.add_attribute("SecAltID", "LegSecurityAltID_t_1652213361"); // 2
      LegAID_79_set.insert("LegSecurityAltID_t_1652213361");
      LegAID_79.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_79_set.insert("J");
      all_values.push_back(LegAID_79_set);
      all_compo_names.insert("LegAID_79_set");

      Leg_82.add_element(LegAID_79);
    }
    elt.add_element(Leg_82);
  } // end Leg
  { // Leg
    xml_element Leg_83{"Leg"};
    multiset<string> Leg_83_set;
    Leg_83.add_attribute("Sym", "LegSymbol_t_210511022"); // 1
    Leg_83_set.insert("LegSymbol_t_210511022");
    Leg_83.add_attribute("Sfx", "WI"); // 1
    Leg_83_set.insert("WI");
    Leg_83.add_attribute("ID", "LegSecurityID_t_279430634"); // 1
    Leg_83_set.insert("LegSecurityID_t_279430634");
    Leg_83.add_attribute("Src", "E"); // 1
    Leg_83_set.insert("E");
    Leg_83.add_attribute("Prod", "10"); // 1
    Leg_83_set.insert("10");
    Leg_83.add_attribute("CFI", "LegCFICode_t_1779998908"); // 1
    Leg_83_set.insert("LegCFICode_t_1779998908");
    Leg_83.add_attribute("SecTyp", "MPO"); // 1
    Leg_83_set.insert("MPO");
    Leg_83.add_attribute("SecSubTyp", "LegSecuritySubType_t_1174972356"); // 1
    Leg_83_set.insert("LegSecuritySubType_t_1174972356");
    Leg_83.add_attribute("MMY", "286698245"); // 1
    Leg_83_set.insert("286698245");
    Leg_83.add_attribute("Mat", "LegMaturityDate_t_1951609472"); // 1
    Leg_83_set.insert("LegMaturityDate_t_1951609472");
    Leg_83.add_attribute("MatTm", "1171950434"); // 1
    Leg_83_set.insert("1171950434");
    Leg_83.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1388911133"); // 1
    Leg_83_set.insert("LegCouponPaymentDate_t_1388911133");
    Leg_83.add_attribute("Issued", "LegIssueDate_t_1496526797"); // 1
    Leg_83_set.insert("LegIssueDate_t_1496526797");
    Leg_83.add_attribute("RepoCollSecTyp", "945458194"); // 1
    Leg_83_set.insert("945458194");
    Leg_83.add_attribute("RepoTrm", "1312653562"); // 1
    Leg_83_set.insert("1312653562");
    Leg_83.add_attribute("RepoRt", "8067409.630000"); // 1
    Leg_83_set.insert("8067409.630000");
    Leg_83.add_attribute("Fctr", "2847493.710000"); // 1
    Leg_83_set.insert("2847493.710000");
    Leg_83.add_attribute("CrdRtg", "LegCreditRating_t_1771801444"); // 1
    Leg_83_set.insert("LegCreditRating_t_1771801444");
    Leg_83.add_attribute("Rgstry", "LegInstrRegistry_t_1448798180"); // 1
    Leg_83_set.insert("LegInstrRegistry_t_1448798180");
    Leg_83.add_attribute("Ctry", "1613795869"); // 1
    Leg_83_set.insert("1613795869");
    Leg_83.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2016804615"); // 1
    Leg_83_set.insert("LegStateOrProvinceOfIssue_t_2016804615");
    Leg_83.add_attribute("Lcl", "LegLocaleOfIssue_t_1387194691"); // 1
    Leg_83_set.insert("LegLocaleOfIssue_t_1387194691");
    Leg_83.add_attribute("Redeem", "LegRedemptionDate_t_1844108190"); // 1
    Leg_83_set.insert("LegRedemptionDate_t_1844108190");
    Leg_83.add_attribute("Strk", "10900419.940000"); // 1
    Leg_83_set.insert("10900419.940000");
    Leg_83.add_attribute("StrkCcy", "EUR"); // 1
    Leg_83_set.insert("EUR");
    Leg_83.add_attribute("OptA", "282645133"); // 1
    Leg_83_set.insert("282645133");
    Leg_83.add_attribute("Cmult", "12791843.980000"); // 1
    Leg_83_set.insert("12791843.980000");
    Leg_83.add_attribute("MultTyp", "1"); // 1
    Leg_83_set.insert("1");
    Leg_83.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_83_set.insert("4");
    Leg_83.add_attribute("UOM", "Bbl"); // 1
    Leg_83_set.insert("Bbl");
    Leg_83.add_attribute("UOMQty", "16475577.270000"); // 1
    Leg_83_set.insert("16475577.270000");
    Leg_83.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_83_set.insert("oz_tr");
    Leg_83.add_attribute("PxUOMQty", "18374961.580000"); // 1
    Leg_83_set.insert("18374961.580000");
    Leg_83.add_attribute("TmUnit", "H"); // 1
    Leg_83_set.insert("H");
    Leg_83.add_attribute("ExerStyle", "1"); // 1
    Leg_83_set.insert("1");
    Leg_83.add_attribute("CpnRt", "14700114.180000"); // 1
    Leg_83_set.insert("14700114.180000");
    Leg_83.add_attribute("Exch", "LegSecurityExchange_t_2077066014"); // 1
    Leg_83_set.insert("LegSecurityExchange_t_2077066014");
    Leg_83.add_attribute("Issr", "LegIssuer_t_568966032"); // 1
    Leg_83_set.insert("LegIssuer_t_568966032");
    Leg_83.add_attribute("EncLegIssrLen", "1756709663"); // 1
    Leg_83_set.insert("1756709663");
    Leg_83.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1881191838"); // 1
    Leg_83_set.insert("EncodedLegIssuer_t_1881191838");
    Leg_83.add_attribute("Desc", "LegSecurityDesc_t_1740916466"); // 1
    Leg_83_set.insert("LegSecurityDesc_t_1740916466");
    Leg_83.add_attribute("EncLegSecDescLen", "998137148"); // 1
    Leg_83_set.insert("998137148");
    Leg_83.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1230234987"); // 1
    Leg_83_set.insert("EncodedLegSecurityDesc_t_1230234987");
    Leg_83.add_attribute("RatioQty", "5388910.120000"); // 1
    Leg_83_set.insert("5388910.120000");
    Leg_83.add_attribute("Side", "8"); // 1
    Leg_83_set.insert("8");
    Leg_83.add_attribute("Ccy", "EUR"); // 1
    Leg_83_set.insert("EUR");
    Leg_83.add_attribute("Pool", "LegPool_t_1935108507"); // 1
    Leg_83_set.insert("LegPool_t_1935108507");
    Leg_83.add_attribute("Dated", "LegDatedDate_t_1338290482"); // 1
    Leg_83_set.insert("LegDatedDate_t_1338290482");
    Leg_83.add_attribute("CSetMo", "289952605"); // 1
    Leg_83_set.insert("289952605");
    Leg_83.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1804429474"); // 1
    Leg_83_set.insert("LegInterestAccrualDate_t_1804429474");
    Leg_83.add_attribute("PutCall", "578001525"); // 1
    Leg_83_set.insert("578001525");
    Leg_83.add_attribute("LegOptionRatio", "21340607.950000"); // 1
    Leg_83_set.insert("21340607.950000");
    Leg_83.add_attribute("Px", "7469878.200000"); // 1
    Leg_83_set.insert("7469878.200000");
    all_values.push_back(Leg_83_set);
    all_compo_names.insert("Leg_83_set");

    {
      xml_element LegAID_80{"LegAID"};
      multiset<string> LegAID_80_set;
      LegAID_80.add_attribute("SecAltID", "LegSecurityAltID_t_228284464"); // 2
      LegAID_80_set.insert("LegSecurityAltID_t_228284464");
      LegAID_80.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_80_set.insert("D");
      all_values.push_back(LegAID_80_set);
      all_compo_names.insert("LegAID_80_set");

      Leg_83.add_element(LegAID_80);
    }
    elt.add_element(Leg_83);
  } // end Leg
  { // Undly
    xml_element Undly_96{"Undly"};
    multiset<string> Undly_96_set;
    Undly_96.add_attribute("Sym", "UnderlyingSymbol_t_1507468862"); // 1
    Undly_96_set.insert("UnderlyingSymbol_t_1507468862");
    Undly_96.add_attribute("Sfx", "WI"); // 1
    Undly_96_set.insert("WI");
    Undly_96.add_attribute("ID", "UnderlyingSecurityID_t_817007799"); // 1
    Undly_96_set.insert("UnderlyingSecurityID_t_817007799");
    Undly_96.add_attribute("Src", "1"); // 1
    Undly_96_set.insert("1");
    Undly_96.add_attribute("Prod", "7"); // 1
    Undly_96_set.insert("7");
    Undly_96.add_attribute("CFI", "UnderlyingCFICode_t_1901012872"); // 1
    Undly_96_set.insert("UnderlyingCFICode_t_1901012872");
    Undly_96.add_attribute("SecTyp", "MPP"); // 1
    Undly_96_set.insert("MPP");
    Undly_96.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1063843681"); // 1
    Undly_96_set.insert("UnderlyingSecuritySubType_t_1063843681");
    Undly_96.add_attribute("MMY", "1295006548"); // 1
    Undly_96_set.insert("1295006548");
    Undly_96.add_attribute("Mat", "UnderlyingMaturityDate_t_2078074666"); // 1
    Undly_96_set.insert("UnderlyingMaturityDate_t_2078074666");
    Undly_96.add_attribute("MatTm", "993426047"); // 1
    Undly_96_set.insert("993426047");
    Undly_96.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1863972580"); // 1
    Undly_96_set.insert("UnderlyingCouponPaymentDate_t_1863972580");
    Undly_96.add_attribute("RestrctTyp", "MR"); // 1
    Undly_96_set.insert("MR");
    Undly_96.add_attribute("Snrty", "SD"); // 1
    Undly_96_set.insert("SD");
    Undly_96.add_attribute("NotlPctOut", "14574053.980000"); // 1
    Undly_96_set.insert("14574053.980000");
    Undly_96.add_attribute("OrigNotlPctOut", "5379541.820000"); // 1
    Undly_96_set.insert("5379541.820000");
    Undly_96.add_attribute("AttchPnt", "19573692.240000"); // 1
    Undly_96_set.insert("19573692.240000");
    Undly_96.add_attribute("DetchPnt", "19962964.100000"); // 1
    Undly_96_set.insert("19962964.100000");
    Undly_96.add_attribute("Issued", "UnderlyingIssueDate_t_701261245"); // 1
    Undly_96_set.insert("UnderlyingIssueDate_t_701261245");
    Undly_96.add_attribute("RepoCollSecTyp", "1846861526"); // 1
    Undly_96_set.insert("1846861526");
    Undly_96.add_attribute("RepoTrm", "672453146"); // 1
    Undly_96_set.insert("672453146");
    Undly_96.add_attribute("RepoRt", "4888861.040000"); // 1
    Undly_96_set.insert("4888861.040000");
    Undly_96.add_attribute("Fctr", "10376683.600000"); // 1
    Undly_96_set.insert("10376683.600000");
    Undly_96.add_attribute("CrdRtg", "UnderlyingCreditRating_t_962405751"); // 1
    Undly_96_set.insert("UnderlyingCreditRating_t_962405751");
    Undly_96.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_145831930"); // 1
    Undly_96_set.insert("UnderlyingInstrRegistry_t_145831930");
    Undly_96.add_attribute("Ctry", "1615669885"); // 1
    Undly_96_set.insert("1615669885");
    Undly_96.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_948982898"); // 1
    Undly_96_set.insert("UnderlyingStateOrProvinceOfIssue_t_948982898");
    Undly_96.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_892819750"); // 1
    Undly_96_set.insert("UnderlyingLocaleOfIssue_t_892819750");
    Undly_96.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1843954350"); // 1
    Undly_96_set.insert("UnderlyingRedemptionDate_t_1843954350");
    Undly_96.add_attribute("StrkPx", "15699309.740000"); // 1
    Undly_96_set.insert("15699309.740000");
    Undly_96.add_attribute("StrkCcy", "USD"); // 1
    Undly_96_set.insert("USD");
    Undly_96.add_attribute("OptA", "1480442107"); // 1
    Undly_96_set.insert("1480442107");
    Undly_96.add_attribute("Mult", "5919768.540000"); // 1
    Undly_96_set.insert("5919768.540000");
    Undly_96.add_attribute("MultTyp", "0"); // 1
    Undly_96_set.insert("0");
    Undly_96.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_96_set.insert("4");
    Undly_96.add_attribute("UOM", "oz_tr"); // 1
    Undly_96_set.insert("oz_tr");
    Undly_96.add_attribute("UOMQty", "5825699.030000"); // 1
    Undly_96_set.insert("5825699.030000");
    Undly_96.add_attribute("PxUOM", "tn"); // 1
    Undly_96_set.insert("tn");
    Undly_96.add_attribute("PxUOMQty", "16405126.260000"); // 1
    Undly_96_set.insert("16405126.260000");
    Undly_96.add_attribute("TmUnit", "Min"); // 1
    Undly_96_set.insert("Min");
    Undly_96.add_attribute("ExerStyle", "0"); // 1
    Undly_96_set.insert("0");
    Undly_96.add_attribute("CpnRt", "13570015.580000"); // 1
    Undly_96_set.insert("13570015.580000");
    Undly_96.add_attribute("Exch", "UnderlyingSecurityExchange_t_52977955"); // 1
    Undly_96_set.insert("UnderlyingSecurityExchange_t_52977955");
    Undly_96.add_attribute("Issr", "UnderlyingIssuer_t_1527947638"); // 1
    Undly_96_set.insert("UnderlyingIssuer_t_1527947638");
    Undly_96.add_attribute("EncUndIssrLen", "666923308"); // 1
    Undly_96_set.insert("666923308");
    Undly_96.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_590932137"); // 1
    Undly_96_set.insert("EncodedUnderlyingIssuer_t_590932137");
    Undly_96.add_attribute("Desc", "UnderlyingSecurityDesc_t_1337833214"); // 1
    Undly_96_set.insert("UnderlyingSecurityDesc_t_1337833214");
    Undly_96.add_attribute("EncUndSecDescLen", "515736071"); // 1
    Undly_96_set.insert("515736071");
    Undly_96.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1292193382"); // 1
    Undly_96_set.insert("EncodedUnderlyingSecurityDesc_t_1292193382");
    Undly_96.add_attribute("CPPgm", "UnderlyingCPProgram_t_1037211093"); // 1
    Undly_96_set.insert("UnderlyingCPProgram_t_1037211093");
    Undly_96.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1188189217"); // 1
    Undly_96_set.insert("UnderlyingCPRegType_t_1188189217");
    Undly_96.add_attribute("AllocPct", "17810794.860000"); // 1
    Undly_96_set.insert("17810794.860000");
    Undly_96.add_attribute("Ccy", "GBP"); // 1
    Undly_96_set.insert("GBP");
    Undly_96.add_attribute("Qty", "19269114.160000"); // 1
    Undly_96_set.insert("19269114.160000");
    Undly_96.add_attribute("SettlTyp", "4"); // 1
    Undly_96_set.insert("4");
    Undly_96.add_attribute("CashAmt", "UnderlyingCashAmount_t_952094218"); // 1
    Undly_96_set.insert("UnderlyingCashAmount_t_952094218");
    Undly_96.add_attribute("CashTyp", "FIXED"); // 1
    Undly_96_set.insert("FIXED");
    Undly_96.add_attribute("Px", "12395363.930000"); // 1
    Undly_96_set.insert("12395363.930000");
    Undly_96.add_attribute("DirtPx", "3745415.440000"); // 1
    Undly_96_set.insert("3745415.440000");
    Undly_96.add_attribute("EndPx", "4472165.730000"); // 1
    Undly_96_set.insert("4472165.730000");
    Undly_96.add_attribute("StartVal", "UnderlyingStartValue_t_295992309"); // 1
    Undly_96_set.insert("UnderlyingStartValue_t_295992309");
    Undly_96.add_attribute("CurVal", "UnderlyingCurrentValue_t_1854983651"); // 1
    Undly_96_set.insert("UnderlyingCurrentValue_t_1854983651");
    Undly_96.add_attribute("EndVal", "UnderlyingEndValue_t_1039193427"); // 1
    Undly_96_set.insert("UnderlyingEndValue_t_1039193427");
    Undly_96.add_attribute("AdjQty", "2704989.640000"); // 1
    Undly_96_set.insert("2704989.640000");
    Undly_96.add_attribute("FxRate", "5985273.220000"); // 1
    Undly_96_set.insert("5985273.220000");
    Undly_96.add_attribute("FxRateCalc", "M"); // 1
    Undly_96_set.insert("M");
    Undly_96.add_attribute("CapValu", "UnderlyingCapValue_t_853068868"); // 1
    Undly_96_set.insert("UnderlyingCapValue_t_853068868");
    Undly_96.add_attribute("SetMeth", "UnderlyingSettlMethod_t_405914675"); // 1
    Undly_96_set.insert("UnderlyingSettlMethod_t_405914675");
    Undly_96.add_attribute("PutCall", "877728484"); // 1
    Undly_96_set.insert("877728484");
    all_values.push_back(Undly_96_set);
    all_compo_names.insert("Undly_96_set");

    {
      xml_element UndAID_96{"UndAID"};
      multiset<string> UndAID_96_set;
      UndAID_96.add_attribute("AltID", "UnderlyingSecurityAltID_t_1366229790"); // 2
      UndAID_96_set.insert("UnderlyingSecurityAltID_t_1366229790");
      UndAID_96.add_attribute("AltIDSrc", "5"); // 2
      UndAID_96_set.insert("5");
      all_values.push_back(UndAID_96_set);
      all_compo_names.insert("UndAID_96_set");

      Undly_96.add_element(UndAID_96);
    }
    {
      xml_element Stip_152{"Stip"};
      multiset<string> Stip_152_set;
      Stip_152.add_attribute("Typ", "PRIMARY"); // 2
      Stip_152_set.insert("PRIMARY");
      Stip_152.add_attribute("Val", "UnderlyingStipValue_t_1419207745"); // 2
      Stip_152_set.insert("UnderlyingStipValue_t_1419207745");
      all_values.push_back(Stip_152_set);
      all_compo_names.insert("Stip_152_set");

      Undly_96.add_element(Stip_152);
    }
    {
      xml_element Pty_367{"Pty"};
      multiset<string> Pty_367_set;
      Pty_367.add_attribute("ID", "UnderlyingInstrumentPartyID_t_587192066"); // 2
      Pty_367_set.insert("UnderlyingInstrumentPartyID_t_587192066");
      Pty_367.add_attribute("Src", "G"); // 2
      Pty_367_set.insert("G");
      Pty_367.add_attribute("R", "61"); // 2
      Pty_367_set.insert("61");
      all_values.push_back(Pty_367_set);
      all_compo_names.insert("Pty_367_set");

      {
        xml_element Sub_367{"Sub"};
        multiset<string> Sub_367_set;
        Sub_367.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1925025280"); // 3
        Sub_367_set.insert("UnderlyingInstrumentPartySubID_t_1925025280");
        Sub_367.add_attribute("Typ", "14"); // 3
        Sub_367_set.insert("14");
        all_values.push_back(Sub_367_set);
        all_compo_names.insert("Sub_367_set");

        Pty_367.add_element(Sub_367);
      }
      Undly_96.add_element(Pty_367);
    }
    elt.add_element(Undly_96);
  } // end Undly
  { // Undly
    xml_element Undly_97{"Undly"};
    multiset<string> Undly_97_set;
    Undly_97.add_attribute("Sym", "UnderlyingSymbol_t_1154849617"); // 1
    Undly_97_set.insert("UnderlyingSymbol_t_1154849617");
    Undly_97.add_attribute("Sfx", "WI"); // 1
    Undly_97_set.insert("WI");
    Undly_97.add_attribute("ID", "UnderlyingSecurityID_t_310611343"); // 1
    Undly_97_set.insert("UnderlyingSecurityID_t_310611343");
    Undly_97.add_attribute("Src", "J"); // 1
    Undly_97_set.insert("J");
    Undly_97.add_attribute("Prod", "4"); // 1
    Undly_97_set.insert("4");
    Undly_97.add_attribute("CFI", "UnderlyingCFICode_t_313722663"); // 1
    Undly_97_set.insert("UnderlyingCFICode_t_313722663");
    Undly_97.add_attribute("SecTyp", "TLQN"); // 1
    Undly_97_set.insert("TLQN");
    Undly_97.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_137730574"); // 1
    Undly_97_set.insert("UnderlyingSecuritySubType_t_137730574");
    Undly_97.add_attribute("MMY", "1265816881"); // 1
    Undly_97_set.insert("1265816881");
    Undly_97.add_attribute("Mat", "UnderlyingMaturityDate_t_1240120743"); // 1
    Undly_97_set.insert("UnderlyingMaturityDate_t_1240120743");
    Undly_97.add_attribute("MatTm", "1377266967"); // 1
    Undly_97_set.insert("1377266967");
    Undly_97.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1640358425"); // 1
    Undly_97_set.insert("UnderlyingCouponPaymentDate_t_1640358425");
    Undly_97.add_attribute("RestrctTyp", "FR"); // 1
    Undly_97_set.insert("FR");
    Undly_97.add_attribute("Snrty", "SD"); // 1
    Undly_97_set.insert("SD");
    Undly_97.add_attribute("NotlPctOut", "13478584.280000"); // 1
    Undly_97_set.insert("13478584.280000");
    Undly_97.add_attribute("OrigNotlPctOut", "5790470.960000"); // 1
    Undly_97_set.insert("5790470.960000");
    Undly_97.add_attribute("AttchPnt", "19437582.410000"); // 1
    Undly_97_set.insert("19437582.410000");
    Undly_97.add_attribute("DetchPnt", "19463857.510000"); // 1
    Undly_97_set.insert("19463857.510000");
    Undly_97.add_attribute("Issued", "UnderlyingIssueDate_t_1963746602"); // 1
    Undly_97_set.insert("UnderlyingIssueDate_t_1963746602");
    Undly_97.add_attribute("RepoCollSecTyp", "649343461"); // 1
    Undly_97_set.insert("649343461");
    Undly_97.add_attribute("RepoTrm", "204816778"); // 1
    Undly_97_set.insert("204816778");
    Undly_97.add_attribute("RepoRt", "6939914.380000"); // 1
    Undly_97_set.insert("6939914.380000");
    Undly_97.add_attribute("Fctr", "20155732.510000"); // 1
    Undly_97_set.insert("20155732.510000");
    Undly_97.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1411544854"); // 1
    Undly_97_set.insert("UnderlyingCreditRating_t_1411544854");
    Undly_97.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_781237833"); // 1
    Undly_97_set.insert("UnderlyingInstrRegistry_t_781237833");
    Undly_97.add_attribute("Ctry", "1287297348"); // 1
    Undly_97_set.insert("1287297348");
    Undly_97.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1998736920"); // 1
    Undly_97_set.insert("UnderlyingStateOrProvinceOfIssue_t_1998736920");
    Undly_97.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1535407537"); // 1
    Undly_97_set.insert("UnderlyingLocaleOfIssue_t_1535407537");
    Undly_97.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1149953583"); // 1
    Undly_97_set.insert("UnderlyingRedemptionDate_t_1149953583");
    Undly_97.add_attribute("StrkPx", "17762785.530000"); // 1
    Undly_97_set.insert("17762785.530000");
    Undly_97.add_attribute("StrkCcy", "CHF"); // 1
    Undly_97_set.insert("CHF");
    Undly_97.add_attribute("OptA", "443547630"); // 1
    Undly_97_set.insert("443547630");
    Undly_97.add_attribute("Mult", "9684410.070000"); // 1
    Undly_97_set.insert("9684410.070000");
    Undly_97.add_attribute("MultTyp", "0"); // 1
    Undly_97_set.insert("0");
    Undly_97.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_97_set.insert("1");
    Undly_97.add_attribute("UOM", "oz_tr"); // 1
    Undly_97_set.insert("oz_tr");
    Undly_97.add_attribute("UOMQty", "15136382.330000"); // 1
    Undly_97_set.insert("15136382.330000");
    Undly_97.add_attribute("PxUOM", "lbs"); // 1
    Undly_97_set.insert("lbs");
    Undly_97.add_attribute("PxUOMQty", "4004969.040000"); // 1
    Undly_97_set.insert("4004969.040000");
    Undly_97.add_attribute("TmUnit", "Min"); // 1
    Undly_97_set.insert("Min");
    Undly_97.add_attribute("ExerStyle", "1"); // 1
    Undly_97_set.insert("1");
    Undly_97.add_attribute("CpnRt", "20408553.290000"); // 1
    Undly_97_set.insert("20408553.290000");
    Undly_97.add_attribute("Exch", "UnderlyingSecurityExchange_t_146128997"); // 1
    Undly_97_set.insert("UnderlyingSecurityExchange_t_146128997");
    Undly_97.add_attribute("Issr", "UnderlyingIssuer_t_78985683"); // 1
    Undly_97_set.insert("UnderlyingIssuer_t_78985683");
    Undly_97.add_attribute("EncUndIssrLen", "1241230110"); // 1
    Undly_97_set.insert("1241230110");
    Undly_97.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_725176093"); // 1
    Undly_97_set.insert("EncodedUnderlyingIssuer_t_725176093");
    Undly_97.add_attribute("Desc", "UnderlyingSecurityDesc_t_2022743924"); // 1
    Undly_97_set.insert("UnderlyingSecurityDesc_t_2022743924");
    Undly_97.add_attribute("EncUndSecDescLen", "1040132213"); // 1
    Undly_97_set.insert("1040132213");
    Undly_97.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_541439047"); // 1
    Undly_97_set.insert("EncodedUnderlyingSecurityDesc_t_541439047");
    Undly_97.add_attribute("CPPgm", "UnderlyingCPProgram_t_524603737"); // 1
    Undly_97_set.insert("UnderlyingCPProgram_t_524603737");
    Undly_97.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1244948991"); // 1
    Undly_97_set.insert("UnderlyingCPRegType_t_1244948991");
    Undly_97.add_attribute("AllocPct", "12354304.850000"); // 1
    Undly_97_set.insert("12354304.850000");
    Undly_97.add_attribute("Ccy", "USD"); // 1
    Undly_97_set.insert("USD");
    Undly_97.add_attribute("Qty", "20166683.190000"); // 1
    Undly_97_set.insert("20166683.190000");
    Undly_97.add_attribute("SettlTyp", "2"); // 1
    Undly_97_set.insert("2");
    Undly_97.add_attribute("CashAmt", "UnderlyingCashAmount_t_360263470"); // 1
    Undly_97_set.insert("UnderlyingCashAmount_t_360263470");
    Undly_97.add_attribute("CashTyp", "FIXED"); // 1
    Undly_97_set.insert("FIXED");
    Undly_97.add_attribute("Px", "6824606.240000"); // 1
    Undly_97_set.insert("6824606.240000");
    Undly_97.add_attribute("DirtPx", "21365420.230000"); // 1
    Undly_97_set.insert("21365420.230000");
    Undly_97.add_attribute("EndPx", "20624218.710000"); // 1
    Undly_97_set.insert("20624218.710000");
    Undly_97.add_attribute("StartVal", "UnderlyingStartValue_t_839780177"); // 1
    Undly_97_set.insert("UnderlyingStartValue_t_839780177");
    Undly_97.add_attribute("CurVal", "UnderlyingCurrentValue_t_432606006"); // 1
    Undly_97_set.insert("UnderlyingCurrentValue_t_432606006");
    Undly_97.add_attribute("EndVal", "UnderlyingEndValue_t_883379230"); // 1
    Undly_97_set.insert("UnderlyingEndValue_t_883379230");
    Undly_97.add_attribute("AdjQty", "17855451.860000"); // 1
    Undly_97_set.insert("17855451.860000");
    Undly_97.add_attribute("FxRate", "16183021.670000"); // 1
    Undly_97_set.insert("16183021.670000");
    Undly_97.add_attribute("FxRateCalc", "D"); // 1
    Undly_97_set.insert("D");
    Undly_97.add_attribute("CapValu", "UnderlyingCapValue_t_1151699771"); // 1
    Undly_97_set.insert("UnderlyingCapValue_t_1151699771");
    Undly_97.add_attribute("SetMeth", "UnderlyingSettlMethod_t_794245255"); // 1
    Undly_97_set.insert("UnderlyingSettlMethod_t_794245255");
    Undly_97.add_attribute("PutCall", "418556157"); // 1
    Undly_97_set.insert("418556157");
    all_values.push_back(Undly_97_set);
    all_compo_names.insert("Undly_97_set");

    {
      xml_element UndAID_97{"UndAID"};
      multiset<string> UndAID_97_set;
      UndAID_97.add_attribute("AltID", "UnderlyingSecurityAltID_t_1757975100"); // 2
      UndAID_97_set.insert("UnderlyingSecurityAltID_t_1757975100");
      UndAID_97.add_attribute("AltIDSrc", "E"); // 2
      UndAID_97_set.insert("E");
      all_values.push_back(UndAID_97_set);
      all_compo_names.insert("UndAID_97_set");

      Undly_97.add_element(UndAID_97);
    }
    {
      xml_element Stip_153{"Stip"};
      multiset<string> Stip_153_set;
      Stip_153.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_153_set.insert("DISCOUNT");
      Stip_153.add_attribute("Val", "UnderlyingStipValue_t_1904104097"); // 2
      Stip_153_set.insert("UnderlyingStipValue_t_1904104097");
      all_values.push_back(Stip_153_set);
      all_compo_names.insert("Stip_153_set");

      Undly_97.add_element(Stip_153);
    }
    {
      xml_element Pty_368{"Pty"};
      multiset<string> Pty_368_set;
      Pty_368.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1426440992"); // 2
      Pty_368_set.insert("UnderlyingInstrumentPartyID_t_1426440992");
      Pty_368.add_attribute("Src", "D"); // 2
      Pty_368_set.insert("D");
      Pty_368.add_attribute("R", "19"); // 2
      Pty_368_set.insert("19");
      all_values.push_back(Pty_368_set);
      all_compo_names.insert("Pty_368_set");

      {
        xml_element Sub_368{"Sub"};
        multiset<string> Sub_368_set;
        Sub_368.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1301701268"); // 3
        Sub_368_set.insert("UnderlyingInstrumentPartySubID_t_1301701268");
        Sub_368.add_attribute("Typ", "18"); // 3
        Sub_368_set.insert("18");
        all_values.push_back(Sub_368_set);
        all_compo_names.insert("Sub_368_set");

        Pty_368.add_element(Sub_368);
      }
      Undly_97.add_element(Pty_368);
    }
    elt.add_element(Undly_97);
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
