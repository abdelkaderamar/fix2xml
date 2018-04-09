#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralRequest_message_t_0;
  elt.add_attribute("ReqID", "CollReqID_t_1308994621"); // 0
  CollateralRequest_message_t_0.insert("CollReqID_t_1308994621");
  elt.add_attribute("AsgnRsn", "4"); // 0
  CollateralRequest_message_t_0.insert("4");
  elt.add_attribute("TxnTm", "TransactTime_t_1325910990"); // 0
  CollateralRequest_message_t_0.insert("TransactTime_t_1325910990");
  elt.add_attribute("ExpireTm", "ExpireTime_t_830795195"); // 0
  CollateralRequest_message_t_0.insert("ExpireTime_t_830795195");
  elt.add_attribute("Acct", "Account_t_423276580"); // 0
  CollateralRequest_message_t_0.insert("Account_t_423276580");
  elt.add_attribute("AcctTyp", "4"); // 0
  CollateralRequest_message_t_0.insert("4");
  elt.add_attribute("ClOrdID", "ClOrdID_t_309538366"); // 0
  CollateralRequest_message_t_0.insert("ClOrdID_t_309538366");
  elt.add_attribute("OrdID", "OrderID_t_702768398"); // 0
  CollateralRequest_message_t_0.insert("OrderID_t_702768398");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1748593424"); // 0
  CollateralRequest_message_t_0.insert("SecondaryOrderID_t_1748593424");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_264143659"); // 0
  CollateralRequest_message_t_0.insert("SecondaryClOrdID_t_264143659");
  elt.add_attribute("SettlDt", "SettlDate_t_810933873"); // 0
  CollateralRequest_message_t_0.insert("SettlDate_t_810933873");
  elt.add_attribute("Qty", "704112.050000"); // 0
  CollateralRequest_message_t_0.insert("704112.050000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralRequest_message_t_0.insert("0");
  elt.add_attribute("Ccy", "CHF"); // 0
  CollateralRequest_message_t_0.insert("CHF");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1924187716"); // 0
  CollateralRequest_message_t_0.insert("MarginExcess_t_1924187716");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1922832735"); // 0
  CollateralRequest_message_t_0.insert("TotalNetValue_t_1922832735");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_565638370"); // 0
  CollateralRequest_message_t_0.insert("CashOutstanding_t_565638370");
  elt.add_attribute("Side", "9"); // 0
  CollateralRequest_message_t_0.insert("9");
  elt.add_attribute("Px", "4383443.550000"); // 0
  CollateralRequest_message_t_0.insert("4383443.550000");
  elt.add_attribute("PxTyp", "18"); // 0
  CollateralRequest_message_t_0.insert("18");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_286877217"); // 0
  CollateralRequest_message_t_0.insert("AccruedInterestAmt_t_286877217");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_2061911837"); // 0
  CollateralRequest_message_t_0.insert("EndAccruedInterestAmt_t_2061911837");
  elt.add_attribute("StartCsh", "StartCash_t_200207878"); // 0
  CollateralRequest_message_t_0.insert("StartCash_t_200207878");
  elt.add_attribute("EndCsh", "EndCash_t_999625068"); // 0
  CollateralRequest_message_t_0.insert("EndCash_t_999625068");
  elt.add_attribute("SesID", "6"); // 0
  CollateralRequest_message_t_0.insert("6");
  elt.add_attribute("SesSub", "2"); // 0
  CollateralRequest_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "RTH"); // 0
  CollateralRequest_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1488626145"); // 0
  CollateralRequest_message_t_0.insert("SettlSessSubID_t_1488626145");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_180563645"); // 0
  CollateralRequest_message_t_0.insert("ClearingBusinessDate_t_180563645");
  elt.add_attribute("Txt", "Text_t_1256900861"); // 0
  CollateralRequest_message_t_0.insert("Text_t_1256900861");
  elt.add_attribute("EncTxtLen", "650137119"); // 0
  CollateralRequest_message_t_0.insert("650137119");
  elt.add_attribute("EncTxt", "EncodedText_t_1442479298"); // 0
  CollateralRequest_message_t_0.insert("EncodedText_t_1442479298");
  all_values.push_back(CollateralRequest_message_t_0);
  all_compo_names.insert("CollateralRequest_message_t");

  { // Hdr
    xml_element Hdr_18{"Hdr"};
    multiset<string> Hdr_18_set;
    Hdr_18.add_attribute("SeqNum", "435328203"); // 1
    Hdr_18_set.insert("435328203");
    Hdr_18.add_attribute("SID", "SenderCompID_t_1480932314"); // 1
    Hdr_18_set.insert("SenderCompID_t_1480932314");
    Hdr_18.add_attribute("TID", "TargetCompID_t_1865755878"); // 1
    Hdr_18_set.insert("TargetCompID_t_1865755878");
    Hdr_18.add_attribute("OBID", "OnBehalfOfCompID_t_891093384"); // 1
    Hdr_18_set.insert("OnBehalfOfCompID_t_891093384");
    Hdr_18.add_attribute("D2ID", "DeliverToCompID_t_1790470680"); // 1
    Hdr_18_set.insert("DeliverToCompID_t_1790470680");
    Hdr_18.add_attribute("SSub", "SenderSubID_t_421040629"); // 1
    Hdr_18_set.insert("SenderSubID_t_421040629");
    Hdr_18.add_attribute("SLoc", "SenderLocationID_t_492203160"); // 1
    Hdr_18_set.insert("SenderLocationID_t_492203160");
    Hdr_18.add_attribute("TSub", "TargetSubID_t_2054614339"); // 1
    Hdr_18_set.insert("TargetSubID_t_2054614339");
    Hdr_18.add_attribute("TLoc", "TargetLocationID_t_1231974502"); // 1
    Hdr_18_set.insert("TargetLocationID_t_1231974502");
    Hdr_18.add_attribute("OBSub", "OnBehalfOfSubID_t_562614366"); // 1
    Hdr_18_set.insert("OnBehalfOfSubID_t_562614366");
    Hdr_18.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1462894943"); // 1
    Hdr_18_set.insert("OnBehalfOfLocationID_t_1462894943");
    Hdr_18.add_attribute("D2Sub", "DeliverToSubID_t_1391739788"); // 1
    Hdr_18_set.insert("DeliverToSubID_t_1391739788");
    Hdr_18.add_attribute("D2Loc", "DeliverToLocationID_t_1386334905"); // 1
    Hdr_18_set.insert("DeliverToLocationID_t_1386334905");
    Hdr_18.add_attribute("PosDup", "Y"); // 1
    Hdr_18_set.insert("Y");
    Hdr_18.add_attribute("PosRsnd", "Y"); // 1
    Hdr_18_set.insert("Y");
    Hdr_18.add_attribute("Snt", "SendingTime_t_1951973275"); // 1
    Hdr_18_set.insert("SendingTime_t_1951973275");
    Hdr_18.add_attribute("OrigSnt", "OrigSendingTime_t_1105405259"); // 1
    Hdr_18_set.insert("OrigSendingTime_t_1105405259");
    Hdr_18.add_attribute("MsgEncd", "MessageEncoding_t_1605433231"); // 1
    Hdr_18_set.insert("MessageEncoding_t_1605433231");
    all_values.push_back(Hdr_18_set);
    all_compo_names.insert("Hdr_18_set");

    {
      xml_element Hop_18{"Hop"};
      multiset<string> Hop_18_set;
      Hop_18.add_attribute("ID", "HopCompID_t_211314321"); // 2
      Hop_18_set.insert("HopCompID_t_211314321");
      Hop_18.add_attribute("Ref", "1392282476"); // 2
      Hop_18_set.insert("1392282476");
      Hop_18.add_attribute("Snt", "HopSendingTime_t_1519861420"); // 2
      Hop_18_set.insert("HopSendingTime_t_1519861420");
      all_values.push_back(Hop_18_set);
      all_compo_names.insert("Hop_18_set");

      Hdr_18.add_element(Hop_18);
    }
    elt.add_element(Hdr_18);
  } // end Hdr
  { // Pty
    xml_element Pty_78{"Pty"};
    multiset<string> Pty_78_set;
    Pty_78.add_attribute("ID", "PartyID_t_244423896"); // 1
    Pty_78_set.insert("PartyID_t_244423896");
    Pty_78.add_attribute("Src", "2"); // 1
    Pty_78_set.insert("2");
    Pty_78.add_attribute("R", "29"); // 1
    Pty_78_set.insert("29");
    all_values.push_back(Pty_78_set);
    all_compo_names.insert("Pty_78_set");

    {
      xml_element Sub_78{"Sub"};
      multiset<string> Sub_78_set;
      Sub_78.add_attribute("ID", "PartySubID_t_1320176502"); // 2
      Sub_78_set.insert("PartySubID_t_1320176502");
      Sub_78.add_attribute("Typ", "30"); // 2
      Sub_78_set.insert("30");
      all_values.push_back(Sub_78_set);
      all_compo_names.insert("Sub_78_set");

      Pty_78.add_element(Sub_78);
    }
    elt.add_element(Pty_78);
  } // end Pty
  { // Pty
    xml_element Pty_79{"Pty"};
    multiset<string> Pty_79_set;
    Pty_79.add_attribute("ID", "PartyID_t_2097006445"); // 1
    Pty_79_set.insert("PartyID_t_2097006445");
    Pty_79.add_attribute("Src", "A"); // 1
    Pty_79_set.insert("A");
    Pty_79.add_attribute("R", "37"); // 1
    Pty_79_set.insert("37");
    all_values.push_back(Pty_79_set);
    all_compo_names.insert("Pty_79_set");

    {
      xml_element Sub_79{"Sub"};
      multiset<string> Sub_79_set;
      Sub_79.add_attribute("ID", "PartySubID_t_1392002095"); // 2
      Sub_79_set.insert("PartySubID_t_1392002095");
      Sub_79.add_attribute("Typ", "12"); // 2
      Sub_79_set.insert("12");
      all_values.push_back(Sub_79_set);
      all_compo_names.insert("Sub_79_set");

      Pty_79.add_element(Sub_79);
    }
    elt.add_element(Pty_79);
  } // end Pty
  { // CollExc
    xml_element CollExc_8{"CollExc"};
    multiset<string> CollExc_8_set;
    CollExc_8.add_attribute("ExecID", "ExecID_t_1110274326"); // 1
    CollExc_8_set.insert("ExecID_t_1110274326");
    all_values.push_back(CollExc_8_set);
    all_compo_names.insert("CollExc_8_set");

    elt.add_element(CollExc_8);
  } // end CollExc
  { // CollExc
    xml_element CollExc_9{"CollExc"};
    multiset<string> CollExc_9_set;
    CollExc_9.add_attribute("ExecID", "ExecID_t_1756015302"); // 1
    CollExc_9_set.insert("ExecID_t_1756015302");
    all_values.push_back(CollExc_9_set);
    all_compo_names.insert("CollExc_9_set");

    elt.add_element(CollExc_9);
  } // end CollExc
  { // CollExc
    xml_element CollExc_10{"CollExc"};
    multiset<string> CollExc_10_set;
    CollExc_10.add_attribute("ExecID", "ExecID_t_258561159"); // 1
    CollExc_10_set.insert("ExecID_t_258561159");
    all_values.push_back(CollExc_10_set);
    all_compo_names.insert("CollExc_10_set");

    elt.add_element(CollExc_10);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_10{"TrdColl"};
    multiset<string> TrdColl_10_set;
    TrdColl_10.add_attribute("RptID", "TradeReportID_t_100734815"); // 1
    TrdColl_10_set.insert("TradeReportID_t_100734815");
    TrdColl_10.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_165691850"); // 1
    TrdColl_10_set.insert("SecondaryTradeReportID_t_165691850");
    all_values.push_back(TrdColl_10_set);
    all_compo_names.insert("TrdColl_10_set");

    elt.add_element(TrdColl_10);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_11{"TrdColl"};
    multiset<string> TrdColl_11_set;
    TrdColl_11.add_attribute("RptID", "TradeReportID_t_615805809"); // 1
    TrdColl_11_set.insert("TradeReportID_t_615805809");
    TrdColl_11.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_663349181"); // 1
    TrdColl_11_set.insert("SecondaryTradeReportID_t_663349181");
    all_values.push_back(TrdColl_11_set);
    all_compo_names.insert("TrdColl_11_set");

    elt.add_element(TrdColl_11);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_10{"Instrmt"};
    multiset<string> Instrmt_10_set;
    Instrmt_10.add_attribute("Sym", "Symbol_t_1628586793"); // 1
    Instrmt_10_set.insert("Symbol_t_1628586793");
    Instrmt_10.add_attribute("Sfx", "WI"); // 1
    Instrmt_10_set.insert("WI");
    Instrmt_10.add_attribute("ID", "SecurityID_t_2049684086"); // 1
    Instrmt_10_set.insert("SecurityID_t_2049684086");
    Instrmt_10.add_attribute("Src", "K"); // 1
    Instrmt_10_set.insert("K");
    Instrmt_10.add_attribute("Prod", "9"); // 1
    Instrmt_10_set.insert("9");
    Instrmt_10.add_attribute("ProdCmplx", "ProductComplex_t_1854173714"); // 1
    Instrmt_10_set.insert("ProductComplex_t_1854173714");
    Instrmt_10.add_attribute("SecGrp", "SecurityGroup_t_1826107415"); // 1
    Instrmt_10_set.insert("SecurityGroup_t_1826107415");
    Instrmt_10.add_attribute("CFI", "CFICode_t_485100408"); // 1
    Instrmt_10_set.insert("CFICode_t_485100408");
    Instrmt_10.add_attribute("SecTyp", "CDS"); // 1
    Instrmt_10_set.insert("CDS");
    Instrmt_10.add_attribute("SubTyp", "SecuritySubType_t_1070906243"); // 1
    Instrmt_10_set.insert("SecuritySubType_t_1070906243");
    Instrmt_10.add_attribute("MMY", "2004961828"); // 1
    Instrmt_10_set.insert("2004961828");
    Instrmt_10.add_attribute("MatDt", "MaturityDate_t_329526587"); // 1
    Instrmt_10_set.insert("MaturityDate_t_329526587");
    Instrmt_10.add_attribute("MatTm", "1315330140"); // 1
    Instrmt_10_set.insert("1315330140");
    Instrmt_10.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1148324025"); // 1
    Instrmt_10_set.insert("SettleOnOpenFlag_t_1148324025");
    Instrmt_10.add_attribute("AsgnMeth", "98485739"); // 1
    Instrmt_10_set.insert("98485739");
    Instrmt_10.add_attribute("Status", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("CpnPmt", "CouponPaymentDate_t_1780312367"); // 1
    Instrmt_10_set.insert("CouponPaymentDate_t_1780312367");
    Instrmt_10.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_10_set.insert("FR");
    Instrmt_10.add_attribute("Snrty", "SR"); // 1
    Instrmt_10_set.insert("SR");
    Instrmt_10.add_attribute("NotlPctOut", "9149541.810000"); // 1
    Instrmt_10_set.insert("9149541.810000");
    Instrmt_10.add_attribute("OrigNotlPctOut", "14400106.320000"); // 1
    Instrmt_10_set.insert("14400106.320000");
    Instrmt_10.add_attribute("AttchPnt", "17825386.270000"); // 1
    Instrmt_10_set.insert("17825386.270000");
    Instrmt_10.add_attribute("DetchPnt", "15305283.080000"); // 1
    Instrmt_10_set.insert("15305283.080000");
    Instrmt_10.add_attribute("Issued", "IssueDate_t_402801310"); // 1
    Instrmt_10_set.insert("IssueDate_t_402801310");
    Instrmt_10.add_attribute("RepoCollSecTyp", "1391070282"); // 1
    Instrmt_10_set.insert("1391070282");
    Instrmt_10.add_attribute("RepoTrm", "1789089468"); // 1
    Instrmt_10_set.insert("1789089468");
    Instrmt_10.add_attribute("RepoRt", "19341162.650000"); // 1
    Instrmt_10_set.insert("19341162.650000");
    Instrmt_10.add_attribute("Fctr", "14918050.970000"); // 1
    Instrmt_10_set.insert("14918050.970000");
    Instrmt_10.add_attribute("CrdRtg", "CreditRating_t_1954781318"); // 1
    Instrmt_10_set.insert("CreditRating_t_1954781318");
    Instrmt_10.add_attribute("Rgstry", "InstrRegistry_t_402438426"); // 1
    Instrmt_10_set.insert("InstrRegistry_t_402438426");
    Instrmt_10.add_attribute("IssuCtry", "7670630"); // 1
    Instrmt_10_set.insert("7670630");
    Instrmt_10.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1435884464"); // 1
    Instrmt_10_set.insert("StateOrProvinceOfIssue_t_1435884464");
    Instrmt_10.add_attribute("Lcl", "LocaleOfIssue_t_262500375"); // 1
    Instrmt_10_set.insert("LocaleOfIssue_t_262500375");
    Instrmt_10.add_attribute("Redeem", "RedemptionDate_t_2057354716"); // 1
    Instrmt_10_set.insert("RedemptionDate_t_2057354716");
    Instrmt_10.add_attribute("StrkPx", "91029.720000"); // 1
    Instrmt_10_set.insert("91029.720000");
    Instrmt_10.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_10_set.insert("JPY");
    Instrmt_10.add_attribute("StrkMult", "18352103.880000"); // 1
    Instrmt_10_set.insert("18352103.880000");
    Instrmt_10.add_attribute("StrkValu", "17747516.080000"); // 1
    Instrmt_10_set.insert("17747516.080000");
    Instrmt_10.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_10_set.insert("3");
    Instrmt_10.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_10_set.insert("4");
    Instrmt_10.add_attribute("StrkPxBndryPrcsn", "16322297.880000"); // 1
    Instrmt_10_set.insert("16322297.880000");
    Instrmt_10.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("OptAt", "2073963123"); // 1
    Instrmt_10_set.insert("2073963123");
    Instrmt_10.add_attribute("Mult", "6330701.650000"); // 1
    Instrmt_10_set.insert("6330701.650000");
    Instrmt_10.add_attribute("MultTyp", "0"); // 1
    Instrmt_10_set.insert("0");
    Instrmt_10.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_10_set.insert("4");
    Instrmt_10.add_attribute("MinPxIncr", "2658988.850000"); // 1
    Instrmt_10_set.insert("2658988.850000");
    Instrmt_10.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_10586384"); // 1
    Instrmt_10_set.insert("MinPriceIncrementAmount_t_10586384");
    Instrmt_10.add_attribute("UOM", "MWh"); // 1
    Instrmt_10_set.insert("MWh");
    Instrmt_10.add_attribute("UOMQty", "11808530.660000"); // 1
    Instrmt_10_set.insert("11808530.660000");
    Instrmt_10.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_10_set.insert("Bu");
    Instrmt_10.add_attribute("PxUOMQty", "9671741.580000"); // 1
    Instrmt_10_set.insert("9671741.580000");
    Instrmt_10.add_attribute("SettlMeth", "C"); // 1
    Instrmt_10_set.insert("C");
    Instrmt_10.add_attribute("ExerStyle", "0"); // 1
    Instrmt_10_set.insert("0");
    Instrmt_10.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("OptPayAmt", "OptPayoutAmount_t_205503546"); // 1
    Instrmt_10_set.insert("OptPayoutAmount_t_205503546");
    Instrmt_10.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_10_set.insert("PCTPAR");
    Instrmt_10.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_10_set.insert("CDSD");
    Instrmt_10.add_attribute("ListMeth", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("CapPx", "20424693.690000"); // 1
    Instrmt_10_set.insert("20424693.690000");
    Instrmt_10.add_attribute("FlrPx", "17102365.190000"); // 1
    Instrmt_10_set.insert("17102365.190000");
    Instrmt_10.add_attribute("PutCall", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("FlexInd", "false"); // 1
    Instrmt_10_set.insert("false");
    Instrmt_10.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_10_set.insert("false");
    Instrmt_10.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_10_set.insert("Yr");
    Instrmt_10.add_attribute("CpnRt", "14471372.970000"); // 1
    Instrmt_10_set.insert("14471372.970000");
    Instrmt_10.add_attribute("Exch", "SecurityExchange_t_1236668722"); // 1
    Instrmt_10_set.insert("SecurityExchange_t_1236668722");
    Instrmt_10.add_attribute("PosLmt", "1145515393"); // 1
    Instrmt_10_set.insert("1145515393");
    Instrmt_10.add_attribute("NTPosLmt", "1074405258"); // 1
    Instrmt_10_set.insert("1074405258");
    Instrmt_10.add_attribute("Issr", "Issuer_t_771234244"); // 1
    Instrmt_10_set.insert("Issuer_t_771234244");
    Instrmt_10.add_attribute("EncIssrLen", "1904148377"); // 1
    Instrmt_10_set.insert("1904148377");
    Instrmt_10.add_attribute("EncIssr", "EncodedIssuer_t_559151398"); // 1
    Instrmt_10_set.insert("EncodedIssuer_t_559151398");
    Instrmt_10.add_attribute("Desc", "SecurityDesc_t_635326353"); // 1
    Instrmt_10_set.insert("SecurityDesc_t_635326353");
    Instrmt_10.add_attribute("EncSecDescLen", "1830627852"); // 1
    Instrmt_10_set.insert("1830627852");
    Instrmt_10.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1192221564"); // 1
    Instrmt_10_set.insert("EncodedSecurityDesc_t_1192221564");
    Instrmt_10.add_attribute("Pool", "Pool_t_597904201"); // 1
    Instrmt_10_set.insert("Pool_t_597904201");
    Instrmt_10.add_attribute("CSetMo", "97646674"); // 1
    Instrmt_10_set.insert("97646674");
    Instrmt_10.add_attribute("CPPgm", "99"); // 1
    Instrmt_10_set.insert("99");
    Instrmt_10.add_attribute("CPRegT", "CPRegType_t_608490585"); // 1
    Instrmt_10_set.insert("CPRegType_t_608490585");
    Instrmt_10.add_attribute("Dated", "DatedDate_t_1429765852"); // 1
    Instrmt_10_set.insert("DatedDate_t_1429765852");
    Instrmt_10.add_attribute("IntAcrl", "InterestAccrualDate_t_491489867"); // 1
    Instrmt_10_set.insert("InterestAccrualDate_t_491489867");
    all_values.push_back(Instrmt_10_set);
    all_compo_names.insert("Instrmt_10_set");

    {
      xml_element AID_10{"AID"};
      multiset<string> AID_10_set;
      AID_10.add_attribute("AltID", "SecurityAltID_t_2059087602"); // 2
      AID_10_set.insert("SecurityAltID_t_2059087602");
      AID_10.add_attribute("AltIDSrc", "D"); // 2
      AID_10_set.insert("D");
      all_values.push_back(AID_10_set);
      all_compo_names.insert("AID_10_set");

      Instrmt_10.add_element(AID_10);
    }
    {
      xml_element SecXML_10{"SecXML"};
      multiset<string> SecXML_10_set;
      SecXML_10.add_attribute("Schema", "SecurityXMLSchema_t_1055387593"); // 2
      SecXML_10_set.insert("SecurityXMLSchema_t_1055387593");
      all_values.push_back(SecXML_10_set);
      all_compo_names.insert("SecXML_10_set");

      Instrmt_10.add_element(SecXML_10);
    }
    {
      xml_element Evnt_10{"Evnt"};
      multiset<string> Evnt_10_set;
      Evnt_10.add_attribute("EventTyp", "1"); // 2
      Evnt_10_set.insert("1");
      Evnt_10.add_attribute("Dt", "EventDate_t_460217154"); // 2
      Evnt_10_set.insert("EventDate_t_460217154");
      Evnt_10.add_attribute("Tm", "EventTime_t_1260891140"); // 2
      Evnt_10_set.insert("EventTime_t_1260891140");
      Evnt_10.add_attribute("Px", "12575495.760000"); // 2
      Evnt_10_set.insert("12575495.760000");
      Evnt_10.add_attribute("Txt", "EventText_t_15299395"); // 2
      Evnt_10_set.insert("EventText_t_15299395");
      all_values.push_back(Evnt_10_set);
      all_compo_names.insert("Evnt_10_set");

      Instrmt_10.add_element(Evnt_10);
    }
    {
      xml_element Pty_80{"Pty"};
      multiset<string> Pty_80_set;
      Pty_80.add_attribute("ID", "InstrumentPartyID_t_1273692357"); // 2
      Pty_80_set.insert("InstrumentPartyID_t_1273692357");
      Pty_80.add_attribute("Src", "E"); // 2
      Pty_80_set.insert("E");
      Pty_80.add_attribute("R", "27"); // 2
      Pty_80_set.insert("27");
      all_values.push_back(Pty_80_set);
      all_compo_names.insert("Pty_80_set");

      {
        xml_element Sub_80{"Sub"};
        multiset<string> Sub_80_set;
        Sub_80.add_attribute("ID", "InstrumentPartySubID_t_574894390"); // 3
        Sub_80_set.insert("InstrumentPartySubID_t_574894390");
        Sub_80.add_attribute("Typ", "1"); // 3
        Sub_80_set.insert("1");
        all_values.push_back(Sub_80_set);
        all_compo_names.insert("Sub_80_set");

        Pty_80.add_element(Sub_80);
      }
      Instrmt_10.add_element(Pty_80);
    }
    {
      xml_element CmplxEvnt_10{"CmplxEvnt"};
      multiset<string> CmplxEvnt_10_set;
      CmplxEvnt_10.add_attribute("Typ", "7"); // 2
      CmplxEvnt_10_set.insert("7");
      CmplxEvnt_10.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2032683043"); // 2
      CmplxEvnt_10_set.insert("ComplexOptPayoutAmount_t_2032683043");
      CmplxEvnt_10.add_attribute("Px", "6096750.440000"); // 2
      CmplxEvnt_10_set.insert("6096750.440000");
      CmplxEvnt_10.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_10_set.insert("4");
      CmplxEvnt_10.add_attribute("PxBndryPrcsn", "10307147.890000"); // 2
      CmplxEvnt_10_set.insert("10307147.890000");
      CmplxEvnt_10.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_10_set.insert("3");
      CmplxEvnt_10.add_attribute("Cond", "1"); // 2
      CmplxEvnt_10_set.insert("1");
      all_values.push_back(CmplxEvnt_10_set);
      all_compo_names.insert("CmplxEvnt_10_set");

      {
        xml_element EvntDts_10{"EvntDts"};
        multiset<string> EvntDts_10_set;
        EvntDts_10.add_attribute("StartDt", "ComplexEventStartDate_t_787379518"); // 3
        EvntDts_10_set.insert("ComplexEventStartDate_t_787379518");
        EvntDts_10.add_attribute("EndDt", "ComplexEventEndDate_t_95748052"); // 3
        EvntDts_10_set.insert("ComplexEventEndDate_t_95748052");
        all_values.push_back(EvntDts_10_set);
        all_compo_names.insert("EvntDts_10_set");

        {
          xml_element EvntTms_10{"EvntTms"};
          multiset<string> EvntTms_10_set;
          EvntTms_10.add_attribute("StartTm", "1693905525"); // 4
          EvntTms_10_set.insert("1693905525");
          EvntTms_10.add_attribute("EndTm", "470523722"); // 4
          EvntTms_10_set.insert("470523722");
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
    xml_element FinDetls_7{"FinDetls"};
    multiset<string> FinDetls_7_set;
    FinDetls_7.add_attribute("AgmtDesc", "AgreementDesc_t_1287969616"); // 1
    FinDetls_7_set.insert("AgreementDesc_t_1287969616");
    FinDetls_7.add_attribute("AgmtID", "AgreementID_t_144326078"); // 1
    FinDetls_7_set.insert("AgreementID_t_144326078");
    FinDetls_7.add_attribute("AgmtDt", "AgreementDate_t_568170396"); // 1
    FinDetls_7_set.insert("AgreementDate_t_568170396");
    FinDetls_7.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_7_set.insert("CAN");
    FinDetls_7.add_attribute("TrmTyp", "2"); // 1
    FinDetls_7_set.insert("2");
    FinDetls_7.add_attribute("StartDt", "StartDate_t_1090096284"); // 1
    FinDetls_7_set.insert("StartDate_t_1090096284");
    FinDetls_7.add_attribute("EndDt", "EndDate_t_664420617"); // 1
    FinDetls_7_set.insert("EndDate_t_664420617");
    FinDetls_7.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_7_set.insert("3");
    FinDetls_7.add_attribute("MgnRatio", "21454838.780000"); // 1
    FinDetls_7_set.insert("21454838.780000");
    all_values.push_back(FinDetls_7_set);
    all_compo_names.insert("FinDetls_7_set");

    elt.add_element(FinDetls_7);
  } // end FinDetls
  { // Leg
    xml_element Leg_17{"Leg"};
    multiset<string> Leg_17_set;
    Leg_17.add_attribute("Sym", "LegSymbol_t_560126118"); // 1
    Leg_17_set.insert("LegSymbol_t_560126118");
    Leg_17.add_attribute("Sfx", "CD"); // 1
    Leg_17_set.insert("CD");
    Leg_17.add_attribute("ID", "LegSecurityID_t_1539488826"); // 1
    Leg_17_set.insert("LegSecurityID_t_1539488826");
    Leg_17.add_attribute("Src", "4"); // 1
    Leg_17_set.insert("4");
    Leg_17.add_attribute("Prod", "1"); // 1
    Leg_17_set.insert("1");
    Leg_17.add_attribute("CFI", "LegCFICode_t_544540475"); // 1
    Leg_17_set.insert("LegCFICode_t_544540475");
    Leg_17.add_attribute("SecTyp", "CPP"); // 1
    Leg_17_set.insert("CPP");
    Leg_17.add_attribute("SecSubTyp", "LegSecuritySubType_t_959994469"); // 1
    Leg_17_set.insert("LegSecuritySubType_t_959994469");
    Leg_17.add_attribute("MMY", "1854561870"); // 1
    Leg_17_set.insert("1854561870");
    Leg_17.add_attribute("Mat", "LegMaturityDate_t_1351637634"); // 1
    Leg_17_set.insert("LegMaturityDate_t_1351637634");
    Leg_17.add_attribute("MatTm", "845193864"); // 1
    Leg_17_set.insert("845193864");
    Leg_17.add_attribute("CpnPmt", "LegCouponPaymentDate_t_316753266"); // 1
    Leg_17_set.insert("LegCouponPaymentDate_t_316753266");
    Leg_17.add_attribute("Issued", "LegIssueDate_t_1638982562"); // 1
    Leg_17_set.insert("LegIssueDate_t_1638982562");
    Leg_17.add_attribute("RepoCollSecTyp", "1875908653"); // 1
    Leg_17_set.insert("1875908653");
    Leg_17.add_attribute("RepoTrm", "2000833568"); // 1
    Leg_17_set.insert("2000833568");
    Leg_17.add_attribute("RepoRt", "5500780.860000"); // 1
    Leg_17_set.insert("5500780.860000");
    Leg_17.add_attribute("Fctr", "5158045.230000"); // 1
    Leg_17_set.insert("5158045.230000");
    Leg_17.add_attribute("CrdRtg", "LegCreditRating_t_2096581620"); // 1
    Leg_17_set.insert("LegCreditRating_t_2096581620");
    Leg_17.add_attribute("Rgstry", "LegInstrRegistry_t_96499963"); // 1
    Leg_17_set.insert("LegInstrRegistry_t_96499963");
    Leg_17.add_attribute("Ctry", "986328246"); // 1
    Leg_17_set.insert("986328246");
    Leg_17.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1237067589"); // 1
    Leg_17_set.insert("LegStateOrProvinceOfIssue_t_1237067589");
    Leg_17.add_attribute("Lcl", "LegLocaleOfIssue_t_240826041"); // 1
    Leg_17_set.insert("LegLocaleOfIssue_t_240826041");
    Leg_17.add_attribute("Redeem", "LegRedemptionDate_t_1554498642"); // 1
    Leg_17_set.insert("LegRedemptionDate_t_1554498642");
    Leg_17.add_attribute("Strk", "18356740.060000"); // 1
    Leg_17_set.insert("18356740.060000");
    Leg_17.add_attribute("StrkCcy", "CHF"); // 1
    Leg_17_set.insert("CHF");
    Leg_17.add_attribute("OptA", "778286643"); // 1
    Leg_17_set.insert("778286643");
    Leg_17.add_attribute("Cmult", "16580633.220000"); // 1
    Leg_17_set.insert("16580633.220000");
    Leg_17.add_attribute("MultTyp", "0"); // 1
    Leg_17_set.insert("0");
    Leg_17.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_17_set.insert("3");
    Leg_17.add_attribute("UOM", "MMBtu"); // 1
    Leg_17_set.insert("MMBtu");
    Leg_17.add_attribute("UOMQty", "20649863.250000"); // 1
    Leg_17_set.insert("20649863.250000");
    Leg_17.add_attribute("PxUOM", "lbs"); // 1
    Leg_17_set.insert("lbs");
    Leg_17.add_attribute("PxUOMQty", "13320077.500000"); // 1
    Leg_17_set.insert("13320077.500000");
    Leg_17.add_attribute("TmUnit", "Yr"); // 1
    Leg_17_set.insert("Yr");
    Leg_17.add_attribute("ExerStyle", "0"); // 1
    Leg_17_set.insert("0");
    Leg_17.add_attribute("CpnRt", "18765482.250000"); // 1
    Leg_17_set.insert("18765482.250000");
    Leg_17.add_attribute("Exch", "LegSecurityExchange_t_646405970"); // 1
    Leg_17_set.insert("LegSecurityExchange_t_646405970");
    Leg_17.add_attribute("Issr", "LegIssuer_t_1232789143"); // 1
    Leg_17_set.insert("LegIssuer_t_1232789143");
    Leg_17.add_attribute("EncLegIssrLen", "1583626447"); // 1
    Leg_17_set.insert("1583626447");
    Leg_17.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1998043604"); // 1
    Leg_17_set.insert("EncodedLegIssuer_t_1998043604");
    Leg_17.add_attribute("Desc", "LegSecurityDesc_t_2077983007"); // 1
    Leg_17_set.insert("LegSecurityDesc_t_2077983007");
    Leg_17.add_attribute("EncLegSecDescLen", "1900379713"); // 1
    Leg_17_set.insert("1900379713");
    Leg_17.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1489542518"); // 1
    Leg_17_set.insert("EncodedLegSecurityDesc_t_1489542518");
    Leg_17.add_attribute("RatioQty", "18064080.130000"); // 1
    Leg_17_set.insert("18064080.130000");
    Leg_17.add_attribute("Side", "2"); // 1
    Leg_17_set.insert("2");
    Leg_17.add_attribute("Ccy", "GBP"); // 1
    Leg_17_set.insert("GBP");
    Leg_17.add_attribute("Pool", "LegPool_t_1702827606"); // 1
    Leg_17_set.insert("LegPool_t_1702827606");
    Leg_17.add_attribute("Dated", "LegDatedDate_t_2136120567"); // 1
    Leg_17_set.insert("LegDatedDate_t_2136120567");
    Leg_17.add_attribute("CSetMo", "1161057134"); // 1
    Leg_17_set.insert("1161057134");
    Leg_17.add_attribute("IntAcrl", "LegInterestAccrualDate_t_792411547"); // 1
    Leg_17_set.insert("LegInterestAccrualDate_t_792411547");
    Leg_17.add_attribute("PutCall", "229462960"); // 1
    Leg_17_set.insert("229462960");
    Leg_17.add_attribute("LegOptionRatio", "5680721.290000"); // 1
    Leg_17_set.insert("5680721.290000");
    Leg_17.add_attribute("Px", "4806019.050000"); // 1
    Leg_17_set.insert("4806019.050000");
    all_values.push_back(Leg_17_set);
    all_compo_names.insert("Leg_17_set");

    {
      xml_element LegAID_17{"LegAID"};
      multiset<string> LegAID_17_set;
      LegAID_17.add_attribute("SecAltID", "LegSecurityAltID_t_1223105665"); // 2
      LegAID_17_set.insert("LegSecurityAltID_t_1223105665");
      LegAID_17.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_17_set.insert("D");
      all_values.push_back(LegAID_17_set);
      all_compo_names.insert("LegAID_17_set");

      Leg_17.add_element(LegAID_17);
    }
    elt.add_element(Leg_17);
  } // end Leg
  { // UndColl
    xml_element UndColl_2{"UndColl"};
    multiset<string> UndColl_2_set;
    UndColl_2.add_attribute("Actn", "2"); // 1
    UndColl_2_set.insert("2");
    all_values.push_back(UndColl_2_set);
    all_compo_names.insert("UndColl_2_set");

    {
      xml_element Undly_14{"Undly"};
      multiset<string> Undly_14_set;
      Undly_14.add_attribute("Sym", "UnderlyingSymbol_t_1330399931"); // 2
      Undly_14_set.insert("UnderlyingSymbol_t_1330399931");
      Undly_14.add_attribute("Sfx", "WI"); // 2
      Undly_14_set.insert("WI");
      Undly_14.add_attribute("ID", "UnderlyingSecurityID_t_526204263"); // 2
      Undly_14_set.insert("UnderlyingSecurityID_t_526204263");
      Undly_14.add_attribute("Src", "J"); // 2
      Undly_14_set.insert("J");
      Undly_14.add_attribute("Prod", "11"); // 2
      Undly_14_set.insert("11");
      Undly_14.add_attribute("CFI", "UnderlyingCFICode_t_1858212013"); // 2
      Undly_14_set.insert("UnderlyingCFICode_t_1858212013");
      Undly_14.add_attribute("SecTyp", "MPT"); // 2
      Undly_14_set.insert("MPT");
      Undly_14.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_48181042"); // 2
      Undly_14_set.insert("UnderlyingSecuritySubType_t_48181042");
      Undly_14.add_attribute("MMY", "1587276590"); // 2
      Undly_14_set.insert("1587276590");
      Undly_14.add_attribute("Mat", "UnderlyingMaturityDate_t_239753121"); // 2
      Undly_14_set.insert("UnderlyingMaturityDate_t_239753121");
      Undly_14.add_attribute("MatTm", "1280970185"); // 2
      Undly_14_set.insert("1280970185");
      Undly_14.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1023419390"); // 2
      Undly_14_set.insert("UnderlyingCouponPaymentDate_t_1023419390");
      Undly_14.add_attribute("RestrctTyp", "MM"); // 2
      Undly_14_set.insert("MM");
      Undly_14.add_attribute("Snrty", "SB"); // 2
      Undly_14_set.insert("SB");
      Undly_14.add_attribute("NotlPctOut", "7763154.550000"); // 2
      Undly_14_set.insert("7763154.550000");
      Undly_14.add_attribute("OrigNotlPctOut", "15798555.960000"); // 2
      Undly_14_set.insert("15798555.960000");
      Undly_14.add_attribute("AttchPnt", "8703939.100000"); // 2
      Undly_14_set.insert("8703939.100000");
      Undly_14.add_attribute("DetchPnt", "3825614.410000"); // 2
      Undly_14_set.insert("3825614.410000");
      Undly_14.add_attribute("Issued", "UnderlyingIssueDate_t_1471992553"); // 2
      Undly_14_set.insert("UnderlyingIssueDate_t_1471992553");
      Undly_14.add_attribute("RepoCollSecTyp", "1045122798"); // 2
      Undly_14_set.insert("1045122798");
      Undly_14.add_attribute("RepoTrm", "2085389047"); // 2
      Undly_14_set.insert("2085389047");
      Undly_14.add_attribute("RepoRt", "14606294.720000"); // 2
      Undly_14_set.insert("14606294.720000");
      Undly_14.add_attribute("Fctr", "586962.850000"); // 2
      Undly_14_set.insert("586962.850000");
      Undly_14.add_attribute("CrdRtg", "UnderlyingCreditRating_t_730316946"); // 2
      Undly_14_set.insert("UnderlyingCreditRating_t_730316946");
      Undly_14.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1690092433"); // 2
      Undly_14_set.insert("UnderlyingInstrRegistry_t_1690092433");
      Undly_14.add_attribute("Ctry", "626768414"); // 2
      Undly_14_set.insert("626768414");
      Undly_14.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1210918851"); // 2
      Undly_14_set.insert("UnderlyingStateOrProvinceOfIssue_t_1210918851");
      Undly_14.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_765714450"); // 2
      Undly_14_set.insert("UnderlyingLocaleOfIssue_t_765714450");
      Undly_14.add_attribute("Redeem", "UnderlyingRedemptionDate_t_452308138"); // 2
      Undly_14_set.insert("UnderlyingRedemptionDate_t_452308138");
      Undly_14.add_attribute("StrkPx", "3223237.520000"); // 2
      Undly_14_set.insert("3223237.520000");
      Undly_14.add_attribute("StrkCcy", "JPY"); // 2
      Undly_14_set.insert("JPY");
      Undly_14.add_attribute("OptA", "210015525"); // 2
      Undly_14_set.insert("210015525");
      Undly_14.add_attribute("Mult", "20256040.520000"); // 2
      Undly_14_set.insert("20256040.520000");
      Undly_14.add_attribute("MultTyp", "2"); // 2
      Undly_14_set.insert("2");
      Undly_14.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_14_set.insert("2");
      Undly_14.add_attribute("UOM", "MMBtu"); // 2
      Undly_14_set.insert("MMBtu");
      Undly_14.add_attribute("UOMQty", "4764741.810000"); // 2
      Undly_14_set.insert("4764741.810000");
      Undly_14.add_attribute("PxUOM", "Bcf"); // 2
      Undly_14_set.insert("Bcf");
      Undly_14.add_attribute("PxUOMQty", "11761253.590000"); // 2
      Undly_14_set.insert("11761253.590000");
      Undly_14.add_attribute("TmUnit", "Min"); // 2
      Undly_14_set.insert("Min");
      Undly_14.add_attribute("ExerStyle", "0"); // 2
      Undly_14_set.insert("0");
      Undly_14.add_attribute("CpnRt", "520611.010000"); // 2
      Undly_14_set.insert("520611.010000");
      Undly_14.add_attribute("Exch", "UnderlyingSecurityExchange_t_806540381"); // 2
      Undly_14_set.insert("UnderlyingSecurityExchange_t_806540381");
      Undly_14.add_attribute("Issr", "UnderlyingIssuer_t_378539019"); // 2
      Undly_14_set.insert("UnderlyingIssuer_t_378539019");
      Undly_14.add_attribute("EncUndIssrLen", "828376557"); // 2
      Undly_14_set.insert("828376557");
      Undly_14.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_238912329"); // 2
      Undly_14_set.insert("EncodedUnderlyingIssuer_t_238912329");
      Undly_14.add_attribute("Desc", "UnderlyingSecurityDesc_t_1248932929"); // 2
      Undly_14_set.insert("UnderlyingSecurityDesc_t_1248932929");
      Undly_14.add_attribute("EncUndSecDescLen", "1210937998"); // 2
      Undly_14_set.insert("1210937998");
      Undly_14.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1710904882"); // 2
      Undly_14_set.insert("EncodedUnderlyingSecurityDesc_t_1710904882");
      Undly_14.add_attribute("CPPgm", "UnderlyingCPProgram_t_146572079"); // 2
      Undly_14_set.insert("UnderlyingCPProgram_t_146572079");
      Undly_14.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1148843397"); // 2
      Undly_14_set.insert("UnderlyingCPRegType_t_1148843397");
      Undly_14.add_attribute("AllocPct", "10240507.070000"); // 2
      Undly_14_set.insert("10240507.070000");
      Undly_14.add_attribute("Ccy", "CHF"); // 2
      Undly_14_set.insert("CHF");
      Undly_14.add_attribute("Qty", "5666594.920000"); // 2
      Undly_14_set.insert("5666594.920000");
      Undly_14.add_attribute("SettlTyp", "5"); // 2
      Undly_14_set.insert("5");
      Undly_14.add_attribute("CashAmt", "UnderlyingCashAmount_t_942595546"); // 2
      Undly_14_set.insert("UnderlyingCashAmount_t_942595546");
      Undly_14.add_attribute("CashTyp", "FIXED"); // 2
      Undly_14_set.insert("FIXED");
      Undly_14.add_attribute("Px", "12843449.170000"); // 2
      Undly_14_set.insert("12843449.170000");
      Undly_14.add_attribute("DirtPx", "12649192.980000"); // 2
      Undly_14_set.insert("12649192.980000");
      Undly_14.add_attribute("EndPx", "6842900.830000"); // 2
      Undly_14_set.insert("6842900.830000");
      Undly_14.add_attribute("StartVal", "UnderlyingStartValue_t_919569339"); // 2
      Undly_14_set.insert("UnderlyingStartValue_t_919569339");
      Undly_14.add_attribute("CurVal", "UnderlyingCurrentValue_t_1474934824"); // 2
      Undly_14_set.insert("UnderlyingCurrentValue_t_1474934824");
      Undly_14.add_attribute("EndVal", "UnderlyingEndValue_t_562410487"); // 2
      Undly_14_set.insert("UnderlyingEndValue_t_562410487");
      Undly_14.add_attribute("AdjQty", "18026963.690000"); // 2
      Undly_14_set.insert("18026963.690000");
      Undly_14.add_attribute("FxRate", "14603367.180000"); // 2
      Undly_14_set.insert("14603367.180000");
      Undly_14.add_attribute("FxRateCalc", "M"); // 2
      Undly_14_set.insert("M");
      Undly_14.add_attribute("CapValu", "UnderlyingCapValue_t_131686903"); // 2
      Undly_14_set.insert("UnderlyingCapValue_t_131686903");
      Undly_14.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1493919654"); // 2
      Undly_14_set.insert("UnderlyingSettlMethod_t_1493919654");
      Undly_14.add_attribute("PutCall", "1327384615"); // 2
      Undly_14_set.insert("1327384615");
      all_values.push_back(Undly_14_set);
      all_compo_names.insert("Undly_14_set");

      {
        xml_element UndAID_14{"UndAID"};
        multiset<string> UndAID_14_set;
        UndAID_14.add_attribute("AltID", "UnderlyingSecurityAltID_t_847914206"); // 3
        UndAID_14_set.insert("UnderlyingSecurityAltID_t_847914206");
        UndAID_14.add_attribute("AltIDSrc", "9"); // 3
        UndAID_14_set.insert("9");
        all_values.push_back(UndAID_14_set);
        all_compo_names.insert("UndAID_14_set");

        Undly_14.add_element(UndAID_14);
      }
      {
        xml_element Stip_29{"Stip"};
        multiset<string> Stip_29_set;
        Stip_29.add_attribute("Typ", "PRICEFREQ"); // 3
        Stip_29_set.insert("PRICEFREQ");
        Stip_29.add_attribute("Val", "UnderlyingStipValue_t_1654454587"); // 3
        Stip_29_set.insert("UnderlyingStipValue_t_1654454587");
        all_values.push_back(Stip_29_set);
        all_compo_names.insert("Stip_29_set");

        Undly_14.add_element(Stip_29);
      }
      {
        xml_element Pty_81{"Pty"};
        multiset<string> Pty_81_set;
        Pty_81.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1039528147"); // 3
        Pty_81_set.insert("UnderlyingInstrumentPartyID_t_1039528147");
        Pty_81.add_attribute("Src", "H"); // 3
        Pty_81_set.insert("H");
        Pty_81.add_attribute("R", "36"); // 3
        Pty_81_set.insert("36");
        all_values.push_back(Pty_81_set);
        all_compo_names.insert("Pty_81_set");

        {
          xml_element Sub_81{"Sub"};
          multiset<string> Sub_81_set;
          Sub_81.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_140977428"); // 4
          Sub_81_set.insert("UnderlyingInstrumentPartySubID_t_140977428");
          Sub_81.add_attribute("Typ", "11"); // 4
          Sub_81_set.insert("11");
          all_values.push_back(Sub_81_set);
          all_compo_names.insert("Sub_81_set");

          Pty_81.add_element(Sub_81);
        }
        Undly_14.add_element(Pty_81);
      }
      UndColl_2.add_element(Undly_14);
    }
    elt.add_element(UndColl_2);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_5{"TrdRegTS"};
    multiset<string> TrdRegTS_5_set;
    TrdRegTS_5.add_attribute("TS", "TrdRegTimestamp_t_287549508"); // 1
    TrdRegTS_5_set.insert("TrdRegTimestamp_t_287549508");
    TrdRegTS_5.add_attribute("Typ", "3"); // 1
    TrdRegTS_5_set.insert("3");
    TrdRegTS_5.add_attribute("Src", "TrdRegTimestampOrigin_t_333355210"); // 1
    TrdRegTS_5_set.insert("TrdRegTimestampOrigin_t_333355210");
    TrdRegTS_5.add_attribute("DskTyp", "PT"); // 1
    TrdRegTS_5_set.insert("PT");
    TrdRegTS_5.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_5_set.insert("1");
    TrdRegTS_5.add_attribute("DskOrdHndlInst", "MQT"); // 1
    TrdRegTS_5_set.insert("MQT");
    all_values.push_back(TrdRegTS_5_set);
    all_compo_names.insert("TrdRegTS_5_set");

    elt.add_element(TrdRegTS_5);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_6{"TrdRegTS"};
    multiset<string> TrdRegTS_6_set;
    TrdRegTS_6.add_attribute("TS", "TrdRegTimestamp_t_1324854651"); // 1
    TrdRegTS_6_set.insert("TrdRegTimestamp_t_1324854651");
    TrdRegTS_6.add_attribute("Typ", "2"); // 1
    TrdRegTS_6_set.insert("2");
    TrdRegTS_6.add_attribute("Src", "TrdRegTimestampOrigin_t_84904996"); // 1
    TrdRegTS_6_set.insert("TrdRegTimestampOrigin_t_84904996");
    TrdRegTS_6.add_attribute("DskTyp", "PF"); // 1
    TrdRegTS_6_set.insert("PF");
    TrdRegTS_6.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_6_set.insert("1");
    TrdRegTS_6.add_attribute("DskOrdHndlInst", "WRK"); // 1
    TrdRegTS_6_set.insert("WRK");
    all_values.push_back(TrdRegTS_6_set);
    all_compo_names.insert("TrdRegTS_6_set");

    elt.add_element(TrdRegTS_6);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_7{"MiscFees"};
    multiset<string> MiscFees_7_set;
    MiscFees_7.add_attribute("Amt", "MiscFeeAmt_t_1539279089"); // 1
    MiscFees_7_set.insert("MiscFeeAmt_t_1539279089");
    MiscFees_7.add_attribute("Curr", "GBP"); // 1
    MiscFees_7_set.insert("GBP");
    MiscFees_7.add_attribute("Typ", "9"); // 1
    MiscFees_7_set.insert("9");
    MiscFees_7.add_attribute("Basis", "0"); // 1
    MiscFees_7_set.insert("0");
    all_values.push_back(MiscFees_7_set);
    all_compo_names.insert("MiscFees_7_set");

    elt.add_element(MiscFees_7);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_8{"MiscFees"};
    multiset<string> MiscFees_8_set;
    MiscFees_8.add_attribute("Amt", "MiscFeeAmt_t_1168184883"); // 1
    MiscFees_8_set.insert("MiscFeeAmt_t_1168184883");
    MiscFees_8.add_attribute("Curr", "CAN"); // 1
    MiscFees_8_set.insert("CAN");
    MiscFees_8.add_attribute("Typ", "9"); // 1
    MiscFees_8_set.insert("9");
    MiscFees_8.add_attribute("Basis", "0"); // 1
    MiscFees_8_set.insert("0");
    all_values.push_back(MiscFees_8_set);
    all_compo_names.insert("MiscFees_8_set");

    elt.add_element(MiscFees_8);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_9{"MiscFees"};
    multiset<string> MiscFees_9_set;
    MiscFees_9.add_attribute("Amt", "MiscFeeAmt_t_2042211506"); // 1
    MiscFees_9_set.insert("MiscFeeAmt_t_2042211506");
    MiscFees_9.add_attribute("Curr", "EUR"); // 1
    MiscFees_9_set.insert("EUR");
    MiscFees_9.add_attribute("Typ", "2"); // 1
    MiscFees_9_set.insert("2");
    MiscFees_9.add_attribute("Basis", "1"); // 1
    MiscFees_9_set.insert("1");
    all_values.push_back(MiscFees_9_set);
    all_compo_names.insert("MiscFees_9_set");

    elt.add_element(MiscFees_9);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_6{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_6_set;
    SprdBnchmkCurve_6.add_attribute("Spread", "20400628.700000"); // 1
    SprdBnchmkCurve_6_set.insert("20400628.700000");
    SprdBnchmkCurve_6.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_6_set.insert("USD");
    SprdBnchmkCurve_6.add_attribute("Name", "MuniAAA"); // 1
    SprdBnchmkCurve_6_set.insert("MuniAAA");
    SprdBnchmkCurve_6.add_attribute("Point", "BenchmarkCurvePoint_t_1498979481"); // 1
    SprdBnchmkCurve_6_set.insert("BenchmarkCurvePoint_t_1498979481");
    SprdBnchmkCurve_6.add_attribute("Px", "9116130.100000"); // 1
    SprdBnchmkCurve_6_set.insert("9116130.100000");
    SprdBnchmkCurve_6.add_attribute("PxTyp", "5"); // 1
    SprdBnchmkCurve_6_set.insert("5");
    SprdBnchmkCurve_6.add_attribute("SecID", "BenchmarkSecurityID_t_1503292549"); // 1
    SprdBnchmkCurve_6_set.insert("BenchmarkSecurityID_t_1503292549");
    SprdBnchmkCurve_6.add_attribute("SecIDSrc", "5"); // 1
    SprdBnchmkCurve_6_set.insert("5");
    all_values.push_back(SprdBnchmkCurve_6_set);
    all_compo_names.insert("SprdBnchmkCurve_6_set");

    elt.add_element(SprdBnchmkCurve_6);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_30{"Stip"};
    multiset<string> Stip_30_set;
    Stip_30.add_attribute("Typ", "SALESCREDITOVR"); // 1
    Stip_30_set.insert("SALESCREDITOVR");
    Stip_30.add_attribute("Val", "StipulationValue_t_1896532708"); // 1
    Stip_30_set.insert("StipulationValue_t_1896532708");
    all_values.push_back(Stip_30_set);
    all_compo_names.insert("Stip_30_set");

    elt.add_element(Stip_30);
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
