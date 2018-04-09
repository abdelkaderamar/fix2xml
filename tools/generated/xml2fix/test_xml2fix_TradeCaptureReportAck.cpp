#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_851005731"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeReportID_t_851005731");
  elt.add_attribute("TrdID", "TradeID_t_2108089489"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeID_t_2108089489");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1285447441"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeID_t_1285447441");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1035718431"); // 0
  TradeCaptureReportAck_message_t_0.insert("FirmTradeID_t_1035718431");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_162906942"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryFirmTradeID_t_162906942");
  elt.add_attribute("TransTyp", "3"); // 0
  TradeCaptureReportAck_message_t_0.insert("3");
  elt.add_attribute("RptTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("TrdTyp", "39"); // 0
  TradeCaptureReportAck_message_t_0.insert("39");
  elt.add_attribute("TrdSubTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("TrdTyp2", "17"); // 0
  TradeCaptureReportAck_message_t_0.insert("17");
  elt.add_attribute("TrdHandlInst", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("OrigTrdHandlInst", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_967339483"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigTradeDate_t_967339483");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_148962508"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigTradeID_t_148962508");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_1385349582"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigSecondaryTradeID_t_1385349582");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_603100352"); // 0
  TradeCaptureReportAck_message_t_0.insert("TransferReason_t_603100352");
  elt.add_attribute("ExecTyp", "K"); // 0
  TradeCaptureReportAck_message_t_0.insert("K");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_1388534586"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeReportRefID_t_1388534586");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_2129374682"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeReportRefID_t_2129374682");
  elt.add_attribute("TrdRptStat", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RejRsn", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_526949639"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeReportID_t_526949639");
  elt.add_attribute("SubReqTyp", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("LinkID", "TradeLinkID_t_449187262"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeLinkID_t_449187262");
  elt.add_attribute("MtchID", "TrdMatchID_t_712529841"); // 0
  TradeCaptureReportAck_message_t_0.insert("TrdMatchID_t_712529841");
  elt.add_attribute("ExecID", "ExecID_t_1718271507"); // 0
  TradeCaptureReportAck_message_t_0.insert("ExecID_t_1718271507");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_1061737871"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryExecID_t_1061737871");
  elt.add_attribute("ExecRstmtRsn", "7"); // 0
  TradeCaptureReportAck_message_t_0.insert("7");
  elt.add_attribute("PrevlyRpted", "Y"); // 0
  TradeCaptureReportAck_message_t_0.insert("Y");
  elt.add_attribute("PxTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_1423076831"); // 0
  TradeCaptureReportAck_message_t_0.insert("UnderlyingTradingSessionID_t_1423076831");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_1191873796"); // 0
  TradeCaptureReportAck_message_t_0.insert("UnderlyingTradingSessionSubID_t_1191873796");
  elt.add_attribute("SetSesID", "RTH"); // 0
  TradeCaptureReportAck_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_561040625"); // 0
  TradeCaptureReportAck_message_t_0.insert("SettlSessSubID_t_561040625");
  elt.add_attribute("QtyTyp", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("LastQty", "19416287.390000"); // 0
  TradeCaptureReportAck_message_t_0.insert("19416287.390000");
  elt.add_attribute("LastPx", "20425196.480000"); // 0
  TradeCaptureReportAck_message_t_0.insert("20425196.480000");
  elt.add_attribute("VenuTyp", "P"); // 0
  TradeCaptureReportAck_message_t_0.insert("P");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_339772904"); // 0
  TradeCaptureReportAck_message_t_0.insert("MarketSegmentID_t_339772904");
  elt.add_attribute("MktID", "MarketID_t_1113604839"); // 0
  TradeCaptureReportAck_message_t_0.insert("MarketID_t_1113604839");
  elt.add_attribute("LastParPx", "6473185.070000"); // 0
  TradeCaptureReportAck_message_t_0.insert("6473185.070000");
  elt.add_attribute("CalcCcyLastQty", "19306888.830000"); // 0
  TradeCaptureReportAck_message_t_0.insert("19306888.830000");
  elt.add_attribute("LastSwapPnts", "20203497.570000"); // 0
  TradeCaptureReportAck_message_t_0.insert("20203497.570000");
  elt.add_attribute("Ccy", "EUR"); // 0
  TradeCaptureReportAck_message_t_0.insert("EUR");
  elt.add_attribute("SettlCcy", "USD"); // 0
  TradeCaptureReportAck_message_t_0.insert("USD");
  elt.add_attribute("LastSpotRt", "4649256.420000"); // 0
  TradeCaptureReportAck_message_t_0.insert("4649256.420000");
  elt.add_attribute("LastFwdPnts", "4992666.290000"); // 0
  TradeCaptureReportAck_message_t_0.insert("4992666.290000");
  elt.add_attribute("LastMkt", "LastMkt_t_52165729"); // 0
  TradeCaptureReportAck_message_t_0.insert("LastMkt_t_52165729");
  elt.add_attribute("TrdDt", "TradeDate_t_1272392622"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeDate_t_1272392622");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1528740384"); // 0
  TradeCaptureReportAck_message_t_0.insert("ClearingBusinessDate_t_1528740384");
  elt.add_attribute("AvgPx", "5791153.680000"); // 0
  TradeCaptureReportAck_message_t_0.insert("5791153.680000");
  elt.add_attribute("AvgPxInd", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_1291645209"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeLegRefID_t_1291645209");
  elt.add_attribute("TxnTm", "TransactTime_t_447884929"); // 0
  TradeCaptureReportAck_message_t_0.insert("TransactTime_t_447884929");
  elt.add_attribute("SettlTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("MtchStat", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("MtchTyp", "S5"); // 0
  TradeCaptureReportAck_message_t_0.insert("S5");
  elt.add_attribute("CopyMsgInd", "true"); // 0
  TradeCaptureReportAck_message_t_0.insert("true");
  elt.add_attribute("PubTrdInd", "N"); // 0
  TradeCaptureReportAck_message_t_0.insert("N");
  elt.add_attribute("TrdPubInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("ShrtSaleRsn", "3"); // 0
  TradeCaptureReportAck_message_t_0.insert("3");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_2060735371"); // 0
  TradeCaptureReportAck_message_t_0.insert("ResponseDestination_t_2060735371");
  elt.add_attribute("Txt", "Text_t_2135681067"); // 0
  TradeCaptureReportAck_message_t_0.insert("Text_t_2135681067");
  elt.add_attribute("EncTxtLen", "1017988889"); // 0
  TradeCaptureReportAck_message_t_0.insert("1017988889");
  elt.add_attribute("EncTxt", "EncodedText_t_1092436561"); // 0
  TradeCaptureReportAck_message_t_0.insert("EncodedText_t_1092436561");
  elt.add_attribute("AsOfInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "L"); // 0
  TradeCaptureReportAck_message_t_0.insert("L");
  elt.add_attribute("TierCD", "TierCode_t_1739755068"); // 0
  TradeCaptureReportAck_message_t_0.insert("TierCode_t_1739755068");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_111175559"); // 0
  TradeCaptureReportAck_message_t_0.insert("MessageEventSource_t_111175559");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_2004459837"); // 0
  TradeCaptureReportAck_message_t_0.insert("LastUpdateTime_t_2004459837");
  elt.add_attribute("RndPx", "12069294.100000"); // 0
  TradeCaptureReportAck_message_t_0.insert("12069294.100000");
  elt.add_attribute("RptSys", "RptSys_t_43343302"); // 0
  TradeCaptureReportAck_message_t_0.insert("RptSys_t_43343302");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1115191880"); // 0
  TradeCaptureReportAck_message_t_0.insert("GrossTradeAmt_t_1115191880");
  elt.add_attribute("SettlDt", "SettlDate_t_1277204105"); // 0
  TradeCaptureReportAck_message_t_0.insert("SettlDate_t_1277204105");
  elt.add_attribute("FeeMult", "5082689.440000"); // 0
  TradeCaptureReportAck_message_t_0.insert("5082689.440000");
  all_values.push_back(TradeCaptureReportAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportAck_message_t");

  { // Hdr
    xml_element Hdr_97{"Hdr"};
    multiset<string> Hdr_97_set;
    Hdr_97.add_attribute("SeqNum", "1614458509"); // 1
    Hdr_97_set.insert("1614458509");
    Hdr_97.add_attribute("SID", "SenderCompID_t_1329369834"); // 1
    Hdr_97_set.insert("SenderCompID_t_1329369834");
    Hdr_97.add_attribute("TID", "TargetCompID_t_1780661566"); // 1
    Hdr_97_set.insert("TargetCompID_t_1780661566");
    Hdr_97.add_attribute("OBID", "OnBehalfOfCompID_t_995715245"); // 1
    Hdr_97_set.insert("OnBehalfOfCompID_t_995715245");
    Hdr_97.add_attribute("D2ID", "DeliverToCompID_t_1908485202"); // 1
    Hdr_97_set.insert("DeliverToCompID_t_1908485202");
    Hdr_97.add_attribute("SSub", "SenderSubID_t_510274989"); // 1
    Hdr_97_set.insert("SenderSubID_t_510274989");
    Hdr_97.add_attribute("SLoc", "SenderLocationID_t_826159243"); // 1
    Hdr_97_set.insert("SenderLocationID_t_826159243");
    Hdr_97.add_attribute("TSub", "TargetSubID_t_1052646763"); // 1
    Hdr_97_set.insert("TargetSubID_t_1052646763");
    Hdr_97.add_attribute("TLoc", "TargetLocationID_t_958159918"); // 1
    Hdr_97_set.insert("TargetLocationID_t_958159918");
    Hdr_97.add_attribute("OBSub", "OnBehalfOfSubID_t_1718341113"); // 1
    Hdr_97_set.insert("OnBehalfOfSubID_t_1718341113");
    Hdr_97.add_attribute("OBLoc", "OnBehalfOfLocationID_t_191482196"); // 1
    Hdr_97_set.insert("OnBehalfOfLocationID_t_191482196");
    Hdr_97.add_attribute("D2Sub", "DeliverToSubID_t_1746912913"); // 1
    Hdr_97_set.insert("DeliverToSubID_t_1746912913");
    Hdr_97.add_attribute("D2Loc", "DeliverToLocationID_t_133671643"); // 1
    Hdr_97_set.insert("DeliverToLocationID_t_133671643");
    Hdr_97.add_attribute("PosDup", "N"); // 1
    Hdr_97_set.insert("N");
    Hdr_97.add_attribute("PosRsnd", "Y"); // 1
    Hdr_97_set.insert("Y");
    Hdr_97.add_attribute("Snt", "SendingTime_t_327723970"); // 1
    Hdr_97_set.insert("SendingTime_t_327723970");
    Hdr_97.add_attribute("OrigSnt", "OrigSendingTime_t_1876347349"); // 1
    Hdr_97_set.insert("OrigSendingTime_t_1876347349");
    Hdr_97.add_attribute("MsgEncd", "MessageEncoding_t_1493307780"); // 1
    Hdr_97_set.insert("MessageEncoding_t_1493307780");
    all_values.push_back(Hdr_97_set);
    all_compo_names.insert("Hdr_97_set");

    {
      xml_element Hop_97{"Hop"};
      multiset<string> Hop_97_set;
      Hop_97.add_attribute("ID", "HopCompID_t_315921389"); // 2
      Hop_97_set.insert("HopCompID_t_315921389");
      Hop_97.add_attribute("Ref", "746852590"); // 2
      Hop_97_set.insert("746852590");
      Hop_97.add_attribute("Snt", "HopSendingTime_t_438260693"); // 2
      Hop_97_set.insert("HopSendingTime_t_438260693");
      all_values.push_back(Hop_97_set);
      all_compo_names.insert("Hop_97_set");

      Hdr_97.add_element(Hop_97);
    }
    elt.add_element(Hdr_97);
  } // end Hdr
  { // Pty
    xml_element Pty_419{"Pty"};
    multiset<string> Pty_419_set;
    Pty_419.add_attribute("ID", "RootPartyID_t_730962670"); // 1
    Pty_419_set.insert("RootPartyID_t_730962670");
    Pty_419.add_attribute("Src", "A"); // 1
    Pty_419_set.insert("A");
    Pty_419.add_attribute("R", "17"); // 1
    Pty_419_set.insert("17");
    all_values.push_back(Pty_419_set);
    all_compo_names.insert("Pty_419_set");

    {
      xml_element Sub_419{"Sub"};
      multiset<string> Sub_419_set;
      Sub_419.add_attribute("ID", "RootPartySubID_t_587938859"); // 2
      Sub_419_set.insert("RootPartySubID_t_587938859");
      Sub_419.add_attribute("Typ", "11"); // 2
      Sub_419_set.insert("11");
      all_values.push_back(Sub_419_set);
      all_compo_names.insert("Sub_419_set");

      Pty_419.add_element(Sub_419);
    }
    elt.add_element(Pty_419);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_84{"Instrmt"};
    multiset<string> Instrmt_84_set;
    Instrmt_84.add_attribute("Sym", "Symbol_t_798410574"); // 1
    Instrmt_84_set.insert("Symbol_t_798410574");
    Instrmt_84.add_attribute("Sfx", "WI"); // 1
    Instrmt_84_set.insert("WI");
    Instrmt_84.add_attribute("ID", "SecurityID_t_367181981"); // 1
    Instrmt_84_set.insert("SecurityID_t_367181981");
    Instrmt_84.add_attribute("Src", "E"); // 1
    Instrmt_84_set.insert("E");
    Instrmt_84.add_attribute("Prod", "10"); // 1
    Instrmt_84_set.insert("10");
    Instrmt_84.add_attribute("ProdCmplx", "ProductComplex_t_1696551815"); // 1
    Instrmt_84_set.insert("ProductComplex_t_1696551815");
    Instrmt_84.add_attribute("SecGrp", "SecurityGroup_t_939857437"); // 1
    Instrmt_84_set.insert("SecurityGroup_t_939857437");
    Instrmt_84.add_attribute("CFI", "CFICode_t_18337198"); // 1
    Instrmt_84_set.insert("CFICode_t_18337198");
    Instrmt_84.add_attribute("SecTyp", "DUAL"); // 1
    Instrmt_84_set.insert("DUAL");
    Instrmt_84.add_attribute("SubTyp", "SecuritySubType_t_1450132426"); // 1
    Instrmt_84_set.insert("SecuritySubType_t_1450132426");
    Instrmt_84.add_attribute("MMY", "844496441"); // 1
    Instrmt_84_set.insert("844496441");
    Instrmt_84.add_attribute("MatDt", "MaturityDate_t_362716484"); // 1
    Instrmt_84_set.insert("MaturityDate_t_362716484");
    Instrmt_84.add_attribute("MatTm", "260808697"); // 1
    Instrmt_84_set.insert("260808697");
    Instrmt_84.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_415353906"); // 1
    Instrmt_84_set.insert("SettleOnOpenFlag_t_415353906");
    Instrmt_84.add_attribute("AsgnMeth", "554198680"); // 1
    Instrmt_84_set.insert("554198680");
    Instrmt_84.add_attribute("Status", "1"); // 1
    Instrmt_84_set.insert("1");
    Instrmt_84.add_attribute("CpnPmt", "CouponPaymentDate_t_549025549"); // 1
    Instrmt_84_set.insert("CouponPaymentDate_t_549025549");
    Instrmt_84.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_84_set.insert("FR");
    Instrmt_84.add_attribute("Snrty", "SR"); // 1
    Instrmt_84_set.insert("SR");
    Instrmt_84.add_attribute("NotlPctOut", "8767495.200000"); // 1
    Instrmt_84_set.insert("8767495.200000");
    Instrmt_84.add_attribute("OrigNotlPctOut", "10364568.410000"); // 1
    Instrmt_84_set.insert("10364568.410000");
    Instrmt_84.add_attribute("AttchPnt", "7861181.520000"); // 1
    Instrmt_84_set.insert("7861181.520000");
    Instrmt_84.add_attribute("DetchPnt", "11926709.090000"); // 1
    Instrmt_84_set.insert("11926709.090000");
    Instrmt_84.add_attribute("Issued", "IssueDate_t_1783309431"); // 1
    Instrmt_84_set.insert("IssueDate_t_1783309431");
    Instrmt_84.add_attribute("RepoCollSecTyp", "1224378845"); // 1
    Instrmt_84_set.insert("1224378845");
    Instrmt_84.add_attribute("RepoTrm", "1836562622"); // 1
    Instrmt_84_set.insert("1836562622");
    Instrmt_84.add_attribute("RepoRt", "3667884.530000"); // 1
    Instrmt_84_set.insert("3667884.530000");
    Instrmt_84.add_attribute("Fctr", "12549109.590000"); // 1
    Instrmt_84_set.insert("12549109.590000");
    Instrmt_84.add_attribute("CrdRtg", "CreditRating_t_444146246"); // 1
    Instrmt_84_set.insert("CreditRating_t_444146246");
    Instrmt_84.add_attribute("Rgstry", "InstrRegistry_t_954727312"); // 1
    Instrmt_84_set.insert("InstrRegistry_t_954727312");
    Instrmt_84.add_attribute("IssuCtry", "344888835"); // 1
    Instrmt_84_set.insert("344888835");
    Instrmt_84.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1242556821"); // 1
    Instrmt_84_set.insert("StateOrProvinceOfIssue_t_1242556821");
    Instrmt_84.add_attribute("Lcl", "LocaleOfIssue_t_510374403"); // 1
    Instrmt_84_set.insert("LocaleOfIssue_t_510374403");
    Instrmt_84.add_attribute("Redeem", "RedemptionDate_t_712070816"); // 1
    Instrmt_84_set.insert("RedemptionDate_t_712070816");
    Instrmt_84.add_attribute("StrkPx", "4017526.920000"); // 1
    Instrmt_84_set.insert("4017526.920000");
    Instrmt_84.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_84_set.insert("CAN");
    Instrmt_84.add_attribute("StrkMult", "13416101.290000"); // 1
    Instrmt_84_set.insert("13416101.290000");
    Instrmt_84.add_attribute("StrkValu", "16988172.020000"); // 1
    Instrmt_84_set.insert("16988172.020000");
    Instrmt_84.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_84_set.insert("1");
    Instrmt_84.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_84_set.insert("4");
    Instrmt_84.add_attribute("StrkPxBndryPrcsn", "3958299.950000"); // 1
    Instrmt_84_set.insert("3958299.950000");
    Instrmt_84.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_84_set.insert("1");
    Instrmt_84.add_attribute("OptAt", "905067605"); // 1
    Instrmt_84_set.insert("905067605");
    Instrmt_84.add_attribute("Mult", "8111839.020000"); // 1
    Instrmt_84_set.insert("8111839.020000");
    Instrmt_84.add_attribute("MultTyp", "1"); // 1
    Instrmt_84_set.insert("1");
    Instrmt_84.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_84_set.insert("2");
    Instrmt_84.add_attribute("MinPxIncr", "13602094.510000"); // 1
    Instrmt_84_set.insert("13602094.510000");
    Instrmt_84.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1795717009"); // 1
    Instrmt_84_set.insert("MinPriceIncrementAmount_t_1795717009");
    Instrmt_84.add_attribute("UOM", "Bu"); // 1
    Instrmt_84_set.insert("Bu");
    Instrmt_84.add_attribute("UOMQty", "894753.230000"); // 1
    Instrmt_84_set.insert("894753.230000");
    Instrmt_84.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_84_set.insert("Bbl");
    Instrmt_84.add_attribute("PxUOMQty", "8442340.910000"); // 1
    Instrmt_84_set.insert("8442340.910000");
    Instrmt_84.add_attribute("SettlMeth", "P"); // 1
    Instrmt_84_set.insert("P");
    Instrmt_84.add_attribute("ExerStyle", "0"); // 1
    Instrmt_84_set.insert("0");
    Instrmt_84.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_84_set.insert("2");
    Instrmt_84.add_attribute("OptPayAmt", "OptPayoutAmount_t_971225207"); // 1
    Instrmt_84_set.insert("OptPayoutAmount_t_971225207");
    Instrmt_84.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_84_set.insert("STD");
    Instrmt_84.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_84_set.insert("FUTDA");
    Instrmt_84.add_attribute("ListMeth", "0"); // 1
    Instrmt_84_set.insert("0");
    Instrmt_84.add_attribute("CapPx", "16420317.520000"); // 1
    Instrmt_84_set.insert("16420317.520000");
    Instrmt_84.add_attribute("FlrPx", "15209290.820000"); // 1
    Instrmt_84_set.insert("15209290.820000");
    Instrmt_84.add_attribute("PutCall", "1"); // 1
    Instrmt_84_set.insert("1");
    Instrmt_84.add_attribute("FlexInd", "true"); // 1
    Instrmt_84_set.insert("true");
    Instrmt_84.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_84_set.insert("true");
    Instrmt_84.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_84_set.insert("Mo");
    Instrmt_84.add_attribute("CpnRt", "16854025.120000"); // 1
    Instrmt_84_set.insert("16854025.120000");
    Instrmt_84.add_attribute("Exch", "SecurityExchange_t_346655233"); // 1
    Instrmt_84_set.insert("SecurityExchange_t_346655233");
    Instrmt_84.add_attribute("PosLmt", "106323800"); // 1
    Instrmt_84_set.insert("106323800");
    Instrmt_84.add_attribute("NTPosLmt", "1236736066"); // 1
    Instrmt_84_set.insert("1236736066");
    Instrmt_84.add_attribute("Issr", "Issuer_t_2065347585"); // 1
    Instrmt_84_set.insert("Issuer_t_2065347585");
    Instrmt_84.add_attribute("EncIssrLen", "750582708"); // 1
    Instrmt_84_set.insert("750582708");
    Instrmt_84.add_attribute("EncIssr", "EncodedIssuer_t_1632566061"); // 1
    Instrmt_84_set.insert("EncodedIssuer_t_1632566061");
    Instrmt_84.add_attribute("Desc", "SecurityDesc_t_1999272774"); // 1
    Instrmt_84_set.insert("SecurityDesc_t_1999272774");
    Instrmt_84.add_attribute("EncSecDescLen", "1655650313"); // 1
    Instrmt_84_set.insert("1655650313");
    Instrmt_84.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_296266315"); // 1
    Instrmt_84_set.insert("EncodedSecurityDesc_t_296266315");
    Instrmt_84.add_attribute("Pool", "Pool_t_339912995"); // 1
    Instrmt_84_set.insert("Pool_t_339912995");
    Instrmt_84.add_attribute("CSetMo", "273472233"); // 1
    Instrmt_84_set.insert("273472233");
    Instrmt_84.add_attribute("CPPgm", "1"); // 1
    Instrmt_84_set.insert("1");
    Instrmt_84.add_attribute("CPRegT", "CPRegType_t_2135630004"); // 1
    Instrmt_84_set.insert("CPRegType_t_2135630004");
    Instrmt_84.add_attribute("Dated", "DatedDate_t_331588172"); // 1
    Instrmt_84_set.insert("DatedDate_t_331588172");
    Instrmt_84.add_attribute("IntAcrl", "InterestAccrualDate_t_1745951090"); // 1
    Instrmt_84_set.insert("InterestAccrualDate_t_1745951090");
    all_values.push_back(Instrmt_84_set);
    all_compo_names.insert("Instrmt_84_set");

    {
      xml_element AID_87{"AID"};
      multiset<string> AID_87_set;
      AID_87.add_attribute("AltID", "SecurityAltID_t_672836559"); // 2
      AID_87_set.insert("SecurityAltID_t_672836559");
      AID_87.add_attribute("AltIDSrc", "C"); // 2
      AID_87_set.insert("C");
      all_values.push_back(AID_87_set);
      all_compo_names.insert("AID_87_set");

      Instrmt_84.add_element(AID_87);
    }
    {
      xml_element SecXML_86{"SecXML"};
      multiset<string> SecXML_86_set;
      SecXML_86.add_attribute("Schema", "SecurityXMLSchema_t_880613675"); // 2
      SecXML_86_set.insert("SecurityXMLSchema_t_880613675");
      all_values.push_back(SecXML_86_set);
      all_compo_names.insert("SecXML_86_set");

      Instrmt_84.add_element(SecXML_86);
    }
    {
      xml_element Evnt_86{"Evnt"};
      multiset<string> Evnt_86_set;
      Evnt_86.add_attribute("EventTyp", "6"); // 2
      Evnt_86_set.insert("6");
      Evnt_86.add_attribute("Dt", "EventDate_t_1096951551"); // 2
      Evnt_86_set.insert("EventDate_t_1096951551");
      Evnt_86.add_attribute("Tm", "EventTime_t_1851838883"); // 2
      Evnt_86_set.insert("EventTime_t_1851838883");
      Evnt_86.add_attribute("Px", "16806569.860000"); // 2
      Evnt_86_set.insert("16806569.860000");
      Evnt_86.add_attribute("Txt", "EventText_t_125508151"); // 2
      Evnt_86_set.insert("EventText_t_125508151");
      all_values.push_back(Evnt_86_set);
      all_compo_names.insert("Evnt_86_set");

      Instrmt_84.add_element(Evnt_86);
    }
    {
      xml_element Pty_420{"Pty"};
      multiset<string> Pty_420_set;
      Pty_420.add_attribute("ID", "InstrumentPartyID_t_1119726689"); // 2
      Pty_420_set.insert("InstrumentPartyID_t_1119726689");
      Pty_420.add_attribute("Src", "D"); // 2
      Pty_420_set.insert("D");
      Pty_420.add_attribute("R", "3"); // 2
      Pty_420_set.insert("3");
      all_values.push_back(Pty_420_set);
      all_compo_names.insert("Pty_420_set");

      {
        xml_element Sub_420{"Sub"};
        multiset<string> Sub_420_set;
        Sub_420.add_attribute("ID", "InstrumentPartySubID_t_1630171316"); // 3
        Sub_420_set.insert("InstrumentPartySubID_t_1630171316");
        Sub_420.add_attribute("Typ", "20"); // 3
        Sub_420_set.insert("20");
        all_values.push_back(Sub_420_set);
        all_compo_names.insert("Sub_420_set");

        Pty_420.add_element(Sub_420);
      }
      Instrmt_84.add_element(Pty_420);
    }
    {
      xml_element CmplxEvnt_83{"CmplxEvnt"};
      multiset<string> CmplxEvnt_83_set;
      CmplxEvnt_83.add_attribute("Typ", "1"); // 2
      CmplxEvnt_83_set.insert("1");
      CmplxEvnt_83.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_394884987"); // 2
      CmplxEvnt_83_set.insert("ComplexOptPayoutAmount_t_394884987");
      CmplxEvnt_83.add_attribute("Px", "7180464.620000"); // 2
      CmplxEvnt_83_set.insert("7180464.620000");
      CmplxEvnt_83.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_83_set.insert("3");
      CmplxEvnt_83.add_attribute("PxBndryPrcsn", "5012087.870000"); // 2
      CmplxEvnt_83_set.insert("5012087.870000");
      CmplxEvnt_83.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_83_set.insert("1");
      CmplxEvnt_83.add_attribute("Cond", "2"); // 2
      CmplxEvnt_83_set.insert("2");
      all_values.push_back(CmplxEvnt_83_set);
      all_compo_names.insert("CmplxEvnt_83_set");

      {
        xml_element EvntDts_83{"EvntDts"};
        multiset<string> EvntDts_83_set;
        EvntDts_83.add_attribute("StartDt", "ComplexEventStartDate_t_1251791496"); // 3
        EvntDts_83_set.insert("ComplexEventStartDate_t_1251791496");
        EvntDts_83.add_attribute("EndDt", "ComplexEventEndDate_t_1439864942"); // 3
        EvntDts_83_set.insert("ComplexEventEndDate_t_1439864942");
        all_values.push_back(EvntDts_83_set);
        all_compo_names.insert("EvntDts_83_set");

        {
          xml_element EvntTms_83{"EvntTms"};
          multiset<string> EvntTms_83_set;
          EvntTms_83.add_attribute("StartTm", "1848261781"); // 4
          EvntTms_83_set.insert("1848261781");
          EvntTms_83.add_attribute("EndTm", "759958161"); // 4
          EvntTms_83_set.insert("759958161");
          all_values.push_back(EvntTms_83_set);
          all_compo_names.insert("EvntTms_83_set");

          EvntDts_83.add_element(EvntTms_83);
        }
        CmplxEvnt_83.add_element(EvntDts_83);
      }
      Instrmt_84.add_element(CmplxEvnt_83);
    }
    elt.add_element(Instrmt_84);
  } // end Instrmt
  { // Undly
    xml_element Undly_114{"Undly"};
    multiset<string> Undly_114_set;
    Undly_114.add_attribute("Sym", "UnderlyingSymbol_t_40691128"); // 1
    Undly_114_set.insert("UnderlyingSymbol_t_40691128");
    Undly_114.add_attribute("Sfx", "CD"); // 1
    Undly_114_set.insert("CD");
    Undly_114.add_attribute("ID", "UnderlyingSecurityID_t_1245123376"); // 1
    Undly_114_set.insert("UnderlyingSecurityID_t_1245123376");
    Undly_114.add_attribute("Src", "H"); // 1
    Undly_114_set.insert("H");
    Undly_114.add_attribute("Prod", "11"); // 1
    Undly_114_set.insert("11");
    Undly_114.add_attribute("CFI", "UnderlyingCFICode_t_843590819"); // 1
    Undly_114_set.insert("UnderlyingCFICode_t_843590819");
    Undly_114.add_attribute("SecTyp", "EUCD"); // 1
    Undly_114_set.insert("EUCD");
    Undly_114.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_393357181"); // 1
    Undly_114_set.insert("UnderlyingSecuritySubType_t_393357181");
    Undly_114.add_attribute("MMY", "1724204494"); // 1
    Undly_114_set.insert("1724204494");
    Undly_114.add_attribute("Mat", "UnderlyingMaturityDate_t_1695026590"); // 1
    Undly_114_set.insert("UnderlyingMaturityDate_t_1695026590");
    Undly_114.add_attribute("MatTm", "1490308733"); // 1
    Undly_114_set.insert("1490308733");
    Undly_114.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1428559729"); // 1
    Undly_114_set.insert("UnderlyingCouponPaymentDate_t_1428559729");
    Undly_114.add_attribute("RestrctTyp", "FR"); // 1
    Undly_114_set.insert("FR");
    Undly_114.add_attribute("Snrty", "SD"); // 1
    Undly_114_set.insert("SD");
    Undly_114.add_attribute("NotlPctOut", "4008027.700000"); // 1
    Undly_114_set.insert("4008027.700000");
    Undly_114.add_attribute("OrigNotlPctOut", "2559213.700000"); // 1
    Undly_114_set.insert("2559213.700000");
    Undly_114.add_attribute("AttchPnt", "11147704.690000"); // 1
    Undly_114_set.insert("11147704.690000");
    Undly_114.add_attribute("DetchPnt", "20309740.860000"); // 1
    Undly_114_set.insert("20309740.860000");
    Undly_114.add_attribute("Issued", "UnderlyingIssueDate_t_1436048969"); // 1
    Undly_114_set.insert("UnderlyingIssueDate_t_1436048969");
    Undly_114.add_attribute("RepoCollSecTyp", "699240305"); // 1
    Undly_114_set.insert("699240305");
    Undly_114.add_attribute("RepoTrm", "278375425"); // 1
    Undly_114_set.insert("278375425");
    Undly_114.add_attribute("RepoRt", "66117.830000"); // 1
    Undly_114_set.insert("66117.830000");
    Undly_114.add_attribute("Fctr", "6303653.750000"); // 1
    Undly_114_set.insert("6303653.750000");
    Undly_114.add_attribute("CrdRtg", "UnderlyingCreditRating_t_779584213"); // 1
    Undly_114_set.insert("UnderlyingCreditRating_t_779584213");
    Undly_114.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1961394312"); // 1
    Undly_114_set.insert("UnderlyingInstrRegistry_t_1961394312");
    Undly_114.add_attribute("Ctry", "479354382"); // 1
    Undly_114_set.insert("479354382");
    Undly_114.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2031375709"); // 1
    Undly_114_set.insert("UnderlyingStateOrProvinceOfIssue_t_2031375709");
    Undly_114.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1253775606"); // 1
    Undly_114_set.insert("UnderlyingLocaleOfIssue_t_1253775606");
    Undly_114.add_attribute("Redeem", "UnderlyingRedemptionDate_t_180132515"); // 1
    Undly_114_set.insert("UnderlyingRedemptionDate_t_180132515");
    Undly_114.add_attribute("StrkPx", "6438502.220000"); // 1
    Undly_114_set.insert("6438502.220000");
    Undly_114.add_attribute("StrkCcy", "CHF"); // 1
    Undly_114_set.insert("CHF");
    Undly_114.add_attribute("OptA", "1677280617"); // 1
    Undly_114_set.insert("1677280617");
    Undly_114.add_attribute("Mult", "20875465.920000"); // 1
    Undly_114_set.insert("20875465.920000");
    Undly_114.add_attribute("MultTyp", "2"); // 1
    Undly_114_set.insert("2");
    Undly_114.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_114_set.insert("0");
    Undly_114.add_attribute("UOM", "USD"); // 1
    Undly_114_set.insert("USD");
    Undly_114.add_attribute("UOMQty", "9513351.710000"); // 1
    Undly_114_set.insert("9513351.710000");
    Undly_114.add_attribute("PxUOM", "MWh"); // 1
    Undly_114_set.insert("MWh");
    Undly_114.add_attribute("PxUOMQty", "3603746.090000"); // 1
    Undly_114_set.insert("3603746.090000");
    Undly_114.add_attribute("TmUnit", "Yr"); // 1
    Undly_114_set.insert("Yr");
    Undly_114.add_attribute("ExerStyle", "2"); // 1
    Undly_114_set.insert("2");
    Undly_114.add_attribute("CpnRt", "17889343.390000"); // 1
    Undly_114_set.insert("17889343.390000");
    Undly_114.add_attribute("Exch", "UnderlyingSecurityExchange_t_1727078041"); // 1
    Undly_114_set.insert("UnderlyingSecurityExchange_t_1727078041");
    Undly_114.add_attribute("Issr", "UnderlyingIssuer_t_99331038"); // 1
    Undly_114_set.insert("UnderlyingIssuer_t_99331038");
    Undly_114.add_attribute("EncUndIssrLen", "42253461"); // 1
    Undly_114_set.insert("42253461");
    Undly_114.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1982999412"); // 1
    Undly_114_set.insert("EncodedUnderlyingIssuer_t_1982999412");
    Undly_114.add_attribute("Desc", "UnderlyingSecurityDesc_t_1214101507"); // 1
    Undly_114_set.insert("UnderlyingSecurityDesc_t_1214101507");
    Undly_114.add_attribute("EncUndSecDescLen", "2073227548"); // 1
    Undly_114_set.insert("2073227548");
    Undly_114.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1271564733"); // 1
    Undly_114_set.insert("EncodedUnderlyingSecurityDesc_t_1271564733");
    Undly_114.add_attribute("CPPgm", "UnderlyingCPProgram_t_1913341813"); // 1
    Undly_114_set.insert("UnderlyingCPProgram_t_1913341813");
    Undly_114.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_204119325"); // 1
    Undly_114_set.insert("UnderlyingCPRegType_t_204119325");
    Undly_114.add_attribute("AllocPct", "12781765.160000"); // 1
    Undly_114_set.insert("12781765.160000");
    Undly_114.add_attribute("Ccy", "JPY"); // 1
    Undly_114_set.insert("JPY");
    Undly_114.add_attribute("Qty", "10920871.800000"); // 1
    Undly_114_set.insert("10920871.800000");
    Undly_114.add_attribute("SettlTyp", "4"); // 1
    Undly_114_set.insert("4");
    Undly_114.add_attribute("CashAmt", "UnderlyingCashAmount_t_867595599"); // 1
    Undly_114_set.insert("UnderlyingCashAmount_t_867595599");
    Undly_114.add_attribute("CashTyp", "FIXED"); // 1
    Undly_114_set.insert("FIXED");
    Undly_114.add_attribute("Px", "10557104.370000"); // 1
    Undly_114_set.insert("10557104.370000");
    Undly_114.add_attribute("DirtPx", "15114458.220000"); // 1
    Undly_114_set.insert("15114458.220000");
    Undly_114.add_attribute("EndPx", "10408023.540000"); // 1
    Undly_114_set.insert("10408023.540000");
    Undly_114.add_attribute("StartVal", "UnderlyingStartValue_t_1276534080"); // 1
    Undly_114_set.insert("UnderlyingStartValue_t_1276534080");
    Undly_114.add_attribute("CurVal", "UnderlyingCurrentValue_t_1041242791"); // 1
    Undly_114_set.insert("UnderlyingCurrentValue_t_1041242791");
    Undly_114.add_attribute("EndVal", "UnderlyingEndValue_t_980865298"); // 1
    Undly_114_set.insert("UnderlyingEndValue_t_980865298");
    Undly_114.add_attribute("AdjQty", "15261952.070000"); // 1
    Undly_114_set.insert("15261952.070000");
    Undly_114.add_attribute("FxRate", "19360583.260000"); // 1
    Undly_114_set.insert("19360583.260000");
    Undly_114.add_attribute("FxRateCalc", "D"); // 1
    Undly_114_set.insert("D");
    Undly_114.add_attribute("CapValu", "UnderlyingCapValue_t_330046731"); // 1
    Undly_114_set.insert("UnderlyingCapValue_t_330046731");
    Undly_114.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1076747395"); // 1
    Undly_114_set.insert("UnderlyingSettlMethod_t_1076747395");
    Undly_114.add_attribute("PutCall", "2124893670"); // 1
    Undly_114_set.insert("2124893670");
    all_values.push_back(Undly_114_set);
    all_compo_names.insert("Undly_114_set");

    {
      xml_element UndAID_114{"UndAID"};
      multiset<string> UndAID_114_set;
      UndAID_114.add_attribute("AltID", "UnderlyingSecurityAltID_t_828924844"); // 2
      UndAID_114_set.insert("UnderlyingSecurityAltID_t_828924844");
      UndAID_114.add_attribute("AltIDSrc", "G"); // 2
      UndAID_114_set.insert("G");
      all_values.push_back(UndAID_114_set);
      all_compo_names.insert("UndAID_114_set");

      Undly_114.add_element(UndAID_114);
    }
    {
      xml_element Stip_183{"Stip"};
      multiset<string> Stip_183_set;
      Stip_183.add_attribute("Typ", "PURPOSE"); // 2
      Stip_183_set.insert("PURPOSE");
      Stip_183.add_attribute("Val", "UnderlyingStipValue_t_408519238"); // 2
      Stip_183_set.insert("UnderlyingStipValue_t_408519238");
      all_values.push_back(Stip_183_set);
      all_compo_names.insert("Stip_183_set");

      Undly_114.add_element(Stip_183);
    }
    {
      xml_element Pty_421{"Pty"};
      multiset<string> Pty_421_set;
      Pty_421.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1807076235"); // 2
      Pty_421_set.insert("UnderlyingInstrumentPartyID_t_1807076235");
      Pty_421.add_attribute("Src", "G"); // 2
      Pty_421_set.insert("G");
      Pty_421.add_attribute("R", "53"); // 2
      Pty_421_set.insert("53");
      all_values.push_back(Pty_421_set);
      all_compo_names.insert("Pty_421_set");

      {
        xml_element Sub_421{"Sub"};
        multiset<string> Sub_421_set;
        Sub_421.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_873694095"); // 3
        Sub_421_set.insert("UnderlyingInstrumentPartySubID_t_873694095");
        Sub_421.add_attribute("Typ", "27"); // 3
        Sub_421_set.insert("27");
        all_values.push_back(Sub_421_set);
        all_compo_names.insert("Sub_421_set");

        Pty_421.add_element(Sub_421);
      }
      Undly_114.add_element(Pty_421);
    }
    elt.add_element(Undly_114);
  } // end Undly
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_1{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_1_set;
    TrdRepIndicatorsGrp_1.add_attribute("PtyRole", "5"); // 1
    TrdRepIndicatorsGrp_1_set.insert("5");
    TrdRepIndicatorsGrp_1.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_1_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_1_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_1_set");

    elt.add_element(TrdRepIndicatorsGrp_1);
  } // end TrdRepIndicatorsGrp
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_2{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_2_set;
    TrdRepIndicatorsGrp_2.add_attribute("PtyRole", "50"); // 1
    TrdRepIndicatorsGrp_2_set.insert("50");
    TrdRepIndicatorsGrp_2.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_2_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_2_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_2_set");

    elt.add_element(TrdRepIndicatorsGrp_2);
  } // end TrdRepIndicatorsGrp
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_3{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_3_set;
    TrdRepIndicatorsGrp_3.add_attribute("PtyRole", "2"); // 1
    TrdRepIndicatorsGrp_3_set.insert("2");
    TrdRepIndicatorsGrp_3.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_3_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_3_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_3_set");

    elt.add_element(TrdRepIndicatorsGrp_3);
  } // end TrdRepIndicatorsGrp
  { // TrdLeg
    xml_element TrdLeg_1{"TrdLeg"};
    multiset<string> TrdLeg_1_set;
    TrdLeg_1.add_attribute("Qty", "16422765.380000"); // 1
    TrdLeg_1_set.insert("16422765.380000");
    TrdLeg_1.add_attribute("SwapTyp", "4"); // 1
    TrdLeg_1_set.insert("4");
    TrdLeg_1.add_attribute("RptID", "LegReportID_t_819580511"); // 1
    TrdLeg_1_set.insert("LegReportID_t_819580511");
    TrdLeg_1.add_attribute("LegNo", "1006238712"); // 1
    TrdLeg_1_set.insert("1006238712");
    TrdLeg_1.add_attribute("PosEfct", "O"); // 1
    TrdLeg_1_set.insert("O");
    TrdLeg_1.add_attribute("Cover", "1"); // 1
    TrdLeg_1_set.insert("1");
    TrdLeg_1.add_attribute("RefID", "LegRefID_t_2047481503"); // 1
    TrdLeg_1_set.insert("LegRefID_t_2047481503");
    TrdLeg_1.add_attribute("SettlTyp", "6"); // 1
    TrdLeg_1_set.insert("6");
    TrdLeg_1.add_attribute("SettlDt", "LegSettlDate_t_1474826150"); // 1
    TrdLeg_1_set.insert("LegSettlDate_t_1474826150");
    TrdLeg_1.add_attribute("LastPx", "18360561.820000"); // 1
    TrdLeg_1_set.insert("18360561.820000");
    TrdLeg_1.add_attribute("SettlCcy", "CAN"); // 1
    TrdLeg_1_set.insert("CAN");
    TrdLeg_1.add_attribute("LegLastFwdPnts", "7653199.290000"); // 1
    TrdLeg_1_set.insert("7653199.290000");
    TrdLeg_1.add_attribute("LegCalcCcyLastQty", "14053883.620000"); // 1
    TrdLeg_1_set.insert("14053883.620000");
    TrdLeg_1.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_486314078"); // 1
    TrdLeg_1_set.insert("LegGrossTradeAmt_t_486314078");
    TrdLeg_1.add_attribute("LegVolatility", "3255814.790000"); // 1
    TrdLeg_1_set.insert("3255814.790000");
    TrdLeg_1.add_attribute("LegDividendYield", "10242490.750000"); // 1
    TrdLeg_1_set.insert("10242490.750000");
    TrdLeg_1.add_attribute("LegCurrencyRatio", "8948333.160000"); // 1
    TrdLeg_1_set.insert("8948333.160000");
    TrdLeg_1.add_attribute("LegExecInst", "L"); // 1
    TrdLeg_1_set.insert("L");
    TrdLeg_1.add_attribute("LastQty", "6853632.500000"); // 1
    TrdLeg_1_set.insert("6853632.500000");
    all_values.push_back(TrdLeg_1_set);
    all_compo_names.insert("TrdLeg_1_set");

    {
      xml_element Leg_98{"Leg"};
      multiset<string> Leg_98_set;
      Leg_98.add_attribute("Sym", "LegSymbol_t_1138868318"); // 2
      Leg_98_set.insert("LegSymbol_t_1138868318");
      Leg_98.add_attribute("Sfx", "WI"); // 2
      Leg_98_set.insert("WI");
      Leg_98.add_attribute("ID", "LegSecurityID_t_272221325"); // 2
      Leg_98_set.insert("LegSecurityID_t_272221325");
      Leg_98.add_attribute("Src", "G"); // 2
      Leg_98_set.insert("G");
      Leg_98.add_attribute("Prod", "13"); // 2
      Leg_98_set.insert("13");
      Leg_98.add_attribute("CFI", "LegCFICode_t_63198726"); // 2
      Leg_98_set.insert("LegCFICode_t_63198726");
      Leg_98.add_attribute("SecTyp", "FXNDF"); // 2
      Leg_98_set.insert("FXNDF");
      Leg_98.add_attribute("SecSubTyp", "LegSecuritySubType_t_386712573"); // 2
      Leg_98_set.insert("LegSecuritySubType_t_386712573");
      Leg_98.add_attribute("MMY", "837879665"); // 2
      Leg_98_set.insert("837879665");
      Leg_98.add_attribute("Mat", "LegMaturityDate_t_744173144"); // 2
      Leg_98_set.insert("LegMaturityDate_t_744173144");
      Leg_98.add_attribute("MatTm", "150582647"); // 2
      Leg_98_set.insert("150582647");
      Leg_98.add_attribute("CpnPmt", "LegCouponPaymentDate_t_332672555"); // 2
      Leg_98_set.insert("LegCouponPaymentDate_t_332672555");
      Leg_98.add_attribute("Issued", "LegIssueDate_t_533448419"); // 2
      Leg_98_set.insert("LegIssueDate_t_533448419");
      Leg_98.add_attribute("RepoCollSecTyp", "970163158"); // 2
      Leg_98_set.insert("970163158");
      Leg_98.add_attribute("RepoTrm", "1338911268"); // 2
      Leg_98_set.insert("1338911268");
      Leg_98.add_attribute("RepoRt", "13635260.470000"); // 2
      Leg_98_set.insert("13635260.470000");
      Leg_98.add_attribute("Fctr", "9187941.010000"); // 2
      Leg_98_set.insert("9187941.010000");
      Leg_98.add_attribute("CrdRtg", "LegCreditRating_t_1238909123"); // 2
      Leg_98_set.insert("LegCreditRating_t_1238909123");
      Leg_98.add_attribute("Rgstry", "LegInstrRegistry_t_1026985326"); // 2
      Leg_98_set.insert("LegInstrRegistry_t_1026985326");
      Leg_98.add_attribute("Ctry", "246136604"); // 2
      Leg_98_set.insert("246136604");
      Leg_98.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_927481657"); // 2
      Leg_98_set.insert("LegStateOrProvinceOfIssue_t_927481657");
      Leg_98.add_attribute("Lcl", "LegLocaleOfIssue_t_307480017"); // 2
      Leg_98_set.insert("LegLocaleOfIssue_t_307480017");
      Leg_98.add_attribute("Redeem", "LegRedemptionDate_t_2051009485"); // 2
      Leg_98_set.insert("LegRedemptionDate_t_2051009485");
      Leg_98.add_attribute("Strk", "16928015.870000"); // 2
      Leg_98_set.insert("16928015.870000");
      Leg_98.add_attribute("StrkCcy", "EUR"); // 2
      Leg_98_set.insert("EUR");
      Leg_98.add_attribute("OptA", "2018383066"); // 2
      Leg_98_set.insert("2018383066");
      Leg_98.add_attribute("Cmult", "5896338.070000"); // 2
      Leg_98_set.insert("5896338.070000");
      Leg_98.add_attribute("MultTyp", "1"); // 2
      Leg_98_set.insert("1");
      Leg_98.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_98_set.insert("2");
      Leg_98.add_attribute("UOM", "USD"); // 2
      Leg_98_set.insert("USD");
      Leg_98.add_attribute("UOMQty", "2760579.010000"); // 2
      Leg_98_set.insert("2760579.010000");
      Leg_98.add_attribute("PxUOM", "Gal"); // 2
      Leg_98_set.insert("Gal");
      Leg_98.add_attribute("PxUOMQty", "15472183.830000"); // 2
      Leg_98_set.insert("15472183.830000");
      Leg_98.add_attribute("TmUnit", "Wk"); // 2
      Leg_98_set.insert("Wk");
      Leg_98.add_attribute("ExerStyle", "0"); // 2
      Leg_98_set.insert("0");
      Leg_98.add_attribute("CpnRt", "16104171.090000"); // 2
      Leg_98_set.insert("16104171.090000");
      Leg_98.add_attribute("Exch", "LegSecurityExchange_t_1936319315"); // 2
      Leg_98_set.insert("LegSecurityExchange_t_1936319315");
      Leg_98.add_attribute("Issr", "LegIssuer_t_452590993"); // 2
      Leg_98_set.insert("LegIssuer_t_452590993");
      Leg_98.add_attribute("EncLegIssrLen", "300813126"); // 2
      Leg_98_set.insert("300813126");
      Leg_98.add_attribute("EncLegIssr", "EncodedLegIssuer_t_533008811"); // 2
      Leg_98_set.insert("EncodedLegIssuer_t_533008811");
      Leg_98.add_attribute("Desc", "LegSecurityDesc_t_603173640"); // 2
      Leg_98_set.insert("LegSecurityDesc_t_603173640");
      Leg_98.add_attribute("EncLegSecDescLen", "633485681"); // 2
      Leg_98_set.insert("633485681");
      Leg_98.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1066457230"); // 2
      Leg_98_set.insert("EncodedLegSecurityDesc_t_1066457230");
      Leg_98.add_attribute("RatioQty", "15733367.990000"); // 2
      Leg_98_set.insert("15733367.990000");
      Leg_98.add_attribute("Side", "6"); // 2
      Leg_98_set.insert("6");
      Leg_98.add_attribute("Ccy", "JPY"); // 2
      Leg_98_set.insert("JPY");
      Leg_98.add_attribute("Pool", "LegPool_t_1063822425"); // 2
      Leg_98_set.insert("LegPool_t_1063822425");
      Leg_98.add_attribute("Dated", "LegDatedDate_t_1309484956"); // 2
      Leg_98_set.insert("LegDatedDate_t_1309484956");
      Leg_98.add_attribute("CSetMo", "590783856"); // 2
      Leg_98_set.insert("590783856");
      Leg_98.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1991304082"); // 2
      Leg_98_set.insert("LegInterestAccrualDate_t_1991304082");
      Leg_98.add_attribute("PutCall", "1616964973"); // 2
      Leg_98_set.insert("1616964973");
      Leg_98.add_attribute("LegOptionRatio", "4943096.940000"); // 2
      Leg_98_set.insert("4943096.940000");
      Leg_98.add_attribute("Px", "15366220.210000"); // 2
      Leg_98_set.insert("15366220.210000");
      all_values.push_back(Leg_98_set);
      all_compo_names.insert("Leg_98_set");

      {
        xml_element LegAID_95{"LegAID"};
        multiset<string> LegAID_95_set;
        LegAID_95.add_attribute("SecAltID", "LegSecurityAltID_t_1182349705"); // 3
        LegAID_95_set.insert("LegSecurityAltID_t_1182349705");
        LegAID_95.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_95_set.insert("E");
        all_values.push_back(LegAID_95_set);
        all_compo_names.insert("LegAID_95_set");

        Leg_98.add_element(LegAID_95);
      }
      TrdLeg_1.add_element(Leg_98);
    }
    {
      xml_element Stip_184{"Stip"};
      multiset<string> Stip_184_set;
      Stip_184.add_attribute("StipTyp", "YTM"); // 2
      Stip_184_set.insert("YTM");
      Stip_184.add_attribute("StipVal", "LegStipulationValue_t_1771983512"); // 2
      Stip_184_set.insert("LegStipulationValue_t_1771983512");
      all_values.push_back(Stip_184_set);
      all_compo_names.insert("Stip_184_set");

      TrdLeg_1.add_element(Stip_184);
    }
    {
      xml_element Pty_422{"Pty"};
      multiset<string> Pty_422_set;
      Pty_422.add_attribute("ID", "NestedPartyID_t_21339193"); // 2
      Pty_422_set.insert("NestedPartyID_t_21339193");
      Pty_422.add_attribute("Src", "1"); // 2
      Pty_422_set.insert("1");
      Pty_422.add_attribute("R", "39"); // 2
      Pty_422_set.insert("39");
      all_values.push_back(Pty_422_set);
      all_compo_names.insert("Pty_422_set");

      {
        xml_element Sub_422{"Sub"};
        multiset<string> Sub_422_set;
        Sub_422.add_attribute("ID", "NestedPartySubID_t_297397094"); // 3
        Sub_422_set.insert("NestedPartySubID_t_297397094");
        Sub_422.add_attribute("Typ", "5"); // 3
        Sub_422_set.insert("5");
        all_values.push_back(Sub_422_set);
        all_compo_names.insert("Sub_422_set");

        Pty_422.add_element(Sub_422);
      }
      TrdLeg_1.add_element(Pty_422);
    }
    {
      xml_element TradeCapLegUndlyGrp_1{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_85{"Instrmt"};
        multiset<string> Instrmt_85_set;
        Instrmt_85.add_attribute("Sym", "UnderlyingLegSymbol_t_299231656"); // 3
        Instrmt_85_set.insert("UnderlyingLegSymbol_t_299231656");
        Instrmt_85.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_1080439401"); // 3
        Instrmt_85_set.insert("UnderlyingLegSymbolSfx_t_1080439401");
        Instrmt_85.add_attribute("ID", "UnderlyingLegSecurityID_t_2044414989"); // 3
        Instrmt_85_set.insert("UnderlyingLegSecurityID_t_2044414989");
        Instrmt_85.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1909648765"); // 3
        Instrmt_85_set.insert("UnderlyingLegSecurityIDSource_t_1909648765");
        Instrmt_85.add_attribute("CFI", "UnderlyingLegCFICode_t_869275068"); // 3
        Instrmt_85_set.insert("UnderlyingLegCFICode_t_869275068");
        Instrmt_85.add_attribute("SecType", "UnderlyingLegSecurityType_t_349522334"); // 3
        Instrmt_85_set.insert("UnderlyingLegSecurityType_t_349522334");
        Instrmt_85.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_62978243"); // 3
        Instrmt_85_set.insert("UnderlyingLegSecuritySubType_t_62978243");
        Instrmt_85.add_attribute("MMY", "1402283879"); // 3
        Instrmt_85_set.insert("1402283879");
        Instrmt_85.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_952695975"); // 3
        Instrmt_85_set.insert("UnderlyingLegMaturityDate_t_952695975");
        Instrmt_85.add_attribute("MatTm", "696463925"); // 3
        Instrmt_85_set.insert("696463925");
        Instrmt_85.add_attribute("StrkPx", "3212574.620000"); // 3
        Instrmt_85_set.insert("3212574.620000");
        Instrmt_85.add_attribute("OptAt", "378549126"); // 3
        Instrmt_85_set.insert("378549126");
        Instrmt_85.add_attribute("PutCall", "521377226"); // 3
        Instrmt_85_set.insert("521377226");
        Instrmt_85.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_603757092"); // 3
        Instrmt_85_set.insert("UnderlyingLegSecurityExchange_t_603757092");
        Instrmt_85.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_723196378"); // 3
        Instrmt_85_set.insert("UnderlyingLegSecurityDesc_t_723196378");
        all_values.push_back(Instrmt_85_set);
        all_compo_names.insert("Instrmt_85_set");

        {
          xml_element AID_88{"AID"};
          multiset<string> AID_88_set;
          AID_88.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_1585199651"); // 4
          AID_88_set.insert("UnderlyingLegSecurityAltID_t_1585199651");
          AID_88.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1913242048"); // 4
          AID_88_set.insert("UnderlyingLegSecurityAltIDSource_t_1913242048");
          all_values.push_back(AID_88_set);
          all_compo_names.insert("AID_88_set");

          Instrmt_85.add_element(AID_88);
        }
        TradeCapLegUndlyGrp_1.add_element(Instrmt_85);
      }
      TrdLeg_1.add_element(TradeCapLegUndlyGrp_1);
    }
    elt.add_element(TrdLeg_1);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_2{"TrdLeg"};
    multiset<string> TrdLeg_2_set;
    TrdLeg_2.add_attribute("Qty", "13139802.350000"); // 1
    TrdLeg_2_set.insert("13139802.350000");
    TrdLeg_2.add_attribute("SwapTyp", "4"); // 1
    TrdLeg_2_set.insert("4");
    TrdLeg_2.add_attribute("RptID", "LegReportID_t_1382723373"); // 1
    TrdLeg_2_set.insert("LegReportID_t_1382723373");
    TrdLeg_2.add_attribute("LegNo", "1808289929"); // 1
    TrdLeg_2_set.insert("1808289929");
    TrdLeg_2.add_attribute("PosEfct", "F"); // 1
    TrdLeg_2_set.insert("F");
    TrdLeg_2.add_attribute("Cover", "0"); // 1
    TrdLeg_2_set.insert("0");
    TrdLeg_2.add_attribute("RefID", "LegRefID_t_544955890"); // 1
    TrdLeg_2_set.insert("LegRefID_t_544955890");
    TrdLeg_2.add_attribute("SettlTyp", "3"); // 1
    TrdLeg_2_set.insert("3");
    TrdLeg_2.add_attribute("SettlDt", "LegSettlDate_t_42089294"); // 1
    TrdLeg_2_set.insert("LegSettlDate_t_42089294");
    TrdLeg_2.add_attribute("LastPx", "5662950.830000"); // 1
    TrdLeg_2_set.insert("5662950.830000");
    TrdLeg_2.add_attribute("SettlCcy", "USD"); // 1
    TrdLeg_2_set.insert("USD");
    TrdLeg_2.add_attribute("LegLastFwdPnts", "8636921.780000"); // 1
    TrdLeg_2_set.insert("8636921.780000");
    TrdLeg_2.add_attribute("LegCalcCcyLastQty", "11728440.970000"); // 1
    TrdLeg_2_set.insert("11728440.970000");
    TrdLeg_2.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_1240817872"); // 1
    TrdLeg_2_set.insert("LegGrossTradeAmt_t_1240817872");
    TrdLeg_2.add_attribute("LegVolatility", "19441315.790000"); // 1
    TrdLeg_2_set.insert("19441315.790000");
    TrdLeg_2.add_attribute("LegDividendYield", "10697754.380000"); // 1
    TrdLeg_2_set.insert("10697754.380000");
    TrdLeg_2.add_attribute("LegCurrencyRatio", "10029829.900000"); // 1
    TrdLeg_2_set.insert("10029829.900000");
    TrdLeg_2.add_attribute("LegExecInst", "7"); // 1
    TrdLeg_2_set.insert("7");
    TrdLeg_2.add_attribute("LastQty", "14192977.730000"); // 1
    TrdLeg_2_set.insert("14192977.730000");
    all_values.push_back(TrdLeg_2_set);
    all_compo_names.insert("TrdLeg_2_set");

    {
      xml_element Leg_99{"Leg"};
      multiset<string> Leg_99_set;
      Leg_99.add_attribute("Sym", "LegSymbol_t_1065961233"); // 2
      Leg_99_set.insert("LegSymbol_t_1065961233");
      Leg_99.add_attribute("Sfx", "CD"); // 2
      Leg_99_set.insert("CD");
      Leg_99.add_attribute("ID", "LegSecurityID_t_224510100"); // 2
      Leg_99_set.insert("LegSecurityID_t_224510100");
      Leg_99.add_attribute("Src", "B"); // 2
      Leg_99_set.insert("B");
      Leg_99.add_attribute("Prod", "2"); // 2
      Leg_99_set.insert("2");
      Leg_99.add_attribute("CFI", "LegCFICode_t_603059226"); // 2
      Leg_99_set.insert("LegCFICode_t_603059226");
      Leg_99.add_attribute("SecTyp", "SECLOAN"); // 2
      Leg_99_set.insert("SECLOAN");
      Leg_99.add_attribute("SecSubTyp", "LegSecuritySubType_t_845737784"); // 2
      Leg_99_set.insert("LegSecuritySubType_t_845737784");
      Leg_99.add_attribute("MMY", "1326255604"); // 2
      Leg_99_set.insert("1326255604");
      Leg_99.add_attribute("Mat", "LegMaturityDate_t_1721518388"); // 2
      Leg_99_set.insert("LegMaturityDate_t_1721518388");
      Leg_99.add_attribute("MatTm", "611496184"); // 2
      Leg_99_set.insert("611496184");
      Leg_99.add_attribute("CpnPmt", "LegCouponPaymentDate_t_492752191"); // 2
      Leg_99_set.insert("LegCouponPaymentDate_t_492752191");
      Leg_99.add_attribute("Issued", "LegIssueDate_t_1003054826"); // 2
      Leg_99_set.insert("LegIssueDate_t_1003054826");
      Leg_99.add_attribute("RepoCollSecTyp", "1994219558"); // 2
      Leg_99_set.insert("1994219558");
      Leg_99.add_attribute("RepoTrm", "153558472"); // 2
      Leg_99_set.insert("153558472");
      Leg_99.add_attribute("RepoRt", "18212132.860000"); // 2
      Leg_99_set.insert("18212132.860000");
      Leg_99.add_attribute("Fctr", "2643253.400000"); // 2
      Leg_99_set.insert("2643253.400000");
      Leg_99.add_attribute("CrdRtg", "LegCreditRating_t_698514363"); // 2
      Leg_99_set.insert("LegCreditRating_t_698514363");
      Leg_99.add_attribute("Rgstry", "LegInstrRegistry_t_1899409537"); // 2
      Leg_99_set.insert("LegInstrRegistry_t_1899409537");
      Leg_99.add_attribute("Ctry", "306414635"); // 2
      Leg_99_set.insert("306414635");
      Leg_99.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1264809446"); // 2
      Leg_99_set.insert("LegStateOrProvinceOfIssue_t_1264809446");
      Leg_99.add_attribute("Lcl", "LegLocaleOfIssue_t_1093717064"); // 2
      Leg_99_set.insert("LegLocaleOfIssue_t_1093717064");
      Leg_99.add_attribute("Redeem", "LegRedemptionDate_t_1248000851"); // 2
      Leg_99_set.insert("LegRedemptionDate_t_1248000851");
      Leg_99.add_attribute("Strk", "21285016.240000"); // 2
      Leg_99_set.insert("21285016.240000");
      Leg_99.add_attribute("StrkCcy", "EUR"); // 2
      Leg_99_set.insert("EUR");
      Leg_99.add_attribute("OptA", "1925149555"); // 2
      Leg_99_set.insert("1925149555");
      Leg_99.add_attribute("Cmult", "11888529.510000"); // 2
      Leg_99_set.insert("11888529.510000");
      Leg_99.add_attribute("MultTyp", "2"); // 2
      Leg_99_set.insert("2");
      Leg_99.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_99_set.insert("1");
      Leg_99.add_attribute("UOM", "Alw"); // 2
      Leg_99_set.insert("Alw");
      Leg_99.add_attribute("UOMQty", "2627956.510000"); // 2
      Leg_99_set.insert("2627956.510000");
      Leg_99.add_attribute("PxUOM", "lbs"); // 2
      Leg_99_set.insert("lbs");
      Leg_99.add_attribute("PxUOMQty", "6851771.760000"); // 2
      Leg_99_set.insert("6851771.760000");
      Leg_99.add_attribute("TmUnit", "D"); // 2
      Leg_99_set.insert("D");
      Leg_99.add_attribute("ExerStyle", "2"); // 2
      Leg_99_set.insert("2");
      Leg_99.add_attribute("CpnRt", "12882364.020000"); // 2
      Leg_99_set.insert("12882364.020000");
      Leg_99.add_attribute("Exch", "LegSecurityExchange_t_14055898"); // 2
      Leg_99_set.insert("LegSecurityExchange_t_14055898");
      Leg_99.add_attribute("Issr", "LegIssuer_t_1452030614"); // 2
      Leg_99_set.insert("LegIssuer_t_1452030614");
      Leg_99.add_attribute("EncLegIssrLen", "467008359"); // 2
      Leg_99_set.insert("467008359");
      Leg_99.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1735574287"); // 2
      Leg_99_set.insert("EncodedLegIssuer_t_1735574287");
      Leg_99.add_attribute("Desc", "LegSecurityDesc_t_2063526798"); // 2
      Leg_99_set.insert("LegSecurityDesc_t_2063526798");
      Leg_99.add_attribute("EncLegSecDescLen", "959760550"); // 2
      Leg_99_set.insert("959760550");
      Leg_99.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_591145465"); // 2
      Leg_99_set.insert("EncodedLegSecurityDesc_t_591145465");
      Leg_99.add_attribute("RatioQty", "19102627.080000"); // 2
      Leg_99_set.insert("19102627.080000");
      Leg_99.add_attribute("Side", "G"); // 2
      Leg_99_set.insert("G");
      Leg_99.add_attribute("Ccy", "EUR"); // 2
      Leg_99_set.insert("EUR");
      Leg_99.add_attribute("Pool", "LegPool_t_1811833386"); // 2
      Leg_99_set.insert("LegPool_t_1811833386");
      Leg_99.add_attribute("Dated", "LegDatedDate_t_16800992"); // 2
      Leg_99_set.insert("LegDatedDate_t_16800992");
      Leg_99.add_attribute("CSetMo", "333519036"); // 2
      Leg_99_set.insert("333519036");
      Leg_99.add_attribute("IntAcrl", "LegInterestAccrualDate_t_929159184"); // 2
      Leg_99_set.insert("LegInterestAccrualDate_t_929159184");
      Leg_99.add_attribute("PutCall", "1110518056"); // 2
      Leg_99_set.insert("1110518056");
      Leg_99.add_attribute("LegOptionRatio", "15815198.870000"); // 2
      Leg_99_set.insert("15815198.870000");
      Leg_99.add_attribute("Px", "9101771.610000"); // 2
      Leg_99_set.insert("9101771.610000");
      all_values.push_back(Leg_99_set);
      all_compo_names.insert("Leg_99_set");

      {
        xml_element LegAID_96{"LegAID"};
        multiset<string> LegAID_96_set;
        LegAID_96.add_attribute("SecAltID", "LegSecurityAltID_t_1229595569"); // 3
        LegAID_96_set.insert("LegSecurityAltID_t_1229595569");
        LegAID_96.add_attribute("SecAltIDSrc", "7"); // 3
        LegAID_96_set.insert("7");
        all_values.push_back(LegAID_96_set);
        all_compo_names.insert("LegAID_96_set");

        Leg_99.add_element(LegAID_96);
      }
      TrdLeg_2.add_element(Leg_99);
    }
    {
      xml_element Stip_185{"Stip"};
      multiset<string> Stip_185_set;
      Stip_185.add_attribute("StipTyp", "MPR"); // 2
      Stip_185_set.insert("MPR");
      Stip_185.add_attribute("StipVal", "LegStipulationValue_t_270964873"); // 2
      Stip_185_set.insert("LegStipulationValue_t_270964873");
      all_values.push_back(Stip_185_set);
      all_compo_names.insert("Stip_185_set");

      TrdLeg_2.add_element(Stip_185);
    }
    {
      xml_element Pty_423{"Pty"};
      multiset<string> Pty_423_set;
      Pty_423.add_attribute("ID", "NestedPartyID_t_1119689380"); // 2
      Pty_423_set.insert("NestedPartyID_t_1119689380");
      Pty_423.add_attribute("Src", "I"); // 2
      Pty_423_set.insert("I");
      Pty_423.add_attribute("R", "21"); // 2
      Pty_423_set.insert("21");
      all_values.push_back(Pty_423_set);
      all_compo_names.insert("Pty_423_set");

      {
        xml_element Sub_423{"Sub"};
        multiset<string> Sub_423_set;
        Sub_423.add_attribute("ID", "NestedPartySubID_t_1382485031"); // 3
        Sub_423_set.insert("NestedPartySubID_t_1382485031");
        Sub_423.add_attribute("Typ", "14"); // 3
        Sub_423_set.insert("14");
        all_values.push_back(Sub_423_set);
        all_compo_names.insert("Sub_423_set");

        Pty_423.add_element(Sub_423);
      }
      TrdLeg_2.add_element(Pty_423);
    }
    {
      xml_element TradeCapLegUndlyGrp_2{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_86{"Instrmt"};
        multiset<string> Instrmt_86_set;
        Instrmt_86.add_attribute("Sym", "UnderlyingLegSymbol_t_1416809126"); // 3
        Instrmt_86_set.insert("UnderlyingLegSymbol_t_1416809126");
        Instrmt_86.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_1260222192"); // 3
        Instrmt_86_set.insert("UnderlyingLegSymbolSfx_t_1260222192");
        Instrmt_86.add_attribute("ID", "UnderlyingLegSecurityID_t_2102036941"); // 3
        Instrmt_86_set.insert("UnderlyingLegSecurityID_t_2102036941");
        Instrmt_86.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_557561880"); // 3
        Instrmt_86_set.insert("UnderlyingLegSecurityIDSource_t_557561880");
        Instrmt_86.add_attribute("CFI", "UnderlyingLegCFICode_t_1274278091"); // 3
        Instrmt_86_set.insert("UnderlyingLegCFICode_t_1274278091");
        Instrmt_86.add_attribute("SecType", "UnderlyingLegSecurityType_t_1406583907"); // 3
        Instrmt_86_set.insert("UnderlyingLegSecurityType_t_1406583907");
        Instrmt_86.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_1024570239"); // 3
        Instrmt_86_set.insert("UnderlyingLegSecuritySubType_t_1024570239");
        Instrmt_86.add_attribute("MMY", "862368730"); // 3
        Instrmt_86_set.insert("862368730");
        Instrmt_86.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1322627058"); // 3
        Instrmt_86_set.insert("UnderlyingLegMaturityDate_t_1322627058");
        Instrmt_86.add_attribute("MatTm", "1984330790"); // 3
        Instrmt_86_set.insert("1984330790");
        Instrmt_86.add_attribute("StrkPx", "14535141.950000"); // 3
        Instrmt_86_set.insert("14535141.950000");
        Instrmt_86.add_attribute("OptAt", "1085406118"); // 3
        Instrmt_86_set.insert("1085406118");
        Instrmt_86.add_attribute("PutCall", "950166165"); // 3
        Instrmt_86_set.insert("950166165");
        Instrmt_86.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_1718389299"); // 3
        Instrmt_86_set.insert("UnderlyingLegSecurityExchange_t_1718389299");
        Instrmt_86.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_1112510519"); // 3
        Instrmt_86_set.insert("UnderlyingLegSecurityDesc_t_1112510519");
        all_values.push_back(Instrmt_86_set);
        all_compo_names.insert("Instrmt_86_set");

        {
          xml_element AID_89{"AID"};
          multiset<string> AID_89_set;
          AID_89.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_614515903"); // 4
          AID_89_set.insert("UnderlyingLegSecurityAltID_t_614515903");
          AID_89.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1735190291"); // 4
          AID_89_set.insert("UnderlyingLegSecurityAltIDSource_t_1735190291");
          all_values.push_back(AID_89_set);
          all_compo_names.insert("AID_89_set");

          Instrmt_86.add_element(AID_89);
        }
        TradeCapLegUndlyGrp_2.add_element(Instrmt_86);
      }
      TrdLeg_2.add_element(TradeCapLegUndlyGrp_2);
    }
    elt.add_element(TrdLeg_2);
  } // end TrdLeg
  { // TrdRegTS
    xml_element TrdRegTS_19{"TrdRegTS"};
    multiset<string> TrdRegTS_19_set;
    TrdRegTS_19.add_attribute("TS", "TrdRegTimestamp_t_1543675087"); // 1
    TrdRegTS_19_set.insert("TrdRegTimestamp_t_1543675087");
    TrdRegTS_19.add_attribute("Typ", "6"); // 1
    TrdRegTS_19_set.insert("6");
    TrdRegTS_19.add_attribute("Src", "TrdRegTimestampOrigin_t_880065794"); // 1
    TrdRegTS_19_set.insert("TrdRegTimestampOrigin_t_880065794");
    TrdRegTS_19.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_19_set.insert("T");
    TrdRegTS_19.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_19_set.insert("1");
    TrdRegTS_19.add_attribute("DskOrdHndlInst", "MOC"); // 1
    TrdRegTS_19_set.insert("MOC");
    all_values.push_back(TrdRegTS_19_set);
    all_compo_names.insert("TrdRegTS_19_set");

    elt.add_element(TrdRegTS_19);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_20{"TrdRegTS"};
    multiset<string> TrdRegTS_20_set;
    TrdRegTS_20.add_attribute("TS", "TrdRegTimestamp_t_994211669"); // 1
    TrdRegTS_20_set.insert("TrdRegTimestamp_t_994211669");
    TrdRegTS_20.add_attribute("Typ", "7"); // 1
    TrdRegTS_20_set.insert("7");
    TrdRegTS_20.add_attribute("Src", "TrdRegTimestampOrigin_t_1775126489"); // 1
    TrdRegTS_20_set.insert("TrdRegTimestampOrigin_t_1775126489");
    TrdRegTS_20.add_attribute("DskTyp", "IN"); // 1
    TrdRegTS_20_set.insert("IN");
    TrdRegTS_20.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_20_set.insert("1");
    TrdRegTS_20.add_attribute("DskOrdHndlInst", "LOO"); // 1
    TrdRegTS_20_set.insert("LOO");
    all_values.push_back(TrdRegTS_20_set);
    all_compo_names.insert("TrdRegTS_20_set");

    elt.add_element(TrdRegTS_20);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_21{"TrdRegTS"};
    multiset<string> TrdRegTS_21_set;
    TrdRegTS_21.add_attribute("TS", "TrdRegTimestamp_t_1473904108"); // 1
    TrdRegTS_21_set.insert("TrdRegTimestamp_t_1473904108");
    TrdRegTS_21.add_attribute("Typ", "3"); // 1
    TrdRegTS_21_set.insert("3");
    TrdRegTS_21.add_attribute("Src", "TrdRegTimestampOrigin_t_122866416"); // 1
    TrdRegTS_21_set.insert("TrdRegTimestampOrigin_t_122866416");
    TrdRegTS_21.add_attribute("DskTyp", "PT"); // 1
    TrdRegTS_21_set.insert("PT");
    TrdRegTS_21.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_21_set.insert("1");
    TrdRegTS_21.add_attribute("DskOrdHndlInst", "MAC"); // 1
    TrdRegTS_21_set.insert("MAC");
    all_values.push_back(TrdRegTS_21_set);
    all_compo_names.insert("TrdRegTS_21_set");

    elt.add_element(TrdRegTS_21);
  } // end TrdRegTS
  { // Amt
    xml_element Amt_17{"Amt"};
    multiset<string> Amt_17_set;
    Amt_17.add_attribute("Typ", "TVAR"); // 1
    Amt_17_set.insert("TVAR");
    Amt_17.add_attribute("Amt", "PosAmt_t_112029589"); // 1
    Amt_17_set.insert("PosAmt_t_112029589");
    Amt_17.add_attribute("Ccy", "PositionCurrency_t_2010184719"); // 1
    Amt_17_set.insert("PositionCurrency_t_2010184719");
    all_values.push_back(Amt_17_set);
    all_compo_names.insert("Amt_17_set");

    elt.add_element(Amt_17);
  } // end Amt
  { // RptSide
    xml_element RptSide_1{"RptSide"};
    multiset<string> RptSide_1_set;
    RptSide_1.add_attribute("Side", "A"); // 1
    RptSide_1_set.insert("A");
    RptSide_1.add_attribute("SideExecID", "SideExecID_t_948107189"); // 1
    RptSide_1_set.insert("SideExecID_t_948107189");
    RptSide_1.add_attribute("OrdDelay", "273920701"); // 1
    RptSide_1_set.insert("273920701");
    RptSide_1.add_attribute("OrdDelayUnit", "12"); // 1
    RptSide_1_set.insert("12");
    RptSide_1.add_attribute("Acct", "Account_t_2060617709"); // 1
    RptSide_1_set.insert("Account_t_2060617709");
    RptSide_1.add_attribute("AcctIDSrc", "3"); // 1
    RptSide_1_set.insert("3");
    RptSide_1.add_attribute("AcctTyp", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("ProcCode", "6"); // 1
    RptSide_1_set.insert("6");
    RptSide_1.add_attribute("OddLot", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("InptSrc", "TradeInputSource_t_1422380779"); // 1
    RptSide_1_set.insert("TradeInputSource_t_1422380779");
    RptSide_1.add_attribute("InptDev", "TradeInputDevice_t_91745763"); // 1
    RptSide_1_set.insert("TradeInputDevice_t_91745763");
    RptSide_1.add_attribute("ComplianceID", "ComplianceID_t_590996644"); // 1
    RptSide_1_set.insert("ComplianceID_t_590996644");
    RptSide_1.add_attribute("SolFlag", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("CustCpcty", "1"); // 1
    RptSide_1_set.insert("1");
    RptSide_1.add_attribute("SesID", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("SesSub", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("TmBkt", "TimeBracket_t_374825713"); // 1
    RptSide_1_set.insert("TimeBracket_t_374825713");
    RptSide_1.add_attribute("NetGrossInd", "2"); // 1
    RptSide_1_set.insert("2");
    RptSide_1.add_attribute("Ccy", "CHF"); // 1
    RptSide_1_set.insert("CHF");
    RptSide_1.add_attribute("SettlCcy", "CAN"); // 1
    RptSide_1_set.insert("CAN");
    RptSide_1.add_attribute("NumDaysInt", "1507820001"); // 1
    RptSide_1_set.insert("1507820001");
    RptSide_1.add_attribute("ExDt", "ExDate_t_170762522"); // 1
    RptSide_1_set.insert("ExDate_t_170762522");
    RptSide_1.add_attribute("AcrdIntRt", "5515484.160000"); // 1
    RptSide_1_set.insert("5515484.160000");
    RptSide_1.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_757480861"); // 1
    RptSide_1_set.insert("AccruedInterestAmt_t_757480861");
    RptSide_1.add_attribute("IntAtMat", "InterestAtMaturity_t_858320183"); // 1
    RptSide_1_set.insert("InterestAtMaturity_t_858320183");
    RptSide_1.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_38455810"); // 1
    RptSide_1_set.insert("EndAccruedInterestAmt_t_38455810");
    RptSide_1.add_attribute("StartCsh", "StartCash_t_869510450"); // 1
    RptSide_1_set.insert("StartCash_t_869510450");
    RptSide_1.add_attribute("EndCsh", "EndCash_t_721021254"); // 1
    RptSide_1_set.insert("EndCash_t_721021254");
    RptSide_1.add_attribute("Concession", "Concession_t_1509693994"); // 1
    RptSide_1_set.insert("Concession_t_1509693994");
    RptSide_1.add_attribute("TotTakedown", "TotalTakedown_t_287570587"); // 1
    RptSide_1_set.insert("TotalTakedown_t_287570587");
    RptSide_1.add_attribute("NetMny", "NetMoney_t_1669128444"); // 1
    RptSide_1_set.insert("NetMoney_t_1669128444");
    RptSide_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1783614695"); // 1
    RptSide_1_set.insert("SettlCurrAmt_t_1783614695");
    RptSide_1.add_attribute("SettlCurrFxRt", "14240200.230000"); // 1
    RptSide_1_set.insert("14240200.230000");
    RptSide_1.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    RptSide_1_set.insert("D");
    RptSide_1.add_attribute("PosEfct", "D"); // 1
    RptSide_1_set.insert("D");
    RptSide_1.add_attribute("MLegRptTyp", "2"); // 1
    RptSide_1_set.insert("2");
    RptSide_1.add_attribute("ExchRule", "ExchangeRule_t_793942473"); // 1
    RptSide_1_set.insert("ExchangeRule_t_793942473");
    RptSide_1.add_attribute("AllocInd", "0"); // 1
    RptSide_1_set.insert("0");
    RptSide_1.add_attribute("PreallocMeth", "0"); // 1
    RptSide_1_set.insert("0");
    RptSide_1.add_attribute("AllocID", "AllocID_t_885688236"); // 1
    RptSide_1_set.insert("AllocID_t_885688236");
    RptSide_1.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_1400192338"); // 1
    RptSide_1_set.insert("SideGrossTradeAmt_t_1400192338");
    RptSide_1.add_attribute("AgrsrInd", "N"); // 1
    RptSide_1_set.insert("N");
    RptSide_1.add_attribute("SideQty", "1632871108"); // 1
    RptSide_1_set.insert("1632871108");
    RptSide_1.add_attribute("RptID", "SideTradeReportID_t_837917003"); // 1
    RptSide_1_set.insert("SideTradeReportID_t_837917003");
    RptSide_1.add_attribute("FillStationCd", "SideFillStationCd_t_1732325883"); // 1
    RptSide_1_set.insert("SideFillStationCd_t_1732325883");
    RptSide_1.add_attribute("RsnCD", "SideReasonCd_t_2007696821"); // 1
    RptSide_1_set.insert("SideReasonCd_t_2007696821");
    RptSide_1.add_attribute("RptSeq", "253801664"); // 1
    RptSide_1_set.insert("253801664");
    RptSide_1.add_attribute("TrdSubTyp", "24"); // 1
    RptSide_1_set.insert("24");
    RptSide_1.add_attribute("OrdCat", "1"); // 1
    RptSide_1_set.insert("1");
    all_values.push_back(RptSide_1_set);
    all_compo_names.insert("RptSide_1_set");

    {
      xml_element Pty_424{"Pty"};
      multiset<string> Pty_424_set;
      Pty_424.add_attribute("ID", "PartyID_t_1143590433"); // 2
      Pty_424_set.insert("PartyID_t_1143590433");
      Pty_424.add_attribute("Src", "F"); // 2
      Pty_424_set.insert("F");
      Pty_424.add_attribute("R", "5"); // 2
      Pty_424_set.insert("5");
      all_values.push_back(Pty_424_set);
      all_compo_names.insert("Pty_424_set");

      {
        xml_element Sub_424{"Sub"};
        multiset<string> Sub_424_set;
        Sub_424.add_attribute("ID", "PartySubID_t_1314352956"); // 3
        Sub_424_set.insert("PartySubID_t_1314352956");
        Sub_424.add_attribute("Typ", "4"); // 3
        Sub_424_set.insert("4");
        all_values.push_back(Sub_424_set);
        all_compo_names.insert("Sub_424_set");

        Pty_424.add_element(Sub_424);
      }
      RptSide_1.add_element(Pty_424);
    }
    {
      xml_element ClrInst_5{"ClrInst"};
      multiset<string> ClrInst_5_set;
      ClrInst_5.add_attribute("ClrngInstrctn", "1"); // 2
      ClrInst_5_set.insert("1");
      all_values.push_back(ClrInst_5_set);
      all_compo_names.insert("ClrInst_5_set");

      RptSide_1.add_element(ClrInst_5);
    }
    {
      xml_element Comm_19{"Comm"};
      multiset<string> Comm_19_set;
      Comm_19.add_attribute("Comm", "Commission_t_25189491"); // 2
      Comm_19_set.insert("Commission_t_25189491");
      Comm_19.add_attribute("CommTyp", "5"); // 2
      Comm_19_set.insert("5");
      Comm_19.add_attribute("Ccy", "JPY"); // 2
      Comm_19_set.insert("JPY");
      Comm_19.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_19_set.insert("N");
      all_values.push_back(Comm_19_set);
      all_compo_names.insert("Comm_19_set");

      RptSide_1.add_element(Comm_19);
    }
    {
      xml_element ContAmt_2{"ContAmt"};
      multiset<string> ContAmt_2_set;
      ContAmt_2.add_attribute("ContAmtTyp", "3"); // 2
      ContAmt_2_set.insert("3");
      ContAmt_2.add_attribute("ContAmtValu", "2678555.420000"); // 2
      ContAmt_2_set.insert("2678555.420000");
      ContAmt_2.add_attribute("ContAmtCurr", "GBP"); // 2
      ContAmt_2_set.insert("GBP");
      all_values.push_back(ContAmt_2_set);
      all_compo_names.insert("ContAmt_2_set");

      RptSide_1.add_element(ContAmt_2);
    }
    {
      xml_element Stip_186{"Stip"};
      multiset<string> Stip_186_set;
      Stip_186.add_attribute("Typ", "SECTYPE"); // 2
      Stip_186_set.insert("SECTYPE");
      Stip_186.add_attribute("Val", "StipulationValue_t_1676435458"); // 2
      Stip_186_set.insert("StipulationValue_t_1676435458");
      all_values.push_back(Stip_186_set);
      all_compo_names.insert("Stip_186_set");

      RptSide_1.add_element(Stip_186);
    }
    {
      xml_element MiscFees_15{"MiscFees"};
      multiset<string> MiscFees_15_set;
      MiscFees_15.add_attribute("Amt", "MiscFeeAmt_t_1797293841"); // 2
      MiscFees_15_set.insert("MiscFeeAmt_t_1797293841");
      MiscFees_15.add_attribute("Curr", "GBP"); // 2
      MiscFees_15_set.insert("GBP");
      MiscFees_15.add_attribute("Typ", "6"); // 2
      MiscFees_15_set.insert("6");
      MiscFees_15.add_attribute("Basis", "1"); // 2
      MiscFees_15_set.insert("1");
      all_values.push_back(MiscFees_15_set);
      all_compo_names.insert("MiscFees_15_set");

      RptSide_1.add_element(MiscFees_15);
    }
    {
      xml_element SettlDetails_3{"SettlDetails"};
      multiset<string> SettlDetails_3_set;
      SettlDetails_3.add_attribute("SettlSrc", "2"); // 2
      SettlDetails_3_set.insert("2");
      all_values.push_back(SettlDetails_3_set);
      all_compo_names.insert("SettlDetails_3_set");

      {
        xml_element Pty_425{"Pty"};
        multiset<string> Pty_425_set;
        Pty_425.add_attribute("ID", "SettlPartyID_t_1551190415"); // 3
        Pty_425_set.insert("SettlPartyID_t_1551190415");
        Pty_425.add_attribute("Src", "A"); // 3
        Pty_425_set.insert("A");
        Pty_425.add_attribute("R", "72"); // 3
        Pty_425_set.insert("72");
        all_values.push_back(Pty_425_set);
        all_compo_names.insert("Pty_425_set");

        {
          xml_element Sub_425{"Sub"};
          multiset<string> Sub_425_set;
          Sub_425.add_attribute("ID", "SettlPartySubID_t_1136032650"); // 4
          Sub_425_set.insert("SettlPartySubID_t_1136032650");
          Sub_425.add_attribute("Typ", "6"); // 4
          Sub_425_set.insert("6");
          all_values.push_back(Sub_425_set);
          all_compo_names.insert("Sub_425_set");

          Pty_425.add_element(Sub_425);
        }
        SettlDetails_3.add_element(Pty_425);
      }
      RptSide_1.add_element(SettlDetails_3);
    }
    {
      xml_element Alloc_5{"Alloc"};
      multiset<string> Alloc_5_set;
      Alloc_5.add_attribute("Acct", "AllocAccount_t_682574863"); // 2
      Alloc_5_set.insert("AllocAccount_t_682574863");
      Alloc_5.add_attribute("ActIDSrc", "4"); // 2
      Alloc_5_set.insert("4");
      Alloc_5.add_attribute("AllocSettlCcy", "JPY"); // 2
      Alloc_5_set.insert("JPY");
      Alloc_5.add_attribute("IndAllocID", "IndividualAllocID_t_26382117"); // 2
      Alloc_5_set.insert("IndividualAllocID_t_26382117");
      Alloc_5.add_attribute("Qty", "4310519.650000"); // 2
      Alloc_5_set.insert("4310519.650000");
      Alloc_5.add_attribute("CustCpcty", "AllocCustomerCapacity_t_993034604"); // 2
      Alloc_5_set.insert("AllocCustomerCapacity_t_993034604");
      Alloc_5.add_attribute("Meth", "3"); // 2
      Alloc_5_set.insert("3");
      Alloc_5.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1794035938"); // 2
      Alloc_5_set.insert("SecondaryIndividualAllocID_t_1794035938");
      Alloc_5.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_1018224096"); // 2
      Alloc_5_set.insert("AllocClearingFeeIndicator_t_1018224096");
      all_values.push_back(Alloc_5_set);
      all_compo_names.insert("Alloc_5_set");

      {
        xml_element Pty_426{"Pty"};
        multiset<string> Pty_426_set;
        Pty_426.add_attribute("ID", "Nested2PartyID_t_11839"); // 3
        Pty_426_set.insert("Nested2PartyID_t_11839");
        Pty_426.add_attribute("Src", "3"); // 3
        Pty_426_set.insert("3");
        Pty_426.add_attribute("R", "40"); // 3
        Pty_426_set.insert("40");
        all_values.push_back(Pty_426_set);
        all_compo_names.insert("Pty_426_set");

        {
          xml_element Sub_426{"Sub"};
          multiset<string> Sub_426_set;
          Sub_426.add_attribute("ID", "Nested2PartySubID_t_1515748599"); // 4
          Sub_426_set.insert("Nested2PartySubID_t_1515748599");
          Sub_426.add_attribute("Typ", "27"); // 4
          Sub_426_set.insert("27");
          all_values.push_back(Sub_426_set);
          all_compo_names.insert("Sub_426_set");

          Pty_426.add_element(Sub_426);
        }
        Alloc_5.add_element(Pty_426);
      }
      RptSide_1.add_element(Alloc_5);
    }
    {
      xml_element TrdRptOrdDetl_1{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_1_set;
      TrdRptOrdDetl_1.add_attribute("OrdID", "OrderID_t_2032290384"); // 2
      TrdRptOrdDetl_1_set.insert("OrderID_t_2032290384");
      TrdRptOrdDetl_1.add_attribute("OrdID2", "SecondaryOrderID_t_520132758"); // 2
      TrdRptOrdDetl_1_set.insert("SecondaryOrderID_t_520132758");
      TrdRptOrdDetl_1.add_attribute("ClOrdID", "ClOrdID_t_1900745815"); // 2
      TrdRptOrdDetl_1_set.insert("ClOrdID_t_1900745815");
      TrdRptOrdDetl_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1734924783"); // 2
      TrdRptOrdDetl_1_set.insert("SecondaryClOrdID_t_1734924783");
      TrdRptOrdDetl_1.add_attribute("ListID", "ListID_t_49084568"); // 2
      TrdRptOrdDetl_1_set.insert("ListID_t_49084568");
      TrdRptOrdDetl_1.add_attribute("RefOrdID", "RefOrderID_t_1550556009"); // 2
      TrdRptOrdDetl_1_set.insert("RefOrderID_t_1550556009");
      TrdRptOrdDetl_1.add_attribute("RefOrdIDSrc", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("RefOrdIDRsn", "1"); // 2
      TrdRptOrdDetl_1_set.insert("1");
      TrdRptOrdDetl_1.add_attribute("OrdTyp", "6"); // 2
      TrdRptOrdDetl_1_set.insert("6");
      TrdRptOrdDetl_1.add_attribute("Px", "14662831.160000"); // 2
      TrdRptOrdDetl_1_set.insert("14662831.160000");
      TrdRptOrdDetl_1.add_attribute("StopPx", "21255719.150000"); // 2
      TrdRptOrdDetl_1_set.insert("21255719.150000");
      TrdRptOrdDetl_1.add_attribute("ExecInst", "F"); // 2
      TrdRptOrdDetl_1_set.insert("F");
      TrdRptOrdDetl_1.add_attribute("OrdStat", "E"); // 2
      TrdRptOrdDetl_1_set.insert("E");
      TrdRptOrdDetl_1.add_attribute("LeavesQty", "4068614.660000"); // 2
      TrdRptOrdDetl_1_set.insert("4068614.660000");
      TrdRptOrdDetl_1.add_attribute("CumQty", "10156952.070000"); // 2
      TrdRptOrdDetl_1_set.insert("10156952.070000");
      TrdRptOrdDetl_1.add_attribute("TmInForce", "1"); // 2
      TrdRptOrdDetl_1_set.insert("1");
      TrdRptOrdDetl_1.add_attribute("ExpireTm", "ExpireTime_t_1089436329"); // 2
      TrdRptOrdDetl_1_set.insert("ExpireTime_t_1089436329");
      TrdRptOrdDetl_1.add_attribute("Cpcty", "A"); // 2
      TrdRptOrdDetl_1_set.insert("A");
      TrdRptOrdDetl_1.add_attribute("Rstctions", "5"); // 2
      TrdRptOrdDetl_1_set.insert("5");
      TrdRptOrdDetl_1.add_attribute("BkngTyp", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("OrigCustOrdCpcty", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("OrdInptDev", "OrderInputDevice_t_1170918600"); // 2
      TrdRptOrdDetl_1_set.insert("OrderInputDevice_t_1170918600");
      TrdRptOrdDetl_1.add_attribute("LotTyp", "3"); // 2
      TrdRptOrdDetl_1_set.insert("3");
      TrdRptOrdDetl_1.add_attribute("TransBkdTm", "TransBkdTime_t_1646389974"); // 2
      TrdRptOrdDetl_1_set.insert("TransBkdTime_t_1646389974");
      TrdRptOrdDetl_1.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_817470890"); // 2
      TrdRptOrdDetl_1_set.insert("OrigOrdModTime_t_817470890");
      all_values.push_back(TrdRptOrdDetl_1_set);
      all_compo_names.insert("TrdRptOrdDetl_1_set");

      {
        xml_element OrdQty_25{"OrdQty"};
        multiset<string> OrdQty_25_set;
        OrdQty_25.add_attribute("Qty", "6318930.300000"); // 3
        OrdQty_25_set.insert("6318930.300000");
        OrdQty_25.add_attribute("Cash", "16464018.130000"); // 3
        OrdQty_25_set.insert("16464018.130000");
        OrdQty_25.add_attribute("Pct", "5490339.560000"); // 3
        OrdQty_25_set.insert("5490339.560000");
        OrdQty_25.add_attribute("RndDir", "2"); // 3
        OrdQty_25_set.insert("2");
        OrdQty_25.add_attribute("RndMod", "10146667.640000"); // 3
        OrdQty_25_set.insert("10146667.640000");
        all_values.push_back(OrdQty_25_set);
        all_compo_names.insert("OrdQty_25_set");

        TrdRptOrdDetl_1.add_element(OrdQty_25);
      }
      {
        xml_element DsplyInstr_9{"DsplyInstr"};
        multiset<string> DsplyInstr_9_set;
        DsplyInstr_9.add_attribute("DisplayQty", "6531783.850000"); // 3
        DsplyInstr_9_set.insert("6531783.850000");
        DsplyInstr_9.add_attribute("SecDspQty", "1336509.600000"); // 3
        DsplyInstr_9_set.insert("1336509.600000");
        DsplyInstr_9.add_attribute("DspWhn", "1"); // 3
        DsplyInstr_9_set.insert("1");
        DsplyInstr_9.add_attribute("DspMthd", "2"); // 3
        DsplyInstr_9_set.insert("2");
        DsplyInstr_9.add_attribute("DsplLwQty", "18685757.430000"); // 3
        DsplyInstr_9_set.insert("18685757.430000");
        DsplyInstr_9.add_attribute("DisplayHighQty", "15838840.900000"); // 3
        DsplyInstr_9_set.insert("15838840.900000");
        DsplyInstr_9.add_attribute("DspMinIncr", "19569965.620000"); // 3
        DsplyInstr_9_set.insert("19569965.620000");
        DsplyInstr_9.add_attribute("RfrshQty", "19525937.500000"); // 3
        DsplyInstr_9_set.insert("19525937.500000");
        all_values.push_back(DsplyInstr_9_set);
        all_compo_names.insert("DsplyInstr_9_set");

        TrdRptOrdDetl_1.add_element(DsplyInstr_9);
      }
      RptSide_1.add_element(TrdRptOrdDetl_1);
    }
    {
      xml_element TrdRegTS_22{"TrdRegTS"};
      multiset<string> TrdRegTS_22_set;
      TrdRegTS_22.add_attribute("TS", "SideTrdRegTimestamp_t_1971116162"); // 2
      TrdRegTS_22_set.insert("SideTrdRegTimestamp_t_1971116162");
      TrdRegTS_22.add_attribute("Typ", "3"); // 2
      TrdRegTS_22_set.insert("3");
      TrdRegTS_22.add_attribute("Src", "SideTrdRegTimestampSrc_t_1271393219"); // 2
      TrdRegTS_22_set.insert("SideTrdRegTimestampSrc_t_1271393219");
      all_values.push_back(TrdRegTS_22_set);
      all_compo_names.insert("TrdRegTS_22_set");

      RptSide_1.add_element(TrdRegTS_22);
    }
    elt.add_element(RptSide_1);
  } // end RptSide
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
