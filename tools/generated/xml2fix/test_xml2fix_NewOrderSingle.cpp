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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"Order" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderSingle_message_t_0;
  elt.add_attribute("ID", "ClOrdID_t_21074678"); // 0
  NewOrderSingle_message_t_0.insert("ClOrdID_t_21074678");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_1375560110"); // 0
  NewOrderSingle_message_t_0.insert("SecondaryClOrdID_t_1375560110");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1605944823"); // 0
  NewOrderSingle_message_t_0.insert("ClOrdLinkID_t_1605944823");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_885289770"); // 0
  NewOrderSingle_message_t_0.insert("TradeOriginationDate_t_885289770");
  elt.add_attribute("TrdDt", "TradeDate_t_1076732235"); // 0
  NewOrderSingle_message_t_0.insert("TradeDate_t_1076732235");
  elt.add_attribute("Acct", "Account_t_1096277840"); // 0
  NewOrderSingle_message_t_0.insert("Account_t_1096277840");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  NewOrderSingle_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("DayBkngInst", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("BkngUnit", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("AllocID", "AllocID_t_956805089"); // 0
  NewOrderSingle_message_t_0.insert("AllocID_t_956805089");
  elt.add_attribute("SettlTyp", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("SettlDt", "SettlDate_t_1094975206"); // 0
  NewOrderSingle_message_t_0.insert("SettlDate_t_1094975206");
  elt.add_attribute("CshMgn", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("ClrFeeInd", "F"); // 0
  NewOrderSingle_message_t_0.insert("F");
  elt.add_attribute("HandlInst", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("ExecInst", "h"); // 0
  NewOrderSingle_message_t_0.insert("h");
  elt.add_attribute("MinQty", "1400832.370000"); // 0
  NewOrderSingle_message_t_0.insert("1400832.370000");
  elt.add_attribute("MtchInc", "13191422.380000"); // 0
  NewOrderSingle_message_t_0.insert("13191422.380000");
  elt.add_attribute("MxPxLvls", "197158889"); // 0
  NewOrderSingle_message_t_0.insert("197158889");
  elt.add_attribute("MaxFloor", "17169356.980000"); // 0
  NewOrderSingle_message_t_0.insert("17169356.980000");
  elt.add_attribute("ExDest", "ExDestination_t_1693062192"); // 0
  NewOrderSingle_message_t_0.insert("ExDestination_t_1693062192");
  elt.add_attribute("ExDestIDSrc", "D"); // 0
  NewOrderSingle_message_t_0.insert("D");
  elt.add_attribute("ProcCode", "6"); // 0
  NewOrderSingle_message_t_0.insert("6");
  elt.add_attribute("PrevClsPx", "9484463.430000"); // 0
  NewOrderSingle_message_t_0.insert("9484463.430000");
  elt.add_attribute("Side", "B"); // 0
  NewOrderSingle_message_t_0.insert("B");
  elt.add_attribute("LocReqd", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_1088910566"); // 0
  NewOrderSingle_message_t_0.insert("TransactTime_t_1088910566");
  elt.add_attribute("QtyTyp", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("Typ", "C"); // 0
  NewOrderSingle_message_t_0.insert("C");
  elt.add_attribute("PxTyp", "18"); // 0
  NewOrderSingle_message_t_0.insert("18");
  elt.add_attribute("Px", "14545827.350000"); // 0
  NewOrderSingle_message_t_0.insert("14545827.350000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("StopPx", "19952750.150000"); // 0
  NewOrderSingle_message_t_0.insert("19952750.150000");
  elt.add_attribute("Ccy", "EUR"); // 0
  NewOrderSingle_message_t_0.insert("EUR");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1445039712"); // 0
  NewOrderSingle_message_t_0.insert("ComplianceID_t_1445039712");
  elt.add_attribute("SolFlag", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("IOIID", "IOIID_t_1937998529"); // 0
  NewOrderSingle_message_t_0.insert("IOIID_t_1937998529");
  elt.add_attribute("QID", "QuoteID_t_2123417586"); // 0
  NewOrderSingle_message_t_0.insert("QuoteID_t_2123417586");
  elt.add_attribute("TmInForce", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_747319970"); // 0
  NewOrderSingle_message_t_0.insert("EffectiveTime_t_747319970");
  elt.add_attribute("ExpireDt", "ExpireDate_t_367426128"); // 0
  NewOrderSingle_message_t_0.insert("ExpireDate_t_367426128");
  elt.add_attribute("ExpireTm", "ExpireTime_t_598313718"); // 0
  NewOrderSingle_message_t_0.insert("ExpireTime_t_598313718");
  elt.add_attribute("GTBkngInst", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("Cpcty", "G"); // 0
  NewOrderSingle_message_t_0.insert("G");
  elt.add_attribute("Rstctions", "7"); // 0
  NewOrderSingle_message_t_0.insert("7");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  NewOrderSingle_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("ForexReq", "N"); // 0
  NewOrderSingle_message_t_0.insert("N");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  NewOrderSingle_message_t_0.insert("JPY");
  elt.add_attribute("BkngTyp", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_129807068"); // 0
  NewOrderSingle_message_t_0.insert("Text_t_129807068");
  elt.add_attribute("EncTxtLen", "451998881"); // 0
  NewOrderSingle_message_t_0.insert("451998881");
  elt.add_attribute("EncTxt", "EncodedText_t_591152329"); // 0
  NewOrderSingle_message_t_0.insert("EncodedText_t_591152329");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1479614742"); // 0
  NewOrderSingle_message_t_0.insert("SettlDate2_t_1479614742");
  elt.add_attribute("Qty2", "17157372.670000"); // 0
  NewOrderSingle_message_t_0.insert("17157372.670000");
  elt.add_attribute("Px2", "16800628.950000"); // 0
  NewOrderSingle_message_t_0.insert("16800628.950000");
  elt.add_attribute("PosEfct", "R"); // 0
  NewOrderSingle_message_t_0.insert("R");
  elt.add_attribute("Covered", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "6425644.920000"); // 0
  NewOrderSingle_message_t_0.insert("6425644.920000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_640995776"); // 0
  NewOrderSingle_message_t_0.insert("TargetStrategyParameters_t_640995776");
  elt.add_attribute("ParticipationRt", "4903558.590000"); // 0
  NewOrderSingle_message_t_0.insert("4903558.590000");
  elt.add_attribute("CxllationRights", "M"); // 0
  NewOrderSingle_message_t_0.insert("M");
  elt.add_attribute("MnyLaunderingStat", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("RegistID", "RegistID_t_1935395571"); // 0
  NewOrderSingle_message_t_0.insert("RegistID_t_1935395571");
  elt.add_attribute("Designation", "Designation_t_1904734984"); // 0
  NewOrderSingle_message_t_0.insert("Designation_t_1904734984");
  elt.add_attribute("ManOrdInd", "false"); // 0
  NewOrderSingle_message_t_0.insert("false");
  elt.add_attribute("CustDrctdOrd", "false"); // 0
  NewOrderSingle_message_t_0.insert("false");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_1408073496"); // 0
  NewOrderSingle_message_t_0.insert("ReceivedDeptID_t_1408073496");
  elt.add_attribute("CustOrdHdlInst", "NH"); // 0
  NewOrderSingle_message_t_0.insert("NH");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("RefOrdID", "RefOrderID_t_2006387214"); // 0
  NewOrderSingle_message_t_0.insert("RefOrderID_t_2006387214");
  elt.add_attribute("RefOrdIDSrc", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  all_values.push_back(NewOrderSingle_message_t_0);
  all_compo_names.insert("NewOrderSingle_message_t");

  { // Hdr
    xml_element Hdr_54{"Hdr"};
    multiset<string> Hdr_54_set;
    Hdr_54.add_attribute("SeqNum", "1437134100"); // 1
    Hdr_54_set.insert("1437134100");
    Hdr_54.add_attribute("SID", "SenderCompID_t_784372417"); // 1
    Hdr_54_set.insert("SenderCompID_t_784372417");
    Hdr_54.add_attribute("TID", "TargetCompID_t_1475743277"); // 1
    Hdr_54_set.insert("TargetCompID_t_1475743277");
    Hdr_54.add_attribute("OBID", "OnBehalfOfCompID_t_735595801"); // 1
    Hdr_54_set.insert("OnBehalfOfCompID_t_735595801");
    Hdr_54.add_attribute("D2ID", "DeliverToCompID_t_881499859"); // 1
    Hdr_54_set.insert("DeliverToCompID_t_881499859");
    Hdr_54.add_attribute("SSub", "SenderSubID_t_2117573431"); // 1
    Hdr_54_set.insert("SenderSubID_t_2117573431");
    Hdr_54.add_attribute("SLoc", "SenderLocationID_t_1750993199"); // 1
    Hdr_54_set.insert("SenderLocationID_t_1750993199");
    Hdr_54.add_attribute("TSub", "TargetSubID_t_524205846"); // 1
    Hdr_54_set.insert("TargetSubID_t_524205846");
    Hdr_54.add_attribute("TLoc", "TargetLocationID_t_99896851"); // 1
    Hdr_54_set.insert("TargetLocationID_t_99896851");
    Hdr_54.add_attribute("OBSub", "OnBehalfOfSubID_t_55508433"); // 1
    Hdr_54_set.insert("OnBehalfOfSubID_t_55508433");
    Hdr_54.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1115358175"); // 1
    Hdr_54_set.insert("OnBehalfOfLocationID_t_1115358175");
    Hdr_54.add_attribute("D2Sub", "DeliverToSubID_t_1579511594"); // 1
    Hdr_54_set.insert("DeliverToSubID_t_1579511594");
    Hdr_54.add_attribute("D2Loc", "DeliverToLocationID_t_1771245700"); // 1
    Hdr_54_set.insert("DeliverToLocationID_t_1771245700");
    Hdr_54.add_attribute("PosDup", "Y"); // 1
    Hdr_54_set.insert("Y");
    Hdr_54.add_attribute("PosRsnd", "Y"); // 1
    Hdr_54_set.insert("Y");
    Hdr_54.add_attribute("Snt", "SendingTime_t_1072897986"); // 1
    Hdr_54_set.insert("SendingTime_t_1072897986");
    Hdr_54.add_attribute("OrigSnt", "OrigSendingTime_t_1290501915"); // 1
    Hdr_54_set.insert("OrigSendingTime_t_1290501915");
    Hdr_54.add_attribute("MsgEncd", "MessageEncoding_t_1856401768"); // 1
    Hdr_54_set.insert("MessageEncoding_t_1856401768");
    all_values.push_back(Hdr_54_set);
    all_compo_names.insert("Hdr_54_set");

    {
      xml_element Hop_54{"Hop"};
      multiset<string> Hop_54_set;
      Hop_54.add_attribute("ID", "HopCompID_t_1713893762"); // 2
      Hop_54_set.insert("HopCompID_t_1713893762");
      Hop_54.add_attribute("Ref", "1780857774"); // 2
      Hop_54_set.insert("1780857774");
      Hop_54.add_attribute("Snt", "HopSendingTime_t_958485896"); // 2
      Hop_54_set.insert("HopSendingTime_t_958485896");
      all_values.push_back(Hop_54_set);
      all_compo_names.insert("Hop_54_set");

      Hdr_54.add_element(Hop_54);
    }
    elt.add_element(Hdr_54);
  } // end Hdr
  { // Pty
    xml_element Pty_245{"Pty"};
    multiset<string> Pty_245_set;
    Pty_245.add_attribute("ID", "PartyID_t_1568769697"); // 1
    Pty_245_set.insert("PartyID_t_1568769697");
    Pty_245.add_attribute("Src", "B"); // 1
    Pty_245_set.insert("B");
    Pty_245.add_attribute("R", "8"); // 1
    Pty_245_set.insert("8");
    all_values.push_back(Pty_245_set);
    all_compo_names.insert("Pty_245_set");

    {
      xml_element Sub_245{"Sub"};
      multiset<string> Sub_245_set;
      Sub_245.add_attribute("ID", "PartySubID_t_1332615559"); // 2
      Sub_245_set.insert("PartySubID_t_1332615559");
      Sub_245.add_attribute("Typ", "29"); // 2
      Sub_245_set.insert("29");
      all_values.push_back(Sub_245_set);
      all_compo_names.insert("Sub_245_set");

      Pty_245.add_element(Sub_245);
    }
    elt.add_element(Pty_245);
  } // end Pty
  { // Pty
    xml_element Pty_246{"Pty"};
    multiset<string> Pty_246_set;
    Pty_246.add_attribute("ID", "PartyID_t_534676578"); // 1
    Pty_246_set.insert("PartyID_t_534676578");
    Pty_246.add_attribute("Src", "1"); // 1
    Pty_246_set.insert("1");
    Pty_246.add_attribute("R", "53"); // 1
    Pty_246_set.insert("53");
    all_values.push_back(Pty_246_set);
    all_compo_names.insert("Pty_246_set");

    {
      xml_element Sub_246{"Sub"};
      multiset<string> Sub_246_set;
      Sub_246.add_attribute("ID", "PartySubID_t_1565748591"); // 2
      Sub_246_set.insert("PartySubID_t_1565748591");
      Sub_246.add_attribute("Typ", "30"); // 2
      Sub_246_set.insert("30");
      all_values.push_back(Sub_246_set);
      all_compo_names.insert("Sub_246_set");

      Pty_246.add_element(Sub_246);
    }
    elt.add_element(Pty_246);
  } // end Pty
  { // PreAll
    xml_element PreAll_10{"PreAll"};
    multiset<string> PreAll_10_set;
    PreAll_10.add_attribute("Acct", "AllocAccount_t_894008221"); // 1
    PreAll_10_set.insert("AllocAccount_t_894008221");
    PreAll_10.add_attribute("ActIDSrc", "1"); // 1
    PreAll_10_set.insert("1");
    PreAll_10.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_10_set.insert("USD");
    PreAll_10.add_attribute("IndAllocID", "IndividualAllocID_t_1092643353"); // 1
    PreAll_10_set.insert("IndividualAllocID_t_1092643353");
    PreAll_10.add_attribute("Qty", "20253087.690000"); // 1
    PreAll_10_set.insert("20253087.690000");
    all_values.push_back(PreAll_10_set);
    all_compo_names.insert("PreAll_10_set");

    {
      xml_element Pty_247{"Pty"};
      multiset<string> Pty_247_set;
      Pty_247.add_attribute("ID", "NestedPartyID_t_963994856"); // 2
      Pty_247_set.insert("NestedPartyID_t_963994856");
      Pty_247.add_attribute("Src", "7"); // 2
      Pty_247_set.insert("7");
      Pty_247.add_attribute("R", "39"); // 2
      Pty_247_set.insert("39");
      all_values.push_back(Pty_247_set);
      all_compo_names.insert("Pty_247_set");

      {
        xml_element Sub_247{"Sub"};
        multiset<string> Sub_247_set;
        Sub_247.add_attribute("ID", "NestedPartySubID_t_396022802"); // 3
        Sub_247_set.insert("NestedPartySubID_t_396022802");
        Sub_247.add_attribute("Typ", "22"); // 3
        Sub_247_set.insert("22");
        all_values.push_back(Sub_247_set);
        all_compo_names.insert("Sub_247_set");

        Pty_247.add_element(Sub_247);
      }
      PreAll_10.add_element(Pty_247);
    }
    elt.add_element(PreAll_10);
  } // end PreAll
  { // PreAll
    xml_element PreAll_11{"PreAll"};
    multiset<string> PreAll_11_set;
    PreAll_11.add_attribute("Acct", "AllocAccount_t_1641120720"); // 1
    PreAll_11_set.insert("AllocAccount_t_1641120720");
    PreAll_11.add_attribute("ActIDSrc", "99"); // 1
    PreAll_11_set.insert("99");
    PreAll_11.add_attribute("AllocSettlCcy", "EUR"); // 1
    PreAll_11_set.insert("EUR");
    PreAll_11.add_attribute("IndAllocID", "IndividualAllocID_t_1095606235"); // 1
    PreAll_11_set.insert("IndividualAllocID_t_1095606235");
    PreAll_11.add_attribute("Qty", "14112219.390000"); // 1
    PreAll_11_set.insert("14112219.390000");
    all_values.push_back(PreAll_11_set);
    all_compo_names.insert("PreAll_11_set");

    {
      xml_element Pty_248{"Pty"};
      multiset<string> Pty_248_set;
      Pty_248.add_attribute("ID", "NestedPartyID_t_417513113"); // 2
      Pty_248_set.insert("NestedPartyID_t_417513113");
      Pty_248.add_attribute("Src", "B"); // 2
      Pty_248_set.insert("B");
      Pty_248.add_attribute("R", "60"); // 2
      Pty_248_set.insert("60");
      all_values.push_back(Pty_248_set);
      all_compo_names.insert("Pty_248_set");

      {
        xml_element Sub_248{"Sub"};
        multiset<string> Sub_248_set;
        Sub_248.add_attribute("ID", "NestedPartySubID_t_1986282810"); // 3
        Sub_248_set.insert("NestedPartySubID_t_1986282810");
        Sub_248.add_attribute("Typ", "12"); // 3
        Sub_248_set.insert("12");
        all_values.push_back(Sub_248_set);
        all_compo_names.insert("Sub_248_set");

        Pty_248.add_element(Sub_248);
      }
      PreAll_11.add_element(Pty_248);
    }
    elt.add_element(PreAll_11);
  } // end PreAll
  { // PreAll
    xml_element PreAll_12{"PreAll"};
    multiset<string> PreAll_12_set;
    PreAll_12.add_attribute("Acct", "AllocAccount_t_974473780"); // 1
    PreAll_12_set.insert("AllocAccount_t_974473780");
    PreAll_12.add_attribute("ActIDSrc", "99"); // 1
    PreAll_12_set.insert("99");
    PreAll_12.add_attribute("AllocSettlCcy", "JPY"); // 1
    PreAll_12_set.insert("JPY");
    PreAll_12.add_attribute("IndAllocID", "IndividualAllocID_t_487818622"); // 1
    PreAll_12_set.insert("IndividualAllocID_t_487818622");
    PreAll_12.add_attribute("Qty", "4339034.430000"); // 1
    PreAll_12_set.insert("4339034.430000");
    all_values.push_back(PreAll_12_set);
    all_compo_names.insert("PreAll_12_set");

    {
      xml_element Pty_249{"Pty"};
      multiset<string> Pty_249_set;
      Pty_249.add_attribute("ID", "NestedPartyID_t_927415302"); // 2
      Pty_249_set.insert("NestedPartyID_t_927415302");
      Pty_249.add_attribute("Src", "G"); // 2
      Pty_249_set.insert("G");
      Pty_249.add_attribute("R", "2"); // 2
      Pty_249_set.insert("2");
      all_values.push_back(Pty_249_set);
      all_compo_names.insert("Pty_249_set");

      {
        xml_element Sub_249{"Sub"};
        multiset<string> Sub_249_set;
        Sub_249.add_attribute("ID", "NestedPartySubID_t_1821423523"); // 3
        Sub_249_set.insert("NestedPartySubID_t_1821423523");
        Sub_249.add_attribute("Typ", "10"); // 3
        Sub_249_set.insert("10");
        all_values.push_back(Sub_249_set);
        all_compo_names.insert("Sub_249_set");

        Pty_249.add_element(Sub_249);
      }
      PreAll_12.add_element(Pty_249);
    }
    elt.add_element(PreAll_12);
  } // end PreAll
  { // DsplyInstr
    xml_element DsplyInstr_8{"DsplyInstr"};
    multiset<string> DsplyInstr_8_set;
    DsplyInstr_8.add_attribute("DisplayQty", "4071257.830000"); // 1
    DsplyInstr_8_set.insert("4071257.830000");
    DsplyInstr_8.add_attribute("SecDspQty", "5380378.790000"); // 1
    DsplyInstr_8_set.insert("5380378.790000");
    DsplyInstr_8.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_8_set.insert("1");
    DsplyInstr_8.add_attribute("DspMthd", "1"); // 1
    DsplyInstr_8_set.insert("1");
    DsplyInstr_8.add_attribute("DsplLwQty", "15020327.350000"); // 1
    DsplyInstr_8_set.insert("15020327.350000");
    DsplyInstr_8.add_attribute("DisplayHighQty", "6763182.690000"); // 1
    DsplyInstr_8_set.insert("6763182.690000");
    DsplyInstr_8.add_attribute("DspMinIncr", "12781342.010000"); // 1
    DsplyInstr_8_set.insert("12781342.010000");
    DsplyInstr_8.add_attribute("RfrshQty", "18980555.370000"); // 1
    DsplyInstr_8_set.insert("18980555.370000");
    all_values.push_back(DsplyInstr_8_set);
    all_compo_names.insert("DsplyInstr_8_set");

    elt.add_element(DsplyInstr_8);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_13{"TrdSes"};
    multiset<string> TrdSes_13_set;
    TrdSes_13.add_attribute("SesID", "4"); // 1
    TrdSes_13_set.insert("4");
    TrdSes_13.add_attribute("SesSub", "1"); // 1
    TrdSes_13_set.insert("1");
    all_values.push_back(TrdSes_13_set);
    all_compo_names.insert("TrdSes_13_set");

    elt.add_element(TrdSes_13);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_14{"TrdSes"};
    multiset<string> TrdSes_14_set;
    TrdSes_14.add_attribute("SesID", "1"); // 1
    TrdSes_14_set.insert("1");
    TrdSes_14.add_attribute("SesSub", "3"); // 1
    TrdSes_14_set.insert("3");
    all_values.push_back(TrdSes_14_set);
    all_compo_names.insert("TrdSes_14_set");

    elt.add_element(TrdSes_14);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_15{"TrdSes"};
    multiset<string> TrdSes_15_set;
    TrdSes_15.add_attribute("SesID", "1"); // 1
    TrdSes_15_set.insert("1");
    TrdSes_15.add_attribute("SesSub", "1"); // 1
    TrdSes_15_set.insert("1");
    all_values.push_back(TrdSes_15_set);
    all_compo_names.insert("TrdSes_15_set");

    elt.add_element(TrdSes_15);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_45{"Instrmt"};
    multiset<string> Instrmt_45_set;
    Instrmt_45.add_attribute("Sym", "Symbol_t_1973423373"); // 1
    Instrmt_45_set.insert("Symbol_t_1973423373");
    Instrmt_45.add_attribute("Sfx", "CD"); // 1
    Instrmt_45_set.insert("CD");
    Instrmt_45.add_attribute("ID", "SecurityID_t_168580440"); // 1
    Instrmt_45_set.insert("SecurityID_t_168580440");
    Instrmt_45.add_attribute("Src", "F"); // 1
    Instrmt_45_set.insert("F");
    Instrmt_45.add_attribute("Prod", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("ProdCmplx", "ProductComplex_t_1143054220"); // 1
    Instrmt_45_set.insert("ProductComplex_t_1143054220");
    Instrmt_45.add_attribute("SecGrp", "SecurityGroup_t_836153609"); // 1
    Instrmt_45_set.insert("SecurityGroup_t_836153609");
    Instrmt_45.add_attribute("CFI", "CFICode_t_1213009590"); // 1
    Instrmt_45_set.insert("CFICode_t_1213009590");
    Instrmt_45.add_attribute("SecTyp", "AN"); // 1
    Instrmt_45_set.insert("AN");
    Instrmt_45.add_attribute("SubTyp", "SecuritySubType_t_1323972231"); // 1
    Instrmt_45_set.insert("SecuritySubType_t_1323972231");
    Instrmt_45.add_attribute("MMY", "1646913033"); // 1
    Instrmt_45_set.insert("1646913033");
    Instrmt_45.add_attribute("MatDt", "MaturityDate_t_1432136232"); // 1
    Instrmt_45_set.insert("MaturityDate_t_1432136232");
    Instrmt_45.add_attribute("MatTm", "417845206"); // 1
    Instrmt_45_set.insert("417845206");
    Instrmt_45.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_552935893"); // 1
    Instrmt_45_set.insert("SettleOnOpenFlag_t_552935893");
    Instrmt_45.add_attribute("AsgnMeth", "1106076107"); // 1
    Instrmt_45_set.insert("1106076107");
    Instrmt_45.add_attribute("Status", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("CpnPmt", "CouponPaymentDate_t_960061676"); // 1
    Instrmt_45_set.insert("CouponPaymentDate_t_960061676");
    Instrmt_45.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_45_set.insert("XR");
    Instrmt_45.add_attribute("Snrty", "SB"); // 1
    Instrmt_45_set.insert("SB");
    Instrmt_45.add_attribute("NotlPctOut", "12450125.800000"); // 1
    Instrmt_45_set.insert("12450125.800000");
    Instrmt_45.add_attribute("OrigNotlPctOut", "9986630.740000"); // 1
    Instrmt_45_set.insert("9986630.740000");
    Instrmt_45.add_attribute("AttchPnt", "12053367.350000"); // 1
    Instrmt_45_set.insert("12053367.350000");
    Instrmt_45.add_attribute("DetchPnt", "3756631.340000"); // 1
    Instrmt_45_set.insert("3756631.340000");
    Instrmt_45.add_attribute("Issued", "IssueDate_t_749234964"); // 1
    Instrmt_45_set.insert("IssueDate_t_749234964");
    Instrmt_45.add_attribute("RepoCollSecTyp", "506085194"); // 1
    Instrmt_45_set.insert("506085194");
    Instrmt_45.add_attribute("RepoTrm", "1147434407"); // 1
    Instrmt_45_set.insert("1147434407");
    Instrmt_45.add_attribute("RepoRt", "18864949.690000"); // 1
    Instrmt_45_set.insert("18864949.690000");
    Instrmt_45.add_attribute("Fctr", "16516454.780000"); // 1
    Instrmt_45_set.insert("16516454.780000");
    Instrmt_45.add_attribute("CrdRtg", "CreditRating_t_555861020"); // 1
    Instrmt_45_set.insert("CreditRating_t_555861020");
    Instrmt_45.add_attribute("Rgstry", "InstrRegistry_t_1971877561"); // 1
    Instrmt_45_set.insert("InstrRegistry_t_1971877561");
    Instrmt_45.add_attribute("IssuCtry", "2060944053"); // 1
    Instrmt_45_set.insert("2060944053");
    Instrmt_45.add_attribute("StPrv", "StateOrProvinceOfIssue_t_381800745"); // 1
    Instrmt_45_set.insert("StateOrProvinceOfIssue_t_381800745");
    Instrmt_45.add_attribute("Lcl", "LocaleOfIssue_t_1963868638"); // 1
    Instrmt_45_set.insert("LocaleOfIssue_t_1963868638");
    Instrmt_45.add_attribute("Redeem", "RedemptionDate_t_82040845"); // 1
    Instrmt_45_set.insert("RedemptionDate_t_82040845");
    Instrmt_45.add_attribute("StrkPx", "465396.330000"); // 1
    Instrmt_45_set.insert("465396.330000");
    Instrmt_45.add_attribute("StrkCcy", "CAN"); // 1
    Instrmt_45_set.insert("CAN");
    Instrmt_45.add_attribute("StrkMult", "8826932.430000"); // 1
    Instrmt_45_set.insert("8826932.430000");
    Instrmt_45.add_attribute("StrkValu", "16437313.730000"); // 1
    Instrmt_45_set.insert("16437313.730000");
    Instrmt_45.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("StrkPxBndryPrcsn", "11431607.580000"); // 1
    Instrmt_45_set.insert("11431607.580000");
    Instrmt_45.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("OptAt", "477027033"); // 1
    Instrmt_45_set.insert("477027033");
    Instrmt_45.add_attribute("Mult", "16960966.510000"); // 1
    Instrmt_45_set.insert("16960966.510000");
    Instrmt_45.add_attribute("MultTyp", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("MinPxIncr", "5086746.790000"); // 1
    Instrmt_45_set.insert("5086746.790000");
    Instrmt_45.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1617175027"); // 1
    Instrmt_45_set.insert("MinPriceIncrementAmount_t_1617175027");
    Instrmt_45.add_attribute("UOM", "tn"); // 1
    Instrmt_45_set.insert("tn");
    Instrmt_45.add_attribute("UOMQty", "17536872.600000"); // 1
    Instrmt_45_set.insert("17536872.600000");
    Instrmt_45.add_attribute("PxUOM", "oz_tr"); // 1
    Instrmt_45_set.insert("oz_tr");
    Instrmt_45.add_attribute("PxUOMQty", "10647505.690000"); // 1
    Instrmt_45_set.insert("10647505.690000");
    Instrmt_45.add_attribute("SettlMeth", "C"); // 1
    Instrmt_45_set.insert("C");
    Instrmt_45.add_attribute("ExerStyle", "0"); // 1
    Instrmt_45_set.insert("0");
    Instrmt_45.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("OptPayAmt", "OptPayoutAmount_t_1129301153"); // 1
    Instrmt_45_set.insert("OptPayoutAmount_t_1129301153");
    Instrmt_45.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_45_set.insert("INT");
    Instrmt_45.add_attribute("ValMeth", "CDSD"); // 1
    Instrmt_45_set.insert("CDSD");
    Instrmt_45.add_attribute("ListMeth", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("CapPx", "7809946.520000"); // 1
    Instrmt_45_set.insert("7809946.520000");
    Instrmt_45.add_attribute("FlrPx", "9884580.000000"); // 1
    Instrmt_45_set.insert("9884580.000000");
    Instrmt_45.add_attribute("PutCall", "1"); // 1
    Instrmt_45_set.insert("1");
    Instrmt_45.add_attribute("FlexInd", "true"); // 1
    Instrmt_45_set.insert("true");
    Instrmt_45.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_45_set.insert("false");
    Instrmt_45.add_attribute("TmUnit", "S"); // 1
    Instrmt_45_set.insert("S");
    Instrmt_45.add_attribute("CpnRt", "10281014.250000"); // 1
    Instrmt_45_set.insert("10281014.250000");
    Instrmt_45.add_attribute("Exch", "SecurityExchange_t_148110263"); // 1
    Instrmt_45_set.insert("SecurityExchange_t_148110263");
    Instrmt_45.add_attribute("PosLmt", "848712147"); // 1
    Instrmt_45_set.insert("848712147");
    Instrmt_45.add_attribute("NTPosLmt", "524349150"); // 1
    Instrmt_45_set.insert("524349150");
    Instrmt_45.add_attribute("Issr", "Issuer_t_1877926259"); // 1
    Instrmt_45_set.insert("Issuer_t_1877926259");
    Instrmt_45.add_attribute("EncIssrLen", "907893974"); // 1
    Instrmt_45_set.insert("907893974");
    Instrmt_45.add_attribute("EncIssr", "EncodedIssuer_t_1667509908"); // 1
    Instrmt_45_set.insert("EncodedIssuer_t_1667509908");
    Instrmt_45.add_attribute("Desc", "SecurityDesc_t_744911191"); // 1
    Instrmt_45_set.insert("SecurityDesc_t_744911191");
    Instrmt_45.add_attribute("EncSecDescLen", "1384921007"); // 1
    Instrmt_45_set.insert("1384921007");
    Instrmt_45.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1216122912"); // 1
    Instrmt_45_set.insert("EncodedSecurityDesc_t_1216122912");
    Instrmt_45.add_attribute("Pool", "Pool_t_717972231"); // 1
    Instrmt_45_set.insert("Pool_t_717972231");
    Instrmt_45.add_attribute("CSetMo", "715316375"); // 1
    Instrmt_45_set.insert("715316375");
    Instrmt_45.add_attribute("CPPgm", "2"); // 1
    Instrmt_45_set.insert("2");
    Instrmt_45.add_attribute("CPRegT", "CPRegType_t_187663610"); // 1
    Instrmt_45_set.insert("CPRegType_t_187663610");
    Instrmt_45.add_attribute("Dated", "DatedDate_t_574730210"); // 1
    Instrmt_45_set.insert("DatedDate_t_574730210");
    Instrmt_45.add_attribute("IntAcrl", "InterestAccrualDate_t_1331001203"); // 1
    Instrmt_45_set.insert("InterestAccrualDate_t_1331001203");
    all_values.push_back(Instrmt_45_set);
    all_compo_names.insert("Instrmt_45_set");

    {
      xml_element AID_48{"AID"};
      multiset<string> AID_48_set;
      AID_48.add_attribute("AltID", "SecurityAltID_t_656018064"); // 2
      AID_48_set.insert("SecurityAltID_t_656018064");
      AID_48.add_attribute("AltIDSrc", "E"); // 2
      AID_48_set.insert("E");
      all_values.push_back(AID_48_set);
      all_compo_names.insert("AID_48_set");

      Instrmt_45.add_element(AID_48);
    }
    {
      xml_element SecXML_48{"SecXML"};
      multiset<string> SecXML_48_set;
      SecXML_48.add_attribute("Schema", "SecurityXMLSchema_t_1312867949"); // 2
      SecXML_48_set.insert("SecurityXMLSchema_t_1312867949");
      all_values.push_back(SecXML_48_set);
      all_compo_names.insert("SecXML_48_set");

      Instrmt_45.add_element(SecXML_48);
    }
    {
      xml_element Evnt_48{"Evnt"};
      multiset<string> Evnt_48_set;
      Evnt_48.add_attribute("EventTyp", "2"); // 2
      Evnt_48_set.insert("2");
      Evnt_48.add_attribute("Dt", "EventDate_t_1062832895"); // 2
      Evnt_48_set.insert("EventDate_t_1062832895");
      Evnt_48.add_attribute("Tm", "EventTime_t_294685455"); // 2
      Evnt_48_set.insert("EventTime_t_294685455");
      Evnt_48.add_attribute("Px", "6827245.720000"); // 2
      Evnt_48_set.insert("6827245.720000");
      Evnt_48.add_attribute("Txt", "EventText_t_2137830490"); // 2
      Evnt_48_set.insert("EventText_t_2137830490");
      all_values.push_back(Evnt_48_set);
      all_compo_names.insert("Evnt_48_set");

      Instrmt_45.add_element(Evnt_48);
    }
    {
      xml_element Pty_250{"Pty"};
      multiset<string> Pty_250_set;
      Pty_250.add_attribute("ID", "InstrumentPartyID_t_1979847628"); // 2
      Pty_250_set.insert("InstrumentPartyID_t_1979847628");
      Pty_250.add_attribute("Src", "D"); // 2
      Pty_250_set.insert("D");
      Pty_250.add_attribute("R", "53"); // 2
      Pty_250_set.insert("53");
      all_values.push_back(Pty_250_set);
      all_compo_names.insert("Pty_250_set");

      {
        xml_element Sub_250{"Sub"};
        multiset<string> Sub_250_set;
        Sub_250.add_attribute("ID", "InstrumentPartySubID_t_1899326899"); // 3
        Sub_250_set.insert("InstrumentPartySubID_t_1899326899");
        Sub_250.add_attribute("Typ", "21"); // 3
        Sub_250_set.insert("21");
        all_values.push_back(Sub_250_set);
        all_compo_names.insert("Sub_250_set");

        Pty_250.add_element(Sub_250);
      }
      Instrmt_45.add_element(Pty_250);
    }
    {
      xml_element CmplxEvnt_45{"CmplxEvnt"};
      multiset<string> CmplxEvnt_45_set;
      CmplxEvnt_45.add_attribute("Typ", "7"); // 2
      CmplxEvnt_45_set.insert("7");
      CmplxEvnt_45.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1865345804"); // 2
      CmplxEvnt_45_set.insert("ComplexOptPayoutAmount_t_1865345804");
      CmplxEvnt_45.add_attribute("Px", "9417166.430000"); // 2
      CmplxEvnt_45_set.insert("9417166.430000");
      CmplxEvnt_45.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_45_set.insert("3");
      CmplxEvnt_45.add_attribute("PxBndryPrcsn", "5665743.030000"); // 2
      CmplxEvnt_45_set.insert("5665743.030000");
      CmplxEvnt_45.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_45_set.insert("3");
      CmplxEvnt_45.add_attribute("Cond", "2"); // 2
      CmplxEvnt_45_set.insert("2");
      all_values.push_back(CmplxEvnt_45_set);
      all_compo_names.insert("CmplxEvnt_45_set");

      {
        xml_element EvntDts_45{"EvntDts"};
        multiset<string> EvntDts_45_set;
        EvntDts_45.add_attribute("StartDt", "ComplexEventStartDate_t_1474468277"); // 3
        EvntDts_45_set.insert("ComplexEventStartDate_t_1474468277");
        EvntDts_45.add_attribute("EndDt", "ComplexEventEndDate_t_986092053"); // 3
        EvntDts_45_set.insert("ComplexEventEndDate_t_986092053");
        all_values.push_back(EvntDts_45_set);
        all_compo_names.insert("EvntDts_45_set");

        {
          xml_element EvntTms_45{"EvntTms"};
          multiset<string> EvntTms_45_set;
          EvntTms_45.add_attribute("StartTm", "525284105"); // 4
          EvntTms_45_set.insert("525284105");
          EvntTms_45.add_attribute("EndTm", "711905636"); // 4
          EvntTms_45_set.insert("711905636");
          all_values.push_back(EvntTms_45_set);
          all_compo_names.insert("EvntTms_45_set");

          EvntDts_45.add_element(EvntTms_45);
        }
        CmplxEvnt_45.add_element(EvntDts_45);
      }
      Instrmt_45.add_element(CmplxEvnt_45);
    }
    elt.add_element(Instrmt_45);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_12{"FinDetls"};
    multiset<string> FinDetls_12_set;
    FinDetls_12.add_attribute("AgmtDesc", "AgreementDesc_t_54731317"); // 1
    FinDetls_12_set.insert("AgreementDesc_t_54731317");
    FinDetls_12.add_attribute("AgmtID", "AgreementID_t_1243256336"); // 1
    FinDetls_12_set.insert("AgreementID_t_1243256336");
    FinDetls_12.add_attribute("AgmtDt", "AgreementDate_t_1427222012"); // 1
    FinDetls_12_set.insert("AgreementDate_t_1427222012");
    FinDetls_12.add_attribute("AgmtCcy", "CAN"); // 1
    FinDetls_12_set.insert("CAN");
    FinDetls_12.add_attribute("TrmTyp", "3"); // 1
    FinDetls_12_set.insert("3");
    FinDetls_12.add_attribute("StartDt", "StartDate_t_963046464"); // 1
    FinDetls_12_set.insert("StartDate_t_963046464");
    FinDetls_12.add_attribute("EndDt", "EndDate_t_2086938011"); // 1
    FinDetls_12_set.insert("EndDate_t_2086938011");
    FinDetls_12.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_12_set.insert("1");
    FinDetls_12.add_attribute("MgnRatio", "1284307.660000"); // 1
    FinDetls_12_set.insert("1284307.660000");
    all_values.push_back(FinDetls_12_set);
    all_compo_names.insert("FinDetls_12_set");

    elt.add_element(FinDetls_12);
  } // end FinDetls
  { // Undly
    xml_element Undly_61{"Undly"};
    multiset<string> Undly_61_set;
    Undly_61.add_attribute("Sym", "UnderlyingSymbol_t_409298601"); // 1
    Undly_61_set.insert("UnderlyingSymbol_t_409298601");
    Undly_61.add_attribute("Sfx", "WI"); // 1
    Undly_61_set.insert("WI");
    Undly_61.add_attribute("ID", "UnderlyingSecurityID_t_348302768"); // 1
    Undly_61_set.insert("UnderlyingSecurityID_t_348302768");
    Undly_61.add_attribute("Src", "M"); // 1
    Undly_61_set.insert("M");
    Undly_61.add_attribute("Prod", "11"); // 1
    Undly_61_set.insert("11");
    Undly_61.add_attribute("CFI", "UnderlyingCFICode_t_1812021992"); // 1
    Undly_61_set.insert("UnderlyingCFICode_t_1812021992");
    Undly_61.add_attribute("SecTyp", "CB"); // 1
    Undly_61_set.insert("CB");
    Undly_61.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_7323453"); // 1
    Undly_61_set.insert("UnderlyingSecuritySubType_t_7323453");
    Undly_61.add_attribute("MMY", "1725637210"); // 1
    Undly_61_set.insert("1725637210");
    Undly_61.add_attribute("Mat", "UnderlyingMaturityDate_t_1280270324"); // 1
    Undly_61_set.insert("UnderlyingMaturityDate_t_1280270324");
    Undly_61.add_attribute("MatTm", "1872669257"); // 1
    Undly_61_set.insert("1872669257");
    Undly_61.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_519870205"); // 1
    Undly_61_set.insert("UnderlyingCouponPaymentDate_t_519870205");
    Undly_61.add_attribute("RestrctTyp", "XR"); // 1
    Undly_61_set.insert("XR");
    Undly_61.add_attribute("Snrty", "SD"); // 1
    Undly_61_set.insert("SD");
    Undly_61.add_attribute("NotlPctOut", "19859359.980000"); // 1
    Undly_61_set.insert("19859359.980000");
    Undly_61.add_attribute("OrigNotlPctOut", "11105735.400000"); // 1
    Undly_61_set.insert("11105735.400000");
    Undly_61.add_attribute("AttchPnt", "17662281.900000"); // 1
    Undly_61_set.insert("17662281.900000");
    Undly_61.add_attribute("DetchPnt", "8245444.040000"); // 1
    Undly_61_set.insert("8245444.040000");
    Undly_61.add_attribute("Issued", "UnderlyingIssueDate_t_1635857645"); // 1
    Undly_61_set.insert("UnderlyingIssueDate_t_1635857645");
    Undly_61.add_attribute("RepoCollSecTyp", "330650178"); // 1
    Undly_61_set.insert("330650178");
    Undly_61.add_attribute("RepoTrm", "879275721"); // 1
    Undly_61_set.insert("879275721");
    Undly_61.add_attribute("RepoRt", "7316303.340000"); // 1
    Undly_61_set.insert("7316303.340000");
    Undly_61.add_attribute("Fctr", "17578721.900000"); // 1
    Undly_61_set.insert("17578721.900000");
    Undly_61.add_attribute("CrdRtg", "UnderlyingCreditRating_t_511320982"); // 1
    Undly_61_set.insert("UnderlyingCreditRating_t_511320982");
    Undly_61.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_15066633"); // 1
    Undly_61_set.insert("UnderlyingInstrRegistry_t_15066633");
    Undly_61.add_attribute("Ctry", "1612340764"); // 1
    Undly_61_set.insert("1612340764");
    Undly_61.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1474367447"); // 1
    Undly_61_set.insert("UnderlyingStateOrProvinceOfIssue_t_1474367447");
    Undly_61.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2102004644"); // 1
    Undly_61_set.insert("UnderlyingLocaleOfIssue_t_2102004644");
    Undly_61.add_attribute("Redeem", "UnderlyingRedemptionDate_t_958806470"); // 1
    Undly_61_set.insert("UnderlyingRedemptionDate_t_958806470");
    Undly_61.add_attribute("StrkPx", "16027982.130000"); // 1
    Undly_61_set.insert("16027982.130000");
    Undly_61.add_attribute("StrkCcy", "CAN"); // 1
    Undly_61_set.insert("CAN");
    Undly_61.add_attribute("OptA", "2025914434"); // 1
    Undly_61_set.insert("2025914434");
    Undly_61.add_attribute("Mult", "21158856.090000"); // 1
    Undly_61_set.insert("21158856.090000");
    Undly_61.add_attribute("MultTyp", "1"); // 1
    Undly_61_set.insert("1");
    Undly_61.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_61_set.insert("2");
    Undly_61.add_attribute("UOM", "USD"); // 1
    Undly_61_set.insert("USD");
    Undly_61.add_attribute("UOMQty", "9987171.510000"); // 1
    Undly_61_set.insert("9987171.510000");
    Undly_61.add_attribute("PxUOM", "USD"); // 1
    Undly_61_set.insert("USD");
    Undly_61.add_attribute("PxUOMQty", "13585775.160000"); // 1
    Undly_61_set.insert("13585775.160000");
    Undly_61.add_attribute("TmUnit", "S"); // 1
    Undly_61_set.insert("S");
    Undly_61.add_attribute("ExerStyle", "1"); // 1
    Undly_61_set.insert("1");
    Undly_61.add_attribute("CpnRt", "18784477.210000"); // 1
    Undly_61_set.insert("18784477.210000");
    Undly_61.add_attribute("Exch", "UnderlyingSecurityExchange_t_1461704454"); // 1
    Undly_61_set.insert("UnderlyingSecurityExchange_t_1461704454");
    Undly_61.add_attribute("Issr", "UnderlyingIssuer_t_158179962"); // 1
    Undly_61_set.insert("UnderlyingIssuer_t_158179962");
    Undly_61.add_attribute("EncUndIssrLen", "1716900072"); // 1
    Undly_61_set.insert("1716900072");
    Undly_61.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_424794347"); // 1
    Undly_61_set.insert("EncodedUnderlyingIssuer_t_424794347");
    Undly_61.add_attribute("Desc", "UnderlyingSecurityDesc_t_1924408152"); // 1
    Undly_61_set.insert("UnderlyingSecurityDesc_t_1924408152");
    Undly_61.add_attribute("EncUndSecDescLen", "393960828"); // 1
    Undly_61_set.insert("393960828");
    Undly_61.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2060651992"); // 1
    Undly_61_set.insert("EncodedUnderlyingSecurityDesc_t_2060651992");
    Undly_61.add_attribute("CPPgm", "UnderlyingCPProgram_t_107574682"); // 1
    Undly_61_set.insert("UnderlyingCPProgram_t_107574682");
    Undly_61.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1273236549"); // 1
    Undly_61_set.insert("UnderlyingCPRegType_t_1273236549");
    Undly_61.add_attribute("AllocPct", "6447986.780000"); // 1
    Undly_61_set.insert("6447986.780000");
    Undly_61.add_attribute("Ccy", "GBP"); // 1
    Undly_61_set.insert("GBP");
    Undly_61.add_attribute("Qty", "6598653.110000"); // 1
    Undly_61_set.insert("6598653.110000");
    Undly_61.add_attribute("SettlTyp", "2"); // 1
    Undly_61_set.insert("2");
    Undly_61.add_attribute("CashAmt", "UnderlyingCashAmount_t_1111441331"); // 1
    Undly_61_set.insert("UnderlyingCashAmount_t_1111441331");
    Undly_61.add_attribute("CashTyp", "DIFF"); // 1
    Undly_61_set.insert("DIFF");
    Undly_61.add_attribute("Px", "1416268.110000"); // 1
    Undly_61_set.insert("1416268.110000");
    Undly_61.add_attribute("DirtPx", "5667558.960000"); // 1
    Undly_61_set.insert("5667558.960000");
    Undly_61.add_attribute("EndPx", "2344855.000000"); // 1
    Undly_61_set.insert("2344855.000000");
    Undly_61.add_attribute("StartVal", "UnderlyingStartValue_t_1509731882"); // 1
    Undly_61_set.insert("UnderlyingStartValue_t_1509731882");
    Undly_61.add_attribute("CurVal", "UnderlyingCurrentValue_t_445186682"); // 1
    Undly_61_set.insert("UnderlyingCurrentValue_t_445186682");
    Undly_61.add_attribute("EndVal", "UnderlyingEndValue_t_202887461"); // 1
    Undly_61_set.insert("UnderlyingEndValue_t_202887461");
    Undly_61.add_attribute("AdjQty", "11299987.480000"); // 1
    Undly_61_set.insert("11299987.480000");
    Undly_61.add_attribute("FxRate", "5790976.690000"); // 1
    Undly_61_set.insert("5790976.690000");
    Undly_61.add_attribute("FxRateCalc", "M"); // 1
    Undly_61_set.insert("M");
    Undly_61.add_attribute("CapValu", "UnderlyingCapValue_t_2128715899"); // 1
    Undly_61_set.insert("UnderlyingCapValue_t_2128715899");
    Undly_61.add_attribute("SetMeth", "UnderlyingSettlMethod_t_720332110"); // 1
    Undly_61_set.insert("UnderlyingSettlMethod_t_720332110");
    Undly_61.add_attribute("PutCall", "1194405282"); // 1
    Undly_61_set.insert("1194405282");
    all_values.push_back(Undly_61_set);
    all_compo_names.insert("Undly_61_set");

    {
      xml_element UndAID_61{"UndAID"};
      multiset<string> UndAID_61_set;
      UndAID_61.add_attribute("AltID", "UnderlyingSecurityAltID_t_112736079"); // 2
      UndAID_61_set.insert("UnderlyingSecurityAltID_t_112736079");
      UndAID_61.add_attribute("AltIDSrc", "G"); // 2
      UndAID_61_set.insert("G");
      all_values.push_back(UndAID_61_set);
      all_compo_names.insert("UndAID_61_set");

      Undly_61.add_element(UndAID_61);
    }
    {
      xml_element Stip_96{"Stip"};
      multiset<string> Stip_96_set;
      Stip_96.add_attribute("Typ", "SALESCREDITOVR"); // 2
      Stip_96_set.insert("SALESCREDITOVR");
      Stip_96.add_attribute("Val", "UnderlyingStipValue_t_1574440533"); // 2
      Stip_96_set.insert("UnderlyingStipValue_t_1574440533");
      all_values.push_back(Stip_96_set);
      all_compo_names.insert("Stip_96_set");

      Undly_61.add_element(Stip_96);
    }
    {
      xml_element Pty_251{"Pty"};
      multiset<string> Pty_251_set;
      Pty_251.add_attribute("ID", "UnderlyingInstrumentPartyID_t_744932121"); // 2
      Pty_251_set.insert("UnderlyingInstrumentPartyID_t_744932121");
      Pty_251.add_attribute("Src", "H"); // 2
      Pty_251_set.insert("H");
      Pty_251.add_attribute("R", "29"); // 2
      Pty_251_set.insert("29");
      all_values.push_back(Pty_251_set);
      all_compo_names.insert("Pty_251_set");

      {
        xml_element Sub_251{"Sub"};
        multiset<string> Sub_251_set;
        Sub_251.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_521856625"); // 3
        Sub_251_set.insert("UnderlyingInstrumentPartySubID_t_521856625");
        Sub_251.add_attribute("Typ", "21"); // 3
        Sub_251_set.insert("21");
        all_values.push_back(Sub_251_set);
        all_compo_names.insert("Sub_251_set");

        Pty_251.add_element(Sub_251);
      }
      Undly_61.add_element(Pty_251);
    }
    elt.add_element(Undly_61);
  } // end Undly
  { // Stip
    xml_element Stip_97{"Stip"};
    multiset<string> Stip_97_set;
    Stip_97.add_attribute("Typ", "MPR"); // 1
    Stip_97_set.insert("MPR");
    Stip_97.add_attribute("Val", "StipulationValue_t_14499509"); // 1
    Stip_97_set.insert("StipulationValue_t_14499509");
    all_values.push_back(Stip_97_set);
    all_compo_names.insert("Stip_97_set");

    elt.add_element(Stip_97);
  } // end Stip
  { // Stip
    xml_element Stip_98{"Stip"};
    multiset<string> Stip_98_set;
    Stip_98.add_attribute("Typ", "ISSUE"); // 1
    Stip_98_set.insert("ISSUE");
    Stip_98.add_attribute("Val", "StipulationValue_t_347394533"); // 1
    Stip_98_set.insert("StipulationValue_t_347394533");
    all_values.push_back(Stip_98_set);
    all_compo_names.insert("Stip_98_set");

    elt.add_element(Stip_98);
  } // end Stip
  { // Stip
    xml_element Stip_99{"Stip"};
    multiset<string> Stip_99_set;
    Stip_99.add_attribute("Typ", "AMT"); // 1
    Stip_99_set.insert("AMT");
    Stip_99.add_attribute("Val", "StipulationValue_t_1069583567"); // 1
    Stip_99_set.insert("StipulationValue_t_1069583567");
    all_values.push_back(Stip_99_set);
    all_compo_names.insert("Stip_99_set");

    elt.add_element(Stip_99);
  } // end Stip
  { // OrdQty
    xml_element OrdQty_15{"OrdQty"};
    multiset<string> OrdQty_15_set;
    OrdQty_15.add_attribute("Qty", "16776985.220000"); // 1
    OrdQty_15_set.insert("16776985.220000");
    OrdQty_15.add_attribute("Cash", "7630147.240000"); // 1
    OrdQty_15_set.insert("7630147.240000");
    OrdQty_15.add_attribute("Pct", "16839698.740000"); // 1
    OrdQty_15_set.insert("16839698.740000");
    OrdQty_15.add_attribute("RndDir", "0"); // 1
    OrdQty_15_set.insert("0");
    OrdQty_15.add_attribute("RndMod", "13297706.200000"); // 1
    OrdQty_15_set.insert("13297706.200000");
    all_values.push_back(OrdQty_15_set);
    all_compo_names.insert("OrdQty_15_set");

    elt.add_element(OrdQty_15);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_8{"TrgrInstr"};
    multiset<string> TrgrInstr_8_set;
    TrgrInstr_8.add_attribute("TrgrTyp", "3"); // 1
    TrgrInstr_8_set.insert("3");
    TrgrInstr_8.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_8_set.insert("1");
    TrgrInstr_8.add_attribute("TrgrPx", "17749573.020000"); // 1
    TrgrInstr_8_set.insert("17749573.020000");
    TrgrInstr_8.add_attribute("TrgrSym", "TriggerSymbol_t_2121342835"); // 1
    TrgrInstr_8_set.insert("TriggerSymbol_t_2121342835");
    TrgrInstr_8.add_attribute("TrgrSecID", "TriggerSecurityID_t_164088669"); // 1
    TrgrInstr_8_set.insert("TriggerSecurityID_t_164088669");
    TrgrInstr_8.add_attribute("TrgrSecIDSrc", "F"); // 1
    TrgrInstr_8_set.insert("F");
    TrgrInstr_8.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1957170602"); // 1
    TrgrInstr_8_set.insert("TriggerSecurityDesc_t_1957170602");
    TrgrInstr_8.add_attribute("TrgrPxTyp", "3"); // 1
    TrgrInstr_8_set.insert("3");
    TrgrInstr_8.add_attribute("TrgrPxTypScp", "2"); // 1
    TrgrInstr_8_set.insert("2");
    TrgrInstr_8.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_8_set.insert("U");
    TrgrInstr_8.add_attribute("TrgrNewPx", "2580569.990000"); // 1
    TrgrInstr_8_set.insert("2580569.990000");
    TrgrInstr_8.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_8_set.insert("2");
    TrgrInstr_8.add_attribute("TrgrNewQty", "19294615.920000"); // 1
    TrgrInstr_8_set.insert("19294615.920000");
    TrgrInstr_8.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1832497533"); // 1
    TrgrInstr_8_set.insert("TriggerTradingSessionID_t_1832497533");
    TrgrInstr_8.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_111104067"); // 1
    TrgrInstr_8_set.insert("TriggerTradingSessionSubID_t_111104067");
    all_values.push_back(TrgrInstr_8_set);
    all_compo_names.insert("TrgrInstr_8_set");

    elt.add_element(TrgrInstr_8);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_21{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_21_set;
    SprdBnchmkCurve_21.add_attribute("Spread", "2767637.240000"); // 1
    SprdBnchmkCurve_21_set.insert("2767637.240000");
    SprdBnchmkCurve_21.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_21_set.insert("JPY");
    SprdBnchmkCurve_21.add_attribute("Name", "EONIA"); // 1
    SprdBnchmkCurve_21_set.insert("EONIA");
    SprdBnchmkCurve_21.add_attribute("Point", "BenchmarkCurvePoint_t_1449168342"); // 1
    SprdBnchmkCurve_21_set.insert("BenchmarkCurvePoint_t_1449168342");
    SprdBnchmkCurve_21.add_attribute("Px", "12623920.000000"); // 1
    SprdBnchmkCurve_21_set.insert("12623920.000000");
    SprdBnchmkCurve_21.add_attribute("PxTyp", "5"); // 1
    SprdBnchmkCurve_21_set.insert("5");
    SprdBnchmkCurve_21.add_attribute("SecID", "BenchmarkSecurityID_t_1858886598"); // 1
    SprdBnchmkCurve_21_set.insert("BenchmarkSecurityID_t_1858886598");
    SprdBnchmkCurve_21.add_attribute("SecIDSrc", "4"); // 1
    SprdBnchmkCurve_21_set.insert("4");
    all_values.push_back(SprdBnchmkCurve_21_set);
    all_compo_names.insert("SprdBnchmkCurve_21_set");

    elt.add_element(SprdBnchmkCurve_21);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_16{"Yield"};
    multiset<string> Yield_16_set;
    Yield_16.add_attribute("Typ", "LASTMONTH"); // 1
    Yield_16_set.insert("LASTMONTH");
    Yield_16.add_attribute("Yld", "7809865.170000"); // 1
    Yield_16_set.insert("7809865.170000");
    Yield_16.add_attribute("CalcDt", "YieldCalcDate_t_1140001408"); // 1
    Yield_16_set.insert("YieldCalcDate_t_1140001408");
    Yield_16.add_attribute("RedDt", "YieldRedemptionDate_t_1594597960"); // 1
    Yield_16_set.insert("YieldRedemptionDate_t_1594597960");
    Yield_16.add_attribute("RedPx", "3174727.430000"); // 1
    Yield_16_set.insert("3174727.430000");
    Yield_16.add_attribute("RedPxTyp", "11"); // 1
    Yield_16_set.insert("11");
    all_values.push_back(Yield_16_set);
    all_compo_names.insert("Yield_16_set");

    elt.add_element(Yield_16);
  } // end Yield
  { // Comm
    xml_element Comm_21{"Comm"};
    multiset<string> Comm_21_set;
    Comm_21.add_attribute("Comm", "Commission_t_776884932"); // 1
    Comm_21_set.insert("Commission_t_776884932");
    Comm_21.add_attribute("CommTyp", "1"); // 1
    Comm_21_set.insert("1");
    Comm_21.add_attribute("Ccy", "CAN"); // 1
    Comm_21_set.insert("CAN");
    Comm_21.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_21_set.insert("Y");
    all_values.push_back(Comm_21_set);
    all_compo_names.insert("Comm_21_set");

    elt.add_element(Comm_21);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_8{"PegInstr"};
    multiset<string> PegInstr_8_set;
    PegInstr_8.add_attribute("OfstVal", "100216.830000"); // 1
    PegInstr_8_set.insert("100216.830000");
    PegInstr_8.add_attribute("PegPxTyp", "9"); // 1
    PegInstr_8_set.insert("9");
    PegInstr_8.add_attribute("MoveTyp", "1"); // 1
    PegInstr_8_set.insert("1");
    PegInstr_8.add_attribute("OfstTyp", "0"); // 1
    PegInstr_8_set.insert("0");
    PegInstr_8.add_attribute("LmtTyp", "0"); // 1
    PegInstr_8_set.insert("0");
    PegInstr_8.add_attribute("RndDir", "1"); // 1
    PegInstr_8_set.insert("1");
    PegInstr_8.add_attribute("Scope", "4"); // 1
    PegInstr_8_set.insert("4");
    PegInstr_8.add_attribute("PegSecurityIDSource", "D"); // 1
    PegInstr_8_set.insert("D");
    PegInstr_8.add_attribute("PegSecID", "PegSecurityID_t_658060792"); // 1
    PegInstr_8_set.insert("PegSecurityID_t_658060792");
    PegInstr_8.add_attribute("PgSymbl", "PegSymbol_t_98413488"); // 1
    PegInstr_8_set.insert("PegSymbol_t_98413488");
    PegInstr_8.add_attribute("PegSecDesc", "PegSecurityDesc_t_1015109357"); // 1
    PegInstr_8_set.insert("PegSecurityDesc_t_1015109357");
    all_values.push_back(PegInstr_8_set);
    all_compo_names.insert("PegInstr_8_set");

    elt.add_element(PegInstr_8);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_8{"DiscInstr"};
    multiset<string> DiscInstr_8_set;
    DiscInstr_8.add_attribute("DsctnInst", "5"); // 1
    DiscInstr_8_set.insert("5");
    DiscInstr_8.add_attribute("OfstValu", "17826622.540000"); // 1
    DiscInstr_8_set.insert("17826622.540000");
    DiscInstr_8.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_8_set.insert("0");
    DiscInstr_8.add_attribute("OfstTyp", "1"); // 1
    DiscInstr_8_set.insert("1");
    DiscInstr_8.add_attribute("LimitTyp", "2"); // 1
    DiscInstr_8_set.insert("2");
    DiscInstr_8.add_attribute("RndDir", "1"); // 1
    DiscInstr_8_set.insert("1");
    DiscInstr_8.add_attribute("Scope", "4"); // 1
    DiscInstr_8_set.insert("4");
    all_values.push_back(DiscInstr_8_set);
    all_compo_names.insert("DiscInstr_8_set");

    elt.add_element(DiscInstr_8);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_13{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_13_set;
    StrtPrmGrp_13.add_attribute("StrtPrmNme", "StrategyParameterName_t_225281288"); // 1
    StrtPrmGrp_13_set.insert("StrategyParameterName_t_225281288");
    StrtPrmGrp_13.add_attribute("StrtPrmTyp", "27"); // 1
    StrtPrmGrp_13_set.insert("27");
    StrtPrmGrp_13.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1576736415"); // 1
    StrtPrmGrp_13_set.insert("StrategyParameterValue_t_1576736415");
    all_values.push_back(StrtPrmGrp_13_set);
    all_compo_names.insert("StrtPrmGrp_13_set");

    elt.add_element(StrtPrmGrp_13);
  } // end StrtPrmGrp
  { // TrdRegTS
    xml_element TrdRegTS_12{"TrdRegTS"};
    multiset<string> TrdRegTS_12_set;
    TrdRegTS_12.add_attribute("TS", "TrdRegTimestamp_t_1411558591"); // 1
    TrdRegTS_12_set.insert("TrdRegTimestamp_t_1411558591");
    TrdRegTS_12.add_attribute("Typ", "4"); // 1
    TrdRegTS_12_set.insert("4");
    TrdRegTS_12.add_attribute("Src", "TrdRegTimestampOrigin_t_29642142"); // 1
    TrdRegTS_12_set.insert("TrdRegTimestampOrigin_t_29642142");
    TrdRegTS_12.add_attribute("DskTyp", "A"); // 1
    TrdRegTS_12_set.insert("A");
    TrdRegTS_12.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_12_set.insert("1");
    TrdRegTS_12.add_attribute("DskOrdHndlInst", "SCL"); // 1
    TrdRegTS_12_set.insert("SCL");
    all_values.push_back(TrdRegTS_12_set);
    all_compo_names.insert("TrdRegTS_12_set");

    elt.add_element(TrdRegTS_12);
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
