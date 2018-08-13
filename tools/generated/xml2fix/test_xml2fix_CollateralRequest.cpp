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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CollReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CollateralRequest_message_t_0;
  elt.add_attribute("ReqID", "CollReqID_t_1727947228"); // 0
  CollateralRequest_message_t_0.insert("CollReqID_t_1727947228");
  elt.add_attribute("AsgnRsn", "5"); // 0
  CollateralRequest_message_t_0.insert("5");
  elt.add_attribute("TxnTm", "TransactTime_t_2015541421"); // 0
  CollateralRequest_message_t_0.insert("TransactTime_t_2015541421");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1439809131"); // 0
  CollateralRequest_message_t_0.insert("ExpireTime_t_1439809131");
  elt.add_attribute("Acct", "Account_t_620194395"); // 0
  CollateralRequest_message_t_0.insert("Account_t_620194395");
  elt.add_attribute("AcctTyp", "6"); // 0
  CollateralRequest_message_t_0.insert("6");
  elt.add_attribute("ClOrdID", "ClOrdID_t_812923853"); // 0
  CollateralRequest_message_t_0.insert("ClOrdID_t_812923853");
  elt.add_attribute("OrdID", "OrderID_t_1775962881"); // 0
  CollateralRequest_message_t_0.insert("OrderID_t_1775962881");
  elt.add_attribute("OrdID2", "SecondaryOrderID_t_839895899"); // 0
  CollateralRequest_message_t_0.insert("SecondaryOrderID_t_839895899");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1379072702"); // 0
  CollateralRequest_message_t_0.insert("SecondaryClOrdID_t_1379072702");
  elt.add_attribute("SettlDt", "SettlDate_t_261206102"); // 0
  CollateralRequest_message_t_0.insert("SettlDate_t_261206102");
  elt.add_attribute("Qty", "14588548.500000"); // 0
  CollateralRequest_message_t_0.insert("14588548.500000");
  elt.add_attribute("QtyTyp", "0"); // 0
  CollateralRequest_message_t_0.insert("0");
  elt.add_attribute("Ccy", "CAN"); // 0
  CollateralRequest_message_t_0.insert("CAN");
  elt.add_attribute("MgnExcess", "MarginExcess_t_963706685"); // 0
  CollateralRequest_message_t_0.insert("MarginExcess_t_963706685");
  elt.add_attribute("TotNetValu", "TotalNetValue_t_1834492164"); // 0
  CollateralRequest_message_t_0.insert("TotalNetValue_t_1834492164");
  elt.add_attribute("CshOutstanding", "CashOutstanding_t_729715395"); // 0
  CollateralRequest_message_t_0.insert("CashOutstanding_t_729715395");
  elt.add_attribute("Side", "B"); // 0
  CollateralRequest_message_t_0.insert("B");
  elt.add_attribute("Px", "980893.230000"); // 0
  CollateralRequest_message_t_0.insert("980893.230000");
  elt.add_attribute("PxTyp", "3"); // 0
  CollateralRequest_message_t_0.insert("3");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1577991658"); // 0
  CollateralRequest_message_t_0.insert("AccruedInterestAmt_t_1577991658");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_472742203"); // 0
  CollateralRequest_message_t_0.insert("EndAccruedInterestAmt_t_472742203");
  elt.add_attribute("StartCsh", "StartCash_t_537274012"); // 0
  CollateralRequest_message_t_0.insert("StartCash_t_537274012");
  elt.add_attribute("EndCsh", "EndCash_t_379872894"); // 0
  CollateralRequest_message_t_0.insert("EndCash_t_379872894");
  elt.add_attribute("SesID", "5"); // 0
  CollateralRequest_message_t_0.insert("5");
  elt.add_attribute("SesSub", "2"); // 0
  CollateralRequest_message_t_0.insert("2");
  elt.add_attribute("SetSesID", "RTH"); // 0
  CollateralRequest_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1749905492"); // 0
  CollateralRequest_message_t_0.insert("SettlSessSubID_t_1749905492");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_2113542562"); // 0
  CollateralRequest_message_t_0.insert("ClearingBusinessDate_t_2113542562");
  elt.add_attribute("Txt", "Text_t_1225876971"); // 0
  CollateralRequest_message_t_0.insert("Text_t_1225876971");
  elt.add_attribute("EncTxtLen", "1330369072"); // 0
  CollateralRequest_message_t_0.insert("1330369072");
  elt.add_attribute("EncTxt", "EncodedText_t_539986383"); // 0
  CollateralRequest_message_t_0.insert("EncodedText_t_539986383");
  all_values.push_back(CollateralRequest_message_t_0);
  all_compo_names.insert("CollateralRequest_message_t");

  { // Hdr
    xml_element Hdr_18{"Hdr"};
    multiset<string> Hdr_18_set;
    Hdr_18.add_attribute("SeqNum", "1093934744"); // 1
    Hdr_18_set.insert("1093934744");
    Hdr_18.add_attribute("SID", "SenderCompID_t_622694556"); // 1
    Hdr_18_set.insert("SenderCompID_t_622694556");
    Hdr_18.add_attribute("TID", "TargetCompID_t_1160180778"); // 1
    Hdr_18_set.insert("TargetCompID_t_1160180778");
    Hdr_18.add_attribute("OBID", "OnBehalfOfCompID_t_1495117783"); // 1
    Hdr_18_set.insert("OnBehalfOfCompID_t_1495117783");
    Hdr_18.add_attribute("D2ID", "DeliverToCompID_t_1435618409"); // 1
    Hdr_18_set.insert("DeliverToCompID_t_1435618409");
    Hdr_18.add_attribute("SSub", "SenderSubID_t_788660011"); // 1
    Hdr_18_set.insert("SenderSubID_t_788660011");
    Hdr_18.add_attribute("SLoc", "SenderLocationID_t_187530034"); // 1
    Hdr_18_set.insert("SenderLocationID_t_187530034");
    Hdr_18.add_attribute("TSub", "TargetSubID_t_667207463"); // 1
    Hdr_18_set.insert("TargetSubID_t_667207463");
    Hdr_18.add_attribute("TLoc", "TargetLocationID_t_1049866114"); // 1
    Hdr_18_set.insert("TargetLocationID_t_1049866114");
    Hdr_18.add_attribute("OBSub", "OnBehalfOfSubID_t_1646384884"); // 1
    Hdr_18_set.insert("OnBehalfOfSubID_t_1646384884");
    Hdr_18.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2084253599"); // 1
    Hdr_18_set.insert("OnBehalfOfLocationID_t_2084253599");
    Hdr_18.add_attribute("D2Sub", "DeliverToSubID_t_1589271829"); // 1
    Hdr_18_set.insert("DeliverToSubID_t_1589271829");
    Hdr_18.add_attribute("D2Loc", "DeliverToLocationID_t_749392051"); // 1
    Hdr_18_set.insert("DeliverToLocationID_t_749392051");
    Hdr_18.add_attribute("PosDup", "Y"); // 1
    Hdr_18_set.insert("Y");
    Hdr_18.add_attribute("PosRsnd", "N"); // 1
    Hdr_18_set.insert("N");
    Hdr_18.add_attribute("Snt", "SendingTime_t_1479107447"); // 1
    Hdr_18_set.insert("SendingTime_t_1479107447");
    Hdr_18.add_attribute("OrigSnt", "OrigSendingTime_t_1306519047"); // 1
    Hdr_18_set.insert("OrigSendingTime_t_1306519047");
    Hdr_18.add_attribute("MsgEncd", "MessageEncoding_t_1374369669"); // 1
    Hdr_18_set.insert("MessageEncoding_t_1374369669");
    all_values.push_back(Hdr_18_set);
    all_compo_names.insert("Hdr_18_set");

    {
      xml_element Hop_18{"Hop"};
      multiset<string> Hop_18_set;
      Hop_18.add_attribute("ID", "HopCompID_t_1950539637"); // 2
      Hop_18_set.insert("HopCompID_t_1950539637");
      Hop_18.add_attribute("Ref", "737027057"); // 2
      Hop_18_set.insert("737027057");
      Hop_18.add_attribute("Snt", "HopSendingTime_t_1847111873"); // 2
      Hop_18_set.insert("HopSendingTime_t_1847111873");
      all_values.push_back(Hop_18_set);
      all_compo_names.insert("Hop_18_set");

      Hdr_18.add_element(Hop_18);
    }
    elt.add_element(Hdr_18);
  } // end Hdr
  { // Pty
    xml_element Pty_90{"Pty"};
    multiset<string> Pty_90_set;
    Pty_90.add_attribute("ID", "PartyID_t_1116899951"); // 1
    Pty_90_set.insert("PartyID_t_1116899951");
    Pty_90.add_attribute("Src", "G"); // 1
    Pty_90_set.insert("G");
    Pty_90.add_attribute("R", "51"); // 1
    Pty_90_set.insert("51");
    all_values.push_back(Pty_90_set);
    all_compo_names.insert("Pty_90_set");

    {
      xml_element Sub_90{"Sub"};
      multiset<string> Sub_90_set;
      Sub_90.add_attribute("ID", "PartySubID_t_1529254945"); // 2
      Sub_90_set.insert("PartySubID_t_1529254945");
      Sub_90.add_attribute("Typ", "21"); // 2
      Sub_90_set.insert("21");
      all_values.push_back(Sub_90_set);
      all_compo_names.insert("Sub_90_set");

      Pty_90.add_element(Sub_90);
    }
    elt.add_element(Pty_90);
  } // end Pty
  { // CollExc
    xml_element CollExc_8{"CollExc"};
    multiset<string> CollExc_8_set;
    CollExc_8.add_attribute("ExecID", "ExecID_t_607648268"); // 1
    CollExc_8_set.insert("ExecID_t_607648268");
    all_values.push_back(CollExc_8_set);
    all_compo_names.insert("CollExc_8_set");

    elt.add_element(CollExc_8);
  } // end CollExc
  { // CollExc
    xml_element CollExc_9{"CollExc"};
    multiset<string> CollExc_9_set;
    CollExc_9.add_attribute("ExecID", "ExecID_t_706272720"); // 1
    CollExc_9_set.insert("ExecID_t_706272720");
    all_values.push_back(CollExc_9_set);
    all_compo_names.insert("CollExc_9_set");

    elt.add_element(CollExc_9);
  } // end CollExc
  { // CollExc
    xml_element CollExc_10{"CollExc"};
    multiset<string> CollExc_10_set;
    CollExc_10.add_attribute("ExecID", "ExecID_t_57644397"); // 1
    CollExc_10_set.insert("ExecID_t_57644397");
    all_values.push_back(CollExc_10_set);
    all_compo_names.insert("CollExc_10_set");

    elt.add_element(CollExc_10);
  } // end CollExc
  { // TrdColl
    xml_element TrdColl_7{"TrdColl"};
    multiset<string> TrdColl_7_set;
    TrdColl_7.add_attribute("RptID", "TradeReportID_t_1328967276"); // 1
    TrdColl_7_set.insert("TradeReportID_t_1328967276");
    TrdColl_7.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1217825175"); // 1
    TrdColl_7_set.insert("SecondaryTradeReportID_t_1217825175");
    all_values.push_back(TrdColl_7_set);
    all_compo_names.insert("TrdColl_7_set");

    elt.add_element(TrdColl_7);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_8{"TrdColl"};
    multiset<string> TrdColl_8_set;
    TrdColl_8.add_attribute("RptID", "TradeReportID_t_1049217148"); // 1
    TrdColl_8_set.insert("TradeReportID_t_1049217148");
    TrdColl_8.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_617102037"); // 1
    TrdColl_8_set.insert("SecondaryTradeReportID_t_617102037");
    all_values.push_back(TrdColl_8_set);
    all_compo_names.insert("TrdColl_8_set");

    elt.add_element(TrdColl_8);
  } // end TrdColl
  { // TrdColl
    xml_element TrdColl_9{"TrdColl"};
    multiset<string> TrdColl_9_set;
    TrdColl_9.add_attribute("RptID", "TradeReportID_t_2006485187"); // 1
    TrdColl_9_set.insert("TradeReportID_t_2006485187");
    TrdColl_9.add_attribute("TrdRptID2", "SecondaryTradeReportID_t_1236747182"); // 1
    TrdColl_9_set.insert("SecondaryTradeReportID_t_1236747182");
    all_values.push_back(TrdColl_9_set);
    all_compo_names.insert("TrdColl_9_set");

    elt.add_element(TrdColl_9);
  } // end TrdColl
  { // Instrmt
    xml_element Instrmt_10{"Instrmt"};
    multiset<string> Instrmt_10_set;
    Instrmt_10.add_attribute("Sym", "Symbol_t_1284309500"); // 1
    Instrmt_10_set.insert("Symbol_t_1284309500");
    Instrmt_10.add_attribute("Sfx", "WI"); // 1
    Instrmt_10_set.insert("WI");
    Instrmt_10.add_attribute("ID", "SecurityID_t_735648419"); // 1
    Instrmt_10_set.insert("SecurityID_t_735648419");
    Instrmt_10.add_attribute("Src", "B"); // 1
    Instrmt_10_set.insert("B");
    Instrmt_10.add_attribute("Prod", "6"); // 1
    Instrmt_10_set.insert("6");
    Instrmt_10.add_attribute("ProdCmplx", "ProductComplex_t_1485040470"); // 1
    Instrmt_10_set.insert("ProductComplex_t_1485040470");
    Instrmt_10.add_attribute("SecGrp", "SecurityGroup_t_2121556089"); // 1
    Instrmt_10_set.insert("SecurityGroup_t_2121556089");
    Instrmt_10.add_attribute("CFI", "CFICode_t_1626936180"); // 1
    Instrmt_10_set.insert("CFICode_t_1626936180");
    Instrmt_10.add_attribute("SecTyp", "TBILL"); // 1
    Instrmt_10_set.insert("TBILL");
    Instrmt_10.add_attribute("SubTyp", "SecuritySubType_t_1280591488"); // 1
    Instrmt_10_set.insert("SecuritySubType_t_1280591488");
    Instrmt_10.add_attribute("MMY", "853822202"); // 1
    Instrmt_10_set.insert("853822202");
    Instrmt_10.add_attribute("MatDt", "MaturityDate_t_619720259"); // 1
    Instrmt_10_set.insert("MaturityDate_t_619720259");
    Instrmt_10.add_attribute("MatTm", "2017618546"); // 1
    Instrmt_10_set.insert("2017618546");
    Instrmt_10.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_553450427"); // 1
    Instrmt_10_set.insert("SettleOnOpenFlag_t_553450427");
    Instrmt_10.add_attribute("AsgnMeth", "960050261"); // 1
    Instrmt_10_set.insert("960050261");
    Instrmt_10.add_attribute("Status", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("CpnPmt", "CouponPaymentDate_t_326932230"); // 1
    Instrmt_10_set.insert("CouponPaymentDate_t_326932230");
    Instrmt_10.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_10_set.insert("MR");
    Instrmt_10.add_attribute("Snrty", "SD"); // 1
    Instrmt_10_set.insert("SD");
    Instrmt_10.add_attribute("NotlPctOut", "18503195.260000"); // 1
    Instrmt_10_set.insert("18503195.260000");
    Instrmt_10.add_attribute("OrigNotlPctOut", "293073.750000"); // 1
    Instrmt_10_set.insert("293073.750000");
    Instrmt_10.add_attribute("AttchPnt", "9764544.150000"); // 1
    Instrmt_10_set.insert("9764544.150000");
    Instrmt_10.add_attribute("DetchPnt", "4091085.990000"); // 1
    Instrmt_10_set.insert("4091085.990000");
    Instrmt_10.add_attribute("Issued", "IssueDate_t_86951772"); // 1
    Instrmt_10_set.insert("IssueDate_t_86951772");
    Instrmt_10.add_attribute("RepoCollSecTyp", "530553780"); // 1
    Instrmt_10_set.insert("530553780");
    Instrmt_10.add_attribute("RepoTrm", "1738075875"); // 1
    Instrmt_10_set.insert("1738075875");
    Instrmt_10.add_attribute("RepoRt", "13047769.470000"); // 1
    Instrmt_10_set.insert("13047769.470000");
    Instrmt_10.add_attribute("Fctr", "15797709.280000"); // 1
    Instrmt_10_set.insert("15797709.280000");
    Instrmt_10.add_attribute("CrdRtg", "CreditRating_t_207694265"); // 1
    Instrmt_10_set.insert("CreditRating_t_207694265");
    Instrmt_10.add_attribute("Rgstry", "InstrRegistry_t_1163778486"); // 1
    Instrmt_10_set.insert("InstrRegistry_t_1163778486");
    Instrmt_10.add_attribute("IssuCtry", "669034462"); // 1
    Instrmt_10_set.insert("669034462");
    Instrmt_10.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1492003765"); // 1
    Instrmt_10_set.insert("StateOrProvinceOfIssue_t_1492003765");
    Instrmt_10.add_attribute("Lcl", "LocaleOfIssue_t_2072646139"); // 1
    Instrmt_10_set.insert("LocaleOfIssue_t_2072646139");
    Instrmt_10.add_attribute("Redeem", "RedemptionDate_t_1404682881"); // 1
    Instrmt_10_set.insert("RedemptionDate_t_1404682881");
    Instrmt_10.add_attribute("StrkPx", "5655995.690000"); // 1
    Instrmt_10_set.insert("5655995.690000");
    Instrmt_10.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_10_set.insert("GBP");
    Instrmt_10.add_attribute("StrkMult", "5396720.100000"); // 1
    Instrmt_10_set.insert("5396720.100000");
    Instrmt_10.add_attribute("StrkValu", "19027545.060000"); // 1
    Instrmt_10_set.insert("19027545.060000");
    Instrmt_10.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_10_set.insert("2");
    Instrmt_10.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_10_set.insert("5");
    Instrmt_10.add_attribute("StrkPxBndryPrcsn", "6090930.600000"); // 1
    Instrmt_10_set.insert("6090930.600000");
    Instrmt_10.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("OptAt", "1690398397"); // 1
    Instrmt_10_set.insert("1690398397");
    Instrmt_10.add_attribute("Mult", "11625434.870000"); // 1
    Instrmt_10_set.insert("11625434.870000");
    Instrmt_10.add_attribute("MultTyp", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_10_set.insert("3");
    Instrmt_10.add_attribute("MinPxIncr", "14894757.180000"); // 1
    Instrmt_10_set.insert("14894757.180000");
    Instrmt_10.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1502840206"); // 1
    Instrmt_10_set.insert("MinPriceIncrementAmount_t_1502840206");
    Instrmt_10.add_attribute("UOM", "t"); // 1
    Instrmt_10_set.insert("t");
    Instrmt_10.add_attribute("UOMQty", "11923115.960000"); // 1
    Instrmt_10_set.insert("11923115.960000");
    Instrmt_10.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_10_set.insert("Gal");
    Instrmt_10.add_attribute("PxUOMQty", "18752101.600000"); // 1
    Instrmt_10_set.insert("18752101.600000");
    Instrmt_10.add_attribute("SettlMeth", "P"); // 1
    Instrmt_10_set.insert("P");
    Instrmt_10.add_attribute("ExerStyle", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_10_set.insert("3");
    Instrmt_10.add_attribute("OptPayAmt", "OptPayoutAmount_t_1192012423"); // 1
    Instrmt_10_set.insert("OptPayoutAmount_t_1192012423");
    Instrmt_10.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_10_set.insert("INX");
    Instrmt_10.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_10_set.insert("EQTY");
    Instrmt_10.add_attribute("ListMeth", "0"); // 1
    Instrmt_10_set.insert("0");
    Instrmt_10.add_attribute("CapPx", "19401711.390000"); // 1
    Instrmt_10_set.insert("19401711.390000");
    Instrmt_10.add_attribute("FlrPx", "3596020.340000"); // 1
    Instrmt_10_set.insert("3596020.340000");
    Instrmt_10.add_attribute("PutCall", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("FlexInd", "false"); // 1
    Instrmt_10_set.insert("false");
    Instrmt_10.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_10_set.insert("true");
    Instrmt_10.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_10_set.insert("Wk");
    Instrmt_10.add_attribute("CpnRt", "21411519.570000"); // 1
    Instrmt_10_set.insert("21411519.570000");
    Instrmt_10.add_attribute("Exch", "SecurityExchange_t_359040972"); // 1
    Instrmt_10_set.insert("SecurityExchange_t_359040972");
    Instrmt_10.add_attribute("PosLmt", "1849498385"); // 1
    Instrmt_10_set.insert("1849498385");
    Instrmt_10.add_attribute("NTPosLmt", "1896422815"); // 1
    Instrmt_10_set.insert("1896422815");
    Instrmt_10.add_attribute("Issr", "Issuer_t_1917944945"); // 1
    Instrmt_10_set.insert("Issuer_t_1917944945");
    Instrmt_10.add_attribute("EncIssrLen", "1522278236"); // 1
    Instrmt_10_set.insert("1522278236");
    Instrmt_10.add_attribute("EncIssr", "EncodedIssuer_t_358032228"); // 1
    Instrmt_10_set.insert("EncodedIssuer_t_358032228");
    Instrmt_10.add_attribute("Desc", "SecurityDesc_t_1949085530"); // 1
    Instrmt_10_set.insert("SecurityDesc_t_1949085530");
    Instrmt_10.add_attribute("EncSecDescLen", "1065192985"); // 1
    Instrmt_10_set.insert("1065192985");
    Instrmt_10.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1520575715"); // 1
    Instrmt_10_set.insert("EncodedSecurityDesc_t_1520575715");
    Instrmt_10.add_attribute("Pool", "Pool_t_792792727"); // 1
    Instrmt_10_set.insert("Pool_t_792792727");
    Instrmt_10.add_attribute("CSetMo", "1595142584"); // 1
    Instrmt_10_set.insert("1595142584");
    Instrmt_10.add_attribute("CPPgm", "1"); // 1
    Instrmt_10_set.insert("1");
    Instrmt_10.add_attribute("CPRegT", "CPRegType_t_148149286"); // 1
    Instrmt_10_set.insert("CPRegType_t_148149286");
    Instrmt_10.add_attribute("Dated", "DatedDate_t_346414681"); // 1
    Instrmt_10_set.insert("DatedDate_t_346414681");
    Instrmt_10.add_attribute("IntAcrl", "InterestAccrualDate_t_2054879382"); // 1
    Instrmt_10_set.insert("InterestAccrualDate_t_2054879382");
    all_values.push_back(Instrmt_10_set);
    all_compo_names.insert("Instrmt_10_set");

    {
      xml_element AID_10{"AID"};
      multiset<string> AID_10_set;
      AID_10.add_attribute("AltID", "SecurityAltID_t_1680296867"); // 2
      AID_10_set.insert("SecurityAltID_t_1680296867");
      AID_10.add_attribute("AltIDSrc", "6"); // 2
      AID_10_set.insert("6");
      all_values.push_back(AID_10_set);
      all_compo_names.insert("AID_10_set");

      Instrmt_10.add_element(AID_10);
    }
    {
      xml_element SecXML_10{"SecXML"};
      multiset<string> SecXML_10_set;
      SecXML_10.add_attribute("Schema", "SecurityXMLSchema_t_1508815929"); // 2
      SecXML_10_set.insert("SecurityXMLSchema_t_1508815929");
      all_values.push_back(SecXML_10_set);
      all_compo_names.insert("SecXML_10_set");

      Instrmt_10.add_element(SecXML_10);
    }
    {
      xml_element Evnt_10{"Evnt"};
      multiset<string> Evnt_10_set;
      Evnt_10.add_attribute("EventTyp", "13"); // 2
      Evnt_10_set.insert("13");
      Evnt_10.add_attribute("Dt", "EventDate_t_332421485"); // 2
      Evnt_10_set.insert("EventDate_t_332421485");
      Evnt_10.add_attribute("Tm", "EventTime_t_553344704"); // 2
      Evnt_10_set.insert("EventTime_t_553344704");
      Evnt_10.add_attribute("Px", "19283052.260000"); // 2
      Evnt_10_set.insert("19283052.260000");
      Evnt_10.add_attribute("Txt", "EventText_t_22989057"); // 2
      Evnt_10_set.insert("EventText_t_22989057");
      all_values.push_back(Evnt_10_set);
      all_compo_names.insert("Evnt_10_set");

      Instrmt_10.add_element(Evnt_10);
    }
    {
      xml_element Pty_91{"Pty"};
      multiset<string> Pty_91_set;
      Pty_91.add_attribute("ID", "InstrumentPartyID_t_1953051392"); // 2
      Pty_91_set.insert("InstrumentPartyID_t_1953051392");
      Pty_91.add_attribute("Src", "A"); // 2
      Pty_91_set.insert("A");
      Pty_91.add_attribute("R", "73"); // 2
      Pty_91_set.insert("73");
      all_values.push_back(Pty_91_set);
      all_compo_names.insert("Pty_91_set");

      {
        xml_element Sub_91{"Sub"};
        multiset<string> Sub_91_set;
        Sub_91.add_attribute("ID", "InstrumentPartySubID_t_549794550"); // 3
        Sub_91_set.insert("InstrumentPartySubID_t_549794550");
        Sub_91.add_attribute("Typ", "32"); // 3
        Sub_91_set.insert("32");
        all_values.push_back(Sub_91_set);
        all_compo_names.insert("Sub_91_set");

        Pty_91.add_element(Sub_91);
      }
      Instrmt_10.add_element(Pty_91);
    }
    {
      xml_element CmplxEvnt_10{"CmplxEvnt"};
      multiset<string> CmplxEvnt_10_set;
      CmplxEvnt_10.add_attribute("Typ", "6"); // 2
      CmplxEvnt_10_set.insert("6");
      CmplxEvnt_10.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1859620925"); // 2
      CmplxEvnt_10_set.insert("ComplexOptPayoutAmount_t_1859620925");
      CmplxEvnt_10.add_attribute("Px", "14325110.090000"); // 2
      CmplxEvnt_10_set.insert("14325110.090000");
      CmplxEvnt_10.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_10_set.insert("2");
      CmplxEvnt_10.add_attribute("PxBndryPrcsn", "15616356.620000"); // 2
      CmplxEvnt_10_set.insert("15616356.620000");
      CmplxEvnt_10.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_10_set.insert("3");
      CmplxEvnt_10.add_attribute("Cond", "2"); // 2
      CmplxEvnt_10_set.insert("2");
      all_values.push_back(CmplxEvnt_10_set);
      all_compo_names.insert("CmplxEvnt_10_set");

      {
        xml_element EvntDts_10{"EvntDts"};
        multiset<string> EvntDts_10_set;
        EvntDts_10.add_attribute("StartDt", "ComplexEventStartDate_t_936430251"); // 3
        EvntDts_10_set.insert("ComplexEventStartDate_t_936430251");
        EvntDts_10.add_attribute("EndDt", "ComplexEventEndDate_t_1539482405"); // 3
        EvntDts_10_set.insert("ComplexEventEndDate_t_1539482405");
        all_values.push_back(EvntDts_10_set);
        all_compo_names.insert("EvntDts_10_set");

        {
          xml_element EvntTms_10{"EvntTms"};
          multiset<string> EvntTms_10_set;
          EvntTms_10.add_attribute("StartTm", "2077980159"); // 4
          EvntTms_10_set.insert("2077980159");
          EvntTms_10.add_attribute("EndTm", "2001623236"); // 4
          EvntTms_10_set.insert("2001623236");
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
    FinDetls_7.add_attribute("AgmtDesc", "AgreementDesc_t_912574472"); // 1
    FinDetls_7_set.insert("AgreementDesc_t_912574472");
    FinDetls_7.add_attribute("AgmtID", "AgreementID_t_723289238"); // 1
    FinDetls_7_set.insert("AgreementID_t_723289238");
    FinDetls_7.add_attribute("AgmtDt", "AgreementDate_t_1449282172"); // 1
    FinDetls_7_set.insert("AgreementDate_t_1449282172");
    FinDetls_7.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_7_set.insert("USD");
    FinDetls_7.add_attribute("TrmTyp", "2"); // 1
    FinDetls_7_set.insert("2");
    FinDetls_7.add_attribute("StartDt", "StartDate_t_1682537992"); // 1
    FinDetls_7_set.insert("StartDate_t_1682537992");
    FinDetls_7.add_attribute("EndDt", "EndDate_t_404251744"); // 1
    FinDetls_7_set.insert("EndDate_t_404251744");
    FinDetls_7.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_7_set.insert("2");
    FinDetls_7.add_attribute("MgnRatio", "10438702.730000"); // 1
    FinDetls_7_set.insert("10438702.730000");
    all_values.push_back(FinDetls_7_set);
    all_compo_names.insert("FinDetls_7_set");

    elt.add_element(FinDetls_7);
  } // end FinDetls
  { // Leg
    xml_element Leg_18{"Leg"};
    multiset<string> Leg_18_set;
    Leg_18.add_attribute("Sym", "LegSymbol_t_54775883"); // 1
    Leg_18_set.insert("LegSymbol_t_54775883");
    Leg_18.add_attribute("Sfx", "CD"); // 1
    Leg_18_set.insert("CD");
    Leg_18.add_attribute("ID", "LegSecurityID_t_1336985895"); // 1
    Leg_18_set.insert("LegSecurityID_t_1336985895");
    Leg_18.add_attribute("Src", "1"); // 1
    Leg_18_set.insert("1");
    Leg_18.add_attribute("Prod", "12"); // 1
    Leg_18_set.insert("12");
    Leg_18.add_attribute("CFI", "LegCFICode_t_910494964"); // 1
    Leg_18_set.insert("LegCFICode_t_910494964");
    Leg_18.add_attribute("SecTyp", "LOFC"); // 1
    Leg_18_set.insert("LOFC");
    Leg_18.add_attribute("SecSubTyp", "LegSecuritySubType_t_1952577272"); // 1
    Leg_18_set.insert("LegSecuritySubType_t_1952577272");
    Leg_18.add_attribute("MMY", "201854017"); // 1
    Leg_18_set.insert("201854017");
    Leg_18.add_attribute("Mat", "LegMaturityDate_t_459748391"); // 1
    Leg_18_set.insert("LegMaturityDate_t_459748391");
    Leg_18.add_attribute("MatTm", "1664714549"); // 1
    Leg_18_set.insert("1664714549");
    Leg_18.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1634365026"); // 1
    Leg_18_set.insert("LegCouponPaymentDate_t_1634365026");
    Leg_18.add_attribute("Issued", "LegIssueDate_t_818181723"); // 1
    Leg_18_set.insert("LegIssueDate_t_818181723");
    Leg_18.add_attribute("RepoCollSecTyp", "1078866564"); // 1
    Leg_18_set.insert("1078866564");
    Leg_18.add_attribute("RepoTrm", "668331555"); // 1
    Leg_18_set.insert("668331555");
    Leg_18.add_attribute("RepoRt", "9470763.520000"); // 1
    Leg_18_set.insert("9470763.520000");
    Leg_18.add_attribute("Fctr", "20152968.150000"); // 1
    Leg_18_set.insert("20152968.150000");
    Leg_18.add_attribute("CrdRtg", "LegCreditRating_t_60330312"); // 1
    Leg_18_set.insert("LegCreditRating_t_60330312");
    Leg_18.add_attribute("Rgstry", "LegInstrRegistry_t_877572863"); // 1
    Leg_18_set.insert("LegInstrRegistry_t_877572863");
    Leg_18.add_attribute("Ctry", "1869436403"); // 1
    Leg_18_set.insert("1869436403");
    Leg_18.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_972904785"); // 1
    Leg_18_set.insert("LegStateOrProvinceOfIssue_t_972904785");
    Leg_18.add_attribute("Lcl", "LegLocaleOfIssue_t_1600862101"); // 1
    Leg_18_set.insert("LegLocaleOfIssue_t_1600862101");
    Leg_18.add_attribute("Redeem", "LegRedemptionDate_t_1171234928"); // 1
    Leg_18_set.insert("LegRedemptionDate_t_1171234928");
    Leg_18.add_attribute("Strk", "6005633.950000"); // 1
    Leg_18_set.insert("6005633.950000");
    Leg_18.add_attribute("StrkCcy", "CAN"); // 1
    Leg_18_set.insert("CAN");
    Leg_18.add_attribute("OptA", "135617739"); // 1
    Leg_18_set.insert("135617739");
    Leg_18.add_attribute("Cmult", "7290687.220000"); // 1
    Leg_18_set.insert("7290687.220000");
    Leg_18.add_attribute("MultTyp", "0"); // 1
    Leg_18_set.insert("0");
    Leg_18.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_18_set.insert("2");
    Leg_18.add_attribute("UOM", "MWh"); // 1
    Leg_18_set.insert("MWh");
    Leg_18.add_attribute("UOMQty", "5965784.150000"); // 1
    Leg_18_set.insert("5965784.150000");
    Leg_18.add_attribute("PxUOM", "Bu"); // 1
    Leg_18_set.insert("Bu");
    Leg_18.add_attribute("PxUOMQty", "14747352.860000"); // 1
    Leg_18_set.insert("14747352.860000");
    Leg_18.add_attribute("TmUnit", "Min"); // 1
    Leg_18_set.insert("Min");
    Leg_18.add_attribute("ExerStyle", "2"); // 1
    Leg_18_set.insert("2");
    Leg_18.add_attribute("CpnRt", "2377466.020000"); // 1
    Leg_18_set.insert("2377466.020000");
    Leg_18.add_attribute("Exch", "LegSecurityExchange_t_1134699388"); // 1
    Leg_18_set.insert("LegSecurityExchange_t_1134699388");
    Leg_18.add_attribute("Issr", "LegIssuer_t_1837095689"); // 1
    Leg_18_set.insert("LegIssuer_t_1837095689");
    Leg_18.add_attribute("EncLegIssrLen", "439600619"); // 1
    Leg_18_set.insert("439600619");
    Leg_18.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1594447779"); // 1
    Leg_18_set.insert("EncodedLegIssuer_t_1594447779");
    Leg_18.add_attribute("Desc", "LegSecurityDesc_t_1354326591"); // 1
    Leg_18_set.insert("LegSecurityDesc_t_1354326591");
    Leg_18.add_attribute("EncLegSecDescLen", "2073965646"); // 1
    Leg_18_set.insert("2073965646");
    Leg_18.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_265145854"); // 1
    Leg_18_set.insert("EncodedLegSecurityDesc_t_265145854");
    Leg_18.add_attribute("RatioQty", "2857095.070000"); // 1
    Leg_18_set.insert("2857095.070000");
    Leg_18.add_attribute("Side", "2"); // 1
    Leg_18_set.insert("2");
    Leg_18.add_attribute("Ccy", "GBP"); // 1
    Leg_18_set.insert("GBP");
    Leg_18.add_attribute("Pool", "LegPool_t_655143866"); // 1
    Leg_18_set.insert("LegPool_t_655143866");
    Leg_18.add_attribute("Dated", "LegDatedDate_t_2089795069"); // 1
    Leg_18_set.insert("LegDatedDate_t_2089795069");
    Leg_18.add_attribute("CSetMo", "2022959077"); // 1
    Leg_18_set.insert("2022959077");
    Leg_18.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1628048651"); // 1
    Leg_18_set.insert("LegInterestAccrualDate_t_1628048651");
    Leg_18.add_attribute("PutCall", "1543173523"); // 1
    Leg_18_set.insert("1543173523");
    Leg_18.add_attribute("LegOptionRatio", "10467103.570000"); // 1
    Leg_18_set.insert("10467103.570000");
    Leg_18.add_attribute("Px", "811283.980000"); // 1
    Leg_18_set.insert("811283.980000");
    all_values.push_back(Leg_18_set);
    all_compo_names.insert("Leg_18_set");

    {
      xml_element LegAID_18{"LegAID"};
      multiset<string> LegAID_18_set;
      LegAID_18.add_attribute("SecAltID", "LegSecurityAltID_t_1867990501"); // 2
      LegAID_18_set.insert("LegSecurityAltID_t_1867990501");
      LegAID_18.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_18_set.insert("M");
      all_values.push_back(LegAID_18_set);
      all_compo_names.insert("LegAID_18_set");

      Leg_18.add_element(LegAID_18);
    }
    elt.add_element(Leg_18);
  } // end Leg
  { // UndColl
    xml_element UndColl_3{"UndColl"};
    multiset<string> UndColl_3_set;
    UndColl_3.add_attribute("Actn", "0"); // 1
    UndColl_3_set.insert("0");
    all_values.push_back(UndColl_3_set);
    all_compo_names.insert("UndColl_3_set");

    {
      xml_element Undly_18{"Undly"};
      multiset<string> Undly_18_set;
      Undly_18.add_attribute("Sym", "UnderlyingSymbol_t_260477375"); // 2
      Undly_18_set.insert("UnderlyingSymbol_t_260477375");
      Undly_18.add_attribute("Sfx", "WI"); // 2
      Undly_18_set.insert("WI");
      Undly_18.add_attribute("ID", "UnderlyingSecurityID_t_587324966"); // 2
      Undly_18_set.insert("UnderlyingSecurityID_t_587324966");
      Undly_18.add_attribute("Src", "9"); // 2
      Undly_18_set.insert("9");
      Undly_18.add_attribute("Prod", "7"); // 2
      Undly_18_set.insert("7");
      Undly_18.add_attribute("CFI", "UnderlyingCFICode_t_2062060252"); // 2
      Undly_18_set.insert("UnderlyingCFICode_t_2062060252");
      Undly_18.add_attribute("SecTyp", "CAMM"); // 2
      Undly_18_set.insert("CAMM");
      Undly_18.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1909971909"); // 2
      Undly_18_set.insert("UnderlyingSecuritySubType_t_1909971909");
      Undly_18.add_attribute("MMY", "152323206"); // 2
      Undly_18_set.insert("152323206");
      Undly_18.add_attribute("Mat", "UnderlyingMaturityDate_t_518614886"); // 2
      Undly_18_set.insert("UnderlyingMaturityDate_t_518614886");
      Undly_18.add_attribute("MatTm", "1599583950"); // 2
      Undly_18_set.insert("1599583950");
      Undly_18.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_591923826"); // 2
      Undly_18_set.insert("UnderlyingCouponPaymentDate_t_591923826");
      Undly_18.add_attribute("RestrctTyp", "MM"); // 2
      Undly_18_set.insert("MM");
      Undly_18.add_attribute("Snrty", "SR"); // 2
      Undly_18_set.insert("SR");
      Undly_18.add_attribute("NotlPctOut", "5184058.240000"); // 2
      Undly_18_set.insert("5184058.240000");
      Undly_18.add_attribute("OrigNotlPctOut", "2307248.720000"); // 2
      Undly_18_set.insert("2307248.720000");
      Undly_18.add_attribute("AttchPnt", "10921364.000000"); // 2
      Undly_18_set.insert("10921364.000000");
      Undly_18.add_attribute("DetchPnt", "11132193.770000"); // 2
      Undly_18_set.insert("11132193.770000");
      Undly_18.add_attribute("Issued", "UnderlyingIssueDate_t_1442947079"); // 2
      Undly_18_set.insert("UnderlyingIssueDate_t_1442947079");
      Undly_18.add_attribute("RepoCollSecTyp", "1245659074"); // 2
      Undly_18_set.insert("1245659074");
      Undly_18.add_attribute("RepoTrm", "1768363243"); // 2
      Undly_18_set.insert("1768363243");
      Undly_18.add_attribute("RepoRt", "13852585.000000"); // 2
      Undly_18_set.insert("13852585.000000");
      Undly_18.add_attribute("Fctr", "11211345.040000"); // 2
      Undly_18_set.insert("11211345.040000");
      Undly_18.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1248928246"); // 2
      Undly_18_set.insert("UnderlyingCreditRating_t_1248928246");
      Undly_18.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_780948375"); // 2
      Undly_18_set.insert("UnderlyingInstrRegistry_t_780948375");
      Undly_18.add_attribute("Ctry", "20361213"); // 2
      Undly_18_set.insert("20361213");
      Undly_18.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1330056644"); // 2
      Undly_18_set.insert("UnderlyingStateOrProvinceOfIssue_t_1330056644");
      Undly_18.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_501455228"); // 2
      Undly_18_set.insert("UnderlyingLocaleOfIssue_t_501455228");
      Undly_18.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1886519704"); // 2
      Undly_18_set.insert("UnderlyingRedemptionDate_t_1886519704");
      Undly_18.add_attribute("StrkPx", "15468027.810000"); // 2
      Undly_18_set.insert("15468027.810000");
      Undly_18.add_attribute("StrkCcy", "CHF"); // 2
      Undly_18_set.insert("CHF");
      Undly_18.add_attribute("OptA", "795553283"); // 2
      Undly_18_set.insert("795553283");
      Undly_18.add_attribute("Mult", "15383557.690000"); // 2
      Undly_18_set.insert("15383557.690000");
      Undly_18.add_attribute("MultTyp", "0"); // 2
      Undly_18_set.insert("0");
      Undly_18.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_18_set.insert("2");
      Undly_18.add_attribute("UOM", "USD"); // 2
      Undly_18_set.insert("USD");
      Undly_18.add_attribute("UOMQty", "2404847.200000"); // 2
      Undly_18_set.insert("2404847.200000");
      Undly_18.add_attribute("PxUOM", "lbs"); // 2
      Undly_18_set.insert("lbs");
      Undly_18.add_attribute("PxUOMQty", "16052555.800000"); // 2
      Undly_18_set.insert("16052555.800000");
      Undly_18.add_attribute("TmUnit", "S"); // 2
      Undly_18_set.insert("S");
      Undly_18.add_attribute("ExerStyle", "1"); // 2
      Undly_18_set.insert("1");
      Undly_18.add_attribute("CpnRt", "496957.580000"); // 2
      Undly_18_set.insert("496957.580000");
      Undly_18.add_attribute("Exch", "UnderlyingSecurityExchange_t_724678625"); // 2
      Undly_18_set.insert("UnderlyingSecurityExchange_t_724678625");
      Undly_18.add_attribute("Issr", "UnderlyingIssuer_t_694538584"); // 2
      Undly_18_set.insert("UnderlyingIssuer_t_694538584");
      Undly_18.add_attribute("EncUndIssrLen", "568101582"); // 2
      Undly_18_set.insert("568101582");
      Undly_18.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_955403497"); // 2
      Undly_18_set.insert("EncodedUnderlyingIssuer_t_955403497");
      Undly_18.add_attribute("Desc", "UnderlyingSecurityDesc_t_1786674984"); // 2
      Undly_18_set.insert("UnderlyingSecurityDesc_t_1786674984");
      Undly_18.add_attribute("EncUndSecDescLen", "1681320959"); // 2
      Undly_18_set.insert("1681320959");
      Undly_18.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_250866928"); // 2
      Undly_18_set.insert("EncodedUnderlyingSecurityDesc_t_250866928");
      Undly_18.add_attribute("CPPgm", "UnderlyingCPProgram_t_884850411"); // 2
      Undly_18_set.insert("UnderlyingCPProgram_t_884850411");
      Undly_18.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1302200555"); // 2
      Undly_18_set.insert("UnderlyingCPRegType_t_1302200555");
      Undly_18.add_attribute("AllocPct", "16361254.290000"); // 2
      Undly_18_set.insert("16361254.290000");
      Undly_18.add_attribute("Ccy", "EUR"); // 2
      Undly_18_set.insert("EUR");
      Undly_18.add_attribute("Qty", "2695901.560000"); // 2
      Undly_18_set.insert("2695901.560000");
      Undly_18.add_attribute("SettlTyp", "4"); // 2
      Undly_18_set.insert("4");
      Undly_18.add_attribute("CashAmt", "UnderlyingCashAmount_t_1733701798"); // 2
      Undly_18_set.insert("UnderlyingCashAmount_t_1733701798");
      Undly_18.add_attribute("CashTyp", "DIFF"); // 2
      Undly_18_set.insert("DIFF");
      Undly_18.add_attribute("Px", "17653821.850000"); // 2
      Undly_18_set.insert("17653821.850000");
      Undly_18.add_attribute("DirtPx", "11330209.310000"); // 2
      Undly_18_set.insert("11330209.310000");
      Undly_18.add_attribute("EndPx", "17220761.880000"); // 2
      Undly_18_set.insert("17220761.880000");
      Undly_18.add_attribute("StartVal", "UnderlyingStartValue_t_1764895616"); // 2
      Undly_18_set.insert("UnderlyingStartValue_t_1764895616");
      Undly_18.add_attribute("CurVal", "UnderlyingCurrentValue_t_1928574214"); // 2
      Undly_18_set.insert("UnderlyingCurrentValue_t_1928574214");
      Undly_18.add_attribute("EndVal", "UnderlyingEndValue_t_1112948310"); // 2
      Undly_18_set.insert("UnderlyingEndValue_t_1112948310");
      Undly_18.add_attribute("AdjQty", "4739811.900000"); // 2
      Undly_18_set.insert("4739811.900000");
      Undly_18.add_attribute("FxRate", "4546136.930000"); // 2
      Undly_18_set.insert("4546136.930000");
      Undly_18.add_attribute("FxRateCalc", "D"); // 2
      Undly_18_set.insert("D");
      Undly_18.add_attribute("CapValu", "UnderlyingCapValue_t_714465911"); // 2
      Undly_18_set.insert("UnderlyingCapValue_t_714465911");
      Undly_18.add_attribute("SetMeth", "UnderlyingSettlMethod_t_890625081"); // 2
      Undly_18_set.insert("UnderlyingSettlMethod_t_890625081");
      Undly_18.add_attribute("PutCall", "2023652615"); // 2
      Undly_18_set.insert("2023652615");
      all_values.push_back(Undly_18_set);
      all_compo_names.insert("Undly_18_set");

      {
        xml_element UndAID_18{"UndAID"};
        multiset<string> UndAID_18_set;
        UndAID_18.add_attribute("AltID", "UnderlyingSecurityAltID_t_1473565518"); // 3
        UndAID_18_set.insert("UnderlyingSecurityAltID_t_1473565518");
        UndAID_18.add_attribute("AltIDSrc", "1"); // 3
        UndAID_18_set.insert("1");
        all_values.push_back(UndAID_18_set);
        all_compo_names.insert("UndAID_18_set");

        Undly_18.add_element(UndAID_18);
      }
      {
        xml_element Stip_29{"Stip"};
        multiset<string> Stip_29_set;
        Stip_29.add_attribute("Typ", "TRDVAR"); // 3
        Stip_29_set.insert("TRDVAR");
        Stip_29.add_attribute("Val", "UnderlyingStipValue_t_50760495"); // 3
        Stip_29_set.insert("UnderlyingStipValue_t_50760495");
        all_values.push_back(Stip_29_set);
        all_compo_names.insert("Stip_29_set");

        Undly_18.add_element(Stip_29);
      }
      {
        xml_element Pty_92{"Pty"};
        multiset<string> Pty_92_set;
        Pty_92.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1473275356"); // 3
        Pty_92_set.insert("UnderlyingInstrumentPartyID_t_1473275356");
        Pty_92.add_attribute("Src", "C"); // 3
        Pty_92_set.insert("C");
        Pty_92.add_attribute("R", "66"); // 3
        Pty_92_set.insert("66");
        all_values.push_back(Pty_92_set);
        all_compo_names.insert("Pty_92_set");

        {
          xml_element Sub_92{"Sub"};
          multiset<string> Sub_92_set;
          Sub_92.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1112466692"); // 4
          Sub_92_set.insert("UnderlyingInstrumentPartySubID_t_1112466692");
          Sub_92.add_attribute("Typ", "31"); // 4
          Sub_92_set.insert("31");
          all_values.push_back(Sub_92_set);
          all_compo_names.insert("Sub_92_set");

          Pty_92.add_element(Sub_92);
        }
        Undly_18.add_element(Pty_92);
      }
      UndColl_3.add_element(Undly_18);
    }
    elt.add_element(UndColl_3);
  } // end UndColl
  { // UndColl
    xml_element UndColl_4{"UndColl"};
    multiset<string> UndColl_4_set;
    UndColl_4.add_attribute("Actn", "0"); // 1
    UndColl_4_set.insert("0");
    all_values.push_back(UndColl_4_set);
    all_compo_names.insert("UndColl_4_set");

    {
      xml_element Undly_19{"Undly"};
      multiset<string> Undly_19_set;
      Undly_19.add_attribute("Sym", "UnderlyingSymbol_t_1997317103"); // 2
      Undly_19_set.insert("UnderlyingSymbol_t_1997317103");
      Undly_19.add_attribute("Sfx", "CD"); // 2
      Undly_19_set.insert("CD");
      Undly_19.add_attribute("ID", "UnderlyingSecurityID_t_745672702"); // 2
      Undly_19_set.insert("UnderlyingSecurityID_t_745672702");
      Undly_19.add_attribute("Src", "B"); // 2
      Undly_19_set.insert("B");
      Undly_19.add_attribute("Prod", "4"); // 2
      Undly_19_set.insert("4");
      Undly_19.add_attribute("CFI", "UnderlyingCFICode_t_1015262858"); // 2
      Undly_19_set.insert("UnderlyingCFICode_t_1015262858");
      Undly_19.add_attribute("SecTyp", "DINP"); // 2
      Undly_19_set.insert("DINP");
      Undly_19.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1319867477"); // 2
      Undly_19_set.insert("UnderlyingSecuritySubType_t_1319867477");
      Undly_19.add_attribute("MMY", "1786308243"); // 2
      Undly_19_set.insert("1786308243");
      Undly_19.add_attribute("Mat", "UnderlyingMaturityDate_t_1352579388"); // 2
      Undly_19_set.insert("UnderlyingMaturityDate_t_1352579388");
      Undly_19.add_attribute("MatTm", "305404761"); // 2
      Undly_19_set.insert("305404761");
      Undly_19.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1360900784"); // 2
      Undly_19_set.insert("UnderlyingCouponPaymentDate_t_1360900784");
      Undly_19.add_attribute("RestrctTyp", "FR"); // 2
      Undly_19_set.insert("FR");
      Undly_19.add_attribute("Snrty", "SB"); // 2
      Undly_19_set.insert("SB");
      Undly_19.add_attribute("NotlPctOut", "3263654.460000"); // 2
      Undly_19_set.insert("3263654.460000");
      Undly_19.add_attribute("OrigNotlPctOut", "14439725.470000"); // 2
      Undly_19_set.insert("14439725.470000");
      Undly_19.add_attribute("AttchPnt", "5411090.210000"); // 2
      Undly_19_set.insert("5411090.210000");
      Undly_19.add_attribute("DetchPnt", "7447624.810000"); // 2
      Undly_19_set.insert("7447624.810000");
      Undly_19.add_attribute("Issued", "UnderlyingIssueDate_t_10954810"); // 2
      Undly_19_set.insert("UnderlyingIssueDate_t_10954810");
      Undly_19.add_attribute("RepoCollSecTyp", "1431734102"); // 2
      Undly_19_set.insert("1431734102");
      Undly_19.add_attribute("RepoTrm", "620931449"); // 2
      Undly_19_set.insert("620931449");
      Undly_19.add_attribute("RepoRt", "14845203.280000"); // 2
      Undly_19_set.insert("14845203.280000");
      Undly_19.add_attribute("Fctr", "629872.260000"); // 2
      Undly_19_set.insert("629872.260000");
      Undly_19.add_attribute("CrdRtg", "UnderlyingCreditRating_t_546796174"); // 2
      Undly_19_set.insert("UnderlyingCreditRating_t_546796174");
      Undly_19.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1535280823"); // 2
      Undly_19_set.insert("UnderlyingInstrRegistry_t_1535280823");
      Undly_19.add_attribute("Ctry", "1536262582"); // 2
      Undly_19_set.insert("1536262582");
      Undly_19.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1040762482"); // 2
      Undly_19_set.insert("UnderlyingStateOrProvinceOfIssue_t_1040762482");
      Undly_19.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_393961167"); // 2
      Undly_19_set.insert("UnderlyingLocaleOfIssue_t_393961167");
      Undly_19.add_attribute("Redeem", "UnderlyingRedemptionDate_t_501245627"); // 2
      Undly_19_set.insert("UnderlyingRedemptionDate_t_501245627");
      Undly_19.add_attribute("StrkPx", "10685661.010000"); // 2
      Undly_19_set.insert("10685661.010000");
      Undly_19.add_attribute("StrkCcy", "GBP"); // 2
      Undly_19_set.insert("GBP");
      Undly_19.add_attribute("OptA", "251086627"); // 2
      Undly_19_set.insert("251086627");
      Undly_19.add_attribute("Mult", "2491811.420000"); // 2
      Undly_19_set.insert("2491811.420000");
      Undly_19.add_attribute("MultTyp", "2"); // 2
      Undly_19_set.insert("2");
      Undly_19.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_19_set.insert("4");
      Undly_19.add_attribute("UOM", "Bbl"); // 2
      Undly_19_set.insert("Bbl");
      Undly_19.add_attribute("UOMQty", "17940946.560000"); // 2
      Undly_19_set.insert("17940946.560000");
      Undly_19.add_attribute("PxUOM", "Bbl"); // 2
      Undly_19_set.insert("Bbl");
      Undly_19.add_attribute("PxUOMQty", "9032685.960000"); // 2
      Undly_19_set.insert("9032685.960000");
      Undly_19.add_attribute("TmUnit", "Min"); // 2
      Undly_19_set.insert("Min");
      Undly_19.add_attribute("ExerStyle", "2"); // 2
      Undly_19_set.insert("2");
      Undly_19.add_attribute("CpnRt", "1166857.320000"); // 2
      Undly_19_set.insert("1166857.320000");
      Undly_19.add_attribute("Exch", "UnderlyingSecurityExchange_t_1969181752"); // 2
      Undly_19_set.insert("UnderlyingSecurityExchange_t_1969181752");
      Undly_19.add_attribute("Issr", "UnderlyingIssuer_t_1549019872"); // 2
      Undly_19_set.insert("UnderlyingIssuer_t_1549019872");
      Undly_19.add_attribute("EncUndIssrLen", "443051178"); // 2
      Undly_19_set.insert("443051178");
      Undly_19.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1265670651"); // 2
      Undly_19_set.insert("EncodedUnderlyingIssuer_t_1265670651");
      Undly_19.add_attribute("Desc", "UnderlyingSecurityDesc_t_2090128893"); // 2
      Undly_19_set.insert("UnderlyingSecurityDesc_t_2090128893");
      Undly_19.add_attribute("EncUndSecDescLen", "1187813660"); // 2
      Undly_19_set.insert("1187813660");
      Undly_19.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1276625461"); // 2
      Undly_19_set.insert("EncodedUnderlyingSecurityDesc_t_1276625461");
      Undly_19.add_attribute("CPPgm", "UnderlyingCPProgram_t_1374379348"); // 2
      Undly_19_set.insert("UnderlyingCPProgram_t_1374379348");
      Undly_19.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1808745109"); // 2
      Undly_19_set.insert("UnderlyingCPRegType_t_1808745109");
      Undly_19.add_attribute("AllocPct", "6136621.410000"); // 2
      Undly_19_set.insert("6136621.410000");
      Undly_19.add_attribute("Ccy", "CHF"); // 2
      Undly_19_set.insert("CHF");
      Undly_19.add_attribute("Qty", "14593.160000"); // 2
      Undly_19_set.insert("14593.160000");
      Undly_19.add_attribute("SettlTyp", "4"); // 2
      Undly_19_set.insert("4");
      Undly_19.add_attribute("CashAmt", "UnderlyingCashAmount_t_1248820117"); // 2
      Undly_19_set.insert("UnderlyingCashAmount_t_1248820117");
      Undly_19.add_attribute("CashTyp", "FIXED"); // 2
      Undly_19_set.insert("FIXED");
      Undly_19.add_attribute("Px", "13273911.360000"); // 2
      Undly_19_set.insert("13273911.360000");
      Undly_19.add_attribute("DirtPx", "1699025.700000"); // 2
      Undly_19_set.insert("1699025.700000");
      Undly_19.add_attribute("EndPx", "20464125.720000"); // 2
      Undly_19_set.insert("20464125.720000");
      Undly_19.add_attribute("StartVal", "UnderlyingStartValue_t_1678470218"); // 2
      Undly_19_set.insert("UnderlyingStartValue_t_1678470218");
      Undly_19.add_attribute("CurVal", "UnderlyingCurrentValue_t_420989197"); // 2
      Undly_19_set.insert("UnderlyingCurrentValue_t_420989197");
      Undly_19.add_attribute("EndVal", "UnderlyingEndValue_t_148110067"); // 2
      Undly_19_set.insert("UnderlyingEndValue_t_148110067");
      Undly_19.add_attribute("AdjQty", "17378840.230000"); // 2
      Undly_19_set.insert("17378840.230000");
      Undly_19.add_attribute("FxRate", "2582415.040000"); // 2
      Undly_19_set.insert("2582415.040000");
      Undly_19.add_attribute("FxRateCalc", "M"); // 2
      Undly_19_set.insert("M");
      Undly_19.add_attribute("CapValu", "UnderlyingCapValue_t_1384495031"); // 2
      Undly_19_set.insert("UnderlyingCapValue_t_1384495031");
      Undly_19.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1415361288"); // 2
      Undly_19_set.insert("UnderlyingSettlMethod_t_1415361288");
      Undly_19.add_attribute("PutCall", "168339016"); // 2
      Undly_19_set.insert("168339016");
      all_values.push_back(Undly_19_set);
      all_compo_names.insert("Undly_19_set");

      {
        xml_element UndAID_19{"UndAID"};
        multiset<string> UndAID_19_set;
        UndAID_19.add_attribute("AltID", "UnderlyingSecurityAltID_t_236201779"); // 3
        UndAID_19_set.insert("UnderlyingSecurityAltID_t_236201779");
        UndAID_19.add_attribute("AltIDSrc", "8"); // 3
        UndAID_19_set.insert("8");
        all_values.push_back(UndAID_19_set);
        all_compo_names.insert("UndAID_19_set");

        Undly_19.add_element(UndAID_19);
      }
      {
        xml_element Stip_30{"Stip"};
        multiset<string> Stip_30_set;
        Stip_30.add_attribute("Typ", "PAYFREQ"); // 3
        Stip_30_set.insert("PAYFREQ");
        Stip_30.add_attribute("Val", "UnderlyingStipValue_t_57899884"); // 3
        Stip_30_set.insert("UnderlyingStipValue_t_57899884");
        all_values.push_back(Stip_30_set);
        all_compo_names.insert("Stip_30_set");

        Undly_19.add_element(Stip_30);
      }
      {
        xml_element Pty_93{"Pty"};
        multiset<string> Pty_93_set;
        Pty_93.add_attribute("ID", "UnderlyingInstrumentPartyID_t_131938409"); // 3
        Pty_93_set.insert("UnderlyingInstrumentPartyID_t_131938409");
        Pty_93.add_attribute("Src", "C"); // 3
        Pty_93_set.insert("C");
        Pty_93.add_attribute("R", "16"); // 3
        Pty_93_set.insert("16");
        all_values.push_back(Pty_93_set);
        all_compo_names.insert("Pty_93_set");

        {
          xml_element Sub_93{"Sub"};
          multiset<string> Sub_93_set;
          Sub_93.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_74583655"); // 4
          Sub_93_set.insert("UnderlyingInstrumentPartySubID_t_74583655");
          Sub_93.add_attribute("Typ", "16"); // 4
          Sub_93_set.insert("16");
          all_values.push_back(Sub_93_set);
          all_compo_names.insert("Sub_93_set");

          Pty_93.add_element(Sub_93);
        }
        Undly_19.add_element(Pty_93);
      }
      UndColl_4.add_element(Undly_19);
    }
    elt.add_element(UndColl_4);
  } // end UndColl
  { // TrdRegTS
    xml_element TrdRegTS_5{"TrdRegTS"};
    multiset<string> TrdRegTS_5_set;
    TrdRegTS_5.add_attribute("TS", "TrdRegTimestamp_t_1448963003"); // 1
    TrdRegTS_5_set.insert("TrdRegTimestamp_t_1448963003");
    TrdRegTS_5.add_attribute("Typ", "5"); // 1
    TrdRegTS_5_set.insert("5");
    TrdRegTS_5.add_attribute("Src", "TrdRegTimestampOrigin_t_1066374490"); // 1
    TrdRegTS_5_set.insert("TrdRegTimestampOrigin_t_1066374490");
    TrdRegTS_5.add_attribute("DskTyp", "PT"); // 1
    TrdRegTS_5_set.insert("PT");
    TrdRegTS_5.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_5_set.insert("1");
    TrdRegTS_5.add_attribute("DskOrdHndlInst", "IOC"); // 1
    TrdRegTS_5_set.insert("IOC");
    all_values.push_back(TrdRegTS_5_set);
    all_compo_names.insert("TrdRegTS_5_set");

    elt.add_element(TrdRegTS_5);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_6{"TrdRegTS"};
    multiset<string> TrdRegTS_6_set;
    TrdRegTS_6.add_attribute("TS", "TrdRegTimestamp_t_1564991438"); // 1
    TrdRegTS_6_set.insert("TrdRegTimestamp_t_1564991438");
    TrdRegTS_6.add_attribute("Typ", "5"); // 1
    TrdRegTS_6_set.insert("5");
    TrdRegTS_6.add_attribute("Src", "TrdRegTimestampOrigin_t_1463254291"); // 1
    TrdRegTS_6_set.insert("TrdRegTimestampOrigin_t_1463254291");
    TrdRegTS_6.add_attribute("DskTyp", "D"); // 1
    TrdRegTS_6_set.insert("D");
    TrdRegTS_6.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_6_set.insert("1");
    TrdRegTS_6.add_attribute("DskOrdHndlInst", "WRK"); // 1
    TrdRegTS_6_set.insert("WRK");
    all_values.push_back(TrdRegTS_6_set);
    all_compo_names.insert("TrdRegTS_6_set");

    elt.add_element(TrdRegTS_6);
  } // end TrdRegTS
  { // MiscFees
    xml_element MiscFees_12{"MiscFees"};
    multiset<string> MiscFees_12_set;
    MiscFees_12.add_attribute("Amt", "MiscFeeAmt_t_1477436921"); // 1
    MiscFees_12_set.insert("MiscFeeAmt_t_1477436921");
    MiscFees_12.add_attribute("Curr", "GBP"); // 1
    MiscFees_12_set.insert("GBP");
    MiscFees_12.add_attribute("Typ", "3"); // 1
    MiscFees_12_set.insert("3");
    MiscFees_12.add_attribute("Basis", "1"); // 1
    MiscFees_12_set.insert("1");
    all_values.push_back(MiscFees_12_set);
    all_compo_names.insert("MiscFees_12_set");

    elt.add_element(MiscFees_12);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_13{"MiscFees"};
    multiset<string> MiscFees_13_set;
    MiscFees_13.add_attribute("Amt", "MiscFeeAmt_t_1250780904"); // 1
    MiscFees_13_set.insert("MiscFeeAmt_t_1250780904");
    MiscFees_13.add_attribute("Curr", "CHF"); // 1
    MiscFees_13_set.insert("CHF");
    MiscFees_13.add_attribute("Typ", "9"); // 1
    MiscFees_13_set.insert("9");
    MiscFees_13.add_attribute("Basis", "1"); // 1
    MiscFees_13_set.insert("1");
    all_values.push_back(MiscFees_13_set);
    all_compo_names.insert("MiscFees_13_set");

    elt.add_element(MiscFees_13);
  } // end MiscFees
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_6{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_6_set;
    SprdBnchmkCurve_6.add_attribute("Spread", "12287274.680000"); // 1
    SprdBnchmkCurve_6_set.insert("12287274.680000");
    SprdBnchmkCurve_6.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_6_set.insert("JPY");
    SprdBnchmkCurve_6.add_attribute("Name", "OTHER"); // 1
    SprdBnchmkCurve_6_set.insert("OTHER");
    SprdBnchmkCurve_6.add_attribute("Point", "BenchmarkCurvePoint_t_720969455"); // 1
    SprdBnchmkCurve_6_set.insert("BenchmarkCurvePoint_t_720969455");
    SprdBnchmkCurve_6.add_attribute("Px", "19404803.150000"); // 1
    SprdBnchmkCurve_6_set.insert("19404803.150000");
    SprdBnchmkCurve_6.add_attribute("PxTyp", "10"); // 1
    SprdBnchmkCurve_6_set.insert("10");
    SprdBnchmkCurve_6.add_attribute("SecID", "BenchmarkSecurityID_t_1173681804"); // 1
    SprdBnchmkCurve_6_set.insert("BenchmarkSecurityID_t_1173681804");
    SprdBnchmkCurve_6.add_attribute("SecIDSrc", "7"); // 1
    SprdBnchmkCurve_6_set.insert("7");
    all_values.push_back(SprdBnchmkCurve_6_set);
    all_compo_names.insert("SprdBnchmkCurve_6_set");

    elt.add_element(SprdBnchmkCurve_6);
  } // end SprdBnchmkCurve
  { // Stip
    xml_element Stip_31{"Stip"};
    multiset<string> Stip_31_set;
    Stip_31.add_attribute("Typ", "CPP"); // 1
    Stip_31_set.insert("CPP");
    Stip_31.add_attribute("Val", "StipulationValue_t_1980805599"); // 1
    Stip_31_set.insert("StipulationValue_t_1980805599");
    all_values.push_back(Stip_31_set);
    all_compo_names.insert("Stip_31_set");

    elt.add_element(Stip_31);
  } // end Stip
  { // Stip
    xml_element Stip_32{"Stip"};
    multiset<string> Stip_32_set;
    Stip_32.add_attribute("Typ", "GEOG"); // 1
    Stip_32_set.insert("GEOG");
    Stip_32.add_attribute("Val", "StipulationValue_t_1160406453"); // 1
    Stip_32_set.insert("StipulationValue_t_1160406453");
    all_values.push_back(Stip_32_set);
    all_compo_names.insert("Stip_32_set");

    elt.add_element(Stip_32);
  } // end Stip
  { // Stip
    xml_element Stip_33{"Stip"};
    multiset<string> Stip_33_set;
    Stip_33.add_attribute("Typ", "PIECES"); // 1
    Stip_33_set.insert("PIECES");
    Stip_33.add_attribute("Val", "StipulationValue_t_1679146925"); // 1
    Stip_33_set.insert("StipulationValue_t_1679146925");
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
