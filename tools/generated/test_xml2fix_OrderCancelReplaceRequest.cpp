#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/OrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( OrderCancelReplaceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"OrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> OrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_2119286919"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrderID_t_2119286919");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_104431119"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TradeOriginationDate_t_104431119");
  elt.add_attribute("TrdDt", "TradeDate_t_40727340"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TradeDate_t_40727340");
  elt.add_attribute("OrigID", "OrigClOrdID_t_1642250161"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrigClOrdID_t_1642250161");
  elt.add_attribute("ID", "ClOrdID_t_1824512408"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ClOrdID_t_1824512408");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_117065654"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SecondaryClOrdID_t_117065654");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1421110877"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ClOrdLinkID_t_1421110877");
  elt.add_attribute("ListID", "ListID_t_174290003"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ListID_t_174290003");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1391689601"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("OrigOrdModTime_t_1391689601");
  elt.add_attribute("Acct", "Account_t_957041376"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Account_t_957041376");
  elt.add_attribute("AcctIDSrc", "5"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("DayBkngInst", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("BkngUnit", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("PreallocMeth", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_483911971"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("AllocID_t_483911971");
  elt.add_attribute("SettlTyp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("SettlDt", "SettlDate_t_1366125256"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SettlDate_t_1366125256");
  elt.add_attribute("CshMgn", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("ClrFeeInd", "H"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("H");
  elt.add_attribute("HandlInst", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("MinQty", "12389368.330000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("12389368.330000");
  elt.add_attribute("MtchInc", "13974082.260000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("13974082.260000");
  elt.add_attribute("MxPxLvls", "353928118"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("353928118");
  elt.add_attribute("MaxFloor", "5569177.890000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("5569177.890000");
  elt.add_attribute("ExDest", "ExDestination_t_780121697"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExDestination_t_780121697");
  elt.add_attribute("ExDestIDSrc", "B"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("B");
  elt.add_attribute("Side", "8"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("8");
  elt.add_attribute("TxnTm", "TransactTime_t_1764521276"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TransactTime_t_1764521276");
  elt.add_attribute("QtyTyp", "0"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("Typ", "7"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("7");
  elt.add_attribute("PxTyp", "13"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("13");
  elt.add_attribute("Px", "13654422.150000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("13654422.150000");
  elt.add_attribute("PxPrtScp", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("StopPx", "15459811.550000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("15459811.550000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_2104575244"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("TargetStrategyParameters_t_2104575244");
  elt.add_attribute("ParticipationRt", "17202711.590000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("17202711.590000");
  elt.add_attribute("ComplianceID", "ComplianceID_t_726713823"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ComplianceID_t_726713823");
  elt.add_attribute("SolFlag", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("Ccy", "GBP"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("GBP");
  elt.add_attribute("TmInForce", "6"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("6");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1677879751"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EffectiveTime_t_1677879751");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1997277765"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExpireDate_t_1997277765");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1435951968"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ExpireTime_t_1435951968");
  elt.add_attribute("GTBkngInst", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "W"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("W");
  elt.add_attribute("Rstctions", "C"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("C");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "3"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("ForexReq", "Y"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("SettlCcy", "USD"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("USD");
  elt.add_attribute("BkngTyp", "2"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_30782031"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Text_t_30782031");
  elt.add_attribute("EncTxtLen", "1000622406"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1000622406");
  elt.add_attribute("EncTxt", "EncodedText_t_1772410250"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("EncodedText_t_1772410250");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1247676614"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SettlDate2_t_1247676614");
  elt.add_attribute("Qty2", "6176600.340000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("6176600.340000");
  elt.add_attribute("Px2", "9496414.780000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("9496414.780000");
  elt.add_attribute("PosEfct", "F"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("F");
  elt.add_attribute("Covered", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("MaxShow", "1676000.450000"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1676000.450000");
  elt.add_attribute("LocReqd", "N"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("CxllationRights", "N"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("RegistID", "RegistID_t_929446785"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("RegistID_t_929446785");
  elt.add_attribute("Designation", "Designation_t_1457897448"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("Designation_t_1457897448");
  elt.add_attribute("ManOrdInd", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("CustDrctdOrd", "true"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("true");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1579414195"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("ReceivedDeptID_t_1579414195");
  elt.add_attribute("CustOrdHdlInst", "SCL"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("SCL");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  OrderCancelReplaceRequest_message_t_0.insert("1");
  all_values.push_back(OrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("OrderCancelReplaceRequest_message_t");

  { // Hdr
    xml_element Hdr_57{"Hdr"};
    multiset<string> Hdr_57_set;
    Hdr_57.add_attribute("SeqNum", "1109810298"); // 1
    Hdr_57_set.insert("1109810298");
    Hdr_57.add_attribute("SID", "SenderCompID_t_392229393"); // 1
    Hdr_57_set.insert("SenderCompID_t_392229393");
    Hdr_57.add_attribute("TID", "TargetCompID_t_2084088074"); // 1
    Hdr_57_set.insert("TargetCompID_t_2084088074");
    Hdr_57.add_attribute("OBID", "OnBehalfOfCompID_t_1191854480"); // 1
    Hdr_57_set.insert("OnBehalfOfCompID_t_1191854480");
    Hdr_57.add_attribute("D2ID", "DeliverToCompID_t_1608148766"); // 1
    Hdr_57_set.insert("DeliverToCompID_t_1608148766");
    Hdr_57.add_attribute("SSub", "SenderSubID_t_276943682"); // 1
    Hdr_57_set.insert("SenderSubID_t_276943682");
    Hdr_57.add_attribute("SLoc", "SenderLocationID_t_1574265536"); // 1
    Hdr_57_set.insert("SenderLocationID_t_1574265536");
    Hdr_57.add_attribute("TSub", "TargetSubID_t_431241249"); // 1
    Hdr_57_set.insert("TargetSubID_t_431241249");
    Hdr_57.add_attribute("TLoc", "TargetLocationID_t_1982612668"); // 1
    Hdr_57_set.insert("TargetLocationID_t_1982612668");
    Hdr_57.add_attribute("OBSub", "OnBehalfOfSubID_t_1048129778"); // 1
    Hdr_57_set.insert("OnBehalfOfSubID_t_1048129778");
    Hdr_57.add_attribute("OBLoc", "OnBehalfOfLocationID_t_651741957"); // 1
    Hdr_57_set.insert("OnBehalfOfLocationID_t_651741957");
    Hdr_57.add_attribute("D2Sub", "DeliverToSubID_t_1894726123"); // 1
    Hdr_57_set.insert("DeliverToSubID_t_1894726123");
    Hdr_57.add_attribute("D2Loc", "DeliverToLocationID_t_1078911809"); // 1
    Hdr_57_set.insert("DeliverToLocationID_t_1078911809");
    Hdr_57.add_attribute("PosDup", "Y"); // 1
    Hdr_57_set.insert("Y");
    Hdr_57.add_attribute("PosRsnd", "N"); // 1
    Hdr_57_set.insert("N");
    Hdr_57.add_attribute("Snt", "SendingTime_t_179104775"); // 1
    Hdr_57_set.insert("SendingTime_t_179104775");
    Hdr_57.add_attribute("OrigSnt", "OrigSendingTime_t_122540749"); // 1
    Hdr_57_set.insert("OrigSendingTime_t_122540749");
    Hdr_57.add_attribute("MsgEncd", "MessageEncoding_t_321810556"); // 1
    Hdr_57_set.insert("MessageEncoding_t_321810556");
    all_values.push_back(Hdr_57_set);
    all_compo_names.insert("Hdr_57_set");

    {
      xml_element Hop_57{"Hop"};
      multiset<string> Hop_57_set;
      Hop_57.add_attribute("ID", "HopCompID_t_467995596"); // 2
      Hop_57_set.insert("HopCompID_t_467995596");
      Hop_57.add_attribute("Ref", "461669531"); // 2
      Hop_57_set.insert("461669531");
      Hop_57.add_attribute("Snt", "HopSendingTime_t_489410601"); // 2
      Hop_57_set.insert("HopSendingTime_t_489410601");
      all_values.push_back(Hop_57_set);
      all_compo_names.insert("Hop_57_set");

      Hdr_57.add_element(Hop_57);
    }
    elt.add_element(Hdr_57);
  } // end Hdr
  { // Pty
    xml_element Pty_265{"Pty"};
    multiset<string> Pty_265_set;
    Pty_265.add_attribute("ID", "PartyID_t_199295820"); // 1
    Pty_265_set.insert("PartyID_t_199295820");
    Pty_265.add_attribute("Src", "G"); // 1
    Pty_265_set.insert("G");
    Pty_265.add_attribute("R", "34"); // 1
    Pty_265_set.insert("34");
    all_values.push_back(Pty_265_set);
    all_compo_names.insert("Pty_265_set");

    {
      xml_element Sub_265{"Sub"};
      multiset<string> Sub_265_set;
      Sub_265.add_attribute("ID", "PartySubID_t_1657193268"); // 2
      Sub_265_set.insert("PartySubID_t_1657193268");
      Sub_265.add_attribute("Typ", "24"); // 2
      Sub_265_set.insert("24");
      all_values.push_back(Sub_265_set);
      all_compo_names.insert("Sub_265_set");

      Pty_265.add_element(Sub_265);
    }
    elt.add_element(Pty_265);
  } // end Pty
  { // Pty
    xml_element Pty_266{"Pty"};
    multiset<string> Pty_266_set;
    Pty_266.add_attribute("ID", "PartyID_t_2065893680"); // 1
    Pty_266_set.insert("PartyID_t_2065893680");
    Pty_266.add_attribute("Src", "C"); // 1
    Pty_266_set.insert("C");
    Pty_266.add_attribute("R", "25"); // 1
    Pty_266_set.insert("25");
    all_values.push_back(Pty_266_set);
    all_compo_names.insert("Pty_266_set");

    {
      xml_element Sub_266{"Sub"};
      multiset<string> Sub_266_set;
      Sub_266.add_attribute("ID", "PartySubID_t_566546138"); // 2
      Sub_266_set.insert("PartySubID_t_566546138");
      Sub_266.add_attribute("Typ", "1"); // 2
      Sub_266_set.insert("1");
      all_values.push_back(Sub_266_set);
      all_compo_names.insert("Sub_266_set");

      Pty_266.add_element(Sub_266);
    }
    elt.add_element(Pty_266);
  } // end Pty
  { // PreAll
    xml_element PreAll_19{"PreAll"};
    multiset<string> PreAll_19_set;
    PreAll_19.add_attribute("Acct", "AllocAccount_t_503150565"); // 1
    PreAll_19_set.insert("AllocAccount_t_503150565");
    PreAll_19.add_attribute("ActIDSrc", "1"); // 1
    PreAll_19_set.insert("1");
    PreAll_19.add_attribute("AllocSettlCcy", "CAN"); // 1
    PreAll_19_set.insert("CAN");
    PreAll_19.add_attribute("IndAllocID", "IndividualAllocID_t_670086834"); // 1
    PreAll_19_set.insert("IndividualAllocID_t_670086834");
    PreAll_19.add_attribute("Qty", "10479439.970000"); // 1
    PreAll_19_set.insert("10479439.970000");
    all_values.push_back(PreAll_19_set);
    all_compo_names.insert("PreAll_19_set");

    {
      xml_element Pty_267{"Pty"};
      multiset<string> Pty_267_set;
      Pty_267.add_attribute("ID", "NestedPartyID_t_615223267"); // 2
      Pty_267_set.insert("NestedPartyID_t_615223267");
      Pty_267.add_attribute("Src", "9"); // 2
      Pty_267_set.insert("9");
      Pty_267.add_attribute("R", "53"); // 2
      Pty_267_set.insert("53");
      all_values.push_back(Pty_267_set);
      all_compo_names.insert("Pty_267_set");

      {
        xml_element Sub_267{"Sub"};
        multiset<string> Sub_267_set;
        Sub_267.add_attribute("ID", "NestedPartySubID_t_362465743"); // 3
        Sub_267_set.insert("NestedPartySubID_t_362465743");
        Sub_267.add_attribute("Typ", "17"); // 3
        Sub_267_set.insert("17");
        all_values.push_back(Sub_267_set);
        all_compo_names.insert("Sub_267_set");

        Pty_267.add_element(Sub_267);
      }
      PreAll_19.add_element(Pty_267);
    }
    elt.add_element(PreAll_19);
  } // end PreAll
  { // PreAll
    xml_element PreAll_20{"PreAll"};
    multiset<string> PreAll_20_set;
    PreAll_20.add_attribute("Acct", "AllocAccount_t_1204566670"); // 1
    PreAll_20_set.insert("AllocAccount_t_1204566670");
    PreAll_20.add_attribute("ActIDSrc", "4"); // 1
    PreAll_20_set.insert("4");
    PreAll_20.add_attribute("AllocSettlCcy", "CAN"); // 1
    PreAll_20_set.insert("CAN");
    PreAll_20.add_attribute("IndAllocID", "IndividualAllocID_t_56445377"); // 1
    PreAll_20_set.insert("IndividualAllocID_t_56445377");
    PreAll_20.add_attribute("Qty", "12967451.450000"); // 1
    PreAll_20_set.insert("12967451.450000");
    all_values.push_back(PreAll_20_set);
    all_compo_names.insert("PreAll_20_set");

    {
      xml_element Pty_268{"Pty"};
      multiset<string> Pty_268_set;
      Pty_268.add_attribute("ID", "NestedPartyID_t_1788776950"); // 2
      Pty_268_set.insert("NestedPartyID_t_1788776950");
      Pty_268.add_attribute("Src", "3"); // 2
      Pty_268_set.insert("3");
      Pty_268.add_attribute("R", "72"); // 2
      Pty_268_set.insert("72");
      all_values.push_back(Pty_268_set);
      all_compo_names.insert("Pty_268_set");

      {
        xml_element Sub_268{"Sub"};
        multiset<string> Sub_268_set;
        Sub_268.add_attribute("ID", "NestedPartySubID_t_1988072770"); // 3
        Sub_268_set.insert("NestedPartySubID_t_1988072770");
        Sub_268.add_attribute("Typ", "5"); // 3
        Sub_268_set.insert("5");
        all_values.push_back(Sub_268_set);
        all_compo_names.insert("Sub_268_set");

        Pty_268.add_element(Sub_268);
      }
      PreAll_20.add_element(Pty_268);
    }
    elt.add_element(PreAll_20);
  } // end PreAll
  { // DsplyInstr
    xml_element DsplyInstr_7{"DsplyInstr"};
    multiset<string> DsplyInstr_7_set;
    DsplyInstr_7.add_attribute("DisplayQty", "8119262.040000"); // 1
    DsplyInstr_7_set.insert("8119262.040000");
    DsplyInstr_7.add_attribute("SecDspQty", "14977823.900000"); // 1
    DsplyInstr_7_set.insert("14977823.900000");
    DsplyInstr_7.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_7_set.insert("2");
    DsplyInstr_7.add_attribute("DspMthd", "1"); // 1
    DsplyInstr_7_set.insert("1");
    DsplyInstr_7.add_attribute("DsplLwQty", "4394225.570000"); // 1
    DsplyInstr_7_set.insert("4394225.570000");
    DsplyInstr_7.add_attribute("DisplayHighQty", "15230720.430000"); // 1
    DsplyInstr_7_set.insert("15230720.430000");
    DsplyInstr_7.add_attribute("DspMinIncr", "12968823.750000"); // 1
    DsplyInstr_7_set.insert("12968823.750000");
    DsplyInstr_7.add_attribute("RfrshQty", "4908730.230000"); // 1
    DsplyInstr_7_set.insert("4908730.230000");
    all_values.push_back(DsplyInstr_7_set);
    all_compo_names.insert("DsplyInstr_7_set");

    elt.add_element(DsplyInstr_7);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_12{"TrdSes"};
    multiset<string> TrdSes_12_set;
    TrdSes_12.add_attribute("SesID", "1"); // 1
    TrdSes_12_set.insert("1");
    TrdSes_12.add_attribute("SesSub", "7"); // 1
    TrdSes_12_set.insert("7");
    all_values.push_back(TrdSes_12_set);
    all_compo_names.insert("TrdSes_12_set");

    elt.add_element(TrdSes_12);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_13{"TrdSes"};
    multiset<string> TrdSes_13_set;
    TrdSes_13.add_attribute("SesID", "5"); // 1
    TrdSes_13_set.insert("5");
    TrdSes_13.add_attribute("SesSub", "7"); // 1
    TrdSes_13_set.insert("7");
    all_values.push_back(TrdSes_13_set);
    all_compo_names.insert("TrdSes_13_set");

    elt.add_element(TrdSes_13);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_14{"TrdSes"};
    multiset<string> TrdSes_14_set;
    TrdSes_14.add_attribute("SesID", "2"); // 1
    TrdSes_14_set.insert("2");
    TrdSes_14.add_attribute("SesSub", "4"); // 1
    TrdSes_14_set.insert("4");
    all_values.push_back(TrdSes_14_set);
    all_compo_names.insert("TrdSes_14_set");

    elt.add_element(TrdSes_14);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_47{"Instrmt"};
    multiset<string> Instrmt_47_set;
    Instrmt_47.add_attribute("Sym", "Symbol_t_1047866807"); // 1
    Instrmt_47_set.insert("Symbol_t_1047866807");
    Instrmt_47.add_attribute("Sfx", "CD"); // 1
    Instrmt_47_set.insert("CD");
    Instrmt_47.add_attribute("ID", "SecurityID_t_1748475076"); // 1
    Instrmt_47_set.insert("SecurityID_t_1748475076");
    Instrmt_47.add_attribute("Src", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("Prod", "12"); // 1
    Instrmt_47_set.insert("12");
    Instrmt_47.add_attribute("ProdCmplx", "ProductComplex_t_805558098"); // 1
    Instrmt_47_set.insert("ProductComplex_t_805558098");
    Instrmt_47.add_attribute("SecGrp", "SecurityGroup_t_1144967371"); // 1
    Instrmt_47_set.insert("SecurityGroup_t_1144967371");
    Instrmt_47.add_attribute("CFI", "CFICode_t_1305908442"); // 1
    Instrmt_47_set.insert("CFICode_t_1305908442");
    Instrmt_47.add_attribute("SecTyp", "STRUCT"); // 1
    Instrmt_47_set.insert("STRUCT");
    Instrmt_47.add_attribute("SubTyp", "SecuritySubType_t_1201412748"); // 1
    Instrmt_47_set.insert("SecuritySubType_t_1201412748");
    Instrmt_47.add_attribute("MMY", "455169940"); // 1
    Instrmt_47_set.insert("455169940");
    Instrmt_47.add_attribute("MatDt", "MaturityDate_t_1773958820"); // 1
    Instrmt_47_set.insert("MaturityDate_t_1773958820");
    Instrmt_47.add_attribute("MatTm", "1747268726"); // 1
    Instrmt_47_set.insert("1747268726");
    Instrmt_47.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1044782222"); // 1
    Instrmt_47_set.insert("SettleOnOpenFlag_t_1044782222");
    Instrmt_47.add_attribute("AsgnMeth", "1614547942"); // 1
    Instrmt_47_set.insert("1614547942");
    Instrmt_47.add_attribute("Status", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("CpnPmt", "CouponPaymentDate_t_1856708427"); // 1
    Instrmt_47_set.insert("CouponPaymentDate_t_1856708427");
    Instrmt_47.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_47_set.insert("MR");
    Instrmt_47.add_attribute("Snrty", "SD"); // 1
    Instrmt_47_set.insert("SD");
    Instrmt_47.add_attribute("NotlPctOut", "4395610.150000"); // 1
    Instrmt_47_set.insert("4395610.150000");
    Instrmt_47.add_attribute("OrigNotlPctOut", "14042692.420000"); // 1
    Instrmt_47_set.insert("14042692.420000");
    Instrmt_47.add_attribute("AttchPnt", "2725281.280000"); // 1
    Instrmt_47_set.insert("2725281.280000");
    Instrmt_47.add_attribute("DetchPnt", "17364433.900000"); // 1
    Instrmt_47_set.insert("17364433.900000");
    Instrmt_47.add_attribute("Issued", "IssueDate_t_1895142265"); // 1
    Instrmt_47_set.insert("IssueDate_t_1895142265");
    Instrmt_47.add_attribute("RepoCollSecTyp", "804154152"); // 1
    Instrmt_47_set.insert("804154152");
    Instrmt_47.add_attribute("RepoTrm", "1388992682"); // 1
    Instrmt_47_set.insert("1388992682");
    Instrmt_47.add_attribute("RepoRt", "14818365.860000"); // 1
    Instrmt_47_set.insert("14818365.860000");
    Instrmt_47.add_attribute("Fctr", "19524829.250000"); // 1
    Instrmt_47_set.insert("19524829.250000");
    Instrmt_47.add_attribute("CrdRtg", "CreditRating_t_1821636222"); // 1
    Instrmt_47_set.insert("CreditRating_t_1821636222");
    Instrmt_47.add_attribute("Rgstry", "InstrRegistry_t_1738617742"); // 1
    Instrmt_47_set.insert("InstrRegistry_t_1738617742");
    Instrmt_47.add_attribute("IssuCtry", "2001272046"); // 1
    Instrmt_47_set.insert("2001272046");
    Instrmt_47.add_attribute("StPrv", "StateOrProvinceOfIssue_t_722019381"); // 1
    Instrmt_47_set.insert("StateOrProvinceOfIssue_t_722019381");
    Instrmt_47.add_attribute("Lcl", "LocaleOfIssue_t_1566131862"); // 1
    Instrmt_47_set.insert("LocaleOfIssue_t_1566131862");
    Instrmt_47.add_attribute("Redeem", "RedemptionDate_t_1602263474"); // 1
    Instrmt_47_set.insert("RedemptionDate_t_1602263474");
    Instrmt_47.add_attribute("StrkPx", "21323519.310000"); // 1
    Instrmt_47_set.insert("21323519.310000");
    Instrmt_47.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_47_set.insert("USD");
    Instrmt_47.add_attribute("StrkMult", "11298356.540000"); // 1
    Instrmt_47_set.insert("11298356.540000");
    Instrmt_47.add_attribute("StrkValu", "12017155.500000"); // 1
    Instrmt_47_set.insert("12017155.500000");
    Instrmt_47.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_47_set.insert("3");
    Instrmt_47.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_47_set.insert("5");
    Instrmt_47.add_attribute("StrkPxBndryPrcsn", "16568854.900000"); // 1
    Instrmt_47_set.insert("16568854.900000");
    Instrmt_47.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_47_set.insert("3");
    Instrmt_47.add_attribute("OptAt", "1931033480"); // 1
    Instrmt_47_set.insert("1931033480");
    Instrmt_47.add_attribute("Mult", "5541840.640000"); // 1
    Instrmt_47_set.insert("5541840.640000");
    Instrmt_47.add_attribute("MultTyp", "2"); // 1
    Instrmt_47_set.insert("2");
    Instrmt_47.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("MinPxIncr", "2634088.430000"); // 1
    Instrmt_47_set.insert("2634088.430000");
    Instrmt_47.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_303905945"); // 1
    Instrmt_47_set.insert("MinPriceIncrementAmount_t_303905945");
    Instrmt_47.add_attribute("UOM", "MWh"); // 1
    Instrmt_47_set.insert("MWh");
    Instrmt_47.add_attribute("UOMQty", "7029698.590000"); // 1
    Instrmt_47_set.insert("7029698.590000");
    Instrmt_47.add_attribute("PxUOM", "tn"); // 1
    Instrmt_47_set.insert("tn");
    Instrmt_47.add_attribute("PxUOMQty", "10906936.190000"); // 1
    Instrmt_47_set.insert("10906936.190000");
    Instrmt_47.add_attribute("SettlMeth", "P"); // 1
    Instrmt_47_set.insert("P");
    Instrmt_47.add_attribute("ExerStyle", "0"); // 1
    Instrmt_47_set.insert("0");
    Instrmt_47.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("OptPayAmt", "OptPayoutAmount_t_1680922284"); // 1
    Instrmt_47_set.insert("OptPayoutAmount_t_1680922284");
    Instrmt_47.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_47_set.insert("STD");
    Instrmt_47.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_47_set.insert("CDSD");
    Instrmt_47.add_attribute("ListMeth", "0"); // 1
    Instrmt_47_set.insert("0");
    Instrmt_47.add_attribute("CapPx", "3813208.380000"); // 1
    Instrmt_47_set.insert("3813208.380000");
    Instrmt_47.add_attribute("FlrPx", "15536354.470000"); // 1
    Instrmt_47_set.insert("15536354.470000");
    Instrmt_47.add_attribute("PutCall", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("FlexInd", "true"); // 1
    Instrmt_47_set.insert("true");
    Instrmt_47.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_47_set.insert("true");
    Instrmt_47.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_47_set.insert("Wk");
    Instrmt_47.add_attribute("CpnRt", "18432598.070000"); // 1
    Instrmt_47_set.insert("18432598.070000");
    Instrmt_47.add_attribute("Exch", "SecurityExchange_t_1268753198"); // 1
    Instrmt_47_set.insert("SecurityExchange_t_1268753198");
    Instrmt_47.add_attribute("PosLmt", "1044314528"); // 1
    Instrmt_47_set.insert("1044314528");
    Instrmt_47.add_attribute("NTPosLmt", "897491709"); // 1
    Instrmt_47_set.insert("897491709");
    Instrmt_47.add_attribute("Issr", "Issuer_t_1514272992"); // 1
    Instrmt_47_set.insert("Issuer_t_1514272992");
    Instrmt_47.add_attribute("EncIssrLen", "1228079282"); // 1
    Instrmt_47_set.insert("1228079282");
    Instrmt_47.add_attribute("EncIssr", "EncodedIssuer_t_406893551"); // 1
    Instrmt_47_set.insert("EncodedIssuer_t_406893551");
    Instrmt_47.add_attribute("Desc", "SecurityDesc_t_1386267958"); // 1
    Instrmt_47_set.insert("SecurityDesc_t_1386267958");
    Instrmt_47.add_attribute("EncSecDescLen", "1011629114"); // 1
    Instrmt_47_set.insert("1011629114");
    Instrmt_47.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_961077616"); // 1
    Instrmt_47_set.insert("EncodedSecurityDesc_t_961077616");
    Instrmt_47.add_attribute("Pool", "Pool_t_725327219"); // 1
    Instrmt_47_set.insert("Pool_t_725327219");
    Instrmt_47.add_attribute("CSetMo", "932854873"); // 1
    Instrmt_47_set.insert("932854873");
    Instrmt_47.add_attribute("CPPgm", "1"); // 1
    Instrmt_47_set.insert("1");
    Instrmt_47.add_attribute("CPRegT", "CPRegType_t_1029233164"); // 1
    Instrmt_47_set.insert("CPRegType_t_1029233164");
    Instrmt_47.add_attribute("Dated", "DatedDate_t_1751020364"); // 1
    Instrmt_47_set.insert("DatedDate_t_1751020364");
    Instrmt_47.add_attribute("IntAcrl", "InterestAccrualDate_t_1927456318"); // 1
    Instrmt_47_set.insert("InterestAccrualDate_t_1927456318");
    all_values.push_back(Instrmt_47_set);
    all_compo_names.insert("Instrmt_47_set");

    {
      xml_element AID_50{"AID"};
      multiset<string> AID_50_set;
      AID_50.add_attribute("AltID", "SecurityAltID_t_589924704"); // 2
      AID_50_set.insert("SecurityAltID_t_589924704");
      AID_50.add_attribute("AltIDSrc", "9"); // 2
      AID_50_set.insert("9");
      all_values.push_back(AID_50_set);
      all_compo_names.insert("AID_50_set");

      Instrmt_47.add_element(AID_50);
    }
    {
      xml_element SecXML_50{"SecXML"};
      multiset<string> SecXML_50_set;
      SecXML_50.add_attribute("Schema", "SecurityXMLSchema_t_71902272"); // 2
      SecXML_50_set.insert("SecurityXMLSchema_t_71902272");
      all_values.push_back(SecXML_50_set);
      all_compo_names.insert("SecXML_50_set");

      Instrmt_47.add_element(SecXML_50);
    }
    {
      xml_element Evnt_50{"Evnt"};
      multiset<string> Evnt_50_set;
      Evnt_50.add_attribute("EventTyp", "11"); // 2
      Evnt_50_set.insert("11");
      Evnt_50.add_attribute("Dt", "EventDate_t_441594460"); // 2
      Evnt_50_set.insert("EventDate_t_441594460");
      Evnt_50.add_attribute("Tm", "EventTime_t_1752824556"); // 2
      Evnt_50_set.insert("EventTime_t_1752824556");
      Evnt_50.add_attribute("Px", "6884616.060000"); // 2
      Evnt_50_set.insert("6884616.060000");
      Evnt_50.add_attribute("Txt", "EventText_t_2141441509"); // 2
      Evnt_50_set.insert("EventText_t_2141441509");
      all_values.push_back(Evnt_50_set);
      all_compo_names.insert("Evnt_50_set");

      Instrmt_47.add_element(Evnt_50);
    }
    {
      xml_element Pty_269{"Pty"};
      multiset<string> Pty_269_set;
      Pty_269.add_attribute("ID", "InstrumentPartyID_t_960415766"); // 2
      Pty_269_set.insert("InstrumentPartyID_t_960415766");
      Pty_269.add_attribute("Src", "1"); // 2
      Pty_269_set.insert("1");
      Pty_269.add_attribute("R", "74"); // 2
      Pty_269_set.insert("74");
      all_values.push_back(Pty_269_set);
      all_compo_names.insert("Pty_269_set");

      {
        xml_element Sub_269{"Sub"};
        multiset<string> Sub_269_set;
        Sub_269.add_attribute("ID", "InstrumentPartySubID_t_890026357"); // 3
        Sub_269_set.insert("InstrumentPartySubID_t_890026357");
        Sub_269.add_attribute("Typ", "32"); // 3
        Sub_269_set.insert("32");
        all_values.push_back(Sub_269_set);
        all_compo_names.insert("Sub_269_set");

        Pty_269.add_element(Sub_269);
      }
      Instrmt_47.add_element(Pty_269);
    }
    {
      xml_element CmplxEvnt_47{"CmplxEvnt"};
      multiset<string> CmplxEvnt_47_set;
      CmplxEvnt_47.add_attribute("Typ", "4"); // 2
      CmplxEvnt_47_set.insert("4");
      CmplxEvnt_47.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_804505231"); // 2
      CmplxEvnt_47_set.insert("ComplexOptPayoutAmount_t_804505231");
      CmplxEvnt_47.add_attribute("Px", "5655276.550000"); // 2
      CmplxEvnt_47_set.insert("5655276.550000");
      CmplxEvnt_47.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_47_set.insert("4");
      CmplxEvnt_47.add_attribute("PxBndryPrcsn", "18488197.590000"); // 2
      CmplxEvnt_47_set.insert("18488197.590000");
      CmplxEvnt_47.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_47_set.insert("3");
      CmplxEvnt_47.add_attribute("Cond", "2"); // 2
      CmplxEvnt_47_set.insert("2");
      all_values.push_back(CmplxEvnt_47_set);
      all_compo_names.insert("CmplxEvnt_47_set");

      {
        xml_element EvntDts_47{"EvntDts"};
        multiset<string> EvntDts_47_set;
        EvntDts_47.add_attribute("StartDt", "ComplexEventStartDate_t_929415393"); // 3
        EvntDts_47_set.insert("ComplexEventStartDate_t_929415393");
        EvntDts_47.add_attribute("EndDt", "ComplexEventEndDate_t_1869912916"); // 3
        EvntDts_47_set.insert("ComplexEventEndDate_t_1869912916");
        all_values.push_back(EvntDts_47_set);
        all_compo_names.insert("EvntDts_47_set");

        {
          xml_element EvntTms_47{"EvntTms"};
          multiset<string> EvntTms_47_set;
          EvntTms_47.add_attribute("StartTm", "282851788"); // 4
          EvntTms_47_set.insert("282851788");
          EvntTms_47.add_attribute("EndTm", "1941044507"); // 4
          EvntTms_47_set.insert("1941044507");
          all_values.push_back(EvntTms_47_set);
          all_compo_names.insert("EvntTms_47_set");

          EvntDts_47.add_element(EvntTms_47);
        }
        CmplxEvnt_47.add_element(EvntDts_47);
      }
      Instrmt_47.add_element(CmplxEvnt_47);
    }
    elt.add_element(Instrmt_47);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_13{"FinDetls"};
    multiset<string> FinDetls_13_set;
    FinDetls_13.add_attribute("AgmtDesc", "AgreementDesc_t_683506884"); // 1
    FinDetls_13_set.insert("AgreementDesc_t_683506884");
    FinDetls_13.add_attribute("AgmtID", "AgreementID_t_1008179007"); // 1
    FinDetls_13_set.insert("AgreementID_t_1008179007");
    FinDetls_13.add_attribute("AgmtDt", "AgreementDate_t_726415732"); // 1
    FinDetls_13_set.insert("AgreementDate_t_726415732");
    FinDetls_13.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_13_set.insert("EUR");
    FinDetls_13.add_attribute("TrmTyp", "2"); // 1
    FinDetls_13_set.insert("2");
    FinDetls_13.add_attribute("StartDt", "StartDate_t_1687966014"); // 1
    FinDetls_13_set.insert("StartDate_t_1687966014");
    FinDetls_13.add_attribute("EndDt", "EndDate_t_479853228"); // 1
    FinDetls_13_set.insert("EndDate_t_479853228");
    FinDetls_13.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_13_set.insert("1");
    FinDetls_13.add_attribute("MgnRatio", "17598682.860000"); // 1
    FinDetls_13_set.insert("17598682.860000");
    all_values.push_back(FinDetls_13_set);
    all_compo_names.insert("FinDetls_13_set");

    elt.add_element(FinDetls_13);
  } // end FinDetls
  { // Undly
    xml_element Undly_64{"Undly"};
    multiset<string> Undly_64_set;
    Undly_64.add_attribute("Sym", "UnderlyingSymbol_t_1465777245"); // 1
    Undly_64_set.insert("UnderlyingSymbol_t_1465777245");
    Undly_64.add_attribute("Sfx", "CD"); // 1
    Undly_64_set.insert("CD");
    Undly_64.add_attribute("ID", "UnderlyingSecurityID_t_1066589696"); // 1
    Undly_64_set.insert("UnderlyingSecurityID_t_1066589696");
    Undly_64.add_attribute("Src", "H"); // 1
    Undly_64_set.insert("H");
    Undly_64.add_attribute("Prod", "8"); // 1
    Undly_64_set.insert("8");
    Undly_64.add_attribute("CFI", "UnderlyingCFICode_t_2136372140"); // 1
    Undly_64_set.insert("UnderlyingCFICode_t_2136372140");
    Undly_64.add_attribute("SecTyp", "BRADY"); // 1
    Undly_64_set.insert("BRADY");
    Undly_64.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1068167669"); // 1
    Undly_64_set.insert("UnderlyingSecuritySubType_t_1068167669");
    Undly_64.add_attribute("MMY", "858639988"); // 1
    Undly_64_set.insert("858639988");
    Undly_64.add_attribute("Mat", "UnderlyingMaturityDate_t_1268369701"); // 1
    Undly_64_set.insert("UnderlyingMaturityDate_t_1268369701");
    Undly_64.add_attribute("MatTm", "1872672900"); // 1
    Undly_64_set.insert("1872672900");
    Undly_64.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1424167643"); // 1
    Undly_64_set.insert("UnderlyingCouponPaymentDate_t_1424167643");
    Undly_64.add_attribute("RestrctTyp", "MM"); // 1
    Undly_64_set.insert("MM");
    Undly_64.add_attribute("Snrty", "SR"); // 1
    Undly_64_set.insert("SR");
    Undly_64.add_attribute("NotlPctOut", "7397033.600000"); // 1
    Undly_64_set.insert("7397033.600000");
    Undly_64.add_attribute("OrigNotlPctOut", "18422316.630000"); // 1
    Undly_64_set.insert("18422316.630000");
    Undly_64.add_attribute("AttchPnt", "3559407.560000"); // 1
    Undly_64_set.insert("3559407.560000");
    Undly_64.add_attribute("DetchPnt", "4621326.290000"); // 1
    Undly_64_set.insert("4621326.290000");
    Undly_64.add_attribute("Issued", "UnderlyingIssueDate_t_2125083451"); // 1
    Undly_64_set.insert("UnderlyingIssueDate_t_2125083451");
    Undly_64.add_attribute("RepoCollSecTyp", "149501616"); // 1
    Undly_64_set.insert("149501616");
    Undly_64.add_attribute("RepoTrm", "1145639513"); // 1
    Undly_64_set.insert("1145639513");
    Undly_64.add_attribute("RepoRt", "9857788.100000"); // 1
    Undly_64_set.insert("9857788.100000");
    Undly_64.add_attribute("Fctr", "8759173.480000"); // 1
    Undly_64_set.insert("8759173.480000");
    Undly_64.add_attribute("CrdRtg", "UnderlyingCreditRating_t_906149209"); // 1
    Undly_64_set.insert("UnderlyingCreditRating_t_906149209");
    Undly_64.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_875707334"); // 1
    Undly_64_set.insert("UnderlyingInstrRegistry_t_875707334");
    Undly_64.add_attribute("Ctry", "1205869797"); // 1
    Undly_64_set.insert("1205869797");
    Undly_64.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_446631576"); // 1
    Undly_64_set.insert("UnderlyingStateOrProvinceOfIssue_t_446631576");
    Undly_64.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1355560562"); // 1
    Undly_64_set.insert("UnderlyingLocaleOfIssue_t_1355560562");
    Undly_64.add_attribute("Redeem", "UnderlyingRedemptionDate_t_82568934"); // 1
    Undly_64_set.insert("UnderlyingRedemptionDate_t_82568934");
    Undly_64.add_attribute("StrkPx", "590162.140000"); // 1
    Undly_64_set.insert("590162.140000");
    Undly_64.add_attribute("StrkCcy", "CHF"); // 1
    Undly_64_set.insert("CHF");
    Undly_64.add_attribute("OptA", "1424225409"); // 1
    Undly_64_set.insert("1424225409");
    Undly_64.add_attribute("Mult", "6527947.000000"); // 1
    Undly_64_set.insert("6527947.000000");
    Undly_64.add_attribute("MultTyp", "0"); // 1
    Undly_64_set.insert("0");
    Undly_64.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_64_set.insert("1");
    Undly_64.add_attribute("UOM", "lbs"); // 1
    Undly_64_set.insert("lbs");
    Undly_64.add_attribute("UOMQty", "17204424.040000"); // 1
    Undly_64_set.insert("17204424.040000");
    Undly_64.add_attribute("PxUOM", "lbs"); // 1
    Undly_64_set.insert("lbs");
    Undly_64.add_attribute("PxUOMQty", "15003231.800000"); // 1
    Undly_64_set.insert("15003231.800000");
    Undly_64.add_attribute("TmUnit", "Wk"); // 1
    Undly_64_set.insert("Wk");
    Undly_64.add_attribute("ExerStyle", "0"); // 1
    Undly_64_set.insert("0");
    Undly_64.add_attribute("CpnRt", "7770071.750000"); // 1
    Undly_64_set.insert("7770071.750000");
    Undly_64.add_attribute("Exch", "UnderlyingSecurityExchange_t_1639492643"); // 1
    Undly_64_set.insert("UnderlyingSecurityExchange_t_1639492643");
    Undly_64.add_attribute("Issr", "UnderlyingIssuer_t_1822249007"); // 1
    Undly_64_set.insert("UnderlyingIssuer_t_1822249007");
    Undly_64.add_attribute("EncUndIssrLen", "1516710536"); // 1
    Undly_64_set.insert("1516710536");
    Undly_64.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1334240658"); // 1
    Undly_64_set.insert("EncodedUnderlyingIssuer_t_1334240658");
    Undly_64.add_attribute("Desc", "UnderlyingSecurityDesc_t_30706115"); // 1
    Undly_64_set.insert("UnderlyingSecurityDesc_t_30706115");
    Undly_64.add_attribute("EncUndSecDescLen", "1978843165"); // 1
    Undly_64_set.insert("1978843165");
    Undly_64.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1311840462"); // 1
    Undly_64_set.insert("EncodedUnderlyingSecurityDesc_t_1311840462");
    Undly_64.add_attribute("CPPgm", "UnderlyingCPProgram_t_180207731"); // 1
    Undly_64_set.insert("UnderlyingCPProgram_t_180207731");
    Undly_64.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_976999030"); // 1
    Undly_64_set.insert("UnderlyingCPRegType_t_976999030");
    Undly_64.add_attribute("AllocPct", "1501356.240000"); // 1
    Undly_64_set.insert("1501356.240000");
    Undly_64.add_attribute("Ccy", "USD"); // 1
    Undly_64_set.insert("USD");
    Undly_64.add_attribute("Qty", "10258429.580000"); // 1
    Undly_64_set.insert("10258429.580000");
    Undly_64.add_attribute("SettlTyp", "5"); // 1
    Undly_64_set.insert("5");
    Undly_64.add_attribute("CashAmt", "UnderlyingCashAmount_t_182296168"); // 1
    Undly_64_set.insert("UnderlyingCashAmount_t_182296168");
    Undly_64.add_attribute("CashTyp", "FIXED"); // 1
    Undly_64_set.insert("FIXED");
    Undly_64.add_attribute("Px", "1970801.640000"); // 1
    Undly_64_set.insert("1970801.640000");
    Undly_64.add_attribute("DirtPx", "2413123.820000"); // 1
    Undly_64_set.insert("2413123.820000");
    Undly_64.add_attribute("EndPx", "19676085.240000"); // 1
    Undly_64_set.insert("19676085.240000");
    Undly_64.add_attribute("StartVal", "UnderlyingStartValue_t_1745426343"); // 1
    Undly_64_set.insert("UnderlyingStartValue_t_1745426343");
    Undly_64.add_attribute("CurVal", "UnderlyingCurrentValue_t_1665537791"); // 1
    Undly_64_set.insert("UnderlyingCurrentValue_t_1665537791");
    Undly_64.add_attribute("EndVal", "UnderlyingEndValue_t_472919576"); // 1
    Undly_64_set.insert("UnderlyingEndValue_t_472919576");
    Undly_64.add_attribute("AdjQty", "4585403.330000"); // 1
    Undly_64_set.insert("4585403.330000");
    Undly_64.add_attribute("FxRate", "11204208.650000"); // 1
    Undly_64_set.insert("11204208.650000");
    Undly_64.add_attribute("FxRateCalc", "M"); // 1
    Undly_64_set.insert("M");
    Undly_64.add_attribute("CapValu", "UnderlyingCapValue_t_31499089"); // 1
    Undly_64_set.insert("UnderlyingCapValue_t_31499089");
    Undly_64.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1643471608"); // 1
    Undly_64_set.insert("UnderlyingSettlMethod_t_1643471608");
    Undly_64.add_attribute("PutCall", "467442300"); // 1
    Undly_64_set.insert("467442300");
    all_values.push_back(Undly_64_set);
    all_compo_names.insert("Undly_64_set");

    {
      xml_element UndAID_64{"UndAID"};
      multiset<string> UndAID_64_set;
      UndAID_64.add_attribute("AltID", "UnderlyingSecurityAltID_t_872827546"); // 2
      UndAID_64_set.insert("UnderlyingSecurityAltID_t_872827546");
      UndAID_64.add_attribute("AltIDSrc", "2"); // 2
      UndAID_64_set.insert("2");
      all_values.push_back(UndAID_64_set);
      all_compo_names.insert("UndAID_64_set");

      Undly_64.add_element(UndAID_64);
    }
    {
      xml_element Stip_100{"Stip"};
      multiset<string> Stip_100_set;
      Stip_100.add_attribute("Typ", "PRICE"); // 2
      Stip_100_set.insert("PRICE");
      Stip_100.add_attribute("Val", "UnderlyingStipValue_t_364836541"); // 2
      Stip_100_set.insert("UnderlyingStipValue_t_364836541");
      all_values.push_back(Stip_100_set);
      all_compo_names.insert("Stip_100_set");

      Undly_64.add_element(Stip_100);
    }
    {
      xml_element Pty_270{"Pty"};
      multiset<string> Pty_270_set;
      Pty_270.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1566476962"); // 2
      Pty_270_set.insert("UnderlyingInstrumentPartyID_t_1566476962");
      Pty_270.add_attribute("Src", "7"); // 2
      Pty_270_set.insert("7");
      Pty_270.add_attribute("R", "46"); // 2
      Pty_270_set.insert("46");
      all_values.push_back(Pty_270_set);
      all_compo_names.insert("Pty_270_set");

      {
        xml_element Sub_270{"Sub"};
        multiset<string> Sub_270_set;
        Sub_270.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1597183078"); // 3
        Sub_270_set.insert("UnderlyingInstrumentPartySubID_t_1597183078");
        Sub_270.add_attribute("Typ", "27"); // 3
        Sub_270_set.insert("27");
        all_values.push_back(Sub_270_set);
        all_compo_names.insert("Sub_270_set");

        Pty_270.add_element(Sub_270);
      }
      Undly_64.add_element(Pty_270);
    }
    elt.add_element(Undly_64);
  } // end Undly
  { // Undly
    xml_element Undly_65{"Undly"};
    multiset<string> Undly_65_set;
    Undly_65.add_attribute("Sym", "UnderlyingSymbol_t_863434013"); // 1
    Undly_65_set.insert("UnderlyingSymbol_t_863434013");
    Undly_65.add_attribute("Sfx", "WI"); // 1
    Undly_65_set.insert("WI");
    Undly_65.add_attribute("ID", "UnderlyingSecurityID_t_1422034911"); // 1
    Undly_65_set.insert("UnderlyingSecurityID_t_1422034911");
    Undly_65.add_attribute("Src", "5"); // 1
    Undly_65_set.insert("5");
    Undly_65.add_attribute("Prod", "8"); // 1
    Undly_65_set.insert("8");
    Undly_65.add_attribute("CFI", "UnderlyingCFICode_t_1157699503"); // 1
    Undly_65_set.insert("UnderlyingCFICode_t_1157699503");
    Undly_65.add_attribute("SecTyp", "SUPRA"); // 1
    Undly_65_set.insert("SUPRA");
    Undly_65.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_800543471"); // 1
    Undly_65_set.insert("UnderlyingSecuritySubType_t_800543471");
    Undly_65.add_attribute("MMY", "1339995671"); // 1
    Undly_65_set.insert("1339995671");
    Undly_65.add_attribute("Mat", "UnderlyingMaturityDate_t_125848821"); // 1
    Undly_65_set.insert("UnderlyingMaturityDate_t_125848821");
    Undly_65.add_attribute("MatTm", "997623635"); // 1
    Undly_65_set.insert("997623635");
    Undly_65.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1581308054"); // 1
    Undly_65_set.insert("UnderlyingCouponPaymentDate_t_1581308054");
    Undly_65.add_attribute("RestrctTyp", "MR"); // 1
    Undly_65_set.insert("MR");
    Undly_65.add_attribute("Snrty", "SD"); // 1
    Undly_65_set.insert("SD");
    Undly_65.add_attribute("NotlPctOut", "10993621.970000"); // 1
    Undly_65_set.insert("10993621.970000");
    Undly_65.add_attribute("OrigNotlPctOut", "4188932.740000"); // 1
    Undly_65_set.insert("4188932.740000");
    Undly_65.add_attribute("AttchPnt", "10541066.630000"); // 1
    Undly_65_set.insert("10541066.630000");
    Undly_65.add_attribute("DetchPnt", "722994.140000"); // 1
    Undly_65_set.insert("722994.140000");
    Undly_65.add_attribute("Issued", "UnderlyingIssueDate_t_1533496042"); // 1
    Undly_65_set.insert("UnderlyingIssueDate_t_1533496042");
    Undly_65.add_attribute("RepoCollSecTyp", "1085605752"); // 1
    Undly_65_set.insert("1085605752");
    Undly_65.add_attribute("RepoTrm", "1715771022"); // 1
    Undly_65_set.insert("1715771022");
    Undly_65.add_attribute("RepoRt", "20009383.430000"); // 1
    Undly_65_set.insert("20009383.430000");
    Undly_65.add_attribute("Fctr", "19584332.980000"); // 1
    Undly_65_set.insert("19584332.980000");
    Undly_65.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1459998978"); // 1
    Undly_65_set.insert("UnderlyingCreditRating_t_1459998978");
    Undly_65.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1097904171"); // 1
    Undly_65_set.insert("UnderlyingInstrRegistry_t_1097904171");
    Undly_65.add_attribute("Ctry", "175786191"); // 1
    Undly_65_set.insert("175786191");
    Undly_65.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_878992292"); // 1
    Undly_65_set.insert("UnderlyingStateOrProvinceOfIssue_t_878992292");
    Undly_65.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1711580535"); // 1
    Undly_65_set.insert("UnderlyingLocaleOfIssue_t_1711580535");
    Undly_65.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1874863391"); // 1
    Undly_65_set.insert("UnderlyingRedemptionDate_t_1874863391");
    Undly_65.add_attribute("StrkPx", "3286917.220000"); // 1
    Undly_65_set.insert("3286917.220000");
    Undly_65.add_attribute("StrkCcy", "GBP"); // 1
    Undly_65_set.insert("GBP");
    Undly_65.add_attribute("OptA", "2106082532"); // 1
    Undly_65_set.insert("2106082532");
    Undly_65.add_attribute("Mult", "14311676.790000"); // 1
    Undly_65_set.insert("14311676.790000");
    Undly_65.add_attribute("MultTyp", "2"); // 1
    Undly_65_set.insert("2");
    Undly_65.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_65_set.insert("0");
    Undly_65.add_attribute("UOM", "oz_tr"); // 1
    Undly_65_set.insert("oz_tr");
    Undly_65.add_attribute("UOMQty", "14963123.430000"); // 1
    Undly_65_set.insert("14963123.430000");
    Undly_65.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_65_set.insert("oz_tr");
    Undly_65.add_attribute("PxUOMQty", "17813792.060000"); // 1
    Undly_65_set.insert("17813792.060000");
    Undly_65.add_attribute("TmUnit", "Min"); // 1
    Undly_65_set.insert("Min");
    Undly_65.add_attribute("ExerStyle", "1"); // 1
    Undly_65_set.insert("1");
    Undly_65.add_attribute("CpnRt", "12152036.120000"); // 1
    Undly_65_set.insert("12152036.120000");
    Undly_65.add_attribute("Exch", "UnderlyingSecurityExchange_t_1568134861"); // 1
    Undly_65_set.insert("UnderlyingSecurityExchange_t_1568134861");
    Undly_65.add_attribute("Issr", "UnderlyingIssuer_t_890880914"); // 1
    Undly_65_set.insert("UnderlyingIssuer_t_890880914");
    Undly_65.add_attribute("EncUndIssrLen", "167082162"); // 1
    Undly_65_set.insert("167082162");
    Undly_65.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1987028135"); // 1
    Undly_65_set.insert("EncodedUnderlyingIssuer_t_1987028135");
    Undly_65.add_attribute("Desc", "UnderlyingSecurityDesc_t_1944987577"); // 1
    Undly_65_set.insert("UnderlyingSecurityDesc_t_1944987577");
    Undly_65.add_attribute("EncUndSecDescLen", "239381576"); // 1
    Undly_65_set.insert("239381576");
    Undly_65.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1373040530"); // 1
    Undly_65_set.insert("EncodedUnderlyingSecurityDesc_t_1373040530");
    Undly_65.add_attribute("CPPgm", "UnderlyingCPProgram_t_883109682"); // 1
    Undly_65_set.insert("UnderlyingCPProgram_t_883109682");
    Undly_65.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1955152599"); // 1
    Undly_65_set.insert("UnderlyingCPRegType_t_1955152599");
    Undly_65.add_attribute("AllocPct", "12264952.250000"); // 1
    Undly_65_set.insert("12264952.250000");
    Undly_65.add_attribute("Ccy", "EUR"); // 1
    Undly_65_set.insert("EUR");
    Undly_65.add_attribute("Qty", "1769157.480000"); // 1
    Undly_65_set.insert("1769157.480000");
    Undly_65.add_attribute("SettlTyp", "2"); // 1
    Undly_65_set.insert("2");
    Undly_65.add_attribute("CashAmt", "UnderlyingCashAmount_t_2146660221"); // 1
    Undly_65_set.insert("UnderlyingCashAmount_t_2146660221");
    Undly_65.add_attribute("CashTyp", "DIFF"); // 1
    Undly_65_set.insert("DIFF");
    Undly_65.add_attribute("Px", "5972252.670000"); // 1
    Undly_65_set.insert("5972252.670000");
    Undly_65.add_attribute("DirtPx", "3278682.960000"); // 1
    Undly_65_set.insert("3278682.960000");
    Undly_65.add_attribute("EndPx", "18976290.510000"); // 1
    Undly_65_set.insert("18976290.510000");
    Undly_65.add_attribute("StartVal", "UnderlyingStartValue_t_1188039023"); // 1
    Undly_65_set.insert("UnderlyingStartValue_t_1188039023");
    Undly_65.add_attribute("CurVal", "UnderlyingCurrentValue_t_286467180"); // 1
    Undly_65_set.insert("UnderlyingCurrentValue_t_286467180");
    Undly_65.add_attribute("EndVal", "UnderlyingEndValue_t_1181313082"); // 1
    Undly_65_set.insert("UnderlyingEndValue_t_1181313082");
    Undly_65.add_attribute("AdjQty", "6449387.700000"); // 1
    Undly_65_set.insert("6449387.700000");
    Undly_65.add_attribute("FxRate", "9310983.050000"); // 1
    Undly_65_set.insert("9310983.050000");
    Undly_65.add_attribute("FxRateCalc", "D"); // 1
    Undly_65_set.insert("D");
    Undly_65.add_attribute("CapValu", "UnderlyingCapValue_t_2141251113"); // 1
    Undly_65_set.insert("UnderlyingCapValue_t_2141251113");
    Undly_65.add_attribute("SetMeth", "UnderlyingSettlMethod_t_228789254"); // 1
    Undly_65_set.insert("UnderlyingSettlMethod_t_228789254");
    Undly_65.add_attribute("PutCall", "1256592176"); // 1
    Undly_65_set.insert("1256592176");
    all_values.push_back(Undly_65_set);
    all_compo_names.insert("Undly_65_set");

    {
      xml_element UndAID_65{"UndAID"};
      multiset<string> UndAID_65_set;
      UndAID_65.add_attribute("AltID", "UnderlyingSecurityAltID_t_1615928629"); // 2
      UndAID_65_set.insert("UnderlyingSecurityAltID_t_1615928629");
      UndAID_65.add_attribute("AltIDSrc", "G"); // 2
      UndAID_65_set.insert("G");
      all_values.push_back(UndAID_65_set);
      all_compo_names.insert("UndAID_65_set");

      Undly_65.add_element(UndAID_65);
    }
    {
      xml_element Stip_101{"Stip"};
      multiset<string> Stip_101_set;
      Stip_101.add_attribute("Typ", "AVFICO"); // 2
      Stip_101_set.insert("AVFICO");
      Stip_101.add_attribute("Val", "UnderlyingStipValue_t_1036579842"); // 2
      Stip_101_set.insert("UnderlyingStipValue_t_1036579842");
      all_values.push_back(Stip_101_set);
      all_compo_names.insert("Stip_101_set");

      Undly_65.add_element(Stip_101);
    }
    {
      xml_element Pty_271{"Pty"};
      multiset<string> Pty_271_set;
      Pty_271.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1414984751"); // 2
      Pty_271_set.insert("UnderlyingInstrumentPartyID_t_1414984751");
      Pty_271.add_attribute("Src", "9"); // 2
      Pty_271_set.insert("9");
      Pty_271.add_attribute("R", "49"); // 2
      Pty_271_set.insert("49");
      all_values.push_back(Pty_271_set);
      all_compo_names.insert("Pty_271_set");

      {
        xml_element Sub_271{"Sub"};
        multiset<string> Sub_271_set;
        Sub_271.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1212488681"); // 3
        Sub_271_set.insert("UnderlyingInstrumentPartySubID_t_1212488681");
        Sub_271.add_attribute("Typ", "4"); // 3
        Sub_271_set.insert("4");
        all_values.push_back(Sub_271_set);
        all_compo_names.insert("Sub_271_set");

        Pty_271.add_element(Sub_271);
      }
      Undly_65.add_element(Pty_271);
    }
    elt.add_element(Undly_65);
  } // end Undly
  { // Undly
    xml_element Undly_66{"Undly"};
    multiset<string> Undly_66_set;
    Undly_66.add_attribute("Sym", "UnderlyingSymbol_t_101681212"); // 1
    Undly_66_set.insert("UnderlyingSymbol_t_101681212");
    Undly_66.add_attribute("Sfx", "WI"); // 1
    Undly_66_set.insert("WI");
    Undly_66.add_attribute("ID", "UnderlyingSecurityID_t_538444830"); // 1
    Undly_66_set.insert("UnderlyingSecurityID_t_538444830");
    Undly_66.add_attribute("Src", "6"); // 1
    Undly_66_set.insert("6");
    Undly_66.add_attribute("Prod", "5"); // 1
    Undly_66_set.insert("5");
    Undly_66.add_attribute("CFI", "UnderlyingCFICode_t_1806112759"); // 1
    Undly_66_set.insert("UnderlyingCFICode_t_1806112759");
    Undly_66.add_attribute("SecTyp", "RVLV"); // 1
    Undly_66_set.insert("RVLV");
    Undly_66.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1512019571"); // 1
    Undly_66_set.insert("UnderlyingSecuritySubType_t_1512019571");
    Undly_66.add_attribute("MMY", "1805289332"); // 1
    Undly_66_set.insert("1805289332");
    Undly_66.add_attribute("Mat", "UnderlyingMaturityDate_t_1246104820"); // 1
    Undly_66_set.insert("UnderlyingMaturityDate_t_1246104820");
    Undly_66.add_attribute("MatTm", "2109244838"); // 1
    Undly_66_set.insert("2109244838");
    Undly_66.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2133157628"); // 1
    Undly_66_set.insert("UnderlyingCouponPaymentDate_t_2133157628");
    Undly_66.add_attribute("RestrctTyp", "XR"); // 1
    Undly_66_set.insert("XR");
    Undly_66.add_attribute("Snrty", "SD"); // 1
    Undly_66_set.insert("SD");
    Undly_66.add_attribute("NotlPctOut", "2721411.600000"); // 1
    Undly_66_set.insert("2721411.600000");
    Undly_66.add_attribute("OrigNotlPctOut", "300796.570000"); // 1
    Undly_66_set.insert("300796.570000");
    Undly_66.add_attribute("AttchPnt", "17947389.840000"); // 1
    Undly_66_set.insert("17947389.840000");
    Undly_66.add_attribute("DetchPnt", "12032394.660000"); // 1
    Undly_66_set.insert("12032394.660000");
    Undly_66.add_attribute("Issued", "UnderlyingIssueDate_t_1652776275"); // 1
    Undly_66_set.insert("UnderlyingIssueDate_t_1652776275");
    Undly_66.add_attribute("RepoCollSecTyp", "1788506449"); // 1
    Undly_66_set.insert("1788506449");
    Undly_66.add_attribute("RepoTrm", "1432028720"); // 1
    Undly_66_set.insert("1432028720");
    Undly_66.add_attribute("RepoRt", "7618848.030000"); // 1
    Undly_66_set.insert("7618848.030000");
    Undly_66.add_attribute("Fctr", "12569514.300000"); // 1
    Undly_66_set.insert("12569514.300000");
    Undly_66.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1956132557"); // 1
    Undly_66_set.insert("UnderlyingCreditRating_t_1956132557");
    Undly_66.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1086196943"); // 1
    Undly_66_set.insert("UnderlyingInstrRegistry_t_1086196943");
    Undly_66.add_attribute("Ctry", "146047624"); // 1
    Undly_66_set.insert("146047624");
    Undly_66.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1223633661"); // 1
    Undly_66_set.insert("UnderlyingStateOrProvinceOfIssue_t_1223633661");
    Undly_66.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1577591246"); // 1
    Undly_66_set.insert("UnderlyingLocaleOfIssue_t_1577591246");
    Undly_66.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1022171954"); // 1
    Undly_66_set.insert("UnderlyingRedemptionDate_t_1022171954");
    Undly_66.add_attribute("StrkPx", "2886386.940000"); // 1
    Undly_66_set.insert("2886386.940000");
    Undly_66.add_attribute("StrkCcy", "USD"); // 1
    Undly_66_set.insert("USD");
    Undly_66.add_attribute("OptA", "236753409"); // 1
    Undly_66_set.insert("236753409");
    Undly_66.add_attribute("Mult", "6993283.070000"); // 1
    Undly_66_set.insert("6993283.070000");
    Undly_66.add_attribute("MultTyp", "1"); // 1
    Undly_66_set.insert("1");
    Undly_66.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_66_set.insert("1");
    Undly_66.add_attribute("UOM", "MWh"); // 1
    Undly_66_set.insert("MWh");
    Undly_66.add_attribute("UOMQty", "18096381.400000"); // 1
    Undly_66_set.insert("18096381.400000");
    Undly_66.add_attribute("PxUOM", "t"); // 1
    Undly_66_set.insert("t");
    Undly_66.add_attribute("PxUOMQty", "157631.020000"); // 1
    Undly_66_set.insert("157631.020000");
    Undly_66.add_attribute("TmUnit", "H"); // 1
    Undly_66_set.insert("H");
    Undly_66.add_attribute("ExerStyle", "0"); // 1
    Undly_66_set.insert("0");
    Undly_66.add_attribute("CpnRt", "14370.830000"); // 1
    Undly_66_set.insert("14370.830000");
    Undly_66.add_attribute("Exch", "UnderlyingSecurityExchange_t_1904509535"); // 1
    Undly_66_set.insert("UnderlyingSecurityExchange_t_1904509535");
    Undly_66.add_attribute("Issr", "UnderlyingIssuer_t_1355024784"); // 1
    Undly_66_set.insert("UnderlyingIssuer_t_1355024784");
    Undly_66.add_attribute("EncUndIssrLen", "273578243"); // 1
    Undly_66_set.insert("273578243");
    Undly_66.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1934589193"); // 1
    Undly_66_set.insert("EncodedUnderlyingIssuer_t_1934589193");
    Undly_66.add_attribute("Desc", "UnderlyingSecurityDesc_t_1002280120"); // 1
    Undly_66_set.insert("UnderlyingSecurityDesc_t_1002280120");
    Undly_66.add_attribute("EncUndSecDescLen", "1476817709"); // 1
    Undly_66_set.insert("1476817709");
    Undly_66.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1439881820"); // 1
    Undly_66_set.insert("EncodedUnderlyingSecurityDesc_t_1439881820");
    Undly_66.add_attribute("CPPgm", "UnderlyingCPProgram_t_643302921"); // 1
    Undly_66_set.insert("UnderlyingCPProgram_t_643302921");
    Undly_66.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_761362781"); // 1
    Undly_66_set.insert("UnderlyingCPRegType_t_761362781");
    Undly_66.add_attribute("AllocPct", "542829.750000"); // 1
    Undly_66_set.insert("542829.750000");
    Undly_66.add_attribute("Ccy", "CHF"); // 1
    Undly_66_set.insert("CHF");
    Undly_66.add_attribute("Qty", "11404799.180000"); // 1
    Undly_66_set.insert("11404799.180000");
    Undly_66.add_attribute("SettlTyp", "5"); // 1
    Undly_66_set.insert("5");
    Undly_66.add_attribute("CashAmt", "UnderlyingCashAmount_t_1793645352"); // 1
    Undly_66_set.insert("UnderlyingCashAmount_t_1793645352");
    Undly_66.add_attribute("CashTyp", "FIXED"); // 1
    Undly_66_set.insert("FIXED");
    Undly_66.add_attribute("Px", "9209902.820000"); // 1
    Undly_66_set.insert("9209902.820000");
    Undly_66.add_attribute("DirtPx", "20822840.460000"); // 1
    Undly_66_set.insert("20822840.460000");
    Undly_66.add_attribute("EndPx", "7314709.930000"); // 1
    Undly_66_set.insert("7314709.930000");
    Undly_66.add_attribute("StartVal", "UnderlyingStartValue_t_2044843449"); // 1
    Undly_66_set.insert("UnderlyingStartValue_t_2044843449");
    Undly_66.add_attribute("CurVal", "UnderlyingCurrentValue_t_171553807"); // 1
    Undly_66_set.insert("UnderlyingCurrentValue_t_171553807");
    Undly_66.add_attribute("EndVal", "UnderlyingEndValue_t_1430799300"); // 1
    Undly_66_set.insert("UnderlyingEndValue_t_1430799300");
    Undly_66.add_attribute("AdjQty", "2019057.560000"); // 1
    Undly_66_set.insert("2019057.560000");
    Undly_66.add_attribute("FxRate", "10504812.630000"); // 1
    Undly_66_set.insert("10504812.630000");
    Undly_66.add_attribute("FxRateCalc", "M"); // 1
    Undly_66_set.insert("M");
    Undly_66.add_attribute("CapValu", "UnderlyingCapValue_t_2011543897"); // 1
    Undly_66_set.insert("UnderlyingCapValue_t_2011543897");
    Undly_66.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1293944643"); // 1
    Undly_66_set.insert("UnderlyingSettlMethod_t_1293944643");
    Undly_66.add_attribute("PutCall", "1804519821"); // 1
    Undly_66_set.insert("1804519821");
    all_values.push_back(Undly_66_set);
    all_compo_names.insert("Undly_66_set");

    {
      xml_element UndAID_66{"UndAID"};
      multiset<string> UndAID_66_set;
      UndAID_66.add_attribute("AltID", "UnderlyingSecurityAltID_t_772319561"); // 2
      UndAID_66_set.insert("UnderlyingSecurityAltID_t_772319561");
      UndAID_66.add_attribute("AltIDSrc", "5"); // 2
      UndAID_66_set.insert("5");
      all_values.push_back(UndAID_66_set);
      all_compo_names.insert("UndAID_66_set");

      Undly_66.add_element(UndAID_66);
    }
    {
      xml_element Stip_102{"Stip"};
      multiset<string> Stip_102_set;
      Stip_102.add_attribute("Typ", "MHP"); // 2
      Stip_102_set.insert("MHP");
      Stip_102.add_attribute("Val", "UnderlyingStipValue_t_529345449"); // 2
      Stip_102_set.insert("UnderlyingStipValue_t_529345449");
      all_values.push_back(Stip_102_set);
      all_compo_names.insert("Stip_102_set");

      Undly_66.add_element(Stip_102);
    }
    {
      xml_element Pty_272{"Pty"};
      multiset<string> Pty_272_set;
      Pty_272.add_attribute("ID", "UnderlyingInstrumentPartyID_t_706710350"); // 2
      Pty_272_set.insert("UnderlyingInstrumentPartyID_t_706710350");
      Pty_272.add_attribute("Src", "8"); // 2
      Pty_272_set.insert("8");
      Pty_272.add_attribute("R", "64"); // 2
      Pty_272_set.insert("64");
      all_values.push_back(Pty_272_set);
      all_compo_names.insert("Pty_272_set");

      {
        xml_element Sub_272{"Sub"};
        multiset<string> Sub_272_set;
        Sub_272.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1708990471"); // 3
        Sub_272_set.insert("UnderlyingInstrumentPartySubID_t_1708990471");
        Sub_272.add_attribute("Typ", "2"); // 3
        Sub_272_set.insert("2");
        all_values.push_back(Sub_272_set);
        all_compo_names.insert("Sub_272_set");

        Pty_272.add_element(Sub_272);
      }
      Undly_66.add_element(Pty_272);
    }
    elt.add_element(Undly_66);
  } // end Undly
  { // OrdQty
    xml_element OrdQty_17{"OrdQty"};
    multiset<string> OrdQty_17_set;
    OrdQty_17.add_attribute("Qty", "17563328.140000"); // 1
    OrdQty_17_set.insert("17563328.140000");
    OrdQty_17.add_attribute("Cash", "2048097.440000"); // 1
    OrdQty_17_set.insert("2048097.440000");
    OrdQty_17.add_attribute("Pct", "227483.420000"); // 1
    OrdQty_17_set.insert("227483.420000");
    OrdQty_17.add_attribute("RndDir", "1"); // 1
    OrdQty_17_set.insert("1");
    OrdQty_17.add_attribute("RndMod", "21050640.960000"); // 1
    OrdQty_17_set.insert("21050640.960000");
    all_values.push_back(OrdQty_17_set);
    all_compo_names.insert("OrdQty_17_set");

    elt.add_element(OrdQty_17);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_7{"TrgrInstr"};
    multiset<string> TrgrInstr_7_set;
    TrgrInstr_7.add_attribute("TrgrTyp", "2"); // 1
    TrgrInstr_7_set.insert("2");
    TrgrInstr_7.add_attribute("TrgrActn", "2"); // 1
    TrgrInstr_7_set.insert("2");
    TrgrInstr_7.add_attribute("TrgrPx", "20038824.240000"); // 1
    TrgrInstr_7_set.insert("20038824.240000");
    TrgrInstr_7.add_attribute("TrgrSym", "TriggerSymbol_t_238921737"); // 1
    TrgrInstr_7_set.insert("TriggerSymbol_t_238921737");
    TrgrInstr_7.add_attribute("TrgrSecID", "TriggerSecurityID_t_1374199576"); // 1
    TrgrInstr_7_set.insert("TriggerSecurityID_t_1374199576");
    TrgrInstr_7.add_attribute("TrgrSecIDSrc", "7"); // 1
    TrgrInstr_7_set.insert("7");
    TrgrInstr_7.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_173722135"); // 1
    TrgrInstr_7_set.insert("TriggerSecurityDesc_t_173722135");
    TrgrInstr_7.add_attribute("TrgrPxTyp", "6"); // 1
    TrgrInstr_7_set.insert("6");
    TrgrInstr_7.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_7_set.insert("3");
    TrgrInstr_7.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_7_set.insert("U");
    TrgrInstr_7.add_attribute("TrgrNewPx", "13889862.220000"); // 1
    TrgrInstr_7_set.insert("13889862.220000");
    TrgrInstr_7.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_7_set.insert("1");
    TrgrInstr_7.add_attribute("TrgrNewQty", "13957572.060000"); // 1
    TrgrInstr_7_set.insert("13957572.060000");
    TrgrInstr_7.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1030259292"); // 1
    TrgrInstr_7_set.insert("TriggerTradingSessionID_t_1030259292");
    TrgrInstr_7.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_740714865"); // 1
    TrgrInstr_7_set.insert("TriggerTradingSessionSubID_t_740714865");
    all_values.push_back(TrgrInstr_7_set);
    all_compo_names.insert("TrgrInstr_7_set");

    elt.add_element(TrgrInstr_7);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_20{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_20_set;
    SprdBnchmkCurve_20.add_attribute("Spread", "5422182.010000"); // 1
    SprdBnchmkCurve_20_set.insert("5422182.010000");
    SprdBnchmkCurve_20.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_20_set.insert("GBP");
    SprdBnchmkCurve_20.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_20_set.insert("Treasury");
    SprdBnchmkCurve_20.add_attribute("Point", "BenchmarkCurvePoint_t_345768721"); // 1
    SprdBnchmkCurve_20_set.insert("BenchmarkCurvePoint_t_345768721");
    SprdBnchmkCurve_20.add_attribute("Px", "20423798.750000"); // 1
    SprdBnchmkCurve_20_set.insert("20423798.750000");
    SprdBnchmkCurve_20.add_attribute("PxTyp", "1"); // 1
    SprdBnchmkCurve_20_set.insert("1");
    SprdBnchmkCurve_20.add_attribute("SecID", "BenchmarkSecurityID_t_277820221"); // 1
    SprdBnchmkCurve_20_set.insert("BenchmarkSecurityID_t_277820221");
    SprdBnchmkCurve_20.add_attribute("SecIDSrc", "L"); // 1
    SprdBnchmkCurve_20_set.insert("L");
    all_values.push_back(SprdBnchmkCurve_20_set);
    all_compo_names.insert("SprdBnchmkCurve_20_set");

    elt.add_element(SprdBnchmkCurve_20);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_15{"Yield"};
    multiset<string> Yield_15_set;
    Yield_15.add_attribute("Typ", "WORST"); // 1
    Yield_15_set.insert("WORST");
    Yield_15.add_attribute("Yld", "16866894.300000"); // 1
    Yield_15_set.insert("16866894.300000");
    Yield_15.add_attribute("CalcDt", "YieldCalcDate_t_1967680035"); // 1
    Yield_15_set.insert("YieldCalcDate_t_1967680035");
    Yield_15.add_attribute("RedDt", "YieldRedemptionDate_t_366930685"); // 1
    Yield_15_set.insert("YieldRedemptionDate_t_366930685");
    Yield_15.add_attribute("RedPx", "17094377.720000"); // 1
    Yield_15_set.insert("17094377.720000");
    Yield_15.add_attribute("RedPxTyp", "7"); // 1
    Yield_15_set.insert("7");
    all_values.push_back(Yield_15_set);
    all_compo_names.insert("Yield_15_set");

    elt.add_element(Yield_15);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_7{"PegInstr"};
    multiset<string> PegInstr_7_set;
    PegInstr_7.add_attribute("OfstVal", "3245111.330000"); // 1
    PegInstr_7_set.insert("3245111.330000");
    PegInstr_7.add_attribute("PegPxTyp", "8"); // 1
    PegInstr_7_set.insert("8");
    PegInstr_7.add_attribute("MoveTyp", "0"); // 1
    PegInstr_7_set.insert("0");
    PegInstr_7.add_attribute("OfstTyp", "1"); // 1
    PegInstr_7_set.insert("1");
    PegInstr_7.add_attribute("LmtTyp", "0"); // 1
    PegInstr_7_set.insert("0");
    PegInstr_7.add_attribute("RndDir", "1"); // 1
    PegInstr_7_set.insert("1");
    PegInstr_7.add_attribute("Scope", "1"); // 1
    PegInstr_7_set.insert("1");
    PegInstr_7.add_attribute("PegSecurityIDSource", "A"); // 1
    PegInstr_7_set.insert("A");
    PegInstr_7.add_attribute("PegSecID", "PegSecurityID_t_1619327085"); // 1
    PegInstr_7_set.insert("PegSecurityID_t_1619327085");
    PegInstr_7.add_attribute("PgSymbl", "PegSymbol_t_1633047827"); // 1
    PegInstr_7_set.insert("PegSymbol_t_1633047827");
    PegInstr_7.add_attribute("PegSecDesc", "PegSecurityDesc_t_912633973"); // 1
    PegInstr_7_set.insert("PegSecurityDesc_t_912633973");
    all_values.push_back(PegInstr_7_set);
    all_compo_names.insert("PegInstr_7_set");

    elt.add_element(PegInstr_7);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_7{"DiscInstr"};
    multiset<string> DiscInstr_7_set;
    DiscInstr_7.add_attribute("DsctnInst", "3"); // 1
    DiscInstr_7_set.insert("3");
    DiscInstr_7.add_attribute("OfstValu", "3622187.950000"); // 1
    DiscInstr_7_set.insert("3622187.950000");
    DiscInstr_7.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_7_set.insert("1");
    DiscInstr_7.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_7_set.insert("0");
    DiscInstr_7.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_7_set.insert("1");
    DiscInstr_7.add_attribute("RndDir", "2"); // 1
    DiscInstr_7_set.insert("2");
    DiscInstr_7.add_attribute("Scope", "2"); // 1
    DiscInstr_7_set.insert("2");
    all_values.push_back(DiscInstr_7_set);
    all_compo_names.insert("DiscInstr_7_set");

    elt.add_element(DiscInstr_7);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_17{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_17_set;
    StrtPrmGrp_17.add_attribute("StrtPrmNme", "StrategyParameterName_t_597029500"); // 1
    StrtPrmGrp_17_set.insert("StrategyParameterName_t_597029500");
    StrtPrmGrp_17.add_attribute("StrtPrmTyp", "18"); // 1
    StrtPrmGrp_17_set.insert("18");
    StrtPrmGrp_17.add_attribute("StrtPrmVal", "StrategyParameterValue_t_363380666"); // 1
    StrtPrmGrp_17_set.insert("StrategyParameterValue_t_363380666");
    all_values.push_back(StrtPrmGrp_17_set);
    all_compo_names.insert("StrtPrmGrp_17_set");

    elt.add_element(StrtPrmGrp_17);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_18{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_18_set;
    StrtPrmGrp_18.add_attribute("StrtPrmNme", "StrategyParameterName_t_1197643618"); // 1
    StrtPrmGrp_18_set.insert("StrategyParameterName_t_1197643618");
    StrtPrmGrp_18.add_attribute("StrtPrmTyp", "7"); // 1
    StrtPrmGrp_18_set.insert("7");
    StrtPrmGrp_18.add_attribute("StrtPrmVal", "StrategyParameterValue_t_574727888"); // 1
    StrtPrmGrp_18_set.insert("StrategyParameterValue_t_574727888");
    all_values.push_back(StrtPrmGrp_18_set);
    all_compo_names.insert("StrtPrmGrp_18_set");

    elt.add_element(StrtPrmGrp_18);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_19{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_19_set;
    StrtPrmGrp_19.add_attribute("StrtPrmNme", "StrategyParameterName_t_1359764559"); // 1
    StrtPrmGrp_19_set.insert("StrategyParameterName_t_1359764559");
    StrtPrmGrp_19.add_attribute("StrtPrmTyp", "13"); // 1
    StrtPrmGrp_19_set.insert("13");
    StrtPrmGrp_19.add_attribute("StrtPrmVal", "StrategyParameterValue_t_394924275"); // 1
    StrtPrmGrp_19_set.insert("StrategyParameterValue_t_394924275");
    all_values.push_back(StrtPrmGrp_19_set);
    all_compo_names.insert("StrtPrmGrp_19_set");

    elt.add_element(StrtPrmGrp_19);
  } // end StrtPrmGrp
  { // Comm
    xml_element Comm_24{"Comm"};
    multiset<string> Comm_24_set;
    Comm_24.add_attribute("Comm", "Commission_t_1726695245"); // 1
    Comm_24_set.insert("Commission_t_1726695245");
    Comm_24.add_attribute("CommTyp", "1"); // 1
    Comm_24_set.insert("1");
    Comm_24.add_attribute("Ccy", "JPY"); // 1
    Comm_24_set.insert("JPY");
    Comm_24.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_24_set.insert("N");
    all_values.push_back(Comm_24_set);
    all_compo_names.insert("Comm_24_set");

    elt.add_element(Comm_24);
  } // end Comm
  { // TrdRegTS
    xml_element TrdRegTS_14{"TrdRegTS"};
    multiset<string> TrdRegTS_14_set;
    TrdRegTS_14.add_attribute("TS", "TrdRegTimestamp_t_84632640"); // 1
    TrdRegTS_14_set.insert("TrdRegTimestamp_t_84632640");
    TrdRegTS_14.add_attribute("Typ", "6"); // 1
    TrdRegTS_14_set.insert("6");
    TrdRegTS_14.add_attribute("Src", "TrdRegTimestampOrigin_t_1826333556"); // 1
    TrdRegTS_14_set.insert("TrdRegTimestampOrigin_t_1826333556");
    TrdRegTS_14.add_attribute("DskTyp", "IS"); // 1
    TrdRegTS_14_set.insert("IS");
    TrdRegTS_14.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_14_set.insert("1");
    TrdRegTS_14.add_attribute("DskOrdHndlInst", "AON"); // 1
    TrdRegTS_14_set.insert("AON");
    all_values.push_back(TrdRegTS_14_set);
    all_compo_names.insert("TrdRegTS_14_set");

    elt.add_element(TrdRegTS_14);
  } // end TrdRegTS
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
