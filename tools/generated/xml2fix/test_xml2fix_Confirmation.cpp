#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/Confirmation.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( Confirmation_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Cnfm" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_1645441176"); // 0
  Confirmation_message_t_0.insert("ConfirmID_t_1645441176");
  elt.add_attribute("CnfmRefID", "ConfirmRefID_t_229679647"); // 0
  Confirmation_message_t_0.insert("ConfirmRefID_t_229679647");
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_235790809"); // 0
  Confirmation_message_t_0.insert("ConfirmReqID_t_235790809");
  elt.add_attribute("CnfmTransTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("CnfmTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("CopyMsgInd", "false"); // 0
  Confirmation_message_t_0.insert("false");
  elt.add_attribute("LegalCnfm", "Y"); // 0
  Confirmation_message_t_0.insert("Y");
  elt.add_attribute("CnfmStat", "4"); // 0
  Confirmation_message_t_0.insert("4");
  elt.add_attribute("AllocID", "AllocID_t_416582722"); // 0
  Confirmation_message_t_0.insert("AllocID_t_416582722");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_1462263376"); // 0
  Confirmation_message_t_0.insert("SecondaryAllocID_t_1462263376");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_642907714"); // 0
  Confirmation_message_t_0.insert("IndividualAllocID_t_642907714");
  elt.add_attribute("TxnTm", "TransactTime_t_2058031091"); // 0
  Confirmation_message_t_0.insert("TransactTime_t_2058031091");
  elt.add_attribute("TrdDt", "TradeDate_t_1248858668"); // 0
  Confirmation_message_t_0.insert("TradeDate_t_1248858668");
  elt.add_attribute("Qty", "13797360.890000"); // 0
  Confirmation_message_t_0.insert("13797360.890000");
  elt.add_attribute("QtyTyp", "0"); // 0
  Confirmation_message_t_0.insert("0");
  elt.add_attribute("Side", "D"); // 0
  Confirmation_message_t_0.insert("D");
  elt.add_attribute("Ccy", "USD"); // 0
  Confirmation_message_t_0.insert("USD");
  elt.add_attribute("LastMkt", "LastMkt_t_555556775"); // 0
  Confirmation_message_t_0.insert("LastMkt_t_555556775");
  elt.add_attribute("Acct", "AllocAccount_t_1736090381"); // 0
  Confirmation_message_t_0.insert("AllocAccount_t_1736090381");
  elt.add_attribute("ActIDSrc", "3"); // 0
  Confirmation_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "3"); // 0
  Confirmation_message_t_0.insert("3");
  elt.add_attribute("AvgPx", "7183888.780000"); // 0
  Confirmation_message_t_0.insert("7183888.780000");
  elt.add_attribute("AvgPxPrcsn", "1655962702"); // 0
  Confirmation_message_t_0.insert("1655962702");
  elt.add_attribute("PxTyp", "18"); // 0
  Confirmation_message_t_0.insert("18");
  elt.add_attribute("AvgParPx", "6626137.470000"); // 0
  Confirmation_message_t_0.insert("6626137.470000");
  elt.add_attribute("RptedPx", "9688898.620000"); // 0
  Confirmation_message_t_0.insert("9688898.620000");
  elt.add_attribute("Txt", "Text_t_2063734347"); // 0
  Confirmation_message_t_0.insert("Text_t_2063734347");
  elt.add_attribute("EncTxtLen", "2089124444"); // 0
  Confirmation_message_t_0.insert("2089124444");
  elt.add_attribute("EncTxt", "EncodedText_t_279517289"); // 0
  Confirmation_message_t_0.insert("EncodedText_t_279517289");
  elt.add_attribute("ProcCode", "6"); // 0
  Confirmation_message_t_0.insert("6");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1587081972"); // 0
  Confirmation_message_t_0.insert("GrossTradeAmt_t_1587081972");
  elt.add_attribute("NumDaysInt", "509196936"); // 0
  Confirmation_message_t_0.insert("509196936");
  elt.add_attribute("ExDt", "ExDate_t_1056470228"); // 0
  Confirmation_message_t_0.insert("ExDate_t_1056470228");
  elt.add_attribute("AcrdIntRt", "18347653.550000"); // 0
  Confirmation_message_t_0.insert("18347653.550000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_2073876814"); // 0
  Confirmation_message_t_0.insert("AccruedInterestAmt_t_2073876814");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1671311309"); // 0
  Confirmation_message_t_0.insert("InterestAtMaturity_t_1671311309");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1106746102"); // 0
  Confirmation_message_t_0.insert("EndAccruedInterestAmt_t_1106746102");
  elt.add_attribute("StartCsh", "StartCash_t_208858544"); // 0
  Confirmation_message_t_0.insert("StartCash_t_208858544");
  elt.add_attribute("EndCsh", "EndCash_t_2087894031"); // 0
  Confirmation_message_t_0.insert("EndCash_t_2087894031");
  elt.add_attribute("Concession", "Concession_t_421525830"); // 0
  Confirmation_message_t_0.insert("Concession_t_421525830");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_851766258"); // 0
  Confirmation_message_t_0.insert("TotalTakedown_t_851766258");
  elt.add_attribute("NetMny", "NetMoney_t_1998441474"); // 0
  Confirmation_message_t_0.insert("NetMoney_t_1998441474");
  elt.add_attribute("MatNetMny", "MaturityNetMoney_t_1670384498"); // 0
  Confirmation_message_t_0.insert("MaturityNetMoney_t_1670384498");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_84018700"); // 0
  Confirmation_message_t_0.insert("SettlCurrAmt_t_84018700");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  Confirmation_message_t_0.insert("CHF");
  elt.add_attribute("SettlCurrFxRt", "11699744.030000"); // 0
  Confirmation_message_t_0.insert("11699744.030000");
  elt.add_attribute("SettlCurrFxRtCalc", "M"); // 0
  Confirmation_message_t_0.insert("M");
  elt.add_attribute("SettlTyp", "6"); // 0
  Confirmation_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_758581137"); // 0
  Confirmation_message_t_0.insert("SettlDate_t_758581137");
  elt.add_attribute("SharedComm", "SharedCommission_t_1219734183"); // 0
  Confirmation_message_t_0.insert("SharedCommission_t_1219734183");
  all_values.push_back(Confirmation_message_t_0);
  all_compo_names.insert("Confirmation_message_t");

  { // Hdr
    xml_element Hdr_20{"Hdr"};
    multiset<string> Hdr_20_set;
    Hdr_20.add_attribute("SeqNum", "1469094886"); // 1
    Hdr_20_set.insert("1469094886");
    Hdr_20.add_attribute("SID", "SenderCompID_t_1476970015"); // 1
    Hdr_20_set.insert("SenderCompID_t_1476970015");
    Hdr_20.add_attribute("TID", "TargetCompID_t_728213237"); // 1
    Hdr_20_set.insert("TargetCompID_t_728213237");
    Hdr_20.add_attribute("OBID", "OnBehalfOfCompID_t_1243814136"); // 1
    Hdr_20_set.insert("OnBehalfOfCompID_t_1243814136");
    Hdr_20.add_attribute("D2ID", "DeliverToCompID_t_2139583762"); // 1
    Hdr_20_set.insert("DeliverToCompID_t_2139583762");
    Hdr_20.add_attribute("SSub", "SenderSubID_t_1697103099"); // 1
    Hdr_20_set.insert("SenderSubID_t_1697103099");
    Hdr_20.add_attribute("SLoc", "SenderLocationID_t_1160064835"); // 1
    Hdr_20_set.insert("SenderLocationID_t_1160064835");
    Hdr_20.add_attribute("TSub", "TargetSubID_t_2081224558"); // 1
    Hdr_20_set.insert("TargetSubID_t_2081224558");
    Hdr_20.add_attribute("TLoc", "TargetLocationID_t_1976620389"); // 1
    Hdr_20_set.insert("TargetLocationID_t_1976620389");
    Hdr_20.add_attribute("OBSub", "OnBehalfOfSubID_t_1980744254"); // 1
    Hdr_20_set.insert("OnBehalfOfSubID_t_1980744254");
    Hdr_20.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1520822882"); // 1
    Hdr_20_set.insert("OnBehalfOfLocationID_t_1520822882");
    Hdr_20.add_attribute("D2Sub", "DeliverToSubID_t_338333677"); // 1
    Hdr_20_set.insert("DeliverToSubID_t_338333677");
    Hdr_20.add_attribute("D2Loc", "DeliverToLocationID_t_889730834"); // 1
    Hdr_20_set.insert("DeliverToLocationID_t_889730834");
    Hdr_20.add_attribute("PosDup", "Y"); // 1
    Hdr_20_set.insert("Y");
    Hdr_20.add_attribute("PosRsnd", "N"); // 1
    Hdr_20_set.insert("N");
    Hdr_20.add_attribute("Snt", "SendingTime_t_413558495"); // 1
    Hdr_20_set.insert("SendingTime_t_413558495");
    Hdr_20.add_attribute("OrigSnt", "OrigSendingTime_t_167367043"); // 1
    Hdr_20_set.insert("OrigSendingTime_t_167367043");
    Hdr_20.add_attribute("MsgEncd", "MessageEncoding_t_473585388"); // 1
    Hdr_20_set.insert("MessageEncoding_t_473585388");
    all_values.push_back(Hdr_20_set);
    all_compo_names.insert("Hdr_20_set");

    {
      xml_element Hop_20{"Hop"};
      multiset<string> Hop_20_set;
      Hop_20.add_attribute("ID", "HopCompID_t_353968878"); // 2
      Hop_20_set.insert("HopCompID_t_353968878");
      Hop_20.add_attribute("Ref", "588892873"); // 2
      Hop_20_set.insert("588892873");
      Hop_20.add_attribute("Snt", "HopSendingTime_t_1325351647"); // 2
      Hop_20_set.insert("HopSendingTime_t_1325351647");
      all_values.push_back(Hop_20_set);
      all_compo_names.insert("Hop_20_set");

      Hdr_20.add_element(Hop_20);
    }
    elt.add_element(Hdr_20);
  } // end Hdr
  { // Pty
    xml_element Pty_100{"Pty"};
    multiset<string> Pty_100_set;
    Pty_100.add_attribute("ID", "PartyID_t_111793724"); // 1
    Pty_100_set.insert("PartyID_t_111793724");
    Pty_100.add_attribute("Src", "C"); // 1
    Pty_100_set.insert("C");
    Pty_100.add_attribute("R", "69"); // 1
    Pty_100_set.insert("69");
    all_values.push_back(Pty_100_set);
    all_compo_names.insert("Pty_100_set");

    {
      xml_element Sub_100{"Sub"};
      multiset<string> Sub_100_set;
      Sub_100.add_attribute("ID", "PartySubID_t_98047467"); // 2
      Sub_100_set.insert("PartySubID_t_98047467");
      Sub_100.add_attribute("Typ", "11"); // 2
      Sub_100_set.insert("11");
      all_values.push_back(Sub_100_set);
      all_compo_names.insert("Sub_100_set");

      Pty_100.add_element(Sub_100);
    }
    elt.add_element(Pty_100);
  } // end Pty
  { // Pty
    xml_element Pty_101{"Pty"};
    multiset<string> Pty_101_set;
    Pty_101.add_attribute("ID", "PartyID_t_707963911"); // 1
    Pty_101_set.insert("PartyID_t_707963911");
    Pty_101.add_attribute("Src", "G"); // 1
    Pty_101_set.insert("G");
    Pty_101.add_attribute("R", "8"); // 1
    Pty_101_set.insert("8");
    all_values.push_back(Pty_101_set);
    all_compo_names.insert("Pty_101_set");

    {
      xml_element Sub_101{"Sub"};
      multiset<string> Sub_101_set;
      Sub_101.add_attribute("ID", "PartySubID_t_1927698094"); // 2
      Sub_101_set.insert("PartySubID_t_1927698094");
      Sub_101.add_attribute("Typ", "9"); // 2
      Sub_101_set.insert("9");
      all_values.push_back(Sub_101_set);
      all_compo_names.insert("Sub_101_set");

      Pty_101.add_element(Sub_101);
    }
    elt.add_element(Pty_101);
  } // end Pty
  { // Pty
    xml_element Pty_102{"Pty"};
    multiset<string> Pty_102_set;
    Pty_102.add_attribute("ID", "PartyID_t_519928607"); // 1
    Pty_102_set.insert("PartyID_t_519928607");
    Pty_102.add_attribute("Src", "9"); // 1
    Pty_102_set.insert("9");
    Pty_102.add_attribute("R", "9"); // 1
    Pty_102_set.insert("9");
    all_values.push_back(Pty_102_set);
    all_compo_names.insert("Pty_102_set");

    {
      xml_element Sub_102{"Sub"};
      multiset<string> Sub_102_set;
      Sub_102.add_attribute("ID", "PartySubID_t_512028721"); // 2
      Sub_102_set.insert("PartySubID_t_512028721");
      Sub_102.add_attribute("Typ", "12"); // 2
      Sub_102_set.insert("12");
      all_values.push_back(Sub_102_set);
      all_compo_names.insert("Sub_102_set");

      Pty_102.add_element(Sub_102);
    }
    elt.add_element(Pty_102);
  } // end Pty
  { // OrdAlloc
    xml_element OrdAlloc_6{"OrdAlloc"};
    multiset<string> OrdAlloc_6_set;
    OrdAlloc_6.add_attribute("ClOrdID", "ClOrdID_t_445769632"); // 1
    OrdAlloc_6_set.insert("ClOrdID_t_445769632");
    OrdAlloc_6.add_attribute("OrdID", "OrderID_t_2034667524"); // 1
    OrdAlloc_6_set.insert("OrderID_t_2034667524");
    OrdAlloc_6.add_attribute("OrdID2", "SecondaryOrderID_t_51125153"); // 1
    OrdAlloc_6_set.insert("SecondaryOrderID_t_51125153");
    OrdAlloc_6.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1966592514"); // 1
    OrdAlloc_6_set.insert("SecondaryClOrdID_t_1966592514");
    OrdAlloc_6.add_attribute("ListID", "ListID_t_225517554"); // 1
    OrdAlloc_6_set.insert("ListID_t_225517554");
    OrdAlloc_6.add_attribute("Qty", "9408559.870000"); // 1
    OrdAlloc_6_set.insert("9408559.870000");
    OrdAlloc_6.add_attribute("AvgPx", "10272134.560000"); // 1
    OrdAlloc_6_set.insert("10272134.560000");
    OrdAlloc_6.add_attribute("BkngQty", "4902443.980000"); // 1
    OrdAlloc_6_set.insert("4902443.980000");
    all_values.push_back(OrdAlloc_6_set);
    all_compo_names.insert("OrdAlloc_6_set");

    {
      xml_element Pty_103{"Pty"};
      multiset<string> Pty_103_set;
      Pty_103.add_attribute("ID", "Nested2PartyID_t_1354414482"); // 2
      Pty_103_set.insert("Nested2PartyID_t_1354414482");
      Pty_103.add_attribute("Src", "6"); // 2
      Pty_103_set.insert("6");
      Pty_103.add_attribute("R", "19"); // 2
      Pty_103_set.insert("19");
      all_values.push_back(Pty_103_set);
      all_compo_names.insert("Pty_103_set");

      {
        xml_element Sub_103{"Sub"};
        multiset<string> Sub_103_set;
        Sub_103.add_attribute("ID", "Nested2PartySubID_t_1708383361"); // 3
        Sub_103_set.insert("Nested2PartySubID_t_1708383361");
        Sub_103.add_attribute("Typ", "6"); // 3
        Sub_103_set.insert("6");
        all_values.push_back(Sub_103_set);
        all_compo_names.insert("Sub_103_set");

        Pty_103.add_element(Sub_103);
      }
      OrdAlloc_6.add_element(Pty_103);
    }
    elt.add_element(OrdAlloc_6);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_7{"OrdAlloc"};
    multiset<string> OrdAlloc_7_set;
    OrdAlloc_7.add_attribute("ClOrdID", "ClOrdID_t_141697785"); // 1
    OrdAlloc_7_set.insert("ClOrdID_t_141697785");
    OrdAlloc_7.add_attribute("OrdID", "OrderID_t_1913310066"); // 1
    OrdAlloc_7_set.insert("OrderID_t_1913310066");
    OrdAlloc_7.add_attribute("OrdID2", "SecondaryOrderID_t_1895267097"); // 1
    OrdAlloc_7_set.insert("SecondaryOrderID_t_1895267097");
    OrdAlloc_7.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1551068132"); // 1
    OrdAlloc_7_set.insert("SecondaryClOrdID_t_1551068132");
    OrdAlloc_7.add_attribute("ListID", "ListID_t_921233129"); // 1
    OrdAlloc_7_set.insert("ListID_t_921233129");
    OrdAlloc_7.add_attribute("Qty", "19933145.640000"); // 1
    OrdAlloc_7_set.insert("19933145.640000");
    OrdAlloc_7.add_attribute("AvgPx", "19829292.350000"); // 1
    OrdAlloc_7_set.insert("19829292.350000");
    OrdAlloc_7.add_attribute("BkngQty", "16291970.400000"); // 1
    OrdAlloc_7_set.insert("16291970.400000");
    all_values.push_back(OrdAlloc_7_set);
    all_compo_names.insert("OrdAlloc_7_set");

    {
      xml_element Pty_104{"Pty"};
      multiset<string> Pty_104_set;
      Pty_104.add_attribute("ID", "Nested2PartyID_t_485688901"); // 2
      Pty_104_set.insert("Nested2PartyID_t_485688901");
      Pty_104.add_attribute("Src", "3"); // 2
      Pty_104_set.insert("3");
      Pty_104.add_attribute("R", "24"); // 2
      Pty_104_set.insert("24");
      all_values.push_back(Pty_104_set);
      all_compo_names.insert("Pty_104_set");

      {
        xml_element Sub_104{"Sub"};
        multiset<string> Sub_104_set;
        Sub_104.add_attribute("ID", "Nested2PartySubID_t_447158125"); // 3
        Sub_104_set.insert("Nested2PartySubID_t_447158125");
        Sub_104.add_attribute("Typ", "16"); // 3
        Sub_104_set.insert("16");
        all_values.push_back(Sub_104_set);
        all_compo_names.insert("Sub_104_set");

        Pty_104.add_element(Sub_104);
      }
      OrdAlloc_7.add_element(Pty_104);
    }
    elt.add_element(OrdAlloc_7);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_8{"OrdAlloc"};
    multiset<string> OrdAlloc_8_set;
    OrdAlloc_8.add_attribute("ClOrdID", "ClOrdID_t_1917839171"); // 1
    OrdAlloc_8_set.insert("ClOrdID_t_1917839171");
    OrdAlloc_8.add_attribute("OrdID", "OrderID_t_1652441485"); // 1
    OrdAlloc_8_set.insert("OrderID_t_1652441485");
    OrdAlloc_8.add_attribute("OrdID2", "SecondaryOrderID_t_2057845155"); // 1
    OrdAlloc_8_set.insert("SecondaryOrderID_t_2057845155");
    OrdAlloc_8.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1975886306"); // 1
    OrdAlloc_8_set.insert("SecondaryClOrdID_t_1975886306");
    OrdAlloc_8.add_attribute("ListID", "ListID_t_1870306032"); // 1
    OrdAlloc_8_set.insert("ListID_t_1870306032");
    OrdAlloc_8.add_attribute("Qty", "3561311.390000"); // 1
    OrdAlloc_8_set.insert("3561311.390000");
    OrdAlloc_8.add_attribute("AvgPx", "18630701.830000"); // 1
    OrdAlloc_8_set.insert("18630701.830000");
    OrdAlloc_8.add_attribute("BkngQty", "19214311.860000"); // 1
    OrdAlloc_8_set.insert("19214311.860000");
    all_values.push_back(OrdAlloc_8_set);
    all_compo_names.insert("OrdAlloc_8_set");

    {
      xml_element Pty_105{"Pty"};
      multiset<string> Pty_105_set;
      Pty_105.add_attribute("ID", "Nested2PartyID_t_175240005"); // 2
      Pty_105_set.insert("Nested2PartyID_t_175240005");
      Pty_105.add_attribute("Src", "2"); // 2
      Pty_105_set.insert("2");
      Pty_105.add_attribute("R", "67"); // 2
      Pty_105_set.insert("67");
      all_values.push_back(Pty_105_set);
      all_compo_names.insert("Pty_105_set");

      {
        xml_element Sub_105{"Sub"};
        multiset<string> Sub_105_set;
        Sub_105.add_attribute("ID", "Nested2PartySubID_t_1202453461"); // 3
        Sub_105_set.insert("Nested2PartySubID_t_1202453461");
        Sub_105.add_attribute("Typ", "18"); // 3
        Sub_105_set.insert("18");
        all_values.push_back(Sub_105_set);
        all_compo_names.insert("Sub_105_set");

        Pty_105.add_element(Sub_105);
      }
      OrdAlloc_8.add_element(Pty_105);
    }
    elt.add_element(OrdAlloc_8);
  } // end OrdAlloc
  { // TrdRegTS
    xml_element TrdRegTS_9{"TrdRegTS"};
    multiset<string> TrdRegTS_9_set;
    TrdRegTS_9.add_attribute("TS", "TrdRegTimestamp_t_249550313"); // 1
    TrdRegTS_9_set.insert("TrdRegTimestamp_t_249550313");
    TrdRegTS_9.add_attribute("Typ", "7"); // 1
    TrdRegTS_9_set.insert("7");
    TrdRegTS_9.add_attribute("Src", "TrdRegTimestampOrigin_t_1630117721"); // 1
    TrdRegTS_9_set.insert("TrdRegTimestampOrigin_t_1630117721");
    TrdRegTS_9.add_attribute("DskTyp", "AR"); // 1
    TrdRegTS_9_set.insert("AR");
    TrdRegTS_9.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_9_set.insert("1");
    TrdRegTS_9.add_attribute("DskOrdHndlInst", "DIR"); // 1
    TrdRegTS_9_set.insert("DIR");
    all_values.push_back(TrdRegTS_9_set);
    all_compo_names.insert("TrdRegTS_9_set");

    elt.add_element(TrdRegTS_9);
  } // end TrdRegTS
  { // Instrmt
    xml_element Instrmt_12{"Instrmt"};
    multiset<string> Instrmt_12_set;
    Instrmt_12.add_attribute("Sym", "Symbol_t_1780807135"); // 1
    Instrmt_12_set.insert("Symbol_t_1780807135");
    Instrmt_12.add_attribute("Sfx", "WI"); // 1
    Instrmt_12_set.insert("WI");
    Instrmt_12.add_attribute("ID", "SecurityID_t_169693620"); // 1
    Instrmt_12_set.insert("SecurityID_t_169693620");
    Instrmt_12.add_attribute("Src", "6"); // 1
    Instrmt_12_set.insert("6");
    Instrmt_12.add_attribute("Prod", "9"); // 1
    Instrmt_12_set.insert("9");
    Instrmt_12.add_attribute("ProdCmplx", "ProductComplex_t_1798890660"); // 1
    Instrmt_12_set.insert("ProductComplex_t_1798890660");
    Instrmt_12.add_attribute("SecGrp", "SecurityGroup_t_2112326952"); // 1
    Instrmt_12_set.insert("SecurityGroup_t_2112326952");
    Instrmt_12.add_attribute("CFI", "CFICode_t_1801793957"); // 1
    Instrmt_12_set.insert("CFICode_t_1801793957");
    Instrmt_12.add_attribute("SecTyp", "FUT"); // 1
    Instrmt_12_set.insert("FUT");
    Instrmt_12.add_attribute("SubTyp", "SecuritySubType_t_412001429"); // 1
    Instrmt_12_set.insert("SecuritySubType_t_412001429");
    Instrmt_12.add_attribute("MMY", "1200126742"); // 1
    Instrmt_12_set.insert("1200126742");
    Instrmt_12.add_attribute("MatDt", "MaturityDate_t_831174022"); // 1
    Instrmt_12_set.insert("MaturityDate_t_831174022");
    Instrmt_12.add_attribute("MatTm", "2064442914"); // 1
    Instrmt_12_set.insert("2064442914");
    Instrmt_12.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1110488249"); // 1
    Instrmt_12_set.insert("SettleOnOpenFlag_t_1110488249");
    Instrmt_12.add_attribute("AsgnMeth", "659576681"); // 1
    Instrmt_12_set.insert("659576681");
    Instrmt_12.add_attribute("Status", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("CpnPmt", "CouponPaymentDate_t_1466619388"); // 1
    Instrmt_12_set.insert("CouponPaymentDate_t_1466619388");
    Instrmt_12.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_12_set.insert("FR");
    Instrmt_12.add_attribute("Snrty", "SD"); // 1
    Instrmt_12_set.insert("SD");
    Instrmt_12.add_attribute("NotlPctOut", "16418593.940000"); // 1
    Instrmt_12_set.insert("16418593.940000");
    Instrmt_12.add_attribute("OrigNotlPctOut", "3162673.050000"); // 1
    Instrmt_12_set.insert("3162673.050000");
    Instrmt_12.add_attribute("AttchPnt", "1285327.140000"); // 1
    Instrmt_12_set.insert("1285327.140000");
    Instrmt_12.add_attribute("DetchPnt", "6968292.070000"); // 1
    Instrmt_12_set.insert("6968292.070000");
    Instrmt_12.add_attribute("Issued", "IssueDate_t_747615792"); // 1
    Instrmt_12_set.insert("IssueDate_t_747615792");
    Instrmt_12.add_attribute("RepoCollSecTyp", "50267074"); // 1
    Instrmt_12_set.insert("50267074");
    Instrmt_12.add_attribute("RepoTrm", "946379520"); // 1
    Instrmt_12_set.insert("946379520");
    Instrmt_12.add_attribute("RepoRt", "21427940.650000"); // 1
    Instrmt_12_set.insert("21427940.650000");
    Instrmt_12.add_attribute("Fctr", "16803847.950000"); // 1
    Instrmt_12_set.insert("16803847.950000");
    Instrmt_12.add_attribute("CrdRtg", "CreditRating_t_831919558"); // 1
    Instrmt_12_set.insert("CreditRating_t_831919558");
    Instrmt_12.add_attribute("Rgstry", "InstrRegistry_t_1532186476"); // 1
    Instrmt_12_set.insert("InstrRegistry_t_1532186476");
    Instrmt_12.add_attribute("IssuCtry", "928845286"); // 1
    Instrmt_12_set.insert("928845286");
    Instrmt_12.add_attribute("StPrv", "StateOrProvinceOfIssue_t_465243045"); // 1
    Instrmt_12_set.insert("StateOrProvinceOfIssue_t_465243045");
    Instrmt_12.add_attribute("Lcl", "LocaleOfIssue_t_325163372"); // 1
    Instrmt_12_set.insert("LocaleOfIssue_t_325163372");
    Instrmt_12.add_attribute("Redeem", "RedemptionDate_t_1098538906"); // 1
    Instrmt_12_set.insert("RedemptionDate_t_1098538906");
    Instrmt_12.add_attribute("StrkPx", "20918810.960000"); // 1
    Instrmt_12_set.insert("20918810.960000");
    Instrmt_12.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_12_set.insert("CHF");
    Instrmt_12.add_attribute("StrkMult", "20567244.010000"); // 1
    Instrmt_12_set.insert("20567244.010000");
    Instrmt_12.add_attribute("StrkValu", "7553798.110000"); // 1
    Instrmt_12_set.insert("7553798.110000");
    Instrmt_12.add_attribute("StrkPxDtrmnMeth", "3"); // 1
    Instrmt_12_set.insert("3");
    Instrmt_12.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_12_set.insert("3");
    Instrmt_12.add_attribute("StrkPxBndryPrcsn", "19555065.540000"); // 1
    Instrmt_12_set.insert("19555065.540000");
    Instrmt_12.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("OptAt", "238201449"); // 1
    Instrmt_12_set.insert("238201449");
    Instrmt_12.add_attribute("Mult", "9185111.550000"); // 1
    Instrmt_12_set.insert("9185111.550000");
    Instrmt_12.add_attribute("MultTyp", "0"); // 1
    Instrmt_12_set.insert("0");
    Instrmt_12.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_12_set.insert("3");
    Instrmt_12.add_attribute("MinPxIncr", "2376468.960000"); // 1
    Instrmt_12_set.insert("2376468.960000");
    Instrmt_12.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1529194690"); // 1
    Instrmt_12_set.insert("MinPriceIncrementAmount_t_1529194690");
    Instrmt_12.add_attribute("UOM", "Bcf"); // 1
    Instrmt_12_set.insert("Bcf");
    Instrmt_12.add_attribute("UOMQty", "18795062.900000"); // 1
    Instrmt_12_set.insert("18795062.900000");
    Instrmt_12.add_attribute("PxUOM", "MWh"); // 1
    Instrmt_12_set.insert("MWh");
    Instrmt_12.add_attribute("PxUOMQty", "15677286.510000"); // 1
    Instrmt_12_set.insert("15677286.510000");
    Instrmt_12.add_attribute("SettlMeth", "P"); // 1
    Instrmt_12_set.insert("P");
    Instrmt_12.add_attribute("ExerStyle", "2"); // 1
    Instrmt_12_set.insert("2");
    Instrmt_12.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_12_set.insert("3");
    Instrmt_12.add_attribute("OptPayAmt", "OptPayoutAmount_t_1375231370"); // 1
    Instrmt_12_set.insert("OptPayoutAmount_t_1375231370");
    Instrmt_12.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_12_set.insert("STD");
    Instrmt_12.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_12_set.insert("CDS");
    Instrmt_12.add_attribute("ListMeth", "0"); // 1
    Instrmt_12_set.insert("0");
    Instrmt_12.add_attribute("CapPx", "19730910.330000"); // 1
    Instrmt_12_set.insert("19730910.330000");
    Instrmt_12.add_attribute("FlrPx", "20797421.600000"); // 1
    Instrmt_12_set.insert("20797421.600000");
    Instrmt_12.add_attribute("PutCall", "0"); // 1
    Instrmt_12_set.insert("0");
    Instrmt_12.add_attribute("FlexInd", "false"); // 1
    Instrmt_12_set.insert("false");
    Instrmt_12.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_12_set.insert("true");
    Instrmt_12.add_attribute("TmUnit", "Mo"); // 1
    Instrmt_12_set.insert("Mo");
    Instrmt_12.add_attribute("CpnRt", "12518402.590000"); // 1
    Instrmt_12_set.insert("12518402.590000");
    Instrmt_12.add_attribute("Exch", "SecurityExchange_t_1780743337"); // 1
    Instrmt_12_set.insert("SecurityExchange_t_1780743337");
    Instrmt_12.add_attribute("PosLmt", "378548527"); // 1
    Instrmt_12_set.insert("378548527");
    Instrmt_12.add_attribute("NTPosLmt", "2007220071"); // 1
    Instrmt_12_set.insert("2007220071");
    Instrmt_12.add_attribute("Issr", "Issuer_t_1444024108"); // 1
    Instrmt_12_set.insert("Issuer_t_1444024108");
    Instrmt_12.add_attribute("EncIssrLen", "699790710"); // 1
    Instrmt_12_set.insert("699790710");
    Instrmt_12.add_attribute("EncIssr", "EncodedIssuer_t_1815242977"); // 1
    Instrmt_12_set.insert("EncodedIssuer_t_1815242977");
    Instrmt_12.add_attribute("Desc", "SecurityDesc_t_1938478901"); // 1
    Instrmt_12_set.insert("SecurityDesc_t_1938478901");
    Instrmt_12.add_attribute("EncSecDescLen", "937992159"); // 1
    Instrmt_12_set.insert("937992159");
    Instrmt_12.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_586270484"); // 1
    Instrmt_12_set.insert("EncodedSecurityDesc_t_586270484");
    Instrmt_12.add_attribute("Pool", "Pool_t_945026727"); // 1
    Instrmt_12_set.insert("Pool_t_945026727");
    Instrmt_12.add_attribute("CSetMo", "815975259"); // 1
    Instrmt_12_set.insert("815975259");
    Instrmt_12.add_attribute("CPPgm", "99"); // 1
    Instrmt_12_set.insert("99");
    Instrmt_12.add_attribute("CPRegT", "CPRegType_t_326737769"); // 1
    Instrmt_12_set.insert("CPRegType_t_326737769");
    Instrmt_12.add_attribute("Dated", "DatedDate_t_107687548"); // 1
    Instrmt_12_set.insert("DatedDate_t_107687548");
    Instrmt_12.add_attribute("IntAcrl", "InterestAccrualDate_t_555940022"); // 1
    Instrmt_12_set.insert("InterestAccrualDate_t_555940022");
    all_values.push_back(Instrmt_12_set);
    all_compo_names.insert("Instrmt_12_set");

    {
      xml_element AID_12{"AID"};
      multiset<string> AID_12_set;
      AID_12.add_attribute("AltID", "SecurityAltID_t_24716116"); // 2
      AID_12_set.insert("SecurityAltID_t_24716116");
      AID_12.add_attribute("AltIDSrc", "I"); // 2
      AID_12_set.insert("I");
      all_values.push_back(AID_12_set);
      all_compo_names.insert("AID_12_set");

      Instrmt_12.add_element(AID_12);
    }
    {
      xml_element SecXML_12{"SecXML"};
      multiset<string> SecXML_12_set;
      SecXML_12.add_attribute("Schema", "SecurityXMLSchema_t_984791872"); // 2
      SecXML_12_set.insert("SecurityXMLSchema_t_984791872");
      all_values.push_back(SecXML_12_set);
      all_compo_names.insert("SecXML_12_set");

      Instrmt_12.add_element(SecXML_12);
    }
    {
      xml_element Evnt_12{"Evnt"};
      multiset<string> Evnt_12_set;
      Evnt_12.add_attribute("EventTyp", "15"); // 2
      Evnt_12_set.insert("15");
      Evnt_12.add_attribute("Dt", "EventDate_t_1145928277"); // 2
      Evnt_12_set.insert("EventDate_t_1145928277");
      Evnt_12.add_attribute("Tm", "EventTime_t_212539594"); // 2
      Evnt_12_set.insert("EventTime_t_212539594");
      Evnt_12.add_attribute("Px", "9112148.110000"); // 2
      Evnt_12_set.insert("9112148.110000");
      Evnt_12.add_attribute("Txt", "EventText_t_149341503"); // 2
      Evnt_12_set.insert("EventText_t_149341503");
      all_values.push_back(Evnt_12_set);
      all_compo_names.insert("Evnt_12_set");

      Instrmt_12.add_element(Evnt_12);
    }
    {
      xml_element Pty_106{"Pty"};
      multiset<string> Pty_106_set;
      Pty_106.add_attribute("ID", "InstrumentPartyID_t_272206874"); // 2
      Pty_106_set.insert("InstrumentPartyID_t_272206874");
      Pty_106.add_attribute("Src", "9"); // 2
      Pty_106_set.insert("9");
      Pty_106.add_attribute("R", "65"); // 2
      Pty_106_set.insert("65");
      all_values.push_back(Pty_106_set);
      all_compo_names.insert("Pty_106_set");

      {
        xml_element Sub_106{"Sub"};
        multiset<string> Sub_106_set;
        Sub_106.add_attribute("ID", "InstrumentPartySubID_t_797117200"); // 3
        Sub_106_set.insert("InstrumentPartySubID_t_797117200");
        Sub_106.add_attribute("Typ", "14"); // 3
        Sub_106_set.insert("14");
        all_values.push_back(Sub_106_set);
        all_compo_names.insert("Sub_106_set");

        Pty_106.add_element(Sub_106);
      }
      Instrmt_12.add_element(Pty_106);
    }
    {
      xml_element CmplxEvnt_12{"CmplxEvnt"};
      multiset<string> CmplxEvnt_12_set;
      CmplxEvnt_12.add_attribute("Typ", "8"); // 2
      CmplxEvnt_12_set.insert("8");
      CmplxEvnt_12.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1266424975"); // 2
      CmplxEvnt_12_set.insert("ComplexOptPayoutAmount_t_1266424975");
      CmplxEvnt_12.add_attribute("Px", "21394332.130000"); // 2
      CmplxEvnt_12_set.insert("21394332.130000");
      CmplxEvnt_12.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_12_set.insert("4");
      CmplxEvnt_12.add_attribute("PxBndryPrcsn", "16449735.020000"); // 2
      CmplxEvnt_12_set.insert("16449735.020000");
      CmplxEvnt_12.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_12_set.insert("3");
      CmplxEvnt_12.add_attribute("Cond", "2"); // 2
      CmplxEvnt_12_set.insert("2");
      all_values.push_back(CmplxEvnt_12_set);
      all_compo_names.insert("CmplxEvnt_12_set");

      {
        xml_element EvntDts_12{"EvntDts"};
        multiset<string> EvntDts_12_set;
        EvntDts_12.add_attribute("StartDt", "ComplexEventStartDate_t_197280564"); // 3
        EvntDts_12_set.insert("ComplexEventStartDate_t_197280564");
        EvntDts_12.add_attribute("EndDt", "ComplexEventEndDate_t_1666928965"); // 3
        EvntDts_12_set.insert("ComplexEventEndDate_t_1666928965");
        all_values.push_back(EvntDts_12_set);
        all_compo_names.insert("EvntDts_12_set");

        {
          xml_element EvntTms_12{"EvntTms"};
          multiset<string> EvntTms_12_set;
          EvntTms_12.add_attribute("StartTm", "1980676484"); // 4
          EvntTms_12_set.insert("1980676484");
          EvntTms_12.add_attribute("EndTm", "1135272723"); // 4
          EvntTms_12_set.insert("1135272723");
          all_values.push_back(EvntTms_12_set);
          all_compo_names.insert("EvntTms_12_set");

          EvntDts_12.add_element(EvntTms_12);
        }
        CmplxEvnt_12.add_element(EvntDts_12);
      }
      Instrmt_12.add_element(CmplxEvnt_12);
    }
    elt.add_element(Instrmt_12);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_3{"InstrmtExt"};
    multiset<string> InstrmtExt_3_set;
    InstrmtExt_3.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_3_set.insert("2");
    InstrmtExt_3.add_attribute("PctAtRisk", "7782195.630000"); // 1
    InstrmtExt_3_set.insert("7782195.630000");
    all_values.push_back(InstrmtExt_3_set);
    all_compo_names.insert("InstrmtExt_3_set");

    {
      xml_element Attrb_3{"Attrb"};
      multiset<string> Attrb_3_set;
      Attrb_3.add_attribute("Typ", "20"); // 2
      Attrb_3_set.insert("20");
      Attrb_3.add_attribute("Val", "InstrAttribValue_t_929633182"); // 2
      Attrb_3_set.insert("InstrAttribValue_t_929633182");
      all_values.push_back(Attrb_3_set);
      all_compo_names.insert("Attrb_3_set");

      InstrmtExt_3.add_element(Attrb_3);
    }
    elt.add_element(InstrmtExt_3);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_9{"FinDetls"};
    multiset<string> FinDetls_9_set;
    FinDetls_9.add_attribute("AgmtDesc", "AgreementDesc_t_1104957332"); // 1
    FinDetls_9_set.insert("AgreementDesc_t_1104957332");
    FinDetls_9.add_attribute("AgmtID", "AgreementID_t_2058935530"); // 1
    FinDetls_9_set.insert("AgreementID_t_2058935530");
    FinDetls_9.add_attribute("AgmtDt", "AgreementDate_t_1485573204"); // 1
    FinDetls_9_set.insert("AgreementDate_t_1485573204");
    FinDetls_9.add_attribute("AgmtCcy", "JPY"); // 1
    FinDetls_9_set.insert("JPY");
    FinDetls_9.add_attribute("TrmTyp", "1"); // 1
    FinDetls_9_set.insert("1");
    FinDetls_9.add_attribute("StartDt", "StartDate_t_1599983703"); // 1
    FinDetls_9_set.insert("StartDate_t_1599983703");
    FinDetls_9.add_attribute("EndDt", "EndDate_t_585312711"); // 1
    FinDetls_9_set.insert("EndDate_t_585312711");
    FinDetls_9.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_9_set.insert("2");
    FinDetls_9.add_attribute("MgnRatio", "3637148.660000"); // 1
    FinDetls_9_set.insert("3637148.660000");
    all_values.push_back(FinDetls_9_set);
    all_compo_names.insert("FinDetls_9_set");

    elt.add_element(FinDetls_9);
  } // end FinDetls
  { // Undly
    xml_element Undly_22{"Undly"};
    multiset<string> Undly_22_set;
    Undly_22.add_attribute("Sym", "UnderlyingSymbol_t_807627897"); // 1
    Undly_22_set.insert("UnderlyingSymbol_t_807627897");
    Undly_22.add_attribute("Sfx", "WI"); // 1
    Undly_22_set.insert("WI");
    Undly_22.add_attribute("ID", "UnderlyingSecurityID_t_816254229"); // 1
    Undly_22_set.insert("UnderlyingSecurityID_t_816254229");
    Undly_22.add_attribute("Src", "M"); // 1
    Undly_22_set.insert("M");
    Undly_22.add_attribute("Prod", "11"); // 1
    Undly_22_set.insert("11");
    Undly_22.add_attribute("CFI", "UnderlyingCFICode_t_1928651663"); // 1
    Undly_22_set.insert("UnderlyingCFICode_t_1928651663");
    Undly_22.add_attribute("SecTyp", "YANK"); // 1
    Undly_22_set.insert("YANK");
    Undly_22.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1980079581"); // 1
    Undly_22_set.insert("UnderlyingSecuritySubType_t_1980079581");
    Undly_22.add_attribute("MMY", "526825138"); // 1
    Undly_22_set.insert("526825138");
    Undly_22.add_attribute("Mat", "UnderlyingMaturityDate_t_221176279"); // 1
    Undly_22_set.insert("UnderlyingMaturityDate_t_221176279");
    Undly_22.add_attribute("MatTm", "1831765569"); // 1
    Undly_22_set.insert("1831765569");
    Undly_22.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_569022721"); // 1
    Undly_22_set.insert("UnderlyingCouponPaymentDate_t_569022721");
    Undly_22.add_attribute("RestrctTyp", "XR"); // 1
    Undly_22_set.insert("XR");
    Undly_22.add_attribute("Snrty", "SB"); // 1
    Undly_22_set.insert("SB");
    Undly_22.add_attribute("NotlPctOut", "4022155.570000"); // 1
    Undly_22_set.insert("4022155.570000");
    Undly_22.add_attribute("OrigNotlPctOut", "15537295.670000"); // 1
    Undly_22_set.insert("15537295.670000");
    Undly_22.add_attribute("AttchPnt", "14569266.880000"); // 1
    Undly_22_set.insert("14569266.880000");
    Undly_22.add_attribute("DetchPnt", "11804351.200000"); // 1
    Undly_22_set.insert("11804351.200000");
    Undly_22.add_attribute("Issued", "UnderlyingIssueDate_t_1357493901"); // 1
    Undly_22_set.insert("UnderlyingIssueDate_t_1357493901");
    Undly_22.add_attribute("RepoCollSecTyp", "239076222"); // 1
    Undly_22_set.insert("239076222");
    Undly_22.add_attribute("RepoTrm", "137908804"); // 1
    Undly_22_set.insert("137908804");
    Undly_22.add_attribute("RepoRt", "12689457.840000"); // 1
    Undly_22_set.insert("12689457.840000");
    Undly_22.add_attribute("Fctr", "17246494.260000"); // 1
    Undly_22_set.insert("17246494.260000");
    Undly_22.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1267582252"); // 1
    Undly_22_set.insert("UnderlyingCreditRating_t_1267582252");
    Undly_22.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_708330218"); // 1
    Undly_22_set.insert("UnderlyingInstrRegistry_t_708330218");
    Undly_22.add_attribute("Ctry", "2047530855"); // 1
    Undly_22_set.insert("2047530855");
    Undly_22.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_720082307"); // 1
    Undly_22_set.insert("UnderlyingStateOrProvinceOfIssue_t_720082307");
    Undly_22.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1293642929"); // 1
    Undly_22_set.insert("UnderlyingLocaleOfIssue_t_1293642929");
    Undly_22.add_attribute("Redeem", "UnderlyingRedemptionDate_t_435468229"); // 1
    Undly_22_set.insert("UnderlyingRedemptionDate_t_435468229");
    Undly_22.add_attribute("StrkPx", "10837971.730000"); // 1
    Undly_22_set.insert("10837971.730000");
    Undly_22.add_attribute("StrkCcy", "JPY"); // 1
    Undly_22_set.insert("JPY");
    Undly_22.add_attribute("OptA", "36850588"); // 1
    Undly_22_set.insert("36850588");
    Undly_22.add_attribute("Mult", "6970677.250000"); // 1
    Undly_22_set.insert("6970677.250000");
    Undly_22.add_attribute("MultTyp", "1"); // 1
    Undly_22_set.insert("1");
    Undly_22.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_22_set.insert("0");
    Undly_22.add_attribute("UOM", "oz_tr"); // 1
    Undly_22_set.insert("oz_tr");
    Undly_22.add_attribute("UOMQty", "14240440.000000"); // 1
    Undly_22_set.insert("14240440.000000");
    Undly_22.add_attribute("PxUOM", "Alw"); // 1
    Undly_22_set.insert("Alw");
    Undly_22.add_attribute("PxUOMQty", "10050608.780000"); // 1
    Undly_22_set.insert("10050608.780000");
    Undly_22.add_attribute("TmUnit", "D"); // 1
    Undly_22_set.insert("D");
    Undly_22.add_attribute("ExerStyle", "0"); // 1
    Undly_22_set.insert("0");
    Undly_22.add_attribute("CpnRt", "15740835.990000"); // 1
    Undly_22_set.insert("15740835.990000");
    Undly_22.add_attribute("Exch", "UnderlyingSecurityExchange_t_2063677123"); // 1
    Undly_22_set.insert("UnderlyingSecurityExchange_t_2063677123");
    Undly_22.add_attribute("Issr", "UnderlyingIssuer_t_745585698"); // 1
    Undly_22_set.insert("UnderlyingIssuer_t_745585698");
    Undly_22.add_attribute("EncUndIssrLen", "1976299156"); // 1
    Undly_22_set.insert("1976299156");
    Undly_22.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1469923042"); // 1
    Undly_22_set.insert("EncodedUnderlyingIssuer_t_1469923042");
    Undly_22.add_attribute("Desc", "UnderlyingSecurityDesc_t_55028738"); // 1
    Undly_22_set.insert("UnderlyingSecurityDesc_t_55028738");
    Undly_22.add_attribute("EncUndSecDescLen", "1009250628"); // 1
    Undly_22_set.insert("1009250628");
    Undly_22.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_679933295"); // 1
    Undly_22_set.insert("EncodedUnderlyingSecurityDesc_t_679933295");
    Undly_22.add_attribute("CPPgm", "UnderlyingCPProgram_t_294104960"); // 1
    Undly_22_set.insert("UnderlyingCPProgram_t_294104960");
    Undly_22.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1147159432"); // 1
    Undly_22_set.insert("UnderlyingCPRegType_t_1147159432");
    Undly_22.add_attribute("AllocPct", "19488790.790000"); // 1
    Undly_22_set.insert("19488790.790000");
    Undly_22.add_attribute("Ccy", "USD"); // 1
    Undly_22_set.insert("USD");
    Undly_22.add_attribute("Qty", "5097256.490000"); // 1
    Undly_22_set.insert("5097256.490000");
    Undly_22.add_attribute("SettlTyp", "4"); // 1
    Undly_22_set.insert("4");
    Undly_22.add_attribute("CashAmt", "UnderlyingCashAmount_t_987340343"); // 1
    Undly_22_set.insert("UnderlyingCashAmount_t_987340343");
    Undly_22.add_attribute("CashTyp", "DIFF"); // 1
    Undly_22_set.insert("DIFF");
    Undly_22.add_attribute("Px", "2067861.750000"); // 1
    Undly_22_set.insert("2067861.750000");
    Undly_22.add_attribute("DirtPx", "20711375.170000"); // 1
    Undly_22_set.insert("20711375.170000");
    Undly_22.add_attribute("EndPx", "16841820.750000"); // 1
    Undly_22_set.insert("16841820.750000");
    Undly_22.add_attribute("StartVal", "UnderlyingStartValue_t_1449882302"); // 1
    Undly_22_set.insert("UnderlyingStartValue_t_1449882302");
    Undly_22.add_attribute("CurVal", "UnderlyingCurrentValue_t_2107988105"); // 1
    Undly_22_set.insert("UnderlyingCurrentValue_t_2107988105");
    Undly_22.add_attribute("EndVal", "UnderlyingEndValue_t_233766152"); // 1
    Undly_22_set.insert("UnderlyingEndValue_t_233766152");
    Undly_22.add_attribute("AdjQty", "27562.300000"); // 1
    Undly_22_set.insert("27562.300000");
    Undly_22.add_attribute("FxRate", "19854850.620000"); // 1
    Undly_22_set.insert("19854850.620000");
    Undly_22.add_attribute("FxRateCalc", "D"); // 1
    Undly_22_set.insert("D");
    Undly_22.add_attribute("CapValu", "UnderlyingCapValue_t_1426800230"); // 1
    Undly_22_set.insert("UnderlyingCapValue_t_1426800230");
    Undly_22.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1695577953"); // 1
    Undly_22_set.insert("UnderlyingSettlMethod_t_1695577953");
    Undly_22.add_attribute("PutCall", "1717062771"); // 1
    Undly_22_set.insert("1717062771");
    all_values.push_back(Undly_22_set);
    all_compo_names.insert("Undly_22_set");

    {
      xml_element UndAID_22{"UndAID"};
      multiset<string> UndAID_22_set;
      UndAID_22.add_attribute("AltID", "UnderlyingSecurityAltID_t_924536862"); // 2
      UndAID_22_set.insert("UnderlyingSecurityAltID_t_924536862");
      UndAID_22.add_attribute("AltIDSrc", "C"); // 2
      UndAID_22_set.insert("C");
      all_values.push_back(UndAID_22_set);
      all_compo_names.insert("UndAID_22_set");

      Undly_22.add_element(UndAID_22);
    }
    {
      xml_element Stip_38{"Stip"};
      multiset<string> Stip_38_set;
      Stip_38.add_attribute("Typ", "BANKQUAL"); // 2
      Stip_38_set.insert("BANKQUAL");
      Stip_38.add_attribute("Val", "UnderlyingStipValue_t_840730337"); // 2
      Stip_38_set.insert("UnderlyingStipValue_t_840730337");
      all_values.push_back(Stip_38_set);
      all_compo_names.insert("Stip_38_set");

      Undly_22.add_element(Stip_38);
    }
    {
      xml_element Pty_107{"Pty"};
      multiset<string> Pty_107_set;
      Pty_107.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1835538463"); // 2
      Pty_107_set.insert("UnderlyingInstrumentPartyID_t_1835538463");
      Pty_107.add_attribute("Src", "8"); // 2
      Pty_107_set.insert("8");
      Pty_107.add_attribute("R", "69"); // 2
      Pty_107_set.insert("69");
      all_values.push_back(Pty_107_set);
      all_compo_names.insert("Pty_107_set");

      {
        xml_element Sub_107{"Sub"};
        multiset<string> Sub_107_set;
        Sub_107.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1890567202"); // 3
        Sub_107_set.insert("UnderlyingInstrumentPartySubID_t_1890567202");
        Sub_107.add_attribute("Typ", "7"); // 3
        Sub_107_set.insert("7");
        all_values.push_back(Sub_107_set);
        all_compo_names.insert("Sub_107_set");

        Pty_107.add_element(Sub_107);
      }
      Undly_22.add_element(Pty_107);
    }
    elt.add_element(Undly_22);
  } // end Undly
  { // Leg
    xml_element Leg_21{"Leg"};
    multiset<string> Leg_21_set;
    Leg_21.add_attribute("Sym", "LegSymbol_t_37188514"); // 1
    Leg_21_set.insert("LegSymbol_t_37188514");
    Leg_21.add_attribute("Sfx", "CD"); // 1
    Leg_21_set.insert("CD");
    Leg_21.add_attribute("ID", "LegSecurityID_t_644498458"); // 1
    Leg_21_set.insert("LegSecurityID_t_644498458");
    Leg_21.add_attribute("Src", "2"); // 1
    Leg_21_set.insert("2");
    Leg_21.add_attribute("Prod", "3"); // 1
    Leg_21_set.insert("3");
    Leg_21.add_attribute("CFI", "LegCFICode_t_1154224107"); // 1
    Leg_21_set.insert("LegCFICode_t_1154224107");
    Leg_21.add_attribute("SecTyp", "ONITE"); // 1
    Leg_21_set.insert("ONITE");
    Leg_21.add_attribute("SecSubTyp", "LegSecuritySubType_t_88519376"); // 1
    Leg_21_set.insert("LegSecuritySubType_t_88519376");
    Leg_21.add_attribute("MMY", "810109038"); // 1
    Leg_21_set.insert("810109038");
    Leg_21.add_attribute("Mat", "LegMaturityDate_t_2034047023"); // 1
    Leg_21_set.insert("LegMaturityDate_t_2034047023");
    Leg_21.add_attribute("MatTm", "12173245"); // 1
    Leg_21_set.insert("12173245");
    Leg_21.add_attribute("CpnPmt", "LegCouponPaymentDate_t_346807465"); // 1
    Leg_21_set.insert("LegCouponPaymentDate_t_346807465");
    Leg_21.add_attribute("Issued", "LegIssueDate_t_1336445677"); // 1
    Leg_21_set.insert("LegIssueDate_t_1336445677");
    Leg_21.add_attribute("RepoCollSecTyp", "2120161351"); // 1
    Leg_21_set.insert("2120161351");
    Leg_21.add_attribute("RepoTrm", "580573618"); // 1
    Leg_21_set.insert("580573618");
    Leg_21.add_attribute("RepoRt", "13392019.070000"); // 1
    Leg_21_set.insert("13392019.070000");
    Leg_21.add_attribute("Fctr", "19581627.650000"); // 1
    Leg_21_set.insert("19581627.650000");
    Leg_21.add_attribute("CrdRtg", "LegCreditRating_t_1292575511"); // 1
    Leg_21_set.insert("LegCreditRating_t_1292575511");
    Leg_21.add_attribute("Rgstry", "LegInstrRegistry_t_618518489"); // 1
    Leg_21_set.insert("LegInstrRegistry_t_618518489");
    Leg_21.add_attribute("Ctry", "1506257070"); // 1
    Leg_21_set.insert("1506257070");
    Leg_21.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_862154634"); // 1
    Leg_21_set.insert("LegStateOrProvinceOfIssue_t_862154634");
    Leg_21.add_attribute("Lcl", "LegLocaleOfIssue_t_1543055351"); // 1
    Leg_21_set.insert("LegLocaleOfIssue_t_1543055351");
    Leg_21.add_attribute("Redeem", "LegRedemptionDate_t_448726187"); // 1
    Leg_21_set.insert("LegRedemptionDate_t_448726187");
    Leg_21.add_attribute("Strk", "20058173.570000"); // 1
    Leg_21_set.insert("20058173.570000");
    Leg_21.add_attribute("StrkCcy", "CAN"); // 1
    Leg_21_set.insert("CAN");
    Leg_21.add_attribute("OptA", "830811941"); // 1
    Leg_21_set.insert("830811941");
    Leg_21.add_attribute("Cmult", "3994717.710000"); // 1
    Leg_21_set.insert("3994717.710000");
    Leg_21.add_attribute("MultTyp", "0"); // 1
    Leg_21_set.insert("0");
    Leg_21.add_attribute("FlowSchedTyp", "3"); // 1
    Leg_21_set.insert("3");
    Leg_21.add_attribute("UOM", "Bcf"); // 1
    Leg_21_set.insert("Bcf");
    Leg_21.add_attribute("UOMQty", "20645367.190000"); // 1
    Leg_21_set.insert("20645367.190000");
    Leg_21.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_21_set.insert("MMbbl");
    Leg_21.add_attribute("PxUOMQty", "18870732.560000"); // 1
    Leg_21_set.insert("18870732.560000");
    Leg_21.add_attribute("TmUnit", "Wk"); // 1
    Leg_21_set.insert("Wk");
    Leg_21.add_attribute("ExerStyle", "0"); // 1
    Leg_21_set.insert("0");
    Leg_21.add_attribute("CpnRt", "8938137.150000"); // 1
    Leg_21_set.insert("8938137.150000");
    Leg_21.add_attribute("Exch", "LegSecurityExchange_t_1652773172"); // 1
    Leg_21_set.insert("LegSecurityExchange_t_1652773172");
    Leg_21.add_attribute("Issr", "LegIssuer_t_836160207"); // 1
    Leg_21_set.insert("LegIssuer_t_836160207");
    Leg_21.add_attribute("EncLegIssrLen", "1703922754"); // 1
    Leg_21_set.insert("1703922754");
    Leg_21.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1539336547"); // 1
    Leg_21_set.insert("EncodedLegIssuer_t_1539336547");
    Leg_21.add_attribute("Desc", "LegSecurityDesc_t_848333452"); // 1
    Leg_21_set.insert("LegSecurityDesc_t_848333452");
    Leg_21.add_attribute("EncLegSecDescLen", "2050730219"); // 1
    Leg_21_set.insert("2050730219");
    Leg_21.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_728298576"); // 1
    Leg_21_set.insert("EncodedLegSecurityDesc_t_728298576");
    Leg_21.add_attribute("RatioQty", "8210111.550000"); // 1
    Leg_21_set.insert("8210111.550000");
    Leg_21.add_attribute("Side", "E"); // 1
    Leg_21_set.insert("E");
    Leg_21.add_attribute("Ccy", "EUR"); // 1
    Leg_21_set.insert("EUR");
    Leg_21.add_attribute("Pool", "LegPool_t_1776395700"); // 1
    Leg_21_set.insert("LegPool_t_1776395700");
    Leg_21.add_attribute("Dated", "LegDatedDate_t_538535325"); // 1
    Leg_21_set.insert("LegDatedDate_t_538535325");
    Leg_21.add_attribute("CSetMo", "2137947343"); // 1
    Leg_21_set.insert("2137947343");
    Leg_21.add_attribute("IntAcrl", "LegInterestAccrualDate_t_491066687"); // 1
    Leg_21_set.insert("LegInterestAccrualDate_t_491066687");
    Leg_21.add_attribute("PutCall", "2081590676"); // 1
    Leg_21_set.insert("2081590676");
    Leg_21.add_attribute("LegOptionRatio", "4391898.830000"); // 1
    Leg_21_set.insert("4391898.830000");
    Leg_21.add_attribute("Px", "3494003.960000"); // 1
    Leg_21_set.insert("3494003.960000");
    all_values.push_back(Leg_21_set);
    all_compo_names.insert("Leg_21_set");

    {
      xml_element LegAID_21{"LegAID"};
      multiset<string> LegAID_21_set;
      LegAID_21.add_attribute("SecAltID", "LegSecurityAltID_t_170409069"); // 2
      LegAID_21_set.insert("LegSecurityAltID_t_170409069");
      LegAID_21.add_attribute("SecAltIDSrc", "J"); // 2
      LegAID_21_set.insert("J");
      all_values.push_back(LegAID_21_set);
      all_compo_names.insert("LegAID_21_set");

      Leg_21.add_element(LegAID_21);
    }
    elt.add_element(Leg_21);
  } // end Leg
  { // Yield
    xml_element Yield_3{"Yield"};
    multiset<string> Yield_3_set;
    Yield_3.add_attribute("Typ", "MARK"); // 1
    Yield_3_set.insert("MARK");
    Yield_3.add_attribute("Yld", "5698808.400000"); // 1
    Yield_3_set.insert("5698808.400000");
    Yield_3.add_attribute("CalcDt", "YieldCalcDate_t_455835443"); // 1
    Yield_3_set.insert("YieldCalcDate_t_455835443");
    Yield_3.add_attribute("RedDt", "YieldRedemptionDate_t_1845269490"); // 1
    Yield_3_set.insert("YieldRedemptionDate_t_1845269490");
    Yield_3.add_attribute("RedPx", "18124556.380000"); // 1
    Yield_3_set.insert("18124556.380000");
    Yield_3.add_attribute("RedPxTyp", "9"); // 1
    Yield_3_set.insert("9");
    all_values.push_back(Yield_3_set);
    all_compo_names.insert("Yield_3_set");

    elt.add_element(Yield_3);
  } // end Yield
  { // Cpcty
    xml_element Cpcty_0{"Cpcty"};
    multiset<string> Cpcty_0_set;
    Cpcty_0.add_attribute("Cpcty", "R"); // 1
    Cpcty_0_set.insert("R");
    Cpcty_0.add_attribute("Rstctions", "A"); // 1
    Cpcty_0_set.insert("A");
    Cpcty_0.add_attribute("CpctyQty", "20918884.700000"); // 1
    Cpcty_0_set.insert("20918884.700000");
    all_values.push_back(Cpcty_0_set);
    all_compo_names.insert("Cpcty_0_set");

    elt.add_element(Cpcty_0);
  } // end Cpcty
  { // Cpcty
    xml_element Cpcty_1{"Cpcty"};
    multiset<string> Cpcty_1_set;
    Cpcty_1.add_attribute("Cpcty", "A"); // 1
    Cpcty_1_set.insert("A");
    Cpcty_1.add_attribute("Rstctions", "D"); // 1
    Cpcty_1_set.insert("D");
    Cpcty_1.add_attribute("CpctyQty", "7805650.290000"); // 1
    Cpcty_1_set.insert("7805650.290000");
    all_values.push_back(Cpcty_1_set);
    all_compo_names.insert("Cpcty_1_set");

    elt.add_element(Cpcty_1);
  } // end Cpcty
  { // Cpcty
    xml_element Cpcty_2{"Cpcty"};
    multiset<string> Cpcty_2_set;
    Cpcty_2.add_attribute("Cpcty", "R"); // 1
    Cpcty_2_set.insert("R");
    Cpcty_2.add_attribute("Rstctions", "C"); // 1
    Cpcty_2_set.insert("C");
    Cpcty_2.add_attribute("CpctyQty", "16288984.820000"); // 1
    Cpcty_2_set.insert("16288984.820000");
    all_values.push_back(Cpcty_2_set);
    all_compo_names.insert("Cpcty_2_set");

    elt.add_element(Cpcty_2);
  } // end Cpcty
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_8{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_8_set;
    SprdBnchmkCurve_8.add_attribute("Spread", "19055446.390000"); // 1
    SprdBnchmkCurve_8_set.insert("19055446.390000");
    SprdBnchmkCurve_8.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_8_set.insert("CHF");
    SprdBnchmkCurve_8.add_attribute("Name", "EUREPO"); // 1
    SprdBnchmkCurve_8_set.insert("EUREPO");
    SprdBnchmkCurve_8.add_attribute("Point", "BenchmarkCurvePoint_t_1891342323"); // 1
    SprdBnchmkCurve_8_set.insert("BenchmarkCurvePoint_t_1891342323");
    SprdBnchmkCurve_8.add_attribute("Px", "9341162.620000"); // 1
    SprdBnchmkCurve_8_set.insert("9341162.620000");
    SprdBnchmkCurve_8.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_8_set.insert("6");
    SprdBnchmkCurve_8.add_attribute("SecID", "BenchmarkSecurityID_t_282394000"); // 1
    SprdBnchmkCurve_8_set.insert("BenchmarkSecurityID_t_282394000");
    SprdBnchmkCurve_8.add_attribute("SecIDSrc", "H"); // 1
    SprdBnchmkCurve_8_set.insert("H");
    all_values.push_back(SprdBnchmkCurve_8_set);
    all_compo_names.insert("SprdBnchmkCurve_8_set");

    elt.add_element(SprdBnchmkCurve_8);
  } // end SprdBnchmkCurve
  { // SetInstr
    xml_element SetInstr_11{"SetInstr"};
    multiset<string> SetInstr_11_set;
    SetInstr_11.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_11_set.insert("0");
    SetInstr_11.add_attribute("StandInstDbTyp", "4"); // 1
    SetInstr_11_set.insert("4");
    SetInstr_11.add_attribute("StandInstDbName", "StandInstDbName_t_1363769841"); // 1
    SetInstr_11_set.insert("StandInstDbName_t_1363769841");
    SetInstr_11.add_attribute("StandInstDbID", "StandInstDbID_t_711260317"); // 1
    SetInstr_11_set.insert("StandInstDbID_t_711260317");
    all_values.push_back(SetInstr_11_set);
    all_compo_names.insert("SetInstr_11_set");

    {
      xml_element DlvInst_11{"DlvInst"};
      multiset<string> DlvInst_11_set;
      DlvInst_11.add_attribute("InstSrc", "3"); // 2
      DlvInst_11_set.insert("3");
      DlvInst_11.add_attribute("InstTyp", "S"); // 2
      DlvInst_11_set.insert("S");
      all_values.push_back(DlvInst_11_set);
      all_compo_names.insert("DlvInst_11_set");

      {
        xml_element Pty_108{"Pty"};
        multiset<string> Pty_108_set;
        Pty_108.add_attribute("ID", "SettlPartyID_t_1891472654"); // 3
        Pty_108_set.insert("SettlPartyID_t_1891472654");
        Pty_108.add_attribute("Src", "3"); // 3
        Pty_108_set.insert("3");
        Pty_108.add_attribute("R", "7"); // 3
        Pty_108_set.insert("7");
        all_values.push_back(Pty_108_set);
        all_compo_names.insert("Pty_108_set");

        {
          xml_element Sub_108{"Sub"};
          multiset<string> Sub_108_set;
          Sub_108.add_attribute("ID", "SettlPartySubID_t_1589258497"); // 4
          Sub_108_set.insert("SettlPartySubID_t_1589258497");
          Sub_108.add_attribute("Typ", "30"); // 4
          Sub_108_set.insert("30");
          all_values.push_back(Sub_108_set);
          all_compo_names.insert("Sub_108_set");

          Pty_108.add_element(Sub_108);
        }
        DlvInst_11.add_element(Pty_108);
      }
      SetInstr_11.add_element(DlvInst_11);
    }
    elt.add_element(SetInstr_11);
  } // end SetInstr
  { // Comm
    xml_element Comm_11{"Comm"};
    multiset<string> Comm_11_set;
    Comm_11.add_attribute("Comm", "Commission_t_620981036"); // 1
    Comm_11_set.insert("Commission_t_620981036");
    Comm_11.add_attribute("CommTyp", "2"); // 1
    Comm_11_set.insert("2");
    Comm_11.add_attribute("Ccy", "USD"); // 1
    Comm_11_set.insert("USD");
    Comm_11.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_11_set.insert("Y");
    all_values.push_back(Comm_11_set);
    all_compo_names.insert("Comm_11_set");

    elt.add_element(Comm_11);
  } // end Comm
  { // Stip
    xml_element Stip_39{"Stip"};
    multiset<string> Stip_39_set;
    Stip_39.add_attribute("Typ", "ABS"); // 1
    Stip_39_set.insert("ABS");
    Stip_39.add_attribute("Val", "StipulationValue_t_1510992341"); // 1
    Stip_39_set.insert("StipulationValue_t_1510992341");
    all_values.push_back(Stip_39_set);
    all_compo_names.insert("Stip_39_set");

    elt.add_element(Stip_39);
  } // end Stip
  { // Stip
    xml_element Stip_40{"Stip"};
    multiset<string> Stip_40_set;
    Stip_40.add_attribute("Typ", "MAT"); // 1
    Stip_40_set.insert("MAT");
    Stip_40.add_attribute("Val", "StipulationValue_t_1766099151"); // 1
    Stip_40_set.insert("StipulationValue_t_1766099151");
    all_values.push_back(Stip_40_set);
    all_compo_names.insert("Stip_40_set");

    elt.add_element(Stip_40);
  } // end Stip
  { // MiscFees
    xml_element MiscFees_15{"MiscFees"};
    multiset<string> MiscFees_15_set;
    MiscFees_15.add_attribute("Amt", "MiscFeeAmt_t_2085058901"); // 1
    MiscFees_15_set.insert("MiscFeeAmt_t_2085058901");
    MiscFees_15.add_attribute("Curr", "GBP"); // 1
    MiscFees_15_set.insert("GBP");
    MiscFees_15.add_attribute("Typ", "8"); // 1
    MiscFees_15_set.insert("8");
    MiscFees_15.add_attribute("Basis", "0"); // 1
    MiscFees_15_set.insert("0");
    all_values.push_back(MiscFees_15_set);
    all_compo_names.insert("MiscFees_15_set");

    elt.add_element(MiscFees_15);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_16{"MiscFees"};
    multiset<string> MiscFees_16_set;
    MiscFees_16.add_attribute("Amt", "MiscFeeAmt_t_81465779"); // 1
    MiscFees_16_set.insert("MiscFeeAmt_t_81465779");
    MiscFees_16.add_attribute("Curr", "EUR"); // 1
    MiscFees_16_set.insert("EUR");
    MiscFees_16.add_attribute("Typ", "9"); // 1
    MiscFees_16_set.insert("9");
    MiscFees_16.add_attribute("Basis", "2"); // 1
    MiscFees_16_set.insert("2");
    all_values.push_back(MiscFees_16_set);
    all_compo_names.insert("MiscFees_16_set");

    elt.add_element(MiscFees_16);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_17{"MiscFees"};
    multiset<string> MiscFees_17_set;
    MiscFees_17.add_attribute("Amt", "MiscFeeAmt_t_1832694696"); // 1
    MiscFees_17_set.insert("MiscFeeAmt_t_1832694696");
    MiscFees_17.add_attribute("Curr", "CHF"); // 1
    MiscFees_17_set.insert("CHF");
    MiscFees_17.add_attribute("Typ", "4"); // 1
    MiscFees_17_set.insert("4");
    MiscFees_17.add_attribute("Basis", "0"); // 1
    MiscFees_17_set.insert("0");
    all_values.push_back(MiscFees_17_set);
    all_compo_names.insert("MiscFees_17_set");

    elt.add_element(MiscFees_17);
  } // end MiscFees
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
