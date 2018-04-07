#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CollateralResponse.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CollateralResponse_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollRsp" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralResponse_message_t_0;
  elt.add_attribute("RespID", "CollRespID_t_591734210"); // 0
  CollateralResponse_message_t_0.insert("CollRespID_t_591734210");
  elt.add_attribute("ID", "CollAsgnID_t_1997746386"); // 0
  CollateralResponse_message_t_0.insert("CollAsgnID_t_1997746386");
  elt.add_attribute("ReqID", "CollReqID_t_849025442"); // 0
  CollateralResponse_message_t_0.insert("CollReqID_t_849025442");
  elt.add_attribute("AsgnRsn", "3"); // 0
  CollateralResponse_message_t_0.insert("3");
  elt.add_attribute("TransTyp", "2"); // 0
  CollateralResponse_message_t_0.insert("2");
  elt.add_attribute("RespTyp", "2"); // 0
  CollateralResponse_message_t_0.insert("2");
  elt.add_attribute("RejRsn", "99"); // 0
  CollateralResponse_message_t_0.insert("99");
  elt.add_attribute("TxnTm", "TransactTime_t_292677674"); // 0
  CollateralResponse_message_t_0.insert("TransactTime_t_292677674");
  elt.add_attribute("ApplTyp", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("FinclStat", "2"); // 0
  CollateralResponse_message_t_0.insert("2");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2052728385"); // 0
  CollateralResponse_message_t_0.insert("ClearingBusinessDate_t_2052728385");
  elt.add_attribute("Acct", "Account_t_245183165"); // 0
  CollateralResponse_message_t_0.insert("Account_t_245183165");
  elt.add_attribute("AcctTyp", "8"); // 0
  CollateralResponse_message_t_0.insert("8");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1752780358"); // 0
  CollateralResponse_message_t_0.insert("ClOrdID_t_1752780358");
  elt.add_attribute("OrdID", "OrderID_t_1258576215"); // 0
  CollateralResponse_message_t_0.insert("OrderID_t_1258576215");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_1695767511"); // 0
  CollateralResponse_message_t_0.insert("SecondaryOrderID_t_1695767511");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_603468252"); // 0
  CollateralResponse_message_t_0.insert("SecondaryClOrdID_t_603468252");
  elt.add_attribute("SettlDt", "SettlDate_t_1689208396"); // 0
  CollateralResponse_message_t_0.insert("SettlDate_t_1689208396");
  elt.add_attribute("Qty", "3473993.620000"); // 0
  CollateralResponse_message_t_0.insert("3473993.620000");
  elt.add_attribute("QtyTyp", "2"); // 0
  CollateralResponse_message_t_0.insert("2");
  elt.add_attribute("Ccy", "GBP"); // 0
  CollateralResponse_message_t_0.insert("GBP");
  elt.add_attribute("MgnExcess", "MarginExcess_t_817462657"); // 0
  CollateralResponse_message_t_0.insert("MarginExcess_t_817462657");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1296358126"); // 0
  CollateralResponse_message_t_0.insert("TotalNetValue_t_1296358126");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_2113085082"); // 0
  CollateralResponse_message_t_0.insert("CashOutstanding_t_2113085082");
  elt.add_attribute("Side", "G"); // 0
  CollateralResponse_message_t_0.insert("G");
  elt.add_attribute("Px", "19447966.160000"); // 0
  CollateralResponse_message_t_0.insert("19447966.160000");
  elt.add_attribute("PxTyp", "10"); // 0
  CollateralResponse_message_t_0.insert("10");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_720707199"); // 0
  CollateralResponse_message_t_0.insert("AccruedInterestAmt_t_720707199");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_265340984"); // 0
  CollateralResponse_message_t_0.insert("EndAccruedInterestAmt_t_265340984");
  elt.add_attribute("StartCsh", "StartCash_t_725785913"); // 0
  CollateralResponse_message_t_0.insert("StartCash_t_725785913");
  elt.add_attribute("EndCsh", "EndCash_t_1312441409"); // 0
  CollateralResponse_message_t_0.insert("EndCash_t_1312441409");
  elt.add_attribute("Txt", "Text_t_115603722"); // 0
  CollateralResponse_message_t_0.insert("Text_t_115603722");
  elt.add_attribute("EncTxtLen", "1574811355"); // 0
  CollateralResponse_message_t_0.insert("1574811355");
  elt.add_attribute("EncTxt", "EncodedText_t_216282532"); // 0
  CollateralResponse_message_t_0.insert("EncodedText_t_216282532");
  all_values.push_back(CollateralResponse_message_t_0);
  all_compo_names.insert("CollateralResponse_message_t");

  { // Hdr
    xml_element Hdr_19{"Hdr"};
    multiset<string> Hdr_19_set;
    Hdr_19.add_attribute("SeqNum", "555350429"); // 1
    Hdr_19_set.insert("555350429");
    Hdr_19.add_attribute("SID", "SenderCompID_t_1766854029"); // 1
    Hdr_19_set.insert("SenderCompID_t_1766854029");
    Hdr_19.add_attribute("TID", "TargetCompID_t_46592723"); // 1
    Hdr_19_set.insert("TargetCompID_t_46592723");
    Hdr_19.add_attribute("OBID", "OnBehalfOfCompID_t_848028104"); // 1
    Hdr_19_set.insert("OnBehalfOfCompID_t_848028104");
    Hdr_19.add_attribute("D2ID", "DeliverToCompID_t_1780973277"); // 1
    Hdr_19_set.insert("DeliverToCompID_t_1780973277");
    Hdr_19.add_attribute("SSub", "SenderSubID_t_931365132"); // 1
    Hdr_19_set.insert("SenderSubID_t_931365132");
    Hdr_19.add_attribute("SLoc", "SenderLocationID_t_753272841"); // 1
    Hdr_19_set.insert("SenderLocationID_t_753272841");
    Hdr_19.add_attribute("TSub", "TargetSubID_t_2026156442"); // 1
    Hdr_19_set.insert("TargetSubID_t_2026156442");
    Hdr_19.add_attribute("TLoc", "TargetLocationID_t_91371367"); // 1
    Hdr_19_set.insert("TargetLocationID_t_91371367");
    Hdr_19.add_attribute("OBSub", "OnBehalfOfSubID_t_358569551"); // 1
    Hdr_19_set.insert("OnBehalfOfSubID_t_358569551");
    Hdr_19.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1137249010"); // 1
    Hdr_19_set.insert("OnBehalfOfLocationID_t_1137249010");
    Hdr_19.add_attribute("D2Sub", "DeliverToSubID_t_1787138878"); // 1
    Hdr_19_set.insert("DeliverToSubID_t_1787138878");
    Hdr_19.add_attribute("D2Loc", "DeliverToLocationID_t_962037803"); // 1
    Hdr_19_set.insert("DeliverToLocationID_t_962037803");
    Hdr_19.add_attribute("PosDup", "N"); // 1
    Hdr_19_set.insert("N");
    Hdr_19.add_attribute("PosRsnd", "N"); // 1
    Hdr_19_set.insert("N");
    Hdr_19.add_attribute("Snt", "SendingTime_t_854605445"); // 1
    Hdr_19_set.insert("SendingTime_t_854605445");
    Hdr_19.add_attribute("OrigSnt", "OrigSendingTime_t_183771795"); // 1
    Hdr_19_set.insert("OrigSendingTime_t_183771795");
    Hdr_19.add_attribute("MsgEncd", "MessageEncoding_t_1416527253"); // 1
    Hdr_19_set.insert("MessageEncoding_t_1416527253");
    all_values.push_back(Hdr_19_set);
    all_compo_names.insert("Hdr_19_set");

    {
      xml_element Hop_19{"Hop"};
      multiset<string> Hop_19_set;
      Hop_19.add_attribute("ID", "HopCompID_t_1672068102"); // 2
      Hop_19_set.insert("HopCompID_t_1672068102");
      Hop_19.add_attribute("Ref", "1480129922"); // 2
      Hop_19_set.insert("1480129922");
      Hop_19.add_attribute("Snt", "HopSendingTime_t_1382128687"); // 2
      Hop_19_set.insert("HopSendingTime_t_1382128687");
      all_values.push_back(Hop_19_set);
      all_compo_names.insert("Hop_19_set");

      Hdr_19.add_element(Hop_19);
    }
    elt.add_element(Hdr_19);
  } // end Hdr
  { // Pty
    xml_element Pty_101{"Pty"};
    multiset<string> Pty_101_set;
    Pty_101.add_attribute("ID", "PartyID_t_1277442890"); // 1
    Pty_101_set.insert("PartyID_t_1277442890");
    Pty_101.add_attribute("Src", "1"); // 1
    Pty_101_set.insert("1");
    Pty_101.add_attribute("R", "26"); // 1
    Pty_101_set.insert("26");
    all_values.push_back(Pty_101_set);
    all_compo_names.insert("Pty_101_set");

    {
      xml_element Sub_101{"Sub"};
      multiset<string> Sub_101_set;
      Sub_101.add_attribute("ID", "PartySubID_t_1542783875"); // 2
      Sub_101_set.insert("PartySubID_t_1542783875");
      Sub_101.add_attribute("Typ", "20"); // 2
      Sub_101_set.insert("20");
      all_values.push_back(Sub_101_set);
      all_compo_names.insert("Sub_101_set");

      Pty_101.add_element(Sub_101);
    }
    elt.add_element(Pty_101);
  } // end Pty
  { // Pty
    xml_element Pty_102{"Pty"};
    multiset<string> Pty_102_set;
    Pty_102.add_attribute("ID", "PartyID_t_9527126"); // 1
    Pty_102_set.insert("PartyID_t_9527126");
    Pty_102.add_attribute("Src", "6"); // 1
    Pty_102_set.insert("6");
    Pty_102.add_attribute("R", "79"); // 1
    Pty_102_set.insert("79");
    all_values.push_back(Pty_102_set);
    all_compo_names.insert("Pty_102_set");

    {
      xml_element Sub_102{"Sub"};
      multiset<string> Sub_102_set;
      Sub_102.add_attribute("ID", "PartySubID_t_225809659"); // 2
      Sub_102_set.insert("PartySubID_t_225809659");
      Sub_102.add_attribute("Typ", "23"); // 2
      Sub_102_set.insert("23");
      all_values.push_back(Sub_102_set);
      all_compo_names.insert("Sub_102_set");

      Pty_102.add_element(Sub_102);
    }
    elt.add_element(Pty_102);
  } // end Pty
  { // CollExc
    xml_element CollExc_12{"CollExc"};
    multiset<string> CollExc_12_set;
    CollExc_12.add_attribute("ExecID", "ExecID_t_272402382"); // 1
    CollExc_12_set.insert("ExecID_t_272402382");
    all_values.push_back(CollExc_12_set);
    all_compo_names.insert("CollExc_12_set");

    elt.add_element(CollExc_12);
  } // end CollExc
  { // CollExc
    xml_element CollExc_13{"CollExc"};
    multiset<string> CollExc_13_set;
    CollExc_13.add_attribute("ExecID", "ExecID_t_914282483"); // 1
    CollExc_13_set.insert("ExecID_t_914282483");
    all_values.push_back(CollExc_13_set);
    all_compo_names.insert("CollExc_13_set");

    elt.add_element(CollExc_13);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_11{"TrdColl"};
    multiset<string> TrdColl_11_set;
    TrdColl_11.add_attribute("RptID", "TradeReportID_t_1203767514"); // 1
    TrdColl_11_set.insert("TradeReportID_t_1203767514");
    TrdColl_11.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1667555324"); // 1
    TrdColl_11_set.insert("SecondaryTradeReportID_t_1667555324");
    all_values.push_back(TrdColl_11_set);
    all_compo_names.insert("TrdColl_11_set");

    elt.add_element(TrdColl_11);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_12{"TrdColl"};
    multiset<string> TrdColl_12_set;
    TrdColl_12.add_attribute("RptID", "TradeReportID_t_204677907"); // 1
    TrdColl_12_set.insert("TradeReportID_t_204677907");
    TrdColl_12.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1295138881"); // 1
    TrdColl_12_set.insert("SecondaryTradeReportID_t_1295138881");
    all_values.push_back(TrdColl_12_set);
    all_compo_names.insert("TrdColl_12_set");

    elt.add_element(TrdColl_12);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_13{"TrdColl"};
    multiset<string> TrdColl_13_set;
    TrdColl_13.add_attribute("RptID", "TradeReportID_t_2026124875"); // 1
    TrdColl_13_set.insert("TradeReportID_t_2026124875");
    TrdColl_13.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1341926917"); // 1
    TrdColl_13_set.insert("SecondaryTradeReportID_t_1341926917");
    all_values.push_back(TrdColl_13_set);
    all_compo_names.insert("TrdColl_13_set");

    elt.add_element(TrdColl_13);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_13{"Instrmt"};
    multiset<string> Instrmt_13_set;
    Instrmt_13.add_attribute("Sym", "Symbol_t_934794112"); // 1
    Instrmt_13_set.insert("Symbol_t_934794112");
    Instrmt_13.add_attribute("Sfx", "CD"); // 1
    Instrmt_13_set.insert("CD");
    Instrmt_13.add_attribute("ID", "SecurityID_t_2020900675"); // 1
    Instrmt_13_set.insert("SecurityID_t_2020900675");
    Instrmt_13.add_attribute("Src", "J"); // 1
    Instrmt_13_set.insert("J");
    Instrmt_13.add_attribute("Prod", "11"); // 1
    Instrmt_13_set.insert("11");
    Instrmt_13.add_attribute("ProdCmplx", "ProductComplex_t_57188822"); // 1
    Instrmt_13_set.insert("ProductComplex_t_57188822");
    Instrmt_13.add_attribute("SecGrp", "SecurityGroup_t_190892309"); // 1
    Instrmt_13_set.insert("SecurityGroup_t_190892309");
    Instrmt_13.add_attribute("CFI", "CFICode_t_1219868930"); // 1
    Instrmt_13_set.insert("CFICode_t_1219868930");
    Instrmt_13.add_attribute("SecTyp", "TLQN"); // 1
    Instrmt_13_set.insert("TLQN");
    Instrmt_13.add_attribute("SubTyp", "SecuritySubType_t_1573020997"); // 1
    Instrmt_13_set.insert("SecuritySubType_t_1573020997");
    Instrmt_13.add_attribute("MMY", "1343731096"); // 1
    Instrmt_13_set.insert("1343731096");
    Instrmt_13.add_attribute("MatDt", "MaturityDate_t_667277987"); // 1
    Instrmt_13_set.insert("MaturityDate_t_667277987");
    Instrmt_13.add_attribute("MatTm", "345568829"); // 1
    Instrmt_13_set.insert("345568829");
    Instrmt_13.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_40816813"); // 1
    Instrmt_13_set.insert("SettleOnOpenFlag_t_40816813");
    Instrmt_13.add_attribute("AsgnMeth", "62578214"); // 1
    Instrmt_13_set.insert("62578214");
    Instrmt_13.add_attribute("Status", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("CpnPmt", "CouponPaymentDate_t_50343939"); // 1
    Instrmt_13_set.insert("CouponPaymentDate_t_50343939");
    Instrmt_13.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_13_set.insert("XR");
    Instrmt_13.add_attribute("Snrty", "SD"); // 1
    Instrmt_13_set.insert("SD");
    Instrmt_13.add_attribute("NotlPctOut", "2761535.980000"); // 1
    Instrmt_13_set.insert("2761535.980000");
    Instrmt_13.add_attribute("OrigNotlPctOut", "17872201.900000"); // 1
    Instrmt_13_set.insert("17872201.900000");
    Instrmt_13.add_attribute("AttchPnt", "16095631.600000"); // 1
    Instrmt_13_set.insert("16095631.600000");
    Instrmt_13.add_attribute("DetchPnt", "5485559.800000"); // 1
    Instrmt_13_set.insert("5485559.800000");
    Instrmt_13.add_attribute("Issued", "IssueDate_t_554019025"); // 1
    Instrmt_13_set.insert("IssueDate_t_554019025");
    Instrmt_13.add_attribute("RepoCollSecTyp", "1935568272"); // 1
    Instrmt_13_set.insert("1935568272");
    Instrmt_13.add_attribute("RepoTrm", "1752323495"); // 1
    Instrmt_13_set.insert("1752323495");
    Instrmt_13.add_attribute("RepoRt", "740907.010000"); // 1
    Instrmt_13_set.insert("740907.010000");
    Instrmt_13.add_attribute("Fctr", "21402461.790000"); // 1
    Instrmt_13_set.insert("21402461.790000");
    Instrmt_13.add_attribute("CrdRtg", "CreditRating_t_899978728"); // 1
    Instrmt_13_set.insert("CreditRating_t_899978728");
    Instrmt_13.add_attribute("Rgstry", "InstrRegistry_t_2100215576"); // 1
    Instrmt_13_set.insert("InstrRegistry_t_2100215576");
    Instrmt_13.add_attribute("IssuCtry", "1334689448"); // 1
    Instrmt_13_set.insert("1334689448");
    Instrmt_13.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1834772840"); // 1
    Instrmt_13_set.insert("StateOrProvinceOfIssue_t_1834772840");
    Instrmt_13.add_attribute("Lcl", "LocaleOfIssue_t_793410959"); // 1
    Instrmt_13_set.insert("LocaleOfIssue_t_793410959");
    Instrmt_13.add_attribute("Redeem", "RedemptionDate_t_1208106475"); // 1
    Instrmt_13_set.insert("RedemptionDate_t_1208106475");
    Instrmt_13.add_attribute("StrkPx", "6091378.970000"); // 1
    Instrmt_13_set.insert("6091378.970000");
    Instrmt_13.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_13_set.insert("JPY");
    Instrmt_13.add_attribute("StrkMult", "8000302.060000"); // 1
    Instrmt_13_set.insert("8000302.060000");
    Instrmt_13.add_attribute("StrkValu", "15610807.170000"); // 1
    Instrmt_13_set.insert("15610807.170000");
    Instrmt_13.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_13_set.insert("3");
    Instrmt_13.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("StrkPxBndryPrcsn", "7573281.650000"); // 1
    Instrmt_13_set.insert("7573281.650000");
    Instrmt_13.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("OptAt", "571136385"); // 1
    Instrmt_13_set.insert("571136385");
    Instrmt_13.add_attribute("Mult", "7981449.780000"); // 1
    Instrmt_13_set.insert("7981449.780000");
    Instrmt_13.add_attribute("MultTyp", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("MinPxIncr", "8484889.180000"); // 1
    Instrmt_13_set.insert("8484889.180000");
    Instrmt_13.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_958468759"); // 1
    Instrmt_13_set.insert("MinPriceIncrementAmount_t_958468759");
    Instrmt_13.add_attribute("UOM", "Bu"); // 1
    Instrmt_13_set.insert("Bu");
    Instrmt_13.add_attribute("UOMQty", "11246425.160000"); // 1
    Instrmt_13_set.insert("11246425.160000");
    Instrmt_13.add_attribute("PxUOM", "tn"); // 1
    Instrmt_13_set.insert("tn");
    Instrmt_13.add_attribute("PxUOMQty", "7941661.490000"); // 1
    Instrmt_13_set.insert("7941661.490000");
    Instrmt_13.add_attribute("SettlMeth", "P"); // 1
    Instrmt_13_set.insert("P");
    Instrmt_13.add_attribute("ExerStyle", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("OptPayAmt", "OptPayoutAmount_t_1278038344"); // 1
    Instrmt_13_set.insert("OptPayoutAmount_t_1278038344");
    Instrmt_13.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_13_set.insert("STD");
    Instrmt_13.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_13_set.insert("EQTY");
    Instrmt_13.add_attribute("ListMeth", "0"); // 1
    Instrmt_13_set.insert("0");
    Instrmt_13.add_attribute("CapPx", "11790469.570000"); // 1
    Instrmt_13_set.insert("11790469.570000");
    Instrmt_13.add_attribute("FlrPx", "19097027.540000"); // 1
    Instrmt_13_set.insert("19097027.540000");
    Instrmt_13.add_attribute("PutCall", "1"); // 1
    Instrmt_13_set.insert("1");
    Instrmt_13.add_attribute("FlexInd", "true"); // 1
    Instrmt_13_set.insert("true");
    Instrmt_13.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_13_set.insert("false");
    Instrmt_13.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_13_set.insert("Yr");
    Instrmt_13.add_attribute("CpnRt", "1661860.550000"); // 1
    Instrmt_13_set.insert("1661860.550000");
    Instrmt_13.add_attribute("Exch", "SecurityExchange_t_88137231"); // 1
    Instrmt_13_set.insert("SecurityExchange_t_88137231");
    Instrmt_13.add_attribute("PosLmt", "1126990720"); // 1
    Instrmt_13_set.insert("1126990720");
    Instrmt_13.add_attribute("NTPosLmt", "1727266772"); // 1
    Instrmt_13_set.insert("1727266772");
    Instrmt_13.add_attribute("Issr", "Issuer_t_743267626"); // 1
    Instrmt_13_set.insert("Issuer_t_743267626");
    Instrmt_13.add_attribute("EncIssrLen", "1352558276"); // 1
    Instrmt_13_set.insert("1352558276");
    Instrmt_13.add_attribute("EncIssr", "EncodedIssuer_t_337111290"); // 1
    Instrmt_13_set.insert("EncodedIssuer_t_337111290");
    Instrmt_13.add_attribute("Desc", "SecurityDesc_t_2065676007"); // 1
    Instrmt_13_set.insert("SecurityDesc_t_2065676007");
    Instrmt_13.add_attribute("EncSecDescLen", "1923694661"); // 1
    Instrmt_13_set.insert("1923694661");
    Instrmt_13.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1135256268"); // 1
    Instrmt_13_set.insert("EncodedSecurityDesc_t_1135256268");
    Instrmt_13.add_attribute("Pool", "Pool_t_1303178955"); // 1
    Instrmt_13_set.insert("Pool_t_1303178955");
    Instrmt_13.add_attribute("CSetMo", "191249973"); // 1
    Instrmt_13_set.insert("191249973");
    Instrmt_13.add_attribute("CPPgm", "2"); // 1
    Instrmt_13_set.insert("2");
    Instrmt_13.add_attribute("CPRegT", "CPRegType_t_114164066"); // 1
    Instrmt_13_set.insert("CPRegType_t_114164066");
    Instrmt_13.add_attribute("Dated", "DatedDate_t_1523336611"); // 1
    Instrmt_13_set.insert("DatedDate_t_1523336611");
    Instrmt_13.add_attribute("IntAcrl", "InterestAccrualDate_t_960904055"); // 1
    Instrmt_13_set.insert("InterestAccrualDate_t_960904055");
    all_values.push_back(Instrmt_13_set);
    all_compo_names.insert("Instrmt_13_set");

    {
      xml_element AID_13{"AID"};
      multiset<string> AID_13_set;
      AID_13.add_attribute("AltID", "SecurityAltID_t_712369367"); // 2
      AID_13_set.insert("SecurityAltID_t_712369367");
      AID_13.add_attribute("AltIDSrc", "B"); // 2
      AID_13_set.insert("B");
      all_values.push_back(AID_13_set);
      all_compo_names.insert("AID_13_set");

      Instrmt_13.add_element(AID_13);
    }
    {
      xml_element SecXML_13{"SecXML"};
      multiset<string> SecXML_13_set;
      SecXML_13.add_attribute("Schema", "SecurityXMLSchema_t_486618904"); // 2
      SecXML_13_set.insert("SecurityXMLSchema_t_486618904");
      all_values.push_back(SecXML_13_set);
      all_compo_names.insert("SecXML_13_set");

      Instrmt_13.add_element(SecXML_13);
    }
    {
      xml_element Evnt_13{"Evnt"};
      multiset<string> Evnt_13_set;
      Evnt_13.add_attribute("EventTyp", "14"); // 2
      Evnt_13_set.insert("14");
      Evnt_13.add_attribute("Dt", "EventDate_t_752269886"); // 2
      Evnt_13_set.insert("EventDate_t_752269886");
      Evnt_13.add_attribute("Tm", "EventTime_t_1764657248"); // 2
      Evnt_13_set.insert("EventTime_t_1764657248");
      Evnt_13.add_attribute("Px", "9434250.750000"); // 2
      Evnt_13_set.insert("9434250.750000");
      Evnt_13.add_attribute("Txt", "EventText_t_1327283192"); // 2
      Evnt_13_set.insert("EventText_t_1327283192");
      all_values.push_back(Evnt_13_set);
      all_compo_names.insert("Evnt_13_set");

      Instrmt_13.add_element(Evnt_13);
    }
    {
      xml_element Pty_103{"Pty"};
      multiset<string> Pty_103_set;
      Pty_103.add_attribute("ID", "InstrumentPartyID_t_1795190672"); // 2
      Pty_103_set.insert("InstrumentPartyID_t_1795190672");
      Pty_103.add_attribute("Src", "H"); // 2
      Pty_103_set.insert("H");
      Pty_103.add_attribute("R", "41"); // 2
      Pty_103_set.insert("41");
      all_values.push_back(Pty_103_set);
      all_compo_names.insert("Pty_103_set");

      {
        xml_element Sub_103{"Sub"};
        multiset<string> Sub_103_set;
        Sub_103.add_attribute("ID", "InstrumentPartySubID_t_1513013289"); // 3
        Sub_103_set.insert("InstrumentPartySubID_t_1513013289");
        Sub_103.add_attribute("Typ", "17"); // 3
        Sub_103_set.insert("17");
        all_values.push_back(Sub_103_set);
        all_compo_names.insert("Sub_103_set");

        Pty_103.add_element(Sub_103);
      }
      Instrmt_13.add_element(Pty_103);
    }
    {
      xml_element CmplxEvnt_13{"CmplxEvnt"};
      multiset<string> CmplxEvnt_13_set;
      CmplxEvnt_13.add_attribute("Typ", "4"); // 2
      CmplxEvnt_13_set.insert("4");
      CmplxEvnt_13.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1839973803"); // 2
      CmplxEvnt_13_set.insert("ComplexOptPayoutAmount_t_1839973803");
      CmplxEvnt_13.add_attribute("Px", "21136323.550000"); // 2
      CmplxEvnt_13_set.insert("21136323.550000");
      CmplxEvnt_13.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_13_set.insert("4");
      CmplxEvnt_13.add_attribute("PxBndryPrcsn", "8194808.760000"); // 2
      CmplxEvnt_13_set.insert("8194808.760000");
      CmplxEvnt_13.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_13_set.insert("2");
      CmplxEvnt_13.add_attribute("Cond", "2"); // 2
      CmplxEvnt_13_set.insert("2");
      all_values.push_back(CmplxEvnt_13_set);
      all_compo_names.insert("CmplxEvnt_13_set");

      {
        xml_element EvntDts_13{"EvntDts"};
        multiset<string> EvntDts_13_set;
        EvntDts_13.add_attribute("StartDt", "ComplexEventStartDate_t_24555504"); // 3
        EvntDts_13_set.insert("ComplexEventStartDate_t_24555504");
        EvntDts_13.add_attribute("EndDt", "ComplexEventEndDate_t_2030526769"); // 3
        EvntDts_13_set.insert("ComplexEventEndDate_t_2030526769");
        all_values.push_back(EvntDts_13_set);
        all_compo_names.insert("EvntDts_13_set");

        {
          xml_element EvntTms_13{"EvntTms"};
          multiset<string> EvntTms_13_set;
          EvntTms_13.add_attribute("StartTm", "661941448"); // 4
          EvntTms_13_set.insert("661941448");
          EvntTms_13.add_attribute("EndTm", "1948250165"); // 4
          EvntTms_13_set.insert("1948250165");
          all_values.push_back(EvntTms_13_set);
          all_compo_names.insert("EvntTms_13_set");

          EvntDts_13.add_element(EvntTms_13);
        }
        CmplxEvnt_13.add_element(EvntDts_13);
      }
      Instrmt_13.add_element(CmplxEvnt_13);
    }
    elt.add_element(Instrmt_13);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_8{"FinDetls"};
    multiset<string> FinDetls_8_set;
    FinDetls_8.add_attribute("AgmtDesc", "AgreementDesc_t_1018299390"); // 1
    FinDetls_8_set.insert("AgreementDesc_t_1018299390");
    FinDetls_8.add_attribute("AgmtID", "AgreementID_t_1965120403"); // 1
    FinDetls_8_set.insert("AgreementID_t_1965120403");
    FinDetls_8.add_attribute("AgmtDt", "AgreementDate_t_2139500138"); // 1
    FinDetls_8_set.insert("AgreementDate_t_2139500138");
    FinDetls_8.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_8_set.insert("CHF");
    FinDetls_8.add_attribute("TrmTyp", "2"); // 1
    FinDetls_8_set.insert("2");
    FinDetls_8.add_attribute("StartDt", "StartDate_t_1815464983"); // 1
    FinDetls_8_set.insert("StartDate_t_1815464983");
    FinDetls_8.add_attribute("EndDt", "EndDate_t_644170189"); // 1
    FinDetls_8_set.insert("EndDate_t_644170189");
    FinDetls_8.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_8_set.insert("2");
    FinDetls_8.add_attribute("MgnRatio", "1546002.390000"); // 1
    FinDetls_8_set.insert("1546002.390000");
    all_values.push_back(FinDetls_8_set);
    all_compo_names.insert("FinDetls_8_set");

    elt.add_element(FinDetls_8);
  } // end FinDetls
  { // Leg
    xml_element Leg_22{"Leg"};
    multiset<string> Leg_22_set;
    Leg_22.add_attribute("Sym", "LegSymbol_t_290158452"); // 1
    Leg_22_set.insert("LegSymbol_t_290158452");
    Leg_22.add_attribute("Sfx", "WI"); // 1
    Leg_22_set.insert("WI");
    Leg_22.add_attribute("ID", "LegSecurityID_t_1304705310"); // 1
    Leg_22_set.insert("LegSecurityID_t_1304705310");
    Leg_22.add_attribute("Src", "H"); // 1
    Leg_22_set.insert("H");
    Leg_22.add_attribute("Prod", "6"); // 1
    Leg_22_set.insert("6");
    Leg_22.add_attribute("CFI", "LegCFICode_t_1279693694"); // 1
    Leg_22_set.insert("LegCFICode_t_1279693694");
    Leg_22.add_attribute("SecTyp", "SLQN"); // 1
    Leg_22_set.insert("SLQN");
    Leg_22.add_attribute("SecSubTyp", "LegSecuritySubType_t_932494153"); // 1
    Leg_22_set.insert("LegSecuritySubType_t_932494153");
    Leg_22.add_attribute("MMY", "1079656346"); // 1
    Leg_22_set.insert("1079656346");
    Leg_22.add_attribute("Mat", "LegMaturityDate_t_471804526"); // 1
    Leg_22_set.insert("LegMaturityDate_t_471804526");
    Leg_22.add_attribute("MatTm", "624984309"); // 1
    Leg_22_set.insert("624984309");
    Leg_22.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1045805053"); // 1
    Leg_22_set.insert("LegCouponPaymentDate_t_1045805053");
    Leg_22.add_attribute("Issued", "LegIssueDate_t_472285989"); // 1
    Leg_22_set.insert("LegIssueDate_t_472285989");
    Leg_22.add_attribute("RepoCollSecTyp", "1444465185"); // 1
    Leg_22_set.insert("1444465185");
    Leg_22.add_attribute("RepoTrm", "591736885"); // 1
    Leg_22_set.insert("591736885");
    Leg_22.add_attribute("RepoRt", "12160350.780000"); // 1
    Leg_22_set.insert("12160350.780000");
    Leg_22.add_attribute("Fctr", "14690206.890000"); // 1
    Leg_22_set.insert("14690206.890000");
    Leg_22.add_attribute("CrdRtg", "LegCreditRating_t_474780006"); // 1
    Leg_22_set.insert("LegCreditRating_t_474780006");
    Leg_22.add_attribute("Rgstry", "LegInstrRegistry_t_1877976526"); // 1
    Leg_22_set.insert("LegInstrRegistry_t_1877976526");
    Leg_22.add_attribute("Ctry", "1269787206"); // 1
    Leg_22_set.insert("1269787206");
    Leg_22.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1493079396"); // 1
    Leg_22_set.insert("LegStateOrProvinceOfIssue_t_1493079396");
    Leg_22.add_attribute("Lcl", "LegLocaleOfIssue_t_1695613282"); // 1
    Leg_22_set.insert("LegLocaleOfIssue_t_1695613282");
    Leg_22.add_attribute("Redeem", "LegRedemptionDate_t_1261803696"); // 1
    Leg_22_set.insert("LegRedemptionDate_t_1261803696");
    Leg_22.add_attribute("Strk", "2001566.770000"); // 1
    Leg_22_set.insert("2001566.770000");
    Leg_22.add_attribute("StrkCcy", "USD"); // 1
    Leg_22_set.insert("USD");
    Leg_22.add_attribute("OptA", "2015621660"); // 1
    Leg_22_set.insert("2015621660");
    Leg_22.add_attribute("Cmult", "1241006.440000"); // 1
    Leg_22_set.insert("1241006.440000");
    Leg_22.add_attribute("MultTyp", "1"); // 1
    Leg_22_set.insert("1");
    Leg_22.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_22_set.insert("2");
    Leg_22.add_attribute("UOM", "Bcf"); // 1
    Leg_22_set.insert("Bcf");
    Leg_22.add_attribute("UOMQty", "4577201.680000"); // 1
    Leg_22_set.insert("4577201.680000");
    Leg_22.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_22_set.insert("oz_tr");
    Leg_22.add_attribute("PxUOMQty", "17900861.900000"); // 1
    Leg_22_set.insert("17900861.900000");
    Leg_22.add_attribute("TmUnit", "Wk"); // 1
    Leg_22_set.insert("Wk");
    Leg_22.add_attribute("ExerStyle", "1"); // 1
    Leg_22_set.insert("1");
    Leg_22.add_attribute("CpnRt", "9222962.370000"); // 1
    Leg_22_set.insert("9222962.370000");
    Leg_22.add_attribute("Exch", "LegSecurityExchange_t_487138459"); // 1
    Leg_22_set.insert("LegSecurityExchange_t_487138459");
    Leg_22.add_attribute("Issr", "LegIssuer_t_146487109"); // 1
    Leg_22_set.insert("LegIssuer_t_146487109");
    Leg_22.add_attribute("EncLegIssrLen", "2001952583"); // 1
    Leg_22_set.insert("2001952583");
    Leg_22.add_attribute("EncLegIssr", "EncodedLegIssuer_t_958942985"); // 1
    Leg_22_set.insert("EncodedLegIssuer_t_958942985");
    Leg_22.add_attribute("Desc", "LegSecurityDesc_t_771471418"); // 1
    Leg_22_set.insert("LegSecurityDesc_t_771471418");
    Leg_22.add_attribute("EncLegSecDescLen", "900273989"); // 1
    Leg_22_set.insert("900273989");
    Leg_22.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1431228974"); // 1
    Leg_22_set.insert("EncodedLegSecurityDesc_t_1431228974");
    Leg_22.add_attribute("RatioQty", "684529.550000"); // 1
    Leg_22_set.insert("684529.550000");
    Leg_22.add_attribute("Side", "B"); // 1
    Leg_22_set.insert("B");
    Leg_22.add_attribute("Ccy", "GBP"); // 1
    Leg_22_set.insert("GBP");
    Leg_22.add_attribute("Pool", "LegPool_t_1966790880"); // 1
    Leg_22_set.insert("LegPool_t_1966790880");
    Leg_22.add_attribute("Dated", "LegDatedDate_t_230273283"); // 1
    Leg_22_set.insert("LegDatedDate_t_230273283");
    Leg_22.add_attribute("CSetMo", "659777202"); // 1
    Leg_22_set.insert("659777202");
    Leg_22.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1312386629"); // 1
    Leg_22_set.insert("LegInterestAccrualDate_t_1312386629");
    Leg_22.add_attribute("PutCall", "1925886565"); // 1
    Leg_22_set.insert("1925886565");
    Leg_22.add_attribute("LegOptionRatio", "19215808.980000"); // 1
    Leg_22_set.insert("19215808.980000");
    Leg_22.add_attribute("Px", "15125433.060000"); // 1
    Leg_22_set.insert("15125433.060000");
    all_values.push_back(Leg_22_set);
    all_compo_names.insert("Leg_22_set");

    {
      xml_element LegAID_22{"LegAID"};
      multiset<string> LegAID_22_set;
      LegAID_22.add_attribute("SecAltID", "LegSecurityAltID_t_1405817020"); // 2
      LegAID_22_set.insert("LegSecurityAltID_t_1405817020");
      LegAID_22.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_22_set.insert("1");
      all_values.push_back(LegAID_22_set);
      all_compo_names.insert("LegAID_22_set");

      Leg_22.add_element(LegAID_22);
    }
    elt.add_element(Leg_22);
  } // end Leg
  { // UndColl
    xml_element UndColl_5{"UndColl"};
    multiset<string> UndColl_5_set;
    UndColl_5.add_attribute("Actn", "0"); // 1
    UndColl_5_set.insert("0");
    all_values.push_back(UndColl_5_set);
    all_compo_names.insert("UndColl_5_set");

    {
      xml_element Undly_20{"Undly"};
      multiset<string> Undly_20_set;
      Undly_20.add_attribute("Sym", "UnderlyingSymbol_t_571332116"); // 2
      Undly_20_set.insert("UnderlyingSymbol_t_571332116");
      Undly_20.add_attribute("Sfx", "CD"); // 2
      Undly_20_set.insert("CD");
      Undly_20.add_attribute("ID", "UnderlyingSecurityID_t_2015298545"); // 2
      Undly_20_set.insert("UnderlyingSecurityID_t_2015298545");
      Undly_20.add_attribute("Src", "L"); // 2
      Undly_20_set.insert("L");
      Undly_20.add_attribute("Prod", "2"); // 2
      Undly_20_set.insert("2");
      Undly_20.add_attribute("CFI", "UnderlyingCFICode_t_1657901087"); // 2
      Undly_20_set.insert("UnderlyingCFICode_t_1657901087");
      Undly_20.add_attribute("SecTyp", "DEFLTED"); // 2
      Undly_20_set.insert("DEFLTED");
      Undly_20.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_411924617"); // 2
      Undly_20_set.insert("UnderlyingSecuritySubType_t_411924617");
      Undly_20.add_attribute("MMY", "432713676"); // 2
      Undly_20_set.insert("432713676");
      Undly_20.add_attribute("Mat", "UnderlyingMaturityDate_t_1443868909"); // 2
      Undly_20_set.insert("UnderlyingMaturityDate_t_1443868909");
      Undly_20.add_attribute("MatTm", "558411726"); // 2
      Undly_20_set.insert("558411726");
      Undly_20.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_287182612"); // 2
      Undly_20_set.insert("UnderlyingCouponPaymentDate_t_287182612");
      Undly_20.add_attribute("RestrctTyp", "XR"); // 2
      Undly_20_set.insert("XR");
      Undly_20.add_attribute("Snrty", "SR"); // 2
      Undly_20_set.insert("SR");
      Undly_20.add_attribute("NotlPctOut", "11874566.010000"); // 2
      Undly_20_set.insert("11874566.010000");
      Undly_20.add_attribute("OrigNotlPctOut", "16865572.210000"); // 2
      Undly_20_set.insert("16865572.210000");
      Undly_20.add_attribute("AttchPnt", "13983360.990000"); // 2
      Undly_20_set.insert("13983360.990000");
      Undly_20.add_attribute("DetchPnt", "5319838.270000"); // 2
      Undly_20_set.insert("5319838.270000");
      Undly_20.add_attribute("Issued", "UnderlyingIssueDate_t_38853978"); // 2
      Undly_20_set.insert("UnderlyingIssueDate_t_38853978");
      Undly_20.add_attribute("RepoCollSecTyp", "788326095"); // 2
      Undly_20_set.insert("788326095");
      Undly_20.add_attribute("RepoTrm", "351291059"); // 2
      Undly_20_set.insert("351291059");
      Undly_20.add_attribute("RepoRt", "2691272.610000"); // 2
      Undly_20_set.insert("2691272.610000");
      Undly_20.add_attribute("Fctr", "14481032.970000"); // 2
      Undly_20_set.insert("14481032.970000");
      Undly_20.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1663677688"); // 2
      Undly_20_set.insert("UnderlyingCreditRating_t_1663677688");
      Undly_20.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_47530178"); // 2
      Undly_20_set.insert("UnderlyingInstrRegistry_t_47530178");
      Undly_20.add_attribute("Ctry", "1222200548"); // 2
      Undly_20_set.insert("1222200548");
      Undly_20.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1028737346"); // 2
      Undly_20_set.insert("UnderlyingStateOrProvinceOfIssue_t_1028737346");
      Undly_20.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1453347198"); // 2
      Undly_20_set.insert("UnderlyingLocaleOfIssue_t_1453347198");
      Undly_20.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1625970948"); // 2
      Undly_20_set.insert("UnderlyingRedemptionDate_t_1625970948");
      Undly_20.add_attribute("StrkPx", "2619350.170000"); // 2
      Undly_20_set.insert("2619350.170000");
      Undly_20.add_attribute("StrkCcy", "EUR"); // 2
      Undly_20_set.insert("EUR");
      Undly_20.add_attribute("OptA", "1665354587"); // 2
      Undly_20_set.insert("1665354587");
      Undly_20.add_attribute("Mult", "7035961.120000"); // 2
      Undly_20_set.insert("7035961.120000");
      Undly_20.add_attribute("MultTyp", "2"); // 2
      Undly_20_set.insert("2");
      Undly_20.add_attribute("FlowSchedTyp", "1"); // 2
      Undly_20_set.insert("1");
      Undly_20.add_attribute("UOM", "Alw"); // 2
      Undly_20_set.insert("Alw");
      Undly_20.add_attribute("UOMQty", "20356021.520000"); // 2
      Undly_20_set.insert("20356021.520000");
      Undly_20.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_20_set.insert("oz_tr");
      Undly_20.add_attribute("PxUOMQty", "6467272.280000"); // 2
      Undly_20_set.insert("6467272.280000");
      Undly_20.add_attribute("TmUnit", "Min"); // 2
      Undly_20_set.insert("Min");
      Undly_20.add_attribute("ExerStyle", "0"); // 2
      Undly_20_set.insert("0");
      Undly_20.add_attribute("CpnRt", "9339098.400000"); // 2
      Undly_20_set.insert("9339098.400000");
      Undly_20.add_attribute("Exch", "UnderlyingSecurityExchange_t_1587315660"); // 2
      Undly_20_set.insert("UnderlyingSecurityExchange_t_1587315660");
      Undly_20.add_attribute("Issr", "UnderlyingIssuer_t_868538442"); // 2
      Undly_20_set.insert("UnderlyingIssuer_t_868538442");
      Undly_20.add_attribute("EncUndIssrLen", "2121366441"); // 2
      Undly_20_set.insert("2121366441");
      Undly_20.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1126389234"); // 2
      Undly_20_set.insert("EncodedUnderlyingIssuer_t_1126389234");
      Undly_20.add_attribute("Desc", "UnderlyingSecurityDesc_t_119390893"); // 2
      Undly_20_set.insert("UnderlyingSecurityDesc_t_119390893");
      Undly_20.add_attribute("EncUndSecDescLen", "505866620"); // 2
      Undly_20_set.insert("505866620");
      Undly_20.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1165243212"); // 2
      Undly_20_set.insert("EncodedUnderlyingSecurityDesc_t_1165243212");
      Undly_20.add_attribute("CPPgm", "UnderlyingCPProgram_t_907716989"); // 2
      Undly_20_set.insert("UnderlyingCPProgram_t_907716989");
      Undly_20.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_857157680"); // 2
      Undly_20_set.insert("UnderlyingCPRegType_t_857157680");
      Undly_20.add_attribute("AllocPct", "14343704.730000"); // 2
      Undly_20_set.insert("14343704.730000");
      Undly_20.add_attribute("Ccy", "JPY"); // 2
      Undly_20_set.insert("JPY");
      Undly_20.add_attribute("Qty", "14819006.510000"); // 2
      Undly_20_set.insert("14819006.510000");
      Undly_20.add_attribute("SettlTyp", "5"); // 2
      Undly_20_set.insert("5");
      Undly_20.add_attribute("CashAmt", "UnderlyingCashAmount_t_1402089067"); // 2
      Undly_20_set.insert("UnderlyingCashAmount_t_1402089067");
      Undly_20.add_attribute("CashTyp", "DIFF"); // 2
      Undly_20_set.insert("DIFF");
      Undly_20.add_attribute("Px", "9090244.870000"); // 2
      Undly_20_set.insert("9090244.870000");
      Undly_20.add_attribute("DirtPx", "16640240.840000"); // 2
      Undly_20_set.insert("16640240.840000");
      Undly_20.add_attribute("EndPx", "16235454.170000"); // 2
      Undly_20_set.insert("16235454.170000");
      Undly_20.add_attribute("StartVal", "UnderlyingStartValue_t_958843904"); // 2
      Undly_20_set.insert("UnderlyingStartValue_t_958843904");
      Undly_20.add_attribute("CurVal", "UnderlyingCurrentValue_t_1181895023"); // 2
      Undly_20_set.insert("UnderlyingCurrentValue_t_1181895023");
      Undly_20.add_attribute("EndVal", "UnderlyingEndValue_t_179657881"); // 2
      Undly_20_set.insert("UnderlyingEndValue_t_179657881");
      Undly_20.add_attribute("AdjQty", "20377156.060000"); // 2
      Undly_20_set.insert("20377156.060000");
      Undly_20.add_attribute("FxRate", "18976976.250000"); // 2
      Undly_20_set.insert("18976976.250000");
      Undly_20.add_attribute("FxRateCalc", "D"); // 2
      Undly_20_set.insert("D");
      Undly_20.add_attribute("CapValu", "UnderlyingCapValue_t_1925834110"); // 2
      Undly_20_set.insert("UnderlyingCapValue_t_1925834110");
      Undly_20.add_attribute("SetMeth", "UnderlyingSettlMethod_t_877941196"); // 2
      Undly_20_set.insert("UnderlyingSettlMethod_t_877941196");
      Undly_20.add_attribute("PutCall", "1040398662"); // 2
      Undly_20_set.insert("1040398662");
      all_values.push_back(Undly_20_set);
      all_compo_names.insert("Undly_20_set");

      {
        xml_element UndAID_20{"UndAID"};
        multiset<string> UndAID_20_set;
        UndAID_20.add_attribute("AltID", "UnderlyingSecurityAltID_t_1110337875"); // 3
        UndAID_20_set.insert("UnderlyingSecurityAltID_t_1110337875");
        UndAID_20.add_attribute("AltIDSrc", "6"); // 3
        UndAID_20_set.insert("6");
        all_values.push_back(UndAID_20_set);
        all_compo_names.insert("UndAID_20_set");

        Undly_20.add_element(UndAID_20);
      }
      {
        xml_element Stip_30{"Stip"};
        multiset<string> Stip_30_set;
        Stip_30.add_attribute("Typ", "MATURITY"); // 3
        Stip_30_set.insert("MATURITY");
        Stip_30.add_attribute("Val", "UnderlyingStipValue_t_550169888"); // 3
        Stip_30_set.insert("UnderlyingStipValue_t_550169888");
        all_values.push_back(Stip_30_set);
        all_compo_names.insert("Stip_30_set");

        Undly_20.add_element(Stip_30);
      }
      {
        xml_element Pty_104{"Pty"};
        multiset<string> Pty_104_set;
        Pty_104.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1285134935"); // 3
        Pty_104_set.insert("UnderlyingInstrumentPartyID_t_1285134935");
        Pty_104.add_attribute("Src", "F"); // 3
        Pty_104_set.insert("F");
        Pty_104.add_attribute("R", "22"); // 3
        Pty_104_set.insert("22");
        all_values.push_back(Pty_104_set);
        all_compo_names.insert("Pty_104_set");

        {
          xml_element Sub_104{"Sub"};
          multiset<string> Sub_104_set;
          Sub_104.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1404525829"); // 4
          Sub_104_set.insert("UnderlyingInstrumentPartySubID_t_1404525829");
          Sub_104.add_attribute("Typ", "2"); // 4
          Sub_104_set.insert("2");
          all_values.push_back(Sub_104_set);
          all_compo_names.insert("Sub_104_set");

          Pty_104.add_element(Sub_104);
        }
        Undly_20.add_element(Pty_104);
      }
      UndColl_5.add_element(Undly_20);
    }
    elt.add_element(UndColl_5);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_6{"TrdRegTS"};
    multiset<string> TrdRegTS_6_set;
    TrdRegTS_6.add_attribute("TS", "TrdRegTimestamp_t_164759170"); // 1
    TrdRegTS_6_set.insert("TrdRegTimestamp_t_164759170");
    TrdRegTS_6.add_attribute("Typ", "2"); // 1
    TrdRegTS_6_set.insert("2");
    TrdRegTS_6.add_attribute("Src", "TrdRegTimestampOrigin_t_2128689159"); // 1
    TrdRegTS_6_set.insert("TrdRegTimestampOrigin_t_2128689159");
    TrdRegTS_6.add_attribute("DskTyp", "PT"); // 1
    TrdRegTS_6_set.insert("PT");
    TrdRegTS_6.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_6_set.insert("1");
    TrdRegTS_6.add_attribute("DskOrdHndlInst", "RSV"); // 1
    TrdRegTS_6_set.insert("RSV");
    all_values.push_back(TrdRegTS_6_set);
    all_compo_names.insert("TrdRegTS_6_set");

    elt.add_element(TrdRegTS_6);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_14{"MiscFees"};
    multiset<string> MiscFees_14_set;
    MiscFees_14.add_attribute("Amt", "MiscFeeAmt_t_791689088"); // 1
    MiscFees_14_set.insert("MiscFeeAmt_t_791689088");
    MiscFees_14.add_attribute("Curr", "USD"); // 1
    MiscFees_14_set.insert("USD");
    MiscFees_14.add_attribute("Typ", "6"); // 1
    MiscFees_14_set.insert("6");
    MiscFees_14.add_attribute("Basis", "0"); // 1
    MiscFees_14_set.insert("0");
    all_values.push_back(MiscFees_14_set);
    all_compo_names.insert("MiscFees_14_set");

    elt.add_element(MiscFees_14);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_15{"MiscFees"};
    multiset<string> MiscFees_15_set;
    MiscFees_15.add_attribute("Amt", "MiscFeeAmt_t_1524017738"); // 1
    MiscFees_15_set.insert("MiscFeeAmt_t_1524017738");
    MiscFees_15.add_attribute("Curr", "GBP"); // 1
    MiscFees_15_set.insert("GBP");
    MiscFees_15.add_attribute("Typ", "4"); // 1
    MiscFees_15_set.insert("4");
    MiscFees_15.add_attribute("Basis", "2"); // 1
    MiscFees_15_set.insert("2");
    all_values.push_back(MiscFees_15_set);
    all_compo_names.insert("MiscFees_15_set");

    elt.add_element(MiscFees_15);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_7{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_7_set;
    SprdBnchmkCurve_7.add_attribute("Spread", "1527777.990000"); // 1
    SprdBnchmkCurve_7_set.insert("1527777.990000");
    SprdBnchmkCurve_7.add_attribute("Ccy", "USD"); // 1
    SprdBnchmkCurve_7_set.insert("USD");
    SprdBnchmkCurve_7.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_7_set.insert("SONIA");
    SprdBnchmkCurve_7.add_attribute("Point", "BenchmarkCurvePoint_t_155454385"); // 1
    SprdBnchmkCurve_7_set.insert("BenchmarkCurvePoint_t_155454385");
    SprdBnchmkCurve_7.add_attribute("Px", "3873925.660000"); // 1
    SprdBnchmkCurve_7_set.insert("3873925.660000");
    SprdBnchmkCurve_7.add_attribute("PxTyp", "16"); // 1
    SprdBnchmkCurve_7_set.insert("16");
    SprdBnchmkCurve_7.add_attribute("SecID", "BenchmarkSecurityID_t_705624273"); // 1
    SprdBnchmkCurve_7_set.insert("BenchmarkSecurityID_t_705624273");
    SprdBnchmkCurve_7.add_attribute("SecIDSrc", "8"); // 1
    SprdBnchmkCurve_7_set.insert("8");
    all_values.push_back(SprdBnchmkCurve_7_set);
    all_compo_names.insert("SprdBnchmkCurve_7_set");

    elt.add_element(SprdBnchmkCurve_7);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_31{"Stip"};
    multiset<string> Stip_31_set;
    Stip_31.add_attribute("Typ", "REFINT"); // 1
    Stip_31_set.insert("REFINT");
    Stip_31.add_attribute("Val", "StipulationValue_t_929569682"); // 1
    Stip_31_set.insert("StipulationValue_t_929569682");
    all_values.push_back(Stip_31_set);
    all_compo_names.insert("Stip_31_set");

    elt.add_element(Stip_31);
  } // end Stip
  { // Stip
    xml_element Stip_32{"Stip"};
    multiset<string> Stip_32_set;
    Stip_32.add_attribute("Typ", "PPC"); // 1
    Stip_32_set.insert("PPC");
    Stip_32.add_attribute("Val", "StipulationValue_t_929018433"); // 1
    Stip_32_set.insert("StipulationValue_t_929018433");
    all_values.push_back(Stip_32_set);
    all_compo_names.insert("Stip_32_set");

    elt.add_element(Stip_32);
  } // end Stip
  { // Stip
    xml_element Stip_33{"Stip"};
    multiset<string> Stip_33_set;
    Stip_33.add_attribute("Typ", "TEXT"); // 1
    Stip_33_set.insert("TEXT");
    Stip_33.add_attribute("Val", "StipulationValue_t_143531533"); // 1
    Stip_33_set.insert("StipulationValue_t_143531533");
    all_values.push_back(Stip_33_set);
    all_compo_names.insert("Stip_33_set");

    elt.add_element(Stip_33);
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
