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
  elt.add_attribute("OrdID", "OrderID_t_902384060"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("OrderID_t_902384060");
  elt.add_attribute("ID", "CrossID_t_2112693341"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("CrossID_t_2112693341");
  elt.add_attribute("OrigID", "OrigCrossID_t_1503013402"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("OrigCrossID_t_1503013402");
  elt.add_attribute("HstCxID", "HostCrossID_t_1027132992"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("HostCrossID_t_1027132992");
  elt.add_attribute("Typ", "4"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("4");
  elt.add_attribute("Priorty", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("SettlTyp", "8"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("8");
  elt.add_attribute("SettlDt", "SettlDate_t_1670277828"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("SettlDate_t_1670277828");
  elt.add_attribute("HandlInst", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("ExecInst", "9"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("9");
  elt.add_attribute("MinQty", "1949342.640000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1949342.640000");
  elt.add_attribute("MtchInc", "12270378.730000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("12270378.730000");
  elt.add_attribute("MxPxLvls", "409129771"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("409129771");
  elt.add_attribute("MaxFloor", "16022439.880000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("16022439.880000");
  elt.add_attribute("ExDest", "ExDestination_t_1085632521"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExDestination_t_1085632521");
  elt.add_attribute("ExDestIDSrc", "C"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("C");
  elt.add_attribute("ProcCode", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("PrevClsPx", "12532018.720000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("12532018.720000");
  elt.add_attribute("LocReqd", "Y"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_1685894916"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TransactTime_t_1685894916");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1233367858"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TransBkdTime_t_1233367858");
  elt.add_attribute("OrdTyp", "D"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("D");
  elt.add_attribute("PxTyp", "14"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("14");
  elt.add_attribute("Px", "14492936.670000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("14492936.670000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("StopPx", "5885633.630000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("5885633.630000");
  elt.add_attribute("Ccy", "CHF"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("CHF");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1293528960"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ComplianceID_t_1293528960");
  elt.add_attribute("IOIID", "IOIID_t_1013375995"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("IOIID_t_1013375995");
  elt.add_attribute("QID", "QuoteID_t_1274117078"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("QuoteID_t_1274117078");
  elt.add_attribute("TmInForce", "2"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("2");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_978585688"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("EffectiveTime_t_978585688");
  elt.add_attribute("ExpireDt", "ExpireDate_t_629646833"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExpireDate_t_629646833");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1075562365"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("ExpireTime_t_1075562365");
  elt.add_attribute("GTBkngInst", "1"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("MaxShow", "6255955.730000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("6255955.730000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_707533823"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("TargetStrategyParameters_t_707533823");
  elt.add_attribute("ParticipationRt", "15604391.910000"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("15604391.910000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "N"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("N");
  elt.add_attribute("RegistID", "RegistID_t_639993416"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("RegistID_t_639993416");
  elt.add_attribute("Designation", "Designation_t_219017530"); // 0
  CrossOrderCancelReplaceRequest_message_t_0.insert("Designation_t_219017530");
  all_values.push_back(CrossOrderCancelReplaceRequest_message_t_0);
  all_compo_names.insert("CrossOrderCancelReplaceRequest_message_t");

  { // Hdr
    xml_element Hdr_24{"Hdr"};
    multiset<string> Hdr_24_set;
    Hdr_24.add_attribute("SeqNum", "357228428"); // 1
    Hdr_24_set.insert("357228428");
    Hdr_24.add_attribute("SID", "SenderCompID_t_1725625937"); // 1
    Hdr_24_set.insert("SenderCompID_t_1725625937");
    Hdr_24.add_attribute("TID", "TargetCompID_t_2106403131"); // 1
    Hdr_24_set.insert("TargetCompID_t_2106403131");
    Hdr_24.add_attribute("OBID", "OnBehalfOfCompID_t_1080904174"); // 1
    Hdr_24_set.insert("OnBehalfOfCompID_t_1080904174");
    Hdr_24.add_attribute("D2ID", "DeliverToCompID_t_831344161"); // 1
    Hdr_24_set.insert("DeliverToCompID_t_831344161");
    Hdr_24.add_attribute("SSub", "SenderSubID_t_1688519560"); // 1
    Hdr_24_set.insert("SenderSubID_t_1688519560");
    Hdr_24.add_attribute("SLoc", "SenderLocationID_t_619315442"); // 1
    Hdr_24_set.insert("SenderLocationID_t_619315442");
    Hdr_24.add_attribute("TSub", "TargetSubID_t_2064712019"); // 1
    Hdr_24_set.insert("TargetSubID_t_2064712019");
    Hdr_24.add_attribute("TLoc", "TargetLocationID_t_256757372"); // 1
    Hdr_24_set.insert("TargetLocationID_t_256757372");
    Hdr_24.add_attribute("OBSub", "OnBehalfOfSubID_t_434732400"); // 1
    Hdr_24_set.insert("OnBehalfOfSubID_t_434732400");
    Hdr_24.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1366522038"); // 1
    Hdr_24_set.insert("OnBehalfOfLocationID_t_1366522038");
    Hdr_24.add_attribute("D2Sub", "DeliverToSubID_t_974738686"); // 1
    Hdr_24_set.insert("DeliverToSubID_t_974738686");
    Hdr_24.add_attribute("D2Loc", "DeliverToLocationID_t_1023295763"); // 1
    Hdr_24_set.insert("DeliverToLocationID_t_1023295763");
    Hdr_24.add_attribute("PosDup", "Y"); // 1
    Hdr_24_set.insert("Y");
    Hdr_24.add_attribute("PosRsnd", "N"); // 1
    Hdr_24_set.insert("N");
    Hdr_24.add_attribute("Snt", "SendingTime_t_169341076"); // 1
    Hdr_24_set.insert("SendingTime_t_169341076");
    Hdr_24.add_attribute("OrigSnt", "OrigSendingTime_t_819509142"); // 1
    Hdr_24_set.insert("OrigSendingTime_t_819509142");
    Hdr_24.add_attribute("MsgEncd", "MessageEncoding_t_1476120464"); // 1
    Hdr_24_set.insert("MessageEncoding_t_1476120464");
    all_values.push_back(Hdr_24_set);
    all_compo_names.insert("Hdr_24_set");

    {
      xml_element Hop_24{"Hop"};
      multiset<string> Hop_24_set;
      Hop_24.add_attribute("ID", "HopCompID_t_217770448"); // 2
      Hop_24_set.insert("HopCompID_t_217770448");
      Hop_24.add_attribute("Ref", "1798094830"); // 2
      Hop_24_set.insert("1798094830");
      Hop_24.add_attribute("Snt", "HopSendingTime_t_2105767297"); // 2
      Hop_24_set.insert("HopSendingTime_t_2105767297");
      all_values.push_back(Hop_24_set);
      all_compo_names.insert("Hop_24_set");

      Hdr_24.add_element(Hop_24);
    }
    elt.add_element(Hdr_24);
  } // end Hdr
  { // Pty
    xml_element Pty_102{"Pty"};
    multiset<string> Pty_102_set;
    Pty_102.add_attribute("ID", "RootPartyID_t_835350826"); // 1
    Pty_102_set.insert("RootPartyID_t_835350826");
    Pty_102.add_attribute("Src", "B"); // 1
    Pty_102_set.insert("B");
    Pty_102.add_attribute("R", "69"); // 1
    Pty_102_set.insert("69");
    all_values.push_back(Pty_102_set);
    all_compo_names.insert("Pty_102_set");

    {
      xml_element Sub_102{"Sub"};
      multiset<string> Sub_102_set;
      Sub_102.add_attribute("ID", "RootPartySubID_t_1542884649"); // 2
      Sub_102_set.insert("RootPartySubID_t_1542884649");
      Sub_102.add_attribute("Typ", "29"); // 2
      Sub_102_set.insert("29");
      all_values.push_back(Sub_102_set);
      all_compo_names.insert("Sub_102_set");

      Pty_102.add_element(Sub_102);
    }
    elt.add_element(Pty_102);
  } // end Pty
  { // Pty
    xml_element Pty_103{"Pty"};
    multiset<string> Pty_103_set;
    Pty_103.add_attribute("ID", "RootPartyID_t_853163458"); // 1
    Pty_103_set.insert("RootPartyID_t_853163458");
    Pty_103.add_attribute("Src", "E"); // 1
    Pty_103_set.insert("E");
    Pty_103.add_attribute("R", "76"); // 1
    Pty_103_set.insert("76");
    all_values.push_back(Pty_103_set);
    all_compo_names.insert("Pty_103_set");

    {
      xml_element Sub_103{"Sub"};
      multiset<string> Sub_103_set;
      Sub_103.add_attribute("ID", "RootPartySubID_t_1072180988"); // 2
      Sub_103_set.insert("RootPartySubID_t_1072180988");
      Sub_103.add_attribute("Typ", "32"); // 2
      Sub_103_set.insert("32");
      all_values.push_back(Sub_103_set);
      all_compo_names.insert("Sub_103_set");

      Pty_103.add_element(Sub_103);
    }
    elt.add_element(Pty_103);
  } // end Pty
  { // Pty
    xml_element Pty_104{"Pty"};
    multiset<string> Pty_104_set;
    Pty_104.add_attribute("ID", "RootPartyID_t_214970471"); // 1
    Pty_104_set.insert("RootPartyID_t_214970471");
    Pty_104.add_attribute("Src", "A"); // 1
    Pty_104_set.insert("A");
    Pty_104.add_attribute("R", "70"); // 1
    Pty_104_set.insert("70");
    all_values.push_back(Pty_104_set);
    all_compo_names.insert("Pty_104_set");

    {
      xml_element Sub_104{"Sub"};
      multiset<string> Sub_104_set;
      Sub_104.add_attribute("ID", "RootPartySubID_t_1046314633"); // 2
      Sub_104_set.insert("RootPartySubID_t_1046314633");
      Sub_104.add_attribute("Typ", "14"); // 2
      Sub_104_set.insert("14");
      all_values.push_back(Sub_104_set);
      all_compo_names.insert("Sub_104_set");

      Pty_104.add_element(Sub_104);
    }
    elt.add_element(Pty_104);
  } // end Pty
  { // SideCrossMod
    xml_element SideCrossMod_0{"SideCrossMod"};
    multiset<string> SideCrossMod_0_set;
    SideCrossMod_0.add_attribute("Side", "D"); // 1
    SideCrossMod_0_set.insert("D");
    SideCrossMod_0.add_attribute("OrigClOrdID", "OrigClOrdID_t_828893755"); // 1
    SideCrossMod_0_set.insert("OrigClOrdID_t_828893755");
    SideCrossMod_0.add_attribute("ClOrdID", "ClOrdID_t_642565886"); // 1
    SideCrossMod_0_set.insert("ClOrdID_t_642565886");
    SideCrossMod_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_182581395"); // 1
    SideCrossMod_0_set.insert("SecondaryClOrdID_t_182581395");
    SideCrossMod_0.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1803632442"); // 1
    SideCrossMod_0_set.insert("ClOrdLinkID_t_1803632442");
    SideCrossMod_0.add_attribute("OrignDt", "TradeOriginationDate_t_1665861649"); // 1
    SideCrossMod_0_set.insert("TradeOriginationDate_t_1665861649");
    SideCrossMod_0.add_attribute("TrdDt", "TradeDate_t_2136198190"); // 1
    SideCrossMod_0_set.insert("TradeDate_t_2136198190");
    SideCrossMod_0.add_attribute("Acct", "Account_t_2005635828"); // 1
    SideCrossMod_0_set.insert("Account_t_2005635828");
    SideCrossMod_0.add_attribute("AcctIDSrc", "99"); // 1
    SideCrossMod_0_set.insert("99");
    SideCrossMod_0.add_attribute("AcctTyp", "4"); // 1
    SideCrossMod_0_set.insert("4");
    SideCrossMod_0.add_attribute("DayBkngInst", "0"); // 1
    SideCrossMod_0_set.insert("0");
    SideCrossMod_0.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("PreallocMeth", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("AllocID", "AllocID_t_1292556294"); // 1
    SideCrossMod_0_set.insert("AllocID_t_1292556294");
    SideCrossMod_0.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("Cpcty", "P"); // 1
    SideCrossMod_0_set.insert("P");
    SideCrossMod_0.add_attribute("Rstctions", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("PrTrdAnon", "true"); // 1
    SideCrossMod_0_set.insert("true");
    SideCrossMod_0.add_attribute("CustCpcty", "4"); // 1
    SideCrossMod_0_set.insert("4");
    SideCrossMod_0.add_attribute("ForexReq", "N"); // 1
    SideCrossMod_0_set.insert("N");
    SideCrossMod_0.add_attribute("SettlCcy", "USD"); // 1
    SideCrossMod_0_set.insert("USD");
    SideCrossMod_0.add_attribute("BkngTyp", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("Txt", "Text_t_2019958836"); // 1
    SideCrossMod_0_set.insert("Text_t_2019958836");
    SideCrossMod_0.add_attribute("EncTxtLen", "1642553302"); // 1
    SideCrossMod_0_set.insert("1642553302");
    SideCrossMod_0.add_attribute("EncTxt", "EncodedText_t_577585287"); // 1
    SideCrossMod_0_set.insert("EncodedText_t_577585287");
    SideCrossMod_0.add_attribute("PosEfct", "F"); // 1
    SideCrossMod_0_set.insert("F");
    SideCrossMod_0.add_attribute("Covered", "0"); // 1
    SideCrossMod_0_set.insert("0");
    SideCrossMod_0.add_attribute("CshMgn", "2"); // 1
    SideCrossMod_0_set.insert("2");
    SideCrossMod_0.add_attribute("ClrFeeInd", "1"); // 1
    SideCrossMod_0_set.insert("1");
    SideCrossMod_0.add_attribute("SolFlag", "N"); // 1
    SideCrossMod_0_set.insert("N");
    SideCrossMod_0.add_attribute("SideComplianceID", "SideComplianceID_t_439959277"); // 1
    SideCrossMod_0_set.insert("SideComplianceID_t_439959277");
    SideCrossMod_0.add_attribute("SideTmFrc", "SideTimeInForce_t_157122150"); // 1
    SideCrossMod_0_set.insert("SideTimeInForce_t_157122150");
    all_values.push_back(SideCrossMod_0_set);
    all_compo_names.insert("SideCrossMod_0_set");

    {
      xml_element Pty_105{"Pty"};
      multiset<string> Pty_105_set;
      Pty_105.add_attribute("ID", "PartyID_t_2081470718"); // 2
      Pty_105_set.insert("PartyID_t_2081470718");
      Pty_105.add_attribute("Src", "H"); // 2
      Pty_105_set.insert("H");
      Pty_105.add_attribute("R", "51"); // 2
      Pty_105_set.insert("51");
      all_values.push_back(Pty_105_set);
      all_compo_names.insert("Pty_105_set");

      {
        xml_element Sub_105{"Sub"};
        multiset<string> Sub_105_set;
        Sub_105.add_attribute("ID", "PartySubID_t_1599848720"); // 3
        Sub_105_set.insert("PartySubID_t_1599848720");
        Sub_105.add_attribute("Typ", "18"); // 3
        Sub_105_set.insert("18");
        all_values.push_back(Sub_105_set);
        all_compo_names.insert("Sub_105_set");

        Pty_105.add_element(Sub_105);
      }
      SideCrossMod_0.add_element(Pty_105);
    }
    {
      xml_element PreAll_0{"PreAll"};
      multiset<string> PreAll_0_set;
      PreAll_0.add_attribute("Acct", "AllocAccount_t_1818906772"); // 2
      PreAll_0_set.insert("AllocAccount_t_1818906772");
      PreAll_0.add_attribute("ActIDSrc", "99"); // 2
      PreAll_0_set.insert("99");
      PreAll_0.add_attribute("AllocSettlCcy", "GBP"); // 2
      PreAll_0_set.insert("GBP");
      PreAll_0.add_attribute("IndAllocID", "IndividualAllocID_t_1193057323"); // 2
      PreAll_0_set.insert("IndividualAllocID_t_1193057323");
      PreAll_0.add_attribute("Qty", "18783137.670000"); // 2
      PreAll_0_set.insert("18783137.670000");
      all_values.push_back(PreAll_0_set);
      all_compo_names.insert("PreAll_0_set");

      {
        xml_element Pty_106{"Pty"};
        multiset<string> Pty_106_set;
        Pty_106.add_attribute("ID", "NestedPartyID_t_150768414"); // 3
        Pty_106_set.insert("NestedPartyID_t_150768414");
        Pty_106.add_attribute("Src", "8"); // 3
        Pty_106_set.insert("8");
        Pty_106.add_attribute("R", "25"); // 3
        Pty_106_set.insert("25");
        all_values.push_back(Pty_106_set);
        all_compo_names.insert("Pty_106_set");

        {
          xml_element Sub_106{"Sub"};
          multiset<string> Sub_106_set;
          Sub_106.add_attribute("ID", "NestedPartySubID_t_2027203931"); // 4
          Sub_106_set.insert("NestedPartySubID_t_2027203931");
          Sub_106.add_attribute("Typ", "3"); // 4
          Sub_106_set.insert("3");
          all_values.push_back(Sub_106_set);
          all_compo_names.insert("Sub_106_set");

          Pty_106.add_element(Sub_106);
        }
        PreAll_0.add_element(Pty_106);
      }
      SideCrossMod_0.add_element(PreAll_0);
    }
    {
      xml_element OrdQty_0{"OrdQty"};
      multiset<string> OrdQty_0_set;
      OrdQty_0.add_attribute("Qty", "17146025.070000"); // 2
      OrdQty_0_set.insert("17146025.070000");
      OrdQty_0.add_attribute("Cash", "17529905.650000"); // 2
      OrdQty_0_set.insert("17529905.650000");
      OrdQty_0.add_attribute("Pct", "12867882.540000"); // 2
      OrdQty_0_set.insert("12867882.540000");
      OrdQty_0.add_attribute("RndDir", "2"); // 2
      OrdQty_0_set.insert("2");
      OrdQty_0.add_attribute("RndMod", "21156053.810000"); // 2
      OrdQty_0_set.insert("21156053.810000");
      all_values.push_back(OrdQty_0_set);
      all_compo_names.insert("OrdQty_0_set");

      SideCrossMod_0.add_element(OrdQty_0);
    }
    {
      xml_element Comm_7{"Comm"};
      multiset<string> Comm_7_set;
      Comm_7.add_attribute("Comm", "Commission_t_1159263442"); // 2
      Comm_7_set.insert("Commission_t_1159263442");
      Comm_7.add_attribute("CommTyp", "5"); // 2
      Comm_7_set.insert("5");
      Comm_7.add_attribute("Ccy", "USD"); // 2
      Comm_7_set.insert("USD");
      Comm_7.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_7_set.insert("Y");
      all_values.push_back(Comm_7_set);
      all_compo_names.insert("Comm_7_set");

      SideCrossMod_0.add_element(Comm_7);
    }
    elt.add_element(SideCrossMod_0);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_1{"SideCrossMod"};
    multiset<string> SideCrossMod_1_set;
    SideCrossMod_1.add_attribute("Side", "E"); // 1
    SideCrossMod_1_set.insert("E");
    SideCrossMod_1.add_attribute("OrigClOrdID", "OrigClOrdID_t_1391067496"); // 1
    SideCrossMod_1_set.insert("OrigClOrdID_t_1391067496");
    SideCrossMod_1.add_attribute("ClOrdID", "ClOrdID_t_572136829"); // 1
    SideCrossMod_1_set.insert("ClOrdID_t_572136829");
    SideCrossMod_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_462082570"); // 1
    SideCrossMod_1_set.insert("SecondaryClOrdID_t_462082570");
    SideCrossMod_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1548189646"); // 1
    SideCrossMod_1_set.insert("ClOrdLinkID_t_1548189646");
    SideCrossMod_1.add_attribute("OrignDt", "TradeOriginationDate_t_506123900"); // 1
    SideCrossMod_1_set.insert("TradeOriginationDate_t_506123900");
    SideCrossMod_1.add_attribute("TrdDt", "TradeDate_t_1084623242"); // 1
    SideCrossMod_1_set.insert("TradeDate_t_1084623242");
    SideCrossMod_1.add_attribute("Acct", "Account_t_1361460590"); // 1
    SideCrossMod_1_set.insert("Account_t_1361460590");
    SideCrossMod_1.add_attribute("AcctIDSrc", "5"); // 1
    SideCrossMod_1_set.insert("5");
    SideCrossMod_1.add_attribute("AcctTyp", "8"); // 1
    SideCrossMod_1_set.insert("8");
    SideCrossMod_1.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("AllocID", "AllocID_t_2038579483"); // 1
    SideCrossMod_1_set.insert("AllocID_t_2038579483");
    SideCrossMod_1.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("Cpcty", "W"); // 1
    SideCrossMod_1_set.insert("W");
    SideCrossMod_1.add_attribute("Rstctions", "F"); // 1
    SideCrossMod_1_set.insert("F");
    SideCrossMod_1.add_attribute("PrTrdAnon", "true"); // 1
    SideCrossMod_1_set.insert("true");
    SideCrossMod_1.add_attribute("CustCpcty", "4"); // 1
    SideCrossMod_1_set.insert("4");
    SideCrossMod_1.add_attribute("ForexReq", "N"); // 1
    SideCrossMod_1_set.insert("N");
    SideCrossMod_1.add_attribute("SettlCcy", "CAN"); // 1
    SideCrossMod_1_set.insert("CAN");
    SideCrossMod_1.add_attribute("BkngTyp", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("Txt", "Text_t_14341471"); // 1
    SideCrossMod_1_set.insert("Text_t_14341471");
    SideCrossMod_1.add_attribute("EncTxtLen", "1845413143"); // 1
    SideCrossMod_1_set.insert("1845413143");
    SideCrossMod_1.add_attribute("EncTxt", "EncodedText_t_1642696830"); // 1
    SideCrossMod_1_set.insert("EncodedText_t_1642696830");
    SideCrossMod_1.add_attribute("PosEfct", "C"); // 1
    SideCrossMod_1_set.insert("C");
    SideCrossMod_1.add_attribute("Covered", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_1_set.insert("3");
    SideCrossMod_1.add_attribute("ClrFeeInd", "B"); // 1
    SideCrossMod_1_set.insert("B");
    SideCrossMod_1.add_attribute("SolFlag", "N"); // 1
    SideCrossMod_1_set.insert("N");
    SideCrossMod_1.add_attribute("SideComplianceID", "SideComplianceID_t_63043496"); // 1
    SideCrossMod_1_set.insert("SideComplianceID_t_63043496");
    SideCrossMod_1.add_attribute("SideTmFrc", "SideTimeInForce_t_332544216"); // 1
    SideCrossMod_1_set.insert("SideTimeInForce_t_332544216");
    all_values.push_back(SideCrossMod_1_set);
    all_compo_names.insert("SideCrossMod_1_set");

    {
      xml_element Pty_107{"Pty"};
      multiset<string> Pty_107_set;
      Pty_107.add_attribute("ID", "PartyID_t_1600426268"); // 2
      Pty_107_set.insert("PartyID_t_1600426268");
      Pty_107.add_attribute("Src", "7"); // 2
      Pty_107_set.insert("7");
      Pty_107.add_attribute("R", "73"); // 2
      Pty_107_set.insert("73");
      all_values.push_back(Pty_107_set);
      all_compo_names.insert("Pty_107_set");

      {
        xml_element Sub_107{"Sub"};
        multiset<string> Sub_107_set;
        Sub_107.add_attribute("ID", "PartySubID_t_2106550168"); // 3
        Sub_107_set.insert("PartySubID_t_2106550168");
        Sub_107.add_attribute("Typ", "11"); // 3
        Sub_107_set.insert("11");
        all_values.push_back(Sub_107_set);
        all_compo_names.insert("Sub_107_set");

        Pty_107.add_element(Sub_107);
      }
      SideCrossMod_1.add_element(Pty_107);
    }
    {
      xml_element PreAll_1{"PreAll"};
      multiset<string> PreAll_1_set;
      PreAll_1.add_attribute("Acct", "AllocAccount_t_1094710805"); // 2
      PreAll_1_set.insert("AllocAccount_t_1094710805");
      PreAll_1.add_attribute("ActIDSrc", "1"); // 2
      PreAll_1_set.insert("1");
      PreAll_1.add_attribute("AllocSettlCcy", "JPY"); // 2
      PreAll_1_set.insert("JPY");
      PreAll_1.add_attribute("IndAllocID", "IndividualAllocID_t_1163612261"); // 2
      PreAll_1_set.insert("IndividualAllocID_t_1163612261");
      PreAll_1.add_attribute("Qty", "21260178.240000"); // 2
      PreAll_1_set.insert("21260178.240000");
      all_values.push_back(PreAll_1_set);
      all_compo_names.insert("PreAll_1_set");

      {
        xml_element Pty_108{"Pty"};
        multiset<string> Pty_108_set;
        Pty_108.add_attribute("ID", "NestedPartyID_t_2018690355"); // 3
        Pty_108_set.insert("NestedPartyID_t_2018690355");
        Pty_108.add_attribute("Src", "1"); // 3
        Pty_108_set.insert("1");
        Pty_108.add_attribute("R", "24"); // 3
        Pty_108_set.insert("24");
        all_values.push_back(Pty_108_set);
        all_compo_names.insert("Pty_108_set");

        {
          xml_element Sub_108{"Sub"};
          multiset<string> Sub_108_set;
          Sub_108.add_attribute("ID", "NestedPartySubID_t_2060554604"); // 4
          Sub_108_set.insert("NestedPartySubID_t_2060554604");
          Sub_108.add_attribute("Typ", "30"); // 4
          Sub_108_set.insert("30");
          all_values.push_back(Sub_108_set);
          all_compo_names.insert("Sub_108_set");

          Pty_108.add_element(Sub_108);
        }
        PreAll_1.add_element(Pty_108);
      }
      SideCrossMod_1.add_element(PreAll_1);
    }
    {
      xml_element OrdQty_1{"OrdQty"};
      multiset<string> OrdQty_1_set;
      OrdQty_1.add_attribute("Qty", "2534739.950000"); // 2
      OrdQty_1_set.insert("2534739.950000");
      OrdQty_1.add_attribute("Cash", "19821391.370000"); // 2
      OrdQty_1_set.insert("19821391.370000");
      OrdQty_1.add_attribute("Pct", "7188223.840000"); // 2
      OrdQty_1_set.insert("7188223.840000");
      OrdQty_1.add_attribute("RndDir", "1"); // 2
      OrdQty_1_set.insert("1");
      OrdQty_1.add_attribute("RndMod", "15092305.860000"); // 2
      OrdQty_1_set.insert("15092305.860000");
      all_values.push_back(OrdQty_1_set);
      all_compo_names.insert("OrdQty_1_set");

      SideCrossMod_1.add_element(OrdQty_1);
    }
    {
      xml_element Comm_8{"Comm"};
      multiset<string> Comm_8_set;
      Comm_8.add_attribute("Comm", "Commission_t_733163855"); // 2
      Comm_8_set.insert("Commission_t_733163855");
      Comm_8.add_attribute("CommTyp", "4"); // 2
      Comm_8_set.insert("4");
      Comm_8.add_attribute("Ccy", "CAN"); // 2
      Comm_8_set.insert("CAN");
      Comm_8.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_8_set.insert("N");
      all_values.push_back(Comm_8_set);
      all_compo_names.insert("Comm_8_set");

      SideCrossMod_1.add_element(Comm_8);
    }
    elt.add_element(SideCrossMod_1);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_2{"SideCrossMod"};
    multiset<string> SideCrossMod_2_set;
    SideCrossMod_2.add_attribute("Side", "5"); // 1
    SideCrossMod_2_set.insert("5");
    SideCrossMod_2.add_attribute("OrigClOrdID", "OrigClOrdID_t_848245489"); // 1
    SideCrossMod_2_set.insert("OrigClOrdID_t_848245489");
    SideCrossMod_2.add_attribute("ClOrdID", "ClOrdID_t_2018105221"); // 1
    SideCrossMod_2_set.insert("ClOrdID_t_2018105221");
    SideCrossMod_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1108407468"); // 1
    SideCrossMod_2_set.insert("SecondaryClOrdID_t_1108407468");
    SideCrossMod_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1180789706"); // 1
    SideCrossMod_2_set.insert("ClOrdLinkID_t_1180789706");
    SideCrossMod_2.add_attribute("OrignDt", "TradeOriginationDate_t_1471047841"); // 1
    SideCrossMod_2_set.insert("TradeOriginationDate_t_1471047841");
    SideCrossMod_2.add_attribute("TrdDt", "TradeDate_t_1633533534"); // 1
    SideCrossMod_2_set.insert("TradeDate_t_1633533534");
    SideCrossMod_2.add_attribute("Acct", "Account_t_914039921"); // 1
    SideCrossMod_2_set.insert("Account_t_914039921");
    SideCrossMod_2.add_attribute("AcctIDSrc", "4"); // 1
    SideCrossMod_2_set.insert("4");
    SideCrossMod_2.add_attribute("AcctTyp", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("AllocID", "AllocID_t_1988861598"); // 1
    SideCrossMod_2_set.insert("AllocID_t_1988861598");
    SideCrossMod_2.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("Cpcty", "W"); // 1
    SideCrossMod_2_set.insert("W");
    SideCrossMod_2.add_attribute("Rstctions", "B"); // 1
    SideCrossMod_2_set.insert("B");
    SideCrossMod_2.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_2_set.insert("false");
    SideCrossMod_2.add_attribute("CustCpcty", "3"); // 1
    SideCrossMod_2_set.insert("3");
    SideCrossMod_2.add_attribute("ForexReq", "N"); // 1
    SideCrossMod_2_set.insert("N");
    SideCrossMod_2.add_attribute("SettlCcy", "EUR"); // 1
    SideCrossMod_2_set.insert("EUR");
    SideCrossMod_2.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("Txt", "Text_t_234165427"); // 1
    SideCrossMod_2_set.insert("Text_t_234165427");
    SideCrossMod_2.add_attribute("EncTxtLen", "412534683"); // 1
    SideCrossMod_2_set.insert("412534683");
    SideCrossMod_2.add_attribute("EncTxt", "EncodedText_t_969541689"); // 1
    SideCrossMod_2_set.insert("EncodedText_t_969541689");
    SideCrossMod_2.add_attribute("PosEfct", "F"); // 1
    SideCrossMod_2_set.insert("F");
    SideCrossMod_2.add_attribute("Covered", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_2_set.insert("3");
    SideCrossMod_2.add_attribute("ClrFeeInd", "L"); // 1
    SideCrossMod_2_set.insert("L");
    SideCrossMod_2.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_2_set.insert("Y");
    SideCrossMod_2.add_attribute("SideComplianceID", "SideComplianceID_t_871865782"); // 1
    SideCrossMod_2_set.insert("SideComplianceID_t_871865782");
    SideCrossMod_2.add_attribute("SideTmFrc", "SideTimeInForce_t_1574859894"); // 1
    SideCrossMod_2_set.insert("SideTimeInForce_t_1574859894");
    all_values.push_back(SideCrossMod_2_set);
    all_compo_names.insert("SideCrossMod_2_set");

    {
      xml_element Pty_109{"Pty"};
      multiset<string> Pty_109_set;
      Pty_109.add_attribute("ID", "PartyID_t_367730380"); // 2
      Pty_109_set.insert("PartyID_t_367730380");
      Pty_109.add_attribute("Src", "B"); // 2
      Pty_109_set.insert("B");
      Pty_109.add_attribute("R", "74"); // 2
      Pty_109_set.insert("74");
      all_values.push_back(Pty_109_set);
      all_compo_names.insert("Pty_109_set");

      {
        xml_element Sub_109{"Sub"};
        multiset<string> Sub_109_set;
        Sub_109.add_attribute("ID", "PartySubID_t_1838778221"); // 3
        Sub_109_set.insert("PartySubID_t_1838778221");
        Sub_109.add_attribute("Typ", "22"); // 3
        Sub_109_set.insert("22");
        all_values.push_back(Sub_109_set);
        all_compo_names.insert("Sub_109_set");

        Pty_109.add_element(Sub_109);
      }
      SideCrossMod_2.add_element(Pty_109);
    }
    {
      xml_element PreAll_2{"PreAll"};
      multiset<string> PreAll_2_set;
      PreAll_2.add_attribute("Acct", "AllocAccount_t_1522205873"); // 2
      PreAll_2_set.insert("AllocAccount_t_1522205873");
      PreAll_2.add_attribute("ActIDSrc", "1"); // 2
      PreAll_2_set.insert("1");
      PreAll_2.add_attribute("AllocSettlCcy", "EUR"); // 2
      PreAll_2_set.insert("EUR");
      PreAll_2.add_attribute("IndAllocID", "IndividualAllocID_t_321595139"); // 2
      PreAll_2_set.insert("IndividualAllocID_t_321595139");
      PreAll_2.add_attribute("Qty", "5210983.450000"); // 2
      PreAll_2_set.insert("5210983.450000");
      all_values.push_back(PreAll_2_set);
      all_compo_names.insert("PreAll_2_set");

      {
        xml_element Pty_110{"Pty"};
        multiset<string> Pty_110_set;
        Pty_110.add_attribute("ID", "NestedPartyID_t_1224850902"); // 3
        Pty_110_set.insert("NestedPartyID_t_1224850902");
        Pty_110.add_attribute("Src", "A"); // 3
        Pty_110_set.insert("A");
        Pty_110.add_attribute("R", "20"); // 3
        Pty_110_set.insert("20");
        all_values.push_back(Pty_110_set);
        all_compo_names.insert("Pty_110_set");

        {
          xml_element Sub_110{"Sub"};
          multiset<string> Sub_110_set;
          Sub_110.add_attribute("ID", "NestedPartySubID_t_937435559"); // 4
          Sub_110_set.insert("NestedPartySubID_t_937435559");
          Sub_110.add_attribute("Typ", "31"); // 4
          Sub_110_set.insert("31");
          all_values.push_back(Sub_110_set);
          all_compo_names.insert("Sub_110_set");

          Pty_110.add_element(Sub_110);
        }
        PreAll_2.add_element(Pty_110);
      }
      SideCrossMod_2.add_element(PreAll_2);
    }
    {
      xml_element OrdQty_2{"OrdQty"};
      multiset<string> OrdQty_2_set;
      OrdQty_2.add_attribute("Qty", "13683240.260000"); // 2
      OrdQty_2_set.insert("13683240.260000");
      OrdQty_2.add_attribute("Cash", "5630911.730000"); // 2
      OrdQty_2_set.insert("5630911.730000");
      OrdQty_2.add_attribute("Pct", "20197778.220000"); // 2
      OrdQty_2_set.insert("20197778.220000");
      OrdQty_2.add_attribute("RndDir", "2"); // 2
      OrdQty_2_set.insert("2");
      OrdQty_2.add_attribute("RndMod", "234022.760000"); // 2
      OrdQty_2_set.insert("234022.760000");
      all_values.push_back(OrdQty_2_set);
      all_compo_names.insert("OrdQty_2_set");

      SideCrossMod_2.add_element(OrdQty_2);
    }
    {
      xml_element Comm_9{"Comm"};
      multiset<string> Comm_9_set;
      Comm_9.add_attribute("Comm", "Commission_t_106459601"); // 2
      Comm_9_set.insert("Commission_t_106459601");
      Comm_9.add_attribute("CommTyp", "6"); // 2
      Comm_9_set.insert("6");
      Comm_9.add_attribute("Ccy", "USD"); // 2
      Comm_9_set.insert("USD");
      Comm_9.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_9_set.insert("N");
      all_values.push_back(Comm_9_set);
      all_compo_names.insert("Comm_9_set");

      SideCrossMod_2.add_element(Comm_9);
    }
    elt.add_element(SideCrossMod_2);
  } // end SideCrossMod
  { // Instrmt
    xml_element Instrmt_14{"Instrmt"};
    multiset<string> Instrmt_14_set;
    Instrmt_14.add_attribute("Sym", "Symbol_t_819445776"); // 1
    Instrmt_14_set.insert("Symbol_t_819445776");
    Instrmt_14.add_attribute("Sfx", "WI"); // 1
    Instrmt_14_set.insert("WI");
    Instrmt_14.add_attribute("ID", "SecurityID_t_653482731"); // 1
    Instrmt_14_set.insert("SecurityID_t_653482731");
    Instrmt_14.add_attribute("Src", "4"); // 1
    Instrmt_14_set.insert("4");
    Instrmt_14.add_attribute("Prod", "5"); // 1
    Instrmt_14_set.insert("5");
    Instrmt_14.add_attribute("ProdCmplx", "ProductComplex_t_1021213111"); // 1
    Instrmt_14_set.insert("ProductComplex_t_1021213111");
    Instrmt_14.add_attribute("SecGrp", "SecurityGroup_t_1524101161"); // 1
    Instrmt_14_set.insert("SecurityGroup_t_1524101161");
    Instrmt_14.add_attribute("CFI", "CFICode_t_1835945487"); // 1
    Instrmt_14_set.insert("CFICode_t_1835945487");
    Instrmt_14.add_attribute("SecTyp", "TPRN"); // 1
    Instrmt_14_set.insert("TPRN");
    Instrmt_14.add_attribute("SubTyp", "SecuritySubType_t_842940650"); // 1
    Instrmt_14_set.insert("SecuritySubType_t_842940650");
    Instrmt_14.add_attribute("MMY", "1210667712"); // 1
    Instrmt_14_set.insert("1210667712");
    Instrmt_14.add_attribute("MatDt", "MaturityDate_t_1833916618"); // 1
    Instrmt_14_set.insert("MaturityDate_t_1833916618");
    Instrmt_14.add_attribute("MatTm", "1257579332"); // 1
    Instrmt_14_set.insert("1257579332");
    Instrmt_14.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_446657015"); // 1
    Instrmt_14_set.insert("SettleOnOpenFlag_t_446657015");
    Instrmt_14.add_attribute("AsgnMeth", "8028109"); // 1
    Instrmt_14_set.insert("8028109");
    Instrmt_14.add_attribute("Status", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("CpnPmt", "CouponPaymentDate_t_1671507917"); // 1
    Instrmt_14_set.insert("CouponPaymentDate_t_1671507917");
    Instrmt_14.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_14_set.insert("MM");
    Instrmt_14.add_attribute("Snrty", "SR"); // 1
    Instrmt_14_set.insert("SR");
    Instrmt_14.add_attribute("NotlPctOut", "4614598.290000"); // 1
    Instrmt_14_set.insert("4614598.290000");
    Instrmt_14.add_attribute("OrigNotlPctOut", "10503728.450000"); // 1
    Instrmt_14_set.insert("10503728.450000");
    Instrmt_14.add_attribute("AttchPnt", "16056102.400000"); // 1
    Instrmt_14_set.insert("16056102.400000");
    Instrmt_14.add_attribute("DetchPnt", "10245510.020000"); // 1
    Instrmt_14_set.insert("10245510.020000");
    Instrmt_14.add_attribute("Issued", "IssueDate_t_922667019"); // 1
    Instrmt_14_set.insert("IssueDate_t_922667019");
    Instrmt_14.add_attribute("RepoCollSecTyp", "1842156456"); // 1
    Instrmt_14_set.insert("1842156456");
    Instrmt_14.add_attribute("RepoTrm", "1047953279"); // 1
    Instrmt_14_set.insert("1047953279");
    Instrmt_14.add_attribute("RepoRt", "10291266.200000"); // 1
    Instrmt_14_set.insert("10291266.200000");
    Instrmt_14.add_attribute("Fctr", "3437537.070000"); // 1
    Instrmt_14_set.insert("3437537.070000");
    Instrmt_14.add_attribute("CrdRtg", "CreditRating_t_2040897245"); // 1
    Instrmt_14_set.insert("CreditRating_t_2040897245");
    Instrmt_14.add_attribute("Rgstry", "InstrRegistry_t_2102915505"); // 1
    Instrmt_14_set.insert("InstrRegistry_t_2102915505");
    Instrmt_14.add_attribute("IssuCtry", "500127631"); // 1
    Instrmt_14_set.insert("500127631");
    Instrmt_14.add_attribute("StPrv", "StateOrProvinceOfIssue_t_712859373"); // 1
    Instrmt_14_set.insert("StateOrProvinceOfIssue_t_712859373");
    Instrmt_14.add_attribute("Lcl", "LocaleOfIssue_t_1755835146"); // 1
    Instrmt_14_set.insert("LocaleOfIssue_t_1755835146");
    Instrmt_14.add_attribute("Redeem", "RedemptionDate_t_1153610362"); // 1
    Instrmt_14_set.insert("RedemptionDate_t_1153610362");
    Instrmt_14.add_attribute("StrkPx", "2566872.840000"); // 1
    Instrmt_14_set.insert("2566872.840000");
    Instrmt_14.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_14_set.insert("CHF");
    Instrmt_14.add_attribute("StrkMult", "17807884.460000"); // 1
    Instrmt_14_set.insert("17807884.460000");
    Instrmt_14.add_attribute("StrkValu", "5245928.720000"); // 1
    Instrmt_14_set.insert("5245928.720000");
    Instrmt_14.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_14_set.insert("4");
    Instrmt_14.add_attribute("StrkPxBndryPrcsn", "17352605.840000"); // 1
    Instrmt_14_set.insert("17352605.840000");
    Instrmt_14.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_14_set.insert("4");
    Instrmt_14.add_attribute("OptAt", "1733824780"); // 1
    Instrmt_14_set.insert("1733824780");
    Instrmt_14.add_attribute("Mult", "344339.510000"); // 1
    Instrmt_14_set.insert("344339.510000");
    Instrmt_14.add_attribute("MultTyp", "1"); // 1
    Instrmt_14_set.insert("1");
    Instrmt_14.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("MinPxIncr", "17059418.690000"); // 1
    Instrmt_14_set.insert("17059418.690000");
    Instrmt_14.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1127730303"); // 1
    Instrmt_14_set.insert("MinPriceIncrementAmount_t_1127730303");
    Instrmt_14.add_attribute("UOM", "lbs"); // 1
    Instrmt_14_set.insert("lbs");
    Instrmt_14.add_attribute("UOMQty", "199180.500000"); // 1
    Instrmt_14_set.insert("199180.500000");
    Instrmt_14.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_14_set.insert("Bbl");
    Instrmt_14.add_attribute("PxUOMQty", "10604316.150000"); // 1
    Instrmt_14_set.insert("10604316.150000");
    Instrmt_14.add_attribute("SettlMeth", "C"); // 1
    Instrmt_14_set.insert("C");
    Instrmt_14.add_attribute("ExerStyle", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("OptPayAmt", "OptPayoutAmount_t_2092422331"); // 1
    Instrmt_14_set.insert("OptPayoutAmount_t_2092422331");
    Instrmt_14.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_14_set.insert("PCTPAR");
    Instrmt_14.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_14_set.insert("FUT");
    Instrmt_14.add_attribute("ListMeth", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("CapPx", "19378449.960000"); // 1
    Instrmt_14_set.insert("19378449.960000");
    Instrmt_14.add_attribute("FlrPx", "15989857.620000"); // 1
    Instrmt_14_set.insert("15989857.620000");
    Instrmt_14.add_attribute("PutCall", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("FlexInd", "true"); // 1
    Instrmt_14_set.insert("true");
    Instrmt_14.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_14_set.insert("false");
    Instrmt_14.add_attribute("TmUnit", "S"); // 1
    Instrmt_14_set.insert("S");
    Instrmt_14.add_attribute("CpnRt", "2348438.790000"); // 1
    Instrmt_14_set.insert("2348438.790000");
    Instrmt_14.add_attribute("Exch", "SecurityExchange_t_632452302"); // 1
    Instrmt_14_set.insert("SecurityExchange_t_632452302");
    Instrmt_14.add_attribute("PosLmt", "441203736"); // 1
    Instrmt_14_set.insert("441203736");
    Instrmt_14.add_attribute("NTPosLmt", "759436751"); // 1
    Instrmt_14_set.insert("759436751");
    Instrmt_14.add_attribute("Issr", "Issuer_t_1372299812"); // 1
    Instrmt_14_set.insert("Issuer_t_1372299812");
    Instrmt_14.add_attribute("EncIssrLen", "917449184"); // 1
    Instrmt_14_set.insert("917449184");
    Instrmt_14.add_attribute("EncIssr", "EncodedIssuer_t_347213687"); // 1
    Instrmt_14_set.insert("EncodedIssuer_t_347213687");
    Instrmt_14.add_attribute("Desc", "SecurityDesc_t_1798580291"); // 1
    Instrmt_14_set.insert("SecurityDesc_t_1798580291");
    Instrmt_14.add_attribute("EncSecDescLen", "503790317"); // 1
    Instrmt_14_set.insert("503790317");
    Instrmt_14.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_381647639"); // 1
    Instrmt_14_set.insert("EncodedSecurityDesc_t_381647639");
    Instrmt_14.add_attribute("Pool", "Pool_t_85405232"); // 1
    Instrmt_14_set.insert("Pool_t_85405232");
    Instrmt_14.add_attribute("CSetMo", "1868809127"); // 1
    Instrmt_14_set.insert("1868809127");
    Instrmt_14.add_attribute("CPPgm", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("CPRegT", "CPRegType_t_1213135535"); // 1
    Instrmt_14_set.insert("CPRegType_t_1213135535");
    Instrmt_14.add_attribute("Dated", "DatedDate_t_1323630502"); // 1
    Instrmt_14_set.insert("DatedDate_t_1323630502");
    Instrmt_14.add_attribute("IntAcrl", "InterestAccrualDate_t_2107507558"); // 1
    Instrmt_14_set.insert("InterestAccrualDate_t_2107507558");
    all_values.push_back(Instrmt_14_set);
    all_compo_names.insert("Instrmt_14_set");

    {
      xml_element AID_14{"AID"};
      multiset<string> AID_14_set;
      AID_14.add_attribute("AltID", "SecurityAltID_t_1243755035"); // 2
      AID_14_set.insert("SecurityAltID_t_1243755035");
      AID_14.add_attribute("AltIDSrc", "J"); // 2
      AID_14_set.insert("J");
      all_values.push_back(AID_14_set);
      all_compo_names.insert("AID_14_set");

      Instrmt_14.add_element(AID_14);
    }
    {
      xml_element SecXML_14{"SecXML"};
      multiset<string> SecXML_14_set;
      SecXML_14.add_attribute("Schema", "SecurityXMLSchema_t_1004492962"); // 2
      SecXML_14_set.insert("SecurityXMLSchema_t_1004492962");
      all_values.push_back(SecXML_14_set);
      all_compo_names.insert("SecXML_14_set");

      Instrmt_14.add_element(SecXML_14);
    }
    {
      xml_element Evnt_14{"Evnt"};
      multiset<string> Evnt_14_set;
      Evnt_14.add_attribute("EventTyp", "6"); // 2
      Evnt_14_set.insert("6");
      Evnt_14.add_attribute("Dt", "EventDate_t_991682893"); // 2
      Evnt_14_set.insert("EventDate_t_991682893");
      Evnt_14.add_attribute("Tm", "EventTime_t_949431646"); // 2
      Evnt_14_set.insert("EventTime_t_949431646");
      Evnt_14.add_attribute("Px", "20319710.450000"); // 2
      Evnt_14_set.insert("20319710.450000");
      Evnt_14.add_attribute("Txt", "EventText_t_2090541024"); // 2
      Evnt_14_set.insert("EventText_t_2090541024");
      all_values.push_back(Evnt_14_set);
      all_compo_names.insert("Evnt_14_set");

      Instrmt_14.add_element(Evnt_14);
    }
    {
      xml_element Pty_111{"Pty"};
      multiset<string> Pty_111_set;
      Pty_111.add_attribute("ID", "InstrumentPartyID_t_787783926"); // 2
      Pty_111_set.insert("InstrumentPartyID_t_787783926");
      Pty_111.add_attribute("Src", "B"); // 2
      Pty_111_set.insert("B");
      Pty_111.add_attribute("R", "8"); // 2
      Pty_111_set.insert("8");
      all_values.push_back(Pty_111_set);
      all_compo_names.insert("Pty_111_set");

      {
        xml_element Sub_111{"Sub"};
        multiset<string> Sub_111_set;
        Sub_111.add_attribute("ID", "InstrumentPartySubID_t_1338995580"); // 3
        Sub_111_set.insert("InstrumentPartySubID_t_1338995580");
        Sub_111.add_attribute("Typ", "31"); // 3
        Sub_111_set.insert("31");
        all_values.push_back(Sub_111_set);
        all_compo_names.insert("Sub_111_set");

        Pty_111.add_element(Sub_111);
      }
      Instrmt_14.add_element(Pty_111);
    }
    {
      xml_element CmplxEvnt_14{"CmplxEvnt"};
      multiset<string> CmplxEvnt_14_set;
      CmplxEvnt_14.add_attribute("Typ", "3"); // 2
      CmplxEvnt_14_set.insert("3");
      CmplxEvnt_14.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2146894519"); // 2
      CmplxEvnt_14_set.insert("ComplexOptPayoutAmount_t_2146894519");
      CmplxEvnt_14.add_attribute("Px", "14558891.200000"); // 2
      CmplxEvnt_14_set.insert("14558891.200000");
      CmplxEvnt_14.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_14_set.insert("1");
      CmplxEvnt_14.add_attribute("PxBndryPrcsn", "4406146.070000"); // 2
      CmplxEvnt_14_set.insert("4406146.070000");
      CmplxEvnt_14.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_14_set.insert("2");
      CmplxEvnt_14.add_attribute("Cond", "1"); // 2
      CmplxEvnt_14_set.insert("1");
      all_values.push_back(CmplxEvnt_14_set);
      all_compo_names.insert("CmplxEvnt_14_set");

      {
        xml_element EvntDts_14{"EvntDts"};
        multiset<string> EvntDts_14_set;
        EvntDts_14.add_attribute("StartDt", "ComplexEventStartDate_t_1358063792"); // 3
        EvntDts_14_set.insert("ComplexEventStartDate_t_1358063792");
        EvntDts_14.add_attribute("EndDt", "ComplexEventEndDate_t_415055911"); // 3
        EvntDts_14_set.insert("ComplexEventEndDate_t_415055911");
        all_values.push_back(EvntDts_14_set);
        all_compo_names.insert("EvntDts_14_set");

        {
          xml_element EvntTms_14{"EvntTms"};
          multiset<string> EvntTms_14_set;
          EvntTms_14.add_attribute("StartTm", "1655520726"); // 4
          EvntTms_14_set.insert("1655520726");
          EvntTms_14.add_attribute("EndTm", "1861854109"); // 4
          EvntTms_14_set.insert("1861854109");
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
    xml_element Undly_20{"Undly"};
    multiset<string> Undly_20_set;
    Undly_20.add_attribute("Sym", "UnderlyingSymbol_t_1740925958"); // 1
    Undly_20_set.insert("UnderlyingSymbol_t_1740925958");
    Undly_20.add_attribute("Sfx", "CD"); // 1
    Undly_20_set.insert("CD");
    Undly_20.add_attribute("ID", "UnderlyingSecurityID_t_736809410"); // 1
    Undly_20_set.insert("UnderlyingSecurityID_t_736809410");
    Undly_20.add_attribute("Src", "8"); // 1
    Undly_20_set.insert("8");
    Undly_20.add_attribute("Prod", "13"); // 1
    Undly_20_set.insert("13");
    Undly_20.add_attribute("CFI", "UnderlyingCFICode_t_696833320"); // 1
    Undly_20_set.insert("UnderlyingCFICode_t_696833320");
    Undly_20.add_attribute("SecTyp", "MPP"); // 1
    Undly_20_set.insert("MPP");
    Undly_20.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_995904912"); // 1
    Undly_20_set.insert("UnderlyingSecuritySubType_t_995904912");
    Undly_20.add_attribute("MMY", "1701326282"); // 1
    Undly_20_set.insert("1701326282");
    Undly_20.add_attribute("Mat", "UnderlyingMaturityDate_t_2099890786"); // 1
    Undly_20_set.insert("UnderlyingMaturityDate_t_2099890786");
    Undly_20.add_attribute("MatTm", "1987587806"); // 1
    Undly_20_set.insert("1987587806");
    Undly_20.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_503274280"); // 1
    Undly_20_set.insert("UnderlyingCouponPaymentDate_t_503274280");
    Undly_20.add_attribute("RestrctTyp", "XR"); // 1
    Undly_20_set.insert("XR");
    Undly_20.add_attribute("Snrty", "SD"); // 1
    Undly_20_set.insert("SD");
    Undly_20.add_attribute("NotlPctOut", "12910582.070000"); // 1
    Undly_20_set.insert("12910582.070000");
    Undly_20.add_attribute("OrigNotlPctOut", "16592269.290000"); // 1
    Undly_20_set.insert("16592269.290000");
    Undly_20.add_attribute("AttchPnt", "13252046.730000"); // 1
    Undly_20_set.insert("13252046.730000");
    Undly_20.add_attribute("DetchPnt", "4825701.390000"); // 1
    Undly_20_set.insert("4825701.390000");
    Undly_20.add_attribute("Issued", "UnderlyingIssueDate_t_732788522"); // 1
    Undly_20_set.insert("UnderlyingIssueDate_t_732788522");
    Undly_20.add_attribute("RepoCollSecTyp", "1324876641"); // 1
    Undly_20_set.insert("1324876641");
    Undly_20.add_attribute("RepoTrm", "481981010"); // 1
    Undly_20_set.insert("481981010");
    Undly_20.add_attribute("RepoRt", "411939.940000"); // 1
    Undly_20_set.insert("411939.940000");
    Undly_20.add_attribute("Fctr", "19570009.120000"); // 1
    Undly_20_set.insert("19570009.120000");
    Undly_20.add_attribute("CrdRtg", "UnderlyingCreditRating_t_922595618"); // 1
    Undly_20_set.insert("UnderlyingCreditRating_t_922595618");
    Undly_20.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_109036217"); // 1
    Undly_20_set.insert("UnderlyingInstrRegistry_t_109036217");
    Undly_20.add_attribute("Ctry", "1813941346"); // 1
    Undly_20_set.insert("1813941346");
    Undly_20.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_133175762"); // 1
    Undly_20_set.insert("UnderlyingStateOrProvinceOfIssue_t_133175762");
    Undly_20.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_524092128"); // 1
    Undly_20_set.insert("UnderlyingLocaleOfIssue_t_524092128");
    Undly_20.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1321978424"); // 1
    Undly_20_set.insert("UnderlyingRedemptionDate_t_1321978424");
    Undly_20.add_attribute("StrkPx", "19950298.710000"); // 1
    Undly_20_set.insert("19950298.710000");
    Undly_20.add_attribute("StrkCcy", "GBP"); // 1
    Undly_20_set.insert("GBP");
    Undly_20.add_attribute("OptA", "1430725811"); // 1
    Undly_20_set.insert("1430725811");
    Undly_20.add_attribute("Mult", "20576050.880000"); // 1
    Undly_20_set.insert("20576050.880000");
    Undly_20.add_attribute("MultTyp", "1"); // 1
    Undly_20_set.insert("1");
    Undly_20.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_20_set.insert("0");
    Undly_20.add_attribute("UOM", "USD"); // 1
    Undly_20_set.insert("USD");
    Undly_20.add_attribute("UOMQty", "16248478.110000"); // 1
    Undly_20_set.insert("16248478.110000");
    Undly_20.add_attribute("PxUOM", "t"); // 1
    Undly_20_set.insert("t");
    Undly_20.add_attribute("PxUOMQty", "1607973.950000"); // 1
    Undly_20_set.insert("1607973.950000");
    Undly_20.add_attribute("TmUnit", "Wk"); // 1
    Undly_20_set.insert("Wk");
    Undly_20.add_attribute("ExerStyle", "1"); // 1
    Undly_20_set.insert("1");
    Undly_20.add_attribute("CpnRt", "6640716.750000"); // 1
    Undly_20_set.insert("6640716.750000");
    Undly_20.add_attribute("Exch", "UnderlyingSecurityExchange_t_1414149485"); // 1
    Undly_20_set.insert("UnderlyingSecurityExchange_t_1414149485");
    Undly_20.add_attribute("Issr", "UnderlyingIssuer_t_661739210"); // 1
    Undly_20_set.insert("UnderlyingIssuer_t_661739210");
    Undly_20.add_attribute("EncUndIssrLen", "1955129882"); // 1
    Undly_20_set.insert("1955129882");
    Undly_20.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_925892766"); // 1
    Undly_20_set.insert("EncodedUnderlyingIssuer_t_925892766");
    Undly_20.add_attribute("Desc", "UnderlyingSecurityDesc_t_1986943884"); // 1
    Undly_20_set.insert("UnderlyingSecurityDesc_t_1986943884");
    Undly_20.add_attribute("EncUndSecDescLen", "290216374"); // 1
    Undly_20_set.insert("290216374");
    Undly_20.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1658681288"); // 1
    Undly_20_set.insert("EncodedUnderlyingSecurityDesc_t_1658681288");
    Undly_20.add_attribute("CPPgm", "UnderlyingCPProgram_t_1164336877"); // 1
    Undly_20_set.insert("UnderlyingCPProgram_t_1164336877");
    Undly_20.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_772197384"); // 1
    Undly_20_set.insert("UnderlyingCPRegType_t_772197384");
    Undly_20.add_attribute("AllocPct", "16998752.820000"); // 1
    Undly_20_set.insert("16998752.820000");
    Undly_20.add_attribute("Ccy", "GBP"); // 1
    Undly_20_set.insert("GBP");
    Undly_20.add_attribute("Qty", "18089115.000000"); // 1
    Undly_20_set.insert("18089115.000000");
    Undly_20.add_attribute("SettlTyp", "2"); // 1
    Undly_20_set.insert("2");
    Undly_20.add_attribute("CashAmt", "UnderlyingCashAmount_t_1827968764"); // 1
    Undly_20_set.insert("UnderlyingCashAmount_t_1827968764");
    Undly_20.add_attribute("CashTyp", "FIXED"); // 1
    Undly_20_set.insert("FIXED");
    Undly_20.add_attribute("Px", "19622902.640000"); // 1
    Undly_20_set.insert("19622902.640000");
    Undly_20.add_attribute("DirtPx", "16755149.870000"); // 1
    Undly_20_set.insert("16755149.870000");
    Undly_20.add_attribute("EndPx", "15063156.590000"); // 1
    Undly_20_set.insert("15063156.590000");
    Undly_20.add_attribute("StartVal", "UnderlyingStartValue_t_730227351"); // 1
    Undly_20_set.insert("UnderlyingStartValue_t_730227351");
    Undly_20.add_attribute("CurVal", "UnderlyingCurrentValue_t_958757150"); // 1
    Undly_20_set.insert("UnderlyingCurrentValue_t_958757150");
    Undly_20.add_attribute("EndVal", "UnderlyingEndValue_t_1416437099"); // 1
    Undly_20_set.insert("UnderlyingEndValue_t_1416437099");
    Undly_20.add_attribute("AdjQty", "3047422.820000"); // 1
    Undly_20_set.insert("3047422.820000");
    Undly_20.add_attribute("FxRate", "10013257.560000"); // 1
    Undly_20_set.insert("10013257.560000");
    Undly_20.add_attribute("FxRateCalc", "M"); // 1
    Undly_20_set.insert("M");
    Undly_20.add_attribute("CapValu", "UnderlyingCapValue_t_1929590094"); // 1
    Undly_20_set.insert("UnderlyingCapValue_t_1929590094");
    Undly_20.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2039799274"); // 1
    Undly_20_set.insert("UnderlyingSettlMethod_t_2039799274");
    Undly_20.add_attribute("PutCall", "36705607"); // 1
    Undly_20_set.insert("36705607");
    all_values.push_back(Undly_20_set);
    all_compo_names.insert("Undly_20_set");

    {
      xml_element UndAID_20{"UndAID"};
      multiset<string> UndAID_20_set;
      UndAID_20.add_attribute("AltID", "UnderlyingSecurityAltID_t_1359361395"); // 2
      UndAID_20_set.insert("UnderlyingSecurityAltID_t_1359361395");
      UndAID_20.add_attribute("AltIDSrc", "F"); // 2
      UndAID_20_set.insert("F");
      all_values.push_back(UndAID_20_set);
      all_compo_names.insert("UndAID_20_set");

      Undly_20.add_element(UndAID_20);
    }
    {
      xml_element Stip_40{"Stip"};
      multiset<string> Stip_40_set;
      Stip_40.add_attribute("Typ", "AUTOREINV"); // 2
      Stip_40_set.insert("AUTOREINV");
      Stip_40.add_attribute("Val", "UnderlyingStipValue_t_626027232"); // 2
      Stip_40_set.insert("UnderlyingStipValue_t_626027232");
      all_values.push_back(Stip_40_set);
      all_compo_names.insert("Stip_40_set");

      Undly_20.add_element(Stip_40);
    }
    {
      xml_element Pty_112{"Pty"};
      multiset<string> Pty_112_set;
      Pty_112.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1432632512"); // 2
      Pty_112_set.insert("UnderlyingInstrumentPartyID_t_1432632512");
      Pty_112.add_attribute("Src", "I"); // 2
      Pty_112_set.insert("I");
      Pty_112.add_attribute("R", "16"); // 2
      Pty_112_set.insert("16");
      all_values.push_back(Pty_112_set);
      all_compo_names.insert("Pty_112_set");

      {
        xml_element Sub_112{"Sub"};
        multiset<string> Sub_112_set;
        Sub_112.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1272092748"); // 3
        Sub_112_set.insert("UnderlyingInstrumentPartySubID_t_1272092748");
        Sub_112.add_attribute("Typ", "28"); // 3
        Sub_112_set.insert("28");
        all_values.push_back(Sub_112_set);
        all_compo_names.insert("Sub_112_set");

        Pty_112.add_element(Sub_112);
      }
      Undly_20.add_element(Pty_112);
    }
    elt.add_element(Undly_20);
  } // end Undly
  { // Leg
    xml_element Leg_22{"Leg"};
    multiset<string> Leg_22_set;
    Leg_22.add_attribute("Sym", "LegSymbol_t_288945978"); // 1
    Leg_22_set.insert("LegSymbol_t_288945978");
    Leg_22.add_attribute("Sfx", "WI"); // 1
    Leg_22_set.insert("WI");
    Leg_22.add_attribute("ID", "LegSecurityID_t_615509274"); // 1
    Leg_22_set.insert("LegSecurityID_t_615509274");
    Leg_22.add_attribute("Src", "A"); // 1
    Leg_22_set.insert("A");
    Leg_22.add_attribute("Prod", "12"); // 1
    Leg_22_set.insert("12");
    Leg_22.add_attribute("CFI", "LegCFICode_t_276937126"); // 1
    Leg_22_set.insert("LegCFICode_t_276937126");
    Leg_22.add_attribute("SecTyp", "PN"); // 1
    Leg_22_set.insert("PN");
    Leg_22.add_attribute("SecSubTyp", "LegSecuritySubType_t_798631746"); // 1
    Leg_22_set.insert("LegSecuritySubType_t_798631746");
    Leg_22.add_attribute("MMY", "462457106"); // 1
    Leg_22_set.insert("462457106");
    Leg_22.add_attribute("Mat", "LegMaturityDate_t_1717918576"); // 1
    Leg_22_set.insert("LegMaturityDate_t_1717918576");
    Leg_22.add_attribute("MatTm", "326663086"); // 1
    Leg_22_set.insert("326663086");
    Leg_22.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1968772765"); // 1
    Leg_22_set.insert("LegCouponPaymentDate_t_1968772765");
    Leg_22.add_attribute("Issued", "LegIssueDate_t_300662279"); // 1
    Leg_22_set.insert("LegIssueDate_t_300662279");
    Leg_22.add_attribute("RepoCollSecTyp", "1285420236"); // 1
    Leg_22_set.insert("1285420236");
    Leg_22.add_attribute("RepoTrm", "1237726217"); // 1
    Leg_22_set.insert("1237726217");
    Leg_22.add_attribute("RepoRt", "6054045.610000"); // 1
    Leg_22_set.insert("6054045.610000");
    Leg_22.add_attribute("Fctr", "1392623.440000"); // 1
    Leg_22_set.insert("1392623.440000");
    Leg_22.add_attribute("CrdRtg", "LegCreditRating_t_1113634429"); // 1
    Leg_22_set.insert("LegCreditRating_t_1113634429");
    Leg_22.add_attribute("Rgstry", "LegInstrRegistry_t_387511007"); // 1
    Leg_22_set.insert("LegInstrRegistry_t_387511007");
    Leg_22.add_attribute("Ctry", "31577970"); // 1
    Leg_22_set.insert("31577970");
    Leg_22.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1150340036"); // 1
    Leg_22_set.insert("LegStateOrProvinceOfIssue_t_1150340036");
    Leg_22.add_attribute("Lcl", "LegLocaleOfIssue_t_1746872403"); // 1
    Leg_22_set.insert("LegLocaleOfIssue_t_1746872403");
    Leg_22.add_attribute("Redeem", "LegRedemptionDate_t_802471272"); // 1
    Leg_22_set.insert("LegRedemptionDate_t_802471272");
    Leg_22.add_attribute("Strk", "18511173.180000"); // 1
    Leg_22_set.insert("18511173.180000");
    Leg_22.add_attribute("StrkCcy", "EUR"); // 1
    Leg_22_set.insert("EUR");
    Leg_22.add_attribute("OptA", "212057187"); // 1
    Leg_22_set.insert("212057187");
    Leg_22.add_attribute("Cmult", "17773359.860000"); // 1
    Leg_22_set.insert("17773359.860000");
    Leg_22.add_attribute("MultTyp", "1"); // 1
    Leg_22_set.insert("1");
    Leg_22.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_22_set.insert("3");
    Leg_22.add_attribute("UOM", "Alw"); // 1
    Leg_22_set.insert("Alw");
    Leg_22.add_attribute("UOMQty", "16486588.630000"); // 1
    Leg_22_set.insert("16486588.630000");
    Leg_22.add_attribute("PxUOM", "Bu"); // 1
    Leg_22_set.insert("Bu");
    Leg_22.add_attribute("PxUOMQty", "13084792.520000"); // 1
    Leg_22_set.insert("13084792.520000");
    Leg_22.add_attribute("TmUnit", "Wk"); // 1
    Leg_22_set.insert("Wk");
    Leg_22.add_attribute("ExerStyle", "0"); // 1
    Leg_22_set.insert("0");
    Leg_22.add_attribute("CpnRt", "15854163.780000"); // 1
    Leg_22_set.insert("15854163.780000");
    Leg_22.add_attribute("Exch", "LegSecurityExchange_t_519603646"); // 1
    Leg_22_set.insert("LegSecurityExchange_t_519603646");
    Leg_22.add_attribute("Issr", "LegIssuer_t_203345434"); // 1
    Leg_22_set.insert("LegIssuer_t_203345434");
    Leg_22.add_attribute("EncLegIssrLen", "2047873484"); // 1
    Leg_22_set.insert("2047873484");
    Leg_22.add_attribute("EncLegIssr", "EncodedLegIssuer_t_90038574"); // 1
    Leg_22_set.insert("EncodedLegIssuer_t_90038574");
    Leg_22.add_attribute("Desc", "LegSecurityDesc_t_530008520"); // 1
    Leg_22_set.insert("LegSecurityDesc_t_530008520");
    Leg_22.add_attribute("EncLegSecDescLen", "1869162602"); // 1
    Leg_22_set.insert("1869162602");
    Leg_22.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_390700853"); // 1
    Leg_22_set.insert("EncodedLegSecurityDesc_t_390700853");
    Leg_22.add_attribute("RatioQty", "18154287.570000"); // 1
    Leg_22_set.insert("18154287.570000");
    Leg_22.add_attribute("Side", "4"); // 1
    Leg_22_set.insert("4");
    Leg_22.add_attribute("Ccy", "EUR"); // 1
    Leg_22_set.insert("EUR");
    Leg_22.add_attribute("Pool", "LegPool_t_2073039600"); // 1
    Leg_22_set.insert("LegPool_t_2073039600");
    Leg_22.add_attribute("Dated", "LegDatedDate_t_1383616422"); // 1
    Leg_22_set.insert("LegDatedDate_t_1383616422");
    Leg_22.add_attribute("CSetMo", "1986269072"); // 1
    Leg_22_set.insert("1986269072");
    Leg_22.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1075895988"); // 1
    Leg_22_set.insert("LegInterestAccrualDate_t_1075895988");
    Leg_22.add_attribute("PutCall", "983005177"); // 1
    Leg_22_set.insert("983005177");
    Leg_22.add_attribute("LegOptionRatio", "6412566.960000"); // 1
    Leg_22_set.insert("6412566.960000");
    Leg_22.add_attribute("Px", "7795296.580000"); // 1
    Leg_22_set.insert("7795296.580000");
    all_values.push_back(Leg_22_set);
    all_compo_names.insert("Leg_22_set");

    {
      xml_element LegAID_22{"LegAID"};
      multiset<string> LegAID_22_set;
      LegAID_22.add_attribute("SecAltID", "LegSecurityAltID_t_1208421165"); // 2
      LegAID_22_set.insert("LegSecurityAltID_t_1208421165");
      LegAID_22.add_attribute("SecAltIDSrc", "4"); // 2
      LegAID_22_set.insert("4");
      all_values.push_back(LegAID_22_set);
      all_compo_names.insert("LegAID_22_set");

      Leg_22.add_element(LegAID_22);
    }
    elt.add_element(Leg_22);
  } // end Leg
  { // Leg
    xml_element Leg_23{"Leg"};
    multiset<string> Leg_23_set;
    Leg_23.add_attribute("Sym", "LegSymbol_t_991586846"); // 1
    Leg_23_set.insert("LegSymbol_t_991586846");
    Leg_23.add_attribute("Sfx", "WI"); // 1
    Leg_23_set.insert("WI");
    Leg_23.add_attribute("ID", "LegSecurityID_t_2088589719"); // 1
    Leg_23_set.insert("LegSecurityID_t_2088589719");
    Leg_23.add_attribute("Src", "F"); // 1
    Leg_23_set.insert("F");
    Leg_23.add_attribute("Prod", "10"); // 1
    Leg_23_set.insert("10");
    Leg_23.add_attribute("CFI", "LegCFICode_t_1589764934"); // 1
    Leg_23_set.insert("LegCFICode_t_1589764934");
    Leg_23.add_attribute("SecTyp", "TERM"); // 1
    Leg_23_set.insert("TERM");
    Leg_23.add_attribute("SecSubTyp", "LegSecuritySubType_t_692239085"); // 1
    Leg_23_set.insert("LegSecuritySubType_t_692239085");
    Leg_23.add_attribute("MMY", "206256621"); // 1
    Leg_23_set.insert("206256621");
    Leg_23.add_attribute("Mat", "LegMaturityDate_t_1841048318"); // 1
    Leg_23_set.insert("LegMaturityDate_t_1841048318");
    Leg_23.add_attribute("MatTm", "130171815"); // 1
    Leg_23_set.insert("130171815");
    Leg_23.add_attribute("CpnPmt", "LegCouponPaymentDate_t_725860268"); // 1
    Leg_23_set.insert("LegCouponPaymentDate_t_725860268");
    Leg_23.add_attribute("Issued", "LegIssueDate_t_2044393753"); // 1
    Leg_23_set.insert("LegIssueDate_t_2044393753");
    Leg_23.add_attribute("RepoCollSecTyp", "30561652"); // 1
    Leg_23_set.insert("30561652");
    Leg_23.add_attribute("RepoTrm", "815898842"); // 1
    Leg_23_set.insert("815898842");
    Leg_23.add_attribute("RepoRt", "4269186.250000"); // 1
    Leg_23_set.insert("4269186.250000");
    Leg_23.add_attribute("Fctr", "18997242.540000"); // 1
    Leg_23_set.insert("18997242.540000");
    Leg_23.add_attribute("CrdRtg", "LegCreditRating_t_1206599696"); // 1
    Leg_23_set.insert("LegCreditRating_t_1206599696");
    Leg_23.add_attribute("Rgstry", "LegInstrRegistry_t_94863734"); // 1
    Leg_23_set.insert("LegInstrRegistry_t_94863734");
    Leg_23.add_attribute("Ctry", "711645777"); // 1
    Leg_23_set.insert("711645777");
    Leg_23.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_55221463"); // 1
    Leg_23_set.insert("LegStateOrProvinceOfIssue_t_55221463");
    Leg_23.add_attribute("Lcl", "LegLocaleOfIssue_t_2049554836"); // 1
    Leg_23_set.insert("LegLocaleOfIssue_t_2049554836");
    Leg_23.add_attribute("Redeem", "LegRedemptionDate_t_637201729"); // 1
    Leg_23_set.insert("LegRedemptionDate_t_637201729");
    Leg_23.add_attribute("Strk", "14388378.850000"); // 1
    Leg_23_set.insert("14388378.850000");
    Leg_23.add_attribute("StrkCcy", "EUR"); // 1
    Leg_23_set.insert("EUR");
    Leg_23.add_attribute("OptA", "274359415"); // 1
    Leg_23_set.insert("274359415");
    Leg_23.add_attribute("Cmult", "3821133.080000"); // 1
    Leg_23_set.insert("3821133.080000");
    Leg_23.add_attribute("MultTyp", "0"); // 1
    Leg_23_set.insert("0");
    Leg_23.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_23_set.insert("0");
    Leg_23.add_attribute("UOM", "Bbl"); // 1
    Leg_23_set.insert("Bbl");
    Leg_23.add_attribute("UOMQty", "13367305.730000"); // 1
    Leg_23_set.insert("13367305.730000");
    Leg_23.add_attribute("PxUOM", "Alw"); // 1
    Leg_23_set.insert("Alw");
    Leg_23.add_attribute("PxUOMQty", "10520962.130000"); // 1
    Leg_23_set.insert("10520962.130000");
    Leg_23.add_attribute("TmUnit", "Yr"); // 1
    Leg_23_set.insert("Yr");
    Leg_23.add_attribute("ExerStyle", "2"); // 1
    Leg_23_set.insert("2");
    Leg_23.add_attribute("CpnRt", "4943774.990000"); // 1
    Leg_23_set.insert("4943774.990000");
    Leg_23.add_attribute("Exch", "LegSecurityExchange_t_1480381832"); // 1
    Leg_23_set.insert("LegSecurityExchange_t_1480381832");
    Leg_23.add_attribute("Issr", "LegIssuer_t_249569354"); // 1
    Leg_23_set.insert("LegIssuer_t_249569354");
    Leg_23.add_attribute("EncLegIssrLen", "700634121"); // 1
    Leg_23_set.insert("700634121");
    Leg_23.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1173946503"); // 1
    Leg_23_set.insert("EncodedLegIssuer_t_1173946503");
    Leg_23.add_attribute("Desc", "LegSecurityDesc_t_379741170"); // 1
    Leg_23_set.insert("LegSecurityDesc_t_379741170");
    Leg_23.add_attribute("EncLegSecDescLen", "1426494389"); // 1
    Leg_23_set.insert("1426494389");
    Leg_23.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1070856608"); // 1
    Leg_23_set.insert("EncodedLegSecurityDesc_t_1070856608");
    Leg_23.add_attribute("RatioQty", "4103028.220000"); // 1
    Leg_23_set.insert("4103028.220000");
    Leg_23.add_attribute("Side", "G"); // 1
    Leg_23_set.insert("G");
    Leg_23.add_attribute("Ccy", "GBP"); // 1
    Leg_23_set.insert("GBP");
    Leg_23.add_attribute("Pool", "LegPool_t_1301509279"); // 1
    Leg_23_set.insert("LegPool_t_1301509279");
    Leg_23.add_attribute("Dated", "LegDatedDate_t_1592638968"); // 1
    Leg_23_set.insert("LegDatedDate_t_1592638968");
    Leg_23.add_attribute("CSetMo", "874189205"); // 1
    Leg_23_set.insert("874189205");
    Leg_23.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1356730742"); // 1
    Leg_23_set.insert("LegInterestAccrualDate_t_1356730742");
    Leg_23.add_attribute("PutCall", "1494710156"); // 1
    Leg_23_set.insert("1494710156");
    Leg_23.add_attribute("LegOptionRatio", "15113909.340000"); // 1
    Leg_23_set.insert("15113909.340000");
    Leg_23.add_attribute("Px", "6480849.800000"); // 1
    Leg_23_set.insert("6480849.800000");
    all_values.push_back(Leg_23_set);
    all_compo_names.insert("Leg_23_set");

    {
      xml_element LegAID_23{"LegAID"};
      multiset<string> LegAID_23_set;
      LegAID_23.add_attribute("SecAltID", "LegSecurityAltID_t_1235566768"); // 2
      LegAID_23_set.insert("LegSecurityAltID_t_1235566768");
      LegAID_23.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_23_set.insert("L");
      all_values.push_back(LegAID_23_set);
      all_compo_names.insert("LegAID_23_set");

      Leg_23.add_element(LegAID_23);
    }
    elt.add_element(Leg_23);
  } // end Leg
  { // DsplyInstr
    xml_element DsplyInstr_0{"DsplyInstr"};
    multiset<string> DsplyInstr_0_set;
    DsplyInstr_0.add_attribute("DisplayQty", "9224443.950000"); // 1
    DsplyInstr_0_set.insert("9224443.950000");
    DsplyInstr_0.add_attribute("SecDspQty", "16176800.760000"); // 1
    DsplyInstr_0_set.insert("16176800.760000");
    DsplyInstr_0.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_0_set.insert("1");
    DsplyInstr_0.add_attribute("DspMthd", "4"); // 1
    DsplyInstr_0_set.insert("4");
    DsplyInstr_0.add_attribute("DsplLwQty", "5811865.700000"); // 1
    DsplyInstr_0_set.insert("5811865.700000");
    DsplyInstr_0.add_attribute("DisplayHighQty", "6113956.560000"); // 1
    DsplyInstr_0_set.insert("6113956.560000");
    DsplyInstr_0.add_attribute("DspMinIncr", "4313117.620000"); // 1
    DsplyInstr_0_set.insert("4313117.620000");
    DsplyInstr_0.add_attribute("RfrshQty", "16332827.830000"); // 1
    DsplyInstr_0_set.insert("16332827.830000");
    all_values.push_back(DsplyInstr_0_set);
    all_compo_names.insert("DsplyInstr_0_set");

    elt.add_element(DsplyInstr_0);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_0{"TrdSes"};
    multiset<string> TrdSes_0_set;
    TrdSes_0.add_attribute("SesID", "4"); // 1
    TrdSes_0_set.insert("4");
    TrdSes_0.add_attribute("SesSub", "1"); // 1
    TrdSes_0_set.insert("1");
    all_values.push_back(TrdSes_0_set);
    all_compo_names.insert("TrdSes_0_set");

    elt.add_element(TrdSes_0);
  } // end TrdSes
  { // Stip
    xml_element Stip_41{"Stip"};
    multiset<string> Stip_41_set;
    Stip_41.add_attribute("Typ", "MININCR"); // 1
    Stip_41_set.insert("MININCR");
    Stip_41.add_attribute("Val", "StipulationValue_t_680810756"); // 1
    Stip_41_set.insert("StipulationValue_t_680810756");
    all_values.push_back(Stip_41_set);
    all_compo_names.insert("Stip_41_set");

    elt.add_element(Stip_41);
  } // end Stip
  { // TrgrInstr
    xml_element TrgrInstr_0{"TrgrInstr"};
    multiset<string> TrgrInstr_0_set;
    TrgrInstr_0.add_attribute("TrgrTyp", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrActn", "2"); // 1
    TrgrInstr_0_set.insert("2");
    TrgrInstr_0.add_attribute("TrgrPx", "21073051.450000"); // 1
    TrgrInstr_0_set.insert("21073051.450000");
    TrgrInstr_0.add_attribute("TrgrSym", "TriggerSymbol_t_1233144153"); // 1
    TrgrInstr_0_set.insert("TriggerSymbol_t_1233144153");
    TrgrInstr_0.add_attribute("TrgrSecID", "TriggerSecurityID_t_1028255378"); // 1
    TrgrInstr_0_set.insert("TriggerSecurityID_t_1028255378");
    TrgrInstr_0.add_attribute("TrgrSecIDSrc", "9"); // 1
    TrgrInstr_0_set.insert("9");
    TrgrInstr_0.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_583435739"); // 1
    TrgrInstr_0_set.insert("TriggerSecurityDesc_t_583435739");
    TrgrInstr_0.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_0_set.insert("5");
    TrgrInstr_0.add_attribute("TrgrPxTypScp", "0"); // 1
    TrgrInstr_0_set.insert("0");
    TrgrInstr_0.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_0_set.insert("D");
    TrgrInstr_0.add_attribute("TrgrNewPx", "20649880.110000"); // 1
    TrgrInstr_0_set.insert("20649880.110000");
    TrgrInstr_0.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_0_set.insert("1");
    TrgrInstr_0.add_attribute("TrgrNewQty", "15233012.150000"); // 1
    TrgrInstr_0_set.insert("15233012.150000");
    TrgrInstr_0.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1428895297"); // 1
    TrgrInstr_0_set.insert("TriggerTradingSessionID_t_1428895297");
    TrgrInstr_0.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1213572434"); // 1
    TrgrInstr_0_set.insert("TriggerTradingSessionSubID_t_1213572434");
    all_values.push_back(TrgrInstr_0_set);
    all_compo_names.insert("TrgrInstr_0_set");

    elt.add_element(TrgrInstr_0);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_9{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_9_set;
    SprdBnchmkCurve_9.add_attribute("Spread", "6113843.350000"); // 1
    SprdBnchmkCurve_9_set.insert("6113843.350000");
    SprdBnchmkCurve_9.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_9_set.insert("CAN");
    SprdBnchmkCurve_9.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_9_set.insert("Treasury");
    SprdBnchmkCurve_9.add_attribute("Point", "BenchmarkCurvePoint_t_1780565382"); // 1
    SprdBnchmkCurve_9_set.insert("BenchmarkCurvePoint_t_1780565382");
    SprdBnchmkCurve_9.add_attribute("Px", "2462745.080000"); // 1
    SprdBnchmkCurve_9_set.insert("2462745.080000");
    SprdBnchmkCurve_9.add_attribute("PxTyp", "7"); // 1
    SprdBnchmkCurve_9_set.insert("7");
    SprdBnchmkCurve_9.add_attribute("SecID", "BenchmarkSecurityID_t_244477390"); // 1
    SprdBnchmkCurve_9_set.insert("BenchmarkSecurityID_t_244477390");
    SprdBnchmkCurve_9.add_attribute("SecIDSrc", "M"); // 1
    SprdBnchmkCurve_9_set.insert("M");
    all_values.push_back(SprdBnchmkCurve_9_set);
    all_compo_names.insert("SprdBnchmkCurve_9_set");

    elt.add_element(SprdBnchmkCurve_9);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_4{"Yield"};
    multiset<string> Yield_4_set;
    Yield_4.add_attribute("Typ", "ANNUAL"); // 1
    Yield_4_set.insert("ANNUAL");
    Yield_4.add_attribute("Yld", "20474038.960000"); // 1
    Yield_4_set.insert("20474038.960000");
    Yield_4.add_attribute("CalcDt", "YieldCalcDate_t_666228302"); // 1
    Yield_4_set.insert("YieldCalcDate_t_666228302");
    Yield_4.add_attribute("RedDt", "YieldRedemptionDate_t_128743104"); // 1
    Yield_4_set.insert("YieldRedemptionDate_t_128743104");
    Yield_4.add_attribute("RedPx", "10357449.390000"); // 1
    Yield_4_set.insert("10357449.390000");
    Yield_4.add_attribute("RedPxTyp", "5"); // 1
    Yield_4_set.insert("5");
    all_values.push_back(Yield_4_set);
    all_compo_names.insert("Yield_4_set");

    elt.add_element(Yield_4);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_0{"PegInstr"};
    multiset<string> PegInstr_0_set;
    PegInstr_0.add_attribute("OfstVal", "8095538.600000"); // 1
    PegInstr_0_set.insert("8095538.600000");
    PegInstr_0.add_attribute("PegPxTyp", "5"); // 1
    PegInstr_0_set.insert("5");
    PegInstr_0.add_attribute("MoveTyp", "0"); // 1
    PegInstr_0_set.insert("0");
    PegInstr_0.add_attribute("OfstTyp", "1"); // 1
    PegInstr_0_set.insert("1");
    PegInstr_0.add_attribute("LmtTyp", "0"); // 1
    PegInstr_0_set.insert("0");
    PegInstr_0.add_attribute("RndDir", "1"); // 1
    PegInstr_0_set.insert("1");
    PegInstr_0.add_attribute("Scope", "3"); // 1
    PegInstr_0_set.insert("3");
    PegInstr_0.add_attribute("PegSecurityIDSource", "6"); // 1
    PegInstr_0_set.insert("6");
    PegInstr_0.add_attribute("PegSecID", "PegSecurityID_t_1593962780"); // 1
    PegInstr_0_set.insert("PegSecurityID_t_1593962780");
    PegInstr_0.add_attribute("PgSymbl", "PegSymbol_t_32863150"); // 1
    PegInstr_0_set.insert("PegSymbol_t_32863150");
    PegInstr_0.add_attribute("PegSecDesc", "PegSecurityDesc_t_895719788"); // 1
    PegInstr_0_set.insert("PegSecurityDesc_t_895719788");
    all_values.push_back(PegInstr_0_set);
    all_compo_names.insert("PegInstr_0_set");

    elt.add_element(PegInstr_0);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_0{"DiscInstr"};
    multiset<string> DiscInstr_0_set;
    DiscInstr_0.add_attribute("DsctnInst", "7"); // 1
    DiscInstr_0_set.insert("7");
    DiscInstr_0.add_attribute("OfstValu", "5983506.040000"); // 1
    DiscInstr_0_set.insert("5983506.040000");
    DiscInstr_0.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_0_set.insert("1");
    DiscInstr_0.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_0_set.insert("0");
    DiscInstr_0.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_0_set.insert("1");
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
    StrtPrmGrp_0.add_attribute("StrtPrmNme", "StrategyParameterName_t_964502453"); // 1
    StrtPrmGrp_0_set.insert("StrategyParameterName_t_964502453");
    StrtPrmGrp_0.add_attribute("StrtPrmTyp", "28"); // 1
    StrtPrmGrp_0_set.insert("28");
    StrtPrmGrp_0.add_attribute("StrtPrmVal", "StrategyParameterValue_t_2046730729"); // 1
    StrtPrmGrp_0_set.insert("StrategyParameterValue_t_2046730729");
    all_values.push_back(StrtPrmGrp_0_set);
    all_compo_names.insert("StrtPrmGrp_0_set");

    elt.add_element(StrtPrmGrp_0);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_1{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_1_set;
    StrtPrmGrp_1.add_attribute("StrtPrmNme", "StrategyParameterName_t_1627269787"); // 1
    StrtPrmGrp_1_set.insert("StrategyParameterName_t_1627269787");
    StrtPrmGrp_1.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_1_set.insert("23");
    StrtPrmGrp_1.add_attribute("StrtPrmVal", "StrategyParameterValue_t_576833352"); // 1
    StrtPrmGrp_1_set.insert("StrategyParameterValue_t_576833352");
    all_values.push_back(StrtPrmGrp_1_set);
    all_compo_names.insert("StrtPrmGrp_1_set");

    elt.add_element(StrtPrmGrp_1);
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
