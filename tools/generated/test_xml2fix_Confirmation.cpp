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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Cnfm" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> Confirmation_message_t_0;
  elt.add_attribute("CnfmID", "ConfirmID_t_910223944"); // 0
  Confirmation_message_t_0.insert("ConfirmID_t_910223944");
  elt.add_attribute("CnfmRefID", "ConfirmRefID_t_1467424661"); // 0
  Confirmation_message_t_0.insert("ConfirmRefID_t_1467424661");
  elt.add_attribute("CnfmReqID", "ConfirmReqID_t_1680615202"); // 0
  Confirmation_message_t_0.insert("ConfirmReqID_t_1680615202");
  elt.add_attribute("CnfmTransTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("CnfmTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("CopyMsgInd", "true"); // 0
  Confirmation_message_t_0.insert("true");
  elt.add_attribute("LegalCnfm", "N"); // 0
  Confirmation_message_t_0.insert("N");
  elt.add_attribute("CnfmStat", "3"); // 0
  Confirmation_message_t_0.insert("3");
  elt.add_attribute("AllocID", "AllocID_t_633050166"); // 0
  Confirmation_message_t_0.insert("AllocID_t_633050166");
  elt.add_attribute("AllocID2", "SecondaryAllocID_t_2056165306"); // 0
  Confirmation_message_t_0.insert("SecondaryAllocID_t_2056165306");
  elt.add_attribute("IndAllocID", "IndividualAllocID_t_1065281932"); // 0
  Confirmation_message_t_0.insert("IndividualAllocID_t_1065281932");
  elt.add_attribute("TxnTm", "TransactTime_t_2123174713"); // 0
  Confirmation_message_t_0.insert("TransactTime_t_2123174713");
  elt.add_attribute("TrdDt", "TradeDate_t_1815271672"); // 0
  Confirmation_message_t_0.insert("TradeDate_t_1815271672");
  elt.add_attribute("Qty", "3320479.800000"); // 0
  Confirmation_message_t_0.insert("3320479.800000");
  elt.add_attribute("QtyTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("Side", "1"); // 0
  Confirmation_message_t_0.insert("1");
  elt.add_attribute("Ccy", "USD"); // 0
  Confirmation_message_t_0.insert("USD");
  elt.add_attribute("LastMkt", "LastMkt_t_1013742285"); // 0
  Confirmation_message_t_0.insert("LastMkt_t_1013742285");
  elt.add_attribute("Acct", "AllocAccount_t_1680102523"); // 0
  Confirmation_message_t_0.insert("AllocAccount_t_1680102523");
  elt.add_attribute("ActIDSrc", "5"); // 0
  Confirmation_message_t_0.insert("5");
  elt.add_attribute("AcctTyp", "2"); // 0
  Confirmation_message_t_0.insert("2");
  elt.add_attribute("AvgPx", "2382431.490000"); // 0
  Confirmation_message_t_0.insert("2382431.490000");
  elt.add_attribute("AvgPxPrcsn", "1099262082"); // 0
  Confirmation_message_t_0.insert("1099262082");
  elt.add_attribute("PxTyp", "19"); // 0
  Confirmation_message_t_0.insert("19");
  elt.add_attribute("AvgParPx", "4729428.960000"); // 0
  Confirmation_message_t_0.insert("4729428.960000");
  elt.add_attribute("RptedPx", "20288317.640000"); // 0
  Confirmation_message_t_0.insert("20288317.640000");
  elt.add_attribute("Txt", "Text_t_1834252150"); // 0
  Confirmation_message_t_0.insert("Text_t_1834252150");
  elt.add_attribute("EncTxtLen", "1401961330"); // 0
  Confirmation_message_t_0.insert("1401961330");
  elt.add_attribute("EncTxt", "EncodedText_t_975676969"); // 0
  Confirmation_message_t_0.insert("EncodedText_t_975676969");
  elt.add_attribute("ProcCode", "1"); // 0
  Confirmation_message_t_0.insert("1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_164701626"); // 0
  Confirmation_message_t_0.insert("GrossTradeAmt_t_164701626");
  elt.add_attribute("NumDaysInt", "295617982"); // 0
  Confirmation_message_t_0.insert("295617982");
  elt.add_attribute("ExDt", "ExDate_t_1510915237"); // 0
  Confirmation_message_t_0.insert("ExDate_t_1510915237");
  elt.add_attribute("AcrdIntRt", "3905480.850000"); // 0
  Confirmation_message_t_0.insert("3905480.850000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_1419191990"); // 0
  Confirmation_message_t_0.insert("AccruedInterestAmt_t_1419191990");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_1835735879"); // 0
  Confirmation_message_t_0.insert("InterestAtMaturity_t_1835735879");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_719781259"); // 0
  Confirmation_message_t_0.insert("EndAccruedInterestAmt_t_719781259");
  elt.add_attribute("StartCsh", "StartCash_t_960456184"); // 0
  Confirmation_message_t_0.insert("StartCash_t_960456184");
  elt.add_attribute("EndCsh", "EndCash_t_321302397"); // 0
  Confirmation_message_t_0.insert("EndCash_t_321302397");
  elt.add_attribute("Concession", "Concession_t_628462917"); // 0
  Confirmation_message_t_0.insert("Concession_t_628462917");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_2025738116"); // 0
  Confirmation_message_t_0.insert("TotalTakedown_t_2025738116");
  elt.add_attribute("NetMny", "NetMoney_t_296993462"); // 0
  Confirmation_message_t_0.insert("NetMoney_t_296993462");
  elt.add_attribute("MatNetMny", "MaturityNetMoney_t_296250942"); // 0
  Confirmation_message_t_0.insert("MaturityNetMoney_t_296250942");
  elt.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_210302448"); // 0
  Confirmation_message_t_0.insert("SettlCurrAmt_t_210302448");
  elt.add_attribute("SettlCcy", "USD"); // 0
  Confirmation_message_t_0.insert("USD");
  elt.add_attribute("SettlCurrFxRt", "17349505.860000"); // 0
  Confirmation_message_t_0.insert("17349505.860000");
  elt.add_attribute("SettlCurrFxRtCalc", "D"); // 0
  Confirmation_message_t_0.insert("D");
  elt.add_attribute("SettlTyp", "3"); // 0
  Confirmation_message_t_0.insert("3");
  elt.add_attribute("SettlDt", "SettlDate_t_1267569461"); // 0
  Confirmation_message_t_0.insert("SettlDate_t_1267569461");
  elt.add_attribute("SharedComm", "SharedCommission_t_2126583295"); // 0
  Confirmation_message_t_0.insert("SharedCommission_t_2126583295");
  all_values.push_back(Confirmation_message_t_0);
  all_compo_names.insert("Confirmation_message_t");

  { // Hdr
    xml_element Hdr_20{"Hdr"};
    multiset<string> Hdr_20_set;
    Hdr_20.add_attribute("SeqNum", "1016819005"); // 1
    Hdr_20_set.insert("1016819005");
    Hdr_20.add_attribute("SID", "SenderCompID_t_1505812610"); // 1
    Hdr_20_set.insert("SenderCompID_t_1505812610");
    Hdr_20.add_attribute("TID", "TargetCompID_t_1078361729"); // 1
    Hdr_20_set.insert("TargetCompID_t_1078361729");
    Hdr_20.add_attribute("OBID", "OnBehalfOfCompID_t_1723787922"); // 1
    Hdr_20_set.insert("OnBehalfOfCompID_t_1723787922");
    Hdr_20.add_attribute("D2ID", "DeliverToCompID_t_1978755507"); // 1
    Hdr_20_set.insert("DeliverToCompID_t_1978755507");
    Hdr_20.add_attribute("SSub", "SenderSubID_t_959709846"); // 1
    Hdr_20_set.insert("SenderSubID_t_959709846");
    Hdr_20.add_attribute("SLoc", "SenderLocationID_t_1410556424"); // 1
    Hdr_20_set.insert("SenderLocationID_t_1410556424");
    Hdr_20.add_attribute("TSub", "TargetSubID_t_1233233189"); // 1
    Hdr_20_set.insert("TargetSubID_t_1233233189");
    Hdr_20.add_attribute("TLoc", "TargetLocationID_t_1935386815"); // 1
    Hdr_20_set.insert("TargetLocationID_t_1935386815");
    Hdr_20.add_attribute("OBSub", "OnBehalfOfSubID_t_1240856459"); // 1
    Hdr_20_set.insert("OnBehalfOfSubID_t_1240856459");
    Hdr_20.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1397934815"); // 1
    Hdr_20_set.insert("OnBehalfOfLocationID_t_1397934815");
    Hdr_20.add_attribute("D2Sub", "DeliverToSubID_t_83521149"); // 1
    Hdr_20_set.insert("DeliverToSubID_t_83521149");
    Hdr_20.add_attribute("D2Loc", "DeliverToLocationID_t_604288048"); // 1
    Hdr_20_set.insert("DeliverToLocationID_t_604288048");
    Hdr_20.add_attribute("PosDup", "N"); // 1
    Hdr_20_set.insert("N");
    Hdr_20.add_attribute("PosRsnd", "Y"); // 1
    Hdr_20_set.insert("Y");
    Hdr_20.add_attribute("Snt", "SendingTime_t_292540279"); // 1
    Hdr_20_set.insert("SendingTime_t_292540279");
    Hdr_20.add_attribute("OrigSnt", "OrigSendingTime_t_360780511"); // 1
    Hdr_20_set.insert("OrigSendingTime_t_360780511");
    Hdr_20.add_attribute("MsgEncd", "MessageEncoding_t_315685675"); // 1
    Hdr_20_set.insert("MessageEncoding_t_315685675");
    all_values.push_back(Hdr_20_set);
    all_compo_names.insert("Hdr_20_set");

    {
      xml_element Hop_20{"Hop"};
      multiset<string> Hop_20_set;
      Hop_20.add_attribute("ID", "HopCompID_t_613842676"); // 2
      Hop_20_set.insert("HopCompID_t_613842676");
      Hop_20.add_attribute("Ref", "989243429"); // 2
      Hop_20_set.insert("989243429");
      Hop_20.add_attribute("Snt", "HopSendingTime_t_193940143"); // 2
      Hop_20_set.insert("HopSendingTime_t_193940143");
      all_values.push_back(Hop_20_set);
      all_compo_names.insert("Hop_20_set");

      Hdr_20.add_element(Hop_20);
    }
    elt.add_element(Hdr_20);
  } // end Hdr
  { // Pty
    xml_element Pty_105{"Pty"};
    multiset<string> Pty_105_set;
    Pty_105.add_attribute("ID", "PartyID_t_1285494371"); // 1
    Pty_105_set.insert("PartyID_t_1285494371");
    Pty_105.add_attribute("Src", "E"); // 1
    Pty_105_set.insert("E");
    Pty_105.add_attribute("R", "12"); // 1
    Pty_105_set.insert("12");
    all_values.push_back(Pty_105_set);
    all_compo_names.insert("Pty_105_set");

    {
      xml_element Sub_105{"Sub"};
      multiset<string> Sub_105_set;
      Sub_105.add_attribute("ID", "PartySubID_t_1402311137"); // 2
      Sub_105_set.insert("PartySubID_t_1402311137");
      Sub_105.add_attribute("Typ", "6"); // 2
      Sub_105_set.insert("6");
      all_values.push_back(Sub_105_set);
      all_compo_names.insert("Sub_105_set");

      Pty_105.add_element(Sub_105);
    }
    elt.add_element(Pty_105);
  } // end Pty
  { // Pty
    xml_element Pty_106{"Pty"};
    multiset<string> Pty_106_set;
    Pty_106.add_attribute("ID", "PartyID_t_828740610"); // 1
    Pty_106_set.insert("PartyID_t_828740610");
    Pty_106.add_attribute("Src", "7"); // 1
    Pty_106_set.insert("7");
    Pty_106.add_attribute("R", "49"); // 1
    Pty_106_set.insert("49");
    all_values.push_back(Pty_106_set);
    all_compo_names.insert("Pty_106_set");

    {
      xml_element Sub_106{"Sub"};
      multiset<string> Sub_106_set;
      Sub_106.add_attribute("ID", "PartySubID_t_807840258"); // 2
      Sub_106_set.insert("PartySubID_t_807840258");
      Sub_106.add_attribute("Typ", "13"); // 2
      Sub_106_set.insert("13");
      all_values.push_back(Sub_106_set);
      all_compo_names.insert("Sub_106_set");

      Pty_106.add_element(Sub_106);
    }
    elt.add_element(Pty_106);
  } // end Pty
  { // OrdAlloc
    xml_element OrdAlloc_7{"OrdAlloc"};
    multiset<string> OrdAlloc_7_set;
    OrdAlloc_7.add_attribute("ClOrdID", "ClOrdID_t_1886201987"); // 1
    OrdAlloc_7_set.insert("ClOrdID_t_1886201987");
    OrdAlloc_7.add_attribute("OrdID", "OrderID_t_978509820"); // 1
    OrdAlloc_7_set.insert("OrderID_t_978509820");
    OrdAlloc_7.add_attribute("OrdID2", "SecondaryOrderID_t_448879812"); // 1
    OrdAlloc_7_set.insert("SecondaryOrderID_t_448879812");
    OrdAlloc_7.add_attribute("ClOrdID2", "SecondaryClOrdID_t_698428185"); // 1
    OrdAlloc_7_set.insert("SecondaryClOrdID_t_698428185");
    OrdAlloc_7.add_attribute("ListID", "ListID_t_241582596"); // 1
    OrdAlloc_7_set.insert("ListID_t_241582596");
    OrdAlloc_7.add_attribute("Qty", "16821130.010000"); // 1
    OrdAlloc_7_set.insert("16821130.010000");
    OrdAlloc_7.add_attribute("AvgPx", "4863313.520000"); // 1
    OrdAlloc_7_set.insert("4863313.520000");
    OrdAlloc_7.add_attribute("BkngQty", "14824390.560000"); // 1
    OrdAlloc_7_set.insert("14824390.560000");
    all_values.push_back(OrdAlloc_7_set);
    all_compo_names.insert("OrdAlloc_7_set");

    {
      xml_element Pty_107{"Pty"};
      multiset<string> Pty_107_set;
      Pty_107.add_attribute("ID", "Nested2PartyID_t_932564168"); // 2
      Pty_107_set.insert("Nested2PartyID_t_932564168");
      Pty_107.add_attribute("Src", "6"); // 2
      Pty_107_set.insert("6");
      Pty_107.add_attribute("R", "36"); // 2
      Pty_107_set.insert("36");
      all_values.push_back(Pty_107_set);
      all_compo_names.insert("Pty_107_set");

      {
        xml_element Sub_107{"Sub"};
        multiset<string> Sub_107_set;
        Sub_107.add_attribute("ID", "Nested2PartySubID_t_573563421"); // 3
        Sub_107_set.insert("Nested2PartySubID_t_573563421");
        Sub_107.add_attribute("Typ", "21"); // 3
        Sub_107_set.insert("21");
        all_values.push_back(Sub_107_set);
        all_compo_names.insert("Sub_107_set");

        Pty_107.add_element(Sub_107);
      }
      OrdAlloc_7.add_element(Pty_107);
    }
    elt.add_element(OrdAlloc_7);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_8{"OrdAlloc"};
    multiset<string> OrdAlloc_8_set;
    OrdAlloc_8.add_attribute("ClOrdID", "ClOrdID_t_231783736"); // 1
    OrdAlloc_8_set.insert("ClOrdID_t_231783736");
    OrdAlloc_8.add_attribute("OrdID", "OrderID_t_934343932"); // 1
    OrdAlloc_8_set.insert("OrderID_t_934343932");
    OrdAlloc_8.add_attribute("OrdID2", "SecondaryOrderID_t_240767667"); // 1
    OrdAlloc_8_set.insert("SecondaryOrderID_t_240767667");
    OrdAlloc_8.add_attribute("ClOrdID2", "SecondaryClOrdID_t_845626412"); // 1
    OrdAlloc_8_set.insert("SecondaryClOrdID_t_845626412");
    OrdAlloc_8.add_attribute("ListID", "ListID_t_1923587361"); // 1
    OrdAlloc_8_set.insert("ListID_t_1923587361");
    OrdAlloc_8.add_attribute("Qty", "4347078.100000"); // 1
    OrdAlloc_8_set.insert("4347078.100000");
    OrdAlloc_8.add_attribute("AvgPx", "17564625.510000"); // 1
    OrdAlloc_8_set.insert("17564625.510000");
    OrdAlloc_8.add_attribute("BkngQty", "10615980.840000"); // 1
    OrdAlloc_8_set.insert("10615980.840000");
    all_values.push_back(OrdAlloc_8_set);
    all_compo_names.insert("OrdAlloc_8_set");

    {
      xml_element Pty_108{"Pty"};
      multiset<string> Pty_108_set;
      Pty_108.add_attribute("ID", "Nested2PartyID_t_838950401"); // 2
      Pty_108_set.insert("Nested2PartyID_t_838950401");
      Pty_108.add_attribute("Src", "E"); // 2
      Pty_108_set.insert("E");
      Pty_108.add_attribute("R", "18"); // 2
      Pty_108_set.insert("18");
      all_values.push_back(Pty_108_set);
      all_compo_names.insert("Pty_108_set");

      {
        xml_element Sub_108{"Sub"};
        multiset<string> Sub_108_set;
        Sub_108.add_attribute("ID", "Nested2PartySubID_t_830659930"); // 3
        Sub_108_set.insert("Nested2PartySubID_t_830659930");
        Sub_108.add_attribute("Typ", "14"); // 3
        Sub_108_set.insert("14");
        all_values.push_back(Sub_108_set);
        all_compo_names.insert("Sub_108_set");

        Pty_108.add_element(Sub_108);
      }
      OrdAlloc_8.add_element(Pty_108);
    }
    elt.add_element(OrdAlloc_8);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_9{"OrdAlloc"};
    multiset<string> OrdAlloc_9_set;
    OrdAlloc_9.add_attribute("ClOrdID", "ClOrdID_t_701812114"); // 1
    OrdAlloc_9_set.insert("ClOrdID_t_701812114");
    OrdAlloc_9.add_attribute("OrdID", "OrderID_t_2089938921"); // 1
    OrdAlloc_9_set.insert("OrderID_t_2089938921");
    OrdAlloc_9.add_attribute("OrdID2", "SecondaryOrderID_t_1521935315"); // 1
    OrdAlloc_9_set.insert("SecondaryOrderID_t_1521935315");
    OrdAlloc_9.add_attribute("ClOrdID2", "SecondaryClOrdID_t_2104017659"); // 1
    OrdAlloc_9_set.insert("SecondaryClOrdID_t_2104017659");
    OrdAlloc_9.add_attribute("ListID", "ListID_t_560063226"); // 1
    OrdAlloc_9_set.insert("ListID_t_560063226");
    OrdAlloc_9.add_attribute("Qty", "12606536.550000"); // 1
    OrdAlloc_9_set.insert("12606536.550000");
    OrdAlloc_9.add_attribute("AvgPx", "9350438.310000"); // 1
    OrdAlloc_9_set.insert("9350438.310000");
    OrdAlloc_9.add_attribute("BkngQty", "10089430.380000"); // 1
    OrdAlloc_9_set.insert("10089430.380000");
    all_values.push_back(OrdAlloc_9_set);
    all_compo_names.insert("OrdAlloc_9_set");

    {
      xml_element Pty_109{"Pty"};
      multiset<string> Pty_109_set;
      Pty_109.add_attribute("ID", "Nested2PartyID_t_1959081840"); // 2
      Pty_109_set.insert("Nested2PartyID_t_1959081840");
      Pty_109.add_attribute("Src", "H"); // 2
      Pty_109_set.insert("H");
      Pty_109.add_attribute("R", "77"); // 2
      Pty_109_set.insert("77");
      all_values.push_back(Pty_109_set);
      all_compo_names.insert("Pty_109_set");

      {
        xml_element Sub_109{"Sub"};
        multiset<string> Sub_109_set;
        Sub_109.add_attribute("ID", "Nested2PartySubID_t_297929545"); // 3
        Sub_109_set.insert("Nested2PartySubID_t_297929545");
        Sub_109.add_attribute("Typ", "30"); // 3
        Sub_109_set.insert("30");
        all_values.push_back(Sub_109_set);
        all_compo_names.insert("Sub_109_set");

        Pty_109.add_element(Sub_109);
      }
      OrdAlloc_9.add_element(Pty_109);
    }
    elt.add_element(OrdAlloc_9);
  } // end OrdAlloc
  { // TrdRegTS
    xml_element TrdRegTS_7{"TrdRegTS"};
    multiset<string> TrdRegTS_7_set;
    TrdRegTS_7.add_attribute("TS", "TrdRegTimestamp_t_867782046"); // 1
    TrdRegTS_7_set.insert("TrdRegTimestamp_t_867782046");
    TrdRegTS_7.add_attribute("Typ", "2"); // 1
    TrdRegTS_7_set.insert("2");
    TrdRegTS_7.add_attribute("Src", "TrdRegTimestampOrigin_t_2049699980"); // 1
    TrdRegTS_7_set.insert("TrdRegTimestampOrigin_t_2049699980");
    TrdRegTS_7.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_7_set.insert("A");
    TrdRegTS_7.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_7_set.insert("1");
    TrdRegTS_7.add_attribute("DskOrdHndlInst", "PEG"); // 1
    TrdRegTS_7_set.insert("PEG");
    all_values.push_back(TrdRegTS_7_set);
    all_compo_names.insert("TrdRegTS_7_set");

    elt.add_element(TrdRegTS_7);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_8{"TrdRegTS"};
    multiset<string> TrdRegTS_8_set;
    TrdRegTS_8.add_attribute("TS", "TrdRegTimestamp_t_1033631706"); // 1
    TrdRegTS_8_set.insert("TrdRegTimestamp_t_1033631706");
    TrdRegTS_8.add_attribute("Typ", "6"); // 1
    TrdRegTS_8_set.insert("6");
    TrdRegTS_8.add_attribute("Src", "TrdRegTimestampOrigin_t_612663978"); // 1
    TrdRegTS_8_set.insert("TrdRegTimestampOrigin_t_612663978");
    TrdRegTS_8.add_attribute("DskTyp", "PR"); // 1
    TrdRegTS_8_set.insert("PR");
    TrdRegTS_8.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_8_set.insert("1");
    TrdRegTS_8.add_attribute("DskOrdHndlInst", "IOC"); // 1
    TrdRegTS_8_set.insert("IOC");
    all_values.push_back(TrdRegTS_8_set);
    all_compo_names.insert("TrdRegTS_8_set");

    elt.add_element(TrdRegTS_8);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_9{"TrdRegTS"};
    multiset<string> TrdRegTS_9_set;
    TrdRegTS_9.add_attribute("TS", "TrdRegTimestamp_t_159806270"); // 1
    TrdRegTS_9_set.insert("TrdRegTimestamp_t_159806270");
    TrdRegTS_9.add_attribute("Typ", "7"); // 1
    TrdRegTS_9_set.insert("7");
    TrdRegTS_9.add_attribute("Src", "TrdRegTimestampOrigin_t_1990687636"); // 1
    TrdRegTS_9_set.insert("TrdRegTimestampOrigin_t_1990687636");
    TrdRegTS_9.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_9_set.insert("T");
    TrdRegTS_9.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_9_set.insert("1");
    TrdRegTS_9.add_attribute("DskOrdHndlInst", "IO"); // 1
    TrdRegTS_9_set.insert("IO");
    all_values.push_back(TrdRegTS_9_set);
    all_compo_names.insert("TrdRegTS_9_set");

    elt.add_element(TrdRegTS_9);
  } // end TrdRegTS
  { // Instrmt
    xml_element Instrmt_14{"Instrmt"};
    multiset<string> Instrmt_14_set;
    Instrmt_14.add_attribute("Sym", "Symbol_t_932921474"); // 1
    Instrmt_14_set.insert("Symbol_t_932921474");
    Instrmt_14.add_attribute("Sfx", "CD"); // 1
    Instrmt_14_set.insert("CD");
    Instrmt_14.add_attribute("ID", "SecurityID_t_501550114"); // 1
    Instrmt_14_set.insert("SecurityID_t_501550114");
    Instrmt_14.add_attribute("Src", "K"); // 1
    Instrmt_14_set.insert("K");
    Instrmt_14.add_attribute("Prod", "4"); // 1
    Instrmt_14_set.insert("4");
    Instrmt_14.add_attribute("ProdCmplx", "ProductComplex_t_1436593945"); // 1
    Instrmt_14_set.insert("ProductComplex_t_1436593945");
    Instrmt_14.add_attribute("SecGrp", "SecurityGroup_t_354444090"); // 1
    Instrmt_14_set.insert("SecurityGroup_t_354444090");
    Instrmt_14.add_attribute("CFI", "CFICode_t_35883716"); // 1
    Instrmt_14_set.insert("CFICode_t_35883716");
    Instrmt_14.add_attribute("SecTyp", "MTN"); // 1
    Instrmt_14_set.insert("MTN");
    Instrmt_14.add_attribute("SubTyp", "SecuritySubType_t_898016481"); // 1
    Instrmt_14_set.insert("SecuritySubType_t_898016481");
    Instrmt_14.add_attribute("MMY", "333813261"); // 1
    Instrmt_14_set.insert("333813261");
    Instrmt_14.add_attribute("MatDt", "MaturityDate_t_977318561"); // 1
    Instrmt_14_set.insert("MaturityDate_t_977318561");
    Instrmt_14.add_attribute("MatTm", "226669392"); // 1
    Instrmt_14_set.insert("226669392");
    Instrmt_14.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1201595307"); // 1
    Instrmt_14_set.insert("SettleOnOpenFlag_t_1201595307");
    Instrmt_14.add_attribute("AsgnMeth", "1428143854"); // 1
    Instrmt_14_set.insert("1428143854");
    Instrmt_14.add_attribute("Status", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("CpnPmt", "CouponPaymentDate_t_1994459346"); // 1
    Instrmt_14_set.insert("CouponPaymentDate_t_1994459346");
    Instrmt_14.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_14_set.insert("MM");
    Instrmt_14.add_attribute("Snrty", "SD"); // 1
    Instrmt_14_set.insert("SD");
    Instrmt_14.add_attribute("NotlPctOut", "8806074.050000"); // 1
    Instrmt_14_set.insert("8806074.050000");
    Instrmt_14.add_attribute("OrigNotlPctOut", "14915046.750000"); // 1
    Instrmt_14_set.insert("14915046.750000");
    Instrmt_14.add_attribute("AttchPnt", "15781099.680000"); // 1
    Instrmt_14_set.insert("15781099.680000");
    Instrmt_14.add_attribute("DetchPnt", "2014632.740000"); // 1
    Instrmt_14_set.insert("2014632.740000");
    Instrmt_14.add_attribute("Issued", "IssueDate_t_481235372"); // 1
    Instrmt_14_set.insert("IssueDate_t_481235372");
    Instrmt_14.add_attribute("RepoCollSecTyp", "1104888383"); // 1
    Instrmt_14_set.insert("1104888383");
    Instrmt_14.add_attribute("RepoTrm", "361269544"); // 1
    Instrmt_14_set.insert("361269544");
    Instrmt_14.add_attribute("RepoRt", "15038041.630000"); // 1
    Instrmt_14_set.insert("15038041.630000");
    Instrmt_14.add_attribute("Fctr", "9480923.720000"); // 1
    Instrmt_14_set.insert("9480923.720000");
    Instrmt_14.add_attribute("CrdRtg", "CreditRating_t_1351735745"); // 1
    Instrmt_14_set.insert("CreditRating_t_1351735745");
    Instrmt_14.add_attribute("Rgstry", "InstrRegistry_t_1092984364"); // 1
    Instrmt_14_set.insert("InstrRegistry_t_1092984364");
    Instrmt_14.add_attribute("IssuCtry", "1493108474"); // 1
    Instrmt_14_set.insert("1493108474");
    Instrmt_14.add_attribute("StPrv", "StateOrProvinceOfIssue_t_137173571"); // 1
    Instrmt_14_set.insert("StateOrProvinceOfIssue_t_137173571");
    Instrmt_14.add_attribute("Lcl", "LocaleOfIssue_t_56616233"); // 1
    Instrmt_14_set.insert("LocaleOfIssue_t_56616233");
    Instrmt_14.add_attribute("Redeem", "RedemptionDate_t_1994658588"); // 1
    Instrmt_14_set.insert("RedemptionDate_t_1994658588");
    Instrmt_14.add_attribute("StrkPx", "16301582.710000"); // 1
    Instrmt_14_set.insert("16301582.710000");
    Instrmt_14.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_14_set.insert("USD");
    Instrmt_14.add_attribute("StrkMult", "19846023.610000"); // 1
    Instrmt_14_set.insert("19846023.610000");
    Instrmt_14.add_attribute("StrkValu", "3167854.720000"); // 1
    Instrmt_14_set.insert("3167854.720000");
    Instrmt_14.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_14_set.insert("4");
    Instrmt_14.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_14_set.insert("5");
    Instrmt_14.add_attribute("StrkPxBndryPrcsn", "6505987.330000"); // 1
    Instrmt_14_set.insert("6505987.330000");
    Instrmt_14.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("OptAt", "961804587"); // 1
    Instrmt_14_set.insert("961804587");
    Instrmt_14.add_attribute("Mult", "18521940.410000"); // 1
    Instrmt_14_set.insert("18521940.410000");
    Instrmt_14.add_attribute("MultTyp", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_14_set.insert("2");
    Instrmt_14.add_attribute("MinPxIncr", "16991697.390000"); // 1
    Instrmt_14_set.insert("16991697.390000");
    Instrmt_14.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1970753613"); // 1
    Instrmt_14_set.insert("MinPriceIncrementAmount_t_1970753613");
    Instrmt_14.add_attribute("UOM", "Alw"); // 1
    Instrmt_14_set.insert("Alw");
    Instrmt_14.add_attribute("UOMQty", "4322934.960000"); // 1
    Instrmt_14_set.insert("4322934.960000");
    Instrmt_14.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_14_set.insert("Bu");
    Instrmt_14.add_attribute("PxUOMQty", "14867626.220000"); // 1
    Instrmt_14_set.insert("14867626.220000");
    Instrmt_14.add_attribute("SettlMeth", "C"); // 1
    Instrmt_14_set.insert("C");
    Instrmt_14.add_attribute("ExerStyle", "1"); // 1
    Instrmt_14_set.insert("1");
    Instrmt_14.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_14_set.insert("1");
    Instrmt_14.add_attribute("OptPayAmt", "OptPayoutAmount_t_995026315"); // 1
    Instrmt_14_set.insert("OptPayoutAmount_t_995026315");
    Instrmt_14.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_14_set.insert("STD");
    Instrmt_14.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_14_set.insert("EQTY");
    Instrmt_14.add_attribute("ListMeth", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("CapPx", "978312.450000"); // 1
    Instrmt_14_set.insert("978312.450000");
    Instrmt_14.add_attribute("FlrPx", "7378845.560000"); // 1
    Instrmt_14_set.insert("7378845.560000");
    Instrmt_14.add_attribute("PutCall", "0"); // 1
    Instrmt_14_set.insert("0");
    Instrmt_14.add_attribute("FlexInd", "true"); // 1
    Instrmt_14_set.insert("true");
    Instrmt_14.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_14_set.insert("false");
    Instrmt_14.add_attribute("TmUnit", "Min"); // 1
    Instrmt_14_set.insert("Min");
    Instrmt_14.add_attribute("CpnRt", "4353492.340000"); // 1
    Instrmt_14_set.insert("4353492.340000");
    Instrmt_14.add_attribute("Exch", "SecurityExchange_t_1868828383"); // 1
    Instrmt_14_set.insert("SecurityExchange_t_1868828383");
    Instrmt_14.add_attribute("PosLmt", "1803728969"); // 1
    Instrmt_14_set.insert("1803728969");
    Instrmt_14.add_attribute("NTPosLmt", "752134707"); // 1
    Instrmt_14_set.insert("752134707");
    Instrmt_14.add_attribute("Issr", "Issuer_t_1470850346"); // 1
    Instrmt_14_set.insert("Issuer_t_1470850346");
    Instrmt_14.add_attribute("EncIssrLen", "391380515"); // 1
    Instrmt_14_set.insert("391380515");
    Instrmt_14.add_attribute("EncIssr", "EncodedIssuer_t_1402733440"); // 1
    Instrmt_14_set.insert("EncodedIssuer_t_1402733440");
    Instrmt_14.add_attribute("Desc", "SecurityDesc_t_2050190871"); // 1
    Instrmt_14_set.insert("SecurityDesc_t_2050190871");
    Instrmt_14.add_attribute("EncSecDescLen", "1353185102"); // 1
    Instrmt_14_set.insert("1353185102");
    Instrmt_14.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1107443833"); // 1
    Instrmt_14_set.insert("EncodedSecurityDesc_t_1107443833");
    Instrmt_14.add_attribute("Pool", "Pool_t_1910191602"); // 1
    Instrmt_14_set.insert("Pool_t_1910191602");
    Instrmt_14.add_attribute("CSetMo", "296391766"); // 1
    Instrmt_14_set.insert("296391766");
    Instrmt_14.add_attribute("CPPgm", "1"); // 1
    Instrmt_14_set.insert("1");
    Instrmt_14.add_attribute("CPRegT", "CPRegType_t_1733461568"); // 1
    Instrmt_14_set.insert("CPRegType_t_1733461568");
    Instrmt_14.add_attribute("Dated", "DatedDate_t_205044420"); // 1
    Instrmt_14_set.insert("DatedDate_t_205044420");
    Instrmt_14.add_attribute("IntAcrl", "InterestAccrualDate_t_1091423421"); // 1
    Instrmt_14_set.insert("InterestAccrualDate_t_1091423421");
    all_values.push_back(Instrmt_14_set);
    all_compo_names.insert("Instrmt_14_set");

    {
      xml_element AID_14{"AID"};
      multiset<string> AID_14_set;
      AID_14.add_attribute("AltID", "SecurityAltID_t_900752561"); // 2
      AID_14_set.insert("SecurityAltID_t_900752561");
      AID_14.add_attribute("AltIDSrc", "4"); // 2
      AID_14_set.insert("4");
      all_values.push_back(AID_14_set);
      all_compo_names.insert("AID_14_set");

      Instrmt_14.add_element(AID_14);
    }
    {
      xml_element SecXML_14{"SecXML"};
      multiset<string> SecXML_14_set;
      SecXML_14.add_attribute("Schema", "SecurityXMLSchema_t_1725180192"); // 2
      SecXML_14_set.insert("SecurityXMLSchema_t_1725180192");
      all_values.push_back(SecXML_14_set);
      all_compo_names.insert("SecXML_14_set");

      Instrmt_14.add_element(SecXML_14);
    }
    {
      xml_element Evnt_14{"Evnt"};
      multiset<string> Evnt_14_set;
      Evnt_14.add_attribute("EventTyp", "6"); // 2
      Evnt_14_set.insert("6");
      Evnt_14.add_attribute("Dt", "EventDate_t_2135974401"); // 2
      Evnt_14_set.insert("EventDate_t_2135974401");
      Evnt_14.add_attribute("Tm", "EventTime_t_572722859"); // 2
      Evnt_14_set.insert("EventTime_t_572722859");
      Evnt_14.add_attribute("Px", "17016094.540000"); // 2
      Evnt_14_set.insert("17016094.540000");
      Evnt_14.add_attribute("Txt", "EventText_t_1380750483"); // 2
      Evnt_14_set.insert("EventText_t_1380750483");
      all_values.push_back(Evnt_14_set);
      all_compo_names.insert("Evnt_14_set");

      Instrmt_14.add_element(Evnt_14);
    }
    {
      xml_element Pty_110{"Pty"};
      multiset<string> Pty_110_set;
      Pty_110.add_attribute("ID", "InstrumentPartyID_t_772001271"); // 2
      Pty_110_set.insert("InstrumentPartyID_t_772001271");
      Pty_110.add_attribute("Src", "E"); // 2
      Pty_110_set.insert("E");
      Pty_110.add_attribute("R", "61"); // 2
      Pty_110_set.insert("61");
      all_values.push_back(Pty_110_set);
      all_compo_names.insert("Pty_110_set");

      {
        xml_element Sub_110{"Sub"};
        multiset<string> Sub_110_set;
        Sub_110.add_attribute("ID", "InstrumentPartySubID_t_1108453255"); // 3
        Sub_110_set.insert("InstrumentPartySubID_t_1108453255");
        Sub_110.add_attribute("Typ", "5"); // 3
        Sub_110_set.insert("5");
        all_values.push_back(Sub_110_set);
        all_compo_names.insert("Sub_110_set");

        Pty_110.add_element(Sub_110);
      }
      Instrmt_14.add_element(Pty_110);
    }
    {
      xml_element CmplxEvnt_14{"CmplxEvnt"};
      multiset<string> CmplxEvnt_14_set;
      CmplxEvnt_14.add_attribute("Typ", "8"); // 2
      CmplxEvnt_14_set.insert("8");
      CmplxEvnt_14.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_927579863"); // 2
      CmplxEvnt_14_set.insert("ComplexOptPayoutAmount_t_927579863");
      CmplxEvnt_14.add_attribute("Px", "2417537.640000"); // 2
      CmplxEvnt_14_set.insert("2417537.640000");
      CmplxEvnt_14.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_14_set.insert("4");
      CmplxEvnt_14.add_attribute("PxBndryPrcsn", "5838251.840000"); // 2
      CmplxEvnt_14_set.insert("5838251.840000");
      CmplxEvnt_14.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_14_set.insert("1");
      CmplxEvnt_14.add_attribute("Cond", "1"); // 2
      CmplxEvnt_14_set.insert("1");
      all_values.push_back(CmplxEvnt_14_set);
      all_compo_names.insert("CmplxEvnt_14_set");

      {
        xml_element EvntDts_14{"EvntDts"};
        multiset<string> EvntDts_14_set;
        EvntDts_14.add_attribute("StartDt", "ComplexEventStartDate_t_975205699"); // 3
        EvntDts_14_set.insert("ComplexEventStartDate_t_975205699");
        EvntDts_14.add_attribute("EndDt", "ComplexEventEndDate_t_249138263"); // 3
        EvntDts_14_set.insert("ComplexEventEndDate_t_249138263");
        all_values.push_back(EvntDts_14_set);
        all_compo_names.insert("EvntDts_14_set");

        {
          xml_element EvntTms_14{"EvntTms"};
          multiset<string> EvntTms_14_set;
          EvntTms_14.add_attribute("StartTm", "1651113193"); // 4
          EvntTms_14_set.insert("1651113193");
          EvntTms_14.add_attribute("EndTm", "180907154"); // 4
          EvntTms_14_set.insert("180907154");
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
  { // InstrmtExt
    xml_element InstrmtExt_3{"InstrmtExt"};
    multiset<string> InstrmtExt_3_set;
    InstrmtExt_3.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_3_set.insert("2");
    InstrmtExt_3.add_attribute("PctAtRisk", "14138211.480000"); // 1
    InstrmtExt_3_set.insert("14138211.480000");
    all_values.push_back(InstrmtExt_3_set);
    all_compo_names.insert("InstrmtExt_3_set");

    {
      xml_element Attrb_3{"Attrb"};
      multiset<string> Attrb_3_set;
      Attrb_3.add_attribute("Typ", "1"); // 2
      Attrb_3_set.insert("1");
      Attrb_3.add_attribute("Val", "InstrAttribValue_t_2015712022"); // 2
      Attrb_3_set.insert("InstrAttribValue_t_2015712022");
      all_values.push_back(Attrb_3_set);
      all_compo_names.insert("Attrb_3_set");

      InstrmtExt_3.add_element(Attrb_3);
    }
    elt.add_element(InstrmtExt_3);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_9{"FinDetls"};
    multiset<string> FinDetls_9_set;
    FinDetls_9.add_attribute("AgmtDesc", "AgreementDesc_t_999799068"); // 1
    FinDetls_9_set.insert("AgreementDesc_t_999799068");
    FinDetls_9.add_attribute("AgmtID", "AgreementID_t_682343341"); // 1
    FinDetls_9_set.insert("AgreementID_t_682343341");
    FinDetls_9.add_attribute("AgmtDt", "AgreementDate_t_959651795"); // 1
    FinDetls_9_set.insert("AgreementDate_t_959651795");
    FinDetls_9.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_9_set.insert("GBP");
    FinDetls_9.add_attribute("TrmTyp", "4"); // 1
    FinDetls_9_set.insert("4");
    FinDetls_9.add_attribute("StartDt", "StartDate_t_302346907"); // 1
    FinDetls_9_set.insert("StartDate_t_302346907");
    FinDetls_9.add_attribute("EndDt", "EndDate_t_215157489"); // 1
    FinDetls_9_set.insert("EndDate_t_215157489");
    FinDetls_9.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_9_set.insert("2");
    FinDetls_9.add_attribute("MgnRatio", "20039563.610000"); // 1
    FinDetls_9_set.insert("20039563.610000");
    all_values.push_back(FinDetls_9_set);
    all_compo_names.insert("FinDetls_9_set");

    elt.add_element(FinDetls_9);
  } // end FinDetls
  { // Undly
    xml_element Undly_21{"Undly"};
    multiset<string> Undly_21_set;
    Undly_21.add_attribute("Sym", "UnderlyingSymbol_t_1882072470"); // 1
    Undly_21_set.insert("UnderlyingSymbol_t_1882072470");
    Undly_21.add_attribute("Sfx", "WI"); // 1
    Undly_21_set.insert("WI");
    Undly_21.add_attribute("ID", "UnderlyingSecurityID_t_1567059363"); // 1
    Undly_21_set.insert("UnderlyingSecurityID_t_1567059363");
    Undly_21.add_attribute("Src", "A"); // 1
    Undly_21_set.insert("A");
    Undly_21.add_attribute("Prod", "4"); // 1
    Undly_21_set.insert("4");
    Undly_21.add_attribute("CFI", "UnderlyingCFICode_t_2123270252"); // 1
    Undly_21_set.insert("UnderlyingCFICode_t_2123270252");
    Undly_21.add_attribute("SecTyp", "TERM"); // 1
    Undly_21_set.insert("TERM");
    Undly_21.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1704071706"); // 1
    Undly_21_set.insert("UnderlyingSecuritySubType_t_1704071706");
    Undly_21.add_attribute("MMY", "253342227"); // 1
    Undly_21_set.insert("253342227");
    Undly_21.add_attribute("Mat", "UnderlyingMaturityDate_t_206963476"); // 1
    Undly_21_set.insert("UnderlyingMaturityDate_t_206963476");
    Undly_21.add_attribute("MatTm", "550476529"); // 1
    Undly_21_set.insert("550476529");
    Undly_21.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2001748197"); // 1
    Undly_21_set.insert("UnderlyingCouponPaymentDate_t_2001748197");
    Undly_21.add_attribute("RestrctTyp", "FR"); // 1
    Undly_21_set.insert("FR");
    Undly_21.add_attribute("Snrty", "SR"); // 1
    Undly_21_set.insert("SR");
    Undly_21.add_attribute("NotlPctOut", "15053777.430000"); // 1
    Undly_21_set.insert("15053777.430000");
    Undly_21.add_attribute("OrigNotlPctOut", "13630763.300000"); // 1
    Undly_21_set.insert("13630763.300000");
    Undly_21.add_attribute("AttchPnt", "87132.420000"); // 1
    Undly_21_set.insert("87132.420000");
    Undly_21.add_attribute("DetchPnt", "7717152.430000"); // 1
    Undly_21_set.insert("7717152.430000");
    Undly_21.add_attribute("Issued", "UnderlyingIssueDate_t_1840375250"); // 1
    Undly_21_set.insert("UnderlyingIssueDate_t_1840375250");
    Undly_21.add_attribute("RepoCollSecTyp", "2024425264"); // 1
    Undly_21_set.insert("2024425264");
    Undly_21.add_attribute("RepoTrm", "1771514311"); // 1
    Undly_21_set.insert("1771514311");
    Undly_21.add_attribute("RepoRt", "3752349.430000"); // 1
    Undly_21_set.insert("3752349.430000");
    Undly_21.add_attribute("Fctr", "8365934.110000"); // 1
    Undly_21_set.insert("8365934.110000");
    Undly_21.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1524582292"); // 1
    Undly_21_set.insert("UnderlyingCreditRating_t_1524582292");
    Undly_21.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_601901679"); // 1
    Undly_21_set.insert("UnderlyingInstrRegistry_t_601901679");
    Undly_21.add_attribute("Ctry", "1373941751"); // 1
    Undly_21_set.insert("1373941751");
    Undly_21.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1826929199"); // 1
    Undly_21_set.insert("UnderlyingStateOrProvinceOfIssue_t_1826929199");
    Undly_21.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_817059168"); // 1
    Undly_21_set.insert("UnderlyingLocaleOfIssue_t_817059168");
    Undly_21.add_attribute("Redeem", "UnderlyingRedemptionDate_t_336529301"); // 1
    Undly_21_set.insert("UnderlyingRedemptionDate_t_336529301");
    Undly_21.add_attribute("StrkPx", "16834019.120000"); // 1
    Undly_21_set.insert("16834019.120000");
    Undly_21.add_attribute("StrkCcy", "CHF"); // 1
    Undly_21_set.insert("CHF");
    Undly_21.add_attribute("OptA", "1191831677"); // 1
    Undly_21_set.insert("1191831677");
    Undly_21.add_attribute("Mult", "18325428.560000"); // 1
    Undly_21_set.insert("18325428.560000");
    Undly_21.add_attribute("MultTyp", "0"); // 1
    Undly_21_set.insert("0");
    Undly_21.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_21_set.insert("2");
    Undly_21.add_attribute("UOM", "Bbl"); // 1
    Undly_21_set.insert("Bbl");
    Undly_21.add_attribute("UOMQty", "5372984.930000"); // 1
    Undly_21_set.insert("5372984.930000");
    Undly_21.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_21_set.insert("oz_tr");
    Undly_21.add_attribute("PxUOMQty", "20616716.870000"); // 1
    Undly_21_set.insert("20616716.870000");
    Undly_21.add_attribute("TmUnit", "Wk"); // 1
    Undly_21_set.insert("Wk");
    Undly_21.add_attribute("ExerStyle", "1"); // 1
    Undly_21_set.insert("1");
    Undly_21.add_attribute("CpnRt", "19159362.370000"); // 1
    Undly_21_set.insert("19159362.370000");
    Undly_21.add_attribute("Exch", "UnderlyingSecurityExchange_t_1926431146"); // 1
    Undly_21_set.insert("UnderlyingSecurityExchange_t_1926431146");
    Undly_21.add_attribute("Issr", "UnderlyingIssuer_t_1413345353"); // 1
    Undly_21_set.insert("UnderlyingIssuer_t_1413345353");
    Undly_21.add_attribute("EncUndIssrLen", "1273830332"); // 1
    Undly_21_set.insert("1273830332");
    Undly_21.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1142023828"); // 1
    Undly_21_set.insert("EncodedUnderlyingIssuer_t_1142023828");
    Undly_21.add_attribute("Desc", "UnderlyingSecurityDesc_t_1422058595"); // 1
    Undly_21_set.insert("UnderlyingSecurityDesc_t_1422058595");
    Undly_21.add_attribute("EncUndSecDescLen", "2045545575"); // 1
    Undly_21_set.insert("2045545575");
    Undly_21.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_834915430"); // 1
    Undly_21_set.insert("EncodedUnderlyingSecurityDesc_t_834915430");
    Undly_21.add_attribute("CPPgm", "UnderlyingCPProgram_t_1299000211"); // 1
    Undly_21_set.insert("UnderlyingCPProgram_t_1299000211");
    Undly_21.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1669576238"); // 1
    Undly_21_set.insert("UnderlyingCPRegType_t_1669576238");
    Undly_21.add_attribute("AllocPct", "12101503.740000"); // 1
    Undly_21_set.insert("12101503.740000");
    Undly_21.add_attribute("Ccy", "JPY"); // 1
    Undly_21_set.insert("JPY");
    Undly_21.add_attribute("Qty", "18120520.530000"); // 1
    Undly_21_set.insert("18120520.530000");
    Undly_21.add_attribute("SettlTyp", "5"); // 1
    Undly_21_set.insert("5");
    Undly_21.add_attribute("CashAmt", "UnderlyingCashAmount_t_726120433"); // 1
    Undly_21_set.insert("UnderlyingCashAmount_t_726120433");
    Undly_21.add_attribute("CashTyp", "FIXED"); // 1
    Undly_21_set.insert("FIXED");
    Undly_21.add_attribute("Px", "16985810.270000"); // 1
    Undly_21_set.insert("16985810.270000");
    Undly_21.add_attribute("DirtPx", "2620386.970000"); // 1
    Undly_21_set.insert("2620386.970000");
    Undly_21.add_attribute("EndPx", "7471110.660000"); // 1
    Undly_21_set.insert("7471110.660000");
    Undly_21.add_attribute("StartVal", "UnderlyingStartValue_t_1769699150"); // 1
    Undly_21_set.insert("UnderlyingStartValue_t_1769699150");
    Undly_21.add_attribute("CurVal", "UnderlyingCurrentValue_t_1453870375"); // 1
    Undly_21_set.insert("UnderlyingCurrentValue_t_1453870375");
    Undly_21.add_attribute("EndVal", "UnderlyingEndValue_t_432170274"); // 1
    Undly_21_set.insert("UnderlyingEndValue_t_432170274");
    Undly_21.add_attribute("AdjQty", "5363757.030000"); // 1
    Undly_21_set.insert("5363757.030000");
    Undly_21.add_attribute("FxRate", "19605363.470000"); // 1
    Undly_21_set.insert("19605363.470000");
    Undly_21.add_attribute("FxRateCalc", "M"); // 1
    Undly_21_set.insert("M");
    Undly_21.add_attribute("CapValu", "UnderlyingCapValue_t_1073674197"); // 1
    Undly_21_set.insert("UnderlyingCapValue_t_1073674197");
    Undly_21.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2023790377"); // 1
    Undly_21_set.insert("UnderlyingSettlMethod_t_2023790377");
    Undly_21.add_attribute("PutCall", "7204126"); // 1
    Undly_21_set.insert("7204126");
    all_values.push_back(Undly_21_set);
    all_compo_names.insert("Undly_21_set");

    {
      xml_element UndAID_21{"UndAID"};
      multiset<string> UndAID_21_set;
      UndAID_21.add_attribute("AltID", "UnderlyingSecurityAltID_t_1817936167"); // 2
      UndAID_21_set.insert("UnderlyingSecurityAltID_t_1817936167");
      UndAID_21.add_attribute("AltIDSrc", "6"); // 2
      UndAID_21_set.insert("6");
      all_values.push_back(UndAID_21_set);
      all_compo_names.insert("UndAID_21_set");

      Undly_21.add_element(UndAID_21);
    }
    {
      xml_element Stip_34{"Stip"};
      multiset<string> Stip_34_set;
      Stip_34.add_attribute("Typ", "RATING"); // 2
      Stip_34_set.insert("RATING");
      Stip_34.add_attribute("Val", "UnderlyingStipValue_t_1596883665"); // 2
      Stip_34_set.insert("UnderlyingStipValue_t_1596883665");
      all_values.push_back(Stip_34_set);
      all_compo_names.insert("Stip_34_set");

      Undly_21.add_element(Stip_34);
    }
    {
      xml_element Pty_111{"Pty"};
      multiset<string> Pty_111_set;
      Pty_111.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1903382642"); // 2
      Pty_111_set.insert("UnderlyingInstrumentPartyID_t_1903382642");
      Pty_111.add_attribute("Src", "I"); // 2
      Pty_111_set.insert("I");
      Pty_111.add_attribute("R", "14"); // 2
      Pty_111_set.insert("14");
      all_values.push_back(Pty_111_set);
      all_compo_names.insert("Pty_111_set");

      {
        xml_element Sub_111{"Sub"};
        multiset<string> Sub_111_set;
        Sub_111.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1177957589"); // 3
        Sub_111_set.insert("UnderlyingInstrumentPartySubID_t_1177957589");
        Sub_111.add_attribute("Typ", "18"); // 3
        Sub_111_set.insert("18");
        all_values.push_back(Sub_111_set);
        all_compo_names.insert("Sub_111_set");

        Pty_111.add_element(Sub_111);
      }
      Undly_21.add_element(Pty_111);
    }
    elt.add_element(Undly_21);
  } // end Undly
  { // Leg
    xml_element Leg_23{"Leg"};
    multiset<string> Leg_23_set;
    Leg_23.add_attribute("Sym", "LegSymbol_t_329474152"); // 1
    Leg_23_set.insert("LegSymbol_t_329474152");
    Leg_23.add_attribute("Sfx", "CD"); // 1
    Leg_23_set.insert("CD");
    Leg_23.add_attribute("ID", "LegSecurityID_t_489006001"); // 1
    Leg_23_set.insert("LegSecurityID_t_489006001");
    Leg_23.add_attribute("Src", "4"); // 1
    Leg_23_set.insert("4");
    Leg_23.add_attribute("Prod", "5"); // 1
    Leg_23_set.insert("5");
    Leg_23.add_attribute("CFI", "LegCFICode_t_153574407"); // 1
    Leg_23_set.insert("LegCFICode_t_153574407");
    Leg_23.add_attribute("SecTyp", "CORP"); // 1
    Leg_23_set.insert("CORP");
    Leg_23.add_attribute("SecSubTyp", "LegSecuritySubType_t_94953231"); // 1
    Leg_23_set.insert("LegSecuritySubType_t_94953231");
    Leg_23.add_attribute("MMY", "635201981"); // 1
    Leg_23_set.insert("635201981");
    Leg_23.add_attribute("Mat", "LegMaturityDate_t_1230733231"); // 1
    Leg_23_set.insert("LegMaturityDate_t_1230733231");
    Leg_23.add_attribute("MatTm", "356991928"); // 1
    Leg_23_set.insert("356991928");
    Leg_23.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1382313047"); // 1
    Leg_23_set.insert("LegCouponPaymentDate_t_1382313047");
    Leg_23.add_attribute("Issued", "LegIssueDate_t_852948734"); // 1
    Leg_23_set.insert("LegIssueDate_t_852948734");
    Leg_23.add_attribute("RepoCollSecTyp", "1810862303"); // 1
    Leg_23_set.insert("1810862303");
    Leg_23.add_attribute("RepoTrm", "1814483322"); // 1
    Leg_23_set.insert("1814483322");
    Leg_23.add_attribute("RepoRt", "13893244.370000"); // 1
    Leg_23_set.insert("13893244.370000");
    Leg_23.add_attribute("Fctr", "16239150.020000"); // 1
    Leg_23_set.insert("16239150.020000");
    Leg_23.add_attribute("CrdRtg", "LegCreditRating_t_1907499408"); // 1
    Leg_23_set.insert("LegCreditRating_t_1907499408");
    Leg_23.add_attribute("Rgstry", "LegInstrRegistry_t_315514986"); // 1
    Leg_23_set.insert("LegInstrRegistry_t_315514986");
    Leg_23.add_attribute("Ctry", "1500221732"); // 1
    Leg_23_set.insert("1500221732");
    Leg_23.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1914703534"); // 1
    Leg_23_set.insert("LegStateOrProvinceOfIssue_t_1914703534");
    Leg_23.add_attribute("Lcl", "LegLocaleOfIssue_t_2133451153"); // 1
    Leg_23_set.insert("LegLocaleOfIssue_t_2133451153");
    Leg_23.add_attribute("Redeem", "LegRedemptionDate_t_1990259021"); // 1
    Leg_23_set.insert("LegRedemptionDate_t_1990259021");
    Leg_23.add_attribute("Strk", "16903602.490000"); // 1
    Leg_23_set.insert("16903602.490000");
    Leg_23.add_attribute("StrkCcy", "USD"); // 1
    Leg_23_set.insert("USD");
    Leg_23.add_attribute("OptA", "592363648"); // 1
    Leg_23_set.insert("592363648");
    Leg_23.add_attribute("Cmult", "267913.670000"); // 1
    Leg_23_set.insert("267913.670000");
    Leg_23.add_attribute("MultTyp", "0"); // 1
    Leg_23_set.insert("0");
    Leg_23.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_23_set.insert("2");
    Leg_23.add_attribute("UOM", "Gal"); // 1
    Leg_23_set.insert("Gal");
    Leg_23.add_attribute("UOMQty", "11061061.100000"); // 1
    Leg_23_set.insert("11061061.100000");
    Leg_23.add_attribute("PxUOM", "Gal"); // 1
    Leg_23_set.insert("Gal");
    Leg_23.add_attribute("PxUOMQty", "19421366.440000"); // 1
    Leg_23_set.insert("19421366.440000");
    Leg_23.add_attribute("TmUnit", "Wk"); // 1
    Leg_23_set.insert("Wk");
    Leg_23.add_attribute("ExerStyle", "0"); // 1
    Leg_23_set.insert("0");
    Leg_23.add_attribute("CpnRt", "20957110.510000"); // 1
    Leg_23_set.insert("20957110.510000");
    Leg_23.add_attribute("Exch", "LegSecurityExchange_t_955842441"); // 1
    Leg_23_set.insert("LegSecurityExchange_t_955842441");
    Leg_23.add_attribute("Issr", "LegIssuer_t_1473340215"); // 1
    Leg_23_set.insert("LegIssuer_t_1473340215");
    Leg_23.add_attribute("EncLegIssrLen", "583429384"); // 1
    Leg_23_set.insert("583429384");
    Leg_23.add_attribute("EncLegIssr", "EncodedLegIssuer_t_39092025"); // 1
    Leg_23_set.insert("EncodedLegIssuer_t_39092025");
    Leg_23.add_attribute("Desc", "LegSecurityDesc_t_1830332144"); // 1
    Leg_23_set.insert("LegSecurityDesc_t_1830332144");
    Leg_23.add_attribute("EncLegSecDescLen", "1965742432"); // 1
    Leg_23_set.insert("1965742432");
    Leg_23.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_892040759"); // 1
    Leg_23_set.insert("EncodedLegSecurityDesc_t_892040759");
    Leg_23.add_attribute("RatioQty", "14937107.990000"); // 1
    Leg_23_set.insert("14937107.990000");
    Leg_23.add_attribute("Side", "B"); // 1
    Leg_23_set.insert("B");
    Leg_23.add_attribute("Ccy", "USD"); // 1
    Leg_23_set.insert("USD");
    Leg_23.add_attribute("Pool", "LegPool_t_1392757866"); // 1
    Leg_23_set.insert("LegPool_t_1392757866");
    Leg_23.add_attribute("Dated", "LegDatedDate_t_449396535"); // 1
    Leg_23_set.insert("LegDatedDate_t_449396535");
    Leg_23.add_attribute("CSetMo", "322880238"); // 1
    Leg_23_set.insert("322880238");
    Leg_23.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1159977753"); // 1
    Leg_23_set.insert("LegInterestAccrualDate_t_1159977753");
    Leg_23.add_attribute("PutCall", "435364040"); // 1
    Leg_23_set.insert("435364040");
    Leg_23.add_attribute("LegOptionRatio", "1656556.110000"); // 1
    Leg_23_set.insert("1656556.110000");
    Leg_23.add_attribute("Px", "7028543.540000"); // 1
    Leg_23_set.insert("7028543.540000");
    all_values.push_back(Leg_23_set);
    all_compo_names.insert("Leg_23_set");

    {
      xml_element LegAID_23{"LegAID"};
      multiset<string> LegAID_23_set;
      LegAID_23.add_attribute("SecAltID", "LegSecurityAltID_t_2018215211"); // 2
      LegAID_23_set.insert("LegSecurityAltID_t_2018215211");
      LegAID_23.add_attribute("SecAltIDSrc", "A"); // 2
      LegAID_23_set.insert("A");
      all_values.push_back(LegAID_23_set);
      all_compo_names.insert("LegAID_23_set");

      Leg_23.add_element(LegAID_23);
    }
    elt.add_element(Leg_23);
  } // end Leg
  { // Yield
    xml_element Yield_3{"Yield"};
    multiset<string> Yield_3_set;
    Yield_3.add_attribute("Typ", "CALL"); // 1
    Yield_3_set.insert("CALL");
    Yield_3.add_attribute("Yld", "20450065.780000"); // 1
    Yield_3_set.insert("20450065.780000");
    Yield_3.add_attribute("CalcDt", "YieldCalcDate_t_540961937"); // 1
    Yield_3_set.insert("YieldCalcDate_t_540961937");
    Yield_3.add_attribute("RedDt", "YieldRedemptionDate_t_687646977"); // 1
    Yield_3_set.insert("YieldRedemptionDate_t_687646977");
    Yield_3.add_attribute("RedPx", "13506535.730000"); // 1
    Yield_3_set.insert("13506535.730000");
    Yield_3.add_attribute("RedPxTyp", "6"); // 1
    Yield_3_set.insert("6");
    all_values.push_back(Yield_3_set);
    all_compo_names.insert("Yield_3_set");

    elt.add_element(Yield_3);
  } // end Yield
  { // Cpcty
    xml_element Cpcty_0{"Cpcty"};
    multiset<string> Cpcty_0_set;
    Cpcty_0.add_attribute("Cpcty", "I"); // 1
    Cpcty_0_set.insert("I");
    Cpcty_0.add_attribute("Rstctions", "7"); // 1
    Cpcty_0_set.insert("7");
    Cpcty_0.add_attribute("CpctyQty", "19281045.000000"); // 1
    Cpcty_0_set.insert("19281045.000000");
    all_values.push_back(Cpcty_0_set);
    all_compo_names.insert("Cpcty_0_set");

    elt.add_element(Cpcty_0);
  } // end Cpcty
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_8{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_8_set;
    SprdBnchmkCurve_8.add_attribute("Spread", "10935339.730000"); // 1
    SprdBnchmkCurve_8_set.insert("10935339.730000");
    SprdBnchmkCurve_8.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_8_set.insert("GBP");
    SprdBnchmkCurve_8.add_attribute("Name", "MuniAAA"); // 1
    SprdBnchmkCurve_8_set.insert("MuniAAA");
    SprdBnchmkCurve_8.add_attribute("Point", "BenchmarkCurvePoint_t_1918209102"); // 1
    SprdBnchmkCurve_8_set.insert("BenchmarkCurvePoint_t_1918209102");
    SprdBnchmkCurve_8.add_attribute("Px", "9368095.640000"); // 1
    SprdBnchmkCurve_8_set.insert("9368095.640000");
    SprdBnchmkCurve_8.add_attribute("PxTyp", "16"); // 1
    SprdBnchmkCurve_8_set.insert("16");
    SprdBnchmkCurve_8.add_attribute("SecID", "BenchmarkSecurityID_t_662766213"); // 1
    SprdBnchmkCurve_8_set.insert("BenchmarkSecurityID_t_662766213");
    SprdBnchmkCurve_8.add_attribute("SecIDSrc", "6"); // 1
    SprdBnchmkCurve_8_set.insert("6");
    all_values.push_back(SprdBnchmkCurve_8_set);
    all_compo_names.insert("SprdBnchmkCurve_8_set");

    elt.add_element(SprdBnchmkCurve_8);
  } // end SprdBnchmkCurve
  { // SetInstr
    xml_element SetInstr_12{"SetInstr"};
    multiset<string> SetInstr_12_set;
    SetInstr_12.add_attribute("DlvryTyp", "0"); // 1
    SetInstr_12_set.insert("0");
    SetInstr_12.add_attribute("StandInstDbTyp", "2"); // 1
    SetInstr_12_set.insert("2");
    SetInstr_12.add_attribute("StandInstDbName", "StandInstDbName_t_1253178869"); // 1
    SetInstr_12_set.insert("StandInstDbName_t_1253178869");
    SetInstr_12.add_attribute("StandInstDbID", "StandInstDbID_t_225754818"); // 1
    SetInstr_12_set.insert("StandInstDbID_t_225754818");
    all_values.push_back(SetInstr_12_set);
    all_compo_names.insert("SetInstr_12_set");

    {
      xml_element DlvInst_12{"DlvInst"};
      multiset<string> DlvInst_12_set;
      DlvInst_12.add_attribute("InstSrc", "1"); // 2
      DlvInst_12_set.insert("1");
      DlvInst_12.add_attribute("InstTyp", "S"); // 2
      DlvInst_12_set.insert("S");
      all_values.push_back(DlvInst_12_set);
      all_compo_names.insert("DlvInst_12_set");

      {
        xml_element Pty_112{"Pty"};
        multiset<string> Pty_112_set;
        Pty_112.add_attribute("ID", "SettlPartyID_t_1385732571"); // 3
        Pty_112_set.insert("SettlPartyID_t_1385732571");
        Pty_112.add_attribute("Src", "6"); // 3
        Pty_112_set.insert("6");
        Pty_112.add_attribute("R", "12"); // 3
        Pty_112_set.insert("12");
        all_values.push_back(Pty_112_set);
        all_compo_names.insert("Pty_112_set");

        {
          xml_element Sub_112{"Sub"};
          multiset<string> Sub_112_set;
          Sub_112.add_attribute("ID", "SettlPartySubID_t_2088586926"); // 4
          Sub_112_set.insert("SettlPartySubID_t_2088586926");
          Sub_112.add_attribute("Typ", "22"); // 4
          Sub_112_set.insert("22");
          all_values.push_back(Sub_112_set);
          all_compo_names.insert("Sub_112_set");

          Pty_112.add_element(Sub_112);
        }
        DlvInst_12.add_element(Pty_112);
      }
      SetInstr_12.add_element(DlvInst_12);
    }
    elt.add_element(SetInstr_12);
  } // end SetInstr
  { // Comm
    xml_element Comm_12{"Comm"};
    multiset<string> Comm_12_set;
    Comm_12.add_attribute("Comm", "Commission_t_1506044698"); // 1
    Comm_12_set.insert("Commission_t_1506044698");
    Comm_12.add_attribute("CommTyp", "6"); // 1
    Comm_12_set.insert("6");
    Comm_12.add_attribute("Ccy", "CHF"); // 1
    Comm_12_set.insert("CHF");
    Comm_12.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_12_set.insert("N");
    all_values.push_back(Comm_12_set);
    all_compo_names.insert("Comm_12_set");

    elt.add_element(Comm_12);
  } // end Comm
  { // Stip
    xml_element Stip_35{"Stip"};
    multiset<string> Stip_35_set;
    Stip_35.add_attribute("Typ", "ORDRINCR"); // 1
    Stip_35_set.insert("ORDRINCR");
    Stip_35.add_attribute("Val", "StipulationValue_t_326202126"); // 1
    Stip_35_set.insert("StipulationValue_t_326202126");
    all_values.push_back(Stip_35_set);
    all_compo_names.insert("Stip_35_set");

    elt.add_element(Stip_35);
  } // end Stip
  { // Stip
    xml_element Stip_36{"Stip"};
    multiset<string> Stip_36_set;
    Stip_36.add_attribute("Typ", "SECTOR"); // 1
    Stip_36_set.insert("SECTOR");
    Stip_36.add_attribute("Val", "StipulationValue_t_322382022"); // 1
    Stip_36_set.insert("StipulationValue_t_322382022");
    all_values.push_back(Stip_36_set);
    all_compo_names.insert("Stip_36_set");

    elt.add_element(Stip_36);
  } // end Stip
  { // Stip
    xml_element Stip_37{"Stip"};
    multiset<string> Stip_37_set;
    Stip_37.add_attribute("Typ", "LOT"); // 1
    Stip_37_set.insert("LOT");
    Stip_37.add_attribute("Val", "StipulationValue_t_744189652"); // 1
    Stip_37_set.insert("StipulationValue_t_744189652");
    all_values.push_back(Stip_37_set);
    all_compo_names.insert("Stip_37_set");

    elt.add_element(Stip_37);
  } // end Stip
  { // MiscFees
    xml_element MiscFees_16{"MiscFees"};
    multiset<string> MiscFees_16_set;
    MiscFees_16.add_attribute("Amt", "MiscFeeAmt_t_1360784047"); // 1
    MiscFees_16_set.insert("MiscFeeAmt_t_1360784047");
    MiscFees_16.add_attribute("Curr", "GBP"); // 1
    MiscFees_16_set.insert("GBP");
    MiscFees_16.add_attribute("Typ", "12"); // 1
    MiscFees_16_set.insert("12");
    MiscFees_16.add_attribute("Basis", "1"); // 1
    MiscFees_16_set.insert("1");
    all_values.push_back(MiscFees_16_set);
    all_compo_names.insert("MiscFees_16_set");

    elt.add_element(MiscFees_16);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_17{"MiscFees"};
    multiset<string> MiscFees_17_set;
    MiscFees_17.add_attribute("Amt", "MiscFeeAmt_t_487507120"); // 1
    MiscFees_17_set.insert("MiscFeeAmt_t_487507120");
    MiscFees_17.add_attribute("Curr", "JPY"); // 1
    MiscFees_17_set.insert("JPY");
    MiscFees_17.add_attribute("Typ", "8"); // 1
    MiscFees_17_set.insert("8");
    MiscFees_17.add_attribute("Basis", "0"); // 1
    MiscFees_17_set.insert("0");
    all_values.push_back(MiscFees_17_set);
    all_compo_names.insert("MiscFees_17_set");

    elt.add_element(MiscFees_17);
  } // end MiscFees
  { // MiscFees
    xml_element MiscFees_18{"MiscFees"};
    multiset<string> MiscFees_18_set;
    MiscFees_18.add_attribute("Amt", "MiscFeeAmt_t_827643274"); // 1
    MiscFees_18_set.insert("MiscFeeAmt_t_827643274");
    MiscFees_18.add_attribute("Curr", "CHF"); // 1
    MiscFees_18_set.insert("CHF");
    MiscFees_18.add_attribute("Typ", "6"); // 1
    MiscFees_18_set.insert("6");
    MiscFees_18.add_attribute("Basis", "1"); // 1
    MiscFees_18_set.insert("1");
    all_values.push_back(MiscFees_18_set);
    all_compo_names.insert("MiscFees_18_set");

    elt.add_element(MiscFees_18);
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
