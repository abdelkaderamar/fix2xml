#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/PositionMaintenanceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( PositionMaintenanceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosMntReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceRequest_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_944299921"); // 0
  PositionMaintenanceRequest_message_t_0.insert("PosReqID_t_944299921");
  elt.add_attribute("TxnTyp", "2"); // 0
  PositionMaintenanceRequest_message_t_0.insert("2");
  elt.add_attribute("Actn", "4"); // 0
  PositionMaintenanceRequest_message_t_0.insert("4");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_828466122"); // 0
  PositionMaintenanceRequest_message_t_0.insert("OrigPosReqRefID_t_828466122");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_1711199765"); // 0
  PositionMaintenanceRequest_message_t_0.insert("PosMaintRptRefID_t_1711199765");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_458916905"); // 0
  PositionMaintenanceRequest_message_t_0.insert("ClearingBusinessDate_t_458916905");
  elt.add_attribute("SetSesID", "RTH"); // 0
  PositionMaintenanceRequest_message_t_0.insert("RTH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_295823315"); // 0
  PositionMaintenanceRequest_message_t_0.insert("SettlSessSubID_t_295823315");
  elt.add_attribute("Acct", "Account_t_1575809168"); // 0
  PositionMaintenanceRequest_message_t_0.insert("Account_t_1575809168");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  PositionMaintenanceRequest_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "1"); // 0
  PositionMaintenanceRequest_message_t_0.insert("1");
  elt.add_attribute("Ccy", "JPY"); // 0
  PositionMaintenanceRequest_message_t_0.insert("JPY");
  elt.add_attribute("TxnTm", "TransactTime_t_2118301305"); // 0
  PositionMaintenanceRequest_message_t_0.insert("TransactTime_t_2118301305");
  elt.add_attribute("AdjTyp", "2"); // 0
  PositionMaintenanceRequest_message_t_0.insert("2");
  elt.add_attribute("CntraryInstrctnInd", "true"); // 0
  PositionMaintenanceRequest_message_t_0.insert("true");
  elt.add_attribute("PriorSpreadInd", "false"); // 0
  PositionMaintenanceRequest_message_t_0.insert("false");
  elt.add_attribute("ThresholdAmt", "8123130.320000"); // 0
  PositionMaintenanceRequest_message_t_0.insert("8123130.320000");
  elt.add_attribute("Txt", "Text_t_1611347619"); // 0
  PositionMaintenanceRequest_message_t_0.insert("Text_t_1611347619");
  elt.add_attribute("EncTxtLen", "1116973185"); // 0
  PositionMaintenanceRequest_message_t_0.insert("1116973185");
  elt.add_attribute("EncTxt", "EncodedText_t_1812653468"); // 0
  PositionMaintenanceRequest_message_t_0.insert("EncodedText_t_1812653468");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  PositionMaintenanceRequest_message_t_0.insert("JPY");
  all_values.push_back(PositionMaintenanceRequest_message_t_0);
  all_compo_names.insert("PositionMaintenanceRequest_message_t");

  { // Hdr
    xml_element Hdr_66{"Hdr"};
    multiset<string> Hdr_66_set;
    Hdr_66.add_attribute("SeqNum", "1252290184"); // 1
    Hdr_66_set.insert("1252290184");
    Hdr_66.add_attribute("SID", "SenderCompID_t_1663802690"); // 1
    Hdr_66_set.insert("SenderCompID_t_1663802690");
    Hdr_66.add_attribute("TID", "TargetCompID_t_2062300575"); // 1
    Hdr_66_set.insert("TargetCompID_t_2062300575");
    Hdr_66.add_attribute("OBID", "OnBehalfOfCompID_t_172854775"); // 1
    Hdr_66_set.insert("OnBehalfOfCompID_t_172854775");
    Hdr_66.add_attribute("D2ID", "DeliverToCompID_t_1327366198"); // 1
    Hdr_66_set.insert("DeliverToCompID_t_1327366198");
    Hdr_66.add_attribute("SSub", "SenderSubID_t_72152477"); // 1
    Hdr_66_set.insert("SenderSubID_t_72152477");
    Hdr_66.add_attribute("SLoc", "SenderLocationID_t_672366939"); // 1
    Hdr_66_set.insert("SenderLocationID_t_672366939");
    Hdr_66.add_attribute("TSub", "TargetSubID_t_976783171"); // 1
    Hdr_66_set.insert("TargetSubID_t_976783171");
    Hdr_66.add_attribute("TLoc", "TargetLocationID_t_1016452398"); // 1
    Hdr_66_set.insert("TargetLocationID_t_1016452398");
    Hdr_66.add_attribute("OBSub", "OnBehalfOfSubID_t_1741864576"); // 1
    Hdr_66_set.insert("OnBehalfOfSubID_t_1741864576");
    Hdr_66.add_attribute("OBLoc", "OnBehalfOfLocationID_t_307744715"); // 1
    Hdr_66_set.insert("OnBehalfOfLocationID_t_307744715");
    Hdr_66.add_attribute("D2Sub", "DeliverToSubID_t_1844918520"); // 1
    Hdr_66_set.insert("DeliverToSubID_t_1844918520");
    Hdr_66.add_attribute("D2Loc", "DeliverToLocationID_t_1305580694"); // 1
    Hdr_66_set.insert("DeliverToLocationID_t_1305580694");
    Hdr_66.add_attribute("PosDup", "N"); // 1
    Hdr_66_set.insert("N");
    Hdr_66.add_attribute("PosRsnd", "N"); // 1
    Hdr_66_set.insert("N");
    Hdr_66.add_attribute("Snt", "SendingTime_t_1601404009"); // 1
    Hdr_66_set.insert("SendingTime_t_1601404009");
    Hdr_66.add_attribute("OrigSnt", "OrigSendingTime_t_194987140"); // 1
    Hdr_66_set.insert("OrigSendingTime_t_194987140");
    Hdr_66.add_attribute("MsgEncd", "MessageEncoding_t_2092014879"); // 1
    Hdr_66_set.insert("MessageEncoding_t_2092014879");
    all_values.push_back(Hdr_66_set);
    all_compo_names.insert("Hdr_66_set");

    {
      xml_element Hop_66{"Hop"};
      multiset<string> Hop_66_set;
      Hop_66.add_attribute("ID", "HopCompID_t_1818056712"); // 2
      Hop_66_set.insert("HopCompID_t_1818056712");
      Hop_66.add_attribute("Ref", "956403417"); // 2
      Hop_66_set.insert("956403417");
      Hop_66.add_attribute("Snt", "HopSendingTime_t_968027699"); // 2
      Hop_66_set.insert("HopSendingTime_t_968027699");
      all_values.push_back(Hop_66_set);
      all_compo_names.insert("Hop_66_set");

      Hdr_66.add_element(Hop_66);
    }
    elt.add_element(Hdr_66);
  } // end Hdr
  { // Pty
    xml_element Pty_303{"Pty"};
    multiset<string> Pty_303_set;
    Pty_303.add_attribute("ID", "PartyID_t_223005083"); // 1
    Pty_303_set.insert("PartyID_t_223005083");
    Pty_303.add_attribute("Src", "7"); // 1
    Pty_303_set.insert("7");
    Pty_303.add_attribute("R", "41"); // 1
    Pty_303_set.insert("41");
    all_values.push_back(Pty_303_set);
    all_compo_names.insert("Pty_303_set");

    {
      xml_element Sub_303{"Sub"};
      multiset<string> Sub_303_set;
      Sub_303.add_attribute("ID", "PartySubID_t_1035318116"); // 2
      Sub_303_set.insert("PartySubID_t_1035318116");
      Sub_303.add_attribute("Typ", "16"); // 2
      Sub_303_set.insert("16");
      all_values.push_back(Sub_303_set);
      all_compo_names.insert("Sub_303_set");

      Pty_303.add_element(Sub_303);
    }
    elt.add_element(Pty_303);
  } // end Pty
  { // Pty
    xml_element Pty_304{"Pty"};
    multiset<string> Pty_304_set;
    Pty_304.add_attribute("ID", "PartyID_t_1121197499"); // 1
    Pty_304_set.insert("PartyID_t_1121197499");
    Pty_304.add_attribute("Src", "9"); // 1
    Pty_304_set.insert("9");
    Pty_304.add_attribute("R", "66"); // 1
    Pty_304_set.insert("66");
    all_values.push_back(Pty_304_set);
    all_compo_names.insert("Pty_304_set");

    {
      xml_element Sub_304{"Sub"};
      multiset<string> Sub_304_set;
      Sub_304.add_attribute("ID", "PartySubID_t_1093910210"); // 2
      Sub_304_set.insert("PartySubID_t_1093910210");
      Sub_304.add_attribute("Typ", "26"); // 2
      Sub_304_set.insert("26");
      all_values.push_back(Sub_304_set);
      all_compo_names.insert("Sub_304_set");

      Pty_304.add_element(Sub_304);
    }
    elt.add_element(Pty_304);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_56{"Instrmt"};
    multiset<string> Instrmt_56_set;
    Instrmt_56.add_attribute("Sym", "Symbol_t_1322953894"); // 1
    Instrmt_56_set.insert("Symbol_t_1322953894");
    Instrmt_56.add_attribute("Sfx", "WI"); // 1
    Instrmt_56_set.insert("WI");
    Instrmt_56.add_attribute("ID", "SecurityID_t_2125632896"); // 1
    Instrmt_56_set.insert("SecurityID_t_2125632896");
    Instrmt_56.add_attribute("Src", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("Prod", "6"); // 1
    Instrmt_56_set.insert("6");
    Instrmt_56.add_attribute("ProdCmplx", "ProductComplex_t_650516187"); // 1
    Instrmt_56_set.insert("ProductComplex_t_650516187");
    Instrmt_56.add_attribute("SecGrp", "SecurityGroup_t_1479619616"); // 1
    Instrmt_56_set.insert("SecurityGroup_t_1479619616");
    Instrmt_56.add_attribute("CFI", "CFICode_t_2097332013"); // 1
    Instrmt_56_set.insert("CFICode_t_2097332013");
    Instrmt_56.add_attribute("SecTyp", "GO"); // 1
    Instrmt_56_set.insert("GO");
    Instrmt_56.add_attribute("SubTyp", "SecuritySubType_t_1787364331"); // 1
    Instrmt_56_set.insert("SecuritySubType_t_1787364331");
    Instrmt_56.add_attribute("MMY", "1794766885"); // 1
    Instrmt_56_set.insert("1794766885");
    Instrmt_56.add_attribute("MatDt", "MaturityDate_t_1550477810"); // 1
    Instrmt_56_set.insert("MaturityDate_t_1550477810");
    Instrmt_56.add_attribute("MatTm", "406542303"); // 1
    Instrmt_56_set.insert("406542303");
    Instrmt_56.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1494377647"); // 1
    Instrmt_56_set.insert("SettleOnOpenFlag_t_1494377647");
    Instrmt_56.add_attribute("AsgnMeth", "1004398171"); // 1
    Instrmt_56_set.insert("1004398171");
    Instrmt_56.add_attribute("Status", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("CpnPmt", "CouponPaymentDate_t_1438908879"); // 1
    Instrmt_56_set.insert("CouponPaymentDate_t_1438908879");
    Instrmt_56.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_56_set.insert("XR");
    Instrmt_56.add_attribute("Snrty", "SB"); // 1
    Instrmt_56_set.insert("SB");
    Instrmt_56.add_attribute("NotlPctOut", "2594529.300000"); // 1
    Instrmt_56_set.insert("2594529.300000");
    Instrmt_56.add_attribute("OrigNotlPctOut", "3163619.570000"); // 1
    Instrmt_56_set.insert("3163619.570000");
    Instrmt_56.add_attribute("AttchPnt", "17809379.450000"); // 1
    Instrmt_56_set.insert("17809379.450000");
    Instrmt_56.add_attribute("DetchPnt", "19961924.580000"); // 1
    Instrmt_56_set.insert("19961924.580000");
    Instrmt_56.add_attribute("Issued", "IssueDate_t_320586271"); // 1
    Instrmt_56_set.insert("IssueDate_t_320586271");
    Instrmt_56.add_attribute("RepoCollSecTyp", "668772413"); // 1
    Instrmt_56_set.insert("668772413");
    Instrmt_56.add_attribute("RepoTrm", "1049312309"); // 1
    Instrmt_56_set.insert("1049312309");
    Instrmt_56.add_attribute("RepoRt", "14417837.710000"); // 1
    Instrmt_56_set.insert("14417837.710000");
    Instrmt_56.add_attribute("Fctr", "13692603.490000"); // 1
    Instrmt_56_set.insert("13692603.490000");
    Instrmt_56.add_attribute("CrdRtg", "CreditRating_t_708463513"); // 1
    Instrmt_56_set.insert("CreditRating_t_708463513");
    Instrmt_56.add_attribute("Rgstry", "InstrRegistry_t_388210333"); // 1
    Instrmt_56_set.insert("InstrRegistry_t_388210333");
    Instrmt_56.add_attribute("IssuCtry", "1174554821"); // 1
    Instrmt_56_set.insert("1174554821");
    Instrmt_56.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2031417407"); // 1
    Instrmt_56_set.insert("StateOrProvinceOfIssue_t_2031417407");
    Instrmt_56.add_attribute("Lcl", "LocaleOfIssue_t_1396937470"); // 1
    Instrmt_56_set.insert("LocaleOfIssue_t_1396937470");
    Instrmt_56.add_attribute("Redeem", "RedemptionDate_t_1152704069"); // 1
    Instrmt_56_set.insert("RedemptionDate_t_1152704069");
    Instrmt_56.add_attribute("StrkPx", "3867702.040000"); // 1
    Instrmt_56_set.insert("3867702.040000");
    Instrmt_56.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_56_set.insert("CHF");
    Instrmt_56.add_attribute("StrkMult", "18663898.200000"); // 1
    Instrmt_56_set.insert("18663898.200000");
    Instrmt_56.add_attribute("StrkValu", "2801818.020000"); // 1
    Instrmt_56_set.insert("2801818.020000");
    Instrmt_56.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_56_set.insert("4");
    Instrmt_56.add_attribute("StrkPxBndryPrcsn", "20749486.870000"); // 1
    Instrmt_56_set.insert("20749486.870000");
    Instrmt_56.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_56_set.insert("4");
    Instrmt_56.add_attribute("OptAt", "1912812806"); // 1
    Instrmt_56_set.insert("1912812806");
    Instrmt_56.add_attribute("Mult", "14218426.870000"); // 1
    Instrmt_56_set.insert("14218426.870000");
    Instrmt_56.add_attribute("MultTyp", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("MinPxIncr", "7132679.180000"); // 1
    Instrmt_56_set.insert("7132679.180000");
    Instrmt_56.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_982997294"); // 1
    Instrmt_56_set.insert("MinPriceIncrementAmount_t_982997294");
    Instrmt_56.add_attribute("UOM", "Bu"); // 1
    Instrmt_56_set.insert("Bu");
    Instrmt_56.add_attribute("UOMQty", "9727208.480000"); // 1
    Instrmt_56_set.insert("9727208.480000");
    Instrmt_56.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_56_set.insert("oz_tr");
    Instrmt_56.add_attribute("PxUOMQty", "15582457.610000"); // 1
    Instrmt_56_set.insert("15582457.610000");
    Instrmt_56.add_attribute("SettlMeth", "P"); // 1
    Instrmt_56_set.insert("P");
    Instrmt_56.add_attribute("ExerStyle", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_56_set.insert("3");
    Instrmt_56.add_attribute("OptPayAmt", "OptPayoutAmount_t_1870741968"); // 1
    Instrmt_56_set.insert("OptPayoutAmount_t_1870741968");
    Instrmt_56.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_56_set.insert("INX");
    Instrmt_56.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_56_set.insert("EQTY");
    Instrmt_56.add_attribute("ListMeth", "0"); // 1
    Instrmt_56_set.insert("0");
    Instrmt_56.add_attribute("CapPx", "13024559.780000"); // 1
    Instrmt_56_set.insert("13024559.780000");
    Instrmt_56.add_attribute("FlrPx", "4758660.480000"); // 1
    Instrmt_56_set.insert("4758660.480000");
    Instrmt_56.add_attribute("PutCall", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("FlexInd", "false"); // 1
    Instrmt_56_set.insert("false");
    Instrmt_56.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_56_set.insert("true");
    Instrmt_56.add_attribute("TmUnit", "D"); // 1
    Instrmt_56_set.insert("D");
    Instrmt_56.add_attribute("CpnRt", "8822432.380000"); // 1
    Instrmt_56_set.insert("8822432.380000");
    Instrmt_56.add_attribute("Exch", "SecurityExchange_t_1284306727"); // 1
    Instrmt_56_set.insert("SecurityExchange_t_1284306727");
    Instrmt_56.add_attribute("PosLmt", "421331969"); // 1
    Instrmt_56_set.insert("421331969");
    Instrmt_56.add_attribute("NTPosLmt", "1162425040"); // 1
    Instrmt_56_set.insert("1162425040");
    Instrmt_56.add_attribute("Issr", "Issuer_t_1184940452"); // 1
    Instrmt_56_set.insert("Issuer_t_1184940452");
    Instrmt_56.add_attribute("EncIssrLen", "1927602472"); // 1
    Instrmt_56_set.insert("1927602472");
    Instrmt_56.add_attribute("EncIssr", "EncodedIssuer_t_1089890079"); // 1
    Instrmt_56_set.insert("EncodedIssuer_t_1089890079");
    Instrmt_56.add_attribute("Desc", "SecurityDesc_t_488568339"); // 1
    Instrmt_56_set.insert("SecurityDesc_t_488568339");
    Instrmt_56.add_attribute("EncSecDescLen", "1692931631"); // 1
    Instrmt_56_set.insert("1692931631");
    Instrmt_56.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_364249118"); // 1
    Instrmt_56_set.insert("EncodedSecurityDesc_t_364249118");
    Instrmt_56.add_attribute("Pool", "Pool_t_796594397"); // 1
    Instrmt_56_set.insert("Pool_t_796594397");
    Instrmt_56.add_attribute("CSetMo", "2059790233"); // 1
    Instrmt_56_set.insert("2059790233");
    Instrmt_56.add_attribute("CPPgm", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("CPRegT", "CPRegType_t_1779591691"); // 1
    Instrmt_56_set.insert("CPRegType_t_1779591691");
    Instrmt_56.add_attribute("Dated", "DatedDate_t_1837098049"); // 1
    Instrmt_56_set.insert("DatedDate_t_1837098049");
    Instrmt_56.add_attribute("IntAcrl", "InterestAccrualDate_t_2050237885"); // 1
    Instrmt_56_set.insert("InterestAccrualDate_t_2050237885");
    all_values.push_back(Instrmt_56_set);
    all_compo_names.insert("Instrmt_56_set");

    {
      xml_element AID_59{"AID"};
      multiset<string> AID_59_set;
      AID_59.add_attribute("AltID", "SecurityAltID_t_931467294"); // 2
      AID_59_set.insert("SecurityAltID_t_931467294");
      AID_59.add_attribute("AltIDSrc", "B"); // 2
      AID_59_set.insert("B");
      all_values.push_back(AID_59_set);
      all_compo_names.insert("AID_59_set");

      Instrmt_56.add_element(AID_59);
    }
    {
      xml_element SecXML_59{"SecXML"};
      multiset<string> SecXML_59_set;
      SecXML_59.add_attribute("Schema", "SecurityXMLSchema_t_724183896"); // 2
      SecXML_59_set.insert("SecurityXMLSchema_t_724183896");
      all_values.push_back(SecXML_59_set);
      all_compo_names.insert("SecXML_59_set");

      Instrmt_56.add_element(SecXML_59);
    }
    {
      xml_element Evnt_59{"Evnt"};
      multiset<string> Evnt_59_set;
      Evnt_59.add_attribute("EventTyp", "9"); // 2
      Evnt_59_set.insert("9");
      Evnt_59.add_attribute("Dt", "EventDate_t_1327394688"); // 2
      Evnt_59_set.insert("EventDate_t_1327394688");
      Evnt_59.add_attribute("Tm", "EventTime_t_447442216"); // 2
      Evnt_59_set.insert("EventTime_t_447442216");
      Evnt_59.add_attribute("Px", "13181748.140000"); // 2
      Evnt_59_set.insert("13181748.140000");
      Evnt_59.add_attribute("Txt", "EventText_t_628705915"); // 2
      Evnt_59_set.insert("EventText_t_628705915");
      all_values.push_back(Evnt_59_set);
      all_compo_names.insert("Evnt_59_set");

      Instrmt_56.add_element(Evnt_59);
    }
    {
      xml_element Pty_305{"Pty"};
      multiset<string> Pty_305_set;
      Pty_305.add_attribute("ID", "InstrumentPartyID_t_879164050"); // 2
      Pty_305_set.insert("InstrumentPartyID_t_879164050");
      Pty_305.add_attribute("Src", "A"); // 2
      Pty_305_set.insert("A");
      Pty_305.add_attribute("R", "29"); // 2
      Pty_305_set.insert("29");
      all_values.push_back(Pty_305_set);
      all_compo_names.insert("Pty_305_set");

      {
        xml_element Sub_305{"Sub"};
        multiset<string> Sub_305_set;
        Sub_305.add_attribute("ID", "InstrumentPartySubID_t_1194819644"); // 3
        Sub_305_set.insert("InstrumentPartySubID_t_1194819644");
        Sub_305.add_attribute("Typ", "7"); // 3
        Sub_305_set.insert("7");
        all_values.push_back(Sub_305_set);
        all_compo_names.insert("Sub_305_set");

        Pty_305.add_element(Sub_305);
      }
      Instrmt_56.add_element(Pty_305);
    }
    {
      xml_element CmplxEvnt_56{"CmplxEvnt"};
      multiset<string> CmplxEvnt_56_set;
      CmplxEvnt_56.add_attribute("Typ", "4"); // 2
      CmplxEvnt_56_set.insert("4");
      CmplxEvnt_56.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1897245441"); // 2
      CmplxEvnt_56_set.insert("ComplexOptPayoutAmount_t_1897245441");
      CmplxEvnt_56.add_attribute("Px", "19073001.840000"); // 2
      CmplxEvnt_56_set.insert("19073001.840000");
      CmplxEvnt_56.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_56_set.insert("2");
      CmplxEvnt_56.add_attribute("PxBndryPrcsn", "1710937.630000"); // 2
      CmplxEvnt_56_set.insert("1710937.630000");
      CmplxEvnt_56.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_56_set.insert("3");
      CmplxEvnt_56.add_attribute("Cond", "2"); // 2
      CmplxEvnt_56_set.insert("2");
      all_values.push_back(CmplxEvnt_56_set);
      all_compo_names.insert("CmplxEvnt_56_set");

      {
        xml_element EvntDts_56{"EvntDts"};
        multiset<string> EvntDts_56_set;
        EvntDts_56.add_attribute("StartDt", "ComplexEventStartDate_t_2098696235"); // 3
        EvntDts_56_set.insert("ComplexEventStartDate_t_2098696235");
        EvntDts_56.add_attribute("EndDt", "ComplexEventEndDate_t_2012131655"); // 3
        EvntDts_56_set.insert("ComplexEventEndDate_t_2012131655");
        all_values.push_back(EvntDts_56_set);
        all_compo_names.insert("EvntDts_56_set");

        {
          xml_element EvntTms_56{"EvntTms"};
          multiset<string> EvntTms_56_set;
          EvntTms_56.add_attribute("StartTm", "1395990304"); // 4
          EvntTms_56_set.insert("1395990304");
          EvntTms_56.add_attribute("EndTm", "1644144218"); // 4
          EvntTms_56_set.insert("1644144218");
          all_values.push_back(EvntTms_56_set);
          all_compo_names.insert("EvntTms_56_set");

          EvntDts_56.add_element(EvntTms_56);
        }
        CmplxEvnt_56.add_element(EvntDts_56);
      }
      Instrmt_56.add_element(CmplxEvnt_56);
    }
    elt.add_element(Instrmt_56);
  } // end Instrmt
  { // Leg
    xml_element Leg_59{"Leg"};
    multiset<string> Leg_59_set;
    Leg_59.add_attribute("Sym", "LegSymbol_t_45101053"); // 1
    Leg_59_set.insert("LegSymbol_t_45101053");
    Leg_59.add_attribute("Sfx", "CD"); // 1
    Leg_59_set.insert("CD");
    Leg_59.add_attribute("ID", "LegSecurityID_t_1306414162"); // 1
    Leg_59_set.insert("LegSecurityID_t_1306414162");
    Leg_59.add_attribute("Src", "8"); // 1
    Leg_59_set.insert("8");
    Leg_59.add_attribute("Prod", "5"); // 1
    Leg_59_set.insert("5");
    Leg_59.add_attribute("CFI", "LegCFICode_t_1209168399"); // 1
    Leg_59_set.insert("LegCFICode_t_1209168399");
    Leg_59.add_attribute("SecTyp", "RETIRED"); // 1
    Leg_59_set.insert("RETIRED");
    Leg_59.add_attribute("SecSubTyp", "LegSecuritySubType_t_346441720"); // 1
    Leg_59_set.insert("LegSecuritySubType_t_346441720");
    Leg_59.add_attribute("MMY", "1933352295"); // 1
    Leg_59_set.insert("1933352295");
    Leg_59.add_attribute("Mat", "LegMaturityDate_t_1012605560"); // 1
    Leg_59_set.insert("LegMaturityDate_t_1012605560");
    Leg_59.add_attribute("MatTm", "1673836408"); // 1
    Leg_59_set.insert("1673836408");
    Leg_59.add_attribute("CpnPmt", "LegCouponPaymentDate_t_233310864"); // 1
    Leg_59_set.insert("LegCouponPaymentDate_t_233310864");
    Leg_59.add_attribute("Issued", "LegIssueDate_t_183296727"); // 1
    Leg_59_set.insert("LegIssueDate_t_183296727");
    Leg_59.add_attribute("RepoCollSecTyp", "155058676"); // 1
    Leg_59_set.insert("155058676");
    Leg_59.add_attribute("RepoTrm", "1112474914"); // 1
    Leg_59_set.insert("1112474914");
    Leg_59.add_attribute("RepoRt", "6564438.720000"); // 1
    Leg_59_set.insert("6564438.720000");
    Leg_59.add_attribute("Fctr", "12596306.400000"); // 1
    Leg_59_set.insert("12596306.400000");
    Leg_59.add_attribute("CrdRtg", "LegCreditRating_t_159810910"); // 1
    Leg_59_set.insert("LegCreditRating_t_159810910");
    Leg_59.add_attribute("Rgstry", "LegInstrRegistry_t_1681500818"); // 1
    Leg_59_set.insert("LegInstrRegistry_t_1681500818");
    Leg_59.add_attribute("Ctry", "1845289074"); // 1
    Leg_59_set.insert("1845289074");
    Leg_59.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2057056352"); // 1
    Leg_59_set.insert("LegStateOrProvinceOfIssue_t_2057056352");
    Leg_59.add_attribute("Lcl", "LegLocaleOfIssue_t_1441317354"); // 1
    Leg_59_set.insert("LegLocaleOfIssue_t_1441317354");
    Leg_59.add_attribute("Redeem", "LegRedemptionDate_t_1567770587"); // 1
    Leg_59_set.insert("LegRedemptionDate_t_1567770587");
    Leg_59.add_attribute("Strk", "806664.670000"); // 1
    Leg_59_set.insert("806664.670000");
    Leg_59.add_attribute("StrkCcy", "JPY"); // 1
    Leg_59_set.insert("JPY");
    Leg_59.add_attribute("OptA", "31879054"); // 1
    Leg_59_set.insert("31879054");
    Leg_59.add_attribute("Cmult", "807232.890000"); // 1
    Leg_59_set.insert("807232.890000");
    Leg_59.add_attribute("MultTyp", "2"); // 1
    Leg_59_set.insert("2");
    Leg_59.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_59_set.insert("3");
    Leg_59.add_attribute("UOM", "MWh"); // 1
    Leg_59_set.insert("MWh");
    Leg_59.add_attribute("UOMQty", "17688002.610000"); // 1
    Leg_59_set.insert("17688002.610000");
    Leg_59.add_attribute("PxUOM", "Gal"); // 1
    Leg_59_set.insert("Gal");
    Leg_59.add_attribute("PxUOMQty", "16160345.780000"); // 1
    Leg_59_set.insert("16160345.780000");
    Leg_59.add_attribute("TmUnit", "D"); // 1
    Leg_59_set.insert("D");
    Leg_59.add_attribute("ExerStyle", "0"); // 1
    Leg_59_set.insert("0");
    Leg_59.add_attribute("CpnRt", "6777193.290000"); // 1
    Leg_59_set.insert("6777193.290000");
    Leg_59.add_attribute("Exch", "LegSecurityExchange_t_2054685750"); // 1
    Leg_59_set.insert("LegSecurityExchange_t_2054685750");
    Leg_59.add_attribute("Issr", "LegIssuer_t_530013706"); // 1
    Leg_59_set.insert("LegIssuer_t_530013706");
    Leg_59.add_attribute("EncLegIssrLen", "463587977"); // 1
    Leg_59_set.insert("463587977");
    Leg_59.add_attribute("EncLegIssr", "EncodedLegIssuer_t_919807662"); // 1
    Leg_59_set.insert("EncodedLegIssuer_t_919807662");
    Leg_59.add_attribute("Desc", "LegSecurityDesc_t_56366467"); // 1
    Leg_59_set.insert("LegSecurityDesc_t_56366467");
    Leg_59.add_attribute("EncLegSecDescLen", "696898841"); // 1
    Leg_59_set.insert("696898841");
    Leg_59.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1103104389"); // 1
    Leg_59_set.insert("EncodedLegSecurityDesc_t_1103104389");
    Leg_59.add_attribute("RatioQty", "2114251.430000"); // 1
    Leg_59_set.insert("2114251.430000");
    Leg_59.add_attribute("Side", "C"); // 1
    Leg_59_set.insert("C");
    Leg_59.add_attribute("Ccy", "CAN"); // 1
    Leg_59_set.insert("CAN");
    Leg_59.add_attribute("Pool", "LegPool_t_1969184666"); // 1
    Leg_59_set.insert("LegPool_t_1969184666");
    Leg_59.add_attribute("Dated", "LegDatedDate_t_1293565431"); // 1
    Leg_59_set.insert("LegDatedDate_t_1293565431");
    Leg_59.add_attribute("CSetMo", "1168861209"); // 1
    Leg_59_set.insert("1168861209");
    Leg_59.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1878757370"); // 1
    Leg_59_set.insert("LegInterestAccrualDate_t_1878757370");
    Leg_59.add_attribute("PutCall", "587399137"); // 1
    Leg_59_set.insert("587399137");
    Leg_59.add_attribute("LegOptionRatio", "5891481.480000"); // 1
    Leg_59_set.insert("5891481.480000");
    Leg_59.add_attribute("Px", "19594238.370000"); // 1
    Leg_59_set.insert("19594238.370000");
    all_values.push_back(Leg_59_set);
    all_compo_names.insert("Leg_59_set");

    {
      xml_element LegAID_59{"LegAID"};
      multiset<string> LegAID_59_set;
      LegAID_59.add_attribute("SecAltID", "LegSecurityAltID_t_803474419"); // 2
      LegAID_59_set.insert("LegSecurityAltID_t_803474419");
      LegAID_59.add_attribute("SecAltIDSrc", "D"); // 2
      LegAID_59_set.insert("D");
      all_values.push_back(LegAID_59_set);
      all_compo_names.insert("LegAID_59_set");

      Leg_59.add_element(LegAID_59);
    }
    elt.add_element(Leg_59);
  } // end Leg
  { // Undly
    xml_element Undly_78{"Undly"};
    multiset<string> Undly_78_set;
    Undly_78.add_attribute("Sym", "UnderlyingSymbol_t_884197709"); // 1
    Undly_78_set.insert("UnderlyingSymbol_t_884197709");
    Undly_78.add_attribute("Sfx", "CD"); // 1
    Undly_78_set.insert("CD");
    Undly_78.add_attribute("ID", "UnderlyingSecurityID_t_1519842516"); // 1
    Undly_78_set.insert("UnderlyingSecurityID_t_1519842516");
    Undly_78.add_attribute("Src", "5"); // 1
    Undly_78_set.insert("5");
    Undly_78.add_attribute("Prod", "11"); // 1
    Undly_78_set.insert("11");
    Undly_78.add_attribute("CFI", "UnderlyingCFICode_t_457349297"); // 1
    Undly_78_set.insert("UnderlyingCFICode_t_457349297");
    Undly_78.add_attribute("SecTyp", "BUYSELL"); // 1
    Undly_78_set.insert("BUYSELL");
    Undly_78.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1560398584"); // 1
    Undly_78_set.insert("UnderlyingSecuritySubType_t_1560398584");
    Undly_78.add_attribute("MMY", "640921284"); // 1
    Undly_78_set.insert("640921284");
    Undly_78.add_attribute("Mat", "UnderlyingMaturityDate_t_1340088384"); // 1
    Undly_78_set.insert("UnderlyingMaturityDate_t_1340088384");
    Undly_78.add_attribute("MatTm", "1467600686"); // 1
    Undly_78_set.insert("1467600686");
    Undly_78.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1170934990"); // 1
    Undly_78_set.insert("UnderlyingCouponPaymentDate_t_1170934990");
    Undly_78.add_attribute("RestrctTyp", "MR"); // 1
    Undly_78_set.insert("MR");
    Undly_78.add_attribute("Snrty", "SD"); // 1
    Undly_78_set.insert("SD");
    Undly_78.add_attribute("NotlPctOut", "12273014.570000"); // 1
    Undly_78_set.insert("12273014.570000");
    Undly_78.add_attribute("OrigNotlPctOut", "3530915.540000"); // 1
    Undly_78_set.insert("3530915.540000");
    Undly_78.add_attribute("AttchPnt", "13430290.900000"); // 1
    Undly_78_set.insert("13430290.900000");
    Undly_78.add_attribute("DetchPnt", "14387266.000000"); // 1
    Undly_78_set.insert("14387266.000000");
    Undly_78.add_attribute("Issued", "UnderlyingIssueDate_t_14981661"); // 1
    Undly_78_set.insert("UnderlyingIssueDate_t_14981661");
    Undly_78.add_attribute("RepoCollSecTyp", "955093703"); // 1
    Undly_78_set.insert("955093703");
    Undly_78.add_attribute("RepoTrm", "762298735"); // 1
    Undly_78_set.insert("762298735");
    Undly_78.add_attribute("RepoRt", "19841663.270000"); // 1
    Undly_78_set.insert("19841663.270000");
    Undly_78.add_attribute("Fctr", "1011754.870000"); // 1
    Undly_78_set.insert("1011754.870000");
    Undly_78.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1931159944"); // 1
    Undly_78_set.insert("UnderlyingCreditRating_t_1931159944");
    Undly_78.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1715440049"); // 1
    Undly_78_set.insert("UnderlyingInstrRegistry_t_1715440049");
    Undly_78.add_attribute("Ctry", "688574624"); // 1
    Undly_78_set.insert("688574624");
    Undly_78.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_372824444"); // 1
    Undly_78_set.insert("UnderlyingStateOrProvinceOfIssue_t_372824444");
    Undly_78.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1527380238"); // 1
    Undly_78_set.insert("UnderlyingLocaleOfIssue_t_1527380238");
    Undly_78.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1492049044"); // 1
    Undly_78_set.insert("UnderlyingRedemptionDate_t_1492049044");
    Undly_78.add_attribute("StrkPx", "12896814.960000"); // 1
    Undly_78_set.insert("12896814.960000");
    Undly_78.add_attribute("StrkCcy", "EUR"); // 1
    Undly_78_set.insert("EUR");
    Undly_78.add_attribute("OptA", "1782754108"); // 1
    Undly_78_set.insert("1782754108");
    Undly_78.add_attribute("Mult", "7435583.500000"); // 1
    Undly_78_set.insert("7435583.500000");
    Undly_78.add_attribute("MultTyp", "0"); // 1
    Undly_78_set.insert("0");
    Undly_78.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_78_set.insert("4");
    Undly_78.add_attribute("UOM", "tn"); // 1
    Undly_78_set.insert("tn");
    Undly_78.add_attribute("UOMQty", "20849502.840000"); // 1
    Undly_78_set.insert("20849502.840000");
    Undly_78.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_78_set.insert("MMBtu");
    Undly_78.add_attribute("PxUOMQty", "18418289.320000"); // 1
    Undly_78_set.insert("18418289.320000");
    Undly_78.add_attribute("TmUnit", "S"); // 1
    Undly_78_set.insert("S");
    Undly_78.add_attribute("ExerStyle", "0"); // 1
    Undly_78_set.insert("0");
    Undly_78.add_attribute("CpnRt", "8652802.740000"); // 1
    Undly_78_set.insert("8652802.740000");
    Undly_78.add_attribute("Exch", "UnderlyingSecurityExchange_t_933747733"); // 1
    Undly_78_set.insert("UnderlyingSecurityExchange_t_933747733");
    Undly_78.add_attribute("Issr", "UnderlyingIssuer_t_870100008"); // 1
    Undly_78_set.insert("UnderlyingIssuer_t_870100008");
    Undly_78.add_attribute("EncUndIssrLen", "2092581732"); // 1
    Undly_78_set.insert("2092581732");
    Undly_78.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1286839287"); // 1
    Undly_78_set.insert("EncodedUnderlyingIssuer_t_1286839287");
    Undly_78.add_attribute("Desc", "UnderlyingSecurityDesc_t_65645450"); // 1
    Undly_78_set.insert("UnderlyingSecurityDesc_t_65645450");
    Undly_78.add_attribute("EncUndSecDescLen", "1383824684"); // 1
    Undly_78_set.insert("1383824684");
    Undly_78.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1301820948"); // 1
    Undly_78_set.insert("EncodedUnderlyingSecurityDesc_t_1301820948");
    Undly_78.add_attribute("CPPgm", "UnderlyingCPProgram_t_1020739154"); // 1
    Undly_78_set.insert("UnderlyingCPProgram_t_1020739154");
    Undly_78.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2146123420"); // 1
    Undly_78_set.insert("UnderlyingCPRegType_t_2146123420");
    Undly_78.add_attribute("AllocPct", "11385036.280000"); // 1
    Undly_78_set.insert("11385036.280000");
    Undly_78.add_attribute("Ccy", "USD"); // 1
    Undly_78_set.insert("USD");
    Undly_78.add_attribute("Qty", "7064600.290000"); // 1
    Undly_78_set.insert("7064600.290000");
    Undly_78.add_attribute("SettlTyp", "5"); // 1
    Undly_78_set.insert("5");
    Undly_78.add_attribute("CashAmt", "UnderlyingCashAmount_t_155140513"); // 1
    Undly_78_set.insert("UnderlyingCashAmount_t_155140513");
    Undly_78.add_attribute("CashTyp", "FIXED"); // 1
    Undly_78_set.insert("FIXED");
    Undly_78.add_attribute("Px", "11550546.610000"); // 1
    Undly_78_set.insert("11550546.610000");
    Undly_78.add_attribute("DirtPx", "14448220.090000"); // 1
    Undly_78_set.insert("14448220.090000");
    Undly_78.add_attribute("EndPx", "14575561.020000"); // 1
    Undly_78_set.insert("14575561.020000");
    Undly_78.add_attribute("StartVal", "UnderlyingStartValue_t_1383817766"); // 1
    Undly_78_set.insert("UnderlyingStartValue_t_1383817766");
    Undly_78.add_attribute("CurVal", "UnderlyingCurrentValue_t_1080092470"); // 1
    Undly_78_set.insert("UnderlyingCurrentValue_t_1080092470");
    Undly_78.add_attribute("EndVal", "UnderlyingEndValue_t_53630804"); // 1
    Undly_78_set.insert("UnderlyingEndValue_t_53630804");
    Undly_78.add_attribute("AdjQty", "6589153.480000"); // 1
    Undly_78_set.insert("6589153.480000");
    Undly_78.add_attribute("FxRate", "8297521.560000"); // 1
    Undly_78_set.insert("8297521.560000");
    Undly_78.add_attribute("FxRateCalc", "M"); // 1
    Undly_78_set.insert("M");
    Undly_78.add_attribute("CapValu", "UnderlyingCapValue_t_596381984"); // 1
    Undly_78_set.insert("UnderlyingCapValue_t_596381984");
    Undly_78.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2139810426"); // 1
    Undly_78_set.insert("UnderlyingSettlMethod_t_2139810426");
    Undly_78.add_attribute("PutCall", "948883736"); // 1
    Undly_78_set.insert("948883736");
    all_values.push_back(Undly_78_set);
    all_compo_names.insert("Undly_78_set");

    {
      xml_element UndAID_78{"UndAID"};
      multiset<string> UndAID_78_set;
      UndAID_78.add_attribute("AltID", "UnderlyingSecurityAltID_t_1873937004"); // 2
      UndAID_78_set.insert("UnderlyingSecurityAltID_t_1873937004");
      UndAID_78.add_attribute("AltIDSrc", "9"); // 2
      UndAID_78_set.insert("9");
      all_values.push_back(UndAID_78_set);
      all_compo_names.insert("UndAID_78_set");

      Undly_78.add_element(UndAID_78);
    }
    {
      xml_element Stip_116{"Stip"};
      multiset<string> Stip_116_set;
      Stip_116.add_attribute("Typ", "GEOG"); // 2
      Stip_116_set.insert("GEOG");
      Stip_116.add_attribute("Val", "UnderlyingStipValue_t_660201089"); // 2
      Stip_116_set.insert("UnderlyingStipValue_t_660201089");
      all_values.push_back(Stip_116_set);
      all_compo_names.insert("Stip_116_set");

      Undly_78.add_element(Stip_116);
    }
    {
      xml_element Pty_306{"Pty"};
      multiset<string> Pty_306_set;
      Pty_306.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1492602094"); // 2
      Pty_306_set.insert("UnderlyingInstrumentPartyID_t_1492602094");
      Pty_306.add_attribute("Src", "2"); // 2
      Pty_306_set.insert("2");
      Pty_306.add_attribute("R", "17"); // 2
      Pty_306_set.insert("17");
      all_values.push_back(Pty_306_set);
      all_compo_names.insert("Pty_306_set");

      {
        xml_element Sub_306{"Sub"};
        multiset<string> Sub_306_set;
        Sub_306.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1558247545"); // 3
        Sub_306_set.insert("UnderlyingInstrumentPartySubID_t_1558247545");
        Sub_306.add_attribute("Typ", "29"); // 3
        Sub_306_set.insert("29");
        all_values.push_back(Sub_306_set);
        all_compo_names.insert("Sub_306_set");

        Pty_306.add_element(Sub_306);
      }
      Undly_78.add_element(Pty_306);
    }
    elt.add_element(Undly_78);
  } // end Undly
  { // Undly
    xml_element Undly_79{"Undly"};
    multiset<string> Undly_79_set;
    Undly_79.add_attribute("Sym", "UnderlyingSymbol_t_1101377676"); // 1
    Undly_79_set.insert("UnderlyingSymbol_t_1101377676");
    Undly_79.add_attribute("Sfx", "WI"); // 1
    Undly_79_set.insert("WI");
    Undly_79.add_attribute("ID", "UnderlyingSecurityID_t_994242903"); // 1
    Undly_79_set.insert("UnderlyingSecurityID_t_994242903");
    Undly_79.add_attribute("Src", "B"); // 1
    Undly_79_set.insert("B");
    Undly_79.add_attribute("Prod", "5"); // 1
    Undly_79_set.insert("5");
    Undly_79.add_attribute("CFI", "UnderlyingCFICode_t_776558972"); // 1
    Undly_79_set.insert("UnderlyingCFICode_t_776558972");
    Undly_79.add_attribute("SecTyp", "MT"); // 1
    Undly_79_set.insert("MT");
    Undly_79.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1216423309"); // 1
    Undly_79_set.insert("UnderlyingSecuritySubType_t_1216423309");
    Undly_79.add_attribute("MMY", "931699485"); // 1
    Undly_79_set.insert("931699485");
    Undly_79.add_attribute("Mat", "UnderlyingMaturityDate_t_885214306"); // 1
    Undly_79_set.insert("UnderlyingMaturityDate_t_885214306");
    Undly_79.add_attribute("MatTm", "223994323"); // 1
    Undly_79_set.insert("223994323");
    Undly_79.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_229037846"); // 1
    Undly_79_set.insert("UnderlyingCouponPaymentDate_t_229037846");
    Undly_79.add_attribute("RestrctTyp", "FR"); // 1
    Undly_79_set.insert("FR");
    Undly_79.add_attribute("Snrty", "SD"); // 1
    Undly_79_set.insert("SD");
    Undly_79.add_attribute("NotlPctOut", "13091303.160000"); // 1
    Undly_79_set.insert("13091303.160000");
    Undly_79.add_attribute("OrigNotlPctOut", "2489175.640000"); // 1
    Undly_79_set.insert("2489175.640000");
    Undly_79.add_attribute("AttchPnt", "1192437.890000"); // 1
    Undly_79_set.insert("1192437.890000");
    Undly_79.add_attribute("DetchPnt", "21388824.720000"); // 1
    Undly_79_set.insert("21388824.720000");
    Undly_79.add_attribute("Issued", "UnderlyingIssueDate_t_1503456017"); // 1
    Undly_79_set.insert("UnderlyingIssueDate_t_1503456017");
    Undly_79.add_attribute("RepoCollSecTyp", "715625773"); // 1
    Undly_79_set.insert("715625773");
    Undly_79.add_attribute("RepoTrm", "2131209250"); // 1
    Undly_79_set.insert("2131209250");
    Undly_79.add_attribute("RepoRt", "3048561.050000"); // 1
    Undly_79_set.insert("3048561.050000");
    Undly_79.add_attribute("Fctr", "4420791.290000"); // 1
    Undly_79_set.insert("4420791.290000");
    Undly_79.add_attribute("CrdRtg", "UnderlyingCreditRating_t_606227688"); // 1
    Undly_79_set.insert("UnderlyingCreditRating_t_606227688");
    Undly_79.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2119020116"); // 1
    Undly_79_set.insert("UnderlyingInstrRegistry_t_2119020116");
    Undly_79.add_attribute("Ctry", "1102280218"); // 1
    Undly_79_set.insert("1102280218");
    Undly_79.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2098829783"); // 1
    Undly_79_set.insert("UnderlyingStateOrProvinceOfIssue_t_2098829783");
    Undly_79.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1730798563"); // 1
    Undly_79_set.insert("UnderlyingLocaleOfIssue_t_1730798563");
    Undly_79.add_attribute("Redeem", "UnderlyingRedemptionDate_t_901836946"); // 1
    Undly_79_set.insert("UnderlyingRedemptionDate_t_901836946");
    Undly_79.add_attribute("StrkPx", "15095936.800000"); // 1
    Undly_79_set.insert("15095936.800000");
    Undly_79.add_attribute("StrkCcy", "CAN"); // 1
    Undly_79_set.insert("CAN");
    Undly_79.add_attribute("OptA", "1941096731"); // 1
    Undly_79_set.insert("1941096731");
    Undly_79.add_attribute("Mult", "15731609.500000"); // 1
    Undly_79_set.insert("15731609.500000");
    Undly_79.add_attribute("MultTyp", "1"); // 1
    Undly_79_set.insert("1");
    Undly_79.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_79_set.insert("0");
    Undly_79.add_attribute("UOM", "MMbbl"); // 1
    Undly_79_set.insert("MMbbl");
    Undly_79.add_attribute("UOMQty", "7469863.170000"); // 1
    Undly_79_set.insert("7469863.170000");
    Undly_79.add_attribute("PxUOM", "Bu"); // 1
    Undly_79_set.insert("Bu");
    Undly_79.add_attribute("PxUOMQty", "11339357.590000"); // 1
    Undly_79_set.insert("11339357.590000");
    Undly_79.add_attribute("TmUnit", "Wk"); // 1
    Undly_79_set.insert("Wk");
    Undly_79.add_attribute("ExerStyle", "1"); // 1
    Undly_79_set.insert("1");
    Undly_79.add_attribute("CpnRt", "13629736.060000"); // 1
    Undly_79_set.insert("13629736.060000");
    Undly_79.add_attribute("Exch", "UnderlyingSecurityExchange_t_1827487383"); // 1
    Undly_79_set.insert("UnderlyingSecurityExchange_t_1827487383");
    Undly_79.add_attribute("Issr", "UnderlyingIssuer_t_100293201"); // 1
    Undly_79_set.insert("UnderlyingIssuer_t_100293201");
    Undly_79.add_attribute("EncUndIssrLen", "524620274"); // 1
    Undly_79_set.insert("524620274");
    Undly_79.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2076404948"); // 1
    Undly_79_set.insert("EncodedUnderlyingIssuer_t_2076404948");
    Undly_79.add_attribute("Desc", "UnderlyingSecurityDesc_t_219536990"); // 1
    Undly_79_set.insert("UnderlyingSecurityDesc_t_219536990");
    Undly_79.add_attribute("EncUndSecDescLen", "516019099"); // 1
    Undly_79_set.insert("516019099");
    Undly_79.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1432377317"); // 1
    Undly_79_set.insert("EncodedUnderlyingSecurityDesc_t_1432377317");
    Undly_79.add_attribute("CPPgm", "UnderlyingCPProgram_t_935162764"); // 1
    Undly_79_set.insert("UnderlyingCPProgram_t_935162764");
    Undly_79.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_499744701"); // 1
    Undly_79_set.insert("UnderlyingCPRegType_t_499744701");
    Undly_79.add_attribute("AllocPct", "17372334.220000"); // 1
    Undly_79_set.insert("17372334.220000");
    Undly_79.add_attribute("Ccy", "JPY"); // 1
    Undly_79_set.insert("JPY");
    Undly_79.add_attribute("Qty", "17087698.910000"); // 1
    Undly_79_set.insert("17087698.910000");
    Undly_79.add_attribute("SettlTyp", "2"); // 1
    Undly_79_set.insert("2");
    Undly_79.add_attribute("CashAmt", "UnderlyingCashAmount_t_1057318525"); // 1
    Undly_79_set.insert("UnderlyingCashAmount_t_1057318525");
    Undly_79.add_attribute("CashTyp", "FIXED"); // 1
    Undly_79_set.insert("FIXED");
    Undly_79.add_attribute("Px", "12338754.100000"); // 1
    Undly_79_set.insert("12338754.100000");
    Undly_79.add_attribute("DirtPx", "4194285.570000"); // 1
    Undly_79_set.insert("4194285.570000");
    Undly_79.add_attribute("EndPx", "18710028.530000"); // 1
    Undly_79_set.insert("18710028.530000");
    Undly_79.add_attribute("StartVal", "UnderlyingStartValue_t_1089606385"); // 1
    Undly_79_set.insert("UnderlyingStartValue_t_1089606385");
    Undly_79.add_attribute("CurVal", "UnderlyingCurrentValue_t_213041640"); // 1
    Undly_79_set.insert("UnderlyingCurrentValue_t_213041640");
    Undly_79.add_attribute("EndVal", "UnderlyingEndValue_t_1296680156"); // 1
    Undly_79_set.insert("UnderlyingEndValue_t_1296680156");
    Undly_79.add_attribute("AdjQty", "10377350.170000"); // 1
    Undly_79_set.insert("10377350.170000");
    Undly_79.add_attribute("FxRate", "15600724.150000"); // 1
    Undly_79_set.insert("15600724.150000");
    Undly_79.add_attribute("FxRateCalc", "M"); // 1
    Undly_79_set.insert("M");
    Undly_79.add_attribute("CapValu", "UnderlyingCapValue_t_1784721334"); // 1
    Undly_79_set.insert("UnderlyingCapValue_t_1784721334");
    Undly_79.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1976042851"); // 1
    Undly_79_set.insert("UnderlyingSettlMethod_t_1976042851");
    Undly_79.add_attribute("PutCall", "485368542"); // 1
    Undly_79_set.insert("485368542");
    all_values.push_back(Undly_79_set);
    all_compo_names.insert("Undly_79_set");

    {
      xml_element UndAID_79{"UndAID"};
      multiset<string> UndAID_79_set;
      UndAID_79.add_attribute("AltID", "UnderlyingSecurityAltID_t_1269438310"); // 2
      UndAID_79_set.insert("UnderlyingSecurityAltID_t_1269438310");
      UndAID_79.add_attribute("AltIDSrc", "I"); // 2
      UndAID_79_set.insert("I");
      all_values.push_back(UndAID_79_set);
      all_compo_names.insert("UndAID_79_set");

      Undly_79.add_element(UndAID_79);
    }
    {
      xml_element Stip_117{"Stip"};
      multiset<string> Stip_117_set;
      Stip_117.add_attribute("Typ", "AVAILQTY"); // 2
      Stip_117_set.insert("AVAILQTY");
      Stip_117.add_attribute("Val", "UnderlyingStipValue_t_949442045"); // 2
      Stip_117_set.insert("UnderlyingStipValue_t_949442045");
      all_values.push_back(Stip_117_set);
      all_compo_names.insert("Stip_117_set");

      Undly_79.add_element(Stip_117);
    }
    {
      xml_element Pty_307{"Pty"};
      multiset<string> Pty_307_set;
      Pty_307.add_attribute("ID", "UnderlyingInstrumentPartyID_t_568817164"); // 2
      Pty_307_set.insert("UnderlyingInstrumentPartyID_t_568817164");
      Pty_307.add_attribute("Src", "B"); // 2
      Pty_307_set.insert("B");
      Pty_307.add_attribute("R", "44"); // 2
      Pty_307_set.insert("44");
      all_values.push_back(Pty_307_set);
      all_compo_names.insert("Pty_307_set");

      {
        xml_element Sub_307{"Sub"};
        multiset<string> Sub_307_set;
        Sub_307.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_788354154"); // 3
        Sub_307_set.insert("UnderlyingInstrumentPartySubID_t_788354154");
        Sub_307.add_attribute("Typ", "25"); // 3
        Sub_307_set.insert("25");
        all_values.push_back(Sub_307_set);
        all_compo_names.insert("Sub_307_set");

        Pty_307.add_element(Sub_307);
      }
      Undly_79.add_element(Pty_307);
    }
    elt.add_element(Undly_79);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_20{"TrdSes"};
    multiset<string> TrdSes_20_set;
    TrdSes_20.add_attribute("SesID", "5"); // 1
    TrdSes_20_set.insert("5");
    TrdSes_20.add_attribute("SesSub", "7"); // 1
    TrdSes_20_set.insert("7");
    all_values.push_back(TrdSes_20_set);
    all_compo_names.insert("TrdSes_20_set");

    elt.add_element(TrdSes_20);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_21{"TrdSes"};
    multiset<string> TrdSes_21_set;
    TrdSes_21.add_attribute("SesID", "2"); // 1
    TrdSes_21_set.insert("2");
    TrdSes_21.add_attribute("SesSub", "3"); // 1
    TrdSes_21_set.insert("3");
    all_values.push_back(TrdSes_21_set);
    all_compo_names.insert("TrdSes_21_set");

    elt.add_element(TrdSes_21);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_22{"TrdSes"};
    multiset<string> TrdSes_22_set;
    TrdSes_22.add_attribute("SesID", "6"); // 1
    TrdSes_22_set.insert("6");
    TrdSes_22.add_attribute("SesSub", "1"); // 1
    TrdSes_22_set.insert("1");
    all_values.push_back(TrdSes_22_set);
    all_compo_names.insert("TrdSes_22_set");

    elt.add_element(TrdSes_22);
  } // end TrdSes
  { // Qty
    xml_element Qty_9{"Qty"};
    multiset<string> Qty_9_set;
    Qty_9.add_attribute("Typ", "TQ"); // 1
    Qty_9_set.insert("TQ");
    Qty_9.add_attribute("Long", "6063778.380000"); // 1
    Qty_9_set.insert("6063778.380000");
    Qty_9.add_attribute("Short", "3717053.900000"); // 1
    Qty_9_set.insert("3717053.900000");
    Qty_9.add_attribute("Stat", "0"); // 1
    Qty_9_set.insert("0");
    Qty_9.add_attribute("QtyDt", "QuantityDate_t_329897044"); // 1
    Qty_9_set.insert("QuantityDate_t_329897044");
    all_values.push_back(Qty_9_set);
    all_compo_names.insert("Qty_9_set");

    {
      xml_element Pty_308{"Pty"};
      multiset<string> Pty_308_set;
      Pty_308.add_attribute("ID", "NestedPartyID_t_1461311776"); // 2
      Pty_308_set.insert("NestedPartyID_t_1461311776");
      Pty_308.add_attribute("Src", "A"); // 2
      Pty_308_set.insert("A");
      Pty_308.add_attribute("R", "32"); // 2
      Pty_308_set.insert("32");
      all_values.push_back(Pty_308_set);
      all_compo_names.insert("Pty_308_set");

      {
        xml_element Sub_308{"Sub"};
        multiset<string> Sub_308_set;
        Sub_308.add_attribute("ID", "NestedPartySubID_t_351563145"); // 3
        Sub_308_set.insert("NestedPartySubID_t_351563145");
        Sub_308.add_attribute("Typ", "4"); // 3
        Sub_308_set.insert("4");
        all_values.push_back(Sub_308_set);
        all_compo_names.insert("Sub_308_set");

        Pty_308.add_element(Sub_308);
      }
      Qty_9.add_element(Pty_308);
    }
    elt.add_element(Qty_9);
  } // end Qty
  { // Amt
    xml_element Amt_13{"Amt"};
    multiset<string> Amt_13_set;
    Amt_13.add_attribute("Typ", "CRES"); // 1
    Amt_13_set.insert("CRES");
    Amt_13.add_attribute("Amt", "PosAmt_t_1130668009"); // 1
    Amt_13_set.insert("PosAmt_t_1130668009");
    Amt_13.add_attribute("Ccy", "PositionCurrency_t_1463378524"); // 1
    Amt_13_set.insert("PositionCurrency_t_1463378524");
    all_values.push_back(Amt_13_set);
    all_compo_names.insert("Amt_13_set");

    elt.add_element(Amt_13);
  } // end Amt
  { // Amt
    xml_element Amt_14{"Amt"};
    multiset<string> Amt_14_set;
    Amt_14.add_attribute("Typ", "ICPN"); // 1
    Amt_14_set.insert("ICPN");
    Amt_14.add_attribute("Amt", "PosAmt_t_1599191972"); // 1
    Amt_14_set.insert("PosAmt_t_1599191972");
    Amt_14.add_attribute("Ccy", "PositionCurrency_t_1164237024"); // 1
    Amt_14_set.insert("PositionCurrency_t_1164237024");
    all_values.push_back(Amt_14_set);
    all_compo_names.insert("Amt_14_set");

    elt.add_element(Amt_14);
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
