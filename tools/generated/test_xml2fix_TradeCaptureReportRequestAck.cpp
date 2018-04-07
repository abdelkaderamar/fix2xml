#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/TradeCaptureReportRequestAck.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( TradeCaptureReportRequestAck_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptReqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequestAck_message_t_0;
  elt.add_attribute("ReqID", "TradeRequestID_t_1929733894"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("TradeRequestID_t_1929733894");
  elt.add_attribute("TrdID", "TradeID_t_603466281"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("TradeID_t_603466281");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_867325684"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("SecondaryTradeID_t_867325684");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_196427970"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("FirmTradeID_t_196427970");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_1367939846"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("SecondaryFirmTradeID_t_1367939846");
  elt.add_attribute("ReqTyp", "4"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("4");
  elt.add_attribute("SubReqTyp", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("TotNumTrdRpts", "1499342646"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1499342646");
  elt.add_attribute("ReqRslt", "3"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("3");
  elt.add_attribute("ReqStat", "2"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("2");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("RspTransportTyp", "0"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("0");
  elt.add_attribute("RspDest", "ResponseDestination_t_1108206726"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("ResponseDestination_t_1108206726");
  elt.add_attribute("Txt", "Text_t_1229047468"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("Text_t_1229047468");
  elt.add_attribute("EncTxtLen", "446011480"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("446011480");
  elt.add_attribute("EncTxt", "EncodedText_t_1454875542"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("EncodedText_t_1454875542");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1667518805"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("MessageEventSource_t_1667518805");
  all_values.push_back(TradeCaptureReportRequestAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequestAck_message_t");

  { // Hdr
    xml_element Hdr_99{"Hdr"};
    multiset<string> Hdr_99_set;
    Hdr_99.add_attribute("SeqNum", "839715328"); // 1
    Hdr_99_set.insert("839715328");
    Hdr_99.add_attribute("SID", "SenderCompID_t_129113649"); // 1
    Hdr_99_set.insert("SenderCompID_t_129113649");
    Hdr_99.add_attribute("TID", "TargetCompID_t_1621509940"); // 1
    Hdr_99_set.insert("TargetCompID_t_1621509940");
    Hdr_99.add_attribute("OBID", "OnBehalfOfCompID_t_2018696200"); // 1
    Hdr_99_set.insert("OnBehalfOfCompID_t_2018696200");
    Hdr_99.add_attribute("D2ID", "DeliverToCompID_t_689653964"); // 1
    Hdr_99_set.insert("DeliverToCompID_t_689653964");
    Hdr_99.add_attribute("SSub", "SenderSubID_t_1169830609"); // 1
    Hdr_99_set.insert("SenderSubID_t_1169830609");
    Hdr_99.add_attribute("SLoc", "SenderLocationID_t_1845207616"); // 1
    Hdr_99_set.insert("SenderLocationID_t_1845207616");
    Hdr_99.add_attribute("TSub", "TargetSubID_t_1662293452"); // 1
    Hdr_99_set.insert("TargetSubID_t_1662293452");
    Hdr_99.add_attribute("TLoc", "TargetLocationID_t_1077161776"); // 1
    Hdr_99_set.insert("TargetLocationID_t_1077161776");
    Hdr_99.add_attribute("OBSub", "OnBehalfOfSubID_t_1405151440"); // 1
    Hdr_99_set.insert("OnBehalfOfSubID_t_1405151440");
    Hdr_99.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1531527817"); // 1
    Hdr_99_set.insert("OnBehalfOfLocationID_t_1531527817");
    Hdr_99.add_attribute("D2Sub", "DeliverToSubID_t_2015046937"); // 1
    Hdr_99_set.insert("DeliverToSubID_t_2015046937");
    Hdr_99.add_attribute("D2Loc", "DeliverToLocationID_t_1036824140"); // 1
    Hdr_99_set.insert("DeliverToLocationID_t_1036824140");
    Hdr_99.add_attribute("PosDup", "Y"); // 1
    Hdr_99_set.insert("Y");
    Hdr_99.add_attribute("PosRsnd", "N"); // 1
    Hdr_99_set.insert("N");
    Hdr_99.add_attribute("Snt", "SendingTime_t_1640290421"); // 1
    Hdr_99_set.insert("SendingTime_t_1640290421");
    Hdr_99.add_attribute("OrigSnt", "OrigSendingTime_t_1840179908"); // 1
    Hdr_99_set.insert("OrigSendingTime_t_1840179908");
    Hdr_99.add_attribute("MsgEncd", "MessageEncoding_t_1993725154"); // 1
    Hdr_99_set.insert("MessageEncoding_t_1993725154");
    all_values.push_back(Hdr_99_set);
    all_compo_names.insert("Hdr_99_set");

    {
      xml_element Hop_99{"Hop"};
      multiset<string> Hop_99_set;
      Hop_99.add_attribute("ID", "HopCompID_t_860746620"); // 2
      Hop_99_set.insert("HopCompID_t_860746620");
      Hop_99.add_attribute("Ref", "1857368287"); // 2
      Hop_99_set.insert("1857368287");
      Hop_99.add_attribute("Snt", "HopSendingTime_t_1954089528"); // 2
      Hop_99_set.insert("HopSendingTime_t_1954089528");
      all_values.push_back(Hop_99_set);
      all_compo_names.insert("Hop_99_set");

      Hdr_99.add_element(Hop_99);
    }
    elt.add_element(Hdr_99);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_97{"Instrmt"};
    multiset<string> Instrmt_97_set;
    Instrmt_97.add_attribute("Sym", "Symbol_t_212605618"); // 1
    Instrmt_97_set.insert("Symbol_t_212605618");
    Instrmt_97.add_attribute("Sfx", "CD"); // 1
    Instrmt_97_set.insert("CD");
    Instrmt_97.add_attribute("ID", "SecurityID_t_673948401"); // 1
    Instrmt_97_set.insert("SecurityID_t_673948401");
    Instrmt_97.add_attribute("Src", "E"); // 1
    Instrmt_97_set.insert("E");
    Instrmt_97.add_attribute("Prod", "12"); // 1
    Instrmt_97_set.insert("12");
    Instrmt_97.add_attribute("ProdCmplx", "ProductComplex_t_1782155127"); // 1
    Instrmt_97_set.insert("ProductComplex_t_1782155127");
    Instrmt_97.add_attribute("SecGrp", "SecurityGroup_t_383816059"); // 1
    Instrmt_97_set.insert("SecurityGroup_t_383816059");
    Instrmt_97.add_attribute("CFI", "CFICode_t_99764025"); // 1
    Instrmt_97_set.insert("CFICode_t_99764025");
    Instrmt_97.add_attribute("SecTyp", "MF"); // 1
    Instrmt_97_set.insert("MF");
    Instrmt_97.add_attribute("SubTyp", "SecuritySubType_t_2051334864"); // 1
    Instrmt_97_set.insert("SecuritySubType_t_2051334864");
    Instrmt_97.add_attribute("MMY", "939479353"); // 1
    Instrmt_97_set.insert("939479353");
    Instrmt_97.add_attribute("MatDt", "MaturityDate_t_1218660671"); // 1
    Instrmt_97_set.insert("MaturityDate_t_1218660671");
    Instrmt_97.add_attribute("MatTm", "1525361156"); // 1
    Instrmt_97_set.insert("1525361156");
    Instrmt_97.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_810691905"); // 1
    Instrmt_97_set.insert("SettleOnOpenFlag_t_810691905");
    Instrmt_97.add_attribute("AsgnMeth", "1908314635"); // 1
    Instrmt_97_set.insert("1908314635");
    Instrmt_97.add_attribute("Status", "1"); // 1
    Instrmt_97_set.insert("1");
    Instrmt_97.add_attribute("CpnPmt", "CouponPaymentDate_t_508415873"); // 1
    Instrmt_97_set.insert("CouponPaymentDate_t_508415873");
    Instrmt_97.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_97_set.insert("XR");
    Instrmt_97.add_attribute("Snrty", "SD"); // 1
    Instrmt_97_set.insert("SD");
    Instrmt_97.add_attribute("NotlPctOut", "19135673.130000"); // 1
    Instrmt_97_set.insert("19135673.130000");
    Instrmt_97.add_attribute("OrigNotlPctOut", "8071686.090000"); // 1
    Instrmt_97_set.insert("8071686.090000");
    Instrmt_97.add_attribute("AttchPnt", "14924331.840000"); // 1
    Instrmt_97_set.insert("14924331.840000");
    Instrmt_97.add_attribute("DetchPnt", "8029078.060000"); // 1
    Instrmt_97_set.insert("8029078.060000");
    Instrmt_97.add_attribute("Issued", "IssueDate_t_1780022832"); // 1
    Instrmt_97_set.insert("IssueDate_t_1780022832");
    Instrmt_97.add_attribute("RepoCollSecTyp", "1142246720"); // 1
    Instrmt_97_set.insert("1142246720");
    Instrmt_97.add_attribute("RepoTrm", "295714579"); // 1
    Instrmt_97_set.insert("295714579");
    Instrmt_97.add_attribute("RepoRt", "14727190.920000"); // 1
    Instrmt_97_set.insert("14727190.920000");
    Instrmt_97.add_attribute("Fctr", "9884882.260000"); // 1
    Instrmt_97_set.insert("9884882.260000");
    Instrmt_97.add_attribute("CrdRtg", "CreditRating_t_1156461199"); // 1
    Instrmt_97_set.insert("CreditRating_t_1156461199");
    Instrmt_97.add_attribute("Rgstry", "InstrRegistry_t_1182603731"); // 1
    Instrmt_97_set.insert("InstrRegistry_t_1182603731");
    Instrmt_97.add_attribute("IssuCtry", "795094106"); // 1
    Instrmt_97_set.insert("795094106");
    Instrmt_97.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1369066818"); // 1
    Instrmt_97_set.insert("StateOrProvinceOfIssue_t_1369066818");
    Instrmt_97.add_attribute("Lcl", "LocaleOfIssue_t_1385417006"); // 1
    Instrmt_97_set.insert("LocaleOfIssue_t_1385417006");
    Instrmt_97.add_attribute("Redeem", "RedemptionDate_t_1469042508"); // 1
    Instrmt_97_set.insert("RedemptionDate_t_1469042508");
    Instrmt_97.add_attribute("StrkPx", "5238354.090000"); // 1
    Instrmt_97_set.insert("5238354.090000");
    Instrmt_97.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_97_set.insert("EUR");
    Instrmt_97.add_attribute("StrkMult", "9076514.680000"); // 1
    Instrmt_97_set.insert("9076514.680000");
    Instrmt_97.add_attribute("StrkValu", "11389335.760000"); // 1
    Instrmt_97_set.insert("11389335.760000");
    Instrmt_97.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_97_set.insert("2");
    Instrmt_97.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_97_set.insert("1");
    Instrmt_97.add_attribute("StrkPxBndryPrcsn", "20784129.290000"); // 1
    Instrmt_97_set.insert("20784129.290000");
    Instrmt_97.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_97_set.insert("1");
    Instrmt_97.add_attribute("OptAt", "189380193"); // 1
    Instrmt_97_set.insert("189380193");
    Instrmt_97.add_attribute("Mult", "7416211.860000"); // 1
    Instrmt_97_set.insert("7416211.860000");
    Instrmt_97.add_attribute("MultTyp", "0"); // 1
    Instrmt_97_set.insert("0");
    Instrmt_97.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_97_set.insert("1");
    Instrmt_97.add_attribute("MinPxIncr", "12500370.590000"); // 1
    Instrmt_97_set.insert("12500370.590000");
    Instrmt_97.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_300909811"); // 1
    Instrmt_97_set.insert("MinPriceIncrementAmount_t_300909811");
    Instrmt_97.add_attribute("UOM", "Alw"); // 1
    Instrmt_97_set.insert("Alw");
    Instrmt_97.add_attribute("UOMQty", "10161207.240000"); // 1
    Instrmt_97_set.insert("10161207.240000");
    Instrmt_97.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_97_set.insert("lbs");
    Instrmt_97.add_attribute("PxUOMQty", "17069077.420000"); // 1
    Instrmt_97_set.insert("17069077.420000");
    Instrmt_97.add_attribute("SettlMeth", "C"); // 1
    Instrmt_97_set.insert("C");
    Instrmt_97.add_attribute("ExerStyle", "0"); // 1
    Instrmt_97_set.insert("0");
    Instrmt_97.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_97_set.insert("2");
    Instrmt_97.add_attribute("OptPayAmt", "OptPayoutAmount_t_2114743110"); // 1
    Instrmt_97_set.insert("OptPayoutAmount_t_2114743110");
    Instrmt_97.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_97_set.insert("INX");
    Instrmt_97.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_97_set.insert("EQTY");
    Instrmt_97.add_attribute("ListMeth", "1"); // 1
    Instrmt_97_set.insert("1");
    Instrmt_97.add_attribute("CapPx", "12484567.810000"); // 1
    Instrmt_97_set.insert("12484567.810000");
    Instrmt_97.add_attribute("FlrPx", "3377694.980000"); // 1
    Instrmt_97_set.insert("3377694.980000");
    Instrmt_97.add_attribute("PutCall", "1"); // 1
    Instrmt_97_set.insert("1");
    Instrmt_97.add_attribute("FlexInd", "false"); // 1
    Instrmt_97_set.insert("false");
    Instrmt_97.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_97_set.insert("true");
    Instrmt_97.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_97_set.insert("Wk");
    Instrmt_97.add_attribute("CpnRt", "15255596.900000"); // 1
    Instrmt_97_set.insert("15255596.900000");
    Instrmt_97.add_attribute("Exch", "SecurityExchange_t_763042346"); // 1
    Instrmt_97_set.insert("SecurityExchange_t_763042346");
    Instrmt_97.add_attribute("PosLmt", "1776790709"); // 1
    Instrmt_97_set.insert("1776790709");
    Instrmt_97.add_attribute("NTPosLmt", "517009618"); // 1
    Instrmt_97_set.insert("517009618");
    Instrmt_97.add_attribute("Issr", "Issuer_t_808819707"); // 1
    Instrmt_97_set.insert("Issuer_t_808819707");
    Instrmt_97.add_attribute("EncIssrLen", "440809746"); // 1
    Instrmt_97_set.insert("440809746");
    Instrmt_97.add_attribute("EncIssr", "EncodedIssuer_t_447938899"); // 1
    Instrmt_97_set.insert("EncodedIssuer_t_447938899");
    Instrmt_97.add_attribute("Desc", "SecurityDesc_t_2073257740"); // 1
    Instrmt_97_set.insert("SecurityDesc_t_2073257740");
    Instrmt_97.add_attribute("EncSecDescLen", "630189939"); // 1
    Instrmt_97_set.insert("630189939");
    Instrmt_97.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1189560085"); // 1
    Instrmt_97_set.insert("EncodedSecurityDesc_t_1189560085");
    Instrmt_97.add_attribute("Pool", "Pool_t_951043112"); // 1
    Instrmt_97_set.insert("Pool_t_951043112");
    Instrmt_97.add_attribute("CSetMo", "1367278251"); // 1
    Instrmt_97_set.insert("1367278251");
    Instrmt_97.add_attribute("CPPgm", "2"); // 1
    Instrmt_97_set.insert("2");
    Instrmt_97.add_attribute("CPRegT", "CPRegType_t_1251952923"); // 1
    Instrmt_97_set.insert("CPRegType_t_1251952923");
    Instrmt_97.add_attribute("Dated", "DatedDate_t_1581752809"); // 1
    Instrmt_97_set.insert("DatedDate_t_1581752809");
    Instrmt_97.add_attribute("IntAcrl", "InterestAccrualDate_t_1308234220"); // 1
    Instrmt_97_set.insert("InterestAccrualDate_t_1308234220");
    all_values.push_back(Instrmt_97_set);
    all_compo_names.insert("Instrmt_97_set");

    {
      xml_element AID_100{"AID"};
      multiset<string> AID_100_set;
      AID_100.add_attribute("AltID", "SecurityAltID_t_212547696"); // 2
      AID_100_set.insert("SecurityAltID_t_212547696");
      AID_100.add_attribute("AltIDSrc", "A"); // 2
      AID_100_set.insert("A");
      all_values.push_back(AID_100_set);
      all_compo_names.insert("AID_100_set");

      Instrmt_97.add_element(AID_100);
    }
    {
      xml_element SecXML_94{"SecXML"};
      multiset<string> SecXML_94_set;
      SecXML_94.add_attribute("Schema", "SecurityXMLSchema_t_979779103"); // 2
      SecXML_94_set.insert("SecurityXMLSchema_t_979779103");
      all_values.push_back(SecXML_94_set);
      all_compo_names.insert("SecXML_94_set");

      Instrmt_97.add_element(SecXML_94);
    }
    {
      xml_element Evnt_94{"Evnt"};
      multiset<string> Evnt_94_set;
      Evnt_94.add_attribute("EventTyp", "2"); // 2
      Evnt_94_set.insert("2");
      Evnt_94.add_attribute("Dt", "EventDate_t_1842847717"); // 2
      Evnt_94_set.insert("EventDate_t_1842847717");
      Evnt_94.add_attribute("Tm", "EventTime_t_947038565"); // 2
      Evnt_94_set.insert("EventTime_t_947038565");
      Evnt_94.add_attribute("Px", "10190183.500000"); // 2
      Evnt_94_set.insert("10190183.500000");
      Evnt_94.add_attribute("Txt", "EventText_t_1385523109"); // 2
      Evnt_94_set.insert("EventText_t_1385523109");
      all_values.push_back(Evnt_94_set);
      all_compo_names.insert("Evnt_94_set");

      Instrmt_97.add_element(Evnt_94);
    }
    {
      xml_element Pty_477{"Pty"};
      multiset<string> Pty_477_set;
      Pty_477.add_attribute("ID", "InstrumentPartyID_t_2070759226"); // 2
      Pty_477_set.insert("InstrumentPartyID_t_2070759226");
      Pty_477.add_attribute("Src", "A"); // 2
      Pty_477_set.insert("A");
      Pty_477.add_attribute("R", "24"); // 2
      Pty_477_set.insert("24");
      all_values.push_back(Pty_477_set);
      all_compo_names.insert("Pty_477_set");

      {
        xml_element Sub_477{"Sub"};
        multiset<string> Sub_477_set;
        Sub_477.add_attribute("ID", "InstrumentPartySubID_t_268579410"); // 3
        Sub_477_set.insert("InstrumentPartySubID_t_268579410");
        Sub_477.add_attribute("Typ", "6"); // 3
        Sub_477_set.insert("6");
        all_values.push_back(Sub_477_set);
        all_compo_names.insert("Sub_477_set");

        Pty_477.add_element(Sub_477);
      }
      Instrmt_97.add_element(Pty_477);
    }
    {
      xml_element CmplxEvnt_91{"CmplxEvnt"};
      multiset<string> CmplxEvnt_91_set;
      CmplxEvnt_91.add_attribute("Typ", "8"); // 2
      CmplxEvnt_91_set.insert("8");
      CmplxEvnt_91.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1137718650"); // 2
      CmplxEvnt_91_set.insert("ComplexOptPayoutAmount_t_1137718650");
      CmplxEvnt_91.add_attribute("Px", "21319413.120000"); // 2
      CmplxEvnt_91_set.insert("21319413.120000");
      CmplxEvnt_91.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_91_set.insert("3");
      CmplxEvnt_91.add_attribute("PxBndryPrcsn", "7670257.110000"); // 2
      CmplxEvnt_91_set.insert("7670257.110000");
      CmplxEvnt_91.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_91_set.insert("3");
      CmplxEvnt_91.add_attribute("Cond", "2"); // 2
      CmplxEvnt_91_set.insert("2");
      all_values.push_back(CmplxEvnt_91_set);
      all_compo_names.insert("CmplxEvnt_91_set");

      {
        xml_element EvntDts_91{"EvntDts"};
        multiset<string> EvntDts_91_set;
        EvntDts_91.add_attribute("StartDt", "ComplexEventStartDate_t_1207835457"); // 3
        EvntDts_91_set.insert("ComplexEventStartDate_t_1207835457");
        EvntDts_91.add_attribute("EndDt", "ComplexEventEndDate_t_949406181"); // 3
        EvntDts_91_set.insert("ComplexEventEndDate_t_949406181");
        all_values.push_back(EvntDts_91_set);
        all_compo_names.insert("EvntDts_91_set");

        {
          xml_element EvntTms_91{"EvntTms"};
          multiset<string> EvntTms_91_set;
          EvntTms_91.add_attribute("StartTm", "732773463"); // 4
          EvntTms_91_set.insert("732773463");
          EvntTms_91.add_attribute("EndTm", "1838025397"); // 4
          EvntTms_91_set.insert("1838025397");
          all_values.push_back(EvntTms_91_set);
          all_compo_names.insert("EvntTms_91_set");

          EvntDts_91.add_element(EvntTms_91);
        }
        CmplxEvnt_91.add_element(EvntDts_91);
      }
      Instrmt_97.add_element(CmplxEvnt_91);
    }
    elt.add_element(Instrmt_97);
  } // end Instrmt
  { // Undly
    xml_element Undly_124{"Undly"};
    multiset<string> Undly_124_set;
    Undly_124.add_attribute("Sym", "UnderlyingSymbol_t_1683816575"); // 1
    Undly_124_set.insert("UnderlyingSymbol_t_1683816575");
    Undly_124.add_attribute("Sfx", "CD"); // 1
    Undly_124_set.insert("CD");
    Undly_124.add_attribute("ID", "UnderlyingSecurityID_t_283596114"); // 1
    Undly_124_set.insert("UnderlyingSecurityID_t_283596114");
    Undly_124.add_attribute("Src", "2"); // 1
    Undly_124_set.insert("2");
    Undly_124.add_attribute("Prod", "2"); // 1
    Undly_124_set.insert("2");
    Undly_124.add_attribute("CFI", "UnderlyingCFICode_t_1591830335"); // 1
    Undly_124_set.insert("UnderlyingCFICode_t_1591830335");
    Undly_124.add_attribute("SecTyp", "EUSOV"); // 1
    Undly_124_set.insert("EUSOV");
    Undly_124.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1633266064"); // 1
    Undly_124_set.insert("UnderlyingSecuritySubType_t_1633266064");
    Undly_124.add_attribute("MMY", "424125790"); // 1
    Undly_124_set.insert("424125790");
    Undly_124.add_attribute("Mat", "UnderlyingMaturityDate_t_1953998848"); // 1
    Undly_124_set.insert("UnderlyingMaturityDate_t_1953998848");
    Undly_124.add_attribute("MatTm", "1328630133"); // 1
    Undly_124_set.insert("1328630133");
    Undly_124.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1371164355"); // 1
    Undly_124_set.insert("UnderlyingCouponPaymentDate_t_1371164355");
    Undly_124.add_attribute("RestrctTyp", "MM"); // 1
    Undly_124_set.insert("MM");
    Undly_124.add_attribute("Snrty", "SB"); // 1
    Undly_124_set.insert("SB");
    Undly_124.add_attribute("NotlPctOut", "12944399.330000"); // 1
    Undly_124_set.insert("12944399.330000");
    Undly_124.add_attribute("OrigNotlPctOut", "9455250.340000"); // 1
    Undly_124_set.insert("9455250.340000");
    Undly_124.add_attribute("AttchPnt", "1424785.530000"); // 1
    Undly_124_set.insert("1424785.530000");
    Undly_124.add_attribute("DetchPnt", "15630193.430000"); // 1
    Undly_124_set.insert("15630193.430000");
    Undly_124.add_attribute("Issued", "UnderlyingIssueDate_t_1551906656"); // 1
    Undly_124_set.insert("UnderlyingIssueDate_t_1551906656");
    Undly_124.add_attribute("RepoCollSecTyp", "1525099519"); // 1
    Undly_124_set.insert("1525099519");
    Undly_124.add_attribute("RepoTrm", "553254346"); // 1
    Undly_124_set.insert("553254346");
    Undly_124.add_attribute("RepoRt", "15363643.210000"); // 1
    Undly_124_set.insert("15363643.210000");
    Undly_124.add_attribute("Fctr", "15232791.830000"); // 1
    Undly_124_set.insert("15232791.830000");
    Undly_124.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1320280057"); // 1
    Undly_124_set.insert("UnderlyingCreditRating_t_1320280057");
    Undly_124.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2037831603"); // 1
    Undly_124_set.insert("UnderlyingInstrRegistry_t_2037831603");
    Undly_124.add_attribute("Ctry", "182794907"); // 1
    Undly_124_set.insert("182794907");
    Undly_124.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_380631867"); // 1
    Undly_124_set.insert("UnderlyingStateOrProvinceOfIssue_t_380631867");
    Undly_124.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_839754137"); // 1
    Undly_124_set.insert("UnderlyingLocaleOfIssue_t_839754137");
    Undly_124.add_attribute("Redeem", "UnderlyingRedemptionDate_t_915568370"); // 1
    Undly_124_set.insert("UnderlyingRedemptionDate_t_915568370");
    Undly_124.add_attribute("StrkPx", "711736.160000"); // 1
    Undly_124_set.insert("711736.160000");
    Undly_124.add_attribute("StrkCcy", "USD"); // 1
    Undly_124_set.insert("USD");
    Undly_124.add_attribute("OptA", "1128993616"); // 1
    Undly_124_set.insert("1128993616");
    Undly_124.add_attribute("Mult", "11148328.700000"); // 1
    Undly_124_set.insert("11148328.700000");
    Undly_124.add_attribute("MultTyp", "1"); // 1
    Undly_124_set.insert("1");
    Undly_124.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_124_set.insert("2");
    Undly_124.add_attribute("UOM", "MMBtu"); // 1
    Undly_124_set.insert("MMBtu");
    Undly_124.add_attribute("UOMQty", "935370.480000"); // 1
    Undly_124_set.insert("935370.480000");
    Undly_124.add_attribute("PxUOM", "tn"); // 1
    Undly_124_set.insert("tn");
    Undly_124.add_attribute("PxUOMQty", "9833053.470000"); // 1
    Undly_124_set.insert("9833053.470000");
    Undly_124.add_attribute("TmUnit", "S"); // 1
    Undly_124_set.insert("S");
    Undly_124.add_attribute("ExerStyle", "2"); // 1
    Undly_124_set.insert("2");
    Undly_124.add_attribute("CpnRt", "2069860.540000"); // 1
    Undly_124_set.insert("2069860.540000");
    Undly_124.add_attribute("Exch", "UnderlyingSecurityExchange_t_725585798"); // 1
    Undly_124_set.insert("UnderlyingSecurityExchange_t_725585798");
    Undly_124.add_attribute("Issr", "UnderlyingIssuer_t_854681272"); // 1
    Undly_124_set.insert("UnderlyingIssuer_t_854681272");
    Undly_124.add_attribute("EncUndIssrLen", "1501425987"); // 1
    Undly_124_set.insert("1501425987");
    Undly_124.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1671110832"); // 1
    Undly_124_set.insert("EncodedUnderlyingIssuer_t_1671110832");
    Undly_124.add_attribute("Desc", "UnderlyingSecurityDesc_t_997159825"); // 1
    Undly_124_set.insert("UnderlyingSecurityDesc_t_997159825");
    Undly_124.add_attribute("EncUndSecDescLen", "916961683"); // 1
    Undly_124_set.insert("916961683");
    Undly_124.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1075533841"); // 1
    Undly_124_set.insert("EncodedUnderlyingSecurityDesc_t_1075533841");
    Undly_124.add_attribute("CPPgm", "UnderlyingCPProgram_t_374775697"); // 1
    Undly_124_set.insert("UnderlyingCPProgram_t_374775697");
    Undly_124.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1470216029"); // 1
    Undly_124_set.insert("UnderlyingCPRegType_t_1470216029");
    Undly_124.add_attribute("AllocPct", "4644145.140000"); // 1
    Undly_124_set.insert("4644145.140000");
    Undly_124.add_attribute("Ccy", "JPY"); // 1
    Undly_124_set.insert("JPY");
    Undly_124.add_attribute("Qty", "3547624.690000"); // 1
    Undly_124_set.insert("3547624.690000");
    Undly_124.add_attribute("SettlTyp", "5"); // 1
    Undly_124_set.insert("5");
    Undly_124.add_attribute("CashAmt", "UnderlyingCashAmount_t_1023644305"); // 1
    Undly_124_set.insert("UnderlyingCashAmount_t_1023644305");
    Undly_124.add_attribute("CashTyp", "FIXED"); // 1
    Undly_124_set.insert("FIXED");
    Undly_124.add_attribute("Px", "8489345.100000"); // 1
    Undly_124_set.insert("8489345.100000");
    Undly_124.add_attribute("DirtPx", "10948179.210000"); // 1
    Undly_124_set.insert("10948179.210000");
    Undly_124.add_attribute("EndPx", "20257533.620000"); // 1
    Undly_124_set.insert("20257533.620000");
    Undly_124.add_attribute("StartVal", "UnderlyingStartValue_t_1300835808"); // 1
    Undly_124_set.insert("UnderlyingStartValue_t_1300835808");
    Undly_124.add_attribute("CurVal", "UnderlyingCurrentValue_t_76327889"); // 1
    Undly_124_set.insert("UnderlyingCurrentValue_t_76327889");
    Undly_124.add_attribute("EndVal", "UnderlyingEndValue_t_993102584"); // 1
    Undly_124_set.insert("UnderlyingEndValue_t_993102584");
    Undly_124.add_attribute("AdjQty", "3935393.090000"); // 1
    Undly_124_set.insert("3935393.090000");
    Undly_124.add_attribute("FxRate", "16974106.660000"); // 1
    Undly_124_set.insert("16974106.660000");
    Undly_124.add_attribute("FxRateCalc", "D"); // 1
    Undly_124_set.insert("D");
    Undly_124.add_attribute("CapValu", "UnderlyingCapValue_t_487076357"); // 1
    Undly_124_set.insert("UnderlyingCapValue_t_487076357");
    Undly_124.add_attribute("SetMeth", "UnderlyingSettlMethod_t_656792211"); // 1
    Undly_124_set.insert("UnderlyingSettlMethod_t_656792211");
    Undly_124.add_attribute("PutCall", "388103840"); // 1
    Undly_124_set.insert("388103840");
    all_values.push_back(Undly_124_set);
    all_compo_names.insert("Undly_124_set");

    {
      xml_element UndAID_124{"UndAID"};
      multiset<string> UndAID_124_set;
      UndAID_124.add_attribute("AltID", "UnderlyingSecurityAltID_t_387128605"); // 2
      UndAID_124_set.insert("UnderlyingSecurityAltID_t_387128605");
      UndAID_124.add_attribute("AltIDSrc", "8"); // 2
      UndAID_124_set.insert("8");
      all_values.push_back(UndAID_124_set);
      all_compo_names.insert("UndAID_124_set");

      Undly_124.add_element(UndAID_124);
    }
    {
      xml_element Stip_201{"Stip"};
      multiset<string> Stip_201_set;
      Stip_201.add_attribute("Typ", "WAC"); // 2
      Stip_201_set.insert("WAC");
      Stip_201.add_attribute("Val", "UnderlyingStipValue_t_1112714403"); // 2
      Stip_201_set.insert("UnderlyingStipValue_t_1112714403");
      all_values.push_back(Stip_201_set);
      all_compo_names.insert("Stip_201_set");

      Undly_124.add_element(Stip_201);
    }
    {
      xml_element Pty_478{"Pty"};
      multiset<string> Pty_478_set;
      Pty_478.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1799485161"); // 2
      Pty_478_set.insert("UnderlyingInstrumentPartyID_t_1799485161");
      Pty_478.add_attribute("Src", "A"); // 2
      Pty_478_set.insert("A");
      Pty_478.add_attribute("R", "17"); // 2
      Pty_478_set.insert("17");
      all_values.push_back(Pty_478_set);
      all_compo_names.insert("Pty_478_set");

      {
        xml_element Sub_478{"Sub"};
        multiset<string> Sub_478_set;
        Sub_478.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_649161339"); // 3
        Sub_478_set.insert("UnderlyingInstrumentPartySubID_t_649161339");
        Sub_478.add_attribute("Typ", "30"); // 3
        Sub_478_set.insert("30");
        all_values.push_back(Sub_478_set);
        all_compo_names.insert("Sub_478_set");

        Pty_478.add_element(Sub_478);
      }
      Undly_124.add_element(Pty_478);
    }
    elt.add_element(Undly_124);
  } // end Undly
  { // Undly
    xml_element Undly_125{"Undly"};
    multiset<string> Undly_125_set;
    Undly_125.add_attribute("Sym", "UnderlyingSymbol_t_1711875429"); // 1
    Undly_125_set.insert("UnderlyingSymbol_t_1711875429");
    Undly_125.add_attribute("Sfx", "CD"); // 1
    Undly_125_set.insert("CD");
    Undly_125.add_attribute("ID", "UnderlyingSecurityID_t_188726297"); // 1
    Undly_125_set.insert("UnderlyingSecurityID_t_188726297");
    Undly_125.add_attribute("Src", "2"); // 1
    Undly_125_set.insert("2");
    Undly_125.add_attribute("Prod", "10"); // 1
    Undly_125_set.insert("10");
    Undly_125.add_attribute("CFI", "UnderlyingCFICode_t_831738736"); // 1
    Undly_125_set.insert("UnderlyingCFICode_t_831738736");
    Undly_125.add_attribute("SecTyp", "VRDN"); // 1
    Undly_125_set.insert("VRDN");
    Undly_125.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_707874408"); // 1
    Undly_125_set.insert("UnderlyingSecuritySubType_t_707874408");
    Undly_125.add_attribute("MMY", "1855383041"); // 1
    Undly_125_set.insert("1855383041");
    Undly_125.add_attribute("Mat", "UnderlyingMaturityDate_t_1578085371"); // 1
    Undly_125_set.insert("UnderlyingMaturityDate_t_1578085371");
    Undly_125.add_attribute("MatTm", "1556808918"); // 1
    Undly_125_set.insert("1556808918");
    Undly_125.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_802717315"); // 1
    Undly_125_set.insert("UnderlyingCouponPaymentDate_t_802717315");
    Undly_125.add_attribute("RestrctTyp", "MR"); // 1
    Undly_125_set.insert("MR");
    Undly_125.add_attribute("Snrty", "SR"); // 1
    Undly_125_set.insert("SR");
    Undly_125.add_attribute("NotlPctOut", "8790452.040000"); // 1
    Undly_125_set.insert("8790452.040000");
    Undly_125.add_attribute("OrigNotlPctOut", "3019740.210000"); // 1
    Undly_125_set.insert("3019740.210000");
    Undly_125.add_attribute("AttchPnt", "11037003.870000"); // 1
    Undly_125_set.insert("11037003.870000");
    Undly_125.add_attribute("DetchPnt", "4289722.230000"); // 1
    Undly_125_set.insert("4289722.230000");
    Undly_125.add_attribute("Issued", "UnderlyingIssueDate_t_1854256162"); // 1
    Undly_125_set.insert("UnderlyingIssueDate_t_1854256162");
    Undly_125.add_attribute("RepoCollSecTyp", "1590776744"); // 1
    Undly_125_set.insert("1590776744");
    Undly_125.add_attribute("RepoTrm", "1085764434"); // 1
    Undly_125_set.insert("1085764434");
    Undly_125.add_attribute("RepoRt", "948763.540000"); // 1
    Undly_125_set.insert("948763.540000");
    Undly_125.add_attribute("Fctr", "19779053.490000"); // 1
    Undly_125_set.insert("19779053.490000");
    Undly_125.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2030568324"); // 1
    Undly_125_set.insert("UnderlyingCreditRating_t_2030568324");
    Undly_125.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_689966248"); // 1
    Undly_125_set.insert("UnderlyingInstrRegistry_t_689966248");
    Undly_125.add_attribute("Ctry", "943136104"); // 1
    Undly_125_set.insert("943136104");
    Undly_125.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1682569837"); // 1
    Undly_125_set.insert("UnderlyingStateOrProvinceOfIssue_t_1682569837");
    Undly_125.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_638998481"); // 1
    Undly_125_set.insert("UnderlyingLocaleOfIssue_t_638998481");
    Undly_125.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1579477692"); // 1
    Undly_125_set.insert("UnderlyingRedemptionDate_t_1579477692");
    Undly_125.add_attribute("StrkPx", "1842475.280000"); // 1
    Undly_125_set.insert("1842475.280000");
    Undly_125.add_attribute("StrkCcy", "EUR"); // 1
    Undly_125_set.insert("EUR");
    Undly_125.add_attribute("OptA", "1208184564"); // 1
    Undly_125_set.insert("1208184564");
    Undly_125.add_attribute("Mult", "16937186.950000"); // 1
    Undly_125_set.insert("16937186.950000");
    Undly_125.add_attribute("MultTyp", "2"); // 1
    Undly_125_set.insert("2");
    Undly_125.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_125_set.insert("3");
    Undly_125.add_attribute("UOM", "tn"); // 1
    Undly_125_set.insert("tn");
    Undly_125.add_attribute("UOMQty", "15562445.330000"); // 1
    Undly_125_set.insert("15562445.330000");
    Undly_125.add_attribute("PxUOM", "MWh"); // 1
    Undly_125_set.insert("MWh");
    Undly_125.add_attribute("PxUOMQty", "858731.770000"); // 1
    Undly_125_set.insert("858731.770000");
    Undly_125.add_attribute("TmUnit", "Wk"); // 1
    Undly_125_set.insert("Wk");
    Undly_125.add_attribute("ExerStyle", "1"); // 1
    Undly_125_set.insert("1");
    Undly_125.add_attribute("CpnRt", "8885904.920000"); // 1
    Undly_125_set.insert("8885904.920000");
    Undly_125.add_attribute("Exch", "UnderlyingSecurityExchange_t_295717693"); // 1
    Undly_125_set.insert("UnderlyingSecurityExchange_t_295717693");
    Undly_125.add_attribute("Issr", "UnderlyingIssuer_t_662569941"); // 1
    Undly_125_set.insert("UnderlyingIssuer_t_662569941");
    Undly_125.add_attribute("EncUndIssrLen", "1767635696"); // 1
    Undly_125_set.insert("1767635696");
    Undly_125.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_597691714"); // 1
    Undly_125_set.insert("EncodedUnderlyingIssuer_t_597691714");
    Undly_125.add_attribute("Desc", "UnderlyingSecurityDesc_t_1766270328"); // 1
    Undly_125_set.insert("UnderlyingSecurityDesc_t_1766270328");
    Undly_125.add_attribute("EncUndSecDescLen", "49124271"); // 1
    Undly_125_set.insert("49124271");
    Undly_125.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_304464228"); // 1
    Undly_125_set.insert("EncodedUnderlyingSecurityDesc_t_304464228");
    Undly_125.add_attribute("CPPgm", "UnderlyingCPProgram_t_1209563424"); // 1
    Undly_125_set.insert("UnderlyingCPProgram_t_1209563424");
    Undly_125.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1134888706"); // 1
    Undly_125_set.insert("UnderlyingCPRegType_t_1134888706");
    Undly_125.add_attribute("AllocPct", "3993405.820000"); // 1
    Undly_125_set.insert("3993405.820000");
    Undly_125.add_attribute("Ccy", "GBP"); // 1
    Undly_125_set.insert("GBP");
    Undly_125.add_attribute("Qty", "10893068.300000"); // 1
    Undly_125_set.insert("10893068.300000");
    Undly_125.add_attribute("SettlTyp", "5"); // 1
    Undly_125_set.insert("5");
    Undly_125.add_attribute("CashAmt", "UnderlyingCashAmount_t_553059571"); // 1
    Undly_125_set.insert("UnderlyingCashAmount_t_553059571");
    Undly_125.add_attribute("CashTyp", "DIFF"); // 1
    Undly_125_set.insert("DIFF");
    Undly_125.add_attribute("Px", "14151152.740000"); // 1
    Undly_125_set.insert("14151152.740000");
    Undly_125.add_attribute("DirtPx", "7373071.000000"); // 1
    Undly_125_set.insert("7373071.000000");
    Undly_125.add_attribute("EndPx", "10858140.610000"); // 1
    Undly_125_set.insert("10858140.610000");
    Undly_125.add_attribute("StartVal", "UnderlyingStartValue_t_411501099"); // 1
    Undly_125_set.insert("UnderlyingStartValue_t_411501099");
    Undly_125.add_attribute("CurVal", "UnderlyingCurrentValue_t_1945491664"); // 1
    Undly_125_set.insert("UnderlyingCurrentValue_t_1945491664");
    Undly_125.add_attribute("EndVal", "UnderlyingEndValue_t_632049109"); // 1
    Undly_125_set.insert("UnderlyingEndValue_t_632049109");
    Undly_125.add_attribute("AdjQty", "15841768.680000"); // 1
    Undly_125_set.insert("15841768.680000");
    Undly_125.add_attribute("FxRate", "17807008.490000"); // 1
    Undly_125_set.insert("17807008.490000");
    Undly_125.add_attribute("FxRateCalc", "M"); // 1
    Undly_125_set.insert("M");
    Undly_125.add_attribute("CapValu", "UnderlyingCapValue_t_992937753"); // 1
    Undly_125_set.insert("UnderlyingCapValue_t_992937753");
    Undly_125.add_attribute("SetMeth", "UnderlyingSettlMethod_t_176300794"); // 1
    Undly_125_set.insert("UnderlyingSettlMethod_t_176300794");
    Undly_125.add_attribute("PutCall", "1095896069"); // 1
    Undly_125_set.insert("1095896069");
    all_values.push_back(Undly_125_set);
    all_compo_names.insert("Undly_125_set");

    {
      xml_element UndAID_125{"UndAID"};
      multiset<string> UndAID_125_set;
      UndAID_125.add_attribute("AltID", "UnderlyingSecurityAltID_t_1979784009"); // 2
      UndAID_125_set.insert("UnderlyingSecurityAltID_t_1979784009");
      UndAID_125.add_attribute("AltIDSrc", "M"); // 2
      UndAID_125_set.insert("M");
      all_values.push_back(UndAID_125_set);
      all_compo_names.insert("UndAID_125_set");

      Undly_125.add_element(UndAID_125);
    }
    {
      xml_element Stip_202{"Stip"};
      multiset<string> Stip_202_set;
      Stip_202.add_attribute("Typ", "AMT"); // 2
      Stip_202_set.insert("AMT");
      Stip_202.add_attribute("Val", "UnderlyingStipValue_t_128018054"); // 2
      Stip_202_set.insert("UnderlyingStipValue_t_128018054");
      all_values.push_back(Stip_202_set);
      all_compo_names.insert("Stip_202_set");

      Undly_125.add_element(Stip_202);
    }
    {
      xml_element Pty_479{"Pty"};
      multiset<string> Pty_479_set;
      Pty_479.add_attribute("ID", "UnderlyingInstrumentPartyID_t_791279598"); // 2
      Pty_479_set.insert("UnderlyingInstrumentPartyID_t_791279598");
      Pty_479.add_attribute("Src", "9"); // 2
      Pty_479_set.insert("9");
      Pty_479.add_attribute("R", "1"); // 2
      Pty_479_set.insert("1");
      all_values.push_back(Pty_479_set);
      all_compo_names.insert("Pty_479_set");

      {
        xml_element Sub_479{"Sub"};
        multiset<string> Sub_479_set;
        Sub_479.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_410066278"); // 3
        Sub_479_set.insert("UnderlyingInstrumentPartySubID_t_410066278");
        Sub_479.add_attribute("Typ", "7"); // 3
        Sub_479_set.insert("7");
        all_values.push_back(Sub_479_set);
        all_compo_names.insert("Sub_479_set");

        Pty_479.add_element(Sub_479);
      }
      Undly_125.add_element(Pty_479);
    }
    elt.add_element(Undly_125);
  } // end Undly
  { // Leg
    xml_element Leg_110{"Leg"};
    multiset<string> Leg_110_set;
    Leg_110.add_attribute("Sym", "LegSymbol_t_1619629702"); // 1
    Leg_110_set.insert("LegSymbol_t_1619629702");
    Leg_110.add_attribute("Sfx", "WI"); // 1
    Leg_110_set.insert("WI");
    Leg_110.add_attribute("ID", "LegSecurityID_t_1429514578"); // 1
    Leg_110_set.insert("LegSecurityID_t_1429514578");
    Leg_110.add_attribute("Src", "M"); // 1
    Leg_110_set.insert("M");
    Leg_110.add_attribute("Prod", "3"); // 1
    Leg_110_set.insert("3");
    Leg_110.add_attribute("CFI", "LegCFICode_t_371337760"); // 1
    Leg_110_set.insert("LegCFICode_t_371337760");
    Leg_110.add_attribute("SecTyp", "CDS"); // 1
    Leg_110_set.insert("CDS");
    Leg_110.add_attribute("SecSubTyp", "LegSecuritySubType_t_64717245"); // 1
    Leg_110_set.insert("LegSecuritySubType_t_64717245");
    Leg_110.add_attribute("MMY", "2099643071"); // 1
    Leg_110_set.insert("2099643071");
    Leg_110.add_attribute("Mat", "LegMaturityDate_t_1762884035"); // 1
    Leg_110_set.insert("LegMaturityDate_t_1762884035");
    Leg_110.add_attribute("MatTm", "802024345"); // 1
    Leg_110_set.insert("802024345");
    Leg_110.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1037973485"); // 1
    Leg_110_set.insert("LegCouponPaymentDate_t_1037973485");
    Leg_110.add_attribute("Issued", "LegIssueDate_t_26901486"); // 1
    Leg_110_set.insert("LegIssueDate_t_26901486");
    Leg_110.add_attribute("RepoCollSecTyp", "600032361"); // 1
    Leg_110_set.insert("600032361");
    Leg_110.add_attribute("RepoTrm", "1670022594"); // 1
    Leg_110_set.insert("1670022594");
    Leg_110.add_attribute("RepoRt", "16110783.540000"); // 1
    Leg_110_set.insert("16110783.540000");
    Leg_110.add_attribute("Fctr", "2332495.630000"); // 1
    Leg_110_set.insert("2332495.630000");
    Leg_110.add_attribute("CrdRtg", "LegCreditRating_t_532561838"); // 1
    Leg_110_set.insert("LegCreditRating_t_532561838");
    Leg_110.add_attribute("Rgstry", "LegInstrRegistry_t_456532459"); // 1
    Leg_110_set.insert("LegInstrRegistry_t_456532459");
    Leg_110.add_attribute("Ctry", "409550357"); // 1
    Leg_110_set.insert("409550357");
    Leg_110.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1628457908"); // 1
    Leg_110_set.insert("LegStateOrProvinceOfIssue_t_1628457908");
    Leg_110.add_attribute("Lcl", "LegLocaleOfIssue_t_288832820"); // 1
    Leg_110_set.insert("LegLocaleOfIssue_t_288832820");
    Leg_110.add_attribute("Redeem", "LegRedemptionDate_t_538260015"); // 1
    Leg_110_set.insert("LegRedemptionDate_t_538260015");
    Leg_110.add_attribute("Strk", "14654608.210000"); // 1
    Leg_110_set.insert("14654608.210000");
    Leg_110.add_attribute("StrkCcy", "CHF"); // 1
    Leg_110_set.insert("CHF");
    Leg_110.add_attribute("OptA", "922615783"); // 1
    Leg_110_set.insert("922615783");
    Leg_110.add_attribute("Cmult", "11425606.420000"); // 1
    Leg_110_set.insert("11425606.420000");
    Leg_110.add_attribute("MultTyp", "2"); // 1
    Leg_110_set.insert("2");
    Leg_110.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_110_set.insert("2");
    Leg_110.add_attribute("UOM", "Bu"); // 1
    Leg_110_set.insert("Bu");
    Leg_110.add_attribute("UOMQty", "12117519.460000"); // 1
    Leg_110_set.insert("12117519.460000");
    Leg_110.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_110_set.insert("MMBtu");
    Leg_110.add_attribute("PxUOMQty", "14547655.680000"); // 1
    Leg_110_set.insert("14547655.680000");
    Leg_110.add_attribute("TmUnit", "S"); // 1
    Leg_110_set.insert("S");
    Leg_110.add_attribute("ExerStyle", "2"); // 1
    Leg_110_set.insert("2");
    Leg_110.add_attribute("CpnRt", "18261033.280000"); // 1
    Leg_110_set.insert("18261033.280000");
    Leg_110.add_attribute("Exch", "LegSecurityExchange_t_2071651887"); // 1
    Leg_110_set.insert("LegSecurityExchange_t_2071651887");
    Leg_110.add_attribute("Issr", "LegIssuer_t_646437875"); // 1
    Leg_110_set.insert("LegIssuer_t_646437875");
    Leg_110.add_attribute("EncLegIssrLen", "1778262752"); // 1
    Leg_110_set.insert("1778262752");
    Leg_110.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1687052274"); // 1
    Leg_110_set.insert("EncodedLegIssuer_t_1687052274");
    Leg_110.add_attribute("Desc", "LegSecurityDesc_t_1448462220"); // 1
    Leg_110_set.insert("LegSecurityDesc_t_1448462220");
    Leg_110.add_attribute("EncLegSecDescLen", "668752589"); // 1
    Leg_110_set.insert("668752589");
    Leg_110.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1713953760"); // 1
    Leg_110_set.insert("EncodedLegSecurityDesc_t_1713953760");
    Leg_110.add_attribute("RatioQty", "20484945.810000"); // 1
    Leg_110_set.insert("20484945.810000");
    Leg_110.add_attribute("Side", "G"); // 1
    Leg_110_set.insert("G");
    Leg_110.add_attribute("Ccy", "GBP"); // 1
    Leg_110_set.insert("GBP");
    Leg_110.add_attribute("Pool", "LegPool_t_723853373"); // 1
    Leg_110_set.insert("LegPool_t_723853373");
    Leg_110.add_attribute("Dated", "LegDatedDate_t_1634080926"); // 1
    Leg_110_set.insert("LegDatedDate_t_1634080926");
    Leg_110.add_attribute("CSetMo", "543810854"); // 1
    Leg_110_set.insert("543810854");
    Leg_110.add_attribute("IntAcrl", "LegInterestAccrualDate_t_204827633"); // 1
    Leg_110_set.insert("LegInterestAccrualDate_t_204827633");
    Leg_110.add_attribute("PutCall", "1922913747"); // 1
    Leg_110_set.insert("1922913747");
    Leg_110.add_attribute("LegOptionRatio", "10820708.690000"); // 1
    Leg_110_set.insert("10820708.690000");
    Leg_110.add_attribute("Px", "16702884.550000"); // 1
    Leg_110_set.insert("16702884.550000");
    all_values.push_back(Leg_110_set);
    all_compo_names.insert("Leg_110_set");

    {
      xml_element LegAID_105{"LegAID"};
      multiset<string> LegAID_105_set;
      LegAID_105.add_attribute("SecAltID", "LegSecurityAltID_t_192280973"); // 2
      LegAID_105_set.insert("LegSecurityAltID_t_192280973");
      LegAID_105.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_105_set.insert("5");
      all_values.push_back(LegAID_105_set);
      all_compo_names.insert("LegAID_105_set");

      Leg_110.add_element(LegAID_105);
    }
    elt.add_element(Leg_110);
  } // end Leg
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
