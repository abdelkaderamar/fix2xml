#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/MultilegOrderCancelReplace.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( MultilegOrderCancelReplace_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MlegOrdCxlRplc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_830459589"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrderID_t_830459589");
  elt.add_attribute("OrigClOrdID", "OrigClOrdID_t_118345438"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrigClOrdID_t_118345438");
  elt.add_attribute("ClOrdID", "ClOrdID_t_733568106"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ClOrdID_t_733568106");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1653197341"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("SecondaryClOrdID_t_1653197341");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_2056554708"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ClOrdLinkID_t_2056554708");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_1657984758"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrigOrdModTime_t_1657984758");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_838309873"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TradeOriginationDate_t_838309873");
  elt.add_attribute("TrdDt", "TradeDate_t_1337821430"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TradeDate_t_1337821430");
  elt.add_attribute("Acct", "Account_t_667426416"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Account_t_667426416");
  elt.add_attribute("AcctIDSrc", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("AcctTyp", "6"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("6");
  elt.add_attribute("DayBkngInst", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("BkngUnit", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_1090166548"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("AllocID_t_1090166548");
  elt.add_attribute("SettlTyp", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("SettlDt", "SettlDate_t_103095034"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("SettlDate_t_103095034");
  elt.add_attribute("CshMgn", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("ClrFeeInd", "B"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("B");
  elt.add_attribute("HandlInst", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("ExecInst", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("MinQty", "18404842.840000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("18404842.840000");
  elt.add_attribute("MtchInc", "14600442.240000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("14600442.240000");
  elt.add_attribute("MxPxLvls", "1026563446"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1026563446");
  elt.add_attribute("MaxFloor", "9067108.540000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("9067108.540000");
  elt.add_attribute("ExDest", "ExDestination_t_1673460783"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExDestination_t_1673460783");
  elt.add_attribute("ExDestIDSrc", "D"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("D");
  elt.add_attribute("ProcCode", "6"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("6");
  elt.add_attribute("Side", "4"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("4");
  elt.add_attribute("PrevClsPx", "545503.530000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("545503.530000");
  elt.add_attribute("SwapPnts", "2296154.280000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2296154.280000");
  elt.add_attribute("LocReqd", "N"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_172895791"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TransactTime_t_172895791");
  elt.add_attribute("QtyTyp", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("OrdTyp", "F"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("F");
  elt.add_attribute("MlegModel", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("MlegPxMeth", "5"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("5");
  elt.add_attribute("PxTyp", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("Px", "14197882.820000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("14197882.820000");
  elt.add_attribute("PxPrtScp", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("StopPx", "10242513.130000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("10242513.130000");
  elt.add_attribute("Ccy", "CAN"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("CAN");
  elt.add_attribute("ComplianceID", "ComplianceID_t_891540019"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ComplianceID_t_891540019");
  elt.add_attribute("SolFlag", "N"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("N");
  elt.add_attribute("IOIID", "IOIID_t_1078626817"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("IOIID_t_1078626817");
  elt.add_attribute("QID", "QuoteID_t_897347843"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("QuoteID_t_897347843");
  elt.add_attribute("TmInForce", "5"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("5");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1984003092"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EffectiveTime_t_1984003092");
  elt.add_attribute("ExpireDt", "ExpireDate_t_1731162439"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExpireDate_t_1731162439");
  elt.add_attribute("ExpireTm", "ExpireTime_t_114488778"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExpireTime_t_114488778");
  elt.add_attribute("GTBkngInst", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("Cpcty", "P"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("P");
  elt.add_attribute("Rstctions", "D"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("D");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("ForexReq", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("SettlCcy", "CAN"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("CAN");
  elt.add_attribute("BkngTyp", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_1271966050"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Text_t_1271966050");
  elt.add_attribute("EncTxtLen", "1486239696"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1486239696");
  elt.add_attribute("EncTxt", "EncodedText_t_189682789"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EncodedText_t_189682789");
  elt.add_attribute("PosEfct", "D"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("D");
  elt.add_attribute("Covered", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "7289544.270000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("7289544.270000");
  elt.add_attribute("TgtStrategy", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_775624227"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TargetStrategyParameters_t_775624227");
  elt.add_attribute("RFR", "21065359.380000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("21065359.380000");
  elt.add_attribute("ParticipationRt", "7991333.270000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("7991333.270000");
  elt.add_attribute("CxllationRights", "M"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("M");
  elt.add_attribute("MnyLaunderingStat", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("RegistID", "RegistID_t_1191350179"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("RegistID_t_1191350179");
  elt.add_attribute("Designation", "Designation_t_1905195558"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Designation_t_1905195558");
  elt.add_attribute("MLEGRptTypReq", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  all_values.push_back(MultilegOrderCancelReplace_message_t_0);
  all_compo_names.insert("MultilegOrderCancelReplace_message_t");

  { // Hdr
    xml_element Hdr_48{"Hdr"};
    multiset<string> Hdr_48_set;
    Hdr_48.add_attribute("SeqNum", "1571683519"); // 1
    Hdr_48_set.insert("1571683519");
    Hdr_48.add_attribute("SID", "SenderCompID_t_836338727"); // 1
    Hdr_48_set.insert("SenderCompID_t_836338727");
    Hdr_48.add_attribute("TID", "TargetCompID_t_624707818"); // 1
    Hdr_48_set.insert("TargetCompID_t_624707818");
    Hdr_48.add_attribute("OBID", "OnBehalfOfCompID_t_2055111894"); // 1
    Hdr_48_set.insert("OnBehalfOfCompID_t_2055111894");
    Hdr_48.add_attribute("D2ID", "DeliverToCompID_t_672858172"); // 1
    Hdr_48_set.insert("DeliverToCompID_t_672858172");
    Hdr_48.add_attribute("SSub", "SenderSubID_t_208386609"); // 1
    Hdr_48_set.insert("SenderSubID_t_208386609");
    Hdr_48.add_attribute("SLoc", "SenderLocationID_t_22117025"); // 1
    Hdr_48_set.insert("SenderLocationID_t_22117025");
    Hdr_48.add_attribute("TSub", "TargetSubID_t_897909202"); // 1
    Hdr_48_set.insert("TargetSubID_t_897909202");
    Hdr_48.add_attribute("TLoc", "TargetLocationID_t_1632549684"); // 1
    Hdr_48_set.insert("TargetLocationID_t_1632549684");
    Hdr_48.add_attribute("OBSub", "OnBehalfOfSubID_t_1596650027"); // 1
    Hdr_48_set.insert("OnBehalfOfSubID_t_1596650027");
    Hdr_48.add_attribute("OBLoc", "OnBehalfOfLocationID_t_2040031"); // 1
    Hdr_48_set.insert("OnBehalfOfLocationID_t_2040031");
    Hdr_48.add_attribute("D2Sub", "DeliverToSubID_t_1815939965"); // 1
    Hdr_48_set.insert("DeliverToSubID_t_1815939965");
    Hdr_48.add_attribute("D2Loc", "DeliverToLocationID_t_549676517"); // 1
    Hdr_48_set.insert("DeliverToLocationID_t_549676517");
    Hdr_48.add_attribute("PosDup", "N"); // 1
    Hdr_48_set.insert("N");
    Hdr_48.add_attribute("PosRsnd", "Y"); // 1
    Hdr_48_set.insert("Y");
    Hdr_48.add_attribute("Snt", "SendingTime_t_1853285010"); // 1
    Hdr_48_set.insert("SendingTime_t_1853285010");
    Hdr_48.add_attribute("OrigSnt", "OrigSendingTime_t_343938130"); // 1
    Hdr_48_set.insert("OrigSendingTime_t_343938130");
    Hdr_48.add_attribute("MsgEncd", "MessageEncoding_t_263836633"); // 1
    Hdr_48_set.insert("MessageEncoding_t_263836633");
    all_values.push_back(Hdr_48_set);
    all_compo_names.insert("Hdr_48_set");

    {
      xml_element Hop_48{"Hop"};
      multiset<string> Hop_48_set;
      Hop_48.add_attribute("ID", "HopCompID_t_2042967799"); // 2
      Hop_48_set.insert("HopCompID_t_2042967799");
      Hop_48.add_attribute("Ref", "1788799971"); // 2
      Hop_48_set.insert("1788799971");
      Hop_48.add_attribute("Snt", "HopSendingTime_t_565776215"); // 2
      Hop_48_set.insert("HopSendingTime_t_565776215");
      all_values.push_back(Hop_48_set);
      all_compo_names.insert("Hop_48_set");

      Hdr_48.add_element(Hop_48);
    }
    elt.add_element(Hdr_48);
  } // end Hdr
  { // Pty
    xml_element Pty_203{"Pty"};
    multiset<string> Pty_203_set;
    Pty_203.add_attribute("ID", "PartyID_t_1168145017"); // 1
    Pty_203_set.insert("PartyID_t_1168145017");
    Pty_203.add_attribute("Src", "G"); // 1
    Pty_203_set.insert("G");
    Pty_203.add_attribute("R", "75"); // 1
    Pty_203_set.insert("75");
    all_values.push_back(Pty_203_set);
    all_compo_names.insert("Pty_203_set");

    {
      xml_element Sub_203{"Sub"};
      multiset<string> Sub_203_set;
      Sub_203.add_attribute("ID", "PartySubID_t_1967278344"); // 2
      Sub_203_set.insert("PartySubID_t_1967278344");
      Sub_203.add_attribute("Typ", "8"); // 2
      Sub_203_set.insert("8");
      all_values.push_back(Sub_203_set);
      all_compo_names.insert("Sub_203_set");

      Pty_203.add_element(Sub_203);
    }
    elt.add_element(Pty_203);
  } // end Pty
  { // PreAllocMleg
    xml_element PreAllocMleg_0{"PreAllocMleg"};
    multiset<string> PreAllocMleg_0_set;
    PreAllocMleg_0.add_attribute("Acct", "AllocAccount_t_1011144875"); // 1
    PreAllocMleg_0_set.insert("AllocAccount_t_1011144875");
    PreAllocMleg_0.add_attribute("ActIDSrc", "2"); // 1
    PreAllocMleg_0_set.insert("2");
    PreAllocMleg_0.add_attribute("AllocSettlCcy", "CAN"); // 1
    PreAllocMleg_0_set.insert("CAN");
    PreAllocMleg_0.add_attribute("IndAllocID", "IndividualAllocID_t_1704702721"); // 1
    PreAllocMleg_0_set.insert("IndividualAllocID_t_1704702721");
    PreAllocMleg_0.add_attribute("Qty", "19188622.670000"); // 1
    PreAllocMleg_0_set.insert("19188622.670000");
    all_values.push_back(PreAllocMleg_0_set);
    all_compo_names.insert("PreAllocMleg_0_set");

    {
      xml_element Pty_204{"Pty"};
      multiset<string> Pty_204_set;
      Pty_204.add_attribute("ID", "Nested3PartyID_t_342972993"); // 2
      Pty_204_set.insert("Nested3PartyID_t_342972993");
      Pty_204.add_attribute("Src", "4"); // 2
      Pty_204_set.insert("4");
      Pty_204.add_attribute("R", "6"); // 2
      Pty_204_set.insert("6");
      all_values.push_back(Pty_204_set);
      all_compo_names.insert("Pty_204_set");

      {
        xml_element Sub_204{"Sub"};
        multiset<string> Sub_204_set;
        Sub_204.add_attribute("ID", "Nested3PartySubID_t_365090018"); // 3
        Sub_204_set.insert("Nested3PartySubID_t_365090018");
        Sub_204.add_attribute("Typ", "24"); // 3
        Sub_204_set.insert("24");
        all_values.push_back(Sub_204_set);
        all_compo_names.insert("Sub_204_set");

        Pty_204.add_element(Sub_204);
      }
      PreAllocMleg_0.add_element(Pty_204);
    }
    elt.add_element(PreAllocMleg_0);
  } // end PreAllocMleg
  { // PreAllocMleg
    xml_element PreAllocMleg_1{"PreAllocMleg"};
    multiset<string> PreAllocMleg_1_set;
    PreAllocMleg_1.add_attribute("Acct", "AllocAccount_t_1612314913"); // 1
    PreAllocMleg_1_set.insert("AllocAccount_t_1612314913");
    PreAllocMleg_1.add_attribute("ActIDSrc", "3"); // 1
    PreAllocMleg_1_set.insert("3");
    PreAllocMleg_1.add_attribute("AllocSettlCcy", "CAN"); // 1
    PreAllocMleg_1_set.insert("CAN");
    PreAllocMleg_1.add_attribute("IndAllocID", "IndividualAllocID_t_363932915"); // 1
    PreAllocMleg_1_set.insert("IndividualAllocID_t_363932915");
    PreAllocMleg_1.add_attribute("Qty", "2019985.590000"); // 1
    PreAllocMleg_1_set.insert("2019985.590000");
    all_values.push_back(PreAllocMleg_1_set);
    all_compo_names.insert("PreAllocMleg_1_set");

    {
      xml_element Pty_205{"Pty"};
      multiset<string> Pty_205_set;
      Pty_205.add_attribute("ID", "Nested3PartyID_t_58368168"); // 2
      Pty_205_set.insert("Nested3PartyID_t_58368168");
      Pty_205.add_attribute("Src", "A"); // 2
      Pty_205_set.insert("A");
      Pty_205.add_attribute("R", "33"); // 2
      Pty_205_set.insert("33");
      all_values.push_back(Pty_205_set);
      all_compo_names.insert("Pty_205_set");

      {
        xml_element Sub_205{"Sub"};
        multiset<string> Sub_205_set;
        Sub_205.add_attribute("ID", "Nested3PartySubID_t_322204801"); // 3
        Sub_205_set.insert("Nested3PartySubID_t_322204801");
        Sub_205.add_attribute("Typ", "10"); // 3
        Sub_205_set.insert("10");
        all_values.push_back(Sub_205_set);
        all_compo_names.insert("Sub_205_set");

        Pty_205.add_element(Sub_205);
      }
      PreAllocMleg_1.add_element(Pty_205);
    }
    elt.add_element(PreAllocMleg_1);
  } // end PreAllocMleg
  { // DsplyInstr
    xml_element DsplyInstr_2{"DsplyInstr"};
    multiset<string> DsplyInstr_2_set;
    DsplyInstr_2.add_attribute("DisplayQty", "1872530.120000"); // 1
    DsplyInstr_2_set.insert("1872530.120000");
    DsplyInstr_2.add_attribute("SecDspQty", "8879810.160000"); // 1
    DsplyInstr_2_set.insert("8879810.160000");
    DsplyInstr_2.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_2_set.insert("2");
    DsplyInstr_2.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_2_set.insert("2");
    DsplyInstr_2.add_attribute("DsplLwQty", "818978.110000"); // 1
    DsplyInstr_2_set.insert("818978.110000");
    DsplyInstr_2.add_attribute("DisplayHighQty", "11731478.770000"); // 1
    DsplyInstr_2_set.insert("11731478.770000");
    DsplyInstr_2.add_attribute("DspMinIncr", "11751927.260000"); // 1
    DsplyInstr_2_set.insert("11751927.260000");
    DsplyInstr_2.add_attribute("RfrshQty", "11925498.950000"); // 1
    DsplyInstr_2_set.insert("11925498.950000");
    all_values.push_back(DsplyInstr_2_set);
    all_compo_names.insert("DsplyInstr_2_set");

    elt.add_element(DsplyInstr_2);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_4{"TrdSes"};
    multiset<string> TrdSes_4_set;
    TrdSes_4.add_attribute("SesID", "6"); // 1
    TrdSes_4_set.insert("6");
    TrdSes_4.add_attribute("SesSub", "6"); // 1
    TrdSes_4_set.insert("6");
    all_values.push_back(TrdSes_4_set);
    all_compo_names.insert("TrdSes_4_set");

    elt.add_element(TrdSes_4);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_39{"Instrmt"};
    multiset<string> Instrmt_39_set;
    Instrmt_39.add_attribute("Sym", "Symbol_t_1886613151"); // 1
    Instrmt_39_set.insert("Symbol_t_1886613151");
    Instrmt_39.add_attribute("Sfx", "CD"); // 1
    Instrmt_39_set.insert("CD");
    Instrmt_39.add_attribute("ID", "SecurityID_t_1618132961"); // 1
    Instrmt_39_set.insert("SecurityID_t_1618132961");
    Instrmt_39.add_attribute("Src", "8"); // 1
    Instrmt_39_set.insert("8");
    Instrmt_39.add_attribute("Prod", "10"); // 1
    Instrmt_39_set.insert("10");
    Instrmt_39.add_attribute("ProdCmplx", "ProductComplex_t_1848210206"); // 1
    Instrmt_39_set.insert("ProductComplex_t_1848210206");
    Instrmt_39.add_attribute("SecGrp", "SecurityGroup_t_1637757000"); // 1
    Instrmt_39_set.insert("SecurityGroup_t_1637757000");
    Instrmt_39.add_attribute("CFI", "CFICode_t_1182261712"); // 1
    Instrmt_39_set.insert("CFICode_t_1182261712");
    Instrmt_39.add_attribute("SecTyp", "STN"); // 1
    Instrmt_39_set.insert("STN");
    Instrmt_39.add_attribute("SubTyp", "SecuritySubType_t_1102588265"); // 1
    Instrmt_39_set.insert("SecuritySubType_t_1102588265");
    Instrmt_39.add_attribute("MMY", "996518110"); // 1
    Instrmt_39_set.insert("996518110");
    Instrmt_39.add_attribute("MatDt", "MaturityDate_t_1958739485"); // 1
    Instrmt_39_set.insert("MaturityDate_t_1958739485");
    Instrmt_39.add_attribute("MatTm", "235875848"); // 1
    Instrmt_39_set.insert("235875848");
    Instrmt_39.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1360451025"); // 1
    Instrmt_39_set.insert("SettleOnOpenFlag_t_1360451025");
    Instrmt_39.add_attribute("AsgnMeth", "13254396"); // 1
    Instrmt_39_set.insert("13254396");
    Instrmt_39.add_attribute("Status", "1"); // 1
    Instrmt_39_set.insert("1");
    Instrmt_39.add_attribute("CpnPmt", "CouponPaymentDate_t_1430185302"); // 1
    Instrmt_39_set.insert("CouponPaymentDate_t_1430185302");
    Instrmt_39.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_39_set.insert("MR");
    Instrmt_39.add_attribute("Snrty", "SD"); // 1
    Instrmt_39_set.insert("SD");
    Instrmt_39.add_attribute("NotlPctOut", "13954037.310000"); // 1
    Instrmt_39_set.insert("13954037.310000");
    Instrmt_39.add_attribute("OrigNotlPctOut", "7464440.970000"); // 1
    Instrmt_39_set.insert("7464440.970000");
    Instrmt_39.add_attribute("AttchPnt", "15044298.340000"); // 1
    Instrmt_39_set.insert("15044298.340000");
    Instrmt_39.add_attribute("DetchPnt", "19850607.380000"); // 1
    Instrmt_39_set.insert("19850607.380000");
    Instrmt_39.add_attribute("Issued", "IssueDate_t_2101842127"); // 1
    Instrmt_39_set.insert("IssueDate_t_2101842127");
    Instrmt_39.add_attribute("RepoCollSecTyp", "1586327645"); // 1
    Instrmt_39_set.insert("1586327645");
    Instrmt_39.add_attribute("RepoTrm", "1010724967"); // 1
    Instrmt_39_set.insert("1010724967");
    Instrmt_39.add_attribute("RepoRt", "11295512.050000"); // 1
    Instrmt_39_set.insert("11295512.050000");
    Instrmt_39.add_attribute("Fctr", "6313938.920000"); // 1
    Instrmt_39_set.insert("6313938.920000");
    Instrmt_39.add_attribute("CrdRtg", "CreditRating_t_1603183670"); // 1
    Instrmt_39_set.insert("CreditRating_t_1603183670");
    Instrmt_39.add_attribute("Rgstry", "InstrRegistry_t_1168405158"); // 1
    Instrmt_39_set.insert("InstrRegistry_t_1168405158");
    Instrmt_39.add_attribute("IssuCtry", "544824133"); // 1
    Instrmt_39_set.insert("544824133");
    Instrmt_39.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1342313173"); // 1
    Instrmt_39_set.insert("StateOrProvinceOfIssue_t_1342313173");
    Instrmt_39.add_attribute("Lcl", "LocaleOfIssue_t_1642603859"); // 1
    Instrmt_39_set.insert("LocaleOfIssue_t_1642603859");
    Instrmt_39.add_attribute("Redeem", "RedemptionDate_t_15473446"); // 1
    Instrmt_39_set.insert("RedemptionDate_t_15473446");
    Instrmt_39.add_attribute("StrkPx", "8528212.960000"); // 1
    Instrmt_39_set.insert("8528212.960000");
    Instrmt_39.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_39_set.insert("EUR");
    Instrmt_39.add_attribute("StrkMult", "3430946.480000"); // 1
    Instrmt_39_set.insert("3430946.480000");
    Instrmt_39.add_attribute("StrkValu", "14945536.170000"); // 1
    Instrmt_39_set.insert("14945536.170000");
    Instrmt_39.add_attribute("StrkPxDtrmnMeth", "4"); // 1
    Instrmt_39_set.insert("4");
    Instrmt_39.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_39_set.insert("5");
    Instrmt_39.add_attribute("StrkPxBndryPrcsn", "3435880.800000"); // 1
    Instrmt_39_set.insert("3435880.800000");
    Instrmt_39.add_attribute("PxDtrmnMeth", "1"); // 1
    Instrmt_39_set.insert("1");
    Instrmt_39.add_attribute("OptAt", "1681558762"); // 1
    Instrmt_39_set.insert("1681558762");
    Instrmt_39.add_attribute("Mult", "17040391.050000"); // 1
    Instrmt_39_set.insert("17040391.050000");
    Instrmt_39.add_attribute("MultTyp", "1"); // 1
    Instrmt_39_set.insert("1");
    Instrmt_39.add_attribute("FlowSchedTyp", "4"); // 1
    Instrmt_39_set.insert("4");
    Instrmt_39.add_attribute("MinPxIncr", "9867407.600000"); // 1
    Instrmt_39_set.insert("9867407.600000");
    Instrmt_39.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_928614329"); // 1
    Instrmt_39_set.insert("MinPriceIncrementAmount_t_928614329");
    Instrmt_39.add_attribute("UOM", "MMBtu"); // 1
    Instrmt_39_set.insert("MMBtu");
    Instrmt_39.add_attribute("UOMQty", "2346608.430000"); // 1
    Instrmt_39_set.insert("2346608.430000");
    Instrmt_39.add_attribute("PxUOM", "Bbl"); // 1
    Instrmt_39_set.insert("Bbl");
    Instrmt_39.add_attribute("PxUOMQty", "19491977.820000"); // 1
    Instrmt_39_set.insert("19491977.820000");
    Instrmt_39.add_attribute("SettlMeth", "P"); // 1
    Instrmt_39_set.insert("P");
    Instrmt_39.add_attribute("ExerStyle", "1"); // 1
    Instrmt_39_set.insert("1");
    Instrmt_39.add_attribute("OptPayoutTyp", "2"); // 1
    Instrmt_39_set.insert("2");
    Instrmt_39.add_attribute("OptPayAmt", "OptPayoutAmount_t_1082962901"); // 1
    Instrmt_39_set.insert("OptPayoutAmount_t_1082962901");
    Instrmt_39.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_39_set.insert("INT");
    Instrmt_39.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_39_set.insert("FUTDA");
    Instrmt_39.add_attribute("ListMeth", "1"); // 1
    Instrmt_39_set.insert("1");
    Instrmt_39.add_attribute("CapPx", "17798896.210000"); // 1
    Instrmt_39_set.insert("17798896.210000");
    Instrmt_39.add_attribute("FlrPx", "4167761.570000"); // 1
    Instrmt_39_set.insert("4167761.570000");
    Instrmt_39.add_attribute("PutCall", "0"); // 1
    Instrmt_39_set.insert("0");
    Instrmt_39.add_attribute("FlexInd", "true"); // 1
    Instrmt_39_set.insert("true");
    Instrmt_39.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_39_set.insert("true");
    Instrmt_39.add_attribute("TmUnit", "D"); // 1
    Instrmt_39_set.insert("D");
    Instrmt_39.add_attribute("CpnRt", "15873017.370000"); // 1
    Instrmt_39_set.insert("15873017.370000");
    Instrmt_39.add_attribute("Exch", "SecurityExchange_t_148449609"); // 1
    Instrmt_39_set.insert("SecurityExchange_t_148449609");
    Instrmt_39.add_attribute("PosLmt", "929408393"); // 1
    Instrmt_39_set.insert("929408393");
    Instrmt_39.add_attribute("NTPosLmt", "934371706"); // 1
    Instrmt_39_set.insert("934371706");
    Instrmt_39.add_attribute("Issr", "Issuer_t_693362620"); // 1
    Instrmt_39_set.insert("Issuer_t_693362620");
    Instrmt_39.add_attribute("EncIssrLen", "227607659"); // 1
    Instrmt_39_set.insert("227607659");
    Instrmt_39.add_attribute("EncIssr", "EncodedIssuer_t_1277959786"); // 1
    Instrmt_39_set.insert("EncodedIssuer_t_1277959786");
    Instrmt_39.add_attribute("Desc", "SecurityDesc_t_1049531468"); // 1
    Instrmt_39_set.insert("SecurityDesc_t_1049531468");
    Instrmt_39.add_attribute("EncSecDescLen", "1909166422"); // 1
    Instrmt_39_set.insert("1909166422");
    Instrmt_39.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_834515244"); // 1
    Instrmt_39_set.insert("EncodedSecurityDesc_t_834515244");
    Instrmt_39.add_attribute("Pool", "Pool_t_1418954712"); // 1
    Instrmt_39_set.insert("Pool_t_1418954712");
    Instrmt_39.add_attribute("CSetMo", "1737485553"); // 1
    Instrmt_39_set.insert("1737485553");
    Instrmt_39.add_attribute("CPPgm", "99"); // 1
    Instrmt_39_set.insert("99");
    Instrmt_39.add_attribute("CPRegT", "CPRegType_t_200085393"); // 1
    Instrmt_39_set.insert("CPRegType_t_200085393");
    Instrmt_39.add_attribute("Dated", "DatedDate_t_34769853"); // 1
    Instrmt_39_set.insert("DatedDate_t_34769853");
    Instrmt_39.add_attribute("IntAcrl", "InterestAccrualDate_t_2055916847"); // 1
    Instrmt_39_set.insert("InterestAccrualDate_t_2055916847");
    all_values.push_back(Instrmt_39_set);
    all_compo_names.insert("Instrmt_39_set");

    {
      xml_element AID_42{"AID"};
      multiset<string> AID_42_set;
      AID_42.add_attribute("AltID", "SecurityAltID_t_1875143819"); // 2
      AID_42_set.insert("SecurityAltID_t_1875143819");
      AID_42.add_attribute("AltIDSrc", "3"); // 2
      AID_42_set.insert("3");
      all_values.push_back(AID_42_set);
      all_compo_names.insert("AID_42_set");

      Instrmt_39.add_element(AID_42);
    }
    {
      xml_element SecXML_42{"SecXML"};
      multiset<string> SecXML_42_set;
      SecXML_42.add_attribute("Schema", "SecurityXMLSchema_t_2128154780"); // 2
      SecXML_42_set.insert("SecurityXMLSchema_t_2128154780");
      all_values.push_back(SecXML_42_set);
      all_compo_names.insert("SecXML_42_set");

      Instrmt_39.add_element(SecXML_42);
    }
    {
      xml_element Evnt_42{"Evnt"};
      multiset<string> Evnt_42_set;
      Evnt_42.add_attribute("EventTyp", "17"); // 2
      Evnt_42_set.insert("17");
      Evnt_42.add_attribute("Dt", "EventDate_t_1224525768"); // 2
      Evnt_42_set.insert("EventDate_t_1224525768");
      Evnt_42.add_attribute("Tm", "EventTime_t_1063634033"); // 2
      Evnt_42_set.insert("EventTime_t_1063634033");
      Evnt_42.add_attribute("Px", "19685615.390000"); // 2
      Evnt_42_set.insert("19685615.390000");
      Evnt_42.add_attribute("Txt", "EventText_t_1096477792"); // 2
      Evnt_42_set.insert("EventText_t_1096477792");
      all_values.push_back(Evnt_42_set);
      all_compo_names.insert("Evnt_42_set");

      Instrmt_39.add_element(Evnt_42);
    }
    {
      xml_element Pty_206{"Pty"};
      multiset<string> Pty_206_set;
      Pty_206.add_attribute("ID", "InstrumentPartyID_t_1602296956"); // 2
      Pty_206_set.insert("InstrumentPartyID_t_1602296956");
      Pty_206.add_attribute("Src", "B"); // 2
      Pty_206_set.insert("B");
      Pty_206.add_attribute("R", "84"); // 2
      Pty_206_set.insert("84");
      all_values.push_back(Pty_206_set);
      all_compo_names.insert("Pty_206_set");

      {
        xml_element Sub_206{"Sub"};
        multiset<string> Sub_206_set;
        Sub_206.add_attribute("ID", "InstrumentPartySubID_t_1335789405"); // 3
        Sub_206_set.insert("InstrumentPartySubID_t_1335789405");
        Sub_206.add_attribute("Typ", "26"); // 3
        Sub_206_set.insert("26");
        all_values.push_back(Sub_206_set);
        all_compo_names.insert("Sub_206_set");

        Pty_206.add_element(Sub_206);
      }
      Instrmt_39.add_element(Pty_206);
    }
    {
      xml_element CmplxEvnt_39{"CmplxEvnt"};
      multiset<string> CmplxEvnt_39_set;
      CmplxEvnt_39.add_attribute("Typ", "6"); // 2
      CmplxEvnt_39_set.insert("6");
      CmplxEvnt_39.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1922103150"); // 2
      CmplxEvnt_39_set.insert("ComplexOptPayoutAmount_t_1922103150");
      CmplxEvnt_39.add_attribute("Px", "1683117.850000"); // 2
      CmplxEvnt_39_set.insert("1683117.850000");
      CmplxEvnt_39.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_39_set.insert("4");
      CmplxEvnt_39.add_attribute("PxBndryPrcsn", "7040278.950000"); // 2
      CmplxEvnt_39_set.insert("7040278.950000");
      CmplxEvnt_39.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_39_set.insert("1");
      CmplxEvnt_39.add_attribute("Cond", "2"); // 2
      CmplxEvnt_39_set.insert("2");
      all_values.push_back(CmplxEvnt_39_set);
      all_compo_names.insert("CmplxEvnt_39_set");

      {
        xml_element EvntDts_39{"EvntDts"};
        multiset<string> EvntDts_39_set;
        EvntDts_39.add_attribute("StartDt", "ComplexEventStartDate_t_931635555"); // 3
        EvntDts_39_set.insert("ComplexEventStartDate_t_931635555");
        EvntDts_39.add_attribute("EndDt", "ComplexEventEndDate_t_233159630"); // 3
        EvntDts_39_set.insert("ComplexEventEndDate_t_233159630");
        all_values.push_back(EvntDts_39_set);
        all_compo_names.insert("EvntDts_39_set");

        {
          xml_element EvntTms_39{"EvntTms"};
          multiset<string> EvntTms_39_set;
          EvntTms_39.add_attribute("StartTm", "1689363603"); // 4
          EvntTms_39_set.insert("1689363603");
          EvntTms_39.add_attribute("EndTm", "693318329"); // 4
          EvntTms_39_set.insert("693318329");
          all_values.push_back(EvntTms_39_set);
          all_compo_names.insert("EvntTms_39_set");

          EvntDts_39.add_element(EvntTms_39);
        }
        CmplxEvnt_39.add_element(EvntDts_39);
      }
      Instrmt_39.add_element(CmplxEvnt_39);
    }
    elt.add_element(Instrmt_39);
  } // end Instrmt
  { // Undly
    xml_element Undly_52{"Undly"};
    multiset<string> Undly_52_set;
    Undly_52.add_attribute("Sym", "UnderlyingSymbol_t_960834667"); // 1
    Undly_52_set.insert("UnderlyingSymbol_t_960834667");
    Undly_52.add_attribute("Sfx", "CD"); // 1
    Undly_52_set.insert("CD");
    Undly_52.add_attribute("ID", "UnderlyingSecurityID_t_741447230"); // 1
    Undly_52_set.insert("UnderlyingSecurityID_t_741447230");
    Undly_52.add_attribute("Src", "F"); // 1
    Undly_52_set.insert("F");
    Undly_52.add_attribute("Prod", "12"); // 1
    Undly_52_set.insert("12");
    Undly_52.add_attribute("CFI", "UnderlyingCFICode_t_649880429"); // 1
    Undly_52_set.insert("UnderlyingCFICode_t_649880429");
    Undly_52.add_attribute("SecTyp", "TB"); // 1
    Undly_52_set.insert("TB");
    Undly_52.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_154574075"); // 1
    Undly_52_set.insert("UnderlyingSecuritySubType_t_154574075");
    Undly_52.add_attribute("MMY", "630551562"); // 1
    Undly_52_set.insert("630551562");
    Undly_52.add_attribute("Mat", "UnderlyingMaturityDate_t_98173660"); // 1
    Undly_52_set.insert("UnderlyingMaturityDate_t_98173660");
    Undly_52.add_attribute("MatTm", "1379099843"); // 1
    Undly_52_set.insert("1379099843");
    Undly_52.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1694185595"); // 1
    Undly_52_set.insert("UnderlyingCouponPaymentDate_t_1694185595");
    Undly_52.add_attribute("RestrctTyp", "FR"); // 1
    Undly_52_set.insert("FR");
    Undly_52.add_attribute("Snrty", "SB"); // 1
    Undly_52_set.insert("SB");
    Undly_52.add_attribute("NotlPctOut", "11489989.040000"); // 1
    Undly_52_set.insert("11489989.040000");
    Undly_52.add_attribute("OrigNotlPctOut", "15202190.640000"); // 1
    Undly_52_set.insert("15202190.640000");
    Undly_52.add_attribute("AttchPnt", "18413479.380000"); // 1
    Undly_52_set.insert("18413479.380000");
    Undly_52.add_attribute("DetchPnt", "3373046.610000"); // 1
    Undly_52_set.insert("3373046.610000");
    Undly_52.add_attribute("Issued", "UnderlyingIssueDate_t_101229113"); // 1
    Undly_52_set.insert("UnderlyingIssueDate_t_101229113");
    Undly_52.add_attribute("RepoCollSecTyp", "1639367844"); // 1
    Undly_52_set.insert("1639367844");
    Undly_52.add_attribute("RepoTrm", "111924163"); // 1
    Undly_52_set.insert("111924163");
    Undly_52.add_attribute("RepoRt", "2695408.980000"); // 1
    Undly_52_set.insert("2695408.980000");
    Undly_52.add_attribute("Fctr", "15858373.590000"); // 1
    Undly_52_set.insert("15858373.590000");
    Undly_52.add_attribute("CrdRtg", "UnderlyingCreditRating_t_815952058"); // 1
    Undly_52_set.insert("UnderlyingCreditRating_t_815952058");
    Undly_52.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1372224390"); // 1
    Undly_52_set.insert("UnderlyingInstrRegistry_t_1372224390");
    Undly_52.add_attribute("Ctry", "78185846"); // 1
    Undly_52_set.insert("78185846");
    Undly_52.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1747587613"); // 1
    Undly_52_set.insert("UnderlyingStateOrProvinceOfIssue_t_1747587613");
    Undly_52.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1605384021"); // 1
    Undly_52_set.insert("UnderlyingLocaleOfIssue_t_1605384021");
    Undly_52.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1767549449"); // 1
    Undly_52_set.insert("UnderlyingRedemptionDate_t_1767549449");
    Undly_52.add_attribute("StrkPx", "2934222.940000"); // 1
    Undly_52_set.insert("2934222.940000");
    Undly_52.add_attribute("StrkCcy", "JPY"); // 1
    Undly_52_set.insert("JPY");
    Undly_52.add_attribute("OptA", "576742528"); // 1
    Undly_52_set.insert("576742528");
    Undly_52.add_attribute("Mult", "12670224.780000"); // 1
    Undly_52_set.insert("12670224.780000");
    Undly_52.add_attribute("MultTyp", "2"); // 1
    Undly_52_set.insert("2");
    Undly_52.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_52_set.insert("1");
    Undly_52.add_attribute("UOM", "Bcf"); // 1
    Undly_52_set.insert("Bcf");
    Undly_52.add_attribute("UOMQty", "4829171.110000"); // 1
    Undly_52_set.insert("4829171.110000");
    Undly_52.add_attribute("PxUOM", "oz_tr"); // 1
    Undly_52_set.insert("oz_tr");
    Undly_52.add_attribute("PxUOMQty", "3999708.210000"); // 1
    Undly_52_set.insert("3999708.210000");
    Undly_52.add_attribute("TmUnit", "D"); // 1
    Undly_52_set.insert("D");
    Undly_52.add_attribute("ExerStyle", "2"); // 1
    Undly_52_set.insert("2");
    Undly_52.add_attribute("CpnRt", "20941564.170000"); // 1
    Undly_52_set.insert("20941564.170000");
    Undly_52.add_attribute("Exch", "UnderlyingSecurityExchange_t_500342324"); // 1
    Undly_52_set.insert("UnderlyingSecurityExchange_t_500342324");
    Undly_52.add_attribute("Issr", "UnderlyingIssuer_t_609116875"); // 1
    Undly_52_set.insert("UnderlyingIssuer_t_609116875");
    Undly_52.add_attribute("EncUndIssrLen", "1095671673"); // 1
    Undly_52_set.insert("1095671673");
    Undly_52.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2020561388"); // 1
    Undly_52_set.insert("EncodedUnderlyingIssuer_t_2020561388");
    Undly_52.add_attribute("Desc", "UnderlyingSecurityDesc_t_302981165"); // 1
    Undly_52_set.insert("UnderlyingSecurityDesc_t_302981165");
    Undly_52.add_attribute("EncUndSecDescLen", "1432976334"); // 1
    Undly_52_set.insert("1432976334");
    Undly_52.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_2121790501"); // 1
    Undly_52_set.insert("EncodedUnderlyingSecurityDesc_t_2121790501");
    Undly_52.add_attribute("CPPgm", "UnderlyingCPProgram_t_1942349009"); // 1
    Undly_52_set.insert("UnderlyingCPProgram_t_1942349009");
    Undly_52.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1544900497"); // 1
    Undly_52_set.insert("UnderlyingCPRegType_t_1544900497");
    Undly_52.add_attribute("AllocPct", "2438477.520000"); // 1
    Undly_52_set.insert("2438477.520000");
    Undly_52.add_attribute("Ccy", "CHF"); // 1
    Undly_52_set.insert("CHF");
    Undly_52.add_attribute("Qty", "16160721.420000"); // 1
    Undly_52_set.insert("16160721.420000");
    Undly_52.add_attribute("SettlTyp", "5"); // 1
    Undly_52_set.insert("5");
    Undly_52.add_attribute("CashAmt", "UnderlyingCashAmount_t_1960956521"); // 1
    Undly_52_set.insert("UnderlyingCashAmount_t_1960956521");
    Undly_52.add_attribute("CashTyp", "DIFF"); // 1
    Undly_52_set.insert("DIFF");
    Undly_52.add_attribute("Px", "10789543.670000"); // 1
    Undly_52_set.insert("10789543.670000");
    Undly_52.add_attribute("DirtPx", "1068951.670000"); // 1
    Undly_52_set.insert("1068951.670000");
    Undly_52.add_attribute("EndPx", "15995477.630000"); // 1
    Undly_52_set.insert("15995477.630000");
    Undly_52.add_attribute("StartVal", "UnderlyingStartValue_t_1659854835"); // 1
    Undly_52_set.insert("UnderlyingStartValue_t_1659854835");
    Undly_52.add_attribute("CurVal", "UnderlyingCurrentValue_t_683637696"); // 1
    Undly_52_set.insert("UnderlyingCurrentValue_t_683637696");
    Undly_52.add_attribute("EndVal", "UnderlyingEndValue_t_719086593"); // 1
    Undly_52_set.insert("UnderlyingEndValue_t_719086593");
    Undly_52.add_attribute("AdjQty", "12541917.150000"); // 1
    Undly_52_set.insert("12541917.150000");
    Undly_52.add_attribute("FxRate", "15784703.120000"); // 1
    Undly_52_set.insert("15784703.120000");
    Undly_52.add_attribute("FxRateCalc", "M"); // 1
    Undly_52_set.insert("M");
    Undly_52.add_attribute("CapValu", "UnderlyingCapValue_t_1737108826"); // 1
    Undly_52_set.insert("UnderlyingCapValue_t_1737108826");
    Undly_52.add_attribute("SetMeth", "UnderlyingSettlMethod_t_480393355"); // 1
    Undly_52_set.insert("UnderlyingSettlMethod_t_480393355");
    Undly_52.add_attribute("PutCall", "888476674"); // 1
    Undly_52_set.insert("888476674");
    all_values.push_back(Undly_52_set);
    all_compo_names.insert("Undly_52_set");

    {
      xml_element UndAID_52{"UndAID"};
      multiset<string> UndAID_52_set;
      UndAID_52.add_attribute("AltID", "UnderlyingSecurityAltID_t_170715950"); // 2
      UndAID_52_set.insert("UnderlyingSecurityAltID_t_170715950");
      UndAID_52.add_attribute("AltIDSrc", "5"); // 2
      UndAID_52_set.insert("5");
      all_values.push_back(UndAID_52_set);
      all_compo_names.insert("UndAID_52_set");

      Undly_52.add_element(UndAID_52);
    }
    {
      xml_element Stip_79{"Stip"};
      multiset<string> Stip_79_set;
      Stip_79.add_attribute("Typ", "BANKQUAL"); // 2
      Stip_79_set.insert("BANKQUAL");
      Stip_79.add_attribute("Val", "UnderlyingStipValue_t_671058274"); // 2
      Stip_79_set.insert("UnderlyingStipValue_t_671058274");
      all_values.push_back(Stip_79_set);
      all_compo_names.insert("Stip_79_set");

      Undly_52.add_element(Stip_79);
    }
    {
      xml_element Pty_207{"Pty"};
      multiset<string> Pty_207_set;
      Pty_207.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1370533117"); // 2
      Pty_207_set.insert("UnderlyingInstrumentPartyID_t_1370533117");
      Pty_207.add_attribute("Src", "F"); // 2
      Pty_207_set.insert("F");
      Pty_207.add_attribute("R", "61"); // 2
      Pty_207_set.insert("61");
      all_values.push_back(Pty_207_set);
      all_compo_names.insert("Pty_207_set");

      {
        xml_element Sub_207{"Sub"};
        multiset<string> Sub_207_set;
        Sub_207.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1673514282"); // 3
        Sub_207_set.insert("UnderlyingInstrumentPartySubID_t_1673514282");
        Sub_207.add_attribute("Typ", "1"); // 3
        Sub_207_set.insert("1");
        all_values.push_back(Sub_207_set);
        all_compo_names.insert("Sub_207_set");

        Pty_207.add_element(Sub_207);
      }
      Undly_52.add_element(Pty_207);
    }
    elt.add_element(Undly_52);
  } // end Undly
  { // Undly
    xml_element Undly_53{"Undly"};
    multiset<string> Undly_53_set;
    Undly_53.add_attribute("Sym", "UnderlyingSymbol_t_518442868"); // 1
    Undly_53_set.insert("UnderlyingSymbol_t_518442868");
    Undly_53.add_attribute("Sfx", "WI"); // 1
    Undly_53_set.insert("WI");
    Undly_53.add_attribute("ID", "UnderlyingSecurityID_t_613730651"); // 1
    Undly_53_set.insert("UnderlyingSecurityID_t_613730651");
    Undly_53.add_attribute("Src", "F"); // 1
    Undly_53_set.insert("F");
    Undly_53.add_attribute("Prod", "9"); // 1
    Undly_53_set.insert("9");
    Undly_53.add_attribute("CFI", "UnderlyingCFICode_t_827099558"); // 1
    Undly_53_set.insert("UnderlyingCFICode_t_827099558");
    Undly_53.add_attribute("SecTyp", "TECP"); // 1
    Undly_53_set.insert("TECP");
    Undly_53.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_13003633"); // 1
    Undly_53_set.insert("UnderlyingSecuritySubType_t_13003633");
    Undly_53.add_attribute("MMY", "640572431"); // 1
    Undly_53_set.insert("640572431");
    Undly_53.add_attribute("Mat", "UnderlyingMaturityDate_t_1304851630"); // 1
    Undly_53_set.insert("UnderlyingMaturityDate_t_1304851630");
    Undly_53.add_attribute("MatTm", "1091958000"); // 1
    Undly_53_set.insert("1091958000");
    Undly_53.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_747467599"); // 1
    Undly_53_set.insert("UnderlyingCouponPaymentDate_t_747467599");
    Undly_53.add_attribute("RestrctTyp", "MR"); // 1
    Undly_53_set.insert("MR");
    Undly_53.add_attribute("Snrty", "SR"); // 1
    Undly_53_set.insert("SR");
    Undly_53.add_attribute("NotlPctOut", "14311052.950000"); // 1
    Undly_53_set.insert("14311052.950000");
    Undly_53.add_attribute("OrigNotlPctOut", "14760023.380000"); // 1
    Undly_53_set.insert("14760023.380000");
    Undly_53.add_attribute("AttchPnt", "18585209.020000"); // 1
    Undly_53_set.insert("18585209.020000");
    Undly_53.add_attribute("DetchPnt", "8620919.590000"); // 1
    Undly_53_set.insert("8620919.590000");
    Undly_53.add_attribute("Issued", "UnderlyingIssueDate_t_1964508191"); // 1
    Undly_53_set.insert("UnderlyingIssueDate_t_1964508191");
    Undly_53.add_attribute("RepoCollSecTyp", "1448146081"); // 1
    Undly_53_set.insert("1448146081");
    Undly_53.add_attribute("RepoTrm", "1342485314"); // 1
    Undly_53_set.insert("1342485314");
    Undly_53.add_attribute("RepoRt", "7055012.170000"); // 1
    Undly_53_set.insert("7055012.170000");
    Undly_53.add_attribute("Fctr", "16188620.310000"); // 1
    Undly_53_set.insert("16188620.310000");
    Undly_53.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2103901557"); // 1
    Undly_53_set.insert("UnderlyingCreditRating_t_2103901557");
    Undly_53.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1540650660"); // 1
    Undly_53_set.insert("UnderlyingInstrRegistry_t_1540650660");
    Undly_53.add_attribute("Ctry", "142436658"); // 1
    Undly_53_set.insert("142436658");
    Undly_53.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1326951026"); // 1
    Undly_53_set.insert("UnderlyingStateOrProvinceOfIssue_t_1326951026");
    Undly_53.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1323988128"); // 1
    Undly_53_set.insert("UnderlyingLocaleOfIssue_t_1323988128");
    Undly_53.add_attribute("Redeem", "UnderlyingRedemptionDate_t_686572673"); // 1
    Undly_53_set.insert("UnderlyingRedemptionDate_t_686572673");
    Undly_53.add_attribute("StrkPx", "8529816.610000"); // 1
    Undly_53_set.insert("8529816.610000");
    Undly_53.add_attribute("StrkCcy", "CHF"); // 1
    Undly_53_set.insert("CHF");
    Undly_53.add_attribute("OptA", "173877656"); // 1
    Undly_53_set.insert("173877656");
    Undly_53.add_attribute("Mult", "10065489.330000"); // 1
    Undly_53_set.insert("10065489.330000");
    Undly_53.add_attribute("MultTyp", "2"); // 1
    Undly_53_set.insert("2");
    Undly_53.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_53_set.insert("2");
    Undly_53.add_attribute("UOM", "Alw"); // 1
    Undly_53_set.insert("Alw");
    Undly_53.add_attribute("UOMQty", "507016.290000"); // 1
    Undly_53_set.insert("507016.290000");
    Undly_53.add_attribute("PxUOM", "Bcf"); // 1
    Undly_53_set.insert("Bcf");
    Undly_53.add_attribute("PxUOMQty", "3267372.750000"); // 1
    Undly_53_set.insert("3267372.750000");
    Undly_53.add_attribute("TmUnit", "Wk"); // 1
    Undly_53_set.insert("Wk");
    Undly_53.add_attribute("ExerStyle", "0"); // 1
    Undly_53_set.insert("0");
    Undly_53.add_attribute("CpnRt", "10742048.740000"); // 1
    Undly_53_set.insert("10742048.740000");
    Undly_53.add_attribute("Exch", "UnderlyingSecurityExchange_t_2112469005"); // 1
    Undly_53_set.insert("UnderlyingSecurityExchange_t_2112469005");
    Undly_53.add_attribute("Issr", "UnderlyingIssuer_t_437283545"); // 1
    Undly_53_set.insert("UnderlyingIssuer_t_437283545");
    Undly_53.add_attribute("EncUndIssrLen", "357826521"); // 1
    Undly_53_set.insert("357826521");
    Undly_53.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1440987695"); // 1
    Undly_53_set.insert("EncodedUnderlyingIssuer_t_1440987695");
    Undly_53.add_attribute("Desc", "UnderlyingSecurityDesc_t_148320800"); // 1
    Undly_53_set.insert("UnderlyingSecurityDesc_t_148320800");
    Undly_53.add_attribute("EncUndSecDescLen", "1219918480"); // 1
    Undly_53_set.insert("1219918480");
    Undly_53.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1258012238"); // 1
    Undly_53_set.insert("EncodedUnderlyingSecurityDesc_t_1258012238");
    Undly_53.add_attribute("CPPgm", "UnderlyingCPProgram_t_1596466881"); // 1
    Undly_53_set.insert("UnderlyingCPProgram_t_1596466881");
    Undly_53.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_414920146"); // 1
    Undly_53_set.insert("UnderlyingCPRegType_t_414920146");
    Undly_53.add_attribute("AllocPct", "19635134.550000"); // 1
    Undly_53_set.insert("19635134.550000");
    Undly_53.add_attribute("Ccy", "CAN"); // 1
    Undly_53_set.insert("CAN");
    Undly_53.add_attribute("Qty", "13566804.670000"); // 1
    Undly_53_set.insert("13566804.670000");
    Undly_53.add_attribute("SettlTyp", "4"); // 1
    Undly_53_set.insert("4");
    Undly_53.add_attribute("CashAmt", "UnderlyingCashAmount_t_1698289082"); // 1
    Undly_53_set.insert("UnderlyingCashAmount_t_1698289082");
    Undly_53.add_attribute("CashTyp", "DIFF"); // 1
    Undly_53_set.insert("DIFF");
    Undly_53.add_attribute("Px", "18968545.950000"); // 1
    Undly_53_set.insert("18968545.950000");
    Undly_53.add_attribute("DirtPx", "4037870.950000"); // 1
    Undly_53_set.insert("4037870.950000");
    Undly_53.add_attribute("EndPx", "9260032.290000"); // 1
    Undly_53_set.insert("9260032.290000");
    Undly_53.add_attribute("StartVal", "UnderlyingStartValue_t_954386489"); // 1
    Undly_53_set.insert("UnderlyingStartValue_t_954386489");
    Undly_53.add_attribute("CurVal", "UnderlyingCurrentValue_t_577664751"); // 1
    Undly_53_set.insert("UnderlyingCurrentValue_t_577664751");
    Undly_53.add_attribute("EndVal", "UnderlyingEndValue_t_1932552162"); // 1
    Undly_53_set.insert("UnderlyingEndValue_t_1932552162");
    Undly_53.add_attribute("AdjQty", "7742090.030000"); // 1
    Undly_53_set.insert("7742090.030000");
    Undly_53.add_attribute("FxRate", "14531411.230000"); // 1
    Undly_53_set.insert("14531411.230000");
    Undly_53.add_attribute("FxRateCalc", "M"); // 1
    Undly_53_set.insert("M");
    Undly_53.add_attribute("CapValu", "UnderlyingCapValue_t_824910632"); // 1
    Undly_53_set.insert("UnderlyingCapValue_t_824910632");
    Undly_53.add_attribute("SetMeth", "UnderlyingSettlMethod_t_194137481"); // 1
    Undly_53_set.insert("UnderlyingSettlMethod_t_194137481");
    Undly_53.add_attribute("PutCall", "1945454281"); // 1
    Undly_53_set.insert("1945454281");
    all_values.push_back(Undly_53_set);
    all_compo_names.insert("Undly_53_set");

    {
      xml_element UndAID_53{"UndAID"};
      multiset<string> UndAID_53_set;
      UndAID_53.add_attribute("AltID", "UnderlyingSecurityAltID_t_32980243"); // 2
      UndAID_53_set.insert("UnderlyingSecurityAltID_t_32980243");
      UndAID_53.add_attribute("AltIDSrc", "6"); // 2
      UndAID_53_set.insert("6");
      all_values.push_back(UndAID_53_set);
      all_compo_names.insert("UndAID_53_set");

      Undly_53.add_element(UndAID_53);
    }
    {
      xml_element Stip_80{"Stip"};
      multiset<string> Stip_80_set;
      Stip_80.add_attribute("Typ", "REFINT"); // 2
      Stip_80_set.insert("REFINT");
      Stip_80.add_attribute("Val", "UnderlyingStipValue_t_2145449248"); // 2
      Stip_80_set.insert("UnderlyingStipValue_t_2145449248");
      all_values.push_back(Stip_80_set);
      all_compo_names.insert("Stip_80_set");

      Undly_53.add_element(Stip_80);
    }
    {
      xml_element Pty_208{"Pty"};
      multiset<string> Pty_208_set;
      Pty_208.add_attribute("ID", "UnderlyingInstrumentPartyID_t_464375384"); // 2
      Pty_208_set.insert("UnderlyingInstrumentPartyID_t_464375384");
      Pty_208.add_attribute("Src", "1"); // 2
      Pty_208_set.insert("1");
      Pty_208.add_attribute("R", "5"); // 2
      Pty_208_set.insert("5");
      all_values.push_back(Pty_208_set);
      all_compo_names.insert("Pty_208_set");

      {
        xml_element Sub_208{"Sub"};
        multiset<string> Sub_208_set;
        Sub_208.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_612696184"); // 3
        Sub_208_set.insert("UnderlyingInstrumentPartySubID_t_612696184");
        Sub_208.add_attribute("Typ", "2"); // 3
        Sub_208_set.insert("2");
        all_values.push_back(Sub_208_set);
        all_compo_names.insert("Sub_208_set");

        Pty_208.add_element(Sub_208);
      }
      Undly_53.add_element(Pty_208);
    }
    elt.add_element(Undly_53);
  } // end Undly
  { // Undly
    xml_element Undly_54{"Undly"};
    multiset<string> Undly_54_set;
    Undly_54.add_attribute("Sym", "UnderlyingSymbol_t_549481886"); // 1
    Undly_54_set.insert("UnderlyingSymbol_t_549481886");
    Undly_54.add_attribute("Sfx", "WI"); // 1
    Undly_54_set.insert("WI");
    Undly_54.add_attribute("ID", "UnderlyingSecurityID_t_717357006"); // 1
    Undly_54_set.insert("UnderlyingSecurityID_t_717357006");
    Undly_54.add_attribute("Src", "K"); // 1
    Undly_54_set.insert("K");
    Undly_54.add_attribute("Prod", "1"); // 1
    Undly_54_set.insert("1");
    Undly_54.add_attribute("CFI", "UnderlyingCFICode_t_1088695062"); // 1
    Undly_54_set.insert("UnderlyingCFICode_t_1088695062");
    Undly_54.add_attribute("SecTyp", "OOF"); // 1
    Undly_54_set.insert("OOF");
    Undly_54.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_192322956"); // 1
    Undly_54_set.insert("UnderlyingSecuritySubType_t_192322956");
    Undly_54.add_attribute("MMY", "639500496"); // 1
    Undly_54_set.insert("639500496");
    Undly_54.add_attribute("Mat", "UnderlyingMaturityDate_t_107893461"); // 1
    Undly_54_set.insert("UnderlyingMaturityDate_t_107893461");
    Undly_54.add_attribute("MatTm", "2089177552"); // 1
    Undly_54_set.insert("2089177552");
    Undly_54.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1043287591"); // 1
    Undly_54_set.insert("UnderlyingCouponPaymentDate_t_1043287591");
    Undly_54.add_attribute("RestrctTyp", "MM"); // 1
    Undly_54_set.insert("MM");
    Undly_54.add_attribute("Snrty", "SR"); // 1
    Undly_54_set.insert("SR");
    Undly_54.add_attribute("NotlPctOut", "16209523.420000"); // 1
    Undly_54_set.insert("16209523.420000");
    Undly_54.add_attribute("OrigNotlPctOut", "8189652.050000"); // 1
    Undly_54_set.insert("8189652.050000");
    Undly_54.add_attribute("AttchPnt", "16702893.960000"); // 1
    Undly_54_set.insert("16702893.960000");
    Undly_54.add_attribute("DetchPnt", "9266098.180000"); // 1
    Undly_54_set.insert("9266098.180000");
    Undly_54.add_attribute("Issued", "UnderlyingIssueDate_t_290198563"); // 1
    Undly_54_set.insert("UnderlyingIssueDate_t_290198563");
    Undly_54.add_attribute("RepoCollSecTyp", "347716380"); // 1
    Undly_54_set.insert("347716380");
    Undly_54.add_attribute("RepoTrm", "1120747299"); // 1
    Undly_54_set.insert("1120747299");
    Undly_54.add_attribute("RepoRt", "881691.960000"); // 1
    Undly_54_set.insert("881691.960000");
    Undly_54.add_attribute("Fctr", "3806966.230000"); // 1
    Undly_54_set.insert("3806966.230000");
    Undly_54.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1147839138"); // 1
    Undly_54_set.insert("UnderlyingCreditRating_t_1147839138");
    Undly_54.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_960344703"); // 1
    Undly_54_set.insert("UnderlyingInstrRegistry_t_960344703");
    Undly_54.add_attribute("Ctry", "378662224"); // 1
    Undly_54_set.insert("378662224");
    Undly_54.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1612214522"); // 1
    Undly_54_set.insert("UnderlyingStateOrProvinceOfIssue_t_1612214522");
    Undly_54.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_42863083"); // 1
    Undly_54_set.insert("UnderlyingLocaleOfIssue_t_42863083");
    Undly_54.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1817615520"); // 1
    Undly_54_set.insert("UnderlyingRedemptionDate_t_1817615520");
    Undly_54.add_attribute("StrkPx", "774270.590000"); // 1
    Undly_54_set.insert("774270.590000");
    Undly_54.add_attribute("StrkCcy", "USD"); // 1
    Undly_54_set.insert("USD");
    Undly_54.add_attribute("OptA", "139106476"); // 1
    Undly_54_set.insert("139106476");
    Undly_54.add_attribute("Mult", "10626569.490000"); // 1
    Undly_54_set.insert("10626569.490000");
    Undly_54.add_attribute("MultTyp", "1"); // 1
    Undly_54_set.insert("1");
    Undly_54.add_attribute("FlowSchedTyp", "3"); // 1
    Undly_54_set.insert("3");
    Undly_54.add_attribute("UOM", "tn"); // 1
    Undly_54_set.insert("tn");
    Undly_54.add_attribute("UOMQty", "1598339.660000"); // 1
    Undly_54_set.insert("1598339.660000");
    Undly_54.add_attribute("PxUOM", "Bcf"); // 1
    Undly_54_set.insert("Bcf");
    Undly_54.add_attribute("PxUOMQty", "6433688.590000"); // 1
    Undly_54_set.insert("6433688.590000");
    Undly_54.add_attribute("TmUnit", "H"); // 1
    Undly_54_set.insert("H");
    Undly_54.add_attribute("ExerStyle", "2"); // 1
    Undly_54_set.insert("2");
    Undly_54.add_attribute("CpnRt", "16866564.500000"); // 1
    Undly_54_set.insert("16866564.500000");
    Undly_54.add_attribute("Exch", "UnderlyingSecurityExchange_t_1301624117"); // 1
    Undly_54_set.insert("UnderlyingSecurityExchange_t_1301624117");
    Undly_54.add_attribute("Issr", "UnderlyingIssuer_t_151244764"); // 1
    Undly_54_set.insert("UnderlyingIssuer_t_151244764");
    Undly_54.add_attribute("EncUndIssrLen", "1160125145"); // 1
    Undly_54_set.insert("1160125145");
    Undly_54.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2120589322"); // 1
    Undly_54_set.insert("EncodedUnderlyingIssuer_t_2120589322");
    Undly_54.add_attribute("Desc", "UnderlyingSecurityDesc_t_1821534160"); // 1
    Undly_54_set.insert("UnderlyingSecurityDesc_t_1821534160");
    Undly_54.add_attribute("EncUndSecDescLen", "2086734963"); // 1
    Undly_54_set.insert("2086734963");
    Undly_54.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_263304237"); // 1
    Undly_54_set.insert("EncodedUnderlyingSecurityDesc_t_263304237");
    Undly_54.add_attribute("CPPgm", "UnderlyingCPProgram_t_21766892"); // 1
    Undly_54_set.insert("UnderlyingCPProgram_t_21766892");
    Undly_54.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1059998614"); // 1
    Undly_54_set.insert("UnderlyingCPRegType_t_1059998614");
    Undly_54.add_attribute("AllocPct", "3514734.330000"); // 1
    Undly_54_set.insert("3514734.330000");
    Undly_54.add_attribute("Ccy", "GBP"); // 1
    Undly_54_set.insert("GBP");
    Undly_54.add_attribute("Qty", "13118181.360000"); // 1
    Undly_54_set.insert("13118181.360000");
    Undly_54.add_attribute("SettlTyp", "4"); // 1
    Undly_54_set.insert("4");
    Undly_54.add_attribute("CashAmt", "UnderlyingCashAmount_t_1672568626"); // 1
    Undly_54_set.insert("UnderlyingCashAmount_t_1672568626");
    Undly_54.add_attribute("CashTyp", "DIFF"); // 1
    Undly_54_set.insert("DIFF");
    Undly_54.add_attribute("Px", "4512576.110000"); // 1
    Undly_54_set.insert("4512576.110000");
    Undly_54.add_attribute("DirtPx", "17499956.850000"); // 1
    Undly_54_set.insert("17499956.850000");
    Undly_54.add_attribute("EndPx", "16999811.620000"); // 1
    Undly_54_set.insert("16999811.620000");
    Undly_54.add_attribute("StartVal", "UnderlyingStartValue_t_670871370"); // 1
    Undly_54_set.insert("UnderlyingStartValue_t_670871370");
    Undly_54.add_attribute("CurVal", "UnderlyingCurrentValue_t_1889102162"); // 1
    Undly_54_set.insert("UnderlyingCurrentValue_t_1889102162");
    Undly_54.add_attribute("EndVal", "UnderlyingEndValue_t_615154464"); // 1
    Undly_54_set.insert("UnderlyingEndValue_t_615154464");
    Undly_54.add_attribute("AdjQty", "12559968.220000"); // 1
    Undly_54_set.insert("12559968.220000");
    Undly_54.add_attribute("FxRate", "10102496.720000"); // 1
    Undly_54_set.insert("10102496.720000");
    Undly_54.add_attribute("FxRateCalc", "D"); // 1
    Undly_54_set.insert("D");
    Undly_54.add_attribute("CapValu", "UnderlyingCapValue_t_1415830788"); // 1
    Undly_54_set.insert("UnderlyingCapValue_t_1415830788");
    Undly_54.add_attribute("SetMeth", "UnderlyingSettlMethod_t_323720139"); // 1
    Undly_54_set.insert("UnderlyingSettlMethod_t_323720139");
    Undly_54.add_attribute("PutCall", "1262391687"); // 1
    Undly_54_set.insert("1262391687");
    all_values.push_back(Undly_54_set);
    all_compo_names.insert("Undly_54_set");

    {
      xml_element UndAID_54{"UndAID"};
      multiset<string> UndAID_54_set;
      UndAID_54.add_attribute("AltID", "UnderlyingSecurityAltID_t_1683558215"); // 2
      UndAID_54_set.insert("UnderlyingSecurityAltID_t_1683558215");
      UndAID_54.add_attribute("AltIDSrc", "K"); // 2
      UndAID_54_set.insert("K");
      all_values.push_back(UndAID_54_set);
      all_compo_names.insert("UndAID_54_set");

      Undly_54.add_element(UndAID_54);
    }
    {
      xml_element Stip_81{"Stip"};
      multiset<string> Stip_81_set;
      Stip_81.add_attribute("Typ", "CURRENCY"); // 2
      Stip_81_set.insert("CURRENCY");
      Stip_81.add_attribute("Val", "UnderlyingStipValue_t_837698685"); // 2
      Stip_81_set.insert("UnderlyingStipValue_t_837698685");
      all_values.push_back(Stip_81_set);
      all_compo_names.insert("Stip_81_set");

      Undly_54.add_element(Stip_81);
    }
    {
      xml_element Pty_209{"Pty"};
      multiset<string> Pty_209_set;
      Pty_209.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1877612922"); // 2
      Pty_209_set.insert("UnderlyingInstrumentPartyID_t_1877612922");
      Pty_209.add_attribute("Src", "9"); // 2
      Pty_209_set.insert("9");
      Pty_209.add_attribute("R", "73"); // 2
      Pty_209_set.insert("73");
      all_values.push_back(Pty_209_set);
      all_compo_names.insert("Pty_209_set");

      {
        xml_element Sub_209{"Sub"};
        multiset<string> Sub_209_set;
        Sub_209.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1551663434"); // 3
        Sub_209_set.insert("UnderlyingInstrumentPartySubID_t_1551663434");
        Sub_209.add_attribute("Typ", "15"); // 3
        Sub_209_set.insert("15");
        all_values.push_back(Sub_209_set);
        all_compo_names.insert("Sub_209_set");

        Pty_209.add_element(Sub_209);
      }
      Undly_54.add_element(Pty_209);
    }
    elt.add_element(Undly_54);
  } // end Undly
  { // Ord
    xml_element Ord_0{"Ord"};
    multiset<string> Ord_0_set;
    Ord_0.add_attribute("Qty", "15734303.260000"); // 1
    Ord_0_set.insert("15734303.260000");
    Ord_0.add_attribute("SwapTyp", "5"); // 1
    Ord_0_set.insert("5");
    Ord_0.add_attribute("LegAllocID", "LegAllocID_t_1425582030"); // 1
    Ord_0_set.insert("LegAllocID_t_1425582030");
    Ord_0.add_attribute("PosEfct", "O"); // 1
    Ord_0_set.insert("O");
    Ord_0.add_attribute("Cover", "1"); // 1
    Ord_0_set.insert("1");
    Ord_0.add_attribute("RefID", "LegRefID_t_589916519"); // 1
    Ord_0_set.insert("LegRefID_t_589916519");
    Ord_0.add_attribute("SettlTyp", "1"); // 1
    Ord_0_set.insert("1");
    Ord_0.add_attribute("SettlDt", "LegSettlDate_t_398894998"); // 1
    Ord_0_set.insert("LegSettlDate_t_398894998");
    Ord_0.add_attribute("SettlCcy", "EUR"); // 1
    Ord_0_set.insert("EUR");
    Ord_0.add_attribute("OrdQty", "14070.350000"); // 1
    Ord_0_set.insert("14070.350000");
    Ord_0.add_attribute("LegVolatility", "14970952.530000"); // 1
    Ord_0_set.insert("14970952.530000");
    Ord_0.add_attribute("LegDividendYield", "17316649.150000"); // 1
    Ord_0_set.insert("17316649.150000");
    Ord_0.add_attribute("LegCurrencyRatio", "18905091.970000"); // 1
    Ord_0_set.insert("18905091.970000");
    Ord_0.add_attribute("LegExecInst", "r"); // 1
    Ord_0_set.insert("r");
    all_values.push_back(Ord_0_set);
    all_compo_names.insert("Ord_0_set");

    {
      xml_element Leg_52{"Leg"};
      multiset<string> Leg_52_set;
      Leg_52.add_attribute("Sym", "LegSymbol_t_840178089"); // 2
      Leg_52_set.insert("LegSymbol_t_840178089");
      Leg_52.add_attribute("Sfx", "CD"); // 2
      Leg_52_set.insert("CD");
      Leg_52.add_attribute("ID", "LegSecurityID_t_583788896"); // 2
      Leg_52_set.insert("LegSecurityID_t_583788896");
      Leg_52.add_attribute("Src", "1"); // 2
      Leg_52_set.insert("1");
      Leg_52.add_attribute("Prod", "1"); // 2
      Leg_52_set.insert("1");
      Leg_52.add_attribute("CFI", "LegCFICode_t_1846180583"); // 2
      Leg_52_set.insert("LegCFICode_t_1846180583");
      Leg_52.add_attribute("SecTyp", "OOC"); // 2
      Leg_52_set.insert("OOC");
      Leg_52.add_attribute("SecSubTyp", "LegSecuritySubType_t_655879872"); // 2
      Leg_52_set.insert("LegSecuritySubType_t_655879872");
      Leg_52.add_attribute("MMY", "500261425"); // 2
      Leg_52_set.insert("500261425");
      Leg_52.add_attribute("Mat", "LegMaturityDate_t_482298482"); // 2
      Leg_52_set.insert("LegMaturityDate_t_482298482");
      Leg_52.add_attribute("MatTm", "386009146"); // 2
      Leg_52_set.insert("386009146");
      Leg_52.add_attribute("CpnPmt", "LegCouponPaymentDate_t_314467411"); // 2
      Leg_52_set.insert("LegCouponPaymentDate_t_314467411");
      Leg_52.add_attribute("Issued", "LegIssueDate_t_1293102842"); // 2
      Leg_52_set.insert("LegIssueDate_t_1293102842");
      Leg_52.add_attribute("RepoCollSecTyp", "1937672581"); // 2
      Leg_52_set.insert("1937672581");
      Leg_52.add_attribute("RepoTrm", "67924713"); // 2
      Leg_52_set.insert("67924713");
      Leg_52.add_attribute("RepoRt", "2197277.910000"); // 2
      Leg_52_set.insert("2197277.910000");
      Leg_52.add_attribute("Fctr", "13636192.590000"); // 2
      Leg_52_set.insert("13636192.590000");
      Leg_52.add_attribute("CrdRtg", "LegCreditRating_t_881380628"); // 2
      Leg_52_set.insert("LegCreditRating_t_881380628");
      Leg_52.add_attribute("Rgstry", "LegInstrRegistry_t_1645309821"); // 2
      Leg_52_set.insert("LegInstrRegistry_t_1645309821");
      Leg_52.add_attribute("Ctry", "1192029453"); // 2
      Leg_52_set.insert("1192029453");
      Leg_52.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1755190648"); // 2
      Leg_52_set.insert("LegStateOrProvinceOfIssue_t_1755190648");
      Leg_52.add_attribute("Lcl", "LegLocaleOfIssue_t_87742692"); // 2
      Leg_52_set.insert("LegLocaleOfIssue_t_87742692");
      Leg_52.add_attribute("Redeem", "LegRedemptionDate_t_1801565387"); // 2
      Leg_52_set.insert("LegRedemptionDate_t_1801565387");
      Leg_52.add_attribute("Strk", "66019.980000"); // 2
      Leg_52_set.insert("66019.980000");
      Leg_52.add_attribute("StrkCcy", "JPY"); // 2
      Leg_52_set.insert("JPY");
      Leg_52.add_attribute("OptA", "8009033"); // 2
      Leg_52_set.insert("8009033");
      Leg_52.add_attribute("Cmult", "13819520.360000"); // 2
      Leg_52_set.insert("13819520.360000");
      Leg_52.add_attribute("MultTyp", "0"); // 2
      Leg_52_set.insert("0");
      Leg_52.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_52_set.insert("1");
      Leg_52.add_attribute("UOM", "tn"); // 2
      Leg_52_set.insert("tn");
      Leg_52.add_attribute("UOMQty", "11392346.400000"); // 2
      Leg_52_set.insert("11392346.400000");
      Leg_52.add_attribute("PxUOM", "Alw"); // 2
      Leg_52_set.insert("Alw");
      Leg_52.add_attribute("PxUOMQty", "19305070.010000"); // 2
      Leg_52_set.insert("19305070.010000");
      Leg_52.add_attribute("TmUnit", "S"); // 2
      Leg_52_set.insert("S");
      Leg_52.add_attribute("ExerStyle", "0"); // 2
      Leg_52_set.insert("0");
      Leg_52.add_attribute("CpnRt", "16292039.370000"); // 2
      Leg_52_set.insert("16292039.370000");
      Leg_52.add_attribute("Exch", "LegSecurityExchange_t_892359668"); // 2
      Leg_52_set.insert("LegSecurityExchange_t_892359668");
      Leg_52.add_attribute("Issr", "LegIssuer_t_89701390"); // 2
      Leg_52_set.insert("LegIssuer_t_89701390");
      Leg_52.add_attribute("EncLegIssrLen", "2129465362"); // 2
      Leg_52_set.insert("2129465362");
      Leg_52.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1374658150"); // 2
      Leg_52_set.insert("EncodedLegIssuer_t_1374658150");
      Leg_52.add_attribute("Desc", "LegSecurityDesc_t_475710537"); // 2
      Leg_52_set.insert("LegSecurityDesc_t_475710537");
      Leg_52.add_attribute("EncLegSecDescLen", "296449125"); // 2
      Leg_52_set.insert("296449125");
      Leg_52.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_520277344"); // 2
      Leg_52_set.insert("EncodedLegSecurityDesc_t_520277344");
      Leg_52.add_attribute("RatioQty", "2658994.700000"); // 2
      Leg_52_set.insert("2658994.700000");
      Leg_52.add_attribute("Side", "F"); // 2
      Leg_52_set.insert("F");
      Leg_52.add_attribute("Ccy", "CAN"); // 2
      Leg_52_set.insert("CAN");
      Leg_52.add_attribute("Pool", "LegPool_t_1245754467"); // 2
      Leg_52_set.insert("LegPool_t_1245754467");
      Leg_52.add_attribute("Dated", "LegDatedDate_t_237831309"); // 2
      Leg_52_set.insert("LegDatedDate_t_237831309");
      Leg_52.add_attribute("CSetMo", "674064535"); // 2
      Leg_52_set.insert("674064535");
      Leg_52.add_attribute("IntAcrl", "LegInterestAccrualDate_t_853461467"); // 2
      Leg_52_set.insert("LegInterestAccrualDate_t_853461467");
      Leg_52.add_attribute("PutCall", "325574001"); // 2
      Leg_52_set.insert("325574001");
      Leg_52.add_attribute("LegOptionRatio", "3281462.740000"); // 2
      Leg_52_set.insert("3281462.740000");
      Leg_52.add_attribute("Px", "8600634.650000"); // 2
      Leg_52_set.insert("8600634.650000");
      all_values.push_back(Leg_52_set);
      all_compo_names.insert("Leg_52_set");

      {
        xml_element LegAID_52{"LegAID"};
        multiset<string> LegAID_52_set;
        LegAID_52.add_attribute("SecAltID", "LegSecurityAltID_t_210430784"); // 3
        LegAID_52_set.insert("LegSecurityAltID_t_210430784");
        LegAID_52.add_attribute("SecAltIDSrc", "J"); // 3
        LegAID_52_set.insert("J");
        all_values.push_back(LegAID_52_set);
        all_compo_names.insert("LegAID_52_set");

        Leg_52.add_element(LegAID_52);
      }
      Ord_0.add_element(Leg_52);
    }
    {
      xml_element Stip_82{"Stip"};
      multiset<string> Stip_82_set;
      Stip_82.add_attribute("StipTyp", "LOOKBACK"); // 2
      Stip_82_set.insert("LOOKBACK");
      Stip_82.add_attribute("StipVal", "LegStipulationValue_t_1592382820"); // 2
      Stip_82_set.insert("LegStipulationValue_t_1592382820");
      all_values.push_back(Stip_82_set);
      all_compo_names.insert("Stip_82_set");

      Ord_0.add_element(Stip_82);
    }
    {
      xml_element PreAll_3{"PreAll"};
      multiset<string> PreAll_3_set;
      PreAll_3.add_attribute("AllocAcct", "LegAllocAccount_t_1342078109"); // 2
      PreAll_3_set.insert("LegAllocAccount_t_1342078109");
      PreAll_3.add_attribute("IndAllocID", "LegIndividualAllocID_t_619107081"); // 2
      PreAll_3_set.insert("LegIndividualAllocID_t_619107081");
      PreAll_3.add_attribute("AllocQty", "7916172.770000"); // 2
      PreAll_3_set.insert("7916172.770000");
      PreAll_3.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_333829101"); // 2
      PreAll_3_set.insert("LegAllocAcctIDSource_t_333829101");
      PreAll_3.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_3_set.insert("CHF");
      all_values.push_back(PreAll_3_set);
      all_compo_names.insert("PreAll_3_set");

      {
        xml_element Pty_210{"Pty"};
        multiset<string> Pty_210_set;
        Pty_210.add_attribute("ID", "Nested2PartyID_t_1581588972"); // 3
        Pty_210_set.insert("Nested2PartyID_t_1581588972");
        Pty_210.add_attribute("Src", "4"); // 3
        Pty_210_set.insert("4");
        Pty_210.add_attribute("R", "36"); // 3
        Pty_210_set.insert("36");
        all_values.push_back(Pty_210_set);
        all_compo_names.insert("Pty_210_set");

        {
          xml_element Sub_210{"Sub"};
          multiset<string> Sub_210_set;
          Sub_210.add_attribute("ID", "Nested2PartySubID_t_326464992"); // 4
          Sub_210_set.insert("Nested2PartySubID_t_326464992");
          Sub_210.add_attribute("Typ", "16"); // 4
          Sub_210_set.insert("16");
          all_values.push_back(Sub_210_set);
          all_compo_names.insert("Sub_210_set");

          Pty_210.add_element(Sub_210);
        }
        PreAll_3.add_element(Pty_210);
      }
      Ord_0.add_element(PreAll_3);
    }
    {
      xml_element Pty_211{"Pty"};
      multiset<string> Pty_211_set;
      Pty_211.add_attribute("ID", "NestedPartyID_t_38342634"); // 2
      Pty_211_set.insert("NestedPartyID_t_38342634");
      Pty_211.add_attribute("Src", "5"); // 2
      Pty_211_set.insert("5");
      Pty_211.add_attribute("R", "78"); // 2
      Pty_211_set.insert("78");
      all_values.push_back(Pty_211_set);
      all_compo_names.insert("Pty_211_set");

      {
        xml_element Sub_211{"Sub"};
        multiset<string> Sub_211_set;
        Sub_211.add_attribute("ID", "NestedPartySubID_t_334791759"); // 3
        Sub_211_set.insert("NestedPartySubID_t_334791759");
        Sub_211.add_attribute("Typ", "16"); // 3
        Sub_211_set.insert("16");
        all_values.push_back(Sub_211_set);
        all_compo_names.insert("Sub_211_set");

        Pty_211.add_element(Sub_211);
      }
      Ord_0.add_element(Pty_211);
    }
    elt.add_element(Ord_0);
  } // end Ord
  { // OrdQty
    xml_element OrdQty_8{"OrdQty"};
    multiset<string> OrdQty_8_set;
    OrdQty_8.add_attribute("Qty", "13885498.020000"); // 1
    OrdQty_8_set.insert("13885498.020000");
    OrdQty_8.add_attribute("Cash", "6991655.980000"); // 1
    OrdQty_8_set.insert("6991655.980000");
    OrdQty_8.add_attribute("Pct", "8139219.740000"); // 1
    OrdQty_8_set.insert("8139219.740000");
    OrdQty_8.add_attribute("RndDir", "1"); // 1
    OrdQty_8_set.insert("1");
    OrdQty_8.add_attribute("RndMod", "19449200.650000"); // 1
    OrdQty_8_set.insert("19449200.650000");
    all_values.push_back(OrdQty_8_set);
    all_compo_names.insert("OrdQty_8_set");

    elt.add_element(OrdQty_8);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_2{"TrgrInstr"};
    multiset<string> TrgrInstr_2_set;
    TrgrInstr_2.add_attribute("TrgrTyp", "4"); // 1
    TrgrInstr_2_set.insert("4");
    TrgrInstr_2.add_attribute("TrgrActn", "3"); // 1
    TrgrInstr_2_set.insert("3");
    TrgrInstr_2.add_attribute("TrgrPx", "6508978.840000"); // 1
    TrgrInstr_2_set.insert("6508978.840000");
    TrgrInstr_2.add_attribute("TrgrSym", "TriggerSymbol_t_1377327285"); // 1
    TrgrInstr_2_set.insert("TriggerSymbol_t_1377327285");
    TrgrInstr_2.add_attribute("TrgrSecID", "TriggerSecurityID_t_1872795693"); // 1
    TrgrInstr_2_set.insert("TriggerSecurityID_t_1872795693");
    TrgrInstr_2.add_attribute("TrgrSecIDSrc", "8"); // 1
    TrgrInstr_2_set.insert("8");
    TrgrInstr_2.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1587758069"); // 1
    TrgrInstr_2_set.insert("TriggerSecurityDesc_t_1587758069");
    TrgrInstr_2.add_attribute("TrgrPxTyp", "4"); // 1
    TrgrInstr_2_set.insert("4");
    TrgrInstr_2.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_2_set.insert("3");
    TrgrInstr_2.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_2_set.insert("U");
    TrgrInstr_2.add_attribute("TrgrNewPx", "21104117.120000"); // 1
    TrgrInstr_2_set.insert("21104117.120000");
    TrgrInstr_2.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_2_set.insert("2");
    TrgrInstr_2.add_attribute("TrgrNewQty", "18242745.190000"); // 1
    TrgrInstr_2_set.insert("18242745.190000");
    TrgrInstr_2.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_296757165"); // 1
    TrgrInstr_2_set.insert("TriggerTradingSessionID_t_296757165");
    TrgrInstr_2.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1974074167"); // 1
    TrgrInstr_2_set.insert("TriggerTradingSessionSubID_t_1974074167");
    all_values.push_back(TrgrInstr_2_set);
    all_compo_names.insert("TrgrInstr_2_set");

    elt.add_element(TrgrInstr_2);
  } // end TrgrInstr
  { // Comm
    xml_element Comm_14{"Comm"};
    multiset<string> Comm_14_set;
    Comm_14.add_attribute("Comm", "Commission_t_251431502"); // 1
    Comm_14_set.insert("Commission_t_251431502");
    Comm_14.add_attribute("CommTyp", "4"); // 1
    Comm_14_set.insert("4");
    Comm_14.add_attribute("Ccy", "USD"); // 1
    Comm_14_set.insert("USD");
    Comm_14.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_14_set.insert("Y");
    all_values.push_back(Comm_14_set);
    all_compo_names.insert("Comm_14_set");

    elt.add_element(Comm_14);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_2{"PegInstr"};
    multiset<string> PegInstr_2_set;
    PegInstr_2.add_attribute("OfstVal", "10307687.200000"); // 1
    PegInstr_2_set.insert("10307687.200000");
    PegInstr_2.add_attribute("PegPxTyp", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("MoveTyp", "0"); // 1
    PegInstr_2_set.insert("0");
    PegInstr_2.add_attribute("OfstTyp", "0"); // 1
    PegInstr_2_set.insert("0");
    PegInstr_2.add_attribute("LmtTyp", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("RndDir", "2"); // 1
    PegInstr_2_set.insert("2");
    PegInstr_2.add_attribute("Scope", "4"); // 1
    PegInstr_2_set.insert("4");
    PegInstr_2.add_attribute("PegSecurityIDSource", "9"); // 1
    PegInstr_2_set.insert("9");
    PegInstr_2.add_attribute("PegSecID", "PegSecurityID_t_498805789"); // 1
    PegInstr_2_set.insert("PegSecurityID_t_498805789");
    PegInstr_2.add_attribute("PgSymbl", "PegSymbol_t_117586443"); // 1
    PegInstr_2_set.insert("PegSymbol_t_117586443");
    PegInstr_2.add_attribute("PegSecDesc", "PegSecurityDesc_t_1177528831"); // 1
    PegInstr_2_set.insert("PegSecurityDesc_t_1177528831");
    all_values.push_back(PegInstr_2_set);
    all_compo_names.insert("PegInstr_2_set");

    elt.add_element(PegInstr_2);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_2{"DiscInstr"};
    multiset<string> DiscInstr_2_set;
    DiscInstr_2.add_attribute("DsctnInst", "1"); // 1
    DiscInstr_2_set.insert("1");
    DiscInstr_2.add_attribute("OfstValu", "16622358.620000"); // 1
    DiscInstr_2_set.insert("16622358.620000");
    DiscInstr_2.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_2_set.insert("1");
    DiscInstr_2.add_attribute("OfstTyp", "2"); // 1
    DiscInstr_2_set.insert("2");
    DiscInstr_2.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_2_set.insert("0");
    DiscInstr_2.add_attribute("RndDir", "1"); // 1
    DiscInstr_2_set.insert("1");
    DiscInstr_2.add_attribute("Scope", "4"); // 1
    DiscInstr_2_set.insert("4");
    all_values.push_back(DiscInstr_2_set);
    all_compo_names.insert("DiscInstr_2_set");

    elt.add_element(DiscInstr_2);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_6{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_6_set;
    StrtPrmGrp_6.add_attribute("StrtPrmNme", "StrategyParameterName_t_1423454615"); // 1
    StrtPrmGrp_6_set.insert("StrategyParameterName_t_1423454615");
    StrtPrmGrp_6.add_attribute("StrtPrmTyp", "20"); // 1
    StrtPrmGrp_6_set.insert("20");
    StrtPrmGrp_6.add_attribute("StrtPrmVal", "StrategyParameterValue_t_2118809574"); // 1
    StrtPrmGrp_6_set.insert("StrategyParameterValue_t_2118809574");
    all_values.push_back(StrtPrmGrp_6_set);
    all_compo_names.insert("StrtPrmGrp_6_set");

    elt.add_element(StrtPrmGrp_6);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_7{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_7_set;
    StrtPrmGrp_7.add_attribute("StrtPrmNme", "StrategyParameterName_t_126628248"); // 1
    StrtPrmGrp_7_set.insert("StrategyParameterName_t_126628248");
    StrtPrmGrp_7.add_attribute("StrtPrmTyp", "10"); // 1
    StrtPrmGrp_7_set.insert("10");
    StrtPrmGrp_7.add_attribute("StrtPrmVal", "StrategyParameterValue_t_268083091"); // 1
    StrtPrmGrp_7_set.insert("StrategyParameterValue_t_268083091");
    all_values.push_back(StrtPrmGrp_7_set);
    all_compo_names.insert("StrtPrmGrp_7_set");

    elt.add_element(StrtPrmGrp_7);
  } // end StrtPrmGrp
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
