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
  elt.add_attribute("RptID", "PosMaintRptID_t_231508368"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosMaintRptID_t_231508368");
  elt.add_attribute("TxnTyp", "5"); // 0
  PositionMaintenanceReport_message_t_0.insert("5");
  elt.add_attribute("ReqID", "PosReqID_t_274046468"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosReqID_t_274046468");
  elt.add_attribute("Actn", "4"); // 0
  PositionMaintenanceReport_message_t_0.insert("4");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_1134674015"); // 0
  PositionMaintenanceReport_message_t_0.insert("OrigPosReqRefID_t_1134674015");
  elt.add_attribute("Stat", "4"); // 0
  PositionMaintenanceReport_message_t_0.insert("4");
  elt.add_attribute("Rslt", "0"); // 0
  PositionMaintenanceReport_message_t_0.insert("0");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_144884492"); // 0
  PositionMaintenanceReport_message_t_0.insert("ClearingBusinessDate_t_144884492");
  elt.add_attribute("SetSesID", "EOD"); // 0
  PositionMaintenanceReport_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1637857546"); // 0
  PositionMaintenanceReport_message_t_0.insert("SettlSessSubID_t_1637857546");
  elt.add_attribute("Acct", "Account_t_1175068362"); // 0
  PositionMaintenanceReport_message_t_0.insert("Account_t_1175068362");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  PositionMaintenanceReport_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "3"); // 0
  PositionMaintenanceReport_message_t_0.insert("3");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_501866790"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosMaintRptRefID_t_501866790");
  elt.add_attribute("Ccy", "EUR"); // 0
  PositionMaintenanceReport_message_t_0.insert("EUR");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  PositionMaintenanceReport_message_t_0.insert("JPY");
  elt.add_attribute("CntraryInstrctnInd", "true"); // 0
  PositionMaintenanceReport_message_t_0.insert("true");
  elt.add_attribute("PriorSpreadInd", "true"); // 0
  PositionMaintenanceReport_message_t_0.insert("true");
  elt.add_attribute("TxnTm", "TransactTime_t_284535399"); // 0
  PositionMaintenanceReport_message_t_0.insert("TransactTime_t_284535399");
  elt.add_attribute("AdjTyp", "2"); // 0
  PositionMaintenanceReport_message_t_0.insert("2");
  elt.add_attribute("ThresholdAmt", "20579661.680000"); // 0
  PositionMaintenanceReport_message_t_0.insert("20579661.680000");
  elt.add_attribute("Txt", "Text_t_2142153139"); // 0
  PositionMaintenanceReport_message_t_0.insert("Text_t_2142153139");
  elt.add_attribute("EncTxtLen", "748280099"); // 0
  PositionMaintenanceReport_message_t_0.insert("748280099");
  elt.add_attribute("EncTxt", "EncodedText_t_308933994"); // 0
  PositionMaintenanceReport_message_t_0.insert("EncodedText_t_308933994");
  all_values.push_back(PositionMaintenanceReport_message_t_0);
  all_compo_names.insert("PositionMaintenanceReport_message_t");

  { // Hdr
    xml_element Hdr_65{"Hdr"};
    multiset<string> Hdr_65_set;
    Hdr_65.add_attribute("SeqNum", "56445462"); // 1
    Hdr_65_set.insert("56445462");
    Hdr_65.add_attribute("SID", "SenderCompID_t_872772011"); // 1
    Hdr_65_set.insert("SenderCompID_t_872772011");
    Hdr_65.add_attribute("TID", "TargetCompID_t_1746595262"); // 1
    Hdr_65_set.insert("TargetCompID_t_1746595262");
    Hdr_65.add_attribute("OBID", "OnBehalfOfCompID_t_1277340181"); // 1
    Hdr_65_set.insert("OnBehalfOfCompID_t_1277340181");
    Hdr_65.add_attribute("D2ID", "DeliverToCompID_t_1090139926"); // 1
    Hdr_65_set.insert("DeliverToCompID_t_1090139926");
    Hdr_65.add_attribute("SSub", "SenderSubID_t_1978103631"); // 1
    Hdr_65_set.insert("SenderSubID_t_1978103631");
    Hdr_65.add_attribute("SLoc", "SenderLocationID_t_1101898071"); // 1
    Hdr_65_set.insert("SenderLocationID_t_1101898071");
    Hdr_65.add_attribute("TSub", "TargetSubID_t_1364186395"); // 1
    Hdr_65_set.insert("TargetSubID_t_1364186395");
    Hdr_65.add_attribute("TLoc", "TargetLocationID_t_1235456334"); // 1
    Hdr_65_set.insert("TargetLocationID_t_1235456334");
    Hdr_65.add_attribute("OBSub", "OnBehalfOfSubID_t_89088439"); // 1
    Hdr_65_set.insert("OnBehalfOfSubID_t_89088439");
    Hdr_65.add_attribute("OBLoc", "OnBehalfOfLocationID_t_138642146"); // 1
    Hdr_65_set.insert("OnBehalfOfLocationID_t_138642146");
    Hdr_65.add_attribute("D2Sub", "DeliverToSubID_t_519661645"); // 1
    Hdr_65_set.insert("DeliverToSubID_t_519661645");
    Hdr_65.add_attribute("D2Loc", "DeliverToLocationID_t_233972931"); // 1
    Hdr_65_set.insert("DeliverToLocationID_t_233972931");
    Hdr_65.add_attribute("PosDup", "Y"); // 1
    Hdr_65_set.insert("Y");
    Hdr_65.add_attribute("PosRsnd", "Y"); // 1
    Hdr_65_set.insert("Y");
    Hdr_65.add_attribute("Snt", "SendingTime_t_1409041293"); // 1
    Hdr_65_set.insert("SendingTime_t_1409041293");
    Hdr_65.add_attribute("OrigSnt", "OrigSendingTime_t_1576271849"); // 1
    Hdr_65_set.insert("OrigSendingTime_t_1576271849");
    Hdr_65.add_attribute("MsgEncd", "MessageEncoding_t_828280246"); // 1
    Hdr_65_set.insert("MessageEncoding_t_828280246");
    all_values.push_back(Hdr_65_set);
    all_compo_names.insert("Hdr_65_set");

    {
      xml_element Hop_65{"Hop"};
      multiset<string> Hop_65_set;
      Hop_65.add_attribute("ID", "HopCompID_t_1910908083"); // 2
      Hop_65_set.insert("HopCompID_t_1910908083");
      Hop_65.add_attribute("Ref", "83826621"); // 2
      Hop_65_set.insert("83826621");
      Hop_65.add_attribute("Snt", "HopSendingTime_t_196083687"); // 2
      Hop_65_set.insert("HopSendingTime_t_196083687");
      all_values.push_back(Hop_65_set);
      all_compo_names.insert("Hop_65_set");

      Hdr_65.add_element(Hop_65);
    }
    elt.add_element(Hdr_65);
  } // end Hdr
  { // Pty
    xml_element Pty_276{"Pty"};
    multiset<string> Pty_276_set;
    Pty_276.add_attribute("ID", "PartyID_t_1510279375"); // 1
    Pty_276_set.insert("PartyID_t_1510279375");
    Pty_276.add_attribute("Src", "E"); // 1
    Pty_276_set.insert("E");
    Pty_276.add_attribute("R", "25"); // 1
    Pty_276_set.insert("25");
    all_values.push_back(Pty_276_set);
    all_compo_names.insert("Pty_276_set");

    {
      xml_element Sub_276{"Sub"};
      multiset<string> Sub_276_set;
      Sub_276.add_attribute("ID", "PartySubID_t_1794814775"); // 2
      Sub_276_set.insert("PartySubID_t_1794814775");
      Sub_276.add_attribute("Typ", "32"); // 2
      Sub_276_set.insert("32");
      all_values.push_back(Sub_276_set);
      all_compo_names.insert("Sub_276_set");

      Pty_276.add_element(Sub_276);
    }
    elt.add_element(Pty_276);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_53{"Instrmt"};
    multiset<string> Instrmt_53_set;
    Instrmt_53.add_attribute("Sym", "Symbol_t_543223792"); // 1
    Instrmt_53_set.insert("Symbol_t_543223792");
    Instrmt_53.add_attribute("Sfx", "CD"); // 1
    Instrmt_53_set.insert("CD");
    Instrmt_53.add_attribute("ID", "SecurityID_t_1687951533"); // 1
    Instrmt_53_set.insert("SecurityID_t_1687951533");
    Instrmt_53.add_attribute("Src", "J"); // 1
    Instrmt_53_set.insert("J");
    Instrmt_53.add_attribute("Prod", "3"); // 1
    Instrmt_53_set.insert("3");
    Instrmt_53.add_attribute("ProdCmplx", "ProductComplex_t_413239896"); // 1
    Instrmt_53_set.insert("ProductComplex_t_413239896");
    Instrmt_53.add_attribute("SecGrp", "SecurityGroup_t_451269401"); // 1
    Instrmt_53_set.insert("SecurityGroup_t_451269401");
    Instrmt_53.add_attribute("CFI", "CFICode_t_975786261"); // 1
    Instrmt_53_set.insert("CFICode_t_975786261");
    Instrmt_53.add_attribute("SecTyp", "FXSPOT"); // 1
    Instrmt_53_set.insert("FXSPOT");
    Instrmt_53.add_attribute("SubTyp", "SecuritySubType_t_281889384"); // 1
    Instrmt_53_set.insert("SecuritySubType_t_281889384");
    Instrmt_53.add_attribute("MMY", "2077684332"); // 1
    Instrmt_53_set.insert("2077684332");
    Instrmt_53.add_attribute("MatDt", "MaturityDate_t_720082570"); // 1
    Instrmt_53_set.insert("MaturityDate_t_720082570");
    Instrmt_53.add_attribute("MatTm", "1517345718"); // 1
    Instrmt_53_set.insert("1517345718");
    Instrmt_53.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_19289123"); // 1
    Instrmt_53_set.insert("SettleOnOpenFlag_t_19289123");
    Instrmt_53.add_attribute("AsgnMeth", "858724716"); // 1
    Instrmt_53_set.insert("858724716");
    Instrmt_53.add_attribute("Status", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("CpnPmt", "CouponPaymentDate_t_253262054"); // 1
    Instrmt_53_set.insert("CouponPaymentDate_t_253262054");
    Instrmt_53.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_53_set.insert("MR");
    Instrmt_53.add_attribute("Snrty", "SR"); // 1
    Instrmt_53_set.insert("SR");
    Instrmt_53.add_attribute("NotlPctOut", "16623033.480000"); // 1
    Instrmt_53_set.insert("16623033.480000");
    Instrmt_53.add_attribute("OrigNotlPctOut", "12643048.780000"); // 1
    Instrmt_53_set.insert("12643048.780000");
    Instrmt_53.add_attribute("AttchPnt", "7278395.040000"); // 1
    Instrmt_53_set.insert("7278395.040000");
    Instrmt_53.add_attribute("DetchPnt", "14257277.830000"); // 1
    Instrmt_53_set.insert("14257277.830000");
    Instrmt_53.add_attribute("Issued", "IssueDate_t_1348131499"); // 1
    Instrmt_53_set.insert("IssueDate_t_1348131499");
    Instrmt_53.add_attribute("RepoCollSecTyp", "923923192"); // 1
    Instrmt_53_set.insert("923923192");
    Instrmt_53.add_attribute("RepoTrm", "1774750645"); // 1
    Instrmt_53_set.insert("1774750645");
    Instrmt_53.add_attribute("RepoRt", "7109272.270000"); // 1
    Instrmt_53_set.insert("7109272.270000");
    Instrmt_53.add_attribute("Fctr", "2512932.990000"); // 1
    Instrmt_53_set.insert("2512932.990000");
    Instrmt_53.add_attribute("CrdRtg", "CreditRating_t_260008269"); // 1
    Instrmt_53_set.insert("CreditRating_t_260008269");
    Instrmt_53.add_attribute("Rgstry", "InstrRegistry_t_358258354"); // 1
    Instrmt_53_set.insert("InstrRegistry_t_358258354");
    Instrmt_53.add_attribute("IssuCtry", "1190964733"); // 1
    Instrmt_53_set.insert("1190964733");
    Instrmt_53.add_attribute("StPrv", "StateOrProvinceOfIssue_t_803232062"); // 1
    Instrmt_53_set.insert("StateOrProvinceOfIssue_t_803232062");
    Instrmt_53.add_attribute("Lcl", "LocaleOfIssue_t_258972"); // 1
    Instrmt_53_set.insert("LocaleOfIssue_t_258972");
    Instrmt_53.add_attribute("Redeem", "RedemptionDate_t_731432618"); // 1
    Instrmt_53_set.insert("RedemptionDate_t_731432618");
    Instrmt_53.add_attribute("StrkPx", "16553898.480000"); // 1
    Instrmt_53_set.insert("16553898.480000");
    Instrmt_53.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_53_set.insert("CHF");
    Instrmt_53.add_attribute("StrkMult", "21066592.490000"); // 1
    Instrmt_53_set.insert("21066592.490000");
    Instrmt_53.add_attribute("StrkValu", "6744913.130000"); // 1
    Instrmt_53_set.insert("6744913.130000");
    Instrmt_53.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_53_set.insert("3");
    Instrmt_53.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("StrkPxBndryPrcsn", "6046919.970000"); // 1
    Instrmt_53_set.insert("6046919.970000");
    Instrmt_53.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("OptAt", "1758410703"); // 1
    Instrmt_53_set.insert("1758410703");
    Instrmt_53.add_attribute("Mult", "6239811.210000"); // 1
    Instrmt_53_set.insert("6239811.210000");
    Instrmt_53.add_attribute("MultTyp", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_53_set.insert("3");
    Instrmt_53.add_attribute("MinPxIncr", "8772431.750000"); // 1
    Instrmt_53_set.insert("8772431.750000");
    Instrmt_53.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1767409005"); // 1
    Instrmt_53_set.insert("MinPriceIncrementAmount_t_1767409005");
    Instrmt_53.add_attribute("UOM", "Bbl"); // 1
    Instrmt_53_set.insert("Bbl");
    Instrmt_53.add_attribute("UOMQty", "3920628.750000"); // 1
    Instrmt_53_set.insert("3920628.750000");
    Instrmt_53.add_attribute("PxUOM", "MMbbl"); // 1
    Instrmt_53_set.insert("MMbbl");
    Instrmt_53.add_attribute("PxUOMQty", "1278495.330000"); // 1
    Instrmt_53_set.insert("1278495.330000");
    Instrmt_53.add_attribute("SettlMeth", "P"); // 1
    Instrmt_53_set.insert("P");
    Instrmt_53.add_attribute("ExerStyle", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_53_set.insert("2");
    Instrmt_53.add_attribute("OptPayAmt", "OptPayoutAmount_t_1445057656"); // 1
    Instrmt_53_set.insert("OptPayoutAmount_t_1445057656");
    Instrmt_53.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_53_set.insert("INT");
    Instrmt_53.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_53_set.insert("EQTY");
    Instrmt_53.add_attribute("ListMeth", "0"); // 1
    Instrmt_53_set.insert("0");
    Instrmt_53.add_attribute("CapPx", "11540636.680000"); // 1
    Instrmt_53_set.insert("11540636.680000");
    Instrmt_53.add_attribute("FlrPx", "3465471.100000"); // 1
    Instrmt_53_set.insert("3465471.100000");
    Instrmt_53.add_attribute("PutCall", "0"); // 1
    Instrmt_53_set.insert("0");
    Instrmt_53.add_attribute("FlexInd", "true"); // 1
    Instrmt_53_set.insert("true");
    Instrmt_53.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_53_set.insert("false");
    Instrmt_53.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_53_set.insert("Mo");
    Instrmt_53.add_attribute("CpnRt", "8530276.920000"); // 1
    Instrmt_53_set.insert("8530276.920000");
    Instrmt_53.add_attribute("Exch", "SecurityExchange_t_75168596"); // 1
    Instrmt_53_set.insert("SecurityExchange_t_75168596");
    Instrmt_53.add_attribute("PosLmt", "1975379790"); // 1
    Instrmt_53_set.insert("1975379790");
    Instrmt_53.add_attribute("NTPosLmt", "1527519005"); // 1
    Instrmt_53_set.insert("1527519005");
    Instrmt_53.add_attribute("Issr", "Issuer_t_575737286"); // 1
    Instrmt_53_set.insert("Issuer_t_575737286");
    Instrmt_53.add_attribute("EncIssrLen", "68961127"); // 1
    Instrmt_53_set.insert("68961127");
    Instrmt_53.add_attribute("EncIssr", "EncodedIssuer_t_2132211003"); // 1
    Instrmt_53_set.insert("EncodedIssuer_t_2132211003");
    Instrmt_53.add_attribute("Desc", "SecurityDesc_t_1796388546"); // 1
    Instrmt_53_set.insert("SecurityDesc_t_1796388546");
    Instrmt_53.add_attribute("EncSecDescLen", "1827371831"); // 1
    Instrmt_53_set.insert("1827371831");
    Instrmt_53.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_608708476"); // 1
    Instrmt_53_set.insert("EncodedSecurityDesc_t_608708476");
    Instrmt_53.add_attribute("Pool", "Pool_t_1728280874"); // 1
    Instrmt_53_set.insert("Pool_t_1728280874");
    Instrmt_53.add_attribute("CSetMo", "1327822601"); // 1
    Instrmt_53_set.insert("1327822601");
    Instrmt_53.add_attribute("CPPgm", "1"); // 1
    Instrmt_53_set.insert("1");
    Instrmt_53.add_attribute("CPRegT", "CPRegType_t_1348206231"); // 1
    Instrmt_53_set.insert("CPRegType_t_1348206231");
    Instrmt_53.add_attribute("Dated", "DatedDate_t_727832630"); // 1
    Instrmt_53_set.insert("DatedDate_t_727832630");
    Instrmt_53.add_attribute("IntAcrl", "InterestAccrualDate_t_1878014527"); // 1
    Instrmt_53_set.insert("InterestAccrualDate_t_1878014527");
    all_values.push_back(Instrmt_53_set);
    all_compo_names.insert("Instrmt_53_set");

    {
      xml_element AID_56{"AID"};
      multiset<string> AID_56_set;
      AID_56.add_attribute("AltID", "SecurityAltID_t_84952819"); // 2
      AID_56_set.insert("SecurityAltID_t_84952819");
      AID_56.add_attribute("AltIDSrc", "J"); // 2
      AID_56_set.insert("J");
      all_values.push_back(AID_56_set);
      all_compo_names.insert("AID_56_set");

      Instrmt_53.add_element(AID_56);
    }
    {
      xml_element SecXML_56{"SecXML"};
      multiset<string> SecXML_56_set;
      SecXML_56.add_attribute("Schema", "SecurityXMLSchema_t_1548321538"); // 2
      SecXML_56_set.insert("SecurityXMLSchema_t_1548321538");
      all_values.push_back(SecXML_56_set);
      all_compo_names.insert("SecXML_56_set");

      Instrmt_53.add_element(SecXML_56);
    }
    {
      xml_element Evnt_56{"Evnt"};
      multiset<string> Evnt_56_set;
      Evnt_56.add_attribute("EventTyp", "7"); // 2
      Evnt_56_set.insert("7");
      Evnt_56.add_attribute("Dt", "EventDate_t_1907454889"); // 2
      Evnt_56_set.insert("EventDate_t_1907454889");
      Evnt_56.add_attribute("Tm", "EventTime_t_845895546"); // 2
      Evnt_56_set.insert("EventTime_t_845895546");
      Evnt_56.add_attribute("Px", "9656362.210000"); // 2
      Evnt_56_set.insert("9656362.210000");
      Evnt_56.add_attribute("Txt", "EventText_t_1063037266"); // 2
      Evnt_56_set.insert("EventText_t_1063037266");
      all_values.push_back(Evnt_56_set);
      all_compo_names.insert("Evnt_56_set");

      Instrmt_53.add_element(Evnt_56);
    }
    {
      xml_element Pty_277{"Pty"};
      multiset<string> Pty_277_set;
      Pty_277.add_attribute("ID", "InstrumentPartyID_t_403477824"); // 2
      Pty_277_set.insert("InstrumentPartyID_t_403477824");
      Pty_277.add_attribute("Src", "1"); // 2
      Pty_277_set.insert("1");
      Pty_277.add_attribute("R", "6"); // 2
      Pty_277_set.insert("6");
      all_values.push_back(Pty_277_set);
      all_compo_names.insert("Pty_277_set");

      {
        xml_element Sub_277{"Sub"};
        multiset<string> Sub_277_set;
        Sub_277.add_attribute("ID", "InstrumentPartySubID_t_764292164"); // 3
        Sub_277_set.insert("InstrumentPartySubID_t_764292164");
        Sub_277.add_attribute("Typ", "30"); // 3
        Sub_277_set.insert("30");
        all_values.push_back(Sub_277_set);
        all_compo_names.insert("Sub_277_set");

        Pty_277.add_element(Sub_277);
      }
      Instrmt_53.add_element(Pty_277);
    }
    {
      xml_element CmplxEvnt_53{"CmplxEvnt"};
      multiset<string> CmplxEvnt_53_set;
      CmplxEvnt_53.add_attribute("Typ", "6"); // 2
      CmplxEvnt_53_set.insert("6");
      CmplxEvnt_53.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_633012705"); // 2
      CmplxEvnt_53_set.insert("ComplexOptPayoutAmount_t_633012705");
      CmplxEvnt_53.add_attribute("Px", "19795665.750000"); // 2
      CmplxEvnt_53_set.insert("19795665.750000");
      CmplxEvnt_53.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_53_set.insert("5");
      CmplxEvnt_53.add_attribute("PxBndryPrcsn", "4609088.470000"); // 2
      CmplxEvnt_53_set.insert("4609088.470000");
      CmplxEvnt_53.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_53_set.insert("1");
      CmplxEvnt_53.add_attribute("Cond", "1"); // 2
      CmplxEvnt_53_set.insert("1");
      all_values.push_back(CmplxEvnt_53_set);
      all_compo_names.insert("CmplxEvnt_53_set");

      {
        xml_element EvntDts_53{"EvntDts"};
        multiset<string> EvntDts_53_set;
        EvntDts_53.add_attribute("StartDt", "ComplexEventStartDate_t_529869974"); // 3
        EvntDts_53_set.insert("ComplexEventStartDate_t_529869974");
        EvntDts_53.add_attribute("EndDt", "ComplexEventEndDate_t_1344329287"); // 3
        EvntDts_53_set.insert("ComplexEventEndDate_t_1344329287");
        all_values.push_back(EvntDts_53_set);
        all_compo_names.insert("EvntDts_53_set");

        {
          xml_element EvntTms_53{"EvntTms"};
          multiset<string> EvntTms_53_set;
          EvntTms_53.add_attribute("StartTm", "639891238"); // 4
          EvntTms_53_set.insert("639891238");
          EvntTms_53.add_attribute("EndTm", "209758157"); // 4
          EvntTms_53_set.insert("209758157");
          all_values.push_back(EvntTms_53_set);
          all_compo_names.insert("EvntTms_53_set");

          EvntDts_53.add_element(EvntTms_53);
        }
        CmplxEvnt_53.add_element(EvntDts_53);
      }
      Instrmt_53.add_element(CmplxEvnt_53);
    }
    elt.add_element(Instrmt_53);
  } // end Instrmt
  { // Leg
    xml_element Leg_56{"Leg"};
    multiset<string> Leg_56_set;
    Leg_56.add_attribute("Sym", "LegSymbol_t_220688464"); // 1
    Leg_56_set.insert("LegSymbol_t_220688464");
    Leg_56.add_attribute("Sfx", "WI"); // 1
    Leg_56_set.insert("WI");
    Leg_56.add_attribute("ID", "LegSecurityID_t_1291505767"); // 1
    Leg_56_set.insert("LegSecurityID_t_1291505767");
    Leg_56.add_attribute("Src", "6"); // 1
    Leg_56_set.insert("6");
    Leg_56.add_attribute("Prod", "4"); // 1
    Leg_56_set.insert("4");
    Leg_56.add_attribute("CFI", "LegCFICode_t_1022036646"); // 1
    Leg_56_set.insert("LegCFICode_t_1022036646");
    Leg_56.add_attribute("SecTyp", "EUFRN"); // 1
    Leg_56_set.insert("EUFRN");
    Leg_56.add_attribute("SecSubTyp", "LegSecuritySubType_t_973611905"); // 1
    Leg_56_set.insert("LegSecuritySubType_t_973611905");
    Leg_56.add_attribute("MMY", "422874536"); // 1
    Leg_56_set.insert("422874536");
    Leg_56.add_attribute("Mat", "LegMaturityDate_t_1823678422"); // 1
    Leg_56_set.insert("LegMaturityDate_t_1823678422");
    Leg_56.add_attribute("MatTm", "733583147"); // 1
    Leg_56_set.insert("733583147");
    Leg_56.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1268770082"); // 1
    Leg_56_set.insert("LegCouponPaymentDate_t_1268770082");
    Leg_56.add_attribute("Issued", "LegIssueDate_t_641830995"); // 1
    Leg_56_set.insert("LegIssueDate_t_641830995");
    Leg_56.add_attribute("RepoCollSecTyp", "1796620413"); // 1
    Leg_56_set.insert("1796620413");
    Leg_56.add_attribute("RepoTrm", "1672247907"); // 1
    Leg_56_set.insert("1672247907");
    Leg_56.add_attribute("RepoRt", "6140472.370000"); // 1
    Leg_56_set.insert("6140472.370000");
    Leg_56.add_attribute("Fctr", "10587211.420000"); // 1
    Leg_56_set.insert("10587211.420000");
    Leg_56.add_attribute("CrdRtg", "LegCreditRating_t_289056423"); // 1
    Leg_56_set.insert("LegCreditRating_t_289056423");
    Leg_56.add_attribute("Rgstry", "LegInstrRegistry_t_1740586120"); // 1
    Leg_56_set.insert("LegInstrRegistry_t_1740586120");
    Leg_56.add_attribute("Ctry", "1398801600"); // 1
    Leg_56_set.insert("1398801600");
    Leg_56.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_922069128"); // 1
    Leg_56_set.insert("LegStateOrProvinceOfIssue_t_922069128");
    Leg_56.add_attribute("Lcl", "LegLocaleOfIssue_t_1572669047"); // 1
    Leg_56_set.insert("LegLocaleOfIssue_t_1572669047");
    Leg_56.add_attribute("Redeem", "LegRedemptionDate_t_1814050654"); // 1
    Leg_56_set.insert("LegRedemptionDate_t_1814050654");
    Leg_56.add_attribute("Strk", "13829779.750000"); // 1
    Leg_56_set.insert("13829779.750000");
    Leg_56.add_attribute("StrkCcy", "GBP"); // 1
    Leg_56_set.insert("GBP");
    Leg_56.add_attribute("OptA", "1912847950"); // 1
    Leg_56_set.insert("1912847950");
    Leg_56.add_attribute("Cmult", "21291166.190000"); // 1
    Leg_56_set.insert("21291166.190000");
    Leg_56.add_attribute("MultTyp", "0"); // 1
    Leg_56_set.insert("0");
    Leg_56.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_56_set.insert("2");
    Leg_56.add_attribute("UOM", "USD"); // 1
    Leg_56_set.insert("USD");
    Leg_56.add_attribute("UOMQty", "15181330.480000"); // 1
    Leg_56_set.insert("15181330.480000");
    Leg_56.add_attribute("PxUOM", "MWh"); // 1
    Leg_56_set.insert("MWh");
    Leg_56.add_attribute("PxUOMQty", "10786928.530000"); // 1
    Leg_56_set.insert("10786928.530000");
    Leg_56.add_attribute("TmUnit", "Min"); // 1
    Leg_56_set.insert("Min");
    Leg_56.add_attribute("ExerStyle", "0"); // 1
    Leg_56_set.insert("0");
    Leg_56.add_attribute("CpnRt", "21007294.990000"); // 1
    Leg_56_set.insert("21007294.990000");
    Leg_56.add_attribute("Exch", "LegSecurityExchange_t_445907963"); // 1
    Leg_56_set.insert("LegSecurityExchange_t_445907963");
    Leg_56.add_attribute("Issr", "LegIssuer_t_456761217"); // 1
    Leg_56_set.insert("LegIssuer_t_456761217");
    Leg_56.add_attribute("EncLegIssrLen", "376120387"); // 1
    Leg_56_set.insert("376120387");
    Leg_56.add_attribute("EncLegIssr", "EncodedLegIssuer_t_122102737"); // 1
    Leg_56_set.insert("EncodedLegIssuer_t_122102737");
    Leg_56.add_attribute("Desc", "LegSecurityDesc_t_1190344364"); // 1
    Leg_56_set.insert("LegSecurityDesc_t_1190344364");
    Leg_56.add_attribute("EncLegSecDescLen", "1644890470"); // 1
    Leg_56_set.insert("1644890470");
    Leg_56.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_763933732"); // 1
    Leg_56_set.insert("EncodedLegSecurityDesc_t_763933732");
    Leg_56.add_attribute("RatioQty", "8394811.300000"); // 1
    Leg_56_set.insert("8394811.300000");
    Leg_56.add_attribute("Side", "A"); // 1
    Leg_56_set.insert("A");
    Leg_56.add_attribute("Ccy", "GBP"); // 1
    Leg_56_set.insert("GBP");
    Leg_56.add_attribute("Pool", "LegPool_t_1458711152"); // 1
    Leg_56_set.insert("LegPool_t_1458711152");
    Leg_56.add_attribute("Dated", "LegDatedDate_t_971083442"); // 1
    Leg_56_set.insert("LegDatedDate_t_971083442");
    Leg_56.add_attribute("CSetMo", "1149520225"); // 1
    Leg_56_set.insert("1149520225");
    Leg_56.add_attribute("IntAcrl", "LegInterestAccrualDate_t_233296633"); // 1
    Leg_56_set.insert("LegInterestAccrualDate_t_233296633");
    Leg_56.add_attribute("PutCall", "396268841"); // 1
    Leg_56_set.insert("396268841");
    Leg_56.add_attribute("LegOptionRatio", "8160872.310000"); // 1
    Leg_56_set.insert("8160872.310000");
    Leg_56.add_attribute("Px", "16162746.080000"); // 1
    Leg_56_set.insert("16162746.080000");
    all_values.push_back(Leg_56_set);
    all_compo_names.insert("Leg_56_set");

    {
      xml_element LegAID_56{"LegAID"};
      multiset<string> LegAID_56_set;
      LegAID_56.add_attribute("SecAltID", "LegSecurityAltID_t_1181056172"); // 2
      LegAID_56_set.insert("LegSecurityAltID_t_1181056172");
      LegAID_56.add_attribute("SecAltIDSrc", "F"); // 2
      LegAID_56_set.insert("F");
      all_values.push_back(LegAID_56_set);
      all_compo_names.insert("LegAID_56_set");

      Leg_56.add_element(LegAID_56);
    }
    elt.add_element(Leg_56);
  } // end Leg
  { // Leg
    xml_element Leg_57{"Leg"};
    multiset<string> Leg_57_set;
    Leg_57.add_attribute("Sym", "LegSymbol_t_1381638910"); // 1
    Leg_57_set.insert("LegSymbol_t_1381638910");
    Leg_57.add_attribute("Sfx", "WI"); // 1
    Leg_57_set.insert("WI");
    Leg_57.add_attribute("ID", "LegSecurityID_t_623601514"); // 1
    Leg_57_set.insert("LegSecurityID_t_623601514");
    Leg_57.add_attribute("Src", "9"); // 1
    Leg_57_set.insert("9");
    Leg_57.add_attribute("Prod", "13"); // 1
    Leg_57_set.insert("13");
    Leg_57.add_attribute("CFI", "LegCFICode_t_2141734563"); // 1
    Leg_57_set.insert("LegCFICode_t_2141734563");
    Leg_57.add_attribute("SecTyp", "SECPLEDGE"); // 1
    Leg_57_set.insert("SECPLEDGE");
    Leg_57.add_attribute("SecSubTyp", "LegSecuritySubType_t_2028569083"); // 1
    Leg_57_set.insert("LegSecuritySubType_t_2028569083");
    Leg_57.add_attribute("MMY", "933795011"); // 1
    Leg_57_set.insert("933795011");
    Leg_57.add_attribute("Mat", "LegMaturityDate_t_205130252"); // 1
    Leg_57_set.insert("LegMaturityDate_t_205130252");
    Leg_57.add_attribute("MatTm", "1981814935"); // 1
    Leg_57_set.insert("1981814935");
    Leg_57.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1379702974"); // 1
    Leg_57_set.insert("LegCouponPaymentDate_t_1379702974");
    Leg_57.add_attribute("Issued", "LegIssueDate_t_661891470"); // 1
    Leg_57_set.insert("LegIssueDate_t_661891470");
    Leg_57.add_attribute("RepoCollSecTyp", "210451674"); // 1
    Leg_57_set.insert("210451674");
    Leg_57.add_attribute("RepoTrm", "1501805711"); // 1
    Leg_57_set.insert("1501805711");
    Leg_57.add_attribute("RepoRt", "18522358.340000"); // 1
    Leg_57_set.insert("18522358.340000");
    Leg_57.add_attribute("Fctr", "18553421.440000"); // 1
    Leg_57_set.insert("18553421.440000");
    Leg_57.add_attribute("CrdRtg", "LegCreditRating_t_118255795"); // 1
    Leg_57_set.insert("LegCreditRating_t_118255795");
    Leg_57.add_attribute("Rgstry", "LegInstrRegistry_t_544233316"); // 1
    Leg_57_set.insert("LegInstrRegistry_t_544233316");
    Leg_57.add_attribute("Ctry", "877513225"); // 1
    Leg_57_set.insert("877513225");
    Leg_57.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1496236765"); // 1
    Leg_57_set.insert("LegStateOrProvinceOfIssue_t_1496236765");
    Leg_57.add_attribute("Lcl", "LegLocaleOfIssue_t_294951941"); // 1
    Leg_57_set.insert("LegLocaleOfIssue_t_294951941");
    Leg_57.add_attribute("Redeem", "LegRedemptionDate_t_188740730"); // 1
    Leg_57_set.insert("LegRedemptionDate_t_188740730");
    Leg_57.add_attribute("Strk", "3198365.590000"); // 1
    Leg_57_set.insert("3198365.590000");
    Leg_57.add_attribute("StrkCcy", "CHF"); // 1
    Leg_57_set.insert("CHF");
    Leg_57.add_attribute("OptA", "716105400"); // 1
    Leg_57_set.insert("716105400");
    Leg_57.add_attribute("Cmult", "1130757.490000"); // 1
    Leg_57_set.insert("1130757.490000");
    Leg_57.add_attribute("MultTyp", "2"); // 1
    Leg_57_set.insert("2");
    Leg_57.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_57_set.insert("3");
    Leg_57.add_attribute("UOM", "MMBtu"); // 1
    Leg_57_set.insert("MMBtu");
    Leg_57.add_attribute("UOMQty", "12724672.340000"); // 1
    Leg_57_set.insert("12724672.340000");
    Leg_57.add_attribute("PxUOM", "Bbl"); // 1
    Leg_57_set.insert("Bbl");
    Leg_57.add_attribute("PxUOMQty", "628341.940000"); // 1
    Leg_57_set.insert("628341.940000");
    Leg_57.add_attribute("TmUnit", "S"); // 1
    Leg_57_set.insert("S");
    Leg_57.add_attribute("ExerStyle", "0"); // 1
    Leg_57_set.insert("0");
    Leg_57.add_attribute("CpnRt", "570851.090000"); // 1
    Leg_57_set.insert("570851.090000");
    Leg_57.add_attribute("Exch", "LegSecurityExchange_t_1203725896"); // 1
    Leg_57_set.insert("LegSecurityExchange_t_1203725896");
    Leg_57.add_attribute("Issr", "LegIssuer_t_1743328734"); // 1
    Leg_57_set.insert("LegIssuer_t_1743328734");
    Leg_57.add_attribute("EncLegIssrLen", "990880120"); // 1
    Leg_57_set.insert("990880120");
    Leg_57.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1408856149"); // 1
    Leg_57_set.insert("EncodedLegIssuer_t_1408856149");
    Leg_57.add_attribute("Desc", "LegSecurityDesc_t_1577660021"); // 1
    Leg_57_set.insert("LegSecurityDesc_t_1577660021");
    Leg_57.add_attribute("EncLegSecDescLen", "223099446"); // 1
    Leg_57_set.insert("223099446");
    Leg_57.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2070747619"); // 1
    Leg_57_set.insert("EncodedLegSecurityDesc_t_2070747619");
    Leg_57.add_attribute("RatioQty", "17881116.950000"); // 1
    Leg_57_set.insert("17881116.950000");
    Leg_57.add_attribute("Side", "6"); // 1
    Leg_57_set.insert("6");
    Leg_57.add_attribute("Ccy", "GBP"); // 1
    Leg_57_set.insert("GBP");
    Leg_57.add_attribute("Pool", "LegPool_t_1843160952"); // 1
    Leg_57_set.insert("LegPool_t_1843160952");
    Leg_57.add_attribute("Dated", "LegDatedDate_t_172249474"); // 1
    Leg_57_set.insert("LegDatedDate_t_172249474");
    Leg_57.add_attribute("CSetMo", "225999769"); // 1
    Leg_57_set.insert("225999769");
    Leg_57.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1191914070"); // 1
    Leg_57_set.insert("LegInterestAccrualDate_t_1191914070");
    Leg_57.add_attribute("PutCall", "467201415"); // 1
    Leg_57_set.insert("467201415");
    Leg_57.add_attribute("LegOptionRatio", "4147404.990000"); // 1
    Leg_57_set.insert("4147404.990000");
    Leg_57.add_attribute("Px", "15117506.290000"); // 1
    Leg_57_set.insert("15117506.290000");
    all_values.push_back(Leg_57_set);
    all_compo_names.insert("Leg_57_set");

    {
      xml_element LegAID_57{"LegAID"};
      multiset<string> LegAID_57_set;
      LegAID_57.add_attribute("SecAltID", "LegSecurityAltID_t_1911673581"); // 2
      LegAID_57_set.insert("LegSecurityAltID_t_1911673581");
      LegAID_57.add_attribute("SecAltIDSrc", "9"); // 2
      LegAID_57_set.insert("9");
      all_values.push_back(LegAID_57_set);
      all_compo_names.insert("LegAID_57_set");

      Leg_57.add_element(LegAID_57);
    }
    elt.add_element(Leg_57);
  } // end Leg
  { // Leg
    xml_element Leg_58{"Leg"};
    multiset<string> Leg_58_set;
    Leg_58.add_attribute("Sym", "LegSymbol_t_80372382"); // 1
    Leg_58_set.insert("LegSymbol_t_80372382");
    Leg_58.add_attribute("Sfx", "CD"); // 1
    Leg_58_set.insert("CD");
    Leg_58.add_attribute("ID", "LegSecurityID_t_727606186"); // 1
    Leg_58_set.insert("LegSecurityID_t_727606186");
    Leg_58.add_attribute("Src", "2"); // 1
    Leg_58_set.insert("2");
    Leg_58.add_attribute("Prod", "7"); // 1
    Leg_58_set.insert("7");
    Leg_58.add_attribute("CFI", "LegCFICode_t_2000073420"); // 1
    Leg_58_set.insert("LegCFICode_t_2000073420");
    Leg_58.add_attribute("SecTyp", "TECP"); // 1
    Leg_58_set.insert("TECP");
    Leg_58.add_attribute("SecSubTyp", "LegSecuritySubType_t_1526816204"); // 1
    Leg_58_set.insert("LegSecuritySubType_t_1526816204");
    Leg_58.add_attribute("MMY", "334334728"); // 1
    Leg_58_set.insert("334334728");
    Leg_58.add_attribute("Mat", "LegMaturityDate_t_457177026"); // 1
    Leg_58_set.insert("LegMaturityDate_t_457177026");
    Leg_58.add_attribute("MatTm", "1583901313"); // 1
    Leg_58_set.insert("1583901313");
    Leg_58.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1538060624"); // 1
    Leg_58_set.insert("LegCouponPaymentDate_t_1538060624");
    Leg_58.add_attribute("Issued", "LegIssueDate_t_53022112"); // 1
    Leg_58_set.insert("LegIssueDate_t_53022112");
    Leg_58.add_attribute("RepoCollSecTyp", "427297785"); // 1
    Leg_58_set.insert("427297785");
    Leg_58.add_attribute("RepoTrm", "799433125"); // 1
    Leg_58_set.insert("799433125");
    Leg_58.add_attribute("RepoRt", "16306821.330000"); // 1
    Leg_58_set.insert("16306821.330000");
    Leg_58.add_attribute("Fctr", "6503972.310000"); // 1
    Leg_58_set.insert("6503972.310000");
    Leg_58.add_attribute("CrdRtg", "LegCreditRating_t_722697096"); // 1
    Leg_58_set.insert("LegCreditRating_t_722697096");
    Leg_58.add_attribute("Rgstry", "LegInstrRegistry_t_1271310180"); // 1
    Leg_58_set.insert("LegInstrRegistry_t_1271310180");
    Leg_58.add_attribute("Ctry", "227818740"); // 1
    Leg_58_set.insert("227818740");
    Leg_58.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_350713254"); // 1
    Leg_58_set.insert("LegStateOrProvinceOfIssue_t_350713254");
    Leg_58.add_attribute("Lcl", "LegLocaleOfIssue_t_619796724"); // 1
    Leg_58_set.insert("LegLocaleOfIssue_t_619796724");
    Leg_58.add_attribute("Redeem", "LegRedemptionDate_t_2070979692"); // 1
    Leg_58_set.insert("LegRedemptionDate_t_2070979692");
    Leg_58.add_attribute("Strk", "5229627.280000"); // 1
    Leg_58_set.insert("5229627.280000");
    Leg_58.add_attribute("StrkCcy", "JPY"); // 1
    Leg_58_set.insert("JPY");
    Leg_58.add_attribute("OptA", "990164143"); // 1
    Leg_58_set.insert("990164143");
    Leg_58.add_attribute("Cmult", "12605369.930000"); // 1
    Leg_58_set.insert("12605369.930000");
    Leg_58.add_attribute("MultTyp", "1"); // 1
    Leg_58_set.insert("1");
    Leg_58.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_58_set.insert("1");
    Leg_58.add_attribute("UOM", "MWh"); // 1
    Leg_58_set.insert("MWh");
    Leg_58.add_attribute("UOMQty", "5600494.780000"); // 1
    Leg_58_set.insert("5600494.780000");
    Leg_58.add_attribute("PxUOM", "Gal"); // 1
    Leg_58_set.insert("Gal");
    Leg_58.add_attribute("PxUOMQty", "6774373.940000"); // 1
    Leg_58_set.insert("6774373.940000");
    Leg_58.add_attribute("TmUnit", "Mo"); // 1
    Leg_58_set.insert("Mo");
    Leg_58.add_attribute("ExerStyle", "2"); // 1
    Leg_58_set.insert("2");
    Leg_58.add_attribute("CpnRt", "5300271.660000"); // 1
    Leg_58_set.insert("5300271.660000");
    Leg_58.add_attribute("Exch", "LegSecurityExchange_t_1132517160"); // 1
    Leg_58_set.insert("LegSecurityExchange_t_1132517160");
    Leg_58.add_attribute("Issr", "LegIssuer_t_1474934324"); // 1
    Leg_58_set.insert("LegIssuer_t_1474934324");
    Leg_58.add_attribute("EncLegIssrLen", "864361894"); // 1
    Leg_58_set.insert("864361894");
    Leg_58.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1589694186"); // 1
    Leg_58_set.insert("EncodedLegIssuer_t_1589694186");
    Leg_58.add_attribute("Desc", "LegSecurityDesc_t_911351989"); // 1
    Leg_58_set.insert("LegSecurityDesc_t_911351989");
    Leg_58.add_attribute("EncLegSecDescLen", "254938870"); // 1
    Leg_58_set.insert("254938870");
    Leg_58.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1642716298"); // 1
    Leg_58_set.insert("EncodedLegSecurityDesc_t_1642716298");
    Leg_58.add_attribute("RatioQty", "13386497.740000"); // 1
    Leg_58_set.insert("13386497.740000");
    Leg_58.add_attribute("Side", "D"); // 1
    Leg_58_set.insert("D");
    Leg_58.add_attribute("Ccy", "EUR"); // 1
    Leg_58_set.insert("EUR");
    Leg_58.add_attribute("Pool", "LegPool_t_1777069092"); // 1
    Leg_58_set.insert("LegPool_t_1777069092");
    Leg_58.add_attribute("Dated", "LegDatedDate_t_249741316"); // 1
    Leg_58_set.insert("LegDatedDate_t_249741316");
    Leg_58.add_attribute("CSetMo", "69382097"); // 1
    Leg_58_set.insert("69382097");
    Leg_58.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2127782346"); // 1
    Leg_58_set.insert("LegInterestAccrualDate_t_2127782346");
    Leg_58.add_attribute("PutCall", "869538040"); // 1
    Leg_58_set.insert("869538040");
    Leg_58.add_attribute("LegOptionRatio", "21403617.900000"); // 1
    Leg_58_set.insert("21403617.900000");
    Leg_58.add_attribute("Px", "5032614.260000"); // 1
    Leg_58_set.insert("5032614.260000");
    all_values.push_back(Leg_58_set);
    all_compo_names.insert("Leg_58_set");

    {
      xml_element LegAID_58{"LegAID"};
      multiset<string> LegAID_58_set;
      LegAID_58.add_attribute("SecAltID", "LegSecurityAltID_t_1715334534"); // 2
      LegAID_58_set.insert("LegSecurityAltID_t_1715334534");
      LegAID_58.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_58_set.insert("K");
      all_values.push_back(LegAID_58_set);
      all_compo_names.insert("LegAID_58_set");

      Leg_58.add_element(LegAID_58);
    }
    elt.add_element(Leg_58);
  } // end Leg
  { // Undly
    xml_element Undly_72{"Undly"};
    multiset<string> Undly_72_set;
    Undly_72.add_attribute("Sym", "UnderlyingSymbol_t_828387880"); // 1
    Undly_72_set.insert("UnderlyingSymbol_t_828387880");
    Undly_72.add_attribute("Sfx", "CD"); // 1
    Undly_72_set.insert("CD");
    Undly_72.add_attribute("ID", "UnderlyingSecurityID_t_100295997"); // 1
    Undly_72_set.insert("UnderlyingSecurityID_t_100295997");
    Undly_72.add_attribute("Src", "K"); // 1
    Undly_72_set.insert("K");
    Undly_72.add_attribute("Prod", "11"); // 1
    Undly_72_set.insert("11");
    Undly_72.add_attribute("CFI", "UnderlyingCFICode_t_731915756"); // 1
    Undly_72_set.insert("UnderlyingCFICode_t_731915756");
    Undly_72.add_attribute("SecTyp", "CTB"); // 1
    Undly_72_set.insert("CTB");
    Undly_72.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_390630967"); // 1
    Undly_72_set.insert("UnderlyingSecuritySubType_t_390630967");
    Undly_72.add_attribute("MMY", "680033876"); // 1
    Undly_72_set.insert("680033876");
    Undly_72.add_attribute("Mat", "UnderlyingMaturityDate_t_1985683648"); // 1
    Undly_72_set.insert("UnderlyingMaturityDate_t_1985683648");
    Undly_72.add_attribute("MatTm", "1523148128"); // 1
    Undly_72_set.insert("1523148128");
    Undly_72.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_7484553"); // 1
    Undly_72_set.insert("UnderlyingCouponPaymentDate_t_7484553");
    Undly_72.add_attribute("RestrctTyp", "MM"); // 1
    Undly_72_set.insert("MM");
    Undly_72.add_attribute("Snrty", "SD"); // 1
    Undly_72_set.insert("SD");
    Undly_72.add_attribute("NotlPctOut", "9188365.420000"); // 1
    Undly_72_set.insert("9188365.420000");
    Undly_72.add_attribute("OrigNotlPctOut", "9575007.640000"); // 1
    Undly_72_set.insert("9575007.640000");
    Undly_72.add_attribute("AttchPnt", "4605913.170000"); // 1
    Undly_72_set.insert("4605913.170000");
    Undly_72.add_attribute("DetchPnt", "1100026.690000"); // 1
    Undly_72_set.insert("1100026.690000");
    Undly_72.add_attribute("Issued", "UnderlyingIssueDate_t_2011872760"); // 1
    Undly_72_set.insert("UnderlyingIssueDate_t_2011872760");
    Undly_72.add_attribute("RepoCollSecTyp", "1586506100"); // 1
    Undly_72_set.insert("1586506100");
    Undly_72.add_attribute("RepoTrm", "2099049674"); // 1
    Undly_72_set.insert("2099049674");
    Undly_72.add_attribute("RepoRt", "16414582.050000"); // 1
    Undly_72_set.insert("16414582.050000");
    Undly_72.add_attribute("Fctr", "18362474.160000"); // 1
    Undly_72_set.insert("18362474.160000");
    Undly_72.add_attribute("CrdRtg", "UnderlyingCreditRating_t_20948124"); // 1
    Undly_72_set.insert("UnderlyingCreditRating_t_20948124");
    Undly_72.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1621756903"); // 1
    Undly_72_set.insert("UnderlyingInstrRegistry_t_1621756903");
    Undly_72.add_attribute("Ctry", "558301809"); // 1
    Undly_72_set.insert("558301809");
    Undly_72.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_13826266"); // 1
    Undly_72_set.insert("UnderlyingStateOrProvinceOfIssue_t_13826266");
    Undly_72.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2125018330"); // 1
    Undly_72_set.insert("UnderlyingLocaleOfIssue_t_2125018330");
    Undly_72.add_attribute("Redeem", "UnderlyingRedemptionDate_t_126152695"); // 1
    Undly_72_set.insert("UnderlyingRedemptionDate_t_126152695");
    Undly_72.add_attribute("StrkPx", "11221145.220000"); // 1
    Undly_72_set.insert("11221145.220000");
    Undly_72.add_attribute("StrkCcy", "CAN"); // 1
    Undly_72_set.insert("CAN");
    Undly_72.add_attribute("OptA", "562596227"); // 1
    Undly_72_set.insert("562596227");
    Undly_72.add_attribute("Mult", "15712562.490000"); // 1
    Undly_72_set.insert("15712562.490000");
    Undly_72.add_attribute("MultTyp", "1"); // 1
    Undly_72_set.insert("1");
    Undly_72.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_72_set.insert("4");
    Undly_72.add_attribute("UOM", "MMbbl"); // 1
    Undly_72_set.insert("MMbbl");
    Undly_72.add_attribute("UOMQty", "10409324.970000"); // 1
    Undly_72_set.insert("10409324.970000");
    Undly_72.add_attribute("PxUOM", "MWh"); // 1
    Undly_72_set.insert("MWh");
    Undly_72.add_attribute("PxUOMQty", "8357222.330000"); // 1
    Undly_72_set.insert("8357222.330000");
    Undly_72.add_attribute("TmUnit", "Mo"); // 1
    Undly_72_set.insert("Mo");
    Undly_72.add_attribute("ExerStyle", "0"); // 1
    Undly_72_set.insert("0");
    Undly_72.add_attribute("CpnRt", "8432067.860000"); // 1
    Undly_72_set.insert("8432067.860000");
    Undly_72.add_attribute("Exch", "UnderlyingSecurityExchange_t_1581694391"); // 1
    Undly_72_set.insert("UnderlyingSecurityExchange_t_1581694391");
    Undly_72.add_attribute("Issr", "UnderlyingIssuer_t_1294781523"); // 1
    Undly_72_set.insert("UnderlyingIssuer_t_1294781523");
    Undly_72.add_attribute("EncUndIssrLen", "1762043329"); // 1
    Undly_72_set.insert("1762043329");
    Undly_72.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_391711508"); // 1
    Undly_72_set.insert("EncodedUnderlyingIssuer_t_391711508");
    Undly_72.add_attribute("Desc", "UnderlyingSecurityDesc_t_1755372840"); // 1
    Undly_72_set.insert("UnderlyingSecurityDesc_t_1755372840");
    Undly_72.add_attribute("EncUndSecDescLen", "1872045998"); // 1
    Undly_72_set.insert("1872045998");
    Undly_72.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_256100620"); // 1
    Undly_72_set.insert("EncodedUnderlyingSecurityDesc_t_256100620");
    Undly_72.add_attribute("CPPgm", "UnderlyingCPProgram_t_1194395293"); // 1
    Undly_72_set.insert("UnderlyingCPProgram_t_1194395293");
    Undly_72.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1823612024"); // 1
    Undly_72_set.insert("UnderlyingCPRegType_t_1823612024");
    Undly_72.add_attribute("AllocPct", "18975588.250000"); // 1
    Undly_72_set.insert("18975588.250000");
    Undly_72.add_attribute("Ccy", "GBP"); // 1
    Undly_72_set.insert("GBP");
    Undly_72.add_attribute("Qty", "13718320.810000"); // 1
    Undly_72_set.insert("13718320.810000");
    Undly_72.add_attribute("SettlTyp", "5"); // 1
    Undly_72_set.insert("5");
    Undly_72.add_attribute("CashAmt", "UnderlyingCashAmount_t_1858386414"); // 1
    Undly_72_set.insert("UnderlyingCashAmount_t_1858386414");
    Undly_72.add_attribute("CashTyp", "DIFF"); // 1
    Undly_72_set.insert("DIFF");
    Undly_72.add_attribute("Px", "15676135.660000"); // 1
    Undly_72_set.insert("15676135.660000");
    Undly_72.add_attribute("DirtPx", "8330172.890000"); // 1
    Undly_72_set.insert("8330172.890000");
    Undly_72.add_attribute("EndPx", "6728433.660000"); // 1
    Undly_72_set.insert("6728433.660000");
    Undly_72.add_attribute("StartVal", "UnderlyingStartValue_t_374670493"); // 1
    Undly_72_set.insert("UnderlyingStartValue_t_374670493");
    Undly_72.add_attribute("CurVal", "UnderlyingCurrentValue_t_1395613516"); // 1
    Undly_72_set.insert("UnderlyingCurrentValue_t_1395613516");
    Undly_72.add_attribute("EndVal", "UnderlyingEndValue_t_96615967"); // 1
    Undly_72_set.insert("UnderlyingEndValue_t_96615967");
    Undly_72.add_attribute("AdjQty", "21074301.570000"); // 1
    Undly_72_set.insert("21074301.570000");
    Undly_72.add_attribute("FxRate", "19587409.250000"); // 1
    Undly_72_set.insert("19587409.250000");
    Undly_72.add_attribute("FxRateCalc", "M"); // 1
    Undly_72_set.insert("M");
    Undly_72.add_attribute("CapValu", "UnderlyingCapValue_t_1000879006"); // 1
    Undly_72_set.insert("UnderlyingCapValue_t_1000879006");
    Undly_72.add_attribute("SetMeth", "UnderlyingSettlMethod_t_765015654"); // 1
    Undly_72_set.insert("UnderlyingSettlMethod_t_765015654");
    Undly_72.add_attribute("PutCall", "1088026558"); // 1
    Undly_72_set.insert("1088026558");
    all_values.push_back(Undly_72_set);
    all_compo_names.insert("Undly_72_set");

    {
      xml_element UndAID_72{"UndAID"};
      multiset<string> UndAID_72_set;
      UndAID_72.add_attribute("AltID", "UnderlyingSecurityAltID_t_1880011504"); // 2
      UndAID_72_set.insert("UnderlyingSecurityAltID_t_1880011504");
      UndAID_72.add_attribute("AltIDSrc", "2"); // 2
      UndAID_72_set.insert("2");
      all_values.push_back(UndAID_72_set);
      all_compo_names.insert("UndAID_72_set");

      Undly_72.add_element(UndAID_72);
    }
    {
      xml_element Stip_109{"Stip"};
      multiset<string> Stip_109_set;
      Stip_109.add_attribute("Typ", "ROLLTYPE"); // 2
      Stip_109_set.insert("ROLLTYPE");
      Stip_109.add_attribute("Val", "UnderlyingStipValue_t_1314222247"); // 2
      Stip_109_set.insert("UnderlyingStipValue_t_1314222247");
      all_values.push_back(Stip_109_set);
      all_compo_names.insert("Stip_109_set");

      Undly_72.add_element(Stip_109);
    }
    {
      xml_element Pty_278{"Pty"};
      multiset<string> Pty_278_set;
      Pty_278.add_attribute("ID", "UnderlyingInstrumentPartyID_t_241736387"); // 2
      Pty_278_set.insert("UnderlyingInstrumentPartyID_t_241736387");
      Pty_278.add_attribute("Src", "6"); // 2
      Pty_278_set.insert("6");
      Pty_278.add_attribute("R", "24"); // 2
      Pty_278_set.insert("24");
      all_values.push_back(Pty_278_set);
      all_compo_names.insert("Pty_278_set");

      {
        xml_element Sub_278{"Sub"};
        multiset<string> Sub_278_set;
        Sub_278.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1997109227"); // 3
        Sub_278_set.insert("UnderlyingInstrumentPartySubID_t_1997109227");
        Sub_278.add_attribute("Typ", "22"); // 3
        Sub_278_set.insert("22");
        all_values.push_back(Sub_278_set);
        all_compo_names.insert("Sub_278_set");

        Pty_278.add_element(Sub_278);
      }
      Undly_72.add_element(Pty_278);
    }
    elt.add_element(Undly_72);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_14{"TrdSes"};
    multiset<string> TrdSes_14_set;
    TrdSes_14.add_attribute("SesID", "5"); // 1
    TrdSes_14_set.insert("5");
    TrdSes_14.add_attribute("SesSub", "5"); // 1
    TrdSes_14_set.insert("5");
    all_values.push_back(TrdSes_14_set);
    all_compo_names.insert("TrdSes_14_set");

    elt.add_element(TrdSes_14);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_15{"TrdSes"};
    multiset<string> TrdSes_15_set;
    TrdSes_15.add_attribute("SesID", "2"); // 1
    TrdSes_15_set.insert("2");
    TrdSes_15.add_attribute("SesSub", "2"); // 1
    TrdSes_15_set.insert("2");
    all_values.push_back(TrdSes_15_set);
    all_compo_names.insert("TrdSes_15_set");

    elt.add_element(TrdSes_15);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_16{"TrdSes"};
    multiset<string> TrdSes_16_set;
    TrdSes_16.add_attribute("SesID", "1"); // 1
    TrdSes_16_set.insert("1");
    TrdSes_16.add_attribute("SesSub", "3"); // 1
    TrdSes_16_set.insert("3");
    all_values.push_back(TrdSes_16_set);
    all_compo_names.insert("TrdSes_16_set");

    elt.add_element(TrdSes_16);
  } // end TrdSes
  { // Qty
    xml_element Qty_5{"Qty"};
    multiset<string> Qty_5_set;
    Qty_5.add_attribute("Typ", "SEA"); // 1
    Qty_5_set.insert("SEA");
    Qty_5.add_attribute("Long", "1383411.010000"); // 1
    Qty_5_set.insert("1383411.010000");
    Qty_5.add_attribute("Short", "6412870.740000"); // 1
    Qty_5_set.insert("6412870.740000");
    Qty_5.add_attribute("Stat", "1"); // 1
    Qty_5_set.insert("1");
    Qty_5.add_attribute("QtyDt", "QuantityDate_t_811184468"); // 1
    Qty_5_set.insert("QuantityDate_t_811184468");
    all_values.push_back(Qty_5_set);
    all_compo_names.insert("Qty_5_set");

    {
      xml_element Pty_279{"Pty"};
      multiset<string> Pty_279_set;
      Pty_279.add_attribute("ID", "NestedPartyID_t_1015957568"); // 2
      Pty_279_set.insert("NestedPartyID_t_1015957568");
      Pty_279.add_attribute("Src", "7"); // 2
      Pty_279_set.insert("7");
      Pty_279.add_attribute("R", "12"); // 2
      Pty_279_set.insert("12");
      all_values.push_back(Pty_279_set);
      all_compo_names.insert("Pty_279_set");

      {
        xml_element Sub_279{"Sub"};
        multiset<string> Sub_279_set;
        Sub_279.add_attribute("ID", "NestedPartySubID_t_975904077"); // 3
        Sub_279_set.insert("NestedPartySubID_t_975904077");
        Sub_279.add_attribute("Typ", "31"); // 3
        Sub_279_set.insert("31");
        all_values.push_back(Sub_279_set);
        all_compo_names.insert("Sub_279_set");

        Pty_279.add_element(Sub_279);
      }
      Qty_5.add_element(Pty_279);
    }
    elt.add_element(Qty_5);
  } // end Qty
  { // Qty
    xml_element Qty_6{"Qty"};
    multiset<string> Qty_6_set;
    Qty_6.add_attribute("Typ", "SEA"); // 1
    Qty_6_set.insert("SEA");
    Qty_6.add_attribute("Long", "19767830.830000"); // 1
    Qty_6_set.insert("19767830.830000");
    Qty_6.add_attribute("Short", "10118831.080000"); // 1
    Qty_6_set.insert("10118831.080000");
    Qty_6.add_attribute("Stat", "1"); // 1
    Qty_6_set.insert("1");
    Qty_6.add_attribute("QtyDt", "QuantityDate_t_1709310939"); // 1
    Qty_6_set.insert("QuantityDate_t_1709310939");
    all_values.push_back(Qty_6_set);
    all_compo_names.insert("Qty_6_set");

    {
      xml_element Pty_280{"Pty"};
      multiset<string> Pty_280_set;
      Pty_280.add_attribute("ID", "NestedPartyID_t_2106321619"); // 2
      Pty_280_set.insert("NestedPartyID_t_2106321619");
      Pty_280.add_attribute("Src", "B"); // 2
      Pty_280_set.insert("B");
      Pty_280.add_attribute("R", "24"); // 2
      Pty_280_set.insert("24");
      all_values.push_back(Pty_280_set);
      all_compo_names.insert("Pty_280_set");

      {
        xml_element Sub_280{"Sub"};
        multiset<string> Sub_280_set;
        Sub_280.add_attribute("ID", "NestedPartySubID_t_200574358"); // 3
        Sub_280_set.insert("NestedPartySubID_t_200574358");
        Sub_280.add_attribute("Typ", "27"); // 3
        Sub_280_set.insert("27");
        all_values.push_back(Sub_280_set);
        all_compo_names.insert("Sub_280_set");

        Pty_280.add_element(Sub_280);
      }
      Qty_6.add_element(Pty_280);
    }
    elt.add_element(Qty_6);
  } // end Qty
  { // Amt
    xml_element Amt_7{"Amt"};
    multiset<string> Amt_7_set;
    Amt_7.add_attribute("Typ", "SETL"); // 1
    Amt_7_set.insert("SETL");
    Amt_7.add_attribute("Amt", "PosAmt_t_553062119"); // 1
    Amt_7_set.insert("PosAmt_t_553062119");
    Amt_7.add_attribute("Ccy", "PositionCurrency_t_249050374"); // 1
    Amt_7_set.insert("PositionCurrency_t_249050374");
    all_values.push_back(Amt_7_set);
    all_compo_names.insert("Amt_7_set");

    elt.add_element(Amt_7);
  } // end Amt
  { // Amt
    xml_element Amt_8{"Amt"};
    multiset<string> Amt_8_set;
    Amt_8.add_attribute("Typ", "CASH"); // 1
    Amt_8_set.insert("CASH");
    Amt_8.add_attribute("Amt", "PosAmt_t_1499545871"); // 1
    Amt_8_set.insert("PosAmt_t_1499545871");
    Amt_8.add_attribute("Ccy", "PositionCurrency_t_1961159928"); // 1
    Amt_8_set.insert("PositionCurrency_t_1961159928");
    all_values.push_back(Amt_8_set);
    all_compo_names.insert("Amt_8_set");

    elt.add_element(Amt_8);
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
