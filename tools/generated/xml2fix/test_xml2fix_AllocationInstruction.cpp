#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstruction.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstruction_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrctn" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstruction_message_t_0;
  elt.add_attribute("ID", "AllocID_t_468848534"); // 0
  AllocationInstruction_message_t_0.insert("AllocID_t_468848534");
  elt.add_attribute("TransTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("Typ", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1875794762"); // 0
  AllocationInstruction_message_t_0.insert("SecondaryAllocID_t_1875794762");
  elt.add_attribute("RefID", "RefAllocID_t_2003900219"); // 0
  AllocationInstruction_message_t_0.insert("RefAllocID_t_2003900219");
  elt.add_attribute("CxlRplcRsn", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("ImReqTyp", "6"); // 0
  AllocationInstruction_message_t_0.insert("6");
  elt.add_attribute("LinkID", "AllocLinkID_t_2102263885"); // 0
  AllocationInstruction_message_t_0.insert("AllocLinkID_t_2102263885");
  elt.add_attribute("LinkTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("BkngRefID", "BookingRefID_t_1587405164"); // 0
  AllocationInstruction_message_t_0.insert("BookingRefID_t_1587405164");
  elt.add_attribute("NoOrdsTyp", "0"); // 0
  AllocationInstruction_message_t_0.insert("0");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationInstruction_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "true"); // 0
  AllocationInstruction_message_t_0.insert("true");
  elt.add_attribute("MtchTyp", "A2"); // 0
  AllocationInstruction_message_t_0.insert("A2");
  elt.add_attribute("Side", "F"); // 0
  AllocationInstruction_message_t_0.insert("F");
  elt.add_attribute("Qty", "4032816.110000"); // 0
  AllocationInstruction_message_t_0.insert("4032816.110000");
  elt.add_attribute("QtyTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("LastMkt", "LastMkt_t_271795040"); // 0
  AllocationInstruction_message_t_0.insert("LastMkt_t_271795040");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_82590544"); // 0
  AllocationInstruction_message_t_0.insert("TradeOriginationDate_t_82590544");
  elt.add_attribute("SesID", "4"); // 0
  AllocationInstruction_message_t_0.insert("4");
  elt.add_attribute("SesSub", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("PxTyp", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("AvgPx", "9696255.040000"); // 0
  AllocationInstruction_message_t_0.insert("9696255.040000");
  elt.add_attribute("AvgParPx", "12058768.200000"); // 0
  AllocationInstruction_message_t_0.insert("12058768.200000");
  elt.add_attribute("Ccy", "CHF"); // 0
  AllocationInstruction_message_t_0.insert("CHF");
  elt.add_attribute("AvgPxPrcsn", "771983765"); // 0
  AllocationInstruction_message_t_0.insert("771983765");
  elt.add_attribute("TrdDt", "TradeDate_t_1576250922"); // 0
  AllocationInstruction_message_t_0.insert("TradeDate_t_1576250922");
  elt.add_attribute("TxnTm", "TransactTime_t_322669442"); // 0
  AllocationInstruction_message_t_0.insert("TransactTime_t_322669442");
  elt.add_attribute("SettlTyp", "C"); // 0
  AllocationInstruction_message_t_0.insert("C");
  elt.add_attribute("SettlDt", "SettlDate_t_458485352"); // 0
  AllocationInstruction_message_t_0.insert("SettlDate_t_458485352");
  elt.add_attribute("BkngTyp", "1"); // 0
  AllocationInstruction_message_t_0.insert("1");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_1663667276"); // 0
  AllocationInstruction_message_t_0.insert("GrossTradeAmt_t_1663667276");
  elt.add_attribute("Concession", "Concession_t_680879230"); // 0
  AllocationInstruction_message_t_0.insert("Concession_t_680879230");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_519829091"); // 0
  AllocationInstruction_message_t_0.insert("TotalTakedown_t_519829091");
  elt.add_attribute("NetMny", "NetMoney_t_1520083847"); // 0
  AllocationInstruction_message_t_0.insert("NetMoney_t_1520083847");
  elt.add_attribute("PosEfct", "D"); // 0
  AllocationInstruction_message_t_0.insert("D");
  elt.add_attribute("AutoAcceptInd", "true"); // 0
  AllocationInstruction_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_1474864085"); // 0
  AllocationInstruction_message_t_0.insert("Text_t_1474864085");
  elt.add_attribute("EncTxtLen", "1222527936"); // 0
  AllocationInstruction_message_t_0.insert("1222527936");
  elt.add_attribute("EncTxt", "EncodedText_t_187378060"); // 0
  AllocationInstruction_message_t_0.insert("EncodedText_t_187378060");
  elt.add_attribute("NumDaysInt", "596493173"); // 0
  AllocationInstruction_message_t_0.insert("596493173");
  elt.add_attribute("AcrdIntRt", "13049575.360000"); // 0
  AllocationInstruction_message_t_0.insert("13049575.360000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_181593667"); // 0
  AllocationInstruction_message_t_0.insert("AccruedInterestAmt_t_181593667");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_324927285"); // 0
  AllocationInstruction_message_t_0.insert("TotalAccruedInterestAmt_t_324927285");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_224405199"); // 0
  AllocationInstruction_message_t_0.insert("InterestAtMaturity_t_224405199");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_584875278"); // 0
  AllocationInstruction_message_t_0.insert("EndAccruedInterestAmt_t_584875278");
  elt.add_attribute("StartCsh", "StartCash_t_1418042044"); // 0
  AllocationInstruction_message_t_0.insert("StartCash_t_1418042044");
  elt.add_attribute("EndCsh", "EndCash_t_496200239"); // 0
  AllocationInstruction_message_t_0.insert("EndCash_t_496200239");
  elt.add_attribute("LegalCnfm", "N"); // 0
  AllocationInstruction_message_t_0.insert("N");
  elt.add_attribute("TotNoAllocs", "24757559"); // 0
  AllocationInstruction_message_t_0.insert("24757559");
  elt.add_attribute("LastFragment", "Y"); // 0
  AllocationInstruction_message_t_0.insert("Y");
  elt.add_attribute("AvgPxInd", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_994383063"); // 0
  AllocationInstruction_message_t_0.insert("ClearingBusinessDate_t_994383063");
  elt.add_attribute("TrdTyp", "45"); // 0
  AllocationInstruction_message_t_0.insert("45");
  elt.add_attribute("TrdSubTyp", "39"); // 0
  AllocationInstruction_message_t_0.insert("39");
  elt.add_attribute("CustCpcty", "3"); // 0
  AllocationInstruction_message_t_0.insert("3");
  elt.add_attribute("InptSrc", "TradeInputSource_t_1449889885"); // 0
  AllocationInstruction_message_t_0.insert("TradeInputSource_t_1449889885");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  AllocationInstruction_message_t_0.insert("2");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_1765819376"); // 0
  AllocationInstruction_message_t_0.insert("MessageEventSource_t_1765819376");
  elt.add_attribute("RndPx", "2840637.510000"); // 0
  AllocationInstruction_message_t_0.insert("2840637.510000");
  all_values.push_back(AllocationInstruction_message_t_0);
  all_compo_names.insert("AllocationInstruction_message_t");

  { // Hdr
    xml_element Hdr_2{"Hdr"};
    multiset<string> Hdr_2_set;
    Hdr_2.add_attribute("SeqNum", "173263045"); // 1
    Hdr_2_set.insert("173263045");
    Hdr_2.add_attribute("SID", "SenderCompID_t_409853705"); // 1
    Hdr_2_set.insert("SenderCompID_t_409853705");
    Hdr_2.add_attribute("TID", "TargetCompID_t_1947731027"); // 1
    Hdr_2_set.insert("TargetCompID_t_1947731027");
    Hdr_2.add_attribute("OBID", "OnBehalfOfCompID_t_854142275"); // 1
    Hdr_2_set.insert("OnBehalfOfCompID_t_854142275");
    Hdr_2.add_attribute("D2ID", "DeliverToCompID_t_929682796"); // 1
    Hdr_2_set.insert("DeliverToCompID_t_929682796");
    Hdr_2.add_attribute("SSub", "SenderSubID_t_1320331227"); // 1
    Hdr_2_set.insert("SenderSubID_t_1320331227");
    Hdr_2.add_attribute("SLoc", "SenderLocationID_t_2132440066"); // 1
    Hdr_2_set.insert("SenderLocationID_t_2132440066");
    Hdr_2.add_attribute("TSub", "TargetSubID_t_1677139340"); // 1
    Hdr_2_set.insert("TargetSubID_t_1677139340");
    Hdr_2.add_attribute("TLoc", "TargetLocationID_t_647711664"); // 1
    Hdr_2_set.insert("TargetLocationID_t_647711664");
    Hdr_2.add_attribute("OBSub", "OnBehalfOfSubID_t_1207484355"); // 1
    Hdr_2_set.insert("OnBehalfOfSubID_t_1207484355");
    Hdr_2.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1864517401"); // 1
    Hdr_2_set.insert("OnBehalfOfLocationID_t_1864517401");
    Hdr_2.add_attribute("D2Sub", "DeliverToSubID_t_1244204837"); // 1
    Hdr_2_set.insert("DeliverToSubID_t_1244204837");
    Hdr_2.add_attribute("D2Loc", "DeliverToLocationID_t_364958243"); // 1
    Hdr_2_set.insert("DeliverToLocationID_t_364958243");
    Hdr_2.add_attribute("PosDup", "N"); // 1
    Hdr_2_set.insert("N");
    Hdr_2.add_attribute("PosRsnd", "N"); // 1
    Hdr_2_set.insert("N");
    Hdr_2.add_attribute("Snt", "SendingTime_t_589363442"); // 1
    Hdr_2_set.insert("SendingTime_t_589363442");
    Hdr_2.add_attribute("OrigSnt", "OrigSendingTime_t_483502698"); // 1
    Hdr_2_set.insert("OrigSendingTime_t_483502698");
    Hdr_2.add_attribute("MsgEncd", "MessageEncoding_t_839690518"); // 1
    Hdr_2_set.insert("MessageEncoding_t_839690518");
    all_values.push_back(Hdr_2_set);
    all_compo_names.insert("Hdr_2_set");

    {
      xml_element Hop_2{"Hop"};
      multiset<string> Hop_2_set;
      Hop_2.add_attribute("ID", "HopCompID_t_1085563681"); // 2
      Hop_2_set.insert("HopCompID_t_1085563681");
      Hop_2.add_attribute("Ref", "1150968520"); // 2
      Hop_2_set.insert("1150968520");
      Hop_2.add_attribute("Snt", "HopSendingTime_t_864448077"); // 2
      Hop_2_set.insert("HopSendingTime_t_864448077");
      all_values.push_back(Hop_2_set);
      all_compo_names.insert("Hop_2_set");

      Hdr_2.add_element(Hop_2);
    }
    elt.add_element(Hdr_2);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_0{"OrdAlloc"};
    multiset<string> OrdAlloc_0_set;
    OrdAlloc_0.add_attribute("ClOrdID", "ClOrdID_t_1260257799"); // 1
    OrdAlloc_0_set.insert("ClOrdID_t_1260257799");
    OrdAlloc_0.add_attribute("OrdID", "OrderID_t_1858831140"); // 1
    OrdAlloc_0_set.insert("OrderID_t_1858831140");
    OrdAlloc_0.add_attribute("OrdID2", "SecondaryOrderID_t_1235499100"); // 1
    OrdAlloc_0_set.insert("SecondaryOrderID_t_1235499100");
    OrdAlloc_0.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1546268218"); // 1
    OrdAlloc_0_set.insert("SecondaryClOrdID_t_1546268218");
    OrdAlloc_0.add_attribute("ListID", "ListID_t_1154497427"); // 1
    OrdAlloc_0_set.insert("ListID_t_1154497427");
    OrdAlloc_0.add_attribute("Qty", "5379053.370000"); // 1
    OrdAlloc_0_set.insert("5379053.370000");
    OrdAlloc_0.add_attribute("AvgPx", "12610459.110000"); // 1
    OrdAlloc_0_set.insert("12610459.110000");
    OrdAlloc_0.add_attribute("BkngQty", "7728331.550000"); // 1
    OrdAlloc_0_set.insert("7728331.550000");
    all_values.push_back(OrdAlloc_0_set);
    all_compo_names.insert("OrdAlloc_0_set");

    {
      xml_element Pty_7{"Pty"};
      multiset<string> Pty_7_set;
      Pty_7.add_attribute("ID", "Nested2PartyID_t_821969088"); // 2
      Pty_7_set.insert("Nested2PartyID_t_821969088");
      Pty_7.add_attribute("Src", "H"); // 2
      Pty_7_set.insert("H");
      Pty_7.add_attribute("R", "43"); // 2
      Pty_7_set.insert("43");
      all_values.push_back(Pty_7_set);
      all_compo_names.insert("Pty_7_set");

      {
        xml_element Sub_7{"Sub"};
        multiset<string> Sub_7_set;
        Sub_7.add_attribute("ID", "Nested2PartySubID_t_622216468"); // 3
        Sub_7_set.insert("Nested2PartySubID_t_622216468");
        Sub_7.add_attribute("Typ", "33"); // 3
        Sub_7_set.insert("33");
        all_values.push_back(Sub_7_set);
        all_compo_names.insert("Sub_7_set");

        Pty_7.add_element(Sub_7);
      }
      OrdAlloc_0.add_element(Pty_7);
    }
    elt.add_element(OrdAlloc_0);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_0{"AllExc"};
    multiset<string> AllExc_0_set;
    AllExc_0.add_attribute("LastQty", "19425476.950000"); // 1
    AllExc_0_set.insert("19425476.950000");
    AllExc_0.add_attribute("ExecID", "ExecID_t_125924002"); // 1
    AllExc_0_set.insert("ExecID_t_125924002");
    AllExc_0.add_attribute("ExecID2", "SecondaryExecID_t_1642025349"); // 1
    AllExc_0_set.insert("SecondaryExecID_t_1642025349");
    AllExc_0.add_attribute("LastPx", "4427757.110000"); // 1
    AllExc_0_set.insert("4427757.110000");
    AllExc_0.add_attribute("LastParPx", "13334083.570000"); // 1
    AllExc_0_set.insert("13334083.570000");
    AllExc_0.add_attribute("LastCpcty", "3"); // 1
    AllExc_0_set.insert("3");
    AllExc_0.add_attribute("TrdID", "TradeID_t_1686980548"); // 1
    AllExc_0_set.insert("TradeID_t_1686980548");
    AllExc_0.add_attribute("FirmTrdID", "FirmTradeID_t_1698366601"); // 1
    AllExc_0_set.insert("FirmTradeID_t_1698366601");
    all_values.push_back(AllExc_0_set);
    all_compo_names.insert("AllExc_0_set");

    elt.add_element(AllExc_0);
  } // end AllExc
  { // AllExc
    xml_element AllExc_1{"AllExc"};
    multiset<string> AllExc_1_set;
    AllExc_1.add_attribute("LastQty", "12576865.220000"); // 1
    AllExc_1_set.insert("12576865.220000");
    AllExc_1.add_attribute("ExecID", "ExecID_t_1108629023"); // 1
    AllExc_1_set.insert("ExecID_t_1108629023");
    AllExc_1.add_attribute("ExecID2", "SecondaryExecID_t_140246395"); // 1
    AllExc_1_set.insert("SecondaryExecID_t_140246395");
    AllExc_1.add_attribute("LastPx", "17411892.200000"); // 1
    AllExc_1_set.insert("17411892.200000");
    AllExc_1.add_attribute("LastParPx", "19483195.410000"); // 1
    AllExc_1_set.insert("19483195.410000");
    AllExc_1.add_attribute("LastCpcty", "2"); // 1
    AllExc_1_set.insert("2");
    AllExc_1.add_attribute("TrdID", "TradeID_t_744674092"); // 1
    AllExc_1_set.insert("TradeID_t_744674092");
    AllExc_1.add_attribute("FirmTrdID", "FirmTradeID_t_665283971"); // 1
    AllExc_1_set.insert("FirmTradeID_t_665283971");
    all_values.push_back(AllExc_1_set);
    all_compo_names.insert("AllExc_1_set");

    elt.add_element(AllExc_1);
  } // end AllExc
  { // AllExc
    xml_element AllExc_2{"AllExc"};
    multiset<string> AllExc_2_set;
    AllExc_2.add_attribute("LastQty", "17834030.580000"); // 1
    AllExc_2_set.insert("17834030.580000");
    AllExc_2.add_attribute("ExecID", "ExecID_t_2004931891"); // 1
    AllExc_2_set.insert("ExecID_t_2004931891");
    AllExc_2.add_attribute("ExecID2", "SecondaryExecID_t_376631463"); // 1
    AllExc_2_set.insert("SecondaryExecID_t_376631463");
    AllExc_2.add_attribute("LastPx", "8714185.100000"); // 1
    AllExc_2_set.insert("8714185.100000");
    AllExc_2.add_attribute("LastParPx", "14037164.620000"); // 1
    AllExc_2_set.insert("14037164.620000");
    AllExc_2.add_attribute("LastCpcty", "3"); // 1
    AllExc_2_set.insert("3");
    AllExc_2.add_attribute("TrdID", "TradeID_t_1409323848"); // 1
    AllExc_2_set.insert("TradeID_t_1409323848");
    AllExc_2.add_attribute("FirmTrdID", "FirmTradeID_t_517278725"); // 1
    AllExc_2_set.insert("FirmTradeID_t_517278725");
    all_values.push_back(AllExc_2_set);
    all_compo_names.insert("AllExc_2_set");

    elt.add_element(AllExc_2);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_2{"Instrmt"};
    multiset<string> Instrmt_2_set;
    Instrmt_2.add_attribute("Sym", "Symbol_t_156478398"); // 1
    Instrmt_2_set.insert("Symbol_t_156478398");
    Instrmt_2.add_attribute("Sfx", "CD"); // 1
    Instrmt_2_set.insert("CD");
    Instrmt_2.add_attribute("ID", "SecurityID_t_1951587682"); // 1
    Instrmt_2_set.insert("SecurityID_t_1951587682");
    Instrmt_2.add_attribute("Src", "3"); // 1
    Instrmt_2_set.insert("3");
    Instrmt_2.add_attribute("Prod", "4"); // 1
    Instrmt_2_set.insert("4");
    Instrmt_2.add_attribute("ProdCmplx", "ProductComplex_t_2092555266"); // 1
    Instrmt_2_set.insert("ProductComplex_t_2092555266");
    Instrmt_2.add_attribute("SecGrp", "SecurityGroup_t_1304051267"); // 1
    Instrmt_2_set.insert("SecurityGroup_t_1304051267");
    Instrmt_2.add_attribute("CFI", "CFICode_t_501089803"); // 1
    Instrmt_2_set.insert("CFICode_t_501089803");
    Instrmt_2.add_attribute("SecTyp", "YANK"); // 1
    Instrmt_2_set.insert("YANK");
    Instrmt_2.add_attribute("SubTyp", "SecuritySubType_t_798592968"); // 1
    Instrmt_2_set.insert("SecuritySubType_t_798592968");
    Instrmt_2.add_attribute("MMY", "943865514"); // 1
    Instrmt_2_set.insert("943865514");
    Instrmt_2.add_attribute("MatDt", "MaturityDate_t_1404403978"); // 1
    Instrmt_2_set.insert("MaturityDate_t_1404403978");
    Instrmt_2.add_attribute("MatTm", "10168422"); // 1
    Instrmt_2_set.insert("10168422");
    Instrmt_2.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_483362415"); // 1
    Instrmt_2_set.insert("SettleOnOpenFlag_t_483362415");
    Instrmt_2.add_attribute("AsgnMeth", "955286931"); // 1
    Instrmt_2_set.insert("955286931");
    Instrmt_2.add_attribute("Status", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("CpnPmt", "CouponPaymentDate_t_1591991438"); // 1
    Instrmt_2_set.insert("CouponPaymentDate_t_1591991438");
    Instrmt_2.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_2_set.insert("MM");
    Instrmt_2.add_attribute("Snrty", "SB"); // 1
    Instrmt_2_set.insert("SB");
    Instrmt_2.add_attribute("NotlPctOut", "13928273.310000"); // 1
    Instrmt_2_set.insert("13928273.310000");
    Instrmt_2.add_attribute("OrigNotlPctOut", "1738597.550000"); // 1
    Instrmt_2_set.insert("1738597.550000");
    Instrmt_2.add_attribute("AttchPnt", "16062346.080000"); // 1
    Instrmt_2_set.insert("16062346.080000");
    Instrmt_2.add_attribute("DetchPnt", "20581113.020000"); // 1
    Instrmt_2_set.insert("20581113.020000");
    Instrmt_2.add_attribute("Issued", "IssueDate_t_1957262813"); // 1
    Instrmt_2_set.insert("IssueDate_t_1957262813");
    Instrmt_2.add_attribute("RepoCollSecTyp", "1463682851"); // 1
    Instrmt_2_set.insert("1463682851");
    Instrmt_2.add_attribute("RepoTrm", "287259118"); // 1
    Instrmt_2_set.insert("287259118");
    Instrmt_2.add_attribute("RepoRt", "6811976.760000"); // 1
    Instrmt_2_set.insert("6811976.760000");
    Instrmt_2.add_attribute("Fctr", "7199156.650000"); // 1
    Instrmt_2_set.insert("7199156.650000");
    Instrmt_2.add_attribute("CrdRtg", "CreditRating_t_1818388008"); // 1
    Instrmt_2_set.insert("CreditRating_t_1818388008");
    Instrmt_2.add_attribute("Rgstry", "InstrRegistry_t_2090521524"); // 1
    Instrmt_2_set.insert("InstrRegistry_t_2090521524");
    Instrmt_2.add_attribute("IssuCtry", "1237194391"); // 1
    Instrmt_2_set.insert("1237194391");
    Instrmt_2.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1974866406"); // 1
    Instrmt_2_set.insert("StateOrProvinceOfIssue_t_1974866406");
    Instrmt_2.add_attribute("Lcl", "LocaleOfIssue_t_26847164"); // 1
    Instrmt_2_set.insert("LocaleOfIssue_t_26847164");
    Instrmt_2.add_attribute("Redeem", "RedemptionDate_t_1041298425"); // 1
    Instrmt_2_set.insert("RedemptionDate_t_1041298425");
    Instrmt_2.add_attribute("StrkPx", "11665480.170000"); // 1
    Instrmt_2_set.insert("11665480.170000");
    Instrmt_2.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_2_set.insert("EUR");
    Instrmt_2.add_attribute("StrkMult", "3231156.360000"); // 1
    Instrmt_2_set.insert("3231156.360000");
    Instrmt_2.add_attribute("StrkValu", "12339627.240000"); // 1
    Instrmt_2_set.insert("12339627.240000");
    Instrmt_2.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_2_set.insert("4");
    Instrmt_2.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_2_set.insert("5");
    Instrmt_2.add_attribute("StrkPxBndryPrcsn", "303445.910000"); // 1
    Instrmt_2_set.insert("303445.910000");
    Instrmt_2.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_2_set.insert("2");
    Instrmt_2.add_attribute("OptAt", "1131877026"); // 1
    Instrmt_2_set.insert("1131877026");
    Instrmt_2.add_attribute("Mult", "5137070.060000"); // 1
    Instrmt_2_set.insert("5137070.060000");
    Instrmt_2.add_attribute("MultTyp", "2"); // 1
    Instrmt_2_set.insert("2");
    Instrmt_2.add_attribute("FlowSchedTyp", "2"); // 1
    Instrmt_2_set.insert("2");
    Instrmt_2.add_attribute("MinPxIncr", "21056984.440000"); // 1
    Instrmt_2_set.insert("21056984.440000");
    Instrmt_2.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_217622603"); // 1
    Instrmt_2_set.insert("MinPriceIncrementAmount_t_217622603");
    Instrmt_2.add_attribute("UOM", "Alw"); // 1
    Instrmt_2_set.insert("Alw");
    Instrmt_2.add_attribute("UOMQty", "13510421.270000"); // 1
    Instrmt_2_set.insert("13510421.270000");
    Instrmt_2.add_attribute("PxUOM", "lbs"); // 1
    Instrmt_2_set.insert("lbs");
    Instrmt_2.add_attribute("PxUOMQty", "5725597.980000"); // 1
    Instrmt_2_set.insert("5725597.980000");
    Instrmt_2.add_attribute("SettlMeth", "C"); // 1
    Instrmt_2_set.insert("C");
    Instrmt_2.add_attribute("ExerStyle", "2"); // 1
    Instrmt_2_set.insert("2");
    Instrmt_2.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_2_set.insert("3");
    Instrmt_2.add_attribute("OptPayAmt", "OptPayoutAmount_t_1548928900"); // 1
    Instrmt_2_set.insert("OptPayoutAmount_t_1548928900");
    Instrmt_2.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_2_set.insert("STD");
    Instrmt_2.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_2_set.insert("FUTDA");
    Instrmt_2.add_attribute("ListMeth", "0"); // 1
    Instrmt_2_set.insert("0");
    Instrmt_2.add_attribute("CapPx", "8254970.760000"); // 1
    Instrmt_2_set.insert("8254970.760000");
    Instrmt_2.add_attribute("FlrPx", "18458690.580000"); // 1
    Instrmt_2_set.insert("18458690.580000");
    Instrmt_2.add_attribute("PutCall", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("FlexInd", "true"); // 1
    Instrmt_2_set.insert("true");
    Instrmt_2.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_2_set.insert("false");
    Instrmt_2.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_2_set.insert("Yr");
    Instrmt_2.add_attribute("CpnRt", "15852171.610000"); // 1
    Instrmt_2_set.insert("15852171.610000");
    Instrmt_2.add_attribute("Exch", "SecurityExchange_t_1726053878"); // 1
    Instrmt_2_set.insert("SecurityExchange_t_1726053878");
    Instrmt_2.add_attribute("PosLmt", "389396024"); // 1
    Instrmt_2_set.insert("389396024");
    Instrmt_2.add_attribute("NTPosLmt", "671696238"); // 1
    Instrmt_2_set.insert("671696238");
    Instrmt_2.add_attribute("Issr", "Issuer_t_635935893"); // 1
    Instrmt_2_set.insert("Issuer_t_635935893");
    Instrmt_2.add_attribute("EncIssrLen", "1511104628"); // 1
    Instrmt_2_set.insert("1511104628");
    Instrmt_2.add_attribute("EncIssr", "EncodedIssuer_t_702040829"); // 1
    Instrmt_2_set.insert("EncodedIssuer_t_702040829");
    Instrmt_2.add_attribute("Desc", "SecurityDesc_t_950221887"); // 1
    Instrmt_2_set.insert("SecurityDesc_t_950221887");
    Instrmt_2.add_attribute("EncSecDescLen", "495498006"); // 1
    Instrmt_2_set.insert("495498006");
    Instrmt_2.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1215747835"); // 1
    Instrmt_2_set.insert("EncodedSecurityDesc_t_1215747835");
    Instrmt_2.add_attribute("Pool", "Pool_t_72311163"); // 1
    Instrmt_2_set.insert("Pool_t_72311163");
    Instrmt_2.add_attribute("CSetMo", "747746328"); // 1
    Instrmt_2_set.insert("747746328");
    Instrmt_2.add_attribute("CPPgm", "1"); // 1
    Instrmt_2_set.insert("1");
    Instrmt_2.add_attribute("CPRegT", "CPRegType_t_289933766"); // 1
    Instrmt_2_set.insert("CPRegType_t_289933766");
    Instrmt_2.add_attribute("Dated", "DatedDate_t_1861555166"); // 1
    Instrmt_2_set.insert("DatedDate_t_1861555166");
    Instrmt_2.add_attribute("IntAcrl", "InterestAccrualDate_t_377521110"); // 1
    Instrmt_2_set.insert("InterestAccrualDate_t_377521110");
    all_values.push_back(Instrmt_2_set);
    all_compo_names.insert("Instrmt_2_set");

    {
      xml_element AID_2{"AID"};
      multiset<string> AID_2_set;
      AID_2.add_attribute("AltID", "SecurityAltID_t_681416125"); // 2
      AID_2_set.insert("SecurityAltID_t_681416125");
      AID_2.add_attribute("AltIDSrc", "5"); // 2
      AID_2_set.insert("5");
      all_values.push_back(AID_2_set);
      all_compo_names.insert("AID_2_set");

      Instrmt_2.add_element(AID_2);
    }
    {
      xml_element SecXML_2{"SecXML"};
      multiset<string> SecXML_2_set;
      SecXML_2.add_attribute("Schema", "SecurityXMLSchema_t_1639190892"); // 2
      SecXML_2_set.insert("SecurityXMLSchema_t_1639190892");
      all_values.push_back(SecXML_2_set);
      all_compo_names.insert("SecXML_2_set");

      Instrmt_2.add_element(SecXML_2);
    }
    {
      xml_element Evnt_2{"Evnt"};
      multiset<string> Evnt_2_set;
      Evnt_2.add_attribute("EventTyp", "9"); // 2
      Evnt_2_set.insert("9");
      Evnt_2.add_attribute("Dt", "EventDate_t_175390317"); // 2
      Evnt_2_set.insert("EventDate_t_175390317");
      Evnt_2.add_attribute("Tm", "EventTime_t_1040636144"); // 2
      Evnt_2_set.insert("EventTime_t_1040636144");
      Evnt_2.add_attribute("Px", "17651368.490000"); // 2
      Evnt_2_set.insert("17651368.490000");
      Evnt_2.add_attribute("Txt", "EventText_t_784064984"); // 2
      Evnt_2_set.insert("EventText_t_784064984");
      all_values.push_back(Evnt_2_set);
      all_compo_names.insert("Evnt_2_set");

      Instrmt_2.add_element(Evnt_2);
    }
    {
      xml_element Pty_8{"Pty"};
      multiset<string> Pty_8_set;
      Pty_8.add_attribute("ID", "InstrumentPartyID_t_112985757"); // 2
      Pty_8_set.insert("InstrumentPartyID_t_112985757");
      Pty_8.add_attribute("Src", "G"); // 2
      Pty_8_set.insert("G");
      Pty_8.add_attribute("R", "15"); // 2
      Pty_8_set.insert("15");
      all_values.push_back(Pty_8_set);
      all_compo_names.insert("Pty_8_set");

      {
        xml_element Sub_8{"Sub"};
        multiset<string> Sub_8_set;
        Sub_8.add_attribute("ID", "InstrumentPartySubID_t_1160201776"); // 3
        Sub_8_set.insert("InstrumentPartySubID_t_1160201776");
        Sub_8.add_attribute("Typ", "4"); // 3
        Sub_8_set.insert("4");
        all_values.push_back(Sub_8_set);
        all_compo_names.insert("Sub_8_set");

        Pty_8.add_element(Sub_8);
      }
      Instrmt_2.add_element(Pty_8);
    }
    {
      xml_element CmplxEvnt_2{"CmplxEvnt"};
      multiset<string> CmplxEvnt_2_set;
      CmplxEvnt_2.add_attribute("Typ", "2"); // 2
      CmplxEvnt_2_set.insert("2");
      CmplxEvnt_2.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1226482164"); // 2
      CmplxEvnt_2_set.insert("ComplexOptPayoutAmount_t_1226482164");
      CmplxEvnt_2.add_attribute("Px", "7332280.310000"); // 2
      CmplxEvnt_2_set.insert("7332280.310000");
      CmplxEvnt_2.add_attribute("PxBndryMeth", "5"); // 2
      CmplxEvnt_2_set.insert("5");
      CmplxEvnt_2.add_attribute("PxBndryPrcsn", "16158781.880000"); // 2
      CmplxEvnt_2_set.insert("16158781.880000");
      CmplxEvnt_2.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_2_set.insert("3");
      CmplxEvnt_2.add_attribute("Cond", "2"); // 2
      CmplxEvnt_2_set.insert("2");
      all_values.push_back(CmplxEvnt_2_set);
      all_compo_names.insert("CmplxEvnt_2_set");

      {
        xml_element EvntDts_2{"EvntDts"};
        multiset<string> EvntDts_2_set;
        EvntDts_2.add_attribute("StartDt", "ComplexEventStartDate_t_979499168"); // 3
        EvntDts_2_set.insert("ComplexEventStartDate_t_979499168");
        EvntDts_2.add_attribute("EndDt", "ComplexEventEndDate_t_2106965098"); // 3
        EvntDts_2_set.insert("ComplexEventEndDate_t_2106965098");
        all_values.push_back(EvntDts_2_set);
        all_compo_names.insert("EvntDts_2_set");

        {
          xml_element EvntTms_2{"EvntTms"};
          multiset<string> EvntTms_2_set;
          EvntTms_2.add_attribute("StartTm", "239378592"); // 4
          EvntTms_2_set.insert("239378592");
          EvntTms_2.add_attribute("EndTm", "1474997174"); // 4
          EvntTms_2_set.insert("1474997174");
          all_values.push_back(EvntTms_2_set);
          all_compo_names.insert("EvntTms_2_set");

          EvntDts_2.add_element(EvntTms_2);
        }
        CmplxEvnt_2.add_element(EvntDts_2);
      }
      Instrmt_2.add_element(CmplxEvnt_2);
    }
    elt.add_element(Instrmt_2);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_0{"InstrmtExt"};
    multiset<string> InstrmtExt_0_set;
    InstrmtExt_0.add_attribute("DlvryForm", "2"); // 1
    InstrmtExt_0_set.insert("2");
    InstrmtExt_0.add_attribute("PctAtRisk", "3116897.550000"); // 1
    InstrmtExt_0_set.insert("3116897.550000");
    all_values.push_back(InstrmtExt_0_set);
    all_compo_names.insert("InstrmtExt_0_set");

    {
      xml_element Attrb_0{"Attrb"};
      multiset<string> Attrb_0_set;
      Attrb_0.add_attribute("Typ", "24"); // 2
      Attrb_0_set.insert("24");
      Attrb_0.add_attribute("Val", "InstrAttribValue_t_201708268"); // 2
      Attrb_0_set.insert("InstrAttribValue_t_201708268");
      all_values.push_back(Attrb_0_set);
      all_compo_names.insert("Attrb_0_set");

      InstrmtExt_0.add_element(Attrb_0);
    }
    elt.add_element(InstrmtExt_0);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_0{"FinDetls"};
    multiset<string> FinDetls_0_set;
    FinDetls_0.add_attribute("AgmtDesc", "AgreementDesc_t_601623522"); // 1
    FinDetls_0_set.insert("AgreementDesc_t_601623522");
    FinDetls_0.add_attribute("AgmtID", "AgreementID_t_1936815020"); // 1
    FinDetls_0_set.insert("AgreementID_t_1936815020");
    FinDetls_0.add_attribute("AgmtDt", "AgreementDate_t_579229378"); // 1
    FinDetls_0_set.insert("AgreementDate_t_579229378");
    FinDetls_0.add_attribute("AgmtCcy", "USD"); // 1
    FinDetls_0_set.insert("USD");
    FinDetls_0.add_attribute("TrmTyp", "4"); // 1
    FinDetls_0_set.insert("4");
    FinDetls_0.add_attribute("StartDt", "StartDate_t_18233648"); // 1
    FinDetls_0_set.insert("StartDate_t_18233648");
    FinDetls_0.add_attribute("EndDt", "EndDate_t_251353005"); // 1
    FinDetls_0_set.insert("EndDate_t_251353005");
    FinDetls_0.add_attribute("DlvryTyp", "3"); // 1
    FinDetls_0_set.insert("3");
    FinDetls_0.add_attribute("MgnRatio", "17833704.970000"); // 1
    FinDetls_0_set.insert("17833704.970000");
    all_values.push_back(FinDetls_0_set);
    all_compo_names.insert("FinDetls_0_set");

    elt.add_element(FinDetls_0);
  } // end FinDetls
  { // Undly
    xml_element Undly_2{"Undly"};
    multiset<string> Undly_2_set;
    Undly_2.add_attribute("Sym", "UnderlyingSymbol_t_1224558524"); // 1
    Undly_2_set.insert("UnderlyingSymbol_t_1224558524");
    Undly_2.add_attribute("Sfx", "CD"); // 1
    Undly_2_set.insert("CD");
    Undly_2.add_attribute("ID", "UnderlyingSecurityID_t_1517868384"); // 1
    Undly_2_set.insert("UnderlyingSecurityID_t_1517868384");
    Undly_2.add_attribute("Src", "9"); // 1
    Undly_2_set.insert("9");
    Undly_2.add_attribute("Prod", "13"); // 1
    Undly_2_set.insert("13");
    Undly_2.add_attribute("CFI", "UnderlyingCFICode_t_592518966"); // 1
    Undly_2_set.insert("UnderlyingCFICode_t_592518966");
    Undly_2.add_attribute("SecTyp", "UST"); // 1
    Undly_2_set.insert("UST");
    Undly_2.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_2107759674"); // 1
    Undly_2_set.insert("UnderlyingSecuritySubType_t_2107759674");
    Undly_2.add_attribute("MMY", "1393223425"); // 1
    Undly_2_set.insert("1393223425");
    Undly_2.add_attribute("Mat", "UnderlyingMaturityDate_t_932153356"); // 1
    Undly_2_set.insert("UnderlyingMaturityDate_t_932153356");
    Undly_2.add_attribute("MatTm", "1365200295"); // 1
    Undly_2_set.insert("1365200295");
    Undly_2.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_682380130"); // 1
    Undly_2_set.insert("UnderlyingCouponPaymentDate_t_682380130");
    Undly_2.add_attribute("RestrctTyp", "FR"); // 1
    Undly_2_set.insert("FR");
    Undly_2.add_attribute("Snrty", "SB"); // 1
    Undly_2_set.insert("SB");
    Undly_2.add_attribute("NotlPctOut", "9217587.220000"); // 1
    Undly_2_set.insert("9217587.220000");
    Undly_2.add_attribute("OrigNotlPctOut", "12391660.500000"); // 1
    Undly_2_set.insert("12391660.500000");
    Undly_2.add_attribute("AttchPnt", "3524273.820000"); // 1
    Undly_2_set.insert("3524273.820000");
    Undly_2.add_attribute("DetchPnt", "12334484.780000"); // 1
    Undly_2_set.insert("12334484.780000");
    Undly_2.add_attribute("Issued", "UnderlyingIssueDate_t_1314425904"); // 1
    Undly_2_set.insert("UnderlyingIssueDate_t_1314425904");
    Undly_2.add_attribute("RepoCollSecTyp", "554135650"); // 1
    Undly_2_set.insert("554135650");
    Undly_2.add_attribute("RepoTrm", "1835072000"); // 1
    Undly_2_set.insert("1835072000");
    Undly_2.add_attribute("RepoRt", "11037572.760000"); // 1
    Undly_2_set.insert("11037572.760000");
    Undly_2.add_attribute("Fctr", "11333650.290000"); // 1
    Undly_2_set.insert("11333650.290000");
    Undly_2.add_attribute("CrdRtg", "UnderlyingCreditRating_t_970627999"); // 1
    Undly_2_set.insert("UnderlyingCreditRating_t_970627999");
    Undly_2.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1179719964"); // 1
    Undly_2_set.insert("UnderlyingInstrRegistry_t_1179719964");
    Undly_2.add_attribute("Ctry", "1204301652"); // 1
    Undly_2_set.insert("1204301652");
    Undly_2.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_988861647"); // 1
    Undly_2_set.insert("UnderlyingStateOrProvinceOfIssue_t_988861647");
    Undly_2.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1431072970"); // 1
    Undly_2_set.insert("UnderlyingLocaleOfIssue_t_1431072970");
    Undly_2.add_attribute("Redeem", "UnderlyingRedemptionDate_t_168390771"); // 1
    Undly_2_set.insert("UnderlyingRedemptionDate_t_168390771");
    Undly_2.add_attribute("StrkPx", "6247484.960000"); // 1
    Undly_2_set.insert("6247484.960000");
    Undly_2.add_attribute("StrkCcy", "USD"); // 1
    Undly_2_set.insert("USD");
    Undly_2.add_attribute("OptA", "703785622"); // 1
    Undly_2_set.insert("703785622");
    Undly_2.add_attribute("Mult", "18368756.960000"); // 1
    Undly_2_set.insert("18368756.960000");
    Undly_2.add_attribute("MultTyp", "1"); // 1
    Undly_2_set.insert("1");
    Undly_2.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_2_set.insert("0");
    Undly_2.add_attribute("UOM", "oz_tr"); // 1
    Undly_2_set.insert("oz_tr");
    Undly_2.add_attribute("UOMQty", "9465011.170000"); // 1
    Undly_2_set.insert("9465011.170000");
    Undly_2.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_2_set.insert("oz_tr");
    Undly_2.add_attribute("PxUOMQty", "16751344.400000"); // 1
    Undly_2_set.insert("16751344.400000");
    Undly_2.add_attribute("TmUnit", "D"); // 1
    Undly_2_set.insert("D");
    Undly_2.add_attribute("ExerStyle", "2"); // 1
    Undly_2_set.insert("2");
    Undly_2.add_attribute("CpnRt", "2100309.220000"); // 1
    Undly_2_set.insert("2100309.220000");
    Undly_2.add_attribute("Exch", "UnderlyingSecurityExchange_t_1642823350"); // 1
    Undly_2_set.insert("UnderlyingSecurityExchange_t_1642823350");
    Undly_2.add_attribute("Issr", "UnderlyingIssuer_t_433508037"); // 1
    Undly_2_set.insert("UnderlyingIssuer_t_433508037");
    Undly_2.add_attribute("EncUndIssrLen", "1131789645"); // 1
    Undly_2_set.insert("1131789645");
    Undly_2.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_734505752"); // 1
    Undly_2_set.insert("EncodedUnderlyingIssuer_t_734505752");
    Undly_2.add_attribute("Desc", "UnderlyingSecurityDesc_t_785935419"); // 1
    Undly_2_set.insert("UnderlyingSecurityDesc_t_785935419");
    Undly_2.add_attribute("EncUndSecDescLen", "217754475"); // 1
    Undly_2_set.insert("217754475");
    Undly_2.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2048931657"); // 1
    Undly_2_set.insert("EncodedUnderlyingSecurityDesc_t_2048931657");
    Undly_2.add_attribute("CPPgm", "UnderlyingCPProgram_t_1340071070"); // 1
    Undly_2_set.insert("UnderlyingCPProgram_t_1340071070");
    Undly_2.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2052826475"); // 1
    Undly_2_set.insert("UnderlyingCPRegType_t_2052826475");
    Undly_2.add_attribute("AllocPct", "10052052.850000"); // 1
    Undly_2_set.insert("10052052.850000");
    Undly_2.add_attribute("Ccy", "JPY"); // 1
    Undly_2_set.insert("JPY");
    Undly_2.add_attribute("Qty", "374416.020000"); // 1
    Undly_2_set.insert("374416.020000");
    Undly_2.add_attribute("SettlTyp", "2"); // 1
    Undly_2_set.insert("2");
    Undly_2.add_attribute("CashAmt", "UnderlyingCashAmount_t_1864832473"); // 1
    Undly_2_set.insert("UnderlyingCashAmount_t_1864832473");
    Undly_2.add_attribute("CashTyp", "FIXED"); // 1
    Undly_2_set.insert("FIXED");
    Undly_2.add_attribute("Px", "16986448.740000"); // 1
    Undly_2_set.insert("16986448.740000");
    Undly_2.add_attribute("DirtPx", "3420973.210000"); // 1
    Undly_2_set.insert("3420973.210000");
    Undly_2.add_attribute("EndPx", "17875218.840000"); // 1
    Undly_2_set.insert("17875218.840000");
    Undly_2.add_attribute("StartVal", "UnderlyingStartValue_t_944110522"); // 1
    Undly_2_set.insert("UnderlyingStartValue_t_944110522");
    Undly_2.add_attribute("CurVal", "UnderlyingCurrentValue_t_1045882943"); // 1
    Undly_2_set.insert("UnderlyingCurrentValue_t_1045882943");
    Undly_2.add_attribute("EndVal", "UnderlyingEndValue_t_1476913932"); // 1
    Undly_2_set.insert("UnderlyingEndValue_t_1476913932");
    Undly_2.add_attribute("AdjQty", "4268528.230000"); // 1
    Undly_2_set.insert("4268528.230000");
    Undly_2.add_attribute("FxRate", "9767165.600000"); // 1
    Undly_2_set.insert("9767165.600000");
    Undly_2.add_attribute("FxRateCalc", "D"); // 1
    Undly_2_set.insert("D");
    Undly_2.add_attribute("CapValu", "UnderlyingCapValue_t_1373353940"); // 1
    Undly_2_set.insert("UnderlyingCapValue_t_1373353940");
    Undly_2.add_attribute("SetMeth", "UnderlyingSettlMethod_t_867826204"); // 1
    Undly_2_set.insert("UnderlyingSettlMethod_t_867826204");
    Undly_2.add_attribute("PutCall", "1286475739"); // 1
    Undly_2_set.insert("1286475739");
    all_values.push_back(Undly_2_set);
    all_compo_names.insert("Undly_2_set");

    {
      xml_element UndAID_2{"UndAID"};
      multiset<string> UndAID_2_set;
      UndAID_2.add_attribute("AltID", "UnderlyingSecurityAltID_t_1104524765"); // 2
      UndAID_2_set.insert("UnderlyingSecurityAltID_t_1104524765");
      UndAID_2.add_attribute("AltIDSrc", "K"); // 2
      UndAID_2_set.insert("K");
      all_values.push_back(UndAID_2_set);
      all_compo_names.insert("UndAID_2_set");

      Undly_2.add_element(UndAID_2);
    }
    {
      xml_element Stip_2{"Stip"};
      multiset<string> Stip_2_set;
      Stip_2.add_attribute("Typ", "MAT"); // 2
      Stip_2_set.insert("MAT");
      Stip_2.add_attribute("Val", "UnderlyingStipValue_t_599864467"); // 2
      Stip_2_set.insert("UnderlyingStipValue_t_599864467");
      all_values.push_back(Stip_2_set);
      all_compo_names.insert("Stip_2_set");

      Undly_2.add_element(Stip_2);
    }
    {
      xml_element Pty_9{"Pty"};
      multiset<string> Pty_9_set;
      Pty_9.add_attribute("ID", "UnderlyingInstrumentPartyID_t_410160533"); // 2
      Pty_9_set.insert("UnderlyingInstrumentPartyID_t_410160533");
      Pty_9.add_attribute("Src", "7"); // 2
      Pty_9_set.insert("7");
      Pty_9.add_attribute("R", "66"); // 2
      Pty_9_set.insert("66");
      all_values.push_back(Pty_9_set);
      all_compo_names.insert("Pty_9_set");

      {
        xml_element Sub_9{"Sub"};
        multiset<string> Sub_9_set;
        Sub_9.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1196095952"); // 3
        Sub_9_set.insert("UnderlyingInstrumentPartySubID_t_1196095952");
        Sub_9.add_attribute("Typ", "1"); // 3
        Sub_9_set.insert("1");
        all_values.push_back(Sub_9_set);
        all_compo_names.insert("Sub_9_set");

        Pty_9.add_element(Sub_9);
      }
      Undly_2.add_element(Pty_9);
    }
    elt.add_element(Undly_2);
  } // end Undly
  { // Leg
    xml_element Leg_1{"Leg"};
    multiset<string> Leg_1_set;
    Leg_1.add_attribute("Sym", "LegSymbol_t_388683374"); // 1
    Leg_1_set.insert("LegSymbol_t_388683374");
    Leg_1.add_attribute("Sfx", "CD"); // 1
    Leg_1_set.insert("CD");
    Leg_1.add_attribute("ID", "LegSecurityID_t_93539866"); // 1
    Leg_1_set.insert("LegSecurityID_t_93539866");
    Leg_1.add_attribute("Src", "E"); // 1
    Leg_1_set.insert("E");
    Leg_1.add_attribute("Prod", "4"); // 1
    Leg_1_set.insert("4");
    Leg_1.add_attribute("CFI", "LegCFICode_t_130981468"); // 1
    Leg_1_set.insert("LegCFICode_t_130981468");
    Leg_1.add_attribute("SecTyp", "TLQN"); // 1
    Leg_1_set.insert("TLQN");
    Leg_1.add_attribute("SecSubTyp", "LegSecuritySubType_t_1197229611"); // 1
    Leg_1_set.insert("LegSecuritySubType_t_1197229611");
    Leg_1.add_attribute("MMY", "1599496040"); // 1
    Leg_1_set.insert("1599496040");
    Leg_1.add_attribute("Mat", "LegMaturityDate_t_1796051155"); // 1
    Leg_1_set.insert("LegMaturityDate_t_1796051155");
    Leg_1.add_attribute("MatTm", "1539326932"); // 1
    Leg_1_set.insert("1539326932");
    Leg_1.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1239534276"); // 1
    Leg_1_set.insert("LegCouponPaymentDate_t_1239534276");
    Leg_1.add_attribute("Issued", "LegIssueDate_t_592678029"); // 1
    Leg_1_set.insert("LegIssueDate_t_592678029");
    Leg_1.add_attribute("RepoCollSecTyp", "437726227"); // 1
    Leg_1_set.insert("437726227");
    Leg_1.add_attribute("RepoTrm", "568964561"); // 1
    Leg_1_set.insert("568964561");
    Leg_1.add_attribute("RepoRt", "10195308.520000"); // 1
    Leg_1_set.insert("10195308.520000");
    Leg_1.add_attribute("Fctr", "14144427.880000"); // 1
    Leg_1_set.insert("14144427.880000");
    Leg_1.add_attribute("CrdRtg", "LegCreditRating_t_180305860"); // 1
    Leg_1_set.insert("LegCreditRating_t_180305860");
    Leg_1.add_attribute("Rgstry", "LegInstrRegistry_t_245401144"); // 1
    Leg_1_set.insert("LegInstrRegistry_t_245401144");
    Leg_1.add_attribute("Ctry", "134785344"); // 1
    Leg_1_set.insert("134785344");
    Leg_1.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1466781599"); // 1
    Leg_1_set.insert("LegStateOrProvinceOfIssue_t_1466781599");
    Leg_1.add_attribute("Lcl", "LegLocaleOfIssue_t_1349925910"); // 1
    Leg_1_set.insert("LegLocaleOfIssue_t_1349925910");
    Leg_1.add_attribute("Redeem", "LegRedemptionDate_t_111437840"); // 1
    Leg_1_set.insert("LegRedemptionDate_t_111437840");
    Leg_1.add_attribute("Strk", "8158046.120000"); // 1
    Leg_1_set.insert("8158046.120000");
    Leg_1.add_attribute("StrkCcy", "EUR"); // 1
    Leg_1_set.insert("EUR");
    Leg_1.add_attribute("OptA", "1296617271"); // 1
    Leg_1_set.insert("1296617271");
    Leg_1.add_attribute("Cmult", "11366769.490000"); // 1
    Leg_1_set.insert("11366769.490000");
    Leg_1.add_attribute("MultTyp", "1"); // 1
    Leg_1_set.insert("1");
    Leg_1.add_attribute("FlowSchedTyp", "4"); // 1
    Leg_1_set.insert("4");
    Leg_1.add_attribute("UOM", "Gal"); // 1
    Leg_1_set.insert("Gal");
    Leg_1.add_attribute("UOMQty", "21063777.000000"); // 1
    Leg_1_set.insert("21063777.000000");
    Leg_1.add_attribute("PxUOM", "Alw"); // 1
    Leg_1_set.insert("Alw");
    Leg_1.add_attribute("PxUOMQty", "3185513.970000"); // 1
    Leg_1_set.insert("3185513.970000");
    Leg_1.add_attribute("TmUnit", "S"); // 1
    Leg_1_set.insert("S");
    Leg_1.add_attribute("ExerStyle", "0"); // 1
    Leg_1_set.insert("0");
    Leg_1.add_attribute("CpnRt", "4495328.650000"); // 1
    Leg_1_set.insert("4495328.650000");
    Leg_1.add_attribute("Exch", "LegSecurityExchange_t_770936158"); // 1
    Leg_1_set.insert("LegSecurityExchange_t_770936158");
    Leg_1.add_attribute("Issr", "LegIssuer_t_981237467"); // 1
    Leg_1_set.insert("LegIssuer_t_981237467");
    Leg_1.add_attribute("EncLegIssrLen", "2049028906"); // 1
    Leg_1_set.insert("2049028906");
    Leg_1.add_attribute("EncLegIssr", "EncodedLegIssuer_t_419503665"); // 1
    Leg_1_set.insert("EncodedLegIssuer_t_419503665");
    Leg_1.add_attribute("Desc", "LegSecurityDesc_t_373080751"); // 1
    Leg_1_set.insert("LegSecurityDesc_t_373080751");
    Leg_1.add_attribute("EncLegSecDescLen", "1141079534"); // 1
    Leg_1_set.insert("1141079534");
    Leg_1.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1012181695"); // 1
    Leg_1_set.insert("EncodedLegSecurityDesc_t_1012181695");
    Leg_1.add_attribute("RatioQty", "8108069.790000"); // 1
    Leg_1_set.insert("8108069.790000");
    Leg_1.add_attribute("Side", "G"); // 1
    Leg_1_set.insert("G");
    Leg_1.add_attribute("Ccy", "CAN"); // 1
    Leg_1_set.insert("CAN");
    Leg_1.add_attribute("Pool", "LegPool_t_1890349955"); // 1
    Leg_1_set.insert("LegPool_t_1890349955");
    Leg_1.add_attribute("Dated", "LegDatedDate_t_129630044"); // 1
    Leg_1_set.insert("LegDatedDate_t_129630044");
    Leg_1.add_attribute("CSetMo", "212551463"); // 1
    Leg_1_set.insert("212551463");
    Leg_1.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1209647906"); // 1
    Leg_1_set.insert("LegInterestAccrualDate_t_1209647906");
    Leg_1.add_attribute("PutCall", "1479555954"); // 1
    Leg_1_set.insert("1479555954");
    Leg_1.add_attribute("LegOptionRatio", "3239893.040000"); // 1
    Leg_1_set.insert("3239893.040000");
    Leg_1.add_attribute("Px", "20254525.190000"); // 1
    Leg_1_set.insert("20254525.190000");
    all_values.push_back(Leg_1_set);
    all_compo_names.insert("Leg_1_set");

    {
      xml_element LegAID_1{"LegAID"};
      multiset<string> LegAID_1_set;
      LegAID_1.add_attribute("SecAltID", "LegSecurityAltID_t_1281862683"); // 2
      LegAID_1_set.insert("LegSecurityAltID_t_1281862683");
      LegAID_1.add_attribute("SecAltIDSrc", "C"); // 2
      LegAID_1_set.insert("C");
      all_values.push_back(LegAID_1_set);
      all_compo_names.insert("LegAID_1_set");

      Leg_1.add_element(LegAID_1);
    }
    elt.add_element(Leg_1);
  } // end Leg
  { // Leg
    xml_element Leg_2{"Leg"};
    multiset<string> Leg_2_set;
    Leg_2.add_attribute("Sym", "LegSymbol_t_1174586142"); // 1
    Leg_2_set.insert("LegSymbol_t_1174586142");
    Leg_2.add_attribute("Sfx", "WI"); // 1
    Leg_2_set.insert("WI");
    Leg_2.add_attribute("ID", "LegSecurityID_t_415798355"); // 1
    Leg_2_set.insert("LegSecurityID_t_415798355");
    Leg_2.add_attribute("Src", "7"); // 1
    Leg_2_set.insert("7");
    Leg_2.add_attribute("Prod", "5"); // 1
    Leg_2_set.insert("5");
    Leg_2.add_attribute("CFI", "LegCFICode_t_374692408"); // 1
    Leg_2_set.insert("LegCFICode_t_374692408");
    Leg_2.add_attribute("SecTyp", "WAR"); // 1
    Leg_2_set.insert("WAR");
    Leg_2.add_attribute("SecSubTyp", "LegSecuritySubType_t_814618912"); // 1
    Leg_2_set.insert("LegSecuritySubType_t_814618912");
    Leg_2.add_attribute("MMY", "1048222286"); // 1
    Leg_2_set.insert("1048222286");
    Leg_2.add_attribute("Mat", "LegMaturityDate_t_1257905471"); // 1
    Leg_2_set.insert("LegMaturityDate_t_1257905471");
    Leg_2.add_attribute("MatTm", "1264151778"); // 1
    Leg_2_set.insert("1264151778");
    Leg_2.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1819158444"); // 1
    Leg_2_set.insert("LegCouponPaymentDate_t_1819158444");
    Leg_2.add_attribute("Issued", "LegIssueDate_t_91659290"); // 1
    Leg_2_set.insert("LegIssueDate_t_91659290");
    Leg_2.add_attribute("RepoCollSecTyp", "1165697036"); // 1
    Leg_2_set.insert("1165697036");
    Leg_2.add_attribute("RepoTrm", "91178462"); // 1
    Leg_2_set.insert("91178462");
    Leg_2.add_attribute("RepoRt", "4647400.410000"); // 1
    Leg_2_set.insert("4647400.410000");
    Leg_2.add_attribute("Fctr", "1592929.220000"); // 1
    Leg_2_set.insert("1592929.220000");
    Leg_2.add_attribute("CrdRtg", "LegCreditRating_t_1103360157"); // 1
    Leg_2_set.insert("LegCreditRating_t_1103360157");
    Leg_2.add_attribute("Rgstry", "LegInstrRegistry_t_1275547020"); // 1
    Leg_2_set.insert("LegInstrRegistry_t_1275547020");
    Leg_2.add_attribute("Ctry", "1869337018"); // 1
    Leg_2_set.insert("1869337018");
    Leg_2.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_987589056"); // 1
    Leg_2_set.insert("LegStateOrProvinceOfIssue_t_987589056");
    Leg_2.add_attribute("Lcl", "LegLocaleOfIssue_t_1353313139"); // 1
    Leg_2_set.insert("LegLocaleOfIssue_t_1353313139");
    Leg_2.add_attribute("Redeem", "LegRedemptionDate_t_1612203325"); // 1
    Leg_2_set.insert("LegRedemptionDate_t_1612203325");
    Leg_2.add_attribute("Strk", "11172191.000000"); // 1
    Leg_2_set.insert("11172191.000000");
    Leg_2.add_attribute("StrkCcy", "GBP"); // 1
    Leg_2_set.insert("GBP");
    Leg_2.add_attribute("OptA", "449291406"); // 1
    Leg_2_set.insert("449291406");
    Leg_2.add_attribute("Cmult", "18898539.070000"); // 1
    Leg_2_set.insert("18898539.070000");
    Leg_2.add_attribute("MultTyp", "2"); // 1
    Leg_2_set.insert("2");
    Leg_2.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_2_set.insert("0");
    Leg_2.add_attribute("UOM", "lbs"); // 1
    Leg_2_set.insert("lbs");
    Leg_2.add_attribute("UOMQty", "17269225.970000"); // 1
    Leg_2_set.insert("17269225.970000");
    Leg_2.add_attribute("PxUOM", "oz_tr"); // 1
    Leg_2_set.insert("oz_tr");
    Leg_2.add_attribute("PxUOMQty", "10037562.920000"); // 1
    Leg_2_set.insert("10037562.920000");
    Leg_2.add_attribute("TmUnit", "H"); // 1
    Leg_2_set.insert("H");
    Leg_2.add_attribute("ExerStyle", "0"); // 1
    Leg_2_set.insert("0");
    Leg_2.add_attribute("CpnRt", "13784487.000000"); // 1
    Leg_2_set.insert("13784487.000000");
    Leg_2.add_attribute("Exch", "LegSecurityExchange_t_2075623463"); // 1
    Leg_2_set.insert("LegSecurityExchange_t_2075623463");
    Leg_2.add_attribute("Issr", "LegIssuer_t_1165412855"); // 1
    Leg_2_set.insert("LegIssuer_t_1165412855");
    Leg_2.add_attribute("EncLegIssrLen", "279187338"); // 1
    Leg_2_set.insert("279187338");
    Leg_2.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1186045286"); // 1
    Leg_2_set.insert("EncodedLegIssuer_t_1186045286");
    Leg_2.add_attribute("Desc", "LegSecurityDesc_t_282080985"); // 1
    Leg_2_set.insert("LegSecurityDesc_t_282080985");
    Leg_2.add_attribute("EncLegSecDescLen", "2098345782"); // 1
    Leg_2_set.insert("2098345782");
    Leg_2.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1277704576"); // 1
    Leg_2_set.insert("EncodedLegSecurityDesc_t_1277704576");
    Leg_2.add_attribute("RatioQty", "14477780.210000"); // 1
    Leg_2_set.insert("14477780.210000");
    Leg_2.add_attribute("Side", "5"); // 1
    Leg_2_set.insert("5");
    Leg_2.add_attribute("Ccy", "EUR"); // 1
    Leg_2_set.insert("EUR");
    Leg_2.add_attribute("Pool", "LegPool_t_1145400753"); // 1
    Leg_2_set.insert("LegPool_t_1145400753");
    Leg_2.add_attribute("Dated", "LegDatedDate_t_870507990"); // 1
    Leg_2_set.insert("LegDatedDate_t_870507990");
    Leg_2.add_attribute("CSetMo", "1328924313"); // 1
    Leg_2_set.insert("1328924313");
    Leg_2.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2132989810"); // 1
    Leg_2_set.insert("LegInterestAccrualDate_t_2132989810");
    Leg_2.add_attribute("PutCall", "76337481"); // 1
    Leg_2_set.insert("76337481");
    Leg_2.add_attribute("LegOptionRatio", "7936439.910000"); // 1
    Leg_2_set.insert("7936439.910000");
    Leg_2.add_attribute("Px", "11027252.620000"); // 1
    Leg_2_set.insert("11027252.620000");
    all_values.push_back(Leg_2_set);
    all_compo_names.insert("Leg_2_set");

    {
      xml_element LegAID_2{"LegAID"};
      multiset<string> LegAID_2_set;
      LegAID_2.add_attribute("SecAltID", "LegSecurityAltID_t_1642202084"); // 2
      LegAID_2_set.insert("LegSecurityAltID_t_1642202084");
      LegAID_2.add_attribute("SecAltIDSrc", "L"); // 2
      LegAID_2_set.insert("L");
      all_values.push_back(LegAID_2_set);
      all_compo_names.insert("LegAID_2_set");

      Leg_2.add_element(LegAID_2);
    }
    elt.add_element(Leg_2);
  } // end Leg
  { // Leg
    xml_element Leg_3{"Leg"};
    multiset<string> Leg_3_set;
    Leg_3.add_attribute("Sym", "LegSymbol_t_1552016669"); // 1
    Leg_3_set.insert("LegSymbol_t_1552016669");
    Leg_3.add_attribute("Sfx", "WI"); // 1
    Leg_3_set.insert("WI");
    Leg_3.add_attribute("ID", "LegSecurityID_t_2020348030"); // 1
    Leg_3_set.insert("LegSecurityID_t_2020348030");
    Leg_3.add_attribute("Src", "A"); // 1
    Leg_3_set.insert("A");
    Leg_3.add_attribute("Prod", "3"); // 1
    Leg_3_set.insert("3");
    Leg_3.add_attribute("CFI", "LegCFICode_t_1599786979"); // 1
    Leg_3_set.insert("LegCFICode_t_1599786979");
    Leg_3.add_attribute("SecTyp", "BUYSELL"); // 1
    Leg_3_set.insert("BUYSELL");
    Leg_3.add_attribute("SecSubTyp", "LegSecuritySubType_t_828802924"); // 1
    Leg_3_set.insert("LegSecuritySubType_t_828802924");
    Leg_3.add_attribute("MMY", "54029178"); // 1
    Leg_3_set.insert("54029178");
    Leg_3.add_attribute("Mat", "LegMaturityDate_t_1341207480"); // 1
    Leg_3_set.insert("LegMaturityDate_t_1341207480");
    Leg_3.add_attribute("MatTm", "59767976"); // 1
    Leg_3_set.insert("59767976");
    Leg_3.add_attribute("CpnPmt", "LegCouponPaymentDate_t_2129652641"); // 1
    Leg_3_set.insert("LegCouponPaymentDate_t_2129652641");
    Leg_3.add_attribute("Issued", "LegIssueDate_t_359136687"); // 1
    Leg_3_set.insert("LegIssueDate_t_359136687");
    Leg_3.add_attribute("RepoCollSecTyp", "338955314"); // 1
    Leg_3_set.insert("338955314");
    Leg_3.add_attribute("RepoTrm", "1168214279"); // 1
    Leg_3_set.insert("1168214279");
    Leg_3.add_attribute("RepoRt", "6412176.720000"); // 1
    Leg_3_set.insert("6412176.720000");
    Leg_3.add_attribute("Fctr", "2898174.480000"); // 1
    Leg_3_set.insert("2898174.480000");
    Leg_3.add_attribute("CrdRtg", "LegCreditRating_t_298435207"); // 1
    Leg_3_set.insert("LegCreditRating_t_298435207");
    Leg_3.add_attribute("Rgstry", "LegInstrRegistry_t_2088995693"); // 1
    Leg_3_set.insert("LegInstrRegistry_t_2088995693");
    Leg_3.add_attribute("Ctry", "331858045"); // 1
    Leg_3_set.insert("331858045");
    Leg_3.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2040879825"); // 1
    Leg_3_set.insert("LegStateOrProvinceOfIssue_t_2040879825");
    Leg_3.add_attribute("Lcl", "LegLocaleOfIssue_t_1548582989"); // 1
    Leg_3_set.insert("LegLocaleOfIssue_t_1548582989");
    Leg_3.add_attribute("Redeem", "LegRedemptionDate_t_1477258798"); // 1
    Leg_3_set.insert("LegRedemptionDate_t_1477258798");
    Leg_3.add_attribute("Strk", "7639041.670000"); // 1
    Leg_3_set.insert("7639041.670000");
    Leg_3.add_attribute("StrkCcy", "USD"); // 1
    Leg_3_set.insert("USD");
    Leg_3.add_attribute("OptA", "840241648"); // 1
    Leg_3_set.insert("840241648");
    Leg_3.add_attribute("Cmult", "15236676.450000"); // 1
    Leg_3_set.insert("15236676.450000");
    Leg_3.add_attribute("MultTyp", "0"); // 1
    Leg_3_set.insert("0");
    Leg_3.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_3_set.insert("0");
    Leg_3.add_attribute("UOM", "Alw"); // 1
    Leg_3_set.insert("Alw");
    Leg_3.add_attribute("UOMQty", "19700232.440000"); // 1
    Leg_3_set.insert("19700232.440000");
    Leg_3.add_attribute("PxUOM", "Gal"); // 1
    Leg_3_set.insert("Gal");
    Leg_3.add_attribute("PxUOMQty", "7170599.540000"); // 1
    Leg_3_set.insert("7170599.540000");
    Leg_3.add_attribute("TmUnit", "Wk"); // 1
    Leg_3_set.insert("Wk");
    Leg_3.add_attribute("ExerStyle", "2"); // 1
    Leg_3_set.insert("2");
    Leg_3.add_attribute("CpnRt", "1693632.850000"); // 1
    Leg_3_set.insert("1693632.850000");
    Leg_3.add_attribute("Exch", "LegSecurityExchange_t_1948640245"); // 1
    Leg_3_set.insert("LegSecurityExchange_t_1948640245");
    Leg_3.add_attribute("Issr", "LegIssuer_t_225898336"); // 1
    Leg_3_set.insert("LegIssuer_t_225898336");
    Leg_3.add_attribute("EncLegIssrLen", "223392464"); // 1
    Leg_3_set.insert("223392464");
    Leg_3.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1142364077"); // 1
    Leg_3_set.insert("EncodedLegIssuer_t_1142364077");
    Leg_3.add_attribute("Desc", "LegSecurityDesc_t_285666312"); // 1
    Leg_3_set.insert("LegSecurityDesc_t_285666312");
    Leg_3.add_attribute("EncLegSecDescLen", "205561457"); // 1
    Leg_3_set.insert("205561457");
    Leg_3.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1501500765"); // 1
    Leg_3_set.insert("EncodedLegSecurityDesc_t_1501500765");
    Leg_3.add_attribute("RatioQty", "6246216.260000"); // 1
    Leg_3_set.insert("6246216.260000");
    Leg_3.add_attribute("Side", "A"); // 1
    Leg_3_set.insert("A");
    Leg_3.add_attribute("Ccy", "CHF"); // 1
    Leg_3_set.insert("CHF");
    Leg_3.add_attribute("Pool", "LegPool_t_1672210944"); // 1
    Leg_3_set.insert("LegPool_t_1672210944");
    Leg_3.add_attribute("Dated", "LegDatedDate_t_2084230483"); // 1
    Leg_3_set.insert("LegDatedDate_t_2084230483");
    Leg_3.add_attribute("CSetMo", "1246297120"); // 1
    Leg_3_set.insert("1246297120");
    Leg_3.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1565607121"); // 1
    Leg_3_set.insert("LegInterestAccrualDate_t_1565607121");
    Leg_3.add_attribute("PutCall", "1485329824"); // 1
    Leg_3_set.insert("1485329824");
    Leg_3.add_attribute("LegOptionRatio", "5760722.700000"); // 1
    Leg_3_set.insert("5760722.700000");
    Leg_3.add_attribute("Px", "1820276.400000"); // 1
    Leg_3_set.insert("1820276.400000");
    all_values.push_back(Leg_3_set);
    all_compo_names.insert("Leg_3_set");

    {
      xml_element LegAID_3{"LegAID"};
      multiset<string> LegAID_3_set;
      LegAID_3.add_attribute("SecAltID", "LegSecurityAltID_t_67869830"); // 2
      LegAID_3_set.insert("LegSecurityAltID_t_67869830");
      LegAID_3.add_attribute("SecAltIDSrc", "E"); // 2
      LegAID_3_set.insert("E");
      all_values.push_back(LegAID_3_set);
      all_compo_names.insert("LegAID_3_set");

      Leg_3.add_element(LegAID_3);
    }
    elt.add_element(Leg_3);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_0{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_0_set;
    SprdBnchmkCurve_0.add_attribute("Spread", "10222692.890000"); // 1
    SprdBnchmkCurve_0_set.insert("10222692.890000");
    SprdBnchmkCurve_0.add_attribute("Ccy", "GBP"); // 1
    SprdBnchmkCurve_0_set.insert("GBP");
    SprdBnchmkCurve_0.add_attribute("Name", "SWAP"); // 1
    SprdBnchmkCurve_0_set.insert("SWAP");
    SprdBnchmkCurve_0.add_attribute("Point", "BenchmarkCurvePoint_t_288249400"); // 1
    SprdBnchmkCurve_0_set.insert("BenchmarkCurvePoint_t_288249400");
    SprdBnchmkCurve_0.add_attribute("Px", "1318997.540000"); // 1
    SprdBnchmkCurve_0_set.insert("1318997.540000");
    SprdBnchmkCurve_0.add_attribute("PxTyp", "11"); // 1
    SprdBnchmkCurve_0_set.insert("11");
    SprdBnchmkCurve_0.add_attribute("SecID", "BenchmarkSecurityID_t_1005309355"); // 1
    SprdBnchmkCurve_0_set.insert("BenchmarkSecurityID_t_1005309355");
    SprdBnchmkCurve_0.add_attribute("SecIDSrc", "I"); // 1
    SprdBnchmkCurve_0_set.insert("I");
    all_values.push_back(SprdBnchmkCurve_0_set);
    all_compo_names.insert("SprdBnchmkCurve_0_set");

    elt.add_element(SprdBnchmkCurve_0);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_10{"Pty"};
    multiset<string> Pty_10_set;
    Pty_10.add_attribute("ID", "PartyID_t_1174672640"); // 1
    Pty_10_set.insert("PartyID_t_1174672640");
    Pty_10.add_attribute("Src", "9"); // 1
    Pty_10_set.insert("9");
    Pty_10.add_attribute("R", "46"); // 1
    Pty_10_set.insert("46");
    all_values.push_back(Pty_10_set);
    all_compo_names.insert("Pty_10_set");

    {
      xml_element Sub_10{"Sub"};
      multiset<string> Sub_10_set;
      Sub_10.add_attribute("ID", "PartySubID_t_1398065104"); // 2
      Sub_10_set.insert("PartySubID_t_1398065104");
      Sub_10.add_attribute("Typ", "9"); // 2
      Sub_10_set.insert("9");
      all_values.push_back(Sub_10_set);
      all_compo_names.insert("Sub_10_set");

      Pty_10.add_element(Sub_10);
    }
    elt.add_element(Pty_10);
  } // end Pty
  { // Stip
    xml_element Stip_3{"Stip"};
    multiset<string> Stip_3_set;
    Stip_3.add_attribute("Typ", "AUTOREINV"); // 1
    Stip_3_set.insert("AUTOREINV");
    Stip_3.add_attribute("Val", "StipulationValue_t_1387664252"); // 1
    Stip_3_set.insert("StipulationValue_t_1387664252");
    all_values.push_back(Stip_3_set);
    all_compo_names.insert("Stip_3_set");

    elt.add_element(Stip_3);
  } // end Stip
  { // Stip
    xml_element Stip_4{"Stip"};
    multiset<string> Stip_4_set;
    Stip_4.add_attribute("Typ", "AUTOREINV"); // 1
    Stip_4_set.insert("AUTOREINV");
    Stip_4.add_attribute("Val", "StipulationValue_t_829918651"); // 1
    Stip_4_set.insert("StipulationValue_t_829918651");
    all_values.push_back(Stip_4_set);
    all_compo_names.insert("Stip_4_set");

    elt.add_element(Stip_4);
  } // end Stip
  { // Stip
    xml_element Stip_5{"Stip"};
    multiset<string> Stip_5_set;
    Stip_5.add_attribute("Typ", "AUTOREINV"); // 1
    Stip_5_set.insert("AUTOREINV");
    Stip_5.add_attribute("Val", "StipulationValue_t_229515269"); // 1
    Stip_5_set.insert("StipulationValue_t_229515269");
    all_values.push_back(Stip_5_set);
    all_compo_names.insert("Stip_5_set");

    elt.add_element(Stip_5);
  } // end Stip
  { // Yield
    xml_element Yield_0{"Yield"};
    multiset<string> Yield_0_set;
    Yield_0.add_attribute("Typ", "CALL"); // 1
    Yield_0_set.insert("CALL");
    Yield_0.add_attribute("Yld", "13196458.770000"); // 1
    Yield_0_set.insert("13196458.770000");
    Yield_0.add_attribute("CalcDt", "YieldCalcDate_t_1475812389"); // 1
    Yield_0_set.insert("YieldCalcDate_t_1475812389");
    Yield_0.add_attribute("RedDt", "YieldRedemptionDate_t_1920253069"); // 1
    Yield_0_set.insert("YieldRedemptionDate_t_1920253069");
    Yield_0.add_attribute("RedPx", "6574920.530000"); // 1
    Yield_0_set.insert("6574920.530000");
    Yield_0.add_attribute("RedPxTyp", "3"); // 1
    Yield_0_set.insert("3");
    all_values.push_back(Yield_0_set);
    all_compo_names.insert("Yield_0_set");

    elt.add_element(Yield_0);
  } // end Yield
  { // Amt
    xml_element Amt_0{"Amt"};
    multiset<string> Amt_0_set;
    Amt_0.add_attribute("Typ", "VADJ"); // 1
    Amt_0_set.insert("VADJ");
    Amt_0.add_attribute("Amt", "PosAmt_t_1943238243"); // 1
    Amt_0_set.insert("PosAmt_t_1943238243");
    Amt_0.add_attribute("Ccy", "PositionCurrency_t_977066350"); // 1
    Amt_0_set.insert("PositionCurrency_t_977066350");
    all_values.push_back(Amt_0_set);
    all_compo_names.insert("Amt_0_set");

    elt.add_element(Amt_0);
  } // end Amt
  { // Amt
    xml_element Amt_1{"Amt"};
    multiset<string> Amt_1_set;
    Amt_1.add_attribute("Typ", "COLAT"); // 1
    Amt_1_set.insert("COLAT");
    Amt_1.add_attribute("Amt", "PosAmt_t_105114753"); // 1
    Amt_1_set.insert("PosAmt_t_105114753");
    Amt_1.add_attribute("Ccy", "PositionCurrency_t_186812076"); // 1
    Amt_1_set.insert("PositionCurrency_t_186812076");
    all_values.push_back(Amt_1_set);
    all_compo_names.insert("Amt_1_set");

    elt.add_element(Amt_1);
  } // end Amt
  { // Alloc
    xml_element Alloc_0{"Alloc"};
    multiset<string> Alloc_0_set;
    Alloc_0.add_attribute("Acct", "AllocAccount_t_237014507"); // 1
    Alloc_0_set.insert("AllocAccount_t_237014507");
    Alloc_0.add_attribute("ActIDSrc", "4"); // 1
    Alloc_0_set.insert("4");
    Alloc_0.add_attribute("MtchStat", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("Px", "13271409.680000"); // 1
    Alloc_0_set.insert("13271409.680000");
    Alloc_0.add_attribute("Qty", "14424637.980000"); // 1
    Alloc_0_set.insert("14424637.980000");
    Alloc_0.add_attribute("IndAllocID", "IndividualAllocID_t_490163459"); // 1
    Alloc_0_set.insert("IndividualAllocID_t_490163459");
    Alloc_0.add_attribute("ProcCode", "5"); // 1
    Alloc_0_set.insert("5");
    Alloc_0.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1994735701"); // 1
    Alloc_0_set.insert("SecondaryIndividualAllocID_t_1994735701");
    Alloc_0.add_attribute("Meth", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("CustCpcty", "AllocCustomerCapacity_t_2104587513"); // 1
    Alloc_0_set.insert("AllocCustomerCapacity_t_2104587513");
    Alloc_0.add_attribute("AllocPosEfct", "C"); // 1
    Alloc_0_set.insert("C");
    Alloc_0.add_attribute("Typ", "1"); // 1
    Alloc_0_set.insert("1");
    Alloc_0.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_0_set.insert("N");
    Alloc_0.add_attribute("HandlInst", "2"); // 1
    Alloc_0_set.insert("2");
    Alloc_0.add_attribute("Txt", "AllocText_t_26806481"); // 1
    Alloc_0_set.insert("AllocText_t_26806481");
    Alloc_0.add_attribute("EncAllocTextLen", "580183512"); // 1
    Alloc_0_set.insert("580183512");
    Alloc_0.add_attribute("EncAllocText", "EncodedAllocText_t_229781733"); // 1
    Alloc_0_set.insert("EncodedAllocText_t_229781733");
    Alloc_0.add_attribute("AvgPx", "3814524.280000"); // 1
    Alloc_0_set.insert("3814524.280000");
    Alloc_0.add_attribute("NetMny", "AllocNetMoney_t_1899829389"); // 1
    Alloc_0_set.insert("AllocNetMoney_t_1899829389");
    Alloc_0.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1705594123"); // 1
    Alloc_0_set.insert("SettlCurrAmt_t_1705594123");
    Alloc_0.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_154221849"); // 1
    Alloc_0_set.insert("AllocSettlCurrAmt_t_154221849");
    Alloc_0.add_attribute("SettlCcy", "CHF"); // 1
    Alloc_0_set.insert("CHF");
    Alloc_0.add_attribute("AllocSettlCcy", "EUR"); // 1
    Alloc_0_set.insert("EUR");
    Alloc_0.add_attribute("SettlCurrFxRt", "14057497.300000"); // 1
    Alloc_0_set.insert("14057497.300000");
    Alloc_0.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_0_set.insert("D");
    Alloc_0.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1304615389"); // 1
    Alloc_0_set.insert("AllocAccruedInterestAmt_t_1304615389");
    Alloc_0.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1510864483"); // 1
    Alloc_0_set.insert("AllocInterestAtMaturity_t_1510864483");
    Alloc_0.add_attribute("ClrFeeInd", "B"); // 1
    Alloc_0_set.insert("B");
    Alloc_0.add_attribute("SettlInstTyp", "1"); // 1
    Alloc_0_set.insert("1");
    all_values.push_back(Alloc_0_set);
    all_compo_names.insert("Alloc_0_set");

    {
      xml_element Pty_11{"Pty"};
      multiset<string> Pty_11_set;
      Pty_11.add_attribute("ID", "NestedPartyID_t_1747878990"); // 2
      Pty_11_set.insert("NestedPartyID_t_1747878990");
      Pty_11.add_attribute("Src", "A"); // 2
      Pty_11_set.insert("A");
      Pty_11.add_attribute("R", "82"); // 2
      Pty_11_set.insert("82");
      all_values.push_back(Pty_11_set);
      all_compo_names.insert("Pty_11_set");

      {
        xml_element Sub_11{"Sub"};
        multiset<string> Sub_11_set;
        Sub_11.add_attribute("ID", "NestedPartySubID_t_927536310"); // 3
        Sub_11_set.insert("NestedPartySubID_t_927536310");
        Sub_11.add_attribute("Typ", "28"); // 3
        Sub_11_set.insert("28");
        all_values.push_back(Sub_11_set);
        all_compo_names.insert("Sub_11_set");

        Pty_11.add_element(Sub_11);
      }
      Alloc_0.add_element(Pty_11);
    }
    {
      xml_element Comm_0{"Comm"};
      multiset<string> Comm_0_set;
      Comm_0.add_attribute("Comm", "Commission_t_1567934779"); // 2
      Comm_0_set.insert("Commission_t_1567934779");
      Comm_0.add_attribute("CommTyp", "3"); // 2
      Comm_0_set.insert("3");
      Comm_0.add_attribute("Ccy", "CHF"); // 2
      Comm_0_set.insert("CHF");
      Comm_0.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_0_set.insert("Y");
      all_values.push_back(Comm_0_set);
      all_compo_names.insert("Comm_0_set");

      Alloc_0.add_element(Comm_0);
    }
    {
      xml_element MiscFees_0{"MiscFees"};
      multiset<string> MiscFees_0_set;
      MiscFees_0.add_attribute("Amt", "MiscFeeAmt_t_68926394"); // 2
      MiscFees_0_set.insert("MiscFeeAmt_t_68926394");
      MiscFees_0.add_attribute("Curr", "CAN"); // 2
      MiscFees_0_set.insert("CAN");
      MiscFees_0.add_attribute("Typ", "1"); // 2
      MiscFees_0_set.insert("1");
      MiscFees_0.add_attribute("Basis", "0"); // 2
      MiscFees_0_set.insert("0");
      all_values.push_back(MiscFees_0_set);
      all_compo_names.insert("MiscFees_0_set");

      Alloc_0.add_element(MiscFees_0);
    }
    {
      xml_element ClrInst_0{"ClrInst"};
      multiset<string> ClrInst_0_set;
      ClrInst_0.add_attribute("ClrngInstrctn", "5"); // 2
      ClrInst_0_set.insert("5");
      all_values.push_back(ClrInst_0_set);
      all_compo_names.insert("ClrInst_0_set");

      Alloc_0.add_element(ClrInst_0);
    }
    {
      xml_element SetInstr_0{"SetInstr"};
      multiset<string> SetInstr_0_set;
      SetInstr_0.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_0_set.insert("3");
      SetInstr_0.add_attribute("StandInstDbTyp", "0"); // 2
      SetInstr_0_set.insert("0");
      SetInstr_0.add_attribute("StandInstDbName", "StandInstDbName_t_485394276"); // 2
      SetInstr_0_set.insert("StandInstDbName_t_485394276");
      SetInstr_0.add_attribute("StandInstDbID", "StandInstDbID_t_2004568714"); // 2
      SetInstr_0_set.insert("StandInstDbID_t_2004568714");
      all_values.push_back(SetInstr_0_set);
      all_compo_names.insert("SetInstr_0_set");

      {
        xml_element DlvInst_0{"DlvInst"};
        multiset<string> DlvInst_0_set;
        DlvInst_0.add_attribute("InstSrc", "3"); // 3
        DlvInst_0_set.insert("3");
        DlvInst_0.add_attribute("InstTyp", "C"); // 3
        DlvInst_0_set.insert("C");
        all_values.push_back(DlvInst_0_set);
        all_compo_names.insert("DlvInst_0_set");

        {
          xml_element Pty_12{"Pty"};
          multiset<string> Pty_12_set;
          Pty_12.add_attribute("ID", "SettlPartyID_t_1467080201"); // 4
          Pty_12_set.insert("SettlPartyID_t_1467080201");
          Pty_12.add_attribute("Src", "I"); // 4
          Pty_12_set.insert("I");
          Pty_12.add_attribute("R", "47"); // 4
          Pty_12_set.insert("47");
          all_values.push_back(Pty_12_set);
          all_compo_names.insert("Pty_12_set");

          {
            xml_element Sub_12{"Sub"};
            multiset<string> Sub_12_set;
            Sub_12.add_attribute("ID", "SettlPartySubID_t_725346283"); // 5
            Sub_12_set.insert("SettlPartySubID_t_725346283");
            Sub_12.add_attribute("Typ", "22"); // 5
            Sub_12_set.insert("22");
            all_values.push_back(Sub_12_set);
            all_compo_names.insert("Sub_12_set");

            Pty_12.add_element(Sub_12);
          }
          DlvInst_0.add_element(Pty_12);
        }
        SetInstr_0.add_element(DlvInst_0);
      }
      Alloc_0.add_element(SetInstr_0);
    }
    elt.add_element(Alloc_0);
  } // end Alloc
  { // Alloc
    xml_element Alloc_1{"Alloc"};
    multiset<string> Alloc_1_set;
    Alloc_1.add_attribute("Acct", "AllocAccount_t_1187563489"); // 1
    Alloc_1_set.insert("AllocAccount_t_1187563489");
    Alloc_1.add_attribute("ActIDSrc", "1"); // 1
    Alloc_1_set.insert("1");
    Alloc_1.add_attribute("MtchStat", "1"); // 1
    Alloc_1_set.insert("1");
    Alloc_1.add_attribute("Px", "8023603.420000"); // 1
    Alloc_1_set.insert("8023603.420000");
    Alloc_1.add_attribute("Qty", "18366061.080000"); // 1
    Alloc_1_set.insert("18366061.080000");
    Alloc_1.add_attribute("IndAllocID", "IndividualAllocID_t_1630070068"); // 1
    Alloc_1_set.insert("IndividualAllocID_t_1630070068");
    Alloc_1.add_attribute("ProcCode", "3"); // 1
    Alloc_1_set.insert("3");
    Alloc_1.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_616658770"); // 1
    Alloc_1_set.insert("SecondaryIndividualAllocID_t_616658770");
    Alloc_1.add_attribute("Meth", "3"); // 1
    Alloc_1_set.insert("3");
    Alloc_1.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1300582793"); // 1
    Alloc_1_set.insert("AllocCustomerCapacity_t_1300582793");
    Alloc_1.add_attribute("AllocPosEfct", "R"); // 1
    Alloc_1_set.insert("R");
    Alloc_1.add_attribute("Typ", "2"); // 1
    Alloc_1_set.insert("2");
    Alloc_1.add_attribute("NotifyBrkrOfCredit", "Y"); // 1
    Alloc_1_set.insert("Y");
    Alloc_1.add_attribute("HandlInst", "3"); // 1
    Alloc_1_set.insert("3");
    Alloc_1.add_attribute("Txt", "AllocText_t_619216657"); // 1
    Alloc_1_set.insert("AllocText_t_619216657");
    Alloc_1.add_attribute("EncAllocTextLen", "967346366"); // 1
    Alloc_1_set.insert("967346366");
    Alloc_1.add_attribute("EncAllocText", "EncodedAllocText_t_576097387"); // 1
    Alloc_1_set.insert("EncodedAllocText_t_576097387");
    Alloc_1.add_attribute("AvgPx", "6884095.150000"); // 1
    Alloc_1_set.insert("6884095.150000");
    Alloc_1.add_attribute("NetMny", "AllocNetMoney_t_1499720373"); // 1
    Alloc_1_set.insert("AllocNetMoney_t_1499720373");
    Alloc_1.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1309145923"); // 1
    Alloc_1_set.insert("SettlCurrAmt_t_1309145923");
    Alloc_1.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_987384107"); // 1
    Alloc_1_set.insert("AllocSettlCurrAmt_t_987384107");
    Alloc_1.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_1_set.insert("EUR");
    Alloc_1.add_attribute("AllocSettlCcy", "GBP"); // 1
    Alloc_1_set.insert("GBP");
    Alloc_1.add_attribute("SettlCurrFxRt", "5422886.220000"); // 1
    Alloc_1_set.insert("5422886.220000");
    Alloc_1.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_1_set.insert("D");
    Alloc_1.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_363694992"); // 1
    Alloc_1_set.insert("AllocAccruedInterestAmt_t_363694992");
    Alloc_1.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_425236722"); // 1
    Alloc_1_set.insert("AllocInterestAtMaturity_t_425236722");
    Alloc_1.add_attribute("ClrFeeInd", "5"); // 1
    Alloc_1_set.insert("5");
    Alloc_1.add_attribute("SettlInstTyp", "1"); // 1
    Alloc_1_set.insert("1");
    all_values.push_back(Alloc_1_set);
    all_compo_names.insert("Alloc_1_set");

    {
      xml_element Pty_13{"Pty"};
      multiset<string> Pty_13_set;
      Pty_13.add_attribute("ID", "NestedPartyID_t_1612800211"); // 2
      Pty_13_set.insert("NestedPartyID_t_1612800211");
      Pty_13.add_attribute("Src", "E"); // 2
      Pty_13_set.insert("E");
      Pty_13.add_attribute("R", "32"); // 2
      Pty_13_set.insert("32");
      all_values.push_back(Pty_13_set);
      all_compo_names.insert("Pty_13_set");

      {
        xml_element Sub_13{"Sub"};
        multiset<string> Sub_13_set;
        Sub_13.add_attribute("ID", "NestedPartySubID_t_267676905"); // 3
        Sub_13_set.insert("NestedPartySubID_t_267676905");
        Sub_13.add_attribute("Typ", "14"); // 3
        Sub_13_set.insert("14");
        all_values.push_back(Sub_13_set);
        all_compo_names.insert("Sub_13_set");

        Pty_13.add_element(Sub_13);
      }
      Alloc_1.add_element(Pty_13);
    }
    {
      xml_element Comm_1{"Comm"};
      multiset<string> Comm_1_set;
      Comm_1.add_attribute("Comm", "Commission_t_1350516368"); // 2
      Comm_1_set.insert("Commission_t_1350516368");
      Comm_1.add_attribute("CommTyp", "2"); // 2
      Comm_1_set.insert("2");
      Comm_1.add_attribute("Ccy", "CAN"); // 2
      Comm_1_set.insert("CAN");
      Comm_1.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_1_set.insert("N");
      all_values.push_back(Comm_1_set);
      all_compo_names.insert("Comm_1_set");

      Alloc_1.add_element(Comm_1);
    }
    {
      xml_element MiscFees_1{"MiscFees"};
      multiset<string> MiscFees_1_set;
      MiscFees_1.add_attribute("Amt", "MiscFeeAmt_t_751572170"); // 2
      MiscFees_1_set.insert("MiscFeeAmt_t_751572170");
      MiscFees_1.add_attribute("Curr", "EUR"); // 2
      MiscFees_1_set.insert("EUR");
      MiscFees_1.add_attribute("Typ", "6"); // 2
      MiscFees_1_set.insert("6");
      MiscFees_1.add_attribute("Basis", "0"); // 2
      MiscFees_1_set.insert("0");
      all_values.push_back(MiscFees_1_set);
      all_compo_names.insert("MiscFees_1_set");

      Alloc_1.add_element(MiscFees_1);
    }
    {
      xml_element ClrInst_1{"ClrInst"};
      multiset<string> ClrInst_1_set;
      ClrInst_1.add_attribute("ClrngInstrctn", "12"); // 2
      ClrInst_1_set.insert("12");
      all_values.push_back(ClrInst_1_set);
      all_compo_names.insert("ClrInst_1_set");

      Alloc_1.add_element(ClrInst_1);
    }
    {
      xml_element SetInstr_1{"SetInstr"};
      multiset<string> SetInstr_1_set;
      SetInstr_1.add_attribute("DlvryTyp", "2"); // 2
      SetInstr_1_set.insert("2");
      SetInstr_1.add_attribute("StandInstDbTyp", "2"); // 2
      SetInstr_1_set.insert("2");
      SetInstr_1.add_attribute("StandInstDbName", "StandInstDbName_t_2082269645"); // 2
      SetInstr_1_set.insert("StandInstDbName_t_2082269645");
      SetInstr_1.add_attribute("StandInstDbID", "StandInstDbID_t_912564197"); // 2
      SetInstr_1_set.insert("StandInstDbID_t_912564197");
      all_values.push_back(SetInstr_1_set);
      all_compo_names.insert("SetInstr_1_set");

      {
        xml_element DlvInst_1{"DlvInst"};
        multiset<string> DlvInst_1_set;
        DlvInst_1.add_attribute("InstSrc", "2"); // 3
        DlvInst_1_set.insert("2");
        DlvInst_1.add_attribute("InstTyp", "S"); // 3
        DlvInst_1_set.insert("S");
        all_values.push_back(DlvInst_1_set);
        all_compo_names.insert("DlvInst_1_set");

        {
          xml_element Pty_14{"Pty"};
          multiset<string> Pty_14_set;
          Pty_14.add_attribute("ID", "SettlPartyID_t_559620748"); // 4
          Pty_14_set.insert("SettlPartyID_t_559620748");
          Pty_14.add_attribute("Src", "D"); // 4
          Pty_14_set.insert("D");
          Pty_14.add_attribute("R", "44"); // 4
          Pty_14_set.insert("44");
          all_values.push_back(Pty_14_set);
          all_compo_names.insert("Pty_14_set");

          {
            xml_element Sub_14{"Sub"};
            multiset<string> Sub_14_set;
            Sub_14.add_attribute("ID", "SettlPartySubID_t_1101909370"); // 5
            Sub_14_set.insert("SettlPartySubID_t_1101909370");
            Sub_14.add_attribute("Typ", "33"); // 5
            Sub_14_set.insert("33");
            all_values.push_back(Sub_14_set);
            all_compo_names.insert("Sub_14_set");

            Pty_14.add_element(Sub_14);
          }
          DlvInst_1.add_element(Pty_14);
        }
        SetInstr_1.add_element(DlvInst_1);
      }
      Alloc_1.add_element(SetInstr_1);
    }
    elt.add_element(Alloc_1);
  } // end Alloc
  { // RtSrc
    xml_element RtSrc_0{"RtSrc"};
    multiset<string> RtSrc_0_set;
    RtSrc_0.add_attribute("RtSrc", "0"); // 1
    RtSrc_0_set.insert("0");
    RtSrc_0.add_attribute("RtSrcTyp", "1"); // 1
    RtSrc_0_set.insert("1");
    RtSrc_0.add_attribute("RefPg", "ReferencePage_t_230535746"); // 1
    RtSrc_0_set.insert("ReferencePage_t_230535746");
    all_values.push_back(RtSrc_0_set);
    all_compo_names.insert("RtSrc_0_set");

    elt.add_element(RtSrc_0);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_1{"RtSrc"};
    multiset<string> RtSrc_1_set;
    RtSrc_1.add_attribute("RtSrc", "99"); // 1
    RtSrc_1_set.insert("99");
    RtSrc_1.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_1_set.insert("0");
    RtSrc_1.add_attribute("RefPg", "ReferencePage_t_2098465694"); // 1
    RtSrc_1_set.insert("ReferencePage_t_2098465694");
    all_values.push_back(RtSrc_1_set);
    all_compo_names.insert("RtSrc_1_set");

    elt.add_element(RtSrc_1);
  } // end RtSrc
  { // RtSrc
    xml_element RtSrc_2{"RtSrc"};
    multiset<string> RtSrc_2_set;
    RtSrc_2.add_attribute("RtSrc", "0"); // 1
    RtSrc_2_set.insert("0");
    RtSrc_2.add_attribute("RtSrcTyp", "0"); // 1
    RtSrc_2_set.insert("0");
    RtSrc_2.add_attribute("RefPg", "ReferencePage_t_1301498414"); // 1
    RtSrc_2_set.insert("ReferencePage_t_1301498414");
    all_values.push_back(RtSrc_2_set);
    all_compo_names.insert("RtSrc_2_set");

    elt.add_element(RtSrc_2);
  } // end RtSrc
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
