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
  elt.add_attribute("ID", "CrossID_t_1480525106"); // 0
  NewOrderCross_message_t_0.insert("CrossID_t_1480525106");
  elt.add_attribute("Typ", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("Priorty", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("SettlTyp", "9"); // 0
  NewOrderCross_message_t_0.insert("9");
  elt.add_attribute("SettlDt", "SettlDate_t_1402406679"); // 0
  NewOrderCross_message_t_0.insert("SettlDate_t_1402406679");
  elt.add_attribute("HandlInst", "1"); // 0
  NewOrderCross_message_t_0.insert("1");
  elt.add_attribute("ExecInst", "V"); // 0
  NewOrderCross_message_t_0.insert("V");
  elt.add_attribute("MinQty", "3231502.790000"); // 0
  NewOrderCross_message_t_0.insert("3231502.790000");
  elt.add_attribute("MtchInc", "9935774.330000"); // 0
  NewOrderCross_message_t_0.insert("9935774.330000");
  elt.add_attribute("MxPxLvls", "1167113050"); // 0
  NewOrderCross_message_t_0.insert("1167113050");
  elt.add_attribute("MaxFloor", "7827635.900000"); // 0
  NewOrderCross_message_t_0.insert("7827635.900000");
  elt.add_attribute("ExDest", "ExDestination_t_1571213874"); // 0
  NewOrderCross_message_t_0.insert("ExDestination_t_1571213874");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  NewOrderCross_message_t_0.insert("E");
  elt.add_attribute("ProcCode", "6"); // 0
  NewOrderCross_message_t_0.insert("6");
  elt.add_attribute("PrevClsPx", "7058367.740000"); // 0
  NewOrderCross_message_t_0.insert("7058367.740000");
  elt.add_attribute("LocReqd", "Y"); // 0
  NewOrderCross_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_615694605"); // 0
  NewOrderCross_message_t_0.insert("TransactTime_t_615694605");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_873232215"); // 0
  NewOrderCross_message_t_0.insert("TransBkdTime_t_873232215");
  elt.add_attribute("OrdTyp", "J"); // 0
  NewOrderCross_message_t_0.insert("J");
  elt.add_attribute("PxTyp", "6"); // 0
  NewOrderCross_message_t_0.insert("6");
  elt.add_attribute("Px", "2641035.660000"); // 0
  NewOrderCross_message_t_0.insert("2641035.660000");
  elt.add_attribute("PxPrtScp", "1"); // 0
  NewOrderCross_message_t_0.insert("1");
  elt.add_attribute("StopPx", "220464.840000"); // 0
  NewOrderCross_message_t_0.insert("220464.840000");
  elt.add_attribute("Ccy", "JPY"); // 0
  NewOrderCross_message_t_0.insert("JPY");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1071149185"); // 0
  NewOrderCross_message_t_0.insert("ComplianceID_t_1071149185");
  elt.add_attribute("IOIID", "IOIID_t_1634638404"); // 0
  NewOrderCross_message_t_0.insert("IOIID_t_1634638404");
  elt.add_attribute("QID", "QuoteID_t_256429829"); // 0
  NewOrderCross_message_t_0.insert("QuoteID_t_256429829");
  elt.add_attribute("TmInForce", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1342716208"); // 0
  NewOrderCross_message_t_0.insert("EffectiveTime_t_1342716208");
  elt.add_attribute("ExpireDt", "ExpireDate_t_856852764"); // 0
  NewOrderCross_message_t_0.insert("ExpireDate_t_856852764");
  elt.add_attribute("ExpireTm", "ExpireTime_t_2125234526"); // 0
  NewOrderCross_message_t_0.insert("ExpireTime_t_2125234526");
  elt.add_attribute("GTBkngInst", "1"); // 0
  NewOrderCross_message_t_0.insert("1");
  elt.add_attribute("MaxShow", "20024249.760000"); // 0
  NewOrderCross_message_t_0.insert("20024249.760000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1398356228"); // 0
  NewOrderCross_message_t_0.insert("TargetStrategyParameters_t_1398356228");
  elt.add_attribute("ParticipationRt", "14365384.940000"); // 0
  NewOrderCross_message_t_0.insert("14365384.940000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  NewOrderCross_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "3"); // 0
  NewOrderCross_message_t_0.insert("3");
  elt.add_attribute("RegistID", "RegistID_t_282632279"); // 0
  NewOrderCross_message_t_0.insert("RegistID_t_282632279");
  elt.add_attribute("Designation", "Designation_t_1108375289"); // 0
  NewOrderCross_message_t_0.insert("Designation_t_1108375289");
  all_values.push_back(NewOrderCross_message_t_0);
  all_compo_names.insert("NewOrderCross_message_t");

  { // Hdr
    xml_element Hdr_51{"Hdr"};
    multiset<string> Hdr_51_set;
    Hdr_51.add_attribute("SeqNum", "356786450"); // 1
    Hdr_51_set.insert("356786450");
    Hdr_51.add_attribute("SID", "SenderCompID_t_1853846153"); // 1
    Hdr_51_set.insert("SenderCompID_t_1853846153");
    Hdr_51.add_attribute("TID", "TargetCompID_t_1654266282"); // 1
    Hdr_51_set.insert("TargetCompID_t_1654266282");
    Hdr_51.add_attribute("OBID", "OnBehalfOfCompID_t_511538998"); // 1
    Hdr_51_set.insert("OnBehalfOfCompID_t_511538998");
    Hdr_51.add_attribute("D2ID", "DeliverToCompID_t_412199280"); // 1
    Hdr_51_set.insert("DeliverToCompID_t_412199280");
    Hdr_51.add_attribute("SSub", "SenderSubID_t_1757705866"); // 1
    Hdr_51_set.insert("SenderSubID_t_1757705866");
    Hdr_51.add_attribute("SLoc", "SenderLocationID_t_1127233603"); // 1
    Hdr_51_set.insert("SenderLocationID_t_1127233603");
    Hdr_51.add_attribute("TSub", "TargetSubID_t_1285431495"); // 1
    Hdr_51_set.insert("TargetSubID_t_1285431495");
    Hdr_51.add_attribute("TLoc", "TargetLocationID_t_1792652908"); // 1
    Hdr_51_set.insert("TargetLocationID_t_1792652908");
    Hdr_51.add_attribute("OBSub", "OnBehalfOfSubID_t_456212004"); // 1
    Hdr_51_set.insert("OnBehalfOfSubID_t_456212004");
    Hdr_51.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1549535061"); // 1
    Hdr_51_set.insert("OnBehalfOfLocationID_t_1549535061");
    Hdr_51.add_attribute("D2Sub", "DeliverToSubID_t_1035047513"); // 1
    Hdr_51_set.insert("DeliverToSubID_t_1035047513");
    Hdr_51.add_attribute("D2Loc", "DeliverToLocationID_t_478258488"); // 1
    Hdr_51_set.insert("DeliverToLocationID_t_478258488");
    Hdr_51.add_attribute("PosDup", "Y"); // 1
    Hdr_51_set.insert("Y");
    Hdr_51.add_attribute("PosRsnd", "Y"); // 1
    Hdr_51_set.insert("Y");
    Hdr_51.add_attribute("Snt", "SendingTime_t_1549407673"); // 1
    Hdr_51_set.insert("SendingTime_t_1549407673");
    Hdr_51.add_attribute("OrigSnt", "OrigSendingTime_t_1461423977"); // 1
    Hdr_51_set.insert("OrigSendingTime_t_1461423977");
    Hdr_51.add_attribute("MsgEncd", "MessageEncoding_t_469510591"); // 1
    Hdr_51_set.insert("MessageEncoding_t_469510591");
    all_values.push_back(Hdr_51_set);
    all_compo_names.insert("Hdr_51_set");

    {
      xml_element Hop_51{"Hop"};
      multiset<string> Hop_51_set;
      Hop_51.add_attribute("ID", "HopCompID_t_46633445"); // 2
      Hop_51_set.insert("HopCompID_t_46633445");
      Hop_51.add_attribute("Ref", "656656537"); // 2
      Hop_51_set.insert("656656537");
      Hop_51.add_attribute("Snt", "HopSendingTime_t_1326363355"); // 2
      Hop_51_set.insert("HopSendingTime_t_1326363355");
      all_values.push_back(Hop_51_set);
      all_compo_names.insert("Hop_51_set");

      Hdr_51.add_element(Hop_51);
    }
    elt.add_element(Hdr_51);
  } // end Hdr
  { // Pty
    xml_element Pty_224{"Pty"};
    multiset<string> Pty_224_set;
    Pty_224.add_attribute("ID", "RootPartyID_t_652606087"); // 1
    Pty_224_set.insert("RootPartyID_t_652606087");
    Pty_224.add_attribute("Src", "1"); // 1
    Pty_224_set.insert("1");
    Pty_224.add_attribute("R", "55"); // 1
    Pty_224_set.insert("55");
    all_values.push_back(Pty_224_set);
    all_compo_names.insert("Pty_224_set");

    {
      xml_element Sub_224{"Sub"};
      multiset<string> Sub_224_set;
      Sub_224.add_attribute("ID", "RootPartySubID_t_2050962315"); // 2
      Sub_224_set.insert("RootPartySubID_t_2050962315");
      Sub_224.add_attribute("Typ", "12"); // 2
      Sub_224_set.insert("12");
      all_values.push_back(Sub_224_set);
      all_compo_names.insert("Sub_224_set");

      Pty_224.add_element(Sub_224);
    }
    elt.add_element(Pty_224);
  } // end Pty
  { // SideCrossMod
    xml_element SideCrossMod_3{"SideCrossMod"};
    multiset<string> SideCrossMod_3_set;
    SideCrossMod_3.add_attribute("Side", "8"); // 1
    SideCrossMod_3_set.insert("8");
    SideCrossMod_3.add_attribute("OrigClOrdID", "OrigClOrdID_t_752991809"); // 1
    SideCrossMod_3_set.insert("OrigClOrdID_t_752991809");
    SideCrossMod_3.add_attribute("ClOrdID", "ClOrdID_t_686058320"); // 1
    SideCrossMod_3_set.insert("ClOrdID_t_686058320");
    SideCrossMod_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1981771625"); // 1
    SideCrossMod_3_set.insert("SecondaryClOrdID_t_1981771625");
    SideCrossMod_3.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_459354314"); // 1
    SideCrossMod_3_set.insert("ClOrdLinkID_t_459354314");
    SideCrossMod_3.add_attribute("OrignDt", "TradeOriginationDate_t_192840955"); // 1
    SideCrossMod_3_set.insert("TradeOriginationDate_t_192840955");
    SideCrossMod_3.add_attribute("TrdDt", "TradeDate_t_345826975"); // 1
    SideCrossMod_3_set.insert("TradeDate_t_345826975");
    SideCrossMod_3.add_attribute("Acct", "Account_t_871553594"); // 1
    SideCrossMod_3_set.insert("Account_t_871553594");
    SideCrossMod_3.add_attribute("AcctIDSrc", "99"); // 1
    SideCrossMod_3_set.insert("99");
    SideCrossMod_3.add_attribute("AcctTyp", "6"); // 1
    SideCrossMod_3_set.insert("6");
    SideCrossMod_3.add_attribute("DayBkngInst", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("PreallocMeth", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("AllocID", "AllocID_t_1559036503"); // 1
    SideCrossMod_3_set.insert("AllocID_t_1559036503");
    SideCrossMod_3.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("Cpcty", "I"); // 1
    SideCrossMod_3_set.insert("I");
    SideCrossMod_3.add_attribute("Rstctions", "7"); // 1
    SideCrossMod_3_set.insert("7");
    SideCrossMod_3.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_3_set.insert("false");
    SideCrossMod_3.add_attribute("CustCpcty", "2"); // 1
    SideCrossMod_3_set.insert("2");
    SideCrossMod_3.add_attribute("ForexReq", "N"); // 1
    SideCrossMod_3_set.insert("N");
    SideCrossMod_3.add_attribute("SettlCcy", "CHF"); // 1
    SideCrossMod_3_set.insert("CHF");
    SideCrossMod_3.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_3_set.insert("2");
    SideCrossMod_3.add_attribute("Txt", "Text_t_344751006"); // 1
    SideCrossMod_3_set.insert("Text_t_344751006");
    SideCrossMod_3.add_attribute("EncTxtLen", "1880472867"); // 1
    SideCrossMod_3_set.insert("1880472867");
    SideCrossMod_3.add_attribute("EncTxt", "EncodedText_t_2009025030"); // 1
    SideCrossMod_3_set.insert("EncodedText_t_2009025030");
    SideCrossMod_3.add_attribute("PosEfct", "C"); // 1
    SideCrossMod_3_set.insert("C");
    SideCrossMod_3.add_attribute("Covered", "1"); // 1
    SideCrossMod_3_set.insert("1");
    SideCrossMod_3.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_3_set.insert("3");
    SideCrossMod_3.add_attribute("ClrFeeInd", "3"); // 1
    SideCrossMod_3_set.insert("3");
    SideCrossMod_3.add_attribute("SolFlag", "N"); // 1
    SideCrossMod_3_set.insert("N");
    SideCrossMod_3.add_attribute("SideComplianceID", "SideComplianceID_t_1390005225"); // 1
    SideCrossMod_3_set.insert("SideComplianceID_t_1390005225");
    SideCrossMod_3.add_attribute("SideTmFrc", "SideTimeInForce_t_601923381"); // 1
    SideCrossMod_3_set.insert("SideTimeInForce_t_601923381");
    all_values.push_back(SideCrossMod_3_set);
    all_compo_names.insert("SideCrossMod_3_set");

    {
      xml_element Pty_225{"Pty"};
      multiset<string> Pty_225_set;
      Pty_225.add_attribute("ID", "PartyID_t_1780635010"); // 2
      Pty_225_set.insert("PartyID_t_1780635010");
      Pty_225.add_attribute("Src", "1"); // 2
      Pty_225_set.insert("1");
      Pty_225.add_attribute("R", "31"); // 2
      Pty_225_set.insert("31");
      all_values.push_back(Pty_225_set);
      all_compo_names.insert("Pty_225_set");

      {
        xml_element Sub_225{"Sub"};
        multiset<string> Sub_225_set;
        Sub_225.add_attribute("ID", "PartySubID_t_1973475965"); // 3
        Sub_225_set.insert("PartySubID_t_1973475965");
        Sub_225.add_attribute("Typ", "19"); // 3
        Sub_225_set.insert("19");
        all_values.push_back(Sub_225_set);
        all_compo_names.insert("Sub_225_set");

        Pty_225.add_element(Sub_225);
      }
      SideCrossMod_3.add_element(Pty_225);
    }
    {
      xml_element PreAll_9{"PreAll"};
      multiset<string> PreAll_9_set;
      PreAll_9.add_attribute("Acct", "AllocAccount_t_1932831290"); // 2
      PreAll_9_set.insert("AllocAccount_t_1932831290");
      PreAll_9.add_attribute("ActIDSrc", "3"); // 2
      PreAll_9_set.insert("3");
      PreAll_9.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_9_set.insert("USD");
      PreAll_9.add_attribute("IndAllocID", "IndividualAllocID_t_1224771571"); // 2
      PreAll_9_set.insert("IndividualAllocID_t_1224771571");
      PreAll_9.add_attribute("Qty", "6774860.440000"); // 2
      PreAll_9_set.insert("6774860.440000");
      all_values.push_back(PreAll_9_set);
      all_compo_names.insert("PreAll_9_set");

      {
        xml_element Pty_226{"Pty"};
        multiset<string> Pty_226_set;
        Pty_226.add_attribute("ID", "NestedPartyID_t_1353885587"); // 3
        Pty_226_set.insert("NestedPartyID_t_1353885587");
        Pty_226.add_attribute("Src", "I"); // 3
        Pty_226_set.insert("I");
        Pty_226.add_attribute("R", "62"); // 3
        Pty_226_set.insert("62");
        all_values.push_back(Pty_226_set);
        all_compo_names.insert("Pty_226_set");

        {
          xml_element Sub_226{"Sub"};
          multiset<string> Sub_226_set;
          Sub_226.add_attribute("ID", "NestedPartySubID_t_592224016"); // 4
          Sub_226_set.insert("NestedPartySubID_t_592224016");
          Sub_226.add_attribute("Typ", "23"); // 4
          Sub_226_set.insert("23");
          all_values.push_back(Sub_226_set);
          all_compo_names.insert("Sub_226_set");

          Pty_226.add_element(Sub_226);
        }
        PreAll_9.add_element(Pty_226);
      }
      SideCrossMod_3.add_element(PreAll_9);
    }
    {
      xml_element OrdQty_11{"OrdQty"};
      multiset<string> OrdQty_11_set;
      OrdQty_11.add_attribute("Qty", "5995049.170000"); // 2
      OrdQty_11_set.insert("5995049.170000");
      OrdQty_11.add_attribute("Cash", "12919864.220000"); // 2
      OrdQty_11_set.insert("12919864.220000");
      OrdQty_11.add_attribute("Pct", "14227998.750000"); // 2
      OrdQty_11_set.insert("14227998.750000");
      OrdQty_11.add_attribute("RndDir", "2"); // 2
      OrdQty_11_set.insert("2");
      OrdQty_11.add_attribute("RndMod", "5009217.170000"); // 2
      OrdQty_11_set.insert("5009217.170000");
      all_values.push_back(OrdQty_11_set);
      all_compo_names.insert("OrdQty_11_set");

      SideCrossMod_3.add_element(OrdQty_11);
    }
    {
      xml_element Comm_18{"Comm"};
      multiset<string> Comm_18_set;
      Comm_18.add_attribute("Comm", "Commission_t_1767550881"); // 2
      Comm_18_set.insert("Commission_t_1767550881");
      Comm_18.add_attribute("CommTyp", "4"); // 2
      Comm_18_set.insert("4");
      Comm_18.add_attribute("Ccy", "EUR"); // 2
      Comm_18_set.insert("EUR");
      Comm_18.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_18_set.insert("N");
      all_values.push_back(Comm_18_set);
      all_compo_names.insert("Comm_18_set");

      SideCrossMod_3.add_element(Comm_18);
    }
    elt.add_element(SideCrossMod_3);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_4{"SideCrossMod"};
    multiset<string> SideCrossMod_4_set;
    SideCrossMod_4.add_attribute("Side", "F"); // 1
    SideCrossMod_4_set.insert("F");
    SideCrossMod_4.add_attribute("OrigClOrdID", "OrigClOrdID_t_995054495"); // 1
    SideCrossMod_4_set.insert("OrigClOrdID_t_995054495");
    SideCrossMod_4.add_attribute("ClOrdID", "ClOrdID_t_505085732"); // 1
    SideCrossMod_4_set.insert("ClOrdID_t_505085732");
    SideCrossMod_4.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1517488375"); // 1
    SideCrossMod_4_set.insert("SecondaryClOrdID_t_1517488375");
    SideCrossMod_4.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1596977876"); // 1
    SideCrossMod_4_set.insert("ClOrdLinkID_t_1596977876");
    SideCrossMod_4.add_attribute("OrignDt", "TradeOriginationDate_t_138237095"); // 1
    SideCrossMod_4_set.insert("TradeOriginationDate_t_138237095");
    SideCrossMod_4.add_attribute("TrdDt", "TradeDate_t_594297929"); // 1
    SideCrossMod_4_set.insert("TradeDate_t_594297929");
    SideCrossMod_4.add_attribute("Acct", "Account_t_510771924"); // 1
    SideCrossMod_4_set.insert("Account_t_510771924");
    SideCrossMod_4.add_attribute("AcctIDSrc", "5"); // 1
    SideCrossMod_4_set.insert("5");
    SideCrossMod_4.add_attribute("AcctTyp", "3"); // 1
    SideCrossMod_4_set.insert("3");
    SideCrossMod_4.add_attribute("DayBkngInst", "0"); // 1
    SideCrossMod_4_set.insert("0");
    SideCrossMod_4.add_attribute("BkngUnit", "2"); // 1
    SideCrossMod_4_set.insert("2");
    SideCrossMod_4.add_attribute("PreallocMeth", "1"); // 1
    SideCrossMod_4_set.insert("1");
    SideCrossMod_4.add_attribute("AllocID", "AllocID_t_90968650"); // 1
    SideCrossMod_4_set.insert("AllocID_t_90968650");
    SideCrossMod_4.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_4_set.insert("1");
    SideCrossMod_4.add_attribute("Cpcty", "W"); // 1
    SideCrossMod_4_set.insert("W");
    SideCrossMod_4.add_attribute("Rstctions", "D"); // 1
    SideCrossMod_4_set.insert("D");
    SideCrossMod_4.add_attribute("PrTrdAnon", "true"); // 1
    SideCrossMod_4_set.insert("true");
    SideCrossMod_4.add_attribute("CustCpcty", "4"); // 1
    SideCrossMod_4_set.insert("4");
    SideCrossMod_4.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_4_set.insert("Y");
    SideCrossMod_4.add_attribute("SettlCcy", "JPY"); // 1
    SideCrossMod_4_set.insert("JPY");
    SideCrossMod_4.add_attribute("BkngTyp", "1"); // 1
    SideCrossMod_4_set.insert("1");
    SideCrossMod_4.add_attribute("Txt", "Text_t_2058352796"); // 1
    SideCrossMod_4_set.insert("Text_t_2058352796");
    SideCrossMod_4.add_attribute("EncTxtLen", "1287782161"); // 1
    SideCrossMod_4_set.insert("1287782161");
    SideCrossMod_4.add_attribute("EncTxt", "EncodedText_t_1682502745"); // 1
    SideCrossMod_4_set.insert("EncodedText_t_1682502745");
    SideCrossMod_4.add_attribute("PosEfct", "N"); // 1
    SideCrossMod_4_set.insert("N");
    SideCrossMod_4.add_attribute("Covered", "0"); // 1
    SideCrossMod_4_set.insert("0");
    SideCrossMod_4.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_4_set.insert("3");
    SideCrossMod_4.add_attribute("ClrFeeInd", "M"); // 1
    SideCrossMod_4_set.insert("M");
    SideCrossMod_4.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_4_set.insert("Y");
    SideCrossMod_4.add_attribute("SideComplianceID", "SideComplianceID_t_24965347"); // 1
    SideCrossMod_4_set.insert("SideComplianceID_t_24965347");
    SideCrossMod_4.add_attribute("SideTmFrc", "SideTimeInForce_t_1672113801"); // 1
    SideCrossMod_4_set.insert("SideTimeInForce_t_1672113801");
    all_values.push_back(SideCrossMod_4_set);
    all_compo_names.insert("SideCrossMod_4_set");

    {
      xml_element Pty_227{"Pty"};
      multiset<string> Pty_227_set;
      Pty_227.add_attribute("ID", "PartyID_t_1244475967"); // 2
      Pty_227_set.insert("PartyID_t_1244475967");
      Pty_227.add_attribute("Src", "9"); // 2
      Pty_227_set.insert("9");
      Pty_227.add_attribute("R", "48"); // 2
      Pty_227_set.insert("48");
      all_values.push_back(Pty_227_set);
      all_compo_names.insert("Pty_227_set");

      {
        xml_element Sub_227{"Sub"};
        multiset<string> Sub_227_set;
        Sub_227.add_attribute("ID", "PartySubID_t_1382713062"); // 3
        Sub_227_set.insert("PartySubID_t_1382713062");
        Sub_227.add_attribute("Typ", "10"); // 3
        Sub_227_set.insert("10");
        all_values.push_back(Sub_227_set);
        all_compo_names.insert("Sub_227_set");

        Pty_227.add_element(Sub_227);
      }
      SideCrossMod_4.add_element(Pty_227);
    }
    {
      xml_element PreAll_10{"PreAll"};
      multiset<string> PreAll_10_set;
      PreAll_10.add_attribute("Acct", "AllocAccount_t_1632379953"); // 2
      PreAll_10_set.insert("AllocAccount_t_1632379953");
      PreAll_10.add_attribute("ActIDSrc", "4"); // 2
      PreAll_10_set.insert("4");
      PreAll_10.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_10_set.insert("CHF");
      PreAll_10.add_attribute("IndAllocID", "IndividualAllocID_t_940227378"); // 2
      PreAll_10_set.insert("IndividualAllocID_t_940227378");
      PreAll_10.add_attribute("Qty", "9188340.280000"); // 2
      PreAll_10_set.insert("9188340.280000");
      all_values.push_back(PreAll_10_set);
      all_compo_names.insert("PreAll_10_set");

      {
        xml_element Pty_228{"Pty"};
        multiset<string> Pty_228_set;
        Pty_228.add_attribute("ID", "NestedPartyID_t_2019468169"); // 3
        Pty_228_set.insert("NestedPartyID_t_2019468169");
        Pty_228.add_attribute("Src", "5"); // 3
        Pty_228_set.insert("5");
        Pty_228.add_attribute("R", "4"); // 3
        Pty_228_set.insert("4");
        all_values.push_back(Pty_228_set);
        all_compo_names.insert("Pty_228_set");

        {
          xml_element Sub_228{"Sub"};
          multiset<string> Sub_228_set;
          Sub_228.add_attribute("ID", "NestedPartySubID_t_1316838759"); // 4
          Sub_228_set.insert("NestedPartySubID_t_1316838759");
          Sub_228.add_attribute("Typ", "28"); // 4
          Sub_228_set.insert("28");
          all_values.push_back(Sub_228_set);
          all_compo_names.insert("Sub_228_set");

          Pty_228.add_element(Sub_228);
        }
        PreAll_10.add_element(Pty_228);
      }
      SideCrossMod_4.add_element(PreAll_10);
    }
    {
      xml_element OrdQty_12{"OrdQty"};
      multiset<string> OrdQty_12_set;
      OrdQty_12.add_attribute("Qty", "7416354.220000"); // 2
      OrdQty_12_set.insert("7416354.220000");
      OrdQty_12.add_attribute("Cash", "12064333.640000"); // 2
      OrdQty_12_set.insert("12064333.640000");
      OrdQty_12.add_attribute("Pct", "6249774.690000"); // 2
      OrdQty_12_set.insert("6249774.690000");
      OrdQty_12.add_attribute("RndDir", "0"); // 2
      OrdQty_12_set.insert("0");
      OrdQty_12.add_attribute("RndMod", "2405307.440000"); // 2
      OrdQty_12_set.insert("2405307.440000");
      all_values.push_back(OrdQty_12_set);
      all_compo_names.insert("OrdQty_12_set");

      SideCrossMod_4.add_element(OrdQty_12);
    }
    {
      xml_element Comm_19{"Comm"};
      multiset<string> Comm_19_set;
      Comm_19.add_attribute("Comm", "Commission_t_535846618"); // 2
      Comm_19_set.insert("Commission_t_535846618");
      Comm_19.add_attribute("CommTyp", "3"); // 2
      Comm_19_set.insert("3");
      Comm_19.add_attribute("Ccy", "USD"); // 2
      Comm_19_set.insert("USD");
      Comm_19.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_19_set.insert("N");
      all_values.push_back(Comm_19_set);
      all_compo_names.insert("Comm_19_set");

      SideCrossMod_4.add_element(Comm_19);
    }
    elt.add_element(SideCrossMod_4);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_5{"SideCrossMod"};
    multiset<string> SideCrossMod_5_set;
    SideCrossMod_5.add_attribute("Side", "7"); // 1
    SideCrossMod_5_set.insert("7");
    SideCrossMod_5.add_attribute("OrigClOrdID", "OrigClOrdID_t_743842305"); // 1
    SideCrossMod_5_set.insert("OrigClOrdID_t_743842305");
    SideCrossMod_5.add_attribute("ClOrdID", "ClOrdID_t_782394063"); // 1
    SideCrossMod_5_set.insert("ClOrdID_t_782394063");
    SideCrossMod_5.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1845481033"); // 1
    SideCrossMod_5_set.insert("SecondaryClOrdID_t_1845481033");
    SideCrossMod_5.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_268472458"); // 1
    SideCrossMod_5_set.insert("ClOrdLinkID_t_268472458");
    SideCrossMod_5.add_attribute("OrignDt", "TradeOriginationDate_t_2026870031"); // 1
    SideCrossMod_5_set.insert("TradeOriginationDate_t_2026870031");
    SideCrossMod_5.add_attribute("TrdDt", "TradeDate_t_1240451107"); // 1
    SideCrossMod_5_set.insert("TradeDate_t_1240451107");
    SideCrossMod_5.add_attribute("Acct", "Account_t_1390080488"); // 1
    SideCrossMod_5_set.insert("Account_t_1390080488");
    SideCrossMod_5.add_attribute("AcctIDSrc", "4"); // 1
    SideCrossMod_5_set.insert("4");
    SideCrossMod_5.add_attribute("AcctTyp", "6"); // 1
    SideCrossMod_5_set.insert("6");
    SideCrossMod_5.add_attribute("DayBkngInst", "0"); // 1
    SideCrossMod_5_set.insert("0");
    SideCrossMod_5.add_attribute("BkngUnit", "1"); // 1
    SideCrossMod_5_set.insert("1");
    SideCrossMod_5.add_attribute("PreallocMeth", "1"); // 1
    SideCrossMod_5_set.insert("1");
    SideCrossMod_5.add_attribute("AllocID", "AllocID_t_655992665"); // 1
    SideCrossMod_5_set.insert("AllocID_t_655992665");
    SideCrossMod_5.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_5_set.insert("1");
    SideCrossMod_5.add_attribute("Cpcty", "A"); // 1
    SideCrossMod_5_set.insert("A");
    SideCrossMod_5.add_attribute("Rstctions", "2"); // 1
    SideCrossMod_5_set.insert("2");
    SideCrossMod_5.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_5_set.insert("false");
    SideCrossMod_5.add_attribute("CustCpcty", "4"); // 1
    SideCrossMod_5_set.insert("4");
    SideCrossMod_5.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_5_set.insert("Y");
    SideCrossMod_5.add_attribute("SettlCcy", "USD"); // 1
    SideCrossMod_5_set.insert("USD");
    SideCrossMod_5.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_5_set.insert("2");
    SideCrossMod_5.add_attribute("Txt", "Text_t_1626987873"); // 1
    SideCrossMod_5_set.insert("Text_t_1626987873");
    SideCrossMod_5.add_attribute("EncTxtLen", "684199489"); // 1
    SideCrossMod_5_set.insert("684199489");
    SideCrossMod_5.add_attribute("EncTxt", "EncodedText_t_1144296406"); // 1
    SideCrossMod_5_set.insert("EncodedText_t_1144296406");
    SideCrossMod_5.add_attribute("PosEfct", "D"); // 1
    SideCrossMod_5_set.insert("D");
    SideCrossMod_5.add_attribute("Covered", "1"); // 1
    SideCrossMod_5_set.insert("1");
    SideCrossMod_5.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_5_set.insert("3");
    SideCrossMod_5.add_attribute("ClrFeeInd", "2"); // 1
    SideCrossMod_5_set.insert("2");
    SideCrossMod_5.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_5_set.insert("Y");
    SideCrossMod_5.add_attribute("SideComplianceID", "SideComplianceID_t_592878285"); // 1
    SideCrossMod_5_set.insert("SideComplianceID_t_592878285");
    SideCrossMod_5.add_attribute("SideTmFrc", "SideTimeInForce_t_825976148"); // 1
    SideCrossMod_5_set.insert("SideTimeInForce_t_825976148");
    all_values.push_back(SideCrossMod_5_set);
    all_compo_names.insert("SideCrossMod_5_set");

    {
      xml_element Pty_229{"Pty"};
      multiset<string> Pty_229_set;
      Pty_229.add_attribute("ID", "PartyID_t_223720017"); // 2
      Pty_229_set.insert("PartyID_t_223720017");
      Pty_229.add_attribute("Src", "9"); // 2
      Pty_229_set.insert("9");
      Pty_229.add_attribute("R", "16"); // 2
      Pty_229_set.insert("16");
      all_values.push_back(Pty_229_set);
      all_compo_names.insert("Pty_229_set");

      {
        xml_element Sub_229{"Sub"};
        multiset<string> Sub_229_set;
        Sub_229.add_attribute("ID", "PartySubID_t_103106400"); // 3
        Sub_229_set.insert("PartySubID_t_103106400");
        Sub_229.add_attribute("Typ", "8"); // 3
        Sub_229_set.insert("8");
        all_values.push_back(Sub_229_set);
        all_compo_names.insert("Sub_229_set");

        Pty_229.add_element(Sub_229);
      }
      SideCrossMod_5.add_element(Pty_229);
    }
    {
      xml_element PreAll_11{"PreAll"};
      multiset<string> PreAll_11_set;
      PreAll_11.add_attribute("Acct", "AllocAccount_t_337045447"); // 2
      PreAll_11_set.insert("AllocAccount_t_337045447");
      PreAll_11.add_attribute("ActIDSrc", "4"); // 2
      PreAll_11_set.insert("4");
      PreAll_11.add_attribute("AllocSettlCcy", "JPY"); // 2
      PreAll_11_set.insert("JPY");
      PreAll_11.add_attribute("IndAllocID", "IndividualAllocID_t_1826764118"); // 2
      PreAll_11_set.insert("IndividualAllocID_t_1826764118");
      PreAll_11.add_attribute("Qty", "18494838.100000"); // 2
      PreAll_11_set.insert("18494838.100000");
      all_values.push_back(PreAll_11_set);
      all_compo_names.insert("PreAll_11_set");

      {
        xml_element Pty_230{"Pty"};
        multiset<string> Pty_230_set;
        Pty_230.add_attribute("ID", "NestedPartyID_t_1868014905"); // 3
        Pty_230_set.insert("NestedPartyID_t_1868014905");
        Pty_230.add_attribute("Src", "H"); // 3
        Pty_230_set.insert("H");
        Pty_230.add_attribute("R", "30"); // 3
        Pty_230_set.insert("30");
        all_values.push_back(Pty_230_set);
        all_compo_names.insert("Pty_230_set");

        {
          xml_element Sub_230{"Sub"};
          multiset<string> Sub_230_set;
          Sub_230.add_attribute("ID", "NestedPartySubID_t_248508444"); // 4
          Sub_230_set.insert("NestedPartySubID_t_248508444");
          Sub_230.add_attribute("Typ", "17"); // 4
          Sub_230_set.insert("17");
          all_values.push_back(Sub_230_set);
          all_compo_names.insert("Sub_230_set");

          Pty_230.add_element(Sub_230);
        }
        PreAll_11.add_element(Pty_230);
      }
      SideCrossMod_5.add_element(PreAll_11);
    }
    {
      xml_element OrdQty_13{"OrdQty"};
      multiset<string> OrdQty_13_set;
      OrdQty_13.add_attribute("Qty", "780120.580000"); // 2
      OrdQty_13_set.insert("780120.580000");
      OrdQty_13.add_attribute("Cash", "20933243.890000"); // 2
      OrdQty_13_set.insert("20933243.890000");
      OrdQty_13.add_attribute("Pct", "9481787.310000"); // 2
      OrdQty_13_set.insert("9481787.310000");
      OrdQty_13.add_attribute("RndDir", "1"); // 2
      OrdQty_13_set.insert("1");
      OrdQty_13.add_attribute("RndMod", "8496064.030000"); // 2
      OrdQty_13_set.insert("8496064.030000");
      all_values.push_back(OrdQty_13_set);
      all_compo_names.insert("OrdQty_13_set");

      SideCrossMod_5.add_element(OrdQty_13);
    }
    {
      xml_element Comm_20{"Comm"};
      multiset<string> Comm_20_set;
      Comm_20.add_attribute("Comm", "Commission_t_427682956"); // 2
      Comm_20_set.insert("Commission_t_427682956");
      Comm_20.add_attribute("CommTyp", "6"); // 2
      Comm_20_set.insert("6");
      Comm_20.add_attribute("Ccy", "CHF"); // 2
      Comm_20_set.insert("CHF");
      Comm_20.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_20_set.insert("N");
      all_values.push_back(Comm_20_set);
      all_compo_names.insert("Comm_20_set");

      SideCrossMod_5.add_element(Comm_20);
    }
    elt.add_element(SideCrossMod_5);
  } // end SideCrossMod
  { // Instrmt
    xml_element Instrmt_41{"Instrmt"};
    multiset<string> Instrmt_41_set;
    Instrmt_41.add_attribute("Sym", "Symbol_t_766265408"); // 1
    Instrmt_41_set.insert("Symbol_t_766265408");
    Instrmt_41.add_attribute("Sfx", "CD"); // 1
    Instrmt_41_set.insert("CD");
    Instrmt_41.add_attribute("ID", "SecurityID_t_712234991"); // 1
    Instrmt_41_set.insert("SecurityID_t_712234991");
    Instrmt_41.add_attribute("Src", "I"); // 1
    Instrmt_41_set.insert("I");
    Instrmt_41.add_attribute("Prod", "6"); // 1
    Instrmt_41_set.insert("6");
    Instrmt_41.add_attribute("ProdCmplx", "ProductComplex_t_935955008"); // 1
    Instrmt_41_set.insert("ProductComplex_t_935955008");
    Instrmt_41.add_attribute("SecGrp", "SecurityGroup_t_1650019363"); // 1
    Instrmt_41_set.insert("SecurityGroup_t_1650019363");
    Instrmt_41.add_attribute("CFI", "CFICode_t_298108749"); // 1
    Instrmt_41_set.insert("CFICode_t_298108749");
    Instrmt_41.add_attribute("SecTyp", "CPP"); // 1
    Instrmt_41_set.insert("CPP");
    Instrmt_41.add_attribute("SubTyp", "SecuritySubType_t_1033862492"); // 1
    Instrmt_41_set.insert("SecuritySubType_t_1033862492");
    Instrmt_41.add_attribute("MMY", "635154196"); // 1
    Instrmt_41_set.insert("635154196");
    Instrmt_41.add_attribute("MatDt", "MaturityDate_t_256783606"); // 1
    Instrmt_41_set.insert("MaturityDate_t_256783606");
    Instrmt_41.add_attribute("MatTm", "1647424731"); // 1
    Instrmt_41_set.insert("1647424731");
    Instrmt_41.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1847176437"); // 1
    Instrmt_41_set.insert("SettleOnOpenFlag_t_1847176437");
    Instrmt_41.add_attribute("AsgnMeth", "2083547724"); // 1
    Instrmt_41_set.insert("2083547724");
    Instrmt_41.add_attribute("Status", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("CpnPmt", "CouponPaymentDate_t_1567707694"); // 1
    Instrmt_41_set.insert("CouponPaymentDate_t_1567707694");
    Instrmt_41.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_41_set.insert("FR");
    Instrmt_41.add_attribute("Snrty", "SB"); // 1
    Instrmt_41_set.insert("SB");
    Instrmt_41.add_attribute("NotlPctOut", "18162161.380000"); // 1
    Instrmt_41_set.insert("18162161.380000");
    Instrmt_41.add_attribute("OrigNotlPctOut", "9632985.240000"); // 1
    Instrmt_41_set.insert("9632985.240000");
    Instrmt_41.add_attribute("AttchPnt", "11367090.660000"); // 1
    Instrmt_41_set.insert("11367090.660000");
    Instrmt_41.add_attribute("DetchPnt", "17620568.800000"); // 1
    Instrmt_41_set.insert("17620568.800000");
    Instrmt_41.add_attribute("Issued", "IssueDate_t_1911477255"); // 1
    Instrmt_41_set.insert("IssueDate_t_1911477255");
    Instrmt_41.add_attribute("RepoCollSecTyp", "177612842"); // 1
    Instrmt_41_set.insert("177612842");
    Instrmt_41.add_attribute("RepoTrm", "464179635"); // 1
    Instrmt_41_set.insert("464179635");
    Instrmt_41.add_attribute("RepoRt", "1916765.630000"); // 1
    Instrmt_41_set.insert("1916765.630000");
    Instrmt_41.add_attribute("Fctr", "20501997.550000"); // 1
    Instrmt_41_set.insert("20501997.550000");
    Instrmt_41.add_attribute("CrdRtg", "CreditRating_t_310598797"); // 1
    Instrmt_41_set.insert("CreditRating_t_310598797");
    Instrmt_41.add_attribute("Rgstry", "InstrRegistry_t_634710362"); // 1
    Instrmt_41_set.insert("InstrRegistry_t_634710362");
    Instrmt_41.add_attribute("IssuCtry", "1173625145"); // 1
    Instrmt_41_set.insert("1173625145");
    Instrmt_41.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1076864205"); // 1
    Instrmt_41_set.insert("StateOrProvinceOfIssue_t_1076864205");
    Instrmt_41.add_attribute("Lcl", "LocaleOfIssue_t_1159878004"); // 1
    Instrmt_41_set.insert("LocaleOfIssue_t_1159878004");
    Instrmt_41.add_attribute("Redeem", "RedemptionDate_t_1885860137"); // 1
    Instrmt_41_set.insert("RedemptionDate_t_1885860137");
    Instrmt_41.add_attribute("StrkPx", "2885242.510000"); // 1
    Instrmt_41_set.insert("2885242.510000");
    Instrmt_41.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_41_set.insert("CAN");
    Instrmt_41.add_attribute("StrkMult", "19385436.140000"); // 1
    Instrmt_41_set.insert("19385436.140000");
    Instrmt_41.add_attribute("StrkValu", "6616468.960000"); // 1
    Instrmt_41_set.insert("6616468.960000");
    Instrmt_41.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_41_set.insert("3");
    Instrmt_41.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_41_set.insert("5");
    Instrmt_41.add_attribute("StrkPxBndryPrcsn", "12968010.920000"); // 1
    Instrmt_41_set.insert("12968010.920000");
    Instrmt_41.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("OptAt", "324863542"); // 1
    Instrmt_41_set.insert("324863542");
    Instrmt_41.add_attribute("Mult", "9964938.810000"); // 1
    Instrmt_41_set.insert("9964938.810000");
    Instrmt_41.add_attribute("MultTyp", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("MinPxIncr", "4167179.280000"); // 1
    Instrmt_41_set.insert("4167179.280000");
    Instrmt_41.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_775887136"); // 1
    Instrmt_41_set.insert("MinPriceIncrementAmount_t_775887136");
    Instrmt_41.add_attribute("UOM", "Bcf"); // 1
    Instrmt_41_set.insert("Bcf");
    Instrmt_41.add_attribute("UOMQty", "854504.180000"); // 1
    Instrmt_41_set.insert("854504.180000");
    Instrmt_41.add_attribute("PxUOM", "t"); // 1
    Instrmt_41_set.insert("t");
    Instrmt_41.add_attribute("PxUOMQty", "17222108.630000"); // 1
    Instrmt_41_set.insert("17222108.630000");
    Instrmt_41.add_attribute("SettlMeth", "C"); // 1
    Instrmt_41_set.insert("C");
    Instrmt_41.add_attribute("ExerStyle", "2"); // 1
    Instrmt_41_set.insert("2");
    Instrmt_41.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_41_set.insert("3");
    Instrmt_41.add_attribute("OptPayAmt", "OptPayoutAmount_t_164203286"); // 1
    Instrmt_41_set.insert("OptPayoutAmount_t_164203286");
    Instrmt_41.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_41_set.insert("INT");
    Instrmt_41.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_41_set.insert("CDS");
    Instrmt_41.add_attribute("ListMeth", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("CapPx", "1820825.440000"); // 1
    Instrmt_41_set.insert("1820825.440000");
    Instrmt_41.add_attribute("FlrPx", "8286813.110000"); // 1
    Instrmt_41_set.insert("8286813.110000");
    Instrmt_41.add_attribute("PutCall", "0"); // 1
    Instrmt_41_set.insert("0");
    Instrmt_41.add_attribute("FlexInd", "true"); // 1
    Instrmt_41_set.insert("true");
    Instrmt_41.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_41_set.insert("true");
    Instrmt_41.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_41_set.insert("Mo");
    Instrmt_41.add_attribute("CpnRt", "17054986.950000"); // 1
    Instrmt_41_set.insert("17054986.950000");
    Instrmt_41.add_attribute("Exch", "SecurityExchange_t_1241389297"); // 1
    Instrmt_41_set.insert("SecurityExchange_t_1241389297");
    Instrmt_41.add_attribute("PosLmt", "1631250506"); // 1
    Instrmt_41_set.insert("1631250506");
    Instrmt_41.add_attribute("NTPosLmt", "219661943"); // 1
    Instrmt_41_set.insert("219661943");
    Instrmt_41.add_attribute("Issr", "Issuer_t_807298555"); // 1
    Instrmt_41_set.insert("Issuer_t_807298555");
    Instrmt_41.add_attribute("EncIssrLen", "308689317"); // 1
    Instrmt_41_set.insert("308689317");
    Instrmt_41.add_attribute("EncIssr", "EncodedIssuer_t_1516463035"); // 1
    Instrmt_41_set.insert("EncodedIssuer_t_1516463035");
    Instrmt_41.add_attribute("Desc", "SecurityDesc_t_629991419"); // 1
    Instrmt_41_set.insert("SecurityDesc_t_629991419");
    Instrmt_41.add_attribute("EncSecDescLen", "633552859"); // 1
    Instrmt_41_set.insert("633552859");
    Instrmt_41.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_365473269"); // 1
    Instrmt_41_set.insert("EncodedSecurityDesc_t_365473269");
    Instrmt_41.add_attribute("Pool", "Pool_t_388748359"); // 1
    Instrmt_41_set.insert("Pool_t_388748359");
    Instrmt_41.add_attribute("CSetMo", "160357648"); // 1
    Instrmt_41_set.insert("160357648");
    Instrmt_41.add_attribute("CPPgm", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("CPRegT", "CPRegType_t_1164635496"); // 1
    Instrmt_41_set.insert("CPRegType_t_1164635496");
    Instrmt_41.add_attribute("Dated", "DatedDate_t_745859445"); // 1
    Instrmt_41_set.insert("DatedDate_t_745859445");
    Instrmt_41.add_attribute("IntAcrl", "InterestAccrualDate_t_867641615"); // 1
    Instrmt_41_set.insert("InterestAccrualDate_t_867641615");
    all_values.push_back(Instrmt_41_set);
    all_compo_names.insert("Instrmt_41_set");

    {
      xml_element AID_44{"AID"};
      multiset<string> AID_44_set;
      AID_44.add_attribute("AltID", "SecurityAltID_t_756337508"); // 2
      AID_44_set.insert("SecurityAltID_t_756337508");
      AID_44.add_attribute("AltIDSrc", "K"); // 2
      AID_44_set.insert("K");
      all_values.push_back(AID_44_set);
      all_compo_names.insert("AID_44_set");

      Instrmt_41.add_element(AID_44);
    }
    {
      xml_element SecXML_44{"SecXML"};
      multiset<string> SecXML_44_set;
      SecXML_44.add_attribute("Schema", "SecurityXMLSchema_t_567665266"); // 2
      SecXML_44_set.insert("SecurityXMLSchema_t_567665266");
      all_values.push_back(SecXML_44_set);
      all_compo_names.insert("SecXML_44_set");

      Instrmt_41.add_element(SecXML_44);
    }
    {
      xml_element Evnt_44{"Evnt"};
      multiset<string> Evnt_44_set;
      Evnt_44.add_attribute("EventTyp", "8"); // 2
      Evnt_44_set.insert("8");
      Evnt_44.add_attribute("Dt", "EventDate_t_72926718"); // 2
      Evnt_44_set.insert("EventDate_t_72926718");
      Evnt_44.add_attribute("Tm", "EventTime_t_731868552"); // 2
      Evnt_44_set.insert("EventTime_t_731868552");
      Evnt_44.add_attribute("Px", "18068889.580000"); // 2
      Evnt_44_set.insert("18068889.580000");
      Evnt_44.add_attribute("Txt", "EventText_t_1875466532"); // 2
      Evnt_44_set.insert("EventText_t_1875466532");
      all_values.push_back(Evnt_44_set);
      all_compo_names.insert("Evnt_44_set");

      Instrmt_41.add_element(Evnt_44);
    }
    {
      xml_element Pty_231{"Pty"};
      multiset<string> Pty_231_set;
      Pty_231.add_attribute("ID", "InstrumentPartyID_t_1206670635"); // 2
      Pty_231_set.insert("InstrumentPartyID_t_1206670635");
      Pty_231.add_attribute("Src", "G"); // 2
      Pty_231_set.insert("G");
      Pty_231.add_attribute("R", "61"); // 2
      Pty_231_set.insert("61");
      all_values.push_back(Pty_231_set);
      all_compo_names.insert("Pty_231_set");

      {
        xml_element Sub_231{"Sub"};
        multiset<string> Sub_231_set;
        Sub_231.add_attribute("ID", "InstrumentPartySubID_t_610853275"); // 3
        Sub_231_set.insert("InstrumentPartySubID_t_610853275");
        Sub_231.add_attribute("Typ", "28"); // 3
        Sub_231_set.insert("28");
        all_values.push_back(Sub_231_set);
        all_compo_names.insert("Sub_231_set");

        Pty_231.add_element(Sub_231);
      }
      Instrmt_41.add_element(Pty_231);
    }
    {
      xml_element CmplxEvnt_41{"CmplxEvnt"};
      multiset<string> CmplxEvnt_41_set;
      CmplxEvnt_41.add_attribute("Typ", "5"); // 2
      CmplxEvnt_41_set.insert("5");
      CmplxEvnt_41.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_303560167"); // 2
      CmplxEvnt_41_set.insert("ComplexOptPayoutAmount_t_303560167");
      CmplxEvnt_41.add_attribute("Px", "7414634.500000"); // 2
      CmplxEvnt_41_set.insert("7414634.500000");
      CmplxEvnt_41.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_41_set.insert("5");
      CmplxEvnt_41.add_attribute("PxBndryPrcsn", "19348106.730000"); // 2
      CmplxEvnt_41_set.insert("19348106.730000");
      CmplxEvnt_41.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_41_set.insert("1");
      CmplxEvnt_41.add_attribute("Cond", "1"); // 2
      CmplxEvnt_41_set.insert("1");
      all_values.push_back(CmplxEvnt_41_set);
      all_compo_names.insert("CmplxEvnt_41_set");

      {
        xml_element EvntDts_41{"EvntDts"};
        multiset<string> EvntDts_41_set;
        EvntDts_41.add_attribute("StartDt", "ComplexEventStartDate_t_96016342"); // 3
        EvntDts_41_set.insert("ComplexEventStartDate_t_96016342");
        EvntDts_41.add_attribute("EndDt", "ComplexEventEndDate_t_330104781"); // 3
        EvntDts_41_set.insert("ComplexEventEndDate_t_330104781");
        all_values.push_back(EvntDts_41_set);
        all_compo_names.insert("EvntDts_41_set");

        {
          xml_element EvntTms_41{"EvntTms"};
          multiset<string> EvntTms_41_set;
          EvntTms_41.add_attribute("StartTm", "1654917619"); // 4
          EvntTms_41_set.insert("1654917619");
          EvntTms_41.add_attribute("EndTm", "729569201"); // 4
          EvntTms_41_set.insert("729569201");
          all_values.push_back(EvntTms_41_set);
          all_compo_names.insert("EvntTms_41_set");

          EvntDts_41.add_element(EvntTms_41);
        }
        CmplxEvnt_41.add_element(EvntDts_41);
      }
      Instrmt_41.add_element(CmplxEvnt_41);
    }
    elt.add_element(Instrmt_41);
  } // end Instrmt
  { // Undly
    xml_element Undly_55{"Undly"};
    multiset<string> Undly_55_set;
    Undly_55.add_attribute("Sym", "UnderlyingSymbol_t_2043665979"); // 1
    Undly_55_set.insert("UnderlyingSymbol_t_2043665979");
    Undly_55.add_attribute("Sfx", "WI"); // 1
    Undly_55_set.insert("WI");
    Undly_55.add_attribute("ID", "UnderlyingSecurityID_t_1477769247"); // 1
    Undly_55_set.insert("UnderlyingSecurityID_t_1477769247");
    Undly_55.add_attribute("Src", "4"); // 1
    Undly_55_set.insert("4");
    Undly_55.add_attribute("Prod", "9"); // 1
    Undly_55_set.insert("9");
    Undly_55.add_attribute("CFI", "UnderlyingCFICode_t_197927214"); // 1
    Undly_55_set.insert("UnderlyingCFICode_t_197927214");
    Undly_55.add_attribute("SecTyp", "REPLACD"); // 1
    Undly_55_set.insert("REPLACD");
    Undly_55.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1956372955"); // 1
    Undly_55_set.insert("UnderlyingSecuritySubType_t_1956372955");
    Undly_55.add_attribute("MMY", "765592480"); // 1
    Undly_55_set.insert("765592480");
    Undly_55.add_attribute("Mat", "UnderlyingMaturityDate_t_1929188463"); // 1
    Undly_55_set.insert("UnderlyingMaturityDate_t_1929188463");
    Undly_55.add_attribute("MatTm", "2029299673"); // 1
    Undly_55_set.insert("2029299673");
    Undly_55.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1497461032"); // 1
    Undly_55_set.insert("UnderlyingCouponPaymentDate_t_1497461032");
    Undly_55.add_attribute("RestrctTyp", "MM"); // 1
    Undly_55_set.insert("MM");
    Undly_55.add_attribute("Snrty", "SR"); // 1
    Undly_55_set.insert("SR");
    Undly_55.add_attribute("NotlPctOut", "5566480.190000"); // 1
    Undly_55_set.insert("5566480.190000");
    Undly_55.add_attribute("OrigNotlPctOut", "14300816.290000"); // 1
    Undly_55_set.insert("14300816.290000");
    Undly_55.add_attribute("AttchPnt", "1664631.040000"); // 1
    Undly_55_set.insert("1664631.040000");
    Undly_55.add_attribute("DetchPnt", "11675012.950000"); // 1
    Undly_55_set.insert("11675012.950000");
    Undly_55.add_attribute("Issued", "UnderlyingIssueDate_t_466046384"); // 1
    Undly_55_set.insert("UnderlyingIssueDate_t_466046384");
    Undly_55.add_attribute("RepoCollSecTyp", "1290185099"); // 1
    Undly_55_set.insert("1290185099");
    Undly_55.add_attribute("RepoTrm", "1471061462"); // 1
    Undly_55_set.insert("1471061462");
    Undly_55.add_attribute("RepoRt", "12075098.350000"); // 1
    Undly_55_set.insert("12075098.350000");
    Undly_55.add_attribute("Fctr", "15078127.440000"); // 1
    Undly_55_set.insert("15078127.440000");
    Undly_55.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1258388487"); // 1
    Undly_55_set.insert("UnderlyingCreditRating_t_1258388487");
    Undly_55.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_21151580"); // 1
    Undly_55_set.insert("UnderlyingInstrRegistry_t_21151580");
    Undly_55.add_attribute("Ctry", "385255296"); // 1
    Undly_55_set.insert("385255296");
    Undly_55.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1354404829"); // 1
    Undly_55_set.insert("UnderlyingStateOrProvinceOfIssue_t_1354404829");
    Undly_55.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_351256361"); // 1
    Undly_55_set.insert("UnderlyingLocaleOfIssue_t_351256361");
    Undly_55.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2040172915"); // 1
    Undly_55_set.insert("UnderlyingRedemptionDate_t_2040172915");
    Undly_55.add_attribute("StrkPx", "20839740.300000"); // 1
    Undly_55_set.insert("20839740.300000");
    Undly_55.add_attribute("StrkCcy", "GBP"); // 1
    Undly_55_set.insert("GBP");
    Undly_55.add_attribute("OptA", "826417232"); // 1
    Undly_55_set.insert("826417232");
    Undly_55.add_attribute("Mult", "3771200.100000"); // 1
    Undly_55_set.insert("3771200.100000");
    Undly_55.add_attribute("MultTyp", "1"); // 1
    Undly_55_set.insert("1");
    Undly_55.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_55_set.insert("3");
    Undly_55.add_attribute("UOM", "Alw"); // 1
    Undly_55_set.insert("Alw");
    Undly_55.add_attribute("UOMQty", "5193611.130000"); // 1
    Undly_55_set.insert("5193611.130000");
    Undly_55.add_attribute("PxUOM", "Bu"); // 1
    Undly_55_set.insert("Bu");
    Undly_55.add_attribute("PxUOMQty", "13406397.050000"); // 1
    Undly_55_set.insert("13406397.050000");
    Undly_55.add_attribute("TmUnit", "H"); // 1
    Undly_55_set.insert("H");
    Undly_55.add_attribute("ExerStyle", "2"); // 1
    Undly_55_set.insert("2");
    Undly_55.add_attribute("CpnRt", "6906170.900000"); // 1
    Undly_55_set.insert("6906170.900000");
    Undly_55.add_attribute("Exch", "UnderlyingSecurityExchange_t_1889659702"); // 1
    Undly_55_set.insert("UnderlyingSecurityExchange_t_1889659702");
    Undly_55.add_attribute("Issr", "UnderlyingIssuer_t_1762707768"); // 1
    Undly_55_set.insert("UnderlyingIssuer_t_1762707768");
    Undly_55.add_attribute("EncUndIssrLen", "1247265109"); // 1
    Undly_55_set.insert("1247265109");
    Undly_55.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1172257683"); // 1
    Undly_55_set.insert("EncodedUnderlyingIssuer_t_1172257683");
    Undly_55.add_attribute("Desc", "UnderlyingSecurityDesc_t_1929170873"); // 1
    Undly_55_set.insert("UnderlyingSecurityDesc_t_1929170873");
    Undly_55.add_attribute("EncUndSecDescLen", "267282756"); // 1
    Undly_55_set.insert("267282756");
    Undly_55.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1638304068"); // 1
    Undly_55_set.insert("EncodedUnderlyingSecurityDesc_t_1638304068");
    Undly_55.add_attribute("CPPgm", "UnderlyingCPProgram_t_1071872324"); // 1
    Undly_55_set.insert("UnderlyingCPProgram_t_1071872324");
    Undly_55.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1738344218"); // 1
    Undly_55_set.insert("UnderlyingCPRegType_t_1738344218");
    Undly_55.add_attribute("AllocPct", "6983302.550000"); // 1
    Undly_55_set.insert("6983302.550000");
    Undly_55.add_attribute("Ccy", "CHF"); // 1
    Undly_55_set.insert("CHF");
    Undly_55.add_attribute("Qty", "7194818.350000"); // 1
    Undly_55_set.insert("7194818.350000");
    Undly_55.add_attribute("SettlTyp", "2"); // 1
    Undly_55_set.insert("2");
    Undly_55.add_attribute("CashAmt", "UnderlyingCashAmount_t_56170238"); // 1
    Undly_55_set.insert("UnderlyingCashAmount_t_56170238");
    Undly_55.add_attribute("CashTyp", "DIFF"); // 1
    Undly_55_set.insert("DIFF");
    Undly_55.add_attribute("Px", "7101459.840000"); // 1
    Undly_55_set.insert("7101459.840000");
    Undly_55.add_attribute("DirtPx", "21401442.690000"); // 1
    Undly_55_set.insert("21401442.690000");
    Undly_55.add_attribute("EndPx", "21175726.080000"); // 1
    Undly_55_set.insert("21175726.080000");
    Undly_55.add_attribute("StartVal", "UnderlyingStartValue_t_499017582"); // 1
    Undly_55_set.insert("UnderlyingStartValue_t_499017582");
    Undly_55.add_attribute("CurVal", "UnderlyingCurrentValue_t_819077853"); // 1
    Undly_55_set.insert("UnderlyingCurrentValue_t_819077853");
    Undly_55.add_attribute("EndVal", "UnderlyingEndValue_t_347208971"); // 1
    Undly_55_set.insert("UnderlyingEndValue_t_347208971");
    Undly_55.add_attribute("AdjQty", "13487070.080000"); // 1
    Undly_55_set.insert("13487070.080000");
    Undly_55.add_attribute("FxRate", "11337977.310000"); // 1
    Undly_55_set.insert("11337977.310000");
    Undly_55.add_attribute("FxRateCalc", "M"); // 1
    Undly_55_set.insert("M");
    Undly_55.add_attribute("CapValu", "UnderlyingCapValue_t_1868068121"); // 1
    Undly_55_set.insert("UnderlyingCapValue_t_1868068121");
    Undly_55.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1257406917"); // 1
    Undly_55_set.insert("UnderlyingSettlMethod_t_1257406917");
    Undly_55.add_attribute("PutCall", "115412253"); // 1
    Undly_55_set.insert("115412253");
    all_values.push_back(Undly_55_set);
    all_compo_names.insert("Undly_55_set");

    {
      xml_element UndAID_55{"UndAID"};
      multiset<string> UndAID_55_set;
      UndAID_55.add_attribute("AltID", "UnderlyingSecurityAltID_t_21650401"); // 2
      UndAID_55_set.insert("UnderlyingSecurityAltID_t_21650401");
      UndAID_55.add_attribute("AltIDSrc", "9"); // 2
      UndAID_55_set.insert("9");
      all_values.push_back(UndAID_55_set);
      all_compo_names.insert("UndAID_55_set");

      Undly_55.add_element(UndAID_55);
    }
    {
      xml_element Stip_82{"Stip"};
      multiset<string> Stip_82_set;
      Stip_82.add_attribute("Typ", "POOL"); // 2
      Stip_82_set.insert("POOL");
      Stip_82.add_attribute("Val", "UnderlyingStipValue_t_1911310104"); // 2
      Stip_82_set.insert("UnderlyingStipValue_t_1911310104");
      all_values.push_back(Stip_82_set);
      all_compo_names.insert("Stip_82_set");

      Undly_55.add_element(Stip_82);
    }
    {
      xml_element Pty_232{"Pty"};
      multiset<string> Pty_232_set;
      Pty_232.add_attribute("ID", "UnderlyingInstrumentPartyID_t_878056248"); // 2
      Pty_232_set.insert("UnderlyingInstrumentPartyID_t_878056248");
      Pty_232.add_attribute("Src", "2"); // 2
      Pty_232_set.insert("2");
      Pty_232.add_attribute("R", "69"); // 2
      Pty_232_set.insert("69");
      all_values.push_back(Pty_232_set);
      all_compo_names.insert("Pty_232_set");

      {
        xml_element Sub_232{"Sub"};
        multiset<string> Sub_232_set;
        Sub_232.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_659743473"); // 3
        Sub_232_set.insert("UnderlyingInstrumentPartySubID_t_659743473");
        Sub_232.add_attribute("Typ", "22"); // 3
        Sub_232_set.insert("22");
        all_values.push_back(Sub_232_set);
        all_compo_names.insert("Sub_232_set");

        Pty_232.add_element(Sub_232);
      }
      Undly_55.add_element(Pty_232);
    }
    elt.add_element(Undly_55);
  } // end Undly
  { // Leg
    xml_element Leg_56{"Leg"};
    multiset<string> Leg_56_set;
    Leg_56.add_attribute("Sym", "LegSymbol_t_1731615798"); // 1
    Leg_56_set.insert("LegSymbol_t_1731615798");
    Leg_56.add_attribute("Sfx", "CD"); // 1
    Leg_56_set.insert("CD");
    Leg_56.add_attribute("ID", "LegSecurityID_t_1125234814"); // 1
    Leg_56_set.insert("LegSecurityID_t_1125234814");
    Leg_56.add_attribute("Src", "1"); // 1
    Leg_56_set.insert("1");
    Leg_56.add_attribute("Prod", "10"); // 1
    Leg_56_set.insert("10");
    Leg_56.add_attribute("CFI", "LegCFICode_t_1844716650"); // 1
    Leg_56_set.insert("LegCFICode_t_1844716650");
    Leg_56.add_attribute("SecTyp", "MPT"); // 1
    Leg_56_set.insert("MPT");
    Leg_56.add_attribute("SecSubTyp", "LegSecuritySubType_t_669373428"); // 1
    Leg_56_set.insert("LegSecuritySubType_t_669373428");
    Leg_56.add_attribute("MMY", "767971199"); // 1
    Leg_56_set.insert("767971199");
    Leg_56.add_attribute("Mat", "LegMaturityDate_t_1543936271"); // 1
    Leg_56_set.insert("LegMaturityDate_t_1543936271");
    Leg_56.add_attribute("MatTm", "662034049"); // 1
    Leg_56_set.insert("662034049");
    Leg_56.add_attribute("CpnPmt", "LegCouponPaymentDate_t_738060159"); // 1
    Leg_56_set.insert("LegCouponPaymentDate_t_738060159");
    Leg_56.add_attribute("Issued", "LegIssueDate_t_2042953853"); // 1
    Leg_56_set.insert("LegIssueDate_t_2042953853");
    Leg_56.add_attribute("RepoCollSecTyp", "1481111902"); // 1
    Leg_56_set.insert("1481111902");
    Leg_56.add_attribute("RepoTrm", "1085269130"); // 1
    Leg_56_set.insert("1085269130");
    Leg_56.add_attribute("RepoRt", "12441772.130000"); // 1
    Leg_56_set.insert("12441772.130000");
    Leg_56.add_attribute("Fctr", "4674259.850000"); // 1
    Leg_56_set.insert("4674259.850000");
    Leg_56.add_attribute("CrdRtg", "LegCreditRating_t_2007525326"); // 1
    Leg_56_set.insert("LegCreditRating_t_2007525326");
    Leg_56.add_attribute("Rgstry", "LegInstrRegistry_t_964761686"); // 1
    Leg_56_set.insert("LegInstrRegistry_t_964761686");
    Leg_56.add_attribute("Ctry", "1724832902"); // 1
    Leg_56_set.insert("1724832902");
    Leg_56.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2122937580"); // 1
    Leg_56_set.insert("LegStateOrProvinceOfIssue_t_2122937580");
    Leg_56.add_attribute("Lcl", "LegLocaleOfIssue_t_986412088"); // 1
    Leg_56_set.insert("LegLocaleOfIssue_t_986412088");
    Leg_56.add_attribute("Redeem", "LegRedemptionDate_t_840181382"); // 1
    Leg_56_set.insert("LegRedemptionDate_t_840181382");
    Leg_56.add_attribute("Strk", "7814832.750000"); // 1
    Leg_56_set.insert("7814832.750000");
    Leg_56.add_attribute("StrkCcy", "CHF"); // 1
    Leg_56_set.insert("CHF");
    Leg_56.add_attribute("OptA", "687294080"); // 1
    Leg_56_set.insert("687294080");
    Leg_56.add_attribute("Cmult", "16863226.830000"); // 1
    Leg_56_set.insert("16863226.830000");
    Leg_56.add_attribute("MultTyp", "1"); // 1
    Leg_56_set.insert("1");
    Leg_56.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_56_set.insert("2");
    Leg_56.add_attribute("UOM", "Bcf"); // 1
    Leg_56_set.insert("Bcf");
    Leg_56.add_attribute("UOMQty", "19621132.540000"); // 1
    Leg_56_set.insert("19621132.540000");
    Leg_56.add_attribute("PxUOM", "t"); // 1
    Leg_56_set.insert("t");
    Leg_56.add_attribute("PxUOMQty", "10909784.090000"); // 1
    Leg_56_set.insert("10909784.090000");
    Leg_56.add_attribute("TmUnit", "Mo"); // 1
    Leg_56_set.insert("Mo");
    Leg_56.add_attribute("ExerStyle", "2"); // 1
    Leg_56_set.insert("2");
    Leg_56.add_attribute("CpnRt", "7882114.110000"); // 1
    Leg_56_set.insert("7882114.110000");
    Leg_56.add_attribute("Exch", "LegSecurityExchange_t_664753464"); // 1
    Leg_56_set.insert("LegSecurityExchange_t_664753464");
    Leg_56.add_attribute("Issr", "LegIssuer_t_1906918391"); // 1
    Leg_56_set.insert("LegIssuer_t_1906918391");
    Leg_56.add_attribute("EncLegIssrLen", "1556182610"); // 1
    Leg_56_set.insert("1556182610");
    Leg_56.add_attribute("EncLegIssr", "EncodedLegIssuer_t_61206087"); // 1
    Leg_56_set.insert("EncodedLegIssuer_t_61206087");
    Leg_56.add_attribute("Desc", "LegSecurityDesc_t_421468792"); // 1
    Leg_56_set.insert("LegSecurityDesc_t_421468792");
    Leg_56.add_attribute("EncLegSecDescLen", "146759122"); // 1
    Leg_56_set.insert("146759122");
    Leg_56.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2104159940"); // 1
    Leg_56_set.insert("EncodedLegSecurityDesc_t_2104159940");
    Leg_56.add_attribute("RatioQty", "19025806.940000"); // 1
    Leg_56_set.insert("19025806.940000");
    Leg_56.add_attribute("Side", "D"); // 1
    Leg_56_set.insert("D");
    Leg_56.add_attribute("Ccy", "USD"); // 1
    Leg_56_set.insert("USD");
    Leg_56.add_attribute("Pool", "LegPool_t_1092069931"); // 1
    Leg_56_set.insert("LegPool_t_1092069931");
    Leg_56.add_attribute("Dated", "LegDatedDate_t_18131544"); // 1
    Leg_56_set.insert("LegDatedDate_t_18131544");
    Leg_56.add_attribute("CSetMo", "1947355934"); // 1
    Leg_56_set.insert("1947355934");
    Leg_56.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1067523863"); // 1
    Leg_56_set.insert("LegInterestAccrualDate_t_1067523863");
    Leg_56.add_attribute("PutCall", "1004543632"); // 1
    Leg_56_set.insert("1004543632");
    Leg_56.add_attribute("LegOptionRatio", "6400536.690000"); // 1
    Leg_56_set.insert("6400536.690000");
    Leg_56.add_attribute("Px", "18490071.380000"); // 1
    Leg_56_set.insert("18490071.380000");
    all_values.push_back(Leg_56_set);
    all_compo_names.insert("Leg_56_set");

    {
      xml_element LegAID_56{"LegAID"};
      multiset<string> LegAID_56_set;
      LegAID_56.add_attribute("SecAltID", "LegSecurityAltID_t_1754782176"); // 2
      LegAID_56_set.insert("LegSecurityAltID_t_1754782176");
      LegAID_56.add_attribute("SecAltIDSrc", "1"); // 2
      LegAID_56_set.insert("1");
      all_values.push_back(LegAID_56_set);
      all_compo_names.insert("LegAID_56_set");

      Leg_56.add_element(LegAID_56);
    }
    elt.add_element(Leg_56);
  } // end Leg
  { // Leg
    xml_element Leg_57{"Leg"};
    multiset<string> Leg_57_set;
    Leg_57.add_attribute("Sym", "LegSymbol_t_388817571"); // 1
    Leg_57_set.insert("LegSymbol_t_388817571");
    Leg_57.add_attribute("Sfx", "CD"); // 1
    Leg_57_set.insert("CD");
    Leg_57.add_attribute("ID", "LegSecurityID_t_441305108"); // 1
    Leg_57_set.insert("LegSecurityID_t_441305108");
    Leg_57.add_attribute("Src", "4"); // 1
    Leg_57_set.insert("4");
    Leg_57.add_attribute("Prod", "9"); // 1
    Leg_57_set.insert("9");
    Leg_57.add_attribute("CFI", "LegCFICode_t_255934715"); // 1
    Leg_57_set.insert("LegCFICode_t_255934715");
    Leg_57.add_attribute("SecTyp", "OOC"); // 1
    Leg_57_set.insert("OOC");
    Leg_57.add_attribute("SecSubTyp", "LegSecuritySubType_t_202859568"); // 1
    Leg_57_set.insert("LegSecuritySubType_t_202859568");
    Leg_57.add_attribute("MMY", "86897892"); // 1
    Leg_57_set.insert("86897892");
    Leg_57.add_attribute("Mat", "LegMaturityDate_t_963608302"); // 1
    Leg_57_set.insert("LegMaturityDate_t_963608302");
    Leg_57.add_attribute("MatTm", "991070980"); // 1
    Leg_57_set.insert("991070980");
    Leg_57.add_attribute("CpnPmt", "LegCouponPaymentDate_t_751651356"); // 1
    Leg_57_set.insert("LegCouponPaymentDate_t_751651356");
    Leg_57.add_attribute("Issued", "LegIssueDate_t_723043046"); // 1
    Leg_57_set.insert("LegIssueDate_t_723043046");
    Leg_57.add_attribute("RepoCollSecTyp", "399769942"); // 1
    Leg_57_set.insert("399769942");
    Leg_57.add_attribute("RepoTrm", "812857443"); // 1
    Leg_57_set.insert("812857443");
    Leg_57.add_attribute("RepoRt", "11445118.380000"); // 1
    Leg_57_set.insert("11445118.380000");
    Leg_57.add_attribute("Fctr", "5465290.640000"); // 1
    Leg_57_set.insert("5465290.640000");
    Leg_57.add_attribute("CrdRtg", "LegCreditRating_t_769533735"); // 1
    Leg_57_set.insert("LegCreditRating_t_769533735");
    Leg_57.add_attribute("Rgstry", "LegInstrRegistry_t_899608885"); // 1
    Leg_57_set.insert("LegInstrRegistry_t_899608885");
    Leg_57.add_attribute("Ctry", "1778557317"); // 1
    Leg_57_set.insert("1778557317");
    Leg_57.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1970387241"); // 1
    Leg_57_set.insert("LegStateOrProvinceOfIssue_t_1970387241");
    Leg_57.add_attribute("Lcl", "LegLocaleOfIssue_t_1122131917"); // 1
    Leg_57_set.insert("LegLocaleOfIssue_t_1122131917");
    Leg_57.add_attribute("Redeem", "LegRedemptionDate_t_723143600"); // 1
    Leg_57_set.insert("LegRedemptionDate_t_723143600");
    Leg_57.add_attribute("Strk", "19885187.860000"); // 1
    Leg_57_set.insert("19885187.860000");
    Leg_57.add_attribute("StrkCcy", "EUR"); // 1
    Leg_57_set.insert("EUR");
    Leg_57.add_attribute("OptA", "845578770"); // 1
    Leg_57_set.insert("845578770");
    Leg_57.add_attribute("Cmult", "15620578.720000"); // 1
    Leg_57_set.insert("15620578.720000");
    Leg_57.add_attribute("MultTyp", "1"); // 1
    Leg_57_set.insert("1");
    Leg_57.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_57_set.insert("4");
    Leg_57.add_attribute("UOM", "MMBtu"); // 1
    Leg_57_set.insert("MMBtu");
    Leg_57.add_attribute("UOMQty", "18810085.240000"); // 1
    Leg_57_set.insert("18810085.240000");
    Leg_57.add_attribute("PxUOM", "t"); // 1
    Leg_57_set.insert("t");
    Leg_57.add_attribute("PxUOMQty", "666869.850000"); // 1
    Leg_57_set.insert("666869.850000");
    Leg_57.add_attribute("TmUnit", "Mo"); // 1
    Leg_57_set.insert("Mo");
    Leg_57.add_attribute("ExerStyle", "2"); // 1
    Leg_57_set.insert("2");
    Leg_57.add_attribute("CpnRt", "3226217.000000"); // 1
    Leg_57_set.insert("3226217.000000");
    Leg_57.add_attribute("Exch", "LegSecurityExchange_t_708793428"); // 1
    Leg_57_set.insert("LegSecurityExchange_t_708793428");
    Leg_57.add_attribute("Issr", "LegIssuer_t_1061239238"); // 1
    Leg_57_set.insert("LegIssuer_t_1061239238");
    Leg_57.add_attribute("EncLegIssrLen", "409519592"); // 1
    Leg_57_set.insert("409519592");
    Leg_57.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1672401731"); // 1
    Leg_57_set.insert("EncodedLegIssuer_t_1672401731");
    Leg_57.add_attribute("Desc", "LegSecurityDesc_t_2052310218"); // 1
    Leg_57_set.insert("LegSecurityDesc_t_2052310218");
    Leg_57.add_attribute("EncLegSecDescLen", "1161170948"); // 1
    Leg_57_set.insert("1161170948");
    Leg_57.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_247961129"); // 1
    Leg_57_set.insert("EncodedLegSecurityDesc_t_247961129");
    Leg_57.add_attribute("RatioQty", "3045965.130000"); // 1
    Leg_57_set.insert("3045965.130000");
    Leg_57.add_attribute("Side", "8"); // 1
    Leg_57_set.insert("8");
    Leg_57.add_attribute("Ccy", "CAN"); // 1
    Leg_57_set.insert("CAN");
    Leg_57.add_attribute("Pool", "LegPool_t_596078478"); // 1
    Leg_57_set.insert("LegPool_t_596078478");
    Leg_57.add_attribute("Dated", "LegDatedDate_t_144598204"); // 1
    Leg_57_set.insert("LegDatedDate_t_144598204");
    Leg_57.add_attribute("CSetMo", "482199246"); // 1
    Leg_57_set.insert("482199246");
    Leg_57.add_attribute("IntAcrl", "LegInterestAccrualDate_t_418982072"); // 1
    Leg_57_set.insert("LegInterestAccrualDate_t_418982072");
    Leg_57.add_attribute("PutCall", "1266730121"); // 1
    Leg_57_set.insert("1266730121");
    Leg_57.add_attribute("LegOptionRatio", "12053428.460000"); // 1
    Leg_57_set.insert("12053428.460000");
    Leg_57.add_attribute("Px", "2600172.100000"); // 1
    Leg_57_set.insert("2600172.100000");
    all_values.push_back(Leg_57_set);
    all_compo_names.insert("Leg_57_set");

    {
      xml_element LegAID_57{"LegAID"};
      multiset<string> LegAID_57_set;
      LegAID_57.add_attribute("SecAltID", "LegSecurityAltID_t_41250677"); // 2
      LegAID_57_set.insert("LegSecurityAltID_t_41250677");
      LegAID_57.add_attribute("SecAltIDSrc", "G"); // 2
      LegAID_57_set.insert("G");
      all_values.push_back(LegAID_57_set);
      all_compo_names.insert("LegAID_57_set");

      Leg_57.add_element(LegAID_57);
    }
    elt.add_element(Leg_57);
  } // end Leg
  { // Leg
    xml_element Leg_58{"Leg"};
    multiset<string> Leg_58_set;
    Leg_58.add_attribute("Sym", "LegSymbol_t_1105595980"); // 1
    Leg_58_set.insert("LegSymbol_t_1105595980");
    Leg_58.add_attribute("Sfx", "WI"); // 1
    Leg_58_set.insert("WI");
    Leg_58.add_attribute("ID", "LegSecurityID_t_193233967"); // 1
    Leg_58_set.insert("LegSecurityID_t_193233967");
    Leg_58.add_attribute("Src", "C"); // 1
    Leg_58_set.insert("C");
    Leg_58.add_attribute("Prod", "11"); // 1
    Leg_58_set.insert("11");
    Leg_58.add_attribute("CFI", "LegCFICode_t_2074242491"); // 1
    Leg_58_set.insert("LegCFICode_t_2074242491");
    Leg_58.add_attribute("SecTyp", "SECPLEDGE"); // 1
    Leg_58_set.insert("SECPLEDGE");
    Leg_58.add_attribute("SecSubTyp", "LegSecuritySubType_t_1295377411"); // 1
    Leg_58_set.insert("LegSecuritySubType_t_1295377411");
    Leg_58.add_attribute("MMY", "909488933"); // 1
    Leg_58_set.insert("909488933");
    Leg_58.add_attribute("Mat", "LegMaturityDate_t_2015867812"); // 1
    Leg_58_set.insert("LegMaturityDate_t_2015867812");
    Leg_58.add_attribute("MatTm", "1617999111"); // 1
    Leg_58_set.insert("1617999111");
    Leg_58.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1618282361"); // 1
    Leg_58_set.insert("LegCouponPaymentDate_t_1618282361");
    Leg_58.add_attribute("Issued", "LegIssueDate_t_929623403"); // 1
    Leg_58_set.insert("LegIssueDate_t_929623403");
    Leg_58.add_attribute("RepoCollSecTyp", "2027518703"); // 1
    Leg_58_set.insert("2027518703");
    Leg_58.add_attribute("RepoTrm", "1143200444"); // 1
    Leg_58_set.insert("1143200444");
    Leg_58.add_attribute("RepoRt", "8344499.730000"); // 1
    Leg_58_set.insert("8344499.730000");
    Leg_58.add_attribute("Fctr", "10412060.030000"); // 1
    Leg_58_set.insert("10412060.030000");
    Leg_58.add_attribute("CrdRtg", "LegCreditRating_t_1391161573"); // 1
    Leg_58_set.insert("LegCreditRating_t_1391161573");
    Leg_58.add_attribute("Rgstry", "LegInstrRegistry_t_1139046486"); // 1
    Leg_58_set.insert("LegInstrRegistry_t_1139046486");
    Leg_58.add_attribute("Ctry", "867750746"); // 1
    Leg_58_set.insert("867750746");
    Leg_58.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_636150893"); // 1
    Leg_58_set.insert("LegStateOrProvinceOfIssue_t_636150893");
    Leg_58.add_attribute("Lcl", "LegLocaleOfIssue_t_1990172064"); // 1
    Leg_58_set.insert("LegLocaleOfIssue_t_1990172064");
    Leg_58.add_attribute("Redeem", "LegRedemptionDate_t_1463829224"); // 1
    Leg_58_set.insert("LegRedemptionDate_t_1463829224");
    Leg_58.add_attribute("Strk", "7807490.970000"); // 1
    Leg_58_set.insert("7807490.970000");
    Leg_58.add_attribute("StrkCcy", "JPY"); // 1
    Leg_58_set.insert("JPY");
    Leg_58.add_attribute("OptA", "2047479219"); // 1
    Leg_58_set.insert("2047479219");
    Leg_58.add_attribute("Cmult", "15302305.090000"); // 1
    Leg_58_set.insert("15302305.090000");
    Leg_58.add_attribute("MultTyp", "2"); // 1
    Leg_58_set.insert("2");
    Leg_58.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_58_set.insert("1");
    Leg_58.add_attribute("UOM", "Alw"); // 1
    Leg_58_set.insert("Alw");
    Leg_58.add_attribute("UOMQty", "11009408.390000"); // 1
    Leg_58_set.insert("11009408.390000");
    Leg_58.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_58_set.insert("MMbbl");
    Leg_58.add_attribute("PxUOMQty", "4245074.890000"); // 1
    Leg_58_set.insert("4245074.890000");
    Leg_58.add_attribute("TmUnit", "H"); // 1
    Leg_58_set.insert("H");
    Leg_58.add_attribute("ExerStyle", "2"); // 1
    Leg_58_set.insert("2");
    Leg_58.add_attribute("CpnRt", "3512663.330000"); // 1
    Leg_58_set.insert("3512663.330000");
    Leg_58.add_attribute("Exch", "LegSecurityExchange_t_1669418613"); // 1
    Leg_58_set.insert("LegSecurityExchange_t_1669418613");
    Leg_58.add_attribute("Issr", "LegIssuer_t_1921138986"); // 1
    Leg_58_set.insert("LegIssuer_t_1921138986");
    Leg_58.add_attribute("EncLegIssrLen", "1260755266"); // 1
    Leg_58_set.insert("1260755266");
    Leg_58.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1537802777"); // 1
    Leg_58_set.insert("EncodedLegIssuer_t_1537802777");
    Leg_58.add_attribute("Desc", "LegSecurityDesc_t_1391654449"); // 1
    Leg_58_set.insert("LegSecurityDesc_t_1391654449");
    Leg_58.add_attribute("EncLegSecDescLen", "731553979"); // 1
    Leg_58_set.insert("731553979");
    Leg_58.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_319942532"); // 1
    Leg_58_set.insert("EncodedLegSecurityDesc_t_319942532");
    Leg_58.add_attribute("RatioQty", "12716895.040000"); // 1
    Leg_58_set.insert("12716895.040000");
    Leg_58.add_attribute("Side", "9"); // 1
    Leg_58_set.insert("9");
    Leg_58.add_attribute("Ccy", "EUR"); // 1
    Leg_58_set.insert("EUR");
    Leg_58.add_attribute("Pool", "LegPool_t_1118432349"); // 1
    Leg_58_set.insert("LegPool_t_1118432349");
    Leg_58.add_attribute("Dated", "LegDatedDate_t_145955344"); // 1
    Leg_58_set.insert("LegDatedDate_t_145955344");
    Leg_58.add_attribute("CSetMo", "1033162605"); // 1
    Leg_58_set.insert("1033162605");
    Leg_58.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1754583242"); // 1
    Leg_58_set.insert("LegInterestAccrualDate_t_1754583242");
    Leg_58.add_attribute("PutCall", "2136127408"); // 1
    Leg_58_set.insert("2136127408");
    Leg_58.add_attribute("LegOptionRatio", "3495081.820000"); // 1
    Leg_58_set.insert("3495081.820000");
    Leg_58.add_attribute("Px", "3878486.920000"); // 1
    Leg_58_set.insert("3878486.920000");
    all_values.push_back(Leg_58_set);
    all_compo_names.insert("Leg_58_set");

    {
      xml_element LegAID_58{"LegAID"};
      multiset<string> LegAID_58_set;
      LegAID_58.add_attribute("SecAltID", "LegSecurityAltID_t_313531423"); // 2
      LegAID_58_set.insert("LegSecurityAltID_t_313531423");
      LegAID_58.add_attribute("SecAltIDSrc", "3"); // 2
      LegAID_58_set.insert("3");
      all_values.push_back(LegAID_58_set);
      all_compo_names.insert("LegAID_58_set");

      Leg_58.add_element(LegAID_58);
    }
    elt.add_element(Leg_58);
  } // end Leg
  { // DsplyInstr
    xml_element DsplyInstr_3{"DsplyInstr"};
    multiset<string> DsplyInstr_3_set;
    DsplyInstr_3.add_attribute("DisplayQty", "2878442.630000"); // 1
    DsplyInstr_3_set.insert("2878442.630000");
    DsplyInstr_3.add_attribute("SecDspQty", "18437619.320000"); // 1
    DsplyInstr_3_set.insert("18437619.320000");
    DsplyInstr_3.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_3_set.insert("2");
    DsplyInstr_3.add_attribute("DspMthd", "4"); // 1
    DsplyInstr_3_set.insert("4");
    DsplyInstr_3.add_attribute("DsplLwQty", "20750354.540000"); // 1
    DsplyInstr_3_set.insert("20750354.540000");
    DsplyInstr_3.add_attribute("DisplayHighQty", "11811215.280000"); // 1
    DsplyInstr_3_set.insert("11811215.280000");
    DsplyInstr_3.add_attribute("DspMinIncr", "17736453.080000"); // 1
    DsplyInstr_3_set.insert("17736453.080000");
    DsplyInstr_3.add_attribute("RfrshQty", "3520592.960000"); // 1
    DsplyInstr_3_set.insert("3520592.960000");
    all_values.push_back(DsplyInstr_3_set);
    all_compo_names.insert("DsplyInstr_3_set");

    elt.add_element(DsplyInstr_3);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_7{"TrdSes"};
    multiset<string> TrdSes_7_set;
    TrdSes_7.add_attribute("SesID", "1"); // 1
    TrdSes_7_set.insert("1");
    TrdSes_7.add_attribute("SesSub", "7"); // 1
    TrdSes_7_set.insert("7");
    all_values.push_back(TrdSes_7_set);
    all_compo_names.insert("TrdSes_7_set");

    elt.add_element(TrdSes_7);
  } // end TrdSes
  { // Stip
    xml_element Stip_83{"Stip"};
    multiset<string> Stip_83_set;
    Stip_83.add_attribute("Typ", "INSURED"); // 1
    Stip_83_set.insert("INSURED");
    Stip_83.add_attribute("Val", "StipulationValue_t_1964080895"); // 1
    Stip_83_set.insert("StipulationValue_t_1964080895");
    all_values.push_back(Stip_83_set);
    all_compo_names.insert("Stip_83_set");

    elt.add_element(Stip_83);
  } // end Stip
  { // Stip
    xml_element Stip_84{"Stip"};
    multiset<string> Stip_84_set;
    Stip_84.add_attribute("Typ", "HEP"); // 1
    Stip_84_set.insert("HEP");
    Stip_84.add_attribute("Val", "StipulationValue_t_1417233024"); // 1
    Stip_84_set.insert("StipulationValue_t_1417233024");
    all_values.push_back(Stip_84_set);
    all_compo_names.insert("Stip_84_set");

    elt.add_element(Stip_84);
  } // end Stip
  { // TrgrInstr
    xml_element TrgrInstr_3{"TrgrInstr"};
    multiset<string> TrgrInstr_3_set;
    TrgrInstr_3.add_attribute("TrgrTyp", "3"); // 1
    TrgrInstr_3_set.insert("3");
    TrgrInstr_3.add_attribute("TrgrActn", "2"); // 1
    TrgrInstr_3_set.insert("2");
    TrgrInstr_3.add_attribute("TrgrPx", "5414388.800000"); // 1
    TrgrInstr_3_set.insert("5414388.800000");
    TrgrInstr_3.add_attribute("TrgrSym", "TriggerSymbol_t_275422002"); // 1
    TrgrInstr_3_set.insert("TriggerSymbol_t_275422002");
    TrgrInstr_3.add_attribute("TrgrSecID", "TriggerSecurityID_t_2079641131"); // 1
    TrgrInstr_3_set.insert("TriggerSecurityID_t_2079641131");
    TrgrInstr_3.add_attribute("TrgrSecIDSrc", "3"); // 1
    TrgrInstr_3_set.insert("3");
    TrgrInstr_3.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1393854352"); // 1
    TrgrInstr_3_set.insert("TriggerSecurityDesc_t_1393854352");
    TrgrInstr_3.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_3_set.insert("5");
    TrgrInstr_3.add_attribute("TrgrPxTypScp", "1"); // 1
    TrgrInstr_3_set.insert("1");
    TrgrInstr_3.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_3_set.insert("U");
    TrgrInstr_3.add_attribute("TrgrNewPx", "667565.880000"); // 1
    TrgrInstr_3_set.insert("667565.880000");
    TrgrInstr_3.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_3_set.insert("2");
    TrgrInstr_3.add_attribute("TrgrNewQty", "13888026.380000"); // 1
    TrgrInstr_3_set.insert("13888026.380000");
    TrgrInstr_3.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_380288011"); // 1
    TrgrInstr_3_set.insert("TriggerTradingSessionID_t_380288011");
    TrgrInstr_3.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_26873710"); // 1
    TrgrInstr_3_set.insert("TriggerTradingSessionSubID_t_26873710");
    all_values.push_back(TrgrInstr_3_set);
    all_compo_names.insert("TrgrInstr_3_set");

    elt.add_element(TrgrInstr_3);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_17{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_17_set;
    SprdBnchmkCurve_17.add_attribute("Spread", "16766469.010000"); // 1
    SprdBnchmkCurve_17_set.insert("16766469.010000");
    SprdBnchmkCurve_17.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_17_set.insert("CAN");
    SprdBnchmkCurve_17.add_attribute("Name", "EONIA"); // 1
    SprdBnchmkCurve_17_set.insert("EONIA");
    SprdBnchmkCurve_17.add_attribute("Point", "BenchmarkCurvePoint_t_4118102"); // 1
    SprdBnchmkCurve_17_set.insert("BenchmarkCurvePoint_t_4118102");
    SprdBnchmkCurve_17.add_attribute("Px", "12881759.270000"); // 1
    SprdBnchmkCurve_17_set.insert("12881759.270000");
    SprdBnchmkCurve_17.add_attribute("PxTyp", "10"); // 1
    SprdBnchmkCurve_17_set.insert("10");
    SprdBnchmkCurve_17.add_attribute("SecID", "BenchmarkSecurityID_t_356177398"); // 1
    SprdBnchmkCurve_17_set.insert("BenchmarkSecurityID_t_356177398");
    SprdBnchmkCurve_17.add_attribute("SecIDSrc", "4"); // 1
    SprdBnchmkCurve_17_set.insert("4");
    all_values.push_back(SprdBnchmkCurve_17_set);
    all_compo_names.insert("SprdBnchmkCurve_17_set");

    elt.add_element(SprdBnchmkCurve_17);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_12{"Yield"};
    multiset<string> Yield_12_set;
    Yield_12.add_attribute("Typ", "ANNUAL"); // 1
    Yield_12_set.insert("ANNUAL");
    Yield_12.add_attribute("Yld", "10595030.270000"); // 1
    Yield_12_set.insert("10595030.270000");
    Yield_12.add_attribute("CalcDt", "YieldCalcDate_t_2048731241"); // 1
    Yield_12_set.insert("YieldCalcDate_t_2048731241");
    Yield_12.add_attribute("RedDt", "YieldRedemptionDate_t_1809400883"); // 1
    Yield_12_set.insert("YieldRedemptionDate_t_1809400883");
    Yield_12.add_attribute("RedPx", "8761002.740000"); // 1
    Yield_12_set.insert("8761002.740000");
    Yield_12.add_attribute("RedPxTyp", "7"); // 1
    Yield_12_set.insert("7");
    all_values.push_back(Yield_12_set);
    all_compo_names.insert("Yield_12_set");

    elt.add_element(Yield_12);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_3{"PegInstr"};
    multiset<string> PegInstr_3_set;
    PegInstr_3.add_attribute("OfstVal", "10791502.590000"); // 1
    PegInstr_3_set.insert("10791502.590000");
    PegInstr_3.add_attribute("PegPxTyp", "5"); // 1
    PegInstr_3_set.insert("5");
    PegInstr_3.add_attribute("MoveTyp", "1"); // 1
    PegInstr_3_set.insert("1");
    PegInstr_3.add_attribute("OfstTyp", "0"); // 1
    PegInstr_3_set.insert("0");
    PegInstr_3.add_attribute("LmtTyp", "1"); // 1
    PegInstr_3_set.insert("1");
    PegInstr_3.add_attribute("RndDir", "2"); // 1
    PegInstr_3_set.insert("2");
    PegInstr_3.add_attribute("Scope", "1"); // 1
    PegInstr_3_set.insert("1");
    PegInstr_3.add_attribute("PegSecurityIDSource", "A"); // 1
    PegInstr_3_set.insert("A");
    PegInstr_3.add_attribute("PegSecID", "PegSecurityID_t_1442072623"); // 1
    PegInstr_3_set.insert("PegSecurityID_t_1442072623");
    PegInstr_3.add_attribute("PgSymbl", "PegSymbol_t_1919969577"); // 1
    PegInstr_3_set.insert("PegSymbol_t_1919969577");
    PegInstr_3.add_attribute("PegSecDesc", "PegSecurityDesc_t_1946998153"); // 1
    PegInstr_3_set.insert("PegSecurityDesc_t_1946998153");
    all_values.push_back(PegInstr_3_set);
    all_compo_names.insert("PegInstr_3_set");

    elt.add_element(PegInstr_3);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_3{"DiscInstr"};
    multiset<string> DiscInstr_3_set;
    DiscInstr_3.add_attribute("DsctnInst", "3"); // 1
    DiscInstr_3_set.insert("3");
    DiscInstr_3.add_attribute("OfstValu", "18620074.570000"); // 1
    DiscInstr_3_set.insert("18620074.570000");
    DiscInstr_3.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_3_set.insert("0");
    DiscInstr_3.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_3_set.insert("3");
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
    xml_element StrtPrmGrp_9{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_9_set;
    StrtPrmGrp_9.add_attribute("StrtPrmNme", "StrategyParameterName_t_475734162"); // 1
    StrtPrmGrp_9_set.insert("StrategyParameterName_t_475734162");
    StrtPrmGrp_9.add_attribute("StrtPrmTyp", "24"); // 1
    StrtPrmGrp_9_set.insert("24");
    StrtPrmGrp_9.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1136627845"); // 1
    StrtPrmGrp_9_set.insert("StrategyParameterValue_t_1136627845");
    all_values.push_back(StrtPrmGrp_9_set);
    all_compo_names.insert("StrtPrmGrp_9_set");

    elt.add_element(StrtPrmGrp_9);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_10{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_10_set;
    StrtPrmGrp_10.add_attribute("StrtPrmNme", "StrategyParameterName_t_2007633235"); // 1
    StrtPrmGrp_10_set.insert("StrategyParameterName_t_2007633235");
    StrtPrmGrp_10.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_10_set.insert("23");
    StrtPrmGrp_10.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1970372122"); // 1
    StrtPrmGrp_10_set.insert("StrategyParameterValue_t_1970372122");
    all_values.push_back(StrtPrmGrp_10_set);
    all_compo_names.insert("StrtPrmGrp_10_set");

    elt.add_element(StrtPrmGrp_10);
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
