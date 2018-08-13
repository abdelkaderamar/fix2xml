#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralReport_message_t_0;
  elt.add_attribute("RptID", "CollRptID_t_1449224322"); // 0
  CollateralReport_message_t_0.insert("CollRptID_t_1449224322");
  elt.add_attribute("ID", "CollInquiryID_t_703085013"); // 0
  CollateralReport_message_t_0.insert("CollInquiryID_t_703085013");
  elt.add_attribute("TxnTm", "TransactTime_t_1248665767"); // 0
  CollateralReport_message_t_0.insert("TransactTime_t_1248665767");
  elt.add_attribute("ApplTyp", "0"); // 0
  CollateralReport_message_t_0.insert("0");
  elt.add_attribute("FinclStat", "2"); // 0
  CollateralReport_message_t_0.insert("2");
  elt.add_attribute("Stat", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("TotNumRpts", "441423847"); // 0
  CollateralReport_message_t_0.insert("441423847");
  elt.add_attribute("LastRptReqed", "N"); // 0
  CollateralReport_message_t_0.insert("N");
  elt.add_attribute("Acct", "Account_t_1453119404"); // 0
  CollateralReport_message_t_0.insert("Account_t_1453119404");
  elt.add_attribute("AcctTyp", "8"); // 0
  CollateralReport_message_t_0.insert("8");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1433401069"); // 0
  CollateralReport_message_t_0.insert("ClOrdID_t_1433401069");
  elt.add_attribute("OrdID", "OrderID_t_2128776400"); // 0
  CollateralReport_message_t_0.insert("OrderID_t_2128776400");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_2088698643"); // 0
  CollateralReport_message_t_0.insert("SecondaryOrderID_t_2088698643");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_37080135"); // 0
  CollateralReport_message_t_0.insert("SecondaryClOrdID_t_37080135");
  elt.add_attribute("SettlDt", "SettlDate_t_1836398248"); // 0
  CollateralReport_message_t_0.insert("SettlDate_t_1836398248");
  elt.add_attribute("Qty", "18101391.670000"); // 0
  CollateralReport_message_t_0.insert("18101391.670000");
  elt.add_attribute("QtyTyp", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("Ccy", "USD"); // 0
  CollateralReport_message_t_0.insert("USD");
  elt.add_attribute("MgnExcess", "MarginExcess_t_417017684"); // 0
  CollateralReport_message_t_0.insert("MarginExcess_t_417017684");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_30394999"); // 0
  CollateralReport_message_t_0.insert("TotalNetValue_t_30394999");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_1141993038"); // 0
  CollateralReport_message_t_0.insert("CashOutstanding_t_1141993038");
  elt.add_attribute("Side", "B"); // 0
  CollateralReport_message_t_0.insert("B");
  elt.add_attribute("Px", "12396845.390000"); // 0
  CollateralReport_message_t_0.insert("12396845.390000");
  elt.add_attribute("PxTyp", "18"); // 0
  CollateralReport_message_t_0.insert("18");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_883330427"); // 0
  CollateralReport_message_t_0.insert("AccruedInterestAmt_t_883330427");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_47870362"); // 0
  CollateralReport_message_t_0.insert("EndAccruedInterestAmt_t_47870362");
  elt.add_attribute("StartCsh", "StartCash_t_851535875"); // 0
  CollateralReport_message_t_0.insert("StartCash_t_851535875");
  elt.add_attribute("EndCsh", "EndCash_t_73193494"); // 0
  CollateralReport_message_t_0.insert("EndCash_t_73193494");
  elt.add_attribute("SesID", "5"); // 0
  CollateralReport_message_t_0.insert("5");
  elt.add_attribute("SesSub", "2"); // 0
  CollateralReport_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "ITD"); // 0
  CollateralReport_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1013030936"); // 0
  CollateralReport_message_t_0.insert("SettlSessSubID_t_1013030936");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_538028721"); // 0
  CollateralReport_message_t_0.insert("ClearingBusinessDate_t_538028721");
  elt.add_attribute("Txt", "Text_t_1111935448"); // 0
  CollateralReport_message_t_0.insert("Text_t_1111935448");
  elt.add_attribute("EncTxtLen", "585580039"); // 0
  CollateralReport_message_t_0.insert("585580039");
  elt.add_attribute("EncTxt", "EncodedText_t_349073529"); // 0
  CollateralReport_message_t_0.insert("EncodedText_t_349073529");
  all_values.push_back(CollateralReport_message_t_0);
  all_compo_names.insert("CollateralReport_message_t");

  { // Hdr
    xml_element Hdr_17{"Hdr"};
    multiset<string> Hdr_17_set;
    Hdr_17.add_attribute("SeqNum", "1553359295"); // 1
    Hdr_17_set.insert("1553359295");
    Hdr_17.add_attribute("SID", "SenderCompID_t_469801083"); // 1
    Hdr_17_set.insert("SenderCompID_t_469801083");
    Hdr_17.add_attribute("TID", "TargetCompID_t_1802192933"); // 1
    Hdr_17_set.insert("TargetCompID_t_1802192933");
    Hdr_17.add_attribute("OBID", "OnBehalfOfCompID_t_116989406"); // 1
    Hdr_17_set.insert("OnBehalfOfCompID_t_116989406");
    Hdr_17.add_attribute("D2ID", "DeliverToCompID_t_1903202152"); // 1
    Hdr_17_set.insert("DeliverToCompID_t_1903202152");
    Hdr_17.add_attribute("SSub", "SenderSubID_t_1783485686"); // 1
    Hdr_17_set.insert("SenderSubID_t_1783485686");
    Hdr_17.add_attribute("SLoc", "SenderLocationID_t_58204401"); // 1
    Hdr_17_set.insert("SenderLocationID_t_58204401");
    Hdr_17.add_attribute("TSub", "TargetSubID_t_1940282287"); // 1
    Hdr_17_set.insert("TargetSubID_t_1940282287");
    Hdr_17.add_attribute("TLoc", "TargetLocationID_t_1472400286"); // 1
    Hdr_17_set.insert("TargetLocationID_t_1472400286");
    Hdr_17.add_attribute("OBSub", "OnBehalfOfSubID_t_1868343568"); // 1
    Hdr_17_set.insert("OnBehalfOfSubID_t_1868343568");
    Hdr_17.add_attribute("OBLoc", "OnBehalfOfLocationID_t_18090123"); // 1
    Hdr_17_set.insert("OnBehalfOfLocationID_t_18090123");
    Hdr_17.add_attribute("D2Sub", "DeliverToSubID_t_1250699731"); // 1
    Hdr_17_set.insert("DeliverToSubID_t_1250699731");
    Hdr_17.add_attribute("D2Loc", "DeliverToLocationID_t_1513917669"); // 1
    Hdr_17_set.insert("DeliverToLocationID_t_1513917669");
    Hdr_17.add_attribute("PosDup", "Y"); // 1
    Hdr_17_set.insert("Y");
    Hdr_17.add_attribute("PosRsnd", "N"); // 1
    Hdr_17_set.insert("N");
    Hdr_17.add_attribute("Snt", "SendingTime_t_508427059"); // 1
    Hdr_17_set.insert("SendingTime_t_508427059");
    Hdr_17.add_attribute("OrigSnt", "OrigSendingTime_t_2037636857"); // 1
    Hdr_17_set.insert("OrigSendingTime_t_2037636857");
    Hdr_17.add_attribute("MsgEncd", "MessageEncoding_t_373295621"); // 1
    Hdr_17_set.insert("MessageEncoding_t_373295621");
    all_values.push_back(Hdr_17_set);
    all_compo_names.insert("Hdr_17_set");

    {
      xml_element Hop_17{"Hop"};
      multiset<string> Hop_17_set;
      Hop_17.add_attribute("ID", "HopCompID_t_214060869"); // 2
      Hop_17_set.insert("HopCompID_t_214060869");
      Hop_17.add_attribute("Ref", "773483636"); // 2
      Hop_17_set.insert("773483636");
      Hop_17.add_attribute("Snt", "HopSendingTime_t_421165983"); // 2
      Hop_17_set.insert("HopSendingTime_t_421165983");
      all_values.push_back(Hop_17_set);
      all_compo_names.insert("Hop_17_set");

      Hdr_17.add_element(Hop_17);
    }
    elt.add_element(Hdr_17);
  } // end Hdr
  { // Pty
    xml_element Pty_86{"Pty"};
    multiset<string> Pty_86_set;
    Pty_86.add_attribute("ID", "PartyID_t_846677130"); // 1
    Pty_86_set.insert("PartyID_t_846677130");
    Pty_86.add_attribute("Src", "2"); // 1
    Pty_86_set.insert("2");
    Pty_86.add_attribute("R", "40"); // 1
    Pty_86_set.insert("40");
    all_values.push_back(Pty_86_set);
    all_compo_names.insert("Pty_86_set");

    {
      xml_element Sub_86{"Sub"};
      multiset<string> Sub_86_set;
      Sub_86.add_attribute("ID", "PartySubID_t_221611299"); // 2
      Sub_86_set.insert("PartySubID_t_221611299");
      Sub_86.add_attribute("Typ", "20"); // 2
      Sub_86_set.insert("20");
      all_values.push_back(Sub_86_set);
      all_compo_names.insert("Sub_86_set");

      Pty_86.add_element(Sub_86);
    }
    elt.add_element(Pty_86);
  } // end Pty
  { // CollExc
    xml_element CollExc_6{"CollExc"};
    multiset<string> CollExc_6_set;
    CollExc_6.add_attribute("ExecID", "ExecID_t_1333546747"); // 1
    CollExc_6_set.insert("ExecID_t_1333546747");
    all_values.push_back(CollExc_6_set);
    all_compo_names.insert("CollExc_6_set");

    elt.add_element(CollExc_6);
  } // end CollExc
  { // CollExc
    xml_element CollExc_7{"CollExc"};
    multiset<string> CollExc_7_set;
    CollExc_7.add_attribute("ExecID", "ExecID_t_182239232"); // 1
    CollExc_7_set.insert("ExecID_t_182239232");
    all_values.push_back(CollExc_7_set);
    all_compo_names.insert("CollExc_7_set");

    elt.add_element(CollExc_7);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_4{"TrdColl"};
    multiset<string> TrdColl_4_set;
    TrdColl_4.add_attribute("RptID", "TradeReportID_t_739422395"); // 1
    TrdColl_4_set.insert("TradeReportID_t_739422395");
    TrdColl_4.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_652040315"); // 1
    TrdColl_4_set.insert("SecondaryTradeReportID_t_652040315");
    all_values.push_back(TrdColl_4_set);
    all_compo_names.insert("TrdColl_4_set");

    elt.add_element(TrdColl_4);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_5{"TrdColl"};
    multiset<string> TrdColl_5_set;
    TrdColl_5.add_attribute("RptID", "TradeReportID_t_896771234"); // 1
    TrdColl_5_set.insert("TradeReportID_t_896771234");
    TrdColl_5.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_856411801"); // 1
    TrdColl_5_set.insert("SecondaryTradeReportID_t_856411801");
    all_values.push_back(TrdColl_5_set);
    all_compo_names.insert("TrdColl_5_set");

    elt.add_element(TrdColl_5);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_6{"TrdColl"};
    multiset<string> TrdColl_6_set;
    TrdColl_6.add_attribute("RptID", "TradeReportID_t_407758819"); // 1
    TrdColl_6_set.insert("TradeReportID_t_407758819");
    TrdColl_6.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_532773272"); // 1
    TrdColl_6_set.insert("SecondaryTradeReportID_t_532773272");
    all_values.push_back(TrdColl_6_set);
    all_compo_names.insert("TrdColl_6_set");

    elt.add_element(TrdColl_6);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_9{"Instrmt"};
    multiset<string> Instrmt_9_set;
    Instrmt_9.add_attribute("Sym", "Symbol_t_914616203"); // 1
    Instrmt_9_set.insert("Symbol_t_914616203");
    Instrmt_9.add_attribute("Sfx", "CD"); // 1
    Instrmt_9_set.insert("CD");
    Instrmt_9.add_attribute("ID", "SecurityID_t_2005173558"); // 1
    Instrmt_9_set.insert("SecurityID_t_2005173558");
    Instrmt_9.add_attribute("Src", "8"); // 1
    Instrmt_9_set.insert("8");
    Instrmt_9.add_attribute("Prod", "6"); // 1
    Instrmt_9_set.insert("6");
    Instrmt_9.add_attribute("ProdCmplx", "ProductComplex_t_1108389641"); // 1
    Instrmt_9_set.insert("ProductComplex_t_1108389641");
    Instrmt_9.add_attribute("SecGrp", "SecurityGroup_t_1910144"); // 1
    Instrmt_9_set.insert("SecurityGroup_t_1910144");
    Instrmt_9.add_attribute("CFI", "CFICode_t_653755389"); // 1
    Instrmt_9_set.insert("CFICode_t_653755389");
    Instrmt_9.add_attribute("SecTyp", "STRUCT"); // 1
    Instrmt_9_set.insert("STRUCT");
    Instrmt_9.add_attribute("SubTyp", "SecuritySubType_t_510337204"); // 1
    Instrmt_9_set.insert("SecuritySubType_t_510337204");
    Instrmt_9.add_attribute("MMY", "543908598"); // 1
    Instrmt_9_set.insert("543908598");
    Instrmt_9.add_attribute("MatDt", "MaturityDate_t_615296344"); // 1
    Instrmt_9_set.insert("MaturityDate_t_615296344");
    Instrmt_9.add_attribute("MatTm", "724398073"); // 1
    Instrmt_9_set.insert("724398073");
    Instrmt_9.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1317392235"); // 1
    Instrmt_9_set.insert("SettleOnOpenFlag_t_1317392235");
    Instrmt_9.add_attribute("AsgnMeth", "1036462327"); // 1
    Instrmt_9_set.insert("1036462327");
    Instrmt_9.add_attribute("Status", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("CpnPmt", "CouponPaymentDate_t_16585717"); // 1
    Instrmt_9_set.insert("CouponPaymentDate_t_16585717");
    Instrmt_9.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_9_set.insert("MR");
    Instrmt_9.add_attribute("Snrty", "SD"); // 1
    Instrmt_9_set.insert("SD");
    Instrmt_9.add_attribute("NotlPctOut", "2381970.160000"); // 1
    Instrmt_9_set.insert("2381970.160000");
    Instrmt_9.add_attribute("OrigNotlPctOut", "13642334.260000"); // 1
    Instrmt_9_set.insert("13642334.260000");
    Instrmt_9.add_attribute("AttchPnt", "8904592.880000"); // 1
    Instrmt_9_set.insert("8904592.880000");
    Instrmt_9.add_attribute("DetchPnt", "15717437.640000"); // 1
    Instrmt_9_set.insert("15717437.640000");
    Instrmt_9.add_attribute("Issued", "IssueDate_t_1546472659"); // 1
    Instrmt_9_set.insert("IssueDate_t_1546472659");
    Instrmt_9.add_attribute("RepoCollSecTyp", "2132521237"); // 1
    Instrmt_9_set.insert("2132521237");
    Instrmt_9.add_attribute("RepoTrm", "163682511"); // 1
    Instrmt_9_set.insert("163682511");
    Instrmt_9.add_attribute("RepoRt", "510293.260000"); // 1
    Instrmt_9_set.insert("510293.260000");
    Instrmt_9.add_attribute("Fctr", "8818088.240000"); // 1
    Instrmt_9_set.insert("8818088.240000");
    Instrmt_9.add_attribute("CrdRtg", "CreditRating_t_1020094312"); // 1
    Instrmt_9_set.insert("CreditRating_t_1020094312");
    Instrmt_9.add_attribute("Rgstry", "InstrRegistry_t_458788146"); // 1
    Instrmt_9_set.insert("InstrRegistry_t_458788146");
    Instrmt_9.add_attribute("IssuCtry", "1414582096"); // 1
    Instrmt_9_set.insert("1414582096");
    Instrmt_9.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1934710515"); // 1
    Instrmt_9_set.insert("StateOrProvinceOfIssue_t_1934710515");
    Instrmt_9.add_attribute("Lcl", "LocaleOfIssue_t_659345604"); // 1
    Instrmt_9_set.insert("LocaleOfIssue_t_659345604");
    Instrmt_9.add_attribute("Redeem", "RedemptionDate_t_1272272007"); // 1
    Instrmt_9_set.insert("RedemptionDate_t_1272272007");
    Instrmt_9.add_attribute("StrkPx", "4227029.910000"); // 1
    Instrmt_9_set.insert("4227029.910000");
    Instrmt_9.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_9_set.insert("USD");
    Instrmt_9.add_attribute("StrkMult", "4246131.350000"); // 1
    Instrmt_9_set.insert("4246131.350000");
    Instrmt_9.add_attribute("StrkValu", "15317485.750000"); // 1
    Instrmt_9_set.insert("15317485.750000");
    Instrmt_9.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_9_set.insert("5");
    Instrmt_9.add_attribute("StrkPxBndryPrcsn", "20756571.730000"); // 1
    Instrmt_9_set.insert("20756571.730000");
    Instrmt_9.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("OptAt", "1659348413"); // 1
    Instrmt_9_set.insert("1659348413");
    Instrmt_9.add_attribute("Mult", "12455657.600000"); // 1
    Instrmt_9_set.insert("12455657.600000");
    Instrmt_9.add_attribute("MultTyp", "0"); // 1
    Instrmt_9_set.insert("0");
    Instrmt_9.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_9_set.insert("3");
    Instrmt_9.add_attribute("MinPxIncr", "12621514.780000"); // 1
    Instrmt_9_set.insert("12621514.780000");
    Instrmt_9.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1747027981"); // 1
    Instrmt_9_set.insert("MinPriceIncrementAmount_t_1747027981");
    Instrmt_9.add_attribute("UOM", "t"); // 1
    Instrmt_9_set.insert("t");
    Instrmt_9.add_attribute("UOMQty", "15003484.940000"); // 1
    Instrmt_9_set.insert("15003484.940000");
    Instrmt_9.add_attribute("PxUOM", "USD"); // 1
    Instrmt_9_set.insert("USD");
    Instrmt_9.add_attribute("PxUOMQty", "423060.930000"); // 1
    Instrmt_9_set.insert("423060.930000");
    Instrmt_9.add_attribute("SettlMeth", "C"); // 1
    Instrmt_9_set.insert("C");
    Instrmt_9.add_attribute("ExerStyle", "2"); // 1
    Instrmt_9_set.insert("2");
    Instrmt_9.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_9_set.insert("3");
    Instrmt_9.add_attribute("OptPayAmt", "OptPayoutAmount_t_1088291121"); // 1
    Instrmt_9_set.insert("OptPayoutAmount_t_1088291121");
    Instrmt_9.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_9_set.insert("INX");
    Instrmt_9.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_9_set.insert("FUT");
    Instrmt_9.add_attribute("ListMeth", "0"); // 1
    Instrmt_9_set.insert("0");
    Instrmt_9.add_attribute("CapPx", "8725842.430000"); // 1
    Instrmt_9_set.insert("8725842.430000");
    Instrmt_9.add_attribute("FlrPx", "1762509.550000"); // 1
    Instrmt_9_set.insert("1762509.550000");
    Instrmt_9.add_attribute("PutCall", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("FlexInd", "false"); // 1
    Instrmt_9_set.insert("false");
    Instrmt_9.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_9_set.insert("true");
    Instrmt_9.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_9_set.insert("Wk");
    Instrmt_9.add_attribute("CpnRt", "2624393.850000"); // 1
    Instrmt_9_set.insert("2624393.850000");
    Instrmt_9.add_attribute("Exch", "SecurityExchange_t_1681700962"); // 1
    Instrmt_9_set.insert("SecurityExchange_t_1681700962");
    Instrmt_9.add_attribute("PosLmt", "595444780"); // 1
    Instrmt_9_set.insert("595444780");
    Instrmt_9.add_attribute("NTPosLmt", "1794187960"); // 1
    Instrmt_9_set.insert("1794187960");
    Instrmt_9.add_attribute("Issr", "Issuer_t_9396038"); // 1
    Instrmt_9_set.insert("Issuer_t_9396038");
    Instrmt_9.add_attribute("EncIssrLen", "1530395119"); // 1
    Instrmt_9_set.insert("1530395119");
    Instrmt_9.add_attribute("EncIssr", "EncodedIssuer_t_1722361486"); // 1
    Instrmt_9_set.insert("EncodedIssuer_t_1722361486");
    Instrmt_9.add_attribute("Desc", "SecurityDesc_t_1099871107"); // 1
    Instrmt_9_set.insert("SecurityDesc_t_1099871107");
    Instrmt_9.add_attribute("EncSecDescLen", "1042259884"); // 1
    Instrmt_9_set.insert("1042259884");
    Instrmt_9.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_820443598"); // 1
    Instrmt_9_set.insert("EncodedSecurityDesc_t_820443598");
    Instrmt_9.add_attribute("Pool", "Pool_t_1079324855"); // 1
    Instrmt_9_set.insert("Pool_t_1079324855");
    Instrmt_9.add_attribute("CSetMo", "196635820"); // 1
    Instrmt_9_set.insert("196635820");
    Instrmt_9.add_attribute("CPPgm", "99"); // 1
    Instrmt_9_set.insert("99");
    Instrmt_9.add_attribute("CPRegT", "CPRegType_t_678869188"); // 1
    Instrmt_9_set.insert("CPRegType_t_678869188");
    Instrmt_9.add_attribute("Dated", "DatedDate_t_1495966272"); // 1
    Instrmt_9_set.insert("DatedDate_t_1495966272");
    Instrmt_9.add_attribute("IntAcrl", "InterestAccrualDate_t_1435459923"); // 1
    Instrmt_9_set.insert("InterestAccrualDate_t_1435459923");
    all_values.push_back(Instrmt_9_set);
    all_compo_names.insert("Instrmt_9_set");

    {
      xml_element AID_9{"AID"};
      multiset<string> AID_9_set;
      AID_9.add_attribute("AltID", "SecurityAltID_t_1642646947"); // 2
      AID_9_set.insert("SecurityAltID_t_1642646947");
      AID_9.add_attribute("AltIDSrc", "4"); // 2
      AID_9_set.insert("4");
      all_values.push_back(AID_9_set);
      all_compo_names.insert("AID_9_set");

      Instrmt_9.add_element(AID_9);
    }
    {
      xml_element SecXML_9{"SecXML"};
      multiset<string> SecXML_9_set;
      SecXML_9.add_attribute("Schema", "SecurityXMLSchema_t_212584885"); // 2
      SecXML_9_set.insert("SecurityXMLSchema_t_212584885");
      all_values.push_back(SecXML_9_set);
      all_compo_names.insert("SecXML_9_set");

      Instrmt_9.add_element(SecXML_9);
    }
    {
      xml_element Evnt_9{"Evnt"};
      multiset<string> Evnt_9_set;
      Evnt_9.add_attribute("EventTyp", "18"); // 2
      Evnt_9_set.insert("18");
      Evnt_9.add_attribute("Dt", "EventDate_t_1565616048"); // 2
      Evnt_9_set.insert("EventDate_t_1565616048");
      Evnt_9.add_attribute("Tm", "EventTime_t_1300876007"); // 2
      Evnt_9_set.insert("EventTime_t_1300876007");
      Evnt_9.add_attribute("Px", "2717261.670000"); // 2
      Evnt_9_set.insert("2717261.670000");
      Evnt_9.add_attribute("Txt", "EventText_t_327284906"); // 2
      Evnt_9_set.insert("EventText_t_327284906");
      all_values.push_back(Evnt_9_set);
      all_compo_names.insert("Evnt_9_set");

      Instrmt_9.add_element(Evnt_9);
    }
    {
      xml_element Pty_87{"Pty"};
      multiset<string> Pty_87_set;
      Pty_87.add_attribute("ID", "InstrumentPartyID_t_1261777793"); // 2
      Pty_87_set.insert("InstrumentPartyID_t_1261777793");
      Pty_87.add_attribute("Src", "B"); // 2
      Pty_87_set.insert("B");
      Pty_87.add_attribute("R", "48"); // 2
      Pty_87_set.insert("48");
      all_values.push_back(Pty_87_set);
      all_compo_names.insert("Pty_87_set");

      {
        xml_element Sub_87{"Sub"};
        multiset<string> Sub_87_set;
        Sub_87.add_attribute("ID", "InstrumentPartySubID_t_1009906446"); // 3
        Sub_87_set.insert("InstrumentPartySubID_t_1009906446");
        Sub_87.add_attribute("Typ", "26"); // 3
        Sub_87_set.insert("26");
        all_values.push_back(Sub_87_set);
        all_compo_names.insert("Sub_87_set");

        Pty_87.add_element(Sub_87);
      }
      Instrmt_9.add_element(Pty_87);
    }
    {
      xml_element CmplxEvnt_9{"CmplxEvnt"};
      multiset<string> CmplxEvnt_9_set;
      CmplxEvnt_9.add_attribute("Typ", "8"); // 2
      CmplxEvnt_9_set.insert("8");
      CmplxEvnt_9.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1180738091"); // 2
      CmplxEvnt_9_set.insert("ComplexOptPayoutAmount_t_1180738091");
      CmplxEvnt_9.add_attribute("Px", "7911959.950000"); // 2
      CmplxEvnt_9_set.insert("7911959.950000");
      CmplxEvnt_9.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_9_set.insert("4");
      CmplxEvnt_9.add_attribute("PxBndryPrcsn", "17761828.710000"); // 2
      CmplxEvnt_9_set.insert("17761828.710000");
      CmplxEvnt_9.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_9_set.insert("1");
      CmplxEvnt_9.add_attribute("Cond", "1"); // 2
      CmplxEvnt_9_set.insert("1");
      all_values.push_back(CmplxEvnt_9_set);
      all_compo_names.insert("CmplxEvnt_9_set");

      {
        xml_element EvntDts_9{"EvntDts"};
        multiset<string> EvntDts_9_set;
        EvntDts_9.add_attribute("StartDt", "ComplexEventStartDate_t_1159094342"); // 3
        EvntDts_9_set.insert("ComplexEventStartDate_t_1159094342");
        EvntDts_9.add_attribute("EndDt", "ComplexEventEndDate_t_12778145"); // 3
        EvntDts_9_set.insert("ComplexEventEndDate_t_12778145");
        all_values.push_back(EvntDts_9_set);
        all_compo_names.insert("EvntDts_9_set");

        {
          xml_element EvntTms_9{"EvntTms"};
          multiset<string> EvntTms_9_set;
          EvntTms_9.add_attribute("StartTm", "448059635"); // 4
          EvntTms_9_set.insert("448059635");
          EvntTms_9.add_attribute("EndTm", "53870579"); // 4
          EvntTms_9_set.insert("53870579");
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
    xml_element FinDetls_6{"FinDetls"};
    multiset<string> FinDetls_6_set;
    FinDetls_6.add_attribute("AgmtDesc", "AgreementDesc_t_833221744"); // 1
    FinDetls_6_set.insert("AgreementDesc_t_833221744");
    FinDetls_6.add_attribute("AgmtID", "AgreementID_t_1527384490"); // 1
    FinDetls_6_set.insert("AgreementID_t_1527384490");
    FinDetls_6.add_attribute("AgmtDt", "AgreementDate_t_250506399"); // 1
    FinDetls_6_set.insert("AgreementDate_t_250506399");
    FinDetls_6.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_6_set.insert("USD");
    FinDetls_6.add_attribute("TrmTyp", "4"); // 1
    FinDetls_6_set.insert("4");
    FinDetls_6.add_attribute("StartDt", "StartDate_t_56309447"); // 1
    FinDetls_6_set.insert("StartDate_t_56309447");
    FinDetls_6.add_attribute("EndDt", "EndDate_t_1701416978"); // 1
    FinDetls_6_set.insert("EndDate_t_1701416978");
    FinDetls_6.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_6_set.insert("1");
    FinDetls_6.add_attribute("MgnRatio", "2688943.330000"); // 1
    FinDetls_6_set.insert("2688943.330000");
    all_values.push_back(FinDetls_6_set);
    all_compo_names.insert("FinDetls_6_set");

    elt.add_element(FinDetls_6);
  } // end FinDetls
  { // Leg
    xml_element Leg_16{"Leg"};
    multiset<string> Leg_16_set;
    Leg_16.add_attribute("Sym", "LegSymbol_t_555393789"); // 1
    Leg_16_set.insert("LegSymbol_t_555393789");
    Leg_16.add_attribute("Sfx", "CD"); // 1
    Leg_16_set.insert("CD");
    Leg_16.add_attribute("ID", "LegSecurityID_t_1831073215"); // 1
    Leg_16_set.insert("LegSecurityID_t_1831073215");
    Leg_16.add_attribute("Src", "L"); // 1
    Leg_16_set.insert("L");
    Leg_16.add_attribute("Prod", "1"); // 1
    Leg_16_set.insert("1");
    Leg_16.add_attribute("CFI", "LegCFICode_t_827899977"); // 1
    Leg_16_set.insert("LegCFICode_t_827899977");
    Leg_16.add_attribute("SecTyp", "FXSWAP"); // 1
    Leg_16_set.insert("FXSWAP");
    Leg_16.add_attribute("SecSubTyp", "LegSecuritySubType_t_1693970931"); // 1
    Leg_16_set.insert("LegSecuritySubType_t_1693970931");
    Leg_16.add_attribute("MMY", "1356656586"); // 1
    Leg_16_set.insert("1356656586");
    Leg_16.add_attribute("Mat", "LegMaturityDate_t_1190789732"); // 1
    Leg_16_set.insert("LegMaturityDate_t_1190789732");
    Leg_16.add_attribute("MatTm", "727225374"); // 1
    Leg_16_set.insert("727225374");
    Leg_16.add_attribute("CpnPmt", "LegCouponPaymentDate_t_368933"); // 1
    Leg_16_set.insert("LegCouponPaymentDate_t_368933");
    Leg_16.add_attribute("Issued", "LegIssueDate_t_529582222"); // 1
    Leg_16_set.insert("LegIssueDate_t_529582222");
    Leg_16.add_attribute("RepoCollSecTyp", "355924597"); // 1
    Leg_16_set.insert("355924597");
    Leg_16.add_attribute("RepoTrm", "438269241"); // 1
    Leg_16_set.insert("438269241");
    Leg_16.add_attribute("RepoRt", "20252543.990000"); // 1
    Leg_16_set.insert("20252543.990000");
    Leg_16.add_attribute("Fctr", "15150189.400000"); // 1
    Leg_16_set.insert("15150189.400000");
    Leg_16.add_attribute("CrdRtg", "LegCreditRating_t_451047386"); // 1
    Leg_16_set.insert("LegCreditRating_t_451047386");
    Leg_16.add_attribute("Rgstry", "LegInstrRegistry_t_325830386"); // 1
    Leg_16_set.insert("LegInstrRegistry_t_325830386");
    Leg_16.add_attribute("Ctry", "1568889519"); // 1
    Leg_16_set.insert("1568889519");
    Leg_16.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1284269130"); // 1
    Leg_16_set.insert("LegStateOrProvinceOfIssue_t_1284269130");
    Leg_16.add_attribute("Lcl", "LegLocaleOfIssue_t_1853214877"); // 1
    Leg_16_set.insert("LegLocaleOfIssue_t_1853214877");
    Leg_16.add_attribute("Redeem", "LegRedemptionDate_t_1819395918"); // 1
    Leg_16_set.insert("LegRedemptionDate_t_1819395918");
    Leg_16.add_attribute("Strk", "20526023.030000"); // 1
    Leg_16_set.insert("20526023.030000");
    Leg_16.add_attribute("StrkCcy", "EUR"); // 1
    Leg_16_set.insert("EUR");
    Leg_16.add_attribute("OptA", "2108911750"); // 1
    Leg_16_set.insert("2108911750");
    Leg_16.add_attribute("Cmult", "14659182.370000"); // 1
    Leg_16_set.insert("14659182.370000");
    Leg_16.add_attribute("MultTyp", "1"); // 1
    Leg_16_set.insert("1");
    Leg_16.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_16_set.insert("0");
    Leg_16.add_attribute("UOM", "tn"); // 1
    Leg_16_set.insert("tn");
    Leg_16.add_attribute("UOMQty", "9635564.710000"); // 1
    Leg_16_set.insert("9635564.710000");
    Leg_16.add_attribute("PxUOM", "MWh"); // 1
    Leg_16_set.insert("MWh");
    Leg_16.add_attribute("PxUOMQty", "5613712.040000"); // 1
    Leg_16_set.insert("5613712.040000");
    Leg_16.add_attribute("TmUnit", "S"); // 1
    Leg_16_set.insert("S");
    Leg_16.add_attribute("ExerStyle", "1"); // 1
    Leg_16_set.insert("1");
    Leg_16.add_attribute("CpnRt", "13892711.810000"); // 1
    Leg_16_set.insert("13892711.810000");
    Leg_16.add_attribute("Exch", "LegSecurityExchange_t_1084966076"); // 1
    Leg_16_set.insert("LegSecurityExchange_t_1084966076");
    Leg_16.add_attribute("Issr", "LegIssuer_t_2030644544"); // 1
    Leg_16_set.insert("LegIssuer_t_2030644544");
    Leg_16.add_attribute("EncLegIssrLen", "598444120"); // 1
    Leg_16_set.insert("598444120");
    Leg_16.add_attribute("EncLegIssr", "EncodedLegIssuer_t_128272160"); // 1
    Leg_16_set.insert("EncodedLegIssuer_t_128272160");
    Leg_16.add_attribute("Desc", "LegSecurityDesc_t_610386270"); // 1
    Leg_16_set.insert("LegSecurityDesc_t_610386270");
    Leg_16.add_attribute("EncLegSecDescLen", "598813053"); // 1
    Leg_16_set.insert("598813053");
    Leg_16.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_657854383"); // 1
    Leg_16_set.insert("EncodedLegSecurityDesc_t_657854383");
    Leg_16.add_attribute("RatioQty", "9663108.680000"); // 1
    Leg_16_set.insert("9663108.680000");
    Leg_16.add_attribute("Side", "7"); // 1
    Leg_16_set.insert("7");
    Leg_16.add_attribute("Ccy", "JPY"); // 1
    Leg_16_set.insert("JPY");
    Leg_16.add_attribute("Pool", "LegPool_t_1488129681"); // 1
    Leg_16_set.insert("LegPool_t_1488129681");
    Leg_16.add_attribute("Dated", "LegDatedDate_t_861455520"); // 1
    Leg_16_set.insert("LegDatedDate_t_861455520");
    Leg_16.add_attribute("CSetMo", "1902735679"); // 1
    Leg_16_set.insert("1902735679");
    Leg_16.add_attribute("IntAcrl", "LegInterestAccrualDate_t_624915163"); // 1
    Leg_16_set.insert("LegInterestAccrualDate_t_624915163");
    Leg_16.add_attribute("PutCall", "567186749"); // 1
    Leg_16_set.insert("567186749");
    Leg_16.add_attribute("LegOptionRatio", "15746479.490000"); // 1
    Leg_16_set.insert("15746479.490000");
    Leg_16.add_attribute("Px", "5300338.180000"); // 1
    Leg_16_set.insert("5300338.180000");
    all_values.push_back(Leg_16_set);
    all_compo_names.insert("Leg_16_set");

    {
      xml_element LegAID_16{"LegAID"};
      multiset<string> LegAID_16_set;
      LegAID_16.add_attribute("SecAltID", "LegSecurityAltID_t_331688009"); // 2
      LegAID_16_set.insert("LegSecurityAltID_t_331688009");
      LegAID_16.add_attribute("SecAltIDSrc", "B"); // 2
      LegAID_16_set.insert("B");
      all_values.push_back(LegAID_16_set);
      all_compo_names.insert("LegAID_16_set");

      Leg_16.add_element(LegAID_16);
    }
    elt.add_element(Leg_16);
  } // end Leg
  { // Leg
    xml_element Leg_17{"Leg"};
    multiset<string> Leg_17_set;
    Leg_17.add_attribute("Sym", "LegSymbol_t_491461921"); // 1
    Leg_17_set.insert("LegSymbol_t_491461921");
    Leg_17.add_attribute("Sfx", "CD"); // 1
    Leg_17_set.insert("CD");
    Leg_17.add_attribute("ID", "LegSecurityID_t_1253711925"); // 1
    Leg_17_set.insert("LegSecurityID_t_1253711925");
    Leg_17.add_attribute("Src", "J"); // 1
    Leg_17_set.insert("J");
    Leg_17.add_attribute("Prod", "11"); // 1
    Leg_17_set.insert("11");
    Leg_17.add_attribute("CFI", "LegCFICode_t_69784748"); // 1
    Leg_17_set.insert("LegCFICode_t_69784748");
    Leg_17.add_attribute("SecTyp", "CORP"); // 1
    Leg_17_set.insert("CORP");
    Leg_17.add_attribute("SecSubTyp", "LegSecuritySubType_t_1089275440"); // 1
    Leg_17_set.insert("LegSecuritySubType_t_1089275440");
    Leg_17.add_attribute("MMY", "1916019915"); // 1
    Leg_17_set.insert("1916019915");
    Leg_17.add_attribute("Mat", "LegMaturityDate_t_711067096"); // 1
    Leg_17_set.insert("LegMaturityDate_t_711067096");
    Leg_17.add_attribute("MatTm", "331062974"); // 1
    Leg_17_set.insert("331062974");
    Leg_17.add_attribute("CpnPmt", "LegCouponPaymentDate_t_853502343"); // 1
    Leg_17_set.insert("LegCouponPaymentDate_t_853502343");
    Leg_17.add_attribute("Issued", "LegIssueDate_t_594227992"); // 1
    Leg_17_set.insert("LegIssueDate_t_594227992");
    Leg_17.add_attribute("RepoCollSecTyp", "929507094"); // 1
    Leg_17_set.insert("929507094");
    Leg_17.add_attribute("RepoTrm", "981774504"); // 1
    Leg_17_set.insert("981774504");
    Leg_17.add_attribute("RepoRt", "12046142.630000"); // 1
    Leg_17_set.insert("12046142.630000");
    Leg_17.add_attribute("Fctr", "15283201.470000"); // 1
    Leg_17_set.insert("15283201.470000");
    Leg_17.add_attribute("CrdRtg", "LegCreditRating_t_1639628887"); // 1
    Leg_17_set.insert("LegCreditRating_t_1639628887");
    Leg_17.add_attribute("Rgstry", "LegInstrRegistry_t_23441483"); // 1
    Leg_17_set.insert("LegInstrRegistry_t_23441483");
    Leg_17.add_attribute("Ctry", "417918794"); // 1
    Leg_17_set.insert("417918794");
    Leg_17.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_27770373"); // 1
    Leg_17_set.insert("LegStateOrProvinceOfIssue_t_27770373");
    Leg_17.add_attribute("Lcl", "LegLocaleOfIssue_t_357287643"); // 1
    Leg_17_set.insert("LegLocaleOfIssue_t_357287643");
    Leg_17.add_attribute("Redeem", "LegRedemptionDate_t_1906048475"); // 1
    Leg_17_set.insert("LegRedemptionDate_t_1906048475");
    Leg_17.add_attribute("Strk", "8892258.930000"); // 1
    Leg_17_set.insert("8892258.930000");
    Leg_17.add_attribute("StrkCcy", "JPY"); // 1
    Leg_17_set.insert("JPY");
    Leg_17.add_attribute("OptA", "1456412643"); // 1
    Leg_17_set.insert("1456412643");
    Leg_17.add_attribute("Cmult", "16871876.230000"); // 1
    Leg_17_set.insert("16871876.230000");
    Leg_17.add_attribute("MultTyp", "0"); // 1
    Leg_17_set.insert("0");
    Leg_17.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_17_set.insert("2");
    Leg_17.add_attribute("UOM", "Bu"); // 1
    Leg_17_set.insert("Bu");
    Leg_17.add_attribute("UOMQty", "14049757.300000"); // 1
    Leg_17_set.insert("14049757.300000");
    Leg_17.add_attribute("PxUOM", "USD"); // 1
    Leg_17_set.insert("USD");
    Leg_17.add_attribute("PxUOMQty", "16389651.420000"); // 1
    Leg_17_set.insert("16389651.420000");
    Leg_17.add_attribute("TmUnit", "D"); // 1
    Leg_17_set.insert("D");
    Leg_17.add_attribute("ExerStyle", "2"); // 1
    Leg_17_set.insert("2");
    Leg_17.add_attribute("CpnRt", "17087498.910000"); // 1
    Leg_17_set.insert("17087498.910000");
    Leg_17.add_attribute("Exch", "LegSecurityExchange_t_353669922"); // 1
    Leg_17_set.insert("LegSecurityExchange_t_353669922");
    Leg_17.add_attribute("Issr", "LegIssuer_t_907919279"); // 1
    Leg_17_set.insert("LegIssuer_t_907919279");
    Leg_17.add_attribute("EncLegIssrLen", "1477286158"); // 1
    Leg_17_set.insert("1477286158");
    Leg_17.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1064737019"); // 1
    Leg_17_set.insert("EncodedLegIssuer_t_1064737019");
    Leg_17.add_attribute("Desc", "LegSecurityDesc_t_1238982253"); // 1
    Leg_17_set.insert("LegSecurityDesc_t_1238982253");
    Leg_17.add_attribute("EncLegSecDescLen", "183304854"); // 1
    Leg_17_set.insert("183304854");
    Leg_17.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1658965011"); // 1
    Leg_17_set.insert("EncodedLegSecurityDesc_t_1658965011");
    Leg_17.add_attribute("RatioQty", "210056.990000"); // 1
    Leg_17_set.insert("210056.990000");
    Leg_17.add_attribute("Side", "F"); // 1
    Leg_17_set.insert("F");
    Leg_17.add_attribute("Ccy", "GBP"); // 1
    Leg_17_set.insert("GBP");
    Leg_17.add_attribute("Pool", "LegPool_t_657224597"); // 1
    Leg_17_set.insert("LegPool_t_657224597");
    Leg_17.add_attribute("Dated", "LegDatedDate_t_739537109"); // 1
    Leg_17_set.insert("LegDatedDate_t_739537109");
    Leg_17.add_attribute("CSetMo", "1967244640"); // 1
    Leg_17_set.insert("1967244640");
    Leg_17.add_attribute("IntAcrl", "LegInterestAccrualDate_t_684994970"); // 1
    Leg_17_set.insert("LegInterestAccrualDate_t_684994970");
    Leg_17.add_attribute("PutCall", "1096824752"); // 1
    Leg_17_set.insert("1096824752");
    Leg_17.add_attribute("LegOptionRatio", "17258094.670000"); // 1
    Leg_17_set.insert("17258094.670000");
    Leg_17.add_attribute("Px", "15742208.630000"); // 1
    Leg_17_set.insert("15742208.630000");
    all_values.push_back(Leg_17_set);
    all_compo_names.insert("Leg_17_set");

    {
      xml_element LegAID_17{"LegAID"};
      multiset<string> LegAID_17_set;
      LegAID_17.add_attribute("SecAltID", "LegSecurityAltID_t_1209364426"); // 2
      LegAID_17_set.insert("LegSecurityAltID_t_1209364426");
      LegAID_17.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_17_set.insert("D");
      all_values.push_back(LegAID_17_set);
      all_compo_names.insert("LegAID_17_set");

      Leg_17.add_element(LegAID_17);
    }
    elt.add_element(Leg_17);
  } // end Leg
  { // Undly
    xml_element Undly_17{"Undly"};
    multiset<string> Undly_17_set;
    Undly_17.add_attribute("Sym", "UnderlyingSymbol_t_749068401"); // 1
    Undly_17_set.insert("UnderlyingSymbol_t_749068401");
    Undly_17.add_attribute("Sfx", "WI"); // 1
    Undly_17_set.insert("WI");
    Undly_17.add_attribute("ID", "UnderlyingSecurityID_t_523766862"); // 1
    Undly_17_set.insert("UnderlyingSecurityID_t_523766862");
    Undly_17.add_attribute("Src", "E"); // 1
    Undly_17_set.insert("E");
    Undly_17.add_attribute("Prod", "6"); // 1
    Undly_17_set.insert("6");
    Undly_17.add_attribute("CFI", "UnderlyingCFICode_t_1961990113"); // 1
    Undly_17_set.insert("UnderlyingCFICode_t_1961990113");
    Undly_17.add_attribute("SecTyp", "EUCORP"); // 1
    Undly_17_set.insert("EUCORP");
    Undly_17.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_112088139"); // 1
    Undly_17_set.insert("UnderlyingSecuritySubType_t_112088139");
    Undly_17.add_attribute("MMY", "1780633951"); // 1
    Undly_17_set.insert("1780633951");
    Undly_17.add_attribute("Mat", "UnderlyingMaturityDate_t_187069356"); // 1
    Undly_17_set.insert("UnderlyingMaturityDate_t_187069356");
    Undly_17.add_attribute("MatTm", "465758062"); // 1
    Undly_17_set.insert("465758062");
    Undly_17.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_541069582"); // 1
    Undly_17_set.insert("UnderlyingCouponPaymentDate_t_541069582");
    Undly_17.add_attribute("RestrctTyp", "XR"); // 1
    Undly_17_set.insert("XR");
    Undly_17.add_attribute("Snrty", "SD"); // 1
    Undly_17_set.insert("SD");
    Undly_17.add_attribute("NotlPctOut", "17800518.350000"); // 1
    Undly_17_set.insert("17800518.350000");
    Undly_17.add_attribute("OrigNotlPctOut", "18476603.690000"); // 1
    Undly_17_set.insert("18476603.690000");
    Undly_17.add_attribute("AttchPnt", "10419764.440000"); // 1
    Undly_17_set.insert("10419764.440000");
    Undly_17.add_attribute("DetchPnt", "18010575.340000"); // 1
    Undly_17_set.insert("18010575.340000");
    Undly_17.add_attribute("Issued", "UnderlyingIssueDate_t_865256079"); // 1
    Undly_17_set.insert("UnderlyingIssueDate_t_865256079");
    Undly_17.add_attribute("RepoCollSecTyp", "1758072071"); // 1
    Undly_17_set.insert("1758072071");
    Undly_17.add_attribute("RepoTrm", "1202899733"); // 1
    Undly_17_set.insert("1202899733");
    Undly_17.add_attribute("RepoRt", "15224806.760000"); // 1
    Undly_17_set.insert("15224806.760000");
    Undly_17.add_attribute("Fctr", "3501255.320000"); // 1
    Undly_17_set.insert("3501255.320000");
    Undly_17.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1022660725"); // 1
    Undly_17_set.insert("UnderlyingCreditRating_t_1022660725");
    Undly_17.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_59991998"); // 1
    Undly_17_set.insert("UnderlyingInstrRegistry_t_59991998");
    Undly_17.add_attribute("Ctry", "1446950285"); // 1
    Undly_17_set.insert("1446950285");
    Undly_17.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_600986545"); // 1
    Undly_17_set.insert("UnderlyingStateOrProvinceOfIssue_t_600986545");
    Undly_17.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1634212861"); // 1
    Undly_17_set.insert("UnderlyingLocaleOfIssue_t_1634212861");
    Undly_17.add_attribute("Redeem", "UnderlyingRedemptionDate_t_508831063"); // 1
    Undly_17_set.insert("UnderlyingRedemptionDate_t_508831063");
    Undly_17.add_attribute("StrkPx", "5627923.550000"); // 1
    Undly_17_set.insert("5627923.550000");
    Undly_17.add_attribute("StrkCcy", "CAN"); // 1
    Undly_17_set.insert("CAN");
    Undly_17.add_attribute("OptA", "1438111974"); // 1
    Undly_17_set.insert("1438111974");
    Undly_17.add_attribute("Mult", "8936459.340000"); // 1
    Undly_17_set.insert("8936459.340000");
    Undly_17.add_attribute("MultTyp", "1"); // 1
    Undly_17_set.insert("1");
    Undly_17.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_17_set.insert("0");
    Undly_17.add_attribute("UOM", "MMbbl"); // 1
    Undly_17_set.insert("MMbbl");
    Undly_17.add_attribute("UOMQty", "8705405.490000"); // 1
    Undly_17_set.insert("8705405.490000");
    Undly_17.add_attribute("PxUOM", "Gal"); // 1
    Undly_17_set.insert("Gal");
    Undly_17.add_attribute("PxUOMQty", "3413027.030000"); // 1
    Undly_17_set.insert("3413027.030000");
    Undly_17.add_attribute("TmUnit", "D"); // 1
    Undly_17_set.insert("D");
    Undly_17.add_attribute("ExerStyle", "2"); // 1
    Undly_17_set.insert("2");
    Undly_17.add_attribute("CpnRt", "8823722.850000"); // 1
    Undly_17_set.insert("8823722.850000");
    Undly_17.add_attribute("Exch", "UnderlyingSecurityExchange_t_574481773"); // 1
    Undly_17_set.insert("UnderlyingSecurityExchange_t_574481773");
    Undly_17.add_attribute("Issr", "UnderlyingIssuer_t_1531781309"); // 1
    Undly_17_set.insert("UnderlyingIssuer_t_1531781309");
    Undly_17.add_attribute("EncUndIssrLen", "514940473"); // 1
    Undly_17_set.insert("514940473");
    Undly_17.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_274658494"); // 1
    Undly_17_set.insert("EncodedUnderlyingIssuer_t_274658494");
    Undly_17.add_attribute("Desc", "UnderlyingSecurityDesc_t_426274106"); // 1
    Undly_17_set.insert("UnderlyingSecurityDesc_t_426274106");
    Undly_17.add_attribute("EncUndSecDescLen", "168514359"); // 1
    Undly_17_set.insert("168514359");
    Undly_17.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1139914573"); // 1
    Undly_17_set.insert("EncodedUnderlyingSecurityDesc_t_1139914573");
    Undly_17.add_attribute("CPPgm", "UnderlyingCPProgram_t_36862529"); // 1
    Undly_17_set.insert("UnderlyingCPProgram_t_36862529");
    Undly_17.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1371414092"); // 1
    Undly_17_set.insert("UnderlyingCPRegType_t_1371414092");
    Undly_17.add_attribute("AllocPct", "5149116.010000"); // 1
    Undly_17_set.insert("5149116.010000");
    Undly_17.add_attribute("Ccy", "GBP"); // 1
    Undly_17_set.insert("GBP");
    Undly_17.add_attribute("Qty", "5749035.990000"); // 1
    Undly_17_set.insert("5749035.990000");
    Undly_17.add_attribute("SettlTyp", "2"); // 1
    Undly_17_set.insert("2");
    Undly_17.add_attribute("CashAmt", "UnderlyingCashAmount_t_847577715"); // 1
    Undly_17_set.insert("UnderlyingCashAmount_t_847577715");
    Undly_17.add_attribute("CashTyp", "FIXED"); // 1
    Undly_17_set.insert("FIXED");
    Undly_17.add_attribute("Px", "1952857.620000"); // 1
    Undly_17_set.insert("1952857.620000");
    Undly_17.add_attribute("DirtPx", "14103700.700000"); // 1
    Undly_17_set.insert("14103700.700000");
    Undly_17.add_attribute("EndPx", "4315118.840000"); // 1
    Undly_17_set.insert("4315118.840000");
    Undly_17.add_attribute("StartVal", "UnderlyingStartValue_t_1453185227"); // 1
    Undly_17_set.insert("UnderlyingStartValue_t_1453185227");
    Undly_17.add_attribute("CurVal", "UnderlyingCurrentValue_t_700998396"); // 1
    Undly_17_set.insert("UnderlyingCurrentValue_t_700998396");
    Undly_17.add_attribute("EndVal", "UnderlyingEndValue_t_1325157819"); // 1
    Undly_17_set.insert("UnderlyingEndValue_t_1325157819");
    Undly_17.add_attribute("AdjQty", "16979226.630000"); // 1
    Undly_17_set.insert("16979226.630000");
    Undly_17.add_attribute("FxRate", "1244384.230000"); // 1
    Undly_17_set.insert("1244384.230000");
    Undly_17.add_attribute("FxRateCalc", "M"); // 1
    Undly_17_set.insert("M");
    Undly_17.add_attribute("CapValu", "UnderlyingCapValue_t_420979564"); // 1
    Undly_17_set.insert("UnderlyingCapValue_t_420979564");
    Undly_17.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1807450237"); // 1
    Undly_17_set.insert("UnderlyingSettlMethod_t_1807450237");
    Undly_17.add_attribute("PutCall", "227129273"); // 1
    Undly_17_set.insert("227129273");
    all_values.push_back(Undly_17_set);
    all_compo_names.insert("Undly_17_set");

    {
      xml_element UndAID_17{"UndAID"};
      multiset<string> UndAID_17_set;
      UndAID_17.add_attribute("AltID", "UnderlyingSecurityAltID_t_1478589470"); // 2
      UndAID_17_set.insert("UnderlyingSecurityAltID_t_1478589470");
      UndAID_17.add_attribute("AltIDSrc", "K"); // 2
      UndAID_17_set.insert("K");
      all_values.push_back(UndAID_17_set);
      all_compo_names.insert("UndAID_17_set");

      Undly_17.add_element(UndAID_17);
    }
    {
      xml_element Stip_26{"Stip"};
      multiset<string> Stip_26_set;
      Stip_26.add_attribute("Typ", "PROTECT"); // 2
      Stip_26_set.insert("PROTECT");
      Stip_26.add_attribute("Val", "UnderlyingStipValue_t_2053071243"); // 2
      Stip_26_set.insert("UnderlyingStipValue_t_2053071243");
      all_values.push_back(Stip_26_set);
      all_compo_names.insert("Stip_26_set");

      Undly_17.add_element(Stip_26);
    }
    {
      xml_element Pty_88{"Pty"};
      multiset<string> Pty_88_set;
      Pty_88.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1193034127"); // 2
      Pty_88_set.insert("UnderlyingInstrumentPartyID_t_1193034127");
      Pty_88.add_attribute("Src", "B"); // 2
      Pty_88_set.insert("B");
      Pty_88.add_attribute("R", "67"); // 2
      Pty_88_set.insert("67");
      all_values.push_back(Pty_88_set);
      all_compo_names.insert("Pty_88_set");

      {
        xml_element Sub_88{"Sub"};
        multiset<string> Sub_88_set;
        Sub_88.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1619308233"); // 3
        Sub_88_set.insert("UnderlyingInstrumentPartySubID_t_1619308233");
        Sub_88.add_attribute("Typ", "29"); // 3
        Sub_88_set.insert("29");
        all_values.push_back(Sub_88_set);
        all_compo_names.insert("Sub_88_set");

        Pty_88.add_element(Sub_88);
      }
      Undly_17.add_element(Pty_88);
    }
    elt.add_element(Undly_17);
  } // end Undly
  { // TrdRegTS
    xml_element TrdRegTS_4{"TrdRegTS"};
    multiset<string> TrdRegTS_4_set;
    TrdRegTS_4.add_attribute("TS", "TrdRegTimestamp_t_1656170762"); // 1
    TrdRegTS_4_set.insert("TrdRegTimestamp_t_1656170762");
    TrdRegTS_4.add_attribute("Typ", "1"); // 1
    TrdRegTS_4_set.insert("1");
    TrdRegTS_4.add_attribute("Src", "TrdRegTimestampOrigin_t_1835072263"); // 1
    TrdRegTS_4_set.insert("TrdRegTimestampOrigin_t_1835072263");
    TrdRegTS_4.add_attribute("DskTyp", "IN"); // 1
    TrdRegTS_4_set.insert("IN");
    TrdRegTS_4.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_4_set.insert("1");
    TrdRegTS_4.add_attribute("DskOrdHndlInst", "MQT"); // 1
    TrdRegTS_4_set.insert("MQT");
    all_values.push_back(TrdRegTS_4_set);
    all_compo_names.insert("TrdRegTS_4_set");

    elt.add_element(TrdRegTS_4);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_9{"MiscFees"};
    multiset<string> MiscFees_9_set;
    MiscFees_9.add_attribute("Amt", "MiscFeeAmt_t_2111055721"); // 1
    MiscFees_9_set.insert("MiscFeeAmt_t_2111055721");
    MiscFees_9.add_attribute("Curr", "GBP"); // 1
    MiscFees_9_set.insert("GBP");
    MiscFees_9.add_attribute("Typ", "5"); // 1
    MiscFees_9_set.insert("5");
    MiscFees_9.add_attribute("Basis", "1"); // 1
    MiscFees_9_set.insert("1");
    all_values.push_back(MiscFees_9_set);
    all_compo_names.insert("MiscFees_9_set");

    elt.add_element(MiscFees_9);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_10{"MiscFees"};
    multiset<string> MiscFees_10_set;
    MiscFees_10.add_attribute("Amt", "MiscFeeAmt_t_1230600863"); // 1
    MiscFees_10_set.insert("MiscFeeAmt_t_1230600863");
    MiscFees_10.add_attribute("Curr", "JPY"); // 1
    MiscFees_10_set.insert("JPY");
    MiscFees_10.add_attribute("Typ", "8"); // 1
    MiscFees_10_set.insert("8");
    MiscFees_10.add_attribute("Basis", "0"); // 1
    MiscFees_10_set.insert("0");
    all_values.push_back(MiscFees_10_set);
    all_compo_names.insert("MiscFees_10_set");

    elt.add_element(MiscFees_10);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_11{"MiscFees"};
    multiset<string> MiscFees_11_set;
    MiscFees_11.add_attribute("Amt", "MiscFeeAmt_t_1966621301"); // 1
    MiscFees_11_set.insert("MiscFeeAmt_t_1966621301");
    MiscFees_11.add_attribute("Curr", "EUR"); // 1
    MiscFees_11_set.insert("EUR");
    MiscFees_11.add_attribute("Typ", "4"); // 1
    MiscFees_11_set.insert("4");
    MiscFees_11.add_attribute("Basis", "2"); // 1
    MiscFees_11_set.insert("2");
    all_values.push_back(MiscFees_11_set);
    all_compo_names.insert("MiscFees_11_set");

    elt.add_element(MiscFees_11);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_5{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_5_set;
    SprdBnchmkCurve_5.add_attribute("Spread", "15205983.690000"); // 1
    SprdBnchmkCurve_5_set.insert("15205983.690000");
    SprdBnchmkCurve_5.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_5_set.insert("EUR");
    SprdBnchmkCurve_5.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_5_set.insert("SONIA");
    SprdBnchmkCurve_5.add_attribute("Point", "BenchmarkCurvePoint_t_632726869"); // 1
    SprdBnchmkCurve_5_set.insert("BenchmarkCurvePoint_t_632726869");
    SprdBnchmkCurve_5.add_attribute("Px", "6189589.500000"); // 1
    SprdBnchmkCurve_5_set.insert("6189589.500000");
    SprdBnchmkCurve_5.add_attribute("PxTyp", "3"); // 1
    SprdBnchmkCurve_5_set.insert("3");
    SprdBnchmkCurve_5.add_attribute("SecID", "BenchmarkSecurityID_t_278199613"); // 1
    SprdBnchmkCurve_5_set.insert("BenchmarkSecurityID_t_278199613");
    SprdBnchmkCurve_5.add_attribute("SecIDSrc", "E"); // 1
    SprdBnchmkCurve_5_set.insert("E");
    all_values.push_back(SprdBnchmkCurve_5_set);
    all_compo_names.insert("SprdBnchmkCurve_5_set");

    elt.add_element(SprdBnchmkCurve_5);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_27{"Stip"};
    multiset<string> Stip_27_set;
    Stip_27.add_attribute("Typ", "STRUCT"); // 1
    Stip_27_set.insert("STRUCT");
    Stip_27.add_attribute("Val", "StipulationValue_t_1626708228"); // 1
    Stip_27_set.insert("StipulationValue_t_1626708228");
    all_values.push_back(Stip_27_set);
    all_compo_names.insert("Stip_27_set");

    elt.add_element(Stip_27);
  } // end Stip
  { // Stip
    xml_element Stip_28{"Stip"};
    multiset<string> Stip_28_set;
    Stip_28.add_attribute("Typ", "HEP"); // 1
    Stip_28_set.insert("HEP");
    Stip_28.add_attribute("Val", "StipulationValue_t_411080807"); // 1
    Stip_28_set.insert("StipulationValue_t_411080807");
    all_values.push_back(Stip_28_set);
    all_compo_names.insert("Stip_28_set");

    elt.add_element(Stip_28);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_10{"SetInstr"};
    multiset<string> SetInstr_10_set;
    SetInstr_10.add_attribute("DlvryTyp", "3"); // 1
    SetInstr_10_set.insert("3");
    SetInstr_10.add_attribute("StandInstDbTyp", "2"); // 1
    SetInstr_10_set.insert("2");
    SetInstr_10.add_attribute("StandInstDbName", "StandInstDbName_t_374652880"); // 1
    SetInstr_10_set.insert("StandInstDbName_t_374652880");
    SetInstr_10.add_attribute("StandInstDbID", "StandInstDbID_t_65841822"); // 1
    SetInstr_10_set.insert("StandInstDbID_t_65841822");
    all_values.push_back(SetInstr_10_set);
    all_compo_names.insert("SetInstr_10_set");

    {
      xml_element DlvInst_10{"DlvInst"};
      multiset<string> DlvInst_10_set;
      DlvInst_10.add_attribute("InstSrc", "2"); // 2
      DlvInst_10_set.insert("2");
      DlvInst_10.add_attribute("InstTyp", "S"); // 2
      DlvInst_10_set.insert("S");
      all_values.push_back(DlvInst_10_set);
      all_compo_names.insert("DlvInst_10_set");

      {
        xml_element Pty_89{"Pty"};
        multiset<string> Pty_89_set;
        Pty_89.add_attribute("ID", "SettlPartyID_t_821478733"); // 3
        Pty_89_set.insert("SettlPartyID_t_821478733");
        Pty_89.add_attribute("Src", "2"); // 3
        Pty_89_set.insert("2");
        Pty_89.add_attribute("R", "84"); // 3
        Pty_89_set.insert("84");
        all_values.push_back(Pty_89_set);
        all_compo_names.insert("Pty_89_set");

        {
          xml_element Sub_89{"Sub"};
          multiset<string> Sub_89_set;
          Sub_89.add_attribute("ID", "SettlPartySubID_t_754789816"); // 4
          Sub_89_set.insert("SettlPartySubID_t_754789816");
          Sub_89.add_attribute("Typ", "14"); // 4
          Sub_89_set.insert("14");
          all_values.push_back(Sub_89_set);
          all_compo_names.insert("Sub_89_set");

          Pty_89.add_element(Sub_89);
        }
        DlvInst_10.add_element(Pty_89);
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
