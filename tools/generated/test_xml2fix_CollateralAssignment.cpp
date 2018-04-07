#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralAssignment.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralAssignment_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollAsgn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralAssignment_message_t_0;
  elt.add_attribute("ID", "CollAsgnID_t_1599310570"); // 0
  CollateralAssignment_message_t_0.insert("CollAsgnID_t_1599310570");
  elt.add_attribute("ReqID", "CollReqID_t_1145116256"); // 0
  CollateralAssignment_message_t_0.insert("CollReqID_t_1145116256");
  elt.add_attribute("AsgnRsn", "0"); // 0
  CollateralAssignment_message_t_0.insert("0");
  elt.add_attribute("TransTyp", "0"); // 0
  CollateralAssignment_message_t_0.insert("0");
  elt.add_attribute("RefID", "CollAsgnRefID_t_1463861201"); // 0
  CollateralAssignment_message_t_0.insert("CollAsgnRefID_t_1463861201");
  elt.add_attribute("TxnTm", "TransactTime_t_581709250"); // 0
  CollateralAssignment_message_t_0.insert("TransactTime_t_581709250");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1378133632"); // 0
  CollateralAssignment_message_t_0.insert("ExpireTime_t_1378133632");
  elt.add_attribute("Acct", "Account_t_1352576900"); // 0
  CollateralAssignment_message_t_0.insert("Account_t_1352576900");
  elt.add_attribute("AcctTyp", "7"); // 0
  CollateralAssignment_message_t_0.insert("7");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1899602147"); // 0
  CollateralAssignment_message_t_0.insert("ClOrdID_t_1899602147");
  elt.add_attribute("OrdID", "OrderID_t_72980765"); // 0
  CollateralAssignment_message_t_0.insert("OrderID_t_72980765");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1731136611"); // 0
  CollateralAssignment_message_t_0.insert("SecondaryOrderID_t_1731136611");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_20533251"); // 0
  CollateralAssignment_message_t_0.insert("SecondaryClOrdID_t_20533251");
  elt.add_attribute("SettlDt", "SettlDate_t_1666751696"); // 0
  CollateralAssignment_message_t_0.insert("SettlDate_t_1666751696");
  elt.add_attribute("Qty", "7263506.640000"); // 0
  CollateralAssignment_message_t_0.insert("7263506.640000");
  elt.add_attribute("QtyTyp", "1"); // 0
  CollateralAssignment_message_t_0.insert("1");
  elt.add_attribute("Ccy", "CHF"); // 0
  CollateralAssignment_message_t_0.insert("CHF");
  elt.add_attribute("MgnExcess", "MarginExcess_t_2046151818"); // 0
  CollateralAssignment_message_t_0.insert("MarginExcess_t_2046151818");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_84512543"); // 0
  CollateralAssignment_message_t_0.insert("TotalNetValue_t_84512543");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_2071021318"); // 0
  CollateralAssignment_message_t_0.insert("CashOutstanding_t_2071021318");
  elt.add_attribute("Side", "8"); // 0
  CollateralAssignment_message_t_0.insert("8");
  elt.add_attribute("Px", "11718893.310000"); // 0
  CollateralAssignment_message_t_0.insert("11718893.310000");
  elt.add_attribute("PxTyp", "11"); // 0
  CollateralAssignment_message_t_0.insert("11");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_2145751248"); // 0
  CollateralAssignment_message_t_0.insert("AccruedInterestAmt_t_2145751248");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1044534292"); // 0
  CollateralAssignment_message_t_0.insert("EndAccruedInterestAmt_t_1044534292");
  elt.add_attribute("StartCsh", "StartCash_t_1614405893"); // 0
  CollateralAssignment_message_t_0.insert("StartCash_t_1614405893");
  elt.add_attribute("EndCsh", "EndCash_t_433227580"); // 0
  CollateralAssignment_message_t_0.insert("EndCash_t_433227580");
  elt.add_attribute("SesID", "5"); // 0
  CollateralAssignment_message_t_0.insert("5");
  elt.add_attribute("SesSub", "4"); // 0
  CollateralAssignment_message_t_0.insert("4");
  elt.add_attribute("SetSesID", "EOD"); // 0
  CollateralAssignment_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_428911867"); // 0
  CollateralAssignment_message_t_0.insert("SettlSessSubID_t_428911867");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_547494435"); // 0
  CollateralAssignment_message_t_0.insert("ClearingBusinessDate_t_547494435");
  elt.add_attribute("Txt", "Text_t_1714914899"); // 0
  CollateralAssignment_message_t_0.insert("Text_t_1714914899");
  elt.add_attribute("EncTxtLen", "1624803637"); // 0
  CollateralAssignment_message_t_0.insert("1624803637");
  elt.add_attribute("EncTxt", "EncodedText_t_2011355637"); // 0
  CollateralAssignment_message_t_0.insert("EncodedText_t_2011355637");
  all_values.push_back(CollateralAssignment_message_t_0);
  all_compo_names.insert("CollateralAssignment_message_t");

  { // Hdr
    xml_element Hdr_14{"Hdr"};
    multiset<string> Hdr_14_set;
    Hdr_14.add_attribute("SeqNum", "149140501"); // 1
    Hdr_14_set.insert("149140501");
    Hdr_14.add_attribute("SID", "SenderCompID_t_855453621"); // 1
    Hdr_14_set.insert("SenderCompID_t_855453621");
    Hdr_14.add_attribute("TID", "TargetCompID_t_1216448889"); // 1
    Hdr_14_set.insert("TargetCompID_t_1216448889");
    Hdr_14.add_attribute("OBID", "OnBehalfOfCompID_t_201870113"); // 1
    Hdr_14_set.insert("OnBehalfOfCompID_t_201870113");
    Hdr_14.add_attribute("D2ID", "DeliverToCompID_t_607572120"); // 1
    Hdr_14_set.insert("DeliverToCompID_t_607572120");
    Hdr_14.add_attribute("SSub", "SenderSubID_t_1289429655"); // 1
    Hdr_14_set.insert("SenderSubID_t_1289429655");
    Hdr_14.add_attribute("SLoc", "SenderLocationID_t_1933006725"); // 1
    Hdr_14_set.insert("SenderLocationID_t_1933006725");
    Hdr_14.add_attribute("TSub", "TargetSubID_t_628105371"); // 1
    Hdr_14_set.insert("TargetSubID_t_628105371");
    Hdr_14.add_attribute("TLoc", "TargetLocationID_t_808697703"); // 1
    Hdr_14_set.insert("TargetLocationID_t_808697703");
    Hdr_14.add_attribute("OBSub", "OnBehalfOfSubID_t_511873741"); // 1
    Hdr_14_set.insert("OnBehalfOfSubID_t_511873741");
    Hdr_14.add_attribute("OBLoc", "OnBehalfOfLocationID_t_218363748"); // 1
    Hdr_14_set.insert("OnBehalfOfLocationID_t_218363748");
    Hdr_14.add_attribute("D2Sub", "DeliverToSubID_t_191685080"); // 1
    Hdr_14_set.insert("DeliverToSubID_t_191685080");
    Hdr_14.add_attribute("D2Loc", "DeliverToLocationID_t_2021251228"); // 1
    Hdr_14_set.insert("DeliverToLocationID_t_2021251228");
    Hdr_14.add_attribute("PosDup", "N"); // 1
    Hdr_14_set.insert("N");
    Hdr_14.add_attribute("PosRsnd", "N"); // 1
    Hdr_14_set.insert("N");
    Hdr_14.add_attribute("Snt", "SendingTime_t_1944788898"); // 1
    Hdr_14_set.insert("SendingTime_t_1944788898");
    Hdr_14.add_attribute("OrigSnt", "OrigSendingTime_t_1246371670"); // 1
    Hdr_14_set.insert("OrigSendingTime_t_1246371670");
    Hdr_14.add_attribute("MsgEncd", "MessageEncoding_t_1448086955"); // 1
    Hdr_14_set.insert("MessageEncoding_t_1448086955");
    all_values.push_back(Hdr_14_set);
    all_compo_names.insert("Hdr_14_set");

    {
      xml_element Hop_14{"Hop"};
      multiset<string> Hop_14_set;
      Hop_14.add_attribute("ID", "HopCompID_t_1986900944"); // 2
      Hop_14_set.insert("HopCompID_t_1986900944");
      Hop_14.add_attribute("Ref", "1244639270"); // 2
      Hop_14_set.insert("1244639270");
      Hop_14.add_attribute("Snt", "HopSendingTime_t_345137599"); // 2
      Hop_14_set.insert("HopSendingTime_t_345137599");
      all_values.push_back(Hop_14_set);
      all_compo_names.insert("Hop_14_set");

      Hdr_14.add_element(Hop_14);
    }
    elt.add_element(Hdr_14);
  } // end Hdr
  { // Pty
    xml_element Pty_70{"Pty"};
    multiset<string> Pty_70_set;
    Pty_70.add_attribute("ID", "PartyID_t_1677866851"); // 1
    Pty_70_set.insert("PartyID_t_1677866851");
    Pty_70.add_attribute("Src", "1"); // 1
    Pty_70_set.insert("1");
    Pty_70.add_attribute("R", "9"); // 1
    Pty_70_set.insert("9");
    all_values.push_back(Pty_70_set);
    all_compo_names.insert("Pty_70_set");

    {
      xml_element Sub_70{"Sub"};
      multiset<string> Sub_70_set;
      Sub_70.add_attribute("ID", "PartySubID_t_1257505478"); // 2
      Sub_70_set.insert("PartySubID_t_1257505478");
      Sub_70.add_attribute("Typ", "13"); // 2
      Sub_70_set.insert("13");
      all_values.push_back(Sub_70_set);
      all_compo_names.insert("Sub_70_set");

      Pty_70.add_element(Sub_70);
    }
    elt.add_element(Pty_70);
  } // end Pty
  { // Pty
    xml_element Pty_71{"Pty"};
    multiset<string> Pty_71_set;
    Pty_71.add_attribute("ID", "PartyID_t_1403695804"); // 1
    Pty_71_set.insert("PartyID_t_1403695804");
    Pty_71.add_attribute("Src", "7"); // 1
    Pty_71_set.insert("7");
    Pty_71.add_attribute("R", "20"); // 1
    Pty_71_set.insert("20");
    all_values.push_back(Pty_71_set);
    all_compo_names.insert("Pty_71_set");

    {
      xml_element Sub_71{"Sub"};
      multiset<string> Sub_71_set;
      Sub_71.add_attribute("ID", "PartySubID_t_1267567793"); // 2
      Sub_71_set.insert("PartySubID_t_1267567793");
      Sub_71.add_attribute("Typ", "29"); // 2
      Sub_71_set.insert("29");
      all_values.push_back(Sub_71_set);
      all_compo_names.insert("Sub_71_set");

      Pty_71.add_element(Sub_71);
    }
    elt.add_element(Pty_71);
  } // end Pty
  { // Pty
    xml_element Pty_72{"Pty"};
    multiset<string> Pty_72_set;
    Pty_72.add_attribute("ID", "PartyID_t_2083908021"); // 1
    Pty_72_set.insert("PartyID_t_2083908021");
    Pty_72.add_attribute("Src", "D"); // 1
    Pty_72_set.insert("D");
    Pty_72.add_attribute("R", "21"); // 1
    Pty_72_set.insert("21");
    all_values.push_back(Pty_72_set);
    all_compo_names.insert("Pty_72_set");

    {
      xml_element Sub_72{"Sub"};
      multiset<string> Sub_72_set;
      Sub_72.add_attribute("ID", "PartySubID_t_543996494"); // 2
      Sub_72_set.insert("PartySubID_t_543996494");
      Sub_72.add_attribute("Typ", "5"); // 2
      Sub_72_set.insert("5");
      all_values.push_back(Sub_72_set);
      all_compo_names.insert("Sub_72_set");

      Pty_72.add_element(Sub_72);
    }
    elt.add_element(Pty_72);
  } // end Pty
  { // CollExc
    xml_element CollExc_0{"CollExc"};
    multiset<string> CollExc_0_set;
    CollExc_0.add_attribute("ExecID", "ExecID_t_1172101865"); // 1
    CollExc_0_set.insert("ExecID_t_1172101865");
    all_values.push_back(CollExc_0_set);
    all_compo_names.insert("CollExc_0_set");

    elt.add_element(CollExc_0);
  } // end CollExc
  { // CollExc
    xml_element CollExc_1{"CollExc"};
    multiset<string> CollExc_1_set;
    CollExc_1.add_attribute("ExecID", "ExecID_t_287176745"); // 1
    CollExc_1_set.insert("ExecID_t_287176745");
    all_values.push_back(CollExc_1_set);
    all_compo_names.insert("CollExc_1_set");

    elt.add_element(CollExc_1);
  } // end CollExc
  { // CollExc
    xml_element CollExc_2{"CollExc"};
    multiset<string> CollExc_2_set;
    CollExc_2.add_attribute("ExecID", "ExecID_t_1473344163"); // 1
    CollExc_2_set.insert("ExecID_t_1473344163");
    all_values.push_back(CollExc_2_set);
    all_compo_names.insert("CollExc_2_set");

    elt.add_element(CollExc_2);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_0{"TrdColl"};
    multiset<string> TrdColl_0_set;
    TrdColl_0.add_attribute("RptID", "TradeReportID_t_478861825"); // 1
    TrdColl_0_set.insert("TradeReportID_t_478861825");
    TrdColl_0.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1347111743"); // 1
    TrdColl_0_set.insert("SecondaryTradeReportID_t_1347111743");
    all_values.push_back(TrdColl_0_set);
    all_compo_names.insert("TrdColl_0_set");

    elt.add_element(TrdColl_0);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_1{"TrdColl"};
    multiset<string> TrdColl_1_set;
    TrdColl_1.add_attribute("RptID", "TradeReportID_t_1507497532"); // 1
    TrdColl_1_set.insert("TradeReportID_t_1507497532");
    TrdColl_1.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_755059449"); // 1
    TrdColl_1_set.insert("SecondaryTradeReportID_t_755059449");
    all_values.push_back(TrdColl_1_set);
    all_compo_names.insert("TrdColl_1_set");

    elt.add_element(TrdColl_1);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_2{"TrdColl"};
    multiset<string> TrdColl_2_set;
    TrdColl_2.add_attribute("RptID", "TradeReportID_t_1144416994"); // 1
    TrdColl_2_set.insert("TradeReportID_t_1144416994");
    TrdColl_2.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_606385554"); // 1
    TrdColl_2_set.insert("SecondaryTradeReportID_t_606385554");
    all_values.push_back(TrdColl_2_set);
    all_compo_names.insert("TrdColl_2_set");

    elt.add_element(TrdColl_2);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_8{"Instrmt"};
    multiset<string> Instrmt_8_set;
    Instrmt_8.add_attribute("Sym", "Symbol_t_55662757"); // 1
    Instrmt_8_set.insert("Symbol_t_55662757");
    Instrmt_8.add_attribute("Sfx", "CD"); // 1
    Instrmt_8_set.insert("CD");
    Instrmt_8.add_attribute("ID", "SecurityID_t_1851024824"); // 1
    Instrmt_8_set.insert("SecurityID_t_1851024824");
    Instrmt_8.add_attribute("Src", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("Prod", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("ProdCmplx", "ProductComplex_t_1381408027"); // 1
    Instrmt_8_set.insert("ProductComplex_t_1381408027");
    Instrmt_8.add_attribute("SecGrp", "SecurityGroup_t_1723022900"); // 1
    Instrmt_8_set.insert("SecurityGroup_t_1723022900");
    Instrmt_8.add_attribute("CFI", "CFICode_t_1146375200"); // 1
    Instrmt_8_set.insert("CFICode_t_1146375200");
    Instrmt_8.add_attribute("SecTyp", "OOP"); // 1
    Instrmt_8_set.insert("OOP");
    Instrmt_8.add_attribute("SubTyp", "SecuritySubType_t_1326673663"); // 1
    Instrmt_8_set.insert("SecuritySubType_t_1326673663");
    Instrmt_8.add_attribute("MMY", "402587356"); // 1
    Instrmt_8_set.insert("402587356");
    Instrmt_8.add_attribute("MatDt", "MaturityDate_t_1316366588"); // 1
    Instrmt_8_set.insert("MaturityDate_t_1316366588");
    Instrmt_8.add_attribute("MatTm", "407644415"); // 1
    Instrmt_8_set.insert("407644415");
    Instrmt_8.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1670155149"); // 1
    Instrmt_8_set.insert("SettleOnOpenFlag_t_1670155149");
    Instrmt_8.add_attribute("AsgnMeth", "142960171"); // 1
    Instrmt_8_set.insert("142960171");
    Instrmt_8.add_attribute("Status", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("CpnPmt", "CouponPaymentDate_t_2006688184"); // 1
    Instrmt_8_set.insert("CouponPaymentDate_t_2006688184");
    Instrmt_8.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_8_set.insert("FR");
    Instrmt_8.add_attribute("Snrty", "SD"); // 1
    Instrmt_8_set.insert("SD");
    Instrmt_8.add_attribute("NotlPctOut", "14851672.250000"); // 1
    Instrmt_8_set.insert("14851672.250000");
    Instrmt_8.add_attribute("OrigNotlPctOut", "1328942.900000"); // 1
    Instrmt_8_set.insert("1328942.900000");
    Instrmt_8.add_attribute("AttchPnt", "20601671.480000"); // 1
    Instrmt_8_set.insert("20601671.480000");
    Instrmt_8.add_attribute("DetchPnt", "17723439.700000"); // 1
    Instrmt_8_set.insert("17723439.700000");
    Instrmt_8.add_attribute("Issued", "IssueDate_t_1606238453"); // 1
    Instrmt_8_set.insert("IssueDate_t_1606238453");
    Instrmt_8.add_attribute("RepoCollSecTyp", "1303149114"); // 1
    Instrmt_8_set.insert("1303149114");
    Instrmt_8.add_attribute("RepoTrm", "103722148"); // 1
    Instrmt_8_set.insert("103722148");
    Instrmt_8.add_attribute("RepoRt", "8058665.490000"); // 1
    Instrmt_8_set.insert("8058665.490000");
    Instrmt_8.add_attribute("Fctr", "6631629.980000"); // 1
    Instrmt_8_set.insert("6631629.980000");
    Instrmt_8.add_attribute("CrdRtg", "CreditRating_t_858781597"); // 1
    Instrmt_8_set.insert("CreditRating_t_858781597");
    Instrmt_8.add_attribute("Rgstry", "InstrRegistry_t_1950283543"); // 1
    Instrmt_8_set.insert("InstrRegistry_t_1950283543");
    Instrmt_8.add_attribute("IssuCtry", "1269548552"); // 1
    Instrmt_8_set.insert("1269548552");
    Instrmt_8.add_attribute("StPrv", "StateOrProvinceOfIssue_t_914444354"); // 1
    Instrmt_8_set.insert("StateOrProvinceOfIssue_t_914444354");
    Instrmt_8.add_attribute("Lcl", "LocaleOfIssue_t_786634185"); // 1
    Instrmt_8_set.insert("LocaleOfIssue_t_786634185");
    Instrmt_8.add_attribute("Redeem", "RedemptionDate_t_973089728"); // 1
    Instrmt_8_set.insert("RedemptionDate_t_973089728");
    Instrmt_8.add_attribute("StrkPx", "13152447.110000"); // 1
    Instrmt_8_set.insert("13152447.110000");
    Instrmt_8.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_8_set.insert("GBP");
    Instrmt_8.add_attribute("StrkMult", "8907839.630000"); // 1
    Instrmt_8_set.insert("8907839.630000");
    Instrmt_8.add_attribute("StrkValu", "756995.700000"); // 1
    Instrmt_8_set.insert("756995.700000");
    Instrmt_8.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_8_set.insert("3");
    Instrmt_8.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_8_set.insert("5");
    Instrmt_8.add_attribute("StrkPxBndryPrcsn", "4782869.260000"); // 1
    Instrmt_8_set.insert("4782869.260000");
    Instrmt_8.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_8_set.insert("3");
    Instrmt_8.add_attribute("OptAt", "477618394"); // 1
    Instrmt_8_set.insert("477618394");
    Instrmt_8.add_attribute("Mult", "9584.280000"); // 1
    Instrmt_8_set.insert("9584.280000");
    Instrmt_8.add_attribute("MultTyp", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_8_set.insert("3");
    Instrmt_8.add_attribute("MinPxIncr", "20076466.120000"); // 1
    Instrmt_8_set.insert("20076466.120000");
    Instrmt_8.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1329194594"); // 1
    Instrmt_8_set.insert("MinPriceIncrementAmount_t_1329194594");
    Instrmt_8.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_8_set.insert("MMbbl");
    Instrmt_8.add_attribute("UOMQty", "13453301.890000"); // 1
    Instrmt_8_set.insert("13453301.890000");
    Instrmt_8.add_attribute("PxUOM", "USD"); // 1
    Instrmt_8_set.insert("USD");
    Instrmt_8.add_attribute("PxUOMQty", "16224359.670000"); // 1
    Instrmt_8_set.insert("16224359.670000");
    Instrmt_8.add_attribute("SettlMeth", "C"); // 1
    Instrmt_8_set.insert("C");
    Instrmt_8.add_attribute("ExerStyle", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_8_set.insert("2");
    Instrmt_8.add_attribute("OptPayAmt", "OptPayoutAmount_t_1073912660"); // 1
    Instrmt_8_set.insert("OptPayoutAmount_t_1073912660");
    Instrmt_8.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_8_set.insert("PCTPAR");
    Instrmt_8.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_8_set.insert("FUT");
    Instrmt_8.add_attribute("ListMeth", "1"); // 1
    Instrmt_8_set.insert("1");
    Instrmt_8.add_attribute("CapPx", "15295101.340000"); // 1
    Instrmt_8_set.insert("15295101.340000");
    Instrmt_8.add_attribute("FlrPx", "5633293.350000"); // 1
    Instrmt_8_set.insert("5633293.350000");
    Instrmt_8.add_attribute("PutCall", "0"); // 1
    Instrmt_8_set.insert("0");
    Instrmt_8.add_attribute("FlexInd", "false"); // 1
    Instrmt_8_set.insert("false");
    Instrmt_8.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_8_set.insert("false");
    Instrmt_8.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_8_set.insert("Mo");
    Instrmt_8.add_attribute("CpnRt", "12454686.890000"); // 1
    Instrmt_8_set.insert("12454686.890000");
    Instrmt_8.add_attribute("Exch", "SecurityExchange_t_1743433171"); // 1
    Instrmt_8_set.insert("SecurityExchange_t_1743433171");
    Instrmt_8.add_attribute("PosLmt", "758199990"); // 1
    Instrmt_8_set.insert("758199990");
    Instrmt_8.add_attribute("NTPosLmt", "1321168259"); // 1
    Instrmt_8_set.insert("1321168259");
    Instrmt_8.add_attribute("Issr", "Issuer_t_294393489"); // 1
    Instrmt_8_set.insert("Issuer_t_294393489");
    Instrmt_8.add_attribute("EncIssrLen", "828173969"); // 1
    Instrmt_8_set.insert("828173969");
    Instrmt_8.add_attribute("EncIssr", "EncodedIssuer_t_1799455185"); // 1
    Instrmt_8_set.insert("EncodedIssuer_t_1799455185");
    Instrmt_8.add_attribute("Desc", "SecurityDesc_t_161720395"); // 1
    Instrmt_8_set.insert("SecurityDesc_t_161720395");
    Instrmt_8.add_attribute("EncSecDescLen", "1305792364"); // 1
    Instrmt_8_set.insert("1305792364");
    Instrmt_8.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1800413613"); // 1
    Instrmt_8_set.insert("EncodedSecurityDesc_t_1800413613");
    Instrmt_8.add_attribute("Pool", "Pool_t_172007473"); // 1
    Instrmt_8_set.insert("Pool_t_172007473");
    Instrmt_8.add_attribute("CSetMo", "2127479547"); // 1
    Instrmt_8_set.insert("2127479547");
    Instrmt_8.add_attribute("CPPgm", "99"); // 1
    Instrmt_8_set.insert("99");
    Instrmt_8.add_attribute("CPRegT", "CPRegType_t_1501202067"); // 1
    Instrmt_8_set.insert("CPRegType_t_1501202067");
    Instrmt_8.add_attribute("Dated", "DatedDate_t_1689748366"); // 1
    Instrmt_8_set.insert("DatedDate_t_1689748366");
    Instrmt_8.add_attribute("IntAcrl", "InterestAccrualDate_t_858423119"); // 1
    Instrmt_8_set.insert("InterestAccrualDate_t_858423119");
    all_values.push_back(Instrmt_8_set);
    all_compo_names.insert("Instrmt_8_set");

    {
      xml_element AID_8{"AID"};
      multiset<string> AID_8_set;
      AID_8.add_attribute("AltID", "SecurityAltID_t_815807303"); // 2
      AID_8_set.insert("SecurityAltID_t_815807303");
      AID_8.add_attribute("AltIDSrc", "6"); // 2
      AID_8_set.insert("6");
      all_values.push_back(AID_8_set);
      all_compo_names.insert("AID_8_set");

      Instrmt_8.add_element(AID_8);
    }
    {
      xml_element SecXML_8{"SecXML"};
      multiset<string> SecXML_8_set;
      SecXML_8.add_attribute("Schema", "SecurityXMLSchema_t_1828613631"); // 2
      SecXML_8_set.insert("SecurityXMLSchema_t_1828613631");
      all_values.push_back(SecXML_8_set);
      all_compo_names.insert("SecXML_8_set");

      Instrmt_8.add_element(SecXML_8);
    }
    {
      xml_element Evnt_8{"Evnt"};
      multiset<string> Evnt_8_set;
      Evnt_8.add_attribute("EventTyp", "13"); // 2
      Evnt_8_set.insert("13");
      Evnt_8.add_attribute("Dt", "EventDate_t_1942802118"); // 2
      Evnt_8_set.insert("EventDate_t_1942802118");
      Evnt_8.add_attribute("Tm", "EventTime_t_755042643"); // 2
      Evnt_8_set.insert("EventTime_t_755042643");
      Evnt_8.add_attribute("Px", "13158775.840000"); // 2
      Evnt_8_set.insert("13158775.840000");
      Evnt_8.add_attribute("Txt", "EventText_t_1236582901"); // 2
      Evnt_8_set.insert("EventText_t_1236582901");
      all_values.push_back(Evnt_8_set);
      all_compo_names.insert("Evnt_8_set");

      Instrmt_8.add_element(Evnt_8);
    }
    {
      xml_element Pty_73{"Pty"};
      multiset<string> Pty_73_set;
      Pty_73.add_attribute("ID", "InstrumentPartyID_t_540253252"); // 2
      Pty_73_set.insert("InstrumentPartyID_t_540253252");
      Pty_73.add_attribute("Src", "7"); // 2
      Pty_73_set.insert("7");
      Pty_73.add_attribute("R", "55"); // 2
      Pty_73_set.insert("55");
      all_values.push_back(Pty_73_set);
      all_compo_names.insert("Pty_73_set");

      {
        xml_element Sub_73{"Sub"};
        multiset<string> Sub_73_set;
        Sub_73.add_attribute("ID", "InstrumentPartySubID_t_1239908216"); // 3
        Sub_73_set.insert("InstrumentPartySubID_t_1239908216");
        Sub_73.add_attribute("Typ", "5"); // 3
        Sub_73_set.insert("5");
        all_values.push_back(Sub_73_set);
        all_compo_names.insert("Sub_73_set");

        Pty_73.add_element(Sub_73);
      }
      Instrmt_8.add_element(Pty_73);
    }
    {
      xml_element CmplxEvnt_8{"CmplxEvnt"};
      multiset<string> CmplxEvnt_8_set;
      CmplxEvnt_8.add_attribute("Typ", "5"); // 2
      CmplxEvnt_8_set.insert("5");
      CmplxEvnt_8.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1107324243"); // 2
      CmplxEvnt_8_set.insert("ComplexOptPayoutAmount_t_1107324243");
      CmplxEvnt_8.add_attribute("Px", "21120334.310000"); // 2
      CmplxEvnt_8_set.insert("21120334.310000");
      CmplxEvnt_8.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_8_set.insert("1");
      CmplxEvnt_8.add_attribute("PxBndryPrcsn", "18655242.340000"); // 2
      CmplxEvnt_8_set.insert("18655242.340000");
      CmplxEvnt_8.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_8_set.insert("3");
      CmplxEvnt_8.add_attribute("Cond", "1"); // 2
      CmplxEvnt_8_set.insert("1");
      all_values.push_back(CmplxEvnt_8_set);
      all_compo_names.insert("CmplxEvnt_8_set");

      {
        xml_element EvntDts_8{"EvntDts"};
        multiset<string> EvntDts_8_set;
        EvntDts_8.add_attribute("StartDt", "ComplexEventStartDate_t_546214555"); // 3
        EvntDts_8_set.insert("ComplexEventStartDate_t_546214555");
        EvntDts_8.add_attribute("EndDt", "ComplexEventEndDate_t_937689579"); // 3
        EvntDts_8_set.insert("ComplexEventEndDate_t_937689579");
        all_values.push_back(EvntDts_8_set);
        all_compo_names.insert("EvntDts_8_set");

        {
          xml_element EvntTms_8{"EvntTms"};
          multiset<string> EvntTms_8_set;
          EvntTms_8.add_attribute("StartTm", "1240911060"); // 4
          EvntTms_8_set.insert("1240911060");
          EvntTms_8.add_attribute("EndTm", "1852006919"); // 4
          EvntTms_8_set.insert("1852006919");
          all_values.push_back(EvntTms_8_set);
          all_compo_names.insert("EvntTms_8_set");

          EvntDts_8.add_element(EvntTms_8);
        }
        CmplxEvnt_8.add_element(EvntDts_8);
      }
      Instrmt_8.add_element(CmplxEvnt_8);
    }
    elt.add_element(Instrmt_8);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_3{"FinDetls"};
    multiset<string> FinDetls_3_set;
    FinDetls_3.add_attribute("AgmtDesc", "AgreementDesc_t_590619545"); // 1
    FinDetls_3_set.insert("AgreementDesc_t_590619545");
    FinDetls_3.add_attribute("AgmtID", "AgreementID_t_1412918533"); // 1
    FinDetls_3_set.insert("AgreementID_t_1412918533");
    FinDetls_3.add_attribute("AgmtDt", "AgreementDate_t_1832002819"); // 1
    FinDetls_3_set.insert("AgreementDate_t_1832002819");
    FinDetls_3.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_3_set.insert("GBP");
    FinDetls_3.add_attribute("TrmTyp", "2"); // 1
    FinDetls_3_set.insert("2");
    FinDetls_3.add_attribute("StartDt", "StartDate_t_962135593"); // 1
    FinDetls_3_set.insert("StartDate_t_962135593");
    FinDetls_3.add_attribute("EndDt", "EndDate_t_1582444255"); // 1
    FinDetls_3_set.insert("EndDate_t_1582444255");
    FinDetls_3.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_3_set.insert("2");
    FinDetls_3.add_attribute("MgnRatio", "6432655.760000"); // 1
    FinDetls_3_set.insert("6432655.760000");
    all_values.push_back(FinDetls_3_set);
    all_compo_names.insert("FinDetls_3_set");

    elt.add_element(FinDetls_3);
  } // end FinDetls
  { // Leg
    xml_element Leg_11{"Leg"};
    multiset<string> Leg_11_set;
    Leg_11.add_attribute("Sym", "LegSymbol_t_186803044"); // 1
    Leg_11_set.insert("LegSymbol_t_186803044");
    Leg_11.add_attribute("Sfx", "WI"); // 1
    Leg_11_set.insert("WI");
    Leg_11.add_attribute("ID", "LegSecurityID_t_340005537"); // 1
    Leg_11_set.insert("LegSecurityID_t_340005537");
    Leg_11.add_attribute("Src", "4"); // 1
    Leg_11_set.insert("4");
    Leg_11.add_attribute("Prod", "12"); // 1
    Leg_11_set.insert("12");
    Leg_11.add_attribute("CFI", "LegCFICode_t_1037909608"); // 1
    Leg_11_set.insert("LegCFICode_t_1037909608");
    Leg_11.add_attribute("SecTyp", "LQN"); // 1
    Leg_11_set.insert("LQN");
    Leg_11.add_attribute("SecSubTyp", "LegSecuritySubType_t_1030986040"); // 1
    Leg_11_set.insert("LegSecuritySubType_t_1030986040");
    Leg_11.add_attribute("MMY", "1904474350"); // 1
    Leg_11_set.insert("1904474350");
    Leg_11.add_attribute("Mat", "LegMaturityDate_t_117178536"); // 1
    Leg_11_set.insert("LegMaturityDate_t_117178536");
    Leg_11.add_attribute("MatTm", "2138310284"); // 1
    Leg_11_set.insert("2138310284");
    Leg_11.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1869024133"); // 1
    Leg_11_set.insert("LegCouponPaymentDate_t_1869024133");
    Leg_11.add_attribute("Issued", "LegIssueDate_t_901975711"); // 1
    Leg_11_set.insert("LegIssueDate_t_901975711");
    Leg_11.add_attribute("RepoCollSecTyp", "1856350870"); // 1
    Leg_11_set.insert("1856350870");
    Leg_11.add_attribute("RepoTrm", "1007258527"); // 1
    Leg_11_set.insert("1007258527");
    Leg_11.add_attribute("RepoRt", "19811663.760000"); // 1
    Leg_11_set.insert("19811663.760000");
    Leg_11.add_attribute("Fctr", "2550817.770000"); // 1
    Leg_11_set.insert("2550817.770000");
    Leg_11.add_attribute("CrdRtg", "LegCreditRating_t_1944948106"); // 1
    Leg_11_set.insert("LegCreditRating_t_1944948106");
    Leg_11.add_attribute("Rgstry", "LegInstrRegistry_t_1074593788"); // 1
    Leg_11_set.insert("LegInstrRegistry_t_1074593788");
    Leg_11.add_attribute("Ctry", "2107088697"); // 1
    Leg_11_set.insert("2107088697");
    Leg_11.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_388084003"); // 1
    Leg_11_set.insert("LegStateOrProvinceOfIssue_t_388084003");
    Leg_11.add_attribute("Lcl", "LegLocaleOfIssue_t_340028673"); // 1
    Leg_11_set.insert("LegLocaleOfIssue_t_340028673");
    Leg_11.add_attribute("Redeem", "LegRedemptionDate_t_1791607868"); // 1
    Leg_11_set.insert("LegRedemptionDate_t_1791607868");
    Leg_11.add_attribute("Strk", "4917964.780000"); // 1
    Leg_11_set.insert("4917964.780000");
    Leg_11.add_attribute("StrkCcy", "CHF"); // 1
    Leg_11_set.insert("CHF");
    Leg_11.add_attribute("OptA", "1453932071"); // 1
    Leg_11_set.insert("1453932071");
    Leg_11.add_attribute("Cmult", "5416262.320000"); // 1
    Leg_11_set.insert("5416262.320000");
    Leg_11.add_attribute("MultTyp", "0"); // 1
    Leg_11_set.insert("0");
    Leg_11.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_11_set.insert("3");
    Leg_11.add_attribute("UOM", "oz_tr"); // 1
    Leg_11_set.insert("oz_tr");
    Leg_11.add_attribute("UOMQty", "15966793.750000"); // 1
    Leg_11_set.insert("15966793.750000");
    Leg_11.add_attribute("PxUOM", "Bu"); // 1
    Leg_11_set.insert("Bu");
    Leg_11.add_attribute("PxUOMQty", "20532433.710000"); // 1
    Leg_11_set.insert("20532433.710000");
    Leg_11.add_attribute("TmUnit", "Wk"); // 1
    Leg_11_set.insert("Wk");
    Leg_11.add_attribute("ExerStyle", "1"); // 1
    Leg_11_set.insert("1");
    Leg_11.add_attribute("CpnRt", "9436693.310000"); // 1
    Leg_11_set.insert("9436693.310000");
    Leg_11.add_attribute("Exch", "LegSecurityExchange_t_1948396205"); // 1
    Leg_11_set.insert("LegSecurityExchange_t_1948396205");
    Leg_11.add_attribute("Issr", "LegIssuer_t_22602436"); // 1
    Leg_11_set.insert("LegIssuer_t_22602436");
    Leg_11.add_attribute("EncLegIssrLen", "700660033"); // 1
    Leg_11_set.insert("700660033");
    Leg_11.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2065574741"); // 1
    Leg_11_set.insert("EncodedLegIssuer_t_2065574741");
    Leg_11.add_attribute("Desc", "LegSecurityDesc_t_13429072"); // 1
    Leg_11_set.insert("LegSecurityDesc_t_13429072");
    Leg_11.add_attribute("EncLegSecDescLen", "422200518"); // 1
    Leg_11_set.insert("422200518");
    Leg_11.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_820066805"); // 1
    Leg_11_set.insert("EncodedLegSecurityDesc_t_820066805");
    Leg_11.add_attribute("RatioQty", "18697799.420000"); // 1
    Leg_11_set.insert("18697799.420000");
    Leg_11.add_attribute("Side", "6"); // 1
    Leg_11_set.insert("6");
    Leg_11.add_attribute("Ccy", "CAN"); // 1
    Leg_11_set.insert("CAN");
    Leg_11.add_attribute("Pool", "LegPool_t_1226923503"); // 1
    Leg_11_set.insert("LegPool_t_1226923503");
    Leg_11.add_attribute("Dated", "LegDatedDate_t_1728343321"); // 1
    Leg_11_set.insert("LegDatedDate_t_1728343321");
    Leg_11.add_attribute("CSetMo", "2084466768"); // 1
    Leg_11_set.insert("2084466768");
    Leg_11.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1615007507"); // 1
    Leg_11_set.insert("LegInterestAccrualDate_t_1615007507");
    Leg_11.add_attribute("PutCall", "2068371994"); // 1
    Leg_11_set.insert("2068371994");
    Leg_11.add_attribute("LegOptionRatio", "17285909.880000"); // 1
    Leg_11_set.insert("17285909.880000");
    Leg_11.add_attribute("Px", "21068039.850000"); // 1
    Leg_11_set.insert("21068039.850000");
    all_values.push_back(Leg_11_set);
    all_compo_names.insert("Leg_11_set");

    {
      xml_element LegAID_11{"LegAID"};
      multiset<string> LegAID_11_set;
      LegAID_11.add_attribute("SecAltID", "LegSecurityAltID_t_1027553971"); // 2
      LegAID_11_set.insert("LegSecurityAltID_t_1027553971");
      LegAID_11.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_11_set.insert("M");
      all_values.push_back(LegAID_11_set);
      all_compo_names.insert("LegAID_11_set");

      Leg_11.add_element(LegAID_11);
    }
    elt.add_element(Leg_11);
  } // end Leg
  { // Leg
    xml_element Leg_12{"Leg"};
    multiset<string> Leg_12_set;
    Leg_12.add_attribute("Sym", "LegSymbol_t_1413252408"); // 1
    Leg_12_set.insert("LegSymbol_t_1413252408");
    Leg_12.add_attribute("Sfx", "WI"); // 1
    Leg_12_set.insert("WI");
    Leg_12.add_attribute("ID", "LegSecurityID_t_2009375428"); // 1
    Leg_12_set.insert("LegSecurityID_t_2009375428");
    Leg_12.add_attribute("Src", "D"); // 1
    Leg_12_set.insert("D");
    Leg_12.add_attribute("Prod", "13"); // 1
    Leg_12_set.insert("13");
    Leg_12.add_attribute("CFI", "LegCFICode_t_1458571155"); // 1
    Leg_12_set.insert("LegCFICode_t_1458571155");
    Leg_12.add_attribute("SecTyp", "SLQN"); // 1
    Leg_12_set.insert("SLQN");
    Leg_12.add_attribute("SecSubTyp", "LegSecuritySubType_t_1040694112"); // 1
    Leg_12_set.insert("LegSecuritySubType_t_1040694112");
    Leg_12.add_attribute("MMY", "183669179"); // 1
    Leg_12_set.insert("183669179");
    Leg_12.add_attribute("Mat", "LegMaturityDate_t_1702605023"); // 1
    Leg_12_set.insert("LegMaturityDate_t_1702605023");
    Leg_12.add_attribute("MatTm", "1984363443"); // 1
    Leg_12_set.insert("1984363443");
    Leg_12.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2132065384"); // 1
    Leg_12_set.insert("LegCouponPaymentDate_t_2132065384");
    Leg_12.add_attribute("Issued", "LegIssueDate_t_1725207459"); // 1
    Leg_12_set.insert("LegIssueDate_t_1725207459");
    Leg_12.add_attribute("RepoCollSecTyp", "537539828"); // 1
    Leg_12_set.insert("537539828");
    Leg_12.add_attribute("RepoTrm", "2050156478"); // 1
    Leg_12_set.insert("2050156478");
    Leg_12.add_attribute("RepoRt", "17386365.310000"); // 1
    Leg_12_set.insert("17386365.310000");
    Leg_12.add_attribute("Fctr", "9597403.460000"); // 1
    Leg_12_set.insert("9597403.460000");
    Leg_12.add_attribute("CrdRtg", "LegCreditRating_t_722739635"); // 1
    Leg_12_set.insert("LegCreditRating_t_722739635");
    Leg_12.add_attribute("Rgstry", "LegInstrRegistry_t_1460932825"); // 1
    Leg_12_set.insert("LegInstrRegistry_t_1460932825");
    Leg_12.add_attribute("Ctry", "241715743"); // 1
    Leg_12_set.insert("241715743");
    Leg_12.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1376489168"); // 1
    Leg_12_set.insert("LegStateOrProvinceOfIssue_t_1376489168");
    Leg_12.add_attribute("Lcl", "LegLocaleOfIssue_t_1438310897"); // 1
    Leg_12_set.insert("LegLocaleOfIssue_t_1438310897");
    Leg_12.add_attribute("Redeem", "LegRedemptionDate_t_1468639246"); // 1
    Leg_12_set.insert("LegRedemptionDate_t_1468639246");
    Leg_12.add_attribute("Strk", "9573488.410000"); // 1
    Leg_12_set.insert("9573488.410000");
    Leg_12.add_attribute("StrkCcy", "EUR"); // 1
    Leg_12_set.insert("EUR");
    Leg_12.add_attribute("OptA", "878237187"); // 1
    Leg_12_set.insert("878237187");
    Leg_12.add_attribute("Cmult", "9564013.580000"); // 1
    Leg_12_set.insert("9564013.580000");
    Leg_12.add_attribute("MultTyp", "2"); // 1
    Leg_12_set.insert("2");
    Leg_12.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_12_set.insert("3");
    Leg_12.add_attribute("UOM", "tn"); // 1
    Leg_12_set.insert("tn");
    Leg_12.add_attribute("UOMQty", "1612522.030000"); // 1
    Leg_12_set.insert("1612522.030000");
    Leg_12.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_12_set.insert("MMbbl");
    Leg_12.add_attribute("PxUOMQty", "14177922.360000"); // 1
    Leg_12_set.insert("14177922.360000");
    Leg_12.add_attribute("TmUnit", "Yr"); // 1
    Leg_12_set.insert("Yr");
    Leg_12.add_attribute("ExerStyle", "2"); // 1
    Leg_12_set.insert("2");
    Leg_12.add_attribute("CpnRt", "7288797.430000"); // 1
    Leg_12_set.insert("7288797.430000");
    Leg_12.add_attribute("Exch", "LegSecurityExchange_t_2087723591"); // 1
    Leg_12_set.insert("LegSecurityExchange_t_2087723591");
    Leg_12.add_attribute("Issr", "LegIssuer_t_1355632566"); // 1
    Leg_12_set.insert("LegIssuer_t_1355632566");
    Leg_12.add_attribute("EncLegIssrLen", "912548923"); // 1
    Leg_12_set.insert("912548923");
    Leg_12.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1642844967"); // 1
    Leg_12_set.insert("EncodedLegIssuer_t_1642844967");
    Leg_12.add_attribute("Desc", "LegSecurityDesc_t_1192512361"); // 1
    Leg_12_set.insert("LegSecurityDesc_t_1192512361");
    Leg_12.add_attribute("EncLegSecDescLen", "897130659"); // 1
    Leg_12_set.insert("897130659");
    Leg_12.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1220568778"); // 1
    Leg_12_set.insert("EncodedLegSecurityDesc_t_1220568778");
    Leg_12.add_attribute("RatioQty", "17300521.890000"); // 1
    Leg_12_set.insert("17300521.890000");
    Leg_12.add_attribute("Side", "2"); // 1
    Leg_12_set.insert("2");
    Leg_12.add_attribute("Ccy", "CHF"); // 1
    Leg_12_set.insert("CHF");
    Leg_12.add_attribute("Pool", "LegPool_t_1522543124"); // 1
    Leg_12_set.insert("LegPool_t_1522543124");
    Leg_12.add_attribute("Dated", "LegDatedDate_t_125170839"); // 1
    Leg_12_set.insert("LegDatedDate_t_125170839");
    Leg_12.add_attribute("CSetMo", "784024630"); // 1
    Leg_12_set.insert("784024630");
    Leg_12.add_attribute("IntAcrl", "LegInterestAccrualDate_t_751548644"); // 1
    Leg_12_set.insert("LegInterestAccrualDate_t_751548644");
    Leg_12.add_attribute("PutCall", "1563481736"); // 1
    Leg_12_set.insert("1563481736");
    Leg_12.add_attribute("LegOptionRatio", "1051802.290000"); // 1
    Leg_12_set.insert("1051802.290000");
    Leg_12.add_attribute("Px", "17088974.850000"); // 1
    Leg_12_set.insert("17088974.850000");
    all_values.push_back(Leg_12_set);
    all_compo_names.insert("Leg_12_set");

    {
      xml_element LegAID_12{"LegAID"};
      multiset<string> LegAID_12_set;
      LegAID_12.add_attribute("SecAltID", "LegSecurityAltID_t_791292106"); // 2
      LegAID_12_set.insert("LegSecurityAltID_t_791292106");
      LegAID_12.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_12_set.insert("K");
      all_values.push_back(LegAID_12_set);
      all_compo_names.insert("LegAID_12_set");

      Leg_12.add_element(LegAID_12);
    }
    elt.add_element(Leg_12);
  } // end Leg
  { // UndColl
    xml_element UndColl_0{"UndColl"};
    multiset<string> UndColl_0_set;
    UndColl_0.add_attribute("Actn", "0"); // 1
    UndColl_0_set.insert("0");
    all_values.push_back(UndColl_0_set);
    all_compo_names.insert("UndColl_0_set");

    {
      xml_element Undly_8{"Undly"};
      multiset<string> Undly_8_set;
      Undly_8.add_attribute("Sym", "UnderlyingSymbol_t_1936826777"); // 2
      Undly_8_set.insert("UnderlyingSymbol_t_1936826777");
      Undly_8.add_attribute("Sfx", "CD"); // 2
      Undly_8_set.insert("CD");
      Undly_8.add_attribute("ID", "UnderlyingSecurityID_t_1156110271"); // 2
      Undly_8_set.insert("UnderlyingSecurityID_t_1156110271");
      Undly_8.add_attribute("Src", "9"); // 2
      Undly_8_set.insert("9");
      Undly_8.add_attribute("Prod", "10"); // 2
      Undly_8_set.insert("10");
      Undly_8.add_attribute("CFI", "UnderlyingCFICode_t_426418859"); // 2
      Undly_8_set.insert("UnderlyingCFICode_t_426418859");
      Undly_8.add_attribute("SecTyp", "FAC"); // 2
      Undly_8_set.insert("FAC");
      Undly_8.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1840384702"); // 2
      Undly_8_set.insert("UnderlyingSecuritySubType_t_1840384702");
      Undly_8.add_attribute("MMY", "1155298603"); // 2
      Undly_8_set.insert("1155298603");
      Undly_8.add_attribute("Mat", "UnderlyingMaturityDate_t_1415053887"); // 2
      Undly_8_set.insert("UnderlyingMaturityDate_t_1415053887");
      Undly_8.add_attribute("MatTm", "1048533621"); // 2
      Undly_8_set.insert("1048533621");
      Undly_8.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2067847526"); // 2
      Undly_8_set.insert("UnderlyingCouponPaymentDate_t_2067847526");
      Undly_8.add_attribute("RestrctTyp", "MM"); // 2
      Undly_8_set.insert("MM");
      Undly_8.add_attribute("Snrty", "SB"); // 2
      Undly_8_set.insert("SB");
      Undly_8.add_attribute("NotlPctOut", "8174945.370000"); // 2
      Undly_8_set.insert("8174945.370000");
      Undly_8.add_attribute("OrigNotlPctOut", "21309839.840000"); // 2
      Undly_8_set.insert("21309839.840000");
      Undly_8.add_attribute("AttchPnt", "18236145.240000"); // 2
      Undly_8_set.insert("18236145.240000");
      Undly_8.add_attribute("DetchPnt", "16172980.270000"); // 2
      Undly_8_set.insert("16172980.270000");
      Undly_8.add_attribute("Issued", "UnderlyingIssueDate_t_795221998"); // 2
      Undly_8_set.insert("UnderlyingIssueDate_t_795221998");
      Undly_8.add_attribute("RepoCollSecTyp", "218439763"); // 2
      Undly_8_set.insert("218439763");
      Undly_8.add_attribute("RepoTrm", "992357503"); // 2
      Undly_8_set.insert("992357503");
      Undly_8.add_attribute("RepoRt", "9203928.380000"); // 2
      Undly_8_set.insert("9203928.380000");
      Undly_8.add_attribute("Fctr", "10024643.940000"); // 2
      Undly_8_set.insert("10024643.940000");
      Undly_8.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1743906148"); // 2
      Undly_8_set.insert("UnderlyingCreditRating_t_1743906148");
      Undly_8.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_336390926"); // 2
      Undly_8_set.insert("UnderlyingInstrRegistry_t_336390926");
      Undly_8.add_attribute("Ctry", "1107644623"); // 2
      Undly_8_set.insert("1107644623");
      Undly_8.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1305319985"); // 2
      Undly_8_set.insert("UnderlyingStateOrProvinceOfIssue_t_1305319985");
      Undly_8.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1127683032"); // 2
      Undly_8_set.insert("UnderlyingLocaleOfIssue_t_1127683032");
      Undly_8.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1504309"); // 2
      Undly_8_set.insert("UnderlyingRedemptionDate_t_1504309");
      Undly_8.add_attribute("StrkPx", "17449710.100000"); // 2
      Undly_8_set.insert("17449710.100000");
      Undly_8.add_attribute("StrkCcy", "USD"); // 2
      Undly_8_set.insert("USD");
      Undly_8.add_attribute("OptA", "1942929544"); // 2
      Undly_8_set.insert("1942929544");
      Undly_8.add_attribute("Mult", "18840031.200000"); // 2
      Undly_8_set.insert("18840031.200000");
      Undly_8.add_attribute("MultTyp", "1"); // 2
      Undly_8_set.insert("1");
      Undly_8.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_8_set.insert("4");
      Undly_8.add_attribute("UOM", "Bcf"); // 2
      Undly_8_set.insert("Bcf");
      Undly_8.add_attribute("UOMQty", "12162567.140000"); // 2
      Undly_8_set.insert("12162567.140000");
      Undly_8.add_attribute("PxUOM", "Gal"); // 2
      Undly_8_set.insert("Gal");
      Undly_8.add_attribute("PxUOMQty", "13182369.340000"); // 2
      Undly_8_set.insert("13182369.340000");
      Undly_8.add_attribute("TmUnit", "Min"); // 2
      Undly_8_set.insert("Min");
      Undly_8.add_attribute("ExerStyle", "1"); // 2
      Undly_8_set.insert("1");
      Undly_8.add_attribute("CpnRt", "12386008.120000"); // 2
      Undly_8_set.insert("12386008.120000");
      Undly_8.add_attribute("Exch", "UnderlyingSecurityExchange_t_1394242159"); // 2
      Undly_8_set.insert("UnderlyingSecurityExchange_t_1394242159");
      Undly_8.add_attribute("Issr", "UnderlyingIssuer_t_8405506"); // 2
      Undly_8_set.insert("UnderlyingIssuer_t_8405506");
      Undly_8.add_attribute("EncUndIssrLen", "2056095350"); // 2
      Undly_8_set.insert("2056095350");
      Undly_8.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1377742495"); // 2
      Undly_8_set.insert("EncodedUnderlyingIssuer_t_1377742495");
      Undly_8.add_attribute("Desc", "UnderlyingSecurityDesc_t_1832020030"); // 2
      Undly_8_set.insert("UnderlyingSecurityDesc_t_1832020030");
      Undly_8.add_attribute("EncUndSecDescLen", "1525909729"); // 2
      Undly_8_set.insert("1525909729");
      Undly_8.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_25480846"); // 2
      Undly_8_set.insert("EncodedUnderlyingSecurityDesc_t_25480846");
      Undly_8.add_attribute("CPPgm", "UnderlyingCPProgram_t_2050459794"); // 2
      Undly_8_set.insert("UnderlyingCPProgram_t_2050459794");
      Undly_8.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_370783584"); // 2
      Undly_8_set.insert("UnderlyingCPRegType_t_370783584");
      Undly_8.add_attribute("AllocPct", "9458736.840000"); // 2
      Undly_8_set.insert("9458736.840000");
      Undly_8.add_attribute("Ccy", "JPY"); // 2
      Undly_8_set.insert("JPY");
      Undly_8.add_attribute("Qty", "12822646.100000"); // 2
      Undly_8_set.insert("12822646.100000");
      Undly_8.add_attribute("SettlTyp", "5"); // 2
      Undly_8_set.insert("5");
      Undly_8.add_attribute("CashAmt", "UnderlyingCashAmount_t_1272526070"); // 2
      Undly_8_set.insert("UnderlyingCashAmount_t_1272526070");
      Undly_8.add_attribute("CashTyp", "DIFF"); // 2
      Undly_8_set.insert("DIFF");
      Undly_8.add_attribute("Px", "20145894.720000"); // 2
      Undly_8_set.insert("20145894.720000");
      Undly_8.add_attribute("DirtPx", "8700134.320000"); // 2
      Undly_8_set.insert("8700134.320000");
      Undly_8.add_attribute("EndPx", "9903568.430000"); // 2
      Undly_8_set.insert("9903568.430000");
      Undly_8.add_attribute("StartVal", "UnderlyingStartValue_t_1805436911"); // 2
      Undly_8_set.insert("UnderlyingStartValue_t_1805436911");
      Undly_8.add_attribute("CurVal", "UnderlyingCurrentValue_t_665459328"); // 2
      Undly_8_set.insert("UnderlyingCurrentValue_t_665459328");
      Undly_8.add_attribute("EndVal", "UnderlyingEndValue_t_726876315"); // 2
      Undly_8_set.insert("UnderlyingEndValue_t_726876315");
      Undly_8.add_attribute("AdjQty", "15468796.810000"); // 2
      Undly_8_set.insert("15468796.810000");
      Undly_8.add_attribute("FxRate", "19863514.730000"); // 2
      Undly_8_set.insert("19863514.730000");
      Undly_8.add_attribute("FxRateCalc", "D"); // 2
      Undly_8_set.insert("D");
      Undly_8.add_attribute("CapValu", "UnderlyingCapValue_t_615652747"); // 2
      Undly_8_set.insert("UnderlyingCapValue_t_615652747");
      Undly_8.add_attribute("SetMeth", "UnderlyingSettlMethod_t_852661024"); // 2
      Undly_8_set.insert("UnderlyingSettlMethod_t_852661024");
      Undly_8.add_attribute("PutCall", "60567933"); // 2
      Undly_8_set.insert("60567933");
      all_values.push_back(Undly_8_set);
      all_compo_names.insert("Undly_8_set");

      {
        xml_element UndAID_8{"UndAID"};
        multiset<string> UndAID_8_set;
        UndAID_8.add_attribute("AltID", "UnderlyingSecurityAltID_t_1099479700"); // 3
        UndAID_8_set.insert("UnderlyingSecurityAltID_t_1099479700");
        UndAID_8.add_attribute("AltIDSrc", "9"); // 3
        UndAID_8_set.insert("9");
        all_values.push_back(UndAID_8_set);
        all_compo_names.insert("UndAID_8_set");

        Undly_8.add_element(UndAID_8);
      }
      {
        xml_element Stip_12{"Stip"};
        multiset<string> Stip_12_set;
        Stip_12.add_attribute("Typ", "MININCR"); // 3
        Stip_12_set.insert("MININCR");
        Stip_12.add_attribute("Val", "UnderlyingStipValue_t_346238211"); // 3
        Stip_12_set.insert("UnderlyingStipValue_t_346238211");
        all_values.push_back(Stip_12_set);
        all_compo_names.insert("Stip_12_set");

        Undly_8.add_element(Stip_12);
      }
      {
        xml_element Pty_74{"Pty"};
        multiset<string> Pty_74_set;
        Pty_74.add_attribute("ID", "UnderlyingInstrumentPartyID_t_775909702"); // 3
        Pty_74_set.insert("UnderlyingInstrumentPartyID_t_775909702");
        Pty_74.add_attribute("Src", "F"); // 3
        Pty_74_set.insert("F");
        Pty_74.add_attribute("R", "73"); // 3
        Pty_74_set.insert("73");
        all_values.push_back(Pty_74_set);
        all_compo_names.insert("Pty_74_set");

        {
          xml_element Sub_74{"Sub"};
          multiset<string> Sub_74_set;
          Sub_74.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_460446085"); // 4
          Sub_74_set.insert("UnderlyingInstrumentPartySubID_t_460446085");
          Sub_74.add_attribute("Typ", "16"); // 4
          Sub_74_set.insert("16");
          all_values.push_back(Sub_74_set);
          all_compo_names.insert("Sub_74_set");

          Pty_74.add_element(Sub_74);
        }
        Undly_8.add_element(Pty_74);
      }
      UndColl_0.add_element(Undly_8);
    }
    elt.add_element(UndColl_0);
  } // end UndColl
  { // UndColl
    xml_element UndColl_1{"UndColl"};
    multiset<string> UndColl_1_set;
    UndColl_1.add_attribute("Actn", "0"); // 1
    UndColl_1_set.insert("0");
    all_values.push_back(UndColl_1_set);
    all_compo_names.insert("UndColl_1_set");

    {
      xml_element Undly_9{"Undly"};
      multiset<string> Undly_9_set;
      Undly_9.add_attribute("Sym", "UnderlyingSymbol_t_363422231"); // 2
      Undly_9_set.insert("UnderlyingSymbol_t_363422231");
      Undly_9.add_attribute("Sfx", "WI"); // 2
      Undly_9_set.insert("WI");
      Undly_9.add_attribute("ID", "UnderlyingSecurityID_t_547851589"); // 2
      Undly_9_set.insert("UnderlyingSecurityID_t_547851589");
      Undly_9.add_attribute("Src", "C"); // 2
      Undly_9_set.insert("C");
      Undly_9.add_attribute("Prod", "12"); // 2
      Undly_9_set.insert("12");
      Undly_9.add_attribute("CFI", "UnderlyingCFICode_t_1830116199"); // 2
      Undly_9_set.insert("UnderlyingCFICode_t_1830116199");
      Undly_9.add_attribute("SecTyp", "COFO"); // 2
      Undly_9_set.insert("COFO");
      Undly_9.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_49238620"); // 2
      Undly_9_set.insert("UnderlyingSecuritySubType_t_49238620");
      Undly_9.add_attribute("MMY", "2092580194"); // 2
      Undly_9_set.insert("2092580194");
      Undly_9.add_attribute("Mat", "UnderlyingMaturityDate_t_1001570110"); // 2
      Undly_9_set.insert("UnderlyingMaturityDate_t_1001570110");
      Undly_9.add_attribute("MatTm", "919252052"); // 2
      Undly_9_set.insert("919252052");
      Undly_9.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_935453390"); // 2
      Undly_9_set.insert("UnderlyingCouponPaymentDate_t_935453390");
      Undly_9.add_attribute("RestrctTyp", "MR"); // 2
      Undly_9_set.insert("MR");
      Undly_9.add_attribute("Snrty", "SB"); // 2
      Undly_9_set.insert("SB");
      Undly_9.add_attribute("NotlPctOut", "16623297.050000"); // 2
      Undly_9_set.insert("16623297.050000");
      Undly_9.add_attribute("OrigNotlPctOut", "589194.070000"); // 2
      Undly_9_set.insert("589194.070000");
      Undly_9.add_attribute("AttchPnt", "14235792.050000"); // 2
      Undly_9_set.insert("14235792.050000");
      Undly_9.add_attribute("DetchPnt", "4046607.040000"); // 2
      Undly_9_set.insert("4046607.040000");
      Undly_9.add_attribute("Issued", "UnderlyingIssueDate_t_674572154"); // 2
      Undly_9_set.insert("UnderlyingIssueDate_t_674572154");
      Undly_9.add_attribute("RepoCollSecTyp", "128756581"); // 2
      Undly_9_set.insert("128756581");
      Undly_9.add_attribute("RepoTrm", "465228638"); // 2
      Undly_9_set.insert("465228638");
      Undly_9.add_attribute("RepoRt", "17740518.550000"); // 2
      Undly_9_set.insert("17740518.550000");
      Undly_9.add_attribute("Fctr", "8962607.770000"); // 2
      Undly_9_set.insert("8962607.770000");
      Undly_9.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1764397384"); // 2
      Undly_9_set.insert("UnderlyingCreditRating_t_1764397384");
      Undly_9.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2120290066"); // 2
      Undly_9_set.insert("UnderlyingInstrRegistry_t_2120290066");
      Undly_9.add_attribute("Ctry", "1672170480"); // 2
      Undly_9_set.insert("1672170480");
      Undly_9.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_824694184"); // 2
      Undly_9_set.insert("UnderlyingStateOrProvinceOfIssue_t_824694184");
      Undly_9.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1696787125"); // 2
      Undly_9_set.insert("UnderlyingLocaleOfIssue_t_1696787125");
      Undly_9.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2132616565"); // 2
      Undly_9_set.insert("UnderlyingRedemptionDate_t_2132616565");
      Undly_9.add_attribute("StrkPx", "14109007.130000"); // 2
      Undly_9_set.insert("14109007.130000");
      Undly_9.add_attribute("StrkCcy", "JPY"); // 2
      Undly_9_set.insert("JPY");
      Undly_9.add_attribute("OptA", "220407178"); // 2
      Undly_9_set.insert("220407178");
      Undly_9.add_attribute("Mult", "18466166.190000"); // 2
      Undly_9_set.insert("18466166.190000");
      Undly_9.add_attribute("MultTyp", "1"); // 2
      Undly_9_set.insert("1");
      Undly_9.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_9_set.insert("1");
      Undly_9.add_attribute("UOM", "oz_tr"); // 2
      Undly_9_set.insert("oz_tr");
      Undly_9.add_attribute("UOMQty", "6043985.570000"); // 2
      Undly_9_set.insert("6043985.570000");
      Undly_9.add_attribute("PxUOM", "USD"); // 2
      Undly_9_set.insert("USD");
      Undly_9.add_attribute("PxUOMQty", "14743457.170000"); // 2
      Undly_9_set.insert("14743457.170000");
      Undly_9.add_attribute("TmUnit", "H"); // 2
      Undly_9_set.insert("H");
      Undly_9.add_attribute("ExerStyle", "2"); // 2
      Undly_9_set.insert("2");
      Undly_9.add_attribute("CpnRt", "2623154.590000"); // 2
      Undly_9_set.insert("2623154.590000");
      Undly_9.add_attribute("Exch", "UnderlyingSecurityExchange_t_118008393"); // 2
      Undly_9_set.insert("UnderlyingSecurityExchange_t_118008393");
      Undly_9.add_attribute("Issr", "UnderlyingIssuer_t_1550321781"); // 2
      Undly_9_set.insert("UnderlyingIssuer_t_1550321781");
      Undly_9.add_attribute("EncUndIssrLen", "1924645165"); // 2
      Undly_9_set.insert("1924645165");
      Undly_9.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_176927800"); // 2
      Undly_9_set.insert("EncodedUnderlyingIssuer_t_176927800");
      Undly_9.add_attribute("Desc", "UnderlyingSecurityDesc_t_826417338"); // 2
      Undly_9_set.insert("UnderlyingSecurityDesc_t_826417338");
      Undly_9.add_attribute("EncUndSecDescLen", "181822221"); // 2
      Undly_9_set.insert("181822221");
      Undly_9.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_851499954"); // 2
      Undly_9_set.insert("EncodedUnderlyingSecurityDesc_t_851499954");
      Undly_9.add_attribute("CPPgm", "UnderlyingCPProgram_t_955173920"); // 2
      Undly_9_set.insert("UnderlyingCPProgram_t_955173920");
      Undly_9.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_647050859"); // 2
      Undly_9_set.insert("UnderlyingCPRegType_t_647050859");
      Undly_9.add_attribute("AllocPct", "4780681.610000"); // 2
      Undly_9_set.insert("4780681.610000");
      Undly_9.add_attribute("Ccy", "EUR"); // 2
      Undly_9_set.insert("EUR");
      Undly_9.add_attribute("Qty", "4508745.800000"); // 2
      Undly_9_set.insert("4508745.800000");
      Undly_9.add_attribute("SettlTyp", "4"); // 2
      Undly_9_set.insert("4");
      Undly_9.add_attribute("CashAmt", "UnderlyingCashAmount_t_1088658779"); // 2
      Undly_9_set.insert("UnderlyingCashAmount_t_1088658779");
      Undly_9.add_attribute("CashTyp", "DIFF"); // 2
      Undly_9_set.insert("DIFF");
      Undly_9.add_attribute("Px", "13612544.460000"); // 2
      Undly_9_set.insert("13612544.460000");
      Undly_9.add_attribute("DirtPx", "3520758.440000"); // 2
      Undly_9_set.insert("3520758.440000");
      Undly_9.add_attribute("EndPx", "12989430.880000"); // 2
      Undly_9_set.insert("12989430.880000");
      Undly_9.add_attribute("StartVal", "UnderlyingStartValue_t_1709809594"); // 2
      Undly_9_set.insert("UnderlyingStartValue_t_1709809594");
      Undly_9.add_attribute("CurVal", "UnderlyingCurrentValue_t_572483023"); // 2
      Undly_9_set.insert("UnderlyingCurrentValue_t_572483023");
      Undly_9.add_attribute("EndVal", "UnderlyingEndValue_t_998076059"); // 2
      Undly_9_set.insert("UnderlyingEndValue_t_998076059");
      Undly_9.add_attribute("AdjQty", "11797438.650000"); // 2
      Undly_9_set.insert("11797438.650000");
      Undly_9.add_attribute("FxRate", "17170863.990000"); // 2
      Undly_9_set.insert("17170863.990000");
      Undly_9.add_attribute("FxRateCalc", "M"); // 2
      Undly_9_set.insert("M");
      Undly_9.add_attribute("CapValu", "UnderlyingCapValue_t_1784142422"); // 2
      Undly_9_set.insert("UnderlyingCapValue_t_1784142422");
      Undly_9.add_attribute("SetMeth", "UnderlyingSettlMethod_t_763444748"); // 2
      Undly_9_set.insert("UnderlyingSettlMethod_t_763444748");
      Undly_9.add_attribute("PutCall", "1854187300"); // 2
      Undly_9_set.insert("1854187300");
      all_values.push_back(Undly_9_set);
      all_compo_names.insert("Undly_9_set");

      {
        xml_element UndAID_9{"UndAID"};
        multiset<string> UndAID_9_set;
        UndAID_9.add_attribute("AltID", "UnderlyingSecurityAltID_t_1242627442"); // 3
        UndAID_9_set.insert("UnderlyingSecurityAltID_t_1242627442");
        UndAID_9.add_attribute("AltIDSrc", "9"); // 3
        UndAID_9_set.insert("9");
        all_values.push_back(UndAID_9_set);
        all_compo_names.insert("UndAID_9_set");

        Undly_9.add_element(UndAID_9);
      }
      {
        xml_element Stip_13{"Stip"};
        multiset<string> Stip_13_set;
        Stip_13.add_attribute("Typ", "PROTECT"); // 3
        Stip_13_set.insert("PROTECT");
        Stip_13.add_attribute("Val", "UnderlyingStipValue_t_1360635835"); // 3
        Stip_13_set.insert("UnderlyingStipValue_t_1360635835");
        all_values.push_back(Stip_13_set);
        all_compo_names.insert("Stip_13_set");

        Undly_9.add_element(Stip_13);
      }
      {
        xml_element Pty_75{"Pty"};
        multiset<string> Pty_75_set;
        Pty_75.add_attribute("ID", "UnderlyingInstrumentPartyID_t_131893281"); // 3
        Pty_75_set.insert("UnderlyingInstrumentPartyID_t_131893281");
        Pty_75.add_attribute("Src", "H"); // 3
        Pty_75_set.insert("H");
        Pty_75.add_attribute("R", "85"); // 3
        Pty_75_set.insert("85");
        all_values.push_back(Pty_75_set);
        all_compo_names.insert("Pty_75_set");

        {
          xml_element Sub_75{"Sub"};
          multiset<string> Sub_75_set;
          Sub_75.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_958310620"); // 4
          Sub_75_set.insert("UnderlyingInstrumentPartySubID_t_958310620");
          Sub_75.add_attribute("Typ", "17"); // 4
          Sub_75_set.insert("17");
          all_values.push_back(Sub_75_set);
          all_compo_names.insert("Sub_75_set");

          Pty_75.add_element(Sub_75);
        }
        Undly_9.add_element(Pty_75);
      }
      UndColl_1.add_element(Undly_9);
    }
    elt.add_element(UndColl_1);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_0{"TrdRegTS"};
    multiset<string> TrdRegTS_0_set;
    TrdRegTS_0.add_attribute("TS", "TrdRegTimestamp_t_1913484540"); // 1
    TrdRegTS_0_set.insert("TrdRegTimestamp_t_1913484540");
    TrdRegTS_0.add_attribute("Typ", "7"); // 1
    TrdRegTS_0_set.insert("7");
    TrdRegTS_0.add_attribute("Src", "TrdRegTimestampOrigin_t_719648103"); // 1
    TrdRegTS_0_set.insert("TrdRegTimestampOrigin_t_719648103");
    TrdRegTS_0.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_0_set.insert("A");
    TrdRegTS_0.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_0_set.insert("1");
    TrdRegTS_0.add_attribute("DskOrdHndlInst", "MAC"); // 1
    TrdRegTS_0_set.insert("MAC");
    all_values.push_back(TrdRegTS_0_set);
    all_compo_names.insert("TrdRegTS_0_set");

    elt.add_element(TrdRegTS_0);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_9{"MiscFees"};
    multiset<string> MiscFees_9_set;
    MiscFees_9.add_attribute("Amt", "MiscFeeAmt_t_1927677084"); // 1
    MiscFees_9_set.insert("MiscFeeAmt_t_1927677084");
    MiscFees_9.add_attribute("Curr", "CAN"); // 1
    MiscFees_9_set.insert("CAN");
    MiscFees_9.add_attribute("Typ", "9"); // 1
    MiscFees_9_set.insert("9");
    MiscFees_9.add_attribute("Basis", "2"); // 1
    MiscFees_9_set.insert("2");
    all_values.push_back(MiscFees_9_set);
    all_compo_names.insert("MiscFees_9_set");

    elt.add_element(MiscFees_9);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_10{"MiscFees"};
    multiset<string> MiscFees_10_set;
    MiscFees_10.add_attribute("Amt", "MiscFeeAmt_t_1769653864"); // 1
    MiscFees_10_set.insert("MiscFeeAmt_t_1769653864");
    MiscFees_10.add_attribute("Curr", "GBP"); // 1
    MiscFees_10_set.insert("GBP");
    MiscFees_10.add_attribute("Typ", "12"); // 1
    MiscFees_10_set.insert("12");
    MiscFees_10.add_attribute("Basis", "0"); // 1
    MiscFees_10_set.insert("0");
    all_values.push_back(MiscFees_10_set);
    all_compo_names.insert("MiscFees_10_set");

    elt.add_element(MiscFees_10);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_3{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_3_set;
    SprdBnchmkCurve_3.add_attribute("Spread", "17000778.220000"); // 1
    SprdBnchmkCurve_3_set.insert("17000778.220000");
    SprdBnchmkCurve_3.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_3_set.insert("CAN");
    SprdBnchmkCurve_3.add_attribute("Name", "MuniAAA"); // 1
    SprdBnchmkCurve_3_set.insert("MuniAAA");
    SprdBnchmkCurve_3.add_attribute("Point", "BenchmarkCurvePoint_t_1681200298"); // 1
    SprdBnchmkCurve_3_set.insert("BenchmarkCurvePoint_t_1681200298");
    SprdBnchmkCurve_3.add_attribute("Px", "17668549.520000"); // 1
    SprdBnchmkCurve_3_set.insert("17668549.520000");
    SprdBnchmkCurve_3.add_attribute("PxTyp", "18"); // 1
    SprdBnchmkCurve_3_set.insert("18");
    SprdBnchmkCurve_3.add_attribute("SecID", "BenchmarkSecurityID_t_894352485"); // 1
    SprdBnchmkCurve_3_set.insert("BenchmarkSecurityID_t_894352485");
    SprdBnchmkCurve_3.add_attribute("SecIDSrc", "L"); // 1
    SprdBnchmkCurve_3_set.insert("L");
    all_values.push_back(SprdBnchmkCurve_3_set);
    all_compo_names.insert("SprdBnchmkCurve_3_set");

    elt.add_element(SprdBnchmkCurve_3);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_14{"Stip"};
    multiset<string> Stip_14_set;
    Stip_14.add_attribute("Typ", "LEAVEQTY"); // 1
    Stip_14_set.insert("LEAVEQTY");
    Stip_14.add_attribute("Val", "StipulationValue_t_709575205"); // 1
    Stip_14_set.insert("StipulationValue_t_709575205");
    all_values.push_back(Stip_14_set);
    all_compo_names.insert("Stip_14_set");

    elt.add_element(Stip_14);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_9{"SetInstr"};
    multiset<string> SetInstr_9_set;
    SetInstr_9.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_9_set.insert("0");
    SetInstr_9.add_attribute("StandInstDbTyp", "3"); // 1
    SetInstr_9_set.insert("3");
    SetInstr_9.add_attribute("StandInstDbName", "StandInstDbName_t_475576097"); // 1
    SetInstr_9_set.insert("StandInstDbName_t_475576097");
    SetInstr_9.add_attribute("StandInstDbID", "StandInstDbID_t_1625037774"); // 1
    SetInstr_9_set.insert("StandInstDbID_t_1625037774");
    all_values.push_back(SetInstr_9_set);
    all_compo_names.insert("SetInstr_9_set");

    {
      xml_element DlvInst_9{"DlvInst"};
      multiset<string> DlvInst_9_set;
      DlvInst_9.add_attribute("InstSrc", "1"); // 2
      DlvInst_9_set.insert("1");
      DlvInst_9.add_attribute("InstTyp", "S"); // 2
      DlvInst_9_set.insert("S");
      all_values.push_back(DlvInst_9_set);
      all_compo_names.insert("DlvInst_9_set");

      {
        xml_element Pty_76{"Pty"};
        multiset<string> Pty_76_set;
        Pty_76.add_attribute("ID", "SettlPartyID_t_316572431"); // 3
        Pty_76_set.insert("SettlPartyID_t_316572431");
        Pty_76.add_attribute("Src", "G"); // 3
        Pty_76_set.insert("G");
        Pty_76.add_attribute("R", "45"); // 3
        Pty_76_set.insert("45");
        all_values.push_back(Pty_76_set);
        all_compo_names.insert("Pty_76_set");

        {
          xml_element Sub_76{"Sub"};
          multiset<string> Sub_76_set;
          Sub_76.add_attribute("ID", "SettlPartySubID_t_96765867"); // 4
          Sub_76_set.insert("SettlPartySubID_t_96765867");
          Sub_76.add_attribute("Typ", "6"); // 4
          Sub_76_set.insert("6");
          all_values.push_back(Sub_76_set);
          all_compo_names.insert("Sub_76_set");

          Pty_76.add_element(Sub_76);
        }
        DlvInst_9.add_element(Pty_76);
      }
      SetInstr_9.add_element(DlvInst_9);
    }
    elt.add_element(SetInstr_9);
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
