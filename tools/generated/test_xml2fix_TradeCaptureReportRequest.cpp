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
  elt.add_attribute("ReqID", "TradeRequestID_t_238628447"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeRequestID_t_238628447");
  elt.add_attribute("TrdID", "TradeID_t_555226397"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeID_t_555226397");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_790327171"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryTradeID_t_790327171");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1948928567"); // 0
  TradeCaptureReportRequest_message_t_0.insert("FirmTradeID_t_1948928567");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1790493020"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryFirmTradeID_t_1790493020");
  elt.add_attribute("ReqTyp", "2"); // 0
  TradeCaptureReportRequest_message_t_0.insert("2");
  elt.add_attribute("SubReqTyp", "1"); // 0
  TradeCaptureReportRequest_message_t_0.insert("1");
  elt.add_attribute("RptID", "TradeReportID_t_787768337"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeReportID_t_787768337");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_1595435244"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryTradeReportID_t_1595435244");
  elt.add_attribute("ExecID", "ExecID_t_1506384445"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ExecID_t_1506384445");
  elt.add_attribute("ExecTyp", "C"); // 0
  TradeCaptureReportRequest_message_t_0.insert("C");
  elt.add_attribute("OrdID", "OrderID_t_1328672757"); // 0
  TradeCaptureReportRequest_message_t_0.insert("OrderID_t_1328672757");
  elt.add_attribute("ClOrdID", "ClOrdID_t_183074304"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ClOrdID_t_183074304");
  elt.add_attribute("MtchStat", "0"); // 0
  TradeCaptureReportRequest_message_t_0.insert("0");
  elt.add_attribute("TrdTyp", "11"); // 0
  TradeCaptureReportRequest_message_t_0.insert("11");
  elt.add_attribute("TrdSubTyp", "21"); // 0
  TradeCaptureReportRequest_message_t_0.insert("21");
  elt.add_attribute("TrdHandlInst", "5"); // 0
  TradeCaptureReportRequest_message_t_0.insert("5");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_79477344"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TransferReason_t_79477344");
  elt.add_attribute("TrdTyp2", "5"); // 0
  TradeCaptureReportRequest_message_t_0.insert("5");
  elt.add_attribute("LinkID", "TradeLinkID_t_1312235065"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeLinkID_t_1312235065");
  elt.add_attribute("MtchID", "TrdMatchID_t_836017457"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TrdMatchID_t_836017457");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_887243640"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ClearingBusinessDate_t_887243640");
  elt.add_attribute("SesID", "4"); // 0
  TradeCaptureReportRequest_message_t_0.insert("4");
  elt.add_attribute("SesSub", "1"); // 0
  TradeCaptureReportRequest_message_t_0.insert("1");
  elt.add_attribute("TmBkt", "TimeBracket_t_1197128363"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TimeBracket_t_1197128363");
  elt.add_attribute("Side", "D"); // 0
  TradeCaptureReportRequest_message_t_0.insert("D");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  TradeCaptureReportRequest_message_t_0.insert("3");
  elt.add_attribute("InptSrc", "TradeInputSource_t_96711809"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeInputSource_t_96711809");
  elt.add_attribute("InptDev", "TradeInputDevice_t_1791313223"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeInputDevice_t_1791313223");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  TradeCaptureReportRequest_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_1740222639"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ResponseDestination_t_1740222639");
  elt.add_attribute("Txt", "Text_t_2029941670"); // 0
  TradeCaptureReportRequest_message_t_0.insert("Text_t_2029941670");
  elt.add_attribute("EncTxtLen", "421597523"); // 0
  TradeCaptureReportRequest_message_t_0.insert("421597523");
  elt.add_attribute("EncTxt", "EncodedText_t_383066163"); // 0
  TradeCaptureReportRequest_message_t_0.insert("EncodedText_t_383066163");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1831386589"); // 0
  TradeCaptureReportRequest_message_t_0.insert("MessageEventSource_t_1831386589");
  all_values.push_back(TradeCaptureReportRequest_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequest_message_t");

  { // Hdr
    xml_element Hdr_98{"Hdr"};
    multiset<string> Hdr_98_set;
    Hdr_98.add_attribute("SeqNum", "64606895"); // 1
    Hdr_98_set.insert("64606895");
    Hdr_98.add_attribute("SID", "SenderCompID_t_514079710"); // 1
    Hdr_98_set.insert("SenderCompID_t_514079710");
    Hdr_98.add_attribute("TID", "TargetCompID_t_651443142"); // 1
    Hdr_98_set.insert("TargetCompID_t_651443142");
    Hdr_98.add_attribute("OBID", "OnBehalfOfCompID_t_852375233"); // 1
    Hdr_98_set.insert("OnBehalfOfCompID_t_852375233");
    Hdr_98.add_attribute("D2ID", "DeliverToCompID_t_2109514954"); // 1
    Hdr_98_set.insert("DeliverToCompID_t_2109514954");
    Hdr_98.add_attribute("SSub", "SenderSubID_t_10343939"); // 1
    Hdr_98_set.insert("SenderSubID_t_10343939");
    Hdr_98.add_attribute("SLoc", "SenderLocationID_t_746484815"); // 1
    Hdr_98_set.insert("SenderLocationID_t_746484815");
    Hdr_98.add_attribute("TSub", "TargetSubID_t_1290704064"); // 1
    Hdr_98_set.insert("TargetSubID_t_1290704064");
    Hdr_98.add_attribute("TLoc", "TargetLocationID_t_193418244"); // 1
    Hdr_98_set.insert("TargetLocationID_t_193418244");
    Hdr_98.add_attribute("OBSub", "OnBehalfOfSubID_t_1017440669"); // 1
    Hdr_98_set.insert("OnBehalfOfSubID_t_1017440669");
    Hdr_98.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1584139910"); // 1
    Hdr_98_set.insert("OnBehalfOfLocationID_t_1584139910");
    Hdr_98.add_attribute("D2Sub", "DeliverToSubID_t_1443356861"); // 1
    Hdr_98_set.insert("DeliverToSubID_t_1443356861");
    Hdr_98.add_attribute("D2Loc", "DeliverToLocationID_t_1321284010"); // 1
    Hdr_98_set.insert("DeliverToLocationID_t_1321284010");
    Hdr_98.add_attribute("PosDup", "Y"); // 1
    Hdr_98_set.insert("Y");
    Hdr_98.add_attribute("PosRsnd", "Y"); // 1
    Hdr_98_set.insert("Y");
    Hdr_98.add_attribute("Snt", "SendingTime_t_486035428"); // 1
    Hdr_98_set.insert("SendingTime_t_486035428");
    Hdr_98.add_attribute("OrigSnt", "OrigSendingTime_t_352151064"); // 1
    Hdr_98_set.insert("OrigSendingTime_t_352151064");
    Hdr_98.add_attribute("MsgEncd", "MessageEncoding_t_1657914689"); // 1
    Hdr_98_set.insert("MessageEncoding_t_1657914689");
    all_values.push_back(Hdr_98_set);
    all_compo_names.insert("Hdr_98_set");

    {
      xml_element Hop_98{"Hop"};
      multiset<string> Hop_98_set;
      Hop_98.add_attribute("ID", "HopCompID_t_349384463"); // 2
      Hop_98_set.insert("HopCompID_t_349384463");
      Hop_98.add_attribute("Ref", "287720794"); // 2
      Hop_98_set.insert("287720794");
      Hop_98.add_attribute("Snt", "HopSendingTime_t_707559404"); // 2
      Hop_98_set.insert("HopSendingTime_t_707559404");
      all_values.push_back(Hop_98_set);
      all_compo_names.insert("Hop_98_set");

      Hdr_98.add_element(Hop_98);
    }
    elt.add_element(Hdr_98);
  } // end Hdr
  { // Pty
    xml_element Pty_471{"Pty"};
    multiset<string> Pty_471_set;
    Pty_471.add_attribute("ID", "PartyID_t_1782008596"); // 1
    Pty_471_set.insert("PartyID_t_1782008596");
    Pty_471.add_attribute("Src", "2"); // 1
    Pty_471_set.insert("2");
    Pty_471.add_attribute("R", "49"); // 1
    Pty_471_set.insert("49");
    all_values.push_back(Pty_471_set);
    all_compo_names.insert("Pty_471_set");

    {
      xml_element Sub_471{"Sub"};
      multiset<string> Sub_471_set;
      Sub_471.add_attribute("ID", "PartySubID_t_1648379722"); // 2
      Sub_471_set.insert("PartySubID_t_1648379722");
      Sub_471.add_attribute("Typ", "18"); // 2
      Sub_471_set.insert("18");
      all_values.push_back(Sub_471_set);
      all_compo_names.insert("Sub_471_set");

      Pty_471.add_element(Sub_471);
    }
    elt.add_element(Pty_471);
  } // end Pty
  { // Pty
    xml_element Pty_472{"Pty"};
    multiset<string> Pty_472_set;
    Pty_472.add_attribute("ID", "PartyID_t_1655795928"); // 1
    Pty_472_set.insert("PartyID_t_1655795928");
    Pty_472.add_attribute("Src", "H"); // 1
    Pty_472_set.insert("H");
    Pty_472.add_attribute("R", "9"); // 1
    Pty_472_set.insert("9");
    all_values.push_back(Pty_472_set);
    all_compo_names.insert("Pty_472_set");

    {
      xml_element Sub_472{"Sub"};
      multiset<string> Sub_472_set;
      Sub_472.add_attribute("ID", "PartySubID_t_1339698869"); // 2
      Sub_472_set.insert("PartySubID_t_1339698869");
      Sub_472.add_attribute("Typ", "31"); // 2
      Sub_472_set.insert("31");
      all_values.push_back(Sub_472_set);
      all_compo_names.insert("Sub_472_set");

      Pty_472.add_element(Sub_472);
    }
    elt.add_element(Pty_472);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_96{"Instrmt"};
    multiset<string> Instrmt_96_set;
    Instrmt_96.add_attribute("Sym", "Symbol_t_1294156078"); // 1
    Instrmt_96_set.insert("Symbol_t_1294156078");
    Instrmt_96.add_attribute("Sfx", "WI"); // 1
    Instrmt_96_set.insert("WI");
    Instrmt_96.add_attribute("ID", "SecurityID_t_839475726"); // 1
    Instrmt_96_set.insert("SecurityID_t_839475726");
    Instrmt_96.add_attribute("Src", "E"); // 1
    Instrmt_96_set.insert("E");
    Instrmt_96.add_attribute("Prod", "6"); // 1
    Instrmt_96_set.insert("6");
    Instrmt_96.add_attribute("ProdCmplx", "ProductComplex_t_1585960542"); // 1
    Instrmt_96_set.insert("ProductComplex_t_1585960542");
    Instrmt_96.add_attribute("SecGrp", "SecurityGroup_t_399407801"); // 1
    Instrmt_96_set.insert("SecurityGroup_t_399407801");
    Instrmt_96.add_attribute("CFI", "CFICode_t_47420546"); // 1
    Instrmt_96_set.insert("CFICode_t_47420546");
    Instrmt_96.add_attribute("SecTyp", "CS"); // 1
    Instrmt_96_set.insert("CS");
    Instrmt_96.add_attribute("SubTyp", "SecuritySubType_t_1983547711"); // 1
    Instrmt_96_set.insert("SecuritySubType_t_1983547711");
    Instrmt_96.add_attribute("MMY", "1490777407"); // 1
    Instrmt_96_set.insert("1490777407");
    Instrmt_96.add_attribute("MatDt", "MaturityDate_t_1777201574"); // 1
    Instrmt_96_set.insert("MaturityDate_t_1777201574");
    Instrmt_96.add_attribute("MatTm", "1499681318"); // 1
    Instrmt_96_set.insert("1499681318");
    Instrmt_96.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_113964808"); // 1
    Instrmt_96_set.insert("SettleOnOpenFlag_t_113964808");
    Instrmt_96.add_attribute("AsgnMeth", "115753354"); // 1
    Instrmt_96_set.insert("115753354");
    Instrmt_96.add_attribute("Status", "2"); // 1
    Instrmt_96_set.insert("2");
    Instrmt_96.add_attribute("CpnPmt", "CouponPaymentDate_t_1771879497"); // 1
    Instrmt_96_set.insert("CouponPaymentDate_t_1771879497");
    Instrmt_96.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_96_set.insert("MR");
    Instrmt_96.add_attribute("Snrty", "SR"); // 1
    Instrmt_96_set.insert("SR");
    Instrmt_96.add_attribute("NotlPctOut", "3319552.540000"); // 1
    Instrmt_96_set.insert("3319552.540000");
    Instrmt_96.add_attribute("OrigNotlPctOut", "4471625.000000"); // 1
    Instrmt_96_set.insert("4471625.000000");
    Instrmt_96.add_attribute("AttchPnt", "17740781.250000"); // 1
    Instrmt_96_set.insert("17740781.250000");
    Instrmt_96.add_attribute("DetchPnt", "11362264.670000"); // 1
    Instrmt_96_set.insert("11362264.670000");
    Instrmt_96.add_attribute("Issued", "IssueDate_t_73016758"); // 1
    Instrmt_96_set.insert("IssueDate_t_73016758");
    Instrmt_96.add_attribute("RepoCollSecTyp", "1274974200"); // 1
    Instrmt_96_set.insert("1274974200");
    Instrmt_96.add_attribute("RepoTrm", "1533236672"); // 1
    Instrmt_96_set.insert("1533236672");
    Instrmt_96.add_attribute("RepoRt", "17288126.860000"); // 1
    Instrmt_96_set.insert("17288126.860000");
    Instrmt_96.add_attribute("Fctr", "11974677.980000"); // 1
    Instrmt_96_set.insert("11974677.980000");
    Instrmt_96.add_attribute("CrdRtg", "CreditRating_t_165829392"); // 1
    Instrmt_96_set.insert("CreditRating_t_165829392");
    Instrmt_96.add_attribute("Rgstry", "InstrRegistry_t_921027907"); // 1
    Instrmt_96_set.insert("InstrRegistry_t_921027907");
    Instrmt_96.add_attribute("IssuCtry", "1184568291"); // 1
    Instrmt_96_set.insert("1184568291");
    Instrmt_96.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1459985471"); // 1
    Instrmt_96_set.insert("StateOrProvinceOfIssue_t_1459985471");
    Instrmt_96.add_attribute("Lcl", "LocaleOfIssue_t_764686270"); // 1
    Instrmt_96_set.insert("LocaleOfIssue_t_764686270");
    Instrmt_96.add_attribute("Redeem", "RedemptionDate_t_2024044018"); // 1
    Instrmt_96_set.insert("RedemptionDate_t_2024044018");
    Instrmt_96.add_attribute("StrkPx", "5686892.080000"); // 1
    Instrmt_96_set.insert("5686892.080000");
    Instrmt_96.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_96_set.insert("GBP");
    Instrmt_96.add_attribute("StrkMult", "9680970.090000"); // 1
    Instrmt_96_set.insert("9680970.090000");
    Instrmt_96.add_attribute("StrkValu", "6661091.190000"); // 1
    Instrmt_96_set.insert("6661091.190000");
    Instrmt_96.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_96_set.insert("4");
    Instrmt_96.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_96_set.insert("3");
    Instrmt_96.add_attribute("StrkPxBndryPrcsn", "94028.780000"); // 1
    Instrmt_96_set.insert("94028.780000");
    Instrmt_96.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_96_set.insert("2");
    Instrmt_96.add_attribute("OptAt", "156358743"); // 1
    Instrmt_96_set.insert("156358743");
    Instrmt_96.add_attribute("Mult", "1233676.870000"); // 1
    Instrmt_96_set.insert("1233676.870000");
    Instrmt_96.add_attribute("MultTyp", "0"); // 1
    Instrmt_96_set.insert("0");
    Instrmt_96.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_96_set.insert("1");
    Instrmt_96.add_attribute("MinPxIncr", "18952471.840000"); // 1
    Instrmt_96_set.insert("18952471.840000");
    Instrmt_96.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2129047572"); // 1
    Instrmt_96_set.insert("MinPriceIncrementAmount_t_2129047572");
    Instrmt_96.add_attribute("UOM", "Gal"); // 1
    Instrmt_96_set.insert("Gal");
    Instrmt_96.add_attribute("UOMQty", "797187.900000"); // 1
    Instrmt_96_set.insert("797187.900000");
    Instrmt_96.add_attribute("PxUOM", "USD"); // 1
    Instrmt_96_set.insert("USD");
    Instrmt_96.add_attribute("PxUOMQty", "16268551.330000"); // 1
    Instrmt_96_set.insert("16268551.330000");
    Instrmt_96.add_attribute("SettlMeth", "C"); // 1
    Instrmt_96_set.insert("C");
    Instrmt_96.add_attribute("ExerStyle", "1"); // 1
    Instrmt_96_set.insert("1");
    Instrmt_96.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_96_set.insert("3");
    Instrmt_96.add_attribute("OptPayAmt", "OptPayoutAmount_t_601698282"); // 1
    Instrmt_96_set.insert("OptPayoutAmount_t_601698282");
    Instrmt_96.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_96_set.insert("STD");
    Instrmt_96.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_96_set.insert("CDS");
    Instrmt_96.add_attribute("ListMeth", "1"); // 1
    Instrmt_96_set.insert("1");
    Instrmt_96.add_attribute("CapPx", "10041001.270000"); // 1
    Instrmt_96_set.insert("10041001.270000");
    Instrmt_96.add_attribute("FlrPx", "9888981.260000"); // 1
    Instrmt_96_set.insert("9888981.260000");
    Instrmt_96.add_attribute("PutCall", "0"); // 1
    Instrmt_96_set.insert("0");
    Instrmt_96.add_attribute("FlexInd", "false"); // 1
    Instrmt_96_set.insert("false");
    Instrmt_96.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_96_set.insert("true");
    Instrmt_96.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_96_set.insert("Yr");
    Instrmt_96.add_attribute("CpnRt", "2399913.220000"); // 1
    Instrmt_96_set.insert("2399913.220000");
    Instrmt_96.add_attribute("Exch", "SecurityExchange_t_180495760"); // 1
    Instrmt_96_set.insert("SecurityExchange_t_180495760");
    Instrmt_96.add_attribute("PosLmt", "1616815715"); // 1
    Instrmt_96_set.insert("1616815715");
    Instrmt_96.add_attribute("NTPosLmt", "906100441"); // 1
    Instrmt_96_set.insert("906100441");
    Instrmt_96.add_attribute("Issr", "Issuer_t_2098934236"); // 1
    Instrmt_96_set.insert("Issuer_t_2098934236");
    Instrmt_96.add_attribute("EncIssrLen", "273493139"); // 1
    Instrmt_96_set.insert("273493139");
    Instrmt_96.add_attribute("EncIssr", "EncodedIssuer_t_915503319"); // 1
    Instrmt_96_set.insert("EncodedIssuer_t_915503319");
    Instrmt_96.add_attribute("Desc", "SecurityDesc_t_1499606989"); // 1
    Instrmt_96_set.insert("SecurityDesc_t_1499606989");
    Instrmt_96.add_attribute("EncSecDescLen", "429851882"); // 1
    Instrmt_96_set.insert("429851882");
    Instrmt_96.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1038871006"); // 1
    Instrmt_96_set.insert("EncodedSecurityDesc_t_1038871006");
    Instrmt_96.add_attribute("Pool", "Pool_t_1016033097"); // 1
    Instrmt_96_set.insert("Pool_t_1016033097");
    Instrmt_96.add_attribute("CSetMo", "290559360"); // 1
    Instrmt_96_set.insert("290559360");
    Instrmt_96.add_attribute("CPPgm", "2"); // 1
    Instrmt_96_set.insert("2");
    Instrmt_96.add_attribute("CPRegT", "CPRegType_t_997597021"); // 1
    Instrmt_96_set.insert("CPRegType_t_997597021");
    Instrmt_96.add_attribute("Dated", "DatedDate_t_143336368"); // 1
    Instrmt_96_set.insert("DatedDate_t_143336368");
    Instrmt_96.add_attribute("IntAcrl", "InterestAccrualDate_t_866353333"); // 1
    Instrmt_96_set.insert("InterestAccrualDate_t_866353333");
    all_values.push_back(Instrmt_96_set);
    all_compo_names.insert("Instrmt_96_set");

    {
      xml_element AID_99{"AID"};
      multiset<string> AID_99_set;
      AID_99.add_attribute("AltID", "SecurityAltID_t_1426323446"); // 2
      AID_99_set.insert("SecurityAltID_t_1426323446");
      AID_99.add_attribute("AltIDSrc", "2"); // 2
      AID_99_set.insert("2");
      all_values.push_back(AID_99_set);
      all_compo_names.insert("AID_99_set");

      Instrmt_96.add_element(AID_99);
    }
    {
      xml_element SecXML_93{"SecXML"};
      multiset<string> SecXML_93_set;
      SecXML_93.add_attribute("Schema", "SecurityXMLSchema_t_2082298591"); // 2
      SecXML_93_set.insert("SecurityXMLSchema_t_2082298591");
      all_values.push_back(SecXML_93_set);
      all_compo_names.insert("SecXML_93_set");

      Instrmt_96.add_element(SecXML_93);
    }
    {
      xml_element Evnt_93{"Evnt"};
      multiset<string> Evnt_93_set;
      Evnt_93.add_attribute("EventTyp", "8"); // 2
      Evnt_93_set.insert("8");
      Evnt_93.add_attribute("Dt", "EventDate_t_377053538"); // 2
      Evnt_93_set.insert("EventDate_t_377053538");
      Evnt_93.add_attribute("Tm", "EventTime_t_536513226"); // 2
      Evnt_93_set.insert("EventTime_t_536513226");
      Evnt_93.add_attribute("Px", "20111388.490000"); // 2
      Evnt_93_set.insert("20111388.490000");
      Evnt_93.add_attribute("Txt", "EventText_t_181383373"); // 2
      Evnt_93_set.insert("EventText_t_181383373");
      all_values.push_back(Evnt_93_set);
      all_compo_names.insert("Evnt_93_set");

      Instrmt_96.add_element(Evnt_93);
    }
    {
      xml_element Pty_473{"Pty"};
      multiset<string> Pty_473_set;
      Pty_473.add_attribute("ID", "InstrumentPartyID_t_1304040901"); // 2
      Pty_473_set.insert("InstrumentPartyID_t_1304040901");
      Pty_473.add_attribute("Src", "7"); // 2
      Pty_473_set.insert("7");
      Pty_473.add_attribute("R", "54"); // 2
      Pty_473_set.insert("54");
      all_values.push_back(Pty_473_set);
      all_compo_names.insert("Pty_473_set");

      {
        xml_element Sub_473{"Sub"};
        multiset<string> Sub_473_set;
        Sub_473.add_attribute("ID", "InstrumentPartySubID_t_1384070399"); // 3
        Sub_473_set.insert("InstrumentPartySubID_t_1384070399");
        Sub_473.add_attribute("Typ", "9"); // 3
        Sub_473_set.insert("9");
        all_values.push_back(Sub_473_set);
        all_compo_names.insert("Sub_473_set");

        Pty_473.add_element(Sub_473);
      }
      Instrmt_96.add_element(Pty_473);
    }
    {
      xml_element CmplxEvnt_90{"CmplxEvnt"};
      multiset<string> CmplxEvnt_90_set;
      CmplxEvnt_90.add_attribute("Typ", "9"); // 2
      CmplxEvnt_90_set.insert("9");
      CmplxEvnt_90.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2032789105"); // 2
      CmplxEvnt_90_set.insert("ComplexOptPayoutAmount_t_2032789105");
      CmplxEvnt_90.add_attribute("Px", "7290494.000000"); // 2
      CmplxEvnt_90_set.insert("7290494.000000");
      CmplxEvnt_90.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_90_set.insert("4");
      CmplxEvnt_90.add_attribute("PxBndryPrcsn", "15021211.720000"); // 2
      CmplxEvnt_90_set.insert("15021211.720000");
      CmplxEvnt_90.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_90_set.insert("1");
      CmplxEvnt_90.add_attribute("Cond", "1"); // 2
      CmplxEvnt_90_set.insert("1");
      all_values.push_back(CmplxEvnt_90_set);
      all_compo_names.insert("CmplxEvnt_90_set");

      {
        xml_element EvntDts_90{"EvntDts"};
        multiset<string> EvntDts_90_set;
        EvntDts_90.add_attribute("StartDt", "ComplexEventStartDate_t_1775614311"); // 3
        EvntDts_90_set.insert("ComplexEventStartDate_t_1775614311");
        EvntDts_90.add_attribute("EndDt", "ComplexEventEndDate_t_403169512"); // 3
        EvntDts_90_set.insert("ComplexEventEndDate_t_403169512");
        all_values.push_back(EvntDts_90_set);
        all_compo_names.insert("EvntDts_90_set");

        {
          xml_element EvntTms_90{"EvntTms"};
          multiset<string> EvntTms_90_set;
          EvntTms_90.add_attribute("StartTm", "1519809686"); // 4
          EvntTms_90_set.insert("1519809686");
          EvntTms_90.add_attribute("EndTm", "57982546"); // 4
          EvntTms_90_set.insert("57982546");
          all_values.push_back(EvntTms_90_set);
          all_compo_names.insert("EvntTms_90_set");

          EvntDts_90.add_element(EvntTms_90);
        }
        CmplxEvnt_90.add_element(EvntDts_90);
      }
      Instrmt_96.add_element(CmplxEvnt_90);
    }
    elt.add_element(Instrmt_96);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_17{"InstrmtExt"};
    multiset<string> InstrmtExt_17_set;
    InstrmtExt_17.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_17_set.insert("2");
    InstrmtExt_17.add_attribute("PctAtRisk", "3883591.350000"); // 1
    InstrmtExt_17_set.insert("3883591.350000");
    all_values.push_back(InstrmtExt_17_set);
    all_compo_names.insert("InstrmtExt_17_set");

    {
      xml_element Attrb_28{"Attrb"};
      multiset<string> Attrb_28_set;
      Attrb_28.add_attribute("Typ", "4"); // 2
      Attrb_28_set.insert("4");
      Attrb_28.add_attribute("Val", "InstrAttribValue_t_81191414"); // 2
      Attrb_28_set.insert("InstrAttribValue_t_81191414");
      all_values.push_back(Attrb_28_set);
      all_compo_names.insert("Attrb_28_set");

      InstrmtExt_17.add_element(Attrb_28);
    }
    elt.add_element(InstrmtExt_17);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_32{"FinDetls"};
    multiset<string> FinDetls_32_set;
    FinDetls_32.add_attribute("AgmtDesc", "AgreementDesc_t_1385956156"); // 1
    FinDetls_32_set.insert("AgreementDesc_t_1385956156");
    FinDetls_32.add_attribute("AgmtID", "AgreementID_t_491878274"); // 1
    FinDetls_32_set.insert("AgreementID_t_491878274");
    FinDetls_32.add_attribute("AgmtDt", "AgreementDate_t_947544747"); // 1
    FinDetls_32_set.insert("AgreementDate_t_947544747");
    FinDetls_32.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_32_set.insert("CAN");
    FinDetls_32.add_attribute("TrmTyp", "4"); // 1
    FinDetls_32_set.insert("4");
    FinDetls_32.add_attribute("StartDt", "StartDate_t_445378935"); // 1
    FinDetls_32_set.insert("StartDate_t_445378935");
    FinDetls_32.add_attribute("EndDt", "EndDate_t_491639665"); // 1
    FinDetls_32_set.insert("EndDate_t_491639665");
    FinDetls_32.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_32_set.insert("1");
    FinDetls_32.add_attribute("MgnRatio", "3090341.360000"); // 1
    FinDetls_32_set.insert("3090341.360000");
    all_values.push_back(FinDetls_32_set);
    all_compo_names.insert("FinDetls_32_set");

    elt.add_element(FinDetls_32);
  } // end FinDetls
  { // Undly
    xml_element Undly_121{"Undly"};
    multiset<string> Undly_121_set;
    Undly_121.add_attribute("Sym", "UnderlyingSymbol_t_575430170"); // 1
    Undly_121_set.insert("UnderlyingSymbol_t_575430170");
    Undly_121.add_attribute("Sfx", "CD"); // 1
    Undly_121_set.insert("CD");
    Undly_121.add_attribute("ID", "UnderlyingSecurityID_t_1843304538"); // 1
    Undly_121_set.insert("UnderlyingSecurityID_t_1843304538");
    Undly_121.add_attribute("Src", "G"); // 1
    Undly_121_set.insert("G");
    Undly_121.add_attribute("Prod", "5"); // 1
    Undly_121_set.insert("5");
    Undly_121.add_attribute("CFI", "UnderlyingCFICode_t_1731560886"); // 1
    Undly_121_set.insert("UnderlyingCFICode_t_1731560886");
    Undly_121.add_attribute("SecTyp", "MPP"); // 1
    Undly_121_set.insert("MPP");
    Undly_121.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_247413294"); // 1
    Undly_121_set.insert("UnderlyingSecuritySubType_t_247413294");
    Undly_121.add_attribute("MMY", "1800312994"); // 1
    Undly_121_set.insert("1800312994");
    Undly_121.add_attribute("Mat", "UnderlyingMaturityDate_t_1199443550"); // 1
    Undly_121_set.insert("UnderlyingMaturityDate_t_1199443550");
    Undly_121.add_attribute("MatTm", "1882563135"); // 1
    Undly_121_set.insert("1882563135");
    Undly_121.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1820515691"); // 1
    Undly_121_set.insert("UnderlyingCouponPaymentDate_t_1820515691");
    Undly_121.add_attribute("RestrctTyp", "MR"); // 1
    Undly_121_set.insert("MR");
    Undly_121.add_attribute("Snrty", "SD"); // 1
    Undly_121_set.insert("SD");
    Undly_121.add_attribute("NotlPctOut", "11928417.290000"); // 1
    Undly_121_set.insert("11928417.290000");
    Undly_121.add_attribute("OrigNotlPctOut", "8855567.590000"); // 1
    Undly_121_set.insert("8855567.590000");
    Undly_121.add_attribute("AttchPnt", "15802895.190000"); // 1
    Undly_121_set.insert("15802895.190000");
    Undly_121.add_attribute("DetchPnt", "15812008.640000"); // 1
    Undly_121_set.insert("15812008.640000");
    Undly_121.add_attribute("Issued", "UnderlyingIssueDate_t_1234098666"); // 1
    Undly_121_set.insert("UnderlyingIssueDate_t_1234098666");
    Undly_121.add_attribute("RepoCollSecTyp", "1661480933"); // 1
    Undly_121_set.insert("1661480933");
    Undly_121.add_attribute("RepoTrm", "819673372"); // 1
    Undly_121_set.insert("819673372");
    Undly_121.add_attribute("RepoRt", "17259769.400000"); // 1
    Undly_121_set.insert("17259769.400000");
    Undly_121.add_attribute("Fctr", "4615420.320000"); // 1
    Undly_121_set.insert("4615420.320000");
    Undly_121.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1484469327"); // 1
    Undly_121_set.insert("UnderlyingCreditRating_t_1484469327");
    Undly_121.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1840563068"); // 1
    Undly_121_set.insert("UnderlyingInstrRegistry_t_1840563068");
    Undly_121.add_attribute("Ctry", "1343901723"); // 1
    Undly_121_set.insert("1343901723");
    Undly_121.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1929848262"); // 1
    Undly_121_set.insert("UnderlyingStateOrProvinceOfIssue_t_1929848262");
    Undly_121.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_184719085"); // 1
    Undly_121_set.insert("UnderlyingLocaleOfIssue_t_184719085");
    Undly_121.add_attribute("Redeem", "UnderlyingRedemptionDate_t_615290992"); // 1
    Undly_121_set.insert("UnderlyingRedemptionDate_t_615290992");
    Undly_121.add_attribute("StrkPx", "913987.500000"); // 1
    Undly_121_set.insert("913987.500000");
    Undly_121.add_attribute("StrkCcy", "USD"); // 1
    Undly_121_set.insert("USD");
    Undly_121.add_attribute("OptA", "1268188214"); // 1
    Undly_121_set.insert("1268188214");
    Undly_121.add_attribute("Mult", "5535630.140000"); // 1
    Undly_121_set.insert("5535630.140000");
    Undly_121.add_attribute("MultTyp", "2"); // 1
    Undly_121_set.insert("2");
    Undly_121.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_121_set.insert("4");
    Undly_121.add_attribute("UOM", "USD"); // 1
    Undly_121_set.insert("USD");
    Undly_121.add_attribute("UOMQty", "7000604.610000"); // 1
    Undly_121_set.insert("7000604.610000");
    Undly_121.add_attribute("PxUOM", "Gal"); // 1
    Undly_121_set.insert("Gal");
    Undly_121.add_attribute("PxUOMQty", "19379532.460000"); // 1
    Undly_121_set.insert("19379532.460000");
    Undly_121.add_attribute("TmUnit", "Yr"); // 1
    Undly_121_set.insert("Yr");
    Undly_121.add_attribute("ExerStyle", "0"); // 1
    Undly_121_set.insert("0");
    Undly_121.add_attribute("CpnRt", "16109852.890000"); // 1
    Undly_121_set.insert("16109852.890000");
    Undly_121.add_attribute("Exch", "UnderlyingSecurityExchange_t_579594577"); // 1
    Undly_121_set.insert("UnderlyingSecurityExchange_t_579594577");
    Undly_121.add_attribute("Issr", "UnderlyingIssuer_t_907293891"); // 1
    Undly_121_set.insert("UnderlyingIssuer_t_907293891");
    Undly_121.add_attribute("EncUndIssrLen", "656343370"); // 1
    Undly_121_set.insert("656343370");
    Undly_121.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1465151336"); // 1
    Undly_121_set.insert("EncodedUnderlyingIssuer_t_1465151336");
    Undly_121.add_attribute("Desc", "UnderlyingSecurityDesc_t_340099762"); // 1
    Undly_121_set.insert("UnderlyingSecurityDesc_t_340099762");
    Undly_121.add_attribute("EncUndSecDescLen", "90060586"); // 1
    Undly_121_set.insert("90060586");
    Undly_121.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_551766354"); // 1
    Undly_121_set.insert("EncodedUnderlyingSecurityDesc_t_551766354");
    Undly_121.add_attribute("CPPgm", "UnderlyingCPProgram_t_2001580695"); // 1
    Undly_121_set.insert("UnderlyingCPProgram_t_2001580695");
    Undly_121.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_909733959"); // 1
    Undly_121_set.insert("UnderlyingCPRegType_t_909733959");
    Undly_121.add_attribute("AllocPct", "1302596.470000"); // 1
    Undly_121_set.insert("1302596.470000");
    Undly_121.add_attribute("Ccy", "JPY"); // 1
    Undly_121_set.insert("JPY");
    Undly_121.add_attribute("Qty", "19708227.150000"); // 1
    Undly_121_set.insert("19708227.150000");
    Undly_121.add_attribute("SettlTyp", "5"); // 1
    Undly_121_set.insert("5");
    Undly_121.add_attribute("CashAmt", "UnderlyingCashAmount_t_29084252"); // 1
    Undly_121_set.insert("UnderlyingCashAmount_t_29084252");
    Undly_121.add_attribute("CashTyp", "FIXED"); // 1
    Undly_121_set.insert("FIXED");
    Undly_121.add_attribute("Px", "1273481.470000"); // 1
    Undly_121_set.insert("1273481.470000");
    Undly_121.add_attribute("DirtPx", "1204830.020000"); // 1
    Undly_121_set.insert("1204830.020000");
    Undly_121.add_attribute("EndPx", "8658002.760000"); // 1
    Undly_121_set.insert("8658002.760000");
    Undly_121.add_attribute("StartVal", "UnderlyingStartValue_t_1318069310"); // 1
    Undly_121_set.insert("UnderlyingStartValue_t_1318069310");
    Undly_121.add_attribute("CurVal", "UnderlyingCurrentValue_t_1388671216"); // 1
    Undly_121_set.insert("UnderlyingCurrentValue_t_1388671216");
    Undly_121.add_attribute("EndVal", "UnderlyingEndValue_t_1419363290"); // 1
    Undly_121_set.insert("UnderlyingEndValue_t_1419363290");
    Undly_121.add_attribute("AdjQty", "1733237.450000"); // 1
    Undly_121_set.insert("1733237.450000");
    Undly_121.add_attribute("FxRate", "277396.770000"); // 1
    Undly_121_set.insert("277396.770000");
    Undly_121.add_attribute("FxRateCalc", "M"); // 1
    Undly_121_set.insert("M");
    Undly_121.add_attribute("CapValu", "UnderlyingCapValue_t_873384207"); // 1
    Undly_121_set.insert("UnderlyingCapValue_t_873384207");
    Undly_121.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1061705081"); // 1
    Undly_121_set.insert("UnderlyingSettlMethod_t_1061705081");
    Undly_121.add_attribute("PutCall", "1347473141"); // 1
    Undly_121_set.insert("1347473141");
    all_values.push_back(Undly_121_set);
    all_compo_names.insert("Undly_121_set");

    {
      xml_element UndAID_121{"UndAID"};
      multiset<string> UndAID_121_set;
      UndAID_121.add_attribute("AltID", "UnderlyingSecurityAltID_t_625404570"); // 2
      UndAID_121_set.insert("UnderlyingSecurityAltID_t_625404570");
      UndAID_121.add_attribute("AltIDSrc", "J"); // 2
      UndAID_121_set.insert("J");
      all_values.push_back(UndAID_121_set);
      all_compo_names.insert("UndAID_121_set");

      Undly_121.add_element(UndAID_121);
    }
    {
      xml_element Stip_198{"Stip"};
      multiset<string> Stip_198_set;
      Stip_198.add_attribute("Typ", "MAXBAL"); // 2
      Stip_198_set.insert("MAXBAL");
      Stip_198.add_attribute("Val", "UnderlyingStipValue_t_1204999147"); // 2
      Stip_198_set.insert("UnderlyingStipValue_t_1204999147");
      all_values.push_back(Stip_198_set);
      all_compo_names.insert("Stip_198_set");

      Undly_121.add_element(Stip_198);
    }
    {
      xml_element Pty_474{"Pty"};
      multiset<string> Pty_474_set;
      Pty_474.add_attribute("ID", "UnderlyingInstrumentPartyID_t_590560215"); // 2
      Pty_474_set.insert("UnderlyingInstrumentPartyID_t_590560215");
      Pty_474.add_attribute("Src", "4"); // 2
      Pty_474_set.insert("4");
      Pty_474.add_attribute("R", "29"); // 2
      Pty_474_set.insert("29");
      all_values.push_back(Pty_474_set);
      all_compo_names.insert("Pty_474_set");

      {
        xml_element Sub_474{"Sub"};
        multiset<string> Sub_474_set;
        Sub_474.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_930659977"); // 3
        Sub_474_set.insert("UnderlyingInstrumentPartySubID_t_930659977");
        Sub_474.add_attribute("Typ", "13"); // 3
        Sub_474_set.insert("13");
        all_values.push_back(Sub_474_set);
        all_compo_names.insert("Sub_474_set");

        Pty_474.add_element(Sub_474);
      }
      Undly_121.add_element(Pty_474);
    }
    elt.add_element(Undly_121);
  } // end Undly
  { // Undly
    xml_element Undly_122{"Undly"};
    multiset<string> Undly_122_set;
    Undly_122.add_attribute("Sym", "UnderlyingSymbol_t_1074433190"); // 1
    Undly_122_set.insert("UnderlyingSymbol_t_1074433190");
    Undly_122.add_attribute("Sfx", "CD"); // 1
    Undly_122_set.insert("CD");
    Undly_122.add_attribute("ID", "UnderlyingSecurityID_t_319629050"); // 1
    Undly_122_set.insert("UnderlyingSecurityID_t_319629050");
    Undly_122.add_attribute("Src", "8"); // 1
    Undly_122_set.insert("8");
    Undly_122.add_attribute("Prod", "10"); // 1
    Undly_122_set.insert("10");
    Undly_122.add_attribute("CFI", "UnderlyingCFICode_t_566348688"); // 1
    Undly_122_set.insert("UnderlyingCFICode_t_566348688");
    Undly_122.add_attribute("SecTyp", "XCN"); // 1
    Undly_122_set.insert("XCN");
    Undly_122.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_612453258"); // 1
    Undly_122_set.insert("UnderlyingSecuritySubType_t_612453258");
    Undly_122.add_attribute("MMY", "595432940"); // 1
    Undly_122_set.insert("595432940");
    Undly_122.add_attribute("Mat", "UnderlyingMaturityDate_t_1036090057"); // 1
    Undly_122_set.insert("UnderlyingMaturityDate_t_1036090057");
    Undly_122.add_attribute("MatTm", "739801406"); // 1
    Undly_122_set.insert("739801406");
    Undly_122.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_715915942"); // 1
    Undly_122_set.insert("UnderlyingCouponPaymentDate_t_715915942");
    Undly_122.add_attribute("RestrctTyp", "MR"); // 1
    Undly_122_set.insert("MR");
    Undly_122.add_attribute("Snrty", "SR"); // 1
    Undly_122_set.insert("SR");
    Undly_122.add_attribute("NotlPctOut", "21045871.590000"); // 1
    Undly_122_set.insert("21045871.590000");
    Undly_122.add_attribute("OrigNotlPctOut", "11737699.760000"); // 1
    Undly_122_set.insert("11737699.760000");
    Undly_122.add_attribute("AttchPnt", "837108.130000"); // 1
    Undly_122_set.insert("837108.130000");
    Undly_122.add_attribute("DetchPnt", "21323268.360000"); // 1
    Undly_122_set.insert("21323268.360000");
    Undly_122.add_attribute("Issued", "UnderlyingIssueDate_t_583289870"); // 1
    Undly_122_set.insert("UnderlyingIssueDate_t_583289870");
    Undly_122.add_attribute("RepoCollSecTyp", "957095020"); // 1
    Undly_122_set.insert("957095020");
    Undly_122.add_attribute("RepoTrm", "1046548269"); // 1
    Undly_122_set.insert("1046548269");
    Undly_122.add_attribute("RepoRt", "19307630.110000"); // 1
    Undly_122_set.insert("19307630.110000");
    Undly_122.add_attribute("Fctr", "15824995.910000"); // 1
    Undly_122_set.insert("15824995.910000");
    Undly_122.add_attribute("CrdRtg", "UnderlyingCreditRating_t_729814593"); // 1
    Undly_122_set.insert("UnderlyingCreditRating_t_729814593");
    Undly_122.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_594254146"); // 1
    Undly_122_set.insert("UnderlyingInstrRegistry_t_594254146");
    Undly_122.add_attribute("Ctry", "640015090"); // 1
    Undly_122_set.insert("640015090");
    Undly_122.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1320374808"); // 1
    Undly_122_set.insert("UnderlyingStateOrProvinceOfIssue_t_1320374808");
    Undly_122.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2061572299"); // 1
    Undly_122_set.insert("UnderlyingLocaleOfIssue_t_2061572299");
    Undly_122.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1162681926"); // 1
    Undly_122_set.insert("UnderlyingRedemptionDate_t_1162681926");
    Undly_122.add_attribute("StrkPx", "1035511.370000"); // 1
    Undly_122_set.insert("1035511.370000");
    Undly_122.add_attribute("StrkCcy", "EUR"); // 1
    Undly_122_set.insert("EUR");
    Undly_122.add_attribute("OptA", "888308161"); // 1
    Undly_122_set.insert("888308161");
    Undly_122.add_attribute("Mult", "17910964.410000"); // 1
    Undly_122_set.insert("17910964.410000");
    Undly_122.add_attribute("MultTyp", "1"); // 1
    Undly_122_set.insert("1");
    Undly_122.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_122_set.insert("0");
    Undly_122.add_attribute("UOM", "Bbl"); // 1
    Undly_122_set.insert("Bbl");
    Undly_122.add_attribute("UOMQty", "1748725.630000"); // 1
    Undly_122_set.insert("1748725.630000");
    Undly_122.add_attribute("PxUOM", "tn"); // 1
    Undly_122_set.insert("tn");
    Undly_122.add_attribute("PxUOMQty", "8053944.220000"); // 1
    Undly_122_set.insert("8053944.220000");
    Undly_122.add_attribute("TmUnit", "S"); // 1
    Undly_122_set.insert("S");
    Undly_122.add_attribute("ExerStyle", "2"); // 1
    Undly_122_set.insert("2");
    Undly_122.add_attribute("CpnRt", "15213103.640000"); // 1
    Undly_122_set.insert("15213103.640000");
    Undly_122.add_attribute("Exch", "UnderlyingSecurityExchange_t_965369305"); // 1
    Undly_122_set.insert("UnderlyingSecurityExchange_t_965369305");
    Undly_122.add_attribute("Issr", "UnderlyingIssuer_t_1103862349"); // 1
    Undly_122_set.insert("UnderlyingIssuer_t_1103862349");
    Undly_122.add_attribute("EncUndIssrLen", "1478413875"); // 1
    Undly_122_set.insert("1478413875");
    Undly_122.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2139139281"); // 1
    Undly_122_set.insert("EncodedUnderlyingIssuer_t_2139139281");
    Undly_122.add_attribute("Desc", "UnderlyingSecurityDesc_t_1187573163"); // 1
    Undly_122_set.insert("UnderlyingSecurityDesc_t_1187573163");
    Undly_122.add_attribute("EncUndSecDescLen", "1463257064"); // 1
    Undly_122_set.insert("1463257064");
    Undly_122.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_574945504"); // 1
    Undly_122_set.insert("EncodedUnderlyingSecurityDesc_t_574945504");
    Undly_122.add_attribute("CPPgm", "UnderlyingCPProgram_t_2144668183"); // 1
    Undly_122_set.insert("UnderlyingCPProgram_t_2144668183");
    Undly_122.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_362321685"); // 1
    Undly_122_set.insert("UnderlyingCPRegType_t_362321685");
    Undly_122.add_attribute("AllocPct", "3582248.670000"); // 1
    Undly_122_set.insert("3582248.670000");
    Undly_122.add_attribute("Ccy", "EUR"); // 1
    Undly_122_set.insert("EUR");
    Undly_122.add_attribute("Qty", "9524790.130000"); // 1
    Undly_122_set.insert("9524790.130000");
    Undly_122.add_attribute("SettlTyp", "4"); // 1
    Undly_122_set.insert("4");
    Undly_122.add_attribute("CashAmt", "UnderlyingCashAmount_t_265027439"); // 1
    Undly_122_set.insert("UnderlyingCashAmount_t_265027439");
    Undly_122.add_attribute("CashTyp", "FIXED"); // 1
    Undly_122_set.insert("FIXED");
    Undly_122.add_attribute("Px", "12348974.950000"); // 1
    Undly_122_set.insert("12348974.950000");
    Undly_122.add_attribute("DirtPx", "3685785.770000"); // 1
    Undly_122_set.insert("3685785.770000");
    Undly_122.add_attribute("EndPx", "1905514.070000"); // 1
    Undly_122_set.insert("1905514.070000");
    Undly_122.add_attribute("StartVal", "UnderlyingStartValue_t_1324528964"); // 1
    Undly_122_set.insert("UnderlyingStartValue_t_1324528964");
    Undly_122.add_attribute("CurVal", "UnderlyingCurrentValue_t_1256886738"); // 1
    Undly_122_set.insert("UnderlyingCurrentValue_t_1256886738");
    Undly_122.add_attribute("EndVal", "UnderlyingEndValue_t_1981647848"); // 1
    Undly_122_set.insert("UnderlyingEndValue_t_1981647848");
    Undly_122.add_attribute("AdjQty", "4713696.230000"); // 1
    Undly_122_set.insert("4713696.230000");
    Undly_122.add_attribute("FxRate", "10981073.550000"); // 1
    Undly_122_set.insert("10981073.550000");
    Undly_122.add_attribute("FxRateCalc", "D"); // 1
    Undly_122_set.insert("D");
    Undly_122.add_attribute("CapValu", "UnderlyingCapValue_t_646242186"); // 1
    Undly_122_set.insert("UnderlyingCapValue_t_646242186");
    Undly_122.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1551781231"); // 1
    Undly_122_set.insert("UnderlyingSettlMethod_t_1551781231");
    Undly_122.add_attribute("PutCall", "849520103"); // 1
    Undly_122_set.insert("849520103");
    all_values.push_back(Undly_122_set);
    all_compo_names.insert("Undly_122_set");

    {
      xml_element UndAID_122{"UndAID"};
      multiset<string> UndAID_122_set;
      UndAID_122.add_attribute("AltID", "UnderlyingSecurityAltID_t_1857204806"); // 2
      UndAID_122_set.insert("UnderlyingSecurityAltID_t_1857204806");
      UndAID_122.add_attribute("AltIDSrc", "J"); // 2
      UndAID_122_set.insert("J");
      all_values.push_back(UndAID_122_set);
      all_compo_names.insert("UndAID_122_set");

      Undly_122.add_element(UndAID_122);
    }
    {
      xml_element Stip_199{"Stip"};
      multiset<string> Stip_199_set;
      Stip_199.add_attribute("Typ", "LOTVAR"); // 2
      Stip_199_set.insert("LOTVAR");
      Stip_199.add_attribute("Val", "UnderlyingStipValue_t_675090463"); // 2
      Stip_199_set.insert("UnderlyingStipValue_t_675090463");
      all_values.push_back(Stip_199_set);
      all_compo_names.insert("Stip_199_set");

      Undly_122.add_element(Stip_199);
    }
    {
      xml_element Pty_475{"Pty"};
      multiset<string> Pty_475_set;
      Pty_475.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1701635214"); // 2
      Pty_475_set.insert("UnderlyingInstrumentPartyID_t_1701635214");
      Pty_475.add_attribute("Src", "G"); // 2
      Pty_475_set.insert("G");
      Pty_475.add_attribute("R", "48"); // 2
      Pty_475_set.insert("48");
      all_values.push_back(Pty_475_set);
      all_compo_names.insert("Pty_475_set");

      {
        xml_element Sub_475{"Sub"};
        multiset<string> Sub_475_set;
        Sub_475.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_741724729"); // 3
        Sub_475_set.insert("UnderlyingInstrumentPartySubID_t_741724729");
        Sub_475.add_attribute("Typ", "1"); // 3
        Sub_475_set.insert("1");
        all_values.push_back(Sub_475_set);
        all_compo_names.insert("Sub_475_set");

        Pty_475.add_element(Sub_475);
      }
      Undly_122.add_element(Pty_475);
    }
    elt.add_element(Undly_122);
  } // end Undly
  { // Undly
    xml_element Undly_123{"Undly"};
    multiset<string> Undly_123_set;
    Undly_123.add_attribute("Sym", "UnderlyingSymbol_t_1241691601"); // 1
    Undly_123_set.insert("UnderlyingSymbol_t_1241691601");
    Undly_123.add_attribute("Sfx", "CD"); // 1
    Undly_123_set.insert("CD");
    Undly_123.add_attribute("ID", "UnderlyingSecurityID_t_1379855797"); // 1
    Undly_123_set.insert("UnderlyingSecurityID_t_1379855797");
    Undly_123.add_attribute("Src", "J"); // 1
    Undly_123_set.insert("J");
    Undly_123.add_attribute("Prod", "9"); // 1
    Undly_123_set.insert("9");
    Undly_123.add_attribute("CFI", "UnderlyingCFICode_t_324508428"); // 1
    Undly_123_set.insert("UnderlyingCFICode_t_324508428");
    Undly_123.add_attribute("SecTyp", "EUCP"); // 1
    Undly_123_set.insert("EUCP");
    Undly_123.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_243325312"); // 1
    Undly_123_set.insert("UnderlyingSecuritySubType_t_243325312");
    Undly_123.add_attribute("MMY", "589535867"); // 1
    Undly_123_set.insert("589535867");
    Undly_123.add_attribute("Mat", "UnderlyingMaturityDate_t_1271479498"); // 1
    Undly_123_set.insert("UnderlyingMaturityDate_t_1271479498");
    Undly_123.add_attribute("MatTm", "1478222807"); // 1
    Undly_123_set.insert("1478222807");
    Undly_123.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_958114444"); // 1
    Undly_123_set.insert("UnderlyingCouponPaymentDate_t_958114444");
    Undly_123.add_attribute("RestrctTyp", "MR"); // 1
    Undly_123_set.insert("MR");
    Undly_123.add_attribute("Snrty", "SD"); // 1
    Undly_123_set.insert("SD");
    Undly_123.add_attribute("NotlPctOut", "675175.350000"); // 1
    Undly_123_set.insert("675175.350000");
    Undly_123.add_attribute("OrigNotlPctOut", "12961951.050000"); // 1
    Undly_123_set.insert("12961951.050000");
    Undly_123.add_attribute("AttchPnt", "11266377.470000"); // 1
    Undly_123_set.insert("11266377.470000");
    Undly_123.add_attribute("DetchPnt", "11656248.900000"); // 1
    Undly_123_set.insert("11656248.900000");
    Undly_123.add_attribute("Issued", "UnderlyingIssueDate_t_1340320787"); // 1
    Undly_123_set.insert("UnderlyingIssueDate_t_1340320787");
    Undly_123.add_attribute("RepoCollSecTyp", "1772879933"); // 1
    Undly_123_set.insert("1772879933");
    Undly_123.add_attribute("RepoTrm", "569922473"); // 1
    Undly_123_set.insert("569922473");
    Undly_123.add_attribute("RepoRt", "423572.420000"); // 1
    Undly_123_set.insert("423572.420000");
    Undly_123.add_attribute("Fctr", "14826010.910000"); // 1
    Undly_123_set.insert("14826010.910000");
    Undly_123.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1167695338"); // 1
    Undly_123_set.insert("UnderlyingCreditRating_t_1167695338");
    Undly_123.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_265704062"); // 1
    Undly_123_set.insert("UnderlyingInstrRegistry_t_265704062");
    Undly_123.add_attribute("Ctry", "10207906"); // 1
    Undly_123_set.insert("10207906");
    Undly_123.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_721846904"); // 1
    Undly_123_set.insert("UnderlyingStateOrProvinceOfIssue_t_721846904");
    Undly_123.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1967464758"); // 1
    Undly_123_set.insert("UnderlyingLocaleOfIssue_t_1967464758");
    Undly_123.add_attribute("Redeem", "UnderlyingRedemptionDate_t_676954003"); // 1
    Undly_123_set.insert("UnderlyingRedemptionDate_t_676954003");
    Undly_123.add_attribute("StrkPx", "14635716.330000"); // 1
    Undly_123_set.insert("14635716.330000");
    Undly_123.add_attribute("StrkCcy", "GBP"); // 1
    Undly_123_set.insert("GBP");
    Undly_123.add_attribute("OptA", "54997249"); // 1
    Undly_123_set.insert("54997249");
    Undly_123.add_attribute("Mult", "698873.700000"); // 1
    Undly_123_set.insert("698873.700000");
    Undly_123.add_attribute("MultTyp", "2"); // 1
    Undly_123_set.insert("2");
    Undly_123.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_123_set.insert("2");
    Undly_123.add_attribute("UOM", "t"); // 1
    Undly_123_set.insert("t");
    Undly_123.add_attribute("UOMQty", "17759902.590000"); // 1
    Undly_123_set.insert("17759902.590000");
    Undly_123.add_attribute("PxUOM", "Gal"); // 1
    Undly_123_set.insert("Gal");
    Undly_123.add_attribute("PxUOMQty", "9839316.660000"); // 1
    Undly_123_set.insert("9839316.660000");
    Undly_123.add_attribute("TmUnit", "Min"); // 1
    Undly_123_set.insert("Min");
    Undly_123.add_attribute("ExerStyle", "2"); // 1
    Undly_123_set.insert("2");
    Undly_123.add_attribute("CpnRt", "19420461.100000"); // 1
    Undly_123_set.insert("19420461.100000");
    Undly_123.add_attribute("Exch", "UnderlyingSecurityExchange_t_214533367"); // 1
    Undly_123_set.insert("UnderlyingSecurityExchange_t_214533367");
    Undly_123.add_attribute("Issr", "UnderlyingIssuer_t_455439588"); // 1
    Undly_123_set.insert("UnderlyingIssuer_t_455439588");
    Undly_123.add_attribute("EncUndIssrLen", "2009563645"); // 1
    Undly_123_set.insert("2009563645");
    Undly_123.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1510728472"); // 1
    Undly_123_set.insert("EncodedUnderlyingIssuer_t_1510728472");
    Undly_123.add_attribute("Desc", "UnderlyingSecurityDesc_t_1582077335"); // 1
    Undly_123_set.insert("UnderlyingSecurityDesc_t_1582077335");
    Undly_123.add_attribute("EncUndSecDescLen", "1027704888"); // 1
    Undly_123_set.insert("1027704888");
    Undly_123.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_703565611"); // 1
    Undly_123_set.insert("EncodedUnderlyingSecurityDesc_t_703565611");
    Undly_123.add_attribute("CPPgm", "UnderlyingCPProgram_t_1207473620"); // 1
    Undly_123_set.insert("UnderlyingCPProgram_t_1207473620");
    Undly_123.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1597627361"); // 1
    Undly_123_set.insert("UnderlyingCPRegType_t_1597627361");
    Undly_123.add_attribute("AllocPct", "7459228.540000"); // 1
    Undly_123_set.insert("7459228.540000");
    Undly_123.add_attribute("Ccy", "EUR"); // 1
    Undly_123_set.insert("EUR");
    Undly_123.add_attribute("Qty", "10116269.160000"); // 1
    Undly_123_set.insert("10116269.160000");
    Undly_123.add_attribute("SettlTyp", "2"); // 1
    Undly_123_set.insert("2");
    Undly_123.add_attribute("CashAmt", "UnderlyingCashAmount_t_1339685955"); // 1
    Undly_123_set.insert("UnderlyingCashAmount_t_1339685955");
    Undly_123.add_attribute("CashTyp", "FIXED"); // 1
    Undly_123_set.insert("FIXED");
    Undly_123.add_attribute("Px", "12297529.730000"); // 1
    Undly_123_set.insert("12297529.730000");
    Undly_123.add_attribute("DirtPx", "6557739.400000"); // 1
    Undly_123_set.insert("6557739.400000");
    Undly_123.add_attribute("EndPx", "16691232.480000"); // 1
    Undly_123_set.insert("16691232.480000");
    Undly_123.add_attribute("StartVal", "UnderlyingStartValue_t_1000914929"); // 1
    Undly_123_set.insert("UnderlyingStartValue_t_1000914929");
    Undly_123.add_attribute("CurVal", "UnderlyingCurrentValue_t_710771190"); // 1
    Undly_123_set.insert("UnderlyingCurrentValue_t_710771190");
    Undly_123.add_attribute("EndVal", "UnderlyingEndValue_t_1739010618"); // 1
    Undly_123_set.insert("UnderlyingEndValue_t_1739010618");
    Undly_123.add_attribute("AdjQty", "2245097.060000"); // 1
    Undly_123_set.insert("2245097.060000");
    Undly_123.add_attribute("FxRate", "9368781.820000"); // 1
    Undly_123_set.insert("9368781.820000");
    Undly_123.add_attribute("FxRateCalc", "D"); // 1
    Undly_123_set.insert("D");
    Undly_123.add_attribute("CapValu", "UnderlyingCapValue_t_2000499965"); // 1
    Undly_123_set.insert("UnderlyingCapValue_t_2000499965");
    Undly_123.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1406310487"); // 1
    Undly_123_set.insert("UnderlyingSettlMethod_t_1406310487");
    Undly_123.add_attribute("PutCall", "969854435"); // 1
    Undly_123_set.insert("969854435");
    all_values.push_back(Undly_123_set);
    all_compo_names.insert("Undly_123_set");

    {
      xml_element UndAID_123{"UndAID"};
      multiset<string> UndAID_123_set;
      UndAID_123.add_attribute("AltID", "UnderlyingSecurityAltID_t_753002427"); // 2
      UndAID_123_set.insert("UnderlyingSecurityAltID_t_753002427");
      UndAID_123.add_attribute("AltIDSrc", "G"); // 2
      UndAID_123_set.insert("G");
      all_values.push_back(UndAID_123_set);
      all_compo_names.insert("UndAID_123_set");

      Undly_123.add_element(UndAID_123);
    }
    {
      xml_element Stip_200{"Stip"};
      multiset<string> Stip_200_set;
      Stip_200.add_attribute("Typ", "ISSUESIZE"); // 2
      Stip_200_set.insert("ISSUESIZE");
      Stip_200.add_attribute("Val", "UnderlyingStipValue_t_967535794"); // 2
      Stip_200_set.insert("UnderlyingStipValue_t_967535794");
      all_values.push_back(Stip_200_set);
      all_compo_names.insert("Stip_200_set");

      Undly_123.add_element(Stip_200);
    }
    {
      xml_element Pty_476{"Pty"};
      multiset<string> Pty_476_set;
      Pty_476.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1661921539"); // 2
      Pty_476_set.insert("UnderlyingInstrumentPartyID_t_1661921539");
      Pty_476.add_attribute("Src", "2"); // 2
      Pty_476_set.insert("2");
      Pty_476.add_attribute("R", "45"); // 2
      Pty_476_set.insert("45");
      all_values.push_back(Pty_476_set);
      all_compo_names.insert("Pty_476_set");

      {
        xml_element Sub_476{"Sub"};
        multiset<string> Sub_476_set;
        Sub_476.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1096515226"); // 3
        Sub_476_set.insert("UnderlyingInstrumentPartySubID_t_1096515226");
        Sub_476.add_attribute("Typ", "9"); // 3
        Sub_476_set.insert("9");
        all_values.push_back(Sub_476_set);
        all_compo_names.insert("Sub_476_set");

        Pty_476.add_element(Sub_476);
      }
      Undly_123.add_element(Pty_476);
    }
    elt.add_element(Undly_123);
  } // end Undly
  { // Leg
    xml_element Leg_107{"Leg"};
    multiset<string> Leg_107_set;
    Leg_107.add_attribute("Sym", "LegSymbol_t_156505198"); // 1
    Leg_107_set.insert("LegSymbol_t_156505198");
    Leg_107.add_attribute("Sfx", "CD"); // 1
    Leg_107_set.insert("CD");
    Leg_107.add_attribute("ID", "LegSecurityID_t_1780269084"); // 1
    Leg_107_set.insert("LegSecurityID_t_1780269084");
    Leg_107.add_attribute("Src", "I"); // 1
    Leg_107_set.insert("I");
    Leg_107.add_attribute("Prod", "3"); // 1
    Leg_107_set.insert("3");
    Leg_107.add_attribute("CFI", "LegCFICode_t_644412352"); // 1
    Leg_107_set.insert("LegCFICode_t_644412352");
    Leg_107.add_attribute("SecTyp", "TAN"); // 1
    Leg_107_set.insert("TAN");
    Leg_107.add_attribute("SecSubTyp", "LegSecuritySubType_t_914386855"); // 1
    Leg_107_set.insert("LegSecuritySubType_t_914386855");
    Leg_107.add_attribute("MMY", "1476020379"); // 1
    Leg_107_set.insert("1476020379");
    Leg_107.add_attribute("Mat", "LegMaturityDate_t_334164555"); // 1
    Leg_107_set.insert("LegMaturityDate_t_334164555");
    Leg_107.add_attribute("MatTm", "1570160796"); // 1
    Leg_107_set.insert("1570160796");
    Leg_107.add_attribute("CpnPmt", "LegCouponPaymentDate_t_997659979"); // 1
    Leg_107_set.insert("LegCouponPaymentDate_t_997659979");
    Leg_107.add_attribute("Issued", "LegIssueDate_t_1335079485"); // 1
    Leg_107_set.insert("LegIssueDate_t_1335079485");
    Leg_107.add_attribute("RepoCollSecTyp", "133448338"); // 1
    Leg_107_set.insert("133448338");
    Leg_107.add_attribute("RepoTrm", "589186949"); // 1
    Leg_107_set.insert("589186949");
    Leg_107.add_attribute("RepoRt", "15595891.910000"); // 1
    Leg_107_set.insert("15595891.910000");
    Leg_107.add_attribute("Fctr", "10703265.200000"); // 1
    Leg_107_set.insert("10703265.200000");
    Leg_107.add_attribute("CrdRtg", "LegCreditRating_t_575109718"); // 1
    Leg_107_set.insert("LegCreditRating_t_575109718");
    Leg_107.add_attribute("Rgstry", "LegInstrRegistry_t_1412605509"); // 1
    Leg_107_set.insert("LegInstrRegistry_t_1412605509");
    Leg_107.add_attribute("Ctry", "329153359"); // 1
    Leg_107_set.insert("329153359");
    Leg_107.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1544964153"); // 1
    Leg_107_set.insert("LegStateOrProvinceOfIssue_t_1544964153");
    Leg_107.add_attribute("Lcl", "LegLocaleOfIssue_t_18124288"); // 1
    Leg_107_set.insert("LegLocaleOfIssue_t_18124288");
    Leg_107.add_attribute("Redeem", "LegRedemptionDate_t_1535635310"); // 1
    Leg_107_set.insert("LegRedemptionDate_t_1535635310");
    Leg_107.add_attribute("Strk", "1618974.030000"); // 1
    Leg_107_set.insert("1618974.030000");
    Leg_107.add_attribute("StrkCcy", "EUR"); // 1
    Leg_107_set.insert("EUR");
    Leg_107.add_attribute("OptA", "788394298"); // 1
    Leg_107_set.insert("788394298");
    Leg_107.add_attribute("Cmult", "13164407.000000"); // 1
    Leg_107_set.insert("13164407.000000");
    Leg_107.add_attribute("MultTyp", "2"); // 1
    Leg_107_set.insert("2");
    Leg_107.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_107_set.insert("3");
    Leg_107.add_attribute("UOM", "MWh"); // 1
    Leg_107_set.insert("MWh");
    Leg_107.add_attribute("UOMQty", "1556099.770000"); // 1
    Leg_107_set.insert("1556099.770000");
    Leg_107.add_attribute("PxUOM", "Alw"); // 1
    Leg_107_set.insert("Alw");
    Leg_107.add_attribute("PxUOMQty", "19835723.660000"); // 1
    Leg_107_set.insert("19835723.660000");
    Leg_107.add_attribute("TmUnit", "Min"); // 1
    Leg_107_set.insert("Min");
    Leg_107.add_attribute("ExerStyle", "2"); // 1
    Leg_107_set.insert("2");
    Leg_107.add_attribute("CpnRt", "4805010.710000"); // 1
    Leg_107_set.insert("4805010.710000");
    Leg_107.add_attribute("Exch", "LegSecurityExchange_t_2106601469"); // 1
    Leg_107_set.insert("LegSecurityExchange_t_2106601469");
    Leg_107.add_attribute("Issr", "LegIssuer_t_1888545685"); // 1
    Leg_107_set.insert("LegIssuer_t_1888545685");
    Leg_107.add_attribute("EncLegIssrLen", "1956521450"); // 1
    Leg_107_set.insert("1956521450");
    Leg_107.add_attribute("EncLegIssr", "EncodedLegIssuer_t_293282376"); // 1
    Leg_107_set.insert("EncodedLegIssuer_t_293282376");
    Leg_107.add_attribute("Desc", "LegSecurityDesc_t_1311222833"); // 1
    Leg_107_set.insert("LegSecurityDesc_t_1311222833");
    Leg_107.add_attribute("EncLegSecDescLen", "806697781"); // 1
    Leg_107_set.insert("806697781");
    Leg_107.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1628361861"); // 1
    Leg_107_set.insert("EncodedLegSecurityDesc_t_1628361861");
    Leg_107.add_attribute("RatioQty", "14446711.710000"); // 1
    Leg_107_set.insert("14446711.710000");
    Leg_107.add_attribute("Side", "B"); // 1
    Leg_107_set.insert("B");
    Leg_107.add_attribute("Ccy", "CHF"); // 1
    Leg_107_set.insert("CHF");
    Leg_107.add_attribute("Pool", "LegPool_t_1970994449"); // 1
    Leg_107_set.insert("LegPool_t_1970994449");
    Leg_107.add_attribute("Dated", "LegDatedDate_t_305589266"); // 1
    Leg_107_set.insert("LegDatedDate_t_305589266");
    Leg_107.add_attribute("CSetMo", "696667403"); // 1
    Leg_107_set.insert("696667403");
    Leg_107.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1368474954"); // 1
    Leg_107_set.insert("LegInterestAccrualDate_t_1368474954");
    Leg_107.add_attribute("PutCall", "323713554"); // 1
    Leg_107_set.insert("323713554");
    Leg_107.add_attribute("LegOptionRatio", "848190.650000"); // 1
    Leg_107_set.insert("848190.650000");
    Leg_107.add_attribute("Px", "15303723.570000"); // 1
    Leg_107_set.insert("15303723.570000");
    all_values.push_back(Leg_107_set);
    all_compo_names.insert("Leg_107_set");

    {
      xml_element LegAID_102{"LegAID"};
      multiset<string> LegAID_102_set;
      LegAID_102.add_attribute("SecAltID", "LegSecurityAltID_t_1309373636"); // 2
      LegAID_102_set.insert("LegSecurityAltID_t_1309373636");
      LegAID_102.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_102_set.insert("4");
      all_values.push_back(LegAID_102_set);
      all_compo_names.insert("LegAID_102_set");

      Leg_107.add_element(LegAID_102);
    }
    elt.add_element(Leg_107);
  } // end Leg
  { // Leg
    xml_element Leg_108{"Leg"};
    multiset<string> Leg_108_set;
    Leg_108.add_attribute("Sym", "LegSymbol_t_171283007"); // 1
    Leg_108_set.insert("LegSymbol_t_171283007");
    Leg_108.add_attribute("Sfx", "CD"); // 1
    Leg_108_set.insert("CD");
    Leg_108.add_attribute("ID", "LegSecurityID_t_1133997046"); // 1
    Leg_108_set.insert("LegSecurityID_t_1133997046");
    Leg_108.add_attribute("Src", "H"); // 1
    Leg_108_set.insert("H");
    Leg_108.add_attribute("Prod", "2"); // 1
    Leg_108_set.insert("2");
    Leg_108.add_attribute("CFI", "LegCFICode_t_1289607024"); // 1
    Leg_108_set.insert("LegCFICode_t_1289607024");
    Leg_108.add_attribute("SecTyp", "TIPS"); // 1
    Leg_108_set.insert("TIPS");
    Leg_108.add_attribute("SecSubTyp", "LegSecuritySubType_t_517722689"); // 1
    Leg_108_set.insert("LegSecuritySubType_t_517722689");
    Leg_108.add_attribute("MMY", "2144313262"); // 1
    Leg_108_set.insert("2144313262");
    Leg_108.add_attribute("Mat", "LegMaturityDate_t_692528551"); // 1
    Leg_108_set.insert("LegMaturityDate_t_692528551");
    Leg_108.add_attribute("MatTm", "998223760"); // 1
    Leg_108_set.insert("998223760");
    Leg_108.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2103431083"); // 1
    Leg_108_set.insert("LegCouponPaymentDate_t_2103431083");
    Leg_108.add_attribute("Issued", "LegIssueDate_t_433590588"); // 1
    Leg_108_set.insert("LegIssueDate_t_433590588");
    Leg_108.add_attribute("RepoCollSecTyp", "807261562"); // 1
    Leg_108_set.insert("807261562");
    Leg_108.add_attribute("RepoTrm", "249229812"); // 1
    Leg_108_set.insert("249229812");
    Leg_108.add_attribute("RepoRt", "17448134.210000"); // 1
    Leg_108_set.insert("17448134.210000");
    Leg_108.add_attribute("Fctr", "16139593.430000"); // 1
    Leg_108_set.insert("16139593.430000");
    Leg_108.add_attribute("CrdRtg", "LegCreditRating_t_1877591673"); // 1
    Leg_108_set.insert("LegCreditRating_t_1877591673");
    Leg_108.add_attribute("Rgstry", "LegInstrRegistry_t_1042000944"); // 1
    Leg_108_set.insert("LegInstrRegistry_t_1042000944");
    Leg_108.add_attribute("Ctry", "862360426"); // 1
    Leg_108_set.insert("862360426");
    Leg_108.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_770575430"); // 1
    Leg_108_set.insert("LegStateOrProvinceOfIssue_t_770575430");
    Leg_108.add_attribute("Lcl", "LegLocaleOfIssue_t_1409514988"); // 1
    Leg_108_set.insert("LegLocaleOfIssue_t_1409514988");
    Leg_108.add_attribute("Redeem", "LegRedemptionDate_t_685871227"); // 1
    Leg_108_set.insert("LegRedemptionDate_t_685871227");
    Leg_108.add_attribute("Strk", "10761646.960000"); // 1
    Leg_108_set.insert("10761646.960000");
    Leg_108.add_attribute("StrkCcy", "EUR"); // 1
    Leg_108_set.insert("EUR");
    Leg_108.add_attribute("OptA", "1399878250"); // 1
    Leg_108_set.insert("1399878250");
    Leg_108.add_attribute("Cmult", "435178.080000"); // 1
    Leg_108_set.insert("435178.080000");
    Leg_108.add_attribute("MultTyp", "0"); // 1
    Leg_108_set.insert("0");
    Leg_108.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_108_set.insert("3");
    Leg_108.add_attribute("UOM", "Bu"); // 1
    Leg_108_set.insert("Bu");
    Leg_108.add_attribute("UOMQty", "16085178.980000"); // 1
    Leg_108_set.insert("16085178.980000");
    Leg_108.add_attribute("PxUOM", "Bcf"); // 1
    Leg_108_set.insert("Bcf");
    Leg_108.add_attribute("PxUOMQty", "1649234.740000"); // 1
    Leg_108_set.insert("1649234.740000");
    Leg_108.add_attribute("TmUnit", "H"); // 1
    Leg_108_set.insert("H");
    Leg_108.add_attribute("ExerStyle", "0"); // 1
    Leg_108_set.insert("0");
    Leg_108.add_attribute("CpnRt", "14545304.980000"); // 1
    Leg_108_set.insert("14545304.980000");
    Leg_108.add_attribute("Exch", "LegSecurityExchange_t_1793283061"); // 1
    Leg_108_set.insert("LegSecurityExchange_t_1793283061");
    Leg_108.add_attribute("Issr", "LegIssuer_t_91971939"); // 1
    Leg_108_set.insert("LegIssuer_t_91971939");
    Leg_108.add_attribute("EncLegIssrLen", "1451360112"); // 1
    Leg_108_set.insert("1451360112");
    Leg_108.add_attribute("EncLegIssr", "EncodedLegIssuer_t_338327964"); // 1
    Leg_108_set.insert("EncodedLegIssuer_t_338327964");
    Leg_108.add_attribute("Desc", "LegSecurityDesc_t_1090195700"); // 1
    Leg_108_set.insert("LegSecurityDesc_t_1090195700");
    Leg_108.add_attribute("EncLegSecDescLen", "1407307548"); // 1
    Leg_108_set.insert("1407307548");
    Leg_108.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_771918553"); // 1
    Leg_108_set.insert("EncodedLegSecurityDesc_t_771918553");
    Leg_108.add_attribute("RatioQty", "18974572.620000"); // 1
    Leg_108_set.insert("18974572.620000");
    Leg_108.add_attribute("Side", "1"); // 1
    Leg_108_set.insert("1");
    Leg_108.add_attribute("Ccy", "JPY"); // 1
    Leg_108_set.insert("JPY");
    Leg_108.add_attribute("Pool", "LegPool_t_1386645385"); // 1
    Leg_108_set.insert("LegPool_t_1386645385");
    Leg_108.add_attribute("Dated", "LegDatedDate_t_1411249271"); // 1
    Leg_108_set.insert("LegDatedDate_t_1411249271");
    Leg_108.add_attribute("CSetMo", "78809736"); // 1
    Leg_108_set.insert("78809736");
    Leg_108.add_attribute("IntAcrl", "LegInterestAccrualDate_t_9737168"); // 1
    Leg_108_set.insert("LegInterestAccrualDate_t_9737168");
    Leg_108.add_attribute("PutCall", "673280611"); // 1
    Leg_108_set.insert("673280611");
    Leg_108.add_attribute("LegOptionRatio", "7646809.630000"); // 1
    Leg_108_set.insert("7646809.630000");
    Leg_108.add_attribute("Px", "10859018.640000"); // 1
    Leg_108_set.insert("10859018.640000");
    all_values.push_back(Leg_108_set);
    all_compo_names.insert("Leg_108_set");

    {
      xml_element LegAID_103{"LegAID"};
      multiset<string> LegAID_103_set;
      LegAID_103.add_attribute("SecAltID", "LegSecurityAltID_t_631979354"); // 2
      LegAID_103_set.insert("LegSecurityAltID_t_631979354");
      LegAID_103.add_attribute("SecAltIDSrc", "9"); // 2
      LegAID_103_set.insert("9");
      all_values.push_back(LegAID_103_set);
      all_compo_names.insert("LegAID_103_set");

      Leg_108.add_element(LegAID_103);
    }
    elt.add_element(Leg_108);
  } // end Leg
  { // Leg
    xml_element Leg_109{"Leg"};
    multiset<string> Leg_109_set;
    Leg_109.add_attribute("Sym", "LegSymbol_t_338296467"); // 1
    Leg_109_set.insert("LegSymbol_t_338296467");
    Leg_109.add_attribute("Sfx", "CD"); // 1
    Leg_109_set.insert("CD");
    Leg_109.add_attribute("ID", "LegSecurityID_t_2108778387"); // 1
    Leg_109_set.insert("LegSecurityID_t_2108778387");
    Leg_109.add_attribute("Src", "2"); // 1
    Leg_109_set.insert("2");
    Leg_109.add_attribute("Prod", "10"); // 1
    Leg_109_set.insert("10");
    Leg_109.add_attribute("CFI", "LegCFICode_t_1569812638"); // 1
    Leg_109_set.insert("LegCFICode_t_1569812638");
    Leg_109.add_attribute("SecTyp", "TERM"); // 1
    Leg_109_set.insert("TERM");
    Leg_109.add_attribute("SecSubTyp", "LegSecuritySubType_t_2018830712"); // 1
    Leg_109_set.insert("LegSecuritySubType_t_2018830712");
    Leg_109.add_attribute("MMY", "1497242329"); // 1
    Leg_109_set.insert("1497242329");
    Leg_109.add_attribute("Mat", "LegMaturityDate_t_1514412882"); // 1
    Leg_109_set.insert("LegMaturityDate_t_1514412882");
    Leg_109.add_attribute("MatTm", "1325877562"); // 1
    Leg_109_set.insert("1325877562");
    Leg_109.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1143041742"); // 1
    Leg_109_set.insert("LegCouponPaymentDate_t_1143041742");
    Leg_109.add_attribute("Issued", "LegIssueDate_t_1606384822"); // 1
    Leg_109_set.insert("LegIssueDate_t_1606384822");
    Leg_109.add_attribute("RepoCollSecTyp", "629754026"); // 1
    Leg_109_set.insert("629754026");
    Leg_109.add_attribute("RepoTrm", "1481369706"); // 1
    Leg_109_set.insert("1481369706");
    Leg_109.add_attribute("RepoRt", "5490968.740000"); // 1
    Leg_109_set.insert("5490968.740000");
    Leg_109.add_attribute("Fctr", "20370615.740000"); // 1
    Leg_109_set.insert("20370615.740000");
    Leg_109.add_attribute("CrdRtg", "LegCreditRating_t_105804611"); // 1
    Leg_109_set.insert("LegCreditRating_t_105804611");
    Leg_109.add_attribute("Rgstry", "LegInstrRegistry_t_299070488"); // 1
    Leg_109_set.insert("LegInstrRegistry_t_299070488");
    Leg_109.add_attribute("Ctry", "1546115286"); // 1
    Leg_109_set.insert("1546115286");
    Leg_109.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_475052938"); // 1
    Leg_109_set.insert("LegStateOrProvinceOfIssue_t_475052938");
    Leg_109.add_attribute("Lcl", "LegLocaleOfIssue_t_1663003446"); // 1
    Leg_109_set.insert("LegLocaleOfIssue_t_1663003446");
    Leg_109.add_attribute("Redeem", "LegRedemptionDate_t_785277024"); // 1
    Leg_109_set.insert("LegRedemptionDate_t_785277024");
    Leg_109.add_attribute("Strk", "18863022.090000"); // 1
    Leg_109_set.insert("18863022.090000");
    Leg_109.add_attribute("StrkCcy", "GBP"); // 1
    Leg_109_set.insert("GBP");
    Leg_109.add_attribute("OptA", "412099172"); // 1
    Leg_109_set.insert("412099172");
    Leg_109.add_attribute("Cmult", "3590104.970000"); // 1
    Leg_109_set.insert("3590104.970000");
    Leg_109.add_attribute("MultTyp", "2"); // 1
    Leg_109_set.insert("2");
    Leg_109.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_109_set.insert("1");
    Leg_109.add_attribute("UOM", "Bbl"); // 1
    Leg_109_set.insert("Bbl");
    Leg_109.add_attribute("UOMQty", "717288.750000"); // 1
    Leg_109_set.insert("717288.750000");
    Leg_109.add_attribute("PxUOM", "Alw"); // 1
    Leg_109_set.insert("Alw");
    Leg_109.add_attribute("PxUOMQty", "9918487.330000"); // 1
    Leg_109_set.insert("9918487.330000");
    Leg_109.add_attribute("TmUnit", "D"); // 1
    Leg_109_set.insert("D");
    Leg_109.add_attribute("ExerStyle", "2"); // 1
    Leg_109_set.insert("2");
    Leg_109.add_attribute("CpnRt", "4141777.230000"); // 1
    Leg_109_set.insert("4141777.230000");
    Leg_109.add_attribute("Exch", "LegSecurityExchange_t_764473565"); // 1
    Leg_109_set.insert("LegSecurityExchange_t_764473565");
    Leg_109.add_attribute("Issr", "LegIssuer_t_1297346342"); // 1
    Leg_109_set.insert("LegIssuer_t_1297346342");
    Leg_109.add_attribute("EncLegIssrLen", "1911420052"); // 1
    Leg_109_set.insert("1911420052");
    Leg_109.add_attribute("EncLegIssr", "EncodedLegIssuer_t_131402800"); // 1
    Leg_109_set.insert("EncodedLegIssuer_t_131402800");
    Leg_109.add_attribute("Desc", "LegSecurityDesc_t_475740256"); // 1
    Leg_109_set.insert("LegSecurityDesc_t_475740256");
    Leg_109.add_attribute("EncLegSecDescLen", "906978146"); // 1
    Leg_109_set.insert("906978146");
    Leg_109.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1737787622"); // 1
    Leg_109_set.insert("EncodedLegSecurityDesc_t_1737787622");
    Leg_109.add_attribute("RatioQty", "11054942.830000"); // 1
    Leg_109_set.insert("11054942.830000");
    Leg_109.add_attribute("Side", "E"); // 1
    Leg_109_set.insert("E");
    Leg_109.add_attribute("Ccy", "EUR"); // 1
    Leg_109_set.insert("EUR");
    Leg_109.add_attribute("Pool", "LegPool_t_346668816"); // 1
    Leg_109_set.insert("LegPool_t_346668816");
    Leg_109.add_attribute("Dated", "LegDatedDate_t_438471336"); // 1
    Leg_109_set.insert("LegDatedDate_t_438471336");
    Leg_109.add_attribute("CSetMo", "393703848"); // 1
    Leg_109_set.insert("393703848");
    Leg_109.add_attribute("IntAcrl", "LegInterestAccrualDate_t_821721754"); // 1
    Leg_109_set.insert("LegInterestAccrualDate_t_821721754");
    Leg_109.add_attribute("PutCall", "2101474783"); // 1
    Leg_109_set.insert("2101474783");
    Leg_109.add_attribute("LegOptionRatio", "11789808.720000"); // 1
    Leg_109_set.insert("11789808.720000");
    Leg_109.add_attribute("Px", "5605403.150000"); // 1
    Leg_109_set.insert("5605403.150000");
    all_values.push_back(Leg_109_set);
    all_compo_names.insert("Leg_109_set");

    {
      xml_element LegAID_104{"LegAID"};
      multiset<string> LegAID_104_set;
      LegAID_104.add_attribute("SecAltID", "LegSecurityAltID_t_1695804317"); // 2
      LegAID_104_set.insert("LegSecurityAltID_t_1695804317");
      LegAID_104.add_attribute("SecAltIDSrc", "9"); // 2
      LegAID_104_set.insert("9");
      all_values.push_back(LegAID_104_set);
      all_compo_names.insert("LegAID_104_set");

      Leg_109.add_element(LegAID_104);
    }
    elt.add_element(Leg_109);
  } // end Leg
  { // TrdCapDt
    xml_element TrdCapDt_0{"TrdCapDt"};
    multiset<string> TrdCapDt_0_set;
    TrdCapDt_0.add_attribute("TrdDt", "TradeDate_t_2054814815"); // 1
    TrdCapDt_0_set.insert("TradeDate_t_2054814815");
    TrdCapDt_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_1707427472"); // 1
    TrdCapDt_0_set.insert("LastUpdateTime_t_1707427472");
    TrdCapDt_0.add_attribute("TxnTm", "TransactTime_t_2016718013"); // 1
    TrdCapDt_0_set.insert("TransactTime_t_2016718013");
    all_values.push_back(TrdCapDt_0_set);
    all_compo_names.insert("TrdCapDt_0_set");

    elt.add_element(TrdCapDt_0);
  } // end TrdCapDt
  { // TrdCapDt
    xml_element TrdCapDt_1{"TrdCapDt"};
    multiset<string> TrdCapDt_1_set;
    TrdCapDt_1.add_attribute("TrdDt", "TradeDate_t_937885161"); // 1
    TrdCapDt_1_set.insert("TradeDate_t_937885161");
    TrdCapDt_1.add_attribute("LastUpdateTm", "LastUpdateTime_t_1779156348"); // 1
    TrdCapDt_1_set.insert("LastUpdateTime_t_1779156348");
    TrdCapDt_1.add_attribute("TxnTm", "TransactTime_t_1588810054"); // 1
    TrdCapDt_1_set.insert("TransactTime_t_1588810054");
    all_values.push_back(TrdCapDt_1_set);
    all_compo_names.insert("TrdCapDt_1_set");

    elt.add_element(TrdCapDt_1);
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
