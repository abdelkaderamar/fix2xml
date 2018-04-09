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
  elt.add_attribute("ID", "CollInquiryID_t_257530621"); // 0
  CollateralInquiry_message_t_0.insert("CollInquiryID_t_257530621");
  elt.add_attribute("SubReqTyp", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_1970060624"); // 0
  CollateralInquiry_message_t_0.insert("ResponseDestination_t_1970060624");
  elt.add_attribute("Acct", "Account_t_2061202793"); // 0
  CollateralInquiry_message_t_0.insert("Account_t_2061202793");
  elt.add_attribute("AcctTyp", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("ClOrdID", "ClOrdID_t_2028273917"); // 0
  CollateralInquiry_message_t_0.insert("ClOrdID_t_2028273917");
  elt.add_attribute("OrdID", "OrderID_t_1484850647"); // 0
  CollateralInquiry_message_t_0.insert("OrderID_t_1484850647");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1440634889"); // 0
  CollateralInquiry_message_t_0.insert("SecondaryOrderID_t_1440634889");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1788435498"); // 0
  CollateralInquiry_message_t_0.insert("SecondaryClOrdID_t_1788435498");
  elt.add_attribute("SettlDt", "SettlDate_t_1116110644"); // 0
  CollateralInquiry_message_t_0.insert("SettlDate_t_1116110644");
  elt.add_attribute("Qty", "1712067.050000"); // 0
  CollateralInquiry_message_t_0.insert("1712067.050000");
  elt.add_attribute("QtyTyp", "2"); // 0
  CollateralInquiry_message_t_0.insert("2");
  elt.add_attribute("Ccy", "GBP"); // 0
  CollateralInquiry_message_t_0.insert("GBP");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1735999793"); // 0
  CollateralInquiry_message_t_0.insert("MarginExcess_t_1735999793");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1864866607"); // 0
  CollateralInquiry_message_t_0.insert("TotalNetValue_t_1864866607");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_1322597058"); // 0
  CollateralInquiry_message_t_0.insert("CashOutstanding_t_1322597058");
  elt.add_attribute("Side", "G"); // 0
  CollateralInquiry_message_t_0.insert("G");
  elt.add_attribute("Px", "15705507.460000"); // 0
  CollateralInquiry_message_t_0.insert("15705507.460000");
  elt.add_attribute("PxTyp", "2"); // 0
  CollateralInquiry_message_t_0.insert("2");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1961288807"); // 0
  CollateralInquiry_message_t_0.insert("AccruedInterestAmt_t_1961288807");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1133119120"); // 0
  CollateralInquiry_message_t_0.insert("EndAccruedInterestAmt_t_1133119120");
  elt.add_attribute("StartCsh", "StartCash_t_197070748"); // 0
  CollateralInquiry_message_t_0.insert("StartCash_t_197070748");
  elt.add_attribute("EndCsh", "EndCash_t_1489518310"); // 0
  CollateralInquiry_message_t_0.insert("EndCash_t_1489518310");
  elt.add_attribute("SesID", "6"); // 0
  CollateralInquiry_message_t_0.insert("6");
  elt.add_attribute("SesSub", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("SetSesID", "ITD"); // 0
  CollateralInquiry_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1243243395"); // 0
  CollateralInquiry_message_t_0.insert("SettlSessSubID_t_1243243395");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_916425801"); // 0
  CollateralInquiry_message_t_0.insert("ClearingBusinessDate_t_916425801");
  elt.add_attribute("Txt", "Text_t_1434170711"); // 0
  CollateralInquiry_message_t_0.insert("Text_t_1434170711");
  elt.add_attribute("EncTxtLen", "1500774016"); // 0
  CollateralInquiry_message_t_0.insert("1500774016");
  elt.add_attribute("EncTxt", "EncodedText_t_775214795"); // 0
  CollateralInquiry_message_t_0.insert("EncodedText_t_775214795");
  all_values.push_back(CollateralInquiry_message_t_0);
  all_compo_names.insert("CollateralInquiry_message_t");

  { // Hdr
    xml_element Hdr_15{"Hdr"};
    multiset<string> Hdr_15_set;
    Hdr_15.add_attribute("SeqNum", "1502048898"); // 1
    Hdr_15_set.insert("1502048898");
    Hdr_15.add_attribute("SID", "SenderCompID_t_1323350992"); // 1
    Hdr_15_set.insert("SenderCompID_t_1323350992");
    Hdr_15.add_attribute("TID", "TargetCompID_t_688933940"); // 1
    Hdr_15_set.insert("TargetCompID_t_688933940");
    Hdr_15.add_attribute("OBID", "OnBehalfOfCompID_t_1589155204"); // 1
    Hdr_15_set.insert("OnBehalfOfCompID_t_1589155204");
    Hdr_15.add_attribute("D2ID", "DeliverToCompID_t_1204141261"); // 1
    Hdr_15_set.insert("DeliverToCompID_t_1204141261");
    Hdr_15.add_attribute("SSub", "SenderSubID_t_26300939"); // 1
    Hdr_15_set.insert("SenderSubID_t_26300939");
    Hdr_15.add_attribute("SLoc", "SenderLocationID_t_882306445"); // 1
    Hdr_15_set.insert("SenderLocationID_t_882306445");
    Hdr_15.add_attribute("TSub", "TargetSubID_t_845093111"); // 1
    Hdr_15_set.insert("TargetSubID_t_845093111");
    Hdr_15.add_attribute("TLoc", "TargetLocationID_t_1142411583"); // 1
    Hdr_15_set.insert("TargetLocationID_t_1142411583");
    Hdr_15.add_attribute("OBSub", "OnBehalfOfSubID_t_1053513151"); // 1
    Hdr_15_set.insert("OnBehalfOfSubID_t_1053513151");
    Hdr_15.add_attribute("OBLoc", "OnBehalfOfLocationID_t_835050668"); // 1
    Hdr_15_set.insert("OnBehalfOfLocationID_t_835050668");
    Hdr_15.add_attribute("D2Sub", "DeliverToSubID_t_1600282640"); // 1
    Hdr_15_set.insert("DeliverToSubID_t_1600282640");
    Hdr_15.add_attribute("D2Loc", "DeliverToLocationID_t_271512571"); // 1
    Hdr_15_set.insert("DeliverToLocationID_t_271512571");
    Hdr_15.add_attribute("PosDup", "N"); // 1
    Hdr_15_set.insert("N");
    Hdr_15.add_attribute("PosRsnd", "Y"); // 1
    Hdr_15_set.insert("Y");
    Hdr_15.add_attribute("Snt", "SendingTime_t_1594109630"); // 1
    Hdr_15_set.insert("SendingTime_t_1594109630");
    Hdr_15.add_attribute("OrigSnt", "OrigSendingTime_t_132991325"); // 1
    Hdr_15_set.insert("OrigSendingTime_t_132991325");
    Hdr_15.add_attribute("MsgEncd", "MessageEncoding_t_740732697"); // 1
    Hdr_15_set.insert("MessageEncoding_t_740732697");
    all_values.push_back(Hdr_15_set);
    all_compo_names.insert("Hdr_15_set");

    {
      xml_element Hop_15{"Hop"};
      multiset<string> Hop_15_set;
      Hop_15.add_attribute("ID", "HopCompID_t_1375839921"); // 2
      Hop_15_set.insert("HopCompID_t_1375839921");
      Hop_15.add_attribute("Ref", "2094280132"); // 2
      Hop_15_set.insert("2094280132");
      Hop_15.add_attribute("Snt", "HopSendingTime_t_1873851818"); // 2
      Hop_15_set.insert("HopSendingTime_t_1873851818");
      all_values.push_back(Hop_15_set);
      all_compo_names.insert("Hop_15_set");

      Hdr_15.add_element(Hop_15);
    }
    elt.add_element(Hdr_15);
  } // end Hdr
  { // Qual
    xml_element Qual_0{"Qual"};
    multiset<string> Qual_0_set;
    Qual_0.add_attribute("Qual", "3"); // 1
    Qual_0_set.insert("3");
    all_values.push_back(Qual_0_set);
    all_compo_names.insert("Qual_0_set");

    elt.add_element(Qual_0);
  } // end Qual
  { // Qual
    xml_element Qual_1{"Qual"};
    multiset<string> Qual_1_set;
    Qual_1.add_attribute("Qual", "3"); // 1
    Qual_1_set.insert("3");
    all_values.push_back(Qual_1_set);
    all_compo_names.insert("Qual_1_set");

    elt.add_element(Qual_1);
  } // end Qual
  { // Pty
    xml_element Pty_62{"Pty"};
    multiset<string> Pty_62_set;
    Pty_62.add_attribute("ID", "PartyID_t_624454759"); // 1
    Pty_62_set.insert("PartyID_t_624454759");
    Pty_62.add_attribute("Src", "9"); // 1
    Pty_62_set.insert("9");
    Pty_62.add_attribute("R", "48"); // 1
    Pty_62_set.insert("48");
    all_values.push_back(Pty_62_set);
    all_compo_names.insert("Pty_62_set");

    {
      xml_element Sub_62{"Sub"};
      multiset<string> Sub_62_set;
      Sub_62.add_attribute("ID", "PartySubID_t_2058625470"); // 2
      Sub_62_set.insert("PartySubID_t_2058625470");
      Sub_62.add_attribute("Typ", "29"); // 2
      Sub_62_set.insert("29");
      all_values.push_back(Sub_62_set);
      all_compo_names.insert("Sub_62_set");

      Pty_62.add_element(Sub_62);
    }
    elt.add_element(Pty_62);
  } // end Pty
  { // Pty
    xml_element Pty_63{"Pty"};
    multiset<string> Pty_63_set;
    Pty_63.add_attribute("ID", "PartyID_t_1400663720"); // 1
    Pty_63_set.insert("PartyID_t_1400663720");
    Pty_63.add_attribute("Src", "B"); // 1
    Pty_63_set.insert("B");
    Pty_63.add_attribute("R", "15"); // 1
    Pty_63_set.insert("15");
    all_values.push_back(Pty_63_set);
    all_compo_names.insert("Pty_63_set");

    {
      xml_element Sub_63{"Sub"};
      multiset<string> Sub_63_set;
      Sub_63.add_attribute("ID", "PartySubID_t_2089597660"); // 2
      Sub_63_set.insert("PartySubID_t_2089597660");
      Sub_63.add_attribute("Typ", "23"); // 2
      Sub_63_set.insert("23");
      all_values.push_back(Sub_63_set);
      all_compo_names.insert("Sub_63_set");

      Pty_63.add_element(Sub_63);
    }
    elt.add_element(Pty_63);
  } // end Pty
  { // Pty
    xml_element Pty_64{"Pty"};
    multiset<string> Pty_64_set;
    Pty_64.add_attribute("ID", "PartyID_t_1755234860"); // 1
    Pty_64_set.insert("PartyID_t_1755234860");
    Pty_64.add_attribute("Src", "4"); // 1
    Pty_64_set.insert("4");
    Pty_64.add_attribute("R", "11"); // 1
    Pty_64_set.insert("11");
    all_values.push_back(Pty_64_set);
    all_compo_names.insert("Pty_64_set");

    {
      xml_element Sub_64{"Sub"};
      multiset<string> Sub_64_set;
      Sub_64.add_attribute("ID", "PartySubID_t_452844323"); // 2
      Sub_64_set.insert("PartySubID_t_452844323");
      Sub_64.add_attribute("Typ", "14"); // 2
      Sub_64_set.insert("14");
      all_values.push_back(Sub_64_set);
      all_compo_names.insert("Sub_64_set");

      Pty_64.add_element(Sub_64);
    }
    elt.add_element(Pty_64);
  } // end Pty
  { // CollExc
    xml_element CollExc_2{"CollExc"};
    multiset<string> CollExc_2_set;
    CollExc_2.add_attribute("ExecID", "ExecID_t_1287894992"); // 1
    CollExc_2_set.insert("ExecID_t_1287894992");
    all_values.push_back(CollExc_2_set);
    all_compo_names.insert("CollExc_2_set");

    elt.add_element(CollExc_2);
  } // end CollExc
  { // CollExc
    xml_element CollExc_3{"CollExc"};
    multiset<string> CollExc_3_set;
    CollExc_3.add_attribute("ExecID", "ExecID_t_563625527"); // 1
    CollExc_3_set.insert("ExecID_t_563625527");
    all_values.push_back(CollExc_3_set);
    all_compo_names.insert("CollExc_3_set");

    elt.add_element(CollExc_3);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_1{"TrdColl"};
    multiset<string> TrdColl_1_set;
    TrdColl_1.add_attribute("RptID", "TradeReportID_t_1711461806"); // 1
    TrdColl_1_set.insert("TradeReportID_t_1711461806");
    TrdColl_1.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1881291126"); // 1
    TrdColl_1_set.insert("SecondaryTradeReportID_t_1881291126");
    all_values.push_back(TrdColl_1_set);
    all_compo_names.insert("TrdColl_1_set");

    elt.add_element(TrdColl_1);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_2{"TrdColl"};
    multiset<string> TrdColl_2_set;
    TrdColl_2.add_attribute("RptID", "TradeReportID_t_361336778"); // 1
    TrdColl_2_set.insert("TradeReportID_t_361336778");
    TrdColl_2.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1844453131"); // 1
    TrdColl_2_set.insert("SecondaryTradeReportID_t_1844453131");
    all_values.push_back(TrdColl_2_set);
    all_compo_names.insert("TrdColl_2_set");

    elt.add_element(TrdColl_2);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_3{"TrdColl"};
    multiset<string> TrdColl_3_set;
    TrdColl_3.add_attribute("RptID", "TradeReportID_t_474540176"); // 1
    TrdColl_3_set.insert("TradeReportID_t_474540176");
    TrdColl_3.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1737176700"); // 1
    TrdColl_3_set.insert("SecondaryTradeReportID_t_1737176700");
    all_values.push_back(TrdColl_3_set);
    all_compo_names.insert("TrdColl_3_set");

    elt.add_element(TrdColl_3);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_7{"Instrmt"};
    multiset<string> Instrmt_7_set;
    Instrmt_7.add_attribute("Sym", "Symbol_t_1791249616"); // 1
    Instrmt_7_set.insert("Symbol_t_1791249616");
    Instrmt_7.add_attribute("Sfx", "CD"); // 1
    Instrmt_7_set.insert("CD");
    Instrmt_7.add_attribute("ID", "SecurityID_t_1162603721"); // 1
    Instrmt_7_set.insert("SecurityID_t_1162603721");
    Instrmt_7.add_attribute("Src", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("Prod", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("ProdCmplx", "ProductComplex_t_871626846"); // 1
    Instrmt_7_set.insert("ProductComplex_t_871626846");
    Instrmt_7.add_attribute("SecGrp", "SecurityGroup_t_1704535522"); // 1
    Instrmt_7_set.insert("SecurityGroup_t_1704535522");
    Instrmt_7.add_attribute("CFI", "CFICode_t_854053075"); // 1
    Instrmt_7_set.insert("CFICode_t_854053075");
    Instrmt_7.add_attribute("SecTyp", "YCD"); // 1
    Instrmt_7_set.insert("YCD");
    Instrmt_7.add_attribute("SubTyp", "SecuritySubType_t_1615677345"); // 1
    Instrmt_7_set.insert("SecuritySubType_t_1615677345");
    Instrmt_7.add_attribute("MMY", "81795681"); // 1
    Instrmt_7_set.insert("81795681");
    Instrmt_7.add_attribute("MatDt", "MaturityDate_t_750255844"); // 1
    Instrmt_7_set.insert("MaturityDate_t_750255844");
    Instrmt_7.add_attribute("MatTm", "881384417"); // 1
    Instrmt_7_set.insert("881384417");
    Instrmt_7.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_632889279"); // 1
    Instrmt_7_set.insert("SettleOnOpenFlag_t_632889279");
    Instrmt_7.add_attribute("AsgnMeth", "692369856"); // 1
    Instrmt_7_set.insert("692369856");
    Instrmt_7.add_attribute("Status", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("CpnPmt", "CouponPaymentDate_t_240640491"); // 1
    Instrmt_7_set.insert("CouponPaymentDate_t_240640491");
    Instrmt_7.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_7_set.insert("FR");
    Instrmt_7.add_attribute("Snrty", "SD"); // 1
    Instrmt_7_set.insert("SD");
    Instrmt_7.add_attribute("NotlPctOut", "6934848.150000"); // 1
    Instrmt_7_set.insert("6934848.150000");
    Instrmt_7.add_attribute("OrigNotlPctOut", "17716113.430000"); // 1
    Instrmt_7_set.insert("17716113.430000");
    Instrmt_7.add_attribute("AttchPnt", "19691299.930000"); // 1
    Instrmt_7_set.insert("19691299.930000");
    Instrmt_7.add_attribute("DetchPnt", "19813798.070000"); // 1
    Instrmt_7_set.insert("19813798.070000");
    Instrmt_7.add_attribute("Issued", "IssueDate_t_187753222"); // 1
    Instrmt_7_set.insert("IssueDate_t_187753222");
    Instrmt_7.add_attribute("RepoCollSecTyp", "736357141"); // 1
    Instrmt_7_set.insert("736357141");
    Instrmt_7.add_attribute("RepoTrm", "1545357965"); // 1
    Instrmt_7_set.insert("1545357965");
    Instrmt_7.add_attribute("RepoRt", "20690443.480000"); // 1
    Instrmt_7_set.insert("20690443.480000");
    Instrmt_7.add_attribute("Fctr", "10976939.200000"); // 1
    Instrmt_7_set.insert("10976939.200000");
    Instrmt_7.add_attribute("CrdRtg", "CreditRating_t_1242327448"); // 1
    Instrmt_7_set.insert("CreditRating_t_1242327448");
    Instrmt_7.add_attribute("Rgstry", "InstrRegistry_t_396100876"); // 1
    Instrmt_7_set.insert("InstrRegistry_t_396100876");
    Instrmt_7.add_attribute("IssuCtry", "687386972"); // 1
    Instrmt_7_set.insert("687386972");
    Instrmt_7.add_attribute("StPrv", "StateOrProvinceOfIssue_t_886093416"); // 1
    Instrmt_7_set.insert("StateOrProvinceOfIssue_t_886093416");
    Instrmt_7.add_attribute("Lcl", "LocaleOfIssue_t_597009222"); // 1
    Instrmt_7_set.insert("LocaleOfIssue_t_597009222");
    Instrmt_7.add_attribute("Redeem", "RedemptionDate_t_1849990693"); // 1
    Instrmt_7_set.insert("RedemptionDate_t_1849990693");
    Instrmt_7.add_attribute("StrkPx", "19661741.790000"); // 1
    Instrmt_7_set.insert("19661741.790000");
    Instrmt_7.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_7_set.insert("CAN");
    Instrmt_7.add_attribute("StrkMult", "15232260.540000"); // 1
    Instrmt_7_set.insert("15232260.540000");
    Instrmt_7.add_attribute("StrkValu", "2831794.860000"); // 1
    Instrmt_7_set.insert("2831794.860000");
    Instrmt_7.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("StrkPxBndryPrcsn", "3649751.670000"); // 1
    Instrmt_7_set.insert("3649751.670000");
    Instrmt_7.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("OptAt", "1872804168"); // 1
    Instrmt_7_set.insert("1872804168");
    Instrmt_7.add_attribute("Mult", "9978644.470000"); // 1
    Instrmt_7_set.insert("9978644.470000");
    Instrmt_7.add_attribute("MultTyp", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("MinPxIncr", "12385049.380000"); // 1
    Instrmt_7_set.insert("12385049.380000");
    Instrmt_7.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2027136523"); // 1
    Instrmt_7_set.insert("MinPriceIncrementAmount_t_2027136523");
    Instrmt_7.add_attribute("UOM", "Bcf"); // 1
    Instrmt_7_set.insert("Bcf");
    Instrmt_7.add_attribute("UOMQty", "19319897.530000"); // 1
    Instrmt_7_set.insert("19319897.530000");
    Instrmt_7.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_7_set.insert("MMbbl");
    Instrmt_7.add_attribute("PxUOMQty", "4616616.790000"); // 1
    Instrmt_7_set.insert("4616616.790000");
    Instrmt_7.add_attribute("SettlMeth", "C"); // 1
    Instrmt_7_set.insert("C");
    Instrmt_7.add_attribute("ExerStyle", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("OptPayAmt", "OptPayoutAmount_t_1163760229"); // 1
    Instrmt_7_set.insert("OptPayoutAmount_t_1163760229");
    Instrmt_7.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_7_set.insert("INX");
    Instrmt_7.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_7_set.insert("CDS");
    Instrmt_7.add_attribute("ListMeth", "0"); // 1
    Instrmt_7_set.insert("0");
    Instrmt_7.add_attribute("CapPx", "91953.690000"); // 1
    Instrmt_7_set.insert("91953.690000");
    Instrmt_7.add_attribute("FlrPx", "8356160.650000"); // 1
    Instrmt_7_set.insert("8356160.650000");
    Instrmt_7.add_attribute("PutCall", "0"); // 1
    Instrmt_7_set.insert("0");
    Instrmt_7.add_attribute("FlexInd", "true"); // 1
    Instrmt_7_set.insert("true");
    Instrmt_7.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_7_set.insert("true");
    Instrmt_7.add_attribute("TmUnit", "S"); // 1
    Instrmt_7_set.insert("S");
    Instrmt_7.add_attribute("CpnRt", "353310.030000"); // 1
    Instrmt_7_set.insert("353310.030000");
    Instrmt_7.add_attribute("Exch", "SecurityExchange_t_1112257002"); // 1
    Instrmt_7_set.insert("SecurityExchange_t_1112257002");
    Instrmt_7.add_attribute("PosLmt", "339130384"); // 1
    Instrmt_7_set.insert("339130384");
    Instrmt_7.add_attribute("NTPosLmt", "318510490"); // 1
    Instrmt_7_set.insert("318510490");
    Instrmt_7.add_attribute("Issr", "Issuer_t_1035983017"); // 1
    Instrmt_7_set.insert("Issuer_t_1035983017");
    Instrmt_7.add_attribute("EncIssrLen", "1330550135"); // 1
    Instrmt_7_set.insert("1330550135");
    Instrmt_7.add_attribute("EncIssr", "EncodedIssuer_t_683485657"); // 1
    Instrmt_7_set.insert("EncodedIssuer_t_683485657");
    Instrmt_7.add_attribute("Desc", "SecurityDesc_t_1709964876"); // 1
    Instrmt_7_set.insert("SecurityDesc_t_1709964876");
    Instrmt_7.add_attribute("EncSecDescLen", "1055870655"); // 1
    Instrmt_7_set.insert("1055870655");
    Instrmt_7.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1681350104"); // 1
    Instrmt_7_set.insert("EncodedSecurityDesc_t_1681350104");
    Instrmt_7.add_attribute("Pool", "Pool_t_928832943"); // 1
    Instrmt_7_set.insert("Pool_t_928832943");
    Instrmt_7.add_attribute("CSetMo", "369954222"); // 1
    Instrmt_7_set.insert("369954222");
    Instrmt_7.add_attribute("CPPgm", "99"); // 1
    Instrmt_7_set.insert("99");
    Instrmt_7.add_attribute("CPRegT", "CPRegType_t_808485819"); // 1
    Instrmt_7_set.insert("CPRegType_t_808485819");
    Instrmt_7.add_attribute("Dated", "DatedDate_t_1009969556"); // 1
    Instrmt_7_set.insert("DatedDate_t_1009969556");
    Instrmt_7.add_attribute("IntAcrl", "InterestAccrualDate_t_556877500"); // 1
    Instrmt_7_set.insert("InterestAccrualDate_t_556877500");
    all_values.push_back(Instrmt_7_set);
    all_compo_names.insert("Instrmt_7_set");

    {
      xml_element AID_7{"AID"};
      multiset<string> AID_7_set;
      AID_7.add_attribute("AltID", "SecurityAltID_t_312266389"); // 2
      AID_7_set.insert("SecurityAltID_t_312266389");
      AID_7.add_attribute("AltIDSrc", "K"); // 2
      AID_7_set.insert("K");
      all_values.push_back(AID_7_set);
      all_compo_names.insert("AID_7_set");

      Instrmt_7.add_element(AID_7);
    }
    {
      xml_element SecXML_7{"SecXML"};
      multiset<string> SecXML_7_set;
      SecXML_7.add_attribute("Schema", "SecurityXMLSchema_t_175279765"); // 2
      SecXML_7_set.insert("SecurityXMLSchema_t_175279765");
      all_values.push_back(SecXML_7_set);
      all_compo_names.insert("SecXML_7_set");

      Instrmt_7.add_element(SecXML_7);
    }
    {
      xml_element Evnt_7{"Evnt"};
      multiset<string> Evnt_7_set;
      Evnt_7.add_attribute("EventTyp", "3"); // 2
      Evnt_7_set.insert("3");
      Evnt_7.add_attribute("Dt", "EventDate_t_522166409"); // 2
      Evnt_7_set.insert("EventDate_t_522166409");
      Evnt_7.add_attribute("Tm", "EventTime_t_1339039994"); // 2
      Evnt_7_set.insert("EventTime_t_1339039994");
      Evnt_7.add_attribute("Px", "17643783.230000"); // 2
      Evnt_7_set.insert("17643783.230000");
      Evnt_7.add_attribute("Txt", "EventText_t_670395502"); // 2
      Evnt_7_set.insert("EventText_t_670395502");
      all_values.push_back(Evnt_7_set);
      all_compo_names.insert("Evnt_7_set");

      Instrmt_7.add_element(Evnt_7);
    }
    {
      xml_element Pty_65{"Pty"};
      multiset<string> Pty_65_set;
      Pty_65.add_attribute("ID", "InstrumentPartyID_t_1597644024"); // 2
      Pty_65_set.insert("InstrumentPartyID_t_1597644024");
      Pty_65.add_attribute("Src", "F"); // 2
      Pty_65_set.insert("F");
      Pty_65.add_attribute("R", "2"); // 2
      Pty_65_set.insert("2");
      all_values.push_back(Pty_65_set);
      all_compo_names.insert("Pty_65_set");

      {
        xml_element Sub_65{"Sub"};
        multiset<string> Sub_65_set;
        Sub_65.add_attribute("ID", "InstrumentPartySubID_t_594857823"); // 3
        Sub_65_set.insert("InstrumentPartySubID_t_594857823");
        Sub_65.add_attribute("Typ", "21"); // 3
        Sub_65_set.insert("21");
        all_values.push_back(Sub_65_set);
        all_compo_names.insert("Sub_65_set");

        Pty_65.add_element(Sub_65);
      }
      Instrmt_7.add_element(Pty_65);
    }
    {
      xml_element CmplxEvnt_7{"CmplxEvnt"};
      multiset<string> CmplxEvnt_7_set;
      CmplxEvnt_7.add_attribute("Typ", "3"); // 2
      CmplxEvnt_7_set.insert("3");
      CmplxEvnt_7.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1558245801"); // 2
      CmplxEvnt_7_set.insert("ComplexOptPayoutAmount_t_1558245801");
      CmplxEvnt_7.add_attribute("Px", "2676256.400000"); // 2
      CmplxEvnt_7_set.insert("2676256.400000");
      CmplxEvnt_7.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_7_set.insert("2");
      CmplxEvnt_7.add_attribute("PxBndryPrcsn", "18973761.850000"); // 2
      CmplxEvnt_7_set.insert("18973761.850000");
      CmplxEvnt_7.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_7_set.insert("1");
      CmplxEvnt_7.add_attribute("Cond", "1"); // 2
      CmplxEvnt_7_set.insert("1");
      all_values.push_back(CmplxEvnt_7_set);
      all_compo_names.insert("CmplxEvnt_7_set");

      {
        xml_element EvntDts_7{"EvntDts"};
        multiset<string> EvntDts_7_set;
        EvntDts_7.add_attribute("StartDt", "ComplexEventStartDate_t_1080442672"); // 3
        EvntDts_7_set.insert("ComplexEventStartDate_t_1080442672");
        EvntDts_7.add_attribute("EndDt", "ComplexEventEndDate_t_1269621787"); // 3
        EvntDts_7_set.insert("ComplexEventEndDate_t_1269621787");
        all_values.push_back(EvntDts_7_set);
        all_compo_names.insert("EvntDts_7_set");

        {
          xml_element EvntTms_7{"EvntTms"};
          multiset<string> EvntTms_7_set;
          EvntTms_7.add_attribute("StartTm", "1607372276"); // 4
          EvntTms_7_set.insert("1607372276");
          EvntTms_7.add_attribute("EndTm", "2136313327"); // 4
          EvntTms_7_set.insert("2136313327");
          all_values.push_back(EvntTms_7_set);
          all_compo_names.insert("EvntTms_7_set");

          EvntDts_7.add_element(EvntTms_7);
        }
        CmplxEvnt_7.add_element(EvntDts_7);
      }
      Instrmt_7.add_element(CmplxEvnt_7);
    }
    elt.add_element(Instrmt_7);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_4{"FinDetls"};
    multiset<string> FinDetls_4_set;
    FinDetls_4.add_attribute("AgmtDesc", "AgreementDesc_t_803488244"); // 1
    FinDetls_4_set.insert("AgreementDesc_t_803488244");
    FinDetls_4.add_attribute("AgmtID", "AgreementID_t_388721572"); // 1
    FinDetls_4_set.insert("AgreementID_t_388721572");
    FinDetls_4.add_attribute("AgmtDt", "AgreementDate_t_358783901"); // 1
    FinDetls_4_set.insert("AgreementDate_t_358783901");
    FinDetls_4.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_4_set.insert("EUR");
    FinDetls_4.add_attribute("TrmTyp", "3"); // 1
    FinDetls_4_set.insert("3");
    FinDetls_4.add_attribute("StartDt", "StartDate_t_2132737139"); // 1
    FinDetls_4_set.insert("StartDate_t_2132737139");
    FinDetls_4.add_attribute("EndDt", "EndDate_t_1509473780"); // 1
    FinDetls_4_set.insert("EndDate_t_1509473780");
    FinDetls_4.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_4_set.insert("2");
    FinDetls_4.add_attribute("MgnRatio", "1605332.560000"); // 1
    FinDetls_4_set.insert("1605332.560000");
    all_values.push_back(FinDetls_4_set);
    all_compo_names.insert("FinDetls_4_set");

    elt.add_element(FinDetls_4);
  } // end FinDetls
  { // Leg
    xml_element Leg_13{"Leg"};
    multiset<string> Leg_13_set;
    Leg_13.add_attribute("Sym", "LegSymbol_t_1215067455"); // 1
    Leg_13_set.insert("LegSymbol_t_1215067455");
    Leg_13.add_attribute("Sfx", "WI"); // 1
    Leg_13_set.insert("WI");
    Leg_13.add_attribute("ID", "LegSecurityID_t_1130168637"); // 1
    Leg_13_set.insert("LegSecurityID_t_1130168637");
    Leg_13.add_attribute("Src", "G"); // 1
    Leg_13_set.insert("G");
    Leg_13.add_attribute("Prod", "8"); // 1
    Leg_13_set.insert("8");
    Leg_13.add_attribute("CFI", "LegCFICode_t_756258682"); // 1
    Leg_13_set.insert("LegCFICode_t_756258682");
    Leg_13.add_attribute("SecTyp", "SPCLO"); // 1
    Leg_13_set.insert("SPCLO");
    Leg_13.add_attribute("SecSubTyp", "LegSecuritySubType_t_1544591450"); // 1
    Leg_13_set.insert("LegSecuritySubType_t_1544591450");
    Leg_13.add_attribute("MMY", "988553318"); // 1
    Leg_13_set.insert("988553318");
    Leg_13.add_attribute("Mat", "LegMaturityDate_t_1140641905"); // 1
    Leg_13_set.insert("LegMaturityDate_t_1140641905");
    Leg_13.add_attribute("MatTm", "955353603"); // 1
    Leg_13_set.insert("955353603");
    Leg_13.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1256178958"); // 1
    Leg_13_set.insert("LegCouponPaymentDate_t_1256178958");
    Leg_13.add_attribute("Issued", "LegIssueDate_t_2066289"); // 1
    Leg_13_set.insert("LegIssueDate_t_2066289");
    Leg_13.add_attribute("RepoCollSecTyp", "705246140"); // 1
    Leg_13_set.insert("705246140");
    Leg_13.add_attribute("RepoTrm", "1842315088"); // 1
    Leg_13_set.insert("1842315088");
    Leg_13.add_attribute("RepoRt", "20469573.370000"); // 1
    Leg_13_set.insert("20469573.370000");
    Leg_13.add_attribute("Fctr", "17856888.120000"); // 1
    Leg_13_set.insert("17856888.120000");
    Leg_13.add_attribute("CrdRtg", "LegCreditRating_t_964453228"); // 1
    Leg_13_set.insert("LegCreditRating_t_964453228");
    Leg_13.add_attribute("Rgstry", "LegInstrRegistry_t_1506845966"); // 1
    Leg_13_set.insert("LegInstrRegistry_t_1506845966");
    Leg_13.add_attribute("Ctry", "1774518492"); // 1
    Leg_13_set.insert("1774518492");
    Leg_13.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1767941472"); // 1
    Leg_13_set.insert("LegStateOrProvinceOfIssue_t_1767941472");
    Leg_13.add_attribute("Lcl", "LegLocaleOfIssue_t_1895567538"); // 1
    Leg_13_set.insert("LegLocaleOfIssue_t_1895567538");
    Leg_13.add_attribute("Redeem", "LegRedemptionDate_t_2133302393"); // 1
    Leg_13_set.insert("LegRedemptionDate_t_2133302393");
    Leg_13.add_attribute("Strk", "11963174.630000"); // 1
    Leg_13_set.insert("11963174.630000");
    Leg_13.add_attribute("StrkCcy", "CAN"); // 1
    Leg_13_set.insert("CAN");
    Leg_13.add_attribute("OptA", "1181570954"); // 1
    Leg_13_set.insert("1181570954");
    Leg_13.add_attribute("Cmult", "3072814.130000"); // 1
    Leg_13_set.insert("3072814.130000");
    Leg_13.add_attribute("MultTyp", "0"); // 1
    Leg_13_set.insert("0");
    Leg_13.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_13_set.insert("1");
    Leg_13.add_attribute("UOM", "Gal"); // 1
    Leg_13_set.insert("Gal");
    Leg_13.add_attribute("UOMQty", "11150570.560000"); // 1
    Leg_13_set.insert("11150570.560000");
    Leg_13.add_attribute("PxUOM", "Bbl"); // 1
    Leg_13_set.insert("Bbl");
    Leg_13.add_attribute("PxUOMQty", "8032403.650000"); // 1
    Leg_13_set.insert("8032403.650000");
    Leg_13.add_attribute("TmUnit", "Yr"); // 1
    Leg_13_set.insert("Yr");
    Leg_13.add_attribute("ExerStyle", "2"); // 1
    Leg_13_set.insert("2");
    Leg_13.add_attribute("CpnRt", "15594990.470000"); // 1
    Leg_13_set.insert("15594990.470000");
    Leg_13.add_attribute("Exch", "LegSecurityExchange_t_2097027241"); // 1
    Leg_13_set.insert("LegSecurityExchange_t_2097027241");
    Leg_13.add_attribute("Issr", "LegIssuer_t_1041035244"); // 1
    Leg_13_set.insert("LegIssuer_t_1041035244");
    Leg_13.add_attribute("EncLegIssrLen", "400568718"); // 1
    Leg_13_set.insert("400568718");
    Leg_13.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1090185499"); // 1
    Leg_13_set.insert("EncodedLegIssuer_t_1090185499");
    Leg_13.add_attribute("Desc", "LegSecurityDesc_t_1996388847"); // 1
    Leg_13_set.insert("LegSecurityDesc_t_1996388847");
    Leg_13.add_attribute("EncLegSecDescLen", "1656747676"); // 1
    Leg_13_set.insert("1656747676");
    Leg_13.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1092251788"); // 1
    Leg_13_set.insert("EncodedLegSecurityDesc_t_1092251788");
    Leg_13.add_attribute("RatioQty", "5541513.400000"); // 1
    Leg_13_set.insert("5541513.400000");
    Leg_13.add_attribute("Side", "E"); // 1
    Leg_13_set.insert("E");
    Leg_13.add_attribute("Ccy", "GBP"); // 1
    Leg_13_set.insert("GBP");
    Leg_13.add_attribute("Pool", "LegPool_t_168548697"); // 1
    Leg_13_set.insert("LegPool_t_168548697");
    Leg_13.add_attribute("Dated", "LegDatedDate_t_351087795"); // 1
    Leg_13_set.insert("LegDatedDate_t_351087795");
    Leg_13.add_attribute("CSetMo", "1966874996"); // 1
    Leg_13_set.insert("1966874996");
    Leg_13.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1936490169"); // 1
    Leg_13_set.insert("LegInterestAccrualDate_t_1936490169");
    Leg_13.add_attribute("PutCall", "99171685"); // 1
    Leg_13_set.insert("99171685");
    Leg_13.add_attribute("LegOptionRatio", "19526937.420000"); // 1
    Leg_13_set.insert("19526937.420000");
    Leg_13.add_attribute("Px", "9853239.840000"); // 1
    Leg_13_set.insert("9853239.840000");
    all_values.push_back(Leg_13_set);
    all_compo_names.insert("Leg_13_set");

    {
      xml_element LegAID_13{"LegAID"};
      multiset<string> LegAID_13_set;
      LegAID_13.add_attribute("SecAltID", "LegSecurityAltID_t_1044462966"); // 2
      LegAID_13_set.insert("LegSecurityAltID_t_1044462966");
      LegAID_13.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_13_set.insert("4");
      all_values.push_back(LegAID_13_set);
      all_compo_names.insert("LegAID_13_set");

      Leg_13.add_element(LegAID_13);
    }
    elt.add_element(Leg_13);
  } // end Leg
  { // Undly
    xml_element Undly_9{"Undly"};
    multiset<string> Undly_9_set;
    Undly_9.add_attribute("Sym", "UnderlyingSymbol_t_1351744380"); // 1
    Undly_9_set.insert("UnderlyingSymbol_t_1351744380");
    Undly_9.add_attribute("Sfx", "WI"); // 1
    Undly_9_set.insert("WI");
    Undly_9.add_attribute("ID", "UnderlyingSecurityID_t_1361515501"); // 1
    Undly_9_set.insert("UnderlyingSecurityID_t_1361515501");
    Undly_9.add_attribute("Src", "9"); // 1
    Undly_9_set.insert("9");
    Undly_9.add_attribute("Prod", "11"); // 1
    Undly_9_set.insert("11");
    Undly_9.add_attribute("CFI", "UnderlyingCFICode_t_2055709315"); // 1
    Undly_9_set.insert("UnderlyingCFICode_t_2055709315");
    Undly_9.add_attribute("SecTyp", "AMENDED"); // 1
    Undly_9_set.insert("AMENDED");
    Undly_9.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_880381673"); // 1
    Undly_9_set.insert("UnderlyingSecuritySubType_t_880381673");
    Undly_9.add_attribute("MMY", "1552153109"); // 1
    Undly_9_set.insert("1552153109");
    Undly_9.add_attribute("Mat", "UnderlyingMaturityDate_t_1240071873"); // 1
    Undly_9_set.insert("UnderlyingMaturityDate_t_1240071873");
    Undly_9.add_attribute("MatTm", "829925266"); // 1
    Undly_9_set.insert("829925266");
    Undly_9.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_445704705"); // 1
    Undly_9_set.insert("UnderlyingCouponPaymentDate_t_445704705");
    Undly_9.add_attribute("RestrctTyp", "XR"); // 1
    Undly_9_set.insert("XR");
    Undly_9.add_attribute("Snrty", "SB"); // 1
    Undly_9_set.insert("SB");
    Undly_9.add_attribute("NotlPctOut", "2946099.040000"); // 1
    Undly_9_set.insert("2946099.040000");
    Undly_9.add_attribute("OrigNotlPctOut", "11499046.190000"); // 1
    Undly_9_set.insert("11499046.190000");
    Undly_9.add_attribute("AttchPnt", "8648789.050000"); // 1
    Undly_9_set.insert("8648789.050000");
    Undly_9.add_attribute("DetchPnt", "8487612.440000"); // 1
    Undly_9_set.insert("8487612.440000");
    Undly_9.add_attribute("Issued", "UnderlyingIssueDate_t_354000088"); // 1
    Undly_9_set.insert("UnderlyingIssueDate_t_354000088");
    Undly_9.add_attribute("RepoCollSecTyp", "1856604383"); // 1
    Undly_9_set.insert("1856604383");
    Undly_9.add_attribute("RepoTrm", "1041117749"); // 1
    Undly_9_set.insert("1041117749");
    Undly_9.add_attribute("RepoRt", "5225487.850000"); // 1
    Undly_9_set.insert("5225487.850000");
    Undly_9.add_attribute("Fctr", "602085.300000"); // 1
    Undly_9_set.insert("602085.300000");
    Undly_9.add_attribute("CrdRtg", "UnderlyingCreditRating_t_860509097"); // 1
    Undly_9_set.insert("UnderlyingCreditRating_t_860509097");
    Undly_9.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_311555306"); // 1
    Undly_9_set.insert("UnderlyingInstrRegistry_t_311555306");
    Undly_9.add_attribute("Ctry", "159380216"); // 1
    Undly_9_set.insert("159380216");
    Undly_9.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_665719191"); // 1
    Undly_9_set.insert("UnderlyingStateOrProvinceOfIssue_t_665719191");
    Undly_9.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1296879290"); // 1
    Undly_9_set.insert("UnderlyingLocaleOfIssue_t_1296879290");
    Undly_9.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1203843182"); // 1
    Undly_9_set.insert("UnderlyingRedemptionDate_t_1203843182");
    Undly_9.add_attribute("StrkPx", "18255014.890000"); // 1
    Undly_9_set.insert("18255014.890000");
    Undly_9.add_attribute("StrkCcy", "USD"); // 1
    Undly_9_set.insert("USD");
    Undly_9.add_attribute("OptA", "737789740"); // 1
    Undly_9_set.insert("737789740");
    Undly_9.add_attribute("Mult", "5303224.340000"); // 1
    Undly_9_set.insert("5303224.340000");
    Undly_9.add_attribute("MultTyp", "1"); // 1
    Undly_9_set.insert("1");
    Undly_9.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_9_set.insert("2");
    Undly_9.add_attribute("UOM", "tn"); // 1
    Undly_9_set.insert("tn");
    Undly_9.add_attribute("UOMQty", "11134928.480000"); // 1
    Undly_9_set.insert("11134928.480000");
    Undly_9.add_attribute("PxUOM", "Gal"); // 1
    Undly_9_set.insert("Gal");
    Undly_9.add_attribute("PxUOMQty", "19907012.110000"); // 1
    Undly_9_set.insert("19907012.110000");
    Undly_9.add_attribute("TmUnit", "H"); // 1
    Undly_9_set.insert("H");
    Undly_9.add_attribute("ExerStyle", "1"); // 1
    Undly_9_set.insert("1");
    Undly_9.add_attribute("CpnRt", "2889222.680000"); // 1
    Undly_9_set.insert("2889222.680000");
    Undly_9.add_attribute("Exch", "UnderlyingSecurityExchange_t_1846721664"); // 1
    Undly_9_set.insert("UnderlyingSecurityExchange_t_1846721664");
    Undly_9.add_attribute("Issr", "UnderlyingIssuer_t_100585456"); // 1
    Undly_9_set.insert("UnderlyingIssuer_t_100585456");
    Undly_9.add_attribute("EncUndIssrLen", "583532172"); // 1
    Undly_9_set.insert("583532172");
    Undly_9.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_849142635"); // 1
    Undly_9_set.insert("EncodedUnderlyingIssuer_t_849142635");
    Undly_9.add_attribute("Desc", "UnderlyingSecurityDesc_t_965464362"); // 1
    Undly_9_set.insert("UnderlyingSecurityDesc_t_965464362");
    Undly_9.add_attribute("EncUndSecDescLen", "1432293417"); // 1
    Undly_9_set.insert("1432293417");
    Undly_9.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1203142724"); // 1
    Undly_9_set.insert("EncodedUnderlyingSecurityDesc_t_1203142724");
    Undly_9.add_attribute("CPPgm", "UnderlyingCPProgram_t_674585097"); // 1
    Undly_9_set.insert("UnderlyingCPProgram_t_674585097");
    Undly_9.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_325927518"); // 1
    Undly_9_set.insert("UnderlyingCPRegType_t_325927518");
    Undly_9.add_attribute("AllocPct", "17256915.090000"); // 1
    Undly_9_set.insert("17256915.090000");
    Undly_9.add_attribute("Ccy", "CAN"); // 1
    Undly_9_set.insert("CAN");
    Undly_9.add_attribute("Qty", "20372468.160000"); // 1
    Undly_9_set.insert("20372468.160000");
    Undly_9.add_attribute("SettlTyp", "5"); // 1
    Undly_9_set.insert("5");
    Undly_9.add_attribute("CashAmt", "UnderlyingCashAmount_t_1852155807"); // 1
    Undly_9_set.insert("UnderlyingCashAmount_t_1852155807");
    Undly_9.add_attribute("CashTyp", "FIXED"); // 1
    Undly_9_set.insert("FIXED");
    Undly_9.add_attribute("Px", "20980170.260000"); // 1
    Undly_9_set.insert("20980170.260000");
    Undly_9.add_attribute("DirtPx", "15301736.480000"); // 1
    Undly_9_set.insert("15301736.480000");
    Undly_9.add_attribute("EndPx", "3554493.910000"); // 1
    Undly_9_set.insert("3554493.910000");
    Undly_9.add_attribute("StartVal", "UnderlyingStartValue_t_358637292"); // 1
    Undly_9_set.insert("UnderlyingStartValue_t_358637292");
    Undly_9.add_attribute("CurVal", "UnderlyingCurrentValue_t_120479740"); // 1
    Undly_9_set.insert("UnderlyingCurrentValue_t_120479740");
    Undly_9.add_attribute("EndVal", "UnderlyingEndValue_t_885771826"); // 1
    Undly_9_set.insert("UnderlyingEndValue_t_885771826");
    Undly_9.add_attribute("AdjQty", "17915573.150000"); // 1
    Undly_9_set.insert("17915573.150000");
    Undly_9.add_attribute("FxRate", "8856147.870000"); // 1
    Undly_9_set.insert("8856147.870000");
    Undly_9.add_attribute("FxRateCalc", "M"); // 1
    Undly_9_set.insert("M");
    Undly_9.add_attribute("CapValu", "UnderlyingCapValue_t_757566515"); // 1
    Undly_9_set.insert("UnderlyingCapValue_t_757566515");
    Undly_9.add_attribute("SetMeth", "UnderlyingSettlMethod_t_383647860"); // 1
    Undly_9_set.insert("UnderlyingSettlMethod_t_383647860");
    Undly_9.add_attribute("PutCall", "1167537491"); // 1
    Undly_9_set.insert("1167537491");
    all_values.push_back(Undly_9_set);
    all_compo_names.insert("Undly_9_set");

    {
      xml_element UndAID_9{"UndAID"};
      multiset<string> UndAID_9_set;
      UndAID_9.add_attribute("AltID", "UnderlyingSecurityAltID_t_963647588"); // 2
      UndAID_9_set.insert("UnderlyingSecurityAltID_t_963647588");
      UndAID_9.add_attribute("AltIDSrc", "8"); // 2
      UndAID_9_set.insert("8");
      all_values.push_back(UndAID_9_set);
      all_compo_names.insert("UndAID_9_set");

      Undly_9.add_element(UndAID_9);
    }
    {
      xml_element Stip_20{"Stip"};
      multiset<string> Stip_20_set;
      Stip_20.add_attribute("Typ", "YTM"); // 2
      Stip_20_set.insert("YTM");
      Stip_20.add_attribute("Val", "UnderlyingStipValue_t_662885604"); // 2
      Stip_20_set.insert("UnderlyingStipValue_t_662885604");
      all_values.push_back(Stip_20_set);
      all_compo_names.insert("Stip_20_set");

      Undly_9.add_element(Stip_20);
    }
    {
      xml_element Pty_66{"Pty"};
      multiset<string> Pty_66_set;
      Pty_66.add_attribute("ID", "UnderlyingInstrumentPartyID_t_812191655"); // 2
      Pty_66_set.insert("UnderlyingInstrumentPartyID_t_812191655");
      Pty_66.add_attribute("Src", "2"); // 2
      Pty_66_set.insert("2");
      Pty_66.add_attribute("R", "24"); // 2
      Pty_66_set.insert("24");
      all_values.push_back(Pty_66_set);
      all_compo_names.insert("Pty_66_set");

      {
        xml_element Sub_66{"Sub"};
        multiset<string> Sub_66_set;
        Sub_66.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1777656017"); // 3
        Sub_66_set.insert("UnderlyingInstrumentPartySubID_t_1777656017");
        Sub_66.add_attribute("Typ", "11"); // 3
        Sub_66_set.insert("11");
        all_values.push_back(Sub_66_set);
        all_compo_names.insert("Sub_66_set");

        Pty_66.add_element(Sub_66);
      }
      Undly_9.add_element(Pty_66);
    }
    elt.add_element(Undly_9);
  } // end Undly
  { // TrdRegTS
    xml_element TrdRegTS_1{"TrdRegTS"};
    multiset<string> TrdRegTS_1_set;
    TrdRegTS_1.add_attribute("TS", "TrdRegTimestamp_t_304757466"); // 1
    TrdRegTS_1_set.insert("TrdRegTimestamp_t_304757466");
    TrdRegTS_1.add_attribute("Typ", "6"); // 1
    TrdRegTS_1_set.insert("6");
    TrdRegTS_1.add_attribute("Src", "TrdRegTimestampOrigin_t_145895177"); // 1
    TrdRegTS_1_set.insert("TrdRegTimestampOrigin_t_145895177");
    TrdRegTS_1.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_1_set.insert("T");
    TrdRegTS_1.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_1_set.insert("1");
    TrdRegTS_1.add_attribute("DskOrdHndlInst", "LOC"); // 1
    TrdRegTS_1_set.insert("LOC");
    all_values.push_back(TrdRegTS_1_set);
    all_compo_names.insert("TrdRegTS_1_set");

    elt.add_element(TrdRegTS_1);
  } // end TrdRegTS
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_4{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_4_set;
    SprdBnchmkCurve_4.add_attribute("Spread", "19337249.370000"); // 1
    SprdBnchmkCurve_4_set.insert("19337249.370000");
    SprdBnchmkCurve_4.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_4_set.insert("CHF");
    SprdBnchmkCurve_4.add_attribute("Name", "FutureSWAP"); // 1
    SprdBnchmkCurve_4_set.insert("FutureSWAP");
    SprdBnchmkCurve_4.add_attribute("Point", "BenchmarkCurvePoint_t_1924527993"); // 1
    SprdBnchmkCurve_4_set.insert("BenchmarkCurvePoint_t_1924527993");
    SprdBnchmkCurve_4.add_attribute("Px", "15777501.950000"); // 1
    SprdBnchmkCurve_4_set.insert("15777501.950000");
    SprdBnchmkCurve_4.add_attribute("PxTyp", "7"); // 1
    SprdBnchmkCurve_4_set.insert("7");
    SprdBnchmkCurve_4.add_attribute("SecID", "BenchmarkSecurityID_t_2045007733"); // 1
    SprdBnchmkCurve_4_set.insert("BenchmarkSecurityID_t_2045007733");
    SprdBnchmkCurve_4.add_attribute("SecIDSrc", "E"); // 1
    SprdBnchmkCurve_4_set.insert("E");
    all_values.push_back(SprdBnchmkCurve_4_set);
    all_compo_names.insert("SprdBnchmkCurve_4_set");

    elt.add_element(SprdBnchmkCurve_4);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_21{"Stip"};
    multiset<string> Stip_21_set;
    Stip_21.add_attribute("Typ", "LEAVEQTY"); // 1
    Stip_21_set.insert("LEAVEQTY");
    Stip_21.add_attribute("Val", "StipulationValue_t_1640358301"); // 1
    Stip_21_set.insert("StipulationValue_t_1640358301");
    all_values.push_back(Stip_21_set);
    all_compo_names.insert("Stip_21_set");

    elt.add_element(Stip_21);
  } // end Stip
  { // Stip
    xml_element Stip_22{"Stip"};
    multiset<string> Stip_22_set;
    Stip_22.add_attribute("Typ", "MAXBAL"); // 1
    Stip_22_set.insert("MAXBAL");
    Stip_22.add_attribute("Val", "StipulationValue_t_1166786732"); // 1
    Stip_22_set.insert("StipulationValue_t_1166786732");
    all_values.push_back(Stip_22_set);
    all_compo_names.insert("Stip_22_set");

    elt.add_element(Stip_22);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_5{"SetInstr"};
    multiset<string> SetInstr_5_set;
    SetInstr_5.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_5_set.insert("0");
    SetInstr_5.add_attribute("StandInstDbTyp", "0"); // 1
    SetInstr_5_set.insert("0");
    SetInstr_5.add_attribute("StandInstDbName", "StandInstDbName_t_1878392931"); // 1
    SetInstr_5_set.insert("StandInstDbName_t_1878392931");
    SetInstr_5.add_attribute("StandInstDbID", "StandInstDbID_t_2116871903"); // 1
    SetInstr_5_set.insert("StandInstDbID_t_2116871903");
    all_values.push_back(SetInstr_5_set);
    all_compo_names.insert("SetInstr_5_set");

    {
      xml_element DlvInst_5{"DlvInst"};
      multiset<string> DlvInst_5_set;
      DlvInst_5.add_attribute("InstSrc", "1"); // 2
      DlvInst_5_set.insert("1");
      DlvInst_5.add_attribute("InstTyp", "S"); // 2
      DlvInst_5_set.insert("S");
      all_values.push_back(DlvInst_5_set);
      all_compo_names.insert("DlvInst_5_set");

      {
        xml_element Pty_67{"Pty"};
        multiset<string> Pty_67_set;
        Pty_67.add_attribute("ID", "SettlPartyID_t_2009380186"); // 3
        Pty_67_set.insert("SettlPartyID_t_2009380186");
        Pty_67.add_attribute("Src", "E"); // 3
        Pty_67_set.insert("E");
        Pty_67.add_attribute("R", "43"); // 3
        Pty_67_set.insert("43");
        all_values.push_back(Pty_67_set);
        all_compo_names.insert("Pty_67_set");

        {
          xml_element Sub_67{"Sub"};
          multiset<string> Sub_67_set;
          Sub_67.add_attribute("ID", "SettlPartySubID_t_1186698239"); // 4
          Sub_67_set.insert("SettlPartySubID_t_1186698239");
          Sub_67.add_attribute("Typ", "14"); // 4
          Sub_67_set.insert("14");
          all_values.push_back(Sub_67_set);
          all_compo_names.insert("Sub_67_set");

          Pty_67.add_element(Sub_67);
        }
        DlvInst_5.add_element(Pty_67);
      }
      SetInstr_5.add_element(DlvInst_5);
    }
    elt.add_element(SetInstr_5);
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
