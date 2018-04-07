#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationReport_message_t_0;
  elt.add_attribute("RptID", "AllocReportID_t_806370784"); // 0
  AllocationReport_message_t_0.insert("AllocReportID_t_806370784");
  elt.add_attribute("ID", "AllocID_t_1882646575"); // 0
  AllocationReport_message_t_0.insert("AllocID_t_1882646575");
  elt.add_attribute("TransTyp", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("RptRefID", "AllocReportRefID_t_1908191654"); // 0
  AllocationReport_message_t_0.insert("AllocReportRefID_t_1908191654");
  elt.add_attribute("CxlRplcRsn", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_2123450903"); // 0
  AllocationReport_message_t_0.insert("SecondaryAllocID_t_2123450903");
  elt.add_attribute("RptTyp", "2"); // 0
  AllocationReport_message_t_0.insert("2");
  elt.add_attribute("Stat", "6"); // 0
  AllocationReport_message_t_0.insert("6");
  elt.add_attribute("RejCode", "12"); // 0
  AllocationReport_message_t_0.insert("12");
  elt.add_attribute("RefID", "RefAllocID_t_1615158697"); // 0
  AllocationReport_message_t_0.insert("RefAllocID_t_1615158697");
  elt.add_attribute("ImReqTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("LinkID", "AllocLinkID_t_177930878"); // 0
  AllocationReport_message_t_0.insert("AllocLinkID_t_177930878");
  elt.add_attribute("LinkTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("BkngRefID", "BookingRefID_t_1924224707"); // 0
  AllocationReport_message_t_0.insert("BookingRefID_t_1924224707");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_469362698"); // 0
  AllocationReport_message_t_0.insert("ClearingBusinessDate_t_469362698");
  elt.add_attribute("TrdTyp", "24"); // 0
  AllocationReport_message_t_0.insert("24");
  elt.add_attribute("TrdSubTyp", "19"); // 0
  AllocationReport_message_t_0.insert("19");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("CustCpcty", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("InptSrc", "TradeInputSource_t_62549505"); // 0
  AllocationReport_message_t_0.insert("TradeInputSource_t_62549505");
  elt.add_attribute("RndPx", "15984291.210000"); // 0
  AllocationReport_message_t_0.insert("15984291.210000");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_309675613"); // 0
  AllocationReport_message_t_0.insert("MessageEventSource_t_309675613");
  elt.add_attribute("InptDev", "TradeInputDevice_t_628435756"); // 0
  AllocationReport_message_t_0.insert("TradeInputDevice_t_628435756");
  elt.add_attribute("AvgPxInd", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("NoOrdsTyp", "0"); // 0
  AllocationReport_message_t_0.insert("0");
  elt.add_attribute("PrevlyRpted", "Y"); // 0
  AllocationReport_message_t_0.insert("Y");
  elt.add_attribute("ReversalInd", "false"); // 0
  AllocationReport_message_t_0.insert("false");
  elt.add_attribute("MtchTyp", "M3"); // 0
  AllocationReport_message_t_0.insert("M3");
  elt.add_attribute("Side", "9"); // 0
  AllocationReport_message_t_0.insert("9");
  elt.add_attribute("Qty", "18007247.340000"); // 0
  AllocationReport_message_t_0.insert("18007247.340000");
  elt.add_attribute("QtyTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("LastMkt", "LastMkt_t_191491288"); // 0
  AllocationReport_message_t_0.insert("LastMkt_t_191491288");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1535887661"); // 0
  AllocationReport_message_t_0.insert("TradeOriginationDate_t_1535887661");
  elt.add_attribute("SesID", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("SesSub", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("PxTyp", "17"); // 0
  AllocationReport_message_t_0.insert("17");
  elt.add_attribute("AvgPx", "3952361.850000"); // 0
  AllocationReport_message_t_0.insert("3952361.850000");
  elt.add_attribute("AvgParPx", "21307944.070000"); // 0
  AllocationReport_message_t_0.insert("21307944.070000");
  elt.add_attribute("Ccy", "GBP"); // 0
  AllocationReport_message_t_0.insert("GBP");
  elt.add_attribute("AvgPxPrcsn", "1598469456"); // 0
  AllocationReport_message_t_0.insert("1598469456");
  elt.add_attribute("TrdDt", "TradeDate_t_1487655674"); // 0
  AllocationReport_message_t_0.insert("TradeDate_t_1487655674");
  elt.add_attribute("TxnTm", "TransactTime_t_321801545"); // 0
  AllocationReport_message_t_0.insert("TransactTime_t_321801545");
  elt.add_attribute("SettlTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("SettlDt", "SettlDate_t_1264396733"); // 0
  AllocationReport_message_t_0.insert("SettlDate_t_1264396733");
  elt.add_attribute("BkngTyp", "1"); // 0
  AllocationReport_message_t_0.insert("1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1701275461"); // 0
  AllocationReport_message_t_0.insert("GrossTradeAmt_t_1701275461");
  elt.add_attribute("Concession", "Concession_t_1335384094"); // 0
  AllocationReport_message_t_0.insert("Concession_t_1335384094");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_737502212"); // 0
  AllocationReport_message_t_0.insert("TotalTakedown_t_737502212");
  elt.add_attribute("NetMny", "NetMoney_t_361563493"); // 0
  AllocationReport_message_t_0.insert("NetMoney_t_361563493");
  elt.add_attribute("PosEfct", "O"); // 0
  AllocationReport_message_t_0.insert("O");
  elt.add_attribute("AutoAcceptInd", "true"); // 0
  AllocationReport_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_671239107"); // 0
  AllocationReport_message_t_0.insert("Text_t_671239107");
  elt.add_attribute("EncTxtLen", "2026369356"); // 0
  AllocationReport_message_t_0.insert("2026369356");
  elt.add_attribute("EncTxt", "EncodedText_t_909226625"); // 0
  AllocationReport_message_t_0.insert("EncodedText_t_909226625");
  elt.add_attribute("NumDaysInt", "1628836305"); // 0
  AllocationReport_message_t_0.insert("1628836305");
  elt.add_attribute("AcrdIntRt", "20016663.730000"); // 0
  AllocationReport_message_t_0.insert("20016663.730000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1641408244"); // 0
  AllocationReport_message_t_0.insert("AccruedInterestAmt_t_1641408244");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_85633846"); // 0
  AllocationReport_message_t_0.insert("TotalAccruedInterestAmt_t_85633846");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1386786877"); // 0
  AllocationReport_message_t_0.insert("InterestAtMaturity_t_1386786877");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1294649330"); // 0
  AllocationReport_message_t_0.insert("EndAccruedInterestAmt_t_1294649330");
  elt.add_attribute("StartCsh", "StartCash_t_1108521239"); // 0
  AllocationReport_message_t_0.insert("StartCash_t_1108521239");
  elt.add_attribute("EndCsh", "EndCash_t_1578278165"); // 0
  AllocationReport_message_t_0.insert("EndCash_t_1578278165");
  elt.add_attribute("LegalCnfm", "N"); // 0
  AllocationReport_message_t_0.insert("N");
  elt.add_attribute("TotNoAllocs", "1527790169"); // 0
  AllocationReport_message_t_0.insert("1527790169");
  elt.add_attribute("LastFragment", "N"); // 0
  AllocationReport_message_t_0.insert("N");
  all_values.push_back(AllocationReport_message_t_0);
  all_compo_names.insert("AllocationReport_message_t");

  { // Hdr
    xml_element Hdr_5{"Hdr"};
    multiset<string> Hdr_5_set;
    Hdr_5.add_attribute("SeqNum", "386799925"); // 1
    Hdr_5_set.insert("386799925");
    Hdr_5.add_attribute("SID", "SenderCompID_t_1923026354"); // 1
    Hdr_5_set.insert("SenderCompID_t_1923026354");
    Hdr_5.add_attribute("TID", "TargetCompID_t_1513788219"); // 1
    Hdr_5_set.insert("TargetCompID_t_1513788219");
    Hdr_5.add_attribute("OBID", "OnBehalfOfCompID_t_1992896176"); // 1
    Hdr_5_set.insert("OnBehalfOfCompID_t_1992896176");
    Hdr_5.add_attribute("D2ID", "DeliverToCompID_t_2066897021"); // 1
    Hdr_5_set.insert("DeliverToCompID_t_2066897021");
    Hdr_5.add_attribute("SSub", "SenderSubID_t_964774027"); // 1
    Hdr_5_set.insert("SenderSubID_t_964774027");
    Hdr_5.add_attribute("SLoc", "SenderLocationID_t_1333068202"); // 1
    Hdr_5_set.insert("SenderLocationID_t_1333068202");
    Hdr_5.add_attribute("TSub", "TargetSubID_t_241214918"); // 1
    Hdr_5_set.insert("TargetSubID_t_241214918");
    Hdr_5.add_attribute("TLoc", "TargetLocationID_t_1032739160"); // 1
    Hdr_5_set.insert("TargetLocationID_t_1032739160");
    Hdr_5.add_attribute("OBSub", "OnBehalfOfSubID_t_449981287"); // 1
    Hdr_5_set.insert("OnBehalfOfSubID_t_449981287");
    Hdr_5.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1032379161"); // 1
    Hdr_5_set.insert("OnBehalfOfLocationID_t_1032379161");
    Hdr_5.add_attribute("D2Sub", "DeliverToSubID_t_586530974"); // 1
    Hdr_5_set.insert("DeliverToSubID_t_586530974");
    Hdr_5.add_attribute("D2Loc", "DeliverToLocationID_t_1785365382"); // 1
    Hdr_5_set.insert("DeliverToLocationID_t_1785365382");
    Hdr_5.add_attribute("PosDup", "Y"); // 1
    Hdr_5_set.insert("Y");
    Hdr_5.add_attribute("PosRsnd", "Y"); // 1
    Hdr_5_set.insert("Y");
    Hdr_5.add_attribute("Snt", "SendingTime_t_1035815334"); // 1
    Hdr_5_set.insert("SendingTime_t_1035815334");
    Hdr_5.add_attribute("OrigSnt", "OrigSendingTime_t_1958329059"); // 1
    Hdr_5_set.insert("OrigSendingTime_t_1958329059");
    Hdr_5.add_attribute("MsgEncd", "MessageEncoding_t_1619333574"); // 1
    Hdr_5_set.insert("MessageEncoding_t_1619333574");
    all_values.push_back(Hdr_5_set);
    all_compo_names.insert("Hdr_5_set");

    {
      xml_element Hop_5{"Hop"};
      multiset<string> Hop_5_set;
      Hop_5.add_attribute("ID", "HopCompID_t_914701042"); // 2
      Hop_5_set.insert("HopCompID_t_914701042");
      Hop_5.add_attribute("Ref", "720072036"); // 2
      Hop_5_set.insert("720072036");
      Hop_5.add_attribute("Snt", "HopSendingTime_t_1100686231"); // 2
      Hop_5_set.insert("HopSendingTime_t_1100686231");
      all_values.push_back(Hop_5_set);
      all_compo_names.insert("Hop_5_set");

      Hdr_5.add_element(Hop_5);
    }
    elt.add_element(Hdr_5);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_6{"OrdAlloc"};
    multiset<string> OrdAlloc_6_set;
    OrdAlloc_6.add_attribute("ClOrdID", "ClOrdID_t_213996633"); // 1
    OrdAlloc_6_set.insert("ClOrdID_t_213996633");
    OrdAlloc_6.add_attribute("OrdID", "OrderID_t_1186320077"); // 1
    OrdAlloc_6_set.insert("OrderID_t_1186320077");
    OrdAlloc_6.add_attribute("OrdID2", "SecondaryOrderID_t_8186997"); // 1
    OrdAlloc_6_set.insert("SecondaryOrderID_t_8186997");
    OrdAlloc_6.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1508645963"); // 1
    OrdAlloc_6_set.insert("SecondaryClOrdID_t_1508645963");
    OrdAlloc_6.add_attribute("ListID", "ListID_t_147357668"); // 1
    OrdAlloc_6_set.insert("ListID_t_147357668");
    OrdAlloc_6.add_attribute("Qty", "15864651.620000"); // 1
    OrdAlloc_6_set.insert("15864651.620000");
    OrdAlloc_6.add_attribute("AvgPx", "442156.590000"); // 1
    OrdAlloc_6_set.insert("442156.590000");
    OrdAlloc_6.add_attribute("BkngQty", "16751478.370000"); // 1
    OrdAlloc_6_set.insert("16751478.370000");
    all_values.push_back(OrdAlloc_6_set);
    all_compo_names.insert("OrdAlloc_6_set");

    {
      xml_element Pty_41{"Pty"};
      multiset<string> Pty_41_set;
      Pty_41.add_attribute("ID", "Nested2PartyID_t_969458974"); // 2
      Pty_41_set.insert("Nested2PartyID_t_969458974");
      Pty_41.add_attribute("Src", "5"); // 2
      Pty_41_set.insert("5");
      Pty_41.add_attribute("R", "47"); // 2
      Pty_41_set.insert("47");
      all_values.push_back(Pty_41_set);
      all_compo_names.insert("Pty_41_set");

      {
        xml_element Sub_41{"Sub"};
        multiset<string> Sub_41_set;
        Sub_41.add_attribute("ID", "Nested2PartySubID_t_335763545"); // 3
        Sub_41_set.insert("Nested2PartySubID_t_335763545");
        Sub_41.add_attribute("Typ", "24"); // 3
        Sub_41_set.insert("24");
        all_values.push_back(Sub_41_set);
        all_compo_names.insert("Sub_41_set");

        Pty_41.add_element(Sub_41);
      }
      OrdAlloc_6.add_element(Pty_41);
    }
    elt.add_element(OrdAlloc_6);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_2{"AllExc"};
    multiset<string> AllExc_2_set;
    AllExc_2.add_attribute("LastQty", "13005375.720000"); // 1
    AllExc_2_set.insert("13005375.720000");
    AllExc_2.add_attribute("ExecID", "ExecID_t_1609496315"); // 1
    AllExc_2_set.insert("ExecID_t_1609496315");
    AllExc_2.add_attribute("ExecID2", "SecondaryExecID_t_1611318835"); // 1
    AllExc_2_set.insert("SecondaryExecID_t_1611318835");
    AllExc_2.add_attribute("LastPx", "1857930.850000"); // 1
    AllExc_2_set.insert("1857930.850000");
    AllExc_2.add_attribute("LastParPx", "20594776.030000"); // 1
    AllExc_2_set.insert("20594776.030000");
    AllExc_2.add_attribute("LastCpcty", "1"); // 1
    AllExc_2_set.insert("1");
    AllExc_2.add_attribute("TrdID", "TradeID_t_772324059"); // 1
    AllExc_2_set.insert("TradeID_t_772324059");
    AllExc_2.add_attribute("FirmTrdID", "FirmTradeID_t_1697359337"); // 1
    AllExc_2_set.insert("FirmTradeID_t_1697359337");
    all_values.push_back(AllExc_2_set);
    all_compo_names.insert("AllExc_2_set");

    elt.add_element(AllExc_2);
  } // end AllExc
  { // AllExc
    xml_element AllExc_3{"AllExc"};
    multiset<string> AllExc_3_set;
    AllExc_3.add_attribute("LastQty", "1186120.730000"); // 1
    AllExc_3_set.insert("1186120.730000");
    AllExc_3.add_attribute("ExecID", "ExecID_t_1720418526"); // 1
    AllExc_3_set.insert("ExecID_t_1720418526");
    AllExc_3.add_attribute("ExecID2", "SecondaryExecID_t_585691023"); // 1
    AllExc_3_set.insert("SecondaryExecID_t_585691023");
    AllExc_3.add_attribute("LastPx", "20769411.330000"); // 1
    AllExc_3_set.insert("20769411.330000");
    AllExc_3.add_attribute("LastParPx", "11922684.530000"); // 1
    AllExc_3_set.insert("11922684.530000");
    AllExc_3.add_attribute("LastCpcty", "2"); // 1
    AllExc_3_set.insert("2");
    AllExc_3.add_attribute("TrdID", "TradeID_t_649529521"); // 1
    AllExc_3_set.insert("TradeID_t_649529521");
    AllExc_3.add_attribute("FirmTrdID", "FirmTradeID_t_145471036"); // 1
    AllExc_3_set.insert("FirmTradeID_t_145471036");
    all_values.push_back(AllExc_3_set);
    all_compo_names.insert("AllExc_3_set");

    elt.add_element(AllExc_3);
  } // end AllExc
  { // AllExc
    xml_element AllExc_4{"AllExc"};
    multiset<string> AllExc_4_set;
    AllExc_4.add_attribute("LastQty", "1217921.840000"); // 1
    AllExc_4_set.insert("1217921.840000");
    AllExc_4.add_attribute("ExecID", "ExecID_t_863526154"); // 1
    AllExc_4_set.insert("ExecID_t_863526154");
    AllExc_4.add_attribute("ExecID2", "SecondaryExecID_t_1331791114"); // 1
    AllExc_4_set.insert("SecondaryExecID_t_1331791114");
    AllExc_4.add_attribute("LastPx", "1299791.810000"); // 1
    AllExc_4_set.insert("1299791.810000");
    AllExc_4.add_attribute("LastParPx", "2246884.700000"); // 1
    AllExc_4_set.insert("2246884.700000");
    AllExc_4.add_attribute("LastCpcty", "3"); // 1
    AllExc_4_set.insert("3");
    AllExc_4.add_attribute("TrdID", "TradeID_t_1716444344"); // 1
    AllExc_4_set.insert("TradeID_t_1716444344");
    AllExc_4.add_attribute("FirmTrdID", "FirmTradeID_t_268904129"); // 1
    AllExc_4_set.insert("FirmTradeID_t_268904129");
    all_values.push_back(AllExc_4_set);
    all_compo_names.insert("AllExc_4_set");

    elt.add_element(AllExc_4);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_6{"Instrmt"};
    multiset<string> Instrmt_6_set;
    Instrmt_6.add_attribute("Sym", "Symbol_t_1006812972"); // 1
    Instrmt_6_set.insert("Symbol_t_1006812972");
    Instrmt_6.add_attribute("Sfx", "CD"); // 1
    Instrmt_6_set.insert("CD");
    Instrmt_6.add_attribute("ID", "SecurityID_t_699919714"); // 1
    Instrmt_6_set.insert("SecurityID_t_699919714");
    Instrmt_6.add_attribute("Src", "5"); // 1
    Instrmt_6_set.insert("5");
    Instrmt_6.add_attribute("Prod", "7"); // 1
    Instrmt_6_set.insert("7");
    Instrmt_6.add_attribute("ProdCmplx", "ProductComplex_t_976347827"); // 1
    Instrmt_6_set.insert("ProductComplex_t_976347827");
    Instrmt_6.add_attribute("SecGrp", "SecurityGroup_t_1680123785"); // 1
    Instrmt_6_set.insert("SecurityGroup_t_1680123785");
    Instrmt_6.add_attribute("CFI", "CFICode_t_27237140"); // 1
    Instrmt_6_set.insert("CFICode_t_27237140");
    Instrmt_6.add_attribute("SecTyp", "PFAND"); // 1
    Instrmt_6_set.insert("PFAND");
    Instrmt_6.add_attribute("SubTyp", "SecuritySubType_t_1143958972"); // 1
    Instrmt_6_set.insert("SecuritySubType_t_1143958972");
    Instrmt_6.add_attribute("MMY", "213030225"); // 1
    Instrmt_6_set.insert("213030225");
    Instrmt_6.add_attribute("MatDt", "MaturityDate_t_350354449"); // 1
    Instrmt_6_set.insert("MaturityDate_t_350354449");
    Instrmt_6.add_attribute("MatTm", "1640173320"); // 1
    Instrmt_6_set.insert("1640173320");
    Instrmt_6.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_985354284"); // 1
    Instrmt_6_set.insert("SettleOnOpenFlag_t_985354284");
    Instrmt_6.add_attribute("AsgnMeth", "2047713786"); // 1
    Instrmt_6_set.insert("2047713786");
    Instrmt_6.add_attribute("Status", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("CpnPmt", "CouponPaymentDate_t_558289163"); // 1
    Instrmt_6_set.insert("CouponPaymentDate_t_558289163");
    Instrmt_6.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_6_set.insert("MR");
    Instrmt_6.add_attribute("Snrty", "SD"); // 1
    Instrmt_6_set.insert("SD");
    Instrmt_6.add_attribute("NotlPctOut", "17505576.160000"); // 1
    Instrmt_6_set.insert("17505576.160000");
    Instrmt_6.add_attribute("OrigNotlPctOut", "19863132.260000"); // 1
    Instrmt_6_set.insert("19863132.260000");
    Instrmt_6.add_attribute("AttchPnt", "1902887.520000"); // 1
    Instrmt_6_set.insert("1902887.520000");
    Instrmt_6.add_attribute("DetchPnt", "18960286.520000"); // 1
    Instrmt_6_set.insert("18960286.520000");
    Instrmt_6.add_attribute("Issued", "IssueDate_t_2108105411"); // 1
    Instrmt_6_set.insert("IssueDate_t_2108105411");
    Instrmt_6.add_attribute("RepoCollSecTyp", "1053814906"); // 1
    Instrmt_6_set.insert("1053814906");
    Instrmt_6.add_attribute("RepoTrm", "1080336118"); // 1
    Instrmt_6_set.insert("1080336118");
    Instrmt_6.add_attribute("RepoRt", "906009.440000"); // 1
    Instrmt_6_set.insert("906009.440000");
    Instrmt_6.add_attribute("Fctr", "12785033.760000"); // 1
    Instrmt_6_set.insert("12785033.760000");
    Instrmt_6.add_attribute("CrdRtg", "CreditRating_t_412001253"); // 1
    Instrmt_6_set.insert("CreditRating_t_412001253");
    Instrmt_6.add_attribute("Rgstry", "InstrRegistry_t_1807045288"); // 1
    Instrmt_6_set.insert("InstrRegistry_t_1807045288");
    Instrmt_6.add_attribute("IssuCtry", "1547407506"); // 1
    Instrmt_6_set.insert("1547407506");
    Instrmt_6.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1418814225"); // 1
    Instrmt_6_set.insert("StateOrProvinceOfIssue_t_1418814225");
    Instrmt_6.add_attribute("Lcl", "LocaleOfIssue_t_197981311"); // 1
    Instrmt_6_set.insert("LocaleOfIssue_t_197981311");
    Instrmt_6.add_attribute("Redeem", "RedemptionDate_t_99843572"); // 1
    Instrmt_6_set.insert("RedemptionDate_t_99843572");
    Instrmt_6.add_attribute("StrkPx", "17288340.930000"); // 1
    Instrmt_6_set.insert("17288340.930000");
    Instrmt_6.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_6_set.insert("EUR");
    Instrmt_6.add_attribute("StrkMult", "12614742.300000"); // 1
    Instrmt_6_set.insert("12614742.300000");
    Instrmt_6.add_attribute("StrkValu", "10994016.670000"); // 1
    Instrmt_6_set.insert("10994016.670000");
    Instrmt_6.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_6_set.insert("5");
    Instrmt_6.add_attribute("StrkPxBndryPrcsn", "13124318.930000"); // 1
    Instrmt_6_set.insert("13124318.930000");
    Instrmt_6.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_6_set.insert("4");
    Instrmt_6.add_attribute("OptAt", "1898122874"); // 1
    Instrmt_6_set.insert("1898122874");
    Instrmt_6.add_attribute("Mult", "1503025.290000"); // 1
    Instrmt_6_set.insert("1503025.290000");
    Instrmt_6.add_attribute("MultTyp", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_6_set.insert("4");
    Instrmt_6.add_attribute("MinPxIncr", "7085916.920000"); // 1
    Instrmt_6_set.insert("7085916.920000");
    Instrmt_6.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_103573995"); // 1
    Instrmt_6_set.insert("MinPriceIncrementAmount_t_103573995");
    Instrmt_6.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_6_set.insert("MMBtu");
    Instrmt_6.add_attribute("UOMQty", "3116656.600000"); // 1
    Instrmt_6_set.insert("3116656.600000");
    Instrmt_6.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_6_set.insert("MMbbl");
    Instrmt_6.add_attribute("PxUOMQty", "12404726.020000"); // 1
    Instrmt_6_set.insert("12404726.020000");
    Instrmt_6.add_attribute("SettlMeth", "P"); // 1
    Instrmt_6_set.insert("P");
    Instrmt_6.add_attribute("ExerStyle", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("OptPayAmt", "OptPayoutAmount_t_1140546783"); // 1
    Instrmt_6_set.insert("OptPayoutAmount_t_1140546783");
    Instrmt_6.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_6_set.insert("INX");
    Instrmt_6.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_6_set.insert("FUTDA");
    Instrmt_6.add_attribute("ListMeth", "0"); // 1
    Instrmt_6_set.insert("0");
    Instrmt_6.add_attribute("CapPx", "18006715.690000"); // 1
    Instrmt_6_set.insert("18006715.690000");
    Instrmt_6.add_attribute("FlrPx", "8252310.950000"); // 1
    Instrmt_6_set.insert("8252310.950000");
    Instrmt_6.add_attribute("PutCall", "1"); // 1
    Instrmt_6_set.insert("1");
    Instrmt_6.add_attribute("FlexInd", "true"); // 1
    Instrmt_6_set.insert("true");
    Instrmt_6.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_6_set.insert("false");
    Instrmt_6.add_attribute("TmUnit", "D"); // 1
    Instrmt_6_set.insert("D");
    Instrmt_6.add_attribute("CpnRt", "9233337.590000"); // 1
    Instrmt_6_set.insert("9233337.590000");
    Instrmt_6.add_attribute("Exch", "SecurityExchange_t_2001266066"); // 1
    Instrmt_6_set.insert("SecurityExchange_t_2001266066");
    Instrmt_6.add_attribute("PosLmt", "1666703288"); // 1
    Instrmt_6_set.insert("1666703288");
    Instrmt_6.add_attribute("NTPosLmt", "2022735427"); // 1
    Instrmt_6_set.insert("2022735427");
    Instrmt_6.add_attribute("Issr", "Issuer_t_1368334311"); // 1
    Instrmt_6_set.insert("Issuer_t_1368334311");
    Instrmt_6.add_attribute("EncIssrLen", "1924652842"); // 1
    Instrmt_6_set.insert("1924652842");
    Instrmt_6.add_attribute("EncIssr", "EncodedIssuer_t_1187683672"); // 1
    Instrmt_6_set.insert("EncodedIssuer_t_1187683672");
    Instrmt_6.add_attribute("Desc", "SecurityDesc_t_1085757006"); // 1
    Instrmt_6_set.insert("SecurityDesc_t_1085757006");
    Instrmt_6.add_attribute("EncSecDescLen", "1675292068"); // 1
    Instrmt_6_set.insert("1675292068");
    Instrmt_6.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1337986201"); // 1
    Instrmt_6_set.insert("EncodedSecurityDesc_t_1337986201");
    Instrmt_6.add_attribute("Pool", "Pool_t_703409840"); // 1
    Instrmt_6_set.insert("Pool_t_703409840");
    Instrmt_6.add_attribute("CSetMo", "1037233040"); // 1
    Instrmt_6_set.insert("1037233040");
    Instrmt_6.add_attribute("CPPgm", "2"); // 1
    Instrmt_6_set.insert("2");
    Instrmt_6.add_attribute("CPRegT", "CPRegType_t_806983835"); // 1
    Instrmt_6_set.insert("CPRegType_t_806983835");
    Instrmt_6.add_attribute("Dated", "DatedDate_t_2087416890"); // 1
    Instrmt_6_set.insert("DatedDate_t_2087416890");
    Instrmt_6.add_attribute("IntAcrl", "InterestAccrualDate_t_210759906"); // 1
    Instrmt_6_set.insert("InterestAccrualDate_t_210759906");
    all_values.push_back(Instrmt_6_set);
    all_compo_names.insert("Instrmt_6_set");

    {
      xml_element AID_6{"AID"};
      multiset<string> AID_6_set;
      AID_6.add_attribute("AltID", "SecurityAltID_t_749387408"); // 2
      AID_6_set.insert("SecurityAltID_t_749387408");
      AID_6.add_attribute("AltIDSrc", "3"); // 2
      AID_6_set.insert("3");
      all_values.push_back(AID_6_set);
      all_compo_names.insert("AID_6_set");

      Instrmt_6.add_element(AID_6);
    }
    {
      xml_element SecXML_6{"SecXML"};
      multiset<string> SecXML_6_set;
      SecXML_6.add_attribute("Schema", "SecurityXMLSchema_t_270970571"); // 2
      SecXML_6_set.insert("SecurityXMLSchema_t_270970571");
      all_values.push_back(SecXML_6_set);
      all_compo_names.insert("SecXML_6_set");

      Instrmt_6.add_element(SecXML_6);
    }
    {
      xml_element Evnt_6{"Evnt"};
      multiset<string> Evnt_6_set;
      Evnt_6.add_attribute("EventTyp", "5"); // 2
      Evnt_6_set.insert("5");
      Evnt_6.add_attribute("Dt", "EventDate_t_1327209704"); // 2
      Evnt_6_set.insert("EventDate_t_1327209704");
      Evnt_6.add_attribute("Tm", "EventTime_t_1411517355"); // 2
      Evnt_6_set.insert("EventTime_t_1411517355");
      Evnt_6.add_attribute("Px", "6460390.260000"); // 2
      Evnt_6_set.insert("6460390.260000");
      Evnt_6.add_attribute("Txt", "EventText_t_605033293"); // 2
      Evnt_6_set.insert("EventText_t_605033293");
      all_values.push_back(Evnt_6_set);
      all_compo_names.insert("Evnt_6_set");

      Instrmt_6.add_element(Evnt_6);
    }
    {
      xml_element Pty_42{"Pty"};
      multiset<string> Pty_42_set;
      Pty_42.add_attribute("ID", "InstrumentPartyID_t_816581743"); // 2
      Pty_42_set.insert("InstrumentPartyID_t_816581743");
      Pty_42.add_attribute("Src", "6"); // 2
      Pty_42_set.insert("6");
      Pty_42.add_attribute("R", "1"); // 2
      Pty_42_set.insert("1");
      all_values.push_back(Pty_42_set);
      all_compo_names.insert("Pty_42_set");

      {
        xml_element Sub_42{"Sub"};
        multiset<string> Sub_42_set;
        Sub_42.add_attribute("ID", "InstrumentPartySubID_t_1640460357"); // 3
        Sub_42_set.insert("InstrumentPartySubID_t_1640460357");
        Sub_42.add_attribute("Typ", "1"); // 3
        Sub_42_set.insert("1");
        all_values.push_back(Sub_42_set);
        all_compo_names.insert("Sub_42_set");

        Pty_42.add_element(Sub_42);
      }
      Instrmt_6.add_element(Pty_42);
    }
    {
      xml_element CmplxEvnt_6{"CmplxEvnt"};
      multiset<string> CmplxEvnt_6_set;
      CmplxEvnt_6.add_attribute("Typ", "3"); // 2
      CmplxEvnt_6_set.insert("3");
      CmplxEvnt_6.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2045689415"); // 2
      CmplxEvnt_6_set.insert("ComplexOptPayoutAmount_t_2045689415");
      CmplxEvnt_6.add_attribute("Px", "10737299.390000"); // 2
      CmplxEvnt_6_set.insert("10737299.390000");
      CmplxEvnt_6.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_6_set.insert("1");
      CmplxEvnt_6.add_attribute("PxBndryPrcsn", "15649090.560000"); // 2
      CmplxEvnt_6_set.insert("15649090.560000");
      CmplxEvnt_6.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_6_set.insert("2");
      CmplxEvnt_6.add_attribute("Cond", "2"); // 2
      CmplxEvnt_6_set.insert("2");
      all_values.push_back(CmplxEvnt_6_set);
      all_compo_names.insert("CmplxEvnt_6_set");

      {
        xml_element EvntDts_6{"EvntDts"};
        multiset<string> EvntDts_6_set;
        EvntDts_6.add_attribute("StartDt", "ComplexEventStartDate_t_1342078250"); // 3
        EvntDts_6_set.insert("ComplexEventStartDate_t_1342078250");
        EvntDts_6.add_attribute("EndDt", "ComplexEventEndDate_t_2136665390"); // 3
        EvntDts_6_set.insert("ComplexEventEndDate_t_2136665390");
        all_values.push_back(EvntDts_6_set);
        all_compo_names.insert("EvntDts_6_set");

        {
          xml_element EvntTms_6{"EvntTms"};
          multiset<string> EvntTms_6_set;
          EvntTms_6.add_attribute("StartTm", "368245495"); // 4
          EvntTms_6_set.insert("368245495");
          EvntTms_6.add_attribute("EndTm", "869886671"); // 4
          EvntTms_6_set.insert("869886671");
          all_values.push_back(EvntTms_6_set);
          all_compo_names.insert("EvntTms_6_set");

          EvntDts_6.add_element(EvntTms_6);
        }
        CmplxEvnt_6.add_element(EvntDts_6);
      }
      Instrmt_6.add_element(CmplxEvnt_6);
    }
    elt.add_element(Instrmt_6);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_2{"InstrmtExt"};
    multiset<string> InstrmtExt_2_set;
    InstrmtExt_2.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_2_set.insert("1");
    InstrmtExt_2.add_attribute("PctAtRisk", "10716553.350000"); // 1
    InstrmtExt_2_set.insert("10716553.350000");
    all_values.push_back(InstrmtExt_2_set);
    all_compo_names.insert("InstrmtExt_2_set");

    {
      xml_element Attrb_2{"Attrb"};
      multiset<string> Attrb_2_set;
      Attrb_2.add_attribute("Typ", "10"); // 2
      Attrb_2_set.insert("10");
      Attrb_2.add_attribute("Val", "InstrAttribValue_t_1226262190"); // 2
      Attrb_2_set.insert("InstrAttribValue_t_1226262190");
      all_values.push_back(Attrb_2_set);
      all_compo_names.insert("Attrb_2_set");

      InstrmtExt_2.add_element(Attrb_2);
    }
    elt.add_element(InstrmtExt_2);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_2{"FinDetls"};
    multiset<string> FinDetls_2_set;
    FinDetls_2.add_attribute("AgmtDesc", "AgreementDesc_t_1878639170"); // 1
    FinDetls_2_set.insert("AgreementDesc_t_1878639170");
    FinDetls_2.add_attribute("AgmtID", "AgreementID_t_1847052953"); // 1
    FinDetls_2_set.insert("AgreementID_t_1847052953");
    FinDetls_2.add_attribute("AgmtDt", "AgreementDate_t_1437022096"); // 1
    FinDetls_2_set.insert("AgreementDate_t_1437022096");
    FinDetls_2.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_2_set.insert("CAN");
    FinDetls_2.add_attribute("TrmTyp", "1"); // 1
    FinDetls_2_set.insert("1");
    FinDetls_2.add_attribute("StartDt", "StartDate_t_1132955676"); // 1
    FinDetls_2_set.insert("StartDate_t_1132955676");
    FinDetls_2.add_attribute("EndDt", "EndDate_t_59701205"); // 1
    FinDetls_2_set.insert("EndDate_t_59701205");
    FinDetls_2.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_2_set.insert("3");
    FinDetls_2.add_attribute("MgnRatio", "17789947.020000"); // 1
    FinDetls_2_set.insert("17789947.020000");
    all_values.push_back(FinDetls_2_set);
    all_compo_names.insert("FinDetls_2_set");

    elt.add_element(FinDetls_2);
  } // end FinDetls
  { // Undly
    xml_element Undly_4{"Undly"};
    multiset<string> Undly_4_set;
    Undly_4.add_attribute("Sym", "UnderlyingSymbol_t_1788608118"); // 1
    Undly_4_set.insert("UnderlyingSymbol_t_1788608118");
    Undly_4.add_attribute("Sfx", "WI"); // 1
    Undly_4_set.insert("WI");
    Undly_4.add_attribute("ID", "UnderlyingSecurityID_t_2094998887"); // 1
    Undly_4_set.insert("UnderlyingSecurityID_t_2094998887");
    Undly_4.add_attribute("Src", "I"); // 1
    Undly_4_set.insert("I");
    Undly_4.add_attribute("Prod", "8"); // 1
    Undly_4_set.insert("8");
    Undly_4.add_attribute("CFI", "UnderlyingCFICode_t_155370647"); // 1
    Undly_4_set.insert("UnderlyingCFICode_t_155370647");
    Undly_4.add_attribute("SecTyp", "MPT"); // 1
    Undly_4_set.insert("MPT");
    Undly_4.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1154864121"); // 1
    Undly_4_set.insert("UnderlyingSecuritySubType_t_1154864121");
    Undly_4.add_attribute("MMY", "217008472"); // 1
    Undly_4_set.insert("217008472");
    Undly_4.add_attribute("Mat", "UnderlyingMaturityDate_t_597216003"); // 1
    Undly_4_set.insert("UnderlyingMaturityDate_t_597216003");
    Undly_4.add_attribute("MatTm", "2103845839"); // 1
    Undly_4_set.insert("2103845839");
    Undly_4.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1646980609"); // 1
    Undly_4_set.insert("UnderlyingCouponPaymentDate_t_1646980609");
    Undly_4.add_attribute("RestrctTyp", "MR"); // 1
    Undly_4_set.insert("MR");
    Undly_4.add_attribute("Snrty", "SB"); // 1
    Undly_4_set.insert("SB");
    Undly_4.add_attribute("NotlPctOut", "20152261.050000"); // 1
    Undly_4_set.insert("20152261.050000");
    Undly_4.add_attribute("OrigNotlPctOut", "6616972.760000"); // 1
    Undly_4_set.insert("6616972.760000");
    Undly_4.add_attribute("AttchPnt", "12727118.780000"); // 1
    Undly_4_set.insert("12727118.780000");
    Undly_4.add_attribute("DetchPnt", "9393977.920000"); // 1
    Undly_4_set.insert("9393977.920000");
    Undly_4.add_attribute("Issued", "UnderlyingIssueDate_t_421333339"); // 1
    Undly_4_set.insert("UnderlyingIssueDate_t_421333339");
    Undly_4.add_attribute("RepoCollSecTyp", "351490420"); // 1
    Undly_4_set.insert("351490420");
    Undly_4.add_attribute("RepoTrm", "670553315"); // 1
    Undly_4_set.insert("670553315");
    Undly_4.add_attribute("RepoRt", "1209026.440000"); // 1
    Undly_4_set.insert("1209026.440000");
    Undly_4.add_attribute("Fctr", "17885125.160000"); // 1
    Undly_4_set.insert("17885125.160000");
    Undly_4.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1151096246"); // 1
    Undly_4_set.insert("UnderlyingCreditRating_t_1151096246");
    Undly_4.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1000877793"); // 1
    Undly_4_set.insert("UnderlyingInstrRegistry_t_1000877793");
    Undly_4.add_attribute("Ctry", "1349021536"); // 1
    Undly_4_set.insert("1349021536");
    Undly_4.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_136568274"); // 1
    Undly_4_set.insert("UnderlyingStateOrProvinceOfIssue_t_136568274");
    Undly_4.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1060578999"); // 1
    Undly_4_set.insert("UnderlyingLocaleOfIssue_t_1060578999");
    Undly_4.add_attribute("Redeem", "UnderlyingRedemptionDate_t_173564263"); // 1
    Undly_4_set.insert("UnderlyingRedemptionDate_t_173564263");
    Undly_4.add_attribute("StrkPx", "19155629.760000"); // 1
    Undly_4_set.insert("19155629.760000");
    Undly_4.add_attribute("StrkCcy", "GBP"); // 1
    Undly_4_set.insert("GBP");
    Undly_4.add_attribute("OptA", "1846300977"); // 1
    Undly_4_set.insert("1846300977");
    Undly_4.add_attribute("Mult", "16728287.370000"); // 1
    Undly_4_set.insert("16728287.370000");
    Undly_4.add_attribute("MultTyp", "1"); // 1
    Undly_4_set.insert("1");
    Undly_4.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_4_set.insert("4");
    Undly_4.add_attribute("UOM", "Bu"); // 1
    Undly_4_set.insert("Bu");
    Undly_4.add_attribute("UOMQty", "1285805.080000"); // 1
    Undly_4_set.insert("1285805.080000");
    Undly_4.add_attribute("PxUOM", "Bcf"); // 1
    Undly_4_set.insert("Bcf");
    Undly_4.add_attribute("PxUOMQty", "20452078.570000"); // 1
    Undly_4_set.insert("20452078.570000");
    Undly_4.add_attribute("TmUnit", "Yr"); // 1
    Undly_4_set.insert("Yr");
    Undly_4.add_attribute("ExerStyle", "1"); // 1
    Undly_4_set.insert("1");
    Undly_4.add_attribute("CpnRt", "15447048.180000"); // 1
    Undly_4_set.insert("15447048.180000");
    Undly_4.add_attribute("Exch", "UnderlyingSecurityExchange_t_517607117"); // 1
    Undly_4_set.insert("UnderlyingSecurityExchange_t_517607117");
    Undly_4.add_attribute("Issr", "UnderlyingIssuer_t_836721757"); // 1
    Undly_4_set.insert("UnderlyingIssuer_t_836721757");
    Undly_4.add_attribute("EncUndIssrLen", "1412447275"); // 1
    Undly_4_set.insert("1412447275");
    Undly_4.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1179304393"); // 1
    Undly_4_set.insert("EncodedUnderlyingIssuer_t_1179304393");
    Undly_4.add_attribute("Desc", "UnderlyingSecurityDesc_t_2109433635"); // 1
    Undly_4_set.insert("UnderlyingSecurityDesc_t_2109433635");
    Undly_4.add_attribute("EncUndSecDescLen", "204361420"); // 1
    Undly_4_set.insert("204361420");
    Undly_4.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1600637733"); // 1
    Undly_4_set.insert("EncodedUnderlyingSecurityDesc_t_1600637733");
    Undly_4.add_attribute("CPPgm", "UnderlyingCPProgram_t_313440407"); // 1
    Undly_4_set.insert("UnderlyingCPProgram_t_313440407");
    Undly_4.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_874914735"); // 1
    Undly_4_set.insert("UnderlyingCPRegType_t_874914735");
    Undly_4.add_attribute("AllocPct", "17215403.770000"); // 1
    Undly_4_set.insert("17215403.770000");
    Undly_4.add_attribute("Ccy", "CAN"); // 1
    Undly_4_set.insert("CAN");
    Undly_4.add_attribute("Qty", "5749345.230000"); // 1
    Undly_4_set.insert("5749345.230000");
    Undly_4.add_attribute("SettlTyp", "4"); // 1
    Undly_4_set.insert("4");
    Undly_4.add_attribute("CashAmt", "UnderlyingCashAmount_t_15095607"); // 1
    Undly_4_set.insert("UnderlyingCashAmount_t_15095607");
    Undly_4.add_attribute("CashTyp", "FIXED"); // 1
    Undly_4_set.insert("FIXED");
    Undly_4.add_attribute("Px", "14770550.760000"); // 1
    Undly_4_set.insert("14770550.760000");
    Undly_4.add_attribute("DirtPx", "19306585.830000"); // 1
    Undly_4_set.insert("19306585.830000");
    Undly_4.add_attribute("EndPx", "12133433.720000"); // 1
    Undly_4_set.insert("12133433.720000");
    Undly_4.add_attribute("StartVal", "UnderlyingStartValue_t_1291743810"); // 1
    Undly_4_set.insert("UnderlyingStartValue_t_1291743810");
    Undly_4.add_attribute("CurVal", "UnderlyingCurrentValue_t_1629475912"); // 1
    Undly_4_set.insert("UnderlyingCurrentValue_t_1629475912");
    Undly_4.add_attribute("EndVal", "UnderlyingEndValue_t_738688461"); // 1
    Undly_4_set.insert("UnderlyingEndValue_t_738688461");
    Undly_4.add_attribute("AdjQty", "2405337.230000"); // 1
    Undly_4_set.insert("2405337.230000");
    Undly_4.add_attribute("FxRate", "14094274.230000"); // 1
    Undly_4_set.insert("14094274.230000");
    Undly_4.add_attribute("FxRateCalc", "M"); // 1
    Undly_4_set.insert("M");
    Undly_4.add_attribute("CapValu", "UnderlyingCapValue_t_369114232"); // 1
    Undly_4_set.insert("UnderlyingCapValue_t_369114232");
    Undly_4.add_attribute("SetMeth", "UnderlyingSettlMethod_t_196759407"); // 1
    Undly_4_set.insert("UnderlyingSettlMethod_t_196759407");
    Undly_4.add_attribute("PutCall", "317128407"); // 1
    Undly_4_set.insert("317128407");
    all_values.push_back(Undly_4_set);
    all_compo_names.insert("Undly_4_set");

    {
      xml_element UndAID_4{"UndAID"};
      multiset<string> UndAID_4_set;
      UndAID_4.add_attribute("AltID", "UnderlyingSecurityAltID_t_1094910743"); // 2
      UndAID_4_set.insert("UnderlyingSecurityAltID_t_1094910743");
      UndAID_4.add_attribute("AltIDSrc", "8"); // 2
      UndAID_4_set.insert("8");
      all_values.push_back(UndAID_4_set);
      all_compo_names.insert("UndAID_4_set");

      Undly_4.add_element(UndAID_4);
    }
    {
      xml_element Stip_7{"Stip"};
      multiset<string> Stip_7_set;
      Stip_7.add_attribute("Typ", "MINDNOM"); // 2
      Stip_7_set.insert("MINDNOM");
      Stip_7.add_attribute("Val", "UnderlyingStipValue_t_1612517860"); // 2
      Stip_7_set.insert("UnderlyingStipValue_t_1612517860");
      all_values.push_back(Stip_7_set);
      all_compo_names.insert("Stip_7_set");

      Undly_4.add_element(Stip_7);
    }
    {
      xml_element Pty_43{"Pty"};
      multiset<string> Pty_43_set;
      Pty_43.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1924658988"); // 2
      Pty_43_set.insert("UnderlyingInstrumentPartyID_t_1924658988");
      Pty_43.add_attribute("Src", "4"); // 2
      Pty_43_set.insert("4");
      Pty_43.add_attribute("R", "40"); // 2
      Pty_43_set.insert("40");
      all_values.push_back(Pty_43_set);
      all_compo_names.insert("Pty_43_set");

      {
        xml_element Sub_43{"Sub"};
        multiset<string> Sub_43_set;
        Sub_43.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1886608976"); // 3
        Sub_43_set.insert("UnderlyingInstrumentPartySubID_t_1886608976");
        Sub_43.add_attribute("Typ", "24"); // 3
        Sub_43_set.insert("24");
        all_values.push_back(Sub_43_set);
        all_compo_names.insert("Sub_43_set");

        Pty_43.add_element(Sub_43);
      }
      Undly_4.add_element(Pty_43);
    }
    elt.add_element(Undly_4);
  } // end Undly
  { // Undly
    xml_element Undly_5{"Undly"};
    multiset<string> Undly_5_set;
    Undly_5.add_attribute("Sym", "UnderlyingSymbol_t_97492691"); // 1
    Undly_5_set.insert("UnderlyingSymbol_t_97492691");
    Undly_5.add_attribute("Sfx", "WI"); // 1
    Undly_5_set.insert("WI");
    Undly_5.add_attribute("ID", "UnderlyingSecurityID_t_58589360"); // 1
    Undly_5_set.insert("UnderlyingSecurityID_t_58589360");
    Undly_5.add_attribute("Src", "7"); // 1
    Undly_5_set.insert("7");
    Undly_5.add_attribute("Prod", "6"); // 1
    Undly_5_set.insert("6");
    Undly_5.add_attribute("CFI", "UnderlyingCFICode_t_2084600341"); // 1
    Undly_5_set.insert("UnderlyingCFICode_t_2084600341");
    Undly_5.add_attribute("SecTyp", "FXSPOT"); // 1
    Undly_5_set.insert("FXSPOT");
    Undly_5.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1310525824"); // 1
    Undly_5_set.insert("UnderlyingSecuritySubType_t_1310525824");
    Undly_5.add_attribute("MMY", "2099695948"); // 1
    Undly_5_set.insert("2099695948");
    Undly_5.add_attribute("Mat", "UnderlyingMaturityDate_t_1881997465"); // 1
    Undly_5_set.insert("UnderlyingMaturityDate_t_1881997465");
    Undly_5.add_attribute("MatTm", "640097252"); // 1
    Undly_5_set.insert("640097252");
    Undly_5.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1882870883"); // 1
    Undly_5_set.insert("UnderlyingCouponPaymentDate_t_1882870883");
    Undly_5.add_attribute("RestrctTyp", "MR"); // 1
    Undly_5_set.insert("MR");
    Undly_5.add_attribute("Snrty", "SB"); // 1
    Undly_5_set.insert("SB");
    Undly_5.add_attribute("NotlPctOut", "13648631.470000"); // 1
    Undly_5_set.insert("13648631.470000");
    Undly_5.add_attribute("OrigNotlPctOut", "16865456.510000"); // 1
    Undly_5_set.insert("16865456.510000");
    Undly_5.add_attribute("AttchPnt", "248911.370000"); // 1
    Undly_5_set.insert("248911.370000");
    Undly_5.add_attribute("DetchPnt", "6268069.230000"); // 1
    Undly_5_set.insert("6268069.230000");
    Undly_5.add_attribute("Issued", "UnderlyingIssueDate_t_2105949849"); // 1
    Undly_5_set.insert("UnderlyingIssueDate_t_2105949849");
    Undly_5.add_attribute("RepoCollSecTyp", "394005369"); // 1
    Undly_5_set.insert("394005369");
    Undly_5.add_attribute("RepoTrm", "823566330"); // 1
    Undly_5_set.insert("823566330");
    Undly_5.add_attribute("RepoRt", "2755946.080000"); // 1
    Undly_5_set.insert("2755946.080000");
    Undly_5.add_attribute("Fctr", "14889161.130000"); // 1
    Undly_5_set.insert("14889161.130000");
    Undly_5.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1911503561"); // 1
    Undly_5_set.insert("UnderlyingCreditRating_t_1911503561");
    Undly_5.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2137427833"); // 1
    Undly_5_set.insert("UnderlyingInstrRegistry_t_2137427833");
    Undly_5.add_attribute("Ctry", "953950325"); // 1
    Undly_5_set.insert("953950325");
    Undly_5.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1688678902"); // 1
    Undly_5_set.insert("UnderlyingStateOrProvinceOfIssue_t_1688678902");
    Undly_5.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1116741038"); // 1
    Undly_5_set.insert("UnderlyingLocaleOfIssue_t_1116741038");
    Undly_5.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1598288931"); // 1
    Undly_5_set.insert("UnderlyingRedemptionDate_t_1598288931");
    Undly_5.add_attribute("StrkPx", "14278042.300000"); // 1
    Undly_5_set.insert("14278042.300000");
    Undly_5.add_attribute("StrkCcy", "GBP"); // 1
    Undly_5_set.insert("GBP");
    Undly_5.add_attribute("OptA", "1480369965"); // 1
    Undly_5_set.insert("1480369965");
    Undly_5.add_attribute("Mult", "3590050.230000"); // 1
    Undly_5_set.insert("3590050.230000");
    Undly_5.add_attribute("MultTyp", "1"); // 1
    Undly_5_set.insert("1");
    Undly_5.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_5_set.insert("2");
    Undly_5.add_attribute("UOM", "lbs"); // 1
    Undly_5_set.insert("lbs");
    Undly_5.add_attribute("UOMQty", "16138149.860000"); // 1
    Undly_5_set.insert("16138149.860000");
    Undly_5.add_attribute("PxUOM", "tn"); // 1
    Undly_5_set.insert("tn");
    Undly_5.add_attribute("PxUOMQty", "2483340.160000"); // 1
    Undly_5_set.insert("2483340.160000");
    Undly_5.add_attribute("TmUnit", "Wk"); // 1
    Undly_5_set.insert("Wk");
    Undly_5.add_attribute("ExerStyle", "1"); // 1
    Undly_5_set.insert("1");
    Undly_5.add_attribute("CpnRt", "21312048.990000"); // 1
    Undly_5_set.insert("21312048.990000");
    Undly_5.add_attribute("Exch", "UnderlyingSecurityExchange_t_148702345"); // 1
    Undly_5_set.insert("UnderlyingSecurityExchange_t_148702345");
    Undly_5.add_attribute("Issr", "UnderlyingIssuer_t_1074901819"); // 1
    Undly_5_set.insert("UnderlyingIssuer_t_1074901819");
    Undly_5.add_attribute("EncUndIssrLen", "1348584399"); // 1
    Undly_5_set.insert("1348584399");
    Undly_5.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1835247996"); // 1
    Undly_5_set.insert("EncodedUnderlyingIssuer_t_1835247996");
    Undly_5.add_attribute("Desc", "UnderlyingSecurityDesc_t_1099792956"); // 1
    Undly_5_set.insert("UnderlyingSecurityDesc_t_1099792956");
    Undly_5.add_attribute("EncUndSecDescLen", "1975391322"); // 1
    Undly_5_set.insert("1975391322");
    Undly_5.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1793714197"); // 1
    Undly_5_set.insert("EncodedUnderlyingSecurityDesc_t_1793714197");
    Undly_5.add_attribute("CPPgm", "UnderlyingCPProgram_t_1493798326"); // 1
    Undly_5_set.insert("UnderlyingCPProgram_t_1493798326");
    Undly_5.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_651474004"); // 1
    Undly_5_set.insert("UnderlyingCPRegType_t_651474004");
    Undly_5.add_attribute("AllocPct", "20693088.050000"); // 1
    Undly_5_set.insert("20693088.050000");
    Undly_5.add_attribute("Ccy", "GBP"); // 1
    Undly_5_set.insert("GBP");
    Undly_5.add_attribute("Qty", "20592529.910000"); // 1
    Undly_5_set.insert("20592529.910000");
    Undly_5.add_attribute("SettlTyp", "4"); // 1
    Undly_5_set.insert("4");
    Undly_5.add_attribute("CashAmt", "UnderlyingCashAmount_t_2104172820"); // 1
    Undly_5_set.insert("UnderlyingCashAmount_t_2104172820");
    Undly_5.add_attribute("CashTyp", "DIFF"); // 1
    Undly_5_set.insert("DIFF");
    Undly_5.add_attribute("Px", "12399864.000000"); // 1
    Undly_5_set.insert("12399864.000000");
    Undly_5.add_attribute("DirtPx", "13844934.020000"); // 1
    Undly_5_set.insert("13844934.020000");
    Undly_5.add_attribute("EndPx", "13289260.450000"); // 1
    Undly_5_set.insert("13289260.450000");
    Undly_5.add_attribute("StartVal", "UnderlyingStartValue_t_788284374"); // 1
    Undly_5_set.insert("UnderlyingStartValue_t_788284374");
    Undly_5.add_attribute("CurVal", "UnderlyingCurrentValue_t_717379719"); // 1
    Undly_5_set.insert("UnderlyingCurrentValue_t_717379719");
    Undly_5.add_attribute("EndVal", "UnderlyingEndValue_t_1687931068"); // 1
    Undly_5_set.insert("UnderlyingEndValue_t_1687931068");
    Undly_5.add_attribute("AdjQty", "81317.690000"); // 1
    Undly_5_set.insert("81317.690000");
    Undly_5.add_attribute("FxRate", "573010.480000"); // 1
    Undly_5_set.insert("573010.480000");
    Undly_5.add_attribute("FxRateCalc", "D"); // 1
    Undly_5_set.insert("D");
    Undly_5.add_attribute("CapValu", "UnderlyingCapValue_t_1621946756"); // 1
    Undly_5_set.insert("UnderlyingCapValue_t_1621946756");
    Undly_5.add_attribute("SetMeth", "UnderlyingSettlMethod_t_707748201"); // 1
    Undly_5_set.insert("UnderlyingSettlMethod_t_707748201");
    Undly_5.add_attribute("PutCall", "84903153"); // 1
    Undly_5_set.insert("84903153");
    all_values.push_back(Undly_5_set);
    all_compo_names.insert("Undly_5_set");

    {
      xml_element UndAID_5{"UndAID"};
      multiset<string> UndAID_5_set;
      UndAID_5.add_attribute("AltID", "UnderlyingSecurityAltID_t_822791912"); // 2
      UndAID_5_set.insert("UnderlyingSecurityAltID_t_822791912");
      UndAID_5.add_attribute("AltIDSrc", "3"); // 2
      UndAID_5_set.insert("3");
      all_values.push_back(UndAID_5_set);
      all_compo_names.insert("UndAID_5_set");

      Undly_5.add_element(UndAID_5);
    }
    {
      xml_element Stip_8{"Stip"};
      multiset<string> Stip_8_set;
      Stip_8.add_attribute("Typ", "COUPON"); // 2
      Stip_8_set.insert("COUPON");
      Stip_8.add_attribute("Val", "UnderlyingStipValue_t_971494257"); // 2
      Stip_8_set.insert("UnderlyingStipValue_t_971494257");
      all_values.push_back(Stip_8_set);
      all_compo_names.insert("Stip_8_set");

      Undly_5.add_element(Stip_8);
    }
    {
      xml_element Pty_44{"Pty"};
      multiset<string> Pty_44_set;
      Pty_44.add_attribute("ID", "UnderlyingInstrumentPartyID_t_925710777"); // 2
      Pty_44_set.insert("UnderlyingInstrumentPartyID_t_925710777");
      Pty_44.add_attribute("Src", "9"); // 2
      Pty_44_set.insert("9");
      Pty_44.add_attribute("R", "64"); // 2
      Pty_44_set.insert("64");
      all_values.push_back(Pty_44_set);
      all_compo_names.insert("Pty_44_set");

      {
        xml_element Sub_44{"Sub"};
        multiset<string> Sub_44_set;
        Sub_44.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2025503734"); // 3
        Sub_44_set.insert("UnderlyingInstrumentPartySubID_t_2025503734");
        Sub_44.add_attribute("Typ", "20"); // 3
        Sub_44_set.insert("20");
        all_values.push_back(Sub_44_set);
        all_compo_names.insert("Sub_44_set");

        Pty_44.add_element(Sub_44);
      }
      Undly_5.add_element(Pty_44);
    }
    elt.add_element(Undly_5);
  } // end Undly
  { // Leg
    xml_element Leg_7{"Leg"};
    multiset<string> Leg_7_set;
    Leg_7.add_attribute("Sym", "LegSymbol_t_1371818412"); // 1
    Leg_7_set.insert("LegSymbol_t_1371818412");
    Leg_7.add_attribute("Sfx", "CD"); // 1
    Leg_7_set.insert("CD");
    Leg_7.add_attribute("ID", "LegSecurityID_t_227314313"); // 1
    Leg_7_set.insert("LegSecurityID_t_227314313");
    Leg_7.add_attribute("Src", "6"); // 1
    Leg_7_set.insert("6");
    Leg_7.add_attribute("Prod", "13"); // 1
    Leg_7_set.insert("13");
    Leg_7.add_attribute("CFI", "LegCFICode_t_139083656"); // 1
    Leg_7_set.insert("LegCFICode_t_139083656");
    Leg_7.add_attribute("SecTyp", "TECP"); // 1
    Leg_7_set.insert("TECP");
    Leg_7.add_attribute("SecSubTyp", "LegSecuritySubType_t_121289924"); // 1
    Leg_7_set.insert("LegSecuritySubType_t_121289924");
    Leg_7.add_attribute("MMY", "1167594037"); // 1
    Leg_7_set.insert("1167594037");
    Leg_7.add_attribute("Mat", "LegMaturityDate_t_941249423"); // 1
    Leg_7_set.insert("LegMaturityDate_t_941249423");
    Leg_7.add_attribute("MatTm", "1505783326"); // 1
    Leg_7_set.insert("1505783326");
    Leg_7.add_attribute("CpnPmt", "LegCouponPaymentDate_t_349036434"); // 1
    Leg_7_set.insert("LegCouponPaymentDate_t_349036434");
    Leg_7.add_attribute("Issued", "LegIssueDate_t_1729533798"); // 1
    Leg_7_set.insert("LegIssueDate_t_1729533798");
    Leg_7.add_attribute("RepoCollSecTyp", "75679398"); // 1
    Leg_7_set.insert("75679398");
    Leg_7.add_attribute("RepoTrm", "2036967503"); // 1
    Leg_7_set.insert("2036967503");
    Leg_7.add_attribute("RepoRt", "17376655.670000"); // 1
    Leg_7_set.insert("17376655.670000");
    Leg_7.add_attribute("Fctr", "1329804.460000"); // 1
    Leg_7_set.insert("1329804.460000");
    Leg_7.add_attribute("CrdRtg", "LegCreditRating_t_1873536640"); // 1
    Leg_7_set.insert("LegCreditRating_t_1873536640");
    Leg_7.add_attribute("Rgstry", "LegInstrRegistry_t_1212128675"); // 1
    Leg_7_set.insert("LegInstrRegistry_t_1212128675");
    Leg_7.add_attribute("Ctry", "840728648"); // 1
    Leg_7_set.insert("840728648");
    Leg_7.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1958439793"); // 1
    Leg_7_set.insert("LegStateOrProvinceOfIssue_t_1958439793");
    Leg_7.add_attribute("Lcl", "LegLocaleOfIssue_t_2034920587"); // 1
    Leg_7_set.insert("LegLocaleOfIssue_t_2034920587");
    Leg_7.add_attribute("Redeem", "LegRedemptionDate_t_691537606"); // 1
    Leg_7_set.insert("LegRedemptionDate_t_691537606");
    Leg_7.add_attribute("Strk", "20270641.980000"); // 1
    Leg_7_set.insert("20270641.980000");
    Leg_7.add_attribute("StrkCcy", "GBP"); // 1
    Leg_7_set.insert("GBP");
    Leg_7.add_attribute("OptA", "1296789354"); // 1
    Leg_7_set.insert("1296789354");
    Leg_7.add_attribute("Cmult", "15181898.030000"); // 1
    Leg_7_set.insert("15181898.030000");
    Leg_7.add_attribute("MultTyp", "1"); // 1
    Leg_7_set.insert("1");
    Leg_7.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_7_set.insert("4");
    Leg_7.add_attribute("UOM", "Bcf"); // 1
    Leg_7_set.insert("Bcf");
    Leg_7.add_attribute("UOMQty", "7196032.340000"); // 1
    Leg_7_set.insert("7196032.340000");
    Leg_7.add_attribute("PxUOM", "Bcf"); // 1
    Leg_7_set.insert("Bcf");
    Leg_7.add_attribute("PxUOMQty", "20509932.710000"); // 1
    Leg_7_set.insert("20509932.710000");
    Leg_7.add_attribute("TmUnit", "S"); // 1
    Leg_7_set.insert("S");
    Leg_7.add_attribute("ExerStyle", "2"); // 1
    Leg_7_set.insert("2");
    Leg_7.add_attribute("CpnRt", "425932.790000"); // 1
    Leg_7_set.insert("425932.790000");
    Leg_7.add_attribute("Exch", "LegSecurityExchange_t_480431812"); // 1
    Leg_7_set.insert("LegSecurityExchange_t_480431812");
    Leg_7.add_attribute("Issr", "LegIssuer_t_429419696"); // 1
    Leg_7_set.insert("LegIssuer_t_429419696");
    Leg_7.add_attribute("EncLegIssrLen", "1210187317"); // 1
    Leg_7_set.insert("1210187317");
    Leg_7.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1421681236"); // 1
    Leg_7_set.insert("EncodedLegIssuer_t_1421681236");
    Leg_7.add_attribute("Desc", "LegSecurityDesc_t_1935203022"); // 1
    Leg_7_set.insert("LegSecurityDesc_t_1935203022");
    Leg_7.add_attribute("EncLegSecDescLen", "1559223751"); // 1
    Leg_7_set.insert("1559223751");
    Leg_7.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1003731386"); // 1
    Leg_7_set.insert("EncodedLegSecurityDesc_t_1003731386");
    Leg_7.add_attribute("RatioQty", "20108824.200000"); // 1
    Leg_7_set.insert("20108824.200000");
    Leg_7.add_attribute("Side", "7"); // 1
    Leg_7_set.insert("7");
    Leg_7.add_attribute("Ccy", "CAN"); // 1
    Leg_7_set.insert("CAN");
    Leg_7.add_attribute("Pool", "LegPool_t_1174760598"); // 1
    Leg_7_set.insert("LegPool_t_1174760598");
    Leg_7.add_attribute("Dated", "LegDatedDate_t_1806041981"); // 1
    Leg_7_set.insert("LegDatedDate_t_1806041981");
    Leg_7.add_attribute("CSetMo", "837107867"); // 1
    Leg_7_set.insert("837107867");
    Leg_7.add_attribute("IntAcrl", "LegInterestAccrualDate_t_985716744"); // 1
    Leg_7_set.insert("LegInterestAccrualDate_t_985716744");
    Leg_7.add_attribute("PutCall", "1693478920"); // 1
    Leg_7_set.insert("1693478920");
    Leg_7.add_attribute("LegOptionRatio", "15286454.730000"); // 1
    Leg_7_set.insert("15286454.730000");
    Leg_7.add_attribute("Px", "8652972.940000"); // 1
    Leg_7_set.insert("8652972.940000");
    all_values.push_back(Leg_7_set);
    all_compo_names.insert("Leg_7_set");

    {
      xml_element LegAID_7{"LegAID"};
      multiset<string> LegAID_7_set;
      LegAID_7.add_attribute("SecAltID", "LegSecurityAltID_t_404926469"); // 2
      LegAID_7_set.insert("LegSecurityAltID_t_404926469");
      LegAID_7.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_7_set.insert("6");
      all_values.push_back(LegAID_7_set);
      all_compo_names.insert("LegAID_7_set");

      Leg_7.add_element(LegAID_7);
    }
    elt.add_element(Leg_7);
  } // end Leg
  { // Leg
    xml_element Leg_8{"Leg"};
    multiset<string> Leg_8_set;
    Leg_8.add_attribute("Sym", "LegSymbol_t_14603001"); // 1
    Leg_8_set.insert("LegSymbol_t_14603001");
    Leg_8.add_attribute("Sfx", "CD"); // 1
    Leg_8_set.insert("CD");
    Leg_8.add_attribute("ID", "LegSecurityID_t_346195031"); // 1
    Leg_8_set.insert("LegSecurityID_t_346195031");
    Leg_8.add_attribute("Src", "L"); // 1
    Leg_8_set.insert("L");
    Leg_8.add_attribute("Prod", "9"); // 1
    Leg_8_set.insert("9");
    Leg_8.add_attribute("CFI", "LegCFICode_t_1065798265"); // 1
    Leg_8_set.insert("LegCFICode_t_1065798265");
    Leg_8.add_attribute("SecTyp", "VRDN"); // 1
    Leg_8_set.insert("VRDN");
    Leg_8.add_attribute("SecSubTyp", "LegSecuritySubType_t_1502821206"); // 1
    Leg_8_set.insert("LegSecuritySubType_t_1502821206");
    Leg_8.add_attribute("MMY", "1844967054"); // 1
    Leg_8_set.insert("1844967054");
    Leg_8.add_attribute("Mat", "LegMaturityDate_t_860683976"); // 1
    Leg_8_set.insert("LegMaturityDate_t_860683976");
    Leg_8.add_attribute("MatTm", "1545414486"); // 1
    Leg_8_set.insert("1545414486");
    Leg_8.add_attribute("CpnPmt", "LegCouponPaymentDate_t_177915219"); // 1
    Leg_8_set.insert("LegCouponPaymentDate_t_177915219");
    Leg_8.add_attribute("Issued", "LegIssueDate_t_1290103672"); // 1
    Leg_8_set.insert("LegIssueDate_t_1290103672");
    Leg_8.add_attribute("RepoCollSecTyp", "608118155"); // 1
    Leg_8_set.insert("608118155");
    Leg_8.add_attribute("RepoTrm", "1599596455"); // 1
    Leg_8_set.insert("1599596455");
    Leg_8.add_attribute("RepoRt", "10778230.460000"); // 1
    Leg_8_set.insert("10778230.460000");
    Leg_8.add_attribute("Fctr", "198582.580000"); // 1
    Leg_8_set.insert("198582.580000");
    Leg_8.add_attribute("CrdRtg", "LegCreditRating_t_455844193"); // 1
    Leg_8_set.insert("LegCreditRating_t_455844193");
    Leg_8.add_attribute("Rgstry", "LegInstrRegistry_t_941221819"); // 1
    Leg_8_set.insert("LegInstrRegistry_t_941221819");
    Leg_8.add_attribute("Ctry", "1468565865"); // 1
    Leg_8_set.insert("1468565865");
    Leg_8.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1049757498"); // 1
    Leg_8_set.insert("LegStateOrProvinceOfIssue_t_1049757498");
    Leg_8.add_attribute("Lcl", "LegLocaleOfIssue_t_937601038"); // 1
    Leg_8_set.insert("LegLocaleOfIssue_t_937601038");
    Leg_8.add_attribute("Redeem", "LegRedemptionDate_t_495842815"); // 1
    Leg_8_set.insert("LegRedemptionDate_t_495842815");
    Leg_8.add_attribute("Strk", "7083158.310000"); // 1
    Leg_8_set.insert("7083158.310000");
    Leg_8.add_attribute("StrkCcy", "EUR"); // 1
    Leg_8_set.insert("EUR");
    Leg_8.add_attribute("OptA", "254311104"); // 1
    Leg_8_set.insert("254311104");
    Leg_8.add_attribute("Cmult", "11558707.300000"); // 1
    Leg_8_set.insert("11558707.300000");
    Leg_8.add_attribute("MultTyp", "1"); // 1
    Leg_8_set.insert("1");
    Leg_8.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_8_set.insert("3");
    Leg_8.add_attribute("UOM", "oz_tr"); // 1
    Leg_8_set.insert("oz_tr");
    Leg_8.add_attribute("UOMQty", "2139762.070000"); // 1
    Leg_8_set.insert("2139762.070000");
    Leg_8.add_attribute("PxUOM", "USD"); // 1
    Leg_8_set.insert("USD");
    Leg_8.add_attribute("PxUOMQty", "3529923.230000"); // 1
    Leg_8_set.insert("3529923.230000");
    Leg_8.add_attribute("TmUnit", "Yr"); // 1
    Leg_8_set.insert("Yr");
    Leg_8.add_attribute("ExerStyle", "2"); // 1
    Leg_8_set.insert("2");
    Leg_8.add_attribute("CpnRt", "14187905.890000"); // 1
    Leg_8_set.insert("14187905.890000");
    Leg_8.add_attribute("Exch", "LegSecurityExchange_t_1175555597"); // 1
    Leg_8_set.insert("LegSecurityExchange_t_1175555597");
    Leg_8.add_attribute("Issr", "LegIssuer_t_1389519339"); // 1
    Leg_8_set.insert("LegIssuer_t_1389519339");
    Leg_8.add_attribute("EncLegIssrLen", "1116273995"); // 1
    Leg_8_set.insert("1116273995");
    Leg_8.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2036239573"); // 1
    Leg_8_set.insert("EncodedLegIssuer_t_2036239573");
    Leg_8.add_attribute("Desc", "LegSecurityDesc_t_787450177"); // 1
    Leg_8_set.insert("LegSecurityDesc_t_787450177");
    Leg_8.add_attribute("EncLegSecDescLen", "1294189214"); // 1
    Leg_8_set.insert("1294189214");
    Leg_8.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1178859597"); // 1
    Leg_8_set.insert("EncodedLegSecurityDesc_t_1178859597");
    Leg_8.add_attribute("RatioQty", "13955683.320000"); // 1
    Leg_8_set.insert("13955683.320000");
    Leg_8.add_attribute("Side", "6"); // 1
    Leg_8_set.insert("6");
    Leg_8.add_attribute("Ccy", "CAN"); // 1
    Leg_8_set.insert("CAN");
    Leg_8.add_attribute("Pool", "LegPool_t_1202146214"); // 1
    Leg_8_set.insert("LegPool_t_1202146214");
    Leg_8.add_attribute("Dated", "LegDatedDate_t_1050420814"); // 1
    Leg_8_set.insert("LegDatedDate_t_1050420814");
    Leg_8.add_attribute("CSetMo", "736508808"); // 1
    Leg_8_set.insert("736508808");
    Leg_8.add_attribute("IntAcrl", "LegInterestAccrualDate_t_104420065"); // 1
    Leg_8_set.insert("LegInterestAccrualDate_t_104420065");
    Leg_8.add_attribute("PutCall", "1988021852"); // 1
    Leg_8_set.insert("1988021852");
    Leg_8.add_attribute("LegOptionRatio", "12323516.230000"); // 1
    Leg_8_set.insert("12323516.230000");
    Leg_8.add_attribute("Px", "8127358.960000"); // 1
    Leg_8_set.insert("8127358.960000");
    all_values.push_back(Leg_8_set);
    all_compo_names.insert("Leg_8_set");

    {
      xml_element LegAID_8{"LegAID"};
      multiset<string> LegAID_8_set;
      LegAID_8.add_attribute("SecAltID", "LegSecurityAltID_t_1615247109"); // 2
      LegAID_8_set.insert("LegSecurityAltID_t_1615247109");
      LegAID_8.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_8_set.insert("4");
      all_values.push_back(LegAID_8_set);
      all_compo_names.insert("LegAID_8_set");

      Leg_8.add_element(LegAID_8);
    }
    elt.add_element(Leg_8);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_2{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_2_set;
    SprdBnchmkCurve_2.add_attribute("Spread", "10670470.000000"); // 1
    SprdBnchmkCurve_2_set.insert("10670470.000000");
    SprdBnchmkCurve_2.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_2_set.insert("CAN");
    SprdBnchmkCurve_2.add_attribute("Name", "SWAP"); // 1
    SprdBnchmkCurve_2_set.insert("SWAP");
    SprdBnchmkCurve_2.add_attribute("Point", "BenchmarkCurvePoint_t_630431484"); // 1
    SprdBnchmkCurve_2_set.insert("BenchmarkCurvePoint_t_630431484");
    SprdBnchmkCurve_2.add_attribute("Px", "9797769.480000"); // 1
    SprdBnchmkCurve_2_set.insert("9797769.480000");
    SprdBnchmkCurve_2.add_attribute("PxTyp", "18"); // 1
    SprdBnchmkCurve_2_set.insert("18");
    SprdBnchmkCurve_2.add_attribute("SecID", "BenchmarkSecurityID_t_983423807"); // 1
    SprdBnchmkCurve_2_set.insert("BenchmarkSecurityID_t_983423807");
    SprdBnchmkCurve_2.add_attribute("SecIDSrc", "K"); // 1
    SprdBnchmkCurve_2_set.insert("K");
    all_values.push_back(SprdBnchmkCurve_2_set);
    all_compo_names.insert("SprdBnchmkCurve_2_set");

    elt.add_element(SprdBnchmkCurve_2);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_45{"Pty"};
    multiset<string> Pty_45_set;
    Pty_45.add_attribute("ID", "PartyID_t_254730748"); // 1
    Pty_45_set.insert("PartyID_t_254730748");
    Pty_45.add_attribute("Src", "6"); // 1
    Pty_45_set.insert("6");
    Pty_45.add_attribute("R", "55"); // 1
    Pty_45_set.insert("55");
    all_values.push_back(Pty_45_set);
    all_compo_names.insert("Pty_45_set");

    {
      xml_element Sub_45{"Sub"};
      multiset<string> Sub_45_set;
      Sub_45.add_attribute("ID", "PartySubID_t_1371004744"); // 2
      Sub_45_set.insert("PartySubID_t_1371004744");
      Sub_45.add_attribute("Typ", "29"); // 2
      Sub_45_set.insert("29");
      all_values.push_back(Sub_45_set);
      all_compo_names.insert("Sub_45_set");

      Pty_45.add_element(Sub_45);
    }
    elt.add_element(Pty_45);
  } // end Pty
  { // Stip
    xml_element Stip_9{"Stip"};
    multiset<string> Stip_9_set;
    Stip_9.add_attribute("Typ", "INTERNALPX"); // 1
    Stip_9_set.insert("INTERNALPX");
    Stip_9.add_attribute("Val", "StipulationValue_t_1698465811"); // 1
    Stip_9_set.insert("StipulationValue_t_1698465811");
    all_values.push_back(Stip_9_set);
    all_compo_names.insert("Stip_9_set");

    elt.add_element(Stip_9);
  } // end Stip
  { // Yield
    xml_element Yield_2{"Yield"};
    multiset<string> Yield_2_set;
    Yield_2.add_attribute("Typ", "TENDER"); // 1
    Yield_2_set.insert("TENDER");
    Yield_2.add_attribute("Yld", "12640123.320000"); // 1
    Yield_2_set.insert("12640123.320000");
    Yield_2.add_attribute("CalcDt", "YieldCalcDate_t_1807664807"); // 1
    Yield_2_set.insert("YieldCalcDate_t_1807664807");
    Yield_2.add_attribute("RedDt", "YieldRedemptionDate_t_593366401"); // 1
    Yield_2_set.insert("YieldRedemptionDate_t_593366401");
    Yield_2.add_attribute("RedPx", "3186748.980000"); // 1
    Yield_2_set.insert("3186748.980000");
    Yield_2.add_attribute("RedPxTyp", "6"); // 1
    Yield_2_set.insert("6");
    all_values.push_back(Yield_2_set);
    all_compo_names.insert("Yield_2_set");

    elt.add_element(Yield_2);
  } // end Yield
  { // Amt
    xml_element Amt_6{"Amt"};
    multiset<string> Amt_6_set;
    Amt_6.add_attribute("Typ", "CMTM"); // 1
    Amt_6_set.insert("CMTM");
    Amt_6.add_attribute("Amt", "PosAmt_t_551140178"); // 1
    Amt_6_set.insert("PosAmt_t_551140178");
    Amt_6.add_attribute("Ccy", "PositionCurrency_t_414743185"); // 1
    Amt_6_set.insert("PositionCurrency_t_414743185");
    all_values.push_back(Amt_6_set);
    all_compo_names.insert("Amt_6_set");

    elt.add_element(Amt_6);
  } // end Amt
  { // Amt
    xml_element Amt_7{"Amt"};
    multiset<string> Amt_7_set;
    Amt_7.add_attribute("Typ", "CASH"); // 1
    Amt_7_set.insert("CASH");
    Amt_7.add_attribute("Amt", "PosAmt_t_18903639"); // 1
    Amt_7_set.insert("PosAmt_t_18903639");
    Amt_7.add_attribute("Ccy", "PositionCurrency_t_981170720"); // 1
    Amt_7_set.insert("PositionCurrency_t_981170720");
    all_values.push_back(Amt_7_set);
    all_compo_names.insert("Amt_7_set");

    elt.add_element(Amt_7);
  } // end Amt
  { // Alloc
    xml_element Alloc_6{"Alloc"};
    multiset<string> Alloc_6_set;
    Alloc_6.add_attribute("Acct", "AllocAccount_t_642537831"); // 1
    Alloc_6_set.insert("AllocAccount_t_642537831");
    Alloc_6.add_attribute("ActIDSrc", "2"); // 1
    Alloc_6_set.insert("2");
    Alloc_6.add_attribute("MtchStat", "0"); // 1
    Alloc_6_set.insert("0");
    Alloc_6.add_attribute("Px", "12729693.150000"); // 1
    Alloc_6_set.insert("12729693.150000");
    Alloc_6.add_attribute("Qty", "5792647.610000"); // 1
    Alloc_6_set.insert("5792647.610000");
    Alloc_6.add_attribute("IndAllocID", "IndividualAllocID_t_1895349910"); // 1
    Alloc_6_set.insert("IndividualAllocID_t_1895349910");
    Alloc_6.add_attribute("ProcCode", "3"); // 1
    Alloc_6_set.insert("3");
    Alloc_6.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_34559453"); // 1
    Alloc_6_set.insert("SecondaryIndividualAllocID_t_34559453");
    Alloc_6.add_attribute("Meth", "3"); // 1
    Alloc_6_set.insert("3");
    Alloc_6.add_attribute("CustCpcty", "AllocCustomerCapacity_t_363640223"); // 1
    Alloc_6_set.insert("AllocCustomerCapacity_t_363640223");
    Alloc_6.add_attribute("AllocPosEfct", "F"); // 1
    Alloc_6_set.insert("F");
    Alloc_6.add_attribute("Typ", "1"); // 1
    Alloc_6_set.insert("1");
    Alloc_6.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_6_set.insert("Y");
    Alloc_6.add_attribute("HandlInst", "1"); // 1
    Alloc_6_set.insert("1");
    Alloc_6.add_attribute("Txt", "AllocText_t_867979242"); // 1
    Alloc_6_set.insert("AllocText_t_867979242");
    Alloc_6.add_attribute("EncAllocTextLen", "104871630"); // 1
    Alloc_6_set.insert("104871630");
    Alloc_6.add_attribute("EncAllocText", "EncodedAllocText_t_735998121"); // 1
    Alloc_6_set.insert("EncodedAllocText_t_735998121");
    Alloc_6.add_attribute("AvgPx", "459190.520000"); // 1
    Alloc_6_set.insert("459190.520000");
    Alloc_6.add_attribute("NetMny", "AllocNetMoney_t_1368883962"); // 1
    Alloc_6_set.insert("AllocNetMoney_t_1368883962");
    Alloc_6.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_396179280"); // 1
    Alloc_6_set.insert("SettlCurrAmt_t_396179280");
    Alloc_6.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_639285454"); // 1
    Alloc_6_set.insert("AllocSettlCurrAmt_t_639285454");
    Alloc_6.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_6_set.insert("EUR");
    Alloc_6.add_attribute("AllocSettlCcy", "GBP"); // 1
    Alloc_6_set.insert("GBP");
    Alloc_6.add_attribute("SettlCurrFxRt", "16579214.310000"); // 1
    Alloc_6_set.insert("16579214.310000");
    Alloc_6.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_6_set.insert("M");
    Alloc_6.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1199001036"); // 1
    Alloc_6_set.insert("AllocAccruedInterestAmt_t_1199001036");
    Alloc_6.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1676825071"); // 1
    Alloc_6_set.insert("AllocInterestAtMaturity_t_1676825071");
    Alloc_6.add_attribute("ClrFeeInd", "1"); // 1
    Alloc_6_set.insert("1");
    Alloc_6.add_attribute("SettlInstTyp", "3"); // 1
    Alloc_6_set.insert("3");
    all_values.push_back(Alloc_6_set);
    all_compo_names.insert("Alloc_6_set");

    {
      xml_element Pty_46{"Pty"};
      multiset<string> Pty_46_set;
      Pty_46.add_attribute("ID", "NestedPartyID_t_171879254"); // 2
      Pty_46_set.insert("NestedPartyID_t_171879254");
      Pty_46.add_attribute("Src", "I"); // 2
      Pty_46_set.insert("I");
      Pty_46.add_attribute("R", "4"); // 2
      Pty_46_set.insert("4");
      all_values.push_back(Pty_46_set);
      all_compo_names.insert("Pty_46_set");

      {
        xml_element Sub_46{"Sub"};
        multiset<string> Sub_46_set;
        Sub_46.add_attribute("ID", "NestedPartySubID_t_1444848570"); // 3
        Sub_46_set.insert("NestedPartySubID_t_1444848570");
        Sub_46.add_attribute("Typ", "16"); // 3
        Sub_46_set.insert("16");
        all_values.push_back(Sub_46_set);
        all_compo_names.insert("Sub_46_set");

        Pty_46.add_element(Sub_46);
      }
      Alloc_6.add_element(Pty_46);
    }
    {
      xml_element Comm_6{"Comm"};
      multiset<string> Comm_6_set;
      Comm_6.add_attribute("Comm", "Commission_t_836456649"); // 2
      Comm_6_set.insert("Commission_t_836456649");
      Comm_6.add_attribute("CommTyp", "2"); // 2
      Comm_6_set.insert("2");
      Comm_6.add_attribute("Ccy", "EUR"); // 2
      Comm_6_set.insert("EUR");
      Comm_6.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_6_set.insert("N");
      all_values.push_back(Comm_6_set);
      all_compo_names.insert("Comm_6_set");

      Alloc_6.add_element(Comm_6);
    }
    {
      xml_element MiscFees_6{"MiscFees"};
      multiset<string> MiscFees_6_set;
      MiscFees_6.add_attribute("Amt", "MiscFeeAmt_t_2096312691"); // 2
      MiscFees_6_set.insert("MiscFeeAmt_t_2096312691");
      MiscFees_6.add_attribute("Curr", "GBP"); // 2
      MiscFees_6_set.insert("GBP");
      MiscFees_6.add_attribute("Typ", "6"); // 2
      MiscFees_6_set.insert("6");
      MiscFees_6.add_attribute("Basis", "1"); // 2
      MiscFees_6_set.insert("1");
      all_values.push_back(MiscFees_6_set);
      all_compo_names.insert("MiscFees_6_set");

      Alloc_6.add_element(MiscFees_6);
    }
    {
      xml_element ClrInst_6{"ClrInst"};
      multiset<string> ClrInst_6_set;
      ClrInst_6.add_attribute("ClrngInstrctn", "6"); // 2
      ClrInst_6_set.insert("6");
      all_values.push_back(ClrInst_6_set);
      all_compo_names.insert("ClrInst_6_set");

      Alloc_6.add_element(ClrInst_6);
    }
    {
      xml_element SetInstr_6{"SetInstr"};
      multiset<string> SetInstr_6_set;
      SetInstr_6.add_attribute("DlvryTyp", "1"); // 2
      SetInstr_6_set.insert("1");
      SetInstr_6.add_attribute("StandInstDbTyp", "1"); // 2
      SetInstr_6_set.insert("1");
      SetInstr_6.add_attribute("StandInstDbName", "StandInstDbName_t_830831532"); // 2
      SetInstr_6_set.insert("StandInstDbName_t_830831532");
      SetInstr_6.add_attribute("StandInstDbID", "StandInstDbID_t_118538753"); // 2
      SetInstr_6_set.insert("StandInstDbID_t_118538753");
      all_values.push_back(SetInstr_6_set);
      all_compo_names.insert("SetInstr_6_set");

      {
        xml_element DlvInst_6{"DlvInst"};
        multiset<string> DlvInst_6_set;
        DlvInst_6.add_attribute("InstSrc", "2"); // 3
        DlvInst_6_set.insert("2");
        DlvInst_6.add_attribute("InstTyp", "C"); // 3
        DlvInst_6_set.insert("C");
        all_values.push_back(DlvInst_6_set);
        all_compo_names.insert("DlvInst_6_set");

        {
          xml_element Pty_47{"Pty"};
          multiset<string> Pty_47_set;
          Pty_47.add_attribute("ID", "SettlPartyID_t_1225320007"); // 4
          Pty_47_set.insert("SettlPartyID_t_1225320007");
          Pty_47.add_attribute("Src", "C"); // 4
          Pty_47_set.insert("C");
          Pty_47.add_attribute("R", "25"); // 4
          Pty_47_set.insert("25");
          all_values.push_back(Pty_47_set);
          all_compo_names.insert("Pty_47_set");

          {
            xml_element Sub_47{"Sub"};
            multiset<string> Sub_47_set;
            Sub_47.add_attribute("ID", "SettlPartySubID_t_735757790"); // 5
            Sub_47_set.insert("SettlPartySubID_t_735757790");
            Sub_47.add_attribute("Typ", "28"); // 5
            Sub_47_set.insert("28");
            all_values.push_back(Sub_47_set);
            all_compo_names.insert("Sub_47_set");

            Pty_47.add_element(Sub_47);
          }
          DlvInst_6.add_element(Pty_47);
        }
        SetInstr_6.add_element(DlvInst_6);
      }
      Alloc_6.add_element(SetInstr_6);
    }
    elt.add_element(Alloc_6);
  } // end Alloc
  { // Alloc
    xml_element Alloc_7{"Alloc"};
    multiset<string> Alloc_7_set;
    Alloc_7.add_attribute("Acct", "AllocAccount_t_1533077956"); // 1
    Alloc_7_set.insert("AllocAccount_t_1533077956");
    Alloc_7.add_attribute("ActIDSrc", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("MtchStat", "1"); // 1
    Alloc_7_set.insert("1");
    Alloc_7.add_attribute("Px", "7399895.570000"); // 1
    Alloc_7_set.insert("7399895.570000");
    Alloc_7.add_attribute("Qty", "4369784.680000"); // 1
    Alloc_7_set.insert("4369784.680000");
    Alloc_7.add_attribute("IndAllocID", "IndividualAllocID_t_773799607"); // 1
    Alloc_7_set.insert("IndividualAllocID_t_773799607");
    Alloc_7.add_attribute("ProcCode", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1881827038"); // 1
    Alloc_7_set.insert("SecondaryIndividualAllocID_t_1881827038");
    Alloc_7.add_attribute("Meth", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("CustCpcty", "AllocCustomerCapacity_t_517552945"); // 1
    Alloc_7_set.insert("AllocCustomerCapacity_t_517552945");
    Alloc_7.add_attribute("AllocPosEfct", "F"); // 1
    Alloc_7_set.insert("F");
    Alloc_7.add_attribute("Typ", "1"); // 1
    Alloc_7_set.insert("1");
    Alloc_7.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_7_set.insert("N");
    Alloc_7.add_attribute("HandlInst", "2"); // 1
    Alloc_7_set.insert("2");
    Alloc_7.add_attribute("Txt", "AllocText_t_1402391445"); // 1
    Alloc_7_set.insert("AllocText_t_1402391445");
    Alloc_7.add_attribute("EncAllocTextLen", "277577751"); // 1
    Alloc_7_set.insert("277577751");
    Alloc_7.add_attribute("EncAllocText", "EncodedAllocText_t_415091995"); // 1
    Alloc_7_set.insert("EncodedAllocText_t_415091995");
    Alloc_7.add_attribute("AvgPx", "3887527.970000"); // 1
    Alloc_7_set.insert("3887527.970000");
    Alloc_7.add_attribute("NetMny", "AllocNetMoney_t_420889630"); // 1
    Alloc_7_set.insert("AllocNetMoney_t_420889630");
    Alloc_7.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_2024523213"); // 1
    Alloc_7_set.insert("SettlCurrAmt_t_2024523213");
    Alloc_7.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_111112271"); // 1
    Alloc_7_set.insert("AllocSettlCurrAmt_t_111112271");
    Alloc_7.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_7_set.insert("EUR");
    Alloc_7.add_attribute("AllocSettlCcy", "CHF"); // 1
    Alloc_7_set.insert("CHF");
    Alloc_7.add_attribute("SettlCurrFxRt", "10787778.420000"); // 1
    Alloc_7_set.insert("10787778.420000");
    Alloc_7.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_7_set.insert("D");
    Alloc_7.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_2088830348"); // 1
    Alloc_7_set.insert("AllocAccruedInterestAmt_t_2088830348");
    Alloc_7.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1412854762"); // 1
    Alloc_7_set.insert("AllocInterestAtMaturity_t_1412854762");
    Alloc_7.add_attribute("ClrFeeInd", "1"); // 1
    Alloc_7_set.insert("1");
    Alloc_7.add_attribute("SettlInstTyp", "2"); // 1
    Alloc_7_set.insert("2");
    all_values.push_back(Alloc_7_set);
    all_compo_names.insert("Alloc_7_set");

    {
      xml_element Pty_48{"Pty"};
      multiset<string> Pty_48_set;
      Pty_48.add_attribute("ID", "NestedPartyID_t_798449071"); // 2
      Pty_48_set.insert("NestedPartyID_t_798449071");
      Pty_48.add_attribute("Src", "E"); // 2
      Pty_48_set.insert("E");
      Pty_48.add_attribute("R", "51"); // 2
      Pty_48_set.insert("51");
      all_values.push_back(Pty_48_set);
      all_compo_names.insert("Pty_48_set");

      {
        xml_element Sub_48{"Sub"};
        multiset<string> Sub_48_set;
        Sub_48.add_attribute("ID", "NestedPartySubID_t_1538438628"); // 3
        Sub_48_set.insert("NestedPartySubID_t_1538438628");
        Sub_48.add_attribute("Typ", "11"); // 3
        Sub_48_set.insert("11");
        all_values.push_back(Sub_48_set);
        all_compo_names.insert("Sub_48_set");

        Pty_48.add_element(Sub_48);
      }
      Alloc_7.add_element(Pty_48);
    }
    {
      xml_element Comm_7{"Comm"};
      multiset<string> Comm_7_set;
      Comm_7.add_attribute("Comm", "Commission_t_1558480783"); // 2
      Comm_7_set.insert("Commission_t_1558480783");
      Comm_7.add_attribute("CommTyp", "5"); // 2
      Comm_7_set.insert("5");
      Comm_7.add_attribute("Ccy", "CAN"); // 2
      Comm_7_set.insert("CAN");
      Comm_7.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_7_set.insert("Y");
      all_values.push_back(Comm_7_set);
      all_compo_names.insert("Comm_7_set");

      Alloc_7.add_element(Comm_7);
    }
    {
      xml_element MiscFees_7{"MiscFees"};
      multiset<string> MiscFees_7_set;
      MiscFees_7.add_attribute("Amt", "MiscFeeAmt_t_1767767680"); // 2
      MiscFees_7_set.insert("MiscFeeAmt_t_1767767680");
      MiscFees_7.add_attribute("Curr", "USD"); // 2
      MiscFees_7_set.insert("USD");
      MiscFees_7.add_attribute("Typ", "2"); // 2
      MiscFees_7_set.insert("2");
      MiscFees_7.add_attribute("Basis", "0"); // 2
      MiscFees_7_set.insert("0");
      all_values.push_back(MiscFees_7_set);
      all_compo_names.insert("MiscFees_7_set");

      Alloc_7.add_element(MiscFees_7);
    }
    {
      xml_element ClrInst_7{"ClrInst"};
      multiset<string> ClrInst_7_set;
      ClrInst_7.add_attribute("ClrngInstrctn", "7"); // 2
      ClrInst_7_set.insert("7");
      all_values.push_back(ClrInst_7_set);
      all_compo_names.insert("ClrInst_7_set");

      Alloc_7.add_element(ClrInst_7);
    }
    {
      xml_element SetInstr_7{"SetInstr"};
      multiset<string> SetInstr_7_set;
      SetInstr_7.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_7_set.insert("3");
      SetInstr_7.add_attribute("StandInstDbTyp", "1"); // 2
      SetInstr_7_set.insert("1");
      SetInstr_7.add_attribute("StandInstDbName", "StandInstDbName_t_1290316718"); // 2
      SetInstr_7_set.insert("StandInstDbName_t_1290316718");
      SetInstr_7.add_attribute("StandInstDbID", "StandInstDbID_t_970431649"); // 2
      SetInstr_7_set.insert("StandInstDbID_t_970431649");
      all_values.push_back(SetInstr_7_set);
      all_compo_names.insert("SetInstr_7_set");

      {
        xml_element DlvInst_7{"DlvInst"};
        multiset<string> DlvInst_7_set;
        DlvInst_7.add_attribute("InstSrc", "3"); // 3
        DlvInst_7_set.insert("3");
        DlvInst_7.add_attribute("InstTyp", "C"); // 3
        DlvInst_7_set.insert("C");
        all_values.push_back(DlvInst_7_set);
        all_compo_names.insert("DlvInst_7_set");

        {
          xml_element Pty_49{"Pty"};
          multiset<string> Pty_49_set;
          Pty_49.add_attribute("ID", "SettlPartyID_t_1678302746"); // 4
          Pty_49_set.insert("SettlPartyID_t_1678302746");
          Pty_49.add_attribute("Src", "A"); // 4
          Pty_49_set.insert("A");
          Pty_49.add_attribute("R", "2"); // 4
          Pty_49_set.insert("2");
          all_values.push_back(Pty_49_set);
          all_compo_names.insert("Pty_49_set");

          {
            xml_element Sub_49{"Sub"};
            multiset<string> Sub_49_set;
            Sub_49.add_attribute("ID", "SettlPartySubID_t_609596940"); // 5
            Sub_49_set.insert("SettlPartySubID_t_609596940");
            Sub_49.add_attribute("Typ", "29"); // 5
            Sub_49_set.insert("29");
            all_values.push_back(Sub_49_set);
            all_compo_names.insert("Sub_49_set");

            Pty_49.add_element(Sub_49);
          }
          DlvInst_7.add_element(Pty_49);
        }
        SetInstr_7.add_element(DlvInst_7);
      }
      Alloc_7.add_element(SetInstr_7);
    }
    elt.add_element(Alloc_7);
  } // end Alloc
  { // Alloc
    xml_element Alloc_8{"Alloc"};
    multiset<string> Alloc_8_set;
    Alloc_8.add_attribute("Acct", "AllocAccount_t_1132937280"); // 1
    Alloc_8_set.insert("AllocAccount_t_1132937280");
    Alloc_8.add_attribute("ActIDSrc", "99"); // 1
    Alloc_8_set.insert("99");
    Alloc_8.add_attribute("MtchStat", "1"); // 1
    Alloc_8_set.insert("1");
    Alloc_8.add_attribute("Px", "19608975.820000"); // 1
    Alloc_8_set.insert("19608975.820000");
    Alloc_8.add_attribute("Qty", "6734171.260000"); // 1
    Alloc_8_set.insert("6734171.260000");
    Alloc_8.add_attribute("IndAllocID", "IndividualAllocID_t_530719826"); // 1
    Alloc_8_set.insert("IndividualAllocID_t_530719826");
    Alloc_8.add_attribute("ProcCode", "4"); // 1
    Alloc_8_set.insert("4");
    Alloc_8.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_64372106"); // 1
    Alloc_8_set.insert("SecondaryIndividualAllocID_t_64372106");
    Alloc_8.add_attribute("Meth", "3"); // 1
    Alloc_8_set.insert("3");
    Alloc_8.add_attribute("CustCpcty", "AllocCustomerCapacity_t_9092245"); // 1
    Alloc_8_set.insert("AllocCustomerCapacity_t_9092245");
    Alloc_8.add_attribute("AllocPosEfct", "R"); // 1
    Alloc_8_set.insert("R");
    Alloc_8.add_attribute("Typ", "2"); // 1
    Alloc_8_set.insert("2");
    Alloc_8.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_8_set.insert("Y");
    Alloc_8.add_attribute("HandlInst", "1"); // 1
    Alloc_8_set.insert("1");
    Alloc_8.add_attribute("Txt", "AllocText_t_1375992960"); // 1
    Alloc_8_set.insert("AllocText_t_1375992960");
    Alloc_8.add_attribute("EncAllocTextLen", "329967826"); // 1
    Alloc_8_set.insert("329967826");
    Alloc_8.add_attribute("EncAllocText", "EncodedAllocText_t_1465360587"); // 1
    Alloc_8_set.insert("EncodedAllocText_t_1465360587");
    Alloc_8.add_attribute("AvgPx", "20542930.480000"); // 1
    Alloc_8_set.insert("20542930.480000");
    Alloc_8.add_attribute("NetMny", "AllocNetMoney_t_472094615"); // 1
    Alloc_8_set.insert("AllocNetMoney_t_472094615");
    Alloc_8.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_187304027"); // 1
    Alloc_8_set.insert("SettlCurrAmt_t_187304027");
    Alloc_8.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1000201483"); // 1
    Alloc_8_set.insert("AllocSettlCurrAmt_t_1000201483");
    Alloc_8.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_8_set.insert("EUR");
    Alloc_8.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_8_set.insert("JPY");
    Alloc_8.add_attribute("SettlCurrFxRt", "12305743.770000"); // 1
    Alloc_8_set.insert("12305743.770000");
    Alloc_8.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_8_set.insert("D");
    Alloc_8.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_369125291"); // 1
    Alloc_8_set.insert("AllocAccruedInterestAmt_t_369125291");
    Alloc_8.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_274681308"); // 1
    Alloc_8_set.insert("AllocInterestAtMaturity_t_274681308");
    Alloc_8.add_attribute("ClrFeeInd", "C"); // 1
    Alloc_8_set.insert("C");
    Alloc_8.add_attribute("SettlInstTyp", "1"); // 1
    Alloc_8_set.insert("1");
    all_values.push_back(Alloc_8_set);
    all_compo_names.insert("Alloc_8_set");

    {
      xml_element Pty_50{"Pty"};
      multiset<string> Pty_50_set;
      Pty_50.add_attribute("ID", "NestedPartyID_t_1407618588"); // 2
      Pty_50_set.insert("NestedPartyID_t_1407618588");
      Pty_50.add_attribute("Src", "7"); // 2
      Pty_50_set.insert("7");
      Pty_50.add_attribute("R", "46"); // 2
      Pty_50_set.insert("46");
      all_values.push_back(Pty_50_set);
      all_compo_names.insert("Pty_50_set");

      {
        xml_element Sub_50{"Sub"};
        multiset<string> Sub_50_set;
        Sub_50.add_attribute("ID", "NestedPartySubID_t_1221032522"); // 3
        Sub_50_set.insert("NestedPartySubID_t_1221032522");
        Sub_50.add_attribute("Typ", "7"); // 3
        Sub_50_set.insert("7");
        all_values.push_back(Sub_50_set);
        all_compo_names.insert("Sub_50_set");

        Pty_50.add_element(Sub_50);
      }
      Alloc_8.add_element(Pty_50);
    }
    {
      xml_element Comm_8{"Comm"};
      multiset<string> Comm_8_set;
      Comm_8.add_attribute("Comm", "Commission_t_1301350822"); // 2
      Comm_8_set.insert("Commission_t_1301350822");
      Comm_8.add_attribute("CommTyp", "5"); // 2
      Comm_8_set.insert("5");
      Comm_8.add_attribute("Ccy", "JPY"); // 2
      Comm_8_set.insert("JPY");
      Comm_8.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_8_set.insert("N");
      all_values.push_back(Comm_8_set);
      all_compo_names.insert("Comm_8_set");

      Alloc_8.add_element(Comm_8);
    }
    {
      xml_element MiscFees_8{"MiscFees"};
      multiset<string> MiscFees_8_set;
      MiscFees_8.add_attribute("Amt", "MiscFeeAmt_t_1860229840"); // 2
      MiscFees_8_set.insert("MiscFeeAmt_t_1860229840");
      MiscFees_8.add_attribute("Curr", "CAN"); // 2
      MiscFees_8_set.insert("CAN");
      MiscFees_8.add_attribute("Typ", "8"); // 2
      MiscFees_8_set.insert("8");
      MiscFees_8.add_attribute("Basis", "2"); // 2
      MiscFees_8_set.insert("2");
      all_values.push_back(MiscFees_8_set);
      all_compo_names.insert("MiscFees_8_set");

      Alloc_8.add_element(MiscFees_8);
    }
    {
      xml_element ClrInst_8{"ClrInst"};
      multiset<string> ClrInst_8_set;
      ClrInst_8.add_attribute("ClrngInstrctn", "9"); // 2
      ClrInst_8_set.insert("9");
      all_values.push_back(ClrInst_8_set);
      all_compo_names.insert("ClrInst_8_set");

      Alloc_8.add_element(ClrInst_8);
    }
    {
      xml_element SetInstr_8{"SetInstr"};
      multiset<string> SetInstr_8_set;
      SetInstr_8.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_8_set.insert("3");
      SetInstr_8.add_attribute("StandInstDbTyp", "0"); // 2
      SetInstr_8_set.insert("0");
      SetInstr_8.add_attribute("StandInstDbName", "StandInstDbName_t_2073031154"); // 2
      SetInstr_8_set.insert("StandInstDbName_t_2073031154");
      SetInstr_8.add_attribute("StandInstDbID", "StandInstDbID_t_91438410"); // 2
      SetInstr_8_set.insert("StandInstDbID_t_91438410");
      all_values.push_back(SetInstr_8_set);
      all_compo_names.insert("SetInstr_8_set");

      {
        xml_element DlvInst_8{"DlvInst"};
        multiset<string> DlvInst_8_set;
        DlvInst_8.add_attribute("InstSrc", "2"); // 3
        DlvInst_8_set.insert("2");
        DlvInst_8.add_attribute("InstTyp", "S"); // 3
        DlvInst_8_set.insert("S");
        all_values.push_back(DlvInst_8_set);
        all_compo_names.insert("DlvInst_8_set");

        {
          xml_element Pty_51{"Pty"};
          multiset<string> Pty_51_set;
          Pty_51.add_attribute("ID", "SettlPartyID_t_1569059155"); // 4
          Pty_51_set.insert("SettlPartyID_t_1569059155");
          Pty_51.add_attribute("Src", "G"); // 4
          Pty_51_set.insert("G");
          Pty_51.add_attribute("R", "52"); // 4
          Pty_51_set.insert("52");
          all_values.push_back(Pty_51_set);
          all_compo_names.insert("Pty_51_set");

          {
            xml_element Sub_51{"Sub"};
            multiset<string> Sub_51_set;
            Sub_51.add_attribute("ID", "SettlPartySubID_t_652149884"); // 5
            Sub_51_set.insert("SettlPartySubID_t_652149884");
            Sub_51.add_attribute("Typ", "6"); // 5
            Sub_51_set.insert("6");
            all_values.push_back(Sub_51_set);
            all_compo_names.insert("Sub_51_set");

            Pty_51.add_element(Sub_51);
          }
          DlvInst_8.add_element(Pty_51);
        }
        SetInstr_8.add_element(DlvInst_8);
      }
      Alloc_8.add_element(SetInstr_8);
    }
    elt.add_element(Alloc_8);
  } // end Alloc
  { // RtSrc
    xml_element RtSrc_3{"RtSrc"};
    multiset<string> RtSrc_3_set;
    RtSrc_3.add_attribute("RtSrc", "1"); // 1
    RtSrc_3_set.insert("1");
    RtSrc_3.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_3_set.insert("0");
    RtSrc_3.add_attribute("RefPg", "ReferencePage_t_1343384965"); // 1
    RtSrc_3_set.insert("ReferencePage_t_1343384965");
    all_values.push_back(RtSrc_3_set);
    all_compo_names.insert("RtSrc_3_set");

    elt.add_element(RtSrc_3);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_4{"RtSrc"};
    multiset<string> RtSrc_4_set;
    RtSrc_4.add_attribute("RtSrc", "1"); // 1
    RtSrc_4_set.insert("1");
    RtSrc_4.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_4_set.insert("0");
    RtSrc_4.add_attribute("RefPg", "ReferencePage_t_2114015961"); // 1
    RtSrc_4_set.insert("ReferencePage_t_2114015961");
    all_values.push_back(RtSrc_4_set);
    all_compo_names.insert("RtSrc_4_set");

    elt.add_element(RtSrc_4);
  } // end RtSrc
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
