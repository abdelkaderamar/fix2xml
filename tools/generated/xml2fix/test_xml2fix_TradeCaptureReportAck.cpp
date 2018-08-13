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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportAck_message_t_0;
  elt.add_attribute("RptID", "TradeReportID_t_1186252259"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeReportID_t_1186252259");
  elt.add_attribute("TrdID", "TradeID_t_2068420059"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeID_t_2068420059");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1953716873"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeID_t_1953716873");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_582423634"); // 0
  TradeCaptureReportAck_message_t_0.insert("FirmTradeID_t_582423634");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1589272723"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryFirmTradeID_t_1589272723");
  elt.add_attribute("TransTyp", "4"); // 0
  TradeCaptureReportAck_message_t_0.insert("4");
  elt.add_attribute("RptTyp", "3"); // 0
  TradeCaptureReportAck_message_t_0.insert("3");
  elt.add_attribute("TrdTyp", "8"); // 0
  TradeCaptureReportAck_message_t_0.insert("8");
  elt.add_attribute("TrdSubTyp", "29"); // 0
  TradeCaptureReportAck_message_t_0.insert("29");
  elt.add_attribute("TrdTyp2", "32"); // 0
  TradeCaptureReportAck_message_t_0.insert("32");
  elt.add_attribute("TrdHandlInst", "3"); // 0
  TradeCaptureReportAck_message_t_0.insert("3");
  elt.add_attribute("OrigTrdHandlInst", "5"); // 0
  TradeCaptureReportAck_message_t_0.insert("5");
  elt.add_attribute("OrigTrdDt", "OrigTradeDate_t_1152964657"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigTradeDate_t_1152964657");
  elt.add_attribute("OrigTrdID", "OrigTradeID_t_1175412304"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigTradeID_t_1175412304");
  elt.add_attribute("OrignTrdID2", "OrigSecondaryTradeID_t_1914587895"); // 0
  TradeCaptureReportAck_message_t_0.insert("OrigSecondaryTradeID_t_1914587895");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1715231376"); // 0
  TradeCaptureReportAck_message_t_0.insert("TransferReason_t_1715231376");
  elt.add_attribute("ExecTyp", "6"); // 0
  TradeCaptureReportAck_message_t_0.insert("6");
  elt.add_attribute("RptRefID", "TradeReportRefID_t_1044920130"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeReportRefID_t_1044920130");
  elt.add_attribute("RptRefID2", "SecondaryTradeReportRefID_t_246407203"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeReportRefID_t_246407203");
  elt.add_attribute("TrdRptStat", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RejRsn", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_428525009"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryTradeReportID_t_428525009");
  elt.add_attribute("SubReqTyp", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("LinkID", "TradeLinkID_t_850517409"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeLinkID_t_850517409");
  elt.add_attribute("MtchID", "TrdMatchID_t_2002422282"); // 0
  TradeCaptureReportAck_message_t_0.insert("TrdMatchID_t_2002422282");
  elt.add_attribute("ExecID", "ExecID_t_1580888433"); // 0
  TradeCaptureReportAck_message_t_0.insert("ExecID_t_1580888433");
  elt.add_attribute("ExecID2", "SecondaryExecID_t_660313700"); // 0
  TradeCaptureReportAck_message_t_0.insert("SecondaryExecID_t_660313700");
  elt.add_attribute("ExecRstmtRsn", "2"); // 0
  TradeCaptureReportAck_message_t_0.insert("2");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  TradeCaptureReportAck_message_t_0.insert("N");
  elt.add_attribute("PxTyp", "4"); // 0
  TradeCaptureReportAck_message_t_0.insert("4");
  elt.add_attribute("UndSesID", "UnderlyingTradingSessionID_t_1566281224"); // 0
  TradeCaptureReportAck_message_t_0.insert("UnderlyingTradingSessionID_t_1566281224");
  elt.add_attribute("UndSesSub", "UnderlyingTradingSessionSubID_t_1448406813"); // 0
  TradeCaptureReportAck_message_t_0.insert("UnderlyingTradingSessionSubID_t_1448406813");
  elt.add_attribute("SetSesID", "RTH"); // 0
  TradeCaptureReportAck_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1372514449"); // 0
  TradeCaptureReportAck_message_t_0.insert("SettlSessSubID_t_1372514449");
  elt.add_attribute("QtyTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("LastQty", "18276695.240000"); // 0
  TradeCaptureReportAck_message_t_0.insert("18276695.240000");
  elt.add_attribute("LastPx", "2101859.250000"); // 0
  TradeCaptureReportAck_message_t_0.insert("2101859.250000");
  elt.add_attribute("VenuTyp", "X"); // 0
  TradeCaptureReportAck_message_t_0.insert("X");
  elt.add_attribute("MktSegID", "MarketSegmentID_t_871140816"); // 0
  TradeCaptureReportAck_message_t_0.insert("MarketSegmentID_t_871140816");
  elt.add_attribute("MktID", "MarketID_t_1649451609"); // 0
  TradeCaptureReportAck_message_t_0.insert("MarketID_t_1649451609");
  elt.add_attribute("LastParPx", "6718134.750000"); // 0
  TradeCaptureReportAck_message_t_0.insert("6718134.750000");
  elt.add_attribute("CalcCcyLastQty", "2295219.790000"); // 0
  TradeCaptureReportAck_message_t_0.insert("2295219.790000");
  elt.add_attribute("LastSwapPnts", "4045721.460000"); // 0
  TradeCaptureReportAck_message_t_0.insert("4045721.460000");
  elt.add_attribute("Ccy", "USD"); // 0
  TradeCaptureReportAck_message_t_0.insert("USD");
  elt.add_attribute("SettlCcy", "GBP"); // 0
  TradeCaptureReportAck_message_t_0.insert("GBP");
  elt.add_attribute("LastSpotRt", "9268858.000000"); // 0
  TradeCaptureReportAck_message_t_0.insert("9268858.000000");
  elt.add_attribute("LastFwdPnts", "12165965.230000"); // 0
  TradeCaptureReportAck_message_t_0.insert("12165965.230000");
  elt.add_attribute("LastMkt", "LastMkt_t_1638933064"); // 0
  TradeCaptureReportAck_message_t_0.insert("LastMkt_t_1638933064");
  elt.add_attribute("TrdDt", "TradeDate_t_1346152201"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeDate_t_1346152201");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1519445929"); // 0
  TradeCaptureReportAck_message_t_0.insert("ClearingBusinessDate_t_1519445929");
  elt.add_attribute("AvgPx", "20674580.730000"); // 0
  TradeCaptureReportAck_message_t_0.insert("20674580.730000");
  elt.add_attribute("AvgPxInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("TrdLegRefID", "TradeLegRefID_t_1922396707"); // 0
  TradeCaptureReportAck_message_t_0.insert("TradeLegRefID_t_1922396707");
  elt.add_attribute("TxnTm", "TransactTime_t_1959849550"); // 0
  TradeCaptureReportAck_message_t_0.insert("TransactTime_t_1959849550");
  elt.add_attribute("SettlTyp", "B"); // 0
  TradeCaptureReportAck_message_t_0.insert("B");
  elt.add_attribute("MtchStat", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("MtchTyp", "M2"); // 0
  TradeCaptureReportAck_message_t_0.insert("M2");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  TradeCaptureReportAck_message_t_0.insert("false");
  elt.add_attribute("PubTrdInd", "N"); // 0
  TradeCaptureReportAck_message_t_0.insert("N");
  elt.add_attribute("TrdPubInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("ShrtSaleRsn", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_1406274070"); // 0
  TradeCaptureReportAck_message_t_0.insert("ResponseDestination_t_1406274070");
  elt.add_attribute("Txt", "Text_t_1118836458"); // 0
  TradeCaptureReportAck_message_t_0.insert("Text_t_1118836458");
  elt.add_attribute("EncTxtLen", "539847351"); // 0
  TradeCaptureReportAck_message_t_0.insert("539847351");
  elt.add_attribute("EncTxt", "EncodedText_t_1682027289"); // 0
  TradeCaptureReportAck_message_t_0.insert("EncodedText_t_1682027289");
  elt.add_attribute("AsOfInd", "0"); // 0
  TradeCaptureReportAck_message_t_0.insert("0");
  elt.add_attribute("ClrFeeInd", "1"); // 0
  TradeCaptureReportAck_message_t_0.insert("1");
  elt.add_attribute("TierCD", "TierCode_t_206357116"); // 0
  TradeCaptureReportAck_message_t_0.insert("TierCode_t_206357116");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_72015606"); // 0
  TradeCaptureReportAck_message_t_0.insert("MessageEventSource_t_72015606");
  elt.add_attribute("LastUpdateTm", "LastUpdateTime_t_446387458"); // 0
  TradeCaptureReportAck_message_t_0.insert("LastUpdateTime_t_446387458");
  elt.add_attribute("RndPx", "20311352.490000"); // 0
  TradeCaptureReportAck_message_t_0.insert("20311352.490000");
  elt.add_attribute("RptSys", "RptSys_t_1476949890"); // 0
  TradeCaptureReportAck_message_t_0.insert("RptSys_t_1476949890");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_618063852"); // 0
  TradeCaptureReportAck_message_t_0.insert("GrossTradeAmt_t_618063852");
  elt.add_attribute("SettlDt", "SettlDate_t_1276177461"); // 0
  TradeCaptureReportAck_message_t_0.insert("SettlDate_t_1276177461");
  elt.add_attribute("FeeMult", "2563520.420000"); // 0
  TradeCaptureReportAck_message_t_0.insert("2563520.420000");
  all_values.push_back(TradeCaptureReportAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportAck_message_t");

  { // Hdr
    xml_element Hdr_97{"Hdr"};
    multiset<string> Hdr_97_set;
    Hdr_97.add_attribute("SeqNum", "1834660375"); // 1
    Hdr_97_set.insert("1834660375");
    Hdr_97.add_attribute("SID", "SenderCompID_t_767626877"); // 1
    Hdr_97_set.insert("SenderCompID_t_767626877");
    Hdr_97.add_attribute("TID", "TargetCompID_t_1602504243"); // 1
    Hdr_97_set.insert("TargetCompID_t_1602504243");
    Hdr_97.add_attribute("OBID", "OnBehalfOfCompID_t_1206622657"); // 1
    Hdr_97_set.insert("OnBehalfOfCompID_t_1206622657");
    Hdr_97.add_attribute("D2ID", "DeliverToCompID_t_687601302"); // 1
    Hdr_97_set.insert("DeliverToCompID_t_687601302");
    Hdr_97.add_attribute("SSub", "SenderSubID_t_1981465360"); // 1
    Hdr_97_set.insert("SenderSubID_t_1981465360");
    Hdr_97.add_attribute("SLoc", "SenderLocationID_t_1429102348"); // 1
    Hdr_97_set.insert("SenderLocationID_t_1429102348");
    Hdr_97.add_attribute("TSub", "TargetSubID_t_462514362"); // 1
    Hdr_97_set.insert("TargetSubID_t_462514362");
    Hdr_97.add_attribute("TLoc", "TargetLocationID_t_1793831263"); // 1
    Hdr_97_set.insert("TargetLocationID_t_1793831263");
    Hdr_97.add_attribute("OBSub", "OnBehalfOfSubID_t_164412091"); // 1
    Hdr_97_set.insert("OnBehalfOfSubID_t_164412091");
    Hdr_97.add_attribute("OBLoc", "OnBehalfOfLocationID_t_863762"); // 1
    Hdr_97_set.insert("OnBehalfOfLocationID_t_863762");
    Hdr_97.add_attribute("D2Sub", "DeliverToSubID_t_1868351720"); // 1
    Hdr_97_set.insert("DeliverToSubID_t_1868351720");
    Hdr_97.add_attribute("D2Loc", "DeliverToLocationID_t_1364665872"); // 1
    Hdr_97_set.insert("DeliverToLocationID_t_1364665872");
    Hdr_97.add_attribute("PosDup", "N"); // 1
    Hdr_97_set.insert("N");
    Hdr_97.add_attribute("PosRsnd", "N"); // 1
    Hdr_97_set.insert("N");
    Hdr_97.add_attribute("Snt", "SendingTime_t_655832806"); // 1
    Hdr_97_set.insert("SendingTime_t_655832806");
    Hdr_97.add_attribute("OrigSnt", "OrigSendingTime_t_1435155812"); // 1
    Hdr_97_set.insert("OrigSendingTime_t_1435155812");
    Hdr_97.add_attribute("MsgEncd", "MessageEncoding_t_502585764"); // 1
    Hdr_97_set.insert("MessageEncoding_t_502585764");
    all_values.push_back(Hdr_97_set);
    all_compo_names.insert("Hdr_97_set");

    {
      xml_element Hop_97{"Hop"};
      multiset<string> Hop_97_set;
      Hop_97.add_attribute("ID", "HopCompID_t_1774669265"); // 2
      Hop_97_set.insert("HopCompID_t_1774669265");
      Hop_97.add_attribute("Ref", "1975003164"); // 2
      Hop_97_set.insert("1975003164");
      Hop_97.add_attribute("Snt", "HopSendingTime_t_37129405"); // 2
      Hop_97_set.insert("HopSendingTime_t_37129405");
      all_values.push_back(Hop_97_set);
      all_compo_names.insert("Hop_97_set");

      Hdr_97.add_element(Hop_97);
    }
    elt.add_element(Hdr_97);
  } // end Hdr
  { // Pty
    xml_element Pty_444{"Pty"};
    multiset<string> Pty_444_set;
    Pty_444.add_attribute("ID", "RootPartyID_t_2016818476"); // 1
    Pty_444_set.insert("RootPartyID_t_2016818476");
    Pty_444.add_attribute("Src", "1"); // 1
    Pty_444_set.insert("1");
    Pty_444.add_attribute("R", "71"); // 1
    Pty_444_set.insert("71");
    all_values.push_back(Pty_444_set);
    all_compo_names.insert("Pty_444_set");

    {
      xml_element Sub_444{"Sub"};
      multiset<string> Sub_444_set;
      Sub_444.add_attribute("ID", "RootPartySubID_t_315722287"); // 2
      Sub_444_set.insert("RootPartySubID_t_315722287");
      Sub_444.add_attribute("Typ", "21"); // 2
      Sub_444_set.insert("21");
      all_values.push_back(Sub_444_set);
      all_compo_names.insert("Sub_444_set");

      Pty_444.add_element(Sub_444);
    }
    elt.add_element(Pty_444);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_90{"Instrmt"};
    multiset<string> Instrmt_90_set;
    Instrmt_90.add_attribute("Sym", "Symbol_t_1018644739"); // 1
    Instrmt_90_set.insert("Symbol_t_1018644739");
    Instrmt_90.add_attribute("Sfx", "WI"); // 1
    Instrmt_90_set.insert("WI");
    Instrmt_90.add_attribute("ID", "SecurityID_t_1403315584"); // 1
    Instrmt_90_set.insert("SecurityID_t_1403315584");
    Instrmt_90.add_attribute("Src", "4"); // 1
    Instrmt_90_set.insert("4");
    Instrmt_90.add_attribute("Prod", "13"); // 1
    Instrmt_90_set.insert("13");
    Instrmt_90.add_attribute("ProdCmplx", "ProductComplex_t_23458814"); // 1
    Instrmt_90_set.insert("ProductComplex_t_23458814");
    Instrmt_90.add_attribute("SecGrp", "SecurityGroup_t_730017376"); // 1
    Instrmt_90_set.insert("SecurityGroup_t_730017376");
    Instrmt_90.add_attribute("CFI", "CFICode_t_1827585523"); // 1
    Instrmt_90_set.insert("CFICode_t_1827585523");
    Instrmt_90.add_attribute("SecTyp", "DN"); // 1
    Instrmt_90_set.insert("DN");
    Instrmt_90.add_attribute("SubTyp", "SecuritySubType_t_563999089"); // 1
    Instrmt_90_set.insert("SecuritySubType_t_563999089");
    Instrmt_90.add_attribute("MMY", "1109204223"); // 1
    Instrmt_90_set.insert("1109204223");
    Instrmt_90.add_attribute("MatDt", "MaturityDate_t_1173574478"); // 1
    Instrmt_90_set.insert("MaturityDate_t_1173574478");
    Instrmt_90.add_attribute("MatTm", "210346704"); // 1
    Instrmt_90_set.insert("210346704");
    Instrmt_90.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1273616315"); // 1
    Instrmt_90_set.insert("SettleOnOpenFlag_t_1273616315");
    Instrmt_90.add_attribute("AsgnMeth", "1174438240"); // 1
    Instrmt_90_set.insert("1174438240");
    Instrmt_90.add_attribute("Status", "1"); // 1
    Instrmt_90_set.insert("1");
    Instrmt_90.add_attribute("CpnPmt", "CouponPaymentDate_t_490798539"); // 1
    Instrmt_90_set.insert("CouponPaymentDate_t_490798539");
    Instrmt_90.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_90_set.insert("XR");
    Instrmt_90.add_attribute("Snrty", "SR"); // 1
    Instrmt_90_set.insert("SR");
    Instrmt_90.add_attribute("NotlPctOut", "11466313.460000"); // 1
    Instrmt_90_set.insert("11466313.460000");
    Instrmt_90.add_attribute("OrigNotlPctOut", "15676047.910000"); // 1
    Instrmt_90_set.insert("15676047.910000");
    Instrmt_90.add_attribute("AttchPnt", "16775958.830000"); // 1
    Instrmt_90_set.insert("16775958.830000");
    Instrmt_90.add_attribute("DetchPnt", "7738169.630000"); // 1
    Instrmt_90_set.insert("7738169.630000");
    Instrmt_90.add_attribute("Issued", "IssueDate_t_1395124307"); // 1
    Instrmt_90_set.insert("IssueDate_t_1395124307");
    Instrmt_90.add_attribute("RepoCollSecTyp", "1714725288"); // 1
    Instrmt_90_set.insert("1714725288");
    Instrmt_90.add_attribute("RepoTrm", "243496206"); // 1
    Instrmt_90_set.insert("243496206");
    Instrmt_90.add_attribute("RepoRt", "12644591.360000"); // 1
    Instrmt_90_set.insert("12644591.360000");
    Instrmt_90.add_attribute("Fctr", "19582118.100000"); // 1
    Instrmt_90_set.insert("19582118.100000");
    Instrmt_90.add_attribute("CrdRtg", "CreditRating_t_1932674704"); // 1
    Instrmt_90_set.insert("CreditRating_t_1932674704");
    Instrmt_90.add_attribute("Rgstry", "InstrRegistry_t_1580181423"); // 1
    Instrmt_90_set.insert("InstrRegistry_t_1580181423");
    Instrmt_90.add_attribute("IssuCtry", "2085349933"); // 1
    Instrmt_90_set.insert("2085349933");
    Instrmt_90.add_attribute("StPrv", "StateOrProvinceOfIssue_t_803835795"); // 1
    Instrmt_90_set.insert("StateOrProvinceOfIssue_t_803835795");
    Instrmt_90.add_attribute("Lcl", "LocaleOfIssue_t_366483914"); // 1
    Instrmt_90_set.insert("LocaleOfIssue_t_366483914");
    Instrmt_90.add_attribute("Redeem", "RedemptionDate_t_1341181870"); // 1
    Instrmt_90_set.insert("RedemptionDate_t_1341181870");
    Instrmt_90.add_attribute("StrkPx", "20788325.770000"); // 1
    Instrmt_90_set.insert("20788325.770000");
    Instrmt_90.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_90_set.insert("USD");
    Instrmt_90.add_attribute("StrkMult", "6613663.050000"); // 1
    Instrmt_90_set.insert("6613663.050000");
    Instrmt_90.add_attribute("StrkValu", "6675486.560000"); // 1
    Instrmt_90_set.insert("6675486.560000");
    Instrmt_90.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_90_set.insert("1");
    Instrmt_90.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_90_set.insert("5");
    Instrmt_90.add_attribute("StrkPxBndryPrcsn", "17767528.790000"); // 1
    Instrmt_90_set.insert("17767528.790000");
    Instrmt_90.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_90_set.insert("4");
    Instrmt_90.add_attribute("OptAt", "1435712098"); // 1
    Instrmt_90_set.insert("1435712098");
    Instrmt_90.add_attribute("Mult", "9028855.460000"); // 1
    Instrmt_90_set.insert("9028855.460000");
    Instrmt_90.add_attribute("MultTyp", "2"); // 1
    Instrmt_90_set.insert("2");
    Instrmt_90.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_90_set.insert("4");
    Instrmt_90.add_attribute("MinPxIncr", "13936840.860000"); // 1
    Instrmt_90_set.insert("13936840.860000");
    Instrmt_90.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_261195202"); // 1
    Instrmt_90_set.insert("MinPriceIncrementAmount_t_261195202");
    Instrmt_90.add_attribute("UOM", "MWh"); // 1
    Instrmt_90_set.insert("MWh");
    Instrmt_90.add_attribute("UOMQty", "3928317.840000"); // 1
    Instrmt_90_set.insert("3928317.840000");
    Instrmt_90.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_90_set.insert("oz_tr");
    Instrmt_90.add_attribute("PxUOMQty", "20720492.280000"); // 1
    Instrmt_90_set.insert("20720492.280000");
    Instrmt_90.add_attribute("SettlMeth", "P"); // 1
    Instrmt_90_set.insert("P");
    Instrmt_90.add_attribute("ExerStyle", "0"); // 1
    Instrmt_90_set.insert("0");
    Instrmt_90.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_90_set.insert("2");
    Instrmt_90.add_attribute("OptPayAmt", "OptPayoutAmount_t_1410144953"); // 1
    Instrmt_90_set.insert("OptPayoutAmount_t_1410144953");
    Instrmt_90.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_90_set.insert("INX");
    Instrmt_90.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_90_set.insert("FUT");
    Instrmt_90.add_attribute("ListMeth", "1"); // 1
    Instrmt_90_set.insert("1");
    Instrmt_90.add_attribute("CapPx", "17735975.640000"); // 1
    Instrmt_90_set.insert("17735975.640000");
    Instrmt_90.add_attribute("FlrPx", "13878853.160000"); // 1
    Instrmt_90_set.insert("13878853.160000");
    Instrmt_90.add_attribute("PutCall", "1"); // 1
    Instrmt_90_set.insert("1");
    Instrmt_90.add_attribute("FlexInd", "true"); // 1
    Instrmt_90_set.insert("true");
    Instrmt_90.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_90_set.insert("true");
    Instrmt_90.add_attribute("TmUnit", "H"); // 1
    Instrmt_90_set.insert("H");
    Instrmt_90.add_attribute("CpnRt", "9800446.110000"); // 1
    Instrmt_90_set.insert("9800446.110000");
    Instrmt_90.add_attribute("Exch", "SecurityExchange_t_1946224222"); // 1
    Instrmt_90_set.insert("SecurityExchange_t_1946224222");
    Instrmt_90.add_attribute("PosLmt", "444403391"); // 1
    Instrmt_90_set.insert("444403391");
    Instrmt_90.add_attribute("NTPosLmt", "1647593267"); // 1
    Instrmt_90_set.insert("1647593267");
    Instrmt_90.add_attribute("Issr", "Issuer_t_1874441375"); // 1
    Instrmt_90_set.insert("Issuer_t_1874441375");
    Instrmt_90.add_attribute("EncIssrLen", "1669768786"); // 1
    Instrmt_90_set.insert("1669768786");
    Instrmt_90.add_attribute("EncIssr", "EncodedIssuer_t_1276862498"); // 1
    Instrmt_90_set.insert("EncodedIssuer_t_1276862498");
    Instrmt_90.add_attribute("Desc", "SecurityDesc_t_828749358"); // 1
    Instrmt_90_set.insert("SecurityDesc_t_828749358");
    Instrmt_90.add_attribute("EncSecDescLen", "957997236"); // 1
    Instrmt_90_set.insert("957997236");
    Instrmt_90.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_32264397"); // 1
    Instrmt_90_set.insert("EncodedSecurityDesc_t_32264397");
    Instrmt_90.add_attribute("Pool", "Pool_t_957495581"); // 1
    Instrmt_90_set.insert("Pool_t_957495581");
    Instrmt_90.add_attribute("CSetMo", "177440463"); // 1
    Instrmt_90_set.insert("177440463");
    Instrmt_90.add_attribute("CPPgm", "1"); // 1
    Instrmt_90_set.insert("1");
    Instrmt_90.add_attribute("CPRegT", "CPRegType_t_1218690784"); // 1
    Instrmt_90_set.insert("CPRegType_t_1218690784");
    Instrmt_90.add_attribute("Dated", "DatedDate_t_571893808"); // 1
    Instrmt_90_set.insert("DatedDate_t_571893808");
    Instrmt_90.add_attribute("IntAcrl", "InterestAccrualDate_t_1818780267"); // 1
    Instrmt_90_set.insert("InterestAccrualDate_t_1818780267");
    all_values.push_back(Instrmt_90_set);
    all_compo_names.insert("Instrmt_90_set");

    {
      xml_element AID_93{"AID"};
      multiset<string> AID_93_set;
      AID_93.add_attribute("AltID", "SecurityAltID_t_900007130"); // 2
      AID_93_set.insert("SecurityAltID_t_900007130");
      AID_93.add_attribute("AltIDSrc", "J"); // 2
      AID_93_set.insert("J");
      all_values.push_back(AID_93_set);
      all_compo_names.insert("AID_93_set");

      Instrmt_90.add_element(AID_93);
    }
    {
      xml_element SecXML_90{"SecXML"};
      multiset<string> SecXML_90_set;
      SecXML_90.add_attribute("Schema", "SecurityXMLSchema_t_837945366"); // 2
      SecXML_90_set.insert("SecurityXMLSchema_t_837945366");
      all_values.push_back(SecXML_90_set);
      all_compo_names.insert("SecXML_90_set");

      Instrmt_90.add_element(SecXML_90);
    }
    {
      xml_element Evnt_90{"Evnt"};
      multiset<string> Evnt_90_set;
      Evnt_90.add_attribute("EventTyp", "4"); // 2
      Evnt_90_set.insert("4");
      Evnt_90.add_attribute("Dt", "EventDate_t_2135750256"); // 2
      Evnt_90_set.insert("EventDate_t_2135750256");
      Evnt_90.add_attribute("Tm", "EventTime_t_100606671"); // 2
      Evnt_90_set.insert("EventTime_t_100606671");
      Evnt_90.add_attribute("Px", "223802.770000"); // 2
      Evnt_90_set.insert("223802.770000");
      Evnt_90.add_attribute("Txt", "EventText_t_1438285639"); // 2
      Evnt_90_set.insert("EventText_t_1438285639");
      all_values.push_back(Evnt_90_set);
      all_compo_names.insert("Evnt_90_set");

      Instrmt_90.add_element(Evnt_90);
    }
    {
      xml_element Pty_445{"Pty"};
      multiset<string> Pty_445_set;
      Pty_445.add_attribute("ID", "InstrumentPartyID_t_1295942681"); // 2
      Pty_445_set.insert("InstrumentPartyID_t_1295942681");
      Pty_445.add_attribute("Src", "E"); // 2
      Pty_445_set.insert("E");
      Pty_445.add_attribute("R", "70"); // 2
      Pty_445_set.insert("70");
      all_values.push_back(Pty_445_set);
      all_compo_names.insert("Pty_445_set");

      {
        xml_element Sub_445{"Sub"};
        multiset<string> Sub_445_set;
        Sub_445.add_attribute("ID", "InstrumentPartySubID_t_1147630838"); // 3
        Sub_445_set.insert("InstrumentPartySubID_t_1147630838");
        Sub_445.add_attribute("Typ", "27"); // 3
        Sub_445_set.insert("27");
        all_values.push_back(Sub_445_set);
        all_compo_names.insert("Sub_445_set");

        Pty_445.add_element(Sub_445);
      }
      Instrmt_90.add_element(Pty_445);
    }
    {
      xml_element CmplxEvnt_87{"CmplxEvnt"};
      multiset<string> CmplxEvnt_87_set;
      CmplxEvnt_87.add_attribute("Typ", "1"); // 2
      CmplxEvnt_87_set.insert("1");
      CmplxEvnt_87.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_930667924"); // 2
      CmplxEvnt_87_set.insert("ComplexOptPayoutAmount_t_930667924");
      CmplxEvnt_87.add_attribute("Px", "6211366.350000"); // 2
      CmplxEvnt_87_set.insert("6211366.350000");
      CmplxEvnt_87.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_87_set.insert("2");
      CmplxEvnt_87.add_attribute("PxBndryPrcsn", "13750713.150000"); // 2
      CmplxEvnt_87_set.insert("13750713.150000");
      CmplxEvnt_87.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_87_set.insert("1");
      CmplxEvnt_87.add_attribute("Cond", "1"); // 2
      CmplxEvnt_87_set.insert("1");
      all_values.push_back(CmplxEvnt_87_set);
      all_compo_names.insert("CmplxEvnt_87_set");

      {
        xml_element EvntDts_87{"EvntDts"};
        multiset<string> EvntDts_87_set;
        EvntDts_87.add_attribute("StartDt", "ComplexEventStartDate_t_897356453"); // 3
        EvntDts_87_set.insert("ComplexEventStartDate_t_897356453");
        EvntDts_87.add_attribute("EndDt", "ComplexEventEndDate_t_1398108752"); // 3
        EvntDts_87_set.insert("ComplexEventEndDate_t_1398108752");
        all_values.push_back(EvntDts_87_set);
        all_compo_names.insert("EvntDts_87_set");

        {
          xml_element EvntTms_87{"EvntTms"};
          multiset<string> EvntTms_87_set;
          EvntTms_87.add_attribute("StartTm", "1614718506"); // 4
          EvntTms_87_set.insert("1614718506");
          EvntTms_87.add_attribute("EndTm", "1855353690"); // 4
          EvntTms_87_set.insert("1855353690");
          all_values.push_back(EvntTms_87_set);
          all_compo_names.insert("EvntTms_87_set");

          EvntDts_87.add_element(EvntTms_87);
        }
        CmplxEvnt_87.add_element(EvntDts_87);
      }
      Instrmt_90.add_element(CmplxEvnt_87);
    }
    elt.add_element(Instrmt_90);
  } // end Instrmt
  { // Undly
    xml_element Undly_122{"Undly"};
    multiset<string> Undly_122_set;
    Undly_122.add_attribute("Sym", "UnderlyingSymbol_t_424730439"); // 1
    Undly_122_set.insert("UnderlyingSymbol_t_424730439");
    Undly_122.add_attribute("Sfx", "WI"); // 1
    Undly_122_set.insert("WI");
    Undly_122.add_attribute("ID", "UnderlyingSecurityID_t_708837984"); // 1
    Undly_122_set.insert("UnderlyingSecurityID_t_708837984");
    Undly_122.add_attribute("Src", "G"); // 1
    Undly_122_set.insert("G");
    Undly_122.add_attribute("Prod", "4"); // 1
    Undly_122_set.insert("4");
    Undly_122.add_attribute("CFI", "UnderlyingCFICode_t_380134603"); // 1
    Undly_122_set.insert("UnderlyingCFICode_t_380134603");
    Undly_122.add_attribute("SecTyp", "SWING"); // 1
    Undly_122_set.insert("SWING");
    Undly_122.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_953663701"); // 1
    Undly_122_set.insert("UnderlyingSecuritySubType_t_953663701");
    Undly_122.add_attribute("MMY", "1218079969"); // 1
    Undly_122_set.insert("1218079969");
    Undly_122.add_attribute("Mat", "UnderlyingMaturityDate_t_224908841"); // 1
    Undly_122_set.insert("UnderlyingMaturityDate_t_224908841");
    Undly_122.add_attribute("MatTm", "941930309"); // 1
    Undly_122_set.insert("941930309");
    Undly_122.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1318686641"); // 1
    Undly_122_set.insert("UnderlyingCouponPaymentDate_t_1318686641");
    Undly_122.add_attribute("RestrctTyp", "MM"); // 1
    Undly_122_set.insert("MM");
    Undly_122.add_attribute("Snrty", "SB"); // 1
    Undly_122_set.insert("SB");
    Undly_122.add_attribute("NotlPctOut", "4671456.740000"); // 1
    Undly_122_set.insert("4671456.740000");
    Undly_122.add_attribute("OrigNotlPctOut", "20432669.590000"); // 1
    Undly_122_set.insert("20432669.590000");
    Undly_122.add_attribute("AttchPnt", "9114196.090000"); // 1
    Undly_122_set.insert("9114196.090000");
    Undly_122.add_attribute("DetchPnt", "16147765.120000"); // 1
    Undly_122_set.insert("16147765.120000");
    Undly_122.add_attribute("Issued", "UnderlyingIssueDate_t_1684358983"); // 1
    Undly_122_set.insert("UnderlyingIssueDate_t_1684358983");
    Undly_122.add_attribute("RepoCollSecTyp", "24206807"); // 1
    Undly_122_set.insert("24206807");
    Undly_122.add_attribute("RepoTrm", "397960788"); // 1
    Undly_122_set.insert("397960788");
    Undly_122.add_attribute("RepoRt", "1580119.700000"); // 1
    Undly_122_set.insert("1580119.700000");
    Undly_122.add_attribute("Fctr", "10832182.280000"); // 1
    Undly_122_set.insert("10832182.280000");
    Undly_122.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1773032103"); // 1
    Undly_122_set.insert("UnderlyingCreditRating_t_1773032103");
    Undly_122.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_279258224"); // 1
    Undly_122_set.insert("UnderlyingInstrRegistry_t_279258224");
    Undly_122.add_attribute("Ctry", "1869187376"); // 1
    Undly_122_set.insert("1869187376");
    Undly_122.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_522904909"); // 1
    Undly_122_set.insert("UnderlyingStateOrProvinceOfIssue_t_522904909");
    Undly_122.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1677366977"); // 1
    Undly_122_set.insert("UnderlyingLocaleOfIssue_t_1677366977");
    Undly_122.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1336422234"); // 1
    Undly_122_set.insert("UnderlyingRedemptionDate_t_1336422234");
    Undly_122.add_attribute("StrkPx", "2307749.510000"); // 1
    Undly_122_set.insert("2307749.510000");
    Undly_122.add_attribute("StrkCcy", "JPY"); // 1
    Undly_122_set.insert("JPY");
    Undly_122.add_attribute("OptA", "116085456"); // 1
    Undly_122_set.insert("116085456");
    Undly_122.add_attribute("Mult", "16690944.630000"); // 1
    Undly_122_set.insert("16690944.630000");
    Undly_122.add_attribute("MultTyp", "0"); // 1
    Undly_122_set.insert("0");
    Undly_122.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_122_set.insert("4");
    Undly_122.add_attribute("UOM", "MMBtu"); // 1
    Undly_122_set.insert("MMBtu");
    Undly_122.add_attribute("UOMQty", "16530349.550000"); // 1
    Undly_122_set.insert("16530349.550000");
    Undly_122.add_attribute("PxUOM", "Gal"); // 1
    Undly_122_set.insert("Gal");
    Undly_122.add_attribute("PxUOMQty", "11198253.880000"); // 1
    Undly_122_set.insert("11198253.880000");
    Undly_122.add_attribute("TmUnit", "Min"); // 1
    Undly_122_set.insert("Min");
    Undly_122.add_attribute("ExerStyle", "0"); // 1
    Undly_122_set.insert("0");
    Undly_122.add_attribute("CpnRt", "2910283.810000"); // 1
    Undly_122_set.insert("2910283.810000");
    Undly_122.add_attribute("Exch", "UnderlyingSecurityExchange_t_2125232914"); // 1
    Undly_122_set.insert("UnderlyingSecurityExchange_t_2125232914");
    Undly_122.add_attribute("Issr", "UnderlyingIssuer_t_554132432"); // 1
    Undly_122_set.insert("UnderlyingIssuer_t_554132432");
    Undly_122.add_attribute("EncUndIssrLen", "758174055"); // 1
    Undly_122_set.insert("758174055");
    Undly_122.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2021016225"); // 1
    Undly_122_set.insert("EncodedUnderlyingIssuer_t_2021016225");
    Undly_122.add_attribute("Desc", "UnderlyingSecurityDesc_t_1465552041"); // 1
    Undly_122_set.insert("UnderlyingSecurityDesc_t_1465552041");
    Undly_122.add_attribute("EncUndSecDescLen", "225466919"); // 1
    Undly_122_set.insert("225466919");
    Undly_122.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1557891561"); // 1
    Undly_122_set.insert("EncodedUnderlyingSecurityDesc_t_1557891561");
    Undly_122.add_attribute("CPPgm", "UnderlyingCPProgram_t_1489758849"); // 1
    Undly_122_set.insert("UnderlyingCPProgram_t_1489758849");
    Undly_122.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_623427707"); // 1
    Undly_122_set.insert("UnderlyingCPRegType_t_623427707");
    Undly_122.add_attribute("AllocPct", "17159035.310000"); // 1
    Undly_122_set.insert("17159035.310000");
    Undly_122.add_attribute("Ccy", "USD"); // 1
    Undly_122_set.insert("USD");
    Undly_122.add_attribute("Qty", "19951617.560000"); // 1
    Undly_122_set.insert("19951617.560000");
    Undly_122.add_attribute("SettlTyp", "4"); // 1
    Undly_122_set.insert("4");
    Undly_122.add_attribute("CashAmt", "UnderlyingCashAmount_t_771881071"); // 1
    Undly_122_set.insert("UnderlyingCashAmount_t_771881071");
    Undly_122.add_attribute("CashTyp", "DIFF"); // 1
    Undly_122_set.insert("DIFF");
    Undly_122.add_attribute("Px", "14836193.920000"); // 1
    Undly_122_set.insert("14836193.920000");
    Undly_122.add_attribute("DirtPx", "10026560.220000"); // 1
    Undly_122_set.insert("10026560.220000");
    Undly_122.add_attribute("EndPx", "3378179.150000"); // 1
    Undly_122_set.insert("3378179.150000");
    Undly_122.add_attribute("StartVal", "UnderlyingStartValue_t_1097288418"); // 1
    Undly_122_set.insert("UnderlyingStartValue_t_1097288418");
    Undly_122.add_attribute("CurVal", "UnderlyingCurrentValue_t_1118741478"); // 1
    Undly_122_set.insert("UnderlyingCurrentValue_t_1118741478");
    Undly_122.add_attribute("EndVal", "UnderlyingEndValue_t_2006912378"); // 1
    Undly_122_set.insert("UnderlyingEndValue_t_2006912378");
    Undly_122.add_attribute("AdjQty", "2068950.200000"); // 1
    Undly_122_set.insert("2068950.200000");
    Undly_122.add_attribute("FxRate", "16920312.470000"); // 1
    Undly_122_set.insert("16920312.470000");
    Undly_122.add_attribute("FxRateCalc", "D"); // 1
    Undly_122_set.insert("D");
    Undly_122.add_attribute("CapValu", "UnderlyingCapValue_t_1859929975"); // 1
    Undly_122_set.insert("UnderlyingCapValue_t_1859929975");
    Undly_122.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1071501069"); // 1
    Undly_122_set.insert("UnderlyingSettlMethod_t_1071501069");
    Undly_122.add_attribute("PutCall", "880999537"); // 1
    Undly_122_set.insert("880999537");
    all_values.push_back(Undly_122_set);
    all_compo_names.insert("Undly_122_set");

    {
      xml_element UndAID_122{"UndAID"};
      multiset<string> UndAID_122_set;
      UndAID_122.add_attribute("AltID", "UnderlyingSecurityAltID_t_1590390123"); // 2
      UndAID_122_set.insert("UnderlyingSecurityAltID_t_1590390123");
      UndAID_122.add_attribute("AltIDSrc", "M"); // 2
      UndAID_122_set.insert("M");
      all_values.push_back(UndAID_122_set);
      all_compo_names.insert("UndAID_122_set");

      Undly_122.add_element(UndAID_122);
    }
    {
      xml_element Stip_197{"Stip"};
      multiset<string> Stip_197_set;
      Stip_197.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_197_set.insert("DISCOUNT");
      Stip_197.add_attribute("Val", "UnderlyingStipValue_t_1568139389"); // 2
      Stip_197_set.insert("UnderlyingStipValue_t_1568139389");
      all_values.push_back(Stip_197_set);
      all_compo_names.insert("Stip_197_set");

      Undly_122.add_element(Stip_197);
    }
    {
      xml_element Pty_446{"Pty"};
      multiset<string> Pty_446_set;
      Pty_446.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1947033633"); // 2
      Pty_446_set.insert("UnderlyingInstrumentPartyID_t_1947033633");
      Pty_446.add_attribute("Src", "I"); // 2
      Pty_446_set.insert("I");
      Pty_446.add_attribute("R", "45"); // 2
      Pty_446_set.insert("45");
      all_values.push_back(Pty_446_set);
      all_compo_names.insert("Pty_446_set");

      {
        xml_element Sub_446{"Sub"};
        multiset<string> Sub_446_set;
        Sub_446.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1265102027"); // 3
        Sub_446_set.insert("UnderlyingInstrumentPartySubID_t_1265102027");
        Sub_446.add_attribute("Typ", "7"); // 3
        Sub_446_set.insert("7");
        all_values.push_back(Sub_446_set);
        all_compo_names.insert("Sub_446_set");

        Pty_446.add_element(Sub_446);
      }
      Undly_122.add_element(Pty_446);
    }
    elt.add_element(Undly_122);
  } // end Undly
  { // Undly
    xml_element Undly_123{"Undly"};
    multiset<string> Undly_123_set;
    Undly_123.add_attribute("Sym", "UnderlyingSymbol_t_852079879"); // 1
    Undly_123_set.insert("UnderlyingSymbol_t_852079879");
    Undly_123.add_attribute("Sfx", "CD"); // 1
    Undly_123_set.insert("CD");
    Undly_123.add_attribute("ID", "UnderlyingSecurityID_t_631612951"); // 1
    Undly_123_set.insert("UnderlyingSecurityID_t_631612951");
    Undly_123.add_attribute("Src", "E"); // 1
    Undly_123_set.insert("E");
    Undly_123.add_attribute("Prod", "1"); // 1
    Undly_123_set.insert("1");
    Undly_123.add_attribute("CFI", "UnderlyingCFICode_t_880589113"); // 1
    Undly_123_set.insert("UnderlyingCFICode_t_880589113");
    Undly_123.add_attribute("SecTyp", "OOF"); // 1
    Undly_123_set.insert("OOF");
    Undly_123.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1180067815"); // 1
    Undly_123_set.insert("UnderlyingSecuritySubType_t_1180067815");
    Undly_123.add_attribute("MMY", "1652470185"); // 1
    Undly_123_set.insert("1652470185");
    Undly_123.add_attribute("Mat", "UnderlyingMaturityDate_t_1793222956"); // 1
    Undly_123_set.insert("UnderlyingMaturityDate_t_1793222956");
    Undly_123.add_attribute("MatTm", "516203560"); // 1
    Undly_123_set.insert("516203560");
    Undly_123.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_507642559"); // 1
    Undly_123_set.insert("UnderlyingCouponPaymentDate_t_507642559");
    Undly_123.add_attribute("RestrctTyp", "XR"); // 1
    Undly_123_set.insert("XR");
    Undly_123.add_attribute("Snrty", "SR"); // 1
    Undly_123_set.insert("SR");
    Undly_123.add_attribute("NotlPctOut", "16263840.380000"); // 1
    Undly_123_set.insert("16263840.380000");
    Undly_123.add_attribute("OrigNotlPctOut", "19904696.020000"); // 1
    Undly_123_set.insert("19904696.020000");
    Undly_123.add_attribute("AttchPnt", "18203869.980000"); // 1
    Undly_123_set.insert("18203869.980000");
    Undly_123.add_attribute("DetchPnt", "11709316.370000"); // 1
    Undly_123_set.insert("11709316.370000");
    Undly_123.add_attribute("Issued", "UnderlyingIssueDate_t_1751643751"); // 1
    Undly_123_set.insert("UnderlyingIssueDate_t_1751643751");
    Undly_123.add_attribute("RepoCollSecTyp", "1532833325"); // 1
    Undly_123_set.insert("1532833325");
    Undly_123.add_attribute("RepoTrm", "94949059"); // 1
    Undly_123_set.insert("94949059");
    Undly_123.add_attribute("RepoRt", "4851596.400000"); // 1
    Undly_123_set.insert("4851596.400000");
    Undly_123.add_attribute("Fctr", "9757398.000000"); // 1
    Undly_123_set.insert("9757398.000000");
    Undly_123.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1487850260"); // 1
    Undly_123_set.insert("UnderlyingCreditRating_t_1487850260");
    Undly_123.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1657187558"); // 1
    Undly_123_set.insert("UnderlyingInstrRegistry_t_1657187558");
    Undly_123.add_attribute("Ctry", "396395541"); // 1
    Undly_123_set.insert("396395541");
    Undly_123.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1287400245"); // 1
    Undly_123_set.insert("UnderlyingStateOrProvinceOfIssue_t_1287400245");
    Undly_123.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1439905883"); // 1
    Undly_123_set.insert("UnderlyingLocaleOfIssue_t_1439905883");
    Undly_123.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1838067508"); // 1
    Undly_123_set.insert("UnderlyingRedemptionDate_t_1838067508");
    Undly_123.add_attribute("StrkPx", "4050186.240000"); // 1
    Undly_123_set.insert("4050186.240000");
    Undly_123.add_attribute("StrkCcy", "CHF"); // 1
    Undly_123_set.insert("CHF");
    Undly_123.add_attribute("OptA", "1012395852"); // 1
    Undly_123_set.insert("1012395852");
    Undly_123.add_attribute("Mult", "20797040.780000"); // 1
    Undly_123_set.insert("20797040.780000");
    Undly_123.add_attribute("MultTyp", "2"); // 1
    Undly_123_set.insert("2");
    Undly_123.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_123_set.insert("0");
    Undly_123.add_attribute("UOM", "MWh"); // 1
    Undly_123_set.insert("MWh");
    Undly_123.add_attribute("UOMQty", "12313413.730000"); // 1
    Undly_123_set.insert("12313413.730000");
    Undly_123.add_attribute("PxUOM", "lbs"); // 1
    Undly_123_set.insert("lbs");
    Undly_123.add_attribute("PxUOMQty", "3177960.800000"); // 1
    Undly_123_set.insert("3177960.800000");
    Undly_123.add_attribute("TmUnit", "Min"); // 1
    Undly_123_set.insert("Min");
    Undly_123.add_attribute("ExerStyle", "1"); // 1
    Undly_123_set.insert("1");
    Undly_123.add_attribute("CpnRt", "8254386.400000"); // 1
    Undly_123_set.insert("8254386.400000");
    Undly_123.add_attribute("Exch", "UnderlyingSecurityExchange_t_860637905"); // 1
    Undly_123_set.insert("UnderlyingSecurityExchange_t_860637905");
    Undly_123.add_attribute("Issr", "UnderlyingIssuer_t_1060062568"); // 1
    Undly_123_set.insert("UnderlyingIssuer_t_1060062568");
    Undly_123.add_attribute("EncUndIssrLen", "304339030"); // 1
    Undly_123_set.insert("304339030");
    Undly_123.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_703623859"); // 1
    Undly_123_set.insert("EncodedUnderlyingIssuer_t_703623859");
    Undly_123.add_attribute("Desc", "UnderlyingSecurityDesc_t_732965918"); // 1
    Undly_123_set.insert("UnderlyingSecurityDesc_t_732965918");
    Undly_123.add_attribute("EncUndSecDescLen", "1475270667"); // 1
    Undly_123_set.insert("1475270667");
    Undly_123.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_307783962"); // 1
    Undly_123_set.insert("EncodedUnderlyingSecurityDesc_t_307783962");
    Undly_123.add_attribute("CPPgm", "UnderlyingCPProgram_t_118315596"); // 1
    Undly_123_set.insert("UnderlyingCPProgram_t_118315596");
    Undly_123.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1570219726"); // 1
    Undly_123_set.insert("UnderlyingCPRegType_t_1570219726");
    Undly_123.add_attribute("AllocPct", "7929436.020000"); // 1
    Undly_123_set.insert("7929436.020000");
    Undly_123.add_attribute("Ccy", "JPY"); // 1
    Undly_123_set.insert("JPY");
    Undly_123.add_attribute("Qty", "3026475.120000"); // 1
    Undly_123_set.insert("3026475.120000");
    Undly_123.add_attribute("SettlTyp", "4"); // 1
    Undly_123_set.insert("4");
    Undly_123.add_attribute("CashAmt", "UnderlyingCashAmount_t_50502936"); // 1
    Undly_123_set.insert("UnderlyingCashAmount_t_50502936");
    Undly_123.add_attribute("CashTyp", "DIFF"); // 1
    Undly_123_set.insert("DIFF");
    Undly_123.add_attribute("Px", "11810347.980000"); // 1
    Undly_123_set.insert("11810347.980000");
    Undly_123.add_attribute("DirtPx", "4555215.600000"); // 1
    Undly_123_set.insert("4555215.600000");
    Undly_123.add_attribute("EndPx", "10431608.740000"); // 1
    Undly_123_set.insert("10431608.740000");
    Undly_123.add_attribute("StartVal", "UnderlyingStartValue_t_1723698537"); // 1
    Undly_123_set.insert("UnderlyingStartValue_t_1723698537");
    Undly_123.add_attribute("CurVal", "UnderlyingCurrentValue_t_1467917413"); // 1
    Undly_123_set.insert("UnderlyingCurrentValue_t_1467917413");
    Undly_123.add_attribute("EndVal", "UnderlyingEndValue_t_975381304"); // 1
    Undly_123_set.insert("UnderlyingEndValue_t_975381304");
    Undly_123.add_attribute("AdjQty", "5393783.920000"); // 1
    Undly_123_set.insert("5393783.920000");
    Undly_123.add_attribute("FxRate", "13657002.750000"); // 1
    Undly_123_set.insert("13657002.750000");
    Undly_123.add_attribute("FxRateCalc", "D"); // 1
    Undly_123_set.insert("D");
    Undly_123.add_attribute("CapValu", "UnderlyingCapValue_t_1770719765"); // 1
    Undly_123_set.insert("UnderlyingCapValue_t_1770719765");
    Undly_123.add_attribute("SetMeth", "UnderlyingSettlMethod_t_296067304"); // 1
    Undly_123_set.insert("UnderlyingSettlMethod_t_296067304");
    Undly_123.add_attribute("PutCall", "2105986928"); // 1
    Undly_123_set.insert("2105986928");
    all_values.push_back(Undly_123_set);
    all_compo_names.insert("Undly_123_set");

    {
      xml_element UndAID_123{"UndAID"};
      multiset<string> UndAID_123_set;
      UndAID_123.add_attribute("AltID", "UnderlyingSecurityAltID_t_500316799"); // 2
      UndAID_123_set.insert("UnderlyingSecurityAltID_t_500316799");
      UndAID_123.add_attribute("AltIDSrc", "D"); // 2
      UndAID_123_set.insert("D");
      all_values.push_back(UndAID_123_set);
      all_compo_names.insert("UndAID_123_set");

      Undly_123.add_element(UndAID_123);
    }
    {
      xml_element Stip_198{"Stip"};
      multiset<string> Stip_198_set;
      Stip_198.add_attribute("Typ", "ABS"); // 2
      Stip_198_set.insert("ABS");
      Stip_198.add_attribute("Val", "UnderlyingStipValue_t_1360954704"); // 2
      Stip_198_set.insert("UnderlyingStipValue_t_1360954704");
      all_values.push_back(Stip_198_set);
      all_compo_names.insert("Stip_198_set");

      Undly_123.add_element(Stip_198);
    }
    {
      xml_element Pty_447{"Pty"};
      multiset<string> Pty_447_set;
      Pty_447.add_attribute("ID", "UnderlyingInstrumentPartyID_t_802700462"); // 2
      Pty_447_set.insert("UnderlyingInstrumentPartyID_t_802700462");
      Pty_447.add_attribute("Src", "F"); // 2
      Pty_447_set.insert("F");
      Pty_447.add_attribute("R", "28"); // 2
      Pty_447_set.insert("28");
      all_values.push_back(Pty_447_set);
      all_compo_names.insert("Pty_447_set");

      {
        xml_element Sub_447{"Sub"};
        multiset<string> Sub_447_set;
        Sub_447.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1535666380"); // 3
        Sub_447_set.insert("UnderlyingInstrumentPartySubID_t_1535666380");
        Sub_447.add_attribute("Typ", "18"); // 3
        Sub_447_set.insert("18");
        all_values.push_back(Sub_447_set);
        all_compo_names.insert("Sub_447_set");

        Pty_447.add_element(Sub_447);
      }
      Undly_123.add_element(Pty_447);
    }
    elt.add_element(Undly_123);
  } // end Undly
  { // Undly
    xml_element Undly_124{"Undly"};
    multiset<string> Undly_124_set;
    Undly_124.add_attribute("Sym", "UnderlyingSymbol_t_224878877"); // 1
    Undly_124_set.insert("UnderlyingSymbol_t_224878877");
    Undly_124.add_attribute("Sfx", "CD"); // 1
    Undly_124_set.insert("CD");
    Undly_124.add_attribute("ID", "UnderlyingSecurityID_t_1986287696"); // 1
    Undly_124_set.insert("UnderlyingSecurityID_t_1986287696");
    Undly_124.add_attribute("Src", "4"); // 1
    Undly_124_set.insert("4");
    Undly_124.add_attribute("Prod", "2"); // 1
    Undly_124_set.insert("2");
    Undly_124.add_attribute("CFI", "UnderlyingCFICode_t_749390386"); // 1
    Undly_124_set.insert("UnderlyingCFICode_t_749390386");
    Undly_124.add_attribute("SecTyp", "TCAL"); // 1
    Undly_124_set.insert("TCAL");
    Undly_124.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2091004663"); // 1
    Undly_124_set.insert("UnderlyingSecuritySubType_t_2091004663");
    Undly_124.add_attribute("MMY", "799893322"); // 1
    Undly_124_set.insert("799893322");
    Undly_124.add_attribute("Mat", "UnderlyingMaturityDate_t_915539738"); // 1
    Undly_124_set.insert("UnderlyingMaturityDate_t_915539738");
    Undly_124.add_attribute("MatTm", "1124555813"); // 1
    Undly_124_set.insert("1124555813");
    Undly_124.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1255414883"); // 1
    Undly_124_set.insert("UnderlyingCouponPaymentDate_t_1255414883");
    Undly_124.add_attribute("RestrctTyp", "FR"); // 1
    Undly_124_set.insert("FR");
    Undly_124.add_attribute("Snrty", "SD"); // 1
    Undly_124_set.insert("SD");
    Undly_124.add_attribute("NotlPctOut", "5758486.480000"); // 1
    Undly_124_set.insert("5758486.480000");
    Undly_124.add_attribute("OrigNotlPctOut", "7865982.680000"); // 1
    Undly_124_set.insert("7865982.680000");
    Undly_124.add_attribute("AttchPnt", "12401490.940000"); // 1
    Undly_124_set.insert("12401490.940000");
    Undly_124.add_attribute("DetchPnt", "19415489.230000"); // 1
    Undly_124_set.insert("19415489.230000");
    Undly_124.add_attribute("Issued", "UnderlyingIssueDate_t_427305467"); // 1
    Undly_124_set.insert("UnderlyingIssueDate_t_427305467");
    Undly_124.add_attribute("RepoCollSecTyp", "863385212"); // 1
    Undly_124_set.insert("863385212");
    Undly_124.add_attribute("RepoTrm", "90132579"); // 1
    Undly_124_set.insert("90132579");
    Undly_124.add_attribute("RepoRt", "3858087.470000"); // 1
    Undly_124_set.insert("3858087.470000");
    Undly_124.add_attribute("Fctr", "13637020.110000"); // 1
    Undly_124_set.insert("13637020.110000");
    Undly_124.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1980254121"); // 1
    Undly_124_set.insert("UnderlyingCreditRating_t_1980254121");
    Undly_124.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1169750667"); // 1
    Undly_124_set.insert("UnderlyingInstrRegistry_t_1169750667");
    Undly_124.add_attribute("Ctry", "577173067"); // 1
    Undly_124_set.insert("577173067");
    Undly_124.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_635470935"); // 1
    Undly_124_set.insert("UnderlyingStateOrProvinceOfIssue_t_635470935");
    Undly_124.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_110547969"); // 1
    Undly_124_set.insert("UnderlyingLocaleOfIssue_t_110547969");
    Undly_124.add_attribute("Redeem", "UnderlyingRedemptionDate_t_494267982"); // 1
    Undly_124_set.insert("UnderlyingRedemptionDate_t_494267982");
    Undly_124.add_attribute("StrkPx", "236536.680000"); // 1
    Undly_124_set.insert("236536.680000");
    Undly_124.add_attribute("StrkCcy", "CAN"); // 1
    Undly_124_set.insert("CAN");
    Undly_124.add_attribute("OptA", "1677635644"); // 1
    Undly_124_set.insert("1677635644");
    Undly_124.add_attribute("Mult", "3654199.870000"); // 1
    Undly_124_set.insert("3654199.870000");
    Undly_124.add_attribute("MultTyp", "1"); // 1
    Undly_124_set.insert("1");
    Undly_124.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_124_set.insert("1");
    Undly_124.add_attribute("UOM", "MMBtu"); // 1
    Undly_124_set.insert("MMBtu");
    Undly_124.add_attribute("UOMQty", "9099556.810000"); // 1
    Undly_124_set.insert("9099556.810000");
    Undly_124.add_attribute("PxUOM", "Alw"); // 1
    Undly_124_set.insert("Alw");
    Undly_124.add_attribute("PxUOMQty", "19147036.960000"); // 1
    Undly_124_set.insert("19147036.960000");
    Undly_124.add_attribute("TmUnit", "Yr"); // 1
    Undly_124_set.insert("Yr");
    Undly_124.add_attribute("ExerStyle", "0"); // 1
    Undly_124_set.insert("0");
    Undly_124.add_attribute("CpnRt", "10226349.310000"); // 1
    Undly_124_set.insert("10226349.310000");
    Undly_124.add_attribute("Exch", "UnderlyingSecurityExchange_t_1636712383"); // 1
    Undly_124_set.insert("UnderlyingSecurityExchange_t_1636712383");
    Undly_124.add_attribute("Issr", "UnderlyingIssuer_t_1899553252"); // 1
    Undly_124_set.insert("UnderlyingIssuer_t_1899553252");
    Undly_124.add_attribute("EncUndIssrLen", "1598483579"); // 1
    Undly_124_set.insert("1598483579");
    Undly_124.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_275827003"); // 1
    Undly_124_set.insert("EncodedUnderlyingIssuer_t_275827003");
    Undly_124.add_attribute("Desc", "UnderlyingSecurityDesc_t_992218698"); // 1
    Undly_124_set.insert("UnderlyingSecurityDesc_t_992218698");
    Undly_124.add_attribute("EncUndSecDescLen", "1392548854"); // 1
    Undly_124_set.insert("1392548854");
    Undly_124.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_703132470"); // 1
    Undly_124_set.insert("EncodedUnderlyingSecurityDesc_t_703132470");
    Undly_124.add_attribute("CPPgm", "UnderlyingCPProgram_t_1855603910"); // 1
    Undly_124_set.insert("UnderlyingCPProgram_t_1855603910");
    Undly_124.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1482681433"); // 1
    Undly_124_set.insert("UnderlyingCPRegType_t_1482681433");
    Undly_124.add_attribute("AllocPct", "10889412.180000"); // 1
    Undly_124_set.insert("10889412.180000");
    Undly_124.add_attribute("Ccy", "CHF"); // 1
    Undly_124_set.insert("CHF");
    Undly_124.add_attribute("Qty", "1112082.370000"); // 1
    Undly_124_set.insert("1112082.370000");
    Undly_124.add_attribute("SettlTyp", "4"); // 1
    Undly_124_set.insert("4");
    Undly_124.add_attribute("CashAmt", "UnderlyingCashAmount_t_1950922842"); // 1
    Undly_124_set.insert("UnderlyingCashAmount_t_1950922842");
    Undly_124.add_attribute("CashTyp", "DIFF"); // 1
    Undly_124_set.insert("DIFF");
    Undly_124.add_attribute("Px", "21432633.220000"); // 1
    Undly_124_set.insert("21432633.220000");
    Undly_124.add_attribute("DirtPx", "19745765.100000"); // 1
    Undly_124_set.insert("19745765.100000");
    Undly_124.add_attribute("EndPx", "7483721.460000"); // 1
    Undly_124_set.insert("7483721.460000");
    Undly_124.add_attribute("StartVal", "UnderlyingStartValue_t_714926533"); // 1
    Undly_124_set.insert("UnderlyingStartValue_t_714926533");
    Undly_124.add_attribute("CurVal", "UnderlyingCurrentValue_t_1504728507"); // 1
    Undly_124_set.insert("UnderlyingCurrentValue_t_1504728507");
    Undly_124.add_attribute("EndVal", "UnderlyingEndValue_t_1113792133"); // 1
    Undly_124_set.insert("UnderlyingEndValue_t_1113792133");
    Undly_124.add_attribute("AdjQty", "3044122.230000"); // 1
    Undly_124_set.insert("3044122.230000");
    Undly_124.add_attribute("FxRate", "16354342.280000"); // 1
    Undly_124_set.insert("16354342.280000");
    Undly_124.add_attribute("FxRateCalc", "M"); // 1
    Undly_124_set.insert("M");
    Undly_124.add_attribute("CapValu", "UnderlyingCapValue_t_1214367904"); // 1
    Undly_124_set.insert("UnderlyingCapValue_t_1214367904");
    Undly_124.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1709660965"); // 1
    Undly_124_set.insert("UnderlyingSettlMethod_t_1709660965");
    Undly_124.add_attribute("PutCall", "1995822554"); // 1
    Undly_124_set.insert("1995822554");
    all_values.push_back(Undly_124_set);
    all_compo_names.insert("Undly_124_set");

    {
      xml_element UndAID_124{"UndAID"};
      multiset<string> UndAID_124_set;
      UndAID_124.add_attribute("AltID", "UnderlyingSecurityAltID_t_892379675"); // 2
      UndAID_124_set.insert("UnderlyingSecurityAltID_t_892379675");
      UndAID_124.add_attribute("AltIDSrc", "J"); // 2
      UndAID_124_set.insert("J");
      all_values.push_back(UndAID_124_set);
      all_compo_names.insert("UndAID_124_set");

      Undly_124.add_element(UndAID_124);
    }
    {
      xml_element Stip_199{"Stip"};
      multiset<string> Stip_199_set;
      Stip_199.add_attribute("Typ", "TRADERCREDIT"); // 2
      Stip_199_set.insert("TRADERCREDIT");
      Stip_199.add_attribute("Val", "UnderlyingStipValue_t_381608410"); // 2
      Stip_199_set.insert("UnderlyingStipValue_t_381608410");
      all_values.push_back(Stip_199_set);
      all_compo_names.insert("Stip_199_set");

      Undly_124.add_element(Stip_199);
    }
    {
      xml_element Pty_448{"Pty"};
      multiset<string> Pty_448_set;
      Pty_448.add_attribute("ID", "UnderlyingInstrumentPartyID_t_513029470"); // 2
      Pty_448_set.insert("UnderlyingInstrumentPartyID_t_513029470");
      Pty_448.add_attribute("Src", "B"); // 2
      Pty_448_set.insert("B");
      Pty_448.add_attribute("R", "14"); // 2
      Pty_448_set.insert("14");
      all_values.push_back(Pty_448_set);
      all_compo_names.insert("Pty_448_set");

      {
        xml_element Sub_448{"Sub"};
        multiset<string> Sub_448_set;
        Sub_448.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1505248169"); // 3
        Sub_448_set.insert("UnderlyingInstrumentPartySubID_t_1505248169");
        Sub_448.add_attribute("Typ", "33"); // 3
        Sub_448_set.insert("33");
        all_values.push_back(Sub_448_set);
        all_compo_names.insert("Sub_448_set");

        Pty_448.add_element(Sub_448);
      }
      Undly_124.add_element(Pty_448);
    }
    elt.add_element(Undly_124);
  } // end Undly
  { // TrdRepIndicatorsGrp
    xml_element TrdRepIndicatorsGrp_2{"TrdRepIndicatorsGrp"};
    multiset<string> TrdRepIndicatorsGrp_2_set;
    TrdRepIndicatorsGrp_2.add_attribute("PtyRole", "31"); // 1
    TrdRepIndicatorsGrp_2_set.insert("31");
    TrdRepIndicatorsGrp_2.add_attribute("TrdRepInd", "true"); // 1
    TrdRepIndicatorsGrp_2_set.insert("true");
    all_values.push_back(TrdRepIndicatorsGrp_2_set);
    all_compo_names.insert("TrdRepIndicatorsGrp_2_set");

    elt.add_element(TrdRepIndicatorsGrp_2);
  } // end TrdRepIndicatorsGrp
  { // TrdLeg
    xml_element TrdLeg_3{"TrdLeg"};
    multiset<string> TrdLeg_3_set;
    TrdLeg_3.add_attribute("Qty", "1377070.570000"); // 1
    TrdLeg_3_set.insert("1377070.570000");
    TrdLeg_3.add_attribute("SwapTyp", "5"); // 1
    TrdLeg_3_set.insert("5");
    TrdLeg_3.add_attribute("RptID", "LegReportID_t_413233691"); // 1
    TrdLeg_3_set.insert("LegReportID_t_413233691");
    TrdLeg_3.add_attribute("LegNo", "1786702397"); // 1
    TrdLeg_3_set.insert("1786702397");
    TrdLeg_3.add_attribute("PosEfct", "F"); // 1
    TrdLeg_3_set.insert("F");
    TrdLeg_3.add_attribute("Cover", "0"); // 1
    TrdLeg_3_set.insert("0");
    TrdLeg_3.add_attribute("RefID", "LegRefID_t_1782482072"); // 1
    TrdLeg_3_set.insert("LegRefID_t_1782482072");
    TrdLeg_3.add_attribute("SettlTyp", "8"); // 1
    TrdLeg_3_set.insert("8");
    TrdLeg_3.add_attribute("SettlDt", "LegSettlDate_t_1383362044"); // 1
    TrdLeg_3_set.insert("LegSettlDate_t_1383362044");
    TrdLeg_3.add_attribute("LastPx", "3499249.570000"); // 1
    TrdLeg_3_set.insert("3499249.570000");
    TrdLeg_3.add_attribute("SettlCcy", "CHF"); // 1
    TrdLeg_3_set.insert("CHF");
    TrdLeg_3.add_attribute("LegLastFwdPnts", "6543371.810000"); // 1
    TrdLeg_3_set.insert("6543371.810000");
    TrdLeg_3.add_attribute("LegCalcCcyLastQty", "8408998.110000"); // 1
    TrdLeg_3_set.insert("8408998.110000");
    TrdLeg_3.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_430789388"); // 1
    TrdLeg_3_set.insert("LegGrossTradeAmt_t_430789388");
    TrdLeg_3.add_attribute("LegVolatility", "18687050.850000"); // 1
    TrdLeg_3_set.insert("18687050.850000");
    TrdLeg_3.add_attribute("LegDividendYield", "4030771.280000"); // 1
    TrdLeg_3_set.insert("4030771.280000");
    TrdLeg_3.add_attribute("LegCurrencyRatio", "2791282.940000"); // 1
    TrdLeg_3_set.insert("2791282.940000");
    TrdLeg_3.add_attribute("LegExecInst", "j"); // 1
    TrdLeg_3_set.insert("j");
    TrdLeg_3.add_attribute("LastQty", "11640369.950000"); // 1
    TrdLeg_3_set.insert("11640369.950000");
    all_values.push_back(TrdLeg_3_set);
    all_compo_names.insert("TrdLeg_3_set");

    {
      xml_element Leg_104{"Leg"};
      multiset<string> Leg_104_set;
      Leg_104.add_attribute("Sym", "LegSymbol_t_1150102132"); // 2
      Leg_104_set.insert("LegSymbol_t_1150102132");
      Leg_104.add_attribute("Sfx", "WI"); // 2
      Leg_104_set.insert("WI");
      Leg_104.add_attribute("ID", "LegSecurityID_t_1677066465"); // 2
      Leg_104_set.insert("LegSecurityID_t_1677066465");
      Leg_104.add_attribute("Src", "K"); // 2
      Leg_104_set.insert("K");
      Leg_104.add_attribute("Prod", "5"); // 2
      Leg_104_set.insert("5");
      Leg_104.add_attribute("CFI", "LegCFICode_t_1034830986"); // 2
      Leg_104_set.insert("LegCFICode_t_1034830986");
      Leg_104.add_attribute("SecTyp", "FOR"); // 2
      Leg_104_set.insert("FOR");
      Leg_104.add_attribute("SecSubTyp", "LegSecuritySubType_t_865729173"); // 2
      Leg_104_set.insert("LegSecuritySubType_t_865729173");
      Leg_104.add_attribute("MMY", "100715770"); // 2
      Leg_104_set.insert("100715770");
      Leg_104.add_attribute("Mat", "LegMaturityDate_t_2088835283"); // 2
      Leg_104_set.insert("LegMaturityDate_t_2088835283");
      Leg_104.add_attribute("MatTm", "1167754627"); // 2
      Leg_104_set.insert("1167754627");
      Leg_104.add_attribute("CpnPmt", "LegCouponPaymentDate_t_238422827"); // 2
      Leg_104_set.insert("LegCouponPaymentDate_t_238422827");
      Leg_104.add_attribute("Issued", "LegIssueDate_t_159040302"); // 2
      Leg_104_set.insert("LegIssueDate_t_159040302");
      Leg_104.add_attribute("RepoCollSecTyp", "1580988318"); // 2
      Leg_104_set.insert("1580988318");
      Leg_104.add_attribute("RepoTrm", "2025125224"); // 2
      Leg_104_set.insert("2025125224");
      Leg_104.add_attribute("RepoRt", "1801681.630000"); // 2
      Leg_104_set.insert("1801681.630000");
      Leg_104.add_attribute("Fctr", "684945.690000"); // 2
      Leg_104_set.insert("684945.690000");
      Leg_104.add_attribute("CrdRtg", "LegCreditRating_t_1660123648"); // 2
      Leg_104_set.insert("LegCreditRating_t_1660123648");
      Leg_104.add_attribute("Rgstry", "LegInstrRegistry_t_28388887"); // 2
      Leg_104_set.insert("LegInstrRegistry_t_28388887");
      Leg_104.add_attribute("Ctry", "1451856613"); // 2
      Leg_104_set.insert("1451856613");
      Leg_104.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2010048606"); // 2
      Leg_104_set.insert("LegStateOrProvinceOfIssue_t_2010048606");
      Leg_104.add_attribute("Lcl", "LegLocaleOfIssue_t_1381338118"); // 2
      Leg_104_set.insert("LegLocaleOfIssue_t_1381338118");
      Leg_104.add_attribute("Redeem", "LegRedemptionDate_t_1801527143"); // 2
      Leg_104_set.insert("LegRedemptionDate_t_1801527143");
      Leg_104.add_attribute("Strk", "5169021.390000"); // 2
      Leg_104_set.insert("5169021.390000");
      Leg_104.add_attribute("StrkCcy", "CAN"); // 2
      Leg_104_set.insert("CAN");
      Leg_104.add_attribute("OptA", "238123576"); // 2
      Leg_104_set.insert("238123576");
      Leg_104.add_attribute("Cmult", "4778314.100000"); // 2
      Leg_104_set.insert("4778314.100000");
      Leg_104.add_attribute("MultTyp", "1"); // 2
      Leg_104_set.insert("1");
      Leg_104.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_104_set.insert("4");
      Leg_104.add_attribute("UOM", "oz_tr"); // 2
      Leg_104_set.insert("oz_tr");
      Leg_104.add_attribute("UOMQty", "15140633.090000"); // 2
      Leg_104_set.insert("15140633.090000");
      Leg_104.add_attribute("PxUOM", "lbs"); // 2
      Leg_104_set.insert("lbs");
      Leg_104.add_attribute("PxUOMQty", "11714512.230000"); // 2
      Leg_104_set.insert("11714512.230000");
      Leg_104.add_attribute("TmUnit", "D"); // 2
      Leg_104_set.insert("D");
      Leg_104.add_attribute("ExerStyle", "2"); // 2
      Leg_104_set.insert("2");
      Leg_104.add_attribute("CpnRt", "587985.610000"); // 2
      Leg_104_set.insert("587985.610000");
      Leg_104.add_attribute("Exch", "LegSecurityExchange_t_1877770437"); // 2
      Leg_104_set.insert("LegSecurityExchange_t_1877770437");
      Leg_104.add_attribute("Issr", "LegIssuer_t_70341027"); // 2
      Leg_104_set.insert("LegIssuer_t_70341027");
      Leg_104.add_attribute("EncLegIssrLen", "159514331"); // 2
      Leg_104_set.insert("159514331");
      Leg_104.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1819122072"); // 2
      Leg_104_set.insert("EncodedLegIssuer_t_1819122072");
      Leg_104.add_attribute("Desc", "LegSecurityDesc_t_1238095654"); // 2
      Leg_104_set.insert("LegSecurityDesc_t_1238095654");
      Leg_104.add_attribute("EncLegSecDescLen", "397937158"); // 2
      Leg_104_set.insert("397937158");
      Leg_104.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1978162374"); // 2
      Leg_104_set.insert("EncodedLegSecurityDesc_t_1978162374");
      Leg_104.add_attribute("RatioQty", "6716003.240000"); // 2
      Leg_104_set.insert("6716003.240000");
      Leg_104.add_attribute("Side", "G"); // 2
      Leg_104_set.insert("G");
      Leg_104.add_attribute("Ccy", "CAN"); // 2
      Leg_104_set.insert("CAN");
      Leg_104.add_attribute("Pool", "LegPool_t_1935702383"); // 2
      Leg_104_set.insert("LegPool_t_1935702383");
      Leg_104.add_attribute("Dated", "LegDatedDate_t_39235777"); // 2
      Leg_104_set.insert("LegDatedDate_t_39235777");
      Leg_104.add_attribute("CSetMo", "44467859"); // 2
      Leg_104_set.insert("44467859");
      Leg_104.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1798267341"); // 2
      Leg_104_set.insert("LegInterestAccrualDate_t_1798267341");
      Leg_104.add_attribute("PutCall", "1420573895"); // 2
      Leg_104_set.insert("1420573895");
      Leg_104.add_attribute("LegOptionRatio", "18459950.020000"); // 2
      Leg_104_set.insert("18459950.020000");
      Leg_104.add_attribute("Px", "1676858.320000"); // 2
      Leg_104_set.insert("1676858.320000");
      all_values.push_back(Leg_104_set);
      all_compo_names.insert("Leg_104_set");

      {
        xml_element LegAID_99{"LegAID"};
        multiset<string> LegAID_99_set;
        LegAID_99.add_attribute("SecAltID", "LegSecurityAltID_t_1495328177"); // 3
        LegAID_99_set.insert("LegSecurityAltID_t_1495328177");
        LegAID_99.add_attribute("SecAltIDSrc", "L"); // 3
        LegAID_99_set.insert("L");
        all_values.push_back(LegAID_99_set);
        all_compo_names.insert("LegAID_99_set");

        Leg_104.add_element(LegAID_99);
      }
      TrdLeg_3.add_element(Leg_104);
    }
    {
      xml_element Stip_200{"Stip"};
      multiset<string> Stip_200_set;
      Stip_200.add_attribute("StipTyp", "STRUCT"); // 2
      Stip_200_set.insert("STRUCT");
      Stip_200.add_attribute("StipVal", "LegStipulationValue_t_1973159588"); // 2
      Stip_200_set.insert("LegStipulationValue_t_1973159588");
      all_values.push_back(Stip_200_set);
      all_compo_names.insert("Stip_200_set");

      TrdLeg_3.add_element(Stip_200);
    }
    {
      xml_element Pty_449{"Pty"};
      multiset<string> Pty_449_set;
      Pty_449.add_attribute("ID", "NestedPartyID_t_147305414"); // 2
      Pty_449_set.insert("NestedPartyID_t_147305414");
      Pty_449.add_attribute("Src", "9"); // 2
      Pty_449_set.insert("9");
      Pty_449.add_attribute("R", "10"); // 2
      Pty_449_set.insert("10");
      all_values.push_back(Pty_449_set);
      all_compo_names.insert("Pty_449_set");

      {
        xml_element Sub_449{"Sub"};
        multiset<string> Sub_449_set;
        Sub_449.add_attribute("ID", "NestedPartySubID_t_1661368724"); // 3
        Sub_449_set.insert("NestedPartySubID_t_1661368724");
        Sub_449.add_attribute("Typ", "17"); // 3
        Sub_449_set.insert("17");
        all_values.push_back(Sub_449_set);
        all_compo_names.insert("Sub_449_set");

        Pty_449.add_element(Sub_449);
      }
      TrdLeg_3.add_element(Pty_449);
    }
    {
      xml_element TradeCapLegUndlyGrp_3{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_91{"Instrmt"};
        multiset<string> Instrmt_91_set;
        Instrmt_91.add_attribute("Sym", "UnderlyingLegSymbol_t_491511920"); // 3
        Instrmt_91_set.insert("UnderlyingLegSymbol_t_491511920");
        Instrmt_91.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_352540638"); // 3
        Instrmt_91_set.insert("UnderlyingLegSymbolSfx_t_352540638");
        Instrmt_91.add_attribute("ID", "UnderlyingLegSecurityID_t_161596517"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityID_t_161596517");
        Instrmt_91.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_550310482"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityIDSource_t_550310482");
        Instrmt_91.add_attribute("CFI", "UnderlyingLegCFICode_t_82827427"); // 3
        Instrmt_91_set.insert("UnderlyingLegCFICode_t_82827427");
        Instrmt_91.add_attribute("SecType", "UnderlyingLegSecurityType_t_231937544"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityType_t_231937544");
        Instrmt_91.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_709824813"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecuritySubType_t_709824813");
        Instrmt_91.add_attribute("MMY", "1901949499"); // 3
        Instrmt_91_set.insert("1901949499");
        Instrmt_91.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1470033198"); // 3
        Instrmt_91_set.insert("UnderlyingLegMaturityDate_t_1470033198");
        Instrmt_91.add_attribute("MatTm", "1107761972"); // 3
        Instrmt_91_set.insert("1107761972");
        Instrmt_91.add_attribute("StrkPx", "17326282.250000"); // 3
        Instrmt_91_set.insert("17326282.250000");
        Instrmt_91.add_attribute("OptAt", "2141633523"); // 3
        Instrmt_91_set.insert("2141633523");
        Instrmt_91.add_attribute("PutCall", "1383340707"); // 3
        Instrmt_91_set.insert("1383340707");
        Instrmt_91.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_1743475114"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityExchange_t_1743475114");
        Instrmt_91.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_734244768"); // 3
        Instrmt_91_set.insert("UnderlyingLegSecurityDesc_t_734244768");
        all_values.push_back(Instrmt_91_set);
        all_compo_names.insert("Instrmt_91_set");

        {
          xml_element AID_94{"AID"};
          multiset<string> AID_94_set;
          AID_94.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_1171559442"); // 4
          AID_94_set.insert("UnderlyingLegSecurityAltID_t_1171559442");
          AID_94.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_1782710891"); // 4
          AID_94_set.insert("UnderlyingLegSecurityAltIDSource_t_1782710891");
          all_values.push_back(AID_94_set);
          all_compo_names.insert("AID_94_set");

          Instrmt_91.add_element(AID_94);
        }
        TradeCapLegUndlyGrp_3.add_element(Instrmt_91);
      }
      TrdLeg_3.add_element(TradeCapLegUndlyGrp_3);
    }
    elt.add_element(TrdLeg_3);
  } // end TrdLeg
  { // TrdLeg
    xml_element TrdLeg_4{"TrdLeg"};
    multiset<string> TrdLeg_4_set;
    TrdLeg_4.add_attribute("Qty", "7787126.270000"); // 1
    TrdLeg_4_set.insert("7787126.270000");
    TrdLeg_4.add_attribute("SwapTyp", "1"); // 1
    TrdLeg_4_set.insert("1");
    TrdLeg_4.add_attribute("RptID", "LegReportID_t_1055801139"); // 1
    TrdLeg_4_set.insert("LegReportID_t_1055801139");
    TrdLeg_4.add_attribute("LegNo", "477223981"); // 1
    TrdLeg_4_set.insert("477223981");
    TrdLeg_4.add_attribute("PosEfct", "C"); // 1
    TrdLeg_4_set.insert("C");
    TrdLeg_4.add_attribute("Cover", "0"); // 1
    TrdLeg_4_set.insert("0");
    TrdLeg_4.add_attribute("RefID", "LegRefID_t_260568218"); // 1
    TrdLeg_4_set.insert("LegRefID_t_260568218");
    TrdLeg_4.add_attribute("SettlTyp", "9"); // 1
    TrdLeg_4_set.insert("9");
    TrdLeg_4.add_attribute("SettlDt", "LegSettlDate_t_229321608"); // 1
    TrdLeg_4_set.insert("LegSettlDate_t_229321608");
    TrdLeg_4.add_attribute("LastPx", "4078736.330000"); // 1
    TrdLeg_4_set.insert("4078736.330000");
    TrdLeg_4.add_attribute("SettlCcy", "GBP"); // 1
    TrdLeg_4_set.insert("GBP");
    TrdLeg_4.add_attribute("LegLastFwdPnts", "20692423.570000"); // 1
    TrdLeg_4_set.insert("20692423.570000");
    TrdLeg_4.add_attribute("LegCalcCcyLastQty", "14628734.910000"); // 1
    TrdLeg_4_set.insert("14628734.910000");
    TrdLeg_4.add_attribute("LegGrossTrdAmt", "LegGrossTradeAmt_t_40894226"); // 1
    TrdLeg_4_set.insert("LegGrossTradeAmt_t_40894226");
    TrdLeg_4.add_attribute("LegVolatility", "2742993.470000"); // 1
    TrdLeg_4_set.insert("2742993.470000");
    TrdLeg_4.add_attribute("LegDividendYield", "16244700.090000"); // 1
    TrdLeg_4_set.insert("16244700.090000");
    TrdLeg_4.add_attribute("LegCurrencyRatio", "5912047.080000"); // 1
    TrdLeg_4_set.insert("5912047.080000");
    TrdLeg_4.add_attribute("LegExecInst", "k"); // 1
    TrdLeg_4_set.insert("k");
    TrdLeg_4.add_attribute("LastQty", "18564075.530000"); // 1
    TrdLeg_4_set.insert("18564075.530000");
    all_values.push_back(TrdLeg_4_set);
    all_compo_names.insert("TrdLeg_4_set");

    {
      xml_element Leg_105{"Leg"};
      multiset<string> Leg_105_set;
      Leg_105.add_attribute("Sym", "LegSymbol_t_1301029522"); // 2
      Leg_105_set.insert("LegSymbol_t_1301029522");
      Leg_105.add_attribute("Sfx", "WI"); // 2
      Leg_105_set.insert("WI");
      Leg_105.add_attribute("ID", "LegSecurityID_t_1178957104"); // 2
      Leg_105_set.insert("LegSecurityID_t_1178957104");
      Leg_105.add_attribute("Src", "9"); // 2
      Leg_105_set.insert("9");
      Leg_105.add_attribute("Prod", "13"); // 2
      Leg_105_set.insert("13");
      Leg_105.add_attribute("CFI", "LegCFICode_t_1173106979"); // 2
      Leg_105_set.insert("LegCFICode_t_1173106979");
      Leg_105.add_attribute("SecTyp", "SWING"); // 2
      Leg_105_set.insert("SWING");
      Leg_105.add_attribute("SecSubTyp", "LegSecuritySubType_t_1440212316"); // 2
      Leg_105_set.insert("LegSecuritySubType_t_1440212316");
      Leg_105.add_attribute("MMY", "1907351747"); // 2
      Leg_105_set.insert("1907351747");
      Leg_105.add_attribute("Mat", "LegMaturityDate_t_668724347"); // 2
      Leg_105_set.insert("LegMaturityDate_t_668724347");
      Leg_105.add_attribute("MatTm", "1075439560"); // 2
      Leg_105_set.insert("1075439560");
      Leg_105.add_attribute("CpnPmt", "LegCouponPaymentDate_t_538580727"); // 2
      Leg_105_set.insert("LegCouponPaymentDate_t_538580727");
      Leg_105.add_attribute("Issued", "LegIssueDate_t_1491067483"); // 2
      Leg_105_set.insert("LegIssueDate_t_1491067483");
      Leg_105.add_attribute("RepoCollSecTyp", "2131240699"); // 2
      Leg_105_set.insert("2131240699");
      Leg_105.add_attribute("RepoTrm", "1015804708"); // 2
      Leg_105_set.insert("1015804708");
      Leg_105.add_attribute("RepoRt", "3336128.040000"); // 2
      Leg_105_set.insert("3336128.040000");
      Leg_105.add_attribute("Fctr", "3874027.190000"); // 2
      Leg_105_set.insert("3874027.190000");
      Leg_105.add_attribute("CrdRtg", "LegCreditRating_t_1276372927"); // 2
      Leg_105_set.insert("LegCreditRating_t_1276372927");
      Leg_105.add_attribute("Rgstry", "LegInstrRegistry_t_1729451181"); // 2
      Leg_105_set.insert("LegInstrRegistry_t_1729451181");
      Leg_105.add_attribute("Ctry", "616724328"); // 2
      Leg_105_set.insert("616724328");
      Leg_105.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1684246560"); // 2
      Leg_105_set.insert("LegStateOrProvinceOfIssue_t_1684246560");
      Leg_105.add_attribute("Lcl", "LegLocaleOfIssue_t_87856361"); // 2
      Leg_105_set.insert("LegLocaleOfIssue_t_87856361");
      Leg_105.add_attribute("Redeem", "LegRedemptionDate_t_166106634"); // 2
      Leg_105_set.insert("LegRedemptionDate_t_166106634");
      Leg_105.add_attribute("Strk", "16060052.690000"); // 2
      Leg_105_set.insert("16060052.690000");
      Leg_105.add_attribute("StrkCcy", "GBP"); // 2
      Leg_105_set.insert("GBP");
      Leg_105.add_attribute("OptA", "1880304616"); // 2
      Leg_105_set.insert("1880304616");
      Leg_105.add_attribute("Cmult", "10277162.140000"); // 2
      Leg_105_set.insert("10277162.140000");
      Leg_105.add_attribute("MultTyp", "0"); // 2
      Leg_105_set.insert("0");
      Leg_105.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_105_set.insert("2");
      Leg_105.add_attribute("UOM", "lbs"); // 2
      Leg_105_set.insert("lbs");
      Leg_105.add_attribute("UOMQty", "20992350.910000"); // 2
      Leg_105_set.insert("20992350.910000");
      Leg_105.add_attribute("PxUOM", "Bbl"); // 2
      Leg_105_set.insert("Bbl");
      Leg_105.add_attribute("PxUOMQty", "19155972.230000"); // 2
      Leg_105_set.insert("19155972.230000");
      Leg_105.add_attribute("TmUnit", "H"); // 2
      Leg_105_set.insert("H");
      Leg_105.add_attribute("ExerStyle", "2"); // 2
      Leg_105_set.insert("2");
      Leg_105.add_attribute("CpnRt", "9412205.540000"); // 2
      Leg_105_set.insert("9412205.540000");
      Leg_105.add_attribute("Exch", "LegSecurityExchange_t_1857707842"); // 2
      Leg_105_set.insert("LegSecurityExchange_t_1857707842");
      Leg_105.add_attribute("Issr", "LegIssuer_t_1338489885"); // 2
      Leg_105_set.insert("LegIssuer_t_1338489885");
      Leg_105.add_attribute("EncLegIssrLen", "701088654"); // 2
      Leg_105_set.insert("701088654");
      Leg_105.add_attribute("EncLegIssr", "EncodedLegIssuer_t_378948541"); // 2
      Leg_105_set.insert("EncodedLegIssuer_t_378948541");
      Leg_105.add_attribute("Desc", "LegSecurityDesc_t_266445797"); // 2
      Leg_105_set.insert("LegSecurityDesc_t_266445797");
      Leg_105.add_attribute("EncLegSecDescLen", "1239669381"); // 2
      Leg_105_set.insert("1239669381");
      Leg_105.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1870016025"); // 2
      Leg_105_set.insert("EncodedLegSecurityDesc_t_1870016025");
      Leg_105.add_attribute("RatioQty", "2502028.480000"); // 2
      Leg_105_set.insert("2502028.480000");
      Leg_105.add_attribute("Side", "A"); // 2
      Leg_105_set.insert("A");
      Leg_105.add_attribute("Ccy", "JPY"); // 2
      Leg_105_set.insert("JPY");
      Leg_105.add_attribute("Pool", "LegPool_t_1384363368"); // 2
      Leg_105_set.insert("LegPool_t_1384363368");
      Leg_105.add_attribute("Dated", "LegDatedDate_t_1785596362"); // 2
      Leg_105_set.insert("LegDatedDate_t_1785596362");
      Leg_105.add_attribute("CSetMo", "1254329896"); // 2
      Leg_105_set.insert("1254329896");
      Leg_105.add_attribute("IntAcrl", "LegInterestAccrualDate_t_921126280"); // 2
      Leg_105_set.insert("LegInterestAccrualDate_t_921126280");
      Leg_105.add_attribute("PutCall", "1873452724"); // 2
      Leg_105_set.insert("1873452724");
      Leg_105.add_attribute("LegOptionRatio", "14204365.300000"); // 2
      Leg_105_set.insert("14204365.300000");
      Leg_105.add_attribute("Px", "3796479.010000"); // 2
      Leg_105_set.insert("3796479.010000");
      all_values.push_back(Leg_105_set);
      all_compo_names.insert("Leg_105_set");

      {
        xml_element LegAID_100{"LegAID"};
        multiset<string> LegAID_100_set;
        LegAID_100.add_attribute("SecAltID", "LegSecurityAltID_t_1276698929"); // 3
        LegAID_100_set.insert("LegSecurityAltID_t_1276698929");
        LegAID_100.add_attribute("SecAltIDSrc", "J"); // 3
        LegAID_100_set.insert("J");
        all_values.push_back(LegAID_100_set);
        all_compo_names.insert("LegAID_100_set");

        Leg_105.add_element(LegAID_100);
      }
      TrdLeg_4.add_element(Leg_105);
    }
    {
      xml_element Stip_201{"Stip"};
      multiset<string> Stip_201_set;
      Stip_201.add_attribute("StipTyp", "BROKERCREDIT"); // 2
      Stip_201_set.insert("BROKERCREDIT");
      Stip_201.add_attribute("StipVal", "LegStipulationValue_t_156931495"); // 2
      Stip_201_set.insert("LegStipulationValue_t_156931495");
      all_values.push_back(Stip_201_set);
      all_compo_names.insert("Stip_201_set");

      TrdLeg_4.add_element(Stip_201);
    }
    {
      xml_element Pty_450{"Pty"};
      multiset<string> Pty_450_set;
      Pty_450.add_attribute("ID", "NestedPartyID_t_278159311"); // 2
      Pty_450_set.insert("NestedPartyID_t_278159311");
      Pty_450.add_attribute("Src", "6"); // 2
      Pty_450_set.insert("6");
      Pty_450.add_attribute("R", "34"); // 2
      Pty_450_set.insert("34");
      all_values.push_back(Pty_450_set);
      all_compo_names.insert("Pty_450_set");

      {
        xml_element Sub_450{"Sub"};
        multiset<string> Sub_450_set;
        Sub_450.add_attribute("ID", "NestedPartySubID_t_229910754"); // 3
        Sub_450_set.insert("NestedPartySubID_t_229910754");
        Sub_450.add_attribute("Typ", "26"); // 3
        Sub_450_set.insert("26");
        all_values.push_back(Sub_450_set);
        all_compo_names.insert("Sub_450_set");

        Pty_450.add_element(Sub_450);
      }
      TrdLeg_4.add_element(Pty_450);
    }
    {
      xml_element TradeCapLegUndlyGrp_4{"TradeCapLegUndlyGrp"};
      {
        xml_element Instrmt_92{"Instrmt"};
        multiset<string> Instrmt_92_set;
        Instrmt_92.add_attribute("Sym", "UnderlyingLegSymbol_t_661685190"); // 3
        Instrmt_92_set.insert("UnderlyingLegSymbol_t_661685190");
        Instrmt_92.add_attribute("Sfx", "UnderlyingLegSymbolSfx_t_442970043"); // 3
        Instrmt_92_set.insert("UnderlyingLegSymbolSfx_t_442970043");
        Instrmt_92.add_attribute("ID", "UnderlyingLegSecurityID_t_302234547"); // 3
        Instrmt_92_set.insert("UnderlyingLegSecurityID_t_302234547");
        Instrmt_92.add_attribute("Src", "UnderlyingLegSecurityIDSource_t_1602905744"); // 3
        Instrmt_92_set.insert("UnderlyingLegSecurityIDSource_t_1602905744");
        Instrmt_92.add_attribute("CFI", "UnderlyingLegCFICode_t_153194237"); // 3
        Instrmt_92_set.insert("UnderlyingLegCFICode_t_153194237");
        Instrmt_92.add_attribute("SecType", "UnderlyingLegSecurityType_t_1640724433"); // 3
        Instrmt_92_set.insert("UnderlyingLegSecurityType_t_1640724433");
        Instrmt_92.add_attribute("SubType", "UnderlyingLegSecuritySubType_t_156510750"); // 3
        Instrmt_92_set.insert("UnderlyingLegSecuritySubType_t_156510750");
        Instrmt_92.add_attribute("MMY", "532142779"); // 3
        Instrmt_92_set.insert("532142779");
        Instrmt_92.add_attribute("MatDt", "UnderlyingLegMaturityDate_t_1907170230"); // 3
        Instrmt_92_set.insert("UnderlyingLegMaturityDate_t_1907170230");
        Instrmt_92.add_attribute("MatTm", "1396180131"); // 3
        Instrmt_92_set.insert("1396180131");
        Instrmt_92.add_attribute("StrkPx", "2546751.560000"); // 3
        Instrmt_92_set.insert("2546751.560000");
        Instrmt_92.add_attribute("OptAt", "9889431"); // 3
        Instrmt_92_set.insert("9889431");
        Instrmt_92.add_attribute("PutCall", "1504170573"); // 3
        Instrmt_92_set.insert("1504170573");
        Instrmt_92.add_attribute("Exch", "UnderlyingLegSecurityExchange_t_310820337"); // 3
        Instrmt_92_set.insert("UnderlyingLegSecurityExchange_t_310820337");
        Instrmt_92.add_attribute("Desc", "UnderlyingLegSecurityDesc_t_647494999"); // 3
        Instrmt_92_set.insert("UnderlyingLegSecurityDesc_t_647494999");
        all_values.push_back(Instrmt_92_set);
        all_compo_names.insert("Instrmt_92_set");

        {
          xml_element AID_95{"AID"};
          multiset<string> AID_95_set;
          AID_95.add_attribute("AltID", "UnderlyingLegSecurityAltID_t_741050293"); // 4
          AID_95_set.insert("UnderlyingLegSecurityAltID_t_741050293");
          AID_95.add_attribute("AltIDSrc", "UnderlyingLegSecurityAltIDSource_t_2096416699"); // 4
          AID_95_set.insert("UnderlyingLegSecurityAltIDSource_t_2096416699");
          all_values.push_back(AID_95_set);
          all_compo_names.insert("AID_95_set");

          Instrmt_92.add_element(AID_95);
        }
        TradeCapLegUndlyGrp_4.add_element(Instrmt_92);
      }
      TrdLeg_4.add_element(TradeCapLegUndlyGrp_4);
    }
    elt.add_element(TrdLeg_4);
  } // end TrdLeg
  { // TrdRegTS
    xml_element TrdRegTS_19{"TrdRegTS"};
    multiset<string> TrdRegTS_19_set;
    TrdRegTS_19.add_attribute("TS", "TrdRegTimestamp_t_1662176574"); // 1
    TrdRegTS_19_set.insert("TrdRegTimestamp_t_1662176574");
    TrdRegTS_19.add_attribute("Typ", "1"); // 1
    TrdRegTS_19_set.insert("1");
    TrdRegTS_19.add_attribute("Src", "TrdRegTimestampOrigin_t_1174777777"); // 1
    TrdRegTS_19_set.insert("TrdRegTimestampOrigin_t_1174777777");
    TrdRegTS_19.add_attribute("DskTyp", "S"); // 1
    TrdRegTS_19_set.insert("S");
    TrdRegTS_19.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_19_set.insert("1");
    TrdRegTS_19.add_attribute("DskOrdHndlInst", "WRK"); // 1
    TrdRegTS_19_set.insert("WRK");
    all_values.push_back(TrdRegTS_19_set);
    all_compo_names.insert("TrdRegTS_19_set");

    elt.add_element(TrdRegTS_19);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_20{"TrdRegTS"};
    multiset<string> TrdRegTS_20_set;
    TrdRegTS_20.add_attribute("TS", "TrdRegTimestamp_t_6809697"); // 1
    TrdRegTS_20_set.insert("TrdRegTimestamp_t_6809697");
    TrdRegTS_20.add_attribute("Typ", "1"); // 1
    TrdRegTS_20_set.insert("1");
    TrdRegTS_20.add_attribute("Src", "TrdRegTimestampOrigin_t_932890831"); // 1
    TrdRegTS_20_set.insert("TrdRegTimestampOrigin_t_932890831");
    TrdRegTS_20.add_attribute("DskTyp", "O"); // 1
    TrdRegTS_20_set.insert("O");
    TrdRegTS_20.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_20_set.insert("1");
    TrdRegTS_20.add_attribute("DskOrdHndlInst", "AON"); // 1
    TrdRegTS_20_set.insert("AON");
    all_values.push_back(TrdRegTS_20_set);
    all_compo_names.insert("TrdRegTS_20_set");

    elt.add_element(TrdRegTS_20);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_21{"TrdRegTS"};
    multiset<string> TrdRegTS_21_set;
    TrdRegTS_21.add_attribute("TS", "TrdRegTimestamp_t_613183287"); // 1
    TrdRegTS_21_set.insert("TrdRegTimestamp_t_613183287");
    TrdRegTS_21.add_attribute("Typ", "3"); // 1
    TrdRegTS_21_set.insert("3");
    TrdRegTS_21.add_attribute("Src", "TrdRegTimestampOrigin_t_1605771629"); // 1
    TrdRegTS_21_set.insert("TrdRegTimestampOrigin_t_1605771629");
    TrdRegTS_21.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_21_set.insert("AR");
    TrdRegTS_21.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_21_set.insert("1");
    TrdRegTS_21.add_attribute("DskOrdHndlInst", "MAO"); // 1
    TrdRegTS_21_set.insert("MAO");
    all_values.push_back(TrdRegTS_21_set);
    all_compo_names.insert("TrdRegTS_21_set");

    elt.add_element(TrdRegTS_21);
  } // end TrdRegTS
  { // Amt
    xml_element Amt_18{"Amt"};
    multiset<string> Amt_18_set;
    Amt_18.add_attribute("Typ", "IMTM"); // 1
    Amt_18_set.insert("IMTM");
    Amt_18.add_attribute("Amt", "PosAmt_t_143624997"); // 1
    Amt_18_set.insert("PosAmt_t_143624997");
    Amt_18.add_attribute("Ccy", "PositionCurrency_t_168345202"); // 1
    Amt_18_set.insert("PositionCurrency_t_168345202");
    all_values.push_back(Amt_18_set);
    all_compo_names.insert("Amt_18_set");

    elt.add_element(Amt_18);
  } // end Amt
  { // Amt
    xml_element Amt_19{"Amt"};
    multiset<string> Amt_19_set;
    Amt_19.add_attribute("Typ", "CASH"); // 1
    Amt_19_set.insert("CASH");
    Amt_19.add_attribute("Amt", "PosAmt_t_398300153"); // 1
    Amt_19_set.insert("PosAmt_t_398300153");
    Amt_19.add_attribute("Ccy", "PositionCurrency_t_178234633"); // 1
    Amt_19_set.insert("PositionCurrency_t_178234633");
    all_values.push_back(Amt_19_set);
    all_compo_names.insert("Amt_19_set");

    elt.add_element(Amt_19);
  } // end Amt
  { // Amt
    xml_element Amt_20{"Amt"};
    multiset<string> Amt_20_set;
    Amt_20.add_attribute("Typ", "CMTM"); // 1
    Amt_20_set.insert("CMTM");
    Amt_20.add_attribute("Amt", "PosAmt_t_709120490"); // 1
    Amt_20_set.insert("PosAmt_t_709120490");
    Amt_20.add_attribute("Ccy", "PositionCurrency_t_825729632"); // 1
    Amt_20_set.insert("PositionCurrency_t_825729632");
    all_values.push_back(Amt_20_set);
    all_compo_names.insert("Amt_20_set");

    elt.add_element(Amt_20);
  } // end Amt
  { // RptSide
    xml_element RptSide_1{"RptSide"};
    multiset<string> RptSide_1_set;
    RptSide_1.add_attribute("Side", "7"); // 1
    RptSide_1_set.insert("7");
    RptSide_1.add_attribute("SideExecID", "SideExecID_t_580070879"); // 1
    RptSide_1_set.insert("SideExecID_t_580070879");
    RptSide_1.add_attribute("OrdDelay", "1136848831"); // 1
    RptSide_1_set.insert("1136848831");
    RptSide_1.add_attribute("OrdDelayUnit", "13"); // 1
    RptSide_1_set.insert("13");
    RptSide_1.add_attribute("Acct", "Account_t_1754848656"); // 1
    RptSide_1_set.insert("Account_t_1754848656");
    RptSide_1.add_attribute("AcctIDSrc", "1"); // 1
    RptSide_1_set.insert("1");
    RptSide_1.add_attribute("AcctTyp", "7"); // 1
    RptSide_1_set.insert("7");
    RptSide_1.add_attribute("ProcCode", "0"); // 1
    RptSide_1_set.insert("0");
    RptSide_1.add_attribute("OddLot", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("InptSrc", "TradeInputSource_t_245605629"); // 1
    RptSide_1_set.insert("TradeInputSource_t_245605629");
    RptSide_1.add_attribute("InptDev", "TradeInputDevice_t_1194987358"); // 1
    RptSide_1_set.insert("TradeInputDevice_t_1194987358");
    RptSide_1.add_attribute("ComplianceID", "ComplianceID_t_1247225664"); // 1
    RptSide_1_set.insert("ComplianceID_t_1247225664");
    RptSide_1.add_attribute("SolFlag", "Y"); // 1
    RptSide_1_set.insert("Y");
    RptSide_1.add_attribute("CustCpcty", "1"); // 1
    RptSide_1_set.insert("1");
    RptSide_1.add_attribute("SesID", "4"); // 1
    RptSide_1_set.insert("4");
    RptSide_1.add_attribute("SesSub", "3"); // 1
    RptSide_1_set.insert("3");
    RptSide_1.add_attribute("TmBkt", "TimeBracket_t_1816076925"); // 1
    RptSide_1_set.insert("TimeBracket_t_1816076925");
    RptSide_1.add_attribute("NetGrossInd", "2"); // 1
    RptSide_1_set.insert("2");
    RptSide_1.add_attribute("Ccy", "CAN"); // 1
    RptSide_1_set.insert("CAN");
    RptSide_1.add_attribute("SettlCcy", "EUR"); // 1
    RptSide_1_set.insert("EUR");
    RptSide_1.add_attribute("NumDaysInt", "1571184141"); // 1
    RptSide_1_set.insert("1571184141");
    RptSide_1.add_attribute("ExDt", "ExDate_t_1205346959"); // 1
    RptSide_1_set.insert("ExDate_t_1205346959");
    RptSide_1.add_attribute("AcrdIntRt", "934332.530000"); // 1
    RptSide_1_set.insert("934332.530000");
    RptSide_1.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1969484294"); // 1
    RptSide_1_set.insert("AccruedInterestAmt_t_1969484294");
    RptSide_1.add_attribute("IntAtMat", "InterestAtMaturity_t_1383581592"); // 1
    RptSide_1_set.insert("InterestAtMaturity_t_1383581592");
    RptSide_1.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_974538865"); // 1
    RptSide_1_set.insert("EndAccruedInterestAmt_t_974538865");
    RptSide_1.add_attribute("StartCsh", "StartCash_t_531121137"); // 1
    RptSide_1_set.insert("StartCash_t_531121137");
    RptSide_1.add_attribute("EndCsh", "EndCash_t_61827576"); // 1
    RptSide_1_set.insert("EndCash_t_61827576");
    RptSide_1.add_attribute("Concession", "Concession_t_449211122"); // 1
    RptSide_1_set.insert("Concession_t_449211122");
    RptSide_1.add_attribute("TotTakedown", "TotalTakedown_t_1189174679"); // 1
    RptSide_1_set.insert("TotalTakedown_t_1189174679");
    RptSide_1.add_attribute("NetMny", "NetMoney_t_641898455"); // 1
    RptSide_1_set.insert("NetMoney_t_641898455");
    RptSide_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1586059953"); // 1
    RptSide_1_set.insert("SettlCurrAmt_t_1586059953");
    RptSide_1.add_attribute("SettlCurrFxRt", "15221303.480000"); // 1
    RptSide_1_set.insert("15221303.480000");
    RptSide_1.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    RptSide_1_set.insert("D");
    RptSide_1.add_attribute("PosEfct", "F"); // 1
    RptSide_1_set.insert("F");
    RptSide_1.add_attribute("MLegRptTyp", "2"); // 1
    RptSide_1_set.insert("2");
    RptSide_1.add_attribute("ExchRule", "ExchangeRule_t_511359990"); // 1
    RptSide_1_set.insert("ExchangeRule_t_511359990");
    RptSide_1.add_attribute("AllocInd", "5"); // 1
    RptSide_1_set.insert("5");
    RptSide_1.add_attribute("PreallocMeth", "0"); // 1
    RptSide_1_set.insert("0");
    RptSide_1.add_attribute("AllocID", "AllocID_t_1706347349"); // 1
    RptSide_1_set.insert("AllocID_t_1706347349");
    RptSide_1.add_attribute("SideGrossTradeAmt", "SideGrossTradeAmt_t_607507335"); // 1
    RptSide_1_set.insert("SideGrossTradeAmt_t_607507335");
    RptSide_1.add_attribute("AgrsrInd", "N"); // 1
    RptSide_1_set.insert("N");
    RptSide_1.add_attribute("SideQty", "1916652645"); // 1
    RptSide_1_set.insert("1916652645");
    RptSide_1.add_attribute("RptID", "SideTradeReportID_t_320432638"); // 1
    RptSide_1_set.insert("SideTradeReportID_t_320432638");
    RptSide_1.add_attribute("FillStationCd", "SideFillStationCd_t_1621567059"); // 1
    RptSide_1_set.insert("SideFillStationCd_t_1621567059");
    RptSide_1.add_attribute("RsnCD", "SideReasonCd_t_1585245922"); // 1
    RptSide_1_set.insert("SideReasonCd_t_1585245922");
    RptSide_1.add_attribute("RptSeq", "948775775"); // 1
    RptSide_1_set.insert("948775775");
    RptSide_1.add_attribute("TrdSubTyp", "5"); // 1
    RptSide_1_set.insert("5");
    RptSide_1.add_attribute("OrdCat", "2"); // 1
    RptSide_1_set.insert("2");
    all_values.push_back(RptSide_1_set);
    all_compo_names.insert("RptSide_1_set");

    {
      xml_element Pty_451{"Pty"};
      multiset<string> Pty_451_set;
      Pty_451.add_attribute("ID", "PartyID_t_1985777532"); // 2
      Pty_451_set.insert("PartyID_t_1985777532");
      Pty_451.add_attribute("Src", "7"); // 2
      Pty_451_set.insert("7");
      Pty_451.add_attribute("R", "11"); // 2
      Pty_451_set.insert("11");
      all_values.push_back(Pty_451_set);
      all_compo_names.insert("Pty_451_set");

      {
        xml_element Sub_451{"Sub"};
        multiset<string> Sub_451_set;
        Sub_451.add_attribute("ID", "PartySubID_t_1043640843"); // 3
        Sub_451_set.insert("PartySubID_t_1043640843");
        Sub_451.add_attribute("Typ", "27"); // 3
        Sub_451_set.insert("27");
        all_values.push_back(Sub_451_set);
        all_compo_names.insert("Sub_451_set");

        Pty_451.add_element(Sub_451);
      }
      RptSide_1.add_element(Pty_451);
    }
    {
      xml_element ClrInst_9{"ClrInst"};
      multiset<string> ClrInst_9_set;
      ClrInst_9.add_attribute("ClrngInstrctn", "5"); // 2
      ClrInst_9_set.insert("5");
      all_values.push_back(ClrInst_9_set);
      all_compo_names.insert("ClrInst_9_set");

      RptSide_1.add_element(ClrInst_9);
    }
    {
      xml_element Comm_24{"Comm"};
      multiset<string> Comm_24_set;
      Comm_24.add_attribute("Comm", "Commission_t_279738787"); // 2
      Comm_24_set.insert("Commission_t_279738787");
      Comm_24.add_attribute("CommTyp", "1"); // 2
      Comm_24_set.insert("1");
      Comm_24.add_attribute("Ccy", "EUR"); // 2
      Comm_24_set.insert("EUR");
      Comm_24.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_24_set.insert("N");
      all_values.push_back(Comm_24_set);
      all_compo_names.insert("Comm_24_set");

      RptSide_1.add_element(Comm_24);
    }
    {
      xml_element ContAmt_3{"ContAmt"};
      multiset<string> ContAmt_3_set;
      ContAmt_3.add_attribute("ContAmtTyp", "3"); // 2
      ContAmt_3_set.insert("3");
      ContAmt_3.add_attribute("ContAmtValu", "9834648.180000"); // 2
      ContAmt_3_set.insert("9834648.180000");
      ContAmt_3.add_attribute("ContAmtCurr", "CAN"); // 2
      ContAmt_3_set.insert("CAN");
      all_values.push_back(ContAmt_3_set);
      all_compo_names.insert("ContAmt_3_set");

      RptSide_1.add_element(ContAmt_3);
    }
    {
      xml_element Stip_202{"Stip"};
      multiset<string> Stip_202_set;
      Stip_202.add_attribute("Typ", "PURPOSE"); // 2
      Stip_202_set.insert("PURPOSE");
      Stip_202.add_attribute("Val", "StipulationValue_t_56883147"); // 2
      Stip_202_set.insert("StipulationValue_t_56883147");
      all_values.push_back(Stip_202_set);
      all_compo_names.insert("Stip_202_set");

      RptSide_1.add_element(Stip_202);
    }
    {
      xml_element MiscFees_21{"MiscFees"};
      multiset<string> MiscFees_21_set;
      MiscFees_21.add_attribute("Amt", "MiscFeeAmt_t_1865168500"); // 2
      MiscFees_21_set.insert("MiscFeeAmt_t_1865168500");
      MiscFees_21.add_attribute("Curr", "GBP"); // 2
      MiscFees_21_set.insert("GBP");
      MiscFees_21.add_attribute("Typ", "6"); // 2
      MiscFees_21_set.insert("6");
      MiscFees_21.add_attribute("Basis", "1"); // 2
      MiscFees_21_set.insert("1");
      all_values.push_back(MiscFees_21_set);
      all_compo_names.insert("MiscFees_21_set");

      RptSide_1.add_element(MiscFees_21);
    }
    {
      xml_element SettlDetails_2{"SettlDetails"};
      multiset<string> SettlDetails_2_set;
      SettlDetails_2.add_attribute("SettlSrc", "1"); // 2
      SettlDetails_2_set.insert("1");
      all_values.push_back(SettlDetails_2_set);
      all_compo_names.insert("SettlDetails_2_set");

      {
        xml_element Pty_452{"Pty"};
        multiset<string> Pty_452_set;
        Pty_452.add_attribute("ID", "SettlPartyID_t_1627529111"); // 3
        Pty_452_set.insert("SettlPartyID_t_1627529111");
        Pty_452.add_attribute("Src", "3"); // 3
        Pty_452_set.insert("3");
        Pty_452.add_attribute("R", "4"); // 3
        Pty_452_set.insert("4");
        all_values.push_back(Pty_452_set);
        all_compo_names.insert("Pty_452_set");

        {
          xml_element Sub_452{"Sub"};
          multiset<string> Sub_452_set;
          Sub_452.add_attribute("ID", "SettlPartySubID_t_1101612522"); // 4
          Sub_452_set.insert("SettlPartySubID_t_1101612522");
          Sub_452.add_attribute("Typ", "21"); // 4
          Sub_452_set.insert("21");
          all_values.push_back(Sub_452_set);
          all_compo_names.insert("Sub_452_set");

          Pty_452.add_element(Sub_452);
        }
        SettlDetails_2.add_element(Pty_452);
      }
      RptSide_1.add_element(SettlDetails_2);
    }
    {
      xml_element Alloc_9{"Alloc"};
      multiset<string> Alloc_9_set;
      Alloc_9.add_attribute("Acct", "AllocAccount_t_1293880566"); // 2
      Alloc_9_set.insert("AllocAccount_t_1293880566");
      Alloc_9.add_attribute("ActIDSrc", "99"); // 2
      Alloc_9_set.insert("99");
      Alloc_9.add_attribute("AllocSettlCcy", "CAN"); // 2
      Alloc_9_set.insert("CAN");
      Alloc_9.add_attribute("IndAllocID", "IndividualAllocID_t_1942796879"); // 2
      Alloc_9_set.insert("IndividualAllocID_t_1942796879");
      Alloc_9.add_attribute("Qty", "16642265.720000"); // 2
      Alloc_9_set.insert("16642265.720000");
      Alloc_9.add_attribute("CustCpcty", "AllocCustomerCapacity_t_28331646"); // 2
      Alloc_9_set.insert("AllocCustomerCapacity_t_28331646");
      Alloc_9.add_attribute("Meth", "1"); // 2
      Alloc_9_set.insert("1");
      Alloc_9.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1775249129"); // 2
      Alloc_9_set.insert("SecondaryIndividualAllocID_t_1775249129");
      Alloc_9.add_attribute("ClrFeeInd", "AllocClearingFeeIndicator_t_308070434"); // 2
      Alloc_9_set.insert("AllocClearingFeeIndicator_t_308070434");
      all_values.push_back(Alloc_9_set);
      all_compo_names.insert("Alloc_9_set");

      {
        xml_element Pty_453{"Pty"};
        multiset<string> Pty_453_set;
        Pty_453.add_attribute("ID", "Nested2PartyID_t_366917527"); // 3
        Pty_453_set.insert("Nested2PartyID_t_366917527");
        Pty_453.add_attribute("Src", "4"); // 3
        Pty_453_set.insert("4");
        Pty_453.add_attribute("R", "6"); // 3
        Pty_453_set.insert("6");
        all_values.push_back(Pty_453_set);
        all_compo_names.insert("Pty_453_set");

        {
          xml_element Sub_453{"Sub"};
          multiset<string> Sub_453_set;
          Sub_453.add_attribute("ID", "Nested2PartySubID_t_515458406"); // 4
          Sub_453_set.insert("Nested2PartySubID_t_515458406");
          Sub_453.add_attribute("Typ", "11"); // 4
          Sub_453_set.insert("11");
          all_values.push_back(Sub_453_set);
          all_compo_names.insert("Sub_453_set");

          Pty_453.add_element(Sub_453);
        }
        Alloc_9.add_element(Pty_453);
      }
      RptSide_1.add_element(Alloc_9);
    }
    {
      xml_element TrdRptOrdDetl_1{"TrdRptOrdDetl"};
      multiset<string> TrdRptOrdDetl_1_set;
      TrdRptOrdDetl_1.add_attribute("OrdID", "OrderID_t_1633101616"); // 2
      TrdRptOrdDetl_1_set.insert("OrderID_t_1633101616");
      TrdRptOrdDetl_1.add_attribute("OrdID2", "SecondaryOrderID_t_102575589"); // 2
      TrdRptOrdDetl_1_set.insert("SecondaryOrderID_t_102575589");
      TrdRptOrdDetl_1.add_attribute("ClOrdID", "ClOrdID_t_1159708973"); // 2
      TrdRptOrdDetl_1_set.insert("ClOrdID_t_1159708973");
      TrdRptOrdDetl_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_718346249"); // 2
      TrdRptOrdDetl_1_set.insert("SecondaryClOrdID_t_718346249");
      TrdRptOrdDetl_1.add_attribute("ListID", "ListID_t_159458736"); // 2
      TrdRptOrdDetl_1_set.insert("ListID_t_159458736");
      TrdRptOrdDetl_1.add_attribute("RefOrdID", "RefOrderID_t_877393825"); // 2
      TrdRptOrdDetl_1_set.insert("RefOrderID_t_877393825");
      TrdRptOrdDetl_1.add_attribute("RefOrdIDSrc", "3"); // 2
      TrdRptOrdDetl_1_set.insert("3");
      TrdRptOrdDetl_1.add_attribute("RefOrdIDRsn", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("OrdTyp", "6"); // 2
      TrdRptOrdDetl_1_set.insert("6");
      TrdRptOrdDetl_1.add_attribute("Px", "16179028.460000"); // 2
      TrdRptOrdDetl_1_set.insert("16179028.460000");
      TrdRptOrdDetl_1.add_attribute("StopPx", "17487793.550000"); // 2
      TrdRptOrdDetl_1_set.insert("17487793.550000");
      TrdRptOrdDetl_1.add_attribute("ExecInst", "5"); // 2
      TrdRptOrdDetl_1_set.insert("5");
      TrdRptOrdDetl_1.add_attribute("OrdStat", "9"); // 2
      TrdRptOrdDetl_1_set.insert("9");
      TrdRptOrdDetl_1.add_attribute("LeavesQty", "20938841.460000"); // 2
      TrdRptOrdDetl_1_set.insert("20938841.460000");
      TrdRptOrdDetl_1.add_attribute("CumQty", "20815457.190000"); // 2
      TrdRptOrdDetl_1_set.insert("20815457.190000");
      TrdRptOrdDetl_1.add_attribute("TmInForce", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("ExpireTm", "ExpireTime_t_1240281065"); // 2
      TrdRptOrdDetl_1_set.insert("ExpireTime_t_1240281065");
      TrdRptOrdDetl_1.add_attribute("Cpcty", "G"); // 2
      TrdRptOrdDetl_1_set.insert("G");
      TrdRptOrdDetl_1.add_attribute("Rstctions", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("BkngTyp", "2"); // 2
      TrdRptOrdDetl_1_set.insert("2");
      TrdRptOrdDetl_1.add_attribute("OrigCustOrdCpcty", "1"); // 2
      TrdRptOrdDetl_1_set.insert("1");
      TrdRptOrdDetl_1.add_attribute("OrdInptDev", "OrderInputDevice_t_1944370998"); // 2
      TrdRptOrdDetl_1_set.insert("OrderInputDevice_t_1944370998");
      TrdRptOrdDetl_1.add_attribute("LotTyp", "3"); // 2
      TrdRptOrdDetl_1_set.insert("3");
      TrdRptOrdDetl_1.add_attribute("TransBkdTm", "TransBkdTime_t_1560918667"); // 2
      TrdRptOrdDetl_1_set.insert("TransBkdTime_t_1560918667");
      TrdRptOrdDetl_1.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1572136479"); // 2
      TrdRptOrdDetl_1_set.insert("OrigOrdModTime_t_1572136479");
      all_values.push_back(TrdRptOrdDetl_1_set);
      all_compo_names.insert("TrdRptOrdDetl_1_set");

      {
        xml_element OrdQty_27{"OrdQty"};
        multiset<string> OrdQty_27_set;
        OrdQty_27.add_attribute("Qty", "5613739.480000"); // 3
        OrdQty_27_set.insert("5613739.480000");
        OrdQty_27.add_attribute("Cash", "19278361.950000"); // 3
        OrdQty_27_set.insert("19278361.950000");
        OrdQty_27.add_attribute("Pct", "18420456.540000"); // 3
        OrdQty_27_set.insert("18420456.540000");
        OrdQty_27.add_attribute("RndDir", "2"); // 3
        OrdQty_27_set.insert("2");
        OrdQty_27.add_attribute("RndMod", "2958109.530000"); // 3
        OrdQty_27_set.insert("2958109.530000");
        all_values.push_back(OrdQty_27_set);
        all_compo_names.insert("OrdQty_27_set");

        TrdRptOrdDetl_1.add_element(OrdQty_27);
      }
      {
        xml_element DsplyInstr_11{"DsplyInstr"};
        multiset<string> DsplyInstr_11_set;
        DsplyInstr_11.add_attribute("DisplayQty", "17957895.540000"); // 3
        DsplyInstr_11_set.insert("17957895.540000");
        DsplyInstr_11.add_attribute("SecDspQty", "6966287.140000"); // 3
        DsplyInstr_11_set.insert("6966287.140000");
        DsplyInstr_11.add_attribute("DspWhn", "1"); // 3
        DsplyInstr_11_set.insert("1");
        DsplyInstr_11.add_attribute("DspMthd", "4"); // 3
        DsplyInstr_11_set.insert("4");
        DsplyInstr_11.add_attribute("DsplLwQty", "14149749.630000"); // 3
        DsplyInstr_11_set.insert("14149749.630000");
        DsplyInstr_11.add_attribute("DisplayHighQty", "5578452.790000"); // 3
        DsplyInstr_11_set.insert("5578452.790000");
        DsplyInstr_11.add_attribute("DspMinIncr", "16854087.050000"); // 3
        DsplyInstr_11_set.insert("16854087.050000");
        DsplyInstr_11.add_attribute("RfrshQty", "17299258.370000"); // 3
        DsplyInstr_11_set.insert("17299258.370000");
        all_values.push_back(DsplyInstr_11_set);
        all_compo_names.insert("DsplyInstr_11_set");

        TrdRptOrdDetl_1.add_element(DsplyInstr_11);
      }
      RptSide_1.add_element(TrdRptOrdDetl_1);
    }
    {
      xml_element TrdRegTS_22{"TrdRegTS"};
      multiset<string> TrdRegTS_22_set;
      TrdRegTS_22.add_attribute("TS", "SideTrdRegTimestamp_t_134468833"); // 2
      TrdRegTS_22_set.insert("SideTrdRegTimestamp_t_134468833");
      TrdRegTS_22.add_attribute("Typ", "1"); // 2
      TrdRegTS_22_set.insert("1");
      TrdRegTS_22.add_attribute("Src", "SideTrdRegTimestampSrc_t_1200345035"); // 2
      TrdRegTS_22_set.insert("SideTrdRegTimestampSrc_t_1200345035");
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
