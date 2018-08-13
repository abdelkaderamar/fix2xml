#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderMassCancelRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderMassCancelRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassCxlReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassCancelRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_944288527"); // 0
  OrderMassCancelRequest_message_t_0.insert("ClOrdID_t_944288527");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1119027544"); // 0
  OrderMassCancelRequest_message_t_0.insert("SecondaryClOrdID_t_1119027544");
  elt.add_attribute("ReqTyp", "5"); // 0
  OrderMassCancelRequest_message_t_0.insert("5");
  elt.add_attribute("SesID", "5"); // 0
  OrderMassCancelRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "7"); // 0
  OrderMassCancelRequest_message_t_0.insert("7");
  elt.add_attribute("MktID", "MarketID_t_71648068"); // 0
  OrderMassCancelRequest_message_t_0.insert("MarketID_t_71648068");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1456343503"); // 0
  OrderMassCancelRequest_message_t_0.insert("MarketSegmentID_t_1456343503");
  elt.add_attribute("Side", "2"); // 0
  OrderMassCancelRequest_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_1887353172"); // 0
  OrderMassCancelRequest_message_t_0.insert("TransactTime_t_1887353172");
  elt.add_attribute("Txt", "Text_t_958678162"); // 0
  OrderMassCancelRequest_message_t_0.insert("Text_t_958678162");
  elt.add_attribute("EncTxtLen", "421867176"); // 0
  OrderMassCancelRequest_message_t_0.insert("421867176");
  elt.add_attribute("EncTxt", "EncodedText_t_495789010"); // 0
  OrderMassCancelRequest_message_t_0.insert("EncodedText_t_495789010");
  all_values.push_back(OrderMassCancelRequest_message_t_0);
  all_compo_names.insert("OrderMassCancelRequest_message_t");

  { // Hdr
    xml_element Hdr_62{"Hdr"};
    multiset<string> Hdr_62_set;
    Hdr_62.add_attribute("SeqNum", "1492007965"); // 1
    Hdr_62_set.insert("1492007965");
    Hdr_62.add_attribute("SID", "SenderCompID_t_126797683"); // 1
    Hdr_62_set.insert("SenderCompID_t_126797683");
    Hdr_62.add_attribute("TID", "TargetCompID_t_1456629235"); // 1
    Hdr_62_set.insert("TargetCompID_t_1456629235");
    Hdr_62.add_attribute("OBID", "OnBehalfOfCompID_t_268609840"); // 1
    Hdr_62_set.insert("OnBehalfOfCompID_t_268609840");
    Hdr_62.add_attribute("D2ID", "DeliverToCompID_t_1452963377"); // 1
    Hdr_62_set.insert("DeliverToCompID_t_1452963377");
    Hdr_62.add_attribute("SSub", "SenderSubID_t_1087393714"); // 1
    Hdr_62_set.insert("SenderSubID_t_1087393714");
    Hdr_62.add_attribute("SLoc", "SenderLocationID_t_1177972345"); // 1
    Hdr_62_set.insert("SenderLocationID_t_1177972345");
    Hdr_62.add_attribute("TSub", "TargetSubID_t_596368564"); // 1
    Hdr_62_set.insert("TargetSubID_t_596368564");
    Hdr_62.add_attribute("TLoc", "TargetLocationID_t_1288974395"); // 1
    Hdr_62_set.insert("TargetLocationID_t_1288974395");
    Hdr_62.add_attribute("OBSub", "OnBehalfOfSubID_t_652148024"); // 1
    Hdr_62_set.insert("OnBehalfOfSubID_t_652148024");
    Hdr_62.add_attribute("OBLoc", "OnBehalfOfLocationID_t_671642170"); // 1
    Hdr_62_set.insert("OnBehalfOfLocationID_t_671642170");
    Hdr_62.add_attribute("D2Sub", "DeliverToSubID_t_1448226680"); // 1
    Hdr_62_set.insert("DeliverToSubID_t_1448226680");
    Hdr_62.add_attribute("D2Loc", "DeliverToLocationID_t_994673526"); // 1
    Hdr_62_set.insert("DeliverToLocationID_t_994673526");
    Hdr_62.add_attribute("PosDup", "Y"); // 1
    Hdr_62_set.insert("Y");
    Hdr_62.add_attribute("PosRsnd", "Y"); // 1
    Hdr_62_set.insert("Y");
    Hdr_62.add_attribute("Snt", "SendingTime_t_1135330333"); // 1
    Hdr_62_set.insert("SendingTime_t_1135330333");
    Hdr_62.add_attribute("OrigSnt", "OrigSendingTime_t_362100652"); // 1
    Hdr_62_set.insert("OrigSendingTime_t_362100652");
    Hdr_62.add_attribute("MsgEncd", "MessageEncoding_t_2074682045"); // 1
    Hdr_62_set.insert("MessageEncoding_t_2074682045");
    all_values.push_back(Hdr_62_set);
    all_compo_names.insert("Hdr_62_set");

    {
      xml_element Hop_62{"Hop"};
      multiset<string> Hop_62_set;
      Hop_62.add_attribute("ID", "HopCompID_t_1821839694"); // 2
      Hop_62_set.insert("HopCompID_t_1821839694");
      Hop_62.add_attribute("Ref", "1306389179"); // 2
      Hop_62_set.insert("1306389179");
      Hop_62.add_attribute("Snt", "HopSendingTime_t_1046225942"); // 2
      Hop_62_set.insert("HopSendingTime_t_1046225942");
      all_values.push_back(Hop_62_set);
      all_compo_names.insert("Hop_62_set");

      Hdr_62.add_element(Hop_62);
    }
    elt.add_element(Hdr_62);
  } // end Hdr
  { // Pty
    xml_element Pty_279{"Pty"};
    multiset<string> Pty_279_set;
    Pty_279.add_attribute("ID", "PartyID_t_89669287"); // 1
    Pty_279_set.insert("PartyID_t_89669287");
    Pty_279.add_attribute("Src", "G"); // 1
    Pty_279_set.insert("G");
    Pty_279.add_attribute("R", "42"); // 1
    Pty_279_set.insert("42");
    all_values.push_back(Pty_279_set);
    all_compo_names.insert("Pty_279_set");

    {
      xml_element Sub_279{"Sub"};
      multiset<string> Sub_279_set;
      Sub_279.add_attribute("ID", "PartySubID_t_1546012791"); // 2
      Sub_279_set.insert("PartySubID_t_1546012791");
      Sub_279.add_attribute("Typ", "30"); // 2
      Sub_279_set.insert("30");
      all_values.push_back(Sub_279_set);
      all_compo_names.insert("Sub_279_set");

      Pty_279.add_element(Sub_279);
    }
    elt.add_element(Pty_279);
  } // end Pty
  { // Pty
    xml_element Pty_280{"Pty"};
    multiset<string> Pty_280_set;
    Pty_280.add_attribute("ID", "PartyID_t_1643415487"); // 1
    Pty_280_set.insert("PartyID_t_1643415487");
    Pty_280.add_attribute("Src", "6"); // 1
    Pty_280_set.insert("6");
    Pty_280.add_attribute("R", "26"); // 1
    Pty_280_set.insert("26");
    all_values.push_back(Pty_280_set);
    all_compo_names.insert("Pty_280_set");

    {
      xml_element Sub_280{"Sub"};
      multiset<string> Sub_280_set;
      Sub_280.add_attribute("ID", "PartySubID_t_2139204497"); // 2
      Sub_280_set.insert("PartySubID_t_2139204497");
      Sub_280.add_attribute("Typ", "20"); // 2
      Sub_280_set.insert("20");
      all_values.push_back(Sub_280_set);
      all_compo_names.insert("Sub_280_set");

      Pty_280.add_element(Sub_280);
    }
    elt.add_element(Pty_280);
  } // end Pty
  { // Pty
    xml_element Pty_281{"Pty"};
    multiset<string> Pty_281_set;
    Pty_281.add_attribute("ID", "PartyID_t_747935785"); // 1
    Pty_281_set.insert("PartyID_t_747935785");
    Pty_281.add_attribute("Src", "C"); // 1
    Pty_281_set.insert("C");
    Pty_281.add_attribute("R", "40"); // 1
    Pty_281_set.insert("40");
    all_values.push_back(Pty_281_set);
    all_compo_names.insert("Pty_281_set");

    {
      xml_element Sub_281{"Sub"};
      multiset<string> Sub_281_set;
      Sub_281.add_attribute("ID", "PartySubID_t_53415514"); // 2
      Sub_281_set.insert("PartySubID_t_53415514");
      Sub_281.add_attribute("Typ", "13"); // 2
      Sub_281_set.insert("13");
      all_values.push_back(Sub_281_set);
      all_compo_names.insert("Sub_281_set");

      Pty_281.add_element(Sub_281);
    }
    elt.add_element(Pty_281);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_9{"TgtPty"};
    multiset<string> TgtPty_9_set;
    TgtPty_9.add_attribute("ID", "TargetPartyID_t_649784078"); // 1
    TgtPty_9_set.insert("TargetPartyID_t_649784078");
    TgtPty_9.add_attribute("Src", "2"); // 1
    TgtPty_9_set.insert("2");
    TgtPty_9.add_attribute("R", "9"); // 1
    TgtPty_9_set.insert("9");
    all_values.push_back(TgtPty_9_set);
    all_compo_names.insert("TgtPty_9_set");

    elt.add_element(TgtPty_9);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_10{"TgtPty"};
    multiset<string> TgtPty_10_set;
    TgtPty_10.add_attribute("ID", "TargetPartyID_t_1321426249"); // 1
    TgtPty_10_set.insert("TargetPartyID_t_1321426249");
    TgtPty_10.add_attribute("Src", "E"); // 1
    TgtPty_10_set.insert("E");
    TgtPty_10.add_attribute("R", "7"); // 1
    TgtPty_10_set.insert("7");
    all_values.push_back(TgtPty_10_set);
    all_compo_names.insert("TgtPty_10_set");

    elt.add_element(TgtPty_10);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_52{"Instrmt"};
    multiset<string> Instrmt_52_set;
    Instrmt_52.add_attribute("Sym", "Symbol_t_472814582"); // 1
    Instrmt_52_set.insert("Symbol_t_472814582");
    Instrmt_52.add_attribute("Sfx", "WI"); // 1
    Instrmt_52_set.insert("WI");
    Instrmt_52.add_attribute("ID", "SecurityID_t_1782982043"); // 1
    Instrmt_52_set.insert("SecurityID_t_1782982043");
    Instrmt_52.add_attribute("Src", "B"); // 1
    Instrmt_52_set.insert("B");
    Instrmt_52.add_attribute("Prod", "8"); // 1
    Instrmt_52_set.insert("8");
    Instrmt_52.add_attribute("ProdCmplx", "ProductComplex_t_1457338089"); // 1
    Instrmt_52_set.insert("ProductComplex_t_1457338089");
    Instrmt_52.add_attribute("SecGrp", "SecurityGroup_t_2141304413"); // 1
    Instrmt_52_set.insert("SecurityGroup_t_2141304413");
    Instrmt_52.add_attribute("CFI", "CFICode_t_1404962994"); // 1
    Instrmt_52_set.insert("CFICode_t_1404962994");
    Instrmt_52.add_attribute("SecTyp", "FADN"); // 1
    Instrmt_52_set.insert("FADN");
    Instrmt_52.add_attribute("SubTyp", "SecuritySubType_t_83490053"); // 1
    Instrmt_52_set.insert("SecuritySubType_t_83490053");
    Instrmt_52.add_attribute("MMY", "2100937438"); // 1
    Instrmt_52_set.insert("2100937438");
    Instrmt_52.add_attribute("MatDt", "MaturityDate_t_897814651"); // 1
    Instrmt_52_set.insert("MaturityDate_t_897814651");
    Instrmt_52.add_attribute("MatTm", "1629502844"); // 1
    Instrmt_52_set.insert("1629502844");
    Instrmt_52.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_152724715"); // 1
    Instrmt_52_set.insert("SettleOnOpenFlag_t_152724715");
    Instrmt_52.add_attribute("AsgnMeth", "393746491"); // 1
    Instrmt_52_set.insert("393746491");
    Instrmt_52.add_attribute("Status", "2"); // 1
    Instrmt_52_set.insert("2");
    Instrmt_52.add_attribute("CpnPmt", "CouponPaymentDate_t_773862816"); // 1
    Instrmt_52_set.insert("CouponPaymentDate_t_773862816");
    Instrmt_52.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_52_set.insert("FR");
    Instrmt_52.add_attribute("Snrty", "SD"); // 1
    Instrmt_52_set.insert("SD");
    Instrmt_52.add_attribute("NotlPctOut", "15217986.010000"); // 1
    Instrmt_52_set.insert("15217986.010000");
    Instrmt_52.add_attribute("OrigNotlPctOut", "18338174.250000"); // 1
    Instrmt_52_set.insert("18338174.250000");
    Instrmt_52.add_attribute("AttchPnt", "16587832.340000"); // 1
    Instrmt_52_set.insert("16587832.340000");
    Instrmt_52.add_attribute("DetchPnt", "15752141.150000"); // 1
    Instrmt_52_set.insert("15752141.150000");
    Instrmt_52.add_attribute("Issued", "IssueDate_t_74593929"); // 1
    Instrmt_52_set.insert("IssueDate_t_74593929");
    Instrmt_52.add_attribute("RepoCollSecTyp", "659613394"); // 1
    Instrmt_52_set.insert("659613394");
    Instrmt_52.add_attribute("RepoTrm", "77514546"); // 1
    Instrmt_52_set.insert("77514546");
    Instrmt_52.add_attribute("RepoRt", "17518284.760000"); // 1
    Instrmt_52_set.insert("17518284.760000");
    Instrmt_52.add_attribute("Fctr", "3125915.780000"); // 1
    Instrmt_52_set.insert("3125915.780000");
    Instrmt_52.add_attribute("CrdRtg", "CreditRating_t_1398940795"); // 1
    Instrmt_52_set.insert("CreditRating_t_1398940795");
    Instrmt_52.add_attribute("Rgstry", "InstrRegistry_t_582322407"); // 1
    Instrmt_52_set.insert("InstrRegistry_t_582322407");
    Instrmt_52.add_attribute("IssuCtry", "960243288"); // 1
    Instrmt_52_set.insert("960243288");
    Instrmt_52.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1871755377"); // 1
    Instrmt_52_set.insert("StateOrProvinceOfIssue_t_1871755377");
    Instrmt_52.add_attribute("Lcl", "LocaleOfIssue_t_1013861062"); // 1
    Instrmt_52_set.insert("LocaleOfIssue_t_1013861062");
    Instrmt_52.add_attribute("Redeem", "RedemptionDate_t_595741683"); // 1
    Instrmt_52_set.insert("RedemptionDate_t_595741683");
    Instrmt_52.add_attribute("StrkPx", "5591869.640000"); // 1
    Instrmt_52_set.insert("5591869.640000");
    Instrmt_52.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_52_set.insert("EUR");
    Instrmt_52.add_attribute("StrkMult", "5530077.290000"); // 1
    Instrmt_52_set.insert("5530077.290000");
    Instrmt_52.add_attribute("StrkValu", "6300774.610000"); // 1
    Instrmt_52_set.insert("6300774.610000");
    Instrmt_52.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_52_set.insert("2");
    Instrmt_52.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_52_set.insert("3");
    Instrmt_52.add_attribute("StrkPxBndryPrcsn", "5835312.510000"); // 1
    Instrmt_52_set.insert("5835312.510000");
    Instrmt_52.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_52_set.insert("2");
    Instrmt_52.add_attribute("OptAt", "118516978"); // 1
    Instrmt_52_set.insert("118516978");
    Instrmt_52.add_attribute("Mult", "7362559.660000"); // 1
    Instrmt_52_set.insert("7362559.660000");
    Instrmt_52.add_attribute("MultTyp", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_52_set.insert("3");
    Instrmt_52.add_attribute("MinPxIncr", "15101187.830000"); // 1
    Instrmt_52_set.insert("15101187.830000");
    Instrmt_52.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_576893296"); // 1
    Instrmt_52_set.insert("MinPriceIncrementAmount_t_576893296");
    Instrmt_52.add_attribute("UOM", "Bcf"); // 1
    Instrmt_52_set.insert("Bcf");
    Instrmt_52.add_attribute("UOMQty", "8844337.360000"); // 1
    Instrmt_52_set.insert("8844337.360000");
    Instrmt_52.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_52_set.insert("MMbbl");
    Instrmt_52.add_attribute("PxUOMQty", "11574848.380000"); // 1
    Instrmt_52_set.insert("11574848.380000");
    Instrmt_52.add_attribute("SettlMeth", "C"); // 1
    Instrmt_52_set.insert("C");
    Instrmt_52.add_attribute("ExerStyle", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("OptPayAmt", "OptPayoutAmount_t_389678750"); // 1
    Instrmt_52_set.insert("OptPayoutAmount_t_389678750");
    Instrmt_52.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_52_set.insert("PCTPAR");
    Instrmt_52.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_52_set.insert("FUT");
    Instrmt_52.add_attribute("ListMeth", "1"); // 1
    Instrmt_52_set.insert("1");
    Instrmt_52.add_attribute("CapPx", "5244882.380000"); // 1
    Instrmt_52_set.insert("5244882.380000");
    Instrmt_52.add_attribute("FlrPx", "9424494.520000"); // 1
    Instrmt_52_set.insert("9424494.520000");
    Instrmt_52.add_attribute("PutCall", "0"); // 1
    Instrmt_52_set.insert("0");
    Instrmt_52.add_attribute("FlexInd", "false"); // 1
    Instrmt_52_set.insert("false");
    Instrmt_52.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_52_set.insert("false");
    Instrmt_52.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_52_set.insert("Yr");
    Instrmt_52.add_attribute("CpnRt", "7634637.680000"); // 1
    Instrmt_52_set.insert("7634637.680000");
    Instrmt_52.add_attribute("Exch", "SecurityExchange_t_1443787260"); // 1
    Instrmt_52_set.insert("SecurityExchange_t_1443787260");
    Instrmt_52.add_attribute("PosLmt", "477602320"); // 1
    Instrmt_52_set.insert("477602320");
    Instrmt_52.add_attribute("NTPosLmt", "1393541229"); // 1
    Instrmt_52_set.insert("1393541229");
    Instrmt_52.add_attribute("Issr", "Issuer_t_343652074"); // 1
    Instrmt_52_set.insert("Issuer_t_343652074");
    Instrmt_52.add_attribute("EncIssrLen", "1114100102"); // 1
    Instrmt_52_set.insert("1114100102");
    Instrmt_52.add_attribute("EncIssr", "EncodedIssuer_t_1977072481"); // 1
    Instrmt_52_set.insert("EncodedIssuer_t_1977072481");
    Instrmt_52.add_attribute("Desc", "SecurityDesc_t_141331539"); // 1
    Instrmt_52_set.insert("SecurityDesc_t_141331539");
    Instrmt_52.add_attribute("EncSecDescLen", "1232617081"); // 1
    Instrmt_52_set.insert("1232617081");
    Instrmt_52.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_565844799"); // 1
    Instrmt_52_set.insert("EncodedSecurityDesc_t_565844799");
    Instrmt_52.add_attribute("Pool", "Pool_t_332757495"); // 1
    Instrmt_52_set.insert("Pool_t_332757495");
    Instrmt_52.add_attribute("CSetMo", "1190360561"); // 1
    Instrmt_52_set.insert("1190360561");
    Instrmt_52.add_attribute("CPPgm", "99"); // 1
    Instrmt_52_set.insert("99");
    Instrmt_52.add_attribute("CPRegT", "CPRegType_t_909650791"); // 1
    Instrmt_52_set.insert("CPRegType_t_909650791");
    Instrmt_52.add_attribute("Dated", "DatedDate_t_689062165"); // 1
    Instrmt_52_set.insert("DatedDate_t_689062165");
    Instrmt_52.add_attribute("IntAcrl", "InterestAccrualDate_t_812913671"); // 1
    Instrmt_52_set.insert("InterestAccrualDate_t_812913671");
    all_values.push_back(Instrmt_52_set);
    all_compo_names.insert("Instrmt_52_set");

    {
      xml_element AID_55{"AID"};
      multiset<string> AID_55_set;
      AID_55.add_attribute("AltID", "SecurityAltID_t_1172877865"); // 2
      AID_55_set.insert("SecurityAltID_t_1172877865");
      AID_55.add_attribute("AltIDSrc", "G"); // 2
      AID_55_set.insert("G");
      all_values.push_back(AID_55_set);
      all_compo_names.insert("AID_55_set");

      Instrmt_52.add_element(AID_55);
    }
    {
      xml_element SecXML_55{"SecXML"};
      multiset<string> SecXML_55_set;
      SecXML_55.add_attribute("Schema", "SecurityXMLSchema_t_1125077875"); // 2
      SecXML_55_set.insert("SecurityXMLSchema_t_1125077875");
      all_values.push_back(SecXML_55_set);
      all_compo_names.insert("SecXML_55_set");

      Instrmt_52.add_element(SecXML_55);
    }
    {
      xml_element Evnt_55{"Evnt"};
      multiset<string> Evnt_55_set;
      Evnt_55.add_attribute("EventTyp", "8"); // 2
      Evnt_55_set.insert("8");
      Evnt_55.add_attribute("Dt", "EventDate_t_1516161588"); // 2
      Evnt_55_set.insert("EventDate_t_1516161588");
      Evnt_55.add_attribute("Tm", "EventTime_t_1514756625"); // 2
      Evnt_55_set.insert("EventTime_t_1514756625");
      Evnt_55.add_attribute("Px", "14528646.990000"); // 2
      Evnt_55_set.insert("14528646.990000");
      Evnt_55.add_attribute("Txt", "EventText_t_1498367752"); // 2
      Evnt_55_set.insert("EventText_t_1498367752");
      all_values.push_back(Evnt_55_set);
      all_compo_names.insert("Evnt_55_set");

      Instrmt_52.add_element(Evnt_55);
    }
    {
      xml_element Pty_282{"Pty"};
      multiset<string> Pty_282_set;
      Pty_282.add_attribute("ID", "InstrumentPartyID_t_1155892522"); // 2
      Pty_282_set.insert("InstrumentPartyID_t_1155892522");
      Pty_282.add_attribute("Src", "1"); // 2
      Pty_282_set.insert("1");
      Pty_282.add_attribute("R", "20"); // 2
      Pty_282_set.insert("20");
      all_values.push_back(Pty_282_set);
      all_compo_names.insert("Pty_282_set");

      {
        xml_element Sub_282{"Sub"};
        multiset<string> Sub_282_set;
        Sub_282.add_attribute("ID", "InstrumentPartySubID_t_521300148"); // 3
        Sub_282_set.insert("InstrumentPartySubID_t_521300148");
        Sub_282.add_attribute("Typ", "22"); // 3
        Sub_282_set.insert("22");
        all_values.push_back(Sub_282_set);
        all_compo_names.insert("Sub_282_set");

        Pty_282.add_element(Sub_282);
      }
      Instrmt_52.add_element(Pty_282);
    }
    {
      xml_element CmplxEvnt_52{"CmplxEvnt"};
      multiset<string> CmplxEvnt_52_set;
      CmplxEvnt_52.add_attribute("Typ", "5"); // 2
      CmplxEvnt_52_set.insert("5");
      CmplxEvnt_52.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_445894739"); // 2
      CmplxEvnt_52_set.insert("ComplexOptPayoutAmount_t_445894739");
      CmplxEvnt_52.add_attribute("Px", "21316823.590000"); // 2
      CmplxEvnt_52_set.insert("21316823.590000");
      CmplxEvnt_52.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_52_set.insert("5");
      CmplxEvnt_52.add_attribute("PxBndryPrcsn", "9234970.590000"); // 2
      CmplxEvnt_52_set.insert("9234970.590000");
      CmplxEvnt_52.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_52_set.insert("3");
      CmplxEvnt_52.add_attribute("Cond", "1"); // 2
      CmplxEvnt_52_set.insert("1");
      all_values.push_back(CmplxEvnt_52_set);
      all_compo_names.insert("CmplxEvnt_52_set");

      {
        xml_element EvntDts_52{"EvntDts"};
        multiset<string> EvntDts_52_set;
        EvntDts_52.add_attribute("StartDt", "ComplexEventStartDate_t_2037597161"); // 3
        EvntDts_52_set.insert("ComplexEventStartDate_t_2037597161");
        EvntDts_52.add_attribute("EndDt", "ComplexEventEndDate_t_1207328773"); // 3
        EvntDts_52_set.insert("ComplexEventEndDate_t_1207328773");
        all_values.push_back(EvntDts_52_set);
        all_compo_names.insert("EvntDts_52_set");

        {
          xml_element EvntTms_52{"EvntTms"};
          multiset<string> EvntTms_52_set;
          EvntTms_52.add_attribute("StartTm", "1612811917"); // 4
          EvntTms_52_set.insert("1612811917");
          EvntTms_52.add_attribute("EndTm", "1122730594"); // 4
          EvntTms_52_set.insert("1122730594");
          all_values.push_back(EvntTms_52_set);
          all_compo_names.insert("EvntTms_52_set");

          EvntDts_52.add_element(EvntTms_52);
        }
        CmplxEvnt_52.add_element(EvntDts_52);
      }
      Instrmt_52.add_element(CmplxEvnt_52);
    }
    elt.add_element(Instrmt_52);
  } // end Instrmt
  { // Undly
    xml_element Undly_72{"Undly"};
    multiset<string> Undly_72_set;
    Undly_72.add_attribute("Sym", "UnderlyingSymbol_t_1773173573"); // 1
    Undly_72_set.insert("UnderlyingSymbol_t_1773173573");
    Undly_72.add_attribute("Sfx", "CD"); // 1
    Undly_72_set.insert("CD");
    Undly_72.add_attribute("ID", "UnderlyingSecurityID_t_165607507"); // 1
    Undly_72_set.insert("UnderlyingSecurityID_t_165607507");
    Undly_72.add_attribute("Src", "G"); // 1
    Undly_72_set.insert("G");
    Undly_72.add_attribute("Prod", "3"); // 1
    Undly_72_set.insert("3");
    Undly_72.add_attribute("CFI", "UnderlyingCFICode_t_854669672"); // 1
    Undly_72_set.insert("UnderlyingCFICode_t_854669672");
    Undly_72.add_attribute("SecTyp", "MPP"); // 1
    Undly_72_set.insert("MPP");
    Undly_72.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1880614421"); // 1
    Undly_72_set.insert("UnderlyingSecuritySubType_t_1880614421");
    Undly_72.add_attribute("MMY", "553733028"); // 1
    Undly_72_set.insert("553733028");
    Undly_72.add_attribute("Mat", "UnderlyingMaturityDate_t_1492161405"); // 1
    Undly_72_set.insert("UnderlyingMaturityDate_t_1492161405");
    Undly_72.add_attribute("MatTm", "1243829641"); // 1
    Undly_72_set.insert("1243829641");
    Undly_72.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2069894616"); // 1
    Undly_72_set.insert("UnderlyingCouponPaymentDate_t_2069894616");
    Undly_72.add_attribute("RestrctTyp", "MM"); // 1
    Undly_72_set.insert("MM");
    Undly_72.add_attribute("Snrty", "SD"); // 1
    Undly_72_set.insert("SD");
    Undly_72.add_attribute("NotlPctOut", "14207787.200000"); // 1
    Undly_72_set.insert("14207787.200000");
    Undly_72.add_attribute("OrigNotlPctOut", "20153269.040000"); // 1
    Undly_72_set.insert("20153269.040000");
    Undly_72.add_attribute("AttchPnt", "3790799.830000"); // 1
    Undly_72_set.insert("3790799.830000");
    Undly_72.add_attribute("DetchPnt", "17141122.760000"); // 1
    Undly_72_set.insert("17141122.760000");
    Undly_72.add_attribute("Issued", "UnderlyingIssueDate_t_389143405"); // 1
    Undly_72_set.insert("UnderlyingIssueDate_t_389143405");
    Undly_72.add_attribute("RepoCollSecTyp", "1747298574"); // 1
    Undly_72_set.insert("1747298574");
    Undly_72.add_attribute("RepoTrm", "1398153320"); // 1
    Undly_72_set.insert("1398153320");
    Undly_72.add_attribute("RepoRt", "8350381.440000"); // 1
    Undly_72_set.insert("8350381.440000");
    Undly_72.add_attribute("Fctr", "17314972.850000"); // 1
    Undly_72_set.insert("17314972.850000");
    Undly_72.add_attribute("CrdRtg", "UnderlyingCreditRating_t_378497976"); // 1
    Undly_72_set.insert("UnderlyingCreditRating_t_378497976");
    Undly_72.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1758535203"); // 1
    Undly_72_set.insert("UnderlyingInstrRegistry_t_1758535203");
    Undly_72.add_attribute("Ctry", "961753577"); // 1
    Undly_72_set.insert("961753577");
    Undly_72.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1849978354"); // 1
    Undly_72_set.insert("UnderlyingStateOrProvinceOfIssue_t_1849978354");
    Undly_72.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1648648716"); // 1
    Undly_72_set.insert("UnderlyingLocaleOfIssue_t_1648648716");
    Undly_72.add_attribute("Redeem", "UnderlyingRedemptionDate_t_21598703"); // 1
    Undly_72_set.insert("UnderlyingRedemptionDate_t_21598703");
    Undly_72.add_attribute("StrkPx", "13153066.230000"); // 1
    Undly_72_set.insert("13153066.230000");
    Undly_72.add_attribute("StrkCcy", "JPY"); // 1
    Undly_72_set.insert("JPY");
    Undly_72.add_attribute("OptA", "1113392387"); // 1
    Undly_72_set.insert("1113392387");
    Undly_72.add_attribute("Mult", "7895031.700000"); // 1
    Undly_72_set.insert("7895031.700000");
    Undly_72.add_attribute("MultTyp", "1"); // 1
    Undly_72_set.insert("1");
    Undly_72.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_72_set.insert("2");
    Undly_72.add_attribute("UOM", "MMBtu"); // 1
    Undly_72_set.insert("MMBtu");
    Undly_72.add_attribute("UOMQty", "17160256.660000"); // 1
    Undly_72_set.insert("17160256.660000");
    Undly_72.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_72_set.insert("oz_tr");
    Undly_72.add_attribute("PxUOMQty", "504222.230000"); // 1
    Undly_72_set.insert("504222.230000");
    Undly_72.add_attribute("TmUnit", "D"); // 1
    Undly_72_set.insert("D");
    Undly_72.add_attribute("ExerStyle", "2"); // 1
    Undly_72_set.insert("2");
    Undly_72.add_attribute("CpnRt", "21203168.390000"); // 1
    Undly_72_set.insert("21203168.390000");
    Undly_72.add_attribute("Exch", "UnderlyingSecurityExchange_t_1920137806"); // 1
    Undly_72_set.insert("UnderlyingSecurityExchange_t_1920137806");
    Undly_72.add_attribute("Issr", "UnderlyingIssuer_t_1199816402"); // 1
    Undly_72_set.insert("UnderlyingIssuer_t_1199816402");
    Undly_72.add_attribute("EncUndIssrLen", "1393611912"); // 1
    Undly_72_set.insert("1393611912");
    Undly_72.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1787981062"); // 1
    Undly_72_set.insert("EncodedUnderlyingIssuer_t_1787981062");
    Undly_72.add_attribute("Desc", "UnderlyingSecurityDesc_t_1578896385"); // 1
    Undly_72_set.insert("UnderlyingSecurityDesc_t_1578896385");
    Undly_72.add_attribute("EncUndSecDescLen", "960240540"); // 1
    Undly_72_set.insert("960240540");
    Undly_72.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_29640819"); // 1
    Undly_72_set.insert("EncodedUnderlyingSecurityDesc_t_29640819");
    Undly_72.add_attribute("CPPgm", "UnderlyingCPProgram_t_1178711311"); // 1
    Undly_72_set.insert("UnderlyingCPProgram_t_1178711311");
    Undly_72.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_210910212"); // 1
    Undly_72_set.insert("UnderlyingCPRegType_t_210910212");
    Undly_72.add_attribute("AllocPct", "8646789.630000"); // 1
    Undly_72_set.insert("8646789.630000");
    Undly_72.add_attribute("Ccy", "USD"); // 1
    Undly_72_set.insert("USD");
    Undly_72.add_attribute("Qty", "4757305.180000"); // 1
    Undly_72_set.insert("4757305.180000");
    Undly_72.add_attribute("SettlTyp", "2"); // 1
    Undly_72_set.insert("2");
    Undly_72.add_attribute("CashAmt", "UnderlyingCashAmount_t_291902894"); // 1
    Undly_72_set.insert("UnderlyingCashAmount_t_291902894");
    Undly_72.add_attribute("CashTyp", "DIFF"); // 1
    Undly_72_set.insert("DIFF");
    Undly_72.add_attribute("Px", "17460772.280000"); // 1
    Undly_72_set.insert("17460772.280000");
    Undly_72.add_attribute("DirtPx", "16072095.170000"); // 1
    Undly_72_set.insert("16072095.170000");
    Undly_72.add_attribute("EndPx", "6007912.500000"); // 1
    Undly_72_set.insert("6007912.500000");
    Undly_72.add_attribute("StartVal", "UnderlyingStartValue_t_1393365856"); // 1
    Undly_72_set.insert("UnderlyingStartValue_t_1393365856");
    Undly_72.add_attribute("CurVal", "UnderlyingCurrentValue_t_573118256"); // 1
    Undly_72_set.insert("UnderlyingCurrentValue_t_573118256");
    Undly_72.add_attribute("EndVal", "UnderlyingEndValue_t_1390294420"); // 1
    Undly_72_set.insert("UnderlyingEndValue_t_1390294420");
    Undly_72.add_attribute("AdjQty", "5948243.440000"); // 1
    Undly_72_set.insert("5948243.440000");
    Undly_72.add_attribute("FxRate", "2467635.510000"); // 1
    Undly_72_set.insert("2467635.510000");
    Undly_72.add_attribute("FxRateCalc", "D"); // 1
    Undly_72_set.insert("D");
    Undly_72.add_attribute("CapValu", "UnderlyingCapValue_t_163366362"); // 1
    Undly_72_set.insert("UnderlyingCapValue_t_163366362");
    Undly_72.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1801023266"); // 1
    Undly_72_set.insert("UnderlyingSettlMethod_t_1801023266");
    Undly_72.add_attribute("PutCall", "937405838"); // 1
    Undly_72_set.insert("937405838");
    all_values.push_back(Undly_72_set);
    all_compo_names.insert("Undly_72_set");

    {
      xml_element UndAID_72{"UndAID"};
      multiset<string> UndAID_72_set;
      UndAID_72.add_attribute("AltID", "UnderlyingSecurityAltID_t_1224069785"); // 2
      UndAID_72_set.insert("UnderlyingSecurityAltID_t_1224069785");
      UndAID_72.add_attribute("AltIDSrc", "E"); // 2
      UndAID_72_set.insert("E");
      all_values.push_back(UndAID_72_set);
      all_compo_names.insert("UndAID_72_set");

      Undly_72.add_element(UndAID_72);
    }
    {
      xml_element Stip_110{"Stip"};
      multiset<string> Stip_110_set;
      Stip_110.add_attribute("Typ", "INTERNALPX"); // 2
      Stip_110_set.insert("INTERNALPX");
      Stip_110.add_attribute("Val", "UnderlyingStipValue_t_996723943"); // 2
      Stip_110_set.insert("UnderlyingStipValue_t_996723943");
      all_values.push_back(Stip_110_set);
      all_compo_names.insert("Stip_110_set");

      Undly_72.add_element(Stip_110);
    }
    {
      xml_element Pty_283{"Pty"};
      multiset<string> Pty_283_set;
      Pty_283.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1503961729"); // 2
      Pty_283_set.insert("UnderlyingInstrumentPartyID_t_1503961729");
      Pty_283.add_attribute("Src", "H"); // 2
      Pty_283_set.insert("H");
      Pty_283.add_attribute("R", "49"); // 2
      Pty_283_set.insert("49");
      all_values.push_back(Pty_283_set);
      all_compo_names.insert("Pty_283_set");

      {
        xml_element Sub_283{"Sub"};
        multiset<string> Sub_283_set;
        Sub_283.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_935374466"); // 3
        Sub_283_set.insert("UnderlyingInstrumentPartySubID_t_935374466");
        Sub_283.add_attribute("Typ", "10"); // 3
        Sub_283_set.insert("10");
        all_values.push_back(Sub_283_set);
        all_compo_names.insert("Sub_283_set");

        Pty_283.add_element(Sub_283);
      }
      Undly_72.add_element(Pty_283);
    }
    elt.add_element(Undly_72);
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
