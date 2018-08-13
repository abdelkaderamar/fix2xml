#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/NewOrderMultileg.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( NewOrderMultileg_message_t, set_fields)
{

  fixml2fix_converter converter {"../../spec/fix/FIX50SP2.xml", "../../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdMleg" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderMultileg_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_1683857362"); // 0
  NewOrderMultileg_message_t_0.insert("ClOrdID_t_1683857362");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1491505362"); // 0
  NewOrderMultileg_message_t_0.insert("SecondaryClOrdID_t_1491505362");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_1214195781"); // 0
  NewOrderMultileg_message_t_0.insert("ClOrdLinkID_t_1214195781");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1215990830"); // 0
  NewOrderMultileg_message_t_0.insert("TradeOriginationDate_t_1215990830");
  elt.add_attribute("TrdDt", "TradeDate_t_132616892"); // 0
  NewOrderMultileg_message_t_0.insert("TradeDate_t_132616892");
  elt.add_attribute("Acct", "Account_t_347644045"); // 0
  NewOrderMultileg_message_t_0.insert("Account_t_347644045");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  NewOrderMultileg_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "4"); // 0
  NewOrderMultileg_message_t_0.insert("4");
  elt.add_attribute("DayBkngInst", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("BkngUnit", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_1885216475"); // 0
  NewOrderMultileg_message_t_0.insert("AllocID_t_1885216475");
  elt.add_attribute("SettlTyp", "9"); // 0
  NewOrderMultileg_message_t_0.insert("9");
  elt.add_attribute("SettlDt", "SettlDate_t_626634063"); // 0
  NewOrderMultileg_message_t_0.insert("SettlDate_t_626634063");
  elt.add_attribute("CshMgn", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "4"); // 0
  NewOrderMultileg_message_t_0.insert("4");
  elt.add_attribute("HandlInst", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("ExecInst", "r"); // 0
  NewOrderMultileg_message_t_0.insert("r");
  elt.add_attribute("MinQty", "19823055.190000"); // 0
  NewOrderMultileg_message_t_0.insert("19823055.190000");
  elt.add_attribute("MtchInc", "19754496.690000"); // 0
  NewOrderMultileg_message_t_0.insert("19754496.690000");
  elt.add_attribute("MxPxLvls", "1677103394"); // 0
  NewOrderMultileg_message_t_0.insert("1677103394");
  elt.add_attribute("MaxFloor", "15415896.520000"); // 0
  NewOrderMultileg_message_t_0.insert("15415896.520000");
  elt.add_attribute("ExDest", "ExDestination_t_459174080"); // 0
  NewOrderMultileg_message_t_0.insert("ExDestination_t_459174080");
  elt.add_attribute("ExDestIDSrc", "E"); // 0
  NewOrderMultileg_message_t_0.insert("E");
  elt.add_attribute("ProcCode", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("Side", "G"); // 0
  NewOrderMultileg_message_t_0.insert("G");
  elt.add_attribute("PrevClsPx", "10102350.590000"); // 0
  NewOrderMultileg_message_t_0.insert("10102350.590000");
  elt.add_attribute("SwapPnts", "6188748.510000"); // 0
  NewOrderMultileg_message_t_0.insert("6188748.510000");
  elt.add_attribute("LocReqd", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_1678514819"); // 0
  NewOrderMultileg_message_t_0.insert("TransactTime_t_1678514819");
  elt.add_attribute("QtyTyp", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("OrdTyp", "5"); // 0
  NewOrderMultileg_message_t_0.insert("5");
  elt.add_attribute("MlegModel", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("MlegPxMeth", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("PxTyp", "9"); // 0
  NewOrderMultileg_message_t_0.insert("9");
  elt.add_attribute("Px", "11551534.250000"); // 0
  NewOrderMultileg_message_t_0.insert("11551534.250000");
  elt.add_attribute("PxPrtScp", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("StopPx", "2038499.890000"); // 0
  NewOrderMultileg_message_t_0.insert("2038499.890000");
  elt.add_attribute("Ccy", "JPY"); // 0
  NewOrderMultileg_message_t_0.insert("JPY");
  elt.add_attribute("ComplianceID", "ComplianceID_t_598740705"); // 0
  NewOrderMultileg_message_t_0.insert("ComplianceID_t_598740705");
  elt.add_attribute("SolFlag", "Y"); // 0
  NewOrderMultileg_message_t_0.insert("Y");
  elt.add_attribute("IOIID", "IOIID_t_1627875091"); // 0
  NewOrderMultileg_message_t_0.insert("IOIID_t_1627875091");
  elt.add_attribute("QID", "QuoteID_t_908242315"); // 0
  NewOrderMultileg_message_t_0.insert("QuoteID_t_908242315");
  elt.add_attribute("RefOrdID", "RefOrderID_t_812537102"); // 0
  NewOrderMultileg_message_t_0.insert("RefOrderID_t_812537102");
  elt.add_attribute("RefOrdIDSrc", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("TmInForce", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1431115545"); // 0
  NewOrderMultileg_message_t_0.insert("EffectiveTime_t_1431115545");
  elt.add_attribute("ExpireDt", "ExpireDate_t_304402494"); // 0
  NewOrderMultileg_message_t_0.insert("ExpireDate_t_304402494");
  elt.add_attribute("ExpireTm", "ExpireTime_t_229468041"); // 0
  NewOrderMultileg_message_t_0.insert("ExpireTime_t_229468041");
  elt.add_attribute("GTBkngInst", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("Cpcty", "P"); // 0
  NewOrderMultileg_message_t_0.insert("P");
  elt.add_attribute("Rstctions", "E"); // 0
  NewOrderMultileg_message_t_0.insert("E");
  elt.add_attribute("PrTrdAnon", "false"); // 0
  NewOrderMultileg_message_t_0.insert("false");
  elt.add_attribute("CustCpcty", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ForexReq", "Y"); // 0
  NewOrderMultileg_message_t_0.insert("Y");
  elt.add_attribute("SettlCcy", "JPY"); // 0
  NewOrderMultileg_message_t_0.insert("JPY");
  elt.add_attribute("BkngTyp", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("Txt", "Text_t_2045921704"); // 0
  NewOrderMultileg_message_t_0.insert("Text_t_2045921704");
  elt.add_attribute("EncTxtLen", "96054067"); // 0
  NewOrderMultileg_message_t_0.insert("96054067");
  elt.add_attribute("EncTxt", "EncodedText_t_1028297229"); // 0
  NewOrderMultileg_message_t_0.insert("EncodedText_t_1028297229");
  elt.add_attribute("PosEfct", "C"); // 0
  NewOrderMultileg_message_t_0.insert("C");
  elt.add_attribute("Covered", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "17432136.450000"); // 0
  NewOrderMultileg_message_t_0.insert("17432136.450000");
  elt.add_attribute("TgtStrategy", "3"); // 0
  NewOrderMultileg_message_t_0.insert("3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_126260377"); // 0
  NewOrderMultileg_message_t_0.insert("TargetStrategyParameters_t_126260377");
  elt.add_attribute("RFR", "6582904.580000"); // 0
  NewOrderMultileg_message_t_0.insert("6582904.580000");
  elt.add_attribute("ParticipationRt", "6776923.720000"); // 0
  NewOrderMultileg_message_t_0.insert("6776923.720000");
  elt.add_attribute("CxllationRights", "M"); // 0
  NewOrderMultileg_message_t_0.insert("M");
  elt.add_attribute("MnyLaunderingStat", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("RegistID", "RegistID_t_1276433077"); // 0
  NewOrderMultileg_message_t_0.insert("RegistID_t_1276433077");
  elt.add_attribute("Designation", "Designation_t_1477951671"); // 0
  NewOrderMultileg_message_t_0.insert("Designation_t_1477951671");
  elt.add_attribute("MLEGRptTypReq", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  all_values.push_back(NewOrderMultileg_message_t_0);
  all_compo_names.insert("NewOrderMultileg_message_t");

  { // Hdr
    xml_element Hdr_53{"Hdr"};
    multiset<string> Hdr_53_set;
    Hdr_53.add_attribute("SeqNum", "37191744"); // 1
    Hdr_53_set.insert("37191744");
    Hdr_53.add_attribute("SID", "SenderCompID_t_143005125"); // 1
    Hdr_53_set.insert("SenderCompID_t_143005125");
    Hdr_53.add_attribute("TID", "TargetCompID_t_772843615"); // 1
    Hdr_53_set.insert("TargetCompID_t_772843615");
    Hdr_53.add_attribute("OBID", "OnBehalfOfCompID_t_431837915"); // 1
    Hdr_53_set.insert("OnBehalfOfCompID_t_431837915");
    Hdr_53.add_attribute("D2ID", "DeliverToCompID_t_1574120671"); // 1
    Hdr_53_set.insert("DeliverToCompID_t_1574120671");
    Hdr_53.add_attribute("SSub", "SenderSubID_t_1077246110"); // 1
    Hdr_53_set.insert("SenderSubID_t_1077246110");
    Hdr_53.add_attribute("SLoc", "SenderLocationID_t_661305956"); // 1
    Hdr_53_set.insert("SenderLocationID_t_661305956");
    Hdr_53.add_attribute("TSub", "TargetSubID_t_685718590"); // 1
    Hdr_53_set.insert("TargetSubID_t_685718590");
    Hdr_53.add_attribute("TLoc", "TargetLocationID_t_911268351"); // 1
    Hdr_53_set.insert("TargetLocationID_t_911268351");
    Hdr_53.add_attribute("OBSub", "OnBehalfOfSubID_t_284880002"); // 1
    Hdr_53_set.insert("OnBehalfOfSubID_t_284880002");
    Hdr_53.add_attribute("OBLoc", "OnBehalfOfLocationID_t_256490589"); // 1
    Hdr_53_set.insert("OnBehalfOfLocationID_t_256490589");
    Hdr_53.add_attribute("D2Sub", "DeliverToSubID_t_466056187"); // 1
    Hdr_53_set.insert("DeliverToSubID_t_466056187");
    Hdr_53.add_attribute("D2Loc", "DeliverToLocationID_t_1193581745"); // 1
    Hdr_53_set.insert("DeliverToLocationID_t_1193581745");
    Hdr_53.add_attribute("PosDup", "N"); // 1
    Hdr_53_set.insert("N");
    Hdr_53.add_attribute("PosRsnd", "Y"); // 1
    Hdr_53_set.insert("Y");
    Hdr_53.add_attribute("Snt", "SendingTime_t_573674691"); // 1
    Hdr_53_set.insert("SendingTime_t_573674691");
    Hdr_53.add_attribute("OrigSnt", "OrigSendingTime_t_2057517316"); // 1
    Hdr_53_set.insert("OrigSendingTime_t_2057517316");
    Hdr_53.add_attribute("MsgEncd", "MessageEncoding_t_1127133150"); // 1
    Hdr_53_set.insert("MessageEncoding_t_1127133150");
    all_values.push_back(Hdr_53_set);
    all_compo_names.insert("Hdr_53_set");

    {
      xml_element Hop_53{"Hop"};
      multiset<string> Hop_53_set;
      Hop_53.add_attribute("ID", "HopCompID_t_1601971921"); // 2
      Hop_53_set.insert("HopCompID_t_1601971921");
      Hop_53.add_attribute("Ref", "1635662121"); // 2
      Hop_53_set.insert("1635662121");
      Hop_53.add_attribute("Snt", "HopSendingTime_t_98240102"); // 2
      Hop_53_set.insert("HopSendingTime_t_98240102");
      all_values.push_back(Hop_53_set);
      all_compo_names.insert("Hop_53_set");

      Hdr_53.add_element(Hop_53);
    }
    elt.add_element(Hdr_53);
  } // end Hdr
  { // Pty
    xml_element Pty_236{"Pty"};
    multiset<string> Pty_236_set;
    Pty_236.add_attribute("ID", "PartyID_t_2109504503"); // 1
    Pty_236_set.insert("PartyID_t_2109504503");
    Pty_236.add_attribute("Src", "G"); // 1
    Pty_236_set.insert("G");
    Pty_236.add_attribute("R", "37"); // 1
    Pty_236_set.insert("37");
    all_values.push_back(Pty_236_set);
    all_compo_names.insert("Pty_236_set");

    {
      xml_element Sub_236{"Sub"};
      multiset<string> Sub_236_set;
      Sub_236.add_attribute("ID", "PartySubID_t_639713227"); // 2
      Sub_236_set.insert("PartySubID_t_639713227");
      Sub_236.add_attribute("Typ", "7"); // 2
      Sub_236_set.insert("7");
      all_values.push_back(Sub_236_set);
      all_compo_names.insert("Sub_236_set");

      Pty_236.add_element(Sub_236);
    }
    elt.add_element(Pty_236);
  } // end Pty
  { // Pty
    xml_element Pty_237{"Pty"};
    multiset<string> Pty_237_set;
    Pty_237.add_attribute("ID", "PartyID_t_109457804"); // 1
    Pty_237_set.insert("PartyID_t_109457804");
    Pty_237.add_attribute("Src", "A"); // 1
    Pty_237_set.insert("A");
    Pty_237.add_attribute("R", "35"); // 1
    Pty_237_set.insert("35");
    all_values.push_back(Pty_237_set);
    all_compo_names.insert("Pty_237_set");

    {
      xml_element Sub_237{"Sub"};
      multiset<string> Sub_237_set;
      Sub_237.add_attribute("ID", "PartySubID_t_2138281970"); // 2
      Sub_237_set.insert("PartySubID_t_2138281970");
      Sub_237.add_attribute("Typ", "12"); // 2
      Sub_237_set.insert("12");
      all_values.push_back(Sub_237_set);
      all_compo_names.insert("Sub_237_set");

      Pty_237.add_element(Sub_237);
    }
    elt.add_element(Pty_237);
  } // end Pty
  { // Pty
    xml_element Pty_238{"Pty"};
    multiset<string> Pty_238_set;
    Pty_238.add_attribute("ID", "PartyID_t_990022261"); // 1
    Pty_238_set.insert("PartyID_t_990022261");
    Pty_238.add_attribute("Src", "3"); // 1
    Pty_238_set.insert("3");
    Pty_238.add_attribute("R", "9"); // 1
    Pty_238_set.insert("9");
    all_values.push_back(Pty_238_set);
    all_compo_names.insert("Pty_238_set");

    {
      xml_element Sub_238{"Sub"};
      multiset<string> Sub_238_set;
      Sub_238.add_attribute("ID", "PartySubID_t_416659284"); // 2
      Sub_238_set.insert("PartySubID_t_416659284");
      Sub_238.add_attribute("Typ", "19"); // 2
      Sub_238_set.insert("19");
      all_values.push_back(Sub_238_set);
      all_compo_names.insert("Sub_238_set");

      Pty_238.add_element(Sub_238);
    }
    elt.add_element(Pty_238);
  } // end Pty
  { // PreAllocMleg
    xml_element PreAllocMleg_2{"PreAllocMleg"};
    multiset<string> PreAllocMleg_2_set;
    PreAllocMleg_2.add_attribute("Acct", "AllocAccount_t_1102377874"); // 1
    PreAllocMleg_2_set.insert("AllocAccount_t_1102377874");
    PreAllocMleg_2.add_attribute("ActIDSrc", "99"); // 1
    PreAllocMleg_2_set.insert("99");
    PreAllocMleg_2.add_attribute("AllocSettlCcy", "EUR"); // 1
    PreAllocMleg_2_set.insert("EUR");
    PreAllocMleg_2.add_attribute("IndAllocID", "IndividualAllocID_t_1070728938"); // 1
    PreAllocMleg_2_set.insert("IndividualAllocID_t_1070728938");
    PreAllocMleg_2.add_attribute("Qty", "2299763.720000"); // 1
    PreAllocMleg_2_set.insert("2299763.720000");
    all_values.push_back(PreAllocMleg_2_set);
    all_compo_names.insert("PreAllocMleg_2_set");

    {
      xml_element Pty_239{"Pty"};
      multiset<string> Pty_239_set;
      Pty_239.add_attribute("ID", "Nested3PartyID_t_1370464075"); // 2
      Pty_239_set.insert("Nested3PartyID_t_1370464075");
      Pty_239.add_attribute("Src", "7"); // 2
      Pty_239_set.insert("7");
      Pty_239.add_attribute("R", "50"); // 2
      Pty_239_set.insert("50");
      all_values.push_back(Pty_239_set);
      all_compo_names.insert("Pty_239_set");

      {
        xml_element Sub_239{"Sub"};
        multiset<string> Sub_239_set;
        Sub_239.add_attribute("ID", "Nested3PartySubID_t_1280497744"); // 3
        Sub_239_set.insert("Nested3PartySubID_t_1280497744");
        Sub_239.add_attribute("Typ", "13"); // 3
        Sub_239_set.insert("13");
        all_values.push_back(Sub_239_set);
        all_compo_names.insert("Sub_239_set");

        Pty_239.add_element(Sub_239);
      }
      PreAllocMleg_2.add_element(Pty_239);
    }
    elt.add_element(PreAllocMleg_2);
  } // end PreAllocMleg
  { // DsplyInstr
    xml_element DsplyInstr_7{"DsplyInstr"};
    multiset<string> DsplyInstr_7_set;
    DsplyInstr_7.add_attribute("DisplayQty", "2581393.360000"); // 1
    DsplyInstr_7_set.insert("2581393.360000");
    DsplyInstr_7.add_attribute("SecDspQty", "7686762.170000"); // 1
    DsplyInstr_7_set.insert("7686762.170000");
    DsplyInstr_7.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_7_set.insert("2");
    DsplyInstr_7.add_attribute("DspMthd", "4"); // 1
    DsplyInstr_7_set.insert("4");
    DsplyInstr_7.add_attribute("DsplLwQty", "7306970.720000"); // 1
    DsplyInstr_7_set.insert("7306970.720000");
    DsplyInstr_7.add_attribute("DisplayHighQty", "14041981.060000"); // 1
    DsplyInstr_7_set.insert("14041981.060000");
    DsplyInstr_7.add_attribute("DspMinIncr", "11643499.840000"); // 1
    DsplyInstr_7_set.insert("11643499.840000");
    DsplyInstr_7.add_attribute("RfrshQty", "13704103.000000"); // 1
    DsplyInstr_7_set.insert("13704103.000000");
    all_values.push_back(DsplyInstr_7_set);
    all_compo_names.insert("DsplyInstr_7_set");

    elt.add_element(DsplyInstr_7);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_11{"TrdSes"};
    multiset<string> TrdSes_11_set;
    TrdSes_11.add_attribute("SesID", "1"); // 1
    TrdSes_11_set.insert("1");
    TrdSes_11.add_attribute("SesSub", "2"); // 1
    TrdSes_11_set.insert("2");
    all_values.push_back(TrdSes_11_set);
    all_compo_names.insert("TrdSes_11_set");

    elt.add_element(TrdSes_11);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_12{"TrdSes"};
    multiset<string> TrdSes_12_set;
    TrdSes_12.add_attribute("SesID", "3"); // 1
    TrdSes_12_set.insert("3");
    TrdSes_12.add_attribute("SesSub", "6"); // 1
    TrdSes_12_set.insert("6");
    all_values.push_back(TrdSes_12_set);
    all_compo_names.insert("TrdSes_12_set");

    elt.add_element(TrdSes_12);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_44{"Instrmt"};
    multiset<string> Instrmt_44_set;
    Instrmt_44.add_attribute("Sym", "Symbol_t_944927358"); // 1
    Instrmt_44_set.insert("Symbol_t_944927358");
    Instrmt_44.add_attribute("Sfx", "WI"); // 1
    Instrmt_44_set.insert("WI");
    Instrmt_44.add_attribute("ID", "SecurityID_t_2028248048"); // 1
    Instrmt_44_set.insert("SecurityID_t_2028248048");
    Instrmt_44.add_attribute("Src", "I"); // 1
    Instrmt_44_set.insert("I");
    Instrmt_44.add_attribute("Prod", "12"); // 1
    Instrmt_44_set.insert("12");
    Instrmt_44.add_attribute("ProdCmplx", "ProductComplex_t_1721652448"); // 1
    Instrmt_44_set.insert("ProductComplex_t_1721652448");
    Instrmt_44.add_attribute("SecGrp", "SecurityGroup_t_2081617948"); // 1
    Instrmt_44_set.insert("SecurityGroup_t_2081617948");
    Instrmt_44.add_attribute("CFI", "CFICode_t_1981856477"); // 1
    Instrmt_44_set.insert("CFICode_t_1981856477");
    Instrmt_44.add_attribute("SecTyp", "MPO"); // 1
    Instrmt_44_set.insert("MPO");
    Instrmt_44.add_attribute("SubTyp", "SecuritySubType_t_1118012575"); // 1
    Instrmt_44_set.insert("SecuritySubType_t_1118012575");
    Instrmt_44.add_attribute("MMY", "1193241292"); // 1
    Instrmt_44_set.insert("1193241292");
    Instrmt_44.add_attribute("MatDt", "MaturityDate_t_1249570490"); // 1
    Instrmt_44_set.insert("MaturityDate_t_1249570490");
    Instrmt_44.add_attribute("MatTm", "1347988947"); // 1
    Instrmt_44_set.insert("1347988947");
    Instrmt_44.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_416221720"); // 1
    Instrmt_44_set.insert("SettleOnOpenFlag_t_416221720");
    Instrmt_44.add_attribute("AsgnMeth", "1203894864"); // 1
    Instrmt_44_set.insert("1203894864");
    Instrmt_44.add_attribute("Status", "1"); // 1
    Instrmt_44_set.insert("1");
    Instrmt_44.add_attribute("CpnPmt", "CouponPaymentDate_t_1696719464"); // 1
    Instrmt_44_set.insert("CouponPaymentDate_t_1696719464");
    Instrmt_44.add_attribute("RestrctTyp", "FR"); // 1
    Instrmt_44_set.insert("FR");
    Instrmt_44.add_attribute("Snrty", "SB"); // 1
    Instrmt_44_set.insert("SB");
    Instrmt_44.add_attribute("NotlPctOut", "3179120.330000"); // 1
    Instrmt_44_set.insert("3179120.330000");
    Instrmt_44.add_attribute("OrigNotlPctOut", "13175663.670000"); // 1
    Instrmt_44_set.insert("13175663.670000");
    Instrmt_44.add_attribute("AttchPnt", "17181369.540000"); // 1
    Instrmt_44_set.insert("17181369.540000");
    Instrmt_44.add_attribute("DetchPnt", "10486091.050000"); // 1
    Instrmt_44_set.insert("10486091.050000");
    Instrmt_44.add_attribute("Issued", "IssueDate_t_574280826"); // 1
    Instrmt_44_set.insert("IssueDate_t_574280826");
    Instrmt_44.add_attribute("RepoCollSecTyp", "735003290"); // 1
    Instrmt_44_set.insert("735003290");
    Instrmt_44.add_attribute("RepoTrm", "271535757"); // 1
    Instrmt_44_set.insert("271535757");
    Instrmt_44.add_attribute("RepoRt", "13475443.960000"); // 1
    Instrmt_44_set.insert("13475443.960000");
    Instrmt_44.add_attribute("Fctr", "20088110.780000"); // 1
    Instrmt_44_set.insert("20088110.780000");
    Instrmt_44.add_attribute("CrdRtg", "CreditRating_t_1410608714"); // 1
    Instrmt_44_set.insert("CreditRating_t_1410608714");
    Instrmt_44.add_attribute("Rgstry", "InstrRegistry_t_820341454"); // 1
    Instrmt_44_set.insert("InstrRegistry_t_820341454");
    Instrmt_44.add_attribute("IssuCtry", "1125933540"); // 1
    Instrmt_44_set.insert("1125933540");
    Instrmt_44.add_attribute("StPrv", "StateOrProvinceOfIssue_t_208052425"); // 1
    Instrmt_44_set.insert("StateOrProvinceOfIssue_t_208052425");
    Instrmt_44.add_attribute("Lcl", "LocaleOfIssue_t_1283160773"); // 1
    Instrmt_44_set.insert("LocaleOfIssue_t_1283160773");
    Instrmt_44.add_attribute("Redeem", "RedemptionDate_t_1006697941"); // 1
    Instrmt_44_set.insert("RedemptionDate_t_1006697941");
    Instrmt_44.add_attribute("StrkPx", "13906721.000000"); // 1
    Instrmt_44_set.insert("13906721.000000");
    Instrmt_44.add_attribute("StrkCcy", "CHF"); // 1
    Instrmt_44_set.insert("CHF");
    Instrmt_44.add_attribute("StrkMult", "13248064.000000"); // 1
    Instrmt_44_set.insert("13248064.000000");
    Instrmt_44.add_attribute("StrkValu", "19970122.050000"); // 1
    Instrmt_44_set.insert("19970122.050000");
    Instrmt_44.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("StrkPxBndryMeth", "3"); // 1
    Instrmt_44_set.insert("3");
    Instrmt_44.add_attribute("StrkPxBndryPrcsn", "10427698.500000"); // 1
    Instrmt_44_set.insert("10427698.500000");
    Instrmt_44.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_44_set.insert("4");
    Instrmt_44.add_attribute("OptAt", "1643324274"); // 1
    Instrmt_44_set.insert("1643324274");
    Instrmt_44.add_attribute("Mult", "14589915.700000"); // 1
    Instrmt_44_set.insert("14589915.700000");
    Instrmt_44.add_attribute("MultTyp", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_44_set.insert("1");
    Instrmt_44.add_attribute("MinPxIncr", "10082273.860000"); // 1
    Instrmt_44_set.insert("10082273.860000");
    Instrmt_44.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1203558739"); // 1
    Instrmt_44_set.insert("MinPriceIncrementAmount_t_1203558739");
    Instrmt_44.add_attribute("UOM", "Alw"); // 1
    Instrmt_44_set.insert("Alw");
    Instrmt_44.add_attribute("UOMQty", "13261394.190000"); // 1
    Instrmt_44_set.insert("13261394.190000");
    Instrmt_44.add_attribute("PxUOM", "USD"); // 1
    Instrmt_44_set.insert("USD");
    Instrmt_44.add_attribute("PxUOMQty", "14804296.410000"); // 1
    Instrmt_44_set.insert("14804296.410000");
    Instrmt_44.add_attribute("SettlMeth", "C"); // 1
    Instrmt_44_set.insert("C");
    Instrmt_44.add_attribute("ExerStyle", "0"); // 1
    Instrmt_44_set.insert("0");
    Instrmt_44.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_44_set.insert("1");
    Instrmt_44.add_attribute("OptPayAmt", "OptPayoutAmount_t_498800634"); // 1
    Instrmt_44_set.insert("OptPayoutAmount_t_498800634");
    Instrmt_44.add_attribute("PxQteMeth", "INX"); // 1
    Instrmt_44_set.insert("INX");
    Instrmt_44.add_attribute("ValMeth", "FUT"); // 1
    Instrmt_44_set.insert("FUT");
    Instrmt_44.add_attribute("ListMeth", "0"); // 1
    Instrmt_44_set.insert("0");
    Instrmt_44.add_attribute("CapPx", "9683244.880000"); // 1
    Instrmt_44_set.insert("9683244.880000");
    Instrmt_44.add_attribute("FlrPx", "10552102.540000"); // 1
    Instrmt_44_set.insert("10552102.540000");
    Instrmt_44.add_attribute("PutCall", "1"); // 1
    Instrmt_44_set.insert("1");
    Instrmt_44.add_attribute("FlexInd", "false"); // 1
    Instrmt_44_set.insert("false");
    Instrmt_44.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_44_set.insert("false");
    Instrmt_44.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_44_set.insert("Wk");
    Instrmt_44.add_attribute("CpnRt", "1191573.420000"); // 1
    Instrmt_44_set.insert("1191573.420000");
    Instrmt_44.add_attribute("Exch", "SecurityExchange_t_495291288"); // 1
    Instrmt_44_set.insert("SecurityExchange_t_495291288");
    Instrmt_44.add_attribute("PosLmt", "537972977"); // 1
    Instrmt_44_set.insert("537972977");
    Instrmt_44.add_attribute("NTPosLmt", "2116169547"); // 1
    Instrmt_44_set.insert("2116169547");
    Instrmt_44.add_attribute("Issr", "Issuer_t_1254999581"); // 1
    Instrmt_44_set.insert("Issuer_t_1254999581");
    Instrmt_44.add_attribute("EncIssrLen", "833308304"); // 1
    Instrmt_44_set.insert("833308304");
    Instrmt_44.add_attribute("EncIssr", "EncodedIssuer_t_1011455749"); // 1
    Instrmt_44_set.insert("EncodedIssuer_t_1011455749");
    Instrmt_44.add_attribute("Desc", "SecurityDesc_t_1116794716"); // 1
    Instrmt_44_set.insert("SecurityDesc_t_1116794716");
    Instrmt_44.add_attribute("EncSecDescLen", "329148930"); // 1
    Instrmt_44_set.insert("329148930");
    Instrmt_44.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_322963671"); // 1
    Instrmt_44_set.insert("EncodedSecurityDesc_t_322963671");
    Instrmt_44.add_attribute("Pool", "Pool_t_35001067"); // 1
    Instrmt_44_set.insert("Pool_t_35001067");
    Instrmt_44.add_attribute("CSetMo", "1976629567"); // 1
    Instrmt_44_set.insert("1976629567");
    Instrmt_44.add_attribute("CPPgm", "2"); // 1
    Instrmt_44_set.insert("2");
    Instrmt_44.add_attribute("CPRegT", "CPRegType_t_1238559807"); // 1
    Instrmt_44_set.insert("CPRegType_t_1238559807");
    Instrmt_44.add_attribute("Dated", "DatedDate_t_1738922254"); // 1
    Instrmt_44_set.insert("DatedDate_t_1738922254");
    Instrmt_44.add_attribute("IntAcrl", "InterestAccrualDate_t_509846828"); // 1
    Instrmt_44_set.insert("InterestAccrualDate_t_509846828");
    all_values.push_back(Instrmt_44_set);
    all_compo_names.insert("Instrmt_44_set");

    {
      xml_element AID_47{"AID"};
      multiset<string> AID_47_set;
      AID_47.add_attribute("AltID", "SecurityAltID_t_1612201266"); // 2
      AID_47_set.insert("SecurityAltID_t_1612201266");
      AID_47.add_attribute("AltIDSrc", "1"); // 2
      AID_47_set.insert("1");
      all_values.push_back(AID_47_set);
      all_compo_names.insert("AID_47_set");

      Instrmt_44.add_element(AID_47);
    }
    {
      xml_element SecXML_47{"SecXML"};
      multiset<string> SecXML_47_set;
      SecXML_47.add_attribute("Schema", "SecurityXMLSchema_t_737111705"); // 2
      SecXML_47_set.insert("SecurityXMLSchema_t_737111705");
      all_values.push_back(SecXML_47_set);
      all_compo_names.insert("SecXML_47_set");

      Instrmt_44.add_element(SecXML_47);
    }
    {
      xml_element Evnt_47{"Evnt"};
      multiset<string> Evnt_47_set;
      Evnt_47.add_attribute("EventTyp", "4"); // 2
      Evnt_47_set.insert("4");
      Evnt_47.add_attribute("Dt", "EventDate_t_1139817531"); // 2
      Evnt_47_set.insert("EventDate_t_1139817531");
      Evnt_47.add_attribute("Tm", "EventTime_t_1235912339"); // 2
      Evnt_47_set.insert("EventTime_t_1235912339");
      Evnt_47.add_attribute("Px", "5606229.360000"); // 2
      Evnt_47_set.insert("5606229.360000");
      Evnt_47.add_attribute("Txt", "EventText_t_1069094245"); // 2
      Evnt_47_set.insert("EventText_t_1069094245");
      all_values.push_back(Evnt_47_set);
      all_compo_names.insert("Evnt_47_set");

      Instrmt_44.add_element(Evnt_47);
    }
    {
      xml_element Pty_240{"Pty"};
      multiset<string> Pty_240_set;
      Pty_240.add_attribute("ID", "InstrumentPartyID_t_997838039"); // 2
      Pty_240_set.insert("InstrumentPartyID_t_997838039");
      Pty_240.add_attribute("Src", "B"); // 2
      Pty_240_set.insert("B");
      Pty_240.add_attribute("R", "31"); // 2
      Pty_240_set.insert("31");
      all_values.push_back(Pty_240_set);
      all_compo_names.insert("Pty_240_set");

      {
        xml_element Sub_240{"Sub"};
        multiset<string> Sub_240_set;
        Sub_240.add_attribute("ID", "InstrumentPartySubID_t_967816165"); // 3
        Sub_240_set.insert("InstrumentPartySubID_t_967816165");
        Sub_240.add_attribute("Typ", "15"); // 3
        Sub_240_set.insert("15");
        all_values.push_back(Sub_240_set);
        all_compo_names.insert("Sub_240_set");

        Pty_240.add_element(Sub_240);
      }
      Instrmt_44.add_element(Pty_240);
    }
    {
      xml_element CmplxEvnt_44{"CmplxEvnt"};
      multiset<string> CmplxEvnt_44_set;
      CmplxEvnt_44.add_attribute("Typ", "6"); // 2
      CmplxEvnt_44_set.insert("6");
      CmplxEvnt_44.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_180982742"); // 2
      CmplxEvnt_44_set.insert("ComplexOptPayoutAmount_t_180982742");
      CmplxEvnt_44.add_attribute("Px", "17521063.800000"); // 2
      CmplxEvnt_44_set.insert("17521063.800000");
      CmplxEvnt_44.add_attribute("PxBndryMeth", "2"); // 2
      CmplxEvnt_44_set.insert("2");
      CmplxEvnt_44.add_attribute("PxBndryPrcsn", "7189557.200000"); // 2
      CmplxEvnt_44_set.insert("7189557.200000");
      CmplxEvnt_44.add_attribute("PxTmTyp", "2"); // 2
      CmplxEvnt_44_set.insert("2");
      CmplxEvnt_44.add_attribute("Cond", "1"); // 2
      CmplxEvnt_44_set.insert("1");
      all_values.push_back(CmplxEvnt_44_set);
      all_compo_names.insert("CmplxEvnt_44_set");

      {
        xml_element EvntDts_44{"EvntDts"};
        multiset<string> EvntDts_44_set;
        EvntDts_44.add_attribute("StartDt", "ComplexEventStartDate_t_1552264024"); // 3
        EvntDts_44_set.insert("ComplexEventStartDate_t_1552264024");
        EvntDts_44.add_attribute("EndDt", "ComplexEventEndDate_t_584764381"); // 3
        EvntDts_44_set.insert("ComplexEventEndDate_t_584764381");
        all_values.push_back(EvntDts_44_set);
        all_compo_names.insert("EvntDts_44_set");

        {
          xml_element EvntTms_44{"EvntTms"};
          multiset<string> EvntTms_44_set;
          EvntTms_44.add_attribute("StartTm", "610847336"); // 4
          EvntTms_44_set.insert("610847336");
          EvntTms_44.add_attribute("EndTm", "1881412955"); // 4
          EvntTms_44_set.insert("1881412955");
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
  { // Undly
    xml_element Undly_59{"Undly"};
    multiset<string> Undly_59_set;
    Undly_59.add_attribute("Sym", "UnderlyingSymbol_t_645848404"); // 1
    Undly_59_set.insert("UnderlyingSymbol_t_645848404");
    Undly_59.add_attribute("Sfx", "CD"); // 1
    Undly_59_set.insert("CD");
    Undly_59.add_attribute("ID", "UnderlyingSecurityID_t_91435462"); // 1
    Undly_59_set.insert("UnderlyingSecurityID_t_91435462");
    Undly_59.add_attribute("Src", "G"); // 1
    Undly_59_set.insert("G");
    Undly_59.add_attribute("Prod", "13"); // 1
    Undly_59_set.insert("13");
    Undly_59.add_attribute("CFI", "UnderlyingCFICode_t_601282290"); // 1
    Undly_59_set.insert("UnderlyingCFICode_t_601282290");
    Undly_59.add_attribute("SecTyp", "USTB"); // 1
    Undly_59_set.insert("USTB");
    Undly_59.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_226382080"); // 1
    Undly_59_set.insert("UnderlyingSecuritySubType_t_226382080");
    Undly_59.add_attribute("MMY", "1338393995"); // 1
    Undly_59_set.insert("1338393995");
    Undly_59.add_attribute("Mat", "UnderlyingMaturityDate_t_1761765732"); // 1
    Undly_59_set.insert("UnderlyingMaturityDate_t_1761765732");
    Undly_59.add_attribute("MatTm", "1366199612"); // 1
    Undly_59_set.insert("1366199612");
    Undly_59.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_426822686"); // 1
    Undly_59_set.insert("UnderlyingCouponPaymentDate_t_426822686");
    Undly_59.add_attribute("RestrctTyp", "FR"); // 1
    Undly_59_set.insert("FR");
    Undly_59.add_attribute("Snrty", "SR"); // 1
    Undly_59_set.insert("SR");
    Undly_59.add_attribute("NotlPctOut", "14246607.260000"); // 1
    Undly_59_set.insert("14246607.260000");
    Undly_59.add_attribute("OrigNotlPctOut", "17038524.450000"); // 1
    Undly_59_set.insert("17038524.450000");
    Undly_59.add_attribute("AttchPnt", "2646310.600000"); // 1
    Undly_59_set.insert("2646310.600000");
    Undly_59.add_attribute("DetchPnt", "2449932.430000"); // 1
    Undly_59_set.insert("2449932.430000");
    Undly_59.add_attribute("Issued", "UnderlyingIssueDate_t_1189317835"); // 1
    Undly_59_set.insert("UnderlyingIssueDate_t_1189317835");
    Undly_59.add_attribute("RepoCollSecTyp", "155876458"); // 1
    Undly_59_set.insert("155876458");
    Undly_59.add_attribute("RepoTrm", "425975985"); // 1
    Undly_59_set.insert("425975985");
    Undly_59.add_attribute("RepoRt", "7939405.670000"); // 1
    Undly_59_set.insert("7939405.670000");
    Undly_59.add_attribute("Fctr", "5424131.440000"); // 1
    Undly_59_set.insert("5424131.440000");
    Undly_59.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1144931705"); // 1
    Undly_59_set.insert("UnderlyingCreditRating_t_1144931705");
    Undly_59.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_367249198"); // 1
    Undly_59_set.insert("UnderlyingInstrRegistry_t_367249198");
    Undly_59.add_attribute("Ctry", "36465764"); // 1
    Undly_59_set.insert("36465764");
    Undly_59.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_549712082"); // 1
    Undly_59_set.insert("UnderlyingStateOrProvinceOfIssue_t_549712082");
    Undly_59.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_952013579"); // 1
    Undly_59_set.insert("UnderlyingLocaleOfIssue_t_952013579");
    Undly_59.add_attribute("Redeem", "UnderlyingRedemptionDate_t_647313101"); // 1
    Undly_59_set.insert("UnderlyingRedemptionDate_t_647313101");
    Undly_59.add_attribute("StrkPx", "2836413.890000"); // 1
    Undly_59_set.insert("2836413.890000");
    Undly_59.add_attribute("StrkCcy", "CHF"); // 1
    Undly_59_set.insert("CHF");
    Undly_59.add_attribute("OptA", "1994200263"); // 1
    Undly_59_set.insert("1994200263");
    Undly_59.add_attribute("Mult", "19511770.940000"); // 1
    Undly_59_set.insert("19511770.940000");
    Undly_59.add_attribute("MultTyp", "2"); // 1
    Undly_59_set.insert("2");
    Undly_59.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_59_set.insert("0");
    Undly_59.add_attribute("UOM", "USD"); // 1
    Undly_59_set.insert("USD");
    Undly_59.add_attribute("UOMQty", "2317282.490000"); // 1
    Undly_59_set.insert("2317282.490000");
    Undly_59.add_attribute("PxUOM", "Alw"); // 1
    Undly_59_set.insert("Alw");
    Undly_59.add_attribute("PxUOMQty", "17433697.320000"); // 1
    Undly_59_set.insert("17433697.320000");
    Undly_59.add_attribute("TmUnit", "D"); // 1
    Undly_59_set.insert("D");
    Undly_59.add_attribute("ExerStyle", "0"); // 1
    Undly_59_set.insert("0");
    Undly_59.add_attribute("CpnRt", "227087.700000"); // 1
    Undly_59_set.insert("227087.700000");
    Undly_59.add_attribute("Exch", "UnderlyingSecurityExchange_t_20915353"); // 1
    Undly_59_set.insert("UnderlyingSecurityExchange_t_20915353");
    Undly_59.add_attribute("Issr", "UnderlyingIssuer_t_881622349"); // 1
    Undly_59_set.insert("UnderlyingIssuer_t_881622349");
    Undly_59.add_attribute("EncUndIssrLen", "1447369496"); // 1
    Undly_59_set.insert("1447369496");
    Undly_59.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1724767798"); // 1
    Undly_59_set.insert("EncodedUnderlyingIssuer_t_1724767798");
    Undly_59.add_attribute("Desc", "UnderlyingSecurityDesc_t_1146253409"); // 1
    Undly_59_set.insert("UnderlyingSecurityDesc_t_1146253409");
    Undly_59.add_attribute("EncUndSecDescLen", "1692362739"); // 1
    Undly_59_set.insert("1692362739");
    Undly_59.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_766601985"); // 1
    Undly_59_set.insert("EncodedUnderlyingSecurityDesc_t_766601985");
    Undly_59.add_attribute("CPPgm", "UnderlyingCPProgram_t_1302129867"); // 1
    Undly_59_set.insert("UnderlyingCPProgram_t_1302129867");
    Undly_59.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_2118338725"); // 1
    Undly_59_set.insert("UnderlyingCPRegType_t_2118338725");
    Undly_59.add_attribute("AllocPct", "15605425.520000"); // 1
    Undly_59_set.insert("15605425.520000");
    Undly_59.add_attribute("Ccy", "JPY"); // 1
    Undly_59_set.insert("JPY");
    Undly_59.add_attribute("Qty", "19277917.510000"); // 1
    Undly_59_set.insert("19277917.510000");
    Undly_59.add_attribute("SettlTyp", "4"); // 1
    Undly_59_set.insert("4");
    Undly_59.add_attribute("CashAmt", "UnderlyingCashAmount_t_1665498864"); // 1
    Undly_59_set.insert("UnderlyingCashAmount_t_1665498864");
    Undly_59.add_attribute("CashTyp", "FIXED"); // 1
    Undly_59_set.insert("FIXED");
    Undly_59.add_attribute("Px", "3808382.290000"); // 1
    Undly_59_set.insert("3808382.290000");
    Undly_59.add_attribute("DirtPx", "19491402.530000"); // 1
    Undly_59_set.insert("19491402.530000");
    Undly_59.add_attribute("EndPx", "4445796.660000"); // 1
    Undly_59_set.insert("4445796.660000");
    Undly_59.add_attribute("StartVal", "UnderlyingStartValue_t_1673999734"); // 1
    Undly_59_set.insert("UnderlyingStartValue_t_1673999734");
    Undly_59.add_attribute("CurVal", "UnderlyingCurrentValue_t_1795856868"); // 1
    Undly_59_set.insert("UnderlyingCurrentValue_t_1795856868");
    Undly_59.add_attribute("EndVal", "UnderlyingEndValue_t_248273112"); // 1
    Undly_59_set.insert("UnderlyingEndValue_t_248273112");
    Undly_59.add_attribute("AdjQty", "5566021.540000"); // 1
    Undly_59_set.insert("5566021.540000");
    Undly_59.add_attribute("FxRate", "7970873.160000"); // 1
    Undly_59_set.insert("7970873.160000");
    Undly_59.add_attribute("FxRateCalc", "D"); // 1
    Undly_59_set.insert("D");
    Undly_59.add_attribute("CapValu", "UnderlyingCapValue_t_788330403"); // 1
    Undly_59_set.insert("UnderlyingCapValue_t_788330403");
    Undly_59.add_attribute("SetMeth", "UnderlyingSettlMethod_t_24699844"); // 1
    Undly_59_set.insert("UnderlyingSettlMethod_t_24699844");
    Undly_59.add_attribute("PutCall", "249134933"); // 1
    Undly_59_set.insert("249134933");
    all_values.push_back(Undly_59_set);
    all_compo_names.insert("Undly_59_set");

    {
      xml_element UndAID_59{"UndAID"};
      multiset<string> UndAID_59_set;
      UndAID_59.add_attribute("AltID", "UnderlyingSecurityAltID_t_634340736"); // 2
      UndAID_59_set.insert("UnderlyingSecurityAltID_t_634340736");
      UndAID_59.add_attribute("AltIDSrc", "3"); // 2
      UndAID_59_set.insert("3");
      all_values.push_back(UndAID_59_set);
      all_compo_names.insert("UndAID_59_set");

      Undly_59.add_element(UndAID_59);
    }
    {
      xml_element Stip_93{"Stip"};
      multiset<string> Stip_93_set;
      Stip_93.add_attribute("Typ", "MAXSUBS"); // 2
      Stip_93_set.insert("MAXSUBS");
      Stip_93.add_attribute("Val", "UnderlyingStipValue_t_655256089"); // 2
      Stip_93_set.insert("UnderlyingStipValue_t_655256089");
      all_values.push_back(Stip_93_set);
      all_compo_names.insert("Stip_93_set");

      Undly_59.add_element(Stip_93);
    }
    {
      xml_element Pty_241{"Pty"};
      multiset<string> Pty_241_set;
      Pty_241.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1500134333"); // 2
      Pty_241_set.insert("UnderlyingInstrumentPartyID_t_1500134333");
      Pty_241.add_attribute("Src", "9"); // 2
      Pty_241_set.insert("9");
      Pty_241.add_attribute("R", "25"); // 2
      Pty_241_set.insert("25");
      all_values.push_back(Pty_241_set);
      all_compo_names.insert("Pty_241_set");

      {
        xml_element Sub_241{"Sub"};
        multiset<string> Sub_241_set;
        Sub_241.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_498904094"); // 3
        Sub_241_set.insert("UnderlyingInstrumentPartySubID_t_498904094");
        Sub_241.add_attribute("Typ", "1"); // 3
        Sub_241_set.insert("1");
        all_values.push_back(Sub_241_set);
        all_compo_names.insert("Sub_241_set");

        Pty_241.add_element(Sub_241);
      }
      Undly_59.add_element(Pty_241);
    }
    elt.add_element(Undly_59);
  } // end Undly
  { // Undly
    xml_element Undly_60{"Undly"};
    multiset<string> Undly_60_set;
    Undly_60.add_attribute("Sym", "UnderlyingSymbol_t_999142225"); // 1
    Undly_60_set.insert("UnderlyingSymbol_t_999142225");
    Undly_60.add_attribute("Sfx", "WI"); // 1
    Undly_60_set.insert("WI");
    Undly_60.add_attribute("ID", "UnderlyingSecurityID_t_1234947368"); // 1
    Undly_60_set.insert("UnderlyingSecurityID_t_1234947368");
    Undly_60.add_attribute("Src", "1"); // 1
    Undly_60_set.insert("1");
    Undly_60.add_attribute("Prod", "1"); // 1
    Undly_60_set.insert("1");
    Undly_60.add_attribute("CFI", "UnderlyingCFICode_t_203250503"); // 1
    Undly_60_set.insert("UnderlyingCFICode_t_203250503");
    Undly_60.add_attribute("SecTyp", "DINP"); // 1
    Undly_60_set.insert("DINP");
    Undly_60.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1231618452"); // 1
    Undly_60_set.insert("UnderlyingSecuritySubType_t_1231618452");
    Undly_60.add_attribute("MMY", "1868749367"); // 1
    Undly_60_set.insert("1868749367");
    Undly_60.add_attribute("Mat", "UnderlyingMaturityDate_t_924830915"); // 1
    Undly_60_set.insert("UnderlyingMaturityDate_t_924830915");
    Undly_60.add_attribute("MatTm", "1612456681"); // 1
    Undly_60_set.insert("1612456681");
    Undly_60.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1670405973"); // 1
    Undly_60_set.insert("UnderlyingCouponPaymentDate_t_1670405973");
    Undly_60.add_attribute("RestrctTyp", "MM"); // 1
    Undly_60_set.insert("MM");
    Undly_60.add_attribute("Snrty", "SD"); // 1
    Undly_60_set.insert("SD");
    Undly_60.add_attribute("NotlPctOut", "13187791.930000"); // 1
    Undly_60_set.insert("13187791.930000");
    Undly_60.add_attribute("OrigNotlPctOut", "16176836.940000"); // 1
    Undly_60_set.insert("16176836.940000");
    Undly_60.add_attribute("AttchPnt", "16955749.210000"); // 1
    Undly_60_set.insert("16955749.210000");
    Undly_60.add_attribute("DetchPnt", "21158665.090000"); // 1
    Undly_60_set.insert("21158665.090000");
    Undly_60.add_attribute("Issued", "UnderlyingIssueDate_t_123448895"); // 1
    Undly_60_set.insert("UnderlyingIssueDate_t_123448895");
    Undly_60.add_attribute("RepoCollSecTyp", "336421676"); // 1
    Undly_60_set.insert("336421676");
    Undly_60.add_attribute("RepoTrm", "2140566353"); // 1
    Undly_60_set.insert("2140566353");
    Undly_60.add_attribute("RepoRt", "3725838.280000"); // 1
    Undly_60_set.insert("3725838.280000");
    Undly_60.add_attribute("Fctr", "9707624.120000"); // 1
    Undly_60_set.insert("9707624.120000");
    Undly_60.add_attribute("CrdRtg", "UnderlyingCreditRating_t_611594689"); // 1
    Undly_60_set.insert("UnderlyingCreditRating_t_611594689");
    Undly_60.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_644427532"); // 1
    Undly_60_set.insert("UnderlyingInstrRegistry_t_644427532");
    Undly_60.add_attribute("Ctry", "1626018502"); // 1
    Undly_60_set.insert("1626018502");
    Undly_60.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_2111729022"); // 1
    Undly_60_set.insert("UnderlyingStateOrProvinceOfIssue_t_2111729022");
    Undly_60.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_216157084"); // 1
    Undly_60_set.insert("UnderlyingLocaleOfIssue_t_216157084");
    Undly_60.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1858558742"); // 1
    Undly_60_set.insert("UnderlyingRedemptionDate_t_1858558742");
    Undly_60.add_attribute("StrkPx", "4631494.680000"); // 1
    Undly_60_set.insert("4631494.680000");
    Undly_60.add_attribute("StrkCcy", "EUR"); // 1
    Undly_60_set.insert("EUR");
    Undly_60.add_attribute("OptA", "116699781"); // 1
    Undly_60_set.insert("116699781");
    Undly_60.add_attribute("Mult", "5677130.960000"); // 1
    Undly_60_set.insert("5677130.960000");
    Undly_60.add_attribute("MultTyp", "0"); // 1
    Undly_60_set.insert("0");
    Undly_60.add_attribute("FlowSchedTyp", "1"); // 1
    Undly_60_set.insert("1");
    Undly_60.add_attribute("UOM", "Gal"); // 1
    Undly_60_set.insert("Gal");
    Undly_60.add_attribute("UOMQty", "13149276.820000"); // 1
    Undly_60_set.insert("13149276.820000");
    Undly_60.add_attribute("PxUOM", "tn"); // 1
    Undly_60_set.insert("tn");
    Undly_60.add_attribute("PxUOMQty", "4922293.180000"); // 1
    Undly_60_set.insert("4922293.180000");
    Undly_60.add_attribute("TmUnit", "Mo"); // 1
    Undly_60_set.insert("Mo");
    Undly_60.add_attribute("ExerStyle", "0"); // 1
    Undly_60_set.insert("0");
    Undly_60.add_attribute("CpnRt", "151516.430000"); // 1
    Undly_60_set.insert("151516.430000");
    Undly_60.add_attribute("Exch", "UnderlyingSecurityExchange_t_1461685532"); // 1
    Undly_60_set.insert("UnderlyingSecurityExchange_t_1461685532");
    Undly_60.add_attribute("Issr", "UnderlyingIssuer_t_1302873711"); // 1
    Undly_60_set.insert("UnderlyingIssuer_t_1302873711");
    Undly_60.add_attribute("EncUndIssrLen", "1333930837"); // 1
    Undly_60_set.insert("1333930837");
    Undly_60.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_931885578"); // 1
    Undly_60_set.insert("EncodedUnderlyingIssuer_t_931885578");
    Undly_60.add_attribute("Desc", "UnderlyingSecurityDesc_t_850964985"); // 1
    Undly_60_set.insert("UnderlyingSecurityDesc_t_850964985");
    Undly_60.add_attribute("EncUndSecDescLen", "1302313698"); // 1
    Undly_60_set.insert("1302313698");
    Undly_60.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1055334474"); // 1
    Undly_60_set.insert("EncodedUnderlyingSecurityDesc_t_1055334474");
    Undly_60.add_attribute("CPPgm", "UnderlyingCPProgram_t_1187386661"); // 1
    Undly_60_set.insert("UnderlyingCPProgram_t_1187386661");
    Undly_60.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1295396404"); // 1
    Undly_60_set.insert("UnderlyingCPRegType_t_1295396404");
    Undly_60.add_attribute("AllocPct", "14279183.020000"); // 1
    Undly_60_set.insert("14279183.020000");
    Undly_60.add_attribute("Ccy", "CAN"); // 1
    Undly_60_set.insert("CAN");
    Undly_60.add_attribute("Qty", "20723458.340000"); // 1
    Undly_60_set.insert("20723458.340000");
    Undly_60.add_attribute("SettlTyp", "4"); // 1
    Undly_60_set.insert("4");
    Undly_60.add_attribute("CashAmt", "UnderlyingCashAmount_t_1871236468"); // 1
    Undly_60_set.insert("UnderlyingCashAmount_t_1871236468");
    Undly_60.add_attribute("CashTyp", "FIXED"); // 1
    Undly_60_set.insert("FIXED");
    Undly_60.add_attribute("Px", "13477590.220000"); // 1
    Undly_60_set.insert("13477590.220000");
    Undly_60.add_attribute("DirtPx", "1869022.880000"); // 1
    Undly_60_set.insert("1869022.880000");
    Undly_60.add_attribute("EndPx", "16212686.460000"); // 1
    Undly_60_set.insert("16212686.460000");
    Undly_60.add_attribute("StartVal", "UnderlyingStartValue_t_2057976341"); // 1
    Undly_60_set.insert("UnderlyingStartValue_t_2057976341");
    Undly_60.add_attribute("CurVal", "UnderlyingCurrentValue_t_303602070"); // 1
    Undly_60_set.insert("UnderlyingCurrentValue_t_303602070");
    Undly_60.add_attribute("EndVal", "UnderlyingEndValue_t_41498094"); // 1
    Undly_60_set.insert("UnderlyingEndValue_t_41498094");
    Undly_60.add_attribute("AdjQty", "10329111.430000"); // 1
    Undly_60_set.insert("10329111.430000");
    Undly_60.add_attribute("FxRate", "19183951.760000"); // 1
    Undly_60_set.insert("19183951.760000");
    Undly_60.add_attribute("FxRateCalc", "D"); // 1
    Undly_60_set.insert("D");
    Undly_60.add_attribute("CapValu", "UnderlyingCapValue_t_200355177"); // 1
    Undly_60_set.insert("UnderlyingCapValue_t_200355177");
    Undly_60.add_attribute("SetMeth", "UnderlyingSettlMethod_t_469839438"); // 1
    Undly_60_set.insert("UnderlyingSettlMethod_t_469839438");
    Undly_60.add_attribute("PutCall", "1304691011"); // 1
    Undly_60_set.insert("1304691011");
    all_values.push_back(Undly_60_set);
    all_compo_names.insert("Undly_60_set");

    {
      xml_element UndAID_60{"UndAID"};
      multiset<string> UndAID_60_set;
      UndAID_60.add_attribute("AltID", "UnderlyingSecurityAltID_t_292630127"); // 2
      UndAID_60_set.insert("UnderlyingSecurityAltID_t_292630127");
      UndAID_60.add_attribute("AltIDSrc", "1"); // 2
      UndAID_60_set.insert("1");
      all_values.push_back(UndAID_60_set);
      all_compo_names.insert("UndAID_60_set");

      Undly_60.add_element(UndAID_60);
    }
    {
      xml_element Stip_94{"Stip"};
      multiset<string> Stip_94_set;
      Stip_94.add_attribute("Typ", "ISSUE"); // 2
      Stip_94_set.insert("ISSUE");
      Stip_94.add_attribute("Val", "UnderlyingStipValue_t_1754315659"); // 2
      Stip_94_set.insert("UnderlyingStipValue_t_1754315659");
      all_values.push_back(Stip_94_set);
      all_compo_names.insert("Stip_94_set");

      Undly_60.add_element(Stip_94);
    }
    {
      xml_element Pty_242{"Pty"};
      multiset<string> Pty_242_set;
      Pty_242.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1936614094"); // 2
      Pty_242_set.insert("UnderlyingInstrumentPartyID_t_1936614094");
      Pty_242.add_attribute("Src", "B"); // 2
      Pty_242_set.insert("B");
      Pty_242.add_attribute("R", "57"); // 2
      Pty_242_set.insert("57");
      all_values.push_back(Pty_242_set);
      all_compo_names.insert("Pty_242_set");

      {
        xml_element Sub_242{"Sub"};
        multiset<string> Sub_242_set;
        Sub_242.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_640095431"); // 3
        Sub_242_set.insert("UnderlyingInstrumentPartySubID_t_640095431");
        Sub_242.add_attribute("Typ", "32"); // 3
        Sub_242_set.insert("32");
        all_values.push_back(Sub_242_set);
        all_compo_names.insert("Sub_242_set");

        Pty_242.add_element(Sub_242);
      }
      Undly_60.add_element(Pty_242);
    }
    elt.add_element(Undly_60);
  } // end Undly
  { // Ord
    xml_element Ord_4{"Ord"};
    multiset<string> Ord_4_set;
    Ord_4.add_attribute("Qty", "18274820.920000"); // 1
    Ord_4_set.insert("18274820.920000");
    Ord_4.add_attribute("SwapTyp", "4"); // 1
    Ord_4_set.insert("4");
    Ord_4.add_attribute("LegAllocID", "LegAllocID_t_874486718"); // 1
    Ord_4_set.insert("LegAllocID_t_874486718");
    Ord_4.add_attribute("PosEfct", "N"); // 1
    Ord_4_set.insert("N");
    Ord_4.add_attribute("Cover", "0"); // 1
    Ord_4_set.insert("0");
    Ord_4.add_attribute("RefID", "LegRefID_t_799348905"); // 1
    Ord_4_set.insert("LegRefID_t_799348905");
    Ord_4.add_attribute("SettlTyp", "6"); // 1
    Ord_4_set.insert("6");
    Ord_4.add_attribute("SettlDt", "LegSettlDate_t_439776564"); // 1
    Ord_4_set.insert("LegSettlDate_t_439776564");
    Ord_4.add_attribute("SettlCcy", "GBP"); // 1
    Ord_4_set.insert("GBP");
    Ord_4.add_attribute("OrdQty", "6266788.520000"); // 1
    Ord_4_set.insert("6266788.520000");
    Ord_4.add_attribute("LegVolatility", "4141531.730000"); // 1
    Ord_4_set.insert("4141531.730000");
    Ord_4.add_attribute("LegDividendYield", "4381158.660000"); // 1
    Ord_4_set.insert("4381158.660000");
    Ord_4.add_attribute("LegCurrencyRatio", "9302809.220000"); // 1
    Ord_4_set.insert("9302809.220000");
    Ord_4.add_attribute("LegExecInst", "h"); // 1
    Ord_4_set.insert("h");
    all_values.push_back(Ord_4_set);
    all_compo_names.insert("Ord_4_set");

    {
      xml_element Leg_54{"Leg"};
      multiset<string> Leg_54_set;
      Leg_54.add_attribute("Sym", "LegSymbol_t_1471027009"); // 2
      Leg_54_set.insert("LegSymbol_t_1471027009");
      Leg_54.add_attribute("Sfx", "CD"); // 2
      Leg_54_set.insert("CD");
      Leg_54.add_attribute("ID", "LegSecurityID_t_1268112960"); // 2
      Leg_54_set.insert("LegSecurityID_t_1268112960");
      Leg_54.add_attribute("Src", "D"); // 2
      Leg_54_set.insert("D");
      Leg_54.add_attribute("Prod", "10"); // 2
      Leg_54_set.insert("10");
      Leg_54.add_attribute("CFI", "LegCFICode_t_425320324"); // 2
      Leg_54_set.insert("LegCFICode_t_425320324");
      Leg_54.add_attribute("SecTyp", "CPP"); // 2
      Leg_54_set.insert("CPP");
      Leg_54.add_attribute("SecSubTyp", "LegSecuritySubType_t_1804772271"); // 2
      Leg_54_set.insert("LegSecuritySubType_t_1804772271");
      Leg_54.add_attribute("MMY", "1745162979"); // 2
      Leg_54_set.insert("1745162979");
      Leg_54.add_attribute("Mat", "LegMaturityDate_t_1570844325"); // 2
      Leg_54_set.insert("LegMaturityDate_t_1570844325");
      Leg_54.add_attribute("MatTm", "1593902717"); // 2
      Leg_54_set.insert("1593902717");
      Leg_54.add_attribute("CpnPmt", "LegCouponPaymentDate_t_103969175"); // 2
      Leg_54_set.insert("LegCouponPaymentDate_t_103969175");
      Leg_54.add_attribute("Issued", "LegIssueDate_t_2109561915"); // 2
      Leg_54_set.insert("LegIssueDate_t_2109561915");
      Leg_54.add_attribute("RepoCollSecTyp", "86514500"); // 2
      Leg_54_set.insert("86514500");
      Leg_54.add_attribute("RepoTrm", "1912572717"); // 2
      Leg_54_set.insert("1912572717");
      Leg_54.add_attribute("RepoRt", "15561303.310000"); // 2
      Leg_54_set.insert("15561303.310000");
      Leg_54.add_attribute("Fctr", "19139965.930000"); // 2
      Leg_54_set.insert("19139965.930000");
      Leg_54.add_attribute("CrdRtg", "LegCreditRating_t_721605368"); // 2
      Leg_54_set.insert("LegCreditRating_t_721605368");
      Leg_54.add_attribute("Rgstry", "LegInstrRegistry_t_283133402"); // 2
      Leg_54_set.insert("LegInstrRegistry_t_283133402");
      Leg_54.add_attribute("Ctry", "1604660463"); // 2
      Leg_54_set.insert("1604660463");
      Leg_54.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1437629112"); // 2
      Leg_54_set.insert("LegStateOrProvinceOfIssue_t_1437629112");
      Leg_54.add_attribute("Lcl", "LegLocaleOfIssue_t_1082482307"); // 2
      Leg_54_set.insert("LegLocaleOfIssue_t_1082482307");
      Leg_54.add_attribute("Redeem", "LegRedemptionDate_t_784524614"); // 2
      Leg_54_set.insert("LegRedemptionDate_t_784524614");
      Leg_54.add_attribute("Strk", "18774056.760000"); // 2
      Leg_54_set.insert("18774056.760000");
      Leg_54.add_attribute("StrkCcy", "JPY"); // 2
      Leg_54_set.insert("JPY");
      Leg_54.add_attribute("OptA", "356600880"); // 2
      Leg_54_set.insert("356600880");
      Leg_54.add_attribute("Cmult", "2895200.080000"); // 2
      Leg_54_set.insert("2895200.080000");
      Leg_54.add_attribute("MultTyp", "1"); // 2
      Leg_54_set.insert("1");
      Leg_54.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_54_set.insert("3");
      Leg_54.add_attribute("UOM", "t"); // 2
      Leg_54_set.insert("t");
      Leg_54.add_attribute("UOMQty", "10738070.130000"); // 2
      Leg_54_set.insert("10738070.130000");
      Leg_54.add_attribute("PxUOM", "USD"); // 2
      Leg_54_set.insert("USD");
      Leg_54.add_attribute("PxUOMQty", "20132842.360000"); // 2
      Leg_54_set.insert("20132842.360000");
      Leg_54.add_attribute("TmUnit", "D"); // 2
      Leg_54_set.insert("D");
      Leg_54.add_attribute("ExerStyle", "0"); // 2
      Leg_54_set.insert("0");
      Leg_54.add_attribute("CpnRt", "2911209.120000"); // 2
      Leg_54_set.insert("2911209.120000");
      Leg_54.add_attribute("Exch", "LegSecurityExchange_t_414234218"); // 2
      Leg_54_set.insert("LegSecurityExchange_t_414234218");
      Leg_54.add_attribute("Issr", "LegIssuer_t_668911118"); // 2
      Leg_54_set.insert("LegIssuer_t_668911118");
      Leg_54.add_attribute("EncLegIssrLen", "2036283891"); // 2
      Leg_54_set.insert("2036283891");
      Leg_54.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1985078543"); // 2
      Leg_54_set.insert("EncodedLegIssuer_t_1985078543");
      Leg_54.add_attribute("Desc", "LegSecurityDesc_t_115330187"); // 2
      Leg_54_set.insert("LegSecurityDesc_t_115330187");
      Leg_54.add_attribute("EncLegSecDescLen", "2140253066"); // 2
      Leg_54_set.insert("2140253066");
      Leg_54.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1947156811"); // 2
      Leg_54_set.insert("EncodedLegSecurityDesc_t_1947156811");
      Leg_54.add_attribute("RatioQty", "2018446.880000"); // 2
      Leg_54_set.insert("2018446.880000");
      Leg_54.add_attribute("Side", "8"); // 2
      Leg_54_set.insert("8");
      Leg_54.add_attribute("Ccy", "CHF"); // 2
      Leg_54_set.insert("CHF");
      Leg_54.add_attribute("Pool", "LegPool_t_479463855"); // 2
      Leg_54_set.insert("LegPool_t_479463855");
      Leg_54.add_attribute("Dated", "LegDatedDate_t_1638936896"); // 2
      Leg_54_set.insert("LegDatedDate_t_1638936896");
      Leg_54.add_attribute("CSetMo", "1573018096"); // 2
      Leg_54_set.insert("1573018096");
      Leg_54.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1917092967"); // 2
      Leg_54_set.insert("LegInterestAccrualDate_t_1917092967");
      Leg_54.add_attribute("PutCall", "573935555"); // 2
      Leg_54_set.insert("573935555");
      Leg_54.add_attribute("LegOptionRatio", "2100590.620000"); // 2
      Leg_54_set.insert("2100590.620000");
      Leg_54.add_attribute("Px", "16470149.950000"); // 2
      Leg_54_set.insert("16470149.950000");
      all_values.push_back(Leg_54_set);
      all_compo_names.insert("Leg_54_set");

      {
        xml_element LegAID_54{"LegAID"};
        multiset<string> LegAID_54_set;
        LegAID_54.add_attribute("SecAltID", "LegSecurityAltID_t_449302390"); // 3
        LegAID_54_set.insert("LegSecurityAltID_t_449302390");
        LegAID_54.add_attribute("SecAltIDSrc", "A"); // 3
        LegAID_54_set.insert("A");
        all_values.push_back(LegAID_54_set);
        all_compo_names.insert("LegAID_54_set");

        Leg_54.add_element(LegAID_54);
      }
      Ord_4.add_element(Leg_54);
    }
    {
      xml_element Stip_95{"Stip"};
      multiset<string> Stip_95_set;
      Stip_95.add_attribute("StipTyp", "PRICE"); // 2
      Stip_95_set.insert("PRICE");
      Stip_95.add_attribute("StipVal", "LegStipulationValue_t_738822398"); // 2
      Stip_95_set.insert("LegStipulationValue_t_738822398");
      all_values.push_back(Stip_95_set);
      all_compo_names.insert("Stip_95_set");

      Ord_4.add_element(Stip_95);
    }
    {
      xml_element PreAll_9{"PreAll"};
      multiset<string> PreAll_9_set;
      PreAll_9.add_attribute("AllocAcct", "LegAllocAccount_t_1124986853"); // 2
      PreAll_9_set.insert("LegAllocAccount_t_1124986853");
      PreAll_9.add_attribute("IndAllocID", "LegIndividualAllocID_t_1143014031"); // 2
      PreAll_9_set.insert("LegIndividualAllocID_t_1143014031");
      PreAll_9.add_attribute("AllocQty", "14839936.730000"); // 2
      PreAll_9_set.insert("14839936.730000");
      PreAll_9.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_51310219"); // 2
      PreAll_9_set.insert("LegAllocAcctIDSource_t_51310219");
      PreAll_9.add_attribute("AllocSettlCcy", "EUR"); // 2
      PreAll_9_set.insert("EUR");
      all_values.push_back(PreAll_9_set);
      all_compo_names.insert("PreAll_9_set");

      {
        xml_element Pty_243{"Pty"};
        multiset<string> Pty_243_set;
        Pty_243.add_attribute("ID", "Nested2PartyID_t_649015771"); // 3
        Pty_243_set.insert("Nested2PartyID_t_649015771");
        Pty_243.add_attribute("Src", "E"); // 3
        Pty_243_set.insert("E");
        Pty_243.add_attribute("R", "60"); // 3
        Pty_243_set.insert("60");
        all_values.push_back(Pty_243_set);
        all_compo_names.insert("Pty_243_set");

        {
          xml_element Sub_243{"Sub"};
          multiset<string> Sub_243_set;
          Sub_243.add_attribute("ID", "Nested2PartySubID_t_1063249989"); // 4
          Sub_243_set.insert("Nested2PartySubID_t_1063249989");
          Sub_243.add_attribute("Typ", "10"); // 4
          Sub_243_set.insert("10");
          all_values.push_back(Sub_243_set);
          all_compo_names.insert("Sub_243_set");

          Pty_243.add_element(Sub_243);
        }
        PreAll_9.add_element(Pty_243);
      }
      Ord_4.add_element(PreAll_9);
    }
    {
      xml_element Pty_244{"Pty"};
      multiset<string> Pty_244_set;
      Pty_244.add_attribute("ID", "NestedPartyID_t_1529715416"); // 2
      Pty_244_set.insert("NestedPartyID_t_1529715416");
      Pty_244.add_attribute("Src", "1"); // 2
      Pty_244_set.insert("1");
      Pty_244.add_attribute("R", "9"); // 2
      Pty_244_set.insert("9");
      all_values.push_back(Pty_244_set);
      all_compo_names.insert("Pty_244_set");

      {
        xml_element Sub_244{"Sub"};
        multiset<string> Sub_244_set;
        Sub_244.add_attribute("ID", "NestedPartySubID_t_1522484834"); // 3
        Sub_244_set.insert("NestedPartySubID_t_1522484834");
        Sub_244.add_attribute("Typ", "4"); // 3
        Sub_244_set.insert("4");
        all_values.push_back(Sub_244_set);
        all_compo_names.insert("Sub_244_set");

        Pty_244.add_element(Sub_244);
      }
      Ord_4.add_element(Pty_244);
    }
    elt.add_element(Ord_4);
  } // end Ord
  { // OrdQty
    xml_element OrdQty_14{"OrdQty"};
    multiset<string> OrdQty_14_set;
    OrdQty_14.add_attribute("Qty", "8338294.760000"); // 1
    OrdQty_14_set.insert("8338294.760000");
    OrdQty_14.add_attribute("Cash", "12803433.220000"); // 1
    OrdQty_14_set.insert("12803433.220000");
    OrdQty_14.add_attribute("Pct", "20563215.420000"); // 1
    OrdQty_14_set.insert("20563215.420000");
    OrdQty_14.add_attribute("RndDir", "0"); // 1
    OrdQty_14_set.insert("0");
    OrdQty_14.add_attribute("RndMod", "17598071.770000"); // 1
    OrdQty_14_set.insert("17598071.770000");
    all_values.push_back(OrdQty_14_set);
    all_compo_names.insert("OrdQty_14_set");

    elt.add_element(OrdQty_14);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_7{"TrgrInstr"};
    multiset<string> TrgrInstr_7_set;
    TrgrInstr_7.add_attribute("TrgrTyp", "3"); // 1
    TrgrInstr_7_set.insert("3");
    TrgrInstr_7.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_7_set.insert("1");
    TrgrInstr_7.add_attribute("TrgrPx", "15294164.970000"); // 1
    TrgrInstr_7_set.insert("15294164.970000");
    TrgrInstr_7.add_attribute("TrgrSym", "TriggerSymbol_t_2121710346"); // 1
    TrgrInstr_7_set.insert("TriggerSymbol_t_2121710346");
    TrgrInstr_7.add_attribute("TrgrSecID", "TriggerSecurityID_t_437780620"); // 1
    TrgrInstr_7_set.insert("TriggerSecurityID_t_437780620");
    TrgrInstr_7.add_attribute("TrgrSecIDSrc", "D"); // 1
    TrgrInstr_7_set.insert("D");
    TrgrInstr_7.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_423529088"); // 1
    TrgrInstr_7_set.insert("TriggerSecurityDesc_t_423529088");
    TrgrInstr_7.add_attribute("TrgrPxTyp", "2"); // 1
    TrgrInstr_7_set.insert("2");
    TrgrInstr_7.add_attribute("TrgrPxTypScp", "0"); // 1
    TrgrInstr_7_set.insert("0");
    TrgrInstr_7.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_7_set.insert("U");
    TrgrInstr_7.add_attribute("TrgrNewPx", "9374906.750000"); // 1
    TrgrInstr_7_set.insert("9374906.750000");
    TrgrInstr_7.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_7_set.insert("2");
    TrgrInstr_7.add_attribute("TrgrNewQty", "4988615.110000"); // 1
    TrgrInstr_7_set.insert("4988615.110000");
    TrgrInstr_7.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_988800894"); // 1
    TrgrInstr_7_set.insert("TriggerTradingSessionID_t_988800894");
    TrgrInstr_7.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_864215092"); // 1
    TrgrInstr_7_set.insert("TriggerTradingSessionSubID_t_864215092");
    all_values.push_back(TrgrInstr_7_set);
    all_compo_names.insert("TrgrInstr_7_set");

    elt.add_element(TrgrInstr_7);
  } // end TrgrInstr
  { // Comm
    xml_element Comm_20{"Comm"};
    multiset<string> Comm_20_set;
    Comm_20.add_attribute("Comm", "Commission_t_1848655773"); // 1
    Comm_20_set.insert("Commission_t_1848655773");
    Comm_20.add_attribute("CommTyp", "2"); // 1
    Comm_20_set.insert("2");
    Comm_20.add_attribute("Ccy", "GBP"); // 1
    Comm_20_set.insert("GBP");
    Comm_20.add_attribute("FundRenewWaiv", "N"); // 1
    Comm_20_set.insert("N");
    all_values.push_back(Comm_20_set);
    all_compo_names.insert("Comm_20_set");

    elt.add_element(Comm_20);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_7{"PegInstr"};
    multiset<string> PegInstr_7_set;
    PegInstr_7.add_attribute("OfstVal", "12286131.760000"); // 1
    PegInstr_7_set.insert("12286131.760000");
    PegInstr_7.add_attribute("PegPxTyp", "4"); // 1
    PegInstr_7_set.insert("4");
    PegInstr_7.add_attribute("MoveTyp", "0"); // 1
    PegInstr_7_set.insert("0");
    PegInstr_7.add_attribute("OfstTyp", "0"); // 1
    PegInstr_7_set.insert("0");
    PegInstr_7.add_attribute("LmtTyp", "0"); // 1
    PegInstr_7_set.insert("0");
    PegInstr_7.add_attribute("RndDir", "1"); // 1
    PegInstr_7_set.insert("1");
    PegInstr_7.add_attribute("Scope", "2"); // 1
    PegInstr_7_set.insert("2");
    PegInstr_7.add_attribute("PegSecurityIDSource", "G"); // 1
    PegInstr_7_set.insert("G");
    PegInstr_7.add_attribute("PegSecID", "PegSecurityID_t_2063783832"); // 1
    PegInstr_7_set.insert("PegSecurityID_t_2063783832");
    PegInstr_7.add_attribute("PgSymbl", "PegSymbol_t_1349130902"); // 1
    PegInstr_7_set.insert("PegSymbol_t_1349130902");
    PegInstr_7.add_attribute("PegSecDesc", "PegSecurityDesc_t_991987105"); // 1
    PegInstr_7_set.insert("PegSecurityDesc_t_991987105");
    all_values.push_back(PegInstr_7_set);
    all_compo_names.insert("PegInstr_7_set");

    elt.add_element(PegInstr_7);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_7{"DiscInstr"};
    multiset<string> DiscInstr_7_set;
    DiscInstr_7.add_attribute("DsctnInst", "6"); // 1
    DiscInstr_7_set.insert("6");
    DiscInstr_7.add_attribute("OfstValu", "15768524.600000"); // 1
    DiscInstr_7_set.insert("15768524.600000");
    DiscInstr_7.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_7_set.insert("0");
    DiscInstr_7.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_7_set.insert("0");
    DiscInstr_7.add_attribute("LimitTyp", "1"); // 1
    DiscInstr_7_set.insert("1");
    DiscInstr_7.add_attribute("RndDir", "1"); // 1
    DiscInstr_7_set.insert("1");
    DiscInstr_7.add_attribute("Scope", "1"); // 1
    DiscInstr_7_set.insert("1");
    all_values.push_back(DiscInstr_7_set);
    all_compo_names.insert("DiscInstr_7_set");

    elt.add_element(DiscInstr_7);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_12{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_12_set;
    StrtPrmGrp_12.add_attribute("StrtPrmNme", "StrategyParameterName_t_140464223"); // 1
    StrtPrmGrp_12_set.insert("StrategyParameterName_t_140464223");
    StrtPrmGrp_12.add_attribute("StrtPrmTyp", "5"); // 1
    StrtPrmGrp_12_set.insert("5");
    StrtPrmGrp_12.add_attribute("StrtPrmVal", "StrategyParameterValue_t_617143929"); // 1
    StrtPrmGrp_12_set.insert("StrategyParameterValue_t_617143929");
    all_values.push_back(StrtPrmGrp_12_set);
    all_compo_names.insert("StrtPrmGrp_12_set");

    elt.add_element(StrtPrmGrp_12);
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
