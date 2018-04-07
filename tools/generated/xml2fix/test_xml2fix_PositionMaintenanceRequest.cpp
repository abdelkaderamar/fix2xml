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
  elt.add_attribute("ReqID", "PosReqID_t_1318383768"); // 0
  PositionMaintenanceRequest_message_t_0.insert("PosReqID_t_1318383768");
  elt.add_attribute("TxnTyp", "4"); // 0
  PositionMaintenanceRequest_message_t_0.insert("4");
  elt.add_attribute("Actn", "4"); // 0
  PositionMaintenanceRequest_message_t_0.insert("4");
  elt.add_attribute("OrigReqRefID", "OrigPosReqRefID_t_78969107"); // 0
  PositionMaintenanceRequest_message_t_0.insert("OrigPosReqRefID_t_78969107");
  elt.add_attribute("RptRefID", "PosMaintRptRefID_t_937679915"); // 0
  PositionMaintenanceRequest_message_t_0.insert("PosMaintRptRefID_t_937679915");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1237907973"); // 0
  PositionMaintenanceRequest_message_t_0.insert("ClearingBusinessDate_t_1237907973");
  elt.add_attribute("SetSesID", "ETH"); // 0
  PositionMaintenanceRequest_message_t_0.insert("ETH");
  elt.add_attribute("SetSesSub", "SettlSessSubID_t_600116445"); // 0
  PositionMaintenanceRequest_message_t_0.insert("SettlSessSubID_t_600116445");
  elt.add_attribute("Acct", "Account_t_2121597357"); // 0
  PositionMaintenanceRequest_message_t_0.insert("Account_t_2121597357");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  PositionMaintenanceRequest_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "8"); // 0
  PositionMaintenanceRequest_message_t_0.insert("8");
  elt.add_attribute("Ccy", "USD"); // 0
  PositionMaintenanceRequest_message_t_0.insert("USD");
  elt.add_attribute("TxnTm", "TransactTime_t_1588510997"); // 0
  PositionMaintenanceRequest_message_t_0.insert("TransactTime_t_1588510997");
  elt.add_attribute("AdjTyp", "3"); // 0
  PositionMaintenanceRequest_message_t_0.insert("3");
  elt.add_attribute("CntraryInstrctnInd", "false"); // 0
  PositionMaintenanceRequest_message_t_0.insert("false");
  elt.add_attribute("PriorSpreadInd", "false"); // 0
  PositionMaintenanceRequest_message_t_0.insert("false");
  elt.add_attribute("ThresholdAmt", "6826777.540000"); // 0
  PositionMaintenanceRequest_message_t_0.insert("6826777.540000");
  elt.add_attribute("Txt", "Text_t_968772294"); // 0
  PositionMaintenanceRequest_message_t_0.insert("Text_t_968772294");
  elt.add_attribute("EncTxtLen", "971134744"); // 0
  PositionMaintenanceRequest_message_t_0.insert("971134744");
  elt.add_attribute("EncTxt", "EncodedText_t_600470214"); // 0
  PositionMaintenanceRequest_message_t_0.insert("EncodedText_t_600470214");
  elt.add_attribute("SettlCcy", "GBP"); // 0
  PositionMaintenanceRequest_message_t_0.insert("GBP");
  all_values.push_back(PositionMaintenanceRequest_message_t_0);
  all_compo_names.insert("PositionMaintenanceRequest_message_t");

  { // Hdr
    xml_element Hdr_66{"Hdr"};
    multiset<string> Hdr_66_set;
    Hdr_66.add_attribute("SeqNum", "1770654035"); // 1
    Hdr_66_set.insert("1770654035");
    Hdr_66.add_attribute("SID", "SenderCompID_t_2065965613"); // 1
    Hdr_66_set.insert("SenderCompID_t_2065965613");
    Hdr_66.add_attribute("TID", "TargetCompID_t_100060858"); // 1
    Hdr_66_set.insert("TargetCompID_t_100060858");
    Hdr_66.add_attribute("OBID", "OnBehalfOfCompID_t_1140421669"); // 1
    Hdr_66_set.insert("OnBehalfOfCompID_t_1140421669");
    Hdr_66.add_attribute("D2ID", "DeliverToCompID_t_1995513691"); // 1
    Hdr_66_set.insert("DeliverToCompID_t_1995513691");
    Hdr_66.add_attribute("SSub", "SenderSubID_t_283199573"); // 1
    Hdr_66_set.insert("SenderSubID_t_283199573");
    Hdr_66.add_attribute("SLoc", "SenderLocationID_t_1591656249"); // 1
    Hdr_66_set.insert("SenderLocationID_t_1591656249");
    Hdr_66.add_attribute("TSub", "TargetSubID_t_1863643233"); // 1
    Hdr_66_set.insert("TargetSubID_t_1863643233");
    Hdr_66.add_attribute("TLoc", "TargetLocationID_t_1601583341"); // 1
    Hdr_66_set.insert("TargetLocationID_t_1601583341");
    Hdr_66.add_attribute("OBSub", "OnBehalfOfSubID_t_2072391762"); // 1
    Hdr_66_set.insert("OnBehalfOfSubID_t_2072391762");
    Hdr_66.add_attribute("OBLoc", "OnBehalfOfLocationID_t_315062905"); // 1
    Hdr_66_set.insert("OnBehalfOfLocationID_t_315062905");
    Hdr_66.add_attribute("D2Sub", "DeliverToSubID_t_1680552449"); // 1
    Hdr_66_set.insert("DeliverToSubID_t_1680552449");
    Hdr_66.add_attribute("D2Loc", "DeliverToLocationID_t_862588030"); // 1
    Hdr_66_set.insert("DeliverToLocationID_t_862588030");
    Hdr_66.add_attribute("PosDup", "N"); // 1
    Hdr_66_set.insert("N");
    Hdr_66.add_attribute("PosRsnd", "Y"); // 1
    Hdr_66_set.insert("Y");
    Hdr_66.add_attribute("Snt", "SendingTime_t_1462704475"); // 1
    Hdr_66_set.insert("SendingTime_t_1462704475");
    Hdr_66.add_attribute("OrigSnt", "OrigSendingTime_t_1527084587"); // 1
    Hdr_66_set.insert("OrigSendingTime_t_1527084587");
    Hdr_66.add_attribute("MsgEncd", "MessageEncoding_t_599825774"); // 1
    Hdr_66_set.insert("MessageEncoding_t_599825774");
    all_values.push_back(Hdr_66_set);
    all_compo_names.insert("Hdr_66_set");

    {
      xml_element Hop_66{"Hop"};
      multiset<string> Hop_66_set;
      Hop_66.add_attribute("ID", "HopCompID_t_274632881"); // 2
      Hop_66_set.insert("HopCompID_t_274632881");
      Hop_66.add_attribute("Ref", "2105005884"); // 2
      Hop_66_set.insert("2105005884");
      Hop_66.add_attribute("Snt", "HopSendingTime_t_1179284660"); // 2
      Hop_66_set.insert("HopSendingTime_t_1179284660");
      all_values.push_back(Hop_66_set);
      all_compo_names.insert("Hop_66_set");

      Hdr_66.add_element(Hop_66);
    }
    elt.add_element(Hdr_66);
  } // end Hdr
  { // Pty
    xml_element Pty_312{"Pty"};
    multiset<string> Pty_312_set;
    Pty_312.add_attribute("ID", "PartyID_t_602669188"); // 1
    Pty_312_set.insert("PartyID_t_602669188");
    Pty_312.add_attribute("Src", "E"); // 1
    Pty_312_set.insert("E");
    Pty_312.add_attribute("R", "53"); // 1
    Pty_312_set.insert("53");
    all_values.push_back(Pty_312_set);
    all_compo_names.insert("Pty_312_set");

    {
      xml_element Sub_312{"Sub"};
      multiset<string> Sub_312_set;
      Sub_312.add_attribute("ID", "PartySubID_t_1285346942"); // 2
      Sub_312_set.insert("PartySubID_t_1285346942");
      Sub_312.add_attribute("Typ", "9"); // 2
      Sub_312_set.insert("9");
      all_values.push_back(Sub_312_set);
      all_compo_names.insert("Sub_312_set");

      Pty_312.add_element(Sub_312);
    }
    elt.add_element(Pty_312);
  } // end Pty
  { // Pty
    xml_element Pty_313{"Pty"};
    multiset<string> Pty_313_set;
    Pty_313.add_attribute("ID", "PartyID_t_889541602"); // 1
    Pty_313_set.insert("PartyID_t_889541602");
    Pty_313.add_attribute("Src", "F"); // 1
    Pty_313_set.insert("F");
    Pty_313.add_attribute("R", "58"); // 1
    Pty_313_set.insert("58");
    all_values.push_back(Pty_313_set);
    all_compo_names.insert("Pty_313_set");

    {
      xml_element Sub_313{"Sub"};
      multiset<string> Sub_313_set;
      Sub_313.add_attribute("ID", "PartySubID_t_1941490770"); // 2
      Sub_313_set.insert("PartySubID_t_1941490770");
      Sub_313.add_attribute("Typ", "17"); // 2
      Sub_313_set.insert("17");
      all_values.push_back(Sub_313_set);
      all_compo_names.insert("Sub_313_set");

      Pty_313.add_element(Sub_313);
    }
    elt.add_element(Pty_313);
  } // end Pty
  { // Instrmt
    xml_element Instrmt_56{"Instrmt"};
    multiset<string> Instrmt_56_set;
    Instrmt_56.add_attribute("Sym", "Symbol_t_355772665"); // 1
    Instrmt_56_set.insert("Symbol_t_355772665");
    Instrmt_56.add_attribute("Sfx", "CD"); // 1
    Instrmt_56_set.insert("CD");
    Instrmt_56.add_attribute("ID", "SecurityID_t_501925565"); // 1
    Instrmt_56_set.insert("SecurityID_t_501925565");
    Instrmt_56.add_attribute("Src", "B"); // 1
    Instrmt_56_set.insert("B");
    Instrmt_56.add_attribute("Prod", "5"); // 1
    Instrmt_56_set.insert("5");
    Instrmt_56.add_attribute("ProdCmplx", "ProductComplex_t_2093581814"); // 1
    Instrmt_56_set.insert("ProductComplex_t_2093581814");
    Instrmt_56.add_attribute("SecGrp", "SecurityGroup_t_2067445942"); // 1
    Instrmt_56_set.insert("SecurityGroup_t_2067445942");
    Instrmt_56.add_attribute("CFI", "CFICode_t_1778850895"); // 1
    Instrmt_56_set.insert("CFICode_t_1778850895");
    Instrmt_56.add_attribute("SecTyp", "IRS"); // 1
    Instrmt_56_set.insert("IRS");
    Instrmt_56.add_attribute("SubTyp", "SecuritySubType_t_235025199"); // 1
    Instrmt_56_set.insert("SecuritySubType_t_235025199");
    Instrmt_56.add_attribute("MMY", "1311919696"); // 1
    Instrmt_56_set.insert("1311919696");
    Instrmt_56.add_attribute("MatDt", "MaturityDate_t_733594310"); // 1
    Instrmt_56_set.insert("MaturityDate_t_733594310");
    Instrmt_56.add_attribute("MatTm", "1787996077"); // 1
    Instrmt_56_set.insert("1787996077");
    Instrmt_56.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1826791827"); // 1
    Instrmt_56_set.insert("SettleOnOpenFlag_t_1826791827");
    Instrmt_56.add_attribute("AsgnMeth", "48815137"); // 1
    Instrmt_56_set.insert("48815137");
    Instrmt_56.add_attribute("Status", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("CpnPmt", "CouponPaymentDate_t_279133953"); // 1
    Instrmt_56_set.insert("CouponPaymentDate_t_279133953");
    Instrmt_56.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_56_set.insert("MM");
    Instrmt_56.add_attribute("Snrty", "SD"); // 1
    Instrmt_56_set.insert("SD");
    Instrmt_56.add_attribute("NotlPctOut", "14584186.130000"); // 1
    Instrmt_56_set.insert("14584186.130000");
    Instrmt_56.add_attribute("OrigNotlPctOut", "391082.490000"); // 1
    Instrmt_56_set.insert("391082.490000");
    Instrmt_56.add_attribute("AttchPnt", "17277884.410000"); // 1
    Instrmt_56_set.insert("17277884.410000");
    Instrmt_56.add_attribute("DetchPnt", "17843233.330000"); // 1
    Instrmt_56_set.insert("17843233.330000");
    Instrmt_56.add_attribute("Issued", "IssueDate_t_2104998755"); // 1
    Instrmt_56_set.insert("IssueDate_t_2104998755");
    Instrmt_56.add_attribute("RepoCollSecTyp", "865651735"); // 1
    Instrmt_56_set.insert("865651735");
    Instrmt_56.add_attribute("RepoTrm", "931516698"); // 1
    Instrmt_56_set.insert("931516698");
    Instrmt_56.add_attribute("RepoRt", "8470567.090000"); // 1
    Instrmt_56_set.insert("8470567.090000");
    Instrmt_56.add_attribute("Fctr", "6039852.430000"); // 1
    Instrmt_56_set.insert("6039852.430000");
    Instrmt_56.add_attribute("CrdRtg", "CreditRating_t_1368807398"); // 1
    Instrmt_56_set.insert("CreditRating_t_1368807398");
    Instrmt_56.add_attribute("Rgstry", "InstrRegistry_t_641063831"); // 1
    Instrmt_56_set.insert("InstrRegistry_t_641063831");
    Instrmt_56.add_attribute("IssuCtry", "2112972787"); // 1
    Instrmt_56_set.insert("2112972787");
    Instrmt_56.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1724580063"); // 1
    Instrmt_56_set.insert("StateOrProvinceOfIssue_t_1724580063");
    Instrmt_56.add_attribute("Lcl", "LocaleOfIssue_t_535131811"); // 1
    Instrmt_56_set.insert("LocaleOfIssue_t_535131811");
    Instrmt_56.add_attribute("Redeem", "RedemptionDate_t_467414704"); // 1
    Instrmt_56_set.insert("RedemptionDate_t_467414704");
    Instrmt_56.add_attribute("StrkPx", "19283827.710000"); // 1
    Instrmt_56_set.insert("19283827.710000");
    Instrmt_56.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_56_set.insert("JPY");
    Instrmt_56.add_attribute("StrkMult", "18483450.650000"); // 1
    Instrmt_56_set.insert("18483450.650000");
    Instrmt_56.add_attribute("StrkValu", "3437666.110000"); // 1
    Instrmt_56_set.insert("3437666.110000");
    Instrmt_56.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_56_set.insert("3");
    Instrmt_56.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_56_set.insert("5");
    Instrmt_56.add_attribute("StrkPxBndryPrcsn", "16556863.070000"); // 1
    Instrmt_56_set.insert("16556863.070000");
    Instrmt_56.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("OptAt", "1723882694"); // 1
    Instrmt_56_set.insert("1723882694");
    Instrmt_56.add_attribute("Mult", "13349944.870000"); // 1
    Instrmt_56_set.insert("13349944.870000");
    Instrmt_56.add_attribute("MultTyp", "0"); // 1
    Instrmt_56_set.insert("0");
    Instrmt_56.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_56_set.insert("3");
    Instrmt_56.add_attribute("MinPxIncr", "16141284.400000"); // 1
    Instrmt_56_set.insert("16141284.400000");
    Instrmt_56.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1390376617"); // 1
    Instrmt_56_set.insert("MinPriceIncrementAmount_t_1390376617");
    Instrmt_56.add_attribute("UOM", "Gal"); // 1
    Instrmt_56_set.insert("Gal");
    Instrmt_56.add_attribute("UOMQty", "9250634.060000"); // 1
    Instrmt_56_set.insert("9250634.060000");
    Instrmt_56.add_attribute("PxUOM", "t"); // 1
    Instrmt_56_set.insert("t");
    Instrmt_56.add_attribute("PxUOMQty", "14494201.100000"); // 1
    Instrmt_56_set.insert("14494201.100000");
    Instrmt_56.add_attribute("SettlMeth", "P"); // 1
    Instrmt_56_set.insert("P");
    Instrmt_56.add_attribute("ExerStyle", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_56_set.insert("2");
    Instrmt_56.add_attribute("OptPayAmt", "OptPayoutAmount_t_1493419789"); // 1
    Instrmt_56_set.insert("OptPayoutAmount_t_1493419789");
    Instrmt_56.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_56_set.insert("INT");
    Instrmt_56.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_56_set.insert("FUT");
    Instrmt_56.add_attribute("ListMeth", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("CapPx", "7276368.650000"); // 1
    Instrmt_56_set.insert("7276368.650000");
    Instrmt_56.add_attribute("FlrPx", "7370625.800000"); // 1
    Instrmt_56_set.insert("7370625.800000");
    Instrmt_56.add_attribute("PutCall", "0"); // 1
    Instrmt_56_set.insert("0");
    Instrmt_56.add_attribute("FlexInd", "true"); // 1
    Instrmt_56_set.insert("true");
    Instrmt_56.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_56_set.insert("true");
    Instrmt_56.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_56_set.insert("Yr");
    Instrmt_56.add_attribute("CpnRt", "19751680.400000"); // 1
    Instrmt_56_set.insert("19751680.400000");
    Instrmt_56.add_attribute("Exch", "SecurityExchange_t_1617990154"); // 1
    Instrmt_56_set.insert("SecurityExchange_t_1617990154");
    Instrmt_56.add_attribute("PosLmt", "1921084143"); // 1
    Instrmt_56_set.insert("1921084143");
    Instrmt_56.add_attribute("NTPosLmt", "171451004"); // 1
    Instrmt_56_set.insert("171451004");
    Instrmt_56.add_attribute("Issr", "Issuer_t_1902509304"); // 1
    Instrmt_56_set.insert("Issuer_t_1902509304");
    Instrmt_56.add_attribute("EncIssrLen", "1856970760"); // 1
    Instrmt_56_set.insert("1856970760");
    Instrmt_56.add_attribute("EncIssr", "EncodedIssuer_t_1827137311"); // 1
    Instrmt_56_set.insert("EncodedIssuer_t_1827137311");
    Instrmt_56.add_attribute("Desc", "SecurityDesc_t_773139117"); // 1
    Instrmt_56_set.insert("SecurityDesc_t_773139117");
    Instrmt_56.add_attribute("EncSecDescLen", "1433369806"); // 1
    Instrmt_56_set.insert("1433369806");
    Instrmt_56.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1014648150"); // 1
    Instrmt_56_set.insert("EncodedSecurityDesc_t_1014648150");
    Instrmt_56.add_attribute("Pool", "Pool_t_1840067716"); // 1
    Instrmt_56_set.insert("Pool_t_1840067716");
    Instrmt_56.add_attribute("CSetMo", "29882221"); // 1
    Instrmt_56_set.insert("29882221");
    Instrmt_56.add_attribute("CPPgm", "1"); // 1
    Instrmt_56_set.insert("1");
    Instrmt_56.add_attribute("CPRegT", "CPRegType_t_1082960685"); // 1
    Instrmt_56_set.insert("CPRegType_t_1082960685");
    Instrmt_56.add_attribute("Dated", "DatedDate_t_1898997537"); // 1
    Instrmt_56_set.insert("DatedDate_t_1898997537");
    Instrmt_56.add_attribute("IntAcrl", "InterestAccrualDate_t_1406356349"); // 1
    Instrmt_56_set.insert("InterestAccrualDate_t_1406356349");
    all_values.push_back(Instrmt_56_set);
    all_compo_names.insert("Instrmt_56_set");

    {
      xml_element AID_59{"AID"};
      multiset<string> AID_59_set;
      AID_59.add_attribute("AltID", "SecurityAltID_t_364961903"); // 2
      AID_59_set.insert("SecurityAltID_t_364961903");
      AID_59.add_attribute("AltIDSrc", "2"); // 2
      AID_59_set.insert("2");
      all_values.push_back(AID_59_set);
      all_compo_names.insert("AID_59_set");

      Instrmt_56.add_element(AID_59);
    }
    {
      xml_element SecXML_59{"SecXML"};
      multiset<string> SecXML_59_set;
      SecXML_59.add_attribute("Schema", "SecurityXMLSchema_t_1968259440"); // 2
      SecXML_59_set.insert("SecurityXMLSchema_t_1968259440");
      all_values.push_back(SecXML_59_set);
      all_compo_names.insert("SecXML_59_set");

      Instrmt_56.add_element(SecXML_59);
    }
    {
      xml_element Evnt_59{"Evnt"};
      multiset<string> Evnt_59_set;
      Evnt_59.add_attribute("EventTyp", "16"); // 2
      Evnt_59_set.insert("16");
      Evnt_59.add_attribute("Dt", "EventDate_t_1368522197"); // 2
      Evnt_59_set.insert("EventDate_t_1368522197");
      Evnt_59.add_attribute("Tm", "EventTime_t_1314195581"); // 2
      Evnt_59_set.insert("EventTime_t_1314195581");
      Evnt_59.add_attribute("Px", "18385349.100000"); // 2
      Evnt_59_set.insert("18385349.100000");
      Evnt_59.add_attribute("Txt", "EventText_t_2140095638"); // 2
      Evnt_59_set.insert("EventText_t_2140095638");
      all_values.push_back(Evnt_59_set);
      all_compo_names.insert("Evnt_59_set");

      Instrmt_56.add_element(Evnt_59);
    }
    {
      xml_element Pty_314{"Pty"};
      multiset<string> Pty_314_set;
      Pty_314.add_attribute("ID", "InstrumentPartyID_t_2028939121"); // 2
      Pty_314_set.insert("InstrumentPartyID_t_2028939121");
      Pty_314.add_attribute("Src", "A"); // 2
      Pty_314_set.insert("A");
      Pty_314.add_attribute("R", "11"); // 2
      Pty_314_set.insert("11");
      all_values.push_back(Pty_314_set);
      all_compo_names.insert("Pty_314_set");

      {
        xml_element Sub_314{"Sub"};
        multiset<string> Sub_314_set;
        Sub_314.add_attribute("ID", "InstrumentPartySubID_t_173295427"); // 3
        Sub_314_set.insert("InstrumentPartySubID_t_173295427");
        Sub_314.add_attribute("Typ", "23"); // 3
        Sub_314_set.insert("23");
        all_values.push_back(Sub_314_set);
        all_compo_names.insert("Sub_314_set");

        Pty_314.add_element(Sub_314);
      }
      Instrmt_56.add_element(Pty_314);
    }
    {
      xml_element CmplxEvnt_56{"CmplxEvnt"};
      multiset<string> CmplxEvnt_56_set;
      CmplxEvnt_56.add_attribute("Typ", "6"); // 2
      CmplxEvnt_56_set.insert("6");
      CmplxEvnt_56.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_246034505"); // 2
      CmplxEvnt_56_set.insert("ComplexOptPayoutAmount_t_246034505");
      CmplxEvnt_56.add_attribute("Px", "15091411.950000"); // 2
      CmplxEvnt_56_set.insert("15091411.950000");
      CmplxEvnt_56.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_56_set.insert("1");
      CmplxEvnt_56.add_attribute("PxBndryPrcsn", "196350.010000"); // 2
      CmplxEvnt_56_set.insert("196350.010000");
      CmplxEvnt_56.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_56_set.insert("3");
      CmplxEvnt_56.add_attribute("Cond", "1"); // 2
      CmplxEvnt_56_set.insert("1");
      all_values.push_back(CmplxEvnt_56_set);
      all_compo_names.insert("CmplxEvnt_56_set");

      {
        xml_element EvntDts_56{"EvntDts"};
        multiset<string> EvntDts_56_set;
        EvntDts_56.add_attribute("StartDt", "ComplexEventStartDate_t_1876605761"); // 3
        EvntDts_56_set.insert("ComplexEventStartDate_t_1876605761");
        EvntDts_56.add_attribute("EndDt", "ComplexEventEndDate_t_1360245863"); // 3
        EvntDts_56_set.insert("ComplexEventEndDate_t_1360245863");
        all_values.push_back(EvntDts_56_set);
        all_compo_names.insert("EvntDts_56_set");

        {
          xml_element EvntTms_56{"EvntTms"};
          multiset<string> EvntTms_56_set;
          EvntTms_56.add_attribute("StartTm", "1932823134"); // 4
          EvntTms_56_set.insert("1932823134");
          EvntTms_56.add_attribute("EndTm", "1162491919"); // 4
          EvntTms_56_set.insert("1162491919");
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
    xml_element Leg_66{"Leg"};
    multiset<string> Leg_66_set;
    Leg_66.add_attribute("Sym", "LegSymbol_t_1625407202"); // 1
    Leg_66_set.insert("LegSymbol_t_1625407202");
    Leg_66.add_attribute("Sfx", "CD"); // 1
    Leg_66_set.insert("CD");
    Leg_66.add_attribute("ID", "LegSecurityID_t_708703308"); // 1
    Leg_66_set.insert("LegSecurityID_t_708703308");
    Leg_66.add_attribute("Src", "4"); // 1
    Leg_66_set.insert("4");
    Leg_66.add_attribute("Prod", "3"); // 1
    Leg_66_set.insert("3");
    Leg_66.add_attribute("CFI", "LegCFICode_t_2115059657"); // 1
    Leg_66_set.insert("LegCFICode_t_2115059657");
    Leg_66.add_attribute("SecTyp", "VRDN"); // 1
    Leg_66_set.insert("VRDN");
    Leg_66.add_attribute("SecSubTyp", "LegSecuritySubType_t_2144822029"); // 1
    Leg_66_set.insert("LegSecuritySubType_t_2144822029");
    Leg_66.add_attribute("MMY", "1935835449"); // 1
    Leg_66_set.insert("1935835449");
    Leg_66.add_attribute("Mat", "LegMaturityDate_t_530324370"); // 1
    Leg_66_set.insert("LegMaturityDate_t_530324370");
    Leg_66.add_attribute("MatTm", "1365860578"); // 1
    Leg_66_set.insert("1365860578");
    Leg_66.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1102547383"); // 1
    Leg_66_set.insert("LegCouponPaymentDate_t_1102547383");
    Leg_66.add_attribute("Issued", "LegIssueDate_t_221375632"); // 1
    Leg_66_set.insert("LegIssueDate_t_221375632");
    Leg_66.add_attribute("RepoCollSecTyp", "1358472568"); // 1
    Leg_66_set.insert("1358472568");
    Leg_66.add_attribute("RepoTrm", "984002856"); // 1
    Leg_66_set.insert("984002856");
    Leg_66.add_attribute("RepoRt", "6400637.590000"); // 1
    Leg_66_set.insert("6400637.590000");
    Leg_66.add_attribute("Fctr", "20881471.380000"); // 1
    Leg_66_set.insert("20881471.380000");
    Leg_66.add_attribute("CrdRtg", "LegCreditRating_t_1157298283"); // 1
    Leg_66_set.insert("LegCreditRating_t_1157298283");
    Leg_66.add_attribute("Rgstry", "LegInstrRegistry_t_174036914"); // 1
    Leg_66_set.insert("LegInstrRegistry_t_174036914");
    Leg_66.add_attribute("Ctry", "1874815344"); // 1
    Leg_66_set.insert("1874815344");
    Leg_66.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1403332789"); // 1
    Leg_66_set.insert("LegStateOrProvinceOfIssue_t_1403332789");
    Leg_66.add_attribute("Lcl", "LegLocaleOfIssue_t_1683178109"); // 1
    Leg_66_set.insert("LegLocaleOfIssue_t_1683178109");
    Leg_66.add_attribute("Redeem", "LegRedemptionDate_t_1131990056"); // 1
    Leg_66_set.insert("LegRedemptionDate_t_1131990056");
    Leg_66.add_attribute("Strk", "14229677.900000"); // 1
    Leg_66_set.insert("14229677.900000");
    Leg_66.add_attribute("StrkCcy", "GBP"); // 1
    Leg_66_set.insert("GBP");
    Leg_66.add_attribute("OptA", "1152089903"); // 1
    Leg_66_set.insert("1152089903");
    Leg_66.add_attribute("Cmult", "4290488.760000"); // 1
    Leg_66_set.insert("4290488.760000");
    Leg_66.add_attribute("MultTyp", "2"); // 1
    Leg_66_set.insert("2");
    Leg_66.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_66_set.insert("4");
    Leg_66.add_attribute("UOM", "USD"); // 1
    Leg_66_set.insert("USD");
    Leg_66.add_attribute("UOMQty", "15549371.120000"); // 1
    Leg_66_set.insert("15549371.120000");
    Leg_66.add_attribute("PxUOM", "tn"); // 1
    Leg_66_set.insert("tn");
    Leg_66.add_attribute("PxUOMQty", "13651625.500000"); // 1
    Leg_66_set.insert("13651625.500000");
    Leg_66.add_attribute("TmUnit", "S"); // 1
    Leg_66_set.insert("S");
    Leg_66.add_attribute("ExerStyle", "1"); // 1
    Leg_66_set.insert("1");
    Leg_66.add_attribute("CpnRt", "13327385.590000"); // 1
    Leg_66_set.insert("13327385.590000");
    Leg_66.add_attribute("Exch", "LegSecurityExchange_t_894183845"); // 1
    Leg_66_set.insert("LegSecurityExchange_t_894183845");
    Leg_66.add_attribute("Issr", "LegIssuer_t_153215076"); // 1
    Leg_66_set.insert("LegIssuer_t_153215076");
    Leg_66.add_attribute("EncLegIssrLen", "1121090361"); // 1
    Leg_66_set.insert("1121090361");
    Leg_66.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1424508215"); // 1
    Leg_66_set.insert("EncodedLegIssuer_t_1424508215");
    Leg_66.add_attribute("Desc", "LegSecurityDesc_t_1519075654"); // 1
    Leg_66_set.insert("LegSecurityDesc_t_1519075654");
    Leg_66.add_attribute("EncLegSecDescLen", "76154096"); // 1
    Leg_66_set.insert("76154096");
    Leg_66.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1645883847"); // 1
    Leg_66_set.insert("EncodedLegSecurityDesc_t_1645883847");
    Leg_66.add_attribute("RatioQty", "7300645.740000"); // 1
    Leg_66_set.insert("7300645.740000");
    Leg_66.add_attribute("Side", "9"); // 1
    Leg_66_set.insert("9");
    Leg_66.add_attribute("Ccy", "JPY"); // 1
    Leg_66_set.insert("JPY");
    Leg_66.add_attribute("Pool", "LegPool_t_69971587"); // 1
    Leg_66_set.insert("LegPool_t_69971587");
    Leg_66.add_attribute("Dated", "LegDatedDate_t_312500872"); // 1
    Leg_66_set.insert("LegDatedDate_t_312500872");
    Leg_66.add_attribute("CSetMo", "398059760"); // 1
    Leg_66_set.insert("398059760");
    Leg_66.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1473304376"); // 1
    Leg_66_set.insert("LegInterestAccrualDate_t_1473304376");
    Leg_66.add_attribute("PutCall", "1995678982"); // 1
    Leg_66_set.insert("1995678982");
    Leg_66.add_attribute("LegOptionRatio", "15300498.160000"); // 1
    Leg_66_set.insert("15300498.160000");
    Leg_66.add_attribute("Px", "7487885.180000"); // 1
    Leg_66_set.insert("7487885.180000");
    all_values.push_back(Leg_66_set);
    all_compo_names.insert("Leg_66_set");

    {
      xml_element LegAID_66{"LegAID"};
      multiset<string> LegAID_66_set;
      LegAID_66.add_attribute("SecAltID", "LegSecurityAltID_t_1064481995"); // 2
      LegAID_66_set.insert("LegSecurityAltID_t_1064481995");
      LegAID_66.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_66_set.insert("4");
      all_values.push_back(LegAID_66_set);
      all_compo_names.insert("LegAID_66_set");

      Leg_66.add_element(LegAID_66);
    }
    elt.add_element(Leg_66);
  } // end Leg
  { // Undly
    xml_element Undly_78{"Undly"};
    multiset<string> Undly_78_set;
    Undly_78.add_attribute("Sym", "UnderlyingSymbol_t_1493530871"); // 1
    Undly_78_set.insert("UnderlyingSymbol_t_1493530871");
    Undly_78.add_attribute("Sfx", "WI"); // 1
    Undly_78_set.insert("WI");
    Undly_78.add_attribute("ID", "UnderlyingSecurityID_t_2067976595"); // 1
    Undly_78_set.insert("UnderlyingSecurityID_t_2067976595");
    Undly_78.add_attribute("Src", "5"); // 1
    Undly_78_set.insert("5");
    Undly_78.add_attribute("Prod", "1"); // 1
    Undly_78_set.insert("1");
    Undly_78.add_attribute("CFI", "UnderlyingCFICode_t_1279965261"); // 1
    Undly_78_set.insert("UnderlyingCFICode_t_1279965261");
    Undly_78.add_attribute("SecTyp", "MPP"); // 1
    Undly_78_set.insert("MPP");
    Undly_78.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_979561319"); // 1
    Undly_78_set.insert("UnderlyingSecuritySubType_t_979561319");
    Undly_78.add_attribute("MMY", "1435841957"); // 1
    Undly_78_set.insert("1435841957");
    Undly_78.add_attribute("Mat", "UnderlyingMaturityDate_t_552923926"); // 1
    Undly_78_set.insert("UnderlyingMaturityDate_t_552923926");
    Undly_78.add_attribute("MatTm", "1873745165"); // 1
    Undly_78_set.insert("1873745165");
    Undly_78.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1589057033"); // 1
    Undly_78_set.insert("UnderlyingCouponPaymentDate_t_1589057033");
    Undly_78.add_attribute("RestrctTyp", "XR"); // 1
    Undly_78_set.insert("XR");
    Undly_78.add_attribute("Snrty", "SB"); // 1
    Undly_78_set.insert("SB");
    Undly_78.add_attribute("NotlPctOut", "9606490.400000"); // 1
    Undly_78_set.insert("9606490.400000");
    Undly_78.add_attribute("OrigNotlPctOut", "17501683.830000"); // 1
    Undly_78_set.insert("17501683.830000");
    Undly_78.add_attribute("AttchPnt", "6491699.320000"); // 1
    Undly_78_set.insert("6491699.320000");
    Undly_78.add_attribute("DetchPnt", "16907136.140000"); // 1
    Undly_78_set.insert("16907136.140000");
    Undly_78.add_attribute("Issued", "UnderlyingIssueDate_t_662841687"); // 1
    Undly_78_set.insert("UnderlyingIssueDate_t_662841687");
    Undly_78.add_attribute("RepoCollSecTyp", "787633890"); // 1
    Undly_78_set.insert("787633890");
    Undly_78.add_attribute("RepoTrm", "213958031"); // 1
    Undly_78_set.insert("213958031");
    Undly_78.add_attribute("RepoRt", "7328132.740000"); // 1
    Undly_78_set.insert("7328132.740000");
    Undly_78.add_attribute("Fctr", "11001347.630000"); // 1
    Undly_78_set.insert("11001347.630000");
    Undly_78.add_attribute("CrdRtg", "UnderlyingCreditRating_t_612017791"); // 1
    Undly_78_set.insert("UnderlyingCreditRating_t_612017791");
    Undly_78.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_58634003"); // 1
    Undly_78_set.insert("UnderlyingInstrRegistry_t_58634003");
    Undly_78.add_attribute("Ctry", "948330097"); // 1
    Undly_78_set.insert("948330097");
    Undly_78.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2142067608"); // 1
    Undly_78_set.insert("UnderlyingStateOrProvinceOfIssue_t_2142067608");
    Undly_78.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_807422521"); // 1
    Undly_78_set.insert("UnderlyingLocaleOfIssue_t_807422521");
    Undly_78.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2012812092"); // 1
    Undly_78_set.insert("UnderlyingRedemptionDate_t_2012812092");
    Undly_78.add_attribute("StrkPx", "16688242.010000"); // 1
    Undly_78_set.insert("16688242.010000");
    Undly_78.add_attribute("StrkCcy", "CHF"); // 1
    Undly_78_set.insert("CHF");
    Undly_78.add_attribute("OptA", "1125110704"); // 1
    Undly_78_set.insert("1125110704");
    Undly_78.add_attribute("Mult", "4813102.420000"); // 1
    Undly_78_set.insert("4813102.420000");
    Undly_78.add_attribute("MultTyp", "0"); // 1
    Undly_78_set.insert("0");
    Undly_78.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_78_set.insert("0");
    Undly_78.add_attribute("UOM", "MMBtu"); // 1
    Undly_78_set.insert("MMBtu");
    Undly_78.add_attribute("UOMQty", "5815511.460000"); // 1
    Undly_78_set.insert("5815511.460000");
    Undly_78.add_attribute("PxUOM", "Bbl"); // 1
    Undly_78_set.insert("Bbl");
    Undly_78.add_attribute("PxUOMQty", "10496338.130000"); // 1
    Undly_78_set.insert("10496338.130000");
    Undly_78.add_attribute("TmUnit", "D"); // 1
    Undly_78_set.insert("D");
    Undly_78.add_attribute("ExerStyle", "1"); // 1
    Undly_78_set.insert("1");
    Undly_78.add_attribute("CpnRt", "4912071.980000"); // 1
    Undly_78_set.insert("4912071.980000");
    Undly_78.add_attribute("Exch", "UnderlyingSecurityExchange_t_661005711"); // 1
    Undly_78_set.insert("UnderlyingSecurityExchange_t_661005711");
    Undly_78.add_attribute("Issr", "UnderlyingIssuer_t_1845443241"); // 1
    Undly_78_set.insert("UnderlyingIssuer_t_1845443241");
    Undly_78.add_attribute("EncUndIssrLen", "1451856238"); // 1
    Undly_78_set.insert("1451856238");
    Undly_78.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_263690446"); // 1
    Undly_78_set.insert("EncodedUnderlyingIssuer_t_263690446");
    Undly_78.add_attribute("Desc", "UnderlyingSecurityDesc_t_347129525"); // 1
    Undly_78_set.insert("UnderlyingSecurityDesc_t_347129525");
    Undly_78.add_attribute("EncUndSecDescLen", "995086205"); // 1
    Undly_78_set.insert("995086205");
    Undly_78.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_926532133"); // 1
    Undly_78_set.insert("EncodedUnderlyingSecurityDesc_t_926532133");
    Undly_78.add_attribute("CPPgm", "UnderlyingCPProgram_t_1134763416"); // 1
    Undly_78_set.insert("UnderlyingCPProgram_t_1134763416");
    Undly_78.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1209044236"); // 1
    Undly_78_set.insert("UnderlyingCPRegType_t_1209044236");
    Undly_78.add_attribute("AllocPct", "16593454.070000"); // 1
    Undly_78_set.insert("16593454.070000");
    Undly_78.add_attribute("Ccy", "CAN"); // 1
    Undly_78_set.insert("CAN");
    Undly_78.add_attribute("Qty", "17179794.100000"); // 1
    Undly_78_set.insert("17179794.100000");
    Undly_78.add_attribute("SettlTyp", "4"); // 1
    Undly_78_set.insert("4");
    Undly_78.add_attribute("CashAmt", "UnderlyingCashAmount_t_1815645987"); // 1
    Undly_78_set.insert("UnderlyingCashAmount_t_1815645987");
    Undly_78.add_attribute("CashTyp", "FIXED"); // 1
    Undly_78_set.insert("FIXED");
    Undly_78.add_attribute("Px", "9010730.720000"); // 1
    Undly_78_set.insert("9010730.720000");
    Undly_78.add_attribute("DirtPx", "13369865.400000"); // 1
    Undly_78_set.insert("13369865.400000");
    Undly_78.add_attribute("EndPx", "9387355.790000"); // 1
    Undly_78_set.insert("9387355.790000");
    Undly_78.add_attribute("StartVal", "UnderlyingStartValue_t_112448739"); // 1
    Undly_78_set.insert("UnderlyingStartValue_t_112448739");
    Undly_78.add_attribute("CurVal", "UnderlyingCurrentValue_t_314613597"); // 1
    Undly_78_set.insert("UnderlyingCurrentValue_t_314613597");
    Undly_78.add_attribute("EndVal", "UnderlyingEndValue_t_1420045821"); // 1
    Undly_78_set.insert("UnderlyingEndValue_t_1420045821");
    Undly_78.add_attribute("AdjQty", "14738145.180000"); // 1
    Undly_78_set.insert("14738145.180000");
    Undly_78.add_attribute("FxRate", "3034642.690000"); // 1
    Undly_78_set.insert("3034642.690000");
    Undly_78.add_attribute("FxRateCalc", "D"); // 1
    Undly_78_set.insert("D");
    Undly_78.add_attribute("CapValu", "UnderlyingCapValue_t_2055365664"); // 1
    Undly_78_set.insert("UnderlyingCapValue_t_2055365664");
    Undly_78.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1271876261"); // 1
    Undly_78_set.insert("UnderlyingSettlMethod_t_1271876261");
    Undly_78.add_attribute("PutCall", "2083471490"); // 1
    Undly_78_set.insert("2083471490");
    all_values.push_back(Undly_78_set);
    all_compo_names.insert("Undly_78_set");

    {
      xml_element UndAID_78{"UndAID"};
      multiset<string> UndAID_78_set;
      UndAID_78.add_attribute("AltID", "UnderlyingSecurityAltID_t_1042357088"); // 2
      UndAID_78_set.insert("UnderlyingSecurityAltID_t_1042357088");
      UndAID_78.add_attribute("AltIDSrc", "K"); // 2
      UndAID_78_set.insert("K");
      all_values.push_back(UndAID_78_set);
      all_compo_names.insert("UndAID_78_set");

      Undly_78.add_element(UndAID_78);
    }
    {
      xml_element Stip_114{"Stip"};
      multiset<string> Stip_114_set;
      Stip_114.add_attribute("Typ", "AMT"); // 2
      Stip_114_set.insert("AMT");
      Stip_114.add_attribute("Val", "UnderlyingStipValue_t_1703362799"); // 2
      Stip_114_set.insert("UnderlyingStipValue_t_1703362799");
      all_values.push_back(Stip_114_set);
      all_compo_names.insert("Stip_114_set");

      Undly_78.add_element(Stip_114);
    }
    {
      xml_element Pty_315{"Pty"};
      multiset<string> Pty_315_set;
      Pty_315.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1664509364"); // 2
      Pty_315_set.insert("UnderlyingInstrumentPartyID_t_1664509364");
      Pty_315.add_attribute("Src", "E"); // 2
      Pty_315_set.insert("E");
      Pty_315.add_attribute("R", "48"); // 2
      Pty_315_set.insert("48");
      all_values.push_back(Pty_315_set);
      all_compo_names.insert("Pty_315_set");

      {
        xml_element Sub_315{"Sub"};
        multiset<string> Sub_315_set;
        Sub_315.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2011638889"); // 3
        Sub_315_set.insert("UnderlyingInstrumentPartySubID_t_2011638889");
        Sub_315.add_attribute("Typ", "16"); // 3
        Sub_315_set.insert("16");
        all_values.push_back(Sub_315_set);
        all_compo_names.insert("Sub_315_set");

        Pty_315.add_element(Sub_315);
      }
      Undly_78.add_element(Pty_315);
    }
    elt.add_element(Undly_78);
  } // end Undly
  { // Undly
    xml_element Undly_79{"Undly"};
    multiset<string> Undly_79_set;
    Undly_79.add_attribute("Sym", "UnderlyingSymbol_t_746101730"); // 1
    Undly_79_set.insert("UnderlyingSymbol_t_746101730");
    Undly_79.add_attribute("Sfx", "WI"); // 1
    Undly_79_set.insert("WI");
    Undly_79.add_attribute("ID", "UnderlyingSecurityID_t_1935698072"); // 1
    Undly_79_set.insert("UnderlyingSecurityID_t_1935698072");
    Undly_79.add_attribute("Src", "5"); // 1
    Undly_79_set.insert("5");
    Undly_79.add_attribute("Prod", "2"); // 1
    Undly_79_set.insert("2");
    Undly_79.add_attribute("CFI", "UnderlyingCFICode_t_1609276452"); // 1
    Undly_79_set.insert("UnderlyingCFICode_t_1609276452");
    Undly_79.add_attribute("SecTyp", "OOP"); // 1
    Undly_79_set.insert("OOP");
    Undly_79.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2122077816"); // 1
    Undly_79_set.insert("UnderlyingSecuritySubType_t_2122077816");
    Undly_79.add_attribute("MMY", "1277438791"); // 1
    Undly_79_set.insert("1277438791");
    Undly_79.add_attribute("Mat", "UnderlyingMaturityDate_t_206377536"); // 1
    Undly_79_set.insert("UnderlyingMaturityDate_t_206377536");
    Undly_79.add_attribute("MatTm", "875667240"); // 1
    Undly_79_set.insert("875667240");
    Undly_79.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_466941684"); // 1
    Undly_79_set.insert("UnderlyingCouponPaymentDate_t_466941684");
    Undly_79.add_attribute("RestrctTyp", "XR"); // 1
    Undly_79_set.insert("XR");
    Undly_79.add_attribute("Snrty", "SD"); // 1
    Undly_79_set.insert("SD");
    Undly_79.add_attribute("NotlPctOut", "7815552.810000"); // 1
    Undly_79_set.insert("7815552.810000");
    Undly_79.add_attribute("OrigNotlPctOut", "4176752.890000"); // 1
    Undly_79_set.insert("4176752.890000");
    Undly_79.add_attribute("AttchPnt", "3144468.500000"); // 1
    Undly_79_set.insert("3144468.500000");
    Undly_79.add_attribute("DetchPnt", "10850195.500000"); // 1
    Undly_79_set.insert("10850195.500000");
    Undly_79.add_attribute("Issued", "UnderlyingIssueDate_t_1451512966"); // 1
    Undly_79_set.insert("UnderlyingIssueDate_t_1451512966");
    Undly_79.add_attribute("RepoCollSecTyp", "222328866"); // 1
    Undly_79_set.insert("222328866");
    Undly_79.add_attribute("RepoTrm", "209412164"); // 1
    Undly_79_set.insert("209412164");
    Undly_79.add_attribute("RepoRt", "13875008.090000"); // 1
    Undly_79_set.insert("13875008.090000");
    Undly_79.add_attribute("Fctr", "12646859.550000"); // 1
    Undly_79_set.insert("12646859.550000");
    Undly_79.add_attribute("CrdRtg", "UnderlyingCreditRating_t_28478286"); // 1
    Undly_79_set.insert("UnderlyingCreditRating_t_28478286");
    Undly_79.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1814695850"); // 1
    Undly_79_set.insert("UnderlyingInstrRegistry_t_1814695850");
    Undly_79.add_attribute("Ctry", "820565106"); // 1
    Undly_79_set.insert("820565106");
    Undly_79.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1692987650"); // 1
    Undly_79_set.insert("UnderlyingStateOrProvinceOfIssue_t_1692987650");
    Undly_79.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1546263481"); // 1
    Undly_79_set.insert("UnderlyingLocaleOfIssue_t_1546263481");
    Undly_79.add_attribute("Redeem", "UnderlyingRedemptionDate_t_640134704"); // 1
    Undly_79_set.insert("UnderlyingRedemptionDate_t_640134704");
    Undly_79.add_attribute("StrkPx", "15571428.920000"); // 1
    Undly_79_set.insert("15571428.920000");
    Undly_79.add_attribute("StrkCcy", "JPY"); // 1
    Undly_79_set.insert("JPY");
    Undly_79.add_attribute("OptA", "408577901"); // 1
    Undly_79_set.insert("408577901");
    Undly_79.add_attribute("Mult", "20611317.420000"); // 1
    Undly_79_set.insert("20611317.420000");
    Undly_79.add_attribute("MultTyp", "1"); // 1
    Undly_79_set.insert("1");
    Undly_79.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_79_set.insert("0");
    Undly_79.add_attribute("UOM", "MWh"); // 1
    Undly_79_set.insert("MWh");
    Undly_79.add_attribute("UOMQty", "14726591.770000"); // 1
    Undly_79_set.insert("14726591.770000");
    Undly_79.add_attribute("PxUOM", "MWh"); // 1
    Undly_79_set.insert("MWh");
    Undly_79.add_attribute("PxUOMQty", "6528796.900000"); // 1
    Undly_79_set.insert("6528796.900000");
    Undly_79.add_attribute("TmUnit", "Wk"); // 1
    Undly_79_set.insert("Wk");
    Undly_79.add_attribute("ExerStyle", "2"); // 1
    Undly_79_set.insert("2");
    Undly_79.add_attribute("CpnRt", "11198213.740000"); // 1
    Undly_79_set.insert("11198213.740000");
    Undly_79.add_attribute("Exch", "UnderlyingSecurityExchange_t_676666181"); // 1
    Undly_79_set.insert("UnderlyingSecurityExchange_t_676666181");
    Undly_79.add_attribute("Issr", "UnderlyingIssuer_t_1185804830"); // 1
    Undly_79_set.insert("UnderlyingIssuer_t_1185804830");
    Undly_79.add_attribute("EncUndIssrLen", "1901376655"); // 1
    Undly_79_set.insert("1901376655");
    Undly_79.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1094341470"); // 1
    Undly_79_set.insert("EncodedUnderlyingIssuer_t_1094341470");
    Undly_79.add_attribute("Desc", "UnderlyingSecurityDesc_t_1500251680"); // 1
    Undly_79_set.insert("UnderlyingSecurityDesc_t_1500251680");
    Undly_79.add_attribute("EncUndSecDescLen", "838912557"); // 1
    Undly_79_set.insert("838912557");
    Undly_79.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_398370788"); // 1
    Undly_79_set.insert("EncodedUnderlyingSecurityDesc_t_398370788");
    Undly_79.add_attribute("CPPgm", "UnderlyingCPProgram_t_1722580547"); // 1
    Undly_79_set.insert("UnderlyingCPProgram_t_1722580547");
    Undly_79.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1048324721"); // 1
    Undly_79_set.insert("UnderlyingCPRegType_t_1048324721");
    Undly_79.add_attribute("AllocPct", "17858715.970000"); // 1
    Undly_79_set.insert("17858715.970000");
    Undly_79.add_attribute("Ccy", "USD"); // 1
    Undly_79_set.insert("USD");
    Undly_79.add_attribute("Qty", "14530837.990000"); // 1
    Undly_79_set.insert("14530837.990000");
    Undly_79.add_attribute("SettlTyp", "2"); // 1
    Undly_79_set.insert("2");
    Undly_79.add_attribute("CashAmt", "UnderlyingCashAmount_t_622307010"); // 1
    Undly_79_set.insert("UnderlyingCashAmount_t_622307010");
    Undly_79.add_attribute("CashTyp", "DIFF"); // 1
    Undly_79_set.insert("DIFF");
    Undly_79.add_attribute("Px", "1529990.160000"); // 1
    Undly_79_set.insert("1529990.160000");
    Undly_79.add_attribute("DirtPx", "319662.540000"); // 1
    Undly_79_set.insert("319662.540000");
    Undly_79.add_attribute("EndPx", "9772973.030000"); // 1
    Undly_79_set.insert("9772973.030000");
    Undly_79.add_attribute("StartVal", "UnderlyingStartValue_t_1539235451"); // 1
    Undly_79_set.insert("UnderlyingStartValue_t_1539235451");
    Undly_79.add_attribute("CurVal", "UnderlyingCurrentValue_t_440544156"); // 1
    Undly_79_set.insert("UnderlyingCurrentValue_t_440544156");
    Undly_79.add_attribute("EndVal", "UnderlyingEndValue_t_890945397"); // 1
    Undly_79_set.insert("UnderlyingEndValue_t_890945397");
    Undly_79.add_attribute("AdjQty", "10359517.270000"); // 1
    Undly_79_set.insert("10359517.270000");
    Undly_79.add_attribute("FxRate", "19354552.460000"); // 1
    Undly_79_set.insert("19354552.460000");
    Undly_79.add_attribute("FxRateCalc", "M"); // 1
    Undly_79_set.insert("M");
    Undly_79.add_attribute("CapValu", "UnderlyingCapValue_t_361127256"); // 1
    Undly_79_set.insert("UnderlyingCapValue_t_361127256");
    Undly_79.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1257476856"); // 1
    Undly_79_set.insert("UnderlyingSettlMethod_t_1257476856");
    Undly_79.add_attribute("PutCall", "919265986"); // 1
    Undly_79_set.insert("919265986");
    all_values.push_back(Undly_79_set);
    all_compo_names.insert("Undly_79_set");

    {
      xml_element UndAID_79{"UndAID"};
      multiset<string> UndAID_79_set;
      UndAID_79.add_attribute("AltID", "UnderlyingSecurityAltID_t_2040163970"); // 2
      UndAID_79_set.insert("UnderlyingSecurityAltID_t_2040163970");
      UndAID_79.add_attribute("AltIDSrc", "I"); // 2
      UndAID_79_set.insert("I");
      all_values.push_back(UndAID_79_set);
      all_compo_names.insert("UndAID_79_set");

      Undly_79.add_element(UndAID_79);
    }
    {
      xml_element Stip_115{"Stip"};
      multiset<string> Stip_115_set;
      Stip_115.add_attribute("Typ", "ABS"); // 2
      Stip_115_set.insert("ABS");
      Stip_115.add_attribute("Val", "UnderlyingStipValue_t_569346503"); // 2
      Stip_115_set.insert("UnderlyingStipValue_t_569346503");
      all_values.push_back(Stip_115_set);
      all_compo_names.insert("Stip_115_set");

      Undly_79.add_element(Stip_115);
    }
    {
      xml_element Pty_316{"Pty"};
      multiset<string> Pty_316_set;
      Pty_316.add_attribute("ID", "UnderlyingInstrumentPartyID_t_493486890"); // 2
      Pty_316_set.insert("UnderlyingInstrumentPartyID_t_493486890");
      Pty_316.add_attribute("Src", "8"); // 2
      Pty_316_set.insert("8");
      Pty_316.add_attribute("R", "26"); // 2
      Pty_316_set.insert("26");
      all_values.push_back(Pty_316_set);
      all_compo_names.insert("Pty_316_set");

      {
        xml_element Sub_316{"Sub"};
        multiset<string> Sub_316_set;
        Sub_316.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1993738570"); // 3
        Sub_316_set.insert("UnderlyingInstrumentPartySubID_t_1993738570");
        Sub_316.add_attribute("Typ", "33"); // 3
        Sub_316_set.insert("33");
        all_values.push_back(Sub_316_set);
        all_compo_names.insert("Sub_316_set");

        Pty_316.add_element(Sub_316);
      }
      Undly_79.add_element(Pty_316);
    }
    elt.add_element(Undly_79);
  } // end Undly
  { // TrdSes
    xml_element TrdSes_17{"TrdSes"};
    multiset<string> TrdSes_17_set;
    TrdSes_17.add_attribute("SesID", "2"); // 1
    TrdSes_17_set.insert("2");
    TrdSes_17.add_attribute("SesSub", "6"); // 1
    TrdSes_17_set.insert("6");
    all_values.push_back(TrdSes_17_set);
    all_compo_names.insert("TrdSes_17_set");

    elt.add_element(TrdSes_17);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_18{"TrdSes"};
    multiset<string> TrdSes_18_set;
    TrdSes_18.add_attribute("SesID", "2"); // 1
    TrdSes_18_set.insert("2");
    TrdSes_18.add_attribute("SesSub", "5"); // 1
    TrdSes_18_set.insert("5");
    all_values.push_back(TrdSes_18_set);
    all_compo_names.insert("TrdSes_18_set");

    elt.add_element(TrdSes_18);
  } // end TrdSes
  { // Qty
    xml_element Qty_7{"Qty"};
    multiset<string> Qty_7_set;
    Qty_7.add_attribute("Typ", "DLT"); // 1
    Qty_7_set.insert("DLT");
    Qty_7.add_attribute("Long", "19214826.360000"); // 1
    Qty_7_set.insert("19214826.360000");
    Qty_7.add_attribute("Short", "10843603.680000"); // 1
    Qty_7_set.insert("10843603.680000");
    Qty_7.add_attribute("Stat", "1"); // 1
    Qty_7_set.insert("1");
    Qty_7.add_attribute("QtyDt", "QuantityDate_t_2074481652"); // 1
    Qty_7_set.insert("QuantityDate_t_2074481652");
    all_values.push_back(Qty_7_set);
    all_compo_names.insert("Qty_7_set");

    {
      xml_element Pty_317{"Pty"};
      multiset<string> Pty_317_set;
      Pty_317.add_attribute("ID", "NestedPartyID_t_1116326623"); // 2
      Pty_317_set.insert("NestedPartyID_t_1116326623");
      Pty_317.add_attribute("Src", "5"); // 2
      Pty_317_set.insert("5");
      Pty_317.add_attribute("R", "24"); // 2
      Pty_317_set.insert("24");
      all_values.push_back(Pty_317_set);
      all_compo_names.insert("Pty_317_set");

      {
        xml_element Sub_317{"Sub"};
        multiset<string> Sub_317_set;
        Sub_317.add_attribute("ID", "NestedPartySubID_t_1556870779"); // 3
        Sub_317_set.insert("NestedPartySubID_t_1556870779");
        Sub_317.add_attribute("Typ", "14"); // 3
        Sub_317_set.insert("14");
        all_values.push_back(Sub_317_set);
        all_compo_names.insert("Sub_317_set");

        Pty_317.add_element(Sub_317);
      }
      Qty_7.add_element(Pty_317);
    }
    elt.add_element(Qty_7);
  } // end Qty
  { // Amt
    xml_element Amt_13{"Amt"};
    multiset<string> Amt_13_set;
    Amt_13.add_attribute("Typ", "VADJ"); // 1
    Amt_13_set.insert("VADJ");
    Amt_13.add_attribute("Amt", "PosAmt_t_1845055844"); // 1
    Amt_13_set.insert("PosAmt_t_1845055844");
    Amt_13.add_attribute("Ccy", "PositionCurrency_t_715828791"); // 1
    Amt_13_set.insert("PositionCurrency_t_715828791");
    all_values.push_back(Amt_13_set);
    all_compo_names.insert("Amt_13_set");

    elt.add_element(Amt_13);
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
