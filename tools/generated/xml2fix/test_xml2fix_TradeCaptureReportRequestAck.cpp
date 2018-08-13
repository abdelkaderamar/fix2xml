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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"TrdCaptRptReqAck" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> TradeCaptureReportRequestAck_message_t_0;
  elt.add_attribute("ReqID", "TradeRequestID_t_2128971459"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("TradeRequestID_t_2128971459");
  elt.add_attribute("TrdID", "TradeID_t_374296692"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("TradeID_t_374296692");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_910871110"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("SecondaryTradeID_t_910871110");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_912042241"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("FirmTradeID_t_912042241");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_789515157"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("SecondaryFirmTradeID_t_789515157");
  elt.add_attribute("ReqTyp", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("SubReqTyp", "0"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("0");
  elt.add_attribute("TotNumTrdRpts", "1249838086"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1249838086");
  elt.add_attribute("ReqRslt", "5"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("5");
  elt.add_attribute("ReqStat", "2"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("2");
  elt.add_attribute("MLegRptTyp", "3"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("3");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_160219929"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("ResponseDestination_t_160219929");
  elt.add_attribute("Txt", "Text_t_1539993943"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("Text_t_1539993943");
  elt.add_attribute("EncTxtLen", "1761559413"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1761559413");
  elt.add_attribute("EncTxt", "EncodedText_t_1228044182"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("EncodedText_t_1228044182");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_2099739930"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("MessageEventSource_t_2099739930");
  all_values.push_back(TradeCaptureReportRequestAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequestAck_message_t");

  { // Hdr
    xml_element Hdr_99{"Hdr"};
    multiset<string> Hdr_99_set;
    Hdr_99.add_attribute("SeqNum", "1107730375"); // 1
    Hdr_99_set.insert("1107730375");
    Hdr_99.add_attribute("SID", "SenderCompID_t_1497200169"); // 1
    Hdr_99_set.insert("SenderCompID_t_1497200169");
    Hdr_99.add_attribute("TID", "TargetCompID_t_1094779687"); // 1
    Hdr_99_set.insert("TargetCompID_t_1094779687");
    Hdr_99.add_attribute("OBID", "OnBehalfOfCompID_t_1311572105"); // 1
    Hdr_99_set.insert("OnBehalfOfCompID_t_1311572105");
    Hdr_99.add_attribute("D2ID", "DeliverToCompID_t_610089678"); // 1
    Hdr_99_set.insert("DeliverToCompID_t_610089678");
    Hdr_99.add_attribute("SSub", "SenderSubID_t_1114793664"); // 1
    Hdr_99_set.insert("SenderSubID_t_1114793664");
    Hdr_99.add_attribute("SLoc", "SenderLocationID_t_1419418455"); // 1
    Hdr_99_set.insert("SenderLocationID_t_1419418455");
    Hdr_99.add_attribute("TSub", "TargetSubID_t_1559768023"); // 1
    Hdr_99_set.insert("TargetSubID_t_1559768023");
    Hdr_99.add_attribute("TLoc", "TargetLocationID_t_1131809666"); // 1
    Hdr_99_set.insert("TargetLocationID_t_1131809666");
    Hdr_99.add_attribute("OBSub", "OnBehalfOfSubID_t_1531570214"); // 1
    Hdr_99_set.insert("OnBehalfOfSubID_t_1531570214");
    Hdr_99.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2128963838"); // 1
    Hdr_99_set.insert("OnBehalfOfLocationID_t_2128963838");
    Hdr_99.add_attribute("D2Sub", "DeliverToSubID_t_160524618"); // 1
    Hdr_99_set.insert("DeliverToSubID_t_160524618");
    Hdr_99.add_attribute("D2Loc", "DeliverToLocationID_t_1322390918"); // 1
    Hdr_99_set.insert("DeliverToLocationID_t_1322390918");
    Hdr_99.add_attribute("PosDup", "N"); // 1
    Hdr_99_set.insert("N");
    Hdr_99.add_attribute("PosRsnd", "Y"); // 1
    Hdr_99_set.insert("Y");
    Hdr_99.add_attribute("Snt", "SendingTime_t_1696687610"); // 1
    Hdr_99_set.insert("SendingTime_t_1696687610");
    Hdr_99.add_attribute("OrigSnt", "OrigSendingTime_t_254614404"); // 1
    Hdr_99_set.insert("OrigSendingTime_t_254614404");
    Hdr_99.add_attribute("MsgEncd", "MessageEncoding_t_1054054671"); // 1
    Hdr_99_set.insert("MessageEncoding_t_1054054671");
    all_values.push_back(Hdr_99_set);
    all_compo_names.insert("Hdr_99_set");

    {
      xml_element Hop_99{"Hop"};
      multiset<string> Hop_99_set;
      Hop_99.add_attribute("ID", "HopCompID_t_338719119"); // 2
      Hop_99_set.insert("HopCompID_t_338719119");
      Hop_99.add_attribute("Ref", "613541421"); // 2
      Hop_99_set.insert("613541421");
      Hop_99.add_attribute("Snt", "HopSendingTime_t_2032640601"); // 2
      Hop_99_set.insert("HopSendingTime_t_2032640601");
      all_values.push_back(Hop_99_set);
      all_compo_names.insert("Hop_99_set");

      Hdr_99.add_element(Hop_99);
    }
    elt.add_element(Hdr_99);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_94{"Instrmt"};
    multiset<string> Instrmt_94_set;
    Instrmt_94.add_attribute("Sym", "Symbol_t_1588557205"); // 1
    Instrmt_94_set.insert("Symbol_t_1588557205");
    Instrmt_94.add_attribute("Sfx", "CD"); // 1
    Instrmt_94_set.insert("CD");
    Instrmt_94.add_attribute("ID", "SecurityID_t_1980662925"); // 1
    Instrmt_94_set.insert("SecurityID_t_1980662925");
    Instrmt_94.add_attribute("Src", "B"); // 1
    Instrmt_94_set.insert("B");
    Instrmt_94.add_attribute("Prod", "4"); // 1
    Instrmt_94_set.insert("4");
    Instrmt_94.add_attribute("ProdCmplx", "ProductComplex_t_2140882854"); // 1
    Instrmt_94_set.insert("ProductComplex_t_2140882854");
    Instrmt_94.add_attribute("SecGrp", "SecurityGroup_t_226183101"); // 1
    Instrmt_94_set.insert("SecurityGroup_t_226183101");
    Instrmt_94.add_attribute("CFI", "CFICode_t_143800851"); // 1
    Instrmt_94_set.insert("CFICode_t_143800851");
    Instrmt_94.add_attribute("SecTyp", "CS"); // 1
    Instrmt_94_set.insert("CS");
    Instrmt_94.add_attribute("SubTyp", "SecuritySubType_t_178439384"); // 1
    Instrmt_94_set.insert("SecuritySubType_t_178439384");
    Instrmt_94.add_attribute("MMY", "1251531227"); // 1
    Instrmt_94_set.insert("1251531227");
    Instrmt_94.add_attribute("MatDt", "MaturityDate_t_571159910"); // 1
    Instrmt_94_set.insert("MaturityDate_t_571159910");
    Instrmt_94.add_attribute("MatTm", "1273219071"); // 1
    Instrmt_94_set.insert("1273219071");
    Instrmt_94.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_415619684"); // 1
    Instrmt_94_set.insert("SettleOnOpenFlag_t_415619684");
    Instrmt_94.add_attribute("AsgnMeth", "1181249588"); // 1
    Instrmt_94_set.insert("1181249588");
    Instrmt_94.add_attribute("Status", "1"); // 1
    Instrmt_94_set.insert("1");
    Instrmt_94.add_attribute("CpnPmt", "CouponPaymentDate_t_1835038139"); // 1
    Instrmt_94_set.insert("CouponPaymentDate_t_1835038139");
    Instrmt_94.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_94_set.insert("XR");
    Instrmt_94.add_attribute("Snrty", "SR"); // 1
    Instrmt_94_set.insert("SR");
    Instrmt_94.add_attribute("NotlPctOut", "12191247.050000"); // 1
    Instrmt_94_set.insert("12191247.050000");
    Instrmt_94.add_attribute("OrigNotlPctOut", "5750141.530000"); // 1
    Instrmt_94_set.insert("5750141.530000");
    Instrmt_94.add_attribute("AttchPnt", "15328633.720000"); // 1
    Instrmt_94_set.insert("15328633.720000");
    Instrmt_94.add_attribute("DetchPnt", "3940319.750000"); // 1
    Instrmt_94_set.insert("3940319.750000");
    Instrmt_94.add_attribute("Issued", "IssueDate_t_2066241096"); // 1
    Instrmt_94_set.insert("IssueDate_t_2066241096");
    Instrmt_94.add_attribute("RepoCollSecTyp", "1674875801"); // 1
    Instrmt_94_set.insert("1674875801");
    Instrmt_94.add_attribute("RepoTrm", "2090719585"); // 1
    Instrmt_94_set.insert("2090719585");
    Instrmt_94.add_attribute("RepoRt", "1733718.520000"); // 1
    Instrmt_94_set.insert("1733718.520000");
    Instrmt_94.add_attribute("Fctr", "5814468.240000"); // 1
    Instrmt_94_set.insert("5814468.240000");
    Instrmt_94.add_attribute("CrdRtg", "CreditRating_t_281955056"); // 1
    Instrmt_94_set.insert("CreditRating_t_281955056");
    Instrmt_94.add_attribute("Rgstry", "InstrRegistry_t_786913273"); // 1
    Instrmt_94_set.insert("InstrRegistry_t_786913273");
    Instrmt_94.add_attribute("IssuCtry", "466603777"); // 1
    Instrmt_94_set.insert("466603777");
    Instrmt_94.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1870512262"); // 1
    Instrmt_94_set.insert("StateOrProvinceOfIssue_t_1870512262");
    Instrmt_94.add_attribute("Lcl", "LocaleOfIssue_t_1928900032"); // 1
    Instrmt_94_set.insert("LocaleOfIssue_t_1928900032");
    Instrmt_94.add_attribute("Redeem", "RedemptionDate_t_299783055"); // 1
    Instrmt_94_set.insert("RedemptionDate_t_299783055");
    Instrmt_94.add_attribute("StrkPx", "5567014.200000"); // 1
    Instrmt_94_set.insert("5567014.200000");
    Instrmt_94.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_94_set.insert("EUR");
    Instrmt_94.add_attribute("StrkMult", "7828845.220000"); // 1
    Instrmt_94_set.insert("7828845.220000");
    Instrmt_94.add_attribute("StrkValu", "4549423.210000"); // 1
    Instrmt_94_set.insert("4549423.210000");
    Instrmt_94.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_94_set.insert("3");
    Instrmt_94.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_94_set.insert("2");
    Instrmt_94.add_attribute("StrkPxBndryPrcsn", "17064735.480000"); // 1
    Instrmt_94_set.insert("17064735.480000");
    Instrmt_94.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_94_set.insert("1");
    Instrmt_94.add_attribute("OptAt", "87059329"); // 1
    Instrmt_94_set.insert("87059329");
    Instrmt_94.add_attribute("Mult", "21220932.320000"); // 1
    Instrmt_94_set.insert("21220932.320000");
    Instrmt_94.add_attribute("MultTyp", "1"); // 1
    Instrmt_94_set.insert("1");
    Instrmt_94.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_94_set.insert("2");
    Instrmt_94.add_attribute("MinPxIncr", "18096477.230000"); // 1
    Instrmt_94_set.insert("18096477.230000");
    Instrmt_94.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1713085463"); // 1
    Instrmt_94_set.insert("MinPriceIncrementAmount_t_1713085463");
    Instrmt_94.add_attribute("UOM", "lbs"); // 1
    Instrmt_94_set.insert("lbs");
    Instrmt_94.add_attribute("UOMQty", "8812887.800000"); // 1
    Instrmt_94_set.insert("8812887.800000");
    Instrmt_94.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_94_set.insert("MWh");
    Instrmt_94.add_attribute("PxUOMQty", "10853068.950000"); // 1
    Instrmt_94_set.insert("10853068.950000");
    Instrmt_94.add_attribute("SettlMeth", "P"); // 1
    Instrmt_94_set.insert("P");
    Instrmt_94.add_attribute("ExerStyle", "0"); // 1
    Instrmt_94_set.insert("0");
    Instrmt_94.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_94_set.insert("2");
    Instrmt_94.add_attribute("OptPayAmt", "OptPayoutAmount_t_1218556692"); // 1
    Instrmt_94_set.insert("OptPayoutAmount_t_1218556692");
    Instrmt_94.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_94_set.insert("INX");
    Instrmt_94.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_94_set.insert("CDS");
    Instrmt_94.add_attribute("ListMeth", "1"); // 1
    Instrmt_94_set.insert("1");
    Instrmt_94.add_attribute("CapPx", "10196585.430000"); // 1
    Instrmt_94_set.insert("10196585.430000");
    Instrmt_94.add_attribute("FlrPx", "16607496.510000"); // 1
    Instrmt_94_set.insert("16607496.510000");
    Instrmt_94.add_attribute("PutCall", "1"); // 1
    Instrmt_94_set.insert("1");
    Instrmt_94.add_attribute("FlexInd", "false"); // 1
    Instrmt_94_set.insert("false");
    Instrmt_94.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_94_set.insert("true");
    Instrmt_94.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_94_set.insert("Mo");
    Instrmt_94.add_attribute("CpnRt", "11122163.970000"); // 1
    Instrmt_94_set.insert("11122163.970000");
    Instrmt_94.add_attribute("Exch", "SecurityExchange_t_106231319"); // 1
    Instrmt_94_set.insert("SecurityExchange_t_106231319");
    Instrmt_94.add_attribute("PosLmt", "415642657"); // 1
    Instrmt_94_set.insert("415642657");
    Instrmt_94.add_attribute("NTPosLmt", "1567158718"); // 1
    Instrmt_94_set.insert("1567158718");
    Instrmt_94.add_attribute("Issr", "Issuer_t_1620856970"); // 1
    Instrmt_94_set.insert("Issuer_t_1620856970");
    Instrmt_94.add_attribute("EncIssrLen", "1376966563"); // 1
    Instrmt_94_set.insert("1376966563");
    Instrmt_94.add_attribute("EncIssr", "EncodedIssuer_t_1126148619"); // 1
    Instrmt_94_set.insert("EncodedIssuer_t_1126148619");
    Instrmt_94.add_attribute("Desc", "SecurityDesc_t_1559158882"); // 1
    Instrmt_94_set.insert("SecurityDesc_t_1559158882");
    Instrmt_94.add_attribute("EncSecDescLen", "1464025893"); // 1
    Instrmt_94_set.insert("1464025893");
    Instrmt_94.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1100758203"); // 1
    Instrmt_94_set.insert("EncodedSecurityDesc_t_1100758203");
    Instrmt_94.add_attribute("Pool", "Pool_t_531226735"); // 1
    Instrmt_94_set.insert("Pool_t_531226735");
    Instrmt_94.add_attribute("CSetMo", "1791614310"); // 1
    Instrmt_94_set.insert("1791614310");
    Instrmt_94.add_attribute("CPPgm", "2"); // 1
    Instrmt_94_set.insert("2");
    Instrmt_94.add_attribute("CPRegT", "CPRegType_t_96828550"); // 1
    Instrmt_94_set.insert("CPRegType_t_96828550");
    Instrmt_94.add_attribute("Dated", "DatedDate_t_1344057834"); // 1
    Instrmt_94_set.insert("DatedDate_t_1344057834");
    Instrmt_94.add_attribute("IntAcrl", "InterestAccrualDate_t_1644211059"); // 1
    Instrmt_94_set.insert("InterestAccrualDate_t_1644211059");
    all_values.push_back(Instrmt_94_set);
    all_compo_names.insert("Instrmt_94_set");

    {
      xml_element AID_97{"AID"};
      multiset<string> AID_97_set;
      AID_97.add_attribute("AltID", "SecurityAltID_t_237444519"); // 2
      AID_97_set.insert("SecurityAltID_t_237444519");
      AID_97.add_attribute("AltIDSrc", "A"); // 2
      AID_97_set.insert("A");
      all_values.push_back(AID_97_set);
      all_compo_names.insert("AID_97_set");

      Instrmt_94.add_element(AID_97);
    }
    {
      xml_element SecXML_92{"SecXML"};
      multiset<string> SecXML_92_set;
      SecXML_92.add_attribute("Schema", "SecurityXMLSchema_t_772048167"); // 2
      SecXML_92_set.insert("SecurityXMLSchema_t_772048167");
      all_values.push_back(SecXML_92_set);
      all_compo_names.insert("SecXML_92_set");

      Instrmt_94.add_element(SecXML_92);
    }
    {
      xml_element Evnt_92{"Evnt"};
      multiset<string> Evnt_92_set;
      Evnt_92.add_attribute("EventTyp", "16"); // 2
      Evnt_92_set.insert("16");
      Evnt_92.add_attribute("Dt", "EventDate_t_894580130"); // 2
      Evnt_92_set.insert("EventDate_t_894580130");
      Evnt_92.add_attribute("Tm", "EventTime_t_1990604859"); // 2
      Evnt_92_set.insert("EventTime_t_1990604859");
      Evnt_92.add_attribute("Px", "5295632.060000"); // 2
      Evnt_92_set.insert("5295632.060000");
      Evnt_92.add_attribute("Txt", "EventText_t_2088726004"); // 2
      Evnt_92_set.insert("EventText_t_2088726004");
      all_values.push_back(Evnt_92_set);
      all_compo_names.insert("Evnt_92_set");

      Instrmt_94.add_element(Evnt_92);
    }
    {
      xml_element Pty_459{"Pty"};
      multiset<string> Pty_459_set;
      Pty_459.add_attribute("ID", "InstrumentPartyID_t_1343632960"); // 2
      Pty_459_set.insert("InstrumentPartyID_t_1343632960");
      Pty_459.add_attribute("Src", "I"); // 2
      Pty_459_set.insert("I");
      Pty_459.add_attribute("R", "8"); // 2
      Pty_459_set.insert("8");
      all_values.push_back(Pty_459_set);
      all_compo_names.insert("Pty_459_set");

      {
        xml_element Sub_459{"Sub"};
        multiset<string> Sub_459_set;
        Sub_459.add_attribute("ID", "InstrumentPartySubID_t_419689675"); // 3
        Sub_459_set.insert("InstrumentPartySubID_t_419689675");
        Sub_459.add_attribute("Typ", "2"); // 3
        Sub_459_set.insert("2");
        all_values.push_back(Sub_459_set);
        all_compo_names.insert("Sub_459_set");

        Pty_459.add_element(Sub_459);
      }
      Instrmt_94.add_element(Pty_459);
    }
    {
      xml_element CmplxEvnt_89{"CmplxEvnt"};
      multiset<string> CmplxEvnt_89_set;
      CmplxEvnt_89.add_attribute("Typ", "1"); // 2
      CmplxEvnt_89_set.insert("1");
      CmplxEvnt_89.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_52447811"); // 2
      CmplxEvnt_89_set.insert("ComplexOptPayoutAmount_t_52447811");
      CmplxEvnt_89.add_attribute("Px", "13150294.250000"); // 2
      CmplxEvnt_89_set.insert("13150294.250000");
      CmplxEvnt_89.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_89_set.insert("5");
      CmplxEvnt_89.add_attribute("PxBndryPrcsn", "4680904.680000"); // 2
      CmplxEvnt_89_set.insert("4680904.680000");
      CmplxEvnt_89.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_89_set.insert("2");
      CmplxEvnt_89.add_attribute("Cond", "1"); // 2
      CmplxEvnt_89_set.insert("1");
      all_values.push_back(CmplxEvnt_89_set);
      all_compo_names.insert("CmplxEvnt_89_set");

      {
        xml_element EvntDts_89{"EvntDts"};
        multiset<string> EvntDts_89_set;
        EvntDts_89.add_attribute("StartDt", "ComplexEventStartDate_t_1845057032"); // 3
        EvntDts_89_set.insert("ComplexEventStartDate_t_1845057032");
        EvntDts_89.add_attribute("EndDt", "ComplexEventEndDate_t_1860853114"); // 3
        EvntDts_89_set.insert("ComplexEventEndDate_t_1860853114");
        all_values.push_back(EvntDts_89_set);
        all_compo_names.insert("EvntDts_89_set");

        {
          xml_element EvntTms_89{"EvntTms"};
          multiset<string> EvntTms_89_set;
          EvntTms_89.add_attribute("StartTm", "406320941"); // 4
          EvntTms_89_set.insert("406320941");
          EvntTms_89.add_attribute("EndTm", "1161599277"); // 4
          EvntTms_89_set.insert("1161599277");
          all_values.push_back(EvntTms_89_set);
          all_compo_names.insert("EvntTms_89_set");

          EvntDts_89.add_element(EvntTms_89);
        }
        CmplxEvnt_89.add_element(EvntDts_89);
      }
      Instrmt_94.add_element(CmplxEvnt_89);
    }
    elt.add_element(Instrmt_94);
  } // end Instrmt
  { // Undly
    xml_element Undly_128{"Undly"};
    multiset<string> Undly_128_set;
    Undly_128.add_attribute("Sym", "UnderlyingSymbol_t_937547676"); // 1
    Undly_128_set.insert("UnderlyingSymbol_t_937547676");
    Undly_128.add_attribute("Sfx", "WI"); // 1
    Undly_128_set.insert("WI");
    Undly_128.add_attribute("ID", "UnderlyingSecurityID_t_1577049949"); // 1
    Undly_128_set.insert("UnderlyingSecurityID_t_1577049949");
    Undly_128.add_attribute("Src", "5"); // 1
    Undly_128_set.insert("5");
    Undly_128.add_attribute("Prod", "2"); // 1
    Undly_128_set.insert("2");
    Undly_128.add_attribute("CFI", "UnderlyingCFICode_t_1073777360"); // 1
    Undly_128_set.insert("UnderlyingCFICode_t_1073777360");
    Undly_128.add_attribute("SecTyp", "FRN"); // 1
    Undly_128_set.insert("FRN");
    Undly_128.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_284185207"); // 1
    Undly_128_set.insert("UnderlyingSecuritySubType_t_284185207");
    Undly_128.add_attribute("MMY", "1845825527"); // 1
    Undly_128_set.insert("1845825527");
    Undly_128.add_attribute("Mat", "UnderlyingMaturityDate_t_1568638682"); // 1
    Undly_128_set.insert("UnderlyingMaturityDate_t_1568638682");
    Undly_128.add_attribute("MatTm", "1178765337"); // 1
    Undly_128_set.insert("1178765337");
    Undly_128.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1688946739"); // 1
    Undly_128_set.insert("UnderlyingCouponPaymentDate_t_1688946739");
    Undly_128.add_attribute("RestrctTyp", "FR"); // 1
    Undly_128_set.insert("FR");
    Undly_128.add_attribute("Snrty", "SB"); // 1
    Undly_128_set.insert("SB");
    Undly_128.add_attribute("NotlPctOut", "8850960.510000"); // 1
    Undly_128_set.insert("8850960.510000");
    Undly_128.add_attribute("OrigNotlPctOut", "14999399.890000"); // 1
    Undly_128_set.insert("14999399.890000");
    Undly_128.add_attribute("AttchPnt", "5745160.520000"); // 1
    Undly_128_set.insert("5745160.520000");
    Undly_128.add_attribute("DetchPnt", "13047857.270000"); // 1
    Undly_128_set.insert("13047857.270000");
    Undly_128.add_attribute("Issued", "UnderlyingIssueDate_t_1702753017"); // 1
    Undly_128_set.insert("UnderlyingIssueDate_t_1702753017");
    Undly_128.add_attribute("RepoCollSecTyp", "1989557117"); // 1
    Undly_128_set.insert("1989557117");
    Undly_128.add_attribute("RepoTrm", "1357233538"); // 1
    Undly_128_set.insert("1357233538");
    Undly_128.add_attribute("RepoRt", "8702987.940000"); // 1
    Undly_128_set.insert("8702987.940000");
    Undly_128.add_attribute("Fctr", "13633458.540000"); // 1
    Undly_128_set.insert("13633458.540000");
    Undly_128.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1825324006"); // 1
    Undly_128_set.insert("UnderlyingCreditRating_t_1825324006");
    Undly_128.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1605003290"); // 1
    Undly_128_set.insert("UnderlyingInstrRegistry_t_1605003290");
    Undly_128.add_attribute("Ctry", "210507912"); // 1
    Undly_128_set.insert("210507912");
    Undly_128.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1522897390"); // 1
    Undly_128_set.insert("UnderlyingStateOrProvinceOfIssue_t_1522897390");
    Undly_128.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1318372756"); // 1
    Undly_128_set.insert("UnderlyingLocaleOfIssue_t_1318372756");
    Undly_128.add_attribute("Redeem", "UnderlyingRedemptionDate_t_616828853"); // 1
    Undly_128_set.insert("UnderlyingRedemptionDate_t_616828853");
    Undly_128.add_attribute("StrkPx", "5370130.190000"); // 1
    Undly_128_set.insert("5370130.190000");
    Undly_128.add_attribute("StrkCcy", "CAN"); // 1
    Undly_128_set.insert("CAN");
    Undly_128.add_attribute("OptA", "1342742959"); // 1
    Undly_128_set.insert("1342742959");
    Undly_128.add_attribute("Mult", "15620667.270000"); // 1
    Undly_128_set.insert("15620667.270000");
    Undly_128.add_attribute("MultTyp", "2"); // 1
    Undly_128_set.insert("2");
    Undly_128.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_128_set.insert("4");
    Undly_128.add_attribute("UOM", "USD"); // 1
    Undly_128_set.insert("USD");
    Undly_128.add_attribute("UOMQty", "17130898.540000"); // 1
    Undly_128_set.insert("17130898.540000");
    Undly_128.add_attribute("PxUOM", "Bu"); // 1
    Undly_128_set.insert("Bu");
    Undly_128.add_attribute("PxUOMQty", "1867023.190000"); // 1
    Undly_128_set.insert("1867023.190000");
    Undly_128.add_attribute("TmUnit", "S"); // 1
    Undly_128_set.insert("S");
    Undly_128.add_attribute("ExerStyle", "0"); // 1
    Undly_128_set.insert("0");
    Undly_128.add_attribute("CpnRt", "18756490.580000"); // 1
    Undly_128_set.insert("18756490.580000");
    Undly_128.add_attribute("Exch", "UnderlyingSecurityExchange_t_1084963129"); // 1
    Undly_128_set.insert("UnderlyingSecurityExchange_t_1084963129");
    Undly_128.add_attribute("Issr", "UnderlyingIssuer_t_1780521674"); // 1
    Undly_128_set.insert("UnderlyingIssuer_t_1780521674");
    Undly_128.add_attribute("EncUndIssrLen", "613261462"); // 1
    Undly_128_set.insert("613261462");
    Undly_128.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_437419470"); // 1
    Undly_128_set.insert("EncodedUnderlyingIssuer_t_437419470");
    Undly_128.add_attribute("Desc", "UnderlyingSecurityDesc_t_207554079"); // 1
    Undly_128_set.insert("UnderlyingSecurityDesc_t_207554079");
    Undly_128.add_attribute("EncUndSecDescLen", "1918047189"); // 1
    Undly_128_set.insert("1918047189");
    Undly_128.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2140172488"); // 1
    Undly_128_set.insert("EncodedUnderlyingSecurityDesc_t_2140172488");
    Undly_128.add_attribute("CPPgm", "UnderlyingCPProgram_t_49627548"); // 1
    Undly_128_set.insert("UnderlyingCPProgram_t_49627548");
    Undly_128.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1127797079"); // 1
    Undly_128_set.insert("UnderlyingCPRegType_t_1127797079");
    Undly_128.add_attribute("AllocPct", "8629876.340000"); // 1
    Undly_128_set.insert("8629876.340000");
    Undly_128.add_attribute("Ccy", "EUR"); // 1
    Undly_128_set.insert("EUR");
    Undly_128.add_attribute("Qty", "3205072.760000"); // 1
    Undly_128_set.insert("3205072.760000");
    Undly_128.add_attribute("SettlTyp", "4"); // 1
    Undly_128_set.insert("4");
    Undly_128.add_attribute("CashAmt", "UnderlyingCashAmount_t_181051180"); // 1
    Undly_128_set.insert("UnderlyingCashAmount_t_181051180");
    Undly_128.add_attribute("CashTyp", "DIFF"); // 1
    Undly_128_set.insert("DIFF");
    Undly_128.add_attribute("Px", "928265.200000"); // 1
    Undly_128_set.insert("928265.200000");
    Undly_128.add_attribute("DirtPx", "7180641.990000"); // 1
    Undly_128_set.insert("7180641.990000");
    Undly_128.add_attribute("EndPx", "16238968.110000"); // 1
    Undly_128_set.insert("16238968.110000");
    Undly_128.add_attribute("StartVal", "UnderlyingStartValue_t_1647203050"); // 1
    Undly_128_set.insert("UnderlyingStartValue_t_1647203050");
    Undly_128.add_attribute("CurVal", "UnderlyingCurrentValue_t_2060807158"); // 1
    Undly_128_set.insert("UnderlyingCurrentValue_t_2060807158");
    Undly_128.add_attribute("EndVal", "UnderlyingEndValue_t_1038479891"); // 1
    Undly_128_set.insert("UnderlyingEndValue_t_1038479891");
    Undly_128.add_attribute("AdjQty", "20884721.580000"); // 1
    Undly_128_set.insert("20884721.580000");
    Undly_128.add_attribute("FxRate", "12583705.950000"); // 1
    Undly_128_set.insert("12583705.950000");
    Undly_128.add_attribute("FxRateCalc", "D"); // 1
    Undly_128_set.insert("D");
    Undly_128.add_attribute("CapValu", "UnderlyingCapValue_t_1654078364"); // 1
    Undly_128_set.insert("UnderlyingCapValue_t_1654078364");
    Undly_128.add_attribute("SetMeth", "UnderlyingSettlMethod_t_740119238"); // 1
    Undly_128_set.insert("UnderlyingSettlMethod_t_740119238");
    Undly_128.add_attribute("PutCall", "1713542650"); // 1
    Undly_128_set.insert("1713542650");
    all_values.push_back(Undly_128_set);
    all_compo_names.insert("Undly_128_set");

    {
      xml_element UndAID_128{"UndAID"};
      multiset<string> UndAID_128_set;
      UndAID_128.add_attribute("AltID", "UnderlyingSecurityAltID_t_640839604"); // 2
      UndAID_128_set.insert("UnderlyingSecurityAltID_t_640839604");
      UndAID_128.add_attribute("AltIDSrc", "8"); // 2
      UndAID_128_set.insert("8");
      all_values.push_back(UndAID_128_set);
      all_compo_names.insert("UndAID_128_set");

      Undly_128.add_element(UndAID_128);
    }
    {
      xml_element Stip_206{"Stip"};
      multiset<string> Stip_206_set;
      Stip_206.add_attribute("Typ", "AVSIZE"); // 2
      Stip_206_set.insert("AVSIZE");
      Stip_206.add_attribute("Val", "UnderlyingStipValue_t_1725802733"); // 2
      Stip_206_set.insert("UnderlyingStipValue_t_1725802733");
      all_values.push_back(Stip_206_set);
      all_compo_names.insert("Stip_206_set");

      Undly_128.add_element(Stip_206);
    }
    {
      xml_element Pty_460{"Pty"};
      multiset<string> Pty_460_set;
      Pty_460.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1033671246"); // 2
      Pty_460_set.insert("UnderlyingInstrumentPartyID_t_1033671246");
      Pty_460.add_attribute("Src", "A"); // 2
      Pty_460_set.insert("A");
      Pty_460.add_attribute("R", "66"); // 2
      Pty_460_set.insert("66");
      all_values.push_back(Pty_460_set);
      all_compo_names.insert("Pty_460_set");

      {
        xml_element Sub_460{"Sub"};
        multiset<string> Sub_460_set;
        Sub_460.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1241225325"); // 3
        Sub_460_set.insert("UnderlyingInstrumentPartySubID_t_1241225325");
        Sub_460.add_attribute("Typ", "9"); // 3
        Sub_460_set.insert("9");
        all_values.push_back(Sub_460_set);
        all_compo_names.insert("Sub_460_set");

        Pty_460.add_element(Sub_460);
      }
      Undly_128.add_element(Pty_460);
    }
    elt.add_element(Undly_128);
  } // end Undly
  { // Leg
    xml_element Leg_109{"Leg"};
    multiset<string> Leg_109_set;
    Leg_109.add_attribute("Sym", "LegSymbol_t_1290852873"); // 1
    Leg_109_set.insert("LegSymbol_t_1290852873");
    Leg_109.add_attribute("Sfx", "WI"); // 1
    Leg_109_set.insert("WI");
    Leg_109.add_attribute("ID", "LegSecurityID_t_871415030"); // 1
    Leg_109_set.insert("LegSecurityID_t_871415030");
    Leg_109.add_attribute("Src", "7"); // 1
    Leg_109_set.insert("7");
    Leg_109.add_attribute("Prod", "3"); // 1
    Leg_109_set.insert("3");
    Leg_109.add_attribute("CFI", "LegCFICode_t_1191922307"); // 1
    Leg_109_set.insert("LegCFICode_t_1191922307");
    Leg_109.add_attribute("SecTyp", "IET"); // 1
    Leg_109_set.insert("IET");
    Leg_109.add_attribute("SecSubTyp", "LegSecuritySubType_t_1792535112"); // 1
    Leg_109_set.insert("LegSecuritySubType_t_1792535112");
    Leg_109.add_attribute("MMY", "683318692"); // 1
    Leg_109_set.insert("683318692");
    Leg_109.add_attribute("Mat", "LegMaturityDate_t_125166815"); // 1
    Leg_109_set.insert("LegMaturityDate_t_125166815");
    Leg_109.add_attribute("MatTm", "363115664"); // 1
    Leg_109_set.insert("363115664");
    Leg_109.add_attribute("CpnPmt", "LegCouponPaymentDate_t_159731855"); // 1
    Leg_109_set.insert("LegCouponPaymentDate_t_159731855");
    Leg_109.add_attribute("Issued", "LegIssueDate_t_1772369865"); // 1
    Leg_109_set.insert("LegIssueDate_t_1772369865");
    Leg_109.add_attribute("RepoCollSecTyp", "276439174"); // 1
    Leg_109_set.insert("276439174");
    Leg_109.add_attribute("RepoTrm", "1198211746"); // 1
    Leg_109_set.insert("1198211746");
    Leg_109.add_attribute("RepoRt", "17133583.750000"); // 1
    Leg_109_set.insert("17133583.750000");
    Leg_109.add_attribute("Fctr", "15348097.690000"); // 1
    Leg_109_set.insert("15348097.690000");
    Leg_109.add_attribute("CrdRtg", "LegCreditRating_t_577568429"); // 1
    Leg_109_set.insert("LegCreditRating_t_577568429");
    Leg_109.add_attribute("Rgstry", "LegInstrRegistry_t_1219953091"); // 1
    Leg_109_set.insert("LegInstrRegistry_t_1219953091");
    Leg_109.add_attribute("Ctry", "127445360"); // 1
    Leg_109_set.insert("127445360");
    Leg_109.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_143627432"); // 1
    Leg_109_set.insert("LegStateOrProvinceOfIssue_t_143627432");
    Leg_109.add_attribute("Lcl", "LegLocaleOfIssue_t_1860792696"); // 1
    Leg_109_set.insert("LegLocaleOfIssue_t_1860792696");
    Leg_109.add_attribute("Redeem", "LegRedemptionDate_t_1528078579"); // 1
    Leg_109_set.insert("LegRedemptionDate_t_1528078579");
    Leg_109.add_attribute("Strk", "15853354.930000"); // 1
    Leg_109_set.insert("15853354.930000");
    Leg_109.add_attribute("StrkCcy", "CAN"); // 1
    Leg_109_set.insert("CAN");
    Leg_109.add_attribute("OptA", "1492821368"); // 1
    Leg_109_set.insert("1492821368");
    Leg_109.add_attribute("Cmult", "14548503.370000"); // 1
    Leg_109_set.insert("14548503.370000");
    Leg_109.add_attribute("MultTyp", "2"); // 1
    Leg_109_set.insert("2");
    Leg_109.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_109_set.insert("4");
    Leg_109.add_attribute("UOM", "oz_tr"); // 1
    Leg_109_set.insert("oz_tr");
    Leg_109.add_attribute("UOMQty", "7988607.280000"); // 1
    Leg_109_set.insert("7988607.280000");
    Leg_109.add_attribute("PxUOM", "t"); // 1
    Leg_109_set.insert("t");
    Leg_109.add_attribute("PxUOMQty", "1872091.160000"); // 1
    Leg_109_set.insert("1872091.160000");
    Leg_109.add_attribute("TmUnit", "D"); // 1
    Leg_109_set.insert("D");
    Leg_109.add_attribute("ExerStyle", "2"); // 1
    Leg_109_set.insert("2");
    Leg_109.add_attribute("CpnRt", "13791314.230000"); // 1
    Leg_109_set.insert("13791314.230000");
    Leg_109.add_attribute("Exch", "LegSecurityExchange_t_1387543651"); // 1
    Leg_109_set.insert("LegSecurityExchange_t_1387543651");
    Leg_109.add_attribute("Issr", "LegIssuer_t_1085769028"); // 1
    Leg_109_set.insert("LegIssuer_t_1085769028");
    Leg_109.add_attribute("EncLegIssrLen", "2062450115"); // 1
    Leg_109_set.insert("2062450115");
    Leg_109.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1512710466"); // 1
    Leg_109_set.insert("EncodedLegIssuer_t_1512710466");
    Leg_109.add_attribute("Desc", "LegSecurityDesc_t_1448884692"); // 1
    Leg_109_set.insert("LegSecurityDesc_t_1448884692");
    Leg_109.add_attribute("EncLegSecDescLen", "74698322"); // 1
    Leg_109_set.insert("74698322");
    Leg_109.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1137596684"); // 1
    Leg_109_set.insert("EncodedLegSecurityDesc_t_1137596684");
    Leg_109.add_attribute("RatioQty", "17253238.660000"); // 1
    Leg_109_set.insert("17253238.660000");
    Leg_109.add_attribute("Side", "6"); // 1
    Leg_109_set.insert("6");
    Leg_109.add_attribute("Ccy", "JPY"); // 1
    Leg_109_set.insert("JPY");
    Leg_109.add_attribute("Pool", "LegPool_t_1850478498"); // 1
    Leg_109_set.insert("LegPool_t_1850478498");
    Leg_109.add_attribute("Dated", "LegDatedDate_t_1923424503"); // 1
    Leg_109_set.insert("LegDatedDate_t_1923424503");
    Leg_109.add_attribute("CSetMo", "1240095348"); // 1
    Leg_109_set.insert("1240095348");
    Leg_109.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1994105930"); // 1
    Leg_109_set.insert("LegInterestAccrualDate_t_1994105930");
    Leg_109.add_attribute("PutCall", "1636733551"); // 1
    Leg_109_set.insert("1636733551");
    Leg_109.add_attribute("LegOptionRatio", "6206902.790000"); // 1
    Leg_109_set.insert("6206902.790000");
    Leg_109.add_attribute("Px", "14319577.750000"); // 1
    Leg_109_set.insert("14319577.750000");
    all_values.push_back(Leg_109_set);
    all_compo_names.insert("Leg_109_set");

    {
      xml_element LegAID_104{"LegAID"};
      multiset<string> LegAID_104_set;
      LegAID_104.add_attribute("SecAltID", "LegSecurityAltID_t_928361684"); // 2
      LegAID_104_set.insert("LegSecurityAltID_t_928361684");
      LegAID_104.add_attribute("SecAltIDSrc", "8"); // 2
      LegAID_104_set.insert("8");
      all_values.push_back(LegAID_104_set);
      all_compo_names.insert("LegAID_104_set");

      Leg_109.add_element(LegAID_104);
    }
    elt.add_element(Leg_109);
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
