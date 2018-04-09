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
  elt.add_attribute("ReqID", "TradeRequestID_t_123939953"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("TradeRequestID_t_123939953");
  elt.add_attribute("TrdID", "TradeID_t_2051923649"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("TradeID_t_2051923649");
  elt.add_attribute("TrdID2", "SecondaryTradeID_t_1124522445"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("SecondaryTradeID_t_1124522445");
  elt.add_attribute("FirmTrdID", "FirmTradeID_t_1601866355"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("FirmTradeID_t_1601866355");
  elt.add_attribute("FirmTrdID2", "SecondaryFirmTradeID_t_332127425"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("SecondaryFirmTradeID_t_332127425");
  elt.add_attribute("ReqTyp", "4"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("4");
  elt.add_attribute("SubReqTyp", "0"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("0");
  elt.add_attribute("TotNumTrdRpts", "245968480"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("245968480");
  elt.add_attribute("ReqRslt", "0"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("0");
  elt.add_attribute("ReqStat", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("RspTransportTyp", "1"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1");
  elt.add_attribute("RspDest", "ResponseDestination_t_726786343"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("ResponseDestination_t_726786343");
  elt.add_attribute("Txt", "Text_t_1877524485"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("Text_t_1877524485");
  elt.add_attribute("EncTxtLen", "1348934612"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("1348934612");
  elt.add_attribute("EncTxt", "EncodedText_t_684489325"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("EncodedText_t_684489325");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_781864879"); // 0
  TradeCaptureReportRequestAck_message_t_0.insert("MessageEventSource_t_781864879");
  all_values.push_back(TradeCaptureReportRequestAck_message_t_0);
  all_compo_names.insert("TradeCaptureReportRequestAck_message_t");

  { // Hdr
    xml_element Hdr_99{"Hdr"};
    multiset<string> Hdr_99_set;
    Hdr_99.add_attribute("SeqNum", "72016854"); // 1
    Hdr_99_set.insert("72016854");
    Hdr_99.add_attribute("SID", "SenderCompID_t_1269862210"); // 1
    Hdr_99_set.insert("SenderCompID_t_1269862210");
    Hdr_99.add_attribute("TID", "TargetCompID_t_1222165794"); // 1
    Hdr_99_set.insert("TargetCompID_t_1222165794");
    Hdr_99.add_attribute("OBID", "OnBehalfOfCompID_t_712644004"); // 1
    Hdr_99_set.insert("OnBehalfOfCompID_t_712644004");
    Hdr_99.add_attribute("D2ID", "DeliverToCompID_t_1628056743"); // 1
    Hdr_99_set.insert("DeliverToCompID_t_1628056743");
    Hdr_99.add_attribute("SSub", "SenderSubID_t_1352941943"); // 1
    Hdr_99_set.insert("SenderSubID_t_1352941943");
    Hdr_99.add_attribute("SLoc", "SenderLocationID_t_15057179"); // 1
    Hdr_99_set.insert("SenderLocationID_t_15057179");
    Hdr_99.add_attribute("TSub", "TargetSubID_t_466261563"); // 1
    Hdr_99_set.insert("TargetSubID_t_466261563");
    Hdr_99.add_attribute("TLoc", "TargetLocationID_t_1158152959"); // 1
    Hdr_99_set.insert("TargetLocationID_t_1158152959");
    Hdr_99.add_attribute("OBSub", "OnBehalfOfSubID_t_1797098027"); // 1
    Hdr_99_set.insert("OnBehalfOfSubID_t_1797098027");
    Hdr_99.add_attribute("OBLoc", "OnBehalfOfLocationID_t_86154794"); // 1
    Hdr_99_set.insert("OnBehalfOfLocationID_t_86154794");
    Hdr_99.add_attribute("D2Sub", "DeliverToSubID_t_485890250"); // 1
    Hdr_99_set.insert("DeliverToSubID_t_485890250");
    Hdr_99.add_attribute("D2Loc", "DeliverToLocationID_t_1983452587"); // 1
    Hdr_99_set.insert("DeliverToLocationID_t_1983452587");
    Hdr_99.add_attribute("PosDup", "Y"); // 1
    Hdr_99_set.insert("Y");
    Hdr_99.add_attribute("PosRsnd", "N"); // 1
    Hdr_99_set.insert("N");
    Hdr_99.add_attribute("Snt", "SendingTime_t_1887892588"); // 1
    Hdr_99_set.insert("SendingTime_t_1887892588");
    Hdr_99.add_attribute("OrigSnt", "OrigSendingTime_t_109898645"); // 1
    Hdr_99_set.insert("OrigSendingTime_t_109898645");
    Hdr_99.add_attribute("MsgEncd", "MessageEncoding_t_64212911"); // 1
    Hdr_99_set.insert("MessageEncoding_t_64212911");
    all_values.push_back(Hdr_99_set);
    all_compo_names.insert("Hdr_99_set");

    {
      xml_element Hop_99{"Hop"};
      multiset<string> Hop_99_set;
      Hop_99.add_attribute("ID", "HopCompID_t_72536365"); // 2
      Hop_99_set.insert("HopCompID_t_72536365");
      Hop_99.add_attribute("Ref", "136724414"); // 2
      Hop_99_set.insert("136724414");
      Hop_99.add_attribute("Snt", "HopSendingTime_t_1828121757"); // 2
      Hop_99_set.insert("HopSendingTime_t_1828121757");
      all_values.push_back(Hop_99_set);
      all_compo_names.insert("Hop_99_set");

      Hdr_99.add_element(Hop_99);
    }
    elt.add_element(Hdr_99);
  } // end Hdr
  { // Instrmt
    xml_element Instrmt_88{"Instrmt"};
    multiset<string> Instrmt_88_set;
    Instrmt_88.add_attribute("Sym", "Symbol_t_318504845"); // 1
    Instrmt_88_set.insert("Symbol_t_318504845");
    Instrmt_88.add_attribute("Sfx", "WI"); // 1
    Instrmt_88_set.insert("WI");
    Instrmt_88.add_attribute("ID", "SecurityID_t_1630661732"); // 1
    Instrmt_88_set.insert("SecurityID_t_1630661732");
    Instrmt_88.add_attribute("Src", "J"); // 1
    Instrmt_88_set.insert("J");
    Instrmt_88.add_attribute("Prod", "8"); // 1
    Instrmt_88_set.insert("8");
    Instrmt_88.add_attribute("ProdCmplx", "ProductComplex_t_209964428"); // 1
    Instrmt_88_set.insert("ProductComplex_t_209964428");
    Instrmt_88.add_attribute("SecGrp", "SecurityGroup_t_1430135692"); // 1
    Instrmt_88_set.insert("SecurityGroup_t_1430135692");
    Instrmt_88.add_attribute("CFI", "CFICode_t_1938069183"); // 1
    Instrmt_88_set.insert("CFICode_t_1938069183");
    Instrmt_88.add_attribute("SecTyp", "SPCLA"); // 1
    Instrmt_88_set.insert("SPCLA");
    Instrmt_88.add_attribute("SubTyp", "SecuritySubType_t_64516923"); // 1
    Instrmt_88_set.insert("SecuritySubType_t_64516923");
    Instrmt_88.add_attribute("MMY", "2010086037"); // 1
    Instrmt_88_set.insert("2010086037");
    Instrmt_88.add_attribute("MatDt", "MaturityDate_t_16832315"); // 1
    Instrmt_88_set.insert("MaturityDate_t_16832315");
    Instrmt_88.add_attribute("MatTm", "1286682718"); // 1
    Instrmt_88_set.insert("1286682718");
    Instrmt_88.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_575246393"); // 1
    Instrmt_88_set.insert("SettleOnOpenFlag_t_575246393");
    Instrmt_88.add_attribute("AsgnMeth", "1644889058"); // 1
    Instrmt_88_set.insert("1644889058");
    Instrmt_88.add_attribute("Status", "2"); // 1
    Instrmt_88_set.insert("2");
    Instrmt_88.add_attribute("CpnPmt", "CouponPaymentDate_t_590303572"); // 1
    Instrmt_88_set.insert("CouponPaymentDate_t_590303572");
    Instrmt_88.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_88_set.insert("MM");
    Instrmt_88.add_attribute("Snrty", "SB"); // 1
    Instrmt_88_set.insert("SB");
    Instrmt_88.add_attribute("NotlPctOut", "2399179.510000"); // 1
    Instrmt_88_set.insert("2399179.510000");
    Instrmt_88.add_attribute("OrigNotlPctOut", "498217.680000"); // 1
    Instrmt_88_set.insert("498217.680000");
    Instrmt_88.add_attribute("AttchPnt", "21361842.230000"); // 1
    Instrmt_88_set.insert("21361842.230000");
    Instrmt_88.add_attribute("DetchPnt", "758868.900000"); // 1
    Instrmt_88_set.insert("758868.900000");
    Instrmt_88.add_attribute("Issued", "IssueDate_t_1182681615"); // 1
    Instrmt_88_set.insert("IssueDate_t_1182681615");
    Instrmt_88.add_attribute("RepoCollSecTyp", "598530779"); // 1
    Instrmt_88_set.insert("598530779");
    Instrmt_88.add_attribute("RepoTrm", "1963779478"); // 1
    Instrmt_88_set.insert("1963779478");
    Instrmt_88.add_attribute("RepoRt", "12925802.600000"); // 1
    Instrmt_88_set.insert("12925802.600000");
    Instrmt_88.add_attribute("Fctr", "6627436.900000"); // 1
    Instrmt_88_set.insert("6627436.900000");
    Instrmt_88.add_attribute("CrdRtg", "CreditRating_t_2036315844"); // 1
    Instrmt_88_set.insert("CreditRating_t_2036315844");
    Instrmt_88.add_attribute("Rgstry", "InstrRegistry_t_1429304674"); // 1
    Instrmt_88_set.insert("InstrRegistry_t_1429304674");
    Instrmt_88.add_attribute("IssuCtry", "343381799"); // 1
    Instrmt_88_set.insert("343381799");
    Instrmt_88.add_attribute("StPrv", "StateOrProvinceOfIssue_t_207337041"); // 1
    Instrmt_88_set.insert("StateOrProvinceOfIssue_t_207337041");
    Instrmt_88.add_attribute("Lcl", "LocaleOfIssue_t_742911757"); // 1
    Instrmt_88_set.insert("LocaleOfIssue_t_742911757");
    Instrmt_88.add_attribute("Redeem", "RedemptionDate_t_1974043532"); // 1
    Instrmt_88_set.insert("RedemptionDate_t_1974043532");
    Instrmt_88.add_attribute("StrkPx", "19074318.960000"); // 1
    Instrmt_88_set.insert("19074318.960000");
    Instrmt_88.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_88_set.insert("GBP");
    Instrmt_88.add_attribute("StrkMult", "11900839.400000"); // 1
    Instrmt_88_set.insert("11900839.400000");
    Instrmt_88.add_attribute("StrkValu", "11226318.630000"); // 1
    Instrmt_88_set.insert("11226318.630000");
    Instrmt_88.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_88_set.insert("2");
    Instrmt_88.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_88_set.insert("4");
    Instrmt_88.add_attribute("StrkPxBndryPrcsn", "9852342.520000"); // 1
    Instrmt_88_set.insert("9852342.520000");
    Instrmt_88.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_88_set.insert("2");
    Instrmt_88.add_attribute("OptAt", "393799933"); // 1
    Instrmt_88_set.insert("393799933");
    Instrmt_88.add_attribute("Mult", "15604806.450000"); // 1
    Instrmt_88_set.insert("15604806.450000");
    Instrmt_88.add_attribute("MultTyp", "2"); // 1
    Instrmt_88_set.insert("2");
    Instrmt_88.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("MinPxIncr", "33005.690000"); // 1
    Instrmt_88_set.insert("33005.690000");
    Instrmt_88.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_408882765"); // 1
    Instrmt_88_set.insert("MinPriceIncrementAmount_t_408882765");
    Instrmt_88.add_attribute("UOM", "Alw"); // 1
    Instrmt_88_set.insert("Alw");
    Instrmt_88.add_attribute("UOMQty", "2432185.200000"); // 1
    Instrmt_88_set.insert("2432185.200000");
    Instrmt_88.add_attribute("PxUOM", "MMBtu"); // 1
    Instrmt_88_set.insert("MMBtu");
    Instrmt_88.add_attribute("PxUOMQty", "3774518.460000"); // 1
    Instrmt_88_set.insert("3774518.460000");
    Instrmt_88.add_attribute("SettlMeth", "C"); // 1
    Instrmt_88_set.insert("C");
    Instrmt_88.add_attribute("ExerStyle", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_88_set.insert("3");
    Instrmt_88.add_attribute("OptPayAmt", "OptPayoutAmount_t_135401240"); // 1
    Instrmt_88_set.insert("OptPayoutAmount_t_135401240");
    Instrmt_88.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_88_set.insert("INX");
    Instrmt_88.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_88_set.insert("EQTY");
    Instrmt_88.add_attribute("ListMeth", "0"); // 1
    Instrmt_88_set.insert("0");
    Instrmt_88.add_attribute("CapPx", "683037.880000"); // 1
    Instrmt_88_set.insert("683037.880000");
    Instrmt_88.add_attribute("FlrPx", "19821081.150000"); // 1
    Instrmt_88_set.insert("19821081.150000");
    Instrmt_88.add_attribute("PutCall", "0"); // 1
    Instrmt_88_set.insert("0");
    Instrmt_88.add_attribute("FlexInd", "false"); // 1
    Instrmt_88_set.insert("false");
    Instrmt_88.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_88_set.insert("false");
    Instrmt_88.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_88_set.insert("Mo");
    Instrmt_88.add_attribute("CpnRt", "21432618.730000"); // 1
    Instrmt_88_set.insert("21432618.730000");
    Instrmt_88.add_attribute("Exch", "SecurityExchange_t_1845192311"); // 1
    Instrmt_88_set.insert("SecurityExchange_t_1845192311");
    Instrmt_88.add_attribute("PosLmt", "1181602666"); // 1
    Instrmt_88_set.insert("1181602666");
    Instrmt_88.add_attribute("NTPosLmt", "1118410088"); // 1
    Instrmt_88_set.insert("1118410088");
    Instrmt_88.add_attribute("Issr", "Issuer_t_628686728"); // 1
    Instrmt_88_set.insert("Issuer_t_628686728");
    Instrmt_88.add_attribute("EncIssrLen", "288719881"); // 1
    Instrmt_88_set.insert("288719881");
    Instrmt_88.add_attribute("EncIssr", "EncodedIssuer_t_2103644340"); // 1
    Instrmt_88_set.insert("EncodedIssuer_t_2103644340");
    Instrmt_88.add_attribute("Desc", "SecurityDesc_t_1576497109"); // 1
    Instrmt_88_set.insert("SecurityDesc_t_1576497109");
    Instrmt_88.add_attribute("EncSecDescLen", "682519815"); // 1
    Instrmt_88_set.insert("682519815");
    Instrmt_88.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1516641337"); // 1
    Instrmt_88_set.insert("EncodedSecurityDesc_t_1516641337");
    Instrmt_88.add_attribute("Pool", "Pool_t_2021712901"); // 1
    Instrmt_88_set.insert("Pool_t_2021712901");
    Instrmt_88.add_attribute("CSetMo", "1568460761"); // 1
    Instrmt_88_set.insert("1568460761");
    Instrmt_88.add_attribute("CPPgm", "1"); // 1
    Instrmt_88_set.insert("1");
    Instrmt_88.add_attribute("CPRegT", "CPRegType_t_283112018"); // 1
    Instrmt_88_set.insert("CPRegType_t_283112018");
    Instrmt_88.add_attribute("Dated", "DatedDate_t_1957212032"); // 1
    Instrmt_88_set.insert("DatedDate_t_1957212032");
    Instrmt_88.add_attribute("IntAcrl", "InterestAccrualDate_t_1763160426"); // 1
    Instrmt_88_set.insert("InterestAccrualDate_t_1763160426");
    all_values.push_back(Instrmt_88_set);
    all_compo_names.insert("Instrmt_88_set");

    {
      xml_element AID_91{"AID"};
      multiset<string> AID_91_set;
      AID_91.add_attribute("AltID", "SecurityAltID_t_741816552"); // 2
      AID_91_set.insert("SecurityAltID_t_741816552");
      AID_91.add_attribute("AltIDSrc", "7"); // 2
      AID_91_set.insert("7");
      all_values.push_back(AID_91_set);
      all_compo_names.insert("AID_91_set");

      Instrmt_88.add_element(AID_91);
    }
    {
      xml_element SecXML_88{"SecXML"};
      multiset<string> SecXML_88_set;
      SecXML_88.add_attribute("Schema", "SecurityXMLSchema_t_2082265836"); // 2
      SecXML_88_set.insert("SecurityXMLSchema_t_2082265836");
      all_values.push_back(SecXML_88_set);
      all_compo_names.insert("SecXML_88_set");

      Instrmt_88.add_element(SecXML_88);
    }
    {
      xml_element Evnt_88{"Evnt"};
      multiset<string> Evnt_88_set;
      Evnt_88.add_attribute("EventTyp", "13"); // 2
      Evnt_88_set.insert("13");
      Evnt_88.add_attribute("Dt", "EventDate_t_1163162855"); // 2
      Evnt_88_set.insert("EventDate_t_1163162855");
      Evnt_88.add_attribute("Tm", "EventTime_t_70183429"); // 2
      Evnt_88_set.insert("EventTime_t_70183429");
      Evnt_88.add_attribute("Px", "10222018.140000"); // 2
      Evnt_88_set.insert("10222018.140000");
      Evnt_88.add_attribute("Txt", "EventText_t_654405523"); // 2
      Evnt_88_set.insert("EventText_t_654405523");
      all_values.push_back(Evnt_88_set);
      all_compo_names.insert("Evnt_88_set");

      Instrmt_88.add_element(Evnt_88);
    }
    {
      xml_element Pty_433{"Pty"};
      multiset<string> Pty_433_set;
      Pty_433.add_attribute("ID", "InstrumentPartyID_t_94416865"); // 2
      Pty_433_set.insert("InstrumentPartyID_t_94416865");
      Pty_433.add_attribute("Src", "B"); // 2
      Pty_433_set.insert("B");
      Pty_433.add_attribute("R", "53"); // 2
      Pty_433_set.insert("53");
      all_values.push_back(Pty_433_set);
      all_compo_names.insert("Pty_433_set");

      {
        xml_element Sub_433{"Sub"};
        multiset<string> Sub_433_set;
        Sub_433.add_attribute("ID", "InstrumentPartySubID_t_325987343"); // 3
        Sub_433_set.insert("InstrumentPartySubID_t_325987343");
        Sub_433.add_attribute("Typ", "3"); // 3
        Sub_433_set.insert("3");
        all_values.push_back(Sub_433_set);
        all_compo_names.insert("Sub_433_set");

        Pty_433.add_element(Sub_433);
      }
      Instrmt_88.add_element(Pty_433);
    }
    {
      xml_element CmplxEvnt_85{"CmplxEvnt"};
      multiset<string> CmplxEvnt_85_set;
      CmplxEvnt_85.add_attribute("Typ", "4"); // 2
      CmplxEvnt_85_set.insert("4");
      CmplxEvnt_85.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_317506069"); // 2
      CmplxEvnt_85_set.insert("ComplexOptPayoutAmount_t_317506069");
      CmplxEvnt_85.add_attribute("Px", "18974993.730000"); // 2
      CmplxEvnt_85_set.insert("18974993.730000");
      CmplxEvnt_85.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_85_set.insert("3");
      CmplxEvnt_85.add_attribute("PxBndryPrcsn", "14991087.350000"); // 2
      CmplxEvnt_85_set.insert("14991087.350000");
      CmplxEvnt_85.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_85_set.insert("2");
      CmplxEvnt_85.add_attribute("Cond", "1"); // 2
      CmplxEvnt_85_set.insert("1");
      all_values.push_back(CmplxEvnt_85_set);
      all_compo_names.insert("CmplxEvnt_85_set");

      {
        xml_element EvntDts_85{"EvntDts"};
        multiset<string> EvntDts_85_set;
        EvntDts_85.add_attribute("StartDt", "ComplexEventStartDate_t_1787828617"); // 3
        EvntDts_85_set.insert("ComplexEventStartDate_t_1787828617");
        EvntDts_85.add_attribute("EndDt", "ComplexEventEndDate_t_824586506"); // 3
        EvntDts_85_set.insert("ComplexEventEndDate_t_824586506");
        all_values.push_back(EvntDts_85_set);
        all_compo_names.insert("EvntDts_85_set");

        {
          xml_element EvntTms_85{"EvntTms"};
          multiset<string> EvntTms_85_set;
          EvntTms_85.add_attribute("StartTm", "2053106842"); // 4
          EvntTms_85_set.insert("2053106842");
          EvntTms_85.add_attribute("EndTm", "322864784"); // 4
          EvntTms_85_set.insert("322864784");
          all_values.push_back(EvntTms_85_set);
          all_compo_names.insert("EvntTms_85_set");

          EvntDts_85.add_element(EvntTms_85);
        }
        CmplxEvnt_85.add_element(EvntDts_85);
      }
      Instrmt_88.add_element(CmplxEvnt_85);
    }
    elt.add_element(Instrmt_88);
  } // end Instrmt
  { // Undly
    xml_element Undly_118{"Undly"};
    multiset<string> Undly_118_set;
    Undly_118.add_attribute("Sym", "UnderlyingSymbol_t_1927336095"); // 1
    Undly_118_set.insert("UnderlyingSymbol_t_1927336095");
    Undly_118.add_attribute("Sfx", "WI"); // 1
    Undly_118_set.insert("WI");
    Undly_118.add_attribute("ID", "UnderlyingSecurityID_t_1713686102"); // 1
    Undly_118_set.insert("UnderlyingSecurityID_t_1713686102");
    Undly_118.add_attribute("Src", "4"); // 1
    Undly_118_set.insert("4");
    Undly_118.add_attribute("Prod", "13"); // 1
    Undly_118_set.insert("13");
    Undly_118.add_attribute("CFI", "UnderlyingCFICode_t_1329362881"); // 1
    Undly_118_set.insert("UnderlyingCFICode_t_1329362881");
    Undly_118.add_attribute("SecTyp", "CMO"); // 1
    Undly_118_set.insert("CMO");
    Undly_118.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1888234160"); // 1
    Undly_118_set.insert("UnderlyingSecuritySubType_t_1888234160");
    Undly_118.add_attribute("MMY", "1264145069"); // 1
    Undly_118_set.insert("1264145069");
    Undly_118.add_attribute("Mat", "UnderlyingMaturityDate_t_1040500070"); // 1
    Undly_118_set.insert("UnderlyingMaturityDate_t_1040500070");
    Undly_118.add_attribute("MatTm", "903913368"); // 1
    Undly_118_set.insert("903913368");
    Undly_118.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1334328498"); // 1
    Undly_118_set.insert("UnderlyingCouponPaymentDate_t_1334328498");
    Undly_118.add_attribute("RestrctTyp", "MR"); // 1
    Undly_118_set.insert("MR");
    Undly_118.add_attribute("Snrty", "SR"); // 1
    Undly_118_set.insert("SR");
    Undly_118.add_attribute("NotlPctOut", "14287453.640000"); // 1
    Undly_118_set.insert("14287453.640000");
    Undly_118.add_attribute("OrigNotlPctOut", "10057238.390000"); // 1
    Undly_118_set.insert("10057238.390000");
    Undly_118.add_attribute("AttchPnt", "20473488.810000"); // 1
    Undly_118_set.insert("20473488.810000");
    Undly_118.add_attribute("DetchPnt", "17547327.070000"); // 1
    Undly_118_set.insert("17547327.070000");
    Undly_118.add_attribute("Issued", "UnderlyingIssueDate_t_759961339"); // 1
    Undly_118_set.insert("UnderlyingIssueDate_t_759961339");
    Undly_118.add_attribute("RepoCollSecTyp", "50079574"); // 1
    Undly_118_set.insert("50079574");
    Undly_118.add_attribute("RepoTrm", "2072238777"); // 1
    Undly_118_set.insert("2072238777");
    Undly_118.add_attribute("RepoRt", "5099770.650000"); // 1
    Undly_118_set.insert("5099770.650000");
    Undly_118.add_attribute("Fctr", "20454862.260000"); // 1
    Undly_118_set.insert("20454862.260000");
    Undly_118.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1423863864"); // 1
    Undly_118_set.insert("UnderlyingCreditRating_t_1423863864");
    Undly_118.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1378402879"); // 1
    Undly_118_set.insert("UnderlyingInstrRegistry_t_1378402879");
    Undly_118.add_attribute("Ctry", "374612310"); // 1
    Undly_118_set.insert("374612310");
    Undly_118.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1064208833"); // 1
    Undly_118_set.insert("UnderlyingStateOrProvinceOfIssue_t_1064208833");
    Undly_118.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_55505737"); // 1
    Undly_118_set.insert("UnderlyingLocaleOfIssue_t_55505737");
    Undly_118.add_attribute("Redeem", "UnderlyingRedemptionDate_t_280235504"); // 1
    Undly_118_set.insert("UnderlyingRedemptionDate_t_280235504");
    Undly_118.add_attribute("StrkPx", "13870736.170000"); // 1
    Undly_118_set.insert("13870736.170000");
    Undly_118.add_attribute("StrkCcy", "CHF"); // 1
    Undly_118_set.insert("CHF");
    Undly_118.add_attribute("OptA", "1130915515"); // 1
    Undly_118_set.insert("1130915515");
    Undly_118.add_attribute("Mult", "19629360.360000"); // 1
    Undly_118_set.insert("19629360.360000");
    Undly_118.add_attribute("MultTyp", "1"); // 1
    Undly_118_set.insert("1");
    Undly_118.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_118_set.insert("2");
    Undly_118.add_attribute("UOM", "MWh"); // 1
    Undly_118_set.insert("MWh");
    Undly_118.add_attribute("UOMQty", "9278334.340000"); // 1
    Undly_118_set.insert("9278334.340000");
    Undly_118.add_attribute("PxUOM", "t"); // 1
    Undly_118_set.insert("t");
    Undly_118.add_attribute("PxUOMQty", "2614766.900000"); // 1
    Undly_118_set.insert("2614766.900000");
    Undly_118.add_attribute("TmUnit", "Mo"); // 1
    Undly_118_set.insert("Mo");
    Undly_118.add_attribute("ExerStyle", "1"); // 1
    Undly_118_set.insert("1");
    Undly_118.add_attribute("CpnRt", "15958051.890000"); // 1
    Undly_118_set.insert("15958051.890000");
    Undly_118.add_attribute("Exch", "UnderlyingSecurityExchange_t_1883551742"); // 1
    Undly_118_set.insert("UnderlyingSecurityExchange_t_1883551742");
    Undly_118.add_attribute("Issr", "UnderlyingIssuer_t_739984920"); // 1
    Undly_118_set.insert("UnderlyingIssuer_t_739984920");
    Undly_118.add_attribute("EncUndIssrLen", "877066905"); // 1
    Undly_118_set.insert("877066905");
    Undly_118.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_741791933"); // 1
    Undly_118_set.insert("EncodedUnderlyingIssuer_t_741791933");
    Undly_118.add_attribute("Desc", "UnderlyingSecurityDesc_t_639850153"); // 1
    Undly_118_set.insert("UnderlyingSecurityDesc_t_639850153");
    Undly_118.add_attribute("EncUndSecDescLen", "484315964"); // 1
    Undly_118_set.insert("484315964");
    Undly_118.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1501753273"); // 1
    Undly_118_set.insert("EncodedUnderlyingSecurityDesc_t_1501753273");
    Undly_118.add_attribute("CPPgm", "UnderlyingCPProgram_t_689929727"); // 1
    Undly_118_set.insert("UnderlyingCPProgram_t_689929727");
    Undly_118.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_409071093"); // 1
    Undly_118_set.insert("UnderlyingCPRegType_t_409071093");
    Undly_118.add_attribute("AllocPct", "20117303.380000"); // 1
    Undly_118_set.insert("20117303.380000");
    Undly_118.add_attribute("Ccy", "JPY"); // 1
    Undly_118_set.insert("JPY");
    Undly_118.add_attribute("Qty", "12426495.690000"); // 1
    Undly_118_set.insert("12426495.690000");
    Undly_118.add_attribute("SettlTyp", "4"); // 1
    Undly_118_set.insert("4");
    Undly_118.add_attribute("CashAmt", "UnderlyingCashAmount_t_749660143"); // 1
    Undly_118_set.insert("UnderlyingCashAmount_t_749660143");
    Undly_118.add_attribute("CashTyp", "FIXED"); // 1
    Undly_118_set.insert("FIXED");
    Undly_118.add_attribute("Px", "12427801.200000"); // 1
    Undly_118_set.insert("12427801.200000");
    Undly_118.add_attribute("DirtPx", "21367337.610000"); // 1
    Undly_118_set.insert("21367337.610000");
    Undly_118.add_attribute("EndPx", "15474052.400000"); // 1
    Undly_118_set.insert("15474052.400000");
    Undly_118.add_attribute("StartVal", "UnderlyingStartValue_t_1302868072"); // 1
    Undly_118_set.insert("UnderlyingStartValue_t_1302868072");
    Undly_118.add_attribute("CurVal", "UnderlyingCurrentValue_t_1120165628"); // 1
    Undly_118_set.insert("UnderlyingCurrentValue_t_1120165628");
    Undly_118.add_attribute("EndVal", "UnderlyingEndValue_t_1362857628"); // 1
    Undly_118_set.insert("UnderlyingEndValue_t_1362857628");
    Undly_118.add_attribute("AdjQty", "14259204.890000"); // 1
    Undly_118_set.insert("14259204.890000");
    Undly_118.add_attribute("FxRate", "18046514.250000"); // 1
    Undly_118_set.insert("18046514.250000");
    Undly_118.add_attribute("FxRateCalc", "D"); // 1
    Undly_118_set.insert("D");
    Undly_118.add_attribute("CapValu", "UnderlyingCapValue_t_206270275"); // 1
    Undly_118_set.insert("UnderlyingCapValue_t_206270275");
    Undly_118.add_attribute("SetMeth", "UnderlyingSettlMethod_t_82404086"); // 1
    Undly_118_set.insert("UnderlyingSettlMethod_t_82404086");
    Undly_118.add_attribute("PutCall", "621665939"); // 1
    Undly_118_set.insert("621665939");
    all_values.push_back(Undly_118_set);
    all_compo_names.insert("Undly_118_set");

    {
      xml_element UndAID_118{"UndAID"};
      multiset<string> UndAID_118_set;
      UndAID_118.add_attribute("AltID", "UnderlyingSecurityAltID_t_27120132"); // 2
      UndAID_118_set.insert("UnderlyingSecurityAltID_t_27120132");
      UndAID_118.add_attribute("AltIDSrc", "H"); // 2
      UndAID_118_set.insert("H");
      all_values.push_back(UndAID_118_set);
      all_compo_names.insert("UndAID_118_set");

      Undly_118.add_element(UndAID_118);
    }
    {
      xml_element Stip_190{"Stip"};
      multiset<string> Stip_190_set;
      Stip_190.add_attribute("Typ", "PSA"); // 2
      Stip_190_set.insert("PSA");
      Stip_190.add_attribute("Val", "UnderlyingStipValue_t_1910671874"); // 2
      Stip_190_set.insert("UnderlyingStipValue_t_1910671874");
      all_values.push_back(Stip_190_set);
      all_compo_names.insert("Stip_190_set");

      Undly_118.add_element(Stip_190);
    }
    {
      xml_element Pty_434{"Pty"};
      multiset<string> Pty_434_set;
      Pty_434.add_attribute("ID", "UnderlyingInstrumentPartyID_t_4055036"); // 2
      Pty_434_set.insert("UnderlyingInstrumentPartyID_t_4055036");
      Pty_434.add_attribute("Src", "A"); // 2
      Pty_434_set.insert("A");
      Pty_434.add_attribute("R", "51"); // 2
      Pty_434_set.insert("51");
      all_values.push_back(Pty_434_set);
      all_compo_names.insert("Pty_434_set");

      {
        xml_element Sub_434{"Sub"};
        multiset<string> Sub_434_set;
        Sub_434.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_643905190"); // 3
        Sub_434_set.insert("UnderlyingInstrumentPartySubID_t_643905190");
        Sub_434.add_attribute("Typ", "12"); // 3
        Sub_434_set.insert("12");
        all_values.push_back(Sub_434_set);
        all_compo_names.insert("Sub_434_set");

        Pty_434.add_element(Sub_434);
      }
      Undly_118.add_element(Pty_434);
    }
    elt.add_element(Undly_118);
  } // end Undly
  { // Undly
    xml_element Undly_119{"Undly"};
    multiset<string> Undly_119_set;
    Undly_119.add_attribute("Sym", "UnderlyingSymbol_t_2006733433"); // 1
    Undly_119_set.insert("UnderlyingSymbol_t_2006733433");
    Undly_119.add_attribute("Sfx", "WI"); // 1
    Undly_119_set.insert("WI");
    Undly_119.add_attribute("ID", "UnderlyingSecurityID_t_1840441443"); // 1
    Undly_119_set.insert("UnderlyingSecurityID_t_1840441443");
    Undly_119.add_attribute("Src", "2"); // 1
    Undly_119_set.insert("2");
    Undly_119.add_attribute("Prod", "9"); // 1
    Undly_119_set.insert("9");
    Undly_119.add_attribute("CFI", "UnderlyingCFICode_t_1525892753"); // 1
    Undly_119_set.insert("UnderlyingCFICode_t_1525892753");
    Undly_119.add_attribute("SecTyp", "MF"); // 1
    Undly_119_set.insert("MF");
    Undly_119.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_736828191"); // 1
    Undly_119_set.insert("UnderlyingSecuritySubType_t_736828191");
    Undly_119.add_attribute("MMY", "128069249"); // 1
    Undly_119_set.insert("128069249");
    Undly_119.add_attribute("Mat", "UnderlyingMaturityDate_t_116817702"); // 1
    Undly_119_set.insert("UnderlyingMaturityDate_t_116817702");
    Undly_119.add_attribute("MatTm", "1979608311"); // 1
    Undly_119_set.insert("1979608311");
    Undly_119.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_117319362"); // 1
    Undly_119_set.insert("UnderlyingCouponPaymentDate_t_117319362");
    Undly_119.add_attribute("RestrctTyp", "MM"); // 1
    Undly_119_set.insert("MM");
    Undly_119.add_attribute("Snrty", "SB"); // 1
    Undly_119_set.insert("SB");
    Undly_119.add_attribute("NotlPctOut", "12374849.900000"); // 1
    Undly_119_set.insert("12374849.900000");
    Undly_119.add_attribute("OrigNotlPctOut", "8795969.220000"); // 1
    Undly_119_set.insert("8795969.220000");
    Undly_119.add_attribute("AttchPnt", "4134295.760000"); // 1
    Undly_119_set.insert("4134295.760000");
    Undly_119.add_attribute("DetchPnt", "8946527.670000"); // 1
    Undly_119_set.insert("8946527.670000");
    Undly_119.add_attribute("Issued", "UnderlyingIssueDate_t_1239786171"); // 1
    Undly_119_set.insert("UnderlyingIssueDate_t_1239786171");
    Undly_119.add_attribute("RepoCollSecTyp", "619699852"); // 1
    Undly_119_set.insert("619699852");
    Undly_119.add_attribute("RepoTrm", "977056853"); // 1
    Undly_119_set.insert("977056853");
    Undly_119.add_attribute("RepoRt", "18614521.110000"); // 1
    Undly_119_set.insert("18614521.110000");
    Undly_119.add_attribute("Fctr", "6468199.840000"); // 1
    Undly_119_set.insert("6468199.840000");
    Undly_119.add_attribute("CrdRtg", "UnderlyingCreditRating_t_241126969"); // 1
    Undly_119_set.insert("UnderlyingCreditRating_t_241126969");
    Undly_119.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1931439591"); // 1
    Undly_119_set.insert("UnderlyingInstrRegistry_t_1931439591");
    Undly_119.add_attribute("Ctry", "410008211"); // 1
    Undly_119_set.insert("410008211");
    Undly_119.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_245182006"); // 1
    Undly_119_set.insert("UnderlyingStateOrProvinceOfIssue_t_245182006");
    Undly_119.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_731010329"); // 1
    Undly_119_set.insert("UnderlyingLocaleOfIssue_t_731010329");
    Undly_119.add_attribute("Redeem", "UnderlyingRedemptionDate_t_914988371"); // 1
    Undly_119_set.insert("UnderlyingRedemptionDate_t_914988371");
    Undly_119.add_attribute("StrkPx", "8890871.960000"); // 1
    Undly_119_set.insert("8890871.960000");
    Undly_119.add_attribute("StrkCcy", "JPY"); // 1
    Undly_119_set.insert("JPY");
    Undly_119.add_attribute("OptA", "75438465"); // 1
    Undly_119_set.insert("75438465");
    Undly_119.add_attribute("Mult", "18553384.740000"); // 1
    Undly_119_set.insert("18553384.740000");
    Undly_119.add_attribute("MultTyp", "2"); // 1
    Undly_119_set.insert("2");
    Undly_119.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_119_set.insert("3");
    Undly_119.add_attribute("UOM", "MWh"); // 1
    Undly_119_set.insert("MWh");
    Undly_119.add_attribute("UOMQty", "14638806.750000"); // 1
    Undly_119_set.insert("14638806.750000");
    Undly_119.add_attribute("PxUOM", "lbs"); // 1
    Undly_119_set.insert("lbs");
    Undly_119.add_attribute("PxUOMQty", "13618168.290000"); // 1
    Undly_119_set.insert("13618168.290000");
    Undly_119.add_attribute("TmUnit", "Yr"); // 1
    Undly_119_set.insert("Yr");
    Undly_119.add_attribute("ExerStyle", "1"); // 1
    Undly_119_set.insert("1");
    Undly_119.add_attribute("CpnRt", "14791361.910000"); // 1
    Undly_119_set.insert("14791361.910000");
    Undly_119.add_attribute("Exch", "UnderlyingSecurityExchange_t_1097437672"); // 1
    Undly_119_set.insert("UnderlyingSecurityExchange_t_1097437672");
    Undly_119.add_attribute("Issr", "UnderlyingIssuer_t_1553667630"); // 1
    Undly_119_set.insert("UnderlyingIssuer_t_1553667630");
    Undly_119.add_attribute("EncUndIssrLen", "569137533"); // 1
    Undly_119_set.insert("569137533");
    Undly_119.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1977034594"); // 1
    Undly_119_set.insert("EncodedUnderlyingIssuer_t_1977034594");
    Undly_119.add_attribute("Desc", "UnderlyingSecurityDesc_t_1967097207"); // 1
    Undly_119_set.insert("UnderlyingSecurityDesc_t_1967097207");
    Undly_119.add_attribute("EncUndSecDescLen", "1463790300"); // 1
    Undly_119_set.insert("1463790300");
    Undly_119.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1069337118"); // 1
    Undly_119_set.insert("EncodedUnderlyingSecurityDesc_t_1069337118");
    Undly_119.add_attribute("CPPgm", "UnderlyingCPProgram_t_439313411"); // 1
    Undly_119_set.insert("UnderlyingCPProgram_t_439313411");
    Undly_119.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_293363505"); // 1
    Undly_119_set.insert("UnderlyingCPRegType_t_293363505");
    Undly_119.add_attribute("AllocPct", "7833055.810000"); // 1
    Undly_119_set.insert("7833055.810000");
    Undly_119.add_attribute("Ccy", "CAN"); // 1
    Undly_119_set.insert("CAN");
    Undly_119.add_attribute("Qty", "5672615.240000"); // 1
    Undly_119_set.insert("5672615.240000");
    Undly_119.add_attribute("SettlTyp", "5"); // 1
    Undly_119_set.insert("5");
    Undly_119.add_attribute("CashAmt", "UnderlyingCashAmount_t_779672481"); // 1
    Undly_119_set.insert("UnderlyingCashAmount_t_779672481");
    Undly_119.add_attribute("CashTyp", "DIFF"); // 1
    Undly_119_set.insert("DIFF");
    Undly_119.add_attribute("Px", "2636463.290000"); // 1
    Undly_119_set.insert("2636463.290000");
    Undly_119.add_attribute("DirtPx", "16687596.770000"); // 1
    Undly_119_set.insert("16687596.770000");
    Undly_119.add_attribute("EndPx", "13131688.840000"); // 1
    Undly_119_set.insert("13131688.840000");
    Undly_119.add_attribute("StartVal", "UnderlyingStartValue_t_1037884485"); // 1
    Undly_119_set.insert("UnderlyingStartValue_t_1037884485");
    Undly_119.add_attribute("CurVal", "UnderlyingCurrentValue_t_1744198142"); // 1
    Undly_119_set.insert("UnderlyingCurrentValue_t_1744198142");
    Undly_119.add_attribute("EndVal", "UnderlyingEndValue_t_1021023711"); // 1
    Undly_119_set.insert("UnderlyingEndValue_t_1021023711");
    Undly_119.add_attribute("AdjQty", "15356191.160000"); // 1
    Undly_119_set.insert("15356191.160000");
    Undly_119.add_attribute("FxRate", "15939201.830000"); // 1
    Undly_119_set.insert("15939201.830000");
    Undly_119.add_attribute("FxRateCalc", "D"); // 1
    Undly_119_set.insert("D");
    Undly_119.add_attribute("CapValu", "UnderlyingCapValue_t_852016143"); // 1
    Undly_119_set.insert("UnderlyingCapValue_t_852016143");
    Undly_119.add_attribute("SetMeth", "UnderlyingSettlMethod_t_32986766"); // 1
    Undly_119_set.insert("UnderlyingSettlMethod_t_32986766");
    Undly_119.add_attribute("PutCall", "1469104472"); // 1
    Undly_119_set.insert("1469104472");
    all_values.push_back(Undly_119_set);
    all_compo_names.insert("Undly_119_set");

    {
      xml_element UndAID_119{"UndAID"};
      multiset<string> UndAID_119_set;
      UndAID_119.add_attribute("AltID", "UnderlyingSecurityAltID_t_285230873"); // 2
      UndAID_119_set.insert("UnderlyingSecurityAltID_t_285230873");
      UndAID_119.add_attribute("AltIDSrc", "C"); // 2
      UndAID_119_set.insert("C");
      all_values.push_back(UndAID_119_set);
      all_compo_names.insert("UndAID_119_set");

      Undly_119.add_element(UndAID_119);
    }
    {
      xml_element Stip_191{"Stip"};
      multiset<string> Stip_191_set;
      Stip_191.add_attribute("Typ", "WAL"); // 2
      Stip_191_set.insert("WAL");
      Stip_191.add_attribute("Val", "UnderlyingStipValue_t_1382668545"); // 2
      Stip_191_set.insert("UnderlyingStipValue_t_1382668545");
      all_values.push_back(Stip_191_set);
      all_compo_names.insert("Stip_191_set");

      Undly_119.add_element(Stip_191);
    }
    {
      xml_element Pty_435{"Pty"};
      multiset<string> Pty_435_set;
      Pty_435.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2005329292"); // 2
      Pty_435_set.insert("UnderlyingInstrumentPartyID_t_2005329292");
      Pty_435.add_attribute("Src", "D"); // 2
      Pty_435_set.insert("D");
      Pty_435.add_attribute("R", "8"); // 2
      Pty_435_set.insert("8");
      all_values.push_back(Pty_435_set);
      all_compo_names.insert("Pty_435_set");

      {
        xml_element Sub_435{"Sub"};
        multiset<string> Sub_435_set;
        Sub_435.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1824942851"); // 3
        Sub_435_set.insert("UnderlyingInstrumentPartySubID_t_1824942851");
        Sub_435.add_attribute("Typ", "9"); // 3
        Sub_435_set.insert("9");
        all_values.push_back(Sub_435_set);
        all_compo_names.insert("Sub_435_set");

        Pty_435.add_element(Sub_435);
      }
      Undly_119.add_element(Pty_435);
    }
    elt.add_element(Undly_119);
  } // end Undly
  { // Undly
    xml_element Undly_120{"Undly"};
    multiset<string> Undly_120_set;
    Undly_120.add_attribute("Sym", "UnderlyingSymbol_t_134072961"); // 1
    Undly_120_set.insert("UnderlyingSymbol_t_134072961");
    Undly_120.add_attribute("Sfx", "CD"); // 1
    Undly_120_set.insert("CD");
    Undly_120.add_attribute("ID", "UnderlyingSecurityID_t_979564705"); // 1
    Undly_120_set.insert("UnderlyingSecurityID_t_979564705");
    Undly_120.add_attribute("Src", "F"); // 1
    Undly_120_set.insert("F");
    Undly_120.add_attribute("Prod", "3"); // 1
    Undly_120_set.insert("3");
    Undly_120.add_attribute("CFI", "UnderlyingCFICode_t_1514055180"); // 1
    Undly_120_set.insert("UnderlyingCFICode_t_1514055180");
    Undly_120.add_attribute("SecTyp", "REPLACD"); // 1
    Undly_120_set.insert("REPLACD");
    Undly_120.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_551563968"); // 1
    Undly_120_set.insert("UnderlyingSecuritySubType_t_551563968");
    Undly_120.add_attribute("MMY", "146244013"); // 1
    Undly_120_set.insert("146244013");
    Undly_120.add_attribute("Mat", "UnderlyingMaturityDate_t_635428272"); // 1
    Undly_120_set.insert("UnderlyingMaturityDate_t_635428272");
    Undly_120.add_attribute("MatTm", "815210297"); // 1
    Undly_120_set.insert("815210297");
    Undly_120.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1815003690"); // 1
    Undly_120_set.insert("UnderlyingCouponPaymentDate_t_1815003690");
    Undly_120.add_attribute("RestrctTyp", "MR"); // 1
    Undly_120_set.insert("MR");
    Undly_120.add_attribute("Snrty", "SD"); // 1
    Undly_120_set.insert("SD");
    Undly_120.add_attribute("NotlPctOut", "14117181.850000"); // 1
    Undly_120_set.insert("14117181.850000");
    Undly_120.add_attribute("OrigNotlPctOut", "8221372.200000"); // 1
    Undly_120_set.insert("8221372.200000");
    Undly_120.add_attribute("AttchPnt", "12412302.510000"); // 1
    Undly_120_set.insert("12412302.510000");
    Undly_120.add_attribute("DetchPnt", "8581547.200000"); // 1
    Undly_120_set.insert("8581547.200000");
    Undly_120.add_attribute("Issued", "UnderlyingIssueDate_t_929424863"); // 1
    Undly_120_set.insert("UnderlyingIssueDate_t_929424863");
    Undly_120.add_attribute("RepoCollSecTyp", "2093246395"); // 1
    Undly_120_set.insert("2093246395");
    Undly_120.add_attribute("RepoTrm", "891141486"); // 1
    Undly_120_set.insert("891141486");
    Undly_120.add_attribute("RepoRt", "2510456.870000"); // 1
    Undly_120_set.insert("2510456.870000");
    Undly_120.add_attribute("Fctr", "2309936.200000"); // 1
    Undly_120_set.insert("2309936.200000");
    Undly_120.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1342803148"); // 1
    Undly_120_set.insert("UnderlyingCreditRating_t_1342803148");
    Undly_120.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1051802702"); // 1
    Undly_120_set.insert("UnderlyingInstrRegistry_t_1051802702");
    Undly_120.add_attribute("Ctry", "1613662165"); // 1
    Undly_120_set.insert("1613662165");
    Undly_120.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1200648792"); // 1
    Undly_120_set.insert("UnderlyingStateOrProvinceOfIssue_t_1200648792");
    Undly_120.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_274213602"); // 1
    Undly_120_set.insert("UnderlyingLocaleOfIssue_t_274213602");
    Undly_120.add_attribute("Redeem", "UnderlyingRedemptionDate_t_678398008"); // 1
    Undly_120_set.insert("UnderlyingRedemptionDate_t_678398008");
    Undly_120.add_attribute("StrkPx", "8781079.950000"); // 1
    Undly_120_set.insert("8781079.950000");
    Undly_120.add_attribute("StrkCcy", "GBP"); // 1
    Undly_120_set.insert("GBP");
    Undly_120.add_attribute("OptA", "994880609"); // 1
    Undly_120_set.insert("994880609");
    Undly_120.add_attribute("Mult", "19399795.070000"); // 1
    Undly_120_set.insert("19399795.070000");
    Undly_120.add_attribute("MultTyp", "0"); // 1
    Undly_120_set.insert("0");
    Undly_120.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_120_set.insert("0");
    Undly_120.add_attribute("UOM", "Bbl"); // 1
    Undly_120_set.insert("Bbl");
    Undly_120.add_attribute("UOMQty", "10670059.310000"); // 1
    Undly_120_set.insert("10670059.310000");
    Undly_120.add_attribute("PxUOM", "Bcf"); // 1
    Undly_120_set.insert("Bcf");
    Undly_120.add_attribute("PxUOMQty", "14527950.530000"); // 1
    Undly_120_set.insert("14527950.530000");
    Undly_120.add_attribute("TmUnit", "H"); // 1
    Undly_120_set.insert("H");
    Undly_120.add_attribute("ExerStyle", "2"); // 1
    Undly_120_set.insert("2");
    Undly_120.add_attribute("CpnRt", "11203150.960000"); // 1
    Undly_120_set.insert("11203150.960000");
    Undly_120.add_attribute("Exch", "UnderlyingSecurityExchange_t_1503547713"); // 1
    Undly_120_set.insert("UnderlyingSecurityExchange_t_1503547713");
    Undly_120.add_attribute("Issr", "UnderlyingIssuer_t_1122688371"); // 1
    Undly_120_set.insert("UnderlyingIssuer_t_1122688371");
    Undly_120.add_attribute("EncUndIssrLen", "384549633"); // 1
    Undly_120_set.insert("384549633");
    Undly_120.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_178201285"); // 1
    Undly_120_set.insert("EncodedUnderlyingIssuer_t_178201285");
    Undly_120.add_attribute("Desc", "UnderlyingSecurityDesc_t_216434974"); // 1
    Undly_120_set.insert("UnderlyingSecurityDesc_t_216434974");
    Undly_120.add_attribute("EncUndSecDescLen", "1242704353"); // 1
    Undly_120_set.insert("1242704353");
    Undly_120.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1107626148"); // 1
    Undly_120_set.insert("EncodedUnderlyingSecurityDesc_t_1107626148");
    Undly_120.add_attribute("CPPgm", "UnderlyingCPProgram_t_162197721"); // 1
    Undly_120_set.insert("UnderlyingCPProgram_t_162197721");
    Undly_120.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2133845839"); // 1
    Undly_120_set.insert("UnderlyingCPRegType_t_2133845839");
    Undly_120.add_attribute("AllocPct", "13586718.350000"); // 1
    Undly_120_set.insert("13586718.350000");
    Undly_120.add_attribute("Ccy", "CHF"); // 1
    Undly_120_set.insert("CHF");
    Undly_120.add_attribute("Qty", "2629908.890000"); // 1
    Undly_120_set.insert("2629908.890000");
    Undly_120.add_attribute("SettlTyp", "5"); // 1
    Undly_120_set.insert("5");
    Undly_120.add_attribute("CashAmt", "UnderlyingCashAmount_t_382330483"); // 1
    Undly_120_set.insert("UnderlyingCashAmount_t_382330483");
    Undly_120.add_attribute("CashTyp", "DIFF"); // 1
    Undly_120_set.insert("DIFF");
    Undly_120.add_attribute("Px", "5377678.670000"); // 1
    Undly_120_set.insert("5377678.670000");
    Undly_120.add_attribute("DirtPx", "12604384.780000"); // 1
    Undly_120_set.insert("12604384.780000");
    Undly_120.add_attribute("EndPx", "14976192.930000"); // 1
    Undly_120_set.insert("14976192.930000");
    Undly_120.add_attribute("StartVal", "UnderlyingStartValue_t_1350238837"); // 1
    Undly_120_set.insert("UnderlyingStartValue_t_1350238837");
    Undly_120.add_attribute("CurVal", "UnderlyingCurrentValue_t_107835439"); // 1
    Undly_120_set.insert("UnderlyingCurrentValue_t_107835439");
    Undly_120.add_attribute("EndVal", "UnderlyingEndValue_t_1290115152"); // 1
    Undly_120_set.insert("UnderlyingEndValue_t_1290115152");
    Undly_120.add_attribute("AdjQty", "9326047.010000"); // 1
    Undly_120_set.insert("9326047.010000");
    Undly_120.add_attribute("FxRate", "1581384.100000"); // 1
    Undly_120_set.insert("1581384.100000");
    Undly_120.add_attribute("FxRateCalc", "M"); // 1
    Undly_120_set.insert("M");
    Undly_120.add_attribute("CapValu", "UnderlyingCapValue_t_1999610633"); // 1
    Undly_120_set.insert("UnderlyingCapValue_t_1999610633");
    Undly_120.add_attribute("SetMeth", "UnderlyingSettlMethod_t_760005348"); // 1
    Undly_120_set.insert("UnderlyingSettlMethod_t_760005348");
    Undly_120.add_attribute("PutCall", "1901977598"); // 1
    Undly_120_set.insert("1901977598");
    all_values.push_back(Undly_120_set);
    all_compo_names.insert("Undly_120_set");

    {
      xml_element UndAID_120{"UndAID"};
      multiset<string> UndAID_120_set;
      UndAID_120.add_attribute("AltID", "UnderlyingSecurityAltID_t_1554561189"); // 2
      UndAID_120_set.insert("UnderlyingSecurityAltID_t_1554561189");
      UndAID_120.add_attribute("AltIDSrc", "5"); // 2
      UndAID_120_set.insert("5");
      all_values.push_back(UndAID_120_set);
      all_compo_names.insert("UndAID_120_set");

      Undly_120.add_element(UndAID_120);
    }
    {
      xml_element Stip_192{"Stip"};
      multiset<string> Stip_192_set;
      Stip_192.add_attribute("Typ", "CPP"); // 2
      Stip_192_set.insert("CPP");
      Stip_192.add_attribute("Val", "UnderlyingStipValue_t_910625254"); // 2
      Stip_192_set.insert("UnderlyingStipValue_t_910625254");
      all_values.push_back(Stip_192_set);
      all_compo_names.insert("Stip_192_set");

      Undly_120.add_element(Stip_192);
    }
    {
      xml_element Pty_436{"Pty"};
      multiset<string> Pty_436_set;
      Pty_436.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1152287307"); // 2
      Pty_436_set.insert("UnderlyingInstrumentPartyID_t_1152287307");
      Pty_436.add_attribute("Src", "2"); // 2
      Pty_436_set.insert("2");
      Pty_436.add_attribute("R", "61"); // 2
      Pty_436_set.insert("61");
      all_values.push_back(Pty_436_set);
      all_compo_names.insert("Pty_436_set");

      {
        xml_element Sub_436{"Sub"};
        multiset<string> Sub_436_set;
        Sub_436.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1368722282"); // 3
        Sub_436_set.insert("UnderlyingInstrumentPartySubID_t_1368722282");
        Sub_436.add_attribute("Typ", "28"); // 3
        Sub_436_set.insert("28");
        all_values.push_back(Sub_436_set);
        all_compo_names.insert("Sub_436_set");

        Pty_436.add_element(Sub_436);
      }
      Undly_120.add_element(Pty_436);
    }
    elt.add_element(Undly_120);
  } // end Undly
  { // Leg
    xml_element Leg_101{"Leg"};
    multiset<string> Leg_101_set;
    Leg_101.add_attribute("Sym", "LegSymbol_t_1530920003"); // 1
    Leg_101_set.insert("LegSymbol_t_1530920003");
    Leg_101.add_attribute("Sfx", "WI"); // 1
    Leg_101_set.insert("WI");
    Leg_101.add_attribute("ID", "LegSecurityID_t_1407640874"); // 1
    Leg_101_set.insert("LegSecurityID_t_1407640874");
    Leg_101.add_attribute("Src", "E"); // 1
    Leg_101_set.insert("E");
    Leg_101.add_attribute("Prod", "6"); // 1
    Leg_101_set.insert("6");
    Leg_101.add_attribute("CFI", "LegCFICode_t_1670631763"); // 1
    Leg_101_set.insert("LegCFICode_t_1670631763");
    Leg_101.add_attribute("SecTyp", "REPLACD"); // 1
    Leg_101_set.insert("REPLACD");
    Leg_101.add_attribute("SecSubTyp", "LegSecuritySubType_t_2052437398"); // 1
    Leg_101_set.insert("LegSecuritySubType_t_2052437398");
    Leg_101.add_attribute("MMY", "60352606"); // 1
    Leg_101_set.insert("60352606");
    Leg_101.add_attribute("Mat", "LegMaturityDate_t_173765422"); // 1
    Leg_101_set.insert("LegMaturityDate_t_173765422");
    Leg_101.add_attribute("MatTm", "1165392229"); // 1
    Leg_101_set.insert("1165392229");
    Leg_101.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1557971899"); // 1
    Leg_101_set.insert("LegCouponPaymentDate_t_1557971899");
    Leg_101.add_attribute("Issued", "LegIssueDate_t_1524004259"); // 1
    Leg_101_set.insert("LegIssueDate_t_1524004259");
    Leg_101.add_attribute("RepoCollSecTyp", "1273227668"); // 1
    Leg_101_set.insert("1273227668");
    Leg_101.add_attribute("RepoTrm", "700603403"); // 1
    Leg_101_set.insert("700603403");
    Leg_101.add_attribute("RepoRt", "3091253.130000"); // 1
    Leg_101_set.insert("3091253.130000");
    Leg_101.add_attribute("Fctr", "14313660.780000"); // 1
    Leg_101_set.insert("14313660.780000");
    Leg_101.add_attribute("CrdRtg", "LegCreditRating_t_1149785948"); // 1
    Leg_101_set.insert("LegCreditRating_t_1149785948");
    Leg_101.add_attribute("Rgstry", "LegInstrRegistry_t_161252298"); // 1
    Leg_101_set.insert("LegInstrRegistry_t_161252298");
    Leg_101.add_attribute("Ctry", "43887779"); // 1
    Leg_101_set.insert("43887779");
    Leg_101.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_904279898"); // 1
    Leg_101_set.insert("LegStateOrProvinceOfIssue_t_904279898");
    Leg_101.add_attribute("Lcl", "LegLocaleOfIssue_t_1715813487"); // 1
    Leg_101_set.insert("LegLocaleOfIssue_t_1715813487");
    Leg_101.add_attribute("Redeem", "LegRedemptionDate_t_73486715"); // 1
    Leg_101_set.insert("LegRedemptionDate_t_73486715");
    Leg_101.add_attribute("Strk", "17790889.440000"); // 1
    Leg_101_set.insert("17790889.440000");
    Leg_101.add_attribute("StrkCcy", "CHF"); // 1
    Leg_101_set.insert("CHF");
    Leg_101.add_attribute("OptA", "890963975"); // 1
    Leg_101_set.insert("890963975");
    Leg_101.add_attribute("Cmult", "15677816.320000"); // 1
    Leg_101_set.insert("15677816.320000");
    Leg_101.add_attribute("MultTyp", "0"); // 1
    Leg_101_set.insert("0");
    Leg_101.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_101_set.insert("4");
    Leg_101.add_attribute("UOM", "Gal"); // 1
    Leg_101_set.insert("Gal");
    Leg_101.add_attribute("UOMQty", "19779326.600000"); // 1
    Leg_101_set.insert("19779326.600000");
    Leg_101.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_101_set.insert("oz_tr");
    Leg_101.add_attribute("PxUOMQty", "8769078.970000"); // 1
    Leg_101_set.insert("8769078.970000");
    Leg_101.add_attribute("TmUnit", "Wk"); // 1
    Leg_101_set.insert("Wk");
    Leg_101.add_attribute("ExerStyle", "2"); // 1
    Leg_101_set.insert("2");
    Leg_101.add_attribute("CpnRt", "4000560.120000"); // 1
    Leg_101_set.insert("4000560.120000");
    Leg_101.add_attribute("Exch", "LegSecurityExchange_t_1390557913"); // 1
    Leg_101_set.insert("LegSecurityExchange_t_1390557913");
    Leg_101.add_attribute("Issr", "LegIssuer_t_1014061952"); // 1
    Leg_101_set.insert("LegIssuer_t_1014061952");
    Leg_101.add_attribute("EncLegIssrLen", "460408618"); // 1
    Leg_101_set.insert("460408618");
    Leg_101.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1564323335"); // 1
    Leg_101_set.insert("EncodedLegIssuer_t_1564323335");
    Leg_101.add_attribute("Desc", "LegSecurityDesc_t_31970533"); // 1
    Leg_101_set.insert("LegSecurityDesc_t_31970533");
    Leg_101.add_attribute("EncLegSecDescLen", "2018380517"); // 1
    Leg_101_set.insert("2018380517");
    Leg_101.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_940843947"); // 1
    Leg_101_set.insert("EncodedLegSecurityDesc_t_940843947");
    Leg_101.add_attribute("RatioQty", "13051982.010000"); // 1
    Leg_101_set.insert("13051982.010000");
    Leg_101.add_attribute("Side", "1"); // 1
    Leg_101_set.insert("1");
    Leg_101.add_attribute("Ccy", "GBP"); // 1
    Leg_101_set.insert("GBP");
    Leg_101.add_attribute("Pool", "LegPool_t_1721286220"); // 1
    Leg_101_set.insert("LegPool_t_1721286220");
    Leg_101.add_attribute("Dated", "LegDatedDate_t_1411221558"); // 1
    Leg_101_set.insert("LegDatedDate_t_1411221558");
    Leg_101.add_attribute("CSetMo", "632968411"); // 1
    Leg_101_set.insert("632968411");
    Leg_101.add_attribute("IntAcrl", "LegInterestAccrualDate_t_478082470"); // 1
    Leg_101_set.insert("LegInterestAccrualDate_t_478082470");
    Leg_101.add_attribute("PutCall", "979551397"); // 1
    Leg_101_set.insert("979551397");
    Leg_101.add_attribute("LegOptionRatio", "7064551.260000"); // 1
    Leg_101_set.insert("7064551.260000");
    Leg_101.add_attribute("Px", "1096877.660000"); // 1
    Leg_101_set.insert("1096877.660000");
    all_values.push_back(Leg_101_set);
    all_compo_names.insert("Leg_101_set");

    {
      xml_element LegAID_98{"LegAID"};
      multiset<string> LegAID_98_set;
      LegAID_98.add_attribute("SecAltID", "LegSecurityAltID_t_1458506490"); // 2
      LegAID_98_set.insert("LegSecurityAltID_t_1458506490");
      LegAID_98.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_98_set.insert("G");
      all_values.push_back(LegAID_98_set);
      all_compo_names.insert("LegAID_98_set");

      Leg_101.add_element(LegAID_98);
    }
    elt.add_element(Leg_101);
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
