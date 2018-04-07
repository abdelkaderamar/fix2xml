#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiryAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiryAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiryAck_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_1759344954"); // 0
  CollateralInquiryAck_message_t_0.insert("CollInquiryID_t_1759344954");
  elt.add_attribute("Stat", "0"); // 0
  CollateralInquiryAck_message_t_0.insert("0");
  elt.add_attribute("Rslt", "6"); // 0
  CollateralInquiryAck_message_t_0.insert("6");
  elt.add_attribute("TotNumRpts", "1433134374"); // 0
  CollateralInquiryAck_message_t_0.insert("1433134374");
  elt.add_attribute("Acct", "Account_t_886549533"); // 0
  CollateralInquiryAck_message_t_0.insert("Account_t_886549533");
  elt.add_attribute("AcctTyp", "4"); // 0
  CollateralInquiryAck_message_t_0.insert("4");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1406234786"); // 0
  CollateralInquiryAck_message_t_0.insert("ClOrdID_t_1406234786");
  elt.add_attribute("OrdID", "OrderID_t_1776462386"); // 0
  CollateralInquiryAck_message_t_0.insert("OrderID_t_1776462386");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1519215621"); // 0
  CollateralInquiryAck_message_t_0.insert("SecondaryOrderID_t_1519215621");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1267414228"); // 0
  CollateralInquiryAck_message_t_0.insert("SecondaryClOrdID_t_1267414228");
  elt.add_attribute("SettlDt", "SettlDate_t_854081332"); // 0
  CollateralInquiryAck_message_t_0.insert("SettlDate_t_854081332");
  elt.add_attribute("Qty", "18879007.630000"); // 0
  CollateralInquiryAck_message_t_0.insert("18879007.630000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralInquiryAck_message_t_0.insert("0");
  elt.add_attribute("Ccy", "GBP"); // 0
  CollateralInquiryAck_message_t_0.insert("GBP");
  elt.add_attribute("SesID", "5"); // 0
  CollateralInquiryAck_message_t_0.insert("5");
  elt.add_attribute("SesSub", "6"); // 0
  CollateralInquiryAck_message_t_0.insert("6");
  elt.add_attribute("SetSesID", "ETH"); // 0
  CollateralInquiryAck_message_t_0.insert("ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1158667763"); // 0
  CollateralInquiryAck_message_t_0.insert("SettlSessSubID_t_1158667763");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2099419917"); // 0
  CollateralInquiryAck_message_t_0.insert("ClearingBusinessDate_t_2099419917");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  CollateralInquiryAck_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_1427218874"); // 0
  CollateralInquiryAck_message_t_0.insert("ResponseDestination_t_1427218874");
  elt.add_attribute("Txt", "Text_t_756012829"); // 0
  CollateralInquiryAck_message_t_0.insert("Text_t_756012829");
  elt.add_attribute("EncTxtLen", "1274003754"); // 0
  CollateralInquiryAck_message_t_0.insert("1274003754");
  elt.add_attribute("EncTxt", "EncodedText_t_2070707075"); // 0
  CollateralInquiryAck_message_t_0.insert("EncodedText_t_2070707075");
  all_values.push_back(CollateralInquiryAck_message_t_0);
  all_compo_names.insert("CollateralInquiryAck_message_t");

  { // Hdr
    xml_element Hdr_16{"Hdr"};
    multiset<string> Hdr_16_set;
    Hdr_16.add_attribute("SeqNum", "286993480"); // 1
    Hdr_16_set.insert("286993480");
    Hdr_16.add_attribute("SID", "SenderCompID_t_1378354128"); // 1
    Hdr_16_set.insert("SenderCompID_t_1378354128");
    Hdr_16.add_attribute("TID", "TargetCompID_t_739271895"); // 1
    Hdr_16_set.insert("TargetCompID_t_739271895");
    Hdr_16.add_attribute("OBID", "OnBehalfOfCompID_t_1021756071"); // 1
    Hdr_16_set.insert("OnBehalfOfCompID_t_1021756071");
    Hdr_16.add_attribute("D2ID", "DeliverToCompID_t_191644608"); // 1
    Hdr_16_set.insert("DeliverToCompID_t_191644608");
    Hdr_16.add_attribute("SSub", "SenderSubID_t_254767210"); // 1
    Hdr_16_set.insert("SenderSubID_t_254767210");
    Hdr_16.add_attribute("SLoc", "SenderLocationID_t_633617377"); // 1
    Hdr_16_set.insert("SenderLocationID_t_633617377");
    Hdr_16.add_attribute("TSub", "TargetSubID_t_220484609"); // 1
    Hdr_16_set.insert("TargetSubID_t_220484609");
    Hdr_16.add_attribute("TLoc", "TargetLocationID_t_329907491"); // 1
    Hdr_16_set.insert("TargetLocationID_t_329907491");
    Hdr_16.add_attribute("OBSub", "OnBehalfOfSubID_t_2066751751"); // 1
    Hdr_16_set.insert("OnBehalfOfSubID_t_2066751751");
    Hdr_16.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1107034142"); // 1
    Hdr_16_set.insert("OnBehalfOfLocationID_t_1107034142");
    Hdr_16.add_attribute("D2Sub", "DeliverToSubID_t_1596808227"); // 1
    Hdr_16_set.insert("DeliverToSubID_t_1596808227");
    Hdr_16.add_attribute("D2Loc", "DeliverToLocationID_t_1325502889"); // 1
    Hdr_16_set.insert("DeliverToLocationID_t_1325502889");
    Hdr_16.add_attribute("PosDup", "N"); // 1
    Hdr_16_set.insert("N");
    Hdr_16.add_attribute("PosRsnd", "N"); // 1
    Hdr_16_set.insert("N");
    Hdr_16.add_attribute("Snt", "SendingTime_t_445433470"); // 1
    Hdr_16_set.insert("SendingTime_t_445433470");
    Hdr_16.add_attribute("OrigSnt", "OrigSendingTime_t_1590094213"); // 1
    Hdr_16_set.insert("OrigSendingTime_t_1590094213");
    Hdr_16.add_attribute("MsgEncd", "MessageEncoding_t_708957315"); // 1
    Hdr_16_set.insert("MessageEncoding_t_708957315");
    all_values.push_back(Hdr_16_set);
    all_compo_names.insert("Hdr_16_set");

    {
      xml_element Hop_16{"Hop"};
      multiset<string> Hop_16_set;
      Hop_16.add_attribute("ID", "HopCompID_t_887171998"); // 2
      Hop_16_set.insert("HopCompID_t_887171998");
      Hop_16.add_attribute("Ref", "49648942"); // 2
      Hop_16_set.insert("49648942");
      Hop_16.add_attribute("Snt", "HopSendingTime_t_546985383"); // 2
      Hop_16_set.insert("HopSendingTime_t_546985383");
      all_values.push_back(Hop_16_set);
      all_compo_names.insert("Hop_16_set");

      Hdr_16.add_element(Hop_16);
    }
    elt.add_element(Hdr_16);
  } // end Hdr
  { // Qual
    xml_element Qual_3{"Qual"};
    multiset<string> Qual_3_set;
    Qual_3.add_attribute("Qual", "1"); // 1
    Qual_3_set.insert("1");
    all_values.push_back(Qual_3_set);
    all_compo_names.insert("Qual_3_set");

    elt.add_element(Qual_3);
  } // end Qual
  { // Qual
    xml_element Qual_4{"Qual"};
    multiset<string> Qual_4_set;
    Qual_4.add_attribute("Qual", "1"); // 1
    Qual_4_set.insert("1");
    all_values.push_back(Qual_4_set);
    all_compo_names.insert("Qual_4_set");

    elt.add_element(Qual_4);
  } // end Qual
  { // Qual
    xml_element Qual_5{"Qual"};
    multiset<string> Qual_5_set;
    Qual_5.add_attribute("Qual", "2"); // 1
    Qual_5_set.insert("2");
    all_values.push_back(Qual_5_set);
    all_compo_names.insert("Qual_5_set");

    elt.add_element(Qual_5);
  } // end Qual
  { // Pty
    xml_element Pty_82{"Pty"};
    multiset<string> Pty_82_set;
    Pty_82.add_attribute("ID", "PartyID_t_201729463"); // 1
    Pty_82_set.insert("PartyID_t_201729463");
    Pty_82.add_attribute("Src", "9"); // 1
    Pty_82_set.insert("9");
    Pty_82.add_attribute("R", "73"); // 1
    Pty_82_set.insert("73");
    all_values.push_back(Pty_82_set);
    all_compo_names.insert("Pty_82_set");

    {
      xml_element Sub_82{"Sub"};
      multiset<string> Sub_82_set;
      Sub_82.add_attribute("ID", "PartySubID_t_1475733217"); // 2
      Sub_82_set.insert("PartySubID_t_1475733217");
      Sub_82.add_attribute("Typ", "30"); // 2
      Sub_82_set.insert("30");
      all_values.push_back(Sub_82_set);
      all_compo_names.insert("Sub_82_set");

      Pty_82.add_element(Sub_82);
    }
    elt.add_element(Pty_82);
  } // end Pty
  { // Pty
    xml_element Pty_83{"Pty"};
    multiset<string> Pty_83_set;
    Pty_83.add_attribute("ID", "PartyID_t_1185606147"); // 1
    Pty_83_set.insert("PartyID_t_1185606147");
    Pty_83.add_attribute("Src", "1"); // 1
    Pty_83_set.insert("1");
    Pty_83.add_attribute("R", "46"); // 1
    Pty_83_set.insert("46");
    all_values.push_back(Pty_83_set);
    all_compo_names.insert("Pty_83_set");

    {
      xml_element Sub_83{"Sub"};
      multiset<string> Sub_83_set;
      Sub_83.add_attribute("ID", "PartySubID_t_59878570"); // 2
      Sub_83_set.insert("PartySubID_t_59878570");
      Sub_83.add_attribute("Typ", "5"); // 2
      Sub_83_set.insert("5");
      all_values.push_back(Sub_83_set);
      all_compo_names.insert("Sub_83_set");

      Pty_83.add_element(Sub_83);
    }
    elt.add_element(Pty_83);
  } // end Pty
  { // CollExc
    xml_element CollExc_4{"CollExc"};
    multiset<string> CollExc_4_set;
    CollExc_4.add_attribute("ExecID", "ExecID_t_693495947"); // 1
    CollExc_4_set.insert("ExecID_t_693495947");
    all_values.push_back(CollExc_4_set);
    all_compo_names.insert("CollExc_4_set");

    elt.add_element(CollExc_4);
  } // end CollExc
  { // CollExc
    xml_element CollExc_5{"CollExc"};
    multiset<string> CollExc_5_set;
    CollExc_5.add_attribute("ExecID", "ExecID_t_1118732915"); // 1
    CollExc_5_set.insert("ExecID_t_1118732915");
    all_values.push_back(CollExc_5_set);
    all_compo_names.insert("CollExc_5_set");

    elt.add_element(CollExc_5);
  } // end CollExc
  { // CollExc
    xml_element CollExc_6{"CollExc"};
    multiset<string> CollExc_6_set;
    CollExc_6.add_attribute("ExecID", "ExecID_t_623879476"); // 1
    CollExc_6_set.insert("ExecID_t_623879476");
    all_values.push_back(CollExc_6_set);
    all_compo_names.insert("CollExc_6_set");

    elt.add_element(CollExc_6);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_5{"TrdColl"};
    multiset<string> TrdColl_5_set;
    TrdColl_5.add_attribute("RptID", "TradeReportID_t_78283409"); // 1
    TrdColl_5_set.insert("TradeReportID_t_78283409");
    TrdColl_5.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_73204055"); // 1
    TrdColl_5_set.insert("SecondaryTradeReportID_t_73204055");
    all_values.push_back(TrdColl_5_set);
    all_compo_names.insert("TrdColl_5_set");

    elt.add_element(TrdColl_5);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_6{"TrdColl"};
    multiset<string> TrdColl_6_set;
    TrdColl_6.add_attribute("RptID", "TradeReportID_t_1938266940"); // 1
    TrdColl_6_set.insert("TradeReportID_t_1938266940");
    TrdColl_6.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_814296290"); // 1
    TrdColl_6_set.insert("SecondaryTradeReportID_t_814296290");
    all_values.push_back(TrdColl_6_set);
    all_compo_names.insert("TrdColl_6_set");

    elt.add_element(TrdColl_6);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_10{"Instrmt"};
    multiset<string> Instrmt_10_set;
    Instrmt_10.add_attribute("Sym", "Symbol_t_1041744255"); // 1
    Instrmt_10_set.insert("Symbol_t_1041744255");
    Instrmt_10.add_attribute("Sfx", "CD"); // 1
    Instrmt_10_set.insert("CD");
    Instrmt_10.add_attribute("ID", "SecurityID_t_256906855"); // 1
    Instrmt_10_set.insert("SecurityID_t_256906855");
    Instrmt_10.add_attribute("Src", "3"); // 1
    Instrmt_10_set.insert("3");
    Instrmt_10.add_attribute("Prod", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("ProdCmplx", "ProductComplex_t_306555797"); // 1
    Instrmt_10_set.insert("ProductComplex_t_306555797");
    Instrmt_10.add_attribute("SecGrp", "SecurityGroup_t_150203305"); // 1
    Instrmt_10_set.insert("SecurityGroup_t_150203305");
    Instrmt_10.add_attribute("CFI", "CFICode_t_61695222"); // 1
    Instrmt_10_set.insert("CFICode_t_61695222");
    Instrmt_10.add_attribute("SecTyp", "PFAND"); // 1
    Instrmt_10_set.insert("PFAND");
    Instrmt_10.add_attribute("SubTyp", "SecuritySubType_t_1080574570"); // 1
    Instrmt_10_set.insert("SecuritySubType_t_1080574570");
    Instrmt_10.add_attribute("MMY", "158669448"); // 1
    Instrmt_10_set.insert("158669448");
    Instrmt_10.add_attribute("MatDt", "MaturityDate_t_639819204"); // 1
    Instrmt_10_set.insert("MaturityDate_t_639819204");
    Instrmt_10.add_attribute("MatTm", "1282304034"); // 1
    Instrmt_10_set.insert("1282304034");
    Instrmt_10.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1682862548"); // 1
    Instrmt_10_set.insert("SettleOnOpenFlag_t_1682862548");
    Instrmt_10.add_attribute("AsgnMeth", "1538431871"); // 1
    Instrmt_10_set.insert("1538431871");
    Instrmt_10.add_attribute("Status", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("CpnPmt", "CouponPaymentDate_t_982795428"); // 1
    Instrmt_10_set.insert("CouponPaymentDate_t_982795428");
    Instrmt_10.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_10_set.insert("MM");
    Instrmt_10.add_attribute("Snrty", "SB"); // 1
    Instrmt_10_set.insert("SB");
    Instrmt_10.add_attribute("NotlPctOut", "10220002.030000"); // 1
    Instrmt_10_set.insert("10220002.030000");
    Instrmt_10.add_attribute("OrigNotlPctOut", "6364329.400000"); // 1
    Instrmt_10_set.insert("6364329.400000");
    Instrmt_10.add_attribute("AttchPnt", "679219.600000"); // 1
    Instrmt_10_set.insert("679219.600000");
    Instrmt_10.add_attribute("DetchPnt", "13159721.880000"); // 1
    Instrmt_10_set.insert("13159721.880000");
    Instrmt_10.add_attribute("Issued", "IssueDate_t_1329928887"); // 1
    Instrmt_10_set.insert("IssueDate_t_1329928887");
    Instrmt_10.add_attribute("RepoCollSecTyp", "1186654875"); // 1
    Instrmt_10_set.insert("1186654875");
    Instrmt_10.add_attribute("RepoTrm", "1939851665"); // 1
    Instrmt_10_set.insert("1939851665");
    Instrmt_10.add_attribute("RepoRt", "19426929.370000"); // 1
    Instrmt_10_set.insert("19426929.370000");
    Instrmt_10.add_attribute("Fctr", "12649382.850000"); // 1
    Instrmt_10_set.insert("12649382.850000");
    Instrmt_10.add_attribute("CrdRtg", "CreditRating_t_2013055720"); // 1
    Instrmt_10_set.insert("CreditRating_t_2013055720");
    Instrmt_10.add_attribute("Rgstry", "InstrRegistry_t_1733476229"); // 1
    Instrmt_10_set.insert("InstrRegistry_t_1733476229");
    Instrmt_10.add_attribute("IssuCtry", "2079234575"); // 1
    Instrmt_10_set.insert("2079234575");
    Instrmt_10.add_attribute("StPrv", "StateOrProvinceOfIssue_t_907316328"); // 1
    Instrmt_10_set.insert("StateOrProvinceOfIssue_t_907316328");
    Instrmt_10.add_attribute("Lcl", "LocaleOfIssue_t_1969692991"); // 1
    Instrmt_10_set.insert("LocaleOfIssue_t_1969692991");
    Instrmt_10.add_attribute("Redeem", "RedemptionDate_t_188657782"); // 1
    Instrmt_10_set.insert("RedemptionDate_t_188657782");
    Instrmt_10.add_attribute("StrkPx", "5105342.500000"); // 1
    Instrmt_10_set.insert("5105342.500000");
    Instrmt_10.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_10_set.insert("CHF");
    Instrmt_10.add_attribute("StrkMult", "6607375.560000"); // 1
    Instrmt_10_set.insert("6607375.560000");
    Instrmt_10.add_attribute("StrkValu", "10072933.260000"); // 1
    Instrmt_10_set.insert("10072933.260000");
    Instrmt_10.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("StrkPxBndryPrcsn", "11659627.740000"); // 1
    Instrmt_10_set.insert("11659627.740000");
    Instrmt_10.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("OptAt", "876132512"); // 1
    Instrmt_10_set.insert("876132512");
    Instrmt_10.add_attribute("Mult", "7013416.750000"); // 1
    Instrmt_10_set.insert("7013416.750000");
    Instrmt_10.add_attribute("MultTyp", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("MinPxIncr", "16841371.030000"); // 1
    Instrmt_10_set.insert("16841371.030000");
    Instrmt_10.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1599754742"); // 1
    Instrmt_10_set.insert("MinPriceIncrementAmount_t_1599754742");
    Instrmt_10.add_attribute("UOM", "MWh"); // 1
    Instrmt_10_set.insert("MWh");
    Instrmt_10.add_attribute("UOMQty", "5586536.580000"); // 1
    Instrmt_10_set.insert("5586536.580000");
    Instrmt_10.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_10_set.insert("Gal");
    Instrmt_10.add_attribute("PxUOMQty", "7242817.290000"); // 1
    Instrmt_10_set.insert("7242817.290000");
    Instrmt_10.add_attribute("SettlMeth", "C"); // 1
    Instrmt_10_set.insert("C");
    Instrmt_10.add_attribute("ExerStyle", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("OptPayAmt", "OptPayoutAmount_t_1666993863"); // 1
    Instrmt_10_set.insert("OptPayoutAmount_t_1666993863");
    Instrmt_10.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_10_set.insert("INT");
    Instrmt_10.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_10_set.insert("FUTDA");
    Instrmt_10.add_attribute("ListMeth", "0"); // 1
    Instrmt_10_set.insert("0");
    Instrmt_10.add_attribute("CapPx", "7998347.920000"); // 1
    Instrmt_10_set.insert("7998347.920000");
    Instrmt_10.add_attribute("FlrPx", "9601421.690000"); // 1
    Instrmt_10_set.insert("9601421.690000");
    Instrmt_10.add_attribute("PutCall", "0"); // 1
    Instrmt_10_set.insert("0");
    Instrmt_10.add_attribute("FlexInd", "false"); // 1
    Instrmt_10_set.insert("false");
    Instrmt_10.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_10_set.insert("false");
    Instrmt_10.add_attribute("TmUnit", "Min"); // 1
    Instrmt_10_set.insert("Min");
    Instrmt_10.add_attribute("CpnRt", "15676422.390000"); // 1
    Instrmt_10_set.insert("15676422.390000");
    Instrmt_10.add_attribute("Exch", "SecurityExchange_t_1644013530"); // 1
    Instrmt_10_set.insert("SecurityExchange_t_1644013530");
    Instrmt_10.add_attribute("PosLmt", "1463670422"); // 1
    Instrmt_10_set.insert("1463670422");
    Instrmt_10.add_attribute("NTPosLmt", "427451917"); // 1
    Instrmt_10_set.insert("427451917");
    Instrmt_10.add_attribute("Issr", "Issuer_t_488962827"); // 1
    Instrmt_10_set.insert("Issuer_t_488962827");
    Instrmt_10.add_attribute("EncIssrLen", "1057498901"); // 1
    Instrmt_10_set.insert("1057498901");
    Instrmt_10.add_attribute("EncIssr", "EncodedIssuer_t_1593414691"); // 1
    Instrmt_10_set.insert("EncodedIssuer_t_1593414691");
    Instrmt_10.add_attribute("Desc", "SecurityDesc_t_2121214976"); // 1
    Instrmt_10_set.insert("SecurityDesc_t_2121214976");
    Instrmt_10.add_attribute("EncSecDescLen", "1933631413"); // 1
    Instrmt_10_set.insert("1933631413");
    Instrmt_10.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_147272718"); // 1
    Instrmt_10_set.insert("EncodedSecurityDesc_t_147272718");
    Instrmt_10.add_attribute("Pool", "Pool_t_996931700"); // 1
    Instrmt_10_set.insert("Pool_t_996931700");
    Instrmt_10.add_attribute("CSetMo", "1272833881"); // 1
    Instrmt_10_set.insert("1272833881");
    Instrmt_10.add_attribute("CPPgm", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("CPRegT", "CPRegType_t_449202794"); // 1
    Instrmt_10_set.insert("CPRegType_t_449202794");
    Instrmt_10.add_attribute("Dated", "DatedDate_t_1929193651"); // 1
    Instrmt_10_set.insert("DatedDate_t_1929193651");
    Instrmt_10.add_attribute("IntAcrl", "InterestAccrualDate_t_242579831"); // 1
    Instrmt_10_set.insert("InterestAccrualDate_t_242579831");
    all_values.push_back(Instrmt_10_set);
    all_compo_names.insert("Instrmt_10_set");

    {
      xml_element AID_10{"AID"};
      multiset<string> AID_10_set;
      AID_10.add_attribute("AltID", "SecurityAltID_t_537906828"); // 2
      AID_10_set.insert("SecurityAltID_t_537906828");
      AID_10.add_attribute("AltIDSrc", "5"); // 2
      AID_10_set.insert("5");
      all_values.push_back(AID_10_set);
      all_compo_names.insert("AID_10_set");

      Instrmt_10.add_element(AID_10);
    }
    {
      xml_element SecXML_10{"SecXML"};
      multiset<string> SecXML_10_set;
      SecXML_10.add_attribute("Schema", "SecurityXMLSchema_t_2117205678"); // 2
      SecXML_10_set.insert("SecurityXMLSchema_t_2117205678");
      all_values.push_back(SecXML_10_set);
      all_compo_names.insert("SecXML_10_set");

      Instrmt_10.add_element(SecXML_10);
    }
    {
      xml_element Evnt_10{"Evnt"};
      multiset<string> Evnt_10_set;
      Evnt_10.add_attribute("EventTyp", "9"); // 2
      Evnt_10_set.insert("9");
      Evnt_10.add_attribute("Dt", "EventDate_t_269444689"); // 2
      Evnt_10_set.insert("EventDate_t_269444689");
      Evnt_10.add_attribute("Tm", "EventTime_t_1636715893"); // 2
      Evnt_10_set.insert("EventTime_t_1636715893");
      Evnt_10.add_attribute("Px", "10228983.110000"); // 2
      Evnt_10_set.insert("10228983.110000");
      Evnt_10.add_attribute("Txt", "EventText_t_1297835931"); // 2
      Evnt_10_set.insert("EventText_t_1297835931");
      all_values.push_back(Evnt_10_set);
      all_compo_names.insert("Evnt_10_set");

      Instrmt_10.add_element(Evnt_10);
    }
    {
      xml_element Pty_84{"Pty"};
      multiset<string> Pty_84_set;
      Pty_84.add_attribute("ID", "InstrumentPartyID_t_1021798181"); // 2
      Pty_84_set.insert("InstrumentPartyID_t_1021798181");
      Pty_84.add_attribute("Src", "4"); // 2
      Pty_84_set.insert("4");
      Pty_84.add_attribute("R", "20"); // 2
      Pty_84_set.insert("20");
      all_values.push_back(Pty_84_set);
      all_compo_names.insert("Pty_84_set");

      {
        xml_element Sub_84{"Sub"};
        multiset<string> Sub_84_set;
        Sub_84.add_attribute("ID", "InstrumentPartySubID_t_1314196797"); // 3
        Sub_84_set.insert("InstrumentPartySubID_t_1314196797");
        Sub_84.add_attribute("Typ", "7"); // 3
        Sub_84_set.insert("7");
        all_values.push_back(Sub_84_set);
        all_compo_names.insert("Sub_84_set");

        Pty_84.add_element(Sub_84);
      }
      Instrmt_10.add_element(Pty_84);
    }
    {
      xml_element CmplxEvnt_10{"CmplxEvnt"};
      multiset<string> CmplxEvnt_10_set;
      CmplxEvnt_10.add_attribute("Typ", "4"); // 2
      CmplxEvnt_10_set.insert("4");
      CmplxEvnt_10.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2117129664"); // 2
      CmplxEvnt_10_set.insert("ComplexOptPayoutAmount_t_2117129664");
      CmplxEvnt_10.add_attribute("Px", "18649358.300000"); // 2
      CmplxEvnt_10_set.insert("18649358.300000");
      CmplxEvnt_10.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_10_set.insert("1");
      CmplxEvnt_10.add_attribute("PxBndryPrcsn", "14333164.380000"); // 2
      CmplxEvnt_10_set.insert("14333164.380000");
      CmplxEvnt_10.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_10_set.insert("2");
      CmplxEvnt_10.add_attribute("Cond", "1"); // 2
      CmplxEvnt_10_set.insert("1");
      all_values.push_back(CmplxEvnt_10_set);
      all_compo_names.insert("CmplxEvnt_10_set");

      {
        xml_element EvntDts_10{"EvntDts"};
        multiset<string> EvntDts_10_set;
        EvntDts_10.add_attribute("StartDt", "ComplexEventStartDate_t_343331691"); // 3
        EvntDts_10_set.insert("ComplexEventStartDate_t_343331691");
        EvntDts_10.add_attribute("EndDt", "ComplexEventEndDate_t_1738318790"); // 3
        EvntDts_10_set.insert("ComplexEventEndDate_t_1738318790");
        all_values.push_back(EvntDts_10_set);
        all_compo_names.insert("EvntDts_10_set");

        {
          xml_element EvntTms_10{"EvntTms"};
          multiset<string> EvntTms_10_set;
          EvntTms_10.add_attribute("StartTm", "1218518440"); // 4
          EvntTms_10_set.insert("1218518440");
          EvntTms_10.add_attribute("EndTm", "129479457"); // 4
          EvntTms_10_set.insert("129479457");
          all_values.push_back(EvntTms_10_set);
          all_compo_names.insert("EvntTms_10_set");

          EvntDts_10.add_element(EvntTms_10);
        }
        CmplxEvnt_10.add_element(EvntDts_10);
      }
      Instrmt_10.add_element(CmplxEvnt_10);
    }
    elt.add_element(Instrmt_10);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_5{"FinDetls"};
    multiset<string> FinDetls_5_set;
    FinDetls_5.add_attribute("AgmtDesc", "AgreementDesc_t_1885591509"); // 1
    FinDetls_5_set.insert("AgreementDesc_t_1885591509");
    FinDetls_5.add_attribute("AgmtID", "AgreementID_t_67966492"); // 1
    FinDetls_5_set.insert("AgreementID_t_67966492");
    FinDetls_5.add_attribute("AgmtDt", "AgreementDate_t_1402313338"); // 1
    FinDetls_5_set.insert("AgreementDate_t_1402313338");
    FinDetls_5.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_5_set.insert("USD");
    FinDetls_5.add_attribute("TrmTyp", "2"); // 1
    FinDetls_5_set.insert("2");
    FinDetls_5.add_attribute("StartDt", "StartDate_t_1812097514"); // 1
    FinDetls_5_set.insert("StartDate_t_1812097514");
    FinDetls_5.add_attribute("EndDt", "EndDate_t_1055076114"); // 1
    FinDetls_5_set.insert("EndDate_t_1055076114");
    FinDetls_5.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_5_set.insert("2");
    FinDetls_5.add_attribute("MgnRatio", "17818195.440000"); // 1
    FinDetls_5_set.insert("17818195.440000");
    all_values.push_back(FinDetls_5_set);
    all_compo_names.insert("FinDetls_5_set");

    elt.add_element(FinDetls_5);
  } // end FinDetls
  { // Leg
    xml_element Leg_16{"Leg"};
    multiset<string> Leg_16_set;
    Leg_16.add_attribute("Sym", "LegSymbol_t_1959459763"); // 1
    Leg_16_set.insert("LegSymbol_t_1959459763");
    Leg_16.add_attribute("Sfx", "WI"); // 1
    Leg_16_set.insert("WI");
    Leg_16.add_attribute("ID", "LegSecurityID_t_1887030527"); // 1
    Leg_16_set.insert("LegSecurityID_t_1887030527");
    Leg_16.add_attribute("Src", "4"); // 1
    Leg_16_set.insert("4");
    Leg_16.add_attribute("Prod", "8"); // 1
    Leg_16_set.insert("8");
    Leg_16.add_attribute("CFI", "LegCFICode_t_1562279982"); // 1
    Leg_16_set.insert("LegCFICode_t_1562279982");
    Leg_16.add_attribute("SecTyp", "RETIRED"); // 1
    Leg_16_set.insert("RETIRED");
    Leg_16.add_attribute("SecSubTyp", "LegSecuritySubType_t_1459563120"); // 1
    Leg_16_set.insert("LegSecuritySubType_t_1459563120");
    Leg_16.add_attribute("MMY", "1859573573"); // 1
    Leg_16_set.insert("1859573573");
    Leg_16.add_attribute("Mat", "LegMaturityDate_t_332117255"); // 1
    Leg_16_set.insert("LegMaturityDate_t_332117255");
    Leg_16.add_attribute("MatTm", "1429209136"); // 1
    Leg_16_set.insert("1429209136");
    Leg_16.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1577025755"); // 1
    Leg_16_set.insert("LegCouponPaymentDate_t_1577025755");
    Leg_16.add_attribute("Issued", "LegIssueDate_t_1087941540"); // 1
    Leg_16_set.insert("LegIssueDate_t_1087941540");
    Leg_16.add_attribute("RepoCollSecTyp", "715041927"); // 1
    Leg_16_set.insert("715041927");
    Leg_16.add_attribute("RepoTrm", "1721929854"); // 1
    Leg_16_set.insert("1721929854");
    Leg_16.add_attribute("RepoRt", "1852450.050000"); // 1
    Leg_16_set.insert("1852450.050000");
    Leg_16.add_attribute("Fctr", "10583736.180000"); // 1
    Leg_16_set.insert("10583736.180000");
    Leg_16.add_attribute("CrdRtg", "LegCreditRating_t_1312764997"); // 1
    Leg_16_set.insert("LegCreditRating_t_1312764997");
    Leg_16.add_attribute("Rgstry", "LegInstrRegistry_t_1403763445"); // 1
    Leg_16_set.insert("LegInstrRegistry_t_1403763445");
    Leg_16.add_attribute("Ctry", "1187853075"); // 1
    Leg_16_set.insert("1187853075");
    Leg_16.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1050872858"); // 1
    Leg_16_set.insert("LegStateOrProvinceOfIssue_t_1050872858");
    Leg_16.add_attribute("Lcl", "LegLocaleOfIssue_t_1471729938"); // 1
    Leg_16_set.insert("LegLocaleOfIssue_t_1471729938");
    Leg_16.add_attribute("Redeem", "LegRedemptionDate_t_442682766"); // 1
    Leg_16_set.insert("LegRedemptionDate_t_442682766");
    Leg_16.add_attribute("Strk", "4729068.920000"); // 1
    Leg_16_set.insert("4729068.920000");
    Leg_16.add_attribute("StrkCcy", "CHF"); // 1
    Leg_16_set.insert("CHF");
    Leg_16.add_attribute("OptA", "137520758"); // 1
    Leg_16_set.insert("137520758");
    Leg_16.add_attribute("Cmult", "8964916.910000"); // 1
    Leg_16_set.insert("8964916.910000");
    Leg_16.add_attribute("MultTyp", "1"); // 1
    Leg_16_set.insert("1");
    Leg_16.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_16_set.insert("2");
    Leg_16.add_attribute("UOM", "Bbl"); // 1
    Leg_16_set.insert("Bbl");
    Leg_16.add_attribute("UOMQty", "9812136.490000"); // 1
    Leg_16_set.insert("9812136.490000");
    Leg_16.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_16_set.insert("MMbbl");
    Leg_16.add_attribute("PxUOMQty", "15001707.850000"); // 1
    Leg_16_set.insert("15001707.850000");
    Leg_16.add_attribute("TmUnit", "Wk"); // 1
    Leg_16_set.insert("Wk");
    Leg_16.add_attribute("ExerStyle", "0"); // 1
    Leg_16_set.insert("0");
    Leg_16.add_attribute("CpnRt", "9149671.200000"); // 1
    Leg_16_set.insert("9149671.200000");
    Leg_16.add_attribute("Exch", "LegSecurityExchange_t_1163848547"); // 1
    Leg_16_set.insert("LegSecurityExchange_t_1163848547");
    Leg_16.add_attribute("Issr", "LegIssuer_t_500354239"); // 1
    Leg_16_set.insert("LegIssuer_t_500354239");
    Leg_16.add_attribute("EncLegIssrLen", "627057045"); // 1
    Leg_16_set.insert("627057045");
    Leg_16.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1495965802"); // 1
    Leg_16_set.insert("EncodedLegIssuer_t_1495965802");
    Leg_16.add_attribute("Desc", "LegSecurityDesc_t_1929563376"); // 1
    Leg_16_set.insert("LegSecurityDesc_t_1929563376");
    Leg_16.add_attribute("EncLegSecDescLen", "56599153"); // 1
    Leg_16_set.insert("56599153");
    Leg_16.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_436423695"); // 1
    Leg_16_set.insert("EncodedLegSecurityDesc_t_436423695");
    Leg_16.add_attribute("RatioQty", "4971216.550000"); // 1
    Leg_16_set.insert("4971216.550000");
    Leg_16.add_attribute("Side", "G"); // 1
    Leg_16_set.insert("G");
    Leg_16.add_attribute("Ccy", "EUR"); // 1
    Leg_16_set.insert("EUR");
    Leg_16.add_attribute("Pool", "LegPool_t_943810356"); // 1
    Leg_16_set.insert("LegPool_t_943810356");
    Leg_16.add_attribute("Dated", "LegDatedDate_t_2025432145"); // 1
    Leg_16_set.insert("LegDatedDate_t_2025432145");
    Leg_16.add_attribute("CSetMo", "595864701"); // 1
    Leg_16_set.insert("595864701");
    Leg_16.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1994683214"); // 1
    Leg_16_set.insert("LegInterestAccrualDate_t_1994683214");
    Leg_16.add_attribute("PutCall", "1349678435"); // 1
    Leg_16_set.insert("1349678435");
    Leg_16.add_attribute("LegOptionRatio", "10385474.670000"); // 1
    Leg_16_set.insert("10385474.670000");
    Leg_16.add_attribute("Px", "3201064.590000"); // 1
    Leg_16_set.insert("3201064.590000");
    all_values.push_back(Leg_16_set);
    all_compo_names.insert("Leg_16_set");

    {
      xml_element LegAID_16{"LegAID"};
      multiset<string> LegAID_16_set;
      LegAID_16.add_attribute("SecAltID", "LegSecurityAltID_t_1191094012"); // 2
      LegAID_16_set.insert("LegSecurityAltID_t_1191094012");
      LegAID_16.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_16_set.insert("F");
      all_values.push_back(LegAID_16_set);
      all_compo_names.insert("LegAID_16_set");

      Leg_16.add_element(LegAID_16);
    }
    elt.add_element(Leg_16);
  } // end Leg
  { // Leg
    xml_element Leg_17{"Leg"};
    multiset<string> Leg_17_set;
    Leg_17.add_attribute("Sym", "LegSymbol_t_457627217"); // 1
    Leg_17_set.insert("LegSymbol_t_457627217");
    Leg_17.add_attribute("Sfx", "WI"); // 1
    Leg_17_set.insert("WI");
    Leg_17.add_attribute("ID", "LegSecurityID_t_1687007460"); // 1
    Leg_17_set.insert("LegSecurityID_t_1687007460");
    Leg_17.add_attribute("Src", "3"); // 1
    Leg_17_set.insert("3");
    Leg_17.add_attribute("Prod", "9"); // 1
    Leg_17_set.insert("9");
    Leg_17.add_attribute("CFI", "LegCFICode_t_520737461"); // 1
    Leg_17_set.insert("LegCFICode_t_520737461");
    Leg_17.add_attribute("SecTyp", "UST"); // 1
    Leg_17_set.insert("UST");
    Leg_17.add_attribute("SecSubTyp", "LegSecuritySubType_t_1053413099"); // 1
    Leg_17_set.insert("LegSecuritySubType_t_1053413099");
    Leg_17.add_attribute("MMY", "464279509"); // 1
    Leg_17_set.insert("464279509");
    Leg_17.add_attribute("Mat", "LegMaturityDate_t_313183435"); // 1
    Leg_17_set.insert("LegMaturityDate_t_313183435");
    Leg_17.add_attribute("MatTm", "1968380219"); // 1
    Leg_17_set.insert("1968380219");
    Leg_17.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1628128056"); // 1
    Leg_17_set.insert("LegCouponPaymentDate_t_1628128056");
    Leg_17.add_attribute("Issued", "LegIssueDate_t_813537674"); // 1
    Leg_17_set.insert("LegIssueDate_t_813537674");
    Leg_17.add_attribute("RepoCollSecTyp", "447953616"); // 1
    Leg_17_set.insert("447953616");
    Leg_17.add_attribute("RepoTrm", "976610211"); // 1
    Leg_17_set.insert("976610211");
    Leg_17.add_attribute("RepoRt", "5956174.020000"); // 1
    Leg_17_set.insert("5956174.020000");
    Leg_17.add_attribute("Fctr", "5045527.690000"); // 1
    Leg_17_set.insert("5045527.690000");
    Leg_17.add_attribute("CrdRtg", "LegCreditRating_t_1413033906"); // 1
    Leg_17_set.insert("LegCreditRating_t_1413033906");
    Leg_17.add_attribute("Rgstry", "LegInstrRegistry_t_1092739057"); // 1
    Leg_17_set.insert("LegInstrRegistry_t_1092739057");
    Leg_17.add_attribute("Ctry", "135598129"); // 1
    Leg_17_set.insert("135598129");
    Leg_17.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2034702606"); // 1
    Leg_17_set.insert("LegStateOrProvinceOfIssue_t_2034702606");
    Leg_17.add_attribute("Lcl", "LegLocaleOfIssue_t_500750683"); // 1
    Leg_17_set.insert("LegLocaleOfIssue_t_500750683");
    Leg_17.add_attribute("Redeem", "LegRedemptionDate_t_1079408485"); // 1
    Leg_17_set.insert("LegRedemptionDate_t_1079408485");
    Leg_17.add_attribute("Strk", "19126511.030000"); // 1
    Leg_17_set.insert("19126511.030000");
    Leg_17.add_attribute("StrkCcy", "GBP"); // 1
    Leg_17_set.insert("GBP");
    Leg_17.add_attribute("OptA", "1114845891"); // 1
    Leg_17_set.insert("1114845891");
    Leg_17.add_attribute("Cmult", "21351628.510000"); // 1
    Leg_17_set.insert("21351628.510000");
    Leg_17.add_attribute("MultTyp", "2"); // 1
    Leg_17_set.insert("2");
    Leg_17.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_17_set.insert("0");
    Leg_17.add_attribute("UOM", "Gal"); // 1
    Leg_17_set.insert("Gal");
    Leg_17.add_attribute("UOMQty", "17043417.280000"); // 1
    Leg_17_set.insert("17043417.280000");
    Leg_17.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_17_set.insert("MMbbl");
    Leg_17.add_attribute("PxUOMQty", "449729.410000"); // 1
    Leg_17_set.insert("449729.410000");
    Leg_17.add_attribute("TmUnit", "S"); // 1
    Leg_17_set.insert("S");
    Leg_17.add_attribute("ExerStyle", "2"); // 1
    Leg_17_set.insert("2");
    Leg_17.add_attribute("CpnRt", "5657104.020000"); // 1
    Leg_17_set.insert("5657104.020000");
    Leg_17.add_attribute("Exch", "LegSecurityExchange_t_1058734268"); // 1
    Leg_17_set.insert("LegSecurityExchange_t_1058734268");
    Leg_17.add_attribute("Issr", "LegIssuer_t_705213722"); // 1
    Leg_17_set.insert("LegIssuer_t_705213722");
    Leg_17.add_attribute("EncLegIssrLen", "1029989911"); // 1
    Leg_17_set.insert("1029989911");
    Leg_17.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1371917703"); // 1
    Leg_17_set.insert("EncodedLegIssuer_t_1371917703");
    Leg_17.add_attribute("Desc", "LegSecurityDesc_t_526110293"); // 1
    Leg_17_set.insert("LegSecurityDesc_t_526110293");
    Leg_17.add_attribute("EncLegSecDescLen", "510634320"); // 1
    Leg_17_set.insert("510634320");
    Leg_17.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_37971730"); // 1
    Leg_17_set.insert("EncodedLegSecurityDesc_t_37971730");
    Leg_17.add_attribute("RatioQty", "9740639.100000"); // 1
    Leg_17_set.insert("9740639.100000");
    Leg_17.add_attribute("Side", "4"); // 1
    Leg_17_set.insert("4");
    Leg_17.add_attribute("Ccy", "EUR"); // 1
    Leg_17_set.insert("EUR");
    Leg_17.add_attribute("Pool", "LegPool_t_752794789"); // 1
    Leg_17_set.insert("LegPool_t_752794789");
    Leg_17.add_attribute("Dated", "LegDatedDate_t_1726328190"); // 1
    Leg_17_set.insert("LegDatedDate_t_1726328190");
    Leg_17.add_attribute("CSetMo", "1614214808"); // 1
    Leg_17_set.insert("1614214808");
    Leg_17.add_attribute("IntAcrl", "LegInterestAccrualDate_t_640013747"); // 1
    Leg_17_set.insert("LegInterestAccrualDate_t_640013747");
    Leg_17.add_attribute("PutCall", "79595225"); // 1
    Leg_17_set.insert("79595225");
    Leg_17.add_attribute("LegOptionRatio", "5461396.460000"); // 1
    Leg_17_set.insert("5461396.460000");
    Leg_17.add_attribute("Px", "4051812.020000"); // 1
    Leg_17_set.insert("4051812.020000");
    all_values.push_back(Leg_17_set);
    all_compo_names.insert("Leg_17_set");

    {
      xml_element LegAID_17{"LegAID"};
      multiset<string> LegAID_17_set;
      LegAID_17.add_attribute("SecAltID", "LegSecurityAltID_t_1176210609"); // 2
      LegAID_17_set.insert("LegSecurityAltID_t_1176210609");
      LegAID_17.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_17_set.insert("5");
      all_values.push_back(LegAID_17_set);
      all_compo_names.insert("LegAID_17_set");

      Leg_17.add_element(LegAID_17);
    }
    elt.add_element(Leg_17);
  } // end Leg
  { // Leg
    xml_element Leg_18{"Leg"};
    multiset<string> Leg_18_set;
    Leg_18.add_attribute("Sym", "LegSymbol_t_1520027093"); // 1
    Leg_18_set.insert("LegSymbol_t_1520027093");
    Leg_18.add_attribute("Sfx", "CD"); // 1
    Leg_18_set.insert("CD");
    Leg_18.add_attribute("ID", "LegSecurityID_t_571978561"); // 1
    Leg_18_set.insert("LegSecurityID_t_571978561");
    Leg_18.add_attribute("Src", "F"); // 1
    Leg_18_set.insert("F");
    Leg_18.add_attribute("Prod", "7"); // 1
    Leg_18_set.insert("7");
    Leg_18.add_attribute("CFI", "LegCFICode_t_128836641"); // 1
    Leg_18_set.insert("LegCFICode_t_128836641");
    Leg_18.add_attribute("SecTyp", "BUYSELL"); // 1
    Leg_18_set.insert("BUYSELL");
    Leg_18.add_attribute("SecSubTyp", "LegSecuritySubType_t_1714311883"); // 1
    Leg_18_set.insert("LegSecuritySubType_t_1714311883");
    Leg_18.add_attribute("MMY", "2062662242"); // 1
    Leg_18_set.insert("2062662242");
    Leg_18.add_attribute("Mat", "LegMaturityDate_t_1428842282"); // 1
    Leg_18_set.insert("LegMaturityDate_t_1428842282");
    Leg_18.add_attribute("MatTm", "132538637"); // 1
    Leg_18_set.insert("132538637");
    Leg_18.add_attribute("CpnPmt", "LegCouponPaymentDate_t_973912862"); // 1
    Leg_18_set.insert("LegCouponPaymentDate_t_973912862");
    Leg_18.add_attribute("Issued", "LegIssueDate_t_2134056004"); // 1
    Leg_18_set.insert("LegIssueDate_t_2134056004");
    Leg_18.add_attribute("RepoCollSecTyp", "1162528549"); // 1
    Leg_18_set.insert("1162528549");
    Leg_18.add_attribute("RepoTrm", "198346918"); // 1
    Leg_18_set.insert("198346918");
    Leg_18.add_attribute("RepoRt", "5126826.500000"); // 1
    Leg_18_set.insert("5126826.500000");
    Leg_18.add_attribute("Fctr", "16731628.690000"); // 1
    Leg_18_set.insert("16731628.690000");
    Leg_18.add_attribute("CrdRtg", "LegCreditRating_t_236318648"); // 1
    Leg_18_set.insert("LegCreditRating_t_236318648");
    Leg_18.add_attribute("Rgstry", "LegInstrRegistry_t_1486746560"); // 1
    Leg_18_set.insert("LegInstrRegistry_t_1486746560");
    Leg_18.add_attribute("Ctry", "1012923752"); // 1
    Leg_18_set.insert("1012923752");
    Leg_18.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_869907780"); // 1
    Leg_18_set.insert("LegStateOrProvinceOfIssue_t_869907780");
    Leg_18.add_attribute("Lcl", "LegLocaleOfIssue_t_817879591"); // 1
    Leg_18_set.insert("LegLocaleOfIssue_t_817879591");
    Leg_18.add_attribute("Redeem", "LegRedemptionDate_t_1765718541"); // 1
    Leg_18_set.insert("LegRedemptionDate_t_1765718541");
    Leg_18.add_attribute("Strk", "4487523.220000"); // 1
    Leg_18_set.insert("4487523.220000");
    Leg_18.add_attribute("StrkCcy", "USD"); // 1
    Leg_18_set.insert("USD");
    Leg_18.add_attribute("OptA", "528347547"); // 1
    Leg_18_set.insert("528347547");
    Leg_18.add_attribute("Cmult", "8307503.980000"); // 1
    Leg_18_set.insert("8307503.980000");
    Leg_18.add_attribute("MultTyp", "2"); // 1
    Leg_18_set.insert("2");
    Leg_18.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_18_set.insert("1");
    Leg_18.add_attribute("UOM", "tn"); // 1
    Leg_18_set.insert("tn");
    Leg_18.add_attribute("UOMQty", "359732.880000"); // 1
    Leg_18_set.insert("359732.880000");
    Leg_18.add_attribute("PxUOM", "Bu"); // 1
    Leg_18_set.insert("Bu");
    Leg_18.add_attribute("PxUOMQty", "7279930.090000"); // 1
    Leg_18_set.insert("7279930.090000");
    Leg_18.add_attribute("TmUnit", "Wk"); // 1
    Leg_18_set.insert("Wk");
    Leg_18.add_attribute("ExerStyle", "1"); // 1
    Leg_18_set.insert("1");
    Leg_18.add_attribute("CpnRt", "8568296.500000"); // 1
    Leg_18_set.insert("8568296.500000");
    Leg_18.add_attribute("Exch", "LegSecurityExchange_t_1344014647"); // 1
    Leg_18_set.insert("LegSecurityExchange_t_1344014647");
    Leg_18.add_attribute("Issr", "LegIssuer_t_1957131497"); // 1
    Leg_18_set.insert("LegIssuer_t_1957131497");
    Leg_18.add_attribute("EncLegIssrLen", "772008244"); // 1
    Leg_18_set.insert("772008244");
    Leg_18.add_attribute("EncLegIssr", "EncodedLegIssuer_t_625373281"); // 1
    Leg_18_set.insert("EncodedLegIssuer_t_625373281");
    Leg_18.add_attribute("Desc", "LegSecurityDesc_t_2089670134"); // 1
    Leg_18_set.insert("LegSecurityDesc_t_2089670134");
    Leg_18.add_attribute("EncLegSecDescLen", "1745921107"); // 1
    Leg_18_set.insert("1745921107");
    Leg_18.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_611945637"); // 1
    Leg_18_set.insert("EncodedLegSecurityDesc_t_611945637");
    Leg_18.add_attribute("RatioQty", "11047150.350000"); // 1
    Leg_18_set.insert("11047150.350000");
    Leg_18.add_attribute("Side", "A"); // 1
    Leg_18_set.insert("A");
    Leg_18.add_attribute("Ccy", "GBP"); // 1
    Leg_18_set.insert("GBP");
    Leg_18.add_attribute("Pool", "LegPool_t_33103025"); // 1
    Leg_18_set.insert("LegPool_t_33103025");
    Leg_18.add_attribute("Dated", "LegDatedDate_t_463891199"); // 1
    Leg_18_set.insert("LegDatedDate_t_463891199");
    Leg_18.add_attribute("CSetMo", "1643318008"); // 1
    Leg_18_set.insert("1643318008");
    Leg_18.add_attribute("IntAcrl", "LegInterestAccrualDate_t_903010805"); // 1
    Leg_18_set.insert("LegInterestAccrualDate_t_903010805");
    Leg_18.add_attribute("PutCall", "1281770791"); // 1
    Leg_18_set.insert("1281770791");
    Leg_18.add_attribute("LegOptionRatio", "12615529.010000"); // 1
    Leg_18_set.insert("12615529.010000");
    Leg_18.add_attribute("Px", "13517631.280000"); // 1
    Leg_18_set.insert("13517631.280000");
    all_values.push_back(Leg_18_set);
    all_compo_names.insert("Leg_18_set");

    {
      xml_element LegAID_18{"LegAID"};
      multiset<string> LegAID_18_set;
      LegAID_18.add_attribute("SecAltID", "LegSecurityAltID_t_1566381543"); // 2
      LegAID_18_set.insert("LegSecurityAltID_t_1566381543");
      LegAID_18.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_18_set.insert("6");
      all_values.push_back(LegAID_18_set);
      all_compo_names.insert("LegAID_18_set");

      Leg_18.add_element(LegAID_18);
    }
    elt.add_element(Leg_18);
  } // end Leg
  { // Undly
    xml_element Undly_12{"Undly"};
    multiset<string> Undly_12_set;
    Undly_12.add_attribute("Sym", "UnderlyingSymbol_t_249648293"); // 1
    Undly_12_set.insert("UnderlyingSymbol_t_249648293");
    Undly_12.add_attribute("Sfx", "CD"); // 1
    Undly_12_set.insert("CD");
    Undly_12.add_attribute("ID", "UnderlyingSecurityID_t_1437185184"); // 1
    Undly_12_set.insert("UnderlyingSecurityID_t_1437185184");
    Undly_12.add_attribute("Src", "C"); // 1
    Undly_12_set.insert("C");
    Undly_12.add_attribute("Prod", "8"); // 1
    Undly_12_set.insert("8");
    Undly_12.add_attribute("CFI", "UnderlyingCFICode_t_10665856"); // 1
    Undly_12_set.insert("UnderlyingCFICode_t_10665856");
    Undly_12.add_attribute("SecTyp", "COFO"); // 1
    Undly_12_set.insert("COFO");
    Undly_12.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1786177660"); // 1
    Undly_12_set.insert("UnderlyingSecuritySubType_t_1786177660");
    Undly_12.add_attribute("MMY", "253485470"); // 1
    Undly_12_set.insert("253485470");
    Undly_12.add_attribute("Mat", "UnderlyingMaturityDate_t_1990485400"); // 1
    Undly_12_set.insert("UnderlyingMaturityDate_t_1990485400");
    Undly_12.add_attribute("MatTm", "982708659"); // 1
    Undly_12_set.insert("982708659");
    Undly_12.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_63133319"); // 1
    Undly_12_set.insert("UnderlyingCouponPaymentDate_t_63133319");
    Undly_12.add_attribute("RestrctTyp", "MR"); // 1
    Undly_12_set.insert("MR");
    Undly_12.add_attribute("Snrty", "SR"); // 1
    Undly_12_set.insert("SR");
    Undly_12.add_attribute("NotlPctOut", "53198.060000"); // 1
    Undly_12_set.insert("53198.060000");
    Undly_12.add_attribute("OrigNotlPctOut", "2134474.560000"); // 1
    Undly_12_set.insert("2134474.560000");
    Undly_12.add_attribute("AttchPnt", "725439.300000"); // 1
    Undly_12_set.insert("725439.300000");
    Undly_12.add_attribute("DetchPnt", "11100348.410000"); // 1
    Undly_12_set.insert("11100348.410000");
    Undly_12.add_attribute("Issued", "UnderlyingIssueDate_t_10231833"); // 1
    Undly_12_set.insert("UnderlyingIssueDate_t_10231833");
    Undly_12.add_attribute("RepoCollSecTyp", "1197172217"); // 1
    Undly_12_set.insert("1197172217");
    Undly_12.add_attribute("RepoTrm", "1740429098"); // 1
    Undly_12_set.insert("1740429098");
    Undly_12.add_attribute("RepoRt", "433348.580000"); // 1
    Undly_12_set.insert("433348.580000");
    Undly_12.add_attribute("Fctr", "16610634.170000"); // 1
    Undly_12_set.insert("16610634.170000");
    Undly_12.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1236263458"); // 1
    Undly_12_set.insert("UnderlyingCreditRating_t_1236263458");
    Undly_12.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_946345663"); // 1
    Undly_12_set.insert("UnderlyingInstrRegistry_t_946345663");
    Undly_12.add_attribute("Ctry", "795350560"); // 1
    Undly_12_set.insert("795350560");
    Undly_12.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_350332712"); // 1
    Undly_12_set.insert("UnderlyingStateOrProvinceOfIssue_t_350332712");
    Undly_12.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_150625143"); // 1
    Undly_12_set.insert("UnderlyingLocaleOfIssue_t_150625143");
    Undly_12.add_attribute("Redeem", "UnderlyingRedemptionDate_t_214248455"); // 1
    Undly_12_set.insert("UnderlyingRedemptionDate_t_214248455");
    Undly_12.add_attribute("StrkPx", "18701342.530000"); // 1
    Undly_12_set.insert("18701342.530000");
    Undly_12.add_attribute("StrkCcy", "JPY"); // 1
    Undly_12_set.insert("JPY");
    Undly_12.add_attribute("OptA", "1905881989"); // 1
    Undly_12_set.insert("1905881989");
    Undly_12.add_attribute("Mult", "13204373.550000"); // 1
    Undly_12_set.insert("13204373.550000");
    Undly_12.add_attribute("MultTyp", "0"); // 1
    Undly_12_set.insert("0");
    Undly_12.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_12_set.insert("3");
    Undly_12.add_attribute("UOM", "USD"); // 1
    Undly_12_set.insert("USD");
    Undly_12.add_attribute("UOMQty", "20032152.390000"); // 1
    Undly_12_set.insert("20032152.390000");
    Undly_12.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_12_set.insert("MMbbl");
    Undly_12.add_attribute("PxUOMQty", "15845886.820000"); // 1
    Undly_12_set.insert("15845886.820000");
    Undly_12.add_attribute("TmUnit", "D"); // 1
    Undly_12_set.insert("D");
    Undly_12.add_attribute("ExerStyle", "2"); // 1
    Undly_12_set.insert("2");
    Undly_12.add_attribute("CpnRt", "16477220.010000"); // 1
    Undly_12_set.insert("16477220.010000");
    Undly_12.add_attribute("Exch", "UnderlyingSecurityExchange_t_313743340"); // 1
    Undly_12_set.insert("UnderlyingSecurityExchange_t_313743340");
    Undly_12.add_attribute("Issr", "UnderlyingIssuer_t_2059603978"); // 1
    Undly_12_set.insert("UnderlyingIssuer_t_2059603978");
    Undly_12.add_attribute("EncUndIssrLen", "1653041807"); // 1
    Undly_12_set.insert("1653041807");
    Undly_12.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_527190796"); // 1
    Undly_12_set.insert("EncodedUnderlyingIssuer_t_527190796");
    Undly_12.add_attribute("Desc", "UnderlyingSecurityDesc_t_2132147908"); // 1
    Undly_12_set.insert("UnderlyingSecurityDesc_t_2132147908");
    Undly_12.add_attribute("EncUndSecDescLen", "615593001"); // 1
    Undly_12_set.insert("615593001");
    Undly_12.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_537422629"); // 1
    Undly_12_set.insert("EncodedUnderlyingSecurityDesc_t_537422629");
    Undly_12.add_attribute("CPPgm", "UnderlyingCPProgram_t_1181836477"); // 1
    Undly_12_set.insert("UnderlyingCPProgram_t_1181836477");
    Undly_12.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_208538451"); // 1
    Undly_12_set.insert("UnderlyingCPRegType_t_208538451");
    Undly_12.add_attribute("AllocPct", "5807574.870000"); // 1
    Undly_12_set.insert("5807574.870000");
    Undly_12.add_attribute("Ccy", "EUR"); // 1
    Undly_12_set.insert("EUR");
    Undly_12.add_attribute("Qty", "15271031.510000"); // 1
    Undly_12_set.insert("15271031.510000");
    Undly_12.add_attribute("SettlTyp", "5"); // 1
    Undly_12_set.insert("5");
    Undly_12.add_attribute("CashAmt", "UnderlyingCashAmount_t_1795134621"); // 1
    Undly_12_set.insert("UnderlyingCashAmount_t_1795134621");
    Undly_12.add_attribute("CashTyp", "FIXED"); // 1
    Undly_12_set.insert("FIXED");
    Undly_12.add_attribute("Px", "17050152.610000"); // 1
    Undly_12_set.insert("17050152.610000");
    Undly_12.add_attribute("DirtPx", "15177852.270000"); // 1
    Undly_12_set.insert("15177852.270000");
    Undly_12.add_attribute("EndPx", "15609804.650000"); // 1
    Undly_12_set.insert("15609804.650000");
    Undly_12.add_attribute("StartVal", "UnderlyingStartValue_t_21428361"); // 1
    Undly_12_set.insert("UnderlyingStartValue_t_21428361");
    Undly_12.add_attribute("CurVal", "UnderlyingCurrentValue_t_1276183568"); // 1
    Undly_12_set.insert("UnderlyingCurrentValue_t_1276183568");
    Undly_12.add_attribute("EndVal", "UnderlyingEndValue_t_733934172"); // 1
    Undly_12_set.insert("UnderlyingEndValue_t_733934172");
    Undly_12.add_attribute("AdjQty", "8909878.500000"); // 1
    Undly_12_set.insert("8909878.500000");
    Undly_12.add_attribute("FxRate", "11063029.340000"); // 1
    Undly_12_set.insert("11063029.340000");
    Undly_12.add_attribute("FxRateCalc", "M"); // 1
    Undly_12_set.insert("M");
    Undly_12.add_attribute("CapValu", "UnderlyingCapValue_t_746719441"); // 1
    Undly_12_set.insert("UnderlyingCapValue_t_746719441");
    Undly_12.add_attribute("SetMeth", "UnderlyingSettlMethod_t_575116312"); // 1
    Undly_12_set.insert("UnderlyingSettlMethod_t_575116312");
    Undly_12.add_attribute("PutCall", "1502142418"); // 1
    Undly_12_set.insert("1502142418");
    all_values.push_back(Undly_12_set);
    all_compo_names.insert("Undly_12_set");

    {
      xml_element UndAID_12{"UndAID"};
      multiset<string> UndAID_12_set;
      UndAID_12.add_attribute("AltID", "UnderlyingSecurityAltID_t_445452785"); // 2
      UndAID_12_set.insert("UnderlyingSecurityAltID_t_445452785");
      UndAID_12.add_attribute("AltIDSrc", "C"); // 2
      UndAID_12_set.insert("C");
      all_values.push_back(UndAID_12_set);
      all_compo_names.insert("UndAID_12_set");

      Undly_12.add_element(UndAID_12);
    }
    {
      xml_element Stip_18{"Stip"};
      multiset<string> Stip_18_set;
      Stip_18.add_attribute("Typ", "SUBSLEFT"); // 2
      Stip_18_set.insert("SUBSLEFT");
      Stip_18.add_attribute("Val", "UnderlyingStipValue_t_759196125"); // 2
      Stip_18_set.insert("UnderlyingStipValue_t_759196125");
      all_values.push_back(Stip_18_set);
      all_compo_names.insert("Stip_18_set");

      Undly_12.add_element(Stip_18);
    }
    {
      xml_element Pty_85{"Pty"};
      multiset<string> Pty_85_set;
      Pty_85.add_attribute("ID", "UnderlyingInstrumentPartyID_t_938758679"); // 2
      Pty_85_set.insert("UnderlyingInstrumentPartyID_t_938758679");
      Pty_85.add_attribute("Src", "A"); // 2
      Pty_85_set.insert("A");
      Pty_85.add_attribute("R", "11"); // 2
      Pty_85_set.insert("11");
      all_values.push_back(Pty_85_set);
      all_compo_names.insert("Pty_85_set");

      {
        xml_element Sub_85{"Sub"};
        multiset<string> Sub_85_set;
        Sub_85.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_923422939"); // 3
        Sub_85_set.insert("UnderlyingInstrumentPartySubID_t_923422939");
        Sub_85.add_attribute("Typ", "15"); // 3
        Sub_85_set.insert("15");
        all_values.push_back(Sub_85_set);
        all_compo_names.insert("Sub_85_set");

        Pty_85.add_element(Sub_85);
      }
      Undly_12.add_element(Pty_85);
    }
    elt.add_element(Undly_12);
  } // end Undly
  { // Undly
    xml_element Undly_13{"Undly"};
    multiset<string> Undly_13_set;
    Undly_13.add_attribute("Sym", "UnderlyingSymbol_t_1823809551"); // 1
    Undly_13_set.insert("UnderlyingSymbol_t_1823809551");
    Undly_13.add_attribute("Sfx", "WI"); // 1
    Undly_13_set.insert("WI");
    Undly_13.add_attribute("ID", "UnderlyingSecurityID_t_1332070383"); // 1
    Undly_13_set.insert("UnderlyingSecurityID_t_1332070383");
    Undly_13.add_attribute("Src", "G"); // 1
    Undly_13_set.insert("G");
    Undly_13.add_attribute("Prod", "5"); // 1
    Undly_13_set.insert("5");
    Undly_13.add_attribute("CFI", "UnderlyingCFICode_t_629388644"); // 1
    Undly_13_set.insert("UnderlyingCFICode_t_629388644");
    Undly_13.add_attribute("SecTyp", "SLQN"); // 1
    Undly_13_set.insert("SLQN");
    Undly_13.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2143958822"); // 1
    Undly_13_set.insert("UnderlyingSecuritySubType_t_2143958822");
    Undly_13.add_attribute("MMY", "277039618"); // 1
    Undly_13_set.insert("277039618");
    Undly_13.add_attribute("Mat", "UnderlyingMaturityDate_t_1314431188"); // 1
    Undly_13_set.insert("UnderlyingMaturityDate_t_1314431188");
    Undly_13.add_attribute("MatTm", "1701490435"); // 1
    Undly_13_set.insert("1701490435");
    Undly_13.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1794824845"); // 1
    Undly_13_set.insert("UnderlyingCouponPaymentDate_t_1794824845");
    Undly_13.add_attribute("RestrctTyp", "MM"); // 1
    Undly_13_set.insert("MM");
    Undly_13.add_attribute("Snrty", "SB"); // 1
    Undly_13_set.insert("SB");
    Undly_13.add_attribute("NotlPctOut", "9235247.650000"); // 1
    Undly_13_set.insert("9235247.650000");
    Undly_13.add_attribute("OrigNotlPctOut", "14618621.780000"); // 1
    Undly_13_set.insert("14618621.780000");
    Undly_13.add_attribute("AttchPnt", "4664229.990000"); // 1
    Undly_13_set.insert("4664229.990000");
    Undly_13.add_attribute("DetchPnt", "20298276.990000"); // 1
    Undly_13_set.insert("20298276.990000");
    Undly_13.add_attribute("Issued", "UnderlyingIssueDate_t_1379415914"); // 1
    Undly_13_set.insert("UnderlyingIssueDate_t_1379415914");
    Undly_13.add_attribute("RepoCollSecTyp", "1213142441"); // 1
    Undly_13_set.insert("1213142441");
    Undly_13.add_attribute("RepoTrm", "457460363"); // 1
    Undly_13_set.insert("457460363");
    Undly_13.add_attribute("RepoRt", "7340746.840000"); // 1
    Undly_13_set.insert("7340746.840000");
    Undly_13.add_attribute("Fctr", "16585952.260000"); // 1
    Undly_13_set.insert("16585952.260000");
    Undly_13.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1484098713"); // 1
    Undly_13_set.insert("UnderlyingCreditRating_t_1484098713");
    Undly_13.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1736455456"); // 1
    Undly_13_set.insert("UnderlyingInstrRegistry_t_1736455456");
    Undly_13.add_attribute("Ctry", "270307703"); // 1
    Undly_13_set.insert("270307703");
    Undly_13.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_275373744"); // 1
    Undly_13_set.insert("UnderlyingStateOrProvinceOfIssue_t_275373744");
    Undly_13.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_96910739"); // 1
    Undly_13_set.insert("UnderlyingLocaleOfIssue_t_96910739");
    Undly_13.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1556694625"); // 1
    Undly_13_set.insert("UnderlyingRedemptionDate_t_1556694625");
    Undly_13.add_attribute("StrkPx", "11987966.840000"); // 1
    Undly_13_set.insert("11987966.840000");
    Undly_13.add_attribute("StrkCcy", "CHF"); // 1
    Undly_13_set.insert("CHF");
    Undly_13.add_attribute("OptA", "1156572453"); // 1
    Undly_13_set.insert("1156572453");
    Undly_13.add_attribute("Mult", "4050294.060000"); // 1
    Undly_13_set.insert("4050294.060000");
    Undly_13.add_attribute("MultTyp", "2"); // 1
    Undly_13_set.insert("2");
    Undly_13.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_13_set.insert("3");
    Undly_13.add_attribute("UOM", "Gal"); // 1
    Undly_13_set.insert("Gal");
    Undly_13.add_attribute("UOMQty", "11268068.140000"); // 1
    Undly_13_set.insert("11268068.140000");
    Undly_13.add_attribute("PxUOM", "Alw"); // 1
    Undly_13_set.insert("Alw");
    Undly_13.add_attribute("PxUOMQty", "13114576.680000"); // 1
    Undly_13_set.insert("13114576.680000");
    Undly_13.add_attribute("TmUnit", "Mo"); // 1
    Undly_13_set.insert("Mo");
    Undly_13.add_attribute("ExerStyle", "2"); // 1
    Undly_13_set.insert("2");
    Undly_13.add_attribute("CpnRt", "9587988.650000"); // 1
    Undly_13_set.insert("9587988.650000");
    Undly_13.add_attribute("Exch", "UnderlyingSecurityExchange_t_1021682360"); // 1
    Undly_13_set.insert("UnderlyingSecurityExchange_t_1021682360");
    Undly_13.add_attribute("Issr", "UnderlyingIssuer_t_935681579"); // 1
    Undly_13_set.insert("UnderlyingIssuer_t_935681579");
    Undly_13.add_attribute("EncUndIssrLen", "1882323631"); // 1
    Undly_13_set.insert("1882323631");
    Undly_13.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_336060891"); // 1
    Undly_13_set.insert("EncodedUnderlyingIssuer_t_336060891");
    Undly_13.add_attribute("Desc", "UnderlyingSecurityDesc_t_1402104578"); // 1
    Undly_13_set.insert("UnderlyingSecurityDesc_t_1402104578");
    Undly_13.add_attribute("EncUndSecDescLen", "1764667682"); // 1
    Undly_13_set.insert("1764667682");
    Undly_13.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1715476805"); // 1
    Undly_13_set.insert("EncodedUnderlyingSecurityDesc_t_1715476805");
    Undly_13.add_attribute("CPPgm", "UnderlyingCPProgram_t_467763371"); // 1
    Undly_13_set.insert("UnderlyingCPProgram_t_467763371");
    Undly_13.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_74644398"); // 1
    Undly_13_set.insert("UnderlyingCPRegType_t_74644398");
    Undly_13.add_attribute("AllocPct", "3020678.420000"); // 1
    Undly_13_set.insert("3020678.420000");
    Undly_13.add_attribute("Ccy", "CHF"); // 1
    Undly_13_set.insert("CHF");
    Undly_13.add_attribute("Qty", "20385232.980000"); // 1
    Undly_13_set.insert("20385232.980000");
    Undly_13.add_attribute("SettlTyp", "4"); // 1
    Undly_13_set.insert("4");
    Undly_13.add_attribute("CashAmt", "UnderlyingCashAmount_t_1834116855"); // 1
    Undly_13_set.insert("UnderlyingCashAmount_t_1834116855");
    Undly_13.add_attribute("CashTyp", "DIFF"); // 1
    Undly_13_set.insert("DIFF");
    Undly_13.add_attribute("Px", "18058772.780000"); // 1
    Undly_13_set.insert("18058772.780000");
    Undly_13.add_attribute("DirtPx", "8854298.910000"); // 1
    Undly_13_set.insert("8854298.910000");
    Undly_13.add_attribute("EndPx", "12083930.600000"); // 1
    Undly_13_set.insert("12083930.600000");
    Undly_13.add_attribute("StartVal", "UnderlyingStartValue_t_891414159"); // 1
    Undly_13_set.insert("UnderlyingStartValue_t_891414159");
    Undly_13.add_attribute("CurVal", "UnderlyingCurrentValue_t_2042002344"); // 1
    Undly_13_set.insert("UnderlyingCurrentValue_t_2042002344");
    Undly_13.add_attribute("EndVal", "UnderlyingEndValue_t_1613422466"); // 1
    Undly_13_set.insert("UnderlyingEndValue_t_1613422466");
    Undly_13.add_attribute("AdjQty", "2340344.310000"); // 1
    Undly_13_set.insert("2340344.310000");
    Undly_13.add_attribute("FxRate", "17042831.650000"); // 1
    Undly_13_set.insert("17042831.650000");
    Undly_13.add_attribute("FxRateCalc", "M"); // 1
    Undly_13_set.insert("M");
    Undly_13.add_attribute("CapValu", "UnderlyingCapValue_t_1360841245"); // 1
    Undly_13_set.insert("UnderlyingCapValue_t_1360841245");
    Undly_13.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1363039159"); // 1
    Undly_13_set.insert("UnderlyingSettlMethod_t_1363039159");
    Undly_13.add_attribute("PutCall", "1811814537"); // 1
    Undly_13_set.insert("1811814537");
    all_values.push_back(Undly_13_set);
    all_compo_names.insert("Undly_13_set");

    {
      xml_element UndAID_13{"UndAID"};
      multiset<string> UndAID_13_set;
      UndAID_13.add_attribute("AltID", "UnderlyingSecurityAltID_t_1654595600"); // 2
      UndAID_13_set.insert("UnderlyingSecurityAltID_t_1654595600");
      UndAID_13.add_attribute("AltIDSrc", "C"); // 2
      UndAID_13_set.insert("C");
      all_values.push_back(UndAID_13_set);
      all_compo_names.insert("UndAID_13_set");

      Undly_13.add_element(UndAID_13);
    }
    {
      xml_element Stip_19{"Stip"};
      multiset<string> Stip_19_set;
      Stip_19.add_attribute("Typ", "ORDRINCR"); // 2
      Stip_19_set.insert("ORDRINCR");
      Stip_19.add_attribute("Val", "UnderlyingStipValue_t_528794312"); // 2
      Stip_19_set.insert("UnderlyingStipValue_t_528794312");
      all_values.push_back(Stip_19_set);
      all_compo_names.insert("Stip_19_set");

      Undly_13.add_element(Stip_19);
    }
    {
      xml_element Pty_86{"Pty"};
      multiset<string> Pty_86_set;
      Pty_86.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1511483520"); // 2
      Pty_86_set.insert("UnderlyingInstrumentPartyID_t_1511483520");
      Pty_86.add_attribute("Src", "C"); // 2
      Pty_86_set.insert("C");
      Pty_86.add_attribute("R", "31"); // 2
      Pty_86_set.insert("31");
      all_values.push_back(Pty_86_set);
      all_compo_names.insert("Pty_86_set");

      {
        xml_element Sub_86{"Sub"};
        multiset<string> Sub_86_set;
        Sub_86.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_766104451"); // 3
        Sub_86_set.insert("UnderlyingInstrumentPartySubID_t_766104451");
        Sub_86.add_attribute("Typ", "11"); // 3
        Sub_86_set.insert("11");
        all_values.push_back(Sub_86_set);
        all_compo_names.insert("Sub_86_set");

        Pty_86.add_element(Sub_86);
      }
      Undly_13.add_element(Pty_86);
    }
    elt.add_element(Undly_13);
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
