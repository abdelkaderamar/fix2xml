#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralResponse_message_t_0;
  elt.add_attribute("RespID", "CollRespID_t_476177096"); // 0
  CollateralResponse_message_t_0.insert("CollRespID_t_476177096");
  elt.add_attribute("ID", "CollAsgnID_t_2143212316"); // 0
  CollateralResponse_message_t_0.insert("CollAsgnID_t_2143212316");
  elt.add_attribute("ReqID", "CollReqID_t_588111001"); // 0
  CollateralResponse_message_t_0.insert("CollReqID_t_588111001");
  elt.add_attribute("AsgnRsn", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("TransTyp", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("RespTyp", "2"); // 0
  CollateralResponse_message_t_0.insert("2");
  elt.add_attribute("RejRsn", "4"); // 0
  CollateralResponse_message_t_0.insert("4");
  elt.add_attribute("TxnTm", "TransactTime_t_137900038"); // 0
  CollateralResponse_message_t_0.insert("TransactTime_t_137900038");
  elt.add_attribute("ApplTyp", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("FinclStat", "3"); // 0
  CollateralResponse_message_t_0.insert("3");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1388680942"); // 0
  CollateralResponse_message_t_0.insert("ClearingBusinessDate_t_1388680942");
  elt.add_attribute("Acct", "Account_t_509815117"); // 0
  CollateralResponse_message_t_0.insert("Account_t_509815117");
  elt.add_attribute("AcctTyp", "7"); // 0
  CollateralResponse_message_t_0.insert("7");
  elt.add_attribute("ClOrdID", "ClOrdID_t_728179977"); // 0
  CollateralResponse_message_t_0.insert("ClOrdID_t_728179977");
  elt.add_attribute("OrdID", "OrderID_t_96289720"); // 0
  CollateralResponse_message_t_0.insert("OrderID_t_96289720");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_2001480188"); // 0
  CollateralResponse_message_t_0.insert("SecondaryOrderID_t_2001480188");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_125578897"); // 0
  CollateralResponse_message_t_0.insert("SecondaryClOrdID_t_125578897");
  elt.add_attribute("SettlDt", "SettlDate_t_1962186380"); // 0
  CollateralResponse_message_t_0.insert("SettlDate_t_1962186380");
  elt.add_attribute("Qty", "18107999.350000"); // 0
  CollateralResponse_message_t_0.insert("18107999.350000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("Ccy", "USD"); // 0
  CollateralResponse_message_t_0.insert("USD");
  elt.add_attribute("MgnExcess", "MarginExcess_t_2020230156"); // 0
  CollateralResponse_message_t_0.insert("MarginExcess_t_2020230156");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_849659069"); // 0
  CollateralResponse_message_t_0.insert("TotalNetValue_t_849659069");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_395918710"); // 0
  CollateralResponse_message_t_0.insert("CashOutstanding_t_395918710");
  elt.add_attribute("Side", "3"); // 0
  CollateralResponse_message_t_0.insert("3");
  elt.add_attribute("Px", "6829810.200000"); // 0
  CollateralResponse_message_t_0.insert("6829810.200000");
  elt.add_attribute("PxTyp", "13"); // 0
  CollateralResponse_message_t_0.insert("13");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1125725608"); // 0
  CollateralResponse_message_t_0.insert("AccruedInterestAmt_t_1125725608");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_2081294410"); // 0
  CollateralResponse_message_t_0.insert("EndAccruedInterestAmt_t_2081294410");
  elt.add_attribute("StartCsh", "StartCash_t_720183758"); // 0
  CollateralResponse_message_t_0.insert("StartCash_t_720183758");
  elt.add_attribute("EndCsh", "EndCash_t_1601902704"); // 0
  CollateralResponse_message_t_0.insert("EndCash_t_1601902704");
  elt.add_attribute("Txt", "Text_t_2077023079"); // 0
  CollateralResponse_message_t_0.insert("Text_t_2077023079");
  elt.add_attribute("EncTxtLen", "1308294759"); // 0
  CollateralResponse_message_t_0.insert("1308294759");
  elt.add_attribute("EncTxt", "EncodedText_t_1292779368"); // 0
  CollateralResponse_message_t_0.insert("EncodedText_t_1292779368");
  all_values.push_back(CollateralResponse_message_t_0);
  all_compo_names.insert("CollateralResponse_message_t");

  { // Hdr
    xml_element Hdr_19{"Hdr"};
    multiset<string> Hdr_19_set;
    Hdr_19.add_attribute("SeqNum", "201153596"); // 1
    Hdr_19_set.insert("201153596");
    Hdr_19.add_attribute("SID", "SenderCompID_t_1226359034"); // 1
    Hdr_19_set.insert("SenderCompID_t_1226359034");
    Hdr_19.add_attribute("TID", "TargetCompID_t_346465667"); // 1
    Hdr_19_set.insert("TargetCompID_t_346465667");
    Hdr_19.add_attribute("OBID", "OnBehalfOfCompID_t_339053634"); // 1
    Hdr_19_set.insert("OnBehalfOfCompID_t_339053634");
    Hdr_19.add_attribute("D2ID", "DeliverToCompID_t_732618086"); // 1
    Hdr_19_set.insert("DeliverToCompID_t_732618086");
    Hdr_19.add_attribute("SSub", "SenderSubID_t_175515668"); // 1
    Hdr_19_set.insert("SenderSubID_t_175515668");
    Hdr_19.add_attribute("SLoc", "SenderLocationID_t_1727734576"); // 1
    Hdr_19_set.insert("SenderLocationID_t_1727734576");
    Hdr_19.add_attribute("TSub", "TargetSubID_t_1242433203"); // 1
    Hdr_19_set.insert("TargetSubID_t_1242433203");
    Hdr_19.add_attribute("TLoc", "TargetLocationID_t_948268388"); // 1
    Hdr_19_set.insert("TargetLocationID_t_948268388");
    Hdr_19.add_attribute("OBSub", "OnBehalfOfSubID_t_308430906"); // 1
    Hdr_19_set.insert("OnBehalfOfSubID_t_308430906");
    Hdr_19.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1338722923"); // 1
    Hdr_19_set.insert("OnBehalfOfLocationID_t_1338722923");
    Hdr_19.add_attribute("D2Sub", "DeliverToSubID_t_802264928"); // 1
    Hdr_19_set.insert("DeliverToSubID_t_802264928");
    Hdr_19.add_attribute("D2Loc", "DeliverToLocationID_t_434009803"); // 1
    Hdr_19_set.insert("DeliverToLocationID_t_434009803");
    Hdr_19.add_attribute("PosDup", "Y"); // 1
    Hdr_19_set.insert("Y");
    Hdr_19.add_attribute("PosRsnd", "Y"); // 1
    Hdr_19_set.insert("Y");
    Hdr_19.add_attribute("Snt", "SendingTime_t_1280558155"); // 1
    Hdr_19_set.insert("SendingTime_t_1280558155");
    Hdr_19.add_attribute("OrigSnt", "OrigSendingTime_t_761125054"); // 1
    Hdr_19_set.insert("OrigSendingTime_t_761125054");
    Hdr_19.add_attribute("MsgEncd", "MessageEncoding_t_1854106838"); // 1
    Hdr_19_set.insert("MessageEncoding_t_1854106838");
    all_values.push_back(Hdr_19_set);
    all_compo_names.insert("Hdr_19_set");

    {
      xml_element Hop_19{"Hop"};
      multiset<string> Hop_19_set;
      Hop_19.add_attribute("ID", "HopCompID_t_1153304663"); // 2
      Hop_19_set.insert("HopCompID_t_1153304663");
      Hop_19.add_attribute("Ref", "1610784123"); // 2
      Hop_19_set.insert("1610784123");
      Hop_19.add_attribute("Snt", "HopSendingTime_t_102541900"); // 2
      Hop_19_set.insert("HopSendingTime_t_102541900");
      all_values.push_back(Hop_19_set);
      all_compo_names.insert("Hop_19_set");

      Hdr_19.add_element(Hop_19);
    }
    elt.add_element(Hdr_19);
  } // end Hdr
  { // Pty
    xml_element Pty_94{"Pty"};
    multiset<string> Pty_94_set;
    Pty_94.add_attribute("ID", "PartyID_t_146281496"); // 1
    Pty_94_set.insert("PartyID_t_146281496");
    Pty_94.add_attribute("Src", "G"); // 1
    Pty_94_set.insert("G");
    Pty_94.add_attribute("R", "10"); // 1
    Pty_94_set.insert("10");
    all_values.push_back(Pty_94_set);
    all_compo_names.insert("Pty_94_set");

    {
      xml_element Sub_94{"Sub"};
      multiset<string> Sub_94_set;
      Sub_94.add_attribute("ID", "PartySubID_t_80092258"); // 2
      Sub_94_set.insert("PartySubID_t_80092258");
      Sub_94.add_attribute("Typ", "8"); // 2
      Sub_94_set.insert("8");
      all_values.push_back(Sub_94_set);
      all_compo_names.insert("Sub_94_set");

      Pty_94.add_element(Sub_94);
    }
    elt.add_element(Pty_94);
  } // end Pty
  { // Pty
    xml_element Pty_95{"Pty"};
    multiset<string> Pty_95_set;
    Pty_95.add_attribute("ID", "PartyID_t_1698768482"); // 1
    Pty_95_set.insert("PartyID_t_1698768482");
    Pty_95.add_attribute("Src", "G"); // 1
    Pty_95_set.insert("G");
    Pty_95.add_attribute("R", "46"); // 1
    Pty_95_set.insert("46");
    all_values.push_back(Pty_95_set);
    all_compo_names.insert("Pty_95_set");

    {
      xml_element Sub_95{"Sub"};
      multiset<string> Sub_95_set;
      Sub_95.add_attribute("ID", "PartySubID_t_844064202"); // 2
      Sub_95_set.insert("PartySubID_t_844064202");
      Sub_95.add_attribute("Typ", "31"); // 2
      Sub_95_set.insert("31");
      all_values.push_back(Sub_95_set);
      all_compo_names.insert("Sub_95_set");

      Pty_95.add_element(Sub_95);
    }
    elt.add_element(Pty_95);
  } // end Pty
  { // Pty
    xml_element Pty_96{"Pty"};
    multiset<string> Pty_96_set;
    Pty_96.add_attribute("ID", "PartyID_t_250932637"); // 1
    Pty_96_set.insert("PartyID_t_250932637");
    Pty_96.add_attribute("Src", "6"); // 1
    Pty_96_set.insert("6");
    Pty_96.add_attribute("R", "9"); // 1
    Pty_96_set.insert("9");
    all_values.push_back(Pty_96_set);
    all_compo_names.insert("Pty_96_set");

    {
      xml_element Sub_96{"Sub"};
      multiset<string> Sub_96_set;
      Sub_96.add_attribute("ID", "PartySubID_t_983550723"); // 2
      Sub_96_set.insert("PartySubID_t_983550723");
      Sub_96.add_attribute("Typ", "19"); // 2
      Sub_96_set.insert("19");
      all_values.push_back(Sub_96_set);
      all_compo_names.insert("Sub_96_set");

      Pty_96.add_element(Sub_96);
    }
    elt.add_element(Pty_96);
  } // end Pty
  { // CollExc
    xml_element CollExc_11{"CollExc"};
    multiset<string> CollExc_11_set;
    CollExc_11.add_attribute("ExecID", "ExecID_t_78500279"); // 1
    CollExc_11_set.insert("ExecID_t_78500279");
    all_values.push_back(CollExc_11_set);
    all_compo_names.insert("CollExc_11_set");

    elt.add_element(CollExc_11);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_10{"TrdColl"};
    multiset<string> TrdColl_10_set;
    TrdColl_10.add_attribute("RptID", "TradeReportID_t_438520755"); // 1
    TrdColl_10_set.insert("TradeReportID_t_438520755");
    TrdColl_10.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1417223202"); // 1
    TrdColl_10_set.insert("SecondaryTradeReportID_t_1417223202");
    all_values.push_back(TrdColl_10_set);
    all_compo_names.insert("TrdColl_10_set");

    elt.add_element(TrdColl_10);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_11{"TrdColl"};
    multiset<string> TrdColl_11_set;
    TrdColl_11.add_attribute("RptID", "TradeReportID_t_969095205"); // 1
    TrdColl_11_set.insert("TradeReportID_t_969095205");
    TrdColl_11.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_872530558"); // 1
    TrdColl_11_set.insert("SecondaryTradeReportID_t_872530558");
    all_values.push_back(TrdColl_11_set);
    all_compo_names.insert("TrdColl_11_set");

    elt.add_element(TrdColl_11);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_11{"Instrmt"};
    multiset<string> Instrmt_11_set;
    Instrmt_11.add_attribute("Sym", "Symbol_t_423165210"); // 1
    Instrmt_11_set.insert("Symbol_t_423165210");
    Instrmt_11.add_attribute("Sfx", "WI"); // 1
    Instrmt_11_set.insert("WI");
    Instrmt_11.add_attribute("ID", "SecurityID_t_5605065"); // 1
    Instrmt_11_set.insert("SecurityID_t_5605065");
    Instrmt_11.add_attribute("Src", "F"); // 1
    Instrmt_11_set.insert("F");
    Instrmt_11.add_attribute("Prod", "7"); // 1
    Instrmt_11_set.insert("7");
    Instrmt_11.add_attribute("ProdCmplx", "ProductComplex_t_1158909728"); // 1
    Instrmt_11_set.insert("ProductComplex_t_1158909728");
    Instrmt_11.add_attribute("SecGrp", "SecurityGroup_t_647590740"); // 1
    Instrmt_11_set.insert("SecurityGroup_t_647590740");
    Instrmt_11.add_attribute("CFI", "CFICode_t_1243841511"); // 1
    Instrmt_11_set.insert("CFICode_t_1243841511");
    Instrmt_11.add_attribute("SecTyp", "?"); // 1
    Instrmt_11_set.insert("?");
    Instrmt_11.add_attribute("SubTyp", "SecuritySubType_t_793872236"); // 1
    Instrmt_11_set.insert("SecuritySubType_t_793872236");
    Instrmt_11.add_attribute("MMY", "387420244"); // 1
    Instrmt_11_set.insert("387420244");
    Instrmt_11.add_attribute("MatDt", "MaturityDate_t_226915675"); // 1
    Instrmt_11_set.insert("MaturityDate_t_226915675");
    Instrmt_11.add_attribute("MatTm", "873964494"); // 1
    Instrmt_11_set.insert("873964494");
    Instrmt_11.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_251182736"); // 1
    Instrmt_11_set.insert("SettleOnOpenFlag_t_251182736");
    Instrmt_11.add_attribute("AsgnMeth", "1925684157"); // 1
    Instrmt_11_set.insert("1925684157");
    Instrmt_11.add_attribute("Status", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("CpnPmt", "CouponPaymentDate_t_1423239988"); // 1
    Instrmt_11_set.insert("CouponPaymentDate_t_1423239988");
    Instrmt_11.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_11_set.insert("XR");
    Instrmt_11.add_attribute("Snrty", "SR"); // 1
    Instrmt_11_set.insert("SR");
    Instrmt_11.add_attribute("NotlPctOut", "16741726.250000"); // 1
    Instrmt_11_set.insert("16741726.250000");
    Instrmt_11.add_attribute("OrigNotlPctOut", "18127945.810000"); // 1
    Instrmt_11_set.insert("18127945.810000");
    Instrmt_11.add_attribute("AttchPnt", "16442203.900000"); // 1
    Instrmt_11_set.insert("16442203.900000");
    Instrmt_11.add_attribute("DetchPnt", "5102397.010000"); // 1
    Instrmt_11_set.insert("5102397.010000");
    Instrmt_11.add_attribute("Issued", "IssueDate_t_1031356470"); // 1
    Instrmt_11_set.insert("IssueDate_t_1031356470");
    Instrmt_11.add_attribute("RepoCollSecTyp", "1774310239"); // 1
    Instrmt_11_set.insert("1774310239");
    Instrmt_11.add_attribute("RepoTrm", "588739980"); // 1
    Instrmt_11_set.insert("588739980");
    Instrmt_11.add_attribute("RepoRt", "11981867.480000"); // 1
    Instrmt_11_set.insert("11981867.480000");
    Instrmt_11.add_attribute("Fctr", "653473.460000"); // 1
    Instrmt_11_set.insert("653473.460000");
    Instrmt_11.add_attribute("CrdRtg", "CreditRating_t_2005963182"); // 1
    Instrmt_11_set.insert("CreditRating_t_2005963182");
    Instrmt_11.add_attribute("Rgstry", "InstrRegistry_t_19798305"); // 1
    Instrmt_11_set.insert("InstrRegistry_t_19798305");
    Instrmt_11.add_attribute("IssuCtry", "937877904"); // 1
    Instrmt_11_set.insert("937877904");
    Instrmt_11.add_attribute("StPrv", "StateOrProvinceOfIssue_t_281644744"); // 1
    Instrmt_11_set.insert("StateOrProvinceOfIssue_t_281644744");
    Instrmt_11.add_attribute("Lcl", "LocaleOfIssue_t_1454474726"); // 1
    Instrmt_11_set.insert("LocaleOfIssue_t_1454474726");
    Instrmt_11.add_attribute("Redeem", "RedemptionDate_t_943482969"); // 1
    Instrmt_11_set.insert("RedemptionDate_t_943482969");
    Instrmt_11.add_attribute("StrkPx", "14659350.090000"); // 1
    Instrmt_11_set.insert("14659350.090000");
    Instrmt_11.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_11_set.insert("CAN");
    Instrmt_11.add_attribute("StrkMult", "21135257.490000"); // 1
    Instrmt_11_set.insert("21135257.490000");
    Instrmt_11.add_attribute("StrkValu", "16921322.000000"); // 1
    Instrmt_11_set.insert("16921322.000000");
    Instrmt_11.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_11_set.insert("4");
    Instrmt_11.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_11_set.insert("3");
    Instrmt_11.add_attribute("StrkPxBndryPrcsn", "20795524.450000"); // 1
    Instrmt_11_set.insert("20795524.450000");
    Instrmt_11.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_11_set.insert("3");
    Instrmt_11.add_attribute("OptAt", "1633878831"); // 1
    Instrmt_11_set.insert("1633878831");
    Instrmt_11.add_attribute("Mult", "1832515.330000"); // 1
    Instrmt_11_set.insert("1832515.330000");
    Instrmt_11.add_attribute("MultTyp", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("MinPxIncr", "16064915.210000"); // 1
    Instrmt_11_set.insert("16064915.210000");
    Instrmt_11.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_712339842"); // 1
    Instrmt_11_set.insert("MinPriceIncrementAmount_t_712339842");
    Instrmt_11.add_attribute("UOM", "tn"); // 1
    Instrmt_11_set.insert("tn");
    Instrmt_11.add_attribute("UOMQty", "11331804.990000"); // 1
    Instrmt_11_set.insert("11331804.990000");
    Instrmt_11.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_11_set.insert("oz_tr");
    Instrmt_11.add_attribute("PxUOMQty", "9611095.800000"); // 1
    Instrmt_11_set.insert("9611095.800000");
    Instrmt_11.add_attribute("SettlMeth", "C"); // 1
    Instrmt_11_set.insert("C");
    Instrmt_11.add_attribute("ExerStyle", "0"); // 1
    Instrmt_11_set.insert("0");
    Instrmt_11.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_11_set.insert("3");
    Instrmt_11.add_attribute("OptPayAmt", "OptPayoutAmount_t_84676532"); // 1
    Instrmt_11_set.insert("OptPayoutAmount_t_84676532");
    Instrmt_11.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_11_set.insert("INT");
    Instrmt_11.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_11_set.insert("CDS");
    Instrmt_11.add_attribute("ListMeth", "0"); // 1
    Instrmt_11_set.insert("0");
    Instrmt_11.add_attribute("CapPx", "4795086.510000"); // 1
    Instrmt_11_set.insert("4795086.510000");
    Instrmt_11.add_attribute("FlrPx", "15911614.220000"); // 1
    Instrmt_11_set.insert("15911614.220000");
    Instrmt_11.add_attribute("PutCall", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("FlexInd", "true"); // 1
    Instrmt_11_set.insert("true");
    Instrmt_11.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_11_set.insert("true");
    Instrmt_11.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_11_set.insert("Wk");
    Instrmt_11.add_attribute("CpnRt", "2347904.190000"); // 1
    Instrmt_11_set.insert("2347904.190000");
    Instrmt_11.add_attribute("Exch", "SecurityExchange_t_342069793"); // 1
    Instrmt_11_set.insert("SecurityExchange_t_342069793");
    Instrmt_11.add_attribute("PosLmt", "1656777921"); // 1
    Instrmt_11_set.insert("1656777921");
    Instrmt_11.add_attribute("NTPosLmt", "1926922620"); // 1
    Instrmt_11_set.insert("1926922620");
    Instrmt_11.add_attribute("Issr", "Issuer_t_427028740"); // 1
    Instrmt_11_set.insert("Issuer_t_427028740");
    Instrmt_11.add_attribute("EncIssrLen", "269208610"); // 1
    Instrmt_11_set.insert("269208610");
    Instrmt_11.add_attribute("EncIssr", "EncodedIssuer_t_1858991417"); // 1
    Instrmt_11_set.insert("EncodedIssuer_t_1858991417");
    Instrmt_11.add_attribute("Desc", "SecurityDesc_t_738903362"); // 1
    Instrmt_11_set.insert("SecurityDesc_t_738903362");
    Instrmt_11.add_attribute("EncSecDescLen", "1903087441"); // 1
    Instrmt_11_set.insert("1903087441");
    Instrmt_11.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2042242950"); // 1
    Instrmt_11_set.insert("EncodedSecurityDesc_t_2042242950");
    Instrmt_11.add_attribute("Pool", "Pool_t_828978493"); // 1
    Instrmt_11_set.insert("Pool_t_828978493");
    Instrmt_11.add_attribute("CSetMo", "125595161"); // 1
    Instrmt_11_set.insert("125595161");
    Instrmt_11.add_attribute("CPPgm", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("CPRegT", "CPRegType_t_1541318336"); // 1
    Instrmt_11_set.insert("CPRegType_t_1541318336");
    Instrmt_11.add_attribute("Dated", "DatedDate_t_1589967998"); // 1
    Instrmt_11_set.insert("DatedDate_t_1589967998");
    Instrmt_11.add_attribute("IntAcrl", "InterestAccrualDate_t_486947675"); // 1
    Instrmt_11_set.insert("InterestAccrualDate_t_486947675");
    all_values.push_back(Instrmt_11_set);
    all_compo_names.insert("Instrmt_11_set");

    {
      xml_element AID_11{"AID"};
      multiset<string> AID_11_set;
      AID_11.add_attribute("AltID", "SecurityAltID_t_1918969111"); // 2
      AID_11_set.insert("SecurityAltID_t_1918969111");
      AID_11.add_attribute("AltIDSrc", "F"); // 2
      AID_11_set.insert("F");
      all_values.push_back(AID_11_set);
      all_compo_names.insert("AID_11_set");

      Instrmt_11.add_element(AID_11);
    }
    {
      xml_element SecXML_11{"SecXML"};
      multiset<string> SecXML_11_set;
      SecXML_11.add_attribute("Schema", "SecurityXMLSchema_t_2130367875"); // 2
      SecXML_11_set.insert("SecurityXMLSchema_t_2130367875");
      all_values.push_back(SecXML_11_set);
      all_compo_names.insert("SecXML_11_set");

      Instrmt_11.add_element(SecXML_11);
    }
    {
      xml_element Evnt_11{"Evnt"};
      multiset<string> Evnt_11_set;
      Evnt_11.add_attribute("EventTyp", "9"); // 2
      Evnt_11_set.insert("9");
      Evnt_11.add_attribute("Dt", "EventDate_t_991530102"); // 2
      Evnt_11_set.insert("EventDate_t_991530102");
      Evnt_11.add_attribute("Tm", "EventTime_t_67560759"); // 2
      Evnt_11_set.insert("EventTime_t_67560759");
      Evnt_11.add_attribute("Px", "16402030.550000"); // 2
      Evnt_11_set.insert("16402030.550000");
      Evnt_11.add_attribute("Txt", "EventText_t_1644813620"); // 2
      Evnt_11_set.insert("EventText_t_1644813620");
      all_values.push_back(Evnt_11_set);
      all_compo_names.insert("Evnt_11_set");

      Instrmt_11.add_element(Evnt_11);
    }
    {
      xml_element Pty_97{"Pty"};
      multiset<string> Pty_97_set;
      Pty_97.add_attribute("ID", "InstrumentPartyID_t_10716825"); // 2
      Pty_97_set.insert("InstrumentPartyID_t_10716825");
      Pty_97.add_attribute("Src", "A"); // 2
      Pty_97_set.insert("A");
      Pty_97.add_attribute("R", "76"); // 2
      Pty_97_set.insert("76");
      all_values.push_back(Pty_97_set);
      all_compo_names.insert("Pty_97_set");

      {
        xml_element Sub_97{"Sub"};
        multiset<string> Sub_97_set;
        Sub_97.add_attribute("ID", "InstrumentPartySubID_t_235517636"); // 3
        Sub_97_set.insert("InstrumentPartySubID_t_235517636");
        Sub_97.add_attribute("Typ", "32"); // 3
        Sub_97_set.insert("32");
        all_values.push_back(Sub_97_set);
        all_compo_names.insert("Sub_97_set");

        Pty_97.add_element(Sub_97);
      }
      Instrmt_11.add_element(Pty_97);
    }
    {
      xml_element CmplxEvnt_11{"CmplxEvnt"};
      multiset<string> CmplxEvnt_11_set;
      CmplxEvnt_11.add_attribute("Typ", "7"); // 2
      CmplxEvnt_11_set.insert("7");
      CmplxEvnt_11.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1926253456"); // 2
      CmplxEvnt_11_set.insert("ComplexOptPayoutAmount_t_1926253456");
      CmplxEvnt_11.add_attribute("Px", "21410018.560000"); // 2
      CmplxEvnt_11_set.insert("21410018.560000");
      CmplxEvnt_11.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_11_set.insert("3");
      CmplxEvnt_11.add_attribute("PxBndryPrcsn", "14355477.290000"); // 2
      CmplxEvnt_11_set.insert("14355477.290000");
      CmplxEvnt_11.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_11_set.insert("3");
      CmplxEvnt_11.add_attribute("Cond", "1"); // 2
      CmplxEvnt_11_set.insert("1");
      all_values.push_back(CmplxEvnt_11_set);
      all_compo_names.insert("CmplxEvnt_11_set");

      {
        xml_element EvntDts_11{"EvntDts"};
        multiset<string> EvntDts_11_set;
        EvntDts_11.add_attribute("StartDt", "ComplexEventStartDate_t_1704756339"); // 3
        EvntDts_11_set.insert("ComplexEventStartDate_t_1704756339");
        EvntDts_11.add_attribute("EndDt", "ComplexEventEndDate_t_1631948597"); // 3
        EvntDts_11_set.insert("ComplexEventEndDate_t_1631948597");
        all_values.push_back(EvntDts_11_set);
        all_compo_names.insert("EvntDts_11_set");

        {
          xml_element EvntTms_11{"EvntTms"};
          multiset<string> EvntTms_11_set;
          EvntTms_11.add_attribute("StartTm", "836170387"); // 4
          EvntTms_11_set.insert("836170387");
          EvntTms_11.add_attribute("EndTm", "1460360133"); // 4
          EvntTms_11_set.insert("1460360133");
          all_values.push_back(EvntTms_11_set);
          all_compo_names.insert("EvntTms_11_set");

          EvntDts_11.add_element(EvntTms_11);
        }
        CmplxEvnt_11.add_element(EvntDts_11);
      }
      Instrmt_11.add_element(CmplxEvnt_11);
    }
    elt.add_element(Instrmt_11);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_8{"FinDetls"};
    multiset<string> FinDetls_8_set;
    FinDetls_8.add_attribute("AgmtDesc", "AgreementDesc_t_1526707900"); // 1
    FinDetls_8_set.insert("AgreementDesc_t_1526707900");
    FinDetls_8.add_attribute("AgmtID", "AgreementID_t_1665148880"); // 1
    FinDetls_8_set.insert("AgreementID_t_1665148880");
    FinDetls_8.add_attribute("AgmtDt", "AgreementDate_t_1585955294"); // 1
    FinDetls_8_set.insert("AgreementDate_t_1585955294");
    FinDetls_8.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_8_set.insert("GBP");
    FinDetls_8.add_attribute("TrmTyp", "1"); // 1
    FinDetls_8_set.insert("1");
    FinDetls_8.add_attribute("StartDt", "StartDate_t_1367422751"); // 1
    FinDetls_8_set.insert("StartDate_t_1367422751");
    FinDetls_8.add_attribute("EndDt", "EndDate_t_830469032"); // 1
    FinDetls_8_set.insert("EndDate_t_830469032");
    FinDetls_8.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_8_set.insert("3");
    FinDetls_8.add_attribute("MgnRatio", "13503069.780000"); // 1
    FinDetls_8_set.insert("13503069.780000");
    all_values.push_back(FinDetls_8_set);
    all_compo_names.insert("FinDetls_8_set");

    elt.add_element(FinDetls_8);
  } // end FinDetls
  { // Leg
    xml_element Leg_19{"Leg"};
    multiset<string> Leg_19_set;
    Leg_19.add_attribute("Sym", "LegSymbol_t_276080029"); // 1
    Leg_19_set.insert("LegSymbol_t_276080029");
    Leg_19.add_attribute("Sfx", "WI"); // 1
    Leg_19_set.insert("WI");
    Leg_19.add_attribute("ID", "LegSecurityID_t_1503681149"); // 1
    Leg_19_set.insert("LegSecurityID_t_1503681149");
    Leg_19.add_attribute("Src", "G"); // 1
    Leg_19_set.insert("G");
    Leg_19.add_attribute("Prod", "11"); // 1
    Leg_19_set.insert("11");
    Leg_19.add_attribute("CFI", "LegCFICode_t_1475909208"); // 1
    Leg_19_set.insert("LegCFICode_t_1475909208");
    Leg_19.add_attribute("SecTyp", "CMO"); // 1
    Leg_19_set.insert("CMO");
    Leg_19.add_attribute("SecSubTyp", "LegSecuritySubType_t_1664102199"); // 1
    Leg_19_set.insert("LegSecuritySubType_t_1664102199");
    Leg_19.add_attribute("MMY", "1234636997"); // 1
    Leg_19_set.insert("1234636997");
    Leg_19.add_attribute("Mat", "LegMaturityDate_t_190069886"); // 1
    Leg_19_set.insert("LegMaturityDate_t_190069886");
    Leg_19.add_attribute("MatTm", "1442872007"); // 1
    Leg_19_set.insert("1442872007");
    Leg_19.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1228155205"); // 1
    Leg_19_set.insert("LegCouponPaymentDate_t_1228155205");
    Leg_19.add_attribute("Issued", "LegIssueDate_t_2007791818"); // 1
    Leg_19_set.insert("LegIssueDate_t_2007791818");
    Leg_19.add_attribute("RepoCollSecTyp", "730936089"); // 1
    Leg_19_set.insert("730936089");
    Leg_19.add_attribute("RepoTrm", "1001112386"); // 1
    Leg_19_set.insert("1001112386");
    Leg_19.add_attribute("RepoRt", "21050588.420000"); // 1
    Leg_19_set.insert("21050588.420000");
    Leg_19.add_attribute("Fctr", "2882087.800000"); // 1
    Leg_19_set.insert("2882087.800000");
    Leg_19.add_attribute("CrdRtg", "LegCreditRating_t_485577335"); // 1
    Leg_19_set.insert("LegCreditRating_t_485577335");
    Leg_19.add_attribute("Rgstry", "LegInstrRegistry_t_793745581"); // 1
    Leg_19_set.insert("LegInstrRegistry_t_793745581");
    Leg_19.add_attribute("Ctry", "1748568913"); // 1
    Leg_19_set.insert("1748568913");
    Leg_19.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2012285235"); // 1
    Leg_19_set.insert("LegStateOrProvinceOfIssue_t_2012285235");
    Leg_19.add_attribute("Lcl", "LegLocaleOfIssue_t_311410814"); // 1
    Leg_19_set.insert("LegLocaleOfIssue_t_311410814");
    Leg_19.add_attribute("Redeem", "LegRedemptionDate_t_1187040559"); // 1
    Leg_19_set.insert("LegRedemptionDate_t_1187040559");
    Leg_19.add_attribute("Strk", "7452766.630000"); // 1
    Leg_19_set.insert("7452766.630000");
    Leg_19.add_attribute("StrkCcy", "GBP"); // 1
    Leg_19_set.insert("GBP");
    Leg_19.add_attribute("OptA", "2112699414"); // 1
    Leg_19_set.insert("2112699414");
    Leg_19.add_attribute("Cmult", "533797.660000"); // 1
    Leg_19_set.insert("533797.660000");
    Leg_19.add_attribute("MultTyp", "2"); // 1
    Leg_19_set.insert("2");
    Leg_19.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_19_set.insert("4");
    Leg_19.add_attribute("UOM", "oz_tr"); // 1
    Leg_19_set.insert("oz_tr");
    Leg_19.add_attribute("UOMQty", "17761101.600000"); // 1
    Leg_19_set.insert("17761101.600000");
    Leg_19.add_attribute("PxUOM", "tn"); // 1
    Leg_19_set.insert("tn");
    Leg_19.add_attribute("PxUOMQty", "14205390.090000"); // 1
    Leg_19_set.insert("14205390.090000");
    Leg_19.add_attribute("TmUnit", "S"); // 1
    Leg_19_set.insert("S");
    Leg_19.add_attribute("ExerStyle", "0"); // 1
    Leg_19_set.insert("0");
    Leg_19.add_attribute("CpnRt", "7489645.690000"); // 1
    Leg_19_set.insert("7489645.690000");
    Leg_19.add_attribute("Exch", "LegSecurityExchange_t_263937908"); // 1
    Leg_19_set.insert("LegSecurityExchange_t_263937908");
    Leg_19.add_attribute("Issr", "LegIssuer_t_1531109947"); // 1
    Leg_19_set.insert("LegIssuer_t_1531109947");
    Leg_19.add_attribute("EncLegIssrLen", "1983601566"); // 1
    Leg_19_set.insert("1983601566");
    Leg_19.add_attribute("EncLegIssr", "EncodedLegIssuer_t_454007794"); // 1
    Leg_19_set.insert("EncodedLegIssuer_t_454007794");
    Leg_19.add_attribute("Desc", "LegSecurityDesc_t_826498306"); // 1
    Leg_19_set.insert("LegSecurityDesc_t_826498306");
    Leg_19.add_attribute("EncLegSecDescLen", "1064273123"); // 1
    Leg_19_set.insert("1064273123");
    Leg_19.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_314315964"); // 1
    Leg_19_set.insert("EncodedLegSecurityDesc_t_314315964");
    Leg_19.add_attribute("RatioQty", "15574343.950000"); // 1
    Leg_19_set.insert("15574343.950000");
    Leg_19.add_attribute("Side", "6"); // 1
    Leg_19_set.insert("6");
    Leg_19.add_attribute("Ccy", "USD"); // 1
    Leg_19_set.insert("USD");
    Leg_19.add_attribute("Pool", "LegPool_t_403479197"); // 1
    Leg_19_set.insert("LegPool_t_403479197");
    Leg_19.add_attribute("Dated", "LegDatedDate_t_1065636740"); // 1
    Leg_19_set.insert("LegDatedDate_t_1065636740");
    Leg_19.add_attribute("CSetMo", "1446728441"); // 1
    Leg_19_set.insert("1446728441");
    Leg_19.add_attribute("IntAcrl", "LegInterestAccrualDate_t_268280784"); // 1
    Leg_19_set.insert("LegInterestAccrualDate_t_268280784");
    Leg_19.add_attribute("PutCall", "1377047554"); // 1
    Leg_19_set.insert("1377047554");
    Leg_19.add_attribute("LegOptionRatio", "4862853.530000"); // 1
    Leg_19_set.insert("4862853.530000");
    Leg_19.add_attribute("Px", "10135574.480000"); // 1
    Leg_19_set.insert("10135574.480000");
    all_values.push_back(Leg_19_set);
    all_compo_names.insert("Leg_19_set");

    {
      xml_element LegAID_19{"LegAID"};
      multiset<string> LegAID_19_set;
      LegAID_19.add_attribute("SecAltID", "LegSecurityAltID_t_599958289"); // 2
      LegAID_19_set.insert("LegSecurityAltID_t_599958289");
      LegAID_19.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_19_set.insert("6");
      all_values.push_back(LegAID_19_set);
      all_compo_names.insert("LegAID_19_set");

      Leg_19.add_element(LegAID_19);
    }
    elt.add_element(Leg_19);
  } // end Leg
  { // Leg
    xml_element Leg_20{"Leg"};
    multiset<string> Leg_20_set;
    Leg_20.add_attribute("Sym", "LegSymbol_t_978773214"); // 1
    Leg_20_set.insert("LegSymbol_t_978773214");
    Leg_20.add_attribute("Sfx", "WI"); // 1
    Leg_20_set.insert("WI");
    Leg_20.add_attribute("ID", "LegSecurityID_t_2054312040"); // 1
    Leg_20_set.insert("LegSecurityID_t_2054312040");
    Leg_20.add_attribute("Src", "L"); // 1
    Leg_20_set.insert("L");
    Leg_20.add_attribute("Prod", "12"); // 1
    Leg_20_set.insert("12");
    Leg_20.add_attribute("CFI", "LegCFICode_t_1682938552"); // 1
    Leg_20_set.insert("LegCFICode_t_1682938552");
    Leg_20.add_attribute("SecTyp", "FORWARD"); // 1
    Leg_20_set.insert("FORWARD");
    Leg_20.add_attribute("SecSubTyp", "LegSecuritySubType_t_1990734924"); // 1
    Leg_20_set.insert("LegSecuritySubType_t_1990734924");
    Leg_20.add_attribute("MMY", "1084975065"); // 1
    Leg_20_set.insert("1084975065");
    Leg_20.add_attribute("Mat", "LegMaturityDate_t_599726892"); // 1
    Leg_20_set.insert("LegMaturityDate_t_599726892");
    Leg_20.add_attribute("MatTm", "592215845"); // 1
    Leg_20_set.insert("592215845");
    Leg_20.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1348912973"); // 1
    Leg_20_set.insert("LegCouponPaymentDate_t_1348912973");
    Leg_20.add_attribute("Issued", "LegIssueDate_t_2130836839"); // 1
    Leg_20_set.insert("LegIssueDate_t_2130836839");
    Leg_20.add_attribute("RepoCollSecTyp", "428333763"); // 1
    Leg_20_set.insert("428333763");
    Leg_20.add_attribute("RepoTrm", "1802920768"); // 1
    Leg_20_set.insert("1802920768");
    Leg_20.add_attribute("RepoRt", "8098514.980000"); // 1
    Leg_20_set.insert("8098514.980000");
    Leg_20.add_attribute("Fctr", "14926068.870000"); // 1
    Leg_20_set.insert("14926068.870000");
    Leg_20.add_attribute("CrdRtg", "LegCreditRating_t_2117236732"); // 1
    Leg_20_set.insert("LegCreditRating_t_2117236732");
    Leg_20.add_attribute("Rgstry", "LegInstrRegistry_t_219802245"); // 1
    Leg_20_set.insert("LegInstrRegistry_t_219802245");
    Leg_20.add_attribute("Ctry", "1410508748"); // 1
    Leg_20_set.insert("1410508748");
    Leg_20.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_241644243"); // 1
    Leg_20_set.insert("LegStateOrProvinceOfIssue_t_241644243");
    Leg_20.add_attribute("Lcl", "LegLocaleOfIssue_t_2065445421"); // 1
    Leg_20_set.insert("LegLocaleOfIssue_t_2065445421");
    Leg_20.add_attribute("Redeem", "LegRedemptionDate_t_1813987945"); // 1
    Leg_20_set.insert("LegRedemptionDate_t_1813987945");
    Leg_20.add_attribute("Strk", "13072809.840000"); // 1
    Leg_20_set.insert("13072809.840000");
    Leg_20.add_attribute("StrkCcy", "GBP"); // 1
    Leg_20_set.insert("GBP");
    Leg_20.add_attribute("OptA", "536844890"); // 1
    Leg_20_set.insert("536844890");
    Leg_20.add_attribute("Cmult", "18509755.680000"); // 1
    Leg_20_set.insert("18509755.680000");
    Leg_20.add_attribute("MultTyp", "2"); // 1
    Leg_20_set.insert("2");
    Leg_20.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_20_set.insert("4");
    Leg_20.add_attribute("UOM", "MMBtu"); // 1
    Leg_20_set.insert("MMBtu");
    Leg_20.add_attribute("UOMQty", "19271157.440000"); // 1
    Leg_20_set.insert("19271157.440000");
    Leg_20.add_attribute("PxUOM", "Alw"); // 1
    Leg_20_set.insert("Alw");
    Leg_20.add_attribute("PxUOMQty", "1646022.210000"); // 1
    Leg_20_set.insert("1646022.210000");
    Leg_20.add_attribute("TmUnit", "D"); // 1
    Leg_20_set.insert("D");
    Leg_20.add_attribute("ExerStyle", "1"); // 1
    Leg_20_set.insert("1");
    Leg_20.add_attribute("CpnRt", "18475407.730000"); // 1
    Leg_20_set.insert("18475407.730000");
    Leg_20.add_attribute("Exch", "LegSecurityExchange_t_659163552"); // 1
    Leg_20_set.insert("LegSecurityExchange_t_659163552");
    Leg_20.add_attribute("Issr", "LegIssuer_t_56104779"); // 1
    Leg_20_set.insert("LegIssuer_t_56104779");
    Leg_20.add_attribute("EncLegIssrLen", "785032190"); // 1
    Leg_20_set.insert("785032190");
    Leg_20.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1258890444"); // 1
    Leg_20_set.insert("EncodedLegIssuer_t_1258890444");
    Leg_20.add_attribute("Desc", "LegSecurityDesc_t_648320624"); // 1
    Leg_20_set.insert("LegSecurityDesc_t_648320624");
    Leg_20.add_attribute("EncLegSecDescLen", "2133945163"); // 1
    Leg_20_set.insert("2133945163");
    Leg_20.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1242243636"); // 1
    Leg_20_set.insert("EncodedLegSecurityDesc_t_1242243636");
    Leg_20.add_attribute("RatioQty", "10766543.880000"); // 1
    Leg_20_set.insert("10766543.880000");
    Leg_20.add_attribute("Side", "C"); // 1
    Leg_20_set.insert("C");
    Leg_20.add_attribute("Ccy", "EUR"); // 1
    Leg_20_set.insert("EUR");
    Leg_20.add_attribute("Pool", "LegPool_t_1759135368"); // 1
    Leg_20_set.insert("LegPool_t_1759135368");
    Leg_20.add_attribute("Dated", "LegDatedDate_t_124413731"); // 1
    Leg_20_set.insert("LegDatedDate_t_124413731");
    Leg_20.add_attribute("CSetMo", "1832286375"); // 1
    Leg_20_set.insert("1832286375");
    Leg_20.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2000779611"); // 1
    Leg_20_set.insert("LegInterestAccrualDate_t_2000779611");
    Leg_20.add_attribute("PutCall", "42375505"); // 1
    Leg_20_set.insert("42375505");
    Leg_20.add_attribute("LegOptionRatio", "14987906.730000"); // 1
    Leg_20_set.insert("14987906.730000");
    Leg_20.add_attribute("Px", "11605769.470000"); // 1
    Leg_20_set.insert("11605769.470000");
    all_values.push_back(Leg_20_set);
    all_compo_names.insert("Leg_20_set");

    {
      xml_element LegAID_20{"LegAID"};
      multiset<string> LegAID_20_set;
      LegAID_20.add_attribute("SecAltID", "LegSecurityAltID_t_1407065720"); // 2
      LegAID_20_set.insert("LegSecurityAltID_t_1407065720");
      LegAID_20.add_attribute("SecAltIDSrc", "8"); // 2
      LegAID_20_set.insert("8");
      all_values.push_back(LegAID_20_set);
      all_compo_names.insert("LegAID_20_set");

      Leg_20.add_element(LegAID_20);
    }
    elt.add_element(Leg_20);
  } // end Leg
  { // UndColl
    xml_element UndColl_5{"UndColl"};
    multiset<string> UndColl_5_set;
    UndColl_5.add_attribute("Actn", "0"); // 1
    UndColl_5_set.insert("0");
    all_values.push_back(UndColl_5_set);
    all_compo_names.insert("UndColl_5_set");

    {
      xml_element Undly_20{"Undly"};
      multiset<string> Undly_20_set;
      Undly_20.add_attribute("Sym", "UnderlyingSymbol_t_234434637"); // 2
      Undly_20_set.insert("UnderlyingSymbol_t_234434637");
      Undly_20.add_attribute("Sfx", "WI"); // 2
      Undly_20_set.insert("WI");
      Undly_20.add_attribute("ID", "UnderlyingSecurityID_t_1368331469"); // 2
      Undly_20_set.insert("UnderlyingSecurityID_t_1368331469");
      Undly_20.add_attribute("Src", "M"); // 2
      Undly_20_set.insert("M");
      Undly_20.add_attribute("Prod", "12"); // 2
      Undly_20_set.insert("12");
      Undly_20.add_attribute("CFI", "UnderlyingCFICode_t_1532933690"); // 2
      Undly_20_set.insert("UnderlyingCFICode_t_1532933690");
      Undly_20.add_attribute("SecTyp", "CL"); // 2
      Undly_20_set.insert("CL");
      Undly_20.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_542252459"); // 2
      Undly_20_set.insert("UnderlyingSecuritySubType_t_542252459");
      Undly_20.add_attribute("MMY", "1232990815"); // 2
      Undly_20_set.insert("1232990815");
      Undly_20.add_attribute("Mat", "UnderlyingMaturityDate_t_599674693"); // 2
      Undly_20_set.insert("UnderlyingMaturityDate_t_599674693");
      Undly_20.add_attribute("MatTm", "598357238"); // 2
      Undly_20_set.insert("598357238");
      Undly_20.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2018023005"); // 2
      Undly_20_set.insert("UnderlyingCouponPaymentDate_t_2018023005");
      Undly_20.add_attribute("RestrctTyp", "MR"); // 2
      Undly_20_set.insert("MR");
      Undly_20.add_attribute("Snrty", "SR"); // 2
      Undly_20_set.insert("SR");
      Undly_20.add_attribute("NotlPctOut", "20044845.200000"); // 2
      Undly_20_set.insert("20044845.200000");
      Undly_20.add_attribute("OrigNotlPctOut", "9533251.250000"); // 2
      Undly_20_set.insert("9533251.250000");
      Undly_20.add_attribute("AttchPnt", "1758486.020000"); // 2
      Undly_20_set.insert("1758486.020000");
      Undly_20.add_attribute("DetchPnt", "16463831.560000"); // 2
      Undly_20_set.insert("16463831.560000");
      Undly_20.add_attribute("Issued", "UnderlyingIssueDate_t_857936611"); // 2
      Undly_20_set.insert("UnderlyingIssueDate_t_857936611");
      Undly_20.add_attribute("RepoCollSecTyp", "597626229"); // 2
      Undly_20_set.insert("597626229");
      Undly_20.add_attribute("RepoTrm", "1258034876"); // 2
      Undly_20_set.insert("1258034876");
      Undly_20.add_attribute("RepoRt", "9823503.430000"); // 2
      Undly_20_set.insert("9823503.430000");
      Undly_20.add_attribute("Fctr", "2824289.570000"); // 2
      Undly_20_set.insert("2824289.570000");
      Undly_20.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1111330839"); // 2
      Undly_20_set.insert("UnderlyingCreditRating_t_1111330839");
      Undly_20.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1024725848"); // 2
      Undly_20_set.insert("UnderlyingInstrRegistry_t_1024725848");
      Undly_20.add_attribute("Ctry", "1781219630"); // 2
      Undly_20_set.insert("1781219630");
      Undly_20.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_124424139"); // 2
      Undly_20_set.insert("UnderlyingStateOrProvinceOfIssue_t_124424139");
      Undly_20.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_284307920"); // 2
      Undly_20_set.insert("UnderlyingLocaleOfIssue_t_284307920");
      Undly_20.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1067311737"); // 2
      Undly_20_set.insert("UnderlyingRedemptionDate_t_1067311737");
      Undly_20.add_attribute("StrkPx", "18218459.770000"); // 2
      Undly_20_set.insert("18218459.770000");
      Undly_20.add_attribute("StrkCcy", "USD"); // 2
      Undly_20_set.insert("USD");
      Undly_20.add_attribute("OptA", "361103698"); // 2
      Undly_20_set.insert("361103698");
      Undly_20.add_attribute("Mult", "6157133.810000"); // 2
      Undly_20_set.insert("6157133.810000");
      Undly_20.add_attribute("MultTyp", "0"); // 2
      Undly_20_set.insert("0");
      Undly_20.add_attribute("FlowSchedTyp", "0"); // 2
      Undly_20_set.insert("0");
      Undly_20.add_attribute("UOM", "MMBtu"); // 2
      Undly_20_set.insert("MMBtu");
      Undly_20.add_attribute("UOMQty", "12563242.480000"); // 2
      Undly_20_set.insert("12563242.480000");
      Undly_20.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_20_set.insert("MMbbl");
      Undly_20.add_attribute("PxUOMQty", "12341542.380000"); // 2
      Undly_20_set.insert("12341542.380000");
      Undly_20.add_attribute("TmUnit", "Yr"); // 2
      Undly_20_set.insert("Yr");
      Undly_20.add_attribute("ExerStyle", "0"); // 2
      Undly_20_set.insert("0");
      Undly_20.add_attribute("CpnRt", "11046935.950000"); // 2
      Undly_20_set.insert("11046935.950000");
      Undly_20.add_attribute("Exch", "UnderlyingSecurityExchange_t_1567080431"); // 2
      Undly_20_set.insert("UnderlyingSecurityExchange_t_1567080431");
      Undly_20.add_attribute("Issr", "UnderlyingIssuer_t_930306566"); // 2
      Undly_20_set.insert("UnderlyingIssuer_t_930306566");
      Undly_20.add_attribute("EncUndIssrLen", "961694467"); // 2
      Undly_20_set.insert("961694467");
      Undly_20.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_372921908"); // 2
      Undly_20_set.insert("EncodedUnderlyingIssuer_t_372921908");
      Undly_20.add_attribute("Desc", "UnderlyingSecurityDesc_t_1106155169"); // 2
      Undly_20_set.insert("UnderlyingSecurityDesc_t_1106155169");
      Undly_20.add_attribute("EncUndSecDescLen", "460593975"); // 2
      Undly_20_set.insert("460593975");
      Undly_20.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1230858520"); // 2
      Undly_20_set.insert("EncodedUnderlyingSecurityDesc_t_1230858520");
      Undly_20.add_attribute("CPPgm", "UnderlyingCPProgram_t_1703781398"); // 2
      Undly_20_set.insert("UnderlyingCPProgram_t_1703781398");
      Undly_20.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1718628851"); // 2
      Undly_20_set.insert("UnderlyingCPRegType_t_1718628851");
      Undly_20.add_attribute("AllocPct", "657252.150000"); // 2
      Undly_20_set.insert("657252.150000");
      Undly_20.add_attribute("Ccy", "EUR"); // 2
      Undly_20_set.insert("EUR");
      Undly_20.add_attribute("Qty", "10904510.630000"); // 2
      Undly_20_set.insert("10904510.630000");
      Undly_20.add_attribute("SettlTyp", "4"); // 2
      Undly_20_set.insert("4");
      Undly_20.add_attribute("CashAmt", "UnderlyingCashAmount_t_806900182"); // 2
      Undly_20_set.insert("UnderlyingCashAmount_t_806900182");
      Undly_20.add_attribute("CashTyp", "DIFF"); // 2
      Undly_20_set.insert("DIFF");
      Undly_20.add_attribute("Px", "5397744.260000"); // 2
      Undly_20_set.insert("5397744.260000");
      Undly_20.add_attribute("DirtPx", "4812625.110000"); // 2
      Undly_20_set.insert("4812625.110000");
      Undly_20.add_attribute("EndPx", "6221408.950000"); // 2
      Undly_20_set.insert("6221408.950000");
      Undly_20.add_attribute("StartVal", "UnderlyingStartValue_t_1841520800"); // 2
      Undly_20_set.insert("UnderlyingStartValue_t_1841520800");
      Undly_20.add_attribute("CurVal", "UnderlyingCurrentValue_t_842366209"); // 2
      Undly_20_set.insert("UnderlyingCurrentValue_t_842366209");
      Undly_20.add_attribute("EndVal", "UnderlyingEndValue_t_1237854276"); // 2
      Undly_20_set.insert("UnderlyingEndValue_t_1237854276");
      Undly_20.add_attribute("AdjQty", "10098502.600000"); // 2
      Undly_20_set.insert("10098502.600000");
      Undly_20.add_attribute("FxRate", "15328688.640000"); // 2
      Undly_20_set.insert("15328688.640000");
      Undly_20.add_attribute("FxRateCalc", "D"); // 2
      Undly_20_set.insert("D");
      Undly_20.add_attribute("CapValu", "UnderlyingCapValue_t_118690860"); // 2
      Undly_20_set.insert("UnderlyingCapValue_t_118690860");
      Undly_20.add_attribute("SetMeth", "UnderlyingSettlMethod_t_618140330"); // 2
      Undly_20_set.insert("UnderlyingSettlMethod_t_618140330");
      Undly_20.add_attribute("PutCall", "325688289"); // 2
      Undly_20_set.insert("325688289");
      all_values.push_back(Undly_20_set);
      all_compo_names.insert("Undly_20_set");

      {
        xml_element UndAID_20{"UndAID"};
        multiset<string> UndAID_20_set;
        UndAID_20.add_attribute("AltID", "UnderlyingSecurityAltID_t_1974689802"); // 3
        UndAID_20_set.insert("UnderlyingSecurityAltID_t_1974689802");
        UndAID_20.add_attribute("AltIDSrc", "7"); // 3
        UndAID_20_set.insert("7");
        all_values.push_back(UndAID_20_set);
        all_compo_names.insert("UndAID_20_set");

        Undly_20.add_element(UndAID_20);
      }
      {
        xml_element Stip_34{"Stip"};
        multiset<string> Stip_34_set;
        Stip_34.add_attribute("Typ", "REDEMPTION"); // 3
        Stip_34_set.insert("REDEMPTION");
        Stip_34.add_attribute("Val", "UnderlyingStipValue_t_1394286585"); // 3
        Stip_34_set.insert("UnderlyingStipValue_t_1394286585");
        all_values.push_back(Stip_34_set);
        all_compo_names.insert("Stip_34_set");

        Undly_20.add_element(Stip_34);
      }
      {
        xml_element Pty_98{"Pty"};
        multiset<string> Pty_98_set;
        Pty_98.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1232075601"); // 3
        Pty_98_set.insert("UnderlyingInstrumentPartyID_t_1232075601");
        Pty_98.add_attribute("Src", "A"); // 3
        Pty_98_set.insert("A");
        Pty_98.add_attribute("R", "37"); // 3
        Pty_98_set.insert("37");
        all_values.push_back(Pty_98_set);
        all_compo_names.insert("Pty_98_set");

        {
          xml_element Sub_98{"Sub"};
          multiset<string> Sub_98_set;
          Sub_98.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_190747122"); // 4
          Sub_98_set.insert("UnderlyingInstrumentPartySubID_t_190747122");
          Sub_98.add_attribute("Typ", "19"); // 4
          Sub_98_set.insert("19");
          all_values.push_back(Sub_98_set);
          all_compo_names.insert("Sub_98_set");

          Pty_98.add_element(Sub_98);
        }
        Undly_20.add_element(Pty_98);
      }
      UndColl_5.add_element(Undly_20);
    }
    elt.add_element(UndColl_5);
  } // end UndColl
  { // UndColl
    xml_element UndColl_6{"UndColl"};
    multiset<string> UndColl_6_set;
    UndColl_6.add_attribute("Actn", "1"); // 1
    UndColl_6_set.insert("1");
    all_values.push_back(UndColl_6_set);
    all_compo_names.insert("UndColl_6_set");

    {
      xml_element Undly_21{"Undly"};
      multiset<string> Undly_21_set;
      Undly_21.add_attribute("Sym", "UnderlyingSymbol_t_1894528520"); // 2
      Undly_21_set.insert("UnderlyingSymbol_t_1894528520");
      Undly_21.add_attribute("Sfx", "CD"); // 2
      Undly_21_set.insert("CD");
      Undly_21.add_attribute("ID", "UnderlyingSecurityID_t_916308580"); // 2
      Undly_21_set.insert("UnderlyingSecurityID_t_916308580");
      Undly_21.add_attribute("Src", "D"); // 2
      Undly_21_set.insert("D");
      Undly_21.add_attribute("Prod", "7"); // 2
      Undly_21_set.insert("7");
      Undly_21.add_attribute("CFI", "UnderlyingCFICode_t_2006759643"); // 2
      Undly_21_set.insert("UnderlyingCFICode_t_2006759643");
      Undly_21.add_attribute("SecTyp", "PN"); // 2
      Undly_21_set.insert("PN");
      Undly_21.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1765708107"); // 2
      Undly_21_set.insert("UnderlyingSecuritySubType_t_1765708107");
      Undly_21.add_attribute("MMY", "1234034978"); // 2
      Undly_21_set.insert("1234034978");
      Undly_21.add_attribute("Mat", "UnderlyingMaturityDate_t_1745492344"); // 2
      Undly_21_set.insert("UnderlyingMaturityDate_t_1745492344");
      Undly_21.add_attribute("MatTm", "99486970"); // 2
      Undly_21_set.insert("99486970");
      Undly_21.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1856175873"); // 2
      Undly_21_set.insert("UnderlyingCouponPaymentDate_t_1856175873");
      Undly_21.add_attribute("RestrctTyp", "FR"); // 2
      Undly_21_set.insert("FR");
      Undly_21.add_attribute("Snrty", "SD"); // 2
      Undly_21_set.insert("SD");
      Undly_21.add_attribute("NotlPctOut", "9465465.010000"); // 2
      Undly_21_set.insert("9465465.010000");
      Undly_21.add_attribute("OrigNotlPctOut", "3018961.080000"); // 2
      Undly_21_set.insert("3018961.080000");
      Undly_21.add_attribute("AttchPnt", "3272383.960000"); // 2
      Undly_21_set.insert("3272383.960000");
      Undly_21.add_attribute("DetchPnt", "380805.520000"); // 2
      Undly_21_set.insert("380805.520000");
      Undly_21.add_attribute("Issued", "UnderlyingIssueDate_t_420586969"); // 2
      Undly_21_set.insert("UnderlyingIssueDate_t_420586969");
      Undly_21.add_attribute("RepoCollSecTyp", "945378727"); // 2
      Undly_21_set.insert("945378727");
      Undly_21.add_attribute("RepoTrm", "363768841"); // 2
      Undly_21_set.insert("363768841");
      Undly_21.add_attribute("RepoRt", "2477931.230000"); // 2
      Undly_21_set.insert("2477931.230000");
      Undly_21.add_attribute("Fctr", "12471477.610000"); // 2
      Undly_21_set.insert("12471477.610000");
      Undly_21.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1794150725"); // 2
      Undly_21_set.insert("UnderlyingCreditRating_t_1794150725");
      Undly_21.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1642079708"); // 2
      Undly_21_set.insert("UnderlyingInstrRegistry_t_1642079708");
      Undly_21.add_attribute("Ctry", "331739714"); // 2
      Undly_21_set.insert("331739714");
      Undly_21.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2038743429"); // 2
      Undly_21_set.insert("UnderlyingStateOrProvinceOfIssue_t_2038743429");
      Undly_21.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1261804553"); // 2
      Undly_21_set.insert("UnderlyingLocaleOfIssue_t_1261804553");
      Undly_21.add_attribute("Redeem", "UnderlyingRedemptionDate_t_522486836"); // 2
      Undly_21_set.insert("UnderlyingRedemptionDate_t_522486836");
      Undly_21.add_attribute("StrkPx", "5964464.600000"); // 2
      Undly_21_set.insert("5964464.600000");
      Undly_21.add_attribute("StrkCcy", "CHF"); // 2
      Undly_21_set.insert("CHF");
      Undly_21.add_attribute("OptA", "872778342"); // 2
      Undly_21_set.insert("872778342");
      Undly_21.add_attribute("Mult", "8812128.510000"); // 2
      Undly_21_set.insert("8812128.510000");
      Undly_21.add_attribute("MultTyp", "2"); // 2
      Undly_21_set.insert("2");
      Undly_21.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_21_set.insert("3");
      Undly_21.add_attribute("UOM", "lbs"); // 2
      Undly_21_set.insert("lbs");
      Undly_21.add_attribute("UOMQty", "10610212.060000"); // 2
      Undly_21_set.insert("10610212.060000");
      Undly_21.add_attribute("PxUOM", "MMBtu"); // 2
      Undly_21_set.insert("MMBtu");
      Undly_21.add_attribute("PxUOMQty", "19745238.250000"); // 2
      Undly_21_set.insert("19745238.250000");
      Undly_21.add_attribute("TmUnit", "Yr"); // 2
      Undly_21_set.insert("Yr");
      Undly_21.add_attribute("ExerStyle", "0"); // 2
      Undly_21_set.insert("0");
      Undly_21.add_attribute("CpnRt", "16832160.510000"); // 2
      Undly_21_set.insert("16832160.510000");
      Undly_21.add_attribute("Exch", "UnderlyingSecurityExchange_t_2098559399"); // 2
      Undly_21_set.insert("UnderlyingSecurityExchange_t_2098559399");
      Undly_21.add_attribute("Issr", "UnderlyingIssuer_t_343667230"); // 2
      Undly_21_set.insert("UnderlyingIssuer_t_343667230");
      Undly_21.add_attribute("EncUndIssrLen", "482278904"); // 2
      Undly_21_set.insert("482278904");
      Undly_21.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_252971859"); // 2
      Undly_21_set.insert("EncodedUnderlyingIssuer_t_252971859");
      Undly_21.add_attribute("Desc", "UnderlyingSecurityDesc_t_670905626"); // 2
      Undly_21_set.insert("UnderlyingSecurityDesc_t_670905626");
      Undly_21.add_attribute("EncUndSecDescLen", "520359457"); // 2
      Undly_21_set.insert("520359457");
      Undly_21.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_673558828"); // 2
      Undly_21_set.insert("EncodedUnderlyingSecurityDesc_t_673558828");
      Undly_21.add_attribute("CPPgm", "UnderlyingCPProgram_t_1616284353"); // 2
      Undly_21_set.insert("UnderlyingCPProgram_t_1616284353");
      Undly_21.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_884128298"); // 2
      Undly_21_set.insert("UnderlyingCPRegType_t_884128298");
      Undly_21.add_attribute("AllocPct", "9213519.510000"); // 2
      Undly_21_set.insert("9213519.510000");
      Undly_21.add_attribute("Ccy", "USD"); // 2
      Undly_21_set.insert("USD");
      Undly_21.add_attribute("Qty", "4159480.110000"); // 2
      Undly_21_set.insert("4159480.110000");
      Undly_21.add_attribute("SettlTyp", "5"); // 2
      Undly_21_set.insert("5");
      Undly_21.add_attribute("CashAmt", "UnderlyingCashAmount_t_422055157"); // 2
      Undly_21_set.insert("UnderlyingCashAmount_t_422055157");
      Undly_21.add_attribute("CashTyp", "DIFF"); // 2
      Undly_21_set.insert("DIFF");
      Undly_21.add_attribute("Px", "15701750.180000"); // 2
      Undly_21_set.insert("15701750.180000");
      Undly_21.add_attribute("DirtPx", "10185016.170000"); // 2
      Undly_21_set.insert("10185016.170000");
      Undly_21.add_attribute("EndPx", "16426568.360000"); // 2
      Undly_21_set.insert("16426568.360000");
      Undly_21.add_attribute("StartVal", "UnderlyingStartValue_t_1839706727"); // 2
      Undly_21_set.insert("UnderlyingStartValue_t_1839706727");
      Undly_21.add_attribute("CurVal", "UnderlyingCurrentValue_t_1891279959"); // 2
      Undly_21_set.insert("UnderlyingCurrentValue_t_1891279959");
      Undly_21.add_attribute("EndVal", "UnderlyingEndValue_t_376386039"); // 2
      Undly_21_set.insert("UnderlyingEndValue_t_376386039");
      Undly_21.add_attribute("AdjQty", "16950100.160000"); // 2
      Undly_21_set.insert("16950100.160000");
      Undly_21.add_attribute("FxRate", "15753825.790000"); // 2
      Undly_21_set.insert("15753825.790000");
      Undly_21.add_attribute("FxRateCalc", "M"); // 2
      Undly_21_set.insert("M");
      Undly_21.add_attribute("CapValu", "UnderlyingCapValue_t_608547574"); // 2
      Undly_21_set.insert("UnderlyingCapValue_t_608547574");
      Undly_21.add_attribute("SetMeth", "UnderlyingSettlMethod_t_877709659"); // 2
      Undly_21_set.insert("UnderlyingSettlMethod_t_877709659");
      Undly_21.add_attribute("PutCall", "943915064"); // 2
      Undly_21_set.insert("943915064");
      all_values.push_back(Undly_21_set);
      all_compo_names.insert("Undly_21_set");

      {
        xml_element UndAID_21{"UndAID"};
        multiset<string> UndAID_21_set;
        UndAID_21.add_attribute("AltID", "UnderlyingSecurityAltID_t_1267577477"); // 3
        UndAID_21_set.insert("UnderlyingSecurityAltID_t_1267577477");
        UndAID_21.add_attribute("AltIDSrc", "4"); // 3
        UndAID_21_set.insert("4");
        all_values.push_back(UndAID_21_set);
        all_compo_names.insert("UndAID_21_set");

        Undly_21.add_element(UndAID_21);
      }
      {
        xml_element Stip_35{"Stip"};
        multiset<string> Stip_35_set;
        Stip_35.add_attribute("Typ", "MINQTY"); // 3
        Stip_35_set.insert("MINQTY");
        Stip_35.add_attribute("Val", "UnderlyingStipValue_t_1218653228"); // 3
        Stip_35_set.insert("UnderlyingStipValue_t_1218653228");
        all_values.push_back(Stip_35_set);
        all_compo_names.insert("Stip_35_set");

        Undly_21.add_element(Stip_35);
      }
      {
        xml_element Pty_99{"Pty"};
        multiset<string> Pty_99_set;
        Pty_99.add_attribute("ID", "UnderlyingInstrumentPartyID_t_623190939"); // 3
        Pty_99_set.insert("UnderlyingInstrumentPartyID_t_623190939");
        Pty_99.add_attribute("Src", "I"); // 3
        Pty_99_set.insert("I");
        Pty_99.add_attribute("R", "31"); // 3
        Pty_99_set.insert("31");
        all_values.push_back(Pty_99_set);
        all_compo_names.insert("Pty_99_set");

        {
          xml_element Sub_99{"Sub"};
          multiset<string> Sub_99_set;
          Sub_99.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1294096565"); // 4
          Sub_99_set.insert("UnderlyingInstrumentPartySubID_t_1294096565");
          Sub_99.add_attribute("Typ", "20"); // 4
          Sub_99_set.insert("20");
          all_values.push_back(Sub_99_set);
          all_compo_names.insert("Sub_99_set");

          Pty_99.add_element(Sub_99);
        }
        Undly_21.add_element(Pty_99);
      }
      UndColl_6.add_element(Undly_21);
    }
    elt.add_element(UndColl_6);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_7{"TrdRegTS"};
    multiset<string> TrdRegTS_7_set;
    TrdRegTS_7.add_attribute("TS", "TrdRegTimestamp_t_762897271"); // 1
    TrdRegTS_7_set.insert("TrdRegTimestamp_t_762897271");
    TrdRegTS_7.add_attribute("Typ", "6"); // 1
    TrdRegTS_7_set.insert("6");
    TrdRegTS_7.add_attribute("Src", "TrdRegTimestampOrigin_t_919052219"); // 1
    TrdRegTS_7_set.insert("TrdRegTimestampOrigin_t_919052219");
    TrdRegTS_7.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_7_set.insert("PR");
    TrdRegTS_7.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_7_set.insert("1");
    TrdRegTS_7.add_attribute("DskOrdHndlInst", "NH"); // 1
    TrdRegTS_7_set.insert("NH");
    all_values.push_back(TrdRegTS_7_set);
    all_compo_names.insert("TrdRegTS_7_set");

    elt.add_element(TrdRegTS_7);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_8{"TrdRegTS"};
    multiset<string> TrdRegTS_8_set;
    TrdRegTS_8.add_attribute("TS", "TrdRegTimestamp_t_379050271"); // 1
    TrdRegTS_8_set.insert("TrdRegTimestamp_t_379050271");
    TrdRegTS_8.add_attribute("Typ", "4"); // 1
    TrdRegTS_8_set.insert("4");
    TrdRegTS_8.add_attribute("Src", "TrdRegTimestampOrigin_t_865269148"); // 1
    TrdRegTS_8_set.insert("TrdRegTimestampOrigin_t_865269148");
    TrdRegTS_8.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_8_set.insert("A");
    TrdRegTS_8.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_8_set.insert("1");
    TrdRegTS_8.add_attribute("DskOrdHndlInst", "OVD"); // 1
    TrdRegTS_8_set.insert("OVD");
    all_values.push_back(TrdRegTS_8_set);
    all_compo_names.insert("TrdRegTS_8_set");

    elt.add_element(TrdRegTS_8);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_14{"MiscFees"};
    multiset<string> MiscFees_14_set;
    MiscFees_14.add_attribute("Amt", "MiscFeeAmt_t_1934078940"); // 1
    MiscFees_14_set.insert("MiscFeeAmt_t_1934078940");
    MiscFees_14.add_attribute("Curr", "USD"); // 1
    MiscFees_14_set.insert("USD");
    MiscFees_14.add_attribute("Typ", "8"); // 1
    MiscFees_14_set.insert("8");
    MiscFees_14.add_attribute("Basis", "1"); // 1
    MiscFees_14_set.insert("1");
    all_values.push_back(MiscFees_14_set);
    all_compo_names.insert("MiscFees_14_set");

    elt.add_element(MiscFees_14);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_7{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_7_set;
    SprdBnchmkCurve_7.add_attribute("Spread", "17975223.110000"); // 1
    SprdBnchmkCurve_7_set.insert("17975223.110000");
    SprdBnchmkCurve_7.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_7_set.insert("JPY");
    SprdBnchmkCurve_7.add_attribute("Name", "Pfandbriefe"); // 1
    SprdBnchmkCurve_7_set.insert("Pfandbriefe");
    SprdBnchmkCurve_7.add_attribute("Point", "BenchmarkCurvePoint_t_371727592"); // 1
    SprdBnchmkCurve_7_set.insert("BenchmarkCurvePoint_t_371727592");
    SprdBnchmkCurve_7.add_attribute("Px", "11297821.450000"); // 1
    SprdBnchmkCurve_7_set.insert("11297821.450000");
    SprdBnchmkCurve_7.add_attribute("PxTyp", "9"); // 1
    SprdBnchmkCurve_7_set.insert("9");
    SprdBnchmkCurve_7.add_attribute("SecID", "BenchmarkSecurityID_t_994918531"); // 1
    SprdBnchmkCurve_7_set.insert("BenchmarkSecurityID_t_994918531");
    SprdBnchmkCurve_7.add_attribute("SecIDSrc", "J"); // 1
    SprdBnchmkCurve_7_set.insert("J");
    all_values.push_back(SprdBnchmkCurve_7_set);
    all_compo_names.insert("SprdBnchmkCurve_7_set");

    elt.add_element(SprdBnchmkCurve_7);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_36{"Stip"};
    multiset<string> Stip_36_set;
    Stip_36.add_attribute("Typ", "CPY"); // 1
    Stip_36_set.insert("CPY");
    Stip_36.add_attribute("Val", "StipulationValue_t_1426510697"); // 1
    Stip_36_set.insert("StipulationValue_t_1426510697");
    all_values.push_back(Stip_36_set);
    all_compo_names.insert("Stip_36_set");

    elt.add_element(Stip_36);
  } // end Stip
  { // Stip
    xml_element Stip_37{"Stip"};
    multiset<string> Stip_37_set;
    Stip_37.add_attribute("Typ", "PPT"); // 1
    Stip_37_set.insert("PPT");
    Stip_37.add_attribute("Val", "StipulationValue_t_904428719"); // 1
    Stip_37_set.insert("StipulationValue_t_904428719");
    all_values.push_back(Stip_37_set);
    all_compo_names.insert("Stip_37_set");

    elt.add_element(Stip_37);
  } // end Stip
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
