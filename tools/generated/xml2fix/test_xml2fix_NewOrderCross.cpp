#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderCross.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderCross_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdCrss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderCross_message_t_0;
  elt.add_attribute("ID", "CrossID_t_2028424810"); // 0
  NewOrderCross_message_t_0.insert("CrossID_t_2028424810");
  elt.add_attribute("Typ", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("Priorty", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("SettlTyp", "6"); // 0
  NewOrderCross_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_1674277732"); // 0
  NewOrderCross_message_t_0.insert("SettlDate_t_1674277732");
  elt.add_attribute("HandlInst", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("ExecInst", "d"); // 0
  NewOrderCross_message_t_0.insert("d");
  elt.add_attribute("MinQty", "1699134.070000"); // 0
  NewOrderCross_message_t_0.insert("1699134.070000");
  elt.add_attribute("MtchInc", "929860.950000"); // 0
  NewOrderCross_message_t_0.insert("929860.950000");
  elt.add_attribute("MxPxLvls", "1318470635"); // 0
  NewOrderCross_message_t_0.insert("1318470635");
  elt.add_attribute("MaxFloor", "11868451.820000"); // 0
  NewOrderCross_message_t_0.insert("11868451.820000");
  elt.add_attribute("ExDest", "ExDestination_t_599498632"); // 0
  NewOrderCross_message_t_0.insert("ExDestination_t_599498632");
  elt.add_attribute("ExDestIDSrc", "B"); // 0
  NewOrderCross_message_t_0.insert("B");
  elt.add_attribute("ProcCode", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("PrevClsPx", "20610146.570000"); // 0
  NewOrderCross_message_t_0.insert("20610146.570000");
  elt.add_attribute("LocReqd", "N"); // 0
  NewOrderCross_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_1316211227"); // 0
  NewOrderCross_message_t_0.insert("TransactTime_t_1316211227");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1754269080"); // 0
  NewOrderCross_message_t_0.insert("TransBkdTime_t_1754269080");
  elt.add_attribute("OrdTyp", "P"); // 0
  NewOrderCross_message_t_0.insert("P");
  elt.add_attribute("PxTyp", "13"); // 0
  NewOrderCross_message_t_0.insert("13");
  elt.add_attribute("Px", "9934183.820000"); // 0
  NewOrderCross_message_t_0.insert("9934183.820000");
  elt.add_attribute("PxPrtScp", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("StopPx", "9276415.020000"); // 0
  NewOrderCross_message_t_0.insert("9276415.020000");
  elt.add_attribute("Ccy", "CAN"); // 0
  NewOrderCross_message_t_0.insert("CAN");
  elt.add_attribute("ComplianceID", "ComplianceID_t_968952883"); // 0
  NewOrderCross_message_t_0.insert("ComplianceID_t_968952883");
  elt.add_attribute("IOIID", "IOIID_t_1281998537"); // 0
  NewOrderCross_message_t_0.insert("IOIID_t_1281998537");
  elt.add_attribute("QID", "QuoteID_t_377849920"); // 0
  NewOrderCross_message_t_0.insert("QuoteID_t_377849920");
  elt.add_attribute("TmInForce", "8"); // 0
  NewOrderCross_message_t_0.insert("8");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_132942336"); // 0
  NewOrderCross_message_t_0.insert("EffectiveTime_t_132942336");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1829172949"); // 0
  NewOrderCross_message_t_0.insert("ExpireDate_t_1829172949");
  elt.add_attribute("ExpireTm", "ExpireTime_t_56169210"); // 0
  NewOrderCross_message_t_0.insert("ExpireTime_t_56169210");
  elt.add_attribute("GTBkngInst", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "14740881.010000"); // 0
  NewOrderCross_message_t_0.insert("14740881.010000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  NewOrderCross_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1762371925"); // 0
  NewOrderCross_message_t_0.insert("TargetStrategyParameters_t_1762371925");
  elt.add_attribute("ParticipationRt", "16645893.260000"); // 0
  NewOrderCross_message_t_0.insert("16645893.260000");
  elt.add_attribute("CxllationRights", "N"); // 0
  NewOrderCross_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "N"); // 0
  NewOrderCross_message_t_0.insert("N");
  elt.add_attribute("RegistID", "RegistID_t_1757575421"); // 0
  NewOrderCross_message_t_0.insert("RegistID_t_1757575421");
  elt.add_attribute("Designation", "Designation_t_1868355488"); // 0
  NewOrderCross_message_t_0.insert("Designation_t_1868355488");
  all_values.push_back(NewOrderCross_message_t_0);
  all_compo_names.insert("NewOrderCross_message_t");

  { // Hdr
    xml_element Hdr_51{"Hdr"};
    multiset<string> Hdr_51_set;
    Hdr_51.add_attribute("SeqNum", "971646867"); // 1
    Hdr_51_set.insert("971646867");
    Hdr_51.add_attribute("SID", "SenderCompID_t_209590405"); // 1
    Hdr_51_set.insert("SenderCompID_t_209590405");
    Hdr_51.add_attribute("TID", "TargetCompID_t_59846670"); // 1
    Hdr_51_set.insert("TargetCompID_t_59846670");
    Hdr_51.add_attribute("OBID", "OnBehalfOfCompID_t_775052278"); // 1
    Hdr_51_set.insert("OnBehalfOfCompID_t_775052278");
    Hdr_51.add_attribute("D2ID", "DeliverToCompID_t_123121414"); // 1
    Hdr_51_set.insert("DeliverToCompID_t_123121414");
    Hdr_51.add_attribute("SSub", "SenderSubID_t_1449561431"); // 1
    Hdr_51_set.insert("SenderSubID_t_1449561431");
    Hdr_51.add_attribute("SLoc", "SenderLocationID_t_2091263506"); // 1
    Hdr_51_set.insert("SenderLocationID_t_2091263506");
    Hdr_51.add_attribute("TSub", "TargetSubID_t_1877390495"); // 1
    Hdr_51_set.insert("TargetSubID_t_1877390495");
    Hdr_51.add_attribute("TLoc", "TargetLocationID_t_762848557"); // 1
    Hdr_51_set.insert("TargetLocationID_t_762848557");
    Hdr_51.add_attribute("OBSub", "OnBehalfOfSubID_t_1934635615"); // 1
    Hdr_51_set.insert("OnBehalfOfSubID_t_1934635615");
    Hdr_51.add_attribute("OBLoc", "OnBehalfOfLocationID_t_723325229"); // 1
    Hdr_51_set.insert("OnBehalfOfLocationID_t_723325229");
    Hdr_51.add_attribute("D2Sub", "DeliverToSubID_t_403541073"); // 1
    Hdr_51_set.insert("DeliverToSubID_t_403541073");
    Hdr_51.add_attribute("D2Loc", "DeliverToLocationID_t_714793469"); // 1
    Hdr_51_set.insert("DeliverToLocationID_t_714793469");
    Hdr_51.add_attribute("PosDup", "N"); // 1
    Hdr_51_set.insert("N");
    Hdr_51.add_attribute("PosRsnd", "N"); // 1
    Hdr_51_set.insert("N");
    Hdr_51.add_attribute("Snt", "SendingTime_t_1683746353"); // 1
    Hdr_51_set.insert("SendingTime_t_1683746353");
    Hdr_51.add_attribute("OrigSnt", "OrigSendingTime_t_1308286904"); // 1
    Hdr_51_set.insert("OrigSendingTime_t_1308286904");
    Hdr_51.add_attribute("MsgEncd", "MessageEncoding_t_1287057151"); // 1
    Hdr_51_set.insert("MessageEncoding_t_1287057151");
    all_values.push_back(Hdr_51_set);
    all_compo_names.insert("Hdr_51_set");

    {
      xml_element Hop_51{"Hop"};
      multiset<string> Hop_51_set;
      Hop_51.add_attribute("ID", "HopCompID_t_1858974401"); // 2
      Hop_51_set.insert("HopCompID_t_1858974401");
      Hop_51.add_attribute("Ref", "1441229240"); // 2
      Hop_51_set.insert("1441229240");
      Hop_51.add_attribute("Snt", "HopSendingTime_t_968746452"); // 2
      Hop_51_set.insert("HopSendingTime_t_968746452");
      all_values.push_back(Hop_51_set);
      all_compo_names.insert("Hop_51_set");

      Hdr_51.add_element(Hop_51);
    }
    elt.add_element(Hdr_51);
  } // end Hdr
  { // Pty
    xml_element Pty_198{"Pty"};
    multiset<string> Pty_198_set;
    Pty_198.add_attribute("ID", "RootPartyID_t_1529323434"); // 1
    Pty_198_set.insert("RootPartyID_t_1529323434");
    Pty_198.add_attribute("Src", "C"); // 1
    Pty_198_set.insert("C");
    Pty_198.add_attribute("R", "66"); // 1
    Pty_198_set.insert("66");
    all_values.push_back(Pty_198_set);
    all_compo_names.insert("Pty_198_set");

    {
      xml_element Sub_198{"Sub"};
      multiset<string> Sub_198_set;
      Sub_198.add_attribute("ID", "RootPartySubID_t_1144211711"); // 2
      Sub_198_set.insert("RootPartySubID_t_1144211711");
      Sub_198.add_attribute("Typ", "16"); // 2
      Sub_198_set.insert("16");
      all_values.push_back(Sub_198_set);
      all_compo_names.insert("Sub_198_set");

      Pty_198.add_element(Sub_198);
    }
    elt.add_element(Pty_198);
  } // end Pty
  { // SideCrossMod
    xml_element SideCrossMod_3{"SideCrossMod"};
    multiset<string> SideCrossMod_3_set;
    SideCrossMod_3.add_attribute("Side", "5"); // 1
    SideCrossMod_3_set.insert("5");
    SideCrossMod_3.add_attribute("OrigClOrdID", "OrigClOrdID_t_1570032004"); // 1
    SideCrossMod_3_set.insert("OrigClOrdID_t_1570032004");
    SideCrossMod_3.add_attribute("ClOrdID", "ClOrdID_t_1358499806"); // 1
    SideCrossMod_3_set.insert("ClOrdID_t_1358499806");
    SideCrossMod_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1900660264"); // 1
    SideCrossMod_3_set.insert("SecondaryClOrdID_t_1900660264");
    SideCrossMod_3.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1779622410"); // 1
    SideCrossMod_3_set.insert("ClOrdLinkID_t_1779622410");
    SideCrossMod_3.add_attribute("OrignDt", "TradeOriginationDate_t_1418346476"); // 1
    SideCrossMod_3_set.insert("TradeOriginationDate_t_1418346476");
    SideCrossMod_3.add_attribute("TrdDt", "TradeDate_t_528228894"); // 1
    SideCrossMod_3_set.insert("TradeDate_t_528228894");
    SideCrossMod_3.add_attribute("Acct", "Account_t_1902743824"); // 1
    SideCrossMod_3_set.insert("Account_t_1902743824");
    SideCrossMod_3.add_attribute("AcctIDSrc", "99"); // 1
    SideCrossMod_3_set.insert("99");
    SideCrossMod_3.add_attribute("AcctTyp", "7"); // 1
    SideCrossMod_3_set.insert("7");
    SideCrossMod_3.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_3_set.insert("0");
    SideCrossMod_3.add_attribute("AllocID", "AllocID_t_208492252"); // 1
    SideCrossMod_3_set.insert("AllocID_t_208492252");
    SideCrossMod_3.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("Cpcty", "G"); // 1
    SideCrossMod_3_set.insert("G");
    SideCrossMod_3.add_attribute("Rstctions", "5"); // 1
    SideCrossMod_3_set.insert("5");
    SideCrossMod_3.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_3_set.insert("false");
    SideCrossMod_3.add_attribute("CustCpcty", "3"); // 1
    SideCrossMod_3_set.insert("3");
    SideCrossMod_3.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_3_set.insert("Y");
    SideCrossMod_3.add_attribute("SettlCcy", "JPY"); // 1
    SideCrossMod_3_set.insert("JPY");
    SideCrossMod_3.add_attribute("BkngTyp", "0"); // 1
    SideCrossMod_3_set.insert("0");
    SideCrossMod_3.add_attribute("Txt", "Text_t_756857428"); // 1
    SideCrossMod_3_set.insert("Text_t_756857428");
    SideCrossMod_3.add_attribute("EncTxtLen", "2136851260"); // 1
    SideCrossMod_3_set.insert("2136851260");
    SideCrossMod_3.add_attribute("EncTxt", "EncodedText_t_218652901"); // 1
    SideCrossMod_3_set.insert("EncodedText_t_218652901");
    SideCrossMod_3.add_attribute("PosEfct", "R"); // 1
    SideCrossMod_3_set.insert("R");
    SideCrossMod_3.add_attribute("Covered", "0"); // 1
    SideCrossMod_3_set.insert("0");
    SideCrossMod_3.add_attribute("CshMgn", "2"); // 1
    SideCrossMod_3_set.insert("2");
    SideCrossMod_3.add_attribute("ClrFeeInd", "H"); // 1
    SideCrossMod_3_set.insert("H");
    SideCrossMod_3.add_attribute("SolFlag", "N"); // 1
    SideCrossMod_3_set.insert("N");
    SideCrossMod_3.add_attribute("SideComplianceID", "SideComplianceID_t_144394361"); // 1
    SideCrossMod_3_set.insert("SideComplianceID_t_144394361");
    SideCrossMod_3.add_attribute("SideTmFrc", "SideTimeInForce_t_287213272"); // 1
    SideCrossMod_3_set.insert("SideTimeInForce_t_287213272");
    all_values.push_back(SideCrossMod_3_set);
    all_compo_names.insert("SideCrossMod_3_set");

    {
      xml_element Pty_199{"Pty"};
      multiset<string> Pty_199_set;
      Pty_199.add_attribute("ID", "PartyID_t_1925754848"); // 2
      Pty_199_set.insert("PartyID_t_1925754848");
      Pty_199.add_attribute("Src", "G"); // 2
      Pty_199_set.insert("G");
      Pty_199.add_attribute("R", "40"); // 2
      Pty_199_set.insert("40");
      all_values.push_back(Pty_199_set);
      all_compo_names.insert("Pty_199_set");

      {
        xml_element Sub_199{"Sub"};
        multiset<string> Sub_199_set;
        Sub_199.add_attribute("ID", "PartySubID_t_1196617676"); // 3
        Sub_199_set.insert("PartySubID_t_1196617676");
        Sub_199.add_attribute("Typ", "22"); // 3
        Sub_199_set.insert("22");
        all_values.push_back(Sub_199_set);
        all_compo_names.insert("Sub_199_set");

        Pty_199.add_element(Sub_199);
      }
      SideCrossMod_3.add_element(Pty_199);
    }
    {
      xml_element PreAll_6{"PreAll"};
      multiset<string> PreAll_6_set;
      PreAll_6.add_attribute("Acct", "AllocAccount_t_1822095859"); // 2
      PreAll_6_set.insert("AllocAccount_t_1822095859");
      PreAll_6.add_attribute("ActIDSrc", "3"); // 2
      PreAll_6_set.insert("3");
      PreAll_6.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_6_set.insert("USD");
      PreAll_6.add_attribute("IndAllocID", "IndividualAllocID_t_1252831105"); // 2
      PreAll_6_set.insert("IndividualAllocID_t_1252831105");
      PreAll_6.add_attribute("Qty", "11569693.440000"); // 2
      PreAll_6_set.insert("11569693.440000");
      all_values.push_back(PreAll_6_set);
      all_compo_names.insert("PreAll_6_set");

      {
        xml_element Pty_200{"Pty"};
        multiset<string> Pty_200_set;
        Pty_200.add_attribute("ID", "NestedPartyID_t_1515755135"); // 3
        Pty_200_set.insert("NestedPartyID_t_1515755135");
        Pty_200.add_attribute("Src", "G"); // 3
        Pty_200_set.insert("G");
        Pty_200.add_attribute("R", "34"); // 3
        Pty_200_set.insert("34");
        all_values.push_back(Pty_200_set);
        all_compo_names.insert("Pty_200_set");

        {
          xml_element Sub_200{"Sub"};
          multiset<string> Sub_200_set;
          Sub_200.add_attribute("ID", "NestedPartySubID_t_1750535754"); // 4
          Sub_200_set.insert("NestedPartySubID_t_1750535754");
          Sub_200.add_attribute("Typ", "11"); // 4
          Sub_200_set.insert("11");
          all_values.push_back(Sub_200_set);
          all_compo_names.insert("Sub_200_set");

          Pty_200.add_element(Sub_200);
        }
        PreAll_6.add_element(Pty_200);
      }
      SideCrossMod_3.add_element(PreAll_6);
    }
    {
      xml_element OrdQty_11{"OrdQty"};
      multiset<string> OrdQty_11_set;
      OrdQty_11.add_attribute("Qty", "4936567.800000"); // 2
      OrdQty_11_set.insert("4936567.800000");
      OrdQty_11.add_attribute("Cash", "11461196.290000"); // 2
      OrdQty_11_set.insert("11461196.290000");
      OrdQty_11.add_attribute("Pct", "14288097.960000"); // 2
      OrdQty_11_set.insert("14288097.960000");
      OrdQty_11.add_attribute("RndDir", "1"); // 2
      OrdQty_11_set.insert("1");
      OrdQty_11.add_attribute("RndMod", "19829327.440000"); // 2
      OrdQty_11_set.insert("19829327.440000");
      all_values.push_back(OrdQty_11_set);
      all_compo_names.insert("OrdQty_11_set");

      SideCrossMod_3.add_element(OrdQty_11);
    }
    {
      xml_element Comm_12{"Comm"};
      multiset<string> Comm_12_set;
      Comm_12.add_attribute("Comm", "Commission_t_38183576"); // 2
      Comm_12_set.insert("Commission_t_38183576");
      Comm_12.add_attribute("CommTyp", "1"); // 2
      Comm_12_set.insert("1");
      Comm_12.add_attribute("Ccy", "CAN"); // 2
      Comm_12_set.insert("CAN");
      Comm_12.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_12_set.insert("Y");
      all_values.push_back(Comm_12_set);
      all_compo_names.insert("Comm_12_set");

      SideCrossMod_3.add_element(Comm_12);
    }
    elt.add_element(SideCrossMod_3);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_4{"SideCrossMod"};
    multiset<string> SideCrossMod_4_set;
    SideCrossMod_4.add_attribute("Side", "4"); // 1
    SideCrossMod_4_set.insert("4");
    SideCrossMod_4.add_attribute("OrigClOrdID", "OrigClOrdID_t_1955056825"); // 1
    SideCrossMod_4_set.insert("OrigClOrdID_t_1955056825");
    SideCrossMod_4.add_attribute("ClOrdID", "ClOrdID_t_201614159"); // 1
    SideCrossMod_4_set.insert("ClOrdID_t_201614159");
    SideCrossMod_4.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1561360972"); // 1
    SideCrossMod_4_set.insert("SecondaryClOrdID_t_1561360972");
    SideCrossMod_4.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_94786450"); // 1
    SideCrossMod_4_set.insert("ClOrdLinkID_t_94786450");
    SideCrossMod_4.add_attribute("OrignDt", "TradeOriginationDate_t_2127369007"); // 1
    SideCrossMod_4_set.insert("TradeOriginationDate_t_2127369007");
    SideCrossMod_4.add_attribute("TrdDt", "TradeDate_t_1458931950"); // 1
    SideCrossMod_4_set.insert("TradeDate_t_1458931950");
    SideCrossMod_4.add_attribute("Acct", "Account_t_14138484"); // 1
    SideCrossMod_4_set.insert("Account_t_14138484");
    SideCrossMod_4.add_attribute("AcctIDSrc", "2"); // 1
    SideCrossMod_4_set.insert("2");
    SideCrossMod_4.add_attribute("AcctTyp", "2"); // 1
    SideCrossMod_4_set.insert("2");
    SideCrossMod_4.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_4_set.insert("1");
    SideCrossMod_4.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_4_set.insert("1");
    SideCrossMod_4.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_4_set.insert("0");
    SideCrossMod_4.add_attribute("AllocID", "AllocID_t_996013578"); // 1
    SideCrossMod_4_set.insert("AllocID_t_996013578");
    SideCrossMod_4.add_attribute("QtyTyp", "0"); // 1
    SideCrossMod_4_set.insert("0");
    SideCrossMod_4.add_attribute("Cpcty", "W"); // 1
    SideCrossMod_4_set.insert("W");
    SideCrossMod_4.add_attribute("Rstctions", "1"); // 1
    SideCrossMod_4_set.insert("1");
    SideCrossMod_4.add_attribute("PrTrdAnon", "true"); // 1
    SideCrossMod_4_set.insert("true");
    SideCrossMod_4.add_attribute("CustCpcty", "2"); // 1
    SideCrossMod_4_set.insert("2");
    SideCrossMod_4.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_4_set.insert("Y");
    SideCrossMod_4.add_attribute("SettlCcy", "CHF"); // 1
    SideCrossMod_4_set.insert("CHF");
    SideCrossMod_4.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_4_set.insert("2");
    SideCrossMod_4.add_attribute("Txt", "Text_t_1965595097"); // 1
    SideCrossMod_4_set.insert("Text_t_1965595097");
    SideCrossMod_4.add_attribute("EncTxtLen", "837003590"); // 1
    SideCrossMod_4_set.insert("837003590");
    SideCrossMod_4.add_attribute("EncTxt", "EncodedText_t_948905896"); // 1
    SideCrossMod_4_set.insert("EncodedText_t_948905896");
    SideCrossMod_4.add_attribute("PosEfct", "F"); // 1
    SideCrossMod_4_set.insert("F");
    SideCrossMod_4.add_attribute("Covered", "0"); // 1
    SideCrossMod_4_set.insert("0");
    SideCrossMod_4.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_4_set.insert("3");
    SideCrossMod_4.add_attribute("ClrFeeInd", "9"); // 1
    SideCrossMod_4_set.insert("9");
    SideCrossMod_4.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_4_set.insert("Y");
    SideCrossMod_4.add_attribute("SideComplianceID", "SideComplianceID_t_272490857"); // 1
    SideCrossMod_4_set.insert("SideComplianceID_t_272490857");
    SideCrossMod_4.add_attribute("SideTmFrc", "SideTimeInForce_t_754260112"); // 1
    SideCrossMod_4_set.insert("SideTimeInForce_t_754260112");
    all_values.push_back(SideCrossMod_4_set);
    all_compo_names.insert("SideCrossMod_4_set");

    {
      xml_element Pty_201{"Pty"};
      multiset<string> Pty_201_set;
      Pty_201.add_attribute("ID", "PartyID_t_1377708906"); // 2
      Pty_201_set.insert("PartyID_t_1377708906");
      Pty_201.add_attribute("Src", "5"); // 2
      Pty_201_set.insert("5");
      Pty_201.add_attribute("R", "22"); // 2
      Pty_201_set.insert("22");
      all_values.push_back(Pty_201_set);
      all_compo_names.insert("Pty_201_set");

      {
        xml_element Sub_201{"Sub"};
        multiset<string> Sub_201_set;
        Sub_201.add_attribute("ID", "PartySubID_t_1357594265"); // 3
        Sub_201_set.insert("PartySubID_t_1357594265");
        Sub_201.add_attribute("Typ", "4"); // 3
        Sub_201_set.insert("4");
        all_values.push_back(Sub_201_set);
        all_compo_names.insert("Sub_201_set");

        Pty_201.add_element(Sub_201);
      }
      SideCrossMod_4.add_element(Pty_201);
    }
    {
      xml_element PreAll_7{"PreAll"};
      multiset<string> PreAll_7_set;
      PreAll_7.add_attribute("Acct", "AllocAccount_t_863185047"); // 2
      PreAll_7_set.insert("AllocAccount_t_863185047");
      PreAll_7.add_attribute("ActIDSrc", "99"); // 2
      PreAll_7_set.insert("99");
      PreAll_7.add_attribute("AllocSettlCcy", "GBP"); // 2
      PreAll_7_set.insert("GBP");
      PreAll_7.add_attribute("IndAllocID", "IndividualAllocID_t_1332674976"); // 2
      PreAll_7_set.insert("IndividualAllocID_t_1332674976");
      PreAll_7.add_attribute("Qty", "15176051.040000"); // 2
      PreAll_7_set.insert("15176051.040000");
      all_values.push_back(PreAll_7_set);
      all_compo_names.insert("PreAll_7_set");

      {
        xml_element Pty_202{"Pty"};
        multiset<string> Pty_202_set;
        Pty_202.add_attribute("ID", "NestedPartyID_t_1547949320"); // 3
        Pty_202_set.insert("NestedPartyID_t_1547949320");
        Pty_202.add_attribute("Src", "2"); // 3
        Pty_202_set.insert("2");
        Pty_202.add_attribute("R", "42"); // 3
        Pty_202_set.insert("42");
        all_values.push_back(Pty_202_set);
        all_compo_names.insert("Pty_202_set");

        {
          xml_element Sub_202{"Sub"};
          multiset<string> Sub_202_set;
          Sub_202.add_attribute("ID", "NestedPartySubID_t_1912234385"); // 4
          Sub_202_set.insert("NestedPartySubID_t_1912234385");
          Sub_202.add_attribute("Typ", "15"); // 4
          Sub_202_set.insert("15");
          all_values.push_back(Sub_202_set);
          all_compo_names.insert("Sub_202_set");

          Pty_202.add_element(Sub_202);
        }
        PreAll_7.add_element(Pty_202);
      }
      SideCrossMod_4.add_element(PreAll_7);
    }
    {
      xml_element OrdQty_12{"OrdQty"};
      multiset<string> OrdQty_12_set;
      OrdQty_12.add_attribute("Qty", "7901299.800000"); // 2
      OrdQty_12_set.insert("7901299.800000");
      OrdQty_12.add_attribute("Cash", "18795715.560000"); // 2
      OrdQty_12_set.insert("18795715.560000");
      OrdQty_12.add_attribute("Pct", "8169555.370000"); // 2
      OrdQty_12_set.insert("8169555.370000");
      OrdQty_12.add_attribute("RndDir", "1"); // 2
      OrdQty_12_set.insert("1");
      OrdQty_12.add_attribute("RndMod", "8455447.080000"); // 2
      OrdQty_12_set.insert("8455447.080000");
      all_values.push_back(OrdQty_12_set);
      all_compo_names.insert("OrdQty_12_set");

      SideCrossMod_4.add_element(OrdQty_12);
    }
    {
      xml_element Comm_13{"Comm"};
      multiset<string> Comm_13_set;
      Comm_13.add_attribute("Comm", "Commission_t_635066986"); // 2
      Comm_13_set.insert("Commission_t_635066986");
      Comm_13.add_attribute("CommTyp", "1"); // 2
      Comm_13_set.insert("1");
      Comm_13.add_attribute("Ccy", "JPY"); // 2
      Comm_13_set.insert("JPY");
      Comm_13.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_13_set.insert("N");
      all_values.push_back(Comm_13_set);
      all_compo_names.insert("Comm_13_set");

      SideCrossMod_4.add_element(Comm_13);
    }
    elt.add_element(SideCrossMod_4);
  } // end SideCrossMod
  { // Instrmt
    xml_element Instrmt_38{"Instrmt"};
    multiset<string> Instrmt_38_set;
    Instrmt_38.add_attribute("Sym", "Symbol_t_649974851"); // 1
    Instrmt_38_set.insert("Symbol_t_649974851");
    Instrmt_38.add_attribute("Sfx", "WI"); // 1
    Instrmt_38_set.insert("WI");
    Instrmt_38.add_attribute("ID", "SecurityID_t_171635814"); // 1
    Instrmt_38_set.insert("SecurityID_t_171635814");
    Instrmt_38.add_attribute("Src", "C"); // 1
    Instrmt_38_set.insert("C");
    Instrmt_38.add_attribute("Prod", "4"); // 1
    Instrmt_38_set.insert("4");
    Instrmt_38.add_attribute("ProdCmplx", "ProductComplex_t_1549344720"); // 1
    Instrmt_38_set.insert("ProductComplex_t_1549344720");
    Instrmt_38.add_attribute("SecGrp", "SecurityGroup_t_608833891"); // 1
    Instrmt_38_set.insert("SecurityGroup_t_608833891");
    Instrmt_38.add_attribute("CFI", "CFICode_t_893871974"); // 1
    Instrmt_38_set.insert("CFICode_t_893871974");
    Instrmt_38.add_attribute("SecTyp", "DN"); // 1
    Instrmt_38_set.insert("DN");
    Instrmt_38.add_attribute("SubTyp", "SecuritySubType_t_1754134023"); // 1
    Instrmt_38_set.insert("SecuritySubType_t_1754134023");
    Instrmt_38.add_attribute("MMY", "1757057021"); // 1
    Instrmt_38_set.insert("1757057021");
    Instrmt_38.add_attribute("MatDt", "MaturityDate_t_1146068991"); // 1
    Instrmt_38_set.insert("MaturityDate_t_1146068991");
    Instrmt_38.add_attribute("MatTm", "489198681"); // 1
    Instrmt_38_set.insert("489198681");
    Instrmt_38.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_161509115"); // 1
    Instrmt_38_set.insert("SettleOnOpenFlag_t_161509115");
    Instrmt_38.add_attribute("AsgnMeth", "331260319"); // 1
    Instrmt_38_set.insert("331260319");
    Instrmt_38.add_attribute("Status", "2"); // 1
    Instrmt_38_set.insert("2");
    Instrmt_38.add_attribute("CpnPmt", "CouponPaymentDate_t_1709458436"); // 1
    Instrmt_38_set.insert("CouponPaymentDate_t_1709458436");
    Instrmt_38.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_38_set.insert("FR");
    Instrmt_38.add_attribute("Snrty", "SB"); // 1
    Instrmt_38_set.insert("SB");
    Instrmt_38.add_attribute("NotlPctOut", "14742091.730000"); // 1
    Instrmt_38_set.insert("14742091.730000");
    Instrmt_38.add_attribute("OrigNotlPctOut", "19955143.130000"); // 1
    Instrmt_38_set.insert("19955143.130000");
    Instrmt_38.add_attribute("AttchPnt", "18115977.170000"); // 1
    Instrmt_38_set.insert("18115977.170000");
    Instrmt_38.add_attribute("DetchPnt", "12062970.820000"); // 1
    Instrmt_38_set.insert("12062970.820000");
    Instrmt_38.add_attribute("Issued", "IssueDate_t_664986203"); // 1
    Instrmt_38_set.insert("IssueDate_t_664986203");
    Instrmt_38.add_attribute("RepoCollSecTyp", "575883211"); // 1
    Instrmt_38_set.insert("575883211");
    Instrmt_38.add_attribute("RepoTrm", "2051841790"); // 1
    Instrmt_38_set.insert("2051841790");
    Instrmt_38.add_attribute("RepoRt", "13000531.890000"); // 1
    Instrmt_38_set.insert("13000531.890000");
    Instrmt_38.add_attribute("Fctr", "1771722.950000"); // 1
    Instrmt_38_set.insert("1771722.950000");
    Instrmt_38.add_attribute("CrdRtg", "CreditRating_t_1698808747"); // 1
    Instrmt_38_set.insert("CreditRating_t_1698808747");
    Instrmt_38.add_attribute("Rgstry", "InstrRegistry_t_1791415201"); // 1
    Instrmt_38_set.insert("InstrRegistry_t_1791415201");
    Instrmt_38.add_attribute("IssuCtry", "1320197010"); // 1
    Instrmt_38_set.insert("1320197010");
    Instrmt_38.add_attribute("StPrv", "StateOrProvinceOfIssue_t_201299951"); // 1
    Instrmt_38_set.insert("StateOrProvinceOfIssue_t_201299951");
    Instrmt_38.add_attribute("Lcl", "LocaleOfIssue_t_1081980500"); // 1
    Instrmt_38_set.insert("LocaleOfIssue_t_1081980500");
    Instrmt_38.add_attribute("Redeem", "RedemptionDate_t_1491832824"); // 1
    Instrmt_38_set.insert("RedemptionDate_t_1491832824");
    Instrmt_38.add_attribute("StrkPx", "11237656.600000"); // 1
    Instrmt_38_set.insert("11237656.600000");
    Instrmt_38.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_38_set.insert("JPY");
    Instrmt_38.add_attribute("StrkMult", "17325995.510000"); // 1
    Instrmt_38_set.insert("17325995.510000");
    Instrmt_38.add_attribute("StrkValu", "20206778.860000"); // 1
    Instrmt_38_set.insert("20206778.860000");
    Instrmt_38.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_38_set.insert("3");
    Instrmt_38.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_38_set.insert("2");
    Instrmt_38.add_attribute("StrkPxBndryPrcsn", "16302512.590000"); // 1
    Instrmt_38_set.insert("16302512.590000");
    Instrmt_38.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_38_set.insert("2");
    Instrmt_38.add_attribute("OptAt", "1828448607"); // 1
    Instrmt_38_set.insert("1828448607");
    Instrmt_38.add_attribute("Mult", "17917603.740000"); // 1
    Instrmt_38_set.insert("17917603.740000");
    Instrmt_38.add_attribute("MultTyp", "2"); // 1
    Instrmt_38_set.insert("2");
    Instrmt_38.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_38_set.insert("4");
    Instrmt_38.add_attribute("MinPxIncr", "13537351.620000"); // 1
    Instrmt_38_set.insert("13537351.620000");
    Instrmt_38.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_550855325"); // 1
    Instrmt_38_set.insert("MinPriceIncrementAmount_t_550855325");
    Instrmt_38.add_attribute("UOM", "tn"); // 1
    Instrmt_38_set.insert("tn");
    Instrmt_38.add_attribute("UOMQty", "6804606.880000"); // 1
    Instrmt_38_set.insert("6804606.880000");
    Instrmt_38.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_38_set.insert("Bcf");
    Instrmt_38.add_attribute("PxUOMQty", "2258669.030000"); // 1
    Instrmt_38_set.insert("2258669.030000");
    Instrmt_38.add_attribute("SettlMeth", "C"); // 1
    Instrmt_38_set.insert("C");
    Instrmt_38.add_attribute("ExerStyle", "2"); // 1
    Instrmt_38_set.insert("2");
    Instrmt_38.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_38_set.insert("1");
    Instrmt_38.add_attribute("OptPayAmt", "OptPayoutAmount_t_1791115912"); // 1
    Instrmt_38_set.insert("OptPayoutAmount_t_1791115912");
    Instrmt_38.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_38_set.insert("PCTPAR");
    Instrmt_38.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_38_set.insert("EQTY");
    Instrmt_38.add_attribute("ListMeth", "0"); // 1
    Instrmt_38_set.insert("0");
    Instrmt_38.add_attribute("CapPx", "20078569.370000"); // 1
    Instrmt_38_set.insert("20078569.370000");
    Instrmt_38.add_attribute("FlrPx", "1516357.720000"); // 1
    Instrmt_38_set.insert("1516357.720000");
    Instrmt_38.add_attribute("PutCall", "1"); // 1
    Instrmt_38_set.insert("1");
    Instrmt_38.add_attribute("FlexInd", "false"); // 1
    Instrmt_38_set.insert("false");
    Instrmt_38.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_38_set.insert("true");
    Instrmt_38.add_attribute("TmUnit", "D"); // 1
    Instrmt_38_set.insert("D");
    Instrmt_38.add_attribute("CpnRt", "20691597.010000"); // 1
    Instrmt_38_set.insert("20691597.010000");
    Instrmt_38.add_attribute("Exch", "SecurityExchange_t_389678844"); // 1
    Instrmt_38_set.insert("SecurityExchange_t_389678844");
    Instrmt_38.add_attribute("PosLmt", "105138878"); // 1
    Instrmt_38_set.insert("105138878");
    Instrmt_38.add_attribute("NTPosLmt", "1942353939"); // 1
    Instrmt_38_set.insert("1942353939");
    Instrmt_38.add_attribute("Issr", "Issuer_t_2042828079"); // 1
    Instrmt_38_set.insert("Issuer_t_2042828079");
    Instrmt_38.add_attribute("EncIssrLen", "1444388804"); // 1
    Instrmt_38_set.insert("1444388804");
    Instrmt_38.add_attribute("EncIssr", "EncodedIssuer_t_1425121550"); // 1
    Instrmt_38_set.insert("EncodedIssuer_t_1425121550");
    Instrmt_38.add_attribute("Desc", "SecurityDesc_t_547079008"); // 1
    Instrmt_38_set.insert("SecurityDesc_t_547079008");
    Instrmt_38.add_attribute("EncSecDescLen", "1125353763"); // 1
    Instrmt_38_set.insert("1125353763");
    Instrmt_38.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1069398277"); // 1
    Instrmt_38_set.insert("EncodedSecurityDesc_t_1069398277");
    Instrmt_38.add_attribute("Pool", "Pool_t_1530073905"); // 1
    Instrmt_38_set.insert("Pool_t_1530073905");
    Instrmt_38.add_attribute("CSetMo", "665638859"); // 1
    Instrmt_38_set.insert("665638859");
    Instrmt_38.add_attribute("CPPgm", "99"); // 1
    Instrmt_38_set.insert("99");
    Instrmt_38.add_attribute("CPRegT", "CPRegType_t_2080929231"); // 1
    Instrmt_38_set.insert("CPRegType_t_2080929231");
    Instrmt_38.add_attribute("Dated", "DatedDate_t_1227391693"); // 1
    Instrmt_38_set.insert("DatedDate_t_1227391693");
    Instrmt_38.add_attribute("IntAcrl", "InterestAccrualDate_t_956110479"); // 1
    Instrmt_38_set.insert("InterestAccrualDate_t_956110479");
    all_values.push_back(Instrmt_38_set);
    all_compo_names.insert("Instrmt_38_set");

    {
      xml_element AID_41{"AID"};
      multiset<string> AID_41_set;
      AID_41.add_attribute("AltID", "SecurityAltID_t_332331574"); // 2
      AID_41_set.insert("SecurityAltID_t_332331574");
      AID_41.add_attribute("AltIDSrc", "K"); // 2
      AID_41_set.insert("K");
      all_values.push_back(AID_41_set);
      all_compo_names.insert("AID_41_set");

      Instrmt_38.add_element(AID_41);
    }
    {
      xml_element SecXML_41{"SecXML"};
      multiset<string> SecXML_41_set;
      SecXML_41.add_attribute("Schema", "SecurityXMLSchema_t_695384601"); // 2
      SecXML_41_set.insert("SecurityXMLSchema_t_695384601");
      all_values.push_back(SecXML_41_set);
      all_compo_names.insert("SecXML_41_set");

      Instrmt_38.add_element(SecXML_41);
    }
    {
      xml_element Evnt_41{"Evnt"};
      multiset<string> Evnt_41_set;
      Evnt_41.add_attribute("EventTyp", "8"); // 2
      Evnt_41_set.insert("8");
      Evnt_41.add_attribute("Dt", "EventDate_t_107525062"); // 2
      Evnt_41_set.insert("EventDate_t_107525062");
      Evnt_41.add_attribute("Tm", "EventTime_t_339016866"); // 2
      Evnt_41_set.insert("EventTime_t_339016866");
      Evnt_41.add_attribute("Px", "16126455.030000"); // 2
      Evnt_41_set.insert("16126455.030000");
      Evnt_41.add_attribute("Txt", "EventText_t_1086447472"); // 2
      Evnt_41_set.insert("EventText_t_1086447472");
      all_values.push_back(Evnt_41_set);
      all_compo_names.insert("Evnt_41_set");

      Instrmt_38.add_element(Evnt_41);
    }
    {
      xml_element Pty_203{"Pty"};
      multiset<string> Pty_203_set;
      Pty_203.add_attribute("ID", "InstrumentPartyID_t_1681457878"); // 2
      Pty_203_set.insert("InstrumentPartyID_t_1681457878");
      Pty_203.add_attribute("Src", "7"); // 2
      Pty_203_set.insert("7");
      Pty_203.add_attribute("R", "29"); // 2
      Pty_203_set.insert("29");
      all_values.push_back(Pty_203_set);
      all_compo_names.insert("Pty_203_set");

      {
        xml_element Sub_203{"Sub"};
        multiset<string> Sub_203_set;
        Sub_203.add_attribute("ID", "InstrumentPartySubID_t_1077715193"); // 3
        Sub_203_set.insert("InstrumentPartySubID_t_1077715193");
        Sub_203.add_attribute("Typ", "24"); // 3
        Sub_203_set.insert("24");
        all_values.push_back(Sub_203_set);
        all_compo_names.insert("Sub_203_set");

        Pty_203.add_element(Sub_203);
      }
      Instrmt_38.add_element(Pty_203);
    }
    {
      xml_element CmplxEvnt_38{"CmplxEvnt"};
      multiset<string> CmplxEvnt_38_set;
      CmplxEvnt_38.add_attribute("Typ", "5"); // 2
      CmplxEvnt_38_set.insert("5");
      CmplxEvnt_38.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1597738168"); // 2
      CmplxEvnt_38_set.insert("ComplexOptPayoutAmount_t_1597738168");
      CmplxEvnt_38.add_attribute("Px", "1895649.870000"); // 2
      CmplxEvnt_38_set.insert("1895649.870000");
      CmplxEvnt_38.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_38_set.insert("3");
      CmplxEvnt_38.add_attribute("PxBndryPrcsn", "17028770.460000"); // 2
      CmplxEvnt_38_set.insert("17028770.460000");
      CmplxEvnt_38.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_38_set.insert("2");
      CmplxEvnt_38.add_attribute("Cond", "1"); // 2
      CmplxEvnt_38_set.insert("1");
      all_values.push_back(CmplxEvnt_38_set);
      all_compo_names.insert("CmplxEvnt_38_set");

      {
        xml_element EvntDts_38{"EvntDts"};
        multiset<string> EvntDts_38_set;
        EvntDts_38.add_attribute("StartDt", "ComplexEventStartDate_t_999782202"); // 3
        EvntDts_38_set.insert("ComplexEventStartDate_t_999782202");
        EvntDts_38.add_attribute("EndDt", "ComplexEventEndDate_t_1409556829"); // 3
        EvntDts_38_set.insert("ComplexEventEndDate_t_1409556829");
        all_values.push_back(EvntDts_38_set);
        all_compo_names.insert("EvntDts_38_set");

        {
          xml_element EvntTms_38{"EvntTms"};
          multiset<string> EvntTms_38_set;
          EvntTms_38.add_attribute("StartTm", "1566170476"); // 4
          EvntTms_38_set.insert("1566170476");
          EvntTms_38.add_attribute("EndTm", "2125135965"); // 4
          EvntTms_38_set.insert("2125135965");
          all_values.push_back(EvntTms_38_set);
          all_compo_names.insert("EvntTms_38_set");

          EvntDts_38.add_element(EvntTms_38);
        }
        CmplxEvnt_38.add_element(EvntDts_38);
      }
      Instrmt_38.add_element(CmplxEvnt_38);
    }
    elt.add_element(Instrmt_38);
  } // end Instrmt
  { // Undly
    xml_element Undly_50{"Undly"};
    multiset<string> Undly_50_set;
    Undly_50.add_attribute("Sym", "UnderlyingSymbol_t_948760734"); // 1
    Undly_50_set.insert("UnderlyingSymbol_t_948760734");
    Undly_50.add_attribute("Sfx", "CD"); // 1
    Undly_50_set.insert("CD");
    Undly_50.add_attribute("ID", "UnderlyingSecurityID_t_607121250"); // 1
    Undly_50_set.insert("UnderlyingSecurityID_t_607121250");
    Undly_50.add_attribute("Src", "4"); // 1
    Undly_50_set.insert("4");
    Undly_50.add_attribute("Prod", "12"); // 1
    Undly_50_set.insert("12");
    Undly_50.add_attribute("CFI", "UnderlyingCFICode_t_1563231729"); // 1
    Undly_50_set.insert("UnderlyingCFICode_t_1563231729");
    Undly_50.add_attribute("SecTyp", "FXSWAP"); // 1
    Undly_50_set.insert("FXSWAP");
    Undly_50.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1176457817"); // 1
    Undly_50_set.insert("UnderlyingSecuritySubType_t_1176457817");
    Undly_50.add_attribute("MMY", "111132683"); // 1
    Undly_50_set.insert("111132683");
    Undly_50.add_attribute("Mat", "UnderlyingMaturityDate_t_463258011"); // 1
    Undly_50_set.insert("UnderlyingMaturityDate_t_463258011");
    Undly_50.add_attribute("MatTm", "1283982880"); // 1
    Undly_50_set.insert("1283982880");
    Undly_50.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_450149549"); // 1
    Undly_50_set.insert("UnderlyingCouponPaymentDate_t_450149549");
    Undly_50.add_attribute("RestrctTyp", "MM"); // 1
    Undly_50_set.insert("MM");
    Undly_50.add_attribute("Snrty", "SD"); // 1
    Undly_50_set.insert("SD");
    Undly_50.add_attribute("NotlPctOut", "21316074.270000"); // 1
    Undly_50_set.insert("21316074.270000");
    Undly_50.add_attribute("OrigNotlPctOut", "14014386.590000"); // 1
    Undly_50_set.insert("14014386.590000");
    Undly_50.add_attribute("AttchPnt", "14610299.490000"); // 1
    Undly_50_set.insert("14610299.490000");
    Undly_50.add_attribute("DetchPnt", "10618389.720000"); // 1
    Undly_50_set.insert("10618389.720000");
    Undly_50.add_attribute("Issued", "UnderlyingIssueDate_t_1669327593"); // 1
    Undly_50_set.insert("UnderlyingIssueDate_t_1669327593");
    Undly_50.add_attribute("RepoCollSecTyp", "47614493"); // 1
    Undly_50_set.insert("47614493");
    Undly_50.add_attribute("RepoTrm", "512093492"); // 1
    Undly_50_set.insert("512093492");
    Undly_50.add_attribute("RepoRt", "18588925.800000"); // 1
    Undly_50_set.insert("18588925.800000");
    Undly_50.add_attribute("Fctr", "11713615.300000"); // 1
    Undly_50_set.insert("11713615.300000");
    Undly_50.add_attribute("CrdRtg", "UnderlyingCreditRating_t_67486890"); // 1
    Undly_50_set.insert("UnderlyingCreditRating_t_67486890");
    Undly_50.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1843327859"); // 1
    Undly_50_set.insert("UnderlyingInstrRegistry_t_1843327859");
    Undly_50.add_attribute("Ctry", "42969350"); // 1
    Undly_50_set.insert("42969350");
    Undly_50.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1067269092"); // 1
    Undly_50_set.insert("UnderlyingStateOrProvinceOfIssue_t_1067269092");
    Undly_50.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1105401041"); // 1
    Undly_50_set.insert("UnderlyingLocaleOfIssue_t_1105401041");
    Undly_50.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1609139827"); // 1
    Undly_50_set.insert("UnderlyingRedemptionDate_t_1609139827");
    Undly_50.add_attribute("StrkPx", "10449214.090000"); // 1
    Undly_50_set.insert("10449214.090000");
    Undly_50.add_attribute("StrkCcy", "CAN"); // 1
    Undly_50_set.insert("CAN");
    Undly_50.add_attribute("OptA", "1688212585"); // 1
    Undly_50_set.insert("1688212585");
    Undly_50.add_attribute("Mult", "20439937.490000"); // 1
    Undly_50_set.insert("20439937.490000");
    Undly_50.add_attribute("MultTyp", "0"); // 1
    Undly_50_set.insert("0");
    Undly_50.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_50_set.insert("2");
    Undly_50.add_attribute("UOM", "Bbl"); // 1
    Undly_50_set.insert("Bbl");
    Undly_50.add_attribute("UOMQty", "3596774.730000"); // 1
    Undly_50_set.insert("3596774.730000");
    Undly_50.add_attribute("PxUOM", "t"); // 1
    Undly_50_set.insert("t");
    Undly_50.add_attribute("PxUOMQty", "15708745.140000"); // 1
    Undly_50_set.insert("15708745.140000");
    Undly_50.add_attribute("TmUnit", "S"); // 1
    Undly_50_set.insert("S");
    Undly_50.add_attribute("ExerStyle", "2"); // 1
    Undly_50_set.insert("2");
    Undly_50.add_attribute("CpnRt", "20210240.630000"); // 1
    Undly_50_set.insert("20210240.630000");
    Undly_50.add_attribute("Exch", "UnderlyingSecurityExchange_t_751355350"); // 1
    Undly_50_set.insert("UnderlyingSecurityExchange_t_751355350");
    Undly_50.add_attribute("Issr", "UnderlyingIssuer_t_1947315561"); // 1
    Undly_50_set.insert("UnderlyingIssuer_t_1947315561");
    Undly_50.add_attribute("EncUndIssrLen", "2005147842"); // 1
    Undly_50_set.insert("2005147842");
    Undly_50.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_5310361"); // 1
    Undly_50_set.insert("EncodedUnderlyingIssuer_t_5310361");
    Undly_50.add_attribute("Desc", "UnderlyingSecurityDesc_t_1260861862"); // 1
    Undly_50_set.insert("UnderlyingSecurityDesc_t_1260861862");
    Undly_50.add_attribute("EncUndSecDescLen", "919503166"); // 1
    Undly_50_set.insert("919503166");
    Undly_50.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1674637954"); // 1
    Undly_50_set.insert("EncodedUnderlyingSecurityDesc_t_1674637954");
    Undly_50.add_attribute("CPPgm", "UnderlyingCPProgram_t_1308476355"); // 1
    Undly_50_set.insert("UnderlyingCPProgram_t_1308476355");
    Undly_50.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1431596658"); // 1
    Undly_50_set.insert("UnderlyingCPRegType_t_1431596658");
    Undly_50.add_attribute("AllocPct", "13860468.870000"); // 1
    Undly_50_set.insert("13860468.870000");
    Undly_50.add_attribute("Ccy", "USD"); // 1
    Undly_50_set.insert("USD");
    Undly_50.add_attribute("Qty", "10818910.980000"); // 1
    Undly_50_set.insert("10818910.980000");
    Undly_50.add_attribute("SettlTyp", "5"); // 1
    Undly_50_set.insert("5");
    Undly_50.add_attribute("CashAmt", "UnderlyingCashAmount_t_418868992"); // 1
    Undly_50_set.insert("UnderlyingCashAmount_t_418868992");
    Undly_50.add_attribute("CashTyp", "DIFF"); // 1
    Undly_50_set.insert("DIFF");
    Undly_50.add_attribute("Px", "19844634.150000"); // 1
    Undly_50_set.insert("19844634.150000");
    Undly_50.add_attribute("DirtPx", "14637904.010000"); // 1
    Undly_50_set.insert("14637904.010000");
    Undly_50.add_attribute("EndPx", "14766809.910000"); // 1
    Undly_50_set.insert("14766809.910000");
    Undly_50.add_attribute("StartVal", "UnderlyingStartValue_t_247396680"); // 1
    Undly_50_set.insert("UnderlyingStartValue_t_247396680");
    Undly_50.add_attribute("CurVal", "UnderlyingCurrentValue_t_1004519338"); // 1
    Undly_50_set.insert("UnderlyingCurrentValue_t_1004519338");
    Undly_50.add_attribute("EndVal", "UnderlyingEndValue_t_1373191092"); // 1
    Undly_50_set.insert("UnderlyingEndValue_t_1373191092");
    Undly_50.add_attribute("AdjQty", "15400199.100000"); // 1
    Undly_50_set.insert("15400199.100000");
    Undly_50.add_attribute("FxRate", "2684474.970000"); // 1
    Undly_50_set.insert("2684474.970000");
    Undly_50.add_attribute("FxRateCalc", "D"); // 1
    Undly_50_set.insert("D");
    Undly_50.add_attribute("CapValu", "UnderlyingCapValue_t_1899697383"); // 1
    Undly_50_set.insert("UnderlyingCapValue_t_1899697383");
    Undly_50.add_attribute("SetMeth", "UnderlyingSettlMethod_t_708833474"); // 1
    Undly_50_set.insert("UnderlyingSettlMethod_t_708833474");
    Undly_50.add_attribute("PutCall", "108840141"); // 1
    Undly_50_set.insert("108840141");
    all_values.push_back(Undly_50_set);
    all_compo_names.insert("Undly_50_set");

    {
      xml_element UndAID_50{"UndAID"};
      multiset<string> UndAID_50_set;
      UndAID_50.add_attribute("AltID", "UnderlyingSecurityAltID_t_575149219"); // 2
      UndAID_50_set.insert("UnderlyingSecurityAltID_t_575149219");
      UndAID_50.add_attribute("AltIDSrc", "J"); // 2
      UndAID_50_set.insert("J");
      all_values.push_back(UndAID_50_set);
      all_compo_names.insert("UndAID_50_set");

      Undly_50.add_element(UndAID_50);
    }
    {
      xml_element Stip_78{"Stip"};
      multiset<string> Stip_78_set;
      Stip_78.add_attribute("Typ", "REDEMPTION"); // 2
      Stip_78_set.insert("REDEMPTION");
      Stip_78.add_attribute("Val", "UnderlyingStipValue_t_1326504570"); // 2
      Stip_78_set.insert("UnderlyingStipValue_t_1326504570");
      all_values.push_back(Stip_78_set);
      all_compo_names.insert("Stip_78_set");

      Undly_50.add_element(Stip_78);
    }
    {
      xml_element Pty_204{"Pty"};
      multiset<string> Pty_204_set;
      Pty_204.add_attribute("ID", "UnderlyingInstrumentPartyID_t_85550595"); // 2
      Pty_204_set.insert("UnderlyingInstrumentPartyID_t_85550595");
      Pty_204.add_attribute("Src", "7"); // 2
      Pty_204_set.insert("7");
      Pty_204.add_attribute("R", "58"); // 2
      Pty_204_set.insert("58");
      all_values.push_back(Pty_204_set);
      all_compo_names.insert("Pty_204_set");

      {
        xml_element Sub_204{"Sub"};
        multiset<string> Sub_204_set;
        Sub_204.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1346412457"); // 3
        Sub_204_set.insert("UnderlyingInstrumentPartySubID_t_1346412457");
        Sub_204.add_attribute("Typ", "25"); // 3
        Sub_204_set.insert("25");
        all_values.push_back(Sub_204_set);
        all_compo_names.insert("Sub_204_set");

        Pty_204.add_element(Sub_204);
      }
      Undly_50.add_element(Pty_204);
    }
    elt.add_element(Undly_50);
  } // end Undly
  { // Leg
    xml_element Leg_50{"Leg"};
    multiset<string> Leg_50_set;
    Leg_50.add_attribute("Sym", "LegSymbol_t_507405165"); // 1
    Leg_50_set.insert("LegSymbol_t_507405165");
    Leg_50.add_attribute("Sfx", "CD"); // 1
    Leg_50_set.insert("CD");
    Leg_50.add_attribute("ID", "LegSecurityID_t_97532477"); // 1
    Leg_50_set.insert("LegSecurityID_t_97532477");
    Leg_50.add_attribute("Src", "M"); // 1
    Leg_50_set.insert("M");
    Leg_50.add_attribute("Prod", "8"); // 1
    Leg_50_set.insert("8");
    Leg_50.add_attribute("CFI", "LegCFICode_t_1179423575"); // 1
    Leg_50_set.insert("LegCFICode_t_1179423575");
    Leg_50.add_attribute("SecTyp", "REPLACD"); // 1
    Leg_50_set.insert("REPLACD");
    Leg_50.add_attribute("SecSubTyp", "LegSecuritySubType_t_1961613466"); // 1
    Leg_50_set.insert("LegSecuritySubType_t_1961613466");
    Leg_50.add_attribute("MMY", "1219232067"); // 1
    Leg_50_set.insert("1219232067");
    Leg_50.add_attribute("Mat", "LegMaturityDate_t_1052062759"); // 1
    Leg_50_set.insert("LegMaturityDate_t_1052062759");
    Leg_50.add_attribute("MatTm", "1277920219"); // 1
    Leg_50_set.insert("1277920219");
    Leg_50.add_attribute("CpnPmt", "LegCouponPaymentDate_t_548429410"); // 1
    Leg_50_set.insert("LegCouponPaymentDate_t_548429410");
    Leg_50.add_attribute("Issued", "LegIssueDate_t_1299459439"); // 1
    Leg_50_set.insert("LegIssueDate_t_1299459439");
    Leg_50.add_attribute("RepoCollSecTyp", "134955910"); // 1
    Leg_50_set.insert("134955910");
    Leg_50.add_attribute("RepoTrm", "1921620502"); // 1
    Leg_50_set.insert("1921620502");
    Leg_50.add_attribute("RepoRt", "6919957.020000"); // 1
    Leg_50_set.insert("6919957.020000");
    Leg_50.add_attribute("Fctr", "4034034.070000"); // 1
    Leg_50_set.insert("4034034.070000");
    Leg_50.add_attribute("CrdRtg", "LegCreditRating_t_459586130"); // 1
    Leg_50_set.insert("LegCreditRating_t_459586130");
    Leg_50.add_attribute("Rgstry", "LegInstrRegistry_t_444209437"); // 1
    Leg_50_set.insert("LegInstrRegistry_t_444209437");
    Leg_50.add_attribute("Ctry", "1112236881"); // 1
    Leg_50_set.insert("1112236881");
    Leg_50.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_568426271"); // 1
    Leg_50_set.insert("LegStateOrProvinceOfIssue_t_568426271");
    Leg_50.add_attribute("Lcl", "LegLocaleOfIssue_t_1019358657"); // 1
    Leg_50_set.insert("LegLocaleOfIssue_t_1019358657");
    Leg_50.add_attribute("Redeem", "LegRedemptionDate_t_1397955564"); // 1
    Leg_50_set.insert("LegRedemptionDate_t_1397955564");
    Leg_50.add_attribute("Strk", "5508068.280000"); // 1
    Leg_50_set.insert("5508068.280000");
    Leg_50.add_attribute("StrkCcy", "CHF"); // 1
    Leg_50_set.insert("CHF");
    Leg_50.add_attribute("OptA", "390851578"); // 1
    Leg_50_set.insert("390851578");
    Leg_50.add_attribute("Cmult", "15301945.100000"); // 1
    Leg_50_set.insert("15301945.100000");
    Leg_50.add_attribute("MultTyp", "0"); // 1
    Leg_50_set.insert("0");
    Leg_50.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_50_set.insert("0");
    Leg_50.add_attribute("UOM", "Alw"); // 1
    Leg_50_set.insert("Alw");
    Leg_50.add_attribute("UOMQty", "11898401.340000"); // 1
    Leg_50_set.insert("11898401.340000");
    Leg_50.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_50_set.insert("oz_tr");
    Leg_50.add_attribute("PxUOMQty", "3392125.770000"); // 1
    Leg_50_set.insert("3392125.770000");
    Leg_50.add_attribute("TmUnit", "S"); // 1
    Leg_50_set.insert("S");
    Leg_50.add_attribute("ExerStyle", "0"); // 1
    Leg_50_set.insert("0");
    Leg_50.add_attribute("CpnRt", "15186361.530000"); // 1
    Leg_50_set.insert("15186361.530000");
    Leg_50.add_attribute("Exch", "LegSecurityExchange_t_1097198880"); // 1
    Leg_50_set.insert("LegSecurityExchange_t_1097198880");
    Leg_50.add_attribute("Issr", "LegIssuer_t_403451066"); // 1
    Leg_50_set.insert("LegIssuer_t_403451066");
    Leg_50.add_attribute("EncLegIssrLen", "590384572"); // 1
    Leg_50_set.insert("590384572");
    Leg_50.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1777991"); // 1
    Leg_50_set.insert("EncodedLegIssuer_t_1777991");
    Leg_50.add_attribute("Desc", "LegSecurityDesc_t_1681371286"); // 1
    Leg_50_set.insert("LegSecurityDesc_t_1681371286");
    Leg_50.add_attribute("EncLegSecDescLen", "1138813982"); // 1
    Leg_50_set.insert("1138813982");
    Leg_50.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1301237431"); // 1
    Leg_50_set.insert("EncodedLegSecurityDesc_t_1301237431");
    Leg_50.add_attribute("RatioQty", "18163271.960000"); // 1
    Leg_50_set.insert("18163271.960000");
    Leg_50.add_attribute("Side", "5"); // 1
    Leg_50_set.insert("5");
    Leg_50.add_attribute("Ccy", "EUR"); // 1
    Leg_50_set.insert("EUR");
    Leg_50.add_attribute("Pool", "LegPool_t_1372536966"); // 1
    Leg_50_set.insert("LegPool_t_1372536966");
    Leg_50.add_attribute("Dated", "LegDatedDate_t_289958922"); // 1
    Leg_50_set.insert("LegDatedDate_t_289958922");
    Leg_50.add_attribute("CSetMo", "1184483837"); // 1
    Leg_50_set.insert("1184483837");
    Leg_50.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1940963238"); // 1
    Leg_50_set.insert("LegInterestAccrualDate_t_1940963238");
    Leg_50.add_attribute("PutCall", "1309317579"); // 1
    Leg_50_set.insert("1309317579");
    Leg_50.add_attribute("LegOptionRatio", "4349557.530000"); // 1
    Leg_50_set.insert("4349557.530000");
    Leg_50.add_attribute("Px", "3442864.180000"); // 1
    Leg_50_set.insert("3442864.180000");
    all_values.push_back(Leg_50_set);
    all_compo_names.insert("Leg_50_set");

    {
      xml_element LegAID_50{"LegAID"};
      multiset<string> LegAID_50_set;
      LegAID_50.add_attribute("SecAltID", "LegSecurityAltID_t_1507697158"); // 2
      LegAID_50_set.insert("LegSecurityAltID_t_1507697158");
      LegAID_50.add_attribute("SecAltIDSrc", "5"); // 2
      LegAID_50_set.insert("5");
      all_values.push_back(LegAID_50_set);
      all_compo_names.insert("LegAID_50_set");

      Leg_50.add_element(LegAID_50);
    }
    elt.add_element(Leg_50);
  } // end Leg
  { // Leg
    xml_element Leg_51{"Leg"};
    multiset<string> Leg_51_set;
    Leg_51.add_attribute("Sym", "LegSymbol_t_735137996"); // 1
    Leg_51_set.insert("LegSymbol_t_735137996");
    Leg_51.add_attribute("Sfx", "WI"); // 1
    Leg_51_set.insert("WI");
    Leg_51.add_attribute("ID", "LegSecurityID_t_453413233"); // 1
    Leg_51_set.insert("LegSecurityID_t_453413233");
    Leg_51.add_attribute("Src", "E"); // 1
    Leg_51_set.insert("E");
    Leg_51.add_attribute("Prod", "5"); // 1
    Leg_51_set.insert("5");
    Leg_51.add_attribute("CFI", "LegCFICode_t_1643253367"); // 1
    Leg_51_set.insert("LegCFICode_t_1643253367");
    Leg_51.add_attribute("SecTyp", "PEF"); // 1
    Leg_51_set.insert("PEF");
    Leg_51.add_attribute("SecSubTyp", "LegSecuritySubType_t_1471300699"); // 1
    Leg_51_set.insert("LegSecuritySubType_t_1471300699");
    Leg_51.add_attribute("MMY", "1525369256"); // 1
    Leg_51_set.insert("1525369256");
    Leg_51.add_attribute("Mat", "LegMaturityDate_t_1521435513"); // 1
    Leg_51_set.insert("LegMaturityDate_t_1521435513");
    Leg_51.add_attribute("MatTm", "842453204"); // 1
    Leg_51_set.insert("842453204");
    Leg_51.add_attribute("CpnPmt", "LegCouponPaymentDate_t_475084489"); // 1
    Leg_51_set.insert("LegCouponPaymentDate_t_475084489");
    Leg_51.add_attribute("Issued", "LegIssueDate_t_1924886579"); // 1
    Leg_51_set.insert("LegIssueDate_t_1924886579");
    Leg_51.add_attribute("RepoCollSecTyp", "1432837776"); // 1
    Leg_51_set.insert("1432837776");
    Leg_51.add_attribute("RepoTrm", "476862480"); // 1
    Leg_51_set.insert("476862480");
    Leg_51.add_attribute("RepoRt", "14587742.170000"); // 1
    Leg_51_set.insert("14587742.170000");
    Leg_51.add_attribute("Fctr", "4241681.100000"); // 1
    Leg_51_set.insert("4241681.100000");
    Leg_51.add_attribute("CrdRtg", "LegCreditRating_t_1778099911"); // 1
    Leg_51_set.insert("LegCreditRating_t_1778099911");
    Leg_51.add_attribute("Rgstry", "LegInstrRegistry_t_1127617765"); // 1
    Leg_51_set.insert("LegInstrRegistry_t_1127617765");
    Leg_51.add_attribute("Ctry", "1337118946"); // 1
    Leg_51_set.insert("1337118946");
    Leg_51.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1623849396"); // 1
    Leg_51_set.insert("LegStateOrProvinceOfIssue_t_1623849396");
    Leg_51.add_attribute("Lcl", "LegLocaleOfIssue_t_1199864721"); // 1
    Leg_51_set.insert("LegLocaleOfIssue_t_1199864721");
    Leg_51.add_attribute("Redeem", "LegRedemptionDate_t_562172265"); // 1
    Leg_51_set.insert("LegRedemptionDate_t_562172265");
    Leg_51.add_attribute("Strk", "19138083.190000"); // 1
    Leg_51_set.insert("19138083.190000");
    Leg_51.add_attribute("StrkCcy", "EUR"); // 1
    Leg_51_set.insert("EUR");
    Leg_51.add_attribute("OptA", "1075642250"); // 1
    Leg_51_set.insert("1075642250");
    Leg_51.add_attribute("Cmult", "6718206.630000"); // 1
    Leg_51_set.insert("6718206.630000");
    Leg_51.add_attribute("MultTyp", "2"); // 1
    Leg_51_set.insert("2");
    Leg_51.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_51_set.insert("1");
    Leg_51.add_attribute("UOM", "Alw"); // 1
    Leg_51_set.insert("Alw");
    Leg_51.add_attribute("UOMQty", "14350762.690000"); // 1
    Leg_51_set.insert("14350762.690000");
    Leg_51.add_attribute("PxUOM", "Alw"); // 1
    Leg_51_set.insert("Alw");
    Leg_51.add_attribute("PxUOMQty", "8962121.610000"); // 1
    Leg_51_set.insert("8962121.610000");
    Leg_51.add_attribute("TmUnit", "Min"); // 1
    Leg_51_set.insert("Min");
    Leg_51.add_attribute("ExerStyle", "2"); // 1
    Leg_51_set.insert("2");
    Leg_51.add_attribute("CpnRt", "3919818.800000"); // 1
    Leg_51_set.insert("3919818.800000");
    Leg_51.add_attribute("Exch", "LegSecurityExchange_t_2105244378"); // 1
    Leg_51_set.insert("LegSecurityExchange_t_2105244378");
    Leg_51.add_attribute("Issr", "LegIssuer_t_1782168954"); // 1
    Leg_51_set.insert("LegIssuer_t_1782168954");
    Leg_51.add_attribute("EncLegIssrLen", "1917351137"); // 1
    Leg_51_set.insert("1917351137");
    Leg_51.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1479196243"); // 1
    Leg_51_set.insert("EncodedLegIssuer_t_1479196243");
    Leg_51.add_attribute("Desc", "LegSecurityDesc_t_477138510"); // 1
    Leg_51_set.insert("LegSecurityDesc_t_477138510");
    Leg_51.add_attribute("EncLegSecDescLen", "244951978"); // 1
    Leg_51_set.insert("244951978");
    Leg_51.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1256599174"); // 1
    Leg_51_set.insert("EncodedLegSecurityDesc_t_1256599174");
    Leg_51.add_attribute("RatioQty", "19099762.860000"); // 1
    Leg_51_set.insert("19099762.860000");
    Leg_51.add_attribute("Side", "B"); // 1
    Leg_51_set.insert("B");
    Leg_51.add_attribute("Ccy", "JPY"); // 1
    Leg_51_set.insert("JPY");
    Leg_51.add_attribute("Pool", "LegPool_t_352430722"); // 1
    Leg_51_set.insert("LegPool_t_352430722");
    Leg_51.add_attribute("Dated", "LegDatedDate_t_1695507509"); // 1
    Leg_51_set.insert("LegDatedDate_t_1695507509");
    Leg_51.add_attribute("CSetMo", "1523779695"); // 1
    Leg_51_set.insert("1523779695");
    Leg_51.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1976280118"); // 1
    Leg_51_set.insert("LegInterestAccrualDate_t_1976280118");
    Leg_51.add_attribute("PutCall", "747888582"); // 1
    Leg_51_set.insert("747888582");
    Leg_51.add_attribute("LegOptionRatio", "20859519.600000"); // 1
    Leg_51_set.insert("20859519.600000");
    Leg_51.add_attribute("Px", "17426047.890000"); // 1
    Leg_51_set.insert("17426047.890000");
    all_values.push_back(Leg_51_set);
    all_compo_names.insert("Leg_51_set");

    {
      xml_element LegAID_51{"LegAID"};
      multiset<string> LegAID_51_set;
      LegAID_51.add_attribute("SecAltID", "LegSecurityAltID_t_984753492"); // 2
      LegAID_51_set.insert("LegSecurityAltID_t_984753492");
      LegAID_51.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_51_set.insert("C");
      all_values.push_back(LegAID_51_set);
      all_compo_names.insert("LegAID_51_set");

      Leg_51.add_element(LegAID_51);
    }
    elt.add_element(Leg_51);
  } // end Leg
  { // DsplyInstr
    xml_element DsplyInstr_3{"DsplyInstr"};
    multiset<string> DsplyInstr_3_set;
    DsplyInstr_3.add_attribute("DisplayQty", "6707633.920000"); // 1
    DsplyInstr_3_set.insert("6707633.920000");
    DsplyInstr_3.add_attribute("SecDspQty", "16565741.550000"); // 1
    DsplyInstr_3_set.insert("16565741.550000");
    DsplyInstr_3.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_3_set.insert("1");
    DsplyInstr_3.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_3_set.insert("2");
    DsplyInstr_3.add_attribute("DsplLwQty", "20993730.830000"); // 1
    DsplyInstr_3_set.insert("20993730.830000");
    DsplyInstr_3.add_attribute("DisplayHighQty", "2816510.610000"); // 1
    DsplyInstr_3_set.insert("2816510.610000");
    DsplyInstr_3.add_attribute("DspMinIncr", "2853992.870000"); // 1
    DsplyInstr_3_set.insert("2853992.870000");
    DsplyInstr_3.add_attribute("RfrshQty", "8481015.960000"); // 1
    DsplyInstr_3_set.insert("8481015.960000");
    all_values.push_back(DsplyInstr_3_set);
    all_compo_names.insert("DsplyInstr_3_set");

    elt.add_element(DsplyInstr_3);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_5{"TrdSes"};
    multiset<string> TrdSes_5_set;
    TrdSes_5.add_attribute("SesID", "5"); // 1
    TrdSes_5_set.insert("5");
    TrdSes_5.add_attribute("SesSub", "3"); // 1
    TrdSes_5_set.insert("3");
    all_values.push_back(TrdSes_5_set);
    all_compo_names.insert("TrdSes_5_set");

    elt.add_element(TrdSes_5);
  } // end TrdSes
  { // Stip
    xml_element Stip_79{"Stip"};
    multiset<string> Stip_79_set;
    Stip_79.add_attribute("Typ", "STRUCT"); // 1
    Stip_79_set.insert("STRUCT");
    Stip_79.add_attribute("Val", "StipulationValue_t_1009950965"); // 1
    Stip_79_set.insert("StipulationValue_t_1009950965");
    all_values.push_back(Stip_79_set);
    all_compo_names.insert("Stip_79_set");

    elt.add_element(Stip_79);
  } // end Stip
  { // Stip
    xml_element Stip_80{"Stip"};
    multiset<string> Stip_80_set;
    Stip_80.add_attribute("Typ", "LOT"); // 1
    Stip_80_set.insert("LOT");
    Stip_80.add_attribute("Val", "StipulationValue_t_708091359"); // 1
    Stip_80_set.insert("StipulationValue_t_708091359");
    all_values.push_back(Stip_80_set);
    all_compo_names.insert("Stip_80_set");

    elt.add_element(Stip_80);
  } // end Stip
  { // TrgrInstr
    xml_element TrgrInstr_3{"TrgrInstr"};
    multiset<string> TrgrInstr_3_set;
    TrgrInstr_3.add_attribute("TrgrTyp", "4"); // 1
    TrgrInstr_3_set.insert("4");
    TrgrInstr_3.add_attribute("TrgrActn", "3"); // 1
    TrgrInstr_3_set.insert("3");
    TrgrInstr_3.add_attribute("TrgrPx", "4705839.980000"); // 1
    TrgrInstr_3_set.insert("4705839.980000");
    TrgrInstr_3.add_attribute("TrgrSym", "TriggerSymbol_t_1976717402"); // 1
    TrgrInstr_3_set.insert("TriggerSymbol_t_1976717402");
    TrgrInstr_3.add_attribute("TrgrSecID", "TriggerSecurityID_t_421259770"); // 1
    TrgrInstr_3_set.insert("TriggerSecurityID_t_421259770");
    TrgrInstr_3.add_attribute("TrgrSecIDSrc", "5"); // 1
    TrgrInstr_3_set.insert("5");
    TrgrInstr_3.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_181664476"); // 1
    TrgrInstr_3_set.insert("TriggerSecurityDesc_t_181664476");
    TrgrInstr_3.add_attribute("TrgrPxTyp", "4"); // 1
    TrgrInstr_3_set.insert("4");
    TrgrInstr_3.add_attribute("TrgrPxTypScp", "1"); // 1
    TrgrInstr_3_set.insert("1");
    TrgrInstr_3.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_3_set.insert("U");
    TrgrInstr_3.add_attribute("TrgrNewPx", "7171722.140000"); // 1
    TrgrInstr_3_set.insert("7171722.140000");
    TrgrInstr_3.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_3_set.insert("2");
    TrgrInstr_3.add_attribute("TrgrNewQty", "17530657.360000"); // 1
    TrgrInstr_3_set.insert("17530657.360000");
    TrgrInstr_3.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1701925706"); // 1
    TrgrInstr_3_set.insert("TriggerTradingSessionID_t_1701925706");
    TrgrInstr_3.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_266129272"); // 1
    TrgrInstr_3_set.insert("TriggerTradingSessionSubID_t_266129272");
    all_values.push_back(TrgrInstr_3_set);
    all_compo_names.insert("TrgrInstr_3_set");

    elt.add_element(TrgrInstr_3);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_15{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_15_set;
    SprdBnchmkCurve_15.add_attribute("Spread", "2763454.800000"); // 1
    SprdBnchmkCurve_15_set.insert("2763454.800000");
    SprdBnchmkCurve_15.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_15_set.insert("GBP");
    SprdBnchmkCurve_15.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_15_set.insert("SONIA");
    SprdBnchmkCurve_15.add_attribute("Point", "BenchmarkCurvePoint_t_1162905649"); // 1
    SprdBnchmkCurve_15_set.insert("BenchmarkCurvePoint_t_1162905649");
    SprdBnchmkCurve_15.add_attribute("Px", "15418387.740000"); // 1
    SprdBnchmkCurve_15_set.insert("15418387.740000");
    SprdBnchmkCurve_15.add_attribute("PxTyp", "7"); // 1
    SprdBnchmkCurve_15_set.insert("7");
    SprdBnchmkCurve_15.add_attribute("SecID", "BenchmarkSecurityID_t_2011007245"); // 1
    SprdBnchmkCurve_15_set.insert("BenchmarkSecurityID_t_2011007245");
    SprdBnchmkCurve_15.add_attribute("SecIDSrc", "D"); // 1
    SprdBnchmkCurve_15_set.insert("D");
    all_values.push_back(SprdBnchmkCurve_15_set);
    all_compo_names.insert("SprdBnchmkCurve_15_set");

    elt.add_element(SprdBnchmkCurve_15);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_10{"Yield"};
    multiset<string> Yield_10_set;
    Yield_10.add_attribute("Typ", "VALUE1_32"); // 1
    Yield_10_set.insert("VALUE1_32");
    Yield_10.add_attribute("Yld", "11036070.730000"); // 1
    Yield_10_set.insert("11036070.730000");
    Yield_10.add_attribute("CalcDt", "YieldCalcDate_t_114194557"); // 1
    Yield_10_set.insert("YieldCalcDate_t_114194557");
    Yield_10.add_attribute("RedDt", "YieldRedemptionDate_t_348100663"); // 1
    Yield_10_set.insert("YieldRedemptionDate_t_348100663");
    Yield_10.add_attribute("RedPx", "21135580.390000"); // 1
    Yield_10_set.insert("21135580.390000");
    Yield_10.add_attribute("RedPxTyp", "3"); // 1
    Yield_10_set.insert("3");
    all_values.push_back(Yield_10_set);
    all_compo_names.insert("Yield_10_set");

    elt.add_element(Yield_10);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_3{"PegInstr"};
    multiset<string> PegInstr_3_set;
    PegInstr_3.add_attribute("OfstVal", "10561920.230000"); // 1
    PegInstr_3_set.insert("10561920.230000");
    PegInstr_3.add_attribute("PegPxTyp", "8"); // 1
    PegInstr_3_set.insert("8");
    PegInstr_3.add_attribute("MoveTyp", "0"); // 1
    PegInstr_3_set.insert("0");
    PegInstr_3.add_attribute("OfstTyp", "1"); // 1
    PegInstr_3_set.insert("1");
    PegInstr_3.add_attribute("LmtTyp", "2"); // 1
    PegInstr_3_set.insert("2");
    PegInstr_3.add_attribute("RndDir", "1"); // 1
    PegInstr_3_set.insert("1");
    PegInstr_3.add_attribute("Scope", "4"); // 1
    PegInstr_3_set.insert("4");
    PegInstr_3.add_attribute("PegSecurityIDSource", "J"); // 1
    PegInstr_3_set.insert("J");
    PegInstr_3.add_attribute("PegSecID", "PegSecurityID_t_1102362484"); // 1
    PegInstr_3_set.insert("PegSecurityID_t_1102362484");
    PegInstr_3.add_attribute("PgSymbl", "PegSymbol_t_70077913"); // 1
    PegInstr_3_set.insert("PegSymbol_t_70077913");
    PegInstr_3.add_attribute("PegSecDesc", "PegSecurityDesc_t_1242336511"); // 1
    PegInstr_3_set.insert("PegSecurityDesc_t_1242336511");
    all_values.push_back(PegInstr_3_set);
    all_compo_names.insert("PegInstr_3_set");

    elt.add_element(PegInstr_3);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_3{"DiscInstr"};
    multiset<string> DiscInstr_3_set;
    DiscInstr_3.add_attribute("DsctnInst", "2"); // 1
    DiscInstr_3_set.insert("2");
    DiscInstr_3.add_attribute("OfstValu", "420870.180000"); // 1
    DiscInstr_3_set.insert("420870.180000");
    DiscInstr_3.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_3_set.insert("1");
    DiscInstr_3.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_3_set.insert("0");
    DiscInstr_3.add_attribute("LimitTyp", "2"); // 1
    DiscInstr_3_set.insert("2");
    DiscInstr_3.add_attribute("RndDir", "2"); // 1
    DiscInstr_3_set.insert("2");
    DiscInstr_3.add_attribute("Scope", "3"); // 1
    DiscInstr_3_set.insert("3");
    all_values.push_back(DiscInstr_3_set);
    all_compo_names.insert("DiscInstr_3_set");

    elt.add_element(DiscInstr_3);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_5{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_5_set;
    StrtPrmGrp_5.add_attribute("StrtPrmNme", "StrategyParameterName_t_359745064"); // 1
    StrtPrmGrp_5_set.insert("StrategyParameterName_t_359745064");
    StrtPrmGrp_5.add_attribute("StrtPrmTyp", "5"); // 1
    StrtPrmGrp_5_set.insert("5");
    StrtPrmGrp_5.add_attribute("StrtPrmVal", "StrategyParameterValue_t_962759129"); // 1
    StrtPrmGrp_5_set.insert("StrategyParameterValue_t_962759129");
    all_values.push_back(StrtPrmGrp_5_set);
    all_compo_names.insert("StrtPrmGrp_5_set");

    elt.add_element(StrtPrmGrp_5);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_6{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_6_set;
    StrtPrmGrp_6.add_attribute("StrtPrmNme", "StrategyParameterName_t_2028108984"); // 1
    StrtPrmGrp_6_set.insert("StrategyParameterName_t_2028108984");
    StrtPrmGrp_6.add_attribute("StrtPrmTyp", "9"); // 1
    StrtPrmGrp_6_set.insert("9");
    StrtPrmGrp_6.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1811895430"); // 1
    StrtPrmGrp_6_set.insert("StrategyParameterValue_t_1811895430");
    all_values.push_back(StrtPrmGrp_6_set);
    all_compo_names.insert("StrtPrmGrp_6_set");

    elt.add_element(StrtPrmGrp_6);
  } // end StrtPrmGrp
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
