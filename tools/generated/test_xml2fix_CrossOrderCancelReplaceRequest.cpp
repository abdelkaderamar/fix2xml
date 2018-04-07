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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"CrssOrdCxlRplcReq" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> CrossOrderCancelReplaceRequest_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1650318250"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("OrderID_t_1650318250");
  elt.add_attribute("ID", "CrossID_t_2042174849"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("CrossID_t_2042174849");
  elt.add_attribute("OrigID", "OrigCrossID_t_189057711"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("OrigCrossID_t_189057711");
  elt.add_attribute("HstCxID", "HostCrossID_t_209316600"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("HostCrossID_t_209316600");
  elt.add_attribute("Typ", "1"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("Priorty", "1"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("SettlTyp", "6"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_1261363169"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("SettlDate_t_1261363169");
  elt.add_attribute("HandlInst", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("ExecInst", "F"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("F");
  elt.add_attribute("MinQty", "15257318.960000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("15257318.960000");
  elt.add_attribute("MtchInc", "18722829.520000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("18722829.520000");
  elt.add_attribute("MxPxLvls", "1059546966"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1059546966");
  elt.add_attribute("MaxFloor", "3141410.700000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3141410.700000");
  elt.add_attribute("ExDest", "ExDestination_t_474958160"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExDestination_t_474958160");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("E");
  elt.add_attribute("ProcCode", "6"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("6");
  elt.add_attribute("PrevClsPx", "17455157.370000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("17455157.370000");
  elt.add_attribute("LocReqd", "N"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_2028793954"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TransactTime_t_2028793954");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_535418808"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TransBkdTime_t_535418808");
  elt.add_attribute("OrdTyp", "3"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("PxTyp", "16"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("16");
  elt.add_attribute("Px", "3098581.790000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3098581.790000");
  elt.add_attribute("PxPrtScp", "0"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("StopPx", "20369309.040000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("20369309.040000");
  elt.add_attribute("Ccy", "USD"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("USD");
  elt.add_attribute("ComplianceID", "ComplianceID_t_213676330"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ComplianceID_t_213676330");
  elt.add_attribute("IOIID", "IOIID_t_337479797"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("IOIID_t_337479797");
  elt.add_attribute("QID", "QuoteID_t_1720650557"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("QuoteID_t_1720650557");
  elt.add_attribute("TmInForce", "0"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("0");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_232170998"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("EffectiveTime_t_232170998");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1909708268"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExpireDate_t_1909708268");
  elt.add_attribute("ExpireTm", "ExpireTime_t_2073311180"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExpireTime_t_2073311180");
  elt.add_attribute("GTBkngInst", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("MaxShow", "1041257.170000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1041257.170000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_332008340"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TargetStrategyParameters_t_332008340");
  elt.add_attribute("ParticipationRt", "4055112.950000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("4055112.950000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "3"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("3");
  elt.add_attribute("RegistID", "RegistID_t_130310599"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("RegistID_t_130310599");
  elt.add_attribute("Designation", "Designation_t_1915662865"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Designation_t_1915662865");
  all_values.push_back(CrossOrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelReplaceRequest_message_t");

  { // Hdr
    xml_element Hdr_24{"Hdr"};
    multiset<string> Hdr_24_set;
    Hdr_24.add_attribute("SeqNum", "24397659"); // 1
    Hdr_24_set.insert("24397659");
    Hdr_24.add_attribute("SID", "SenderCompID_t_605268759"); // 1
    Hdr_24_set.insert("SenderCompID_t_605268759");
    Hdr_24.add_attribute("TID", "TargetCompID_t_1341496341"); // 1
    Hdr_24_set.insert("TargetCompID_t_1341496341");
    Hdr_24.add_attribute("OBID", "OnBehalfOfCompID_t_1613544245"); // 1
    Hdr_24_set.insert("OnBehalfOfCompID_t_1613544245");
    Hdr_24.add_attribute("D2ID", "DeliverToCompID_t_203300848"); // 1
    Hdr_24_set.insert("DeliverToCompID_t_203300848");
    Hdr_24.add_attribute("SSub", "SenderSubID_t_263151583"); // 1
    Hdr_24_set.insert("SenderSubID_t_263151583");
    Hdr_24.add_attribute("SLoc", "SenderLocationID_t_1494854551"); // 1
    Hdr_24_set.insert("SenderLocationID_t_1494854551");
    Hdr_24.add_attribute("TSub", "TargetSubID_t_738719656"); // 1
    Hdr_24_set.insert("TargetSubID_t_738719656");
    Hdr_24.add_attribute("TLoc", "TargetLocationID_t_227505073"); // 1
    Hdr_24_set.insert("TargetLocationID_t_227505073");
    Hdr_24.add_attribute("OBSub", "OnBehalfOfSubID_t_492824642"); // 1
    Hdr_24_set.insert("OnBehalfOfSubID_t_492824642");
    Hdr_24.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1048577836"); // 1
    Hdr_24_set.insert("OnBehalfOfLocationID_t_1048577836");
    Hdr_24.add_attribute("D2Sub", "DeliverToSubID_t_538760558"); // 1
    Hdr_24_set.insert("DeliverToSubID_t_538760558");
    Hdr_24.add_attribute("D2Loc", "DeliverToLocationID_t_382271898"); // 1
    Hdr_24_set.insert("DeliverToLocationID_t_382271898");
    Hdr_24.add_attribute("PosDup", "Y"); // 1
    Hdr_24_set.insert("Y");
    Hdr_24.add_attribute("PosRsnd", "N"); // 1
    Hdr_24_set.insert("N");
    Hdr_24.add_attribute("Snt", "SendingTime_t_595948228"); // 1
    Hdr_24_set.insert("SendingTime_t_595948228");
    Hdr_24.add_attribute("OrigSnt", "OrigSendingTime_t_405643752"); // 1
    Hdr_24_set.insert("OrigSendingTime_t_405643752");
    Hdr_24.add_attribute("MsgEncd", "MessageEncoding_t_899395385"); // 1
    Hdr_24_set.insert("MessageEncoding_t_899395385");
    all_values.push_back(Hdr_24_set);
    all_compo_names.insert("Hdr_24_set");

    {
      xml_element Hop_24{"Hop"};
      multiset<string> Hop_24_set;
      Hop_24.add_attribute("ID", "HopCompID_t_312459160"); // 2
      Hop_24_set.insert("HopCompID_t_312459160");
      Hop_24.add_attribute("Ref", "637814751"); // 2
      Hop_24_set.insert("637814751");
      Hop_24.add_attribute("Snt", "HopSendingTime_t_661620006"); // 2
      Hop_24_set.insert("HopSendingTime_t_661620006");
      all_values.push_back(Hop_24_set);
      all_compo_names.insert("Hop_24_set");

      Hdr_24.add_element(Hop_24);
    }
    elt.add_element(Hdr_24);
  } // end Hdr
  { // Pty
    xml_element Pty_119{"Pty"};
    multiset<string> Pty_119_set;
    Pty_119.add_attribute("ID", "RootPartyID_t_1855943570"); // 1
    Pty_119_set.insert("RootPartyID_t_1855943570");
    Pty_119.add_attribute("Src", "2"); // 1
    Pty_119_set.insert("2");
    Pty_119.add_attribute("R", "51"); // 1
    Pty_119_set.insert("51");
    all_values.push_back(Pty_119_set);
    all_compo_names.insert("Pty_119_set");

    {
      xml_element Sub_119{"Sub"};
      multiset<string> Sub_119_set;
      Sub_119.add_attribute("ID", "RootPartySubID_t_40468262"); // 2
      Sub_119_set.insert("RootPartySubID_t_40468262");
      Sub_119.add_attribute("Typ", "32"); // 2
      Sub_119_set.insert("32");
      all_values.push_back(Sub_119_set);
      all_compo_names.insert("Sub_119_set");

      Pty_119.add_element(Sub_119);
    }
    elt.add_element(Pty_119);
  } // end Pty
  { // Pty
    xml_element Pty_120{"Pty"};
    multiset<string> Pty_120_set;
    Pty_120.add_attribute("ID", "RootPartyID_t_835178231"); // 1
    Pty_120_set.insert("RootPartyID_t_835178231");
    Pty_120.add_attribute("Src", "E"); // 1
    Pty_120_set.insert("E");
    Pty_120.add_attribute("R", "53"); // 1
    Pty_120_set.insert("53");
    all_values.push_back(Pty_120_set);
    all_compo_names.insert("Pty_120_set");

    {
      xml_element Sub_120{"Sub"};
      multiset<string> Sub_120_set;
      Sub_120.add_attribute("ID", "RootPartySubID_t_603357448"); // 2
      Sub_120_set.insert("RootPartySubID_t_603357448");
      Sub_120.add_attribute("Typ", "7"); // 2
      Sub_120_set.insert("7");
      all_values.push_back(Sub_120_set);
      all_compo_names.insert("Sub_120_set");

      Pty_120.add_element(Sub_120);
    }
    elt.add_element(Pty_120);
  } // end Pty
  { // Pty
    xml_element Pty_121{"Pty"};
    multiset<string> Pty_121_set;
    Pty_121.add_attribute("ID", "RootPartyID_t_1906836378"); // 1
    Pty_121_set.insert("RootPartyID_t_1906836378");
    Pty_121.add_attribute("Src", "E"); // 1
    Pty_121_set.insert("E");
    Pty_121.add_attribute("R", "17"); // 1
    Pty_121_set.insert("17");
    all_values.push_back(Pty_121_set);
    all_compo_names.insert("Pty_121_set");

    {
      xml_element Sub_121{"Sub"};
      multiset<string> Sub_121_set;
      Sub_121.add_attribute("ID", "RootPartySubID_t_2110137226"); // 2
      Sub_121_set.insert("RootPartySubID_t_2110137226");
      Sub_121.add_attribute("Typ", "6"); // 2
      Sub_121_set.insert("6");
      all_values.push_back(Sub_121_set);
      all_compo_names.insert("Sub_121_set");

      Pty_121.add_element(Sub_121);
    }
    elt.add_element(Pty_121);
  } // end Pty
  { // SideCrossMod
    xml_element SideCrossMod_0{"SideCrossMod"};
    multiset<string> SideCrossMod_0_set;
    SideCrossMod_0.add_attribute("Side", "4"); // 1
    SideCrossMod_0_set.insert("4");
    SideCrossMod_0.add_attribute("OrigClOrdID", "OrigClOrdID_t_288026798"); // 1
    SideCrossMod_0_set.insert("OrigClOrdID_t_288026798");
    SideCrossMod_0.add_attribute("ClOrdID", "ClOrdID_t_1228862302"); // 1
    SideCrossMod_0_set.insert("ClOrdID_t_1228862302");
    SideCrossMod_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1749951071"); // 1
    SideCrossMod_0_set.insert("SecondaryClOrdID_t_1749951071");
    SideCrossMod_0.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_826787356"); // 1
    SideCrossMod_0_set.insert("ClOrdLinkID_t_826787356");
    SideCrossMod_0.add_attribute("OrignDt", "TradeOriginationDate_t_1611134200"); // 1
    SideCrossMod_0_set.insert("TradeOriginationDate_t_1611134200");
    SideCrossMod_0.add_attribute("TrdDt", "TradeDate_t_1818115026"); // 1
    SideCrossMod_0_set.insert("TradeDate_t_1818115026");
    SideCrossMod_0.add_attribute("Acct", "Account_t_5532185"); // 1
    SideCrossMod_0_set.insert("Account_t_5532185");
    SideCrossMod_0.add_attribute("AcctIDSrc", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("AcctTyp", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("BkngUnit", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("PreallocMeth", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("AllocID", "AllocID_t_1566547576"); // 1
    SideCrossMod_0_set.insert("AllocID_t_1566547576");
    SideCrossMod_0.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("Cpcty", "G"); // 1
    SideCrossMod_0_set.insert("G");
    SideCrossMod_0.add_attribute("Rstctions", "8"); // 1
    SideCrossMod_0_set.insert("8");
    SideCrossMod_0.add_attribute("PrTrdAnon", "true"); // 1
    SideCrossMod_0_set.insert("true");
    SideCrossMod_0.add_attribute("CustCpcty", "3"); // 1
    SideCrossMod_0_set.insert("3");
    SideCrossMod_0.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_0_set.insert("Y");
    SideCrossMod_0.add_attribute("SettlCcy", "CHF"); // 1
    SideCrossMod_0_set.insert("CHF");
    SideCrossMod_0.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("Txt", "Text_t_2027942646"); // 1
    SideCrossMod_0_set.insert("Text_t_2027942646");
    SideCrossMod_0.add_attribute("EncTxtLen", "2136349076"); // 1
    SideCrossMod_0_set.insert("2136349076");
    SideCrossMod_0.add_attribute("EncTxt", "EncodedText_t_269503371"); // 1
    SideCrossMod_0_set.insert("EncodedText_t_269503371");
    SideCrossMod_0.add_attribute("PosEfct", "D"); // 1
    SideCrossMod_0_set.insert("D");
    SideCrossMod_0.add_attribute("Covered", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("CshMgn", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("ClrFeeInd", "3"); // 1
    SideCrossMod_0_set.insert("3");
    SideCrossMod_0.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_0_set.insert("Y");
    SideCrossMod_0.add_attribute("SideComplianceID", "SideComplianceID_t_933530185"); // 1
    SideCrossMod_0_set.insert("SideComplianceID_t_933530185");
    SideCrossMod_0.add_attribute("SideTmFrc", "SideTimeInForce_t_26377663"); // 1
    SideCrossMod_0_set.insert("SideTimeInForce_t_26377663");
    all_values.push_back(SideCrossMod_0_set);
    all_compo_names.insert("SideCrossMod_0_set");

    {
      xml_element Pty_122{"Pty"};
      multiset<string> Pty_122_set;
      Pty_122.add_attribute("ID", "PartyID_t_1194948499"); // 2
      Pty_122_set.insert("PartyID_t_1194948499");
      Pty_122.add_attribute("Src", "H"); // 2
      Pty_122_set.insert("H");
      Pty_122.add_attribute("R", "8"); // 2
      Pty_122_set.insert("8");
      all_values.push_back(Pty_122_set);
      all_compo_names.insert("Pty_122_set");

      {
        xml_element Sub_122{"Sub"};
        multiset<string> Sub_122_set;
        Sub_122.add_attribute("ID", "PartySubID_t_658599051"); // 3
        Sub_122_set.insert("PartySubID_t_658599051");
        Sub_122.add_attribute("Typ", "22"); // 3
        Sub_122_set.insert("22");
        all_values.push_back(Sub_122_set);
        all_compo_names.insert("Sub_122_set");

        Pty_122.add_element(Sub_122);
      }
      SideCrossMod_0.add_element(Pty_122);
    }
    {
      xml_element PreAll_0{"PreAll"};
      multiset<string> PreAll_0_set;
      PreAll_0.add_attribute("Acct", "AllocAccount_t_858697204"); // 2
      PreAll_0_set.insert("AllocAccount_t_858697204");
      PreAll_0.add_attribute("ActIDSrc", "5"); // 2
      PreAll_0_set.insert("5");
      PreAll_0.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_0_set.insert("CHF");
      PreAll_0.add_attribute("IndAllocID", "IndividualAllocID_t_1090255774"); // 2
      PreAll_0_set.insert("IndividualAllocID_t_1090255774");
      PreAll_0.add_attribute("Qty", "9969939.980000"); // 2
      PreAll_0_set.insert("9969939.980000");
      all_values.push_back(PreAll_0_set);
      all_compo_names.insert("PreAll_0_set");

      {
        xml_element Pty_123{"Pty"};
        multiset<string> Pty_123_set;
        Pty_123.add_attribute("ID", "NestedPartyID_t_1182688703"); // 3
        Pty_123_set.insert("NestedPartyID_t_1182688703");
        Pty_123.add_attribute("Src", "9"); // 3
        Pty_123_set.insert("9");
        Pty_123.add_attribute("R", "83"); // 3
        Pty_123_set.insert("83");
        all_values.push_back(Pty_123_set);
        all_compo_names.insert("Pty_123_set");

        {
          xml_element Sub_123{"Sub"};
          multiset<string> Sub_123_set;
          Sub_123.add_attribute("ID", "NestedPartySubID_t_1367498355"); // 4
          Sub_123_set.insert("NestedPartySubID_t_1367498355");
          Sub_123.add_attribute("Typ", "28"); // 4
          Sub_123_set.insert("28");
          all_values.push_back(Sub_123_set);
          all_compo_names.insert("Sub_123_set");

          Pty_123.add_element(Sub_123);
        }
        PreAll_0.add_element(Pty_123);
      }
      SideCrossMod_0.add_element(PreAll_0);
    }
    {
      xml_element OrdQty_0{"OrdQty"};
      multiset<string> OrdQty_0_set;
      OrdQty_0.add_attribute("Qty", "18825618.670000"); // 2
      OrdQty_0_set.insert("18825618.670000");
      OrdQty_0.add_attribute("Cash", "5760813.780000"); // 2
      OrdQty_0_set.insert("5760813.780000");
      OrdQty_0.add_attribute("Pct", "15671089.240000"); // 2
      OrdQty_0_set.insert("15671089.240000");
      OrdQty_0.add_attribute("RndDir", "2"); // 2
      OrdQty_0_set.insert("2");
      OrdQty_0.add_attribute("RndMod", "10862320.200000"); // 2
      OrdQty_0_set.insert("10862320.200000");
      all_values.push_back(OrdQty_0_set);
      all_compo_names.insert("OrdQty_0_set");

      SideCrossMod_0.add_element(OrdQty_0);
    }
    {
      xml_element Comm_13{"Comm"};
      multiset<string> Comm_13_set;
      Comm_13.add_attribute("Comm", "Commission_t_1447567922"); // 2
      Comm_13_set.insert("Commission_t_1447567922");
      Comm_13.add_attribute("CommTyp", "6"); // 2
      Comm_13_set.insert("6");
      Comm_13.add_attribute("Ccy", "USD"); // 2
      Comm_13_set.insert("USD");
      Comm_13.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_13_set.insert("N");
      all_values.push_back(Comm_13_set);
      all_compo_names.insert("Comm_13_set");

      SideCrossMod_0.add_element(Comm_13);
    }
    elt.add_element(SideCrossMod_0);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_1{"SideCrossMod"};
    multiset<string> SideCrossMod_1_set;
    SideCrossMod_1.add_attribute("Side", "6"); // 1
    SideCrossMod_1_set.insert("6");
    SideCrossMod_1.add_attribute("OrigClOrdID", "OrigClOrdID_t_863747926"); // 1
    SideCrossMod_1_set.insert("OrigClOrdID_t_863747926");
    SideCrossMod_1.add_attribute("ClOrdID", "ClOrdID_t_1281304947"); // 1
    SideCrossMod_1_set.insert("ClOrdID_t_1281304947");
    SideCrossMod_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_373938878"); // 1
    SideCrossMod_1_set.insert("SecondaryClOrdID_t_373938878");
    SideCrossMod_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_890125589"); // 1
    SideCrossMod_1_set.insert("ClOrdLinkID_t_890125589");
    SideCrossMod_1.add_attribute("OrignDt", "TradeOriginationDate_t_328769798"); // 1
    SideCrossMod_1_set.insert("TradeOriginationDate_t_328769798");
    SideCrossMod_1.add_attribute("TrdDt", "TradeDate_t_909936486"); // 1
    SideCrossMod_1_set.insert("TradeDate_t_909936486");
    SideCrossMod_1.add_attribute("Acct", "Account_t_1743290609"); // 1
    SideCrossMod_1_set.insert("Account_t_1743290609");
    SideCrossMod_1.add_attribute("AcctIDSrc", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("AcctTyp", "2"); // 1
    SideCrossMod_1_set.insert("2");
    SideCrossMod_1.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("PreallocMeth", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("AllocID", "AllocID_t_70645292"); // 1
    SideCrossMod_1_set.insert("AllocID_t_70645292");
    SideCrossMod_1.add_attribute("QtyTyp", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("Cpcty", "P"); // 1
    SideCrossMod_1_set.insert("P");
    SideCrossMod_1.add_attribute("Rstctions", "C"); // 1
    SideCrossMod_1_set.insert("C");
    SideCrossMod_1.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_1_set.insert("false");
    SideCrossMod_1.add_attribute("CustCpcty", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_1_set.insert("Y");
    SideCrossMod_1.add_attribute("SettlCcy", "USD"); // 1
    SideCrossMod_1_set.insert("USD");
    SideCrossMod_1.add_attribute("BkngTyp", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("Txt", "Text_t_1911088220"); // 1
    SideCrossMod_1_set.insert("Text_t_1911088220");
    SideCrossMod_1.add_attribute("EncTxtLen", "1352423097"); // 1
    SideCrossMod_1_set.insert("1352423097");
    SideCrossMod_1.add_attribute("EncTxt", "EncodedText_t_2135662102"); // 1
    SideCrossMod_1_set.insert("EncodedText_t_2135662102");
    SideCrossMod_1.add_attribute("PosEfct", "R"); // 1
    SideCrossMod_1_set.insert("R");
    SideCrossMod_1.add_attribute("Covered", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_1_set.insert("3");
    SideCrossMod_1.add_attribute("ClrFeeInd", "9"); // 1
    SideCrossMod_1_set.insert("9");
    SideCrossMod_1.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_1_set.insert("Y");
    SideCrossMod_1.add_attribute("SideComplianceID", "SideComplianceID_t_784322539"); // 1
    SideCrossMod_1_set.insert("SideComplianceID_t_784322539");
    SideCrossMod_1.add_attribute("SideTmFrc", "SideTimeInForce_t_1052833835"); // 1
    SideCrossMod_1_set.insert("SideTimeInForce_t_1052833835");
    all_values.push_back(SideCrossMod_1_set);
    all_compo_names.insert("SideCrossMod_1_set");

    {
      xml_element Pty_124{"Pty"};
      multiset<string> Pty_124_set;
      Pty_124.add_attribute("ID", "PartyID_t_1739149712"); // 2
      Pty_124_set.insert("PartyID_t_1739149712");
      Pty_124.add_attribute("Src", "A"); // 2
      Pty_124_set.insert("A");
      Pty_124.add_attribute("R", "37"); // 2
      Pty_124_set.insert("37");
      all_values.push_back(Pty_124_set);
      all_compo_names.insert("Pty_124_set");

      {
        xml_element Sub_124{"Sub"};
        multiset<string> Sub_124_set;
        Sub_124.add_attribute("ID", "PartySubID_t_2067919511"); // 3
        Sub_124_set.insert("PartySubID_t_2067919511");
        Sub_124.add_attribute("Typ", "9"); // 3
        Sub_124_set.insert("9");
        all_values.push_back(Sub_124_set);
        all_compo_names.insert("Sub_124_set");

        Pty_124.add_element(Sub_124);
      }
      SideCrossMod_1.add_element(Pty_124);
    }
    {
      xml_element PreAll_1{"PreAll"};
      multiset<string> PreAll_1_set;
      PreAll_1.add_attribute("Acct", "AllocAccount_t_1538766386"); // 2
      PreAll_1_set.insert("AllocAccount_t_1538766386");
      PreAll_1.add_attribute("ActIDSrc", "4"); // 2
      PreAll_1_set.insert("4");
      PreAll_1.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_1_set.insert("CHF");
      PreAll_1.add_attribute("IndAllocID", "IndividualAllocID_t_465887747"); // 2
      PreAll_1_set.insert("IndividualAllocID_t_465887747");
      PreAll_1.add_attribute("Qty", "2892656.690000"); // 2
      PreAll_1_set.insert("2892656.690000");
      all_values.push_back(PreAll_1_set);
      all_compo_names.insert("PreAll_1_set");

      {
        xml_element Pty_125{"Pty"};
        multiset<string> Pty_125_set;
        Pty_125.add_attribute("ID", "NestedPartyID_t_2063915844"); // 3
        Pty_125_set.insert("NestedPartyID_t_2063915844");
        Pty_125.add_attribute("Src", "7"); // 3
        Pty_125_set.insert("7");
        Pty_125.add_attribute("R", "70"); // 3
        Pty_125_set.insert("70");
        all_values.push_back(Pty_125_set);
        all_compo_names.insert("Pty_125_set");

        {
          xml_element Sub_125{"Sub"};
          multiset<string> Sub_125_set;
          Sub_125.add_attribute("ID", "NestedPartySubID_t_1169766192"); // 4
          Sub_125_set.insert("NestedPartySubID_t_1169766192");
          Sub_125.add_attribute("Typ", "19"); // 4
          Sub_125_set.insert("19");
          all_values.push_back(Sub_125_set);
          all_compo_names.insert("Sub_125_set");

          Pty_125.add_element(Sub_125);
        }
        PreAll_1.add_element(Pty_125);
      }
      SideCrossMod_1.add_element(PreAll_1);
    }
    {
      xml_element OrdQty_1{"OrdQty"};
      multiset<string> OrdQty_1_set;
      OrdQty_1.add_attribute("Qty", "592857.010000"); // 2
      OrdQty_1_set.insert("592857.010000");
      OrdQty_1.add_attribute("Cash", "16431148.950000"); // 2
      OrdQty_1_set.insert("16431148.950000");
      OrdQty_1.add_attribute("Pct", "16596614.210000"); // 2
      OrdQty_1_set.insert("16596614.210000");
      OrdQty_1.add_attribute("RndDir", "1"); // 2
      OrdQty_1_set.insert("1");
      OrdQty_1.add_attribute("RndMod", "5450613.290000"); // 2
      OrdQty_1_set.insert("5450613.290000");
      all_values.push_back(OrdQty_1_set);
      all_compo_names.insert("OrdQty_1_set");

      SideCrossMod_1.add_element(OrdQty_1);
    }
    {
      xml_element Comm_14{"Comm"};
      multiset<string> Comm_14_set;
      Comm_14.add_attribute("Comm", "Commission_t_1423265993"); // 2
      Comm_14_set.insert("Commission_t_1423265993");
      Comm_14.add_attribute("CommTyp", "3"); // 2
      Comm_14_set.insert("3");
      Comm_14.add_attribute("Ccy", "USD"); // 2
      Comm_14_set.insert("USD");
      Comm_14.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_14_set.insert("N");
      all_values.push_back(Comm_14_set);
      all_compo_names.insert("Comm_14_set");

      SideCrossMod_1.add_element(Comm_14);
    }
    elt.add_element(SideCrossMod_1);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_2{"SideCrossMod"};
    multiset<string> SideCrossMod_2_set;
    SideCrossMod_2.add_attribute("Side", "E"); // 1
    SideCrossMod_2_set.insert("E");
    SideCrossMod_2.add_attribute("OrigClOrdID", "OrigClOrdID_t_676040749"); // 1
    SideCrossMod_2_set.insert("OrigClOrdID_t_676040749");
    SideCrossMod_2.add_attribute("ClOrdID", "ClOrdID_t_268297889"); // 1
    SideCrossMod_2_set.insert("ClOrdID_t_268297889");
    SideCrossMod_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_513992520"); // 1
    SideCrossMod_2_set.insert("SecondaryClOrdID_t_513992520");
    SideCrossMod_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1728874585"); // 1
    SideCrossMod_2_set.insert("ClOrdLinkID_t_1728874585");
    SideCrossMod_2.add_attribute("OrignDt", "TradeOriginationDate_t_2007447602"); // 1
    SideCrossMod_2_set.insert("TradeOriginationDate_t_2007447602");
    SideCrossMod_2.add_attribute("TrdDt", "TradeDate_t_1672253937"); // 1
    SideCrossMod_2_set.insert("TradeDate_t_1672253937");
    SideCrossMod_2.add_attribute("Acct", "Account_t_1524350362"); // 1
    SideCrossMod_2_set.insert("Account_t_1524350362");
    SideCrossMod_2.add_attribute("AcctIDSrc", "99"); // 1
    SideCrossMod_2_set.insert("99");
    SideCrossMod_2.add_attribute("AcctTyp", "7"); // 1
    SideCrossMod_2_set.insert("7");
    SideCrossMod_2.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("BkngUnit", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("AllocID", "AllocID_t_761420003"); // 1
    SideCrossMod_2_set.insert("AllocID_t_761420003");
    SideCrossMod_2.add_attribute("QtyTyp", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("Cpcty", "G"); // 1
    SideCrossMod_2_set.insert("G");
    SideCrossMod_2.add_attribute("Rstctions", "A"); // 1
    SideCrossMod_2_set.insert("A");
    SideCrossMod_2.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_2_set.insert("false");
    SideCrossMod_2.add_attribute("CustCpcty", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_2_set.insert("Y");
    SideCrossMod_2.add_attribute("SettlCcy", "CAN"); // 1
    SideCrossMod_2_set.insert("CAN");
    SideCrossMod_2.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("Txt", "Text_t_948695083"); // 1
    SideCrossMod_2_set.insert("Text_t_948695083");
    SideCrossMod_2.add_attribute("EncTxtLen", "684965266"); // 1
    SideCrossMod_2_set.insert("684965266");
    SideCrossMod_2.add_attribute("EncTxt", "EncodedText_t_1888310968"); // 1
    SideCrossMod_2_set.insert("EncodedText_t_1888310968");
    SideCrossMod_2.add_attribute("PosEfct", "D"); // 1
    SideCrossMod_2_set.insert("D");
    SideCrossMod_2.add_attribute("Covered", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("CshMgn", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("ClrFeeInd", "F"); // 1
    SideCrossMod_2_set.insert("F");
    SideCrossMod_2.add_attribute("SolFlag", "N"); // 1
    SideCrossMod_2_set.insert("N");
    SideCrossMod_2.add_attribute("SideComplianceID", "SideComplianceID_t_3737085"); // 1
    SideCrossMod_2_set.insert("SideComplianceID_t_3737085");
    SideCrossMod_2.add_attribute("SideTmFrc", "SideTimeInForce_t_1387473019"); // 1
    SideCrossMod_2_set.insert("SideTimeInForce_t_1387473019");
    all_values.push_back(SideCrossMod_2_set);
    all_compo_names.insert("SideCrossMod_2_set");

    {
      xml_element Pty_126{"Pty"};
      multiset<string> Pty_126_set;
      Pty_126.add_attribute("ID", "PartyID_t_1431543390"); // 2
      Pty_126_set.insert("PartyID_t_1431543390");
      Pty_126.add_attribute("Src", "G"); // 2
      Pty_126_set.insert("G");
      Pty_126.add_attribute("R", "62"); // 2
      Pty_126_set.insert("62");
      all_values.push_back(Pty_126_set);
      all_compo_names.insert("Pty_126_set");

      {
        xml_element Sub_126{"Sub"};
        multiset<string> Sub_126_set;
        Sub_126.add_attribute("ID", "PartySubID_t_1291507344"); // 3
        Sub_126_set.insert("PartySubID_t_1291507344");
        Sub_126.add_attribute("Typ", "3"); // 3
        Sub_126_set.insert("3");
        all_values.push_back(Sub_126_set);
        all_compo_names.insert("Sub_126_set");

        Pty_126.add_element(Sub_126);
      }
      SideCrossMod_2.add_element(Pty_126);
    }
    {
      xml_element PreAll_2{"PreAll"};
      multiset<string> PreAll_2_set;
      PreAll_2.add_attribute("Acct", "AllocAccount_t_345730670"); // 2
      PreAll_2_set.insert("AllocAccount_t_345730670");
      PreAll_2.add_attribute("ActIDSrc", "4"); // 2
      PreAll_2_set.insert("4");
      PreAll_2.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_2_set.insert("USD");
      PreAll_2.add_attribute("IndAllocID", "IndividualAllocID_t_1760111691"); // 2
      PreAll_2_set.insert("IndividualAllocID_t_1760111691");
      PreAll_2.add_attribute("Qty", "21182323.620000"); // 2
      PreAll_2_set.insert("21182323.620000");
      all_values.push_back(PreAll_2_set);
      all_compo_names.insert("PreAll_2_set");

      {
        xml_element Pty_127{"Pty"};
        multiset<string> Pty_127_set;
        Pty_127.add_attribute("ID", "NestedPartyID_t_2022783773"); // 3
        Pty_127_set.insert("NestedPartyID_t_2022783773");
        Pty_127.add_attribute("Src", "7"); // 3
        Pty_127_set.insert("7");
        Pty_127.add_attribute("R", "14"); // 3
        Pty_127_set.insert("14");
        all_values.push_back(Pty_127_set);
        all_compo_names.insert("Pty_127_set");

        {
          xml_element Sub_127{"Sub"};
          multiset<string> Sub_127_set;
          Sub_127.add_attribute("ID", "NestedPartySubID_t_553152325"); // 4
          Sub_127_set.insert("NestedPartySubID_t_553152325");
          Sub_127.add_attribute("Typ", "21"); // 4
          Sub_127_set.insert("21");
          all_values.push_back(Sub_127_set);
          all_compo_names.insert("Sub_127_set");

          Pty_127.add_element(Sub_127);
        }
        PreAll_2.add_element(Pty_127);
      }
      SideCrossMod_2.add_element(PreAll_2);
    }
    {
      xml_element OrdQty_2{"OrdQty"};
      multiset<string> OrdQty_2_set;
      OrdQty_2.add_attribute("Qty", "20530542.090000"); // 2
      OrdQty_2_set.insert("20530542.090000");
      OrdQty_2.add_attribute("Cash", "2532870.680000"); // 2
      OrdQty_2_set.insert("2532870.680000");
      OrdQty_2.add_attribute("Pct", "1765891.680000"); // 2
      OrdQty_2_set.insert("1765891.680000");
      OrdQty_2.add_attribute("RndDir", "0"); // 2
      OrdQty_2_set.insert("0");
      OrdQty_2.add_attribute("RndMod", "15965367.070000"); // 2
      OrdQty_2_set.insert("15965367.070000");
      all_values.push_back(OrdQty_2_set);
      all_compo_names.insert("OrdQty_2_set");

      SideCrossMod_2.add_element(OrdQty_2);
    }
    {
      xml_element Comm_15{"Comm"};
      multiset<string> Comm_15_set;
      Comm_15.add_attribute("Comm", "Commission_t_1125284252"); // 2
      Comm_15_set.insert("Commission_t_1125284252");
      Comm_15.add_attribute("CommTyp", "5"); // 2
      Comm_15_set.insert("5");
      Comm_15.add_attribute("Ccy", "EUR"); // 2
      Comm_15_set.insert("EUR");
      Comm_15.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_15_set.insert("N");
      all_values.push_back(Comm_15_set);
      all_compo_names.insert("Comm_15_set");

      SideCrossMod_2.add_element(Comm_15);
    }
    elt.add_element(SideCrossMod_2);
  } // end SideCrossMod
  { // Instrmt
    xml_element Instrmt_16{"Instrmt"};
    multiset<string> Instrmt_16_set;
    Instrmt_16.add_attribute("Sym", "Symbol_t_1611431132"); // 1
    Instrmt_16_set.insert("Symbol_t_1611431132");
    Instrmt_16.add_attribute("Sfx", "CD"); // 1
    Instrmt_16_set.insert("CD");
    Instrmt_16.add_attribute("ID", "SecurityID_t_181167661"); // 1
    Instrmt_16_set.insert("SecurityID_t_181167661");
    Instrmt_16.add_attribute("Src", "4"); // 1
    Instrmt_16_set.insert("4");
    Instrmt_16.add_attribute("Prod", "6"); // 1
    Instrmt_16_set.insert("6");
    Instrmt_16.add_attribute("ProdCmplx", "ProductComplex_t_1612711051"); // 1
    Instrmt_16_set.insert("ProductComplex_t_1612711051");
    Instrmt_16.add_attribute("SecGrp", "SecurityGroup_t_2132897822"); // 1
    Instrmt_16_set.insert("SecurityGroup_t_2132897822");
    Instrmt_16.add_attribute("CFI", "CFICode_t_122563629"); // 1
    Instrmt_16_set.insert("CFICode_t_122563629");
    Instrmt_16.add_attribute("SecTyp", "MBS"); // 1
    Instrmt_16_set.insert("MBS");
    Instrmt_16.add_attribute("SubTyp", "SecuritySubType_t_27914068"); // 1
    Instrmt_16_set.insert("SecuritySubType_t_27914068");
    Instrmt_16.add_attribute("MMY", "468294299"); // 1
    Instrmt_16_set.insert("468294299");
    Instrmt_16.add_attribute("MatDt", "MaturityDate_t_1828641908"); // 1
    Instrmt_16_set.insert("MaturityDate_t_1828641908");
    Instrmt_16.add_attribute("MatTm", "1663382156"); // 1
    Instrmt_16_set.insert("1663382156");
    Instrmt_16.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1729658069"); // 1
    Instrmt_16_set.insert("SettleOnOpenFlag_t_1729658069");
    Instrmt_16.add_attribute("AsgnMeth", "1441269951"); // 1
    Instrmt_16_set.insert("1441269951");
    Instrmt_16.add_attribute("Status", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("CpnPmt", "CouponPaymentDate_t_1604958195"); // 1
    Instrmt_16_set.insert("CouponPaymentDate_t_1604958195");
    Instrmt_16.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_16_set.insert("XR");
    Instrmt_16.add_attribute("Snrty", "SR"); // 1
    Instrmt_16_set.insert("SR");
    Instrmt_16.add_attribute("NotlPctOut", "106268.720000"); // 1
    Instrmt_16_set.insert("106268.720000");
    Instrmt_16.add_attribute("OrigNotlPctOut", "9480621.290000"); // 1
    Instrmt_16_set.insert("9480621.290000");
    Instrmt_16.add_attribute("AttchPnt", "1349964.410000"); // 1
    Instrmt_16_set.insert("1349964.410000");
    Instrmt_16.add_attribute("DetchPnt", "2639139.400000"); // 1
    Instrmt_16_set.insert("2639139.400000");
    Instrmt_16.add_attribute("Issued", "IssueDate_t_1124651298"); // 1
    Instrmt_16_set.insert("IssueDate_t_1124651298");
    Instrmt_16.add_attribute("RepoCollSecTyp", "1410128256"); // 1
    Instrmt_16_set.insert("1410128256");
    Instrmt_16.add_attribute("RepoTrm", "1860450648"); // 1
    Instrmt_16_set.insert("1860450648");
    Instrmt_16.add_attribute("RepoRt", "1024519.020000"); // 1
    Instrmt_16_set.insert("1024519.020000");
    Instrmt_16.add_attribute("Fctr", "12227416.880000"); // 1
    Instrmt_16_set.insert("12227416.880000");
    Instrmt_16.add_attribute("CrdRtg", "CreditRating_t_1050331028"); // 1
    Instrmt_16_set.insert("CreditRating_t_1050331028");
    Instrmt_16.add_attribute("Rgstry", "InstrRegistry_t_1452213583"); // 1
    Instrmt_16_set.insert("InstrRegistry_t_1452213583");
    Instrmt_16.add_attribute("IssuCtry", "240663849"); // 1
    Instrmt_16_set.insert("240663849");
    Instrmt_16.add_attribute("StPrv", "StateOrProvinceOfIssue_t_514278512"); // 1
    Instrmt_16_set.insert("StateOrProvinceOfIssue_t_514278512");
    Instrmt_16.add_attribute("Lcl", "LocaleOfIssue_t_1365923885"); // 1
    Instrmt_16_set.insert("LocaleOfIssue_t_1365923885");
    Instrmt_16.add_attribute("Redeem", "RedemptionDate_t_421831510"); // 1
    Instrmt_16_set.insert("RedemptionDate_t_421831510");
    Instrmt_16.add_attribute("StrkPx", "21294467.290000"); // 1
    Instrmt_16_set.insert("21294467.290000");
    Instrmt_16.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_16_set.insert("CAN");
    Instrmt_16.add_attribute("StrkMult", "21148609.030000"); // 1
    Instrmt_16_set.insert("21148609.030000");
    Instrmt_16.add_attribute("StrkValu", "6421871.880000"); // 1
    Instrmt_16_set.insert("6421871.880000");
    Instrmt_16.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_16_set.insert("2");
    Instrmt_16.add_attribute("StrkPxBndryPrcsn", "11104814.880000"); // 1
    Instrmt_16_set.insert("11104814.880000");
    Instrmt_16.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("OptAt", "1658673480"); // 1
    Instrmt_16_set.insert("1658673480");
    Instrmt_16.add_attribute("Mult", "6926559.090000"); // 1
    Instrmt_16_set.insert("6926559.090000");
    Instrmt_16.add_attribute("MultTyp", "2"); // 1
    Instrmt_16_set.insert("2");
    Instrmt_16.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_16_set.insert("2");
    Instrmt_16.add_attribute("MinPxIncr", "1501304.560000"); // 1
    Instrmt_16_set.insert("1501304.560000");
    Instrmt_16.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1826728494"); // 1
    Instrmt_16_set.insert("MinPriceIncrementAmount_t_1826728494");
    Instrmt_16.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_16_set.insert("MMBtu");
    Instrmt_16.add_attribute("UOMQty", "1607573.280000"); // 1
    Instrmt_16_set.insert("1607573.280000");
    Instrmt_16.add_attribute("PxUOM", "Bcf"); // 1
    Instrmt_16_set.insert("Bcf");
    Instrmt_16.add_attribute("PxUOMQty", "15097430.240000"); // 1
    Instrmt_16_set.insert("15097430.240000");
    Instrmt_16.add_attribute("SettlMeth", "P"); // 1
    Instrmt_16_set.insert("P");
    Instrmt_16.add_attribute("ExerStyle", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("OptPayAmt", "OptPayoutAmount_t_137638269"); // 1
    Instrmt_16_set.insert("OptPayoutAmount_t_137638269");
    Instrmt_16.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_16_set.insert("STD");
    Instrmt_16.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_16_set.insert("EQTY");
    Instrmt_16.add_attribute("ListMeth", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("CapPx", "11591401.110000"); // 1
    Instrmt_16_set.insert("11591401.110000");
    Instrmt_16.add_attribute("FlrPx", "883095.210000"); // 1
    Instrmt_16_set.insert("883095.210000");
    Instrmt_16.add_attribute("PutCall", "1"); // 1
    Instrmt_16_set.insert("1");
    Instrmt_16.add_attribute("FlexInd", "true"); // 1
    Instrmt_16_set.insert("true");
    Instrmt_16.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_16_set.insert("false");
    Instrmt_16.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_16_set.insert("Mo");
    Instrmt_16.add_attribute("CpnRt", "8972039.070000"); // 1
    Instrmt_16_set.insert("8972039.070000");
    Instrmt_16.add_attribute("Exch", "SecurityExchange_t_397199944"); // 1
    Instrmt_16_set.insert("SecurityExchange_t_397199944");
    Instrmt_16.add_attribute("PosLmt", "1651588145"); // 1
    Instrmt_16_set.insert("1651588145");
    Instrmt_16.add_attribute("NTPosLmt", "1539391096"); // 1
    Instrmt_16_set.insert("1539391096");
    Instrmt_16.add_attribute("Issr", "Issuer_t_1040993604"); // 1
    Instrmt_16_set.insert("Issuer_t_1040993604");
    Instrmt_16.add_attribute("EncIssrLen", "1646879468"); // 1
    Instrmt_16_set.insert("1646879468");
    Instrmt_16.add_attribute("EncIssr", "EncodedIssuer_t_502388936"); // 1
    Instrmt_16_set.insert("EncodedIssuer_t_502388936");
    Instrmt_16.add_attribute("Desc", "SecurityDesc_t_1365945524"); // 1
    Instrmt_16_set.insert("SecurityDesc_t_1365945524");
    Instrmt_16.add_attribute("EncSecDescLen", "1158069300"); // 1
    Instrmt_16_set.insert("1158069300");
    Instrmt_16.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1195044845"); // 1
    Instrmt_16_set.insert("EncodedSecurityDesc_t_1195044845");
    Instrmt_16.add_attribute("Pool", "Pool_t_984683747"); // 1
    Instrmt_16_set.insert("Pool_t_984683747");
    Instrmt_16.add_attribute("CSetMo", "155906355"); // 1
    Instrmt_16_set.insert("155906355");
    Instrmt_16.add_attribute("CPPgm", "2"); // 1
    Instrmt_16_set.insert("2");
    Instrmt_16.add_attribute("CPRegT", "CPRegType_t_663928594"); // 1
    Instrmt_16_set.insert("CPRegType_t_663928594");
    Instrmt_16.add_attribute("Dated", "DatedDate_t_1530652937"); // 1
    Instrmt_16_set.insert("DatedDate_t_1530652937");
    Instrmt_16.add_attribute("IntAcrl", "InterestAccrualDate_t_1505932630"); // 1
    Instrmt_16_set.insert("InterestAccrualDate_t_1505932630");
    all_values.push_back(Instrmt_16_set);
    all_compo_names.insert("Instrmt_16_set");

    {
      xml_element AID_16{"AID"};
      multiset<string> AID_16_set;
      AID_16.add_attribute("AltID", "SecurityAltID_t_1291235570"); // 2
      AID_16_set.insert("SecurityAltID_t_1291235570");
      AID_16.add_attribute("AltIDSrc", "8"); // 2
      AID_16_set.insert("8");
      all_values.push_back(AID_16_set);
      all_compo_names.insert("AID_16_set");

      Instrmt_16.add_element(AID_16);
    }
    {
      xml_element SecXML_16{"SecXML"};
      multiset<string> SecXML_16_set;
      SecXML_16.add_attribute("Schema", "SecurityXMLSchema_t_1930603899"); // 2
      SecXML_16_set.insert("SecurityXMLSchema_t_1930603899");
      all_values.push_back(SecXML_16_set);
      all_compo_names.insert("SecXML_16_set");

      Instrmt_16.add_element(SecXML_16);
    }
    {
      xml_element Evnt_16{"Evnt"};
      multiset<string> Evnt_16_set;
      Evnt_16.add_attribute("EventTyp", "16"); // 2
      Evnt_16_set.insert("16");
      Evnt_16.add_attribute("Dt", "EventDate_t_1665299945"); // 2
      Evnt_16_set.insert("EventDate_t_1665299945");
      Evnt_16.add_attribute("Tm", "EventTime_t_2068242168"); // 2
      Evnt_16_set.insert("EventTime_t_2068242168");
      Evnt_16.add_attribute("Px", "6026367.240000"); // 2
      Evnt_16_set.insert("6026367.240000");
      Evnt_16.add_attribute("Txt", "EventText_t_1512945618"); // 2
      Evnt_16_set.insert("EventText_t_1512945618");
      all_values.push_back(Evnt_16_set);
      all_compo_names.insert("Evnt_16_set");

      Instrmt_16.add_element(Evnt_16);
    }
    {
      xml_element Pty_128{"Pty"};
      multiset<string> Pty_128_set;
      Pty_128.add_attribute("ID", "InstrumentPartyID_t_1108727817"); // 2
      Pty_128_set.insert("InstrumentPartyID_t_1108727817");
      Pty_128.add_attribute("Src", "G"); // 2
      Pty_128_set.insert("G");
      Pty_128.add_attribute("R", "24"); // 2
      Pty_128_set.insert("24");
      all_values.push_back(Pty_128_set);
      all_compo_names.insert("Pty_128_set");

      {
        xml_element Sub_128{"Sub"};
        multiset<string> Sub_128_set;
        Sub_128.add_attribute("ID", "InstrumentPartySubID_t_663491978"); // 3
        Sub_128_set.insert("InstrumentPartySubID_t_663491978");
        Sub_128.add_attribute("Typ", "26"); // 3
        Sub_128_set.insert("26");
        all_values.push_back(Sub_128_set);
        all_compo_names.insert("Sub_128_set");

        Pty_128.add_element(Sub_128);
      }
      Instrmt_16.add_element(Pty_128);
    }
    {
      xml_element CmplxEvnt_16{"CmplxEvnt"};
      multiset<string> CmplxEvnt_16_set;
      CmplxEvnt_16.add_attribute("Typ", "6"); // 2
      CmplxEvnt_16_set.insert("6");
      CmplxEvnt_16.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_200219220"); // 2
      CmplxEvnt_16_set.insert("ComplexOptPayoutAmount_t_200219220");
      CmplxEvnt_16.add_attribute("Px", "8890774.430000"); // 2
      CmplxEvnt_16_set.insert("8890774.430000");
      CmplxEvnt_16.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_16_set.insert("3");
      CmplxEvnt_16.add_attribute("PxBndryPrcsn", "18518073.650000"); // 2
      CmplxEvnt_16_set.insert("18518073.650000");
      CmplxEvnt_16.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_16_set.insert("2");
      CmplxEvnt_16.add_attribute("Cond", "1"); // 2
      CmplxEvnt_16_set.insert("1");
      all_values.push_back(CmplxEvnt_16_set);
      all_compo_names.insert("CmplxEvnt_16_set");

      {
        xml_element EvntDts_16{"EvntDts"};
        multiset<string> EvntDts_16_set;
        EvntDts_16.add_attribute("StartDt", "ComplexEventStartDate_t_1351203186"); // 3
        EvntDts_16_set.insert("ComplexEventStartDate_t_1351203186");
        EvntDts_16.add_attribute("EndDt", "ComplexEventEndDate_t_783373827"); // 3
        EvntDts_16_set.insert("ComplexEventEndDate_t_783373827");
        all_values.push_back(EvntDts_16_set);
        all_compo_names.insert("EvntDts_16_set");

        {
          xml_element EvntTms_16{"EvntTms"};
          multiset<string> EvntTms_16_set;
          EvntTms_16.add_attribute("StartTm", "620567948"); // 4
          EvntTms_16_set.insert("620567948");
          EvntTms_16.add_attribute("EndTm", "361788838"); // 4
          EvntTms_16_set.insert("361788838");
          all_values.push_back(EvntTms_16_set);
          all_compo_names.insert("EvntTms_16_set");

          EvntDts_16.add_element(EvntTms_16);
        }
        CmplxEvnt_16.add_element(EvntDts_16);
      }
      Instrmt_16.add_element(CmplxEvnt_16);
    }
    elt.add_element(Instrmt_16);
  } // end Instrmt
  { // Undly
    xml_element Undly_24{"Undly"};
    multiset<string> Undly_24_set;
    Undly_24.add_attribute("Sym", "UnderlyingSymbol_t_1605251696"); // 1
    Undly_24_set.insert("UnderlyingSymbol_t_1605251696");
    Undly_24.add_attribute("Sfx", "WI"); // 1
    Undly_24_set.insert("WI");
    Undly_24.add_attribute("ID", "UnderlyingSecurityID_t_1176110326"); // 1
    Undly_24_set.insert("UnderlyingSecurityID_t_1176110326");
    Undly_24.add_attribute("Src", "D"); // 1
    Undly_24_set.insert("D");
    Undly_24.add_attribute("Prod", "8"); // 1
    Undly_24_set.insert("8");
    Undly_24.add_attribute("CFI", "UnderlyingCFICode_t_534559309"); // 1
    Undly_24_set.insert("UnderlyingCFICode_t_534559309");
    Undly_24.add_attribute("SecTyp", "YANK"); // 1
    Undly_24_set.insert("YANK");
    Undly_24.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_793776796"); // 1
    Undly_24_set.insert("UnderlyingSecuritySubType_t_793776796");
    Undly_24.add_attribute("MMY", "317679560"); // 1
    Undly_24_set.insert("317679560");
    Undly_24.add_attribute("Mat", "UnderlyingMaturityDate_t_161158760"); // 1
    Undly_24_set.insert("UnderlyingMaturityDate_t_161158760");
    Undly_24.add_attribute("MatTm", "311593094"); // 1
    Undly_24_set.insert("311593094");
    Undly_24.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_238438081"); // 1
    Undly_24_set.insert("UnderlyingCouponPaymentDate_t_238438081");
    Undly_24.add_attribute("RestrctTyp", "FR"); // 1
    Undly_24_set.insert("FR");
    Undly_24.add_attribute("Snrty", "SB"); // 1
    Undly_24_set.insert("SB");
    Undly_24.add_attribute("NotlPctOut", "13471658.980000"); // 1
    Undly_24_set.insert("13471658.980000");
    Undly_24.add_attribute("OrigNotlPctOut", "3780886.710000"); // 1
    Undly_24_set.insert("3780886.710000");
    Undly_24.add_attribute("AttchPnt", "12783102.030000"); // 1
    Undly_24_set.insert("12783102.030000");
    Undly_24.add_attribute("DetchPnt", "20106578.770000"); // 1
    Undly_24_set.insert("20106578.770000");
    Undly_24.add_attribute("Issued", "UnderlyingIssueDate_t_369962206"); // 1
    Undly_24_set.insert("UnderlyingIssueDate_t_369962206");
    Undly_24.add_attribute("RepoCollSecTyp", "1242222726"); // 1
    Undly_24_set.insert("1242222726");
    Undly_24.add_attribute("RepoTrm", "63393449"); // 1
    Undly_24_set.insert("63393449");
    Undly_24.add_attribute("RepoRt", "12590396.490000"); // 1
    Undly_24_set.insert("12590396.490000");
    Undly_24.add_attribute("Fctr", "16033351.940000"); // 1
    Undly_24_set.insert("16033351.940000");
    Undly_24.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1915200815"); // 1
    Undly_24_set.insert("UnderlyingCreditRating_t_1915200815");
    Undly_24.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1540024540"); // 1
    Undly_24_set.insert("UnderlyingInstrRegistry_t_1540024540");
    Undly_24.add_attribute("Ctry", "857957618"); // 1
    Undly_24_set.insert("857957618");
    Undly_24.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1118920353"); // 1
    Undly_24_set.insert("UnderlyingStateOrProvinceOfIssue_t_1118920353");
    Undly_24.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_175914719"); // 1
    Undly_24_set.insert("UnderlyingLocaleOfIssue_t_175914719");
    Undly_24.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1478525566"); // 1
    Undly_24_set.insert("UnderlyingRedemptionDate_t_1478525566");
    Undly_24.add_attribute("StrkPx", "14807091.910000"); // 1
    Undly_24_set.insert("14807091.910000");
    Undly_24.add_attribute("StrkCcy", "JPY"); // 1
    Undly_24_set.insert("JPY");
    Undly_24.add_attribute("OptA", "1998404385"); // 1
    Undly_24_set.insert("1998404385");
    Undly_24.add_attribute("Mult", "11829600.700000"); // 1
    Undly_24_set.insert("11829600.700000");
    Undly_24.add_attribute("MultTyp", "2"); // 1
    Undly_24_set.insert("2");
    Undly_24.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_24_set.insert("3");
    Undly_24.add_attribute("UOM", "t"); // 1
    Undly_24_set.insert("t");
    Undly_24.add_attribute("UOMQty", "3234388.200000"); // 1
    Undly_24_set.insert("3234388.200000");
    Undly_24.add_attribute("PxUOM", "Alw"); // 1
    Undly_24_set.insert("Alw");
    Undly_24.add_attribute("PxUOMQty", "20351989.400000"); // 1
    Undly_24_set.insert("20351989.400000");
    Undly_24.add_attribute("TmUnit", "Mo"); // 1
    Undly_24_set.insert("Mo");
    Undly_24.add_attribute("ExerStyle", "0"); // 1
    Undly_24_set.insert("0");
    Undly_24.add_attribute("CpnRt", "1261533.730000"); // 1
    Undly_24_set.insert("1261533.730000");
    Undly_24.add_attribute("Exch", "UnderlyingSecurityExchange_t_1248393064"); // 1
    Undly_24_set.insert("UnderlyingSecurityExchange_t_1248393064");
    Undly_24.add_attribute("Issr", "UnderlyingIssuer_t_534210174"); // 1
    Undly_24_set.insert("UnderlyingIssuer_t_534210174");
    Undly_24.add_attribute("EncUndIssrLen", "1473319271"); // 1
    Undly_24_set.insert("1473319271");
    Undly_24.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1626481735"); // 1
    Undly_24_set.insert("EncodedUnderlyingIssuer_t_1626481735");
    Undly_24.add_attribute("Desc", "UnderlyingSecurityDesc_t_1812520378"); // 1
    Undly_24_set.insert("UnderlyingSecurityDesc_t_1812520378");
    Undly_24.add_attribute("EncUndSecDescLen", "1336493500"); // 1
    Undly_24_set.insert("1336493500");
    Undly_24.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1996443942"); // 1
    Undly_24_set.insert("EncodedUnderlyingSecurityDesc_t_1996443942");
    Undly_24.add_attribute("CPPgm", "UnderlyingCPProgram_t_907259456"); // 1
    Undly_24_set.insert("UnderlyingCPProgram_t_907259456");
    Undly_24.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1399886950"); // 1
    Undly_24_set.insert("UnderlyingCPRegType_t_1399886950");
    Undly_24.add_attribute("AllocPct", "11079999.430000"); // 1
    Undly_24_set.insert("11079999.430000");
    Undly_24.add_attribute("Ccy", "EUR"); // 1
    Undly_24_set.insert("EUR");
    Undly_24.add_attribute("Qty", "5005408.360000"); // 1
    Undly_24_set.insert("5005408.360000");
    Undly_24.add_attribute("SettlTyp", "4"); // 1
    Undly_24_set.insert("4");
    Undly_24.add_attribute("CashAmt", "UnderlyingCashAmount_t_139040822"); // 1
    Undly_24_set.insert("UnderlyingCashAmount_t_139040822");
    Undly_24.add_attribute("CashTyp", "DIFF"); // 1
    Undly_24_set.insert("DIFF");
    Undly_24.add_attribute("Px", "5521105.390000"); // 1
    Undly_24_set.insert("5521105.390000");
    Undly_24.add_attribute("DirtPx", "16197500.130000"); // 1
    Undly_24_set.insert("16197500.130000");
    Undly_24.add_attribute("EndPx", "6833052.990000"); // 1
    Undly_24_set.insert("6833052.990000");
    Undly_24.add_attribute("StartVal", "UnderlyingStartValue_t_1488404153"); // 1
    Undly_24_set.insert("UnderlyingStartValue_t_1488404153");
    Undly_24.add_attribute("CurVal", "UnderlyingCurrentValue_t_1470670750"); // 1
    Undly_24_set.insert("UnderlyingCurrentValue_t_1470670750");
    Undly_24.add_attribute("EndVal", "UnderlyingEndValue_t_1866265370"); // 1
    Undly_24_set.insert("UnderlyingEndValue_t_1866265370");
    Undly_24.add_attribute("AdjQty", "3989107.620000"); // 1
    Undly_24_set.insert("3989107.620000");
    Undly_24.add_attribute("FxRate", "12224559.700000"); // 1
    Undly_24_set.insert("12224559.700000");
    Undly_24.add_attribute("FxRateCalc", "D"); // 1
    Undly_24_set.insert("D");
    Undly_24.add_attribute("CapValu", "UnderlyingCapValue_t_722349582"); // 1
    Undly_24_set.insert("UnderlyingCapValue_t_722349582");
    Undly_24.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1768017987"); // 1
    Undly_24_set.insert("UnderlyingSettlMethod_t_1768017987");
    Undly_24.add_attribute("PutCall", "1324016393"); // 1
    Undly_24_set.insert("1324016393");
    all_values.push_back(Undly_24_set);
    all_compo_names.insert("Undly_24_set");

    {
      xml_element UndAID_24{"UndAID"};
      multiset<string> UndAID_24_set;
      UndAID_24.add_attribute("AltID", "UnderlyingSecurityAltID_t_1206947163"); // 2
      UndAID_24_set.insert("UnderlyingSecurityAltID_t_1206947163");
      UndAID_24.add_attribute("AltIDSrc", "I"); // 2
      UndAID_24_set.insert("I");
      all_values.push_back(UndAID_24_set);
      all_compo_names.insert("UndAID_24_set");

      Undly_24.add_element(UndAID_24);
    }
    {
      xml_element Stip_40{"Stip"};
      multiset<string> Stip_40_set;
      Stip_40.add_attribute("Typ", "CPP"); // 2
      Stip_40_set.insert("CPP");
      Stip_40.add_attribute("Val", "UnderlyingStipValue_t_307856579"); // 2
      Stip_40_set.insert("UnderlyingStipValue_t_307856579");
      all_values.push_back(Stip_40_set);
      all_compo_names.insert("Stip_40_set");

      Undly_24.add_element(Stip_40);
    }
    {
      xml_element Pty_129{"Pty"};
      multiset<string> Pty_129_set;
      Pty_129.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1011899624"); // 2
      Pty_129_set.insert("UnderlyingInstrumentPartyID_t_1011899624");
      Pty_129.add_attribute("Src", "B"); // 2
      Pty_129_set.insert("B");
      Pty_129.add_attribute("R", "16"); // 2
      Pty_129_set.insert("16");
      all_values.push_back(Pty_129_set);
      all_compo_names.insert("Pty_129_set");

      {
        xml_element Sub_129{"Sub"};
        multiset<string> Sub_129_set;
        Sub_129.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_676936354"); // 3
        Sub_129_set.insert("UnderlyingInstrumentPartySubID_t_676936354");
        Sub_129.add_attribute("Typ", "30"); // 3
        Sub_129_set.insert("30");
        all_values.push_back(Sub_129_set);
        all_compo_names.insert("Sub_129_set");

        Pty_129.add_element(Sub_129);
      }
      Undly_24.add_element(Pty_129);
    }
    elt.add_element(Undly_24);
  } // end Undly
  { // Undly
    xml_element Undly_25{"Undly"};
    multiset<string> Undly_25_set;
    Undly_25.add_attribute("Sym", "UnderlyingSymbol_t_1783298609"); // 1
    Undly_25_set.insert("UnderlyingSymbol_t_1783298609");
    Undly_25.add_attribute("Sfx", "CD"); // 1
    Undly_25_set.insert("CD");
    Undly_25.add_attribute("ID", "UnderlyingSecurityID_t_1364902192"); // 1
    Undly_25_set.insert("UnderlyingSecurityID_t_1364902192");
    Undly_25.add_attribute("Src", "9"); // 1
    Undly_25_set.insert("9");
    Undly_25.add_attribute("Prod", "7"); // 1
    Undly_25_set.insert("7");
    Undly_25.add_attribute("CFI", "UnderlyingCFICode_t_385022661"); // 1
    Undly_25_set.insert("UnderlyingCFICode_t_385022661");
    Undly_25.add_attribute("SecTyp", "TBA"); // 1
    Undly_25_set.insert("TBA");
    Undly_25.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1020891785"); // 1
    Undly_25_set.insert("UnderlyingSecuritySubType_t_1020891785");
    Undly_25.add_attribute("MMY", "524063483"); // 1
    Undly_25_set.insert("524063483");
    Undly_25.add_attribute("Mat", "UnderlyingMaturityDate_t_1920811296"); // 1
    Undly_25_set.insert("UnderlyingMaturityDate_t_1920811296");
    Undly_25.add_attribute("MatTm", "1573002324"); // 1
    Undly_25_set.insert("1573002324");
    Undly_25.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2143813497"); // 1
    Undly_25_set.insert("UnderlyingCouponPaymentDate_t_2143813497");
    Undly_25.add_attribute("RestrctTyp", "XR"); // 1
    Undly_25_set.insert("XR");
    Undly_25.add_attribute("Snrty", "SR"); // 1
    Undly_25_set.insert("SR");
    Undly_25.add_attribute("NotlPctOut", "14670005.990000"); // 1
    Undly_25_set.insert("14670005.990000");
    Undly_25.add_attribute("OrigNotlPctOut", "1754146.690000"); // 1
    Undly_25_set.insert("1754146.690000");
    Undly_25.add_attribute("AttchPnt", "13128335.920000"); // 1
    Undly_25_set.insert("13128335.920000");
    Undly_25.add_attribute("DetchPnt", "5419729.220000"); // 1
    Undly_25_set.insert("5419729.220000");
    Undly_25.add_attribute("Issued", "UnderlyingIssueDate_t_1611715771"); // 1
    Undly_25_set.insert("UnderlyingIssueDate_t_1611715771");
    Undly_25.add_attribute("RepoCollSecTyp", "2035183174"); // 1
    Undly_25_set.insert("2035183174");
    Undly_25.add_attribute("RepoTrm", "162507261"); // 1
    Undly_25_set.insert("162507261");
    Undly_25.add_attribute("RepoRt", "7882485.160000"); // 1
    Undly_25_set.insert("7882485.160000");
    Undly_25.add_attribute("Fctr", "10946466.890000"); // 1
    Undly_25_set.insert("10946466.890000");
    Undly_25.add_attribute("CrdRtg", "UnderlyingCreditRating_t_640196710"); // 1
    Undly_25_set.insert("UnderlyingCreditRating_t_640196710");
    Undly_25.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_90934635"); // 1
    Undly_25_set.insert("UnderlyingInstrRegistry_t_90934635");
    Undly_25.add_attribute("Ctry", "1402503269"); // 1
    Undly_25_set.insert("1402503269");
    Undly_25.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1652096334"); // 1
    Undly_25_set.insert("UnderlyingStateOrProvinceOfIssue_t_1652096334");
    Undly_25.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_866940025"); // 1
    Undly_25_set.insert("UnderlyingLocaleOfIssue_t_866940025");
    Undly_25.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1189357936"); // 1
    Undly_25_set.insert("UnderlyingRedemptionDate_t_1189357936");
    Undly_25.add_attribute("StrkPx", "1815490.400000"); // 1
    Undly_25_set.insert("1815490.400000");
    Undly_25.add_attribute("StrkCcy", "EUR"); // 1
    Undly_25_set.insert("EUR");
    Undly_25.add_attribute("OptA", "1765744851"); // 1
    Undly_25_set.insert("1765744851");
    Undly_25.add_attribute("Mult", "493738.120000"); // 1
    Undly_25_set.insert("493738.120000");
    Undly_25.add_attribute("MultTyp", "2"); // 1
    Undly_25_set.insert("2");
    Undly_25.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_25_set.insert("1");
    Undly_25.add_attribute("UOM", "t"); // 1
    Undly_25_set.insert("t");
    Undly_25.add_attribute("UOMQty", "6658598.940000"); // 1
    Undly_25_set.insert("6658598.940000");
    Undly_25.add_attribute("PxUOM", "tn"); // 1
    Undly_25_set.insert("tn");
    Undly_25.add_attribute("PxUOMQty", "9584599.570000"); // 1
    Undly_25_set.insert("9584599.570000");
    Undly_25.add_attribute("TmUnit", "D"); // 1
    Undly_25_set.insert("D");
    Undly_25.add_attribute("ExerStyle", "2"); // 1
    Undly_25_set.insert("2");
    Undly_25.add_attribute("CpnRt", "9547898.060000"); // 1
    Undly_25_set.insert("9547898.060000");
    Undly_25.add_attribute("Exch", "UnderlyingSecurityExchange_t_895820489"); // 1
    Undly_25_set.insert("UnderlyingSecurityExchange_t_895820489");
    Undly_25.add_attribute("Issr", "UnderlyingIssuer_t_778417660"); // 1
    Undly_25_set.insert("UnderlyingIssuer_t_778417660");
    Undly_25.add_attribute("EncUndIssrLen", "274306757"); // 1
    Undly_25_set.insert("274306757");
    Undly_25.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1071235159"); // 1
    Undly_25_set.insert("EncodedUnderlyingIssuer_t_1071235159");
    Undly_25.add_attribute("Desc", "UnderlyingSecurityDesc_t_2091251252"); // 1
    Undly_25_set.insert("UnderlyingSecurityDesc_t_2091251252");
    Undly_25.add_attribute("EncUndSecDescLen", "816279679"); // 1
    Undly_25_set.insert("816279679");
    Undly_25.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_535467282"); // 1
    Undly_25_set.insert("EncodedUnderlyingSecurityDesc_t_535467282");
    Undly_25.add_attribute("CPPgm", "UnderlyingCPProgram_t_1978950778"); // 1
    Undly_25_set.insert("UnderlyingCPProgram_t_1978950778");
    Undly_25.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_978786940"); // 1
    Undly_25_set.insert("UnderlyingCPRegType_t_978786940");
    Undly_25.add_attribute("AllocPct", "13237157.980000"); // 1
    Undly_25_set.insert("13237157.980000");
    Undly_25.add_attribute("Ccy", "CHF"); // 1
    Undly_25_set.insert("CHF");
    Undly_25.add_attribute("Qty", "14146504.330000"); // 1
    Undly_25_set.insert("14146504.330000");
    Undly_25.add_attribute("SettlTyp", "5"); // 1
    Undly_25_set.insert("5");
    Undly_25.add_attribute("CashAmt", "UnderlyingCashAmount_t_1123596337"); // 1
    Undly_25_set.insert("UnderlyingCashAmount_t_1123596337");
    Undly_25.add_attribute("CashTyp", "FIXED"); // 1
    Undly_25_set.insert("FIXED");
    Undly_25.add_attribute("Px", "13704913.770000"); // 1
    Undly_25_set.insert("13704913.770000");
    Undly_25.add_attribute("DirtPx", "13051453.780000"); // 1
    Undly_25_set.insert("13051453.780000");
    Undly_25.add_attribute("EndPx", "9660620.780000"); // 1
    Undly_25_set.insert("9660620.780000");
    Undly_25.add_attribute("StartVal", "UnderlyingStartValue_t_48180626"); // 1
    Undly_25_set.insert("UnderlyingStartValue_t_48180626");
    Undly_25.add_attribute("CurVal", "UnderlyingCurrentValue_t_923406581"); // 1
    Undly_25_set.insert("UnderlyingCurrentValue_t_923406581");
    Undly_25.add_attribute("EndVal", "UnderlyingEndValue_t_1015435890"); // 1
    Undly_25_set.insert("UnderlyingEndValue_t_1015435890");
    Undly_25.add_attribute("AdjQty", "16171684.270000"); // 1
    Undly_25_set.insert("16171684.270000");
    Undly_25.add_attribute("FxRate", "3414909.490000"); // 1
    Undly_25_set.insert("3414909.490000");
    Undly_25.add_attribute("FxRateCalc", "D"); // 1
    Undly_25_set.insert("D");
    Undly_25.add_attribute("CapValu", "UnderlyingCapValue_t_135544673"); // 1
    Undly_25_set.insert("UnderlyingCapValue_t_135544673");
    Undly_25.add_attribute("SetMeth", "UnderlyingSettlMethod_t_780467102"); // 1
    Undly_25_set.insert("UnderlyingSettlMethod_t_780467102");
    Undly_25.add_attribute("PutCall", "260808672"); // 1
    Undly_25_set.insert("260808672");
    all_values.push_back(Undly_25_set);
    all_compo_names.insert("Undly_25_set");

    {
      xml_element UndAID_25{"UndAID"};
      multiset<string> UndAID_25_set;
      UndAID_25.add_attribute("AltID", "UnderlyingSecurityAltID_t_574732215"); // 2
      UndAID_25_set.insert("UnderlyingSecurityAltID_t_574732215");
      UndAID_25.add_attribute("AltIDSrc", "B"); // 2
      UndAID_25_set.insert("B");
      all_values.push_back(UndAID_25_set);
      all_compo_names.insert("UndAID_25_set");

      Undly_25.add_element(UndAID_25);
    }
    {
      xml_element Stip_41{"Stip"};
      multiset<string> Stip_41_set;
      Stip_41.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_41_set.insert("DISCOUNT");
      Stip_41.add_attribute("Val", "UnderlyingStipValue_t_1470552705"); // 2
      Stip_41_set.insert("UnderlyingStipValue_t_1470552705");
      all_values.push_back(Stip_41_set);
      all_compo_names.insert("Stip_41_set");

      Undly_25.add_element(Stip_41);
    }
    {
      xml_element Pty_130{"Pty"};
      multiset<string> Pty_130_set;
      Pty_130.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1423379592"); // 2
      Pty_130_set.insert("UnderlyingInstrumentPartyID_t_1423379592");
      Pty_130.add_attribute("Src", "3"); // 2
      Pty_130_set.insert("3");
      Pty_130.add_attribute("R", "70"); // 2
      Pty_130_set.insert("70");
      all_values.push_back(Pty_130_set);
      all_compo_names.insert("Pty_130_set");

      {
        xml_element Sub_130{"Sub"};
        multiset<string> Sub_130_set;
        Sub_130.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1367147196"); // 3
        Sub_130_set.insert("UnderlyingInstrumentPartySubID_t_1367147196");
        Sub_130.add_attribute("Typ", "19"); // 3
        Sub_130_set.insert("19");
        all_values.push_back(Sub_130_set);
        all_compo_names.insert("Sub_130_set");

        Pty_130.add_element(Sub_130);
      }
      Undly_25.add_element(Pty_130);
    }
    elt.add_element(Undly_25);
  } // end Undly
  { // Undly
    xml_element Undly_26{"Undly"};
    multiset<string> Undly_26_set;
    Undly_26.add_attribute("Sym", "UnderlyingSymbol_t_929771498"); // 1
    Undly_26_set.insert("UnderlyingSymbol_t_929771498");
    Undly_26.add_attribute("Sfx", "WI"); // 1
    Undly_26_set.insert("WI");
    Undly_26.add_attribute("ID", "UnderlyingSecurityID_t_1137488208"); // 1
    Undly_26_set.insert("UnderlyingSecurityID_t_1137488208");
    Undly_26.add_attribute("Src", "F"); // 1
    Undly_26_set.insert("F");
    Undly_26.add_attribute("Prod", "6"); // 1
    Undly_26_set.insert("6");
    Undly_26.add_attribute("CFI", "UnderlyingCFICode_t_608988211"); // 1
    Undly_26_set.insert("UnderlyingCFICode_t_608988211");
    Undly_26.add_attribute("SecTyp", "ABS"); // 1
    Undly_26_set.insert("ABS");
    Undly_26.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_158377940"); // 1
    Undly_26_set.insert("UnderlyingSecuritySubType_t_158377940");
    Undly_26.add_attribute("MMY", "1732584548"); // 1
    Undly_26_set.insert("1732584548");
    Undly_26.add_attribute("Mat", "UnderlyingMaturityDate_t_1654760892"); // 1
    Undly_26_set.insert("UnderlyingMaturityDate_t_1654760892");
    Undly_26.add_attribute("MatTm", "1528869317"); // 1
    Undly_26_set.insert("1528869317");
    Undly_26.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_890246278"); // 1
    Undly_26_set.insert("UnderlyingCouponPaymentDate_t_890246278");
    Undly_26.add_attribute("RestrctTyp", "MM"); // 1
    Undly_26_set.insert("MM");
    Undly_26.add_attribute("Snrty", "SR"); // 1
    Undly_26_set.insert("SR");
    Undly_26.add_attribute("NotlPctOut", "18136528.590000"); // 1
    Undly_26_set.insert("18136528.590000");
    Undly_26.add_attribute("OrigNotlPctOut", "14887752.120000"); // 1
    Undly_26_set.insert("14887752.120000");
    Undly_26.add_attribute("AttchPnt", "10467347.220000"); // 1
    Undly_26_set.insert("10467347.220000");
    Undly_26.add_attribute("DetchPnt", "76601.600000"); // 1
    Undly_26_set.insert("76601.600000");
    Undly_26.add_attribute("Issued", "UnderlyingIssueDate_t_791123928"); // 1
    Undly_26_set.insert("UnderlyingIssueDate_t_791123928");
    Undly_26.add_attribute("RepoCollSecTyp", "1182279396"); // 1
    Undly_26_set.insert("1182279396");
    Undly_26.add_attribute("RepoTrm", "788127263"); // 1
    Undly_26_set.insert("788127263");
    Undly_26.add_attribute("RepoRt", "10519326.000000"); // 1
    Undly_26_set.insert("10519326.000000");
    Undly_26.add_attribute("Fctr", "17570116.110000"); // 1
    Undly_26_set.insert("17570116.110000");
    Undly_26.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1433089195"); // 1
    Undly_26_set.insert("UnderlyingCreditRating_t_1433089195");
    Undly_26.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_120047431"); // 1
    Undly_26_set.insert("UnderlyingInstrRegistry_t_120047431");
    Undly_26.add_attribute("Ctry", "1080080668"); // 1
    Undly_26_set.insert("1080080668");
    Undly_26.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_708985140"); // 1
    Undly_26_set.insert("UnderlyingStateOrProvinceOfIssue_t_708985140");
    Undly_26.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1609952667"); // 1
    Undly_26_set.insert("UnderlyingLocaleOfIssue_t_1609952667");
    Undly_26.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1474384884"); // 1
    Undly_26_set.insert("UnderlyingRedemptionDate_t_1474384884");
    Undly_26.add_attribute("StrkPx", "20761323.360000"); // 1
    Undly_26_set.insert("20761323.360000");
    Undly_26.add_attribute("StrkCcy", "USD"); // 1
    Undly_26_set.insert("USD");
    Undly_26.add_attribute("OptA", "1127263015"); // 1
    Undly_26_set.insert("1127263015");
    Undly_26.add_attribute("Mult", "7586584.940000"); // 1
    Undly_26_set.insert("7586584.940000");
    Undly_26.add_attribute("MultTyp", "2"); // 1
    Undly_26_set.insert("2");
    Undly_26.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_26_set.insert("4");
    Undly_26.add_attribute("UOM", "USD"); // 1
    Undly_26_set.insert("USD");
    Undly_26.add_attribute("UOMQty", "18833304.650000"); // 1
    Undly_26_set.insert("18833304.650000");
    Undly_26.add_attribute("PxUOM", "Alw"); // 1
    Undly_26_set.insert("Alw");
    Undly_26.add_attribute("PxUOMQty", "9527476.060000"); // 1
    Undly_26_set.insert("9527476.060000");
    Undly_26.add_attribute("TmUnit", "Min"); // 1
    Undly_26_set.insert("Min");
    Undly_26.add_attribute("ExerStyle", "0"); // 1
    Undly_26_set.insert("0");
    Undly_26.add_attribute("CpnRt", "18429938.840000"); // 1
    Undly_26_set.insert("18429938.840000");
    Undly_26.add_attribute("Exch", "UnderlyingSecurityExchange_t_1863947032"); // 1
    Undly_26_set.insert("UnderlyingSecurityExchange_t_1863947032");
    Undly_26.add_attribute("Issr", "UnderlyingIssuer_t_73837418"); // 1
    Undly_26_set.insert("UnderlyingIssuer_t_73837418");
    Undly_26.add_attribute("EncUndIssrLen", "1509163096"); // 1
    Undly_26_set.insert("1509163096");
    Undly_26.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1205238596"); // 1
    Undly_26_set.insert("EncodedUnderlyingIssuer_t_1205238596");
    Undly_26.add_attribute("Desc", "UnderlyingSecurityDesc_t_1120572141"); // 1
    Undly_26_set.insert("UnderlyingSecurityDesc_t_1120572141");
    Undly_26.add_attribute("EncUndSecDescLen", "1516823256"); // 1
    Undly_26_set.insert("1516823256");
    Undly_26.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1996362524"); // 1
    Undly_26_set.insert("EncodedUnderlyingSecurityDesc_t_1996362524");
    Undly_26.add_attribute("CPPgm", "UnderlyingCPProgram_t_155367889"); // 1
    Undly_26_set.insert("UnderlyingCPProgram_t_155367889");
    Undly_26.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_157466871"); // 1
    Undly_26_set.insert("UnderlyingCPRegType_t_157466871");
    Undly_26.add_attribute("AllocPct", "9008114.770000"); // 1
    Undly_26_set.insert("9008114.770000");
    Undly_26.add_attribute("Ccy", "CAN"); // 1
    Undly_26_set.insert("CAN");
    Undly_26.add_attribute("Qty", "10208589.080000"); // 1
    Undly_26_set.insert("10208589.080000");
    Undly_26.add_attribute("SettlTyp", "4"); // 1
    Undly_26_set.insert("4");
    Undly_26.add_attribute("CashAmt", "UnderlyingCashAmount_t_152057559"); // 1
    Undly_26_set.insert("UnderlyingCashAmount_t_152057559");
    Undly_26.add_attribute("CashTyp", "DIFF"); // 1
    Undly_26_set.insert("DIFF");
    Undly_26.add_attribute("Px", "1718777.570000"); // 1
    Undly_26_set.insert("1718777.570000");
    Undly_26.add_attribute("DirtPx", "807062.470000"); // 1
    Undly_26_set.insert("807062.470000");
    Undly_26.add_attribute("EndPx", "1044982.130000"); // 1
    Undly_26_set.insert("1044982.130000");
    Undly_26.add_attribute("StartVal", "UnderlyingStartValue_t_428550492"); // 1
    Undly_26_set.insert("UnderlyingStartValue_t_428550492");
    Undly_26.add_attribute("CurVal", "UnderlyingCurrentValue_t_1207969263"); // 1
    Undly_26_set.insert("UnderlyingCurrentValue_t_1207969263");
    Undly_26.add_attribute("EndVal", "UnderlyingEndValue_t_863156708"); // 1
    Undly_26_set.insert("UnderlyingEndValue_t_863156708");
    Undly_26.add_attribute("AdjQty", "7912268.750000"); // 1
    Undly_26_set.insert("7912268.750000");
    Undly_26.add_attribute("FxRate", "1649931.290000"); // 1
    Undly_26_set.insert("1649931.290000");
    Undly_26.add_attribute("FxRateCalc", "D"); // 1
    Undly_26_set.insert("D");
    Undly_26.add_attribute("CapValu", "UnderlyingCapValue_t_527073692"); // 1
    Undly_26_set.insert("UnderlyingCapValue_t_527073692");
    Undly_26.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1427878584"); // 1
    Undly_26_set.insert("UnderlyingSettlMethod_t_1427878584");
    Undly_26.add_attribute("PutCall", "1036067371"); // 1
    Undly_26_set.insert("1036067371");
    all_values.push_back(Undly_26_set);
    all_compo_names.insert("Undly_26_set");

    {
      xml_element UndAID_26{"UndAID"};
      multiset<string> UndAID_26_set;
      UndAID_26.add_attribute("AltID", "UnderlyingSecurityAltID_t_1917681401"); // 2
      UndAID_26_set.insert("UnderlyingSecurityAltID_t_1917681401");
      UndAID_26.add_attribute("AltIDSrc", "2"); // 2
      UndAID_26_set.insert("2");
      all_values.push_back(UndAID_26_set);
      all_compo_names.insert("UndAID_26_set");

      Undly_26.add_element(UndAID_26);
    }
    {
      xml_element Stip_42{"Stip"};
      multiset<string> Stip_42_set;
      Stip_42.add_attribute("Typ", "CPY"); // 2
      Stip_42_set.insert("CPY");
      Stip_42.add_attribute("Val", "UnderlyingStipValue_t_1634144785"); // 2
      Stip_42_set.insert("UnderlyingStipValue_t_1634144785");
      all_values.push_back(Stip_42_set);
      all_compo_names.insert("Stip_42_set");

      Undly_26.add_element(Stip_42);
    }
    {
      xml_element Pty_131{"Pty"};
      multiset<string> Pty_131_set;
      Pty_131.add_attribute("ID", "UnderlyingInstrumentPartyID_t_2145987126"); // 2
      Pty_131_set.insert("UnderlyingInstrumentPartyID_t_2145987126");
      Pty_131.add_attribute("Src", "B"); // 2
      Pty_131_set.insert("B");
      Pty_131.add_attribute("R", "53"); // 2
      Pty_131_set.insert("53");
      all_values.push_back(Pty_131_set);
      all_compo_names.insert("Pty_131_set");

      {
        xml_element Sub_131{"Sub"};
        multiset<string> Sub_131_set;
        Sub_131.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1119075619"); // 3
        Sub_131_set.insert("UnderlyingInstrumentPartySubID_t_1119075619");
        Sub_131.add_attribute("Typ", "24"); // 3
        Sub_131_set.insert("24");
        all_values.push_back(Sub_131_set);
        all_compo_names.insert("Sub_131_set");

        Pty_131.add_element(Sub_131);
      }
      Undly_26.add_element(Pty_131);
    }
    elt.add_element(Undly_26);
  } // end Undly
  { // Leg
    xml_element Leg_24{"Leg"};
    multiset<string> Leg_24_set;
    Leg_24.add_attribute("Sym", "LegSymbol_t_1274443508"); // 1
    Leg_24_set.insert("LegSymbol_t_1274443508");
    Leg_24.add_attribute("Sfx", "CD"); // 1
    Leg_24_set.insert("CD");
    Leg_24.add_attribute("ID", "LegSecurityID_t_1441590087"); // 1
    Leg_24_set.insert("LegSecurityID_t_1441590087");
    Leg_24.add_attribute("Src", "5"); // 1
    Leg_24_set.insert("5");
    Leg_24.add_attribute("Prod", "8"); // 1
    Leg_24_set.insert("8");
    Leg_24.add_attribute("CFI", "LegCFICode_t_314965347"); // 1
    Leg_24_set.insert("LegCFICode_t_314965347");
    Leg_24.add_attribute("SecTyp", "TCAL"); // 1
    Leg_24_set.insert("TCAL");
    Leg_24.add_attribute("SecSubTyp", "LegSecuritySubType_t_1362677162"); // 1
    Leg_24_set.insert("LegSecuritySubType_t_1362677162");
    Leg_24.add_attribute("MMY", "798293274"); // 1
    Leg_24_set.insert("798293274");
    Leg_24.add_attribute("Mat", "LegMaturityDate_t_2056193639"); // 1
    Leg_24_set.insert("LegMaturityDate_t_2056193639");
    Leg_24.add_attribute("MatTm", "1443383409"); // 1
    Leg_24_set.insert("1443383409");
    Leg_24.add_attribute("CpnPmt", "LegCouponPaymentDate_t_902791488"); // 1
    Leg_24_set.insert("LegCouponPaymentDate_t_902791488");
    Leg_24.add_attribute("Issued", "LegIssueDate_t_337260483"); // 1
    Leg_24_set.insert("LegIssueDate_t_337260483");
    Leg_24.add_attribute("RepoCollSecTyp", "503869024"); // 1
    Leg_24_set.insert("503869024");
    Leg_24.add_attribute("RepoTrm", "1765948196"); // 1
    Leg_24_set.insert("1765948196");
    Leg_24.add_attribute("RepoRt", "11284873.580000"); // 1
    Leg_24_set.insert("11284873.580000");
    Leg_24.add_attribute("Fctr", "6688621.540000"); // 1
    Leg_24_set.insert("6688621.540000");
    Leg_24.add_attribute("CrdRtg", "LegCreditRating_t_1849267961"); // 1
    Leg_24_set.insert("LegCreditRating_t_1849267961");
    Leg_24.add_attribute("Rgstry", "LegInstrRegistry_t_1655561050"); // 1
    Leg_24_set.insert("LegInstrRegistry_t_1655561050");
    Leg_24.add_attribute("Ctry", "2096740738"); // 1
    Leg_24_set.insert("2096740738");
    Leg_24.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_737851685"); // 1
    Leg_24_set.insert("LegStateOrProvinceOfIssue_t_737851685");
    Leg_24.add_attribute("Lcl", "LegLocaleOfIssue_t_1425758803"); // 1
    Leg_24_set.insert("LegLocaleOfIssue_t_1425758803");
    Leg_24.add_attribute("Redeem", "LegRedemptionDate_t_2021406797"); // 1
    Leg_24_set.insert("LegRedemptionDate_t_2021406797");
    Leg_24.add_attribute("Strk", "14694292.930000"); // 1
    Leg_24_set.insert("14694292.930000");
    Leg_24.add_attribute("StrkCcy", "CHF"); // 1
    Leg_24_set.insert("CHF");
    Leg_24.add_attribute("OptA", "1562686349"); // 1
    Leg_24_set.insert("1562686349");
    Leg_24.add_attribute("Cmult", "16043196.750000"); // 1
    Leg_24_set.insert("16043196.750000");
    Leg_24.add_attribute("MultTyp", "2"); // 1
    Leg_24_set.insert("2");
    Leg_24.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_24_set.insert("3");
    Leg_24.add_attribute("UOM", "tn"); // 1
    Leg_24_set.insert("tn");
    Leg_24.add_attribute("UOMQty", "1184621.060000"); // 1
    Leg_24_set.insert("1184621.060000");
    Leg_24.add_attribute("PxUOM", "Gal"); // 1
    Leg_24_set.insert("Gal");
    Leg_24.add_attribute("PxUOMQty", "14392047.250000"); // 1
    Leg_24_set.insert("14392047.250000");
    Leg_24.add_attribute("TmUnit", "Wk"); // 1
    Leg_24_set.insert("Wk");
    Leg_24.add_attribute("ExerStyle", "0"); // 1
    Leg_24_set.insert("0");
    Leg_24.add_attribute("CpnRt", "17541700.720000"); // 1
    Leg_24_set.insert("17541700.720000");
    Leg_24.add_attribute("Exch", "LegSecurityExchange_t_894633700"); // 1
    Leg_24_set.insert("LegSecurityExchange_t_894633700");
    Leg_24.add_attribute("Issr", "LegIssuer_t_1071159666"); // 1
    Leg_24_set.insert("LegIssuer_t_1071159666");
    Leg_24.add_attribute("EncLegIssrLen", "404979699"); // 1
    Leg_24_set.insert("404979699");
    Leg_24.add_attribute("EncLegIssr", "EncodedLegIssuer_t_803343691"); // 1
    Leg_24_set.insert("EncodedLegIssuer_t_803343691");
    Leg_24.add_attribute("Desc", "LegSecurityDesc_t_367059428"); // 1
    Leg_24_set.insert("LegSecurityDesc_t_367059428");
    Leg_24.add_attribute("EncLegSecDescLen", "1307771187"); // 1
    Leg_24_set.insert("1307771187");
    Leg_24.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1140604174"); // 1
    Leg_24_set.insert("EncodedLegSecurityDesc_t_1140604174");
    Leg_24.add_attribute("RatioQty", "8709284.520000"); // 1
    Leg_24_set.insert("8709284.520000");
    Leg_24.add_attribute("Side", "8"); // 1
    Leg_24_set.insert("8");
    Leg_24.add_attribute("Ccy", "JPY"); // 1
    Leg_24_set.insert("JPY");
    Leg_24.add_attribute("Pool", "LegPool_t_628020048"); // 1
    Leg_24_set.insert("LegPool_t_628020048");
    Leg_24.add_attribute("Dated", "LegDatedDate_t_1777168934"); // 1
    Leg_24_set.insert("LegDatedDate_t_1777168934");
    Leg_24.add_attribute("CSetMo", "1489047696"); // 1
    Leg_24_set.insert("1489047696");
    Leg_24.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1365871733"); // 1
    Leg_24_set.insert("LegInterestAccrualDate_t_1365871733");
    Leg_24.add_attribute("PutCall", "1055444090"); // 1
    Leg_24_set.insert("1055444090");
    Leg_24.add_attribute("LegOptionRatio", "13629708.460000"); // 1
    Leg_24_set.insert("13629708.460000");
    Leg_24.add_attribute("Px", "6878173.780000"); // 1
    Leg_24_set.insert("6878173.780000");
    all_values.push_back(Leg_24_set);
    all_compo_names.insert("Leg_24_set");

    {
      xml_element LegAID_24{"LegAID"};
      multiset<string> LegAID_24_set;
      LegAID_24.add_attribute("SecAltID", "LegSecurityAltID_t_1967864031"); // 2
      LegAID_24_set.insert("LegSecurityAltID_t_1967864031");
      LegAID_24.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_24_set.insert("E");
      all_values.push_back(LegAID_24_set);
      all_compo_names.insert("LegAID_24_set");

      Leg_24.add_element(LegAID_24);
    }
    elt.add_element(Leg_24);
  } // end Leg
  { // Leg
    xml_element Leg_25{"Leg"};
    multiset<string> Leg_25_set;
    Leg_25.add_attribute("Sym", "LegSymbol_t_103020079"); // 1
    Leg_25_set.insert("LegSymbol_t_103020079");
    Leg_25.add_attribute("Sfx", "CD"); // 1
    Leg_25_set.insert("CD");
    Leg_25.add_attribute("ID", "LegSecurityID_t_79416072"); // 1
    Leg_25_set.insert("LegSecurityID_t_79416072");
    Leg_25.add_attribute("Src", "6"); // 1
    Leg_25_set.insert("6");
    Leg_25.add_attribute("Prod", "6"); // 1
    Leg_25_set.insert("6");
    Leg_25.add_attribute("CFI", "LegCFICode_t_197878178"); // 1
    Leg_25_set.insert("LegCFICode_t_197878178");
    Leg_25.add_attribute("SecTyp", "DEFLTED"); // 1
    Leg_25_set.insert("DEFLTED");
    Leg_25.add_attribute("SecSubTyp", "LegSecuritySubType_t_714035772"); // 1
    Leg_25_set.insert("LegSecuritySubType_t_714035772");
    Leg_25.add_attribute("MMY", "1355679645"); // 1
    Leg_25_set.insert("1355679645");
    Leg_25.add_attribute("Mat", "LegMaturityDate_t_1482132147"); // 1
    Leg_25_set.insert("LegMaturityDate_t_1482132147");
    Leg_25.add_attribute("MatTm", "320722197"); // 1
    Leg_25_set.insert("320722197");
    Leg_25.add_attribute("CpnPmt", "LegCouponPaymentDate_t_102829698"); // 1
    Leg_25_set.insert("LegCouponPaymentDate_t_102829698");
    Leg_25.add_attribute("Issued", "LegIssueDate_t_405808165"); // 1
    Leg_25_set.insert("LegIssueDate_t_405808165");
    Leg_25.add_attribute("RepoCollSecTyp", "725701896"); // 1
    Leg_25_set.insert("725701896");
    Leg_25.add_attribute("RepoTrm", "906173389"); // 1
    Leg_25_set.insert("906173389");
    Leg_25.add_attribute("RepoRt", "7728675.930000"); // 1
    Leg_25_set.insert("7728675.930000");
    Leg_25.add_attribute("Fctr", "20334730.830000"); // 1
    Leg_25_set.insert("20334730.830000");
    Leg_25.add_attribute("CrdRtg", "LegCreditRating_t_2046777564"); // 1
    Leg_25_set.insert("LegCreditRating_t_2046777564");
    Leg_25.add_attribute("Rgstry", "LegInstrRegistry_t_1643796046"); // 1
    Leg_25_set.insert("LegInstrRegistry_t_1643796046");
    Leg_25.add_attribute("Ctry", "812225170"); // 1
    Leg_25_set.insert("812225170");
    Leg_25.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_20901800"); // 1
    Leg_25_set.insert("LegStateOrProvinceOfIssue_t_20901800");
    Leg_25.add_attribute("Lcl", "LegLocaleOfIssue_t_1036103004"); // 1
    Leg_25_set.insert("LegLocaleOfIssue_t_1036103004");
    Leg_25.add_attribute("Redeem", "LegRedemptionDate_t_1440245218"); // 1
    Leg_25_set.insert("LegRedemptionDate_t_1440245218");
    Leg_25.add_attribute("Strk", "17980707.350000"); // 1
    Leg_25_set.insert("17980707.350000");
    Leg_25.add_attribute("StrkCcy", "GBP"); // 1
    Leg_25_set.insert("GBP");
    Leg_25.add_attribute("OptA", "706031177"); // 1
    Leg_25_set.insert("706031177");
    Leg_25.add_attribute("Cmult", "17406378.990000"); // 1
    Leg_25_set.insert("17406378.990000");
    Leg_25.add_attribute("MultTyp", "0"); // 1
    Leg_25_set.insert("0");
    Leg_25.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_25_set.insert("0");
    Leg_25.add_attribute("UOM", "MWh"); // 1
    Leg_25_set.insert("MWh");
    Leg_25.add_attribute("UOMQty", "14494707.620000"); // 1
    Leg_25_set.insert("14494707.620000");
    Leg_25.add_attribute("PxUOM", "MMBtu"); // 1
    Leg_25_set.insert("MMBtu");
    Leg_25.add_attribute("PxUOMQty", "9079677.960000"); // 1
    Leg_25_set.insert("9079677.960000");
    Leg_25.add_attribute("TmUnit", "Wk"); // 1
    Leg_25_set.insert("Wk");
    Leg_25.add_attribute("ExerStyle", "0"); // 1
    Leg_25_set.insert("0");
    Leg_25.add_attribute("CpnRt", "11058459.750000"); // 1
    Leg_25_set.insert("11058459.750000");
    Leg_25.add_attribute("Exch", "LegSecurityExchange_t_56456201"); // 1
    Leg_25_set.insert("LegSecurityExchange_t_56456201");
    Leg_25.add_attribute("Issr", "LegIssuer_t_1939978438"); // 1
    Leg_25_set.insert("LegIssuer_t_1939978438");
    Leg_25.add_attribute("EncLegIssrLen", "314041972"); // 1
    Leg_25_set.insert("314041972");
    Leg_25.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1538588348"); // 1
    Leg_25_set.insert("EncodedLegIssuer_t_1538588348");
    Leg_25.add_attribute("Desc", "LegSecurityDesc_t_113216987"); // 1
    Leg_25_set.insert("LegSecurityDesc_t_113216987");
    Leg_25.add_attribute("EncLegSecDescLen", "416871670"); // 1
    Leg_25_set.insert("416871670");
    Leg_25.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1944396514"); // 1
    Leg_25_set.insert("EncodedLegSecurityDesc_t_1944396514");
    Leg_25.add_attribute("RatioQty", "8389188.830000"); // 1
    Leg_25_set.insert("8389188.830000");
    Leg_25.add_attribute("Side", "5"); // 1
    Leg_25_set.insert("5");
    Leg_25.add_attribute("Ccy", "USD"); // 1
    Leg_25_set.insert("USD");
    Leg_25.add_attribute("Pool", "LegPool_t_1222338976"); // 1
    Leg_25_set.insert("LegPool_t_1222338976");
    Leg_25.add_attribute("Dated", "LegDatedDate_t_66092857"); // 1
    Leg_25_set.insert("LegDatedDate_t_66092857");
    Leg_25.add_attribute("CSetMo", "1537133488"); // 1
    Leg_25_set.insert("1537133488");
    Leg_25.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1243240776"); // 1
    Leg_25_set.insert("LegInterestAccrualDate_t_1243240776");
    Leg_25.add_attribute("PutCall", "1102195862"); // 1
    Leg_25_set.insert("1102195862");
    Leg_25.add_attribute("LegOptionRatio", "8298950.580000"); // 1
    Leg_25_set.insert("8298950.580000");
    Leg_25.add_attribute("Px", "8938278.630000"); // 1
    Leg_25_set.insert("8938278.630000");
    all_values.push_back(Leg_25_set);
    all_compo_names.insert("Leg_25_set");

    {
      xml_element LegAID_25{"LegAID"};
      multiset<string> LegAID_25_set;
      LegAID_25.add_attribute("SecAltID", "LegSecurityAltID_t_1479862915"); // 2
      LegAID_25_set.insert("LegSecurityAltID_t_1479862915");
      LegAID_25.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_25_set.insert("3");
      all_values.push_back(LegAID_25_set);
      all_compo_names.insert("LegAID_25_set");

      Leg_25.add_element(LegAID_25);
    }
    elt.add_element(Leg_25);
  } // end Leg
  { // Leg
    xml_element Leg_26{"Leg"};
    multiset<string> Leg_26_set;
    Leg_26.add_attribute("Sym", "LegSymbol_t_1599859040"); // 1
    Leg_26_set.insert("LegSymbol_t_1599859040");
    Leg_26.add_attribute("Sfx", "CD"); // 1
    Leg_26_set.insert("CD");
    Leg_26.add_attribute("ID", "LegSecurityID_t_687495397"); // 1
    Leg_26_set.insert("LegSecurityID_t_687495397");
    Leg_26.add_attribute("Src", "F"); // 1
    Leg_26_set.insert("F");
    Leg_26.add_attribute("Prod", "1"); // 1
    Leg_26_set.insert("1");
    Leg_26.add_attribute("CFI", "LegCFICode_t_2136966159"); // 1
    Leg_26_set.insert("LegCFICode_t_2136966159");
    Leg_26.add_attribute("SecTyp", "TBA"); // 1
    Leg_26_set.insert("TBA");
    Leg_26.add_attribute("SecSubTyp", "LegSecuritySubType_t_662053039"); // 1
    Leg_26_set.insert("LegSecuritySubType_t_662053039");
    Leg_26.add_attribute("MMY", "419772718"); // 1
    Leg_26_set.insert("419772718");
    Leg_26.add_attribute("Mat", "LegMaturityDate_t_1008357588"); // 1
    Leg_26_set.insert("LegMaturityDate_t_1008357588");
    Leg_26.add_attribute("MatTm", "1767899014"); // 1
    Leg_26_set.insert("1767899014");
    Leg_26.add_attribute("CpnPmt", "LegCouponPaymentDate_t_476228919"); // 1
    Leg_26_set.insert("LegCouponPaymentDate_t_476228919");
    Leg_26.add_attribute("Issued", "LegIssueDate_t_800852378"); // 1
    Leg_26_set.insert("LegIssueDate_t_800852378");
    Leg_26.add_attribute("RepoCollSecTyp", "2081940986"); // 1
    Leg_26_set.insert("2081940986");
    Leg_26.add_attribute("RepoTrm", "2014817268"); // 1
    Leg_26_set.insert("2014817268");
    Leg_26.add_attribute("RepoRt", "9140693.650000"); // 1
    Leg_26_set.insert("9140693.650000");
    Leg_26.add_attribute("Fctr", "3513290.090000"); // 1
    Leg_26_set.insert("3513290.090000");
    Leg_26.add_attribute("CrdRtg", "LegCreditRating_t_1811730134"); // 1
    Leg_26_set.insert("LegCreditRating_t_1811730134");
    Leg_26.add_attribute("Rgstry", "LegInstrRegistry_t_1752988248"); // 1
    Leg_26_set.insert("LegInstrRegistry_t_1752988248");
    Leg_26.add_attribute("Ctry", "1674374069"); // 1
    Leg_26_set.insert("1674374069");
    Leg_26.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_234026945"); // 1
    Leg_26_set.insert("LegStateOrProvinceOfIssue_t_234026945");
    Leg_26.add_attribute("Lcl", "LegLocaleOfIssue_t_330412918"); // 1
    Leg_26_set.insert("LegLocaleOfIssue_t_330412918");
    Leg_26.add_attribute("Redeem", "LegRedemptionDate_t_749229397"); // 1
    Leg_26_set.insert("LegRedemptionDate_t_749229397");
    Leg_26.add_attribute("Strk", "3001198.030000"); // 1
    Leg_26_set.insert("3001198.030000");
    Leg_26.add_attribute("StrkCcy", "EUR"); // 1
    Leg_26_set.insert("EUR");
    Leg_26.add_attribute("OptA", "1402315665"); // 1
    Leg_26_set.insert("1402315665");
    Leg_26.add_attribute("Cmult", "5499578.160000"); // 1
    Leg_26_set.insert("5499578.160000");
    Leg_26.add_attribute("MultTyp", "0"); // 1
    Leg_26_set.insert("0");
    Leg_26.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_26_set.insert("2");
    Leg_26.add_attribute("UOM", "Bbl"); // 1
    Leg_26_set.insert("Bbl");
    Leg_26.add_attribute("UOMQty", "1911897.810000"); // 1
    Leg_26_set.insert("1911897.810000");
    Leg_26.add_attribute("PxUOM", "Bcf"); // 1
    Leg_26_set.insert("Bcf");
    Leg_26.add_attribute("PxUOMQty", "5784979.280000"); // 1
    Leg_26_set.insert("5784979.280000");
    Leg_26.add_attribute("TmUnit", "Wk"); // 1
    Leg_26_set.insert("Wk");
    Leg_26.add_attribute("ExerStyle", "1"); // 1
    Leg_26_set.insert("1");
    Leg_26.add_attribute("CpnRt", "5679804.390000"); // 1
    Leg_26_set.insert("5679804.390000");
    Leg_26.add_attribute("Exch", "LegSecurityExchange_t_2099875304"); // 1
    Leg_26_set.insert("LegSecurityExchange_t_2099875304");
    Leg_26.add_attribute("Issr", "LegIssuer_t_76366731"); // 1
    Leg_26_set.insert("LegIssuer_t_76366731");
    Leg_26.add_attribute("EncLegIssrLen", "987753157"); // 1
    Leg_26_set.insert("987753157");
    Leg_26.add_attribute("EncLegIssr", "EncodedLegIssuer_t_960749244"); // 1
    Leg_26_set.insert("EncodedLegIssuer_t_960749244");
    Leg_26.add_attribute("Desc", "LegSecurityDesc_t_1844265745"); // 1
    Leg_26_set.insert("LegSecurityDesc_t_1844265745");
    Leg_26.add_attribute("EncLegSecDescLen", "1463982076"); // 1
    Leg_26_set.insert("1463982076");
    Leg_26.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1761601622"); // 1
    Leg_26_set.insert("EncodedLegSecurityDesc_t_1761601622");
    Leg_26.add_attribute("RatioQty", "17787230.840000"); // 1
    Leg_26_set.insert("17787230.840000");
    Leg_26.add_attribute("Side", "1"); // 1
    Leg_26_set.insert("1");
    Leg_26.add_attribute("Ccy", "EUR"); // 1
    Leg_26_set.insert("EUR");
    Leg_26.add_attribute("Pool", "LegPool_t_995562182"); // 1
    Leg_26_set.insert("LegPool_t_995562182");
    Leg_26.add_attribute("Dated", "LegDatedDate_t_133691939"); // 1
    Leg_26_set.insert("LegDatedDate_t_133691939");
    Leg_26.add_attribute("CSetMo", "1656942514"); // 1
    Leg_26_set.insert("1656942514");
    Leg_26.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1229589128"); // 1
    Leg_26_set.insert("LegInterestAccrualDate_t_1229589128");
    Leg_26.add_attribute("PutCall", "464104857"); // 1
    Leg_26_set.insert("464104857");
    Leg_26.add_attribute("LegOptionRatio", "2586882.630000"); // 1
    Leg_26_set.insert("2586882.630000");
    Leg_26.add_attribute("Px", "15297089.310000"); // 1
    Leg_26_set.insert("15297089.310000");
    all_values.push_back(Leg_26_set);
    all_compo_names.insert("Leg_26_set");

    {
      xml_element LegAID_26{"LegAID"};
      multiset<string> LegAID_26_set;
      LegAID_26.add_attribute("SecAltID", "LegSecurityAltID_t_184167615"); // 2
      LegAID_26_set.insert("LegSecurityAltID_t_184167615");
      LegAID_26.add_attribute("SecAltIDSrc", "9"); // 2
      LegAID_26_set.insert("9");
      all_values.push_back(LegAID_26_set);
      all_compo_names.insert("LegAID_26_set");

      Leg_26.add_element(LegAID_26);
    }
    elt.add_element(Leg_26);
  } // end Leg
  { // DsplyInstr
    xml_element DsplyInstr_0{"DsplyInstr"};
    multiset<string> DsplyInstr_0_set;
    DsplyInstr_0.add_attribute("DisplayQty", "7845409.480000"); // 1
    DsplyInstr_0_set.insert("7845409.480000");
    DsplyInstr_0.add_attribute("SecDspQty", "7341254.320000"); // 1
    DsplyInstr_0_set.insert("7341254.320000");
    DsplyInstr_0.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_0_set.insert("2");
    DsplyInstr_0.add_attribute("DspMthd", "1"); // 1
    DsplyInstr_0_set.insert("1");
    DsplyInstr_0.add_attribute("DsplLwQty", "6251279.630000"); // 1
    DsplyInstr_0_set.insert("6251279.630000");
    DsplyInstr_0.add_attribute("DisplayHighQty", "10336789.590000"); // 1
    DsplyInstr_0_set.insert("10336789.590000");
    DsplyInstr_0.add_attribute("DspMinIncr", "11794643.300000"); // 1
    DsplyInstr_0_set.insert("11794643.300000");
    DsplyInstr_0.add_attribute("RfrshQty", "12036258.910000"); // 1
    DsplyInstr_0_set.insert("12036258.910000");
    all_values.push_back(DsplyInstr_0_set);
    all_compo_names.insert("DsplyInstr_0_set");

    elt.add_element(DsplyInstr_0);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_0{"TrdSes"};
    multiset<string> TrdSes_0_set;
    TrdSes_0.add_attribute("SesID", "5"); // 1
    TrdSes_0_set.insert("5");
    TrdSes_0.add_attribute("SesSub", "5"); // 1
    TrdSes_0_set.insert("5");
    all_values.push_back(TrdSes_0_set);
    all_compo_names.insert("TrdSes_0_set");

    elt.add_element(TrdSes_0);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_1{"TrdSes"};
    multiset<string> TrdSes_1_set;
    TrdSes_1.add_attribute("SesID", "2"); // 1
    TrdSes_1_set.insert("2");
    TrdSes_1.add_attribute("SesSub", "7"); // 1
    TrdSes_1_set.insert("7");
    all_values.push_back(TrdSes_1_set);
    all_compo_names.insert("TrdSes_1_set");

    elt.add_element(TrdSes_1);
  } // end TrdSes
  { // Stip
    xml_element Stip_43{"Stip"};
    multiset<string> Stip_43_set;
    Stip_43.add_attribute("Typ", "PPM"); // 1
    Stip_43_set.insert("PPM");
    Stip_43.add_attribute("Val", "StipulationValue_t_366926851"); // 1
    Stip_43_set.insert("StipulationValue_t_366926851");
    all_values.push_back(Stip_43_set);
    all_compo_names.insert("Stip_43_set");

    elt.add_element(Stip_43);
  } // end Stip
  { // TrgrInstr
    xml_element TrgrInstr_0{"TrgrInstr"};
    multiset<string> TrgrInstr_0_set;
    TrgrInstr_0.add_attribute("TrgrTyp", "4"); // 1
    TrgrInstr_0_set.insert("4");
    TrgrInstr_0.add_attribute("TrgrActn", "3"); // 1
    TrgrInstr_0_set.insert("3");
    TrgrInstr_0.add_attribute("TrgrPx", "21456499.350000"); // 1
    TrgrInstr_0_set.insert("21456499.350000");
    TrgrInstr_0.add_attribute("TrgrSym", "TriggerSymbol_t_1259689964"); // 1
    TrgrInstr_0_set.insert("TriggerSymbol_t_1259689964");
    TrgrInstr_0.add_attribute("TrgrSecID", "TriggerSecurityID_t_111618260"); // 1
    TrgrInstr_0_set.insert("TriggerSecurityID_t_111618260");
    TrgrInstr_0.add_attribute("TrgrSecIDSrc", "3"); // 1
    TrgrInstr_0_set.insert("3");
    TrgrInstr_0.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_107768498"); // 1
    TrgrInstr_0_set.insert("TriggerSecurityDesc_t_107768498");
    TrgrInstr_0.add_attribute("TrgrPxTyp", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrPxTypScp", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_0_set.insert("U");
    TrgrInstr_0.add_attribute("TrgrNewPx", "7094150.570000"); // 1
    TrgrInstr_0_set.insert("7094150.570000");
    TrgrInstr_0.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrNewQty", "7195829.090000"); // 1
    TrgrInstr_0_set.insert("7195829.090000");
    TrgrInstr_0.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_893582672"); // 1
    TrgrInstr_0_set.insert("TriggerTradingSessionID_t_893582672");
    TrgrInstr_0.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_2000040298"); // 1
    TrgrInstr_0_set.insert("TriggerTradingSessionSubID_t_2000040298");
    all_values.push_back(TrgrInstr_0_set);
    all_compo_names.insert("TrgrInstr_0_set");

    elt.add_element(TrgrInstr_0);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_9{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_9_set;
    SprdBnchmkCurve_9.add_attribute("Spread", "15041238.570000"); // 1
    SprdBnchmkCurve_9_set.insert("15041238.570000");
    SprdBnchmkCurve_9.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_9_set.insert("EUR");
    SprdBnchmkCurve_9.add_attribute("Name", "EUREPO"); // 1
    SprdBnchmkCurve_9_set.insert("EUREPO");
    SprdBnchmkCurve_9.add_attribute("Point", "BenchmarkCurvePoint_t_105352419"); // 1
    SprdBnchmkCurve_9_set.insert("BenchmarkCurvePoint_t_105352419");
    SprdBnchmkCurve_9.add_attribute("Px", "17287247.860000"); // 1
    SprdBnchmkCurve_9_set.insert("17287247.860000");
    SprdBnchmkCurve_9.add_attribute("PxTyp", "17"); // 1
    SprdBnchmkCurve_9_set.insert("17");
    SprdBnchmkCurve_9.add_attribute("SecID", "BenchmarkSecurityID_t_1308978310"); // 1
    SprdBnchmkCurve_9_set.insert("BenchmarkSecurityID_t_1308978310");
    SprdBnchmkCurve_9.add_attribute("SecIDSrc", "G"); // 1
    SprdBnchmkCurve_9_set.insert("G");
    all_values.push_back(SprdBnchmkCurve_9_set);
    all_compo_names.insert("SprdBnchmkCurve_9_set");

    elt.add_element(SprdBnchmkCurve_9);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_4{"Yield"};
    multiset<string> Yield_4_set;
    Yield_4.add_attribute("Typ", "LONGAVGLIFE"); // 1
    Yield_4_set.insert("LONGAVGLIFE");
    Yield_4.add_attribute("Yld", "9331009.920000"); // 1
    Yield_4_set.insert("9331009.920000");
    Yield_4.add_attribute("CalcDt", "YieldCalcDate_t_1940944181"); // 1
    Yield_4_set.insert("YieldCalcDate_t_1940944181");
    Yield_4.add_attribute("RedDt", "YieldRedemptionDate_t_1171779548"); // 1
    Yield_4_set.insert("YieldRedemptionDate_t_1171779548");
    Yield_4.add_attribute("RedPx", "15449768.310000"); // 1
    Yield_4_set.insert("15449768.310000");
    Yield_4.add_attribute("RedPxTyp", "19"); // 1
    Yield_4_set.insert("19");
    all_values.push_back(Yield_4_set);
    all_compo_names.insert("Yield_4_set");

    elt.add_element(Yield_4);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_0{"PegInstr"};
    multiset<string> PegInstr_0_set;
    PegInstr_0.add_attribute("OfstVal", "15387063.990000"); // 1
    PegInstr_0_set.insert("15387063.990000");
    PegInstr_0.add_attribute("PegPxTyp", "4"); // 1
    PegInstr_0_set.insert("4");
    PegInstr_0.add_attribute("MoveTyp", "1"); // 1
    PegInstr_0_set.insert("1");
    PegInstr_0.add_attribute("OfstTyp", "3"); // 1
    PegInstr_0_set.insert("3");
    PegInstr_0.add_attribute("LmtTyp", "0"); // 1
    PegInstr_0_set.insert("0");
    PegInstr_0.add_attribute("RndDir", "2"); // 1
    PegInstr_0_set.insert("2");
    PegInstr_0.add_attribute("Scope", "4"); // 1
    PegInstr_0_set.insert("4");
    PegInstr_0.add_attribute("PegSecurityIDSource", "6"); // 1
    PegInstr_0_set.insert("6");
    PegInstr_0.add_attribute("PegSecID", "PegSecurityID_t_1850616507"); // 1
    PegInstr_0_set.insert("PegSecurityID_t_1850616507");
    PegInstr_0.add_attribute("PgSymbl", "PegSymbol_t_1007801018"); // 1
    PegInstr_0_set.insert("PegSymbol_t_1007801018");
    PegInstr_0.add_attribute("PegSecDesc", "PegSecurityDesc_t_2030683540"); // 1
    PegInstr_0_set.insert("PegSecurityDesc_t_2030683540");
    all_values.push_back(PegInstr_0_set);
    all_compo_names.insert("PegInstr_0_set");

    elt.add_element(PegInstr_0);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_0{"DiscInstr"};
    multiset<string> DiscInstr_0_set;
    DiscInstr_0.add_attribute("DsctnInst", "4"); // 1
    DiscInstr_0_set.insert("4");
    DiscInstr_0.add_attribute("OfstValu", "7566828.790000"); // 1
    DiscInstr_0_set.insert("7566828.790000");
    DiscInstr_0.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_0_set.insert("1");
    DiscInstr_0.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_0_set.insert("0");
    DiscInstr_0.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_0_set.insert("0");
    DiscInstr_0.add_attribute("RndDir", "2"); // 1
    DiscInstr_0_set.insert("2");
    DiscInstr_0.add_attribute("Scope", "2"); // 1
    DiscInstr_0_set.insert("2");
    all_values.push_back(DiscInstr_0_set);
    all_compo_names.insert("DiscInstr_0_set");

    elt.add_element(DiscInstr_0);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_0{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_0_set;
    StrtPrmGrp_0.add_attribute("StrtPrmNme", "StrategyParameterName_t_835299100"); // 1
    StrtPrmGrp_0_set.insert("StrategyParameterName_t_835299100");
    StrtPrmGrp_0.add_attribute("StrtPrmTyp", "8"); // 1
    StrtPrmGrp_0_set.insert("8");
    StrtPrmGrp_0.add_attribute("StrtPrmVal", "StrategyParameterValue_t_885526495"); // 1
    StrtPrmGrp_0_set.insert("StrategyParameterValue_t_885526495");
    all_values.push_back(StrtPrmGrp_0_set);
    all_compo_names.insert("StrtPrmGrp_0_set");

    elt.add_element(StrtPrmGrp_0);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_1{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_1_set;
    StrtPrmGrp_1.add_attribute("StrtPrmNme", "StrategyParameterName_t_743155872"); // 1
    StrtPrmGrp_1_set.insert("StrategyParameterName_t_743155872");
    StrtPrmGrp_1.add_attribute("StrtPrmTyp", "4"); // 1
    StrtPrmGrp_1_set.insert("4");
    StrtPrmGrp_1.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1670423327"); // 1
    StrtPrmGrp_1_set.insert("StrategyParameterValue_t_1670423327");
    all_values.push_back(StrtPrmGrp_1_set);
    all_compo_names.insert("StrtPrmGrp_1_set");

    elt.add_element(StrtPrmGrp_1);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_2{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_2_set;
    StrtPrmGrp_2.add_attribute("StrtPrmNme", "StrategyParameterName_t_1244790666"); // 1
    StrtPrmGrp_2_set.insert("StrategyParameterName_t_1244790666");
    StrtPrmGrp_2.add_attribute("StrtPrmTyp", "12"); // 1
    StrtPrmGrp_2_set.insert("12");
    StrtPrmGrp_2.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1463883860"); // 1
    StrtPrmGrp_2_set.insert("StrategyParameterValue_t_1463883860");
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
