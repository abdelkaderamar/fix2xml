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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdMassActReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderMassActionRequest_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1061138401"); // 0
  OrderMassActionRequest_message_t_0.insert("ClOrdID_t_1061138401");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1281475279"); // 0
  OrderMassActionRequest_message_t_0.insert("SecondaryClOrdID_t_1281475279");
  elt.add_attribute("MassActionType", "1"); // 0
  OrderMassActionRequest_message_t_0.insert("1");
  elt.add_attribute("MassActionScope", "10"); // 0
  OrderMassActionRequest_message_t_0.insert("10");
  elt.add_attribute("MktID", "MarketID_t_793999536"); // 0
  OrderMassActionRequest_message_t_0.insert("MarketID_t_793999536");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_1818132046"); // 0
  OrderMassActionRequest_message_t_0.insert("MarketSegmentID_t_1818132046");
  elt.add_attribute("SesID", "1"); // 0
  OrderMassActionRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "6"); // 0
  OrderMassActionRequest_message_t_0.insert("6");
  elt.add_attribute("Side", "9"); // 0
  OrderMassActionRequest_message_t_0.insert("9");
  elt.add_attribute("TxnTm", "TransactTime_t_170503281"); // 0
  OrderMassActionRequest_message_t_0.insert("TransactTime_t_170503281");
  elt.add_attribute("Txt", "Text_t_440615933"); // 0
  OrderMassActionRequest_message_t_0.insert("Text_t_440615933");
  elt.add_attribute("EncTxtLen", "1368363205"); // 0
  OrderMassActionRequest_message_t_0.insert("1368363205");
  elt.add_attribute("EncTxt", "EncodedText_t_861440380"); // 0
  OrderMassActionRequest_message_t_0.insert("EncodedText_t_861440380");
  all_values.push_back(OrderMassActionRequest_message_t_0);
  all_compo_names.insert("OrderMassActionRequest_message_t");

  { // Hdr
    xml_element Hdr_60{"Hdr"};
    multiset<string> Hdr_60_set;
    Hdr_60.add_attribute("SeqNum", "1721544861"); // 1
    Hdr_60_set.insert("1721544861");
    Hdr_60.add_attribute("SID", "SenderCompID_t_2030732521"); // 1
    Hdr_60_set.insert("SenderCompID_t_2030732521");
    Hdr_60.add_attribute("TID", "TargetCompID_t_708809056"); // 1
    Hdr_60_set.insert("TargetCompID_t_708809056");
    Hdr_60.add_attribute("OBID", "OnBehalfOfCompID_t_68662372"); // 1
    Hdr_60_set.insert("OnBehalfOfCompID_t_68662372");
    Hdr_60.add_attribute("D2ID", "DeliverToCompID_t_314738326"); // 1
    Hdr_60_set.insert("DeliverToCompID_t_314738326");
    Hdr_60.add_attribute("SSub", "SenderSubID_t_999800746"); // 1
    Hdr_60_set.insert("SenderSubID_t_999800746");
    Hdr_60.add_attribute("SLoc", "SenderLocationID_t_590466275"); // 1
    Hdr_60_set.insert("SenderLocationID_t_590466275");
    Hdr_60.add_attribute("TSub", "TargetSubID_t_798190641"); // 1
    Hdr_60_set.insert("TargetSubID_t_798190641");
    Hdr_60.add_attribute("TLoc", "TargetLocationID_t_1355833819"); // 1
    Hdr_60_set.insert("TargetLocationID_t_1355833819");
    Hdr_60.add_attribute("OBSub", "OnBehalfOfSubID_t_360454906"); // 1
    Hdr_60_set.insert("OnBehalfOfSubID_t_360454906");
    Hdr_60.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1029142202"); // 1
    Hdr_60_set.insert("OnBehalfOfLocationID_t_1029142202");
    Hdr_60.add_attribute("D2Sub", "DeliverToSubID_t_2001771656"); // 1
    Hdr_60_set.insert("DeliverToSubID_t_2001771656");
    Hdr_60.add_attribute("D2Loc", "DeliverToLocationID_t_1966057147"); // 1
    Hdr_60_set.insert("DeliverToLocationID_t_1966057147");
    Hdr_60.add_attribute("PosDup", "N"); // 1
    Hdr_60_set.insert("N");
    Hdr_60.add_attribute("PosRsnd", "Y"); // 1
    Hdr_60_set.insert("Y");
    Hdr_60.add_attribute("Snt", "SendingTime_t_1208577259"); // 1
    Hdr_60_set.insert("SendingTime_t_1208577259");
    Hdr_60.add_attribute("OrigSnt", "OrigSendingTime_t_307656241"); // 1
    Hdr_60_set.insert("OrigSendingTime_t_307656241");
    Hdr_60.add_attribute("MsgEncd", "MessageEncoding_t_229190956"); // 1
    Hdr_60_set.insert("MessageEncoding_t_229190956");
    all_values.push_back(Hdr_60_set);
    all_compo_names.insert("Hdr_60_set");

    {
      xml_element Hop_60{"Hop"};
      multiset<string> Hop_60_set;
      Hop_60.add_attribute("ID", "HopCompID_t_122232013"); // 2
      Hop_60_set.insert("HopCompID_t_122232013");
      Hop_60.add_attribute("Ref", "1589131520"); // 2
      Hop_60_set.insert("1589131520");
      Hop_60.add_attribute("Snt", "HopSendingTime_t_938805823"); // 2
      Hop_60_set.insert("HopSendingTime_t_938805823");
      all_values.push_back(Hop_60_set);
      all_compo_names.insert("Hop_60_set");

      Hdr_60.add_element(Hop_60);
    }
    elt.add_element(Hdr_60);
  } // end Hdr
  { // Pty
    xml_element Pty_272{"Pty"};
    multiset<string> Pty_272_set;
    Pty_272.add_attribute("ID", "PartyID_t_235647408"); // 1
    Pty_272_set.insert("PartyID_t_235647408");
    Pty_272.add_attribute("Src", "G"); // 1
    Pty_272_set.insert("G");
    Pty_272.add_attribute("R", "41"); // 1
    Pty_272_set.insert("41");
    all_values.push_back(Pty_272_set);
    all_compo_names.insert("Pty_272_set");

    {
      xml_element Sub_272{"Sub"};
      multiset<string> Sub_272_set;
      Sub_272.add_attribute("ID", "PartySubID_t_861061735"); // 2
      Sub_272_set.insert("PartySubID_t_861061735");
      Sub_272.add_attribute("Typ", "22"); // 2
      Sub_272_set.insert("22");
      all_values.push_back(Sub_272_set);
      all_compo_names.insert("Sub_272_set");

      Pty_272.add_element(Sub_272);
    }
    elt.add_element(Pty_272);
  } // end Pty
  { // Pty
    xml_element Pty_273{"Pty"};
    multiset<string> Pty_273_set;
    Pty_273.add_attribute("ID", "PartyID_t_1291367231"); // 1
    Pty_273_set.insert("PartyID_t_1291367231");
    Pty_273.add_attribute("Src", "1"); // 1
    Pty_273_set.insert("1");
    Pty_273.add_attribute("R", "15"); // 1
    Pty_273_set.insert("15");
    all_values.push_back(Pty_273_set);
    all_compo_names.insert("Pty_273_set");

    {
      xml_element Sub_273{"Sub"};
      multiset<string> Sub_273_set;
      Sub_273.add_attribute("ID", "PartySubID_t_5323963"); // 2
      Sub_273_set.insert("PartySubID_t_5323963");
      Sub_273.add_attribute("Typ", "30"); // 2
      Sub_273_set.insert("30");
      all_values.push_back(Sub_273_set);
      all_compo_names.insert("Sub_273_set");

      Pty_273.add_element(Sub_273);
    }
    elt.add_element(Pty_273);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_4{"TgtPty"};
    multiset<string> TgtPty_4_set;
    TgtPty_4.add_attribute("ID", "TargetPartyID_t_714133019"); // 1
    TgtPty_4_set.insert("TargetPartyID_t_714133019");
    TgtPty_4.add_attribute("Src", "7"); // 1
    TgtPty_4_set.insert("7");
    TgtPty_4.add_attribute("R", "49"); // 1
    TgtPty_4_set.insert("49");
    all_values.push_back(TgtPty_4_set);
    all_compo_names.insert("TgtPty_4_set");

    elt.add_element(TgtPty_4);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_5{"TgtPty"};
    multiset<string> TgtPty_5_set;
    TgtPty_5.add_attribute("ID", "TargetPartyID_t_1713933765"); // 1
    TgtPty_5_set.insert("TargetPartyID_t_1713933765");
    TgtPty_5.add_attribute("Src", "6"); // 1
    TgtPty_5_set.insert("6");
    TgtPty_5.add_attribute("R", "50"); // 1
    TgtPty_5_set.insert("50");
    all_values.push_back(TgtPty_5_set);
    all_compo_names.insert("TgtPty_5_set");

    elt.add_element(TgtPty_5);
  } // end TgtPty
  { // TgtPty
    xml_element TgtPty_6{"TgtPty"};
    multiset<string> TgtPty_6_set;
    TgtPty_6.add_attribute("ID", "TargetPartyID_t_922283936"); // 1
    TgtPty_6_set.insert("TargetPartyID_t_922283936");
    TgtPty_6.add_attribute("Src", "G"); // 1
    TgtPty_6_set.insert("G");
    TgtPty_6.add_attribute("R", "60"); // 1
    TgtPty_6_set.insert("60");
    all_values.push_back(TgtPty_6_set);
    all_compo_names.insert("TgtPty_6_set");

    elt.add_element(TgtPty_6);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_50{"Instrmt"};
    multiset<string> Instrmt_50_set;
    Instrmt_50.add_attribute("Sym", "Symbol_t_776571945"); // 1
    Instrmt_50_set.insert("Symbol_t_776571945");
    Instrmt_50.add_attribute("Sfx", "WI"); // 1
    Instrmt_50_set.insert("WI");
    Instrmt_50.add_attribute("ID", "SecurityID_t_1200611719"); // 1
    Instrmt_50_set.insert("SecurityID_t_1200611719");
    Instrmt_50.add_attribute("Src", "D"); // 1
    Instrmt_50_set.insert("D");
    Instrmt_50.add_attribute("Prod", "3"); // 1
    Instrmt_50_set.insert("3");
    Instrmt_50.add_attribute("ProdCmplx", "ProductComplex_t_1508267960"); // 1
    Instrmt_50_set.insert("ProductComplex_t_1508267960");
    Instrmt_50.add_attribute("SecGrp", "SecurityGroup_t_169842491"); // 1
    Instrmt_50_set.insert("SecurityGroup_t_169842491");
    Instrmt_50.add_attribute("CFI", "CFICode_t_897221559"); // 1
    Instrmt_50_set.insert("CFICode_t_897221559");
    Instrmt_50.add_attribute("SecTyp", "DINP"); // 1
    Instrmt_50_set.insert("DINP");
    Instrmt_50.add_attribute("SubTyp", "SecuritySubType_t_1108648314"); // 1
    Instrmt_50_set.insert("SecuritySubType_t_1108648314");
    Instrmt_50.add_attribute("MMY", "883590114"); // 1
    Instrmt_50_set.insert("883590114");
    Instrmt_50.add_attribute("MatDt", "MaturityDate_t_1185563241"); // 1
    Instrmt_50_set.insert("MaturityDate_t_1185563241");
    Instrmt_50.add_attribute("MatTm", "1718102536"); // 1
    Instrmt_50_set.insert("1718102536");
    Instrmt_50.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2004454064"); // 1
    Instrmt_50_set.insert("SettleOnOpenFlag_t_2004454064");
    Instrmt_50.add_attribute("AsgnMeth", "2046624976"); // 1
    Instrmt_50_set.insert("2046624976");
    Instrmt_50.add_attribute("Status", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("CpnPmt", "CouponPaymentDate_t_1148337648"); // 1
    Instrmt_50_set.insert("CouponPaymentDate_t_1148337648");
    Instrmt_50.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_50_set.insert("MR");
    Instrmt_50.add_attribute("Snrty", "SB"); // 1
    Instrmt_50_set.insert("SB");
    Instrmt_50.add_attribute("NotlPctOut", "11536616.110000"); // 1
    Instrmt_50_set.insert("11536616.110000");
    Instrmt_50.add_attribute("OrigNotlPctOut", "20765578.790000"); // 1
    Instrmt_50_set.insert("20765578.790000");
    Instrmt_50.add_attribute("AttchPnt", "14051500.910000"); // 1
    Instrmt_50_set.insert("14051500.910000");
    Instrmt_50.add_attribute("DetchPnt", "18677946.310000"); // 1
    Instrmt_50_set.insert("18677946.310000");
    Instrmt_50.add_attribute("Issued", "IssueDate_t_873475485"); // 1
    Instrmt_50_set.insert("IssueDate_t_873475485");
    Instrmt_50.add_attribute("RepoCollSecTyp", "1278030037"); // 1
    Instrmt_50_set.insert("1278030037");
    Instrmt_50.add_attribute("RepoTrm", "1434244748"); // 1
    Instrmt_50_set.insert("1434244748");
    Instrmt_50.add_attribute("RepoRt", "2608593.660000"); // 1
    Instrmt_50_set.insert("2608593.660000");
    Instrmt_50.add_attribute("Fctr", "19491006.250000"); // 1
    Instrmt_50_set.insert("19491006.250000");
    Instrmt_50.add_attribute("CrdRtg", "CreditRating_t_209045037"); // 1
    Instrmt_50_set.insert("CreditRating_t_209045037");
    Instrmt_50.add_attribute("Rgstry", "InstrRegistry_t_8698153"); // 1
    Instrmt_50_set.insert("InstrRegistry_t_8698153");
    Instrmt_50.add_attribute("IssuCtry", "1501829766"); // 1
    Instrmt_50_set.insert("1501829766");
    Instrmt_50.add_attribute("StPrv", "StateOrProvinceOfIssue_t_985616982"); // 1
    Instrmt_50_set.insert("StateOrProvinceOfIssue_t_985616982");
    Instrmt_50.add_attribute("Lcl", "LocaleOfIssue_t_1722594088"); // 1
    Instrmt_50_set.insert("LocaleOfIssue_t_1722594088");
    Instrmt_50.add_attribute("Redeem", "RedemptionDate_t_554957838"); // 1
    Instrmt_50_set.insert("RedemptionDate_t_554957838");
    Instrmt_50.add_attribute("StrkPx", "9262685.160000"); // 1
    Instrmt_50_set.insert("9262685.160000");
    Instrmt_50.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_50_set.insert("GBP");
    Instrmt_50.add_attribute("StrkMult", "10961110.070000"); // 1
    Instrmt_50_set.insert("10961110.070000");
    Instrmt_50.add_attribute("StrkValu", "12473215.460000"); // 1
    Instrmt_50_set.insert("12473215.460000");
    Instrmt_50.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_50_set.insert("4");
    Instrmt_50.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_50_set.insert("5");
    Instrmt_50.add_attribute("StrkPxBndryPrcsn", "21309116.600000"); // 1
    Instrmt_50_set.insert("21309116.600000");
    Instrmt_50.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("OptAt", "1775378210"); // 1
    Instrmt_50_set.insert("1775378210");
    Instrmt_50.add_attribute("Mult", "19878820.770000"); // 1
    Instrmt_50_set.insert("19878820.770000");
    Instrmt_50.add_attribute("MultTyp", "0"); // 1
    Instrmt_50_set.insert("0");
    Instrmt_50.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("MinPxIncr", "9887360.770000"); // 1
    Instrmt_50_set.insert("9887360.770000");
    Instrmt_50.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1003697902"); // 1
    Instrmt_50_set.insert("MinPriceIncrementAmount_t_1003697902");
    Instrmt_50.add_attribute("UOM", "USD"); // 1
    Instrmt_50_set.insert("USD");
    Instrmt_50.add_attribute("UOMQty", "21423976.880000"); // 1
    Instrmt_50_set.insert("21423976.880000");
    Instrmt_50.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_50_set.insert("lbs");
    Instrmt_50.add_attribute("PxUOMQty", "7572015.550000"); // 1
    Instrmt_50_set.insert("7572015.550000");
    Instrmt_50.add_attribute("SettlMeth", "P"); // 1
    Instrmt_50_set.insert("P");
    Instrmt_50.add_attribute("ExerStyle", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_50_set.insert("3");
    Instrmt_50.add_attribute("OptPayAmt", "OptPayoutAmount_t_1149469772"); // 1
    Instrmt_50_set.insert("OptPayoutAmount_t_1149469772");
    Instrmt_50.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_50_set.insert("STD");
    Instrmt_50.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_50_set.insert("CDSD");
    Instrmt_50.add_attribute("ListMeth", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("CapPx", "20758051.380000"); // 1
    Instrmt_50_set.insert("20758051.380000");
    Instrmt_50.add_attribute("FlrPx", "11911946.880000"); // 1
    Instrmt_50_set.insert("11911946.880000");
    Instrmt_50.add_attribute("PutCall", "1"); // 1
    Instrmt_50_set.insert("1");
    Instrmt_50.add_attribute("FlexInd", "true"); // 1
    Instrmt_50_set.insert("true");
    Instrmt_50.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_50_set.insert("true");
    Instrmt_50.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_50_set.insert("Wk");
    Instrmt_50.add_attribute("CpnRt", "20010155.650000"); // 1
    Instrmt_50_set.insert("20010155.650000");
    Instrmt_50.add_attribute("Exch", "SecurityExchange_t_1661894676"); // 1
    Instrmt_50_set.insert("SecurityExchange_t_1661894676");
    Instrmt_50.add_attribute("PosLmt", "71544019"); // 1
    Instrmt_50_set.insert("71544019");
    Instrmt_50.add_attribute("NTPosLmt", "1100853464"); // 1
    Instrmt_50_set.insert("1100853464");
    Instrmt_50.add_attribute("Issr", "Issuer_t_380069012"); // 1
    Instrmt_50_set.insert("Issuer_t_380069012");
    Instrmt_50.add_attribute("EncIssrLen", "128819693"); // 1
    Instrmt_50_set.insert("128819693");
    Instrmt_50.add_attribute("EncIssr", "EncodedIssuer_t_1084281476"); // 1
    Instrmt_50_set.insert("EncodedIssuer_t_1084281476");
    Instrmt_50.add_attribute("Desc", "SecurityDesc_t_283806589"); // 1
    Instrmt_50_set.insert("SecurityDesc_t_283806589");
    Instrmt_50.add_attribute("EncSecDescLen", "1904197903"); // 1
    Instrmt_50_set.insert("1904197903");
    Instrmt_50.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_924679905"); // 1
    Instrmt_50_set.insert("EncodedSecurityDesc_t_924679905");
    Instrmt_50.add_attribute("Pool", "Pool_t_86685494"); // 1
    Instrmt_50_set.insert("Pool_t_86685494");
    Instrmt_50.add_attribute("CSetMo", "1556724542"); // 1
    Instrmt_50_set.insert("1556724542");
    Instrmt_50.add_attribute("CPPgm", "2"); // 1
    Instrmt_50_set.insert("2");
    Instrmt_50.add_attribute("CPRegT", "CPRegType_t_1090383397"); // 1
    Instrmt_50_set.insert("CPRegType_t_1090383397");
    Instrmt_50.add_attribute("Dated", "DatedDate_t_908776006"); // 1
    Instrmt_50_set.insert("DatedDate_t_908776006");
    Instrmt_50.add_attribute("IntAcrl", "InterestAccrualDate_t_1908330023"); // 1
    Instrmt_50_set.insert("InterestAccrualDate_t_1908330023");
    all_values.push_back(Instrmt_50_set);
    all_compo_names.insert("Instrmt_50_set");

    {
      xml_element AID_53{"AID"};
      multiset<string> AID_53_set;
      AID_53.add_attribute("AltID", "SecurityAltID_t_2023155530"); // 2
      AID_53_set.insert("SecurityAltID_t_2023155530");
      AID_53.add_attribute("AltIDSrc", "I"); // 2
      AID_53_set.insert("I");
      all_values.push_back(AID_53_set);
      all_compo_names.insert("AID_53_set");

      Instrmt_50.add_element(AID_53);
    }
    {
      xml_element SecXML_53{"SecXML"};
      multiset<string> SecXML_53_set;
      SecXML_53.add_attribute("Schema", "SecurityXMLSchema_t_1623555046"); // 2
      SecXML_53_set.insert("SecurityXMLSchema_t_1623555046");
      all_values.push_back(SecXML_53_set);
      all_compo_names.insert("SecXML_53_set");

      Instrmt_50.add_element(SecXML_53);
    }
    {
      xml_element Evnt_53{"Evnt"};
      multiset<string> Evnt_53_set;
      Evnt_53.add_attribute("EventTyp", "2"); // 2
      Evnt_53_set.insert("2");
      Evnt_53.add_attribute("Dt", "EventDate_t_1553725505"); // 2
      Evnt_53_set.insert("EventDate_t_1553725505");
      Evnt_53.add_attribute("Tm", "EventTime_t_625541170"); // 2
      Evnt_53_set.insert("EventTime_t_625541170");
      Evnt_53.add_attribute("Px", "16015428.370000"); // 2
      Evnt_53_set.insert("16015428.370000");
      Evnt_53.add_attribute("Txt", "EventText_t_1243090427"); // 2
      Evnt_53_set.insert("EventText_t_1243090427");
      all_values.push_back(Evnt_53_set);
      all_compo_names.insert("Evnt_53_set");

      Instrmt_50.add_element(Evnt_53);
    }
    {
      xml_element Pty_274{"Pty"};
      multiset<string> Pty_274_set;
      Pty_274.add_attribute("ID", "InstrumentPartyID_t_1984055979"); // 2
      Pty_274_set.insert("InstrumentPartyID_t_1984055979");
      Pty_274.add_attribute("Src", "C"); // 2
      Pty_274_set.insert("C");
      Pty_274.add_attribute("R", "24"); // 2
      Pty_274_set.insert("24");
      all_values.push_back(Pty_274_set);
      all_compo_names.insert("Pty_274_set");

      {
        xml_element Sub_274{"Sub"};
        multiset<string> Sub_274_set;
        Sub_274.add_attribute("ID", "InstrumentPartySubID_t_33220474"); // 3
        Sub_274_set.insert("InstrumentPartySubID_t_33220474");
        Sub_274.add_attribute("Typ", "28"); // 3
        Sub_274_set.insert("28");
        all_values.push_back(Sub_274_set);
        all_compo_names.insert("Sub_274_set");

        Pty_274.add_element(Sub_274);
      }
      Instrmt_50.add_element(Pty_274);
    }
    {
      xml_element CmplxEvnt_50{"CmplxEvnt"};
      multiset<string> CmplxEvnt_50_set;
      CmplxEvnt_50.add_attribute("Typ", "1"); // 2
      CmplxEvnt_50_set.insert("1");
      CmplxEvnt_50.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1156137134"); // 2
      CmplxEvnt_50_set.insert("ComplexOptPayoutAmount_t_1156137134");
      CmplxEvnt_50.add_attribute("Px", "8868281.750000"); // 2
      CmplxEvnt_50_set.insert("8868281.750000");
      CmplxEvnt_50.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_50_set.insert("2");
      CmplxEvnt_50.add_attribute("PxBndryPrcsn", "12276811.530000"); // 2
      CmplxEvnt_50_set.insert("12276811.530000");
      CmplxEvnt_50.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_50_set.insert("2");
      CmplxEvnt_50.add_attribute("Cond", "2"); // 2
      CmplxEvnt_50_set.insert("2");
      all_values.push_back(CmplxEvnt_50_set);
      all_compo_names.insert("CmplxEvnt_50_set");

      {
        xml_element EvntDts_50{"EvntDts"};
        multiset<string> EvntDts_50_set;
        EvntDts_50.add_attribute("StartDt", "ComplexEventStartDate_t_1356500846"); // 3
        EvntDts_50_set.insert("ComplexEventStartDate_t_1356500846");
        EvntDts_50.add_attribute("EndDt", "ComplexEventEndDate_t_924479468"); // 3
        EvntDts_50_set.insert("ComplexEventEndDate_t_924479468");
        all_values.push_back(EvntDts_50_set);
        all_compo_names.insert("EvntDts_50_set");

        {
          xml_element EvntTms_50{"EvntTms"};
          multiset<string> EvntTms_50_set;
          EvntTms_50.add_attribute("StartTm", "63756974"); // 4
          EvntTms_50_set.insert("63756974");
          EvntTms_50.add_attribute("EndTm", "1113215101"); // 4
          EvntTms_50_set.insert("1113215101");
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
    xml_element Undly_70{"Undly"};
    multiset<string> Undly_70_set;
    Undly_70.add_attribute("Sym", "UnderlyingSymbol_t_1849159373"); // 1
    Undly_70_set.insert("UnderlyingSymbol_t_1849159373");
    Undly_70.add_attribute("Sfx", "WI"); // 1
    Undly_70_set.insert("WI");
    Undly_70.add_attribute("ID", "UnderlyingSecurityID_t_522455995"); // 1
    Undly_70_set.insert("UnderlyingSecurityID_t_522455995");
    Undly_70.add_attribute("Src", "B"); // 1
    Undly_70_set.insert("B");
    Undly_70.add_attribute("Prod", "4"); // 1
    Undly_70_set.insert("4");
    Undly_70.add_attribute("CFI", "UnderlyingCFICode_t_1431232001"); // 1
    Undly_70_set.insert("UnderlyingCFICode_t_1431232001");
    Undly_70.add_attribute("SecTyp", "EUSOV"); // 1
    Undly_70_set.insert("EUSOV");
    Undly_70.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1116497748"); // 1
    Undly_70_set.insert("UnderlyingSecuritySubType_t_1116497748");
    Undly_70.add_attribute("MMY", "949725914"); // 1
    Undly_70_set.insert("949725914");
    Undly_70.add_attribute("Mat", "UnderlyingMaturityDate_t_852009481"); // 1
    Undly_70_set.insert("UnderlyingMaturityDate_t_852009481");
    Undly_70.add_attribute("MatTm", "650933601"); // 1
    Undly_70_set.insert("650933601");
    Undly_70.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_355967772"); // 1
    Undly_70_set.insert("UnderlyingCouponPaymentDate_t_355967772");
    Undly_70.add_attribute("RestrctTyp", "FR"); // 1
    Undly_70_set.insert("FR");
    Undly_70.add_attribute("Snrty", "SD"); // 1
    Undly_70_set.insert("SD");
    Undly_70.add_attribute("NotlPctOut", "15990581.990000"); // 1
    Undly_70_set.insert("15990581.990000");
    Undly_70.add_attribute("OrigNotlPctOut", "13141229.830000"); // 1
    Undly_70_set.insert("13141229.830000");
    Undly_70.add_attribute("AttchPnt", "16348571.180000"); // 1
    Undly_70_set.insert("16348571.180000");
    Undly_70.add_attribute("DetchPnt", "18858596.660000"); // 1
    Undly_70_set.insert("18858596.660000");
    Undly_70.add_attribute("Issued", "UnderlyingIssueDate_t_1347343458"); // 1
    Undly_70_set.insert("UnderlyingIssueDate_t_1347343458");
    Undly_70.add_attribute("RepoCollSecTyp", "520669728"); // 1
    Undly_70_set.insert("520669728");
    Undly_70.add_attribute("RepoTrm", "1771330011"); // 1
    Undly_70_set.insert("1771330011");
    Undly_70.add_attribute("RepoRt", "3559969.440000"); // 1
    Undly_70_set.insert("3559969.440000");
    Undly_70.add_attribute("Fctr", "14074979.040000"); // 1
    Undly_70_set.insert("14074979.040000");
    Undly_70.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1171211384"); // 1
    Undly_70_set.insert("UnderlyingCreditRating_t_1171211384");
    Undly_70.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1583678097"); // 1
    Undly_70_set.insert("UnderlyingInstrRegistry_t_1583678097");
    Undly_70.add_attribute("Ctry", "1247695895"); // 1
    Undly_70_set.insert("1247695895");
    Undly_70.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_951161770"); // 1
    Undly_70_set.insert("UnderlyingStateOrProvinceOfIssue_t_951161770");
    Undly_70.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_792695295"); // 1
    Undly_70_set.insert("UnderlyingLocaleOfIssue_t_792695295");
    Undly_70.add_attribute("Redeem", "UnderlyingRedemptionDate_t_24691715"); // 1
    Undly_70_set.insert("UnderlyingRedemptionDate_t_24691715");
    Undly_70.add_attribute("StrkPx", "10149187.440000"); // 1
    Undly_70_set.insert("10149187.440000");
    Undly_70.add_attribute("StrkCcy", "CAN"); // 1
    Undly_70_set.insert("CAN");
    Undly_70.add_attribute("OptA", "1165361213"); // 1
    Undly_70_set.insert("1165361213");
    Undly_70.add_attribute("Mult", "2808827.430000"); // 1
    Undly_70_set.insert("2808827.430000");
    Undly_70.add_attribute("MultTyp", "2"); // 1
    Undly_70_set.insert("2");
    Undly_70.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_70_set.insert("1");
    Undly_70.add_attribute("UOM", "Gal"); // 1
    Undly_70_set.insert("Gal");
    Undly_70.add_attribute("UOMQty", "5699135.840000"); // 1
    Undly_70_set.insert("5699135.840000");
    Undly_70.add_attribute("PxUOM", "Bbl"); // 1
    Undly_70_set.insert("Bbl");
    Undly_70.add_attribute("PxUOMQty", "5143570.110000"); // 1
    Undly_70_set.insert("5143570.110000");
    Undly_70.add_attribute("TmUnit", "D"); // 1
    Undly_70_set.insert("D");
    Undly_70.add_attribute("ExerStyle", "1"); // 1
    Undly_70_set.insert("1");
    Undly_70.add_attribute("CpnRt", "8703247.830000"); // 1
    Undly_70_set.insert("8703247.830000");
    Undly_70.add_attribute("Exch", "UnderlyingSecurityExchange_t_751990069"); // 1
    Undly_70_set.insert("UnderlyingSecurityExchange_t_751990069");
    Undly_70.add_attribute("Issr", "UnderlyingIssuer_t_2131127572"); // 1
    Undly_70_set.insert("UnderlyingIssuer_t_2131127572");
    Undly_70.add_attribute("EncUndIssrLen", "321899334"); // 1
    Undly_70_set.insert("321899334");
    Undly_70.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2066113053"); // 1
    Undly_70_set.insert("EncodedUnderlyingIssuer_t_2066113053");
    Undly_70.add_attribute("Desc", "UnderlyingSecurityDesc_t_1618501043"); // 1
    Undly_70_set.insert("UnderlyingSecurityDesc_t_1618501043");
    Undly_70.add_attribute("EncUndSecDescLen", "60275352"); // 1
    Undly_70_set.insert("60275352");
    Undly_70.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1265972863"); // 1
    Undly_70_set.insert("EncodedUnderlyingSecurityDesc_t_1265972863");
    Undly_70.add_attribute("CPPgm", "UnderlyingCPProgram_t_2139170771"); // 1
    Undly_70_set.insert("UnderlyingCPProgram_t_2139170771");
    Undly_70.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1831605363"); // 1
    Undly_70_set.insert("UnderlyingCPRegType_t_1831605363");
    Undly_70.add_attribute("AllocPct", "16219698.070000"); // 1
    Undly_70_set.insert("16219698.070000");
    Undly_70.add_attribute("Ccy", "JPY"); // 1
    Undly_70_set.insert("JPY");
    Undly_70.add_attribute("Qty", "10581642.560000"); // 1
    Undly_70_set.insert("10581642.560000");
    Undly_70.add_attribute("SettlTyp", "4"); // 1
    Undly_70_set.insert("4");
    Undly_70.add_attribute("CashAmt", "UnderlyingCashAmount_t_1806494870"); // 1
    Undly_70_set.insert("UnderlyingCashAmount_t_1806494870");
    Undly_70.add_attribute("CashTyp", "DIFF"); // 1
    Undly_70_set.insert("DIFF");
    Undly_70.add_attribute("Px", "5240889.900000"); // 1
    Undly_70_set.insert("5240889.900000");
    Undly_70.add_attribute("DirtPx", "6739299.660000"); // 1
    Undly_70_set.insert("6739299.660000");
    Undly_70.add_attribute("EndPx", "16092862.990000"); // 1
    Undly_70_set.insert("16092862.990000");
    Undly_70.add_attribute("StartVal", "UnderlyingStartValue_t_250456431"); // 1
    Undly_70_set.insert("UnderlyingStartValue_t_250456431");
    Undly_70.add_attribute("CurVal", "UnderlyingCurrentValue_t_1839291180"); // 1
    Undly_70_set.insert("UnderlyingCurrentValue_t_1839291180");
    Undly_70.add_attribute("EndVal", "UnderlyingEndValue_t_1890169042"); // 1
    Undly_70_set.insert("UnderlyingEndValue_t_1890169042");
    Undly_70.add_attribute("AdjQty", "15919155.800000"); // 1
    Undly_70_set.insert("15919155.800000");
    Undly_70.add_attribute("FxRate", "20979946.110000"); // 1
    Undly_70_set.insert("20979946.110000");
    Undly_70.add_attribute("FxRateCalc", "D"); // 1
    Undly_70_set.insert("D");
    Undly_70.add_attribute("CapValu", "UnderlyingCapValue_t_14345516"); // 1
    Undly_70_set.insert("UnderlyingCapValue_t_14345516");
    Undly_70.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1325712143"); // 1
    Undly_70_set.insert("UnderlyingSettlMethod_t_1325712143");
    Undly_70.add_attribute("PutCall", "1969157151"); // 1
    Undly_70_set.insert("1969157151");
    all_values.push_back(Undly_70_set);
    all_compo_names.insert("Undly_70_set");

    {
      xml_element UndAID_70{"UndAID"};
      multiset<string> UndAID_70_set;
      UndAID_70.add_attribute("AltID", "UnderlyingSecurityAltID_t_1436268582"); // 2
      UndAID_70_set.insert("UnderlyingSecurityAltID_t_1436268582");
      UndAID_70.add_attribute("AltIDSrc", "8"); // 2
      UndAID_70_set.insert("8");
      all_values.push_back(UndAID_70_set);
      all_compo_names.insert("UndAID_70_set");

      Undly_70.add_element(UndAID_70);
    }
    {
      xml_element Stip_108{"Stip"};
      multiset<string> Stip_108_set;
      Stip_108.add_attribute("Typ", "SECTOR"); // 2
      Stip_108_set.insert("SECTOR");
      Stip_108.add_attribute("Val", "UnderlyingStipValue_t_40775003"); // 2
      Stip_108_set.insert("UnderlyingStipValue_t_40775003");
      all_values.push_back(Stip_108_set);
      all_compo_names.insert("Stip_108_set");

      Undly_70.add_element(Stip_108);
    }
    {
      xml_element Pty_275{"Pty"};
      multiset<string> Pty_275_set;
      Pty_275.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1188007201"); // 2
      Pty_275_set.insert("UnderlyingInstrumentPartyID_t_1188007201");
      Pty_275.add_attribute("Src", "C"); // 2
      Pty_275_set.insert("C");
      Pty_275.add_attribute("R", "59"); // 2
      Pty_275_set.insert("59");
      all_values.push_back(Pty_275_set);
      all_compo_names.insert("Pty_275_set");

      {
        xml_element Sub_275{"Sub"};
        multiset<string> Sub_275_set;
        Sub_275.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_659024596"); // 3
        Sub_275_set.insert("UnderlyingInstrumentPartySubID_t_659024596");
        Sub_275.add_attribute("Typ", "14"); // 3
        Sub_275_set.insert("14");
        all_values.push_back(Sub_275_set);
        all_compo_names.insert("Sub_275_set");

        Pty_275.add_element(Sub_275);
      }
      Undly_70.add_element(Pty_275);
    }
    elt.add_element(Undly_70);
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
