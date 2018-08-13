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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequest_message_t_0;
  elt.add_attribute("ReqID", "TradeRequestID_t_1883248189"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeRequestID_t_1883248189");
  elt.add_attribute("TrdID", "TradeID_t_2017745987"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeID_t_2017745987");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1742885204"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryTradeID_t_1742885204");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1829648687"); // 0
  TradeCaptureReportRequest_message_t_0.insert("FirmTradeID_t_1829648687");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1951808059"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryFirmTradeID_t_1951808059");
  elt.add_attribute("ReqTyp", "3"); // 0
  TradeCaptureReportRequest_message_t_0.insert("3");
  elt.add_attribute("SubReqTyp", "2"); // 0
  TradeCaptureReportRequest_message_t_0.insert("2");
  elt.add_attribute("RptID", "TradeReportID_t_902342076"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeReportID_t_902342076");
  elt.add_attribute("RptID2", "SecondaryTradeReportID_t_927969394"); // 0
  TradeCaptureReportRequest_message_t_0.insert("SecondaryTradeReportID_t_927969394");
  elt.add_attribute("ExecID", "ExecID_t_1147417972"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ExecID_t_1147417972");
  elt.add_attribute("ExecTyp", "E"); // 0
  TradeCaptureReportRequest_message_t_0.insert("E");
  elt.add_attribute("OrdID", "OrderID_t_724856744"); // 0
  TradeCaptureReportRequest_message_t_0.insert("OrderID_t_724856744");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1400721487"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ClOrdID_t_1400721487");
  elt.add_attribute("MtchStat", "1"); // 0
  TradeCaptureReportRequest_message_t_0.insert("1");
  elt.add_attribute("TrdTyp", "51"); // 0
  TradeCaptureReportRequest_message_t_0.insert("51");
  elt.add_attribute("TrdSubTyp", "17"); // 0
  TradeCaptureReportRequest_message_t_0.insert("17");
  elt.add_attribute("TrdHandlInst", "5"); // 0
  TradeCaptureReportRequest_message_t_0.insert("5");
  elt.add_attribute("TrnsfrRsn", "TransferReason_t_1991555229"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TransferReason_t_1991555229");
  elt.add_attribute("TrdTyp2", "24"); // 0
  TradeCaptureReportRequest_message_t_0.insert("24");
  elt.add_attribute("LinkID", "TradeLinkID_t_1285271492"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeLinkID_t_1285271492");
  elt.add_attribute("MtchID", "TrdMatchID_t_1639861135"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TrdMatchID_t_1639861135");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1722251247"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ClearingBusinessDate_t_1722251247");
  elt.add_attribute("SesID", "3"); // 0
  TradeCaptureReportRequest_message_t_0.insert("3");
  elt.add_attribute("SesSub", "3"); // 0
  TradeCaptureReportRequest_message_t_0.insert("3");
  elt.add_attribute("TmBkt", "TimeBracket_t_989742563"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TimeBracket_t_989742563");
  elt.add_attribute("Side", "2"); // 0
  TradeCaptureReportRequest_message_t_0.insert("2");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  TradeCaptureReportRequest_message_t_0.insert("3");
  elt.add_attribute("InptSrc", "TradeInputSource_t_572184752"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeInputSource_t_572184752");
  elt.add_attribute("InptDev", "TradeInputDevice_t_228488499"); // 0
  TradeCaptureReportRequest_message_t_0.insert("TradeInputDevice_t_228488499");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  TradeCaptureReportRequest_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_1772529787"); // 0
  TradeCaptureReportRequest_message_t_0.insert("ResponseDestination_t_1772529787");
  elt.add_attribute("Txt", "Text_t_2111736688"); // 0
  TradeCaptureReportRequest_message_t_0.insert("Text_t_2111736688");
  elt.add_attribute("EncTxtLen", "746392554"); // 0
  TradeCaptureReportRequest_message_t_0.insert("746392554");
  elt.add_attribute("EncTxt", "EncodedText_t_1367931343"); // 0
  TradeCaptureReportRequest_message_t_0.insert("EncodedText_t_1367931343");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1793901727"); // 0
  TradeCaptureReportRequest_message_t_0.insert("MessageEventSource_t_1793901727");
  all_values.push_back(TradeCaptureReportRequest_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequest_message_t");

  { // Hdr
    xml_element Hdr_98{"Hdr"};
    multiset<string> Hdr_98_set;
    Hdr_98.add_attribute("SeqNum", "550716965"); // 1
    Hdr_98_set.insert("550716965");
    Hdr_98.add_attribute("SID", "SenderCompID_t_2015756312"); // 1
    Hdr_98_set.insert("SenderCompID_t_2015756312");
    Hdr_98.add_attribute("TID", "TargetCompID_t_568864184"); // 1
    Hdr_98_set.insert("TargetCompID_t_568864184");
    Hdr_98.add_attribute("OBID", "OnBehalfOfCompID_t_1453059041"); // 1
    Hdr_98_set.insert("OnBehalfOfCompID_t_1453059041");
    Hdr_98.add_attribute("D2ID", "DeliverToCompID_t_796242058"); // 1
    Hdr_98_set.insert("DeliverToCompID_t_796242058");
    Hdr_98.add_attribute("SSub", "SenderSubID_t_1716282156"); // 1
    Hdr_98_set.insert("SenderSubID_t_1716282156");
    Hdr_98.add_attribute("SLoc", "SenderLocationID_t_1101248365"); // 1
    Hdr_98_set.insert("SenderLocationID_t_1101248365");
    Hdr_98.add_attribute("TSub", "TargetSubID_t_1521098803"); // 1
    Hdr_98_set.insert("TargetSubID_t_1521098803");
    Hdr_98.add_attribute("TLoc", "TargetLocationID_t_969519995"); // 1
    Hdr_98_set.insert("TargetLocationID_t_969519995");
    Hdr_98.add_attribute("OBSub", "OnBehalfOfSubID_t_162872709"); // 1
    Hdr_98_set.insert("OnBehalfOfSubID_t_162872709");
    Hdr_98.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1670608378"); // 1
    Hdr_98_set.insert("OnBehalfOfLocationID_t_1670608378");
    Hdr_98.add_attribute("D2Sub", "DeliverToSubID_t_784131783"); // 1
    Hdr_98_set.insert("DeliverToSubID_t_784131783");
    Hdr_98.add_attribute("D2Loc", "DeliverToLocationID_t_1152333248"); // 1
    Hdr_98_set.insert("DeliverToLocationID_t_1152333248");
    Hdr_98.add_attribute("PosDup", "N"); // 1
    Hdr_98_set.insert("N");
    Hdr_98.add_attribute("PosRsnd", "N"); // 1
    Hdr_98_set.insert("N");
    Hdr_98.add_attribute("Snt", "SendingTime_t_290121092"); // 1
    Hdr_98_set.insert("SendingTime_t_290121092");
    Hdr_98.add_attribute("OrigSnt", "OrigSendingTime_t_1007057447"); // 1
    Hdr_98_set.insert("OrigSendingTime_t_1007057447");
    Hdr_98.add_attribute("MsgEncd", "MessageEncoding_t_1384521916"); // 1
    Hdr_98_set.insert("MessageEncoding_t_1384521916");
    all_values.push_back(Hdr_98_set);
    all_compo_names.insert("Hdr_98_set");

    {
      xml_element Hop_98{"Hop"};
      multiset<string> Hop_98_set;
      Hop_98.add_attribute("ID", "HopCompID_t_1973779127"); // 2
      Hop_98_set.insert("HopCompID_t_1973779127");
      Hop_98.add_attribute("Ref", "1307449814"); // 2
      Hop_98_set.insert("1307449814");
      Hop_98.add_attribute("Snt", "HopSendingTime_t_226780831"); // 2
      Hop_98_set.insert("HopSendingTime_t_226780831");
      all_values.push_back(Hop_98_set);
      all_compo_names.insert("Hop_98_set");

      Hdr_98.add_element(Hop_98);
    }
    elt.add_element(Hdr_98);
  } // end Hdr
  { // Pty
    xml_element Pty_454{"Pty"};
    multiset<string> Pty_454_set;
    Pty_454.add_attribute("ID", "PartyID_t_1145767238"); // 1
    Pty_454_set.insert("PartyID_t_1145767238");
    Pty_454.add_attribute("Src", "G"); // 1
    Pty_454_set.insert("G");
    Pty_454.add_attribute("R", "81"); // 1
    Pty_454_set.insert("81");
    all_values.push_back(Pty_454_set);
    all_compo_names.insert("Pty_454_set");

    {
      xml_element Sub_454{"Sub"};
      multiset<string> Sub_454_set;
      Sub_454.add_attribute("ID", "PartySubID_t_2021897453"); // 2
      Sub_454_set.insert("PartySubID_t_2021897453");
      Sub_454.add_attribute("Typ", "11"); // 2
      Sub_454_set.insert("11");
      all_values.push_back(Sub_454_set);
      all_compo_names.insert("Sub_454_set");

      Pty_454.add_element(Sub_454);
    }
    elt.add_element(Pty_454);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_93{"Instrmt"};
    multiset<string> Instrmt_93_set;
    Instrmt_93.add_attribute("Sym", "Symbol_t_113056683"); // 1
    Instrmt_93_set.insert("Symbol_t_113056683");
    Instrmt_93.add_attribute("Sfx", "WI"); // 1
    Instrmt_93_set.insert("WI");
    Instrmt_93.add_attribute("ID", "SecurityID_t_1791943066"); // 1
    Instrmt_93_set.insert("SecurityID_t_1791943066");
    Instrmt_93.add_attribute("Src", "I"); // 1
    Instrmt_93_set.insert("I");
    Instrmt_93.add_attribute("Prod", "7"); // 1
    Instrmt_93_set.insert("7");
    Instrmt_93.add_attribute("ProdCmplx", "ProductComplex_t_1660215730"); // 1
    Instrmt_93_set.insert("ProductComplex_t_1660215730");
    Instrmt_93.add_attribute("SecGrp", "SecurityGroup_t_328338947"); // 1
    Instrmt_93_set.insert("SecurityGroup_t_328338947");
    Instrmt_93.add_attribute("CFI", "CFICode_t_477098717"); // 1
    Instrmt_93_set.insert("CFICode_t_477098717");
    Instrmt_93.add_attribute("SecTyp", "FRN"); // 1
    Instrmt_93_set.insert("FRN");
    Instrmt_93.add_attribute("SubTyp", "SecuritySubType_t_2044621103"); // 1
    Instrmt_93_set.insert("SecuritySubType_t_2044621103");
    Instrmt_93.add_attribute("MMY", "1578347082"); // 1
    Instrmt_93_set.insert("1578347082");
    Instrmt_93.add_attribute("MatDt", "MaturityDate_t_1830072943"); // 1
    Instrmt_93_set.insert("MaturityDate_t_1830072943");
    Instrmt_93.add_attribute("MatTm", "866657451"); // 1
    Instrmt_93_set.insert("866657451");
    Instrmt_93.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1741219792"); // 1
    Instrmt_93_set.insert("SettleOnOpenFlag_t_1741219792");
    Instrmt_93.add_attribute("AsgnMeth", "1353197674"); // 1
    Instrmt_93_set.insert("1353197674");
    Instrmt_93.add_attribute("Status", "1"); // 1
    Instrmt_93_set.insert("1");
    Instrmt_93.add_attribute("CpnPmt", "CouponPaymentDate_t_746069392"); // 1
    Instrmt_93_set.insert("CouponPaymentDate_t_746069392");
    Instrmt_93.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_93_set.insert("MM");
    Instrmt_93.add_attribute("Snrty", "SD"); // 1
    Instrmt_93_set.insert("SD");
    Instrmt_93.add_attribute("NotlPctOut", "10361904.850000"); // 1
    Instrmt_93_set.insert("10361904.850000");
    Instrmt_93.add_attribute("OrigNotlPctOut", "17274514.330000"); // 1
    Instrmt_93_set.insert("17274514.330000");
    Instrmt_93.add_attribute("AttchPnt", "5500981.700000"); // 1
    Instrmt_93_set.insert("5500981.700000");
    Instrmt_93.add_attribute("DetchPnt", "8624859.640000"); // 1
    Instrmt_93_set.insert("8624859.640000");
    Instrmt_93.add_attribute("Issued", "IssueDate_t_887417600"); // 1
    Instrmt_93_set.insert("IssueDate_t_887417600");
    Instrmt_93.add_attribute("RepoCollSecTyp", "776879001"); // 1
    Instrmt_93_set.insert("776879001");
    Instrmt_93.add_attribute("RepoTrm", "782801108"); // 1
    Instrmt_93_set.insert("782801108");
    Instrmt_93.add_attribute("RepoRt", "20331848.380000"); // 1
    Instrmt_93_set.insert("20331848.380000");
    Instrmt_93.add_attribute("Fctr", "15758445.840000"); // 1
    Instrmt_93_set.insert("15758445.840000");
    Instrmt_93.add_attribute("CrdRtg", "CreditRating_t_931604752"); // 1
    Instrmt_93_set.insert("CreditRating_t_931604752");
    Instrmt_93.add_attribute("Rgstry", "InstrRegistry_t_1907598643"); // 1
    Instrmt_93_set.insert("InstrRegistry_t_1907598643");
    Instrmt_93.add_attribute("IssuCtry", "1999856307"); // 1
    Instrmt_93_set.insert("1999856307");
    Instrmt_93.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1044661435"); // 1
    Instrmt_93_set.insert("StateOrProvinceOfIssue_t_1044661435");
    Instrmt_93.add_attribute("Lcl", "LocaleOfIssue_t_380921354"); // 1
    Instrmt_93_set.insert("LocaleOfIssue_t_380921354");
    Instrmt_93.add_attribute("Redeem", "RedemptionDate_t_1644315725"); // 1
    Instrmt_93_set.insert("RedemptionDate_t_1644315725");
    Instrmt_93.add_attribute("StrkPx", "8041361.980000"); // 1
    Instrmt_93_set.insert("8041361.980000");
    Instrmt_93.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_93_set.insert("EUR");
    Instrmt_93.add_attribute("StrkMult", "11324751.450000"); // 1
    Instrmt_93_set.insert("11324751.450000");
    Instrmt_93.add_attribute("StrkValu", "20295433.950000"); // 1
    Instrmt_93_set.insert("20295433.950000");
    Instrmt_93.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_93_set.insert("4");
    Instrmt_93.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_93_set.insert("2");
    Instrmt_93.add_attribute("StrkPxBndryPrcsn", "14604068.300000"); // 1
    Instrmt_93_set.insert("14604068.300000");
    Instrmt_93.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_93_set.insert("4");
    Instrmt_93.add_attribute("OptAt", "1896270052"); // 1
    Instrmt_93_set.insert("1896270052");
    Instrmt_93.add_attribute("Mult", "10541429.740000"); // 1
    Instrmt_93_set.insert("10541429.740000");
    Instrmt_93.add_attribute("MultTyp", "0"); // 1
    Instrmt_93_set.insert("0");
    Instrmt_93.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_93_set.insert("3");
    Instrmt_93.add_attribute("MinPxIncr", "18002123.660000"); // 1
    Instrmt_93_set.insert("18002123.660000");
    Instrmt_93.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1074719255"); // 1
    Instrmt_93_set.insert("MinPriceIncrementAmount_t_1074719255");
    Instrmt_93.add_attribute("UOM", "MMbbl"); // 1
    Instrmt_93_set.insert("MMbbl");
    Instrmt_93.add_attribute("UOMQty", "6889192.030000"); // 1
    Instrmt_93_set.insert("6889192.030000");
    Instrmt_93.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_93_set.insert("lbs");
    Instrmt_93.add_attribute("PxUOMQty", "11152500.630000"); // 1
    Instrmt_93_set.insert("11152500.630000");
    Instrmt_93.add_attribute("SettlMeth", "P"); // 1
    Instrmt_93_set.insert("P");
    Instrmt_93.add_attribute("ExerStyle", "0"); // 1
    Instrmt_93_set.insert("0");
    Instrmt_93.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_93_set.insert("1");
    Instrmt_93.add_attribute("OptPayAmt", "OptPayoutAmount_t_186722628"); // 1
    Instrmt_93_set.insert("OptPayoutAmount_t_186722628");
    Instrmt_93.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_93_set.insert("PCTPAR");
    Instrmt_93.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_93_set.insert("FUT");
    Instrmt_93.add_attribute("ListMeth", "0"); // 1
    Instrmt_93_set.insert("0");
    Instrmt_93.add_attribute("CapPx", "11879208.260000"); // 1
    Instrmt_93_set.insert("11879208.260000");
    Instrmt_93.add_attribute("FlrPx", "11728626.600000"); // 1
    Instrmt_93_set.insert("11728626.600000");
    Instrmt_93.add_attribute("PutCall", "1"); // 1
    Instrmt_93_set.insert("1");
    Instrmt_93.add_attribute("FlexInd", "false"); // 1
    Instrmt_93_set.insert("false");
    Instrmt_93.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_93_set.insert("false");
    Instrmt_93.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_93_set.insert("Mo");
    Instrmt_93.add_attribute("CpnRt", "9738032.110000"); // 1
    Instrmt_93_set.insert("9738032.110000");
    Instrmt_93.add_attribute("Exch", "SecurityExchange_t_1826742544"); // 1
    Instrmt_93_set.insert("SecurityExchange_t_1826742544");
    Instrmt_93.add_attribute("PosLmt", "1952116511"); // 1
    Instrmt_93_set.insert("1952116511");
    Instrmt_93.add_attribute("NTPosLmt", "855862959"); // 1
    Instrmt_93_set.insert("855862959");
    Instrmt_93.add_attribute("Issr", "Issuer_t_1145280843"); // 1
    Instrmt_93_set.insert("Issuer_t_1145280843");
    Instrmt_93.add_attribute("EncIssrLen", "834245464"); // 1
    Instrmt_93_set.insert("834245464");
    Instrmt_93.add_attribute("EncIssr", "EncodedIssuer_t_168786141"); // 1
    Instrmt_93_set.insert("EncodedIssuer_t_168786141");
    Instrmt_93.add_attribute("Desc", "SecurityDesc_t_146408438"); // 1
    Instrmt_93_set.insert("SecurityDesc_t_146408438");
    Instrmt_93.add_attribute("EncSecDescLen", "583031868"); // 1
    Instrmt_93_set.insert("583031868");
    Instrmt_93.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1222929115"); // 1
    Instrmt_93_set.insert("EncodedSecurityDesc_t_1222929115");
    Instrmt_93.add_attribute("Pool", "Pool_t_500733707"); // 1
    Instrmt_93_set.insert("Pool_t_500733707");
    Instrmt_93.add_attribute("CSetMo", "1982607506"); // 1
    Instrmt_93_set.insert("1982607506");
    Instrmt_93.add_attribute("CPPgm", "2"); // 1
    Instrmt_93_set.insert("2");
    Instrmt_93.add_attribute("CPRegT", "CPRegType_t_1575452962"); // 1
    Instrmt_93_set.insert("CPRegType_t_1575452962");
    Instrmt_93.add_attribute("Dated", "DatedDate_t_400275751"); // 1
    Instrmt_93_set.insert("DatedDate_t_400275751");
    Instrmt_93.add_attribute("IntAcrl", "InterestAccrualDate_t_1564577037"); // 1
    Instrmt_93_set.insert("InterestAccrualDate_t_1564577037");
    all_values.push_back(Instrmt_93_set);
    all_compo_names.insert("Instrmt_93_set");

    {
      xml_element AID_96{"AID"};
      multiset<string> AID_96_set;
      AID_96.add_attribute("AltID", "SecurityAltID_t_82656355"); // 2
      AID_96_set.insert("SecurityAltID_t_82656355");
      AID_96.add_attribute("AltIDSrc", "1"); // 2
      AID_96_set.insert("1");
      all_values.push_back(AID_96_set);
      all_compo_names.insert("AID_96_set");

      Instrmt_93.add_element(AID_96);
    }
    {
      xml_element SecXML_91{"SecXML"};
      multiset<string> SecXML_91_set;
      SecXML_91.add_attribute("Schema", "SecurityXMLSchema_t_968498556"); // 2
      SecXML_91_set.insert("SecurityXMLSchema_t_968498556");
      all_values.push_back(SecXML_91_set);
      all_compo_names.insert("SecXML_91_set");

      Instrmt_93.add_element(SecXML_91);
    }
    {
      xml_element Evnt_91{"Evnt"};
      multiset<string> Evnt_91_set;
      Evnt_91.add_attribute("EventTyp", "15"); // 2
      Evnt_91_set.insert("15");
      Evnt_91.add_attribute("Dt", "EventDate_t_1260171230"); // 2
      Evnt_91_set.insert("EventDate_t_1260171230");
      Evnt_91.add_attribute("Tm", "EventTime_t_1155221184"); // 2
      Evnt_91_set.insert("EventTime_t_1155221184");
      Evnt_91.add_attribute("Px", "9050831.780000"); // 2
      Evnt_91_set.insert("9050831.780000");
      Evnt_91.add_attribute("Txt", "EventText_t_433177583"); // 2
      Evnt_91_set.insert("EventText_t_433177583");
      all_values.push_back(Evnt_91_set);
      all_compo_names.insert("Evnt_91_set");

      Instrmt_93.add_element(Evnt_91);
    }
    {
      xml_element Pty_455{"Pty"};
      multiset<string> Pty_455_set;
      Pty_455.add_attribute("ID", "InstrumentPartyID_t_126064916"); // 2
      Pty_455_set.insert("InstrumentPartyID_t_126064916");
      Pty_455.add_attribute("Src", "6"); // 2
      Pty_455_set.insert("6");
      Pty_455.add_attribute("R", "61"); // 2
      Pty_455_set.insert("61");
      all_values.push_back(Pty_455_set);
      all_compo_names.insert("Pty_455_set");

      {
        xml_element Sub_455{"Sub"};
        multiset<string> Sub_455_set;
        Sub_455.add_attribute("ID", "InstrumentPartySubID_t_141570084"); // 3
        Sub_455_set.insert("InstrumentPartySubID_t_141570084");
        Sub_455.add_attribute("Typ", "30"); // 3
        Sub_455_set.insert("30");
        all_values.push_back(Sub_455_set);
        all_compo_names.insert("Sub_455_set");

        Pty_455.add_element(Sub_455);
      }
      Instrmt_93.add_element(Pty_455);
    }
    {
      xml_element CmplxEvnt_88{"CmplxEvnt"};
      multiset<string> CmplxEvnt_88_set;
      CmplxEvnt_88.add_attribute("Typ", "1"); // 2
      CmplxEvnt_88_set.insert("1");
      CmplxEvnt_88.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_961211450"); // 2
      CmplxEvnt_88_set.insert("ComplexOptPayoutAmount_t_961211450");
      CmplxEvnt_88.add_attribute("Px", "3406821.010000"); // 2
      CmplxEvnt_88_set.insert("3406821.010000");
      CmplxEvnt_88.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_88_set.insert("2");
      CmplxEvnt_88.add_attribute("PxBndryPrcsn", "7658443.130000"); // 2
      CmplxEvnt_88_set.insert("7658443.130000");
      CmplxEvnt_88.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_88_set.insert("2");
      CmplxEvnt_88.add_attribute("Cond", "1"); // 2
      CmplxEvnt_88_set.insert("1");
      all_values.push_back(CmplxEvnt_88_set);
      all_compo_names.insert("CmplxEvnt_88_set");

      {
        xml_element EvntDts_88{"EvntDts"};
        multiset<string> EvntDts_88_set;
        EvntDts_88.add_attribute("StartDt", "ComplexEventStartDate_t_1600089778"); // 3
        EvntDts_88_set.insert("ComplexEventStartDate_t_1600089778");
        EvntDts_88.add_attribute("EndDt", "ComplexEventEndDate_t_1365331201"); // 3
        EvntDts_88_set.insert("ComplexEventEndDate_t_1365331201");
        all_values.push_back(EvntDts_88_set);
        all_compo_names.insert("EvntDts_88_set");

        {
          xml_element EvntTms_88{"EvntTms"};
          multiset<string> EvntTms_88_set;
          EvntTms_88.add_attribute("StartTm", "1099199510"); // 4
          EvntTms_88_set.insert("1099199510");
          EvntTms_88.add_attribute("EndTm", "35637998"); // 4
          EvntTms_88_set.insert("35637998");
          all_values.push_back(EvntTms_88_set);
          all_compo_names.insert("EvntTms_88_set");

          EvntDts_88.add_element(EvntTms_88);
        }
        CmplxEvnt_88.add_element(EvntDts_88);
      }
      Instrmt_93.add_element(CmplxEvnt_88);
    }
    elt.add_element(Instrmt_93);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_17{"InstrmtExt"};
    multiset<string> InstrmtExt_17_set;
    InstrmtExt_17.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_17_set.insert("1");
    InstrmtExt_17.add_attribute("PctAtRisk", "15999332.180000"); // 1
    InstrmtExt_17_set.insert("15999332.180000");
    all_values.push_back(InstrmtExt_17_set);
    all_compo_names.insert("InstrmtExt_17_set");

    {
      xml_element Attrb_28{"Attrb"};
      multiset<string> Attrb_28_set;
      Attrb_28.add_attribute("Typ", "14"); // 2
      Attrb_28_set.insert("14");
      Attrb_28.add_attribute("Val", "InstrAttribValue_t_1316434502"); // 2
      Attrb_28_set.insert("InstrAttribValue_t_1316434502");
      all_values.push_back(Attrb_28_set);
      all_compo_names.insert("Attrb_28_set");

      InstrmtExt_17.add_element(Attrb_28);
    }
    elt.add_element(InstrmtExt_17);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_31{"FinDetls"};
    multiset<string> FinDetls_31_set;
    FinDetls_31.add_attribute("AgmtDesc", "AgreementDesc_t_1027902532"); // 1
    FinDetls_31_set.insert("AgreementDesc_t_1027902532");
    FinDetls_31.add_attribute("AgmtID", "AgreementID_t_271037608"); // 1
    FinDetls_31_set.insert("AgreementID_t_271037608");
    FinDetls_31.add_attribute("AgmtDt", "AgreementDate_t_733527891"); // 1
    FinDetls_31_set.insert("AgreementDate_t_733527891");
    FinDetls_31.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_31_set.insert("GBP");
    FinDetls_31.add_attribute("TrmTyp", "4"); // 1
    FinDetls_31_set.insert("4");
    FinDetls_31.add_attribute("StartDt", "StartDate_t_587836235"); // 1
    FinDetls_31_set.insert("StartDate_t_587836235");
    FinDetls_31.add_attribute("EndDt", "EndDate_t_899251004"); // 1
    FinDetls_31_set.insert("EndDate_t_899251004");
    FinDetls_31.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_31_set.insert("0");
    FinDetls_31.add_attribute("MgnRatio", "14929194.130000"); // 1
    FinDetls_31_set.insert("14929194.130000");
    all_values.push_back(FinDetls_31_set);
    all_compo_names.insert("FinDetls_31_set");

    elt.add_element(FinDetls_31);
  } // end FinDetls
  { // Undly
    xml_element Undly_125{"Undly"};
    multiset<string> Undly_125_set;
    Undly_125.add_attribute("Sym", "UnderlyingSymbol_t_835828900"); // 1
    Undly_125_set.insert("UnderlyingSymbol_t_835828900");
    Undly_125.add_attribute("Sfx", "CD"); // 1
    Undly_125_set.insert("CD");
    Undly_125.add_attribute("ID", "UnderlyingSecurityID_t_790985183"); // 1
    Undly_125_set.insert("UnderlyingSecurityID_t_790985183");
    Undly_125.add_attribute("Src", "D"); // 1
    Undly_125_set.insert("D");
    Undly_125.add_attribute("Prod", "12"); // 1
    Undly_125_set.insert("12");
    Undly_125.add_attribute("CFI", "UnderlyingCFICode_t_919236516"); // 1
    Undly_125_set.insert("UnderlyingCFICode_t_919236516");
    Undly_125.add_attribute("SecTyp", "FXFWD"); // 1
    Undly_125_set.insert("FXFWD");
    Undly_125.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1146000762"); // 1
    Undly_125_set.insert("UnderlyingSecuritySubType_t_1146000762");
    Undly_125.add_attribute("MMY", "726746744"); // 1
    Undly_125_set.insert("726746744");
    Undly_125.add_attribute("Mat", "UnderlyingMaturityDate_t_556971100"); // 1
    Undly_125_set.insert("UnderlyingMaturityDate_t_556971100");
    Undly_125.add_attribute("MatTm", "195062174"); // 1
    Undly_125_set.insert("195062174");
    Undly_125.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1679537816"); // 1
    Undly_125_set.insert("UnderlyingCouponPaymentDate_t_1679537816");
    Undly_125.add_attribute("RestrctTyp", "MM"); // 1
    Undly_125_set.insert("MM");
    Undly_125.add_attribute("Snrty", "SR"); // 1
    Undly_125_set.insert("SR");
    Undly_125.add_attribute("NotlPctOut", "6312536.790000"); // 1
    Undly_125_set.insert("6312536.790000");
    Undly_125.add_attribute("OrigNotlPctOut", "452152.280000"); // 1
    Undly_125_set.insert("452152.280000");
    Undly_125.add_attribute("AttchPnt", "20011700.440000"); // 1
    Undly_125_set.insert("20011700.440000");
    Undly_125.add_attribute("DetchPnt", "837032.490000"); // 1
    Undly_125_set.insert("837032.490000");
    Undly_125.add_attribute("Issued", "UnderlyingIssueDate_t_2063460733"); // 1
    Undly_125_set.insert("UnderlyingIssueDate_t_2063460733");
    Undly_125.add_attribute("RepoCollSecTyp", "1170120898"); // 1
    Undly_125_set.insert("1170120898");
    Undly_125.add_attribute("RepoTrm", "1111605781"); // 1
    Undly_125_set.insert("1111605781");
    Undly_125.add_attribute("RepoRt", "1870146.930000"); // 1
    Undly_125_set.insert("1870146.930000");
    Undly_125.add_attribute("Fctr", "19036487.890000"); // 1
    Undly_125_set.insert("19036487.890000");
    Undly_125.add_attribute("CrdRtg", "UnderlyingCreditRating_t_74681021"); // 1
    Undly_125_set.insert("UnderlyingCreditRating_t_74681021");
    Undly_125.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1973578115"); // 1
    Undly_125_set.insert("UnderlyingInstrRegistry_t_1973578115");
    Undly_125.add_attribute("Ctry", "1458191589"); // 1
    Undly_125_set.insert("1458191589");
    Undly_125.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_662517256"); // 1
    Undly_125_set.insert("UnderlyingStateOrProvinceOfIssue_t_662517256");
    Undly_125.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_725345472"); // 1
    Undly_125_set.insert("UnderlyingLocaleOfIssue_t_725345472");
    Undly_125.add_attribute("Redeem", "UnderlyingRedemptionDate_t_20471925"); // 1
    Undly_125_set.insert("UnderlyingRedemptionDate_t_20471925");
    Undly_125.add_attribute("StrkPx", "79530.210000"); // 1
    Undly_125_set.insert("79530.210000");
    Undly_125.add_attribute("StrkCcy", "EUR"); // 1
    Undly_125_set.insert("EUR");
    Undly_125.add_attribute("OptA", "1446392792"); // 1
    Undly_125_set.insert("1446392792");
    Undly_125.add_attribute("Mult", "7012755.950000"); // 1
    Undly_125_set.insert("7012755.950000");
    Undly_125.add_attribute("MultTyp", "0"); // 1
    Undly_125_set.insert("0");
    Undly_125.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_125_set.insert("4");
    Undly_125.add_attribute("UOM", "Bcf"); // 1
    Undly_125_set.insert("Bcf");
    Undly_125.add_attribute("UOMQty", "16248265.960000"); // 1
    Undly_125_set.insert("16248265.960000");
    Undly_125.add_attribute("PxUOM", "Bbl"); // 1
    Undly_125_set.insert("Bbl");
    Undly_125.add_attribute("PxUOMQty", "1997752.080000"); // 1
    Undly_125_set.insert("1997752.080000");
    Undly_125.add_attribute("TmUnit", "Yr"); // 1
    Undly_125_set.insert("Yr");
    Undly_125.add_attribute("ExerStyle", "1"); // 1
    Undly_125_set.insert("1");
    Undly_125.add_attribute("CpnRt", "18793130.240000"); // 1
    Undly_125_set.insert("18793130.240000");
    Undly_125.add_attribute("Exch", "UnderlyingSecurityExchange_t_43891278"); // 1
    Undly_125_set.insert("UnderlyingSecurityExchange_t_43891278");
    Undly_125.add_attribute("Issr", "UnderlyingIssuer_t_858200469"); // 1
    Undly_125_set.insert("UnderlyingIssuer_t_858200469");
    Undly_125.add_attribute("EncUndIssrLen", "363083055"); // 1
    Undly_125_set.insert("363083055");
    Undly_125.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_89106507"); // 1
    Undly_125_set.insert("EncodedUnderlyingIssuer_t_89106507");
    Undly_125.add_attribute("Desc", "UnderlyingSecurityDesc_t_711886865"); // 1
    Undly_125_set.insert("UnderlyingSecurityDesc_t_711886865");
    Undly_125.add_attribute("EncUndSecDescLen", "446786304"); // 1
    Undly_125_set.insert("446786304");
    Undly_125.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_5083592"); // 1
    Undly_125_set.insert("EncodedUnderlyingSecurityDesc_t_5083592");
    Undly_125.add_attribute("CPPgm", "UnderlyingCPProgram_t_1882007764"); // 1
    Undly_125_set.insert("UnderlyingCPProgram_t_1882007764");
    Undly_125.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1558392086"); // 1
    Undly_125_set.insert("UnderlyingCPRegType_t_1558392086");
    Undly_125.add_attribute("AllocPct", "1920982.860000"); // 1
    Undly_125_set.insert("1920982.860000");
    Undly_125.add_attribute("Ccy", "EUR"); // 1
    Undly_125_set.insert("EUR");
    Undly_125.add_attribute("Qty", "181927.530000"); // 1
    Undly_125_set.insert("181927.530000");
    Undly_125.add_attribute("SettlTyp", "4"); // 1
    Undly_125_set.insert("4");
    Undly_125.add_attribute("CashAmt", "UnderlyingCashAmount_t_148106715"); // 1
    Undly_125_set.insert("UnderlyingCashAmount_t_148106715");
    Undly_125.add_attribute("CashTyp", "DIFF"); // 1
    Undly_125_set.insert("DIFF");
    Undly_125.add_attribute("Px", "9693527.710000"); // 1
    Undly_125_set.insert("9693527.710000");
    Undly_125.add_attribute("DirtPx", "1560597.360000"); // 1
    Undly_125_set.insert("1560597.360000");
    Undly_125.add_attribute("EndPx", "6538286.370000"); // 1
    Undly_125_set.insert("6538286.370000");
    Undly_125.add_attribute("StartVal", "UnderlyingStartValue_t_1825653597"); // 1
    Undly_125_set.insert("UnderlyingStartValue_t_1825653597");
    Undly_125.add_attribute("CurVal", "UnderlyingCurrentValue_t_1602452528"); // 1
    Undly_125_set.insert("UnderlyingCurrentValue_t_1602452528");
    Undly_125.add_attribute("EndVal", "UnderlyingEndValue_t_1355104233"); // 1
    Undly_125_set.insert("UnderlyingEndValue_t_1355104233");
    Undly_125.add_attribute("AdjQty", "15118697.590000"); // 1
    Undly_125_set.insert("15118697.590000");
    Undly_125.add_attribute("FxRate", "17066803.330000"); // 1
    Undly_125_set.insert("17066803.330000");
    Undly_125.add_attribute("FxRateCalc", "M"); // 1
    Undly_125_set.insert("M");
    Undly_125.add_attribute("CapValu", "UnderlyingCapValue_t_989212707"); // 1
    Undly_125_set.insert("UnderlyingCapValue_t_989212707");
    Undly_125.add_attribute("SetMeth", "UnderlyingSettlMethod_t_809425251"); // 1
    Undly_125_set.insert("UnderlyingSettlMethod_t_809425251");
    Undly_125.add_attribute("PutCall", "1027907904"); // 1
    Undly_125_set.insert("1027907904");
    all_values.push_back(Undly_125_set);
    all_compo_names.insert("Undly_125_set");

    {
      xml_element UndAID_125{"UndAID"};
      multiset<string> UndAID_125_set;
      UndAID_125.add_attribute("AltID", "UnderlyingSecurityAltID_t_1023526756"); // 2
      UndAID_125_set.insert("UnderlyingSecurityAltID_t_1023526756");
      UndAID_125.add_attribute("AltIDSrc", "B"); // 2
      UndAID_125_set.insert("B");
      all_values.push_back(UndAID_125_set);
      all_compo_names.insert("UndAID_125_set");

      Undly_125.add_element(UndAID_125);
    }
    {
      xml_element Stip_203{"Stip"};
      multiset<string> Stip_203_set;
      Stip_203.add_attribute("Typ", "AMT"); // 2
      Stip_203_set.insert("AMT");
      Stip_203.add_attribute("Val", "UnderlyingStipValue_t_1067418034"); // 2
      Stip_203_set.insert("UnderlyingStipValue_t_1067418034");
      all_values.push_back(Stip_203_set);
      all_compo_names.insert("Stip_203_set");

      Undly_125.add_element(Stip_203);
    }
    {
      xml_element Pty_456{"Pty"};
      multiset<string> Pty_456_set;
      Pty_456.add_attribute("ID", "UnderlyingInstrumentPartyID_t_965432813"); // 2
      Pty_456_set.insert("UnderlyingInstrumentPartyID_t_965432813");
      Pty_456.add_attribute("Src", "B"); // 2
      Pty_456_set.insert("B");
      Pty_456.add_attribute("R", "33"); // 2
      Pty_456_set.insert("33");
      all_values.push_back(Pty_456_set);
      all_compo_names.insert("Pty_456_set");

      {
        xml_element Sub_456{"Sub"};
        multiset<string> Sub_456_set;
        Sub_456.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1677319679"); // 3
        Sub_456_set.insert("UnderlyingInstrumentPartySubID_t_1677319679");
        Sub_456.add_attribute("Typ", "4"); // 3
        Sub_456_set.insert("4");
        all_values.push_back(Sub_456_set);
        all_compo_names.insert("Sub_456_set");

        Pty_456.add_element(Sub_456);
      }
      Undly_125.add_element(Pty_456);
    }
    elt.add_element(Undly_125);
  } // end Undly
  { // Undly
    xml_element Undly_126{"Undly"};
    multiset<string> Undly_126_set;
    Undly_126.add_attribute("Sym", "UnderlyingSymbol_t_1161608134"); // 1
    Undly_126_set.insert("UnderlyingSymbol_t_1161608134");
    Undly_126.add_attribute("Sfx", "WI"); // 1
    Undly_126_set.insert("WI");
    Undly_126.add_attribute("ID", "UnderlyingSecurityID_t_980515079"); // 1
    Undly_126_set.insert("UnderlyingSecurityID_t_980515079");
    Undly_126.add_attribute("Src", "1"); // 1
    Undly_126_set.insert("1");
    Undly_126.add_attribute("Prod", "2"); // 1
    Undly_126_set.insert("2");
    Undly_126.add_attribute("CFI", "UnderlyingCFICode_t_466104538"); // 1
    Undly_126_set.insert("UnderlyingCFICode_t_466104538");
    Undly_126.add_attribute("SecTyp", "DINP"); // 1
    Undly_126_set.insert("DINP");
    Undly_126.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1851413899"); // 1
    Undly_126_set.insert("UnderlyingSecuritySubType_t_1851413899");
    Undly_126.add_attribute("MMY", "614211253"); // 1
    Undly_126_set.insert("614211253");
    Undly_126.add_attribute("Mat", "UnderlyingMaturityDate_t_2115437399"); // 1
    Undly_126_set.insert("UnderlyingMaturityDate_t_2115437399");
    Undly_126.add_attribute("MatTm", "673283022"); // 1
    Undly_126_set.insert("673283022");
    Undly_126.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_770270989"); // 1
    Undly_126_set.insert("UnderlyingCouponPaymentDate_t_770270989");
    Undly_126.add_attribute("RestrctTyp", "FR"); // 1
    Undly_126_set.insert("FR");
    Undly_126.add_attribute("Snrty", "SR"); // 1
    Undly_126_set.insert("SR");
    Undly_126.add_attribute("NotlPctOut", "2252398.700000"); // 1
    Undly_126_set.insert("2252398.700000");
    Undly_126.add_attribute("OrigNotlPctOut", "19768866.210000"); // 1
    Undly_126_set.insert("19768866.210000");
    Undly_126.add_attribute("AttchPnt", "18633227.300000"); // 1
    Undly_126_set.insert("18633227.300000");
    Undly_126.add_attribute("DetchPnt", "19319202.030000"); // 1
    Undly_126_set.insert("19319202.030000");
    Undly_126.add_attribute("Issued", "UnderlyingIssueDate_t_657535670"); // 1
    Undly_126_set.insert("UnderlyingIssueDate_t_657535670");
    Undly_126.add_attribute("RepoCollSecTyp", "705051790"); // 1
    Undly_126_set.insert("705051790");
    Undly_126.add_attribute("RepoTrm", "593861806"); // 1
    Undly_126_set.insert("593861806");
    Undly_126.add_attribute("RepoRt", "16854435.740000"); // 1
    Undly_126_set.insert("16854435.740000");
    Undly_126.add_attribute("Fctr", "17285785.460000"); // 1
    Undly_126_set.insert("17285785.460000");
    Undly_126.add_attribute("CrdRtg", "UnderlyingCreditRating_t_701094151"); // 1
    Undly_126_set.insert("UnderlyingCreditRating_t_701094151");
    Undly_126.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_297697207"); // 1
    Undly_126_set.insert("UnderlyingInstrRegistry_t_297697207");
    Undly_126.add_attribute("Ctry", "648512932"); // 1
    Undly_126_set.insert("648512932");
    Undly_126.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1666526964"); // 1
    Undly_126_set.insert("UnderlyingStateOrProvinceOfIssue_t_1666526964");
    Undly_126.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1420517544"); // 1
    Undly_126_set.insert("UnderlyingLocaleOfIssue_t_1420517544");
    Undly_126.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1805037474"); // 1
    Undly_126_set.insert("UnderlyingRedemptionDate_t_1805037474");
    Undly_126.add_attribute("StrkPx", "11963629.950000"); // 1
    Undly_126_set.insert("11963629.950000");
    Undly_126.add_attribute("StrkCcy", "GBP"); // 1
    Undly_126_set.insert("GBP");
    Undly_126.add_attribute("OptA", "460723142"); // 1
    Undly_126_set.insert("460723142");
    Undly_126.add_attribute("Mult", "18231556.160000"); // 1
    Undly_126_set.insert("18231556.160000");
    Undly_126.add_attribute("MultTyp", "1"); // 1
    Undly_126_set.insert("1");
    Undly_126.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_126_set.insert("0");
    Undly_126.add_attribute("UOM", "MMBtu"); // 1
    Undly_126_set.insert("MMBtu");
    Undly_126.add_attribute("UOMQty", "13972839.050000"); // 1
    Undly_126_set.insert("13972839.050000");
    Undly_126.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_126_set.insert("MMBtu");
    Undly_126.add_attribute("PxUOMQty", "7559877.590000"); // 1
    Undly_126_set.insert("7559877.590000");
    Undly_126.add_attribute("TmUnit", "Yr"); // 1
    Undly_126_set.insert("Yr");
    Undly_126.add_attribute("ExerStyle", "1"); // 1
    Undly_126_set.insert("1");
    Undly_126.add_attribute("CpnRt", "15262587.480000"); // 1
    Undly_126_set.insert("15262587.480000");
    Undly_126.add_attribute("Exch", "UnderlyingSecurityExchange_t_1987020045"); // 1
    Undly_126_set.insert("UnderlyingSecurityExchange_t_1987020045");
    Undly_126.add_attribute("Issr", "UnderlyingIssuer_t_2091922440"); // 1
    Undly_126_set.insert("UnderlyingIssuer_t_2091922440");
    Undly_126.add_attribute("EncUndIssrLen", "1751498618"); // 1
    Undly_126_set.insert("1751498618");
    Undly_126.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1816423018"); // 1
    Undly_126_set.insert("EncodedUnderlyingIssuer_t_1816423018");
    Undly_126.add_attribute("Desc", "UnderlyingSecurityDesc_t_1807761522"); // 1
    Undly_126_set.insert("UnderlyingSecurityDesc_t_1807761522");
    Undly_126.add_attribute("EncUndSecDescLen", "1535935173"); // 1
    Undly_126_set.insert("1535935173");
    Undly_126.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_326475040"); // 1
    Undly_126_set.insert("EncodedUnderlyingSecurityDesc_t_326475040");
    Undly_126.add_attribute("CPPgm", "UnderlyingCPProgram_t_365329664"); // 1
    Undly_126_set.insert("UnderlyingCPProgram_t_365329664");
    Undly_126.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2129796980"); // 1
    Undly_126_set.insert("UnderlyingCPRegType_t_2129796980");
    Undly_126.add_attribute("AllocPct", "20119186.150000"); // 1
    Undly_126_set.insert("20119186.150000");
    Undly_126.add_attribute("Ccy", "EUR"); // 1
    Undly_126_set.insert("EUR");
    Undly_126.add_attribute("Qty", "1621321.740000"); // 1
    Undly_126_set.insert("1621321.740000");
    Undly_126.add_attribute("SettlTyp", "4"); // 1
    Undly_126_set.insert("4");
    Undly_126.add_attribute("CashAmt", "UnderlyingCashAmount_t_202450799"); // 1
    Undly_126_set.insert("UnderlyingCashAmount_t_202450799");
    Undly_126.add_attribute("CashTyp", "FIXED"); // 1
    Undly_126_set.insert("FIXED");
    Undly_126.add_attribute("Px", "2524913.210000"); // 1
    Undly_126_set.insert("2524913.210000");
    Undly_126.add_attribute("DirtPx", "13988137.950000"); // 1
    Undly_126_set.insert("13988137.950000");
    Undly_126.add_attribute("EndPx", "2778066.070000"); // 1
    Undly_126_set.insert("2778066.070000");
    Undly_126.add_attribute("StartVal", "UnderlyingStartValue_t_1071653281"); // 1
    Undly_126_set.insert("UnderlyingStartValue_t_1071653281");
    Undly_126.add_attribute("CurVal", "UnderlyingCurrentValue_t_1859536937"); // 1
    Undly_126_set.insert("UnderlyingCurrentValue_t_1859536937");
    Undly_126.add_attribute("EndVal", "UnderlyingEndValue_t_2100962223"); // 1
    Undly_126_set.insert("UnderlyingEndValue_t_2100962223");
    Undly_126.add_attribute("AdjQty", "10970380.130000"); // 1
    Undly_126_set.insert("10970380.130000");
    Undly_126.add_attribute("FxRate", "10753094.840000"); // 1
    Undly_126_set.insert("10753094.840000");
    Undly_126.add_attribute("FxRateCalc", "D"); // 1
    Undly_126_set.insert("D");
    Undly_126.add_attribute("CapValu", "UnderlyingCapValue_t_346838270"); // 1
    Undly_126_set.insert("UnderlyingCapValue_t_346838270");
    Undly_126.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2142495930"); // 1
    Undly_126_set.insert("UnderlyingSettlMethod_t_2142495930");
    Undly_126.add_attribute("PutCall", "851242840"); // 1
    Undly_126_set.insert("851242840");
    all_values.push_back(Undly_126_set);
    all_compo_names.insert("Undly_126_set");

    {
      xml_element UndAID_126{"UndAID"};
      multiset<string> UndAID_126_set;
      UndAID_126.add_attribute("AltID", "UnderlyingSecurityAltID_t_1712075927"); // 2
      UndAID_126_set.insert("UnderlyingSecurityAltID_t_1712075927");
      UndAID_126.add_attribute("AltIDSrc", "4"); // 2
      UndAID_126_set.insert("4");
      all_values.push_back(UndAID_126_set);
      all_compo_names.insert("UndAID_126_set");

      Undly_126.add_element(UndAID_126);
    }
    {
      xml_element Stip_204{"Stip"};
      multiset<string> Stip_204_set;
      Stip_204.add_attribute("Typ", "MAT"); // 2
      Stip_204_set.insert("MAT");
      Stip_204.add_attribute("Val", "UnderlyingStipValue_t_1551612324"); // 2
      Stip_204_set.insert("UnderlyingStipValue_t_1551612324");
      all_values.push_back(Stip_204_set);
      all_compo_names.insert("Stip_204_set");

      Undly_126.add_element(Stip_204);
    }
    {
      xml_element Pty_457{"Pty"};
      multiset<string> Pty_457_set;
      Pty_457.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1679920543"); // 2
      Pty_457_set.insert("UnderlyingInstrumentPartyID_t_1679920543");
      Pty_457.add_attribute("Src", "6"); // 2
      Pty_457_set.insert("6");
      Pty_457.add_attribute("R", "34"); // 2
      Pty_457_set.insert("34");
      all_values.push_back(Pty_457_set);
      all_compo_names.insert("Pty_457_set");

      {
        xml_element Sub_457{"Sub"};
        multiset<string> Sub_457_set;
        Sub_457.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1340198417"); // 3
        Sub_457_set.insert("UnderlyingInstrumentPartySubID_t_1340198417");
        Sub_457.add_attribute("Typ", "21"); // 3
        Sub_457_set.insert("21");
        all_values.push_back(Sub_457_set);
        all_compo_names.insert("Sub_457_set");

        Pty_457.add_element(Sub_457);
      }
      Undly_126.add_element(Pty_457);
    }
    elt.add_element(Undly_126);
  } // end Undly
  { // Undly
    xml_element Undly_127{"Undly"};
    multiset<string> Undly_127_set;
    Undly_127.add_attribute("Sym", "UnderlyingSymbol_t_1547026735"); // 1
    Undly_127_set.insert("UnderlyingSymbol_t_1547026735");
    Undly_127.add_attribute("Sfx", "CD"); // 1
    Undly_127_set.insert("CD");
    Undly_127.add_attribute("ID", "UnderlyingSecurityID_t_1352281417"); // 1
    Undly_127_set.insert("UnderlyingSecurityID_t_1352281417");
    Undly_127.add_attribute("Src", "3"); // 1
    Undly_127_set.insert("3");
    Undly_127.add_attribute("Prod", "13"); // 1
    Undly_127_set.insert("13");
    Undly_127.add_attribute("CFI", "UnderlyingCFICode_t_2035688900"); // 1
    Undly_127_set.insert("UnderlyingCFICode_t_2035688900");
    Undly_127.add_attribute("SecTyp", "MATURED"); // 1
    Undly_127_set.insert("MATURED");
    Undly_127.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_99406491"); // 1
    Undly_127_set.insert("UnderlyingSecuritySubType_t_99406491");
    Undly_127.add_attribute("MMY", "90656051"); // 1
    Undly_127_set.insert("90656051");
    Undly_127.add_attribute("Mat", "UnderlyingMaturityDate_t_1008759947"); // 1
    Undly_127_set.insert("UnderlyingMaturityDate_t_1008759947");
    Undly_127.add_attribute("MatTm", "351897812"); // 1
    Undly_127_set.insert("351897812");
    Undly_127.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1489469846"); // 1
    Undly_127_set.insert("UnderlyingCouponPaymentDate_t_1489469846");
    Undly_127.add_attribute("RestrctTyp", "MM"); // 1
    Undly_127_set.insert("MM");
    Undly_127.add_attribute("Snrty", "SD"); // 1
    Undly_127_set.insert("SD");
    Undly_127.add_attribute("NotlPctOut", "12015231.360000"); // 1
    Undly_127_set.insert("12015231.360000");
    Undly_127.add_attribute("OrigNotlPctOut", "12400451.300000"); // 1
    Undly_127_set.insert("12400451.300000");
    Undly_127.add_attribute("AttchPnt", "3731054.580000"); // 1
    Undly_127_set.insert("3731054.580000");
    Undly_127.add_attribute("DetchPnt", "1293489.720000"); // 1
    Undly_127_set.insert("1293489.720000");
    Undly_127.add_attribute("Issued", "UnderlyingIssueDate_t_1335300211"); // 1
    Undly_127_set.insert("UnderlyingIssueDate_t_1335300211");
    Undly_127.add_attribute("RepoCollSecTyp", "719943729"); // 1
    Undly_127_set.insert("719943729");
    Undly_127.add_attribute("RepoTrm", "124361255"); // 1
    Undly_127_set.insert("124361255");
    Undly_127.add_attribute("RepoRt", "390594.040000"); // 1
    Undly_127_set.insert("390594.040000");
    Undly_127.add_attribute("Fctr", "2845360.080000"); // 1
    Undly_127_set.insert("2845360.080000");
    Undly_127.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1859843006"); // 1
    Undly_127_set.insert("UnderlyingCreditRating_t_1859843006");
    Undly_127.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_269077345"); // 1
    Undly_127_set.insert("UnderlyingInstrRegistry_t_269077345");
    Undly_127.add_attribute("Ctry", "1836148332"); // 1
    Undly_127_set.insert("1836148332");
    Undly_127.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1392279901"); // 1
    Undly_127_set.insert("UnderlyingStateOrProvinceOfIssue_t_1392279901");
    Undly_127.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_103110256"); // 1
    Undly_127_set.insert("UnderlyingLocaleOfIssue_t_103110256");
    Undly_127.add_attribute("Redeem", "UnderlyingRedemptionDate_t_909216378"); // 1
    Undly_127_set.insert("UnderlyingRedemptionDate_t_909216378");
    Undly_127.add_attribute("StrkPx", "5849946.700000"); // 1
    Undly_127_set.insert("5849946.700000");
    Undly_127.add_attribute("StrkCcy", "CAN"); // 1
    Undly_127_set.insert("CAN");
    Undly_127.add_attribute("OptA", "143039104"); // 1
    Undly_127_set.insert("143039104");
    Undly_127.add_attribute("Mult", "6778761.100000"); // 1
    Undly_127_set.insert("6778761.100000");
    Undly_127.add_attribute("MultTyp", "2"); // 1
    Undly_127_set.insert("2");
    Undly_127.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_127_set.insert("4");
    Undly_127.add_attribute("UOM", "Bbl"); // 1
    Undly_127_set.insert("Bbl");
    Undly_127.add_attribute("UOMQty", "11463313.960000"); // 1
    Undly_127_set.insert("11463313.960000");
    Undly_127.add_attribute("PxUOM", "lbs"); // 1
    Undly_127_set.insert("lbs");
    Undly_127.add_attribute("PxUOMQty", "6567374.140000"); // 1
    Undly_127_set.insert("6567374.140000");
    Undly_127.add_attribute("TmUnit", "Wk"); // 1
    Undly_127_set.insert("Wk");
    Undly_127.add_attribute("ExerStyle", "1"); // 1
    Undly_127_set.insert("1");
    Undly_127.add_attribute("CpnRt", "21462072.600000"); // 1
    Undly_127_set.insert("21462072.600000");
    Undly_127.add_attribute("Exch", "UnderlyingSecurityExchange_t_1294174249"); // 1
    Undly_127_set.insert("UnderlyingSecurityExchange_t_1294174249");
    Undly_127.add_attribute("Issr", "UnderlyingIssuer_t_1522363498"); // 1
    Undly_127_set.insert("UnderlyingIssuer_t_1522363498");
    Undly_127.add_attribute("EncUndIssrLen", "1200246748"); // 1
    Undly_127_set.insert("1200246748");
    Undly_127.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_386735731"); // 1
    Undly_127_set.insert("EncodedUnderlyingIssuer_t_386735731");
    Undly_127.add_attribute("Desc", "UnderlyingSecurityDesc_t_1895468957"); // 1
    Undly_127_set.insert("UnderlyingSecurityDesc_t_1895468957");
    Undly_127.add_attribute("EncUndSecDescLen", "1329595721"); // 1
    Undly_127_set.insert("1329595721");
    Undly_127.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1722035943"); // 1
    Undly_127_set.insert("EncodedUnderlyingSecurityDesc_t_1722035943");
    Undly_127.add_attribute("CPPgm", "UnderlyingCPProgram_t_467929038"); // 1
    Undly_127_set.insert("UnderlyingCPProgram_t_467929038");
    Undly_127.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1453956976"); // 1
    Undly_127_set.insert("UnderlyingCPRegType_t_1453956976");
    Undly_127.add_attribute("AllocPct", "17610953.470000"); // 1
    Undly_127_set.insert("17610953.470000");
    Undly_127.add_attribute("Ccy", "JPY"); // 1
    Undly_127_set.insert("JPY");
    Undly_127.add_attribute("Qty", "20301726.920000"); // 1
    Undly_127_set.insert("20301726.920000");
    Undly_127.add_attribute("SettlTyp", "4"); // 1
    Undly_127_set.insert("4");
    Undly_127.add_attribute("CashAmt", "UnderlyingCashAmount_t_411112587"); // 1
    Undly_127_set.insert("UnderlyingCashAmount_t_411112587");
    Undly_127.add_attribute("CashTyp", "FIXED"); // 1
    Undly_127_set.insert("FIXED");
    Undly_127.add_attribute("Px", "13503461.080000"); // 1
    Undly_127_set.insert("13503461.080000");
    Undly_127.add_attribute("DirtPx", "9961072.570000"); // 1
    Undly_127_set.insert("9961072.570000");
    Undly_127.add_attribute("EndPx", "14588776.420000"); // 1
    Undly_127_set.insert("14588776.420000");
    Undly_127.add_attribute("StartVal", "UnderlyingStartValue_t_1659105574"); // 1
    Undly_127_set.insert("UnderlyingStartValue_t_1659105574");
    Undly_127.add_attribute("CurVal", "UnderlyingCurrentValue_t_1139146362"); // 1
    Undly_127_set.insert("UnderlyingCurrentValue_t_1139146362");
    Undly_127.add_attribute("EndVal", "UnderlyingEndValue_t_2136753752"); // 1
    Undly_127_set.insert("UnderlyingEndValue_t_2136753752");
    Undly_127.add_attribute("AdjQty", "12318430.930000"); // 1
    Undly_127_set.insert("12318430.930000");
    Undly_127.add_attribute("FxRate", "7866544.630000"); // 1
    Undly_127_set.insert("7866544.630000");
    Undly_127.add_attribute("FxRateCalc", "D"); // 1
    Undly_127_set.insert("D");
    Undly_127.add_attribute("CapValu", "UnderlyingCapValue_t_230690841"); // 1
    Undly_127_set.insert("UnderlyingCapValue_t_230690841");
    Undly_127.add_attribute("SetMeth", "UnderlyingSettlMethod_t_533569055"); // 1
    Undly_127_set.insert("UnderlyingSettlMethod_t_533569055");
    Undly_127.add_attribute("PutCall", "1212088881"); // 1
    Undly_127_set.insert("1212088881");
    all_values.push_back(Undly_127_set);
    all_compo_names.insert("Undly_127_set");

    {
      xml_element UndAID_127{"UndAID"};
      multiset<string> UndAID_127_set;
      UndAID_127.add_attribute("AltID", "UnderlyingSecurityAltID_t_238298536"); // 2
      UndAID_127_set.insert("UnderlyingSecurityAltID_t_238298536");
      UndAID_127.add_attribute("AltIDSrc", "J"); // 2
      UndAID_127_set.insert("J");
      all_values.push_back(UndAID_127_set);
      all_compo_names.insert("UndAID_127_set");

      Undly_127.add_element(UndAID_127);
    }
    {
      xml_element Stip_205{"Stip"};
      multiset<string> Stip_205_set;
      Stip_205.add_attribute("Typ", "HEP"); // 2
      Stip_205_set.insert("HEP");
      Stip_205.add_attribute("Val", "UnderlyingStipValue_t_1532472786"); // 2
      Stip_205_set.insert("UnderlyingStipValue_t_1532472786");
      all_values.push_back(Stip_205_set);
      all_compo_names.insert("Stip_205_set");

      Undly_127.add_element(Stip_205);
    }
    {
      xml_element Pty_458{"Pty"};
      multiset<string> Pty_458_set;
      Pty_458.add_attribute("ID", "UnderlyingInstrumentPartyID_t_7261311"); // 2
      Pty_458_set.insert("UnderlyingInstrumentPartyID_t_7261311");
      Pty_458.add_attribute("Src", "B"); // 2
      Pty_458_set.insert("B");
      Pty_458.add_attribute("R", "60"); // 2
      Pty_458_set.insert("60");
      all_values.push_back(Pty_458_set);
      all_compo_names.insert("Pty_458_set");

      {
        xml_element Sub_458{"Sub"};
        multiset<string> Sub_458_set;
        Sub_458.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1902730268"); // 3
        Sub_458_set.insert("UnderlyingInstrumentPartySubID_t_1902730268");
        Sub_458.add_attribute("Typ", "5"); // 3
        Sub_458_set.insert("5");
        all_values.push_back(Sub_458_set);
        all_compo_names.insert("Sub_458_set");

        Pty_458.add_element(Sub_458);
      }
      Undly_127.add_element(Pty_458);
    }
    elt.add_element(Undly_127);
  } // end Undly
  { // Leg
    xml_element Leg_106{"Leg"};
    multiset<string> Leg_106_set;
    Leg_106.add_attribute("Sym", "LegSymbol_t_223175658"); // 1
    Leg_106_set.insert("LegSymbol_t_223175658");
    Leg_106.add_attribute("Sfx", "WI"); // 1
    Leg_106_set.insert("WI");
    Leg_106.add_attribute("ID", "LegSecurityID_t_1107372511"); // 1
    Leg_106_set.insert("LegSecurityID_t_1107372511");
    Leg_106.add_attribute("Src", "H"); // 1
    Leg_106_set.insert("H");
    Leg_106.add_attribute("Prod", "11"); // 1
    Leg_106_set.insert("11");
    Leg_106.add_attribute("CFI", "LegCFICode_t_990061555"); // 1
    Leg_106_set.insert("LegCFICode_t_990061555");
    Leg_106.add_attribute("SecTyp", "CMBS"); // 1
    Leg_106_set.insert("CMBS");
    Leg_106.add_attribute("SecSubTyp", "LegSecuritySubType_t_329589916"); // 1
    Leg_106_set.insert("LegSecuritySubType_t_329589916");
    Leg_106.add_attribute("MMY", "975860856"); // 1
    Leg_106_set.insert("975860856");
    Leg_106.add_attribute("Mat", "LegMaturityDate_t_619632894"); // 1
    Leg_106_set.insert("LegMaturityDate_t_619632894");
    Leg_106.add_attribute("MatTm", "1325697173"); // 1
    Leg_106_set.insert("1325697173");
    Leg_106.add_attribute("CpnPmt", "LegCouponPaymentDate_t_287254850"); // 1
    Leg_106_set.insert("LegCouponPaymentDate_t_287254850");
    Leg_106.add_attribute("Issued", "LegIssueDate_t_131254820"); // 1
    Leg_106_set.insert("LegIssueDate_t_131254820");
    Leg_106.add_attribute("RepoCollSecTyp", "317359887"); // 1
    Leg_106_set.insert("317359887");
    Leg_106.add_attribute("RepoTrm", "276524954"); // 1
    Leg_106_set.insert("276524954");
    Leg_106.add_attribute("RepoRt", "13630979.140000"); // 1
    Leg_106_set.insert("13630979.140000");
    Leg_106.add_attribute("Fctr", "11040143.500000"); // 1
    Leg_106_set.insert("11040143.500000");
    Leg_106.add_attribute("CrdRtg", "LegCreditRating_t_831876421"); // 1
    Leg_106_set.insert("LegCreditRating_t_831876421");
    Leg_106.add_attribute("Rgstry", "LegInstrRegistry_t_1593788755"); // 1
    Leg_106_set.insert("LegInstrRegistry_t_1593788755");
    Leg_106.add_attribute("Ctry", "1637583406"); // 1
    Leg_106_set.insert("1637583406");
    Leg_106.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2043965302"); // 1
    Leg_106_set.insert("LegStateOrProvinceOfIssue_t_2043965302");
    Leg_106.add_attribute("Lcl", "LegLocaleOfIssue_t_1832087292"); // 1
    Leg_106_set.insert("LegLocaleOfIssue_t_1832087292");
    Leg_106.add_attribute("Redeem", "LegRedemptionDate_t_122481218"); // 1
    Leg_106_set.insert("LegRedemptionDate_t_122481218");
    Leg_106.add_attribute("Strk", "11072941.480000"); // 1
    Leg_106_set.insert("11072941.480000");
    Leg_106.add_attribute("StrkCcy", "CAN"); // 1
    Leg_106_set.insert("CAN");
    Leg_106.add_attribute("OptA", "1370869742"); // 1
    Leg_106_set.insert("1370869742");
    Leg_106.add_attribute("Cmult", "9888012.990000"); // 1
    Leg_106_set.insert("9888012.990000");
    Leg_106.add_attribute("MultTyp", "1"); // 1
    Leg_106_set.insert("1");
    Leg_106.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_106_set.insert("4");
    Leg_106.add_attribute("UOM", "MMbbl"); // 1
    Leg_106_set.insert("MMbbl");
    Leg_106.add_attribute("UOMQty", "1081648.070000"); // 1
    Leg_106_set.insert("1081648.070000");
    Leg_106.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_106_set.insert("MMbbl");
    Leg_106.add_attribute("PxUOMQty", "14424509.750000"); // 1
    Leg_106_set.insert("14424509.750000");
    Leg_106.add_attribute("TmUnit", "Mo"); // 1
    Leg_106_set.insert("Mo");
    Leg_106.add_attribute("ExerStyle", "0"); // 1
    Leg_106_set.insert("0");
    Leg_106.add_attribute("CpnRt", "2850288.830000"); // 1
    Leg_106_set.insert("2850288.830000");
    Leg_106.add_attribute("Exch", "LegSecurityExchange_t_353092297"); // 1
    Leg_106_set.insert("LegSecurityExchange_t_353092297");
    Leg_106.add_attribute("Issr", "LegIssuer_t_1964269297"); // 1
    Leg_106_set.insert("LegIssuer_t_1964269297");
    Leg_106.add_attribute("EncLegIssrLen", "1260889739"); // 1
    Leg_106_set.insert("1260889739");
    Leg_106.add_attribute("EncLegIssr", "EncodedLegIssuer_t_972725192"); // 1
    Leg_106_set.insert("EncodedLegIssuer_t_972725192");
    Leg_106.add_attribute("Desc", "LegSecurityDesc_t_1142482822"); // 1
    Leg_106_set.insert("LegSecurityDesc_t_1142482822");
    Leg_106.add_attribute("EncLegSecDescLen", "1548144589"); // 1
    Leg_106_set.insert("1548144589");
    Leg_106.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1103980012"); // 1
    Leg_106_set.insert("EncodedLegSecurityDesc_t_1103980012");
    Leg_106.add_attribute("RatioQty", "14598427.100000"); // 1
    Leg_106_set.insert("14598427.100000");
    Leg_106.add_attribute("Side", "8"); // 1
    Leg_106_set.insert("8");
    Leg_106.add_attribute("Ccy", "JPY"); // 1
    Leg_106_set.insert("JPY");
    Leg_106.add_attribute("Pool", "LegPool_t_509062317"); // 1
    Leg_106_set.insert("LegPool_t_509062317");
    Leg_106.add_attribute("Dated", "LegDatedDate_t_1913383034"); // 1
    Leg_106_set.insert("LegDatedDate_t_1913383034");
    Leg_106.add_attribute("CSetMo", "2053956818"); // 1
    Leg_106_set.insert("2053956818");
    Leg_106.add_attribute("IntAcrl", "LegInterestAccrualDate_t_405543971"); // 1
    Leg_106_set.insert("LegInterestAccrualDate_t_405543971");
    Leg_106.add_attribute("PutCall", "1597986678"); // 1
    Leg_106_set.insert("1597986678");
    Leg_106.add_attribute("LegOptionRatio", "289543.890000"); // 1
    Leg_106_set.insert("289543.890000");
    Leg_106.add_attribute("Px", "15128381.190000"); // 1
    Leg_106_set.insert("15128381.190000");
    all_values.push_back(Leg_106_set);
    all_compo_names.insert("Leg_106_set");

    {
      xml_element LegAID_101{"LegAID"};
      multiset<string> LegAID_101_set;
      LegAID_101.add_attribute("SecAltID", "LegSecurityAltID_t_667579460"); // 2
      LegAID_101_set.insert("LegSecurityAltID_t_667579460");
      LegAID_101.add_attribute("SecAltIDSrc", "7"); // 2
      LegAID_101_set.insert("7");
      all_values.push_back(LegAID_101_set);
      all_compo_names.insert("LegAID_101_set");

      Leg_106.add_element(LegAID_101);
    }
    elt.add_element(Leg_106);
  } // end Leg
  { // Leg
    xml_element Leg_107{"Leg"};
    multiset<string> Leg_107_set;
    Leg_107.add_attribute("Sym", "LegSymbol_t_736224213"); // 1
    Leg_107_set.insert("LegSymbol_t_736224213");
    Leg_107.add_attribute("Sfx", "WI"); // 1
    Leg_107_set.insert("WI");
    Leg_107.add_attribute("ID", "LegSecurityID_t_43686068"); // 1
    Leg_107_set.insert("LegSecurityID_t_43686068");
    Leg_107.add_attribute("Src", "J"); // 1
    Leg_107_set.insert("J");
    Leg_107.add_attribute("Prod", "1"); // 1
    Leg_107_set.insert("1");
    Leg_107.add_attribute("CFI", "LegCFICode_t_151850875"); // 1
    Leg_107_set.insert("LegCFICode_t_151850875");
    Leg_107.add_attribute("SecTyp", "REV"); // 1
    Leg_107_set.insert("REV");
    Leg_107.add_attribute("SecSubTyp", "LegSecuritySubType_t_1286426551"); // 1
    Leg_107_set.insert("LegSecuritySubType_t_1286426551");
    Leg_107.add_attribute("MMY", "1235656387"); // 1
    Leg_107_set.insert("1235656387");
    Leg_107.add_attribute("Mat", "LegMaturityDate_t_608695759"); // 1
    Leg_107_set.insert("LegMaturityDate_t_608695759");
    Leg_107.add_attribute("MatTm", "1571455434"); // 1
    Leg_107_set.insert("1571455434");
    Leg_107.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1588748684"); // 1
    Leg_107_set.insert("LegCouponPaymentDate_t_1588748684");
    Leg_107.add_attribute("Issued", "LegIssueDate_t_425481408"); // 1
    Leg_107_set.insert("LegIssueDate_t_425481408");
    Leg_107.add_attribute("RepoCollSecTyp", "684861525"); // 1
    Leg_107_set.insert("684861525");
    Leg_107.add_attribute("RepoTrm", "413990228"); // 1
    Leg_107_set.insert("413990228");
    Leg_107.add_attribute("RepoRt", "15679642.310000"); // 1
    Leg_107_set.insert("15679642.310000");
    Leg_107.add_attribute("Fctr", "855224.660000"); // 1
    Leg_107_set.insert("855224.660000");
    Leg_107.add_attribute("CrdRtg", "LegCreditRating_t_1517970241"); // 1
    Leg_107_set.insert("LegCreditRating_t_1517970241");
    Leg_107.add_attribute("Rgstry", "LegInstrRegistry_t_880323293"); // 1
    Leg_107_set.insert("LegInstrRegistry_t_880323293");
    Leg_107.add_attribute("Ctry", "1910192009"); // 1
    Leg_107_set.insert("1910192009");
    Leg_107.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1837564519"); // 1
    Leg_107_set.insert("LegStateOrProvinceOfIssue_t_1837564519");
    Leg_107.add_attribute("Lcl", "LegLocaleOfIssue_t_1296696705"); // 1
    Leg_107_set.insert("LegLocaleOfIssue_t_1296696705");
    Leg_107.add_attribute("Redeem", "LegRedemptionDate_t_271770678"); // 1
    Leg_107_set.insert("LegRedemptionDate_t_271770678");
    Leg_107.add_attribute("Strk", "16034639.050000"); // 1
    Leg_107_set.insert("16034639.050000");
    Leg_107.add_attribute("StrkCcy", "USD"); // 1
    Leg_107_set.insert("USD");
    Leg_107.add_attribute("OptA", "1053966935"); // 1
    Leg_107_set.insert("1053966935");
    Leg_107.add_attribute("Cmult", "12321242.650000"); // 1
    Leg_107_set.insert("12321242.650000");
    Leg_107.add_attribute("MultTyp", "1"); // 1
    Leg_107_set.insert("1");
    Leg_107.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_107_set.insert("0");
    Leg_107.add_attribute("UOM", "Bu"); // 1
    Leg_107_set.insert("Bu");
    Leg_107.add_attribute("UOMQty", "7788933.350000"); // 1
    Leg_107_set.insert("7788933.350000");
    Leg_107.add_attribute("PxUOM", "lbs"); // 1
    Leg_107_set.insert("lbs");
    Leg_107.add_attribute("PxUOMQty", "14345072.510000"); // 1
    Leg_107_set.insert("14345072.510000");
    Leg_107.add_attribute("TmUnit", "Min"); // 1
    Leg_107_set.insert("Min");
    Leg_107.add_attribute("ExerStyle", "0"); // 1
    Leg_107_set.insert("0");
    Leg_107.add_attribute("CpnRt", "15863581.270000"); // 1
    Leg_107_set.insert("15863581.270000");
    Leg_107.add_attribute("Exch", "LegSecurityExchange_t_1305691336"); // 1
    Leg_107_set.insert("LegSecurityExchange_t_1305691336");
    Leg_107.add_attribute("Issr", "LegIssuer_t_213361985"); // 1
    Leg_107_set.insert("LegIssuer_t_213361985");
    Leg_107.add_attribute("EncLegIssrLen", "674530866"); // 1
    Leg_107_set.insert("674530866");
    Leg_107.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1914387095"); // 1
    Leg_107_set.insert("EncodedLegIssuer_t_1914387095");
    Leg_107.add_attribute("Desc", "LegSecurityDesc_t_1784817419"); // 1
    Leg_107_set.insert("LegSecurityDesc_t_1784817419");
    Leg_107.add_attribute("EncLegSecDescLen", "115795902"); // 1
    Leg_107_set.insert("115795902");
    Leg_107.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_192384856"); // 1
    Leg_107_set.insert("EncodedLegSecurityDesc_t_192384856");
    Leg_107.add_attribute("RatioQty", "3221952.960000"); // 1
    Leg_107_set.insert("3221952.960000");
    Leg_107.add_attribute("Side", "4"); // 1
    Leg_107_set.insert("4");
    Leg_107.add_attribute("Ccy", "GBP"); // 1
    Leg_107_set.insert("GBP");
    Leg_107.add_attribute("Pool", "LegPool_t_2047756372"); // 1
    Leg_107_set.insert("LegPool_t_2047756372");
    Leg_107.add_attribute("Dated", "LegDatedDate_t_493188732"); // 1
    Leg_107_set.insert("LegDatedDate_t_493188732");
    Leg_107.add_attribute("CSetMo", "170426124"); // 1
    Leg_107_set.insert("170426124");
    Leg_107.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1737837243"); // 1
    Leg_107_set.insert("LegInterestAccrualDate_t_1737837243");
    Leg_107.add_attribute("PutCall", "1789885437"); // 1
    Leg_107_set.insert("1789885437");
    Leg_107.add_attribute("LegOptionRatio", "4421968.020000"); // 1
    Leg_107_set.insert("4421968.020000");
    Leg_107.add_attribute("Px", "11938175.010000"); // 1
    Leg_107_set.insert("11938175.010000");
    all_values.push_back(Leg_107_set);
    all_compo_names.insert("Leg_107_set");

    {
      xml_element LegAID_102{"LegAID"};
      multiset<string> LegAID_102_set;
      LegAID_102.add_attribute("SecAltID", "LegSecurityAltID_t_845571665"); // 2
      LegAID_102_set.insert("LegSecurityAltID_t_845571665");
      LegAID_102.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_102_set.insert("5");
      all_values.push_back(LegAID_102_set);
      all_compo_names.insert("LegAID_102_set");

      Leg_107.add_element(LegAID_102);
    }
    elt.add_element(Leg_107);
  } // end Leg
  { // Leg
    xml_element Leg_108{"Leg"};
    multiset<string> Leg_108_set;
    Leg_108.add_attribute("Sym", "LegSymbol_t_100300788"); // 1
    Leg_108_set.insert("LegSymbol_t_100300788");
    Leg_108.add_attribute("Sfx", "CD"); // 1
    Leg_108_set.insert("CD");
    Leg_108.add_attribute("ID", "LegSecurityID_t_1162180574"); // 1
    Leg_108_set.insert("LegSecurityID_t_1162180574");
    Leg_108.add_attribute("Src", "F"); // 1
    Leg_108_set.insert("F");
    Leg_108.add_attribute("Prod", "9"); // 1
    Leg_108_set.insert("9");
    Leg_108.add_attribute("CFI", "LegCFICode_t_1941073909"); // 1
    Leg_108_set.insert("LegCFICode_t_1941073909");
    Leg_108.add_attribute("SecTyp", "IET"); // 1
    Leg_108_set.insert("IET");
    Leg_108.add_attribute("SecSubTyp", "LegSecuritySubType_t_608057069"); // 1
    Leg_108_set.insert("LegSecuritySubType_t_608057069");
    Leg_108.add_attribute("MMY", "2125265218"); // 1
    Leg_108_set.insert("2125265218");
    Leg_108.add_attribute("Mat", "LegMaturityDate_t_1979226125"); // 1
    Leg_108_set.insert("LegMaturityDate_t_1979226125");
    Leg_108.add_attribute("MatTm", "46931548"); // 1
    Leg_108_set.insert("46931548");
    Leg_108.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1283472906"); // 1
    Leg_108_set.insert("LegCouponPaymentDate_t_1283472906");
    Leg_108.add_attribute("Issued", "LegIssueDate_t_45104463"); // 1
    Leg_108_set.insert("LegIssueDate_t_45104463");
    Leg_108.add_attribute("RepoCollSecTyp", "721462414"); // 1
    Leg_108_set.insert("721462414");
    Leg_108.add_attribute("RepoTrm", "1050376354"); // 1
    Leg_108_set.insert("1050376354");
    Leg_108.add_attribute("RepoRt", "18299218.820000"); // 1
    Leg_108_set.insert("18299218.820000");
    Leg_108.add_attribute("Fctr", "8372583.170000"); // 1
    Leg_108_set.insert("8372583.170000");
    Leg_108.add_attribute("CrdRtg", "LegCreditRating_t_1242761210"); // 1
    Leg_108_set.insert("LegCreditRating_t_1242761210");
    Leg_108.add_attribute("Rgstry", "LegInstrRegistry_t_4633531"); // 1
    Leg_108_set.insert("LegInstrRegistry_t_4633531");
    Leg_108.add_attribute("Ctry", "1367044448"); // 1
    Leg_108_set.insert("1367044448");
    Leg_108.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_855626649"); // 1
    Leg_108_set.insert("LegStateOrProvinceOfIssue_t_855626649");
    Leg_108.add_attribute("Lcl", "LegLocaleOfIssue_t_412351293"); // 1
    Leg_108_set.insert("LegLocaleOfIssue_t_412351293");
    Leg_108.add_attribute("Redeem", "LegRedemptionDate_t_1267317172"); // 1
    Leg_108_set.insert("LegRedemptionDate_t_1267317172");
    Leg_108.add_attribute("Strk", "13488153.810000"); // 1
    Leg_108_set.insert("13488153.810000");
    Leg_108.add_attribute("StrkCcy", "CAN"); // 1
    Leg_108_set.insert("CAN");
    Leg_108.add_attribute("OptA", "991217170"); // 1
    Leg_108_set.insert("991217170");
    Leg_108.add_attribute("Cmult", "10249742.200000"); // 1
    Leg_108_set.insert("10249742.200000");
    Leg_108.add_attribute("MultTyp", "2"); // 1
    Leg_108_set.insert("2");
    Leg_108.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_108_set.insert("1");
    Leg_108.add_attribute("UOM", "t"); // 1
    Leg_108_set.insert("t");
    Leg_108.add_attribute("UOMQty", "43054.090000"); // 1
    Leg_108_set.insert("43054.090000");
    Leg_108.add_attribute("PxUOM", "Alw"); // 1
    Leg_108_set.insert("Alw");
    Leg_108.add_attribute("PxUOMQty", "11591825.980000"); // 1
    Leg_108_set.insert("11591825.980000");
    Leg_108.add_attribute("TmUnit", "Yr"); // 1
    Leg_108_set.insert("Yr");
    Leg_108.add_attribute("ExerStyle", "2"); // 1
    Leg_108_set.insert("2");
    Leg_108.add_attribute("CpnRt", "9527728.590000"); // 1
    Leg_108_set.insert("9527728.590000");
    Leg_108.add_attribute("Exch", "LegSecurityExchange_t_583475988"); // 1
    Leg_108_set.insert("LegSecurityExchange_t_583475988");
    Leg_108.add_attribute("Issr", "LegIssuer_t_1548608006"); // 1
    Leg_108_set.insert("LegIssuer_t_1548608006");
    Leg_108.add_attribute("EncLegIssrLen", "930554430"); // 1
    Leg_108_set.insert("930554430");
    Leg_108.add_attribute("EncLegIssr", "EncodedLegIssuer_t_415218465"); // 1
    Leg_108_set.insert("EncodedLegIssuer_t_415218465");
    Leg_108.add_attribute("Desc", "LegSecurityDesc_t_1595539554"); // 1
    Leg_108_set.insert("LegSecurityDesc_t_1595539554");
    Leg_108.add_attribute("EncLegSecDescLen", "66543688"); // 1
    Leg_108_set.insert("66543688");
    Leg_108.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_460322928"); // 1
    Leg_108_set.insert("EncodedLegSecurityDesc_t_460322928");
    Leg_108.add_attribute("RatioQty", "1695183.210000"); // 1
    Leg_108_set.insert("1695183.210000");
    Leg_108.add_attribute("Side", "B"); // 1
    Leg_108_set.insert("B");
    Leg_108.add_attribute("Ccy", "GBP"); // 1
    Leg_108_set.insert("GBP");
    Leg_108.add_attribute("Pool", "LegPool_t_212197604"); // 1
    Leg_108_set.insert("LegPool_t_212197604");
    Leg_108.add_attribute("Dated", "LegDatedDate_t_147394694"); // 1
    Leg_108_set.insert("LegDatedDate_t_147394694");
    Leg_108.add_attribute("CSetMo", "226337438"); // 1
    Leg_108_set.insert("226337438");
    Leg_108.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1067824253"); // 1
    Leg_108_set.insert("LegInterestAccrualDate_t_1067824253");
    Leg_108.add_attribute("PutCall", "559745987"); // 1
    Leg_108_set.insert("559745987");
    Leg_108.add_attribute("LegOptionRatio", "14936546.100000"); // 1
    Leg_108_set.insert("14936546.100000");
    Leg_108.add_attribute("Px", "2691559.860000"); // 1
    Leg_108_set.insert("2691559.860000");
    all_values.push_back(Leg_108_set);
    all_compo_names.insert("Leg_108_set");

    {
      xml_element LegAID_103{"LegAID"};
      multiset<string> LegAID_103_set;
      LegAID_103.add_attribute("SecAltID", "LegSecurityAltID_t_1142523405"); // 2
      LegAID_103_set.insert("LegSecurityAltID_t_1142523405");
      LegAID_103.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_103_set.insert("4");
      all_values.push_back(LegAID_103_set);
      all_compo_names.insert("LegAID_103_set");

      Leg_108.add_element(LegAID_103);
    }
    elt.add_element(Leg_108);
  } // end Leg
  { // TrdCapDt
    xml_element TrdCapDt_0{"TrdCapDt"};
    multiset<string> TrdCapDt_0_set;
    TrdCapDt_0.add_attribute("TrdDt", "TradeDate_t_20013977"); // 1
    TrdCapDt_0_set.insert("TradeDate_t_20013977");
    TrdCapDt_0.add_attribute("LastUpdateTm", "LastUpdateTime_t_107846350"); // 1
    TrdCapDt_0_set.insert("LastUpdateTime_t_107846350");
    TrdCapDt_0.add_attribute("TxnTm", "TransactTime_t_949678345"); // 1
    TrdCapDt_0_set.insert("TransactTime_t_949678345");
    all_values.push_back(TrdCapDt_0_set);
    all_compo_names.insert("TrdCapDt_0_set");

    elt.add_element(TrdCapDt_0);
  } // end TrdCapDt
  { // TrdCapDt
    xml_element TrdCapDt_1{"TrdCapDt"};
    multiset<string> TrdCapDt_1_set;
    TrdCapDt_1.add_attribute("TrdDt", "TradeDate_t_17016001"); // 1
    TrdCapDt_1_set.insert("TradeDate_t_17016001");
    TrdCapDt_1.add_attribute("LastUpdateTm", "LastUpdateTime_t_112151759"); // 1
    TrdCapDt_1_set.insert("LastUpdateTime_t_112151759");
    TrdCapDt_1.add_attribute("TxnTm", "TransactTime_t_569195815"); // 1
    TrdCapDt_1_set.insert("TransactTime_t_569195815");
    all_values.push_back(TrdCapDt_1_set);
    all_compo_names.insert("TrdCapDt_1_set");

    elt.add_element(TrdCapDt_1);
  } // end TrdCapDt
  { // TrdCapDt
    xml_element TrdCapDt_2{"TrdCapDt"};
    multiset<string> TrdCapDt_2_set;
    TrdCapDt_2.add_attribute("TrdDt", "TradeDate_t_1176198600"); // 1
    TrdCapDt_2_set.insert("TradeDate_t_1176198600");
    TrdCapDt_2.add_attribute("LastUpdateTm", "LastUpdateTime_t_1938304352"); // 1
    TrdCapDt_2_set.insert("LastUpdateTime_t_1938304352");
    TrdCapDt_2.add_attribute("TxnTm", "TransactTime_t_1509746752"); // 1
    TrdCapDt_2_set.insert("TransactTime_t_1509746752");
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
