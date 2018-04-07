#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/AllocationInstructionAlert.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( AllocationInstructionAlert_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrAlert" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_message_t_0;
  elt.add_attribute("ID", "AllocID_t_1731960250"); // 0
  AllocationInstructionAlert_message_t_0.insert("AllocID_t_1731960250");
  elt.add_attribute("TransTyp", "4"); // 0
  AllocationInstructionAlert_message_t_0.insert("4");
  elt.add_attribute("Typ", "7"); // 0
  AllocationInstructionAlert_message_t_0.insert("7");
  elt.add_attribute("ID2", "SecondaryAllocID_t_874688606"); // 0
  AllocationInstructionAlert_message_t_0.insert("SecondaryAllocID_t_874688606");
  elt.add_attribute("RefID", "RefAllocID_t_926582216"); // 0
  AllocationInstructionAlert_message_t_0.insert("RefAllocID_t_926582216");
  elt.add_attribute("CxlRplcRsn", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("ImReqTyp", "3"); // 0
  AllocationInstructionAlert_message_t_0.insert("3");
  elt.add_attribute("LinkID", "AllocLinkID_t_1929683035"); // 0
  AllocationInstructionAlert_message_t_0.insert("AllocLinkID_t_1929683035");
  elt.add_attribute("LinkTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("BkngRefID", "BookingRefID_t_79171245"); // 0
  AllocationInstructionAlert_message_t_0.insert("BookingRefID_t_79171245");
  elt.add_attribute("NoOrdsTyp", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "true"); // 0
  AllocationInstructionAlert_message_t_0.insert("true");
  elt.add_attribute("MtchTyp", "A4"); // 0
  AllocationInstructionAlert_message_t_0.insert("A4");
  elt.add_attribute("Side", "B"); // 0
  AllocationInstructionAlert_message_t_0.insert("B");
  elt.add_attribute("Qty", "19553956.940000"); // 0
  AllocationInstructionAlert_message_t_0.insert("19553956.940000");
  elt.add_attribute("QtyTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("LastMkt", "LastMkt_t_2051152353"); // 0
  AllocationInstructionAlert_message_t_0.insert("LastMkt_t_2051152353");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_255391687"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeOriginationDate_t_255391687");
  elt.add_attribute("SesID", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("SesSub", "7"); // 0
  AllocationInstructionAlert_message_t_0.insert("7");
  elt.add_attribute("PxTyp", "16"); // 0
  AllocationInstructionAlert_message_t_0.insert("16");
  elt.add_attribute("AvgPx", "11754367.790000"); // 0
  AllocationInstructionAlert_message_t_0.insert("11754367.790000");
  elt.add_attribute("AvgParPx", "7825712.180000"); // 0
  AllocationInstructionAlert_message_t_0.insert("7825712.180000");
  elt.add_attribute("Ccy", "GBP"); // 0
  AllocationInstructionAlert_message_t_0.insert("GBP");
  elt.add_attribute("AvgPxPrcsn", "1947777955"); // 0
  AllocationInstructionAlert_message_t_0.insert("1947777955");
  elt.add_attribute("TrdDt", "TradeDate_t_1508148038"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeDate_t_1508148038");
  elt.add_attribute("TxnTm", "TransactTime_t_2141890070"); // 0
  AllocationInstructionAlert_message_t_0.insert("TransactTime_t_2141890070");
  elt.add_attribute("SettlTyp", "C"); // 0
  AllocationInstructionAlert_message_t_0.insert("C");
  elt.add_attribute("SettlDt", "SettlDate_t_1714411146"); // 0
  AllocationInstructionAlert_message_t_0.insert("SettlDate_t_1714411146");
  elt.add_attribute("BkngTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_144580025"); // 0
  AllocationInstructionAlert_message_t_0.insert("GrossTradeAmt_t_144580025");
  elt.add_attribute("Concession", "Concession_t_331424693"); // 0
  AllocationInstructionAlert_message_t_0.insert("Concession_t_331424693");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_453571631"); // 0
  AllocationInstructionAlert_message_t_0.insert("TotalTakedown_t_453571631");
  elt.add_attribute("NetMny", "NetMoney_t_1071162242"); // 0
  AllocationInstructionAlert_message_t_0.insert("NetMoney_t_1071162242");
  elt.add_attribute("PosEfct", "D"); // 0
  AllocationInstructionAlert_message_t_0.insert("D");
  elt.add_attribute("AutoAcceptInd", "false"); // 0
  AllocationInstructionAlert_message_t_0.insert("false");
  elt.add_attribute("Txt", "Text_t_853361629"); // 0
  AllocationInstructionAlert_message_t_0.insert("Text_t_853361629");
  elt.add_attribute("EncTxtLen", "1858192570"); // 0
  AllocationInstructionAlert_message_t_0.insert("1858192570");
  elt.add_attribute("EncTxt", "EncodedText_t_346810046"); // 0
  AllocationInstructionAlert_message_t_0.insert("EncodedText_t_346810046");
  elt.add_attribute("NumDaysInt", "134639441"); // 0
  AllocationInstructionAlert_message_t_0.insert("134639441");
  elt.add_attribute("AcrdIntRt", "18270433.720000"); // 0
  AllocationInstructionAlert_message_t_0.insert("18270433.720000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_892833387"); // 0
  AllocationInstructionAlert_message_t_0.insert("AccruedInterestAmt_t_892833387");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_2139484910"); // 0
  AllocationInstructionAlert_message_t_0.insert("TotalAccruedInterestAmt_t_2139484910");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_446226758"); // 0
  AllocationInstructionAlert_message_t_0.insert("InterestAtMaturity_t_446226758");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_700745433"); // 0
  AllocationInstructionAlert_message_t_0.insert("EndAccruedInterestAmt_t_700745433");
  elt.add_attribute("StartCsh", "StartCash_t_376535558"); // 0
  AllocationInstructionAlert_message_t_0.insert("StartCash_t_376535558");
  elt.add_attribute("EndCsh", "EndCash_t_349895463"); // 0
  AllocationInstructionAlert_message_t_0.insert("EndCash_t_349895463");
  elt.add_attribute("LegalCnfm", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("TotNoAllocs", "396076917"); // 0
  AllocationInstructionAlert_message_t_0.insert("396076917");
  elt.add_attribute("LastFragment", "Y"); // 0
  AllocationInstructionAlert_message_t_0.insert("Y");
  elt.add_attribute("AvgPxInd", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1571513696"); // 0
  AllocationInstructionAlert_message_t_0.insert("ClearingBusinessDate_t_1571513696");
  elt.add_attribute("TrdTyp", "53"); // 0
  AllocationInstructionAlert_message_t_0.insert("53");
  elt.add_attribute("TrdSubTyp", "38"); // 0
  AllocationInstructionAlert_message_t_0.insert("38");
  elt.add_attribute("CustCpcty", "3"); // 0
  AllocationInstructionAlert_message_t_0.insert("3");
  elt.add_attribute("InptSrc", "TradeInputSource_t_2095580387"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeInputSource_t_2095580387");
  elt.add_attribute("MLegRptTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_21597824"); // 0
  AllocationInstructionAlert_message_t_0.insert("MessageEventSource_t_21597824");
  elt.add_attribute("RndPx", "4615260.610000"); // 0
  AllocationInstructionAlert_message_t_0.insert("4615260.610000");
  all_values.push_back(AllocationInstructionAlert_message_t_0);
  all_compo_names.insert("AllocationInstructionAlert_message_t");

  { // Hdr
    xml_element Hdr_4{"Hdr"};
    multiset<string> Hdr_4_set;
    Hdr_4.add_attribute("SeqNum", "1960524137"); // 1
    Hdr_4_set.insert("1960524137");
    Hdr_4.add_attribute("SID", "SenderCompID_t_1747964497"); // 1
    Hdr_4_set.insert("SenderCompID_t_1747964497");
    Hdr_4.add_attribute("TID", "TargetCompID_t_606106086"); // 1
    Hdr_4_set.insert("TargetCompID_t_606106086");
    Hdr_4.add_attribute("OBID", "OnBehalfOfCompID_t_144465182"); // 1
    Hdr_4_set.insert("OnBehalfOfCompID_t_144465182");
    Hdr_4.add_attribute("D2ID", "DeliverToCompID_t_54052481"); // 1
    Hdr_4_set.insert("DeliverToCompID_t_54052481");
    Hdr_4.add_attribute("SSub", "SenderSubID_t_1677268328"); // 1
    Hdr_4_set.insert("SenderSubID_t_1677268328");
    Hdr_4.add_attribute("SLoc", "SenderLocationID_t_1207183645"); // 1
    Hdr_4_set.insert("SenderLocationID_t_1207183645");
    Hdr_4.add_attribute("TSub", "TargetSubID_t_321691282"); // 1
    Hdr_4_set.insert("TargetSubID_t_321691282");
    Hdr_4.add_attribute("TLoc", "TargetLocationID_t_383146310"); // 1
    Hdr_4_set.insert("TargetLocationID_t_383146310");
    Hdr_4.add_attribute("OBSub", "OnBehalfOfSubID_t_917892568"); // 1
    Hdr_4_set.insert("OnBehalfOfSubID_t_917892568");
    Hdr_4.add_attribute("OBLoc", "OnBehalfOfLocationID_t_668501329"); // 1
    Hdr_4_set.insert("OnBehalfOfLocationID_t_668501329");
    Hdr_4.add_attribute("D2Sub", "DeliverToSubID_t_517785751"); // 1
    Hdr_4_set.insert("DeliverToSubID_t_517785751");
    Hdr_4.add_attribute("D2Loc", "DeliverToLocationID_t_597452292"); // 1
    Hdr_4_set.insert("DeliverToLocationID_t_597452292");
    Hdr_4.add_attribute("PosDup", "N"); // 1
    Hdr_4_set.insert("N");
    Hdr_4.add_attribute("PosRsnd", "N"); // 1
    Hdr_4_set.insert("N");
    Hdr_4.add_attribute("Snt", "SendingTime_t_1043679051"); // 1
    Hdr_4_set.insert("SendingTime_t_1043679051");
    Hdr_4.add_attribute("OrigSnt", "OrigSendingTime_t_114596501"); // 1
    Hdr_4_set.insert("OrigSendingTime_t_114596501");
    Hdr_4.add_attribute("MsgEncd", "MessageEncoding_t_886322572"); // 1
    Hdr_4_set.insert("MessageEncoding_t_886322572");
    all_values.push_back(Hdr_4_set);
    all_compo_names.insert("Hdr_4_set");

    {
      xml_element Hop_4{"Hop"};
      multiset<string> Hop_4_set;
      Hop_4.add_attribute("ID", "HopCompID_t_1393574514"); // 2
      Hop_4_set.insert("HopCompID_t_1393574514");
      Hop_4.add_attribute("Ref", "1070733622"); // 2
      Hop_4_set.insert("1070733622");
      Hop_4.add_attribute("Snt", "HopSendingTime_t_1282399489"); // 2
      Hop_4_set.insert("HopSendingTime_t_1282399489");
      all_values.push_back(Hop_4_set);
      all_compo_names.insert("Hop_4_set");

      Hdr_4.add_element(Hop_4);
    }
    elt.add_element(Hdr_4);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_3{"OrdAlloc"};
    multiset<string> OrdAlloc_3_set;
    OrdAlloc_3.add_attribute("ClOrdID", "ClOrdID_t_115698039"); // 1
    OrdAlloc_3_set.insert("ClOrdID_t_115698039");
    OrdAlloc_3.add_attribute("OrdID", "OrderID_t_706429537"); // 1
    OrdAlloc_3_set.insert("OrderID_t_706429537");
    OrdAlloc_3.add_attribute("OrdID2", "SecondaryOrderID_t_906608160"); // 1
    OrdAlloc_3_set.insert("SecondaryOrderID_t_906608160");
    OrdAlloc_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1001146639"); // 1
    OrdAlloc_3_set.insert("SecondaryClOrdID_t_1001146639");
    OrdAlloc_3.add_attribute("ListID", "ListID_t_733620939"); // 1
    OrdAlloc_3_set.insert("ListID_t_733620939");
    OrdAlloc_3.add_attribute("Qty", "8547048.990000"); // 1
    OrdAlloc_3_set.insert("8547048.990000");
    OrdAlloc_3.add_attribute("AvgPx", "12472596.300000"); // 1
    OrdAlloc_3_set.insert("12472596.300000");
    OrdAlloc_3.add_attribute("BkngQty", "7552187.630000"); // 1
    OrdAlloc_3_set.insert("7552187.630000");
    all_values.push_back(OrdAlloc_3_set);
    all_compo_names.insert("OrdAlloc_3_set");

    {
      xml_element Pty_28{"Pty"};
      multiset<string> Pty_28_set;
      Pty_28.add_attribute("ID", "Nested2PartyID_t_1316230960"); // 2
      Pty_28_set.insert("Nested2PartyID_t_1316230960");
      Pty_28.add_attribute("Src", "4"); // 2
      Pty_28_set.insert("4");
      Pty_28.add_attribute("R", "26"); // 2
      Pty_28_set.insert("26");
      all_values.push_back(Pty_28_set);
      all_compo_names.insert("Pty_28_set");

      {
        xml_element Sub_28{"Sub"};
        multiset<string> Sub_28_set;
        Sub_28.add_attribute("ID", "Nested2PartySubID_t_1922337046"); // 3
        Sub_28_set.insert("Nested2PartySubID_t_1922337046");
        Sub_28.add_attribute("Typ", "22"); // 3
        Sub_28_set.insert("22");
        all_values.push_back(Sub_28_set);
        all_compo_names.insert("Sub_28_set");

        Pty_28.add_element(Sub_28);
      }
      OrdAlloc_3.add_element(Pty_28);
    }
    elt.add_element(OrdAlloc_3);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_4{"OrdAlloc"};
    multiset<string> OrdAlloc_4_set;
    OrdAlloc_4.add_attribute("ClOrdID", "ClOrdID_t_409752094"); // 1
    OrdAlloc_4_set.insert("ClOrdID_t_409752094");
    OrdAlloc_4.add_attribute("OrdID", "OrderID_t_1452121727"); // 1
    OrdAlloc_4_set.insert("OrderID_t_1452121727");
    OrdAlloc_4.add_attribute("OrdID2", "SecondaryOrderID_t_264465298"); // 1
    OrdAlloc_4_set.insert("SecondaryOrderID_t_264465298");
    OrdAlloc_4.add_attribute("ClOrdID2", "SecondaryClOrdID_t_731443376"); // 1
    OrdAlloc_4_set.insert("SecondaryClOrdID_t_731443376");
    OrdAlloc_4.add_attribute("ListID", "ListID_t_1835268037"); // 1
    OrdAlloc_4_set.insert("ListID_t_1835268037");
    OrdAlloc_4.add_attribute("Qty", "11823578.660000"); // 1
    OrdAlloc_4_set.insert("11823578.660000");
    OrdAlloc_4.add_attribute("AvgPx", "13999447.050000"); // 1
    OrdAlloc_4_set.insert("13999447.050000");
    OrdAlloc_4.add_attribute("BkngQty", "2055701.400000"); // 1
    OrdAlloc_4_set.insert("2055701.400000");
    all_values.push_back(OrdAlloc_4_set);
    all_compo_names.insert("OrdAlloc_4_set");

    {
      xml_element Pty_29{"Pty"};
      multiset<string> Pty_29_set;
      Pty_29.add_attribute("ID", "Nested2PartyID_t_1779810159"); // 2
      Pty_29_set.insert("Nested2PartyID_t_1779810159");
      Pty_29.add_attribute("Src", "6"); // 2
      Pty_29_set.insert("6");
      Pty_29.add_attribute("R", "53"); // 2
      Pty_29_set.insert("53");
      all_values.push_back(Pty_29_set);
      all_compo_names.insert("Pty_29_set");

      {
        xml_element Sub_29{"Sub"};
        multiset<string> Sub_29_set;
        Sub_29.add_attribute("ID", "Nested2PartySubID_t_676005562"); // 3
        Sub_29_set.insert("Nested2PartySubID_t_676005562");
        Sub_29.add_attribute("Typ", "17"); // 3
        Sub_29_set.insert("17");
        all_values.push_back(Sub_29_set);
        all_compo_names.insert("Sub_29_set");

        Pty_29.add_element(Sub_29);
      }
      OrdAlloc_4.add_element(Pty_29);
    }
    elt.add_element(OrdAlloc_4);
  } // end OrdAlloc
  { // OrdAlloc
    xml_element OrdAlloc_5{"OrdAlloc"};
    multiset<string> OrdAlloc_5_set;
    OrdAlloc_5.add_attribute("ClOrdID", "ClOrdID_t_1601679726"); // 1
    OrdAlloc_5_set.insert("ClOrdID_t_1601679726");
    OrdAlloc_5.add_attribute("OrdID", "OrderID_t_2069580076"); // 1
    OrdAlloc_5_set.insert("OrderID_t_2069580076");
    OrdAlloc_5.add_attribute("OrdID2", "SecondaryOrderID_t_1999125897"); // 1
    OrdAlloc_5_set.insert("SecondaryOrderID_t_1999125897");
    OrdAlloc_5.add_attribute("ClOrdID2", "SecondaryClOrdID_t_736595567"); // 1
    OrdAlloc_5_set.insert("SecondaryClOrdID_t_736595567");
    OrdAlloc_5.add_attribute("ListID", "ListID_t_680902156"); // 1
    OrdAlloc_5_set.insert("ListID_t_680902156");
    OrdAlloc_5.add_attribute("Qty", "21148239.360000"); // 1
    OrdAlloc_5_set.insert("21148239.360000");
    OrdAlloc_5.add_attribute("AvgPx", "14430251.040000"); // 1
    OrdAlloc_5_set.insert("14430251.040000");
    OrdAlloc_5.add_attribute("BkngQty", "15875103.160000"); // 1
    OrdAlloc_5_set.insert("15875103.160000");
    all_values.push_back(OrdAlloc_5_set);
    all_compo_names.insert("OrdAlloc_5_set");

    {
      xml_element Pty_30{"Pty"};
      multiset<string> Pty_30_set;
      Pty_30.add_attribute("ID", "Nested2PartyID_t_968486927"); // 2
      Pty_30_set.insert("Nested2PartyID_t_968486927");
      Pty_30.add_attribute("Src", "2"); // 2
      Pty_30_set.insert("2");
      Pty_30.add_attribute("R", "2"); // 2
      Pty_30_set.insert("2");
      all_values.push_back(Pty_30_set);
      all_compo_names.insert("Pty_30_set");

      {
        xml_element Sub_30{"Sub"};
        multiset<string> Sub_30_set;
        Sub_30.add_attribute("ID", "Nested2PartySubID_t_68262909"); // 3
        Sub_30_set.insert("Nested2PartySubID_t_68262909");
        Sub_30.add_attribute("Typ", "10"); // 3
        Sub_30_set.insert("10");
        all_values.push_back(Sub_30_set);
        all_compo_names.insert("Sub_30_set");

        Pty_30.add_element(Sub_30);
      }
      OrdAlloc_5.add_element(Pty_30);
    }
    elt.add_element(OrdAlloc_5);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_1{"AllExc"};
    multiset<string> AllExc_1_set;
    AllExc_1.add_attribute("LastQty", "11285630.280000"); // 1
    AllExc_1_set.insert("11285630.280000");
    AllExc_1.add_attribute("ExecID", "ExecID_t_1140080772"); // 1
    AllExc_1_set.insert("ExecID_t_1140080772");
    AllExc_1.add_attribute("ExecID2", "SecondaryExecID_t_1385815926"); // 1
    AllExc_1_set.insert("SecondaryExecID_t_1385815926");
    AllExc_1.add_attribute("LastPx", "1858446.810000"); // 1
    AllExc_1_set.insert("1858446.810000");
    AllExc_1.add_attribute("LastParPx", "15498328.660000"); // 1
    AllExc_1_set.insert("15498328.660000");
    AllExc_1.add_attribute("LastCpcty", "2"); // 1
    AllExc_1_set.insert("2");
    AllExc_1.add_attribute("TrdID", "TradeID_t_450309980"); // 1
    AllExc_1_set.insert("TradeID_t_450309980");
    AllExc_1.add_attribute("FirmTrdID", "FirmTradeID_t_133792594"); // 1
    AllExc_1_set.insert("FirmTradeID_t_133792594");
    all_values.push_back(AllExc_1_set);
    all_compo_names.insert("AllExc_1_set");

    elt.add_element(AllExc_1);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_5{"Instrmt"};
    multiset<string> Instrmt_5_set;
    Instrmt_5.add_attribute("Sym", "Symbol_t_378238394"); // 1
    Instrmt_5_set.insert("Symbol_t_378238394");
    Instrmt_5.add_attribute("Sfx", "CD"); // 1
    Instrmt_5_set.insert("CD");
    Instrmt_5.add_attribute("ID", "SecurityID_t_1533737300"); // 1
    Instrmt_5_set.insert("SecurityID_t_1533737300");
    Instrmt_5.add_attribute("Src", "D"); // 1
    Instrmt_5_set.insert("D");
    Instrmt_5.add_attribute("Prod", "12"); // 1
    Instrmt_5_set.insert("12");
    Instrmt_5.add_attribute("ProdCmplx", "ProductComplex_t_200049425"); // 1
    Instrmt_5_set.insert("ProductComplex_t_200049425");
    Instrmt_5.add_attribute("SecGrp", "SecurityGroup_t_1299165689"); // 1
    Instrmt_5_set.insert("SecurityGroup_t_1299165689");
    Instrmt_5.add_attribute("CFI", "CFICode_t_1940999919"); // 1
    Instrmt_5_set.insert("CFICode_t_1940999919");
    Instrmt_5.add_attribute("SecTyp", "FADN"); // 1
    Instrmt_5_set.insert("FADN");
    Instrmt_5.add_attribute("SubTyp", "SecuritySubType_t_753361767"); // 1
    Instrmt_5_set.insert("SecuritySubType_t_753361767");
    Instrmt_5.add_attribute("MMY", "1863096348"); // 1
    Instrmt_5_set.insert("1863096348");
    Instrmt_5.add_attribute("MatDt", "MaturityDate_t_980083949"); // 1
    Instrmt_5_set.insert("MaturityDate_t_980083949");
    Instrmt_5.add_attribute("MatTm", "1489957335"); // 1
    Instrmt_5_set.insert("1489957335");
    Instrmt_5.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_396514856"); // 1
    Instrmt_5_set.insert("SettleOnOpenFlag_t_396514856");
    Instrmt_5.add_attribute("AsgnMeth", "947424237"); // 1
    Instrmt_5_set.insert("947424237");
    Instrmt_5.add_attribute("Status", "2"); // 1
    Instrmt_5_set.insert("2");
    Instrmt_5.add_attribute("CpnPmt", "CouponPaymentDate_t_1984025173"); // 1
    Instrmt_5_set.insert("CouponPaymentDate_t_1984025173");
    Instrmt_5.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_5_set.insert("MR");
    Instrmt_5.add_attribute("Snrty", "SD"); // 1
    Instrmt_5_set.insert("SD");
    Instrmt_5.add_attribute("NotlPctOut", "1312730.920000"); // 1
    Instrmt_5_set.insert("1312730.920000");
    Instrmt_5.add_attribute("OrigNotlPctOut", "19841740.740000"); // 1
    Instrmt_5_set.insert("19841740.740000");
    Instrmt_5.add_attribute("AttchPnt", "15990423.460000"); // 1
    Instrmt_5_set.insert("15990423.460000");
    Instrmt_5.add_attribute("DetchPnt", "17422356.200000"); // 1
    Instrmt_5_set.insert("17422356.200000");
    Instrmt_5.add_attribute("Issued", "IssueDate_t_965253455"); // 1
    Instrmt_5_set.insert("IssueDate_t_965253455");
    Instrmt_5.add_attribute("RepoCollSecTyp", "591639470"); // 1
    Instrmt_5_set.insert("591639470");
    Instrmt_5.add_attribute("RepoTrm", "980567898"); // 1
    Instrmt_5_set.insert("980567898");
    Instrmt_5.add_attribute("RepoRt", "11510981.360000"); // 1
    Instrmt_5_set.insert("11510981.360000");
    Instrmt_5.add_attribute("Fctr", "21414723.360000"); // 1
    Instrmt_5_set.insert("21414723.360000");
    Instrmt_5.add_attribute("CrdRtg", "CreditRating_t_1671021903"); // 1
    Instrmt_5_set.insert("CreditRating_t_1671021903");
    Instrmt_5.add_attribute("Rgstry", "InstrRegistry_t_1601408116"); // 1
    Instrmt_5_set.insert("InstrRegistry_t_1601408116");
    Instrmt_5.add_attribute("IssuCtry", "127781282"); // 1
    Instrmt_5_set.insert("127781282");
    Instrmt_5.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2049260297"); // 1
    Instrmt_5_set.insert("StateOrProvinceOfIssue_t_2049260297");
    Instrmt_5.add_attribute("Lcl", "LocaleOfIssue_t_1086592315"); // 1
    Instrmt_5_set.insert("LocaleOfIssue_t_1086592315");
    Instrmt_5.add_attribute("Redeem", "RedemptionDate_t_1661518582"); // 1
    Instrmt_5_set.insert("RedemptionDate_t_1661518582");
    Instrmt_5.add_attribute("StrkPx", "4855851.830000"); // 1
    Instrmt_5_set.insert("4855851.830000");
    Instrmt_5.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_5_set.insert("JPY");
    Instrmt_5.add_attribute("StrkMult", "17847508.720000"); // 1
    Instrmt_5_set.insert("17847508.720000");
    Instrmt_5.add_attribute("StrkValu", "21451029.440000"); // 1
    Instrmt_5_set.insert("21451029.440000");
    Instrmt_5.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_5_set.insert("3");
    Instrmt_5.add_attribute("StrkPxBndryPrcsn", "18607156.440000"); // 1
    Instrmt_5_set.insert("18607156.440000");
    Instrmt_5.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_5_set.insert("3");
    Instrmt_5.add_attribute("OptAt", "1880586327"); // 1
    Instrmt_5_set.insert("1880586327");
    Instrmt_5.add_attribute("Mult", "1097468.520000"); // 1
    Instrmt_5_set.insert("1097468.520000");
    Instrmt_5.add_attribute("MultTyp", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("MinPxIncr", "20937720.250000"); // 1
    Instrmt_5_set.insert("20937720.250000");
    Instrmt_5.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_390978116"); // 1
    Instrmt_5_set.insert("MinPriceIncrementAmount_t_390978116");
    Instrmt_5.add_attribute("UOM", "Alw"); // 1
    Instrmt_5_set.insert("Alw");
    Instrmt_5.add_attribute("UOMQty", "775614.700000"); // 1
    Instrmt_5_set.insert("775614.700000");
    Instrmt_5.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_5_set.insert("Bu");
    Instrmt_5.add_attribute("PxUOMQty", "7848213.550000"); // 1
    Instrmt_5_set.insert("7848213.550000");
    Instrmt_5.add_attribute("SettlMeth", "C"); // 1
    Instrmt_5_set.insert("C");
    Instrmt_5.add_attribute("ExerStyle", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("OptPayAmt", "OptPayoutAmount_t_652881340"); // 1
    Instrmt_5_set.insert("OptPayoutAmount_t_652881340");
    Instrmt_5.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_5_set.insert("INT");
    Instrmt_5.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_5_set.insert("CDS");
    Instrmt_5.add_attribute("ListMeth", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CapPx", "17979446.030000"); // 1
    Instrmt_5_set.insert("17979446.030000");
    Instrmt_5.add_attribute("FlrPx", "14982307.960000"); // 1
    Instrmt_5_set.insert("14982307.960000");
    Instrmt_5.add_attribute("PutCall", "0"); // 1
    Instrmt_5_set.insert("0");
    Instrmt_5.add_attribute("FlexInd", "true"); // 1
    Instrmt_5_set.insert("true");
    Instrmt_5.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_5_set.insert("true");
    Instrmt_5.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_5_set.insert("Yr");
    Instrmt_5.add_attribute("CpnRt", "9411562.940000"); // 1
    Instrmt_5_set.insert("9411562.940000");
    Instrmt_5.add_attribute("Exch", "SecurityExchange_t_726350090"); // 1
    Instrmt_5_set.insert("SecurityExchange_t_726350090");
    Instrmt_5.add_attribute("PosLmt", "201048652"); // 1
    Instrmt_5_set.insert("201048652");
    Instrmt_5.add_attribute("NTPosLmt", "938775590"); // 1
    Instrmt_5_set.insert("938775590");
    Instrmt_5.add_attribute("Issr", "Issuer_t_1568876151"); // 1
    Instrmt_5_set.insert("Issuer_t_1568876151");
    Instrmt_5.add_attribute("EncIssrLen", "591677644"); // 1
    Instrmt_5_set.insert("591677644");
    Instrmt_5.add_attribute("EncIssr", "EncodedIssuer_t_652007586"); // 1
    Instrmt_5_set.insert("EncodedIssuer_t_652007586");
    Instrmt_5.add_attribute("Desc", "SecurityDesc_t_1244002513"); // 1
    Instrmt_5_set.insert("SecurityDesc_t_1244002513");
    Instrmt_5.add_attribute("EncSecDescLen", "324780323"); // 1
    Instrmt_5_set.insert("324780323");
    Instrmt_5.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_761754439"); // 1
    Instrmt_5_set.insert("EncodedSecurityDesc_t_761754439");
    Instrmt_5.add_attribute("Pool", "Pool_t_1866553112"); // 1
    Instrmt_5_set.insert("Pool_t_1866553112");
    Instrmt_5.add_attribute("CSetMo", "843381793"); // 1
    Instrmt_5_set.insert("843381793");
    Instrmt_5.add_attribute("CPPgm", "1"); // 1
    Instrmt_5_set.insert("1");
    Instrmt_5.add_attribute("CPRegT", "CPRegType_t_110047581"); // 1
    Instrmt_5_set.insert("CPRegType_t_110047581");
    Instrmt_5.add_attribute("Dated", "DatedDate_t_29160803"); // 1
    Instrmt_5_set.insert("DatedDate_t_29160803");
    Instrmt_5.add_attribute("IntAcrl", "InterestAccrualDate_t_785604286"); // 1
    Instrmt_5_set.insert("InterestAccrualDate_t_785604286");
    all_values.push_back(Instrmt_5_set);
    all_compo_names.insert("Instrmt_5_set");

    {
      xml_element AID_5{"AID"};
      multiset<string> AID_5_set;
      AID_5.add_attribute("AltID", "SecurityAltID_t_337716124"); // 2
      AID_5_set.insert("SecurityAltID_t_337716124");
      AID_5.add_attribute("AltIDSrc", "1"); // 2
      AID_5_set.insert("1");
      all_values.push_back(AID_5_set);
      all_compo_names.insert("AID_5_set");

      Instrmt_5.add_element(AID_5);
    }
    {
      xml_element SecXML_5{"SecXML"};
      multiset<string> SecXML_5_set;
      SecXML_5.add_attribute("Schema", "SecurityXMLSchema_t_457917728"); // 2
      SecXML_5_set.insert("SecurityXMLSchema_t_457917728");
      all_values.push_back(SecXML_5_set);
      all_compo_names.insert("SecXML_5_set");

      Instrmt_5.add_element(SecXML_5);
    }
    {
      xml_element Evnt_5{"Evnt"};
      multiset<string> Evnt_5_set;
      Evnt_5.add_attribute("EventTyp", "3"); // 2
      Evnt_5_set.insert("3");
      Evnt_5.add_attribute("Dt", "EventDate_t_42959336"); // 2
      Evnt_5_set.insert("EventDate_t_42959336");
      Evnt_5.add_attribute("Tm", "EventTime_t_1110799068"); // 2
      Evnt_5_set.insert("EventTime_t_1110799068");
      Evnt_5.add_attribute("Px", "17271746.080000"); // 2
      Evnt_5_set.insert("17271746.080000");
      Evnt_5.add_attribute("Txt", "EventText_t_1413408849"); // 2
      Evnt_5_set.insert("EventText_t_1413408849");
      all_values.push_back(Evnt_5_set);
      all_compo_names.insert("Evnt_5_set");

      Instrmt_5.add_element(Evnt_5);
    }
    {
      xml_element Pty_31{"Pty"};
      multiset<string> Pty_31_set;
      Pty_31.add_attribute("ID", "InstrumentPartyID_t_1287218663"); // 2
      Pty_31_set.insert("InstrumentPartyID_t_1287218663");
      Pty_31.add_attribute("Src", "2"); // 2
      Pty_31_set.insert("2");
      Pty_31.add_attribute("R", "26"); // 2
      Pty_31_set.insert("26");
      all_values.push_back(Pty_31_set);
      all_compo_names.insert("Pty_31_set");

      {
        xml_element Sub_31{"Sub"};
        multiset<string> Sub_31_set;
        Sub_31.add_attribute("ID", "InstrumentPartySubID_t_1365414907"); // 3
        Sub_31_set.insert("InstrumentPartySubID_t_1365414907");
        Sub_31.add_attribute("Typ", "27"); // 3
        Sub_31_set.insert("27");
        all_values.push_back(Sub_31_set);
        all_compo_names.insert("Sub_31_set");

        Pty_31.add_element(Sub_31);
      }
      Instrmt_5.add_element(Pty_31);
    }
    {
      xml_element CmplxEvnt_5{"CmplxEvnt"};
      multiset<string> CmplxEvnt_5_set;
      CmplxEvnt_5.add_attribute("Typ", "1"); // 2
      CmplxEvnt_5_set.insert("1");
      CmplxEvnt_5.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1929196335"); // 2
      CmplxEvnt_5_set.insert("ComplexOptPayoutAmount_t_1929196335");
      CmplxEvnt_5.add_attribute("Px", "9083614.800000"); // 2
      CmplxEvnt_5_set.insert("9083614.800000");
      CmplxEvnt_5.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_5_set.insert("1");
      CmplxEvnt_5.add_attribute("PxBndryPrcsn", "21302449.870000"); // 2
      CmplxEvnt_5_set.insert("21302449.870000");
      CmplxEvnt_5.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_5_set.insert("3");
      CmplxEvnt_5.add_attribute("Cond", "2"); // 2
      CmplxEvnt_5_set.insert("2");
      all_values.push_back(CmplxEvnt_5_set);
      all_compo_names.insert("CmplxEvnt_5_set");

      {
        xml_element EvntDts_5{"EvntDts"};
        multiset<string> EvntDts_5_set;
        EvntDts_5.add_attribute("StartDt", "ComplexEventStartDate_t_574438983"); // 3
        EvntDts_5_set.insert("ComplexEventStartDate_t_574438983");
        EvntDts_5.add_attribute("EndDt", "ComplexEventEndDate_t_351661009"); // 3
        EvntDts_5_set.insert("ComplexEventEndDate_t_351661009");
        all_values.push_back(EvntDts_5_set);
        all_compo_names.insert("EvntDts_5_set");

        {
          xml_element EvntTms_5{"EvntTms"};
          multiset<string> EvntTms_5_set;
          EvntTms_5.add_attribute("StartTm", "1020683186"); // 4
          EvntTms_5_set.insert("1020683186");
          EvntTms_5.add_attribute("EndTm", "899219306"); // 4
          EvntTms_5_set.insert("899219306");
          all_values.push_back(EvntTms_5_set);
          all_compo_names.insert("EvntTms_5_set");

          EvntDts_5.add_element(EvntTms_5);
        }
        CmplxEvnt_5.add_element(EvntDts_5);
      }
      Instrmt_5.add_element(CmplxEvnt_5);
    }
    elt.add_element(Instrmt_5);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_1{"InstrmtExt"};
    multiset<string> InstrmtExt_1_set;
    InstrmtExt_1.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_1_set.insert("1");
    InstrmtExt_1.add_attribute("PctAtRisk", "7397526.510000"); // 1
    InstrmtExt_1_set.insert("7397526.510000");
    all_values.push_back(InstrmtExt_1_set);
    all_compo_names.insert("InstrmtExt_1_set");

    {
      xml_element Attrb_1{"Attrb"};
      multiset<string> Attrb_1_set;
      Attrb_1.add_attribute("Typ", "18"); // 2
      Attrb_1_set.insert("18");
      Attrb_1.add_attribute("Val", "InstrAttribValue_t_1821458264"); // 2
      Attrb_1_set.insert("InstrAttribValue_t_1821458264");
      all_values.push_back(Attrb_1_set);
      all_compo_names.insert("Attrb_1_set");

      InstrmtExt_1.add_element(Attrb_1);
    }
    elt.add_element(InstrmtExt_1);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_1{"FinDetls"};
    multiset<string> FinDetls_1_set;
    FinDetls_1.add_attribute("AgmtDesc", "AgreementDesc_t_849800232"); // 1
    FinDetls_1_set.insert("AgreementDesc_t_849800232");
    FinDetls_1.add_attribute("AgmtID", "AgreementID_t_1771761902"); // 1
    FinDetls_1_set.insert("AgreementID_t_1771761902");
    FinDetls_1.add_attribute("AgmtDt", "AgreementDate_t_459578903"); // 1
    FinDetls_1_set.insert("AgreementDate_t_459578903");
    FinDetls_1.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_1_set.insert("EUR");
    FinDetls_1.add_attribute("TrmTyp", "4"); // 1
    FinDetls_1_set.insert("4");
    FinDetls_1.add_attribute("StartDt", "StartDate_t_570670830"); // 1
    FinDetls_1_set.insert("StartDate_t_570670830");
    FinDetls_1.add_attribute("EndDt", "EndDate_t_481219749"); // 1
    FinDetls_1_set.insert("EndDate_t_481219749");
    FinDetls_1.add_attribute("DlvryTyp", "0"); // 1
    FinDetls_1_set.insert("0");
    FinDetls_1.add_attribute("MgnRatio", "1503617.900000"); // 1
    FinDetls_1_set.insert("1503617.900000");
    all_values.push_back(FinDetls_1_set);
    all_compo_names.insert("FinDetls_1_set");

    elt.add_element(FinDetls_1);
  } // end FinDetls
  { // Undly
    xml_element Undly_3{"Undly"};
    multiset<string> Undly_3_set;
    Undly_3.add_attribute("Sym", "UnderlyingSymbol_t_1168030715"); // 1
    Undly_3_set.insert("UnderlyingSymbol_t_1168030715");
    Undly_3.add_attribute("Sfx", "CD"); // 1
    Undly_3_set.insert("CD");
    Undly_3.add_attribute("ID", "UnderlyingSecurityID_t_511300948"); // 1
    Undly_3_set.insert("UnderlyingSecurityID_t_511300948");
    Undly_3.add_attribute("Src", "4"); // 1
    Undly_3_set.insert("4");
    Undly_3.add_attribute("Prod", "9"); // 1
    Undly_3_set.insert("9");
    Undly_3.add_attribute("CFI", "UnderlyingCFICode_t_140239028"); // 1
    Undly_3_set.insert("UnderlyingCFICode_t_140239028");
    Undly_3.add_attribute("SecTyp", "TPRN"); // 1
    Undly_3_set.insert("TPRN");
    Undly_3.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_256080371"); // 1
    Undly_3_set.insert("UnderlyingSecuritySubType_t_256080371");
    Undly_3.add_attribute("MMY", "495527198"); // 1
    Undly_3_set.insert("495527198");
    Undly_3.add_attribute("Mat", "UnderlyingMaturityDate_t_150436001"); // 1
    Undly_3_set.insert("UnderlyingMaturityDate_t_150436001");
    Undly_3.add_attribute("MatTm", "2103217442"); // 1
    Undly_3_set.insert("2103217442");
    Undly_3.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_272207872"); // 1
    Undly_3_set.insert("UnderlyingCouponPaymentDate_t_272207872");
    Undly_3.add_attribute("RestrctTyp", "FR"); // 1
    Undly_3_set.insert("FR");
    Undly_3.add_attribute("Snrty", "SR"); // 1
    Undly_3_set.insert("SR");
    Undly_3.add_attribute("NotlPctOut", "12928910.580000"); // 1
    Undly_3_set.insert("12928910.580000");
    Undly_3.add_attribute("OrigNotlPctOut", "16240942.900000"); // 1
    Undly_3_set.insert("16240942.900000");
    Undly_3.add_attribute("AttchPnt", "14208102.510000"); // 1
    Undly_3_set.insert("14208102.510000");
    Undly_3.add_attribute("DetchPnt", "20326437.090000"); // 1
    Undly_3_set.insert("20326437.090000");
    Undly_3.add_attribute("Issued", "UnderlyingIssueDate_t_1219211741"); // 1
    Undly_3_set.insert("UnderlyingIssueDate_t_1219211741");
    Undly_3.add_attribute("RepoCollSecTyp", "1094784867"); // 1
    Undly_3_set.insert("1094784867");
    Undly_3.add_attribute("RepoTrm", "734960293"); // 1
    Undly_3_set.insert("734960293");
    Undly_3.add_attribute("RepoRt", "8434899.960000"); // 1
    Undly_3_set.insert("8434899.960000");
    Undly_3.add_attribute("Fctr", "15543637.700000"); // 1
    Undly_3_set.insert("15543637.700000");
    Undly_3.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1922476649"); // 1
    Undly_3_set.insert("UnderlyingCreditRating_t_1922476649");
    Undly_3.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1281750409"); // 1
    Undly_3_set.insert("UnderlyingInstrRegistry_t_1281750409");
    Undly_3.add_attribute("Ctry", "324376754"); // 1
    Undly_3_set.insert("324376754");
    Undly_3.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_345663831"); // 1
    Undly_3_set.insert("UnderlyingStateOrProvinceOfIssue_t_345663831");
    Undly_3.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1762970158"); // 1
    Undly_3_set.insert("UnderlyingLocaleOfIssue_t_1762970158");
    Undly_3.add_attribute("Redeem", "UnderlyingRedemptionDate_t_205188806"); // 1
    Undly_3_set.insert("UnderlyingRedemptionDate_t_205188806");
    Undly_3.add_attribute("StrkPx", "4960256.220000"); // 1
    Undly_3_set.insert("4960256.220000");
    Undly_3.add_attribute("StrkCcy", "EUR"); // 1
    Undly_3_set.insert("EUR");
    Undly_3.add_attribute("OptA", "2024022976"); // 1
    Undly_3_set.insert("2024022976");
    Undly_3.add_attribute("Mult", "20214160.560000"); // 1
    Undly_3_set.insert("20214160.560000");
    Undly_3.add_attribute("MultTyp", "0"); // 1
    Undly_3_set.insert("0");
    Undly_3.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_3_set.insert("2");
    Undly_3.add_attribute("UOM", "MMbbl"); // 1
    Undly_3_set.insert("MMbbl");
    Undly_3.add_attribute("UOMQty", "19268561.580000"); // 1
    Undly_3_set.insert("19268561.580000");
    Undly_3.add_attribute("PxUOM", "t"); // 1
    Undly_3_set.insert("t");
    Undly_3.add_attribute("PxUOMQty", "5096986.350000"); // 1
    Undly_3_set.insert("5096986.350000");
    Undly_3.add_attribute("TmUnit", "Mo"); // 1
    Undly_3_set.insert("Mo");
    Undly_3.add_attribute("ExerStyle", "0"); // 1
    Undly_3_set.insert("0");
    Undly_3.add_attribute("CpnRt", "7819065.070000"); // 1
    Undly_3_set.insert("7819065.070000");
    Undly_3.add_attribute("Exch", "UnderlyingSecurityExchange_t_654683495"); // 1
    Undly_3_set.insert("UnderlyingSecurityExchange_t_654683495");
    Undly_3.add_attribute("Issr", "UnderlyingIssuer_t_1890950836"); // 1
    Undly_3_set.insert("UnderlyingIssuer_t_1890950836");
    Undly_3.add_attribute("EncUndIssrLen", "2074797565"); // 1
    Undly_3_set.insert("2074797565");
    Undly_3.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_131294137"); // 1
    Undly_3_set.insert("EncodedUnderlyingIssuer_t_131294137");
    Undly_3.add_attribute("Desc", "UnderlyingSecurityDesc_t_1164277439"); // 1
    Undly_3_set.insert("UnderlyingSecurityDesc_t_1164277439");
    Undly_3.add_attribute("EncUndSecDescLen", "1959957627"); // 1
    Undly_3_set.insert("1959957627");
    Undly_3.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1350505879"); // 1
    Undly_3_set.insert("EncodedUnderlyingSecurityDesc_t_1350505879");
    Undly_3.add_attribute("CPPgm", "UnderlyingCPProgram_t_111578658"); // 1
    Undly_3_set.insert("UnderlyingCPProgram_t_111578658");
    Undly_3.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_547434272"); // 1
    Undly_3_set.insert("UnderlyingCPRegType_t_547434272");
    Undly_3.add_attribute("AllocPct", "465122.270000"); // 1
    Undly_3_set.insert("465122.270000");
    Undly_3.add_attribute("Ccy", "USD"); // 1
    Undly_3_set.insert("USD");
    Undly_3.add_attribute("Qty", "13282626.360000"); // 1
    Undly_3_set.insert("13282626.360000");
    Undly_3.add_attribute("SettlTyp", "5"); // 1
    Undly_3_set.insert("5");
    Undly_3.add_attribute("CashAmt", "UnderlyingCashAmount_t_668091105"); // 1
    Undly_3_set.insert("UnderlyingCashAmount_t_668091105");
    Undly_3.add_attribute("CashTyp", "FIXED"); // 1
    Undly_3_set.insert("FIXED");
    Undly_3.add_attribute("Px", "480243.410000"); // 1
    Undly_3_set.insert("480243.410000");
    Undly_3.add_attribute("DirtPx", "11641167.270000"); // 1
    Undly_3_set.insert("11641167.270000");
    Undly_3.add_attribute("EndPx", "3063806.060000"); // 1
    Undly_3_set.insert("3063806.060000");
    Undly_3.add_attribute("StartVal", "UnderlyingStartValue_t_1421243862"); // 1
    Undly_3_set.insert("UnderlyingStartValue_t_1421243862");
    Undly_3.add_attribute("CurVal", "UnderlyingCurrentValue_t_1040656055"); // 1
    Undly_3_set.insert("UnderlyingCurrentValue_t_1040656055");
    Undly_3.add_attribute("EndVal", "UnderlyingEndValue_t_180313015"); // 1
    Undly_3_set.insert("UnderlyingEndValue_t_180313015");
    Undly_3.add_attribute("AdjQty", "10329417.110000"); // 1
    Undly_3_set.insert("10329417.110000");
    Undly_3.add_attribute("FxRate", "2649142.750000"); // 1
    Undly_3_set.insert("2649142.750000");
    Undly_3.add_attribute("FxRateCalc", "D"); // 1
    Undly_3_set.insert("D");
    Undly_3.add_attribute("CapValu", "UnderlyingCapValue_t_812314221"); // 1
    Undly_3_set.insert("UnderlyingCapValue_t_812314221");
    Undly_3.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1892736514"); // 1
    Undly_3_set.insert("UnderlyingSettlMethod_t_1892736514");
    Undly_3.add_attribute("PutCall", "704183086"); // 1
    Undly_3_set.insert("704183086");
    all_values.push_back(Undly_3_set);
    all_compo_names.insert("Undly_3_set");

    {
      xml_element UndAID_3{"UndAID"};
      multiset<string> UndAID_3_set;
      UndAID_3.add_attribute("AltID", "UnderlyingSecurityAltID_t_742122733"); // 2
      UndAID_3_set.insert("UnderlyingSecurityAltID_t_742122733");
      UndAID_3.add_attribute("AltIDSrc", "C"); // 2
      UndAID_3_set.insert("C");
      all_values.push_back(UndAID_3_set);
      all_compo_names.insert("UndAID_3_set");

      Undly_3.add_element(UndAID_3);
    }
    {
      xml_element Stip_4{"Stip"};
      multiset<string> Stip_4_set;
      Stip_4.add_attribute("Typ", "MAXORDQTY"); // 2
      Stip_4_set.insert("MAXORDQTY");
      Stip_4.add_attribute("Val", "UnderlyingStipValue_t_1396806228"); // 2
      Stip_4_set.insert("UnderlyingStipValue_t_1396806228");
      all_values.push_back(Stip_4_set);
      all_compo_names.insert("Stip_4_set");

      Undly_3.add_element(Stip_4);
    }
    {
      xml_element Pty_32{"Pty"};
      multiset<string> Pty_32_set;
      Pty_32.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1072276087"); // 2
      Pty_32_set.insert("UnderlyingInstrumentPartyID_t_1072276087");
      Pty_32.add_attribute("Src", "6"); // 2
      Pty_32_set.insert("6");
      Pty_32.add_attribute("R", "11"); // 2
      Pty_32_set.insert("11");
      all_values.push_back(Pty_32_set);
      all_compo_names.insert("Pty_32_set");

      {
        xml_element Sub_32{"Sub"};
        multiset<string> Sub_32_set;
        Sub_32.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_89069878"); // 3
        Sub_32_set.insert("UnderlyingInstrumentPartySubID_t_89069878");
        Sub_32.add_attribute("Typ", "8"); // 3
        Sub_32_set.insert("8");
        all_values.push_back(Sub_32_set);
        all_compo_names.insert("Sub_32_set");

        Pty_32.add_element(Sub_32);
      }
      Undly_3.add_element(Pty_32);
    }
    elt.add_element(Undly_3);
  } // end Undly
  { // Leg
    xml_element Leg_5{"Leg"};
    multiset<string> Leg_5_set;
    Leg_5.add_attribute("Sym", "LegSymbol_t_200648536"); // 1
    Leg_5_set.insert("LegSymbol_t_200648536");
    Leg_5.add_attribute("Sfx", "CD"); // 1
    Leg_5_set.insert("CD");
    Leg_5.add_attribute("ID", "LegSecurityID_t_777634824"); // 1
    Leg_5_set.insert("LegSecurityID_t_777634824");
    Leg_5.add_attribute("Src", "L"); // 1
    Leg_5_set.insert("L");
    Leg_5.add_attribute("Prod", "10"); // 1
    Leg_5_set.insert("10");
    Leg_5.add_attribute("CFI", "LegCFICode_t_2105897460"); // 1
    Leg_5_set.insert("LegCFICode_t_2105897460");
    Leg_5.add_attribute("SecTyp", "FADN"); // 1
    Leg_5_set.insert("FADN");
    Leg_5.add_attribute("SecSubTyp", "LegSecuritySubType_t_616346494"); // 1
    Leg_5_set.insert("LegSecuritySubType_t_616346494");
    Leg_5.add_attribute("MMY", "902162958"); // 1
    Leg_5_set.insert("902162958");
    Leg_5.add_attribute("Mat", "LegMaturityDate_t_1757450841"); // 1
    Leg_5_set.insert("LegMaturityDate_t_1757450841");
    Leg_5.add_attribute("MatTm", "1780463221"); // 1
    Leg_5_set.insert("1780463221");
    Leg_5.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1208543564"); // 1
    Leg_5_set.insert("LegCouponPaymentDate_t_1208543564");
    Leg_5.add_attribute("Issued", "LegIssueDate_t_1031211056"); // 1
    Leg_5_set.insert("LegIssueDate_t_1031211056");
    Leg_5.add_attribute("RepoCollSecTyp", "673635629"); // 1
    Leg_5_set.insert("673635629");
    Leg_5.add_attribute("RepoTrm", "1388856579"); // 1
    Leg_5_set.insert("1388856579");
    Leg_5.add_attribute("RepoRt", "20641527.670000"); // 1
    Leg_5_set.insert("20641527.670000");
    Leg_5.add_attribute("Fctr", "9385499.040000"); // 1
    Leg_5_set.insert("9385499.040000");
    Leg_5.add_attribute("CrdRtg", "LegCreditRating_t_1583341031"); // 1
    Leg_5_set.insert("LegCreditRating_t_1583341031");
    Leg_5.add_attribute("Rgstry", "LegInstrRegistry_t_728983340"); // 1
    Leg_5_set.insert("LegInstrRegistry_t_728983340");
    Leg_5.add_attribute("Ctry", "683802770"); // 1
    Leg_5_set.insert("683802770");
    Leg_5.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_140040469"); // 1
    Leg_5_set.insert("LegStateOrProvinceOfIssue_t_140040469");
    Leg_5.add_attribute("Lcl", "LegLocaleOfIssue_t_1471106073"); // 1
    Leg_5_set.insert("LegLocaleOfIssue_t_1471106073");
    Leg_5.add_attribute("Redeem", "LegRedemptionDate_t_2012611669"); // 1
    Leg_5_set.insert("LegRedemptionDate_t_2012611669");
    Leg_5.add_attribute("Strk", "16261300.630000"); // 1
    Leg_5_set.insert("16261300.630000");
    Leg_5.add_attribute("StrkCcy", "USD"); // 1
    Leg_5_set.insert("USD");
    Leg_5.add_attribute("OptA", "892049926"); // 1
    Leg_5_set.insert("892049926");
    Leg_5.add_attribute("Cmult", "1010453.720000"); // 1
    Leg_5_set.insert("1010453.720000");
    Leg_5.add_attribute("MultTyp", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("UOM", "USD"); // 1
    Leg_5_set.insert("USD");
    Leg_5.add_attribute("UOMQty", "12271225.220000"); // 1
    Leg_5_set.insert("12271225.220000");
    Leg_5.add_attribute("PxUOM", "Bcf"); // 1
    Leg_5_set.insert("Bcf");
    Leg_5.add_attribute("PxUOMQty", "16098027.930000"); // 1
    Leg_5_set.insert("16098027.930000");
    Leg_5.add_attribute("TmUnit", "D"); // 1
    Leg_5_set.insert("D");
    Leg_5.add_attribute("ExerStyle", "2"); // 1
    Leg_5_set.insert("2");
    Leg_5.add_attribute("CpnRt", "15682166.050000"); // 1
    Leg_5_set.insert("15682166.050000");
    Leg_5.add_attribute("Exch", "LegSecurityExchange_t_508172692"); // 1
    Leg_5_set.insert("LegSecurityExchange_t_508172692");
    Leg_5.add_attribute("Issr", "LegIssuer_t_160873765"); // 1
    Leg_5_set.insert("LegIssuer_t_160873765");
    Leg_5.add_attribute("EncLegIssrLen", "322895915"); // 1
    Leg_5_set.insert("322895915");
    Leg_5.add_attribute("EncLegIssr", "EncodedLegIssuer_t_118139886"); // 1
    Leg_5_set.insert("EncodedLegIssuer_t_118139886");
    Leg_5.add_attribute("Desc", "LegSecurityDesc_t_1941336986"); // 1
    Leg_5_set.insert("LegSecurityDesc_t_1941336986");
    Leg_5.add_attribute("EncLegSecDescLen", "1531439479"); // 1
    Leg_5_set.insert("1531439479");
    Leg_5.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1149350942"); // 1
    Leg_5_set.insert("EncodedLegSecurityDesc_t_1149350942");
    Leg_5.add_attribute("RatioQty", "4674889.670000"); // 1
    Leg_5_set.insert("4674889.670000");
    Leg_5.add_attribute("Side", "C"); // 1
    Leg_5_set.insert("C");
    Leg_5.add_attribute("Ccy", "CAN"); // 1
    Leg_5_set.insert("CAN");
    Leg_5.add_attribute("Pool", "LegPool_t_208669794"); // 1
    Leg_5_set.insert("LegPool_t_208669794");
    Leg_5.add_attribute("Dated", "LegDatedDate_t_1795003401"); // 1
    Leg_5_set.insert("LegDatedDate_t_1795003401");
    Leg_5.add_attribute("CSetMo", "2089841641"); // 1
    Leg_5_set.insert("2089841641");
    Leg_5.add_attribute("IntAcrl", "LegInterestAccrualDate_t_348710263"); // 1
    Leg_5_set.insert("LegInterestAccrualDate_t_348710263");
    Leg_5.add_attribute("PutCall", "1118625827"); // 1
    Leg_5_set.insert("1118625827");
    Leg_5.add_attribute("LegOptionRatio", "19549696.620000"); // 1
    Leg_5_set.insert("19549696.620000");
    Leg_5.add_attribute("Px", "19748403.260000"); // 1
    Leg_5_set.insert("19748403.260000");
    all_values.push_back(Leg_5_set);
    all_compo_names.insert("Leg_5_set");

    {
      xml_element LegAID_5{"LegAID"};
      multiset<string> LegAID_5_set;
      LegAID_5.add_attribute("SecAltID", "LegSecurityAltID_t_1839054481"); // 2
      LegAID_5_set.insert("LegSecurityAltID_t_1839054481");
      LegAID_5.add_attribute("SecAltIDSrc", "K"); // 2
      LegAID_5_set.insert("K");
      all_values.push_back(LegAID_5_set);
      all_compo_names.insert("LegAID_5_set");

      Leg_5.add_element(LegAID_5);
    }
    elt.add_element(Leg_5);
  } // end Leg
  { // Leg
    xml_element Leg_6{"Leg"};
    multiset<string> Leg_6_set;
    Leg_6.add_attribute("Sym", "LegSymbol_t_719406604"); // 1
    Leg_6_set.insert("LegSymbol_t_719406604");
    Leg_6.add_attribute("Sfx", "WI"); // 1
    Leg_6_set.insert("WI");
    Leg_6.add_attribute("ID", "LegSecurityID_t_1771364108"); // 1
    Leg_6_set.insert("LegSecurityID_t_1771364108");
    Leg_6.add_attribute("Src", "3"); // 1
    Leg_6_set.insert("3");
    Leg_6.add_attribute("Prod", "10"); // 1
    Leg_6_set.insert("10");
    Leg_6.add_attribute("CFI", "LegCFICode_t_851002983"); // 1
    Leg_6_set.insert("LegCFICode_t_851002983");
    Leg_6.add_attribute("SecTyp", "CAN"); // 1
    Leg_6_set.insert("CAN");
    Leg_6.add_attribute("SecSubTyp", "LegSecuritySubType_t_87103319"); // 1
    Leg_6_set.insert("LegSecuritySubType_t_87103319");
    Leg_6.add_attribute("MMY", "1797232823"); // 1
    Leg_6_set.insert("1797232823");
    Leg_6.add_attribute("Mat", "LegMaturityDate_t_1978133174"); // 1
    Leg_6_set.insert("LegMaturityDate_t_1978133174");
    Leg_6.add_attribute("MatTm", "1655319924"); // 1
    Leg_6_set.insert("1655319924");
    Leg_6.add_attribute("CpnPmt", "LegCouponPaymentDate_t_157921867"); // 1
    Leg_6_set.insert("LegCouponPaymentDate_t_157921867");
    Leg_6.add_attribute("Issued", "LegIssueDate_t_2139006939"); // 1
    Leg_6_set.insert("LegIssueDate_t_2139006939");
    Leg_6.add_attribute("RepoCollSecTyp", "1978215839"); // 1
    Leg_6_set.insert("1978215839");
    Leg_6.add_attribute("RepoTrm", "276061753"); // 1
    Leg_6_set.insert("276061753");
    Leg_6.add_attribute("RepoRt", "19328602.770000"); // 1
    Leg_6_set.insert("19328602.770000");
    Leg_6.add_attribute("Fctr", "13621716.700000"); // 1
    Leg_6_set.insert("13621716.700000");
    Leg_6.add_attribute("CrdRtg", "LegCreditRating_t_1425412695"); // 1
    Leg_6_set.insert("LegCreditRating_t_1425412695");
    Leg_6.add_attribute("Rgstry", "LegInstrRegistry_t_252865597"); // 1
    Leg_6_set.insert("LegInstrRegistry_t_252865597");
    Leg_6.add_attribute("Ctry", "2134984081"); // 1
    Leg_6_set.insert("2134984081");
    Leg_6.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_343949108"); // 1
    Leg_6_set.insert("LegStateOrProvinceOfIssue_t_343949108");
    Leg_6.add_attribute("Lcl", "LegLocaleOfIssue_t_1658904468"); // 1
    Leg_6_set.insert("LegLocaleOfIssue_t_1658904468");
    Leg_6.add_attribute("Redeem", "LegRedemptionDate_t_196170227"); // 1
    Leg_6_set.insert("LegRedemptionDate_t_196170227");
    Leg_6.add_attribute("Strk", "21389525.100000"); // 1
    Leg_6_set.insert("21389525.100000");
    Leg_6.add_attribute("StrkCcy", "EUR"); // 1
    Leg_6_set.insert("EUR");
    Leg_6.add_attribute("OptA", "1110094689"); // 1
    Leg_6_set.insert("1110094689");
    Leg_6.add_attribute("Cmult", "14087484.760000"); // 1
    Leg_6_set.insert("14087484.760000");
    Leg_6.add_attribute("MultTyp", "1"); // 1
    Leg_6_set.insert("1");
    Leg_6.add_attribute("FlowSchedTyp", "2"); // 1
    Leg_6_set.insert("2");
    Leg_6.add_attribute("UOM", "Bcf"); // 1
    Leg_6_set.insert("Bcf");
    Leg_6.add_attribute("UOMQty", "10916437.740000"); // 1
    Leg_6_set.insert("10916437.740000");
    Leg_6.add_attribute("PxUOM", "MWh"); // 1
    Leg_6_set.insert("MWh");
    Leg_6.add_attribute("PxUOMQty", "17775190.590000"); // 1
    Leg_6_set.insert("17775190.590000");
    Leg_6.add_attribute("TmUnit", "Mo"); // 1
    Leg_6_set.insert("Mo");
    Leg_6.add_attribute("ExerStyle", "1"); // 1
    Leg_6_set.insert("1");
    Leg_6.add_attribute("CpnRt", "4810383.940000"); // 1
    Leg_6_set.insert("4810383.940000");
    Leg_6.add_attribute("Exch", "LegSecurityExchange_t_2067616401"); // 1
    Leg_6_set.insert("LegSecurityExchange_t_2067616401");
    Leg_6.add_attribute("Issr", "LegIssuer_t_1306169220"); // 1
    Leg_6_set.insert("LegIssuer_t_1306169220");
    Leg_6.add_attribute("EncLegIssrLen", "130787569"); // 1
    Leg_6_set.insert("130787569");
    Leg_6.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1898265927"); // 1
    Leg_6_set.insert("EncodedLegIssuer_t_1898265927");
    Leg_6.add_attribute("Desc", "LegSecurityDesc_t_814005496"); // 1
    Leg_6_set.insert("LegSecurityDesc_t_814005496");
    Leg_6.add_attribute("EncLegSecDescLen", "288709437"); // 1
    Leg_6_set.insert("288709437");
    Leg_6.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1889789218"); // 1
    Leg_6_set.insert("EncodedLegSecurityDesc_t_1889789218");
    Leg_6.add_attribute("RatioQty", "6447376.870000"); // 1
    Leg_6_set.insert("6447376.870000");
    Leg_6.add_attribute("Side", "7"); // 1
    Leg_6_set.insert("7");
    Leg_6.add_attribute("Ccy", "CAN"); // 1
    Leg_6_set.insert("CAN");
    Leg_6.add_attribute("Pool", "LegPool_t_1990183886"); // 1
    Leg_6_set.insert("LegPool_t_1990183886");
    Leg_6.add_attribute("Dated", "LegDatedDate_t_1928031445"); // 1
    Leg_6_set.insert("LegDatedDate_t_1928031445");
    Leg_6.add_attribute("CSetMo", "1994409791"); // 1
    Leg_6_set.insert("1994409791");
    Leg_6.add_attribute("IntAcrl", "LegInterestAccrualDate_t_186649346"); // 1
    Leg_6_set.insert("LegInterestAccrualDate_t_186649346");
    Leg_6.add_attribute("PutCall", "1439452265"); // 1
    Leg_6_set.insert("1439452265");
    Leg_6.add_attribute("LegOptionRatio", "430963.700000"); // 1
    Leg_6_set.insert("430963.700000");
    Leg_6.add_attribute("Px", "1781182.080000"); // 1
    Leg_6_set.insert("1781182.080000");
    all_values.push_back(Leg_6_set);
    all_compo_names.insert("Leg_6_set");

    {
      xml_element LegAID_6{"LegAID"};
      multiset<string> LegAID_6_set;
      LegAID_6.add_attribute("SecAltID", "LegSecurityAltID_t_893231079"); // 2
      LegAID_6_set.insert("LegSecurityAltID_t_893231079");
      LegAID_6.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_6_set.insert("M");
      all_values.push_back(LegAID_6_set);
      all_compo_names.insert("LegAID_6_set");

      Leg_6.add_element(LegAID_6);
    }
    elt.add_element(Leg_6);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_1{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_1_set;
    SprdBnchmkCurve_1.add_attribute("Spread", "12882128.970000"); // 1
    SprdBnchmkCurve_1_set.insert("12882128.970000");
    SprdBnchmkCurve_1.add_attribute("Ccy", "CAN"); // 1
    SprdBnchmkCurve_1_set.insert("CAN");
    SprdBnchmkCurve_1.add_attribute("Name", "Treasury"); // 1
    SprdBnchmkCurve_1_set.insert("Treasury");
    SprdBnchmkCurve_1.add_attribute("Point", "BenchmarkCurvePoint_t_160650859"); // 1
    SprdBnchmkCurve_1_set.insert("BenchmarkCurvePoint_t_160650859");
    SprdBnchmkCurve_1.add_attribute("Px", "20518578.050000"); // 1
    SprdBnchmkCurve_1_set.insert("20518578.050000");
    SprdBnchmkCurve_1.add_attribute("PxTyp", "1"); // 1
    SprdBnchmkCurve_1_set.insert("1");
    SprdBnchmkCurve_1.add_attribute("SecID", "BenchmarkSecurityID_t_1938169918"); // 1
    SprdBnchmkCurve_1_set.insert("BenchmarkSecurityID_t_1938169918");
    SprdBnchmkCurve_1.add_attribute("SecIDSrc", "A"); // 1
    SprdBnchmkCurve_1_set.insert("A");
    all_values.push_back(SprdBnchmkCurve_1_set);
    all_compo_names.insert("SprdBnchmkCurve_1_set");

    elt.add_element(SprdBnchmkCurve_1);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_33{"Pty"};
    multiset<string> Pty_33_set;
    Pty_33.add_attribute("ID", "PartyID_t_271724665"); // 1
    Pty_33_set.insert("PartyID_t_271724665");
    Pty_33.add_attribute("Src", "I"); // 1
    Pty_33_set.insert("I");
    Pty_33.add_attribute("R", "31"); // 1
    Pty_33_set.insert("31");
    all_values.push_back(Pty_33_set);
    all_compo_names.insert("Pty_33_set");

    {
      xml_element Sub_33{"Sub"};
      multiset<string> Sub_33_set;
      Sub_33.add_attribute("ID", "PartySubID_t_402512234"); // 2
      Sub_33_set.insert("PartySubID_t_402512234");
      Sub_33.add_attribute("Typ", "26"); // 2
      Sub_33_set.insert("26");
      all_values.push_back(Sub_33_set);
      all_compo_names.insert("Sub_33_set");

      Pty_33.add_element(Sub_33);
    }
    elt.add_element(Pty_33);
  } // end Pty
  { // Pty
    xml_element Pty_34{"Pty"};
    multiset<string> Pty_34_set;
    Pty_34.add_attribute("ID", "PartyID_t_1728433467"); // 1
    Pty_34_set.insert("PartyID_t_1728433467");
    Pty_34.add_attribute("Src", "I"); // 1
    Pty_34_set.insert("I");
    Pty_34.add_attribute("R", "65"); // 1
    Pty_34_set.insert("65");
    all_values.push_back(Pty_34_set);
    all_compo_names.insert("Pty_34_set");

    {
      xml_element Sub_34{"Sub"};
      multiset<string> Sub_34_set;
      Sub_34.add_attribute("ID", "PartySubID_t_225687506"); // 2
      Sub_34_set.insert("PartySubID_t_225687506");
      Sub_34.add_attribute("Typ", "9"); // 2
      Sub_34_set.insert("9");
      all_values.push_back(Sub_34_set);
      all_compo_names.insert("Sub_34_set");

      Pty_34.add_element(Sub_34);
    }
    elt.add_element(Pty_34);
  } // end Pty
  { // Stip
    xml_element Stip_5{"Stip"};
    multiset<string> Stip_5_set;
    Stip_5.add_attribute("Typ", "ISSUER"); // 1
    Stip_5_set.insert("ISSUER");
    Stip_5.add_attribute("Val", "StipulationValue_t_1098693100"); // 1
    Stip_5_set.insert("StipulationValue_t_1098693100");
    all_values.push_back(Stip_5_set);
    all_compo_names.insert("Stip_5_set");

    elt.add_element(Stip_5);
  } // end Stip
  { // Stip
    xml_element Stip_6{"Stip"};
    multiset<string> Stip_6_set;
    Stip_6.add_attribute("Typ", "MHP"); // 1
    Stip_6_set.insert("MHP");
    Stip_6.add_attribute("Val", "StipulationValue_t_2079523007"); // 1
    Stip_6_set.insert("StipulationValue_t_2079523007");
    all_values.push_back(Stip_6_set);
    all_compo_names.insert("Stip_6_set");

    elt.add_element(Stip_6);
  } // end Stip
  { // Yield
    xml_element Yield_1{"Yield"};
    multiset<string> Yield_1_set;
    Yield_1.add_attribute("Typ", "MATURITY"); // 1
    Yield_1_set.insert("MATURITY");
    Yield_1.add_attribute("Yld", "18467711.690000"); // 1
    Yield_1_set.insert("18467711.690000");
    Yield_1.add_attribute("CalcDt", "YieldCalcDate_t_2122619377"); // 1
    Yield_1_set.insert("YieldCalcDate_t_2122619377");
    Yield_1.add_attribute("RedDt", "YieldRedemptionDate_t_1463460655"); // 1
    Yield_1_set.insert("YieldRedemptionDate_t_1463460655");
    Yield_1.add_attribute("RedPx", "5925186.010000"); // 1
    Yield_1_set.insert("5925186.010000");
    Yield_1.add_attribute("RedPxTyp", "17"); // 1
    Yield_1_set.insert("17");
    all_values.push_back(Yield_1_set);
    all_compo_names.insert("Yield_1_set");

    elt.add_element(Yield_1);
  } // end Yield
  { // Amt
    xml_element Amt_3{"Amt"};
    multiset<string> Amt_3_set;
    Amt_3.add_attribute("Typ", "CRES"); // 1
    Amt_3_set.insert("CRES");
    Amt_3.add_attribute("Amt", "PosAmt_t_1523326622"); // 1
    Amt_3_set.insert("PosAmt_t_1523326622");
    Amt_3.add_attribute("Ccy", "PositionCurrency_t_546584676"); // 1
    Amt_3_set.insert("PositionCurrency_t_546584676");
    all_values.push_back(Amt_3_set);
    all_compo_names.insert("Amt_3_set");

    elt.add_element(Amt_3);
  } // end Amt
  { // Amt
    xml_element Amt_4{"Amt"};
    multiset<string> Amt_4_set;
    Amt_4.add_attribute("Typ", "ICMTM"); // 1
    Amt_4_set.insert("ICMTM");
    Amt_4.add_attribute("Amt", "PosAmt_t_1427700779"); // 1
    Amt_4_set.insert("PosAmt_t_1427700779");
    Amt_4.add_attribute("Ccy", "PositionCurrency_t_1083261174"); // 1
    Amt_4_set.insert("PositionCurrency_t_1083261174");
    all_values.push_back(Amt_4_set);
    all_compo_names.insert("Amt_4_set");

    elt.add_element(Amt_4);
  } // end Amt
  { // Amt
    xml_element Amt_5{"Amt"};
    multiset<string> Amt_5_set;
    Amt_5.add_attribute("Typ", "PREM"); // 1
    Amt_5_set.insert("PREM");
    Amt_5.add_attribute("Amt", "PosAmt_t_966085434"); // 1
    Amt_5_set.insert("PosAmt_t_966085434");
    Amt_5.add_attribute("Ccy", "PositionCurrency_t_691519926"); // 1
    Amt_5_set.insert("PositionCurrency_t_691519926");
    all_values.push_back(Amt_5_set);
    all_compo_names.insert("Amt_5_set");

    elt.add_element(Amt_5);
  } // end Amt
  { // Alloc
    xml_element Alloc_3{"Alloc"};
    multiset<string> Alloc_3_set;
    Alloc_3.add_attribute("Acct", "AllocAccount_t_424602843"); // 1
    Alloc_3_set.insert("AllocAccount_t_424602843");
    Alloc_3.add_attribute("ActIDSrc", "99"); // 1
    Alloc_3_set.insert("99");
    Alloc_3.add_attribute("MtchStat", "2"); // 1
    Alloc_3_set.insert("2");
    Alloc_3.add_attribute("Px", "17813861.800000"); // 1
    Alloc_3_set.insert("17813861.800000");
    Alloc_3.add_attribute("Qty", "11868977.170000"); // 1
    Alloc_3_set.insert("11868977.170000");
    Alloc_3.add_attribute("IndAllocID", "IndividualAllocID_t_2063810209"); // 1
    Alloc_3_set.insert("IndividualAllocID_t_2063810209");
    Alloc_3.add_attribute("ProcCode", "5"); // 1
    Alloc_3_set.insert("5");
    Alloc_3.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_1412585223"); // 1
    Alloc_3_set.insert("SecondaryIndividualAllocID_t_1412585223");
    Alloc_3.add_attribute("Meth", "1"); // 1
    Alloc_3_set.insert("1");
    Alloc_3.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1359762546"); // 1
    Alloc_3_set.insert("AllocCustomerCapacity_t_1359762546");
    Alloc_3.add_attribute("AllocPosEfct", "F"); // 1
    Alloc_3_set.insert("F");
    Alloc_3.add_attribute("Typ", "2"); // 1
    Alloc_3_set.insert("2");
    Alloc_3.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_3_set.insert("N");
    Alloc_3.add_attribute("HandlInst", "1"); // 1
    Alloc_3_set.insert("1");
    Alloc_3.add_attribute("Txt", "AllocText_t_1408871322"); // 1
    Alloc_3_set.insert("AllocText_t_1408871322");
    Alloc_3.add_attribute("EncAllocTextLen", "1466368971"); // 1
    Alloc_3_set.insert("1466368971");
    Alloc_3.add_attribute("EncAllocText", "EncodedAllocText_t_1404873528"); // 1
    Alloc_3_set.insert("EncodedAllocText_t_1404873528");
    Alloc_3.add_attribute("AvgPx", "7248483.290000"); // 1
    Alloc_3_set.insert("7248483.290000");
    Alloc_3.add_attribute("NetMny", "AllocNetMoney_t_2058887572"); // 1
    Alloc_3_set.insert("AllocNetMoney_t_2058887572");
    Alloc_3.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1967986119"); // 1
    Alloc_3_set.insert("SettlCurrAmt_t_1967986119");
    Alloc_3.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1329038233"); // 1
    Alloc_3_set.insert("AllocSettlCurrAmt_t_1329038233");
    Alloc_3.add_attribute("SettlCcy", "CHF"); // 1
    Alloc_3_set.insert("CHF");
    Alloc_3.add_attribute("AllocSettlCcy", "CAN"); // 1
    Alloc_3_set.insert("CAN");
    Alloc_3.add_attribute("SettlCurrFxRt", "6240462.240000"); // 1
    Alloc_3_set.insert("6240462.240000");
    Alloc_3.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_3_set.insert("M");
    Alloc_3.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_116951792"); // 1
    Alloc_3_set.insert("AllocAccruedInterestAmt_t_116951792");
    Alloc_3.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1590131658"); // 1
    Alloc_3_set.insert("AllocInterestAtMaturity_t_1590131658");
    Alloc_3.add_attribute("ClrFeeInd", "B"); // 1
    Alloc_3_set.insert("B");
    Alloc_3.add_attribute("SettlInstTyp", "0"); // 1
    Alloc_3_set.insert("0");
    all_values.push_back(Alloc_3_set);
    all_compo_names.insert("Alloc_3_set");

    {
      xml_element Pty_35{"Pty"};
      multiset<string> Pty_35_set;
      Pty_35.add_attribute("ID", "NestedPartyID_t_2014734502"); // 2
      Pty_35_set.insert("NestedPartyID_t_2014734502");
      Pty_35.add_attribute("Src", "4"); // 2
      Pty_35_set.insert("4");
      Pty_35.add_attribute("R", "75"); // 2
      Pty_35_set.insert("75");
      all_values.push_back(Pty_35_set);
      all_compo_names.insert("Pty_35_set");

      {
        xml_element Sub_35{"Sub"};
        multiset<string> Sub_35_set;
        Sub_35.add_attribute("ID", "NestedPartySubID_t_1648637034"); // 3
        Sub_35_set.insert("NestedPartySubID_t_1648637034");
        Sub_35.add_attribute("Typ", "22"); // 3
        Sub_35_set.insert("22");
        all_values.push_back(Sub_35_set);
        all_compo_names.insert("Sub_35_set");

        Pty_35.add_element(Sub_35);
      }
      Alloc_3.add_element(Pty_35);
    }
    {
      xml_element Comm_3{"Comm"};
      multiset<string> Comm_3_set;
      Comm_3.add_attribute("Comm", "Commission_t_228459547"); // 2
      Comm_3_set.insert("Commission_t_228459547");
      Comm_3.add_attribute("CommTyp", "4"); // 2
      Comm_3_set.insert("4");
      Comm_3.add_attribute("Ccy", "JPY"); // 2
      Comm_3_set.insert("JPY");
      Comm_3.add_attribute("FundRenewWaiv", "Y"); // 2
      Comm_3_set.insert("Y");
      all_values.push_back(Comm_3_set);
      all_compo_names.insert("Comm_3_set");

      Alloc_3.add_element(Comm_3);
    }
    {
      xml_element MiscFees_3{"MiscFees"};
      multiset<string> MiscFees_3_set;
      MiscFees_3.add_attribute("Amt", "MiscFeeAmt_t_763598695"); // 2
      MiscFees_3_set.insert("MiscFeeAmt_t_763598695");
      MiscFees_3.add_attribute("Curr", "EUR"); // 2
      MiscFees_3_set.insert("EUR");
      MiscFees_3.add_attribute("Typ", "2"); // 2
      MiscFees_3_set.insert("2");
      MiscFees_3.add_attribute("Basis", "2"); // 2
      MiscFees_3_set.insert("2");
      all_values.push_back(MiscFees_3_set);
      all_compo_names.insert("MiscFees_3_set");

      Alloc_3.add_element(MiscFees_3);
    }
    {
      xml_element ClrInst_3{"ClrInst"};
      multiset<string> ClrInst_3_set;
      ClrInst_3.add_attribute("ClrngInstrctn", "4"); // 2
      ClrInst_3_set.insert("4");
      all_values.push_back(ClrInst_3_set);
      all_compo_names.insert("ClrInst_3_set");

      Alloc_3.add_element(ClrInst_3);
    }
    {
      xml_element SetInstr_3{"SetInstr"};
      multiset<string> SetInstr_3_set;
      SetInstr_3.add_attribute("DlvryTyp", "2"); // 2
      SetInstr_3_set.insert("2");
      SetInstr_3.add_attribute("StandInstDbTyp", "4"); // 2
      SetInstr_3_set.insert("4");
      SetInstr_3.add_attribute("StandInstDbName", "StandInstDbName_t_443794421"); // 2
      SetInstr_3_set.insert("StandInstDbName_t_443794421");
      SetInstr_3.add_attribute("StandInstDbID", "StandInstDbID_t_1271228845"); // 2
      SetInstr_3_set.insert("StandInstDbID_t_1271228845");
      all_values.push_back(SetInstr_3_set);
      all_compo_names.insert("SetInstr_3_set");

      {
        xml_element DlvInst_3{"DlvInst"};
        multiset<string> DlvInst_3_set;
        DlvInst_3.add_attribute("InstSrc", "1"); // 3
        DlvInst_3_set.insert("1");
        DlvInst_3.add_attribute("InstTyp", "C"); // 3
        DlvInst_3_set.insert("C");
        all_values.push_back(DlvInst_3_set);
        all_compo_names.insert("DlvInst_3_set");

        {
          xml_element Pty_36{"Pty"};
          multiset<string> Pty_36_set;
          Pty_36.add_attribute("ID", "SettlPartyID_t_467574290"); // 4
          Pty_36_set.insert("SettlPartyID_t_467574290");
          Pty_36.add_attribute("Src", "D"); // 4
          Pty_36_set.insert("D");
          Pty_36.add_attribute("R", "74"); // 4
          Pty_36_set.insert("74");
          all_values.push_back(Pty_36_set);
          all_compo_names.insert("Pty_36_set");

          {
            xml_element Sub_36{"Sub"};
            multiset<string> Sub_36_set;
            Sub_36.add_attribute("ID", "SettlPartySubID_t_1091620514"); // 5
            Sub_36_set.insert("SettlPartySubID_t_1091620514");
            Sub_36.add_attribute("Typ", "5"); // 5
            Sub_36_set.insert("5");
            all_values.push_back(Sub_36_set);
            all_compo_names.insert("Sub_36_set");

            Pty_36.add_element(Sub_36);
          }
          DlvInst_3.add_element(Pty_36);
        }
        SetInstr_3.add_element(DlvInst_3);
      }
      Alloc_3.add_element(SetInstr_3);
    }
    elt.add_element(Alloc_3);
  } // end Alloc
  { // Alloc
    xml_element Alloc_4{"Alloc"};
    multiset<string> Alloc_4_set;
    Alloc_4.add_attribute("Acct", "AllocAccount_t_637764800"); // 1
    Alloc_4_set.insert("AllocAccount_t_637764800");
    Alloc_4.add_attribute("ActIDSrc", "1"); // 1
    Alloc_4_set.insert("1");
    Alloc_4.add_attribute("MtchStat", "1"); // 1
    Alloc_4_set.insert("1");
    Alloc_4.add_attribute("Px", "17247928.950000"); // 1
    Alloc_4_set.insert("17247928.950000");
    Alloc_4.add_attribute("Qty", "4015193.780000"); // 1
    Alloc_4_set.insert("4015193.780000");
    Alloc_4.add_attribute("IndAllocID", "IndividualAllocID_t_1548459457"); // 1
    Alloc_4_set.insert("IndividualAllocID_t_1548459457");
    Alloc_4.add_attribute("ProcCode", "4"); // 1
    Alloc_4_set.insert("4");
    Alloc_4.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_2050156412"); // 1
    Alloc_4_set.insert("SecondaryIndividualAllocID_t_2050156412");
    Alloc_4.add_attribute("Meth", "2"); // 1
    Alloc_4_set.insert("2");
    Alloc_4.add_attribute("CustCpcty", "AllocCustomerCapacity_t_117901780"); // 1
    Alloc_4_set.insert("AllocCustomerCapacity_t_117901780");
    Alloc_4.add_attribute("AllocPosEfct", "C"); // 1
    Alloc_4_set.insert("C");
    Alloc_4.add_attribute("Typ", "1"); // 1
    Alloc_4_set.insert("1");
    Alloc_4.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_4_set.insert("N");
    Alloc_4.add_attribute("HandlInst", "1"); // 1
    Alloc_4_set.insert("1");
    Alloc_4.add_attribute("Txt", "AllocText_t_1578757089"); // 1
    Alloc_4_set.insert("AllocText_t_1578757089");
    Alloc_4.add_attribute("EncAllocTextLen", "895504948"); // 1
    Alloc_4_set.insert("895504948");
    Alloc_4.add_attribute("EncAllocText", "EncodedAllocText_t_796746485"); // 1
    Alloc_4_set.insert("EncodedAllocText_t_796746485");
    Alloc_4.add_attribute("AvgPx", "16246099.350000"); // 1
    Alloc_4_set.insert("16246099.350000");
    Alloc_4.add_attribute("NetMny", "AllocNetMoney_t_1681200468"); // 1
    Alloc_4_set.insert("AllocNetMoney_t_1681200468");
    Alloc_4.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1329136982"); // 1
    Alloc_4_set.insert("SettlCurrAmt_t_1329136982");
    Alloc_4.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_927852661"); // 1
    Alloc_4_set.insert("AllocSettlCurrAmt_t_927852661");
    Alloc_4.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_4_set.insert("EUR");
    Alloc_4.add_attribute("AllocSettlCcy", "USD"); // 1
    Alloc_4_set.insert("USD");
    Alloc_4.add_attribute("SettlCurrFxRt", "7276606.090000"); // 1
    Alloc_4_set.insert("7276606.090000");
    Alloc_4.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_4_set.insert("M");
    Alloc_4.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_9113152"); // 1
    Alloc_4_set.insert("AllocAccruedInterestAmt_t_9113152");
    Alloc_4.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_1248473617"); // 1
    Alloc_4_set.insert("AllocInterestAtMaturity_t_1248473617");
    Alloc_4.add_attribute("ClrFeeInd", "H"); // 1
    Alloc_4_set.insert("H");
    Alloc_4.add_attribute("SettlInstTyp", "4"); // 1
    Alloc_4_set.insert("4");
    all_values.push_back(Alloc_4_set);
    all_compo_names.insert("Alloc_4_set");

    {
      xml_element Pty_37{"Pty"};
      multiset<string> Pty_37_set;
      Pty_37.add_attribute("ID", "NestedPartyID_t_1886238417"); // 2
      Pty_37_set.insert("NestedPartyID_t_1886238417");
      Pty_37.add_attribute("Src", "I"); // 2
      Pty_37_set.insert("I");
      Pty_37.add_attribute("R", "76"); // 2
      Pty_37_set.insert("76");
      all_values.push_back(Pty_37_set);
      all_compo_names.insert("Pty_37_set");

      {
        xml_element Sub_37{"Sub"};
        multiset<string> Sub_37_set;
        Sub_37.add_attribute("ID", "NestedPartySubID_t_1463547665"); // 3
        Sub_37_set.insert("NestedPartySubID_t_1463547665");
        Sub_37.add_attribute("Typ", "33"); // 3
        Sub_37_set.insert("33");
        all_values.push_back(Sub_37_set);
        all_compo_names.insert("Sub_37_set");

        Pty_37.add_element(Sub_37);
      }
      Alloc_4.add_element(Pty_37);
    }
    {
      xml_element Comm_4{"Comm"};
      multiset<string> Comm_4_set;
      Comm_4.add_attribute("Comm", "Commission_t_1228801939"); // 2
      Comm_4_set.insert("Commission_t_1228801939");
      Comm_4.add_attribute("CommTyp", "3"); // 2
      Comm_4_set.insert("3");
      Comm_4.add_attribute("Ccy", "CHF"); // 2
      Comm_4_set.insert("CHF");
      Comm_4.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_4_set.insert("N");
      all_values.push_back(Comm_4_set);
      all_compo_names.insert("Comm_4_set");

      Alloc_4.add_element(Comm_4);
    }
    {
      xml_element MiscFees_4{"MiscFees"};
      multiset<string> MiscFees_4_set;
      MiscFees_4.add_attribute("Amt", "MiscFeeAmt_t_438587271"); // 2
      MiscFees_4_set.insert("MiscFeeAmt_t_438587271");
      MiscFees_4.add_attribute("Curr", "USD"); // 2
      MiscFees_4_set.insert("USD");
      MiscFees_4.add_attribute("Typ", "6"); // 2
      MiscFees_4_set.insert("6");
      MiscFees_4.add_attribute("Basis", "1"); // 2
      MiscFees_4_set.insert("1");
      all_values.push_back(MiscFees_4_set);
      all_compo_names.insert("MiscFees_4_set");

      Alloc_4.add_element(MiscFees_4);
    }
    {
      xml_element ClrInst_4{"ClrInst"};
      multiset<string> ClrInst_4_set;
      ClrInst_4.add_attribute("ClrngInstrctn", "7"); // 2
      ClrInst_4_set.insert("7");
      all_values.push_back(ClrInst_4_set);
      all_compo_names.insert("ClrInst_4_set");

      Alloc_4.add_element(ClrInst_4);
    }
    {
      xml_element SetInstr_4{"SetInstr"};
      multiset<string> SetInstr_4_set;
      SetInstr_4.add_attribute("DlvryTyp", "1"); // 2
      SetInstr_4_set.insert("1");
      SetInstr_4.add_attribute("StandInstDbTyp", "2"); // 2
      SetInstr_4_set.insert("2");
      SetInstr_4.add_attribute("StandInstDbName", "StandInstDbName_t_1271310549"); // 2
      SetInstr_4_set.insert("StandInstDbName_t_1271310549");
      SetInstr_4.add_attribute("StandInstDbID", "StandInstDbID_t_228403"); // 2
      SetInstr_4_set.insert("StandInstDbID_t_228403");
      all_values.push_back(SetInstr_4_set);
      all_compo_names.insert("SetInstr_4_set");

      {
        xml_element DlvInst_4{"DlvInst"};
        multiset<string> DlvInst_4_set;
        DlvInst_4.add_attribute("InstSrc", "2"); // 3
        DlvInst_4_set.insert("2");
        DlvInst_4.add_attribute("InstTyp", "S"); // 3
        DlvInst_4_set.insert("S");
        all_values.push_back(DlvInst_4_set);
        all_compo_names.insert("DlvInst_4_set");

        {
          xml_element Pty_38{"Pty"};
          multiset<string> Pty_38_set;
          Pty_38.add_attribute("ID", "SettlPartyID_t_1773159806"); // 4
          Pty_38_set.insert("SettlPartyID_t_1773159806");
          Pty_38.add_attribute("Src", "B"); // 4
          Pty_38_set.insert("B");
          Pty_38.add_attribute("R", "28"); // 4
          Pty_38_set.insert("28");
          all_values.push_back(Pty_38_set);
          all_compo_names.insert("Pty_38_set");

          {
            xml_element Sub_38{"Sub"};
            multiset<string> Sub_38_set;
            Sub_38.add_attribute("ID", "SettlPartySubID_t_353336768"); // 5
            Sub_38_set.insert("SettlPartySubID_t_353336768");
            Sub_38.add_attribute("Typ", "16"); // 5
            Sub_38_set.insert("16");
            all_values.push_back(Sub_38_set);
            all_compo_names.insert("Sub_38_set");

            Pty_38.add_element(Sub_38);
          }
          DlvInst_4.add_element(Pty_38);
        }
        SetInstr_4.add_element(DlvInst_4);
      }
      Alloc_4.add_element(SetInstr_4);
    }
    elt.add_element(Alloc_4);
  } // end Alloc
  { // Alloc
    xml_element Alloc_5{"Alloc"};
    multiset<string> Alloc_5_set;
    Alloc_5.add_attribute("Acct", "AllocAccount_t_1913559827"); // 1
    Alloc_5_set.insert("AllocAccount_t_1913559827");
    Alloc_5.add_attribute("ActIDSrc", "4"); // 1
    Alloc_5_set.insert("4");
    Alloc_5.add_attribute("MtchStat", "0"); // 1
    Alloc_5_set.insert("0");
    Alloc_5.add_attribute("Px", "10068274.630000"); // 1
    Alloc_5_set.insert("10068274.630000");
    Alloc_5.add_attribute("Qty", "13405651.550000"); // 1
    Alloc_5_set.insert("13405651.550000");
    Alloc_5.add_attribute("IndAllocID", "IndividualAllocID_t_1313643774"); // 1
    Alloc_5_set.insert("IndividualAllocID_t_1313643774");
    Alloc_5.add_attribute("ProcCode", "0"); // 1
    Alloc_5_set.insert("0");
    Alloc_5.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_656629172"); // 1
    Alloc_5_set.insert("SecondaryIndividualAllocID_t_656629172");
    Alloc_5.add_attribute("Meth", "1"); // 1
    Alloc_5_set.insert("1");
    Alloc_5.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1915971884"); // 1
    Alloc_5_set.insert("AllocCustomerCapacity_t_1915971884");
    Alloc_5.add_attribute("AllocPosEfct", "R"); // 1
    Alloc_5_set.insert("R");
    Alloc_5.add_attribute("Typ", "1"); // 1
    Alloc_5_set.insert("1");
    Alloc_5.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_5_set.insert("N");
    Alloc_5.add_attribute("HandlInst", "3"); // 1
    Alloc_5_set.insert("3");
    Alloc_5.add_attribute("Txt", "AllocText_t_305613997"); // 1
    Alloc_5_set.insert("AllocText_t_305613997");
    Alloc_5.add_attribute("EncAllocTextLen", "1844799489"); // 1
    Alloc_5_set.insert("1844799489");
    Alloc_5.add_attribute("EncAllocText", "EncodedAllocText_t_27632232"); // 1
    Alloc_5_set.insert("EncodedAllocText_t_27632232");
    Alloc_5.add_attribute("AvgPx", "3274425.810000"); // 1
    Alloc_5_set.insert("3274425.810000");
    Alloc_5.add_attribute("NetMny", "AllocNetMoney_t_574324106"); // 1
    Alloc_5_set.insert("AllocNetMoney_t_574324106");
    Alloc_5.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1765225961"); // 1
    Alloc_5_set.insert("SettlCurrAmt_t_1765225961");
    Alloc_5.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1146017651"); // 1
    Alloc_5_set.insert("AllocSettlCurrAmt_t_1146017651");
    Alloc_5.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_5_set.insert("EUR");
    Alloc_5.add_attribute("AllocSettlCcy", "EUR"); // 1
    Alloc_5_set.insert("EUR");
    Alloc_5.add_attribute("SettlCurrFxRt", "10571404.340000"); // 1
    Alloc_5_set.insert("10571404.340000");
    Alloc_5.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_5_set.insert("D");
    Alloc_5.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1396547297"); // 1
    Alloc_5_set.insert("AllocAccruedInterestAmt_t_1396547297");
    Alloc_5.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_814103461"); // 1
    Alloc_5_set.insert("AllocInterestAtMaturity_t_814103461");
    Alloc_5.add_attribute("ClrFeeInd", "C"); // 1
    Alloc_5_set.insert("C");
    Alloc_5.add_attribute("SettlInstTyp", "0"); // 1
    Alloc_5_set.insert("0");
    all_values.push_back(Alloc_5_set);
    all_compo_names.insert("Alloc_5_set");

    {
      xml_element Pty_39{"Pty"};
      multiset<string> Pty_39_set;
      Pty_39.add_attribute("ID", "NestedPartyID_t_580179640"); // 2
      Pty_39_set.insert("NestedPartyID_t_580179640");
      Pty_39.add_attribute("Src", "B"); // 2
      Pty_39_set.insert("B");
      Pty_39.add_attribute("R", "68"); // 2
      Pty_39_set.insert("68");
      all_values.push_back(Pty_39_set);
      all_compo_names.insert("Pty_39_set");

      {
        xml_element Sub_39{"Sub"};
        multiset<string> Sub_39_set;
        Sub_39.add_attribute("ID", "NestedPartySubID_t_1587007103"); // 3
        Sub_39_set.insert("NestedPartySubID_t_1587007103");
        Sub_39.add_attribute("Typ", "12"); // 3
        Sub_39_set.insert("12");
        all_values.push_back(Sub_39_set);
        all_compo_names.insert("Sub_39_set");

        Pty_39.add_element(Sub_39);
      }
      Alloc_5.add_element(Pty_39);
    }
    {
      xml_element Comm_5{"Comm"};
      multiset<string> Comm_5_set;
      Comm_5.add_attribute("Comm", "Commission_t_1584047232"); // 2
      Comm_5_set.insert("Commission_t_1584047232");
      Comm_5.add_attribute("CommTyp", "5"); // 2
      Comm_5_set.insert("5");
      Comm_5.add_attribute("Ccy", "JPY"); // 2
      Comm_5_set.insert("JPY");
      Comm_5.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_5_set.insert("N");
      all_values.push_back(Comm_5_set);
      all_compo_names.insert("Comm_5_set");

      Alloc_5.add_element(Comm_5);
    }
    {
      xml_element MiscFees_5{"MiscFees"};
      multiset<string> MiscFees_5_set;
      MiscFees_5.add_attribute("Amt", "MiscFeeAmt_t_291431819"); // 2
      MiscFees_5_set.insert("MiscFeeAmt_t_291431819");
      MiscFees_5.add_attribute("Curr", "GBP"); // 2
      MiscFees_5_set.insert("GBP");
      MiscFees_5.add_attribute("Typ", "14"); // 2
      MiscFees_5_set.insert("14");
      MiscFees_5.add_attribute("Basis", "1"); // 2
      MiscFees_5_set.insert("1");
      all_values.push_back(MiscFees_5_set);
      all_compo_names.insert("MiscFees_5_set");

      Alloc_5.add_element(MiscFees_5);
    }
    {
      xml_element ClrInst_5{"ClrInst"};
      multiset<string> ClrInst_5_set;
      ClrInst_5.add_attribute("ClrngInstrctn", "10"); // 2
      ClrInst_5_set.insert("10");
      all_values.push_back(ClrInst_5_set);
      all_compo_names.insert("ClrInst_5_set");

      Alloc_5.add_element(ClrInst_5);
    }
    {
      xml_element SetInstr_5{"SetInstr"};
      multiset<string> SetInstr_5_set;
      SetInstr_5.add_attribute("DlvryTyp", "0"); // 2
      SetInstr_5_set.insert("0");
      SetInstr_5.add_attribute("StandInstDbTyp", "1"); // 2
      SetInstr_5_set.insert("1");
      SetInstr_5.add_attribute("StandInstDbName", "StandInstDbName_t_565886250"); // 2
      SetInstr_5_set.insert("StandInstDbName_t_565886250");
      SetInstr_5.add_attribute("StandInstDbID", "StandInstDbID_t_1269833465"); // 2
      SetInstr_5_set.insert("StandInstDbID_t_1269833465");
      all_values.push_back(SetInstr_5_set);
      all_compo_names.insert("SetInstr_5_set");

      {
        xml_element DlvInst_5{"DlvInst"};
        multiset<string> DlvInst_5_set;
        DlvInst_5.add_attribute("InstSrc", "2"); // 3
        DlvInst_5_set.insert("2");
        DlvInst_5.add_attribute("InstTyp", "S"); // 3
        DlvInst_5_set.insert("S");
        all_values.push_back(DlvInst_5_set);
        all_compo_names.insert("DlvInst_5_set");

        {
          xml_element Pty_40{"Pty"};
          multiset<string> Pty_40_set;
          Pty_40.add_attribute("ID", "SettlPartyID_t_11402680"); // 4
          Pty_40_set.insert("SettlPartyID_t_11402680");
          Pty_40.add_attribute("Src", "I"); // 4
          Pty_40_set.insert("I");
          Pty_40.add_attribute("R", "57"); // 4
          Pty_40_set.insert("57");
          all_values.push_back(Pty_40_set);
          all_compo_names.insert("Pty_40_set");

          {
            xml_element Sub_40{"Sub"};
            multiset<string> Sub_40_set;
            Sub_40.add_attribute("ID", "SettlPartySubID_t_1068543114"); // 5
            Sub_40_set.insert("SettlPartySubID_t_1068543114");
            Sub_40.add_attribute("Typ", "24"); // 5
            Sub_40_set.insert("24");
            all_values.push_back(Sub_40_set);
            all_compo_names.insert("Sub_40_set");

            Pty_40.add_element(Sub_40);
          }
          DlvInst_5.add_element(Pty_40);
        }
        SetInstr_5.add_element(DlvInst_5);
      }
      Alloc_5.add_element(SetInstr_5);
    }
    elt.add_element(Alloc_5);
  } // end Alloc
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
