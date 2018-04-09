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
  elt.add_attribute("ID", "ClOrdID_t_207778348"); // 0
  NewOrderSingle_message_t_0.insert("ClOrdID_t_207778348");
  elt.add_attribute("ID2", "SecondaryClOrdID_t_80187763"); // 0
  NewOrderSingle_message_t_0.insert("SecondaryClOrdID_t_80187763");
  elt.add_attribute("LnkID", "ClOrdLinkID_t_1918712127"); // 0
  NewOrderSingle_message_t_0.insert("ClOrdLinkID_t_1918712127");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1596031518"); // 0
  NewOrderSingle_message_t_0.insert("TradeOriginationDate_t_1596031518");
  elt.add_attribute("TrdDt", "TradeDate_t_799002236"); // 0
  NewOrderSingle_message_t_0.insert("TradeDate_t_799002236");
  elt.add_attribute("Acct", "Account_t_84307208"); // 0
  NewOrderSingle_message_t_0.insert("Account_t_84307208");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  NewOrderSingle_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("DayBkngInst", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("BkngUnit", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "0"); // 0
  NewOrderSingle_message_t_0.insert("0");
  elt.add_attribute("AllocID", "AllocID_t_1386489025"); // 0
  NewOrderSingle_message_t_0.insert("AllocID_t_1386489025");
  elt.add_attribute("SettlTyp", "8"); // 0
  NewOrderSingle_message_t_0.insert("8");
  elt.add_attribute("SettlDt", "SettlDate_t_1656336967"); // 0
  NewOrderSingle_message_t_0.insert("SettlDate_t_1656336967");
  elt.add_attribute("CshMgn", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "B"); // 0
  NewOrderSingle_message_t_0.insert("B");
  elt.add_attribute("HandlInst", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("ExecInst", "k"); // 0
  NewOrderSingle_message_t_0.insert("k");
  elt.add_attribute("MinQty", "18837780.930000"); // 0
  NewOrderSingle_message_t_0.insert("18837780.930000");
  elt.add_attribute("MtchInc", "9595671.550000"); // 0
  NewOrderSingle_message_t_0.insert("9595671.550000");
  elt.add_attribute("MxPxLvls", "2088955473"); // 0
  NewOrderSingle_message_t_0.insert("2088955473");
  elt.add_attribute("MaxFloor", "17202584.610000"); // 0
  NewOrderSingle_message_t_0.insert("17202584.610000");
  elt.add_attribute("ExDest", "ExDestination_t_1879115971"); // 0
  NewOrderSingle_message_t_0.insert("ExDestination_t_1879115971");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  NewOrderSingle_message_t_0.insert("E");
  elt.add_attribute("ProcCode", "5"); // 0
  NewOrderSingle_message_t_0.insert("5");
  elt.add_attribute("PrevClsPx", "10458039.490000"); // 0
  NewOrderSingle_message_t_0.insert("10458039.490000");
  elt.add_attribute("Side", "E"); // 0
  NewOrderSingle_message_t_0.insert("E");
  elt.add_attribute("LocReqd", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("TxnTm", "TransactTime_t_1745111492"); // 0
  NewOrderSingle_message_t_0.insert("TransactTime_t_1745111492");
  elt.add_attribute("QtyTyp", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("Typ", "8"); // 0
  NewOrderSingle_message_t_0.insert("8");
  elt.add_attribute("PxTyp", "10"); // 0
  NewOrderSingle_message_t_0.insert("10");
  elt.add_attribute("Px", "20066582.430000"); // 0
  NewOrderSingle_message_t_0.insert("20066582.430000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("StopPx", "14014377.110000"); // 0
  NewOrderSingle_message_t_0.insert("14014377.110000");
  elt.add_attribute("Ccy", "JPY"); // 0
  NewOrderSingle_message_t_0.insert("JPY");
  elt.add_attribute("ComplianceID", "ComplianceID_t_742162394"); // 0
  NewOrderSingle_message_t_0.insert("ComplianceID_t_742162394");
  elt.add_attribute("SolFlag", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("IOIID", "IOIID_t_1551077063"); // 0
  NewOrderSingle_message_t_0.insert("IOIID_t_1551077063");
  elt.add_attribute("QID", "QuoteID_t_2090610916"); // 0
  NewOrderSingle_message_t_0.insert("QuoteID_t_2090610916");
  elt.add_attribute("TmInForce", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_790082440"); // 0
  NewOrderSingle_message_t_0.insert("EffectiveTime_t_790082440");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1029910036"); // 0
  NewOrderSingle_message_t_0.insert("ExpireDate_t_1029910036");
  elt.add_attribute("ExpireTm", "ExpireTime_t_2141814040"); // 0
  NewOrderSingle_message_t_0.insert("ExpireTime_t_2141814040");
  elt.add_attribute("GTBkngInst", "2"); // 0
  NewOrderSingle_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "W"); // 0
  NewOrderSingle_message_t_0.insert("W");
  elt.add_attribute("Rstctions", "7"); // 0
  NewOrderSingle_message_t_0.insert("7");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  NewOrderSingle_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "3"); // 0
  NewOrderSingle_message_t_0.insert("3");
  elt.add_attribute("ForexReq", "N"); // 0
  NewOrderSingle_message_t_0.insert("N");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  NewOrderSingle_message_t_0.insert("CHF");
  elt.add_attribute("BkngTyp", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_1149090507"); // 0
  NewOrderSingle_message_t_0.insert("Text_t_1149090507");
  elt.add_attribute("EncTxtLen", "1647285464"); // 0
  NewOrderSingle_message_t_0.insert("1647285464");
  elt.add_attribute("EncTxt", "EncodedText_t_845021286"); // 0
  NewOrderSingle_message_t_0.insert("EncodedText_t_845021286");
  elt.add_attribute("SettlDt2", "SettlDate2_t_1115042072"); // 0
  NewOrderSingle_message_t_0.insert("SettlDate2_t_1115042072");
  elt.add_attribute("Qty2", "134463.560000"); // 0
  NewOrderSingle_message_t_0.insert("134463.560000");
  elt.add_attribute("Px2", "4426491.310000"); // 0
  NewOrderSingle_message_t_0.insert("4426491.310000");
  elt.add_attribute("PosEfct", "O"); // 0
  NewOrderSingle_message_t_0.insert("O");
  elt.add_attribute("Covered", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("MaxShow", "2480553.240000"); // 0
  NewOrderSingle_message_t_0.insert("2480553.240000");
  elt.add_attribute("TgtStrategy", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1890155681"); // 0
  NewOrderSingle_message_t_0.insert("TargetStrategyParameters_t_1890155681");
  elt.add_attribute("ParticipationRt", "16494930.350000"); // 0
  NewOrderSingle_message_t_0.insert("16494930.350000");
  elt.add_attribute("CxllationRights", "Y"); // 0
  NewOrderSingle_message_t_0.insert("Y");
  elt.add_attribute("MnyLaunderingStat", "N"); // 0
  NewOrderSingle_message_t_0.insert("N");
  elt.add_attribute("RegistID", "RegistID_t_244171781"); // 0
  NewOrderSingle_message_t_0.insert("RegistID_t_244171781");
  elt.add_attribute("Designation", "Designation_t_1787604478"); // 0
  NewOrderSingle_message_t_0.insert("Designation_t_1787604478");
  elt.add_attribute("ManOrdInd", "true"); // 0
  NewOrderSingle_message_t_0.insert("true");
  elt.add_attribute("CustDrctdOrd", "false"); // 0
  NewOrderSingle_message_t_0.insert("false");
  elt.add_attribute("RcvdDptID", "ReceivedDeptID_t_125597903"); // 0
  NewOrderSingle_message_t_0.insert("ReceivedDeptID_t_125597903");
  elt.add_attribute("CustOrdHdlInst", "MQT"); // 0
  NewOrderSingle_message_t_0.insert("MQT");
  elt.add_attribute("OrdHndlInstSrc", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  elt.add_attribute("RefOrdID", "RefOrderID_t_119928296"); // 0
  NewOrderSingle_message_t_0.insert("RefOrderID_t_119928296");
  elt.add_attribute("RefOrdIDSrc", "1"); // 0
  NewOrderSingle_message_t_0.insert("1");
  all_values.push_back(NewOrderSingle_message_t_0);
  all_compo_names.insert("NewOrderSingle_message_t");

  { // Hdr
    xml_element Hdr_54{"Hdr"};
    multiset<string> Hdr_54_set;
    Hdr_54.add_attribute("SeqNum", "1575146062"); // 1
    Hdr_54_set.insert("1575146062");
    Hdr_54.add_attribute("SID", "SenderCompID_t_1375429802"); // 1
    Hdr_54_set.insert("SenderCompID_t_1375429802");
    Hdr_54.add_attribute("TID", "TargetCompID_t_1662883269"); // 1
    Hdr_54_set.insert("TargetCompID_t_1662883269");
    Hdr_54.add_attribute("OBID", "OnBehalfOfCompID_t_1669377484"); // 1
    Hdr_54_set.insert("OnBehalfOfCompID_t_1669377484");
    Hdr_54.add_attribute("D2ID", "DeliverToCompID_t_1443014816"); // 1
    Hdr_54_set.insert("DeliverToCompID_t_1443014816");
    Hdr_54.add_attribute("SSub", "SenderSubID_t_1894949013"); // 1
    Hdr_54_set.insert("SenderSubID_t_1894949013");
    Hdr_54.add_attribute("SLoc", "SenderLocationID_t_1336383719"); // 1
    Hdr_54_set.insert("SenderLocationID_t_1336383719");
    Hdr_54.add_attribute("TSub", "TargetSubID_t_1242232153"); // 1
    Hdr_54_set.insert("TargetSubID_t_1242232153");
    Hdr_54.add_attribute("TLoc", "TargetLocationID_t_896555872"); // 1
    Hdr_54_set.insert("TargetLocationID_t_896555872");
    Hdr_54.add_attribute("OBSub", "OnBehalfOfSubID_t_836185536"); // 1
    Hdr_54_set.insert("OnBehalfOfSubID_t_836185536");
    Hdr_54.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2087253440"); // 1
    Hdr_54_set.insert("OnBehalfOfLocationID_t_2087253440");
    Hdr_54.add_attribute("D2Sub", "DeliverToSubID_t_2011597944"); // 1
    Hdr_54_set.insert("DeliverToSubID_t_2011597944");
    Hdr_54.add_attribute("D2Loc", "DeliverToLocationID_t_849631892"); // 1
    Hdr_54_set.insert("DeliverToLocationID_t_849631892");
    Hdr_54.add_attribute("PosDup", "Y"); // 1
    Hdr_54_set.insert("Y");
    Hdr_54.add_attribute("PosRsnd", "N"); // 1
    Hdr_54_set.insert("N");
    Hdr_54.add_attribute("Snt", "SendingTime_t_1915818671"); // 1
    Hdr_54_set.insert("SendingTime_t_1915818671");
    Hdr_54.add_attribute("OrigSnt", "OrigSendingTime_t_630474247"); // 1
    Hdr_54_set.insert("OrigSendingTime_t_630474247");
    Hdr_54.add_attribute("MsgEncd", "MessageEncoding_t_1511346700"); // 1
    Hdr_54_set.insert("MessageEncoding_t_1511346700");
    all_values.push_back(Hdr_54_set);
    all_compo_names.insert("Hdr_54_set");

    {
      xml_element Hop_54{"Hop"};
      multiset<string> Hop_54_set;
      Hop_54.add_attribute("ID", "HopCompID_t_1658490704"); // 2
      Hop_54_set.insert("HopCompID_t_1658490704");
      Hop_54.add_attribute("Ref", "132483634"); // 2
      Hop_54_set.insert("132483634");
      Hop_54.add_attribute("Snt", "HopSendingTime_t_775243383"); // 2
      Hop_54_set.insert("HopSendingTime_t_775243383");
      all_values.push_back(Hop_54_set);
      all_compo_names.insert("Hop_54_set");

      Hdr_54.add_element(Hop_54);
    }
    elt.add_element(Hdr_54);
  } // end Hdr
  { // Pty
    xml_element Pty_224{"Pty"};
    multiset<string> Pty_224_set;
    Pty_224.add_attribute("ID", "PartyID_t_376655415"); // 1
    Pty_224_set.insert("PartyID_t_376655415");
    Pty_224.add_attribute("Src", "D"); // 1
    Pty_224_set.insert("D");
    Pty_224.add_attribute("R", "37"); // 1
    Pty_224_set.insert("37");
    all_values.push_back(Pty_224_set);
    all_compo_names.insert("Pty_224_set");

    {
      xml_element Sub_224{"Sub"};
      multiset<string> Sub_224_set;
      Sub_224.add_attribute("ID", "PartySubID_t_563954464"); // 2
      Sub_224_set.insert("PartySubID_t_563954464");
      Sub_224.add_attribute("Typ", "22"); // 2
      Sub_224_set.insert("22");
      all_values.push_back(Sub_224_set);
      all_compo_names.insert("Sub_224_set");

      Pty_224.add_element(Sub_224);
    }
    elt.add_element(Pty_224);
  } // end Pty
  { // Pty
    xml_element Pty_225{"Pty"};
    multiset<string> Pty_225_set;
    Pty_225.add_attribute("ID", "PartyID_t_1061120755"); // 1
    Pty_225_set.insert("PartyID_t_1061120755");
    Pty_225.add_attribute("Src", "A"); // 1
    Pty_225_set.insert("A");
    Pty_225.add_attribute("R", "10"); // 1
    Pty_225_set.insert("10");
    all_values.push_back(Pty_225_set);
    all_compo_names.insert("Pty_225_set");

    {
      xml_element Sub_225{"Sub"};
      multiset<string> Sub_225_set;
      Sub_225.add_attribute("ID", "PartySubID_t_285926458"); // 2
      Sub_225_set.insert("PartySubID_t_285926458");
      Sub_225.add_attribute("Typ", "28"); // 2
      Sub_225_set.insert("28");
      all_values.push_back(Sub_225_set);
      all_compo_names.insert("Sub_225_set");

      Pty_225.add_element(Sub_225);
    }
    elt.add_element(Pty_225);
  } // end Pty
  { // PreAll
    xml_element PreAll_12{"PreAll"};
    multiset<string> PreAll_12_set;
    PreAll_12.add_attribute("Acct", "AllocAccount_t_1948809728"); // 1
    PreAll_12_set.insert("AllocAccount_t_1948809728");
    PreAll_12.add_attribute("ActIDSrc", "3"); // 1
    PreAll_12_set.insert("3");
    PreAll_12.add_attribute("AllocSettlCcy", "CHF"); // 1
    PreAll_12_set.insert("CHF");
    PreAll_12.add_attribute("IndAllocID", "IndividualAllocID_t_2067103520"); // 1
    PreAll_12_set.insert("IndividualAllocID_t_2067103520");
    PreAll_12.add_attribute("Qty", "4265998.900000"); // 1
    PreAll_12_set.insert("4265998.900000");
    all_values.push_back(PreAll_12_set);
    all_compo_names.insert("PreAll_12_set");

    {
      xml_element Pty_226{"Pty"};
      multiset<string> Pty_226_set;
      Pty_226.add_attribute("ID", "NestedPartyID_t_445347318"); // 2
      Pty_226_set.insert("NestedPartyID_t_445347318");
      Pty_226.add_attribute("Src", "7"); // 2
      Pty_226_set.insert("7");
      Pty_226.add_attribute("R", "72"); // 2
      Pty_226_set.insert("72");
      all_values.push_back(Pty_226_set);
      all_compo_names.insert("Pty_226_set");

      {
        xml_element Sub_226{"Sub"};
        multiset<string> Sub_226_set;
        Sub_226.add_attribute("ID", "NestedPartySubID_t_309461614"); // 3
        Sub_226_set.insert("NestedPartySubID_t_309461614");
        Sub_226.add_attribute("Typ", "14"); // 3
        Sub_226_set.insert("14");
        all_values.push_back(Sub_226_set);
        all_compo_names.insert("Sub_226_set");

        Pty_226.add_element(Sub_226);
      }
      PreAll_12.add_element(Pty_226);
    }
    elt.add_element(PreAll_12);
  } // end PreAll
  { // PreAll
    xml_element PreAll_13{"PreAll"};
    multiset<string> PreAll_13_set;
    PreAll_13.add_attribute("Acct", "AllocAccount_t_748788605"); // 1
    PreAll_13_set.insert("AllocAccount_t_748788605");
    PreAll_13.add_attribute("ActIDSrc", "99"); // 1
    PreAll_13_set.insert("99");
    PreAll_13.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAll_13_set.insert("USD");
    PreAll_13.add_attribute("IndAllocID", "IndividualAllocID_t_431467867"); // 1
    PreAll_13_set.insert("IndividualAllocID_t_431467867");
    PreAll_13.add_attribute("Qty", "8847793.790000"); // 1
    PreAll_13_set.insert("8847793.790000");
    all_values.push_back(PreAll_13_set);
    all_compo_names.insert("PreAll_13_set");

    {
      xml_element Pty_227{"Pty"};
      multiset<string> Pty_227_set;
      Pty_227.add_attribute("ID", "NestedPartyID_t_1511746486"); // 2
      Pty_227_set.insert("NestedPartyID_t_1511746486");
      Pty_227.add_attribute("Src", "H"); // 2
      Pty_227_set.insert("H");
      Pty_227.add_attribute("R", "80"); // 2
      Pty_227_set.insert("80");
      all_values.push_back(Pty_227_set);
      all_compo_names.insert("Pty_227_set");

      {
        xml_element Sub_227{"Sub"};
        multiset<string> Sub_227_set;
        Sub_227.add_attribute("ID", "NestedPartySubID_t_1888401901"); // 3
        Sub_227_set.insert("NestedPartySubID_t_1888401901");
        Sub_227.add_attribute("Typ", "32"); // 3
        Sub_227_set.insert("32");
        all_values.push_back(Sub_227_set);
        all_compo_names.insert("Sub_227_set");

        Pty_227.add_element(Sub_227);
      }
      PreAll_13.add_element(Pty_227);
    }
    elt.add_element(PreAll_13);
  } // end PreAll
  { // DsplyInstr
    xml_element DsplyInstr_6{"DsplyInstr"};
    multiset<string> DsplyInstr_6_set;
    DsplyInstr_6.add_attribute("DisplayQty", "12632313.350000"); // 1
    DsplyInstr_6_set.insert("12632313.350000");
    DsplyInstr_6.add_attribute("SecDspQty", "3048727.170000"); // 1
    DsplyInstr_6_set.insert("3048727.170000");
    DsplyInstr_6.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_6_set.insert("1");
    DsplyInstr_6.add_attribute("DspMthd", "3"); // 1
    DsplyInstr_6_set.insert("3");
    DsplyInstr_6.add_attribute("DsplLwQty", "20860362.660000"); // 1
    DsplyInstr_6_set.insert("20860362.660000");
    DsplyInstr_6.add_attribute("DisplayHighQty", "6764443.470000"); // 1
    DsplyInstr_6_set.insert("6764443.470000");
    DsplyInstr_6.add_attribute("DspMinIncr", "4627949.010000"); // 1
    DsplyInstr_6_set.insert("4627949.010000");
    DsplyInstr_6.add_attribute("RfrshQty", "11473785.820000"); // 1
    DsplyInstr_6_set.insert("11473785.820000");
    all_values.push_back(DsplyInstr_6_set);
    all_compo_names.insert("DsplyInstr_6_set");

    elt.add_element(DsplyInstr_6);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_9{"TrdSes"};
    multiset<string> TrdSes_9_set;
    TrdSes_9.add_attribute("SesID", "4"); // 1
    TrdSes_9_set.insert("4");
    TrdSes_9.add_attribute("SesSub", "1"); // 1
    TrdSes_9_set.insert("1");
    all_values.push_back(TrdSes_9_set);
    all_compo_names.insert("TrdSes_9_set");

    elt.add_element(TrdSes_9);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_10{"TrdSes"};
    multiset<string> TrdSes_10_set;
    TrdSes_10.add_attribute("SesID", "5"); // 1
    TrdSes_10_set.insert("5");
    TrdSes_10.add_attribute("SesSub", "1"); // 1
    TrdSes_10_set.insert("1");
    all_values.push_back(TrdSes_10_set);
    all_compo_names.insert("TrdSes_10_set");

    elt.add_element(TrdSes_10);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_11{"TrdSes"};
    multiset<string> TrdSes_11_set;
    TrdSes_11.add_attribute("SesID", "2"); // 1
    TrdSes_11_set.insert("2");
    TrdSes_11.add_attribute("SesSub", "2"); // 1
    TrdSes_11_set.insert("2");
    all_values.push_back(TrdSes_11_set);
    all_compo_names.insert("TrdSes_11_set");

    elt.add_element(TrdSes_11);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_41{"Instrmt"};
    multiset<string> Instrmt_41_set;
    Instrmt_41.add_attribute("Sym", "Symbol_t_258259744"); // 1
    Instrmt_41_set.insert("Symbol_t_258259744");
    Instrmt_41.add_attribute("Sfx", "WI"); // 1
    Instrmt_41_set.insert("WI");
    Instrmt_41.add_attribute("ID", "SecurityID_t_542618224"); // 1
    Instrmt_41_set.insert("SecurityID_t_542618224");
    Instrmt_41.add_attribute("Src", "8"); // 1
    Instrmt_41_set.insert("8");
    Instrmt_41.add_attribute("Prod", "12"); // 1
    Instrmt_41_set.insert("12");
    Instrmt_41.add_attribute("ProdCmplx", "ProductComplex_t_1291406829"); // 1
    Instrmt_41_set.insert("ProductComplex_t_1291406829");
    Instrmt_41.add_attribute("SecGrp", "SecurityGroup_t_1635326174"); // 1
    Instrmt_41_set.insert("SecurityGroup_t_1635326174");
    Instrmt_41.add_attribute("CFI", "CFICode_t_1237765990"); // 1
    Instrmt_41_set.insert("CFICode_t_1237765990");
    Instrmt_41.add_attribute("SecTyp", "TB"); // 1
    Instrmt_41_set.insert("TB");
    Instrmt_41.add_attribute("SubTyp", "SecuritySubType_t_2066794041"); // 1
    Instrmt_41_set.insert("SecuritySubType_t_2066794041");
    Instrmt_41.add_attribute("MMY", "2122545369"); // 1
    Instrmt_41_set.insert("2122545369");
    Instrmt_41.add_attribute("MatDt", "MaturityDate_t_2034932519"); // 1
    Instrmt_41_set.insert("MaturityDate_t_2034932519");
    Instrmt_41.add_attribute("MatTm", "1126021643"); // 1
    Instrmt_41_set.insert("1126021643");
    Instrmt_41.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1021796299"); // 1
    Instrmt_41_set.insert("SettleOnOpenFlag_t_1021796299");
    Instrmt_41.add_attribute("AsgnMeth", "1775850772"); // 1
    Instrmt_41_set.insert("1775850772");
    Instrmt_41.add_attribute("Status", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("CpnPmt", "CouponPaymentDate_t_137543986"); // 1
    Instrmt_41_set.insert("CouponPaymentDate_t_137543986");
    Instrmt_41.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_41_set.insert("MR");
    Instrmt_41.add_attribute("Snrty", "SR"); // 1
    Instrmt_41_set.insert("SR");
    Instrmt_41.add_attribute("NotlPctOut", "3144124.280000"); // 1
    Instrmt_41_set.insert("3144124.280000");
    Instrmt_41.add_attribute("OrigNotlPctOut", "20192761.070000"); // 1
    Instrmt_41_set.insert("20192761.070000");
    Instrmt_41.add_attribute("AttchPnt", "12926117.410000"); // 1
    Instrmt_41_set.insert("12926117.410000");
    Instrmt_41.add_attribute("DetchPnt", "7772073.290000"); // 1
    Instrmt_41_set.insert("7772073.290000");
    Instrmt_41.add_attribute("Issued", "IssueDate_t_1019171042"); // 1
    Instrmt_41_set.insert("IssueDate_t_1019171042");
    Instrmt_41.add_attribute("RepoCollSecTyp", "1857892657"); // 1
    Instrmt_41_set.insert("1857892657");
    Instrmt_41.add_attribute("RepoTrm", "1041328310"); // 1
    Instrmt_41_set.insert("1041328310");
    Instrmt_41.add_attribute("RepoRt", "7497857.770000"); // 1
    Instrmt_41_set.insert("7497857.770000");
    Instrmt_41.add_attribute("Fctr", "16075413.090000"); // 1
    Instrmt_41_set.insert("16075413.090000");
    Instrmt_41.add_attribute("CrdRtg", "CreditRating_t_854240737"); // 1
    Instrmt_41_set.insert("CreditRating_t_854240737");
    Instrmt_41.add_attribute("Rgstry", "InstrRegistry_t_400020384"); // 1
    Instrmt_41_set.insert("InstrRegistry_t_400020384");
    Instrmt_41.add_attribute("IssuCtry", "1783789851"); // 1
    Instrmt_41_set.insert("1783789851");
    Instrmt_41.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1112500481"); // 1
    Instrmt_41_set.insert("StateOrProvinceOfIssue_t_1112500481");
    Instrmt_41.add_attribute("Lcl", "LocaleOfIssue_t_806060399"); // 1
    Instrmt_41_set.insert("LocaleOfIssue_t_806060399");
    Instrmt_41.add_attribute("Redeem", "RedemptionDate_t_178924427"); // 1
    Instrmt_41_set.insert("RedemptionDate_t_178924427");
    Instrmt_41.add_attribute("StrkPx", "16802218.400000"); // 1
    Instrmt_41_set.insert("16802218.400000");
    Instrmt_41.add_attribute("StrkCcy", "GBP"); // 1
    Instrmt_41_set.insert("GBP");
    Instrmt_41.add_attribute("StrkMult", "11680643.660000"); // 1
    Instrmt_41_set.insert("11680643.660000");
    Instrmt_41.add_attribute("StrkValu", "19078200.560000"); // 1
    Instrmt_41_set.insert("19078200.560000");
    Instrmt_41.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_41_set.insert("2");
    Instrmt_41.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_41_set.insert("5");
    Instrmt_41.add_attribute("StrkPxBndryPrcsn", "18828817.770000"); // 1
    Instrmt_41_set.insert("18828817.770000");
    Instrmt_41.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("OptAt", "65912755"); // 1
    Instrmt_41_set.insert("65912755");
    Instrmt_41.add_attribute("Mult", "7571944.280000"); // 1
    Instrmt_41_set.insert("7571944.280000");
    Instrmt_41.add_attribute("MultTyp", "2"); // 1
    Instrmt_41_set.insert("2");
    Instrmt_41.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_41_set.insert("0");
    Instrmt_41.add_attribute("MinPxIncr", "8947384.140000"); // 1
    Instrmt_41_set.insert("8947384.140000");
    Instrmt_41.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1442573125"); // 1
    Instrmt_41_set.insert("MinPriceIncrementAmount_t_1442573125");
    Instrmt_41.add_attribute("UOM", "Bbl"); // 1
    Instrmt_41_set.insert("Bbl");
    Instrmt_41.add_attribute("UOMQty", "12091508.420000"); // 1
    Instrmt_41_set.insert("12091508.420000");
    Instrmt_41.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_41_set.insert("Alw");
    Instrmt_41.add_attribute("PxUOMQty", "4278217.020000"); // 1
    Instrmt_41_set.insert("4278217.020000");
    Instrmt_41.add_attribute("SettlMeth", "C"); // 1
    Instrmt_41_set.insert("C");
    Instrmt_41.add_attribute("ExerStyle", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("OptPayoutTyp", "3"); // 1
    Instrmt_41_set.insert("3");
    Instrmt_41.add_attribute("OptPayAmt", "OptPayoutAmount_t_880202834"); // 1
    Instrmt_41_set.insert("OptPayoutAmount_t_880202834");
    Instrmt_41.add_attribute("PxQteMeth", "PCTPAR"); // 1
    Instrmt_41_set.insert("PCTPAR");
    Instrmt_41.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_41_set.insert("EQTY");
    Instrmt_41.add_attribute("ListMeth", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("CapPx", "13358591.390000"); // 1
    Instrmt_41_set.insert("13358591.390000");
    Instrmt_41.add_attribute("FlrPx", "13820782.230000"); // 1
    Instrmt_41_set.insert("13820782.230000");
    Instrmt_41.add_attribute("PutCall", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("FlexInd", "true"); // 1
    Instrmt_41_set.insert("true");
    Instrmt_41.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_41_set.insert("true");
    Instrmt_41.add_attribute("TmUnit", "Min"); // 1
    Instrmt_41_set.insert("Min");
    Instrmt_41.add_attribute("CpnRt", "6644899.560000"); // 1
    Instrmt_41_set.insert("6644899.560000");
    Instrmt_41.add_attribute("Exch", "SecurityExchange_t_883850258"); // 1
    Instrmt_41_set.insert("SecurityExchange_t_883850258");
    Instrmt_41.add_attribute("PosLmt", "1400262964"); // 1
    Instrmt_41_set.insert("1400262964");
    Instrmt_41.add_attribute("NTPosLmt", "424826364"); // 1
    Instrmt_41_set.insert("424826364");
    Instrmt_41.add_attribute("Issr", "Issuer_t_729883899"); // 1
    Instrmt_41_set.insert("Issuer_t_729883899");
    Instrmt_41.add_attribute("EncIssrLen", "340154075"); // 1
    Instrmt_41_set.insert("340154075");
    Instrmt_41.add_attribute("EncIssr", "EncodedIssuer_t_160224493"); // 1
    Instrmt_41_set.insert("EncodedIssuer_t_160224493");
    Instrmt_41.add_attribute("Desc", "SecurityDesc_t_463366411"); // 1
    Instrmt_41_set.insert("SecurityDesc_t_463366411");
    Instrmt_41.add_attribute("EncSecDescLen", "406066830"); // 1
    Instrmt_41_set.insert("406066830");
    Instrmt_41.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_917418921"); // 1
    Instrmt_41_set.insert("EncodedSecurityDesc_t_917418921");
    Instrmt_41.add_attribute("Pool", "Pool_t_1972699695"); // 1
    Instrmt_41_set.insert("Pool_t_1972699695");
    Instrmt_41.add_attribute("CSetMo", "1072593045"); // 1
    Instrmt_41_set.insert("1072593045");
    Instrmt_41.add_attribute("CPPgm", "1"); // 1
    Instrmt_41_set.insert("1");
    Instrmt_41.add_attribute("CPRegT", "CPRegType_t_1267789172"); // 1
    Instrmt_41_set.insert("CPRegType_t_1267789172");
    Instrmt_41.add_attribute("Dated", "DatedDate_t_207803006"); // 1
    Instrmt_41_set.insert("DatedDate_t_207803006");
    Instrmt_41.add_attribute("IntAcrl", "InterestAccrualDate_t_873824530"); // 1
    Instrmt_41_set.insert("InterestAccrualDate_t_873824530");
    all_values.push_back(Instrmt_41_set);
    all_compo_names.insert("Instrmt_41_set");

    {
      xml_element AID_44{"AID"};
      multiset<string> AID_44_set;
      AID_44.add_attribute("AltID", "SecurityAltID_t_434671109"); // 2
      AID_44_set.insert("SecurityAltID_t_434671109");
      AID_44.add_attribute("AltIDSrc", "6"); // 2
      AID_44_set.insert("6");
      all_values.push_back(AID_44_set);
      all_compo_names.insert("AID_44_set");

      Instrmt_41.add_element(AID_44);
    }
    {
      xml_element SecXML_44{"SecXML"};
      multiset<string> SecXML_44_set;
      SecXML_44.add_attribute("Schema", "SecurityXMLSchema_t_712699054"); // 2
      SecXML_44_set.insert("SecurityXMLSchema_t_712699054");
      all_values.push_back(SecXML_44_set);
      all_compo_names.insert("SecXML_44_set");

      Instrmt_41.add_element(SecXML_44);
    }
    {
      xml_element Evnt_44{"Evnt"};
      multiset<string> Evnt_44_set;
      Evnt_44.add_attribute("EventTyp", "7"); // 2
      Evnt_44_set.insert("7");
      Evnt_44.add_attribute("Dt", "EventDate_t_773855420"); // 2
      Evnt_44_set.insert("EventDate_t_773855420");
      Evnt_44.add_attribute("Tm", "EventTime_t_1592901888"); // 2
      Evnt_44_set.insert("EventTime_t_1592901888");
      Evnt_44.add_attribute("Px", "15565628.430000"); // 2
      Evnt_44_set.insert("15565628.430000");
      Evnt_44.add_attribute("Txt", "EventText_t_372143793"); // 2
      Evnt_44_set.insert("EventText_t_372143793");
      all_values.push_back(Evnt_44_set);
      all_compo_names.insert("Evnt_44_set");

      Instrmt_41.add_element(Evnt_44);
    }
    {
      xml_element Pty_228{"Pty"};
      multiset<string> Pty_228_set;
      Pty_228.add_attribute("ID", "InstrumentPartyID_t_1179861812"); // 2
      Pty_228_set.insert("InstrumentPartyID_t_1179861812");
      Pty_228.add_attribute("Src", "1"); // 2
      Pty_228_set.insert("1");
      Pty_228.add_attribute("R", "9"); // 2
      Pty_228_set.insert("9");
      all_values.push_back(Pty_228_set);
      all_compo_names.insert("Pty_228_set");

      {
        xml_element Sub_228{"Sub"};
        multiset<string> Sub_228_set;
        Sub_228.add_attribute("ID", "InstrumentPartySubID_t_1879322217"); // 3
        Sub_228_set.insert("InstrumentPartySubID_t_1879322217");
        Sub_228.add_attribute("Typ", "26"); // 3
        Sub_228_set.insert("26");
        all_values.push_back(Sub_228_set);
        all_compo_names.insert("Sub_228_set");

        Pty_228.add_element(Sub_228);
      }
      Instrmt_41.add_element(Pty_228);
    }
    {
      xml_element CmplxEvnt_41{"CmplxEvnt"};
      multiset<string> CmplxEvnt_41_set;
      CmplxEvnt_41.add_attribute("Typ", "2"); // 2
      CmplxEvnt_41_set.insert("2");
      CmplxEvnt_41.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_2111520814"); // 2
      CmplxEvnt_41_set.insert("ComplexOptPayoutAmount_t_2111520814");
      CmplxEvnt_41.add_attribute("Px", "14038641.810000"); // 2
      CmplxEvnt_41_set.insert("14038641.810000");
      CmplxEvnt_41.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_41_set.insert("3");
      CmplxEvnt_41.add_attribute("PxBndryPrcsn", "13643001.300000"); // 2
      CmplxEvnt_41_set.insert("13643001.300000");
      CmplxEvnt_41.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_41_set.insert("2");
      CmplxEvnt_41.add_attribute("Cond", "2"); // 2
      CmplxEvnt_41_set.insert("2");
      all_values.push_back(CmplxEvnt_41_set);
      all_compo_names.insert("CmplxEvnt_41_set");

      {
        xml_element EvntDts_41{"EvntDts"};
        multiset<string> EvntDts_41_set;
        EvntDts_41.add_attribute("StartDt", "ComplexEventStartDate_t_1704454206"); // 3
        EvntDts_41_set.insert("ComplexEventStartDate_t_1704454206");
        EvntDts_41.add_attribute("EndDt", "ComplexEventEndDate_t_1988915039"); // 3
        EvntDts_41_set.insert("ComplexEventEndDate_t_1988915039");
        all_values.push_back(EvntDts_41_set);
        all_compo_names.insert("EvntDts_41_set");

        {
          xml_element EvntTms_41{"EvntTms"};
          multiset<string> EvntTms_41_set;
          EvntTms_41.add_attribute("StartTm", "1097357940"); // 4
          EvntTms_41_set.insert("1097357940");
          EvntTms_41.add_attribute("EndTm", "2110521036"); // 4
          EvntTms_41_set.insert("2110521036");
          all_values.push_back(EvntTms_41_set);
          all_compo_names.insert("EvntTms_41_set");

          EvntDts_41.add_element(EvntTms_41);
        }
        CmplxEvnt_41.add_element(EvntDts_41);
      }
      Instrmt_41.add_element(CmplxEvnt_41);
    }
    elt.add_element(Instrmt_41);
  } // end Instrmt
  { // FinDetls
    xml_element FinDetls_12{"FinDetls"};
    multiset<string> FinDetls_12_set;
    FinDetls_12.add_attribute("AgmtDesc", "AgreementDesc_t_758850313"); // 1
    FinDetls_12_set.insert("AgreementDesc_t_758850313");
    FinDetls_12.add_attribute("AgmtID", "AgreementID_t_922573988"); // 1
    FinDetls_12_set.insert("AgreementID_t_922573988");
    FinDetls_12.add_attribute("AgmtDt", "AgreementDate_t_1035630434"); // 1
    FinDetls_12_set.insert("AgreementDate_t_1035630434");
    FinDetls_12.add_attribute("AgmtCcy", "GBP"); // 1
    FinDetls_12_set.insert("GBP");
    FinDetls_12.add_attribute("TrmTyp", "1"); // 1
    FinDetls_12_set.insert("1");
    FinDetls_12.add_attribute("StartDt", "StartDate_t_1297348530"); // 1
    FinDetls_12_set.insert("StartDate_t_1297348530");
    FinDetls_12.add_attribute("EndDt", "EndDate_t_477550621"); // 1
    FinDetls_12_set.insert("EndDate_t_477550621");
    FinDetls_12.add_attribute("DlvryTyp", "1"); // 1
    FinDetls_12_set.insert("1");
    FinDetls_12.add_attribute("MgnRatio", "20100475.840000"); // 1
    FinDetls_12_set.insert("20100475.840000");
    all_values.push_back(FinDetls_12_set);
    all_compo_names.insert("FinDetls_12_set");

    elt.add_element(FinDetls_12);
  } // end FinDetls
  { // Undly
    xml_element Undly_54{"Undly"};
    multiset<string> Undly_54_set;
    Undly_54.add_attribute("Sym", "UnderlyingSymbol_t_505429922"); // 1
    Undly_54_set.insert("UnderlyingSymbol_t_505429922");
    Undly_54.add_attribute("Sfx", "WI"); // 1
    Undly_54_set.insert("WI");
    Undly_54.add_attribute("ID", "UnderlyingSecurityID_t_507353904"); // 1
    Undly_54_set.insert("UnderlyingSecurityID_t_507353904");
    Undly_54.add_attribute("Src", "8"); // 1
    Undly_54_set.insert("8");
    Undly_54.add_attribute("Prod", "6"); // 1
    Undly_54_set.insert("6");
    Undly_54.add_attribute("CFI", "UnderlyingCFICode_t_1252292238"); // 1
    Undly_54_set.insert("UnderlyingCFICode_t_1252292238");
    Undly_54.add_attribute("SecTyp", "TINT"); // 1
    Undly_54_set.insert("TINT");
    Undly_54.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_219682558"); // 1
    Undly_54_set.insert("UnderlyingSecuritySubType_t_219682558");
    Undly_54.add_attribute("MMY", "1991666463"); // 1
    Undly_54_set.insert("1991666463");
    Undly_54.add_attribute("Mat", "UnderlyingMaturityDate_t_1652053102"); // 1
    Undly_54_set.insert("UnderlyingMaturityDate_t_1652053102");
    Undly_54.add_attribute("MatTm", "183719724"); // 1
    Undly_54_set.insert("183719724");
    Undly_54.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1248046997"); // 1
    Undly_54_set.insert("UnderlyingCouponPaymentDate_t_1248046997");
    Undly_54.add_attribute("RestrctTyp", "FR"); // 1
    Undly_54_set.insert("FR");
    Undly_54.add_attribute("Snrty", "SR"); // 1
    Undly_54_set.insert("SR");
    Undly_54.add_attribute("NotlPctOut", "9292538.950000"); // 1
    Undly_54_set.insert("9292538.950000");
    Undly_54.add_attribute("OrigNotlPctOut", "426686.130000"); // 1
    Undly_54_set.insert("426686.130000");
    Undly_54.add_attribute("AttchPnt", "11049904.130000"); // 1
    Undly_54_set.insert("11049904.130000");
    Undly_54.add_attribute("DetchPnt", "7706852.860000"); // 1
    Undly_54_set.insert("7706852.860000");
    Undly_54.add_attribute("Issued", "UnderlyingIssueDate_t_1140026553"); // 1
    Undly_54_set.insert("UnderlyingIssueDate_t_1140026553");
    Undly_54.add_attribute("RepoCollSecTyp", "1068027801"); // 1
    Undly_54_set.insert("1068027801");
    Undly_54.add_attribute("RepoTrm", "1529535599"); // 1
    Undly_54_set.insert("1529535599");
    Undly_54.add_attribute("RepoRt", "20626005.410000"); // 1
    Undly_54_set.insert("20626005.410000");
    Undly_54.add_attribute("Fctr", "21036582.350000"); // 1
    Undly_54_set.insert("21036582.350000");
    Undly_54.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1953059600"); // 1
    Undly_54_set.insert("UnderlyingCreditRating_t_1953059600");
    Undly_54.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2105480054"); // 1
    Undly_54_set.insert("UnderlyingInstrRegistry_t_2105480054");
    Undly_54.add_attribute("Ctry", "1199608028"); // 1
    Undly_54_set.insert("1199608028");
    Undly_54.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1102924482"); // 1
    Undly_54_set.insert("UnderlyingStateOrProvinceOfIssue_t_1102924482");
    Undly_54.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_435547027"); // 1
    Undly_54_set.insert("UnderlyingLocaleOfIssue_t_435547027");
    Undly_54.add_attribute("Redeem", "UnderlyingRedemptionDate_t_931182529"); // 1
    Undly_54_set.insert("UnderlyingRedemptionDate_t_931182529");
    Undly_54.add_attribute("StrkPx", "9654884.190000"); // 1
    Undly_54_set.insert("9654884.190000");
    Undly_54.add_attribute("StrkCcy", "CHF"); // 1
    Undly_54_set.insert("CHF");
    Undly_54.add_attribute("OptA", "273470596"); // 1
    Undly_54_set.insert("273470596");
    Undly_54.add_attribute("Mult", "20411756.400000"); // 1
    Undly_54_set.insert("20411756.400000");
    Undly_54.add_attribute("MultTyp", "0"); // 1
    Undly_54_set.insert("0");
    Undly_54.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_54_set.insert("0");
    Undly_54.add_attribute("UOM", "Bbl"); // 1
    Undly_54_set.insert("Bbl");
    Undly_54.add_attribute("UOMQty", "6510146.020000"); // 1
    Undly_54_set.insert("6510146.020000");
    Undly_54.add_attribute("PxUOM", "USD"); // 1
    Undly_54_set.insert("USD");
    Undly_54.add_attribute("PxUOMQty", "9901670.460000"); // 1
    Undly_54_set.insert("9901670.460000");
    Undly_54.add_attribute("TmUnit", "Mo"); // 1
    Undly_54_set.insert("Mo");
    Undly_54.add_attribute("ExerStyle", "2"); // 1
    Undly_54_set.insert("2");
    Undly_54.add_attribute("CpnRt", "907303.950000"); // 1
    Undly_54_set.insert("907303.950000");
    Undly_54.add_attribute("Exch", "UnderlyingSecurityExchange_t_1711744788"); // 1
    Undly_54_set.insert("UnderlyingSecurityExchange_t_1711744788");
    Undly_54.add_attribute("Issr", "UnderlyingIssuer_t_565253074"); // 1
    Undly_54_set.insert("UnderlyingIssuer_t_565253074");
    Undly_54.add_attribute("EncUndIssrLen", "1019984290"); // 1
    Undly_54_set.insert("1019984290");
    Undly_54.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1754413401"); // 1
    Undly_54_set.insert("EncodedUnderlyingIssuer_t_1754413401");
    Undly_54.add_attribute("Desc", "UnderlyingSecurityDesc_t_1670243487"); // 1
    Undly_54_set.insert("UnderlyingSecurityDesc_t_1670243487");
    Undly_54.add_attribute("EncUndSecDescLen", "1790669577"); // 1
    Undly_54_set.insert("1790669577");
    Undly_54.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_746956307"); // 1
    Undly_54_set.insert("EncodedUnderlyingSecurityDesc_t_746956307");
    Undly_54.add_attribute("CPPgm", "UnderlyingCPProgram_t_590787641"); // 1
    Undly_54_set.insert("UnderlyingCPProgram_t_590787641");
    Undly_54.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1172721528"); // 1
    Undly_54_set.insert("UnderlyingCPRegType_t_1172721528");
    Undly_54.add_attribute("AllocPct", "6620732.000000"); // 1
    Undly_54_set.insert("6620732.000000");
    Undly_54.add_attribute("Ccy", "USD"); // 1
    Undly_54_set.insert("USD");
    Undly_54.add_attribute("Qty", "6200696.060000"); // 1
    Undly_54_set.insert("6200696.060000");
    Undly_54.add_attribute("SettlTyp", "4"); // 1
    Undly_54_set.insert("4");
    Undly_54.add_attribute("CashAmt", "UnderlyingCashAmount_t_2081221963"); // 1
    Undly_54_set.insert("UnderlyingCashAmount_t_2081221963");
    Undly_54.add_attribute("CashTyp", "FIXED"); // 1
    Undly_54_set.insert("FIXED");
    Undly_54.add_attribute("Px", "5302691.380000"); // 1
    Undly_54_set.insert("5302691.380000");
    Undly_54.add_attribute("DirtPx", "8992267.340000"); // 1
    Undly_54_set.insert("8992267.340000");
    Undly_54.add_attribute("EndPx", "4419547.220000"); // 1
    Undly_54_set.insert("4419547.220000");
    Undly_54.add_attribute("StartVal", "UnderlyingStartValue_t_1966881589"); // 1
    Undly_54_set.insert("UnderlyingStartValue_t_1966881589");
    Undly_54.add_attribute("CurVal", "UnderlyingCurrentValue_t_1172697330"); // 1
    Undly_54_set.insert("UnderlyingCurrentValue_t_1172697330");
    Undly_54.add_attribute("EndVal", "UnderlyingEndValue_t_335646715"); // 1
    Undly_54_set.insert("UnderlyingEndValue_t_335646715");
    Undly_54.add_attribute("AdjQty", "21335841.080000"); // 1
    Undly_54_set.insert("21335841.080000");
    Undly_54.add_attribute("FxRate", "19340119.150000"); // 1
    Undly_54_set.insert("19340119.150000");
    Undly_54.add_attribute("FxRateCalc", "M"); // 1
    Undly_54_set.insert("M");
    Undly_54.add_attribute("CapValu", "UnderlyingCapValue_t_637115062"); // 1
    Undly_54_set.insert("UnderlyingCapValue_t_637115062");
    Undly_54.add_attribute("SetMeth", "UnderlyingSettlMethod_t_767525410"); // 1
    Undly_54_set.insert("UnderlyingSettlMethod_t_767525410");
    Undly_54.add_attribute("PutCall", "324314344"); // 1
    Undly_54_set.insert("324314344");
    all_values.push_back(Undly_54_set);
    all_compo_names.insert("Undly_54_set");

    {
      xml_element UndAID_54{"UndAID"};
      multiset<string> UndAID_54_set;
      UndAID_54.add_attribute("AltID", "UnderlyingSecurityAltID_t_792699118"); // 2
      UndAID_54_set.insert("UnderlyingSecurityAltID_t_792699118");
      UndAID_54.add_attribute("AltIDSrc", "A"); // 2
      UndAID_54_set.insert("A");
      all_values.push_back(UndAID_54_set);
      all_compo_names.insert("UndAID_54_set");

      Undly_54.add_element(UndAID_54);
    }
    {
      xml_element Stip_88{"Stip"};
      multiset<string> Stip_88_set;
      Stip_88.add_attribute("Typ", "LOTVAR"); // 2
      Stip_88_set.insert("LOTVAR");
      Stip_88.add_attribute("Val", "UnderlyingStipValue_t_356960259"); // 2
      Stip_88_set.insert("UnderlyingStipValue_t_356960259");
      all_values.push_back(Stip_88_set);
      all_compo_names.insert("Stip_88_set");

      Undly_54.add_element(Stip_88);
    }
    {
      xml_element Pty_229{"Pty"};
      multiset<string> Pty_229_set;
      Pty_229.add_attribute("ID", "UnderlyingInstrumentPartyID_t_350011704"); // 2
      Pty_229_set.insert("UnderlyingInstrumentPartyID_t_350011704");
      Pty_229.add_attribute("Src", "1"); // 2
      Pty_229_set.insert("1");
      Pty_229.add_attribute("R", "62"); // 2
      Pty_229_set.insert("62");
      all_values.push_back(Pty_229_set);
      all_compo_names.insert("Pty_229_set");

      {
        xml_element Sub_229{"Sub"};
        multiset<string> Sub_229_set;
        Sub_229.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2020255191"); // 3
        Sub_229_set.insert("UnderlyingInstrumentPartySubID_t_2020255191");
        Sub_229.add_attribute("Typ", "3"); // 3
        Sub_229_set.insert("3");
        all_values.push_back(Sub_229_set);
        all_compo_names.insert("Sub_229_set");

        Pty_229.add_element(Sub_229);
      }
      Undly_54.add_element(Pty_229);
    }
    elt.add_element(Undly_54);
  } // end Undly
  { // Undly
    xml_element Undly_55{"Undly"};
    multiset<string> Undly_55_set;
    Undly_55.add_attribute("Sym", "UnderlyingSymbol_t_710846319"); // 1
    Undly_55_set.insert("UnderlyingSymbol_t_710846319");
    Undly_55.add_attribute("Sfx", "CD"); // 1
    Undly_55_set.insert("CD");
    Undly_55.add_attribute("ID", "UnderlyingSecurityID_t_103452840"); // 1
    Undly_55_set.insert("UnderlyingSecurityID_t_103452840");
    Undly_55.add_attribute("Src", "H"); // 1
    Undly_55_set.insert("H");
    Undly_55.add_attribute("Prod", "2"); // 1
    Undly_55_set.insert("2");
    Undly_55.add_attribute("CFI", "UnderlyingCFICode_t_1081750320"); // 1
    Undly_55_set.insert("UnderlyingCFICode_t_1081750320");
    Undly_55.add_attribute("SecTyp", "MLEG"); // 1
    Undly_55_set.insert("MLEG");
    Undly_55.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_609608021"); // 1
    Undly_55_set.insert("UnderlyingSecuritySubType_t_609608021");
    Undly_55.add_attribute("MMY", "1015488635"); // 1
    Undly_55_set.insert("1015488635");
    Undly_55.add_attribute("Mat", "UnderlyingMaturityDate_t_901122112"); // 1
    Undly_55_set.insert("UnderlyingMaturityDate_t_901122112");
    Undly_55.add_attribute("MatTm", "1139877159"); // 1
    Undly_55_set.insert("1139877159");
    Undly_55.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1914715369"); // 1
    Undly_55_set.insert("UnderlyingCouponPaymentDate_t_1914715369");
    Undly_55.add_attribute("RestrctTyp", "XR"); // 1
    Undly_55_set.insert("XR");
    Undly_55.add_attribute("Snrty", "SD"); // 1
    Undly_55_set.insert("SD");
    Undly_55.add_attribute("NotlPctOut", "9399290.510000"); // 1
    Undly_55_set.insert("9399290.510000");
    Undly_55.add_attribute("OrigNotlPctOut", "16787235.500000"); // 1
    Undly_55_set.insert("16787235.500000");
    Undly_55.add_attribute("AttchPnt", "9453755.610000"); // 1
    Undly_55_set.insert("9453755.610000");
    Undly_55.add_attribute("DetchPnt", "7264573.180000"); // 1
    Undly_55_set.insert("7264573.180000");
    Undly_55.add_attribute("Issued", "UnderlyingIssueDate_t_1012870848"); // 1
    Undly_55_set.insert("UnderlyingIssueDate_t_1012870848");
    Undly_55.add_attribute("RepoCollSecTyp", "1582490623"); // 1
    Undly_55_set.insert("1582490623");
    Undly_55.add_attribute("RepoTrm", "1493982728"); // 1
    Undly_55_set.insert("1493982728");
    Undly_55.add_attribute("RepoRt", "13371851.920000"); // 1
    Undly_55_set.insert("13371851.920000");
    Undly_55.add_attribute("Fctr", "2277060.930000"); // 1
    Undly_55_set.insert("2277060.930000");
    Undly_55.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1278741358"); // 1
    Undly_55_set.insert("UnderlyingCreditRating_t_1278741358");
    Undly_55.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1752229932"); // 1
    Undly_55_set.insert("UnderlyingInstrRegistry_t_1752229932");
    Undly_55.add_attribute("Ctry", "584666352"); // 1
    Undly_55_set.insert("584666352");
    Undly_55.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1628753062"); // 1
    Undly_55_set.insert("UnderlyingStateOrProvinceOfIssue_t_1628753062");
    Undly_55.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1039775315"); // 1
    Undly_55_set.insert("UnderlyingLocaleOfIssue_t_1039775315");
    Undly_55.add_attribute("Redeem", "UnderlyingRedemptionDate_t_548556365"); // 1
    Undly_55_set.insert("UnderlyingRedemptionDate_t_548556365");
    Undly_55.add_attribute("StrkPx", "15015246.050000"); // 1
    Undly_55_set.insert("15015246.050000");
    Undly_55.add_attribute("StrkCcy", "GBP"); // 1
    Undly_55_set.insert("GBP");
    Undly_55.add_attribute("OptA", "1965083790"); // 1
    Undly_55_set.insert("1965083790");
    Undly_55.add_attribute("Mult", "739594.660000"); // 1
    Undly_55_set.insert("739594.660000");
    Undly_55.add_attribute("MultTyp", "0"); // 1
    Undly_55_set.insert("0");
    Undly_55.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_55_set.insert("0");
    Undly_55.add_attribute("UOM", "Bu"); // 1
    Undly_55_set.insert("Bu");
    Undly_55.add_attribute("UOMQty", "3303440.350000"); // 1
    Undly_55_set.insert("3303440.350000");
    Undly_55.add_attribute("PxUOM", "Bcf"); // 1
    Undly_55_set.insert("Bcf");
    Undly_55.add_attribute("PxUOMQty", "237147.740000"); // 1
    Undly_55_set.insert("237147.740000");
    Undly_55.add_attribute("TmUnit", "H"); // 1
    Undly_55_set.insert("H");
    Undly_55.add_attribute("ExerStyle", "2"); // 1
    Undly_55_set.insert("2");
    Undly_55.add_attribute("CpnRt", "19384301.440000"); // 1
    Undly_55_set.insert("19384301.440000");
    Undly_55.add_attribute("Exch", "UnderlyingSecurityExchange_t_427059334"); // 1
    Undly_55_set.insert("UnderlyingSecurityExchange_t_427059334");
    Undly_55.add_attribute("Issr", "UnderlyingIssuer_t_1389398189"); // 1
    Undly_55_set.insert("UnderlyingIssuer_t_1389398189");
    Undly_55.add_attribute("EncUndIssrLen", "730875547"); // 1
    Undly_55_set.insert("730875547");
    Undly_55.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2105782884"); // 1
    Undly_55_set.insert("EncodedUnderlyingIssuer_t_2105782884");
    Undly_55.add_attribute("Desc", "UnderlyingSecurityDesc_t_187290102"); // 1
    Undly_55_set.insert("UnderlyingSecurityDesc_t_187290102");
    Undly_55.add_attribute("EncUndSecDescLen", "1457332866"); // 1
    Undly_55_set.insert("1457332866");
    Undly_55.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_971170084"); // 1
    Undly_55_set.insert("EncodedUnderlyingSecurityDesc_t_971170084");
    Undly_55.add_attribute("CPPgm", "UnderlyingCPProgram_t_1769780725"); // 1
    Undly_55_set.insert("UnderlyingCPProgram_t_1769780725");
    Undly_55.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_803831946"); // 1
    Undly_55_set.insert("UnderlyingCPRegType_t_803831946");
    Undly_55.add_attribute("AllocPct", "1608716.290000"); // 1
    Undly_55_set.insert("1608716.290000");
    Undly_55.add_attribute("Ccy", "JPY"); // 1
    Undly_55_set.insert("JPY");
    Undly_55.add_attribute("Qty", "19131015.610000"); // 1
    Undly_55_set.insert("19131015.610000");
    Undly_55.add_attribute("SettlTyp", "2"); // 1
    Undly_55_set.insert("2");
    Undly_55.add_attribute("CashAmt", "UnderlyingCashAmount_t_1563842718"); // 1
    Undly_55_set.insert("UnderlyingCashAmount_t_1563842718");
    Undly_55.add_attribute("CashTyp", "FIXED"); // 1
    Undly_55_set.insert("FIXED");
    Undly_55.add_attribute("Px", "9832258.880000"); // 1
    Undly_55_set.insert("9832258.880000");
    Undly_55.add_attribute("DirtPx", "9178836.760000"); // 1
    Undly_55_set.insert("9178836.760000");
    Undly_55.add_attribute("EndPx", "7758998.550000"); // 1
    Undly_55_set.insert("7758998.550000");
    Undly_55.add_attribute("StartVal", "UnderlyingStartValue_t_95144924"); // 1
    Undly_55_set.insert("UnderlyingStartValue_t_95144924");
    Undly_55.add_attribute("CurVal", "UnderlyingCurrentValue_t_735483818"); // 1
    Undly_55_set.insert("UnderlyingCurrentValue_t_735483818");
    Undly_55.add_attribute("EndVal", "UnderlyingEndValue_t_849859321"); // 1
    Undly_55_set.insert("UnderlyingEndValue_t_849859321");
    Undly_55.add_attribute("AdjQty", "5799834.810000"); // 1
    Undly_55_set.insert("5799834.810000");
    Undly_55.add_attribute("FxRate", "15636053.730000"); // 1
    Undly_55_set.insert("15636053.730000");
    Undly_55.add_attribute("FxRateCalc", "M"); // 1
    Undly_55_set.insert("M");
    Undly_55.add_attribute("CapValu", "UnderlyingCapValue_t_910327516"); // 1
    Undly_55_set.insert("UnderlyingCapValue_t_910327516");
    Undly_55.add_attribute("SetMeth", "UnderlyingSettlMethod_t_853851301"); // 1
    Undly_55_set.insert("UnderlyingSettlMethod_t_853851301");
    Undly_55.add_attribute("PutCall", "2029283883"); // 1
    Undly_55_set.insert("2029283883");
    all_values.push_back(Undly_55_set);
    all_compo_names.insert("Undly_55_set");

    {
      xml_element UndAID_55{"UndAID"};
      multiset<string> UndAID_55_set;
      UndAID_55.add_attribute("AltID", "UnderlyingSecurityAltID_t_2141793663"); // 2
      UndAID_55_set.insert("UnderlyingSecurityAltID_t_2141793663");
      UndAID_55.add_attribute("AltIDSrc", "6"); // 2
      UndAID_55_set.insert("6");
      all_values.push_back(UndAID_55_set);
      all_compo_names.insert("UndAID_55_set");

      Undly_55.add_element(UndAID_55);
    }
    {
      xml_element Stip_89{"Stip"};
      multiset<string> Stip_89_set;
      Stip_89.add_attribute("Typ", "YIELD"); // 2
      Stip_89_set.insert("YIELD");
      Stip_89.add_attribute("Val", "UnderlyingStipValue_t_421369350"); // 2
      Stip_89_set.insert("UnderlyingStipValue_t_421369350");
      all_values.push_back(Stip_89_set);
      all_compo_names.insert("Stip_89_set");

      Undly_55.add_element(Stip_89);
    }
    {
      xml_element Pty_230{"Pty"};
      multiset<string> Pty_230_set;
      Pty_230.add_attribute("ID", "UnderlyingInstrumentPartyID_t_525888930"); // 2
      Pty_230_set.insert("UnderlyingInstrumentPartyID_t_525888930");
      Pty_230.add_attribute("Src", "H"); // 2
      Pty_230_set.insert("H");
      Pty_230.add_attribute("R", "19"); // 2
      Pty_230_set.insert("19");
      all_values.push_back(Pty_230_set);
      all_compo_names.insert("Pty_230_set");

      {
        xml_element Sub_230{"Sub"};
        multiset<string> Sub_230_set;
        Sub_230.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_713179032"); // 3
        Sub_230_set.insert("UnderlyingInstrumentPartySubID_t_713179032");
        Sub_230.add_attribute("Typ", "13"); // 3
        Sub_230_set.insert("13");
        all_values.push_back(Sub_230_set);
        all_compo_names.insert("Sub_230_set");

        Pty_230.add_element(Sub_230);
      }
      Undly_55.add_element(Pty_230);
    }
    elt.add_element(Undly_55);
  } // end Undly
  { // Undly
    xml_element Undly_56{"Undly"};
    multiset<string> Undly_56_set;
    Undly_56.add_attribute("Sym", "UnderlyingSymbol_t_1350838671"); // 1
    Undly_56_set.insert("UnderlyingSymbol_t_1350838671");
    Undly_56.add_attribute("Sfx", "WI"); // 1
    Undly_56_set.insert("WI");
    Undly_56.add_attribute("ID", "UnderlyingSecurityID_t_517303443"); // 1
    Undly_56_set.insert("UnderlyingSecurityID_t_517303443");
    Undly_56.add_attribute("Src", "D"); // 1
    Undly_56_set.insert("D");
    Undly_56.add_attribute("Prod", "9"); // 1
    Undly_56_set.insert("9");
    Undly_56.add_attribute("CFI", "UnderlyingCFICode_t_452393099"); // 1
    Undly_56_set.insert("UnderlyingCFICode_t_452393099");
    Undly_56.add_attribute("SecTyp", "MPO"); // 1
    Undly_56_set.insert("MPO");
    Undly_56.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_620148803"); // 1
    Undly_56_set.insert("UnderlyingSecuritySubType_t_620148803");
    Undly_56.add_attribute("MMY", "2016235818"); // 1
    Undly_56_set.insert("2016235818");
    Undly_56.add_attribute("Mat", "UnderlyingMaturityDate_t_2082721442"); // 1
    Undly_56_set.insert("UnderlyingMaturityDate_t_2082721442");
    Undly_56.add_attribute("MatTm", "1603374691"); // 1
    Undly_56_set.insert("1603374691");
    Undly_56.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_786635846"); // 1
    Undly_56_set.insert("UnderlyingCouponPaymentDate_t_786635846");
    Undly_56.add_attribute("RestrctTyp", "MR"); // 1
    Undly_56_set.insert("MR");
    Undly_56.add_attribute("Snrty", "SD"); // 1
    Undly_56_set.insert("SD");
    Undly_56.add_attribute("NotlPctOut", "15221196.640000"); // 1
    Undly_56_set.insert("15221196.640000");
    Undly_56.add_attribute("OrigNotlPctOut", "15609969.700000"); // 1
    Undly_56_set.insert("15609969.700000");
    Undly_56.add_attribute("AttchPnt", "1310194.480000"); // 1
    Undly_56_set.insert("1310194.480000");
    Undly_56.add_attribute("DetchPnt", "9382413.890000"); // 1
    Undly_56_set.insert("9382413.890000");
    Undly_56.add_attribute("Issued", "UnderlyingIssueDate_t_1419082431"); // 1
    Undly_56_set.insert("UnderlyingIssueDate_t_1419082431");
    Undly_56.add_attribute("RepoCollSecTyp", "1041346964"); // 1
    Undly_56_set.insert("1041346964");
    Undly_56.add_attribute("RepoTrm", "1792092690"); // 1
    Undly_56_set.insert("1792092690");
    Undly_56.add_attribute("RepoRt", "13008826.660000"); // 1
    Undly_56_set.insert("13008826.660000");
    Undly_56.add_attribute("Fctr", "10356569.800000"); // 1
    Undly_56_set.insert("10356569.800000");
    Undly_56.add_attribute("CrdRtg", "UnderlyingCreditRating_t_928583432"); // 1
    Undly_56_set.insert("UnderlyingCreditRating_t_928583432");
    Undly_56.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_973629397"); // 1
    Undly_56_set.insert("UnderlyingInstrRegistry_t_973629397");
    Undly_56.add_attribute("Ctry", "1457026330"); // 1
    Undly_56_set.insert("1457026330");
    Undly_56.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1454472362"); // 1
    Undly_56_set.insert("UnderlyingStateOrProvinceOfIssue_t_1454472362");
    Undly_56.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1377251675"); // 1
    Undly_56_set.insert("UnderlyingLocaleOfIssue_t_1377251675");
    Undly_56.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1836694916"); // 1
    Undly_56_set.insert("UnderlyingRedemptionDate_t_1836694916");
    Undly_56.add_attribute("StrkPx", "201677.470000"); // 1
    Undly_56_set.insert("201677.470000");
    Undly_56.add_attribute("StrkCcy", "CHF"); // 1
    Undly_56_set.insert("CHF");
    Undly_56.add_attribute("OptA", "355643856"); // 1
    Undly_56_set.insert("355643856");
    Undly_56.add_attribute("Mult", "16080266.150000"); // 1
    Undly_56_set.insert("16080266.150000");
    Undly_56.add_attribute("MultTyp", "2"); // 1
    Undly_56_set.insert("2");
    Undly_56.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_56_set.insert("1");
    Undly_56.add_attribute("UOM", "Bbl"); // 1
    Undly_56_set.insert("Bbl");
    Undly_56.add_attribute("UOMQty", "16816048.050000"); // 1
    Undly_56_set.insert("16816048.050000");
    Undly_56.add_attribute("PxUOM", "USD"); // 1
    Undly_56_set.insert("USD");
    Undly_56.add_attribute("PxUOMQty", "19291718.840000"); // 1
    Undly_56_set.insert("19291718.840000");
    Undly_56.add_attribute("TmUnit", "Min"); // 1
    Undly_56_set.insert("Min");
    Undly_56.add_attribute("ExerStyle", "0"); // 1
    Undly_56_set.insert("0");
    Undly_56.add_attribute("CpnRt", "5683240.820000"); // 1
    Undly_56_set.insert("5683240.820000");
    Undly_56.add_attribute("Exch", "UnderlyingSecurityExchange_t_180496600"); // 1
    Undly_56_set.insert("UnderlyingSecurityExchange_t_180496600");
    Undly_56.add_attribute("Issr", "UnderlyingIssuer_t_168198950"); // 1
    Undly_56_set.insert("UnderlyingIssuer_t_168198950");
    Undly_56.add_attribute("EncUndIssrLen", "2090443746"); // 1
    Undly_56_set.insert("2090443746");
    Undly_56.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1741493570"); // 1
    Undly_56_set.insert("EncodedUnderlyingIssuer_t_1741493570");
    Undly_56.add_attribute("Desc", "UnderlyingSecurityDesc_t_299218398"); // 1
    Undly_56_set.insert("UnderlyingSecurityDesc_t_299218398");
    Undly_56.add_attribute("EncUndSecDescLen", "881201487"); // 1
    Undly_56_set.insert("881201487");
    Undly_56.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1013092353"); // 1
    Undly_56_set.insert("EncodedUnderlyingSecurityDesc_t_1013092353");
    Undly_56.add_attribute("CPPgm", "UnderlyingCPProgram_t_1340565363"); // 1
    Undly_56_set.insert("UnderlyingCPProgram_t_1340565363");
    Undly_56.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_525810530"); // 1
    Undly_56_set.insert("UnderlyingCPRegType_t_525810530");
    Undly_56.add_attribute("AllocPct", "1664913.710000"); // 1
    Undly_56_set.insert("1664913.710000");
    Undly_56.add_attribute("Ccy", "JPY"); // 1
    Undly_56_set.insert("JPY");
    Undly_56.add_attribute("Qty", "11401207.680000"); // 1
    Undly_56_set.insert("11401207.680000");
    Undly_56.add_attribute("SettlTyp", "2"); // 1
    Undly_56_set.insert("2");
    Undly_56.add_attribute("CashAmt", "UnderlyingCashAmount_t_761382676"); // 1
    Undly_56_set.insert("UnderlyingCashAmount_t_761382676");
    Undly_56.add_attribute("CashTyp", "FIXED"); // 1
    Undly_56_set.insert("FIXED");
    Undly_56.add_attribute("Px", "13749762.930000"); // 1
    Undly_56_set.insert("13749762.930000");
    Undly_56.add_attribute("DirtPx", "7815504.230000"); // 1
    Undly_56_set.insert("7815504.230000");
    Undly_56.add_attribute("EndPx", "14606119.680000"); // 1
    Undly_56_set.insert("14606119.680000");
    Undly_56.add_attribute("StartVal", "UnderlyingStartValue_t_267542585"); // 1
    Undly_56_set.insert("UnderlyingStartValue_t_267542585");
    Undly_56.add_attribute("CurVal", "UnderlyingCurrentValue_t_1137194280"); // 1
    Undly_56_set.insert("UnderlyingCurrentValue_t_1137194280");
    Undly_56.add_attribute("EndVal", "UnderlyingEndValue_t_921154935"); // 1
    Undly_56_set.insert("UnderlyingEndValue_t_921154935");
    Undly_56.add_attribute("AdjQty", "6718191.760000"); // 1
    Undly_56_set.insert("6718191.760000");
    Undly_56.add_attribute("FxRate", "16783174.160000"); // 1
    Undly_56_set.insert("16783174.160000");
    Undly_56.add_attribute("FxRateCalc", "D"); // 1
    Undly_56_set.insert("D");
    Undly_56.add_attribute("CapValu", "UnderlyingCapValue_t_205940333"); // 1
    Undly_56_set.insert("UnderlyingCapValue_t_205940333");
    Undly_56.add_attribute("SetMeth", "UnderlyingSettlMethod_t_692105708"); // 1
    Undly_56_set.insert("UnderlyingSettlMethod_t_692105708");
    Undly_56.add_attribute("PutCall", "615779238"); // 1
    Undly_56_set.insert("615779238");
    all_values.push_back(Undly_56_set);
    all_compo_names.insert("Undly_56_set");

    {
      xml_element UndAID_56{"UndAID"};
      multiset<string> UndAID_56_set;
      UndAID_56.add_attribute("AltID", "UnderlyingSecurityAltID_t_1822782932"); // 2
      UndAID_56_set.insert("UnderlyingSecurityAltID_t_1822782932");
      UndAID_56.add_attribute("AltIDSrc", "5"); // 2
      UndAID_56_set.insert("5");
      all_values.push_back(UndAID_56_set);
      all_compo_names.insert("UndAID_56_set");

      Undly_56.add_element(UndAID_56);
    }
    {
      xml_element Stip_90{"Stip"};
      multiset<string> Stip_90_set;
      Stip_90.add_attribute("Typ", "PSA"); // 2
      Stip_90_set.insert("PSA");
      Stip_90.add_attribute("Val", "UnderlyingStipValue_t_2003279532"); // 2
      Stip_90_set.insert("UnderlyingStipValue_t_2003279532");
      all_values.push_back(Stip_90_set);
      all_compo_names.insert("Stip_90_set");

      Undly_56.add_element(Stip_90);
    }
    {
      xml_element Pty_231{"Pty"};
      multiset<string> Pty_231_set;
      Pty_231.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1477467640"); // 2
      Pty_231_set.insert("UnderlyingInstrumentPartyID_t_1477467640");
      Pty_231.add_attribute("Src", "8"); // 2
      Pty_231_set.insert("8");
      Pty_231.add_attribute("R", "58"); // 2
      Pty_231_set.insert("58");
      all_values.push_back(Pty_231_set);
      all_compo_names.insert("Pty_231_set");

      {
        xml_element Sub_231{"Sub"};
        multiset<string> Sub_231_set;
        Sub_231.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1776686039"); // 3
        Sub_231_set.insert("UnderlyingInstrumentPartySubID_t_1776686039");
        Sub_231.add_attribute("Typ", "19"); // 3
        Sub_231_set.insert("19");
        all_values.push_back(Sub_231_set);
        all_compo_names.insert("Sub_231_set");

        Pty_231.add_element(Sub_231);
      }
      Undly_56.add_element(Pty_231);
    }
    elt.add_element(Undly_56);
  } // end Undly
  { // Stip
    xml_element Stip_91{"Stip"};
    multiset<string> Stip_91_set;
    Stip_91.add_attribute("Typ", "ORDRINCR"); // 1
    Stip_91_set.insert("ORDRINCR");
    Stip_91.add_attribute("Val", "StipulationValue_t_386591788"); // 1
    Stip_91_set.insert("StipulationValue_t_386591788");
    all_values.push_back(Stip_91_set);
    all_compo_names.insert("Stip_91_set");

    elt.add_element(Stip_91);
  } // end Stip
  { // Stip
    xml_element Stip_92{"Stip"};
    multiset<string> Stip_92_set;
    Stip_92.add_attribute("Typ", "HAIRCUT"); // 1
    Stip_92_set.insert("HAIRCUT");
    Stip_92.add_attribute("Val", "StipulationValue_t_1198506449"); // 1
    Stip_92_set.insert("StipulationValue_t_1198506449");
    all_values.push_back(Stip_92_set);
    all_compo_names.insert("Stip_92_set");

    elt.add_element(Stip_92);
  } // end Stip
  { // Stip
    xml_element Stip_93{"Stip"};
    multiset<string> Stip_93_set;
    Stip_93.add_attribute("Typ", "INTERNALPX"); // 1
    Stip_93_set.insert("INTERNALPX");
    Stip_93.add_attribute("Val", "StipulationValue_t_1769510300"); // 1
    Stip_93_set.insert("StipulationValue_t_1769510300");
    all_values.push_back(Stip_93_set);
    all_compo_names.insert("Stip_93_set");

    elt.add_element(Stip_93);
  } // end Stip
  { // OrdQty
    xml_element OrdQty_15{"OrdQty"};
    multiset<string> OrdQty_15_set;
    OrdQty_15.add_attribute("Qty", "7367878.260000"); // 1
    OrdQty_15_set.insert("7367878.260000");
    OrdQty_15.add_attribute("Cash", "4548847.790000"); // 1
    OrdQty_15_set.insert("4548847.790000");
    OrdQty_15.add_attribute("Pct", "21393990.960000"); // 1
    OrdQty_15_set.insert("21393990.960000");
    OrdQty_15.add_attribute("RndDir", "0"); // 1
    OrdQty_15_set.insert("0");
    OrdQty_15.add_attribute("RndMod", "12364352.020000"); // 1
    OrdQty_15_set.insert("12364352.020000");
    all_values.push_back(OrdQty_15_set);
    all_compo_names.insert("OrdQty_15_set");

    elt.add_element(OrdQty_15);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_6{"TrgrInstr"};
    multiset<string> TrgrInstr_6_set;
    TrgrInstr_6.add_attribute("TrgrTyp", "1"); // 1
    TrgrInstr_6_set.insert("1");
    TrgrInstr_6.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_6_set.insert("1");
    TrgrInstr_6.add_attribute("TrgrPx", "2261458.340000"); // 1
    TrgrInstr_6_set.insert("2261458.340000");
    TrgrInstr_6.add_attribute("TrgrSym", "TriggerSymbol_t_226198703"); // 1
    TrgrInstr_6_set.insert("TriggerSymbol_t_226198703");
    TrgrInstr_6.add_attribute("TrgrSecID", "TriggerSecurityID_t_903642233"); // 1
    TrgrInstr_6_set.insert("TriggerSecurityID_t_903642233");
    TrgrInstr_6.add_attribute("TrgrSecIDSrc", "A"); // 1
    TrgrInstr_6_set.insert("A");
    TrgrInstr_6.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1060289705"); // 1
    TrgrInstr_6_set.insert("TriggerSecurityDesc_t_1060289705");
    TrgrInstr_6.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_6_set.insert("5");
    TrgrInstr_6.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_6_set.insert("3");
    TrgrInstr_6.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_6_set.insert("D");
    TrgrInstr_6.add_attribute("TrgrNewPx", "7848818.510000"); // 1
    TrgrInstr_6_set.insert("7848818.510000");
    TrgrInstr_6.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_6_set.insert("2");
    TrgrInstr_6.add_attribute("TrgrNewQty", "7126886.150000"); // 1
    TrgrInstr_6_set.insert("7126886.150000");
    TrgrInstr_6.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_640677735"); // 1
    TrgrInstr_6_set.insert("TriggerTradingSessionID_t_640677735");
    TrgrInstr_6.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1088337994"); // 1
    TrgrInstr_6_set.insert("TriggerTradingSessionSubID_t_1088337994");
    all_values.push_back(TrgrInstr_6_set);
    all_compo_names.insert("TrgrInstr_6_set");

    elt.add_element(TrgrInstr_6);
  } // end TrgrInstr
  { // SprdBnchmkCurve
    xml_element SprdBnchmkCurve_17{"SprdBnchmkCurve"};
    multiset<string> SprdBnchmkCurve_17_set;
    SprdBnchmkCurve_17.add_attribute("Spread", "18397520.340000"); // 1
    SprdBnchmkCurve_17_set.insert("18397520.340000");
    SprdBnchmkCurve_17.add_attribute("Ccy", "EUR"); // 1
    SprdBnchmkCurve_17_set.insert("EUR");
    SprdBnchmkCurve_17.add_attribute("Name", "SONIA"); // 1
    SprdBnchmkCurve_17_set.insert("SONIA");
    SprdBnchmkCurve_17.add_attribute("Point", "BenchmarkCurvePoint_t_553381703"); // 1
    SprdBnchmkCurve_17_set.insert("BenchmarkCurvePoint_t_553381703");
    SprdBnchmkCurve_17.add_attribute("Px", "16873081.390000"); // 1
    SprdBnchmkCurve_17_set.insert("16873081.390000");
    SprdBnchmkCurve_17.add_attribute("PxTyp", "6"); // 1
    SprdBnchmkCurve_17_set.insert("6");
    SprdBnchmkCurve_17.add_attribute("SecID", "BenchmarkSecurityID_t_1182771235"); // 1
    SprdBnchmkCurve_17_set.insert("BenchmarkSecurityID_t_1182771235");
    SprdBnchmkCurve_17.add_attribute("SecIDSrc", "7"); // 1
    SprdBnchmkCurve_17_set.insert("7");
    all_values.push_back(SprdBnchmkCurve_17_set);
    all_compo_names.insert("SprdBnchmkCurve_17_set");

    elt.add_element(SprdBnchmkCurve_17);
  } // end SprdBnchmkCurve
  { // Yield
    xml_element Yield_12{"Yield"};
    multiset<string> Yield_12_set;
    Yield_12.add_attribute("Typ", "SEMIANNUAL"); // 1
    Yield_12_set.insert("SEMIANNUAL");
    Yield_12.add_attribute("Yld", "8047978.870000"); // 1
    Yield_12_set.insert("8047978.870000");
    Yield_12.add_attribute("CalcDt", "YieldCalcDate_t_1475118766"); // 1
    Yield_12_set.insert("YieldCalcDate_t_1475118766");
    Yield_12.add_attribute("RedDt", "YieldRedemptionDate_t_88028315"); // 1
    Yield_12_set.insert("YieldRedemptionDate_t_88028315");
    Yield_12.add_attribute("RedPx", "7967133.360000"); // 1
    Yield_12_set.insert("7967133.360000");
    Yield_12.add_attribute("RedPxTyp", "4"); // 1
    Yield_12_set.insert("4");
    all_values.push_back(Yield_12_set);
    all_compo_names.insert("Yield_12_set");

    elt.add_element(Yield_12);
  } // end Yield
  { // Comm
    xml_element Comm_16{"Comm"};
    multiset<string> Comm_16_set;
    Comm_16.add_attribute("Comm", "Commission_t_1324463517"); // 1
    Comm_16_set.insert("Commission_t_1324463517");
    Comm_16.add_attribute("CommTyp", "3"); // 1
    Comm_16_set.insert("3");
    Comm_16.add_attribute("Ccy", "USD"); // 1
    Comm_16_set.insert("USD");
    Comm_16.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_16_set.insert("N");
    all_values.push_back(Comm_16_set);
    all_compo_names.insert("Comm_16_set");

    elt.add_element(Comm_16);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_6{"PegInstr"};
    multiset<string> PegInstr_6_set;
    PegInstr_6.add_attribute("OfstVal", "4273808.790000"); // 1
    PegInstr_6_set.insert("4273808.790000");
    PegInstr_6.add_attribute("PegPxTyp", "4"); // 1
    PegInstr_6_set.insert("4");
    PegInstr_6.add_attribute("MoveTyp", "1"); // 1
    PegInstr_6_set.insert("1");
    PegInstr_6.add_attribute("OfstTyp", "1"); // 1
    PegInstr_6_set.insert("1");
    PegInstr_6.add_attribute("LmtTyp", "2"); // 1
    PegInstr_6_set.insert("2");
    PegInstr_6.add_attribute("RndDir", "1"); // 1
    PegInstr_6_set.insert("1");
    PegInstr_6.add_attribute("Scope", "1"); // 1
    PegInstr_6_set.insert("1");
    PegInstr_6.add_attribute("PegSecurityIDSource", "2"); // 1
    PegInstr_6_set.insert("2");
    PegInstr_6.add_attribute("PegSecID", "PegSecurityID_t_1629519423"); // 1
    PegInstr_6_set.insert("PegSecurityID_t_1629519423");
    PegInstr_6.add_attribute("PgSymbl", "PegSymbol_t_815039384"); // 1
    PegInstr_6_set.insert("PegSymbol_t_815039384");
    PegInstr_6.add_attribute("PegSecDesc", "PegSecurityDesc_t_308398965"); // 1
    PegInstr_6_set.insert("PegSecurityDesc_t_308398965");
    all_values.push_back(PegInstr_6_set);
    all_compo_names.insert("PegInstr_6_set");

    elt.add_element(PegInstr_6);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_6{"DiscInstr"};
    multiset<string> DiscInstr_6_set;
    DiscInstr_6.add_attribute("DsctnInst", "2"); // 1
    DiscInstr_6_set.insert("2");
    DiscInstr_6.add_attribute("OfstValu", "9055229.260000"); // 1
    DiscInstr_6_set.insert("9055229.260000");
    DiscInstr_6.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_6_set.insert("0");
    DiscInstr_6.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_6_set.insert("3");
    DiscInstr_6.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_6_set.insert("0");
    DiscInstr_6.add_attribute("RndDir", "2"); // 1
    DiscInstr_6_set.insert("2");
    DiscInstr_6.add_attribute("Scope", "1"); // 1
    DiscInstr_6_set.insert("1");
    all_values.push_back(DiscInstr_6_set);
    all_compo_names.insert("DiscInstr_6_set");

    elt.add_element(DiscInstr_6);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_10{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_10_set;
    StrtPrmGrp_10.add_attribute("StrtPrmNme", "StrategyParameterName_t_1304094781"); // 1
    StrtPrmGrp_10_set.insert("StrategyParameterName_t_1304094781");
    StrtPrmGrp_10.add_attribute("StrtPrmTyp", "1"); // 1
    StrtPrmGrp_10_set.insert("1");
    StrtPrmGrp_10.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1298990104"); // 1
    StrtPrmGrp_10_set.insert("StrategyParameterValue_t_1298990104");
    all_values.push_back(StrtPrmGrp_10_set);
    all_compo_names.insert("StrtPrmGrp_10_set");

    elt.add_element(StrtPrmGrp_10);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_11{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_11_set;
    StrtPrmGrp_11.add_attribute("StrtPrmNme", "StrategyParameterName_t_631729899"); // 1
    StrtPrmGrp_11_set.insert("StrategyParameterName_t_631729899");
    StrtPrmGrp_11.add_attribute("StrtPrmTyp", "5"); // 1
    StrtPrmGrp_11_set.insert("5");
    StrtPrmGrp_11.add_attribute("StrtPrmVal", "StrategyParameterValue_t_2095703440"); // 1
    StrtPrmGrp_11_set.insert("StrategyParameterValue_t_2095703440");
    all_values.push_back(StrtPrmGrp_11_set);
    all_compo_names.insert("StrtPrmGrp_11_set");

    elt.add_element(StrtPrmGrp_11);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_12{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_12_set;
    StrtPrmGrp_12.add_attribute("StrtPrmNme", "StrategyParameterName_t_2071129137"); // 1
    StrtPrmGrp_12_set.insert("StrategyParameterName_t_2071129137");
    StrtPrmGrp_12.add_attribute("StrtPrmTyp", "28"); // 1
    StrtPrmGrp_12_set.insert("28");
    StrtPrmGrp_12.add_attribute("StrtPrmVal", "StrategyParameterValue_t_49976896"); // 1
    StrtPrmGrp_12_set.insert("StrategyParameterValue_t_49976896");
    all_values.push_back(StrtPrmGrp_12_set);
    all_compo_names.insert("StrtPrmGrp_12_set");

    elt.add_element(StrtPrmGrp_12);
  } // end StrtPrmGrp
  { // TrdRegTS
    xml_element TrdRegTS_10{"TrdRegTS"};
    multiset<string> TrdRegTS_10_set;
    TrdRegTS_10.add_attribute("TS", "TrdRegTimestamp_t_1263239961"); // 1
    TrdRegTS_10_set.insert("TrdRegTimestamp_t_1263239961");
    TrdRegTS_10.add_attribute("Typ", "3"); // 1
    TrdRegTS_10_set.insert("3");
    TrdRegTS_10.add_attribute("Src", "TrdRegTimestampOrigin_t_2022248662"); // 1
    TrdRegTS_10_set.insert("TrdRegTimestampOrigin_t_2022248662");
    TrdRegTS_10.add_attribute("DskTyp", "O"); // 1
    TrdRegTS_10_set.insert("O");
    TrdRegTS_10.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_10_set.insert("1");
    TrdRegTS_10.add_attribute("DskOrdHndlInst", "DIR"); // 1
    TrdRegTS_10_set.insert("DIR");
    all_values.push_back(TrdRegTS_10_set);
    all_compo_names.insert("TrdRegTS_10_set");

    elt.add_element(TrdRegTS_10);
  } // end TrdRegTS
  { // TrdRegTS
    xml_element TrdRegTS_11{"TrdRegTS"};
    multiset<string> TrdRegTS_11_set;
    TrdRegTS_11.add_attribute("TS", "TrdRegTimestamp_t_32535886"); // 1
    TrdRegTS_11_set.insert("TrdRegTimestamp_t_32535886");
    TrdRegTS_11.add_attribute("Typ", "3"); // 1
    TrdRegTS_11_set.insert("3");
    TrdRegTS_11.add_attribute("Src", "TrdRegTimestampOrigin_t_1586090108"); // 1
    TrdRegTS_11_set.insert("TrdRegTimestampOrigin_t_1586090108");
    TrdRegTS_11.add_attribute("DskTyp", "T"); // 1
    TrdRegTS_11_set.insert("T");
    TrdRegTS_11.add_attribute("DskTypSrc", "1"); // 1
    TrdRegTS_11_set.insert("1");
    TrdRegTS_11.add_attribute("DskOrdHndlInst", "SCL"); // 1
    TrdRegTS_11_set.insert("SCL");
    all_values.push_back(TrdRegTS_11_set);
    all_compo_names.insert("TrdRegTS_11_set");

    elt.add_element(TrdRegTS_11);
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
