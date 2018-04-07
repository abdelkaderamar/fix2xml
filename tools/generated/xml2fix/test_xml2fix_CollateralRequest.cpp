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
  elt.add_attribute("ReqID", "CollReqID_t_999419416"); // 0
  CollateralRequest_message_t_0.insert("CollReqID_t_999419416");
  elt.add_attribute("AsgnRsn", "7"); // 0
  CollateralRequest_message_t_0.insert("7");
  elt.add_attribute("TxnTm", "TransactTime_t_675836313"); // 0
  CollateralRequest_message_t_0.insert("TransactTime_t_675836313");
  elt.add_attribute("ExpireTm", "ExpireTime_t_2083763048"); // 0
  CollateralRequest_message_t_0.insert("ExpireTime_t_2083763048");
  elt.add_attribute("Acct", "Account_t_1985208403"); // 0
  CollateralRequest_message_t_0.insert("Account_t_1985208403");
  elt.add_attribute("AcctTyp", "2"); // 0
  CollateralRequest_message_t_0.insert("2");
  elt.add_attribute("ClOrdID", "ClOrdID_t_53979185"); // 0
  CollateralRequest_message_t_0.insert("ClOrdID_t_53979185");
  elt.add_attribute("OrdID", "OrderID_t_820852492"); // 0
  CollateralRequest_message_t_0.insert("OrderID_t_820852492");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1296234420"); // 0
  CollateralRequest_message_t_0.insert("SecondaryOrderID_t_1296234420");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_859059972"); // 0
  CollateralRequest_message_t_0.insert("SecondaryClOrdID_t_859059972");
  elt.add_attribute("SettlDt", "SettlDate_t_940835493"); // 0
  CollateralRequest_message_t_0.insert("SettlDate_t_940835493");
  elt.add_attribute("Qty", "12366156.200000"); // 0
  CollateralRequest_message_t_0.insert("12366156.200000");
  elt.add_attribute("QtyTyp", "2"); // 0
  CollateralRequest_message_t_0.insert("2");
  elt.add_attribute("Ccy", "CHF"); // 0
  CollateralRequest_message_t_0.insert("CHF");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1569940509"); // 0
  CollateralRequest_message_t_0.insert("MarginExcess_t_1569940509");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_484729640"); // 0
  CollateralRequest_message_t_0.insert("TotalNetValue_t_484729640");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_681126680"); // 0
  CollateralRequest_message_t_0.insert("CashOutstanding_t_681126680");
  elt.add_attribute("Side", "G"); // 0
  CollateralRequest_message_t_0.insert("G");
  elt.add_attribute("Px", "17790508.800000"); // 0
  CollateralRequest_message_t_0.insert("17790508.800000");
  elt.add_attribute("PxTyp", "16"); // 0
  CollateralRequest_message_t_0.insert("16");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1591301383"); // 0
  CollateralRequest_message_t_0.insert("AccruedInterestAmt_t_1591301383");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_61498773"); // 0
  CollateralRequest_message_t_0.insert("EndAccruedInterestAmt_t_61498773");
  elt.add_attribute("StartCsh", "StartCash_t_1308590193"); // 0
  CollateralRequest_message_t_0.insert("StartCash_t_1308590193");
  elt.add_attribute("EndCsh", "EndCash_t_1330066212"); // 0
  CollateralRequest_message_t_0.insert("EndCash_t_1330066212");
  elt.add_attribute("SesID", "1"); // 0
  CollateralRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "6"); // 0
  CollateralRequest_message_t_0.insert("6");
  elt.add_attribute("SetSesID", "RTH"); // 0
  CollateralRequest_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1079330314"); // 0
  CollateralRequest_message_t_0.insert("SettlSessSubID_t_1079330314");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1905585730"); // 0
  CollateralRequest_message_t_0.insert("ClearingBusinessDate_t_1905585730");
  elt.add_attribute("Txt", "Text_t_460456130"); // 0
  CollateralRequest_message_t_0.insert("Text_t_460456130");
  elt.add_attribute("EncTxtLen", "2078749730"); // 0
  CollateralRequest_message_t_0.insert("2078749730");
  elt.add_attribute("EncTxt", "EncodedText_t_1955101297"); // 0
  CollateralRequest_message_t_0.insert("EncodedText_t_1955101297");
  all_values.push_back(CollateralRequest_message_t_0);
  all_compo_names.insert("CollateralRequest_message_t");

  { // Hdr
    xml_element Hdr_18{"Hdr"};
    multiset<string> Hdr_18_set;
    Hdr_18.add_attribute("SeqNum", "1136292444"); // 1
    Hdr_18_set.insert("1136292444");
    Hdr_18.add_attribute("SID", "SenderCompID_t_2015029130"); // 1
    Hdr_18_set.insert("SenderCompID_t_2015029130");
    Hdr_18.add_attribute("TID", "TargetCompID_t_1792826053"); // 1
    Hdr_18_set.insert("TargetCompID_t_1792826053");
    Hdr_18.add_attribute("OBID", "OnBehalfOfCompID_t_1270188641"); // 1
    Hdr_18_set.insert("OnBehalfOfCompID_t_1270188641");
    Hdr_18.add_attribute("D2ID", "DeliverToCompID_t_2069008315"); // 1
    Hdr_18_set.insert("DeliverToCompID_t_2069008315");
    Hdr_18.add_attribute("SSub", "SenderSubID_t_466194897"); // 1
    Hdr_18_set.insert("SenderSubID_t_466194897");
    Hdr_18.add_attribute("SLoc", "SenderLocationID_t_418939414"); // 1
    Hdr_18_set.insert("SenderLocationID_t_418939414");
    Hdr_18.add_attribute("TSub", "TargetSubID_t_780584639"); // 1
    Hdr_18_set.insert("TargetSubID_t_780584639");
    Hdr_18.add_attribute("TLoc", "TargetLocationID_t_1407030391"); // 1
    Hdr_18_set.insert("TargetLocationID_t_1407030391");
    Hdr_18.add_attribute("OBSub", "OnBehalfOfSubID_t_1655555034"); // 1
    Hdr_18_set.insert("OnBehalfOfSubID_t_1655555034");
    Hdr_18.add_attribute("OBLoc", "OnBehalfOfLocationID_t_193021907"); // 1
    Hdr_18_set.insert("OnBehalfOfLocationID_t_193021907");
    Hdr_18.add_attribute("D2Sub", "DeliverToSubID_t_1373476105"); // 1
    Hdr_18_set.insert("DeliverToSubID_t_1373476105");
    Hdr_18.add_attribute("D2Loc", "DeliverToLocationID_t_123696133"); // 1
    Hdr_18_set.insert("DeliverToLocationID_t_123696133");
    Hdr_18.add_attribute("PosDup", "N"); // 1
    Hdr_18_set.insert("N");
    Hdr_18.add_attribute("PosRsnd", "Y"); // 1
    Hdr_18_set.insert("Y");
    Hdr_18.add_attribute("Snt", "SendingTime_t_804822814"); // 1
    Hdr_18_set.insert("SendingTime_t_804822814");
    Hdr_18.add_attribute("OrigSnt", "OrigSendingTime_t_104362815"); // 1
    Hdr_18_set.insert("OrigSendingTime_t_104362815");
    Hdr_18.add_attribute("MsgEncd", "MessageEncoding_t_1489772977"); // 1
    Hdr_18_set.insert("MessageEncoding_t_1489772977");
    all_values.push_back(Hdr_18_set);
    all_compo_names.insert("Hdr_18_set");

    {
      xml_element Hop_18{"Hop"};
      multiset<string> Hop_18_set;
      Hop_18.add_attribute("ID", "HopCompID_t_1888934136"); // 2
      Hop_18_set.insert("HopCompID_t_1888934136");
      Hop_18.add_attribute("Ref", "1695664199"); // 2
      Hop_18_set.insert("1695664199");
      Hop_18.add_attribute("Snt", "HopSendingTime_t_1551271751"); // 2
      Hop_18_set.insert("HopSendingTime_t_1551271751");
      all_values.push_back(Hop_18_set);
      all_compo_names.insert("Hop_18_set");

      Hdr_18.add_element(Hop_18);
    }
    elt.add_element(Hdr_18);
  } // end Hdr
  { // Pty
    xml_element Pty_94{"Pty"};
    multiset<string> Pty_94_set;
    Pty_94.add_attribute("ID", "PartyID_t_878246763"); // 1
    Pty_94_set.insert("PartyID_t_878246763");
    Pty_94.add_attribute("Src", "4"); // 1
    Pty_94_set.insert("4");
    Pty_94.add_attribute("R", "46"); // 1
    Pty_94_set.insert("46");
    all_values.push_back(Pty_94_set);
    all_compo_names.insert("Pty_94_set");

    {
      xml_element Sub_94{"Sub"};
      multiset<string> Sub_94_set;
      Sub_94.add_attribute("ID", "PartySubID_t_884947836"); // 2
      Sub_94_set.insert("PartySubID_t_884947836");
      Sub_94.add_attribute("Typ", "21"); // 2
      Sub_94_set.insert("21");
      all_values.push_back(Sub_94_set);
      all_compo_names.insert("Sub_94_set");

      Pty_94.add_element(Sub_94);
    }
    elt.add_element(Pty_94);
  } // end Pty
  { // Pty
    xml_element Pty_95{"Pty"};
    multiset<string> Pty_95_set;
    Pty_95.add_attribute("ID", "PartyID_t_621119553"); // 1
    Pty_95_set.insert("PartyID_t_621119553");
    Pty_95.add_attribute("Src", "G"); // 1
    Pty_95_set.insert("G");
    Pty_95.add_attribute("R", "69"); // 1
    Pty_95_set.insert("69");
    all_values.push_back(Pty_95_set);
    all_compo_names.insert("Pty_95_set");

    {
      xml_element Sub_95{"Sub"};
      multiset<string> Sub_95_set;
      Sub_95.add_attribute("ID", "PartySubID_t_428737203"); // 2
      Sub_95_set.insert("PartySubID_t_428737203");
      Sub_95.add_attribute("Typ", "24"); // 2
      Sub_95_set.insert("24");
      all_values.push_back(Sub_95_set);
      all_compo_names.insert("Sub_95_set");

      Pty_95.add_element(Sub_95);
    }
    elt.add_element(Pty_95);
  } // end Pty
  { // Pty
    xml_element Pty_96{"Pty"};
    multiset<string> Pty_96_set;
    Pty_96.add_attribute("ID", "PartyID_t_1281375254"); // 1
    Pty_96_set.insert("PartyID_t_1281375254");
    Pty_96.add_attribute("Src", "F"); // 1
    Pty_96_set.insert("F");
    Pty_96.add_attribute("R", "62"); // 1
    Pty_96_set.insert("62");
    all_values.push_back(Pty_96_set);
    all_compo_names.insert("Pty_96_set");

    {
      xml_element Sub_96{"Sub"};
      multiset<string> Sub_96_set;
      Sub_96.add_attribute("ID", "PartySubID_t_1202899921"); // 2
      Sub_96_set.insert("PartySubID_t_1202899921");
      Sub_96.add_attribute("Typ", "7"); // 2
      Sub_96_set.insert("7");
      all_values.push_back(Sub_96_set);
      all_compo_names.insert("Sub_96_set");

      Pty_96.add_element(Sub_96);
    }
    elt.add_element(Pty_96);
  } // end Pty
  { // CollExc
    xml_element CollExc_10{"CollExc"};
    multiset<string> CollExc_10_set;
    CollExc_10.add_attribute("ExecID", "ExecID_t_1983484561"); // 1
    CollExc_10_set.insert("ExecID_t_1983484561");
    all_values.push_back(CollExc_10_set);
    all_compo_names.insert("CollExc_10_set");

    elt.add_element(CollExc_10);
  } // end CollExc
  { // CollExc
    xml_element CollExc_11{"CollExc"};
    multiset<string> CollExc_11_set;
    CollExc_11.add_attribute("ExecID", "ExecID_t_1947304896"); // 1
    CollExc_11_set.insert("ExecID_t_1947304896");
    all_values.push_back(CollExc_11_set);
    all_compo_names.insert("CollExc_11_set");

    elt.add_element(CollExc_11);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_10{"TrdColl"};
    multiset<string> TrdColl_10_set;
    TrdColl_10.add_attribute("RptID", "TradeReportID_t_29022820"); // 1
    TrdColl_10_set.insert("TradeReportID_t_29022820");
    TrdColl_10.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1173297353"); // 1
    TrdColl_10_set.insert("SecondaryTradeReportID_t_1173297353");
    all_values.push_back(TrdColl_10_set);
    all_compo_names.insert("TrdColl_10_set");

    elt.add_element(TrdColl_10);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_12{"Instrmt"};
    multiset<string> Instrmt_12_set;
    Instrmt_12.add_attribute("Sym", "Symbol_t_1655108338"); // 1
    Instrmt_12_set.insert("Symbol_t_1655108338");
    Instrmt_12.add_attribute("Sfx", "WI"); // 1
    Instrmt_12_set.insert("WI");
    Instrmt_12.add_attribute("ID", "SecurityID_t_884019451"); // 1
    Instrmt_12_set.insert("SecurityID_t_884019451");
    Instrmt_12.add_attribute("Src", "7"); // 1
    Instrmt_12_set.insert("7");
    Instrmt_12.add_attribute("Prod", "10"); // 1
    Instrmt_12_set.insert("10");
    Instrmt_12.add_attribute("ProdCmplx", "ProductComplex_t_226308780"); // 1
    Instrmt_12_set.insert("ProductComplex_t_226308780");
    Instrmt_12.add_attribute("SecGrp", "SecurityGroup_t_53897993"); // 1
    Instrmt_12_set.insert("SecurityGroup_t_53897993");
    Instrmt_12.add_attribute("CFI", "CFICode_t_1444528603"); // 1
    Instrmt_12_set.insert("CFICode_t_1444528603");
    Instrmt_12.add_attribute("SecTyp", "XLINKD"); // 1
    Instrmt_12_set.insert("XLINKD");
    Instrmt_12.add_attribute("SubTyp", "SecuritySubType_t_1103938675"); // 1
    Instrmt_12_set.insert("SecuritySubType_t_1103938675");
    Instrmt_12.add_attribute("MMY", "175291718"); // 1
    Instrmt_12_set.insert("175291718");
    Instrmt_12.add_attribute("MatDt", "MaturityDate_t_33330259"); // 1
    Instrmt_12_set.insert("MaturityDate_t_33330259");
    Instrmt_12.add_attribute("MatTm", "1966956146"); // 1
    Instrmt_12_set.insert("1966956146");
    Instrmt_12.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1060239555"); // 1
    Instrmt_12_set.insert("SettleOnOpenFlag_t_1060239555");
    Instrmt_12.add_attribute("AsgnMeth", "1515893948"); // 1
    Instrmt_12_set.insert("1515893948");
    Instrmt_12.add_attribute("Status", "1"); // 1
    Instrmt_12_set.insert("1");
    Instrmt_12.add_attribute("CpnPmt", "CouponPaymentDate_t_258159874"); // 1
    Instrmt_12_set.insert("CouponPaymentDate_t_258159874");
    Instrmt_12.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_12_set.insert("FR");
    Instrmt_12.add_attribute("Snrty", "SR"); // 1
    Instrmt_12_set.insert("SR");
    Instrmt_12.add_attribute("NotlPctOut", "5923726.370000"); // 1
    Instrmt_12_set.insert("5923726.370000");
    Instrmt_12.add_attribute("OrigNotlPctOut", "20636153.260000"); // 1
    Instrmt_12_set.insert("20636153.260000");
    Instrmt_12.add_attribute("AttchPnt", "9434088.630000"); // 1
    Instrmt_12_set.insert("9434088.630000");
    Instrmt_12.add_attribute("DetchPnt", "492903.930000"); // 1
    Instrmt_12_set.insert("492903.930000");
    Instrmt_12.add_attribute("Issued", "IssueDate_t_1119031599"); // 1
    Instrmt_12_set.insert("IssueDate_t_1119031599");
    Instrmt_12.add_attribute("RepoCollSecTyp", "1483683368"); // 1
    Instrmt_12_set.insert("1483683368");
    Instrmt_12.add_attribute("RepoTrm", "2072631212"); // 1
    Instrmt_12_set.insert("2072631212");
    Instrmt_12.add_attribute("RepoRt", "9550325.120000"); // 1
    Instrmt_12_set.insert("9550325.120000");
    Instrmt_12.add_attribute("Fctr", "12835046.170000"); // 1
    Instrmt_12_set.insert("12835046.170000");
    Instrmt_12.add_attribute("CrdRtg", "CreditRating_t_1456559769"); // 1
    Instrmt_12_set.insert("CreditRating_t_1456559769");
    Instrmt_12.add_attribute("Rgstry", "InstrRegistry_t_984055333"); // 1
    Instrmt_12_set.insert("InstrRegistry_t_984055333");
    Instrmt_12.add_attribute("IssuCtry", "309318322"); // 1
    Instrmt_12_set.insert("309318322");
    Instrmt_12.add_attribute("StPrv", "StateOrProvinceOfIssue_t_964184459"); // 1
    Instrmt_12_set.insert("StateOrProvinceOfIssue_t_964184459");
    Instrmt_12.add_attribute("Lcl", "LocaleOfIssue_t_628556922"); // 1
    Instrmt_12_set.insert("LocaleOfIssue_t_628556922");
    Instrmt_12.add_attribute("Redeem", "RedemptionDate_t_1193337773"); // 1
    Instrmt_12_set.insert("RedemptionDate_t_1193337773");
    Instrmt_12.add_attribute("StrkPx", "12766319.640000"); // 1
    Instrmt_12_set.insert("12766319.640000");
    Instrmt_12.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_12_set.insert("USD");
    Instrmt_12.add_attribute("StrkMult", "13305299.570000"); // 1
    Instrmt_12_set.insert("13305299.570000");
    Instrmt_12.add_attribute("StrkValu", "18219499.300000"); // 1
    Instrmt_12_set.insert("18219499.300000");
    Instrmt_12.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_12_set.insert("5");
    Instrmt_12.add_attribute("StrkPxBndryPrcsn", "19972416.480000"); // 1
    Instrmt_12_set.insert("19972416.480000");
    Instrmt_12.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_12_set.insert("1");
    Instrmt_12.add_attribute("OptAt", "106457482"); // 1
    Instrmt_12_set.insert("106457482");
    Instrmt_12.add_attribute("Mult", "9099975.550000"); // 1
    Instrmt_12_set.insert("9099975.550000");
    Instrmt_12.add_attribute("MultTyp", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_12_set.insert("4");
    Instrmt_12.add_attribute("MinPxIncr", "11681574.290000"); // 1
    Instrmt_12_set.insert("11681574.290000");
    Instrmt_12.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1233724069"); // 1
    Instrmt_12_set.insert("MinPriceIncrementAmount_t_1233724069");
    Instrmt_12.add_attribute("UOM", "lbs"); // 1
    Instrmt_12_set.insert("lbs");
    Instrmt_12.add_attribute("UOMQty", "17605300.660000"); // 1
    Instrmt_12_set.insert("17605300.660000");
    Instrmt_12.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_12_set.insert("MMBtu");
    Instrmt_12.add_attribute("PxUOMQty", "2123040.040000"); // 1
    Instrmt_12_set.insert("2123040.040000");
    Instrmt_12.add_attribute("SettlMeth", "C"); // 1
    Instrmt_12_set.insert("C");
    Instrmt_12.add_attribute("ExerStyle", "1"); // 1
    Instrmt_12_set.insert("1");
    Instrmt_12.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("OptPayAmt", "OptPayoutAmount_t_1734968024"); // 1
    Instrmt_12_set.insert("OptPayoutAmount_t_1734968024");
    Instrmt_12.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_12_set.insert("PCTPAR");
    Instrmt_12.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_12_set.insert("FUTDA");
    Instrmt_12.add_attribute("ListMeth", "1"); // 1
    Instrmt_12_set.insert("1");
    Instrmt_12.add_attribute("CapPx", "20604915.440000"); // 1
    Instrmt_12_set.insert("20604915.440000");
    Instrmt_12.add_attribute("FlrPx", "11413266.640000"); // 1
    Instrmt_12_set.insert("11413266.640000");
    Instrmt_12.add_attribute("PutCall", "0"); // 1
    Instrmt_12_set.insert("0");
    Instrmt_12.add_attribute("FlexInd", "true"); // 1
    Instrmt_12_set.insert("true");
    Instrmt_12.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_12_set.insert("true");
    Instrmt_12.add_attribute("TmUnit", "Min"); // 1
    Instrmt_12_set.insert("Min");
    Instrmt_12.add_attribute("CpnRt", "9189861.440000"); // 1
    Instrmt_12_set.insert("9189861.440000");
    Instrmt_12.add_attribute("Exch", "SecurityExchange_t_1606827344"); // 1
    Instrmt_12_set.insert("SecurityExchange_t_1606827344");
    Instrmt_12.add_attribute("PosLmt", "320423229"); // 1
    Instrmt_12_set.insert("320423229");
    Instrmt_12.add_attribute("NTPosLmt", "593452426"); // 1
    Instrmt_12_set.insert("593452426");
    Instrmt_12.add_attribute("Issr", "Issuer_t_509087133"); // 1
    Instrmt_12_set.insert("Issuer_t_509087133");
    Instrmt_12.add_attribute("EncIssrLen", "607408213"); // 1
    Instrmt_12_set.insert("607408213");
    Instrmt_12.add_attribute("EncIssr", "EncodedIssuer_t_443210427"); // 1
    Instrmt_12_set.insert("EncodedIssuer_t_443210427");
    Instrmt_12.add_attribute("Desc", "SecurityDesc_t_1592160830"); // 1
    Instrmt_12_set.insert("SecurityDesc_t_1592160830");
    Instrmt_12.add_attribute("EncSecDescLen", "713865696"); // 1
    Instrmt_12_set.insert("713865696");
    Instrmt_12.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1353207982"); // 1
    Instrmt_12_set.insert("EncodedSecurityDesc_t_1353207982");
    Instrmt_12.add_attribute("Pool", "Pool_t_2043644827"); // 1
    Instrmt_12_set.insert("Pool_t_2043644827");
    Instrmt_12.add_attribute("CSetMo", "1260915230"); // 1
    Instrmt_12_set.insert("1260915230");
    Instrmt_12.add_attribute("CPPgm", "99"); // 1
    Instrmt_12_set.insert("99");
    Instrmt_12.add_attribute("CPRegT", "CPRegType_t_1129885248"); // 1
    Instrmt_12_set.insert("CPRegType_t_1129885248");
    Instrmt_12.add_attribute("Dated", "DatedDate_t_529810372"); // 1
    Instrmt_12_set.insert("DatedDate_t_529810372");
    Instrmt_12.add_attribute("IntAcrl", "InterestAccrualDate_t_2134411830"); // 1
    Instrmt_12_set.insert("InterestAccrualDate_t_2134411830");
    all_values.push_back(Instrmt_12_set);
    all_compo_names.insert("Instrmt_12_set");

    {
      xml_element AID_12{"AID"};
      multiset<string> AID_12_set;
      AID_12.add_attribute("AltID", "SecurityAltID_t_132257347"); // 2
      AID_12_set.insert("SecurityAltID_t_132257347");
      AID_12.add_attribute("AltIDSrc", "F"); // 2
      AID_12_set.insert("F");
      all_values.push_back(AID_12_set);
      all_compo_names.insert("AID_12_set");

      Instrmt_12.add_element(AID_12);
    }
    {
      xml_element SecXML_12{"SecXML"};
      multiset<string> SecXML_12_set;
      SecXML_12.add_attribute("Schema", "SecurityXMLSchema_t_1796748642"); // 2
      SecXML_12_set.insert("SecurityXMLSchema_t_1796748642");
      all_values.push_back(SecXML_12_set);
      all_compo_names.insert("SecXML_12_set");

      Instrmt_12.add_element(SecXML_12);
    }
    {
      xml_element Evnt_12{"Evnt"};
      multiset<string> Evnt_12_set;
      Evnt_12.add_attribute("EventTyp", "5"); // 2
      Evnt_12_set.insert("5");
      Evnt_12.add_attribute("Dt", "EventDate_t_290618101"); // 2
      Evnt_12_set.insert("EventDate_t_290618101");
      Evnt_12.add_attribute("Tm", "EventTime_t_1384233018"); // 2
      Evnt_12_set.insert("EventTime_t_1384233018");
      Evnt_12.add_attribute("Px", "13300972.560000"); // 2
      Evnt_12_set.insert("13300972.560000");
      Evnt_12.add_attribute("Txt", "EventText_t_1122626443"); // 2
      Evnt_12_set.insert("EventText_t_1122626443");
      all_values.push_back(Evnt_12_set);
      all_compo_names.insert("Evnt_12_set");

      Instrmt_12.add_element(Evnt_12);
    }
    {
      xml_element Pty_97{"Pty"};
      multiset<string> Pty_97_set;
      Pty_97.add_attribute("ID", "InstrumentPartyID_t_280793515"); // 2
      Pty_97_set.insert("InstrumentPartyID_t_280793515");
      Pty_97.add_attribute("Src", "7"); // 2
      Pty_97_set.insert("7");
      Pty_97.add_attribute("R", "25"); // 2
      Pty_97_set.insert("25");
      all_values.push_back(Pty_97_set);
      all_compo_names.insert("Pty_97_set");

      {
        xml_element Sub_97{"Sub"};
        multiset<string> Sub_97_set;
        Sub_97.add_attribute("ID", "InstrumentPartySubID_t_141538472"); // 3
        Sub_97_set.insert("InstrumentPartySubID_t_141538472");
        Sub_97.add_attribute("Typ", "15"); // 3
        Sub_97_set.insert("15");
        all_values.push_back(Sub_97_set);
        all_compo_names.insert("Sub_97_set");

        Pty_97.add_element(Sub_97);
      }
      Instrmt_12.add_element(Pty_97);
    }
    {
      xml_element CmplxEvnt_12{"CmplxEvnt"};
      multiset<string> CmplxEvnt_12_set;
      CmplxEvnt_12.add_attribute("Typ", "7"); // 2
      CmplxEvnt_12_set.insert("7");
      CmplxEvnt_12.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1278915392"); // 2
      CmplxEvnt_12_set.insert("ComplexOptPayoutAmount_t_1278915392");
      CmplxEvnt_12.add_attribute("Px", "5561724.670000"); // 2
      CmplxEvnt_12_set.insert("5561724.670000");
      CmplxEvnt_12.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_12_set.insert("5");
      CmplxEvnt_12.add_attribute("PxBndryPrcsn", "15993386.220000"); // 2
      CmplxEvnt_12_set.insert("15993386.220000");
      CmplxEvnt_12.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_12_set.insert("3");
      CmplxEvnt_12.add_attribute("Cond", "2"); // 2
      CmplxEvnt_12_set.insert("2");
      all_values.push_back(CmplxEvnt_12_set);
      all_compo_names.insert("CmplxEvnt_12_set");

      {
        xml_element EvntDts_12{"EvntDts"};
        multiset<string> EvntDts_12_set;
        EvntDts_12.add_attribute("StartDt", "ComplexEventStartDate_t_59263187"); // 3
        EvntDts_12_set.insert("ComplexEventStartDate_t_59263187");
        EvntDts_12.add_attribute("EndDt", "ComplexEventEndDate_t_1592835320"); // 3
        EvntDts_12_set.insert("ComplexEventEndDate_t_1592835320");
        all_values.push_back(EvntDts_12_set);
        all_compo_names.insert("EvntDts_12_set");

        {
          xml_element EvntTms_12{"EvntTms"};
          multiset<string> EvntTms_12_set;
          EvntTms_12.add_attribute("StartTm", "1864241909"); // 4
          EvntTms_12_set.insert("1864241909");
          EvntTms_12.add_attribute("EndTm", "773128883"); // 4
          EvntTms_12_set.insert("773128883");
          all_values.push_back(EvntTms_12_set);
          all_compo_names.insert("EvntTms_12_set");

          EvntDts_12.add_element(EvntTms_12);
        }
        CmplxEvnt_12.add_element(EvntDts_12);
      }
      Instrmt_12.add_element(CmplxEvnt_12);
    }
    elt.add_element(Instrmt_12);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_7{"FinDetls"};
    multiset<string> FinDetls_7_set;
    FinDetls_7.add_attribute("AgmtDesc", "AgreementDesc_t_798559655"); // 1
    FinDetls_7_set.insert("AgreementDesc_t_798559655");
    FinDetls_7.add_attribute("AgmtID", "AgreementID_t_1760403088"); // 1
    FinDetls_7_set.insert("AgreementID_t_1760403088");
    FinDetls_7.add_attribute("AgmtDt", "AgreementDate_t_2034044114"); // 1
    FinDetls_7_set.insert("AgreementDate_t_2034044114");
    FinDetls_7.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_7_set.insert("GBP");
    FinDetls_7.add_attribute("TrmTyp", "3"); // 1
    FinDetls_7_set.insert("3");
    FinDetls_7.add_attribute("StartDt", "StartDate_t_1159369601"); // 1
    FinDetls_7_set.insert("StartDate_t_1159369601");
    FinDetls_7.add_attribute("EndDt", "EndDate_t_875062035"); // 1
    FinDetls_7_set.insert("EndDate_t_875062035");
    FinDetls_7.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_7_set.insert("2");
    FinDetls_7.add_attribute("MgnRatio", "8086345.960000"); // 1
    FinDetls_7_set.insert("8086345.960000");
    all_values.push_back(FinDetls_7_set);
    all_compo_names.insert("FinDetls_7_set");

    elt.add_element(FinDetls_7);
  } // end FinDetls
  { // Leg
    xml_element Leg_21{"Leg"};
    multiset<string> Leg_21_set;
    Leg_21.add_attribute("Sym", "LegSymbol_t_1449103316"); // 1
    Leg_21_set.insert("LegSymbol_t_1449103316");
    Leg_21.add_attribute("Sfx", "CD"); // 1
    Leg_21_set.insert("CD");
    Leg_21.add_attribute("ID", "LegSecurityID_t_311336689"); // 1
    Leg_21_set.insert("LegSecurityID_t_311336689");
    Leg_21.add_attribute("Src", "4"); // 1
    Leg_21_set.insert("4");
    Leg_21.add_attribute("Prod", "4"); // 1
    Leg_21_set.insert("4");
    Leg_21.add_attribute("CFI", "LegCFICode_t_1554441842"); // 1
    Leg_21_set.insert("LegCFICode_t_1554441842");
    Leg_21.add_attribute("SecTyp", "MIO"); // 1
    Leg_21_set.insert("MIO");
    Leg_21.add_attribute("SecSubTyp", "LegSecuritySubType_t_467715954"); // 1
    Leg_21_set.insert("LegSecuritySubType_t_467715954");
    Leg_21.add_attribute("MMY", "1191628164"); // 1
    Leg_21_set.insert("1191628164");
    Leg_21.add_attribute("Mat", "LegMaturityDate_t_844365821"); // 1
    Leg_21_set.insert("LegMaturityDate_t_844365821");
    Leg_21.add_attribute("MatTm", "1746631346"); // 1
    Leg_21_set.insert("1746631346");
    Leg_21.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1747800631"); // 1
    Leg_21_set.insert("LegCouponPaymentDate_t_1747800631");
    Leg_21.add_attribute("Issued", "LegIssueDate_t_607359767"); // 1
    Leg_21_set.insert("LegIssueDate_t_607359767");
    Leg_21.add_attribute("RepoCollSecTyp", "1198486320"); // 1
    Leg_21_set.insert("1198486320");
    Leg_21.add_attribute("RepoTrm", "749941877"); // 1
    Leg_21_set.insert("749941877");
    Leg_21.add_attribute("RepoRt", "8794408.470000"); // 1
    Leg_21_set.insert("8794408.470000");
    Leg_21.add_attribute("Fctr", "12577495.080000"); // 1
    Leg_21_set.insert("12577495.080000");
    Leg_21.add_attribute("CrdRtg", "LegCreditRating_t_195293549"); // 1
    Leg_21_set.insert("LegCreditRating_t_195293549");
    Leg_21.add_attribute("Rgstry", "LegInstrRegistry_t_596199108"); // 1
    Leg_21_set.insert("LegInstrRegistry_t_596199108");
    Leg_21.add_attribute("Ctry", "2030878391"); // 1
    Leg_21_set.insert("2030878391");
    Leg_21.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_993853204"); // 1
    Leg_21_set.insert("LegStateOrProvinceOfIssue_t_993853204");
    Leg_21.add_attribute("Lcl", "LegLocaleOfIssue_t_209118549"); // 1
    Leg_21_set.insert("LegLocaleOfIssue_t_209118549");
    Leg_21.add_attribute("Redeem", "LegRedemptionDate_t_1917438857"); // 1
    Leg_21_set.insert("LegRedemptionDate_t_1917438857");
    Leg_21.add_attribute("Strk", "188109.750000"); // 1
    Leg_21_set.insert("188109.750000");
    Leg_21.add_attribute("StrkCcy", "EUR"); // 1
    Leg_21_set.insert("EUR");
    Leg_21.add_attribute("OptA", "1178180577"); // 1
    Leg_21_set.insert("1178180577");
    Leg_21.add_attribute("Cmult", "18269852.730000"); // 1
    Leg_21_set.insert("18269852.730000");
    Leg_21.add_attribute("MultTyp", "2"); // 1
    Leg_21_set.insert("2");
    Leg_21.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_21_set.insert("3");
    Leg_21.add_attribute("UOM", "Gal"); // 1
    Leg_21_set.insert("Gal");
    Leg_21.add_attribute("UOMQty", "6464309.300000"); // 1
    Leg_21_set.insert("6464309.300000");
    Leg_21.add_attribute("PxUOM", "USD"); // 1
    Leg_21_set.insert("USD");
    Leg_21.add_attribute("PxUOMQty", "11195613.950000"); // 1
    Leg_21_set.insert("11195613.950000");
    Leg_21.add_attribute("TmUnit", "S"); // 1
    Leg_21_set.insert("S");
    Leg_21.add_attribute("ExerStyle", "2"); // 1
    Leg_21_set.insert("2");
    Leg_21.add_attribute("CpnRt", "5265195.890000"); // 1
    Leg_21_set.insert("5265195.890000");
    Leg_21.add_attribute("Exch", "LegSecurityExchange_t_1611392613"); // 1
    Leg_21_set.insert("LegSecurityExchange_t_1611392613");
    Leg_21.add_attribute("Issr", "LegIssuer_t_678608927"); // 1
    Leg_21_set.insert("LegIssuer_t_678608927");
    Leg_21.add_attribute("EncLegIssrLen", "1718147754"); // 1
    Leg_21_set.insert("1718147754");
    Leg_21.add_attribute("EncLegIssr", "EncodedLegIssuer_t_308274786"); // 1
    Leg_21_set.insert("EncodedLegIssuer_t_308274786");
    Leg_21.add_attribute("Desc", "LegSecurityDesc_t_277756626"); // 1
    Leg_21_set.insert("LegSecurityDesc_t_277756626");
    Leg_21.add_attribute("EncLegSecDescLen", "1318464737"); // 1
    Leg_21_set.insert("1318464737");
    Leg_21.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_915634554"); // 1
    Leg_21_set.insert("EncodedLegSecurityDesc_t_915634554");
    Leg_21.add_attribute("RatioQty", "14762429.460000"); // 1
    Leg_21_set.insert("14762429.460000");
    Leg_21.add_attribute("Side", "7"); // 1
    Leg_21_set.insert("7");
    Leg_21.add_attribute("Ccy", "JPY"); // 1
    Leg_21_set.insert("JPY");
    Leg_21.add_attribute("Pool", "LegPool_t_116216516"); // 1
    Leg_21_set.insert("LegPool_t_116216516");
    Leg_21.add_attribute("Dated", "LegDatedDate_t_243790861"); // 1
    Leg_21_set.insert("LegDatedDate_t_243790861");
    Leg_21.add_attribute("CSetMo", "469903550"); // 1
    Leg_21_set.insert("469903550");
    Leg_21.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1110069720"); // 1
    Leg_21_set.insert("LegInterestAccrualDate_t_1110069720");
    Leg_21.add_attribute("PutCall", "452909410"); // 1
    Leg_21_set.insert("452909410");
    Leg_21.add_attribute("LegOptionRatio", "2398587.590000"); // 1
    Leg_21_set.insert("2398587.590000");
    Leg_21.add_attribute("Px", "11288806.960000"); // 1
    Leg_21_set.insert("11288806.960000");
    all_values.push_back(Leg_21_set);
    all_compo_names.insert("Leg_21_set");

    {
      xml_element LegAID_21{"LegAID"};
      multiset<string> LegAID_21_set;
      LegAID_21.add_attribute("SecAltID", "LegSecurityAltID_t_1404832648"); // 2
      LegAID_21_set.insert("LegSecurityAltID_t_1404832648");
      LegAID_21.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_21_set.insert("G");
      all_values.push_back(LegAID_21_set);
      all_compo_names.insert("LegAID_21_set");

      Leg_21.add_element(LegAID_21);
    }
    elt.add_element(Leg_21);
  } // end Leg
  { // UndColl
    xml_element UndColl_2{"UndColl"};
    multiset<string> UndColl_2_set;
    UndColl_2.add_attribute("Actn", "2"); // 1
    UndColl_2_set.insert("2");
    all_values.push_back(UndColl_2_set);
    all_compo_names.insert("UndColl_2_set");

    {
      xml_element Undly_17{"Undly"};
      multiset<string> Undly_17_set;
      Undly_17.add_attribute("Sym", "UnderlyingSymbol_t_1770996069"); // 2
      Undly_17_set.insert("UnderlyingSymbol_t_1770996069");
      Undly_17.add_attribute("Sfx", "CD"); // 2
      Undly_17_set.insert("CD");
      Undly_17.add_attribute("ID", "UnderlyingSecurityID_t_1892558979"); // 2
      Undly_17_set.insert("UnderlyingSecurityID_t_1892558979");
      Undly_17.add_attribute("Src", "8"); // 2
      Undly_17_set.insert("8");
      Undly_17.add_attribute("Prod", "11"); // 2
      Undly_17_set.insert("11");
      Undly_17.add_attribute("CFI", "UnderlyingCFICode_t_864636726"); // 2
      Undly_17_set.insert("UnderlyingCFICode_t_864636726");
      Undly_17.add_attribute("SecTyp", "WITHDRN"); // 2
      Undly_17_set.insert("WITHDRN");
      Undly_17.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_94517615"); // 2
      Undly_17_set.insert("UnderlyingSecuritySubType_t_94517615");
      Undly_17.add_attribute("MMY", "1391156316"); // 2
      Undly_17_set.insert("1391156316");
      Undly_17.add_attribute("Mat", "UnderlyingMaturityDate_t_804529357"); // 2
      Undly_17_set.insert("UnderlyingMaturityDate_t_804529357");
      Undly_17.add_attribute("MatTm", "773126542"); // 2
      Undly_17_set.insert("773126542");
      Undly_17.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_961820422"); // 2
      Undly_17_set.insert("UnderlyingCouponPaymentDate_t_961820422");
      Undly_17.add_attribute("RestrctTyp", "FR"); // 2
      Undly_17_set.insert("FR");
      Undly_17.add_attribute("Snrty", "SR"); // 2
      Undly_17_set.insert("SR");
      Undly_17.add_attribute("NotlPctOut", "1328015.110000"); // 2
      Undly_17_set.insert("1328015.110000");
      Undly_17.add_attribute("OrigNotlPctOut", "20284386.980000"); // 2
      Undly_17_set.insert("20284386.980000");
      Undly_17.add_attribute("AttchPnt", "3796424.670000"); // 2
      Undly_17_set.insert("3796424.670000");
      Undly_17.add_attribute("DetchPnt", "537244.780000"); // 2
      Undly_17_set.insert("537244.780000");
      Undly_17.add_attribute("Issued", "UnderlyingIssueDate_t_1676030451"); // 2
      Undly_17_set.insert("UnderlyingIssueDate_t_1676030451");
      Undly_17.add_attribute("RepoCollSecTyp", "966151273"); // 2
      Undly_17_set.insert("966151273");
      Undly_17.add_attribute("RepoTrm", "169940994"); // 2
      Undly_17_set.insert("169940994");
      Undly_17.add_attribute("RepoRt", "19198213.120000"); // 2
      Undly_17_set.insert("19198213.120000");
      Undly_17.add_attribute("Fctr", "14360548.230000"); // 2
      Undly_17_set.insert("14360548.230000");
      Undly_17.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1280010714"); // 2
      Undly_17_set.insert("UnderlyingCreditRating_t_1280010714");
      Undly_17.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_225247075"); // 2
      Undly_17_set.insert("UnderlyingInstrRegistry_t_225247075");
      Undly_17.add_attribute("Ctry", "1675913583"); // 2
      Undly_17_set.insert("1675913583");
      Undly_17.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_261407762"); // 2
      Undly_17_set.insert("UnderlyingStateOrProvinceOfIssue_t_261407762");
      Undly_17.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1630079723"); // 2
      Undly_17_set.insert("UnderlyingLocaleOfIssue_t_1630079723");
      Undly_17.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2102098390"); // 2
      Undly_17_set.insert("UnderlyingRedemptionDate_t_2102098390");
      Undly_17.add_attribute("StrkPx", "4209853.870000"); // 2
      Undly_17_set.insert("4209853.870000");
      Undly_17.add_attribute("StrkCcy", "CAN"); // 2
      Undly_17_set.insert("CAN");
      Undly_17.add_attribute("OptA", "419894537"); // 2
      Undly_17_set.insert("419894537");
      Undly_17.add_attribute("Mult", "3120056.790000"); // 2
      Undly_17_set.insert("3120056.790000");
      Undly_17.add_attribute("MultTyp", "2"); // 2
      Undly_17_set.insert("2");
      Undly_17.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_17_set.insert("4");
      Undly_17.add_attribute("UOM", "Gal"); // 2
      Undly_17_set.insert("Gal");
      Undly_17.add_attribute("UOMQty", "11886909.060000"); // 2
      Undly_17_set.insert("11886909.060000");
      Undly_17.add_attribute("PxUOM", "Alw"); // 2
      Undly_17_set.insert("Alw");
      Undly_17.add_attribute("PxUOMQty", "4203150.730000"); // 2
      Undly_17_set.insert("4203150.730000");
      Undly_17.add_attribute("TmUnit", "S"); // 2
      Undly_17_set.insert("S");
      Undly_17.add_attribute("ExerStyle", "2"); // 2
      Undly_17_set.insert("2");
      Undly_17.add_attribute("CpnRt", "13821354.950000"); // 2
      Undly_17_set.insert("13821354.950000");
      Undly_17.add_attribute("Exch", "UnderlyingSecurityExchange_t_958540760"); // 2
      Undly_17_set.insert("UnderlyingSecurityExchange_t_958540760");
      Undly_17.add_attribute("Issr", "UnderlyingIssuer_t_74562857"); // 2
      Undly_17_set.insert("UnderlyingIssuer_t_74562857");
      Undly_17.add_attribute("EncUndIssrLen", "1514937007"); // 2
      Undly_17_set.insert("1514937007");
      Undly_17.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_839495810"); // 2
      Undly_17_set.insert("EncodedUnderlyingIssuer_t_839495810");
      Undly_17.add_attribute("Desc", "UnderlyingSecurityDesc_t_454205324"); // 2
      Undly_17_set.insert("UnderlyingSecurityDesc_t_454205324");
      Undly_17.add_attribute("EncUndSecDescLen", "1568661485"); // 2
      Undly_17_set.insert("1568661485");
      Undly_17.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_368042613"); // 2
      Undly_17_set.insert("EncodedUnderlyingSecurityDesc_t_368042613");
      Undly_17.add_attribute("CPPgm", "UnderlyingCPProgram_t_1420356597"); // 2
      Undly_17_set.insert("UnderlyingCPProgram_t_1420356597");
      Undly_17.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1738602479"); // 2
      Undly_17_set.insert("UnderlyingCPRegType_t_1738602479");
      Undly_17.add_attribute("AllocPct", "1403802.770000"); // 2
      Undly_17_set.insert("1403802.770000");
      Undly_17.add_attribute("Ccy", "CHF"); // 2
      Undly_17_set.insert("CHF");
      Undly_17.add_attribute("Qty", "3656273.520000"); // 2
      Undly_17_set.insert("3656273.520000");
      Undly_17.add_attribute("SettlTyp", "2"); // 2
      Undly_17_set.insert("2");
      Undly_17.add_attribute("CashAmt", "UnderlyingCashAmount_t_1132537308"); // 2
      Undly_17_set.insert("UnderlyingCashAmount_t_1132537308");
      Undly_17.add_attribute("CashTyp", "DIFF"); // 2
      Undly_17_set.insert("DIFF");
      Undly_17.add_attribute("Px", "1919724.500000"); // 2
      Undly_17_set.insert("1919724.500000");
      Undly_17.add_attribute("DirtPx", "15535226.950000"); // 2
      Undly_17_set.insert("15535226.950000");
      Undly_17.add_attribute("EndPx", "4151537.750000"); // 2
      Undly_17_set.insert("4151537.750000");
      Undly_17.add_attribute("StartVal", "UnderlyingStartValue_t_1917583261"); // 2
      Undly_17_set.insert("UnderlyingStartValue_t_1917583261");
      Undly_17.add_attribute("CurVal", "UnderlyingCurrentValue_t_1973417233"); // 2
      Undly_17_set.insert("UnderlyingCurrentValue_t_1973417233");
      Undly_17.add_attribute("EndVal", "UnderlyingEndValue_t_727159454"); // 2
      Undly_17_set.insert("UnderlyingEndValue_t_727159454");
      Undly_17.add_attribute("AdjQty", "17656537.750000"); // 2
      Undly_17_set.insert("17656537.750000");
      Undly_17.add_attribute("FxRate", "1294527.640000"); // 2
      Undly_17_set.insert("1294527.640000");
      Undly_17.add_attribute("FxRateCalc", "M"); // 2
      Undly_17_set.insert("M");
      Undly_17.add_attribute("CapValu", "UnderlyingCapValue_t_806861033"); // 2
      Undly_17_set.insert("UnderlyingCapValue_t_806861033");
      Undly_17.add_attribute("SetMeth", "UnderlyingSettlMethod_t_527489558"); // 2
      Undly_17_set.insert("UnderlyingSettlMethod_t_527489558");
      Undly_17.add_attribute("PutCall", "176633285"); // 2
      Undly_17_set.insert("176633285");
      all_values.push_back(Undly_17_set);
      all_compo_names.insert("Undly_17_set");

      {
        xml_element UndAID_17{"UndAID"};
        multiset<string> UndAID_17_set;
        UndAID_17.add_attribute("AltID", "UnderlyingSecurityAltID_t_652597649"); // 3
        UndAID_17_set.insert("UnderlyingSecurityAltID_t_652597649");
        UndAID_17.add_attribute("AltIDSrc", "5"); // 3
        UndAID_17_set.insert("5");
        all_values.push_back(UndAID_17_set);
        all_compo_names.insert("UndAID_17_set");

        Undly_17.add_element(UndAID_17);
      }
      {
        xml_element Stip_25{"Stip"};
        multiset<string> Stip_25_set;
        Stip_25.add_attribute("Typ", "AVSIZE"); // 3
        Stip_25_set.insert("AVSIZE");
        Stip_25.add_attribute("Val", "UnderlyingStipValue_t_1611138409"); // 3
        Stip_25_set.insert("UnderlyingStipValue_t_1611138409");
        all_values.push_back(Stip_25_set);
        all_compo_names.insert("Stip_25_set");

        Undly_17.add_element(Stip_25);
      }
      {
        xml_element Pty_98{"Pty"};
        multiset<string> Pty_98_set;
        Pty_98.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1773215751"); // 3
        Pty_98_set.insert("UnderlyingInstrumentPartyID_t_1773215751");
        Pty_98.add_attribute("Src", "B"); // 3
        Pty_98_set.insert("B");
        Pty_98.add_attribute("R", "4"); // 3
        Pty_98_set.insert("4");
        all_values.push_back(Pty_98_set);
        all_compo_names.insert("Pty_98_set");

        {
          xml_element Sub_98{"Sub"};
          multiset<string> Sub_98_set;
          Sub_98.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_79937427"); // 4
          Sub_98_set.insert("UnderlyingInstrumentPartySubID_t_79937427");
          Sub_98.add_attribute("Typ", "10"); // 4
          Sub_98_set.insert("10");
          all_values.push_back(Sub_98_set);
          all_compo_names.insert("Sub_98_set");

          Pty_98.add_element(Sub_98);
        }
        Undly_17.add_element(Pty_98);
      }
      UndColl_2.add_element(Undly_17);
    }
    elt.add_element(UndColl_2);
  } // end UndColl
  { // UndColl
    xml_element UndColl_3{"UndColl"};
    multiset<string> UndColl_3_set;
    UndColl_3.add_attribute("Actn", "1"); // 1
    UndColl_3_set.insert("1");
    all_values.push_back(UndColl_3_set);
    all_compo_names.insert("UndColl_3_set");

    {
      xml_element Undly_18{"Undly"};
      multiset<string> Undly_18_set;
      Undly_18.add_attribute("Sym", "UnderlyingSymbol_t_1500294025"); // 2
      Undly_18_set.insert("UnderlyingSymbol_t_1500294025");
      Undly_18.add_attribute("Sfx", "CD"); // 2
      Undly_18_set.insert("CD");
      Undly_18.add_attribute("ID", "UnderlyingSecurityID_t_811573462"); // 2
      Undly_18_set.insert("UnderlyingSecurityID_t_811573462");
      Undly_18.add_attribute("Src", "D"); // 2
      Undly_18_set.insert("D");
      Undly_18.add_attribute("Prod", "4"); // 2
      Undly_18_set.insert("4");
      Undly_18.add_attribute("CFI", "UnderlyingCFICode_t_1177200814"); // 2
      Undly_18_set.insert("UnderlyingCFICode_t_1177200814");
      Undly_18.add_attribute("SecTyp", "TD"); // 2
      Undly_18_set.insert("TD");
      Undly_18.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1942185661"); // 2
      Undly_18_set.insert("UnderlyingSecuritySubType_t_1942185661");
      Undly_18.add_attribute("MMY", "1025424242"); // 2
      Undly_18_set.insert("1025424242");
      Undly_18.add_attribute("Mat", "UnderlyingMaturityDate_t_491068308"); // 2
      Undly_18_set.insert("UnderlyingMaturityDate_t_491068308");
      Undly_18.add_attribute("MatTm", "1348224709"); // 2
      Undly_18_set.insert("1348224709");
      Undly_18.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1440578017"); // 2
      Undly_18_set.insert("UnderlyingCouponPaymentDate_t_1440578017");
      Undly_18.add_attribute("RestrctTyp", "MR"); // 2
      Undly_18_set.insert("MR");
      Undly_18.add_attribute("Snrty", "SD"); // 2
      Undly_18_set.insert("SD");
      Undly_18.add_attribute("NotlPctOut", "202538.240000"); // 2
      Undly_18_set.insert("202538.240000");
      Undly_18.add_attribute("OrigNotlPctOut", "20268216.960000"); // 2
      Undly_18_set.insert("20268216.960000");
      Undly_18.add_attribute("AttchPnt", "13036110.580000"); // 2
      Undly_18_set.insert("13036110.580000");
      Undly_18.add_attribute("DetchPnt", "19240556.840000"); // 2
      Undly_18_set.insert("19240556.840000");
      Undly_18.add_attribute("Issued", "UnderlyingIssueDate_t_686199081"); // 2
      Undly_18_set.insert("UnderlyingIssueDate_t_686199081");
      Undly_18.add_attribute("RepoCollSecTyp", "1831100616"); // 2
      Undly_18_set.insert("1831100616");
      Undly_18.add_attribute("RepoTrm", "2100688969"); // 2
      Undly_18_set.insert("2100688969");
      Undly_18.add_attribute("RepoRt", "13387967.310000"); // 2
      Undly_18_set.insert("13387967.310000");
      Undly_18.add_attribute("Fctr", "13822698.620000"); // 2
      Undly_18_set.insert("13822698.620000");
      Undly_18.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1511974102"); // 2
      Undly_18_set.insert("UnderlyingCreditRating_t_1511974102");
      Undly_18.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_802451492"); // 2
      Undly_18_set.insert("UnderlyingInstrRegistry_t_802451492");
      Undly_18.add_attribute("Ctry", "1008001966"); // 2
      Undly_18_set.insert("1008001966");
      Undly_18.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_290712594"); // 2
      Undly_18_set.insert("UnderlyingStateOrProvinceOfIssue_t_290712594");
      Undly_18.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1105602064"); // 2
      Undly_18_set.insert("UnderlyingLocaleOfIssue_t_1105602064");
      Undly_18.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1087939393"); // 2
      Undly_18_set.insert("UnderlyingRedemptionDate_t_1087939393");
      Undly_18.add_attribute("StrkPx", "6381125.710000"); // 2
      Undly_18_set.insert("6381125.710000");
      Undly_18.add_attribute("StrkCcy", "USD"); // 2
      Undly_18_set.insert("USD");
      Undly_18.add_attribute("OptA", "576631379"); // 2
      Undly_18_set.insert("576631379");
      Undly_18.add_attribute("Mult", "4408850.620000"); // 2
      Undly_18_set.insert("4408850.620000");
      Undly_18.add_attribute("MultTyp", "1"); // 2
      Undly_18_set.insert("1");
      Undly_18.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_18_set.insert("3");
      Undly_18.add_attribute("UOM", "tn"); // 2
      Undly_18_set.insert("tn");
      Undly_18.add_attribute("UOMQty", "8015837.780000"); // 2
      Undly_18_set.insert("8015837.780000");
      Undly_18.add_attribute("PxUOM", "USD"); // 2
      Undly_18_set.insert("USD");
      Undly_18.add_attribute("PxUOMQty", "4960264.710000"); // 2
      Undly_18_set.insert("4960264.710000");
      Undly_18.add_attribute("TmUnit", "Mo"); // 2
      Undly_18_set.insert("Mo");
      Undly_18.add_attribute("ExerStyle", "2"); // 2
      Undly_18_set.insert("2");
      Undly_18.add_attribute("CpnRt", "19366044.880000"); // 2
      Undly_18_set.insert("19366044.880000");
      Undly_18.add_attribute("Exch", "UnderlyingSecurityExchange_t_1553820007"); // 2
      Undly_18_set.insert("UnderlyingSecurityExchange_t_1553820007");
      Undly_18.add_attribute("Issr", "UnderlyingIssuer_t_1555881101"); // 2
      Undly_18_set.insert("UnderlyingIssuer_t_1555881101");
      Undly_18.add_attribute("EncUndIssrLen", "1956858312"); // 2
      Undly_18_set.insert("1956858312");
      Undly_18.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1433158055"); // 2
      Undly_18_set.insert("EncodedUnderlyingIssuer_t_1433158055");
      Undly_18.add_attribute("Desc", "UnderlyingSecurityDesc_t_712008511"); // 2
      Undly_18_set.insert("UnderlyingSecurityDesc_t_712008511");
      Undly_18.add_attribute("EncUndSecDescLen", "1733430348"); // 2
      Undly_18_set.insert("1733430348");
      Undly_18.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2119357137"); // 2
      Undly_18_set.insert("EncodedUnderlyingSecurityDesc_t_2119357137");
      Undly_18.add_attribute("CPPgm", "UnderlyingCPProgram_t_395625479"); // 2
      Undly_18_set.insert("UnderlyingCPProgram_t_395625479");
      Undly_18.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1686635670"); // 2
      Undly_18_set.insert("UnderlyingCPRegType_t_1686635670");
      Undly_18.add_attribute("AllocPct", "13106702.200000"); // 2
      Undly_18_set.insert("13106702.200000");
      Undly_18.add_attribute("Ccy", "GBP"); // 2
      Undly_18_set.insert("GBP");
      Undly_18.add_attribute("Qty", "21131217.120000"); // 2
      Undly_18_set.insert("21131217.120000");
      Undly_18.add_attribute("SettlTyp", "4"); // 2
      Undly_18_set.insert("4");
      Undly_18.add_attribute("CashAmt", "UnderlyingCashAmount_t_1341838719"); // 2
      Undly_18_set.insert("UnderlyingCashAmount_t_1341838719");
      Undly_18.add_attribute("CashTyp", "FIXED"); // 2
      Undly_18_set.insert("FIXED");
      Undly_18.add_attribute("Px", "17263530.530000"); // 2
      Undly_18_set.insert("17263530.530000");
      Undly_18.add_attribute("DirtPx", "19799512.900000"); // 2
      Undly_18_set.insert("19799512.900000");
      Undly_18.add_attribute("EndPx", "7005517.290000"); // 2
      Undly_18_set.insert("7005517.290000");
      Undly_18.add_attribute("StartVal", "UnderlyingStartValue_t_19619176"); // 2
      Undly_18_set.insert("UnderlyingStartValue_t_19619176");
      Undly_18.add_attribute("CurVal", "UnderlyingCurrentValue_t_409099022"); // 2
      Undly_18_set.insert("UnderlyingCurrentValue_t_409099022");
      Undly_18.add_attribute("EndVal", "UnderlyingEndValue_t_1141436791"); // 2
      Undly_18_set.insert("UnderlyingEndValue_t_1141436791");
      Undly_18.add_attribute("AdjQty", "5221070.960000"); // 2
      Undly_18_set.insert("5221070.960000");
      Undly_18.add_attribute("FxRate", "17953787.550000"); // 2
      Undly_18_set.insert("17953787.550000");
      Undly_18.add_attribute("FxRateCalc", "M"); // 2
      Undly_18_set.insert("M");
      Undly_18.add_attribute("CapValu", "UnderlyingCapValue_t_1323690875"); // 2
      Undly_18_set.insert("UnderlyingCapValue_t_1323690875");
      Undly_18.add_attribute("SetMeth", "UnderlyingSettlMethod_t_828876853"); // 2
      Undly_18_set.insert("UnderlyingSettlMethod_t_828876853");
      Undly_18.add_attribute("PutCall", "1108065491"); // 2
      Undly_18_set.insert("1108065491");
      all_values.push_back(Undly_18_set);
      all_compo_names.insert("Undly_18_set");

      {
        xml_element UndAID_18{"UndAID"};
        multiset<string> UndAID_18_set;
        UndAID_18.add_attribute("AltID", "UnderlyingSecurityAltID_t_468859313"); // 3
        UndAID_18_set.insert("UnderlyingSecurityAltID_t_468859313");
        UndAID_18.add_attribute("AltIDSrc", "8"); // 3
        UndAID_18_set.insert("8");
        all_values.push_back(UndAID_18_set);
        all_compo_names.insert("UndAID_18_set");

        Undly_18.add_element(UndAID_18);
      }
      {
        xml_element Stip_26{"Stip"};
        multiset<string> Stip_26_set;
        Stip_26.add_attribute("Typ", "HAIRCUT"); // 3
        Stip_26_set.insert("HAIRCUT");
        Stip_26.add_attribute("Val", "UnderlyingStipValue_t_2022679321"); // 3
        Stip_26_set.insert("UnderlyingStipValue_t_2022679321");
        all_values.push_back(Stip_26_set);
        all_compo_names.insert("Stip_26_set");

        Undly_18.add_element(Stip_26);
      }
      {
        xml_element Pty_99{"Pty"};
        multiset<string> Pty_99_set;
        Pty_99.add_attribute("ID", "UnderlyingInstrumentPartyID_t_618997114"); // 3
        Pty_99_set.insert("UnderlyingInstrumentPartyID_t_618997114");
        Pty_99.add_attribute("Src", "D"); // 3
        Pty_99_set.insert("D");
        Pty_99.add_attribute("R", "55"); // 3
        Pty_99_set.insert("55");
        all_values.push_back(Pty_99_set);
        all_compo_names.insert("Pty_99_set");

        {
          xml_element Sub_99{"Sub"};
          multiset<string> Sub_99_set;
          Sub_99.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1331005626"); // 4
          Sub_99_set.insert("UnderlyingInstrumentPartySubID_t_1331005626");
          Sub_99.add_attribute("Typ", "4"); // 4
          Sub_99_set.insert("4");
          all_values.push_back(Sub_99_set);
          all_compo_names.insert("Sub_99_set");

          Pty_99.add_element(Sub_99);
        }
        Undly_18.add_element(Pty_99);
      }
      UndColl_3.add_element(Undly_18);
    }
    elt.add_element(UndColl_3);
  } // end UndColl
  { // UndColl
    xml_element UndColl_4{"UndColl"};
    multiset<string> UndColl_4_set;
    UndColl_4.add_attribute("Actn", "2"); // 1
    UndColl_4_set.insert("2");
    all_values.push_back(UndColl_4_set);
    all_compo_names.insert("UndColl_4_set");

    {
      xml_element Undly_19{"Undly"};
      multiset<string> Undly_19_set;
      Undly_19.add_attribute("Sym", "UnderlyingSymbol_t_1726631105"); // 2
      Undly_19_set.insert("UnderlyingSymbol_t_1726631105");
      Undly_19.add_attribute("Sfx", "WI"); // 2
      Undly_19_set.insert("WI");
      Undly_19.add_attribute("ID", "UnderlyingSecurityID_t_443413789"); // 2
      Undly_19_set.insert("UnderlyingSecurityID_t_443413789");
      Undly_19.add_attribute("Src", "E"); // 2
      Undly_19_set.insert("E");
      Undly_19.add_attribute("Prod", "13"); // 2
      Undly_19_set.insert("13");
      Undly_19.add_attribute("CFI", "UnderlyingCFICode_t_409051854"); // 2
      Undly_19_set.insert("UnderlyingCFICode_t_409051854");
      Undly_19.add_attribute("SecTyp", "TMCP"); // 2
      Undly_19_set.insert("TMCP");
      Undly_19.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_77140914"); // 2
      Undly_19_set.insert("UnderlyingSecuritySubType_t_77140914");
      Undly_19.add_attribute("MMY", "1480291982"); // 2
      Undly_19_set.insert("1480291982");
      Undly_19.add_attribute("Mat", "UnderlyingMaturityDate_t_1574325865"); // 2
      Undly_19_set.insert("UnderlyingMaturityDate_t_1574325865");
      Undly_19.add_attribute("MatTm", "2057092205"); // 2
      Undly_19_set.insert("2057092205");
      Undly_19.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_33360063"); // 2
      Undly_19_set.insert("UnderlyingCouponPaymentDate_t_33360063");
      Undly_19.add_attribute("RestrctTyp", "MR"); // 2
      Undly_19_set.insert("MR");
      Undly_19.add_attribute("Snrty", "SB"); // 2
      Undly_19_set.insert("SB");
      Undly_19.add_attribute("NotlPctOut", "11747968.550000"); // 2
      Undly_19_set.insert("11747968.550000");
      Undly_19.add_attribute("OrigNotlPctOut", "21160521.370000"); // 2
      Undly_19_set.insert("21160521.370000");
      Undly_19.add_attribute("AttchPnt", "21140863.340000"); // 2
      Undly_19_set.insert("21140863.340000");
      Undly_19.add_attribute("DetchPnt", "17868358.750000"); // 2
      Undly_19_set.insert("17868358.750000");
      Undly_19.add_attribute("Issued", "UnderlyingIssueDate_t_1292259364"); // 2
      Undly_19_set.insert("UnderlyingIssueDate_t_1292259364");
      Undly_19.add_attribute("RepoCollSecTyp", "795479539"); // 2
      Undly_19_set.insert("795479539");
      Undly_19.add_attribute("RepoTrm", "747417719"); // 2
      Undly_19_set.insert("747417719");
      Undly_19.add_attribute("RepoRt", "17611186.780000"); // 2
      Undly_19_set.insert("17611186.780000");
      Undly_19.add_attribute("Fctr", "20060792.000000"); // 2
      Undly_19_set.insert("20060792.000000");
      Undly_19.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1644604051"); // 2
      Undly_19_set.insert("UnderlyingCreditRating_t_1644604051");
      Undly_19.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1636314351"); // 2
      Undly_19_set.insert("UnderlyingInstrRegistry_t_1636314351");
      Undly_19.add_attribute("Ctry", "477592667"); // 2
      Undly_19_set.insert("477592667");
      Undly_19.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_203681399"); // 2
      Undly_19_set.insert("UnderlyingStateOrProvinceOfIssue_t_203681399");
      Undly_19.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_797184431"); // 2
      Undly_19_set.insert("UnderlyingLocaleOfIssue_t_797184431");
      Undly_19.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1808598293"); // 2
      Undly_19_set.insert("UnderlyingRedemptionDate_t_1808598293");
      Undly_19.add_attribute("StrkPx", "4961890.960000"); // 2
      Undly_19_set.insert("4961890.960000");
      Undly_19.add_attribute("StrkCcy", "GBP"); // 2
      Undly_19_set.insert("GBP");
      Undly_19.add_attribute("OptA", "327848815"); // 2
      Undly_19_set.insert("327848815");
      Undly_19.add_attribute("Mult", "3733417.900000"); // 2
      Undly_19_set.insert("3733417.900000");
      Undly_19.add_attribute("MultTyp", "0"); // 2
      Undly_19_set.insert("0");
      Undly_19.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_19_set.insert("4");
      Undly_19.add_attribute("UOM", "MMbbl"); // 2
      Undly_19_set.insert("MMbbl");
      Undly_19.add_attribute("UOMQty", "4452777.130000"); // 2
      Undly_19_set.insert("4452777.130000");
      Undly_19.add_attribute("PxUOM", "MMbbl"); // 2
      Undly_19_set.insert("MMbbl");
      Undly_19.add_attribute("PxUOMQty", "1152019.790000"); // 2
      Undly_19_set.insert("1152019.790000");
      Undly_19.add_attribute("TmUnit", "Yr"); // 2
      Undly_19_set.insert("Yr");
      Undly_19.add_attribute("ExerStyle", "1"); // 2
      Undly_19_set.insert("1");
      Undly_19.add_attribute("CpnRt", "1485620.420000"); // 2
      Undly_19_set.insert("1485620.420000");
      Undly_19.add_attribute("Exch", "UnderlyingSecurityExchange_t_1466064971"); // 2
      Undly_19_set.insert("UnderlyingSecurityExchange_t_1466064971");
      Undly_19.add_attribute("Issr", "UnderlyingIssuer_t_1516091709"); // 2
      Undly_19_set.insert("UnderlyingIssuer_t_1516091709");
      Undly_19.add_attribute("EncUndIssrLen", "1323358897"); // 2
      Undly_19_set.insert("1323358897");
      Undly_19.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1434633461"); // 2
      Undly_19_set.insert("EncodedUnderlyingIssuer_t_1434633461");
      Undly_19.add_attribute("Desc", "UnderlyingSecurityDesc_t_1482694395"); // 2
      Undly_19_set.insert("UnderlyingSecurityDesc_t_1482694395");
      Undly_19.add_attribute("EncUndSecDescLen", "962711125"); // 2
      Undly_19_set.insert("962711125");
      Undly_19.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_579409177"); // 2
      Undly_19_set.insert("EncodedUnderlyingSecurityDesc_t_579409177");
      Undly_19.add_attribute("CPPgm", "UnderlyingCPProgram_t_130690287"); // 2
      Undly_19_set.insert("UnderlyingCPProgram_t_130690287");
      Undly_19.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1710128844"); // 2
      Undly_19_set.insert("UnderlyingCPRegType_t_1710128844");
      Undly_19.add_attribute("AllocPct", "1930442.070000"); // 2
      Undly_19_set.insert("1930442.070000");
      Undly_19.add_attribute("Ccy", "CAN"); // 2
      Undly_19_set.insert("CAN");
      Undly_19.add_attribute("Qty", "18293585.580000"); // 2
      Undly_19_set.insert("18293585.580000");
      Undly_19.add_attribute("SettlTyp", "5"); // 2
      Undly_19_set.insert("5");
      Undly_19.add_attribute("CashAmt", "UnderlyingCashAmount_t_1410930646"); // 2
      Undly_19_set.insert("UnderlyingCashAmount_t_1410930646");
      Undly_19.add_attribute("CashTyp", "FIXED"); // 2
      Undly_19_set.insert("FIXED");
      Undly_19.add_attribute("Px", "1279931.510000"); // 2
      Undly_19_set.insert("1279931.510000");
      Undly_19.add_attribute("DirtPx", "19071197.430000"); // 2
      Undly_19_set.insert("19071197.430000");
      Undly_19.add_attribute("EndPx", "4089873.430000"); // 2
      Undly_19_set.insert("4089873.430000");
      Undly_19.add_attribute("StartVal", "UnderlyingStartValue_t_1515738902"); // 2
      Undly_19_set.insert("UnderlyingStartValue_t_1515738902");
      Undly_19.add_attribute("CurVal", "UnderlyingCurrentValue_t_87484910"); // 2
      Undly_19_set.insert("UnderlyingCurrentValue_t_87484910");
      Undly_19.add_attribute("EndVal", "UnderlyingEndValue_t_782329133"); // 2
      Undly_19_set.insert("UnderlyingEndValue_t_782329133");
      Undly_19.add_attribute("AdjQty", "21130438.040000"); // 2
      Undly_19_set.insert("21130438.040000");
      Undly_19.add_attribute("FxRate", "12981195.690000"); // 2
      Undly_19_set.insert("12981195.690000");
      Undly_19.add_attribute("FxRateCalc", "M"); // 2
      Undly_19_set.insert("M");
      Undly_19.add_attribute("CapValu", "UnderlyingCapValue_t_410837869"); // 2
      Undly_19_set.insert("UnderlyingCapValue_t_410837869");
      Undly_19.add_attribute("SetMeth", "UnderlyingSettlMethod_t_438411495"); // 2
      Undly_19_set.insert("UnderlyingSettlMethod_t_438411495");
      Undly_19.add_attribute("PutCall", "1679924757"); // 2
      Undly_19_set.insert("1679924757");
      all_values.push_back(Undly_19_set);
      all_compo_names.insert("Undly_19_set");

      {
        xml_element UndAID_19{"UndAID"};
        multiset<string> UndAID_19_set;
        UndAID_19.add_attribute("AltID", "UnderlyingSecurityAltID_t_282957800"); // 3
        UndAID_19_set.insert("UnderlyingSecurityAltID_t_282957800");
        UndAID_19.add_attribute("AltIDSrc", "E"); // 3
        UndAID_19_set.insert("E");
        all_values.push_back(UndAID_19_set);
        all_compo_names.insert("UndAID_19_set");

        Undly_19.add_element(UndAID_19);
      }
      {
        xml_element Stip_27{"Stip"};
        multiset<string> Stip_27_set;
        Stip_27.add_attribute("Typ", "YTM"); // 3
        Stip_27_set.insert("YTM");
        Stip_27.add_attribute("Val", "UnderlyingStipValue_t_1749022771"); // 3
        Stip_27_set.insert("UnderlyingStipValue_t_1749022771");
        all_values.push_back(Stip_27_set);
        all_compo_names.insert("Stip_27_set");

        Undly_19.add_element(Stip_27);
      }
      {
        xml_element Pty_100{"Pty"};
        multiset<string> Pty_100_set;
        Pty_100.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1004403687"); // 3
        Pty_100_set.insert("UnderlyingInstrumentPartyID_t_1004403687");
        Pty_100.add_attribute("Src", "C"); // 3
        Pty_100_set.insert("C");
        Pty_100.add_attribute("R", "78"); // 3
        Pty_100_set.insert("78");
        all_values.push_back(Pty_100_set);
        all_compo_names.insert("Pty_100_set");

        {
          xml_element Sub_100{"Sub"};
          multiset<string> Sub_100_set;
          Sub_100.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_339614434"); // 4
          Sub_100_set.insert("UnderlyingInstrumentPartySubID_t_339614434");
          Sub_100.add_attribute("Typ", "1"); // 4
          Sub_100_set.insert("1");
          all_values.push_back(Sub_100_set);
          all_compo_names.insert("Sub_100_set");

          Pty_100.add_element(Sub_100);
        }
        Undly_19.add_element(Pty_100);
      }
      UndColl_4.add_element(Undly_19);
    }
    elt.add_element(UndColl_4);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_5{"TrdRegTS"};
    multiset<string> TrdRegTS_5_set;
    TrdRegTS_5.add_attribute("TS", "TrdRegTimestamp_t_470304721"); // 1
    TrdRegTS_5_set.insert("TrdRegTimestamp_t_470304721");
    TrdRegTS_5.add_attribute("Typ", "6"); // 1
    TrdRegTS_5_set.insert("6");
    TrdRegTS_5.add_attribute("Src", "TrdRegTimestampOrigin_t_1808625969"); // 1
    TrdRegTS_5_set.insert("TrdRegTimestampOrigin_t_1808625969");
    TrdRegTS_5.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_5_set.insert("AR");
    TrdRegTS_5.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_5_set.insert("1");
    TrdRegTS_5.add_attribute("DskOrdHndlInst", "LOO"); // 1
    TrdRegTS_5_set.insert("LOO");
    all_values.push_back(TrdRegTS_5_set);
    all_compo_names.insert("TrdRegTS_5_set");

    elt.add_element(TrdRegTS_5);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_12{"MiscFees"};
    multiset<string> MiscFees_12_set;
    MiscFees_12.add_attribute("Amt", "MiscFeeAmt_t_2000414615"); // 1
    MiscFees_12_set.insert("MiscFeeAmt_t_2000414615");
    MiscFees_12.add_attribute("Curr", "EUR"); // 1
    MiscFees_12_set.insert("EUR");
    MiscFees_12.add_attribute("Typ", "13"); // 1
    MiscFees_12_set.insert("13");
    MiscFees_12.add_attribute("Basis", "2"); // 1
    MiscFees_12_set.insert("2");
    all_values.push_back(MiscFees_12_set);
    all_compo_names.insert("MiscFees_12_set");

    elt.add_element(MiscFees_12);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_13{"MiscFees"};
    multiset<string> MiscFees_13_set;
    MiscFees_13.add_attribute("Amt", "MiscFeeAmt_t_422717473"); // 1
    MiscFees_13_set.insert("MiscFeeAmt_t_422717473");
    MiscFees_13.add_attribute("Curr", "JPY"); // 1
    MiscFees_13_set.insert("JPY");
    MiscFees_13.add_attribute("Typ", "3"); // 1
    MiscFees_13_set.insert("3");
    MiscFees_13.add_attribute("Basis", "1"); // 1
    MiscFees_13_set.insert("1");
    all_values.push_back(MiscFees_13_set);
    all_compo_names.insert("MiscFees_13_set");

    elt.add_element(MiscFees_13);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_6{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_6_set;
    SprdBnchmkCurve_6.add_attribute("Spread", "4306321.800000"); // 1
    SprdBnchmkCurve_6_set.insert("4306321.800000");
    SprdBnchmkCurve_6.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_6_set.insert("EUR");
    SprdBnchmkCurve_6.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_6_set.insert("SONIA");
    SprdBnchmkCurve_6.add_attribute("Point", "BenchmarkCurvePoint_t_1082073298"); // 1
    SprdBnchmkCurve_6_set.insert("BenchmarkCurvePoint_t_1082073298");
    SprdBnchmkCurve_6.add_attribute("Px", "9248950.150000"); // 1
    SprdBnchmkCurve_6_set.insert("9248950.150000");
    SprdBnchmkCurve_6.add_attribute("PxTyp", "10"); // 1
    SprdBnchmkCurve_6_set.insert("10");
    SprdBnchmkCurve_6.add_attribute("SecID", "BenchmarkSecurityID_t_683612422"); // 1
    SprdBnchmkCurve_6_set.insert("BenchmarkSecurityID_t_683612422");
    SprdBnchmkCurve_6.add_attribute("SecIDSrc", "D"); // 1
    SprdBnchmkCurve_6_set.insert("D");
    all_values.push_back(SprdBnchmkCurve_6_set);
    all_compo_names.insert("SprdBnchmkCurve_6_set");

    elt.add_element(SprdBnchmkCurve_6);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_28{"Stip"};
    multiset<string> Stip_28_set;
    Stip_28.add_attribute("Typ", "SECTOR"); // 1
    Stip_28_set.insert("SECTOR");
    Stip_28.add_attribute("Val", "StipulationValue_t_121429488"); // 1
    Stip_28_set.insert("StipulationValue_t_121429488");
    all_values.push_back(Stip_28_set);
    all_compo_names.insert("Stip_28_set");

    elt.add_element(Stip_28);
  } // end Stip
  { // Stip
    xml_element Stip_29{"Stip"};
    multiset<string> Stip_29_set;
    Stip_29.add_attribute("Typ", "ISSUER"); // 1
    Stip_29_set.insert("ISSUER");
    Stip_29.add_attribute("Val", "StipulationValue_t_1187883120"); // 1
    Stip_29_set.insert("StipulationValue_t_1187883120");
    all_values.push_back(Stip_29_set);
    all_compo_names.insert("Stip_29_set");

    elt.add_element(Stip_29);
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
