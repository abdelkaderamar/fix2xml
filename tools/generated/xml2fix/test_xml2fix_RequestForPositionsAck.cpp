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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"ReqForPossAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> RequestForPositionsAck_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_195550650"); // 0
  RequestForPositionsAck_message_t_0.insert("PosMaintRptID_t_195550650");
  elt.add_attribute("ReqID", "PosReqID_t_1864202945"); // 0
  RequestForPositionsAck_message_t_0.insert("PosReqID_t_1864202945");
  elt.add_attribute("TotRpts", "2023924013"); // 0
  RequestForPositionsAck_message_t_0.insert("2023924013");
  elt.add_attribute("Unsol", "N"); // 0
  RequestForPositionsAck_message_t_0.insert("N");
  elt.add_attribute("Rslt", "99"); // 0
  RequestForPositionsAck_message_t_0.insert("99");
  elt.add_attribute("Stat", "0"); // 0
  RequestForPositionsAck_message_t_0.insert("0");
  elt.add_attribute("ReqTyp", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("MtchStat", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1707599837"); // 0
  RequestForPositionsAck_message_t_0.insert("ClearingBusinessDate_t_1707599837");
  elt.add_attribute("SubReqTyp", "2"); // 0
  RequestForPositionsAck_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "ITD"); // 0
  RequestForPositionsAck_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_674796026"); // 0
  RequestForPositionsAck_message_t_0.insert("SettlSessSubID_t_674796026");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  RequestForPositionsAck_message_t_0.insert("CHF");
  elt.add_attribute("Acct", "Account_t_1156348744"); // 0
  RequestForPositionsAck_message_t_0.insert("Account_t_1156348744");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  RequestForPositionsAck_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "7"); // 0
  RequestForPositionsAck_message_t_0.insert("7");
  elt.add_attribute("Ccy", "USD"); // 0
  RequestForPositionsAck_message_t_0.insert("USD");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  RequestForPositionsAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_989811387"); // 0
  RequestForPositionsAck_message_t_0.insert("ResponseDestination_t_989811387");
  elt.add_attribute("Txt", "Text_t_385809833"); // 0
  RequestForPositionsAck_message_t_0.insert("Text_t_385809833");
  elt.add_attribute("EncTxtLen", "592103832"); // 0
  RequestForPositionsAck_message_t_0.insert("592103832");
  elt.add_attribute("EncTxt", "EncodedText_t_1090351605"); // 0
  RequestForPositionsAck_message_t_0.insert("EncodedText_t_1090351605");
  all_values.push_back(RequestForPositionsAck_message_t_0);
  all_compo_names.insert("RequestForPositionsAck_message_t");

  { // Hdr
    xml_element Hdr_79{"Hdr"};
    multiset<string> Hdr_79_set;
    Hdr_79.add_attribute("SeqNum", "975099632"); // 1
    Hdr_79_set.insert("975099632");
    Hdr_79.add_attribute("SID", "SenderCompID_t_1087768908"); // 1
    Hdr_79_set.insert("SenderCompID_t_1087768908");
    Hdr_79.add_attribute("TID", "TargetCompID_t_1386695360"); // 1
    Hdr_79_set.insert("TargetCompID_t_1386695360");
    Hdr_79.add_attribute("OBID", "OnBehalfOfCompID_t_784581862"); // 1
    Hdr_79_set.insert("OnBehalfOfCompID_t_784581862");
    Hdr_79.add_attribute("D2ID", "DeliverToCompID_t_410314059"); // 1
    Hdr_79_set.insert("DeliverToCompID_t_410314059");
    Hdr_79.add_attribute("SSub", "SenderSubID_t_1416073398"); // 1
    Hdr_79_set.insert("SenderSubID_t_1416073398");
    Hdr_79.add_attribute("SLoc", "SenderLocationID_t_1783884658"); // 1
    Hdr_79_set.insert("SenderLocationID_t_1783884658");
    Hdr_79.add_attribute("TSub", "TargetSubID_t_605864709"); // 1
    Hdr_79_set.insert("TargetSubID_t_605864709");
    Hdr_79.add_attribute("TLoc", "TargetLocationID_t_1132792695"); // 1
    Hdr_79_set.insert("TargetLocationID_t_1132792695");
    Hdr_79.add_attribute("OBSub", "OnBehalfOfSubID_t_1660325024"); // 1
    Hdr_79_set.insert("OnBehalfOfSubID_t_1660325024");
    Hdr_79.add_attribute("OBLoc", "OnBehalfOfLocationID_t_703101367"); // 1
    Hdr_79_set.insert("OnBehalfOfLocationID_t_703101367");
    Hdr_79.add_attribute("D2Sub", "DeliverToSubID_t_204304333"); // 1
    Hdr_79_set.insert("DeliverToSubID_t_204304333");
    Hdr_79.add_attribute("D2Loc", "DeliverToLocationID_t_202449417"); // 1
    Hdr_79_set.insert("DeliverToLocationID_t_202449417");
    Hdr_79.add_attribute("PosDup", "Y"); // 1
    Hdr_79_set.insert("Y");
    Hdr_79.add_attribute("PosRsnd", "N"); // 1
    Hdr_79_set.insert("N");
    Hdr_79.add_attribute("Snt", "SendingTime_t_1910049254"); // 1
    Hdr_79_set.insert("SendingTime_t_1910049254");
    Hdr_79.add_attribute("OrigSnt", "OrigSendingTime_t_728835395"); // 1
    Hdr_79_set.insert("OrigSendingTime_t_728835395");
    Hdr_79.add_attribute("MsgEncd", "MessageEncoding_t_1954091836"); // 1
    Hdr_79_set.insert("MessageEncoding_t_1954091836");
    all_values.push_back(Hdr_79_set);
    all_compo_names.insert("Hdr_79_set");

    {
      xml_element Hop_79{"Hop"};
      multiset<string> Hop_79_set;
      Hop_79.add_attribute("ID", "HopCompID_t_437361632"); // 2
      Hop_79_set.insert("HopCompID_t_437361632");
      Hop_79.add_attribute("Ref", "467933473"); // 2
      Hop_79_set.insert("467933473");
      Hop_79.add_attribute("Snt", "HopSendingTime_t_1793075651"); // 2
      Hop_79_set.insert("HopSendingTime_t_1793075651");
      all_values.push_back(Hop_79_set);
      all_compo_names.insert("Hop_79_set");

      Hdr_79.add_element(Hop_79);
    }
    elt.add_element(Hdr_79);
  } // end Hdr
  { // Pty
    xml_element Pty_390{"Pty"};
    multiset<string> Pty_390_set;
    Pty_390.add_attribute("ID", "PartyID_t_2031265779"); // 1
    Pty_390_set.insert("PartyID_t_2031265779");
    Pty_390.add_attribute("Src", "A"); // 1
    Pty_390_set.insert("A");
    Pty_390.add_attribute("R", "69"); // 1
    Pty_390_set.insert("69");
    all_values.push_back(Pty_390_set);
    all_compo_names.insert("Pty_390_set");

    {
      xml_element Sub_390{"Sub"};
      multiset<string> Sub_390_set;
      Sub_390.add_attribute("ID", "PartySubID_t_1449542119"); // 2
      Sub_390_set.insert("PartySubID_t_1449542119");
      Sub_390.add_attribute("Typ", "32"); // 2
      Sub_390_set.insert("32");
      all_values.push_back(Sub_390_set);
      all_compo_names.insert("Sub_390_set");

      Pty_390.add_element(Sub_390);
    }
    elt.add_element(Pty_390);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_72{"Instrmt"};
    multiset<string> Instrmt_72_set;
    Instrmt_72.add_attribute("Sym", "Symbol_t_1501650418"); // 1
    Instrmt_72_set.insert("Symbol_t_1501650418");
    Instrmt_72.add_attribute("Sfx", "WI"); // 1
    Instrmt_72_set.insert("WI");
    Instrmt_72.add_attribute("ID", "SecurityID_t_1836280127"); // 1
    Instrmt_72_set.insert("SecurityID_t_1836280127");
    Instrmt_72.add_attribute("Src", "G"); // 1
    Instrmt_72_set.insert("G");
    Instrmt_72.add_attribute("Prod", "5"); // 1
    Instrmt_72_set.insert("5");
    Instrmt_72.add_attribute("ProdCmplx", "ProductComplex_t_776565387"); // 1
    Instrmt_72_set.insert("ProductComplex_t_776565387");
    Instrmt_72.add_attribute("SecGrp", "SecurityGroup_t_1831213735"); // 1
    Instrmt_72_set.insert("SecurityGroup_t_1831213735");
    Instrmt_72.add_attribute("CFI", "CFICode_t_1447549799"); // 1
    Instrmt_72_set.insert("CFICode_t_1447549799");
    Instrmt_72.add_attribute("SecTyp", "MT"); // 1
    Instrmt_72_set.insert("MT");
    Instrmt_72.add_attribute("SubTyp", "SecuritySubType_t_1099803486"); // 1
    Instrmt_72_set.insert("SecuritySubType_t_1099803486");
    Instrmt_72.add_attribute("MMY", "1083950809"); // 1
    Instrmt_72_set.insert("1083950809");
    Instrmt_72.add_attribute("MatDt", "MaturityDate_t_1792744155"); // 1
    Instrmt_72_set.insert("MaturityDate_t_1792744155");
    Instrmt_72.add_attribute("MatTm", "85112533"); // 1
    Instrmt_72_set.insert("85112533");
    Instrmt_72.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_596792185"); // 1
    Instrmt_72_set.insert("SettleOnOpenFlag_t_596792185");
    Instrmt_72.add_attribute("AsgnMeth", "348361874"); // 1
    Instrmt_72_set.insert("348361874");
    Instrmt_72.add_attribute("Status", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CpnPmt", "CouponPaymentDate_t_799241602"); // 1
    Instrmt_72_set.insert("CouponPaymentDate_t_799241602");
    Instrmt_72.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_72_set.insert("FR");
    Instrmt_72.add_attribute("Snrty", "SR"); // 1
    Instrmt_72_set.insert("SR");
    Instrmt_72.add_attribute("NotlPctOut", "5618072.080000"); // 1
    Instrmt_72_set.insert("5618072.080000");
    Instrmt_72.add_attribute("OrigNotlPctOut", "12341280.670000"); // 1
    Instrmt_72_set.insert("12341280.670000");
    Instrmt_72.add_attribute("AttchPnt", "12280955.820000"); // 1
    Instrmt_72_set.insert("12280955.820000");
    Instrmt_72.add_attribute("DetchPnt", "9991688.400000"); // 1
    Instrmt_72_set.insert("9991688.400000");
    Instrmt_72.add_attribute("Issued", "IssueDate_t_1702061540"); // 1
    Instrmt_72_set.insert("IssueDate_t_1702061540");
    Instrmt_72.add_attribute("RepoCollSecTyp", "873687585"); // 1
    Instrmt_72_set.insert("873687585");
    Instrmt_72.add_attribute("RepoTrm", "445395568"); // 1
    Instrmt_72_set.insert("445395568");
    Instrmt_72.add_attribute("RepoRt", "15858436.710000"); // 1
    Instrmt_72_set.insert("15858436.710000");
    Instrmt_72.add_attribute("Fctr", "17418157.690000"); // 1
    Instrmt_72_set.insert("17418157.690000");
    Instrmt_72.add_attribute("CrdRtg", "CreditRating_t_957234600"); // 1
    Instrmt_72_set.insert("CreditRating_t_957234600");
    Instrmt_72.add_attribute("Rgstry", "InstrRegistry_t_887902143"); // 1
    Instrmt_72_set.insert("InstrRegistry_t_887902143");
    Instrmt_72.add_attribute("IssuCtry", "838508415"); // 1
    Instrmt_72_set.insert("838508415");
    Instrmt_72.add_attribute("StPrv", "StateOrProvinceOfIssue_t_311401370"); // 1
    Instrmt_72_set.insert("StateOrProvinceOfIssue_t_311401370");
    Instrmt_72.add_attribute("Lcl", "LocaleOfIssue_t_575770448"); // 1
    Instrmt_72_set.insert("LocaleOfIssue_t_575770448");
    Instrmt_72.add_attribute("Redeem", "RedemptionDate_t_527304894"); // 1
    Instrmt_72_set.insert("RedemptionDate_t_527304894");
    Instrmt_72.add_attribute("StrkPx", "7559197.460000"); // 1
    Instrmt_72_set.insert("7559197.460000");
    Instrmt_72.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_72_set.insert("CHF");
    Instrmt_72.add_attribute("StrkMult", "4396498.330000"); // 1
    Instrmt_72_set.insert("4396498.330000");
    Instrmt_72.add_attribute("StrkValu", "5388045.360000"); // 1
    Instrmt_72_set.insert("5388045.360000");
    Instrmt_72.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_72_set.insert("4");
    Instrmt_72.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_72_set.insert("5");
    Instrmt_72.add_attribute("StrkPxBndryPrcsn", "16227553.450000"); // 1
    Instrmt_72_set.insert("16227553.450000");
    Instrmt_72.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_72_set.insert("3");
    Instrmt_72.add_attribute("OptAt", "1624565853"); // 1
    Instrmt_72_set.insert("1624565853");
    Instrmt_72.add_attribute("Mult", "720638.830000"); // 1
    Instrmt_72_set.insert("720638.830000");
    Instrmt_72.add_attribute("MultTyp", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_72_set.insert("4");
    Instrmt_72.add_attribute("MinPxIncr", "8713054.850000"); // 1
    Instrmt_72_set.insert("8713054.850000");
    Instrmt_72.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_842181133"); // 1
    Instrmt_72_set.insert("MinPriceIncrementAmount_t_842181133");
    Instrmt_72.add_attribute("UOM", "t"); // 1
    Instrmt_72_set.insert("t");
    Instrmt_72.add_attribute("UOMQty", "14331126.940000"); // 1
    Instrmt_72_set.insert("14331126.940000");
    Instrmt_72.add_attribute("PxUOM", "t"); // 1
    Instrmt_72_set.insert("t");
    Instrmt_72.add_attribute("PxUOMQty", "2685984.000000"); // 1
    Instrmt_72_set.insert("2685984.000000");
    Instrmt_72.add_attribute("SettlMeth", "C"); // 1
    Instrmt_72_set.insert("C");
    Instrmt_72.add_attribute("ExerStyle", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("OptPayAmt", "OptPayoutAmount_t_730193455"); // 1
    Instrmt_72_set.insert("OptPayoutAmount_t_730193455");
    Instrmt_72.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_72_set.insert("PCTPAR");
    Instrmt_72.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_72_set.insert("FUTDA");
    Instrmt_72.add_attribute("ListMeth", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("CapPx", "19571492.580000"); // 1
    Instrmt_72_set.insert("19571492.580000");
    Instrmt_72.add_attribute("FlrPx", "15751265.220000"); // 1
    Instrmt_72_set.insert("15751265.220000");
    Instrmt_72.add_attribute("PutCall", "1"); // 1
    Instrmt_72_set.insert("1");
    Instrmt_72.add_attribute("FlexInd", "true"); // 1
    Instrmt_72_set.insert("true");
    Instrmt_72.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_72_set.insert("false");
    Instrmt_72.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_72_set.insert("Wk");
    Instrmt_72.add_attribute("CpnRt", "16241744.430000"); // 1
    Instrmt_72_set.insert("16241744.430000");
    Instrmt_72.add_attribute("Exch", "SecurityExchange_t_1258818050"); // 1
    Instrmt_72_set.insert("SecurityExchange_t_1258818050");
    Instrmt_72.add_attribute("PosLmt", "1046915357"); // 1
    Instrmt_72_set.insert("1046915357");
    Instrmt_72.add_attribute("NTPosLmt", "15495331"); // 1
    Instrmt_72_set.insert("15495331");
    Instrmt_72.add_attribute("Issr", "Issuer_t_1602084130"); // 1
    Instrmt_72_set.insert("Issuer_t_1602084130");
    Instrmt_72.add_attribute("EncIssrLen", "438885028"); // 1
    Instrmt_72_set.insert("438885028");
    Instrmt_72.add_attribute("EncIssr", "EncodedIssuer_t_1638250677"); // 1
    Instrmt_72_set.insert("EncodedIssuer_t_1638250677");
    Instrmt_72.add_attribute("Desc", "SecurityDesc_t_1590610716"); // 1
    Instrmt_72_set.insert("SecurityDesc_t_1590610716");
    Instrmt_72.add_attribute("EncSecDescLen", "2063450881"); // 1
    Instrmt_72_set.insert("2063450881");
    Instrmt_72.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1710314560"); // 1
    Instrmt_72_set.insert("EncodedSecurityDesc_t_1710314560");
    Instrmt_72.add_attribute("Pool", "Pool_t_1927499177"); // 1
    Instrmt_72_set.insert("Pool_t_1927499177");
    Instrmt_72.add_attribute("CSetMo", "1829949953"); // 1
    Instrmt_72_set.insert("1829949953");
    Instrmt_72.add_attribute("CPPgm", "2"); // 1
    Instrmt_72_set.insert("2");
    Instrmt_72.add_attribute("CPRegT", "CPRegType_t_622196662"); // 1
    Instrmt_72_set.insert("CPRegType_t_622196662");
    Instrmt_72.add_attribute("Dated", "DatedDate_t_870452771"); // 1
    Instrmt_72_set.insert("DatedDate_t_870452771");
    Instrmt_72.add_attribute("IntAcrl", "InterestAccrualDate_t_1867249091"); // 1
    Instrmt_72_set.insert("InterestAccrualDate_t_1867249091");
    all_values.push_back(Instrmt_72_set);
    all_compo_names.insert("Instrmt_72_set");

    {
      xml_element AID_75{"AID"};
      multiset<string> AID_75_set;
      AID_75.add_attribute("AltID", "SecurityAltID_t_551022214"); // 2
      AID_75_set.insert("SecurityAltID_t_551022214");
      AID_75.add_attribute("AltIDSrc", "6"); // 2
      AID_75_set.insert("6");
      all_values.push_back(AID_75_set);
      all_compo_names.insert("AID_75_set");

      Instrmt_72.add_element(AID_75);
    }
    {
      xml_element SecXML_75{"SecXML"};
      multiset<string> SecXML_75_set;
      SecXML_75.add_attribute("Schema", "SecurityXMLSchema_t_4563330"); // 2
      SecXML_75_set.insert("SecurityXMLSchema_t_4563330");
      all_values.push_back(SecXML_75_set);
      all_compo_names.insert("SecXML_75_set");

      Instrmt_72.add_element(SecXML_75);
    }
    {
      xml_element Evnt_75{"Evnt"};
      multiset<string> Evnt_75_set;
      Evnt_75.add_attribute("EventTyp", "18"); // 2
      Evnt_75_set.insert("18");
      Evnt_75.add_attribute("Dt", "EventDate_t_133853509"); // 2
      Evnt_75_set.insert("EventDate_t_133853509");
      Evnt_75.add_attribute("Tm", "EventTime_t_734756785"); // 2
      Evnt_75_set.insert("EventTime_t_734756785");
      Evnt_75.add_attribute("Px", "11036727.740000"); // 2
      Evnt_75_set.insert("11036727.740000");
      Evnt_75.add_attribute("Txt", "EventText_t_870471616"); // 2
      Evnt_75_set.insert("EventText_t_870471616");
      all_values.push_back(Evnt_75_set);
      all_compo_names.insert("Evnt_75_set");

      Instrmt_72.add_element(Evnt_75);
    }
    {
      xml_element Pty_391{"Pty"};
      multiset<string> Pty_391_set;
      Pty_391.add_attribute("ID", "InstrumentPartyID_t_274701192"); // 2
      Pty_391_set.insert("InstrumentPartyID_t_274701192");
      Pty_391.add_attribute("Src", "7"); // 2
      Pty_391_set.insert("7");
      Pty_391.add_attribute("R", "12"); // 2
      Pty_391_set.insert("12");
      all_values.push_back(Pty_391_set);
      all_compo_names.insert("Pty_391_set");

      {
        xml_element Sub_391{"Sub"};
        multiset<string> Sub_391_set;
        Sub_391.add_attribute("ID", "InstrumentPartySubID_t_126046969"); // 3
        Sub_391_set.insert("InstrumentPartySubID_t_126046969");
        Sub_391.add_attribute("Typ", "19"); // 3
        Sub_391_set.insert("19");
        all_values.push_back(Sub_391_set);
        all_compo_names.insert("Sub_391_set");

        Pty_391.add_element(Sub_391);
      }
      Instrmt_72.add_element(Pty_391);
    }
    {
      xml_element CmplxEvnt_72{"CmplxEvnt"};
      multiset<string> CmplxEvnt_72_set;
      CmplxEvnt_72.add_attribute("Typ", "9"); // 2
      CmplxEvnt_72_set.insert("9");
      CmplxEvnt_72.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_733312493"); // 2
      CmplxEvnt_72_set.insert("ComplexOptPayoutAmount_t_733312493");
      CmplxEvnt_72.add_attribute("Px", "7754652.380000"); // 2
      CmplxEvnt_72_set.insert("7754652.380000");
      CmplxEvnt_72.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_72_set.insert("1");
      CmplxEvnt_72.add_attribute("PxBndryPrcsn", "17802278.500000"); // 2
      CmplxEvnt_72_set.insert("17802278.500000");
      CmplxEvnt_72.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_72_set.insert("2");
      CmplxEvnt_72.add_attribute("Cond", "1"); // 2
      CmplxEvnt_72_set.insert("1");
      all_values.push_back(CmplxEvnt_72_set);
      all_compo_names.insert("CmplxEvnt_72_set");

      {
        xml_element EvntDts_72{"EvntDts"};
        multiset<string> EvntDts_72_set;
        EvntDts_72.add_attribute("StartDt", "ComplexEventStartDate_t_71629230"); // 3
        EvntDts_72_set.insert("ComplexEventStartDate_t_71629230");
        EvntDts_72.add_attribute("EndDt", "ComplexEventEndDate_t_281727599"); // 3
        EvntDts_72_set.insert("ComplexEventEndDate_t_281727599");
        all_values.push_back(EvntDts_72_set);
        all_compo_names.insert("EvntDts_72_set");

        {
          xml_element EvntTms_72{"EvntTms"};
          multiset<string> EvntTms_72_set;
          EvntTms_72.add_attribute("StartTm", "409607861"); // 4
          EvntTms_72_set.insert("409607861");
          EvntTms_72.add_attribute("EndTm", "2135080112"); // 4
          EvntTms_72_set.insert("2135080112");
          all_values.push_back(EvntTms_72_set);
          all_compo_names.insert("EvntTms_72_set");

          EvntDts_72.add_element(EvntTms_72);
        }
        CmplxEvnt_72.add_element(EvntDts_72);
      }
      Instrmt_72.add_element(CmplxEvnt_72);
    }
    elt.add_element(Instrmt_72);
  } // end Instrmt
  { // Leg
    xml_element Leg_86{"Leg"};
    multiset<string> Leg_86_set;
    Leg_86.add_attribute("Sym", "LegSymbol_t_189623390"); // 1
    Leg_86_set.insert("LegSymbol_t_189623390");
    Leg_86.add_attribute("Sfx", "WI"); // 1
    Leg_86_set.insert("WI");
    Leg_86.add_attribute("ID", "LegSecurityID_t_278694908"); // 1
    Leg_86_set.insert("LegSecurityID_t_278694908");
    Leg_86.add_attribute("Src", "C"); // 1
    Leg_86_set.insert("C");
    Leg_86.add_attribute("Prod", "3"); // 1
    Leg_86_set.insert("3");
    Leg_86.add_attribute("CFI", "LegCFICode_t_2145944000"); // 1
    Leg_86_set.insert("LegCFICode_t_2145944000");
    Leg_86.add_attribute("SecTyp", "USTB"); // 1
    Leg_86_set.insert("USTB");
    Leg_86.add_attribute("SecSubTyp", "LegSecuritySubType_t_1679566711"); // 1
    Leg_86_set.insert("LegSecuritySubType_t_1679566711");
    Leg_86.add_attribute("MMY", "3023682"); // 1
    Leg_86_set.insert("3023682");
    Leg_86.add_attribute("Mat", "LegMaturityDate_t_1397267926"); // 1
    Leg_86_set.insert("LegMaturityDate_t_1397267926");
    Leg_86.add_attribute("MatTm", "1813420221"); // 1
    Leg_86_set.insert("1813420221");
    Leg_86.add_attribute("CpnPmt", "LegCouponPaymentDate_t_737780467"); // 1
    Leg_86_set.insert("LegCouponPaymentDate_t_737780467");
    Leg_86.add_attribute("Issued", "LegIssueDate_t_353457052"); // 1
    Leg_86_set.insert("LegIssueDate_t_353457052");
    Leg_86.add_attribute("RepoCollSecTyp", "536408189"); // 1
    Leg_86_set.insert("536408189");
    Leg_86.add_attribute("RepoTrm", "1012481659"); // 1
    Leg_86_set.insert("1012481659");
    Leg_86.add_attribute("RepoRt", "12667954.360000"); // 1
    Leg_86_set.insert("12667954.360000");
    Leg_86.add_attribute("Fctr", "8345226.800000"); // 1
    Leg_86_set.insert("8345226.800000");
    Leg_86.add_attribute("CrdRtg", "LegCreditRating_t_1138528628"); // 1
    Leg_86_set.insert("LegCreditRating_t_1138528628");
    Leg_86.add_attribute("Rgstry", "LegInstrRegistry_t_418086231"); // 1
    Leg_86_set.insert("LegInstrRegistry_t_418086231");
    Leg_86.add_attribute("Ctry", "1087584940"); // 1
    Leg_86_set.insert("1087584940");
    Leg_86.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1871841121"); // 1
    Leg_86_set.insert("LegStateOrProvinceOfIssue_t_1871841121");
    Leg_86.add_attribute("Lcl", "LegLocaleOfIssue_t_1193551470"); // 1
    Leg_86_set.insert("LegLocaleOfIssue_t_1193551470");
    Leg_86.add_attribute("Redeem", "LegRedemptionDate_t_451981603"); // 1
    Leg_86_set.insert("LegRedemptionDate_t_451981603");
    Leg_86.add_attribute("Strk", "15045853.230000"); // 1
    Leg_86_set.insert("15045853.230000");
    Leg_86.add_attribute("StrkCcy", "EUR"); // 1
    Leg_86_set.insert("EUR");
    Leg_86.add_attribute("OptA", "1576214554"); // 1
    Leg_86_set.insert("1576214554");
    Leg_86.add_attribute("Cmult", "1187559.910000"); // 1
    Leg_86_set.insert("1187559.910000");
    Leg_86.add_attribute("MultTyp", "0"); // 1
    Leg_86_set.insert("0");
    Leg_86.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_86_set.insert("3");
    Leg_86.add_attribute("UOM", "MMbbl"); // 1
    Leg_86_set.insert("MMbbl");
    Leg_86.add_attribute("UOMQty", "20176936.470000"); // 1
    Leg_86_set.insert("20176936.470000");
    Leg_86.add_attribute("PxUOM", "Gal"); // 1
    Leg_86_set.insert("Gal");
    Leg_86.add_attribute("PxUOMQty", "2420094.100000"); // 1
    Leg_86_set.insert("2420094.100000");
    Leg_86.add_attribute("TmUnit", "Wk"); // 1
    Leg_86_set.insert("Wk");
    Leg_86.add_attribute("ExerStyle", "0"); // 1
    Leg_86_set.insert("0");
    Leg_86.add_attribute("CpnRt", "2404697.620000"); // 1
    Leg_86_set.insert("2404697.620000");
    Leg_86.add_attribute("Exch", "LegSecurityExchange_t_2044872319"); // 1
    Leg_86_set.insert("LegSecurityExchange_t_2044872319");
    Leg_86.add_attribute("Issr", "LegIssuer_t_1306472390"); // 1
    Leg_86_set.insert("LegIssuer_t_1306472390");
    Leg_86.add_attribute("EncLegIssrLen", "243493444"); // 1
    Leg_86_set.insert("243493444");
    Leg_86.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1294656597"); // 1
    Leg_86_set.insert("EncodedLegIssuer_t_1294656597");
    Leg_86.add_attribute("Desc", "LegSecurityDesc_t_972408963"); // 1
    Leg_86_set.insert("LegSecurityDesc_t_972408963");
    Leg_86.add_attribute("EncLegSecDescLen", "981273911"); // 1
    Leg_86_set.insert("981273911");
    Leg_86.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1648113649"); // 1
    Leg_86_set.insert("EncodedLegSecurityDesc_t_1648113649");
    Leg_86.add_attribute("RatioQty", "15088171.530000"); // 1
    Leg_86_set.insert("15088171.530000");
    Leg_86.add_attribute("Side", "3"); // 1
    Leg_86_set.insert("3");
    Leg_86.add_attribute("Ccy", "CHF"); // 1
    Leg_86_set.insert("CHF");
    Leg_86.add_attribute("Pool", "LegPool_t_984800551"); // 1
    Leg_86_set.insert("LegPool_t_984800551");
    Leg_86.add_attribute("Dated", "LegDatedDate_t_1185511669"); // 1
    Leg_86_set.insert("LegDatedDate_t_1185511669");
    Leg_86.add_attribute("CSetMo", "1283441126"); // 1
    Leg_86_set.insert("1283441126");
    Leg_86.add_attribute("IntAcrl", "LegInterestAccrualDate_t_709158024"); // 1
    Leg_86_set.insert("LegInterestAccrualDate_t_709158024");
    Leg_86.add_attribute("PutCall", "231579491"); // 1
    Leg_86_set.insert("231579491");
    Leg_86.add_attribute("LegOptionRatio", "17354227.290000"); // 1
    Leg_86_set.insert("17354227.290000");
    Leg_86.add_attribute("Px", "662597.000000"); // 1
    Leg_86_set.insert("662597.000000");
    all_values.push_back(Leg_86_set);
    all_compo_names.insert("Leg_86_set");

    {
      xml_element LegAID_81{"LegAID"};
      multiset<string> LegAID_81_set;
      LegAID_81.add_attribute("SecAltID", "LegSecurityAltID_t_68607883"); // 2
      LegAID_81_set.insert("LegSecurityAltID_t_68607883");
      LegAID_81.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_81_set.insert("F");
      all_values.push_back(LegAID_81_set);
      all_compo_names.insert("LegAID_81_set");

      Leg_86.add_element(LegAID_81);
    }
    elt.add_element(Leg_86);
  } // end Leg
  { // Undly
    xml_element Undly_102{"Undly"};
    multiset<string> Undly_102_set;
    Undly_102.add_attribute("Sym", "UnderlyingSymbol_t_187363874"); // 1
    Undly_102_set.insert("UnderlyingSymbol_t_187363874");
    Undly_102.add_attribute("Sfx", "WI"); // 1
    Undly_102_set.insert("WI");
    Undly_102.add_attribute("ID", "UnderlyingSecurityID_t_1058801624"); // 1
    Undly_102_set.insert("UnderlyingSecurityID_t_1058801624");
    Undly_102.add_attribute("Src", "3"); // 1
    Undly_102_set.insert("3");
    Undly_102.add_attribute("Prod", "10"); // 1
    Undly_102_set.insert("10");
    Undly_102.add_attribute("CFI", "UnderlyingCFICode_t_145191763"); // 1
    Undly_102_set.insert("UnderlyingCFICode_t_145191763");
    Undly_102.add_attribute("SecTyp", "SWING"); // 1
    Undly_102_set.insert("SWING");
    Undly_102.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1239228136"); // 1
    Undly_102_set.insert("UnderlyingSecuritySubType_t_1239228136");
    Undly_102.add_attribute("MMY", "1919581090"); // 1
    Undly_102_set.insert("1919581090");
    Undly_102.add_attribute("Mat", "UnderlyingMaturityDate_t_633157549"); // 1
    Undly_102_set.insert("UnderlyingMaturityDate_t_633157549");
    Undly_102.add_attribute("MatTm", "1136616807"); // 1
    Undly_102_set.insert("1136616807");
    Undly_102.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1078569832"); // 1
    Undly_102_set.insert("UnderlyingCouponPaymentDate_t_1078569832");
    Undly_102.add_attribute("RestrctTyp", "MM"); // 1
    Undly_102_set.insert("MM");
    Undly_102.add_attribute("Snrty", "SB"); // 1
    Undly_102_set.insert("SB");
    Undly_102.add_attribute("NotlPctOut", "20509787.960000"); // 1
    Undly_102_set.insert("20509787.960000");
    Undly_102.add_attribute("OrigNotlPctOut", "18579249.050000"); // 1
    Undly_102_set.insert("18579249.050000");
    Undly_102.add_attribute("AttchPnt", "19319034.060000"); // 1
    Undly_102_set.insert("19319034.060000");
    Undly_102.add_attribute("DetchPnt", "14123123.010000"); // 1
    Undly_102_set.insert("14123123.010000");
    Undly_102.add_attribute("Issued", "UnderlyingIssueDate_t_1704196828"); // 1
    Undly_102_set.insert("UnderlyingIssueDate_t_1704196828");
    Undly_102.add_attribute("RepoCollSecTyp", "551845196"); // 1
    Undly_102_set.insert("551845196");
    Undly_102.add_attribute("RepoTrm", "1608168486"); // 1
    Undly_102_set.insert("1608168486");
    Undly_102.add_attribute("RepoRt", "5415137.310000"); // 1
    Undly_102_set.insert("5415137.310000");
    Undly_102.add_attribute("Fctr", "17373568.660000"); // 1
    Undly_102_set.insert("17373568.660000");
    Undly_102.add_attribute("CrdRtg", "UnderlyingCreditRating_t_744125964"); // 1
    Undly_102_set.insert("UnderlyingCreditRating_t_744125964");
    Undly_102.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1250671755"); // 1
    Undly_102_set.insert("UnderlyingInstrRegistry_t_1250671755");
    Undly_102.add_attribute("Ctry", "1968936357"); // 1
    Undly_102_set.insert("1968936357");
    Undly_102.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_332065045"); // 1
    Undly_102_set.insert("UnderlyingStateOrProvinceOfIssue_t_332065045");
    Undly_102.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1316931455"); // 1
    Undly_102_set.insert("UnderlyingLocaleOfIssue_t_1316931455");
    Undly_102.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2037544241"); // 1
    Undly_102_set.insert("UnderlyingRedemptionDate_t_2037544241");
    Undly_102.add_attribute("StrkPx", "13384665.220000"); // 1
    Undly_102_set.insert("13384665.220000");
    Undly_102.add_attribute("StrkCcy", "CAN"); // 1
    Undly_102_set.insert("CAN");
    Undly_102.add_attribute("OptA", "2025454607"); // 1
    Undly_102_set.insert("2025454607");
    Undly_102.add_attribute("Mult", "18707236.850000"); // 1
    Undly_102_set.insert("18707236.850000");
    Undly_102.add_attribute("MultTyp", "1"); // 1
    Undly_102_set.insert("1");
    Undly_102.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_102_set.insert("3");
    Undly_102.add_attribute("UOM", "MMBtu"); // 1
    Undly_102_set.insert("MMBtu");
    Undly_102.add_attribute("UOMQty", "6207906.310000"); // 1
    Undly_102_set.insert("6207906.310000");
    Undly_102.add_attribute("PxUOM", "MWh"); // 1
    Undly_102_set.insert("MWh");
    Undly_102.add_attribute("PxUOMQty", "17880128.900000"); // 1
    Undly_102_set.insert("17880128.900000");
    Undly_102.add_attribute("TmUnit", "H"); // 1
    Undly_102_set.insert("H");
    Undly_102.add_attribute("ExerStyle", "1"); // 1
    Undly_102_set.insert("1");
    Undly_102.add_attribute("CpnRt", "7190990.750000"); // 1
    Undly_102_set.insert("7190990.750000");
    Undly_102.add_attribute("Exch", "UnderlyingSecurityExchange_t_2130599174"); // 1
    Undly_102_set.insert("UnderlyingSecurityExchange_t_2130599174");
    Undly_102.add_attribute("Issr", "UnderlyingIssuer_t_947320095"); // 1
    Undly_102_set.insert("UnderlyingIssuer_t_947320095");
    Undly_102.add_attribute("EncUndIssrLen", "622594223"); // 1
    Undly_102_set.insert("622594223");
    Undly_102.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1841040432"); // 1
    Undly_102_set.insert("EncodedUnderlyingIssuer_t_1841040432");
    Undly_102.add_attribute("Desc", "UnderlyingSecurityDesc_t_731739854"); // 1
    Undly_102_set.insert("UnderlyingSecurityDesc_t_731739854");
    Undly_102.add_attribute("EncUndSecDescLen", "2034906524"); // 1
    Undly_102_set.insert("2034906524");
    Undly_102.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1397753612"); // 1
    Undly_102_set.insert("EncodedUnderlyingSecurityDesc_t_1397753612");
    Undly_102.add_attribute("CPPgm", "UnderlyingCPProgram_t_1283585050"); // 1
    Undly_102_set.insert("UnderlyingCPProgram_t_1283585050");
    Undly_102.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1495591362"); // 1
    Undly_102_set.insert("UnderlyingCPRegType_t_1495591362");
    Undly_102.add_attribute("AllocPct", "19392673.430000"); // 1
    Undly_102_set.insert("19392673.430000");
    Undly_102.add_attribute("Ccy", "CAN"); // 1
    Undly_102_set.insert("CAN");
    Undly_102.add_attribute("Qty", "10424554.500000"); // 1
    Undly_102_set.insert("10424554.500000");
    Undly_102.add_attribute("SettlTyp", "5"); // 1
    Undly_102_set.insert("5");
    Undly_102.add_attribute("CashAmt", "UnderlyingCashAmount_t_424298724"); // 1
    Undly_102_set.insert("UnderlyingCashAmount_t_424298724");
    Undly_102.add_attribute("CashTyp", "FIXED"); // 1
    Undly_102_set.insert("FIXED");
    Undly_102.add_attribute("Px", "5849715.710000"); // 1
    Undly_102_set.insert("5849715.710000");
    Undly_102.add_attribute("DirtPx", "17627652.460000"); // 1
    Undly_102_set.insert("17627652.460000");
    Undly_102.add_attribute("EndPx", "10238253.190000"); // 1
    Undly_102_set.insert("10238253.190000");
    Undly_102.add_attribute("StartVal", "UnderlyingStartValue_t_662396038"); // 1
    Undly_102_set.insert("UnderlyingStartValue_t_662396038");
    Undly_102.add_attribute("CurVal", "UnderlyingCurrentValue_t_1640736205"); // 1
    Undly_102_set.insert("UnderlyingCurrentValue_t_1640736205");
    Undly_102.add_attribute("EndVal", "UnderlyingEndValue_t_747065357"); // 1
    Undly_102_set.insert("UnderlyingEndValue_t_747065357");
    Undly_102.add_attribute("AdjQty", "8904988.820000"); // 1
    Undly_102_set.insert("8904988.820000");
    Undly_102.add_attribute("FxRate", "20759052.480000"); // 1
    Undly_102_set.insert("20759052.480000");
    Undly_102.add_attribute("FxRateCalc", "D"); // 1
    Undly_102_set.insert("D");
    Undly_102.add_attribute("CapValu", "UnderlyingCapValue_t_1511289513"); // 1
    Undly_102_set.insert("UnderlyingCapValue_t_1511289513");
    Undly_102.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1602818779"); // 1
    Undly_102_set.insert("UnderlyingSettlMethod_t_1602818779");
    Undly_102.add_attribute("PutCall", "256026400"); // 1
    Undly_102_set.insert("256026400");
    all_values.push_back(Undly_102_set);
    all_compo_names.insert("Undly_102_set");

    {
      xml_element UndAID_102{"UndAID"};
      multiset<string> UndAID_102_set;
      UndAID_102.add_attribute("AltID", "UnderlyingSecurityAltID_t_617754046"); // 2
      UndAID_102_set.insert("UnderlyingSecurityAltID_t_617754046");
      UndAID_102.add_attribute("AltIDSrc", "K"); // 2
      UndAID_102_set.insert("K");
      all_values.push_back(UndAID_102_set);
      all_compo_names.insert("UndAID_102_set");

      Undly_102.add_element(UndAID_102);
    }
    {
      xml_element Stip_163{"Stip"};
      multiset<string> Stip_163_set;
      Stip_163.add_attribute("Typ", "PPT"); // 2
      Stip_163_set.insert("PPT");
      Stip_163.add_attribute("Val", "UnderlyingStipValue_t_600869572"); // 2
      Stip_163_set.insert("UnderlyingStipValue_t_600869572");
      all_values.push_back(Stip_163_set);
      all_compo_names.insert("Stip_163_set");

      Undly_102.add_element(Stip_163);
    }
    {
      xml_element Pty_392{"Pty"};
      multiset<string> Pty_392_set;
      Pty_392.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1066185565"); // 2
      Pty_392_set.insert("UnderlyingInstrumentPartyID_t_1066185565");
      Pty_392.add_attribute("Src", "9"); // 2
      Pty_392_set.insert("9");
      Pty_392.add_attribute("R", "59"); // 2
      Pty_392_set.insert("59");
      all_values.push_back(Pty_392_set);
      all_compo_names.insert("Pty_392_set");

      {
        xml_element Sub_392{"Sub"};
        multiset<string> Sub_392_set;
        Sub_392.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1797925419"); // 3
        Sub_392_set.insert("UnderlyingInstrumentPartySubID_t_1797925419");
        Sub_392.add_attribute("Typ", "22"); // 3
        Sub_392_set.insert("22");
        all_values.push_back(Sub_392_set);
        all_compo_names.insert("Sub_392_set");

        Pty_392.add_element(Sub_392);
      }
      Undly_102.add_element(Pty_392);
    }
    elt.add_element(Undly_102);
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
