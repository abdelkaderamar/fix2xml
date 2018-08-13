#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteStatusReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteStatusReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotStatRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteStatusReport_message_t_0;
  elt.add_attribute("StatReqID", "QuoteStatusReqID_t_185186652"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteStatusReqID_t_185186652");
  elt.add_attribute("ReqID", "QuoteReqID_t_1679022286"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteReqID_t_1679022286");
  elt.add_attribute("QID", "QuoteID_t_2001409903"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteID_t_2001409903");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_150081477"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteMsgID_t_150081477");
  elt.add_attribute("RspID", "QuoteRespID_t_640397438"); // 0
  QuoteStatusReport_message_t_0.insert("QuoteRespID_t_640397438");
  elt.add_attribute("Typ", "1"); // 0
  QuoteStatusReport_message_t_0.insert("1");
  elt.add_attribute("CxlTyp", "6"); // 0
  QuoteStatusReport_message_t_0.insert("6");
  elt.add_attribute("SesID", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("SesSub", "6"); // 0
  QuoteStatusReport_message_t_0.insert("6");
  elt.add_attribute("Side", "2"); // 0
  QuoteStatusReport_message_t_0.insert("2");
  elt.add_attribute("SettlTyp", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("SettlDt", "SettlDate_t_72001563"); // 0
  QuoteStatusReport_message_t_0.insert("SettlDate_t_72001563");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1162527686"); // 0
  QuoteStatusReport_message_t_0.insert("SettlDate2_t_1162527686");
  elt.add_attribute("Qty2", "3880459.920000"); // 0
  QuoteStatusReport_message_t_0.insert("3880459.920000");
  elt.add_attribute("Ccy", "CHF"); // 0
  QuoteStatusReport_message_t_0.insert("CHF");
  elt.add_attribute("Acct", "Account_t_1550668467"); // 0
  QuoteStatusReport_message_t_0.insert("Account_t_1550668467");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "7"); // 0
  QuoteStatusReport_message_t_0.insert("7");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1870264952"); // 0
  QuoteStatusReport_message_t_0.insert("ExpireTime_t_1870264952");
  elt.add_attribute("Px", "1170835.410000"); // 0
  QuoteStatusReport_message_t_0.insert("1170835.410000");
  elt.add_attribute("PxTyp", "11"); // 0
  QuoteStatusReport_message_t_0.insert("11");
  elt.add_attribute("BidPx", "8975686.270000"); // 0
  QuoteStatusReport_message_t_0.insert("8975686.270000");
  elt.add_attribute("OfrPx", "16451547.820000"); // 0
  QuoteStatusReport_message_t_0.insert("16451547.820000");
  elt.add_attribute("MktBidPx", "12535521.640000"); // 0
  QuoteStatusReport_message_t_0.insert("12535521.640000");
  elt.add_attribute("MktOfrPx", "12209723.380000"); // 0
  QuoteStatusReport_message_t_0.insert("12209723.380000");
  elt.add_attribute("MinBidSz", "20979268.090000"); // 0
  QuoteStatusReport_message_t_0.insert("20979268.090000");
  elt.add_attribute("BidSz", "20026859.640000"); // 0
  QuoteStatusReport_message_t_0.insert("20026859.640000");
  elt.add_attribute("MinOfrSz", "10890686.430000"); // 0
  QuoteStatusReport_message_t_0.insert("10890686.430000");
  elt.add_attribute("OfrSz", "10950870.350000"); // 0
  QuoteStatusReport_message_t_0.insert("10950870.350000");
  elt.add_attribute("MinQty", "8661088.670000"); // 0
  QuoteStatusReport_message_t_0.insert("8661088.670000");
  elt.add_attribute("ValidUntilTm", "ValidUntilTime_t_1274255296"); // 0
  QuoteStatusReport_message_t_0.insert("ValidUntilTime_t_1274255296");
  elt.add_attribute("BidSpotRt", "6266256.740000"); // 0
  QuoteStatusReport_message_t_0.insert("6266256.740000");
  elt.add_attribute("OfrSpotRt", "7200351.220000"); // 0
  QuoteStatusReport_message_t_0.insert("7200351.220000");
  elt.add_attribute("BidFwdPnts", "14243367.730000"); // 0
  QuoteStatusReport_message_t_0.insert("14243367.730000");
  elt.add_attribute("OfrFwdPnts", "12670231.120000"); // 0
  QuoteStatusReport_message_t_0.insert("12670231.120000");
  elt.add_attribute("MidPx", "10483830.800000"); // 0
  QuoteStatusReport_message_t_0.insert("10483830.800000");
  elt.add_attribute("BidYld", "10436644.430000"); // 0
  QuoteStatusReport_message_t_0.insert("10436644.430000");
  elt.add_attribute("MidYld", "3147947.440000"); // 0
  QuoteStatusReport_message_t_0.insert("3147947.440000");
  elt.add_attribute("OfrYld", "11096650.330000"); // 0
  QuoteStatusReport_message_t_0.insert("11096650.330000");
  elt.add_attribute("TxnTm", "TransactTime_t_1757624508"); // 0
  QuoteStatusReport_message_t_0.insert("TransactTime_t_1757624508");
  elt.add_attribute("OrdTyp", "B"); // 0
  QuoteStatusReport_message_t_0.insert("B");
  elt.add_attribute("BidFwdPnts2", "11816665.970000"); // 0
  QuoteStatusReport_message_t_0.insert("11816665.970000");
  elt.add_attribute("OfrFwdPnts2", "7726685.460000"); // 0
  QuoteStatusReport_message_t_0.insert("7726685.460000");
  elt.add_attribute("SettlCurrBidFxRt", "14937735.940000"); // 0
  QuoteStatusReport_message_t_0.insert("14937735.940000");
  elt.add_attribute("SettlCurrOfrFxRt", "2090760.940000"); // 0
  QuoteStatusReport_message_t_0.insert("2090760.940000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  QuoteStatusReport_message_t_0.insert("D");
  elt.add_attribute("CommTyp", "6"); // 0
  QuoteStatusReport_message_t_0.insert("6");
  elt.add_attribute("Comm", "Commission_t_1107968798"); // 0
  QuoteStatusReport_message_t_0.insert("Commission_t_1107968798");
  elt.add_attribute("CustCpcty", "3"); // 0
  QuoteStatusReport_message_t_0.insert("3");
  elt.add_attribute("ExDest", "ExDestination_t_619739718"); // 0
  QuoteStatusReport_message_t_0.insert("ExDestination_t_619739718");
  elt.add_attribute("ExDestIDSrc", "G"); // 0
  QuoteStatusReport_message_t_0.insert("G");
  elt.add_attribute("BkngTyp", "1"); // 0
  QuoteStatusReport_message_t_0.insert("1");
  elt.add_attribute("Cpcty", "G"); // 0
  QuoteStatusReport_message_t_0.insert("G");
  elt.add_attribute("Rstctions", "F"); // 0
  QuoteStatusReport_message_t_0.insert("F");
  elt.add_attribute("Stat", "7"); // 0
  QuoteStatusReport_message_t_0.insert("7");
  elt.add_attribute("RejRsn", "5"); // 0
  QuoteStatusReport_message_t_0.insert("5");
  elt.add_attribute("Txt", "Text_t_673166635"); // 0
  QuoteStatusReport_message_t_0.insert("Text_t_673166635");
  elt.add_attribute("EncTxtLen", "456509903"); // 0
  QuoteStatusReport_message_t_0.insert("456509903");
  elt.add_attribute("EncTxt", "EncodedText_t_1679865679"); // 0
  QuoteStatusReport_message_t_0.insert("EncodedText_t_1679865679");
  all_values.push_back(QuoteStatusReport_message_t_0);
  all_compo_names.insert("QuoteStatusReport_message_t");

  { // Hdr
    xml_element Hdr_73{"Hdr"};
    multiset<string> Hdr_73_set;
    Hdr_73.add_attribute("SeqNum", "1768253671"); // 1
    Hdr_73_set.insert("1768253671");
    Hdr_73.add_attribute("SID", "SenderCompID_t_1322618770"); // 1
    Hdr_73_set.insert("SenderCompID_t_1322618770");
    Hdr_73.add_attribute("TID", "TargetCompID_t_806637327"); // 1
    Hdr_73_set.insert("TargetCompID_t_806637327");
    Hdr_73.add_attribute("OBID", "OnBehalfOfCompID_t_247395697"); // 1
    Hdr_73_set.insert("OnBehalfOfCompID_t_247395697");
    Hdr_73.add_attribute("D2ID", "DeliverToCompID_t_2042653892"); // 1
    Hdr_73_set.insert("DeliverToCompID_t_2042653892");
    Hdr_73.add_attribute("SSub", "SenderSubID_t_83490453"); // 1
    Hdr_73_set.insert("SenderSubID_t_83490453");
    Hdr_73.add_attribute("SLoc", "SenderLocationID_t_1514418809"); // 1
    Hdr_73_set.insert("SenderLocationID_t_1514418809");
    Hdr_73.add_attribute("TSub", "TargetSubID_t_943553324"); // 1
    Hdr_73_set.insert("TargetSubID_t_943553324");
    Hdr_73.add_attribute("TLoc", "TargetLocationID_t_1127154896"); // 1
    Hdr_73_set.insert("TargetLocationID_t_1127154896");
    Hdr_73.add_attribute("OBSub", "OnBehalfOfSubID_t_1829213553"); // 1
    Hdr_73_set.insert("OnBehalfOfSubID_t_1829213553");
    Hdr_73.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2053218358"); // 1
    Hdr_73_set.insert("OnBehalfOfLocationID_t_2053218358");
    Hdr_73.add_attribute("D2Sub", "DeliverToSubID_t_737295756"); // 1
    Hdr_73_set.insert("DeliverToSubID_t_737295756");
    Hdr_73.add_attribute("D2Loc", "DeliverToLocationID_t_787457507"); // 1
    Hdr_73_set.insert("DeliverToLocationID_t_787457507");
    Hdr_73.add_attribute("PosDup", "Y"); // 1
    Hdr_73_set.insert("Y");
    Hdr_73.add_attribute("PosRsnd", "Y"); // 1
    Hdr_73_set.insert("Y");
    Hdr_73.add_attribute("Snt", "SendingTime_t_133747454"); // 1
    Hdr_73_set.insert("SendingTime_t_133747454");
    Hdr_73.add_attribute("OrigSnt", "OrigSendingTime_t_1296477401"); // 1
    Hdr_73_set.insert("OrigSendingTime_t_1296477401");
    Hdr_73.add_attribute("MsgEncd", "MessageEncoding_t_852531140"); // 1
    Hdr_73_set.insert("MessageEncoding_t_852531140");
    all_values.push_back(Hdr_73_set);
    all_compo_names.insert("Hdr_73_set");

    {
      xml_element Hop_73{"Hop"};
      multiset<string> Hop_73_set;
      Hop_73.add_attribute("ID", "HopCompID_t_1030705867"); // 2
      Hop_73_set.insert("HopCompID_t_1030705867");
      Hop_73.add_attribute("Ref", "256962552"); // 2
      Hop_73_set.insert("256962552");
      Hop_73.add_attribute("Snt", "HopSendingTime_t_1817354507"); // 2
      Hop_73_set.insert("HopSendingTime_t_1817354507");
      all_values.push_back(Hop_73_set);
      all_compo_names.insert("Hop_73_set");

      Hdr_73.add_element(Hop_73);
    }
    elt.add_element(Hdr_73);
  } // end Hdr
  { // Pty
    xml_element Pty_360{"Pty"};
    multiset<string> Pty_360_set;
    Pty_360.add_attribute("ID", "PartyID_t_1482014891"); // 1
    Pty_360_set.insert("PartyID_t_1482014891");
    Pty_360.add_attribute("Src", "8"); // 1
    Pty_360_set.insert("8");
    Pty_360.add_attribute("R", "69"); // 1
    Pty_360_set.insert("69");
    all_values.push_back(Pty_360_set);
    all_compo_names.insert("Pty_360_set");

    {
      xml_element Sub_360{"Sub"};
      multiset<string> Sub_360_set;
      Sub_360.add_attribute("ID", "PartySubID_t_57254717"); // 2
      Sub_360_set.insert("PartySubID_t_57254717");
      Sub_360.add_attribute("Typ", "25"); // 2
      Sub_360_set.insert("25");
      all_values.push_back(Sub_360_set);
      all_compo_names.insert("Sub_360_set");

      Pty_360.add_element(Sub_360);
    }
    elt.add_element(Pty_360);
  } // end Pty
  { // Pty
    xml_element Pty_361{"Pty"};
    multiset<string> Pty_361_set;
    Pty_361.add_attribute("ID", "PartyID_t_1611067319"); // 1
    Pty_361_set.insert("PartyID_t_1611067319");
    Pty_361.add_attribute("Src", "2"); // 1
    Pty_361_set.insert("2");
    Pty_361.add_attribute("R", "2"); // 1
    Pty_361_set.insert("2");
    all_values.push_back(Pty_361_set);
    all_compo_names.insert("Pty_361_set");

    {
      xml_element Sub_361{"Sub"};
      multiset<string> Sub_361_set;
      Sub_361.add_attribute("ID", "PartySubID_t_1143449350"); // 2
      Sub_361_set.insert("PartySubID_t_1143449350");
      Sub_361.add_attribute("Typ", "31"); // 2
      Sub_361_set.insert("31");
      all_values.push_back(Sub_361_set);
      all_compo_names.insert("Sub_361_set");

      Pty_361.add_element(Sub_361);
    }
    elt.add_element(Pty_361);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_13{"TgtPty"};
    multiset<string> TgtPty_13_set;
    TgtPty_13.add_attribute("ID", "TargetPartyID_t_1950086678"); // 1
    TgtPty_13_set.insert("TargetPartyID_t_1950086678");
    TgtPty_13.add_attribute("Src", "8"); // 1
    TgtPty_13_set.insert("8");
    TgtPty_13.add_attribute("R", "7"); // 1
    TgtPty_13_set.insert("7");
    all_values.push_back(TgtPty_13_set);
    all_compo_names.insert("TgtPty_13_set");

    elt.add_element(TgtPty_13);
  } // end TgtPty
  { // Instrmt
    xml_element Instrmt_66{"Instrmt"};
    multiset<string> Instrmt_66_set;
    Instrmt_66.add_attribute("Sym", "Symbol_t_2033577131"); // 1
    Instrmt_66_set.insert("Symbol_t_2033577131");
    Instrmt_66.add_attribute("Sfx", "CD"); // 1
    Instrmt_66_set.insert("CD");
    Instrmt_66.add_attribute("ID", "SecurityID_t_89302462"); // 1
    Instrmt_66_set.insert("SecurityID_t_89302462");
    Instrmt_66.add_attribute("Src", "C"); // 1
    Instrmt_66_set.insert("C");
    Instrmt_66.add_attribute("Prod", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("ProdCmplx", "ProductComplex_t_2142520820"); // 1
    Instrmt_66_set.insert("ProductComplex_t_2142520820");
    Instrmt_66.add_attribute("SecGrp", "SecurityGroup_t_1750544135"); // 1
    Instrmt_66_set.insert("SecurityGroup_t_1750544135");
    Instrmt_66.add_attribute("CFI", "CFICode_t_434709647"); // 1
    Instrmt_66_set.insert("CFICode_t_434709647");
    Instrmt_66.add_attribute("SecTyp", "PN"); // 1
    Instrmt_66_set.insert("PN");
    Instrmt_66.add_attribute("SubTyp", "SecuritySubType_t_1113024790"); // 1
    Instrmt_66_set.insert("SecuritySubType_t_1113024790");
    Instrmt_66.add_attribute("MMY", "568457101"); // 1
    Instrmt_66_set.insert("568457101");
    Instrmt_66.add_attribute("MatDt", "MaturityDate_t_231432233"); // 1
    Instrmt_66_set.insert("MaturityDate_t_231432233");
    Instrmt_66.add_attribute("MatTm", "1965555931"); // 1
    Instrmt_66_set.insert("1965555931");
    Instrmt_66.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1599162968"); // 1
    Instrmt_66_set.insert("SettleOnOpenFlag_t_1599162968");
    Instrmt_66.add_attribute("AsgnMeth", "488394785"); // 1
    Instrmt_66_set.insert("488394785");
    Instrmt_66.add_attribute("Status", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("CpnPmt", "CouponPaymentDate_t_1102124906"); // 1
    Instrmt_66_set.insert("CouponPaymentDate_t_1102124906");
    Instrmt_66.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_66_set.insert("FR");
    Instrmt_66.add_attribute("Snrty", "SD"); // 1
    Instrmt_66_set.insert("SD");
    Instrmt_66.add_attribute("NotlPctOut", "21223951.890000"); // 1
    Instrmt_66_set.insert("21223951.890000");
    Instrmt_66.add_attribute("OrigNotlPctOut", "20276643.940000"); // 1
    Instrmt_66_set.insert("20276643.940000");
    Instrmt_66.add_attribute("AttchPnt", "2719869.400000"); // 1
    Instrmt_66_set.insert("2719869.400000");
    Instrmt_66.add_attribute("DetchPnt", "15859788.600000"); // 1
    Instrmt_66_set.insert("15859788.600000");
    Instrmt_66.add_attribute("Issued", "IssueDate_t_610602099"); // 1
    Instrmt_66_set.insert("IssueDate_t_610602099");
    Instrmt_66.add_attribute("RepoCollSecTyp", "347430711"); // 1
    Instrmt_66_set.insert("347430711");
    Instrmt_66.add_attribute("RepoTrm", "581944562"); // 1
    Instrmt_66_set.insert("581944562");
    Instrmt_66.add_attribute("RepoRt", "9617934.750000"); // 1
    Instrmt_66_set.insert("9617934.750000");
    Instrmt_66.add_attribute("Fctr", "17454932.530000"); // 1
    Instrmt_66_set.insert("17454932.530000");
    Instrmt_66.add_attribute("CrdRtg", "CreditRating_t_384547592"); // 1
    Instrmt_66_set.insert("CreditRating_t_384547592");
    Instrmt_66.add_attribute("Rgstry", "InstrRegistry_t_1560380548"); // 1
    Instrmt_66_set.insert("InstrRegistry_t_1560380548");
    Instrmt_66.add_attribute("IssuCtry", "891242391"); // 1
    Instrmt_66_set.insert("891242391");
    Instrmt_66.add_attribute("StPrv", "StateOrProvinceOfIssue_t_270641075"); // 1
    Instrmt_66_set.insert("StateOrProvinceOfIssue_t_270641075");
    Instrmt_66.add_attribute("Lcl", "LocaleOfIssue_t_1525902782"); // 1
    Instrmt_66_set.insert("LocaleOfIssue_t_1525902782");
    Instrmt_66.add_attribute("Redeem", "RedemptionDate_t_980544853"); // 1
    Instrmt_66_set.insert("RedemptionDate_t_980544853");
    Instrmt_66.add_attribute("StrkPx", "12838894.540000"); // 1
    Instrmt_66_set.insert("12838894.540000");
    Instrmt_66.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_66_set.insert("GBP");
    Instrmt_66.add_attribute("StrkMult", "8869499.420000"); // 1
    Instrmt_66_set.insert("8869499.420000");
    Instrmt_66.add_attribute("StrkValu", "16078645.680000"); // 1
    Instrmt_66_set.insert("16078645.680000");
    Instrmt_66.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_66_set.insert("3");
    Instrmt_66.add_attribute("StrkPxBndryPrcsn", "288380.210000"); // 1
    Instrmt_66_set.insert("288380.210000");
    Instrmt_66.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_66_set.insert("3");
    Instrmt_66.add_attribute("OptAt", "1818047015"); // 1
    Instrmt_66_set.insert("1818047015");
    Instrmt_66.add_attribute("Mult", "16280009.900000"); // 1
    Instrmt_66_set.insert("16280009.900000");
    Instrmt_66.add_attribute("MultTyp", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("MinPxIncr", "5826422.480000"); // 1
    Instrmt_66_set.insert("5826422.480000");
    Instrmt_66.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_453289904"); // 1
    Instrmt_66_set.insert("MinPriceIncrementAmount_t_453289904");
    Instrmt_66.add_attribute("UOM", "MWh"); // 1
    Instrmt_66_set.insert("MWh");
    Instrmt_66.add_attribute("UOMQty", "5575537.890000"); // 1
    Instrmt_66_set.insert("5575537.890000");
    Instrmt_66.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_66_set.insert("MMbbl");
    Instrmt_66.add_attribute("PxUOMQty", "835465.210000"); // 1
    Instrmt_66_set.insert("835465.210000");
    Instrmt_66.add_attribute("SettlMeth", "P"); // 1
    Instrmt_66_set.insert("P");
    Instrmt_66.add_attribute("ExerStyle", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("OptPayAmt", "OptPayoutAmount_t_577993563"); // 1
    Instrmt_66_set.insert("OptPayoutAmount_t_577993563");
    Instrmt_66.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_66_set.insert("STD");
    Instrmt_66.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_66_set.insert("FUTDA");
    Instrmt_66.add_attribute("ListMeth", "0"); // 1
    Instrmt_66_set.insert("0");
    Instrmt_66.add_attribute("CapPx", "13187631.240000"); // 1
    Instrmt_66_set.insert("13187631.240000");
    Instrmt_66.add_attribute("FlrPx", "9202292.280000"); // 1
    Instrmt_66_set.insert("9202292.280000");
    Instrmt_66.add_attribute("PutCall", "1"); // 1
    Instrmt_66_set.insert("1");
    Instrmt_66.add_attribute("FlexInd", "true"); // 1
    Instrmt_66_set.insert("true");
    Instrmt_66.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_66_set.insert("true");
    Instrmt_66.add_attribute("TmUnit", "Min"); // 1
    Instrmt_66_set.insert("Min");
    Instrmt_66.add_attribute("CpnRt", "18703371.790000"); // 1
    Instrmt_66_set.insert("18703371.790000");
    Instrmt_66.add_attribute("Exch", "SecurityExchange_t_728872460"); // 1
    Instrmt_66_set.insert("SecurityExchange_t_728872460");
    Instrmt_66.add_attribute("PosLmt", "1256537980"); // 1
    Instrmt_66_set.insert("1256537980");
    Instrmt_66.add_attribute("NTPosLmt", "1330718100"); // 1
    Instrmt_66_set.insert("1330718100");
    Instrmt_66.add_attribute("Issr", "Issuer_t_639409317"); // 1
    Instrmt_66_set.insert("Issuer_t_639409317");
    Instrmt_66.add_attribute("EncIssrLen", "1109029064"); // 1
    Instrmt_66_set.insert("1109029064");
    Instrmt_66.add_attribute("EncIssr", "EncodedIssuer_t_1359556121"); // 1
    Instrmt_66_set.insert("EncodedIssuer_t_1359556121");
    Instrmt_66.add_attribute("Desc", "SecurityDesc_t_781378408"); // 1
    Instrmt_66_set.insert("SecurityDesc_t_781378408");
    Instrmt_66.add_attribute("EncSecDescLen", "779592432"); // 1
    Instrmt_66_set.insert("779592432");
    Instrmt_66.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_840073463"); // 1
    Instrmt_66_set.insert("EncodedSecurityDesc_t_840073463");
    Instrmt_66.add_attribute("Pool", "Pool_t_1411742283"); // 1
    Instrmt_66_set.insert("Pool_t_1411742283");
    Instrmt_66.add_attribute("CSetMo", "2085582589"); // 1
    Instrmt_66_set.insert("2085582589");
    Instrmt_66.add_attribute("CPPgm", "2"); // 1
    Instrmt_66_set.insert("2");
    Instrmt_66.add_attribute("CPRegT", "CPRegType_t_1865032187"); // 1
    Instrmt_66_set.insert("CPRegType_t_1865032187");
    Instrmt_66.add_attribute("Dated", "DatedDate_t_1897142170"); // 1
    Instrmt_66_set.insert("DatedDate_t_1897142170");
    Instrmt_66.add_attribute("IntAcrl", "InterestAccrualDate_t_1980269500"); // 1
    Instrmt_66_set.insert("InterestAccrualDate_t_1980269500");
    all_values.push_back(Instrmt_66_set);
    all_compo_names.insert("Instrmt_66_set");

    {
      xml_element AID_69{"AID"};
      multiset<string> AID_69_set;
      AID_69.add_attribute("AltID", "SecurityAltID_t_51019189"); // 2
      AID_69_set.insert("SecurityAltID_t_51019189");
      AID_69.add_attribute("AltIDSrc", "4"); // 2
      AID_69_set.insert("4");
      all_values.push_back(AID_69_set);
      all_compo_names.insert("AID_69_set");

      Instrmt_66.add_element(AID_69);
    }
    {
      xml_element SecXML_69{"SecXML"};
      multiset<string> SecXML_69_set;
      SecXML_69.add_attribute("Schema", "SecurityXMLSchema_t_1976318501"); // 2
      SecXML_69_set.insert("SecurityXMLSchema_t_1976318501");
      all_values.push_back(SecXML_69_set);
      all_compo_names.insert("SecXML_69_set");

      Instrmt_66.add_element(SecXML_69);
    }
    {
      xml_element Evnt_69{"Evnt"};
      multiset<string> Evnt_69_set;
      Evnt_69.add_attribute("EventTyp", "18"); // 2
      Evnt_69_set.insert("18");
      Evnt_69.add_attribute("Dt", "EventDate_t_264182276"); // 2
      Evnt_69_set.insert("EventDate_t_264182276");
      Evnt_69.add_attribute("Tm", "EventTime_t_406828417"); // 2
      Evnt_69_set.insert("EventTime_t_406828417");
      Evnt_69.add_attribute("Px", "7534745.140000"); // 2
      Evnt_69_set.insert("7534745.140000");
      Evnt_69.add_attribute("Txt", "EventText_t_293169113"); // 2
      Evnt_69_set.insert("EventText_t_293169113");
      all_values.push_back(Evnt_69_set);
      all_compo_names.insert("Evnt_69_set");

      Instrmt_66.add_element(Evnt_69);
    }
    {
      xml_element Pty_362{"Pty"};
      multiset<string> Pty_362_set;
      Pty_362.add_attribute("ID", "InstrumentPartyID_t_1369369573"); // 2
      Pty_362_set.insert("InstrumentPartyID_t_1369369573");
      Pty_362.add_attribute("Src", "5"); // 2
      Pty_362_set.insert("5");
      Pty_362.add_attribute("R", "38"); // 2
      Pty_362_set.insert("38");
      all_values.push_back(Pty_362_set);
      all_compo_names.insert("Pty_362_set");

      {
        xml_element Sub_362{"Sub"};
        multiset<string> Sub_362_set;
        Sub_362.add_attribute("ID", "InstrumentPartySubID_t_455068156"); // 3
        Sub_362_set.insert("InstrumentPartySubID_t_455068156");
        Sub_362.add_attribute("Typ", "33"); // 3
        Sub_362_set.insert("33");
        all_values.push_back(Sub_362_set);
        all_compo_names.insert("Sub_362_set");

        Pty_362.add_element(Sub_362);
      }
      Instrmt_66.add_element(Pty_362);
    }
    {
      xml_element CmplxEvnt_66{"CmplxEvnt"};
      multiset<string> CmplxEvnt_66_set;
      CmplxEvnt_66.add_attribute("Typ", "1"); // 2
      CmplxEvnt_66_set.insert("1");
      CmplxEvnt_66.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_824656194"); // 2
      CmplxEvnt_66_set.insert("ComplexOptPayoutAmount_t_824656194");
      CmplxEvnt_66.add_attribute("Px", "3447897.800000"); // 2
      CmplxEvnt_66_set.insert("3447897.800000");
      CmplxEvnt_66.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_66_set.insert("2");
      CmplxEvnt_66.add_attribute("PxBndryPrcsn", "20811941.740000"); // 2
      CmplxEvnt_66_set.insert("20811941.740000");
      CmplxEvnt_66.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_66_set.insert("3");
      CmplxEvnt_66.add_attribute("Cond", "2"); // 2
      CmplxEvnt_66_set.insert("2");
      all_values.push_back(CmplxEvnt_66_set);
      all_compo_names.insert("CmplxEvnt_66_set");

      {
        xml_element EvntDts_66{"EvntDts"};
        multiset<string> EvntDts_66_set;
        EvntDts_66.add_attribute("StartDt", "ComplexEventStartDate_t_1042739591"); // 3
        EvntDts_66_set.insert("ComplexEventStartDate_t_1042739591");
        EvntDts_66.add_attribute("EndDt", "ComplexEventEndDate_t_887580353"); // 3
        EvntDts_66_set.insert("ComplexEventEndDate_t_887580353");
        all_values.push_back(EvntDts_66_set);
        all_compo_names.insert("EvntDts_66_set");

        {
          xml_element EvntTms_66{"EvntTms"};
          multiset<string> EvntTms_66_set;
          EvntTms_66.add_attribute("StartTm", "968865313"); // 4
          EvntTms_66_set.insert("968865313");
          EvntTms_66.add_attribute("EndTm", "1822332023"); // 4
          EvntTms_66_set.insert("1822332023");
          all_values.push_back(EvntTms_66_set);
          all_compo_names.insert("EvntTms_66_set");

          EvntDts_66.add_element(EvntTms_66);
        }
        CmplxEvnt_66.add_element(EvntDts_66);
      }
      Instrmt_66.add_element(CmplxEvnt_66);
    }
    elt.add_element(Instrmt_66);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_24{"FinDetls"};
    multiset<string> FinDetls_24_set;
    FinDetls_24.add_attribute("AgmtDesc", "AgreementDesc_t_1727653817"); // 1
    FinDetls_24_set.insert("AgreementDesc_t_1727653817");
    FinDetls_24.add_attribute("AgmtID", "AgreementID_t_233123949"); // 1
    FinDetls_24_set.insert("AgreementID_t_233123949");
    FinDetls_24.add_attribute("AgmtDt", "AgreementDate_t_1760430964"); // 1
    FinDetls_24_set.insert("AgreementDate_t_1760430964");
    FinDetls_24.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_24_set.insert("GBP");
    FinDetls_24.add_attribute("TrmTyp", "4"); // 1
    FinDetls_24_set.insert("4");
    FinDetls_24.add_attribute("StartDt", "StartDate_t_835671733"); // 1
    FinDetls_24_set.insert("StartDate_t_835671733");
    FinDetls_24.add_attribute("EndDt", "EndDate_t_1691678"); // 1
    FinDetls_24_set.insert("EndDate_t_1691678");
    FinDetls_24.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_24_set.insert("2");
    FinDetls_24.add_attribute("MgnRatio", "6645065.860000"); // 1
    FinDetls_24_set.insert("6645065.860000");
    all_values.push_back(FinDetls_24_set);
    all_compo_names.insert("FinDetls_24_set");

    elt.add_element(FinDetls_24);
  } // end FinDetls
  { // Undly
    xml_element Undly_92{"Undly"};
    multiset<string> Undly_92_set;
    Undly_92.add_attribute("Sym", "UnderlyingSymbol_t_1607476806"); // 1
    Undly_92_set.insert("UnderlyingSymbol_t_1607476806");
    Undly_92.add_attribute("Sfx", "WI"); // 1
    Undly_92_set.insert("WI");
    Undly_92.add_attribute("ID", "UnderlyingSecurityID_t_1750258131"); // 1
    Undly_92_set.insert("UnderlyingSecurityID_t_1750258131");
    Undly_92.add_attribute("Src", "9"); // 1
    Undly_92_set.insert("9");
    Undly_92.add_attribute("Prod", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("CFI", "UnderlyingCFICode_t_1675012121"); // 1
    Undly_92_set.insert("UnderlyingCFICode_t_1675012121");
    Undly_92.add_attribute("SecTyp", "TBOND"); // 1
    Undly_92_set.insert("TBOND");
    Undly_92.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_748289085"); // 1
    Undly_92_set.insert("UnderlyingSecuritySubType_t_748289085");
    Undly_92.add_attribute("MMY", "149464722"); // 1
    Undly_92_set.insert("149464722");
    Undly_92.add_attribute("Mat", "UnderlyingMaturityDate_t_1933249390"); // 1
    Undly_92_set.insert("UnderlyingMaturityDate_t_1933249390");
    Undly_92.add_attribute("MatTm", "1572945279"); // 1
    Undly_92_set.insert("1572945279");
    Undly_92.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_494254502"); // 1
    Undly_92_set.insert("UnderlyingCouponPaymentDate_t_494254502");
    Undly_92.add_attribute("RestrctTyp", "MM"); // 1
    Undly_92_set.insert("MM");
    Undly_92.add_attribute("Snrty", "SD"); // 1
    Undly_92_set.insert("SD");
    Undly_92.add_attribute("NotlPctOut", "222787.340000"); // 1
    Undly_92_set.insert("222787.340000");
    Undly_92.add_attribute("OrigNotlPctOut", "16688138.830000"); // 1
    Undly_92_set.insert("16688138.830000");
    Undly_92.add_attribute("AttchPnt", "4019117.490000"); // 1
    Undly_92_set.insert("4019117.490000");
    Undly_92.add_attribute("DetchPnt", "9098590.870000"); // 1
    Undly_92_set.insert("9098590.870000");
    Undly_92.add_attribute("Issued", "UnderlyingIssueDate_t_490195549"); // 1
    Undly_92_set.insert("UnderlyingIssueDate_t_490195549");
    Undly_92.add_attribute("RepoCollSecTyp", "76760124"); // 1
    Undly_92_set.insert("76760124");
    Undly_92.add_attribute("RepoTrm", "490029256"); // 1
    Undly_92_set.insert("490029256");
    Undly_92.add_attribute("RepoRt", "7233194.980000"); // 1
    Undly_92_set.insert("7233194.980000");
    Undly_92.add_attribute("Fctr", "18371910.880000"); // 1
    Undly_92_set.insert("18371910.880000");
    Undly_92.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1492915137"); // 1
    Undly_92_set.insert("UnderlyingCreditRating_t_1492915137");
    Undly_92.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_673991986"); // 1
    Undly_92_set.insert("UnderlyingInstrRegistry_t_673991986");
    Undly_92.add_attribute("Ctry", "1199796927"); // 1
    Undly_92_set.insert("1199796927");
    Undly_92.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_181103222"); // 1
    Undly_92_set.insert("UnderlyingStateOrProvinceOfIssue_t_181103222");
    Undly_92.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_675683664"); // 1
    Undly_92_set.insert("UnderlyingLocaleOfIssue_t_675683664");
    Undly_92.add_attribute("Redeem", "UnderlyingRedemptionDate_t_395607810"); // 1
    Undly_92_set.insert("UnderlyingRedemptionDate_t_395607810");
    Undly_92.add_attribute("StrkPx", "8456098.080000"); // 1
    Undly_92_set.insert("8456098.080000");
    Undly_92.add_attribute("StrkCcy", "USD"); // 1
    Undly_92_set.insert("USD");
    Undly_92.add_attribute("OptA", "1916944812"); // 1
    Undly_92_set.insert("1916944812");
    Undly_92.add_attribute("Mult", "12752417.640000"); // 1
    Undly_92_set.insert("12752417.640000");
    Undly_92.add_attribute("MultTyp", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_92_set.insert("2");
    Undly_92.add_attribute("UOM", "USD"); // 1
    Undly_92_set.insert("USD");
    Undly_92.add_attribute("UOMQty", "5753238.540000"); // 1
    Undly_92_set.insert("5753238.540000");
    Undly_92.add_attribute("PxUOM", "Gal"); // 1
    Undly_92_set.insert("Gal");
    Undly_92.add_attribute("PxUOMQty", "9522349.590000"); // 1
    Undly_92_set.insert("9522349.590000");
    Undly_92.add_attribute("TmUnit", "S"); // 1
    Undly_92_set.insert("S");
    Undly_92.add_attribute("ExerStyle", "1"); // 1
    Undly_92_set.insert("1");
    Undly_92.add_attribute("CpnRt", "14464894.610000"); // 1
    Undly_92_set.insert("14464894.610000");
    Undly_92.add_attribute("Exch", "UnderlyingSecurityExchange_t_1842416574"); // 1
    Undly_92_set.insert("UnderlyingSecurityExchange_t_1842416574");
    Undly_92.add_attribute("Issr", "UnderlyingIssuer_t_1743088615"); // 1
    Undly_92_set.insert("UnderlyingIssuer_t_1743088615");
    Undly_92.add_attribute("EncUndIssrLen", "1468768195"); // 1
    Undly_92_set.insert("1468768195");
    Undly_92.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1363746810"); // 1
    Undly_92_set.insert("EncodedUnderlyingIssuer_t_1363746810");
    Undly_92.add_attribute("Desc", "UnderlyingSecurityDesc_t_2145000364"); // 1
    Undly_92_set.insert("UnderlyingSecurityDesc_t_2145000364");
    Undly_92.add_attribute("EncUndSecDescLen", "231143635"); // 1
    Undly_92_set.insert("231143635");
    Undly_92.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1853942359"); // 1
    Undly_92_set.insert("EncodedUnderlyingSecurityDesc_t_1853942359");
    Undly_92.add_attribute("CPPgm", "UnderlyingCPProgram_t_74276840"); // 1
    Undly_92_set.insert("UnderlyingCPProgram_t_74276840");
    Undly_92.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_721172891"); // 1
    Undly_92_set.insert("UnderlyingCPRegType_t_721172891");
    Undly_92.add_attribute("AllocPct", "4297782.090000"); // 1
    Undly_92_set.insert("4297782.090000");
    Undly_92.add_attribute("Ccy", "USD"); // 1
    Undly_92_set.insert("USD");
    Undly_92.add_attribute("Qty", "11037701.950000"); // 1
    Undly_92_set.insert("11037701.950000");
    Undly_92.add_attribute("SettlTyp", "5"); // 1
    Undly_92_set.insert("5");
    Undly_92.add_attribute("CashAmt", "UnderlyingCashAmount_t_247707602"); // 1
    Undly_92_set.insert("UnderlyingCashAmount_t_247707602");
    Undly_92.add_attribute("CashTyp", "FIXED"); // 1
    Undly_92_set.insert("FIXED");
    Undly_92.add_attribute("Px", "13593890.180000"); // 1
    Undly_92_set.insert("13593890.180000");
    Undly_92.add_attribute("DirtPx", "10933174.110000"); // 1
    Undly_92_set.insert("10933174.110000");
    Undly_92.add_attribute("EndPx", "13044374.930000"); // 1
    Undly_92_set.insert("13044374.930000");
    Undly_92.add_attribute("StartVal", "UnderlyingStartValue_t_1214989986"); // 1
    Undly_92_set.insert("UnderlyingStartValue_t_1214989986");
    Undly_92.add_attribute("CurVal", "UnderlyingCurrentValue_t_862778575"); // 1
    Undly_92_set.insert("UnderlyingCurrentValue_t_862778575");
    Undly_92.add_attribute("EndVal", "UnderlyingEndValue_t_432195609"); // 1
    Undly_92_set.insert("UnderlyingEndValue_t_432195609");
    Undly_92.add_attribute("AdjQty", "8237532.270000"); // 1
    Undly_92_set.insert("8237532.270000");
    Undly_92.add_attribute("FxRate", "9254606.670000"); // 1
    Undly_92_set.insert("9254606.670000");
    Undly_92.add_attribute("FxRateCalc", "M"); // 1
    Undly_92_set.insert("M");
    Undly_92.add_attribute("CapValu", "UnderlyingCapValue_t_1399077081"); // 1
    Undly_92_set.insert("UnderlyingCapValue_t_1399077081");
    Undly_92.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1736431845"); // 1
    Undly_92_set.insert("UnderlyingSettlMethod_t_1736431845");
    Undly_92.add_attribute("PutCall", "39717158"); // 1
    Undly_92_set.insert("39717158");
    all_values.push_back(Undly_92_set);
    all_compo_names.insert("Undly_92_set");

    {
      xml_element UndAID_92{"UndAID"};
      multiset<string> UndAID_92_set;
      UndAID_92.add_attribute("AltID", "UnderlyingSecurityAltID_t_1760166678"); // 2
      UndAID_92_set.insert("UnderlyingSecurityAltID_t_1760166678");
      UndAID_92.add_attribute("AltIDSrc", "3"); // 2
      UndAID_92_set.insert("3");
      all_values.push_back(UndAID_92_set);
      all_compo_names.insert("UndAID_92_set");

      Undly_92.add_element(UndAID_92);
    }
    {
      xml_element Stip_149{"Stip"};
      multiset<string> Stip_149_set;
      Stip_149.add_attribute("Typ", "YIELD"); // 2
      Stip_149_set.insert("YIELD");
      Stip_149.add_attribute("Val", "UnderlyingStipValue_t_1455099604"); // 2
      Stip_149_set.insert("UnderlyingStipValue_t_1455099604");
      all_values.push_back(Stip_149_set);
      all_compo_names.insert("Stip_149_set");

      Undly_92.add_element(Stip_149);
    }
    {
      xml_element Pty_363{"Pty"};
      multiset<string> Pty_363_set;
      Pty_363.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1568469621"); // 2
      Pty_363_set.insert("UnderlyingInstrumentPartyID_t_1568469621");
      Pty_363.add_attribute("Src", "8"); // 2
      Pty_363_set.insert("8");
      Pty_363.add_attribute("R", "76"); // 2
      Pty_363_set.insert("76");
      all_values.push_back(Pty_363_set);
      all_compo_names.insert("Pty_363_set");

      {
        xml_element Sub_363{"Sub"};
        multiset<string> Sub_363_set;
        Sub_363.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1565986337"); // 3
        Sub_363_set.insert("UnderlyingInstrumentPartySubID_t_1565986337");
        Sub_363.add_attribute("Typ", "30"); // 3
        Sub_363_set.insert("30");
        all_values.push_back(Sub_363_set);
        all_compo_names.insert("Sub_363_set");

        Pty_363.add_element(Sub_363);
      }
      Undly_92.add_element(Pty_363);
    }
    elt.add_element(Undly_92);
  } // end Undly
  { // Undly
    xml_element Undly_93{"Undly"};
    multiset<string> Undly_93_set;
    Undly_93.add_attribute("Sym", "UnderlyingSymbol_t_377821477"); // 1
    Undly_93_set.insert("UnderlyingSymbol_t_377821477");
    Undly_93.add_attribute("Sfx", "WI"); // 1
    Undly_93_set.insert("WI");
    Undly_93.add_attribute("ID", "UnderlyingSecurityID_t_1759807693"); // 1
    Undly_93_set.insert("UnderlyingSecurityID_t_1759807693");
    Undly_93.add_attribute("Src", "F"); // 1
    Undly_93_set.insert("F");
    Undly_93.add_attribute("Prod", "11"); // 1
    Undly_93_set.insert("11");
    Undly_93.add_attribute("CFI", "UnderlyingCFICode_t_1826412074"); // 1
    Undly_93_set.insert("UnderlyingCFICode_t_1826412074");
    Undly_93.add_attribute("SecTyp", "IRS"); // 1
    Undly_93_set.insert("IRS");
    Undly_93.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_220545017"); // 1
    Undly_93_set.insert("UnderlyingSecuritySubType_t_220545017");
    Undly_93.add_attribute("MMY", "2074119676"); // 1
    Undly_93_set.insert("2074119676");
    Undly_93.add_attribute("Mat", "UnderlyingMaturityDate_t_1543340094"); // 1
    Undly_93_set.insert("UnderlyingMaturityDate_t_1543340094");
    Undly_93.add_attribute("MatTm", "1579934035"); // 1
    Undly_93_set.insert("1579934035");
    Undly_93.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1019953439"); // 1
    Undly_93_set.insert("UnderlyingCouponPaymentDate_t_1019953439");
    Undly_93.add_attribute("RestrctTyp", "XR"); // 1
    Undly_93_set.insert("XR");
    Undly_93.add_attribute("Snrty", "SD"); // 1
    Undly_93_set.insert("SD");
    Undly_93.add_attribute("NotlPctOut", "18827320.140000"); // 1
    Undly_93_set.insert("18827320.140000");
    Undly_93.add_attribute("OrigNotlPctOut", "11324895.480000"); // 1
    Undly_93_set.insert("11324895.480000");
    Undly_93.add_attribute("AttchPnt", "14711936.010000"); // 1
    Undly_93_set.insert("14711936.010000");
    Undly_93.add_attribute("DetchPnt", "6607090.340000"); // 1
    Undly_93_set.insert("6607090.340000");
    Undly_93.add_attribute("Issued", "UnderlyingIssueDate_t_219971746"); // 1
    Undly_93_set.insert("UnderlyingIssueDate_t_219971746");
    Undly_93.add_attribute("RepoCollSecTyp", "722787034"); // 1
    Undly_93_set.insert("722787034");
    Undly_93.add_attribute("RepoTrm", "249657231"); // 1
    Undly_93_set.insert("249657231");
    Undly_93.add_attribute("RepoRt", "2596889.040000"); // 1
    Undly_93_set.insert("2596889.040000");
    Undly_93.add_attribute("Fctr", "3354700.640000"); // 1
    Undly_93_set.insert("3354700.640000");
    Undly_93.add_attribute("CrdRtg", "UnderlyingCreditRating_t_75038237"); // 1
    Undly_93_set.insert("UnderlyingCreditRating_t_75038237");
    Undly_93.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1745895524"); // 1
    Undly_93_set.insert("UnderlyingInstrRegistry_t_1745895524");
    Undly_93.add_attribute("Ctry", "1790569669"); // 1
    Undly_93_set.insert("1790569669");
    Undly_93.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1643507858"); // 1
    Undly_93_set.insert("UnderlyingStateOrProvinceOfIssue_t_1643507858");
    Undly_93.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_405903043"); // 1
    Undly_93_set.insert("UnderlyingLocaleOfIssue_t_405903043");
    Undly_93.add_attribute("Redeem", "UnderlyingRedemptionDate_t_314448787"); // 1
    Undly_93_set.insert("UnderlyingRedemptionDate_t_314448787");
    Undly_93.add_attribute("StrkPx", "10620105.470000"); // 1
    Undly_93_set.insert("10620105.470000");
    Undly_93.add_attribute("StrkCcy", "CHF"); // 1
    Undly_93_set.insert("CHF");
    Undly_93.add_attribute("OptA", "554790076"); // 1
    Undly_93_set.insert("554790076");
    Undly_93.add_attribute("Mult", "10568618.900000"); // 1
    Undly_93_set.insert("10568618.900000");
    Undly_93.add_attribute("MultTyp", "1"); // 1
    Undly_93_set.insert("1");
    Undly_93.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_93_set.insert("3");
    Undly_93.add_attribute("UOM", "MMBtu"); // 1
    Undly_93_set.insert("MMBtu");
    Undly_93.add_attribute("UOMQty", "12637561.850000"); // 1
    Undly_93_set.insert("12637561.850000");
    Undly_93.add_attribute("PxUOM", "tn"); // 1
    Undly_93_set.insert("tn");
    Undly_93.add_attribute("PxUOMQty", "6624263.450000"); // 1
    Undly_93_set.insert("6624263.450000");
    Undly_93.add_attribute("TmUnit", "Yr"); // 1
    Undly_93_set.insert("Yr");
    Undly_93.add_attribute("ExerStyle", "2"); // 1
    Undly_93_set.insert("2");
    Undly_93.add_attribute("CpnRt", "16823797.840000"); // 1
    Undly_93_set.insert("16823797.840000");
    Undly_93.add_attribute("Exch", "UnderlyingSecurityExchange_t_1359906570"); // 1
    Undly_93_set.insert("UnderlyingSecurityExchange_t_1359906570");
    Undly_93.add_attribute("Issr", "UnderlyingIssuer_t_111989664"); // 1
    Undly_93_set.insert("UnderlyingIssuer_t_111989664");
    Undly_93.add_attribute("EncUndIssrLen", "1417628151"); // 1
    Undly_93_set.insert("1417628151");
    Undly_93.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_344912470"); // 1
    Undly_93_set.insert("EncodedUnderlyingIssuer_t_344912470");
    Undly_93.add_attribute("Desc", "UnderlyingSecurityDesc_t_1583183265"); // 1
    Undly_93_set.insert("UnderlyingSecurityDesc_t_1583183265");
    Undly_93.add_attribute("EncUndSecDescLen", "2078337185"); // 1
    Undly_93_set.insert("2078337185");
    Undly_93.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_564884217"); // 1
    Undly_93_set.insert("EncodedUnderlyingSecurityDesc_t_564884217");
    Undly_93.add_attribute("CPPgm", "UnderlyingCPProgram_t_158486652"); // 1
    Undly_93_set.insert("UnderlyingCPProgram_t_158486652");
    Undly_93.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_180510768"); // 1
    Undly_93_set.insert("UnderlyingCPRegType_t_180510768");
    Undly_93.add_attribute("AllocPct", "8245731.210000"); // 1
    Undly_93_set.insert("8245731.210000");
    Undly_93.add_attribute("Ccy", "CAN"); // 1
    Undly_93_set.insert("CAN");
    Undly_93.add_attribute("Qty", "4229849.970000"); // 1
    Undly_93_set.insert("4229849.970000");
    Undly_93.add_attribute("SettlTyp", "4"); // 1
    Undly_93_set.insert("4");
    Undly_93.add_attribute("CashAmt", "UnderlyingCashAmount_t_1899056863"); // 1
    Undly_93_set.insert("UnderlyingCashAmount_t_1899056863");
    Undly_93.add_attribute("CashTyp", "FIXED"); // 1
    Undly_93_set.insert("FIXED");
    Undly_93.add_attribute("Px", "4514915.250000"); // 1
    Undly_93_set.insert("4514915.250000");
    Undly_93.add_attribute("DirtPx", "8135837.620000"); // 1
    Undly_93_set.insert("8135837.620000");
    Undly_93.add_attribute("EndPx", "1259422.370000"); // 1
    Undly_93_set.insert("1259422.370000");
    Undly_93.add_attribute("StartVal", "UnderlyingStartValue_t_1143761790"); // 1
    Undly_93_set.insert("UnderlyingStartValue_t_1143761790");
    Undly_93.add_attribute("CurVal", "UnderlyingCurrentValue_t_1368373838"); // 1
    Undly_93_set.insert("UnderlyingCurrentValue_t_1368373838");
    Undly_93.add_attribute("EndVal", "UnderlyingEndValue_t_1182804128"); // 1
    Undly_93_set.insert("UnderlyingEndValue_t_1182804128");
    Undly_93.add_attribute("AdjQty", "4961480.930000"); // 1
    Undly_93_set.insert("4961480.930000");
    Undly_93.add_attribute("FxRate", "11799277.230000"); // 1
    Undly_93_set.insert("11799277.230000");
    Undly_93.add_attribute("FxRateCalc", "M"); // 1
    Undly_93_set.insert("M");
    Undly_93.add_attribute("CapValu", "UnderlyingCapValue_t_1759904279"); // 1
    Undly_93_set.insert("UnderlyingCapValue_t_1759904279");
    Undly_93.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1212026626"); // 1
    Undly_93_set.insert("UnderlyingSettlMethod_t_1212026626");
    Undly_93.add_attribute("PutCall", "433537141"); // 1
    Undly_93_set.insert("433537141");
    all_values.push_back(Undly_93_set);
    all_compo_names.insert("Undly_93_set");

    {
      xml_element UndAID_93{"UndAID"};
      multiset<string> UndAID_93_set;
      UndAID_93.add_attribute("AltID", "UnderlyingSecurityAltID_t_272033262"); // 2
      UndAID_93_set.insert("UnderlyingSecurityAltID_t_272033262");
      UndAID_93.add_attribute("AltIDSrc", "I"); // 2
      UndAID_93_set.insert("I");
      all_values.push_back(UndAID_93_set);
      all_compo_names.insert("UndAID_93_set");

      Undly_93.add_element(UndAID_93);
    }
    {
      xml_element Stip_150{"Stip"};
      multiset<string> Stip_150_set;
      Stip_150.add_attribute("Typ", "SECTOR"); // 2
      Stip_150_set.insert("SECTOR");
      Stip_150.add_attribute("Val", "UnderlyingStipValue_t_1631939833"); // 2
      Stip_150_set.insert("UnderlyingStipValue_t_1631939833");
      all_values.push_back(Stip_150_set);
      all_compo_names.insert("Stip_150_set");

      Undly_93.add_element(Stip_150);
    }
    {
      xml_element Pty_364{"Pty"};
      multiset<string> Pty_364_set;
      Pty_364.add_attribute("ID", "UnderlyingInstrumentPartyID_t_788565581"); // 2
      Pty_364_set.insert("UnderlyingInstrumentPartyID_t_788565581");
      Pty_364.add_attribute("Src", "E"); // 2
      Pty_364_set.insert("E");
      Pty_364.add_attribute("R", "85"); // 2
      Pty_364_set.insert("85");
      all_values.push_back(Pty_364_set);
      all_compo_names.insert("Pty_364_set");

      {
        xml_element Sub_364{"Sub"};
        multiset<string> Sub_364_set;
        Sub_364.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_224265199"); // 3
        Sub_364_set.insert("UnderlyingInstrumentPartySubID_t_224265199");
        Sub_364.add_attribute("Typ", "13"); // 3
        Sub_364_set.insert("13");
        all_values.push_back(Sub_364_set);
        all_compo_names.insert("Sub_364_set");

        Pty_364.add_element(Sub_364);
      }
      Undly_93.add_element(Pty_364);
    }
    elt.add_element(Undly_93);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_25{"OrdQty"};
    multiset<string> OrdQty_25_set;
    OrdQty_25.add_attribute("Qty", "3942528.720000"); // 1
    OrdQty_25_set.insert("3942528.720000");
    OrdQty_25.add_attribute("Cash", "3827518.510000"); // 1
    OrdQty_25_set.insert("3827518.510000");
    OrdQty_25.add_attribute("Pct", "14974257.340000"); // 1
    OrdQty_25_set.insert("14974257.340000");
    OrdQty_25.add_attribute("RndDir", "1"); // 1
    OrdQty_25_set.insert("1");
    OrdQty_25.add_attribute("RndMod", "8767085.670000"); // 1
    OrdQty_25_set.insert("8767085.670000");
    all_values.push_back(OrdQty_25_set);
    all_compo_names.insert("OrdQty_25_set");

    elt.add_element(OrdQty_25);
  } // end OrdQty
  { // Stip
    xml_element Stip_151{"Stip"};
    multiset<string> Stip_151_set;
    Stip_151.add_attribute("Typ", "PMAX"); // 1
    Stip_151_set.insert("PMAX");
    Stip_151.add_attribute("Val", "StipulationValue_t_1013751305"); // 1
    Stip_151_set.insert("StipulationValue_t_1013751305");
    all_values.push_back(Stip_151_set);
    all_compo_names.insert("Stip_151_set");

    elt.add_element(Stip_151);
  } // end Stip
  { // QuoteStat
    xml_element QuoteStat_0{"QuoteStat"};
    multiset<string> QuoteStat_0_set;
    QuoteStat_0.add_attribute("Qty", "3232153.840000"); // 1
    QuoteStat_0_set.insert("3232153.840000");
    QuoteStat_0.add_attribute("OrdQty", "14652428.300000"); // 1
    QuoteStat_0_set.insert("14652428.300000");
    QuoteStat_0.add_attribute("SwapTyp", "1"); // 1
    QuoteStat_0_set.insert("1");
    QuoteStat_0.add_attribute("SettlTyp", "9"); // 1
    QuoteStat_0_set.insert("9");
    QuoteStat_0.add_attribute("SettlDt", "LegSettlDate_t_461520972"); // 1
    QuoteStat_0_set.insert("LegSettlDate_t_461520972");
    all_values.push_back(QuoteStat_0_set);
    all_compo_names.insert("QuoteStat_0_set");

    {
      xml_element Leg_77{"Leg"};
      multiset<string> Leg_77_set;
      Leg_77.add_attribute("Sym", "LegSymbol_t_1539021906"); // 2
      Leg_77_set.insert("LegSymbol_t_1539021906");
      Leg_77.add_attribute("Sfx", "WI"); // 2
      Leg_77_set.insert("WI");
      Leg_77.add_attribute("ID", "LegSecurityID_t_957669065"); // 2
      Leg_77_set.insert("LegSecurityID_t_957669065");
      Leg_77.add_attribute("Src", "A"); // 2
      Leg_77_set.insert("A");
      Leg_77.add_attribute("Prod", "2"); // 2
      Leg_77_set.insert("2");
      Leg_77.add_attribute("CFI", "LegCFICode_t_570089696"); // 2
      Leg_77_set.insert("LegCFICode_t_570089696");
      Leg_77.add_attribute("SecTyp", "CORP"); // 2
      Leg_77_set.insert("CORP");
      Leg_77.add_attribute("SecSubTyp", "LegSecuritySubType_t_1836609687"); // 2
      Leg_77_set.insert("LegSecuritySubType_t_1836609687");
      Leg_77.add_attribute("MMY", "842122959"); // 2
      Leg_77_set.insert("842122959");
      Leg_77.add_attribute("Mat", "LegMaturityDate_t_312584877"); // 2
      Leg_77_set.insert("LegMaturityDate_t_312584877");
      Leg_77.add_attribute("MatTm", "1805042965"); // 2
      Leg_77_set.insert("1805042965");
      Leg_77.add_attribute("CpnPmt", "LegCouponPaymentDate_t_326579144"); // 2
      Leg_77_set.insert("LegCouponPaymentDate_t_326579144");
      Leg_77.add_attribute("Issued", "LegIssueDate_t_1101150458"); // 2
      Leg_77_set.insert("LegIssueDate_t_1101150458");
      Leg_77.add_attribute("RepoCollSecTyp", "1043620746"); // 2
      Leg_77_set.insert("1043620746");
      Leg_77.add_attribute("RepoTrm", "155947799"); // 2
      Leg_77_set.insert("155947799");
      Leg_77.add_attribute("RepoRt", "13254156.570000"); // 2
      Leg_77_set.insert("13254156.570000");
      Leg_77.add_attribute("Fctr", "2130520.640000"); // 2
      Leg_77_set.insert("2130520.640000");
      Leg_77.add_attribute("CrdRtg", "LegCreditRating_t_550200672"); // 2
      Leg_77_set.insert("LegCreditRating_t_550200672");
      Leg_77.add_attribute("Rgstry", "LegInstrRegistry_t_1708167508"); // 2
      Leg_77_set.insert("LegInstrRegistry_t_1708167508");
      Leg_77.add_attribute("Ctry", "1710477798"); // 2
      Leg_77_set.insert("1710477798");
      Leg_77.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1769026666"); // 2
      Leg_77_set.insert("LegStateOrProvinceOfIssue_t_1769026666");
      Leg_77.add_attribute("Lcl", "LegLocaleOfIssue_t_437392428"); // 2
      Leg_77_set.insert("LegLocaleOfIssue_t_437392428");
      Leg_77.add_attribute("Redeem", "LegRedemptionDate_t_1315968889"); // 2
      Leg_77_set.insert("LegRedemptionDate_t_1315968889");
      Leg_77.add_attribute("Strk", "12633540.090000"); // 2
      Leg_77_set.insert("12633540.090000");
      Leg_77.add_attribute("StrkCcy", "EUR"); // 2
      Leg_77_set.insert("EUR");
      Leg_77.add_attribute("OptA", "1586569393"); // 2
      Leg_77_set.insert("1586569393");
      Leg_77.add_attribute("Cmult", "7689029.150000"); // 2
      Leg_77_set.insert("7689029.150000");
      Leg_77.add_attribute("MultTyp", "2"); // 2
      Leg_77_set.insert("2");
      Leg_77.add_attribute("FlowSchedTyp", "0"); // 2
      Leg_77_set.insert("0");
      Leg_77.add_attribute("UOM", "t"); // 2
      Leg_77_set.insert("t");
      Leg_77.add_attribute("UOMQty", "2352195.210000"); // 2
      Leg_77_set.insert("2352195.210000");
      Leg_77.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_77_set.insert("MMBtu");
      Leg_77.add_attribute("PxUOMQty", "406093.040000"); // 2
      Leg_77_set.insert("406093.040000");
      Leg_77.add_attribute("TmUnit", "Min"); // 2
      Leg_77_set.insert("Min");
      Leg_77.add_attribute("ExerStyle", "2"); // 2
      Leg_77_set.insert("2");
      Leg_77.add_attribute("CpnRt", "6106990.010000"); // 2
      Leg_77_set.insert("6106990.010000");
      Leg_77.add_attribute("Exch", "LegSecurityExchange_t_442694463"); // 2
      Leg_77_set.insert("LegSecurityExchange_t_442694463");
      Leg_77.add_attribute("Issr", "LegIssuer_t_464920054"); // 2
      Leg_77_set.insert("LegIssuer_t_464920054");
      Leg_77.add_attribute("EncLegIssrLen", "1452821960"); // 2
      Leg_77_set.insert("1452821960");
      Leg_77.add_attribute("EncLegIssr", "EncodedLegIssuer_t_755279340"); // 2
      Leg_77_set.insert("EncodedLegIssuer_t_755279340");
      Leg_77.add_attribute("Desc", "LegSecurityDesc_t_122479371"); // 2
      Leg_77_set.insert("LegSecurityDesc_t_122479371");
      Leg_77.add_attribute("EncLegSecDescLen", "1779401104"); // 2
      Leg_77_set.insert("1779401104");
      Leg_77.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1856429798"); // 2
      Leg_77_set.insert("EncodedLegSecurityDesc_t_1856429798");
      Leg_77.add_attribute("RatioQty", "11661001.180000"); // 2
      Leg_77_set.insert("11661001.180000");
      Leg_77.add_attribute("Side", "8"); // 2
      Leg_77_set.insert("8");
      Leg_77.add_attribute("Ccy", "USD"); // 2
      Leg_77_set.insert("USD");
      Leg_77.add_attribute("Pool", "LegPool_t_338065927"); // 2
      Leg_77_set.insert("LegPool_t_338065927");
      Leg_77.add_attribute("Dated", "LegDatedDate_t_595045668"); // 2
      Leg_77_set.insert("LegDatedDate_t_595045668");
      Leg_77.add_attribute("CSetMo", "942146333"); // 2
      Leg_77_set.insert("942146333");
      Leg_77.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2107092593"); // 2
      Leg_77_set.insert("LegInterestAccrualDate_t_2107092593");
      Leg_77.add_attribute("PutCall", "1032438096"); // 2
      Leg_77_set.insert("1032438096");
      Leg_77.add_attribute("LegOptionRatio", "1106315.740000"); // 2
      Leg_77_set.insert("1106315.740000");
      Leg_77.add_attribute("Px", "12229629.550000"); // 2
      Leg_77_set.insert("12229629.550000");
      all_values.push_back(Leg_77_set);
      all_compo_names.insert("Leg_77_set");

      {
        xml_element LegAID_72{"LegAID"};
        multiset<string> LegAID_72_set;
        LegAID_72.add_attribute("SecAltID", "LegSecurityAltID_t_336098181"); // 3
        LegAID_72_set.insert("LegSecurityAltID_t_336098181");
        LegAID_72.add_attribute("SecAltIDSrc", "K"); // 3
        LegAID_72_set.insert("K");
        all_values.push_back(LegAID_72_set);
        all_compo_names.insert("LegAID_72_set");

        Leg_77.add_element(LegAID_72);
      }
      QuoteStat_0.add_element(Leg_77);
    }
    {
      xml_element Stip_152{"Stip"};
      multiset<string> Stip_152_set;
      Stip_152.add_attribute("StipTyp", "AVFICO"); // 2
      Stip_152_set.insert("AVFICO");
      Stip_152.add_attribute("StipVal", "LegStipulationValue_t_1105001096"); // 2
      Stip_152_set.insert("LegStipulationValue_t_1105001096");
      all_values.push_back(Stip_152_set);
      all_compo_names.insert("Stip_152_set");

      QuoteStat_0.add_element(Stip_152);
    }
    {
      xml_element Pty_365{"Pty"};
      multiset<string> Pty_365_set;
      Pty_365.add_attribute("ID", "NestedPartyID_t_1627346033"); // 2
      Pty_365_set.insert("NestedPartyID_t_1627346033");
      Pty_365.add_attribute("Src", "A"); // 2
      Pty_365_set.insert("A");
      Pty_365.add_attribute("R", "73"); // 2
      Pty_365_set.insert("73");
      all_values.push_back(Pty_365_set);
      all_compo_names.insert("Pty_365_set");

      {
        xml_element Sub_365{"Sub"};
        multiset<string> Sub_365_set;
        Sub_365.add_attribute("ID", "NestedPartySubID_t_1862565555"); // 3
        Sub_365_set.insert("NestedPartySubID_t_1862565555");
        Sub_365.add_attribute("Typ", "31"); // 3
        Sub_365_set.insert("31");
        all_values.push_back(Sub_365_set);
        all_compo_names.insert("Sub_365_set");

        Pty_365.add_element(Sub_365);
      }
      QuoteStat_0.add_element(Pty_365);
    }
    elt.add_element(QuoteStat_0);
  } // end QuoteStat
  { // QuoteStat
    xml_element QuoteStat_1{"QuoteStat"};
    multiset<string> QuoteStat_1_set;
    QuoteStat_1.add_attribute("Qty", "2285506.400000"); // 1
    QuoteStat_1_set.insert("2285506.400000");
    QuoteStat_1.add_attribute("OrdQty", "5217674.100000"); // 1
    QuoteStat_1_set.insert("5217674.100000");
    QuoteStat_1.add_attribute("SwapTyp", "4"); // 1
    QuoteStat_1_set.insert("4");
    QuoteStat_1.add_attribute("SettlTyp", "1"); // 1
    QuoteStat_1_set.insert("1");
    QuoteStat_1.add_attribute("SettlDt", "LegSettlDate_t_964461873"); // 1
    QuoteStat_1_set.insert("LegSettlDate_t_964461873");
    all_values.push_back(QuoteStat_1_set);
    all_compo_names.insert("QuoteStat_1_set");

    {
      xml_element Leg_78{"Leg"};
      multiset<string> Leg_78_set;
      Leg_78.add_attribute("Sym", "LegSymbol_t_1163727604"); // 2
      Leg_78_set.insert("LegSymbol_t_1163727604");
      Leg_78.add_attribute("Sfx", "WI"); // 2
      Leg_78_set.insert("WI");
      Leg_78.add_attribute("ID", "LegSecurityID_t_1719741213"); // 2
      Leg_78_set.insert("LegSecurityID_t_1719741213");
      Leg_78.add_attribute("Src", "B"); // 2
      Leg_78_set.insert("B");
      Leg_78.add_attribute("Prod", "12"); // 2
      Leg_78_set.insert("12");
      Leg_78.add_attribute("CFI", "LegCFICode_t_1428687363"); // 2
      Leg_78_set.insert("LegCFICode_t_1428687363");
      Leg_78.add_attribute("SecTyp", "SECPLEDGE"); // 2
      Leg_78_set.insert("SECPLEDGE");
      Leg_78.add_attribute("SecSubTyp", "LegSecuritySubType_t_1711854312"); // 2
      Leg_78_set.insert("LegSecuritySubType_t_1711854312");
      Leg_78.add_attribute("MMY", "315565523"); // 2
      Leg_78_set.insert("315565523");
      Leg_78.add_attribute("Mat", "LegMaturityDate_t_1683975628"); // 2
      Leg_78_set.insert("LegMaturityDate_t_1683975628");
      Leg_78.add_attribute("MatTm", "2049920240"); // 2
      Leg_78_set.insert("2049920240");
      Leg_78.add_attribute("CpnPmt", "LegCouponPaymentDate_t_910611192"); // 2
      Leg_78_set.insert("LegCouponPaymentDate_t_910611192");
      Leg_78.add_attribute("Issued", "LegIssueDate_t_478638313"); // 2
      Leg_78_set.insert("LegIssueDate_t_478638313");
      Leg_78.add_attribute("RepoCollSecTyp", "2009529185"); // 2
      Leg_78_set.insert("2009529185");
      Leg_78.add_attribute("RepoTrm", "1943049288"); // 2
      Leg_78_set.insert("1943049288");
      Leg_78.add_attribute("RepoRt", "5892698.880000"); // 2
      Leg_78_set.insert("5892698.880000");
      Leg_78.add_attribute("Fctr", "10850084.920000"); // 2
      Leg_78_set.insert("10850084.920000");
      Leg_78.add_attribute("CrdRtg", "LegCreditRating_t_131663822"); // 2
      Leg_78_set.insert("LegCreditRating_t_131663822");
      Leg_78.add_attribute("Rgstry", "LegInstrRegistry_t_1372934658"); // 2
      Leg_78_set.insert("LegInstrRegistry_t_1372934658");
      Leg_78.add_attribute("Ctry", "1747057193"); // 2
      Leg_78_set.insert("1747057193");
      Leg_78.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1236664918"); // 2
      Leg_78_set.insert("LegStateOrProvinceOfIssue_t_1236664918");
      Leg_78.add_attribute("Lcl", "LegLocaleOfIssue_t_852797043"); // 2
      Leg_78_set.insert("LegLocaleOfIssue_t_852797043");
      Leg_78.add_attribute("Redeem", "LegRedemptionDate_t_149865612"); // 2
      Leg_78_set.insert("LegRedemptionDate_t_149865612");
      Leg_78.add_attribute("Strk", "14246062.540000"); // 2
      Leg_78_set.insert("14246062.540000");
      Leg_78.add_attribute("StrkCcy", "JPY"); // 2
      Leg_78_set.insert("JPY");
      Leg_78.add_attribute("OptA", "1653156894"); // 2
      Leg_78_set.insert("1653156894");
      Leg_78.add_attribute("Cmult", "10896463.600000"); // 2
      Leg_78_set.insert("10896463.600000");
      Leg_78.add_attribute("MultTyp", "2"); // 2
      Leg_78_set.insert("2");
      Leg_78.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_78_set.insert("2");
      Leg_78.add_attribute("UOM", "oz_tr"); // 2
      Leg_78_set.insert("oz_tr");
      Leg_78.add_attribute("UOMQty", "19354143.030000"); // 2
      Leg_78_set.insert("19354143.030000");
      Leg_78.add_attribute("PxUOM", "MWh"); // 2
      Leg_78_set.insert("MWh");
      Leg_78.add_attribute("PxUOMQty", "16263657.980000"); // 2
      Leg_78_set.insert("16263657.980000");
      Leg_78.add_attribute("TmUnit", "S"); // 2
      Leg_78_set.insert("S");
      Leg_78.add_attribute("ExerStyle", "0"); // 2
      Leg_78_set.insert("0");
      Leg_78.add_attribute("CpnRt", "9075695.140000"); // 2
      Leg_78_set.insert("9075695.140000");
      Leg_78.add_attribute("Exch", "LegSecurityExchange_t_1378961077"); // 2
      Leg_78_set.insert("LegSecurityExchange_t_1378961077");
      Leg_78.add_attribute("Issr", "LegIssuer_t_1977870561"); // 2
      Leg_78_set.insert("LegIssuer_t_1977870561");
      Leg_78.add_attribute("EncLegIssrLen", "1223135037"); // 2
      Leg_78_set.insert("1223135037");
      Leg_78.add_attribute("EncLegIssr", "EncodedLegIssuer_t_915453058"); // 2
      Leg_78_set.insert("EncodedLegIssuer_t_915453058");
      Leg_78.add_attribute("Desc", "LegSecurityDesc_t_1880307153"); // 2
      Leg_78_set.insert("LegSecurityDesc_t_1880307153");
      Leg_78.add_attribute("EncLegSecDescLen", "2133746229"); // 2
      Leg_78_set.insert("2133746229");
      Leg_78.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1394091371"); // 2
      Leg_78_set.insert("EncodedLegSecurityDesc_t_1394091371");
      Leg_78.add_attribute("RatioQty", "17423526.910000"); // 2
      Leg_78_set.insert("17423526.910000");
      Leg_78.add_attribute("Side", "F"); // 2
      Leg_78_set.insert("F");
      Leg_78.add_attribute("Ccy", "CHF"); // 2
      Leg_78_set.insert("CHF");
      Leg_78.add_attribute("Pool", "LegPool_t_2060975692"); // 2
      Leg_78_set.insert("LegPool_t_2060975692");
      Leg_78.add_attribute("Dated", "LegDatedDate_t_1208812269"); // 2
      Leg_78_set.insert("LegDatedDate_t_1208812269");
      Leg_78.add_attribute("CSetMo", "279451080"); // 2
      Leg_78_set.insert("279451080");
      Leg_78.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1150156962"); // 2
      Leg_78_set.insert("LegInterestAccrualDate_t_1150156962");
      Leg_78.add_attribute("PutCall", "2061609313"); // 2
      Leg_78_set.insert("2061609313");
      Leg_78.add_attribute("LegOptionRatio", "4293166.930000"); // 2
      Leg_78_set.insert("4293166.930000");
      Leg_78.add_attribute("Px", "4272795.680000"); // 2
      Leg_78_set.insert("4272795.680000");
      all_values.push_back(Leg_78_set);
      all_compo_names.insert("Leg_78_set");

      {
        xml_element LegAID_73{"LegAID"};
        multiset<string> LegAID_73_set;
        LegAID_73.add_attribute("SecAltID", "LegSecurityAltID_t_482004615"); // 3
        LegAID_73_set.insert("LegSecurityAltID_t_482004615");
        LegAID_73.add_attribute("SecAltIDSrc", "G"); // 3
        LegAID_73_set.insert("G");
        all_values.push_back(LegAID_73_set);
        all_compo_names.insert("LegAID_73_set");

        Leg_78.add_element(LegAID_73);
      }
      QuoteStat_1.add_element(Leg_78);
    }
    {
      xml_element Stip_153{"Stip"};
      multiset<string> Stip_153_set;
      Stip_153.add_attribute("StipTyp", "MAXBAL"); // 2
      Stip_153_set.insert("MAXBAL");
      Stip_153.add_attribute("StipVal", "LegStipulationValue_t_1571650976"); // 2
      Stip_153_set.insert("LegStipulationValue_t_1571650976");
      all_values.push_back(Stip_153_set);
      all_compo_names.insert("Stip_153_set");

      QuoteStat_1.add_element(Stip_153);
    }
    {
      xml_element Pty_366{"Pty"};
      multiset<string> Pty_366_set;
      Pty_366.add_attribute("ID", "NestedPartyID_t_1273882540"); // 2
      Pty_366_set.insert("NestedPartyID_t_1273882540");
      Pty_366.add_attribute("Src", "I"); // 2
      Pty_366_set.insert("I");
      Pty_366.add_attribute("R", "52"); // 2
      Pty_366_set.insert("52");
      all_values.push_back(Pty_366_set);
      all_compo_names.insert("Pty_366_set");

      {
        xml_element Sub_366{"Sub"};
        multiset<string> Sub_366_set;
        Sub_366.add_attribute("ID", "NestedPartySubID_t_1061813196"); // 3
        Sub_366_set.insert("NestedPartySubID_t_1061813196");
        Sub_366.add_attribute("Typ", "4"); // 3
        Sub_366_set.insert("4");
        all_values.push_back(Sub_366_set);
        all_compo_names.insert("Sub_366_set");

        Pty_366.add_element(Sub_366);
      }
      QuoteStat_1.add_element(Pty_366);
    }
    elt.add_element(QuoteStat_1);
  } // end QuoteStat
  { // QuoteStat
    xml_element QuoteStat_2{"QuoteStat"};
    multiset<string> QuoteStat_2_set;
    QuoteStat_2.add_attribute("Qty", "9571577.120000"); // 1
    QuoteStat_2_set.insert("9571577.120000");
    QuoteStat_2.add_attribute("OrdQty", "21359508.270000"); // 1
    QuoteStat_2_set.insert("21359508.270000");
    QuoteStat_2.add_attribute("SwapTyp", "4"); // 1
    QuoteStat_2_set.insert("4");
    QuoteStat_2.add_attribute("SettlTyp", "6"); // 1
    QuoteStat_2_set.insert("6");
    QuoteStat_2.add_attribute("SettlDt", "LegSettlDate_t_1367428257"); // 1
    QuoteStat_2_set.insert("LegSettlDate_t_1367428257");
    all_values.push_back(QuoteStat_2_set);
    all_compo_names.insert("QuoteStat_2_set");

    {
      xml_element Leg_79{"Leg"};
      multiset<string> Leg_79_set;
      Leg_79.add_attribute("Sym", "LegSymbol_t_863789704"); // 2
      Leg_79_set.insert("LegSymbol_t_863789704");
      Leg_79.add_attribute("Sfx", "WI"); // 2
      Leg_79_set.insert("WI");
      Leg_79.add_attribute("ID", "LegSecurityID_t_135397667"); // 2
      Leg_79_set.insert("LegSecurityID_t_135397667");
      Leg_79.add_attribute("Src", "6"); // 2
      Leg_79_set.insert("6");
      Leg_79.add_attribute("Prod", "10"); // 2
      Leg_79_set.insert("10");
      Leg_79.add_attribute("CFI", "LegCFICode_t_1529489038"); // 2
      Leg_79_set.insert("LegCFICode_t_1529489038");
      Leg_79.add_attribute("SecTyp", "TLQN"); // 2
      Leg_79_set.insert("TLQN");
      Leg_79.add_attribute("SecSubTyp", "LegSecuritySubType_t_708469419"); // 2
      Leg_79_set.insert("LegSecuritySubType_t_708469419");
      Leg_79.add_attribute("MMY", "1365366650"); // 2
      Leg_79_set.insert("1365366650");
      Leg_79.add_attribute("Mat", "LegMaturityDate_t_871359788"); // 2
      Leg_79_set.insert("LegMaturityDate_t_871359788");
      Leg_79.add_attribute("MatTm", "621961463"); // 2
      Leg_79_set.insert("621961463");
      Leg_79.add_attribute("CpnPmt", "LegCouponPaymentDate_t_426695271"); // 2
      Leg_79_set.insert("LegCouponPaymentDate_t_426695271");
      Leg_79.add_attribute("Issued", "LegIssueDate_t_1150810868"); // 2
      Leg_79_set.insert("LegIssueDate_t_1150810868");
      Leg_79.add_attribute("RepoCollSecTyp", "1772118425"); // 2
      Leg_79_set.insert("1772118425");
      Leg_79.add_attribute("RepoTrm", "340820936"); // 2
      Leg_79_set.insert("340820936");
      Leg_79.add_attribute("RepoRt", "15801275.610000"); // 2
      Leg_79_set.insert("15801275.610000");
      Leg_79.add_attribute("Fctr", "519143.460000"); // 2
      Leg_79_set.insert("519143.460000");
      Leg_79.add_attribute("CrdRtg", "LegCreditRating_t_822825552"); // 2
      Leg_79_set.insert("LegCreditRating_t_822825552");
      Leg_79.add_attribute("Rgstry", "LegInstrRegistry_t_2082323403"); // 2
      Leg_79_set.insert("LegInstrRegistry_t_2082323403");
      Leg_79.add_attribute("Ctry", "2132350808"); // 2
      Leg_79_set.insert("2132350808");
      Leg_79.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_246992880"); // 2
      Leg_79_set.insert("LegStateOrProvinceOfIssue_t_246992880");
      Leg_79.add_attribute("Lcl", "LegLocaleOfIssue_t_1208722295"); // 2
      Leg_79_set.insert("LegLocaleOfIssue_t_1208722295");
      Leg_79.add_attribute("Redeem", "LegRedemptionDate_t_262742862"); // 2
      Leg_79_set.insert("LegRedemptionDate_t_262742862");
      Leg_79.add_attribute("Strk", "17252684.410000"); // 2
      Leg_79_set.insert("17252684.410000");
      Leg_79.add_attribute("StrkCcy", "CAN"); // 2
      Leg_79_set.insert("CAN");
      Leg_79.add_attribute("OptA", "534942505"); // 2
      Leg_79_set.insert("534942505");
      Leg_79.add_attribute("Cmult", "1115190.230000"); // 2
      Leg_79_set.insert("1115190.230000");
      Leg_79.add_attribute("MultTyp", "2"); // 2
      Leg_79_set.insert("2");
      Leg_79.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_79_set.insert("3");
      Leg_79.add_attribute("UOM", "tn"); // 2
      Leg_79_set.insert("tn");
      Leg_79.add_attribute("UOMQty", "7798382.500000"); // 2
      Leg_79_set.insert("7798382.500000");
      Leg_79.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_79_set.insert("MMBtu");
      Leg_79.add_attribute("PxUOMQty", "16143449.470000"); // 2
      Leg_79_set.insert("16143449.470000");
      Leg_79.add_attribute("TmUnit", "Mo"); // 2
      Leg_79_set.insert("Mo");
      Leg_79.add_attribute("ExerStyle", "1"); // 2
      Leg_79_set.insert("1");
      Leg_79.add_attribute("CpnRt", "9963503.370000"); // 2
      Leg_79_set.insert("9963503.370000");
      Leg_79.add_attribute("Exch", "LegSecurityExchange_t_1567933712"); // 2
      Leg_79_set.insert("LegSecurityExchange_t_1567933712");
      Leg_79.add_attribute("Issr", "LegIssuer_t_680191667"); // 2
      Leg_79_set.insert("LegIssuer_t_680191667");
      Leg_79.add_attribute("EncLegIssrLen", "214233339"); // 2
      Leg_79_set.insert("214233339");
      Leg_79.add_attribute("EncLegIssr", "EncodedLegIssuer_t_291809852"); // 2
      Leg_79_set.insert("EncodedLegIssuer_t_291809852");
      Leg_79.add_attribute("Desc", "LegSecurityDesc_t_1302153130"); // 2
      Leg_79_set.insert("LegSecurityDesc_t_1302153130");
      Leg_79.add_attribute("EncLegSecDescLen", "640928611"); // 2
      Leg_79_set.insert("640928611");
      Leg_79.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1442620720"); // 2
      Leg_79_set.insert("EncodedLegSecurityDesc_t_1442620720");
      Leg_79.add_attribute("RatioQty", "9267879.070000"); // 2
      Leg_79_set.insert("9267879.070000");
      Leg_79.add_attribute("Side", "C"); // 2
      Leg_79_set.insert("C");
      Leg_79.add_attribute("Ccy", "EUR"); // 2
      Leg_79_set.insert("EUR");
      Leg_79.add_attribute("Pool", "LegPool_t_1804575099"); // 2
      Leg_79_set.insert("LegPool_t_1804575099");
      Leg_79.add_attribute("Dated", "LegDatedDate_t_810104389"); // 2
      Leg_79_set.insert("LegDatedDate_t_810104389");
      Leg_79.add_attribute("CSetMo", "963569414"); // 2
      Leg_79_set.insert("963569414");
      Leg_79.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2051567979"); // 2
      Leg_79_set.insert("LegInterestAccrualDate_t_2051567979");
      Leg_79.add_attribute("PutCall", "2018826684"); // 2
      Leg_79_set.insert("2018826684");
      Leg_79.add_attribute("LegOptionRatio", "12263122.760000"); // 2
      Leg_79_set.insert("12263122.760000");
      Leg_79.add_attribute("Px", "16293527.730000"); // 2
      Leg_79_set.insert("16293527.730000");
      all_values.push_back(Leg_79_set);
      all_compo_names.insert("Leg_79_set");

      {
        xml_element LegAID_74{"LegAID"};
        multiset<string> LegAID_74_set;
        LegAID_74.add_attribute("SecAltID", "LegSecurityAltID_t_2141878528"); // 3
        LegAID_74_set.insert("LegSecurityAltID_t_2141878528");
        LegAID_74.add_attribute("SecAltIDSrc", "I"); // 3
        LegAID_74_set.insert("I");
        all_values.push_back(LegAID_74_set);
        all_compo_names.insert("LegAID_74_set");

        Leg_79.add_element(LegAID_74);
      }
      QuoteStat_2.add_element(Leg_79);
    }
    {
      xml_element Stip_154{"Stip"};
      multiset<string> Stip_154_set;
      Stip_154.add_attribute("StipTyp", "PIECES"); // 2
      Stip_154_set.insert("PIECES");
      Stip_154.add_attribute("StipVal", "LegStipulationValue_t_105913903"); // 2
      Stip_154_set.insert("LegStipulationValue_t_105913903");
      all_values.push_back(Stip_154_set);
      all_compo_names.insert("Stip_154_set");

      QuoteStat_2.add_element(Stip_154);
    }
    {
      xml_element Pty_367{"Pty"};
      multiset<string> Pty_367_set;
      Pty_367.add_attribute("ID", "NestedPartyID_t_25006577"); // 2
      Pty_367_set.insert("NestedPartyID_t_25006577");
      Pty_367.add_attribute("Src", "9"); // 2
      Pty_367_set.insert("9");
      Pty_367.add_attribute("R", "12"); // 2
      Pty_367_set.insert("12");
      all_values.push_back(Pty_367_set);
      all_compo_names.insert("Pty_367_set");

      {
        xml_element Sub_367{"Sub"};
        multiset<string> Sub_367_set;
        Sub_367.add_attribute("ID", "NestedPartySubID_t_804844827"); // 3
        Sub_367_set.insert("NestedPartySubID_t_804844827");
        Sub_367.add_attribute("Typ", "12"); // 3
        Sub_367_set.insert("12");
        all_values.push_back(Sub_367_set);
        all_compo_names.insert("Sub_367_set");

        Pty_367.add_element(Sub_367);
      }
      QuoteStat_2.add_element(Pty_367);
    }
    elt.add_element(QuoteStat_2);
  } // end QuoteStat
  { // QuotQual
    xml_element QuotQual_8{"QuotQual"};
    multiset<string> QuotQual_8_set;
    QuotQual_8.add_attribute("Qual", "Z"); // 1
    QuotQual_8_set.insert("Z");
    all_values.push_back(QuotQual_8_set);
    all_compo_names.insert("QuotQual_8_set");

    elt.add_element(QuotQual_8);
  } // end QuotQual
  { // QuotQual
    xml_element QuotQual_9{"QuotQual"};
    multiset<string> QuotQual_9_set;
    QuotQual_9.add_attribute("Qual", "S"); // 1
    QuotQual_9_set.insert("S");
    all_values.push_back(QuotQual_9_set);
    all_compo_names.insert("QuotQual_9_set");

    elt.add_element(QuotQual_9);
  } // end QuotQual
  { // QuotQual
    xml_element QuotQual_10{"QuotQual"};
    multiset<string> QuotQual_10_set;
    QuotQual_10.add_attribute("Qual", "L"); // 1
    QuotQual_10_set.insert("L");
    all_values.push_back(QuotQual_10_set);
    all_compo_names.insert("QuotQual_10_set");

    elt.add_element(QuotQual_10);
  } // end QuotQual
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_30{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_30_set;
    SprdBnchmkCurve_30.add_attribute("Spread", "16017463.510000"); // 1
    SprdBnchmkCurve_30_set.insert("16017463.510000");
    SprdBnchmkCurve_30.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_30_set.insert("EUR");
    SprdBnchmkCurve_30.add_attribute("Name", "FutureSWAP"); // 1
    SprdBnchmkCurve_30_set.insert("FutureSWAP");
    SprdBnchmkCurve_30.add_attribute("Point", "BenchmarkCurvePoint_t_1268145810"); // 1
    SprdBnchmkCurve_30_set.insert("BenchmarkCurvePoint_t_1268145810");
    SprdBnchmkCurve_30.add_attribute("Px", "7557511.220000"); // 1
    SprdBnchmkCurve_30_set.insert("7557511.220000");
    SprdBnchmkCurve_30.add_attribute("PxTyp", "4"); // 1
    SprdBnchmkCurve_30_set.insert("4");
    SprdBnchmkCurve_30.add_attribute("SecID", "BenchmarkSecurityID_t_47450069"); // 1
    SprdBnchmkCurve_30_set.insert("BenchmarkSecurityID_t_47450069");
    SprdBnchmkCurve_30.add_attribute("SecIDSrc", "4"); // 1
    SprdBnchmkCurve_30_set.insert("4");
    all_values.push_back(SprdBnchmkCurve_30_set);
    all_compo_names.insert("SprdBnchmkCurve_30_set");

    elt.add_element(SprdBnchmkCurve_30);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_25{"Yield"};
    multiset<string> Yield_25_set;
    Yield_25.add_attribute("Typ", "INVERSEFLOATER"); // 1
    Yield_25_set.insert("INVERSEFLOATER");
    Yield_25.add_attribute("Yld", "10261523.230000"); // 1
    Yield_25_set.insert("10261523.230000");
    Yield_25.add_attribute("CalcDt", "YieldCalcDate_t_1394592121"); // 1
    Yield_25_set.insert("YieldCalcDate_t_1394592121");
    Yield_25.add_attribute("RedDt", "YieldRedemptionDate_t_726578650"); // 1
    Yield_25_set.insert("YieldRedemptionDate_t_726578650");
    Yield_25.add_attribute("RedPx", "19897217.370000"); // 1
    Yield_25_set.insert("19897217.370000");
    Yield_25.add_attribute("RedPxTyp", "16"); // 1
    Yield_25_set.insert("16");
    all_values.push_back(Yield_25_set);
    all_compo_names.insert("Yield_25_set");

    elt.add_element(Yield_25);
  } // end Yield
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
