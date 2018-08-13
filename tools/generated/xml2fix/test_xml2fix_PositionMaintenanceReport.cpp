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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosMntRpt" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceReport_message_t_0;
  elt.add_attribute("RptID", "PosMaintRptID_t_1734793223"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosMaintRptID_t_1734793223");
  elt.add_attribute("TxnTyp", "2"); // 0
  PositionMaintenanceReport_message_t_0.insert("2");
  elt.add_attribute("ReqID", "PosReqID_t_488035937"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosReqID_t_488035937");
  elt.add_attribute("Actn", "1"); // 0
  PositionMaintenanceReport_message_t_0.insert("1");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_135633615"); // 0
  PositionMaintenanceReport_message_t_0.insert("OrigPosReqRefID_t_135633615");
  elt.add_attribute("Stat", "1"); // 0
  PositionMaintenanceReport_message_t_0.insert("1");
  elt.add_attribute("Rslt", "1"); // 0
  PositionMaintenanceReport_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1123935988"); // 0
  PositionMaintenanceReport_message_t_0.insert("ClearingBusinessDate_t_1123935988");
  elt.add_attribute("SetSesID", "RTH"); // 0
  PositionMaintenanceReport_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_714872748"); // 0
  PositionMaintenanceReport_message_t_0.insert("SettlSessSubID_t_714872748");
  elt.add_attribute("Acct", "Account_t_451429300"); // 0
  PositionMaintenanceReport_message_t_0.insert("Account_t_451429300");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  PositionMaintenanceReport_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "2"); // 0
  PositionMaintenanceReport_message_t_0.insert("2");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_795764378"); // 0
  PositionMaintenanceReport_message_t_0.insert("PosMaintRptRefID_t_795764378");
  elt.add_attribute("Ccy", "JPY"); // 0
  PositionMaintenanceReport_message_t_0.insert("JPY");
  elt.add_attribute("SettlCcy", "EUR"); // 0
  PositionMaintenanceReport_message_t_0.insert("EUR");
  elt.add_attribute("CntraryInstrctnInd", "true"); // 0
  PositionMaintenanceReport_message_t_0.insert("true");
  elt.add_attribute("PriorSpreadInd", "true"); // 0
  PositionMaintenanceReport_message_t_0.insert("true");
  elt.add_attribute("TxnTm", "TransactTime_t_1166719780"); // 0
  PositionMaintenanceReport_message_t_0.insert("TransactTime_t_1166719780");
  elt.add_attribute("AdjTyp", "1"); // 0
  PositionMaintenanceReport_message_t_0.insert("1");
  elt.add_attribute("ThresholdAmt", "16134181.080000"); // 0
  PositionMaintenanceReport_message_t_0.insert("16134181.080000");
  elt.add_attribute("Txt", "Text_t_1467057584"); // 0
  PositionMaintenanceReport_message_t_0.insert("Text_t_1467057584");
  elt.add_attribute("EncTxtLen", "1402234665"); // 0
  PositionMaintenanceReport_message_t_0.insert("1402234665");
  elt.add_attribute("EncTxt", "EncodedText_t_637930409"); // 0
  PositionMaintenanceReport_message_t_0.insert("EncodedText_t_637930409");
  all_values.push_back(PositionMaintenanceReport_message_t_0);
  all_compo_names.insert("PositionMaintenanceReport_message_t");

  { // Hdr
    xml_element Hdr_65{"Hdr"};
    multiset<string> Hdr_65_set;
    Hdr_65.add_attribute("SeqNum", "1243493381"); // 1
    Hdr_65_set.insert("1243493381");
    Hdr_65.add_attribute("SID", "SenderCompID_t_1805903955"); // 1
    Hdr_65_set.insert("SenderCompID_t_1805903955");
    Hdr_65.add_attribute("TID", "TargetCompID_t_319689300"); // 1
    Hdr_65_set.insert("TargetCompID_t_319689300");
    Hdr_65.add_attribute("OBID", "OnBehalfOfCompID_t_1553417079"); // 1
    Hdr_65_set.insert("OnBehalfOfCompID_t_1553417079");
    Hdr_65.add_attribute("D2ID", "DeliverToCompID_t_933052733"); // 1
    Hdr_65_set.insert("DeliverToCompID_t_933052733");
    Hdr_65.add_attribute("SSub", "SenderSubID_t_2054482524"); // 1
    Hdr_65_set.insert("SenderSubID_t_2054482524");
    Hdr_65.add_attribute("SLoc", "SenderLocationID_t_1964742184"); // 1
    Hdr_65_set.insert("SenderLocationID_t_1964742184");
    Hdr_65.add_attribute("TSub", "TargetSubID_t_1421088670"); // 1
    Hdr_65_set.insert("TargetSubID_t_1421088670");
    Hdr_65.add_attribute("TLoc", "TargetLocationID_t_1524411972"); // 1
    Hdr_65_set.insert("TargetLocationID_t_1524411972");
    Hdr_65.add_attribute("OBSub", "OnBehalfOfSubID_t_2100375799"); // 1
    Hdr_65_set.insert("OnBehalfOfSubID_t_2100375799");
    Hdr_65.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1427827827"); // 1
    Hdr_65_set.insert("OnBehalfOfLocationID_t_1427827827");
    Hdr_65.add_attribute("D2Sub", "DeliverToSubID_t_1690808780"); // 1
    Hdr_65_set.insert("DeliverToSubID_t_1690808780");
    Hdr_65.add_attribute("D2Loc", "DeliverToLocationID_t_1076828140"); // 1
    Hdr_65_set.insert("DeliverToLocationID_t_1076828140");
    Hdr_65.add_attribute("PosDup", "N"); // 1
    Hdr_65_set.insert("N");
    Hdr_65.add_attribute("PosRsnd", "N"); // 1
    Hdr_65_set.insert("N");
    Hdr_65.add_attribute("Snt", "SendingTime_t_1528257440"); // 1
    Hdr_65_set.insert("SendingTime_t_1528257440");
    Hdr_65.add_attribute("OrigSnt", "OrigSendingTime_t_1158415465"); // 1
    Hdr_65_set.insert("OrigSendingTime_t_1158415465");
    Hdr_65.add_attribute("MsgEncd", "MessageEncoding_t_1427644055"); // 1
    Hdr_65_set.insert("MessageEncoding_t_1427644055");
    all_values.push_back(Hdr_65_set);
    all_compo_names.insert("Hdr_65_set");

    {
      xml_element Hop_65{"Hop"};
      multiset<string> Hop_65_set;
      Hop_65.add_attribute("ID", "HopCompID_t_176538170"); // 2
      Hop_65_set.insert("HopCompID_t_176538170");
      Hop_65.add_attribute("Ref", "1082207379"); // 2
      Hop_65_set.insert("1082207379");
      Hop_65.add_attribute("Snt", "HopSendingTime_t_268766395"); // 2
      Hop_65_set.insert("HopSendingTime_t_268766395");
      all_values.push_back(Hop_65_set);
      all_compo_names.insert("Hop_65_set");

      Hdr_65.add_element(Hop_65);
    }
    elt.add_element(Hdr_65);
  } // end Hdr
  { // Pty
    xml_element Pty_294{"Pty"};
    multiset<string> Pty_294_set;
    Pty_294.add_attribute("ID", "PartyID_t_670323429"); // 1
    Pty_294_set.insert("PartyID_t_670323429");
    Pty_294.add_attribute("Src", "8"); // 1
    Pty_294_set.insert("8");
    Pty_294.add_attribute("R", "7"); // 1
    Pty_294_set.insert("7");
    all_values.push_back(Pty_294_set);
    all_compo_names.insert("Pty_294_set");

    {
      xml_element Sub_294{"Sub"};
      multiset<string> Sub_294_set;
      Sub_294.add_attribute("ID", "PartySubID_t_1837043209"); // 2
      Sub_294_set.insert("PartySubID_t_1837043209");
      Sub_294.add_attribute("Typ", "2"); // 2
      Sub_294_set.insert("2");
      all_values.push_back(Sub_294_set);
      all_compo_names.insert("Sub_294_set");

      Pty_294.add_element(Sub_294);
    }
    elt.add_element(Pty_294);
  } // end Pty
  { // Pty
    xml_element Pty_295{"Pty"};
    multiset<string> Pty_295_set;
    Pty_295.add_attribute("ID", "PartyID_t_1723775578"); // 1
    Pty_295_set.insert("PartyID_t_1723775578");
    Pty_295.add_attribute("Src", "2"); // 1
    Pty_295_set.insert("2");
    Pty_295.add_attribute("R", "1"); // 1
    Pty_295_set.insert("1");
    all_values.push_back(Pty_295_set);
    all_compo_names.insert("Pty_295_set");

    {
      xml_element Sub_295{"Sub"};
      multiset<string> Sub_295_set;
      Sub_295.add_attribute("ID", "PartySubID_t_214222339"); // 2
      Sub_295_set.insert("PartySubID_t_214222339");
      Sub_295.add_attribute("Typ", "32"); // 2
      Sub_295_set.insert("32");
      all_values.push_back(Sub_295_set);
      all_compo_names.insert("Sub_295_set");

      Pty_295.add_element(Sub_295);
    }
    elt.add_element(Pty_295);
  } // end Pty
  { // Pty
    xml_element Pty_296{"Pty"};
    multiset<string> Pty_296_set;
    Pty_296.add_attribute("ID", "PartyID_t_1716218035"); // 1
    Pty_296_set.insert("PartyID_t_1716218035");
    Pty_296.add_attribute("Src", "F"); // 1
    Pty_296_set.insert("F");
    Pty_296.add_attribute("R", "33"); // 1
    Pty_296_set.insert("33");
    all_values.push_back(Pty_296_set);
    all_compo_names.insert("Pty_296_set");

    {
      xml_element Sub_296{"Sub"};
      multiset<string> Sub_296_set;
      Sub_296.add_attribute("ID", "PartySubID_t_501787121"); // 2
      Sub_296_set.insert("PartySubID_t_501787121");
      Sub_296.add_attribute("Typ", "8"); // 2
      Sub_296_set.insert("8");
      all_values.push_back(Sub_296_set);
      all_compo_names.insert("Sub_296_set");

      Pty_296.add_element(Sub_296);
    }
    elt.add_element(Pty_296);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_55{"Instrmt"};
    multiset<string> Instrmt_55_set;
    Instrmt_55.add_attribute("Sym", "Symbol_t_1623302494"); // 1
    Instrmt_55_set.insert("Symbol_t_1623302494");
    Instrmt_55.add_attribute("Sfx", "WI"); // 1
    Instrmt_55_set.insert("WI");
    Instrmt_55.add_attribute("ID", "SecurityID_t_1965322488"); // 1
    Instrmt_55_set.insert("SecurityID_t_1965322488");
    Instrmt_55.add_attribute("Src", "4"); // 1
    Instrmt_55_set.insert("4");
    Instrmt_55.add_attribute("Prod", "13"); // 1
    Instrmt_55_set.insert("13");
    Instrmt_55.add_attribute("ProdCmplx", "ProductComplex_t_1508647620"); // 1
    Instrmt_55_set.insert("ProductComplex_t_1508647620");
    Instrmt_55.add_attribute("SecGrp", "SecurityGroup_t_505539137"); // 1
    Instrmt_55_set.insert("SecurityGroup_t_505539137");
    Instrmt_55.add_attribute("CFI", "CFICode_t_1500195131"); // 1
    Instrmt_55_set.insert("CFICode_t_1500195131");
    Instrmt_55.add_attribute("SecTyp", "TMCP"); // 1
    Instrmt_55_set.insert("TMCP");
    Instrmt_55.add_attribute("SubTyp", "SecuritySubType_t_2033796577"); // 1
    Instrmt_55_set.insert("SecuritySubType_t_2033796577");
    Instrmt_55.add_attribute("MMY", "511126948"); // 1
    Instrmt_55_set.insert("511126948");
    Instrmt_55.add_attribute("MatDt", "MaturityDate_t_1047005908"); // 1
    Instrmt_55_set.insert("MaturityDate_t_1047005908");
    Instrmt_55.add_attribute("MatTm", "62851100"); // 1
    Instrmt_55_set.insert("62851100");
    Instrmt_55.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1593334327"); // 1
    Instrmt_55_set.insert("SettleOnOpenFlag_t_1593334327");
    Instrmt_55.add_attribute("AsgnMeth", "1315772303"); // 1
    Instrmt_55_set.insert("1315772303");
    Instrmt_55.add_attribute("Status", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("CpnPmt", "CouponPaymentDate_t_116174108"); // 1
    Instrmt_55_set.insert("CouponPaymentDate_t_116174108");
    Instrmt_55.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_55_set.insert("FR");
    Instrmt_55.add_attribute("Snrty", "SB"); // 1
    Instrmt_55_set.insert("SB");
    Instrmt_55.add_attribute("NotlPctOut", "19532173.170000"); // 1
    Instrmt_55_set.insert("19532173.170000");
    Instrmt_55.add_attribute("OrigNotlPctOut", "14090079.910000"); // 1
    Instrmt_55_set.insert("14090079.910000");
    Instrmt_55.add_attribute("AttchPnt", "13951691.270000"); // 1
    Instrmt_55_set.insert("13951691.270000");
    Instrmt_55.add_attribute("DetchPnt", "9623508.150000"); // 1
    Instrmt_55_set.insert("9623508.150000");
    Instrmt_55.add_attribute("Issued", "IssueDate_t_1319322071"); // 1
    Instrmt_55_set.insert("IssueDate_t_1319322071");
    Instrmt_55.add_attribute("RepoCollSecTyp", "1609391466"); // 1
    Instrmt_55_set.insert("1609391466");
    Instrmt_55.add_attribute("RepoTrm", "1214977693"); // 1
    Instrmt_55_set.insert("1214977693");
    Instrmt_55.add_attribute("RepoRt", "8880564.580000"); // 1
    Instrmt_55_set.insert("8880564.580000");
    Instrmt_55.add_attribute("Fctr", "21433031.060000"); // 1
    Instrmt_55_set.insert("21433031.060000");
    Instrmt_55.add_attribute("CrdRtg", "CreditRating_t_873538003"); // 1
    Instrmt_55_set.insert("CreditRating_t_873538003");
    Instrmt_55.add_attribute("Rgstry", "InstrRegistry_t_1389843579"); // 1
    Instrmt_55_set.insert("InstrRegistry_t_1389843579");
    Instrmt_55.add_attribute("IssuCtry", "436729974"); // 1
    Instrmt_55_set.insert("436729974");
    Instrmt_55.add_attribute("StPrv", "StateOrProvinceOfIssue_t_349356849"); // 1
    Instrmt_55_set.insert("StateOrProvinceOfIssue_t_349356849");
    Instrmt_55.add_attribute("Lcl", "LocaleOfIssue_t_1165235723"); // 1
    Instrmt_55_set.insert("LocaleOfIssue_t_1165235723");
    Instrmt_55.add_attribute("Redeem", "RedemptionDate_t_254568815"); // 1
    Instrmt_55_set.insert("RedemptionDate_t_254568815");
    Instrmt_55.add_attribute("StrkPx", "19255514.940000"); // 1
    Instrmt_55_set.insert("19255514.940000");
    Instrmt_55.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_55_set.insert("CAN");
    Instrmt_55.add_attribute("StrkMult", "2836069.840000"); // 1
    Instrmt_55_set.insert("2836069.840000");
    Instrmt_55.add_attribute("StrkValu", "17211671.760000"); // 1
    Instrmt_55_set.insert("17211671.760000");
    Instrmt_55.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_55_set.insert("4");
    Instrmt_55.add_attribute("StrkPxBndryPrcsn", "848104.760000"); // 1
    Instrmt_55_set.insert("848104.760000");
    Instrmt_55.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("OptAt", "232771013"); // 1
    Instrmt_55_set.insert("232771013");
    Instrmt_55.add_attribute("Mult", "16781448.040000"); // 1
    Instrmt_55_set.insert("16781448.040000");
    Instrmt_55.add_attribute("MultTyp", "2"); // 1
    Instrmt_55_set.insert("2");
    Instrmt_55.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_55_set.insert("4");
    Instrmt_55.add_attribute("MinPxIncr", "17943189.120000"); // 1
    Instrmt_55_set.insert("17943189.120000");
    Instrmt_55.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_203834132"); // 1
    Instrmt_55_set.insert("MinPriceIncrementAmount_t_203834132");
    Instrmt_55.add_attribute("UOM", "lbs"); // 1
    Instrmt_55_set.insert("lbs");
    Instrmt_55.add_attribute("UOMQty", "16000525.820000"); // 1
    Instrmt_55_set.insert("16000525.820000");
    Instrmt_55.add_attribute("PxUOM", "USD"); // 1
    Instrmt_55_set.insert("USD");
    Instrmt_55.add_attribute("PxUOMQty", "8603697.670000"); // 1
    Instrmt_55_set.insert("8603697.670000");
    Instrmt_55.add_attribute("SettlMeth", "P"); // 1
    Instrmt_55_set.insert("P");
    Instrmt_55.add_attribute("ExerStyle", "0"); // 1
    Instrmt_55_set.insert("0");
    Instrmt_55.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_55_set.insert("3");
    Instrmt_55.add_attribute("OptPayAmt", "OptPayoutAmount_t_1629897442"); // 1
    Instrmt_55_set.insert("OptPayoutAmount_t_1629897442");
    Instrmt_55.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_55_set.insert("STD");
    Instrmt_55.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_55_set.insert("CDSD");
    Instrmt_55.add_attribute("ListMeth", "1"); // 1
    Instrmt_55_set.insert("1");
    Instrmt_55.add_attribute("CapPx", "9150969.360000"); // 1
    Instrmt_55_set.insert("9150969.360000");
    Instrmt_55.add_attribute("FlrPx", "7548270.180000"); // 1
    Instrmt_55_set.insert("7548270.180000");
    Instrmt_55.add_attribute("PutCall", "0"); // 1
    Instrmt_55_set.insert("0");
    Instrmt_55.add_attribute("FlexInd", "false"); // 1
    Instrmt_55_set.insert("false");
    Instrmt_55.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_55_set.insert("false");
    Instrmt_55.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_55_set.insert("Mo");
    Instrmt_55.add_attribute("CpnRt", "1538210.560000"); // 1
    Instrmt_55_set.insert("1538210.560000");
    Instrmt_55.add_attribute("Exch", "SecurityExchange_t_625128621"); // 1
    Instrmt_55_set.insert("SecurityExchange_t_625128621");
    Instrmt_55.add_attribute("PosLmt", "766983477"); // 1
    Instrmt_55_set.insert("766983477");
    Instrmt_55.add_attribute("NTPosLmt", "1874988233"); // 1
    Instrmt_55_set.insert("1874988233");
    Instrmt_55.add_attribute("Issr", "Issuer_t_2007706909"); // 1
    Instrmt_55_set.insert("Issuer_t_2007706909");
    Instrmt_55.add_attribute("EncIssrLen", "936903390"); // 1
    Instrmt_55_set.insert("936903390");
    Instrmt_55.add_attribute("EncIssr", "EncodedIssuer_t_1959798709"); // 1
    Instrmt_55_set.insert("EncodedIssuer_t_1959798709");
    Instrmt_55.add_attribute("Desc", "SecurityDesc_t_142323810"); // 1
    Instrmt_55_set.insert("SecurityDesc_t_142323810");
    Instrmt_55.add_attribute("EncSecDescLen", "1169674404"); // 1
    Instrmt_55_set.insert("1169674404");
    Instrmt_55.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1490459865"); // 1
    Instrmt_55_set.insert("EncodedSecurityDesc_t_1490459865");
    Instrmt_55.add_attribute("Pool", "Pool_t_1740196661"); // 1
    Instrmt_55_set.insert("Pool_t_1740196661");
    Instrmt_55.add_attribute("CSetMo", "963481495"); // 1
    Instrmt_55_set.insert("963481495");
    Instrmt_55.add_attribute("CPPgm", "99"); // 1
    Instrmt_55_set.insert("99");
    Instrmt_55.add_attribute("CPRegT", "CPRegType_t_1944030793"); // 1
    Instrmt_55_set.insert("CPRegType_t_1944030793");
    Instrmt_55.add_attribute("Dated", "DatedDate_t_428682135"); // 1
    Instrmt_55_set.insert("DatedDate_t_428682135");
    Instrmt_55.add_attribute("IntAcrl", "InterestAccrualDate_t_589864064"); // 1
    Instrmt_55_set.insert("InterestAccrualDate_t_589864064");
    all_values.push_back(Instrmt_55_set);
    all_compo_names.insert("Instrmt_55_set");

    {
      xml_element AID_58{"AID"};
      multiset<string> AID_58_set;
      AID_58.add_attribute("AltID", "SecurityAltID_t_1409389268"); // 2
      AID_58_set.insert("SecurityAltID_t_1409389268");
      AID_58.add_attribute("AltIDSrc", "7"); // 2
      AID_58_set.insert("7");
      all_values.push_back(AID_58_set);
      all_compo_names.insert("AID_58_set");

      Instrmt_55.add_element(AID_58);
    }
    {
      xml_element SecXML_58{"SecXML"};
      multiset<string> SecXML_58_set;
      SecXML_58.add_attribute("Schema", "SecurityXMLSchema_t_1004783813"); // 2
      SecXML_58_set.insert("SecurityXMLSchema_t_1004783813");
      all_values.push_back(SecXML_58_set);
      all_compo_names.insert("SecXML_58_set");

      Instrmt_55.add_element(SecXML_58);
    }
    {
      xml_element Evnt_58{"Evnt"};
      multiset<string> Evnt_58_set;
      Evnt_58.add_attribute("EventTyp", "6"); // 2
      Evnt_58_set.insert("6");
      Evnt_58.add_attribute("Dt", "EventDate_t_1611329488"); // 2
      Evnt_58_set.insert("EventDate_t_1611329488");
      Evnt_58.add_attribute("Tm", "EventTime_t_487197607"); // 2
      Evnt_58_set.insert("EventTime_t_487197607");
      Evnt_58.add_attribute("Px", "17193231.710000"); // 2
      Evnt_58_set.insert("17193231.710000");
      Evnt_58.add_attribute("Txt", "EventText_t_1929426532"); // 2
      Evnt_58_set.insert("EventText_t_1929426532");
      all_values.push_back(Evnt_58_set);
      all_compo_names.insert("Evnt_58_set");

      Instrmt_55.add_element(Evnt_58);
    }
    {
      xml_element Pty_297{"Pty"};
      multiset<string> Pty_297_set;
      Pty_297.add_attribute("ID", "InstrumentPartyID_t_843149405"); // 2
      Pty_297_set.insert("InstrumentPartyID_t_843149405");
      Pty_297.add_attribute("Src", "A"); // 2
      Pty_297_set.insert("A");
      Pty_297.add_attribute("R", "76"); // 2
      Pty_297_set.insert("76");
      all_values.push_back(Pty_297_set);
      all_compo_names.insert("Pty_297_set");

      {
        xml_element Sub_297{"Sub"};
        multiset<string> Sub_297_set;
        Sub_297.add_attribute("ID", "InstrumentPartySubID_t_1548458051"); // 3
        Sub_297_set.insert("InstrumentPartySubID_t_1548458051");
        Sub_297.add_attribute("Typ", "28"); // 3
        Sub_297_set.insert("28");
        all_values.push_back(Sub_297_set);
        all_compo_names.insert("Sub_297_set");

        Pty_297.add_element(Sub_297);
      }
      Instrmt_55.add_element(Pty_297);
    }
    {
      xml_element CmplxEvnt_55{"CmplxEvnt"};
      multiset<string> CmplxEvnt_55_set;
      CmplxEvnt_55.add_attribute("Typ", "9"); // 2
      CmplxEvnt_55_set.insert("9");
      CmplxEvnt_55.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2031834544"); // 2
      CmplxEvnt_55_set.insert("ComplexOptPayoutAmount_t_2031834544");
      CmplxEvnt_55.add_attribute("Px", "5736065.260000"); // 2
      CmplxEvnt_55_set.insert("5736065.260000");
      CmplxEvnt_55.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_55_set.insert("5");
      CmplxEvnt_55.add_attribute("PxBndryPrcsn", "6513343.730000"); // 2
      CmplxEvnt_55_set.insert("6513343.730000");
      CmplxEvnt_55.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_55_set.insert("2");
      CmplxEvnt_55.add_attribute("Cond", "1"); // 2
      CmplxEvnt_55_set.insert("1");
      all_values.push_back(CmplxEvnt_55_set);
      all_compo_names.insert("CmplxEvnt_55_set");

      {
        xml_element EvntDts_55{"EvntDts"};
        multiset<string> EvntDts_55_set;
        EvntDts_55.add_attribute("StartDt", "ComplexEventStartDate_t_1588237764"); // 3
        EvntDts_55_set.insert("ComplexEventStartDate_t_1588237764");
        EvntDts_55.add_attribute("EndDt", "ComplexEventEndDate_t_113426173"); // 3
        EvntDts_55_set.insert("ComplexEventEndDate_t_113426173");
        all_values.push_back(EvntDts_55_set);
        all_compo_names.insert("EvntDts_55_set");

        {
          xml_element EvntTms_55{"EvntTms"};
          multiset<string> EvntTms_55_set;
          EvntTms_55.add_attribute("StartTm", "26357780"); // 4
          EvntTms_55_set.insert("26357780");
          EvntTms_55.add_attribute("EndTm", "610428520"); // 4
          EvntTms_55_set.insert("610428520");
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
    xml_element Leg_57{"Leg"};
    multiset<string> Leg_57_set;
    Leg_57.add_attribute("Sym", "LegSymbol_t_1766554442"); // 1
    Leg_57_set.insert("LegSymbol_t_1766554442");
    Leg_57.add_attribute("Sfx", "WI"); // 1
    Leg_57_set.insert("WI");
    Leg_57.add_attribute("ID", "LegSecurityID_t_593697520"); // 1
    Leg_57_set.insert("LegSecurityID_t_593697520");
    Leg_57.add_attribute("Src", "4"); // 1
    Leg_57_set.insert("4");
    Leg_57.add_attribute("Prod", "10"); // 1
    Leg_57_set.insert("10");
    Leg_57.add_attribute("CFI", "LegCFICode_t_1183561584"); // 1
    Leg_57_set.insert("LegCFICode_t_1183561584");
    Leg_57.add_attribute("SecTyp", "REV"); // 1
    Leg_57_set.insert("REV");
    Leg_57.add_attribute("SecSubTyp", "LegSecuritySubType_t_1144160405"); // 1
    Leg_57_set.insert("LegSecuritySubType_t_1144160405");
    Leg_57.add_attribute("MMY", "40861749"); // 1
    Leg_57_set.insert("40861749");
    Leg_57.add_attribute("Mat", "LegMaturityDate_t_871593374"); // 1
    Leg_57_set.insert("LegMaturityDate_t_871593374");
    Leg_57.add_attribute("MatTm", "608006245"); // 1
    Leg_57_set.insert("608006245");
    Leg_57.add_attribute("CpnPmt", "LegCouponPaymentDate_t_528059357"); // 1
    Leg_57_set.insert("LegCouponPaymentDate_t_528059357");
    Leg_57.add_attribute("Issued", "LegIssueDate_t_443432897"); // 1
    Leg_57_set.insert("LegIssueDate_t_443432897");
    Leg_57.add_attribute("RepoCollSecTyp", "389949129"); // 1
    Leg_57_set.insert("389949129");
    Leg_57.add_attribute("RepoTrm", "1371208762"); // 1
    Leg_57_set.insert("1371208762");
    Leg_57.add_attribute("RepoRt", "9303693.560000"); // 1
    Leg_57_set.insert("9303693.560000");
    Leg_57.add_attribute("Fctr", "9267190.320000"); // 1
    Leg_57_set.insert("9267190.320000");
    Leg_57.add_attribute("CrdRtg", "LegCreditRating_t_772183165"); // 1
    Leg_57_set.insert("LegCreditRating_t_772183165");
    Leg_57.add_attribute("Rgstry", "LegInstrRegistry_t_1350154826"); // 1
    Leg_57_set.insert("LegInstrRegistry_t_1350154826");
    Leg_57.add_attribute("Ctry", "325401120"); // 1
    Leg_57_set.insert("325401120");
    Leg_57.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_656534062"); // 1
    Leg_57_set.insert("LegStateOrProvinceOfIssue_t_656534062");
    Leg_57.add_attribute("Lcl", "LegLocaleOfIssue_t_1923761353"); // 1
    Leg_57_set.insert("LegLocaleOfIssue_t_1923761353");
    Leg_57.add_attribute("Redeem", "LegRedemptionDate_t_349211829"); // 1
    Leg_57_set.insert("LegRedemptionDate_t_349211829");
    Leg_57.add_attribute("Strk", "13078684.350000"); // 1
    Leg_57_set.insert("13078684.350000");
    Leg_57.add_attribute("StrkCcy", "CAN"); // 1
    Leg_57_set.insert("CAN");
    Leg_57.add_attribute("OptA", "748622551"); // 1
    Leg_57_set.insert("748622551");
    Leg_57.add_attribute("Cmult", "1908149.890000"); // 1
    Leg_57_set.insert("1908149.890000");
    Leg_57.add_attribute("MultTyp", "2"); // 1
    Leg_57_set.insert("2");
    Leg_57.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_57_set.insert("1");
    Leg_57.add_attribute("UOM", "Gal"); // 1
    Leg_57_set.insert("Gal");
    Leg_57.add_attribute("UOMQty", "20261580.220000"); // 1
    Leg_57_set.insert("20261580.220000");
    Leg_57.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_57_set.insert("MMbbl");
    Leg_57.add_attribute("PxUOMQty", "2409149.000000"); // 1
    Leg_57_set.insert("2409149.000000");
    Leg_57.add_attribute("TmUnit", "D"); // 1
    Leg_57_set.insert("D");
    Leg_57.add_attribute("ExerStyle", "1"); // 1
    Leg_57_set.insert("1");
    Leg_57.add_attribute("CpnRt", "14244764.850000"); // 1
    Leg_57_set.insert("14244764.850000");
    Leg_57.add_attribute("Exch", "LegSecurityExchange_t_119299521"); // 1
    Leg_57_set.insert("LegSecurityExchange_t_119299521");
    Leg_57.add_attribute("Issr", "LegIssuer_t_1784746347"); // 1
    Leg_57_set.insert("LegIssuer_t_1784746347");
    Leg_57.add_attribute("EncLegIssrLen", "1465338234"); // 1
    Leg_57_set.insert("1465338234");
    Leg_57.add_attribute("EncLegIssr", "EncodedLegIssuer_t_990892896"); // 1
    Leg_57_set.insert("EncodedLegIssuer_t_990892896");
    Leg_57.add_attribute("Desc", "LegSecurityDesc_t_245268945"); // 1
    Leg_57_set.insert("LegSecurityDesc_t_245268945");
    Leg_57.add_attribute("EncLegSecDescLen", "1993397591"); // 1
    Leg_57_set.insert("1993397591");
    Leg_57.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1434325793"); // 1
    Leg_57_set.insert("EncodedLegSecurityDesc_t_1434325793");
    Leg_57.add_attribute("RatioQty", "6352180.740000"); // 1
    Leg_57_set.insert("6352180.740000");
    Leg_57.add_attribute("Side", "2"); // 1
    Leg_57_set.insert("2");
    Leg_57.add_attribute("Ccy", "USD"); // 1
    Leg_57_set.insert("USD");
    Leg_57.add_attribute("Pool", "LegPool_t_1989305871"); // 1
    Leg_57_set.insert("LegPool_t_1989305871");
    Leg_57.add_attribute("Dated", "LegDatedDate_t_1567366328"); // 1
    Leg_57_set.insert("LegDatedDate_t_1567366328");
    Leg_57.add_attribute("CSetMo", "1887338226"); // 1
    Leg_57_set.insert("1887338226");
    Leg_57.add_attribute("IntAcrl", "LegInterestAccrualDate_t_498356285"); // 1
    Leg_57_set.insert("LegInterestAccrualDate_t_498356285");
    Leg_57.add_attribute("PutCall", "1343644033"); // 1
    Leg_57_set.insert("1343644033");
    Leg_57.add_attribute("LegOptionRatio", "890664.070000"); // 1
    Leg_57_set.insert("890664.070000");
    Leg_57.add_attribute("Px", "18062247.200000"); // 1
    Leg_57_set.insert("18062247.200000");
    all_values.push_back(Leg_57_set);
    all_compo_names.insert("Leg_57_set");

    {
      xml_element LegAID_57{"LegAID"};
      multiset<string> LegAID_57_set;
      LegAID_57.add_attribute("SecAltID", "LegSecurityAltID_t_1421032850"); // 2
      LegAID_57_set.insert("LegSecurityAltID_t_1421032850");
      LegAID_57.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_57_set.insert("L");
      all_values.push_back(LegAID_57_set);
      all_compo_names.insert("LegAID_57_set");

      Leg_57.add_element(LegAID_57);
    }
    elt.add_element(Leg_57);
  } // end Leg
  { // Leg
    xml_element Leg_58{"Leg"};
    multiset<string> Leg_58_set;
    Leg_58.add_attribute("Sym", "LegSymbol_t_407363624"); // 1
    Leg_58_set.insert("LegSymbol_t_407363624");
    Leg_58.add_attribute("Sfx", "WI"); // 1
    Leg_58_set.insert("WI");
    Leg_58.add_attribute("ID", "LegSecurityID_t_581915787"); // 1
    Leg_58_set.insert("LegSecurityID_t_581915787");
    Leg_58.add_attribute("Src", "2"); // 1
    Leg_58_set.insert("2");
    Leg_58.add_attribute("Prod", "6"); // 1
    Leg_58_set.insert("6");
    Leg_58.add_attribute("CFI", "LegCFICode_t_460590161"); // 1
    Leg_58_set.insert("LegCFICode_t_460590161");
    Leg_58.add_attribute("SecTyp", "SPCLO"); // 1
    Leg_58_set.insert("SPCLO");
    Leg_58.add_attribute("SecSubTyp", "LegSecuritySubType_t_1499980120"); // 1
    Leg_58_set.insert("LegSecuritySubType_t_1499980120");
    Leg_58.add_attribute("MMY", "1902366122"); // 1
    Leg_58_set.insert("1902366122");
    Leg_58.add_attribute("Mat", "LegMaturityDate_t_1044994428"); // 1
    Leg_58_set.insert("LegMaturityDate_t_1044994428");
    Leg_58.add_attribute("MatTm", "776972957"); // 1
    Leg_58_set.insert("776972957");
    Leg_58.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2021665644"); // 1
    Leg_58_set.insert("LegCouponPaymentDate_t_2021665644");
    Leg_58.add_attribute("Issued", "LegIssueDate_t_682257128"); // 1
    Leg_58_set.insert("LegIssueDate_t_682257128");
    Leg_58.add_attribute("RepoCollSecTyp", "94827543"); // 1
    Leg_58_set.insert("94827543");
    Leg_58.add_attribute("RepoTrm", "865074892"); // 1
    Leg_58_set.insert("865074892");
    Leg_58.add_attribute("RepoRt", "9275260.730000"); // 1
    Leg_58_set.insert("9275260.730000");
    Leg_58.add_attribute("Fctr", "20882251.350000"); // 1
    Leg_58_set.insert("20882251.350000");
    Leg_58.add_attribute("CrdRtg", "LegCreditRating_t_151917037"); // 1
    Leg_58_set.insert("LegCreditRating_t_151917037");
    Leg_58.add_attribute("Rgstry", "LegInstrRegistry_t_1562744147"); // 1
    Leg_58_set.insert("LegInstrRegistry_t_1562744147");
    Leg_58.add_attribute("Ctry", "1157864192"); // 1
    Leg_58_set.insert("1157864192");
    Leg_58.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_369128539"); // 1
    Leg_58_set.insert("LegStateOrProvinceOfIssue_t_369128539");
    Leg_58.add_attribute("Lcl", "LegLocaleOfIssue_t_977197606"); // 1
    Leg_58_set.insert("LegLocaleOfIssue_t_977197606");
    Leg_58.add_attribute("Redeem", "LegRedemptionDate_t_999686415"); // 1
    Leg_58_set.insert("LegRedemptionDate_t_999686415");
    Leg_58.add_attribute("Strk", "19364948.680000"); // 1
    Leg_58_set.insert("19364948.680000");
    Leg_58.add_attribute("StrkCcy", "GBP"); // 1
    Leg_58_set.insert("GBP");
    Leg_58.add_attribute("OptA", "1132655253"); // 1
    Leg_58_set.insert("1132655253");
    Leg_58.add_attribute("Cmult", "8061185.920000"); // 1
    Leg_58_set.insert("8061185.920000");
    Leg_58.add_attribute("MultTyp", "0"); // 1
    Leg_58_set.insert("0");
    Leg_58.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_58_set.insert("0");
    Leg_58.add_attribute("UOM", "Bbl"); // 1
    Leg_58_set.insert("Bbl");
    Leg_58.add_attribute("UOMQty", "15641473.970000"); // 1
    Leg_58_set.insert("15641473.970000");
    Leg_58.add_attribute("PxUOM", "Alw"); // 1
    Leg_58_set.insert("Alw");
    Leg_58.add_attribute("PxUOMQty", "17103465.860000"); // 1
    Leg_58_set.insert("17103465.860000");
    Leg_58.add_attribute("TmUnit", "H"); // 1
    Leg_58_set.insert("H");
    Leg_58.add_attribute("ExerStyle", "0"); // 1
    Leg_58_set.insert("0");
    Leg_58.add_attribute("CpnRt", "234530.990000"); // 1
    Leg_58_set.insert("234530.990000");
    Leg_58.add_attribute("Exch", "LegSecurityExchange_t_1587486931"); // 1
    Leg_58_set.insert("LegSecurityExchange_t_1587486931");
    Leg_58.add_attribute("Issr", "LegIssuer_t_482130338"); // 1
    Leg_58_set.insert("LegIssuer_t_482130338");
    Leg_58.add_attribute("EncLegIssrLen", "1925819221"); // 1
    Leg_58_set.insert("1925819221");
    Leg_58.add_attribute("EncLegIssr", "EncodedLegIssuer_t_484997711"); // 1
    Leg_58_set.insert("EncodedLegIssuer_t_484997711");
    Leg_58.add_attribute("Desc", "LegSecurityDesc_t_1259103295"); // 1
    Leg_58_set.insert("LegSecurityDesc_t_1259103295");
    Leg_58.add_attribute("EncLegSecDescLen", "1800001217"); // 1
    Leg_58_set.insert("1800001217");
    Leg_58.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1167254839"); // 1
    Leg_58_set.insert("EncodedLegSecurityDesc_t_1167254839");
    Leg_58.add_attribute("RatioQty", "13539308.390000"); // 1
    Leg_58_set.insert("13539308.390000");
    Leg_58.add_attribute("Side", "E"); // 1
    Leg_58_set.insert("E");
    Leg_58.add_attribute("Ccy", "USD"); // 1
    Leg_58_set.insert("USD");
    Leg_58.add_attribute("Pool", "LegPool_t_669509499"); // 1
    Leg_58_set.insert("LegPool_t_669509499");
    Leg_58.add_attribute("Dated", "LegDatedDate_t_1510041412"); // 1
    Leg_58_set.insert("LegDatedDate_t_1510041412");
    Leg_58.add_attribute("CSetMo", "305052870"); // 1
    Leg_58_set.insert("305052870");
    Leg_58.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1038638038"); // 1
    Leg_58_set.insert("LegInterestAccrualDate_t_1038638038");
    Leg_58.add_attribute("PutCall", "339755370"); // 1
    Leg_58_set.insert("339755370");
    Leg_58.add_attribute("LegOptionRatio", "13047392.860000"); // 1
    Leg_58_set.insert("13047392.860000");
    Leg_58.add_attribute("Px", "8276492.580000"); // 1
    Leg_58_set.insert("8276492.580000");
    all_values.push_back(Leg_58_set);
    all_compo_names.insert("Leg_58_set");

    {
      xml_element LegAID_58{"LegAID"};
      multiset<string> LegAID_58_set;
      LegAID_58.add_attribute("SecAltID", "LegSecurityAltID_t_1056807554"); // 2
      LegAID_58_set.insert("LegSecurityAltID_t_1056807554");
      LegAID_58.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_58_set.insert("3");
      all_values.push_back(LegAID_58_set);
      all_compo_names.insert("LegAID_58_set");

      Leg_58.add_element(LegAID_58);
    }
    elt.add_element(Leg_58);
  } // end Leg
  { // Undly
    xml_element Undly_76{"Undly"};
    multiset<string> Undly_76_set;
    Undly_76.add_attribute("Sym", "UnderlyingSymbol_t_1862926146"); // 1
    Undly_76_set.insert("UnderlyingSymbol_t_1862926146");
    Undly_76.add_attribute("Sfx", "WI"); // 1
    Undly_76_set.insert("WI");
    Undly_76.add_attribute("ID", "UnderlyingSecurityID_t_219025319"); // 1
    Undly_76_set.insert("UnderlyingSecurityID_t_219025319");
    Undly_76.add_attribute("Src", "4"); // 1
    Undly_76_set.insert("4");
    Undly_76.add_attribute("Prod", "13"); // 1
    Undly_76_set.insert("13");
    Undly_76.add_attribute("CFI", "UnderlyingCFICode_t_89593966"); // 1
    Undly_76_set.insert("UnderlyingCFICode_t_89593966");
    Undly_76.add_attribute("SecTyp", "FAC"); // 1
    Undly_76_set.insert("FAC");
    Undly_76.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_264340657"); // 1
    Undly_76_set.insert("UnderlyingSecuritySubType_t_264340657");
    Undly_76.add_attribute("MMY", "1219227833"); // 1
    Undly_76_set.insert("1219227833");
    Undly_76.add_attribute("Mat", "UnderlyingMaturityDate_t_430189334"); // 1
    Undly_76_set.insert("UnderlyingMaturityDate_t_430189334");
    Undly_76.add_attribute("MatTm", "1851827588"); // 1
    Undly_76_set.insert("1851827588");
    Undly_76.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1701358171"); // 1
    Undly_76_set.insert("UnderlyingCouponPaymentDate_t_1701358171");
    Undly_76.add_attribute("RestrctTyp", "FR"); // 1
    Undly_76_set.insert("FR");
    Undly_76.add_attribute("Snrty", "SB"); // 1
    Undly_76_set.insert("SB");
    Undly_76.add_attribute("NotlPctOut", "8129778.190000"); // 1
    Undly_76_set.insert("8129778.190000");
    Undly_76.add_attribute("OrigNotlPctOut", "20085261.250000"); // 1
    Undly_76_set.insert("20085261.250000");
    Undly_76.add_attribute("AttchPnt", "13565964.910000"); // 1
    Undly_76_set.insert("13565964.910000");
    Undly_76.add_attribute("DetchPnt", "194250.100000"); // 1
    Undly_76_set.insert("194250.100000");
    Undly_76.add_attribute("Issued", "UnderlyingIssueDate_t_378634939"); // 1
    Undly_76_set.insert("UnderlyingIssueDate_t_378634939");
    Undly_76.add_attribute("RepoCollSecTyp", "1303893755"); // 1
    Undly_76_set.insert("1303893755");
    Undly_76.add_attribute("RepoTrm", "1314097336"); // 1
    Undly_76_set.insert("1314097336");
    Undly_76.add_attribute("RepoRt", "10481444.380000"); // 1
    Undly_76_set.insert("10481444.380000");
    Undly_76.add_attribute("Fctr", "6664515.190000"); // 1
    Undly_76_set.insert("6664515.190000");
    Undly_76.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1619150206"); // 1
    Undly_76_set.insert("UnderlyingCreditRating_t_1619150206");
    Undly_76.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2086782476"); // 1
    Undly_76_set.insert("UnderlyingInstrRegistry_t_2086782476");
    Undly_76.add_attribute("Ctry", "1006206889"); // 1
    Undly_76_set.insert("1006206889");
    Undly_76.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_776405844"); // 1
    Undly_76_set.insert("UnderlyingStateOrProvinceOfIssue_t_776405844");
    Undly_76.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_766948087"); // 1
    Undly_76_set.insert("UnderlyingLocaleOfIssue_t_766948087");
    Undly_76.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2063014444"); // 1
    Undly_76_set.insert("UnderlyingRedemptionDate_t_2063014444");
    Undly_76.add_attribute("StrkPx", "14317041.830000"); // 1
    Undly_76_set.insert("14317041.830000");
    Undly_76.add_attribute("StrkCcy", "GBP"); // 1
    Undly_76_set.insert("GBP");
    Undly_76.add_attribute("OptA", "1096302646"); // 1
    Undly_76_set.insert("1096302646");
    Undly_76.add_attribute("Mult", "7987942.700000"); // 1
    Undly_76_set.insert("7987942.700000");
    Undly_76.add_attribute("MultTyp", "1"); // 1
    Undly_76_set.insert("1");
    Undly_76.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_76_set.insert("4");
    Undly_76.add_attribute("UOM", "USD"); // 1
    Undly_76_set.insert("USD");
    Undly_76.add_attribute("UOMQty", "8815828.270000"); // 1
    Undly_76_set.insert("8815828.270000");
    Undly_76.add_attribute("PxUOM", "MWh"); // 1
    Undly_76_set.insert("MWh");
    Undly_76.add_attribute("PxUOMQty", "21076160.700000"); // 1
    Undly_76_set.insert("21076160.700000");
    Undly_76.add_attribute("TmUnit", "Min"); // 1
    Undly_76_set.insert("Min");
    Undly_76.add_attribute("ExerStyle", "2"); // 1
    Undly_76_set.insert("2");
    Undly_76.add_attribute("CpnRt", "16614905.930000"); // 1
    Undly_76_set.insert("16614905.930000");
    Undly_76.add_attribute("Exch", "UnderlyingSecurityExchange_t_1520297070"); // 1
    Undly_76_set.insert("UnderlyingSecurityExchange_t_1520297070");
    Undly_76.add_attribute("Issr", "UnderlyingIssuer_t_335591107"); // 1
    Undly_76_set.insert("UnderlyingIssuer_t_335591107");
    Undly_76.add_attribute("EncUndIssrLen", "326984764"); // 1
    Undly_76_set.insert("326984764");
    Undly_76.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1381339547"); // 1
    Undly_76_set.insert("EncodedUnderlyingIssuer_t_1381339547");
    Undly_76.add_attribute("Desc", "UnderlyingSecurityDesc_t_1692187598"); // 1
    Undly_76_set.insert("UnderlyingSecurityDesc_t_1692187598");
    Undly_76.add_attribute("EncUndSecDescLen", "346409774"); // 1
    Undly_76_set.insert("346409774");
    Undly_76.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1759974486"); // 1
    Undly_76_set.insert("EncodedUnderlyingSecurityDesc_t_1759974486");
    Undly_76.add_attribute("CPPgm", "UnderlyingCPProgram_t_848597706"); // 1
    Undly_76_set.insert("UnderlyingCPProgram_t_848597706");
    Undly_76.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1660507110"); // 1
    Undly_76_set.insert("UnderlyingCPRegType_t_1660507110");
    Undly_76.add_attribute("AllocPct", "6606352.760000"); // 1
    Undly_76_set.insert("6606352.760000");
    Undly_76.add_attribute("Ccy", "CHF"); // 1
    Undly_76_set.insert("CHF");
    Undly_76.add_attribute("Qty", "5999341.050000"); // 1
    Undly_76_set.insert("5999341.050000");
    Undly_76.add_attribute("SettlTyp", "4"); // 1
    Undly_76_set.insert("4");
    Undly_76.add_attribute("CashAmt", "UnderlyingCashAmount_t_1908579513"); // 1
    Undly_76_set.insert("UnderlyingCashAmount_t_1908579513");
    Undly_76.add_attribute("CashTyp", "FIXED"); // 1
    Undly_76_set.insert("FIXED");
    Undly_76.add_attribute("Px", "2893032.630000"); // 1
    Undly_76_set.insert("2893032.630000");
    Undly_76.add_attribute("DirtPx", "11928000.480000"); // 1
    Undly_76_set.insert("11928000.480000");
    Undly_76.add_attribute("EndPx", "19466511.430000"); // 1
    Undly_76_set.insert("19466511.430000");
    Undly_76.add_attribute("StartVal", "UnderlyingStartValue_t_2067760205"); // 1
    Undly_76_set.insert("UnderlyingStartValue_t_2067760205");
    Undly_76.add_attribute("CurVal", "UnderlyingCurrentValue_t_141619047"); // 1
    Undly_76_set.insert("UnderlyingCurrentValue_t_141619047");
    Undly_76.add_attribute("EndVal", "UnderlyingEndValue_t_597961765"); // 1
    Undly_76_set.insert("UnderlyingEndValue_t_597961765");
    Undly_76.add_attribute("AdjQty", "3951231.490000"); // 1
    Undly_76_set.insert("3951231.490000");
    Undly_76.add_attribute("FxRate", "3191839.060000"); // 1
    Undly_76_set.insert("3191839.060000");
    Undly_76.add_attribute("FxRateCalc", "M"); // 1
    Undly_76_set.insert("M");
    Undly_76.add_attribute("CapValu", "UnderlyingCapValue_t_1276705977"); // 1
    Undly_76_set.insert("UnderlyingCapValue_t_1276705977");
    Undly_76.add_attribute("SetMeth", "UnderlyingSettlMethod_t_761089422"); // 1
    Undly_76_set.insert("UnderlyingSettlMethod_t_761089422");
    Undly_76.add_attribute("PutCall", "1446482424"); // 1
    Undly_76_set.insert("1446482424");
    all_values.push_back(Undly_76_set);
    all_compo_names.insert("Undly_76_set");

    {
      xml_element UndAID_76{"UndAID"};
      multiset<string> UndAID_76_set;
      UndAID_76.add_attribute("AltID", "UnderlyingSecurityAltID_t_440994491"); // 2
      UndAID_76_set.insert("UnderlyingSecurityAltID_t_440994491");
      UndAID_76.add_attribute("AltIDSrc", "7"); // 2
      UndAID_76_set.insert("7");
      all_values.push_back(UndAID_76_set);
      all_compo_names.insert("UndAID_76_set");

      Undly_76.add_element(UndAID_76);
    }
    {
      xml_element Stip_114{"Stip"};
      multiset<string> Stip_114_set;
      Stip_114.add_attribute("Typ", "CUSTOMDATE"); // 2
      Stip_114_set.insert("CUSTOMDATE");
      Stip_114.add_attribute("Val", "UnderlyingStipValue_t_1961291561"); // 2
      Stip_114_set.insert("UnderlyingStipValue_t_1961291561");
      all_values.push_back(Stip_114_set);
      all_compo_names.insert("Stip_114_set");

      Undly_76.add_element(Stip_114);
    }
    {
      xml_element Pty_298{"Pty"};
      multiset<string> Pty_298_set;
      Pty_298.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1242929985"); // 2
      Pty_298_set.insert("UnderlyingInstrumentPartyID_t_1242929985");
      Pty_298.add_attribute("Src", "F"); // 2
      Pty_298_set.insert("F");
      Pty_298.add_attribute("R", "82"); // 2
      Pty_298_set.insert("82");
      all_values.push_back(Pty_298_set);
      all_compo_names.insert("Pty_298_set");

      {
        xml_element Sub_298{"Sub"};
        multiset<string> Sub_298_set;
        Sub_298.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_787633936"); // 3
        Sub_298_set.insert("UnderlyingInstrumentPartySubID_t_787633936");
        Sub_298.add_attribute("Typ", "4"); // 3
        Sub_298_set.insert("4");
        all_values.push_back(Sub_298_set);
        all_compo_names.insert("Sub_298_set");

        Pty_298.add_element(Sub_298);
      }
      Undly_76.add_element(Pty_298);
    }
    elt.add_element(Undly_76);
  } // end Undly
  { // Undly
    xml_element Undly_77{"Undly"};
    multiset<string> Undly_77_set;
    Undly_77.add_attribute("Sym", "UnderlyingSymbol_t_807638299"); // 1
    Undly_77_set.insert("UnderlyingSymbol_t_807638299");
    Undly_77.add_attribute("Sfx", "CD"); // 1
    Undly_77_set.insert("CD");
    Undly_77.add_attribute("ID", "UnderlyingSecurityID_t_1146907371"); // 1
    Undly_77_set.insert("UnderlyingSecurityID_t_1146907371");
    Undly_77.add_attribute("Src", "M"); // 1
    Undly_77_set.insert("M");
    Undly_77.add_attribute("Prod", "6"); // 1
    Undly_77_set.insert("6");
    Undly_77.add_attribute("CFI", "UnderlyingCFICode_t_131597392"); // 1
    Undly_77_set.insert("UnderlyingCFICode_t_131597392");
    Undly_77.add_attribute("SecTyp", "UST"); // 1
    Undly_77_set.insert("UST");
    Undly_77.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1377569686"); // 1
    Undly_77_set.insert("UnderlyingSecuritySubType_t_1377569686");
    Undly_77.add_attribute("MMY", "2040176906"); // 1
    Undly_77_set.insert("2040176906");
    Undly_77.add_attribute("Mat", "UnderlyingMaturityDate_t_1287606224"); // 1
    Undly_77_set.insert("UnderlyingMaturityDate_t_1287606224");
    Undly_77.add_attribute("MatTm", "1666872949"); // 1
    Undly_77_set.insert("1666872949");
    Undly_77.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1085493306"); // 1
    Undly_77_set.insert("UnderlyingCouponPaymentDate_t_1085493306");
    Undly_77.add_attribute("RestrctTyp", "XR"); // 1
    Undly_77_set.insert("XR");
    Undly_77.add_attribute("Snrty", "SB"); // 1
    Undly_77_set.insert("SB");
    Undly_77.add_attribute("NotlPctOut", "12271123.530000"); // 1
    Undly_77_set.insert("12271123.530000");
    Undly_77.add_attribute("OrigNotlPctOut", "16847354.850000"); // 1
    Undly_77_set.insert("16847354.850000");
    Undly_77.add_attribute("AttchPnt", "19822726.560000"); // 1
    Undly_77_set.insert("19822726.560000");
    Undly_77.add_attribute("DetchPnt", "15462962.590000"); // 1
    Undly_77_set.insert("15462962.590000");
    Undly_77.add_attribute("Issued", "UnderlyingIssueDate_t_1023601839"); // 1
    Undly_77_set.insert("UnderlyingIssueDate_t_1023601839");
    Undly_77.add_attribute("RepoCollSecTyp", "1111494985"); // 1
    Undly_77_set.insert("1111494985");
    Undly_77.add_attribute("RepoTrm", "159902033"); // 1
    Undly_77_set.insert("159902033");
    Undly_77.add_attribute("RepoRt", "3226006.160000"); // 1
    Undly_77_set.insert("3226006.160000");
    Undly_77.add_attribute("Fctr", "15524894.760000"); // 1
    Undly_77_set.insert("15524894.760000");
    Undly_77.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1067240911"); // 1
    Undly_77_set.insert("UnderlyingCreditRating_t_1067240911");
    Undly_77.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1283089986"); // 1
    Undly_77_set.insert("UnderlyingInstrRegistry_t_1283089986");
    Undly_77.add_attribute("Ctry", "1366297389"); // 1
    Undly_77_set.insert("1366297389");
    Undly_77.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_162687249"); // 1
    Undly_77_set.insert("UnderlyingStateOrProvinceOfIssue_t_162687249");
    Undly_77.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_423080472"); // 1
    Undly_77_set.insert("UnderlyingLocaleOfIssue_t_423080472");
    Undly_77.add_attribute("Redeem", "UnderlyingRedemptionDate_t_413961202"); // 1
    Undly_77_set.insert("UnderlyingRedemptionDate_t_413961202");
    Undly_77.add_attribute("StrkPx", "9503211.850000"); // 1
    Undly_77_set.insert("9503211.850000");
    Undly_77.add_attribute("StrkCcy", "CAN"); // 1
    Undly_77_set.insert("CAN");
    Undly_77.add_attribute("OptA", "439069179"); // 1
    Undly_77_set.insert("439069179");
    Undly_77.add_attribute("Mult", "10563881.050000"); // 1
    Undly_77_set.insert("10563881.050000");
    Undly_77.add_attribute("MultTyp", "0"); // 1
    Undly_77_set.insert("0");
    Undly_77.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_77_set.insert("3");
    Undly_77.add_attribute("UOM", "Bcf"); // 1
    Undly_77_set.insert("Bcf");
    Undly_77.add_attribute("UOMQty", "4631134.610000"); // 1
    Undly_77_set.insert("4631134.610000");
    Undly_77.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_77_set.insert("MMBtu");
    Undly_77.add_attribute("PxUOMQty", "10806787.550000"); // 1
    Undly_77_set.insert("10806787.550000");
    Undly_77.add_attribute("TmUnit", "Min"); // 1
    Undly_77_set.insert("Min");
    Undly_77.add_attribute("ExerStyle", "2"); // 1
    Undly_77_set.insert("2");
    Undly_77.add_attribute("CpnRt", "186884.140000"); // 1
    Undly_77_set.insert("186884.140000");
    Undly_77.add_attribute("Exch", "UnderlyingSecurityExchange_t_690009757"); // 1
    Undly_77_set.insert("UnderlyingSecurityExchange_t_690009757");
    Undly_77.add_attribute("Issr", "UnderlyingIssuer_t_1779491245"); // 1
    Undly_77_set.insert("UnderlyingIssuer_t_1779491245");
    Undly_77.add_attribute("EncUndIssrLen", "1245800767"); // 1
    Undly_77_set.insert("1245800767");
    Undly_77.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_227261594"); // 1
    Undly_77_set.insert("EncodedUnderlyingIssuer_t_227261594");
    Undly_77.add_attribute("Desc", "UnderlyingSecurityDesc_t_1614280254"); // 1
    Undly_77_set.insert("UnderlyingSecurityDesc_t_1614280254");
    Undly_77.add_attribute("EncUndSecDescLen", "644613379"); // 1
    Undly_77_set.insert("644613379");
    Undly_77.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1250863433"); // 1
    Undly_77_set.insert("EncodedUnderlyingSecurityDesc_t_1250863433");
    Undly_77.add_attribute("CPPgm", "UnderlyingCPProgram_t_578291591"); // 1
    Undly_77_set.insert("UnderlyingCPProgram_t_578291591");
    Undly_77.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_804515412"); // 1
    Undly_77_set.insert("UnderlyingCPRegType_t_804515412");
    Undly_77.add_attribute("AllocPct", "15734640.490000"); // 1
    Undly_77_set.insert("15734640.490000");
    Undly_77.add_attribute("Ccy", "GBP"); // 1
    Undly_77_set.insert("GBP");
    Undly_77.add_attribute("Qty", "7090703.870000"); // 1
    Undly_77_set.insert("7090703.870000");
    Undly_77.add_attribute("SettlTyp", "4"); // 1
    Undly_77_set.insert("4");
    Undly_77.add_attribute("CashAmt", "UnderlyingCashAmount_t_2034443573"); // 1
    Undly_77_set.insert("UnderlyingCashAmount_t_2034443573");
    Undly_77.add_attribute("CashTyp", "FIXED"); // 1
    Undly_77_set.insert("FIXED");
    Undly_77.add_attribute("Px", "17635560.110000"); // 1
    Undly_77_set.insert("17635560.110000");
    Undly_77.add_attribute("DirtPx", "8372811.100000"); // 1
    Undly_77_set.insert("8372811.100000");
    Undly_77.add_attribute("EndPx", "10416315.930000"); // 1
    Undly_77_set.insert("10416315.930000");
    Undly_77.add_attribute("StartVal", "UnderlyingStartValue_t_837671864"); // 1
    Undly_77_set.insert("UnderlyingStartValue_t_837671864");
    Undly_77.add_attribute("CurVal", "UnderlyingCurrentValue_t_1276350289"); // 1
    Undly_77_set.insert("UnderlyingCurrentValue_t_1276350289");
    Undly_77.add_attribute("EndVal", "UnderlyingEndValue_t_2098019698"); // 1
    Undly_77_set.insert("UnderlyingEndValue_t_2098019698");
    Undly_77.add_attribute("AdjQty", "13800612.930000"); // 1
    Undly_77_set.insert("13800612.930000");
    Undly_77.add_attribute("FxRate", "5717330.390000"); // 1
    Undly_77_set.insert("5717330.390000");
    Undly_77.add_attribute("FxRateCalc", "M"); // 1
    Undly_77_set.insert("M");
    Undly_77.add_attribute("CapValu", "UnderlyingCapValue_t_1843174754"); // 1
    Undly_77_set.insert("UnderlyingCapValue_t_1843174754");
    Undly_77.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1244685476"); // 1
    Undly_77_set.insert("UnderlyingSettlMethod_t_1244685476");
    Undly_77.add_attribute("PutCall", "71716655"); // 1
    Undly_77_set.insert("71716655");
    all_values.push_back(Undly_77_set);
    all_compo_names.insert("Undly_77_set");

    {
      xml_element UndAID_77{"UndAID"};
      multiset<string> UndAID_77_set;
      UndAID_77.add_attribute("AltID", "UnderlyingSecurityAltID_t_1446410791"); // 2
      UndAID_77_set.insert("UnderlyingSecurityAltID_t_1446410791");
      UndAID_77.add_attribute("AltIDSrc", "L"); // 2
      UndAID_77_set.insert("L");
      all_values.push_back(UndAID_77_set);
      all_compo_names.insert("UndAID_77_set");

      Undly_77.add_element(UndAID_77);
    }
    {
      xml_element Stip_115{"Stip"};
      multiset<string> Stip_115_set;
      Stip_115.add_attribute("Typ", "PAYFREQ"); // 2
      Stip_115_set.insert("PAYFREQ");
      Stip_115.add_attribute("Val", "UnderlyingStipValue_t_2136420548"); // 2
      Stip_115_set.insert("UnderlyingStipValue_t_2136420548");
      all_values.push_back(Stip_115_set);
      all_compo_names.insert("Stip_115_set");

      Undly_77.add_element(Stip_115);
    }
    {
      xml_element Pty_299{"Pty"};
      multiset<string> Pty_299_set;
      Pty_299.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1069034812"); // 2
      Pty_299_set.insert("UnderlyingInstrumentPartyID_t_1069034812");
      Pty_299.add_attribute("Src", "C"); // 2
      Pty_299_set.insert("C");
      Pty_299.add_attribute("R", "53"); // 2
      Pty_299_set.insert("53");
      all_values.push_back(Pty_299_set);
      all_compo_names.insert("Pty_299_set");

      {
        xml_element Sub_299{"Sub"};
        multiset<string> Sub_299_set;
        Sub_299.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_535831418"); // 3
        Sub_299_set.insert("UnderlyingInstrumentPartySubID_t_535831418");
        Sub_299.add_attribute("Typ", "8"); // 3
        Sub_299_set.insert("8");
        all_values.push_back(Sub_299_set);
        all_compo_names.insert("Sub_299_set");

        Pty_299.add_element(Sub_299);
      }
      Undly_77.add_element(Pty_299);
    }
    elt.add_element(Undly_77);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_17{"TrdSes"};
    multiset<string> TrdSes_17_set;
    TrdSes_17.add_attribute("SesID", "3"); // 1
    TrdSes_17_set.insert("3");
    TrdSes_17.add_attribute("SesSub", "5"); // 1
    TrdSes_17_set.insert("5");
    all_values.push_back(TrdSes_17_set);
    all_compo_names.insert("TrdSes_17_set");

    elt.add_element(TrdSes_17);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_18{"TrdSes"};
    multiset<string> TrdSes_18_set;
    TrdSes_18.add_attribute("SesID", "2"); // 1
    TrdSes_18_set.insert("2");
    TrdSes_18.add_attribute("SesSub", "2"); // 1
    TrdSes_18_set.insert("2");
    all_values.push_back(TrdSes_18_set);
    all_compo_names.insert("TrdSes_18_set");

    elt.add_element(TrdSes_18);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_19{"TrdSes"};
    multiset<string> TrdSes_19_set;
    TrdSes_19.add_attribute("SesID", "5"); // 1
    TrdSes_19_set.insert("5");
    TrdSes_19.add_attribute("SesSub", "3"); // 1
    TrdSes_19_set.insert("3");
    all_values.push_back(TrdSes_19_set);
    all_compo_names.insert("TrdSes_19_set");

    elt.add_element(TrdSes_19);
  } // end TrdSes
  { // Qty
    xml_element Qty_6{"Qty"};
    multiset<string> Qty_6_set;
    Qty_6.add_attribute("Typ", "EP"); // 1
    Qty_6_set.insert("EP");
    Qty_6.add_attribute("Long", "5867799.290000"); // 1
    Qty_6_set.insert("5867799.290000");
    Qty_6.add_attribute("Short", "20630876.030000"); // 1
    Qty_6_set.insert("20630876.030000");
    Qty_6.add_attribute("Stat", "2"); // 1
    Qty_6_set.insert("2");
    Qty_6.add_attribute("QtyDt", "QuantityDate_t_1628411522"); // 1
    Qty_6_set.insert("QuantityDate_t_1628411522");
    all_values.push_back(Qty_6_set);
    all_compo_names.insert("Qty_6_set");

    {
      xml_element Pty_300{"Pty"};
      multiset<string> Pty_300_set;
      Pty_300.add_attribute("ID", "NestedPartyID_t_753275819"); // 2
      Pty_300_set.insert("NestedPartyID_t_753275819");
      Pty_300.add_attribute("Src", "5"); // 2
      Pty_300_set.insert("5");
      Pty_300.add_attribute("R", "79"); // 2
      Pty_300_set.insert("79");
      all_values.push_back(Pty_300_set);
      all_compo_names.insert("Pty_300_set");

      {
        xml_element Sub_300{"Sub"};
        multiset<string> Sub_300_set;
        Sub_300.add_attribute("ID", "NestedPartySubID_t_2133337112"); // 3
        Sub_300_set.insert("NestedPartySubID_t_2133337112");
        Sub_300.add_attribute("Typ", "16"); // 3
        Sub_300_set.insert("16");
        all_values.push_back(Sub_300_set);
        all_compo_names.insert("Sub_300_set");

        Pty_300.add_element(Sub_300);
      }
      Qty_6.add_element(Pty_300);
    }
    elt.add_element(Qty_6);
  } // end Qty
  { // Qty
    xml_element Qty_7{"Qty"};
    multiset<string> Qty_7_set;
    Qty_7.add_attribute("Typ", "ASF"); // 1
    Qty_7_set.insert("ASF");
    Qty_7.add_attribute("Long", "18290282.180000"); // 1
    Qty_7_set.insert("18290282.180000");
    Qty_7.add_attribute("Short", "20316498.480000"); // 1
    Qty_7_set.insert("20316498.480000");
    Qty_7.add_attribute("Stat", "1"); // 1
    Qty_7_set.insert("1");
    Qty_7.add_attribute("QtyDt", "QuantityDate_t_1127955362"); // 1
    Qty_7_set.insert("QuantityDate_t_1127955362");
    all_values.push_back(Qty_7_set);
    all_compo_names.insert("Qty_7_set");

    {
      xml_element Pty_301{"Pty"};
      multiset<string> Pty_301_set;
      Pty_301.add_attribute("ID", "NestedPartyID_t_1321193415"); // 2
      Pty_301_set.insert("NestedPartyID_t_1321193415");
      Pty_301.add_attribute("Src", "3"); // 2
      Pty_301_set.insert("3");
      Pty_301.add_attribute("R", "41"); // 2
      Pty_301_set.insert("41");
      all_values.push_back(Pty_301_set);
      all_compo_names.insert("Pty_301_set");

      {
        xml_element Sub_301{"Sub"};
        multiset<string> Sub_301_set;
        Sub_301.add_attribute("ID", "NestedPartySubID_t_242744580"); // 3
        Sub_301_set.insert("NestedPartySubID_t_242744580");
        Sub_301.add_attribute("Typ", "3"); // 3
        Sub_301_set.insert("3");
        all_values.push_back(Sub_301_set);
        all_compo_names.insert("Sub_301_set");

        Pty_301.add_element(Sub_301);
      }
      Qty_7.add_element(Pty_301);
    }
    elt.add_element(Qty_7);
  } // end Qty
  { // Qty
    xml_element Qty_8{"Qty"};
    multiset<string> Qty_8_set;
    Qty_8.add_attribute("Typ", "CAA"); // 1
    Qty_8_set.insert("CAA");
    Qty_8.add_attribute("Long", "7785759.980000"); // 1
    Qty_8_set.insert("7785759.980000");
    Qty_8.add_attribute("Short", "19016486.030000"); // 1
    Qty_8_set.insert("19016486.030000");
    Qty_8.add_attribute("Stat", "2"); // 1
    Qty_8_set.insert("2");
    Qty_8.add_attribute("QtyDt", "QuantityDate_t_1892699008"); // 1
    Qty_8_set.insert("QuantityDate_t_1892699008");
    all_values.push_back(Qty_8_set);
    all_compo_names.insert("Qty_8_set");

    {
      xml_element Pty_302{"Pty"};
      multiset<string> Pty_302_set;
      Pty_302.add_attribute("ID", "NestedPartyID_t_392015935"); // 2
      Pty_302_set.insert("NestedPartyID_t_392015935");
      Pty_302.add_attribute("Src", "D"); // 2
      Pty_302_set.insert("D");
      Pty_302.add_attribute("R", "41"); // 2
      Pty_302_set.insert("41");
      all_values.push_back(Pty_302_set);
      all_compo_names.insert("Pty_302_set");

      {
        xml_element Sub_302{"Sub"};
        multiset<string> Sub_302_set;
        Sub_302.add_attribute("ID", "NestedPartySubID_t_754139592"); // 3
        Sub_302_set.insert("NestedPartySubID_t_754139592");
        Sub_302.add_attribute("Typ", "25"); // 3
        Sub_302_set.insert("25");
        all_values.push_back(Sub_302_set);
        all_compo_names.insert("Sub_302_set");

        Pty_302.add_element(Sub_302);
      }
      Qty_8.add_element(Pty_302);
    }
    elt.add_element(Qty_8);
  } // end Qty
  { // Amt
    xml_element Amt_10{"Amt"};
    multiset<string> Amt_10_set;
    Amt_10.add_attribute("Typ", "CMTM"); // 1
    Amt_10_set.insert("CMTM");
    Amt_10.add_attribute("Amt", "PosAmt_t_1587120364"); // 1
    Amt_10_set.insert("PosAmt_t_1587120364");
    Amt_10.add_attribute("Ccy", "PositionCurrency_t_1057771337"); // 1
    Amt_10_set.insert("PositionCurrency_t_1057771337");
    all_values.push_back(Amt_10_set);
    all_compo_names.insert("Amt_10_set");

    elt.add_element(Amt_10);
  } // end Amt
  { // Amt
    xml_element Amt_11{"Amt"};
    multiset<string> Amt_11_set;
    Amt_11.add_attribute("Typ", "CMTM"); // 1
    Amt_11_set.insert("CMTM");
    Amt_11.add_attribute("Amt", "PosAmt_t_1068048239"); // 1
    Amt_11_set.insert("PosAmt_t_1068048239");
    Amt_11.add_attribute("Ccy", "PositionCurrency_t_1811047156"); // 1
    Amt_11_set.insert("PositionCurrency_t_1811047156");
    all_values.push_back(Amt_11_set);
    all_compo_names.insert("Amt_11_set");

    elt.add_element(Amt_11);
  } // end Amt
  { // Amt
    xml_element Amt_12{"Amt"};
    multiset<string> Amt_12_set;
    Amt_12.add_attribute("Typ", "DLV"); // 1
    Amt_12_set.insert("DLV");
    Amt_12.add_attribute("Amt", "PosAmt_t_499512164"); // 1
    Amt_12_set.insert("PosAmt_t_499512164");
    Amt_12.add_attribute("Ccy", "PositionCurrency_t_1796900621"); // 1
    Amt_12_set.insert("PositionCurrency_t_1796900621");
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
