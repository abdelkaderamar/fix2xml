#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderList.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderList_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdList" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderList_message_t_0;
  elt.add_attribute("ID", "ListID_t_2145256798"); // 0
  NewOrderList_message_t_0.insert("ListID_t_2145256798");
  elt.add_attribute("BidID", "BidID_t_420061994"); // 0
  NewOrderList_message_t_0.insert("BidID_t_420061994");
  elt.add_attribute("ClBidID", "ClientBidID_t_1926089987"); // 0
  NewOrderList_message_t_0.insert("ClientBidID_t_1926089987");
  elt.add_attribute("ProgRptReqs", "2"); // 0
  NewOrderList_message_t_0.insert("2");
  elt.add_attribute("BidTyp", "2"); // 0
  NewOrderList_message_t_0.insert("2");
  elt.add_attribute("ProgPeriodIntvl", "637055395"); // 0
  NewOrderList_message_t_0.insert("637055395");
  elt.add_attribute("CxllationRights", "N"); // 0
  NewOrderList_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "Y"); // 0
  NewOrderList_message_t_0.insert("Y");
  elt.add_attribute("RegistID", "RegistID_t_1348874478"); // 0
  NewOrderList_message_t_0.insert("RegistID_t_1348874478");
  elt.add_attribute("ListExecInstTyp", "1"); // 0
  NewOrderList_message_t_0.insert("1");
  elt.add_attribute("ListExecInst", "ListExecInst_t_509841160"); // 0
  NewOrderList_message_t_0.insert("ListExecInst_t_509841160");
  elt.add_attribute("ContingencyType", "3"); // 0
  NewOrderList_message_t_0.insert("3");
  elt.add_attribute("EncListExecInstLen", "817895329"); // 0
  NewOrderList_message_t_0.insert("817895329");
  elt.add_attribute("EncListExecInst", "EncodedListExecInst_t_1741716724"); // 0
  NewOrderList_message_t_0.insert("EncodedListExecInst_t_1741716724");
  elt.add_attribute("AOSPct", "14368321.660000"); // 0
  NewOrderList_message_t_0.insert("14368321.660000");
  elt.add_attribute("AOSValu", "AllowableOneSidednessValue_t_887973242"); // 0
  NewOrderList_message_t_0.insert("AllowableOneSidednessValue_t_887973242");
  elt.add_attribute("AOSCurr", "GBP"); // 0
  NewOrderList_message_t_0.insert("GBP");
  elt.add_attribute("TotNoOrds", "930060261"); // 0
  NewOrderList_message_t_0.insert("930060261");
  elt.add_attribute("LastFragment", "N"); // 0
  NewOrderList_message_t_0.insert("N");
  all_values.push_back(NewOrderList_message_t_0);
  all_compo_names.insert("NewOrderList_message_t");

  { // Hdr
    xml_element Hdr_52{"Hdr"};
    multiset<string> Hdr_52_set;
    Hdr_52.add_attribute("SeqNum", "335376325"); // 1
    Hdr_52_set.insert("335376325");
    Hdr_52.add_attribute("SID", "SenderCompID_t_1238276552"); // 1
    Hdr_52_set.insert("SenderCompID_t_1238276552");
    Hdr_52.add_attribute("TID", "TargetCompID_t_661268617"); // 1
    Hdr_52_set.insert("TargetCompID_t_661268617");
    Hdr_52.add_attribute("OBID", "OnBehalfOfCompID_t_772885647"); // 1
    Hdr_52_set.insert("OnBehalfOfCompID_t_772885647");
    Hdr_52.add_attribute("D2ID", "DeliverToCompID_t_659196907"); // 1
    Hdr_52_set.insert("DeliverToCompID_t_659196907");
    Hdr_52.add_attribute("SSub", "SenderSubID_t_1021013681"); // 1
    Hdr_52_set.insert("SenderSubID_t_1021013681");
    Hdr_52.add_attribute("SLoc", "SenderLocationID_t_225816971"); // 1
    Hdr_52_set.insert("SenderLocationID_t_225816971");
    Hdr_52.add_attribute("TSub", "TargetSubID_t_1621956037"); // 1
    Hdr_52_set.insert("TargetSubID_t_1621956037");
    Hdr_52.add_attribute("TLoc", "TargetLocationID_t_901639017"); // 1
    Hdr_52_set.insert("TargetLocationID_t_901639017");
    Hdr_52.add_attribute("OBSub", "OnBehalfOfSubID_t_1689755539"); // 1
    Hdr_52_set.insert("OnBehalfOfSubID_t_1689755539");
    Hdr_52.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1286367819"); // 1
    Hdr_52_set.insert("OnBehalfOfLocationID_t_1286367819");
    Hdr_52.add_attribute("D2Sub", "DeliverToSubID_t_899412168"); // 1
    Hdr_52_set.insert("DeliverToSubID_t_899412168");
    Hdr_52.add_attribute("D2Loc", "DeliverToLocationID_t_2109817533"); // 1
    Hdr_52_set.insert("DeliverToLocationID_t_2109817533");
    Hdr_52.add_attribute("PosDup", "N"); // 1
    Hdr_52_set.insert("N");
    Hdr_52.add_attribute("PosRsnd", "N"); // 1
    Hdr_52_set.insert("N");
    Hdr_52.add_attribute("Snt", "SendingTime_t_348470270"); // 1
    Hdr_52_set.insert("SendingTime_t_348470270");
    Hdr_52.add_attribute("OrigSnt", "OrigSendingTime_t_1702029553"); // 1
    Hdr_52_set.insert("OrigSendingTime_t_1702029553");
    Hdr_52.add_attribute("MsgEncd", "MessageEncoding_t_499868171"); // 1
    Hdr_52_set.insert("MessageEncoding_t_499868171");
    all_values.push_back(Hdr_52_set);
    all_compo_names.insert("Hdr_52_set");

    {
      xml_element Hop_52{"Hop"};
      multiset<string> Hop_52_set;
      Hop_52.add_attribute("ID", "HopCompID_t_1955583990"); // 2
      Hop_52_set.insert("HopCompID_t_1955583990");
      Hop_52.add_attribute("Ref", "903420383"); // 2
      Hop_52_set.insert("903420383");
      Hop_52.add_attribute("Snt", "HopSendingTime_t_1281226381"); // 2
      Hop_52_set.insert("HopSendingTime_t_1281226381");
      all_values.push_back(Hop_52_set);
      all_compo_names.insert("Hop_52_set");

      Hdr_52.add_element(Hop_52);
    }
    elt.add_element(Hdr_52);
  } // end Hdr
  { // Pty
    xml_element Pty_205{"Pty"};
    multiset<string> Pty_205_set;
    Pty_205.add_attribute("ID", "RootPartyID_t_1237890066"); // 1
    Pty_205_set.insert("RootPartyID_t_1237890066");
    Pty_205.add_attribute("Src", "F"); // 1
    Pty_205_set.insert("F");
    Pty_205.add_attribute("R", "68"); // 1
    Pty_205_set.insert("68");
    all_values.push_back(Pty_205_set);
    all_compo_names.insert("Pty_205_set");

    {
      xml_element Sub_205{"Sub"};
      multiset<string> Sub_205_set;
      Sub_205.add_attribute("ID", "RootPartySubID_t_527238584"); // 2
      Sub_205_set.insert("RootPartySubID_t_527238584");
      Sub_205.add_attribute("Typ", "28"); // 2
      Sub_205_set.insert("28");
      all_values.push_back(Sub_205_set);
      all_compo_names.insert("Sub_205_set");

      Pty_205.add_element(Sub_205);
    }
    elt.add_element(Pty_205);
  } // end Pty
  { // Pty
    xml_element Pty_206{"Pty"};
    multiset<string> Pty_206_set;
    Pty_206.add_attribute("ID", "RootPartyID_t_748744166"); // 1
    Pty_206_set.insert("RootPartyID_t_748744166");
    Pty_206.add_attribute("Src", "C"); // 1
    Pty_206_set.insert("C");
    Pty_206.add_attribute("R", "57"); // 1
    Pty_206_set.insert("57");
    all_values.push_back(Pty_206_set);
    all_compo_names.insert("Pty_206_set");

    {
      xml_element Sub_206{"Sub"};
      multiset<string> Sub_206_set;
      Sub_206.add_attribute("ID", "RootPartySubID_t_285748704"); // 2
      Sub_206_set.insert("RootPartySubID_t_285748704");
      Sub_206.add_attribute("Typ", "23"); // 2
      Sub_206_set.insert("23");
      all_values.push_back(Sub_206_set);
      all_compo_names.insert("Sub_206_set");

      Pty_206.add_element(Sub_206);
    }
    elt.add_element(Pty_206);
  } // end Pty
  { // Pty
    xml_element Pty_207{"Pty"};
    multiset<string> Pty_207_set;
    Pty_207.add_attribute("ID", "RootPartyID_t_860464470"); // 1
    Pty_207_set.insert("RootPartyID_t_860464470");
    Pty_207.add_attribute("Src", "9"); // 1
    Pty_207_set.insert("9");
    Pty_207.add_attribute("R", "75"); // 1
    Pty_207_set.insert("75");
    all_values.push_back(Pty_207_set);
    all_compo_names.insert("Pty_207_set");

    {
      xml_element Sub_207{"Sub"};
      multiset<string> Sub_207_set;
      Sub_207.add_attribute("ID", "RootPartySubID_t_1519661377"); // 2
      Sub_207_set.insert("RootPartySubID_t_1519661377");
      Sub_207.add_attribute("Typ", "13"); // 2
      Sub_207_set.insert("13");
      all_values.push_back(Sub_207_set);
      all_compo_names.insert("Sub_207_set");

      Pty_207.add_element(Sub_207);
    }
    elt.add_element(Pty_207);
  } // end Pty
  { // Ord
    xml_element Ord_1{"Ord"};
    multiset<string> Ord_1_set;
    Ord_1.add_attribute("ClOrdID", "ClOrdID_t_994133766"); // 1
    Ord_1_set.insert("ClOrdID_t_994133766");
    Ord_1.add_attribute("ClOrdID2", "SecondaryClOrdID_t_722186373"); // 1
    Ord_1_set.insert("SecondaryClOrdID_t_722186373");
    Ord_1.add_attribute("SeqNo", "364988988"); // 1
    Ord_1_set.insert("364988988");
    Ord_1.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_133017937"); // 1
    Ord_1_set.insert("ClOrdLinkID_t_133017937");
    Ord_1.add_attribute("SettlInstMode", "3"); // 1
    Ord_1_set.insert("3");
    Ord_1.add_attribute("OrignDt", "TradeOriginationDate_t_327322873"); // 1
    Ord_1_set.insert("TradeOriginationDate_t_327322873");
    Ord_1.add_attribute("TrdDt", "TradeDate_t_1197992095"); // 1
    Ord_1_set.insert("TradeDate_t_1197992095");
    Ord_1.add_attribute("Acct", "Account_t_719400875"); // 1
    Ord_1_set.insert("Account_t_719400875");
    Ord_1.add_attribute("AcctIDSrc", "5"); // 1
    Ord_1_set.insert("5");
    Ord_1.add_attribute("AcctTyp", "7"); // 1
    Ord_1_set.insert("7");
    Ord_1.add_attribute("DayBkngInst", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("BkngUnit", "2"); // 1
    Ord_1_set.insert("2");
    Ord_1.add_attribute("AllocID", "AllocID_t_1655958384"); // 1
    Ord_1_set.insert("AllocID_t_1655958384");
    Ord_1.add_attribute("PreallocMeth", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("SettlTyp", "4"); // 1
    Ord_1_set.insert("4");
    Ord_1.add_attribute("SettlDt", "SettlDate_t_746364802"); // 1
    Ord_1_set.insert("SettlDate_t_746364802");
    Ord_1.add_attribute("CshMgn", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("ClrFeeInd", "5"); // 1
    Ord_1_set.insert("5");
    Ord_1.add_attribute("HandlInst", "2"); // 1
    Ord_1_set.insert("2");
    Ord_1.add_attribute("ExecInst", "g"); // 1
    Ord_1_set.insert("g");
    Ord_1.add_attribute("MinQty", "14627537.320000"); // 1
    Ord_1_set.insert("14627537.320000");
    Ord_1.add_attribute("MtchInc", "7622415.400000"); // 1
    Ord_1_set.insert("7622415.400000");
    Ord_1.add_attribute("MxPxLvls", "766449064"); // 1
    Ord_1_set.insert("766449064");
    Ord_1.add_attribute("MaxFloor", "17485024.370000"); // 1
    Ord_1_set.insert("17485024.370000");
    Ord_1.add_attribute("ExDest", "ExDestination_t_586256018"); // 1
    Ord_1_set.insert("ExDestination_t_586256018");
    Ord_1.add_attribute("ExDestIDSrc", "G"); // 1
    Ord_1_set.insert("G");
    Ord_1.add_attribute("ProcCode", "0"); // 1
    Ord_1_set.insert("0");
    Ord_1.add_attribute("PrevClsPx", "11831561.430000"); // 1
    Ord_1_set.insert("11831561.430000");
    Ord_1.add_attribute("Side", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("SideValuInd", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("LocReqd", "N"); // 1
    Ord_1_set.insert("N");
    Ord_1.add_attribute("TxnTm", "TransactTime_t_1993225030"); // 1
    Ord_1_set.insert("TransactTime_t_1993225030");
    Ord_1.add_attribute("QtyTyp", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("OrdTyp", "L"); // 1
    Ord_1_set.insert("L");
    Ord_1.add_attribute("PxTyp", "5"); // 1
    Ord_1_set.insert("5");
    Ord_1.add_attribute("Px", "5648847.320000"); // 1
    Ord_1_set.insert("5648847.320000");
    Ord_1.add_attribute("PxPrtScp", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("StopPx", "11767514.150000"); // 1
    Ord_1_set.insert("11767514.150000");
    Ord_1.add_attribute("Ccy", "EUR"); // 1
    Ord_1_set.insert("EUR");
    Ord_1.add_attribute("ComplianceID", "ComplianceID_t_1929289416"); // 1
    Ord_1_set.insert("ComplianceID_t_1929289416");
    Ord_1.add_attribute("SolFlag", "Y"); // 1
    Ord_1_set.insert("Y");
    Ord_1.add_attribute("IOIID", "IOIID_t_1710388083"); // 1
    Ord_1_set.insert("IOIID_t_1710388083");
    Ord_1.add_attribute("QID", "QuoteID_t_1437764153"); // 1
    Ord_1_set.insert("QuoteID_t_1437764153");
    Ord_1.add_attribute("RefOrdID", "RefOrderID_t_709082784"); // 1
    Ord_1_set.insert("RefOrderID_t_709082784");
    Ord_1.add_attribute("RefOrdIDSrc", "3"); // 1
    Ord_1_set.insert("3");
    Ord_1.add_attribute("TmInForce", "7"); // 1
    Ord_1_set.insert("7");
    Ord_1.add_attribute("EfctvTm", "EffectiveTime_t_1013732626"); // 1
    Ord_1_set.insert("EffectiveTime_t_1013732626");
    Ord_1.add_attribute("ExpireDt", "ExpireDate_t_1078748990"); // 1
    Ord_1_set.insert("ExpireDate_t_1078748990");
    Ord_1.add_attribute("ExpireTm", "ExpireTime_t_1310248694"); // 1
    Ord_1_set.insert("ExpireTime_t_1310248694");
    Ord_1.add_attribute("GTBkngInst", "2"); // 1
    Ord_1_set.insert("2");
    Ord_1.add_attribute("Cpcty", "R"); // 1
    Ord_1_set.insert("R");
    Ord_1.add_attribute("Rstctions", "A"); // 1
    Ord_1_set.insert("A");
    Ord_1.add_attribute("PrTrdAnon", "false"); // 1
    Ord_1_set.insert("false");
    Ord_1.add_attribute("CustCpcty", "4"); // 1
    Ord_1_set.insert("4");
    Ord_1.add_attribute("ForexReq", "N"); // 1
    Ord_1_set.insert("N");
    Ord_1.add_attribute("SettlCcy", "USD"); // 1
    Ord_1_set.insert("USD");
    Ord_1.add_attribute("BkngTyp", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("Txt", "Text_t_1255480339"); // 1
    Ord_1_set.insert("Text_t_1255480339");
    Ord_1.add_attribute("EncTxtLen", "911657441"); // 1
    Ord_1_set.insert("911657441");
    Ord_1.add_attribute("EncTxt", "EncodedText_t_1552808340"); // 1
    Ord_1_set.insert("EncodedText_t_1552808340");
    Ord_1.add_attribute("SettlDt2", "SettlDate2_t_1101221722"); // 1
    Ord_1_set.insert("SettlDate2_t_1101221722");
    Ord_1.add_attribute("Qty2", "20024272.800000"); // 1
    Ord_1_set.insert("20024272.800000");
    Ord_1.add_attribute("Px2", "17761869.200000"); // 1
    Ord_1_set.insert("17761869.200000");
    Ord_1.add_attribute("PosEfct", "O"); // 1
    Ord_1_set.insert("O");
    Ord_1.add_attribute("Covered", "1"); // 1
    Ord_1_set.insert("1");
    Ord_1.add_attribute("MaxShow", "1794047.250000"); // 1
    Ord_1_set.insert("1794047.250000");
    Ord_1.add_attribute("TgtStrategy", "3"); // 1
    Ord_1_set.insert("3");
    Ord_1.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1704113972"); // 1
    Ord_1_set.insert("TargetStrategyParameters_t_1704113972");
    Ord_1.add_attribute("ParticipationRt", "14058993.230000"); // 1
    Ord_1_set.insert("14058993.230000");
    Ord_1.add_attribute("Designation", "Designation_t_2038538226"); // 1
    Ord_1_set.insert("Designation_t_2038538226");
    all_values.push_back(Ord_1_set);
    all_compo_names.insert("Ord_1_set");

    {
      xml_element Pty_208{"Pty"};
      multiset<string> Pty_208_set;
      Pty_208.add_attribute("ID", "PartyID_t_2060184978"); // 2
      Pty_208_set.insert("PartyID_t_2060184978");
      Pty_208.add_attribute("Src", "1"); // 2
      Pty_208_set.insert("1");
      Pty_208.add_attribute("R", "54"); // 2
      Pty_208_set.insert("54");
      all_values.push_back(Pty_208_set);
      all_compo_names.insert("Pty_208_set");

      {
        xml_element Sub_208{"Sub"};
        multiset<string> Sub_208_set;
        Sub_208.add_attribute("ID", "PartySubID_t_621784114"); // 3
        Sub_208_set.insert("PartySubID_t_621784114");
        Sub_208.add_attribute("Typ", "23"); // 3
        Sub_208_set.insert("23");
        all_values.push_back(Sub_208_set);
        all_compo_names.insert("Sub_208_set");

        Pty_208.add_element(Sub_208);
      }
      Ord_1.add_element(Pty_208);
    }
    {
      xml_element PreAll_8{"PreAll"};
      multiset<string> PreAll_8_set;
      PreAll_8.add_attribute("Acct", "AllocAccount_t_1365464038"); // 2
      PreAll_8_set.insert("AllocAccount_t_1365464038");
      PreAll_8.add_attribute("ActIDSrc", "3"); // 2
      PreAll_8_set.insert("3");
      PreAll_8.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_8_set.insert("CAN");
      PreAll_8.add_attribute("IndAllocID", "IndividualAllocID_t_1646026865"); // 2
      PreAll_8_set.insert("IndividualAllocID_t_1646026865");
      PreAll_8.add_attribute("Qty", "6588275.980000"); // 2
      PreAll_8_set.insert("6588275.980000");
      all_values.push_back(PreAll_8_set);
      all_compo_names.insert("PreAll_8_set");

      {
        xml_element Pty_209{"Pty"};
        multiset<string> Pty_209_set;
        Pty_209.add_attribute("ID", "NestedPartyID_t_453235671"); // 3
        Pty_209_set.insert("NestedPartyID_t_453235671");
        Pty_209.add_attribute("Src", "5"); // 3
        Pty_209_set.insert("5");
        Pty_209.add_attribute("R", "57"); // 3
        Pty_209_set.insert("57");
        all_values.push_back(Pty_209_set);
        all_compo_names.insert("Pty_209_set");

        {
          xml_element Sub_209{"Sub"};
          multiset<string> Sub_209_set;
          Sub_209.add_attribute("ID", "NestedPartySubID_t_964498276"); // 4
          Sub_209_set.insert("NestedPartySubID_t_964498276");
          Sub_209.add_attribute("Typ", "6"); // 4
          Sub_209_set.insert("6");
          all_values.push_back(Sub_209_set);
          all_compo_names.insert("Sub_209_set");

          Pty_209.add_element(Sub_209);
        }
        PreAll_8.add_element(Pty_209);
      }
      Ord_1.add_element(PreAll_8);
    }
    {
      xml_element DsplyInstr_4{"DsplyInstr"};
      multiset<string> DsplyInstr_4_set;
      DsplyInstr_4.add_attribute("DisplayQty", "11969394.360000"); // 2
      DsplyInstr_4_set.insert("11969394.360000");
      DsplyInstr_4.add_attribute("SecDspQty", "5114333.760000"); // 2
      DsplyInstr_4_set.insert("5114333.760000");
      DsplyInstr_4.add_attribute("DspWhn", "2"); // 2
      DsplyInstr_4_set.insert("2");
      DsplyInstr_4.add_attribute("DspMthd", "2"); // 2
      DsplyInstr_4_set.insert("2");
      DsplyInstr_4.add_attribute("DsplLwQty", "20642417.160000"); // 2
      DsplyInstr_4_set.insert("20642417.160000");
      DsplyInstr_4.add_attribute("DisplayHighQty", "7411098.950000"); // 2
      DsplyInstr_4_set.insert("7411098.950000");
      DsplyInstr_4.add_attribute("DspMinIncr", "19635405.100000"); // 2
      DsplyInstr_4_set.insert("19635405.100000");
      DsplyInstr_4.add_attribute("RfrshQty", "16929449.880000"); // 2
      DsplyInstr_4_set.insert("16929449.880000");
      all_values.push_back(DsplyInstr_4_set);
      all_compo_names.insert("DsplyInstr_4_set");

      Ord_1.add_element(DsplyInstr_4);
    }
    {
      xml_element TrdSes_6{"TrdSes"};
      multiset<string> TrdSes_6_set;
      TrdSes_6.add_attribute("SesID", "2"); // 2
      TrdSes_6_set.insert("2");
      TrdSes_6.add_attribute("SesSub", "5"); // 2
      TrdSes_6_set.insert("5");
      all_values.push_back(TrdSes_6_set);
      all_compo_names.insert("TrdSes_6_set");

      Ord_1.add_element(TrdSes_6);
    }
    {
      xml_element Instrmt_39{"Instrmt"};
      multiset<string> Instrmt_39_set;
      Instrmt_39.add_attribute("Sym", "Symbol_t_1872349713"); // 2
      Instrmt_39_set.insert("Symbol_t_1872349713");
      Instrmt_39.add_attribute("Sfx", "CD"); // 2
      Instrmt_39_set.insert("CD");
      Instrmt_39.add_attribute("ID", "SecurityID_t_1939999199"); // 2
      Instrmt_39_set.insert("SecurityID_t_1939999199");
      Instrmt_39.add_attribute("Src", "H"); // 2
      Instrmt_39_set.insert("H");
      Instrmt_39.add_attribute("Prod", "6"); // 2
      Instrmt_39_set.insert("6");
      Instrmt_39.add_attribute("ProdCmplx", "ProductComplex_t_1852700529"); // 2
      Instrmt_39_set.insert("ProductComplex_t_1852700529");
      Instrmt_39.add_attribute("SecGrp", "SecurityGroup_t_2099569147"); // 2
      Instrmt_39_set.insert("SecurityGroup_t_2099569147");
      Instrmt_39.add_attribute("CFI", "CFICode_t_1002729407"); // 2
      Instrmt_39_set.insert("CFICode_t_1002729407");
      Instrmt_39.add_attribute("SecTyp", "CTB"); // 2
      Instrmt_39_set.insert("CTB");
      Instrmt_39.add_attribute("SubTyp", "SecuritySubType_t_1285628681"); // 2
      Instrmt_39_set.insert("SecuritySubType_t_1285628681");
      Instrmt_39.add_attribute("MMY", "220709798"); // 2
      Instrmt_39_set.insert("220709798");
      Instrmt_39.add_attribute("MatDt", "MaturityDate_t_1962517736"); // 2
      Instrmt_39_set.insert("MaturityDate_t_1962517736");
      Instrmt_39.add_attribute("MatTm", "1550437205"); // 2
      Instrmt_39_set.insert("1550437205");
      Instrmt_39.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_748938883"); // 2
      Instrmt_39_set.insert("SettleOnOpenFlag_t_748938883");
      Instrmt_39.add_attribute("AsgnMeth", "1461060953"); // 2
      Instrmt_39_set.insert("1461060953");
      Instrmt_39.add_attribute("Status", "2"); // 2
      Instrmt_39_set.insert("2");
      Instrmt_39.add_attribute("CpnPmt", "CouponPaymentDate_t_1202174554"); // 2
      Instrmt_39_set.insert("CouponPaymentDate_t_1202174554");
      Instrmt_39.add_attribute("RestrctTyp", "XR"); // 2
      Instrmt_39_set.insert("XR");
      Instrmt_39.add_attribute("Snrty", "SR"); // 2
      Instrmt_39_set.insert("SR");
      Instrmt_39.add_attribute("NotlPctOut", "191891.820000"); // 2
      Instrmt_39_set.insert("191891.820000");
      Instrmt_39.add_attribute("OrigNotlPctOut", "1209711.930000"); // 2
      Instrmt_39_set.insert("1209711.930000");
      Instrmt_39.add_attribute("AttchPnt", "19125860.540000"); // 2
      Instrmt_39_set.insert("19125860.540000");
      Instrmt_39.add_attribute("DetchPnt", "5306225.580000"); // 2
      Instrmt_39_set.insert("5306225.580000");
      Instrmt_39.add_attribute("Issued", "IssueDate_t_1908343014"); // 2
      Instrmt_39_set.insert("IssueDate_t_1908343014");
      Instrmt_39.add_attribute("RepoCollSecTyp", "1873699283"); // 2
      Instrmt_39_set.insert("1873699283");
      Instrmt_39.add_attribute("RepoTrm", "447380626"); // 2
      Instrmt_39_set.insert("447380626");
      Instrmt_39.add_attribute("RepoRt", "5019692.610000"); // 2
      Instrmt_39_set.insert("5019692.610000");
      Instrmt_39.add_attribute("Fctr", "16897561.450000"); // 2
      Instrmt_39_set.insert("16897561.450000");
      Instrmt_39.add_attribute("CrdRtg", "CreditRating_t_2140325614"); // 2
      Instrmt_39_set.insert("CreditRating_t_2140325614");
      Instrmt_39.add_attribute("Rgstry", "InstrRegistry_t_175576550"); // 2
      Instrmt_39_set.insert("InstrRegistry_t_175576550");
      Instrmt_39.add_attribute("IssuCtry", "1925641372"); // 2
      Instrmt_39_set.insert("1925641372");
      Instrmt_39.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1865191680"); // 2
      Instrmt_39_set.insert("StateOrProvinceOfIssue_t_1865191680");
      Instrmt_39.add_attribute("Lcl", "LocaleOfIssue_t_2105916296"); // 2
      Instrmt_39_set.insert("LocaleOfIssue_t_2105916296");
      Instrmt_39.add_attribute("Redeem", "RedemptionDate_t_1718156924"); // 2
      Instrmt_39_set.insert("RedemptionDate_t_1718156924");
      Instrmt_39.add_attribute("StrkPx", "8484734.200000"); // 2
      Instrmt_39_set.insert("8484734.200000");
      Instrmt_39.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_39_set.insert("CHF");
      Instrmt_39.add_attribute("StrkMult", "8005589.190000"); // 2
      Instrmt_39_set.insert("8005589.190000");
      Instrmt_39.add_attribute("StrkValu", "6350727.320000"); // 2
      Instrmt_39_set.insert("6350727.320000");
      Instrmt_39.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_39_set.insert("2");
      Instrmt_39.add_attribute("StrkPxBndryMeth", "1"); // 2
      Instrmt_39_set.insert("1");
      Instrmt_39.add_attribute("StrkPxBndryPrcsn", "8557825.300000"); // 2
      Instrmt_39_set.insert("8557825.300000");
      Instrmt_39.add_attribute("PxDtrmnMeth", "3"); // 2
      Instrmt_39_set.insert("3");
      Instrmt_39.add_attribute("OptAt", "1489141157"); // 2
      Instrmt_39_set.insert("1489141157");
      Instrmt_39.add_attribute("Mult", "16047214.130000"); // 2
      Instrmt_39_set.insert("16047214.130000");
      Instrmt_39.add_attribute("MultTyp", "1"); // 2
      Instrmt_39_set.insert("1");
      Instrmt_39.add_attribute("FlowSchedTyp", "3"); // 2
      Instrmt_39_set.insert("3");
      Instrmt_39.add_attribute("MinPxIncr", "6594123.200000"); // 2
      Instrmt_39_set.insert("6594123.200000");
      Instrmt_39.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_468065907"); // 2
      Instrmt_39_set.insert("MinPriceIncrementAmount_t_468065907");
      Instrmt_39.add_attribute("UOM", "t"); // 2
      Instrmt_39_set.insert("t");
      Instrmt_39.add_attribute("UOMQty", "6786015.020000"); // 2
      Instrmt_39_set.insert("6786015.020000");
      Instrmt_39.add_attribute("PxUOM", "Bbl"); // 2
      Instrmt_39_set.insert("Bbl");
      Instrmt_39.add_attribute("PxUOMQty", "20316713.360000"); // 2
      Instrmt_39_set.insert("20316713.360000");
      Instrmt_39.add_attribute("SettlMeth", "P"); // 2
      Instrmt_39_set.insert("P");
      Instrmt_39.add_attribute("ExerStyle", "1"); // 2
      Instrmt_39_set.insert("1");
      Instrmt_39.add_attribute("OptPayoutTyp", "1"); // 2
      Instrmt_39_set.insert("1");
      Instrmt_39.add_attribute("OptPayAmt", "OptPayoutAmount_t_1656604687"); // 2
      Instrmt_39_set.insert("OptPayoutAmount_t_1656604687");
      Instrmt_39.add_attribute("PxQteMeth", "PCTPAR"); // 2
      Instrmt_39_set.insert("PCTPAR");
      Instrmt_39.add_attribute("ValMeth", "CDSD"); // 2
      Instrmt_39_set.insert("CDSD");
      Instrmt_39.add_attribute("ListMeth", "0"); // 2
      Instrmt_39_set.insert("0");
      Instrmt_39.add_attribute("CapPx", "10274422.770000"); // 2
      Instrmt_39_set.insert("10274422.770000");
      Instrmt_39.add_attribute("FlrPx", "10783171.940000"); // 2
      Instrmt_39_set.insert("10783171.940000");
      Instrmt_39.add_attribute("PutCall", "0"); // 2
      Instrmt_39_set.insert("0");
      Instrmt_39.add_attribute("FlexInd", "false"); // 2
      Instrmt_39_set.insert("false");
      Instrmt_39.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_39_set.insert("true");
      Instrmt_39.add_attribute("TmUnit", "Wk"); // 2
      Instrmt_39_set.insert("Wk");
      Instrmt_39.add_attribute("CpnRt", "6182182.500000"); // 2
      Instrmt_39_set.insert("6182182.500000");
      Instrmt_39.add_attribute("Exch", "SecurityExchange_t_2072364275"); // 2
      Instrmt_39_set.insert("SecurityExchange_t_2072364275");
      Instrmt_39.add_attribute("PosLmt", "868703378"); // 2
      Instrmt_39_set.insert("868703378");
      Instrmt_39.add_attribute("NTPosLmt", "1253290983"); // 2
      Instrmt_39_set.insert("1253290983");
      Instrmt_39.add_attribute("Issr", "Issuer_t_1675255429"); // 2
      Instrmt_39_set.insert("Issuer_t_1675255429");
      Instrmt_39.add_attribute("EncIssrLen", "807407330"); // 2
      Instrmt_39_set.insert("807407330");
      Instrmt_39.add_attribute("EncIssr", "EncodedIssuer_t_2109073513"); // 2
      Instrmt_39_set.insert("EncodedIssuer_t_2109073513");
      Instrmt_39.add_attribute("Desc", "SecurityDesc_t_1093180671"); // 2
      Instrmt_39_set.insert("SecurityDesc_t_1093180671");
      Instrmt_39.add_attribute("EncSecDescLen", "149064840"); // 2
      Instrmt_39_set.insert("149064840");
      Instrmt_39.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1566311279"); // 2
      Instrmt_39_set.insert("EncodedSecurityDesc_t_1566311279");
      Instrmt_39.add_attribute("Pool", "Pool_t_1972166866"); // 2
      Instrmt_39_set.insert("Pool_t_1972166866");
      Instrmt_39.add_attribute("CSetMo", "1699987153"); // 2
      Instrmt_39_set.insert("1699987153");
      Instrmt_39.add_attribute("CPPgm", "99"); // 2
      Instrmt_39_set.insert("99");
      Instrmt_39.add_attribute("CPRegT", "CPRegType_t_292749125"); // 2
      Instrmt_39_set.insert("CPRegType_t_292749125");
      Instrmt_39.add_attribute("Dated", "DatedDate_t_1819072435"); // 2
      Instrmt_39_set.insert("DatedDate_t_1819072435");
      Instrmt_39.add_attribute("IntAcrl", "InterestAccrualDate_t_756841453"); // 2
      Instrmt_39_set.insert("InterestAccrualDate_t_756841453");
      all_values.push_back(Instrmt_39_set);
      all_compo_names.insert("Instrmt_39_set");

      {
        xml_element AID_42{"AID"};
        multiset<string> AID_42_set;
        AID_42.add_attribute("AltID", "SecurityAltID_t_881786225"); // 3
        AID_42_set.insert("SecurityAltID_t_881786225");
        AID_42.add_attribute("AltIDSrc", "H"); // 3
        AID_42_set.insert("H");
        all_values.push_back(AID_42_set);
        all_compo_names.insert("AID_42_set");

        Instrmt_39.add_element(AID_42);
      }
      {
        xml_element SecXML_42{"SecXML"};
        multiset<string> SecXML_42_set;
        SecXML_42.add_attribute("Schema", "SecurityXMLSchema_t_1966065514"); // 3
        SecXML_42_set.insert("SecurityXMLSchema_t_1966065514");
        all_values.push_back(SecXML_42_set);
        all_compo_names.insert("SecXML_42_set");

        Instrmt_39.add_element(SecXML_42);
      }
      {
        xml_element Evnt_42{"Evnt"};
        multiset<string> Evnt_42_set;
        Evnt_42.add_attribute("EventTyp", "10"); // 3
        Evnt_42_set.insert("10");
        Evnt_42.add_attribute("Dt", "EventDate_t_1313663448"); // 3
        Evnt_42_set.insert("EventDate_t_1313663448");
        Evnt_42.add_attribute("Tm", "EventTime_t_1475186554"); // 3
        Evnt_42_set.insert("EventTime_t_1475186554");
        Evnt_42.add_attribute("Px", "20835484.180000"); // 3
        Evnt_42_set.insert("20835484.180000");
        Evnt_42.add_attribute("Txt", "EventText_t_466339269"); // 3
        Evnt_42_set.insert("EventText_t_466339269");
        all_values.push_back(Evnt_42_set);
        all_compo_names.insert("Evnt_42_set");

        Instrmt_39.add_element(Evnt_42);
      }
      {
        xml_element Pty_210{"Pty"};
        multiset<string> Pty_210_set;
        Pty_210.add_attribute("ID", "InstrumentPartyID_t_977149560"); // 3
        Pty_210_set.insert("InstrumentPartyID_t_977149560");
        Pty_210.add_attribute("Src", "6"); // 3
        Pty_210_set.insert("6");
        Pty_210.add_attribute("R", "8"); // 3
        Pty_210_set.insert("8");
        all_values.push_back(Pty_210_set);
        all_compo_names.insert("Pty_210_set");

        {
          xml_element Sub_210{"Sub"};
          multiset<string> Sub_210_set;
          Sub_210.add_attribute("ID", "InstrumentPartySubID_t_196820598"); // 4
          Sub_210_set.insert("InstrumentPartySubID_t_196820598");
          Sub_210.add_attribute("Typ", "1"); // 4
          Sub_210_set.insert("1");
          all_values.push_back(Sub_210_set);
          all_compo_names.insert("Sub_210_set");

          Pty_210.add_element(Sub_210);
        }
        Instrmt_39.add_element(Pty_210);
      }
      {
        xml_element CmplxEvnt_39{"CmplxEvnt"};
        multiset<string> CmplxEvnt_39_set;
        CmplxEvnt_39.add_attribute("Typ", "9"); // 3
        CmplxEvnt_39_set.insert("9");
        CmplxEvnt_39.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_264965056"); // 3
        CmplxEvnt_39_set.insert("ComplexOptPayoutAmount_t_264965056");
        CmplxEvnt_39.add_attribute("Px", "4201165.750000"); // 3
        CmplxEvnt_39_set.insert("4201165.750000");
        CmplxEvnt_39.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_39_set.insert("2");
        CmplxEvnt_39.add_attribute("PxBndryPrcsn", "11336684.340000"); // 3
        CmplxEvnt_39_set.insert("11336684.340000");
        CmplxEvnt_39.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_39_set.insert("2");
        CmplxEvnt_39.add_attribute("Cond", "1"); // 3
        CmplxEvnt_39_set.insert("1");
        all_values.push_back(CmplxEvnt_39_set);
        all_compo_names.insert("CmplxEvnt_39_set");

        {
          xml_element EvntDts_39{"EvntDts"};
          multiset<string> EvntDts_39_set;
          EvntDts_39.add_attribute("StartDt", "ComplexEventStartDate_t_1941075765"); // 4
          EvntDts_39_set.insert("ComplexEventStartDate_t_1941075765");
          EvntDts_39.add_attribute("EndDt", "ComplexEventEndDate_t_1634997424"); // 4
          EvntDts_39_set.insert("ComplexEventEndDate_t_1634997424");
          all_values.push_back(EvntDts_39_set);
          all_compo_names.insert("EvntDts_39_set");

          {
            xml_element EvntTms_39{"EvntTms"};
            multiset<string> EvntTms_39_set;
            EvntTms_39.add_attribute("StartTm", "591996365"); // 5
            EvntTms_39_set.insert("591996365");
            EvntTms_39.add_attribute("EndTm", "2090140605"); // 5
            EvntTms_39_set.insert("2090140605");
            all_values.push_back(EvntTms_39_set);
            all_compo_names.insert("EvntTms_39_set");

            EvntDts_39.add_element(EvntTms_39);
          }
          CmplxEvnt_39.add_element(EvntDts_39);
        }
        Instrmt_39.add_element(CmplxEvnt_39);
      }
      Ord_1.add_element(Instrmt_39);
    }
    {
      xml_element Undly_51{"Undly"};
      multiset<string> Undly_51_set;
      Undly_51.add_attribute("Sym", "UnderlyingSymbol_t_1053825055"); // 2
      Undly_51_set.insert("UnderlyingSymbol_t_1053825055");
      Undly_51.add_attribute("Sfx", "WI"); // 2
      Undly_51_set.insert("WI");
      Undly_51.add_attribute("ID", "UnderlyingSecurityID_t_1642644110"); // 2
      Undly_51_set.insert("UnderlyingSecurityID_t_1642644110");
      Undly_51.add_attribute("Src", "7"); // 2
      Undly_51_set.insert("7");
      Undly_51.add_attribute("Prod", "11"); // 2
      Undly_51_set.insert("11");
      Undly_51.add_attribute("CFI", "UnderlyingCFICode_t_1314232897"); // 2
      Undly_51_set.insert("UnderlyingCFICode_t_1314232897");
      Undly_51.add_attribute("SecTyp", "BDN"); // 2
      Undly_51_set.insert("BDN");
      Undly_51.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1591214934"); // 2
      Undly_51_set.insert("UnderlyingSecuritySubType_t_1591214934");
      Undly_51.add_attribute("MMY", "870009373"); // 2
      Undly_51_set.insert("870009373");
      Undly_51.add_attribute("Mat", "UnderlyingMaturityDate_t_1707488326"); // 2
      Undly_51_set.insert("UnderlyingMaturityDate_t_1707488326");
      Undly_51.add_attribute("MatTm", "675413978"); // 2
      Undly_51_set.insert("675413978");
      Undly_51.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_36189173"); // 2
      Undly_51_set.insert("UnderlyingCouponPaymentDate_t_36189173");
      Undly_51.add_attribute("RestrctTyp", "FR"); // 2
      Undly_51_set.insert("FR");
      Undly_51.add_attribute("Snrty", "SR"); // 2
      Undly_51_set.insert("SR");
      Undly_51.add_attribute("NotlPctOut", "5025284.430000"); // 2
      Undly_51_set.insert("5025284.430000");
      Undly_51.add_attribute("OrigNotlPctOut", "20123407.920000"); // 2
      Undly_51_set.insert("20123407.920000");
      Undly_51.add_attribute("AttchPnt", "15749857.960000"); // 2
      Undly_51_set.insert("15749857.960000");
      Undly_51.add_attribute("DetchPnt", "20471849.060000"); // 2
      Undly_51_set.insert("20471849.060000");
      Undly_51.add_attribute("Issued", "UnderlyingIssueDate_t_61677742"); // 2
      Undly_51_set.insert("UnderlyingIssueDate_t_61677742");
      Undly_51.add_attribute("RepoCollSecTyp", "1376884121"); // 2
      Undly_51_set.insert("1376884121");
      Undly_51.add_attribute("RepoTrm", "2093348192"); // 2
      Undly_51_set.insert("2093348192");
      Undly_51.add_attribute("RepoRt", "3266427.980000"); // 2
      Undly_51_set.insert("3266427.980000");
      Undly_51.add_attribute("Fctr", "17970006.960000"); // 2
      Undly_51_set.insert("17970006.960000");
      Undly_51.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2064392105"); // 2
      Undly_51_set.insert("UnderlyingCreditRating_t_2064392105");
      Undly_51.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1460311233"); // 2
      Undly_51_set.insert("UnderlyingInstrRegistry_t_1460311233");
      Undly_51.add_attribute("Ctry", "1322924607"); // 2
      Undly_51_set.insert("1322924607");
      Undly_51.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1563207799"); // 2
      Undly_51_set.insert("UnderlyingStateOrProvinceOfIssue_t_1563207799");
      Undly_51.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1253903350"); // 2
      Undly_51_set.insert("UnderlyingLocaleOfIssue_t_1253903350");
      Undly_51.add_attribute("Redeem", "UnderlyingRedemptionDate_t_810438383"); // 2
      Undly_51_set.insert("UnderlyingRedemptionDate_t_810438383");
      Undly_51.add_attribute("StrkPx", "77205.160000"); // 2
      Undly_51_set.insert("77205.160000");
      Undly_51.add_attribute("StrkCcy", "USD"); // 2
      Undly_51_set.insert("USD");
      Undly_51.add_attribute("OptA", "424400099"); // 2
      Undly_51_set.insert("424400099");
      Undly_51.add_attribute("Mult", "6917207.690000"); // 2
      Undly_51_set.insert("6917207.690000");
      Undly_51.add_attribute("MultTyp", "1"); // 2
      Undly_51_set.insert("1");
      Undly_51.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_51_set.insert("3");
      Undly_51.add_attribute("UOM", "Bbl"); // 2
      Undly_51_set.insert("Bbl");
      Undly_51.add_attribute("UOMQty", "5902676.070000"); // 2
      Undly_51_set.insert("5902676.070000");
      Undly_51.add_attribute("PxUOM", "oz_tr"); // 2
      Undly_51_set.insert("oz_tr");
      Undly_51.add_attribute("PxUOMQty", "7284793.920000"); // 2
      Undly_51_set.insert("7284793.920000");
      Undly_51.add_attribute("TmUnit", "H"); // 2
      Undly_51_set.insert("H");
      Undly_51.add_attribute("ExerStyle", "1"); // 2
      Undly_51_set.insert("1");
      Undly_51.add_attribute("CpnRt", "7646685.650000"); // 2
      Undly_51_set.insert("7646685.650000");
      Undly_51.add_attribute("Exch", "UnderlyingSecurityExchange_t_1185463517"); // 2
      Undly_51_set.insert("UnderlyingSecurityExchange_t_1185463517");
      Undly_51.add_attribute("Issr", "UnderlyingIssuer_t_1864452821"); // 2
      Undly_51_set.insert("UnderlyingIssuer_t_1864452821");
      Undly_51.add_attribute("EncUndIssrLen", "1267197008"); // 2
      Undly_51_set.insert("1267197008");
      Undly_51.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1050320661"); // 2
      Undly_51_set.insert("EncodedUnderlyingIssuer_t_1050320661");
      Undly_51.add_attribute("Desc", "UnderlyingSecurityDesc_t_1291954969"); // 2
      Undly_51_set.insert("UnderlyingSecurityDesc_t_1291954969");
      Undly_51.add_attribute("EncUndSecDescLen", "1166898267"); // 2
      Undly_51_set.insert("1166898267");
      Undly_51.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1111998403"); // 2
      Undly_51_set.insert("EncodedUnderlyingSecurityDesc_t_1111998403");
      Undly_51.add_attribute("CPPgm", "UnderlyingCPProgram_t_521355442"); // 2
      Undly_51_set.insert("UnderlyingCPProgram_t_521355442");
      Undly_51.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1112762811"); // 2
      Undly_51_set.insert("UnderlyingCPRegType_t_1112762811");
      Undly_51.add_attribute("AllocPct", "14386412.020000"); // 2
      Undly_51_set.insert("14386412.020000");
      Undly_51.add_attribute("Ccy", "USD"); // 2
      Undly_51_set.insert("USD");
      Undly_51.add_attribute("Qty", "7514687.870000"); // 2
      Undly_51_set.insert("7514687.870000");
      Undly_51.add_attribute("SettlTyp", "2"); // 2
      Undly_51_set.insert("2");
      Undly_51.add_attribute("CashAmt", "UnderlyingCashAmount_t_445395419"); // 2
      Undly_51_set.insert("UnderlyingCashAmount_t_445395419");
      Undly_51.add_attribute("CashTyp", "DIFF"); // 2
      Undly_51_set.insert("DIFF");
      Undly_51.add_attribute("Px", "1567518.330000"); // 2
      Undly_51_set.insert("1567518.330000");
      Undly_51.add_attribute("DirtPx", "4531159.350000"); // 2
      Undly_51_set.insert("4531159.350000");
      Undly_51.add_attribute("EndPx", "10544487.960000"); // 2
      Undly_51_set.insert("10544487.960000");
      Undly_51.add_attribute("StartVal", "UnderlyingStartValue_t_2021015271"); // 2
      Undly_51_set.insert("UnderlyingStartValue_t_2021015271");
      Undly_51.add_attribute("CurVal", "UnderlyingCurrentValue_t_877516034"); // 2
      Undly_51_set.insert("UnderlyingCurrentValue_t_877516034");
      Undly_51.add_attribute("EndVal", "UnderlyingEndValue_t_1746169565"); // 2
      Undly_51_set.insert("UnderlyingEndValue_t_1746169565");
      Undly_51.add_attribute("AdjQty", "7223764.190000"); // 2
      Undly_51_set.insert("7223764.190000");
      Undly_51.add_attribute("FxRate", "20113448.430000"); // 2
      Undly_51_set.insert("20113448.430000");
      Undly_51.add_attribute("FxRateCalc", "D"); // 2
      Undly_51_set.insert("D");
      Undly_51.add_attribute("CapValu", "UnderlyingCapValue_t_1312644026"); // 2
      Undly_51_set.insert("UnderlyingCapValue_t_1312644026");
      Undly_51.add_attribute("SetMeth", "UnderlyingSettlMethod_t_441421290"); // 2
      Undly_51_set.insert("UnderlyingSettlMethod_t_441421290");
      Undly_51.add_attribute("PutCall", "185635327"); // 2
      Undly_51_set.insert("185635327");
      all_values.push_back(Undly_51_set);
      all_compo_names.insert("Undly_51_set");

      {
        xml_element UndAID_51{"UndAID"};
        multiset<string> UndAID_51_set;
        UndAID_51.add_attribute("AltID", "UnderlyingSecurityAltID_t_1462916312"); // 3
        UndAID_51_set.insert("UnderlyingSecurityAltID_t_1462916312");
        UndAID_51.add_attribute("AltIDSrc", "2"); // 3
        UndAID_51_set.insert("2");
        all_values.push_back(UndAID_51_set);
        all_compo_names.insert("UndAID_51_set");

        Undly_51.add_element(UndAID_51);
      }
      {
        xml_element Stip_81{"Stip"};
        multiset<string> Stip_81_set;
        Stip_81.add_attribute("Typ", "TRDVAR"); // 3
        Stip_81_set.insert("TRDVAR");
        Stip_81.add_attribute("Val", "UnderlyingStipValue_t_500896181"); // 3
        Stip_81_set.insert("UnderlyingStipValue_t_500896181");
        all_values.push_back(Stip_81_set);
        all_compo_names.insert("Stip_81_set");

        Undly_51.add_element(Stip_81);
      }
      {
        xml_element Pty_211{"Pty"};
        multiset<string> Pty_211_set;
        Pty_211.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1411364536"); // 3
        Pty_211_set.insert("UnderlyingInstrumentPartyID_t_1411364536");
        Pty_211.add_attribute("Src", "8"); // 3
        Pty_211_set.insert("8");
        Pty_211.add_attribute("R", "24"); // 3
        Pty_211_set.insert("24");
        all_values.push_back(Pty_211_set);
        all_compo_names.insert("Pty_211_set");

        {
          xml_element Sub_211{"Sub"};
          multiset<string> Sub_211_set;
          Sub_211.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_555835858"); // 4
          Sub_211_set.insert("UnderlyingInstrumentPartySubID_t_555835858");
          Sub_211.add_attribute("Typ", "24"); // 4
          Sub_211_set.insert("24");
          all_values.push_back(Sub_211_set);
          all_compo_names.insert("Sub_211_set");

          Pty_211.add_element(Sub_211);
        }
        Undly_51.add_element(Pty_211);
      }
      Ord_1.add_element(Undly_51);
    }
    {
      xml_element Stip_82{"Stip"};
      multiset<string> Stip_82_set;
      Stip_82.add_attribute("Typ", "DISCOUNT"); // 2
      Stip_82_set.insert("DISCOUNT");
      Stip_82.add_attribute("Val", "StipulationValue_t_1077191300"); // 2
      Stip_82_set.insert("StipulationValue_t_1077191300");
      all_values.push_back(Stip_82_set);
      all_compo_names.insert("Stip_82_set");

      Ord_1.add_element(Stip_82);
    }
    {
      xml_element OrdQty_13{"OrdQty"};
      multiset<string> OrdQty_13_set;
      OrdQty_13.add_attribute("Qty", "2021946.830000"); // 2
      OrdQty_13_set.insert("2021946.830000");
      OrdQty_13.add_attribute("Cash", "19543728.000000"); // 2
      OrdQty_13_set.insert("19543728.000000");
      OrdQty_13.add_attribute("Pct", "12480637.910000"); // 2
      OrdQty_13_set.insert("12480637.910000");
      OrdQty_13.add_attribute("RndDir", "2"); // 2
      OrdQty_13_set.insert("2");
      OrdQty_13.add_attribute("RndMod", "5583579.390000"); // 2
      OrdQty_13_set.insert("5583579.390000");
      all_values.push_back(OrdQty_13_set);
      all_compo_names.insert("OrdQty_13_set");

      Ord_1.add_element(OrdQty_13);
    }
    {
      xml_element TrgrInstr_4{"TrgrInstr"};
      multiset<string> TrgrInstr_4_set;
      TrgrInstr_4.add_attribute("TrgrTyp", "2"); // 2
      TrgrInstr_4_set.insert("2");
      TrgrInstr_4.add_attribute("TrgrActn", "2"); // 2
      TrgrInstr_4_set.insert("2");
      TrgrInstr_4.add_attribute("TrgrPx", "4162464.280000"); // 2
      TrgrInstr_4_set.insert("4162464.280000");
      TrgrInstr_4.add_attribute("TrgrSym", "TriggerSymbol_t_751129074"); // 2
      TrgrInstr_4_set.insert("TriggerSymbol_t_751129074");
      TrgrInstr_4.add_attribute("TrgrSecID", "TriggerSecurityID_t_2130377305"); // 2
      TrgrInstr_4_set.insert("TriggerSecurityID_t_2130377305");
      TrgrInstr_4.add_attribute("TrgrSecIDSrc", "K"); // 2
      TrgrInstr_4_set.insert("K");
      TrgrInstr_4.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_624660697"); // 2
      TrgrInstr_4_set.insert("TriggerSecurityDesc_t_624660697");
      TrgrInstr_4.add_attribute("TrgrPxTyp", "3"); // 2
      TrgrInstr_4_set.insert("3");
      TrgrInstr_4.add_attribute("TrgrPxTypScp", "1"); // 2
      TrgrInstr_4_set.insert("1");
      TrgrInstr_4.add_attribute("TrgrPxDir", "U"); // 2
      TrgrInstr_4_set.insert("U");
      TrgrInstr_4.add_attribute("TrgrNewPx", "7242708.870000"); // 2
      TrgrInstr_4_set.insert("7242708.870000");
      TrgrInstr_4.add_attribute("TrgrOrdTyp", "2"); // 2
      TrgrInstr_4_set.insert("2");
      TrgrInstr_4.add_attribute("TrgrNewQty", "5121974.950000"); // 2
      TrgrInstr_4_set.insert("5121974.950000");
      TrgrInstr_4.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1165692177"); // 2
      TrgrInstr_4_set.insert("TriggerTradingSessionID_t_1165692177");
      TrgrInstr_4.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_712172404"); // 2
      TrgrInstr_4_set.insert("TriggerTradingSessionSubID_t_712172404");
      all_values.push_back(TrgrInstr_4_set);
      all_compo_names.insert("TrgrInstr_4_set");

      Ord_1.add_element(TrgrInstr_4);
    }
    {
      xml_element SprdBnchmkCurve_16{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_16_set;
      SprdBnchmkCurve_16.add_attribute("Spread", "19751138.070000"); // 2
      SprdBnchmkCurve_16_set.insert("19751138.070000");
      SprdBnchmkCurve_16.add_attribute("Ccy", "CAN"); // 2
      SprdBnchmkCurve_16_set.insert("CAN");
      SprdBnchmkCurve_16.add_attribute("Name", "EONIA"); // 2
      SprdBnchmkCurve_16_set.insert("EONIA");
      SprdBnchmkCurve_16.add_attribute("Point", "BenchmarkCurvePoint_t_2123968428"); // 2
      SprdBnchmkCurve_16_set.insert("BenchmarkCurvePoint_t_2123968428");
      SprdBnchmkCurve_16.add_attribute("Px", "17324935.510000"); // 2
      SprdBnchmkCurve_16_set.insert("17324935.510000");
      SprdBnchmkCurve_16.add_attribute("PxTyp", "17"); // 2
      SprdBnchmkCurve_16_set.insert("17");
      SprdBnchmkCurve_16.add_attribute("SecID", "BenchmarkSecurityID_t_532320638"); // 2
      SprdBnchmkCurve_16_set.insert("BenchmarkSecurityID_t_532320638");
      SprdBnchmkCurve_16.add_attribute("SecIDSrc", "C"); // 2
      SprdBnchmkCurve_16_set.insert("C");
      all_values.push_back(SprdBnchmkCurve_16_set);
      all_compo_names.insert("SprdBnchmkCurve_16_set");

      Ord_1.add_element(SprdBnchmkCurve_16);
    }
    {
      xml_element Yield_11{"Yield"};
      multiset<string> Yield_11_set;
      Yield_11.add_attribute("Typ", "TENDER"); // 2
      Yield_11_set.insert("TENDER");
      Yield_11.add_attribute("Yld", "16095119.390000"); // 2
      Yield_11_set.insert("16095119.390000");
      Yield_11.add_attribute("CalcDt", "YieldCalcDate_t_1024120107"); // 2
      Yield_11_set.insert("YieldCalcDate_t_1024120107");
      Yield_11.add_attribute("RedDt", "YieldRedemptionDate_t_54880286"); // 2
      Yield_11_set.insert("YieldRedemptionDate_t_54880286");
      Yield_11.add_attribute("RedPx", "7100920.820000"); // 2
      Yield_11_set.insert("7100920.820000");
      Yield_11.add_attribute("RedPxTyp", "14"); // 2
      Yield_11_set.insert("14");
      all_values.push_back(Yield_11_set);
      all_compo_names.insert("Yield_11_set");

      Ord_1.add_element(Yield_11);
    }
    {
      xml_element Comm_14{"Comm"};
      multiset<string> Comm_14_set;
      Comm_14.add_attribute("Comm", "Commission_t_613238226"); // 2
      Comm_14_set.insert("Commission_t_613238226");
      Comm_14.add_attribute("CommTyp", "1"); // 2
      Comm_14_set.insert("1");
      Comm_14.add_attribute("Ccy", "JPY"); // 2
      Comm_14_set.insert("JPY");
      Comm_14.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_14_set.insert("N");
      all_values.push_back(Comm_14_set);
      all_compo_names.insert("Comm_14_set");

      Ord_1.add_element(Comm_14);
    }
    {
      xml_element PegInstr_4{"PegInstr"};
      multiset<string> PegInstr_4_set;
      PegInstr_4.add_attribute("OfstVal", "17686574.380000"); // 2
      PegInstr_4_set.insert("17686574.380000");
      PegInstr_4.add_attribute("PegPxTyp", "9"); // 2
      PegInstr_4_set.insert("9");
      PegInstr_4.add_attribute("MoveTyp", "0"); // 2
      PegInstr_4_set.insert("0");
      PegInstr_4.add_attribute("OfstTyp", "2"); // 2
      PegInstr_4_set.insert("2");
      PegInstr_4.add_attribute("LmtTyp", "2"); // 2
      PegInstr_4_set.insert("2");
      PegInstr_4.add_attribute("RndDir", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("Scope", "2"); // 2
      PegInstr_4_set.insert("2");
      PegInstr_4.add_attribute("PegSecurityIDSource", "2"); // 2
      PegInstr_4_set.insert("2");
      PegInstr_4.add_attribute("PegSecID", "PegSecurityID_t_244526411"); // 2
      PegInstr_4_set.insert("PegSecurityID_t_244526411");
      PegInstr_4.add_attribute("PgSymbl", "PegSymbol_t_224062898"); // 2
      PegInstr_4_set.insert("PegSymbol_t_224062898");
      PegInstr_4.add_attribute("PegSecDesc", "PegSecurityDesc_t_513303206"); // 2
      PegInstr_4_set.insert("PegSecurityDesc_t_513303206");
      all_values.push_back(PegInstr_4_set);
      all_compo_names.insert("PegInstr_4_set");

      Ord_1.add_element(PegInstr_4);
    }
    {
      xml_element DiscInstr_4{"DiscInstr"};
      multiset<string> DiscInstr_4_set;
      DiscInstr_4.add_attribute("DsctnInst", "2"); // 2
      DiscInstr_4_set.insert("2");
      DiscInstr_4.add_attribute("OfstValu", "9366667.900000"); // 2
      DiscInstr_4_set.insert("9366667.900000");
      DiscInstr_4.add_attribute("MoveTyp", "1"); // 2
      DiscInstr_4_set.insert("1");
      DiscInstr_4.add_attribute("OfstTyp", "3"); // 2
      DiscInstr_4_set.insert("3");
      DiscInstr_4.add_attribute("LimitTyp", "0"); // 2
      DiscInstr_4_set.insert("0");
      DiscInstr_4.add_attribute("RndDir", "1"); // 2
      DiscInstr_4_set.insert("1");
      DiscInstr_4.add_attribute("Scope", "3"); // 2
      DiscInstr_4_set.insert("3");
      all_values.push_back(DiscInstr_4_set);
      all_compo_names.insert("DiscInstr_4_set");

      Ord_1.add_element(DiscInstr_4);
    }
    {
      xml_element StrtPrmGrp_7{"StrtPrmGrp"};
      multiset<string> StrtPrmGrp_7_set;
      StrtPrmGrp_7.add_attribute("StrtPrmNme", "StrategyParameterName_t_1445472209"); // 2
      StrtPrmGrp_7_set.insert("StrategyParameterName_t_1445472209");
      StrtPrmGrp_7.add_attribute("StrtPrmTyp", "24"); // 2
      StrtPrmGrp_7_set.insert("24");
      StrtPrmGrp_7.add_attribute("StrtPrmVal", "StrategyParameterValue_t_380933580"); // 2
      StrtPrmGrp_7_set.insert("StrategyParameterValue_t_380933580");
      all_values.push_back(StrtPrmGrp_7_set);
      all_compo_names.insert("StrtPrmGrp_7_set");

      Ord_1.add_element(StrtPrmGrp_7);
    }
    elt.add_element(Ord_1);
  } // end Ord
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
