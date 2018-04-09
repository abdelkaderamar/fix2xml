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
  elt.add_attribute("RespID", "CollRespID_t_312033525"); // 0
  CollateralResponse_message_t_0.insert("CollRespID_t_312033525");
  elt.add_attribute("ID", "CollAsgnID_t_367061781"); // 0
  CollateralResponse_message_t_0.insert("CollAsgnID_t_367061781");
  elt.add_attribute("ReqID", "CollReqID_t_518244139"); // 0
  CollateralResponse_message_t_0.insert("CollReqID_t_518244139");
  elt.add_attribute("AsgnRsn", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("TransTyp", "0"); // 0
  CollateralResponse_message_t_0.insert("0");
  elt.add_attribute("RespTyp", "1"); // 0
  CollateralResponse_message_t_0.insert("1");
  elt.add_attribute("RejRsn", "2"); // 0
  CollateralResponse_message_t_0.insert("2");
  elt.add_attribute("TxnTm", "TransactTime_t_610989381"); // 0
  CollateralResponse_message_t_0.insert("TransactTime_t_610989381");
  elt.add_attribute("ApplTyp", "1"); // 0
  CollateralResponse_message_t_0.insert("1");
  elt.add_attribute("FinclStat", "1"); // 0
  CollateralResponse_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_809557546"); // 0
  CollateralResponse_message_t_0.insert("ClearingBusinessDate_t_809557546");
  elt.add_attribute("Acct", "Account_t_1847996668"); // 0
  CollateralResponse_message_t_0.insert("Account_t_1847996668");
  elt.add_attribute("AcctTyp", "4"); // 0
  CollateralResponse_message_t_0.insert("4");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1669114840"); // 0
  CollateralResponse_message_t_0.insert("ClOrdID_t_1669114840");
  elt.add_attribute("OrdID", "OrderID_t_1742724527"); // 0
  CollateralResponse_message_t_0.insert("OrderID_t_1742724527");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_994719822"); // 0
  CollateralResponse_message_t_0.insert("SecondaryOrderID_t_994719822");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1420716634"); // 0
  CollateralResponse_message_t_0.insert("SecondaryClOrdID_t_1420716634");
  elt.add_attribute("SettlDt", "SettlDate_t_1697791011"); // 0
  CollateralResponse_message_t_0.insert("SettlDate_t_1697791011");
  elt.add_attribute("Qty", "1161894.710000"); // 0
  CollateralResponse_message_t_0.insert("1161894.710000");
  elt.add_attribute("QtyTyp", "1"); // 0
  CollateralResponse_message_t_0.insert("1");
  elt.add_attribute("Ccy", "CAN"); // 0
  CollateralResponse_message_t_0.insert("CAN");
  elt.add_attribute("MgnExcess", "MarginExcess_t_1493424586"); // 0
  CollateralResponse_message_t_0.insert("MarginExcess_t_1493424586");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_128146305"); // 0
  CollateralResponse_message_t_0.insert("TotalNetValue_t_128146305");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_1606060281"); // 0
  CollateralResponse_message_t_0.insert("CashOutstanding_t_1606060281");
  elt.add_attribute("Side", "5"); // 0
  CollateralResponse_message_t_0.insert("5");
  elt.add_attribute("Px", "16314388.550000"); // 0
  CollateralResponse_message_t_0.insert("16314388.550000");
  elt.add_attribute("PxTyp", "10"); // 0
  CollateralResponse_message_t_0.insert("10");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_2016688794"); // 0
  CollateralResponse_message_t_0.insert("AccruedInterestAmt_t_2016688794");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1934156371"); // 0
  CollateralResponse_message_t_0.insert("EndAccruedInterestAmt_t_1934156371");
  elt.add_attribute("StartCsh", "StartCash_t_1019253405"); // 0
  CollateralResponse_message_t_0.insert("StartCash_t_1019253405");
  elt.add_attribute("EndCsh", "EndCash_t_181238671"); // 0
  CollateralResponse_message_t_0.insert("EndCash_t_181238671");
  elt.add_attribute("Txt", "Text_t_153734504"); // 0
  CollateralResponse_message_t_0.insert("Text_t_153734504");
  elt.add_attribute("EncTxtLen", "1537497544"); // 0
  CollateralResponse_message_t_0.insert("1537497544");
  elt.add_attribute("EncTxt", "EncodedText_t_1874557456"); // 0
  CollateralResponse_message_t_0.insert("EncodedText_t_1874557456");
  all_values.push_back(CollateralResponse_message_t_0);
  all_compo_names.insert("CollateralResponse_message_t");

  { // Hdr
    xml_element Hdr_19{"Hdr"};
    multiset<string> Hdr_19_set;
    Hdr_19.add_attribute("SeqNum", "2060075374"); // 1
    Hdr_19_set.insert("2060075374");
    Hdr_19.add_attribute("SID", "SenderCompID_t_1239863601"); // 1
    Hdr_19_set.insert("SenderCompID_t_1239863601");
    Hdr_19.add_attribute("TID", "TargetCompID_t_309406925"); // 1
    Hdr_19_set.insert("TargetCompID_t_309406925");
    Hdr_19.add_attribute("OBID", "OnBehalfOfCompID_t_523581107"); // 1
    Hdr_19_set.insert("OnBehalfOfCompID_t_523581107");
    Hdr_19.add_attribute("D2ID", "DeliverToCompID_t_277610832"); // 1
    Hdr_19_set.insert("DeliverToCompID_t_277610832");
    Hdr_19.add_attribute("SSub", "SenderSubID_t_2059924925"); // 1
    Hdr_19_set.insert("SenderSubID_t_2059924925");
    Hdr_19.add_attribute("SLoc", "SenderLocationID_t_1333138653"); // 1
    Hdr_19_set.insert("SenderLocationID_t_1333138653");
    Hdr_19.add_attribute("TSub", "TargetSubID_t_2125607501"); // 1
    Hdr_19_set.insert("TargetSubID_t_2125607501");
    Hdr_19.add_attribute("TLoc", "TargetLocationID_t_1531574719"); // 1
    Hdr_19_set.insert("TargetLocationID_t_1531574719");
    Hdr_19.add_attribute("OBSub", "OnBehalfOfSubID_t_854769846"); // 1
    Hdr_19_set.insert("OnBehalfOfSubID_t_854769846");
    Hdr_19.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1720848380"); // 1
    Hdr_19_set.insert("OnBehalfOfLocationID_t_1720848380");
    Hdr_19.add_attribute("D2Sub", "DeliverToSubID_t_378810894"); // 1
    Hdr_19_set.insert("DeliverToSubID_t_378810894");
    Hdr_19.add_attribute("D2Loc", "DeliverToLocationID_t_128002832"); // 1
    Hdr_19_set.insert("DeliverToLocationID_t_128002832");
    Hdr_19.add_attribute("PosDup", "Y"); // 1
    Hdr_19_set.insert("Y");
    Hdr_19.add_attribute("PosRsnd", "Y"); // 1
    Hdr_19_set.insert("Y");
    Hdr_19.add_attribute("Snt", "SendingTime_t_1441298688"); // 1
    Hdr_19_set.insert("SendingTime_t_1441298688");
    Hdr_19.add_attribute("OrigSnt", "OrigSendingTime_t_2047806215"); // 1
    Hdr_19_set.insert("OrigSendingTime_t_2047806215");
    Hdr_19.add_attribute("MsgEncd", "MessageEncoding_t_1189447637"); // 1
    Hdr_19_set.insert("MessageEncoding_t_1189447637");
    all_values.push_back(Hdr_19_set);
    all_compo_names.insert("Hdr_19_set");

    {
      xml_element Hop_19{"Hop"};
      multiset<string> Hop_19_set;
      Hop_19.add_attribute("ID", "HopCompID_t_787239626"); // 2
      Hop_19_set.insert("HopCompID_t_787239626");
      Hop_19.add_attribute("Ref", "28468873"); // 2
      Hop_19_set.insert("28468873");
      Hop_19.add_attribute("Snt", "HopSendingTime_t_648024270"); // 2
      Hop_19_set.insert("HopSendingTime_t_648024270");
      all_values.push_back(Hop_19_set);
      all_compo_names.insert("Hop_19_set");

      Hdr_19.add_element(Hop_19);
    }
    elt.add_element(Hdr_19);
  } // end Hdr
  { // Pty
    xml_element Pty_82{"Pty"};
    multiset<string> Pty_82_set;
    Pty_82.add_attribute("ID", "PartyID_t_1659907728"); // 1
    Pty_82_set.insert("PartyID_t_1659907728");
    Pty_82.add_attribute("Src", "9"); // 1
    Pty_82_set.insert("9");
    Pty_82.add_attribute("R", "5"); // 1
    Pty_82_set.insert("5");
    all_values.push_back(Pty_82_set);
    all_compo_names.insert("Pty_82_set");

    {
      xml_element Sub_82{"Sub"};
      multiset<string> Sub_82_set;
      Sub_82.add_attribute("ID", "PartySubID_t_1446580451"); // 2
      Sub_82_set.insert("PartySubID_t_1446580451");
      Sub_82.add_attribute("Typ", "5"); // 2
      Sub_82_set.insert("5");
      all_values.push_back(Sub_82_set);
      all_compo_names.insert("Sub_82_set");

      Pty_82.add_element(Sub_82);
    }
    elt.add_element(Pty_82);
  } // end Pty
  { // Pty
    xml_element Pty_83{"Pty"};
    multiset<string> Pty_83_set;
    Pty_83.add_attribute("ID", "PartyID_t_856570984"); // 1
    Pty_83_set.insert("PartyID_t_856570984");
    Pty_83.add_attribute("Src", "8"); // 1
    Pty_83_set.insert("8");
    Pty_83.add_attribute("R", "27"); // 1
    Pty_83_set.insert("27");
    all_values.push_back(Pty_83_set);
    all_compo_names.insert("Pty_83_set");

    {
      xml_element Sub_83{"Sub"};
      multiset<string> Sub_83_set;
      Sub_83.add_attribute("ID", "PartySubID_t_583644792"); // 2
      Sub_83_set.insert("PartySubID_t_583644792");
      Sub_83.add_attribute("Typ", "1"); // 2
      Sub_83_set.insert("1");
      all_values.push_back(Sub_83_set);
      all_compo_names.insert("Sub_83_set");

      Pty_83.add_element(Sub_83);
    }
    elt.add_element(Pty_83);
  } // end Pty
  { // CollExc
    xml_element CollExc_11{"CollExc"};
    multiset<string> CollExc_11_set;
    CollExc_11.add_attribute("ExecID", "ExecID_t_893051717"); // 1
    CollExc_11_set.insert("ExecID_t_893051717");
    all_values.push_back(CollExc_11_set);
    all_compo_names.insert("CollExc_11_set");

    elt.add_element(CollExc_11);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_12{"TrdColl"};
    multiset<string> TrdColl_12_set;
    TrdColl_12.add_attribute("RptID", "TradeReportID_t_1697486704"); // 1
    TrdColl_12_set.insert("TradeReportID_t_1697486704");
    TrdColl_12.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_805492994"); // 1
    TrdColl_12_set.insert("SecondaryTradeReportID_t_805492994");
    all_values.push_back(TrdColl_12_set);
    all_compo_names.insert("TrdColl_12_set");

    elt.add_element(TrdColl_12);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_13{"TrdColl"};
    multiset<string> TrdColl_13_set;
    TrdColl_13.add_attribute("RptID", "TradeReportID_t_1222142793"); // 1
    TrdColl_13_set.insert("TradeReportID_t_1222142793");
    TrdColl_13.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1675610557"); // 1
    TrdColl_13_set.insert("SecondaryTradeReportID_t_1675610557");
    all_values.push_back(TrdColl_13_set);
    all_compo_names.insert("TrdColl_13_set");

    elt.add_element(TrdColl_13);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_14{"TrdColl"};
    multiset<string> TrdColl_14_set;
    TrdColl_14.add_attribute("RptID", "TradeReportID_t_189584066"); // 1
    TrdColl_14_set.insert("TradeReportID_t_189584066");
    TrdColl_14.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_2076912639"); // 1
    TrdColl_14_set.insert("SecondaryTradeReportID_t_2076912639");
    all_values.push_back(TrdColl_14_set);
    all_compo_names.insert("TrdColl_14_set");

    elt.add_element(TrdColl_14);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_11{"Instrmt"};
    multiset<string> Instrmt_11_set;
    Instrmt_11.add_attribute("Sym", "Symbol_t_1248975289"); // 1
    Instrmt_11_set.insert("Symbol_t_1248975289");
    Instrmt_11.add_attribute("Sfx", "CD"); // 1
    Instrmt_11_set.insert("CD");
    Instrmt_11.add_attribute("ID", "SecurityID_t_57431823"); // 1
    Instrmt_11_set.insert("SecurityID_t_57431823");
    Instrmt_11.add_attribute("Src", "B"); // 1
    Instrmt_11_set.insert("B");
    Instrmt_11.add_attribute("Prod", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("ProdCmplx", "ProductComplex_t_1498730511"); // 1
    Instrmt_11_set.insert("ProductComplex_t_1498730511");
    Instrmt_11.add_attribute("SecGrp", "SecurityGroup_t_272969952"); // 1
    Instrmt_11_set.insert("SecurityGroup_t_272969952");
    Instrmt_11.add_attribute("CFI", "CFICode_t_105359314"); // 1
    Instrmt_11_set.insert("CFICode_t_105359314");
    Instrmt_11.add_attribute("SecTyp", "LQN"); // 1
    Instrmt_11_set.insert("LQN");
    Instrmt_11.add_attribute("SubTyp", "SecuritySubType_t_301438825"); // 1
    Instrmt_11_set.insert("SecuritySubType_t_301438825");
    Instrmt_11.add_attribute("MMY", "753383585"); // 1
    Instrmt_11_set.insert("753383585");
    Instrmt_11.add_attribute("MatDt", "MaturityDate_t_944613656"); // 1
    Instrmt_11_set.insert("MaturityDate_t_944613656");
    Instrmt_11.add_attribute("MatTm", "1961346553"); // 1
    Instrmt_11_set.insert("1961346553");
    Instrmt_11.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_524128553"); // 1
    Instrmt_11_set.insert("SettleOnOpenFlag_t_524128553");
    Instrmt_11.add_attribute("AsgnMeth", "1619945968"); // 1
    Instrmt_11_set.insert("1619945968");
    Instrmt_11.add_attribute("Status", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("CpnPmt", "CouponPaymentDate_t_1314126926"); // 1
    Instrmt_11_set.insert("CouponPaymentDate_t_1314126926");
    Instrmt_11.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_11_set.insert("FR");
    Instrmt_11.add_attribute("Snrty", "SD"); // 1
    Instrmt_11_set.insert("SD");
    Instrmt_11.add_attribute("NotlPctOut", "14941391.960000"); // 1
    Instrmt_11_set.insert("14941391.960000");
    Instrmt_11.add_attribute("OrigNotlPctOut", "9126780.960000"); // 1
    Instrmt_11_set.insert("9126780.960000");
    Instrmt_11.add_attribute("AttchPnt", "786976.960000"); // 1
    Instrmt_11_set.insert("786976.960000");
    Instrmt_11.add_attribute("DetchPnt", "7665314.200000"); // 1
    Instrmt_11_set.insert("7665314.200000");
    Instrmt_11.add_attribute("Issued", "IssueDate_t_1805729813"); // 1
    Instrmt_11_set.insert("IssueDate_t_1805729813");
    Instrmt_11.add_attribute("RepoCollSecTyp", "2115185484"); // 1
    Instrmt_11_set.insert("2115185484");
    Instrmt_11.add_attribute("RepoTrm", "316534476"); // 1
    Instrmt_11_set.insert("316534476");
    Instrmt_11.add_attribute("RepoRt", "4637391.600000"); // 1
    Instrmt_11_set.insert("4637391.600000");
    Instrmt_11.add_attribute("Fctr", "11898446.290000"); // 1
    Instrmt_11_set.insert("11898446.290000");
    Instrmt_11.add_attribute("CrdRtg", "CreditRating_t_1992145033"); // 1
    Instrmt_11_set.insert("CreditRating_t_1992145033");
    Instrmt_11.add_attribute("Rgstry", "InstrRegistry_t_653323226"); // 1
    Instrmt_11_set.insert("InstrRegistry_t_653323226");
    Instrmt_11.add_attribute("IssuCtry", "1119273621"); // 1
    Instrmt_11_set.insert("1119273621");
    Instrmt_11.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1093636674"); // 1
    Instrmt_11_set.insert("StateOrProvinceOfIssue_t_1093636674");
    Instrmt_11.add_attribute("Lcl", "LocaleOfIssue_t_1221718186"); // 1
    Instrmt_11_set.insert("LocaleOfIssue_t_1221718186");
    Instrmt_11.add_attribute("Redeem", "RedemptionDate_t_1176705444"); // 1
    Instrmt_11_set.insert("RedemptionDate_t_1176705444");
    Instrmt_11.add_attribute("StrkPx", "14662840.580000"); // 1
    Instrmt_11_set.insert("14662840.580000");
    Instrmt_11.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_11_set.insert("GBP");
    Instrmt_11.add_attribute("StrkMult", "17392540.100000"); // 1
    Instrmt_11_set.insert("17392540.100000");
    Instrmt_11.add_attribute("StrkValu", "2429891.780000"); // 1
    Instrmt_11_set.insert("2429891.780000");
    Instrmt_11.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("StrkPxBndryPrcsn", "9963727.630000"); // 1
    Instrmt_11_set.insert("9963727.630000");
    Instrmt_11.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("OptAt", "1854555740"); // 1
    Instrmt_11_set.insert("1854555740");
    Instrmt_11.add_attribute("Mult", "15205013.160000"); // 1
    Instrmt_11_set.insert("15205013.160000");
    Instrmt_11.add_attribute("MultTyp", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_11_set.insert("3");
    Instrmt_11.add_attribute("MinPxIncr", "6871445.940000"); // 1
    Instrmt_11_set.insert("6871445.940000");
    Instrmt_11.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1412548078"); // 1
    Instrmt_11_set.insert("MinPriceIncrementAmount_t_1412548078");
    Instrmt_11.add_attribute("UOM", "MWh"); // 1
    Instrmt_11_set.insert("MWh");
    Instrmt_11.add_attribute("UOMQty", "338001.430000"); // 1
    Instrmt_11_set.insert("338001.430000");
    Instrmt_11.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_11_set.insert("MMBtu");
    Instrmt_11.add_attribute("PxUOMQty", "17594878.070000"); // 1
    Instrmt_11_set.insert("17594878.070000");
    Instrmt_11.add_attribute("SettlMeth", "P"); // 1
    Instrmt_11_set.insert("P");
    Instrmt_11.add_attribute("ExerStyle", "2"); // 1
    Instrmt_11_set.insert("2");
    Instrmt_11.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("OptPayAmt", "OptPayoutAmount_t_1116866039"); // 1
    Instrmt_11_set.insert("OptPayoutAmount_t_1116866039");
    Instrmt_11.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_11_set.insert("STD");
    Instrmt_11.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_11_set.insert("EQTY");
    Instrmt_11.add_attribute("ListMeth", "0"); // 1
    Instrmt_11_set.insert("0");
    Instrmt_11.add_attribute("CapPx", "9530510.780000"); // 1
    Instrmt_11_set.insert("9530510.780000");
    Instrmt_11.add_attribute("FlrPx", "18888242.460000"); // 1
    Instrmt_11_set.insert("18888242.460000");
    Instrmt_11.add_attribute("PutCall", "0"); // 1
    Instrmt_11_set.insert("0");
    Instrmt_11.add_attribute("FlexInd", "true"); // 1
    Instrmt_11_set.insert("true");
    Instrmt_11.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_11_set.insert("true");
    Instrmt_11.add_attribute("TmUnit", "S"); // 1
    Instrmt_11_set.insert("S");
    Instrmt_11.add_attribute("CpnRt", "1649154.800000"); // 1
    Instrmt_11_set.insert("1649154.800000");
    Instrmt_11.add_attribute("Exch", "SecurityExchange_t_1445998350"); // 1
    Instrmt_11_set.insert("SecurityExchange_t_1445998350");
    Instrmt_11.add_attribute("PosLmt", "965734871"); // 1
    Instrmt_11_set.insert("965734871");
    Instrmt_11.add_attribute("NTPosLmt", "407904658"); // 1
    Instrmt_11_set.insert("407904658");
    Instrmt_11.add_attribute("Issr", "Issuer_t_2112437148"); // 1
    Instrmt_11_set.insert("Issuer_t_2112437148");
    Instrmt_11.add_attribute("EncIssrLen", "858944058"); // 1
    Instrmt_11_set.insert("858944058");
    Instrmt_11.add_attribute("EncIssr", "EncodedIssuer_t_1404277421"); // 1
    Instrmt_11_set.insert("EncodedIssuer_t_1404277421");
    Instrmt_11.add_attribute("Desc", "SecurityDesc_t_1576005953"); // 1
    Instrmt_11_set.insert("SecurityDesc_t_1576005953");
    Instrmt_11.add_attribute("EncSecDescLen", "566016151"); // 1
    Instrmt_11_set.insert("566016151");
    Instrmt_11.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_777295089"); // 1
    Instrmt_11_set.insert("EncodedSecurityDesc_t_777295089");
    Instrmt_11.add_attribute("Pool", "Pool_t_512037079"); // 1
    Instrmt_11_set.insert("Pool_t_512037079");
    Instrmt_11.add_attribute("CSetMo", "1533531599"); // 1
    Instrmt_11_set.insert("1533531599");
    Instrmt_11.add_attribute("CPPgm", "1"); // 1
    Instrmt_11_set.insert("1");
    Instrmt_11.add_attribute("CPRegT", "CPRegType_t_1924585158"); // 1
    Instrmt_11_set.insert("CPRegType_t_1924585158");
    Instrmt_11.add_attribute("Dated", "DatedDate_t_1066838063"); // 1
    Instrmt_11_set.insert("DatedDate_t_1066838063");
    Instrmt_11.add_attribute("IntAcrl", "InterestAccrualDate_t_1498239826"); // 1
    Instrmt_11_set.insert("InterestAccrualDate_t_1498239826");
    all_values.push_back(Instrmt_11_set);
    all_compo_names.insert("Instrmt_11_set");

    {
      xml_element AID_11{"AID"};
      multiset<string> AID_11_set;
      AID_11.add_attribute("AltID", "SecurityAltID_t_2102327685"); // 2
      AID_11_set.insert("SecurityAltID_t_2102327685");
      AID_11.add_attribute("AltIDSrc", "F"); // 2
      AID_11_set.insert("F");
      all_values.push_back(AID_11_set);
      all_compo_names.insert("AID_11_set");

      Instrmt_11.add_element(AID_11);
    }
    {
      xml_element SecXML_11{"SecXML"};
      multiset<string> SecXML_11_set;
      SecXML_11.add_attribute("Schema", "SecurityXMLSchema_t_151087741"); // 2
      SecXML_11_set.insert("SecurityXMLSchema_t_151087741");
      all_values.push_back(SecXML_11_set);
      all_compo_names.insert("SecXML_11_set");

      Instrmt_11.add_element(SecXML_11);
    }
    {
      xml_element Evnt_11{"Evnt"};
      multiset<string> Evnt_11_set;
      Evnt_11.add_attribute("EventTyp", "17"); // 2
      Evnt_11_set.insert("17");
      Evnt_11.add_attribute("Dt", "EventDate_t_258548218"); // 2
      Evnt_11_set.insert("EventDate_t_258548218");
      Evnt_11.add_attribute("Tm", "EventTime_t_1267953780"); // 2
      Evnt_11_set.insert("EventTime_t_1267953780");
      Evnt_11.add_attribute("Px", "905605.820000"); // 2
      Evnt_11_set.insert("905605.820000");
      Evnt_11.add_attribute("Txt", "EventText_t_1028098843"); // 2
      Evnt_11_set.insert("EventText_t_1028098843");
      all_values.push_back(Evnt_11_set);
      all_compo_names.insert("Evnt_11_set");

      Instrmt_11.add_element(Evnt_11);
    }
    {
      xml_element Pty_84{"Pty"};
      multiset<string> Pty_84_set;
      Pty_84.add_attribute("ID", "InstrumentPartyID_t_81997556"); // 2
      Pty_84_set.insert("InstrumentPartyID_t_81997556");
      Pty_84.add_attribute("Src", "B"); // 2
      Pty_84_set.insert("B");
      Pty_84.add_attribute("R", "37"); // 2
      Pty_84_set.insert("37");
      all_values.push_back(Pty_84_set);
      all_compo_names.insert("Pty_84_set");

      {
        xml_element Sub_84{"Sub"};
        multiset<string> Sub_84_set;
        Sub_84.add_attribute("ID", "InstrumentPartySubID_t_2137161654"); // 3
        Sub_84_set.insert("InstrumentPartySubID_t_2137161654");
        Sub_84.add_attribute("Typ", "5"); // 3
        Sub_84_set.insert("5");
        all_values.push_back(Sub_84_set);
        all_compo_names.insert("Sub_84_set");

        Pty_84.add_element(Sub_84);
      }
      Instrmt_11.add_element(Pty_84);
    }
    {
      xml_element CmplxEvnt_11{"CmplxEvnt"};
      multiset<string> CmplxEvnt_11_set;
      CmplxEvnt_11.add_attribute("Typ", "1"); // 2
      CmplxEvnt_11_set.insert("1");
      CmplxEvnt_11.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1363642515"); // 2
      CmplxEvnt_11_set.insert("ComplexOptPayoutAmount_t_1363642515");
      CmplxEvnt_11.add_attribute("Px", "12358127.570000"); // 2
      CmplxEvnt_11_set.insert("12358127.570000");
      CmplxEvnt_11.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_11_set.insert("2");
      CmplxEvnt_11.add_attribute("PxBndryPrcsn", "1818937.380000"); // 2
      CmplxEvnt_11_set.insert("1818937.380000");
      CmplxEvnt_11.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_11_set.insert("1");
      CmplxEvnt_11.add_attribute("Cond", "1"); // 2
      CmplxEvnt_11_set.insert("1");
      all_values.push_back(CmplxEvnt_11_set);
      all_compo_names.insert("CmplxEvnt_11_set");

      {
        xml_element EvntDts_11{"EvntDts"};
        multiset<string> EvntDts_11_set;
        EvntDts_11.add_attribute("StartDt", "ComplexEventStartDate_t_1040837796"); // 3
        EvntDts_11_set.insert("ComplexEventStartDate_t_1040837796");
        EvntDts_11.add_attribute("EndDt", "ComplexEventEndDate_t_900511188"); // 3
        EvntDts_11_set.insert("ComplexEventEndDate_t_900511188");
        all_values.push_back(EvntDts_11_set);
        all_compo_names.insert("EvntDts_11_set");

        {
          xml_element EvntTms_11{"EvntTms"};
          multiset<string> EvntTms_11_set;
          EvntTms_11.add_attribute("StartTm", "379475991"); // 4
          EvntTms_11_set.insert("379475991");
          EvntTms_11.add_attribute("EndTm", "1606853947"); // 4
          EvntTms_11_set.insert("1606853947");
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
    xml_element FinDetls_8{"FinDetls"};
    multiset<string> FinDetls_8_set;
    FinDetls_8.add_attribute("AgmtDesc", "AgreementDesc_t_1677806277"); // 1
    FinDetls_8_set.insert("AgreementDesc_t_1677806277");
    FinDetls_8.add_attribute("AgmtID", "AgreementID_t_891513071"); // 1
    FinDetls_8_set.insert("AgreementID_t_891513071");
    FinDetls_8.add_attribute("AgmtDt", "AgreementDate_t_992901899"); // 1
    FinDetls_8_set.insert("AgreementDate_t_992901899");
    FinDetls_8.add_attribute("AgmtCcy", "CHF"); // 1
    FinDetls_8_set.insert("CHF");
    FinDetls_8.add_attribute("TrmTyp", "3"); // 1
    FinDetls_8_set.insert("3");
    FinDetls_8.add_attribute("StartDt", "StartDate_t_345518491"); // 1
    FinDetls_8_set.insert("StartDate_t_345518491");
    FinDetls_8.add_attribute("EndDt", "EndDate_t_623458618"); // 1
    FinDetls_8_set.insert("EndDate_t_623458618");
    FinDetls_8.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_8_set.insert("0");
    FinDetls_8.add_attribute("MgnRatio", "4966062.320000"); // 1
    FinDetls_8_set.insert("4966062.320000");
    all_values.push_back(FinDetls_8_set);
    all_compo_names.insert("FinDetls_8_set");

    elt.add_element(FinDetls_8);
  } // end FinDetls
  { // Leg
    xml_element Leg_18{"Leg"};
    multiset<string> Leg_18_set;
    Leg_18.add_attribute("Sym", "LegSymbol_t_849646754"); // 1
    Leg_18_set.insert("LegSymbol_t_849646754");
    Leg_18.add_attribute("Sfx", "WI"); // 1
    Leg_18_set.insert("WI");
    Leg_18.add_attribute("ID", "LegSecurityID_t_504851929"); // 1
    Leg_18_set.insert("LegSecurityID_t_504851929");
    Leg_18.add_attribute("Src", "E"); // 1
    Leg_18_set.insert("E");
    Leg_18.add_attribute("Prod", "9"); // 1
    Leg_18_set.insert("9");
    Leg_18.add_attribute("CFI", "LegCFICode_t_1548463590"); // 1
    Leg_18_set.insert("LegCFICode_t_1548463590");
    Leg_18.add_attribute("SecTyp", "SECPLEDGE"); // 1
    Leg_18_set.insert("SECPLEDGE");
    Leg_18.add_attribute("SecSubTyp", "LegSecuritySubType_t_1836235576"); // 1
    Leg_18_set.insert("LegSecuritySubType_t_1836235576");
    Leg_18.add_attribute("MMY", "471877219"); // 1
    Leg_18_set.insert("471877219");
    Leg_18.add_attribute("Mat", "LegMaturityDate_t_39703226"); // 1
    Leg_18_set.insert("LegMaturityDate_t_39703226");
    Leg_18.add_attribute("MatTm", "1052394443"); // 1
    Leg_18_set.insert("1052394443");
    Leg_18.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1707689976"); // 1
    Leg_18_set.insert("LegCouponPaymentDate_t_1707689976");
    Leg_18.add_attribute("Issued", "LegIssueDate_t_1025703412"); // 1
    Leg_18_set.insert("LegIssueDate_t_1025703412");
    Leg_18.add_attribute("RepoCollSecTyp", "1234288181"); // 1
    Leg_18_set.insert("1234288181");
    Leg_18.add_attribute("RepoTrm", "1203923743"); // 1
    Leg_18_set.insert("1203923743");
    Leg_18.add_attribute("RepoRt", "19766570.980000"); // 1
    Leg_18_set.insert("19766570.980000");
    Leg_18.add_attribute("Fctr", "1276423.290000"); // 1
    Leg_18_set.insert("1276423.290000");
    Leg_18.add_attribute("CrdRtg", "LegCreditRating_t_2104434931"); // 1
    Leg_18_set.insert("LegCreditRating_t_2104434931");
    Leg_18.add_attribute("Rgstry", "LegInstrRegistry_t_208649441"); // 1
    Leg_18_set.insert("LegInstrRegistry_t_208649441");
    Leg_18.add_attribute("Ctry", "1734496277"); // 1
    Leg_18_set.insert("1734496277");
    Leg_18.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1634757560"); // 1
    Leg_18_set.insert("LegStateOrProvinceOfIssue_t_1634757560");
    Leg_18.add_attribute("Lcl", "LegLocaleOfIssue_t_1100162512"); // 1
    Leg_18_set.insert("LegLocaleOfIssue_t_1100162512");
    Leg_18.add_attribute("Redeem", "LegRedemptionDate_t_579914528"); // 1
    Leg_18_set.insert("LegRedemptionDate_t_579914528");
    Leg_18.add_attribute("Strk", "4820362.240000"); // 1
    Leg_18_set.insert("4820362.240000");
    Leg_18.add_attribute("StrkCcy", "JPY"); // 1
    Leg_18_set.insert("JPY");
    Leg_18.add_attribute("OptA", "827554715"); // 1
    Leg_18_set.insert("827554715");
    Leg_18.add_attribute("Cmult", "2447520.630000"); // 1
    Leg_18_set.insert("2447520.630000");
    Leg_18.add_attribute("MultTyp", "2"); // 1
    Leg_18_set.insert("2");
    Leg_18.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_18_set.insert("3");
    Leg_18.add_attribute("UOM", "MWh"); // 1
    Leg_18_set.insert("MWh");
    Leg_18.add_attribute("UOMQty", "19329161.330000"); // 1
    Leg_18_set.insert("19329161.330000");
    Leg_18.add_attribute("PxUOM", "Gal"); // 1
    Leg_18_set.insert("Gal");
    Leg_18.add_attribute("PxUOMQty", "11638953.400000"); // 1
    Leg_18_set.insert("11638953.400000");
    Leg_18.add_attribute("TmUnit", "Yr"); // 1
    Leg_18_set.insert("Yr");
    Leg_18.add_attribute("ExerStyle", "0"); // 1
    Leg_18_set.insert("0");
    Leg_18.add_attribute("CpnRt", "5648752.820000"); // 1
    Leg_18_set.insert("5648752.820000");
    Leg_18.add_attribute("Exch", "LegSecurityExchange_t_15395825"); // 1
    Leg_18_set.insert("LegSecurityExchange_t_15395825");
    Leg_18.add_attribute("Issr", "LegIssuer_t_329063162"); // 1
    Leg_18_set.insert("LegIssuer_t_329063162");
    Leg_18.add_attribute("EncLegIssrLen", "1036752501"); // 1
    Leg_18_set.insert("1036752501");
    Leg_18.add_attribute("EncLegIssr", "EncodedLegIssuer_t_55099051"); // 1
    Leg_18_set.insert("EncodedLegIssuer_t_55099051");
    Leg_18.add_attribute("Desc", "LegSecurityDesc_t_1381457605"); // 1
    Leg_18_set.insert("LegSecurityDesc_t_1381457605");
    Leg_18.add_attribute("EncLegSecDescLen", "596958829"); // 1
    Leg_18_set.insert("596958829");
    Leg_18.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1080802463"); // 1
    Leg_18_set.insert("EncodedLegSecurityDesc_t_1080802463");
    Leg_18.add_attribute("RatioQty", "4682621.380000"); // 1
    Leg_18_set.insert("4682621.380000");
    Leg_18.add_attribute("Side", "D"); // 1
    Leg_18_set.insert("D");
    Leg_18.add_attribute("Ccy", "GBP"); // 1
    Leg_18_set.insert("GBP");
    Leg_18.add_attribute("Pool", "LegPool_t_1757833855"); // 1
    Leg_18_set.insert("LegPool_t_1757833855");
    Leg_18.add_attribute("Dated", "LegDatedDate_t_1118625354"); // 1
    Leg_18_set.insert("LegDatedDate_t_1118625354");
    Leg_18.add_attribute("CSetMo", "182917097"); // 1
    Leg_18_set.insert("182917097");
    Leg_18.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1245107767"); // 1
    Leg_18_set.insert("LegInterestAccrualDate_t_1245107767");
    Leg_18.add_attribute("PutCall", "71304219"); // 1
    Leg_18_set.insert("71304219");
    Leg_18.add_attribute("LegOptionRatio", "7628316.250000"); // 1
    Leg_18_set.insert("7628316.250000");
    Leg_18.add_attribute("Px", "17271439.920000"); // 1
    Leg_18_set.insert("17271439.920000");
    all_values.push_back(Leg_18_set);
    all_compo_names.insert("Leg_18_set");

    {
      xml_element LegAID_18{"LegAID"};
      multiset<string> LegAID_18_set;
      LegAID_18.add_attribute("SecAltID", "LegSecurityAltID_t_1840081312"); // 2
      LegAID_18_set.insert("LegSecurityAltID_t_1840081312");
      LegAID_18.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_18_set.insert("G");
      all_values.push_back(LegAID_18_set);
      all_compo_names.insert("LegAID_18_set");

      Leg_18.add_element(LegAID_18);
    }
    elt.add_element(Leg_18);
  } // end Leg
  { // Leg
    xml_element Leg_19{"Leg"};
    multiset<string> Leg_19_set;
    Leg_19.add_attribute("Sym", "LegSymbol_t_407215059"); // 1
    Leg_19_set.insert("LegSymbol_t_407215059");
    Leg_19.add_attribute("Sfx", "CD"); // 1
    Leg_19_set.insert("CD");
    Leg_19.add_attribute("ID", "LegSecurityID_t_190788197"); // 1
    Leg_19_set.insert("LegSecurityID_t_190788197");
    Leg_19.add_attribute("Src", "A"); // 1
    Leg_19_set.insert("A");
    Leg_19.add_attribute("Prod", "13"); // 1
    Leg_19_set.insert("13");
    Leg_19.add_attribute("CFI", "LegCFICode_t_2123704330"); // 1
    Leg_19_set.insert("LegCFICode_t_2123704330");
    Leg_19.add_attribute("SecTyp", "PS"); // 1
    Leg_19_set.insert("PS");
    Leg_19.add_attribute("SecSubTyp", "LegSecuritySubType_t_1760288479"); // 1
    Leg_19_set.insert("LegSecuritySubType_t_1760288479");
    Leg_19.add_attribute("MMY", "1639398765"); // 1
    Leg_19_set.insert("1639398765");
    Leg_19.add_attribute("Mat", "LegMaturityDate_t_1165440907"); // 1
    Leg_19_set.insert("LegMaturityDate_t_1165440907");
    Leg_19.add_attribute("MatTm", "177680114"); // 1
    Leg_19_set.insert("177680114");
    Leg_19.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1654794590"); // 1
    Leg_19_set.insert("LegCouponPaymentDate_t_1654794590");
    Leg_19.add_attribute("Issued", "LegIssueDate_t_1494504069"); // 1
    Leg_19_set.insert("LegIssueDate_t_1494504069");
    Leg_19.add_attribute("RepoCollSecTyp", "1214432615"); // 1
    Leg_19_set.insert("1214432615");
    Leg_19.add_attribute("RepoTrm", "1709893641"); // 1
    Leg_19_set.insert("1709893641");
    Leg_19.add_attribute("RepoRt", "7284780.270000"); // 1
    Leg_19_set.insert("7284780.270000");
    Leg_19.add_attribute("Fctr", "18113914.450000"); // 1
    Leg_19_set.insert("18113914.450000");
    Leg_19.add_attribute("CrdRtg", "LegCreditRating_t_643212456"); // 1
    Leg_19_set.insert("LegCreditRating_t_643212456");
    Leg_19.add_attribute("Rgstry", "LegInstrRegistry_t_1196740165"); // 1
    Leg_19_set.insert("LegInstrRegistry_t_1196740165");
    Leg_19.add_attribute("Ctry", "1464790369"); // 1
    Leg_19_set.insert("1464790369");
    Leg_19.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1553188369"); // 1
    Leg_19_set.insert("LegStateOrProvinceOfIssue_t_1553188369");
    Leg_19.add_attribute("Lcl", "LegLocaleOfIssue_t_1792644633"); // 1
    Leg_19_set.insert("LegLocaleOfIssue_t_1792644633");
    Leg_19.add_attribute("Redeem", "LegRedemptionDate_t_1075140577"); // 1
    Leg_19_set.insert("LegRedemptionDate_t_1075140577");
    Leg_19.add_attribute("Strk", "5243300.750000"); // 1
    Leg_19_set.insert("5243300.750000");
    Leg_19.add_attribute("StrkCcy", "USD"); // 1
    Leg_19_set.insert("USD");
    Leg_19.add_attribute("OptA", "595634294"); // 1
    Leg_19_set.insert("595634294");
    Leg_19.add_attribute("Cmult", "5909097.070000"); // 1
    Leg_19_set.insert("5909097.070000");
    Leg_19.add_attribute("MultTyp", "0"); // 1
    Leg_19_set.insert("0");
    Leg_19.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_19_set.insert("4");
    Leg_19.add_attribute("UOM", "Bbl"); // 1
    Leg_19_set.insert("Bbl");
    Leg_19.add_attribute("UOMQty", "1596401.000000"); // 1
    Leg_19_set.insert("1596401.000000");
    Leg_19.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_19_set.insert("MMbbl");
    Leg_19.add_attribute("PxUOMQty", "20367003.720000"); // 1
    Leg_19_set.insert("20367003.720000");
    Leg_19.add_attribute("TmUnit", "Min"); // 1
    Leg_19_set.insert("Min");
    Leg_19.add_attribute("ExerStyle", "2"); // 1
    Leg_19_set.insert("2");
    Leg_19.add_attribute("CpnRt", "20129210.540000"); // 1
    Leg_19_set.insert("20129210.540000");
    Leg_19.add_attribute("Exch", "LegSecurityExchange_t_268662132"); // 1
    Leg_19_set.insert("LegSecurityExchange_t_268662132");
    Leg_19.add_attribute("Issr", "LegIssuer_t_434779657"); // 1
    Leg_19_set.insert("LegIssuer_t_434779657");
    Leg_19.add_attribute("EncLegIssrLen", "1504836171"); // 1
    Leg_19_set.insert("1504836171");
    Leg_19.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1434103039"); // 1
    Leg_19_set.insert("EncodedLegIssuer_t_1434103039");
    Leg_19.add_attribute("Desc", "LegSecurityDesc_t_612459771"); // 1
    Leg_19_set.insert("LegSecurityDesc_t_612459771");
    Leg_19.add_attribute("EncLegSecDescLen", "1012147113"); // 1
    Leg_19_set.insert("1012147113");
    Leg_19.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_781123460"); // 1
    Leg_19_set.insert("EncodedLegSecurityDesc_t_781123460");
    Leg_19.add_attribute("RatioQty", "18268923.870000"); // 1
    Leg_19_set.insert("18268923.870000");
    Leg_19.add_attribute("Side", "3"); // 1
    Leg_19_set.insert("3");
    Leg_19.add_attribute("Ccy", "GBP"); // 1
    Leg_19_set.insert("GBP");
    Leg_19.add_attribute("Pool", "LegPool_t_1217769562"); // 1
    Leg_19_set.insert("LegPool_t_1217769562");
    Leg_19.add_attribute("Dated", "LegDatedDate_t_558858005"); // 1
    Leg_19_set.insert("LegDatedDate_t_558858005");
    Leg_19.add_attribute("CSetMo", "808106905"); // 1
    Leg_19_set.insert("808106905");
    Leg_19.add_attribute("IntAcrl", "LegInterestAccrualDate_t_623474283"); // 1
    Leg_19_set.insert("LegInterestAccrualDate_t_623474283");
    Leg_19.add_attribute("PutCall", "204018990"); // 1
    Leg_19_set.insert("204018990");
    Leg_19.add_attribute("LegOptionRatio", "18832474.820000"); // 1
    Leg_19_set.insert("18832474.820000");
    Leg_19.add_attribute("Px", "11478043.590000"); // 1
    Leg_19_set.insert("11478043.590000");
    all_values.push_back(Leg_19_set);
    all_compo_names.insert("Leg_19_set");

    {
      xml_element LegAID_19{"LegAID"};
      multiset<string> LegAID_19_set;
      LegAID_19.add_attribute("SecAltID", "LegSecurityAltID_t_32097073"); // 2
      LegAID_19_set.insert("LegSecurityAltID_t_32097073");
      LegAID_19.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_19_set.insert("2");
      all_values.push_back(LegAID_19_set);
      all_compo_names.insert("LegAID_19_set");

      Leg_19.add_element(LegAID_19);
    }
    elt.add_element(Leg_19);
  } // end Leg
  { // Leg
    xml_element Leg_20{"Leg"};
    multiset<string> Leg_20_set;
    Leg_20.add_attribute("Sym", "LegSymbol_t_1743438653"); // 1
    Leg_20_set.insert("LegSymbol_t_1743438653");
    Leg_20.add_attribute("Sfx", "CD"); // 1
    Leg_20_set.insert("CD");
    Leg_20.add_attribute("ID", "LegSecurityID_t_1808437219"); // 1
    Leg_20_set.insert("LegSecurityID_t_1808437219");
    Leg_20.add_attribute("Src", "5"); // 1
    Leg_20_set.insert("5");
    Leg_20.add_attribute("Prod", "8"); // 1
    Leg_20_set.insert("8");
    Leg_20.add_attribute("CFI", "LegCFICode_t_1968077319"); // 1
    Leg_20_set.insert("LegCFICode_t_1968077319");
    Leg_20.add_attribute("SecTyp", "YCD"); // 1
    Leg_20_set.insert("YCD");
    Leg_20.add_attribute("SecSubTyp", "LegSecuritySubType_t_210652031"); // 1
    Leg_20_set.insert("LegSecuritySubType_t_210652031");
    Leg_20.add_attribute("MMY", "1711609779"); // 1
    Leg_20_set.insert("1711609779");
    Leg_20.add_attribute("Mat", "LegMaturityDate_t_931743477"); // 1
    Leg_20_set.insert("LegMaturityDate_t_931743477");
    Leg_20.add_attribute("MatTm", "76089437"); // 1
    Leg_20_set.insert("76089437");
    Leg_20.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1980271911"); // 1
    Leg_20_set.insert("LegCouponPaymentDate_t_1980271911");
    Leg_20.add_attribute("Issued", "LegIssueDate_t_1366523135"); // 1
    Leg_20_set.insert("LegIssueDate_t_1366523135");
    Leg_20.add_attribute("RepoCollSecTyp", "1580925609"); // 1
    Leg_20_set.insert("1580925609");
    Leg_20.add_attribute("RepoTrm", "1266891302"); // 1
    Leg_20_set.insert("1266891302");
    Leg_20.add_attribute("RepoRt", "19789829.060000"); // 1
    Leg_20_set.insert("19789829.060000");
    Leg_20.add_attribute("Fctr", "4455890.740000"); // 1
    Leg_20_set.insert("4455890.740000");
    Leg_20.add_attribute("CrdRtg", "LegCreditRating_t_2048014762"); // 1
    Leg_20_set.insert("LegCreditRating_t_2048014762");
    Leg_20.add_attribute("Rgstry", "LegInstrRegistry_t_1658391645"); // 1
    Leg_20_set.insert("LegInstrRegistry_t_1658391645");
    Leg_20.add_attribute("Ctry", "1020146181"); // 1
    Leg_20_set.insert("1020146181");
    Leg_20.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1410132602"); // 1
    Leg_20_set.insert("LegStateOrProvinceOfIssue_t_1410132602");
    Leg_20.add_attribute("Lcl", "LegLocaleOfIssue_t_1001708181"); // 1
    Leg_20_set.insert("LegLocaleOfIssue_t_1001708181");
    Leg_20.add_attribute("Redeem", "LegRedemptionDate_t_90432095"); // 1
    Leg_20_set.insert("LegRedemptionDate_t_90432095");
    Leg_20.add_attribute("Strk", "19689906.070000"); // 1
    Leg_20_set.insert("19689906.070000");
    Leg_20.add_attribute("StrkCcy", "CHF"); // 1
    Leg_20_set.insert("CHF");
    Leg_20.add_attribute("OptA", "25525949"); // 1
    Leg_20_set.insert("25525949");
    Leg_20.add_attribute("Cmult", "15455789.210000"); // 1
    Leg_20_set.insert("15455789.210000");
    Leg_20.add_attribute("MultTyp", "0"); // 1
    Leg_20_set.insert("0");
    Leg_20.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_20_set.insert("2");
    Leg_20.add_attribute("UOM", "tn"); // 1
    Leg_20_set.insert("tn");
    Leg_20.add_attribute("UOMQty", "14576657.430000"); // 1
    Leg_20_set.insert("14576657.430000");
    Leg_20.add_attribute("PxUOM", "USD"); // 1
    Leg_20_set.insert("USD");
    Leg_20.add_attribute("PxUOMQty", "11150610.240000"); // 1
    Leg_20_set.insert("11150610.240000");
    Leg_20.add_attribute("TmUnit", "S"); // 1
    Leg_20_set.insert("S");
    Leg_20.add_attribute("ExerStyle", "1"); // 1
    Leg_20_set.insert("1");
    Leg_20.add_attribute("CpnRt", "9356546.950000"); // 1
    Leg_20_set.insert("9356546.950000");
    Leg_20.add_attribute("Exch", "LegSecurityExchange_t_1451621359"); // 1
    Leg_20_set.insert("LegSecurityExchange_t_1451621359");
    Leg_20.add_attribute("Issr", "LegIssuer_t_1212717141"); // 1
    Leg_20_set.insert("LegIssuer_t_1212717141");
    Leg_20.add_attribute("EncLegIssrLen", "499780826"); // 1
    Leg_20_set.insert("499780826");
    Leg_20.add_attribute("EncLegIssr", "EncodedLegIssuer_t_235881189"); // 1
    Leg_20_set.insert("EncodedLegIssuer_t_235881189");
    Leg_20.add_attribute("Desc", "LegSecurityDesc_t_1288806578"); // 1
    Leg_20_set.insert("LegSecurityDesc_t_1288806578");
    Leg_20.add_attribute("EncLegSecDescLen", "332569089"); // 1
    Leg_20_set.insert("332569089");
    Leg_20.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1602404324"); // 1
    Leg_20_set.insert("EncodedLegSecurityDesc_t_1602404324");
    Leg_20.add_attribute("RatioQty", "7222485.390000"); // 1
    Leg_20_set.insert("7222485.390000");
    Leg_20.add_attribute("Side", "8"); // 1
    Leg_20_set.insert("8");
    Leg_20.add_attribute("Ccy", "GBP"); // 1
    Leg_20_set.insert("GBP");
    Leg_20.add_attribute("Pool", "LegPool_t_1499991506"); // 1
    Leg_20_set.insert("LegPool_t_1499991506");
    Leg_20.add_attribute("Dated", "LegDatedDate_t_944811580"); // 1
    Leg_20_set.insert("LegDatedDate_t_944811580");
    Leg_20.add_attribute("CSetMo", "40500147"); // 1
    Leg_20_set.insert("40500147");
    Leg_20.add_attribute("IntAcrl", "LegInterestAccrualDate_t_762640460"); // 1
    Leg_20_set.insert("LegInterestAccrualDate_t_762640460");
    Leg_20.add_attribute("PutCall", "1946519761"); // 1
    Leg_20_set.insert("1946519761");
    Leg_20.add_attribute("LegOptionRatio", "1309322.420000"); // 1
    Leg_20_set.insert("1309322.420000");
    Leg_20.add_attribute("Px", "5841474.190000"); // 1
    Leg_20_set.insert("5841474.190000");
    all_values.push_back(Leg_20_set);
    all_compo_names.insert("Leg_20_set");

    {
      xml_element LegAID_20{"LegAID"};
      multiset<string> LegAID_20_set;
      LegAID_20.add_attribute("SecAltID", "LegSecurityAltID_t_1608851200"); // 2
      LegAID_20_set.insert("LegSecurityAltID_t_1608851200");
      LegAID_20.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_20_set.insert("C");
      all_values.push_back(LegAID_20_set);
      all_compo_names.insert("LegAID_20_set");

      Leg_20.add_element(LegAID_20);
    }
    elt.add_element(Leg_20);
  } // end Leg
  { // UndColl
    xml_element UndColl_3{"UndColl"};
    multiset<string> UndColl_3_set;
    UndColl_3.add_attribute("Actn", "2"); // 1
    UndColl_3_set.insert("2");
    all_values.push_back(UndColl_3_set);
    all_compo_names.insert("UndColl_3_set");

    {
      xml_element Undly_15{"Undly"};
      multiset<string> Undly_15_set;
      Undly_15.add_attribute("Sym", "UnderlyingSymbol_t_559065711"); // 2
      Undly_15_set.insert("UnderlyingSymbol_t_559065711");
      Undly_15.add_attribute("Sfx", "WI"); // 2
      Undly_15_set.insert("WI");
      Undly_15.add_attribute("ID", "UnderlyingSecurityID_t_313570278"); // 2
      Undly_15_set.insert("UnderlyingSecurityID_t_313570278");
      Undly_15.add_attribute("Src", "E"); // 2
      Undly_15_set.insert("E");
      Undly_15.add_attribute("Prod", "13"); // 2
      Undly_15_set.insert("13");
      Undly_15.add_attribute("CFI", "UnderlyingCFICode_t_1428631302"); // 2
      Undly_15_set.insert("UnderlyingCFICode_t_1428631302");
      Undly_15.add_attribute("SecTyp", "TINT"); // 2
      Undly_15_set.insert("TINT");
      Undly_15.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_202507656"); // 2
      Undly_15_set.insert("UnderlyingSecuritySubType_t_202507656");
      Undly_15.add_attribute("MMY", "216802350"); // 2
      Undly_15_set.insert("216802350");
      Undly_15.add_attribute("Mat", "UnderlyingMaturityDate_t_515238226"); // 2
      Undly_15_set.insert("UnderlyingMaturityDate_t_515238226");
      Undly_15.add_attribute("MatTm", "1415224797"); // 2
      Undly_15_set.insert("1415224797");
      Undly_15.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_716583176"); // 2
      Undly_15_set.insert("UnderlyingCouponPaymentDate_t_716583176");
      Undly_15.add_attribute("RestrctTyp", "XR"); // 2
      Undly_15_set.insert("XR");
      Undly_15.add_attribute("Snrty", "SD"); // 2
      Undly_15_set.insert("SD");
      Undly_15.add_attribute("NotlPctOut", "10491522.660000"); // 2
      Undly_15_set.insert("10491522.660000");
      Undly_15.add_attribute("OrigNotlPctOut", "2060400.910000"); // 2
      Undly_15_set.insert("2060400.910000");
      Undly_15.add_attribute("AttchPnt", "12787962.670000"); // 2
      Undly_15_set.insert("12787962.670000");
      Undly_15.add_attribute("DetchPnt", "5011290.090000"); // 2
      Undly_15_set.insert("5011290.090000");
      Undly_15.add_attribute("Issued", "UnderlyingIssueDate_t_1639943674"); // 2
      Undly_15_set.insert("UnderlyingIssueDate_t_1639943674");
      Undly_15.add_attribute("RepoCollSecTyp", "299150233"); // 2
      Undly_15_set.insert("299150233");
      Undly_15.add_attribute("RepoTrm", "2001120515"); // 2
      Undly_15_set.insert("2001120515");
      Undly_15.add_attribute("RepoRt", "4372716.060000"); // 2
      Undly_15_set.insert("4372716.060000");
      Undly_15.add_attribute("Fctr", "3396503.800000"); // 2
      Undly_15_set.insert("3396503.800000");
      Undly_15.add_attribute("CrdRtg", "UnderlyingCreditRating_t_616277327"); // 2
      Undly_15_set.insert("UnderlyingCreditRating_t_616277327");
      Undly_15.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_236307719"); // 2
      Undly_15_set.insert("UnderlyingInstrRegistry_t_236307719");
      Undly_15.add_attribute("Ctry", "470582622"); // 2
      Undly_15_set.insert("470582622");
      Undly_15.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1200424746"); // 2
      Undly_15_set.insert("UnderlyingStateOrProvinceOfIssue_t_1200424746");
      Undly_15.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1845158920"); // 2
      Undly_15_set.insert("UnderlyingLocaleOfIssue_t_1845158920");
      Undly_15.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1315421244"); // 2
      Undly_15_set.insert("UnderlyingRedemptionDate_t_1315421244");
      Undly_15.add_attribute("StrkPx", "18100981.150000"); // 2
      Undly_15_set.insert("18100981.150000");
      Undly_15.add_attribute("StrkCcy", "CHF"); // 2
      Undly_15_set.insert("CHF");
      Undly_15.add_attribute("OptA", "329910858"); // 2
      Undly_15_set.insert("329910858");
      Undly_15.add_attribute("Mult", "10181920.240000"); // 2
      Undly_15_set.insert("10181920.240000");
      Undly_15.add_attribute("MultTyp", "2"); // 2
      Undly_15_set.insert("2");
      Undly_15.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_15_set.insert("2");
      Undly_15.add_attribute("UOM", "Bbl"); // 2
      Undly_15_set.insert("Bbl");
      Undly_15.add_attribute("UOMQty", "8073516.290000"); // 2
      Undly_15_set.insert("8073516.290000");
      Undly_15.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_15_set.insert("oz_tr");
      Undly_15.add_attribute("PxUOMQty", "5161420.290000"); // 2
      Undly_15_set.insert("5161420.290000");
      Undly_15.add_attribute("TmUnit", "S"); // 2
      Undly_15_set.insert("S");
      Undly_15.add_attribute("ExerStyle", "2"); // 2
      Undly_15_set.insert("2");
      Undly_15.add_attribute("CpnRt", "12327252.050000"); // 2
      Undly_15_set.insert("12327252.050000");
      Undly_15.add_attribute("Exch", "UnderlyingSecurityExchange_t_2073709271"); // 2
      Undly_15_set.insert("UnderlyingSecurityExchange_t_2073709271");
      Undly_15.add_attribute("Issr", "UnderlyingIssuer_t_1704633584"); // 2
      Undly_15_set.insert("UnderlyingIssuer_t_1704633584");
      Undly_15.add_attribute("EncUndIssrLen", "134393823"); // 2
      Undly_15_set.insert("134393823");
      Undly_15.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_132265715"); // 2
      Undly_15_set.insert("EncodedUnderlyingIssuer_t_132265715");
      Undly_15.add_attribute("Desc", "UnderlyingSecurityDesc_t_835946203"); // 2
      Undly_15_set.insert("UnderlyingSecurityDesc_t_835946203");
      Undly_15.add_attribute("EncUndSecDescLen", "635522833"); // 2
      Undly_15_set.insert("635522833");
      Undly_15.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1772209389"); // 2
      Undly_15_set.insert("EncodedUnderlyingSecurityDesc_t_1772209389");
      Undly_15.add_attribute("CPPgm", "UnderlyingCPProgram_t_1135096436"); // 2
      Undly_15_set.insert("UnderlyingCPProgram_t_1135096436");
      Undly_15.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_489159700"); // 2
      Undly_15_set.insert("UnderlyingCPRegType_t_489159700");
      Undly_15.add_attribute("AllocPct", "619973.470000"); // 2
      Undly_15_set.insert("619973.470000");
      Undly_15.add_attribute("Ccy", "JPY"); // 2
      Undly_15_set.insert("JPY");
      Undly_15.add_attribute("Qty", "2983050.660000"); // 2
      Undly_15_set.insert("2983050.660000");
      Undly_15.add_attribute("SettlTyp", "4"); // 2
      Undly_15_set.insert("4");
      Undly_15.add_attribute("CashAmt", "UnderlyingCashAmount_t_158378126"); // 2
      Undly_15_set.insert("UnderlyingCashAmount_t_158378126");
      Undly_15.add_attribute("CashTyp", "FIXED"); // 2
      Undly_15_set.insert("FIXED");
      Undly_15.add_attribute("Px", "11132670.350000"); // 2
      Undly_15_set.insert("11132670.350000");
      Undly_15.add_attribute("DirtPx", "19684762.410000"); // 2
      Undly_15_set.insert("19684762.410000");
      Undly_15.add_attribute("EndPx", "7006020.840000"); // 2
      Undly_15_set.insert("7006020.840000");
      Undly_15.add_attribute("StartVal", "UnderlyingStartValue_t_840270342"); // 2
      Undly_15_set.insert("UnderlyingStartValue_t_840270342");
      Undly_15.add_attribute("CurVal", "UnderlyingCurrentValue_t_150903451"); // 2
      Undly_15_set.insert("UnderlyingCurrentValue_t_150903451");
      Undly_15.add_attribute("EndVal", "UnderlyingEndValue_t_1718794109"); // 2
      Undly_15_set.insert("UnderlyingEndValue_t_1718794109");
      Undly_15.add_attribute("AdjQty", "4365214.570000"); // 2
      Undly_15_set.insert("4365214.570000");
      Undly_15.add_attribute("FxRate", "18287405.030000"); // 2
      Undly_15_set.insert("18287405.030000");
      Undly_15.add_attribute("FxRateCalc", "M"); // 2
      Undly_15_set.insert("M");
      Undly_15.add_attribute("CapValu", "UnderlyingCapValue_t_1243873086"); // 2
      Undly_15_set.insert("UnderlyingCapValue_t_1243873086");
      Undly_15.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1561601563"); // 2
      Undly_15_set.insert("UnderlyingSettlMethod_t_1561601563");
      Undly_15.add_attribute("PutCall", "386792169"); // 2
      Undly_15_set.insert("386792169");
      all_values.push_back(Undly_15_set);
      all_compo_names.insert("Undly_15_set");

      {
        xml_element UndAID_15{"UndAID"};
        multiset<string> UndAID_15_set;
        UndAID_15.add_attribute("AltID", "UnderlyingSecurityAltID_t_418979294"); // 3
        UndAID_15_set.insert("UnderlyingSecurityAltID_t_418979294");
        UndAID_15.add_attribute("AltIDSrc", "K"); // 3
        UndAID_15_set.insert("K");
        all_values.push_back(UndAID_15_set);
        all_compo_names.insert("UndAID_15_set");

        Undly_15.add_element(UndAID_15);
      }
      {
        xml_element Stip_31{"Stip"};
        multiset<string> Stip_31_set;
        Stip_31.add_attribute("Typ", "INSURED"); // 3
        Stip_31_set.insert("INSURED");
        Stip_31.add_attribute("Val", "UnderlyingStipValue_t_345204918"); // 3
        Stip_31_set.insert("UnderlyingStipValue_t_345204918");
        all_values.push_back(Stip_31_set);
        all_compo_names.insert("Stip_31_set");

        Undly_15.add_element(Stip_31);
      }
      {
        xml_element Pty_85{"Pty"};
        multiset<string> Pty_85_set;
        Pty_85.add_attribute("ID", "UnderlyingInstrumentPartyID_t_119353709"); // 3
        Pty_85_set.insert("UnderlyingInstrumentPartyID_t_119353709");
        Pty_85.add_attribute("Src", "1"); // 3
        Pty_85_set.insert("1");
        Pty_85.add_attribute("R", "26"); // 3
        Pty_85_set.insert("26");
        all_values.push_back(Pty_85_set);
        all_compo_names.insert("Pty_85_set");

        {
          xml_element Sub_85{"Sub"};
          multiset<string> Sub_85_set;
          Sub_85.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_955299912"); // 4
          Sub_85_set.insert("UnderlyingInstrumentPartySubID_t_955299912");
          Sub_85.add_attribute("Typ", "27"); // 4
          Sub_85_set.insert("27");
          all_values.push_back(Sub_85_set);
          all_compo_names.insert("Sub_85_set");

          Pty_85.add_element(Sub_85);
        }
        Undly_15.add_element(Pty_85);
      }
      UndColl_3.add_element(Undly_15);
    }
    elt.add_element(UndColl_3);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_7{"TrdRegTS"};
    multiset<string> TrdRegTS_7_set;
    TrdRegTS_7.add_attribute("TS", "TrdRegTimestamp_t_2090396349"); // 1
    TrdRegTS_7_set.insert("TrdRegTimestamp_t_2090396349");
    TrdRegTS_7.add_attribute("Typ", "5"); // 1
    TrdRegTS_7_set.insert("5");
    TrdRegTS_7.add_attribute("Src", "TrdRegTimestampOrigin_t_164193721"); // 1
    TrdRegTS_7_set.insert("TrdRegTimestampOrigin_t_164193721");
    TrdRegTS_7.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_7_set.insert("T");
    TrdRegTS_7.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_7_set.insert("1");
    TrdRegTS_7.add_attribute("DskOrdHndlInst", "S.W"); // 1
    TrdRegTS_7_set.insert("S.W");
    all_values.push_back(TrdRegTS_7_set);
    all_compo_names.insert("TrdRegTS_7_set");

    elt.add_element(TrdRegTS_7);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_10{"MiscFees"};
    multiset<string> MiscFees_10_set;
    MiscFees_10.add_attribute("Amt", "MiscFeeAmt_t_1994925238"); // 1
    MiscFees_10_set.insert("MiscFeeAmt_t_1994925238");
    MiscFees_10.add_attribute("Curr", "CHF"); // 1
    MiscFees_10_set.insert("CHF");
    MiscFees_10.add_attribute("Typ", "5"); // 1
    MiscFees_10_set.insert("5");
    MiscFees_10.add_attribute("Basis", "1"); // 1
    MiscFees_10_set.insert("1");
    all_values.push_back(MiscFees_10_set);
    all_compo_names.insert("MiscFees_10_set");

    elt.add_element(MiscFees_10);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_7{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_7_set;
    SprdBnchmkCurve_7.add_attribute("Spread", "10215590.380000"); // 1
    SprdBnchmkCurve_7_set.insert("10215590.380000");
    SprdBnchmkCurve_7.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_7_set.insert("EUR");
    SprdBnchmkCurve_7.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_7_set.insert("Treasury");
    SprdBnchmkCurve_7.add_attribute("Point", "BenchmarkCurvePoint_t_1648078138"); // 1
    SprdBnchmkCurve_7_set.insert("BenchmarkCurvePoint_t_1648078138");
    SprdBnchmkCurve_7.add_attribute("Px", "6010418.110000"); // 1
    SprdBnchmkCurve_7_set.insert("6010418.110000");
    SprdBnchmkCurve_7.add_attribute("PxTyp", "2"); // 1
    SprdBnchmkCurve_7_set.insert("2");
    SprdBnchmkCurve_7.add_attribute("SecID", "BenchmarkSecurityID_t_1062196054"); // 1
    SprdBnchmkCurve_7_set.insert("BenchmarkSecurityID_t_1062196054");
    SprdBnchmkCurve_7.add_attribute("SecIDSrc", "D"); // 1
    SprdBnchmkCurve_7_set.insert("D");
    all_values.push_back(SprdBnchmkCurve_7_set);
    all_compo_names.insert("SprdBnchmkCurve_7_set");

    elt.add_element(SprdBnchmkCurve_7);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_32{"Stip"};
    multiset<string> Stip_32_set;
    Stip_32.add_attribute("Typ", "REFPRIN"); // 1
    Stip_32_set.insert("REFPRIN");
    Stip_32.add_attribute("Val", "StipulationValue_t_459867707"); // 1
    Stip_32_set.insert("StipulationValue_t_459867707");
    all_values.push_back(Stip_32_set);
    all_compo_names.insert("Stip_32_set");

    elt.add_element(Stip_32);
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
