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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdCrss" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderCross_message_t_0;
  elt.add_attribute("ID", "CrossID_t_9453268"); // 0
  NewOrderCross_message_t_0.insert("CrossID_t_9453268");
  elt.add_attribute("Typ", "3"); // 0
  NewOrderCross_message_t_0.insert("3");
  elt.add_attribute("Priorty", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("SettlTyp", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("SettlDt", "SettlDate_t_1499510410"); // 0
  NewOrderCross_message_t_0.insert("SettlDate_t_1499510410");
  elt.add_attribute("HandlInst", "3"); // 0
  NewOrderCross_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "G"); // 0
  NewOrderCross_message_t_0.insert("G");
  elt.add_attribute("MinQty", "12956922.250000"); // 0
  NewOrderCross_message_t_0.insert("12956922.250000");
  elt.add_attribute("MtchInc", "18214965.210000"); // 0
  NewOrderCross_message_t_0.insert("18214965.210000");
  elt.add_attribute("MxPxLvls", "651554125"); // 0
  NewOrderCross_message_t_0.insert("651554125");
  elt.add_attribute("MaxFloor", "7591140.790000"); // 0
  NewOrderCross_message_t_0.insert("7591140.790000");
  elt.add_attribute("ExDest", "ExDestination_t_1612875605"); // 0
  NewOrderCross_message_t_0.insert("ExDestination_t_1612875605");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  NewOrderCross_message_t_0.insert("E");
  elt.add_attribute("ProcCode", "4"); // 0
  NewOrderCross_message_t_0.insert("4");
  elt.add_attribute("PrevClsPx", "20250080.660000"); // 0
  NewOrderCross_message_t_0.insert("20250080.660000");
  elt.add_attribute("LocReqd", "Y"); // 0
  NewOrderCross_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_388618784"); // 0
  NewOrderCross_message_t_0.insert("TransactTime_t_388618784");
  elt.add_attribute("TransBkdTm", "TransBkdTime_t_1027996697"); // 0
  NewOrderCross_message_t_0.insert("TransBkdTime_t_1027996697");
  elt.add_attribute("OrdTyp", "M"); // 0
  NewOrderCross_message_t_0.insert("M");
  elt.add_attribute("PxTyp", "18"); // 0
  NewOrderCross_message_t_0.insert("18");
  elt.add_attribute("Px", "2840773.620000"); // 0
  NewOrderCross_message_t_0.insert("2840773.620000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("StopPx", "5589546.940000"); // 0
  NewOrderCross_message_t_0.insert("5589546.940000");
  elt.add_attribute("Ccy", "USD"); // 0
  NewOrderCross_message_t_0.insert("USD");
  elt.add_attribute("ComplianceID", "ComplianceID_t_916411447"); // 0
  NewOrderCross_message_t_0.insert("ComplianceID_t_916411447");
  elt.add_attribute("IOIID", "IOIID_t_1579072725"); // 0
  NewOrderCross_message_t_0.insert("IOIID_t_1579072725");
  elt.add_attribute("QID", "QuoteID_t_1878275955"); // 0
  NewOrderCross_message_t_0.insert("QuoteID_t_1878275955");
  elt.add_attribute("TmInForce", "6"); // 0
  NewOrderCross_message_t_0.insert("6");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1450227563"); // 0
  NewOrderCross_message_t_0.insert("EffectiveTime_t_1450227563");
  elt.add_attribute("ExpireDt", "ExpireDate_t_782152951"); // 0
  NewOrderCross_message_t_0.insert("ExpireDate_t_782152951");
  elt.add_attribute("ExpireTm", "ExpireTime_t_644257104"); // 0
  NewOrderCross_message_t_0.insert("ExpireTime_t_644257104");
  elt.add_attribute("GTBkngInst", "0"); // 0
  NewOrderCross_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "6937604.060000"); // 0
  NewOrderCross_message_t_0.insert("6937604.060000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  NewOrderCross_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_414372336"); // 0
  NewOrderCross_message_t_0.insert("TargetStrategyParameters_t_414372336");
  elt.add_attribute("ParticipationRt", "19501460.110000"); // 0
  NewOrderCross_message_t_0.insert("19501460.110000");
  elt.add_attribute("CxllationRights", "O"); // 0
  NewOrderCross_message_t_0.insert("O");
  elt.add_attribute("MnyLaunderingStat", "2"); // 0
  NewOrderCross_message_t_0.insert("2");
  elt.add_attribute("RegistID", "RegistID_t_1624158884"); // 0
  NewOrderCross_message_t_0.insert("RegistID_t_1624158884");
  elt.add_attribute("Designation", "Designation_t_779468875"); // 0
  NewOrderCross_message_t_0.insert("Designation_t_779468875");
  all_values.push_back(NewOrderCross_message_t_0);
  all_compo_names.insert("NewOrderCross_message_t");

  { // Hdr
    xml_element Hdr_51{"Hdr"};
    multiset<string> Hdr_51_set;
    Hdr_51.add_attribute("SeqNum", "321694992"); // 1
    Hdr_51_set.insert("321694992");
    Hdr_51.add_attribute("SID", "SenderCompID_t_1089550842"); // 1
    Hdr_51_set.insert("SenderCompID_t_1089550842");
    Hdr_51.add_attribute("TID", "TargetCompID_t_154950475"); // 1
    Hdr_51_set.insert("TargetCompID_t_154950475");
    Hdr_51.add_attribute("OBID", "OnBehalfOfCompID_t_2043838426"); // 1
    Hdr_51_set.insert("OnBehalfOfCompID_t_2043838426");
    Hdr_51.add_attribute("D2ID", "DeliverToCompID_t_967075260"); // 1
    Hdr_51_set.insert("DeliverToCompID_t_967075260");
    Hdr_51.add_attribute("SSub", "SenderSubID_t_3379358"); // 1
    Hdr_51_set.insert("SenderSubID_t_3379358");
    Hdr_51.add_attribute("SLoc", "SenderLocationID_t_284973562"); // 1
    Hdr_51_set.insert("SenderLocationID_t_284973562");
    Hdr_51.add_attribute("TSub", "TargetSubID_t_1995071957"); // 1
    Hdr_51_set.insert("TargetSubID_t_1995071957");
    Hdr_51.add_attribute("TLoc", "TargetLocationID_t_1103820516"); // 1
    Hdr_51_set.insert("TargetLocationID_t_1103820516");
    Hdr_51.add_attribute("OBSub", "OnBehalfOfSubID_t_741556412"); // 1
    Hdr_51_set.insert("OnBehalfOfSubID_t_741556412");
    Hdr_51.add_attribute("OBLoc", "OnBehalfOfLocationID_t_131665671"); // 1
    Hdr_51_set.insert("OnBehalfOfLocationID_t_131665671");
    Hdr_51.add_attribute("D2Sub", "DeliverToSubID_t_1768798358"); // 1
    Hdr_51_set.insert("DeliverToSubID_t_1768798358");
    Hdr_51.add_attribute("D2Loc", "DeliverToLocationID_t_1300511106"); // 1
    Hdr_51_set.insert("DeliverToLocationID_t_1300511106");
    Hdr_51.add_attribute("PosDup", "N"); // 1
    Hdr_51_set.insert("N");
    Hdr_51.add_attribute("PosRsnd", "N"); // 1
    Hdr_51_set.insert("N");
    Hdr_51.add_attribute("Snt", "SendingTime_t_69438906"); // 1
    Hdr_51_set.insert("SendingTime_t_69438906");
    Hdr_51.add_attribute("OrigSnt", "OrigSendingTime_t_744052715"); // 1
    Hdr_51_set.insert("OrigSendingTime_t_744052715");
    Hdr_51.add_attribute("MsgEncd", "MessageEncoding_t_1233534020"); // 1
    Hdr_51_set.insert("MessageEncoding_t_1233534020");
    all_values.push_back(Hdr_51_set);
    all_compo_names.insert("Hdr_51_set");

    {
      xml_element Hop_51{"Hop"};
      multiset<string> Hop_51_set;
      Hop_51.add_attribute("ID", "HopCompID_t_704242742"); // 2
      Hop_51_set.insert("HopCompID_t_704242742");
      Hop_51.add_attribute("Ref", "46796630"); // 2
      Hop_51_set.insert("46796630");
      Hop_51.add_attribute("Snt", "HopSendingTime_t_2015686971"); // 2
      Hop_51_set.insert("HopSendingTime_t_2015686971");
      all_values.push_back(Hop_51_set);
      all_compo_names.insert("Hop_51_set");

      Hdr_51.add_element(Hop_51);
    }
    elt.add_element(Hdr_51);
  } // end Hdr
  { // Pty
    xml_element Pty_212{"Pty"};
    multiset<string> Pty_212_set;
    Pty_212.add_attribute("ID", "RootPartyID_t_1109142204"); // 1
    Pty_212_set.insert("RootPartyID_t_1109142204");
    Pty_212.add_attribute("Src", "4"); // 1
    Pty_212_set.insert("4");
    Pty_212.add_attribute("R", "58"); // 1
    Pty_212_set.insert("58");
    all_values.push_back(Pty_212_set);
    all_compo_names.insert("Pty_212_set");

    {
      xml_element Sub_212{"Sub"};
      multiset<string> Sub_212_set;
      Sub_212.add_attribute("ID", "RootPartySubID_t_1523514540"); // 2
      Sub_212_set.insert("RootPartySubID_t_1523514540");
      Sub_212.add_attribute("Typ", "26"); // 2
      Sub_212_set.insert("26");
      all_values.push_back(Sub_212_set);
      all_compo_names.insert("Sub_212_set");

      Pty_212.add_element(Sub_212);
    }
    elt.add_element(Pty_212);
  } // end Pty
  { // Pty
    xml_element Pty_213{"Pty"};
    multiset<string> Pty_213_set;
    Pty_213.add_attribute("ID", "RootPartyID_t_1455258949"); // 1
    Pty_213_set.insert("RootPartyID_t_1455258949");
    Pty_213.add_attribute("Src", "6"); // 1
    Pty_213_set.insert("6");
    Pty_213.add_attribute("R", "56"); // 1
    Pty_213_set.insert("56");
    all_values.push_back(Pty_213_set);
    all_compo_names.insert("Pty_213_set");

    {
      xml_element Sub_213{"Sub"};
      multiset<string> Sub_213_set;
      Sub_213.add_attribute("ID", "RootPartySubID_t_87244176"); // 2
      Sub_213_set.insert("RootPartySubID_t_87244176");
      Sub_213.add_attribute("Typ", "26"); // 2
      Sub_213_set.insert("26");
      all_values.push_back(Sub_213_set);
      all_compo_names.insert("Sub_213_set");

      Pty_213.add_element(Sub_213);
    }
    elt.add_element(Pty_213);
  } // end Pty
  { // Pty
    xml_element Pty_214{"Pty"};
    multiset<string> Pty_214_set;
    Pty_214.add_attribute("ID", "RootPartyID_t_930852171"); // 1
    Pty_214_set.insert("RootPartyID_t_930852171");
    Pty_214.add_attribute("Src", "9"); // 1
    Pty_214_set.insert("9");
    Pty_214.add_attribute("R", "5"); // 1
    Pty_214_set.insert("5");
    all_values.push_back(Pty_214_set);
    all_compo_names.insert("Pty_214_set");

    {
      xml_element Sub_214{"Sub"};
      multiset<string> Sub_214_set;
      Sub_214.add_attribute("ID", "RootPartySubID_t_1897927431"); // 2
      Sub_214_set.insert("RootPartySubID_t_1897927431");
      Sub_214.add_attribute("Typ", "6"); // 2
      Sub_214_set.insert("6");
      all_values.push_back(Sub_214_set);
      all_compo_names.insert("Sub_214_set");

      Pty_214.add_element(Sub_214);
    }
    elt.add_element(Pty_214);
  } // end Pty
  { // SideCrossMod
    xml_element SideCrossMod_1{"SideCrossMod"};
    multiset<string> SideCrossMod_1_set;
    SideCrossMod_1.add_attribute("Side", "E"); // 1
    SideCrossMod_1_set.insert("E");
    SideCrossMod_1.add_attribute("OrigClOrdID", "OrigClOrdID_t_1349394526"); // 1
    SideCrossMod_1_set.insert("OrigClOrdID_t_1349394526");
    SideCrossMod_1.add_attribute("ClOrdID", "ClOrdID_t_183191551"); // 1
    SideCrossMod_1_set.insert("ClOrdID_t_183191551");
    SideCrossMod_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1877181412"); // 1
    SideCrossMod_1_set.insert("SecondaryClOrdID_t_1877181412");
    SideCrossMod_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_970709237"); // 1
    SideCrossMod_1_set.insert("ClOrdLinkID_t_970709237");
    SideCrossMod_1.add_attribute("OrignDt", "TradeOriginationDate_t_1483702658"); // 1
    SideCrossMod_1_set.insert("TradeOriginationDate_t_1483702658");
    SideCrossMod_1.add_attribute("TrdDt", "TradeDate_t_1042161402"); // 1
    SideCrossMod_1_set.insert("TradeDate_t_1042161402");
    SideCrossMod_1.add_attribute("Acct", "Account_t_325967301"); // 1
    SideCrossMod_1_set.insert("Account_t_325967301");
    SideCrossMod_1.add_attribute("AcctIDSrc", "3"); // 1
    SideCrossMod_1_set.insert("3");
    SideCrossMod_1.add_attribute("AcctTyp", "3"); // 1
    SideCrossMod_1_set.insert("3");
    SideCrossMod_1.add_attribute("DayBkngInst", "2"); // 1
    SideCrossMod_1_set.insert("2");
    SideCrossMod_1.add_attribute("BkngUnit", "2"); // 1
    SideCrossMod_1_set.insert("2");
    SideCrossMod_1.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("AllocID", "AllocID_t_1427704645"); // 1
    SideCrossMod_1_set.insert("AllocID_t_1427704645");
    SideCrossMod_1.add_attribute("QtyTyp", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("Cpcty", "A"); // 1
    SideCrossMod_1_set.insert("A");
    SideCrossMod_1.add_attribute("Rstctions", "5"); // 1
    SideCrossMod_1_set.insert("5");
    SideCrossMod_1.add_attribute("PrTrdAnon", "false"); // 1
    SideCrossMod_1_set.insert("false");
    SideCrossMod_1.add_attribute("CustCpcty", "1"); // 1
    SideCrossMod_1_set.insert("1");
    SideCrossMod_1.add_attribute("ForexReq", "Y"); // 1
    SideCrossMod_1_set.insert("Y");
    SideCrossMod_1.add_attribute("SettlCcy", "CHF"); // 1
    SideCrossMod_1_set.insert("CHF");
    SideCrossMod_1.add_attribute("BkngTyp", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("Txt", "Text_t_33280533"); // 1
    SideCrossMod_1_set.insert("Text_t_33280533");
    SideCrossMod_1.add_attribute("EncTxtLen", "517102447"); // 1
    SideCrossMod_1_set.insert("517102447");
    SideCrossMod_1.add_attribute("EncTxt", "EncodedText_t_978964320"); // 1
    SideCrossMod_1_set.insert("EncodedText_t_978964320");
    SideCrossMod_1.add_attribute("PosEfct", "D"); // 1
    SideCrossMod_1_set.insert("D");
    SideCrossMod_1.add_attribute("Covered", "0"); // 1
    SideCrossMod_1_set.insert("0");
    SideCrossMod_1.add_attribute("CshMgn", "3"); // 1
    SideCrossMod_1_set.insert("3");
    SideCrossMod_1.add_attribute("ClrFeeInd", "F"); // 1
    SideCrossMod_1_set.insert("F");
    SideCrossMod_1.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_1_set.insert("Y");
    SideCrossMod_1.add_attribute("SideComplianceID", "SideComplianceID_t_327440197"); // 1
    SideCrossMod_1_set.insert("SideComplianceID_t_327440197");
    SideCrossMod_1.add_attribute("SideTmFrc", "SideTimeInForce_t_1870443722"); // 1
    SideCrossMod_1_set.insert("SideTimeInForce_t_1870443722");
    all_values.push_back(SideCrossMod_1_set);
    all_compo_names.insert("SideCrossMod_1_set");

    {
      xml_element Pty_215{"Pty"};
      multiset<string> Pty_215_set;
      Pty_215.add_attribute("ID", "PartyID_t_1446074362"); // 2
      Pty_215_set.insert("PartyID_t_1446074362");
      Pty_215.add_attribute("Src", "4"); // 2
      Pty_215_set.insert("4");
      Pty_215.add_attribute("R", "85"); // 2
      Pty_215_set.insert("85");
      all_values.push_back(Pty_215_set);
      all_compo_names.insert("Pty_215_set");

      {
        xml_element Sub_215{"Sub"};
        multiset<string> Sub_215_set;
        Sub_215.add_attribute("ID", "PartySubID_t_782293372"); // 3
        Sub_215_set.insert("PartySubID_t_782293372");
        Sub_215.add_attribute("Typ", "32"); // 3
        Sub_215_set.insert("32");
        all_values.push_back(Sub_215_set);
        all_compo_names.insert("Sub_215_set");

        Pty_215.add_element(Sub_215);
      }
      SideCrossMod_1.add_element(Pty_215);
    }
    {
      xml_element PreAll_4{"PreAll"};
      multiset<string> PreAll_4_set;
      PreAll_4.add_attribute("Acct", "AllocAccount_t_1019636612"); // 2
      PreAll_4_set.insert("AllocAccount_t_1019636612");
      PreAll_4.add_attribute("ActIDSrc", "5"); // 2
      PreAll_4_set.insert("5");
      PreAll_4.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_4_set.insert("USD");
      PreAll_4.add_attribute("IndAllocID", "IndividualAllocID_t_297851946"); // 2
      PreAll_4_set.insert("IndividualAllocID_t_297851946");
      PreAll_4.add_attribute("Qty", "4235569.330000"); // 2
      PreAll_4_set.insert("4235569.330000");
      all_values.push_back(PreAll_4_set);
      all_compo_names.insert("PreAll_4_set");

      {
        xml_element Pty_216{"Pty"};
        multiset<string> Pty_216_set;
        Pty_216.add_attribute("ID", "NestedPartyID_t_1859358931"); // 3
        Pty_216_set.insert("NestedPartyID_t_1859358931");
        Pty_216.add_attribute("Src", "C"); // 3
        Pty_216_set.insert("C");
        Pty_216.add_attribute("R", "33"); // 3
        Pty_216_set.insert("33");
        all_values.push_back(Pty_216_set);
        all_compo_names.insert("Pty_216_set");

        {
          xml_element Sub_216{"Sub"};
          multiset<string> Sub_216_set;
          Sub_216.add_attribute("ID", "NestedPartySubID_t_1701543657"); // 4
          Sub_216_set.insert("NestedPartySubID_t_1701543657");
          Sub_216.add_attribute("Typ", "18"); // 4
          Sub_216_set.insert("18");
          all_values.push_back(Sub_216_set);
          all_compo_names.insert("Sub_216_set");

          Pty_216.add_element(Sub_216);
        }
        PreAll_4.add_element(Pty_216);
      }
      SideCrossMod_1.add_element(PreAll_4);
    }
    {
      xml_element OrdQty_9{"OrdQty"};
      multiset<string> OrdQty_9_set;
      OrdQty_9.add_attribute("Qty", "13889264.330000"); // 2
      OrdQty_9_set.insert("13889264.330000");
      OrdQty_9.add_attribute("Cash", "19083544.770000"); // 2
      OrdQty_9_set.insert("19083544.770000");
      OrdQty_9.add_attribute("Pct", "1930662.150000"); // 2
      OrdQty_9_set.insert("1930662.150000");
      OrdQty_9.add_attribute("RndDir", "1"); // 2
      OrdQty_9_set.insert("1");
      OrdQty_9.add_attribute("RndMod", "19564666.260000"); // 2
      OrdQty_9_set.insert("19564666.260000");
      all_values.push_back(OrdQty_9_set);
      all_compo_names.insert("OrdQty_9_set");

      SideCrossMod_1.add_element(OrdQty_9);
    }
    {
      xml_element Comm_15{"Comm"};
      multiset<string> Comm_15_set;
      Comm_15.add_attribute("Comm", "Commission_t_226346748"); // 2
      Comm_15_set.insert("Commission_t_226346748");
      Comm_15.add_attribute("CommTyp", "3"); // 2
      Comm_15_set.insert("3");
      Comm_15.add_attribute("Ccy", "CAN"); // 2
      Comm_15_set.insert("CAN");
      Comm_15.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_15_set.insert("N");
      all_values.push_back(Comm_15_set);
      all_compo_names.insert("Comm_15_set");

      SideCrossMod_1.add_element(Comm_15);
    }
    elt.add_element(SideCrossMod_1);
  } // end SideCrossMod
  { // SideCrossMod
    xml_element SideCrossMod_2{"SideCrossMod"};
    multiset<string> SideCrossMod_2_set;
    SideCrossMod_2.add_attribute("Side", "B"); // 1
    SideCrossMod_2_set.insert("B");
    SideCrossMod_2.add_attribute("OrigClOrdID", "OrigClOrdID_t_1022871128"); // 1
    SideCrossMod_2_set.insert("OrigClOrdID_t_1022871128");
    SideCrossMod_2.add_attribute("ClOrdID", "ClOrdID_t_1951987717"); // 1
    SideCrossMod_2_set.insert("ClOrdID_t_1951987717");
    SideCrossMod_2.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1844795599"); // 1
    SideCrossMod_2_set.insert("SecondaryClOrdID_t_1844795599");
    SideCrossMod_2.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_745831202"); // 1
    SideCrossMod_2_set.insert("ClOrdLinkID_t_745831202");
    SideCrossMod_2.add_attribute("OrignDt", "TradeOriginationDate_t_1250578432"); // 1
    SideCrossMod_2_set.insert("TradeOriginationDate_t_1250578432");
    SideCrossMod_2.add_attribute("TrdDt", "TradeDate_t_1901933561"); // 1
    SideCrossMod_2_set.insert("TradeDate_t_1901933561");
    SideCrossMod_2.add_attribute("Acct", "Account_t_1439500513"); // 1
    SideCrossMod_2_set.insert("Account_t_1439500513");
    SideCrossMod_2.add_attribute("AcctIDSrc", "3"); // 1
    SideCrossMod_2_set.insert("3");
    SideCrossMod_2.add_attribute("AcctTyp", "4"); // 1
    SideCrossMod_2_set.insert("4");
    SideCrossMod_2.add_attribute("DayBkngInst", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("BkngUnit", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("PreallocMeth", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("AllocID", "AllocID_t_743307764"); // 1
    SideCrossMod_2_set.insert("AllocID_t_743307764");
    SideCrossMod_2.add_attribute("QtyTyp", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("Cpcty", "R"); // 1
    SideCrossMod_2_set.insert("R");
    SideCrossMod_2.add_attribute("Rstctions", "8"); // 1
    SideCrossMod_2_set.insert("8");
    SideCrossMod_2.add_attribute("PrTrdAnon", "true"); // 1
    SideCrossMod_2_set.insert("true");
    SideCrossMod_2.add_attribute("CustCpcty", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("ForexReq", "N"); // 1
    SideCrossMod_2_set.insert("N");
    SideCrossMod_2.add_attribute("SettlCcy", "EUR"); // 1
    SideCrossMod_2_set.insert("EUR");
    SideCrossMod_2.add_attribute("BkngTyp", "2"); // 1
    SideCrossMod_2_set.insert("2");
    SideCrossMod_2.add_attribute("Txt", "Text_t_420056268"); // 1
    SideCrossMod_2_set.insert("Text_t_420056268");
    SideCrossMod_2.add_attribute("EncTxtLen", "825759854"); // 1
    SideCrossMod_2_set.insert("825759854");
    SideCrossMod_2.add_attribute("EncTxt", "EncodedText_t_1726580511"); // 1
    SideCrossMod_2_set.insert("EncodedText_t_1726580511");
    SideCrossMod_2.add_attribute("PosEfct", "C"); // 1
    SideCrossMod_2_set.insert("C");
    SideCrossMod_2.add_attribute("Covered", "0"); // 1
    SideCrossMod_2_set.insert("0");
    SideCrossMod_2.add_attribute("CshMgn", "1"); // 1
    SideCrossMod_2_set.insert("1");
    SideCrossMod_2.add_attribute("ClrFeeInd", "I"); // 1
    SideCrossMod_2_set.insert("I");
    SideCrossMod_2.add_attribute("SolFlag", "Y"); // 1
    SideCrossMod_2_set.insert("Y");
    SideCrossMod_2.add_attribute("SideComplianceID", "SideComplianceID_t_1884399564"); // 1
    SideCrossMod_2_set.insert("SideComplianceID_t_1884399564");
    SideCrossMod_2.add_attribute("SideTmFrc", "SideTimeInForce_t_23612429"); // 1
    SideCrossMod_2_set.insert("SideTimeInForce_t_23612429");
    all_values.push_back(SideCrossMod_2_set);
    all_compo_names.insert("SideCrossMod_2_set");

    {
      xml_element Pty_217{"Pty"};
      multiset<string> Pty_217_set;
      Pty_217.add_attribute("ID", "PartyID_t_187226064"); // 2
      Pty_217_set.insert("PartyID_t_187226064");
      Pty_217.add_attribute("Src", "1"); // 2
      Pty_217_set.insert("1");
      Pty_217.add_attribute("R", "29"); // 2
      Pty_217_set.insert("29");
      all_values.push_back(Pty_217_set);
      all_compo_names.insert("Pty_217_set");

      {
        xml_element Sub_217{"Sub"};
        multiset<string> Sub_217_set;
        Sub_217.add_attribute("ID", "PartySubID_t_1437804496"); // 3
        Sub_217_set.insert("PartySubID_t_1437804496");
        Sub_217.add_attribute("Typ", "18"); // 3
        Sub_217_set.insert("18");
        all_values.push_back(Sub_217_set);
        all_compo_names.insert("Sub_217_set");

        Pty_217.add_element(Sub_217);
      }
      SideCrossMod_2.add_element(Pty_217);
    }
    {
      xml_element PreAll_5{"PreAll"};
      multiset<string> PreAll_5_set;
      PreAll_5.add_attribute("Acct", "AllocAccount_t_61460497"); // 2
      PreAll_5_set.insert("AllocAccount_t_61460497");
      PreAll_5.add_attribute("ActIDSrc", "99"); // 2
      PreAll_5_set.insert("99");
      PreAll_5.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_5_set.insert("CHF");
      PreAll_5.add_attribute("IndAllocID", "IndividualAllocID_t_1396532098"); // 2
      PreAll_5_set.insert("IndividualAllocID_t_1396532098");
      PreAll_5.add_attribute("Qty", "16342061.680000"); // 2
      PreAll_5_set.insert("16342061.680000");
      all_values.push_back(PreAll_5_set);
      all_compo_names.insert("PreAll_5_set");

      {
        xml_element Pty_218{"Pty"};
        multiset<string> Pty_218_set;
        Pty_218.add_attribute("ID", "NestedPartyID_t_1116421739"); // 3
        Pty_218_set.insert("NestedPartyID_t_1116421739");
        Pty_218.add_attribute("Src", "A"); // 3
        Pty_218_set.insert("A");
        Pty_218.add_attribute("R", "51"); // 3
        Pty_218_set.insert("51");
        all_values.push_back(Pty_218_set);
        all_compo_names.insert("Pty_218_set");

        {
          xml_element Sub_218{"Sub"};
          multiset<string> Sub_218_set;
          Sub_218.add_attribute("ID", "NestedPartySubID_t_1571604786"); // 4
          Sub_218_set.insert("NestedPartySubID_t_1571604786");
          Sub_218.add_attribute("Typ", "5"); // 4
          Sub_218_set.insert("5");
          all_values.push_back(Sub_218_set);
          all_compo_names.insert("Sub_218_set");

          Pty_218.add_element(Sub_218);
        }
        PreAll_5.add_element(Pty_218);
      }
      SideCrossMod_2.add_element(PreAll_5);
    }
    {
      xml_element OrdQty_10{"OrdQty"};
      multiset<string> OrdQty_10_set;
      OrdQty_10.add_attribute("Qty", "4406535.500000"); // 2
      OrdQty_10_set.insert("4406535.500000");
      OrdQty_10.add_attribute("Cash", "15808478.430000"); // 2
      OrdQty_10_set.insert("15808478.430000");
      OrdQty_10.add_attribute("Pct", "19746737.370000"); // 2
      OrdQty_10_set.insert("19746737.370000");
      OrdQty_10.add_attribute("RndDir", "0"); // 2
      OrdQty_10_set.insert("0");
      OrdQty_10.add_attribute("RndMod", "13509617.280000"); // 2
      OrdQty_10_set.insert("13509617.280000");
      all_values.push_back(OrdQty_10_set);
      all_compo_names.insert("OrdQty_10_set");

      SideCrossMod_2.add_element(OrdQty_10);
    }
    {
      xml_element Comm_16{"Comm"};
      multiset<string> Comm_16_set;
      Comm_16.add_attribute("Comm", "Commission_t_247246357"); // 2
      Comm_16_set.insert("Commission_t_247246357");
      Comm_16.add_attribute("CommTyp", "6"); // 2
      Comm_16_set.insert("6");
      Comm_16.add_attribute("Ccy", "EUR"); // 2
      Comm_16_set.insert("EUR");
      Comm_16.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_16_set.insert("Y");
      all_values.push_back(Comm_16_set);
      all_compo_names.insert("Comm_16_set");

      SideCrossMod_2.add_element(Comm_16);
    }
    elt.add_element(SideCrossMod_2);
  } // end SideCrossMod
  { // Instrmt
    xml_element Instrmt_40{"Instrmt"};
    multiset<string> Instrmt_40_set;
    Instrmt_40.add_attribute("Sym", "Symbol_t_1297102754"); // 1
    Instrmt_40_set.insert("Symbol_t_1297102754");
    Instrmt_40.add_attribute("Sfx", "CD"); // 1
    Instrmt_40_set.insert("CD");
    Instrmt_40.add_attribute("ID", "SecurityID_t_1670273906"); // 1
    Instrmt_40_set.insert("SecurityID_t_1670273906");
    Instrmt_40.add_attribute("Src", "F"); // 1
    Instrmt_40_set.insert("F");
    Instrmt_40.add_attribute("Prod", "12"); // 1
    Instrmt_40_set.insert("12");
    Instrmt_40.add_attribute("ProdCmplx", "ProductComplex_t_1857499971"); // 1
    Instrmt_40_set.insert("ProductComplex_t_1857499971");
    Instrmt_40.add_attribute("SecGrp", "SecurityGroup_t_468246538"); // 1
    Instrmt_40_set.insert("SecurityGroup_t_468246538");
    Instrmt_40.add_attribute("CFI", "CFICode_t_687446735"); // 1
    Instrmt_40_set.insert("CFICode_t_687446735");
    Instrmt_40.add_attribute("SecTyp", "CB"); // 1
    Instrmt_40_set.insert("CB");
    Instrmt_40.add_attribute("SubTyp", "SecuritySubType_t_1804407967"); // 1
    Instrmt_40_set.insert("SecuritySubType_t_1804407967");
    Instrmt_40.add_attribute("MMY", "748907233"); // 1
    Instrmt_40_set.insert("748907233");
    Instrmt_40.add_attribute("MatDt", "MaturityDate_t_323529824"); // 1
    Instrmt_40_set.insert("MaturityDate_t_323529824");
    Instrmt_40.add_attribute("MatTm", "1846835025"); // 1
    Instrmt_40_set.insert("1846835025");
    Instrmt_40.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1122021208"); // 1
    Instrmt_40_set.insert("SettleOnOpenFlag_t_1122021208");
    Instrmt_40.add_attribute("AsgnMeth", "1720061922"); // 1
    Instrmt_40_set.insert("1720061922");
    Instrmt_40.add_attribute("Status", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("CpnPmt", "CouponPaymentDate_t_90959300"); // 1
    Instrmt_40_set.insert("CouponPaymentDate_t_90959300");
    Instrmt_40.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_40_set.insert("FR");
    Instrmt_40.add_attribute("Snrty", "SR"); // 1
    Instrmt_40_set.insert("SR");
    Instrmt_40.add_attribute("NotlPctOut", "16625640.860000"); // 1
    Instrmt_40_set.insert("16625640.860000");
    Instrmt_40.add_attribute("OrigNotlPctOut", "9405018.000000"); // 1
    Instrmt_40_set.insert("9405018.000000");
    Instrmt_40.add_attribute("AttchPnt", "11287860.120000"); // 1
    Instrmt_40_set.insert("11287860.120000");
    Instrmt_40.add_attribute("DetchPnt", "10959282.810000"); // 1
    Instrmt_40_set.insert("10959282.810000");
    Instrmt_40.add_attribute("Issued", "IssueDate_t_767691889"); // 1
    Instrmt_40_set.insert("IssueDate_t_767691889");
    Instrmt_40.add_attribute("RepoCollSecTyp", "1896960981"); // 1
    Instrmt_40_set.insert("1896960981");
    Instrmt_40.add_attribute("RepoTrm", "299406362"); // 1
    Instrmt_40_set.insert("299406362");
    Instrmt_40.add_attribute("RepoRt", "10149382.460000"); // 1
    Instrmt_40_set.insert("10149382.460000");
    Instrmt_40.add_attribute("Fctr", "13434121.560000"); // 1
    Instrmt_40_set.insert("13434121.560000");
    Instrmt_40.add_attribute("CrdRtg", "CreditRating_t_1229464954"); // 1
    Instrmt_40_set.insert("CreditRating_t_1229464954");
    Instrmt_40.add_attribute("Rgstry", "InstrRegistry_t_1908587619"); // 1
    Instrmt_40_set.insert("InstrRegistry_t_1908587619");
    Instrmt_40.add_attribute("IssuCtry", "483480420"); // 1
    Instrmt_40_set.insert("483480420");
    Instrmt_40.add_attribute("StPrv", "StateOrProvinceOfIssue_t_379084060"); // 1
    Instrmt_40_set.insert("StateOrProvinceOfIssue_t_379084060");
    Instrmt_40.add_attribute("Lcl", "LocaleOfIssue_t_1802978293"); // 1
    Instrmt_40_set.insert("LocaleOfIssue_t_1802978293");
    Instrmt_40.add_attribute("Redeem", "RedemptionDate_t_6270678"); // 1
    Instrmt_40_set.insert("RedemptionDate_t_6270678");
    Instrmt_40.add_attribute("StrkPx", "14131027.300000"); // 1
    Instrmt_40_set.insert("14131027.300000");
    Instrmt_40.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_40_set.insert("CHF");
    Instrmt_40.add_attribute("StrkMult", "18813492.690000"); // 1
    Instrmt_40_set.insert("18813492.690000");
    Instrmt_40.add_attribute("StrkValu", "2609444.840000"); // 1
    Instrmt_40_set.insert("2609444.840000");
    Instrmt_40.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("StrkPxBndryMeth", "4"); // 1
    Instrmt_40_set.insert("4");
    Instrmt_40.add_attribute("StrkPxBndryPrcsn", "10098517.170000"); // 1
    Instrmt_40_set.insert("10098517.170000");
    Instrmt_40.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("OptAt", "1237624966"); // 1
    Instrmt_40_set.insert("1237624966");
    Instrmt_40.add_attribute("Mult", "21318729.250000"); // 1
    Instrmt_40_set.insert("21318729.250000");
    Instrmt_40.add_attribute("MultTyp", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_40_set.insert("4");
    Instrmt_40.add_attribute("MinPxIncr", "753485.770000"); // 1
    Instrmt_40_set.insert("753485.770000");
    Instrmt_40.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2100517684"); // 1
    Instrmt_40_set.insert("MinPriceIncrementAmount_t_2100517684");
    Instrmt_40.add_attribute("UOM", "oz_tr"); // 1
    Instrmt_40_set.insert("oz_tr");
    Instrmt_40.add_attribute("UOMQty", "17379126.640000"); // 1
    Instrmt_40_set.insert("17379126.640000");
    Instrmt_40.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_40_set.insert("Bu");
    Instrmt_40.add_attribute("PxUOMQty", "931336.910000"); // 1
    Instrmt_40_set.insert("931336.910000");
    Instrmt_40.add_attribute("SettlMeth", "P"); // 1
    Instrmt_40_set.insert("P");
    Instrmt_40.add_attribute("ExerStyle", "0"); // 1
    Instrmt_40_set.insert("0");
    Instrmt_40.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_40_set.insert("3");
    Instrmt_40.add_attribute("OptPayAmt", "OptPayoutAmount_t_985763659"); // 1
    Instrmt_40_set.insert("OptPayoutAmount_t_985763659");
    Instrmt_40.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_40_set.insert("PCTPAR");
    Instrmt_40.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_40_set.insert("FUT");
    Instrmt_40.add_attribute("ListMeth", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("CapPx", "2897862.940000"); // 1
    Instrmt_40_set.insert("2897862.940000");
    Instrmt_40.add_attribute("FlrPx", "16695036.010000"); // 1
    Instrmt_40_set.insert("16695036.010000");
    Instrmt_40.add_attribute("PutCall", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("FlexInd", "false"); // 1
    Instrmt_40_set.insert("false");
    Instrmt_40.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_40_set.insert("false");
    Instrmt_40.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_40_set.insert("Wk");
    Instrmt_40.add_attribute("CpnRt", "16662623.350000"); // 1
    Instrmt_40_set.insert("16662623.350000");
    Instrmt_40.add_attribute("Exch", "SecurityExchange_t_1392061281"); // 1
    Instrmt_40_set.insert("SecurityExchange_t_1392061281");
    Instrmt_40.add_attribute("PosLmt", "1593797377"); // 1
    Instrmt_40_set.insert("1593797377");
    Instrmt_40.add_attribute("NTPosLmt", "1927206819"); // 1
    Instrmt_40_set.insert("1927206819");
    Instrmt_40.add_attribute("Issr", "Issuer_t_108685454"); // 1
    Instrmt_40_set.insert("Issuer_t_108685454");
    Instrmt_40.add_attribute("EncIssrLen", "984587317"); // 1
    Instrmt_40_set.insert("984587317");
    Instrmt_40.add_attribute("EncIssr", "EncodedIssuer_t_789574888"); // 1
    Instrmt_40_set.insert("EncodedIssuer_t_789574888");
    Instrmt_40.add_attribute("Desc", "SecurityDesc_t_1296323099"); // 1
    Instrmt_40_set.insert("SecurityDesc_t_1296323099");
    Instrmt_40.add_attribute("EncSecDescLen", "74728635"); // 1
    Instrmt_40_set.insert("74728635");
    Instrmt_40.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_773964166"); // 1
    Instrmt_40_set.insert("EncodedSecurityDesc_t_773964166");
    Instrmt_40.add_attribute("Pool", "Pool_t_2056539019"); // 1
    Instrmt_40_set.insert("Pool_t_2056539019");
    Instrmt_40.add_attribute("CSetMo", "498427499"); // 1
    Instrmt_40_set.insert("498427499");
    Instrmt_40.add_attribute("CPPgm", "99"); // 1
    Instrmt_40_set.insert("99");
    Instrmt_40.add_attribute("CPRegT", "CPRegType_t_2009573055"); // 1
    Instrmt_40_set.insert("CPRegType_t_2009573055");
    Instrmt_40.add_attribute("Dated", "DatedDate_t_1610258826"); // 1
    Instrmt_40_set.insert("DatedDate_t_1610258826");
    Instrmt_40.add_attribute("IntAcrl", "InterestAccrualDate_t_439741759"); // 1
    Instrmt_40_set.insert("InterestAccrualDate_t_439741759");
    all_values.push_back(Instrmt_40_set);
    all_compo_names.insert("Instrmt_40_set");

    {
      xml_element AID_43{"AID"};
      multiset<string> AID_43_set;
      AID_43.add_attribute("AltID", "SecurityAltID_t_755625243"); // 2
      AID_43_set.insert("SecurityAltID_t_755625243");
      AID_43.add_attribute("AltIDSrc", "E"); // 2
      AID_43_set.insert("E");
      all_values.push_back(AID_43_set);
      all_compo_names.insert("AID_43_set");

      Instrmt_40.add_element(AID_43);
    }
    {
      xml_element SecXML_43{"SecXML"};
      multiset<string> SecXML_43_set;
      SecXML_43.add_attribute("Schema", "SecurityXMLSchema_t_1126099057"); // 2
      SecXML_43_set.insert("SecurityXMLSchema_t_1126099057");
      all_values.push_back(SecXML_43_set);
      all_compo_names.insert("SecXML_43_set");

      Instrmt_40.add_element(SecXML_43);
    }
    {
      xml_element Evnt_43{"Evnt"};
      multiset<string> Evnt_43_set;
      Evnt_43.add_attribute("EventTyp", "1"); // 2
      Evnt_43_set.insert("1");
      Evnt_43.add_attribute("Dt", "EventDate_t_1546003541"); // 2
      Evnt_43_set.insert("EventDate_t_1546003541");
      Evnt_43.add_attribute("Tm", "EventTime_t_2111862716"); // 2
      Evnt_43_set.insert("EventTime_t_2111862716");
      Evnt_43.add_attribute("Px", "7980516.430000"); // 2
      Evnt_43_set.insert("7980516.430000");
      Evnt_43.add_attribute("Txt", "EventText_t_584543074"); // 2
      Evnt_43_set.insert("EventText_t_584543074");
      all_values.push_back(Evnt_43_set);
      all_compo_names.insert("Evnt_43_set");

      Instrmt_40.add_element(Evnt_43);
    }
    {
      xml_element Pty_219{"Pty"};
      multiset<string> Pty_219_set;
      Pty_219.add_attribute("ID", "InstrumentPartyID_t_32124034"); // 2
      Pty_219_set.insert("InstrumentPartyID_t_32124034");
      Pty_219.add_attribute("Src", "I"); // 2
      Pty_219_set.insert("I");
      Pty_219.add_attribute("R", "42"); // 2
      Pty_219_set.insert("42");
      all_values.push_back(Pty_219_set);
      all_compo_names.insert("Pty_219_set");

      {
        xml_element Sub_219{"Sub"};
        multiset<string> Sub_219_set;
        Sub_219.add_attribute("ID", "InstrumentPartySubID_t_478953059"); // 3
        Sub_219_set.insert("InstrumentPartySubID_t_478953059");
        Sub_219.add_attribute("Typ", "4"); // 3
        Sub_219_set.insert("4");
        all_values.push_back(Sub_219_set);
        all_compo_names.insert("Sub_219_set");

        Pty_219.add_element(Sub_219);
      }
      Instrmt_40.add_element(Pty_219);
    }
    {
      xml_element CmplxEvnt_40{"CmplxEvnt"};
      multiset<string> CmplxEvnt_40_set;
      CmplxEvnt_40.add_attribute("Typ", "6"); // 2
      CmplxEvnt_40_set.insert("6");
      CmplxEvnt_40.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_191401167"); // 2
      CmplxEvnt_40_set.insert("ComplexOptPayoutAmount_t_191401167");
      CmplxEvnt_40.add_attribute("Px", "5518975.640000"); // 2
      CmplxEvnt_40_set.insert("5518975.640000");
      CmplxEvnt_40.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_40_set.insert("1");
      CmplxEvnt_40.add_attribute("PxBndryPrcsn", "17851985.440000"); // 2
      CmplxEvnt_40_set.insert("17851985.440000");
      CmplxEvnt_40.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_40_set.insert("1");
      CmplxEvnt_40.add_attribute("Cond", "1"); // 2
      CmplxEvnt_40_set.insert("1");
      all_values.push_back(CmplxEvnt_40_set);
      all_compo_names.insert("CmplxEvnt_40_set");

      {
        xml_element EvntDts_40{"EvntDts"};
        multiset<string> EvntDts_40_set;
        EvntDts_40.add_attribute("StartDt", "ComplexEventStartDate_t_622302214"); // 3
        EvntDts_40_set.insert("ComplexEventStartDate_t_622302214");
        EvntDts_40.add_attribute("EndDt", "ComplexEventEndDate_t_1121195624"); // 3
        EvntDts_40_set.insert("ComplexEventEndDate_t_1121195624");
        all_values.push_back(EvntDts_40_set);
        all_compo_names.insert("EvntDts_40_set");

        {
          xml_element EvntTms_40{"EvntTms"};
          multiset<string> EvntTms_40_set;
          EvntTms_40.add_attribute("StartTm", "284439845"); // 4
          EvntTms_40_set.insert("284439845");
          EvntTms_40.add_attribute("EndTm", "697030849"); // 4
          EvntTms_40_set.insert("697030849");
          all_values.push_back(EvntTms_40_set);
          all_compo_names.insert("EvntTms_40_set");

          EvntDts_40.add_element(EvntTms_40);
        }
        CmplxEvnt_40.add_element(EvntDts_40);
      }
      Instrmt_40.add_element(CmplxEvnt_40);
    }
    elt.add_element(Instrmt_40);
  } // end Instrmt
  { // Undly
    xml_element Undly_55{"Undly"};
    multiset<string> Undly_55_set;
    Undly_55.add_attribute("Sym", "UnderlyingSymbol_t_193495217"); // 1
    Undly_55_set.insert("UnderlyingSymbol_t_193495217");
    Undly_55.add_attribute("Sfx", "WI"); // 1
    Undly_55_set.insert("WI");
    Undly_55.add_attribute("ID", "UnderlyingSecurityID_t_596988885"); // 1
    Undly_55_set.insert("UnderlyingSecurityID_t_596988885");
    Undly_55.add_attribute("Src", "J"); // 1
    Undly_55_set.insert("J");
    Undly_55.add_attribute("Prod", "12"); // 1
    Undly_55_set.insert("12");
    Undly_55.add_attribute("CFI", "UnderlyingCFICode_t_1036730645"); // 1
    Undly_55_set.insert("UnderlyingCFICode_t_1036730645");
    Undly_55.add_attribute("SecTyp", "CMB"); // 1
    Undly_55_set.insert("CMB");
    Undly_55.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_214142396"); // 1
    Undly_55_set.insert("UnderlyingSecuritySubType_t_214142396");
    Undly_55.add_attribute("MMY", "15346054"); // 1
    Undly_55_set.insert("15346054");
    Undly_55.add_attribute("Mat", "UnderlyingMaturityDate_t_1080579188"); // 1
    Undly_55_set.insert("UnderlyingMaturityDate_t_1080579188");
    Undly_55.add_attribute("MatTm", "1760145937"); // 1
    Undly_55_set.insert("1760145937");
    Undly_55.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2127208770"); // 1
    Undly_55_set.insert("UnderlyingCouponPaymentDate_t_2127208770");
    Undly_55.add_attribute("RestrctTyp", "FR"); // 1
    Undly_55_set.insert("FR");
    Undly_55.add_attribute("Snrty", "SR"); // 1
    Undly_55_set.insert("SR");
    Undly_55.add_attribute("NotlPctOut", "118491.560000"); // 1
    Undly_55_set.insert("118491.560000");
    Undly_55.add_attribute("OrigNotlPctOut", "8189851.210000"); // 1
    Undly_55_set.insert("8189851.210000");
    Undly_55.add_attribute("AttchPnt", "3037683.910000"); // 1
    Undly_55_set.insert("3037683.910000");
    Undly_55.add_attribute("DetchPnt", "4908022.160000"); // 1
    Undly_55_set.insert("4908022.160000");
    Undly_55.add_attribute("Issued", "UnderlyingIssueDate_t_1852103998"); // 1
    Undly_55_set.insert("UnderlyingIssueDate_t_1852103998");
    Undly_55.add_attribute("RepoCollSecTyp", "2086105698"); // 1
    Undly_55_set.insert("2086105698");
    Undly_55.add_attribute("RepoTrm", "682203383"); // 1
    Undly_55_set.insert("682203383");
    Undly_55.add_attribute("RepoRt", "2565179.140000"); // 1
    Undly_55_set.insert("2565179.140000");
    Undly_55.add_attribute("Fctr", "9655369.900000"); // 1
    Undly_55_set.insert("9655369.900000");
    Undly_55.add_attribute("CrdRtg", "UnderlyingCreditRating_t_319918280"); // 1
    Undly_55_set.insert("UnderlyingCreditRating_t_319918280");
    Undly_55.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_588138649"); // 1
    Undly_55_set.insert("UnderlyingInstrRegistry_t_588138649");
    Undly_55.add_attribute("Ctry", "2101137384"); // 1
    Undly_55_set.insert("2101137384");
    Undly_55.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_942220494"); // 1
    Undly_55_set.insert("UnderlyingStateOrProvinceOfIssue_t_942220494");
    Undly_55.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1709334273"); // 1
    Undly_55_set.insert("UnderlyingLocaleOfIssue_t_1709334273");
    Undly_55.add_attribute("Redeem", "UnderlyingRedemptionDate_t_238093582"); // 1
    Undly_55_set.insert("UnderlyingRedemptionDate_t_238093582");
    Undly_55.add_attribute("StrkPx", "16392513.430000"); // 1
    Undly_55_set.insert("16392513.430000");
    Undly_55.add_attribute("StrkCcy", "CHF"); // 1
    Undly_55_set.insert("CHF");
    Undly_55.add_attribute("OptA", "687226044"); // 1
    Undly_55_set.insert("687226044");
    Undly_55.add_attribute("Mult", "20539993.010000"); // 1
    Undly_55_set.insert("20539993.010000");
    Undly_55.add_attribute("MultTyp", "0"); // 1
    Undly_55_set.insert("0");
    Undly_55.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_55_set.insert("1");
    Undly_55.add_attribute("UOM", "lbs"); // 1
    Undly_55_set.insert("lbs");
    Undly_55.add_attribute("UOMQty", "12983832.910000"); // 1
    Undly_55_set.insert("12983832.910000");
    Undly_55.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_55_set.insert("MMBtu");
    Undly_55.add_attribute("PxUOMQty", "9585923.520000"); // 1
    Undly_55_set.insert("9585923.520000");
    Undly_55.add_attribute("TmUnit", "Wk"); // 1
    Undly_55_set.insert("Wk");
    Undly_55.add_attribute("ExerStyle", "1"); // 1
    Undly_55_set.insert("1");
    Undly_55.add_attribute("CpnRt", "9383174.740000"); // 1
    Undly_55_set.insert("9383174.740000");
    Undly_55.add_attribute("Exch", "UnderlyingSecurityExchange_t_2110109664"); // 1
    Undly_55_set.insert("UnderlyingSecurityExchange_t_2110109664");
    Undly_55.add_attribute("Issr", "UnderlyingIssuer_t_1369469621"); // 1
    Undly_55_set.insert("UnderlyingIssuer_t_1369469621");
    Undly_55.add_attribute("EncUndIssrLen", "950166631"); // 1
    Undly_55_set.insert("950166631");
    Undly_55.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_781611137"); // 1
    Undly_55_set.insert("EncodedUnderlyingIssuer_t_781611137");
    Undly_55.add_attribute("Desc", "UnderlyingSecurityDesc_t_1673238012"); // 1
    Undly_55_set.insert("UnderlyingSecurityDesc_t_1673238012");
    Undly_55.add_attribute("EncUndSecDescLen", "1440968847"); // 1
    Undly_55_set.insert("1440968847");
    Undly_55.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_486231487"); // 1
    Undly_55_set.insert("EncodedUnderlyingSecurityDesc_t_486231487");
    Undly_55.add_attribute("CPPgm", "UnderlyingCPProgram_t_1611860063"); // 1
    Undly_55_set.insert("UnderlyingCPProgram_t_1611860063");
    Undly_55.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2123172230"); // 1
    Undly_55_set.insert("UnderlyingCPRegType_t_2123172230");
    Undly_55.add_attribute("AllocPct", "7427494.010000"); // 1
    Undly_55_set.insert("7427494.010000");
    Undly_55.add_attribute("Ccy", "GBP"); // 1
    Undly_55_set.insert("GBP");
    Undly_55.add_attribute("Qty", "13308880.510000"); // 1
    Undly_55_set.insert("13308880.510000");
    Undly_55.add_attribute("SettlTyp", "2"); // 1
    Undly_55_set.insert("2");
    Undly_55.add_attribute("CashAmt", "UnderlyingCashAmount_t_1237827356"); // 1
    Undly_55_set.insert("UnderlyingCashAmount_t_1237827356");
    Undly_55.add_attribute("CashTyp", "FIXED"); // 1
    Undly_55_set.insert("FIXED");
    Undly_55.add_attribute("Px", "6216607.240000"); // 1
    Undly_55_set.insert("6216607.240000");
    Undly_55.add_attribute("DirtPx", "7295950.520000"); // 1
    Undly_55_set.insert("7295950.520000");
    Undly_55.add_attribute("EndPx", "2022654.440000"); // 1
    Undly_55_set.insert("2022654.440000");
    Undly_55.add_attribute("StartVal", "UnderlyingStartValue_t_1053249523"); // 1
    Undly_55_set.insert("UnderlyingStartValue_t_1053249523");
    Undly_55.add_attribute("CurVal", "UnderlyingCurrentValue_t_1416821096"); // 1
    Undly_55_set.insert("UnderlyingCurrentValue_t_1416821096");
    Undly_55.add_attribute("EndVal", "UnderlyingEndValue_t_108781097"); // 1
    Undly_55_set.insert("UnderlyingEndValue_t_108781097");
    Undly_55.add_attribute("AdjQty", "15404229.460000"); // 1
    Undly_55_set.insert("15404229.460000");
    Undly_55.add_attribute("FxRate", "6147970.200000"); // 1
    Undly_55_set.insert("6147970.200000");
    Undly_55.add_attribute("FxRateCalc", "D"); // 1
    Undly_55_set.insert("D");
    Undly_55.add_attribute("CapValu", "UnderlyingCapValue_t_691322590"); // 1
    Undly_55_set.insert("UnderlyingCapValue_t_691322590");
    Undly_55.add_attribute("SetMeth", "UnderlyingSettlMethod_t_26915339"); // 1
    Undly_55_set.insert("UnderlyingSettlMethod_t_26915339");
    Undly_55.add_attribute("PutCall", "2010619747"); // 1
    Undly_55_set.insert("2010619747");
    all_values.push_back(Undly_55_set);
    all_compo_names.insert("Undly_55_set");

    {
      xml_element UndAID_55{"UndAID"};
      multiset<string> UndAID_55_set;
      UndAID_55.add_attribute("AltID", "UnderlyingSecurityAltID_t_922801422"); // 2
      UndAID_55_set.insert("UnderlyingSecurityAltID_t_922801422");
      UndAID_55.add_attribute("AltIDSrc", "B"); // 2
      UndAID_55_set.insert("B");
      all_values.push_back(UndAID_55_set);
      all_compo_names.insert("UndAID_55_set");

      Undly_55.add_element(UndAID_55);
    }
    {
      xml_element Stip_83{"Stip"};
      multiset<string> Stip_83_set;
      Stip_83.add_attribute("Typ", "TRDVAR"); // 2
      Stip_83_set.insert("TRDVAR");
      Stip_83.add_attribute("Val", "UnderlyingStipValue_t_885427438"); // 2
      Stip_83_set.insert("UnderlyingStipValue_t_885427438");
      all_values.push_back(Stip_83_set);
      all_compo_names.insert("Stip_83_set");

      Undly_55.add_element(Stip_83);
    }
    {
      xml_element Pty_220{"Pty"};
      multiset<string> Pty_220_set;
      Pty_220.add_attribute("ID", "UnderlyingInstrumentPartyID_t_421165569"); // 2
      Pty_220_set.insert("UnderlyingInstrumentPartyID_t_421165569");
      Pty_220.add_attribute("Src", "B"); // 2
      Pty_220_set.insert("B");
      Pty_220.add_attribute("R", "35"); // 2
      Pty_220_set.insert("35");
      all_values.push_back(Pty_220_set);
      all_compo_names.insert("Pty_220_set");

      {
        xml_element Sub_220{"Sub"};
        multiset<string> Sub_220_set;
        Sub_220.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2094403582"); // 3
        Sub_220_set.insert("UnderlyingInstrumentPartySubID_t_2094403582");
        Sub_220.add_attribute("Typ", "7"); // 3
        Sub_220_set.insert("7");
        all_values.push_back(Sub_220_set);
        all_compo_names.insert("Sub_220_set");

        Pty_220.add_element(Sub_220);
      }
      Undly_55.add_element(Pty_220);
    }
    elt.add_element(Undly_55);
  } // end Undly
  { // Leg
    xml_element Leg_53{"Leg"};
    multiset<string> Leg_53_set;
    Leg_53.add_attribute("Sym", "LegSymbol_t_1558779997"); // 1
    Leg_53_set.insert("LegSymbol_t_1558779997");
    Leg_53.add_attribute("Sfx", "CD"); // 1
    Leg_53_set.insert("CD");
    Leg_53.add_attribute("ID", "LegSecurityID_t_748535816"); // 1
    Leg_53_set.insert("LegSecurityID_t_748535816");
    Leg_53.add_attribute("Src", "F"); // 1
    Leg_53_set.insert("F");
    Leg_53.add_attribute("Prod", "6"); // 1
    Leg_53_set.insert("6");
    Leg_53.add_attribute("CFI", "LegCFICode_t_2079423867"); // 1
    Leg_53_set.insert("LegCFICode_t_2079423867");
    Leg_53.add_attribute("SecTyp", "TLQN"); // 1
    Leg_53_set.insert("TLQN");
    Leg_53.add_attribute("SecSubTyp", "LegSecuritySubType_t_406744557"); // 1
    Leg_53_set.insert("LegSecuritySubType_t_406744557");
    Leg_53.add_attribute("MMY", "824678896"); // 1
    Leg_53_set.insert("824678896");
    Leg_53.add_attribute("Mat", "LegMaturityDate_t_846437620"); // 1
    Leg_53_set.insert("LegMaturityDate_t_846437620");
    Leg_53.add_attribute("MatTm", "1136339609"); // 1
    Leg_53_set.insert("1136339609");
    Leg_53.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1026944340"); // 1
    Leg_53_set.insert("LegCouponPaymentDate_t_1026944340");
    Leg_53.add_attribute("Issued", "LegIssueDate_t_1899687143"); // 1
    Leg_53_set.insert("LegIssueDate_t_1899687143");
    Leg_53.add_attribute("RepoCollSecTyp", "405677057"); // 1
    Leg_53_set.insert("405677057");
    Leg_53.add_attribute("RepoTrm", "1135725437"); // 1
    Leg_53_set.insert("1135725437");
    Leg_53.add_attribute("RepoRt", "12926264.420000"); // 1
    Leg_53_set.insert("12926264.420000");
    Leg_53.add_attribute("Fctr", "10204740.770000"); // 1
    Leg_53_set.insert("10204740.770000");
    Leg_53.add_attribute("CrdRtg", "LegCreditRating_t_40269184"); // 1
    Leg_53_set.insert("LegCreditRating_t_40269184");
    Leg_53.add_attribute("Rgstry", "LegInstrRegistry_t_1983949032"); // 1
    Leg_53_set.insert("LegInstrRegistry_t_1983949032");
    Leg_53.add_attribute("Ctry", "1047389417"); // 1
    Leg_53_set.insert("1047389417");
    Leg_53.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2050888931"); // 1
    Leg_53_set.insert("LegStateOrProvinceOfIssue_t_2050888931");
    Leg_53.add_attribute("Lcl", "LegLocaleOfIssue_t_759266806"); // 1
    Leg_53_set.insert("LegLocaleOfIssue_t_759266806");
    Leg_53.add_attribute("Redeem", "LegRedemptionDate_t_99085365"); // 1
    Leg_53_set.insert("LegRedemptionDate_t_99085365");
    Leg_53.add_attribute("Strk", "7048588.560000"); // 1
    Leg_53_set.insert("7048588.560000");
    Leg_53.add_attribute("StrkCcy", "EUR"); // 1
    Leg_53_set.insert("EUR");
    Leg_53.add_attribute("OptA", "308995413"); // 1
    Leg_53_set.insert("308995413");
    Leg_53.add_attribute("Cmult", "11642491.710000"); // 1
    Leg_53_set.insert("11642491.710000");
    Leg_53.add_attribute("MultTyp", "0"); // 1
    Leg_53_set.insert("0");
    Leg_53.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_53_set.insert("1");
    Leg_53.add_attribute("UOM", "tn"); // 1
    Leg_53_set.insert("tn");
    Leg_53.add_attribute("UOMQty", "20259508.660000"); // 1
    Leg_53_set.insert("20259508.660000");
    Leg_53.add_attribute("PxUOM", "USD"); // 1
    Leg_53_set.insert("USD");
    Leg_53.add_attribute("PxUOMQty", "19185714.030000"); // 1
    Leg_53_set.insert("19185714.030000");
    Leg_53.add_attribute("TmUnit", "D"); // 1
    Leg_53_set.insert("D");
    Leg_53.add_attribute("ExerStyle", "0"); // 1
    Leg_53_set.insert("0");
    Leg_53.add_attribute("CpnRt", "18505116.220000"); // 1
    Leg_53_set.insert("18505116.220000");
    Leg_53.add_attribute("Exch", "LegSecurityExchange_t_2091937517"); // 1
    Leg_53_set.insert("LegSecurityExchange_t_2091937517");
    Leg_53.add_attribute("Issr", "LegIssuer_t_1950556560"); // 1
    Leg_53_set.insert("LegIssuer_t_1950556560");
    Leg_53.add_attribute("EncLegIssrLen", "527706870"); // 1
    Leg_53_set.insert("527706870");
    Leg_53.add_attribute("EncLegIssr", "EncodedLegIssuer_t_790891489"); // 1
    Leg_53_set.insert("EncodedLegIssuer_t_790891489");
    Leg_53.add_attribute("Desc", "LegSecurityDesc_t_939412521"); // 1
    Leg_53_set.insert("LegSecurityDesc_t_939412521");
    Leg_53.add_attribute("EncLegSecDescLen", "1554651210"); // 1
    Leg_53_set.insert("1554651210");
    Leg_53.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_543094985"); // 1
    Leg_53_set.insert("EncodedLegSecurityDesc_t_543094985");
    Leg_53.add_attribute("RatioQty", "13450895.780000"); // 1
    Leg_53_set.insert("13450895.780000");
    Leg_53.add_attribute("Side", "8"); // 1
    Leg_53_set.insert("8");
    Leg_53.add_attribute("Ccy", "USD"); // 1
    Leg_53_set.insert("USD");
    Leg_53.add_attribute("Pool", "LegPool_t_583162183"); // 1
    Leg_53_set.insert("LegPool_t_583162183");
    Leg_53.add_attribute("Dated", "LegDatedDate_t_1672186811"); // 1
    Leg_53_set.insert("LegDatedDate_t_1672186811");
    Leg_53.add_attribute("CSetMo", "1265469425"); // 1
    Leg_53_set.insert("1265469425");
    Leg_53.add_attribute("IntAcrl", "LegInterestAccrualDate_t_486567466"); // 1
    Leg_53_set.insert("LegInterestAccrualDate_t_486567466");
    Leg_53.add_attribute("PutCall", "283969969"); // 1
    Leg_53_set.insert("283969969");
    Leg_53.add_attribute("LegOptionRatio", "13645547.900000"); // 1
    Leg_53_set.insert("13645547.900000");
    Leg_53.add_attribute("Px", "11914263.230000"); // 1
    Leg_53_set.insert("11914263.230000");
    all_values.push_back(Leg_53_set);
    all_compo_names.insert("Leg_53_set");

    {
      xml_element LegAID_53{"LegAID"};
      multiset<string> LegAID_53_set;
      LegAID_53.add_attribute("SecAltID", "LegSecurityAltID_t_1928664213"); // 2
      LegAID_53_set.insert("LegSecurityAltID_t_1928664213");
      LegAID_53.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_53_set.insert("C");
      all_values.push_back(LegAID_53_set);
      all_compo_names.insert("LegAID_53_set");

      Leg_53.add_element(LegAID_53);
    }
    elt.add_element(Leg_53);
  } // end Leg
  { // DsplyInstr
    xml_element DsplyInstr_3{"DsplyInstr"};
    multiset<string> DsplyInstr_3_set;
    DsplyInstr_3.add_attribute("DisplayQty", "15004217.360000"); // 1
    DsplyInstr_3_set.insert("15004217.360000");
    DsplyInstr_3.add_attribute("SecDspQty", "9454297.360000"); // 1
    DsplyInstr_3_set.insert("9454297.360000");
    DsplyInstr_3.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_3_set.insert("1");
    DsplyInstr_3.add_attribute("DspMthd", "1"); // 1
    DsplyInstr_3_set.insert("1");
    DsplyInstr_3.add_attribute("DsplLwQty", "21154653.230000"); // 1
    DsplyInstr_3_set.insert("21154653.230000");
    DsplyInstr_3.add_attribute("DisplayHighQty", "829601.640000"); // 1
    DsplyInstr_3_set.insert("829601.640000");
    DsplyInstr_3.add_attribute("DspMinIncr", "9344500.590000"); // 1
    DsplyInstr_3_set.insert("9344500.590000");
    DsplyInstr_3.add_attribute("RfrshQty", "18865530.780000"); // 1
    DsplyInstr_3_set.insert("18865530.780000");
    all_values.push_back(DsplyInstr_3_set);
    all_compo_names.insert("DsplyInstr_3_set");

    elt.add_element(DsplyInstr_3);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_5{"TrdSes"};
    multiset<string> TrdSes_5_set;
    TrdSes_5.add_attribute("SesID", "5"); // 1
    TrdSes_5_set.insert("5");
    TrdSes_5.add_attribute("SesSub", "4"); // 1
    TrdSes_5_set.insert("4");
    all_values.push_back(TrdSes_5_set);
    all_compo_names.insert("TrdSes_5_set");

    elt.add_element(TrdSes_5);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_6{"TrdSes"};
    multiset<string> TrdSes_6_set;
    TrdSes_6.add_attribute("SesID", "3"); // 1
    TrdSes_6_set.insert("3");
    TrdSes_6.add_attribute("SesSub", "1"); // 1
    TrdSes_6_set.insert("1");
    all_values.push_back(TrdSes_6_set);
    all_compo_names.insert("TrdSes_6_set");

    elt.add_element(TrdSes_6);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_7{"TrdSes"};
    multiset<string> TrdSes_7_set;
    TrdSes_7.add_attribute("SesID", "4"); // 1
    TrdSes_7_set.insert("4");
    TrdSes_7.add_attribute("SesSub", "2"); // 1
    TrdSes_7_set.insert("2");
    all_values.push_back(TrdSes_7_set);
    all_compo_names.insert("TrdSes_7_set");

    elt.add_element(TrdSes_7);
  } // end TrdSes
  { // Stip
    xml_element Stip_84{"Stip"};
    multiset<string> Stip_84_set;
    Stip_84.add_attribute("Typ", "RESTRICTED"); // 1
    Stip_84_set.insert("RESTRICTED");
    Stip_84.add_attribute("Val", "StipulationValue_t_1081077480"); // 1
    Stip_84_set.insert("StipulationValue_t_1081077480");
    all_values.push_back(Stip_84_set);
    all_compo_names.insert("Stip_84_set");

    elt.add_element(Stip_84);
  } // end Stip
  { // Stip
    xml_element Stip_85{"Stip"};
    multiset<string> Stip_85_set;
    Stip_85.add_attribute("Typ", "ISSUESIZE"); // 1
    Stip_85_set.insert("ISSUESIZE");
    Stip_85.add_attribute("Val", "StipulationValue_t_2067348485"); // 1
    Stip_85_set.insert("StipulationValue_t_2067348485");
    all_values.push_back(Stip_85_set);
    all_compo_names.insert("Stip_85_set");

    elt.add_element(Stip_85);
  } // end Stip
  { // Stip
    xml_element Stip_86{"Stip"};
    multiset<string> Stip_86_set;
    Stip_86.add_attribute("Typ", "YIELD"); // 1
    Stip_86_set.insert("YIELD");
    Stip_86.add_attribute("Val", "StipulationValue_t_488949785"); // 1
    Stip_86_set.insert("StipulationValue_t_488949785");
    all_values.push_back(Stip_86_set);
    all_compo_names.insert("Stip_86_set");

    elt.add_element(Stip_86);
  } // end Stip
  { // TrgrInstr
    xml_element TrgrInstr_3{"TrgrInstr"};
    multiset<string> TrgrInstr_3_set;
    TrgrInstr_3.add_attribute("TrgrTyp", "1"); // 1
    TrgrInstr_3_set.insert("1");
    TrgrInstr_3.add_attribute("TrgrActn", "3"); // 1
    TrgrInstr_3_set.insert("3");
    TrgrInstr_3.add_attribute("TrgrPx", "17544192.100000"); // 1
    TrgrInstr_3_set.insert("17544192.100000");
    TrgrInstr_3.add_attribute("TrgrSym", "TriggerSymbol_t_989594487"); // 1
    TrgrInstr_3_set.insert("TriggerSymbol_t_989594487");
    TrgrInstr_3.add_attribute("TrgrSecID", "TriggerSecurityID_t_577988391"); // 1
    TrgrInstr_3_set.insert("TriggerSecurityID_t_577988391");
    TrgrInstr_3.add_attribute("TrgrSecIDSrc", "A"); // 1
    TrgrInstr_3_set.insert("A");
    TrgrInstr_3.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_33537162"); // 1
    TrgrInstr_3_set.insert("TriggerSecurityDesc_t_33537162");
    TrgrInstr_3.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_3_set.insert("5");
    TrgrInstr_3.add_attribute("TrgrPxTypScp", "2"); // 1
    TrgrInstr_3_set.insert("2");
    TrgrInstr_3.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_3_set.insert("U");
    TrgrInstr_3.add_attribute("TrgrNewPx", "13045986.930000"); // 1
    TrgrInstr_3_set.insert("13045986.930000");
    TrgrInstr_3.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_3_set.insert("2");
    TrgrInstr_3.add_attribute("TrgrNewQty", "935141.540000"); // 1
    TrgrInstr_3_set.insert("935141.540000");
    TrgrInstr_3.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1272580368"); // 1
    TrgrInstr_3_set.insert("TriggerTradingSessionID_t_1272580368");
    TrgrInstr_3.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_996265541"); // 1
    TrgrInstr_3_set.insert("TriggerTradingSessionSubID_t_996265541");
    all_values.push_back(TrgrInstr_3_set);
    all_compo_names.insert("TrgrInstr_3_set");

    elt.add_element(TrgrInstr_3);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_17{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_17_set;
    SprdBnchmkCurve_17.add_attribute("Spread", "10279642.130000"); // 1
    SprdBnchmkCurve_17_set.insert("10279642.130000");
    SprdBnchmkCurve_17.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_17_set.insert("GBP");
    SprdBnchmkCurve_17.add_attribute("Name", "FutureSWAP"); // 1
    SprdBnchmkCurve_17_set.insert("FutureSWAP");
    SprdBnchmkCurve_17.add_attribute("Point", "BenchmarkCurvePoint_t_453747202"); // 1
    SprdBnchmkCurve_17_set.insert("BenchmarkCurvePoint_t_453747202");
    SprdBnchmkCurve_17.add_attribute("Px", "5459936.840000"); // 1
    SprdBnchmkCurve_17_set.insert("5459936.840000");
    SprdBnchmkCurve_17.add_attribute("PxTyp", "4"); // 1
    SprdBnchmkCurve_17_set.insert("4");
    SprdBnchmkCurve_17.add_attribute("SecID", "BenchmarkSecurityID_t_423551477"); // 1
    SprdBnchmkCurve_17_set.insert("BenchmarkSecurityID_t_423551477");
    SprdBnchmkCurve_17.add_attribute("SecIDSrc", "D"); // 1
    SprdBnchmkCurve_17_set.insert("D");
    all_values.push_back(SprdBnchmkCurve_17_set);
    all_compo_names.insert("SprdBnchmkCurve_17_set");

    elt.add_element(SprdBnchmkCurve_17);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_12{"Yield"};
    multiset<string> Yield_12_set;
    Yield_12.add_attribute("Typ", "BOOK"); // 1
    Yield_12_set.insert("BOOK");
    Yield_12.add_attribute("Yld", "19480069.630000"); // 1
    Yield_12_set.insert("19480069.630000");
    Yield_12.add_attribute("CalcDt", "YieldCalcDate_t_17570012"); // 1
    Yield_12_set.insert("YieldCalcDate_t_17570012");
    Yield_12.add_attribute("RedDt", "YieldRedemptionDate_t_689243930"); // 1
    Yield_12_set.insert("YieldRedemptionDate_t_689243930");
    Yield_12.add_attribute("RedPx", "18678718.000000"); // 1
    Yield_12_set.insert("18678718.000000");
    Yield_12.add_attribute("RedPxTyp", "7"); // 1
    Yield_12_set.insert("7");
    all_values.push_back(Yield_12_set);
    all_compo_names.insert("Yield_12_set");

    elt.add_element(Yield_12);
  } // end Yield
  { // PegInstr
    xml_element PegInstr_3{"PegInstr"};
    multiset<string> PegInstr_3_set;
    PegInstr_3.add_attribute("OfstVal", "11781937.150000"); // 1
    PegInstr_3_set.insert("11781937.150000");
    PegInstr_3.add_attribute("PegPxTyp", "5"); // 1
    PegInstr_3_set.insert("5");
    PegInstr_3.add_attribute("MoveTyp", "0"); // 1
    PegInstr_3_set.insert("0");
    PegInstr_3.add_attribute("OfstTyp", "2"); // 1
    PegInstr_3_set.insert("2");
    PegInstr_3.add_attribute("LmtTyp", "0"); // 1
    PegInstr_3_set.insert("0");
    PegInstr_3.add_attribute("RndDir", "1"); // 1
    PegInstr_3_set.insert("1");
    PegInstr_3.add_attribute("Scope", "4"); // 1
    PegInstr_3_set.insert("4");
    PegInstr_3.add_attribute("PegSecurityIDSource", "4"); // 1
    PegInstr_3_set.insert("4");
    PegInstr_3.add_attribute("PegSecID", "PegSecurityID_t_2018061042"); // 1
    PegInstr_3_set.insert("PegSecurityID_t_2018061042");
    PegInstr_3.add_attribute("PgSymbl", "PegSymbol_t_317948413"); // 1
    PegInstr_3_set.insert("PegSymbol_t_317948413");
    PegInstr_3.add_attribute("PegSecDesc", "PegSecurityDesc_t_633022071"); // 1
    PegInstr_3_set.insert("PegSecurityDesc_t_633022071");
    all_values.push_back(PegInstr_3_set);
    all_compo_names.insert("PegInstr_3_set");

    elt.add_element(PegInstr_3);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_3{"DiscInstr"};
    multiset<string> DiscInstr_3_set;
    DiscInstr_3.add_attribute("DsctnInst", "7"); // 1
    DiscInstr_3_set.insert("7");
    DiscInstr_3.add_attribute("OfstValu", "12312537.900000"); // 1
    DiscInstr_3_set.insert("12312537.900000");
    DiscInstr_3.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_3_set.insert("0");
    DiscInstr_3.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_3_set.insert("3");
    DiscInstr_3.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_3_set.insert("1");
    DiscInstr_3.add_attribute("RndDir", "2"); // 1
    DiscInstr_3_set.insert("2");
    DiscInstr_3.add_attribute("Scope", "2"); // 1
    DiscInstr_3_set.insert("2");
    all_values.push_back(DiscInstr_3_set);
    all_compo_names.insert("DiscInstr_3_set");

    elt.add_element(DiscInstr_3);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_8{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_8_set;
    StrtPrmGrp_8.add_attribute("StrtPrmNme", "StrategyParameterName_t_965759419"); // 1
    StrtPrmGrp_8_set.insert("StrategyParameterName_t_965759419");
    StrtPrmGrp_8.add_attribute("StrtPrmTyp", "24"); // 1
    StrtPrmGrp_8_set.insert("24");
    StrtPrmGrp_8.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1424932047"); // 1
    StrtPrmGrp_8_set.insert("StrategyParameterValue_t_1424932047");
    all_values.push_back(StrtPrmGrp_8_set);
    all_compo_names.insert("StrtPrmGrp_8_set");

    elt.add_element(StrtPrmGrp_8);
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
