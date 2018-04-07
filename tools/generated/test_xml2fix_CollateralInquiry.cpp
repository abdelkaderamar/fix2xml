#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralInquiry.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralInquiry_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiry_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_851445779"); // 0
  CollateralInquiry_message_t_0.insert("CollInquiryID_t_851445779");
  elt.add_attribute("SubReqTyp", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  CollateralInquiry_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_473615995"); // 0
  CollateralInquiry_message_t_0.insert("ResponseDestination_t_473615995");
  elt.add_attribute("Acct", "Account_t_933787452"); // 0
  CollateralInquiry_message_t_0.insert("Account_t_933787452");
  elt.add_attribute("AcctTyp", "8"); // 0
  CollateralInquiry_message_t_0.insert("8");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1275530077"); // 0
  CollateralInquiry_message_t_0.insert("ClOrdID_t_1275530077");
  elt.add_attribute("OrdID", "OrderID_t_1208142508"); // 0
  CollateralInquiry_message_t_0.insert("OrderID_t_1208142508");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_486907239"); // 0
  CollateralInquiry_message_t_0.insert("SecondaryOrderID_t_486907239");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1714102933"); // 0
  CollateralInquiry_message_t_0.insert("SecondaryClOrdID_t_1714102933");
  elt.add_attribute("SettlDt", "SettlDate_t_98458663"); // 0
  CollateralInquiry_message_t_0.insert("SettlDate_t_98458663");
  elt.add_attribute("Qty", "18936887.130000"); // 0
  CollateralInquiry_message_t_0.insert("18936887.130000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralInquiry_message_t_0.insert("0");
  elt.add_attribute("Ccy", "CAN"); // 0
  CollateralInquiry_message_t_0.insert("CAN");
  elt.add_attribute("MgnExcess", "MarginExcess_t_2142172068"); // 0
  CollateralInquiry_message_t_0.insert("MarginExcess_t_2142172068");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1616578201"); // 0
  CollateralInquiry_message_t_0.insert("TotalNetValue_t_1616578201");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_96503218"); // 0
  CollateralInquiry_message_t_0.insert("CashOutstanding_t_96503218");
  elt.add_attribute("Side", "D"); // 0
  CollateralInquiry_message_t_0.insert("D");
  elt.add_attribute("Px", "1786697.580000"); // 0
  CollateralInquiry_message_t_0.insert("1786697.580000");
  elt.add_attribute("PxTyp", "18"); // 0
  CollateralInquiry_message_t_0.insert("18");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_805133305"); // 0
  CollateralInquiry_message_t_0.insert("AccruedInterestAmt_t_805133305");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_654245856"); // 0
  CollateralInquiry_message_t_0.insert("EndAccruedInterestAmt_t_654245856");
  elt.add_attribute("StartCsh", "StartCash_t_624041408"); // 0
  CollateralInquiry_message_t_0.insert("StartCash_t_624041408");
  elt.add_attribute("EndCsh", "EndCash_t_2050793822"); // 0
  CollateralInquiry_message_t_0.insert("EndCash_t_2050793822");
  elt.add_attribute("SesID", "6"); // 0
  CollateralInquiry_message_t_0.insert("6");
  elt.add_attribute("SesSub", "5"); // 0
  CollateralInquiry_message_t_0.insert("5");
  elt.add_attribute("SetSesID", "RTH"); // 0
  CollateralInquiry_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1391375405"); // 0
  CollateralInquiry_message_t_0.insert("SettlSessSubID_t_1391375405");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1037379707"); // 0
  CollateralInquiry_message_t_0.insert("ClearingBusinessDate_t_1037379707");
  elt.add_attribute("Txt", "Text_t_1611410017"); // 0
  CollateralInquiry_message_t_0.insert("Text_t_1611410017");
  elt.add_attribute("EncTxtLen", "95337536"); // 0
  CollateralInquiry_message_t_0.insert("95337536");
  elt.add_attribute("EncTxt", "EncodedText_t_1266414855"); // 0
  CollateralInquiry_message_t_0.insert("EncodedText_t_1266414855");
  all_values.push_back(CollateralInquiry_message_t_0);
  all_compo_names.insert("CollateralInquiry_message_t");

  { // Hdr
    xml_element Hdr_15{"Hdr"};
    multiset<string> Hdr_15_set;
    Hdr_15.add_attribute("SeqNum", "1225486842"); // 1
    Hdr_15_set.insert("1225486842");
    Hdr_15.add_attribute("SID", "SenderCompID_t_568953532"); // 1
    Hdr_15_set.insert("SenderCompID_t_568953532");
    Hdr_15.add_attribute("TID", "TargetCompID_t_52718660"); // 1
    Hdr_15_set.insert("TargetCompID_t_52718660");
    Hdr_15.add_attribute("OBID", "OnBehalfOfCompID_t_12316258"); // 1
    Hdr_15_set.insert("OnBehalfOfCompID_t_12316258");
    Hdr_15.add_attribute("D2ID", "DeliverToCompID_t_1844483609"); // 1
    Hdr_15_set.insert("DeliverToCompID_t_1844483609");
    Hdr_15.add_attribute("SSub", "SenderSubID_t_1260861168"); // 1
    Hdr_15_set.insert("SenderSubID_t_1260861168");
    Hdr_15.add_attribute("SLoc", "SenderLocationID_t_499223497"); // 1
    Hdr_15_set.insert("SenderLocationID_t_499223497");
    Hdr_15.add_attribute("TSub", "TargetSubID_t_1411102894"); // 1
    Hdr_15_set.insert("TargetSubID_t_1411102894");
    Hdr_15.add_attribute("TLoc", "TargetLocationID_t_1359319831"); // 1
    Hdr_15_set.insert("TargetLocationID_t_1359319831");
    Hdr_15.add_attribute("OBSub", "OnBehalfOfSubID_t_245428563"); // 1
    Hdr_15_set.insert("OnBehalfOfSubID_t_245428563");
    Hdr_15.add_attribute("OBLoc", "OnBehalfOfLocationID_t_511438829"); // 1
    Hdr_15_set.insert("OnBehalfOfLocationID_t_511438829");
    Hdr_15.add_attribute("D2Sub", "DeliverToSubID_t_1077149799"); // 1
    Hdr_15_set.insert("DeliverToSubID_t_1077149799");
    Hdr_15.add_attribute("D2Loc", "DeliverToLocationID_t_1367434214"); // 1
    Hdr_15_set.insert("DeliverToLocationID_t_1367434214");
    Hdr_15.add_attribute("PosDup", "Y"); // 1
    Hdr_15_set.insert("Y");
    Hdr_15.add_attribute("PosRsnd", "N"); // 1
    Hdr_15_set.insert("N");
    Hdr_15.add_attribute("Snt", "SendingTime_t_1463937432"); // 1
    Hdr_15_set.insert("SendingTime_t_1463937432");
    Hdr_15.add_attribute("OrigSnt", "OrigSendingTime_t_785248141"); // 1
    Hdr_15_set.insert("OrigSendingTime_t_785248141");
    Hdr_15.add_attribute("MsgEncd", "MessageEncoding_t_724914110"); // 1
    Hdr_15_set.insert("MessageEncoding_t_724914110");
    all_values.push_back(Hdr_15_set);
    all_compo_names.insert("Hdr_15_set");

    {
      xml_element Hop_15{"Hop"};
      multiset<string> Hop_15_set;
      Hop_15.add_attribute("ID", "HopCompID_t_462941067"); // 2
      Hop_15_set.insert("HopCompID_t_462941067");
      Hop_15.add_attribute("Ref", "1590381446"); // 2
      Hop_15_set.insert("1590381446");
      Hop_15.add_attribute("Snt", "HopSendingTime_t_1379159966"); // 2
      Hop_15_set.insert("HopSendingTime_t_1379159966");
      all_values.push_back(Hop_15_set);
      all_compo_names.insert("Hop_15_set");

      Hdr_15.add_element(Hop_15);
    }
    elt.add_element(Hdr_15);
  } // end Hdr
  { // Qual
    xml_element Qual_0{"Qual"};
    multiset<string> Qual_0_set;
    Qual_0.add_attribute("Qual", "4"); // 1
    Qual_0_set.insert("4");
    all_values.push_back(Qual_0_set);
    all_compo_names.insert("Qual_0_set");

    elt.add_element(Qual_0);
  } // end Qual
  { // Qual
    xml_element Qual_1{"Qual"};
    multiset<string> Qual_1_set;
    Qual_1.add_attribute("Qual", "5"); // 1
    Qual_1_set.insert("5");
    all_values.push_back(Qual_1_set);
    all_compo_names.insert("Qual_1_set");

    elt.add_element(Qual_1);
  } // end Qual
  { // Qual
    xml_element Qual_2{"Qual"};
    multiset<string> Qual_2_set;
    Qual_2.add_attribute("Qual", "3"); // 1
    Qual_2_set.insert("3");
    all_values.push_back(Qual_2_set);
    all_compo_names.insert("Qual_2_set");

    elt.add_element(Qual_2);
  } // end Qual
  { // Pty
    xml_element Pty_77{"Pty"};
    multiset<string> Pty_77_set;
    Pty_77.add_attribute("ID", "PartyID_t_1222825618"); // 1
    Pty_77_set.insert("PartyID_t_1222825618");
    Pty_77.add_attribute("Src", "B"); // 1
    Pty_77_set.insert("B");
    Pty_77.add_attribute("R", "85"); // 1
    Pty_77_set.insert("85");
    all_values.push_back(Pty_77_set);
    all_compo_names.insert("Pty_77_set");

    {
      xml_element Sub_77{"Sub"};
      multiset<string> Sub_77_set;
      Sub_77.add_attribute("ID", "PartySubID_t_1318163155"); // 2
      Sub_77_set.insert("PartySubID_t_1318163155");
      Sub_77.add_attribute("Typ", "30"); // 2
      Sub_77_set.insert("30");
      all_values.push_back(Sub_77_set);
      all_compo_names.insert("Sub_77_set");

      Pty_77.add_element(Sub_77);
    }
    elt.add_element(Pty_77);
  } // end Pty
  { // CollExc
    xml_element CollExc_3{"CollExc"};
    multiset<string> CollExc_3_set;
    CollExc_3.add_attribute("ExecID", "ExecID_t_1887116687"); // 1
    CollExc_3_set.insert("ExecID_t_1887116687");
    all_values.push_back(CollExc_3_set);
    all_compo_names.insert("CollExc_3_set");

    elt.add_element(CollExc_3);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_3{"TrdColl"};
    multiset<string> TrdColl_3_set;
    TrdColl_3.add_attribute("RptID", "TradeReportID_t_219947168"); // 1
    TrdColl_3_set.insert("TradeReportID_t_219947168");
    TrdColl_3.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1584116648"); // 1
    TrdColl_3_set.insert("SecondaryTradeReportID_t_1584116648");
    all_values.push_back(TrdColl_3_set);
    all_compo_names.insert("TrdColl_3_set");

    elt.add_element(TrdColl_3);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_4{"TrdColl"};
    multiset<string> TrdColl_4_set;
    TrdColl_4.add_attribute("RptID", "TradeReportID_t_1350003409"); // 1
    TrdColl_4_set.insert("TradeReportID_t_1350003409");
    TrdColl_4.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_719170665"); // 1
    TrdColl_4_set.insert("SecondaryTradeReportID_t_719170665");
    all_values.push_back(TrdColl_4_set);
    all_compo_names.insert("TrdColl_4_set");

    elt.add_element(TrdColl_4);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_9{"Instrmt"};
    multiset<string> Instrmt_9_set;
    Instrmt_9.add_attribute("Sym", "Symbol_t_847735894"); // 1
    Instrmt_9_set.insert("Symbol_t_847735894");
    Instrmt_9.add_attribute("Sfx", "WI"); // 1
    Instrmt_9_set.insert("WI");
    Instrmt_9.add_attribute("ID", "SecurityID_t_964599228"); // 1
    Instrmt_9_set.insert("SecurityID_t_964599228");
    Instrmt_9.add_attribute("Src", "6"); // 1
    Instrmt_9_set.insert("6");
    Instrmt_9.add_attribute("Prod", "10"); // 1
    Instrmt_9_set.insert("10");
    Instrmt_9.add_attribute("ProdCmplx", "ProductComplex_t_184549795"); // 1
    Instrmt_9_set.insert("ProductComplex_t_184549795");
    Instrmt_9.add_attribute("SecGrp", "SecurityGroup_t_1865301972"); // 1
    Instrmt_9_set.insert("SecurityGroup_t_1865301972");
    Instrmt_9.add_attribute("CFI", "CFICode_t_37750096"); // 1
    Instrmt_9_set.insert("CFICode_t_37750096");
    Instrmt_9.add_attribute("SecTyp", "USTB"); // 1
    Instrmt_9_set.insert("USTB");
    Instrmt_9.add_attribute("SubTyp", "SecuritySubType_t_503066465"); // 1
    Instrmt_9_set.insert("SecuritySubType_t_503066465");
    Instrmt_9.add_attribute("MMY", "762664206"); // 1
    Instrmt_9_set.insert("762664206");
    Instrmt_9.add_attribute("MatDt", "MaturityDate_t_2111428294"); // 1
    Instrmt_9_set.insert("MaturityDate_t_2111428294");
    Instrmt_9.add_attribute("MatTm", "2093447911"); // 1
    Instrmt_9_set.insert("2093447911");
    Instrmt_9.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_2141824173"); // 1
    Instrmt_9_set.insert("SettleOnOpenFlag_t_2141824173");
    Instrmt_9.add_attribute("AsgnMeth", "1050927122"); // 1
    Instrmt_9_set.insert("1050927122");
    Instrmt_9.add_attribute("Status", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("CpnPmt", "CouponPaymentDate_t_1973274386"); // 1
    Instrmt_9_set.insert("CouponPaymentDate_t_1973274386");
    Instrmt_9.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_9_set.insert("MR");
    Instrmt_9.add_attribute("Snrty", "SD"); // 1
    Instrmt_9_set.insert("SD");
    Instrmt_9.add_attribute("NotlPctOut", "10486163.570000"); // 1
    Instrmt_9_set.insert("10486163.570000");
    Instrmt_9.add_attribute("OrigNotlPctOut", "18485321.630000"); // 1
    Instrmt_9_set.insert("18485321.630000");
    Instrmt_9.add_attribute("AttchPnt", "20875012.970000"); // 1
    Instrmt_9_set.insert("20875012.970000");
    Instrmt_9.add_attribute("DetchPnt", "2192958.640000"); // 1
    Instrmt_9_set.insert("2192958.640000");
    Instrmt_9.add_attribute("Issued", "IssueDate_t_1884955744"); // 1
    Instrmt_9_set.insert("IssueDate_t_1884955744");
    Instrmt_9.add_attribute("RepoCollSecTyp", "147648559"); // 1
    Instrmt_9_set.insert("147648559");
    Instrmt_9.add_attribute("RepoTrm", "2106412551"); // 1
    Instrmt_9_set.insert("2106412551");
    Instrmt_9.add_attribute("RepoRt", "19740979.860000"); // 1
    Instrmt_9_set.insert("19740979.860000");
    Instrmt_9.add_attribute("Fctr", "3675957.270000"); // 1
    Instrmt_9_set.insert("3675957.270000");
    Instrmt_9.add_attribute("CrdRtg", "CreditRating_t_1543045551"); // 1
    Instrmt_9_set.insert("CreditRating_t_1543045551");
    Instrmt_9.add_attribute("Rgstry", "InstrRegistry_t_1176617747"); // 1
    Instrmt_9_set.insert("InstrRegistry_t_1176617747");
    Instrmt_9.add_attribute("IssuCtry", "1086766392"); // 1
    Instrmt_9_set.insert("1086766392");
    Instrmt_9.add_attribute("StPrv", "StateOrProvinceOfIssue_t_243297797"); // 1
    Instrmt_9_set.insert("StateOrProvinceOfIssue_t_243297797");
    Instrmt_9.add_attribute("Lcl", "LocaleOfIssue_t_1738457340"); // 1
    Instrmt_9_set.insert("LocaleOfIssue_t_1738457340");
    Instrmt_9.add_attribute("Redeem", "RedemptionDate_t_2051365621"); // 1
    Instrmt_9_set.insert("RedemptionDate_t_2051365621");
    Instrmt_9.add_attribute("StrkPx", "16024725.200000"); // 1
    Instrmt_9_set.insert("16024725.200000");
    Instrmt_9.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_9_set.insert("USD");
    Instrmt_9.add_attribute("StrkMult", "13202908.440000"); // 1
    Instrmt_9_set.insert("13202908.440000");
    Instrmt_9.add_attribute("StrkValu", "12677131.800000"); // 1
    Instrmt_9_set.insert("12677131.800000");
    Instrmt_9.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_9_set.insert("4");
    Instrmt_9.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_9_set.insert("5");
    Instrmt_9.add_attribute("StrkPxBndryPrcsn", "20303773.870000"); // 1
    Instrmt_9_set.insert("20303773.870000");
    Instrmt_9.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_9_set.insert("3");
    Instrmt_9.add_attribute("OptAt", "1769321572"); // 1
    Instrmt_9_set.insert("1769321572");
    Instrmt_9.add_attribute("Mult", "20247179.120000"); // 1
    Instrmt_9_set.insert("20247179.120000");
    Instrmt_9.add_attribute("MultTyp", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_9_set.insert("3");
    Instrmt_9.add_attribute("MinPxIncr", "18505086.500000"); // 1
    Instrmt_9_set.insert("18505086.500000");
    Instrmt_9.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1535346905"); // 1
    Instrmt_9_set.insert("MinPriceIncrementAmount_t_1535346905");
    Instrmt_9.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_9_set.insert("MMBtu");
    Instrmt_9.add_attribute("UOMQty", "7516413.590000"); // 1
    Instrmt_9_set.insert("7516413.590000");
    Instrmt_9.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_9_set.insert("MWh");
    Instrmt_9.add_attribute("PxUOMQty", "19593850.400000"); // 1
    Instrmt_9_set.insert("19593850.400000");
    Instrmt_9.add_attribute("SettlMeth", "P"); // 1
    Instrmt_9_set.insert("P");
    Instrmt_9.add_attribute("ExerStyle", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("OptPayAmt", "OptPayoutAmount_t_929866126"); // 1
    Instrmt_9_set.insert("OptPayoutAmount_t_929866126");
    Instrmt_9.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_9_set.insert("INT");
    Instrmt_9.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_9_set.insert("CDS");
    Instrmt_9.add_attribute("ListMeth", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("CapPx", "19770996.020000"); // 1
    Instrmt_9_set.insert("19770996.020000");
    Instrmt_9.add_attribute("FlrPx", "14139120.700000"); // 1
    Instrmt_9_set.insert("14139120.700000");
    Instrmt_9.add_attribute("PutCall", "0"); // 1
    Instrmt_9_set.insert("0");
    Instrmt_9.add_attribute("FlexInd", "true"); // 1
    Instrmt_9_set.insert("true");
    Instrmt_9.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_9_set.insert("false");
    Instrmt_9.add_attribute("TmUnit", "S"); // 1
    Instrmt_9_set.insert("S");
    Instrmt_9.add_attribute("CpnRt", "6505527.310000"); // 1
    Instrmt_9_set.insert("6505527.310000");
    Instrmt_9.add_attribute("Exch", "SecurityExchange_t_1406225811"); // 1
    Instrmt_9_set.insert("SecurityExchange_t_1406225811");
    Instrmt_9.add_attribute("PosLmt", "1344005542"); // 1
    Instrmt_9_set.insert("1344005542");
    Instrmt_9.add_attribute("NTPosLmt", "1918265911"); // 1
    Instrmt_9_set.insert("1918265911");
    Instrmt_9.add_attribute("Issr", "Issuer_t_995661159"); // 1
    Instrmt_9_set.insert("Issuer_t_995661159");
    Instrmt_9.add_attribute("EncIssrLen", "1019879203"); // 1
    Instrmt_9_set.insert("1019879203");
    Instrmt_9.add_attribute("EncIssr", "EncodedIssuer_t_1801159650"); // 1
    Instrmt_9_set.insert("EncodedIssuer_t_1801159650");
    Instrmt_9.add_attribute("Desc", "SecurityDesc_t_549041153"); // 1
    Instrmt_9_set.insert("SecurityDesc_t_549041153");
    Instrmt_9.add_attribute("EncSecDescLen", "641717128"); // 1
    Instrmt_9_set.insert("641717128");
    Instrmt_9.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1678393914"); // 1
    Instrmt_9_set.insert("EncodedSecurityDesc_t_1678393914");
    Instrmt_9.add_attribute("Pool", "Pool_t_1153348269"); // 1
    Instrmt_9_set.insert("Pool_t_1153348269");
    Instrmt_9.add_attribute("CSetMo", "1703210936"); // 1
    Instrmt_9_set.insert("1703210936");
    Instrmt_9.add_attribute("CPPgm", "2"); // 1
    Instrmt_9_set.insert("2");
    Instrmt_9.add_attribute("CPRegT", "CPRegType_t_541211526"); // 1
    Instrmt_9_set.insert("CPRegType_t_541211526");
    Instrmt_9.add_attribute("Dated", "DatedDate_t_1575094679"); // 1
    Instrmt_9_set.insert("DatedDate_t_1575094679");
    Instrmt_9.add_attribute("IntAcrl", "InterestAccrualDate_t_2133060276"); // 1
    Instrmt_9_set.insert("InterestAccrualDate_t_2133060276");
    all_values.push_back(Instrmt_9_set);
    all_compo_names.insert("Instrmt_9_set");

    {
      xml_element AID_9{"AID"};
      multiset<string> AID_9_set;
      AID_9.add_attribute("AltID", "SecurityAltID_t_1777606946"); // 2
      AID_9_set.insert("SecurityAltID_t_1777606946");
      AID_9.add_attribute("AltIDSrc", "M"); // 2
      AID_9_set.insert("M");
      all_values.push_back(AID_9_set);
      all_compo_names.insert("AID_9_set");

      Instrmt_9.add_element(AID_9);
    }
    {
      xml_element SecXML_9{"SecXML"};
      multiset<string> SecXML_9_set;
      SecXML_9.add_attribute("Schema", "SecurityXMLSchema_t_956513852"); // 2
      SecXML_9_set.insert("SecurityXMLSchema_t_956513852");
      all_values.push_back(SecXML_9_set);
      all_compo_names.insert("SecXML_9_set");

      Instrmt_9.add_element(SecXML_9);
    }
    {
      xml_element Evnt_9{"Evnt"};
      multiset<string> Evnt_9_set;
      Evnt_9.add_attribute("EventTyp", "14"); // 2
      Evnt_9_set.insert("14");
      Evnt_9.add_attribute("Dt", "EventDate_t_1346546022"); // 2
      Evnt_9_set.insert("EventDate_t_1346546022");
      Evnt_9.add_attribute("Tm", "EventTime_t_1886379978"); // 2
      Evnt_9_set.insert("EventTime_t_1886379978");
      Evnt_9.add_attribute("Px", "14044726.690000"); // 2
      Evnt_9_set.insert("14044726.690000");
      Evnt_9.add_attribute("Txt", "EventText_t_1673691700"); // 2
      Evnt_9_set.insert("EventText_t_1673691700");
      all_values.push_back(Evnt_9_set);
      all_compo_names.insert("Evnt_9_set");

      Instrmt_9.add_element(Evnt_9);
    }
    {
      xml_element Pty_78{"Pty"};
      multiset<string> Pty_78_set;
      Pty_78.add_attribute("ID", "InstrumentPartyID_t_64324360"); // 2
      Pty_78_set.insert("InstrumentPartyID_t_64324360");
      Pty_78.add_attribute("Src", "2"); // 2
      Pty_78_set.insert("2");
      Pty_78.add_attribute("R", "27"); // 2
      Pty_78_set.insert("27");
      all_values.push_back(Pty_78_set);
      all_compo_names.insert("Pty_78_set");

      {
        xml_element Sub_78{"Sub"};
        multiset<string> Sub_78_set;
        Sub_78.add_attribute("ID", "InstrumentPartySubID_t_633050186"); // 3
        Sub_78_set.insert("InstrumentPartySubID_t_633050186");
        Sub_78.add_attribute("Typ", "22"); // 3
        Sub_78_set.insert("22");
        all_values.push_back(Sub_78_set);
        all_compo_names.insert("Sub_78_set");

        Pty_78.add_element(Sub_78);
      }
      Instrmt_9.add_element(Pty_78);
    }
    {
      xml_element CmplxEvnt_9{"CmplxEvnt"};
      multiset<string> CmplxEvnt_9_set;
      CmplxEvnt_9.add_attribute("Typ", "6"); // 2
      CmplxEvnt_9_set.insert("6");
      CmplxEvnt_9.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_656764885"); // 2
      CmplxEvnt_9_set.insert("ComplexOptPayoutAmount_t_656764885");
      CmplxEvnt_9.add_attribute("Px", "13052310.000000"); // 2
      CmplxEvnt_9_set.insert("13052310.000000");
      CmplxEvnt_9.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_9_set.insert("5");
      CmplxEvnt_9.add_attribute("PxBndryPrcsn", "20007704.270000"); // 2
      CmplxEvnt_9_set.insert("20007704.270000");
      CmplxEvnt_9.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_9_set.insert("1");
      CmplxEvnt_9.add_attribute("Cond", "1"); // 2
      CmplxEvnt_9_set.insert("1");
      all_values.push_back(CmplxEvnt_9_set);
      all_compo_names.insert("CmplxEvnt_9_set");

      {
        xml_element EvntDts_9{"EvntDts"};
        multiset<string> EvntDts_9_set;
        EvntDts_9.add_attribute("StartDt", "ComplexEventStartDate_t_873165983"); // 3
        EvntDts_9_set.insert("ComplexEventStartDate_t_873165983");
        EvntDts_9.add_attribute("EndDt", "ComplexEventEndDate_t_729689266"); // 3
        EvntDts_9_set.insert("ComplexEventEndDate_t_729689266");
        all_values.push_back(EvntDts_9_set);
        all_compo_names.insert("EvntDts_9_set");

        {
          xml_element EvntTms_9{"EvntTms"};
          multiset<string> EvntTms_9_set;
          EvntTms_9.add_attribute("StartTm", "913874993"); // 4
          EvntTms_9_set.insert("913874993");
          EvntTms_9.add_attribute("EndTm", "1514883111"); // 4
          EvntTms_9_set.insert("1514883111");
          all_values.push_back(EvntTms_9_set);
          all_compo_names.insert("EvntTms_9_set");

          EvntDts_9.add_element(EvntTms_9);
        }
        CmplxEvnt_9.add_element(EvntDts_9);
      }
      Instrmt_9.add_element(CmplxEvnt_9);
    }
    elt.add_element(Instrmt_9);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_4{"FinDetls"};
    multiset<string> FinDetls_4_set;
    FinDetls_4.add_attribute("AgmtDesc", "AgreementDesc_t_260599533"); // 1
    FinDetls_4_set.insert("AgreementDesc_t_260599533");
    FinDetls_4.add_attribute("AgmtID", "AgreementID_t_2067223262"); // 1
    FinDetls_4_set.insert("AgreementID_t_2067223262");
    FinDetls_4.add_attribute("AgmtDt", "AgreementDate_t_1070610399"); // 1
    FinDetls_4_set.insert("AgreementDate_t_1070610399");
    FinDetls_4.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_4_set.insert("USD");
    FinDetls_4.add_attribute("TrmTyp", "3"); // 1
    FinDetls_4_set.insert("3");
    FinDetls_4.add_attribute("StartDt", "StartDate_t_1627595078"); // 1
    FinDetls_4_set.insert("StartDate_t_1627595078");
    FinDetls_4.add_attribute("EndDt", "EndDate_t_91074438"); // 1
    FinDetls_4_set.insert("EndDate_t_91074438");
    FinDetls_4.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_4_set.insert("1");
    FinDetls_4.add_attribute("MgnRatio", "4366252.820000"); // 1
    FinDetls_4_set.insert("4366252.820000");
    all_values.push_back(FinDetls_4_set);
    all_compo_names.insert("FinDetls_4_set");

    elt.add_element(FinDetls_4);
  } // end FinDetls
  { // Leg
    xml_element Leg_13{"Leg"};
    multiset<string> Leg_13_set;
    Leg_13.add_attribute("Sym", "LegSymbol_t_1084279875"); // 1
    Leg_13_set.insert("LegSymbol_t_1084279875");
    Leg_13.add_attribute("Sfx", "WI"); // 1
    Leg_13_set.insert("WI");
    Leg_13.add_attribute("ID", "LegSecurityID_t_2099537922"); // 1
    Leg_13_set.insert("LegSecurityID_t_2099537922");
    Leg_13.add_attribute("Src", "6"); // 1
    Leg_13_set.insert("6");
    Leg_13.add_attribute("Prod", "12"); // 1
    Leg_13_set.insert("12");
    Leg_13.add_attribute("CFI", "LegCFICode_t_1186142897"); // 1
    Leg_13_set.insert("LegCFICode_t_1186142897");
    Leg_13.add_attribute("SecTyp", "DN"); // 1
    Leg_13_set.insert("DN");
    Leg_13.add_attribute("SecSubTyp", "LegSecuritySubType_t_872896159"); // 1
    Leg_13_set.insert("LegSecuritySubType_t_872896159");
    Leg_13.add_attribute("MMY", "1840821166"); // 1
    Leg_13_set.insert("1840821166");
    Leg_13.add_attribute("Mat", "LegMaturityDate_t_1661038568"); // 1
    Leg_13_set.insert("LegMaturityDate_t_1661038568");
    Leg_13.add_attribute("MatTm", "1529661044"); // 1
    Leg_13_set.insert("1529661044");
    Leg_13.add_attribute("CpnPmt", "LegCouponPaymentDate_t_998568519"); // 1
    Leg_13_set.insert("LegCouponPaymentDate_t_998568519");
    Leg_13.add_attribute("Issued", "LegIssueDate_t_1030211249"); // 1
    Leg_13_set.insert("LegIssueDate_t_1030211249");
    Leg_13.add_attribute("RepoCollSecTyp", "1382947824"); // 1
    Leg_13_set.insert("1382947824");
    Leg_13.add_attribute("RepoTrm", "2074581783"); // 1
    Leg_13_set.insert("2074581783");
    Leg_13.add_attribute("RepoRt", "13950450.900000"); // 1
    Leg_13_set.insert("13950450.900000");
    Leg_13.add_attribute("Fctr", "1086301.590000"); // 1
    Leg_13_set.insert("1086301.590000");
    Leg_13.add_attribute("CrdRtg", "LegCreditRating_t_656787401"); // 1
    Leg_13_set.insert("LegCreditRating_t_656787401");
    Leg_13.add_attribute("Rgstry", "LegInstrRegistry_t_161436435"); // 1
    Leg_13_set.insert("LegInstrRegistry_t_161436435");
    Leg_13.add_attribute("Ctry", "1623513270"); // 1
    Leg_13_set.insert("1623513270");
    Leg_13.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_917386934"); // 1
    Leg_13_set.insert("LegStateOrProvinceOfIssue_t_917386934");
    Leg_13.add_attribute("Lcl", "LegLocaleOfIssue_t_81176050"); // 1
    Leg_13_set.insert("LegLocaleOfIssue_t_81176050");
    Leg_13.add_attribute("Redeem", "LegRedemptionDate_t_546640021"); // 1
    Leg_13_set.insert("LegRedemptionDate_t_546640021");
    Leg_13.add_attribute("Strk", "4119217.360000"); // 1
    Leg_13_set.insert("4119217.360000");
    Leg_13.add_attribute("StrkCcy", "GBP"); // 1
    Leg_13_set.insert("GBP");
    Leg_13.add_attribute("OptA", "2039516815"); // 1
    Leg_13_set.insert("2039516815");
    Leg_13.add_attribute("Cmult", "6332016.290000"); // 1
    Leg_13_set.insert("6332016.290000");
    Leg_13.add_attribute("MultTyp", "2"); // 1
    Leg_13_set.insert("2");
    Leg_13.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_13_set.insert("4");
    Leg_13.add_attribute("UOM", "lbs"); // 1
    Leg_13_set.insert("lbs");
    Leg_13.add_attribute("UOMQty", "18668751.810000"); // 1
    Leg_13_set.insert("18668751.810000");
    Leg_13.add_attribute("PxUOM", "USD"); // 1
    Leg_13_set.insert("USD");
    Leg_13.add_attribute("PxUOMQty", "12803211.560000"); // 1
    Leg_13_set.insert("12803211.560000");
    Leg_13.add_attribute("TmUnit", "Min"); // 1
    Leg_13_set.insert("Min");
    Leg_13.add_attribute("ExerStyle", "1"); // 1
    Leg_13_set.insert("1");
    Leg_13.add_attribute("CpnRt", "3189804.050000"); // 1
    Leg_13_set.insert("3189804.050000");
    Leg_13.add_attribute("Exch", "LegSecurityExchange_t_1880487510"); // 1
    Leg_13_set.insert("LegSecurityExchange_t_1880487510");
    Leg_13.add_attribute("Issr", "LegIssuer_t_1616922195"); // 1
    Leg_13_set.insert("LegIssuer_t_1616922195");
    Leg_13.add_attribute("EncLegIssrLen", "12317923"); // 1
    Leg_13_set.insert("12317923");
    Leg_13.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1394042430"); // 1
    Leg_13_set.insert("EncodedLegIssuer_t_1394042430");
    Leg_13.add_attribute("Desc", "LegSecurityDesc_t_999099591"); // 1
    Leg_13_set.insert("LegSecurityDesc_t_999099591");
    Leg_13.add_attribute("EncLegSecDescLen", "1010886442"); // 1
    Leg_13_set.insert("1010886442");
    Leg_13.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_276770032"); // 1
    Leg_13_set.insert("EncodedLegSecurityDesc_t_276770032");
    Leg_13.add_attribute("RatioQty", "2345637.670000"); // 1
    Leg_13_set.insert("2345637.670000");
    Leg_13.add_attribute("Side", "2"); // 1
    Leg_13_set.insert("2");
    Leg_13.add_attribute("Ccy", "JPY"); // 1
    Leg_13_set.insert("JPY");
    Leg_13.add_attribute("Pool", "LegPool_t_1594771979"); // 1
    Leg_13_set.insert("LegPool_t_1594771979");
    Leg_13.add_attribute("Dated", "LegDatedDate_t_1833251557"); // 1
    Leg_13_set.insert("LegDatedDate_t_1833251557");
    Leg_13.add_attribute("CSetMo", "1966707196"); // 1
    Leg_13_set.insert("1966707196");
    Leg_13.add_attribute("IntAcrl", "LegInterestAccrualDate_t_364675265"); // 1
    Leg_13_set.insert("LegInterestAccrualDate_t_364675265");
    Leg_13.add_attribute("PutCall", "1914427607"); // 1
    Leg_13_set.insert("1914427607");
    Leg_13.add_attribute("LegOptionRatio", "3658635.700000"); // 1
    Leg_13_set.insert("3658635.700000");
    Leg_13.add_attribute("Px", "7765970.020000"); // 1
    Leg_13_set.insert("7765970.020000");
    all_values.push_back(Leg_13_set);
    all_compo_names.insert("Leg_13_set");

    {
      xml_element LegAID_13{"LegAID"};
      multiset<string> LegAID_13_set;
      LegAID_13.add_attribute("SecAltID", "LegSecurityAltID_t_309071150"); // 2
      LegAID_13_set.insert("LegSecurityAltID_t_309071150");
      LegAID_13.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_13_set.insert("F");
      all_values.push_back(LegAID_13_set);
      all_compo_names.insert("LegAID_13_set");

      Leg_13.add_element(LegAID_13);
    }
    elt.add_element(Leg_13);
  } // end Leg
  { // Leg
    xml_element Leg_14{"Leg"};
    multiset<string> Leg_14_set;
    Leg_14.add_attribute("Sym", "LegSymbol_t_668630169"); // 1
    Leg_14_set.insert("LegSymbol_t_668630169");
    Leg_14.add_attribute("Sfx", "WI"); // 1
    Leg_14_set.insert("WI");
    Leg_14.add_attribute("ID", "LegSecurityID_t_45836679"); // 1
    Leg_14_set.insert("LegSecurityID_t_45836679");
    Leg_14.add_attribute("Src", "J"); // 1
    Leg_14_set.insert("J");
    Leg_14.add_attribute("Prod", "11"); // 1
    Leg_14_set.insert("11");
    Leg_14.add_attribute("CFI", "LegCFICode_t_1912711860"); // 1
    Leg_14_set.insert("LegCFICode_t_1912711860");
    Leg_14.add_attribute("SecTyp", "BDN"); // 1
    Leg_14_set.insert("BDN");
    Leg_14.add_attribute("SecSubTyp", "LegSecuritySubType_t_1403377169"); // 1
    Leg_14_set.insert("LegSecuritySubType_t_1403377169");
    Leg_14.add_attribute("MMY", "95107673"); // 1
    Leg_14_set.insert("95107673");
    Leg_14.add_attribute("Mat", "LegMaturityDate_t_98011068"); // 1
    Leg_14_set.insert("LegMaturityDate_t_98011068");
    Leg_14.add_attribute("MatTm", "1722357574"); // 1
    Leg_14_set.insert("1722357574");
    Leg_14.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1975595183"); // 1
    Leg_14_set.insert("LegCouponPaymentDate_t_1975595183");
    Leg_14.add_attribute("Issued", "LegIssueDate_t_1714933263"); // 1
    Leg_14_set.insert("LegIssueDate_t_1714933263");
    Leg_14.add_attribute("RepoCollSecTyp", "1734675497"); // 1
    Leg_14_set.insert("1734675497");
    Leg_14.add_attribute("RepoTrm", "1222153966"); // 1
    Leg_14_set.insert("1222153966");
    Leg_14.add_attribute("RepoRt", "5665492.070000"); // 1
    Leg_14_set.insert("5665492.070000");
    Leg_14.add_attribute("Fctr", "5980782.920000"); // 1
    Leg_14_set.insert("5980782.920000");
    Leg_14.add_attribute("CrdRtg", "LegCreditRating_t_1498923998"); // 1
    Leg_14_set.insert("LegCreditRating_t_1498923998");
    Leg_14.add_attribute("Rgstry", "LegInstrRegistry_t_801112974"); // 1
    Leg_14_set.insert("LegInstrRegistry_t_801112974");
    Leg_14.add_attribute("Ctry", "1536062869"); // 1
    Leg_14_set.insert("1536062869");
    Leg_14.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1023255472"); // 1
    Leg_14_set.insert("LegStateOrProvinceOfIssue_t_1023255472");
    Leg_14.add_attribute("Lcl", "LegLocaleOfIssue_t_1144306901"); // 1
    Leg_14_set.insert("LegLocaleOfIssue_t_1144306901");
    Leg_14.add_attribute("Redeem", "LegRedemptionDate_t_983351200"); // 1
    Leg_14_set.insert("LegRedemptionDate_t_983351200");
    Leg_14.add_attribute("Strk", "7090233.810000"); // 1
    Leg_14_set.insert("7090233.810000");
    Leg_14.add_attribute("StrkCcy", "JPY"); // 1
    Leg_14_set.insert("JPY");
    Leg_14.add_attribute("OptA", "475967341"); // 1
    Leg_14_set.insert("475967341");
    Leg_14.add_attribute("Cmult", "13293940.190000"); // 1
    Leg_14_set.insert("13293940.190000");
    Leg_14.add_attribute("MultTyp", "2"); // 1
    Leg_14_set.insert("2");
    Leg_14.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_14_set.insert("1");
    Leg_14.add_attribute("UOM", "Alw"); // 1
    Leg_14_set.insert("Alw");
    Leg_14.add_attribute("UOMQty", "6457699.890000"); // 1
    Leg_14_set.insert("6457699.890000");
    Leg_14.add_attribute("PxUOM", "USD"); // 1
    Leg_14_set.insert("USD");
    Leg_14.add_attribute("PxUOMQty", "6384720.730000"); // 1
    Leg_14_set.insert("6384720.730000");
    Leg_14.add_attribute("TmUnit", "Min"); // 1
    Leg_14_set.insert("Min");
    Leg_14.add_attribute("ExerStyle", "1"); // 1
    Leg_14_set.insert("1");
    Leg_14.add_attribute("CpnRt", "4037002.850000"); // 1
    Leg_14_set.insert("4037002.850000");
    Leg_14.add_attribute("Exch", "LegSecurityExchange_t_997043640"); // 1
    Leg_14_set.insert("LegSecurityExchange_t_997043640");
    Leg_14.add_attribute("Issr", "LegIssuer_t_1106260804"); // 1
    Leg_14_set.insert("LegIssuer_t_1106260804");
    Leg_14.add_attribute("EncLegIssrLen", "498807958"); // 1
    Leg_14_set.insert("498807958");
    Leg_14.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1095054709"); // 1
    Leg_14_set.insert("EncodedLegIssuer_t_1095054709");
    Leg_14.add_attribute("Desc", "LegSecurityDesc_t_681134730"); // 1
    Leg_14_set.insert("LegSecurityDesc_t_681134730");
    Leg_14.add_attribute("EncLegSecDescLen", "326919494"); // 1
    Leg_14_set.insert("326919494");
    Leg_14.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_662504324"); // 1
    Leg_14_set.insert("EncodedLegSecurityDesc_t_662504324");
    Leg_14.add_attribute("RatioQty", "2683265.790000"); // 1
    Leg_14_set.insert("2683265.790000");
    Leg_14.add_attribute("Side", "5"); // 1
    Leg_14_set.insert("5");
    Leg_14.add_attribute("Ccy", "CAN"); // 1
    Leg_14_set.insert("CAN");
    Leg_14.add_attribute("Pool", "LegPool_t_900513810"); // 1
    Leg_14_set.insert("LegPool_t_900513810");
    Leg_14.add_attribute("Dated", "LegDatedDate_t_2030166506"); // 1
    Leg_14_set.insert("LegDatedDate_t_2030166506");
    Leg_14.add_attribute("CSetMo", "254984093"); // 1
    Leg_14_set.insert("254984093");
    Leg_14.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1923769282"); // 1
    Leg_14_set.insert("LegInterestAccrualDate_t_1923769282");
    Leg_14.add_attribute("PutCall", "1026989759"); // 1
    Leg_14_set.insert("1026989759");
    Leg_14.add_attribute("LegOptionRatio", "12383352.930000"); // 1
    Leg_14_set.insert("12383352.930000");
    Leg_14.add_attribute("Px", "4853090.150000"); // 1
    Leg_14_set.insert("4853090.150000");
    all_values.push_back(Leg_14_set);
    all_compo_names.insert("Leg_14_set");

    {
      xml_element LegAID_14{"LegAID"};
      multiset<string> LegAID_14_set;
      LegAID_14.add_attribute("SecAltID", "LegSecurityAltID_t_1990520208"); // 2
      LegAID_14_set.insert("LegSecurityAltID_t_1990520208");
      LegAID_14.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_14_set.insert("2");
      all_values.push_back(LegAID_14_set);
      all_compo_names.insert("LegAID_14_set");

      Leg_14.add_element(LegAID_14);
    }
    elt.add_element(Leg_14);
  } // end Leg
  { // Leg
    xml_element Leg_15{"Leg"};
    multiset<string> Leg_15_set;
    Leg_15.add_attribute("Sym", "LegSymbol_t_961276356"); // 1
    Leg_15_set.insert("LegSymbol_t_961276356");
    Leg_15.add_attribute("Sfx", "CD"); // 1
    Leg_15_set.insert("CD");
    Leg_15.add_attribute("ID", "LegSecurityID_t_416017931"); // 1
    Leg_15_set.insert("LegSecurityID_t_416017931");
    Leg_15.add_attribute("Src", "E"); // 1
    Leg_15_set.insert("E");
    Leg_15.add_attribute("Prod", "5"); // 1
    Leg_15_set.insert("5");
    Leg_15.add_attribute("CFI", "LegCFICode_t_1061787920"); // 1
    Leg_15_set.insert("LegCFICode_t_1061787920");
    Leg_15.add_attribute("SecTyp", "RETIRED"); // 1
    Leg_15_set.insert("RETIRED");
    Leg_15.add_attribute("SecSubTyp", "LegSecuritySubType_t_256054398"); // 1
    Leg_15_set.insert("LegSecuritySubType_t_256054398");
    Leg_15.add_attribute("MMY", "557362880"); // 1
    Leg_15_set.insert("557362880");
    Leg_15.add_attribute("Mat", "LegMaturityDate_t_1029026104"); // 1
    Leg_15_set.insert("LegMaturityDate_t_1029026104");
    Leg_15.add_attribute("MatTm", "659754684"); // 1
    Leg_15_set.insert("659754684");
    Leg_15.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1554406520"); // 1
    Leg_15_set.insert("LegCouponPaymentDate_t_1554406520");
    Leg_15.add_attribute("Issued", "LegIssueDate_t_2135286908"); // 1
    Leg_15_set.insert("LegIssueDate_t_2135286908");
    Leg_15.add_attribute("RepoCollSecTyp", "1158562642"); // 1
    Leg_15_set.insert("1158562642");
    Leg_15.add_attribute("RepoTrm", "501977581"); // 1
    Leg_15_set.insert("501977581");
    Leg_15.add_attribute("RepoRt", "6689379.900000"); // 1
    Leg_15_set.insert("6689379.900000");
    Leg_15.add_attribute("Fctr", "14854821.360000"); // 1
    Leg_15_set.insert("14854821.360000");
    Leg_15.add_attribute("CrdRtg", "LegCreditRating_t_1164481906"); // 1
    Leg_15_set.insert("LegCreditRating_t_1164481906");
    Leg_15.add_attribute("Rgstry", "LegInstrRegistry_t_937264570"); // 1
    Leg_15_set.insert("LegInstrRegistry_t_937264570");
    Leg_15.add_attribute("Ctry", "887071948"); // 1
    Leg_15_set.insert("887071948");
    Leg_15.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_246051789"); // 1
    Leg_15_set.insert("LegStateOrProvinceOfIssue_t_246051789");
    Leg_15.add_attribute("Lcl", "LegLocaleOfIssue_t_1803669441"); // 1
    Leg_15_set.insert("LegLocaleOfIssue_t_1803669441");
    Leg_15.add_attribute("Redeem", "LegRedemptionDate_t_1787585758"); // 1
    Leg_15_set.insert("LegRedemptionDate_t_1787585758");
    Leg_15.add_attribute("Strk", "1287346.470000"); // 1
    Leg_15_set.insert("1287346.470000");
    Leg_15.add_attribute("StrkCcy", "USD"); // 1
    Leg_15_set.insert("USD");
    Leg_15.add_attribute("OptA", "1155724406"); // 1
    Leg_15_set.insert("1155724406");
    Leg_15.add_attribute("Cmult", "11495051.800000"); // 1
    Leg_15_set.insert("11495051.800000");
    Leg_15.add_attribute("MultTyp", "0"); // 1
    Leg_15_set.insert("0");
    Leg_15.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_15_set.insert("2");
    Leg_15.add_attribute("UOM", "MMBtu"); // 1
    Leg_15_set.insert("MMBtu");
    Leg_15.add_attribute("UOMQty", "8629731.160000"); // 1
    Leg_15_set.insert("8629731.160000");
    Leg_15.add_attribute("PxUOM", "lbs"); // 1
    Leg_15_set.insert("lbs");
    Leg_15.add_attribute("PxUOMQty", "20044012.230000"); // 1
    Leg_15_set.insert("20044012.230000");
    Leg_15.add_attribute("TmUnit", "Min"); // 1
    Leg_15_set.insert("Min");
    Leg_15.add_attribute("ExerStyle", "1"); // 1
    Leg_15_set.insert("1");
    Leg_15.add_attribute("CpnRt", "9187054.950000"); // 1
    Leg_15_set.insert("9187054.950000");
    Leg_15.add_attribute("Exch", "LegSecurityExchange_t_1787946785"); // 1
    Leg_15_set.insert("LegSecurityExchange_t_1787946785");
    Leg_15.add_attribute("Issr", "LegIssuer_t_2044828271"); // 1
    Leg_15_set.insert("LegIssuer_t_2044828271");
    Leg_15.add_attribute("EncLegIssrLen", "1476068375"); // 1
    Leg_15_set.insert("1476068375");
    Leg_15.add_attribute("EncLegIssr", "EncodedLegIssuer_t_669489242"); // 1
    Leg_15_set.insert("EncodedLegIssuer_t_669489242");
    Leg_15.add_attribute("Desc", "LegSecurityDesc_t_557099307"); // 1
    Leg_15_set.insert("LegSecurityDesc_t_557099307");
    Leg_15.add_attribute("EncLegSecDescLen", "882991248"); // 1
    Leg_15_set.insert("882991248");
    Leg_15.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_657292502"); // 1
    Leg_15_set.insert("EncodedLegSecurityDesc_t_657292502");
    Leg_15.add_attribute("RatioQty", "17156619.490000"); // 1
    Leg_15_set.insert("17156619.490000");
    Leg_15.add_attribute("Side", "E"); // 1
    Leg_15_set.insert("E");
    Leg_15.add_attribute("Ccy", "USD"); // 1
    Leg_15_set.insert("USD");
    Leg_15.add_attribute("Pool", "LegPool_t_401967087"); // 1
    Leg_15_set.insert("LegPool_t_401967087");
    Leg_15.add_attribute("Dated", "LegDatedDate_t_116011415"); // 1
    Leg_15_set.insert("LegDatedDate_t_116011415");
    Leg_15.add_attribute("CSetMo", "1940732386"); // 1
    Leg_15_set.insert("1940732386");
    Leg_15.add_attribute("IntAcrl", "LegInterestAccrualDate_t_648018877"); // 1
    Leg_15_set.insert("LegInterestAccrualDate_t_648018877");
    Leg_15.add_attribute("PutCall", "1919680856"); // 1
    Leg_15_set.insert("1919680856");
    Leg_15.add_attribute("LegOptionRatio", "15808344.970000"); // 1
    Leg_15_set.insert("15808344.970000");
    Leg_15.add_attribute("Px", "7767535.240000"); // 1
    Leg_15_set.insert("7767535.240000");
    all_values.push_back(Leg_15_set);
    all_compo_names.insert("Leg_15_set");

    {
      xml_element LegAID_15{"LegAID"};
      multiset<string> LegAID_15_set;
      LegAID_15.add_attribute("SecAltID", "LegSecurityAltID_t_1830850743"); // 2
      LegAID_15_set.insert("LegSecurityAltID_t_1830850743");
      LegAID_15.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_15_set.insert("G");
      all_values.push_back(LegAID_15_set);
      all_compo_names.insert("LegAID_15_set");

      Leg_15.add_element(LegAID_15);
    }
    elt.add_element(Leg_15);
  } // end Leg
  { // Undly
    xml_element Undly_10{"Undly"};
    multiset<string> Undly_10_set;
    Undly_10.add_attribute("Sym", "UnderlyingSymbol_t_832872275"); // 1
    Undly_10_set.insert("UnderlyingSymbol_t_832872275");
    Undly_10.add_attribute("Sfx", "WI"); // 1
    Undly_10_set.insert("WI");
    Undly_10.add_attribute("ID", "UnderlyingSecurityID_t_783755250"); // 1
    Undly_10_set.insert("UnderlyingSecurityID_t_783755250");
    Undly_10.add_attribute("Src", "3"); // 1
    Undly_10_set.insert("3");
    Undly_10.add_attribute("Prod", "9"); // 1
    Undly_10_set.insert("9");
    Undly_10.add_attribute("CFI", "UnderlyingCFICode_t_807463149"); // 1
    Undly_10_set.insert("UnderlyingCFICode_t_807463149");
    Undly_10.add_attribute("SecTyp", "CB"); // 1
    Undly_10_set.insert("CB");
    Undly_10.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_76212786"); // 1
    Undly_10_set.insert("UnderlyingSecuritySubType_t_76212786");
    Undly_10.add_attribute("MMY", "448753373"); // 1
    Undly_10_set.insert("448753373");
    Undly_10.add_attribute("Mat", "UnderlyingMaturityDate_t_1049394989"); // 1
    Undly_10_set.insert("UnderlyingMaturityDate_t_1049394989");
    Undly_10.add_attribute("MatTm", "1864159571"); // 1
    Undly_10_set.insert("1864159571");
    Undly_10.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_346097996"); // 1
    Undly_10_set.insert("UnderlyingCouponPaymentDate_t_346097996");
    Undly_10.add_attribute("RestrctTyp", "FR"); // 1
    Undly_10_set.insert("FR");
    Undly_10.add_attribute("Snrty", "SB"); // 1
    Undly_10_set.insert("SB");
    Undly_10.add_attribute("NotlPctOut", "9031973.030000"); // 1
    Undly_10_set.insert("9031973.030000");
    Undly_10.add_attribute("OrigNotlPctOut", "12609709.640000"); // 1
    Undly_10_set.insert("12609709.640000");
    Undly_10.add_attribute("AttchPnt", "10434576.680000"); // 1
    Undly_10_set.insert("10434576.680000");
    Undly_10.add_attribute("DetchPnt", "4713756.050000"); // 1
    Undly_10_set.insert("4713756.050000");
    Undly_10.add_attribute("Issued", "UnderlyingIssueDate_t_498456146"); // 1
    Undly_10_set.insert("UnderlyingIssueDate_t_498456146");
    Undly_10.add_attribute("RepoCollSecTyp", "222204513"); // 1
    Undly_10_set.insert("222204513");
    Undly_10.add_attribute("RepoTrm", "1525036043"); // 1
    Undly_10_set.insert("1525036043");
    Undly_10.add_attribute("RepoRt", "9004232.330000"); // 1
    Undly_10_set.insert("9004232.330000");
    Undly_10.add_attribute("Fctr", "3382159.280000"); // 1
    Undly_10_set.insert("3382159.280000");
    Undly_10.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1318284781"); // 1
    Undly_10_set.insert("UnderlyingCreditRating_t_1318284781");
    Undly_10.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1548442110"); // 1
    Undly_10_set.insert("UnderlyingInstrRegistry_t_1548442110");
    Undly_10.add_attribute("Ctry", "110413136"); // 1
    Undly_10_set.insert("110413136");
    Undly_10.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_751635630"); // 1
    Undly_10_set.insert("UnderlyingStateOrProvinceOfIssue_t_751635630");
    Undly_10.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_177711987"); // 1
    Undly_10_set.insert("UnderlyingLocaleOfIssue_t_177711987");
    Undly_10.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1941263879"); // 1
    Undly_10_set.insert("UnderlyingRedemptionDate_t_1941263879");
    Undly_10.add_attribute("StrkPx", "17488578.720000"); // 1
    Undly_10_set.insert("17488578.720000");
    Undly_10.add_attribute("StrkCcy", "GBP"); // 1
    Undly_10_set.insert("GBP");
    Undly_10.add_attribute("OptA", "500293225"); // 1
    Undly_10_set.insert("500293225");
    Undly_10.add_attribute("Mult", "7464615.200000"); // 1
    Undly_10_set.insert("7464615.200000");
    Undly_10.add_attribute("MultTyp", "0"); // 1
    Undly_10_set.insert("0");
    Undly_10.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_10_set.insert("0");
    Undly_10.add_attribute("UOM", "Bu"); // 1
    Undly_10_set.insert("Bu");
    Undly_10.add_attribute("UOMQty", "10311139.180000"); // 1
    Undly_10_set.insert("10311139.180000");
    Undly_10.add_attribute("PxUOM", "t"); // 1
    Undly_10_set.insert("t");
    Undly_10.add_attribute("PxUOMQty", "20026780.420000"); // 1
    Undly_10_set.insert("20026780.420000");
    Undly_10.add_attribute("TmUnit", "Min"); // 1
    Undly_10_set.insert("Min");
    Undly_10.add_attribute("ExerStyle", "1"); // 1
    Undly_10_set.insert("1");
    Undly_10.add_attribute("CpnRt", "2012923.910000"); // 1
    Undly_10_set.insert("2012923.910000");
    Undly_10.add_attribute("Exch", "UnderlyingSecurityExchange_t_311004976"); // 1
    Undly_10_set.insert("UnderlyingSecurityExchange_t_311004976");
    Undly_10.add_attribute("Issr", "UnderlyingIssuer_t_293755570"); // 1
    Undly_10_set.insert("UnderlyingIssuer_t_293755570");
    Undly_10.add_attribute("EncUndIssrLen", "1104489694"); // 1
    Undly_10_set.insert("1104489694");
    Undly_10.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1571975940"); // 1
    Undly_10_set.insert("EncodedUnderlyingIssuer_t_1571975940");
    Undly_10.add_attribute("Desc", "UnderlyingSecurityDesc_t_1337213238"); // 1
    Undly_10_set.insert("UnderlyingSecurityDesc_t_1337213238");
    Undly_10.add_attribute("EncUndSecDescLen", "1575865299"); // 1
    Undly_10_set.insert("1575865299");
    Undly_10.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2070432086"); // 1
    Undly_10_set.insert("EncodedUnderlyingSecurityDesc_t_2070432086");
    Undly_10.add_attribute("CPPgm", "UnderlyingCPProgram_t_1559417751"); // 1
    Undly_10_set.insert("UnderlyingCPProgram_t_1559417751");
    Undly_10.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_953417694"); // 1
    Undly_10_set.insert("UnderlyingCPRegType_t_953417694");
    Undly_10.add_attribute("AllocPct", "8233716.720000"); // 1
    Undly_10_set.insert("8233716.720000");
    Undly_10.add_attribute("Ccy", "USD"); // 1
    Undly_10_set.insert("USD");
    Undly_10.add_attribute("Qty", "2243301.340000"); // 1
    Undly_10_set.insert("2243301.340000");
    Undly_10.add_attribute("SettlTyp", "5"); // 1
    Undly_10_set.insert("5");
    Undly_10.add_attribute("CashAmt", "UnderlyingCashAmount_t_875854458"); // 1
    Undly_10_set.insert("UnderlyingCashAmount_t_875854458");
    Undly_10.add_attribute("CashTyp", "DIFF"); // 1
    Undly_10_set.insert("DIFF");
    Undly_10.add_attribute("Px", "18018270.470000"); // 1
    Undly_10_set.insert("18018270.470000");
    Undly_10.add_attribute("DirtPx", "4772286.820000"); // 1
    Undly_10_set.insert("4772286.820000");
    Undly_10.add_attribute("EndPx", "3647483.910000"); // 1
    Undly_10_set.insert("3647483.910000");
    Undly_10.add_attribute("StartVal", "UnderlyingStartValue_t_280995906"); // 1
    Undly_10_set.insert("UnderlyingStartValue_t_280995906");
    Undly_10.add_attribute("CurVal", "UnderlyingCurrentValue_t_977521908"); // 1
    Undly_10_set.insert("UnderlyingCurrentValue_t_977521908");
    Undly_10.add_attribute("EndVal", "UnderlyingEndValue_t_1111209911"); // 1
    Undly_10_set.insert("UnderlyingEndValue_t_1111209911");
    Undly_10.add_attribute("AdjQty", "11814203.310000"); // 1
    Undly_10_set.insert("11814203.310000");
    Undly_10.add_attribute("FxRate", "10922236.030000"); // 1
    Undly_10_set.insert("10922236.030000");
    Undly_10.add_attribute("FxRateCalc", "M"); // 1
    Undly_10_set.insert("M");
    Undly_10.add_attribute("CapValu", "UnderlyingCapValue_t_65050601"); // 1
    Undly_10_set.insert("UnderlyingCapValue_t_65050601");
    Undly_10.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1283138085"); // 1
    Undly_10_set.insert("UnderlyingSettlMethod_t_1283138085");
    Undly_10.add_attribute("PutCall", "372845327"); // 1
    Undly_10_set.insert("372845327");
    all_values.push_back(Undly_10_set);
    all_compo_names.insert("Undly_10_set");

    {
      xml_element UndAID_10{"UndAID"};
      multiset<string> UndAID_10_set;
      UndAID_10.add_attribute("AltID", "UnderlyingSecurityAltID_t_2145559509"); // 2
      UndAID_10_set.insert("UnderlyingSecurityAltID_t_2145559509");
      UndAID_10.add_attribute("AltIDSrc", "7"); // 2
      UndAID_10_set.insert("7");
      all_values.push_back(UndAID_10_set);
      all_compo_names.insert("UndAID_10_set");

      Undly_10.add_element(UndAID_10);
    }
    {
      xml_element Stip_15{"Stip"};
      multiset<string> Stip_15_set;
      Stip_15.add_attribute("Typ", "PROD"); // 2
      Stip_15_set.insert("PROD");
      Stip_15.add_attribute("Val", "UnderlyingStipValue_t_309080837"); // 2
      Stip_15_set.insert("UnderlyingStipValue_t_309080837");
      all_values.push_back(Stip_15_set);
      all_compo_names.insert("Stip_15_set");

      Undly_10.add_element(Stip_15);
    }
    {
      xml_element Pty_79{"Pty"};
      multiset<string> Pty_79_set;
      Pty_79.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1484484060"); // 2
      Pty_79_set.insert("UnderlyingInstrumentPartyID_t_1484484060");
      Pty_79.add_attribute("Src", "9"); // 2
      Pty_79_set.insert("9");
      Pty_79.add_attribute("R", "14"); // 2
      Pty_79_set.insert("14");
      all_values.push_back(Pty_79_set);
      all_compo_names.insert("Pty_79_set");

      {
        xml_element Sub_79{"Sub"};
        multiset<string> Sub_79_set;
        Sub_79.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_674213651"); // 3
        Sub_79_set.insert("UnderlyingInstrumentPartySubID_t_674213651");
        Sub_79.add_attribute("Typ", "16"); // 3
        Sub_79_set.insert("16");
        all_values.push_back(Sub_79_set);
        all_compo_names.insert("Sub_79_set");

        Pty_79.add_element(Sub_79);
      }
      Undly_10.add_element(Pty_79);
    }
    elt.add_element(Undly_10);
  } // end Undly
  { // Undly
    xml_element Undly_11{"Undly"};
    multiset<string> Undly_11_set;
    Undly_11.add_attribute("Sym", "UnderlyingSymbol_t_1804005216"); // 1
    Undly_11_set.insert("UnderlyingSymbol_t_1804005216");
    Undly_11.add_attribute("Sfx", "CD"); // 1
    Undly_11_set.insert("CD");
    Undly_11.add_attribute("ID", "UnderlyingSecurityID_t_2060426758"); // 1
    Undly_11_set.insert("UnderlyingSecurityID_t_2060426758");
    Undly_11.add_attribute("Src", "3"); // 1
    Undly_11_set.insert("3");
    Undly_11.add_attribute("Prod", "8"); // 1
    Undly_11_set.insert("8");
    Undly_11.add_attribute("CFI", "UnderlyingCFICode_t_37161938"); // 1
    Undly_11_set.insert("UnderlyingCFICode_t_37161938");
    Undly_11.add_attribute("SecTyp", "TIPS"); // 1
    Undly_11_set.insert("TIPS");
    Undly_11.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1844344602"); // 1
    Undly_11_set.insert("UnderlyingSecuritySubType_t_1844344602");
    Undly_11.add_attribute("MMY", "913016397"); // 1
    Undly_11_set.insert("913016397");
    Undly_11.add_attribute("Mat", "UnderlyingMaturityDate_t_1106265496"); // 1
    Undly_11_set.insert("UnderlyingMaturityDate_t_1106265496");
    Undly_11.add_attribute("MatTm", "1498688001"); // 1
    Undly_11_set.insert("1498688001");
    Undly_11.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1390245079"); // 1
    Undly_11_set.insert("UnderlyingCouponPaymentDate_t_1390245079");
    Undly_11.add_attribute("RestrctTyp", "XR"); // 1
    Undly_11_set.insert("XR");
    Undly_11.add_attribute("Snrty", "SD"); // 1
    Undly_11_set.insert("SD");
    Undly_11.add_attribute("NotlPctOut", "2202833.390000"); // 1
    Undly_11_set.insert("2202833.390000");
    Undly_11.add_attribute("OrigNotlPctOut", "4347401.510000"); // 1
    Undly_11_set.insert("4347401.510000");
    Undly_11.add_attribute("AttchPnt", "8136205.900000"); // 1
    Undly_11_set.insert("8136205.900000");
    Undly_11.add_attribute("DetchPnt", "13125069.430000"); // 1
    Undly_11_set.insert("13125069.430000");
    Undly_11.add_attribute("Issued", "UnderlyingIssueDate_t_952391083"); // 1
    Undly_11_set.insert("UnderlyingIssueDate_t_952391083");
    Undly_11.add_attribute("RepoCollSecTyp", "878671192"); // 1
    Undly_11_set.insert("878671192");
    Undly_11.add_attribute("RepoTrm", "448161380"); // 1
    Undly_11_set.insert("448161380");
    Undly_11.add_attribute("RepoRt", "13252364.100000"); // 1
    Undly_11_set.insert("13252364.100000");
    Undly_11.add_attribute("Fctr", "8767470.530000"); // 1
    Undly_11_set.insert("8767470.530000");
    Undly_11.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1638889870"); // 1
    Undly_11_set.insert("UnderlyingCreditRating_t_1638889870");
    Undly_11.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1899374128"); // 1
    Undly_11_set.insert("UnderlyingInstrRegistry_t_1899374128");
    Undly_11.add_attribute("Ctry", "1185827890"); // 1
    Undly_11_set.insert("1185827890");
    Undly_11.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_975890282"); // 1
    Undly_11_set.insert("UnderlyingStateOrProvinceOfIssue_t_975890282");
    Undly_11.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1430517893"); // 1
    Undly_11_set.insert("UnderlyingLocaleOfIssue_t_1430517893");
    Undly_11.add_attribute("Redeem", "UnderlyingRedemptionDate_t_919401019"); // 1
    Undly_11_set.insert("UnderlyingRedemptionDate_t_919401019");
    Undly_11.add_attribute("StrkPx", "16501039.330000"); // 1
    Undly_11_set.insert("16501039.330000");
    Undly_11.add_attribute("StrkCcy", "CAN"); // 1
    Undly_11_set.insert("CAN");
    Undly_11.add_attribute("OptA", "1736251688"); // 1
    Undly_11_set.insert("1736251688");
    Undly_11.add_attribute("Mult", "3029864.190000"); // 1
    Undly_11_set.insert("3029864.190000");
    Undly_11.add_attribute("MultTyp", "0"); // 1
    Undly_11_set.insert("0");
    Undly_11.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_11_set.insert("4");
    Undly_11.add_attribute("UOM", "t"); // 1
    Undly_11_set.insert("t");
    Undly_11.add_attribute("UOMQty", "17600392.020000"); // 1
    Undly_11_set.insert("17600392.020000");
    Undly_11.add_attribute("PxUOM", "MWh"); // 1
    Undly_11_set.insert("MWh");
    Undly_11.add_attribute("PxUOMQty", "12531647.550000"); // 1
    Undly_11_set.insert("12531647.550000");
    Undly_11.add_attribute("TmUnit", "D"); // 1
    Undly_11_set.insert("D");
    Undly_11.add_attribute("ExerStyle", "2"); // 1
    Undly_11_set.insert("2");
    Undly_11.add_attribute("CpnRt", "4959261.860000"); // 1
    Undly_11_set.insert("4959261.860000");
    Undly_11.add_attribute("Exch", "UnderlyingSecurityExchange_t_42351289"); // 1
    Undly_11_set.insert("UnderlyingSecurityExchange_t_42351289");
    Undly_11.add_attribute("Issr", "UnderlyingIssuer_t_252815041"); // 1
    Undly_11_set.insert("UnderlyingIssuer_t_252815041");
    Undly_11.add_attribute("EncUndIssrLen", "716209526"); // 1
    Undly_11_set.insert("716209526");
    Undly_11.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_477091440"); // 1
    Undly_11_set.insert("EncodedUnderlyingIssuer_t_477091440");
    Undly_11.add_attribute("Desc", "UnderlyingSecurityDesc_t_1066435631"); // 1
    Undly_11_set.insert("UnderlyingSecurityDesc_t_1066435631");
    Undly_11.add_attribute("EncUndSecDescLen", "2028716469"); // 1
    Undly_11_set.insert("2028716469");
    Undly_11.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1429482524"); // 1
    Undly_11_set.insert("EncodedUnderlyingSecurityDesc_t_1429482524");
    Undly_11.add_attribute("CPPgm", "UnderlyingCPProgram_t_1945106823"); // 1
    Undly_11_set.insert("UnderlyingCPProgram_t_1945106823");
    Undly_11.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_329394201"); // 1
    Undly_11_set.insert("UnderlyingCPRegType_t_329394201");
    Undly_11.add_attribute("AllocPct", "6072352.860000"); // 1
    Undly_11_set.insert("6072352.860000");
    Undly_11.add_attribute("Ccy", "EUR"); // 1
    Undly_11_set.insert("EUR");
    Undly_11.add_attribute("Qty", "3591257.670000"); // 1
    Undly_11_set.insert("3591257.670000");
    Undly_11.add_attribute("SettlTyp", "4"); // 1
    Undly_11_set.insert("4");
    Undly_11.add_attribute("CashAmt", "UnderlyingCashAmount_t_796690705"); // 1
    Undly_11_set.insert("UnderlyingCashAmount_t_796690705");
    Undly_11.add_attribute("CashTyp", "FIXED"); // 1
    Undly_11_set.insert("FIXED");
    Undly_11.add_attribute("Px", "6321154.900000"); // 1
    Undly_11_set.insert("6321154.900000");
    Undly_11.add_attribute("DirtPx", "2993109.910000"); // 1
    Undly_11_set.insert("2993109.910000");
    Undly_11.add_attribute("EndPx", "322033.210000"); // 1
    Undly_11_set.insert("322033.210000");
    Undly_11.add_attribute("StartVal", "UnderlyingStartValue_t_1208038077"); // 1
    Undly_11_set.insert("UnderlyingStartValue_t_1208038077");
    Undly_11.add_attribute("CurVal", "UnderlyingCurrentValue_t_2035562679"); // 1
    Undly_11_set.insert("UnderlyingCurrentValue_t_2035562679");
    Undly_11.add_attribute("EndVal", "UnderlyingEndValue_t_335189740"); // 1
    Undly_11_set.insert("UnderlyingEndValue_t_335189740");
    Undly_11.add_attribute("AdjQty", "1163702.570000"); // 1
    Undly_11_set.insert("1163702.570000");
    Undly_11.add_attribute("FxRate", "14606285.050000"); // 1
    Undly_11_set.insert("14606285.050000");
    Undly_11.add_attribute("FxRateCalc", "M"); // 1
    Undly_11_set.insert("M");
    Undly_11.add_attribute("CapValu", "UnderlyingCapValue_t_1876409459"); // 1
    Undly_11_set.insert("UnderlyingCapValue_t_1876409459");
    Undly_11.add_attribute("SetMeth", "UnderlyingSettlMethod_t_582555285"); // 1
    Undly_11_set.insert("UnderlyingSettlMethod_t_582555285");
    Undly_11.add_attribute("PutCall", "1928502853"); // 1
    Undly_11_set.insert("1928502853");
    all_values.push_back(Undly_11_set);
    all_compo_names.insert("Undly_11_set");

    {
      xml_element UndAID_11{"UndAID"};
      multiset<string> UndAID_11_set;
      UndAID_11.add_attribute("AltID", "UnderlyingSecurityAltID_t_447746861"); // 2
      UndAID_11_set.insert("UnderlyingSecurityAltID_t_447746861");
      UndAID_11.add_attribute("AltIDSrc", "B"); // 2
      UndAID_11_set.insert("B");
      all_values.push_back(UndAID_11_set);
      all_compo_names.insert("UndAID_11_set");

      Undly_11.add_element(UndAID_11);
    }
    {
      xml_element Stip_16{"Stip"};
      multiset<string> Stip_16_set;
      Stip_16.add_attribute("Typ", "PPC"); // 2
      Stip_16_set.insert("PPC");
      Stip_16.add_attribute("Val", "UnderlyingStipValue_t_490098150"); // 2
      Stip_16_set.insert("UnderlyingStipValue_t_490098150");
      all_values.push_back(Stip_16_set);
      all_compo_names.insert("Stip_16_set");

      Undly_11.add_element(Stip_16);
    }
    {
      xml_element Pty_80{"Pty"};
      multiset<string> Pty_80_set;
      Pty_80.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1455985107"); // 2
      Pty_80_set.insert("UnderlyingInstrumentPartyID_t_1455985107");
      Pty_80.add_attribute("Src", "5"); // 2
      Pty_80_set.insert("5");
      Pty_80.add_attribute("R", "69"); // 2
      Pty_80_set.insert("69");
      all_values.push_back(Pty_80_set);
      all_compo_names.insert("Pty_80_set");

      {
        xml_element Sub_80{"Sub"};
        multiset<string> Sub_80_set;
        Sub_80.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_374937091"); // 3
        Sub_80_set.insert("UnderlyingInstrumentPartySubID_t_374937091");
        Sub_80.add_attribute("Typ", "14"); // 3
        Sub_80_set.insert("14");
        all_values.push_back(Sub_80_set);
        all_compo_names.insert("Sub_80_set");

        Pty_80.add_element(Sub_80);
      }
      Undly_11.add_element(Pty_80);
    }
    elt.add_element(Undly_11);
  } // end Undly
  { // TrdRegTS
    xml_element TrdRegTS_1{"TrdRegTS"};
    multiset<string> TrdRegTS_1_set;
    TrdRegTS_1.add_attribute("TS", "TrdRegTimestamp_t_172560266"); // 1
    TrdRegTS_1_set.insert("TrdRegTimestamp_t_172560266");
    TrdRegTS_1.add_attribute("Typ", "5"); // 1
    TrdRegTS_1_set.insert("5");
    TrdRegTS_1.add_attribute("Src", "TrdRegTimestampOrigin_t_856423753"); // 1
    TrdRegTS_1_set.insert("TrdRegTimestampOrigin_t_856423753");
    TrdRegTS_1.add_attribute("DskTyp", "IS"); // 1
    TrdRegTS_1_set.insert("IS");
    TrdRegTS_1.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_1_set.insert("1");
    TrdRegTS_1.add_attribute("DskOrdHndlInst", "OVD"); // 1
    TrdRegTS_1_set.insert("OVD");
    all_values.push_back(TrdRegTS_1_set);
    all_compo_names.insert("TrdRegTS_1_set");

    elt.add_element(TrdRegTS_1);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_2{"TrdRegTS"};
    multiset<string> TrdRegTS_2_set;
    TrdRegTS_2.add_attribute("TS", "TrdRegTimestamp_t_559644965"); // 1
    TrdRegTS_2_set.insert("TrdRegTimestamp_t_559644965");
    TrdRegTS_2.add_attribute("Typ", "7"); // 1
    TrdRegTS_2_set.insert("7");
    TrdRegTS_2.add_attribute("Src", "TrdRegTimestampOrigin_t_857709532"); // 1
    TrdRegTS_2_set.insert("TrdRegTimestampOrigin_t_857709532");
    TrdRegTS_2.add_attribute("DskTyp", "PF"); // 1
    TrdRegTS_2_set.insert("PF");
    TrdRegTS_2.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_2_set.insert("1");
    TrdRegTS_2.add_attribute("DskOrdHndlInst", "FOK"); // 1
    TrdRegTS_2_set.insert("FOK");
    all_values.push_back(TrdRegTS_2_set);
    all_compo_names.insert("TrdRegTS_2_set");

    elt.add_element(TrdRegTS_2);
  } // end TrdRegTS
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_4{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_4_set;
    SprdBnchmkCurve_4.add_attribute("Spread", "2523148.850000"); // 1
    SprdBnchmkCurve_4_set.insert("2523148.850000");
    SprdBnchmkCurve_4.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_4_set.insert("JPY");
    SprdBnchmkCurve_4.add_attribute("Name", "SWAP"); // 1
    SprdBnchmkCurve_4_set.insert("SWAP");
    SprdBnchmkCurve_4.add_attribute("Point", "BenchmarkCurvePoint_t_1321807947"); // 1
    SprdBnchmkCurve_4_set.insert("BenchmarkCurvePoint_t_1321807947");
    SprdBnchmkCurve_4.add_attribute("Px", "19004406.920000"); // 1
    SprdBnchmkCurve_4_set.insert("19004406.920000");
    SprdBnchmkCurve_4.add_attribute("PxTyp", "15"); // 1
    SprdBnchmkCurve_4_set.insert("15");
    SprdBnchmkCurve_4.add_attribute("SecID", "BenchmarkSecurityID_t_1904363232"); // 1
    SprdBnchmkCurve_4_set.insert("BenchmarkSecurityID_t_1904363232");
    SprdBnchmkCurve_4.add_attribute("SecIDSrc", "9"); // 1
    SprdBnchmkCurve_4_set.insert("9");
    all_values.push_back(SprdBnchmkCurve_4_set);
    all_compo_names.insert("SprdBnchmkCurve_4_set");

    elt.add_element(SprdBnchmkCurve_4);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_17{"Stip"};
    multiset<string> Stip_17_set;
    Stip_17.add_attribute("Typ", "SUBSLEFT"); // 1
    Stip_17_set.insert("SUBSLEFT");
    Stip_17.add_attribute("Val", "StipulationValue_t_1958405290"); // 1
    Stip_17_set.insert("StipulationValue_t_1958405290");
    all_values.push_back(Stip_17_set);
    all_compo_names.insert("Stip_17_set");

    elt.add_element(Stip_17);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_10{"SetInstr"};
    multiset<string> SetInstr_10_set;
    SetInstr_10.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_10_set.insert("0");
    SetInstr_10.add_attribute("StandInstDbTyp", "0"); // 1
    SetInstr_10_set.insert("0");
    SetInstr_10.add_attribute("StandInstDbName", "StandInstDbName_t_804076560"); // 1
    SetInstr_10_set.insert("StandInstDbName_t_804076560");
    SetInstr_10.add_attribute("StandInstDbID", "StandInstDbID_t_2002645555"); // 1
    SetInstr_10_set.insert("StandInstDbID_t_2002645555");
    all_values.push_back(SetInstr_10_set);
    all_compo_names.insert("SetInstr_10_set");

    {
      xml_element DlvInst_10{"DlvInst"};
      multiset<string> DlvInst_10_set;
      DlvInst_10.add_attribute("InstSrc", "1"); // 2
      DlvInst_10_set.insert("1");
      DlvInst_10.add_attribute("InstTyp", "S"); // 2
      DlvInst_10_set.insert("S");
      all_values.push_back(DlvInst_10_set);
      all_compo_names.insert("DlvInst_10_set");

      {
        xml_element Pty_81{"Pty"};
        multiset<string> Pty_81_set;
        Pty_81.add_attribute("ID", "SettlPartyID_t_104350374"); // 3
        Pty_81_set.insert("SettlPartyID_t_104350374");
        Pty_81.add_attribute("Src", "1"); // 3
        Pty_81_set.insert("1");
        Pty_81.add_attribute("R", "61"); // 3
        Pty_81_set.insert("61");
        all_values.push_back(Pty_81_set);
        all_compo_names.insert("Pty_81_set");

        {
          xml_element Sub_81{"Sub"};
          multiset<string> Sub_81_set;
          Sub_81.add_attribute("ID", "SettlPartySubID_t_960774128"); // 4
          Sub_81_set.insert("SettlPartySubID_t_960774128");
          Sub_81.add_attribute("Typ", "31"); // 4
          Sub_81_set.insert("31");
          all_values.push_back(Sub_81_set);
          all_compo_names.insert("Sub_81_set");

          Pty_81.add_element(Sub_81);
        }
        DlvInst_10.add_element(Pty_81);
      }
      SetInstr_10.add_element(DlvInst_10);
    }
    elt.add_element(SetInstr_10);
  } // end SetInstr
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
