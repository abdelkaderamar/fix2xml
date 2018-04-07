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
  elt.add_attribute("ID", "ListID_t_1643971896"); // 0
  NewOrderList_message_t_0.insert("ListID_t_1643971896");
  elt.add_attribute("BidID", "BidID_t_1237998397"); // 0
  NewOrderList_message_t_0.insert("BidID_t_1237998397");
  elt.add_attribute("ClBidID", "ClientBidID_t_1871619715"); // 0
  NewOrderList_message_t_0.insert("ClientBidID_t_1871619715");
  elt.add_attribute("ProgRptReqs", "1"); // 0
  NewOrderList_message_t_0.insert("1");
  elt.add_attribute("BidTyp", "1"); // 0
  NewOrderList_message_t_0.insert("1");
  elt.add_attribute("ProgPeriodIntvl", "230689753"); // 0
  NewOrderList_message_t_0.insert("230689753");
  elt.add_attribute("CxllationRights", "Y"); // 0
  NewOrderList_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "Y"); // 0
  NewOrderList_message_t_0.insert("Y");
  elt.add_attribute("RegistID", "RegistID_t_1662492065"); // 0
  NewOrderList_message_t_0.insert("RegistID_t_1662492065");
  elt.add_attribute("ListExecInstTyp", "4"); // 0
  NewOrderList_message_t_0.insert("4");
  elt.add_attribute("ListExecInst", "ListExecInst_t_943056379"); // 0
  NewOrderList_message_t_0.insert("ListExecInst_t_943056379");
  elt.add_attribute("ContingencyType", "1"); // 0
  NewOrderList_message_t_0.insert("1");
  elt.add_attribute("EncListExecInstLen", "2038101115"); // 0
  NewOrderList_message_t_0.insert("2038101115");
  elt.add_attribute("EncListExecInst", "EncodedListExecInst_t_1889100586"); // 0
  NewOrderList_message_t_0.insert("EncodedListExecInst_t_1889100586");
  elt.add_attribute("AOSPct", "1735571.870000"); // 0
  NewOrderList_message_t_0.insert("1735571.870000");
  elt.add_attribute("AOSValu", "AllowableOneSidednessValue_t_1810587044"); // 0
  NewOrderList_message_t_0.insert("AllowableOneSidednessValue_t_1810587044");
  elt.add_attribute("AOSCurr", "USD"); // 0
  NewOrderList_message_t_0.insert("USD");
  elt.add_attribute("TotNoOrds", "1525110853"); // 0
  NewOrderList_message_t_0.insert("1525110853");
  elt.add_attribute("LastFragment", "Y"); // 0
  NewOrderList_message_t_0.insert("Y");
  all_values.push_back(NewOrderList_message_t_0);
  all_compo_names.insert("NewOrderList_message_t");

  { // Hdr
    xml_element Hdr_52{"Hdr"};
    multiset<string> Hdr_52_set;
    Hdr_52.add_attribute("SeqNum", "1424019973"); // 1
    Hdr_52_set.insert("1424019973");
    Hdr_52.add_attribute("SID", "SenderCompID_t_1266508372"); // 1
    Hdr_52_set.insert("SenderCompID_t_1266508372");
    Hdr_52.add_attribute("TID", "TargetCompID_t_1446928985"); // 1
    Hdr_52_set.insert("TargetCompID_t_1446928985");
    Hdr_52.add_attribute("OBID", "OnBehalfOfCompID_t_1242219844"); // 1
    Hdr_52_set.insert("OnBehalfOfCompID_t_1242219844");
    Hdr_52.add_attribute("D2ID", "DeliverToCompID_t_1114960290"); // 1
    Hdr_52_set.insert("DeliverToCompID_t_1114960290");
    Hdr_52.add_attribute("SSub", "SenderSubID_t_1922663147"); // 1
    Hdr_52_set.insert("SenderSubID_t_1922663147");
    Hdr_52.add_attribute("SLoc", "SenderLocationID_t_1064537816"); // 1
    Hdr_52_set.insert("SenderLocationID_t_1064537816");
    Hdr_52.add_attribute("TSub", "TargetSubID_t_104104487"); // 1
    Hdr_52_set.insert("TargetSubID_t_104104487");
    Hdr_52.add_attribute("TLoc", "TargetLocationID_t_1782812734"); // 1
    Hdr_52_set.insert("TargetLocationID_t_1782812734");
    Hdr_52.add_attribute("OBSub", "OnBehalfOfSubID_t_1243033187"); // 1
    Hdr_52_set.insert("OnBehalfOfSubID_t_1243033187");
    Hdr_52.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2074476610"); // 1
    Hdr_52_set.insert("OnBehalfOfLocationID_t_2074476610");
    Hdr_52.add_attribute("D2Sub", "DeliverToSubID_t_1279300982"); // 1
    Hdr_52_set.insert("DeliverToSubID_t_1279300982");
    Hdr_52.add_attribute("D2Loc", "DeliverToLocationID_t_333547936"); // 1
    Hdr_52_set.insert("DeliverToLocationID_t_333547936");
    Hdr_52.add_attribute("PosDup", "Y"); // 1
    Hdr_52_set.insert("Y");
    Hdr_52.add_attribute("PosRsnd", "Y"); // 1
    Hdr_52_set.insert("Y");
    Hdr_52.add_attribute("Snt", "SendingTime_t_300162960"); // 1
    Hdr_52_set.insert("SendingTime_t_300162960");
    Hdr_52.add_attribute("OrigSnt", "OrigSendingTime_t_2029302431"); // 1
    Hdr_52_set.insert("OrigSendingTime_t_2029302431");
    Hdr_52.add_attribute("MsgEncd", "MessageEncoding_t_675262208"); // 1
    Hdr_52_set.insert("MessageEncoding_t_675262208");
    all_values.push_back(Hdr_52_set);
    all_compo_names.insert("Hdr_52_set");

    {
      xml_element Hop_52{"Hop"};
      multiset<string> Hop_52_set;
      Hop_52.add_attribute("ID", "HopCompID_t_1691029484"); // 2
      Hop_52_set.insert("HopCompID_t_1691029484");
      Hop_52.add_attribute("Ref", "1544310848"); // 2
      Hop_52_set.insert("1544310848");
      Hop_52.add_attribute("Snt", "HopSendingTime_t_385923443"); // 2
      Hop_52_set.insert("HopSendingTime_t_385923443");
      all_values.push_back(Hop_52_set);
      all_compo_names.insert("Hop_52_set");

      Hdr_52.add_element(Hop_52);
    }
    elt.add_element(Hdr_52);
  } // end Hdr
  { // Pty
    xml_element Pty_233{"Pty"};
    multiset<string> Pty_233_set;
    Pty_233.add_attribute("ID", "RootPartyID_t_275795412"); // 1
    Pty_233_set.insert("RootPartyID_t_275795412");
    Pty_233.add_attribute("Src", "H"); // 1
    Pty_233_set.insert("H");
    Pty_233.add_attribute("R", "39"); // 1
    Pty_233_set.insert("39");
    all_values.push_back(Pty_233_set);
    all_compo_names.insert("Pty_233_set");

    {
      xml_element Sub_233{"Sub"};
      multiset<string> Sub_233_set;
      Sub_233.add_attribute("ID", "RootPartySubID_t_449352599"); // 2
      Sub_233_set.insert("RootPartySubID_t_449352599");
      Sub_233.add_attribute("Typ", "6"); // 2
      Sub_233_set.insert("6");
      all_values.push_back(Sub_233_set);
      all_compo_names.insert("Sub_233_set");

      Pty_233.add_element(Sub_233);
    }
    elt.add_element(Pty_233);
  } // end Pty
  { // Pty
    xml_element Pty_234{"Pty"};
    multiset<string> Pty_234_set;
    Pty_234.add_attribute("ID", "RootPartyID_t_1916834244"); // 1
    Pty_234_set.insert("RootPartyID_t_1916834244");
    Pty_234.add_attribute("Src", "6"); // 1
    Pty_234_set.insert("6");
    Pty_234.add_attribute("R", "9"); // 1
    Pty_234_set.insert("9");
    all_values.push_back(Pty_234_set);
    all_compo_names.insert("Pty_234_set");

    {
      xml_element Sub_234{"Sub"};
      multiset<string> Sub_234_set;
      Sub_234.add_attribute("ID", "RootPartySubID_t_498799184"); // 2
      Sub_234_set.insert("RootPartySubID_t_498799184");
      Sub_234.add_attribute("Typ", "27"); // 2
      Sub_234_set.insert("27");
      all_values.push_back(Sub_234_set);
      all_compo_names.insert("Sub_234_set");

      Pty_234.add_element(Sub_234);
    }
    elt.add_element(Pty_234);
  } // end Pty
  { // Ord
    xml_element Ord_3{"Ord"};
    multiset<string> Ord_3_set;
    Ord_3.add_attribute("ClOrdID", "ClOrdID_t_1945728169"); // 1
    Ord_3_set.insert("ClOrdID_t_1945728169");
    Ord_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_503011519"); // 1
    Ord_3_set.insert("SecondaryClOrdID_t_503011519");
    Ord_3.add_attribute("SeqNo", "1698740175"); // 1
    Ord_3_set.insert("1698740175");
    Ord_3.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1720907668"); // 1
    Ord_3_set.insert("ClOrdLinkID_t_1720907668");
    Ord_3.add_attribute("SettlInstMode", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("OrignDt", "TradeOriginationDate_t_1802844663"); // 1
    Ord_3_set.insert("TradeOriginationDate_t_1802844663");
    Ord_3.add_attribute("TrdDt", "TradeDate_t_1356236754"); // 1
    Ord_3_set.insert("TradeDate_t_1356236754");
    Ord_3.add_attribute("Acct", "Account_t_663098874"); // 1
    Ord_3_set.insert("Account_t_663098874");
    Ord_3.add_attribute("AcctIDSrc", "99"); // 1
    Ord_3_set.insert("99");
    Ord_3.add_attribute("AcctTyp", "6"); // 1
    Ord_3_set.insert("6");
    Ord_3.add_attribute("DayBkngInst", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("BkngUnit", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("AllocID", "AllocID_t_925760553"); // 1
    Ord_3_set.insert("AllocID_t_925760553");
    Ord_3.add_attribute("PreallocMeth", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("SettlTyp", "9"); // 1
    Ord_3_set.insert("9");
    Ord_3.add_attribute("SettlDt", "SettlDate_t_1601022762"); // 1
    Ord_3_set.insert("SettlDate_t_1601022762");
    Ord_3.add_attribute("CshMgn", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("ClrFeeInd", "9"); // 1
    Ord_3_set.insert("9");
    Ord_3.add_attribute("HandlInst", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("ExecInst", "H"); // 1
    Ord_3_set.insert("H");
    Ord_3.add_attribute("MinQty", "9354080.490000"); // 1
    Ord_3_set.insert("9354080.490000");
    Ord_3.add_attribute("MtchInc", "1160034.680000"); // 1
    Ord_3_set.insert("1160034.680000");
    Ord_3.add_attribute("MxPxLvls", "1555176975"); // 1
    Ord_3_set.insert("1555176975");
    Ord_3.add_attribute("MaxFloor", "13847606.480000"); // 1
    Ord_3_set.insert("13847606.480000");
    Ord_3.add_attribute("ExDest", "ExDestination_t_55647775"); // 1
    Ord_3_set.insert("ExDestination_t_55647775");
    Ord_3.add_attribute("ExDestIDSrc", "C"); // 1
    Ord_3_set.insert("C");
    Ord_3.add_attribute("ProcCode", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("PrevClsPx", "15204029.350000"); // 1
    Ord_3_set.insert("15204029.350000");
    Ord_3.add_attribute("Side", "4"); // 1
    Ord_3_set.insert("4");
    Ord_3.add_attribute("SideValuInd", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("LocReqd", "N"); // 1
    Ord_3_set.insert("N");
    Ord_3.add_attribute("TxnTm", "TransactTime_t_1621571276"); // 1
    Ord_3_set.insert("TransactTime_t_1621571276");
    Ord_3.add_attribute("QtyTyp", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("OrdTyp", "D"); // 1
    Ord_3_set.insert("D");
    Ord_3.add_attribute("PxTyp", "9"); // 1
    Ord_3_set.insert("9");
    Ord_3.add_attribute("Px", "5528848.790000"); // 1
    Ord_3_set.insert("5528848.790000");
    Ord_3.add_attribute("PxPrtScp", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("StopPx", "4037484.020000"); // 1
    Ord_3_set.insert("4037484.020000");
    Ord_3.add_attribute("Ccy", "JPY"); // 1
    Ord_3_set.insert("JPY");
    Ord_3.add_attribute("ComplianceID", "ComplianceID_t_891802490"); // 1
    Ord_3_set.insert("ComplianceID_t_891802490");
    Ord_3.add_attribute("SolFlag", "Y"); // 1
    Ord_3_set.insert("Y");
    Ord_3.add_attribute("IOIID", "IOIID_t_126637346"); // 1
    Ord_3_set.insert("IOIID_t_126637346");
    Ord_3.add_attribute("QID", "QuoteID_t_1817563044"); // 1
    Ord_3_set.insert("QuoteID_t_1817563044");
    Ord_3.add_attribute("RefOrdID", "RefOrderID_t_1361956688"); // 1
    Ord_3_set.insert("RefOrderID_t_1361956688");
    Ord_3.add_attribute("RefOrdIDSrc", "4"); // 1
    Ord_3_set.insert("4");
    Ord_3.add_attribute("TmInForce", "8"); // 1
    Ord_3_set.insert("8");
    Ord_3.add_attribute("EfctvTm", "EffectiveTime_t_54828647"); // 1
    Ord_3_set.insert("EffectiveTime_t_54828647");
    Ord_3.add_attribute("ExpireDt", "ExpireDate_t_2049035421"); // 1
    Ord_3_set.insert("ExpireDate_t_2049035421");
    Ord_3.add_attribute("ExpireTm", "ExpireTime_t_1110564715"); // 1
    Ord_3_set.insert("ExpireTime_t_1110564715");
    Ord_3.add_attribute("GTBkngInst", "2"); // 1
    Ord_3_set.insert("2");
    Ord_3.add_attribute("Cpcty", "W"); // 1
    Ord_3_set.insert("W");
    Ord_3.add_attribute("Rstctions", "4"); // 1
    Ord_3_set.insert("4");
    Ord_3.add_attribute("PrTrdAnon", "true"); // 1
    Ord_3_set.insert("true");
    Ord_3.add_attribute("CustCpcty", "4"); // 1
    Ord_3_set.insert("4");
    Ord_3.add_attribute("ForexReq", "N"); // 1
    Ord_3_set.insert("N");
    Ord_3.add_attribute("SettlCcy", "CAN"); // 1
    Ord_3_set.insert("CAN");
    Ord_3.add_attribute("BkngTyp", "1"); // 1
    Ord_3_set.insert("1");
    Ord_3.add_attribute("Txt", "Text_t_1789850475"); // 1
    Ord_3_set.insert("Text_t_1789850475");
    Ord_3.add_attribute("EncTxtLen", "2073060494"); // 1
    Ord_3_set.insert("2073060494");
    Ord_3.add_attribute("EncTxt", "EncodedText_t_611834418"); // 1
    Ord_3_set.insert("EncodedText_t_611834418");
    Ord_3.add_attribute("SettlDt2", "SettlDate2_t_1263938103"); // 1
    Ord_3_set.insert("SettlDate2_t_1263938103");
    Ord_3.add_attribute("Qty2", "10583960.380000"); // 1
    Ord_3_set.insert("10583960.380000");
    Ord_3.add_attribute("Px2", "1197901.180000"); // 1
    Ord_3_set.insert("1197901.180000");
    Ord_3.add_attribute("PosEfct", "C"); // 1
    Ord_3_set.insert("C");
    Ord_3.add_attribute("Covered", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("MaxShow", "14305904.810000"); // 1
    Ord_3_set.insert("14305904.810000");
    Ord_3.add_attribute("TgtStrategy", "3"); // 1
    Ord_3_set.insert("3");
    Ord_3.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_679781024"); // 1
    Ord_3_set.insert("TargetStrategyParameters_t_679781024");
    Ord_3.add_attribute("ParticipationRt", "1762611.730000"); // 1
    Ord_3_set.insert("1762611.730000");
    Ord_3.add_attribute("Designation", "Designation_t_1607000645"); // 1
    Ord_3_set.insert("Designation_t_1607000645");
    all_values.push_back(Ord_3_set);
    all_compo_names.insert("Ord_3_set");

    {
      xml_element Pty_235{"Pty"};
      multiset<string> Pty_235_set;
      Pty_235.add_attribute("ID", "PartyID_t_744927941"); // 2
      Pty_235_set.insert("PartyID_t_744927941");
      Pty_235.add_attribute("Src", "B"); // 2
      Pty_235_set.insert("B");
      Pty_235.add_attribute("R", "71"); // 2
      Pty_235_set.insert("71");
      all_values.push_back(Pty_235_set);
      all_compo_names.insert("Pty_235_set");

      {
        xml_element Sub_235{"Sub"};
        multiset<string> Sub_235_set;
        Sub_235.add_attribute("ID", "PartySubID_t_2106884629"); // 3
        Sub_235_set.insert("PartySubID_t_2106884629");
        Sub_235.add_attribute("Typ", "9"); // 3
        Sub_235_set.insert("9");
        all_values.push_back(Sub_235_set);
        all_compo_names.insert("Sub_235_set");

        Pty_235.add_element(Sub_235);
      }
      Ord_3.add_element(Pty_235);
    }
    {
      xml_element PreAll_12{"PreAll"};
      multiset<string> PreAll_12_set;
      PreAll_12.add_attribute("Acct", "AllocAccount_t_400698551"); // 2
      PreAll_12_set.insert("AllocAccount_t_400698551");
      PreAll_12.add_attribute("ActIDSrc", "5"); // 2
      PreAll_12_set.insert("5");
      PreAll_12.add_attribute("AllocSettlCcy", "USD"); // 2
      PreAll_12_set.insert("USD");
      PreAll_12.add_attribute("IndAllocID", "IndividualAllocID_t_1396016097"); // 2
      PreAll_12_set.insert("IndividualAllocID_t_1396016097");
      PreAll_12.add_attribute("Qty", "2833492.520000"); // 2
      PreAll_12_set.insert("2833492.520000");
      all_values.push_back(PreAll_12_set);
      all_compo_names.insert("PreAll_12_set");

      {
        xml_element Pty_236{"Pty"};
        multiset<string> Pty_236_set;
        Pty_236.add_attribute("ID", "NestedPartyID_t_590347802"); // 3
        Pty_236_set.insert("NestedPartyID_t_590347802");
        Pty_236.add_attribute("Src", "8"); // 3
        Pty_236_set.insert("8");
        Pty_236.add_attribute("R", "17"); // 3
        Pty_236_set.insert("17");
        all_values.push_back(Pty_236_set);
        all_compo_names.insert("Pty_236_set");

        {
          xml_element Sub_236{"Sub"};
          multiset<string> Sub_236_set;
          Sub_236.add_attribute("ID", "NestedPartySubID_t_1872563760"); // 4
          Sub_236_set.insert("NestedPartySubID_t_1872563760");
          Sub_236.add_attribute("Typ", "23"); // 4
          Sub_236_set.insert("23");
          all_values.push_back(Sub_236_set);
          all_compo_names.insert("Sub_236_set");

          Pty_236.add_element(Sub_236);
        }
        PreAll_12.add_element(Pty_236);
      }
      Ord_3.add_element(PreAll_12);
    }
    {
      xml_element DsplyInstr_4{"DsplyInstr"};
      multiset<string> DsplyInstr_4_set;
      DsplyInstr_4.add_attribute("DisplayQty", "18008388.970000"); // 2
      DsplyInstr_4_set.insert("18008388.970000");
      DsplyInstr_4.add_attribute("SecDspQty", "3802153.580000"); // 2
      DsplyInstr_4_set.insert("3802153.580000");
      DsplyInstr_4.add_attribute("DspWhn", "2"); // 2
      DsplyInstr_4_set.insert("2");
      DsplyInstr_4.add_attribute("DspMthd", "1"); // 2
      DsplyInstr_4_set.insert("1");
      DsplyInstr_4.add_attribute("DsplLwQty", "9920497.770000"); // 2
      DsplyInstr_4_set.insert("9920497.770000");
      DsplyInstr_4.add_attribute("DisplayHighQty", "9108408.950000"); // 2
      DsplyInstr_4_set.insert("9108408.950000");
      DsplyInstr_4.add_attribute("DspMinIncr", "6373281.340000"); // 2
      DsplyInstr_4_set.insert("6373281.340000");
      DsplyInstr_4.add_attribute("RfrshQty", "11118398.950000"); // 2
      DsplyInstr_4_set.insert("11118398.950000");
      all_values.push_back(DsplyInstr_4_set);
      all_compo_names.insert("DsplyInstr_4_set");

      Ord_3.add_element(DsplyInstr_4);
    }
    {
      xml_element TrdSes_8{"TrdSes"};
      multiset<string> TrdSes_8_set;
      TrdSes_8.add_attribute("SesID", "6"); // 2
      TrdSes_8_set.insert("6");
      TrdSes_8.add_attribute("SesSub", "3"); // 2
      TrdSes_8_set.insert("3");
      all_values.push_back(TrdSes_8_set);
      all_compo_names.insert("TrdSes_8_set");

      Ord_3.add_element(TrdSes_8);
    }
    {
      xml_element Instrmt_42{"Instrmt"};
      multiset<string> Instrmt_42_set;
      Instrmt_42.add_attribute("Sym", "Symbol_t_394946729"); // 2
      Instrmt_42_set.insert("Symbol_t_394946729");
      Instrmt_42.add_attribute("Sfx", "WI"); // 2
      Instrmt_42_set.insert("WI");
      Instrmt_42.add_attribute("ID", "SecurityID_t_780906428"); // 2
      Instrmt_42_set.insert("SecurityID_t_780906428");
      Instrmt_42.add_attribute("Src", "D"); // 2
      Instrmt_42_set.insert("D");
      Instrmt_42.add_attribute("Prod", "3"); // 2
      Instrmt_42_set.insert("3");
      Instrmt_42.add_attribute("ProdCmplx", "ProductComplex_t_1525834369"); // 2
      Instrmt_42_set.insert("ProductComplex_t_1525834369");
      Instrmt_42.add_attribute("SecGrp", "SecurityGroup_t_874106422"); // 2
      Instrmt_42_set.insert("SecurityGroup_t_874106422");
      Instrmt_42.add_attribute("CFI", "CFICode_t_526602191"); // 2
      Instrmt_42_set.insert("CFICode_t_526602191");
      Instrmt_42.add_attribute("SecTyp", "FADN"); // 2
      Instrmt_42_set.insert("FADN");
      Instrmt_42.add_attribute("SubTyp", "SecuritySubType_t_418944078"); // 2
      Instrmt_42_set.insert("SecuritySubType_t_418944078");
      Instrmt_42.add_attribute("MMY", "927300742"); // 2
      Instrmt_42_set.insert("927300742");
      Instrmt_42.add_attribute("MatDt", "MaturityDate_t_1499464978"); // 2
      Instrmt_42_set.insert("MaturityDate_t_1499464978");
      Instrmt_42.add_attribute("MatTm", "2012817156"); // 2
      Instrmt_42_set.insert("2012817156");
      Instrmt_42.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_291080361"); // 2
      Instrmt_42_set.insert("SettleOnOpenFlag_t_291080361");
      Instrmt_42.add_attribute("AsgnMeth", "747997427"); // 2
      Instrmt_42_set.insert("747997427");
      Instrmt_42.add_attribute("Status", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CpnPmt", "CouponPaymentDate_t_881428163"); // 2
      Instrmt_42_set.insert("CouponPaymentDate_t_881428163");
      Instrmt_42.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_42_set.insert("FR");
      Instrmt_42.add_attribute("Snrty", "SB"); // 2
      Instrmt_42_set.insert("SB");
      Instrmt_42.add_attribute("NotlPctOut", "6065082.750000"); // 2
      Instrmt_42_set.insert("6065082.750000");
      Instrmt_42.add_attribute("OrigNotlPctOut", "7905456.370000"); // 2
      Instrmt_42_set.insert("7905456.370000");
      Instrmt_42.add_attribute("AttchPnt", "1596240.860000"); // 2
      Instrmt_42_set.insert("1596240.860000");
      Instrmt_42.add_attribute("DetchPnt", "9867236.340000"); // 2
      Instrmt_42_set.insert("9867236.340000");
      Instrmt_42.add_attribute("Issued", "IssueDate_t_437448428"); // 2
      Instrmt_42_set.insert("IssueDate_t_437448428");
      Instrmt_42.add_attribute("RepoCollSecTyp", "1886039830"); // 2
      Instrmt_42_set.insert("1886039830");
      Instrmt_42.add_attribute("RepoTrm", "1978773411"); // 2
      Instrmt_42_set.insert("1978773411");
      Instrmt_42.add_attribute("RepoRt", "13482893.230000"); // 2
      Instrmt_42_set.insert("13482893.230000");
      Instrmt_42.add_attribute("Fctr", "3758843.160000"); // 2
      Instrmt_42_set.insert("3758843.160000");
      Instrmt_42.add_attribute("CrdRtg", "CreditRating_t_943129658"); // 2
      Instrmt_42_set.insert("CreditRating_t_943129658");
      Instrmt_42.add_attribute("Rgstry", "InstrRegistry_t_423096322"); // 2
      Instrmt_42_set.insert("InstrRegistry_t_423096322");
      Instrmt_42.add_attribute("IssuCtry", "477009721"); // 2
      Instrmt_42_set.insert("477009721");
      Instrmt_42.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1338076387"); // 2
      Instrmt_42_set.insert("StateOrProvinceOfIssue_t_1338076387");
      Instrmt_42.add_attribute("Lcl", "LocaleOfIssue_t_213101476"); // 2
      Instrmt_42_set.insert("LocaleOfIssue_t_213101476");
      Instrmt_42.add_attribute("Redeem", "RedemptionDate_t_1257916149"); // 2
      Instrmt_42_set.insert("RedemptionDate_t_1257916149");
      Instrmt_42.add_attribute("StrkPx", "19092842.900000"); // 2
      Instrmt_42_set.insert("19092842.900000");
      Instrmt_42.add_attribute("StrkCcy", "CHF"); // 2
      Instrmt_42_set.insert("CHF");
      Instrmt_42.add_attribute("StrkMult", "6359070.640000"); // 2
      Instrmt_42_set.insert("6359070.640000");
      Instrmt_42.add_attribute("StrkValu", "21367094.660000"); // 2
      Instrmt_42_set.insert("21367094.660000");
      Instrmt_42.add_attribute("StrkPxDtrmnMeth", "2"); // 2
      Instrmt_42_set.insert("2");
      Instrmt_42.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_42_set.insert("4");
      Instrmt_42.add_attribute("StrkPxBndryPrcsn", "9165265.600000"); // 2
      Instrmt_42_set.insert("9165265.600000");
      Instrmt_42.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("OptAt", "920184651"); // 2
      Instrmt_42_set.insert("920184651");
      Instrmt_42.add_attribute("Mult", "12076069.210000"); // 2
      Instrmt_42_set.insert("12076069.210000");
      Instrmt_42.add_attribute("MultTyp", "0"); // 2
      Instrmt_42_set.insert("0");
      Instrmt_42.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("MinPxIncr", "20890350.840000"); // 2
      Instrmt_42_set.insert("20890350.840000");
      Instrmt_42.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_860007004"); // 2
      Instrmt_42_set.insert("MinPriceIncrementAmount_t_860007004");
      Instrmt_42.add_attribute("UOM", "Bcf"); // 2
      Instrmt_42_set.insert("Bcf");
      Instrmt_42.add_attribute("UOMQty", "5480597.120000"); // 2
      Instrmt_42_set.insert("5480597.120000");
      Instrmt_42.add_attribute("PxUOM", "Bcf"); // 2
      Instrmt_42_set.insert("Bcf");
      Instrmt_42.add_attribute("PxUOMQty", "17347603.340000"); // 2
      Instrmt_42_set.insert("17347603.340000");
      Instrmt_42.add_attribute("SettlMeth", "C"); // 2
      Instrmt_42_set.insert("C");
      Instrmt_42.add_attribute("ExerStyle", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("OptPayoutTyp", "2"); // 2
      Instrmt_42_set.insert("2");
      Instrmt_42.add_attribute("OptPayAmt", "OptPayoutAmount_t_1366073109"); // 2
      Instrmt_42_set.insert("OptPayoutAmount_t_1366073109");
      Instrmt_42.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_42_set.insert("INX");
      Instrmt_42.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_42_set.insert("FUTDA");
      Instrmt_42.add_attribute("ListMeth", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CapPx", "17119030.670000"); // 2
      Instrmt_42_set.insert("17119030.670000");
      Instrmt_42.add_attribute("FlrPx", "1787269.050000"); // 2
      Instrmt_42_set.insert("1787269.050000");
      Instrmt_42.add_attribute("PutCall", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("FlexInd", "false"); // 2
      Instrmt_42_set.insert("false");
      Instrmt_42.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_42_set.insert("false");
      Instrmt_42.add_attribute("TmUnit", "H"); // 2
      Instrmt_42_set.insert("H");
      Instrmt_42.add_attribute("CpnRt", "13876281.700000"); // 2
      Instrmt_42_set.insert("13876281.700000");
      Instrmt_42.add_attribute("Exch", "SecurityExchange_t_2072909926"); // 2
      Instrmt_42_set.insert("SecurityExchange_t_2072909926");
      Instrmt_42.add_attribute("PosLmt", "1897503213"); // 2
      Instrmt_42_set.insert("1897503213");
      Instrmt_42.add_attribute("NTPosLmt", "1376853988"); // 2
      Instrmt_42_set.insert("1376853988");
      Instrmt_42.add_attribute("Issr", "Issuer_t_2046928499"); // 2
      Instrmt_42_set.insert("Issuer_t_2046928499");
      Instrmt_42.add_attribute("EncIssrLen", "804870708"); // 2
      Instrmt_42_set.insert("804870708");
      Instrmt_42.add_attribute("EncIssr", "EncodedIssuer_t_145896900"); // 2
      Instrmt_42_set.insert("EncodedIssuer_t_145896900");
      Instrmt_42.add_attribute("Desc", "SecurityDesc_t_1372928403"); // 2
      Instrmt_42_set.insert("SecurityDesc_t_1372928403");
      Instrmt_42.add_attribute("EncSecDescLen", "1725055359"); // 2
      Instrmt_42_set.insert("1725055359");
      Instrmt_42.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1353503822"); // 2
      Instrmt_42_set.insert("EncodedSecurityDesc_t_1353503822");
      Instrmt_42.add_attribute("Pool", "Pool_t_1446925735"); // 2
      Instrmt_42_set.insert("Pool_t_1446925735");
      Instrmt_42.add_attribute("CSetMo", "646439123"); // 2
      Instrmt_42_set.insert("646439123");
      Instrmt_42.add_attribute("CPPgm", "1"); // 2
      Instrmt_42_set.insert("1");
      Instrmt_42.add_attribute("CPRegT", "CPRegType_t_159449091"); // 2
      Instrmt_42_set.insert("CPRegType_t_159449091");
      Instrmt_42.add_attribute("Dated", "DatedDate_t_74091723"); // 2
      Instrmt_42_set.insert("DatedDate_t_74091723");
      Instrmt_42.add_attribute("IntAcrl", "InterestAccrualDate_t_1843114970"); // 2
      Instrmt_42_set.insert("InterestAccrualDate_t_1843114970");
      all_values.push_back(Instrmt_42_set);
      all_compo_names.insert("Instrmt_42_set");

      {
        xml_element AID_45{"AID"};
        multiset<string> AID_45_set;
        AID_45.add_attribute("AltID", "SecurityAltID_t_1810001732"); // 3
        AID_45_set.insert("SecurityAltID_t_1810001732");
        AID_45.add_attribute("AltIDSrc", "2"); // 3
        AID_45_set.insert("2");
        all_values.push_back(AID_45_set);
        all_compo_names.insert("AID_45_set");

        Instrmt_42.add_element(AID_45);
      }
      {
        xml_element SecXML_45{"SecXML"};
        multiset<string> SecXML_45_set;
        SecXML_45.add_attribute("Schema", "SecurityXMLSchema_t_1230414668"); // 3
        SecXML_45_set.insert("SecurityXMLSchema_t_1230414668");
        all_values.push_back(SecXML_45_set);
        all_compo_names.insert("SecXML_45_set");

        Instrmt_42.add_element(SecXML_45);
      }
      {
        xml_element Evnt_45{"Evnt"};
        multiset<string> Evnt_45_set;
        Evnt_45.add_attribute("EventTyp", "13"); // 3
        Evnt_45_set.insert("13");
        Evnt_45.add_attribute("Dt", "EventDate_t_1134684925"); // 3
        Evnt_45_set.insert("EventDate_t_1134684925");
        Evnt_45.add_attribute("Tm", "EventTime_t_449004129"); // 3
        Evnt_45_set.insert("EventTime_t_449004129");
        Evnt_45.add_attribute("Px", "8918422.500000"); // 3
        Evnt_45_set.insert("8918422.500000");
        Evnt_45.add_attribute("Txt", "EventText_t_836402109"); // 3
        Evnt_45_set.insert("EventText_t_836402109");
        all_values.push_back(Evnt_45_set);
        all_compo_names.insert("Evnt_45_set");

        Instrmt_42.add_element(Evnt_45);
      }
      {
        xml_element Pty_237{"Pty"};
        multiset<string> Pty_237_set;
        Pty_237.add_attribute("ID", "InstrumentPartyID_t_610723249"); // 3
        Pty_237_set.insert("InstrumentPartyID_t_610723249");
        Pty_237.add_attribute("Src", "B"); // 3
        Pty_237_set.insert("B");
        Pty_237.add_attribute("R", "28"); // 3
        Pty_237_set.insert("28");
        all_values.push_back(Pty_237_set);
        all_compo_names.insert("Pty_237_set");

        {
          xml_element Sub_237{"Sub"};
          multiset<string> Sub_237_set;
          Sub_237.add_attribute("ID", "InstrumentPartySubID_t_2110518756"); // 4
          Sub_237_set.insert("InstrumentPartySubID_t_2110518756");
          Sub_237.add_attribute("Typ", "14"); // 4
          Sub_237_set.insert("14");
          all_values.push_back(Sub_237_set);
          all_compo_names.insert("Sub_237_set");

          Pty_237.add_element(Sub_237);
        }
        Instrmt_42.add_element(Pty_237);
      }
      {
        xml_element CmplxEvnt_42{"CmplxEvnt"};
        multiset<string> CmplxEvnt_42_set;
        CmplxEvnt_42.add_attribute("Typ", "7"); // 3
        CmplxEvnt_42_set.insert("7");
        CmplxEvnt_42.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1224631257"); // 3
        CmplxEvnt_42_set.insert("ComplexOptPayoutAmount_t_1224631257");
        CmplxEvnt_42.add_attribute("Px", "16214107.350000"); // 3
        CmplxEvnt_42_set.insert("16214107.350000");
        CmplxEvnt_42.add_attribute("PxBndryMeth", "1"); // 3
        CmplxEvnt_42_set.insert("1");
        CmplxEvnt_42.add_attribute("PxBndryPrcsn", "9746508.220000"); // 3
        CmplxEvnt_42_set.insert("9746508.220000");
        CmplxEvnt_42.add_attribute("PxTmTyp", "3"); // 3
        CmplxEvnt_42_set.insert("3");
        CmplxEvnt_42.add_attribute("Cond", "2"); // 3
        CmplxEvnt_42_set.insert("2");
        all_values.push_back(CmplxEvnt_42_set);
        all_compo_names.insert("CmplxEvnt_42_set");

        {
          xml_element EvntDts_42{"EvntDts"};
          multiset<string> EvntDts_42_set;
          EvntDts_42.add_attribute("StartDt", "ComplexEventStartDate_t_1779521531"); // 4
          EvntDts_42_set.insert("ComplexEventStartDate_t_1779521531");
          EvntDts_42.add_attribute("EndDt", "ComplexEventEndDate_t_996677976"); // 4
          EvntDts_42_set.insert("ComplexEventEndDate_t_996677976");
          all_values.push_back(EvntDts_42_set);
          all_compo_names.insert("EvntDts_42_set");

          {
            xml_element EvntTms_42{"EvntTms"};
            multiset<string> EvntTms_42_set;
            EvntTms_42.add_attribute("StartTm", "1502087955"); // 5
            EvntTms_42_set.insert("1502087955");
            EvntTms_42.add_attribute("EndTm", "1357093242"); // 5
            EvntTms_42_set.insert("1357093242");
            all_values.push_back(EvntTms_42_set);
            all_compo_names.insert("EvntTms_42_set");

            EvntDts_42.add_element(EvntTms_42);
          }
          CmplxEvnt_42.add_element(EvntDts_42);
        }
        Instrmt_42.add_element(CmplxEvnt_42);
      }
      Ord_3.add_element(Instrmt_42);
    }
    {
      xml_element Undly_56{"Undly"};
      multiset<string> Undly_56_set;
      Undly_56.add_attribute("Sym", "UnderlyingSymbol_t_202698150"); // 2
      Undly_56_set.insert("UnderlyingSymbol_t_202698150");
      Undly_56.add_attribute("Sfx", "CD"); // 2
      Undly_56_set.insert("CD");
      Undly_56.add_attribute("ID", "UnderlyingSecurityID_t_2003532365"); // 2
      Undly_56_set.insert("UnderlyingSecurityID_t_2003532365");
      Undly_56.add_attribute("Src", "9"); // 2
      Undly_56_set.insert("9");
      Undly_56.add_attribute("Prod", "7"); // 2
      Undly_56_set.insert("7");
      Undly_56.add_attribute("CFI", "UnderlyingCFICode_t_2077624088"); // 2
      Undly_56_set.insert("UnderlyingCFICode_t_2077624088");
      Undly_56.add_attribute("SecTyp", "PROV"); // 2
      Undly_56_set.insert("PROV");
      Undly_56.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_623497217"); // 2
      Undly_56_set.insert("UnderlyingSecuritySubType_t_623497217");
      Undly_56.add_attribute("MMY", "1738992497"); // 2
      Undly_56_set.insert("1738992497");
      Undly_56.add_attribute("Mat", "UnderlyingMaturityDate_t_276315751"); // 2
      Undly_56_set.insert("UnderlyingMaturityDate_t_276315751");
      Undly_56.add_attribute("MatTm", "226532722"); // 2
      Undly_56_set.insert("226532722");
      Undly_56.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_726193774"); // 2
      Undly_56_set.insert("UnderlyingCouponPaymentDate_t_726193774");
      Undly_56.add_attribute("RestrctTyp", "MR"); // 2
      Undly_56_set.insert("MR");
      Undly_56.add_attribute("Snrty", "SB"); // 2
      Undly_56_set.insert("SB");
      Undly_56.add_attribute("NotlPctOut", "15625958.840000"); // 2
      Undly_56_set.insert("15625958.840000");
      Undly_56.add_attribute("OrigNotlPctOut", "13360431.300000"); // 2
      Undly_56_set.insert("13360431.300000");
      Undly_56.add_attribute("AttchPnt", "15746366.430000"); // 2
      Undly_56_set.insert("15746366.430000");
      Undly_56.add_attribute("DetchPnt", "4302412.510000"); // 2
      Undly_56_set.insert("4302412.510000");
      Undly_56.add_attribute("Issued", "UnderlyingIssueDate_t_1299078238"); // 2
      Undly_56_set.insert("UnderlyingIssueDate_t_1299078238");
      Undly_56.add_attribute("RepoCollSecTyp", "1808419208"); // 2
      Undly_56_set.insert("1808419208");
      Undly_56.add_attribute("RepoTrm", "734529673"); // 2
      Undly_56_set.insert("734529673");
      Undly_56.add_attribute("RepoRt", "3762258.470000"); // 2
      Undly_56_set.insert("3762258.470000");
      Undly_56.add_attribute("Fctr", "12823462.960000"); // 2
      Undly_56_set.insert("12823462.960000");
      Undly_56.add_attribute("CrdRtg", "UnderlyingCreditRating_t_964244373"); // 2
      Undly_56_set.insert("UnderlyingCreditRating_t_964244373");
      Undly_56.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1350876669"); // 2
      Undly_56_set.insert("UnderlyingInstrRegistry_t_1350876669");
      Undly_56.add_attribute("Ctry", "2133127371"); // 2
      Undly_56_set.insert("2133127371");
      Undly_56.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1093403924"); // 2
      Undly_56_set.insert("UnderlyingStateOrProvinceOfIssue_t_1093403924");
      Undly_56.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_982914552"); // 2
      Undly_56_set.insert("UnderlyingLocaleOfIssue_t_982914552");
      Undly_56.add_attribute("Redeem", "UnderlyingRedemptionDate_t_982321699"); // 2
      Undly_56_set.insert("UnderlyingRedemptionDate_t_982321699");
      Undly_56.add_attribute("StrkPx", "4480082.310000"); // 2
      Undly_56_set.insert("4480082.310000");
      Undly_56.add_attribute("StrkCcy", "EUR"); // 2
      Undly_56_set.insert("EUR");
      Undly_56.add_attribute("OptA", "1249538273"); // 2
      Undly_56_set.insert("1249538273");
      Undly_56.add_attribute("Mult", "485728.640000"); // 2
      Undly_56_set.insert("485728.640000");
      Undly_56.add_attribute("MultTyp", "0"); // 2
      Undly_56_set.insert("0");
      Undly_56.add_attribute("FlowSchedTyp", "3"); // 2
      Undly_56_set.insert("3");
      Undly_56.add_attribute("UOM", "Bcf"); // 2
      Undly_56_set.insert("Bcf");
      Undly_56.add_attribute("UOMQty", "17286743.410000"); // 2
      Undly_56_set.insert("17286743.410000");
      Undly_56.add_attribute("PxUOM", "MWh"); // 2
      Undly_56_set.insert("MWh");
      Undly_56.add_attribute("PxUOMQty", "17177058.020000"); // 2
      Undly_56_set.insert("17177058.020000");
      Undly_56.add_attribute("TmUnit", "S"); // 2
      Undly_56_set.insert("S");
      Undly_56.add_attribute("ExerStyle", "0"); // 2
      Undly_56_set.insert("0");
      Undly_56.add_attribute("CpnRt", "2964159.290000"); // 2
      Undly_56_set.insert("2964159.290000");
      Undly_56.add_attribute("Exch", "UnderlyingSecurityExchange_t_582826325"); // 2
      Undly_56_set.insert("UnderlyingSecurityExchange_t_582826325");
      Undly_56.add_attribute("Issr", "UnderlyingIssuer_t_2031438671"); // 2
      Undly_56_set.insert("UnderlyingIssuer_t_2031438671");
      Undly_56.add_attribute("EncUndIssrLen", "1859011813"); // 2
      Undly_56_set.insert("1859011813");
      Undly_56.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1918869455"); // 2
      Undly_56_set.insert("EncodedUnderlyingIssuer_t_1918869455");
      Undly_56.add_attribute("Desc", "UnderlyingSecurityDesc_t_1458591666"); // 2
      Undly_56_set.insert("UnderlyingSecurityDesc_t_1458591666");
      Undly_56.add_attribute("EncUndSecDescLen", "141769416"); // 2
      Undly_56_set.insert("141769416");
      Undly_56.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1070464045"); // 2
      Undly_56_set.insert("EncodedUnderlyingSecurityDesc_t_1070464045");
      Undly_56.add_attribute("CPPgm", "UnderlyingCPProgram_t_1119527226"); // 2
      Undly_56_set.insert("UnderlyingCPProgram_t_1119527226");
      Undly_56.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_876299089"); // 2
      Undly_56_set.insert("UnderlyingCPRegType_t_876299089");
      Undly_56.add_attribute("AllocPct", "14466898.920000"); // 2
      Undly_56_set.insert("14466898.920000");
      Undly_56.add_attribute("Ccy", "JPY"); // 2
      Undly_56_set.insert("JPY");
      Undly_56.add_attribute("Qty", "6500829.140000"); // 2
      Undly_56_set.insert("6500829.140000");
      Undly_56.add_attribute("SettlTyp", "4"); // 2
      Undly_56_set.insert("4");
      Undly_56.add_attribute("CashAmt", "UnderlyingCashAmount_t_786463738"); // 2
      Undly_56_set.insert("UnderlyingCashAmount_t_786463738");
      Undly_56.add_attribute("CashTyp", "FIXED"); // 2
      Undly_56_set.insert("FIXED");
      Undly_56.add_attribute("Px", "12223552.970000"); // 2
      Undly_56_set.insert("12223552.970000");
      Undly_56.add_attribute("DirtPx", "12344719.700000"); // 2
      Undly_56_set.insert("12344719.700000");
      Undly_56.add_attribute("EndPx", "18255216.130000"); // 2
      Undly_56_set.insert("18255216.130000");
      Undly_56.add_attribute("StartVal", "UnderlyingStartValue_t_259891499"); // 2
      Undly_56_set.insert("UnderlyingStartValue_t_259891499");
      Undly_56.add_attribute("CurVal", "UnderlyingCurrentValue_t_336526595"); // 2
      Undly_56_set.insert("UnderlyingCurrentValue_t_336526595");
      Undly_56.add_attribute("EndVal", "UnderlyingEndValue_t_1874094478"); // 2
      Undly_56_set.insert("UnderlyingEndValue_t_1874094478");
      Undly_56.add_attribute("AdjQty", "7951811.090000"); // 2
      Undly_56_set.insert("7951811.090000");
      Undly_56.add_attribute("FxRate", "3995603.540000"); // 2
      Undly_56_set.insert("3995603.540000");
      Undly_56.add_attribute("FxRateCalc", "D"); // 2
      Undly_56_set.insert("D");
      Undly_56.add_attribute("CapValu", "UnderlyingCapValue_t_376371802"); // 2
      Undly_56_set.insert("UnderlyingCapValue_t_376371802");
      Undly_56.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1086091329"); // 2
      Undly_56_set.insert("UnderlyingSettlMethod_t_1086091329");
      Undly_56.add_attribute("PutCall", "1423029937"); // 2
      Undly_56_set.insert("1423029937");
      all_values.push_back(Undly_56_set);
      all_compo_names.insert("Undly_56_set");

      {
        xml_element UndAID_56{"UndAID"};
        multiset<string> UndAID_56_set;
        UndAID_56.add_attribute("AltID", "UnderlyingSecurityAltID_t_233878246"); // 3
        UndAID_56_set.insert("UnderlyingSecurityAltID_t_233878246");
        UndAID_56.add_attribute("AltIDSrc", "2"); // 3
        UndAID_56_set.insert("2");
        all_values.push_back(UndAID_56_set);
        all_compo_names.insert("UndAID_56_set");

        Undly_56.add_element(UndAID_56);
      }
      {
        xml_element Stip_85{"Stip"};
        multiset<string> Stip_85_set;
        Stip_85.add_attribute("Typ", "MININCR"); // 3
        Stip_85_set.insert("MININCR");
        Stip_85.add_attribute("Val", "UnderlyingStipValue_t_816704572"); // 3
        Stip_85_set.insert("UnderlyingStipValue_t_816704572");
        all_values.push_back(Stip_85_set);
        all_compo_names.insert("Stip_85_set");

        Undly_56.add_element(Stip_85);
      }
      {
        xml_element Pty_238{"Pty"};
        multiset<string> Pty_238_set;
        Pty_238.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1883110050"); // 3
        Pty_238_set.insert("UnderlyingInstrumentPartyID_t_1883110050");
        Pty_238.add_attribute("Src", "6"); // 3
        Pty_238_set.insert("6");
        Pty_238.add_attribute("R", "81"); // 3
        Pty_238_set.insert("81");
        all_values.push_back(Pty_238_set);
        all_compo_names.insert("Pty_238_set");

        {
          xml_element Sub_238{"Sub"};
          multiset<string> Sub_238_set;
          Sub_238.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1194218068"); // 4
          Sub_238_set.insert("UnderlyingInstrumentPartySubID_t_1194218068");
          Sub_238.add_attribute("Typ", "2"); // 4
          Sub_238_set.insert("2");
          all_values.push_back(Sub_238_set);
          all_compo_names.insert("Sub_238_set");

          Pty_238.add_element(Sub_238);
        }
        Undly_56.add_element(Pty_238);
      }
      Ord_3.add_element(Undly_56);
    }
    {
      xml_element Stip_86{"Stip"};
      multiset<string> Stip_86_set;
      Stip_86.add_attribute("Typ", "MINDNOM"); // 2
      Stip_86_set.insert("MINDNOM");
      Stip_86.add_attribute("Val", "StipulationValue_t_166261647"); // 2
      Stip_86_set.insert("StipulationValue_t_166261647");
      all_values.push_back(Stip_86_set);
      all_compo_names.insert("Stip_86_set");

      Ord_3.add_element(Stip_86);
    }
    {
      xml_element OrdQty_14{"OrdQty"};
      multiset<string> OrdQty_14_set;
      OrdQty_14.add_attribute("Qty", "3015588.880000"); // 2
      OrdQty_14_set.insert("3015588.880000");
      OrdQty_14.add_attribute("Cash", "9577606.690000"); // 2
      OrdQty_14_set.insert("9577606.690000");
      OrdQty_14.add_attribute("Pct", "4206515.210000"); // 2
      OrdQty_14_set.insert("4206515.210000");
      OrdQty_14.add_attribute("RndDir", "2"); // 2
      OrdQty_14_set.insert("2");
      OrdQty_14.add_attribute("RndMod", "16078435.830000"); // 2
      OrdQty_14_set.insert("16078435.830000");
      all_values.push_back(OrdQty_14_set);
      all_compo_names.insert("OrdQty_14_set");

      Ord_3.add_element(OrdQty_14);
    }
    {
      xml_element TrgrInstr_4{"TrgrInstr"};
      multiset<string> TrgrInstr_4_set;
      TrgrInstr_4.add_attribute("TrgrTyp", "4"); // 2
      TrgrInstr_4_set.insert("4");
      TrgrInstr_4.add_attribute("TrgrActn", "3"); // 2
      TrgrInstr_4_set.insert("3");
      TrgrInstr_4.add_attribute("TrgrPx", "10933574.020000"); // 2
      TrgrInstr_4_set.insert("10933574.020000");
      TrgrInstr_4.add_attribute("TrgrSym", "TriggerSymbol_t_1883040417"); // 2
      TrgrInstr_4_set.insert("TriggerSymbol_t_1883040417");
      TrgrInstr_4.add_attribute("TrgrSecID", "TriggerSecurityID_t_2015554411"); // 2
      TrgrInstr_4_set.insert("TriggerSecurityID_t_2015554411");
      TrgrInstr_4.add_attribute("TrgrSecIDSrc", "I"); // 2
      TrgrInstr_4_set.insert("I");
      TrgrInstr_4.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_2142931916"); // 2
      TrgrInstr_4_set.insert("TriggerSecurityDesc_t_2142931916");
      TrgrInstr_4.add_attribute("TrgrPxTyp", "5"); // 2
      TrgrInstr_4_set.insert("5");
      TrgrInstr_4.add_attribute("TrgrPxTypScp", "1"); // 2
      TrgrInstr_4_set.insert("1");
      TrgrInstr_4.add_attribute("TrgrPxDir", "D"); // 2
      TrgrInstr_4_set.insert("D");
      TrgrInstr_4.add_attribute("TrgrNewPx", "6041577.120000"); // 2
      TrgrInstr_4_set.insert("6041577.120000");
      TrgrInstr_4.add_attribute("TrgrOrdTyp", "1"); // 2
      TrgrInstr_4_set.insert("1");
      TrgrInstr_4.add_attribute("TrgrNewQty", "11670011.790000"); // 2
      TrgrInstr_4_set.insert("11670011.790000");
      TrgrInstr_4.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1690249042"); // 2
      TrgrInstr_4_set.insert("TriggerTradingSessionID_t_1690249042");
      TrgrInstr_4.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1626360270"); // 2
      TrgrInstr_4_set.insert("TriggerTradingSessionSubID_t_1626360270");
      all_values.push_back(TrgrInstr_4_set);
      all_compo_names.insert("TrgrInstr_4_set");

      Ord_3.add_element(TrgrInstr_4);
    }
    {
      xml_element SprdBnchmkCurve_18{"SprdBnchmkCurve"};
      multiset<string> SprdBnchmkCurve_18_set;
      SprdBnchmkCurve_18.add_attribute("Spread", "14008794.250000"); // 2
      SprdBnchmkCurve_18_set.insert("14008794.250000");
      SprdBnchmkCurve_18.add_attribute("Ccy", "JPY"); // 2
      SprdBnchmkCurve_18_set.insert("JPY");
      SprdBnchmkCurve_18.add_attribute("Name", "SONIA"); // 2
      SprdBnchmkCurve_18_set.insert("SONIA");
      SprdBnchmkCurve_18.add_attribute("Point", "BenchmarkCurvePoint_t_1277546824"); // 2
      SprdBnchmkCurve_18_set.insert("BenchmarkCurvePoint_t_1277546824");
      SprdBnchmkCurve_18.add_attribute("Px", "4818128.720000"); // 2
      SprdBnchmkCurve_18_set.insert("4818128.720000");
      SprdBnchmkCurve_18.add_attribute("PxTyp", "13"); // 2
      SprdBnchmkCurve_18_set.insert("13");
      SprdBnchmkCurve_18.add_attribute("SecID", "BenchmarkSecurityID_t_324281244"); // 2
      SprdBnchmkCurve_18_set.insert("BenchmarkSecurityID_t_324281244");
      SprdBnchmkCurve_18.add_attribute("SecIDSrc", "E"); // 2
      SprdBnchmkCurve_18_set.insert("E");
      all_values.push_back(SprdBnchmkCurve_18_set);
      all_compo_names.insert("SprdBnchmkCurve_18_set");

      Ord_3.add_element(SprdBnchmkCurve_18);
    }
    {
      xml_element Yield_13{"Yield"};
      multiset<string> Yield_13_set;
      Yield_13.add_attribute("Typ", "MATURITY"); // 2
      Yield_13_set.insert("MATURITY");
      Yield_13.add_attribute("Yld", "4905428.910000"); // 2
      Yield_13_set.insert("4905428.910000");
      Yield_13.add_attribute("CalcDt", "YieldCalcDate_t_208631560"); // 2
      Yield_13_set.insert("YieldCalcDate_t_208631560");
      Yield_13.add_attribute("RedDt", "YieldRedemptionDate_t_1127022175"); // 2
      Yield_13_set.insert("YieldRedemptionDate_t_1127022175");
      Yield_13.add_attribute("RedPx", "9111944.130000"); // 2
      Yield_13_set.insert("9111944.130000");
      Yield_13.add_attribute("RedPxTyp", "3"); // 2
      Yield_13_set.insert("3");
      all_values.push_back(Yield_13_set);
      all_compo_names.insert("Yield_13_set");

      Ord_3.add_element(Yield_13);
    }
    {
      xml_element Comm_21{"Comm"};
      multiset<string> Comm_21_set;
      Comm_21.add_attribute("Comm", "Commission_t_587382111"); // 2
      Comm_21_set.insert("Commission_t_587382111");
      Comm_21.add_attribute("CommTyp", "1"); // 2
      Comm_21_set.insert("1");
      Comm_21.add_attribute("Ccy", "EUR"); // 2
      Comm_21_set.insert("EUR");
      Comm_21.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_21_set.insert("Y");
      all_values.push_back(Comm_21_set);
      all_compo_names.insert("Comm_21_set");

      Ord_3.add_element(Comm_21);
    }
    {
      xml_element PegInstr_4{"PegInstr"};
      multiset<string> PegInstr_4_set;
      PegInstr_4.add_attribute("OfstVal", "8524034.660000"); // 2
      PegInstr_4_set.insert("8524034.660000");
      PegInstr_4.add_attribute("PegPxTyp", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("MoveTyp", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("OfstTyp", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("LmtTyp", "2"); // 2
      PegInstr_4_set.insert("2");
      PegInstr_4.add_attribute("RndDir", "1"); // 2
      PegInstr_4_set.insert("1");
      PegInstr_4.add_attribute("Scope", "2"); // 2
      PegInstr_4_set.insert("2");
      PegInstr_4.add_attribute("PegSecurityIDSource", "B"); // 2
      PegInstr_4_set.insert("B");
      PegInstr_4.add_attribute("PegSecID", "PegSecurityID_t_1113031477"); // 2
      PegInstr_4_set.insert("PegSecurityID_t_1113031477");
      PegInstr_4.add_attribute("PgSymbl", "PegSymbol_t_1203923931"); // 2
      PegInstr_4_set.insert("PegSymbol_t_1203923931");
      PegInstr_4.add_attribute("PegSecDesc", "PegSecurityDesc_t_484864384"); // 2
      PegInstr_4_set.insert("PegSecurityDesc_t_484864384");
      all_values.push_back(PegInstr_4_set);
      all_compo_names.insert("PegInstr_4_set");

      Ord_3.add_element(PegInstr_4);
    }
    {
      xml_element DiscInstr_4{"DiscInstr"};
      multiset<string> DiscInstr_4_set;
      DiscInstr_4.add_attribute("DsctnInst", "7"); // 2
      DiscInstr_4_set.insert("7");
      DiscInstr_4.add_attribute("OfstValu", "5983607.050000"); // 2
      DiscInstr_4_set.insert("5983607.050000");
      DiscInstr_4.add_attribute("MoveTyp", "1"); // 2
      DiscInstr_4_set.insert("1");
      DiscInstr_4.add_attribute("OfstTyp", "0"); // 2
      DiscInstr_4_set.insert("0");
      DiscInstr_4.add_attribute("LimitTyp", "2"); // 2
      DiscInstr_4_set.insert("2");
      DiscInstr_4.add_attribute("RndDir", "2"); // 2
      DiscInstr_4_set.insert("2");
      DiscInstr_4.add_attribute("Scope", "2"); // 2
      DiscInstr_4_set.insert("2");
      all_values.push_back(DiscInstr_4_set);
      all_compo_names.insert("DiscInstr_4_set");

      Ord_3.add_element(DiscInstr_4);
    }
    {
      xml_element StrtPrmGrp_11{"StrtPrmGrp"};
      multiset<string> StrtPrmGrp_11_set;
      StrtPrmGrp_11.add_attribute("StrtPrmNme", "StrategyParameterName_t_52705125"); // 2
      StrtPrmGrp_11_set.insert("StrategyParameterName_t_52705125");
      StrtPrmGrp_11.add_attribute("StrtPrmTyp", "29"); // 2
      StrtPrmGrp_11_set.insert("29");
      StrtPrmGrp_11.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1263979839"); // 2
      StrtPrmGrp_11_set.insert("StrategyParameterValue_t_1263979839");
      all_values.push_back(StrtPrmGrp_11_set);
      all_compo_names.insert("StrtPrmGrp_11_set");

      Ord_3.add_element(StrtPrmGrp_11);
    }
    elt.add_element(Ord_3);
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
