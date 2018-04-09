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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"PosMntReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> PositionMaintenanceRequest_message_t_0;
  elt.add_attribute("ReqID", "PosReqID_t_873917096"); // 0
  PositionMaintenanceRequest_message_t_0.insert("PosReqID_t_873917096");
  elt.add_attribute("TxnTyp", "1"); // 0
  PositionMaintenanceRequest_message_t_0.insert("1");
  elt.add_attribute("Actn", "3"); // 0
  PositionMaintenanceRequest_message_t_0.insert("3");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_2095074253"); // 0
  PositionMaintenanceRequest_message_t_0.insert("OrigPosReqRefID_t_2095074253");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_350085495"); // 0
  PositionMaintenanceRequest_message_t_0.insert("PosMaintRptRefID_t_350085495");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_888475368"); // 0
  PositionMaintenanceRequest_message_t_0.insert("ClearingBusinessDate_t_888475368");
  elt.add_attribute("SetSesID", "EOD"); // 0
  PositionMaintenanceRequest_message_t_0.insert("EOD");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_1537565803"); // 0
  PositionMaintenanceRequest_message_t_0.insert("SettlSessSubID_t_1537565803");
  elt.add_attribute("Acct", "Account_t_1699659836"); // 0
  PositionMaintenanceRequest_message_t_0.insert("Account_t_1699659836");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  PositionMaintenanceRequest_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "7"); // 0
  PositionMaintenanceRequest_message_t_0.insert("7");
  elt.add_attribute("Ccy", "GBP"); // 0
  PositionMaintenanceRequest_message_t_0.insert("GBP");
  elt.add_attribute("TxnTm", "TransactTime_t_72559784"); // 0
  PositionMaintenanceRequest_message_t_0.insert("TransactTime_t_72559784");
  elt.add_attribute("AdjTyp", "3"); // 0
  PositionMaintenanceRequest_message_t_0.insert("3");
  elt.add_attribute("CntraryInstrctnInd", "true"); // 0
  PositionMaintenanceRequest_message_t_0.insert("true");
  elt.add_attribute("PriorSpreadInd", "true"); // 0
  PositionMaintenanceRequest_message_t_0.insert("true");
  elt.add_attribute("ThresholdAmt", "17207290.530000"); // 0
  PositionMaintenanceRequest_message_t_0.insert("17207290.530000");
  elt.add_attribute("Txt", "Text_t_1971866051"); // 0
  PositionMaintenanceRequest_message_t_0.insert("Text_t_1971866051");
  elt.add_attribute("EncTxtLen", "1043280864"); // 0
  PositionMaintenanceRequest_message_t_0.insert("1043280864");
  elt.add_attribute("EncTxt", "EncodedText_t_1605126420"); // 0
  PositionMaintenanceRequest_message_t_0.insert("EncodedText_t_1605126420");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  PositionMaintenanceRequest_message_t_0.insert("JPY");
  all_values.push_back(PositionMaintenanceRequest_message_t_0);
  all_compo_names.insert("PositionMaintenanceRequest_message_t");

  { // Hdr
    xml_element Hdr_66{"Hdr"};
    multiset<string> Hdr_66_set;
    Hdr_66.add_attribute("SeqNum", "887833164"); // 1
    Hdr_66_set.insert("887833164");
    Hdr_66.add_attribute("SID", "SenderCompID_t_1134931589"); // 1
    Hdr_66_set.insert("SenderCompID_t_1134931589");
    Hdr_66.add_attribute("TID", "TargetCompID_t_1294055160"); // 1
    Hdr_66_set.insert("TargetCompID_t_1294055160");
    Hdr_66.add_attribute("OBID", "OnBehalfOfCompID_t_1440895283"); // 1
    Hdr_66_set.insert("OnBehalfOfCompID_t_1440895283");
    Hdr_66.add_attribute("D2ID", "DeliverToCompID_t_1383981963"); // 1
    Hdr_66_set.insert("DeliverToCompID_t_1383981963");
    Hdr_66.add_attribute("SSub", "SenderSubID_t_240792323"); // 1
    Hdr_66_set.insert("SenderSubID_t_240792323");
    Hdr_66.add_attribute("SLoc", "SenderLocationID_t_792957507"); // 1
    Hdr_66_set.insert("SenderLocationID_t_792957507");
    Hdr_66.add_attribute("TSub", "TargetSubID_t_1197658243"); // 1
    Hdr_66_set.insert("TargetSubID_t_1197658243");
    Hdr_66.add_attribute("TLoc", "TargetLocationID_t_1114709419"); // 1
    Hdr_66_set.insert("TargetLocationID_t_1114709419");
    Hdr_66.add_attribute("OBSub", "OnBehalfOfSubID_t_788579983"); // 1
    Hdr_66_set.insert("OnBehalfOfSubID_t_788579983");
    Hdr_66.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1947792510"); // 1
    Hdr_66_set.insert("OnBehalfOfLocationID_t_1947792510");
    Hdr_66.add_attribute("D2Sub", "DeliverToSubID_t_1062300024"); // 1
    Hdr_66_set.insert("DeliverToSubID_t_1062300024");
    Hdr_66.add_attribute("D2Loc", "DeliverToLocationID_t_1138665478"); // 1
    Hdr_66_set.insert("DeliverToLocationID_t_1138665478");
    Hdr_66.add_attribute("PosDup", "N"); // 1
    Hdr_66_set.insert("N");
    Hdr_66.add_attribute("PosRsnd", "N"); // 1
    Hdr_66_set.insert("N");
    Hdr_66.add_attribute("Snt", "SendingTime_t_528747633"); // 1
    Hdr_66_set.insert("SendingTime_t_528747633");
    Hdr_66.add_attribute("OrigSnt", "OrigSendingTime_t_240960418"); // 1
    Hdr_66_set.insert("OrigSendingTime_t_240960418");
    Hdr_66.add_attribute("MsgEncd", "MessageEncoding_t_1108529303"); // 1
    Hdr_66_set.insert("MessageEncoding_t_1108529303");
    all_values.push_back(Hdr_66_set);
    all_compo_names.insert("Hdr_66_set");

    {
      xml_element Hop_66{"Hop"};
      multiset<string> Hop_66_set;
      Hop_66.add_attribute("ID", "HopCompID_t_354439964"); // 2
      Hop_66_set.insert("HopCompID_t_354439964");
      Hop_66.add_attribute("Ref", "700937041"); // 2
      Hop_66_set.insert("700937041");
      Hop_66.add_attribute("Snt", "HopSendingTime_t_1541784980"); // 2
      Hop_66_set.insert("HopSendingTime_t_1541784980");
      all_values.push_back(Hop_66_set);
      all_compo_names.insert("Hop_66_set");

      Hdr_66.add_element(Hop_66);
    }
    elt.add_element(Hdr_66);
  } // end Hdr
  { // Pty
    xml_element Pty_281{"Pty"};
    multiset<string> Pty_281_set;
    Pty_281.add_attribute("ID", "PartyID_t_173534777"); // 1
    Pty_281_set.insert("PartyID_t_173534777");
    Pty_281.add_attribute("Src", "5"); // 1
    Pty_281_set.insert("5");
    Pty_281.add_attribute("R", "67"); // 1
    Pty_281_set.insert("67");
    all_values.push_back(Pty_281_set);
    all_compo_names.insert("Pty_281_set");

    {
      xml_element Sub_281{"Sub"};
      multiset<string> Sub_281_set;
      Sub_281.add_attribute("ID", "PartySubID_t_1894263830"); // 2
      Sub_281_set.insert("PartySubID_t_1894263830");
      Sub_281.add_attribute("Typ", "13"); // 2
      Sub_281_set.insert("13");
      all_values.push_back(Sub_281_set);
      all_compo_names.insert("Sub_281_set");

      Pty_281.add_element(Sub_281);
    }
    elt.add_element(Pty_281);
  } // end Pty
  { // Pty
    xml_element Pty_282{"Pty"};
    multiset<string> Pty_282_set;
    Pty_282.add_attribute("ID", "PartyID_t_407239857"); // 1
    Pty_282_set.insert("PartyID_t_407239857");
    Pty_282.add_attribute("Src", "7"); // 1
    Pty_282_set.insert("7");
    Pty_282.add_attribute("R", "45"); // 1
    Pty_282_set.insert("45");
    all_values.push_back(Pty_282_set);
    all_compo_names.insert("Pty_282_set");

    {
      xml_element Sub_282{"Sub"};
      multiset<string> Sub_282_set;
      Sub_282.add_attribute("ID", "PartySubID_t_1651095079"); // 2
      Sub_282_set.insert("PartySubID_t_1651095079");
      Sub_282.add_attribute("Typ", "32"); // 2
      Sub_282_set.insert("32");
      all_values.push_back(Sub_282_set);
      all_compo_names.insert("Sub_282_set");

      Pty_282.add_element(Sub_282);
    }
    elt.add_element(Pty_282);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_54{"Instrmt"};
    multiset<string> Instrmt_54_set;
    Instrmt_54.add_attribute("Sym", "Symbol_t_1316602379"); // 1
    Instrmt_54_set.insert("Symbol_t_1316602379");
    Instrmt_54.add_attribute("Sfx", "CD"); // 1
    Instrmt_54_set.insert("CD");
    Instrmt_54.add_attribute("ID", "SecurityID_t_1533151402"); // 1
    Instrmt_54_set.insert("SecurityID_t_1533151402");
    Instrmt_54.add_attribute("Src", "F"); // 1
    Instrmt_54_set.insert("F");
    Instrmt_54.add_attribute("Prod", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("ProdCmplx", "ProductComplex_t_178625261"); // 1
    Instrmt_54_set.insert("ProductComplex_t_178625261");
    Instrmt_54.add_attribute("SecGrp", "SecurityGroup_t_1750758938"); // 1
    Instrmt_54_set.insert("SecurityGroup_t_1750758938");
    Instrmt_54.add_attribute("CFI", "CFICode_t_5684686"); // 1
    Instrmt_54_set.insert("CFICode_t_5684686");
    Instrmt_54.add_attribute("SecTyp", "TAN"); // 1
    Instrmt_54_set.insert("TAN");
    Instrmt_54.add_attribute("SubTyp", "SecuritySubType_t_1551067800"); // 1
    Instrmt_54_set.insert("SecuritySubType_t_1551067800");
    Instrmt_54.add_attribute("MMY", "1067984711"); // 1
    Instrmt_54_set.insert("1067984711");
    Instrmt_54.add_attribute("MatDt", "MaturityDate_t_2105870722"); // 1
    Instrmt_54_set.insert("MaturityDate_t_2105870722");
    Instrmt_54.add_attribute("MatTm", "92368382"); // 1
    Instrmt_54_set.insert("92368382");
    Instrmt_54.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_571678767"); // 1
    Instrmt_54_set.insert("SettleOnOpenFlag_t_571678767");
    Instrmt_54.add_attribute("AsgnMeth", "487134707"); // 1
    Instrmt_54_set.insert("487134707");
    Instrmt_54.add_attribute("Status", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("CpnPmt", "CouponPaymentDate_t_1680208070"); // 1
    Instrmt_54_set.insert("CouponPaymentDate_t_1680208070");
    Instrmt_54.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_54_set.insert("XR");
    Instrmt_54.add_attribute("Snrty", "SR"); // 1
    Instrmt_54_set.insert("SR");
    Instrmt_54.add_attribute("NotlPctOut", "10745094.020000"); // 1
    Instrmt_54_set.insert("10745094.020000");
    Instrmt_54.add_attribute("OrigNotlPctOut", "12685744.190000"); // 1
    Instrmt_54_set.insert("12685744.190000");
    Instrmt_54.add_attribute("AttchPnt", "12078006.180000"); // 1
    Instrmt_54_set.insert("12078006.180000");
    Instrmt_54.add_attribute("DetchPnt", "7313658.460000"); // 1
    Instrmt_54_set.insert("7313658.460000");
    Instrmt_54.add_attribute("Issued", "IssueDate_t_632533412"); // 1
    Instrmt_54_set.insert("IssueDate_t_632533412");
    Instrmt_54.add_attribute("RepoCollSecTyp", "954580801"); // 1
    Instrmt_54_set.insert("954580801");
    Instrmt_54.add_attribute("RepoTrm", "212604694"); // 1
    Instrmt_54_set.insert("212604694");
    Instrmt_54.add_attribute("RepoRt", "10397732.690000"); // 1
    Instrmt_54_set.insert("10397732.690000");
    Instrmt_54.add_attribute("Fctr", "1590037.550000"); // 1
    Instrmt_54_set.insert("1590037.550000");
    Instrmt_54.add_attribute("CrdRtg", "CreditRating_t_394275484"); // 1
    Instrmt_54_set.insert("CreditRating_t_394275484");
    Instrmt_54.add_attribute("Rgstry", "InstrRegistry_t_543384701"); // 1
    Instrmt_54_set.insert("InstrRegistry_t_543384701");
    Instrmt_54.add_attribute("IssuCtry", "251259874"); // 1
    Instrmt_54_set.insert("251259874");
    Instrmt_54.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1710877863"); // 1
    Instrmt_54_set.insert("StateOrProvinceOfIssue_t_1710877863");
    Instrmt_54.add_attribute("Lcl", "LocaleOfIssue_t_1341051293"); // 1
    Instrmt_54_set.insert("LocaleOfIssue_t_1341051293");
    Instrmt_54.add_attribute("Redeem", "RedemptionDate_t_1784411276"); // 1
    Instrmt_54_set.insert("RedemptionDate_t_1784411276");
    Instrmt_54.add_attribute("StrkPx", "1164949.090000"); // 1
    Instrmt_54_set.insert("1164949.090000");
    Instrmt_54.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_54_set.insert("EUR");
    Instrmt_54.add_attribute("StrkMult", "18672538.470000"); // 1
    Instrmt_54_set.insert("18672538.470000");
    Instrmt_54.add_attribute("StrkValu", "2377112.460000"); // 1
    Instrmt_54_set.insert("2377112.460000");
    Instrmt_54.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_54_set.insert("5");
    Instrmt_54.add_attribute("StrkPxBndryPrcsn", "13056959.570000"); // 1
    Instrmt_54_set.insert("13056959.570000");
    Instrmt_54.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_54_set.insert("4");
    Instrmt_54.add_attribute("OptAt", "1363206381"); // 1
    Instrmt_54_set.insert("1363206381");
    Instrmt_54.add_attribute("Mult", "18773747.240000"); // 1
    Instrmt_54_set.insert("18773747.240000");
    Instrmt_54.add_attribute("MultTyp", "0"); // 1
    Instrmt_54_set.insert("0");
    Instrmt_54.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("MinPxIncr", "14100991.470000"); // 1
    Instrmt_54_set.insert("14100991.470000");
    Instrmt_54.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2069854585"); // 1
    Instrmt_54_set.insert("MinPriceIncrementAmount_t_2069854585");
    Instrmt_54.add_attribute("UOM", "t"); // 1
    Instrmt_54_set.insert("t");
    Instrmt_54.add_attribute("UOMQty", "3371249.010000"); // 1
    Instrmt_54_set.insert("3371249.010000");
    Instrmt_54.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_54_set.insert("Gal");
    Instrmt_54.add_attribute("PxUOMQty", "17911179.930000"); // 1
    Instrmt_54_set.insert("17911179.930000");
    Instrmt_54.add_attribute("SettlMeth", "C"); // 1
    Instrmt_54_set.insert("C");
    Instrmt_54.add_attribute("ExerStyle", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_54_set.insert("3");
    Instrmt_54.add_attribute("OptPayAmt", "OptPayoutAmount_t_1281095442"); // 1
    Instrmt_54_set.insert("OptPayoutAmount_t_1281095442");
    Instrmt_54.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_54_set.insert("INT");
    Instrmt_54.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_54_set.insert("FUTDA");
    Instrmt_54.add_attribute("ListMeth", "0"); // 1
    Instrmt_54_set.insert("0");
    Instrmt_54.add_attribute("CapPx", "12591530.910000"); // 1
    Instrmt_54_set.insert("12591530.910000");
    Instrmt_54.add_attribute("FlrPx", "10084787.760000"); // 1
    Instrmt_54_set.insert("10084787.760000");
    Instrmt_54.add_attribute("PutCall", "1"); // 1
    Instrmt_54_set.insert("1");
    Instrmt_54.add_attribute("FlexInd", "true"); // 1
    Instrmt_54_set.insert("true");
    Instrmt_54.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_54_set.insert("true");
    Instrmt_54.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_54_set.insert("Wk");
    Instrmt_54.add_attribute("CpnRt", "6847472.960000"); // 1
    Instrmt_54_set.insert("6847472.960000");
    Instrmt_54.add_attribute("Exch", "SecurityExchange_t_460959293"); // 1
    Instrmt_54_set.insert("SecurityExchange_t_460959293");
    Instrmt_54.add_attribute("PosLmt", "1075030250"); // 1
    Instrmt_54_set.insert("1075030250");
    Instrmt_54.add_attribute("NTPosLmt", "922458543"); // 1
    Instrmt_54_set.insert("922458543");
    Instrmt_54.add_attribute("Issr", "Issuer_t_1243717426"); // 1
    Instrmt_54_set.insert("Issuer_t_1243717426");
    Instrmt_54.add_attribute("EncIssrLen", "198384601"); // 1
    Instrmt_54_set.insert("198384601");
    Instrmt_54.add_attribute("EncIssr", "EncodedIssuer_t_80670852"); // 1
    Instrmt_54_set.insert("EncodedIssuer_t_80670852");
    Instrmt_54.add_attribute("Desc", "SecurityDesc_t_1984862633"); // 1
    Instrmt_54_set.insert("SecurityDesc_t_1984862633");
    Instrmt_54.add_attribute("EncSecDescLen", "1561590983"); // 1
    Instrmt_54_set.insert("1561590983");
    Instrmt_54.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1958045577"); // 1
    Instrmt_54_set.insert("EncodedSecurityDesc_t_1958045577");
    Instrmt_54.add_attribute("Pool", "Pool_t_1065658899"); // 1
    Instrmt_54_set.insert("Pool_t_1065658899");
    Instrmt_54.add_attribute("CSetMo", "1110642516"); // 1
    Instrmt_54_set.insert("1110642516");
    Instrmt_54.add_attribute("CPPgm", "2"); // 1
    Instrmt_54_set.insert("2");
    Instrmt_54.add_attribute("CPRegT", "CPRegType_t_988029836"); // 1
    Instrmt_54_set.insert("CPRegType_t_988029836");
    Instrmt_54.add_attribute("Dated", "DatedDate_t_1693959891"); // 1
    Instrmt_54_set.insert("DatedDate_t_1693959891");
    Instrmt_54.add_attribute("IntAcrl", "InterestAccrualDate_t_1557785977"); // 1
    Instrmt_54_set.insert("InterestAccrualDate_t_1557785977");
    all_values.push_back(Instrmt_54_set);
    all_compo_names.insert("Instrmt_54_set");

    {
      xml_element AID_57{"AID"};
      multiset<string> AID_57_set;
      AID_57.add_attribute("AltID", "SecurityAltID_t_31491544"); // 2
      AID_57_set.insert("SecurityAltID_t_31491544");
      AID_57.add_attribute("AltIDSrc", "2"); // 2
      AID_57_set.insert("2");
      all_values.push_back(AID_57_set);
      all_compo_names.insert("AID_57_set");

      Instrmt_54.add_element(AID_57);
    }
    {
      xml_element SecXML_57{"SecXML"};
      multiset<string> SecXML_57_set;
      SecXML_57.add_attribute("Schema", "SecurityXMLSchema_t_478793077"); // 2
      SecXML_57_set.insert("SecurityXMLSchema_t_478793077");
      all_values.push_back(SecXML_57_set);
      all_compo_names.insert("SecXML_57_set");

      Instrmt_54.add_element(SecXML_57);
    }
    {
      xml_element Evnt_57{"Evnt"};
      multiset<string> Evnt_57_set;
      Evnt_57.add_attribute("EventTyp", "13"); // 2
      Evnt_57_set.insert("13");
      Evnt_57.add_attribute("Dt", "EventDate_t_1935809383"); // 2
      Evnt_57_set.insert("EventDate_t_1935809383");
      Evnt_57.add_attribute("Tm", "EventTime_t_1759888519"); // 2
      Evnt_57_set.insert("EventTime_t_1759888519");
      Evnt_57.add_attribute("Px", "4232550.560000"); // 2
      Evnt_57_set.insert("4232550.560000");
      Evnt_57.add_attribute("Txt", "EventText_t_545544637"); // 2
      Evnt_57_set.insert("EventText_t_545544637");
      all_values.push_back(Evnt_57_set);
      all_compo_names.insert("Evnt_57_set");

      Instrmt_54.add_element(Evnt_57);
    }
    {
      xml_element Pty_283{"Pty"};
      multiset<string> Pty_283_set;
      Pty_283.add_attribute("ID", "InstrumentPartyID_t_1287775797"); // 2
      Pty_283_set.insert("InstrumentPartyID_t_1287775797");
      Pty_283.add_attribute("Src", "6"); // 2
      Pty_283_set.insert("6");
      Pty_283.add_attribute("R", "63"); // 2
      Pty_283_set.insert("63");
      all_values.push_back(Pty_283_set);
      all_compo_names.insert("Pty_283_set");

      {
        xml_element Sub_283{"Sub"};
        multiset<string> Sub_283_set;
        Sub_283.add_attribute("ID", "InstrumentPartySubID_t_379057290"); // 3
        Sub_283_set.insert("InstrumentPartySubID_t_379057290");
        Sub_283.add_attribute("Typ", "18"); // 3
        Sub_283_set.insert("18");
        all_values.push_back(Sub_283_set);
        all_compo_names.insert("Sub_283_set");

        Pty_283.add_element(Sub_283);
      }
      Instrmt_54.add_element(Pty_283);
    }
    {
      xml_element CmplxEvnt_54{"CmplxEvnt"};
      multiset<string> CmplxEvnt_54_set;
      CmplxEvnt_54.add_attribute("Typ", "6"); // 2
      CmplxEvnt_54_set.insert("6");
      CmplxEvnt_54.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1734317341"); // 2
      CmplxEvnt_54_set.insert("ComplexOptPayoutAmount_t_1734317341");
      CmplxEvnt_54.add_attribute("Px", "6723925.320000"); // 2
      CmplxEvnt_54_set.insert("6723925.320000");
      CmplxEvnt_54.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_54_set.insert("3");
      CmplxEvnt_54.add_attribute("PxBndryPrcsn", "6618639.430000"); // 2
      CmplxEvnt_54_set.insert("6618639.430000");
      CmplxEvnt_54.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_54_set.insert("1");
      CmplxEvnt_54.add_attribute("Cond", "1"); // 2
      CmplxEvnt_54_set.insert("1");
      all_values.push_back(CmplxEvnt_54_set);
      all_compo_names.insert("CmplxEvnt_54_set");

      {
        xml_element EvntDts_54{"EvntDts"};
        multiset<string> EvntDts_54_set;
        EvntDts_54.add_attribute("StartDt", "ComplexEventStartDate_t_860248544"); // 3
        EvntDts_54_set.insert("ComplexEventStartDate_t_860248544");
        EvntDts_54.add_attribute("EndDt", "ComplexEventEndDate_t_1675521928"); // 3
        EvntDts_54_set.insert("ComplexEventEndDate_t_1675521928");
        all_values.push_back(EvntDts_54_set);
        all_compo_names.insert("EvntDts_54_set");

        {
          xml_element EvntTms_54{"EvntTms"};
          multiset<string> EvntTms_54_set;
          EvntTms_54.add_attribute("StartTm", "1594001873"); // 4
          EvntTms_54_set.insert("1594001873");
          EvntTms_54.add_attribute("EndTm", "274355879"); // 4
          EvntTms_54_set.insert("274355879");
          all_values.push_back(EvntTms_54_set);
          all_compo_names.insert("EvntTms_54_set");

          EvntDts_54.add_element(EvntTms_54);
        }
        CmplxEvnt_54.add_element(EvntDts_54);
      }
      Instrmt_54.add_element(CmplxEvnt_54);
    }
    elt.add_element(Instrmt_54);
  } // end Instrmt
  { // Leg
    xml_element Leg_59{"Leg"};
    multiset<string> Leg_59_set;
    Leg_59.add_attribute("Sym", "LegSymbol_t_512177124"); // 1
    Leg_59_set.insert("LegSymbol_t_512177124");
    Leg_59.add_attribute("Sfx", "CD"); // 1
    Leg_59_set.insert("CD");
    Leg_59.add_attribute("ID", "LegSecurityID_t_559261285"); // 1
    Leg_59_set.insert("LegSecurityID_t_559261285");
    Leg_59.add_attribute("Src", "B"); // 1
    Leg_59_set.insert("B");
    Leg_59.add_attribute("Prod", "13"); // 1
    Leg_59_set.insert("13");
    Leg_59.add_attribute("CFI", "LegCFICode_t_2117047262"); // 1
    Leg_59_set.insert("LegCFICode_t_2117047262");
    Leg_59.add_attribute("SecTyp", "YCD"); // 1
    Leg_59_set.insert("YCD");
    Leg_59.add_attribute("SecSubTyp", "LegSecuritySubType_t_121585228"); // 1
    Leg_59_set.insert("LegSecuritySubType_t_121585228");
    Leg_59.add_attribute("MMY", "448356692"); // 1
    Leg_59_set.insert("448356692");
    Leg_59.add_attribute("Mat", "LegMaturityDate_t_1239185170"); // 1
    Leg_59_set.insert("LegMaturityDate_t_1239185170");
    Leg_59.add_attribute("MatTm", "2057394612"); // 1
    Leg_59_set.insert("2057394612");
    Leg_59.add_attribute("CpnPmt", "LegCouponPaymentDate_t_60761563"); // 1
    Leg_59_set.insert("LegCouponPaymentDate_t_60761563");
    Leg_59.add_attribute("Issued", "LegIssueDate_t_1662440226"); // 1
    Leg_59_set.insert("LegIssueDate_t_1662440226");
    Leg_59.add_attribute("RepoCollSecTyp", "455455601"); // 1
    Leg_59_set.insert("455455601");
    Leg_59.add_attribute("RepoTrm", "1348537361"); // 1
    Leg_59_set.insert("1348537361");
    Leg_59.add_attribute("RepoRt", "11973647.260000"); // 1
    Leg_59_set.insert("11973647.260000");
    Leg_59.add_attribute("Fctr", "20094790.150000"); // 1
    Leg_59_set.insert("20094790.150000");
    Leg_59.add_attribute("CrdRtg", "LegCreditRating_t_1727594651"); // 1
    Leg_59_set.insert("LegCreditRating_t_1727594651");
    Leg_59.add_attribute("Rgstry", "LegInstrRegistry_t_1185009962"); // 1
    Leg_59_set.insert("LegInstrRegistry_t_1185009962");
    Leg_59.add_attribute("Ctry", "2061425184"); // 1
    Leg_59_set.insert("2061425184");
    Leg_59.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1314428344"); // 1
    Leg_59_set.insert("LegStateOrProvinceOfIssue_t_1314428344");
    Leg_59.add_attribute("Lcl", "LegLocaleOfIssue_t_1857402494"); // 1
    Leg_59_set.insert("LegLocaleOfIssue_t_1857402494");
    Leg_59.add_attribute("Redeem", "LegRedemptionDate_t_426846999"); // 1
    Leg_59_set.insert("LegRedemptionDate_t_426846999");
    Leg_59.add_attribute("Strk", "19762922.870000"); // 1
    Leg_59_set.insert("19762922.870000");
    Leg_59.add_attribute("StrkCcy", "CHF"); // 1
    Leg_59_set.insert("CHF");
    Leg_59.add_attribute("OptA", "689057184"); // 1
    Leg_59_set.insert("689057184");
    Leg_59.add_attribute("Cmult", "8328082.020000"); // 1
    Leg_59_set.insert("8328082.020000");
    Leg_59.add_attribute("MultTyp", "0"); // 1
    Leg_59_set.insert("0");
    Leg_59.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_59_set.insert("3");
    Leg_59.add_attribute("UOM", "tn"); // 1
    Leg_59_set.insert("tn");
    Leg_59.add_attribute("UOMQty", "21421652.370000"); // 1
    Leg_59_set.insert("21421652.370000");
    Leg_59.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_59_set.insert("MMbbl");
    Leg_59.add_attribute("PxUOMQty", "7306696.960000"); // 1
    Leg_59_set.insert("7306696.960000");
    Leg_59.add_attribute("TmUnit", "Min"); // 1
    Leg_59_set.insert("Min");
    Leg_59.add_attribute("ExerStyle", "2"); // 1
    Leg_59_set.insert("2");
    Leg_59.add_attribute("CpnRt", "7002333.100000"); // 1
    Leg_59_set.insert("7002333.100000");
    Leg_59.add_attribute("Exch", "LegSecurityExchange_t_879103407"); // 1
    Leg_59_set.insert("LegSecurityExchange_t_879103407");
    Leg_59.add_attribute("Issr", "LegIssuer_t_1253987679"); // 1
    Leg_59_set.insert("LegIssuer_t_1253987679");
    Leg_59.add_attribute("EncLegIssrLen", "1148590002"); // 1
    Leg_59_set.insert("1148590002");
    Leg_59.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2118288577"); // 1
    Leg_59_set.insert("EncodedLegIssuer_t_2118288577");
    Leg_59.add_attribute("Desc", "LegSecurityDesc_t_1163898643"); // 1
    Leg_59_set.insert("LegSecurityDesc_t_1163898643");
    Leg_59.add_attribute("EncLegSecDescLen", "1209351566"); // 1
    Leg_59_set.insert("1209351566");
    Leg_59.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1633245156"); // 1
    Leg_59_set.insert("EncodedLegSecurityDesc_t_1633245156");
    Leg_59.add_attribute("RatioQty", "16193542.450000"); // 1
    Leg_59_set.insert("16193542.450000");
    Leg_59.add_attribute("Side", "G"); // 1
    Leg_59_set.insert("G");
    Leg_59.add_attribute("Ccy", "USD"); // 1
    Leg_59_set.insert("USD");
    Leg_59.add_attribute("Pool", "LegPool_t_2137999930"); // 1
    Leg_59_set.insert("LegPool_t_2137999930");
    Leg_59.add_attribute("Dated", "LegDatedDate_t_1868136196"); // 1
    Leg_59_set.insert("LegDatedDate_t_1868136196");
    Leg_59.add_attribute("CSetMo", "1395291148"); // 1
    Leg_59_set.insert("1395291148");
    Leg_59.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1304944627"); // 1
    Leg_59_set.insert("LegInterestAccrualDate_t_1304944627");
    Leg_59.add_attribute("PutCall", "1578055042"); // 1
    Leg_59_set.insert("1578055042");
    Leg_59.add_attribute("LegOptionRatio", "18221381.470000"); // 1
    Leg_59_set.insert("18221381.470000");
    Leg_59.add_attribute("Px", "11337532.660000"); // 1
    Leg_59_set.insert("11337532.660000");
    all_values.push_back(Leg_59_set);
    all_compo_names.insert("Leg_59_set");

    {
      xml_element LegAID_59{"LegAID"};
      multiset<string> LegAID_59_set;
      LegAID_59.add_attribute("SecAltID", "LegSecurityAltID_t_735341316"); // 2
      LegAID_59_set.insert("LegSecurityAltID_t_735341316");
      LegAID_59.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_59_set.insert("A");
      all_values.push_back(LegAID_59_set);
      all_compo_names.insert("LegAID_59_set");

      Leg_59.add_element(LegAID_59);
    }
    elt.add_element(Leg_59);
  } // end Leg
  { // Leg
    xml_element Leg_60{"Leg"};
    multiset<string> Leg_60_set;
    Leg_60.add_attribute("Sym", "LegSymbol_t_1822810450"); // 1
    Leg_60_set.insert("LegSymbol_t_1822810450");
    Leg_60.add_attribute("Sfx", "CD"); // 1
    Leg_60_set.insert("CD");
    Leg_60.add_attribute("ID", "LegSecurityID_t_1340628852"); // 1
    Leg_60_set.insert("LegSecurityID_t_1340628852");
    Leg_60.add_attribute("Src", "7"); // 1
    Leg_60_set.insert("7");
    Leg_60.add_attribute("Prod", "2"); // 1
    Leg_60_set.insert("2");
    Leg_60.add_attribute("CFI", "LegCFICode_t_1335310441"); // 1
    Leg_60_set.insert("LegCFICode_t_1335310441");
    Leg_60.add_attribute("SecTyp", "?"); // 1
    Leg_60_set.insert("?");
    Leg_60.add_attribute("SecSubTyp", "LegSecuritySubType_t_322743977"); // 1
    Leg_60_set.insert("LegSecuritySubType_t_322743977");
    Leg_60.add_attribute("MMY", "682715343"); // 1
    Leg_60_set.insert("682715343");
    Leg_60.add_attribute("Mat", "LegMaturityDate_t_1972070128"); // 1
    Leg_60_set.insert("LegMaturityDate_t_1972070128");
    Leg_60.add_attribute("MatTm", "1022977288"); // 1
    Leg_60_set.insert("1022977288");
    Leg_60.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1561818750"); // 1
    Leg_60_set.insert("LegCouponPaymentDate_t_1561818750");
    Leg_60.add_attribute("Issued", "LegIssueDate_t_1078574160"); // 1
    Leg_60_set.insert("LegIssueDate_t_1078574160");
    Leg_60.add_attribute("RepoCollSecTyp", "24083642"); // 1
    Leg_60_set.insert("24083642");
    Leg_60.add_attribute("RepoTrm", "1532623680"); // 1
    Leg_60_set.insert("1532623680");
    Leg_60.add_attribute("RepoRt", "949891.550000"); // 1
    Leg_60_set.insert("949891.550000");
    Leg_60.add_attribute("Fctr", "12334352.080000"); // 1
    Leg_60_set.insert("12334352.080000");
    Leg_60.add_attribute("CrdRtg", "LegCreditRating_t_1018385188"); // 1
    Leg_60_set.insert("LegCreditRating_t_1018385188");
    Leg_60.add_attribute("Rgstry", "LegInstrRegistry_t_1714343400"); // 1
    Leg_60_set.insert("LegInstrRegistry_t_1714343400");
    Leg_60.add_attribute("Ctry", "1643840487"); // 1
    Leg_60_set.insert("1643840487");
    Leg_60.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1701511422"); // 1
    Leg_60_set.insert("LegStateOrProvinceOfIssue_t_1701511422");
    Leg_60.add_attribute("Lcl", "LegLocaleOfIssue_t_1048209364"); // 1
    Leg_60_set.insert("LegLocaleOfIssue_t_1048209364");
    Leg_60.add_attribute("Redeem", "LegRedemptionDate_t_1634356770"); // 1
    Leg_60_set.insert("LegRedemptionDate_t_1634356770");
    Leg_60.add_attribute("Strk", "14221639.700000"); // 1
    Leg_60_set.insert("14221639.700000");
    Leg_60.add_attribute("StrkCcy", "CAN"); // 1
    Leg_60_set.insert("CAN");
    Leg_60.add_attribute("OptA", "852735364"); // 1
    Leg_60_set.insert("852735364");
    Leg_60.add_attribute("Cmult", "21181550.120000"); // 1
    Leg_60_set.insert("21181550.120000");
    Leg_60.add_attribute("MultTyp", "0"); // 1
    Leg_60_set.insert("0");
    Leg_60.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_60_set.insert("1");
    Leg_60.add_attribute("UOM", "Gal"); // 1
    Leg_60_set.insert("Gal");
    Leg_60.add_attribute("UOMQty", "16008978.180000"); // 1
    Leg_60_set.insert("16008978.180000");
    Leg_60.add_attribute("PxUOM", "Bu"); // 1
    Leg_60_set.insert("Bu");
    Leg_60.add_attribute("PxUOMQty", "10219409.550000"); // 1
    Leg_60_set.insert("10219409.550000");
    Leg_60.add_attribute("TmUnit", "H"); // 1
    Leg_60_set.insert("H");
    Leg_60.add_attribute("ExerStyle", "2"); // 1
    Leg_60_set.insert("2");
    Leg_60.add_attribute("CpnRt", "2097677.490000"); // 1
    Leg_60_set.insert("2097677.490000");
    Leg_60.add_attribute("Exch", "LegSecurityExchange_t_931821713"); // 1
    Leg_60_set.insert("LegSecurityExchange_t_931821713");
    Leg_60.add_attribute("Issr", "LegIssuer_t_923560810"); // 1
    Leg_60_set.insert("LegIssuer_t_923560810");
    Leg_60.add_attribute("EncLegIssrLen", "892483092"); // 1
    Leg_60_set.insert("892483092");
    Leg_60.add_attribute("EncLegIssr", "EncodedLegIssuer_t_756408194"); // 1
    Leg_60_set.insert("EncodedLegIssuer_t_756408194");
    Leg_60.add_attribute("Desc", "LegSecurityDesc_t_1946538098"); // 1
    Leg_60_set.insert("LegSecurityDesc_t_1946538098");
    Leg_60.add_attribute("EncLegSecDescLen", "306818195"); // 1
    Leg_60_set.insert("306818195");
    Leg_60.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1834982354"); // 1
    Leg_60_set.insert("EncodedLegSecurityDesc_t_1834982354");
    Leg_60.add_attribute("RatioQty", "19706217.410000"); // 1
    Leg_60_set.insert("19706217.410000");
    Leg_60.add_attribute("Side", "4"); // 1
    Leg_60_set.insert("4");
    Leg_60.add_attribute("Ccy", "EUR"); // 1
    Leg_60_set.insert("EUR");
    Leg_60.add_attribute("Pool", "LegPool_t_710343415"); // 1
    Leg_60_set.insert("LegPool_t_710343415");
    Leg_60.add_attribute("Dated", "LegDatedDate_t_1496831262"); // 1
    Leg_60_set.insert("LegDatedDate_t_1496831262");
    Leg_60.add_attribute("CSetMo", "552930141"); // 1
    Leg_60_set.insert("552930141");
    Leg_60.add_attribute("IntAcrl", "LegInterestAccrualDate_t_264371189"); // 1
    Leg_60_set.insert("LegInterestAccrualDate_t_264371189");
    Leg_60.add_attribute("PutCall", "397556978"); // 1
    Leg_60_set.insert("397556978");
    Leg_60.add_attribute("LegOptionRatio", "398032.630000"); // 1
    Leg_60_set.insert("398032.630000");
    Leg_60.add_attribute("Px", "16865351.590000"); // 1
    Leg_60_set.insert("16865351.590000");
    all_values.push_back(Leg_60_set);
    all_compo_names.insert("Leg_60_set");

    {
      xml_element LegAID_60{"LegAID"};
      multiset<string> LegAID_60_set;
      LegAID_60.add_attribute("SecAltID", "LegSecurityAltID_t_693573843"); // 2
      LegAID_60_set.insert("LegSecurityAltID_t_693573843");
      LegAID_60.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_60_set.insert("3");
      all_values.push_back(LegAID_60_set);
      all_compo_names.insert("LegAID_60_set");

      Leg_60.add_element(LegAID_60);
    }
    elt.add_element(Leg_60);
  } // end Leg
  { // Leg
    xml_element Leg_61{"Leg"};
    multiset<string> Leg_61_set;
    Leg_61.add_attribute("Sym", "LegSymbol_t_391786875"); // 1
    Leg_61_set.insert("LegSymbol_t_391786875");
    Leg_61.add_attribute("Sfx", "CD"); // 1
    Leg_61_set.insert("CD");
    Leg_61.add_attribute("ID", "LegSecurityID_t_609708379"); // 1
    Leg_61_set.insert("LegSecurityID_t_609708379");
    Leg_61.add_attribute("Src", "1"); // 1
    Leg_61_set.insert("1");
    Leg_61.add_attribute("Prod", "5"); // 1
    Leg_61_set.insert("5");
    Leg_61.add_attribute("CFI", "LegCFICode_t_63122549"); // 1
    Leg_61_set.insert("LegCFICode_t_63122549");
    Leg_61.add_attribute("SecTyp", "PFAND"); // 1
    Leg_61_set.insert("PFAND");
    Leg_61.add_attribute("SecSubTyp", "LegSecuritySubType_t_1367498267"); // 1
    Leg_61_set.insert("LegSecuritySubType_t_1367498267");
    Leg_61.add_attribute("MMY", "155276585"); // 1
    Leg_61_set.insert("155276585");
    Leg_61.add_attribute("Mat", "LegMaturityDate_t_1441939293"); // 1
    Leg_61_set.insert("LegMaturityDate_t_1441939293");
    Leg_61.add_attribute("MatTm", "1577266016"); // 1
    Leg_61_set.insert("1577266016");
    Leg_61.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1087098299"); // 1
    Leg_61_set.insert("LegCouponPaymentDate_t_1087098299");
    Leg_61.add_attribute("Issued", "LegIssueDate_t_218016455"); // 1
    Leg_61_set.insert("LegIssueDate_t_218016455");
    Leg_61.add_attribute("RepoCollSecTyp", "322265460"); // 1
    Leg_61_set.insert("322265460");
    Leg_61.add_attribute("RepoTrm", "1843506493"); // 1
    Leg_61_set.insert("1843506493");
    Leg_61.add_attribute("RepoRt", "170709.060000"); // 1
    Leg_61_set.insert("170709.060000");
    Leg_61.add_attribute("Fctr", "6290836.550000"); // 1
    Leg_61_set.insert("6290836.550000");
    Leg_61.add_attribute("CrdRtg", "LegCreditRating_t_1531005199"); // 1
    Leg_61_set.insert("LegCreditRating_t_1531005199");
    Leg_61.add_attribute("Rgstry", "LegInstrRegistry_t_1987692647"); // 1
    Leg_61_set.insert("LegInstrRegistry_t_1987692647");
    Leg_61.add_attribute("Ctry", "321041882"); // 1
    Leg_61_set.insert("321041882");
    Leg_61.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1313493060"); // 1
    Leg_61_set.insert("LegStateOrProvinceOfIssue_t_1313493060");
    Leg_61.add_attribute("Lcl", "LegLocaleOfIssue_t_896782300"); // 1
    Leg_61_set.insert("LegLocaleOfIssue_t_896782300");
    Leg_61.add_attribute("Redeem", "LegRedemptionDate_t_1031385297"); // 1
    Leg_61_set.insert("LegRedemptionDate_t_1031385297");
    Leg_61.add_attribute("Strk", "6628406.740000"); // 1
    Leg_61_set.insert("6628406.740000");
    Leg_61.add_attribute("StrkCcy", "GBP"); // 1
    Leg_61_set.insert("GBP");
    Leg_61.add_attribute("OptA", "1060397653"); // 1
    Leg_61_set.insert("1060397653");
    Leg_61.add_attribute("Cmult", "14895157.040000"); // 1
    Leg_61_set.insert("14895157.040000");
    Leg_61.add_attribute("MultTyp", "1"); // 1
    Leg_61_set.insert("1");
    Leg_61.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_61_set.insert("1");
    Leg_61.add_attribute("UOM", "t"); // 1
    Leg_61_set.insert("t");
    Leg_61.add_attribute("UOMQty", "12265948.730000"); // 1
    Leg_61_set.insert("12265948.730000");
    Leg_61.add_attribute("PxUOM", "USD"); // 1
    Leg_61_set.insert("USD");
    Leg_61.add_attribute("PxUOMQty", "7833614.480000"); // 1
    Leg_61_set.insert("7833614.480000");
    Leg_61.add_attribute("TmUnit", "Wk"); // 1
    Leg_61_set.insert("Wk");
    Leg_61.add_attribute("ExerStyle", "2"); // 1
    Leg_61_set.insert("2");
    Leg_61.add_attribute("CpnRt", "8464839.970000"); // 1
    Leg_61_set.insert("8464839.970000");
    Leg_61.add_attribute("Exch", "LegSecurityExchange_t_1900097241"); // 1
    Leg_61_set.insert("LegSecurityExchange_t_1900097241");
    Leg_61.add_attribute("Issr", "LegIssuer_t_1983788635"); // 1
    Leg_61_set.insert("LegIssuer_t_1983788635");
    Leg_61.add_attribute("EncLegIssrLen", "1001760583"); // 1
    Leg_61_set.insert("1001760583");
    Leg_61.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1194552886"); // 1
    Leg_61_set.insert("EncodedLegIssuer_t_1194552886");
    Leg_61.add_attribute("Desc", "LegSecurityDesc_t_1413571003"); // 1
    Leg_61_set.insert("LegSecurityDesc_t_1413571003");
    Leg_61.add_attribute("EncLegSecDescLen", "2088858882"); // 1
    Leg_61_set.insert("2088858882");
    Leg_61.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1412569342"); // 1
    Leg_61_set.insert("EncodedLegSecurityDesc_t_1412569342");
    Leg_61.add_attribute("RatioQty", "17358364.630000"); // 1
    Leg_61_set.insert("17358364.630000");
    Leg_61.add_attribute("Side", "G"); // 1
    Leg_61_set.insert("G");
    Leg_61.add_attribute("Ccy", "CAN"); // 1
    Leg_61_set.insert("CAN");
    Leg_61.add_attribute("Pool", "LegPool_t_1168403278"); // 1
    Leg_61_set.insert("LegPool_t_1168403278");
    Leg_61.add_attribute("Dated", "LegDatedDate_t_1269849247"); // 1
    Leg_61_set.insert("LegDatedDate_t_1269849247");
    Leg_61.add_attribute("CSetMo", "538478353"); // 1
    Leg_61_set.insert("538478353");
    Leg_61.add_attribute("IntAcrl", "LegInterestAccrualDate_t_334412690"); // 1
    Leg_61_set.insert("LegInterestAccrualDate_t_334412690");
    Leg_61.add_attribute("PutCall", "19147899"); // 1
    Leg_61_set.insert("19147899");
    Leg_61.add_attribute("LegOptionRatio", "15698636.510000"); // 1
    Leg_61_set.insert("15698636.510000");
    Leg_61.add_attribute("Px", "9972533.650000"); // 1
    Leg_61_set.insert("9972533.650000");
    all_values.push_back(Leg_61_set);
    all_compo_names.insert("Leg_61_set");

    {
      xml_element LegAID_61{"LegAID"};
      multiset<string> LegAID_61_set;
      LegAID_61.add_attribute("SecAltID", "LegSecurityAltID_t_1468860341"); // 2
      LegAID_61_set.insert("LegSecurityAltID_t_1468860341");
      LegAID_61.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_61_set.insert("G");
      all_values.push_back(LegAID_61_set);
      all_compo_names.insert("LegAID_61_set");

      Leg_61.add_element(LegAID_61);
    }
    elt.add_element(Leg_61);
  } // end Leg
  { // Undly
    xml_element Undly_73{"Undly"};
    multiset<string> Undly_73_set;
    Undly_73.add_attribute("Sym", "UnderlyingSymbol_t_810892397"); // 1
    Undly_73_set.insert("UnderlyingSymbol_t_810892397");
    Undly_73.add_attribute("Sfx", "WI"); // 1
    Undly_73_set.insert("WI");
    Undly_73.add_attribute("ID", "UnderlyingSecurityID_t_1664138866"); // 1
    Undly_73_set.insert("UnderlyingSecurityID_t_1664138866");
    Undly_73.add_attribute("Src", "F"); // 1
    Undly_73_set.insert("F");
    Undly_73.add_attribute("Prod", "11"); // 1
    Undly_73_set.insert("11");
    Undly_73.add_attribute("CFI", "UnderlyingCFICode_t_1934871923"); // 1
    Undly_73_set.insert("UnderlyingCFICode_t_1934871923");
    Undly_73.add_attribute("SecTyp", "FXFWD"); // 1
    Undly_73_set.insert("FXFWD");
    Undly_73.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1691030493"); // 1
    Undly_73_set.insert("UnderlyingSecuritySubType_t_1691030493");
    Undly_73.add_attribute("MMY", "403678643"); // 1
    Undly_73_set.insert("403678643");
    Undly_73.add_attribute("Mat", "UnderlyingMaturityDate_t_466907263"); // 1
    Undly_73_set.insert("UnderlyingMaturityDate_t_466907263");
    Undly_73.add_attribute("MatTm", "1443644087"); // 1
    Undly_73_set.insert("1443644087");
    Undly_73.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_239983630"); // 1
    Undly_73_set.insert("UnderlyingCouponPaymentDate_t_239983630");
    Undly_73.add_attribute("RestrctTyp", "MM"); // 1
    Undly_73_set.insert("MM");
    Undly_73.add_attribute("Snrty", "SR"); // 1
    Undly_73_set.insert("SR");
    Undly_73.add_attribute("NotlPctOut", "16535546.330000"); // 1
    Undly_73_set.insert("16535546.330000");
    Undly_73.add_attribute("OrigNotlPctOut", "14100430.800000"); // 1
    Undly_73_set.insert("14100430.800000");
    Undly_73.add_attribute("AttchPnt", "19032826.670000"); // 1
    Undly_73_set.insert("19032826.670000");
    Undly_73.add_attribute("DetchPnt", "12419074.480000"); // 1
    Undly_73_set.insert("12419074.480000");
    Undly_73.add_attribute("Issued", "UnderlyingIssueDate_t_1047441159"); // 1
    Undly_73_set.insert("UnderlyingIssueDate_t_1047441159");
    Undly_73.add_attribute("RepoCollSecTyp", "1185439267"); // 1
    Undly_73_set.insert("1185439267");
    Undly_73.add_attribute("RepoTrm", "1459343919"); // 1
    Undly_73_set.insert("1459343919");
    Undly_73.add_attribute("RepoRt", "683607.890000"); // 1
    Undly_73_set.insert("683607.890000");
    Undly_73.add_attribute("Fctr", "3078048.660000"); // 1
    Undly_73_set.insert("3078048.660000");
    Undly_73.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1997822273"); // 1
    Undly_73_set.insert("UnderlyingCreditRating_t_1997822273");
    Undly_73.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_402773480"); // 1
    Undly_73_set.insert("UnderlyingInstrRegistry_t_402773480");
    Undly_73.add_attribute("Ctry", "326952766"); // 1
    Undly_73_set.insert("326952766");
    Undly_73.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1420202276"); // 1
    Undly_73_set.insert("UnderlyingStateOrProvinceOfIssue_t_1420202276");
    Undly_73.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1400026845"); // 1
    Undly_73_set.insert("UnderlyingLocaleOfIssue_t_1400026845");
    Undly_73.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1795813107"); // 1
    Undly_73_set.insert("UnderlyingRedemptionDate_t_1795813107");
    Undly_73.add_attribute("StrkPx", "21383387.650000"); // 1
    Undly_73_set.insert("21383387.650000");
    Undly_73.add_attribute("StrkCcy", "USD"); // 1
    Undly_73_set.insert("USD");
    Undly_73.add_attribute("OptA", "1543799604"); // 1
    Undly_73_set.insert("1543799604");
    Undly_73.add_attribute("Mult", "8268494.330000"); // 1
    Undly_73_set.insert("8268494.330000");
    Undly_73.add_attribute("MultTyp", "0"); // 1
    Undly_73_set.insert("0");
    Undly_73.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_73_set.insert("3");
    Undly_73.add_attribute("UOM", "MMbbl"); // 1
    Undly_73_set.insert("MMbbl");
    Undly_73.add_attribute("UOMQty", "10641905.880000"); // 1
    Undly_73_set.insert("10641905.880000");
    Undly_73.add_attribute("PxUOM", "Bcf"); // 1
    Undly_73_set.insert("Bcf");
    Undly_73.add_attribute("PxUOMQty", "10179163.510000"); // 1
    Undly_73_set.insert("10179163.510000");
    Undly_73.add_attribute("TmUnit", "Wk"); // 1
    Undly_73_set.insert("Wk");
    Undly_73.add_attribute("ExerStyle", "0"); // 1
    Undly_73_set.insert("0");
    Undly_73.add_attribute("CpnRt", "12578999.810000"); // 1
    Undly_73_set.insert("12578999.810000");
    Undly_73.add_attribute("Exch", "UnderlyingSecurityExchange_t_852282050"); // 1
    Undly_73_set.insert("UnderlyingSecurityExchange_t_852282050");
    Undly_73.add_attribute("Issr", "UnderlyingIssuer_t_1506275926"); // 1
    Undly_73_set.insert("UnderlyingIssuer_t_1506275926");
    Undly_73.add_attribute("EncUndIssrLen", "763970966"); // 1
    Undly_73_set.insert("763970966");
    Undly_73.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_114841483"); // 1
    Undly_73_set.insert("EncodedUnderlyingIssuer_t_114841483");
    Undly_73.add_attribute("Desc", "UnderlyingSecurityDesc_t_1262074946"); // 1
    Undly_73_set.insert("UnderlyingSecurityDesc_t_1262074946");
    Undly_73.add_attribute("EncUndSecDescLen", "2005878415"); // 1
    Undly_73_set.insert("2005878415");
    Undly_73.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1162282642"); // 1
    Undly_73_set.insert("EncodedUnderlyingSecurityDesc_t_1162282642");
    Undly_73.add_attribute("CPPgm", "UnderlyingCPProgram_t_300030565"); // 1
    Undly_73_set.insert("UnderlyingCPProgram_t_300030565");
    Undly_73.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1317738686"); // 1
    Undly_73_set.insert("UnderlyingCPRegType_t_1317738686");
    Undly_73.add_attribute("AllocPct", "12306434.320000"); // 1
    Undly_73_set.insert("12306434.320000");
    Undly_73.add_attribute("Ccy", "CAN"); // 1
    Undly_73_set.insert("CAN");
    Undly_73.add_attribute("Qty", "16334169.120000"); // 1
    Undly_73_set.insert("16334169.120000");
    Undly_73.add_attribute("SettlTyp", "2"); // 1
    Undly_73_set.insert("2");
    Undly_73.add_attribute("CashAmt", "UnderlyingCashAmount_t_440795939"); // 1
    Undly_73_set.insert("UnderlyingCashAmount_t_440795939");
    Undly_73.add_attribute("CashTyp", "DIFF"); // 1
    Undly_73_set.insert("DIFF");
    Undly_73.add_attribute("Px", "5831176.570000"); // 1
    Undly_73_set.insert("5831176.570000");
    Undly_73.add_attribute("DirtPx", "4316510.570000"); // 1
    Undly_73_set.insert("4316510.570000");
    Undly_73.add_attribute("EndPx", "486706.760000"); // 1
    Undly_73_set.insert("486706.760000");
    Undly_73.add_attribute("StartVal", "UnderlyingStartValue_t_1042339513"); // 1
    Undly_73_set.insert("UnderlyingStartValue_t_1042339513");
    Undly_73.add_attribute("CurVal", "UnderlyingCurrentValue_t_1975450661"); // 1
    Undly_73_set.insert("UnderlyingCurrentValue_t_1975450661");
    Undly_73.add_attribute("EndVal", "UnderlyingEndValue_t_875520109"); // 1
    Undly_73_set.insert("UnderlyingEndValue_t_875520109");
    Undly_73.add_attribute("AdjQty", "3386231.880000"); // 1
    Undly_73_set.insert("3386231.880000");
    Undly_73.add_attribute("FxRate", "20038223.300000"); // 1
    Undly_73_set.insert("20038223.300000");
    Undly_73.add_attribute("FxRateCalc", "M"); // 1
    Undly_73_set.insert("M");
    Undly_73.add_attribute("CapValu", "UnderlyingCapValue_t_1402813776"); // 1
    Undly_73_set.insert("UnderlyingCapValue_t_1402813776");
    Undly_73.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1575740844"); // 1
    Undly_73_set.insert("UnderlyingSettlMethod_t_1575740844");
    Undly_73.add_attribute("PutCall", "360190521"); // 1
    Undly_73_set.insert("360190521");
    all_values.push_back(Undly_73_set);
    all_compo_names.insert("Undly_73_set");

    {
      xml_element UndAID_73{"UndAID"};
      multiset<string> UndAID_73_set;
      UndAID_73.add_attribute("AltID", "UnderlyingSecurityAltID_t_786427980"); // 2
      UndAID_73_set.insert("UnderlyingSecurityAltID_t_786427980");
      UndAID_73.add_attribute("AltIDSrc", "4"); // 2
      UndAID_73_set.insert("4");
      all_values.push_back(UndAID_73_set);
      all_compo_names.insert("UndAID_73_set");

      Undly_73.add_element(UndAID_73);
    }
    {
      xml_element Stip_110{"Stip"};
      multiset<string> Stip_110_set;
      Stip_110.add_attribute("Typ", "MAXSUBS"); // 2
      Stip_110_set.insert("MAXSUBS");
      Stip_110.add_attribute("Val", "UnderlyingStipValue_t_1638710031"); // 2
      Stip_110_set.insert("UnderlyingStipValue_t_1638710031");
      all_values.push_back(Stip_110_set);
      all_compo_names.insert("Stip_110_set");

      Undly_73.add_element(Stip_110);
    }
    {
      xml_element Pty_284{"Pty"};
      multiset<string> Pty_284_set;
      Pty_284.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1950095723"); // 2
      Pty_284_set.insert("UnderlyingInstrumentPartyID_t_1950095723");
      Pty_284.add_attribute("Src", "4"); // 2
      Pty_284_set.insert("4");
      Pty_284.add_attribute("R", "30"); // 2
      Pty_284_set.insert("30");
      all_values.push_back(Pty_284_set);
      all_compo_names.insert("Pty_284_set");

      {
        xml_element Sub_284{"Sub"};
        multiset<string> Sub_284_set;
        Sub_284.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1064687021"); // 3
        Sub_284_set.insert("UnderlyingInstrumentPartySubID_t_1064687021");
        Sub_284.add_attribute("Typ", "14"); // 3
        Sub_284_set.insert("14");
        all_values.push_back(Sub_284_set);
        all_compo_names.insert("Sub_284_set");

        Pty_284.add_element(Sub_284);
      }
      Undly_73.add_element(Pty_284);
    }
    elt.add_element(Undly_73);
  } // end Undly
  { // Undly
    xml_element Undly_74{"Undly"};
    multiset<string> Undly_74_set;
    Undly_74.add_attribute("Sym", "UnderlyingSymbol_t_768350508"); // 1
    Undly_74_set.insert("UnderlyingSymbol_t_768350508");
    Undly_74.add_attribute("Sfx", "WI"); // 1
    Undly_74_set.insert("WI");
    Undly_74.add_attribute("ID", "UnderlyingSecurityID_t_1410711275"); // 1
    Undly_74_set.insert("UnderlyingSecurityID_t_1410711275");
    Undly_74.add_attribute("Src", "K"); // 1
    Undly_74_set.insert("K");
    Undly_74.add_attribute("Prod", "5"); // 1
    Undly_74_set.insert("5");
    Undly_74.add_attribute("CFI", "UnderlyingCFICode_t_431304938"); // 1
    Undly_74_set.insert("UnderlyingCFICode_t_431304938");
    Undly_74.add_attribute("SecTyp", "IRS"); // 1
    Undly_74_set.insert("IRS");
    Undly_74.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_759857569"); // 1
    Undly_74_set.insert("UnderlyingSecuritySubType_t_759857569");
    Undly_74.add_attribute("MMY", "872100878"); // 1
    Undly_74_set.insert("872100878");
    Undly_74.add_attribute("Mat", "UnderlyingMaturityDate_t_223403665"); // 1
    Undly_74_set.insert("UnderlyingMaturityDate_t_223403665");
    Undly_74.add_attribute("MatTm", "1342975226"); // 1
    Undly_74_set.insert("1342975226");
    Undly_74.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1303751935"); // 1
    Undly_74_set.insert("UnderlyingCouponPaymentDate_t_1303751935");
    Undly_74.add_attribute("RestrctTyp", "MR"); // 1
    Undly_74_set.insert("MR");
    Undly_74.add_attribute("Snrty", "SR"); // 1
    Undly_74_set.insert("SR");
    Undly_74.add_attribute("NotlPctOut", "11317189.480000"); // 1
    Undly_74_set.insert("11317189.480000");
    Undly_74.add_attribute("OrigNotlPctOut", "11475944.510000"); // 1
    Undly_74_set.insert("11475944.510000");
    Undly_74.add_attribute("AttchPnt", "5764542.790000"); // 1
    Undly_74_set.insert("5764542.790000");
    Undly_74.add_attribute("DetchPnt", "9880576.300000"); // 1
    Undly_74_set.insert("9880576.300000");
    Undly_74.add_attribute("Issued", "UnderlyingIssueDate_t_489868621"); // 1
    Undly_74_set.insert("UnderlyingIssueDate_t_489868621");
    Undly_74.add_attribute("RepoCollSecTyp", "1979268056"); // 1
    Undly_74_set.insert("1979268056");
    Undly_74.add_attribute("RepoTrm", "416314826"); // 1
    Undly_74_set.insert("416314826");
    Undly_74.add_attribute("RepoRt", "8500591.420000"); // 1
    Undly_74_set.insert("8500591.420000");
    Undly_74.add_attribute("Fctr", "6182123.880000"); // 1
    Undly_74_set.insert("6182123.880000");
    Undly_74.add_attribute("CrdRtg", "UnderlyingCreditRating_t_860134623"); // 1
    Undly_74_set.insert("UnderlyingCreditRating_t_860134623");
    Undly_74.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_320665997"); // 1
    Undly_74_set.insert("UnderlyingInstrRegistry_t_320665997");
    Undly_74.add_attribute("Ctry", "109438771"); // 1
    Undly_74_set.insert("109438771");
    Undly_74.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_662746699"); // 1
    Undly_74_set.insert("UnderlyingStateOrProvinceOfIssue_t_662746699");
    Undly_74.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_555243819"); // 1
    Undly_74_set.insert("UnderlyingLocaleOfIssue_t_555243819");
    Undly_74.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1862990285"); // 1
    Undly_74_set.insert("UnderlyingRedemptionDate_t_1862990285");
    Undly_74.add_attribute("StrkPx", "17274337.200000"); // 1
    Undly_74_set.insert("17274337.200000");
    Undly_74.add_attribute("StrkCcy", "JPY"); // 1
    Undly_74_set.insert("JPY");
    Undly_74.add_attribute("OptA", "944667659"); // 1
    Undly_74_set.insert("944667659");
    Undly_74.add_attribute("Mult", "20589276.820000"); // 1
    Undly_74_set.insert("20589276.820000");
    Undly_74.add_attribute("MultTyp", "0"); // 1
    Undly_74_set.insert("0");
    Undly_74.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_74_set.insert("0");
    Undly_74.add_attribute("UOM", "oz_tr"); // 1
    Undly_74_set.insert("oz_tr");
    Undly_74.add_attribute("UOMQty", "18202946.430000"); // 1
    Undly_74_set.insert("18202946.430000");
    Undly_74.add_attribute("PxUOM", "MWh"); // 1
    Undly_74_set.insert("MWh");
    Undly_74.add_attribute("PxUOMQty", "12148498.510000"); // 1
    Undly_74_set.insert("12148498.510000");
    Undly_74.add_attribute("TmUnit", "Min"); // 1
    Undly_74_set.insert("Min");
    Undly_74.add_attribute("ExerStyle", "1"); // 1
    Undly_74_set.insert("1");
    Undly_74.add_attribute("CpnRt", "3711181.380000"); // 1
    Undly_74_set.insert("3711181.380000");
    Undly_74.add_attribute("Exch", "UnderlyingSecurityExchange_t_168289002"); // 1
    Undly_74_set.insert("UnderlyingSecurityExchange_t_168289002");
    Undly_74.add_attribute("Issr", "UnderlyingIssuer_t_962917269"); // 1
    Undly_74_set.insert("UnderlyingIssuer_t_962917269");
    Undly_74.add_attribute("EncUndIssrLen", "1502837086"); // 1
    Undly_74_set.insert("1502837086");
    Undly_74.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1315883453"); // 1
    Undly_74_set.insert("EncodedUnderlyingIssuer_t_1315883453");
    Undly_74.add_attribute("Desc", "UnderlyingSecurityDesc_t_1539371548"); // 1
    Undly_74_set.insert("UnderlyingSecurityDesc_t_1539371548");
    Undly_74.add_attribute("EncUndSecDescLen", "343411069"); // 1
    Undly_74_set.insert("343411069");
    Undly_74.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1805752074"); // 1
    Undly_74_set.insert("EncodedUnderlyingSecurityDesc_t_1805752074");
    Undly_74.add_attribute("CPPgm", "UnderlyingCPProgram_t_1371155956"); // 1
    Undly_74_set.insert("UnderlyingCPProgram_t_1371155956");
    Undly_74.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_759725895"); // 1
    Undly_74_set.insert("UnderlyingCPRegType_t_759725895");
    Undly_74.add_attribute("AllocPct", "5083275.680000"); // 1
    Undly_74_set.insert("5083275.680000");
    Undly_74.add_attribute("Ccy", "EUR"); // 1
    Undly_74_set.insert("EUR");
    Undly_74.add_attribute("Qty", "8289935.660000"); // 1
    Undly_74_set.insert("8289935.660000");
    Undly_74.add_attribute("SettlTyp", "2"); // 1
    Undly_74_set.insert("2");
    Undly_74.add_attribute("CashAmt", "UnderlyingCashAmount_t_135123570"); // 1
    Undly_74_set.insert("UnderlyingCashAmount_t_135123570");
    Undly_74.add_attribute("CashTyp", "DIFF"); // 1
    Undly_74_set.insert("DIFF");
    Undly_74.add_attribute("Px", "18143137.540000"); // 1
    Undly_74_set.insert("18143137.540000");
    Undly_74.add_attribute("DirtPx", "18625572.900000"); // 1
    Undly_74_set.insert("18625572.900000");
    Undly_74.add_attribute("EndPx", "20324537.920000"); // 1
    Undly_74_set.insert("20324537.920000");
    Undly_74.add_attribute("StartVal", "UnderlyingStartValue_t_150687252"); // 1
    Undly_74_set.insert("UnderlyingStartValue_t_150687252");
    Undly_74.add_attribute("CurVal", "UnderlyingCurrentValue_t_659741302"); // 1
    Undly_74_set.insert("UnderlyingCurrentValue_t_659741302");
    Undly_74.add_attribute("EndVal", "UnderlyingEndValue_t_1943897827"); // 1
    Undly_74_set.insert("UnderlyingEndValue_t_1943897827");
    Undly_74.add_attribute("AdjQty", "4860546.900000"); // 1
    Undly_74_set.insert("4860546.900000");
    Undly_74.add_attribute("FxRate", "14294783.320000"); // 1
    Undly_74_set.insert("14294783.320000");
    Undly_74.add_attribute("FxRateCalc", "M"); // 1
    Undly_74_set.insert("M");
    Undly_74.add_attribute("CapValu", "UnderlyingCapValue_t_158865685"); // 1
    Undly_74_set.insert("UnderlyingCapValue_t_158865685");
    Undly_74.add_attribute("SetMeth", "UnderlyingSettlMethod_t_811589284"); // 1
    Undly_74_set.insert("UnderlyingSettlMethod_t_811589284");
    Undly_74.add_attribute("PutCall", "1354013003"); // 1
    Undly_74_set.insert("1354013003");
    all_values.push_back(Undly_74_set);
    all_compo_names.insert("Undly_74_set");

    {
      xml_element UndAID_74{"UndAID"};
      multiset<string> UndAID_74_set;
      UndAID_74.add_attribute("AltID", "UnderlyingSecurityAltID_t_55080346"); // 2
      UndAID_74_set.insert("UnderlyingSecurityAltID_t_55080346");
      UndAID_74.add_attribute("AltIDSrc", "E"); // 2
      UndAID_74_set.insert("E");
      all_values.push_back(UndAID_74_set);
      all_compo_names.insert("UndAID_74_set");

      Undly_74.add_element(UndAID_74);
    }
    {
      xml_element Stip_111{"Stip"};
      multiset<string> Stip_111_set;
      Stip_111.add_attribute("Typ", "MAT"); // 2
      Stip_111_set.insert("MAT");
      Stip_111.add_attribute("Val", "UnderlyingStipValue_t_223369348"); // 2
      Stip_111_set.insert("UnderlyingStipValue_t_223369348");
      all_values.push_back(Stip_111_set);
      all_compo_names.insert("Stip_111_set");

      Undly_74.add_element(Stip_111);
    }
    {
      xml_element Pty_285{"Pty"};
      multiset<string> Pty_285_set;
      Pty_285.add_attribute("ID", "UnderlyingInstrumentPartyID_t_352109082"); // 2
      Pty_285_set.insert("UnderlyingInstrumentPartyID_t_352109082");
      Pty_285.add_attribute("Src", "2"); // 2
      Pty_285_set.insert("2");
      Pty_285.add_attribute("R", "18"); // 2
      Pty_285_set.insert("18");
      all_values.push_back(Pty_285_set);
      all_compo_names.insert("Pty_285_set");

      {
        xml_element Sub_285{"Sub"};
        multiset<string> Sub_285_set;
        Sub_285.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1891480631"); // 3
        Sub_285_set.insert("UnderlyingInstrumentPartySubID_t_1891480631");
        Sub_285.add_attribute("Typ", "33"); // 3
        Sub_285_set.insert("33");
        all_values.push_back(Sub_285_set);
        all_compo_names.insert("Sub_285_set");

        Pty_285.add_element(Sub_285);
      }
      Undly_74.add_element(Pty_285);
    }
    elt.add_element(Undly_74);
  } // end Undly
  { // Undly
    xml_element Undly_75{"Undly"};
    multiset<string> Undly_75_set;
    Undly_75.add_attribute("Sym", "UnderlyingSymbol_t_1197521227"); // 1
    Undly_75_set.insert("UnderlyingSymbol_t_1197521227");
    Undly_75.add_attribute("Sfx", "WI"); // 1
    Undly_75_set.insert("WI");
    Undly_75.add_attribute("ID", "UnderlyingSecurityID_t_36137896"); // 1
    Undly_75_set.insert("UnderlyingSecurityID_t_36137896");
    Undly_75.add_attribute("Src", "E"); // 1
    Undly_75_set.insert("E");
    Undly_75.add_attribute("Prod", "6"); // 1
    Undly_75_set.insert("6");
    Undly_75.add_attribute("CFI", "UnderlyingCFICode_t_1655998415"); // 1
    Undly_75_set.insert("UnderlyingCFICode_t_1655998415");
    Undly_75.add_attribute("SecTyp", "TMCP"); // 1
    Undly_75_set.insert("TMCP");
    Undly_75.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_908361105"); // 1
    Undly_75_set.insert("UnderlyingSecuritySubType_t_908361105");
    Undly_75.add_attribute("MMY", "1791121985"); // 1
    Undly_75_set.insert("1791121985");
    Undly_75.add_attribute("Mat", "UnderlyingMaturityDate_t_1771596098"); // 1
    Undly_75_set.insert("UnderlyingMaturityDate_t_1771596098");
    Undly_75.add_attribute("MatTm", "575191211"); // 1
    Undly_75_set.insert("575191211");
    Undly_75.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1506195627"); // 1
    Undly_75_set.insert("UnderlyingCouponPaymentDate_t_1506195627");
    Undly_75.add_attribute("RestrctTyp", "XR"); // 1
    Undly_75_set.insert("XR");
    Undly_75.add_attribute("Snrty", "SB"); // 1
    Undly_75_set.insert("SB");
    Undly_75.add_attribute("NotlPctOut", "184532.810000"); // 1
    Undly_75_set.insert("184532.810000");
    Undly_75.add_attribute("OrigNotlPctOut", "14529804.220000"); // 1
    Undly_75_set.insert("14529804.220000");
    Undly_75.add_attribute("AttchPnt", "12119331.530000"); // 1
    Undly_75_set.insert("12119331.530000");
    Undly_75.add_attribute("DetchPnt", "14479316.140000"); // 1
    Undly_75_set.insert("14479316.140000");
    Undly_75.add_attribute("Issued", "UnderlyingIssueDate_t_1592143574"); // 1
    Undly_75_set.insert("UnderlyingIssueDate_t_1592143574");
    Undly_75.add_attribute("RepoCollSecTyp", "1370798839"); // 1
    Undly_75_set.insert("1370798839");
    Undly_75.add_attribute("RepoTrm", "112037250"); // 1
    Undly_75_set.insert("112037250");
    Undly_75.add_attribute("RepoRt", "7986729.290000"); // 1
    Undly_75_set.insert("7986729.290000");
    Undly_75.add_attribute("Fctr", "14258791.850000"); // 1
    Undly_75_set.insert("14258791.850000");
    Undly_75.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1648712711"); // 1
    Undly_75_set.insert("UnderlyingCreditRating_t_1648712711");
    Undly_75.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_376320422"); // 1
    Undly_75_set.insert("UnderlyingInstrRegistry_t_376320422");
    Undly_75.add_attribute("Ctry", "1649248533"); // 1
    Undly_75_set.insert("1649248533");
    Undly_75.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2000821794"); // 1
    Undly_75_set.insert("UnderlyingStateOrProvinceOfIssue_t_2000821794");
    Undly_75.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1456805001"); // 1
    Undly_75_set.insert("UnderlyingLocaleOfIssue_t_1456805001");
    Undly_75.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1041017686"); // 1
    Undly_75_set.insert("UnderlyingRedemptionDate_t_1041017686");
    Undly_75.add_attribute("StrkPx", "17448187.770000"); // 1
    Undly_75_set.insert("17448187.770000");
    Undly_75.add_attribute("StrkCcy", "CHF"); // 1
    Undly_75_set.insert("CHF");
    Undly_75.add_attribute("OptA", "712488068"); // 1
    Undly_75_set.insert("712488068");
    Undly_75.add_attribute("Mult", "7693548.980000"); // 1
    Undly_75_set.insert("7693548.980000");
    Undly_75.add_attribute("MultTyp", "0"); // 1
    Undly_75_set.insert("0");
    Undly_75.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_75_set.insert("0");
    Undly_75.add_attribute("UOM", "oz_tr"); // 1
    Undly_75_set.insert("oz_tr");
    Undly_75.add_attribute("UOMQty", "367791.260000"); // 1
    Undly_75_set.insert("367791.260000");
    Undly_75.add_attribute("PxUOM", "lbs"); // 1
    Undly_75_set.insert("lbs");
    Undly_75.add_attribute("PxUOMQty", "20689916.500000"); // 1
    Undly_75_set.insert("20689916.500000");
    Undly_75.add_attribute("TmUnit", "Mo"); // 1
    Undly_75_set.insert("Mo");
    Undly_75.add_attribute("ExerStyle", "1"); // 1
    Undly_75_set.insert("1");
    Undly_75.add_attribute("CpnRt", "14277036.290000"); // 1
    Undly_75_set.insert("14277036.290000");
    Undly_75.add_attribute("Exch", "UnderlyingSecurityExchange_t_1317457819"); // 1
    Undly_75_set.insert("UnderlyingSecurityExchange_t_1317457819");
    Undly_75.add_attribute("Issr", "UnderlyingIssuer_t_1731472836"); // 1
    Undly_75_set.insert("UnderlyingIssuer_t_1731472836");
    Undly_75.add_attribute("EncUndIssrLen", "1446156911"); // 1
    Undly_75_set.insert("1446156911");
    Undly_75.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_622954593"); // 1
    Undly_75_set.insert("EncodedUnderlyingIssuer_t_622954593");
    Undly_75.add_attribute("Desc", "UnderlyingSecurityDesc_t_795922341"); // 1
    Undly_75_set.insert("UnderlyingSecurityDesc_t_795922341");
    Undly_75.add_attribute("EncUndSecDescLen", "746604877"); // 1
    Undly_75_set.insert("746604877");
    Undly_75.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_67614519"); // 1
    Undly_75_set.insert("EncodedUnderlyingSecurityDesc_t_67614519");
    Undly_75.add_attribute("CPPgm", "UnderlyingCPProgram_t_19237532"); // 1
    Undly_75_set.insert("UnderlyingCPProgram_t_19237532");
    Undly_75.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_858642127"); // 1
    Undly_75_set.insert("UnderlyingCPRegType_t_858642127");
    Undly_75.add_attribute("AllocPct", "8662874.480000"); // 1
    Undly_75_set.insert("8662874.480000");
    Undly_75.add_attribute("Ccy", "JPY"); // 1
    Undly_75_set.insert("JPY");
    Undly_75.add_attribute("Qty", "12426078.700000"); // 1
    Undly_75_set.insert("12426078.700000");
    Undly_75.add_attribute("SettlTyp", "5"); // 1
    Undly_75_set.insert("5");
    Undly_75.add_attribute("CashAmt", "UnderlyingCashAmount_t_213209336"); // 1
    Undly_75_set.insert("UnderlyingCashAmount_t_213209336");
    Undly_75.add_attribute("CashTyp", "FIXED"); // 1
    Undly_75_set.insert("FIXED");
    Undly_75.add_attribute("Px", "19878992.880000"); // 1
    Undly_75_set.insert("19878992.880000");
    Undly_75.add_attribute("DirtPx", "19580281.130000"); // 1
    Undly_75_set.insert("19580281.130000");
    Undly_75.add_attribute("EndPx", "12851462.260000"); // 1
    Undly_75_set.insert("12851462.260000");
    Undly_75.add_attribute("StartVal", "UnderlyingStartValue_t_2078954553"); // 1
    Undly_75_set.insert("UnderlyingStartValue_t_2078954553");
    Undly_75.add_attribute("CurVal", "UnderlyingCurrentValue_t_523032534"); // 1
    Undly_75_set.insert("UnderlyingCurrentValue_t_523032534");
    Undly_75.add_attribute("EndVal", "UnderlyingEndValue_t_2054501124"); // 1
    Undly_75_set.insert("UnderlyingEndValue_t_2054501124");
    Undly_75.add_attribute("AdjQty", "17283749.660000"); // 1
    Undly_75_set.insert("17283749.660000");
    Undly_75.add_attribute("FxRate", "450745.910000"); // 1
    Undly_75_set.insert("450745.910000");
    Undly_75.add_attribute("FxRateCalc", "D"); // 1
    Undly_75_set.insert("D");
    Undly_75.add_attribute("CapValu", "UnderlyingCapValue_t_1765154092"); // 1
    Undly_75_set.insert("UnderlyingCapValue_t_1765154092");
    Undly_75.add_attribute("SetMeth", "UnderlyingSettlMethod_t_475477753"); // 1
    Undly_75_set.insert("UnderlyingSettlMethod_t_475477753");
    Undly_75.add_attribute("PutCall", "106395143"); // 1
    Undly_75_set.insert("106395143");
    all_values.push_back(Undly_75_set);
    all_compo_names.insert("Undly_75_set");

    {
      xml_element UndAID_75{"UndAID"};
      multiset<string> UndAID_75_set;
      UndAID_75.add_attribute("AltID", "UnderlyingSecurityAltID_t_1426045668"); // 2
      UndAID_75_set.insert("UnderlyingSecurityAltID_t_1426045668");
      UndAID_75.add_attribute("AltIDSrc", "7"); // 2
      UndAID_75_set.insert("7");
      all_values.push_back(UndAID_75_set);
      all_compo_names.insert("UndAID_75_set");

      Undly_75.add_element(UndAID_75);
    }
    {
      xml_element Stip_112{"Stip"};
      multiset<string> Stip_112_set;
      Stip_112.add_attribute("Typ", "TEXT"); // 2
      Stip_112_set.insert("TEXT");
      Stip_112.add_attribute("Val", "UnderlyingStipValue_t_596019840"); // 2
      Stip_112_set.insert("UnderlyingStipValue_t_596019840");
      all_values.push_back(Stip_112_set);
      all_compo_names.insert("Stip_112_set");

      Undly_75.add_element(Stip_112);
    }
    {
      xml_element Pty_286{"Pty"};
      multiset<string> Pty_286_set;
      Pty_286.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1065061314"); // 2
      Pty_286_set.insert("UnderlyingInstrumentPartyID_t_1065061314");
      Pty_286.add_attribute("Src", "2"); // 2
      Pty_286_set.insert("2");
      Pty_286.add_attribute("R", "6"); // 2
      Pty_286_set.insert("6");
      all_values.push_back(Pty_286_set);
      all_compo_names.insert("Pty_286_set");

      {
        xml_element Sub_286{"Sub"};
        multiset<string> Sub_286_set;
        Sub_286.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1860983655"); // 3
        Sub_286_set.insert("UnderlyingInstrumentPartySubID_t_1860983655");
        Sub_286.add_attribute("Typ", "22"); // 3
        Sub_286_set.insert("22");
        all_values.push_back(Sub_286_set);
        all_compo_names.insert("Sub_286_set");

        Pty_286.add_element(Sub_286);
      }
      Undly_75.add_element(Pty_286);
    }
    elt.add_element(Undly_75);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_17{"TrdSes"};
    multiset<string> TrdSes_17_set;
    TrdSes_17.add_attribute("SesID", "1"); // 1
    TrdSes_17_set.insert("1");
    TrdSes_17.add_attribute("SesSub", "7"); // 1
    TrdSes_17_set.insert("7");
    all_values.push_back(TrdSes_17_set);
    all_compo_names.insert("TrdSes_17_set");

    elt.add_element(TrdSes_17);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_18{"TrdSes"};
    multiset<string> TrdSes_18_set;
    TrdSes_18.add_attribute("SesID", "2"); // 1
    TrdSes_18_set.insert("2");
    TrdSes_18.add_attribute("SesSub", "7"); // 1
    TrdSes_18_set.insert("7");
    all_values.push_back(TrdSes_18_set);
    all_compo_names.insert("TrdSes_18_set");

    elt.add_element(TrdSes_18);
  } // end TrdSes
  { // Qty
    xml_element Qty_7{"Qty"};
    multiset<string> Qty_7_set;
    Qty_7.add_attribute("Typ", "PA"); // 1
    Qty_7_set.insert("PA");
    Qty_7.add_attribute("Long", "21247358.600000"); // 1
    Qty_7_set.insert("21247358.600000");
    Qty_7.add_attribute("Short", "8636159.180000"); // 1
    Qty_7_set.insert("8636159.180000");
    Qty_7.add_attribute("Stat", "0"); // 1
    Qty_7_set.insert("0");
    Qty_7.add_attribute("QtyDt", "QuantityDate_t_1965151500"); // 1
    Qty_7_set.insert("QuantityDate_t_1965151500");
    all_values.push_back(Qty_7_set);
    all_compo_names.insert("Qty_7_set");

    {
      xml_element Pty_287{"Pty"};
      multiset<string> Pty_287_set;
      Pty_287.add_attribute("ID", "NestedPartyID_t_674160384"); // 2
      Pty_287_set.insert("NestedPartyID_t_674160384");
      Pty_287.add_attribute("Src", "3"); // 2
      Pty_287_set.insert("3");
      Pty_287.add_attribute("R", "22"); // 2
      Pty_287_set.insert("22");
      all_values.push_back(Pty_287_set);
      all_compo_names.insert("Pty_287_set");

      {
        xml_element Sub_287{"Sub"};
        multiset<string> Sub_287_set;
        Sub_287.add_attribute("ID", "NestedPartySubID_t_1197192918"); // 3
        Sub_287_set.insert("NestedPartySubID_t_1197192918");
        Sub_287.add_attribute("Typ", "23"); // 3
        Sub_287_set.insert("23");
        all_values.push_back(Sub_287_set);
        all_compo_names.insert("Sub_287_set");

        Pty_287.add_element(Sub_287);
      }
      Qty_7.add_element(Pty_287);
    }
    elt.add_element(Qty_7);
  } // end Qty
  { // Amt
    xml_element Amt_9{"Amt"};
    multiset<string> Amt_9_set;
    Amt_9.add_attribute("Typ", "CPN"); // 1
    Amt_9_set.insert("CPN");
    Amt_9.add_attribute("Amt", "PosAmt_t_1029497043"); // 1
    Amt_9_set.insert("PosAmt_t_1029497043");
    Amt_9.add_attribute("Ccy", "PositionCurrency_t_1095184168"); // 1
    Amt_9_set.insert("PositionCurrency_t_1095184168");
    all_values.push_back(Amt_9_set);
    all_compo_names.insert("Amt_9_set");

    elt.add_element(Amt_9);
  } // end Amt
  { // Amt
    xml_element Amt_10{"Amt"};
    multiset<string> Amt_10_set;
    Amt_10.add_attribute("Typ", "TVAR"); // 1
    Amt_10_set.insert("TVAR");
    Amt_10.add_attribute("Amt", "PosAmt_t_1135892186"); // 1
    Amt_10_set.insert("PosAmt_t_1135892186");
    Amt_10.add_attribute("Ccy", "PositionCurrency_t_373746188"); // 1
    Amt_10_set.insert("PositionCurrency_t_373746188");
    all_values.push_back(Amt_10_set);
    all_compo_names.insert("Amt_10_set");

    elt.add_element(Amt_10);
  } // end Amt
  { // Amt
    xml_element Amt_11{"Amt"};
    multiset<string> Amt_11_set;
    Amt_11.add_attribute("Typ", "CASH"); // 1
    Amt_11_set.insert("CASH");
    Amt_11.add_attribute("Amt", "PosAmt_t_522507310"); // 1
    Amt_11_set.insert("PosAmt_t_522507310");
    Amt_11.add_attribute("Ccy", "PositionCurrency_t_969766028"); // 1
    Amt_11_set.insert("PositionCurrency_t_969766028");
    all_values.push_back(Amt_11_set);
    all_compo_names.insert("Amt_11_set");

    elt.add_element(Amt_11);
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
