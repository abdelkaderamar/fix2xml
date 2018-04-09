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
  elt.add_attribute("RptID", "CollRptID_t_1749793152"); // 0
  CollateralReport_message_t_0.insert("CollRptID_t_1749793152");
  elt.add_attribute("ID", "CollInquiryID_t_725506701"); // 0
  CollateralReport_message_t_0.insert("CollInquiryID_t_725506701");
  elt.add_attribute("TxnTm", "TransactTime_t_1100809271"); // 0
  CollateralReport_message_t_0.insert("TransactTime_t_1100809271");
  elt.add_attribute("ApplTyp", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("FinclStat", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("Stat", "4"); // 0
  CollateralReport_message_t_0.insert("4");
  elt.add_attribute("TotNumRpts", "421732399"); // 0
  CollateralReport_message_t_0.insert("421732399");
  elt.add_attribute("LastRptReqed", "Y"); // 0
  CollateralReport_message_t_0.insert("Y");
  elt.add_attribute("Acct", "Account_t_909902378"); // 0
  CollateralReport_message_t_0.insert("Account_t_909902378");
  elt.add_attribute("AcctTyp", "2"); // 0
  CollateralReport_message_t_0.insert("2");
  elt.add_attribute("ClOrdID", "ClOrdID_t_406591785"); // 0
  CollateralReport_message_t_0.insert("ClOrdID_t_406591785");
  elt.add_attribute("OrdID", "OrderID_t_705991270"); // 0
  CollateralReport_message_t_0.insert("OrderID_t_705991270");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1959049848"); // 0
  CollateralReport_message_t_0.insert("SecondaryOrderID_t_1959049848");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_637438548"); // 0
  CollateralReport_message_t_0.insert("SecondaryClOrdID_t_637438548");
  elt.add_attribute("SettlDt", "SettlDate_t_548418465"); // 0
  CollateralReport_message_t_0.insert("SettlDate_t_548418465");
  elt.add_attribute("Qty", "14591774.360000"); // 0
  CollateralReport_message_t_0.insert("14591774.360000");
  elt.add_attribute("QtyTyp", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("Ccy", "CAN"); // 0
  CollateralReport_message_t_0.insert("CAN");
  elt.add_attribute("MgnExcess", "MarginExcess_t_246501571"); // 0
  CollateralReport_message_t_0.insert("MarginExcess_t_246501571");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1319548438"); // 0
  CollateralReport_message_t_0.insert("TotalNetValue_t_1319548438");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_555774418"); // 0
  CollateralReport_message_t_0.insert("CashOutstanding_t_555774418");
  elt.add_attribute("Side", "8"); // 0
  CollateralReport_message_t_0.insert("8");
  elt.add_attribute("Px", "7533560.370000"); // 0
  CollateralReport_message_t_0.insert("7533560.370000");
  elt.add_attribute("PxTyp", "14"); // 0
  CollateralReport_message_t_0.insert("14");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1504582330"); // 0
  CollateralReport_message_t_0.insert("AccruedInterestAmt_t_1504582330");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1888852225"); // 0
  CollateralReport_message_t_0.insert("EndAccruedInterestAmt_t_1888852225");
  elt.add_attribute("StartCsh", "StartCash_t_573690349"); // 0
  CollateralReport_message_t_0.insert("StartCash_t_573690349");
  elt.add_attribute("EndCsh", "EndCash_t_552893850"); // 0
  CollateralReport_message_t_0.insert("EndCash_t_552893850");
  elt.add_attribute("SesID", "1"); // 0
  CollateralReport_message_t_0.insert("1");
  elt.add_attribute("SesSub", "7"); // 0
  CollateralReport_message_t_0.insert("7");
  elt.add_attribute("SetSesID", "ETH"); // 0
  CollateralReport_message_t_0.insert("ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_715175905"); // 0
  CollateralReport_message_t_0.insert("SettlSessSubID_t_715175905");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1589718915"); // 0
  CollateralReport_message_t_0.insert("ClearingBusinessDate_t_1589718915");
  elt.add_attribute("Txt", "Text_t_729141316"); // 0
  CollateralReport_message_t_0.insert("Text_t_729141316");
  elt.add_attribute("EncTxtLen", "1198922686"); // 0
  CollateralReport_message_t_0.insert("1198922686");
  elt.add_attribute("EncTxt", "EncodedText_t_1471780942"); // 0
  CollateralReport_message_t_0.insert("EncodedText_t_1471780942");
  all_values.push_back(CollateralReport_message_t_0);
  all_compo_names.insert("CollateralReport_message_t");

  { // Hdr
    xml_element Hdr_17{"Hdr"};
    multiset<string> Hdr_17_set;
    Hdr_17.add_attribute("SeqNum", "1150873715"); // 1
    Hdr_17_set.insert("1150873715");
    Hdr_17.add_attribute("SID", "SenderCompID_t_455044578"); // 1
    Hdr_17_set.insert("SenderCompID_t_455044578");
    Hdr_17.add_attribute("TID", "TargetCompID_t_234199672"); // 1
    Hdr_17_set.insert("TargetCompID_t_234199672");
    Hdr_17.add_attribute("OBID", "OnBehalfOfCompID_t_1882438137"); // 1
    Hdr_17_set.insert("OnBehalfOfCompID_t_1882438137");
    Hdr_17.add_attribute("D2ID", "DeliverToCompID_t_861636363"); // 1
    Hdr_17_set.insert("DeliverToCompID_t_861636363");
    Hdr_17.add_attribute("SSub", "SenderSubID_t_940190942"); // 1
    Hdr_17_set.insert("SenderSubID_t_940190942");
    Hdr_17.add_attribute("SLoc", "SenderLocationID_t_1694004337"); // 1
    Hdr_17_set.insert("SenderLocationID_t_1694004337");
    Hdr_17.add_attribute("TSub", "TargetSubID_t_1499074911"); // 1
    Hdr_17_set.insert("TargetSubID_t_1499074911");
    Hdr_17.add_attribute("TLoc", "TargetLocationID_t_1488609407"); // 1
    Hdr_17_set.insert("TargetLocationID_t_1488609407");
    Hdr_17.add_attribute("OBSub", "OnBehalfOfSubID_t_1005698126"); // 1
    Hdr_17_set.insert("OnBehalfOfSubID_t_1005698126");
    Hdr_17.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1036962327"); // 1
    Hdr_17_set.insert("OnBehalfOfLocationID_t_1036962327");
    Hdr_17.add_attribute("D2Sub", "DeliverToSubID_t_604932672"); // 1
    Hdr_17_set.insert("DeliverToSubID_t_604932672");
    Hdr_17.add_attribute("D2Loc", "DeliverToLocationID_t_720557081"); // 1
    Hdr_17_set.insert("DeliverToLocationID_t_720557081");
    Hdr_17.add_attribute("PosDup", "N"); // 1
    Hdr_17_set.insert("N");
    Hdr_17.add_attribute("PosRsnd", "N"); // 1
    Hdr_17_set.insert("N");
    Hdr_17.add_attribute("Snt", "SendingTime_t_1276331500"); // 1
    Hdr_17_set.insert("SendingTime_t_1276331500");
    Hdr_17.add_attribute("OrigSnt", "OrigSendingTime_t_1311146129"); // 1
    Hdr_17_set.insert("OrigSendingTime_t_1311146129");
    Hdr_17.add_attribute("MsgEncd", "MessageEncoding_t_530353499"); // 1
    Hdr_17_set.insert("MessageEncoding_t_530353499");
    all_values.push_back(Hdr_17_set);
    all_compo_names.insert("Hdr_17_set");

    {
      xml_element Hop_17{"Hop"};
      multiset<string> Hop_17_set;
      Hop_17.add_attribute("ID", "HopCompID_t_2001282106"); // 2
      Hop_17_set.insert("HopCompID_t_2001282106");
      Hop_17.add_attribute("Ref", "668244812"); // 2
      Hop_17_set.insert("668244812");
      Hop_17.add_attribute("Snt", "HopSendingTime_t_271722077"); // 2
      Hop_17_set.insert("HopSendingTime_t_271722077");
      all_values.push_back(Hop_17_set);
      all_compo_names.insert("Hop_17_set");

      Hdr_17.add_element(Hop_17);
    }
    elt.add_element(Hdr_17);
  } // end Hdr
  { // Pty
    xml_element Pty_72{"Pty"};
    multiset<string> Pty_72_set;
    Pty_72.add_attribute("ID", "PartyID_t_1221138662"); // 1
    Pty_72_set.insert("PartyID_t_1221138662");
    Pty_72.add_attribute("Src", "G"); // 1
    Pty_72_set.insert("G");
    Pty_72.add_attribute("R", "5"); // 1
    Pty_72_set.insert("5");
    all_values.push_back(Pty_72_set);
    all_compo_names.insert("Pty_72_set");

    {
      xml_element Sub_72{"Sub"};
      multiset<string> Sub_72_set;
      Sub_72.add_attribute("ID", "PartySubID_t_1376342017"); // 2
      Sub_72_set.insert("PartySubID_t_1376342017");
      Sub_72.add_attribute("Typ", "11"); // 2
      Sub_72_set.insert("11");
      all_values.push_back(Sub_72_set);
      all_compo_names.insert("Sub_72_set");

      Pty_72.add_element(Sub_72);
    }
    elt.add_element(Pty_72);
  } // end Pty
  { // Pty
    xml_element Pty_73{"Pty"};
    multiset<string> Pty_73_set;
    Pty_73.add_attribute("ID", "PartyID_t_358633720"); // 1
    Pty_73_set.insert("PartyID_t_358633720");
    Pty_73.add_attribute("Src", "6"); // 1
    Pty_73_set.insert("6");
    Pty_73.add_attribute("R", "60"); // 1
    Pty_73_set.insert("60");
    all_values.push_back(Pty_73_set);
    all_compo_names.insert("Pty_73_set");

    {
      xml_element Sub_73{"Sub"};
      multiset<string> Sub_73_set;
      Sub_73.add_attribute("ID", "PartySubID_t_1830414662"); // 2
      Sub_73_set.insert("PartySubID_t_1830414662");
      Sub_73.add_attribute("Typ", "17"); // 2
      Sub_73_set.insert("17");
      all_values.push_back(Sub_73_set);
      all_compo_names.insert("Sub_73_set");

      Pty_73.add_element(Sub_73);
    }
    elt.add_element(Pty_73);
  } // end Pty
  { // CollExc
    xml_element CollExc_6{"CollExc"};
    multiset<string> CollExc_6_set;
    CollExc_6.add_attribute("ExecID", "ExecID_t_2064614334"); // 1
    CollExc_6_set.insert("ExecID_t_2064614334");
    all_values.push_back(CollExc_6_set);
    all_compo_names.insert("CollExc_6_set");

    elt.add_element(CollExc_6);
  } // end CollExc
  { // CollExc
    xml_element CollExc_7{"CollExc"};
    multiset<string> CollExc_7_set;
    CollExc_7.add_attribute("ExecID", "ExecID_t_843827890"); // 1
    CollExc_7_set.insert("ExecID_t_843827890");
    all_values.push_back(CollExc_7_set);
    all_compo_names.insert("CollExc_7_set");

    elt.add_element(CollExc_7);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_7{"TrdColl"};
    multiset<string> TrdColl_7_set;
    TrdColl_7.add_attribute("RptID", "TradeReportID_t_857321628"); // 1
    TrdColl_7_set.insert("TradeReportID_t_857321628");
    TrdColl_7.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_390348579"); // 1
    TrdColl_7_set.insert("SecondaryTradeReportID_t_390348579");
    all_values.push_back(TrdColl_7_set);
    all_compo_names.insert("TrdColl_7_set");

    elt.add_element(TrdColl_7);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_8{"TrdColl"};
    multiset<string> TrdColl_8_set;
    TrdColl_8.add_attribute("RptID", "TradeReportID_t_696278430"); // 1
    TrdColl_8_set.insert("TradeReportID_t_696278430");
    TrdColl_8.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_198447387"); // 1
    TrdColl_8_set.insert("SecondaryTradeReportID_t_198447387");
    all_values.push_back(TrdColl_8_set);
    all_compo_names.insert("TrdColl_8_set");

    elt.add_element(TrdColl_8);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_9{"TrdColl"};
    multiset<string> TrdColl_9_set;
    TrdColl_9.add_attribute("RptID", "TradeReportID_t_1396046705"); // 1
    TrdColl_9_set.insert("TradeReportID_t_1396046705");
    TrdColl_9.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1733240757"); // 1
    TrdColl_9_set.insert("SecondaryTradeReportID_t_1733240757");
    all_values.push_back(TrdColl_9_set);
    all_compo_names.insert("TrdColl_9_set");

    elt.add_element(TrdColl_9);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_9{"Instrmt"};
    multiset<string> Instrmt_9_set;
    Instrmt_9.add_attribute("Sym", "Symbol_t_803380059"); // 1
    Instrmt_9_set.insert("Symbol_t_803380059");
    Instrmt_9.add_attribute("Sfx", "WI"); // 1
    Instrmt_9_set.insert("WI");
    Instrmt_9.add_attribute("ID", "SecurityID_t_869221007"); // 1
    Instrmt_9_set.insert("SecurityID_t_869221007");
    Instrmt_9.add_attribute("Src", "B"); // 1
    Instrmt_9_set.insert("B");
    Instrmt_9.add_attribute("Prod", "12"); // 1
    Instrmt_9_set.insert("12");
    Instrmt_9.add_attribute("ProdCmplx", "ProductComplex_t_32883489"); // 1
    Instrmt_9_set.insert("ProductComplex_t_32883489");
    Instrmt_9.add_attribute("SecGrp", "SecurityGroup_t_1110731021"); // 1
    Instrmt_9_set.insert("SecurityGroup_t_1110731021");
    Instrmt_9.add_attribute("CFI", "CFICode_t_1099250097"); // 1
    Instrmt_9_set.insert("CFICode_t_1099250097");
    Instrmt_9.add_attribute("SecTyp", "FOR"); // 1
    Instrmt_9_set.insert("FOR");
    Instrmt_9.add_attribute("SubTyp", "SecuritySubType_t_1382453098"); // 1
    Instrmt_9_set.insert("SecuritySubType_t_1382453098");
    Instrmt_9.add_attribute("MMY", "1526738905"); // 1
    Instrmt_9_set.insert("1526738905");
    Instrmt_9.add_attribute("MatDt", "MaturityDate_t_1922266963"); // 1
    Instrmt_9_set.insert("MaturityDate_t_1922266963");
    Instrmt_9.add_attribute("MatTm", "1643844380"); // 1
    Instrmt_9_set.insert("1643844380");
    Instrmt_9.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_295653710"); // 1
    Instrmt_9_set.insert("SettleOnOpenFlag_t_295653710");
    Instrmt_9.add_attribute("AsgnMeth", "1151125332"); // 1
    Instrmt_9_set.insert("1151125332");
    Instrmt_9.add_attribute("Status", "2"); // 1
    Instrmt_9_set.insert("2");
    Instrmt_9.add_attribute("CpnPmt", "CouponPaymentDate_t_654287430"); // 1
    Instrmt_9_set.insert("CouponPaymentDate_t_654287430");
    Instrmt_9.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_9_set.insert("MR");
    Instrmt_9.add_attribute("Snrty", "SD"); // 1
    Instrmt_9_set.insert("SD");
    Instrmt_9.add_attribute("NotlPctOut", "3372184.440000"); // 1
    Instrmt_9_set.insert("3372184.440000");
    Instrmt_9.add_attribute("OrigNotlPctOut", "705147.700000"); // 1
    Instrmt_9_set.insert("705147.700000");
    Instrmt_9.add_attribute("AttchPnt", "9839849.480000"); // 1
    Instrmt_9_set.insert("9839849.480000");
    Instrmt_9.add_attribute("DetchPnt", "2543491.300000"); // 1
    Instrmt_9_set.insert("2543491.300000");
    Instrmt_9.add_attribute("Issued", "IssueDate_t_914342660"); // 1
    Instrmt_9_set.insert("IssueDate_t_914342660");
    Instrmt_9.add_attribute("RepoCollSecTyp", "181188467"); // 1
    Instrmt_9_set.insert("181188467");
    Instrmt_9.add_attribute("RepoTrm", "1111670758"); // 1
    Instrmt_9_set.insert("1111670758");
    Instrmt_9.add_attribute("RepoRt", "13046912.390000"); // 1
    Instrmt_9_set.insert("13046912.390000");
    Instrmt_9.add_attribute("Fctr", "8774668.970000"); // 1
    Instrmt_9_set.insert("8774668.970000");
    Instrmt_9.add_attribute("CrdRtg", "CreditRating_t_1310118145"); // 1
    Instrmt_9_set.insert("CreditRating_t_1310118145");
    Instrmt_9.add_attribute("Rgstry", "InstrRegistry_t_553254297"); // 1
    Instrmt_9_set.insert("InstrRegistry_t_553254297");
    Instrmt_9.add_attribute("IssuCtry", "463224007"); // 1
    Instrmt_9_set.insert("463224007");
    Instrmt_9.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2113498205"); // 1
    Instrmt_9_set.insert("StateOrProvinceOfIssue_t_2113498205");
    Instrmt_9.add_attribute("Lcl", "LocaleOfIssue_t_522374436"); // 1
    Instrmt_9_set.insert("LocaleOfIssue_t_522374436");
    Instrmt_9.add_attribute("Redeem", "RedemptionDate_t_1332445014"); // 1
    Instrmt_9_set.insert("RedemptionDate_t_1332445014");
    Instrmt_9.add_attribute("StrkPx", "5463920.790000"); // 1
    Instrmt_9_set.insert("5463920.790000");
    Instrmt_9.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_9_set.insert("CHF");
    Instrmt_9.add_attribute("StrkMult", "16571231.000000"); // 1
    Instrmt_9_set.insert("16571231.000000");
    Instrmt_9.add_attribute("StrkValu", "7195925.240000"); // 1
    Instrmt_9_set.insert("7195925.240000");
    Instrmt_9.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_9_set.insert("2");
    Instrmt_9.add_attribute("StrkPxBndryPrcsn", "988477.820000"); // 1
    Instrmt_9_set.insert("988477.820000");
    Instrmt_9.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("OptAt", "388453283"); // 1
    Instrmt_9_set.insert("388453283");
    Instrmt_9.add_attribute("Mult", "3945014.920000"); // 1
    Instrmt_9_set.insert("3945014.920000");
    Instrmt_9.add_attribute("MultTyp", "0"); // 1
    Instrmt_9_set.insert("0");
    Instrmt_9.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_9_set.insert("2");
    Instrmt_9.add_attribute("MinPxIncr", "10487889.220000"); // 1
    Instrmt_9_set.insert("10487889.220000");
    Instrmt_9.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1954006822"); // 1
    Instrmt_9_set.insert("MinPriceIncrementAmount_t_1954006822");
    Instrmt_9.add_attribute("UOM", "Bbl"); // 1
    Instrmt_9_set.insert("Bbl");
    Instrmt_9.add_attribute("UOMQty", "13860073.660000"); // 1
    Instrmt_9_set.insert("13860073.660000");
    Instrmt_9.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_9_set.insert("Bbl");
    Instrmt_9.add_attribute("PxUOMQty", "1988166.460000"); // 1
    Instrmt_9_set.insert("1988166.460000");
    Instrmt_9.add_attribute("SettlMeth", "C"); // 1
    Instrmt_9_set.insert("C");
    Instrmt_9.add_attribute("ExerStyle", "2"); // 1
    Instrmt_9_set.insert("2");
    Instrmt_9.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("OptPayAmt", "OptPayoutAmount_t_604543606"); // 1
    Instrmt_9_set.insert("OptPayoutAmount_t_604543606");
    Instrmt_9.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_9_set.insert("PCTPAR");
    Instrmt_9.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_9_set.insert("FUT");
    Instrmt_9.add_attribute("ListMeth", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("CapPx", "5018424.920000"); // 1
    Instrmt_9_set.insert("5018424.920000");
    Instrmt_9.add_attribute("FlrPx", "17206960.180000"); // 1
    Instrmt_9_set.insert("17206960.180000");
    Instrmt_9.add_attribute("PutCall", "0"); // 1
    Instrmt_9_set.insert("0");
    Instrmt_9.add_attribute("FlexInd", "true"); // 1
    Instrmt_9_set.insert("true");
    Instrmt_9.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_9_set.insert("true");
    Instrmt_9.add_attribute("TmUnit", "S"); // 1
    Instrmt_9_set.insert("S");
    Instrmt_9.add_attribute("CpnRt", "6445593.550000"); // 1
    Instrmt_9_set.insert("6445593.550000");
    Instrmt_9.add_attribute("Exch", "SecurityExchange_t_123502240"); // 1
    Instrmt_9_set.insert("SecurityExchange_t_123502240");
    Instrmt_9.add_attribute("PosLmt", "1936707840"); // 1
    Instrmt_9_set.insert("1936707840");
    Instrmt_9.add_attribute("NTPosLmt", "1364151880"); // 1
    Instrmt_9_set.insert("1364151880");
    Instrmt_9.add_attribute("Issr", "Issuer_t_42475396"); // 1
    Instrmt_9_set.insert("Issuer_t_42475396");
    Instrmt_9.add_attribute("EncIssrLen", "681316743"); // 1
    Instrmt_9_set.insert("681316743");
    Instrmt_9.add_attribute("EncIssr", "EncodedIssuer_t_1462999662"); // 1
    Instrmt_9_set.insert("EncodedIssuer_t_1462999662");
    Instrmt_9.add_attribute("Desc", "SecurityDesc_t_1883715516"); // 1
    Instrmt_9_set.insert("SecurityDesc_t_1883715516");
    Instrmt_9.add_attribute("EncSecDescLen", "1069770026"); // 1
    Instrmt_9_set.insert("1069770026");
    Instrmt_9.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1857501154"); // 1
    Instrmt_9_set.insert("EncodedSecurityDesc_t_1857501154");
    Instrmt_9.add_attribute("Pool", "Pool_t_581113673"); // 1
    Instrmt_9_set.insert("Pool_t_581113673");
    Instrmt_9.add_attribute("CSetMo", "1931151228"); // 1
    Instrmt_9_set.insert("1931151228");
    Instrmt_9.add_attribute("CPPgm", "1"); // 1
    Instrmt_9_set.insert("1");
    Instrmt_9.add_attribute("CPRegT", "CPRegType_t_387636847"); // 1
    Instrmt_9_set.insert("CPRegType_t_387636847");
    Instrmt_9.add_attribute("Dated", "DatedDate_t_1145982926"); // 1
    Instrmt_9_set.insert("DatedDate_t_1145982926");
    Instrmt_9.add_attribute("IntAcrl", "InterestAccrualDate_t_2144813794"); // 1
    Instrmt_9_set.insert("InterestAccrualDate_t_2144813794");
    all_values.push_back(Instrmt_9_set);
    all_compo_names.insert("Instrmt_9_set");

    {
      xml_element AID_9{"AID"};
      multiset<string> AID_9_set;
      AID_9.add_attribute("AltID", "SecurityAltID_t_264674791"); // 2
      AID_9_set.insert("SecurityAltID_t_264674791");
      AID_9.add_attribute("AltIDSrc", "8"); // 2
      AID_9_set.insert("8");
      all_values.push_back(AID_9_set);
      all_compo_names.insert("AID_9_set");

      Instrmt_9.add_element(AID_9);
    }
    {
      xml_element SecXML_9{"SecXML"};
      multiset<string> SecXML_9_set;
      SecXML_9.add_attribute("Schema", "SecurityXMLSchema_t_1637686642"); // 2
      SecXML_9_set.insert("SecurityXMLSchema_t_1637686642");
      all_values.push_back(SecXML_9_set);
      all_compo_names.insert("SecXML_9_set");

      Instrmt_9.add_element(SecXML_9);
    }
    {
      xml_element Evnt_9{"Evnt"};
      multiset<string> Evnt_9_set;
      Evnt_9.add_attribute("EventTyp", "15"); // 2
      Evnt_9_set.insert("15");
      Evnt_9.add_attribute("Dt", "EventDate_t_1724804686"); // 2
      Evnt_9_set.insert("EventDate_t_1724804686");
      Evnt_9.add_attribute("Tm", "EventTime_t_94746600"); // 2
      Evnt_9_set.insert("EventTime_t_94746600");
      Evnt_9.add_attribute("Px", "10046435.900000"); // 2
      Evnt_9_set.insert("10046435.900000");
      Evnt_9.add_attribute("Txt", "EventText_t_834793049"); // 2
      Evnt_9_set.insert("EventText_t_834793049");
      all_values.push_back(Evnt_9_set);
      all_compo_names.insert("Evnt_9_set");

      Instrmt_9.add_element(Evnt_9);
    }
    {
      xml_element Pty_74{"Pty"};
      multiset<string> Pty_74_set;
      Pty_74.add_attribute("ID", "InstrumentPartyID_t_2009408351"); // 2
      Pty_74_set.insert("InstrumentPartyID_t_2009408351");
      Pty_74.add_attribute("Src", "6"); // 2
      Pty_74_set.insert("6");
      Pty_74.add_attribute("R", "4"); // 2
      Pty_74_set.insert("4");
      all_values.push_back(Pty_74_set);
      all_compo_names.insert("Pty_74_set");

      {
        xml_element Sub_74{"Sub"};
        multiset<string> Sub_74_set;
        Sub_74.add_attribute("ID", "InstrumentPartySubID_t_1742601012"); // 3
        Sub_74_set.insert("InstrumentPartySubID_t_1742601012");
        Sub_74.add_attribute("Typ", "33"); // 3
        Sub_74_set.insert("33");
        all_values.push_back(Sub_74_set);
        all_compo_names.insert("Sub_74_set");

        Pty_74.add_element(Sub_74);
      }
      Instrmt_9.add_element(Pty_74);
    }
    {
      xml_element CmplxEvnt_9{"CmplxEvnt"};
      multiset<string> CmplxEvnt_9_set;
      CmplxEvnt_9.add_attribute("Typ", "8"); // 2
      CmplxEvnt_9_set.insert("8");
      CmplxEvnt_9.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2022185751"); // 2
      CmplxEvnt_9_set.insert("ComplexOptPayoutAmount_t_2022185751");
      CmplxEvnt_9.add_attribute("Px", "10277787.190000"); // 2
      CmplxEvnt_9_set.insert("10277787.190000");
      CmplxEvnt_9.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_9_set.insert("5");
      CmplxEvnt_9.add_attribute("PxBndryPrcsn", "18114099.430000"); // 2
      CmplxEvnt_9_set.insert("18114099.430000");
      CmplxEvnt_9.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_9_set.insert("1");
      CmplxEvnt_9.add_attribute("Cond", "1"); // 2
      CmplxEvnt_9_set.insert("1");
      all_values.push_back(CmplxEvnt_9_set);
      all_compo_names.insert("CmplxEvnt_9_set");

      {
        xml_element EvntDts_9{"EvntDts"};
        multiset<string> EvntDts_9_set;
        EvntDts_9.add_attribute("StartDt", "ComplexEventStartDate_t_345243038"); // 3
        EvntDts_9_set.insert("ComplexEventStartDate_t_345243038");
        EvntDts_9.add_attribute("EndDt", "ComplexEventEndDate_t_1707446613"); // 3
        EvntDts_9_set.insert("ComplexEventEndDate_t_1707446613");
        all_values.push_back(EvntDts_9_set);
        all_compo_names.insert("EvntDts_9_set");

        {
          xml_element EvntTms_9{"EvntTms"};
          multiset<string> EvntTms_9_set;
          EvntTms_9.add_attribute("StartTm", "1215872309"); // 4
          EvntTms_9_set.insert("1215872309");
          EvntTms_9.add_attribute("EndTm", "1415013064"); // 4
          EvntTms_9_set.insert("1415013064");
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
    FinDetls_6.add_attribute("AgmtDesc", "AgreementDesc_t_1417464119"); // 1
    FinDetls_6_set.insert("AgreementDesc_t_1417464119");
    FinDetls_6.add_attribute("AgmtID", "AgreementID_t_1796985982"); // 1
    FinDetls_6_set.insert("AgreementID_t_1796985982");
    FinDetls_6.add_attribute("AgmtDt", "AgreementDate_t_1198680644"); // 1
    FinDetls_6_set.insert("AgreementDate_t_1198680644");
    FinDetls_6.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_6_set.insert("CHF");
    FinDetls_6.add_attribute("TrmTyp", "4"); // 1
    FinDetls_6_set.insert("4");
    FinDetls_6.add_attribute("StartDt", "StartDate_t_26117045"); // 1
    FinDetls_6_set.insert("StartDate_t_26117045");
    FinDetls_6.add_attribute("EndDt", "EndDate_t_301813972"); // 1
    FinDetls_6_set.insert("EndDate_t_301813972");
    FinDetls_6.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_6_set.insert("0");
    FinDetls_6.add_attribute("MgnRatio", "16638036.870000"); // 1
    FinDetls_6_set.insert("16638036.870000");
    all_values.push_back(FinDetls_6_set);
    all_compo_names.insert("FinDetls_6_set");

    elt.add_element(FinDetls_6);
  } // end FinDetls
  { // Leg
    xml_element Leg_15{"Leg"};
    multiset<string> Leg_15_set;
    Leg_15.add_attribute("Sym", "LegSymbol_t_1119300534"); // 1
    Leg_15_set.insert("LegSymbol_t_1119300534");
    Leg_15.add_attribute("Sfx", "WI"); // 1
    Leg_15_set.insert("WI");
    Leg_15.add_attribute("ID", "LegSecurityID_t_215029309"); // 1
    Leg_15_set.insert("LegSecurityID_t_215029309");
    Leg_15.add_attribute("Src", "F"); // 1
    Leg_15_set.insert("F");
    Leg_15.add_attribute("Prod", "13"); // 1
    Leg_15_set.insert("13");
    Leg_15.add_attribute("CFI", "LegCFICode_t_1721515392"); // 1
    Leg_15_set.insert("LegCFICode_t_1721515392");
    Leg_15.add_attribute("SecTyp", "DUAL"); // 1
    Leg_15_set.insert("DUAL");
    Leg_15.add_attribute("SecSubTyp", "LegSecuritySubType_t_1215592354"); // 1
    Leg_15_set.insert("LegSecuritySubType_t_1215592354");
    Leg_15.add_attribute("MMY", "2104734756"); // 1
    Leg_15_set.insert("2104734756");
    Leg_15.add_attribute("Mat", "LegMaturityDate_t_1528278159"); // 1
    Leg_15_set.insert("LegMaturityDate_t_1528278159");
    Leg_15.add_attribute("MatTm", "1090294458"); // 1
    Leg_15_set.insert("1090294458");
    Leg_15.add_attribute("CpnPmt", "LegCouponPaymentDate_t_985029827"); // 1
    Leg_15_set.insert("LegCouponPaymentDate_t_985029827");
    Leg_15.add_attribute("Issued", "LegIssueDate_t_817959555"); // 1
    Leg_15_set.insert("LegIssueDate_t_817959555");
    Leg_15.add_attribute("RepoCollSecTyp", "754220753"); // 1
    Leg_15_set.insert("754220753");
    Leg_15.add_attribute("RepoTrm", "1229476778"); // 1
    Leg_15_set.insert("1229476778");
    Leg_15.add_attribute("RepoRt", "1501163.480000"); // 1
    Leg_15_set.insert("1501163.480000");
    Leg_15.add_attribute("Fctr", "10994637.920000"); // 1
    Leg_15_set.insert("10994637.920000");
    Leg_15.add_attribute("CrdRtg", "LegCreditRating_t_789439743"); // 1
    Leg_15_set.insert("LegCreditRating_t_789439743");
    Leg_15.add_attribute("Rgstry", "LegInstrRegistry_t_1365988657"); // 1
    Leg_15_set.insert("LegInstrRegistry_t_1365988657");
    Leg_15.add_attribute("Ctry", "366993208"); // 1
    Leg_15_set.insert("366993208");
    Leg_15.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_59420214"); // 1
    Leg_15_set.insert("LegStateOrProvinceOfIssue_t_59420214");
    Leg_15.add_attribute("Lcl", "LegLocaleOfIssue_t_1015490991"); // 1
    Leg_15_set.insert("LegLocaleOfIssue_t_1015490991");
    Leg_15.add_attribute("Redeem", "LegRedemptionDate_t_1565673853"); // 1
    Leg_15_set.insert("LegRedemptionDate_t_1565673853");
    Leg_15.add_attribute("Strk", "882071.130000"); // 1
    Leg_15_set.insert("882071.130000");
    Leg_15.add_attribute("StrkCcy", "JPY"); // 1
    Leg_15_set.insert("JPY");
    Leg_15.add_attribute("OptA", "114324158"); // 1
    Leg_15_set.insert("114324158");
    Leg_15.add_attribute("Cmult", "13544441.440000"); // 1
    Leg_15_set.insert("13544441.440000");
    Leg_15.add_attribute("MultTyp", "0"); // 1
    Leg_15_set.insert("0");
    Leg_15.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_15_set.insert("0");
    Leg_15.add_attribute("UOM", "MWh"); // 1
    Leg_15_set.insert("MWh");
    Leg_15.add_attribute("UOMQty", "1291665.100000"); // 1
    Leg_15_set.insert("1291665.100000");
    Leg_15.add_attribute("PxUOM", "Bbl"); // 1
    Leg_15_set.insert("Bbl");
    Leg_15.add_attribute("PxUOMQty", "7798591.720000"); // 1
    Leg_15_set.insert("7798591.720000");
    Leg_15.add_attribute("TmUnit", "Yr"); // 1
    Leg_15_set.insert("Yr");
    Leg_15.add_attribute("ExerStyle", "1"); // 1
    Leg_15_set.insert("1");
    Leg_15.add_attribute("CpnRt", "3538909.170000"); // 1
    Leg_15_set.insert("3538909.170000");
    Leg_15.add_attribute("Exch", "LegSecurityExchange_t_150391802"); // 1
    Leg_15_set.insert("LegSecurityExchange_t_150391802");
    Leg_15.add_attribute("Issr", "LegIssuer_t_2077778181"); // 1
    Leg_15_set.insert("LegIssuer_t_2077778181");
    Leg_15.add_attribute("EncLegIssrLen", "311142025"); // 1
    Leg_15_set.insert("311142025");
    Leg_15.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1678669961"); // 1
    Leg_15_set.insert("EncodedLegIssuer_t_1678669961");
    Leg_15.add_attribute("Desc", "LegSecurityDesc_t_1020588991"); // 1
    Leg_15_set.insert("LegSecurityDesc_t_1020588991");
    Leg_15.add_attribute("EncLegSecDescLen", "1296171852"); // 1
    Leg_15_set.insert("1296171852");
    Leg_15.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_349145869"); // 1
    Leg_15_set.insert("EncodedLegSecurityDesc_t_349145869");
    Leg_15.add_attribute("RatioQty", "17748097.440000"); // 1
    Leg_15_set.insert("17748097.440000");
    Leg_15.add_attribute("Side", "7"); // 1
    Leg_15_set.insert("7");
    Leg_15.add_attribute("Ccy", "USD"); // 1
    Leg_15_set.insert("USD");
    Leg_15.add_attribute("Pool", "LegPool_t_1167604725"); // 1
    Leg_15_set.insert("LegPool_t_1167604725");
    Leg_15.add_attribute("Dated", "LegDatedDate_t_1865250874"); // 1
    Leg_15_set.insert("LegDatedDate_t_1865250874");
    Leg_15.add_attribute("CSetMo", "1093783097"); // 1
    Leg_15_set.insert("1093783097");
    Leg_15.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1227024939"); // 1
    Leg_15_set.insert("LegInterestAccrualDate_t_1227024939");
    Leg_15.add_attribute("PutCall", "733258217"); // 1
    Leg_15_set.insert("733258217");
    Leg_15.add_attribute("LegOptionRatio", "5119733.020000"); // 1
    Leg_15_set.insert("5119733.020000");
    Leg_15.add_attribute("Px", "13152320.520000"); // 1
    Leg_15_set.insert("13152320.520000");
    all_values.push_back(Leg_15_set);
    all_compo_names.insert("Leg_15_set");

    {
      xml_element LegAID_15{"LegAID"};
      multiset<string> LegAID_15_set;
      LegAID_15.add_attribute("SecAltID", "LegSecurityAltID_t_1785888389"); // 2
      LegAID_15_set.insert("LegSecurityAltID_t_1785888389");
      LegAID_15.add_attribute("SecAltIDSrc", "H"); // 2
      LegAID_15_set.insert("H");
      all_values.push_back(LegAID_15_set);
      all_compo_names.insert("LegAID_15_set");

      Leg_15.add_element(LegAID_15);
    }
    elt.add_element(Leg_15);
  } // end Leg
  { // Leg
    xml_element Leg_16{"Leg"};
    multiset<string> Leg_16_set;
    Leg_16.add_attribute("Sym", "LegSymbol_t_1429556210"); // 1
    Leg_16_set.insert("LegSymbol_t_1429556210");
    Leg_16.add_attribute("Sfx", "WI"); // 1
    Leg_16_set.insert("WI");
    Leg_16.add_attribute("ID", "LegSecurityID_t_1284693054"); // 1
    Leg_16_set.insert("LegSecurityID_t_1284693054");
    Leg_16.add_attribute("Src", "E"); // 1
    Leg_16_set.insert("E");
    Leg_16.add_attribute("Prod", "11"); // 1
    Leg_16_set.insert("11");
    Leg_16.add_attribute("CFI", "LegCFICode_t_1413859564"); // 1
    Leg_16_set.insert("LegCFICode_t_1413859564");
    Leg_16.add_attribute("SecTyp", "BDN"); // 1
    Leg_16_set.insert("BDN");
    Leg_16.add_attribute("SecSubTyp", "LegSecuritySubType_t_190054272"); // 1
    Leg_16_set.insert("LegSecuritySubType_t_190054272");
    Leg_16.add_attribute("MMY", "1349636011"); // 1
    Leg_16_set.insert("1349636011");
    Leg_16.add_attribute("Mat", "LegMaturityDate_t_1164097069"); // 1
    Leg_16_set.insert("LegMaturityDate_t_1164097069");
    Leg_16.add_attribute("MatTm", "543945189"); // 1
    Leg_16_set.insert("543945189");
    Leg_16.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1500027813"); // 1
    Leg_16_set.insert("LegCouponPaymentDate_t_1500027813");
    Leg_16.add_attribute("Issued", "LegIssueDate_t_1094391602"); // 1
    Leg_16_set.insert("LegIssueDate_t_1094391602");
    Leg_16.add_attribute("RepoCollSecTyp", "855087214"); // 1
    Leg_16_set.insert("855087214");
    Leg_16.add_attribute("RepoTrm", "1031214126"); // 1
    Leg_16_set.insert("1031214126");
    Leg_16.add_attribute("RepoRt", "21149805.930000"); // 1
    Leg_16_set.insert("21149805.930000");
    Leg_16.add_attribute("Fctr", "37754.180000"); // 1
    Leg_16_set.insert("37754.180000");
    Leg_16.add_attribute("CrdRtg", "LegCreditRating_t_1380359995"); // 1
    Leg_16_set.insert("LegCreditRating_t_1380359995");
    Leg_16.add_attribute("Rgstry", "LegInstrRegistry_t_1742306690"); // 1
    Leg_16_set.insert("LegInstrRegistry_t_1742306690");
    Leg_16.add_attribute("Ctry", "381940400"); // 1
    Leg_16_set.insert("381940400");
    Leg_16.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1879622212"); // 1
    Leg_16_set.insert("LegStateOrProvinceOfIssue_t_1879622212");
    Leg_16.add_attribute("Lcl", "LegLocaleOfIssue_t_321612930"); // 1
    Leg_16_set.insert("LegLocaleOfIssue_t_321612930");
    Leg_16.add_attribute("Redeem", "LegRedemptionDate_t_1549545125"); // 1
    Leg_16_set.insert("LegRedemptionDate_t_1549545125");
    Leg_16.add_attribute("Strk", "15973894.380000"); // 1
    Leg_16_set.insert("15973894.380000");
    Leg_16.add_attribute("StrkCcy", "USD"); // 1
    Leg_16_set.insert("USD");
    Leg_16.add_attribute("OptA", "183164007"); // 1
    Leg_16_set.insert("183164007");
    Leg_16.add_attribute("Cmult", "19273693.290000"); // 1
    Leg_16_set.insert("19273693.290000");
    Leg_16.add_attribute("MultTyp", "0"); // 1
    Leg_16_set.insert("0");
    Leg_16.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_16_set.insert("1");
    Leg_16.add_attribute("UOM", "oz_tr"); // 1
    Leg_16_set.insert("oz_tr");
    Leg_16.add_attribute("UOMQty", "12263910.300000"); // 1
    Leg_16_set.insert("12263910.300000");
    Leg_16.add_attribute("PxUOM", "Gal"); // 1
    Leg_16_set.insert("Gal");
    Leg_16.add_attribute("PxUOMQty", "11919221.650000"); // 1
    Leg_16_set.insert("11919221.650000");
    Leg_16.add_attribute("TmUnit", "H"); // 1
    Leg_16_set.insert("H");
    Leg_16.add_attribute("ExerStyle", "0"); // 1
    Leg_16_set.insert("0");
    Leg_16.add_attribute("CpnRt", "4582980.820000"); // 1
    Leg_16_set.insert("4582980.820000");
    Leg_16.add_attribute("Exch", "LegSecurityExchange_t_441019032"); // 1
    Leg_16_set.insert("LegSecurityExchange_t_441019032");
    Leg_16.add_attribute("Issr", "LegIssuer_t_414667006"); // 1
    Leg_16_set.insert("LegIssuer_t_414667006");
    Leg_16.add_attribute("EncLegIssrLen", "1807934093"); // 1
    Leg_16_set.insert("1807934093");
    Leg_16.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1605116102"); // 1
    Leg_16_set.insert("EncodedLegIssuer_t_1605116102");
    Leg_16.add_attribute("Desc", "LegSecurityDesc_t_958612195"); // 1
    Leg_16_set.insert("LegSecurityDesc_t_958612195");
    Leg_16.add_attribute("EncLegSecDescLen", "1160478258"); // 1
    Leg_16_set.insert("1160478258");
    Leg_16.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_552024056"); // 1
    Leg_16_set.insert("EncodedLegSecurityDesc_t_552024056");
    Leg_16.add_attribute("RatioQty", "18136994.100000"); // 1
    Leg_16_set.insert("18136994.100000");
    Leg_16.add_attribute("Side", "1"); // 1
    Leg_16_set.insert("1");
    Leg_16.add_attribute("Ccy", "GBP"); // 1
    Leg_16_set.insert("GBP");
    Leg_16.add_attribute("Pool", "LegPool_t_1424568732"); // 1
    Leg_16_set.insert("LegPool_t_1424568732");
    Leg_16.add_attribute("Dated", "LegDatedDate_t_114344044"); // 1
    Leg_16_set.insert("LegDatedDate_t_114344044");
    Leg_16.add_attribute("CSetMo", "51931581"); // 1
    Leg_16_set.insert("51931581");
    Leg_16.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1156707296"); // 1
    Leg_16_set.insert("LegInterestAccrualDate_t_1156707296");
    Leg_16.add_attribute("PutCall", "435956974"); // 1
    Leg_16_set.insert("435956974");
    Leg_16.add_attribute("LegOptionRatio", "16014767.060000"); // 1
    Leg_16_set.insert("16014767.060000");
    Leg_16.add_attribute("Px", "6066130.870000"); // 1
    Leg_16_set.insert("6066130.870000");
    all_values.push_back(Leg_16_set);
    all_compo_names.insert("Leg_16_set");

    {
      xml_element LegAID_16{"LegAID"};
      multiset<string> LegAID_16_set;
      LegAID_16.add_attribute("SecAltID", "LegSecurityAltID_t_1851353002"); // 2
      LegAID_16_set.insert("LegSecurityAltID_t_1851353002");
      LegAID_16.add_attribute("SecAltIDSrc", "I"); // 2
      LegAID_16_set.insert("I");
      all_values.push_back(LegAID_16_set);
      all_compo_names.insert("LegAID_16_set");

      Leg_16.add_element(LegAID_16);
    }
    elt.add_element(Leg_16);
  } // end Leg
  { // Undly
    xml_element Undly_12{"Undly"};
    multiset<string> Undly_12_set;
    Undly_12.add_attribute("Sym", "UnderlyingSymbol_t_1631238683"); // 1
    Undly_12_set.insert("UnderlyingSymbol_t_1631238683");
    Undly_12.add_attribute("Sfx", "WI"); // 1
    Undly_12_set.insert("WI");
    Undly_12.add_attribute("ID", "UnderlyingSecurityID_t_611345843"); // 1
    Undly_12_set.insert("UnderlyingSecurityID_t_611345843");
    Undly_12.add_attribute("Src", "8"); // 1
    Undly_12_set.insert("8");
    Undly_12.add_attribute("Prod", "6"); // 1
    Undly_12_set.insert("6");
    Undly_12.add_attribute("CFI", "UnderlyingCFICode_t_1425763476"); // 1
    Undly_12_set.insert("UnderlyingCFICode_t_1425763476");
    Undly_12.add_attribute("SecTyp", "ABS"); // 1
    Undly_12_set.insert("ABS");
    Undly_12.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1245413115"); // 1
    Undly_12_set.insert("UnderlyingSecuritySubType_t_1245413115");
    Undly_12.add_attribute("MMY", "1650376210"); // 1
    Undly_12_set.insert("1650376210");
    Undly_12.add_attribute("Mat", "UnderlyingMaturityDate_t_1041204394"); // 1
    Undly_12_set.insert("UnderlyingMaturityDate_t_1041204394");
    Undly_12.add_attribute("MatTm", "1686432148"); // 1
    Undly_12_set.insert("1686432148");
    Undly_12.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2065043216"); // 1
    Undly_12_set.insert("UnderlyingCouponPaymentDate_t_2065043216");
    Undly_12.add_attribute("RestrctTyp", "XR"); // 1
    Undly_12_set.insert("XR");
    Undly_12.add_attribute("Snrty", "SR"); // 1
    Undly_12_set.insert("SR");
    Undly_12.add_attribute("NotlPctOut", "8761717.630000"); // 1
    Undly_12_set.insert("8761717.630000");
    Undly_12.add_attribute("OrigNotlPctOut", "18621330.970000"); // 1
    Undly_12_set.insert("18621330.970000");
    Undly_12.add_attribute("AttchPnt", "16960886.580000"); // 1
    Undly_12_set.insert("16960886.580000");
    Undly_12.add_attribute("DetchPnt", "5423875.250000"); // 1
    Undly_12_set.insert("5423875.250000");
    Undly_12.add_attribute("Issued", "UnderlyingIssueDate_t_1906341834"); // 1
    Undly_12_set.insert("UnderlyingIssueDate_t_1906341834");
    Undly_12.add_attribute("RepoCollSecTyp", "68126012"); // 1
    Undly_12_set.insert("68126012");
    Undly_12.add_attribute("RepoTrm", "212378706"); // 1
    Undly_12_set.insert("212378706");
    Undly_12.add_attribute("RepoRt", "11834269.180000"); // 1
    Undly_12_set.insert("11834269.180000");
    Undly_12.add_attribute("Fctr", "1824700.560000"); // 1
    Undly_12_set.insert("1824700.560000");
    Undly_12.add_attribute("CrdRtg", "UnderlyingCreditRating_t_264310287"); // 1
    Undly_12_set.insert("UnderlyingCreditRating_t_264310287");
    Undly_12.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_192650566"); // 1
    Undly_12_set.insert("UnderlyingInstrRegistry_t_192650566");
    Undly_12.add_attribute("Ctry", "618427031"); // 1
    Undly_12_set.insert("618427031");
    Undly_12.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1865786993"); // 1
    Undly_12_set.insert("UnderlyingStateOrProvinceOfIssue_t_1865786993");
    Undly_12.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_799263653"); // 1
    Undly_12_set.insert("UnderlyingLocaleOfIssue_t_799263653");
    Undly_12.add_attribute("Redeem", "UnderlyingRedemptionDate_t_322296385"); // 1
    Undly_12_set.insert("UnderlyingRedemptionDate_t_322296385");
    Undly_12.add_attribute("StrkPx", "19488664.680000"); // 1
    Undly_12_set.insert("19488664.680000");
    Undly_12.add_attribute("StrkCcy", "USD"); // 1
    Undly_12_set.insert("USD");
    Undly_12.add_attribute("OptA", "1828780764"); // 1
    Undly_12_set.insert("1828780764");
    Undly_12.add_attribute("Mult", "529029.430000"); // 1
    Undly_12_set.insert("529029.430000");
    Undly_12.add_attribute("MultTyp", "2"); // 1
    Undly_12_set.insert("2");
    Undly_12.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_12_set.insert("2");
    Undly_12.add_attribute("UOM", "USD"); // 1
    Undly_12_set.insert("USD");
    Undly_12.add_attribute("UOMQty", "19274255.280000"); // 1
    Undly_12_set.insert("19274255.280000");
    Undly_12.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_12_set.insert("MMBtu");
    Undly_12.add_attribute("PxUOMQty", "9815589.810000"); // 1
    Undly_12_set.insert("9815589.810000");
    Undly_12.add_attribute("TmUnit", "Wk"); // 1
    Undly_12_set.insert("Wk");
    Undly_12.add_attribute("ExerStyle", "0"); // 1
    Undly_12_set.insert("0");
    Undly_12.add_attribute("CpnRt", "8991185.490000"); // 1
    Undly_12_set.insert("8991185.490000");
    Undly_12.add_attribute("Exch", "UnderlyingSecurityExchange_t_1522801114"); // 1
    Undly_12_set.insert("UnderlyingSecurityExchange_t_1522801114");
    Undly_12.add_attribute("Issr", "UnderlyingIssuer_t_568545011"); // 1
    Undly_12_set.insert("UnderlyingIssuer_t_568545011");
    Undly_12.add_attribute("EncUndIssrLen", "1775290313"); // 1
    Undly_12_set.insert("1775290313");
    Undly_12.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1237450563"); // 1
    Undly_12_set.insert("EncodedUnderlyingIssuer_t_1237450563");
    Undly_12.add_attribute("Desc", "UnderlyingSecurityDesc_t_117150022"); // 1
    Undly_12_set.insert("UnderlyingSecurityDesc_t_117150022");
    Undly_12.add_attribute("EncUndSecDescLen", "170194190"); // 1
    Undly_12_set.insert("170194190");
    Undly_12.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_996308749"); // 1
    Undly_12_set.insert("EncodedUnderlyingSecurityDesc_t_996308749");
    Undly_12.add_attribute("CPPgm", "UnderlyingCPProgram_t_185276034"); // 1
    Undly_12_set.insert("UnderlyingCPProgram_t_185276034");
    Undly_12.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_382572896"); // 1
    Undly_12_set.insert("UnderlyingCPRegType_t_382572896");
    Undly_12.add_attribute("AllocPct", "322520.190000"); // 1
    Undly_12_set.insert("322520.190000");
    Undly_12.add_attribute("Ccy", "CAN"); // 1
    Undly_12_set.insert("CAN");
    Undly_12.add_attribute("Qty", "2249025.860000"); // 1
    Undly_12_set.insert("2249025.860000");
    Undly_12.add_attribute("SettlTyp", "2"); // 1
    Undly_12_set.insert("2");
    Undly_12.add_attribute("CashAmt", "UnderlyingCashAmount_t_365186529"); // 1
    Undly_12_set.insert("UnderlyingCashAmount_t_365186529");
    Undly_12.add_attribute("CashTyp", "DIFF"); // 1
    Undly_12_set.insert("DIFF");
    Undly_12.add_attribute("Px", "13084695.070000"); // 1
    Undly_12_set.insert("13084695.070000");
    Undly_12.add_attribute("DirtPx", "1665693.490000"); // 1
    Undly_12_set.insert("1665693.490000");
    Undly_12.add_attribute("EndPx", "4657233.390000"); // 1
    Undly_12_set.insert("4657233.390000");
    Undly_12.add_attribute("StartVal", "UnderlyingStartValue_t_1114520927"); // 1
    Undly_12_set.insert("UnderlyingStartValue_t_1114520927");
    Undly_12.add_attribute("CurVal", "UnderlyingCurrentValue_t_1995350113"); // 1
    Undly_12_set.insert("UnderlyingCurrentValue_t_1995350113");
    Undly_12.add_attribute("EndVal", "UnderlyingEndValue_t_518626282"); // 1
    Undly_12_set.insert("UnderlyingEndValue_t_518626282");
    Undly_12.add_attribute("AdjQty", "3115564.950000"); // 1
    Undly_12_set.insert("3115564.950000");
    Undly_12.add_attribute("FxRate", "6354689.070000"); // 1
    Undly_12_set.insert("6354689.070000");
    Undly_12.add_attribute("FxRateCalc", "M"); // 1
    Undly_12_set.insert("M");
    Undly_12.add_attribute("CapValu", "UnderlyingCapValue_t_91498375"); // 1
    Undly_12_set.insert("UnderlyingCapValue_t_91498375");
    Undly_12.add_attribute("SetMeth", "UnderlyingSettlMethod_t_521000817"); // 1
    Undly_12_set.insert("UnderlyingSettlMethod_t_521000817");
    Undly_12.add_attribute("PutCall", "831368035"); // 1
    Undly_12_set.insert("831368035");
    all_values.push_back(Undly_12_set);
    all_compo_names.insert("Undly_12_set");

    {
      xml_element UndAID_12{"UndAID"};
      multiset<string> UndAID_12_set;
      UndAID_12.add_attribute("AltID", "UnderlyingSecurityAltID_t_912644649"); // 2
      UndAID_12_set.insert("UnderlyingSecurityAltID_t_912644649");
      UndAID_12.add_attribute("AltIDSrc", "1"); // 2
      UndAID_12_set.insert("1");
      all_values.push_back(UndAID_12_set);
      all_compo_names.insert("UndAID_12_set");

      Undly_12.add_element(UndAID_12);
    }
    {
      xml_element Stip_25{"Stip"};
      multiset<string> Stip_25_set;
      Stip_25.add_attribute("Typ", "MINDNOM"); // 2
      Stip_25_set.insert("MINDNOM");
      Stip_25.add_attribute("Val", "UnderlyingStipValue_t_287962115"); // 2
      Stip_25_set.insert("UnderlyingStipValue_t_287962115");
      all_values.push_back(Stip_25_set);
      all_compo_names.insert("Stip_25_set");

      Undly_12.add_element(Stip_25);
    }
    {
      xml_element Pty_75{"Pty"};
      multiset<string> Pty_75_set;
      Pty_75.add_attribute("ID", "UnderlyingInstrumentPartyID_t_514026238"); // 2
      Pty_75_set.insert("UnderlyingInstrumentPartyID_t_514026238");
      Pty_75.add_attribute("Src", "3"); // 2
      Pty_75_set.insert("3");
      Pty_75.add_attribute("R", "65"); // 2
      Pty_75_set.insert("65");
      all_values.push_back(Pty_75_set);
      all_compo_names.insert("Pty_75_set");

      {
        xml_element Sub_75{"Sub"};
        multiset<string> Sub_75_set;
        Sub_75.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_631176260"); // 3
        Sub_75_set.insert("UnderlyingInstrumentPartySubID_t_631176260");
        Sub_75.add_attribute("Typ", "16"); // 3
        Sub_75_set.insert("16");
        all_values.push_back(Sub_75_set);
        all_compo_names.insert("Sub_75_set");

        Pty_75.add_element(Sub_75);
      }
      Undly_12.add_element(Pty_75);
    }
    elt.add_element(Undly_12);
  } // end Undly
  { // Undly
    xml_element Undly_13{"Undly"};
    multiset<string> Undly_13_set;
    Undly_13.add_attribute("Sym", "UnderlyingSymbol_t_374237780"); // 1
    Undly_13_set.insert("UnderlyingSymbol_t_374237780");
    Undly_13.add_attribute("Sfx", "CD"); // 1
    Undly_13_set.insert("CD");
    Undly_13.add_attribute("ID", "UnderlyingSecurityID_t_1911060337"); // 1
    Undly_13_set.insert("UnderlyingSecurityID_t_1911060337");
    Undly_13.add_attribute("Src", "3"); // 1
    Undly_13_set.insert("3");
    Undly_13.add_attribute("Prod", "3"); // 1
    Undly_13_set.insert("3");
    Undly_13.add_attribute("CFI", "UnderlyingCFICode_t_410459872"); // 1
    Undly_13_set.insert("UnderlyingCFICode_t_410459872");
    Undly_13.add_attribute("SecTyp", "SLQN"); // 1
    Undly_13_set.insert("SLQN");
    Undly_13.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_22887859"); // 1
    Undly_13_set.insert("UnderlyingSecuritySubType_t_22887859");
    Undly_13.add_attribute("MMY", "775646401"); // 1
    Undly_13_set.insert("775646401");
    Undly_13.add_attribute("Mat", "UnderlyingMaturityDate_t_1655558625"); // 1
    Undly_13_set.insert("UnderlyingMaturityDate_t_1655558625");
    Undly_13.add_attribute("MatTm", "1331357366"); // 1
    Undly_13_set.insert("1331357366");
    Undly_13.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_942215751"); // 1
    Undly_13_set.insert("UnderlyingCouponPaymentDate_t_942215751");
    Undly_13.add_attribute("RestrctTyp", "MR"); // 1
    Undly_13_set.insert("MR");
    Undly_13.add_attribute("Snrty", "SD"); // 1
    Undly_13_set.insert("SD");
    Undly_13.add_attribute("NotlPctOut", "7900822.160000"); // 1
    Undly_13_set.insert("7900822.160000");
    Undly_13.add_attribute("OrigNotlPctOut", "4924245.990000"); // 1
    Undly_13_set.insert("4924245.990000");
    Undly_13.add_attribute("AttchPnt", "6099511.410000"); // 1
    Undly_13_set.insert("6099511.410000");
    Undly_13.add_attribute("DetchPnt", "14255511.240000"); // 1
    Undly_13_set.insert("14255511.240000");
    Undly_13.add_attribute("Issued", "UnderlyingIssueDate_t_342233653"); // 1
    Undly_13_set.insert("UnderlyingIssueDate_t_342233653");
    Undly_13.add_attribute("RepoCollSecTyp", "701449516"); // 1
    Undly_13_set.insert("701449516");
    Undly_13.add_attribute("RepoTrm", "1946551941"); // 1
    Undly_13_set.insert("1946551941");
    Undly_13.add_attribute("RepoRt", "11736016.890000"); // 1
    Undly_13_set.insert("11736016.890000");
    Undly_13.add_attribute("Fctr", "16140941.650000"); // 1
    Undly_13_set.insert("16140941.650000");
    Undly_13.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1892033167"); // 1
    Undly_13_set.insert("UnderlyingCreditRating_t_1892033167");
    Undly_13.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_756604626"); // 1
    Undly_13_set.insert("UnderlyingInstrRegistry_t_756604626");
    Undly_13.add_attribute("Ctry", "1902056281"); // 1
    Undly_13_set.insert("1902056281");
    Undly_13.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_258575757"); // 1
    Undly_13_set.insert("UnderlyingStateOrProvinceOfIssue_t_258575757");
    Undly_13.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2114897876"); // 1
    Undly_13_set.insert("UnderlyingLocaleOfIssue_t_2114897876");
    Undly_13.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1279985312"); // 1
    Undly_13_set.insert("UnderlyingRedemptionDate_t_1279985312");
    Undly_13.add_attribute("StrkPx", "8897520.170000"); // 1
    Undly_13_set.insert("8897520.170000");
    Undly_13.add_attribute("StrkCcy", "JPY"); // 1
    Undly_13_set.insert("JPY");
    Undly_13.add_attribute("OptA", "1706204312"); // 1
    Undly_13_set.insert("1706204312");
    Undly_13.add_attribute("Mult", "12594783.570000"); // 1
    Undly_13_set.insert("12594783.570000");
    Undly_13.add_attribute("MultTyp", "1"); // 1
    Undly_13_set.insert("1");
    Undly_13.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_13_set.insert("4");
    Undly_13.add_attribute("UOM", "Alw"); // 1
    Undly_13_set.insert("Alw");
    Undly_13.add_attribute("UOMQty", "5446216.300000"); // 1
    Undly_13_set.insert("5446216.300000");
    Undly_13.add_attribute("PxUOM", "Bcf"); // 1
    Undly_13_set.insert("Bcf");
    Undly_13.add_attribute("PxUOMQty", "2981009.830000"); // 1
    Undly_13_set.insert("2981009.830000");
    Undly_13.add_attribute("TmUnit", "Yr"); // 1
    Undly_13_set.insert("Yr");
    Undly_13.add_attribute("ExerStyle", "1"); // 1
    Undly_13_set.insert("1");
    Undly_13.add_attribute("CpnRt", "12403167.340000"); // 1
    Undly_13_set.insert("12403167.340000");
    Undly_13.add_attribute("Exch", "UnderlyingSecurityExchange_t_26494925"); // 1
    Undly_13_set.insert("UnderlyingSecurityExchange_t_26494925");
    Undly_13.add_attribute("Issr", "UnderlyingIssuer_t_248075273"); // 1
    Undly_13_set.insert("UnderlyingIssuer_t_248075273");
    Undly_13.add_attribute("EncUndIssrLen", "2030398951"); // 1
    Undly_13_set.insert("2030398951");
    Undly_13.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_518919524"); // 1
    Undly_13_set.insert("EncodedUnderlyingIssuer_t_518919524");
    Undly_13.add_attribute("Desc", "UnderlyingSecurityDesc_t_858026414"); // 1
    Undly_13_set.insert("UnderlyingSecurityDesc_t_858026414");
    Undly_13.add_attribute("EncUndSecDescLen", "1308466427"); // 1
    Undly_13_set.insert("1308466427");
    Undly_13.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_861153178"); // 1
    Undly_13_set.insert("EncodedUnderlyingSecurityDesc_t_861153178");
    Undly_13.add_attribute("CPPgm", "UnderlyingCPProgram_t_1559475930"); // 1
    Undly_13_set.insert("UnderlyingCPProgram_t_1559475930");
    Undly_13.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1107534720"); // 1
    Undly_13_set.insert("UnderlyingCPRegType_t_1107534720");
    Undly_13.add_attribute("AllocPct", "20347548.670000"); // 1
    Undly_13_set.insert("20347548.670000");
    Undly_13.add_attribute("Ccy", "CAN"); // 1
    Undly_13_set.insert("CAN");
    Undly_13.add_attribute("Qty", "6438758.450000"); // 1
    Undly_13_set.insert("6438758.450000");
    Undly_13.add_attribute("SettlTyp", "5"); // 1
    Undly_13_set.insert("5");
    Undly_13.add_attribute("CashAmt", "UnderlyingCashAmount_t_1110659997"); // 1
    Undly_13_set.insert("UnderlyingCashAmount_t_1110659997");
    Undly_13.add_attribute("CashTyp", "DIFF"); // 1
    Undly_13_set.insert("DIFF");
    Undly_13.add_attribute("Px", "20606443.930000"); // 1
    Undly_13_set.insert("20606443.930000");
    Undly_13.add_attribute("DirtPx", "20004120.140000"); // 1
    Undly_13_set.insert("20004120.140000");
    Undly_13.add_attribute("EndPx", "21071917.410000"); // 1
    Undly_13_set.insert("21071917.410000");
    Undly_13.add_attribute("StartVal", "UnderlyingStartValue_t_1567383837"); // 1
    Undly_13_set.insert("UnderlyingStartValue_t_1567383837");
    Undly_13.add_attribute("CurVal", "UnderlyingCurrentValue_t_1559132678"); // 1
    Undly_13_set.insert("UnderlyingCurrentValue_t_1559132678");
    Undly_13.add_attribute("EndVal", "UnderlyingEndValue_t_1219186451"); // 1
    Undly_13_set.insert("UnderlyingEndValue_t_1219186451");
    Undly_13.add_attribute("AdjQty", "14806130.820000"); // 1
    Undly_13_set.insert("14806130.820000");
    Undly_13.add_attribute("FxRate", "1545680.800000"); // 1
    Undly_13_set.insert("1545680.800000");
    Undly_13.add_attribute("FxRateCalc", "D"); // 1
    Undly_13_set.insert("D");
    Undly_13.add_attribute("CapValu", "UnderlyingCapValue_t_2025234712"); // 1
    Undly_13_set.insert("UnderlyingCapValue_t_2025234712");
    Undly_13.add_attribute("SetMeth", "UnderlyingSettlMethod_t_920374989"); // 1
    Undly_13_set.insert("UnderlyingSettlMethod_t_920374989");
    Undly_13.add_attribute("PutCall", "1039742016"); // 1
    Undly_13_set.insert("1039742016");
    all_values.push_back(Undly_13_set);
    all_compo_names.insert("Undly_13_set");

    {
      xml_element UndAID_13{"UndAID"};
      multiset<string> UndAID_13_set;
      UndAID_13.add_attribute("AltID", "UnderlyingSecurityAltID_t_2077931320"); // 2
      UndAID_13_set.insert("UnderlyingSecurityAltID_t_2077931320");
      UndAID_13.add_attribute("AltIDSrc", "D"); // 2
      UndAID_13_set.insert("D");
      all_values.push_back(UndAID_13_set);
      all_compo_names.insert("UndAID_13_set");

      Undly_13.add_element(UndAID_13);
    }
    {
      xml_element Stip_26{"Stip"};
      multiset<string> Stip_26_set;
      Stip_26.add_attribute("Typ", "POOL"); // 2
      Stip_26_set.insert("POOL");
      Stip_26.add_attribute("Val", "UnderlyingStipValue_t_2104426245"); // 2
      Stip_26_set.insert("UnderlyingStipValue_t_2104426245");
      all_values.push_back(Stip_26_set);
      all_compo_names.insert("Stip_26_set");

      Undly_13.add_element(Stip_26);
    }
    {
      xml_element Pty_76{"Pty"};
      multiset<string> Pty_76_set;
      Pty_76.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1118130890"); // 2
      Pty_76_set.insert("UnderlyingInstrumentPartyID_t_1118130890");
      Pty_76.add_attribute("Src", "3"); // 2
      Pty_76_set.insert("3");
      Pty_76.add_attribute("R", "30"); // 2
      Pty_76_set.insert("30");
      all_values.push_back(Pty_76_set);
      all_compo_names.insert("Pty_76_set");

      {
        xml_element Sub_76{"Sub"};
        multiset<string> Sub_76_set;
        Sub_76.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1976157304"); // 3
        Sub_76_set.insert("UnderlyingInstrumentPartySubID_t_1976157304");
        Sub_76.add_attribute("Typ", "10"); // 3
        Sub_76_set.insert("10");
        all_values.push_back(Sub_76_set);
        all_compo_names.insert("Sub_76_set");

        Pty_76.add_element(Sub_76);
      }
      Undly_13.add_element(Pty_76);
    }
    elt.add_element(Undly_13);
  } // end Undly
  { // TrdRegTS
    xml_element TrdRegTS_2{"TrdRegTS"};
    multiset<string> TrdRegTS_2_set;
    TrdRegTS_2.add_attribute("TS", "TrdRegTimestamp_t_1388149587"); // 1
    TrdRegTS_2_set.insert("TrdRegTimestamp_t_1388149587");
    TrdRegTS_2.add_attribute("Typ", "7"); // 1
    TrdRegTS_2_set.insert("7");
    TrdRegTS_2.add_attribute("Src", "TrdRegTimestampOrigin_t_1224286519"); // 1
    TrdRegTS_2_set.insert("TrdRegTimestampOrigin_t_1224286519");
    TrdRegTS_2.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_2_set.insert("A");
    TrdRegTS_2.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_2_set.insert("1");
    TrdRegTS_2.add_attribute("DskOrdHndlInst", "MOO"); // 1
    TrdRegTS_2_set.insert("MOO");
    all_values.push_back(TrdRegTS_2_set);
    all_compo_names.insert("TrdRegTS_2_set");

    elt.add_element(TrdRegTS_2);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_3{"TrdRegTS"};
    multiset<string> TrdRegTS_3_set;
    TrdRegTS_3.add_attribute("TS", "TrdRegTimestamp_t_1047411468"); // 1
    TrdRegTS_3_set.insert("TrdRegTimestamp_t_1047411468");
    TrdRegTS_3.add_attribute("Typ", "3"); // 1
    TrdRegTS_3_set.insert("3");
    TrdRegTS_3.add_attribute("Src", "TrdRegTimestampOrigin_t_331968789"); // 1
    TrdRegTS_3_set.insert("TrdRegTimestampOrigin_t_331968789");
    TrdRegTS_3.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_3_set.insert("PR");
    TrdRegTS_3.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_3_set.insert("1");
    TrdRegTS_3.add_attribute("DskOrdHndlInst", "MAO"); // 1
    TrdRegTS_3_set.insert("MAO");
    all_values.push_back(TrdRegTS_3_set);
    all_compo_names.insert("TrdRegTS_3_set");

    elt.add_element(TrdRegTS_3);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_4{"TrdRegTS"};
    multiset<string> TrdRegTS_4_set;
    TrdRegTS_4.add_attribute("TS", "TrdRegTimestamp_t_380472402"); // 1
    TrdRegTS_4_set.insert("TrdRegTimestamp_t_380472402");
    TrdRegTS_4.add_attribute("Typ", "6"); // 1
    TrdRegTS_4_set.insert("6");
    TrdRegTS_4.add_attribute("Src", "TrdRegTimestampOrigin_t_1510863333"); // 1
    TrdRegTS_4_set.insert("TrdRegTimestampOrigin_t_1510863333");
    TrdRegTS_4.add_attribute("DskTyp", "O"); // 1
    TrdRegTS_4_set.insert("O");
    TrdRegTS_4.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_4_set.insert("1");
    TrdRegTS_4.add_attribute("DskOrdHndlInst", "IO"); // 1
    TrdRegTS_4_set.insert("IO");
    all_values.push_back(TrdRegTS_4_set);
    all_compo_names.insert("TrdRegTS_4_set");

    elt.add_element(TrdRegTS_4);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_6{"MiscFees"};
    multiset<string> MiscFees_6_set;
    MiscFees_6.add_attribute("Amt", "MiscFeeAmt_t_438788959"); // 1
    MiscFees_6_set.insert("MiscFeeAmt_t_438788959");
    MiscFees_6.add_attribute("Curr", "CAN"); // 1
    MiscFees_6_set.insert("CAN");
    MiscFees_6.add_attribute("Typ", "2"); // 1
    MiscFees_6_set.insert("2");
    MiscFees_6.add_attribute("Basis", "1"); // 1
    MiscFees_6_set.insert("1");
    all_values.push_back(MiscFees_6_set);
    all_compo_names.insert("MiscFees_6_set");

    elt.add_element(MiscFees_6);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_5{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_5_set;
    SprdBnchmkCurve_5.add_attribute("Spread", "16262268.190000"); // 1
    SprdBnchmkCurve_5_set.insert("16262268.190000");
    SprdBnchmkCurve_5.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_5_set.insert("USD");
    SprdBnchmkCurve_5.add_attribute("Name", "LIBOR"); // 1
    SprdBnchmkCurve_5_set.insert("LIBOR");
    SprdBnchmkCurve_5.add_attribute("Point", "BenchmarkCurvePoint_t_108165474"); // 1
    SprdBnchmkCurve_5_set.insert("BenchmarkCurvePoint_t_108165474");
    SprdBnchmkCurve_5.add_attribute("Px", "4693014.290000"); // 1
    SprdBnchmkCurve_5_set.insert("4693014.290000");
    SprdBnchmkCurve_5.add_attribute("PxTyp", "13"); // 1
    SprdBnchmkCurve_5_set.insert("13");
    SprdBnchmkCurve_5.add_attribute("SecID", "BenchmarkSecurityID_t_1496315061"); // 1
    SprdBnchmkCurve_5_set.insert("BenchmarkSecurityID_t_1496315061");
    SprdBnchmkCurve_5.add_attribute("SecIDSrc", "9"); // 1
    SprdBnchmkCurve_5_set.insert("9");
    all_values.push_back(SprdBnchmkCurve_5_set);
    all_compo_names.insert("SprdBnchmkCurve_5_set");

    elt.add_element(SprdBnchmkCurve_5);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_27{"Stip"};
    multiset<string> Stip_27_set;
    Stip_27.add_attribute("Typ", "CPY"); // 1
    Stip_27_set.insert("CPY");
    Stip_27.add_attribute("Val", "StipulationValue_t_1889401478"); // 1
    Stip_27_set.insert("StipulationValue_t_1889401478");
    all_values.push_back(Stip_27_set);
    all_compo_names.insert("Stip_27_set");

    elt.add_element(Stip_27);
  } // end Stip
  { // Stip
    xml_element Stip_28{"Stip"};
    multiset<string> Stip_28_set;
    Stip_28.add_attribute("Typ", "LOTVAR"); // 1
    Stip_28_set.insert("LOTVAR");
    Stip_28.add_attribute("Val", "StipulationValue_t_662995268"); // 1
    Stip_28_set.insert("StipulationValue_t_662995268");
    all_values.push_back(Stip_28_set);
    all_compo_names.insert("Stip_28_set");

    elt.add_element(Stip_28);
  } // end Stip
  { // SetInstr
    xml_element SetInstr_6{"SetInstr"};
    multiset<string> SetInstr_6_set;
    SetInstr_6.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_6_set.insert("0");
    SetInstr_6.add_attribute("StandInstDbTyp", "4"); // 1
    SetInstr_6_set.insert("4");
    SetInstr_6.add_attribute("StandInstDbName", "StandInstDbName_t_1623567481"); // 1
    SetInstr_6_set.insert("StandInstDbName_t_1623567481");
    SetInstr_6.add_attribute("StandInstDbID", "StandInstDbID_t_1940866832"); // 1
    SetInstr_6_set.insert("StandInstDbID_t_1940866832");
    all_values.push_back(SetInstr_6_set);
    all_compo_names.insert("SetInstr_6_set");

    {
      xml_element DlvInst_6{"DlvInst"};
      multiset<string> DlvInst_6_set;
      DlvInst_6.add_attribute("InstSrc", "1"); // 2
      DlvInst_6_set.insert("1");
      DlvInst_6.add_attribute("InstTyp", "C"); // 2
      DlvInst_6_set.insert("C");
      all_values.push_back(DlvInst_6_set);
      all_compo_names.insert("DlvInst_6_set");

      {
        xml_element Pty_77{"Pty"};
        multiset<string> Pty_77_set;
        Pty_77.add_attribute("ID", "SettlPartyID_t_1304712722"); // 3
        Pty_77_set.insert("SettlPartyID_t_1304712722");
        Pty_77.add_attribute("Src", "C"); // 3
        Pty_77_set.insert("C");
        Pty_77.add_attribute("R", "62"); // 3
        Pty_77_set.insert("62");
        all_values.push_back(Pty_77_set);
        all_compo_names.insert("Pty_77_set");

        {
          xml_element Sub_77{"Sub"};
          multiset<string> Sub_77_set;
          Sub_77.add_attribute("ID", "SettlPartySubID_t_823126693"); // 4
          Sub_77_set.insert("SettlPartySubID_t_823126693");
          Sub_77.add_attribute("Typ", "11"); // 4
          Sub_77_set.insert("11");
          all_values.push_back(Sub_77_set);
          all_compo_names.insert("Sub_77_set");

          Pty_77.add_element(Sub_77);
        }
        DlvInst_6.add_element(Pty_77);
      }
      SetInstr_6.add_element(DlvInst_6);
    }
    elt.add_element(SetInstr_6);
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
