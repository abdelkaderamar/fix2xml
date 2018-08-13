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

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"AllocInstrAlert" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> AllocationInstructionAlert_message_t_0;
  elt.add_attribute("ID", "AllocID_t_1966880829"); // 0
  AllocationInstructionAlert_message_t_0.insert("AllocID_t_1966880829");
  elt.add_attribute("TransTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("Typ", "8"); // 0
  AllocationInstructionAlert_message_t_0.insert("8");
  elt.add_attribute("ID2", "SecondaryAllocID_t_1386290369"); // 0
  AllocationInstructionAlert_message_t_0.insert("SecondaryAllocID_t_1386290369");
  elt.add_attribute("RefID", "RefAllocID_t_2121083880"); // 0
  AllocationInstructionAlert_message_t_0.insert("RefAllocID_t_2121083880");
  elt.add_attribute("CxlRplcRsn", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("ImReqTyp", "5"); // 0
  AllocationInstructionAlert_message_t_0.insert("5");
  elt.add_attribute("LinkID", "AllocLinkID_t_644733193"); // 0
  AllocationInstructionAlert_message_t_0.insert("AllocLinkID_t_644733193");
  elt.add_attribute("LinkTyp", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("BkngRefID", "BookingRefID_t_618236829"); // 0
  AllocationInstructionAlert_message_t_0.insert("BookingRefID_t_618236829");
  elt.add_attribute("NoOrdsTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("PrevlyRpted", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("ReversalInd", "true"); // 0
  AllocationInstructionAlert_message_t_0.insert("true");
  elt.add_attribute("MtchTyp", "A3"); // 0
  AllocationInstructionAlert_message_t_0.insert("A3");
  elt.add_attribute("Side", "G"); // 0
  AllocationInstructionAlert_message_t_0.insert("G");
  elt.add_attribute("Qty", "13383075.270000"); // 0
  AllocationInstructionAlert_message_t_0.insert("13383075.270000");
  elt.add_attribute("QtyTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("LastMkt", "LastMkt_t_377133289"); // 0
  AllocationInstructionAlert_message_t_0.insert("LastMkt_t_377133289");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_104130357"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeOriginationDate_t_104130357");
  elt.add_attribute("SesID", "3"); // 0
  AllocationInstructionAlert_message_t_0.insert("3");
  elt.add_attribute("SesSub", "3"); // 0
  AllocationInstructionAlert_message_t_0.insert("3");
  elt.add_attribute("PxTyp", "2"); // 0
  AllocationInstructionAlert_message_t_0.insert("2");
  elt.add_attribute("AvgPx", "9945547.800000"); // 0
  AllocationInstructionAlert_message_t_0.insert("9945547.800000");
  elt.add_attribute("AvgParPx", "12642130.860000"); // 0
  AllocationInstructionAlert_message_t_0.insert("12642130.860000");
  elt.add_attribute("Ccy", "EUR"); // 0
  AllocationInstructionAlert_message_t_0.insert("EUR");
  elt.add_attribute("AvgPxPrcsn", "1945432839"); // 0
  AllocationInstructionAlert_message_t_0.insert("1945432839");
  elt.add_attribute("TrdDt", "TradeDate_t_1837966740"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeDate_t_1837966740");
  elt.add_attribute("TxnTm", "TransactTime_t_2128185044"); // 0
  AllocationInstructionAlert_message_t_0.insert("TransactTime_t_2128185044");
  elt.add_attribute("SettlTyp", "4"); // 0
  AllocationInstructionAlert_message_t_0.insert("4");
  elt.add_attribute("SettlDt", "SettlDate_t_39176340"); // 0
  AllocationInstructionAlert_message_t_0.insert("SettlDate_t_39176340");
  elt.add_attribute("BkngTyp", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("GrossTrdAmt", "GrossTradeAmt_t_954837669"); // 0
  AllocationInstructionAlert_message_t_0.insert("GrossTradeAmt_t_954837669");
  elt.add_attribute("Concession", "Concession_t_1688347829"); // 0
  AllocationInstructionAlert_message_t_0.insert("Concession_t_1688347829");
  elt.add_attribute("TotTakedown", "TotalTakedown_t_1186388946"); // 0
  AllocationInstructionAlert_message_t_0.insert("TotalTakedown_t_1186388946");
  elt.add_attribute("NetMny", "NetMoney_t_928437902"); // 0
  AllocationInstructionAlert_message_t_0.insert("NetMoney_t_928437902");
  elt.add_attribute("PosEfct", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("AutoAcceptInd", "true"); // 0
  AllocationInstructionAlert_message_t_0.insert("true");
  elt.add_attribute("Txt", "Text_t_1573171095"); // 0
  AllocationInstructionAlert_message_t_0.insert("Text_t_1573171095");
  elt.add_attribute("EncTxtLen", "1947327124"); // 0
  AllocationInstructionAlert_message_t_0.insert("1947327124");
  elt.add_attribute("EncTxt", "EncodedText_t_1870855640"); // 0
  AllocationInstructionAlert_message_t_0.insert("EncodedText_t_1870855640");
  elt.add_attribute("NumDaysInt", "651708334"); // 0
  AllocationInstructionAlert_message_t_0.insert("651708334");
  elt.add_attribute("AcrdIntRt", "977936.960000"); // 0
  AllocationInstructionAlert_message_t_0.insert("977936.960000");
  elt.add_attribute("AcrdIntAmt", "AccruedInterestAmt_t_25473544"); // 0
  AllocationInstructionAlert_message_t_0.insert("AccruedInterestAmt_t_25473544");
  elt.add_attribute("TotAcrdIntAmt", "TotalAccruedInterestAmt_t_1535937734"); // 0
  AllocationInstructionAlert_message_t_0.insert("TotalAccruedInterestAmt_t_1535937734");
  elt.add_attribute("IntAtMat", "InterestAtMaturity_t_2042068159"); // 0
  AllocationInstructionAlert_message_t_0.insert("InterestAtMaturity_t_2042068159");
  elt.add_attribute("EndAcrdIntAmt", "EndAccruedInterestAmt_t_1363781072"); // 0
  AllocationInstructionAlert_message_t_0.insert("EndAccruedInterestAmt_t_1363781072");
  elt.add_attribute("StartCsh", "StartCash_t_2107252994"); // 0
  AllocationInstructionAlert_message_t_0.insert("StartCash_t_2107252994");
  elt.add_attribute("EndCsh", "EndCash_t_271717800"); // 0
  AllocationInstructionAlert_message_t_0.insert("EndCash_t_271717800");
  elt.add_attribute("LegalCnfm", "Y"); // 0
  AllocationInstructionAlert_message_t_0.insert("Y");
  elt.add_attribute("TotNoAllocs", "972060296"); // 0
  AllocationInstructionAlert_message_t_0.insert("972060296");
  elt.add_attribute("LastFragment", "N"); // 0
  AllocationInstructionAlert_message_t_0.insert("N");
  elt.add_attribute("AvgPxInd", "0"); // 0
  AllocationInstructionAlert_message_t_0.insert("0");
  elt.add_attribute("BizDt", "ClearingBusinessDate_t_1966615076"); // 0
  AllocationInstructionAlert_message_t_0.insert("ClearingBusinessDate_t_1966615076");
  elt.add_attribute("TrdTyp", "17"); // 0
  AllocationInstructionAlert_message_t_0.insert("17");
  elt.add_attribute("TrdSubTyp", "30"); // 0
  AllocationInstructionAlert_message_t_0.insert("30");
  elt.add_attribute("CustCpcty", "4"); // 0
  AllocationInstructionAlert_message_t_0.insert("4");
  elt.add_attribute("InptSrc", "TradeInputSource_t_392220304"); // 0
  AllocationInstructionAlert_message_t_0.insert("TradeInputSource_t_392220304");
  elt.add_attribute("MLegRptTyp", "1"); // 0
  AllocationInstructionAlert_message_t_0.insert("1");
  elt.add_attribute("MsgEvtSrc", "MessageEventSource_t_161908891"); // 0
  AllocationInstructionAlert_message_t_0.insert("MessageEventSource_t_161908891");
  elt.add_attribute("RndPx", "17782776.080000"); // 0
  AllocationInstructionAlert_message_t_0.insert("17782776.080000");
  all_values.push_back(AllocationInstructionAlert_message_t_0);
  all_compo_names.insert("AllocationInstructionAlert_message_t");

  { // Hdr
    xml_element Hdr_4{"Hdr"};
    multiset<string> Hdr_4_set;
    Hdr_4.add_attribute("SeqNum", "34245193"); // 1
    Hdr_4_set.insert("34245193");
    Hdr_4.add_attribute("SID", "SenderCompID_t_2109491116"); // 1
    Hdr_4_set.insert("SenderCompID_t_2109491116");
    Hdr_4.add_attribute("TID", "TargetCompID_t_585631630"); // 1
    Hdr_4_set.insert("TargetCompID_t_585631630");
    Hdr_4.add_attribute("OBID", "OnBehalfOfCompID_t_1722593023"); // 1
    Hdr_4_set.insert("OnBehalfOfCompID_t_1722593023");
    Hdr_4.add_attribute("D2ID", "DeliverToCompID_t_1148396415"); // 1
    Hdr_4_set.insert("DeliverToCompID_t_1148396415");
    Hdr_4.add_attribute("SSub", "SenderSubID_t_1514069532"); // 1
    Hdr_4_set.insert("SenderSubID_t_1514069532");
    Hdr_4.add_attribute("SLoc", "SenderLocationID_t_2074883375"); // 1
    Hdr_4_set.insert("SenderLocationID_t_2074883375");
    Hdr_4.add_attribute("TSub", "TargetSubID_t_253531577"); // 1
    Hdr_4_set.insert("TargetSubID_t_253531577");
    Hdr_4.add_attribute("TLoc", "TargetLocationID_t_939756979"); // 1
    Hdr_4_set.insert("TargetLocationID_t_939756979");
    Hdr_4.add_attribute("OBSub", "OnBehalfOfSubID_t_1874726851"); // 1
    Hdr_4_set.insert("OnBehalfOfSubID_t_1874726851");
    Hdr_4.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2124387217"); // 1
    Hdr_4_set.insert("OnBehalfOfLocationID_t_2124387217");
    Hdr_4.add_attribute("D2Sub", "DeliverToSubID_t_1591465314"); // 1
    Hdr_4_set.insert("DeliverToSubID_t_1591465314");
    Hdr_4.add_attribute("D2Loc", "DeliverToLocationID_t_1972520548"); // 1
    Hdr_4_set.insert("DeliverToLocationID_t_1972520548");
    Hdr_4.add_attribute("PosDup", "N"); // 1
    Hdr_4_set.insert("N");
    Hdr_4.add_attribute("PosRsnd", "N"); // 1
    Hdr_4_set.insert("N");
    Hdr_4.add_attribute("Snt", "SendingTime_t_1867105059"); // 1
    Hdr_4_set.insert("SendingTime_t_1867105059");
    Hdr_4.add_attribute("OrigSnt", "OrigSendingTime_t_1366158186"); // 1
    Hdr_4_set.insert("OrigSendingTime_t_1366158186");
    Hdr_4.add_attribute("MsgEncd", "MessageEncoding_t_939688746"); // 1
    Hdr_4_set.insert("MessageEncoding_t_939688746");
    all_values.push_back(Hdr_4_set);
    all_compo_names.insert("Hdr_4_set");

    {
      xml_element Hop_4{"Hop"};
      multiset<string> Hop_4_set;
      Hop_4.add_attribute("ID", "HopCompID_t_2138822860"); // 2
      Hop_4_set.insert("HopCompID_t_2138822860");
      Hop_4.add_attribute("Ref", "686585967"); // 2
      Hop_4_set.insert("686585967");
      Hop_4.add_attribute("Snt", "HopSendingTime_t_1911749043"); // 2
      Hop_4_set.insert("HopSendingTime_t_1911749043");
      all_values.push_back(Hop_4_set);
      all_compo_names.insert("Hop_4_set");

      Hdr_4.add_element(Hop_4);
    }
    elt.add_element(Hdr_4);
  } // end Hdr
  { // OrdAlloc
    xml_element OrdAlloc_3{"OrdAlloc"};
    multiset<string> OrdAlloc_3_set;
    OrdAlloc_3.add_attribute("ClOrdID", "ClOrdID_t_1128172119"); // 1
    OrdAlloc_3_set.insert("ClOrdID_t_1128172119");
    OrdAlloc_3.add_attribute("OrdID", "OrderID_t_1730880471"); // 1
    OrdAlloc_3_set.insert("OrderID_t_1730880471");
    OrdAlloc_3.add_attribute("OrdID2", "SecondaryOrderID_t_2063151998"); // 1
    OrdAlloc_3_set.insert("SecondaryOrderID_t_2063151998");
    OrdAlloc_3.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1432757880"); // 1
    OrdAlloc_3_set.insert("SecondaryClOrdID_t_1432757880");
    OrdAlloc_3.add_attribute("ListID", "ListID_t_1912087967"); // 1
    OrdAlloc_3_set.insert("ListID_t_1912087967");
    OrdAlloc_3.add_attribute("Qty", "3078886.540000"); // 1
    OrdAlloc_3_set.insert("3078886.540000");
    OrdAlloc_3.add_attribute("AvgPx", "14278267.330000"); // 1
    OrdAlloc_3_set.insert("14278267.330000");
    OrdAlloc_3.add_attribute("BkngQty", "20739968.580000"); // 1
    OrdAlloc_3_set.insert("20739968.580000");
    all_values.push_back(OrdAlloc_3_set);
    all_compo_names.insert("OrdAlloc_3_set");

    {
      xml_element Pty_21{"Pty"};
      multiset<string> Pty_21_set;
      Pty_21.add_attribute("ID", "Nested2PartyID_t_2086166263"); // 2
      Pty_21_set.insert("Nested2PartyID_t_2086166263");
      Pty_21.add_attribute("Src", "3"); // 2
      Pty_21_set.insert("3");
      Pty_21.add_attribute("R", "65"); // 2
      Pty_21_set.insert("65");
      all_values.push_back(Pty_21_set);
      all_compo_names.insert("Pty_21_set");

      {
        xml_element Sub_21{"Sub"};
        multiset<string> Sub_21_set;
        Sub_21.add_attribute("ID", "Nested2PartySubID_t_524314245"); // 3
        Sub_21_set.insert("Nested2PartySubID_t_524314245");
        Sub_21.add_attribute("Typ", "21"); // 3
        Sub_21_set.insert("21");
        all_values.push_back(Sub_21_set);
        all_compo_names.insert("Sub_21_set");

        Pty_21.add_element(Sub_21);
      }
      OrdAlloc_3.add_element(Pty_21);
    }
    elt.add_element(OrdAlloc_3);
  } // end OrdAlloc
  { // AllExc
    xml_element AllExc_1{"AllExc"};
    multiset<string> AllExc_1_set;
    AllExc_1.add_attribute("LastQty", "20383837.770000"); // 1
    AllExc_1_set.insert("20383837.770000");
    AllExc_1.add_attribute("ExecID", "ExecID_t_964581028"); // 1
    AllExc_1_set.insert("ExecID_t_964581028");
    AllExc_1.add_attribute("ExecID2", "SecondaryExecID_t_1290448671"); // 1
    AllExc_1_set.insert("SecondaryExecID_t_1290448671");
    AllExc_1.add_attribute("LastPx", "8306571.080000"); // 1
    AllExc_1_set.insert("8306571.080000");
    AllExc_1.add_attribute("LastParPx", "6918242.320000"); // 1
    AllExc_1_set.insert("6918242.320000");
    AllExc_1.add_attribute("LastCpcty", "2"); // 1
    AllExc_1_set.insert("2");
    AllExc_1.add_attribute("TrdID", "TradeID_t_274638774"); // 1
    AllExc_1_set.insert("TradeID_t_274638774");
    AllExc_1.add_attribute("FirmTrdID", "FirmTradeID_t_516861132"); // 1
    AllExc_1_set.insert("FirmTradeID_t_516861132");
    all_values.push_back(AllExc_1_set);
    all_compo_names.insert("AllExc_1_set");

    elt.add_element(AllExc_1);
  } // end AllExc
  { // AllExc
    xml_element AllExc_2{"AllExc"};
    multiset<string> AllExc_2_set;
    AllExc_2.add_attribute("LastQty", "12697293.550000"); // 1
    AllExc_2_set.insert("12697293.550000");
    AllExc_2.add_attribute("ExecID", "ExecID_t_1254558175"); // 1
    AllExc_2_set.insert("ExecID_t_1254558175");
    AllExc_2.add_attribute("ExecID2", "SecondaryExecID_t_236482543"); // 1
    AllExc_2_set.insert("SecondaryExecID_t_236482543");
    AllExc_2.add_attribute("LastPx", "4884038.930000"); // 1
    AllExc_2_set.insert("4884038.930000");
    AllExc_2.add_attribute("LastParPx", "467632.730000"); // 1
    AllExc_2_set.insert("467632.730000");
    AllExc_2.add_attribute("LastCpcty", "4"); // 1
    AllExc_2_set.insert("4");
    AllExc_2.add_attribute("TrdID", "TradeID_t_1174989860"); // 1
    AllExc_2_set.insert("TradeID_t_1174989860");
    AllExc_2.add_attribute("FirmTrdID", "FirmTradeID_t_1958512316"); // 1
    AllExc_2_set.insert("FirmTradeID_t_1958512316");
    all_values.push_back(AllExc_2_set);
    all_compo_names.insert("AllExc_2_set");

    elt.add_element(AllExc_2);
  } // end AllExc
  { // Instrmt
    xml_element Instrmt_3{"Instrmt"};
    multiset<string> Instrmt_3_set;
    Instrmt_3.add_attribute("Sym", "Symbol_t_1696702641"); // 1
    Instrmt_3_set.insert("Symbol_t_1696702641");
    Instrmt_3.add_attribute("Sfx", "WI"); // 1
    Instrmt_3_set.insert("WI");
    Instrmt_3.add_attribute("ID", "SecurityID_t_1541909140"); // 1
    Instrmt_3_set.insert("SecurityID_t_1541909140");
    Instrmt_3.add_attribute("Src", "D"); // 1
    Instrmt_3_set.insert("D");
    Instrmt_3.add_attribute("Prod", "8"); // 1
    Instrmt_3_set.insert("8");
    Instrmt_3.add_attribute("ProdCmplx", "ProductComplex_t_1306513459"); // 1
    Instrmt_3_set.insert("ProductComplex_t_1306513459");
    Instrmt_3.add_attribute("SecGrp", "SecurityGroup_t_1920259646"); // 1
    Instrmt_3_set.insert("SecurityGroup_t_1920259646");
    Instrmt_3.add_attribute("CFI", "CFICode_t_868779296"); // 1
    Instrmt_3_set.insert("CFICode_t_868779296");
    Instrmt_3.add_attribute("SecTyp", "SPCLA"); // 1
    Instrmt_3_set.insert("SPCLA");
    Instrmt_3.add_attribute("SubTyp", "SecuritySubType_t_1858942261"); // 1
    Instrmt_3_set.insert("SecuritySubType_t_1858942261");
    Instrmt_3.add_attribute("MMY", "183367575"); // 1
    Instrmt_3_set.insert("183367575");
    Instrmt_3.add_attribute("MatDt", "MaturityDate_t_1121547348"); // 1
    Instrmt_3_set.insert("MaturityDate_t_1121547348");
    Instrmt_3.add_attribute("MatTm", "235772858"); // 1
    Instrmt_3_set.insert("235772858");
    Instrmt_3.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1220548876"); // 1
    Instrmt_3_set.insert("SettleOnOpenFlag_t_1220548876");
    Instrmt_3.add_attribute("AsgnMeth", "10980794"); // 1
    Instrmt_3_set.insert("10980794");
    Instrmt_3.add_attribute("Status", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("CpnPmt", "CouponPaymentDate_t_37646257"); // 1
    Instrmt_3_set.insert("CouponPaymentDate_t_37646257");
    Instrmt_3.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_3_set.insert("MM");
    Instrmt_3.add_attribute("Snrty", "SD"); // 1
    Instrmt_3_set.insert("SD");
    Instrmt_3.add_attribute("NotlPctOut", "7294704.890000"); // 1
    Instrmt_3_set.insert("7294704.890000");
    Instrmt_3.add_attribute("OrigNotlPctOut", "4212980.590000"); // 1
    Instrmt_3_set.insert("4212980.590000");
    Instrmt_3.add_attribute("AttchPnt", "12319688.700000"); // 1
    Instrmt_3_set.insert("12319688.700000");
    Instrmt_3.add_attribute("DetchPnt", "12463316.210000"); // 1
    Instrmt_3_set.insert("12463316.210000");
    Instrmt_3.add_attribute("Issued", "IssueDate_t_1691027414"); // 1
    Instrmt_3_set.insert("IssueDate_t_1691027414");
    Instrmt_3.add_attribute("RepoCollSecTyp", "339043397"); // 1
    Instrmt_3_set.insert("339043397");
    Instrmt_3.add_attribute("RepoTrm", "1482814164"); // 1
    Instrmt_3_set.insert("1482814164");
    Instrmt_3.add_attribute("RepoRt", "319476.590000"); // 1
    Instrmt_3_set.insert("319476.590000");
    Instrmt_3.add_attribute("Fctr", "3858066.710000"); // 1
    Instrmt_3_set.insert("3858066.710000");
    Instrmt_3.add_attribute("CrdRtg", "CreditRating_t_1710635920"); // 1
    Instrmt_3_set.insert("CreditRating_t_1710635920");
    Instrmt_3.add_attribute("Rgstry", "InstrRegistry_t_1206937519"); // 1
    Instrmt_3_set.insert("InstrRegistry_t_1206937519");
    Instrmt_3.add_attribute("IssuCtry", "196835339"); // 1
    Instrmt_3_set.insert("196835339");
    Instrmt_3.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1259854913"); // 1
    Instrmt_3_set.insert("StateOrProvinceOfIssue_t_1259854913");
    Instrmt_3.add_attribute("Lcl", "LocaleOfIssue_t_1362615850"); // 1
    Instrmt_3_set.insert("LocaleOfIssue_t_1362615850");
    Instrmt_3.add_attribute("Redeem", "RedemptionDate_t_1738744479"); // 1
    Instrmt_3_set.insert("RedemptionDate_t_1738744479");
    Instrmt_3.add_attribute("StrkPx", "7247422.570000"); // 1
    Instrmt_3_set.insert("7247422.570000");
    Instrmt_3.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_3_set.insert("GBP");
    Instrmt_3.add_attribute("StrkMult", "4975182.560000"); // 1
    Instrmt_3_set.insert("4975182.560000");
    Instrmt_3.add_attribute("StrkValu", "16723477.100000"); // 1
    Instrmt_3_set.insert("16723477.100000");
    Instrmt_3.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_3_set.insert("5");
    Instrmt_3.add_attribute("StrkPxBndryPrcsn", "18557152.850000"); // 1
    Instrmt_3_set.insert("18557152.850000");
    Instrmt_3.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("OptAt", "444749728"); // 1
    Instrmt_3_set.insert("444749728");
    Instrmt_3.add_attribute("Mult", "9287805.140000"); // 1
    Instrmt_3_set.insert("9287805.140000");
    Instrmt_3.add_attribute("MultTyp", "0"); // 1
    Instrmt_3_set.insert("0");
    Instrmt_3.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_3_set.insert("0");
    Instrmt_3.add_attribute("MinPxIncr", "9664267.710000"); // 1
    Instrmt_3_set.insert("9664267.710000");
    Instrmt_3.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_269791273"); // 1
    Instrmt_3_set.insert("MinPriceIncrementAmount_t_269791273");
    Instrmt_3.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_3_set.insert("MMBtu");
    Instrmt_3.add_attribute("UOMQty", "16958972.600000"); // 1
    Instrmt_3_set.insert("16958972.600000");
    Instrmt_3.add_attribute("PxUOM", "Bu"); // 1
    Instrmt_3_set.insert("Bu");
    Instrmt_3.add_attribute("PxUOMQty", "6132380.340000"); // 1
    Instrmt_3_set.insert("6132380.340000");
    Instrmt_3.add_attribute("SettlMeth", "P"); // 1
    Instrmt_3_set.insert("P");
    Instrmt_3.add_attribute("ExerStyle", "2"); // 1
    Instrmt_3_set.insert("2");
    Instrmt_3.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_3_set.insert("3");
    Instrmt_3.add_attribute("OptPayAmt", "OptPayoutAmount_t_130075749"); // 1
    Instrmt_3_set.insert("OptPayoutAmount_t_130075749");
    Instrmt_3.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_3_set.insert("INX");
    Instrmt_3.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_3_set.insert("FUTDA");
    Instrmt_3.add_attribute("ListMeth", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("CapPx", "14735182.760000"); // 1
    Instrmt_3_set.insert("14735182.760000");
    Instrmt_3.add_attribute("FlrPx", "15349234.420000"); // 1
    Instrmt_3_set.insert("15349234.420000");
    Instrmt_3.add_attribute("PutCall", "1"); // 1
    Instrmt_3_set.insert("1");
    Instrmt_3.add_attribute("FlexInd", "true"); // 1
    Instrmt_3_set.insert("true");
    Instrmt_3.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_3_set.insert("false");
    Instrmt_3.add_attribute("TmUnit", "Min"); // 1
    Instrmt_3_set.insert("Min");
    Instrmt_3.add_attribute("CpnRt", "14922188.920000"); // 1
    Instrmt_3_set.insert("14922188.920000");
    Instrmt_3.add_attribute("Exch", "SecurityExchange_t_2023958564"); // 1
    Instrmt_3_set.insert("SecurityExchange_t_2023958564");
    Instrmt_3.add_attribute("PosLmt", "27859800"); // 1
    Instrmt_3_set.insert("27859800");
    Instrmt_3.add_attribute("NTPosLmt", "1017082955"); // 1
    Instrmt_3_set.insert("1017082955");
    Instrmt_3.add_attribute("Issr", "Issuer_t_2007275876"); // 1
    Instrmt_3_set.insert("Issuer_t_2007275876");
    Instrmt_3.add_attribute("EncIssrLen", "236836670"); // 1
    Instrmt_3_set.insert("236836670");
    Instrmt_3.add_attribute("EncIssr", "EncodedIssuer_t_725314592"); // 1
    Instrmt_3_set.insert("EncodedIssuer_t_725314592");
    Instrmt_3.add_attribute("Desc", "SecurityDesc_t_964656888"); // 1
    Instrmt_3_set.insert("SecurityDesc_t_964656888");
    Instrmt_3.add_attribute("EncSecDescLen", "681586398"); // 1
    Instrmt_3_set.insert("681586398");
    Instrmt_3.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1654095106"); // 1
    Instrmt_3_set.insert("EncodedSecurityDesc_t_1654095106");
    Instrmt_3.add_attribute("Pool", "Pool_t_2080502343"); // 1
    Instrmt_3_set.insert("Pool_t_2080502343");
    Instrmt_3.add_attribute("CSetMo", "1253009113"); // 1
    Instrmt_3_set.insert("1253009113");
    Instrmt_3.add_attribute("CPPgm", "99"); // 1
    Instrmt_3_set.insert("99");
    Instrmt_3.add_attribute("CPRegT", "CPRegType_t_202809968"); // 1
    Instrmt_3_set.insert("CPRegType_t_202809968");
    Instrmt_3.add_attribute("Dated", "DatedDate_t_634278277"); // 1
    Instrmt_3_set.insert("DatedDate_t_634278277");
    Instrmt_3.add_attribute("IntAcrl", "InterestAccrualDate_t_21451841"); // 1
    Instrmt_3_set.insert("InterestAccrualDate_t_21451841");
    all_values.push_back(Instrmt_3_set);
    all_compo_names.insert("Instrmt_3_set");

    {
      xml_element AID_3{"AID"};
      multiset<string> AID_3_set;
      AID_3.add_attribute("AltID", "SecurityAltID_t_893899300"); // 2
      AID_3_set.insert("SecurityAltID_t_893899300");
      AID_3.add_attribute("AltIDSrc", "L"); // 2
      AID_3_set.insert("L");
      all_values.push_back(AID_3_set);
      all_compo_names.insert("AID_3_set");

      Instrmt_3.add_element(AID_3);
    }
    {
      xml_element SecXML_3{"SecXML"};
      multiset<string> SecXML_3_set;
      SecXML_3.add_attribute("Schema", "SecurityXMLSchema_t_816197074"); // 2
      SecXML_3_set.insert("SecurityXMLSchema_t_816197074");
      all_values.push_back(SecXML_3_set);
      all_compo_names.insert("SecXML_3_set");

      Instrmt_3.add_element(SecXML_3);
    }
    {
      xml_element Evnt_3{"Evnt"};
      multiset<string> Evnt_3_set;
      Evnt_3.add_attribute("EventTyp", "18"); // 2
      Evnt_3_set.insert("18");
      Evnt_3.add_attribute("Dt", "EventDate_t_52314094"); // 2
      Evnt_3_set.insert("EventDate_t_52314094");
      Evnt_3.add_attribute("Tm", "EventTime_t_946272824"); // 2
      Evnt_3_set.insert("EventTime_t_946272824");
      Evnt_3.add_attribute("Px", "13951131.550000"); // 2
      Evnt_3_set.insert("13951131.550000");
      Evnt_3.add_attribute("Txt", "EventText_t_1390402197"); // 2
      Evnt_3_set.insert("EventText_t_1390402197");
      all_values.push_back(Evnt_3_set);
      all_compo_names.insert("Evnt_3_set");

      Instrmt_3.add_element(Evnt_3);
    }
    {
      xml_element Pty_22{"Pty"};
      multiset<string> Pty_22_set;
      Pty_22.add_attribute("ID", "InstrumentPartyID_t_639500845"); // 2
      Pty_22_set.insert("InstrumentPartyID_t_639500845");
      Pty_22.add_attribute("Src", "E"); // 2
      Pty_22_set.insert("E");
      Pty_22.add_attribute("R", "61"); // 2
      Pty_22_set.insert("61");
      all_values.push_back(Pty_22_set);
      all_compo_names.insert("Pty_22_set");

      {
        xml_element Sub_22{"Sub"};
        multiset<string> Sub_22_set;
        Sub_22.add_attribute("ID", "InstrumentPartySubID_t_1592583780"); // 3
        Sub_22_set.insert("InstrumentPartySubID_t_1592583780");
        Sub_22.add_attribute("Typ", "23"); // 3
        Sub_22_set.insert("23");
        all_values.push_back(Sub_22_set);
        all_compo_names.insert("Sub_22_set");

        Pty_22.add_element(Sub_22);
      }
      Instrmt_3.add_element(Pty_22);
    }
    {
      xml_element CmplxEvnt_3{"CmplxEvnt"};
      multiset<string> CmplxEvnt_3_set;
      CmplxEvnt_3.add_attribute("Typ", "8"); // 2
      CmplxEvnt_3_set.insert("8");
      CmplxEvnt_3.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1122925325"); // 2
      CmplxEvnt_3_set.insert("ComplexOptPayoutAmount_t_1122925325");
      CmplxEvnt_3.add_attribute("Px", "7545335.060000"); // 2
      CmplxEvnt_3_set.insert("7545335.060000");
      CmplxEvnt_3.add_attribute("PxBndryMeth", "1"); // 2
      CmplxEvnt_3_set.insert("1");
      CmplxEvnt_3.add_attribute("PxBndryPrcsn", "11507851.250000"); // 2
      CmplxEvnt_3_set.insert("11507851.250000");
      CmplxEvnt_3.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_3_set.insert("2");
      CmplxEvnt_3.add_attribute("Cond", "1"); // 2
      CmplxEvnt_3_set.insert("1");
      all_values.push_back(CmplxEvnt_3_set);
      all_compo_names.insert("CmplxEvnt_3_set");

      {
        xml_element EvntDts_3{"EvntDts"};
        multiset<string> EvntDts_3_set;
        EvntDts_3.add_attribute("StartDt", "ComplexEventStartDate_t_1387621795"); // 3
        EvntDts_3_set.insert("ComplexEventStartDate_t_1387621795");
        EvntDts_3.add_attribute("EndDt", "ComplexEventEndDate_t_349447406"); // 3
        EvntDts_3_set.insert("ComplexEventEndDate_t_349447406");
        all_values.push_back(EvntDts_3_set);
        all_compo_names.insert("EvntDts_3_set");

        {
          xml_element EvntTms_3{"EvntTms"};
          multiset<string> EvntTms_3_set;
          EvntTms_3.add_attribute("StartTm", "457466649"); // 4
          EvntTms_3_set.insert("457466649");
          EvntTms_3.add_attribute("EndTm", "2069208193"); // 4
          EvntTms_3_set.insert("2069208193");
          all_values.push_back(EvntTms_3_set);
          all_compo_names.insert("EvntTms_3_set");

          EvntDts_3.add_element(EvntTms_3);
        }
        CmplxEvnt_3.add_element(EvntDts_3);
      }
      Instrmt_3.add_element(CmplxEvnt_3);
    }
    elt.add_element(Instrmt_3);
  } // end Instrmt
  { // InstrmtExt
    xml_element InstrmtExt_1{"InstrmtExt"};
    multiset<string> InstrmtExt_1_set;
    InstrmtExt_1.add_attribute("DlvryForm", "1"); // 1
    InstrmtExt_1_set.insert("1");
    InstrmtExt_1.add_attribute("PctAtRisk", "3904853.440000"); // 1
    InstrmtExt_1_set.insert("3904853.440000");
    all_values.push_back(InstrmtExt_1_set);
    all_compo_names.insert("InstrmtExt_1_set");

    {
      xml_element Attrb_1{"Attrb"};
      multiset<string> Attrb_1_set;
      Attrb_1.add_attribute("Typ", "7"); // 2
      Attrb_1_set.insert("7");
      Attrb_1.add_attribute("Val", "InstrAttribValue_t_329097094"); // 2
      Attrb_1_set.insert("InstrAttribValue_t_329097094");
      all_values.push_back(Attrb_1_set);
      all_compo_names.insert("Attrb_1_set");

      InstrmtExt_1.add_element(Attrb_1);
    }
    elt.add_element(InstrmtExt_1);
  } // end InstrmtExt
  { // FinDetls
    xml_element FinDetls_1{"FinDetls"};
    multiset<string> FinDetls_1_set;
    FinDetls_1.add_attribute("AgmtDesc", "AgreementDesc_t_593295313"); // 1
    FinDetls_1_set.insert("AgreementDesc_t_593295313");
    FinDetls_1.add_attribute("AgmtID", "AgreementID_t_1809011936"); // 1
    FinDetls_1_set.insert("AgreementID_t_1809011936");
    FinDetls_1.add_attribute("AgmtDt", "AgreementDate_t_350548935"); // 1
    FinDetls_1_set.insert("AgreementDate_t_350548935");
    FinDetls_1.add_attribute("AgmtCcy", "EUR"); // 1
    FinDetls_1_set.insert("EUR");
    FinDetls_1.add_attribute("TrmTyp", "3"); // 1
    FinDetls_1_set.insert("3");
    FinDetls_1.add_attribute("StartDt", "StartDate_t_468243364"); // 1
    FinDetls_1_set.insert("StartDate_t_468243364");
    FinDetls_1.add_attribute("EndDt", "EndDate_t_961358693"); // 1
    FinDetls_1_set.insert("EndDate_t_961358693");
    FinDetls_1.add_attribute("DlvryTyp", "2"); // 1
    FinDetls_1_set.insert("2");
    FinDetls_1.add_attribute("MgnRatio", "18633565.190000"); // 1
    FinDetls_1_set.insert("18633565.190000");
    all_values.push_back(FinDetls_1_set);
    all_compo_names.insert("FinDetls_1_set");

    elt.add_element(FinDetls_1);
  } // end FinDetls
  { // Undly
    xml_element Undly_3{"Undly"};
    multiset<string> Undly_3_set;
    Undly_3.add_attribute("Sym", "UnderlyingSymbol_t_605036031"); // 1
    Undly_3_set.insert("UnderlyingSymbol_t_605036031");
    Undly_3.add_attribute("Sfx", "WI"); // 1
    Undly_3_set.insert("WI");
    Undly_3.add_attribute("ID", "UnderlyingSecurityID_t_982119233"); // 1
    Undly_3_set.insert("UnderlyingSecurityID_t_982119233");
    Undly_3.add_attribute("Src", "D"); // 1
    Undly_3_set.insert("D");
    Undly_3.add_attribute("Prod", "5"); // 1
    Undly_3_set.insert("5");
    Undly_3.add_attribute("CFI", "UnderlyingCFICode_t_738661850"); // 1
    Undly_3_set.insert("UnderlyingCFICode_t_738661850");
    Undly_3.add_attribute("SecTyp", "BRIDGE"); // 1
    Undly_3_set.insert("BRIDGE");
    Undly_3.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_453868775"); // 1
    Undly_3_set.insert("UnderlyingSecuritySubType_t_453868775");
    Undly_3.add_attribute("MMY", "371679382"); // 1
    Undly_3_set.insert("371679382");
    Undly_3.add_attribute("Mat", "UnderlyingMaturityDate_t_176362966"); // 1
    Undly_3_set.insert("UnderlyingMaturityDate_t_176362966");
    Undly_3.add_attribute("MatTm", "78001589"); // 1
    Undly_3_set.insert("78001589");
    Undly_3.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2011972791"); // 1
    Undly_3_set.insert("UnderlyingCouponPaymentDate_t_2011972791");
    Undly_3.add_attribute("RestrctTyp", "MM"); // 1
    Undly_3_set.insert("MM");
    Undly_3.add_attribute("Snrty", "SR"); // 1
    Undly_3_set.insert("SR");
    Undly_3.add_attribute("NotlPctOut", "3219557.920000"); // 1
    Undly_3_set.insert("3219557.920000");
    Undly_3.add_attribute("OrigNotlPctOut", "14857093.070000"); // 1
    Undly_3_set.insert("14857093.070000");
    Undly_3.add_attribute("AttchPnt", "2835078.590000"); // 1
    Undly_3_set.insert("2835078.590000");
    Undly_3.add_attribute("DetchPnt", "7124411.360000"); // 1
    Undly_3_set.insert("7124411.360000");
    Undly_3.add_attribute("Issued", "UnderlyingIssueDate_t_512959318"); // 1
    Undly_3_set.insert("UnderlyingIssueDate_t_512959318");
    Undly_3.add_attribute("RepoCollSecTyp", "612604953"); // 1
    Undly_3_set.insert("612604953");
    Undly_3.add_attribute("RepoTrm", "1305736449"); // 1
    Undly_3_set.insert("1305736449");
    Undly_3.add_attribute("RepoRt", "1744876.060000"); // 1
    Undly_3_set.insert("1744876.060000");
    Undly_3.add_attribute("Fctr", "9631538.890000"); // 1
    Undly_3_set.insert("9631538.890000");
    Undly_3.add_attribute("CrdRtg", "UnderlyingCreditRating_t_645447415"); // 1
    Undly_3_set.insert("UnderlyingCreditRating_t_645447415");
    Undly_3.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1083532205"); // 1
    Undly_3_set.insert("UnderlyingInstrRegistry_t_1083532205");
    Undly_3.add_attribute("Ctry", "2129899899"); // 1
    Undly_3_set.insert("2129899899");
    Undly_3.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1113690779"); // 1
    Undly_3_set.insert("UnderlyingStateOrProvinceOfIssue_t_1113690779");
    Undly_3.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_2044890899"); // 1
    Undly_3_set.insert("UnderlyingLocaleOfIssue_t_2044890899");
    Undly_3.add_attribute("Redeem", "UnderlyingRedemptionDate_t_2095435085"); // 1
    Undly_3_set.insert("UnderlyingRedemptionDate_t_2095435085");
    Undly_3.add_attribute("StrkPx", "8295636.500000"); // 1
    Undly_3_set.insert("8295636.500000");
    Undly_3.add_attribute("StrkCcy", "USD"); // 1
    Undly_3_set.insert("USD");
    Undly_3.add_attribute("OptA", "1266584305"); // 1
    Undly_3_set.insert("1266584305");
    Undly_3.add_attribute("Mult", "10838037.270000"); // 1
    Undly_3_set.insert("10838037.270000");
    Undly_3.add_attribute("MultTyp", "2"); // 1
    Undly_3_set.insert("2");
    Undly_3.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_3_set.insert("4");
    Undly_3.add_attribute("UOM", "Bcf"); // 1
    Undly_3_set.insert("Bcf");
    Undly_3.add_attribute("UOMQty", "17761851.210000"); // 1
    Undly_3_set.insert("17761851.210000");
    Undly_3.add_attribute("PxUOM", "MMbbl"); // 1
    Undly_3_set.insert("MMbbl");
    Undly_3.add_attribute("PxUOMQty", "466613.110000"); // 1
    Undly_3_set.insert("466613.110000");
    Undly_3.add_attribute("TmUnit", "Min"); // 1
    Undly_3_set.insert("Min");
    Undly_3.add_attribute("ExerStyle", "0"); // 1
    Undly_3_set.insert("0");
    Undly_3.add_attribute("CpnRt", "20586341.020000"); // 1
    Undly_3_set.insert("20586341.020000");
    Undly_3.add_attribute("Exch", "UnderlyingSecurityExchange_t_1369049202"); // 1
    Undly_3_set.insert("UnderlyingSecurityExchange_t_1369049202");
    Undly_3.add_attribute("Issr", "UnderlyingIssuer_t_1925238934"); // 1
    Undly_3_set.insert("UnderlyingIssuer_t_1925238934");
    Undly_3.add_attribute("EncUndIssrLen", "233106246"); // 1
    Undly_3_set.insert("233106246");
    Undly_3.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_707274861"); // 1
    Undly_3_set.insert("EncodedUnderlyingIssuer_t_707274861");
    Undly_3.add_attribute("Desc", "UnderlyingSecurityDesc_t_61263145"); // 1
    Undly_3_set.insert("UnderlyingSecurityDesc_t_61263145");
    Undly_3.add_attribute("EncUndSecDescLen", "945547383"); // 1
    Undly_3_set.insert("945547383");
    Undly_3.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1220234180"); // 1
    Undly_3_set.insert("EncodedUnderlyingSecurityDesc_t_1220234180");
    Undly_3.add_attribute("CPPgm", "UnderlyingCPProgram_t_673868099"); // 1
    Undly_3_set.insert("UnderlyingCPProgram_t_673868099");
    Undly_3.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_103800184"); // 1
    Undly_3_set.insert("UnderlyingCPRegType_t_103800184");
    Undly_3.add_attribute("AllocPct", "13947217.860000"); // 1
    Undly_3_set.insert("13947217.860000");
    Undly_3.add_attribute("Ccy", "CAN"); // 1
    Undly_3_set.insert("CAN");
    Undly_3.add_attribute("Qty", "3307703.440000"); // 1
    Undly_3_set.insert("3307703.440000");
    Undly_3.add_attribute("SettlTyp", "4"); // 1
    Undly_3_set.insert("4");
    Undly_3.add_attribute("CashAmt", "UnderlyingCashAmount_t_1862938378"); // 1
    Undly_3_set.insert("UnderlyingCashAmount_t_1862938378");
    Undly_3.add_attribute("CashTyp", "DIFF"); // 1
    Undly_3_set.insert("DIFF");
    Undly_3.add_attribute("Px", "15673896.760000"); // 1
    Undly_3_set.insert("15673896.760000");
    Undly_3.add_attribute("DirtPx", "5450183.810000"); // 1
    Undly_3_set.insert("5450183.810000");
    Undly_3.add_attribute("EndPx", "3298620.880000"); // 1
    Undly_3_set.insert("3298620.880000");
    Undly_3.add_attribute("StartVal", "UnderlyingStartValue_t_2120377144"); // 1
    Undly_3_set.insert("UnderlyingStartValue_t_2120377144");
    Undly_3.add_attribute("CurVal", "UnderlyingCurrentValue_t_1811602686"); // 1
    Undly_3_set.insert("UnderlyingCurrentValue_t_1811602686");
    Undly_3.add_attribute("EndVal", "UnderlyingEndValue_t_1413665815"); // 1
    Undly_3_set.insert("UnderlyingEndValue_t_1413665815");
    Undly_3.add_attribute("AdjQty", "5760171.290000"); // 1
    Undly_3_set.insert("5760171.290000");
    Undly_3.add_attribute("FxRate", "6300386.130000"); // 1
    Undly_3_set.insert("6300386.130000");
    Undly_3.add_attribute("FxRateCalc", "M"); // 1
    Undly_3_set.insert("M");
    Undly_3.add_attribute("CapValu", "UnderlyingCapValue_t_204718602"); // 1
    Undly_3_set.insert("UnderlyingCapValue_t_204718602");
    Undly_3.add_attribute("SetMeth", "UnderlyingSettlMethod_t_2049826963"); // 1
    Undly_3_set.insert("UnderlyingSettlMethod_t_2049826963");
    Undly_3.add_attribute("PutCall", "1135309056"); // 1
    Undly_3_set.insert("1135309056");
    all_values.push_back(Undly_3_set);
    all_compo_names.insert("Undly_3_set");

    {
      xml_element UndAID_3{"UndAID"};
      multiset<string> UndAID_3_set;
      UndAID_3.add_attribute("AltID", "UnderlyingSecurityAltID_t_9783042"); // 2
      UndAID_3_set.insert("UnderlyingSecurityAltID_t_9783042");
      UndAID_3.add_attribute("AltIDSrc", "F"); // 2
      UndAID_3_set.insert("F");
      all_values.push_back(UndAID_3_set);
      all_compo_names.insert("UndAID_3_set");

      Undly_3.add_element(UndAID_3);
    }
    {
      xml_element Stip_6{"Stip"};
      multiset<string> Stip_6_set;
      Stip_6.add_attribute("Typ", "INTERNALPX"); // 2
      Stip_6_set.insert("INTERNALPX");
      Stip_6.add_attribute("Val", "UnderlyingStipValue_t_1378832244"); // 2
      Stip_6_set.insert("UnderlyingStipValue_t_1378832244");
      all_values.push_back(Stip_6_set);
      all_compo_names.insert("Stip_6_set");

      Undly_3.add_element(Stip_6);
    }
    {
      xml_element Pty_23{"Pty"};
      multiset<string> Pty_23_set;
      Pty_23.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1177888540"); // 2
      Pty_23_set.insert("UnderlyingInstrumentPartyID_t_1177888540");
      Pty_23.add_attribute("Src", "A"); // 2
      Pty_23_set.insert("A");
      Pty_23.add_attribute("R", "7"); // 2
      Pty_23_set.insert("7");
      all_values.push_back(Pty_23_set);
      all_compo_names.insert("Pty_23_set");

      {
        xml_element Sub_23{"Sub"};
        multiset<string> Sub_23_set;
        Sub_23.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1239151685"); // 3
        Sub_23_set.insert("UnderlyingInstrumentPartySubID_t_1239151685");
        Sub_23.add_attribute("Typ", "29"); // 3
        Sub_23_set.insert("29");
        all_values.push_back(Sub_23_set);
        all_compo_names.insert("Sub_23_set");

        Pty_23.add_element(Sub_23);
      }
      Undly_3.add_element(Pty_23);
    }
    elt.add_element(Undly_3);
  } // end Undly
  { // Leg
    xml_element Leg_4{"Leg"};
    multiset<string> Leg_4_set;
    Leg_4.add_attribute("Sym", "LegSymbol_t_1913019784"); // 1
    Leg_4_set.insert("LegSymbol_t_1913019784");
    Leg_4.add_attribute("Sfx", "CD"); // 1
    Leg_4_set.insert("CD");
    Leg_4.add_attribute("ID", "LegSecurityID_t_406095776"); // 1
    Leg_4_set.insert("LegSecurityID_t_406095776");
    Leg_4.add_attribute("Src", "1"); // 1
    Leg_4_set.insert("1");
    Leg_4.add_attribute("Prod", "6"); // 1
    Leg_4_set.insert("6");
    Leg_4.add_attribute("CFI", "LegCFICode_t_736866120"); // 1
    Leg_4_set.insert("LegCFICode_t_736866120");
    Leg_4.add_attribute("SecTyp", "TNOTE"); // 1
    Leg_4_set.insert("TNOTE");
    Leg_4.add_attribute("SecSubTyp", "LegSecuritySubType_t_646132006"); // 1
    Leg_4_set.insert("LegSecuritySubType_t_646132006");
    Leg_4.add_attribute("MMY", "965043715"); // 1
    Leg_4_set.insert("965043715");
    Leg_4.add_attribute("Mat", "LegMaturityDate_t_294418743"); // 1
    Leg_4_set.insert("LegMaturityDate_t_294418743");
    Leg_4.add_attribute("MatTm", "1191150387"); // 1
    Leg_4_set.insert("1191150387");
    Leg_4.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1294905804"); // 1
    Leg_4_set.insert("LegCouponPaymentDate_t_1294905804");
    Leg_4.add_attribute("Issued", "LegIssueDate_t_267312240"); // 1
    Leg_4_set.insert("LegIssueDate_t_267312240");
    Leg_4.add_attribute("RepoCollSecTyp", "855269426"); // 1
    Leg_4_set.insert("855269426");
    Leg_4.add_attribute("RepoTrm", "561087971"); // 1
    Leg_4_set.insert("561087971");
    Leg_4.add_attribute("RepoRt", "8433293.690000"); // 1
    Leg_4_set.insert("8433293.690000");
    Leg_4.add_attribute("Fctr", "14853080.390000"); // 1
    Leg_4_set.insert("14853080.390000");
    Leg_4.add_attribute("CrdRtg", "LegCreditRating_t_1649735716"); // 1
    Leg_4_set.insert("LegCreditRating_t_1649735716");
    Leg_4.add_attribute("Rgstry", "LegInstrRegistry_t_1048047971"); // 1
    Leg_4_set.insert("LegInstrRegistry_t_1048047971");
    Leg_4.add_attribute("Ctry", "1387651354"); // 1
    Leg_4_set.insert("1387651354");
    Leg_4.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_637561124"); // 1
    Leg_4_set.insert("LegStateOrProvinceOfIssue_t_637561124");
    Leg_4.add_attribute("Lcl", "LegLocaleOfIssue_t_1057831014"); // 1
    Leg_4_set.insert("LegLocaleOfIssue_t_1057831014");
    Leg_4.add_attribute("Redeem", "LegRedemptionDate_t_640300960"); // 1
    Leg_4_set.insert("LegRedemptionDate_t_640300960");
    Leg_4.add_attribute("Strk", "16840206.340000"); // 1
    Leg_4_set.insert("16840206.340000");
    Leg_4.add_attribute("StrkCcy", "GBP"); // 1
    Leg_4_set.insert("GBP");
    Leg_4.add_attribute("OptA", "816102743"); // 1
    Leg_4_set.insert("816102743");
    Leg_4.add_attribute("Cmult", "2278030.680000"); // 1
    Leg_4_set.insert("2278030.680000");
    Leg_4.add_attribute("MultTyp", "2"); // 1
    Leg_4_set.insert("2");
    Leg_4.add_attribute("FlowSchedTyp", "0"); // 1
    Leg_4_set.insert("0");
    Leg_4.add_attribute("UOM", "Bbl"); // 1
    Leg_4_set.insert("Bbl");
    Leg_4.add_attribute("UOMQty", "6753936.740000"); // 1
    Leg_4_set.insert("6753936.740000");
    Leg_4.add_attribute("PxUOM", "MMbbl"); // 1
    Leg_4_set.insert("MMbbl");
    Leg_4.add_attribute("PxUOMQty", "17927564.830000"); // 1
    Leg_4_set.insert("17927564.830000");
    Leg_4.add_attribute("TmUnit", "Yr"); // 1
    Leg_4_set.insert("Yr");
    Leg_4.add_attribute("ExerStyle", "2"); // 1
    Leg_4_set.insert("2");
    Leg_4.add_attribute("CpnRt", "3821389.550000"); // 1
    Leg_4_set.insert("3821389.550000");
    Leg_4.add_attribute("Exch", "LegSecurityExchange_t_804980866"); // 1
    Leg_4_set.insert("LegSecurityExchange_t_804980866");
    Leg_4.add_attribute("Issr", "LegIssuer_t_504487546"); // 1
    Leg_4_set.insert("LegIssuer_t_504487546");
    Leg_4.add_attribute("EncLegIssrLen", "1347182671"); // 1
    Leg_4_set.insert("1347182671");
    Leg_4.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1099399609"); // 1
    Leg_4_set.insert("EncodedLegIssuer_t_1099399609");
    Leg_4.add_attribute("Desc", "LegSecurityDesc_t_1695637934"); // 1
    Leg_4_set.insert("LegSecurityDesc_t_1695637934");
    Leg_4.add_attribute("EncLegSecDescLen", "494604827"); // 1
    Leg_4_set.insert("494604827");
    Leg_4.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1366711849"); // 1
    Leg_4_set.insert("EncodedLegSecurityDesc_t_1366711849");
    Leg_4.add_attribute("RatioQty", "4034237.120000"); // 1
    Leg_4_set.insert("4034237.120000");
    Leg_4.add_attribute("Side", "F"); // 1
    Leg_4_set.insert("F");
    Leg_4.add_attribute("Ccy", "EUR"); // 1
    Leg_4_set.insert("EUR");
    Leg_4.add_attribute("Pool", "LegPool_t_557944866"); // 1
    Leg_4_set.insert("LegPool_t_557944866");
    Leg_4.add_attribute("Dated", "LegDatedDate_t_1110605542"); // 1
    Leg_4_set.insert("LegDatedDate_t_1110605542");
    Leg_4.add_attribute("CSetMo", "1128899457"); // 1
    Leg_4_set.insert("1128899457");
    Leg_4.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1195505990"); // 1
    Leg_4_set.insert("LegInterestAccrualDate_t_1195505990");
    Leg_4.add_attribute("PutCall", "20952908"); // 1
    Leg_4_set.insert("20952908");
    Leg_4.add_attribute("LegOptionRatio", "17692004.170000"); // 1
    Leg_4_set.insert("17692004.170000");
    Leg_4.add_attribute("Px", "7320429.770000"); // 1
    Leg_4_set.insert("7320429.770000");
    all_values.push_back(Leg_4_set);
    all_compo_names.insert("Leg_4_set");

    {
      xml_element LegAID_4{"LegAID"};
      multiset<string> LegAID_4_set;
      LegAID_4.add_attribute("SecAltID", "LegSecurityAltID_t_310132518"); // 2
      LegAID_4_set.insert("LegSecurityAltID_t_310132518");
      LegAID_4.add_attribute("SecAltIDSrc", "M"); // 2
      LegAID_4_set.insert("M");
      all_values.push_back(LegAID_4_set);
      all_compo_names.insert("LegAID_4_set");

      Leg_4.add_element(LegAID_4);
    }
    elt.add_element(Leg_4);
  } // end Leg
  { // Leg
    xml_element Leg_5{"Leg"};
    multiset<string> Leg_5_set;
    Leg_5.add_attribute("Sym", "LegSymbol_t_1548145720"); // 1
    Leg_5_set.insert("LegSymbol_t_1548145720");
    Leg_5.add_attribute("Sfx", "WI"); // 1
    Leg_5_set.insert("WI");
    Leg_5.add_attribute("ID", "LegSecurityID_t_202280158"); // 1
    Leg_5_set.insert("LegSecurityID_t_202280158");
    Leg_5.add_attribute("Src", "B"); // 1
    Leg_5_set.insert("B");
    Leg_5.add_attribute("Prod", "6"); // 1
    Leg_5_set.insert("6");
    Leg_5.add_attribute("CFI", "LegCFICode_t_877673832"); // 1
    Leg_5_set.insert("LegCFICode_t_877673832");
    Leg_5.add_attribute("SecTyp", "TBOND"); // 1
    Leg_5_set.insert("TBOND");
    Leg_5.add_attribute("SecSubTyp", "LegSecuritySubType_t_1569869128"); // 1
    Leg_5_set.insert("LegSecuritySubType_t_1569869128");
    Leg_5.add_attribute("MMY", "808141983"); // 1
    Leg_5_set.insert("808141983");
    Leg_5.add_attribute("Mat", "LegMaturityDate_t_1227911760"); // 1
    Leg_5_set.insert("LegMaturityDate_t_1227911760");
    Leg_5.add_attribute("MatTm", "1952008084"); // 1
    Leg_5_set.insert("1952008084");
    Leg_5.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1613122849"); // 1
    Leg_5_set.insert("LegCouponPaymentDate_t_1613122849");
    Leg_5.add_attribute("Issued", "LegIssueDate_t_1732399306"); // 1
    Leg_5_set.insert("LegIssueDate_t_1732399306");
    Leg_5.add_attribute("RepoCollSecTyp", "1151707107"); // 1
    Leg_5_set.insert("1151707107");
    Leg_5.add_attribute("RepoTrm", "565038810"); // 1
    Leg_5_set.insert("565038810");
    Leg_5.add_attribute("RepoRt", "12805535.920000"); // 1
    Leg_5_set.insert("12805535.920000");
    Leg_5.add_attribute("Fctr", "16463119.340000"); // 1
    Leg_5_set.insert("16463119.340000");
    Leg_5.add_attribute("CrdRtg", "LegCreditRating_t_1931750660"); // 1
    Leg_5_set.insert("LegCreditRating_t_1931750660");
    Leg_5.add_attribute("Rgstry", "LegInstrRegistry_t_1683977304"); // 1
    Leg_5_set.insert("LegInstrRegistry_t_1683977304");
    Leg_5.add_attribute("Ctry", "554521084"); // 1
    Leg_5_set.insert("554521084");
    Leg_5.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1994308230"); // 1
    Leg_5_set.insert("LegStateOrProvinceOfIssue_t_1994308230");
    Leg_5.add_attribute("Lcl", "LegLocaleOfIssue_t_1425225407"); // 1
    Leg_5_set.insert("LegLocaleOfIssue_t_1425225407");
    Leg_5.add_attribute("Redeem", "LegRedemptionDate_t_1112465951"); // 1
    Leg_5_set.insert("LegRedemptionDate_t_1112465951");
    Leg_5.add_attribute("Strk", "9574301.240000"); // 1
    Leg_5_set.insert("9574301.240000");
    Leg_5.add_attribute("StrkCcy", "CAN"); // 1
    Leg_5_set.insert("CAN");
    Leg_5.add_attribute("OptA", "978383032"); // 1
    Leg_5_set.insert("978383032");
    Leg_5.add_attribute("Cmult", "283579.850000"); // 1
    Leg_5_set.insert("283579.850000");
    Leg_5.add_attribute("MultTyp", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("FlowSchedTyp", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("UOM", "Bbl"); // 1
    Leg_5_set.insert("Bbl");
    Leg_5.add_attribute("UOMQty", "2931933.430000"); // 1
    Leg_5_set.insert("2931933.430000");
    Leg_5.add_attribute("PxUOM", "tn"); // 1
    Leg_5_set.insert("tn");
    Leg_5.add_attribute("PxUOMQty", "16705444.130000"); // 1
    Leg_5_set.insert("16705444.130000");
    Leg_5.add_attribute("TmUnit", "S"); // 1
    Leg_5_set.insert("S");
    Leg_5.add_attribute("ExerStyle", "0"); // 1
    Leg_5_set.insert("0");
    Leg_5.add_attribute("CpnRt", "4007345.970000"); // 1
    Leg_5_set.insert("4007345.970000");
    Leg_5.add_attribute("Exch", "LegSecurityExchange_t_1957143871"); // 1
    Leg_5_set.insert("LegSecurityExchange_t_1957143871");
    Leg_5.add_attribute("Issr", "LegIssuer_t_1025949264"); // 1
    Leg_5_set.insert("LegIssuer_t_1025949264");
    Leg_5.add_attribute("EncLegIssrLen", "1208876580"); // 1
    Leg_5_set.insert("1208876580");
    Leg_5.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1037571983"); // 1
    Leg_5_set.insert("EncodedLegIssuer_t_1037571983");
    Leg_5.add_attribute("Desc", "LegSecurityDesc_t_830473700"); // 1
    Leg_5_set.insert("LegSecurityDesc_t_830473700");
    Leg_5.add_attribute("EncLegSecDescLen", "674515781"); // 1
    Leg_5_set.insert("674515781");
    Leg_5.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_622487641"); // 1
    Leg_5_set.insert("EncodedLegSecurityDesc_t_622487641");
    Leg_5.add_attribute("RatioQty", "19821808.070000"); // 1
    Leg_5_set.insert("19821808.070000");
    Leg_5.add_attribute("Side", "1"); // 1
    Leg_5_set.insert("1");
    Leg_5.add_attribute("Ccy", "CAN"); // 1
    Leg_5_set.insert("CAN");
    Leg_5.add_attribute("Pool", "LegPool_t_1023821604"); // 1
    Leg_5_set.insert("LegPool_t_1023821604");
    Leg_5.add_attribute("Dated", "LegDatedDate_t_1439534890"); // 1
    Leg_5_set.insert("LegDatedDate_t_1439534890");
    Leg_5.add_attribute("CSetMo", "2035530177"); // 1
    Leg_5_set.insert("2035530177");
    Leg_5.add_attribute("IntAcrl", "LegInterestAccrualDate_t_870646186"); // 1
    Leg_5_set.insert("LegInterestAccrualDate_t_870646186");
    Leg_5.add_attribute("PutCall", "717276650"); // 1
    Leg_5_set.insert("717276650");
    Leg_5.add_attribute("LegOptionRatio", "10005124.800000"); // 1
    Leg_5_set.insert("10005124.800000");
    Leg_5.add_attribute("Px", "18280763.110000"); // 1
    Leg_5_set.insert("18280763.110000");
    all_values.push_back(Leg_5_set);
    all_compo_names.insert("Leg_5_set");

    {
      xml_element LegAID_5{"LegAID"};
      multiset<string> LegAID_5_set;
      LegAID_5.add_attribute("SecAltID", "LegSecurityAltID_t_1123917866"); // 2
      LegAID_5_set.insert("LegSecurityAltID_t_1123917866");
      LegAID_5.add_attribute("SecAltIDSrc", "B"); // 2
      LegAID_5_set.insert("B");
      all_values.push_back(LegAID_5_set);
      all_compo_names.insert("LegAID_5_set");

      Leg_5.add_element(LegAID_5);
    }
    elt.add_element(Leg_5);
  } // end Leg
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_1{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_1_set;
    SprdBnchmkCurve_1.add_attribute("Spread", "6589756.950000"); // 1
    SprdBnchmkCurve_1_set.insert("6589756.950000");
    SprdBnchmkCurve_1.add_attribute("Ccy", "JPY"); // 1
    SprdBnchmkCurve_1_set.insert("JPY");
    SprdBnchmkCurve_1.add_attribute("Name", "Euribor"); // 1
    SprdBnchmkCurve_1_set.insert("Euribor");
    SprdBnchmkCurve_1.add_attribute("Point", "BenchmarkCurvePoint_t_473056458"); // 1
    SprdBnchmkCurve_1_set.insert("BenchmarkCurvePoint_t_473056458");
    SprdBnchmkCurve_1.add_attribute("Px", "1992417.390000"); // 1
    SprdBnchmkCurve_1_set.insert("1992417.390000");
    SprdBnchmkCurve_1.add_attribute("PxTyp", "14"); // 1
    SprdBnchmkCurve_1_set.insert("14");
    SprdBnchmkCurve_1.add_attribute("SecID", "BenchmarkSecurityID_t_2143600871"); // 1
    SprdBnchmkCurve_1_set.insert("BenchmarkSecurityID_t_2143600871");
    SprdBnchmkCurve_1.add_attribute("SecIDSrc", "7"); // 1
    SprdBnchmkCurve_1_set.insert("7");
    all_values.push_back(SprdBnchmkCurve_1_set);
    all_compo_names.insert("SprdBnchmkCurve_1_set");

    elt.add_element(SprdBnchmkCurve_1);
  } // end SprdBnchmkCurve
  { // Pty
    xml_element Pty_24{"Pty"};
    multiset<string> Pty_24_set;
    Pty_24.add_attribute("ID", "PartyID_t_396851821"); // 1
    Pty_24_set.insert("PartyID_t_396851821");
    Pty_24.add_attribute("Src", "G"); // 1
    Pty_24_set.insert("G");
    Pty_24.add_attribute("R", "29"); // 1
    Pty_24_set.insert("29");
    all_values.push_back(Pty_24_set);
    all_compo_names.insert("Pty_24_set");

    {
      xml_element Sub_24{"Sub"};
      multiset<string> Sub_24_set;
      Sub_24.add_attribute("ID", "PartySubID_t_1605728401"); // 2
      Sub_24_set.insert("PartySubID_t_1605728401");
      Sub_24.add_attribute("Typ", "11"); // 2
      Sub_24_set.insert("11");
      all_values.push_back(Sub_24_set);
      all_compo_names.insert("Sub_24_set");

      Pty_24.add_element(Sub_24);
    }
    elt.add_element(Pty_24);
  } // end Pty
  { // Pty
    xml_element Pty_25{"Pty"};
    multiset<string> Pty_25_set;
    Pty_25.add_attribute("ID", "PartyID_t_791478188"); // 1
    Pty_25_set.insert("PartyID_t_791478188");
    Pty_25.add_attribute("Src", "6"); // 1
    Pty_25_set.insert("6");
    Pty_25.add_attribute("R", "76"); // 1
    Pty_25_set.insert("76");
    all_values.push_back(Pty_25_set);
    all_compo_names.insert("Pty_25_set");

    {
      xml_element Sub_25{"Sub"};
      multiset<string> Sub_25_set;
      Sub_25.add_attribute("ID", "PartySubID_t_626175347"); // 2
      Sub_25_set.insert("PartySubID_t_626175347");
      Sub_25.add_attribute("Typ", "30"); // 2
      Sub_25_set.insert("30");
      all_values.push_back(Sub_25_set);
      all_compo_names.insert("Sub_25_set");

      Pty_25.add_element(Sub_25);
    }
    elt.add_element(Pty_25);
  } // end Pty
  { // Pty
    xml_element Pty_26{"Pty"};
    multiset<string> Pty_26_set;
    Pty_26.add_attribute("ID", "PartyID_t_2012106824"); // 1
    Pty_26_set.insert("PartyID_t_2012106824");
    Pty_26.add_attribute("Src", "5"); // 1
    Pty_26_set.insert("5");
    Pty_26.add_attribute("R", "65"); // 1
    Pty_26_set.insert("65");
    all_values.push_back(Pty_26_set);
    all_compo_names.insert("Pty_26_set");

    {
      xml_element Sub_26{"Sub"};
      multiset<string> Sub_26_set;
      Sub_26.add_attribute("ID", "PartySubID_t_1304158066"); // 2
      Sub_26_set.insert("PartySubID_t_1304158066");
      Sub_26.add_attribute("Typ", "25"); // 2
      Sub_26_set.insert("25");
      all_values.push_back(Sub_26_set);
      all_compo_names.insert("Sub_26_set");

      Pty_26.add_element(Sub_26);
    }
    elt.add_element(Pty_26);
  } // end Pty
  { // Stip
    xml_element Stip_7{"Stip"};
    multiset<string> Stip_7_set;
    Stip_7.add_attribute("Typ", "SALESCREDITOVR"); // 1
    Stip_7_set.insert("SALESCREDITOVR");
    Stip_7.add_attribute("Val", "StipulationValue_t_848259802"); // 1
    Stip_7_set.insert("StipulationValue_t_848259802");
    all_values.push_back(Stip_7_set);
    all_compo_names.insert("Stip_7_set");

    elt.add_element(Stip_7);
  } // end Stip
  { // Stip
    xml_element Stip_8{"Stip"};
    multiset<string> Stip_8_set;
    Stip_8.add_attribute("Typ", "HAIRCUT"); // 1
    Stip_8_set.insert("HAIRCUT");
    Stip_8.add_attribute("Val", "StipulationValue_t_997868935"); // 1
    Stip_8_set.insert("StipulationValue_t_997868935");
    all_values.push_back(Stip_8_set);
    all_compo_names.insert("Stip_8_set");

    elt.add_element(Stip_8);
  } // end Stip
  { // Yield
    xml_element Yield_1{"Yield"};
    multiset<string> Yield_1_set;
    Yield_1.add_attribute("Typ", "GOVTEQUIV"); // 1
    Yield_1_set.insert("GOVTEQUIV");
    Yield_1.add_attribute("Yld", "14588676.280000"); // 1
    Yield_1_set.insert("14588676.280000");
    Yield_1.add_attribute("CalcDt", "YieldCalcDate_t_2661139"); // 1
    Yield_1_set.insert("YieldCalcDate_t_2661139");
    Yield_1.add_attribute("RedDt", "YieldRedemptionDate_t_1915308972"); // 1
    Yield_1_set.insert("YieldRedemptionDate_t_1915308972");
    Yield_1.add_attribute("RedPx", "12588752.260000"); // 1
    Yield_1_set.insert("12588752.260000");
    Yield_1.add_attribute("RedPxTyp", "6"); // 1
    Yield_1_set.insert("6");
    all_values.push_back(Yield_1_set);
    all_compo_names.insert("Yield_1_set");

    elt.add_element(Yield_1);
  } // end Yield
  { // Amt
    xml_element Amt_3{"Amt"};
    multiset<string> Amt_3_set;
    Amt_3.add_attribute("Typ", "IMTM"); // 1
    Amt_3_set.insert("IMTM");
    Amt_3.add_attribute("Amt", "PosAmt_t_471834821"); // 1
    Amt_3_set.insert("PosAmt_t_471834821");
    Amt_3.add_attribute("Ccy", "PositionCurrency_t_753896454"); // 1
    Amt_3_set.insert("PositionCurrency_t_753896454");
    all_values.push_back(Amt_3_set);
    all_compo_names.insert("Amt_3_set");

    elt.add_element(Amt_3);
  } // end Amt
  { // Amt
    xml_element Amt_4{"Amt"};
    multiset<string> Amt_4_set;
    Amt_4.add_attribute("Typ", "CPN"); // 1
    Amt_4_set.insert("CPN");
    Amt_4.add_attribute("Amt", "PosAmt_t_868686642"); // 1
    Amt_4_set.insert("PosAmt_t_868686642");
    Amt_4.add_attribute("Ccy", "PositionCurrency_t_1350386068"); // 1
    Amt_4_set.insert("PositionCurrency_t_1350386068");
    all_values.push_back(Amt_4_set);
    all_compo_names.insert("Amt_4_set");

    elt.add_element(Amt_4);
  } // end Amt
  { // Alloc
    xml_element Alloc_2{"Alloc"};
    multiset<string> Alloc_2_set;
    Alloc_2.add_attribute("Acct", "AllocAccount_t_326931395"); // 1
    Alloc_2_set.insert("AllocAccount_t_326931395");
    Alloc_2.add_attribute("ActIDSrc", "5"); // 1
    Alloc_2_set.insert("5");
    Alloc_2.add_attribute("MtchStat", "2"); // 1
    Alloc_2_set.insert("2");
    Alloc_2.add_attribute("Px", "4596919.300000"); // 1
    Alloc_2_set.insert("4596919.300000");
    Alloc_2.add_attribute("Qty", "9460296.060000"); // 1
    Alloc_2_set.insert("9460296.060000");
    Alloc_2.add_attribute("IndAllocID", "IndividualAllocID_t_1051563562"); // 1
    Alloc_2_set.insert("IndividualAllocID_t_1051563562");
    Alloc_2.add_attribute("ProcCode", "6"); // 1
    Alloc_2_set.insert("6");
    Alloc_2.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_810652782"); // 1
    Alloc_2_set.insert("SecondaryIndividualAllocID_t_810652782");
    Alloc_2.add_attribute("Meth", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("CustCpcty", "AllocCustomerCapacity_t_2080660140"); // 1
    Alloc_2_set.insert("AllocCustomerCapacity_t_2080660140");
    Alloc_2.add_attribute("AllocPosEfct", "C"); // 1
    Alloc_2_set.insert("C");
    Alloc_2.add_attribute("Typ", "2"); // 1
    Alloc_2_set.insert("2");
    Alloc_2.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_2_set.insert("N");
    Alloc_2.add_attribute("HandlInst", "1"); // 1
    Alloc_2_set.insert("1");
    Alloc_2.add_attribute("Txt", "AllocText_t_1707271477"); // 1
    Alloc_2_set.insert("AllocText_t_1707271477");
    Alloc_2.add_attribute("EncAllocTextLen", "1852367694"); // 1
    Alloc_2_set.insert("1852367694");
    Alloc_2.add_attribute("EncAllocText", "EncodedAllocText_t_839147204"); // 1
    Alloc_2_set.insert("EncodedAllocText_t_839147204");
    Alloc_2.add_attribute("AvgPx", "15690484.050000"); // 1
    Alloc_2_set.insert("15690484.050000");
    Alloc_2.add_attribute("NetMny", "AllocNetMoney_t_1163751674"); // 1
    Alloc_2_set.insert("AllocNetMoney_t_1163751674");
    Alloc_2.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_841808343"); // 1
    Alloc_2_set.insert("SettlCurrAmt_t_841808343");
    Alloc_2.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1336873730"); // 1
    Alloc_2_set.insert("AllocSettlCurrAmt_t_1336873730");
    Alloc_2.add_attribute("SettlCcy", "CAN"); // 1
    Alloc_2_set.insert("CAN");
    Alloc_2.add_attribute("AllocSettlCcy", "GBP"); // 1
    Alloc_2_set.insert("GBP");
    Alloc_2.add_attribute("SettlCurrFxRt", "17893607.620000"); // 1
    Alloc_2_set.insert("17893607.620000");
    Alloc_2.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_2_set.insert("M");
    Alloc_2.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_685899107"); // 1
    Alloc_2_set.insert("AllocAccruedInterestAmt_t_685899107");
    Alloc_2.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_510563756"); // 1
    Alloc_2_set.insert("AllocInterestAtMaturity_t_510563756");
    Alloc_2.add_attribute("ClrFeeInd", "B"); // 1
    Alloc_2_set.insert("B");
    Alloc_2.add_attribute("SettlInstTyp", "4"); // 1
    Alloc_2_set.insert("4");
    all_values.push_back(Alloc_2_set);
    all_compo_names.insert("Alloc_2_set");

    {
      xml_element Pty_27{"Pty"};
      multiset<string> Pty_27_set;
      Pty_27.add_attribute("ID", "NestedPartyID_t_837495151"); // 2
      Pty_27_set.insert("NestedPartyID_t_837495151");
      Pty_27.add_attribute("Src", "C"); // 2
      Pty_27_set.insert("C");
      Pty_27.add_attribute("R", "10"); // 2
      Pty_27_set.insert("10");
      all_values.push_back(Pty_27_set);
      all_compo_names.insert("Pty_27_set");

      {
        xml_element Sub_27{"Sub"};
        multiset<string> Sub_27_set;
        Sub_27.add_attribute("ID", "NestedPartySubID_t_1297187082"); // 3
        Sub_27_set.insert("NestedPartySubID_t_1297187082");
        Sub_27.add_attribute("Typ", "12"); // 3
        Sub_27_set.insert("12");
        all_values.push_back(Sub_27_set);
        all_compo_names.insert("Sub_27_set");

        Pty_27.add_element(Sub_27);
      }
      Alloc_2.add_element(Pty_27);
    }
    {
      xml_element Comm_2{"Comm"};
      multiset<string> Comm_2_set;
      Comm_2.add_attribute("Comm", "Commission_t_1796760911"); // 2
      Comm_2_set.insert("Commission_t_1796760911");
      Comm_2.add_attribute("CommTyp", "2"); // 2
      Comm_2_set.insert("2");
      Comm_2.add_attribute("Ccy", "CHF"); // 2
      Comm_2_set.insert("CHF");
      Comm_2.add_attribute("FundRenewWaiv", "N"); // 2
      Comm_2_set.insert("N");
      all_values.push_back(Comm_2_set);
      all_compo_names.insert("Comm_2_set");

      Alloc_2.add_element(Comm_2);
    }
    {
      xml_element MiscFees_2{"MiscFees"};
      multiset<string> MiscFees_2_set;
      MiscFees_2.add_attribute("Amt", "MiscFeeAmt_t_1674229627"); // 2
      MiscFees_2_set.insert("MiscFeeAmt_t_1674229627");
      MiscFees_2.add_attribute("Curr", "USD"); // 2
      MiscFees_2_set.insert("USD");
      MiscFees_2.add_attribute("Typ", "1"); // 2
      MiscFees_2_set.insert("1");
      MiscFees_2.add_attribute("Basis", "0"); // 2
      MiscFees_2_set.insert("0");
      all_values.push_back(MiscFees_2_set);
      all_compo_names.insert("MiscFees_2_set");

      Alloc_2.add_element(MiscFees_2);
    }
    {
      xml_element ClrInst_2{"ClrInst"};
      multiset<string> ClrInst_2_set;
      ClrInst_2.add_attribute("ClrngInstrctn", "2"); // 2
      ClrInst_2_set.insert("2");
      all_values.push_back(ClrInst_2_set);
      all_compo_names.insert("ClrInst_2_set");

      Alloc_2.add_element(ClrInst_2);
    }
    {
      xml_element SetInstr_2{"SetInstr"};
      multiset<string> SetInstr_2_set;
      SetInstr_2.add_attribute("DlvryTyp", "1"); // 2
      SetInstr_2_set.insert("1");
      SetInstr_2.add_attribute("StandInstDbTyp", "4"); // 2
      SetInstr_2_set.insert("4");
      SetInstr_2.add_attribute("StandInstDbName", "StandInstDbName_t_688514819"); // 2
      SetInstr_2_set.insert("StandInstDbName_t_688514819");
      SetInstr_2.add_attribute("StandInstDbID", "StandInstDbID_t_1048979796"); // 2
      SetInstr_2_set.insert("StandInstDbID_t_1048979796");
      all_values.push_back(SetInstr_2_set);
      all_compo_names.insert("SetInstr_2_set");

      {
        xml_element DlvInst_2{"DlvInst"};
        multiset<string> DlvInst_2_set;
        DlvInst_2.add_attribute("InstSrc", "1"); // 3
        DlvInst_2_set.insert("1");
        DlvInst_2.add_attribute("InstTyp", "C"); // 3
        DlvInst_2_set.insert("C");
        all_values.push_back(DlvInst_2_set);
        all_compo_names.insert("DlvInst_2_set");

        {
          xml_element Pty_28{"Pty"};
          multiset<string> Pty_28_set;
          Pty_28.add_attribute("ID", "SettlPartyID_t_219022089"); // 4
          Pty_28_set.insert("SettlPartyID_t_219022089");
          Pty_28.add_attribute("Src", "6"); // 4
          Pty_28_set.insert("6");
          Pty_28.add_attribute("R", "20"); // 4
          Pty_28_set.insert("20");
          all_values.push_back(Pty_28_set);
          all_compo_names.insert("Pty_28_set");

          {
            xml_element Sub_28{"Sub"};
            multiset<string> Sub_28_set;
            Sub_28.add_attribute("ID", "SettlPartySubID_t_2008382851"); // 5
            Sub_28_set.insert("SettlPartySubID_t_2008382851");
            Sub_28.add_attribute("Typ", "33"); // 5
            Sub_28_set.insert("33");
            all_values.push_back(Sub_28_set);
            all_compo_names.insert("Sub_28_set");

            Pty_28.add_element(Sub_28);
          }
          DlvInst_2.add_element(Pty_28);
        }
        SetInstr_2.add_element(DlvInst_2);
      }
      Alloc_2.add_element(SetInstr_2);
    }
    elt.add_element(Alloc_2);
  } // end Alloc
  { // Alloc
    xml_element Alloc_3{"Alloc"};
    multiset<string> Alloc_3_set;
    Alloc_3.add_attribute("Acct", "AllocAccount_t_515067099"); // 1
    Alloc_3_set.insert("AllocAccount_t_515067099");
    Alloc_3.add_attribute("ActIDSrc", "2"); // 1
    Alloc_3_set.insert("2");
    Alloc_3.add_attribute("MtchStat", "0"); // 1
    Alloc_3_set.insert("0");
    Alloc_3.add_attribute("Px", "8348762.330000"); // 1
    Alloc_3_set.insert("8348762.330000");
    Alloc_3.add_attribute("Qty", "12089581.110000"); // 1
    Alloc_3_set.insert("12089581.110000");
    Alloc_3.add_attribute("IndAllocID", "IndividualAllocID_t_2115550061"); // 1
    Alloc_3_set.insert("IndividualAllocID_t_2115550061");
    Alloc_3.add_attribute("ProcCode", "3"); // 1
    Alloc_3_set.insert("3");
    Alloc_3.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_358661545"); // 1
    Alloc_3_set.insert("SecondaryIndividualAllocID_t_358661545");
    Alloc_3.add_attribute("Meth", "2"); // 1
    Alloc_3_set.insert("2");
    Alloc_3.add_attribute("CustCpcty", "AllocCustomerCapacity_t_1229350845"); // 1
    Alloc_3_set.insert("AllocCustomerCapacity_t_1229350845");
    Alloc_3.add_attribute("AllocPosEfct", "O"); // 1
    Alloc_3_set.insert("O");
    Alloc_3.add_attribute("Typ", "2"); // 1
    Alloc_3_set.insert("2");
    Alloc_3.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_3_set.insert("N");
    Alloc_3.add_attribute("HandlInst", "1"); // 1
    Alloc_3_set.insert("1");
    Alloc_3.add_attribute("Txt", "AllocText_t_2097964462"); // 1
    Alloc_3_set.insert("AllocText_t_2097964462");
    Alloc_3.add_attribute("EncAllocTextLen", "1261962106"); // 1
    Alloc_3_set.insert("1261962106");
    Alloc_3.add_attribute("EncAllocText", "EncodedAllocText_t_2075138118"); // 1
    Alloc_3_set.insert("EncodedAllocText_t_2075138118");
    Alloc_3.add_attribute("AvgPx", "14659887.100000"); // 1
    Alloc_3_set.insert("14659887.100000");
    Alloc_3.add_attribute("NetMny", "AllocNetMoney_t_193819580"); // 1
    Alloc_3_set.insert("AllocNetMoney_t_193819580");
    Alloc_3.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1599901263"); // 1
    Alloc_3_set.insert("SettlCurrAmt_t_1599901263");
    Alloc_3.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_1673160163"); // 1
    Alloc_3_set.insert("AllocSettlCurrAmt_t_1673160163");
    Alloc_3.add_attribute("SettlCcy", "USD"); // 1
    Alloc_3_set.insert("USD");
    Alloc_3.add_attribute("AllocSettlCcy", "CAN"); // 1
    Alloc_3_set.insert("CAN");
    Alloc_3.add_attribute("SettlCurrFxRt", "11045905.060000"); // 1
    Alloc_3_set.insert("11045905.060000");
    Alloc_3.add_attribute("SettlCurrFxRtCalc", "D"); // 1
    Alloc_3_set.insert("D");
    Alloc_3.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1379258177"); // 1
    Alloc_3_set.insert("AllocAccruedInterestAmt_t_1379258177");
    Alloc_3.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_933758498"); // 1
    Alloc_3_set.insert("AllocInterestAtMaturity_t_933758498");
    Alloc_3.add_attribute("ClrFeeInd", "4"); // 1
    Alloc_3_set.insert("4");
    Alloc_3.add_attribute("SettlInstTyp", "0"); // 1
    Alloc_3_set.insert("0");
    all_values.push_back(Alloc_3_set);
    all_compo_names.insert("Alloc_3_set");

    {
      xml_element Pty_29{"Pty"};
      multiset<string> Pty_29_set;
      Pty_29.add_attribute("ID", "NestedPartyID_t_1448825597"); // 2
      Pty_29_set.insert("NestedPartyID_t_1448825597");
      Pty_29.add_attribute("Src", "B"); // 2
      Pty_29_set.insert("B");
      Pty_29.add_attribute("R", "37"); // 2
      Pty_29_set.insert("37");
      all_values.push_back(Pty_29_set);
      all_compo_names.insert("Pty_29_set");

      {
        xml_element Sub_29{"Sub"};
        multiset<string> Sub_29_set;
        Sub_29.add_attribute("ID", "NestedPartySubID_t_136218182"); // 3
        Sub_29_set.insert("NestedPartySubID_t_136218182");
        Sub_29.add_attribute("Typ", "25"); // 3
        Sub_29_set.insert("25");
        all_values.push_back(Sub_29_set);
        all_compo_names.insert("Sub_29_set");

        Pty_29.add_element(Sub_29);
      }
      Alloc_3.add_element(Pty_29);
    }
    {
      xml_element Comm_3{"Comm"};
      multiset<string> Comm_3_set;
      Comm_3.add_attribute("Comm", "Commission_t_122277675"); // 2
      Comm_3_set.insert("Commission_t_122277675");
      Comm_3.add_attribute("CommTyp", "3"); // 2
      Comm_3_set.insert("3");
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
      MiscFees_3.add_attribute("Amt", "MiscFeeAmt_t_1786548609"); // 2
      MiscFees_3_set.insert("MiscFeeAmt_t_1786548609");
      MiscFees_3.add_attribute("Curr", "EUR"); // 2
      MiscFees_3_set.insert("EUR");
      MiscFees_3.add_attribute("Typ", "9"); // 2
      MiscFees_3_set.insert("9");
      MiscFees_3.add_attribute("Basis", "0"); // 2
      MiscFees_3_set.insert("0");
      all_values.push_back(MiscFees_3_set);
      all_compo_names.insert("MiscFees_3_set");

      Alloc_3.add_element(MiscFees_3);
    }
    {
      xml_element ClrInst_3{"ClrInst"};
      multiset<string> ClrInst_3_set;
      ClrInst_3.add_attribute("ClrngInstrctn", "13"); // 2
      ClrInst_3_set.insert("13");
      all_values.push_back(ClrInst_3_set);
      all_compo_names.insert("ClrInst_3_set");

      Alloc_3.add_element(ClrInst_3);
    }
    {
      xml_element SetInstr_3{"SetInstr"};
      multiset<string> SetInstr_3_set;
      SetInstr_3.add_attribute("DlvryTyp", "0"); // 2
      SetInstr_3_set.insert("0");
      SetInstr_3.add_attribute("StandInstDbTyp", "3"); // 2
      SetInstr_3_set.insert("3");
      SetInstr_3.add_attribute("StandInstDbName", "StandInstDbName_t_1996349462"); // 2
      SetInstr_3_set.insert("StandInstDbName_t_1996349462");
      SetInstr_3.add_attribute("StandInstDbID", "StandInstDbID_t_1274396067"); // 2
      SetInstr_3_set.insert("StandInstDbID_t_1274396067");
      all_values.push_back(SetInstr_3_set);
      all_compo_names.insert("SetInstr_3_set");

      {
        xml_element DlvInst_3{"DlvInst"};
        multiset<string> DlvInst_3_set;
        DlvInst_3.add_attribute("InstSrc", "3"); // 3
        DlvInst_3_set.insert("3");
        DlvInst_3.add_attribute("InstTyp", "C"); // 3
        DlvInst_3_set.insert("C");
        all_values.push_back(DlvInst_3_set);
        all_compo_names.insert("DlvInst_3_set");

        {
          xml_element Pty_30{"Pty"};
          multiset<string> Pty_30_set;
          Pty_30.add_attribute("ID", "SettlPartyID_t_1415328501"); // 4
          Pty_30_set.insert("SettlPartyID_t_1415328501");
          Pty_30.add_attribute("Src", "6"); // 4
          Pty_30_set.insert("6");
          Pty_30.add_attribute("R", "12"); // 4
          Pty_30_set.insert("12");
          all_values.push_back(Pty_30_set);
          all_compo_names.insert("Pty_30_set");

          {
            xml_element Sub_30{"Sub"};
            multiset<string> Sub_30_set;
            Sub_30.add_attribute("ID", "SettlPartySubID_t_372435359"); // 5
            Sub_30_set.insert("SettlPartySubID_t_372435359");
            Sub_30.add_attribute("Typ", "25"); // 5
            Sub_30_set.insert("25");
            all_values.push_back(Sub_30_set);
            all_compo_names.insert("Sub_30_set");

            Pty_30.add_element(Sub_30);
          }
          DlvInst_3.add_element(Pty_30);
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
    Alloc_4.add_attribute("Acct", "AllocAccount_t_160387224"); // 1
    Alloc_4_set.insert("AllocAccount_t_160387224");
    Alloc_4.add_attribute("ActIDSrc", "2"); // 1
    Alloc_4_set.insert("2");
    Alloc_4.add_attribute("MtchStat", "0"); // 1
    Alloc_4_set.insert("0");
    Alloc_4.add_attribute("Px", "2967521.090000"); // 1
    Alloc_4_set.insert("2967521.090000");
    Alloc_4.add_attribute("Qty", "6075358.060000"); // 1
    Alloc_4_set.insert("6075358.060000");
    Alloc_4.add_attribute("IndAllocID", "IndividualAllocID_t_1106460194"); // 1
    Alloc_4_set.insert("IndividualAllocID_t_1106460194");
    Alloc_4.add_attribute("ProcCode", "5"); // 1
    Alloc_4_set.insert("5");
    Alloc_4.add_attribute("IndAllocID2", "SecondaryIndividualAllocID_t_743753988"); // 1
    Alloc_4_set.insert("SecondaryIndividualAllocID_t_743753988");
    Alloc_4.add_attribute("Meth", "2"); // 1
    Alloc_4_set.insert("2");
    Alloc_4.add_attribute("CustCpcty", "AllocCustomerCapacity_t_573241046"); // 1
    Alloc_4_set.insert("AllocCustomerCapacity_t_573241046");
    Alloc_4.add_attribute("AllocPosEfct", "O"); // 1
    Alloc_4_set.insert("O");
    Alloc_4.add_attribute("Typ", "1"); // 1
    Alloc_4_set.insert("1");
    Alloc_4.add_attribute("NotifyBrkrOfCredit", "N"); // 1
    Alloc_4_set.insert("N");
    Alloc_4.add_attribute("HandlInst", "1"); // 1
    Alloc_4_set.insert("1");
    Alloc_4.add_attribute("Txt", "AllocText_t_1279216755"); // 1
    Alloc_4_set.insert("AllocText_t_1279216755");
    Alloc_4.add_attribute("EncAllocTextLen", "822679697"); // 1
    Alloc_4_set.insert("822679697");
    Alloc_4.add_attribute("EncAllocText", "EncodedAllocText_t_1651288840"); // 1
    Alloc_4_set.insert("EncodedAllocText_t_1651288840");
    Alloc_4.add_attribute("AvgPx", "10260570.880000"); // 1
    Alloc_4_set.insert("10260570.880000");
    Alloc_4.add_attribute("NetMny", "AllocNetMoney_t_36005430"); // 1
    Alloc_4_set.insert("AllocNetMoney_t_36005430");
    Alloc_4.add_attribute("SettlCurrAmt", "SettlCurrAmt_t_1306335073"); // 1
    Alloc_4_set.insert("SettlCurrAmt_t_1306335073");
    Alloc_4.add_attribute("SettlCcyAmt", "AllocSettlCurrAmt_t_700551892"); // 1
    Alloc_4_set.insert("AllocSettlCurrAmt_t_700551892");
    Alloc_4.add_attribute("SettlCcy", "EUR"); // 1
    Alloc_4_set.insert("EUR");
    Alloc_4.add_attribute("AllocSettlCcy", "JPY"); // 1
    Alloc_4_set.insert("JPY");
    Alloc_4.add_attribute("SettlCurrFxRt", "16987921.610000"); // 1
    Alloc_4_set.insert("16987921.610000");
    Alloc_4.add_attribute("SettlCurrFxRtCalc", "M"); // 1
    Alloc_4_set.insert("M");
    Alloc_4.add_attribute("AcrdIntAmt", "AllocAccruedInterestAmt_t_1699958103"); // 1
    Alloc_4_set.insert("AllocAccruedInterestAmt_t_1699958103");
    Alloc_4.add_attribute("IntAtMat", "AllocInterestAtMaturity_t_479921209"); // 1
    Alloc_4_set.insert("AllocInterestAtMaturity_t_479921209");
    Alloc_4.add_attribute("ClrFeeInd", "I"); // 1
    Alloc_4_set.insert("I");
    Alloc_4.add_attribute("SettlInstTyp", "3"); // 1
    Alloc_4_set.insert("3");
    all_values.push_back(Alloc_4_set);
    all_compo_names.insert("Alloc_4_set");

    {
      xml_element Pty_31{"Pty"};
      multiset<string> Pty_31_set;
      Pty_31.add_attribute("ID", "NestedPartyID_t_640308433"); // 2
      Pty_31_set.insert("NestedPartyID_t_640308433");
      Pty_31.add_attribute("Src", "D"); // 2
      Pty_31_set.insert("D");
      Pty_31.add_attribute("R", "10"); // 2
      Pty_31_set.insert("10");
      all_values.push_back(Pty_31_set);
      all_compo_names.insert("Pty_31_set");

      {
        xml_element Sub_31{"Sub"};
        multiset<string> Sub_31_set;
        Sub_31.add_attribute("ID", "NestedPartySubID_t_937060543"); // 3
        Sub_31_set.insert("NestedPartySubID_t_937060543");
        Sub_31.add_attribute("Typ", "13"); // 3
        Sub_31_set.insert("13");
        all_values.push_back(Sub_31_set);
        all_compo_names.insert("Sub_31_set");

        Pty_31.add_element(Sub_31);
      }
      Alloc_4.add_element(Pty_31);
    }
    {
      xml_element Comm_4{"Comm"};
      multiset<string> Comm_4_set;
      Comm_4.add_attribute("Comm", "Commission_t_165196303"); // 2
      Comm_4_set.insert("Commission_t_165196303");
      Comm_4.add_attribute("CommTyp", "1"); // 2
      Comm_4_set.insert("1");
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
      MiscFees_4.add_attribute("Amt", "MiscFeeAmt_t_290306630"); // 2
      MiscFees_4_set.insert("MiscFeeAmt_t_290306630");
      MiscFees_4.add_attribute("Curr", "USD"); // 2
      MiscFees_4_set.insert("USD");
      MiscFees_4.add_attribute("Typ", "9"); // 2
      MiscFees_4_set.insert("9");
      MiscFees_4.add_attribute("Basis", "0"); // 2
      MiscFees_4_set.insert("0");
      all_values.push_back(MiscFees_4_set);
      all_compo_names.insert("MiscFees_4_set");

      Alloc_4.add_element(MiscFees_4);
    }
    {
      xml_element ClrInst_4{"ClrInst"};
      multiset<string> ClrInst_4_set;
      ClrInst_4.add_attribute("ClrngInstrctn", "13"); // 2
      ClrInst_4_set.insert("13");
      all_values.push_back(ClrInst_4_set);
      all_compo_names.insert("ClrInst_4_set");

      Alloc_4.add_element(ClrInst_4);
    }
    {
      xml_element SetInstr_4{"SetInstr"};
      multiset<string> SetInstr_4_set;
      SetInstr_4.add_attribute("DlvryTyp", "3"); // 2
      SetInstr_4_set.insert("3");
      SetInstr_4.add_attribute("StandInstDbTyp", "1"); // 2
      SetInstr_4_set.insert("1");
      SetInstr_4.add_attribute("StandInstDbName", "StandInstDbName_t_84817569"); // 2
      SetInstr_4_set.insert("StandInstDbName_t_84817569");
      SetInstr_4.add_attribute("StandInstDbID", "StandInstDbID_t_63684313"); // 2
      SetInstr_4_set.insert("StandInstDbID_t_63684313");
      all_values.push_back(SetInstr_4_set);
      all_compo_names.insert("SetInstr_4_set");

      {
        xml_element DlvInst_4{"DlvInst"};
        multiset<string> DlvInst_4_set;
        DlvInst_4.add_attribute("InstSrc", "2"); // 3
        DlvInst_4_set.insert("2");
        DlvInst_4.add_attribute("InstTyp", "C"); // 3
        DlvInst_4_set.insert("C");
        all_values.push_back(DlvInst_4_set);
        all_compo_names.insert("DlvInst_4_set");

        {
          xml_element Pty_32{"Pty"};
          multiset<string> Pty_32_set;
          Pty_32.add_attribute("ID", "SettlPartyID_t_1218885200"); // 4
          Pty_32_set.insert("SettlPartyID_t_1218885200");
          Pty_32.add_attribute("Src", "D"); // 4
          Pty_32_set.insert("D");
          Pty_32.add_attribute("R", "16"); // 4
          Pty_32_set.insert("16");
          all_values.push_back(Pty_32_set);
          all_compo_names.insert("Pty_32_set");

          {
            xml_element Sub_32{"Sub"};
            multiset<string> Sub_32_set;
            Sub_32.add_attribute("ID", "SettlPartySubID_t_770193714"); // 5
            Sub_32_set.insert("SettlPartySubID_t_770193714");
            Sub_32.add_attribute("Typ", "6"); // 5
            Sub_32_set.insert("6");
            all_values.push_back(Sub_32_set);
            all_compo_names.insert("Sub_32_set");

            Pty_32.add_element(Sub_32);
          }
          DlvInst_4.add_element(Pty_32);
        }
        SetInstr_4.add_element(DlvInst_4);
      }
      Alloc_4.add_element(SetInstr_4);
    }
    elt.add_element(Alloc_4);
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
