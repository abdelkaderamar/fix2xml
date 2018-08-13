#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/CrossOrderCancelReplaceRequest.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( CrossOrderCancelReplaceRequest_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CrssOrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1996519108"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("OrderID_t_1996519108");
  elt.add_attribute("ID", "CrossID_t_1094264864"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("CrossID_t_1094264864");
  elt.add_attribute("OrigID", "OrigCrossID_t_945796003"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("OrigCrossID_t_945796003");
  elt.add_attribute("HstCxID", "HostCrossID_t_1106500573"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("HostCrossID_t_1106500573");
  elt.add_attribute("Typ", "4"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("4");
  elt.add_attribute("Priorty", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("SettlTyp", "7"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("7");
  elt.add_attribute("SettlDt", "SettlDate_t_1540948796"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("SettlDate_t_1540948796");
  elt.add_attribute("HandlInst", "3"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "f"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("f");
  elt.add_attribute("MinQty", "11754727.050000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("11754727.050000");
  elt.add_attribute("MtchInc", "4693204.440000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("4693204.440000");
  elt.add_attribute("MxPxLvls", "694128949"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("694128949");
  elt.add_attribute("MaxFloor", "11338221.100000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("11338221.100000");
  elt.add_attribute("ExDest", "ExDestination_t_480509054"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExDestination_t_480509054");
  elt.add_attribute("ExDestIDSrc", "D"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("D");
  elt.add_attribute("ProcCode", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("PrevClsPx", "3366525.030000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3366525.030000");
  elt.add_attribute("LocReqd", "Y"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_1845213125"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TransactTime_t_1845213125");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1031585951"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TransBkdTime_t_1031585951");
  elt.add_attribute("OrdTyp", "J"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("J");
  elt.add_attribute("PxTyp", "19"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("19");
  elt.add_attribute("Px", "5750666.650000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("5750666.650000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("StopPx", "11281024.240000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("11281024.240000");
  elt.add_attribute("Ccy", "EUR"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("EUR");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1607255271"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ComplianceID_t_1607255271");
  elt.add_attribute("IOIID", "IOIID_t_1594268375"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("IOIID_t_1594268375");
  elt.add_attribute("QID", "QuoteID_t_795552953"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("QuoteID_t_795552953");
  elt.add_attribute("TmInForce", "1"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_541049592"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("EffectiveTime_t_541049592");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1741348956"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExpireDate_t_1741348956");
  elt.add_attribute("ExpireTm", "ExpireTime_t_415307656"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExpireTime_t_415307656");
  elt.add_attribute("GTBkngInst", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("MaxShow", "17278459.780000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("17278459.780000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1794920600"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TargetStrategyParameters_t_1794920600");
  elt.add_attribute("ParticipationRt", "13508331.730000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("13508331.730000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "3"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("RegistID", "RegistID_t_1820153617"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("RegistID_t_1820153617");
  elt.add_attribute("Designation", "Designation_t_1657523900"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Designation_t_1657523900");
  all_values.push_back(CrossOrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelReplaceRequest_message_t");

  { // Hdr
    xml_element Hdr_24{"Hdr"};
    multiset<string> Hdr_24_set;
    Hdr_24.add_attribute("SeqNum", "1956731767"); // 1
    Hdr_24_set.insert("1956731767");
    Hdr_24.add_attribute("SID", "SenderCompID_t_153179023"); // 1
    Hdr_24_set.insert("SenderCompID_t_153179023");
    Hdr_24.add_attribute("TID", "TargetCompID_t_1371760794"); // 1
    Hdr_24_set.insert("TargetCompID_t_1371760794");
    Hdr_24.add_attribute("OBID", "OnBehalfOfCompID_t_1481568379"); // 1
    Hdr_24_set.insert("OnBehalfOfCompID_t_1481568379");
    Hdr_24.add_attribute("D2ID", "DeliverToCompID_t_489831527"); // 1
    Hdr_24_set.insert("DeliverToCompID_t_489831527");
    Hdr_24.add_attribute("SSub", "SenderSubID_t_737492492"); // 1
    Hdr_24_set.insert("SenderSubID_t_737492492");
    Hdr_24.add_attribute("SLoc", "SenderLocationID_t_1179297856"); // 1
    Hdr_24_set.insert("SenderLocationID_t_1179297856");
    Hdr_24.add_attribute("TSub", "TargetSubID_t_1521417478"); // 1
    Hdr_24_set.insert("TargetSubID_t_1521417478");
    Hdr_24.add_attribute("TLoc", "TargetLocationID_t_1952127398"); // 1
    Hdr_24_set.insert("TargetLocationID_t_1952127398");
    Hdr_24.add_attribute("OBSub", "OnBehalfOfSubID_t_690685172"); // 1
    Hdr_24_set.insert("OnBehalfOfSubID_t_690685172");
    Hdr_24.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2096484143"); // 1
    Hdr_24_set.insert("OnBehalfOfLocationID_t_2096484143");
    Hdr_24.add_attribute("D2Sub", "DeliverToSubID_t_71233848"); // 1
    Hdr_24_set.insert("DeliverToSubID_t_71233848");
    Hdr_24.add_attribute("D2Loc", "DeliverToLocationID_t_1818787596"); // 1
    Hdr_24_set.insert("DeliverToLocationID_t_1818787596");
    Hdr_24.add_attribute("PosDup", "Y"); // 1
    Hdr_24_set.insert("Y");
    Hdr_24.add_attribute("PosRsnd", "N"); // 1
    Hdr_24_set.insert("N");
    Hdr_24.add_attribute("Snt", "SendingTime_t_1278559219"); // 1
    Hdr_24_set.insert("SendingTime_t_1278559219");
    Hdr_24.add_attribute("OrigSnt", "OrigSendingTime_t_2089701236"); // 1
    Hdr_24_set.insert("OrigSendingTime_t_2089701236");
    Hdr_24.add_attribute("MsgEncd", "MessageEncoding_t_1733611315"); // 1
    Hdr_24_set.insert("MessageEncoding_t_1733611315");
    all_values.push_back(Hdr_24_set);
    all_compo_names.insert("Hdr_24_set");

    {
      xml_element Hop_24{"Hop"};
      multiset<string> Hop_24_set;
      Hop_24.add_attribute("ID", "HopCompID_t_587366302"); // 2
      Hop_24_set.insert("HopCompID_t_587366302");
      Hop_24.add_attribute("Ref", "483267180"); // 2
      Hop_24_set.insert("483267180");
      Hop_24.add_attribute("Snt", "HopSendingTime_t_1327476624"); // 2
      Hop_24_set.insert("HopSendingTime_t_1327476624");
      all_values.push_back(Hop_24_set);
      all_compo_names.insert("Hop_24_set");

      Hdr_24.add_element(Hop_24);
    }
    elt.add_element(Hdr_24);
  } // end Hdr
  { // Pty
    xml_element Pty_116{"Pty"};
    multiset<string> Pty_116_set;
    Pty_116.add_attribute("ID", "RootPartyID_t_737238984"); // 1
    Pty_116_set.insert("RootPartyID_t_737238984");
    Pty_116.add_attribute("Src", "9"); // 1
    Pty_116_set.insert("9");
    Pty_116.add_attribute("R", "68"); // 1
    Pty_116_set.insert("68");
    all_values.push_back(Pty_116_set);
    all_compo_names.insert("Pty_116_set");

    {
      xml_element Sub_116{"Sub"};
      multiset<string> Sub_116_set;
      Sub_116.add_attribute("ID", "RootPartySubID_t_384675936"); // 2
      Sub_116_set.insert("RootPartySubID_t_384675936");
      Sub_116.add_attribute("Typ", "29"); // 2
      Sub_116_set.insert("29");
      all_values.push_back(Sub_116_set);
      all_compo_names.insert("Sub_116_set");

      Pty_116.add_element(Sub_116);
    }
    elt.add_element(Pty_116);
  } // end Pty
  { // Pty
    xml_element Pty_117{"Pty"};
    multiset<string> Pty_117_set;
    Pty_117.add_attribute("ID", "RootPartyID_t_127094165"); // 1
    Pty_117_set.insert("RootPartyID_t_127094165");
    Pty_117.add_attribute("Src", "A"); // 1
    Pty_117_set.insert("A");
    Pty_117.add_attribute("R", "70"); // 1
    Pty_117_set.insert("70");
    all_values.push_back(Pty_117_set);
    all_compo_names.insert("Pty_117_set");

    {
      xml_element Sub_117{"Sub"};
      multiset<string> Sub_117_set;
      Sub_117.add_attribute("ID", "RootPartySubID_t_1784618066"); // 2
      Sub_117_set.insert("RootPartySubID_t_1784618066");
      Sub_117.add_attribute("Typ", "27"); // 2
      Sub_117_set.insert("27");
      all_values.push_back(Sub_117_set);
      all_compo_names.insert("Sub_117_set");

      Pty_117.add_element(Sub_117);
    }
    elt.add_element(Pty_117);
  } // end Pty
  { // Pty
    xml_element Pty_118{"Pty"};
    multiset<string> Pty_118_set;
    Pty_118.add_attribute("ID", "RootPartyID_t_2084521120"); // 1
    Pty_118_set.insert("RootPartyID_t_2084521120");
    Pty_118.add_attribute("Src", "1"); // 1
    Pty_118_set.insert("1");
    Pty_118.add_attribute("R", "46"); // 1
    Pty_118_set.insert("46");
    all_values.push_back(Pty_118_set);
    all_compo_names.insert("Pty_118_set");

    {
      xml_element Sub_118{"Sub"};
      multiset<string> Sub_118_set;
      Sub_118.add_attribute("ID", "RootPartySubID_t_426868999"); // 2
      Sub_118_set.insert("RootPartySubID_t_426868999");
      Sub_118.add_attribute("Typ", "25"); // 2
      Sub_118_set.insert("25");
      all_values.push_back(Sub_118_set);
      all_compo_names.insert("Sub_118_set");

      Pty_118.add_element(Sub_118);
    }
    elt.add_element(Pty_118);
  } // end Pty
  { // SideCrossMod
    xml_element SideCrossMod_0{"SideCrossMod"};
    multiset<string> SideCrossMod_0_set;
    SideCrossMod_0.add_attribute("Side", "E"); // 1
    SideCrossMod_0_set.insert("E");
    SideCrossMod_0.add_attribute("OrigClOrdID", "OrigClOrdID_t_1551031455"); // 1
    SideCrossMod_0_set.insert("OrigClOrdID_t_1551031455");
    SideCrossMod_0.add_attribute("ClOrdID", "ClOrdID_t_73417824"); // 1
    SideCrossMod_0_set.insert("ClOrdID_t_73417824");
    SideCrossMod_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1897286972"); // 1
    SideCrossMod_0_set.insert("SecondaryClOrdID_t_1897286972");
    SideCrossMod_0.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1622265303"); // 1
    SideCrossMod_0_set.insert("ClOrdLinkID_t_1622265303");
    SideCrossMod_0.add_attribute("OrignDt", "TradeOriginationDate_t_1892205420"); // 1
    SideCrossMod_0_set.insert("TradeOriginationDate_t_1892205420");
    SideCrossMod_0.add_attribute("TrdDt", "TradeDate_t_245236185"); // 1
    SideCrossMod_0_set.insert("TradeDate_t_245236185");
    SideCrossMod_0.add_attribute("Acct", "Account_t_412840017"); // 1
    SideCrossMod_0_set.insert("Account_t_412840017");
    SideCrossMod_0.add_attribute("AcctIDSrc", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("AcctTyp", "4"); // 1
    SideCrossMod_0_set.insert("4");
    SideCrossMod_0.add_attribute("DayBkngInst", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_0_set.insert("0");
    SideCrossMod_0.add_attribute("AllocID", "AllocID_t_1326444309"); // 1
    SideCrossMod_0_set.insert("AllocID_t_1326444309");
    SideCrossMod_0.add_attribute("QtyTyp", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("Cpcty", "R"); // 1
    SideCrossMod_0_set.insert("R");
    SideCrossMod_0.add_attribute("Rstctions", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_0_set.insert("false");
    SideCrossMod_0.add_attribute("CustCpcty", "3"); // 1
    SideCrossMod_0_set.insert("3");
    SideCrossMod_0.add_attribute("ForexReq", "N"); // 1
    SideCrossMod_0_set.insert("N");
    SideCrossMod_0.add_attribute("SettlCcy", "CAN"); // 1
    SideCrossMod_0_set.insert("CAN");
    SideCrossMod_0.add_attribute("BkngTyp", "0"); // 1
    SideCrossMod_0_set.insert("0");
    SideCrossMod_0.add_attribute("Txt", "Text_t_1541249050"); // 1
    SideCrossMod_0_set.insert("Text_t_1541249050");
    SideCrossMod_0.add_attribute("EncTxtLen", "1869571531"); // 1
    SideCrossMod_0_set.insert("1869571531");
    SideCrossMod_0.add_attribute("EncTxt", "EncodedText_t_2066367662"); // 1
    SideCrossMod_0_set.insert("EncodedText_t_2066367662");
    SideCrossMod_0.add_attribute("PosEfct", "R"); // 1
    SideCrossMod_0_set.insert("R");
    SideCrossMod_0.add_attribute("Covered", "0"); // 1
    SideCrossMod_0_set.insert("0");
    SideCrossMod_0.add_attribute("CshMgn", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("ClrFeeInd", "4"); // 1
    SideCrossMod_0_set.insert("4");
    SideCrossMod_0.add_attribute("SolFlag", "N"); // 1
    SideCrossMod_0_set.insert("N");
    SideCrossMod_0.add_attribute("SideComplianceID", "SideComplianceID_t_146555842"); // 1
    SideCrossMod_0_set.insert("SideComplianceID_t_146555842");
    SideCrossMod_0.add_attribute("SideTmFrc", "SideTimeInForce_t_1552596126"); // 1
    SideCrossMod_0_set.insert("SideTimeInForce_t_1552596126");
    all_values.push_back(SideCrossMod_0_set);
    all_compo_names.insert("SideCrossMod_0_set");

    {
      xml_element Pty_119{"Pty"};
      multiset<string> Pty_119_set;
      Pty_119.add_attribute("ID", "PartyID_t_1676640450"); // 2
      Pty_119_set.insert("PartyID_t_1676640450");
      Pty_119.add_attribute("Src", "1"); // 2
      Pty_119_set.insert("1");
      Pty_119.add_attribute("R", "76"); // 2
      Pty_119_set.insert("76");
      all_values.push_back(Pty_119_set);
      all_compo_names.insert("Pty_119_set");

      {
        xml_element Sub_119{"Sub"};
        multiset<string> Sub_119_set;
        Sub_119.add_attribute("ID", "PartySubID_t_1421362223"); // 3
        Sub_119_set.insert("PartySubID_t_1421362223");
        Sub_119.add_attribute("Typ", "16"); // 3
        Sub_119_set.insert("16");
        all_values.push_back(Sub_119_set);
        all_compo_names.insert("Sub_119_set");

        Pty_119.add_element(Sub_119);
      }
      SideCrossMod_0.add_element(Pty_119);
    }
    {
      xml_element PreAll_0{"PreAll"};
      multiset<string> PreAll_0_set;
      PreAll_0.add_attribute("Acct", "AllocAccount_t_1440217799"); // 2
      PreAll_0_set.insert("AllocAccount_t_1440217799");
      PreAll_0.add_attribute("ActIDSrc", "4"); // 2
      PreAll_0_set.insert("4");
      PreAll_0.add_attribute("AllocSettlCcy", "GBP"); // 2
      PreAll_0_set.insert("GBP");
      PreAll_0.add_attribute("IndAllocID", "IndividualAllocID_t_1907806861"); // 2
      PreAll_0_set.insert("IndividualAllocID_t_1907806861");
      PreAll_0.add_attribute("Qty", "9997700.790000"); // 2
      PreAll_0_set.insert("9997700.790000");
      all_values.push_back(PreAll_0_set);
      all_compo_names.insert("PreAll_0_set");

      {
        xml_element Pty_120{"Pty"};
        multiset<string> Pty_120_set;
        Pty_120.add_attribute("ID", "NestedPartyID_t_618146145"); // 3
        Pty_120_set.insert("NestedPartyID_t_618146145");
        Pty_120.add_attribute("Src", "H"); // 3
        Pty_120_set.insert("H");
        Pty_120.add_attribute("R", "14"); // 3
        Pty_120_set.insert("14");
        all_values.push_back(Pty_120_set);
        all_compo_names.insert("Pty_120_set");

        {
          xml_element Sub_120{"Sub"};
          multiset<string> Sub_120_set;
          Sub_120.add_attribute("ID", "NestedPartySubID_t_704945760"); // 4
          Sub_120_set.insert("NestedPartySubID_t_704945760");
          Sub_120.add_attribute("Typ", "15"); // 4
          Sub_120_set.insert("15");
          all_values.push_back(Sub_120_set);
          all_compo_names.insert("Sub_120_set");

          Pty_120.add_element(Sub_120);
        }
        PreAll_0.add_element(Pty_120);
      }
      SideCrossMod_0.add_element(PreAll_0);
    }
    {
      xml_element OrdQty_0{"OrdQty"};
      multiset<string> OrdQty_0_set;
      OrdQty_0.add_attribute("Qty", "20528822.430000"); // 2
      OrdQty_0_set.insert("20528822.430000");
      OrdQty_0.add_attribute("Cash", "9029338.540000"); // 2
      OrdQty_0_set.insert("9029338.540000");
      OrdQty_0.add_attribute("Pct", "17598122.700000"); // 2
      OrdQty_0_set.insert("17598122.700000");
      OrdQty_0.add_attribute("RndDir", "0"); // 2
      OrdQty_0_set.insert("0");
      OrdQty_0.add_attribute("RndMod", "8847803.970000"); // 2
      OrdQty_0_set.insert("8847803.970000");
      all_values.push_back(OrdQty_0_set);
      all_compo_names.insert("OrdQty_0_set");

      SideCrossMod_0.add_element(OrdQty_0);
    }
    {
      xml_element Comm_12{"Comm"};
      multiset<string> Comm_12_set;
      Comm_12.add_attribute("Comm", "Commission_t_1153577672"); // 2
      Comm_12_set.insert("Commission_t_1153577672");
      Comm_12.add_attribute("CommTyp", "6"); // 2
      Comm_12_set.insert("6");
      Comm_12.add_attribute("Ccy", "CAN"); // 2
      Comm_12_set.insert("CAN");
      Comm_12.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_12_set.insert("Y");
      all_values.push_back(Comm_12_set);
      all_compo_names.insert("Comm_12_set");

      SideCrossMod_0.add_element(Comm_12);
    }
    elt.add_element(SideCrossMod_0);
  } // end SideCrossMod
  { // Instrmt
    xml_element Instrmt_14{"Instrmt"};
    multiset<string> Instrmt_14_set;
    Instrmt_14.add_attribute("Sym", "Symbol_t_1149417425"); // 1
    Instrmt_14_set.insert("Symbol_t_1149417425");
    Instrmt_14.add_attribute("Sfx", "WI"); // 1
    Instrmt_14_set.insert("WI");
    Instrmt_14.add_attribute("ID", "SecurityID_t_8969602"); // 1
    Instrmt_14_set.insert("SecurityID_t_8969602");
    Instrmt_14.add_attribute("Src", "I"); // 1
    Instrmt_14_set.insert("I");
    Instrmt_14.add_attribute("Prod", "12"); // 1
    Instrmt_14_set.insert("12");
    Instrmt_14.add_attribute("ProdCmplx", "ProductComplex_t_1685610052"); // 1
    Instrmt_14_set.insert("ProductComplex_t_1685610052");
    Instrmt_14.add_attribute("SecGrp", "SecurityGroup_t_1192332434"); // 1
    Instrmt_14_set.insert("SecurityGroup_t_1192332434");
    Instrmt_14.add_attribute("CFI", "CFICode_t_1990293219"); // 1
    Instrmt_14_set.insert("CFICode_t_1990293219");
    Instrmt_14.add_attribute("SecTyp", "SPCLA"); // 1
    Instrmt_14_set.insert("SPCLA");
    Instrmt_14.add_attribute("SubTyp", "SecuritySubType_t_1333927785"); // 1
    Instrmt_14_set.insert("SecuritySubType_t_1333927785");
    Instrmt_14.add_attribute("MMY", "1283027371"); // 1
    Instrmt_14_set.insert("1283027371");
    Instrmt_14.add_attribute("MatDt", "MaturityDate_t_1256648194"); // 1
    Instrmt_14_set.insert("MaturityDate_t_1256648194");
    Instrmt_14.add_attribute("MatTm", "1662976910"); // 1
    Instrmt_14_set.insert("1662976910");
    Instrmt_14.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_574729207"); // 1
    Instrmt_14_set.insert("SettleOnOpenFlag_t_574729207");
    Instrmt_14.add_attribute("AsgnMeth", "1016971408"); // 1
    Instrmt_14_set.insert("1016971408");
    Instrmt_14.add_attribute("Status", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("CpnPmt", "CouponPaymentDate_t_1192875353"); // 1
    Instrmt_14_set.insert("CouponPaymentDate_t_1192875353");
    Instrmt_14.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_14_set.insert("MM");
    Instrmt_14.add_attribute("Snrty", "SB"); // 1
    Instrmt_14_set.insert("SB");
    Instrmt_14.add_attribute("NotlPctOut", "18978211.130000"); // 1
    Instrmt_14_set.insert("18978211.130000");
    Instrmt_14.add_attribute("OrigNotlPctOut", "10988298.640000"); // 1
    Instrmt_14_set.insert("10988298.640000");
    Instrmt_14.add_attribute("AttchPnt", "6809083.050000"); // 1
    Instrmt_14_set.insert("6809083.050000");
    Instrmt_14.add_attribute("DetchPnt", "6532713.200000"); // 1
    Instrmt_14_set.insert("6532713.200000");
    Instrmt_14.add_attribute("Issued", "IssueDate_t_711158486"); // 1
    Instrmt_14_set.insert("IssueDate_t_711158486");
    Instrmt_14.add_attribute("RepoCollSecTyp", "1439044719"); // 1
    Instrmt_14_set.insert("1439044719");
    Instrmt_14.add_attribute("RepoTrm", "1538051717"); // 1
    Instrmt_14_set.insert("1538051717");
    Instrmt_14.add_attribute("RepoRt", "18647361.580000"); // 1
    Instrmt_14_set.insert("18647361.580000");
    Instrmt_14.add_attribute("Fctr", "19192690.160000"); // 1
    Instrmt_14_set.insert("19192690.160000");
    Instrmt_14.add_attribute("CrdRtg", "CreditRating_t_194232480"); // 1
    Instrmt_14_set.insert("CreditRating_t_194232480");
    Instrmt_14.add_attribute("Rgstry", "InstrRegistry_t_1273490798"); // 1
    Instrmt_14_set.insert("InstrRegistry_t_1273490798");
    Instrmt_14.add_attribute("IssuCtry", "325015992"); // 1
    Instrmt_14_set.insert("325015992");
    Instrmt_14.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1343649905"); // 1
    Instrmt_14_set.insert("StateOrProvinceOfIssue_t_1343649905");
    Instrmt_14.add_attribute("Lcl", "LocaleOfIssue_t_683810109"); // 1
    Instrmt_14_set.insert("LocaleOfIssue_t_683810109");
    Instrmt_14.add_attribute("Redeem", "RedemptionDate_t_333985594"); // 1
    Instrmt_14_set.insert("RedemptionDate_t_333985594");
    Instrmt_14.add_attribute("StrkPx", "4921395.250000"); // 1
    Instrmt_14_set.insert("4921395.250000");
    Instrmt_14.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_14_set.insert("GBP");
    Instrmt_14.add_attribute("StrkMult", "16844719.590000"); // 1
    Instrmt_14_set.insert("16844719.590000");
    Instrmt_14.add_attribute("StrkValu", "14895351.180000"); // 1
    Instrmt_14_set.insert("14895351.180000");
    Instrmt_14.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_14_set.insert("3");
    Instrmt_14.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("StrkPxBndryPrcsn", "6250788.410000"); // 1
    Instrmt_14_set.insert("6250788.410000");
    Instrmt_14.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_14_set.insert("1");
    Instrmt_14.add_attribute("OptAt", "386409359"); // 1
    Instrmt_14_set.insert("386409359");
    Instrmt_14.add_attribute("Mult", "11998080.480000"); // 1
    Instrmt_14_set.insert("11998080.480000");
    Instrmt_14.add_attribute("MultTyp", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("MinPxIncr", "2451997.530000"); // 1
    Instrmt_14_set.insert("2451997.530000");
    Instrmt_14.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_53385159"); // 1
    Instrmt_14_set.insert("MinPriceIncrementAmount_t_53385159");
    Instrmt_14.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_14_set.insert("oz_tr");
    Instrmt_14.add_attribute("UOMQty", "21430208.670000"); // 1
    Instrmt_14_set.insert("21430208.670000");
    Instrmt_14.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_14_set.insert("Bu");
    Instrmt_14.add_attribute("PxUOMQty", "2106070.680000"); // 1
    Instrmt_14_set.insert("2106070.680000");
    Instrmt_14.add_attribute("SettlMeth", "P"); // 1
    Instrmt_14_set.insert("P");
    Instrmt_14.add_attribute("ExerStyle", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("OptPayAmt", "OptPayoutAmount_t_39376608"); // 1
    Instrmt_14_set.insert("OptPayoutAmount_t_39376608");
    Instrmt_14.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_14_set.insert("PCTPAR");
    Instrmt_14.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_14_set.insert("FUT");
    Instrmt_14.add_attribute("ListMeth", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("CapPx", "7066331.690000"); // 1
    Instrmt_14_set.insert("7066331.690000");
    Instrmt_14.add_attribute("FlrPx", "17464531.480000"); // 1
    Instrmt_14_set.insert("17464531.480000");
    Instrmt_14.add_attribute("PutCall", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("FlexInd", "true"); // 1
    Instrmt_14_set.insert("true");
    Instrmt_14.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_14_set.insert("true");
    Instrmt_14.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_14_set.insert("Yr");
    Instrmt_14.add_attribute("CpnRt", "8896851.770000"); // 1
    Instrmt_14_set.insert("8896851.770000");
    Instrmt_14.add_attribute("Exch", "SecurityExchange_t_1952550741"); // 1
    Instrmt_14_set.insert("SecurityExchange_t_1952550741");
    Instrmt_14.add_attribute("PosLmt", "1606386830"); // 1
    Instrmt_14_set.insert("1606386830");
    Instrmt_14.add_attribute("NTPosLmt", "231736647"); // 1
    Instrmt_14_set.insert("231736647");
    Instrmt_14.add_attribute("Issr", "Issuer_t_636667719"); // 1
    Instrmt_14_set.insert("Issuer_t_636667719");
    Instrmt_14.add_attribute("EncIssrLen", "329819278"); // 1
    Instrmt_14_set.insert("329819278");
    Instrmt_14.add_attribute("EncIssr", "EncodedIssuer_t_856815488"); // 1
    Instrmt_14_set.insert("EncodedIssuer_t_856815488");
    Instrmt_14.add_attribute("Desc", "SecurityDesc_t_577432891"); // 1
    Instrmt_14_set.insert("SecurityDesc_t_577432891");
    Instrmt_14.add_attribute("EncSecDescLen", "716228637"); // 1
    Instrmt_14_set.insert("716228637");
    Instrmt_14.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2056623536"); // 1
    Instrmt_14_set.insert("EncodedSecurityDesc_t_2056623536");
    Instrmt_14.add_attribute("Pool", "Pool_t_1535169472"); // 1
    Instrmt_14_set.insert("Pool_t_1535169472");
    Instrmt_14.add_attribute("CSetMo", "1617901338"); // 1
    Instrmt_14_set.insert("1617901338");
    Instrmt_14.add_attribute("CPPgm", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("CPRegT", "CPRegType_t_1588554631"); // 1
    Instrmt_14_set.insert("CPRegType_t_1588554631");
    Instrmt_14.add_attribute("Dated", "DatedDate_t_1147600101"); // 1
    Instrmt_14_set.insert("DatedDate_t_1147600101");
    Instrmt_14.add_attribute("IntAcrl", "InterestAccrualDate_t_149876861"); // 1
    Instrmt_14_set.insert("InterestAccrualDate_t_149876861");
    all_values.push_back(Instrmt_14_set);
    all_compo_names.insert("Instrmt_14_set");

    {
      xml_element AID_14{"AID"};
      multiset<string> AID_14_set;
      AID_14.add_attribute("AltID", "SecurityAltID_t_593286006"); // 2
      AID_14_set.insert("SecurityAltID_t_593286006");
      AID_14.add_attribute("AltIDSrc", "C"); // 2
      AID_14_set.insert("C");
      all_values.push_back(AID_14_set);
      all_compo_names.insert("AID_14_set");

      Instrmt_14.add_element(AID_14);
    }
    {
      xml_element SecXML_14{"SecXML"};
      multiset<string> SecXML_14_set;
      SecXML_14.add_attribute("Schema", "SecurityXMLSchema_t_798685400"); // 2
      SecXML_14_set.insert("SecurityXMLSchema_t_798685400");
      all_values.push_back(SecXML_14_set);
      all_compo_names.insert("SecXML_14_set");

      Instrmt_14.add_element(SecXML_14);
    }
    {
      xml_element Evnt_14{"Evnt"};
      multiset<string> Evnt_14_set;
      Evnt_14.add_attribute("EventTyp", "7"); // 2
      Evnt_14_set.insert("7");
      Evnt_14.add_attribute("Dt", "EventDate_t_860375309"); // 2
      Evnt_14_set.insert("EventDate_t_860375309");
      Evnt_14.add_attribute("Tm", "EventTime_t_838062008"); // 2
      Evnt_14_set.insert("EventTime_t_838062008");
      Evnt_14.add_attribute("Px", "18898018.860000"); // 2
      Evnt_14_set.insert("18898018.860000");
      Evnt_14.add_attribute("Txt", "EventText_t_134328818"); // 2
      Evnt_14_set.insert("EventText_t_134328818");
      all_values.push_back(Evnt_14_set);
      all_compo_names.insert("Evnt_14_set");

      Instrmt_14.add_element(Evnt_14);
    }
    {
      xml_element Pty_121{"Pty"};
      multiset<string> Pty_121_set;
      Pty_121.add_attribute("ID", "InstrumentPartyID_t_1071671096"); // 2
      Pty_121_set.insert("InstrumentPartyID_t_1071671096");
      Pty_121.add_attribute("Src", "H"); // 2
      Pty_121_set.insert("H");
      Pty_121.add_attribute("R", "45"); // 2
      Pty_121_set.insert("45");
      all_values.push_back(Pty_121_set);
      all_compo_names.insert("Pty_121_set");

      {
        xml_element Sub_121{"Sub"};
        multiset<string> Sub_121_set;
        Sub_121.add_attribute("ID", "InstrumentPartySubID_t_501446442"); // 3
        Sub_121_set.insert("InstrumentPartySubID_t_501446442");
        Sub_121.add_attribute("Typ", "31"); // 3
        Sub_121_set.insert("31");
        all_values.push_back(Sub_121_set);
        all_compo_names.insert("Sub_121_set");

        Pty_121.add_element(Sub_121);
      }
      Instrmt_14.add_element(Pty_121);
    }
    {
      xml_element CmplxEvnt_14{"CmplxEvnt"};
      multiset<string> CmplxEvnt_14_set;
      CmplxEvnt_14.add_attribute("Typ", "2"); // 2
      CmplxEvnt_14_set.insert("2");
      CmplxEvnt_14.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_423361313"); // 2
      CmplxEvnt_14_set.insert("ComplexOptPayoutAmount_t_423361313");
      CmplxEvnt_14.add_attribute("Px", "5815962.150000"); // 2
      CmplxEvnt_14_set.insert("5815962.150000");
      CmplxEvnt_14.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_14_set.insert("5");
      CmplxEvnt_14.add_attribute("PxBndryPrcsn", "20297481.430000"); // 2
      CmplxEvnt_14_set.insert("20297481.430000");
      CmplxEvnt_14.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_14_set.insert("1");
      CmplxEvnt_14.add_attribute("Cond", "2"); // 2
      CmplxEvnt_14_set.insert("2");
      all_values.push_back(CmplxEvnt_14_set);
      all_compo_names.insert("CmplxEvnt_14_set");

      {
        xml_element EvntDts_14{"EvntDts"};
        multiset<string> EvntDts_14_set;
        EvntDts_14.add_attribute("StartDt", "ComplexEventStartDate_t_212083774"); // 3
        EvntDts_14_set.insert("ComplexEventStartDate_t_212083774");
        EvntDts_14.add_attribute("EndDt", "ComplexEventEndDate_t_1670148350"); // 3
        EvntDts_14_set.insert("ComplexEventEndDate_t_1670148350");
        all_values.push_back(EvntDts_14_set);
        all_compo_names.insert("EvntDts_14_set");

        {
          xml_element EvntTms_14{"EvntTms"};
          multiset<string> EvntTms_14_set;
          EvntTms_14.add_attribute("StartTm", "685421116"); // 4
          EvntTms_14_set.insert("685421116");
          EvntTms_14.add_attribute("EndTm", "928312411"); // 4
          EvntTms_14_set.insert("928312411");
          all_values.push_back(EvntTms_14_set);
          all_compo_names.insert("EvntTms_14_set");

          EvntDts_14.add_element(EvntTms_14);
        }
        CmplxEvnt_14.add_element(EvntDts_14);
      }
      Instrmt_14.add_element(CmplxEvnt_14);
    }
    elt.add_element(Instrmt_14);
  } // end Instrmt
  { // Undly
    xml_element Undly_26{"Undly"};
    multiset<string> Undly_26_set;
    Undly_26.add_attribute("Sym", "UnderlyingSymbol_t_73106940"); // 1
    Undly_26_set.insert("UnderlyingSymbol_t_73106940");
    Undly_26.add_attribute("Sfx", "WI"); // 1
    Undly_26_set.insert("WI");
    Undly_26.add_attribute("ID", "UnderlyingSecurityID_t_1733627881"); // 1
    Undly_26_set.insert("UnderlyingSecurityID_t_1733627881");
    Undly_26.add_attribute("Src", "A"); // 1
    Undly_26_set.insert("A");
    Undly_26.add_attribute("Prod", "10"); // 1
    Undly_26_set.insert("10");
    Undly_26.add_attribute("CFI", "UnderlyingCFICode_t_1883504742"); // 1
    Undly_26_set.insert("UnderlyingCFICode_t_1883504742");
    Undly_26.add_attribute("SecTyp", "FOR"); // 1
    Undly_26_set.insert("FOR");
    Undly_26.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_757053724"); // 1
    Undly_26_set.insert("UnderlyingSecuritySubType_t_757053724");
    Undly_26.add_attribute("MMY", "534706494"); // 1
    Undly_26_set.insert("534706494");
    Undly_26.add_attribute("Mat", "UnderlyingMaturityDate_t_416639796"); // 1
    Undly_26_set.insert("UnderlyingMaturityDate_t_416639796");
    Undly_26.add_attribute("MatTm", "1617429033"); // 1
    Undly_26_set.insert("1617429033");
    Undly_26.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1372768502"); // 1
    Undly_26_set.insert("UnderlyingCouponPaymentDate_t_1372768502");
    Undly_26.add_attribute("RestrctTyp", "XR"); // 1
    Undly_26_set.insert("XR");
    Undly_26.add_attribute("Snrty", "SB"); // 1
    Undly_26_set.insert("SB");
    Undly_26.add_attribute("NotlPctOut", "2969559.500000"); // 1
    Undly_26_set.insert("2969559.500000");
    Undly_26.add_attribute("OrigNotlPctOut", "6079094.430000"); // 1
    Undly_26_set.insert("6079094.430000");
    Undly_26.add_attribute("AttchPnt", "14850561.700000"); // 1
    Undly_26_set.insert("14850561.700000");
    Undly_26.add_attribute("DetchPnt", "7984023.930000"); // 1
    Undly_26_set.insert("7984023.930000");
    Undly_26.add_attribute("Issued", "UnderlyingIssueDate_t_299820481"); // 1
    Undly_26_set.insert("UnderlyingIssueDate_t_299820481");
    Undly_26.add_attribute("RepoCollSecTyp", "1151309583"); // 1
    Undly_26_set.insert("1151309583");
    Undly_26.add_attribute("RepoTrm", "1221763706"); // 1
    Undly_26_set.insert("1221763706");
    Undly_26.add_attribute("RepoRt", "8814166.970000"); // 1
    Undly_26_set.insert("8814166.970000");
    Undly_26.add_attribute("Fctr", "6226300.890000"); // 1
    Undly_26_set.insert("6226300.890000");
    Undly_26.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1104028202"); // 1
    Undly_26_set.insert("UnderlyingCreditRating_t_1104028202");
    Undly_26.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1694749559"); // 1
    Undly_26_set.insert("UnderlyingInstrRegistry_t_1694749559");
    Undly_26.add_attribute("Ctry", "730618314"); // 1
    Undly_26_set.insert("730618314");
    Undly_26.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1316111976"); // 1
    Undly_26_set.insert("UnderlyingStateOrProvinceOfIssue_t_1316111976");
    Undly_26.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1217414262"); // 1
    Undly_26_set.insert("UnderlyingLocaleOfIssue_t_1217414262");
    Undly_26.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1416039430"); // 1
    Undly_26_set.insert("UnderlyingRedemptionDate_t_1416039430");
    Undly_26.add_attribute("StrkPx", "969407.390000"); // 1
    Undly_26_set.insert("969407.390000");
    Undly_26.add_attribute("StrkCcy", "CAN"); // 1
    Undly_26_set.insert("CAN");
    Undly_26.add_attribute("OptA", "495670841"); // 1
    Undly_26_set.insert("495670841");
    Undly_26.add_attribute("Mult", "2353630.860000"); // 1
    Undly_26_set.insert("2353630.860000");
    Undly_26.add_attribute("MultTyp", "1"); // 1
    Undly_26_set.insert("1");
    Undly_26.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_26_set.insert("3");
    Undly_26.add_attribute("UOM", "Alw"); // 1
    Undly_26_set.insert("Alw");
    Undly_26.add_attribute("UOMQty", "11107882.240000"); // 1
    Undly_26_set.insert("11107882.240000");
    Undly_26.add_attribute("PxUOM", "t"); // 1
    Undly_26_set.insert("t");
    Undly_26.add_attribute("PxUOMQty", "5060906.740000"); // 1
    Undly_26_set.insert("5060906.740000");
    Undly_26.add_attribute("TmUnit", "Yr"); // 1
    Undly_26_set.insert("Yr");
    Undly_26.add_attribute("ExerStyle", "2"); // 1
    Undly_26_set.insert("2");
    Undly_26.add_attribute("CpnRt", "18788591.760000"); // 1
    Undly_26_set.insert("18788591.760000");
    Undly_26.add_attribute("Exch", "UnderlyingSecurityExchange_t_1686386055"); // 1
    Undly_26_set.insert("UnderlyingSecurityExchange_t_1686386055");
    Undly_26.add_attribute("Issr", "UnderlyingIssuer_t_1873274356"); // 1
    Undly_26_set.insert("UnderlyingIssuer_t_1873274356");
    Undly_26.add_attribute("EncUndIssrLen", "28331478"); // 1
    Undly_26_set.insert("28331478");
    Undly_26.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_146811850"); // 1
    Undly_26_set.insert("EncodedUnderlyingIssuer_t_146811850");
    Undly_26.add_attribute("Desc", "UnderlyingSecurityDesc_t_1210846878"); // 1
    Undly_26_set.insert("UnderlyingSecurityDesc_t_1210846878");
    Undly_26.add_attribute("EncUndSecDescLen", "826733871"); // 1
    Undly_26_set.insert("826733871");
    Undly_26.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_446632332"); // 1
    Undly_26_set.insert("EncodedUnderlyingSecurityDesc_t_446632332");
    Undly_26.add_attribute("CPPgm", "UnderlyingCPProgram_t_214672813"); // 1
    Undly_26_set.insert("UnderlyingCPProgram_t_214672813");
    Undly_26.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2048497578"); // 1
    Undly_26_set.insert("UnderlyingCPRegType_t_2048497578");
    Undly_26.add_attribute("AllocPct", "13280490.290000"); // 1
    Undly_26_set.insert("13280490.290000");
    Undly_26.add_attribute("Ccy", "USD"); // 1
    Undly_26_set.insert("USD");
    Undly_26.add_attribute("Qty", "8753149.400000"); // 1
    Undly_26_set.insert("8753149.400000");
    Undly_26.add_attribute("SettlTyp", "4"); // 1
    Undly_26_set.insert("4");
    Undly_26.add_attribute("CashAmt", "UnderlyingCashAmount_t_173670460"); // 1
    Undly_26_set.insert("UnderlyingCashAmount_t_173670460");
    Undly_26.add_attribute("CashTyp", "FIXED"); // 1
    Undly_26_set.insert("FIXED");
    Undly_26.add_attribute("Px", "8364769.990000"); // 1
    Undly_26_set.insert("8364769.990000");
    Undly_26.add_attribute("DirtPx", "2706111.990000"); // 1
    Undly_26_set.insert("2706111.990000");
    Undly_26.add_attribute("EndPx", "5944644.070000"); // 1
    Undly_26_set.insert("5944644.070000");
    Undly_26.add_attribute("StartVal", "UnderlyingStartValue_t_178139722"); // 1
    Undly_26_set.insert("UnderlyingStartValue_t_178139722");
    Undly_26.add_attribute("CurVal", "UnderlyingCurrentValue_t_766282040"); // 1
    Undly_26_set.insert("UnderlyingCurrentValue_t_766282040");
    Undly_26.add_attribute("EndVal", "UnderlyingEndValue_t_829827493"); // 1
    Undly_26_set.insert("UnderlyingEndValue_t_829827493");
    Undly_26.add_attribute("AdjQty", "11814640.160000"); // 1
    Undly_26_set.insert("11814640.160000");
    Undly_26.add_attribute("FxRate", "6607994.360000"); // 1
    Undly_26_set.insert("6607994.360000");
    Undly_26.add_attribute("FxRateCalc", "D"); // 1
    Undly_26_set.insert("D");
    Undly_26.add_attribute("CapValu", "UnderlyingCapValue_t_144768592"); // 1
    Undly_26_set.insert("UnderlyingCapValue_t_144768592");
    Undly_26.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1312370555"); // 1
    Undly_26_set.insert("UnderlyingSettlMethod_t_1312370555");
    Undly_26.add_attribute("PutCall", "1307302347"); // 1
    Undly_26_set.insert("1307302347");
    all_values.push_back(Undly_26_set);
    all_compo_names.insert("Undly_26_set");

    {
      xml_element UndAID_26{"UndAID"};
      multiset<string> UndAID_26_set;
      UndAID_26.add_attribute("AltID", "UnderlyingSecurityAltID_t_1672196613"); // 2
      UndAID_26_set.insert("UnderlyingSecurityAltID_t_1672196613");
      UndAID_26.add_attribute("AltIDSrc", "D"); // 2
      UndAID_26_set.insert("D");
      all_values.push_back(UndAID_26_set);
      all_compo_names.insert("UndAID_26_set");

      Undly_26.add_element(UndAID_26);
    }
    {
      xml_element Stip_44{"Stip"};
      multiset<string> Stip_44_set;
      Stip_44.add_attribute("Typ", "PPT"); // 2
      Stip_44_set.insert("PPT");
      Stip_44.add_attribute("Val", "UnderlyingStipValue_t_1211099020"); // 2
      Stip_44_set.insert("UnderlyingStipValue_t_1211099020");
      all_values.push_back(Stip_44_set);
      all_compo_names.insert("Stip_44_set");

      Undly_26.add_element(Stip_44);
    }
    {
      xml_element Pty_122{"Pty"};
      multiset<string> Pty_122_set;
      Pty_122.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1159677769"); // 2
      Pty_122_set.insert("UnderlyingInstrumentPartyID_t_1159677769");
      Pty_122.add_attribute("Src", "9"); // 2
      Pty_122_set.insert("9");
      Pty_122.add_attribute("R", "54"); // 2
      Pty_122_set.insert("54");
      all_values.push_back(Pty_122_set);
      all_compo_names.insert("Pty_122_set");

      {
        xml_element Sub_122{"Sub"};
        multiset<string> Sub_122_set;
        Sub_122.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_223040999"); // 3
        Sub_122_set.insert("UnderlyingInstrumentPartySubID_t_223040999");
        Sub_122.add_attribute("Typ", "2"); // 3
        Sub_122_set.insert("2");
        all_values.push_back(Sub_122_set);
        all_compo_names.insert("Sub_122_set");

        Pty_122.add_element(Sub_122);
      }
      Undly_26.add_element(Pty_122);
    }
    elt.add_element(Undly_26);
  } // end Undly
  { // Leg
    xml_element Leg_22{"Leg"};
    multiset<string> Leg_22_set;
    Leg_22.add_attribute("Sym", "LegSymbol_t_437713813"); // 1
    Leg_22_set.insert("LegSymbol_t_437713813");
    Leg_22.add_attribute("Sfx", "WI"); // 1
    Leg_22_set.insert("WI");
    Leg_22.add_attribute("ID", "LegSecurityID_t_985108584"); // 1
    Leg_22_set.insert("LegSecurityID_t_985108584");
    Leg_22.add_attribute("Src", "6"); // 1
    Leg_22_set.insert("6");
    Leg_22.add_attribute("Prod", "10"); // 1
    Leg_22_set.insert("10");
    Leg_22.add_attribute("CFI", "LegCFICode_t_1860423524"); // 1
    Leg_22_set.insert("LegCFICode_t_1860423524");
    Leg_22.add_attribute("SecTyp", "MPP"); // 1
    Leg_22_set.insert("MPP");
    Leg_22.add_attribute("SecSubTyp", "LegSecuritySubType_t_825986099"); // 1
    Leg_22_set.insert("LegSecuritySubType_t_825986099");
    Leg_22.add_attribute("MMY", "1805669079"); // 1
    Leg_22_set.insert("1805669079");
    Leg_22.add_attribute("Mat", "LegMaturityDate_t_1531931283"); // 1
    Leg_22_set.insert("LegMaturityDate_t_1531931283");
    Leg_22.add_attribute("MatTm", "1096597299"); // 1
    Leg_22_set.insert("1096597299");
    Leg_22.add_attribute("CpnPmt", "LegCouponPaymentDate_t_252649838"); // 1
    Leg_22_set.insert("LegCouponPaymentDate_t_252649838");
    Leg_22.add_attribute("Issued", "LegIssueDate_t_1710071005"); // 1
    Leg_22_set.insert("LegIssueDate_t_1710071005");
    Leg_22.add_attribute("RepoCollSecTyp", "1862879339"); // 1
    Leg_22_set.insert("1862879339");
    Leg_22.add_attribute("RepoTrm", "1082477332"); // 1
    Leg_22_set.insert("1082477332");
    Leg_22.add_attribute("RepoRt", "7440513.730000"); // 1
    Leg_22_set.insert("7440513.730000");
    Leg_22.add_attribute("Fctr", "3761951.270000"); // 1
    Leg_22_set.insert("3761951.270000");
    Leg_22.add_attribute("CrdRtg", "LegCreditRating_t_1883689005"); // 1
    Leg_22_set.insert("LegCreditRating_t_1883689005");
    Leg_22.add_attribute("Rgstry", "LegInstrRegistry_t_888819966"); // 1
    Leg_22_set.insert("LegInstrRegistry_t_888819966");
    Leg_22.add_attribute("Ctry", "1688565683"); // 1
    Leg_22_set.insert("1688565683");
    Leg_22.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1043507705"); // 1
    Leg_22_set.insert("LegStateOrProvinceOfIssue_t_1043507705");
    Leg_22.add_attribute("Lcl", "LegLocaleOfIssue_t_413532931"); // 1
    Leg_22_set.insert("LegLocaleOfIssue_t_413532931");
    Leg_22.add_attribute("Redeem", "LegRedemptionDate_t_974969095"); // 1
    Leg_22_set.insert("LegRedemptionDate_t_974969095");
    Leg_22.add_attribute("Strk", "20821855.800000"); // 1
    Leg_22_set.insert("20821855.800000");
    Leg_22.add_attribute("StrkCcy", "GBP"); // 1
    Leg_22_set.insert("GBP");
    Leg_22.add_attribute("OptA", "1001711286"); // 1
    Leg_22_set.insert("1001711286");
    Leg_22.add_attribute("Cmult", "8350591.740000"); // 1
    Leg_22_set.insert("8350591.740000");
    Leg_22.add_attribute("MultTyp", "0"); // 1
    Leg_22_set.insert("0");
    Leg_22.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_22_set.insert("4");
    Leg_22.add_attribute("UOM", "Bu"); // 1
    Leg_22_set.insert("Bu");
    Leg_22.add_attribute("UOMQty", "6479180.290000"); // 1
    Leg_22_set.insert("6479180.290000");
    Leg_22.add_attribute("PxUOM", "Bbl"); // 1
    Leg_22_set.insert("Bbl");
    Leg_22.add_attribute("PxUOMQty", "14772273.130000"); // 1
    Leg_22_set.insert("14772273.130000");
    Leg_22.add_attribute("TmUnit", "D"); // 1
    Leg_22_set.insert("D");
    Leg_22.add_attribute("ExerStyle", "1"); // 1
    Leg_22_set.insert("1");
    Leg_22.add_attribute("CpnRt", "11901671.900000"); // 1
    Leg_22_set.insert("11901671.900000");
    Leg_22.add_attribute("Exch", "LegSecurityExchange_t_470905380"); // 1
    Leg_22_set.insert("LegSecurityExchange_t_470905380");
    Leg_22.add_attribute("Issr", "LegIssuer_t_1873546110"); // 1
    Leg_22_set.insert("LegIssuer_t_1873546110");
    Leg_22.add_attribute("EncLegIssrLen", "848352621"); // 1
    Leg_22_set.insert("848352621");
    Leg_22.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2002836663"); // 1
    Leg_22_set.insert("EncodedLegIssuer_t_2002836663");
    Leg_22.add_attribute("Desc", "LegSecurityDesc_t_822659761"); // 1
    Leg_22_set.insert("LegSecurityDesc_t_822659761");
    Leg_22.add_attribute("EncLegSecDescLen", "1101002459"); // 1
    Leg_22_set.insert("1101002459");
    Leg_22.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1565424020"); // 1
    Leg_22_set.insert("EncodedLegSecurityDesc_t_1565424020");
    Leg_22.add_attribute("RatioQty", "5380554.530000"); // 1
    Leg_22_set.insert("5380554.530000");
    Leg_22.add_attribute("Side", "G"); // 1
    Leg_22_set.insert("G");
    Leg_22.add_attribute("Ccy", "JPY"); // 1
    Leg_22_set.insert("JPY");
    Leg_22.add_attribute("Pool", "LegPool_t_1919685149"); // 1
    Leg_22_set.insert("LegPool_t_1919685149");
    Leg_22.add_attribute("Dated", "LegDatedDate_t_1050811712"); // 1
    Leg_22_set.insert("LegDatedDate_t_1050811712");
    Leg_22.add_attribute("CSetMo", "455332615"); // 1
    Leg_22_set.insert("455332615");
    Leg_22.add_attribute("IntAcrl", "LegInterestAccrualDate_t_815709206"); // 1
    Leg_22_set.insert("LegInterestAccrualDate_t_815709206");
    Leg_22.add_attribute("PutCall", "1464344643"); // 1
    Leg_22_set.insert("1464344643");
    Leg_22.add_attribute("LegOptionRatio", "14303017.110000"); // 1
    Leg_22_set.insert("14303017.110000");
    Leg_22.add_attribute("Px", "7504111.380000"); // 1
    Leg_22_set.insert("7504111.380000");
    all_values.push_back(Leg_22_set);
    all_compo_names.insert("Leg_22_set");

    {
      xml_element LegAID_22{"LegAID"};
      multiset<string> LegAID_22_set;
      LegAID_22.add_attribute("SecAltID", "LegSecurityAltID_t_941492946"); // 2
      LegAID_22_set.insert("LegSecurityAltID_t_941492946");
      LegAID_22.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_22_set.insert("M");
      all_values.push_back(LegAID_22_set);
      all_compo_names.insert("LegAID_22_set");

      Leg_22.add_element(LegAID_22);
    }
    elt.add_element(Leg_22);
  } // end Leg
  { // DsplyInstr
    xml_element DsplyInstr_0{"DsplyInstr"};
    multiset<string> DsplyInstr_0_set;
    DsplyInstr_0.add_attribute("DisplayQty", "17521224.250000"); // 1
    DsplyInstr_0_set.insert("17521224.250000");
    DsplyInstr_0.add_attribute("SecDspQty", "17765521.210000"); // 1
    DsplyInstr_0_set.insert("17765521.210000");
    DsplyInstr_0.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_0_set.insert("2");
    DsplyInstr_0.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_0_set.insert("2");
    DsplyInstr_0.add_attribute("DsplLwQty", "1211872.020000"); // 1
    DsplyInstr_0_set.insert("1211872.020000");
    DsplyInstr_0.add_attribute("DisplayHighQty", "1281035.240000"); // 1
    DsplyInstr_0_set.insert("1281035.240000");
    DsplyInstr_0.add_attribute("DspMinIncr", "7478540.120000"); // 1
    DsplyInstr_0_set.insert("7478540.120000");
    DsplyInstr_0.add_attribute("RfrshQty", "15984145.160000"); // 1
    DsplyInstr_0_set.insert("15984145.160000");
    all_values.push_back(DsplyInstr_0_set);
    all_compo_names.insert("DsplyInstr_0_set");

    elt.add_element(DsplyInstr_0);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_0{"TrdSes"};
    multiset<string> TrdSes_0_set;
    TrdSes_0.add_attribute("SesID", "4"); // 1
    TrdSes_0_set.insert("4");
    TrdSes_0.add_attribute("SesSub", "7"); // 1
    TrdSes_0_set.insert("7");
    all_values.push_back(TrdSes_0_set);
    all_compo_names.insert("TrdSes_0_set");

    elt.add_element(TrdSes_0);
  } // end TrdSes
  { // Stip
    xml_element Stip_45{"Stip"};
    multiset<string> Stip_45_set;
    Stip_45.add_attribute("Typ", "CPP"); // 1
    Stip_45_set.insert("CPP");
    Stip_45.add_attribute("Val", "StipulationValue_t_1489450679"); // 1
    Stip_45_set.insert("StipulationValue_t_1489450679");
    all_values.push_back(Stip_45_set);
    all_compo_names.insert("Stip_45_set");

    elt.add_element(Stip_45);
  } // end Stip
  { // Stip
    xml_element Stip_46{"Stip"};
    multiset<string> Stip_46_set;
    Stip_46.add_attribute("Typ", "WAM"); // 1
    Stip_46_set.insert("WAM");
    Stip_46.add_attribute("Val", "StipulationValue_t_196652599"); // 1
    Stip_46_set.insert("StipulationValue_t_196652599");
    all_values.push_back(Stip_46_set);
    all_compo_names.insert("Stip_46_set");

    elt.add_element(Stip_46);
  } // end Stip
  { // TrgrInstr
    xml_element TrgrInstr_0{"TrgrInstr"};
    multiset<string> TrgrInstr_0_set;
    TrgrInstr_0.add_attribute("TrgrTyp", "3"); // 1
    TrgrInstr_0_set.insert("3");
    TrgrInstr_0.add_attribute("TrgrActn", "3"); // 1
    TrgrInstr_0_set.insert("3");
    TrgrInstr_0.add_attribute("TrgrPx", "7347080.520000"); // 1
    TrgrInstr_0_set.insert("7347080.520000");
    TrgrInstr_0.add_attribute("TrgrSym", "TriggerSymbol_t_478965634"); // 1
    TrgrInstr_0_set.insert("TriggerSymbol_t_478965634");
    TrgrInstr_0.add_attribute("TrgrSecID", "TriggerSecurityID_t_1957228783"); // 1
    TrgrInstr_0_set.insert("TriggerSecurityID_t_1957228783");
    TrgrInstr_0.add_attribute("TrgrSecIDSrc", "4"); // 1
    TrgrInstr_0_set.insert("4");
    TrgrInstr_0.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_251167135"); // 1
    TrgrInstr_0_set.insert("TriggerSecurityDesc_t_251167135");
    TrgrInstr_0.add_attribute("TrgrPxTyp", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrPxTypScp", "0"); // 1
    TrgrInstr_0_set.insert("0");
    TrgrInstr_0.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_0_set.insert("D");
    TrgrInstr_0.add_attribute("TrgrNewPx", "1774178.420000"); // 1
    TrgrInstr_0_set.insert("1774178.420000");
    TrgrInstr_0.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrNewQty", "18172874.790000"); // 1
    TrgrInstr_0_set.insert("18172874.790000");
    TrgrInstr_0.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1118910789"); // 1
    TrgrInstr_0_set.insert("TriggerTradingSessionID_t_1118910789");
    TrgrInstr_0.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_657090591"); // 1
    TrgrInstr_0_set.insert("TriggerTradingSessionSubID_t_657090591");
    all_values.push_back(TrgrInstr_0_set);
    all_compo_names.insert("TrgrInstr_0_set");

    elt.add_element(TrgrInstr_0);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_9{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_9_set;
    SprdBnchmkCurve_9.add_attribute("Spread", "14219262.560000"); // 1
    SprdBnchmkCurve_9_set.insert("14219262.560000");
    SprdBnchmkCurve_9.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_9_set.insert("JPY");
    SprdBnchmkCurve_9.add_attribute("Name", "LIBOR"); // 1
    SprdBnchmkCurve_9_set.insert("LIBOR");
    SprdBnchmkCurve_9.add_attribute("Point", "BenchmarkCurvePoint_t_869166464"); // 1
    SprdBnchmkCurve_9_set.insert("BenchmarkCurvePoint_t_869166464");
    SprdBnchmkCurve_9.add_attribute("Px", "2653796.110000"); // 1
    SprdBnchmkCurve_9_set.insert("2653796.110000");
    SprdBnchmkCurve_9.add_attribute("PxTyp", "14"); // 1
    SprdBnchmkCurve_9_set.insert("14");
    SprdBnchmkCurve_9.add_attribute("SecID", "BenchmarkSecurityID_t_320097332"); // 1
    SprdBnchmkCurve_9_set.insert("BenchmarkSecurityID_t_320097332");
    SprdBnchmkCurve_9.add_attribute("SecIDSrc", "H"); // 1
    SprdBnchmkCurve_9_set.insert("H");
    all_values.push_back(SprdBnchmkCurve_9_set);
    all_compo_names.insert("SprdBnchmkCurve_9_set");

    elt.add_element(SprdBnchmkCurve_9);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_4{"Yield"};
    multiset<string> Yield_4_set;
    Yield_4.add_attribute("Typ", "SHORTAVGLIFE"); // 1
    Yield_4_set.insert("SHORTAVGLIFE");
    Yield_4.add_attribute("Yld", "9611953.900000"); // 1
    Yield_4_set.insert("9611953.900000");
    Yield_4.add_attribute("CalcDt", "YieldCalcDate_t_543394233"); // 1
    Yield_4_set.insert("YieldCalcDate_t_543394233");
    Yield_4.add_attribute("RedDt", "YieldRedemptionDate_t_1544313123"); // 1
    Yield_4_set.insert("YieldRedemptionDate_t_1544313123");
    Yield_4.add_attribute("RedPx", "3031624.210000"); // 1
    Yield_4_set.insert("3031624.210000");
    Yield_4.add_attribute("RedPxTyp", "5"); // 1
    Yield_4_set.insert("5");
    all_values.push_back(Yield_4_set);
    all_compo_names.insert("Yield_4_set");

    elt.add_element(Yield_4);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_0{"PegInstr"};
    multiset<string> PegInstr_0_set;
    PegInstr_0.add_attribute("OfstVal", "17409657.230000"); // 1
    PegInstr_0_set.insert("17409657.230000");
    PegInstr_0.add_attribute("PegPxTyp", "1"); // 1
    PegInstr_0_set.insert("1");
    PegInstr_0.add_attribute("MoveTyp", "0"); // 1
    PegInstr_0_set.insert("0");
    PegInstr_0.add_attribute("OfstTyp", "3"); // 1
    PegInstr_0_set.insert("3");
    PegInstr_0.add_attribute("LmtTyp", "2"); // 1
    PegInstr_0_set.insert("2");
    PegInstr_0.add_attribute("RndDir", "2"); // 1
    PegInstr_0_set.insert("2");
    PegInstr_0.add_attribute("Scope", "1"); // 1
    PegInstr_0_set.insert("1");
    PegInstr_0.add_attribute("PegSecurityIDSource", "2"); // 1
    PegInstr_0_set.insert("2");
    PegInstr_0.add_attribute("PegSecID", "PegSecurityID_t_1091262623"); // 1
    PegInstr_0_set.insert("PegSecurityID_t_1091262623");
    PegInstr_0.add_attribute("PgSymbl", "PegSymbol_t_1933956361"); // 1
    PegInstr_0_set.insert("PegSymbol_t_1933956361");
    PegInstr_0.add_attribute("PegSecDesc", "PegSecurityDesc_t_395657374"); // 1
    PegInstr_0_set.insert("PegSecurityDesc_t_395657374");
    all_values.push_back(PegInstr_0_set);
    all_compo_names.insert("PegInstr_0_set");

    elt.add_element(PegInstr_0);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_0{"DiscInstr"};
    multiset<string> DiscInstr_0_set;
    DiscInstr_0.add_attribute("DsctnInst", "1"); // 1
    DiscInstr_0_set.insert("1");
    DiscInstr_0.add_attribute("OfstValu", "11735820.240000"); // 1
    DiscInstr_0_set.insert("11735820.240000");
    DiscInstr_0.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_0_set.insert("1");
    DiscInstr_0.add_attribute("OfstTyp", "2"); // 1
    DiscInstr_0_set.insert("2");
    DiscInstr_0.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_0_set.insert("0");
    DiscInstr_0.add_attribute("RndDir", "1"); // 1
    DiscInstr_0_set.insert("1");
    DiscInstr_0.add_attribute("Scope", "1"); // 1
    DiscInstr_0_set.insert("1");
    all_values.push_back(DiscInstr_0_set);
    all_compo_names.insert("DiscInstr_0_set");

    elt.add_element(DiscInstr_0);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_0{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_0_set;
    StrtPrmGrp_0.add_attribute("StrtPrmNme", "StrategyParameterName_t_1114439711"); // 1
    StrtPrmGrp_0_set.insert("StrategyParameterName_t_1114439711");
    StrtPrmGrp_0.add_attribute("StrtPrmTyp", "12"); // 1
    StrtPrmGrp_0_set.insert("12");
    StrtPrmGrp_0.add_attribute("StrtPrmVal", "StrategyParameterValue_t_85844665"); // 1
    StrtPrmGrp_0_set.insert("StrategyParameterValue_t_85844665");
    all_values.push_back(StrtPrmGrp_0_set);
    all_compo_names.insert("StrtPrmGrp_0_set");

    elt.add_element(StrtPrmGrp_0);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_1{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_1_set;
    StrtPrmGrp_1.add_attribute("StrtPrmNme", "StrategyParameterName_t_1489345973"); // 1
    StrtPrmGrp_1_set.insert("StrategyParameterName_t_1489345973");
    StrtPrmGrp_1.add_attribute("StrtPrmTyp", "5"); // 1
    StrtPrmGrp_1_set.insert("5");
    StrtPrmGrp_1.add_attribute("StrtPrmVal", "StrategyParameterValue_t_254778897"); // 1
    StrtPrmGrp_1_set.insert("StrategyParameterValue_t_254778897");
    all_values.push_back(StrtPrmGrp_1_set);
    all_compo_names.insert("StrtPrmGrp_1_set");

    elt.add_element(StrtPrmGrp_1);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_2{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_2_set;
    StrtPrmGrp_2.add_attribute("StrtPrmNme", "StrategyParameterName_t_1512182611"); // 1
    StrtPrmGrp_2_set.insert("StrategyParameterName_t_1512182611");
    StrtPrmGrp_2.add_attribute("StrtPrmTyp", "24"); // 1
    StrtPrmGrp_2_set.insert("24");
    StrtPrmGrp_2.add_attribute("StrtPrmVal", "StrategyParameterValue_t_798173130"); // 1
    StrtPrmGrp_2_set.insert("StrategyParameterValue_t_798173130");
    all_values.push_back(StrtPrmGrp_2_set);
    all_compo_names.insert("StrtPrmGrp_2_set");

    elt.add_element(StrtPrmGrp_2);
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
