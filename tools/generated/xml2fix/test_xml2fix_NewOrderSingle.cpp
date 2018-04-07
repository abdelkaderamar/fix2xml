#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderSingle.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderSingle_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Order" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderSingle_message_t_0;
  elt.add_attribute("ID", "ClOrdID_t_1304580874"); // 0
  NewOrderSingle_message_t_0.insert("ClOrdID_t_1304580874");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_687089805"); // 0
  NewOrderSingle_message_t_0.insert("SecondaryClOrdID_t_687089805");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_2100645334"); // 0
  NewOrderSingle_message_t_0.insert("ClOrdLinkID_t_2100645334");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_40731312"); // 0
  NewOrderSingle_message_t_0.insert("TradeOriginationDate_t_40731312");
  elt.add_attribute("TrdDt", "TradeDate_t_314075038"); // 0
  NewOrderSingle_message_t_0.insert("TradeDate_t_314075038");
  elt.add_attribute("Acct", "Account_t_570761806"); // 0
  NewOrderSingle_message_t_0.insert("Account_t_570761806");
  elt.add_attribute("AcctIDSrc", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("AcctTyp", "7"); // 0
  NewOrderSingle_message_t_0.insert("7");
  elt.add_attribute("DayBkngInst", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("BkngUnit", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("PreallocMeth", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_998651046"); // 0
  NewOrderSingle_message_t_0.insert("AllocID_t_998651046");
  elt.add_attribute("SettlTyp", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("SettlDt", "SettlDate_t_403792152"); // 0
  NewOrderSingle_message_t_0.insert("SettlDate_t_403792152");
  elt.add_attribute("CshMgn", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "4"); // 0
  NewOrderSingle_message_t_0.insert("4");
  elt.add_attribute("HandlInst", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("ExecInst", "U"); // 0
  NewOrderSingle_message_t_0.insert("U");
  elt.add_attribute("MinQty", "7045226.640000"); // 0
  NewOrderSingle_message_t_0.insert("7045226.640000");
  elt.add_attribute("MtchInc", "6760487.050000"); // 0
  NewOrderSingle_message_t_0.insert("6760487.050000");
  elt.add_attribute("MxPxLvls", "623974037"); // 0
  NewOrderSingle_message_t_0.insert("623974037");
  elt.add_attribute("MaxFloor", "6743001.450000"); // 0
  NewOrderSingle_message_t_0.insert("6743001.450000");
  elt.add_attribute("ExDest", "ExDestination_t_192654719"); // 0
  NewOrderSingle_message_t_0.insert("ExDestination_t_192654719");
  elt.add_attribute("ExDestIDSrc", "G"); // 0
  NewOrderSingle_message_t_0.insert("G");
  elt.add_attribute("ProcCode", "6"); // 0
  NewOrderSingle_message_t_0.insert("6");
  elt.add_attribute("PrevClsPx", "12008779.950000"); // 0
  NewOrderSingle_message_t_0.insert("12008779.950000");
  elt.add_attribute("Side", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("LocReqd", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_1055130291"); // 0
  NewOrderSingle_message_t_0.insert("TransactTime_t_1055130291");
  elt.add_attribute("QtyTyp", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("Typ", "5"); // 0
  NewOrderSingle_message_t_0.insert("5");
  elt.add_attribute("PxTyp", "14"); // 0
  NewOrderSingle_message_t_0.insert("14");
  elt.add_attribute("Px", "4912851.450000"); // 0
  NewOrderSingle_message_t_0.insert("4912851.450000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("StopPx", "2529588.300000"); // 0
  NewOrderSingle_message_t_0.insert("2529588.300000");
  elt.add_attribute("Ccy", "CAN"); // 0
  NewOrderSingle_message_t_0.insert("CAN");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1560563617"); // 0
  NewOrderSingle_message_t_0.insert("ComplianceID_t_1560563617");
  elt.add_attribute("SolFlag", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("IOIID", "IOIID_t_353325198"); // 0
  NewOrderSingle_message_t_0.insert("IOIID_t_353325198");
  elt.add_attribute("QID", "QuoteID_t_20206997"); // 0
  NewOrderSingle_message_t_0.insert("QuoteID_t_20206997");
  elt.add_attribute("TmInForce", "6"); // 0
  NewOrderSingle_message_t_0.insert("6");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1351976244"); // 0
  NewOrderSingle_message_t_0.insert("EffectiveTime_t_1351976244");
  elt.add_attribute("ExpireDt", "ExpireDate_t_170427357"); // 0
  NewOrderSingle_message_t_0.insert("ExpireDate_t_170427357");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1116932309"); // 0
  NewOrderSingle_message_t_0.insert("ExpireTime_t_1116932309");
  elt.add_attribute("GTBkngInst", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("Cpcty", "R"); // 0
  NewOrderSingle_message_t_0.insert("R");
  elt.add_attribute("Rstctions", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  NewOrderSingle_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("ForexReq", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("SettlCcy", "USD"); // 0
  NewOrderSingle_message_t_0.insert("USD");
  elt.add_attribute("BkngTyp", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_83739313"); // 0
  NewOrderSingle_message_t_0.insert("Text_t_83739313");
  elt.add_attribute("EncTxtLen", "1278782613"); // 0
  NewOrderSingle_message_t_0.insert("1278782613");
  elt.add_attribute("EncTxt", "EncodedText_t_1252825998"); // 0
  NewOrderSingle_message_t_0.insert("EncodedText_t_1252825998");
  elt.add_attribute("SettlDt2", "SettlDate2_t_953488067"); // 0
  NewOrderSingle_message_t_0.insert("SettlDate2_t_953488067");
  elt.add_attribute("Qty2", "2826784.550000"); // 0
  NewOrderSingle_message_t_0.insert("2826784.550000");
  elt.add_attribute("Px2", "1604726.410000"); // 0
  NewOrderSingle_message_t_0.insert("1604726.410000");
  elt.add_attribute("PosEfct", "D"); // 0
  NewOrderSingle_message_t_0.insert("D");
  elt.add_attribute("Covered", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("MaxShow", "3727001.590000"); // 0
  NewOrderSingle_message_t_0.insert("3727001.590000");
  elt.add_attribute("TgtStrategy", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1093462550"); // 0
  NewOrderSingle_message_t_0.insert("TargetStrategyParameters_t_1093462550");
  elt.add_attribute("ParticipationRt", "6256589.890000"); // 0
  NewOrderSingle_message_t_0.insert("6256589.890000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "N"); // 0
  NewOrderSingle_message_t_0.insert("N");
  elt.add_attribute("RegistID", "RegistID_t_38738959"); // 0
  NewOrderSingle_message_t_0.insert("RegistID_t_38738959");
  elt.add_attribute("Designation", "Designation_t_350960978"); // 0
  NewOrderSingle_message_t_0.insert("Designation_t_350960978");
  elt.add_attribute("ManOrdInd", "false"); // 0
  NewOrderSingle_message_t_0.insert("false");
  elt.add_attribute("CustDrctdOrd", "true"); // 0
  NewOrderSingle_message_t_0.insert("true");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1064101135"); // 0
  NewOrderSingle_message_t_0.insert("ReceivedDeptID_t_1064101135");
  elt.add_attribute("CustOrdHdlInst", "MAO"); // 0
  NewOrderSingle_message_t_0.insert("MAO");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("RefOrdID", "RefOrderID_t_33549796"); // 0
  NewOrderSingle_message_t_0.insert("RefOrderID_t_33549796");
  elt.add_attribute("RefOrdIDSrc", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  all_values.push_back(NewOrderSingle_message_t_0);
  all_compo_names.insert("NewOrderSingle_message_t");

  { // Hdr
    xml_element Hdr_54{"Hdr"};
    multiset<string> Hdr_54_set;
    Hdr_54.add_attribute("SeqNum", "1226241968"); // 1
    Hdr_54_set.insert("1226241968");
    Hdr_54.add_attribute("SID", "SenderCompID_t_1364278022"); // 1
    Hdr_54_set.insert("SenderCompID_t_1364278022");
    Hdr_54.add_attribute("TID", "TargetCompID_t_16615569"); // 1
    Hdr_54_set.insert("TargetCompID_t_16615569");
    Hdr_54.add_attribute("OBID", "OnBehalfOfCompID_t_780149638"); // 1
    Hdr_54_set.insert("OnBehalfOfCompID_t_780149638");
    Hdr_54.add_attribute("D2ID", "DeliverToCompID_t_1223571306"); // 1
    Hdr_54_set.insert("DeliverToCompID_t_1223571306");
    Hdr_54.add_attribute("SSub", "SenderSubID_t_1128100451"); // 1
    Hdr_54_set.insert("SenderSubID_t_1128100451");
    Hdr_54.add_attribute("SLoc", "SenderLocationID_t_1008357454"); // 1
    Hdr_54_set.insert("SenderLocationID_t_1008357454");
    Hdr_54.add_attribute("TSub", "TargetSubID_t_1275519309"); // 1
    Hdr_54_set.insert("TargetSubID_t_1275519309");
    Hdr_54.add_attribute("TLoc", "TargetLocationID_t_1211839764"); // 1
    Hdr_54_set.insert("TargetLocationID_t_1211839764");
    Hdr_54.add_attribute("OBSub", "OnBehalfOfSubID_t_139656420"); // 1
    Hdr_54_set.insert("OnBehalfOfSubID_t_139656420");
    Hdr_54.add_attribute("OBLoc", "OnBehalfOfLocationID_t_380861659"); // 1
    Hdr_54_set.insert("OnBehalfOfLocationID_t_380861659");
    Hdr_54.add_attribute("D2Sub", "DeliverToSubID_t_17844183"); // 1
    Hdr_54_set.insert("DeliverToSubID_t_17844183");
    Hdr_54.add_attribute("D2Loc", "DeliverToLocationID_t_422334875"); // 1
    Hdr_54_set.insert("DeliverToLocationID_t_422334875");
    Hdr_54.add_attribute("PosDup", "N"); // 1
    Hdr_54_set.insert("N");
    Hdr_54.add_attribute("PosRsnd", "N"); // 1
    Hdr_54_set.insert("N");
    Hdr_54.add_attribute("Snt", "SendingTime_t_60082710"); // 1
    Hdr_54_set.insert("SendingTime_t_60082710");
    Hdr_54.add_attribute("OrigSnt", "OrigSendingTime_t_914034460"); // 1
    Hdr_54_set.insert("OrigSendingTime_t_914034460");
    Hdr_54.add_attribute("MsgEncd", "MessageEncoding_t_2024496142"); // 1
    Hdr_54_set.insert("MessageEncoding_t_2024496142");
    all_values.push_back(Hdr_54_set);
    all_compo_names.insert("Hdr_54_set");

    {
      xml_element Hop_54{"Hop"};
      multiset<string> Hop_54_set;
      Hop_54.add_attribute("ID", "HopCompID_t_1153545260"); // 2
      Hop_54_set.insert("HopCompID_t_1153545260");
      Hop_54.add_attribute("Ref", "1539693449"); // 2
      Hop_54_set.insert("1539693449");
      Hop_54.add_attribute("Snt", "HopSendingTime_t_1931341229"); // 2
      Hop_54_set.insert("HopSendingTime_t_1931341229");
      all_values.push_back(Hop_54_set);
      all_compo_names.insert("Hop_54_set");

      Hdr_54.add_element(Hop_54);
    }
    elt.add_element(Hdr_54);
  } // end Hdr
  { // Pty
    xml_element Pty_251{"Pty"};
    multiset<string> Pty_251_set;
    Pty_251.add_attribute("ID", "PartyID_t_1578432408"); // 1
    Pty_251_set.insert("PartyID_t_1578432408");
    Pty_251.add_attribute("Src", "1"); // 1
    Pty_251_set.insert("1");
    Pty_251.add_attribute("R", "14"); // 1
    Pty_251_set.insert("14");
    all_values.push_back(Pty_251_set);
    all_compo_names.insert("Pty_251_set");

    {
      xml_element Sub_251{"Sub"};
      multiset<string> Sub_251_set;
      Sub_251.add_attribute("ID", "PartySubID_t_1637378365"); // 2
      Sub_251_set.insert("PartySubID_t_1637378365");
      Sub_251.add_attribute("Typ", "29"); // 2
      Sub_251_set.insert("29");
      all_values.push_back(Sub_251_set);
      all_compo_names.insert("Sub_251_set");

      Pty_251.add_element(Sub_251);
    }
    elt.add_element(Pty_251);
  } // end Pty
  { // Pty
    xml_element Pty_252{"Pty"};
    multiset<string> Pty_252_set;
    Pty_252.add_attribute("ID", "PartyID_t_1834570875"); // 1
    Pty_252_set.insert("PartyID_t_1834570875");
    Pty_252.add_attribute("Src", "B"); // 1
    Pty_252_set.insert("B");
    Pty_252.add_attribute("R", "73"); // 1
    Pty_252_set.insert("73");
    all_values.push_back(Pty_252_set);
    all_compo_names.insert("Pty_252_set");

    {
      xml_element Sub_252{"Sub"};
      multiset<string> Sub_252_set;
      Sub_252.add_attribute("ID", "PartySubID_t_1363675599"); // 2
      Sub_252_set.insert("PartySubID_t_1363675599");
      Sub_252.add_attribute("Typ", "13"); // 2
      Sub_252_set.insert("13");
      all_values.push_back(Sub_252_set);
      all_compo_names.insert("Sub_252_set");

      Pty_252.add_element(Sub_252);
    }
    elt.add_element(Pty_252);
  } // end Pty
  { // PreAll
    xml_element PreAll_16{"PreAll"};
    multiset<string> PreAll_16_set;
    PreAll_16.add_attribute("Acct", "AllocAccount_t_1380291168"); // 1
    PreAll_16_set.insert("AllocAccount_t_1380291168");
    PreAll_16.add_attribute("ActIDSrc", "4"); // 1
    PreAll_16_set.insert("4");
    PreAll_16.add_attribute("AllocSettlCcy", "CHF"); // 1
    PreAll_16_set.insert("CHF");
    PreAll_16.add_attribute("IndAllocID", "IndividualAllocID_t_586533443"); // 1
    PreAll_16_set.insert("IndividualAllocID_t_586533443");
    PreAll_16.add_attribute("Qty", "8008708.320000"); // 1
    PreAll_16_set.insert("8008708.320000");
    all_values.push_back(PreAll_16_set);
    all_compo_names.insert("PreAll_16_set");

    {
      xml_element Pty_253{"Pty"};
      multiset<string> Pty_253_set;
      Pty_253.add_attribute("ID", "NestedPartyID_t_1572747735"); // 2
      Pty_253_set.insert("NestedPartyID_t_1572747735");
      Pty_253.add_attribute("Src", "6"); // 2
      Pty_253_set.insert("6");
      Pty_253.add_attribute("R", "81"); // 2
      Pty_253_set.insert("81");
      all_values.push_back(Pty_253_set);
      all_compo_names.insert("Pty_253_set");

      {
        xml_element Sub_253{"Sub"};
        multiset<string> Sub_253_set;
        Sub_253.add_attribute("ID", "NestedPartySubID_t_1590591918"); // 3
        Sub_253_set.insert("NestedPartySubID_t_1590591918");
        Sub_253.add_attribute("Typ", "32"); // 3
        Sub_253_set.insert("32");
        all_values.push_back(Sub_253_set);
        all_compo_names.insert("Sub_253_set");

        Pty_253.add_element(Sub_253);
      }
      PreAll_16.add_element(Pty_253);
    }
    elt.add_element(PreAll_16);
  } // end PreAll
  { // PreAll
    xml_element PreAll_17{"PreAll"};
    multiset<string> PreAll_17_set;
    PreAll_17.add_attribute("Acct", "AllocAccount_t_1723066792"); // 1
    PreAll_17_set.insert("AllocAccount_t_1723066792");
    PreAll_17.add_attribute("ActIDSrc", "1"); // 1
    PreAll_17_set.insert("1");
    PreAll_17.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_17_set.insert("USD");
    PreAll_17.add_attribute("IndAllocID", "IndividualAllocID_t_95648354"); // 1
    PreAll_17_set.insert("IndividualAllocID_t_95648354");
    PreAll_17.add_attribute("Qty", "2146690.610000"); // 1
    PreAll_17_set.insert("2146690.610000");
    all_values.push_back(PreAll_17_set);
    all_compo_names.insert("PreAll_17_set");

    {
      xml_element Pty_254{"Pty"};
      multiset<string> Pty_254_set;
      Pty_254.add_attribute("ID", "NestedPartyID_t_2029311053"); // 2
      Pty_254_set.insert("NestedPartyID_t_2029311053");
      Pty_254.add_attribute("Src", "9"); // 2
      Pty_254_set.insert("9");
      Pty_254.add_attribute("R", "44"); // 2
      Pty_254_set.insert("44");
      all_values.push_back(Pty_254_set);
      all_compo_names.insert("Pty_254_set");

      {
        xml_element Sub_254{"Sub"};
        multiset<string> Sub_254_set;
        Sub_254.add_attribute("ID", "NestedPartySubID_t_1460259814"); // 3
        Sub_254_set.insert("NestedPartySubID_t_1460259814");
        Sub_254.add_attribute("Typ", "5"); // 3
        Sub_254_set.insert("5");
        all_values.push_back(Sub_254_set);
        all_compo_names.insert("Sub_254_set");

        Pty_254.add_element(Sub_254);
      }
      PreAll_17.add_element(Pty_254);
    }
    elt.add_element(PreAll_17);
  } // end PreAll
  { // PreAll
    xml_element PreAll_18{"PreAll"};
    multiset<string> PreAll_18_set;
    PreAll_18.add_attribute("Acct", "AllocAccount_t_1497483754"); // 1
    PreAll_18_set.insert("AllocAccount_t_1497483754");
    PreAll_18.add_attribute("ActIDSrc", "4"); // 1
    PreAll_18_set.insert("4");
    PreAll_18.add_attribute("AllocSettlCcy", "CAN"); // 1
    PreAll_18_set.insert("CAN");
    PreAll_18.add_attribute("IndAllocID", "IndividualAllocID_t_669422561"); // 1
    PreAll_18_set.insert("IndividualAllocID_t_669422561");
    PreAll_18.add_attribute("Qty", "2982300.340000"); // 1
    PreAll_18_set.insert("2982300.340000");
    all_values.push_back(PreAll_18_set);
    all_compo_names.insert("PreAll_18_set");

    {
      xml_element Pty_255{"Pty"};
      multiset<string> Pty_255_set;
      Pty_255.add_attribute("ID", "NestedPartyID_t_400762932"); // 2
      Pty_255_set.insert("NestedPartyID_t_400762932");
      Pty_255.add_attribute("Src", "B"); // 2
      Pty_255_set.insert("B");
      Pty_255.add_attribute("R", "77"); // 2
      Pty_255_set.insert("77");
      all_values.push_back(Pty_255_set);
      all_compo_names.insert("Pty_255_set");

      {
        xml_element Sub_255{"Sub"};
        multiset<string> Sub_255_set;
        Sub_255.add_attribute("ID", "NestedPartySubID_t_1781054101"); // 3
        Sub_255_set.insert("NestedPartySubID_t_1781054101");
        Sub_255.add_attribute("Typ", "25"); // 3
        Sub_255_set.insert("25");
        all_values.push_back(Sub_255_set);
        all_compo_names.insert("Sub_255_set");

        Pty_255.add_element(Sub_255);
      }
      PreAll_18.add_element(Pty_255);
    }
    elt.add_element(PreAll_18);
  } // end PreAll
  { // DsplyInstr
    xml_element DsplyInstr_6{"DsplyInstr"};
    multiset<string> DsplyInstr_6_set;
    DsplyInstr_6.add_attribute("DisplayQty", "2728454.230000"); // 1
    DsplyInstr_6_set.insert("2728454.230000");
    DsplyInstr_6.add_attribute("SecDspQty", "21419620.720000"); // 1
    DsplyInstr_6_set.insert("21419620.720000");
    DsplyInstr_6.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_6_set.insert("1");
    DsplyInstr_6.add_attribute("DspMthd", "4"); // 1
    DsplyInstr_6_set.insert("4");
    DsplyInstr_6.add_attribute("DsplLwQty", "15672261.600000"); // 1
    DsplyInstr_6_set.insert("15672261.600000");
    DsplyInstr_6.add_attribute("DisplayHighQty", "3583482.080000"); // 1
    DsplyInstr_6_set.insert("3583482.080000");
    DsplyInstr_6.add_attribute("DspMinIncr", "1079650.990000"); // 1
    DsplyInstr_6_set.insert("1079650.990000");
    DsplyInstr_6.add_attribute("RfrshQty", "10103344.300000"); // 1
    DsplyInstr_6_set.insert("10103344.300000");
    all_values.push_back(DsplyInstr_6_set);
    all_compo_names.insert("DsplyInstr_6_set");

    elt.add_element(DsplyInstr_6);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_11{"TrdSes"};
    multiset<string> TrdSes_11_set;
    TrdSes_11.add_attribute("SesID", "6"); // 1
    TrdSes_11_set.insert("6");
    TrdSes_11.add_attribute("SesSub", "4"); // 1
    TrdSes_11_set.insert("4");
    all_values.push_back(TrdSes_11_set);
    all_compo_names.insert("TrdSes_11_set");

    elt.add_element(TrdSes_11);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_44{"Instrmt"};
    multiset<string> Instrmt_44_set;
    Instrmt_44.add_attribute("Sym", "Symbol_t_567996747"); // 1
    Instrmt_44_set.insert("Symbol_t_567996747");
    Instrmt_44.add_attribute("Sfx", "WI"); // 1
    Instrmt_44_set.insert("WI");
    Instrmt_44.add_attribute("ID", "SecurityID_t_1324618645"); // 1
    Instrmt_44_set.insert("SecurityID_t_1324618645");
    Instrmt_44.add_attribute("Src", "E"); // 1
    Instrmt_44_set.insert("E");
    Instrmt_44.add_attribute("Prod", "11"); // 1
    Instrmt_44_set.insert("11");
    Instrmt_44.add_attribute("ProdCmplx", "ProductComplex_t_1204124581"); // 1
    Instrmt_44_set.insert("ProductComplex_t_1204124581");
    Instrmt_44.add_attribute("SecGrp", "SecurityGroup_t_975851906"); // 1
    Instrmt_44_set.insert("SecurityGroup_t_975851906");
    Instrmt_44.add_attribute("CFI", "CFICode_t_1515253066"); // 1
    Instrmt_44_set.insert("CFICode_t_1515253066");
    Instrmt_44.add_attribute("SecTyp", "TBILL"); // 1
    Instrmt_44_set.insert("TBILL");
    Instrmt_44.add_attribute("SubTyp", "SecuritySubType_t_325852012"); // 1
    Instrmt_44_set.insert("SecuritySubType_t_325852012");
    Instrmt_44.add_attribute("MMY", "317923949"); // 1
    Instrmt_44_set.insert("317923949");
    Instrmt_44.add_attribute("MatDt", "MaturityDate_t_284209620"); // 1
    Instrmt_44_set.insert("MaturityDate_t_284209620");
    Instrmt_44.add_attribute("MatTm", "1510422993"); // 1
    Instrmt_44_set.insert("1510422993");
    Instrmt_44.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_987346511"); // 1
    Instrmt_44_set.insert("SettleOnOpenFlag_t_987346511");
    Instrmt_44.add_attribute("AsgnMeth", "582439654"); // 1
    Instrmt_44_set.insert("582439654");
    Instrmt_44.add_attribute("Status", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("CpnPmt", "CouponPaymentDate_t_454795423"); // 1
    Instrmt_44_set.insert("CouponPaymentDate_t_454795423");
    Instrmt_44.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_44_set.insert("MM");
    Instrmt_44.add_attribute("Snrty", "SB"); // 1
    Instrmt_44_set.insert("SB");
    Instrmt_44.add_attribute("NotlPctOut", "16479039.720000"); // 1
    Instrmt_44_set.insert("16479039.720000");
    Instrmt_44.add_attribute("OrigNotlPctOut", "16027789.770000"); // 1
    Instrmt_44_set.insert("16027789.770000");
    Instrmt_44.add_attribute("AttchPnt", "15392348.030000"); // 1
    Instrmt_44_set.insert("15392348.030000");
    Instrmt_44.add_attribute("DetchPnt", "12800623.160000"); // 1
    Instrmt_44_set.insert("12800623.160000");
    Instrmt_44.add_attribute("Issued", "IssueDate_t_529011584"); // 1
    Instrmt_44_set.insert("IssueDate_t_529011584");
    Instrmt_44.add_attribute("RepoCollSecTyp", "958977315"); // 1
    Instrmt_44_set.insert("958977315");
    Instrmt_44.add_attribute("RepoTrm", "1638410524"); // 1
    Instrmt_44_set.insert("1638410524");
    Instrmt_44.add_attribute("RepoRt", "6369766.830000"); // 1
    Instrmt_44_set.insert("6369766.830000");
    Instrmt_44.add_attribute("Fctr", "19693117.450000"); // 1
    Instrmt_44_set.insert("19693117.450000");
    Instrmt_44.add_attribute("CrdRtg", "CreditRating_t_997799823"); // 1
    Instrmt_44_set.insert("CreditRating_t_997799823");
    Instrmt_44.add_attribute("Rgstry", "InstrRegistry_t_320524926"); // 1
    Instrmt_44_set.insert("InstrRegistry_t_320524926");
    Instrmt_44.add_attribute("IssuCtry", "1050798388"); // 1
    Instrmt_44_set.insert("1050798388");
    Instrmt_44.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1565796570"); // 1
    Instrmt_44_set.insert("StateOrProvinceOfIssue_t_1565796570");
    Instrmt_44.add_attribute("Lcl", "LocaleOfIssue_t_493690773"); // 1
    Instrmt_44_set.insert("LocaleOfIssue_t_493690773");
    Instrmt_44.add_attribute("Redeem", "RedemptionDate_t_227933386"); // 1
    Instrmt_44_set.insert("RedemptionDate_t_227933386");
    Instrmt_44.add_attribute("StrkPx", "2009787.310000"); // 1
    Instrmt_44_set.insert("2009787.310000");
    Instrmt_44.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_44_set.insert("CAN");
    Instrmt_44.add_attribute("StrkMult", "11768306.370000"); // 1
    Instrmt_44_set.insert("11768306.370000");
    Instrmt_44.add_attribute("StrkValu", "20639370.920000"); // 1
    Instrmt_44_set.insert("20639370.920000");
    Instrmt_44.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_44_set.insert("5");
    Instrmt_44.add_attribute("StrkPxBndryPrcsn", "2343773.940000"); // 1
    Instrmt_44_set.insert("2343773.940000");
    Instrmt_44.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("OptAt", "865621994"); // 1
    Instrmt_44_set.insert("865621994");
    Instrmt_44.add_attribute("Mult", "12217239.050000"); // 1
    Instrmt_44_set.insert("12217239.050000");
    Instrmt_44.add_attribute("MultTyp", "1"); // 1
    Instrmt_44_set.insert("1");
    Instrmt_44.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("MinPxIncr", "16765193.280000"); // 1
    Instrmt_44_set.insert("16765193.280000");
    Instrmt_44.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_552122578"); // 1
    Instrmt_44_set.insert("MinPriceIncrementAmount_t_552122578");
    Instrmt_44.add_attribute("UOM", "Gal"); // 1
    Instrmt_44_set.insert("Gal");
    Instrmt_44.add_attribute("UOMQty", "11769396.520000"); // 1
    Instrmt_44_set.insert("11769396.520000");
    Instrmt_44.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_44_set.insert("Gal");
    Instrmt_44.add_attribute("PxUOMQty", "15658318.050000"); // 1
    Instrmt_44_set.insert("15658318.050000");
    Instrmt_44.add_attribute("SettlMeth", "C"); // 1
    Instrmt_44_set.insert("C");
    Instrmt_44.add_attribute("ExerStyle", "1"); // 1
    Instrmt_44_set.insert("1");
    Instrmt_44.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("OptPayAmt", "OptPayoutAmount_t_1947928845"); // 1
    Instrmt_44_set.insert("OptPayoutAmount_t_1947928845");
    Instrmt_44.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_44_set.insert("PCTPAR");
    Instrmt_44.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_44_set.insert("EQTY");
    Instrmt_44.add_attribute("ListMeth", "0"); // 1
    Instrmt_44_set.insert("0");
    Instrmt_44.add_attribute("CapPx", "14939311.010000"); // 1
    Instrmt_44_set.insert("14939311.010000");
    Instrmt_44.add_attribute("FlrPx", "12499519.580000"); // 1
    Instrmt_44_set.insert("12499519.580000");
    Instrmt_44.add_attribute("PutCall", "0"); // 1
    Instrmt_44_set.insert("0");
    Instrmt_44.add_attribute("FlexInd", "false"); // 1
    Instrmt_44_set.insert("false");
    Instrmt_44.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_44_set.insert("true");
    Instrmt_44.add_attribute("TmUnit", "H"); // 1
    Instrmt_44_set.insert("H");
    Instrmt_44.add_attribute("CpnRt", "3888222.530000"); // 1
    Instrmt_44_set.insert("3888222.530000");
    Instrmt_44.add_attribute("Exch", "SecurityExchange_t_762459664"); // 1
    Instrmt_44_set.insert("SecurityExchange_t_762459664");
    Instrmt_44.add_attribute("PosLmt", "1594367311"); // 1
    Instrmt_44_set.insert("1594367311");
    Instrmt_44.add_attribute("NTPosLmt", "305275697"); // 1
    Instrmt_44_set.insert("305275697");
    Instrmt_44.add_attribute("Issr", "Issuer_t_1265483061"); // 1
    Instrmt_44_set.insert("Issuer_t_1265483061");
    Instrmt_44.add_attribute("EncIssrLen", "949566313"); // 1
    Instrmt_44_set.insert("949566313");
    Instrmt_44.add_attribute("EncIssr", "EncodedIssuer_t_539653091"); // 1
    Instrmt_44_set.insert("EncodedIssuer_t_539653091");
    Instrmt_44.add_attribute("Desc", "SecurityDesc_t_2052716078"); // 1
    Instrmt_44_set.insert("SecurityDesc_t_2052716078");
    Instrmt_44.add_attribute("EncSecDescLen", "1815188307"); // 1
    Instrmt_44_set.insert("1815188307");
    Instrmt_44.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1761376996"); // 1
    Instrmt_44_set.insert("EncodedSecurityDesc_t_1761376996");
    Instrmt_44.add_attribute("Pool", "Pool_t_1274905102"); // 1
    Instrmt_44_set.insert("Pool_t_1274905102");
    Instrmt_44.add_attribute("CSetMo", "297028931"); // 1
    Instrmt_44_set.insert("297028931");
    Instrmt_44.add_attribute("CPPgm", "99"); // 1
    Instrmt_44_set.insert("99");
    Instrmt_44.add_attribute("CPRegT", "CPRegType_t_1827027680"); // 1
    Instrmt_44_set.insert("CPRegType_t_1827027680");
    Instrmt_44.add_attribute("Dated", "DatedDate_t_323625934"); // 1
    Instrmt_44_set.insert("DatedDate_t_323625934");
    Instrmt_44.add_attribute("IntAcrl", "InterestAccrualDate_t_319868680"); // 1
    Instrmt_44_set.insert("InterestAccrualDate_t_319868680");
    all_values.push_back(Instrmt_44_set);
    all_compo_names.insert("Instrmt_44_set");

    {
      xml_element AID_47{"AID"};
      multiset<string> AID_47_set;
      AID_47.add_attribute("AltID", "SecurityAltID_t_1834445587"); // 2
      AID_47_set.insert("SecurityAltID_t_1834445587");
      AID_47.add_attribute("AltIDSrc", "G"); // 2
      AID_47_set.insert("G");
      all_values.push_back(AID_47_set);
      all_compo_names.insert("AID_47_set");

      Instrmt_44.add_element(AID_47);
    }
    {
      xml_element SecXML_47{"SecXML"};
      multiset<string> SecXML_47_set;
      SecXML_47.add_attribute("Schema", "SecurityXMLSchema_t_629387001"); // 2
      SecXML_47_set.insert("SecurityXMLSchema_t_629387001");
      all_values.push_back(SecXML_47_set);
      all_compo_names.insert("SecXML_47_set");

      Instrmt_44.add_element(SecXML_47);
    }
    {
      xml_element Evnt_47{"Evnt"};
      multiset<string> Evnt_47_set;
      Evnt_47.add_attribute("EventTyp", "10"); // 2
      Evnt_47_set.insert("10");
      Evnt_47.add_attribute("Dt", "EventDate_t_119299564"); // 2
      Evnt_47_set.insert("EventDate_t_119299564");
      Evnt_47.add_attribute("Tm", "EventTime_t_429832198"); // 2
      Evnt_47_set.insert("EventTime_t_429832198");
      Evnt_47.add_attribute("Px", "13967976.060000"); // 2
      Evnt_47_set.insert("13967976.060000");
      Evnt_47.add_attribute("Txt", "EventText_t_318453134"); // 2
      Evnt_47_set.insert("EventText_t_318453134");
      all_values.push_back(Evnt_47_set);
      all_compo_names.insert("Evnt_47_set");

      Instrmt_44.add_element(Evnt_47);
    }
    {
      xml_element Pty_256{"Pty"};
      multiset<string> Pty_256_set;
      Pty_256.add_attribute("ID", "InstrumentPartyID_t_1228077218"); // 2
      Pty_256_set.insert("InstrumentPartyID_t_1228077218");
      Pty_256.add_attribute("Src", "4"); // 2
      Pty_256_set.insert("4");
      Pty_256.add_attribute("R", "25"); // 2
      Pty_256_set.insert("25");
      all_values.push_back(Pty_256_set);
      all_compo_names.insert("Pty_256_set");

      {
        xml_element Sub_256{"Sub"};
        multiset<string> Sub_256_set;
        Sub_256.add_attribute("ID", "InstrumentPartySubID_t_1444635160"); // 3
        Sub_256_set.insert("InstrumentPartySubID_t_1444635160");
        Sub_256.add_attribute("Typ", "21"); // 3
        Sub_256_set.insert("21");
        all_values.push_back(Sub_256_set);
        all_compo_names.insert("Sub_256_set");

        Pty_256.add_element(Sub_256);
      }
      Instrmt_44.add_element(Pty_256);
    }
    {
      xml_element CmplxEvnt_44{"CmplxEvnt"};
      multiset<string> CmplxEvnt_44_set;
      CmplxEvnt_44.add_attribute("Typ", "1"); // 2
      CmplxEvnt_44_set.insert("1");
      CmplxEvnt_44.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1862171834"); // 2
      CmplxEvnt_44_set.insert("ComplexOptPayoutAmount_t_1862171834");
      CmplxEvnt_44.add_attribute("Px", "9722055.390000"); // 2
      CmplxEvnt_44_set.insert("9722055.390000");
      CmplxEvnt_44.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_44_set.insert("4");
      CmplxEvnt_44.add_attribute("PxBndryPrcsn", "13090554.980000"); // 2
      CmplxEvnt_44_set.insert("13090554.980000");
      CmplxEvnt_44.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_44_set.insert("1");
      CmplxEvnt_44.add_attribute("Cond", "1"); // 2
      CmplxEvnt_44_set.insert("1");
      all_values.push_back(CmplxEvnt_44_set);
      all_compo_names.insert("CmplxEvnt_44_set");

      {
        xml_element EvntDts_44{"EvntDts"};
        multiset<string> EvntDts_44_set;
        EvntDts_44.add_attribute("StartDt", "ComplexEventStartDate_t_111138163"); // 3
        EvntDts_44_set.insert("ComplexEventStartDate_t_111138163");
        EvntDts_44.add_attribute("EndDt", "ComplexEventEndDate_t_1817134328"); // 3
        EvntDts_44_set.insert("ComplexEventEndDate_t_1817134328");
        all_values.push_back(EvntDts_44_set);
        all_compo_names.insert("EvntDts_44_set");

        {
          xml_element EvntTms_44{"EvntTms"};
          multiset<string> EvntTms_44_set;
          EvntTms_44.add_attribute("StartTm", "684498296"); // 4
          EvntTms_44_set.insert("684498296");
          EvntTms_44.add_attribute("EndTm", "1926326470"); // 4
          EvntTms_44_set.insert("1926326470");
          all_values.push_back(EvntTms_44_set);
          all_compo_names.insert("EvntTms_44_set");

          EvntDts_44.add_element(EvntTms_44);
        }
        CmplxEvnt_44.add_element(EvntDts_44);
      }
      Instrmt_44.add_element(CmplxEvnt_44);
    }
    elt.add_element(Instrmt_44);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_12{"FinDetls"};
    multiset<string> FinDetls_12_set;
    FinDetls_12.add_attribute("AgmtDesc", "AgreementDesc_t_1431027677"); // 1
    FinDetls_12_set.insert("AgreementDesc_t_1431027677");
    FinDetls_12.add_attribute("AgmtID", "AgreementID_t_1959403399"); // 1
    FinDetls_12_set.insert("AgreementID_t_1959403399");
    FinDetls_12.add_attribute("AgmtDt", "AgreementDate_t_75871754"); // 1
    FinDetls_12_set.insert("AgreementDate_t_75871754");
    FinDetls_12.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_12_set.insert("EUR");
    FinDetls_12.add_attribute("TrmTyp", "1"); // 1
    FinDetls_12_set.insert("1");
    FinDetls_12.add_attribute("StartDt", "StartDate_t_893825386"); // 1
    FinDetls_12_set.insert("StartDate_t_893825386");
    FinDetls_12.add_attribute("EndDt", "EndDate_t_1325909371"); // 1
    FinDetls_12_set.insert("EndDate_t_1325909371");
    FinDetls_12.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_12_set.insert("3");
    FinDetls_12.add_attribute("MgnRatio", "15232123.870000"); // 1
    FinDetls_12_set.insert("15232123.870000");
    all_values.push_back(FinDetls_12_set);
    all_compo_names.insert("FinDetls_12_set");

    elt.add_element(FinDetls_12);
  } // end FinDetls
  { // Undly
    xml_element Undly_58{"Undly"};
    multiset<string> Undly_58_set;
    Undly_58.add_attribute("Sym", "UnderlyingSymbol_t_260771343"); // 1
    Undly_58_set.insert("UnderlyingSymbol_t_260771343");
    Undly_58.add_attribute("Sfx", "WI"); // 1
    Undly_58_set.insert("WI");
    Undly_58.add_attribute("ID", "UnderlyingSecurityID_t_798614760"); // 1
    Undly_58_set.insert("UnderlyingSecurityID_t_798614760");
    Undly_58.add_attribute("Src", "8"); // 1
    Undly_58_set.insert("8");
    Undly_58.add_attribute("Prod", "13"); // 1
    Undly_58_set.insert("13");
    Undly_58.add_attribute("CFI", "UnderlyingCFICode_t_1541859819"); // 1
    Undly_58_set.insert("UnderlyingCFICode_t_1541859819");
    Undly_58.add_attribute("SecTyp", "TBA"); // 1
    Undly_58_set.insert("TBA");
    Undly_58.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_330789667"); // 1
    Undly_58_set.insert("UnderlyingSecuritySubType_t_330789667");
    Undly_58.add_attribute("MMY", "2125243106"); // 1
    Undly_58_set.insert("2125243106");
    Undly_58.add_attribute("Mat", "UnderlyingMaturityDate_t_898952711"); // 1
    Undly_58_set.insert("UnderlyingMaturityDate_t_898952711");
    Undly_58.add_attribute("MatTm", "45477854"); // 1
    Undly_58_set.insert("45477854");
    Undly_58.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_949964997"); // 1
    Undly_58_set.insert("UnderlyingCouponPaymentDate_t_949964997");
    Undly_58.add_attribute("RestrctTyp", "FR"); // 1
    Undly_58_set.insert("FR");
    Undly_58.add_attribute("Snrty", "SR"); // 1
    Undly_58_set.insert("SR");
    Undly_58.add_attribute("NotlPctOut", "799625.860000"); // 1
    Undly_58_set.insert("799625.860000");
    Undly_58.add_attribute("OrigNotlPctOut", "11920013.820000"); // 1
    Undly_58_set.insert("11920013.820000");
    Undly_58.add_attribute("AttchPnt", "14656715.150000"); // 1
    Undly_58_set.insert("14656715.150000");
    Undly_58.add_attribute("DetchPnt", "18970969.150000"); // 1
    Undly_58_set.insert("18970969.150000");
    Undly_58.add_attribute("Issued", "UnderlyingIssueDate_t_1876499678"); // 1
    Undly_58_set.insert("UnderlyingIssueDate_t_1876499678");
    Undly_58.add_attribute("RepoCollSecTyp", "1244514337"); // 1
    Undly_58_set.insert("1244514337");
    Undly_58.add_attribute("RepoTrm", "1180640944"); // 1
    Undly_58_set.insert("1180640944");
    Undly_58.add_attribute("RepoRt", "16884194.290000"); // 1
    Undly_58_set.insert("16884194.290000");
    Undly_58.add_attribute("Fctr", "13203860.910000"); // 1
    Undly_58_set.insert("13203860.910000");
    Undly_58.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1754597649"); // 1
    Undly_58_set.insert("UnderlyingCreditRating_t_1754597649");
    Undly_58.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1179883213"); // 1
    Undly_58_set.insert("UnderlyingInstrRegistry_t_1179883213");
    Undly_58.add_attribute("Ctry", "1719883779"); // 1
    Undly_58_set.insert("1719883779");
    Undly_58.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_500939387"); // 1
    Undly_58_set.insert("UnderlyingStateOrProvinceOfIssue_t_500939387");
    Undly_58.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_358308936"); // 1
    Undly_58_set.insert("UnderlyingLocaleOfIssue_t_358308936");
    Undly_58.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1861355559"); // 1
    Undly_58_set.insert("UnderlyingRedemptionDate_t_1861355559");
    Undly_58.add_attribute("StrkPx", "20241517.740000"); // 1
    Undly_58_set.insert("20241517.740000");
    Undly_58.add_attribute("StrkCcy", "USD"); // 1
    Undly_58_set.insert("USD");
    Undly_58.add_attribute("OptA", "1829712711"); // 1
    Undly_58_set.insert("1829712711");
    Undly_58.add_attribute("Mult", "5587408.500000"); // 1
    Undly_58_set.insert("5587408.500000");
    Undly_58.add_attribute("MultTyp", "1"); // 1
    Undly_58_set.insert("1");
    Undly_58.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_58_set.insert("3");
    Undly_58.add_attribute("UOM", "Bu"); // 1
    Undly_58_set.insert("Bu");
    Undly_58.add_attribute("UOMQty", "5540136.540000"); // 1
    Undly_58_set.insert("5540136.540000");
    Undly_58.add_attribute("PxUOM", "Bbl"); // 1
    Undly_58_set.insert("Bbl");
    Undly_58.add_attribute("PxUOMQty", "20783601.270000"); // 1
    Undly_58_set.insert("20783601.270000");
    Undly_58.add_attribute("TmUnit", "Wk"); // 1
    Undly_58_set.insert("Wk");
    Undly_58.add_attribute("ExerStyle", "1"); // 1
    Undly_58_set.insert("1");
    Undly_58.add_attribute("CpnRt", "8808414.770000"); // 1
    Undly_58_set.insert("8808414.770000");
    Undly_58.add_attribute("Exch", "UnderlyingSecurityExchange_t_1865701881"); // 1
    Undly_58_set.insert("UnderlyingSecurityExchange_t_1865701881");
    Undly_58.add_attribute("Issr", "UnderlyingIssuer_t_299184444"); // 1
    Undly_58_set.insert("UnderlyingIssuer_t_299184444");
    Undly_58.add_attribute("EncUndIssrLen", "960804063"); // 1
    Undly_58_set.insert("960804063");
    Undly_58.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_910219615"); // 1
    Undly_58_set.insert("EncodedUnderlyingIssuer_t_910219615");
    Undly_58.add_attribute("Desc", "UnderlyingSecurityDesc_t_1764855959"); // 1
    Undly_58_set.insert("UnderlyingSecurityDesc_t_1764855959");
    Undly_58.add_attribute("EncUndSecDescLen", "710417330"); // 1
    Undly_58_set.insert("710417330");
    Undly_58.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_639235645"); // 1
    Undly_58_set.insert("EncodedUnderlyingSecurityDesc_t_639235645");
    Undly_58.add_attribute("CPPgm", "UnderlyingCPProgram_t_861886648"); // 1
    Undly_58_set.insert("UnderlyingCPProgram_t_861886648");
    Undly_58.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1891058274"); // 1
    Undly_58_set.insert("UnderlyingCPRegType_t_1891058274");
    Undly_58.add_attribute("AllocPct", "1801714.270000"); // 1
    Undly_58_set.insert("1801714.270000");
    Undly_58.add_attribute("Ccy", "GBP"); // 1
    Undly_58_set.insert("GBP");
    Undly_58.add_attribute("Qty", "13600546.400000"); // 1
    Undly_58_set.insert("13600546.400000");
    Undly_58.add_attribute("SettlTyp", "2"); // 1
    Undly_58_set.insert("2");
    Undly_58.add_attribute("CashAmt", "UnderlyingCashAmount_t_1999111663"); // 1
    Undly_58_set.insert("UnderlyingCashAmount_t_1999111663");
    Undly_58.add_attribute("CashTyp", "FIXED"); // 1
    Undly_58_set.insert("FIXED");
    Undly_58.add_attribute("Px", "14685447.820000"); // 1
    Undly_58_set.insert("14685447.820000");
    Undly_58.add_attribute("DirtPx", "18757797.900000"); // 1
    Undly_58_set.insert("18757797.900000");
    Undly_58.add_attribute("EndPx", "14784896.660000"); // 1
    Undly_58_set.insert("14784896.660000");
    Undly_58.add_attribute("StartVal", "UnderlyingStartValue_t_1443188037"); // 1
    Undly_58_set.insert("UnderlyingStartValue_t_1443188037");
    Undly_58.add_attribute("CurVal", "UnderlyingCurrentValue_t_1558008853"); // 1
    Undly_58_set.insert("UnderlyingCurrentValue_t_1558008853");
    Undly_58.add_attribute("EndVal", "UnderlyingEndValue_t_2037230516"); // 1
    Undly_58_set.insert("UnderlyingEndValue_t_2037230516");
    Undly_58.add_attribute("AdjQty", "19970557.690000"); // 1
    Undly_58_set.insert("19970557.690000");
    Undly_58.add_attribute("FxRate", "1263924.240000"); // 1
    Undly_58_set.insert("1263924.240000");
    Undly_58.add_attribute("FxRateCalc", "D"); // 1
    Undly_58_set.insert("D");
    Undly_58.add_attribute("CapValu", "UnderlyingCapValue_t_403585775"); // 1
    Undly_58_set.insert("UnderlyingCapValue_t_403585775");
    Undly_58.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1173049310"); // 1
    Undly_58_set.insert("UnderlyingSettlMethod_t_1173049310");
    Undly_58.add_attribute("PutCall", "1921224017"); // 1
    Undly_58_set.insert("1921224017");
    all_values.push_back(Undly_58_set);
    all_compo_names.insert("Undly_58_set");

    {
      xml_element UndAID_58{"UndAID"};
      multiset<string> UndAID_58_set;
      UndAID_58.add_attribute("AltID", "UnderlyingSecurityAltID_t_1856552140"); // 2
      UndAID_58_set.insert("UnderlyingSecurityAltID_t_1856552140");
      UndAID_58.add_attribute("AltIDSrc", "7"); // 2
      UndAID_58_set.insert("7");
      all_values.push_back(UndAID_58_set);
      all_compo_names.insert("UndAID_58_set");

      Undly_58.add_element(UndAID_58);
    }
    {
      xml_element Stip_91{"Stip"};
      multiset<string> Stip_91_set;
      Stip_91.add_attribute("Typ", "CPP"); // 2
      Stip_91_set.insert("CPP");
      Stip_91.add_attribute("Val", "UnderlyingStipValue_t_1574770373"); // 2
      Stip_91_set.insert("UnderlyingStipValue_t_1574770373");
      all_values.push_back(Stip_91_set);
      all_compo_names.insert("Stip_91_set");

      Undly_58.add_element(Stip_91);
    }
    {
      xml_element Pty_257{"Pty"};
      multiset<string> Pty_257_set;
      Pty_257.add_attribute("ID", "UnderlyingInstrumentPartyID_t_416884846"); // 2
      Pty_257_set.insert("UnderlyingInstrumentPartyID_t_416884846");
      Pty_257.add_attribute("Src", "C"); // 2
      Pty_257_set.insert("C");
      Pty_257.add_attribute("R", "55"); // 2
      Pty_257_set.insert("55");
      all_values.push_back(Pty_257_set);
      all_compo_names.insert("Pty_257_set");

      {
        xml_element Sub_257{"Sub"};
        multiset<string> Sub_257_set;
        Sub_257.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_34257157"); // 3
        Sub_257_set.insert("UnderlyingInstrumentPartySubID_t_34257157");
        Sub_257.add_attribute("Typ", "1"); // 3
        Sub_257_set.insert("1");
        all_values.push_back(Sub_257_set);
        all_compo_names.insert("Sub_257_set");

        Pty_257.add_element(Sub_257);
      }
      Undly_58.add_element(Pty_257);
    }
    elt.add_element(Undly_58);
  } // end Undly
  { // Undly
    xml_element Undly_59{"Undly"};
    multiset<string> Undly_59_set;
    Undly_59.add_attribute("Sym", "UnderlyingSymbol_t_976741985"); // 1
    Undly_59_set.insert("UnderlyingSymbol_t_976741985");
    Undly_59.add_attribute("Sfx", "WI"); // 1
    Undly_59_set.insert("WI");
    Undly_59.add_attribute("ID", "UnderlyingSecurityID_t_2069377866"); // 1
    Undly_59_set.insert("UnderlyingSecurityID_t_2069377866");
    Undly_59.add_attribute("Src", "7"); // 1
    Undly_59_set.insert("7");
    Undly_59.add_attribute("Prod", "8"); // 1
    Undly_59_set.insert("8");
    Undly_59.add_attribute("CFI", "UnderlyingCFICode_t_1420066494"); // 1
    Undly_59_set.insert("UnderlyingCFICode_t_1420066494");
    Undly_59.add_attribute("SecTyp", "WITHDRN"); // 1
    Undly_59_set.insert("WITHDRN");
    Undly_59.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_538122121"); // 1
    Undly_59_set.insert("UnderlyingSecuritySubType_t_538122121");
    Undly_59.add_attribute("MMY", "1271694510"); // 1
    Undly_59_set.insert("1271694510");
    Undly_59.add_attribute("Mat", "UnderlyingMaturityDate_t_2087847980"); // 1
    Undly_59_set.insert("UnderlyingMaturityDate_t_2087847980");
    Undly_59.add_attribute("MatTm", "2006666903"); // 1
    Undly_59_set.insert("2006666903");
    Undly_59.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_999990652"); // 1
    Undly_59_set.insert("UnderlyingCouponPaymentDate_t_999990652");
    Undly_59.add_attribute("RestrctTyp", "MM"); // 1
    Undly_59_set.insert("MM");
    Undly_59.add_attribute("Snrty", "SD"); // 1
    Undly_59_set.insert("SD");
    Undly_59.add_attribute("NotlPctOut", "4105158.570000"); // 1
    Undly_59_set.insert("4105158.570000");
    Undly_59.add_attribute("OrigNotlPctOut", "13086008.660000"); // 1
    Undly_59_set.insert("13086008.660000");
    Undly_59.add_attribute("AttchPnt", "11519434.130000"); // 1
    Undly_59_set.insert("11519434.130000");
    Undly_59.add_attribute("DetchPnt", "5369082.810000"); // 1
    Undly_59_set.insert("5369082.810000");
    Undly_59.add_attribute("Issued", "UnderlyingIssueDate_t_1151464756"); // 1
    Undly_59_set.insert("UnderlyingIssueDate_t_1151464756");
    Undly_59.add_attribute("RepoCollSecTyp", "1555529188"); // 1
    Undly_59_set.insert("1555529188");
    Undly_59.add_attribute("RepoTrm", "1709957591"); // 1
    Undly_59_set.insert("1709957591");
    Undly_59.add_attribute("RepoRt", "9252051.250000"); // 1
    Undly_59_set.insert("9252051.250000");
    Undly_59.add_attribute("Fctr", "12645976.800000"); // 1
    Undly_59_set.insert("12645976.800000");
    Undly_59.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1827657993"); // 1
    Undly_59_set.insert("UnderlyingCreditRating_t_1827657993");
    Undly_59.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1579786971"); // 1
    Undly_59_set.insert("UnderlyingInstrRegistry_t_1579786971");
    Undly_59.add_attribute("Ctry", "691884405"); // 1
    Undly_59_set.insert("691884405");
    Undly_59.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_97059191"); // 1
    Undly_59_set.insert("UnderlyingStateOrProvinceOfIssue_t_97059191");
    Undly_59.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1047689232"); // 1
    Undly_59_set.insert("UnderlyingLocaleOfIssue_t_1047689232");
    Undly_59.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1029390745"); // 1
    Undly_59_set.insert("UnderlyingRedemptionDate_t_1029390745");
    Undly_59.add_attribute("StrkPx", "1313163.480000"); // 1
    Undly_59_set.insert("1313163.480000");
    Undly_59.add_attribute("StrkCcy", "EUR"); // 1
    Undly_59_set.insert("EUR");
    Undly_59.add_attribute("OptA", "1027460154"); // 1
    Undly_59_set.insert("1027460154");
    Undly_59.add_attribute("Mult", "11479030.430000"); // 1
    Undly_59_set.insert("11479030.430000");
    Undly_59.add_attribute("MultTyp", "2"); // 1
    Undly_59_set.insert("2");
    Undly_59.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_59_set.insert("1");
    Undly_59.add_attribute("UOM", "tn"); // 1
    Undly_59_set.insert("tn");
    Undly_59.add_attribute("UOMQty", "13850469.000000"); // 1
    Undly_59_set.insert("13850469.000000");
    Undly_59.add_attribute("PxUOM", "Bcf"); // 1
    Undly_59_set.insert("Bcf");
    Undly_59.add_attribute("PxUOMQty", "16921803.990000"); // 1
    Undly_59_set.insert("16921803.990000");
    Undly_59.add_attribute("TmUnit", "Mo"); // 1
    Undly_59_set.insert("Mo");
    Undly_59.add_attribute("ExerStyle", "2"); // 1
    Undly_59_set.insert("2");
    Undly_59.add_attribute("CpnRt", "5446874.030000"); // 1
    Undly_59_set.insert("5446874.030000");
    Undly_59.add_attribute("Exch", "UnderlyingSecurityExchange_t_596781583"); // 1
    Undly_59_set.insert("UnderlyingSecurityExchange_t_596781583");
    Undly_59.add_attribute("Issr", "UnderlyingIssuer_t_1510586072"); // 1
    Undly_59_set.insert("UnderlyingIssuer_t_1510586072");
    Undly_59.add_attribute("EncUndIssrLen", "955203261"); // 1
    Undly_59_set.insert("955203261");
    Undly_59.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1905382449"); // 1
    Undly_59_set.insert("EncodedUnderlyingIssuer_t_1905382449");
    Undly_59.add_attribute("Desc", "UnderlyingSecurityDesc_t_515045838"); // 1
    Undly_59_set.insert("UnderlyingSecurityDesc_t_515045838");
    Undly_59.add_attribute("EncUndSecDescLen", "1492111542"); // 1
    Undly_59_set.insert("1492111542");
    Undly_59.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_909363557"); // 1
    Undly_59_set.insert("EncodedUnderlyingSecurityDesc_t_909363557");
    Undly_59.add_attribute("CPPgm", "UnderlyingCPProgram_t_2070575026"); // 1
    Undly_59_set.insert("UnderlyingCPProgram_t_2070575026");
    Undly_59.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1054585486"); // 1
    Undly_59_set.insert("UnderlyingCPRegType_t_1054585486");
    Undly_59.add_attribute("AllocPct", "18345686.820000"); // 1
    Undly_59_set.insert("18345686.820000");
    Undly_59.add_attribute("Ccy", "CAN"); // 1
    Undly_59_set.insert("CAN");
    Undly_59.add_attribute("Qty", "12668720.050000"); // 1
    Undly_59_set.insert("12668720.050000");
    Undly_59.add_attribute("SettlTyp", "2"); // 1
    Undly_59_set.insert("2");
    Undly_59.add_attribute("CashAmt", "UnderlyingCashAmount_t_831819023"); // 1
    Undly_59_set.insert("UnderlyingCashAmount_t_831819023");
    Undly_59.add_attribute("CashTyp", "FIXED"); // 1
    Undly_59_set.insert("FIXED");
    Undly_59.add_attribute("Px", "7614805.620000"); // 1
    Undly_59_set.insert("7614805.620000");
    Undly_59.add_attribute("DirtPx", "9631353.710000"); // 1
    Undly_59_set.insert("9631353.710000");
    Undly_59.add_attribute("EndPx", "13930864.140000"); // 1
    Undly_59_set.insert("13930864.140000");
    Undly_59.add_attribute("StartVal", "UnderlyingStartValue_t_620129645"); // 1
    Undly_59_set.insert("UnderlyingStartValue_t_620129645");
    Undly_59.add_attribute("CurVal", "UnderlyingCurrentValue_t_1990595525"); // 1
    Undly_59_set.insert("UnderlyingCurrentValue_t_1990595525");
    Undly_59.add_attribute("EndVal", "UnderlyingEndValue_t_393505809"); // 1
    Undly_59_set.insert("UnderlyingEndValue_t_393505809");
    Undly_59.add_attribute("AdjQty", "16356921.400000"); // 1
    Undly_59_set.insert("16356921.400000");
    Undly_59.add_attribute("FxRate", "18015049.290000"); // 1
    Undly_59_set.insert("18015049.290000");
    Undly_59.add_attribute("FxRateCalc", "D"); // 1
    Undly_59_set.insert("D");
    Undly_59.add_attribute("CapValu", "UnderlyingCapValue_t_873255392"); // 1
    Undly_59_set.insert("UnderlyingCapValue_t_873255392");
    Undly_59.add_attribute("SetMeth", "UnderlyingSettlMethod_t_3052805"); // 1
    Undly_59_set.insert("UnderlyingSettlMethod_t_3052805");
    Undly_59.add_attribute("PutCall", "358688450"); // 1
    Undly_59_set.insert("358688450");
    all_values.push_back(Undly_59_set);
    all_compo_names.insert("Undly_59_set");

    {
      xml_element UndAID_59{"UndAID"};
      multiset<string> UndAID_59_set;
      UndAID_59.add_attribute("AltID", "UnderlyingSecurityAltID_t_51182977"); // 2
      UndAID_59_set.insert("UnderlyingSecurityAltID_t_51182977");
      UndAID_59.add_attribute("AltIDSrc", "2"); // 2
      UndAID_59_set.insert("2");
      all_values.push_back(UndAID_59_set);
      all_compo_names.insert("UndAID_59_set");

      Undly_59.add_element(UndAID_59);
    }
    {
      xml_element Stip_92{"Stip"};
      multiset<string> Stip_92_set;
      Stip_92.add_attribute("Typ", "INSURED"); // 2
      Stip_92_set.insert("INSURED");
      Stip_92.add_attribute("Val", "UnderlyingStipValue_t_647964560"); // 2
      Stip_92_set.insert("UnderlyingStipValue_t_647964560");
      all_values.push_back(Stip_92_set);
      all_compo_names.insert("Stip_92_set");

      Undly_59.add_element(Stip_92);
    }
    {
      xml_element Pty_258{"Pty"};
      multiset<string> Pty_258_set;
      Pty_258.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1721853658"); // 2
      Pty_258_set.insert("UnderlyingInstrumentPartyID_t_1721853658");
      Pty_258.add_attribute("Src", "6"); // 2
      Pty_258_set.insert("6");
      Pty_258.add_attribute("R", "39"); // 2
      Pty_258_set.insert("39");
      all_values.push_back(Pty_258_set);
      all_compo_names.insert("Pty_258_set");

      {
        xml_element Sub_258{"Sub"};
        multiset<string> Sub_258_set;
        Sub_258.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_89415848"); // 3
        Sub_258_set.insert("UnderlyingInstrumentPartySubID_t_89415848");
        Sub_258.add_attribute("Typ", "23"); // 3
        Sub_258_set.insert("23");
        all_values.push_back(Sub_258_set);
        all_compo_names.insert("Sub_258_set");

        Pty_258.add_element(Sub_258);
      }
      Undly_59.add_element(Pty_258);
    }
    elt.add_element(Undly_59);
  } // end Undly
  { // Undly
    xml_element Undly_60{"Undly"};
    multiset<string> Undly_60_set;
    Undly_60.add_attribute("Sym", "UnderlyingSymbol_t_1315226919"); // 1
    Undly_60_set.insert("UnderlyingSymbol_t_1315226919");
    Undly_60.add_attribute("Sfx", "CD"); // 1
    Undly_60_set.insert("CD");
    Undly_60.add_attribute("ID", "UnderlyingSecurityID_t_110308847"); // 1
    Undly_60_set.insert("UnderlyingSecurityID_t_110308847");
    Undly_60.add_attribute("Src", "6"); // 1
    Undly_60_set.insert("6");
    Undly_60.add_attribute("Prod", "11"); // 1
    Undly_60_set.insert("11");
    Undly_60.add_attribute("CFI", "UnderlyingCFICode_t_845068679"); // 1
    Undly_60_set.insert("UnderlyingCFICode_t_845068679");
    Undly_60.add_attribute("SecTyp", "SPCLT"); // 1
    Undly_60_set.insert("SPCLT");
    Undly_60.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_932286102"); // 1
    Undly_60_set.insert("UnderlyingSecuritySubType_t_932286102");
    Undly_60.add_attribute("MMY", "1676887702"); // 1
    Undly_60_set.insert("1676887702");
    Undly_60.add_attribute("Mat", "UnderlyingMaturityDate_t_288777901"); // 1
    Undly_60_set.insert("UnderlyingMaturityDate_t_288777901");
    Undly_60.add_attribute("MatTm", "1693766664"); // 1
    Undly_60_set.insert("1693766664");
    Undly_60.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_492539425"); // 1
    Undly_60_set.insert("UnderlyingCouponPaymentDate_t_492539425");
    Undly_60.add_attribute("RestrctTyp", "XR"); // 1
    Undly_60_set.insert("XR");
    Undly_60.add_attribute("Snrty", "SD"); // 1
    Undly_60_set.insert("SD");
    Undly_60.add_attribute("NotlPctOut", "3356513.030000"); // 1
    Undly_60_set.insert("3356513.030000");
    Undly_60.add_attribute("OrigNotlPctOut", "20753701.250000"); // 1
    Undly_60_set.insert("20753701.250000");
    Undly_60.add_attribute("AttchPnt", "18021048.010000"); // 1
    Undly_60_set.insert("18021048.010000");
    Undly_60.add_attribute("DetchPnt", "21371562.320000"); // 1
    Undly_60_set.insert("21371562.320000");
    Undly_60.add_attribute("Issued", "UnderlyingIssueDate_t_741878176"); // 1
    Undly_60_set.insert("UnderlyingIssueDate_t_741878176");
    Undly_60.add_attribute("RepoCollSecTyp", "527876546"); // 1
    Undly_60_set.insert("527876546");
    Undly_60.add_attribute("RepoTrm", "2140209037"); // 1
    Undly_60_set.insert("2140209037");
    Undly_60.add_attribute("RepoRt", "11005666.260000"); // 1
    Undly_60_set.insert("11005666.260000");
    Undly_60.add_attribute("Fctr", "5790595.230000"); // 1
    Undly_60_set.insert("5790595.230000");
    Undly_60.add_attribute("CrdRtg", "UnderlyingCreditRating_t_203992975"); // 1
    Undly_60_set.insert("UnderlyingCreditRating_t_203992975");
    Undly_60.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2003942480"); // 1
    Undly_60_set.insert("UnderlyingInstrRegistry_t_2003942480");
    Undly_60.add_attribute("Ctry", "1227024083"); // 1
    Undly_60_set.insert("1227024083");
    Undly_60.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1925846633"); // 1
    Undly_60_set.insert("UnderlyingStateOrProvinceOfIssue_t_1925846633");
    Undly_60.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1715037947"); // 1
    Undly_60_set.insert("UnderlyingLocaleOfIssue_t_1715037947");
    Undly_60.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1632887444"); // 1
    Undly_60_set.insert("UnderlyingRedemptionDate_t_1632887444");
    Undly_60.add_attribute("StrkPx", "20152624.810000"); // 1
    Undly_60_set.insert("20152624.810000");
    Undly_60.add_attribute("StrkCcy", "CHF"); // 1
    Undly_60_set.insert("CHF");
    Undly_60.add_attribute("OptA", "2027769707"); // 1
    Undly_60_set.insert("2027769707");
    Undly_60.add_attribute("Mult", "8810701.560000"); // 1
    Undly_60_set.insert("8810701.560000");
    Undly_60.add_attribute("MultTyp", "2"); // 1
    Undly_60_set.insert("2");
    Undly_60.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_60_set.insert("0");
    Undly_60.add_attribute("UOM", "tn"); // 1
    Undly_60_set.insert("tn");
    Undly_60.add_attribute("UOMQty", "19246429.800000"); // 1
    Undly_60_set.insert("19246429.800000");
    Undly_60.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_60_set.insert("MMBtu");
    Undly_60.add_attribute("PxUOMQty", "12555428.890000"); // 1
    Undly_60_set.insert("12555428.890000");
    Undly_60.add_attribute("TmUnit", "Mo"); // 1
    Undly_60_set.insert("Mo");
    Undly_60.add_attribute("ExerStyle", "0"); // 1
    Undly_60_set.insert("0");
    Undly_60.add_attribute("CpnRt", "17480823.150000"); // 1
    Undly_60_set.insert("17480823.150000");
    Undly_60.add_attribute("Exch", "UnderlyingSecurityExchange_t_1747801548"); // 1
    Undly_60_set.insert("UnderlyingSecurityExchange_t_1747801548");
    Undly_60.add_attribute("Issr", "UnderlyingIssuer_t_1725464124"); // 1
    Undly_60_set.insert("UnderlyingIssuer_t_1725464124");
    Undly_60.add_attribute("EncUndIssrLen", "2083733618"); // 1
    Undly_60_set.insert("2083733618");
    Undly_60.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1675688025"); // 1
    Undly_60_set.insert("EncodedUnderlyingIssuer_t_1675688025");
    Undly_60.add_attribute("Desc", "UnderlyingSecurityDesc_t_1380085277"); // 1
    Undly_60_set.insert("UnderlyingSecurityDesc_t_1380085277");
    Undly_60.add_attribute("EncUndSecDescLen", "2073406202"); // 1
    Undly_60_set.insert("2073406202");
    Undly_60.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_270082553"); // 1
    Undly_60_set.insert("EncodedUnderlyingSecurityDesc_t_270082553");
    Undly_60.add_attribute("CPPgm", "UnderlyingCPProgram_t_1907961823"); // 1
    Undly_60_set.insert("UnderlyingCPProgram_t_1907961823");
    Undly_60.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2066131591"); // 1
    Undly_60_set.insert("UnderlyingCPRegType_t_2066131591");
    Undly_60.add_attribute("AllocPct", "13706491.800000"); // 1
    Undly_60_set.insert("13706491.800000");
    Undly_60.add_attribute("Ccy", "USD"); // 1
    Undly_60_set.insert("USD");
    Undly_60.add_attribute("Qty", "12271080.120000"); // 1
    Undly_60_set.insert("12271080.120000");
    Undly_60.add_attribute("SettlTyp", "4"); // 1
    Undly_60_set.insert("4");
    Undly_60.add_attribute("CashAmt", "UnderlyingCashAmount_t_2048487551"); // 1
    Undly_60_set.insert("UnderlyingCashAmount_t_2048487551");
    Undly_60.add_attribute("CashTyp", "FIXED"); // 1
    Undly_60_set.insert("FIXED");
    Undly_60.add_attribute("Px", "10519655.780000"); // 1
    Undly_60_set.insert("10519655.780000");
    Undly_60.add_attribute("DirtPx", "19162663.840000"); // 1
    Undly_60_set.insert("19162663.840000");
    Undly_60.add_attribute("EndPx", "15654236.210000"); // 1
    Undly_60_set.insert("15654236.210000");
    Undly_60.add_attribute("StartVal", "UnderlyingStartValue_t_1852596293"); // 1
    Undly_60_set.insert("UnderlyingStartValue_t_1852596293");
    Undly_60.add_attribute("CurVal", "UnderlyingCurrentValue_t_1796552444"); // 1
    Undly_60_set.insert("UnderlyingCurrentValue_t_1796552444");
    Undly_60.add_attribute("EndVal", "UnderlyingEndValue_t_299010129"); // 1
    Undly_60_set.insert("UnderlyingEndValue_t_299010129");
    Undly_60.add_attribute("AdjQty", "15080553.140000"); // 1
    Undly_60_set.insert("15080553.140000");
    Undly_60.add_attribute("FxRate", "7295511.410000"); // 1
    Undly_60_set.insert("7295511.410000");
    Undly_60.add_attribute("FxRateCalc", "D"); // 1
    Undly_60_set.insert("D");
    Undly_60.add_attribute("CapValu", "UnderlyingCapValue_t_1285214646"); // 1
    Undly_60_set.insert("UnderlyingCapValue_t_1285214646");
    Undly_60.add_attribute("SetMeth", "UnderlyingSettlMethod_t_594835940"); // 1
    Undly_60_set.insert("UnderlyingSettlMethod_t_594835940");
    Undly_60.add_attribute("PutCall", "1133208206"); // 1
    Undly_60_set.insert("1133208206");
    all_values.push_back(Undly_60_set);
    all_compo_names.insert("Undly_60_set");

    {
      xml_element UndAID_60{"UndAID"};
      multiset<string> UndAID_60_set;
      UndAID_60.add_attribute("AltID", "UnderlyingSecurityAltID_t_1351151879"); // 2
      UndAID_60_set.insert("UnderlyingSecurityAltID_t_1351151879");
      UndAID_60.add_attribute("AltIDSrc", "I"); // 2
      UndAID_60_set.insert("I");
      all_values.push_back(UndAID_60_set);
      all_compo_names.insert("UndAID_60_set");

      Undly_60.add_element(UndAID_60);
    }
    {
      xml_element Stip_93{"Stip"};
      multiset<string> Stip_93_set;
      Stip_93.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_93_set.insert("MAXORDQTY");
      Stip_93.add_attribute("Val", "UnderlyingStipValue_t_951469780"); // 2
      Stip_93_set.insert("UnderlyingStipValue_t_951469780");
      all_values.push_back(Stip_93_set);
      all_compo_names.insert("Stip_93_set");

      Undly_60.add_element(Stip_93);
    }
    {
      xml_element Pty_259{"Pty"};
      multiset<string> Pty_259_set;
      Pty_259.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1731867879"); // 2
      Pty_259_set.insert("UnderlyingInstrumentPartyID_t_1731867879");
      Pty_259.add_attribute("Src", "4"); // 2
      Pty_259_set.insert("4");
      Pty_259.add_attribute("R", "56"); // 2
      Pty_259_set.insert("56");
      all_values.push_back(Pty_259_set);
      all_compo_names.insert("Pty_259_set");

      {
        xml_element Sub_259{"Sub"};
        multiset<string> Sub_259_set;
        Sub_259.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_964469508"); // 3
        Sub_259_set.insert("UnderlyingInstrumentPartySubID_t_964469508");
        Sub_259.add_attribute("Typ", "8"); // 3
        Sub_259_set.insert("8");
        all_values.push_back(Sub_259_set);
        all_compo_names.insert("Sub_259_set");

        Pty_259.add_element(Sub_259);
      }
      Undly_60.add_element(Pty_259);
    }
    elt.add_element(Undly_60);
  } // end Undly
  { // Stip
    xml_element Stip_94{"Stip"};
    multiset<string> Stip_94_set;
    Stip_94.add_attribute("Typ", "BGNCON"); // 1
    Stip_94_set.insert("BGNCON");
    Stip_94.add_attribute("Val", "StipulationValue_t_514627341"); // 1
    Stip_94_set.insert("StipulationValue_t_514627341");
    all_values.push_back(Stip_94_set);
    all_compo_names.insert("Stip_94_set");

    elt.add_element(Stip_94);
  } // end Stip
  { // Stip
    xml_element Stip_95{"Stip"};
    multiset<string> Stip_95_set;
    Stip_95.add_attribute("Typ", "SUBSLEFT"); // 1
    Stip_95_set.insert("SUBSLEFT");
    Stip_95.add_attribute("Val", "StipulationValue_t_1064485382"); // 1
    Stip_95_set.insert("StipulationValue_t_1064485382");
    all_values.push_back(Stip_95_set);
    all_compo_names.insert("Stip_95_set");

    elt.add_element(Stip_95);
  } // end Stip
  { // Stip
    xml_element Stip_96{"Stip"};
    multiset<string> Stip_96_set;
    Stip_96.add_attribute("Typ", "LOT"); // 1
    Stip_96_set.insert("LOT");
    Stip_96.add_attribute("Val", "StipulationValue_t_1200030255"); // 1
    Stip_96_set.insert("StipulationValue_t_1200030255");
    all_values.push_back(Stip_96_set);
    all_compo_names.insert("Stip_96_set");

    elt.add_element(Stip_96);
  } // end Stip
  { // OrdQty
    xml_element OrdQty_16{"OrdQty"};
    multiset<string> OrdQty_16_set;
    OrdQty_16.add_attribute("Qty", "4835635.160000"); // 1
    OrdQty_16_set.insert("4835635.160000");
    OrdQty_16.add_attribute("Cash", "5382721.630000"); // 1
    OrdQty_16_set.insert("5382721.630000");
    OrdQty_16.add_attribute("Pct", "19946925.670000"); // 1
    OrdQty_16_set.insert("19946925.670000");
    OrdQty_16.add_attribute("RndDir", "1"); // 1
    OrdQty_16_set.insert("1");
    OrdQty_16.add_attribute("RndMod", "3070548.990000"); // 1
    OrdQty_16_set.insert("3070548.990000");
    all_values.push_back(OrdQty_16_set);
    all_compo_names.insert("OrdQty_16_set");

    elt.add_element(OrdQty_16);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_6{"TrgrInstr"};
    multiset<string> TrgrInstr_6_set;
    TrgrInstr_6.add_attribute("TrgrTyp", "1"); // 1
    TrgrInstr_6_set.insert("1");
    TrgrInstr_6.add_attribute("TrgrActn", "2"); // 1
    TrgrInstr_6_set.insert("2");
    TrgrInstr_6.add_attribute("TrgrPx", "21036073.430000"); // 1
    TrgrInstr_6_set.insert("21036073.430000");
    TrgrInstr_6.add_attribute("TrgrSym", "TriggerSymbol_t_1711642670"); // 1
    TrgrInstr_6_set.insert("TriggerSymbol_t_1711642670");
    TrgrInstr_6.add_attribute("TrgrSecID", "TriggerSecurityID_t_601213406"); // 1
    TrgrInstr_6_set.insert("TriggerSecurityID_t_601213406");
    TrgrInstr_6.add_attribute("TrgrSecIDSrc", "1"); // 1
    TrgrInstr_6_set.insert("1");
    TrgrInstr_6.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1589307987"); // 1
    TrgrInstr_6_set.insert("TriggerSecurityDesc_t_1589307987");
    TrgrInstr_6.add_attribute("TrgrPxTyp", "3"); // 1
    TrgrInstr_6_set.insert("3");
    TrgrInstr_6.add_attribute("TrgrPxTypScp", "0"); // 1
    TrgrInstr_6_set.insert("0");
    TrgrInstr_6.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_6_set.insert("D");
    TrgrInstr_6.add_attribute("TrgrNewPx", "10900962.840000"); // 1
    TrgrInstr_6_set.insert("10900962.840000");
    TrgrInstr_6.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_6_set.insert("2");
    TrgrInstr_6.add_attribute("TrgrNewQty", "13088394.190000"); // 1
    TrgrInstr_6_set.insert("13088394.190000");
    TrgrInstr_6.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_2041566064"); // 1
    TrgrInstr_6_set.insert("TriggerTradingSessionID_t_2041566064");
    TrgrInstr_6.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_871298762"); // 1
    TrgrInstr_6_set.insert("TriggerTradingSessionSubID_t_871298762");
    all_values.push_back(TrgrInstr_6_set);
    all_compo_names.insert("TrgrInstr_6_set");

    elt.add_element(TrgrInstr_6);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_19{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_19_set;
    SprdBnchmkCurve_19.add_attribute("Spread", "19788962.620000"); // 1
    SprdBnchmkCurve_19_set.insert("19788962.620000");
    SprdBnchmkCurve_19.add_attribute("Ccy", "CHF"); // 1
    SprdBnchmkCurve_19_set.insert("CHF");
    SprdBnchmkCurve_19.add_attribute("Name", "EONIA"); // 1
    SprdBnchmkCurve_19_set.insert("EONIA");
    SprdBnchmkCurve_19.add_attribute("Point", "BenchmarkCurvePoint_t_1123513284"); // 1
    SprdBnchmkCurve_19_set.insert("BenchmarkCurvePoint_t_1123513284");
    SprdBnchmkCurve_19.add_attribute("Px", "4132323.070000"); // 1
    SprdBnchmkCurve_19_set.insert("4132323.070000");
    SprdBnchmkCurve_19.add_attribute("PxTyp", "8"); // 1
    SprdBnchmkCurve_19_set.insert("8");
    SprdBnchmkCurve_19.add_attribute("SecID", "BenchmarkSecurityID_t_1096435527"); // 1
    SprdBnchmkCurve_19_set.insert("BenchmarkSecurityID_t_1096435527");
    SprdBnchmkCurve_19.add_attribute("SecIDSrc", "L"); // 1
    SprdBnchmkCurve_19_set.insert("L");
    all_values.push_back(SprdBnchmkCurve_19_set);
    all_compo_names.insert("SprdBnchmkCurve_19_set");

    elt.add_element(SprdBnchmkCurve_19);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_14{"Yield"};
    multiset<string> Yield_14_set;
    Yield_14.add_attribute("Typ", "OPENAVG"); // 1
    Yield_14_set.insert("OPENAVG");
    Yield_14.add_attribute("Yld", "1489821.350000"); // 1
    Yield_14_set.insert("1489821.350000");
    Yield_14.add_attribute("CalcDt", "YieldCalcDate_t_1961281205"); // 1
    Yield_14_set.insert("YieldCalcDate_t_1961281205");
    Yield_14.add_attribute("RedDt", "YieldRedemptionDate_t_2117559775"); // 1
    Yield_14_set.insert("YieldRedemptionDate_t_2117559775");
    Yield_14.add_attribute("RedPx", "21436747.020000"); // 1
    Yield_14_set.insert("21436747.020000");
    Yield_14.add_attribute("RedPxTyp", "15"); // 1
    Yield_14_set.insert("15");
    all_values.push_back(Yield_14_set);
    all_compo_names.insert("Yield_14_set");

    elt.add_element(Yield_14);
  } // end Yield
  { // Comm
    xml_element Comm_23{"Comm"};
    multiset<string> Comm_23_set;
    Comm_23.add_attribute("Comm", "Commission_t_277131027"); // 1
    Comm_23_set.insert("Commission_t_277131027");
    Comm_23.add_attribute("CommTyp", "4"); // 1
    Comm_23_set.insert("4");
    Comm_23.add_attribute("Ccy", "USD"); // 1
    Comm_23_set.insert("USD");
    Comm_23.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_23_set.insert("Y");
    all_values.push_back(Comm_23_set);
    all_compo_names.insert("Comm_23_set");

    elt.add_element(Comm_23);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_6{"PegInstr"};
    multiset<string> PegInstr_6_set;
    PegInstr_6.add_attribute("OfstVal", "10436981.490000"); // 1
    PegInstr_6_set.insert("10436981.490000");
    PegInstr_6.add_attribute("PegPxTyp", "9"); // 1
    PegInstr_6_set.insert("9");
    PegInstr_6.add_attribute("MoveTyp", "0"); // 1
    PegInstr_6_set.insert("0");
    PegInstr_6.add_attribute("OfstTyp", "1"); // 1
    PegInstr_6_set.insert("1");
    PegInstr_6.add_attribute("LmtTyp", "2"); // 1
    PegInstr_6_set.insert("2");
    PegInstr_6.add_attribute("RndDir", "2"); // 1
    PegInstr_6_set.insert("2");
    PegInstr_6.add_attribute("Scope", "2"); // 1
    PegInstr_6_set.insert("2");
    PegInstr_6.add_attribute("PegSecurityIDSource", "G"); // 1
    PegInstr_6_set.insert("G");
    PegInstr_6.add_attribute("PegSecID", "PegSecurityID_t_151195272"); // 1
    PegInstr_6_set.insert("PegSecurityID_t_151195272");
    PegInstr_6.add_attribute("PgSymbl", "PegSymbol_t_1766821253"); // 1
    PegInstr_6_set.insert("PegSymbol_t_1766821253");
    PegInstr_6.add_attribute("PegSecDesc", "PegSecurityDesc_t_62686333"); // 1
    PegInstr_6_set.insert("PegSecurityDesc_t_62686333");
    all_values.push_back(PegInstr_6_set);
    all_compo_names.insert("PegInstr_6_set");

    elt.add_element(PegInstr_6);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_6{"DiscInstr"};
    multiset<string> DiscInstr_6_set;
    DiscInstr_6.add_attribute("DsctnInst", "7"); // 1
    DiscInstr_6_set.insert("7");
    DiscInstr_6.add_attribute("OfstValu", "21405778.270000"); // 1
    DiscInstr_6_set.insert("21405778.270000");
    DiscInstr_6.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_6_set.insert("0");
    DiscInstr_6.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_6_set.insert("3");
    DiscInstr_6.add_attribute("LimitTyp", "2"); // 1
    DiscInstr_6_set.insert("2");
    DiscInstr_6.add_attribute("RndDir", "2"); // 1
    DiscInstr_6_set.insert("2");
    DiscInstr_6.add_attribute("Scope", "1"); // 1
    DiscInstr_6_set.insert("1");
    all_values.push_back(DiscInstr_6_set);
    all_compo_names.insert("DiscInstr_6_set");

    elt.add_element(DiscInstr_6);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_15{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_15_set;
    StrtPrmGrp_15.add_attribute("StrtPrmNme", "StrategyParameterName_t_1641920953"); // 1
    StrtPrmGrp_15_set.insert("StrategyParameterName_t_1641920953");
    StrtPrmGrp_15.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_15_set.insert("23");
    StrtPrmGrp_15.add_attribute("StrtPrmVal", "StrategyParameterValue_t_214541478"); // 1
    StrtPrmGrp_15_set.insert("StrategyParameterValue_t_214541478");
    all_values.push_back(StrtPrmGrp_15_set);
    all_compo_names.insert("StrtPrmGrp_15_set");

    elt.add_element(StrtPrmGrp_15);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_16{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_16_set;
    StrtPrmGrp_16.add_attribute("StrtPrmNme", "StrategyParameterName_t_1455718510"); // 1
    StrtPrmGrp_16_set.insert("StrategyParameterName_t_1455718510");
    StrtPrmGrp_16.add_attribute("StrtPrmTyp", "4"); // 1
    StrtPrmGrp_16_set.insert("4");
    StrtPrmGrp_16.add_attribute("StrtPrmVal", "StrategyParameterValue_t_210732532"); // 1
    StrtPrmGrp_16_set.insert("StrategyParameterValue_t_210732532");
    all_values.push_back(StrtPrmGrp_16_set);
    all_compo_names.insert("StrtPrmGrp_16_set");

    elt.add_element(StrtPrmGrp_16);
  } // end StrtPrmGrp
  { // TrdRegTS
    xml_element TrdRegTS_12{"TrdRegTS"};
    multiset<string> TrdRegTS_12_set;
    TrdRegTS_12.add_attribute("TS", "TrdRegTimestamp_t_1031030371"); // 1
    TrdRegTS_12_set.insert("TrdRegTimestamp_t_1031030371");
    TrdRegTS_12.add_attribute("Typ", "1"); // 1
    TrdRegTS_12_set.insert("1");
    TrdRegTS_12.add_attribute("Src", "TrdRegTimestampOrigin_t_1100046257"); // 1
    TrdRegTS_12_set.insert("TrdRegTimestampOrigin_t_1100046257");
    TrdRegTS_12.add_attribute("DskTyp", "O"); // 1
    TrdRegTS_12_set.insert("O");
    TrdRegTS_12.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_12_set.insert("1");
    TrdRegTS_12.add_attribute("DskOrdHndlInst", "MQT"); // 1
    TrdRegTS_12_set.insert("MQT");
    all_values.push_back(TrdRegTS_12_set);
    all_compo_names.insert("TrdRegTS_12_set");

    elt.add_element(TrdRegTS_12);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_13{"TrdRegTS"};
    multiset<string> TrdRegTS_13_set;
    TrdRegTS_13.add_attribute("TS", "TrdRegTimestamp_t_35731004"); // 1
    TrdRegTS_13_set.insert("TrdRegTimestamp_t_35731004");
    TrdRegTS_13.add_attribute("Typ", "1"); // 1
    TrdRegTS_13_set.insert("1");
    TrdRegTS_13.add_attribute("Src", "TrdRegTimestampOrigin_t_778903311"); // 1
    TrdRegTS_13_set.insert("TrdRegTimestampOrigin_t_778903311");
    TrdRegTS_13.add_attribute("DskTyp", "IS"); // 1
    TrdRegTS_13_set.insert("IS");
    TrdRegTS_13.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_13_set.insert("1");
    TrdRegTS_13.add_attribute("DskOrdHndlInst", "FOK"); // 1
    TrdRegTS_13_set.insert("FOK");
    all_values.push_back(TrdRegTS_13_set);
    all_compo_names.insert("TrdRegTS_13_set");

    elt.add_element(TrdRegTS_13);
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
