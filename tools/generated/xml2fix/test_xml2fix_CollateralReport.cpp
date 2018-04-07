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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralReport_message_t_0;
  elt.add_attribute("RptID", "CollRptID_t_432848361"); // 0
  CollateralReport_message_t_0.insert("CollRptID_t_432848361");
  elt.add_attribute("ID", "CollInquiryID_t_1233867822"); // 0
  CollateralReport_message_t_0.insert("CollInquiryID_t_1233867822");
  elt.add_attribute("TxnTm", "TransactTime_t_49798170"); // 0
  CollateralReport_message_t_0.insert("TransactTime_t_49798170");
  elt.add_attribute("ApplTyp", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("FinclStat", "3"); // 0
  CollateralReport_message_t_0.insert("3");
  elt.add_attribute("Stat", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("TotNumRpts", "625955853"); // 0
  CollateralReport_message_t_0.insert("625955853");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  CollateralReport_message_t_0.insert("Y");
  elt.add_attribute("Acct", "Account_t_1295174488"); // 0
  CollateralReport_message_t_0.insert("Account_t_1295174488");
  elt.add_attribute("AcctTyp", "7"); // 0
  CollateralReport_message_t_0.insert("7");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1120319055"); // 0
  CollateralReport_message_t_0.insert("ClOrdID_t_1120319055");
  elt.add_attribute("OrdID", "OrderID_t_33120732"); // 0
  CollateralReport_message_t_0.insert("OrderID_t_33120732");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1822299302"); // 0
  CollateralReport_message_t_0.insert("SecondaryOrderID_t_1822299302");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_2011733215"); // 0
  CollateralReport_message_t_0.insert("SecondaryClOrdID_t_2011733215");
  elt.add_attribute("SettlDt", "SettlDate_t_2075123076"); // 0
  CollateralReport_message_t_0.insert("SettlDate_t_2075123076");
  elt.add_attribute("Qty", "12882381.200000"); // 0
  CollateralReport_message_t_0.insert("12882381.200000");
  elt.add_attribute("QtyTyp", "2"); // 0
  CollateralReport_message_t_0.insert("2");
  elt.add_attribute("Ccy", "JPY"); // 0
  CollateralReport_message_t_0.insert("JPY");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1459125244"); // 0
  CollateralReport_message_t_0.insert("MarginExcess_t_1459125244");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_847478105"); // 0
  CollateralReport_message_t_0.insert("TotalNetValue_t_847478105");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_1452925877"); // 0
  CollateralReport_message_t_0.insert("CashOutstanding_t_1452925877");
  elt.add_attribute("Side", "D"); // 0
  CollateralReport_message_t_0.insert("D");
  elt.add_attribute("Px", "14232800.460000"); // 0
  CollateralReport_message_t_0.insert("14232800.460000");
  elt.add_attribute("PxTyp", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1495031508"); // 0
  CollateralReport_message_t_0.insert("AccruedInterestAmt_t_1495031508");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_787279919"); // 0
  CollateralReport_message_t_0.insert("EndAccruedInterestAmt_t_787279919");
  elt.add_attribute("StartCsh", "StartCash_t_286541721"); // 0
  CollateralReport_message_t_0.insert("StartCash_t_286541721");
  elt.add_attribute("EndCsh", "EndCash_t_212403064"); // 0
  CollateralReport_message_t_0.insert("EndCash_t_212403064");
  elt.add_attribute("SesID", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("SesSub", "4"); // 0
  CollateralReport_message_t_0.insert("4");
  elt.add_attribute("SetSesID", "RTH"); // 0
  CollateralReport_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_639768544"); // 0
  CollateralReport_message_t_0.insert("SettlSessSubID_t_639768544");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_311493663"); // 0
  CollateralReport_message_t_0.insert("ClearingBusinessDate_t_311493663");
  elt.add_attribute("Txt", "Text_t_1380167628"); // 0
  CollateralReport_message_t_0.insert("Text_t_1380167628");
  elt.add_attribute("EncTxtLen", "1852511316"); // 0
  CollateralReport_message_t_0.insert("1852511316");
  elt.add_attribute("EncTxt", "EncodedText_t_1920034944"); // 0
  CollateralReport_message_t_0.insert("EncodedText_t_1920034944");
  all_values.push_back(CollateralReport_message_t_0);
  all_compo_names.insert("CollateralReport_message_t");

  { // Hdr
    xml_element Hdr_17{"Hdr"};
    multiset<string> Hdr_17_set;
    Hdr_17.add_attribute("SeqNum", "2006123481"); // 1
    Hdr_17_set.insert("2006123481");
    Hdr_17.add_attribute("SID", "SenderCompID_t_1166953093"); // 1
    Hdr_17_set.insert("SenderCompID_t_1166953093");
    Hdr_17.add_attribute("TID", "TargetCompID_t_1067725785"); // 1
    Hdr_17_set.insert("TargetCompID_t_1067725785");
    Hdr_17.add_attribute("OBID", "OnBehalfOfCompID_t_472546075"); // 1
    Hdr_17_set.insert("OnBehalfOfCompID_t_472546075");
    Hdr_17.add_attribute("D2ID", "DeliverToCompID_t_139788501"); // 1
    Hdr_17_set.insert("DeliverToCompID_t_139788501");
    Hdr_17.add_attribute("SSub", "SenderSubID_t_1100846517"); // 1
    Hdr_17_set.insert("SenderSubID_t_1100846517");
    Hdr_17.add_attribute("SLoc", "SenderLocationID_t_147361729"); // 1
    Hdr_17_set.insert("SenderLocationID_t_147361729");
    Hdr_17.add_attribute("TSub", "TargetSubID_t_4038068"); // 1
    Hdr_17_set.insert("TargetSubID_t_4038068");
    Hdr_17.add_attribute("TLoc", "TargetLocationID_t_1028485945"); // 1
    Hdr_17_set.insert("TargetLocationID_t_1028485945");
    Hdr_17.add_attribute("OBSub", "OnBehalfOfSubID_t_1435599849"); // 1
    Hdr_17_set.insert("OnBehalfOfSubID_t_1435599849");
    Hdr_17.add_attribute("OBLoc", "OnBehalfOfLocationID_t_102322066"); // 1
    Hdr_17_set.insert("OnBehalfOfLocationID_t_102322066");
    Hdr_17.add_attribute("D2Sub", "DeliverToSubID_t_512924891"); // 1
    Hdr_17_set.insert("DeliverToSubID_t_512924891");
    Hdr_17.add_attribute("D2Loc", "DeliverToLocationID_t_1076711189"); // 1
    Hdr_17_set.insert("DeliverToLocationID_t_1076711189");
    Hdr_17.add_attribute("PosDup", "N"); // 1
    Hdr_17_set.insert("N");
    Hdr_17.add_attribute("PosRsnd", "N"); // 1
    Hdr_17_set.insert("N");
    Hdr_17.add_attribute("Snt", "SendingTime_t_382153419"); // 1
    Hdr_17_set.insert("SendingTime_t_382153419");
    Hdr_17.add_attribute("OrigSnt", "OrigSendingTime_t_380200858"); // 1
    Hdr_17_set.insert("OrigSendingTime_t_380200858");
    Hdr_17.add_attribute("MsgEncd", "MessageEncoding_t_636199394"); // 1
    Hdr_17_set.insert("MessageEncoding_t_636199394");
    all_values.push_back(Hdr_17_set);
    all_compo_names.insert("Hdr_17_set");

    {
      xml_element Hop_17{"Hop"};
      multiset<string> Hop_17_set;
      Hop_17.add_attribute("ID", "HopCompID_t_310725403"); // 2
      Hop_17_set.insert("HopCompID_t_310725403");
      Hop_17.add_attribute("Ref", "1875232367"); // 2
      Hop_17_set.insert("1875232367");
      Hop_17.add_attribute("Snt", "HopSendingTime_t_1423479313"); // 2
      Hop_17_set.insert("HopSendingTime_t_1423479313");
      all_values.push_back(Hop_17_set);
      all_compo_names.insert("Hop_17_set");

      Hdr_17.add_element(Hop_17);
    }
    elt.add_element(Hdr_17);
  } // end Hdr
  { // Pty
    xml_element Pty_87{"Pty"};
    multiset<string> Pty_87_set;
    Pty_87.add_attribute("ID", "PartyID_t_2087635431"); // 1
    Pty_87_set.insert("PartyID_t_2087635431");
    Pty_87.add_attribute("Src", "C"); // 1
    Pty_87_set.insert("C");
    Pty_87.add_attribute("R", "41"); // 1
    Pty_87_set.insert("41");
    all_values.push_back(Pty_87_set);
    all_compo_names.insert("Pty_87_set");

    {
      xml_element Sub_87{"Sub"};
      multiset<string> Sub_87_set;
      Sub_87.add_attribute("ID", "PartySubID_t_585403208"); // 2
      Sub_87_set.insert("PartySubID_t_585403208");
      Sub_87.add_attribute("Typ", "32"); // 2
      Sub_87_set.insert("32");
      all_values.push_back(Sub_87_set);
      all_compo_names.insert("Sub_87_set");

      Pty_87.add_element(Sub_87);
    }
    elt.add_element(Pty_87);
  } // end Pty
  { // Pty
    xml_element Pty_88{"Pty"};
    multiset<string> Pty_88_set;
    Pty_88.add_attribute("ID", "PartyID_t_1170456281"); // 1
    Pty_88_set.insert("PartyID_t_1170456281");
    Pty_88.add_attribute("Src", "F"); // 1
    Pty_88_set.insert("F");
    Pty_88.add_attribute("R", "59"); // 1
    Pty_88_set.insert("59");
    all_values.push_back(Pty_88_set);
    all_compo_names.insert("Pty_88_set");

    {
      xml_element Sub_88{"Sub"};
      multiset<string> Sub_88_set;
      Sub_88.add_attribute("ID", "PartySubID_t_943007578"); // 2
      Sub_88_set.insert("PartySubID_t_943007578");
      Sub_88.add_attribute("Typ", "15"); // 2
      Sub_88_set.insert("15");
      all_values.push_back(Sub_88_set);
      all_compo_names.insert("Sub_88_set");

      Pty_88.add_element(Sub_88);
    }
    elt.add_element(Pty_88);
  } // end Pty
  { // CollExc
    xml_element CollExc_7{"CollExc"};
    multiset<string> CollExc_7_set;
    CollExc_7.add_attribute("ExecID", "ExecID_t_2010733363"); // 1
    CollExc_7_set.insert("ExecID_t_2010733363");
    all_values.push_back(CollExc_7_set);
    all_compo_names.insert("CollExc_7_set");

    elt.add_element(CollExc_7);
  } // end CollExc
  { // CollExc
    xml_element CollExc_8{"CollExc"};
    multiset<string> CollExc_8_set;
    CollExc_8.add_attribute("ExecID", "ExecID_t_149273096"); // 1
    CollExc_8_set.insert("ExecID_t_149273096");
    all_values.push_back(CollExc_8_set);
    all_compo_names.insert("CollExc_8_set");

    elt.add_element(CollExc_8);
  } // end CollExc
  { // CollExc
    xml_element CollExc_9{"CollExc"};
    multiset<string> CollExc_9_set;
    CollExc_9.add_attribute("ExecID", "ExecID_t_333434195"); // 1
    CollExc_9_set.insert("ExecID_t_333434195");
    all_values.push_back(CollExc_9_set);
    all_compo_names.insert("CollExc_9_set");

    elt.add_element(CollExc_9);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_7{"TrdColl"};
    multiset<string> TrdColl_7_set;
    TrdColl_7.add_attribute("RptID", "TradeReportID_t_296634825"); // 1
    TrdColl_7_set.insert("TradeReportID_t_296634825");
    TrdColl_7.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_337472263"); // 1
    TrdColl_7_set.insert("SecondaryTradeReportID_t_337472263");
    all_values.push_back(TrdColl_7_set);
    all_compo_names.insert("TrdColl_7_set");

    elt.add_element(TrdColl_7);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_8{"TrdColl"};
    multiset<string> TrdColl_8_set;
    TrdColl_8.add_attribute("RptID", "TradeReportID_t_1992582177"); // 1
    TrdColl_8_set.insert("TradeReportID_t_1992582177");
    TrdColl_8.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1732234674"); // 1
    TrdColl_8_set.insert("SecondaryTradeReportID_t_1732234674");
    all_values.push_back(TrdColl_8_set);
    all_compo_names.insert("TrdColl_8_set");

    elt.add_element(TrdColl_8);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_9{"TrdColl"};
    multiset<string> TrdColl_9_set;
    TrdColl_9.add_attribute("RptID", "TradeReportID_t_439794329"); // 1
    TrdColl_9_set.insert("TradeReportID_t_439794329");
    TrdColl_9.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_358023420"); // 1
    TrdColl_9_set.insert("SecondaryTradeReportID_t_358023420");
    all_values.push_back(TrdColl_9_set);
    all_compo_names.insert("TrdColl_9_set");

    elt.add_element(TrdColl_9);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_11{"Instrmt"};
    multiset<string> Instrmt_11_set;
    Instrmt_11.add_attribute("Sym", "Symbol_t_661462215"); // 1
    Instrmt_11_set.insert("Symbol_t_661462215");
    Instrmt_11.add_attribute("Sfx", "CD"); // 1
    Instrmt_11_set.insert("CD");
    Instrmt_11.add_attribute("ID", "SecurityID_t_1718426416"); // 1
    Instrmt_11_set.insert("SecurityID_t_1718426416");
    Instrmt_11.add_attribute("Src", "7"); // 1
    Instrmt_11_set.insert("7");
    Instrmt_11.add_attribute("Prod", "5"); // 1
    Instrmt_11_set.insert("5");
    Instrmt_11.add_attribute("ProdCmplx", "ProductComplex_t_207142163"); // 1
    Instrmt_11_set.insert("ProductComplex_t_207142163");
    Instrmt_11.add_attribute("SecGrp", "SecurityGroup_t_1354341037"); // 1
    Instrmt_11_set.insert("SecurityGroup_t_1354341037");
    Instrmt_11.add_attribute("CFI", "CFICode_t_2109191217"); // 1
    Instrmt_11_set.insert("CFICode_t_2109191217");
    Instrmt_11.add_attribute("SecTyp", "BUYSELL"); // 1
    Instrmt_11_set.insert("BUYSELL");
    Instrmt_11.add_attribute("SubTyp", "SecuritySubType_t_1951608162"); // 1
    Instrmt_11_set.insert("SecuritySubType_t_1951608162");
    Instrmt_11.add_attribute("MMY", "2049343000"); // 1
    Instrmt_11_set.insert("2049343000");
    Instrmt_11.add_attribute("MatDt", "MaturityDate_t_312517864"); // 1
    Instrmt_11_set.insert("MaturityDate_t_312517864");
    Instrmt_11.add_attribute("MatTm", "663087132"); // 1
    Instrmt_11_set.insert("663087132");
    Instrmt_11.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_487262560"); // 1
    Instrmt_11_set.insert("SettleOnOpenFlag_t_487262560");
    Instrmt_11.add_attribute("AsgnMeth", "1781666444"); // 1
    Instrmt_11_set.insert("1781666444");
    Instrmt_11.add_attribute("Status", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("CpnPmt", "CouponPaymentDate_t_305349748"); // 1
    Instrmt_11_set.insert("CouponPaymentDate_t_305349748");
    Instrmt_11.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_11_set.insert("FR");
    Instrmt_11.add_attribute("Snrty", "SR"); // 1
    Instrmt_11_set.insert("SR");
    Instrmt_11.add_attribute("NotlPctOut", "21295604.170000"); // 1
    Instrmt_11_set.insert("21295604.170000");
    Instrmt_11.add_attribute("OrigNotlPctOut", "10020047.380000"); // 1
    Instrmt_11_set.insert("10020047.380000");
    Instrmt_11.add_attribute("AttchPnt", "4923170.580000"); // 1
    Instrmt_11_set.insert("4923170.580000");
    Instrmt_11.add_attribute("DetchPnt", "1313498.650000"); // 1
    Instrmt_11_set.insert("1313498.650000");
    Instrmt_11.add_attribute("Issued", "IssueDate_t_1335438933"); // 1
    Instrmt_11_set.insert("IssueDate_t_1335438933");
    Instrmt_11.add_attribute("RepoCollSecTyp", "1456413290"); // 1
    Instrmt_11_set.insert("1456413290");
    Instrmt_11.add_attribute("RepoTrm", "427984690"); // 1
    Instrmt_11_set.insert("427984690");
    Instrmt_11.add_attribute("RepoRt", "16729111.960000"); // 1
    Instrmt_11_set.insert("16729111.960000");
    Instrmt_11.add_attribute("Fctr", "13015118.200000"); // 1
    Instrmt_11_set.insert("13015118.200000");
    Instrmt_11.add_attribute("CrdRtg", "CreditRating_t_12735716"); // 1
    Instrmt_11_set.insert("CreditRating_t_12735716");
    Instrmt_11.add_attribute("Rgstry", "InstrRegistry_t_2112705526"); // 1
    Instrmt_11_set.insert("InstrRegistry_t_2112705526");
    Instrmt_11.add_attribute("IssuCtry", "1659535240"); // 1
    Instrmt_11_set.insert("1659535240");
    Instrmt_11.add_attribute("StPrv", "StateOrProvinceOfIssue_t_674197932"); // 1
    Instrmt_11_set.insert("StateOrProvinceOfIssue_t_674197932");
    Instrmt_11.add_attribute("Lcl", "LocaleOfIssue_t_1966463518"); // 1
    Instrmt_11_set.insert("LocaleOfIssue_t_1966463518");
    Instrmt_11.add_attribute("Redeem", "RedemptionDate_t_1230478009"); // 1
    Instrmt_11_set.insert("RedemptionDate_t_1230478009");
    Instrmt_11.add_attribute("StrkPx", "17178135.660000"); // 1
    Instrmt_11_set.insert("17178135.660000");
    Instrmt_11.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_11_set.insert("USD");
    Instrmt_11.add_attribute("StrkMult", "9246709.560000"); // 1
    Instrmt_11_set.insert("9246709.560000");
    Instrmt_11.add_attribute("StrkValu", "146462.900000"); // 1
    Instrmt_11_set.insert("146462.900000");
    Instrmt_11.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("StrkPxBndryPrcsn", "20639892.900000"); // 1
    Instrmt_11_set.insert("20639892.900000");
    Instrmt_11.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("OptAt", "1391882602"); // 1
    Instrmt_11_set.insert("1391882602");
    Instrmt_11.add_attribute("Mult", "4037682.030000"); // 1
    Instrmt_11_set.insert("4037682.030000");
    Instrmt_11.add_attribute("MultTyp", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("MinPxIncr", "7091179.510000"); // 1
    Instrmt_11_set.insert("7091179.510000");
    Instrmt_11.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1675817705"); // 1
    Instrmt_11_set.insert("MinPriceIncrementAmount_t_1675817705");
    Instrmt_11.add_attribute("UOM", "t"); // 1
    Instrmt_11_set.insert("t");
    Instrmt_11.add_attribute("UOMQty", "6911947.210000"); // 1
    Instrmt_11_set.insert("6911947.210000");
    Instrmt_11.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_11_set.insert("Alw");
    Instrmt_11.add_attribute("PxUOMQty", "518431.210000"); // 1
    Instrmt_11_set.insert("518431.210000");
    Instrmt_11.add_attribute("SettlMeth", "C"); // 1
    Instrmt_11_set.insert("C");
    Instrmt_11.add_attribute("ExerStyle", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("OptPayAmt", "OptPayoutAmount_t_1250529277"); // 1
    Instrmt_11_set.insert("OptPayoutAmount_t_1250529277");
    Instrmt_11.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_11_set.insert("INX");
    Instrmt_11.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_11_set.insert("CDSD");
    Instrmt_11.add_attribute("ListMeth", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("CapPx", "13564271.550000"); // 1
    Instrmt_11_set.insert("13564271.550000");
    Instrmt_11.add_attribute("FlrPx", "1743361.760000"); // 1
    Instrmt_11_set.insert("1743361.760000");
    Instrmt_11.add_attribute("PutCall", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("FlexInd", "false"); // 1
    Instrmt_11_set.insert("false");
    Instrmt_11.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_11_set.insert("false");
    Instrmt_11.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_11_set.insert("Mo");
    Instrmt_11.add_attribute("CpnRt", "12283457.460000"); // 1
    Instrmt_11_set.insert("12283457.460000");
    Instrmt_11.add_attribute("Exch", "SecurityExchange_t_694950709"); // 1
    Instrmt_11_set.insert("SecurityExchange_t_694950709");
    Instrmt_11.add_attribute("PosLmt", "284980152"); // 1
    Instrmt_11_set.insert("284980152");
    Instrmt_11.add_attribute("NTPosLmt", "1242992036"); // 1
    Instrmt_11_set.insert("1242992036");
    Instrmt_11.add_attribute("Issr", "Issuer_t_1615708710"); // 1
    Instrmt_11_set.insert("Issuer_t_1615708710");
    Instrmt_11.add_attribute("EncIssrLen", "1013775622"); // 1
    Instrmt_11_set.insert("1013775622");
    Instrmt_11.add_attribute("EncIssr", "EncodedIssuer_t_1159497678"); // 1
    Instrmt_11_set.insert("EncodedIssuer_t_1159497678");
    Instrmt_11.add_attribute("Desc", "SecurityDesc_t_701500926"); // 1
    Instrmt_11_set.insert("SecurityDesc_t_701500926");
    Instrmt_11.add_attribute("EncSecDescLen", "258174576"); // 1
    Instrmt_11_set.insert("258174576");
    Instrmt_11.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1563265881"); // 1
    Instrmt_11_set.insert("EncodedSecurityDesc_t_1563265881");
    Instrmt_11.add_attribute("Pool", "Pool_t_1568959587"); // 1
    Instrmt_11_set.insert("Pool_t_1568959587");
    Instrmt_11.add_attribute("CSetMo", "1336116943"); // 1
    Instrmt_11_set.insert("1336116943");
    Instrmt_11.add_attribute("CPPgm", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("CPRegT", "CPRegType_t_1097293644"); // 1
    Instrmt_11_set.insert("CPRegType_t_1097293644");
    Instrmt_11.add_attribute("Dated", "DatedDate_t_895643006"); // 1
    Instrmt_11_set.insert("DatedDate_t_895643006");
    Instrmt_11.add_attribute("IntAcrl", "InterestAccrualDate_t_816094906"); // 1
    Instrmt_11_set.insert("InterestAccrualDate_t_816094906");
    all_values.push_back(Instrmt_11_set);
    all_compo_names.insert("Instrmt_11_set");

    {
      xml_element AID_11{"AID"};
      multiset<string> AID_11_set;
      AID_11.add_attribute("AltID", "SecurityAltID_t_1627632439"); // 2
      AID_11_set.insert("SecurityAltID_t_1627632439");
      AID_11.add_attribute("AltIDSrc", "7"); // 2
      AID_11_set.insert("7");
      all_values.push_back(AID_11_set);
      all_compo_names.insert("AID_11_set");

      Instrmt_11.add_element(AID_11);
    }
    {
      xml_element SecXML_11{"SecXML"};
      multiset<string> SecXML_11_set;
      SecXML_11.add_attribute("Schema", "SecurityXMLSchema_t_1638639492"); // 2
      SecXML_11_set.insert("SecurityXMLSchema_t_1638639492");
      all_values.push_back(SecXML_11_set);
      all_compo_names.insert("SecXML_11_set");

      Instrmt_11.add_element(SecXML_11);
    }
    {
      xml_element Evnt_11{"Evnt"};
      multiset<string> Evnt_11_set;
      Evnt_11.add_attribute("EventTyp", "1"); // 2
      Evnt_11_set.insert("1");
      Evnt_11.add_attribute("Dt", "EventDate_t_308258892"); // 2
      Evnt_11_set.insert("EventDate_t_308258892");
      Evnt_11.add_attribute("Tm", "EventTime_t_741685121"); // 2
      Evnt_11_set.insert("EventTime_t_741685121");
      Evnt_11.add_attribute("Px", "5896481.500000"); // 2
      Evnt_11_set.insert("5896481.500000");
      Evnt_11.add_attribute("Txt", "EventText_t_970543476"); // 2
      Evnt_11_set.insert("EventText_t_970543476");
      all_values.push_back(Evnt_11_set);
      all_compo_names.insert("Evnt_11_set");

      Instrmt_11.add_element(Evnt_11);
    }
    {
      xml_element Pty_89{"Pty"};
      multiset<string> Pty_89_set;
      Pty_89.add_attribute("ID", "InstrumentPartyID_t_2004950115"); // 2
      Pty_89_set.insert("InstrumentPartyID_t_2004950115");
      Pty_89.add_attribute("Src", "E"); // 2
      Pty_89_set.insert("E");
      Pty_89.add_attribute("R", "59"); // 2
      Pty_89_set.insert("59");
      all_values.push_back(Pty_89_set);
      all_compo_names.insert("Pty_89_set");

      {
        xml_element Sub_89{"Sub"};
        multiset<string> Sub_89_set;
        Sub_89.add_attribute("ID", "InstrumentPartySubID_t_1794929392"); // 3
        Sub_89_set.insert("InstrumentPartySubID_t_1794929392");
        Sub_89.add_attribute("Typ", "4"); // 3
        Sub_89_set.insert("4");
        all_values.push_back(Sub_89_set);
        all_compo_names.insert("Sub_89_set");

        Pty_89.add_element(Sub_89);
      }
      Instrmt_11.add_element(Pty_89);
    }
    {
      xml_element CmplxEvnt_11{"CmplxEvnt"};
      multiset<string> CmplxEvnt_11_set;
      CmplxEvnt_11.add_attribute("Typ", "2"); // 2
      CmplxEvnt_11_set.insert("2");
      CmplxEvnt_11.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1155238588"); // 2
      CmplxEvnt_11_set.insert("ComplexOptPayoutAmount_t_1155238588");
      CmplxEvnt_11.add_attribute("Px", "548607.810000"); // 2
      CmplxEvnt_11_set.insert("548607.810000");
      CmplxEvnt_11.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_11_set.insert("5");
      CmplxEvnt_11.add_attribute("PxBndryPrcsn", "14402187.400000"); // 2
      CmplxEvnt_11_set.insert("14402187.400000");
      CmplxEvnt_11.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_11_set.insert("3");
      CmplxEvnt_11.add_attribute("Cond", "2"); // 2
      CmplxEvnt_11_set.insert("2");
      all_values.push_back(CmplxEvnt_11_set);
      all_compo_names.insert("CmplxEvnt_11_set");

      {
        xml_element EvntDts_11{"EvntDts"};
        multiset<string> EvntDts_11_set;
        EvntDts_11.add_attribute("StartDt", "ComplexEventStartDate_t_306510714"); // 3
        EvntDts_11_set.insert("ComplexEventStartDate_t_306510714");
        EvntDts_11.add_attribute("EndDt", "ComplexEventEndDate_t_309866847"); // 3
        EvntDts_11_set.insert("ComplexEventEndDate_t_309866847");
        all_values.push_back(EvntDts_11_set);
        all_compo_names.insert("EvntDts_11_set");

        {
          xml_element EvntTms_11{"EvntTms"};
          multiset<string> EvntTms_11_set;
          EvntTms_11.add_attribute("StartTm", "1266886888"); // 4
          EvntTms_11_set.insert("1266886888");
          EvntTms_11.add_attribute("EndTm", "564685290"); // 4
          EvntTms_11_set.insert("564685290");
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
    xml_element FinDetls_6{"FinDetls"};
    multiset<string> FinDetls_6_set;
    FinDetls_6.add_attribute("AgmtDesc", "AgreementDesc_t_1873132729"); // 1
    FinDetls_6_set.insert("AgreementDesc_t_1873132729");
    FinDetls_6.add_attribute("AgmtID", "AgreementID_t_688362827"); // 1
    FinDetls_6_set.insert("AgreementID_t_688362827");
    FinDetls_6.add_attribute("AgmtDt", "AgreementDate_t_1900802234"); // 1
    FinDetls_6_set.insert("AgreementDate_t_1900802234");
    FinDetls_6.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_6_set.insert("CAN");
    FinDetls_6.add_attribute("TrmTyp", "1"); // 1
    FinDetls_6_set.insert("1");
    FinDetls_6.add_attribute("StartDt", "StartDate_t_666644172"); // 1
    FinDetls_6_set.insert("StartDate_t_666644172");
    FinDetls_6.add_attribute("EndDt", "EndDate_t_1265805262"); // 1
    FinDetls_6_set.insert("EndDate_t_1265805262");
    FinDetls_6.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_6_set.insert("0");
    FinDetls_6.add_attribute("MgnRatio", "1578000.160000"); // 1
    FinDetls_6_set.insert("1578000.160000");
    all_values.push_back(FinDetls_6_set);
    all_compo_names.insert("FinDetls_6_set");

    elt.add_element(FinDetls_6);
  } // end FinDetls
  { // Leg
    xml_element Leg_19{"Leg"};
    multiset<string> Leg_19_set;
    Leg_19.add_attribute("Sym", "LegSymbol_t_1904706612"); // 1
    Leg_19_set.insert("LegSymbol_t_1904706612");
    Leg_19.add_attribute("Sfx", "CD"); // 1
    Leg_19_set.insert("CD");
    Leg_19.add_attribute("ID", "LegSecurityID_t_1053896285"); // 1
    Leg_19_set.insert("LegSecurityID_t_1053896285");
    Leg_19.add_attribute("Src", "H"); // 1
    Leg_19_set.insert("H");
    Leg_19.add_attribute("Prod", "4"); // 1
    Leg_19_set.insert("4");
    Leg_19.add_attribute("CFI", "LegCFICode_t_852487942"); // 1
    Leg_19_set.insert("LegCFICode_t_852487942");
    Leg_19.add_attribute("SecTyp", "CP"); // 1
    Leg_19_set.insert("CP");
    Leg_19.add_attribute("SecSubTyp", "LegSecuritySubType_t_404397349"); // 1
    Leg_19_set.insert("LegSecuritySubType_t_404397349");
    Leg_19.add_attribute("MMY", "1826486625"); // 1
    Leg_19_set.insert("1826486625");
    Leg_19.add_attribute("Mat", "LegMaturityDate_t_127372635"); // 1
    Leg_19_set.insert("LegMaturityDate_t_127372635");
    Leg_19.add_attribute("MatTm", "1559635938"); // 1
    Leg_19_set.insert("1559635938");
    Leg_19.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1881347406"); // 1
    Leg_19_set.insert("LegCouponPaymentDate_t_1881347406");
    Leg_19.add_attribute("Issued", "LegIssueDate_t_1224533534"); // 1
    Leg_19_set.insert("LegIssueDate_t_1224533534");
    Leg_19.add_attribute("RepoCollSecTyp", "852371030"); // 1
    Leg_19_set.insert("852371030");
    Leg_19.add_attribute("RepoTrm", "1031716575"); // 1
    Leg_19_set.insert("1031716575");
    Leg_19.add_attribute("RepoRt", "17899194.960000"); // 1
    Leg_19_set.insert("17899194.960000");
    Leg_19.add_attribute("Fctr", "11588817.450000"); // 1
    Leg_19_set.insert("11588817.450000");
    Leg_19.add_attribute("CrdRtg", "LegCreditRating_t_1341583423"); // 1
    Leg_19_set.insert("LegCreditRating_t_1341583423");
    Leg_19.add_attribute("Rgstry", "LegInstrRegistry_t_909322736"); // 1
    Leg_19_set.insert("LegInstrRegistry_t_909322736");
    Leg_19.add_attribute("Ctry", "1723567035"); // 1
    Leg_19_set.insert("1723567035");
    Leg_19.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1067232504"); // 1
    Leg_19_set.insert("LegStateOrProvinceOfIssue_t_1067232504");
    Leg_19.add_attribute("Lcl", "LegLocaleOfIssue_t_1597685563"); // 1
    Leg_19_set.insert("LegLocaleOfIssue_t_1597685563");
    Leg_19.add_attribute("Redeem", "LegRedemptionDate_t_1476885621"); // 1
    Leg_19_set.insert("LegRedemptionDate_t_1476885621");
    Leg_19.add_attribute("Strk", "9177817.700000"); // 1
    Leg_19_set.insert("9177817.700000");
    Leg_19.add_attribute("StrkCcy", "USD"); // 1
    Leg_19_set.insert("USD");
    Leg_19.add_attribute("OptA", "1584425942"); // 1
    Leg_19_set.insert("1584425942");
    Leg_19.add_attribute("Cmult", "3541800.000000"); // 1
    Leg_19_set.insert("3541800.000000");
    Leg_19.add_attribute("MultTyp", "1"); // 1
    Leg_19_set.insert("1");
    Leg_19.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_19_set.insert("3");
    Leg_19.add_attribute("UOM", "tn"); // 1
    Leg_19_set.insert("tn");
    Leg_19.add_attribute("UOMQty", "13320342.510000"); // 1
    Leg_19_set.insert("13320342.510000");
    Leg_19.add_attribute("PxUOM", "MWh"); // 1
    Leg_19_set.insert("MWh");
    Leg_19.add_attribute("PxUOMQty", "18723244.200000"); // 1
    Leg_19_set.insert("18723244.200000");
    Leg_19.add_attribute("TmUnit", "Wk"); // 1
    Leg_19_set.insert("Wk");
    Leg_19.add_attribute("ExerStyle", "1"); // 1
    Leg_19_set.insert("1");
    Leg_19.add_attribute("CpnRt", "5773287.150000"); // 1
    Leg_19_set.insert("5773287.150000");
    Leg_19.add_attribute("Exch", "LegSecurityExchange_t_1784963136"); // 1
    Leg_19_set.insert("LegSecurityExchange_t_1784963136");
    Leg_19.add_attribute("Issr", "LegIssuer_t_1655576403"); // 1
    Leg_19_set.insert("LegIssuer_t_1655576403");
    Leg_19.add_attribute("EncLegIssrLen", "256331692"); // 1
    Leg_19_set.insert("256331692");
    Leg_19.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1912335771"); // 1
    Leg_19_set.insert("EncodedLegIssuer_t_1912335771");
    Leg_19.add_attribute("Desc", "LegSecurityDesc_t_1067728693"); // 1
    Leg_19_set.insert("LegSecurityDesc_t_1067728693");
    Leg_19.add_attribute("EncLegSecDescLen", "2137679099"); // 1
    Leg_19_set.insert("2137679099");
    Leg_19.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_989385658"); // 1
    Leg_19_set.insert("EncodedLegSecurityDesc_t_989385658");
    Leg_19.add_attribute("RatioQty", "19200997.230000"); // 1
    Leg_19_set.insert("19200997.230000");
    Leg_19.add_attribute("Side", "B"); // 1
    Leg_19_set.insert("B");
    Leg_19.add_attribute("Ccy", "JPY"); // 1
    Leg_19_set.insert("JPY");
    Leg_19.add_attribute("Pool", "LegPool_t_216011801"); // 1
    Leg_19_set.insert("LegPool_t_216011801");
    Leg_19.add_attribute("Dated", "LegDatedDate_t_1541144242"); // 1
    Leg_19_set.insert("LegDatedDate_t_1541144242");
    Leg_19.add_attribute("CSetMo", "507581208"); // 1
    Leg_19_set.insert("507581208");
    Leg_19.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1283244305"); // 1
    Leg_19_set.insert("LegInterestAccrualDate_t_1283244305");
    Leg_19.add_attribute("PutCall", "991346157"); // 1
    Leg_19_set.insert("991346157");
    Leg_19.add_attribute("LegOptionRatio", "19844668.290000"); // 1
    Leg_19_set.insert("19844668.290000");
    Leg_19.add_attribute("Px", "535424.270000"); // 1
    Leg_19_set.insert("535424.270000");
    all_values.push_back(Leg_19_set);
    all_compo_names.insert("Leg_19_set");

    {
      xml_element LegAID_19{"LegAID"};
      multiset<string> LegAID_19_set;
      LegAID_19.add_attribute("SecAltID", "LegSecurityAltID_t_79720895"); // 2
      LegAID_19_set.insert("LegSecurityAltID_t_79720895");
      LegAID_19.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_19_set.insert("A");
      all_values.push_back(LegAID_19_set);
      all_compo_names.insert("LegAID_19_set");

      Leg_19.add_element(LegAID_19);
    }
    elt.add_element(Leg_19);
  } // end Leg
  { // Leg
    xml_element Leg_20{"Leg"};
    multiset<string> Leg_20_set;
    Leg_20.add_attribute("Sym", "LegSymbol_t_1637968369"); // 1
    Leg_20_set.insert("LegSymbol_t_1637968369");
    Leg_20.add_attribute("Sfx", "WI"); // 1
    Leg_20_set.insert("WI");
    Leg_20.add_attribute("ID", "LegSecurityID_t_1390158034"); // 1
    Leg_20_set.insert("LegSecurityID_t_1390158034");
    Leg_20.add_attribute("Src", "F"); // 1
    Leg_20_set.insert("F");
    Leg_20.add_attribute("Prod", "2"); // 1
    Leg_20_set.insert("2");
    Leg_20.add_attribute("CFI", "LegCFICode_t_574708637"); // 1
    Leg_20_set.insert("LegCFICode_t_574708637");
    Leg_20.add_attribute("SecTyp", "CTB"); // 1
    Leg_20_set.insert("CTB");
    Leg_20.add_attribute("SecSubTyp", "LegSecuritySubType_t_977169803"); // 1
    Leg_20_set.insert("LegSecuritySubType_t_977169803");
    Leg_20.add_attribute("MMY", "487025680"); // 1
    Leg_20_set.insert("487025680");
    Leg_20.add_attribute("Mat", "LegMaturityDate_t_830633534"); // 1
    Leg_20_set.insert("LegMaturityDate_t_830633534");
    Leg_20.add_attribute("MatTm", "1554498518"); // 1
    Leg_20_set.insert("1554498518");
    Leg_20.add_attribute("CpnPmt", "LegCouponPaymentDate_t_124505169"); // 1
    Leg_20_set.insert("LegCouponPaymentDate_t_124505169");
    Leg_20.add_attribute("Issued", "LegIssueDate_t_338726289"); // 1
    Leg_20_set.insert("LegIssueDate_t_338726289");
    Leg_20.add_attribute("RepoCollSecTyp", "1810830211"); // 1
    Leg_20_set.insert("1810830211");
    Leg_20.add_attribute("RepoTrm", "2036840940"); // 1
    Leg_20_set.insert("2036840940");
    Leg_20.add_attribute("RepoRt", "14064549.820000"); // 1
    Leg_20_set.insert("14064549.820000");
    Leg_20.add_attribute("Fctr", "18010256.620000"); // 1
    Leg_20_set.insert("18010256.620000");
    Leg_20.add_attribute("CrdRtg", "LegCreditRating_t_878742950"); // 1
    Leg_20_set.insert("LegCreditRating_t_878742950");
    Leg_20.add_attribute("Rgstry", "LegInstrRegistry_t_1179071057"); // 1
    Leg_20_set.insert("LegInstrRegistry_t_1179071057");
    Leg_20.add_attribute("Ctry", "675454040"); // 1
    Leg_20_set.insert("675454040");
    Leg_20.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1510564456"); // 1
    Leg_20_set.insert("LegStateOrProvinceOfIssue_t_1510564456");
    Leg_20.add_attribute("Lcl", "LegLocaleOfIssue_t_2110568878"); // 1
    Leg_20_set.insert("LegLocaleOfIssue_t_2110568878");
    Leg_20.add_attribute("Redeem", "LegRedemptionDate_t_891465842"); // 1
    Leg_20_set.insert("LegRedemptionDate_t_891465842");
    Leg_20.add_attribute("Strk", "9042250.500000"); // 1
    Leg_20_set.insert("9042250.500000");
    Leg_20.add_attribute("StrkCcy", "CAN"); // 1
    Leg_20_set.insert("CAN");
    Leg_20.add_attribute("OptA", "1895571207"); // 1
    Leg_20_set.insert("1895571207");
    Leg_20.add_attribute("Cmult", "3076496.190000"); // 1
    Leg_20_set.insert("3076496.190000");
    Leg_20.add_attribute("MultTyp", "2"); // 1
    Leg_20_set.insert("2");
    Leg_20.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_20_set.insert("2");
    Leg_20.add_attribute("UOM", "MWh"); // 1
    Leg_20_set.insert("MWh");
    Leg_20.add_attribute("UOMQty", "17187372.960000"); // 1
    Leg_20_set.insert("17187372.960000");
    Leg_20.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_20_set.insert("MMbbl");
    Leg_20.add_attribute("PxUOMQty", "15131544.010000"); // 1
    Leg_20_set.insert("15131544.010000");
    Leg_20.add_attribute("TmUnit", "Yr"); // 1
    Leg_20_set.insert("Yr");
    Leg_20.add_attribute("ExerStyle", "1"); // 1
    Leg_20_set.insert("1");
    Leg_20.add_attribute("CpnRt", "20878630.380000"); // 1
    Leg_20_set.insert("20878630.380000");
    Leg_20.add_attribute("Exch", "LegSecurityExchange_t_383418809"); // 1
    Leg_20_set.insert("LegSecurityExchange_t_383418809");
    Leg_20.add_attribute("Issr", "LegIssuer_t_343724536"); // 1
    Leg_20_set.insert("LegIssuer_t_343724536");
    Leg_20.add_attribute("EncLegIssrLen", "427405070"); // 1
    Leg_20_set.insert("427405070");
    Leg_20.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1214052343"); // 1
    Leg_20_set.insert("EncodedLegIssuer_t_1214052343");
    Leg_20.add_attribute("Desc", "LegSecurityDesc_t_1898223055"); // 1
    Leg_20_set.insert("LegSecurityDesc_t_1898223055");
    Leg_20.add_attribute("EncLegSecDescLen", "551910239"); // 1
    Leg_20_set.insert("551910239");
    Leg_20.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1552778632"); // 1
    Leg_20_set.insert("EncodedLegSecurityDesc_t_1552778632");
    Leg_20.add_attribute("RatioQty", "15615696.180000"); // 1
    Leg_20_set.insert("15615696.180000");
    Leg_20.add_attribute("Side", "D"); // 1
    Leg_20_set.insert("D");
    Leg_20.add_attribute("Ccy", "GBP"); // 1
    Leg_20_set.insert("GBP");
    Leg_20.add_attribute("Pool", "LegPool_t_1320010482"); // 1
    Leg_20_set.insert("LegPool_t_1320010482");
    Leg_20.add_attribute("Dated", "LegDatedDate_t_1990821023"); // 1
    Leg_20_set.insert("LegDatedDate_t_1990821023");
    Leg_20.add_attribute("CSetMo", "1890565672"); // 1
    Leg_20_set.insert("1890565672");
    Leg_20.add_attribute("IntAcrl", "LegInterestAccrualDate_t_683091291"); // 1
    Leg_20_set.insert("LegInterestAccrualDate_t_683091291");
    Leg_20.add_attribute("PutCall", "1953906253"); // 1
    Leg_20_set.insert("1953906253");
    Leg_20.add_attribute("LegOptionRatio", "6345478.660000"); // 1
    Leg_20_set.insert("6345478.660000");
    Leg_20.add_attribute("Px", "15873163.410000"); // 1
    Leg_20_set.insert("15873163.410000");
    all_values.push_back(Leg_20_set);
    all_compo_names.insert("Leg_20_set");

    {
      xml_element LegAID_20{"LegAID"};
      multiset<string> LegAID_20_set;
      LegAID_20.add_attribute("SecAltID", "LegSecurityAltID_t_277089043"); // 2
      LegAID_20_set.insert("LegSecurityAltID_t_277089043");
      LegAID_20.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_20_set.insert("1");
      all_values.push_back(LegAID_20_set);
      all_compo_names.insert("LegAID_20_set");

      Leg_20.add_element(LegAID_20);
    }
    elt.add_element(Leg_20);
  } // end Leg
  { // Undly
    xml_element Undly_14{"Undly"};
    multiset<string> Undly_14_set;
    Undly_14.add_attribute("Sym", "UnderlyingSymbol_t_584738663"); // 1
    Undly_14_set.insert("UnderlyingSymbol_t_584738663");
    Undly_14.add_attribute("Sfx", "WI"); // 1
    Undly_14_set.insert("WI");
    Undly_14.add_attribute("ID", "UnderlyingSecurityID_t_1163212355"); // 1
    Undly_14_set.insert("UnderlyingSecurityID_t_1163212355");
    Undly_14.add_attribute("Src", "3"); // 1
    Undly_14_set.insert("3");
    Undly_14.add_attribute("Prod", "12"); // 1
    Undly_14_set.insert("12");
    Undly_14.add_attribute("CFI", "UnderlyingCFICode_t_1424921705"); // 1
    Undly_14_set.insert("UnderlyingCFICode_t_1424921705");
    Undly_14.add_attribute("SecTyp", "EUFRN"); // 1
    Undly_14_set.insert("EUFRN");
    Undly_14.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1117761270"); // 1
    Undly_14_set.insert("UnderlyingSecuritySubType_t_1117761270");
    Undly_14.add_attribute("MMY", "791476438"); // 1
    Undly_14_set.insert("791476438");
    Undly_14.add_attribute("Mat", "UnderlyingMaturityDate_t_13785173"); // 1
    Undly_14_set.insert("UnderlyingMaturityDate_t_13785173");
    Undly_14.add_attribute("MatTm", "1501180079"); // 1
    Undly_14_set.insert("1501180079");
    Undly_14.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1135200975"); // 1
    Undly_14_set.insert("UnderlyingCouponPaymentDate_t_1135200975");
    Undly_14.add_attribute("RestrctTyp", "XR"); // 1
    Undly_14_set.insert("XR");
    Undly_14.add_attribute("Snrty", "SR"); // 1
    Undly_14_set.insert("SR");
    Undly_14.add_attribute("NotlPctOut", "8859403.820000"); // 1
    Undly_14_set.insert("8859403.820000");
    Undly_14.add_attribute("OrigNotlPctOut", "9931004.830000"); // 1
    Undly_14_set.insert("9931004.830000");
    Undly_14.add_attribute("AttchPnt", "21205274.060000"); // 1
    Undly_14_set.insert("21205274.060000");
    Undly_14.add_attribute("DetchPnt", "3000263.520000"); // 1
    Undly_14_set.insert("3000263.520000");
    Undly_14.add_attribute("Issued", "UnderlyingIssueDate_t_1434368015"); // 1
    Undly_14_set.insert("UnderlyingIssueDate_t_1434368015");
    Undly_14.add_attribute("RepoCollSecTyp", "784793724"); // 1
    Undly_14_set.insert("784793724");
    Undly_14.add_attribute("RepoTrm", "1515137984"); // 1
    Undly_14_set.insert("1515137984");
    Undly_14.add_attribute("RepoRt", "6068948.490000"); // 1
    Undly_14_set.insert("6068948.490000");
    Undly_14.add_attribute("Fctr", "6281310.990000"); // 1
    Undly_14_set.insert("6281310.990000");
    Undly_14.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1258220008"); // 1
    Undly_14_set.insert("UnderlyingCreditRating_t_1258220008");
    Undly_14.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1289986140"); // 1
    Undly_14_set.insert("UnderlyingInstrRegistry_t_1289986140");
    Undly_14.add_attribute("Ctry", "434553705"); // 1
    Undly_14_set.insert("434553705");
    Undly_14.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1892767875"); // 1
    Undly_14_set.insert("UnderlyingStateOrProvinceOfIssue_t_1892767875");
    Undly_14.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_729818834"); // 1
    Undly_14_set.insert("UnderlyingLocaleOfIssue_t_729818834");
    Undly_14.add_attribute("Redeem", "UnderlyingRedemptionDate_t_711642748"); // 1
    Undly_14_set.insert("UnderlyingRedemptionDate_t_711642748");
    Undly_14.add_attribute("StrkPx", "4070585.930000"); // 1
    Undly_14_set.insert("4070585.930000");
    Undly_14.add_attribute("StrkCcy", "CHF"); // 1
    Undly_14_set.insert("CHF");
    Undly_14.add_attribute("OptA", "1149601886"); // 1
    Undly_14_set.insert("1149601886");
    Undly_14.add_attribute("Mult", "10809514.420000"); // 1
    Undly_14_set.insert("10809514.420000");
    Undly_14.add_attribute("MultTyp", "2"); // 1
    Undly_14_set.insert("2");
    Undly_14.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_14_set.insert("2");
    Undly_14.add_attribute("UOM", "MMBtu"); // 1
    Undly_14_set.insert("MMBtu");
    Undly_14.add_attribute("UOMQty", "20775222.240000"); // 1
    Undly_14_set.insert("20775222.240000");
    Undly_14.add_attribute("PxUOM", "Bu"); // 1
    Undly_14_set.insert("Bu");
    Undly_14.add_attribute("PxUOMQty", "11498659.380000"); // 1
    Undly_14_set.insert("11498659.380000");
    Undly_14.add_attribute("TmUnit", "Wk"); // 1
    Undly_14_set.insert("Wk");
    Undly_14.add_attribute("ExerStyle", "0"); // 1
    Undly_14_set.insert("0");
    Undly_14.add_attribute("CpnRt", "1375832.650000"); // 1
    Undly_14_set.insert("1375832.650000");
    Undly_14.add_attribute("Exch", "UnderlyingSecurityExchange_t_385013993"); // 1
    Undly_14_set.insert("UnderlyingSecurityExchange_t_385013993");
    Undly_14.add_attribute("Issr", "UnderlyingIssuer_t_355121654"); // 1
    Undly_14_set.insert("UnderlyingIssuer_t_355121654");
    Undly_14.add_attribute("EncUndIssrLen", "1023523647"); // 1
    Undly_14_set.insert("1023523647");
    Undly_14.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1378114476"); // 1
    Undly_14_set.insert("EncodedUnderlyingIssuer_t_1378114476");
    Undly_14.add_attribute("Desc", "UnderlyingSecurityDesc_t_328165412"); // 1
    Undly_14_set.insert("UnderlyingSecurityDesc_t_328165412");
    Undly_14.add_attribute("EncUndSecDescLen", "1323549999"); // 1
    Undly_14_set.insert("1323549999");
    Undly_14.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_664998843"); // 1
    Undly_14_set.insert("EncodedUnderlyingSecurityDesc_t_664998843");
    Undly_14.add_attribute("CPPgm", "UnderlyingCPProgram_t_1112959136"); // 1
    Undly_14_set.insert("UnderlyingCPProgram_t_1112959136");
    Undly_14.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_691204335"); // 1
    Undly_14_set.insert("UnderlyingCPRegType_t_691204335");
    Undly_14.add_attribute("AllocPct", "12718936.920000"); // 1
    Undly_14_set.insert("12718936.920000");
    Undly_14.add_attribute("Ccy", "GBP"); // 1
    Undly_14_set.insert("GBP");
    Undly_14.add_attribute("Qty", "4143961.850000"); // 1
    Undly_14_set.insert("4143961.850000");
    Undly_14.add_attribute("SettlTyp", "4"); // 1
    Undly_14_set.insert("4");
    Undly_14.add_attribute("CashAmt", "UnderlyingCashAmount_t_1694708571"); // 1
    Undly_14_set.insert("UnderlyingCashAmount_t_1694708571");
    Undly_14.add_attribute("CashTyp", "DIFF"); // 1
    Undly_14_set.insert("DIFF");
    Undly_14.add_attribute("Px", "7398030.410000"); // 1
    Undly_14_set.insert("7398030.410000");
    Undly_14.add_attribute("DirtPx", "21017671.640000"); // 1
    Undly_14_set.insert("21017671.640000");
    Undly_14.add_attribute("EndPx", "10619541.060000"); // 1
    Undly_14_set.insert("10619541.060000");
    Undly_14.add_attribute("StartVal", "UnderlyingStartValue_t_2036184453"); // 1
    Undly_14_set.insert("UnderlyingStartValue_t_2036184453");
    Undly_14.add_attribute("CurVal", "UnderlyingCurrentValue_t_1103885402"); // 1
    Undly_14_set.insert("UnderlyingCurrentValue_t_1103885402");
    Undly_14.add_attribute("EndVal", "UnderlyingEndValue_t_2142905548"); // 1
    Undly_14_set.insert("UnderlyingEndValue_t_2142905548");
    Undly_14.add_attribute("AdjQty", "18928172.460000"); // 1
    Undly_14_set.insert("18928172.460000");
    Undly_14.add_attribute("FxRate", "4198005.810000"); // 1
    Undly_14_set.insert("4198005.810000");
    Undly_14.add_attribute("FxRateCalc", "M"); // 1
    Undly_14_set.insert("M");
    Undly_14.add_attribute("CapValu", "UnderlyingCapValue_t_1822855823"); // 1
    Undly_14_set.insert("UnderlyingCapValue_t_1822855823");
    Undly_14.add_attribute("SetMeth", "UnderlyingSettlMethod_t_853477031"); // 1
    Undly_14_set.insert("UnderlyingSettlMethod_t_853477031");
    Undly_14.add_attribute("PutCall", "1503677339"); // 1
    Undly_14_set.insert("1503677339");
    all_values.push_back(Undly_14_set);
    all_compo_names.insert("Undly_14_set");

    {
      xml_element UndAID_14{"UndAID"};
      multiset<string> UndAID_14_set;
      UndAID_14.add_attribute("AltID", "UnderlyingSecurityAltID_t_1766679572"); // 2
      UndAID_14_set.insert("UnderlyingSecurityAltID_t_1766679572");
      UndAID_14.add_attribute("AltIDSrc", "A"); // 2
      UndAID_14_set.insert("A");
      all_values.push_back(UndAID_14_set);
      all_compo_names.insert("UndAID_14_set");

      Undly_14.add_element(UndAID_14);
    }
    {
      xml_element Stip_20{"Stip"};
      multiset<string> Stip_20_set;
      Stip_20.add_attribute("Typ", "REDEMPTION"); // 2
      Stip_20_set.insert("REDEMPTION");
      Stip_20.add_attribute("Val", "UnderlyingStipValue_t_4209917"); // 2
      Stip_20_set.insert("UnderlyingStipValue_t_4209917");
      all_values.push_back(Stip_20_set);
      all_compo_names.insert("Stip_20_set");

      Undly_14.add_element(Stip_20);
    }
    {
      xml_element Pty_90{"Pty"};
      multiset<string> Pty_90_set;
      Pty_90.add_attribute("ID", "UnderlyingInstrumentPartyID_t_995971566"); // 2
      Pty_90_set.insert("UnderlyingInstrumentPartyID_t_995971566");
      Pty_90.add_attribute("Src", "9"); // 2
      Pty_90_set.insert("9");
      Pty_90.add_attribute("R", "67"); // 2
      Pty_90_set.insert("67");
      all_values.push_back(Pty_90_set);
      all_compo_names.insert("Pty_90_set");

      {
        xml_element Sub_90{"Sub"};
        multiset<string> Sub_90_set;
        Sub_90.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1324136978"); // 3
        Sub_90_set.insert("UnderlyingInstrumentPartySubID_t_1324136978");
        Sub_90.add_attribute("Typ", "4"); // 3
        Sub_90_set.insert("4");
        all_values.push_back(Sub_90_set);
        all_compo_names.insert("Sub_90_set");

        Pty_90.add_element(Sub_90);
      }
      Undly_14.add_element(Pty_90);
    }
    elt.add_element(Undly_14);
  } // end Undly
  { // Undly
    xml_element Undly_15{"Undly"};
    multiset<string> Undly_15_set;
    Undly_15.add_attribute("Sym", "UnderlyingSymbol_t_2047323236"); // 1
    Undly_15_set.insert("UnderlyingSymbol_t_2047323236");
    Undly_15.add_attribute("Sfx", "WI"); // 1
    Undly_15_set.insert("WI");
    Undly_15.add_attribute("ID", "UnderlyingSecurityID_t_384571291"); // 1
    Undly_15_set.insert("UnderlyingSecurityID_t_384571291");
    Undly_15.add_attribute("Src", "G"); // 1
    Undly_15_set.insert("G");
    Undly_15.add_attribute("Prod", "12"); // 1
    Undly_15_set.insert("12");
    Undly_15.add_attribute("CFI", "UnderlyingCFICode_t_186511987"); // 1
    Undly_15_set.insert("UnderlyingCFICode_t_186511987");
    Undly_15.add_attribute("SecTyp", "CORP"); // 1
    Undly_15_set.insert("CORP");
    Undly_15.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2058862996"); // 1
    Undly_15_set.insert("UnderlyingSecuritySubType_t_2058862996");
    Undly_15.add_attribute("MMY", "1881220558"); // 1
    Undly_15_set.insert("1881220558");
    Undly_15.add_attribute("Mat", "UnderlyingMaturityDate_t_582860837"); // 1
    Undly_15_set.insert("UnderlyingMaturityDate_t_582860837");
    Undly_15.add_attribute("MatTm", "651182389"); // 1
    Undly_15_set.insert("651182389");
    Undly_15.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1835504074"); // 1
    Undly_15_set.insert("UnderlyingCouponPaymentDate_t_1835504074");
    Undly_15.add_attribute("RestrctTyp", "XR"); // 1
    Undly_15_set.insert("XR");
    Undly_15.add_attribute("Snrty", "SB"); // 1
    Undly_15_set.insert("SB");
    Undly_15.add_attribute("NotlPctOut", "7919058.280000"); // 1
    Undly_15_set.insert("7919058.280000");
    Undly_15.add_attribute("OrigNotlPctOut", "16402368.430000"); // 1
    Undly_15_set.insert("16402368.430000");
    Undly_15.add_attribute("AttchPnt", "2852167.930000"); // 1
    Undly_15_set.insert("2852167.930000");
    Undly_15.add_attribute("DetchPnt", "12117064.090000"); // 1
    Undly_15_set.insert("12117064.090000");
    Undly_15.add_attribute("Issued", "UnderlyingIssueDate_t_1994048244"); // 1
    Undly_15_set.insert("UnderlyingIssueDate_t_1994048244");
    Undly_15.add_attribute("RepoCollSecTyp", "2108072616"); // 1
    Undly_15_set.insert("2108072616");
    Undly_15.add_attribute("RepoTrm", "2065183440"); // 1
    Undly_15_set.insert("2065183440");
    Undly_15.add_attribute("RepoRt", "13502419.350000"); // 1
    Undly_15_set.insert("13502419.350000");
    Undly_15.add_attribute("Fctr", "17272685.400000"); // 1
    Undly_15_set.insert("17272685.400000");
    Undly_15.add_attribute("CrdRtg", "UnderlyingCreditRating_t_558549704"); // 1
    Undly_15_set.insert("UnderlyingCreditRating_t_558549704");
    Undly_15.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_844018891"); // 1
    Undly_15_set.insert("UnderlyingInstrRegistry_t_844018891");
    Undly_15.add_attribute("Ctry", "1731478458"); // 1
    Undly_15_set.insert("1731478458");
    Undly_15.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1554521270"); // 1
    Undly_15_set.insert("UnderlyingStateOrProvinceOfIssue_t_1554521270");
    Undly_15.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1361319495"); // 1
    Undly_15_set.insert("UnderlyingLocaleOfIssue_t_1361319495");
    Undly_15.add_attribute("Redeem", "UnderlyingRedemptionDate_t_966319203"); // 1
    Undly_15_set.insert("UnderlyingRedemptionDate_t_966319203");
    Undly_15.add_attribute("StrkPx", "7311746.000000"); // 1
    Undly_15_set.insert("7311746.000000");
    Undly_15.add_attribute("StrkCcy", "JPY"); // 1
    Undly_15_set.insert("JPY");
    Undly_15.add_attribute("OptA", "1020787067"); // 1
    Undly_15_set.insert("1020787067");
    Undly_15.add_attribute("Mult", "14392577.420000"); // 1
    Undly_15_set.insert("14392577.420000");
    Undly_15.add_attribute("MultTyp", "2"); // 1
    Undly_15_set.insert("2");
    Undly_15.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_15_set.insert("2");
    Undly_15.add_attribute("UOM", "Alw"); // 1
    Undly_15_set.insert("Alw");
    Undly_15.add_attribute("UOMQty", "14765378.910000"); // 1
    Undly_15_set.insert("14765378.910000");
    Undly_15.add_attribute("PxUOM", "Gal"); // 1
    Undly_15_set.insert("Gal");
    Undly_15.add_attribute("PxUOMQty", "13595066.390000"); // 1
    Undly_15_set.insert("13595066.390000");
    Undly_15.add_attribute("TmUnit", "H"); // 1
    Undly_15_set.insert("H");
    Undly_15.add_attribute("ExerStyle", "1"); // 1
    Undly_15_set.insert("1");
    Undly_15.add_attribute("CpnRt", "10475270.650000"); // 1
    Undly_15_set.insert("10475270.650000");
    Undly_15.add_attribute("Exch", "UnderlyingSecurityExchange_t_1556730023"); // 1
    Undly_15_set.insert("UnderlyingSecurityExchange_t_1556730023");
    Undly_15.add_attribute("Issr", "UnderlyingIssuer_t_2006451054"); // 1
    Undly_15_set.insert("UnderlyingIssuer_t_2006451054");
    Undly_15.add_attribute("EncUndIssrLen", "1839432893"); // 1
    Undly_15_set.insert("1839432893");
    Undly_15.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1049483218"); // 1
    Undly_15_set.insert("EncodedUnderlyingIssuer_t_1049483218");
    Undly_15.add_attribute("Desc", "UnderlyingSecurityDesc_t_144184199"); // 1
    Undly_15_set.insert("UnderlyingSecurityDesc_t_144184199");
    Undly_15.add_attribute("EncUndSecDescLen", "903655654"); // 1
    Undly_15_set.insert("903655654");
    Undly_15.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_896047814"); // 1
    Undly_15_set.insert("EncodedUnderlyingSecurityDesc_t_896047814");
    Undly_15.add_attribute("CPPgm", "UnderlyingCPProgram_t_104773167"); // 1
    Undly_15_set.insert("UnderlyingCPProgram_t_104773167");
    Undly_15.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_821355447"); // 1
    Undly_15_set.insert("UnderlyingCPRegType_t_821355447");
    Undly_15.add_attribute("AllocPct", "988061.010000"); // 1
    Undly_15_set.insert("988061.010000");
    Undly_15.add_attribute("Ccy", "CAN"); // 1
    Undly_15_set.insert("CAN");
    Undly_15.add_attribute("Qty", "9428249.930000"); // 1
    Undly_15_set.insert("9428249.930000");
    Undly_15.add_attribute("SettlTyp", "5"); // 1
    Undly_15_set.insert("5");
    Undly_15.add_attribute("CashAmt", "UnderlyingCashAmount_t_786942773"); // 1
    Undly_15_set.insert("UnderlyingCashAmount_t_786942773");
    Undly_15.add_attribute("CashTyp", "FIXED"); // 1
    Undly_15_set.insert("FIXED");
    Undly_15.add_attribute("Px", "2348720.730000"); // 1
    Undly_15_set.insert("2348720.730000");
    Undly_15.add_attribute("DirtPx", "15181173.730000"); // 1
    Undly_15_set.insert("15181173.730000");
    Undly_15.add_attribute("EndPx", "12113472.910000"); // 1
    Undly_15_set.insert("12113472.910000");
    Undly_15.add_attribute("StartVal", "UnderlyingStartValue_t_1101030865"); // 1
    Undly_15_set.insert("UnderlyingStartValue_t_1101030865");
    Undly_15.add_attribute("CurVal", "UnderlyingCurrentValue_t_391420793"); // 1
    Undly_15_set.insert("UnderlyingCurrentValue_t_391420793");
    Undly_15.add_attribute("EndVal", "UnderlyingEndValue_t_503121385"); // 1
    Undly_15_set.insert("UnderlyingEndValue_t_503121385");
    Undly_15.add_attribute("AdjQty", "9914392.900000"); // 1
    Undly_15_set.insert("9914392.900000");
    Undly_15.add_attribute("FxRate", "12954269.150000"); // 1
    Undly_15_set.insert("12954269.150000");
    Undly_15.add_attribute("FxRateCalc", "M"); // 1
    Undly_15_set.insert("M");
    Undly_15.add_attribute("CapValu", "UnderlyingCapValue_t_320493533"); // 1
    Undly_15_set.insert("UnderlyingCapValue_t_320493533");
    Undly_15.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2110812386"); // 1
    Undly_15_set.insert("UnderlyingSettlMethod_t_2110812386");
    Undly_15.add_attribute("PutCall", "1340914105"); // 1
    Undly_15_set.insert("1340914105");
    all_values.push_back(Undly_15_set);
    all_compo_names.insert("Undly_15_set");

    {
      xml_element UndAID_15{"UndAID"};
      multiset<string> UndAID_15_set;
      UndAID_15.add_attribute("AltID", "UnderlyingSecurityAltID_t_232408613"); // 2
      UndAID_15_set.insert("UnderlyingSecurityAltID_t_232408613");
      UndAID_15.add_attribute("AltIDSrc", "K"); // 2
      UndAID_15_set.insert("K");
      all_values.push_back(UndAID_15_set);
      all_compo_names.insert("UndAID_15_set");

      Undly_15.add_element(UndAID_15);
    }
    {
      xml_element Stip_21{"Stip"};
      multiset<string> Stip_21_set;
      Stip_21.add_attribute("Typ", "AUTOREINV"); // 2
      Stip_21_set.insert("AUTOREINV");
      Stip_21.add_attribute("Val", "UnderlyingStipValue_t_1789138636"); // 2
      Stip_21_set.insert("UnderlyingStipValue_t_1789138636");
      all_values.push_back(Stip_21_set);
      all_compo_names.insert("Stip_21_set");

      Undly_15.add_element(Stip_21);
    }
    {
      xml_element Pty_91{"Pty"};
      multiset<string> Pty_91_set;
      Pty_91.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1288864004"); // 2
      Pty_91_set.insert("UnderlyingInstrumentPartyID_t_1288864004");
      Pty_91.add_attribute("Src", "6"); // 2
      Pty_91_set.insert("6");
      Pty_91.add_attribute("R", "69"); // 2
      Pty_91_set.insert("69");
      all_values.push_back(Pty_91_set);
      all_compo_names.insert("Pty_91_set");

      {
        xml_element Sub_91{"Sub"};
        multiset<string> Sub_91_set;
        Sub_91.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1433048204"); // 3
        Sub_91_set.insert("UnderlyingInstrumentPartySubID_t_1433048204");
        Sub_91.add_attribute("Typ", "22"); // 3
        Sub_91_set.insert("22");
        all_values.push_back(Sub_91_set);
        all_compo_names.insert("Sub_91_set");

        Pty_91.add_element(Sub_91);
      }
      Undly_15.add_element(Pty_91);
    }
    elt.add_element(Undly_15);
  } // end Undly
  { // Undly
    xml_element Undly_16{"Undly"};
    multiset<string> Undly_16_set;
    Undly_16.add_attribute("Sym", "UnderlyingSymbol_t_1587186021"); // 1
    Undly_16_set.insert("UnderlyingSymbol_t_1587186021");
    Undly_16.add_attribute("Sfx", "WI"); // 1
    Undly_16_set.insert("WI");
    Undly_16.add_attribute("ID", "UnderlyingSecurityID_t_1657917869"); // 1
    Undly_16_set.insert("UnderlyingSecurityID_t_1657917869");
    Undly_16.add_attribute("Src", "E"); // 1
    Undly_16_set.insert("E");
    Undly_16.add_attribute("Prod", "1"); // 1
    Undly_16_set.insert("1");
    Undly_16.add_attribute("CFI", "UnderlyingCFICode_t_890339372"); // 1
    Undly_16_set.insert("UnderlyingCFICode_t_890339372");
    Undly_16.add_attribute("SecTyp", "DN"); // 1
    Undly_16_set.insert("DN");
    Undly_16.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_490932301"); // 1
    Undly_16_set.insert("UnderlyingSecuritySubType_t_490932301");
    Undly_16.add_attribute("MMY", "1677282145"); // 1
    Undly_16_set.insert("1677282145");
    Undly_16.add_attribute("Mat", "UnderlyingMaturityDate_t_637994308"); // 1
    Undly_16_set.insert("UnderlyingMaturityDate_t_637994308");
    Undly_16.add_attribute("MatTm", "725804375"); // 1
    Undly_16_set.insert("725804375");
    Undly_16.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1047915870"); // 1
    Undly_16_set.insert("UnderlyingCouponPaymentDate_t_1047915870");
    Undly_16.add_attribute("RestrctTyp", "FR"); // 1
    Undly_16_set.insert("FR");
    Undly_16.add_attribute("Snrty", "SD"); // 1
    Undly_16_set.insert("SD");
    Undly_16.add_attribute("NotlPctOut", "14393366.630000"); // 1
    Undly_16_set.insert("14393366.630000");
    Undly_16.add_attribute("OrigNotlPctOut", "2049793.370000"); // 1
    Undly_16_set.insert("2049793.370000");
    Undly_16.add_attribute("AttchPnt", "6707908.830000"); // 1
    Undly_16_set.insert("6707908.830000");
    Undly_16.add_attribute("DetchPnt", "5872799.310000"); // 1
    Undly_16_set.insert("5872799.310000");
    Undly_16.add_attribute("Issued", "UnderlyingIssueDate_t_186386804"); // 1
    Undly_16_set.insert("UnderlyingIssueDate_t_186386804");
    Undly_16.add_attribute("RepoCollSecTyp", "991284416"); // 1
    Undly_16_set.insert("991284416");
    Undly_16.add_attribute("RepoTrm", "550608669"); // 1
    Undly_16_set.insert("550608669");
    Undly_16.add_attribute("RepoRt", "15273009.090000"); // 1
    Undly_16_set.insert("15273009.090000");
    Undly_16.add_attribute("Fctr", "12236930.300000"); // 1
    Undly_16_set.insert("12236930.300000");
    Undly_16.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1980505267"); // 1
    Undly_16_set.insert("UnderlyingCreditRating_t_1980505267");
    Undly_16.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1768258432"); // 1
    Undly_16_set.insert("UnderlyingInstrRegistry_t_1768258432");
    Undly_16.add_attribute("Ctry", "865348018"); // 1
    Undly_16_set.insert("865348018");
    Undly_16.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1121885623"); // 1
    Undly_16_set.insert("UnderlyingStateOrProvinceOfIssue_t_1121885623");
    Undly_16.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1701165199"); // 1
    Undly_16_set.insert("UnderlyingLocaleOfIssue_t_1701165199");
    Undly_16.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1556486225"); // 1
    Undly_16_set.insert("UnderlyingRedemptionDate_t_1556486225");
    Undly_16.add_attribute("StrkPx", "4074501.790000"); // 1
    Undly_16_set.insert("4074501.790000");
    Undly_16.add_attribute("StrkCcy", "EUR"); // 1
    Undly_16_set.insert("EUR");
    Undly_16.add_attribute("OptA", "1945271551"); // 1
    Undly_16_set.insert("1945271551");
    Undly_16.add_attribute("Mult", "20481618.420000"); // 1
    Undly_16_set.insert("20481618.420000");
    Undly_16.add_attribute("MultTyp", "0"); // 1
    Undly_16_set.insert("0");
    Undly_16.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_16_set.insert("4");
    Undly_16.add_attribute("UOM", "MMBtu"); // 1
    Undly_16_set.insert("MMBtu");
    Undly_16.add_attribute("UOMQty", "10160305.420000"); // 1
    Undly_16_set.insert("10160305.420000");
    Undly_16.add_attribute("PxUOM", "lbs"); // 1
    Undly_16_set.insert("lbs");
    Undly_16.add_attribute("PxUOMQty", "3208160.630000"); // 1
    Undly_16_set.insert("3208160.630000");
    Undly_16.add_attribute("TmUnit", "H"); // 1
    Undly_16_set.insert("H");
    Undly_16.add_attribute("ExerStyle", "2"); // 1
    Undly_16_set.insert("2");
    Undly_16.add_attribute("CpnRt", "13687319.340000"); // 1
    Undly_16_set.insert("13687319.340000");
    Undly_16.add_attribute("Exch", "UnderlyingSecurityExchange_t_1355882802"); // 1
    Undly_16_set.insert("UnderlyingSecurityExchange_t_1355882802");
    Undly_16.add_attribute("Issr", "UnderlyingIssuer_t_1916255603"); // 1
    Undly_16_set.insert("UnderlyingIssuer_t_1916255603");
    Undly_16.add_attribute("EncUndIssrLen", "660584949"); // 1
    Undly_16_set.insert("660584949");
    Undly_16.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1560862140"); // 1
    Undly_16_set.insert("EncodedUnderlyingIssuer_t_1560862140");
    Undly_16.add_attribute("Desc", "UnderlyingSecurityDesc_t_439562838"); // 1
    Undly_16_set.insert("UnderlyingSecurityDesc_t_439562838");
    Undly_16.add_attribute("EncUndSecDescLen", "1247864880"); // 1
    Undly_16_set.insert("1247864880");
    Undly_16.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1747248944"); // 1
    Undly_16_set.insert("EncodedUnderlyingSecurityDesc_t_1747248944");
    Undly_16.add_attribute("CPPgm", "UnderlyingCPProgram_t_1430847255"); // 1
    Undly_16_set.insert("UnderlyingCPProgram_t_1430847255");
    Undly_16.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1798473549"); // 1
    Undly_16_set.insert("UnderlyingCPRegType_t_1798473549");
    Undly_16.add_attribute("AllocPct", "11270662.050000"); // 1
    Undly_16_set.insert("11270662.050000");
    Undly_16.add_attribute("Ccy", "GBP"); // 1
    Undly_16_set.insert("GBP");
    Undly_16.add_attribute("Qty", "7478409.890000"); // 1
    Undly_16_set.insert("7478409.890000");
    Undly_16.add_attribute("SettlTyp", "4"); // 1
    Undly_16_set.insert("4");
    Undly_16.add_attribute("CashAmt", "UnderlyingCashAmount_t_605897144"); // 1
    Undly_16_set.insert("UnderlyingCashAmount_t_605897144");
    Undly_16.add_attribute("CashTyp", "DIFF"); // 1
    Undly_16_set.insert("DIFF");
    Undly_16.add_attribute("Px", "7814072.330000"); // 1
    Undly_16_set.insert("7814072.330000");
    Undly_16.add_attribute("DirtPx", "10133473.230000"); // 1
    Undly_16_set.insert("10133473.230000");
    Undly_16.add_attribute("EndPx", "6917665.140000"); // 1
    Undly_16_set.insert("6917665.140000");
    Undly_16.add_attribute("StartVal", "UnderlyingStartValue_t_1777595832"); // 1
    Undly_16_set.insert("UnderlyingStartValue_t_1777595832");
    Undly_16.add_attribute("CurVal", "UnderlyingCurrentValue_t_811135226"); // 1
    Undly_16_set.insert("UnderlyingCurrentValue_t_811135226");
    Undly_16.add_attribute("EndVal", "UnderlyingEndValue_t_592444709"); // 1
    Undly_16_set.insert("UnderlyingEndValue_t_592444709");
    Undly_16.add_attribute("AdjQty", "1648092.580000"); // 1
    Undly_16_set.insert("1648092.580000");
    Undly_16.add_attribute("FxRate", "18313025.610000"); // 1
    Undly_16_set.insert("18313025.610000");
    Undly_16.add_attribute("FxRateCalc", "D"); // 1
    Undly_16_set.insert("D");
    Undly_16.add_attribute("CapValu", "UnderlyingCapValue_t_1180839800"); // 1
    Undly_16_set.insert("UnderlyingCapValue_t_1180839800");
    Undly_16.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1194918549"); // 1
    Undly_16_set.insert("UnderlyingSettlMethod_t_1194918549");
    Undly_16.add_attribute("PutCall", "1704278339"); // 1
    Undly_16_set.insert("1704278339");
    all_values.push_back(Undly_16_set);
    all_compo_names.insert("Undly_16_set");

    {
      xml_element UndAID_16{"UndAID"};
      multiset<string> UndAID_16_set;
      UndAID_16.add_attribute("AltID", "UnderlyingSecurityAltID_t_687381002"); // 2
      UndAID_16_set.insert("UnderlyingSecurityAltID_t_687381002");
      UndAID_16.add_attribute("AltIDSrc", "B"); // 2
      UndAID_16_set.insert("B");
      all_values.push_back(UndAID_16_set);
      all_compo_names.insert("UndAID_16_set");

      Undly_16.add_element(UndAID_16);
    }
    {
      xml_element Stip_22{"Stip"};
      multiset<string> Stip_22_set;
      Stip_22.add_attribute("Typ", "REFTRADE"); // 2
      Stip_22_set.insert("REFTRADE");
      Stip_22.add_attribute("Val", "UnderlyingStipValue_t_2043263805"); // 2
      Stip_22_set.insert("UnderlyingStipValue_t_2043263805");
      all_values.push_back(Stip_22_set);
      all_compo_names.insert("Stip_22_set");

      Undly_16.add_element(Stip_22);
    }
    {
      xml_element Pty_92{"Pty"};
      multiset<string> Pty_92_set;
      Pty_92.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1053110867"); // 2
      Pty_92_set.insert("UnderlyingInstrumentPartyID_t_1053110867");
      Pty_92.add_attribute("Src", "D"); // 2
      Pty_92_set.insert("D");
      Pty_92.add_attribute("R", "63"); // 2
      Pty_92_set.insert("63");
      all_values.push_back(Pty_92_set);
      all_compo_names.insert("Pty_92_set");

      {
        xml_element Sub_92{"Sub"};
        multiset<string> Sub_92_set;
        Sub_92.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1492673706"); // 3
        Sub_92_set.insert("UnderlyingInstrumentPartySubID_t_1492673706");
        Sub_92.add_attribute("Typ", "2"); // 3
        Sub_92_set.insert("2");
        all_values.push_back(Sub_92_set);
        all_compo_names.insert("Sub_92_set");

        Pty_92.add_element(Sub_92);
      }
      Undly_16.add_element(Pty_92);
    }
    elt.add_element(Undly_16);
  } // end Undly
  { // TrdRegTS
    xml_element TrdRegTS_3{"TrdRegTS"};
    multiset<string> TrdRegTS_3_set;
    TrdRegTS_3.add_attribute("TS", "TrdRegTimestamp_t_776037313"); // 1
    TrdRegTS_3_set.insert("TrdRegTimestamp_t_776037313");
    TrdRegTS_3.add_attribute("Typ", "4"); // 1
    TrdRegTS_3_set.insert("4");
    TrdRegTS_3.add_attribute("Src", "TrdRegTimestampOrigin_t_35990150"); // 1
    TrdRegTS_3_set.insert("TrdRegTimestampOrigin_t_35990150");
    TrdRegTS_3.add_attribute("DskTyp", "PF"); // 1
    TrdRegTS_3_set.insert("PF");
    TrdRegTS_3.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_3_set.insert("1");
    TrdRegTS_3.add_attribute("DskOrdHndlInst", "SCL"); // 1
    TrdRegTS_3_set.insert("SCL");
    all_values.push_back(TrdRegTS_3_set);
    all_compo_names.insert("TrdRegTS_3_set");

    elt.add_element(TrdRegTS_3);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_4{"TrdRegTS"};
    multiset<string> TrdRegTS_4_set;
    TrdRegTS_4.add_attribute("TS", "TrdRegTimestamp_t_508014957"); // 1
    TrdRegTS_4_set.insert("TrdRegTimestamp_t_508014957");
    TrdRegTS_4.add_attribute("Typ", "4"); // 1
    TrdRegTS_4_set.insert("4");
    TrdRegTS_4.add_attribute("Src", "TrdRegTimestampOrigin_t_1085353681"); // 1
    TrdRegTS_4_set.insert("TrdRegTimestampOrigin_t_1085353681");
    TrdRegTS_4.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_4_set.insert("AR");
    TrdRegTS_4.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_4_set.insert("1");
    TrdRegTS_4.add_attribute("DskOrdHndlInst", "S.W"); // 1
    TrdRegTS_4_set.insert("S.W");
    all_values.push_back(TrdRegTS_4_set);
    all_compo_names.insert("TrdRegTS_4_set");

    elt.add_element(TrdRegTS_4);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_11{"MiscFees"};
    multiset<string> MiscFees_11_set;
    MiscFees_11.add_attribute("Amt", "MiscFeeAmt_t_104390275"); // 1
    MiscFees_11_set.insert("MiscFeeAmt_t_104390275");
    MiscFees_11.add_attribute("Curr", "JPY"); // 1
    MiscFees_11_set.insert("JPY");
    MiscFees_11.add_attribute("Typ", "1"); // 1
    MiscFees_11_set.insert("1");
    MiscFees_11.add_attribute("Basis", "1"); // 1
    MiscFees_11_set.insert("1");
    all_values.push_back(MiscFees_11_set);
    all_compo_names.insert("MiscFees_11_set");

    elt.add_element(MiscFees_11);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_5{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_5_set;
    SprdBnchmkCurve_5.add_attribute("Spread", "1176997.840000"); // 1
    SprdBnchmkCurve_5_set.insert("1176997.840000");
    SprdBnchmkCurve_5.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_5_set.insert("EUR");
    SprdBnchmkCurve_5.add_attribute("Name", "OTHER"); // 1
    SprdBnchmkCurve_5_set.insert("OTHER");
    SprdBnchmkCurve_5.add_attribute("Point", "BenchmarkCurvePoint_t_119983001"); // 1
    SprdBnchmkCurve_5_set.insert("BenchmarkCurvePoint_t_119983001");
    SprdBnchmkCurve_5.add_attribute("Px", "20878648.480000"); // 1
    SprdBnchmkCurve_5_set.insert("20878648.480000");
    SprdBnchmkCurve_5.add_attribute("PxTyp", "11"); // 1
    SprdBnchmkCurve_5_set.insert("11");
    SprdBnchmkCurve_5.add_attribute("SecID", "BenchmarkSecurityID_t_1173093868"); // 1
    SprdBnchmkCurve_5_set.insert("BenchmarkSecurityID_t_1173093868");
    SprdBnchmkCurve_5.add_attribute("SecIDSrc", "5"); // 1
    SprdBnchmkCurve_5_set.insert("5");
    all_values.push_back(SprdBnchmkCurve_5_set);
    all_compo_names.insert("SprdBnchmkCurve_5_set");

    elt.add_element(SprdBnchmkCurve_5);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_23{"Stip"};
    multiset<string> Stip_23_set;
    Stip_23.add_attribute("Typ", "CPP"); // 1
    Stip_23_set.insert("CPP");
    Stip_23.add_attribute("Val", "StipulationValue_t_65501933"); // 1
    Stip_23_set.insert("StipulationValue_t_65501933");
    all_values.push_back(Stip_23_set);
    all_compo_names.insert("Stip_23_set");

    elt.add_element(Stip_23);
  } // end Stip
  { // Stip
    xml_element Stip_24{"Stip"};
    multiset<string> Stip_24_set;
    Stip_24.add_attribute("Typ", "REFPRIN"); // 1
    Stip_24_set.insert("REFPRIN");
    Stip_24.add_attribute("Val", "StipulationValue_t_1294321239"); // 1
    Stip_24_set.insert("StipulationValue_t_1294321239");
    all_values.push_back(Stip_24_set);
    all_compo_names.insert("Stip_24_set");

    elt.add_element(Stip_24);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_11{"SetInstr"};
    multiset<string> SetInstr_11_set;
    SetInstr_11.add_attribute("DlvryTyp", "2"); // 1
    SetInstr_11_set.insert("2");
    SetInstr_11.add_attribute("StandInstDbTyp", "1"); // 1
    SetInstr_11_set.insert("1");
    SetInstr_11.add_attribute("StandInstDbName", "StandInstDbName_t_429931541"); // 1
    SetInstr_11_set.insert("StandInstDbName_t_429931541");
    SetInstr_11.add_attribute("StandInstDbID", "StandInstDbID_t_224478871"); // 1
    SetInstr_11_set.insert("StandInstDbID_t_224478871");
    all_values.push_back(SetInstr_11_set);
    all_compo_names.insert("SetInstr_11_set");

    {
      xml_element DlvInst_11{"DlvInst"};
      multiset<string> DlvInst_11_set;
      DlvInst_11.add_attribute("InstSrc", "1"); // 2
      DlvInst_11_set.insert("1");
      DlvInst_11.add_attribute("InstTyp", "S"); // 2
      DlvInst_11_set.insert("S");
      all_values.push_back(DlvInst_11_set);
      all_compo_names.insert("DlvInst_11_set");

      {
        xml_element Pty_93{"Pty"};
        multiset<string> Pty_93_set;
        Pty_93.add_attribute("ID", "SettlPartyID_t_651870244"); // 3
        Pty_93_set.insert("SettlPartyID_t_651870244");
        Pty_93.add_attribute("Src", "C"); // 3
        Pty_93_set.insert("C");
        Pty_93.add_attribute("R", "6"); // 3
        Pty_93_set.insert("6");
        all_values.push_back(Pty_93_set);
        all_compo_names.insert("Pty_93_set");

        {
          xml_element Sub_93{"Sub"};
          multiset<string> Sub_93_set;
          Sub_93.add_attribute("ID", "SettlPartySubID_t_2092608940"); // 4
          Sub_93_set.insert("SettlPartySubID_t_2092608940");
          Sub_93.add_attribute("Typ", "17"); // 4
          Sub_93_set.insert("17");
          all_values.push_back(Sub_93_set);
          all_compo_names.insert("Sub_93_set");

          Pty_93.add_element(Sub_93);
        }
        DlvInst_11.add_element(Pty_93);
      }
      SetInstr_11.add_element(DlvInst_11);
    }
    elt.add_element(SetInstr_11);
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
