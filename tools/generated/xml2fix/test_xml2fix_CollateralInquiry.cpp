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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollInq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralInquiry_message_t_0;
  elt.add_attribute("ID", "CollInquiryID_t_1484127786"); // 0
  CollateralInquiry_message_t_0.insert("CollInquiryID_t_1484127786");
  elt.add_attribute("SubReqTyp", "2"); // 0
  CollateralInquiry_message_t_0.insert("2");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_672468926"); // 0
  CollateralInquiry_message_t_0.insert("ResponseDestination_t_672468926");
  elt.add_attribute("Acct", "Account_t_2046848141"); // 0
  CollateralInquiry_message_t_0.insert("Account_t_2046848141");
  elt.add_attribute("AcctTyp", "7"); // 0
  CollateralInquiry_message_t_0.insert("7");
  elt.add_attribute("ClOrdID", "ClOrdID_t_515609471"); // 0
  CollateralInquiry_message_t_0.insert("ClOrdID_t_515609471");
  elt.add_attribute("OrdID", "OrderID_t_1769791529"); // 0
  CollateralInquiry_message_t_0.insert("OrderID_t_1769791529");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_497131261"); // 0
  CollateralInquiry_message_t_0.insert("SecondaryOrderID_t_497131261");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_729926034"); // 0
  CollateralInquiry_message_t_0.insert("SecondaryClOrdID_t_729926034");
  elt.add_attribute("SettlDt", "SettlDate_t_1822477390"); // 0
  CollateralInquiry_message_t_0.insert("SettlDate_t_1822477390");
  elt.add_attribute("Qty", "1552124.060000"); // 0
  CollateralInquiry_message_t_0.insert("1552124.060000");
  elt.add_attribute("QtyTyp", "2"); // 0
  CollateralInquiry_message_t_0.insert("2");
  elt.add_attribute("Ccy", "CAN"); // 0
  CollateralInquiry_message_t_0.insert("CAN");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1563712357"); // 0
  CollateralInquiry_message_t_0.insert("MarginExcess_t_1563712357");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_481013695"); // 0
  CollateralInquiry_message_t_0.insert("TotalNetValue_t_481013695");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_1592293433"); // 0
  CollateralInquiry_message_t_0.insert("CashOutstanding_t_1592293433");
  elt.add_attribute("Side", "8"); // 0
  CollateralInquiry_message_t_0.insert("8");
  elt.add_attribute("Px", "6651555.950000"); // 0
  CollateralInquiry_message_t_0.insert("6651555.950000");
  elt.add_attribute("PxTyp", "1"); // 0
  CollateralInquiry_message_t_0.insert("1");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_279228968"); // 0
  CollateralInquiry_message_t_0.insert("AccruedInterestAmt_t_279228968");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1177386199"); // 0
  CollateralInquiry_message_t_0.insert("EndAccruedInterestAmt_t_1177386199");
  elt.add_attribute("StartCsh", "StartCash_t_1716706597"); // 0
  CollateralInquiry_message_t_0.insert("StartCash_t_1716706597");
  elt.add_attribute("EndCsh", "EndCash_t_1096002190"); // 0
  CollateralInquiry_message_t_0.insert("EndCash_t_1096002190");
  elt.add_attribute("SesID", "3"); // 0
  CollateralInquiry_message_t_0.insert("3");
  elt.add_attribute("SesSub", "2"); // 0
  CollateralInquiry_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "ITD"); // 0
  CollateralInquiry_message_t_0.insert("ITD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_556319298"); // 0
  CollateralInquiry_message_t_0.insert("SettlSessSubID_t_556319298");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1421010207"); // 0
  CollateralInquiry_message_t_0.insert("ClearingBusinessDate_t_1421010207");
  elt.add_attribute("Txt", "Text_t_1013485910"); // 0
  CollateralInquiry_message_t_0.insert("Text_t_1013485910");
  elt.add_attribute("EncTxtLen", "2040447084"); // 0
  CollateralInquiry_message_t_0.insert("2040447084");
  elt.add_attribute("EncTxt", "EncodedText_t_2144300195"); // 0
  CollateralInquiry_message_t_0.insert("EncodedText_t_2144300195");
  all_values.push_back(CollateralInquiry_message_t_0);
  all_compo_names.insert("CollateralInquiry_message_t");

  { // Hdr
    xml_element Hdr_15{"Hdr"};
    multiset<string> Hdr_15_set;
    Hdr_15.add_attribute("SeqNum", "1822272403"); // 1
    Hdr_15_set.insert("1822272403");
    Hdr_15.add_attribute("SID", "SenderCompID_t_565432362"); // 1
    Hdr_15_set.insert("SenderCompID_t_565432362");
    Hdr_15.add_attribute("TID", "TargetCompID_t_2043664689"); // 1
    Hdr_15_set.insert("TargetCompID_t_2043664689");
    Hdr_15.add_attribute("OBID", "OnBehalfOfCompID_t_13863223"); // 1
    Hdr_15_set.insert("OnBehalfOfCompID_t_13863223");
    Hdr_15.add_attribute("D2ID", "DeliverToCompID_t_1081041834"); // 1
    Hdr_15_set.insert("DeliverToCompID_t_1081041834");
    Hdr_15.add_attribute("SSub", "SenderSubID_t_1665972570"); // 1
    Hdr_15_set.insert("SenderSubID_t_1665972570");
    Hdr_15.add_attribute("SLoc", "SenderLocationID_t_510994484"); // 1
    Hdr_15_set.insert("SenderLocationID_t_510994484");
    Hdr_15.add_attribute("TSub", "TargetSubID_t_1810967868"); // 1
    Hdr_15_set.insert("TargetSubID_t_1810967868");
    Hdr_15.add_attribute("TLoc", "TargetLocationID_t_1340966312"); // 1
    Hdr_15_set.insert("TargetLocationID_t_1340966312");
    Hdr_15.add_attribute("OBSub", "OnBehalfOfSubID_t_666206890"); // 1
    Hdr_15_set.insert("OnBehalfOfSubID_t_666206890");
    Hdr_15.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1199063091"); // 1
    Hdr_15_set.insert("OnBehalfOfLocationID_t_1199063091");
    Hdr_15.add_attribute("D2Sub", "DeliverToSubID_t_992383977"); // 1
    Hdr_15_set.insert("DeliverToSubID_t_992383977");
    Hdr_15.add_attribute("D2Loc", "DeliverToLocationID_t_1086628041"); // 1
    Hdr_15_set.insert("DeliverToLocationID_t_1086628041");
    Hdr_15.add_attribute("PosDup", "N"); // 1
    Hdr_15_set.insert("N");
    Hdr_15.add_attribute("PosRsnd", "N"); // 1
    Hdr_15_set.insert("N");
    Hdr_15.add_attribute("Snt", "SendingTime_t_531437827"); // 1
    Hdr_15_set.insert("SendingTime_t_531437827");
    Hdr_15.add_attribute("OrigSnt", "OrigSendingTime_t_930949680"); // 1
    Hdr_15_set.insert("OrigSendingTime_t_930949680");
    Hdr_15.add_attribute("MsgEncd", "MessageEncoding_t_2138553268"); // 1
    Hdr_15_set.insert("MessageEncoding_t_2138553268");
    all_values.push_back(Hdr_15_set);
    all_compo_names.insert("Hdr_15_set");

    {
      xml_element Hop_15{"Hop"};
      multiset<string> Hop_15_set;
      Hop_15.add_attribute("ID", "HopCompID_t_2038863397"); // 2
      Hop_15_set.insert("HopCompID_t_2038863397");
      Hop_15.add_attribute("Ref", "1210178648"); // 2
      Hop_15_set.insert("1210178648");
      Hop_15.add_attribute("Snt", "HopSendingTime_t_1168455819"); // 2
      Hop_15_set.insert("HopSendingTime_t_1168455819");
      all_values.push_back(Hop_15_set);
      all_compo_names.insert("Hop_15_set");

      Hdr_15.add_element(Hop_15);
    }
    elt.add_element(Hdr_15);
  } // end Hdr
  { // Qual
    xml_element Qual_0{"Qual"};
    multiset<string> Qual_0_set;
    Qual_0.add_attribute("Qual", "6"); // 1
    Qual_0_set.insert("6");
    all_values.push_back(Qual_0_set);
    all_compo_names.insert("Qual_0_set");

    elt.add_element(Qual_0);
  } // end Qual
  { // Pty
    xml_element Pty_72{"Pty"};
    multiset<string> Pty_72_set;
    Pty_72.add_attribute("ID", "PartyID_t_773474700"); // 1
    Pty_72_set.insert("PartyID_t_773474700");
    Pty_72.add_attribute("Src", "6"); // 1
    Pty_72_set.insert("6");
    Pty_72.add_attribute("R", "65"); // 1
    Pty_72_set.insert("65");
    all_values.push_back(Pty_72_set);
    all_compo_names.insert("Pty_72_set");

    {
      xml_element Sub_72{"Sub"};
      multiset<string> Sub_72_set;
      Sub_72.add_attribute("ID", "PartySubID_t_47001260"); // 2
      Sub_72_set.insert("PartySubID_t_47001260");
      Sub_72.add_attribute("Typ", "6"); // 2
      Sub_72_set.insert("6");
      all_values.push_back(Sub_72_set);
      all_compo_names.insert("Sub_72_set");

      Pty_72.add_element(Sub_72);
    }
    elt.add_element(Pty_72);
  } // end Pty
  { // Pty
    xml_element Pty_73{"Pty"};
    multiset<string> Pty_73_set;
    Pty_73.add_attribute("ID", "PartyID_t_2126120764"); // 1
    Pty_73_set.insert("PartyID_t_2126120764");
    Pty_73.add_attribute("Src", "C"); // 1
    Pty_73_set.insert("C");
    Pty_73.add_attribute("R", "62"); // 1
    Pty_73_set.insert("62");
    all_values.push_back(Pty_73_set);
    all_compo_names.insert("Pty_73_set");

    {
      xml_element Sub_73{"Sub"};
      multiset<string> Sub_73_set;
      Sub_73.add_attribute("ID", "PartySubID_t_544069478"); // 2
      Sub_73_set.insert("PartySubID_t_544069478");
      Sub_73.add_attribute("Typ", "2"); // 2
      Sub_73_set.insert("2");
      all_values.push_back(Sub_73_set);
      all_compo_names.insert("Sub_73_set");

      Pty_73.add_element(Sub_73);
    }
    elt.add_element(Pty_73);
  } // end Pty
  { // Pty
    xml_element Pty_74{"Pty"};
    multiset<string> Pty_74_set;
    Pty_74.add_attribute("ID", "PartyID_t_1219978291"); // 1
    Pty_74_set.insert("PartyID_t_1219978291");
    Pty_74.add_attribute("Src", "F"); // 1
    Pty_74_set.insert("F");
    Pty_74.add_attribute("R", "38"); // 1
    Pty_74_set.insert("38");
    all_values.push_back(Pty_74_set);
    all_compo_names.insert("Pty_74_set");

    {
      xml_element Sub_74{"Sub"};
      multiset<string> Sub_74_set;
      Sub_74.add_attribute("ID", "PartySubID_t_1730972775"); // 2
      Sub_74_set.insert("PartySubID_t_1730972775");
      Sub_74.add_attribute("Typ", "23"); // 2
      Sub_74_set.insert("23");
      all_values.push_back(Sub_74_set);
      all_compo_names.insert("Sub_74_set");

      Pty_74.add_element(Sub_74);
    }
    elt.add_element(Pty_74);
  } // end Pty
  { // CollExc
    xml_element CollExc_1{"CollExc"};
    multiset<string> CollExc_1_set;
    CollExc_1.add_attribute("ExecID", "ExecID_t_249696018"); // 1
    CollExc_1_set.insert("ExecID_t_249696018");
    all_values.push_back(CollExc_1_set);
    all_compo_names.insert("CollExc_1_set");

    elt.add_element(CollExc_1);
  } // end CollExc
  { // CollExc
    xml_element CollExc_2{"CollExc"};
    multiset<string> CollExc_2_set;
    CollExc_2.add_attribute("ExecID", "ExecID_t_340174976"); // 1
    CollExc_2_set.insert("ExecID_t_340174976");
    all_values.push_back(CollExc_2_set);
    all_compo_names.insert("CollExc_2_set");

    elt.add_element(CollExc_2);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_1{"TrdColl"};
    multiset<string> TrdColl_1_set;
    TrdColl_1.add_attribute("RptID", "TradeReportID_t_1336324059"); // 1
    TrdColl_1_set.insert("TradeReportID_t_1336324059");
    TrdColl_1.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_955466776"); // 1
    TrdColl_1_set.insert("SecondaryTradeReportID_t_955466776");
    all_values.push_back(TrdColl_1_set);
    all_compo_names.insert("TrdColl_1_set");

    elt.add_element(TrdColl_1);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_2{"TrdColl"};
    multiset<string> TrdColl_2_set;
    TrdColl_2.add_attribute("RptID", "TradeReportID_t_1117752085"); // 1
    TrdColl_2_set.insert("TradeReportID_t_1117752085");
    TrdColl_2.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1867761886"); // 1
    TrdColl_2_set.insert("SecondaryTradeReportID_t_1867761886");
    all_values.push_back(TrdColl_2_set);
    all_compo_names.insert("TrdColl_2_set");

    elt.add_element(TrdColl_2);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_7{"Instrmt"};
    multiset<string> Instrmt_7_set;
    Instrmt_7.add_attribute("Sym", "Symbol_t_1886416456"); // 1
    Instrmt_7_set.insert("Symbol_t_1886416456");
    Instrmt_7.add_attribute("Sfx", "WI"); // 1
    Instrmt_7_set.insert("WI");
    Instrmt_7.add_attribute("ID", "SecurityID_t_1759141635"); // 1
    Instrmt_7_set.insert("SecurityID_t_1759141635");
    Instrmt_7.add_attribute("Src", "L"); // 1
    Instrmt_7_set.insert("L");
    Instrmt_7.add_attribute("Prod", "13"); // 1
    Instrmt_7_set.insert("13");
    Instrmt_7.add_attribute("ProdCmplx", "ProductComplex_t_1219744333"); // 1
    Instrmt_7_set.insert("ProductComplex_t_1219744333");
    Instrmt_7.add_attribute("SecGrp", "SecurityGroup_t_1107808647"); // 1
    Instrmt_7_set.insert("SecurityGroup_t_1107808647");
    Instrmt_7.add_attribute("CFI", "CFICode_t_1806631906"); // 1
    Instrmt_7_set.insert("CFICode_t_1806631906");
    Instrmt_7.add_attribute("SecTyp", "UST"); // 1
    Instrmt_7_set.insert("UST");
    Instrmt_7.add_attribute("SubTyp", "SecuritySubType_t_1625649050"); // 1
    Instrmt_7_set.insert("SecuritySubType_t_1625649050");
    Instrmt_7.add_attribute("MMY", "1892305585"); // 1
    Instrmt_7_set.insert("1892305585");
    Instrmt_7.add_attribute("MatDt", "MaturityDate_t_2040220294"); // 1
    Instrmt_7_set.insert("MaturityDate_t_2040220294");
    Instrmt_7.add_attribute("MatTm", "1009491715"); // 1
    Instrmt_7_set.insert("1009491715");
    Instrmt_7.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1870942701"); // 1
    Instrmt_7_set.insert("SettleOnOpenFlag_t_1870942701");
    Instrmt_7.add_attribute("AsgnMeth", "2084038101"); // 1
    Instrmt_7_set.insert("2084038101");
    Instrmt_7.add_attribute("Status", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("CpnPmt", "CouponPaymentDate_t_267528532"); // 1
    Instrmt_7_set.insert("CouponPaymentDate_t_267528532");
    Instrmt_7.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_7_set.insert("MM");
    Instrmt_7.add_attribute("Snrty", "SD"); // 1
    Instrmt_7_set.insert("SD");
    Instrmt_7.add_attribute("NotlPctOut", "18926398.440000"); // 1
    Instrmt_7_set.insert("18926398.440000");
    Instrmt_7.add_attribute("OrigNotlPctOut", "14825247.200000"); // 1
    Instrmt_7_set.insert("14825247.200000");
    Instrmt_7.add_attribute("AttchPnt", "8715905.540000"); // 1
    Instrmt_7_set.insert("8715905.540000");
    Instrmt_7.add_attribute("DetchPnt", "10337517.290000"); // 1
    Instrmt_7_set.insert("10337517.290000");
    Instrmt_7.add_attribute("Issued", "IssueDate_t_134495155"); // 1
    Instrmt_7_set.insert("IssueDate_t_134495155");
    Instrmt_7.add_attribute("RepoCollSecTyp", "1121286572"); // 1
    Instrmt_7_set.insert("1121286572");
    Instrmt_7.add_attribute("RepoTrm", "1373926705"); // 1
    Instrmt_7_set.insert("1373926705");
    Instrmt_7.add_attribute("RepoRt", "19263332.160000"); // 1
    Instrmt_7_set.insert("19263332.160000");
    Instrmt_7.add_attribute("Fctr", "3101269.830000"); // 1
    Instrmt_7_set.insert("3101269.830000");
    Instrmt_7.add_attribute("CrdRtg", "CreditRating_t_181909833"); // 1
    Instrmt_7_set.insert("CreditRating_t_181909833");
    Instrmt_7.add_attribute("Rgstry", "InstrRegistry_t_896601653"); // 1
    Instrmt_7_set.insert("InstrRegistry_t_896601653");
    Instrmt_7.add_attribute("IssuCtry", "30405222"); // 1
    Instrmt_7_set.insert("30405222");
    Instrmt_7.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2068326290"); // 1
    Instrmt_7_set.insert("StateOrProvinceOfIssue_t_2068326290");
    Instrmt_7.add_attribute("Lcl", "LocaleOfIssue_t_2005423358"); // 1
    Instrmt_7_set.insert("LocaleOfIssue_t_2005423358");
    Instrmt_7.add_attribute("Redeem", "RedemptionDate_t_1789546857"); // 1
    Instrmt_7_set.insert("RedemptionDate_t_1789546857");
    Instrmt_7.add_attribute("StrkPx", "8699540.990000"); // 1
    Instrmt_7_set.insert("8699540.990000");
    Instrmt_7.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_7_set.insert("CHF");
    Instrmt_7.add_attribute("StrkMult", "19777627.460000"); // 1
    Instrmt_7_set.insert("19777627.460000");
    Instrmt_7.add_attribute("StrkValu", "17943654.920000"); // 1
    Instrmt_7_set.insert("17943654.920000");
    Instrmt_7.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_7_set.insert("5");
    Instrmt_7.add_attribute("StrkPxBndryPrcsn", "15391874.300000"); // 1
    Instrmt_7_set.insert("15391874.300000");
    Instrmt_7.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_7_set.insert("4");
    Instrmt_7.add_attribute("OptAt", "317936216"); // 1
    Instrmt_7_set.insert("317936216");
    Instrmt_7.add_attribute("Mult", "12626464.830000"); // 1
    Instrmt_7_set.insert("12626464.830000");
    Instrmt_7.add_attribute("MultTyp", "0"); // 1
    Instrmt_7_set.insert("0");
    Instrmt_7.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("MinPxIncr", "15301750.150000"); // 1
    Instrmt_7_set.insert("15301750.150000");
    Instrmt_7.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_413387330"); // 1
    Instrmt_7_set.insert("MinPriceIncrementAmount_t_413387330");
    Instrmt_7.add_attribute("UOM", "t"); // 1
    Instrmt_7_set.insert("t");
    Instrmt_7.add_attribute("UOMQty", "12753312.120000"); // 1
    Instrmt_7_set.insert("12753312.120000");
    Instrmt_7.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_7_set.insert("lbs");
    Instrmt_7.add_attribute("PxUOMQty", "3982676.840000"); // 1
    Instrmt_7_set.insert("3982676.840000");
    Instrmt_7.add_attribute("SettlMeth", "P"); // 1
    Instrmt_7_set.insert("P");
    Instrmt_7.add_attribute("ExerStyle", "0"); // 1
    Instrmt_7_set.insert("0");
    Instrmt_7.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_7_set.insert("2");
    Instrmt_7.add_attribute("OptPayAmt", "OptPayoutAmount_t_1535525998"); // 1
    Instrmt_7_set.insert("OptPayoutAmount_t_1535525998");
    Instrmt_7.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_7_set.insert("INT");
    Instrmt_7.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_7_set.insert("EQTY");
    Instrmt_7.add_attribute("ListMeth", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("CapPx", "5583747.790000"); // 1
    Instrmt_7_set.insert("5583747.790000");
    Instrmt_7.add_attribute("FlrPx", "18600864.620000"); // 1
    Instrmt_7_set.insert("18600864.620000");
    Instrmt_7.add_attribute("PutCall", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("FlexInd", "false"); // 1
    Instrmt_7_set.insert("false");
    Instrmt_7.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_7_set.insert("false");
    Instrmt_7.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_7_set.insert("Wk");
    Instrmt_7.add_attribute("CpnRt", "4040480.760000"); // 1
    Instrmt_7_set.insert("4040480.760000");
    Instrmt_7.add_attribute("Exch", "SecurityExchange_t_216473566"); // 1
    Instrmt_7_set.insert("SecurityExchange_t_216473566");
    Instrmt_7.add_attribute("PosLmt", "191028023"); // 1
    Instrmt_7_set.insert("191028023");
    Instrmt_7.add_attribute("NTPosLmt", "50929920"); // 1
    Instrmt_7_set.insert("50929920");
    Instrmt_7.add_attribute("Issr", "Issuer_t_924016495"); // 1
    Instrmt_7_set.insert("Issuer_t_924016495");
    Instrmt_7.add_attribute("EncIssrLen", "1646956172"); // 1
    Instrmt_7_set.insert("1646956172");
    Instrmt_7.add_attribute("EncIssr", "EncodedIssuer_t_1590117350"); // 1
    Instrmt_7_set.insert("EncodedIssuer_t_1590117350");
    Instrmt_7.add_attribute("Desc", "SecurityDesc_t_1524296070"); // 1
    Instrmt_7_set.insert("SecurityDesc_t_1524296070");
    Instrmt_7.add_attribute("EncSecDescLen", "1964892388"); // 1
    Instrmt_7_set.insert("1964892388");
    Instrmt_7.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_705280186"); // 1
    Instrmt_7_set.insert("EncodedSecurityDesc_t_705280186");
    Instrmt_7.add_attribute("Pool", "Pool_t_2061130099"); // 1
    Instrmt_7_set.insert("Pool_t_2061130099");
    Instrmt_7.add_attribute("CSetMo", "203468092"); // 1
    Instrmt_7_set.insert("203468092");
    Instrmt_7.add_attribute("CPPgm", "1"); // 1
    Instrmt_7_set.insert("1");
    Instrmt_7.add_attribute("CPRegT", "CPRegType_t_327033781"); // 1
    Instrmt_7_set.insert("CPRegType_t_327033781");
    Instrmt_7.add_attribute("Dated", "DatedDate_t_1877628871"); // 1
    Instrmt_7_set.insert("DatedDate_t_1877628871");
    Instrmt_7.add_attribute("IntAcrl", "InterestAccrualDate_t_1363302765"); // 1
    Instrmt_7_set.insert("InterestAccrualDate_t_1363302765");
    all_values.push_back(Instrmt_7_set);
    all_compo_names.insert("Instrmt_7_set");

    {
      xml_element AID_7{"AID"};
      multiset<string> AID_7_set;
      AID_7.add_attribute("AltID", "SecurityAltID_t_75462184"); // 2
      AID_7_set.insert("SecurityAltID_t_75462184");
      AID_7.add_attribute("AltIDSrc", "8"); // 2
      AID_7_set.insert("8");
      all_values.push_back(AID_7_set);
      all_compo_names.insert("AID_7_set");

      Instrmt_7.add_element(AID_7);
    }
    {
      xml_element SecXML_7{"SecXML"};
      multiset<string> SecXML_7_set;
      SecXML_7.add_attribute("Schema", "SecurityXMLSchema_t_1524902058"); // 2
      SecXML_7_set.insert("SecurityXMLSchema_t_1524902058");
      all_values.push_back(SecXML_7_set);
      all_compo_names.insert("SecXML_7_set");

      Instrmt_7.add_element(SecXML_7);
    }
    {
      xml_element Evnt_7{"Evnt"};
      multiset<string> Evnt_7_set;
      Evnt_7.add_attribute("EventTyp", "10"); // 2
      Evnt_7_set.insert("10");
      Evnt_7.add_attribute("Dt", "EventDate_t_1647967164"); // 2
      Evnt_7_set.insert("EventDate_t_1647967164");
      Evnt_7.add_attribute("Tm", "EventTime_t_912944408"); // 2
      Evnt_7_set.insert("EventTime_t_912944408");
      Evnt_7.add_attribute("Px", "17676425.170000"); // 2
      Evnt_7_set.insert("17676425.170000");
      Evnt_7.add_attribute("Txt", "EventText_t_1330164756"); // 2
      Evnt_7_set.insert("EventText_t_1330164756");
      all_values.push_back(Evnt_7_set);
      all_compo_names.insert("Evnt_7_set");

      Instrmt_7.add_element(Evnt_7);
    }
    {
      xml_element Pty_75{"Pty"};
      multiset<string> Pty_75_set;
      Pty_75.add_attribute("ID", "InstrumentPartyID_t_482896592"); // 2
      Pty_75_set.insert("InstrumentPartyID_t_482896592");
      Pty_75.add_attribute("Src", "2"); // 2
      Pty_75_set.insert("2");
      Pty_75.add_attribute("R", "57"); // 2
      Pty_75_set.insert("57");
      all_values.push_back(Pty_75_set);
      all_compo_names.insert("Pty_75_set");

      {
        xml_element Sub_75{"Sub"};
        multiset<string> Sub_75_set;
        Sub_75.add_attribute("ID", "InstrumentPartySubID_t_2121175065"); // 3
        Sub_75_set.insert("InstrumentPartySubID_t_2121175065");
        Sub_75.add_attribute("Typ", "14"); // 3
        Sub_75_set.insert("14");
        all_values.push_back(Sub_75_set);
        all_compo_names.insert("Sub_75_set");

        Pty_75.add_element(Sub_75);
      }
      Instrmt_7.add_element(Pty_75);
    }
    {
      xml_element CmplxEvnt_7{"CmplxEvnt"};
      multiset<string> CmplxEvnt_7_set;
      CmplxEvnt_7.add_attribute("Typ", "2"); // 2
      CmplxEvnt_7_set.insert("2");
      CmplxEvnt_7.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_334440342"); // 2
      CmplxEvnt_7_set.insert("ComplexOptPayoutAmount_t_334440342");
      CmplxEvnt_7.add_attribute("Px", "9988962.140000"); // 2
      CmplxEvnt_7_set.insert("9988962.140000");
      CmplxEvnt_7.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_7_set.insert("1");
      CmplxEvnt_7.add_attribute("PxBndryPrcsn", "5254683.650000"); // 2
      CmplxEvnt_7_set.insert("5254683.650000");
      CmplxEvnt_7.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_7_set.insert("1");
      CmplxEvnt_7.add_attribute("Cond", "2"); // 2
      CmplxEvnt_7_set.insert("2");
      all_values.push_back(CmplxEvnt_7_set);
      all_compo_names.insert("CmplxEvnt_7_set");

      {
        xml_element EvntDts_7{"EvntDts"};
        multiset<string> EvntDts_7_set;
        EvntDts_7.add_attribute("StartDt", "ComplexEventStartDate_t_24940889"); // 3
        EvntDts_7_set.insert("ComplexEventStartDate_t_24940889");
        EvntDts_7.add_attribute("EndDt", "ComplexEventEndDate_t_492459837"); // 3
        EvntDts_7_set.insert("ComplexEventEndDate_t_492459837");
        all_values.push_back(EvntDts_7_set);
        all_compo_names.insert("EvntDts_7_set");

        {
          xml_element EvntTms_7{"EvntTms"};
          multiset<string> EvntTms_7_set;
          EvntTms_7.add_attribute("StartTm", "914736078"); // 4
          EvntTms_7_set.insert("914736078");
          EvntTms_7.add_attribute("EndTm", "1989833277"); // 4
          EvntTms_7_set.insert("1989833277");
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
    FinDetls_4.add_attribute("AgmtDesc", "AgreementDesc_t_1197740023"); // 1
    FinDetls_4_set.insert("AgreementDesc_t_1197740023");
    FinDetls_4.add_attribute("AgmtID", "AgreementID_t_828382529"); // 1
    FinDetls_4_set.insert("AgreementID_t_828382529");
    FinDetls_4.add_attribute("AgmtDt", "AgreementDate_t_45817722"); // 1
    FinDetls_4_set.insert("AgreementDate_t_45817722");
    FinDetls_4.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_4_set.insert("USD");
    FinDetls_4.add_attribute("TrmTyp", "2"); // 1
    FinDetls_4_set.insert("2");
    FinDetls_4.add_attribute("StartDt", "StartDate_t_501530694"); // 1
    FinDetls_4_set.insert("StartDate_t_501530694");
    FinDetls_4.add_attribute("EndDt", "EndDate_t_1230878495"); // 1
    FinDetls_4_set.insert("EndDate_t_1230878495");
    FinDetls_4.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_4_set.insert("0");
    FinDetls_4.add_attribute("MgnRatio", "20264327.530000"); // 1
    FinDetls_4_set.insert("20264327.530000");
    all_values.push_back(FinDetls_4_set);
    all_compo_names.insert("FinDetls_4_set");

    elt.add_element(FinDetls_4);
  } // end FinDetls
  { // Leg
    xml_element Leg_12{"Leg"};
    multiset<string> Leg_12_set;
    Leg_12.add_attribute("Sym", "LegSymbol_t_1552343016"); // 1
    Leg_12_set.insert("LegSymbol_t_1552343016");
    Leg_12.add_attribute("Sfx", "WI"); // 1
    Leg_12_set.insert("WI");
    Leg_12.add_attribute("ID", "LegSecurityID_t_809423107"); // 1
    Leg_12_set.insert("LegSecurityID_t_809423107");
    Leg_12.add_attribute("Src", "B"); // 1
    Leg_12_set.insert("B");
    Leg_12.add_attribute("Prod", "13"); // 1
    Leg_12_set.insert("13");
    Leg_12.add_attribute("CFI", "LegCFICode_t_987956756"); // 1
    Leg_12_set.insert("LegCFICode_t_987956756");
    Leg_12.add_attribute("SecTyp", "LOFC"); // 1
    Leg_12_set.insert("LOFC");
    Leg_12.add_attribute("SecSubTyp", "LegSecuritySubType_t_1248481523"); // 1
    Leg_12_set.insert("LegSecuritySubType_t_1248481523");
    Leg_12.add_attribute("MMY", "1582804895"); // 1
    Leg_12_set.insert("1582804895");
    Leg_12.add_attribute("Mat", "LegMaturityDate_t_27741640"); // 1
    Leg_12_set.insert("LegMaturityDate_t_27741640");
    Leg_12.add_attribute("MatTm", "1582921865"); // 1
    Leg_12_set.insert("1582921865");
    Leg_12.add_attribute("CpnPmt", "LegCouponPaymentDate_t_434217461"); // 1
    Leg_12_set.insert("LegCouponPaymentDate_t_434217461");
    Leg_12.add_attribute("Issued", "LegIssueDate_t_641648800"); // 1
    Leg_12_set.insert("LegIssueDate_t_641648800");
    Leg_12.add_attribute("RepoCollSecTyp", "2108390230"); // 1
    Leg_12_set.insert("2108390230");
    Leg_12.add_attribute("RepoTrm", "1484043596"); // 1
    Leg_12_set.insert("1484043596");
    Leg_12.add_attribute("RepoRt", "320888.070000"); // 1
    Leg_12_set.insert("320888.070000");
    Leg_12.add_attribute("Fctr", "21333311.190000"); // 1
    Leg_12_set.insert("21333311.190000");
    Leg_12.add_attribute("CrdRtg", "LegCreditRating_t_1976503434"); // 1
    Leg_12_set.insert("LegCreditRating_t_1976503434");
    Leg_12.add_attribute("Rgstry", "LegInstrRegistry_t_946824885"); // 1
    Leg_12_set.insert("LegInstrRegistry_t_946824885");
    Leg_12.add_attribute("Ctry", "1975680748"); // 1
    Leg_12_set.insert("1975680748");
    Leg_12.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1026759809"); // 1
    Leg_12_set.insert("LegStateOrProvinceOfIssue_t_1026759809");
    Leg_12.add_attribute("Lcl", "LegLocaleOfIssue_t_1775207414"); // 1
    Leg_12_set.insert("LegLocaleOfIssue_t_1775207414");
    Leg_12.add_attribute("Redeem", "LegRedemptionDate_t_2021498470"); // 1
    Leg_12_set.insert("LegRedemptionDate_t_2021498470");
    Leg_12.add_attribute("Strk", "1649877.380000"); // 1
    Leg_12_set.insert("1649877.380000");
    Leg_12.add_attribute("StrkCcy", "CHF"); // 1
    Leg_12_set.insert("CHF");
    Leg_12.add_attribute("OptA", "666518433"); // 1
    Leg_12_set.insert("666518433");
    Leg_12.add_attribute("Cmult", "20140185.720000"); // 1
    Leg_12_set.insert("20140185.720000");
    Leg_12.add_attribute("MultTyp", "1"); // 1
    Leg_12_set.insert("1");
    Leg_12.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_12_set.insert("3");
    Leg_12.add_attribute("UOM", "Bbl"); // 1
    Leg_12_set.insert("Bbl");
    Leg_12.add_attribute("UOMQty", "11066966.360000"); // 1
    Leg_12_set.insert("11066966.360000");
    Leg_12.add_attribute("PxUOM", "MWh"); // 1
    Leg_12_set.insert("MWh");
    Leg_12.add_attribute("PxUOMQty", "18652222.690000"); // 1
    Leg_12_set.insert("18652222.690000");
    Leg_12.add_attribute("TmUnit", "Yr"); // 1
    Leg_12_set.insert("Yr");
    Leg_12.add_attribute("ExerStyle", "2"); // 1
    Leg_12_set.insert("2");
    Leg_12.add_attribute("CpnRt", "7056953.780000"); // 1
    Leg_12_set.insert("7056953.780000");
    Leg_12.add_attribute("Exch", "LegSecurityExchange_t_1472028807"); // 1
    Leg_12_set.insert("LegSecurityExchange_t_1472028807");
    Leg_12.add_attribute("Issr", "LegIssuer_t_1713149032"); // 1
    Leg_12_set.insert("LegIssuer_t_1713149032");
    Leg_12.add_attribute("EncLegIssrLen", "141016625"); // 1
    Leg_12_set.insert("141016625");
    Leg_12.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1499770447"); // 1
    Leg_12_set.insert("EncodedLegIssuer_t_1499770447");
    Leg_12.add_attribute("Desc", "LegSecurityDesc_t_1148587249"); // 1
    Leg_12_set.insert("LegSecurityDesc_t_1148587249");
    Leg_12.add_attribute("EncLegSecDescLen", "575234086"); // 1
    Leg_12_set.insert("575234086");
    Leg_12.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2141419247"); // 1
    Leg_12_set.insert("EncodedLegSecurityDesc_t_2141419247");
    Leg_12.add_attribute("RatioQty", "11094938.310000"); // 1
    Leg_12_set.insert("11094938.310000");
    Leg_12.add_attribute("Side", "4"); // 1
    Leg_12_set.insert("4");
    Leg_12.add_attribute("Ccy", "JPY"); // 1
    Leg_12_set.insert("JPY");
    Leg_12.add_attribute("Pool", "LegPool_t_1888297469"); // 1
    Leg_12_set.insert("LegPool_t_1888297469");
    Leg_12.add_attribute("Dated", "LegDatedDate_t_972849292"); // 1
    Leg_12_set.insert("LegDatedDate_t_972849292");
    Leg_12.add_attribute("CSetMo", "923538402"); // 1
    Leg_12_set.insert("923538402");
    Leg_12.add_attribute("IntAcrl", "LegInterestAccrualDate_t_767573630"); // 1
    Leg_12_set.insert("LegInterestAccrualDate_t_767573630");
    Leg_12.add_attribute("PutCall", "600573059"); // 1
    Leg_12_set.insert("600573059");
    Leg_12.add_attribute("LegOptionRatio", "7975532.250000"); // 1
    Leg_12_set.insert("7975532.250000");
    Leg_12.add_attribute("Px", "9325613.690000"); // 1
    Leg_12_set.insert("9325613.690000");
    all_values.push_back(Leg_12_set);
    all_compo_names.insert("Leg_12_set");

    {
      xml_element LegAID_12{"LegAID"};
      multiset<string> LegAID_12_set;
      LegAID_12.add_attribute("SecAltID", "LegSecurityAltID_t_1383713136"); // 2
      LegAID_12_set.insert("LegSecurityAltID_t_1383713136");
      LegAID_12.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_12_set.insert("J");
      all_values.push_back(LegAID_12_set);
      all_compo_names.insert("LegAID_12_set");

      Leg_12.add_element(LegAID_12);
    }
    elt.add_element(Leg_12);
  } // end Leg
  { // Leg
    xml_element Leg_13{"Leg"};
    multiset<string> Leg_13_set;
    Leg_13.add_attribute("Sym", "LegSymbol_t_1599079802"); // 1
    Leg_13_set.insert("LegSymbol_t_1599079802");
    Leg_13.add_attribute("Sfx", "CD"); // 1
    Leg_13_set.insert("CD");
    Leg_13.add_attribute("ID", "LegSecurityID_t_1884612"); // 1
    Leg_13_set.insert("LegSecurityID_t_1884612");
    Leg_13.add_attribute("Src", "D"); // 1
    Leg_13_set.insert("D");
    Leg_13.add_attribute("Prod", "1"); // 1
    Leg_13_set.insert("1");
    Leg_13.add_attribute("CFI", "LegCFICode_t_1108581249"); // 1
    Leg_13_set.insert("LegCFICode_t_1108581249");
    Leg_13.add_attribute("SecTyp", "FOR"); // 1
    Leg_13_set.insert("FOR");
    Leg_13.add_attribute("SecSubTyp", "LegSecuritySubType_t_2023785843"); // 1
    Leg_13_set.insert("LegSecuritySubType_t_2023785843");
    Leg_13.add_attribute("MMY", "802818362"); // 1
    Leg_13_set.insert("802818362");
    Leg_13.add_attribute("Mat", "LegMaturityDate_t_1799092252"); // 1
    Leg_13_set.insert("LegMaturityDate_t_1799092252");
    Leg_13.add_attribute("MatTm", "581997573"); // 1
    Leg_13_set.insert("581997573");
    Leg_13.add_attribute("CpnPmt", "LegCouponPaymentDate_t_127363521"); // 1
    Leg_13_set.insert("LegCouponPaymentDate_t_127363521");
    Leg_13.add_attribute("Issued", "LegIssueDate_t_1364757636"); // 1
    Leg_13_set.insert("LegIssueDate_t_1364757636");
    Leg_13.add_attribute("RepoCollSecTyp", "723014198"); // 1
    Leg_13_set.insert("723014198");
    Leg_13.add_attribute("RepoTrm", "1627133969"); // 1
    Leg_13_set.insert("1627133969");
    Leg_13.add_attribute("RepoRt", "3658612.370000"); // 1
    Leg_13_set.insert("3658612.370000");
    Leg_13.add_attribute("Fctr", "12982482.850000"); // 1
    Leg_13_set.insert("12982482.850000");
    Leg_13.add_attribute("CrdRtg", "LegCreditRating_t_1621069568"); // 1
    Leg_13_set.insert("LegCreditRating_t_1621069568");
    Leg_13.add_attribute("Rgstry", "LegInstrRegistry_t_1475355068"); // 1
    Leg_13_set.insert("LegInstrRegistry_t_1475355068");
    Leg_13.add_attribute("Ctry", "1210042320"); // 1
    Leg_13_set.insert("1210042320");
    Leg_13.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1647093975"); // 1
    Leg_13_set.insert("LegStateOrProvinceOfIssue_t_1647093975");
    Leg_13.add_attribute("Lcl", "LegLocaleOfIssue_t_423212722"); // 1
    Leg_13_set.insert("LegLocaleOfIssue_t_423212722");
    Leg_13.add_attribute("Redeem", "LegRedemptionDate_t_950856141"); // 1
    Leg_13_set.insert("LegRedemptionDate_t_950856141");
    Leg_13.add_attribute("Strk", "4724596.200000"); // 1
    Leg_13_set.insert("4724596.200000");
    Leg_13.add_attribute("StrkCcy", "CAN"); // 1
    Leg_13_set.insert("CAN");
    Leg_13.add_attribute("OptA", "1073032679"); // 1
    Leg_13_set.insert("1073032679");
    Leg_13.add_attribute("Cmult", "21443043.500000"); // 1
    Leg_13_set.insert("21443043.500000");
    Leg_13.add_attribute("MultTyp", "2"); // 1
    Leg_13_set.insert("2");
    Leg_13.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_13_set.insert("2");
    Leg_13.add_attribute("UOM", "lbs"); // 1
    Leg_13_set.insert("lbs");
    Leg_13.add_attribute("UOMQty", "21025872.940000"); // 1
    Leg_13_set.insert("21025872.940000");
    Leg_13.add_attribute("PxUOM", "Bbl"); // 1
    Leg_13_set.insert("Bbl");
    Leg_13.add_attribute("PxUOMQty", "4462363.070000"); // 1
    Leg_13_set.insert("4462363.070000");
    Leg_13.add_attribute("TmUnit", "Yr"); // 1
    Leg_13_set.insert("Yr");
    Leg_13.add_attribute("ExerStyle", "0"); // 1
    Leg_13_set.insert("0");
    Leg_13.add_attribute("CpnRt", "15548175.560000"); // 1
    Leg_13_set.insert("15548175.560000");
    Leg_13.add_attribute("Exch", "LegSecurityExchange_t_1286592082"); // 1
    Leg_13_set.insert("LegSecurityExchange_t_1286592082");
    Leg_13.add_attribute("Issr", "LegIssuer_t_1594375996"); // 1
    Leg_13_set.insert("LegIssuer_t_1594375996");
    Leg_13.add_attribute("EncLegIssrLen", "210152270"); // 1
    Leg_13_set.insert("210152270");
    Leg_13.add_attribute("EncLegIssr", "EncodedLegIssuer_t_938200686"); // 1
    Leg_13_set.insert("EncodedLegIssuer_t_938200686");
    Leg_13.add_attribute("Desc", "LegSecurityDesc_t_28889922"); // 1
    Leg_13_set.insert("LegSecurityDesc_t_28889922");
    Leg_13.add_attribute("EncLegSecDescLen", "337515791"); // 1
    Leg_13_set.insert("337515791");
    Leg_13.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_155474675"); // 1
    Leg_13_set.insert("EncodedLegSecurityDesc_t_155474675");
    Leg_13.add_attribute("RatioQty", "7519041.200000"); // 1
    Leg_13_set.insert("7519041.200000");
    Leg_13.add_attribute("Side", "1"); // 1
    Leg_13_set.insert("1");
    Leg_13.add_attribute("Ccy", "CHF"); // 1
    Leg_13_set.insert("CHF");
    Leg_13.add_attribute("Pool", "LegPool_t_1438235681"); // 1
    Leg_13_set.insert("LegPool_t_1438235681");
    Leg_13.add_attribute("Dated", "LegDatedDate_t_1996690981"); // 1
    Leg_13_set.insert("LegDatedDate_t_1996690981");
    Leg_13.add_attribute("CSetMo", "1112711077"); // 1
    Leg_13_set.insert("1112711077");
    Leg_13.add_attribute("IntAcrl", "LegInterestAccrualDate_t_937846008"); // 1
    Leg_13_set.insert("LegInterestAccrualDate_t_937846008");
    Leg_13.add_attribute("PutCall", "272420055"); // 1
    Leg_13_set.insert("272420055");
    Leg_13.add_attribute("LegOptionRatio", "20635672.180000"); // 1
    Leg_13_set.insert("20635672.180000");
    Leg_13.add_attribute("Px", "14103056.280000"); // 1
    Leg_13_set.insert("14103056.280000");
    all_values.push_back(Leg_13_set);
    all_compo_names.insert("Leg_13_set");

    {
      xml_element LegAID_13{"LegAID"};
      multiset<string> LegAID_13_set;
      LegAID_13.add_attribute("SecAltID", "LegSecurityAltID_t_1619171180"); // 2
      LegAID_13_set.insert("LegSecurityAltID_t_1619171180");
      LegAID_13.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_13_set.insert("1");
      all_values.push_back(LegAID_13_set);
      all_compo_names.insert("LegAID_13_set");

      Leg_13.add_element(LegAID_13);
    }
    elt.add_element(Leg_13);
  } // end Leg
  { // Leg
    xml_element Leg_14{"Leg"};
    multiset<string> Leg_14_set;
    Leg_14.add_attribute("Sym", "LegSymbol_t_335854659"); // 1
    Leg_14_set.insert("LegSymbol_t_335854659");
    Leg_14.add_attribute("Sfx", "CD"); // 1
    Leg_14_set.insert("CD");
    Leg_14.add_attribute("ID", "LegSecurityID_t_2138020834"); // 1
    Leg_14_set.insert("LegSecurityID_t_2138020834");
    Leg_14.add_attribute("Src", "3"); // 1
    Leg_14_set.insert("3");
    Leg_14.add_attribute("Prod", "3"); // 1
    Leg_14_set.insert("3");
    Leg_14.add_attribute("CFI", "LegCFICode_t_2093124481"); // 1
    Leg_14_set.insert("LegCFICode_t_2093124481");
    Leg_14.add_attribute("SecTyp", "CP"); // 1
    Leg_14_set.insert("CP");
    Leg_14.add_attribute("SecSubTyp", "LegSecuritySubType_t_359096236"); // 1
    Leg_14_set.insert("LegSecuritySubType_t_359096236");
    Leg_14.add_attribute("MMY", "2045291819"); // 1
    Leg_14_set.insert("2045291819");
    Leg_14.add_attribute("Mat", "LegMaturityDate_t_1775217206"); // 1
    Leg_14_set.insert("LegMaturityDate_t_1775217206");
    Leg_14.add_attribute("MatTm", "1913913792"); // 1
    Leg_14_set.insert("1913913792");
    Leg_14.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1184400253"); // 1
    Leg_14_set.insert("LegCouponPaymentDate_t_1184400253");
    Leg_14.add_attribute("Issued", "LegIssueDate_t_1222109555"); // 1
    Leg_14_set.insert("LegIssueDate_t_1222109555");
    Leg_14.add_attribute("RepoCollSecTyp", "2124066062"); // 1
    Leg_14_set.insert("2124066062");
    Leg_14.add_attribute("RepoTrm", "2122600940"); // 1
    Leg_14_set.insert("2122600940");
    Leg_14.add_attribute("RepoRt", "12509994.770000"); // 1
    Leg_14_set.insert("12509994.770000");
    Leg_14.add_attribute("Fctr", "3140982.050000"); // 1
    Leg_14_set.insert("3140982.050000");
    Leg_14.add_attribute("CrdRtg", "LegCreditRating_t_130591967"); // 1
    Leg_14_set.insert("LegCreditRating_t_130591967");
    Leg_14.add_attribute("Rgstry", "LegInstrRegistry_t_2002903597"); // 1
    Leg_14_set.insert("LegInstrRegistry_t_2002903597");
    Leg_14.add_attribute("Ctry", "131264318"); // 1
    Leg_14_set.insert("131264318");
    Leg_14.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_651927879"); // 1
    Leg_14_set.insert("LegStateOrProvinceOfIssue_t_651927879");
    Leg_14.add_attribute("Lcl", "LegLocaleOfIssue_t_1905572355"); // 1
    Leg_14_set.insert("LegLocaleOfIssue_t_1905572355");
    Leg_14.add_attribute("Redeem", "LegRedemptionDate_t_1569499999"); // 1
    Leg_14_set.insert("LegRedemptionDate_t_1569499999");
    Leg_14.add_attribute("Strk", "5011352.120000"); // 1
    Leg_14_set.insert("5011352.120000");
    Leg_14.add_attribute("StrkCcy", "CAN"); // 1
    Leg_14_set.insert("CAN");
    Leg_14.add_attribute("OptA", "773555268"); // 1
    Leg_14_set.insert("773555268");
    Leg_14.add_attribute("Cmult", "7868833.550000"); // 1
    Leg_14_set.insert("7868833.550000");
    Leg_14.add_attribute("MultTyp", "0"); // 1
    Leg_14_set.insert("0");
    Leg_14.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_14_set.insert("0");
    Leg_14.add_attribute("UOM", "lbs"); // 1
    Leg_14_set.insert("lbs");
    Leg_14.add_attribute("UOMQty", "21060226.470000"); // 1
    Leg_14_set.insert("21060226.470000");
    Leg_14.add_attribute("PxUOM", "USD"); // 1
    Leg_14_set.insert("USD");
    Leg_14.add_attribute("PxUOMQty", "2644502.350000"); // 1
    Leg_14_set.insert("2644502.350000");
    Leg_14.add_attribute("TmUnit", "Wk"); // 1
    Leg_14_set.insert("Wk");
    Leg_14.add_attribute("ExerStyle", "2"); // 1
    Leg_14_set.insert("2");
    Leg_14.add_attribute("CpnRt", "2100910.680000"); // 1
    Leg_14_set.insert("2100910.680000");
    Leg_14.add_attribute("Exch", "LegSecurityExchange_t_660799231"); // 1
    Leg_14_set.insert("LegSecurityExchange_t_660799231");
    Leg_14.add_attribute("Issr", "LegIssuer_t_2133190848"); // 1
    Leg_14_set.insert("LegIssuer_t_2133190848");
    Leg_14.add_attribute("EncLegIssrLen", "107899240"); // 1
    Leg_14_set.insert("107899240");
    Leg_14.add_attribute("EncLegIssr", "EncodedLegIssuer_t_288532790"); // 1
    Leg_14_set.insert("EncodedLegIssuer_t_288532790");
    Leg_14.add_attribute("Desc", "LegSecurityDesc_t_1899620992"); // 1
    Leg_14_set.insert("LegSecurityDesc_t_1899620992");
    Leg_14.add_attribute("EncLegSecDescLen", "1292299493"); // 1
    Leg_14_set.insert("1292299493");
    Leg_14.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1510642345"); // 1
    Leg_14_set.insert("EncodedLegSecurityDesc_t_1510642345");
    Leg_14.add_attribute("RatioQty", "18762034.060000"); // 1
    Leg_14_set.insert("18762034.060000");
    Leg_14.add_attribute("Side", "2"); // 1
    Leg_14_set.insert("2");
    Leg_14.add_attribute("Ccy", "EUR"); // 1
    Leg_14_set.insert("EUR");
    Leg_14.add_attribute("Pool", "LegPool_t_1398008752"); // 1
    Leg_14_set.insert("LegPool_t_1398008752");
    Leg_14.add_attribute("Dated", "LegDatedDate_t_469578123"); // 1
    Leg_14_set.insert("LegDatedDate_t_469578123");
    Leg_14.add_attribute("CSetMo", "174082281"); // 1
    Leg_14_set.insert("174082281");
    Leg_14.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2049936632"); // 1
    Leg_14_set.insert("LegInterestAccrualDate_t_2049936632");
    Leg_14.add_attribute("PutCall", "227666830"); // 1
    Leg_14_set.insert("227666830");
    Leg_14.add_attribute("LegOptionRatio", "17435822.800000"); // 1
    Leg_14_set.insert("17435822.800000");
    Leg_14.add_attribute("Px", "4035881.960000"); // 1
    Leg_14_set.insert("4035881.960000");
    all_values.push_back(Leg_14_set);
    all_compo_names.insert("Leg_14_set");

    {
      xml_element LegAID_14{"LegAID"};
      multiset<string> LegAID_14_set;
      LegAID_14.add_attribute("SecAltID", "LegSecurityAltID_t_1098466615"); // 2
      LegAID_14_set.insert("LegSecurityAltID_t_1098466615");
      LegAID_14.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_14_set.insert("1");
      all_values.push_back(LegAID_14_set);
      all_compo_names.insert("LegAID_14_set");

      Leg_14.add_element(LegAID_14);
    }
    elt.add_element(Leg_14);
  } // end Leg
  { // Undly
    xml_element Undly_12{"Undly"};
    multiset<string> Undly_12_set;
    Undly_12.add_attribute("Sym", "UnderlyingSymbol_t_1885349970"); // 1
    Undly_12_set.insert("UnderlyingSymbol_t_1885349970");
    Undly_12.add_attribute("Sfx", "CD"); // 1
    Undly_12_set.insert("CD");
    Undly_12.add_attribute("ID", "UnderlyingSecurityID_t_1422386265"); // 1
    Undly_12_set.insert("UnderlyingSecurityID_t_1422386265");
    Undly_12.add_attribute("Src", "M"); // 1
    Undly_12_set.insert("M");
    Undly_12.add_attribute("Prod", "4"); // 1
    Undly_12_set.insert("4");
    Undly_12.add_attribute("CFI", "UnderlyingCFICode_t_1136137300"); // 1
    Undly_12_set.insert("UnderlyingCFICode_t_1136137300");
    Undly_12.add_attribute("SecTyp", "CAMM"); // 1
    Undly_12_set.insert("CAMM");
    Undly_12.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_140840157"); // 1
    Undly_12_set.insert("UnderlyingSecuritySubType_t_140840157");
    Undly_12.add_attribute("MMY", "762748264"); // 1
    Undly_12_set.insert("762748264");
    Undly_12.add_attribute("Mat", "UnderlyingMaturityDate_t_486320675"); // 1
    Undly_12_set.insert("UnderlyingMaturityDate_t_486320675");
    Undly_12.add_attribute("MatTm", "801639389"); // 1
    Undly_12_set.insert("801639389");
    Undly_12.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_748455464"); // 1
    Undly_12_set.insert("UnderlyingCouponPaymentDate_t_748455464");
    Undly_12.add_attribute("RestrctTyp", "XR"); // 1
    Undly_12_set.insert("XR");
    Undly_12.add_attribute("Snrty", "SR"); // 1
    Undly_12_set.insert("SR");
    Undly_12.add_attribute("NotlPctOut", "5005928.080000"); // 1
    Undly_12_set.insert("5005928.080000");
    Undly_12.add_attribute("OrigNotlPctOut", "18865194.080000"); // 1
    Undly_12_set.insert("18865194.080000");
    Undly_12.add_attribute("AttchPnt", "4533308.760000"); // 1
    Undly_12_set.insert("4533308.760000");
    Undly_12.add_attribute("DetchPnt", "2293125.660000"); // 1
    Undly_12_set.insert("2293125.660000");
    Undly_12.add_attribute("Issued", "UnderlyingIssueDate_t_1006452546"); // 1
    Undly_12_set.insert("UnderlyingIssueDate_t_1006452546");
    Undly_12.add_attribute("RepoCollSecTyp", "1067489050"); // 1
    Undly_12_set.insert("1067489050");
    Undly_12.add_attribute("RepoTrm", "272130529"); // 1
    Undly_12_set.insert("272130529");
    Undly_12.add_attribute("RepoRt", "2569776.500000"); // 1
    Undly_12_set.insert("2569776.500000");
    Undly_12.add_attribute("Fctr", "15370671.730000"); // 1
    Undly_12_set.insert("15370671.730000");
    Undly_12.add_attribute("CrdRtg", "UnderlyingCreditRating_t_446212811"); // 1
    Undly_12_set.insert("UnderlyingCreditRating_t_446212811");
    Undly_12.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_159430634"); // 1
    Undly_12_set.insert("UnderlyingInstrRegistry_t_159430634");
    Undly_12.add_attribute("Ctry", "1764734004"); // 1
    Undly_12_set.insert("1764734004");
    Undly_12.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_42311443"); // 1
    Undly_12_set.insert("UnderlyingStateOrProvinceOfIssue_t_42311443");
    Undly_12.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_563018831"); // 1
    Undly_12_set.insert("UnderlyingLocaleOfIssue_t_563018831");
    Undly_12.add_attribute("Redeem", "UnderlyingRedemptionDate_t_715716971"); // 1
    Undly_12_set.insert("UnderlyingRedemptionDate_t_715716971");
    Undly_12.add_attribute("StrkPx", "21457560.830000"); // 1
    Undly_12_set.insert("21457560.830000");
    Undly_12.add_attribute("StrkCcy", "CHF"); // 1
    Undly_12_set.insert("CHF");
    Undly_12.add_attribute("OptA", "1724401415"); // 1
    Undly_12_set.insert("1724401415");
    Undly_12.add_attribute("Mult", "10150649.120000"); // 1
    Undly_12_set.insert("10150649.120000");
    Undly_12.add_attribute("MultTyp", "0"); // 1
    Undly_12_set.insert("0");
    Undly_12.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_12_set.insert("2");
    Undly_12.add_attribute("UOM", "tn"); // 1
    Undly_12_set.insert("tn");
    Undly_12.add_attribute("UOMQty", "7415922.700000"); // 1
    Undly_12_set.insert("7415922.700000");
    Undly_12.add_attribute("PxUOM", "USD"); // 1
    Undly_12_set.insert("USD");
    Undly_12.add_attribute("PxUOMQty", "7664668.280000"); // 1
    Undly_12_set.insert("7664668.280000");
    Undly_12.add_attribute("TmUnit", "S"); // 1
    Undly_12_set.insert("S");
    Undly_12.add_attribute("ExerStyle", "1"); // 1
    Undly_12_set.insert("1");
    Undly_12.add_attribute("CpnRt", "15149222.920000"); // 1
    Undly_12_set.insert("15149222.920000");
    Undly_12.add_attribute("Exch", "UnderlyingSecurityExchange_t_1822132860"); // 1
    Undly_12_set.insert("UnderlyingSecurityExchange_t_1822132860");
    Undly_12.add_attribute("Issr", "UnderlyingIssuer_t_1146753824"); // 1
    Undly_12_set.insert("UnderlyingIssuer_t_1146753824");
    Undly_12.add_attribute("EncUndIssrLen", "2015515100"); // 1
    Undly_12_set.insert("2015515100");
    Undly_12.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1561168621"); // 1
    Undly_12_set.insert("EncodedUnderlyingIssuer_t_1561168621");
    Undly_12.add_attribute("Desc", "UnderlyingSecurityDesc_t_1600084700"); // 1
    Undly_12_set.insert("UnderlyingSecurityDesc_t_1600084700");
    Undly_12.add_attribute("EncUndSecDescLen", "97344018"); // 1
    Undly_12_set.insert("97344018");
    Undly_12.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_420137519"); // 1
    Undly_12_set.insert("EncodedUnderlyingSecurityDesc_t_420137519");
    Undly_12.add_attribute("CPPgm", "UnderlyingCPProgram_t_520090102"); // 1
    Undly_12_set.insert("UnderlyingCPProgram_t_520090102");
    Undly_12.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_369474548"); // 1
    Undly_12_set.insert("UnderlyingCPRegType_t_369474548");
    Undly_12.add_attribute("AllocPct", "6771151.690000"); // 1
    Undly_12_set.insert("6771151.690000");
    Undly_12.add_attribute("Ccy", "EUR"); // 1
    Undly_12_set.insert("EUR");
    Undly_12.add_attribute("Qty", "8365458.040000"); // 1
    Undly_12_set.insert("8365458.040000");
    Undly_12.add_attribute("SettlTyp", "4"); // 1
    Undly_12_set.insert("4");
    Undly_12.add_attribute("CashAmt", "UnderlyingCashAmount_t_857998802"); // 1
    Undly_12_set.insert("UnderlyingCashAmount_t_857998802");
    Undly_12.add_attribute("CashTyp", "DIFF"); // 1
    Undly_12_set.insert("DIFF");
    Undly_12.add_attribute("Px", "2426409.550000"); // 1
    Undly_12_set.insert("2426409.550000");
    Undly_12.add_attribute("DirtPx", "8562712.380000"); // 1
    Undly_12_set.insert("8562712.380000");
    Undly_12.add_attribute("EndPx", "9922432.820000"); // 1
    Undly_12_set.insert("9922432.820000");
    Undly_12.add_attribute("StartVal", "UnderlyingStartValue_t_696224248"); // 1
    Undly_12_set.insert("UnderlyingStartValue_t_696224248");
    Undly_12.add_attribute("CurVal", "UnderlyingCurrentValue_t_433189005"); // 1
    Undly_12_set.insert("UnderlyingCurrentValue_t_433189005");
    Undly_12.add_attribute("EndVal", "UnderlyingEndValue_t_2007308195"); // 1
    Undly_12_set.insert("UnderlyingEndValue_t_2007308195");
    Undly_12.add_attribute("AdjQty", "11615869.120000"); // 1
    Undly_12_set.insert("11615869.120000");
    Undly_12.add_attribute("FxRate", "16947747.520000"); // 1
    Undly_12_set.insert("16947747.520000");
    Undly_12.add_attribute("FxRateCalc", "D"); // 1
    Undly_12_set.insert("D");
    Undly_12.add_attribute("CapValu", "UnderlyingCapValue_t_1903179182"); // 1
    Undly_12_set.insert("UnderlyingCapValue_t_1903179182");
    Undly_12.add_attribute("SetMeth", "UnderlyingSettlMethod_t_949717009"); // 1
    Undly_12_set.insert("UnderlyingSettlMethod_t_949717009");
    Undly_12.add_attribute("PutCall", "630009940"); // 1
    Undly_12_set.insert("630009940");
    all_values.push_back(Undly_12_set);
    all_compo_names.insert("Undly_12_set");

    {
      xml_element UndAID_12{"UndAID"};
      multiset<string> UndAID_12_set;
      UndAID_12.add_attribute("AltID", "UnderlyingSecurityAltID_t_983608480"); // 2
      UndAID_12_set.insert("UnderlyingSecurityAltID_t_983608480");
      UndAID_12.add_attribute("AltIDSrc", "K"); // 2
      UndAID_12_set.insert("K");
      all_values.push_back(UndAID_12_set);
      all_compo_names.insert("UndAID_12_set");

      Undly_12.add_element(UndAID_12);
    }
    {
      xml_element Stip_19{"Stip"};
      multiset<string> Stip_19_set;
      Stip_19.add_attribute("Typ", "LEAVEQTY"); // 2
      Stip_19_set.insert("LEAVEQTY");
      Stip_19.add_attribute("Val", "UnderlyingStipValue_t_658257692"); // 2
      Stip_19_set.insert("UnderlyingStipValue_t_658257692");
      all_values.push_back(Stip_19_set);
      all_compo_names.insert("Stip_19_set");

      Undly_12.add_element(Stip_19);
    }
    {
      xml_element Pty_76{"Pty"};
      multiset<string> Pty_76_set;
      Pty_76.add_attribute("ID", "UnderlyingInstrumentPartyID_t_5568831"); // 2
      Pty_76_set.insert("UnderlyingInstrumentPartyID_t_5568831");
      Pty_76.add_attribute("Src", "G"); // 2
      Pty_76_set.insert("G");
      Pty_76.add_attribute("R", "33"); // 2
      Pty_76_set.insert("33");
      all_values.push_back(Pty_76_set);
      all_compo_names.insert("Pty_76_set");

      {
        xml_element Sub_76{"Sub"};
        multiset<string> Sub_76_set;
        Sub_76.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1605653531"); // 3
        Sub_76_set.insert("UnderlyingInstrumentPartySubID_t_1605653531");
        Sub_76.add_attribute("Typ", "18"); // 3
        Sub_76_set.insert("18");
        all_values.push_back(Sub_76_set);
        all_compo_names.insert("Sub_76_set");

        Pty_76.add_element(Sub_76);
      }
      Undly_12.add_element(Pty_76);
    }
    elt.add_element(Undly_12);
  } // end Undly
  { // Undly
    xml_element Undly_13{"Undly"};
    multiset<string> Undly_13_set;
    Undly_13.add_attribute("Sym", "UnderlyingSymbol_t_492080184"); // 1
    Undly_13_set.insert("UnderlyingSymbol_t_492080184");
    Undly_13.add_attribute("Sfx", "CD"); // 1
    Undly_13_set.insert("CD");
    Undly_13.add_attribute("ID", "UnderlyingSecurityID_t_332298603"); // 1
    Undly_13_set.insert("UnderlyingSecurityID_t_332298603");
    Undly_13.add_attribute("Src", "9"); // 1
    Undly_13_set.insert("9");
    Undly_13.add_attribute("Prod", "5"); // 1
    Undly_13_set.insert("5");
    Undly_13.add_attribute("CFI", "UnderlyingCFICode_t_1147985962"); // 1
    Undly_13_set.insert("UnderlyingCFICode_t_1147985962");
    Undly_13.add_attribute("SecTyp", "OPT"); // 1
    Undly_13_set.insert("OPT");
    Undly_13.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1562341246"); // 1
    Undly_13_set.insert("UnderlyingSecuritySubType_t_1562341246");
    Undly_13.add_attribute("MMY", "2005984765"); // 1
    Undly_13_set.insert("2005984765");
    Undly_13.add_attribute("Mat", "UnderlyingMaturityDate_t_1257822145"); // 1
    Undly_13_set.insert("UnderlyingMaturityDate_t_1257822145");
    Undly_13.add_attribute("MatTm", "1804982201"); // 1
    Undly_13_set.insert("1804982201");
    Undly_13.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_714772355"); // 1
    Undly_13_set.insert("UnderlyingCouponPaymentDate_t_714772355");
    Undly_13.add_attribute("RestrctTyp", "XR"); // 1
    Undly_13_set.insert("XR");
    Undly_13.add_attribute("Snrty", "SR"); // 1
    Undly_13_set.insert("SR");
    Undly_13.add_attribute("NotlPctOut", "11479613.600000"); // 1
    Undly_13_set.insert("11479613.600000");
    Undly_13.add_attribute("OrigNotlPctOut", "21098899.740000"); // 1
    Undly_13_set.insert("21098899.740000");
    Undly_13.add_attribute("AttchPnt", "15153097.130000"); // 1
    Undly_13_set.insert("15153097.130000");
    Undly_13.add_attribute("DetchPnt", "6952524.650000"); // 1
    Undly_13_set.insert("6952524.650000");
    Undly_13.add_attribute("Issued", "UnderlyingIssueDate_t_1973433086"); // 1
    Undly_13_set.insert("UnderlyingIssueDate_t_1973433086");
    Undly_13.add_attribute("RepoCollSecTyp", "1271005247"); // 1
    Undly_13_set.insert("1271005247");
    Undly_13.add_attribute("RepoTrm", "1644969474"); // 1
    Undly_13_set.insert("1644969474");
    Undly_13.add_attribute("RepoRt", "4559593.780000"); // 1
    Undly_13_set.insert("4559593.780000");
    Undly_13.add_attribute("Fctr", "1071300.790000"); // 1
    Undly_13_set.insert("1071300.790000");
    Undly_13.add_attribute("CrdRtg", "UnderlyingCreditRating_t_503784480"); // 1
    Undly_13_set.insert("UnderlyingCreditRating_t_503784480");
    Undly_13.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_453407962"); // 1
    Undly_13_set.insert("UnderlyingInstrRegistry_t_453407962");
    Undly_13.add_attribute("Ctry", "765387772"); // 1
    Undly_13_set.insert("765387772");
    Undly_13.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_509353311"); // 1
    Undly_13_set.insert("UnderlyingStateOrProvinceOfIssue_t_509353311");
    Undly_13.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_318887999"); // 1
    Undly_13_set.insert("UnderlyingLocaleOfIssue_t_318887999");
    Undly_13.add_attribute("Redeem", "UnderlyingRedemptionDate_t_837330437"); // 1
    Undly_13_set.insert("UnderlyingRedemptionDate_t_837330437");
    Undly_13.add_attribute("StrkPx", "21150068.430000"); // 1
    Undly_13_set.insert("21150068.430000");
    Undly_13.add_attribute("StrkCcy", "USD"); // 1
    Undly_13_set.insert("USD");
    Undly_13.add_attribute("OptA", "2093266829"); // 1
    Undly_13_set.insert("2093266829");
    Undly_13.add_attribute("Mult", "6140106.580000"); // 1
    Undly_13_set.insert("6140106.580000");
    Undly_13.add_attribute("MultTyp", "0"); // 1
    Undly_13_set.insert("0");
    Undly_13.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_13_set.insert("3");
    Undly_13.add_attribute("UOM", "oz_tr"); // 1
    Undly_13_set.insert("oz_tr");
    Undly_13.add_attribute("UOMQty", "2093798.380000"); // 1
    Undly_13_set.insert("2093798.380000");
    Undly_13.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_13_set.insert("MMBtu");
    Undly_13.add_attribute("PxUOMQty", "16204977.380000"); // 1
    Undly_13_set.insert("16204977.380000");
    Undly_13.add_attribute("TmUnit", "H"); // 1
    Undly_13_set.insert("H");
    Undly_13.add_attribute("ExerStyle", "1"); // 1
    Undly_13_set.insert("1");
    Undly_13.add_attribute("CpnRt", "1877864.450000"); // 1
    Undly_13_set.insert("1877864.450000");
    Undly_13.add_attribute("Exch", "UnderlyingSecurityExchange_t_1569783762"); // 1
    Undly_13_set.insert("UnderlyingSecurityExchange_t_1569783762");
    Undly_13.add_attribute("Issr", "UnderlyingIssuer_t_1407279395"); // 1
    Undly_13_set.insert("UnderlyingIssuer_t_1407279395");
    Undly_13.add_attribute("EncUndIssrLen", "1335747805"); // 1
    Undly_13_set.insert("1335747805");
    Undly_13.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1532190089"); // 1
    Undly_13_set.insert("EncodedUnderlyingIssuer_t_1532190089");
    Undly_13.add_attribute("Desc", "UnderlyingSecurityDesc_t_775105460"); // 1
    Undly_13_set.insert("UnderlyingSecurityDesc_t_775105460");
    Undly_13.add_attribute("EncUndSecDescLen", "2031000270"); // 1
    Undly_13_set.insert("2031000270");
    Undly_13.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1358139527"); // 1
    Undly_13_set.insert("EncodedUnderlyingSecurityDesc_t_1358139527");
    Undly_13.add_attribute("CPPgm", "UnderlyingCPProgram_t_2046110707"); // 1
    Undly_13_set.insert("UnderlyingCPProgram_t_2046110707");
    Undly_13.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1528486096"); // 1
    Undly_13_set.insert("UnderlyingCPRegType_t_1528486096");
    Undly_13.add_attribute("AllocPct", "18140989.050000"); // 1
    Undly_13_set.insert("18140989.050000");
    Undly_13.add_attribute("Ccy", "CAN"); // 1
    Undly_13_set.insert("CAN");
    Undly_13.add_attribute("Qty", "1200232.190000"); // 1
    Undly_13_set.insert("1200232.190000");
    Undly_13.add_attribute("SettlTyp", "5"); // 1
    Undly_13_set.insert("5");
    Undly_13.add_attribute("CashAmt", "UnderlyingCashAmount_t_394140240"); // 1
    Undly_13_set.insert("UnderlyingCashAmount_t_394140240");
    Undly_13.add_attribute("CashTyp", "DIFF"); // 1
    Undly_13_set.insert("DIFF");
    Undly_13.add_attribute("Px", "16084753.480000"); // 1
    Undly_13_set.insert("16084753.480000");
    Undly_13.add_attribute("DirtPx", "3616634.350000"); // 1
    Undly_13_set.insert("3616634.350000");
    Undly_13.add_attribute("EndPx", "7206232.740000"); // 1
    Undly_13_set.insert("7206232.740000");
    Undly_13.add_attribute("StartVal", "UnderlyingStartValue_t_790402322"); // 1
    Undly_13_set.insert("UnderlyingStartValue_t_790402322");
    Undly_13.add_attribute("CurVal", "UnderlyingCurrentValue_t_307446616"); // 1
    Undly_13_set.insert("UnderlyingCurrentValue_t_307446616");
    Undly_13.add_attribute("EndVal", "UnderlyingEndValue_t_1334633932"); // 1
    Undly_13_set.insert("UnderlyingEndValue_t_1334633932");
    Undly_13.add_attribute("AdjQty", "11415246.500000"); // 1
    Undly_13_set.insert("11415246.500000");
    Undly_13.add_attribute("FxRate", "1411634.110000"); // 1
    Undly_13_set.insert("1411634.110000");
    Undly_13.add_attribute("FxRateCalc", "D"); // 1
    Undly_13_set.insert("D");
    Undly_13.add_attribute("CapValu", "UnderlyingCapValue_t_1350904488"); // 1
    Undly_13_set.insert("UnderlyingCapValue_t_1350904488");
    Undly_13.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1537221452"); // 1
    Undly_13_set.insert("UnderlyingSettlMethod_t_1537221452");
    Undly_13.add_attribute("PutCall", "422160995"); // 1
    Undly_13_set.insert("422160995");
    all_values.push_back(Undly_13_set);
    all_compo_names.insert("Undly_13_set");

    {
      xml_element UndAID_13{"UndAID"};
      multiset<string> UndAID_13_set;
      UndAID_13.add_attribute("AltID", "UnderlyingSecurityAltID_t_670622823"); // 2
      UndAID_13_set.insert("UnderlyingSecurityAltID_t_670622823");
      UndAID_13.add_attribute("AltIDSrc", "9"); // 2
      UndAID_13_set.insert("9");
      all_values.push_back(UndAID_13_set);
      all_compo_names.insert("UndAID_13_set");

      Undly_13.add_element(UndAID_13);
    }
    {
      xml_element Stip_20{"Stip"};
      multiset<string> Stip_20_set;
      Stip_20.add_attribute("Typ", "ABS"); // 2
      Stip_20_set.insert("ABS");
      Stip_20.add_attribute("Val", "UnderlyingStipValue_t_92922938"); // 2
      Stip_20_set.insert("UnderlyingStipValue_t_92922938");
      all_values.push_back(Stip_20_set);
      all_compo_names.insert("Stip_20_set");

      Undly_13.add_element(Stip_20);
    }
    {
      xml_element Pty_77{"Pty"};
      multiset<string> Pty_77_set;
      Pty_77.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1850573793"); // 2
      Pty_77_set.insert("UnderlyingInstrumentPartyID_t_1850573793");
      Pty_77.add_attribute("Src", "7"); // 2
      Pty_77_set.insert("7");
      Pty_77.add_attribute("R", "58"); // 2
      Pty_77_set.insert("58");
      all_values.push_back(Pty_77_set);
      all_compo_names.insert("Pty_77_set");

      {
        xml_element Sub_77{"Sub"};
        multiset<string> Sub_77_set;
        Sub_77.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_478195605"); // 3
        Sub_77_set.insert("UnderlyingInstrumentPartySubID_t_478195605");
        Sub_77.add_attribute("Typ", "6"); // 3
        Sub_77_set.insert("6");
        all_values.push_back(Sub_77_set);
        all_compo_names.insert("Sub_77_set");

        Pty_77.add_element(Sub_77);
      }
      Undly_13.add_element(Pty_77);
    }
    elt.add_element(Undly_13);
  } // end Undly
  { // Undly
    xml_element Undly_14{"Undly"};
    multiset<string> Undly_14_set;
    Undly_14.add_attribute("Sym", "UnderlyingSymbol_t_835768906"); // 1
    Undly_14_set.insert("UnderlyingSymbol_t_835768906");
    Undly_14.add_attribute("Sfx", "WI"); // 1
    Undly_14_set.insert("WI");
    Undly_14.add_attribute("ID", "UnderlyingSecurityID_t_1210214317"); // 1
    Undly_14_set.insert("UnderlyingSecurityID_t_1210214317");
    Undly_14.add_attribute("Src", "I"); // 1
    Undly_14_set.insert("I");
    Undly_14.add_attribute("Prod", "6"); // 1
    Undly_14_set.insert("6");
    Undly_14.add_attribute("CFI", "UnderlyingCFICode_t_1095001246"); // 1
    Undly_14_set.insert("UnderlyingCFICode_t_1095001246");
    Undly_14.add_attribute("SecTyp", "CASH"); // 1
    Undly_14_set.insert("CASH");
    Undly_14.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1153724715"); // 1
    Undly_14_set.insert("UnderlyingSecuritySubType_t_1153724715");
    Undly_14.add_attribute("MMY", "1489141486"); // 1
    Undly_14_set.insert("1489141486");
    Undly_14.add_attribute("Mat", "UnderlyingMaturityDate_t_1061318601"); // 1
    Undly_14_set.insert("UnderlyingMaturityDate_t_1061318601");
    Undly_14.add_attribute("MatTm", "614716415"); // 1
    Undly_14_set.insert("614716415");
    Undly_14.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1850804922"); // 1
    Undly_14_set.insert("UnderlyingCouponPaymentDate_t_1850804922");
    Undly_14.add_attribute("RestrctTyp", "XR"); // 1
    Undly_14_set.insert("XR");
    Undly_14.add_attribute("Snrty", "SB"); // 1
    Undly_14_set.insert("SB");
    Undly_14.add_attribute("NotlPctOut", "107678.900000"); // 1
    Undly_14_set.insert("107678.900000");
    Undly_14.add_attribute("OrigNotlPctOut", "9690921.600000"); // 1
    Undly_14_set.insert("9690921.600000");
    Undly_14.add_attribute("AttchPnt", "3991597.400000"); // 1
    Undly_14_set.insert("3991597.400000");
    Undly_14.add_attribute("DetchPnt", "1519313.020000"); // 1
    Undly_14_set.insert("1519313.020000");
    Undly_14.add_attribute("Issued", "UnderlyingIssueDate_t_1918239065"); // 1
    Undly_14_set.insert("UnderlyingIssueDate_t_1918239065");
    Undly_14.add_attribute("RepoCollSecTyp", "1750064229"); // 1
    Undly_14_set.insert("1750064229");
    Undly_14.add_attribute("RepoTrm", "1689152754"); // 1
    Undly_14_set.insert("1689152754");
    Undly_14.add_attribute("RepoRt", "1929164.130000"); // 1
    Undly_14_set.insert("1929164.130000");
    Undly_14.add_attribute("Fctr", "2732034.040000"); // 1
    Undly_14_set.insert("2732034.040000");
    Undly_14.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2132447153"); // 1
    Undly_14_set.insert("UnderlyingCreditRating_t_2132447153");
    Undly_14.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_802863853"); // 1
    Undly_14_set.insert("UnderlyingInstrRegistry_t_802863853");
    Undly_14.add_attribute("Ctry", "366126342"); // 1
    Undly_14_set.insert("366126342");
    Undly_14.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1835537298"); // 1
    Undly_14_set.insert("UnderlyingStateOrProvinceOfIssue_t_1835537298");
    Undly_14.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_601075451"); // 1
    Undly_14_set.insert("UnderlyingLocaleOfIssue_t_601075451");
    Undly_14.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1991239369"); // 1
    Undly_14_set.insert("UnderlyingRedemptionDate_t_1991239369");
    Undly_14.add_attribute("StrkPx", "1662492.560000"); // 1
    Undly_14_set.insert("1662492.560000");
    Undly_14.add_attribute("StrkCcy", "CHF"); // 1
    Undly_14_set.insert("CHF");
    Undly_14.add_attribute("OptA", "543071921"); // 1
    Undly_14_set.insert("543071921");
    Undly_14.add_attribute("Mult", "14930179.890000"); // 1
    Undly_14_set.insert("14930179.890000");
    Undly_14.add_attribute("MultTyp", "2"); // 1
    Undly_14_set.insert("2");
    Undly_14.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_14_set.insert("0");
    Undly_14.add_attribute("UOM", "Bu"); // 1
    Undly_14_set.insert("Bu");
    Undly_14.add_attribute("UOMQty", "18043161.730000"); // 1
    Undly_14_set.insert("18043161.730000");
    Undly_14.add_attribute("PxUOM", "Bu"); // 1
    Undly_14_set.insert("Bu");
    Undly_14.add_attribute("PxUOMQty", "19296770.730000"); // 1
    Undly_14_set.insert("19296770.730000");
    Undly_14.add_attribute("TmUnit", "S"); // 1
    Undly_14_set.insert("S");
    Undly_14.add_attribute("ExerStyle", "0"); // 1
    Undly_14_set.insert("0");
    Undly_14.add_attribute("CpnRt", "16329983.470000"); // 1
    Undly_14_set.insert("16329983.470000");
    Undly_14.add_attribute("Exch", "UnderlyingSecurityExchange_t_352609354"); // 1
    Undly_14_set.insert("UnderlyingSecurityExchange_t_352609354");
    Undly_14.add_attribute("Issr", "UnderlyingIssuer_t_1951727945"); // 1
    Undly_14_set.insert("UnderlyingIssuer_t_1951727945");
    Undly_14.add_attribute("EncUndIssrLen", "1643766238"); // 1
    Undly_14_set.insert("1643766238");
    Undly_14.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1321701514"); // 1
    Undly_14_set.insert("EncodedUnderlyingIssuer_t_1321701514");
    Undly_14.add_attribute("Desc", "UnderlyingSecurityDesc_t_203404038"); // 1
    Undly_14_set.insert("UnderlyingSecurityDesc_t_203404038");
    Undly_14.add_attribute("EncUndSecDescLen", "1795697540"); // 1
    Undly_14_set.insert("1795697540");
    Undly_14.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1092456931"); // 1
    Undly_14_set.insert("EncodedUnderlyingSecurityDesc_t_1092456931");
    Undly_14.add_attribute("CPPgm", "UnderlyingCPProgram_t_1953468267"); // 1
    Undly_14_set.insert("UnderlyingCPProgram_t_1953468267");
    Undly_14.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1337366646"); // 1
    Undly_14_set.insert("UnderlyingCPRegType_t_1337366646");
    Undly_14.add_attribute("AllocPct", "12853733.440000"); // 1
    Undly_14_set.insert("12853733.440000");
    Undly_14.add_attribute("Ccy", "CHF"); // 1
    Undly_14_set.insert("CHF");
    Undly_14.add_attribute("Qty", "20882371.980000"); // 1
    Undly_14_set.insert("20882371.980000");
    Undly_14.add_attribute("SettlTyp", "2"); // 1
    Undly_14_set.insert("2");
    Undly_14.add_attribute("CashAmt", "UnderlyingCashAmount_t_1010383802"); // 1
    Undly_14_set.insert("UnderlyingCashAmount_t_1010383802");
    Undly_14.add_attribute("CashTyp", "DIFF"); // 1
    Undly_14_set.insert("DIFF");
    Undly_14.add_attribute("Px", "2890700.870000"); // 1
    Undly_14_set.insert("2890700.870000");
    Undly_14.add_attribute("DirtPx", "11766330.580000"); // 1
    Undly_14_set.insert("11766330.580000");
    Undly_14.add_attribute("EndPx", "8246326.730000"); // 1
    Undly_14_set.insert("8246326.730000");
    Undly_14.add_attribute("StartVal", "UnderlyingStartValue_t_968594715"); // 1
    Undly_14_set.insert("UnderlyingStartValue_t_968594715");
    Undly_14.add_attribute("CurVal", "UnderlyingCurrentValue_t_1719704979"); // 1
    Undly_14_set.insert("UnderlyingCurrentValue_t_1719704979");
    Undly_14.add_attribute("EndVal", "UnderlyingEndValue_t_170167014"); // 1
    Undly_14_set.insert("UnderlyingEndValue_t_170167014");
    Undly_14.add_attribute("AdjQty", "30198.570000"); // 1
    Undly_14_set.insert("30198.570000");
    Undly_14.add_attribute("FxRate", "4978730.560000"); // 1
    Undly_14_set.insert("4978730.560000");
    Undly_14.add_attribute("FxRateCalc", "D"); // 1
    Undly_14_set.insert("D");
    Undly_14.add_attribute("CapValu", "UnderlyingCapValue_t_1807336030"); // 1
    Undly_14_set.insert("UnderlyingCapValue_t_1807336030");
    Undly_14.add_attribute("SetMeth", "UnderlyingSettlMethod_t_429765848"); // 1
    Undly_14_set.insert("UnderlyingSettlMethod_t_429765848");
    Undly_14.add_attribute("PutCall", "392896027"); // 1
    Undly_14_set.insert("392896027");
    all_values.push_back(Undly_14_set);
    all_compo_names.insert("Undly_14_set");

    {
      xml_element UndAID_14{"UndAID"};
      multiset<string> UndAID_14_set;
      UndAID_14.add_attribute("AltID", "UnderlyingSecurityAltID_t_378003509"); // 2
      UndAID_14_set.insert("UnderlyingSecurityAltID_t_378003509");
      UndAID_14.add_attribute("AltIDSrc", "8"); // 2
      UndAID_14_set.insert("8");
      all_values.push_back(UndAID_14_set);
      all_compo_names.insert("UndAID_14_set");

      Undly_14.add_element(UndAID_14);
    }
    {
      xml_element Stip_21{"Stip"};
      multiset<string> Stip_21_set;
      Stip_21.add_attribute("Typ", "WAC"); // 2
      Stip_21_set.insert("WAC");
      Stip_21.add_attribute("Val", "UnderlyingStipValue_t_730612863"); // 2
      Stip_21_set.insert("UnderlyingStipValue_t_730612863");
      all_values.push_back(Stip_21_set);
      all_compo_names.insert("Stip_21_set");

      Undly_14.add_element(Stip_21);
    }
    {
      xml_element Pty_78{"Pty"};
      multiset<string> Pty_78_set;
      Pty_78.add_attribute("ID", "UnderlyingInstrumentPartyID_t_780619353"); // 2
      Pty_78_set.insert("UnderlyingInstrumentPartyID_t_780619353");
      Pty_78.add_attribute("Src", "H"); // 2
      Pty_78_set.insert("H");
      Pty_78.add_attribute("R", "10"); // 2
      Pty_78_set.insert("10");
      all_values.push_back(Pty_78_set);
      all_compo_names.insert("Pty_78_set");

      {
        xml_element Sub_78{"Sub"};
        multiset<string> Sub_78_set;
        Sub_78.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_984023391"); // 3
        Sub_78_set.insert("UnderlyingInstrumentPartySubID_t_984023391");
        Sub_78.add_attribute("Typ", "3"); // 3
        Sub_78_set.insert("3");
        all_values.push_back(Sub_78_set);
        all_compo_names.insert("Sub_78_set");

        Pty_78.add_element(Sub_78);
      }
      Undly_14.add_element(Pty_78);
    }
    elt.add_element(Undly_14);
  } // end Undly
  { // TrdRegTS
    xml_element TrdRegTS_3{"TrdRegTS"};
    multiset<string> TrdRegTS_3_set;
    TrdRegTS_3.add_attribute("TS", "TrdRegTimestamp_t_790008010"); // 1
    TrdRegTS_3_set.insert("TrdRegTimestamp_t_790008010");
    TrdRegTS_3.add_attribute("Typ", "5"); // 1
    TrdRegTS_3_set.insert("5");
    TrdRegTS_3.add_attribute("Src", "TrdRegTimestampOrigin_t_135177357"); // 1
    TrdRegTS_3_set.insert("TrdRegTimestampOrigin_t_135177357");
    TrdRegTS_3.add_attribute("DskTyp", "D"); // 1
    TrdRegTS_3_set.insert("D");
    TrdRegTS_3.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_3_set.insert("1");
    TrdRegTS_3.add_attribute("DskOrdHndlInst", "S.W"); // 1
    TrdRegTS_3_set.insert("S.W");
    all_values.push_back(TrdRegTS_3_set);
    all_compo_names.insert("TrdRegTS_3_set");

    elt.add_element(TrdRegTS_3);
  } // end TrdRegTS
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_4{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_4_set;
    SprdBnchmkCurve_4.add_attribute("Spread", "13145103.990000"); // 1
    SprdBnchmkCurve_4_set.insert("13145103.990000");
    SprdBnchmkCurve_4.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_4_set.insert("JPY");
    SprdBnchmkCurve_4.add_attribute("Name", "FutureSWAP"); // 1
    SprdBnchmkCurve_4_set.insert("FutureSWAP");
    SprdBnchmkCurve_4.add_attribute("Point", "BenchmarkCurvePoint_t_1722137218"); // 1
    SprdBnchmkCurve_4_set.insert("BenchmarkCurvePoint_t_1722137218");
    SprdBnchmkCurve_4.add_attribute("Px", "14423925.820000"); // 1
    SprdBnchmkCurve_4_set.insert("14423925.820000");
    SprdBnchmkCurve_4.add_attribute("PxTyp", "3"); // 1
    SprdBnchmkCurve_4_set.insert("3");
    SprdBnchmkCurve_4.add_attribute("SecID", "BenchmarkSecurityID_t_1294358549"); // 1
    SprdBnchmkCurve_4_set.insert("BenchmarkSecurityID_t_1294358549");
    SprdBnchmkCurve_4.add_attribute("SecIDSrc", "B"); // 1
    SprdBnchmkCurve_4_set.insert("B");
    all_values.push_back(SprdBnchmkCurve_4_set);
    all_compo_names.insert("SprdBnchmkCurve_4_set");

    elt.add_element(SprdBnchmkCurve_4);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_22{"Stip"};
    multiset<string> Stip_22_set;
    Stip_22.add_attribute("Typ", "COUPON"); // 1
    Stip_22_set.insert("COUPON");
    Stip_22.add_attribute("Val", "StipulationValue_t_75778550"); // 1
    Stip_22_set.insert("StipulationValue_t_75778550");
    all_values.push_back(Stip_22_set);
    all_compo_names.insert("Stip_22_set");

    elt.add_element(Stip_22);
  } // end Stip
  { // Stip
    xml_element Stip_23{"Stip"};
    multiset<string> Stip_23_set;
    Stip_23.add_attribute("Typ", "PPM"); // 1
    Stip_23_set.insert("PPM");
    Stip_23.add_attribute("Val", "StipulationValue_t_74513805"); // 1
    Stip_23_set.insert("StipulationValue_t_74513805");
    all_values.push_back(Stip_23_set);
    all_compo_names.insert("Stip_23_set");

    elt.add_element(Stip_23);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_9{"SetInstr"};
    multiset<string> SetInstr_9_set;
    SetInstr_9.add_attribute("DlvryTyp", "1"); // 1
    SetInstr_9_set.insert("1");
    SetInstr_9.add_attribute("StandInstDbTyp", "3"); // 1
    SetInstr_9_set.insert("3");
    SetInstr_9.add_attribute("StandInstDbName", "StandInstDbName_t_1050888861"); // 1
    SetInstr_9_set.insert("StandInstDbName_t_1050888861");
    SetInstr_9.add_attribute("StandInstDbID", "StandInstDbID_t_347085303"); // 1
    SetInstr_9_set.insert("StandInstDbID_t_347085303");
    all_values.push_back(SetInstr_9_set);
    all_compo_names.insert("SetInstr_9_set");

    {
      xml_element DlvInst_9{"DlvInst"};
      multiset<string> DlvInst_9_set;
      DlvInst_9.add_attribute("InstSrc", "1"); // 2
      DlvInst_9_set.insert("1");
      DlvInst_9.add_attribute("InstTyp", "C"); // 2
      DlvInst_9_set.insert("C");
      all_values.push_back(DlvInst_9_set);
      all_compo_names.insert("DlvInst_9_set");

      {
        xml_element Pty_79{"Pty"};
        multiset<string> Pty_79_set;
        Pty_79.add_attribute("ID", "SettlPartyID_t_1869262268"); // 3
        Pty_79_set.insert("SettlPartyID_t_1869262268");
        Pty_79.add_attribute("Src", "I"); // 3
        Pty_79_set.insert("I");
        Pty_79.add_attribute("R", "75"); // 3
        Pty_79_set.insert("75");
        all_values.push_back(Pty_79_set);
        all_compo_names.insert("Pty_79_set");

        {
          xml_element Sub_79{"Sub"};
          multiset<string> Sub_79_set;
          Sub_79.add_attribute("ID", "SettlPartySubID_t_892169476"); // 4
          Sub_79_set.insert("SettlPartySubID_t_892169476");
          Sub_79.add_attribute("Typ", "7"); // 4
          Sub_79_set.insert("7");
          all_values.push_back(Sub_79_set);
          all_compo_names.insert("Sub_79_set");

          Pty_79.add_element(Sub_79);
        }
        DlvInst_9.add_element(Pty_79);
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
