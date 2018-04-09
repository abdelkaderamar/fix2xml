#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequest_message_t_0;
  elt.add_attribute("ReqID", "TradeRequestID_t_1949204430"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeRequestID_t_1949204430");
  elt.add_attribute("TrdID", "TradeID_t_165131259"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeID_t_165131259");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1457845257"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryTradeID_t_1457845257");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_208582248"); // 0
  TradeCaptureReportRequest_message_t_0.insert("FirmTradeID_t_208582248");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1180826466"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryFirmTradeID_t_1180826466");
  elt.add_attribute("ReqTyp", "0"); // 0
  TradeCaptureReportRequest_message_t_0.insert("0");
  elt.add_attribute("SubReqTyp", "0"); // 0
  TradeCaptureReportRequest_message_t_0.insert("0");
  elt.add_attribute("RptID", "TradeReportID_t_659381602"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeReportID_t_659381602");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_964546024"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryTradeReportID_t_964546024");
  elt.add_attribute("ExecID", "ExecID_t_2066136554"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ExecID_t_2066136554");
  elt.add_attribute("ExecTyp", "H"); // 0
  TradeCaptureReportRequest_message_t_0.insert("H");
  elt.add_attribute("OrdID", "OrderID_t_2135464624"); // 0
  TradeCaptureReportRequest_message_t_0.insert("OrderID_t_2135464624");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1679805488"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ClOrdID_t_1679805488");
  elt.add_attribute("MtchStat", "2"); // 0
  TradeCaptureReportRequest_message_t_0.insert("2");
  elt.add_attribute("TrdTyp", "23"); // 0
  TradeCaptureReportRequest_message_t_0.insert("23");
  elt.add_attribute("TrdSubTyp", "38"); // 0
  TradeCaptureReportRequest_message_t_0.insert("38");
  elt.add_attribute("TrdHandlInst", "4"); // 0
  TradeCaptureReportRequest_message_t_0.insert("4");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1354485823"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TransferReason_t_1354485823");
  elt.add_attribute("TrdTyp2", "19"); // 0
  TradeCaptureReportRequest_message_t_0.insert("19");
  elt.add_attribute("LinkID", "TradeLinkID_t_176810110"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeLinkID_t_176810110");
  elt.add_attribute("MtchID", "TrdMatchID_t_2007664209"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TrdMatchID_t_2007664209");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_546710054"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ClearingBusinessDate_t_546710054");
  elt.add_attribute("SesID", "1"); // 0
  TradeCaptureReportRequest_message_t_0.insert("1");
  elt.add_attribute("SesSub", "5"); // 0
  TradeCaptureReportRequest_message_t_0.insert("5");
  elt.add_attribute("TmBkt", "TimeBracket_t_267802149"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TimeBracket_t_267802149");
  elt.add_attribute("Side", "B"); // 0
  TradeCaptureReportRequest_message_t_0.insert("B");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  TradeCaptureReportRequest_message_t_0.insert("2");
  elt.add_attribute("InptSrc", "TradeInputSource_t_72912252"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeInputSource_t_72912252");
  elt.add_attribute("InptDev", "TradeInputDevice_t_971642589"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeInputDevice_t_971642589");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  TradeCaptureReportRequest_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_1344305471"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ResponseDestination_t_1344305471");
  elt.add_attribute("Txt", "Text_t_773363371"); // 0
  TradeCaptureReportRequest_message_t_0.insert("Text_t_773363371");
  elt.add_attribute("EncTxtLen", "526733990"); // 0
  TradeCaptureReportRequest_message_t_0.insert("526733990");
  elt.add_attribute("EncTxt", "EncodedText_t_654667080"); // 0
  TradeCaptureReportRequest_message_t_0.insert("EncodedText_t_654667080");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_981945619"); // 0
  TradeCaptureReportRequest_message_t_0.insert("MessageEventSource_t_981945619");
  all_values.push_back(TradeCaptureReportRequest_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequest_message_t");

  { // Hdr
    xml_element Hdr_98{"Hdr"};
    multiset<string> Hdr_98_set;
    Hdr_98.add_attribute("SeqNum", "1707560457"); // 1
    Hdr_98_set.insert("1707560457");
    Hdr_98.add_attribute("SID", "SenderCompID_t_879346470"); // 1
    Hdr_98_set.insert("SenderCompID_t_879346470");
    Hdr_98.add_attribute("TID", "TargetCompID_t_132480548"); // 1
    Hdr_98_set.insert("TargetCompID_t_132480548");
    Hdr_98.add_attribute("OBID", "OnBehalfOfCompID_t_219458411"); // 1
    Hdr_98_set.insert("OnBehalfOfCompID_t_219458411");
    Hdr_98.add_attribute("D2ID", "DeliverToCompID_t_1843892494"); // 1
    Hdr_98_set.insert("DeliverToCompID_t_1843892494");
    Hdr_98.add_attribute("SSub", "SenderSubID_t_51133454"); // 1
    Hdr_98_set.insert("SenderSubID_t_51133454");
    Hdr_98.add_attribute("SLoc", "SenderLocationID_t_383777267"); // 1
    Hdr_98_set.insert("SenderLocationID_t_383777267");
    Hdr_98.add_attribute("TSub", "TargetSubID_t_1831873471"); // 1
    Hdr_98_set.insert("TargetSubID_t_1831873471");
    Hdr_98.add_attribute("TLoc", "TargetLocationID_t_1730938943"); // 1
    Hdr_98_set.insert("TargetLocationID_t_1730938943");
    Hdr_98.add_attribute("OBSub", "OnBehalfOfSubID_t_47002448"); // 1
    Hdr_98_set.insert("OnBehalfOfSubID_t_47002448");
    Hdr_98.add_attribute("OBLoc", "OnBehalfOfLocationID_t_489841690"); // 1
    Hdr_98_set.insert("OnBehalfOfLocationID_t_489841690");
    Hdr_98.add_attribute("D2Sub", "DeliverToSubID_t_1895153813"); // 1
    Hdr_98_set.insert("DeliverToSubID_t_1895153813");
    Hdr_98.add_attribute("D2Loc", "DeliverToLocationID_t_1356629443"); // 1
    Hdr_98_set.insert("DeliverToLocationID_t_1356629443");
    Hdr_98.add_attribute("PosDup", "Y"); // 1
    Hdr_98_set.insert("Y");
    Hdr_98.add_attribute("PosRsnd", "N"); // 1
    Hdr_98_set.insert("N");
    Hdr_98.add_attribute("Snt", "SendingTime_t_1533439553"); // 1
    Hdr_98_set.insert("SendingTime_t_1533439553");
    Hdr_98.add_attribute("OrigSnt", "OrigSendingTime_t_1704508074"); // 1
    Hdr_98_set.insert("OrigSendingTime_t_1704508074");
    Hdr_98.add_attribute("MsgEncd", "MessageEncoding_t_707439314"); // 1
    Hdr_98_set.insert("MessageEncoding_t_707439314");
    all_values.push_back(Hdr_98_set);
    all_compo_names.insert("Hdr_98_set");

    {
      xml_element Hop_98{"Hop"};
      multiset<string> Hop_98_set;
      Hop_98.add_attribute("ID", "HopCompID_t_1097565538"); // 2
      Hop_98_set.insert("HopCompID_t_1097565538");
      Hop_98.add_attribute("Ref", "1971129188"); // 2
      Hop_98_set.insert("1971129188");
      Hop_98.add_attribute("Snt", "HopSendingTime_t_975241464"); // 2
      Hop_98_set.insert("HopSendingTime_t_975241464");
      all_values.push_back(Hop_98_set);
      all_compo_names.insert("Hop_98_set");

      Hdr_98.add_element(Hop_98);
    }
    elt.add_element(Hdr_98);
  } // end Hdr
  { // Pty
    xml_element Pty_427{"Pty"};
    multiset<string> Pty_427_set;
    Pty_427.add_attribute("ID", "PartyID_t_2047263216"); // 1
    Pty_427_set.insert("PartyID_t_2047263216");
    Pty_427.add_attribute("Src", "1"); // 1
    Pty_427_set.insert("1");
    Pty_427.add_attribute("R", "21"); // 1
    Pty_427_set.insert("21");
    all_values.push_back(Pty_427_set);
    all_compo_names.insert("Pty_427_set");

    {
      xml_element Sub_427{"Sub"};
      multiset<string> Sub_427_set;
      Sub_427.add_attribute("ID", "PartySubID_t_261382299"); // 2
      Sub_427_set.insert("PartySubID_t_261382299");
      Sub_427.add_attribute("Typ", "15"); // 2
      Sub_427_set.insert("15");
      all_values.push_back(Sub_427_set);
      all_compo_names.insert("Sub_427_set");

      Pty_427.add_element(Sub_427);
    }
    elt.add_element(Pty_427);
  } // end Pty
  { // Pty
    xml_element Pty_428{"Pty"};
    multiset<string> Pty_428_set;
    Pty_428.add_attribute("ID", "PartyID_t_1843097924"); // 1
    Pty_428_set.insert("PartyID_t_1843097924");
    Pty_428.add_attribute("Src", "7"); // 1
    Pty_428_set.insert("7");
    Pty_428.add_attribute("R", "24"); // 1
    Pty_428_set.insert("24");
    all_values.push_back(Pty_428_set);
    all_compo_names.insert("Pty_428_set");

    {
      xml_element Sub_428{"Sub"};
      multiset<string> Sub_428_set;
      Sub_428.add_attribute("ID", "PartySubID_t_677559895"); // 2
      Sub_428_set.insert("PartySubID_t_677559895");
      Sub_428.add_attribute("Typ", "10"); // 2
      Sub_428_set.insert("10");
      all_values.push_back(Sub_428_set);
      all_compo_names.insert("Sub_428_set");

      Pty_428.add_element(Sub_428);
    }
    elt.add_element(Pty_428);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_87{"Instrmt"};
    multiset<string> Instrmt_87_set;
    Instrmt_87.add_attribute("Sym", "Symbol_t_1778989089"); // 1
    Instrmt_87_set.insert("Symbol_t_1778989089");
    Instrmt_87.add_attribute("Sfx", "WI"); // 1
    Instrmt_87_set.insert("WI");
    Instrmt_87.add_attribute("ID", "SecurityID_t_567651510"); // 1
    Instrmt_87_set.insert("SecurityID_t_567651510");
    Instrmt_87.add_attribute("Src", "C"); // 1
    Instrmt_87_set.insert("C");
    Instrmt_87.add_attribute("Prod", "1"); // 1
    Instrmt_87_set.insert("1");
    Instrmt_87.add_attribute("ProdCmplx", "ProductComplex_t_951428777"); // 1
    Instrmt_87_set.insert("ProductComplex_t_951428777");
    Instrmt_87.add_attribute("SecGrp", "SecurityGroup_t_1159787758"); // 1
    Instrmt_87_set.insert("SecurityGroup_t_1159787758");
    Instrmt_87.add_attribute("CFI", "CFICode_t_444629193"); // 1
    Instrmt_87_set.insert("CFICode_t_444629193");
    Instrmt_87.add_attribute("SecTyp", "STN"); // 1
    Instrmt_87_set.insert("STN");
    Instrmt_87.add_attribute("SubTyp", "SecuritySubType_t_1649629448"); // 1
    Instrmt_87_set.insert("SecuritySubType_t_1649629448");
    Instrmt_87.add_attribute("MMY", "192299358"); // 1
    Instrmt_87_set.insert("192299358");
    Instrmt_87.add_attribute("MatDt", "MaturityDate_t_207577021"); // 1
    Instrmt_87_set.insert("MaturityDate_t_207577021");
    Instrmt_87.add_attribute("MatTm", "1346473314"); // 1
    Instrmt_87_set.insert("1346473314");
    Instrmt_87.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_353028618"); // 1
    Instrmt_87_set.insert("SettleOnOpenFlag_t_353028618");
    Instrmt_87.add_attribute("AsgnMeth", "1741016574"); // 1
    Instrmt_87_set.insert("1741016574");
    Instrmt_87.add_attribute("Status", "1"); // 1
    Instrmt_87_set.insert("1");
    Instrmt_87.add_attribute("CpnPmt", "CouponPaymentDate_t_1060467933"); // 1
    Instrmt_87_set.insert("CouponPaymentDate_t_1060467933");
    Instrmt_87.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_87_set.insert("FR");
    Instrmt_87.add_attribute("Snrty", "SB"); // 1
    Instrmt_87_set.insert("SB");
    Instrmt_87.add_attribute("NotlPctOut", "20357093.970000"); // 1
    Instrmt_87_set.insert("20357093.970000");
    Instrmt_87.add_attribute("OrigNotlPctOut", "7891904.290000"); // 1
    Instrmt_87_set.insert("7891904.290000");
    Instrmt_87.add_attribute("AttchPnt", "6269228.490000"); // 1
    Instrmt_87_set.insert("6269228.490000");
    Instrmt_87.add_attribute("DetchPnt", "9363794.650000"); // 1
    Instrmt_87_set.insert("9363794.650000");
    Instrmt_87.add_attribute("Issued", "IssueDate_t_1858924982"); // 1
    Instrmt_87_set.insert("IssueDate_t_1858924982");
    Instrmt_87.add_attribute("RepoCollSecTyp", "888305149"); // 1
    Instrmt_87_set.insert("888305149");
    Instrmt_87.add_attribute("RepoTrm", "1181355004"); // 1
    Instrmt_87_set.insert("1181355004");
    Instrmt_87.add_attribute("RepoRt", "15545392.590000"); // 1
    Instrmt_87_set.insert("15545392.590000");
    Instrmt_87.add_attribute("Fctr", "16764214.390000"); // 1
    Instrmt_87_set.insert("16764214.390000");
    Instrmt_87.add_attribute("CrdRtg", "CreditRating_t_2080997623"); // 1
    Instrmt_87_set.insert("CreditRating_t_2080997623");
    Instrmt_87.add_attribute("Rgstry", "InstrRegistry_t_84615506"); // 1
    Instrmt_87_set.insert("InstrRegistry_t_84615506");
    Instrmt_87.add_attribute("IssuCtry", "2024614538"); // 1
    Instrmt_87_set.insert("2024614538");
    Instrmt_87.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1712503064"); // 1
    Instrmt_87_set.insert("StateOrProvinceOfIssue_t_1712503064");
    Instrmt_87.add_attribute("Lcl", "LocaleOfIssue_t_894655950"); // 1
    Instrmt_87_set.insert("LocaleOfIssue_t_894655950");
    Instrmt_87.add_attribute("Redeem", "RedemptionDate_t_444782400"); // 1
    Instrmt_87_set.insert("RedemptionDate_t_444782400");
    Instrmt_87.add_attribute("StrkPx", "10404173.510000"); // 1
    Instrmt_87_set.insert("10404173.510000");
    Instrmt_87.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_87_set.insert("USD");
    Instrmt_87.add_attribute("StrkMult", "527214.620000"); // 1
    Instrmt_87_set.insert("527214.620000");
    Instrmt_87.add_attribute("StrkValu", "529753.930000"); // 1
    Instrmt_87_set.insert("529753.930000");
    Instrmt_87.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_87_set.insert("1");
    Instrmt_87.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_87_set.insert("1");
    Instrmt_87.add_attribute("StrkPxBndryPrcsn", "2452747.510000"); // 1
    Instrmt_87_set.insert("2452747.510000");
    Instrmt_87.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_87_set.insert("2");
    Instrmt_87.add_attribute("OptAt", "901340576"); // 1
    Instrmt_87_set.insert("901340576");
    Instrmt_87.add_attribute("Mult", "5983033.700000"); // 1
    Instrmt_87_set.insert("5983033.700000");
    Instrmt_87.add_attribute("MultTyp", "2"); // 1
    Instrmt_87_set.insert("2");
    Instrmt_87.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_87_set.insert("2");
    Instrmt_87.add_attribute("MinPxIncr", "16587713.030000"); // 1
    Instrmt_87_set.insert("16587713.030000");
    Instrmt_87.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_739367168"); // 1
    Instrmt_87_set.insert("MinPriceIncrementAmount_t_739367168");
    Instrmt_87.add_attribute("UOM", "tn"); // 1
    Instrmt_87_set.insert("tn");
    Instrmt_87.add_attribute("UOMQty", "15469970.520000"); // 1
    Instrmt_87_set.insert("15469970.520000");
    Instrmt_87.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_87_set.insert("oz_tr");
    Instrmt_87.add_attribute("PxUOMQty", "10114207.990000"); // 1
    Instrmt_87_set.insert("10114207.990000");
    Instrmt_87.add_attribute("SettlMeth", "P"); // 1
    Instrmt_87_set.insert("P");
    Instrmt_87.add_attribute("ExerStyle", "0"); // 1
    Instrmt_87_set.insert("0");
    Instrmt_87.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_87_set.insert("3");
    Instrmt_87.add_attribute("OptPayAmt", "OptPayoutAmount_t_1517247873"); // 1
    Instrmt_87_set.insert("OptPayoutAmount_t_1517247873");
    Instrmt_87.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_87_set.insert("INT");
    Instrmt_87.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_87_set.insert("CDSD");
    Instrmt_87.add_attribute("ListMeth", "0"); // 1
    Instrmt_87_set.insert("0");
    Instrmt_87.add_attribute("CapPx", "7316700.490000"); // 1
    Instrmt_87_set.insert("7316700.490000");
    Instrmt_87.add_attribute("FlrPx", "13057946.290000"); // 1
    Instrmt_87_set.insert("13057946.290000");
    Instrmt_87.add_attribute("PutCall", "0"); // 1
    Instrmt_87_set.insert("0");
    Instrmt_87.add_attribute("FlexInd", "false"); // 1
    Instrmt_87_set.insert("false");
    Instrmt_87.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_87_set.insert("true");
    Instrmt_87.add_attribute("TmUnit", "H"); // 1
    Instrmt_87_set.insert("H");
    Instrmt_87.add_attribute("CpnRt", "12346721.990000"); // 1
    Instrmt_87_set.insert("12346721.990000");
    Instrmt_87.add_attribute("Exch", "SecurityExchange_t_999304560"); // 1
    Instrmt_87_set.insert("SecurityExchange_t_999304560");
    Instrmt_87.add_attribute("PosLmt", "2108920077"); // 1
    Instrmt_87_set.insert("2108920077");
    Instrmt_87.add_attribute("NTPosLmt", "1287647592"); // 1
    Instrmt_87_set.insert("1287647592");
    Instrmt_87.add_attribute("Issr", "Issuer_t_1246463316"); // 1
    Instrmt_87_set.insert("Issuer_t_1246463316");
    Instrmt_87.add_attribute("EncIssrLen", "1663787340"); // 1
    Instrmt_87_set.insert("1663787340");
    Instrmt_87.add_attribute("EncIssr", "EncodedIssuer_t_1532922343"); // 1
    Instrmt_87_set.insert("EncodedIssuer_t_1532922343");
    Instrmt_87.add_attribute("Desc", "SecurityDesc_t_1701199093"); // 1
    Instrmt_87_set.insert("SecurityDesc_t_1701199093");
    Instrmt_87.add_attribute("EncSecDescLen", "417644268"); // 1
    Instrmt_87_set.insert("417644268");
    Instrmt_87.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2131225713"); // 1
    Instrmt_87_set.insert("EncodedSecurityDesc_t_2131225713");
    Instrmt_87.add_attribute("Pool", "Pool_t_1749467796"); // 1
    Instrmt_87_set.insert("Pool_t_1749467796");
    Instrmt_87.add_attribute("CSetMo", "74998937"); // 1
    Instrmt_87_set.insert("74998937");
    Instrmt_87.add_attribute("CPPgm", "1"); // 1
    Instrmt_87_set.insert("1");
    Instrmt_87.add_attribute("CPRegT", "CPRegType_t_341351316"); // 1
    Instrmt_87_set.insert("CPRegType_t_341351316");
    Instrmt_87.add_attribute("Dated", "DatedDate_t_459496887"); // 1
    Instrmt_87_set.insert("DatedDate_t_459496887");
    Instrmt_87.add_attribute("IntAcrl", "InterestAccrualDate_t_1042026772"); // 1
    Instrmt_87_set.insert("InterestAccrualDate_t_1042026772");
    all_values.push_back(Instrmt_87_set);
    all_compo_names.insert("Instrmt_87_set");

    {
      xml_element AID_90{"AID"};
      multiset<string> AID_90_set;
      AID_90.add_attribute("AltID", "SecurityAltID_t_1869908913"); // 2
      AID_90_set.insert("SecurityAltID_t_1869908913");
      AID_90.add_attribute("AltIDSrc", "L"); // 2
      AID_90_set.insert("L");
      all_values.push_back(AID_90_set);
      all_compo_names.insert("AID_90_set");

      Instrmt_87.add_element(AID_90);
    }
    {
      xml_element SecXML_87{"SecXML"};
      multiset<string> SecXML_87_set;
      SecXML_87.add_attribute("Schema", "SecurityXMLSchema_t_1377919641"); // 2
      SecXML_87_set.insert("SecurityXMLSchema_t_1377919641");
      all_values.push_back(SecXML_87_set);
      all_compo_names.insert("SecXML_87_set");

      Instrmt_87.add_element(SecXML_87);
    }
    {
      xml_element Evnt_87{"Evnt"};
      multiset<string> Evnt_87_set;
      Evnt_87.add_attribute("EventTyp", "17"); // 2
      Evnt_87_set.insert("17");
      Evnt_87.add_attribute("Dt", "EventDate_t_1223159987"); // 2
      Evnt_87_set.insert("EventDate_t_1223159987");
      Evnt_87.add_attribute("Tm", "EventTime_t_747683866"); // 2
      Evnt_87_set.insert("EventTime_t_747683866");
      Evnt_87.add_attribute("Px", "16094787.390000"); // 2
      Evnt_87_set.insert("16094787.390000");
      Evnt_87.add_attribute("Txt", "EventText_t_504340079"); // 2
      Evnt_87_set.insert("EventText_t_504340079");
      all_values.push_back(Evnt_87_set);
      all_compo_names.insert("Evnt_87_set");

      Instrmt_87.add_element(Evnt_87);
    }
    {
      xml_element Pty_429{"Pty"};
      multiset<string> Pty_429_set;
      Pty_429.add_attribute("ID", "InstrumentPartyID_t_50962066"); // 2
      Pty_429_set.insert("InstrumentPartyID_t_50962066");
      Pty_429.add_attribute("Src", "9"); // 2
      Pty_429_set.insert("9");
      Pty_429.add_attribute("R", "62"); // 2
      Pty_429_set.insert("62");
      all_values.push_back(Pty_429_set);
      all_compo_names.insert("Pty_429_set");

      {
        xml_element Sub_429{"Sub"};
        multiset<string> Sub_429_set;
        Sub_429.add_attribute("ID", "InstrumentPartySubID_t_1066743330"); // 3
        Sub_429_set.insert("InstrumentPartySubID_t_1066743330");
        Sub_429.add_attribute("Typ", "5"); // 3
        Sub_429_set.insert("5");
        all_values.push_back(Sub_429_set);
        all_compo_names.insert("Sub_429_set");

        Pty_429.add_element(Sub_429);
      }
      Instrmt_87.add_element(Pty_429);
    }
    {
      xml_element CmplxEvnt_84{"CmplxEvnt"};
      multiset<string> CmplxEvnt_84_set;
      CmplxEvnt_84.add_attribute("Typ", "4"); // 2
      CmplxEvnt_84_set.insert("4");
      CmplxEvnt_84.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_975458298"); // 2
      CmplxEvnt_84_set.insert("ComplexOptPayoutAmount_t_975458298");
      CmplxEvnt_84.add_attribute("Px", "9071796.900000"); // 2
      CmplxEvnt_84_set.insert("9071796.900000");
      CmplxEvnt_84.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_84_set.insert("3");
      CmplxEvnt_84.add_attribute("PxBndryPrcsn", "9368947.270000"); // 2
      CmplxEvnt_84_set.insert("9368947.270000");
      CmplxEvnt_84.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_84_set.insert("2");
      CmplxEvnt_84.add_attribute("Cond", "1"); // 2
      CmplxEvnt_84_set.insert("1");
      all_values.push_back(CmplxEvnt_84_set);
      all_compo_names.insert("CmplxEvnt_84_set");

      {
        xml_element EvntDts_84{"EvntDts"};
        multiset<string> EvntDts_84_set;
        EvntDts_84.add_attribute("StartDt", "ComplexEventStartDate_t_453198419"); // 3
        EvntDts_84_set.insert("ComplexEventStartDate_t_453198419");
        EvntDts_84.add_attribute("EndDt", "ComplexEventEndDate_t_1580265978"); // 3
        EvntDts_84_set.insert("ComplexEventEndDate_t_1580265978");
        all_values.push_back(EvntDts_84_set);
        all_compo_names.insert("EvntDts_84_set");

        {
          xml_element EvntTms_84{"EvntTms"};
          multiset<string> EvntTms_84_set;
          EvntTms_84.add_attribute("StartTm", "1065227763"); // 4
          EvntTms_84_set.insert("1065227763");
          EvntTms_84.add_attribute("EndTm", "870842688"); // 4
          EvntTms_84_set.insert("870842688");
          all_values.push_back(EvntTms_84_set);
          all_compo_names.insert("EvntTms_84_set");

          EvntDts_84.add_element(EvntTms_84);
        }
        CmplxEvnt_84.add_element(EvntDts_84);
      }
      Instrmt_87.add_element(CmplxEvnt_84);
    }
    elt.add_element(Instrmt_87);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_17{"InstrmtExt"};
    multiset<string> InstrmtExt_17_set;
    InstrmtExt_17.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_17_set.insert("2");
    InstrmtExt_17.add_attribute("PctAtRisk", "6672119.120000"); // 1
    InstrmtExt_17_set.insert("6672119.120000");
    all_values.push_back(InstrmtExt_17_set);
    all_compo_names.insert("InstrmtExt_17_set");

    {
      xml_element Attrb_30{"Attrb"};
      multiset<string> Attrb_30_set;
      Attrb_30.add_attribute("Typ", "14"); // 2
      Attrb_30_set.insert("14");
      Attrb_30.add_attribute("Val", "InstrAttribValue_t_1059037764"); // 2
      Attrb_30_set.insert("InstrAttribValue_t_1059037764");
      all_values.push_back(Attrb_30_set);
      all_compo_names.insert("Attrb_30_set");

      InstrmtExt_17.add_element(Attrb_30);
    }
    elt.add_element(InstrmtExt_17);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_31{"FinDetls"};
    multiset<string> FinDetls_31_set;
    FinDetls_31.add_attribute("AgmtDesc", "AgreementDesc_t_1008563228"); // 1
    FinDetls_31_set.insert("AgreementDesc_t_1008563228");
    FinDetls_31.add_attribute("AgmtID", "AgreementID_t_1405338513"); // 1
    FinDetls_31_set.insert("AgreementID_t_1405338513");
    FinDetls_31.add_attribute("AgmtDt", "AgreementDate_t_2101064536"); // 1
    FinDetls_31_set.insert("AgreementDate_t_2101064536");
    FinDetls_31.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_31_set.insert("USD");
    FinDetls_31.add_attribute("TrmTyp", "3"); // 1
    FinDetls_31_set.insert("3");
    FinDetls_31.add_attribute("StartDt", "StartDate_t_1693412691"); // 1
    FinDetls_31_set.insert("StartDate_t_1693412691");
    FinDetls_31.add_attribute("EndDt", "EndDate_t_1951932539"); // 1
    FinDetls_31_set.insert("EndDate_t_1951932539");
    FinDetls_31.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_31_set.insert("0");
    FinDetls_31.add_attribute("MgnRatio", "11554077.820000"); // 1
    FinDetls_31_set.insert("11554077.820000");
    all_values.push_back(FinDetls_31_set);
    all_compo_names.insert("FinDetls_31_set");

    elt.add_element(FinDetls_31);
  } // end FinDetls
  { // Undly
    xml_element Undly_115{"Undly"};
    multiset<string> Undly_115_set;
    Undly_115.add_attribute("Sym", "UnderlyingSymbol_t_2130146463"); // 1
    Undly_115_set.insert("UnderlyingSymbol_t_2130146463");
    Undly_115.add_attribute("Sfx", "WI"); // 1
    Undly_115_set.insert("WI");
    Undly_115.add_attribute("ID", "UnderlyingSecurityID_t_2118923679"); // 1
    Undly_115_set.insert("UnderlyingSecurityID_t_2118923679");
    Undly_115.add_attribute("Src", "8"); // 1
    Undly_115_set.insert("8");
    Undly_115.add_attribute("Prod", "7"); // 1
    Undly_115_set.insert("7");
    Undly_115.add_attribute("CFI", "UnderlyingCFICode_t_1384668121"); // 1
    Undly_115_set.insert("UnderlyingCFICode_t_1384668121");
    Undly_115.add_attribute("SecTyp", "CS"); // 1
    Undly_115_set.insert("CS");
    Undly_115.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1928760105"); // 1
    Undly_115_set.insert("UnderlyingSecuritySubType_t_1928760105");
    Undly_115.add_attribute("MMY", "1649717124"); // 1
    Undly_115_set.insert("1649717124");
    Undly_115.add_attribute("Mat", "UnderlyingMaturityDate_t_814275523"); // 1
    Undly_115_set.insert("UnderlyingMaturityDate_t_814275523");
    Undly_115.add_attribute("MatTm", "1976103739"); // 1
    Undly_115_set.insert("1976103739");
    Undly_115.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1013745794"); // 1
    Undly_115_set.insert("UnderlyingCouponPaymentDate_t_1013745794");
    Undly_115.add_attribute("RestrctTyp", "MM"); // 1
    Undly_115_set.insert("MM");
    Undly_115.add_attribute("Snrty", "SB"); // 1
    Undly_115_set.insert("SB");
    Undly_115.add_attribute("NotlPctOut", "20789735.580000"); // 1
    Undly_115_set.insert("20789735.580000");
    Undly_115.add_attribute("OrigNotlPctOut", "21383166.300000"); // 1
    Undly_115_set.insert("21383166.300000");
    Undly_115.add_attribute("AttchPnt", "8254104.650000"); // 1
    Undly_115_set.insert("8254104.650000");
    Undly_115.add_attribute("DetchPnt", "5987018.220000"); // 1
    Undly_115_set.insert("5987018.220000");
    Undly_115.add_attribute("Issued", "UnderlyingIssueDate_t_936674608"); // 1
    Undly_115_set.insert("UnderlyingIssueDate_t_936674608");
    Undly_115.add_attribute("RepoCollSecTyp", "1884448229"); // 1
    Undly_115_set.insert("1884448229");
    Undly_115.add_attribute("RepoTrm", "1607265050"); // 1
    Undly_115_set.insert("1607265050");
    Undly_115.add_attribute("RepoRt", "1945294.730000"); // 1
    Undly_115_set.insert("1945294.730000");
    Undly_115.add_attribute("Fctr", "18380291.170000"); // 1
    Undly_115_set.insert("18380291.170000");
    Undly_115.add_attribute("CrdRtg", "UnderlyingCreditRating_t_190769896"); // 1
    Undly_115_set.insert("UnderlyingCreditRating_t_190769896");
    Undly_115.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_923302025"); // 1
    Undly_115_set.insert("UnderlyingInstrRegistry_t_923302025");
    Undly_115.add_attribute("Ctry", "1022045999"); // 1
    Undly_115_set.insert("1022045999");
    Undly_115.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1884182587"); // 1
    Undly_115_set.insert("UnderlyingStateOrProvinceOfIssue_t_1884182587");
    Undly_115.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_727750916"); // 1
    Undly_115_set.insert("UnderlyingLocaleOfIssue_t_727750916");
    Undly_115.add_attribute("Redeem", "UnderlyingRedemptionDate_t_953746748"); // 1
    Undly_115_set.insert("UnderlyingRedemptionDate_t_953746748");
    Undly_115.add_attribute("StrkPx", "8921067.220000"); // 1
    Undly_115_set.insert("8921067.220000");
    Undly_115.add_attribute("StrkCcy", "CHF"); // 1
    Undly_115_set.insert("CHF");
    Undly_115.add_attribute("OptA", "93695997"); // 1
    Undly_115_set.insert("93695997");
    Undly_115.add_attribute("Mult", "10079799.180000"); // 1
    Undly_115_set.insert("10079799.180000");
    Undly_115.add_attribute("MultTyp", "1"); // 1
    Undly_115_set.insert("1");
    Undly_115.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_115_set.insert("1");
    Undly_115.add_attribute("UOM", "t"); // 1
    Undly_115_set.insert("t");
    Undly_115.add_attribute("UOMQty", "18631965.040000"); // 1
    Undly_115_set.insert("18631965.040000");
    Undly_115.add_attribute("PxUOM", "Gal"); // 1
    Undly_115_set.insert("Gal");
    Undly_115.add_attribute("PxUOMQty", "18948815.150000"); // 1
    Undly_115_set.insert("18948815.150000");
    Undly_115.add_attribute("TmUnit", "Wk"); // 1
    Undly_115_set.insert("Wk");
    Undly_115.add_attribute("ExerStyle", "0"); // 1
    Undly_115_set.insert("0");
    Undly_115.add_attribute("CpnRt", "7611436.620000"); // 1
    Undly_115_set.insert("7611436.620000");
    Undly_115.add_attribute("Exch", "UnderlyingSecurityExchange_t_1797462321"); // 1
    Undly_115_set.insert("UnderlyingSecurityExchange_t_1797462321");
    Undly_115.add_attribute("Issr", "UnderlyingIssuer_t_2134059029"); // 1
    Undly_115_set.insert("UnderlyingIssuer_t_2134059029");
    Undly_115.add_attribute("EncUndIssrLen", "692633572"); // 1
    Undly_115_set.insert("692633572");
    Undly_115.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1788295304"); // 1
    Undly_115_set.insert("EncodedUnderlyingIssuer_t_1788295304");
    Undly_115.add_attribute("Desc", "UnderlyingSecurityDesc_t_811985846"); // 1
    Undly_115_set.insert("UnderlyingSecurityDesc_t_811985846");
    Undly_115.add_attribute("EncUndSecDescLen", "1291335394"); // 1
    Undly_115_set.insert("1291335394");
    Undly_115.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_577486264"); // 1
    Undly_115_set.insert("EncodedUnderlyingSecurityDesc_t_577486264");
    Undly_115.add_attribute("CPPgm", "UnderlyingCPProgram_t_548950427"); // 1
    Undly_115_set.insert("UnderlyingCPProgram_t_548950427");
    Undly_115.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_751116796"); // 1
    Undly_115_set.insert("UnderlyingCPRegType_t_751116796");
    Undly_115.add_attribute("AllocPct", "7720157.370000"); // 1
    Undly_115_set.insert("7720157.370000");
    Undly_115.add_attribute("Ccy", "CHF"); // 1
    Undly_115_set.insert("CHF");
    Undly_115.add_attribute("Qty", "16953177.620000"); // 1
    Undly_115_set.insert("16953177.620000");
    Undly_115.add_attribute("SettlTyp", "4"); // 1
    Undly_115_set.insert("4");
    Undly_115.add_attribute("CashAmt", "UnderlyingCashAmount_t_678585632"); // 1
    Undly_115_set.insert("UnderlyingCashAmount_t_678585632");
    Undly_115.add_attribute("CashTyp", "FIXED"); // 1
    Undly_115_set.insert("FIXED");
    Undly_115.add_attribute("Px", "678049.960000"); // 1
    Undly_115_set.insert("678049.960000");
    Undly_115.add_attribute("DirtPx", "15706923.540000"); // 1
    Undly_115_set.insert("15706923.540000");
    Undly_115.add_attribute("EndPx", "13121249.170000"); // 1
    Undly_115_set.insert("13121249.170000");
    Undly_115.add_attribute("StartVal", "UnderlyingStartValue_t_1004214559"); // 1
    Undly_115_set.insert("UnderlyingStartValue_t_1004214559");
    Undly_115.add_attribute("CurVal", "UnderlyingCurrentValue_t_1664388351"); // 1
    Undly_115_set.insert("UnderlyingCurrentValue_t_1664388351");
    Undly_115.add_attribute("EndVal", "UnderlyingEndValue_t_172621187"); // 1
    Undly_115_set.insert("UnderlyingEndValue_t_172621187");
    Undly_115.add_attribute("AdjQty", "8425466.200000"); // 1
    Undly_115_set.insert("8425466.200000");
    Undly_115.add_attribute("FxRate", "6321811.150000"); // 1
    Undly_115_set.insert("6321811.150000");
    Undly_115.add_attribute("FxRateCalc", "D"); // 1
    Undly_115_set.insert("D");
    Undly_115.add_attribute("CapValu", "UnderlyingCapValue_t_558259476"); // 1
    Undly_115_set.insert("UnderlyingCapValue_t_558259476");
    Undly_115.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1528733983"); // 1
    Undly_115_set.insert("UnderlyingSettlMethod_t_1528733983");
    Undly_115.add_attribute("PutCall", "165183446"); // 1
    Undly_115_set.insert("165183446");
    all_values.push_back(Undly_115_set);
    all_compo_names.insert("Undly_115_set");

    {
      xml_element UndAID_115{"UndAID"};
      multiset<string> UndAID_115_set;
      UndAID_115.add_attribute("AltID", "UnderlyingSecurityAltID_t_1088247855"); // 2
      UndAID_115_set.insert("UnderlyingSecurityAltID_t_1088247855");
      UndAID_115.add_attribute("AltIDSrc", "C"); // 2
      UndAID_115_set.insert("C");
      all_values.push_back(UndAID_115_set);
      all_compo_names.insert("UndAID_115_set");

      Undly_115.add_element(UndAID_115);
    }
    {
      xml_element Stip_187{"Stip"};
      multiset<string> Stip_187_set;
      Stip_187.add_attribute("Typ", "AVAILQTY"); // 2
      Stip_187_set.insert("AVAILQTY");
      Stip_187.add_attribute("Val", "UnderlyingStipValue_t_738226528"); // 2
      Stip_187_set.insert("UnderlyingStipValue_t_738226528");
      all_values.push_back(Stip_187_set);
      all_compo_names.insert("Stip_187_set");

      Undly_115.add_element(Stip_187);
    }
    {
      xml_element Pty_430{"Pty"};
      multiset<string> Pty_430_set;
      Pty_430.add_attribute("ID", "UnderlyingInstrumentPartyID_t_92998677"); // 2
      Pty_430_set.insert("UnderlyingInstrumentPartyID_t_92998677");
      Pty_430.add_attribute("Src", "1"); // 2
      Pty_430_set.insert("1");
      Pty_430.add_attribute("R", "36"); // 2
      Pty_430_set.insert("36");
      all_values.push_back(Pty_430_set);
      all_compo_names.insert("Pty_430_set");

      {
        xml_element Sub_430{"Sub"};
        multiset<string> Sub_430_set;
        Sub_430.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_904984523"); // 3
        Sub_430_set.insert("UnderlyingInstrumentPartySubID_t_904984523");
        Sub_430.add_attribute("Typ", "11"); // 3
        Sub_430_set.insert("11");
        all_values.push_back(Sub_430_set);
        all_compo_names.insert("Sub_430_set");

        Pty_430.add_element(Sub_430);
      }
      Undly_115.add_element(Pty_430);
    }
    elt.add_element(Undly_115);
  } // end Undly
  { // Undly
    xml_element Undly_116{"Undly"};
    multiset<string> Undly_116_set;
    Undly_116.add_attribute("Sym", "UnderlyingSymbol_t_956524448"); // 1
    Undly_116_set.insert("UnderlyingSymbol_t_956524448");
    Undly_116.add_attribute("Sfx", "WI"); // 1
    Undly_116_set.insert("WI");
    Undly_116.add_attribute("ID", "UnderlyingSecurityID_t_1513929223"); // 1
    Undly_116_set.insert("UnderlyingSecurityID_t_1513929223");
    Undly_116.add_attribute("Src", "A"); // 1
    Undly_116_set.insert("A");
    Undly_116.add_attribute("Prod", "2"); // 1
    Undly_116_set.insert("2");
    Undly_116.add_attribute("CFI", "UnderlyingCFICode_t_308332268"); // 1
    Undly_116_set.insert("UnderlyingCFICode_t_308332268");
    Undly_116.add_attribute("SecTyp", "MIO"); // 1
    Undly_116_set.insert("MIO");
    Undly_116.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_807489096"); // 1
    Undly_116_set.insert("UnderlyingSecuritySubType_t_807489096");
    Undly_116.add_attribute("MMY", "986917900"); // 1
    Undly_116_set.insert("986917900");
    Undly_116.add_attribute("Mat", "UnderlyingMaturityDate_t_1551959330"); // 1
    Undly_116_set.insert("UnderlyingMaturityDate_t_1551959330");
    Undly_116.add_attribute("MatTm", "875294093"); // 1
    Undly_116_set.insert("875294093");
    Undly_116.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_410126607"); // 1
    Undly_116_set.insert("UnderlyingCouponPaymentDate_t_410126607");
    Undly_116.add_attribute("RestrctTyp", "XR"); // 1
    Undly_116_set.insert("XR");
    Undly_116.add_attribute("Snrty", "SD"); // 1
    Undly_116_set.insert("SD");
    Undly_116.add_attribute("NotlPctOut", "20745149.580000"); // 1
    Undly_116_set.insert("20745149.580000");
    Undly_116.add_attribute("OrigNotlPctOut", "8892217.870000"); // 1
    Undly_116_set.insert("8892217.870000");
    Undly_116.add_attribute("AttchPnt", "5745716.240000"); // 1
    Undly_116_set.insert("5745716.240000");
    Undly_116.add_attribute("DetchPnt", "5592124.250000"); // 1
    Undly_116_set.insert("5592124.250000");
    Undly_116.add_attribute("Issued", "UnderlyingIssueDate_t_1307007366"); // 1
    Undly_116_set.insert("UnderlyingIssueDate_t_1307007366");
    Undly_116.add_attribute("RepoCollSecTyp", "1132831100"); // 1
    Undly_116_set.insert("1132831100");
    Undly_116.add_attribute("RepoTrm", "2087946409"); // 1
    Undly_116_set.insert("2087946409");
    Undly_116.add_attribute("RepoRt", "14721908.120000"); // 1
    Undly_116_set.insert("14721908.120000");
    Undly_116.add_attribute("Fctr", "735953.070000"); // 1
    Undly_116_set.insert("735953.070000");
    Undly_116.add_attribute("CrdRtg", "UnderlyingCreditRating_t_46886056"); // 1
    Undly_116_set.insert("UnderlyingCreditRating_t_46886056");
    Undly_116.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_251034273"); // 1
    Undly_116_set.insert("UnderlyingInstrRegistry_t_251034273");
    Undly_116.add_attribute("Ctry", "811821836"); // 1
    Undly_116_set.insert("811821836");
    Undly_116.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_139884733"); // 1
    Undly_116_set.insert("UnderlyingStateOrProvinceOfIssue_t_139884733");
    Undly_116.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1869994953"); // 1
    Undly_116_set.insert("UnderlyingLocaleOfIssue_t_1869994953");
    Undly_116.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1190860020"); // 1
    Undly_116_set.insert("UnderlyingRedemptionDate_t_1190860020");
    Undly_116.add_attribute("StrkPx", "10448692.570000"); // 1
    Undly_116_set.insert("10448692.570000");
    Undly_116.add_attribute("StrkCcy", "CHF"); // 1
    Undly_116_set.insert("CHF");
    Undly_116.add_attribute("OptA", "351320560"); // 1
    Undly_116_set.insert("351320560");
    Undly_116.add_attribute("Mult", "19992529.550000"); // 1
    Undly_116_set.insert("19992529.550000");
    Undly_116.add_attribute("MultTyp", "0"); // 1
    Undly_116_set.insert("0");
    Undly_116.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_116_set.insert("3");
    Undly_116.add_attribute("UOM", "Bcf"); // 1
    Undly_116_set.insert("Bcf");
    Undly_116.add_attribute("UOMQty", "8573316.580000"); // 1
    Undly_116_set.insert("8573316.580000");
    Undly_116.add_attribute("PxUOM", "Bu"); // 1
    Undly_116_set.insert("Bu");
    Undly_116.add_attribute("PxUOMQty", "11470194.750000"); // 1
    Undly_116_set.insert("11470194.750000");
    Undly_116.add_attribute("TmUnit", "Wk"); // 1
    Undly_116_set.insert("Wk");
    Undly_116.add_attribute("ExerStyle", "2"); // 1
    Undly_116_set.insert("2");
    Undly_116.add_attribute("CpnRt", "15571460.820000"); // 1
    Undly_116_set.insert("15571460.820000");
    Undly_116.add_attribute("Exch", "UnderlyingSecurityExchange_t_978407939"); // 1
    Undly_116_set.insert("UnderlyingSecurityExchange_t_978407939");
    Undly_116.add_attribute("Issr", "UnderlyingIssuer_t_1312075954"); // 1
    Undly_116_set.insert("UnderlyingIssuer_t_1312075954");
    Undly_116.add_attribute("EncUndIssrLen", "1484177393"); // 1
    Undly_116_set.insert("1484177393");
    Undly_116.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1867629726"); // 1
    Undly_116_set.insert("EncodedUnderlyingIssuer_t_1867629726");
    Undly_116.add_attribute("Desc", "UnderlyingSecurityDesc_t_1886647578"); // 1
    Undly_116_set.insert("UnderlyingSecurityDesc_t_1886647578");
    Undly_116.add_attribute("EncUndSecDescLen", "2043389818"); // 1
    Undly_116_set.insert("2043389818");
    Undly_116.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1027153444"); // 1
    Undly_116_set.insert("EncodedUnderlyingSecurityDesc_t_1027153444");
    Undly_116.add_attribute("CPPgm", "UnderlyingCPProgram_t_871995031"); // 1
    Undly_116_set.insert("UnderlyingCPProgram_t_871995031");
    Undly_116.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1983852579"); // 1
    Undly_116_set.insert("UnderlyingCPRegType_t_1983852579");
    Undly_116.add_attribute("AllocPct", "3518606.090000"); // 1
    Undly_116_set.insert("3518606.090000");
    Undly_116.add_attribute("Ccy", "GBP"); // 1
    Undly_116_set.insert("GBP");
    Undly_116.add_attribute("Qty", "6028948.820000"); // 1
    Undly_116_set.insert("6028948.820000");
    Undly_116.add_attribute("SettlTyp", "2"); // 1
    Undly_116_set.insert("2");
    Undly_116.add_attribute("CashAmt", "UnderlyingCashAmount_t_23139721"); // 1
    Undly_116_set.insert("UnderlyingCashAmount_t_23139721");
    Undly_116.add_attribute("CashTyp", "DIFF"); // 1
    Undly_116_set.insert("DIFF");
    Undly_116.add_attribute("Px", "8007885.470000"); // 1
    Undly_116_set.insert("8007885.470000");
    Undly_116.add_attribute("DirtPx", "10680089.780000"); // 1
    Undly_116_set.insert("10680089.780000");
    Undly_116.add_attribute("EndPx", "8107299.190000"); // 1
    Undly_116_set.insert("8107299.190000");
    Undly_116.add_attribute("StartVal", "UnderlyingStartValue_t_800689368"); // 1
    Undly_116_set.insert("UnderlyingStartValue_t_800689368");
    Undly_116.add_attribute("CurVal", "UnderlyingCurrentValue_t_1419329538"); // 1
    Undly_116_set.insert("UnderlyingCurrentValue_t_1419329538");
    Undly_116.add_attribute("EndVal", "UnderlyingEndValue_t_662499226"); // 1
    Undly_116_set.insert("UnderlyingEndValue_t_662499226");
    Undly_116.add_attribute("AdjQty", "3816467.260000"); // 1
    Undly_116_set.insert("3816467.260000");
    Undly_116.add_attribute("FxRate", "13165972.980000"); // 1
    Undly_116_set.insert("13165972.980000");
    Undly_116.add_attribute("FxRateCalc", "D"); // 1
    Undly_116_set.insert("D");
    Undly_116.add_attribute("CapValu", "UnderlyingCapValue_t_1238978384"); // 1
    Undly_116_set.insert("UnderlyingCapValue_t_1238978384");
    Undly_116.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2021354155"); // 1
    Undly_116_set.insert("UnderlyingSettlMethod_t_2021354155");
    Undly_116.add_attribute("PutCall", "1969620277"); // 1
    Undly_116_set.insert("1969620277");
    all_values.push_back(Undly_116_set);
    all_compo_names.insert("Undly_116_set");

    {
      xml_element UndAID_116{"UndAID"};
      multiset<string> UndAID_116_set;
      UndAID_116.add_attribute("AltID", "UnderlyingSecurityAltID_t_1500785724"); // 2
      UndAID_116_set.insert("UnderlyingSecurityAltID_t_1500785724");
      UndAID_116.add_attribute("AltIDSrc", "K"); // 2
      UndAID_116_set.insert("K");
      all_values.push_back(UndAID_116_set);
      all_compo_names.insert("UndAID_116_set");

      Undly_116.add_element(UndAID_116);
    }
    {
      xml_element Stip_188{"Stip"};
      multiset<string> Stip_188_set;
      Stip_188.add_attribute("Typ", "INTERNALQTY"); // 2
      Stip_188_set.insert("INTERNALQTY");
      Stip_188.add_attribute("Val", "UnderlyingStipValue_t_331710016"); // 2
      Stip_188_set.insert("UnderlyingStipValue_t_331710016");
      all_values.push_back(Stip_188_set);
      all_compo_names.insert("Stip_188_set");

      Undly_116.add_element(Stip_188);
    }
    {
      xml_element Pty_431{"Pty"};
      multiset<string> Pty_431_set;
      Pty_431.add_attribute("ID", "UnderlyingInstrumentPartyID_t_618513762"); // 2
      Pty_431_set.insert("UnderlyingInstrumentPartyID_t_618513762");
      Pty_431.add_attribute("Src", "F"); // 2
      Pty_431_set.insert("F");
      Pty_431.add_attribute("R", "41"); // 2
      Pty_431_set.insert("41");
      all_values.push_back(Pty_431_set);
      all_compo_names.insert("Pty_431_set");

      {
        xml_element Sub_431{"Sub"};
        multiset<string> Sub_431_set;
        Sub_431.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_357677693"); // 3
        Sub_431_set.insert("UnderlyingInstrumentPartySubID_t_357677693");
        Sub_431.add_attribute("Typ", "27"); // 3
        Sub_431_set.insert("27");
        all_values.push_back(Sub_431_set);
        all_compo_names.insert("Sub_431_set");

        Pty_431.add_element(Sub_431);
      }
      Undly_116.add_element(Pty_431);
    }
    elt.add_element(Undly_116);
  } // end Undly
  { // Undly
    xml_element Undly_117{"Undly"};
    multiset<string> Undly_117_set;
    Undly_117.add_attribute("Sym", "UnderlyingSymbol_t_1079009539"); // 1
    Undly_117_set.insert("UnderlyingSymbol_t_1079009539");
    Undly_117.add_attribute("Sfx", "CD"); // 1
    Undly_117_set.insert("CD");
    Undly_117.add_attribute("ID", "UnderlyingSecurityID_t_448251558"); // 1
    Undly_117_set.insert("UnderlyingSecurityID_t_448251558");
    Undly_117.add_attribute("Src", "5"); // 1
    Undly_117_set.insert("5");
    Undly_117.add_attribute("Prod", "1"); // 1
    Undly_117_set.insert("1");
    Undly_117.add_attribute("CFI", "UnderlyingCFICode_t_331506546"); // 1
    Undly_117_set.insert("UnderlyingCFICode_t_331506546");
    Undly_117.add_attribute("SecTyp", "CAMM"); // 1
    Undly_117_set.insert("CAMM");
    Undly_117.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1785191589"); // 1
    Undly_117_set.insert("UnderlyingSecuritySubType_t_1785191589");
    Undly_117.add_attribute("MMY", "354646268"); // 1
    Undly_117_set.insert("354646268");
    Undly_117.add_attribute("Mat", "UnderlyingMaturityDate_t_211687569"); // 1
    Undly_117_set.insert("UnderlyingMaturityDate_t_211687569");
    Undly_117.add_attribute("MatTm", "438496488"); // 1
    Undly_117_set.insert("438496488");
    Undly_117.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1422655246"); // 1
    Undly_117_set.insert("UnderlyingCouponPaymentDate_t_1422655246");
    Undly_117.add_attribute("RestrctTyp", "MR"); // 1
    Undly_117_set.insert("MR");
    Undly_117.add_attribute("Snrty", "SD"); // 1
    Undly_117_set.insert("SD");
    Undly_117.add_attribute("NotlPctOut", "6945011.370000"); // 1
    Undly_117_set.insert("6945011.370000");
    Undly_117.add_attribute("OrigNotlPctOut", "16849167.150000"); // 1
    Undly_117_set.insert("16849167.150000");
    Undly_117.add_attribute("AttchPnt", "16208325.820000"); // 1
    Undly_117_set.insert("16208325.820000");
    Undly_117.add_attribute("DetchPnt", "20110984.350000"); // 1
    Undly_117_set.insert("20110984.350000");
    Undly_117.add_attribute("Issued", "UnderlyingIssueDate_t_360033869"); // 1
    Undly_117_set.insert("UnderlyingIssueDate_t_360033869");
    Undly_117.add_attribute("RepoCollSecTyp", "712327319"); // 1
    Undly_117_set.insert("712327319");
    Undly_117.add_attribute("RepoTrm", "1884968942"); // 1
    Undly_117_set.insert("1884968942");
    Undly_117.add_attribute("RepoRt", "1821704.980000"); // 1
    Undly_117_set.insert("1821704.980000");
    Undly_117.add_attribute("Fctr", "656293.950000"); // 1
    Undly_117_set.insert("656293.950000");
    Undly_117.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1191406751"); // 1
    Undly_117_set.insert("UnderlyingCreditRating_t_1191406751");
    Undly_117.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1561453209"); // 1
    Undly_117_set.insert("UnderlyingInstrRegistry_t_1561453209");
    Undly_117.add_attribute("Ctry", "397339411"); // 1
    Undly_117_set.insert("397339411");
    Undly_117.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1809920513"); // 1
    Undly_117_set.insert("UnderlyingStateOrProvinceOfIssue_t_1809920513");
    Undly_117.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_129946018"); // 1
    Undly_117_set.insert("UnderlyingLocaleOfIssue_t_129946018");
    Undly_117.add_attribute("Redeem", "UnderlyingRedemptionDate_t_449195506"); // 1
    Undly_117_set.insert("UnderlyingRedemptionDate_t_449195506");
    Undly_117.add_attribute("StrkPx", "201145.580000"); // 1
    Undly_117_set.insert("201145.580000");
    Undly_117.add_attribute("StrkCcy", "CAN"); // 1
    Undly_117_set.insert("CAN");
    Undly_117.add_attribute("OptA", "1249787282"); // 1
    Undly_117_set.insert("1249787282");
    Undly_117.add_attribute("Mult", "11900802.030000"); // 1
    Undly_117_set.insert("11900802.030000");
    Undly_117.add_attribute("MultTyp", "0"); // 1
    Undly_117_set.insert("0");
    Undly_117.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_117_set.insert("2");
    Undly_117.add_attribute("UOM", "oz_tr"); // 1
    Undly_117_set.insert("oz_tr");
    Undly_117.add_attribute("UOMQty", "6978729.270000"); // 1
    Undly_117_set.insert("6978729.270000");
    Undly_117.add_attribute("PxUOM", "tn"); // 1
    Undly_117_set.insert("tn");
    Undly_117.add_attribute("PxUOMQty", "18762330.180000"); // 1
    Undly_117_set.insert("18762330.180000");
    Undly_117.add_attribute("TmUnit", "Mo"); // 1
    Undly_117_set.insert("Mo");
    Undly_117.add_attribute("ExerStyle", "0"); // 1
    Undly_117_set.insert("0");
    Undly_117.add_attribute("CpnRt", "11514046.160000"); // 1
    Undly_117_set.insert("11514046.160000");
    Undly_117.add_attribute("Exch", "UnderlyingSecurityExchange_t_1931977985"); // 1
    Undly_117_set.insert("UnderlyingSecurityExchange_t_1931977985");
    Undly_117.add_attribute("Issr", "UnderlyingIssuer_t_445473334"); // 1
    Undly_117_set.insert("UnderlyingIssuer_t_445473334");
    Undly_117.add_attribute("EncUndIssrLen", "1845905753"); // 1
    Undly_117_set.insert("1845905753");
    Undly_117.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1469411053"); // 1
    Undly_117_set.insert("EncodedUnderlyingIssuer_t_1469411053");
    Undly_117.add_attribute("Desc", "UnderlyingSecurityDesc_t_2066305916"); // 1
    Undly_117_set.insert("UnderlyingSecurityDesc_t_2066305916");
    Undly_117.add_attribute("EncUndSecDescLen", "1709520541"); // 1
    Undly_117_set.insert("1709520541");
    Undly_117.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1829444922"); // 1
    Undly_117_set.insert("EncodedUnderlyingSecurityDesc_t_1829444922");
    Undly_117.add_attribute("CPPgm", "UnderlyingCPProgram_t_631149587"); // 1
    Undly_117_set.insert("UnderlyingCPProgram_t_631149587");
    Undly_117.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1447005835"); // 1
    Undly_117_set.insert("UnderlyingCPRegType_t_1447005835");
    Undly_117.add_attribute("AllocPct", "20116154.200000"); // 1
    Undly_117_set.insert("20116154.200000");
    Undly_117.add_attribute("Ccy", "JPY"); // 1
    Undly_117_set.insert("JPY");
    Undly_117.add_attribute("Qty", "14255849.810000"); // 1
    Undly_117_set.insert("14255849.810000");
    Undly_117.add_attribute("SettlTyp", "4"); // 1
    Undly_117_set.insert("4");
    Undly_117.add_attribute("CashAmt", "UnderlyingCashAmount_t_153365804"); // 1
    Undly_117_set.insert("UnderlyingCashAmount_t_153365804");
    Undly_117.add_attribute("CashTyp", "DIFF"); // 1
    Undly_117_set.insert("DIFF");
    Undly_117.add_attribute("Px", "15433139.000000"); // 1
    Undly_117_set.insert("15433139.000000");
    Undly_117.add_attribute("DirtPx", "1734803.620000"); // 1
    Undly_117_set.insert("1734803.620000");
    Undly_117.add_attribute("EndPx", "1498759.960000"); // 1
    Undly_117_set.insert("1498759.960000");
    Undly_117.add_attribute("StartVal", "UnderlyingStartValue_t_924035297"); // 1
    Undly_117_set.insert("UnderlyingStartValue_t_924035297");
    Undly_117.add_attribute("CurVal", "UnderlyingCurrentValue_t_1423267645"); // 1
    Undly_117_set.insert("UnderlyingCurrentValue_t_1423267645");
    Undly_117.add_attribute("EndVal", "UnderlyingEndValue_t_1339956200"); // 1
    Undly_117_set.insert("UnderlyingEndValue_t_1339956200");
    Undly_117.add_attribute("AdjQty", "17356268.420000"); // 1
    Undly_117_set.insert("17356268.420000");
    Undly_117.add_attribute("FxRate", "5533506.940000"); // 1
    Undly_117_set.insert("5533506.940000");
    Undly_117.add_attribute("FxRateCalc", "M"); // 1
    Undly_117_set.insert("M");
    Undly_117.add_attribute("CapValu", "UnderlyingCapValue_t_286016121"); // 1
    Undly_117_set.insert("UnderlyingCapValue_t_286016121");
    Undly_117.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1468625332"); // 1
    Undly_117_set.insert("UnderlyingSettlMethod_t_1468625332");
    Undly_117.add_attribute("PutCall", "442808672"); // 1
    Undly_117_set.insert("442808672");
    all_values.push_back(Undly_117_set);
    all_compo_names.insert("Undly_117_set");

    {
      xml_element UndAID_117{"UndAID"};
      multiset<string> UndAID_117_set;
      UndAID_117.add_attribute("AltID", "UnderlyingSecurityAltID_t_1195576618"); // 2
      UndAID_117_set.insert("UnderlyingSecurityAltID_t_1195576618");
      UndAID_117.add_attribute("AltIDSrc", "1"); // 2
      UndAID_117_set.insert("1");
      all_values.push_back(UndAID_117_set);
      all_compo_names.insert("UndAID_117_set");

      Undly_117.add_element(UndAID_117);
    }
    {
      xml_element Stip_189{"Stip"};
      multiset<string> Stip_189_set;
      Stip_189.add_attribute("Typ", "CPY"); // 2
      Stip_189_set.insert("CPY");
      Stip_189.add_attribute("Val", "UnderlyingStipValue_t_980070955"); // 2
      Stip_189_set.insert("UnderlyingStipValue_t_980070955");
      all_values.push_back(Stip_189_set);
      all_compo_names.insert("Stip_189_set");

      Undly_117.add_element(Stip_189);
    }
    {
      xml_element Pty_432{"Pty"};
      multiset<string> Pty_432_set;
      Pty_432.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1120386144"); // 2
      Pty_432_set.insert("UnderlyingInstrumentPartyID_t_1120386144");
      Pty_432.add_attribute("Src", "9"); // 2
      Pty_432_set.insert("9");
      Pty_432.add_attribute("R", "51"); // 2
      Pty_432_set.insert("51");
      all_values.push_back(Pty_432_set);
      all_compo_names.insert("Pty_432_set");

      {
        xml_element Sub_432{"Sub"};
        multiset<string> Sub_432_set;
        Sub_432.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1039208412"); // 3
        Sub_432_set.insert("UnderlyingInstrumentPartySubID_t_1039208412");
        Sub_432.add_attribute("Typ", "16"); // 3
        Sub_432_set.insert("16");
        all_values.push_back(Sub_432_set);
        all_compo_names.insert("Sub_432_set");

        Pty_432.add_element(Sub_432);
      }
      Undly_117.add_element(Pty_432);
    }
    elt.add_element(Undly_117);
  } // end Undly
  { // Leg
    xml_element Leg_100{"Leg"};
    multiset<string> Leg_100_set;
    Leg_100.add_attribute("Sym", "LegSymbol_t_1670358000"); // 1
    Leg_100_set.insert("LegSymbol_t_1670358000");
    Leg_100.add_attribute("Sfx", "CD"); // 1
    Leg_100_set.insert("CD");
    Leg_100.add_attribute("ID", "LegSecurityID_t_1995575054"); // 1
    Leg_100_set.insert("LegSecurityID_t_1995575054");
    Leg_100.add_attribute("Src", "C"); // 1
    Leg_100_set.insert("C");
    Leg_100.add_attribute("Prod", "9"); // 1
    Leg_100_set.insert("9");
    Leg_100.add_attribute("CFI", "LegCFICode_t_1273676388"); // 1
    Leg_100_set.insert("LegCFICode_t_1273676388");
    Leg_100.add_attribute("SecTyp", "TRAN"); // 1
    Leg_100_set.insert("TRAN");
    Leg_100.add_attribute("SecSubTyp", "LegSecuritySubType_t_798489217"); // 1
    Leg_100_set.insert("LegSecuritySubType_t_798489217");
    Leg_100.add_attribute("MMY", "681723739"); // 1
    Leg_100_set.insert("681723739");
    Leg_100.add_attribute("Mat", "LegMaturityDate_t_709601982"); // 1
    Leg_100_set.insert("LegMaturityDate_t_709601982");
    Leg_100.add_attribute("MatTm", "971969579"); // 1
    Leg_100_set.insert("971969579");
    Leg_100.add_attribute("CpnPmt", "LegCouponPaymentDate_t_831599736"); // 1
    Leg_100_set.insert("LegCouponPaymentDate_t_831599736");
    Leg_100.add_attribute("Issued", "LegIssueDate_t_1633637279"); // 1
    Leg_100_set.insert("LegIssueDate_t_1633637279");
    Leg_100.add_attribute("RepoCollSecTyp", "247753576"); // 1
    Leg_100_set.insert("247753576");
    Leg_100.add_attribute("RepoTrm", "24072288"); // 1
    Leg_100_set.insert("24072288");
    Leg_100.add_attribute("RepoRt", "12217804.740000"); // 1
    Leg_100_set.insert("12217804.740000");
    Leg_100.add_attribute("Fctr", "8011042.700000"); // 1
    Leg_100_set.insert("8011042.700000");
    Leg_100.add_attribute("CrdRtg", "LegCreditRating_t_738131590"); // 1
    Leg_100_set.insert("LegCreditRating_t_738131590");
    Leg_100.add_attribute("Rgstry", "LegInstrRegistry_t_1507796595"); // 1
    Leg_100_set.insert("LegInstrRegistry_t_1507796595");
    Leg_100.add_attribute("Ctry", "122245954"); // 1
    Leg_100_set.insert("122245954");
    Leg_100.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1180940262"); // 1
    Leg_100_set.insert("LegStateOrProvinceOfIssue_t_1180940262");
    Leg_100.add_attribute("Lcl", "LegLocaleOfIssue_t_555889565"); // 1
    Leg_100_set.insert("LegLocaleOfIssue_t_555889565");
    Leg_100.add_attribute("Redeem", "LegRedemptionDate_t_797158764"); // 1
    Leg_100_set.insert("LegRedemptionDate_t_797158764");
    Leg_100.add_attribute("Strk", "6276699.020000"); // 1
    Leg_100_set.insert("6276699.020000");
    Leg_100.add_attribute("StrkCcy", "USD"); // 1
    Leg_100_set.insert("USD");
    Leg_100.add_attribute("OptA", "1920305296"); // 1
    Leg_100_set.insert("1920305296");
    Leg_100.add_attribute("Cmult", "18379588.810000"); // 1
    Leg_100_set.insert("18379588.810000");
    Leg_100.add_attribute("MultTyp", "2"); // 1
    Leg_100_set.insert("2");
    Leg_100.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_100_set.insert("0");
    Leg_100.add_attribute("UOM", "Bbl"); // 1
    Leg_100_set.insert("Bbl");
    Leg_100.add_attribute("UOMQty", "3321440.250000"); // 1
    Leg_100_set.insert("3321440.250000");
    Leg_100.add_attribute("PxUOM", "USD"); // 1
    Leg_100_set.insert("USD");
    Leg_100.add_attribute("PxUOMQty", "16700099.220000"); // 1
    Leg_100_set.insert("16700099.220000");
    Leg_100.add_attribute("TmUnit", "H"); // 1
    Leg_100_set.insert("H");
    Leg_100.add_attribute("ExerStyle", "0"); // 1
    Leg_100_set.insert("0");
    Leg_100.add_attribute("CpnRt", "7962026.620000"); // 1
    Leg_100_set.insert("7962026.620000");
    Leg_100.add_attribute("Exch", "LegSecurityExchange_t_1865569089"); // 1
    Leg_100_set.insert("LegSecurityExchange_t_1865569089");
    Leg_100.add_attribute("Issr", "LegIssuer_t_77817392"); // 1
    Leg_100_set.insert("LegIssuer_t_77817392");
    Leg_100.add_attribute("EncLegIssrLen", "1477926402"); // 1
    Leg_100_set.insert("1477926402");
    Leg_100.add_attribute("EncLegIssr", "EncodedLegIssuer_t_427687423"); // 1
    Leg_100_set.insert("EncodedLegIssuer_t_427687423");
    Leg_100.add_attribute("Desc", "LegSecurityDesc_t_1049786971"); // 1
    Leg_100_set.insert("LegSecurityDesc_t_1049786971");
    Leg_100.add_attribute("EncLegSecDescLen", "162042490"); // 1
    Leg_100_set.insert("162042490");
    Leg_100.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2061324703"); // 1
    Leg_100_set.insert("EncodedLegSecurityDesc_t_2061324703");
    Leg_100.add_attribute("RatioQty", "12975405.480000"); // 1
    Leg_100_set.insert("12975405.480000");
    Leg_100.add_attribute("Side", "B"); // 1
    Leg_100_set.insert("B");
    Leg_100.add_attribute("Ccy", "GBP"); // 1
    Leg_100_set.insert("GBP");
    Leg_100.add_attribute("Pool", "LegPool_t_924246368"); // 1
    Leg_100_set.insert("LegPool_t_924246368");
    Leg_100.add_attribute("Dated", "LegDatedDate_t_495934476"); // 1
    Leg_100_set.insert("LegDatedDate_t_495934476");
    Leg_100.add_attribute("CSetMo", "73407125"); // 1
    Leg_100_set.insert("73407125");
    Leg_100.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2105186630"); // 1
    Leg_100_set.insert("LegInterestAccrualDate_t_2105186630");
    Leg_100.add_attribute("PutCall", "1051824042"); // 1
    Leg_100_set.insert("1051824042");
    Leg_100.add_attribute("LegOptionRatio", "8705658.890000"); // 1
    Leg_100_set.insert("8705658.890000");
    Leg_100.add_attribute("Px", "5853728.840000"); // 1
    Leg_100_set.insert("5853728.840000");
    all_values.push_back(Leg_100_set);
    all_compo_names.insert("Leg_100_set");

    {
      xml_element LegAID_97{"LegAID"};
      multiset<string> LegAID_97_set;
      LegAID_97.add_attribute("SecAltID", "LegSecurityAltID_t_440300915"); // 2
      LegAID_97_set.insert("LegSecurityAltID_t_440300915");
      LegAID_97.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_97_set.insert("K");
      all_values.push_back(LegAID_97_set);
      all_compo_names.insert("LegAID_97_set");

      Leg_100.add_element(LegAID_97);
    }
    elt.add_element(Leg_100);
  } // end Leg
  { // TrdCapDt
    xml_element TrdCapDt_0{"TrdCapDt"};
    multiset<string> TrdCapDt_0_set;
    TrdCapDt_0.add_attribute("TrdDt", "TradeDate_t_130776148"); // 1
    TrdCapDt_0_set.insert("TradeDate_t_130776148");
    TrdCapDt_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_1449896823"); // 1
    TrdCapDt_0_set.insert("LastUpdateTime_t_1449896823");
    TrdCapDt_0.add_attribute("TxnTm", "TransactTime_t_985688468"); // 1
    TrdCapDt_0_set.insert("TransactTime_t_985688468");
    all_values.push_back(TrdCapDt_0_set);
    all_compo_names.insert("TrdCapDt_0_set");

    elt.add_element(TrdCapDt_0);
  } // end TrdCapDt
  { // TrdCapDt
    xml_element TrdCapDt_1{"TrdCapDt"};
    multiset<string> TrdCapDt_1_set;
    TrdCapDt_1.add_attribute("TrdDt", "TradeDate_t_1952694664"); // 1
    TrdCapDt_1_set.insert("TradeDate_t_1952694664");
    TrdCapDt_1.add_attribute("LastUpdateTm", "LastUpdateTime_t_1782040848"); // 1
    TrdCapDt_1_set.insert("LastUpdateTime_t_1782040848");
    TrdCapDt_1.add_attribute("TxnTm", "TransactTime_t_1767376878"); // 1
    TrdCapDt_1_set.insert("TransactTime_t_1767376878");
    all_values.push_back(TrdCapDt_1_set);
    all_compo_names.insert("TrdCapDt_1_set");

    elt.add_element(TrdCapDt_1);
  } // end TrdCapDt
  { // TrdCapDt
    xml_element TrdCapDt_2{"TrdCapDt"};
    multiset<string> TrdCapDt_2_set;
    TrdCapDt_2.add_attribute("TrdDt", "TradeDate_t_1475220939"); // 1
    TrdCapDt_2_set.insert("TradeDate_t_1475220939");
    TrdCapDt_2.add_attribute("LastUpdateTm", "LastUpdateTime_t_186354560"); // 1
    TrdCapDt_2_set.insert("LastUpdateTime_t_186354560");
    TrdCapDt_2.add_attribute("TxnTm", "TransactTime_t_1046705053"); // 1
    TrdCapDt_2_set.insert("TransactTime_t_1046705053");
    all_values.push_back(TrdCapDt_2_set);
    all_compo_names.insert("TrdCapDt_2_set");

    elt.add_element(TrdCapDt_2);
  } // end TrdCapDt
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
