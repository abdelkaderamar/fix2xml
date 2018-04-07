#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceReport.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceReport_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosMntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_612776750"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosMaintRptID_t_612776750");
  elt.add_attribute("TxnTyp", "2"); // 0
  PositionMaintenanceReport_message_t_0.insert("2");
  elt.add_attribute("ReqID", "PosReqID_t_690199411"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosReqID_t_690199411");
  elt.add_attribute("Actn", "4"); // 0
  PositionMaintenanceReport_message_t_0.insert("4");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_367646664"); // 0
  PositionMaintenanceReport_message_t_0.insert("OrigPosReqRefID_t_367646664");
  elt.add_attribute("Stat", "3"); // 0
  PositionMaintenanceReport_message_t_0.insert("3");
  elt.add_attribute("Rslt", "1"); // 0
  PositionMaintenanceReport_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_857809269"); // 0
  PositionMaintenanceReport_message_t_0.insert("ClearingBusinessDate_t_857809269");
  elt.add_attribute("SetSesID", "RTH"); // 0
  PositionMaintenanceReport_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_2008919590"); // 0
  PositionMaintenanceReport_message_t_0.insert("SettlSessSubID_t_2008919590");
  elt.add_attribute("Acct", "Account_t_1457265341"); // 0
  PositionMaintenanceReport_message_t_0.insert("Account_t_1457265341");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  PositionMaintenanceReport_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "4"); // 0
  PositionMaintenanceReport_message_t_0.insert("4");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_1200177685"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosMaintRptRefID_t_1200177685");
  elt.add_attribute("Ccy", "CAN"); // 0
  PositionMaintenanceReport_message_t_0.insert("CAN");
  elt.add_attribute("SettlCcy", "USD"); // 0
  PositionMaintenanceReport_message_t_0.insert("USD");
  elt.add_attribute("CntraryInstrctnInd", "true"); // 0
  PositionMaintenanceReport_message_t_0.insert("true");
  elt.add_attribute("PriorSpreadInd", "false"); // 0
  PositionMaintenanceReport_message_t_0.insert("false");
  elt.add_attribute("TxnTm", "TransactTime_t_1360293613"); // 0
  PositionMaintenanceReport_message_t_0.insert("TransactTime_t_1360293613");
  elt.add_attribute("AdjTyp", "0"); // 0
  PositionMaintenanceReport_message_t_0.insert("0");
  elt.add_attribute("ThresholdAmt", "19101431.630000"); // 0
  PositionMaintenanceReport_message_t_0.insert("19101431.630000");
  elt.add_attribute("Txt", "Text_t_288605609"); // 0
  PositionMaintenanceReport_message_t_0.insert("Text_t_288605609");
  elt.add_attribute("EncTxtLen", "834575409"); // 0
  PositionMaintenanceReport_message_t_0.insert("834575409");
  elt.add_attribute("EncTxt", "EncodedText_t_513825338"); // 0
  PositionMaintenanceReport_message_t_0.insert("EncodedText_t_513825338");
  all_values.push_back(PositionMaintenanceReport_message_t_0);
  all_compo_names.insert("PositionMaintenanceReport_message_t");

  { // Hdr
    xml_element Hdr_65{"Hdr"};
    multiset<string> Hdr_65_set;
    Hdr_65.add_attribute("SeqNum", "1260215075"); // 1
    Hdr_65_set.insert("1260215075");
    Hdr_65.add_attribute("SID", "SenderCompID_t_531346772"); // 1
    Hdr_65_set.insert("SenderCompID_t_531346772");
    Hdr_65.add_attribute("TID", "TargetCompID_t_1504708894"); // 1
    Hdr_65_set.insert("TargetCompID_t_1504708894");
    Hdr_65.add_attribute("OBID", "OnBehalfOfCompID_t_879542906"); // 1
    Hdr_65_set.insert("OnBehalfOfCompID_t_879542906");
    Hdr_65.add_attribute("D2ID", "DeliverToCompID_t_808255415"); // 1
    Hdr_65_set.insert("DeliverToCompID_t_808255415");
    Hdr_65.add_attribute("SSub", "SenderSubID_t_2117485644"); // 1
    Hdr_65_set.insert("SenderSubID_t_2117485644");
    Hdr_65.add_attribute("SLoc", "SenderLocationID_t_1331658519"); // 1
    Hdr_65_set.insert("SenderLocationID_t_1331658519");
    Hdr_65.add_attribute("TSub", "TargetSubID_t_1498454826"); // 1
    Hdr_65_set.insert("TargetSubID_t_1498454826");
    Hdr_65.add_attribute("TLoc", "TargetLocationID_t_375656996"); // 1
    Hdr_65_set.insert("TargetLocationID_t_375656996");
    Hdr_65.add_attribute("OBSub", "OnBehalfOfSubID_t_1699305183"); // 1
    Hdr_65_set.insert("OnBehalfOfSubID_t_1699305183");
    Hdr_65.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1045124286"); // 1
    Hdr_65_set.insert("OnBehalfOfLocationID_t_1045124286");
    Hdr_65.add_attribute("D2Sub", "DeliverToSubID_t_826321461"); // 1
    Hdr_65_set.insert("DeliverToSubID_t_826321461");
    Hdr_65.add_attribute("D2Loc", "DeliverToLocationID_t_409630805"); // 1
    Hdr_65_set.insert("DeliverToLocationID_t_409630805");
    Hdr_65.add_attribute("PosDup", "Y"); // 1
    Hdr_65_set.insert("Y");
    Hdr_65.add_attribute("PosRsnd", "Y"); // 1
    Hdr_65_set.insert("Y");
    Hdr_65.add_attribute("Snt", "SendingTime_t_1866896146"); // 1
    Hdr_65_set.insert("SendingTime_t_1866896146");
    Hdr_65.add_attribute("OrigSnt", "OrigSendingTime_t_2054930254"); // 1
    Hdr_65_set.insert("OrigSendingTime_t_2054930254");
    Hdr_65.add_attribute("MsgEncd", "MessageEncoding_t_1684773910"); // 1
    Hdr_65_set.insert("MessageEncoding_t_1684773910");
    all_values.push_back(Hdr_65_set);
    all_compo_names.insert("Hdr_65_set");

    {
      xml_element Hop_65{"Hop"};
      multiset<string> Hop_65_set;
      Hop_65.add_attribute("ID", "HopCompID_t_919590183"); // 2
      Hop_65_set.insert("HopCompID_t_919590183");
      Hop_65.add_attribute("Ref", "925912768"); // 2
      Hop_65_set.insert("925912768");
      Hop_65.add_attribute("Snt", "HopSendingTime_t_1819731579"); // 2
      Hop_65_set.insert("HopSendingTime_t_1819731579");
      all_values.push_back(Hop_65_set);
      all_compo_names.insert("Hop_65_set");

      Hdr_65.add_element(Hop_65);
    }
    elt.add_element(Hdr_65);
  } // end Hdr
  { // Pty
    xml_element Pty_306{"Pty"};
    multiset<string> Pty_306_set;
    Pty_306.add_attribute("ID", "PartyID_t_1957888102"); // 1
    Pty_306_set.insert("PartyID_t_1957888102");
    Pty_306.add_attribute("Src", "8"); // 1
    Pty_306_set.insert("8");
    Pty_306.add_attribute("R", "13"); // 1
    Pty_306_set.insert("13");
    all_values.push_back(Pty_306_set);
    all_compo_names.insert("Pty_306_set");

    {
      xml_element Sub_306{"Sub"};
      multiset<string> Sub_306_set;
      Sub_306.add_attribute("ID", "PartySubID_t_1170698067"); // 2
      Sub_306_set.insert("PartySubID_t_1170698067");
      Sub_306.add_attribute("Typ", "3"); // 2
      Sub_306_set.insert("3");
      all_values.push_back(Sub_306_set);
      all_compo_names.insert("Sub_306_set");

      Pty_306.add_element(Sub_306);
    }
    elt.add_element(Pty_306);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_55{"Instrmt"};
    multiset<string> Instrmt_55_set;
    Instrmt_55.add_attribute("Sym", "Symbol_t_31038595"); // 1
    Instrmt_55_set.insert("Symbol_t_31038595");
    Instrmt_55.add_attribute("Sfx", "WI"); // 1
    Instrmt_55_set.insert("WI");
    Instrmt_55.add_attribute("ID", "SecurityID_t_1575044476"); // 1
    Instrmt_55_set.insert("SecurityID_t_1575044476");
    Instrmt_55.add_attribute("Src", "A"); // 1
    Instrmt_55_set.insert("A");
    Instrmt_55.add_attribute("Prod", "13"); // 1
    Instrmt_55_set.insert("13");
    Instrmt_55.add_attribute("ProdCmplx", "ProductComplex_t_2106391248"); // 1
    Instrmt_55_set.insert("ProductComplex_t_2106391248");
    Instrmt_55.add_attribute("SecGrp", "SecurityGroup_t_2049572827"); // 1
    Instrmt_55_set.insert("SecurityGroup_t_2049572827");
    Instrmt_55.add_attribute("CFI", "CFICode_t_1451578010"); // 1
    Instrmt_55_set.insert("CFICode_t_1451578010");
    Instrmt_55.add_attribute("SecTyp", "REPLACD"); // 1
    Instrmt_55_set.insert("REPLACD");
    Instrmt_55.add_attribute("SubTyp", "SecuritySubType_t_2019574824"); // 1
    Instrmt_55_set.insert("SecuritySubType_t_2019574824");
    Instrmt_55.add_attribute("MMY", "635752882"); // 1
    Instrmt_55_set.insert("635752882");
    Instrmt_55.add_attribute("MatDt", "MaturityDate_t_118134194"); // 1
    Instrmt_55_set.insert("MaturityDate_t_118134194");
    Instrmt_55.add_attribute("MatTm", "247748172"); // 1
    Instrmt_55_set.insert("247748172");
    Instrmt_55.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_187574417"); // 1
    Instrmt_55_set.insert("SettleOnOpenFlag_t_187574417");
    Instrmt_55.add_attribute("AsgnMeth", "1163258480"); // 1
    Instrmt_55_set.insert("1163258480");
    Instrmt_55.add_attribute("Status", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("CpnPmt", "CouponPaymentDate_t_597205222"); // 1
    Instrmt_55_set.insert("CouponPaymentDate_t_597205222");
    Instrmt_55.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_55_set.insert("FR");
    Instrmt_55.add_attribute("Snrty", "SB"); // 1
    Instrmt_55_set.insert("SB");
    Instrmt_55.add_attribute("NotlPctOut", "3166177.200000"); // 1
    Instrmt_55_set.insert("3166177.200000");
    Instrmt_55.add_attribute("OrigNotlPctOut", "856210.220000"); // 1
    Instrmt_55_set.insert("856210.220000");
    Instrmt_55.add_attribute("AttchPnt", "12991172.980000"); // 1
    Instrmt_55_set.insert("12991172.980000");
    Instrmt_55.add_attribute("DetchPnt", "12362079.040000"); // 1
    Instrmt_55_set.insert("12362079.040000");
    Instrmt_55.add_attribute("Issued", "IssueDate_t_1011533790"); // 1
    Instrmt_55_set.insert("IssueDate_t_1011533790");
    Instrmt_55.add_attribute("RepoCollSecTyp", "971365229"); // 1
    Instrmt_55_set.insert("971365229");
    Instrmt_55.add_attribute("RepoTrm", "1961333251"); // 1
    Instrmt_55_set.insert("1961333251");
    Instrmt_55.add_attribute("RepoRt", "8219382.450000"); // 1
    Instrmt_55_set.insert("8219382.450000");
    Instrmt_55.add_attribute("Fctr", "448597.130000"); // 1
    Instrmt_55_set.insert("448597.130000");
    Instrmt_55.add_attribute("CrdRtg", "CreditRating_t_82228683"); // 1
    Instrmt_55_set.insert("CreditRating_t_82228683");
    Instrmt_55.add_attribute("Rgstry", "InstrRegistry_t_1992636312"); // 1
    Instrmt_55_set.insert("InstrRegistry_t_1992636312");
    Instrmt_55.add_attribute("IssuCtry", "785328780"); // 1
    Instrmt_55_set.insert("785328780");
    Instrmt_55.add_attribute("StPrv", "StateOrProvinceOfIssue_t_113267278"); // 1
    Instrmt_55_set.insert("StateOrProvinceOfIssue_t_113267278");
    Instrmt_55.add_attribute("Lcl", "LocaleOfIssue_t_1304456341"); // 1
    Instrmt_55_set.insert("LocaleOfIssue_t_1304456341");
    Instrmt_55.add_attribute("Redeem", "RedemptionDate_t_212889609"); // 1
    Instrmt_55_set.insert("RedemptionDate_t_212889609");
    Instrmt_55.add_attribute("StrkPx", "6581312.110000"); // 1
    Instrmt_55_set.insert("6581312.110000");
    Instrmt_55.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_55_set.insert("EUR");
    Instrmt_55.add_attribute("StrkMult", "5602203.900000"); // 1
    Instrmt_55_set.insert("5602203.900000");
    Instrmt_55.add_attribute("StrkValu", "11805858.080000"); // 1
    Instrmt_55_set.insert("11805858.080000");
    Instrmt_55.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("StrkPxBndryPrcsn", "18163386.900000"); // 1
    Instrmt_55_set.insert("18163386.900000");
    Instrmt_55.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_55_set.insert("4");
    Instrmt_55.add_attribute("OptAt", "680059738"); // 1
    Instrmt_55_set.insert("680059738");
    Instrmt_55.add_attribute("Mult", "20039131.080000"); // 1
    Instrmt_55_set.insert("20039131.080000");
    Instrmt_55.add_attribute("MultTyp", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("MinPxIncr", "4536346.820000"); // 1
    Instrmt_55_set.insert("4536346.820000");
    Instrmt_55.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_251043667"); // 1
    Instrmt_55_set.insert("MinPriceIncrementAmount_t_251043667");
    Instrmt_55.add_attribute("UOM", "tn"); // 1
    Instrmt_55_set.insert("tn");
    Instrmt_55.add_attribute("UOMQty", "7702524.030000"); // 1
    Instrmt_55_set.insert("7702524.030000");
    Instrmt_55.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_55_set.insert("Bu");
    Instrmt_55.add_attribute("PxUOMQty", "5201064.100000"); // 1
    Instrmt_55_set.insert("5201064.100000");
    Instrmt_55.add_attribute("SettlMeth", "P"); // 1
    Instrmt_55_set.insert("P");
    Instrmt_55.add_attribute("ExerStyle", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("OptPayAmt", "OptPayoutAmount_t_1820309910"); // 1
    Instrmt_55_set.insert("OptPayoutAmount_t_1820309910");
    Instrmt_55.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_55_set.insert("INX");
    Instrmt_55.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_55_set.insert("CDS");
    Instrmt_55.add_attribute("ListMeth", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("CapPx", "20152893.900000"); // 1
    Instrmt_55_set.insert("20152893.900000");
    Instrmt_55.add_attribute("FlrPx", "1741764.850000"); // 1
    Instrmt_55_set.insert("1741764.850000");
    Instrmt_55.add_attribute("PutCall", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("FlexInd", "false"); // 1
    Instrmt_55_set.insert("false");
    Instrmt_55.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_55_set.insert("true");
    Instrmt_55.add_attribute("TmUnit", "D"); // 1
    Instrmt_55_set.insert("D");
    Instrmt_55.add_attribute("CpnRt", "9012698.810000"); // 1
    Instrmt_55_set.insert("9012698.810000");
    Instrmt_55.add_attribute("Exch", "SecurityExchange_t_558863304"); // 1
    Instrmt_55_set.insert("SecurityExchange_t_558863304");
    Instrmt_55.add_attribute("PosLmt", "1086673824"); // 1
    Instrmt_55_set.insert("1086673824");
    Instrmt_55.add_attribute("NTPosLmt", "2081855690"); // 1
    Instrmt_55_set.insert("2081855690");
    Instrmt_55.add_attribute("Issr", "Issuer_t_1497823529"); // 1
    Instrmt_55_set.insert("Issuer_t_1497823529");
    Instrmt_55.add_attribute("EncIssrLen", "1518985391"); // 1
    Instrmt_55_set.insert("1518985391");
    Instrmt_55.add_attribute("EncIssr", "EncodedIssuer_t_1750710732"); // 1
    Instrmt_55_set.insert("EncodedIssuer_t_1750710732");
    Instrmt_55.add_attribute("Desc", "SecurityDesc_t_407434300"); // 1
    Instrmt_55_set.insert("SecurityDesc_t_407434300");
    Instrmt_55.add_attribute("EncSecDescLen", "51561481"); // 1
    Instrmt_55_set.insert("51561481");
    Instrmt_55.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1607140192"); // 1
    Instrmt_55_set.insert("EncodedSecurityDesc_t_1607140192");
    Instrmt_55.add_attribute("Pool", "Pool_t_480303551"); // 1
    Instrmt_55_set.insert("Pool_t_480303551");
    Instrmt_55.add_attribute("CSetMo", "1805690853"); // 1
    Instrmt_55_set.insert("1805690853");
    Instrmt_55.add_attribute("CPPgm", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("CPRegT", "CPRegType_t_731347219"); // 1
    Instrmt_55_set.insert("CPRegType_t_731347219");
    Instrmt_55.add_attribute("Dated", "DatedDate_t_1026679965"); // 1
    Instrmt_55_set.insert("DatedDate_t_1026679965");
    Instrmt_55.add_attribute("IntAcrl", "InterestAccrualDate_t_683543630"); // 1
    Instrmt_55_set.insert("InterestAccrualDate_t_683543630");
    all_values.push_back(Instrmt_55_set);
    all_compo_names.insert("Instrmt_55_set");

    {
      xml_element AID_58{"AID"};
      multiset<string> AID_58_set;
      AID_58.add_attribute("AltID", "SecurityAltID_t_1068011909"); // 2
      AID_58_set.insert("SecurityAltID_t_1068011909");
      AID_58.add_attribute("AltIDSrc", "E"); // 2
      AID_58_set.insert("E");
      all_values.push_back(AID_58_set);
      all_compo_names.insert("AID_58_set");

      Instrmt_55.add_element(AID_58);
    }
    {
      xml_element SecXML_58{"SecXML"};
      multiset<string> SecXML_58_set;
      SecXML_58.add_attribute("Schema", "SecurityXMLSchema_t_542520289"); // 2
      SecXML_58_set.insert("SecurityXMLSchema_t_542520289");
      all_values.push_back(SecXML_58_set);
      all_compo_names.insert("SecXML_58_set");

      Instrmt_55.add_element(SecXML_58);
    }
    {
      xml_element Evnt_58{"Evnt"};
      multiset<string> Evnt_58_set;
      Evnt_58.add_attribute("EventTyp", "2"); // 2
      Evnt_58_set.insert("2");
      Evnt_58.add_attribute("Dt", "EventDate_t_890774367"); // 2
      Evnt_58_set.insert("EventDate_t_890774367");
      Evnt_58.add_attribute("Tm", "EventTime_t_215346551"); // 2
      Evnt_58_set.insert("EventTime_t_215346551");
      Evnt_58.add_attribute("Px", "2913798.190000"); // 2
      Evnt_58_set.insert("2913798.190000");
      Evnt_58.add_attribute("Txt", "EventText_t_279622072"); // 2
      Evnt_58_set.insert("EventText_t_279622072");
      all_values.push_back(Evnt_58_set);
      all_compo_names.insert("Evnt_58_set");

      Instrmt_55.add_element(Evnt_58);
    }
    {
      xml_element Pty_307{"Pty"};
      multiset<string> Pty_307_set;
      Pty_307.add_attribute("ID", "InstrumentPartyID_t_2117885144"); // 2
      Pty_307_set.insert("InstrumentPartyID_t_2117885144");
      Pty_307.add_attribute("Src", "6"); // 2
      Pty_307_set.insert("6");
      Pty_307.add_attribute("R", "68"); // 2
      Pty_307_set.insert("68");
      all_values.push_back(Pty_307_set);
      all_compo_names.insert("Pty_307_set");

      {
        xml_element Sub_307{"Sub"};
        multiset<string> Sub_307_set;
        Sub_307.add_attribute("ID", "InstrumentPartySubID_t_1986207367"); // 3
        Sub_307_set.insert("InstrumentPartySubID_t_1986207367");
        Sub_307.add_attribute("Typ", "19"); // 3
        Sub_307_set.insert("19");
        all_values.push_back(Sub_307_set);
        all_compo_names.insert("Sub_307_set");

        Pty_307.add_element(Sub_307);
      }
      Instrmt_55.add_element(Pty_307);
    }
    {
      xml_element CmplxEvnt_55{"CmplxEvnt"};
      multiset<string> CmplxEvnt_55_set;
      CmplxEvnt_55.add_attribute("Typ", "8"); // 2
      CmplxEvnt_55_set.insert("8");
      CmplxEvnt_55.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_365177153"); // 2
      CmplxEvnt_55_set.insert("ComplexOptPayoutAmount_t_365177153");
      CmplxEvnt_55.add_attribute("Px", "852338.780000"); // 2
      CmplxEvnt_55_set.insert("852338.780000");
      CmplxEvnt_55.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_55_set.insert("2");
      CmplxEvnt_55.add_attribute("PxBndryPrcsn", "14518509.770000"); // 2
      CmplxEvnt_55_set.insert("14518509.770000");
      CmplxEvnt_55.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_55_set.insert("3");
      CmplxEvnt_55.add_attribute("Cond", "2"); // 2
      CmplxEvnt_55_set.insert("2");
      all_values.push_back(CmplxEvnt_55_set);
      all_compo_names.insert("CmplxEvnt_55_set");

      {
        xml_element EvntDts_55{"EvntDts"};
        multiset<string> EvntDts_55_set;
        EvntDts_55.add_attribute("StartDt", "ComplexEventStartDate_t_823352720"); // 3
        EvntDts_55_set.insert("ComplexEventStartDate_t_823352720");
        EvntDts_55.add_attribute("EndDt", "ComplexEventEndDate_t_1770316652"); // 3
        EvntDts_55_set.insert("ComplexEventEndDate_t_1770316652");
        all_values.push_back(EvntDts_55_set);
        all_compo_names.insert("EvntDts_55_set");

        {
          xml_element EvntTms_55{"EvntTms"};
          multiset<string> EvntTms_55_set;
          EvntTms_55.add_attribute("StartTm", "1157502137"); // 4
          EvntTms_55_set.insert("1157502137");
          EvntTms_55.add_attribute("EndTm", "874914202"); // 4
          EvntTms_55_set.insert("874914202");
          all_values.push_back(EvntTms_55_set);
          all_compo_names.insert("EvntTms_55_set");

          EvntDts_55.add_element(EvntTms_55);
        }
        CmplxEvnt_55.add_element(EvntDts_55);
      }
      Instrmt_55.add_element(CmplxEvnt_55);
    }
    elt.add_element(Instrmt_55);
  } // end Instrmt
  { // Leg
    xml_element Leg_63{"Leg"};
    multiset<string> Leg_63_set;
    Leg_63.add_attribute("Sym", "LegSymbol_t_1637805689"); // 1
    Leg_63_set.insert("LegSymbol_t_1637805689");
    Leg_63.add_attribute("Sfx", "WI"); // 1
    Leg_63_set.insert("WI");
    Leg_63.add_attribute("ID", "LegSecurityID_t_1143264424"); // 1
    Leg_63_set.insert("LegSecurityID_t_1143264424");
    Leg_63.add_attribute("Src", "B"); // 1
    Leg_63_set.insert("B");
    Leg_63.add_attribute("Prod", "9"); // 1
    Leg_63_set.insert("9");
    Leg_63.add_attribute("CFI", "LegCFICode_t_1826808054"); // 1
    Leg_63_set.insert("LegCFICode_t_1826808054");
    Leg_63.add_attribute("SecTyp", "PEF"); // 1
    Leg_63_set.insert("PEF");
    Leg_63.add_attribute("SecSubTyp", "LegSecuritySubType_t_959104099"); // 1
    Leg_63_set.insert("LegSecuritySubType_t_959104099");
    Leg_63.add_attribute("MMY", "221844695"); // 1
    Leg_63_set.insert("221844695");
    Leg_63.add_attribute("Mat", "LegMaturityDate_t_1558407910"); // 1
    Leg_63_set.insert("LegMaturityDate_t_1558407910");
    Leg_63.add_attribute("MatTm", "1849878467"); // 1
    Leg_63_set.insert("1849878467");
    Leg_63.add_attribute("CpnPmt", "LegCouponPaymentDate_t_437191246"); // 1
    Leg_63_set.insert("LegCouponPaymentDate_t_437191246");
    Leg_63.add_attribute("Issued", "LegIssueDate_t_1849787729"); // 1
    Leg_63_set.insert("LegIssueDate_t_1849787729");
    Leg_63.add_attribute("RepoCollSecTyp", "2129500539"); // 1
    Leg_63_set.insert("2129500539");
    Leg_63.add_attribute("RepoTrm", "407592742"); // 1
    Leg_63_set.insert("407592742");
    Leg_63.add_attribute("RepoRt", "20089732.900000"); // 1
    Leg_63_set.insert("20089732.900000");
    Leg_63.add_attribute("Fctr", "4358154.490000"); // 1
    Leg_63_set.insert("4358154.490000");
    Leg_63.add_attribute("CrdRtg", "LegCreditRating_t_246316461"); // 1
    Leg_63_set.insert("LegCreditRating_t_246316461");
    Leg_63.add_attribute("Rgstry", "LegInstrRegistry_t_1192937287"); // 1
    Leg_63_set.insert("LegInstrRegistry_t_1192937287");
    Leg_63.add_attribute("Ctry", "1276680102"); // 1
    Leg_63_set.insert("1276680102");
    Leg_63.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_611493614"); // 1
    Leg_63_set.insert("LegStateOrProvinceOfIssue_t_611493614");
    Leg_63.add_attribute("Lcl", "LegLocaleOfIssue_t_1278171165"); // 1
    Leg_63_set.insert("LegLocaleOfIssue_t_1278171165");
    Leg_63.add_attribute("Redeem", "LegRedemptionDate_t_528924410"); // 1
    Leg_63_set.insert("LegRedemptionDate_t_528924410");
    Leg_63.add_attribute("Strk", "20633445.910000"); // 1
    Leg_63_set.insert("20633445.910000");
    Leg_63.add_attribute("StrkCcy", "JPY"); // 1
    Leg_63_set.insert("JPY");
    Leg_63.add_attribute("OptA", "739213664"); // 1
    Leg_63_set.insert("739213664");
    Leg_63.add_attribute("Cmult", "9206100.890000"); // 1
    Leg_63_set.insert("9206100.890000");
    Leg_63.add_attribute("MultTyp", "1"); // 1
    Leg_63_set.insert("1");
    Leg_63.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_63_set.insert("1");
    Leg_63.add_attribute("UOM", "USD"); // 1
    Leg_63_set.insert("USD");
    Leg_63.add_attribute("UOMQty", "19268164.260000"); // 1
    Leg_63_set.insert("19268164.260000");
    Leg_63.add_attribute("PxUOM", "MWh"); // 1
    Leg_63_set.insert("MWh");
    Leg_63.add_attribute("PxUOMQty", "11463640.620000"); // 1
    Leg_63_set.insert("11463640.620000");
    Leg_63.add_attribute("TmUnit", "H"); // 1
    Leg_63_set.insert("H");
    Leg_63.add_attribute("ExerStyle", "2"); // 1
    Leg_63_set.insert("2");
    Leg_63.add_attribute("CpnRt", "8256884.680000"); // 1
    Leg_63_set.insert("8256884.680000");
    Leg_63.add_attribute("Exch", "LegSecurityExchange_t_1290683207"); // 1
    Leg_63_set.insert("LegSecurityExchange_t_1290683207");
    Leg_63.add_attribute("Issr", "LegIssuer_t_371187448"); // 1
    Leg_63_set.insert("LegIssuer_t_371187448");
    Leg_63.add_attribute("EncLegIssrLen", "1047533163"); // 1
    Leg_63_set.insert("1047533163");
    Leg_63.add_attribute("EncLegIssr", "EncodedLegIssuer_t_701607470"); // 1
    Leg_63_set.insert("EncodedLegIssuer_t_701607470");
    Leg_63.add_attribute("Desc", "LegSecurityDesc_t_73582267"); // 1
    Leg_63_set.insert("LegSecurityDesc_t_73582267");
    Leg_63.add_attribute("EncLegSecDescLen", "1484724409"); // 1
    Leg_63_set.insert("1484724409");
    Leg_63.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_403911551"); // 1
    Leg_63_set.insert("EncodedLegSecurityDesc_t_403911551");
    Leg_63.add_attribute("RatioQty", "555991.590000"); // 1
    Leg_63_set.insert("555991.590000");
    Leg_63.add_attribute("Side", "G"); // 1
    Leg_63_set.insert("G");
    Leg_63.add_attribute("Ccy", "JPY"); // 1
    Leg_63_set.insert("JPY");
    Leg_63.add_attribute("Pool", "LegPool_t_2138633612"); // 1
    Leg_63_set.insert("LegPool_t_2138633612");
    Leg_63.add_attribute("Dated", "LegDatedDate_t_1458338481"); // 1
    Leg_63_set.insert("LegDatedDate_t_1458338481");
    Leg_63.add_attribute("CSetMo", "1768094710"); // 1
    Leg_63_set.insert("1768094710");
    Leg_63.add_attribute("IntAcrl", "LegInterestAccrualDate_t_602643578"); // 1
    Leg_63_set.insert("LegInterestAccrualDate_t_602643578");
    Leg_63.add_attribute("PutCall", "589025998"); // 1
    Leg_63_set.insert("589025998");
    Leg_63.add_attribute("LegOptionRatio", "1495354.730000"); // 1
    Leg_63_set.insert("1495354.730000");
    Leg_63.add_attribute("Px", "5185045.220000"); // 1
    Leg_63_set.insert("5185045.220000");
    all_values.push_back(Leg_63_set);
    all_compo_names.insert("Leg_63_set");

    {
      xml_element LegAID_63{"LegAID"};
      multiset<string> LegAID_63_set;
      LegAID_63.add_attribute("SecAltID", "LegSecurityAltID_t_1886803083"); // 2
      LegAID_63_set.insert("LegSecurityAltID_t_1886803083");
      LegAID_63.add_attribute("SecAltIDSrc", "6"); // 2
      LegAID_63_set.insert("6");
      all_values.push_back(LegAID_63_set);
      all_compo_names.insert("LegAID_63_set");

      Leg_63.add_element(LegAID_63);
    }
    elt.add_element(Leg_63);
  } // end Leg
  { // Leg
    xml_element Leg_64{"Leg"};
    multiset<string> Leg_64_set;
    Leg_64.add_attribute("Sym", "LegSymbol_t_1257718186"); // 1
    Leg_64_set.insert("LegSymbol_t_1257718186");
    Leg_64.add_attribute("Sfx", "CD"); // 1
    Leg_64_set.insert("CD");
    Leg_64.add_attribute("ID", "LegSecurityID_t_1717538458"); // 1
    Leg_64_set.insert("LegSecurityID_t_1717538458");
    Leg_64.add_attribute("Src", "J"); // 1
    Leg_64_set.insert("J");
    Leg_64.add_attribute("Prod", "13"); // 1
    Leg_64_set.insert("13");
    Leg_64.add_attribute("CFI", "LegCFICode_t_1496871237"); // 1
    Leg_64_set.insert("LegCFICode_t_1496871237");
    Leg_64.add_attribute("SecTyp", "EUCORP"); // 1
    Leg_64_set.insert("EUCORP");
    Leg_64.add_attribute("SecSubTyp", "LegSecuritySubType_t_1809393225"); // 1
    Leg_64_set.insert("LegSecuritySubType_t_1809393225");
    Leg_64.add_attribute("MMY", "1497873275"); // 1
    Leg_64_set.insert("1497873275");
    Leg_64.add_attribute("Mat", "LegMaturityDate_t_136211378"); // 1
    Leg_64_set.insert("LegMaturityDate_t_136211378");
    Leg_64.add_attribute("MatTm", "487598046"); // 1
    Leg_64_set.insert("487598046");
    Leg_64.add_attribute("CpnPmt", "LegCouponPaymentDate_t_641072835"); // 1
    Leg_64_set.insert("LegCouponPaymentDate_t_641072835");
    Leg_64.add_attribute("Issued", "LegIssueDate_t_507398826"); // 1
    Leg_64_set.insert("LegIssueDate_t_507398826");
    Leg_64.add_attribute("RepoCollSecTyp", "1535131209"); // 1
    Leg_64_set.insert("1535131209");
    Leg_64.add_attribute("RepoTrm", "1342680305"); // 1
    Leg_64_set.insert("1342680305");
    Leg_64.add_attribute("RepoRt", "5809810.940000"); // 1
    Leg_64_set.insert("5809810.940000");
    Leg_64.add_attribute("Fctr", "8723719.710000"); // 1
    Leg_64_set.insert("8723719.710000");
    Leg_64.add_attribute("CrdRtg", "LegCreditRating_t_1746591856"); // 1
    Leg_64_set.insert("LegCreditRating_t_1746591856");
    Leg_64.add_attribute("Rgstry", "LegInstrRegistry_t_636580253"); // 1
    Leg_64_set.insert("LegInstrRegistry_t_636580253");
    Leg_64.add_attribute("Ctry", "617205474"); // 1
    Leg_64_set.insert("617205474");
    Leg_64.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2011993050"); // 1
    Leg_64_set.insert("LegStateOrProvinceOfIssue_t_2011993050");
    Leg_64.add_attribute("Lcl", "LegLocaleOfIssue_t_1127994861"); // 1
    Leg_64_set.insert("LegLocaleOfIssue_t_1127994861");
    Leg_64.add_attribute("Redeem", "LegRedemptionDate_t_608355439"); // 1
    Leg_64_set.insert("LegRedemptionDate_t_608355439");
    Leg_64.add_attribute("Strk", "13228478.830000"); // 1
    Leg_64_set.insert("13228478.830000");
    Leg_64.add_attribute("StrkCcy", "CHF"); // 1
    Leg_64_set.insert("CHF");
    Leg_64.add_attribute("OptA", "1911873881"); // 1
    Leg_64_set.insert("1911873881");
    Leg_64.add_attribute("Cmult", "8981413.970000"); // 1
    Leg_64_set.insert("8981413.970000");
    Leg_64.add_attribute("MultTyp", "2"); // 1
    Leg_64_set.insert("2");
    Leg_64.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_64_set.insert("1");
    Leg_64.add_attribute("UOM", "USD"); // 1
    Leg_64_set.insert("USD");
    Leg_64.add_attribute("UOMQty", "8397380.770000"); // 1
    Leg_64_set.insert("8397380.770000");
    Leg_64.add_attribute("PxUOM", "Gal"); // 1
    Leg_64_set.insert("Gal");
    Leg_64.add_attribute("PxUOMQty", "18967239.280000"); // 1
    Leg_64_set.insert("18967239.280000");
    Leg_64.add_attribute("TmUnit", "Yr"); // 1
    Leg_64_set.insert("Yr");
    Leg_64.add_attribute("ExerStyle", "2"); // 1
    Leg_64_set.insert("2");
    Leg_64.add_attribute("CpnRt", "12461115.170000"); // 1
    Leg_64_set.insert("12461115.170000");
    Leg_64.add_attribute("Exch", "LegSecurityExchange_t_140744862"); // 1
    Leg_64_set.insert("LegSecurityExchange_t_140744862");
    Leg_64.add_attribute("Issr", "LegIssuer_t_488577933"); // 1
    Leg_64_set.insert("LegIssuer_t_488577933");
    Leg_64.add_attribute("EncLegIssrLen", "596501145"); // 1
    Leg_64_set.insert("596501145");
    Leg_64.add_attribute("EncLegIssr", "EncodedLegIssuer_t_276956240"); // 1
    Leg_64_set.insert("EncodedLegIssuer_t_276956240");
    Leg_64.add_attribute("Desc", "LegSecurityDesc_t_976175979"); // 1
    Leg_64_set.insert("LegSecurityDesc_t_976175979");
    Leg_64.add_attribute("EncLegSecDescLen", "1237573980"); // 1
    Leg_64_set.insert("1237573980");
    Leg_64.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_784355067"); // 1
    Leg_64_set.insert("EncodedLegSecurityDesc_t_784355067");
    Leg_64.add_attribute("RatioQty", "3638235.410000"); // 1
    Leg_64_set.insert("3638235.410000");
    Leg_64.add_attribute("Side", "E"); // 1
    Leg_64_set.insert("E");
    Leg_64.add_attribute("Ccy", "GBP"); // 1
    Leg_64_set.insert("GBP");
    Leg_64.add_attribute("Pool", "LegPool_t_31878845"); // 1
    Leg_64_set.insert("LegPool_t_31878845");
    Leg_64.add_attribute("Dated", "LegDatedDate_t_2001916414"); // 1
    Leg_64_set.insert("LegDatedDate_t_2001916414");
    Leg_64.add_attribute("CSetMo", "1853400986"); // 1
    Leg_64_set.insert("1853400986");
    Leg_64.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2043871896"); // 1
    Leg_64_set.insert("LegInterestAccrualDate_t_2043871896");
    Leg_64.add_attribute("PutCall", "982427627"); // 1
    Leg_64_set.insert("982427627");
    Leg_64.add_attribute("LegOptionRatio", "3142727.770000"); // 1
    Leg_64_set.insert("3142727.770000");
    Leg_64.add_attribute("Px", "12192361.310000"); // 1
    Leg_64_set.insert("12192361.310000");
    all_values.push_back(Leg_64_set);
    all_compo_names.insert("Leg_64_set");

    {
      xml_element LegAID_64{"LegAID"};
      multiset<string> LegAID_64_set;
      LegAID_64.add_attribute("SecAltID", "LegSecurityAltID_t_1731033551"); // 2
      LegAID_64_set.insert("LegSecurityAltID_t_1731033551");
      LegAID_64.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_64_set.insert("4");
      all_values.push_back(LegAID_64_set);
      all_compo_names.insert("LegAID_64_set");

      Leg_64.add_element(LegAID_64);
    }
    elt.add_element(Leg_64);
  } // end Leg
  { // Leg
    xml_element Leg_65{"Leg"};
    multiset<string> Leg_65_set;
    Leg_65.add_attribute("Sym", "LegSymbol_t_983626365"); // 1
    Leg_65_set.insert("LegSymbol_t_983626365");
    Leg_65.add_attribute("Sfx", "CD"); // 1
    Leg_65_set.insert("CD");
    Leg_65.add_attribute("ID", "LegSecurityID_t_1107291686"); // 1
    Leg_65_set.insert("LegSecurityID_t_1107291686");
    Leg_65.add_attribute("Src", "L"); // 1
    Leg_65_set.insert("L");
    Leg_65.add_attribute("Prod", "5"); // 1
    Leg_65_set.insert("5");
    Leg_65.add_attribute("CFI", "LegCFICode_t_1947029764"); // 1
    Leg_65_set.insert("LegCFICode_t_1947029764");
    Leg_65.add_attribute("SecTyp", "EUCD"); // 1
    Leg_65_set.insert("EUCD");
    Leg_65.add_attribute("SecSubTyp", "LegSecuritySubType_t_410117051"); // 1
    Leg_65_set.insert("LegSecuritySubType_t_410117051");
    Leg_65.add_attribute("MMY", "1363646597"); // 1
    Leg_65_set.insert("1363646597");
    Leg_65.add_attribute("Mat", "LegMaturityDate_t_1477643582"); // 1
    Leg_65_set.insert("LegMaturityDate_t_1477643582");
    Leg_65.add_attribute("MatTm", "1656228568"); // 1
    Leg_65_set.insert("1656228568");
    Leg_65.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1504391460"); // 1
    Leg_65_set.insert("LegCouponPaymentDate_t_1504391460");
    Leg_65.add_attribute("Issued", "LegIssueDate_t_1966221516"); // 1
    Leg_65_set.insert("LegIssueDate_t_1966221516");
    Leg_65.add_attribute("RepoCollSecTyp", "105246065"); // 1
    Leg_65_set.insert("105246065");
    Leg_65.add_attribute("RepoTrm", "1781347700"); // 1
    Leg_65_set.insert("1781347700");
    Leg_65.add_attribute("RepoRt", "7949138.470000"); // 1
    Leg_65_set.insert("7949138.470000");
    Leg_65.add_attribute("Fctr", "13428200.450000"); // 1
    Leg_65_set.insert("13428200.450000");
    Leg_65.add_attribute("CrdRtg", "LegCreditRating_t_418219119"); // 1
    Leg_65_set.insert("LegCreditRating_t_418219119");
    Leg_65.add_attribute("Rgstry", "LegInstrRegistry_t_1158737388"); // 1
    Leg_65_set.insert("LegInstrRegistry_t_1158737388");
    Leg_65.add_attribute("Ctry", "1775590682"); // 1
    Leg_65_set.insert("1775590682");
    Leg_65.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1783555280"); // 1
    Leg_65_set.insert("LegStateOrProvinceOfIssue_t_1783555280");
    Leg_65.add_attribute("Lcl", "LegLocaleOfIssue_t_247449252"); // 1
    Leg_65_set.insert("LegLocaleOfIssue_t_247449252");
    Leg_65.add_attribute("Redeem", "LegRedemptionDate_t_1807469528"); // 1
    Leg_65_set.insert("LegRedemptionDate_t_1807469528");
    Leg_65.add_attribute("Strk", "16379880.460000"); // 1
    Leg_65_set.insert("16379880.460000");
    Leg_65.add_attribute("StrkCcy", "USD"); // 1
    Leg_65_set.insert("USD");
    Leg_65.add_attribute("OptA", "472932026"); // 1
    Leg_65_set.insert("472932026");
    Leg_65.add_attribute("Cmult", "2676393.680000"); // 1
    Leg_65_set.insert("2676393.680000");
    Leg_65.add_attribute("MultTyp", "0"); // 1
    Leg_65_set.insert("0");
    Leg_65.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_65_set.insert("4");
    Leg_65.add_attribute("UOM", "t"); // 1
    Leg_65_set.insert("t");
    Leg_65.add_attribute("UOMQty", "17592366.240000"); // 1
    Leg_65_set.insert("17592366.240000");
    Leg_65.add_attribute("PxUOM", "Bcf"); // 1
    Leg_65_set.insert("Bcf");
    Leg_65.add_attribute("PxUOMQty", "7527192.020000"); // 1
    Leg_65_set.insert("7527192.020000");
    Leg_65.add_attribute("TmUnit", "Yr"); // 1
    Leg_65_set.insert("Yr");
    Leg_65.add_attribute("ExerStyle", "1"); // 1
    Leg_65_set.insert("1");
    Leg_65.add_attribute("CpnRt", "5522653.180000"); // 1
    Leg_65_set.insert("5522653.180000");
    Leg_65.add_attribute("Exch", "LegSecurityExchange_t_750064236"); // 1
    Leg_65_set.insert("LegSecurityExchange_t_750064236");
    Leg_65.add_attribute("Issr", "LegIssuer_t_1609167051"); // 1
    Leg_65_set.insert("LegIssuer_t_1609167051");
    Leg_65.add_attribute("EncLegIssrLen", "1915911915"); // 1
    Leg_65_set.insert("1915911915");
    Leg_65.add_attribute("EncLegIssr", "EncodedLegIssuer_t_80224171"); // 1
    Leg_65_set.insert("EncodedLegIssuer_t_80224171");
    Leg_65.add_attribute("Desc", "LegSecurityDesc_t_1117911972"); // 1
    Leg_65_set.insert("LegSecurityDesc_t_1117911972");
    Leg_65.add_attribute("EncLegSecDescLen", "1272819727"); // 1
    Leg_65_set.insert("1272819727");
    Leg_65.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2046445687"); // 1
    Leg_65_set.insert("EncodedLegSecurityDesc_t_2046445687");
    Leg_65.add_attribute("RatioQty", "12231580.370000"); // 1
    Leg_65_set.insert("12231580.370000");
    Leg_65.add_attribute("Side", "5"); // 1
    Leg_65_set.insert("5");
    Leg_65.add_attribute("Ccy", "CHF"); // 1
    Leg_65_set.insert("CHF");
    Leg_65.add_attribute("Pool", "LegPool_t_1324902899"); // 1
    Leg_65_set.insert("LegPool_t_1324902899");
    Leg_65.add_attribute("Dated", "LegDatedDate_t_1852613275"); // 1
    Leg_65_set.insert("LegDatedDate_t_1852613275");
    Leg_65.add_attribute("CSetMo", "46601469"); // 1
    Leg_65_set.insert("46601469");
    Leg_65.add_attribute("IntAcrl", "LegInterestAccrualDate_t_960974532"); // 1
    Leg_65_set.insert("LegInterestAccrualDate_t_960974532");
    Leg_65.add_attribute("PutCall", "2100062527"); // 1
    Leg_65_set.insert("2100062527");
    Leg_65.add_attribute("LegOptionRatio", "18540709.970000"); // 1
    Leg_65_set.insert("18540709.970000");
    Leg_65.add_attribute("Px", "4514789.300000"); // 1
    Leg_65_set.insert("4514789.300000");
    all_values.push_back(Leg_65_set);
    all_compo_names.insert("Leg_65_set");

    {
      xml_element LegAID_65{"LegAID"};
      multiset<string> LegAID_65_set;
      LegAID_65.add_attribute("SecAltID", "LegSecurityAltID_t_2053429118"); // 2
      LegAID_65_set.insert("LegSecurityAltID_t_2053429118");
      LegAID_65.add_attribute("SecAltIDSrc", "2"); // 2
      LegAID_65_set.insert("2");
      all_values.push_back(LegAID_65_set);
      all_compo_names.insert("LegAID_65_set");

      Leg_65.add_element(LegAID_65);
    }
    elt.add_element(Leg_65);
  } // end Leg
  { // Undly
    xml_element Undly_76{"Undly"};
    multiset<string> Undly_76_set;
    Undly_76.add_attribute("Sym", "UnderlyingSymbol_t_173584839"); // 1
    Undly_76_set.insert("UnderlyingSymbol_t_173584839");
    Undly_76.add_attribute("Sfx", "WI"); // 1
    Undly_76_set.insert("WI");
    Undly_76.add_attribute("ID", "UnderlyingSecurityID_t_980892886"); // 1
    Undly_76_set.insert("UnderlyingSecurityID_t_980892886");
    Undly_76.add_attribute("Src", "K"); // 1
    Undly_76_set.insert("K");
    Undly_76.add_attribute("Prod", "8"); // 1
    Undly_76_set.insert("8");
    Undly_76.add_attribute("CFI", "UnderlyingCFICode_t_1519066116"); // 1
    Undly_76_set.insert("UnderlyingCFICode_t_1519066116");
    Undly_76.add_attribute("SecTyp", "TERM"); // 1
    Undly_76_set.insert("TERM");
    Undly_76.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1896897371"); // 1
    Undly_76_set.insert("UnderlyingSecuritySubType_t_1896897371");
    Undly_76.add_attribute("MMY", "570632468"); // 1
    Undly_76_set.insert("570632468");
    Undly_76.add_attribute("Mat", "UnderlyingMaturityDate_t_1123996874"); // 1
    Undly_76_set.insert("UnderlyingMaturityDate_t_1123996874");
    Undly_76.add_attribute("MatTm", "499477960"); // 1
    Undly_76_set.insert("499477960");
    Undly_76.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_32315872"); // 1
    Undly_76_set.insert("UnderlyingCouponPaymentDate_t_32315872");
    Undly_76.add_attribute("RestrctTyp", "MM"); // 1
    Undly_76_set.insert("MM");
    Undly_76.add_attribute("Snrty", "SB"); // 1
    Undly_76_set.insert("SB");
    Undly_76.add_attribute("NotlPctOut", "11502278.440000"); // 1
    Undly_76_set.insert("11502278.440000");
    Undly_76.add_attribute("OrigNotlPctOut", "177612.210000"); // 1
    Undly_76_set.insert("177612.210000");
    Undly_76.add_attribute("AttchPnt", "4786641.700000"); // 1
    Undly_76_set.insert("4786641.700000");
    Undly_76.add_attribute("DetchPnt", "2259022.330000"); // 1
    Undly_76_set.insert("2259022.330000");
    Undly_76.add_attribute("Issued", "UnderlyingIssueDate_t_924445001"); // 1
    Undly_76_set.insert("UnderlyingIssueDate_t_924445001");
    Undly_76.add_attribute("RepoCollSecTyp", "1172540056"); // 1
    Undly_76_set.insert("1172540056");
    Undly_76.add_attribute("RepoTrm", "644396668"); // 1
    Undly_76_set.insert("644396668");
    Undly_76.add_attribute("RepoRt", "1018642.530000"); // 1
    Undly_76_set.insert("1018642.530000");
    Undly_76.add_attribute("Fctr", "8776696.830000"); // 1
    Undly_76_set.insert("8776696.830000");
    Undly_76.add_attribute("CrdRtg", "UnderlyingCreditRating_t_690998138"); // 1
    Undly_76_set.insert("UnderlyingCreditRating_t_690998138");
    Undly_76.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1062838785"); // 1
    Undly_76_set.insert("UnderlyingInstrRegistry_t_1062838785");
    Undly_76.add_attribute("Ctry", "830248563"); // 1
    Undly_76_set.insert("830248563");
    Undly_76.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_397585487"); // 1
    Undly_76_set.insert("UnderlyingStateOrProvinceOfIssue_t_397585487");
    Undly_76.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1514317715"); // 1
    Undly_76_set.insert("UnderlyingLocaleOfIssue_t_1514317715");
    Undly_76.add_attribute("Redeem", "UnderlyingRedemptionDate_t_736194033"); // 1
    Undly_76_set.insert("UnderlyingRedemptionDate_t_736194033");
    Undly_76.add_attribute("StrkPx", "18080306.130000"); // 1
    Undly_76_set.insert("18080306.130000");
    Undly_76.add_attribute("StrkCcy", "USD"); // 1
    Undly_76_set.insert("USD");
    Undly_76.add_attribute("OptA", "1846602350"); // 1
    Undly_76_set.insert("1846602350");
    Undly_76.add_attribute("Mult", "12721379.100000"); // 1
    Undly_76_set.insert("12721379.100000");
    Undly_76.add_attribute("MultTyp", "0"); // 1
    Undly_76_set.insert("0");
    Undly_76.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_76_set.insert("3");
    Undly_76.add_attribute("UOM", "Bbl"); // 1
    Undly_76_set.insert("Bbl");
    Undly_76.add_attribute("UOMQty", "13005227.830000"); // 1
    Undly_76_set.insert("13005227.830000");
    Undly_76.add_attribute("PxUOM", "Gal"); // 1
    Undly_76_set.insert("Gal");
    Undly_76.add_attribute("PxUOMQty", "12143528.460000"); // 1
    Undly_76_set.insert("12143528.460000");
    Undly_76.add_attribute("TmUnit", "Yr"); // 1
    Undly_76_set.insert("Yr");
    Undly_76.add_attribute("ExerStyle", "1"); // 1
    Undly_76_set.insert("1");
    Undly_76.add_attribute("CpnRt", "12466687.180000"); // 1
    Undly_76_set.insert("12466687.180000");
    Undly_76.add_attribute("Exch", "UnderlyingSecurityExchange_t_1169461152"); // 1
    Undly_76_set.insert("UnderlyingSecurityExchange_t_1169461152");
    Undly_76.add_attribute("Issr", "UnderlyingIssuer_t_178037230"); // 1
    Undly_76_set.insert("UnderlyingIssuer_t_178037230");
    Undly_76.add_attribute("EncUndIssrLen", "249412914"); // 1
    Undly_76_set.insert("249412914");
    Undly_76.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1187222373"); // 1
    Undly_76_set.insert("EncodedUnderlyingIssuer_t_1187222373");
    Undly_76.add_attribute("Desc", "UnderlyingSecurityDesc_t_656701400"); // 1
    Undly_76_set.insert("UnderlyingSecurityDesc_t_656701400");
    Undly_76.add_attribute("EncUndSecDescLen", "475315148"); // 1
    Undly_76_set.insert("475315148");
    Undly_76.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2111667375"); // 1
    Undly_76_set.insert("EncodedUnderlyingSecurityDesc_t_2111667375");
    Undly_76.add_attribute("CPPgm", "UnderlyingCPProgram_t_1829241456"); // 1
    Undly_76_set.insert("UnderlyingCPProgram_t_1829241456");
    Undly_76.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1119711816"); // 1
    Undly_76_set.insert("UnderlyingCPRegType_t_1119711816");
    Undly_76.add_attribute("AllocPct", "660479.800000"); // 1
    Undly_76_set.insert("660479.800000");
    Undly_76.add_attribute("Ccy", "GBP"); // 1
    Undly_76_set.insert("GBP");
    Undly_76.add_attribute("Qty", "11288867.650000"); // 1
    Undly_76_set.insert("11288867.650000");
    Undly_76.add_attribute("SettlTyp", "5"); // 1
    Undly_76_set.insert("5");
    Undly_76.add_attribute("CashAmt", "UnderlyingCashAmount_t_60811794"); // 1
    Undly_76_set.insert("UnderlyingCashAmount_t_60811794");
    Undly_76.add_attribute("CashTyp", "FIXED"); // 1
    Undly_76_set.insert("FIXED");
    Undly_76.add_attribute("Px", "21258700.880000"); // 1
    Undly_76_set.insert("21258700.880000");
    Undly_76.add_attribute("DirtPx", "18688424.070000"); // 1
    Undly_76_set.insert("18688424.070000");
    Undly_76.add_attribute("EndPx", "7869658.560000"); // 1
    Undly_76_set.insert("7869658.560000");
    Undly_76.add_attribute("StartVal", "UnderlyingStartValue_t_888165313"); // 1
    Undly_76_set.insert("UnderlyingStartValue_t_888165313");
    Undly_76.add_attribute("CurVal", "UnderlyingCurrentValue_t_1567961109"); // 1
    Undly_76_set.insert("UnderlyingCurrentValue_t_1567961109");
    Undly_76.add_attribute("EndVal", "UnderlyingEndValue_t_2059103766"); // 1
    Undly_76_set.insert("UnderlyingEndValue_t_2059103766");
    Undly_76.add_attribute("AdjQty", "16169565.400000"); // 1
    Undly_76_set.insert("16169565.400000");
    Undly_76.add_attribute("FxRate", "9174045.240000"); // 1
    Undly_76_set.insert("9174045.240000");
    Undly_76.add_attribute("FxRateCalc", "M"); // 1
    Undly_76_set.insert("M");
    Undly_76.add_attribute("CapValu", "UnderlyingCapValue_t_769995675"); // 1
    Undly_76_set.insert("UnderlyingCapValue_t_769995675");
    Undly_76.add_attribute("SetMeth", "UnderlyingSettlMethod_t_16261663"); // 1
    Undly_76_set.insert("UnderlyingSettlMethod_t_16261663");
    Undly_76.add_attribute("PutCall", "1769693343"); // 1
    Undly_76_set.insert("1769693343");
    all_values.push_back(Undly_76_set);
    all_compo_names.insert("Undly_76_set");

    {
      xml_element UndAID_76{"UndAID"};
      multiset<string> UndAID_76_set;
      UndAID_76.add_attribute("AltID", "UnderlyingSecurityAltID_t_1047031685"); // 2
      UndAID_76_set.insert("UnderlyingSecurityAltID_t_1047031685");
      UndAID_76.add_attribute("AltIDSrc", "3"); // 2
      UndAID_76_set.insert("3");
      all_values.push_back(UndAID_76_set);
      all_compo_names.insert("UndAID_76_set");

      Undly_76.add_element(UndAID_76);
    }
    {
      xml_element Stip_112{"Stip"};
      multiset<string> Stip_112_set;
      Stip_112.add_attribute("Typ", "HEP"); // 2
      Stip_112_set.insert("HEP");
      Stip_112.add_attribute("Val", "UnderlyingStipValue_t_69009189"); // 2
      Stip_112_set.insert("UnderlyingStipValue_t_69009189");
      all_values.push_back(Stip_112_set);
      all_compo_names.insert("Stip_112_set");

      Undly_76.add_element(Stip_112);
    }
    {
      xml_element Pty_308{"Pty"};
      multiset<string> Pty_308_set;
      Pty_308.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1940117640"); // 2
      Pty_308_set.insert("UnderlyingInstrumentPartyID_t_1940117640");
      Pty_308.add_attribute("Src", "1"); // 2
      Pty_308_set.insert("1");
      Pty_308.add_attribute("R", "58"); // 2
      Pty_308_set.insert("58");
      all_values.push_back(Pty_308_set);
      all_compo_names.insert("Pty_308_set");

      {
        xml_element Sub_308{"Sub"};
        multiset<string> Sub_308_set;
        Sub_308.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_449335392"); // 3
        Sub_308_set.insert("UnderlyingInstrumentPartySubID_t_449335392");
        Sub_308.add_attribute("Typ", "2"); // 3
        Sub_308_set.insert("2");
        all_values.push_back(Sub_308_set);
        all_compo_names.insert("Sub_308_set");

        Pty_308.add_element(Sub_308);
      }
      Undly_76.add_element(Pty_308);
    }
    elt.add_element(Undly_76);
  } // end Undly
  { // Undly
    xml_element Undly_77{"Undly"};
    multiset<string> Undly_77_set;
    Undly_77.add_attribute("Sym", "UnderlyingSymbol_t_1220415290"); // 1
    Undly_77_set.insert("UnderlyingSymbol_t_1220415290");
    Undly_77.add_attribute("Sfx", "WI"); // 1
    Undly_77_set.insert("WI");
    Undly_77.add_attribute("ID", "UnderlyingSecurityID_t_565834644"); // 1
    Undly_77_set.insert("UnderlyingSecurityID_t_565834644");
    Undly_77.add_attribute("Src", "5"); // 1
    Undly_77_set.insert("5");
    Undly_77.add_attribute("Prod", "2"); // 1
    Undly_77_set.insert("2");
    Undly_77.add_attribute("CFI", "UnderlyingCFICode_t_229060951"); // 1
    Undly_77_set.insert("UnderlyingCFICode_t_229060951");
    Undly_77.add_attribute("SecTyp", "COFP"); // 1
    Undly_77_set.insert("COFP");
    Undly_77.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2080196748"); // 1
    Undly_77_set.insert("UnderlyingSecuritySubType_t_2080196748");
    Undly_77.add_attribute("MMY", "289872745"); // 1
    Undly_77_set.insert("289872745");
    Undly_77.add_attribute("Mat", "UnderlyingMaturityDate_t_763587219"); // 1
    Undly_77_set.insert("UnderlyingMaturityDate_t_763587219");
    Undly_77.add_attribute("MatTm", "2058583188"); // 1
    Undly_77_set.insert("2058583188");
    Undly_77.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_11231504"); // 1
    Undly_77_set.insert("UnderlyingCouponPaymentDate_t_11231504");
    Undly_77.add_attribute("RestrctTyp", "FR"); // 1
    Undly_77_set.insert("FR");
    Undly_77.add_attribute("Snrty", "SB"); // 1
    Undly_77_set.insert("SB");
    Undly_77.add_attribute("NotlPctOut", "15791926.130000"); // 1
    Undly_77_set.insert("15791926.130000");
    Undly_77.add_attribute("OrigNotlPctOut", "14621731.940000"); // 1
    Undly_77_set.insert("14621731.940000");
    Undly_77.add_attribute("AttchPnt", "2687377.450000"); // 1
    Undly_77_set.insert("2687377.450000");
    Undly_77.add_attribute("DetchPnt", "3491134.890000"); // 1
    Undly_77_set.insert("3491134.890000");
    Undly_77.add_attribute("Issued", "UnderlyingIssueDate_t_2017513691"); // 1
    Undly_77_set.insert("UnderlyingIssueDate_t_2017513691");
    Undly_77.add_attribute("RepoCollSecTyp", "1038733421"); // 1
    Undly_77_set.insert("1038733421");
    Undly_77.add_attribute("RepoTrm", "365375153"); // 1
    Undly_77_set.insert("365375153");
    Undly_77.add_attribute("RepoRt", "16397233.860000"); // 1
    Undly_77_set.insert("16397233.860000");
    Undly_77.add_attribute("Fctr", "20857651.060000"); // 1
    Undly_77_set.insert("20857651.060000");
    Undly_77.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2127455563"); // 1
    Undly_77_set.insert("UnderlyingCreditRating_t_2127455563");
    Undly_77.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_361118151"); // 1
    Undly_77_set.insert("UnderlyingInstrRegistry_t_361118151");
    Undly_77.add_attribute("Ctry", "7290648"); // 1
    Undly_77_set.insert("7290648");
    Undly_77.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1920089556"); // 1
    Undly_77_set.insert("UnderlyingStateOrProvinceOfIssue_t_1920089556");
    Undly_77.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1479409479"); // 1
    Undly_77_set.insert("UnderlyingLocaleOfIssue_t_1479409479");
    Undly_77.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1263522211"); // 1
    Undly_77_set.insert("UnderlyingRedemptionDate_t_1263522211");
    Undly_77.add_attribute("StrkPx", "2219413.000000"); // 1
    Undly_77_set.insert("2219413.000000");
    Undly_77.add_attribute("StrkCcy", "EUR"); // 1
    Undly_77_set.insert("EUR");
    Undly_77.add_attribute("OptA", "353034501"); // 1
    Undly_77_set.insert("353034501");
    Undly_77.add_attribute("Mult", "14913669.520000"); // 1
    Undly_77_set.insert("14913669.520000");
    Undly_77.add_attribute("MultTyp", "1"); // 1
    Undly_77_set.insert("1");
    Undly_77.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_77_set.insert("4");
    Undly_77.add_attribute("UOM", "Alw"); // 1
    Undly_77_set.insert("Alw");
    Undly_77.add_attribute("UOMQty", "18907835.100000"); // 1
    Undly_77_set.insert("18907835.100000");
    Undly_77.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_77_set.insert("MMBtu");
    Undly_77.add_attribute("PxUOMQty", "20103006.480000"); // 1
    Undly_77_set.insert("20103006.480000");
    Undly_77.add_attribute("TmUnit", "Min"); // 1
    Undly_77_set.insert("Min");
    Undly_77.add_attribute("ExerStyle", "1"); // 1
    Undly_77_set.insert("1");
    Undly_77.add_attribute("CpnRt", "20215321.520000"); // 1
    Undly_77_set.insert("20215321.520000");
    Undly_77.add_attribute("Exch", "UnderlyingSecurityExchange_t_2057440157"); // 1
    Undly_77_set.insert("UnderlyingSecurityExchange_t_2057440157");
    Undly_77.add_attribute("Issr", "UnderlyingIssuer_t_1686632688"); // 1
    Undly_77_set.insert("UnderlyingIssuer_t_1686632688");
    Undly_77.add_attribute("EncUndIssrLen", "1453241117"); // 1
    Undly_77_set.insert("1453241117");
    Undly_77.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1372129704"); // 1
    Undly_77_set.insert("EncodedUnderlyingIssuer_t_1372129704");
    Undly_77.add_attribute("Desc", "UnderlyingSecurityDesc_t_1955370434"); // 1
    Undly_77_set.insert("UnderlyingSecurityDesc_t_1955370434");
    Undly_77.add_attribute("EncUndSecDescLen", "1802354606"); // 1
    Undly_77_set.insert("1802354606");
    Undly_77.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1242159747"); // 1
    Undly_77_set.insert("EncodedUnderlyingSecurityDesc_t_1242159747");
    Undly_77.add_attribute("CPPgm", "UnderlyingCPProgram_t_846620207"); // 1
    Undly_77_set.insert("UnderlyingCPProgram_t_846620207");
    Undly_77.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_20246111"); // 1
    Undly_77_set.insert("UnderlyingCPRegType_t_20246111");
    Undly_77.add_attribute("AllocPct", "7343994.850000"); // 1
    Undly_77_set.insert("7343994.850000");
    Undly_77.add_attribute("Ccy", "CAN"); // 1
    Undly_77_set.insert("CAN");
    Undly_77.add_attribute("Qty", "10955176.360000"); // 1
    Undly_77_set.insert("10955176.360000");
    Undly_77.add_attribute("SettlTyp", "4"); // 1
    Undly_77_set.insert("4");
    Undly_77.add_attribute("CashAmt", "UnderlyingCashAmount_t_1920307583"); // 1
    Undly_77_set.insert("UnderlyingCashAmount_t_1920307583");
    Undly_77.add_attribute("CashTyp", "FIXED"); // 1
    Undly_77_set.insert("FIXED");
    Undly_77.add_attribute("Px", "20557145.240000"); // 1
    Undly_77_set.insert("20557145.240000");
    Undly_77.add_attribute("DirtPx", "21422488.830000"); // 1
    Undly_77_set.insert("21422488.830000");
    Undly_77.add_attribute("EndPx", "13529757.750000"); // 1
    Undly_77_set.insert("13529757.750000");
    Undly_77.add_attribute("StartVal", "UnderlyingStartValue_t_244684729"); // 1
    Undly_77_set.insert("UnderlyingStartValue_t_244684729");
    Undly_77.add_attribute("CurVal", "UnderlyingCurrentValue_t_347799737"); // 1
    Undly_77_set.insert("UnderlyingCurrentValue_t_347799737");
    Undly_77.add_attribute("EndVal", "UnderlyingEndValue_t_696859079"); // 1
    Undly_77_set.insert("UnderlyingEndValue_t_696859079");
    Undly_77.add_attribute("AdjQty", "18676018.520000"); // 1
    Undly_77_set.insert("18676018.520000");
    Undly_77.add_attribute("FxRate", "13913549.310000"); // 1
    Undly_77_set.insert("13913549.310000");
    Undly_77.add_attribute("FxRateCalc", "M"); // 1
    Undly_77_set.insert("M");
    Undly_77.add_attribute("CapValu", "UnderlyingCapValue_t_1610901714"); // 1
    Undly_77_set.insert("UnderlyingCapValue_t_1610901714");
    Undly_77.add_attribute("SetMeth", "UnderlyingSettlMethod_t_220139578"); // 1
    Undly_77_set.insert("UnderlyingSettlMethod_t_220139578");
    Undly_77.add_attribute("PutCall", "132620334"); // 1
    Undly_77_set.insert("132620334");
    all_values.push_back(Undly_77_set);
    all_compo_names.insert("Undly_77_set");

    {
      xml_element UndAID_77{"UndAID"};
      multiset<string> UndAID_77_set;
      UndAID_77.add_attribute("AltID", "UnderlyingSecurityAltID_t_2117788796"); // 2
      UndAID_77_set.insert("UnderlyingSecurityAltID_t_2117788796");
      UndAID_77.add_attribute("AltIDSrc", "2"); // 2
      UndAID_77_set.insert("2");
      all_values.push_back(UndAID_77_set);
      all_compo_names.insert("UndAID_77_set");

      Undly_77.add_element(UndAID_77);
    }
    {
      xml_element Stip_113{"Stip"};
      multiset<string> Stip_113_set;
      Stip_113.add_attribute("Typ", "PROD"); // 2
      Stip_113_set.insert("PROD");
      Stip_113.add_attribute("Val", "UnderlyingStipValue_t_2027745305"); // 2
      Stip_113_set.insert("UnderlyingStipValue_t_2027745305");
      all_values.push_back(Stip_113_set);
      all_compo_names.insert("Stip_113_set");

      Undly_77.add_element(Stip_113);
    }
    {
      xml_element Pty_309{"Pty"};
      multiset<string> Pty_309_set;
      Pty_309.add_attribute("ID", "UnderlyingInstrumentPartyID_t_646656453"); // 2
      Pty_309_set.insert("UnderlyingInstrumentPartyID_t_646656453");
      Pty_309.add_attribute("Src", "C"); // 2
      Pty_309_set.insert("C");
      Pty_309.add_attribute("R", "83"); // 2
      Pty_309_set.insert("83");
      all_values.push_back(Pty_309_set);
      all_compo_names.insert("Pty_309_set");

      {
        xml_element Sub_309{"Sub"};
        multiset<string> Sub_309_set;
        Sub_309.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_454543239"); // 3
        Sub_309_set.insert("UnderlyingInstrumentPartySubID_t_454543239");
        Sub_309.add_attribute("Typ", "28"); // 3
        Sub_309_set.insert("28");
        all_values.push_back(Sub_309_set);
        all_compo_names.insert("Sub_309_set");

        Pty_309.add_element(Sub_309);
      }
      Undly_77.add_element(Pty_309);
    }
    elt.add_element(Undly_77);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_15{"TrdSes"};
    multiset<string> TrdSes_15_set;
    TrdSes_15.add_attribute("SesID", "3"); // 1
    TrdSes_15_set.insert("3");
    TrdSes_15.add_attribute("SesSub", "7"); // 1
    TrdSes_15_set.insert("7");
    all_values.push_back(TrdSes_15_set);
    all_compo_names.insert("TrdSes_15_set");

    elt.add_element(TrdSes_15);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_16{"TrdSes"};
    multiset<string> TrdSes_16_set;
    TrdSes_16.add_attribute("SesID", "6"); // 1
    TrdSes_16_set.insert("6");
    TrdSes_16.add_attribute("SesSub", "6"); // 1
    TrdSes_16_set.insert("6");
    all_values.push_back(TrdSes_16_set);
    all_compo_names.insert("TrdSes_16_set");

    elt.add_element(TrdSes_16);
  } // end TrdSes
  { // Qty
    xml_element Qty_5{"Qty"};
    multiset<string> Qty_5_set;
    Qty_5.add_attribute("Typ", "EX"); // 1
    Qty_5_set.insert("EX");
    Qty_5.add_attribute("Long", "7307737.770000"); // 1
    Qty_5_set.insert("7307737.770000");
    Qty_5.add_attribute("Short", "9080689.870000"); // 1
    Qty_5_set.insert("9080689.870000");
    Qty_5.add_attribute("Stat", "2"); // 1
    Qty_5_set.insert("2");
    Qty_5.add_attribute("QtyDt", "QuantityDate_t_639004654"); // 1
    Qty_5_set.insert("QuantityDate_t_639004654");
    all_values.push_back(Qty_5_set);
    all_compo_names.insert("Qty_5_set");

    {
      xml_element Pty_310{"Pty"};
      multiset<string> Pty_310_set;
      Pty_310.add_attribute("ID", "NestedPartyID_t_902834223"); // 2
      Pty_310_set.insert("NestedPartyID_t_902834223");
      Pty_310.add_attribute("Src", "I"); // 2
      Pty_310_set.insert("I");
      Pty_310.add_attribute("R", "61"); // 2
      Pty_310_set.insert("61");
      all_values.push_back(Pty_310_set);
      all_compo_names.insert("Pty_310_set");

      {
        xml_element Sub_310{"Sub"};
        multiset<string> Sub_310_set;
        Sub_310.add_attribute("ID", "NestedPartySubID_t_1250633960"); // 3
        Sub_310_set.insert("NestedPartySubID_t_1250633960");
        Sub_310.add_attribute("Typ", "8"); // 3
        Sub_310_set.insert("8");
        all_values.push_back(Sub_310_set);
        all_compo_names.insert("Sub_310_set");

        Pty_310.add_element(Sub_310);
      }
      Qty_5.add_element(Pty_310);
    }
    elt.add_element(Qty_5);
  } // end Qty
  { // Qty
    xml_element Qty_6{"Qty"};
    multiset<string> Qty_6_set;
    Qty_6.add_attribute("Typ", "ALC"); // 1
    Qty_6_set.insert("ALC");
    Qty_6.add_attribute("Long", "4945052.430000"); // 1
    Qty_6_set.insert("4945052.430000");
    Qty_6.add_attribute("Short", "6290989.430000"); // 1
    Qty_6_set.insert("6290989.430000");
    Qty_6.add_attribute("Stat", "1"); // 1
    Qty_6_set.insert("1");
    Qty_6.add_attribute("QtyDt", "QuantityDate_t_714644821"); // 1
    Qty_6_set.insert("QuantityDate_t_714644821");
    all_values.push_back(Qty_6_set);
    all_compo_names.insert("Qty_6_set");

    {
      xml_element Pty_311{"Pty"};
      multiset<string> Pty_311_set;
      Pty_311.add_attribute("ID", "NestedPartyID_t_761719278"); // 2
      Pty_311_set.insert("NestedPartyID_t_761719278");
      Pty_311.add_attribute("Src", "B"); // 2
      Pty_311_set.insert("B");
      Pty_311.add_attribute("R", "45"); // 2
      Pty_311_set.insert("45");
      all_values.push_back(Pty_311_set);
      all_compo_names.insert("Pty_311_set");

      {
        xml_element Sub_311{"Sub"};
        multiset<string> Sub_311_set;
        Sub_311.add_attribute("ID", "NestedPartySubID_t_768388116"); // 3
        Sub_311_set.insert("NestedPartySubID_t_768388116");
        Sub_311.add_attribute("Typ", "24"); // 3
        Sub_311_set.insert("24");
        all_values.push_back(Sub_311_set);
        all_compo_names.insert("Sub_311_set");

        Pty_311.add_element(Sub_311);
      }
      Qty_6.add_element(Pty_311);
    }
    elt.add_element(Qty_6);
  } // end Qty
  { // Amt
    xml_element Amt_10{"Amt"};
    multiset<string> Amt_10_set;
    Amt_10.add_attribute("Typ", "PREM"); // 1
    Amt_10_set.insert("PREM");
    Amt_10.add_attribute("Amt", "PosAmt_t_1170183821"); // 1
    Amt_10_set.insert("PosAmt_t_1170183821");
    Amt_10.add_attribute("Ccy", "PositionCurrency_t_775868279"); // 1
    Amt_10_set.insert("PositionCurrency_t_775868279");
    all_values.push_back(Amt_10_set);
    all_compo_names.insert("Amt_10_set");

    elt.add_element(Amt_10);
  } // end Amt
  { // Amt
    xml_element Amt_11{"Amt"};
    multiset<string> Amt_11_set;
    Amt_11.add_attribute("Typ", "PREM"); // 1
    Amt_11_set.insert("PREM");
    Amt_11.add_attribute("Amt", "PosAmt_t_1517251282"); // 1
    Amt_11_set.insert("PosAmt_t_1517251282");
    Amt_11.add_attribute("Ccy", "PositionCurrency_t_2077031726"); // 1
    Amt_11_set.insert("PositionCurrency_t_2077031726");
    all_values.push_back(Amt_11_set);
    all_compo_names.insert("Amt_11_set");

    elt.add_element(Amt_11);
  } // end Amt
  { // Amt
    xml_element Amt_12{"Amt"};
    multiset<string> Amt_12_set;
    Amt_12.add_attribute("Typ", "CRES"); // 1
    Amt_12_set.insert("CRES");
    Amt_12.add_attribute("Amt", "PosAmt_t_451234579"); // 1
    Amt_12_set.insert("PosAmt_t_451234579");
    Amt_12.add_attribute("Ccy", "PositionCurrency_t_2015613190"); // 1
    Amt_12_set.insert("PositionCurrency_t_2015613190");
    all_values.push_back(Amt_12_set);
    all_compo_names.insert("Amt_12_set");

    elt.add_element(Amt_12);
  } // end Amt
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
