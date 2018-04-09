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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"MlegOrdCxlRplc" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> MultilegOrderCancelReplace_message_t_0;
  elt.add_attribute("OrdID", "OrderID_t_1068953538"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrderID_t_1068953538");
  elt.add_attribute("OrigClOrdID", "OrigClOrdID_t_315944180"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrigClOrdID_t_315944180");
  elt.add_attribute("ClOrdID", "ClOrdID_t_1848877227"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ClOrdID_t_1848877227");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_769319791"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("SecondaryClOrdID_t_769319791");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_2082685619"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ClOrdLinkID_t_2082685619");
  elt.add_attribute("OrigOrdModTm", "OrigOrdModTime_t_243433710"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("OrigOrdModTime_t_243433710");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_2017661673"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TradeOriginationDate_t_2017661673");
  elt.add_attribute("TrdDt", "TradeDate_t_832751674"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TradeDate_t_832751674");
  elt.add_attribute("Acct", "Account_t_1427462622"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Account_t_1427462622");
  elt.add_attribute("AcctIDSrc", "99"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("99");
  elt.add_attribute("AcctTyp", "7"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("7");
  elt.add_attribute("DayBkngInst", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("BkngUnit", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("PreallocMeth", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_718764555"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("AllocID_t_718764555");
  elt.add_attribute("SettlTyp", "6"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("6");
  elt.add_attribute("SettlDt", "SettlDate_t_180908389"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("SettlDate_t_180908389");
  elt.add_attribute("CshMgn", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("ClrFeeInd", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("HandlInst", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("ExecInst", "W"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("W");
  elt.add_attribute("MinQty", "2115672.570000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2115672.570000");
  elt.add_attribute("MtchInc", "15142320.640000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("15142320.640000");
  elt.add_attribute("MxPxLvls", "844292194"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("844292194");
  elt.add_attribute("MaxFloor", "10006767.590000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("10006767.590000");
  elt.add_attribute("ExDest", "ExDestination_t_254428788"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExDestination_t_254428788");
  elt.add_attribute("ExDestIDSrc", "D"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("D");
  elt.add_attribute("ProcCode", "5"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("5");
  elt.add_attribute("Side", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("PrevClsPx", "301322.750000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("301322.750000");
  elt.add_attribute("SwapPnts", "3816711.660000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3816711.660000");
  elt.add_attribute("LocReqd", "N"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_346076455"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TransactTime_t_346076455");
  elt.add_attribute("QtyTyp", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("OrdTyp", "K"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("K");
  elt.add_attribute("MlegModel", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("MlegPxMeth", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("PxTyp", "16"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("16");
  elt.add_attribute("Px", "11140301.010000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("11140301.010000");
  elt.add_attribute("PxPrtScp", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("StopPx", "17932447.520000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("17932447.520000");
  elt.add_attribute("Ccy", "JPY"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("JPY");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1765126560"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ComplianceID_t_1765126560");
  elt.add_attribute("SolFlag", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("IOIID", "IOIID_t_695110379"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("IOIID_t_695110379");
  elt.add_attribute("QID", "QuoteID_t_993850619"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("QuoteID_t_993850619");
  elt.add_attribute("TmInForce", "9"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("9");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_588671384"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EffectiveTime_t_588671384");
  elt.add_attribute("ExpireDt", "ExpireDate_t_361808775"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExpireDate_t_361808775");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1069314825"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("ExpireTime_t_1069314825");
  elt.add_attribute("GTBkngInst", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("Cpcty", "A"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("A");
  elt.add_attribute("Rstctions", "C"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("C");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "4"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("4");
  elt.add_attribute("ForexReq", "Y"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Y");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("CHF");
  elt.add_attribute("BkngTyp", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_910393669"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Text_t_910393669");
  elt.add_attribute("EncTxtLen", "26772517"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("26772517");
  elt.add_attribute("EncTxt", "EncodedText_t_142142243"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("EncodedText_t_142142243");
  elt.add_attribute("PosEfct", "O"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("O");
  elt.add_attribute("Covered", "0"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "11717639.100000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("11717639.100000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_436335717"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("TargetStrategyParameters_t_436335717");
  elt.add_attribute("RFR", "20715636.030000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("20715636.030000");
  elt.add_attribute("ParticipationRt", "5042950.040000"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("5042950.040000");
  elt.add_attribute("CxllationRights", "O"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("O");
  elt.add_attribute("MnyLaunderingStat", "3"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("3");
  elt.add_attribute("RegistID", "RegistID_t_1817477602"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("RegistID_t_1817477602");
  elt.add_attribute("Designation", "Designation_t_19158971"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("Designation_t_19158971");
  elt.add_attribute("MLEGRptTypReq", "1"); // 0
  MultilegOrderCancelReplace_message_t_0.insert("1");
  all_values.push_back(MultilegOrderCancelReplace_message_t_0);
  all_compo_names.insert("MultilegOrderCancelReplace_message_t");

  { // Hdr
    xml_element Hdr_48{"Hdr"};
    multiset<string> Hdr_48_set;
    Hdr_48.add_attribute("SeqNum", "800330364"); // 1
    Hdr_48_set.insert("800330364");
    Hdr_48.add_attribute("SID", "SenderCompID_t_714269350"); // 1
    Hdr_48_set.insert("SenderCompID_t_714269350");
    Hdr_48.add_attribute("TID", "TargetCompID_t_181334590"); // 1
    Hdr_48_set.insert("TargetCompID_t_181334590");
    Hdr_48.add_attribute("OBID", "OnBehalfOfCompID_t_2111575163"); // 1
    Hdr_48_set.insert("OnBehalfOfCompID_t_2111575163");
    Hdr_48.add_attribute("D2ID", "DeliverToCompID_t_1302940735"); // 1
    Hdr_48_set.insert("DeliverToCompID_t_1302940735");
    Hdr_48.add_attribute("SSub", "SenderSubID_t_543143365"); // 1
    Hdr_48_set.insert("SenderSubID_t_543143365");
    Hdr_48.add_attribute("SLoc", "SenderLocationID_t_1033406340"); // 1
    Hdr_48_set.insert("SenderLocationID_t_1033406340");
    Hdr_48.add_attribute("TSub", "TargetSubID_t_407676987"); // 1
    Hdr_48_set.insert("TargetSubID_t_407676987");
    Hdr_48.add_attribute("TLoc", "TargetLocationID_t_1116519398"); // 1
    Hdr_48_set.insert("TargetLocationID_t_1116519398");
    Hdr_48.add_attribute("OBSub", "OnBehalfOfSubID_t_1469469581"); // 1
    Hdr_48_set.insert("OnBehalfOfSubID_t_1469469581");
    Hdr_48.add_attribute("OBLoc", "OnBehalfOfLocationID_t_356705434"); // 1
    Hdr_48_set.insert("OnBehalfOfLocationID_t_356705434");
    Hdr_48.add_attribute("D2Sub", "DeliverToSubID_t_543088541"); // 1
    Hdr_48_set.insert("DeliverToSubID_t_543088541");
    Hdr_48.add_attribute("D2Loc", "DeliverToLocationID_t_12477963"); // 1
    Hdr_48_set.insert("DeliverToLocationID_t_12477963");
    Hdr_48.add_attribute("PosDup", "Y"); // 1
    Hdr_48_set.insert("Y");
    Hdr_48.add_attribute("PosRsnd", "N"); // 1
    Hdr_48_set.insert("N");
    Hdr_48.add_attribute("Snt", "SendingTime_t_2041801978"); // 1
    Hdr_48_set.insert("SendingTime_t_2041801978");
    Hdr_48.add_attribute("OrigSnt", "OrigSendingTime_t_2147360496"); // 1
    Hdr_48_set.insert("OrigSendingTime_t_2147360496");
    Hdr_48.add_attribute("MsgEncd", "MessageEncoding_t_214962409"); // 1
    Hdr_48_set.insert("MessageEncoding_t_214962409");
    all_values.push_back(Hdr_48_set);
    all_compo_names.insert("Hdr_48_set");

    {
      xml_element Hop_48{"Hop"};
      multiset<string> Hop_48_set;
      Hop_48.add_attribute("ID", "HopCompID_t_36460573"); // 2
      Hop_48_set.insert("HopCompID_t_36460573");
      Hop_48.add_attribute("Ref", "1256346973"); // 2
      Hop_48_set.insert("1256346973");
      Hop_48.add_attribute("Snt", "HopSendingTime_t_324799671"); // 2
      Hop_48_set.insert("HopSendingTime_t_324799671");
      all_values.push_back(Hop_48_set);
      all_compo_names.insert("Hop_48_set");

      Hdr_48.add_element(Hop_48);
    }
    elt.add_element(Hdr_48);
  } // end Hdr
  { // Pty
    xml_element Pty_191{"Pty"};
    multiset<string> Pty_191_set;
    Pty_191.add_attribute("ID", "PartyID_t_646611876"); // 1
    Pty_191_set.insert("PartyID_t_646611876");
    Pty_191.add_attribute("Src", "7"); // 1
    Pty_191_set.insert("7");
    Pty_191.add_attribute("R", "64"); // 1
    Pty_191_set.insert("64");
    all_values.push_back(Pty_191_set);
    all_compo_names.insert("Pty_191_set");

    {
      xml_element Sub_191{"Sub"};
      multiset<string> Sub_191_set;
      Sub_191.add_attribute("ID", "PartySubID_t_1150906881"); // 2
      Sub_191_set.insert("PartySubID_t_1150906881");
      Sub_191.add_attribute("Typ", "28"); // 2
      Sub_191_set.insert("28");
      all_values.push_back(Sub_191_set);
      all_compo_names.insert("Sub_191_set");

      Pty_191.add_element(Sub_191);
    }
    elt.add_element(Pty_191);
  } // end Pty
  { // Pty
    xml_element Pty_192{"Pty"};
    multiset<string> Pty_192_set;
    Pty_192.add_attribute("ID", "PartyID_t_702145497"); // 1
    Pty_192_set.insert("PartyID_t_702145497");
    Pty_192.add_attribute("Src", "I"); // 1
    Pty_192_set.insert("I");
    Pty_192.add_attribute("R", "76"); // 1
    Pty_192_set.insert("76");
    all_values.push_back(Pty_192_set);
    all_compo_names.insert("Pty_192_set");

    {
      xml_element Sub_192{"Sub"};
      multiset<string> Sub_192_set;
      Sub_192.add_attribute("ID", "PartySubID_t_2037113117"); // 2
      Sub_192_set.insert("PartySubID_t_2037113117");
      Sub_192.add_attribute("Typ", "14"); // 2
      Sub_192_set.insert("14");
      all_values.push_back(Sub_192_set);
      all_compo_names.insert("Sub_192_set");

      Pty_192.add_element(Sub_192);
    }
    elt.add_element(Pty_192);
  } // end Pty
  { // PreAllocMleg
    xml_element PreAllocMleg_0{"PreAllocMleg"};
    multiset<string> PreAllocMleg_0_set;
    PreAllocMleg_0.add_attribute("Acct", "AllocAccount_t_70964059"); // 1
    PreAllocMleg_0_set.insert("AllocAccount_t_70964059");
    PreAllocMleg_0.add_attribute("ActIDSrc", "3"); // 1
    PreAllocMleg_0_set.insert("3");
    PreAllocMleg_0.add_attribute("AllocSettlCcy", "CHF"); // 1
    PreAllocMleg_0_set.insert("CHF");
    PreAllocMleg_0.add_attribute("IndAllocID", "IndividualAllocID_t_471245406"); // 1
    PreAllocMleg_0_set.insert("IndividualAllocID_t_471245406");
    PreAllocMleg_0.add_attribute("Qty", "11005109.310000"); // 1
    PreAllocMleg_0_set.insert("11005109.310000");
    all_values.push_back(PreAllocMleg_0_set);
    all_compo_names.insert("PreAllocMleg_0_set");

    {
      xml_element Pty_193{"Pty"};
      multiset<string> Pty_193_set;
      Pty_193.add_attribute("ID", "Nested3PartyID_t_1730626823"); // 2
      Pty_193_set.insert("Nested3PartyID_t_1730626823");
      Pty_193.add_attribute("Src", "7"); // 2
      Pty_193_set.insert("7");
      Pty_193.add_attribute("R", "75"); // 2
      Pty_193_set.insert("75");
      all_values.push_back(Pty_193_set);
      all_compo_names.insert("Pty_193_set");

      {
        xml_element Sub_193{"Sub"};
        multiset<string> Sub_193_set;
        Sub_193.add_attribute("ID", "Nested3PartySubID_t_126231716"); // 3
        Sub_193_set.insert("Nested3PartySubID_t_126231716");
        Sub_193.add_attribute("Typ", "15"); // 3
        Sub_193_set.insert("15");
        all_values.push_back(Sub_193_set);
        all_compo_names.insert("Sub_193_set");

        Pty_193.add_element(Sub_193);
      }
      PreAllocMleg_0.add_element(Pty_193);
    }
    elt.add_element(PreAllocMleg_0);
  } // end PreAllocMleg
  { // DsplyInstr
    xml_element DsplyInstr_2{"DsplyInstr"};
    multiset<string> DsplyInstr_2_set;
    DsplyInstr_2.add_attribute("DisplayQty", "5466995.440000"); // 1
    DsplyInstr_2_set.insert("5466995.440000");
    DsplyInstr_2.add_attribute("SecDspQty", "3144216.090000"); // 1
    DsplyInstr_2_set.insert("3144216.090000");
    DsplyInstr_2.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_2_set.insert("2");
    DsplyInstr_2.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_2_set.insert("2");
    DsplyInstr_2.add_attribute("DsplLwQty", "5293840.180000"); // 1
    DsplyInstr_2_set.insert("5293840.180000");
    DsplyInstr_2.add_attribute("DisplayHighQty", "18839718.540000"); // 1
    DsplyInstr_2_set.insert("18839718.540000");
    DsplyInstr_2.add_attribute("DspMinIncr", "18029233.660000"); // 1
    DsplyInstr_2_set.insert("18029233.660000");
    DsplyInstr_2.add_attribute("RfrshQty", "8541836.900000"); // 1
    DsplyInstr_2_set.insert("8541836.900000");
    all_values.push_back(DsplyInstr_2_set);
    all_compo_names.insert("DsplyInstr_2_set");

    elt.add_element(DsplyInstr_2);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_2{"TrdSes"};
    multiset<string> TrdSes_2_set;
    TrdSes_2.add_attribute("SesID", "3"); // 1
    TrdSes_2_set.insert("3");
    TrdSes_2.add_attribute("SesSub", "3"); // 1
    TrdSes_2_set.insert("3");
    all_values.push_back(TrdSes_2_set);
    all_compo_names.insert("TrdSes_2_set");

    elt.add_element(TrdSes_2);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_3{"TrdSes"};
    multiset<string> TrdSes_3_set;
    TrdSes_3.add_attribute("SesID", "3"); // 1
    TrdSes_3_set.insert("3");
    TrdSes_3.add_attribute("SesSub", "4"); // 1
    TrdSes_3_set.insert("4");
    all_values.push_back(TrdSes_3_set);
    all_compo_names.insert("TrdSes_3_set");

    elt.add_element(TrdSes_3);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_4{"TrdSes"};
    multiset<string> TrdSes_4_set;
    TrdSes_4.add_attribute("SesID", "4"); // 1
    TrdSes_4_set.insert("4");
    TrdSes_4.add_attribute("SesSub", "7"); // 1
    TrdSes_4_set.insert("7");
    all_values.push_back(TrdSes_4_set);
    all_compo_names.insert("TrdSes_4_set");

    elt.add_element(TrdSes_4);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_37{"Instrmt"};
    multiset<string> Instrmt_37_set;
    Instrmt_37.add_attribute("Sym", "Symbol_t_126375663"); // 1
    Instrmt_37_set.insert("Symbol_t_126375663");
    Instrmt_37.add_attribute("Sfx", "WI"); // 1
    Instrmt_37_set.insert("WI");
    Instrmt_37.add_attribute("ID", "SecurityID_t_521308446"); // 1
    Instrmt_37_set.insert("SecurityID_t_521308446");
    Instrmt_37.add_attribute("Src", "D"); // 1
    Instrmt_37_set.insert("D");
    Instrmt_37.add_attribute("Prod", "12"); // 1
    Instrmt_37_set.insert("12");
    Instrmt_37.add_attribute("ProdCmplx", "ProductComplex_t_592272506"); // 1
    Instrmt_37_set.insert("ProductComplex_t_592272506");
    Instrmt_37.add_attribute("SecGrp", "SecurityGroup_t_1185445929"); // 1
    Instrmt_37_set.insert("SecurityGroup_t_1185445929");
    Instrmt_37.add_attribute("CFI", "CFICode_t_1177618623"); // 1
    Instrmt_37_set.insert("CFICode_t_1177618623");
    Instrmt_37.add_attribute("SecTyp", "USTB"); // 1
    Instrmt_37_set.insert("USTB");
    Instrmt_37.add_attribute("SubTyp", "SecuritySubType_t_1656691335"); // 1
    Instrmt_37_set.insert("SecuritySubType_t_1656691335");
    Instrmt_37.add_attribute("MMY", "130645906"); // 1
    Instrmt_37_set.insert("130645906");
    Instrmt_37.add_attribute("MatDt", "MaturityDate_t_789523106"); // 1
    Instrmt_37_set.insert("MaturityDate_t_789523106");
    Instrmt_37.add_attribute("MatTm", "1449922675"); // 1
    Instrmt_37_set.insert("1449922675");
    Instrmt_37.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1587862271"); // 1
    Instrmt_37_set.insert("SettleOnOpenFlag_t_1587862271");
    Instrmt_37.add_attribute("AsgnMeth", "915754822"); // 1
    Instrmt_37_set.insert("915754822");
    Instrmt_37.add_attribute("Status", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("CpnPmt", "CouponPaymentDate_t_2134561816"); // 1
    Instrmt_37_set.insert("CouponPaymentDate_t_2134561816");
    Instrmt_37.add_attribute("RestrctTyp", "XR"); // 1
    Instrmt_37_set.insert("XR");
    Instrmt_37.add_attribute("Snrty", "SB"); // 1
    Instrmt_37_set.insert("SB");
    Instrmt_37.add_attribute("NotlPctOut", "5336545.610000"); // 1
    Instrmt_37_set.insert("5336545.610000");
    Instrmt_37.add_attribute("OrigNotlPctOut", "17595604.500000"); // 1
    Instrmt_37_set.insert("17595604.500000");
    Instrmt_37.add_attribute("AttchPnt", "6921478.170000"); // 1
    Instrmt_37_set.insert("6921478.170000");
    Instrmt_37.add_attribute("DetchPnt", "1890942.790000"); // 1
    Instrmt_37_set.insert("1890942.790000");
    Instrmt_37.add_attribute("Issued", "IssueDate_t_466260492"); // 1
    Instrmt_37_set.insert("IssueDate_t_466260492");
    Instrmt_37.add_attribute("RepoCollSecTyp", "1636860507"); // 1
    Instrmt_37_set.insert("1636860507");
    Instrmt_37.add_attribute("RepoTrm", "491145873"); // 1
    Instrmt_37_set.insert("491145873");
    Instrmt_37.add_attribute("RepoRt", "20815795.700000"); // 1
    Instrmt_37_set.insert("20815795.700000");
    Instrmt_37.add_attribute("Fctr", "15663939.870000"); // 1
    Instrmt_37_set.insert("15663939.870000");
    Instrmt_37.add_attribute("CrdRtg", "CreditRating_t_1944104349"); // 1
    Instrmt_37_set.insert("CreditRating_t_1944104349");
    Instrmt_37.add_attribute("Rgstry", "InstrRegistry_t_205879888"); // 1
    Instrmt_37_set.insert("InstrRegistry_t_205879888");
    Instrmt_37.add_attribute("IssuCtry", "50589316"); // 1
    Instrmt_37_set.insert("50589316");
    Instrmt_37.add_attribute("StPrv", "StateOrProvinceOfIssue_t_2070480012"); // 1
    Instrmt_37_set.insert("StateOrProvinceOfIssue_t_2070480012");
    Instrmt_37.add_attribute("Lcl", "LocaleOfIssue_t_1300771359"); // 1
    Instrmt_37_set.insert("LocaleOfIssue_t_1300771359");
    Instrmt_37.add_attribute("Redeem", "RedemptionDate_t_571897763"); // 1
    Instrmt_37_set.insert("RedemptionDate_t_571897763");
    Instrmt_37.add_attribute("StrkPx", "16706032.260000"); // 1
    Instrmt_37_set.insert("16706032.260000");
    Instrmt_37.add_attribute("StrkCcy", "EUR"); // 1
    Instrmt_37_set.insert("EUR");
    Instrmt_37.add_attribute("StrkMult", "7085655.070000"); // 1
    Instrmt_37_set.insert("7085655.070000");
    Instrmt_37.add_attribute("StrkValu", "8156910.150000"); // 1
    Instrmt_37_set.insert("8156910.150000");
    Instrmt_37.add_attribute("StrkPxDtrmnMeth", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("StrkPxBndryMeth", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("StrkPxBndryPrcsn", "9463369.210000"); // 1
    Instrmt_37_set.insert("9463369.210000");
    Instrmt_37.add_attribute("PxDtrmnMeth", "3"); // 1
    Instrmt_37_set.insert("3");
    Instrmt_37.add_attribute("OptAt", "1667695870"); // 1
    Instrmt_37_set.insert("1667695870");
    Instrmt_37.add_attribute("Mult", "3867155.450000"); // 1
    Instrmt_37_set.insert("3867155.450000");
    Instrmt_37.add_attribute("MultTyp", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("FlowSchedTyp", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("MinPxIncr", "3737937.130000"); // 1
    Instrmt_37_set.insert("3737937.130000");
    Instrmt_37.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1011037264"); // 1
    Instrmt_37_set.insert("MinPriceIncrementAmount_t_1011037264");
    Instrmt_37.add_attribute("UOM", "Alw"); // 1
    Instrmt_37_set.insert("Alw");
    Instrmt_37.add_attribute("UOMQty", "9074482.740000"); // 1
    Instrmt_37_set.insert("9074482.740000");
    Instrmt_37.add_attribute("PxUOM", "Gal"); // 1
    Instrmt_37_set.insert("Gal");
    Instrmt_37.add_attribute("PxUOMQty", "2761679.820000"); // 1
    Instrmt_37_set.insert("2761679.820000");
    Instrmt_37.add_attribute("SettlMeth", "P"); // 1
    Instrmt_37_set.insert("P");
    Instrmt_37.add_attribute("ExerStyle", "2"); // 1
    Instrmt_37_set.insert("2");
    Instrmt_37.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("OptPayAmt", "OptPayoutAmount_t_1587688426"); // 1
    Instrmt_37_set.insert("OptPayoutAmount_t_1587688426");
    Instrmt_37.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_37_set.insert("STD");
    Instrmt_37.add_attribute("ValMeth", "CDS"); // 1
    Instrmt_37_set.insert("CDS");
    Instrmt_37.add_attribute("ListMeth", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("CapPx", "12293503.680000"); // 1
    Instrmt_37_set.insert("12293503.680000");
    Instrmt_37.add_attribute("FlrPx", "13825281.440000"); // 1
    Instrmt_37_set.insert("13825281.440000");
    Instrmt_37.add_attribute("PutCall", "1"); // 1
    Instrmt_37_set.insert("1");
    Instrmt_37.add_attribute("FlexInd", "true"); // 1
    Instrmt_37_set.insert("true");
    Instrmt_37.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_37_set.insert("false");
    Instrmt_37.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_37_set.insert("Yr");
    Instrmt_37.add_attribute("CpnRt", "207104.710000"); // 1
    Instrmt_37_set.insert("207104.710000");
    Instrmt_37.add_attribute("Exch", "SecurityExchange_t_971112528"); // 1
    Instrmt_37_set.insert("SecurityExchange_t_971112528");
    Instrmt_37.add_attribute("PosLmt", "1538990577"); // 1
    Instrmt_37_set.insert("1538990577");
    Instrmt_37.add_attribute("NTPosLmt", "836401486"); // 1
    Instrmt_37_set.insert("836401486");
    Instrmt_37.add_attribute("Issr", "Issuer_t_1194179080"); // 1
    Instrmt_37_set.insert("Issuer_t_1194179080");
    Instrmt_37.add_attribute("EncIssrLen", "1756763772"); // 1
    Instrmt_37_set.insert("1756763772");
    Instrmt_37.add_attribute("EncIssr", "EncodedIssuer_t_1782738408"); // 1
    Instrmt_37_set.insert("EncodedIssuer_t_1782738408");
    Instrmt_37.add_attribute("Desc", "SecurityDesc_t_59285090"); // 1
    Instrmt_37_set.insert("SecurityDesc_t_59285090");
    Instrmt_37.add_attribute("EncSecDescLen", "1276975995"); // 1
    Instrmt_37_set.insert("1276975995");
    Instrmt_37.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_21970305"); // 1
    Instrmt_37_set.insert("EncodedSecurityDesc_t_21970305");
    Instrmt_37.add_attribute("Pool", "Pool_t_1987629571"); // 1
    Instrmt_37_set.insert("Pool_t_1987629571");
    Instrmt_37.add_attribute("CSetMo", "2052820196"); // 1
    Instrmt_37_set.insert("2052820196");
    Instrmt_37.add_attribute("CPPgm", "2"); // 1
    Instrmt_37_set.insert("2");
    Instrmt_37.add_attribute("CPRegT", "CPRegType_t_851183187"); // 1
    Instrmt_37_set.insert("CPRegType_t_851183187");
    Instrmt_37.add_attribute("Dated", "DatedDate_t_1636840360"); // 1
    Instrmt_37_set.insert("DatedDate_t_1636840360");
    Instrmt_37.add_attribute("IntAcrl", "InterestAccrualDate_t_1303212292"); // 1
    Instrmt_37_set.insert("InterestAccrualDate_t_1303212292");
    all_values.push_back(Instrmt_37_set);
    all_compo_names.insert("Instrmt_37_set");

    {
      xml_element AID_40{"AID"};
      multiset<string> AID_40_set;
      AID_40.add_attribute("AltID", "SecurityAltID_t_1474297253"); // 2
      AID_40_set.insert("SecurityAltID_t_1474297253");
      AID_40.add_attribute("AltIDSrc", "F"); // 2
      AID_40_set.insert("F");
      all_values.push_back(AID_40_set);
      all_compo_names.insert("AID_40_set");

      Instrmt_37.add_element(AID_40);
    }
    {
      xml_element SecXML_40{"SecXML"};
      multiset<string> SecXML_40_set;
      SecXML_40.add_attribute("Schema", "SecurityXMLSchema_t_252271197"); // 2
      SecXML_40_set.insert("SecurityXMLSchema_t_252271197");
      all_values.push_back(SecXML_40_set);
      all_compo_names.insert("SecXML_40_set");

      Instrmt_37.add_element(SecXML_40);
    }
    {
      xml_element Evnt_40{"Evnt"};
      multiset<string> Evnt_40_set;
      Evnt_40.add_attribute("EventTyp", "4"); // 2
      Evnt_40_set.insert("4");
      Evnt_40.add_attribute("Dt", "EventDate_t_1678553183"); // 2
      Evnt_40_set.insert("EventDate_t_1678553183");
      Evnt_40.add_attribute("Tm", "EventTime_t_1839959623"); // 2
      Evnt_40_set.insert("EventTime_t_1839959623");
      Evnt_40.add_attribute("Px", "14396586.430000"); // 2
      Evnt_40_set.insert("14396586.430000");
      Evnt_40.add_attribute("Txt", "EventText_t_863008363"); // 2
      Evnt_40_set.insert("EventText_t_863008363");
      all_values.push_back(Evnt_40_set);
      all_compo_names.insert("Evnt_40_set");

      Instrmt_37.add_element(Evnt_40);
    }
    {
      xml_element Pty_194{"Pty"};
      multiset<string> Pty_194_set;
      Pty_194.add_attribute("ID", "InstrumentPartyID_t_1076785103"); // 2
      Pty_194_set.insert("InstrumentPartyID_t_1076785103");
      Pty_194.add_attribute("Src", "7"); // 2
      Pty_194_set.insert("7");
      Pty_194.add_attribute("R", "82"); // 2
      Pty_194_set.insert("82");
      all_values.push_back(Pty_194_set);
      all_compo_names.insert("Pty_194_set");

      {
        xml_element Sub_194{"Sub"};
        multiset<string> Sub_194_set;
        Sub_194.add_attribute("ID", "InstrumentPartySubID_t_236606946"); // 3
        Sub_194_set.insert("InstrumentPartySubID_t_236606946");
        Sub_194.add_attribute("Typ", "17"); // 3
        Sub_194_set.insert("17");
        all_values.push_back(Sub_194_set);
        all_compo_names.insert("Sub_194_set");

        Pty_194.add_element(Sub_194);
      }
      Instrmt_37.add_element(Pty_194);
    }
    {
      xml_element CmplxEvnt_37{"CmplxEvnt"};
      multiset<string> CmplxEvnt_37_set;
      CmplxEvnt_37.add_attribute("Typ", "4"); // 2
      CmplxEvnt_37_set.insert("4");
      CmplxEvnt_37.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1067032016"); // 2
      CmplxEvnt_37_set.insert("ComplexOptPayoutAmount_t_1067032016");
      CmplxEvnt_37.add_attribute("Px", "9248739.150000"); // 2
      CmplxEvnt_37_set.insert("9248739.150000");
      CmplxEvnt_37.add_attribute("PxBndryMeth", "4"); // 2
      CmplxEvnt_37_set.insert("4");
      CmplxEvnt_37.add_attribute("PxBndryPrcsn", "4585389.460000"); // 2
      CmplxEvnt_37_set.insert("4585389.460000");
      CmplxEvnt_37.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_37_set.insert("3");
      CmplxEvnt_37.add_attribute("Cond", "1"); // 2
      CmplxEvnt_37_set.insert("1");
      all_values.push_back(CmplxEvnt_37_set);
      all_compo_names.insert("CmplxEvnt_37_set");

      {
        xml_element EvntDts_37{"EvntDts"};
        multiset<string> EvntDts_37_set;
        EvntDts_37.add_attribute("StartDt", "ComplexEventStartDate_t_67819070"); // 3
        EvntDts_37_set.insert("ComplexEventStartDate_t_67819070");
        EvntDts_37.add_attribute("EndDt", "ComplexEventEndDate_t_1396530162"); // 3
        EvntDts_37_set.insert("ComplexEventEndDate_t_1396530162");
        all_values.push_back(EvntDts_37_set);
        all_compo_names.insert("EvntDts_37_set");

        {
          xml_element EvntTms_37{"EvntTms"};
          multiset<string> EvntTms_37_set;
          EvntTms_37.add_attribute("StartTm", "2129571819"); // 4
          EvntTms_37_set.insert("2129571819");
          EvntTms_37.add_attribute("EndTm", "1344795065"); // 4
          EvntTms_37_set.insert("1344795065");
          all_values.push_back(EvntTms_37_set);
          all_compo_names.insert("EvntTms_37_set");

          EvntDts_37.add_element(EvntTms_37);
        }
        CmplxEvnt_37.add_element(EvntDts_37);
      }
      Instrmt_37.add_element(CmplxEvnt_37);
    }
    elt.add_element(Instrmt_37);
  } // end Instrmt
  { // Undly
    xml_element Undly_49{"Undly"};
    multiset<string> Undly_49_set;
    Undly_49.add_attribute("Sym", "UnderlyingSymbol_t_1969717742"); // 1
    Undly_49_set.insert("UnderlyingSymbol_t_1969717742");
    Undly_49.add_attribute("Sfx", "WI"); // 1
    Undly_49_set.insert("WI");
    Undly_49.add_attribute("ID", "UnderlyingSecurityID_t_1814264485"); // 1
    Undly_49_set.insert("UnderlyingSecurityID_t_1814264485");
    Undly_49.add_attribute("Src", "A"); // 1
    Undly_49_set.insert("A");
    Undly_49.add_attribute("Prod", "2"); // 1
    Undly_49_set.insert("2");
    Undly_49.add_attribute("CFI", "UnderlyingCFICode_t_969993129"); // 1
    Undly_49_set.insert("UnderlyingCFICode_t_969993129");
    Undly_49.add_attribute("SecTyp", "TD"); // 1
    Undly_49_set.insert("TD");
    Undly_49.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_505013020"); // 1
    Undly_49_set.insert("UnderlyingSecuritySubType_t_505013020");
    Undly_49.add_attribute("MMY", "1222264326"); // 1
    Undly_49_set.insert("1222264326");
    Undly_49.add_attribute("Mat", "UnderlyingMaturityDate_t_416419049"); // 1
    Undly_49_set.insert("UnderlyingMaturityDate_t_416419049");
    Undly_49.add_attribute("MatTm", "36082556"); // 1
    Undly_49_set.insert("36082556");
    Undly_49.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_914740301"); // 1
    Undly_49_set.insert("UnderlyingCouponPaymentDate_t_914740301");
    Undly_49.add_attribute("RestrctTyp", "FR"); // 1
    Undly_49_set.insert("FR");
    Undly_49.add_attribute("Snrty", "SD"); // 1
    Undly_49_set.insert("SD");
    Undly_49.add_attribute("NotlPctOut", "19915254.040000"); // 1
    Undly_49_set.insert("19915254.040000");
    Undly_49.add_attribute("OrigNotlPctOut", "2301194.080000"); // 1
    Undly_49_set.insert("2301194.080000");
    Undly_49.add_attribute("AttchPnt", "9971437.790000"); // 1
    Undly_49_set.insert("9971437.790000");
    Undly_49.add_attribute("DetchPnt", "806487.030000"); // 1
    Undly_49_set.insert("806487.030000");
    Undly_49.add_attribute("Issued", "UnderlyingIssueDate_t_1134282852"); // 1
    Undly_49_set.insert("UnderlyingIssueDate_t_1134282852");
    Undly_49.add_attribute("RepoCollSecTyp", "902138899"); // 1
    Undly_49_set.insert("902138899");
    Undly_49.add_attribute("RepoTrm", "1147680719"); // 1
    Undly_49_set.insert("1147680719");
    Undly_49.add_attribute("RepoRt", "20591567.680000"); // 1
    Undly_49_set.insert("20591567.680000");
    Undly_49.add_attribute("Fctr", "17782465.470000"); // 1
    Undly_49_set.insert("17782465.470000");
    Undly_49.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1606219665"); // 1
    Undly_49_set.insert("UnderlyingCreditRating_t_1606219665");
    Undly_49.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_1672948522"); // 1
    Undly_49_set.insert("UnderlyingInstrRegistry_t_1672948522");
    Undly_49.add_attribute("Ctry", "1701049627"); // 1
    Undly_49_set.insert("1701049627");
    Undly_49.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1674038736"); // 1
    Undly_49_set.insert("UnderlyingStateOrProvinceOfIssue_t_1674038736");
    Undly_49.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_921995036"); // 1
    Undly_49_set.insert("UnderlyingLocaleOfIssue_t_921995036");
    Undly_49.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1683137798"); // 1
    Undly_49_set.insert("UnderlyingRedemptionDate_t_1683137798");
    Undly_49.add_attribute("StrkPx", "8713501.530000"); // 1
    Undly_49_set.insert("8713501.530000");
    Undly_49.add_attribute("StrkCcy", "GBP"); // 1
    Undly_49_set.insert("GBP");
    Undly_49.add_attribute("OptA", "2121481767"); // 1
    Undly_49_set.insert("2121481767");
    Undly_49.add_attribute("Mult", "20072763.400000"); // 1
    Undly_49_set.insert("20072763.400000");
    Undly_49.add_attribute("MultTyp", "0"); // 1
    Undly_49_set.insert("0");
    Undly_49.add_attribute("FlowSchedTyp", "0"); // 1
    Undly_49_set.insert("0");
    Undly_49.add_attribute("UOM", "lbs"); // 1
    Undly_49_set.insert("lbs");
    Undly_49.add_attribute("UOMQty", "315364.110000"); // 1
    Undly_49_set.insert("315364.110000");
    Undly_49.add_attribute("PxUOM", "MMBtu"); // 1
    Undly_49_set.insert("MMBtu");
    Undly_49.add_attribute("PxUOMQty", "20520501.470000"); // 1
    Undly_49_set.insert("20520501.470000");
    Undly_49.add_attribute("TmUnit", "Min"); // 1
    Undly_49_set.insert("Min");
    Undly_49.add_attribute("ExerStyle", "0"); // 1
    Undly_49_set.insert("0");
    Undly_49.add_attribute("CpnRt", "8193068.000000"); // 1
    Undly_49_set.insert("8193068.000000");
    Undly_49.add_attribute("Exch", "UnderlyingSecurityExchange_t_156549505"); // 1
    Undly_49_set.insert("UnderlyingSecurityExchange_t_156549505");
    Undly_49.add_attribute("Issr", "UnderlyingIssuer_t_6189293"); // 1
    Undly_49_set.insert("UnderlyingIssuer_t_6189293");
    Undly_49.add_attribute("EncUndIssrLen", "663348557"); // 1
    Undly_49_set.insert("663348557");
    Undly_49.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_386668913"); // 1
    Undly_49_set.insert("EncodedUnderlyingIssuer_t_386668913");
    Undly_49.add_attribute("Desc", "UnderlyingSecurityDesc_t_1003333072"); // 1
    Undly_49_set.insert("UnderlyingSecurityDesc_t_1003333072");
    Undly_49.add_attribute("EncUndSecDescLen", "743997260"); // 1
    Undly_49_set.insert("743997260");
    Undly_49.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1520951766"); // 1
    Undly_49_set.insert("EncodedUnderlyingSecurityDesc_t_1520951766");
    Undly_49.add_attribute("CPPgm", "UnderlyingCPProgram_t_1905471971"); // 1
    Undly_49_set.insert("UnderlyingCPProgram_t_1905471971");
    Undly_49.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1891677979"); // 1
    Undly_49_set.insert("UnderlyingCPRegType_t_1891677979");
    Undly_49.add_attribute("AllocPct", "14326248.860000"); // 1
    Undly_49_set.insert("14326248.860000");
    Undly_49.add_attribute("Ccy", "CHF"); // 1
    Undly_49_set.insert("CHF");
    Undly_49.add_attribute("Qty", "9580897.600000"); // 1
    Undly_49_set.insert("9580897.600000");
    Undly_49.add_attribute("SettlTyp", "2"); // 1
    Undly_49_set.insert("2");
    Undly_49.add_attribute("CashAmt", "UnderlyingCashAmount_t_876969085"); // 1
    Undly_49_set.insert("UnderlyingCashAmount_t_876969085");
    Undly_49.add_attribute("CashTyp", "FIXED"); // 1
    Undly_49_set.insert("FIXED");
    Undly_49.add_attribute("Px", "6254550.000000"); // 1
    Undly_49_set.insert("6254550.000000");
    Undly_49.add_attribute("DirtPx", "17483192.380000"); // 1
    Undly_49_set.insert("17483192.380000");
    Undly_49.add_attribute("EndPx", "20730966.510000"); // 1
    Undly_49_set.insert("20730966.510000");
    Undly_49.add_attribute("StartVal", "UnderlyingStartValue_t_2130826893"); // 1
    Undly_49_set.insert("UnderlyingStartValue_t_2130826893");
    Undly_49.add_attribute("CurVal", "UnderlyingCurrentValue_t_1722317357"); // 1
    Undly_49_set.insert("UnderlyingCurrentValue_t_1722317357");
    Undly_49.add_attribute("EndVal", "UnderlyingEndValue_t_1932889343"); // 1
    Undly_49_set.insert("UnderlyingEndValue_t_1932889343");
    Undly_49.add_attribute("AdjQty", "146487.700000"); // 1
    Undly_49_set.insert("146487.700000");
    Undly_49.add_attribute("FxRate", "2883201.540000"); // 1
    Undly_49_set.insert("2883201.540000");
    Undly_49.add_attribute("FxRateCalc", "M"); // 1
    Undly_49_set.insert("M");
    Undly_49.add_attribute("CapValu", "UnderlyingCapValue_t_46185182"); // 1
    Undly_49_set.insert("UnderlyingCapValue_t_46185182");
    Undly_49.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1506819620"); // 1
    Undly_49_set.insert("UnderlyingSettlMethod_t_1506819620");
    Undly_49.add_attribute("PutCall", "519758015"); // 1
    Undly_49_set.insert("519758015");
    all_values.push_back(Undly_49_set);
    all_compo_names.insert("Undly_49_set");

    {
      xml_element UndAID_49{"UndAID"};
      multiset<string> UndAID_49_set;
      UndAID_49.add_attribute("AltID", "UnderlyingSecurityAltID_t_494140642"); // 2
      UndAID_49_set.insert("UnderlyingSecurityAltID_t_494140642");
      UndAID_49.add_attribute("AltIDSrc", "8"); // 2
      UndAID_49_set.insert("8");
      all_values.push_back(UndAID_49_set);
      all_compo_names.insert("UndAID_49_set");

      Undly_49.add_element(UndAID_49);
    }
    {
      xml_element Stip_76{"Stip"};
      multiset<string> Stip_76_set;
      Stip_76.add_attribute("Typ", "ISSUE"); // 2
      Stip_76_set.insert("ISSUE");
      Stip_76.add_attribute("Val", "UnderlyingStipValue_t_650690147"); // 2
      Stip_76_set.insert("UnderlyingStipValue_t_650690147");
      all_values.push_back(Stip_76_set);
      all_compo_names.insert("Stip_76_set");

      Undly_49.add_element(Stip_76);
    }
    {
      xml_element Pty_195{"Pty"};
      multiset<string> Pty_195_set;
      Pty_195.add_attribute("ID", "UnderlyingInstrumentPartyID_t_620107286"); // 2
      Pty_195_set.insert("UnderlyingInstrumentPartyID_t_620107286");
      Pty_195.add_attribute("Src", "7"); // 2
      Pty_195_set.insert("7");
      Pty_195.add_attribute("R", "56"); // 2
      Pty_195_set.insert("56");
      all_values.push_back(Pty_195_set);
      all_compo_names.insert("Pty_195_set");

      {
        xml_element Sub_195{"Sub"};
        multiset<string> Sub_195_set;
        Sub_195.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1623440359"); // 3
        Sub_195_set.insert("UnderlyingInstrumentPartySubID_t_1623440359");
        Sub_195.add_attribute("Typ", "26"); // 3
        Sub_195_set.insert("26");
        all_values.push_back(Sub_195_set);
        all_compo_names.insert("Sub_195_set");

        Pty_195.add_element(Sub_195);
      }
      Undly_49.add_element(Pty_195);
    }
    elt.add_element(Undly_49);
  } // end Undly
  { // Ord
    xml_element Ord_0{"Ord"};
    multiset<string> Ord_0_set;
    Ord_0.add_attribute("Qty", "13814286.820000"); // 1
    Ord_0_set.insert("13814286.820000");
    Ord_0.add_attribute("SwapTyp", "1"); // 1
    Ord_0_set.insert("1");
    Ord_0.add_attribute("LegAllocID", "LegAllocID_t_1843452065"); // 1
    Ord_0_set.insert("LegAllocID_t_1843452065");
    Ord_0.add_attribute("PosEfct", "R"); // 1
    Ord_0_set.insert("R");
    Ord_0.add_attribute("Cover", "1"); // 1
    Ord_0_set.insert("1");
    Ord_0.add_attribute("RefID", "LegRefID_t_654058177"); // 1
    Ord_0_set.insert("LegRefID_t_654058177");
    Ord_0.add_attribute("SettlTyp", "3"); // 1
    Ord_0_set.insert("3");
    Ord_0.add_attribute("SettlDt", "LegSettlDate_t_423020750"); // 1
    Ord_0_set.insert("LegSettlDate_t_423020750");
    Ord_0.add_attribute("SettlCcy", "EUR"); // 1
    Ord_0_set.insert("EUR");
    Ord_0.add_attribute("OrdQty", "238563.400000"); // 1
    Ord_0_set.insert("238563.400000");
    Ord_0.add_attribute("LegVolatility", "3122723.280000"); // 1
    Ord_0_set.insert("3122723.280000");
    Ord_0.add_attribute("LegDividendYield", "3212953.520000"); // 1
    Ord_0_set.insert("3212953.520000");
    Ord_0.add_attribute("LegCurrencyRatio", "17461736.980000"); // 1
    Ord_0_set.insert("17461736.980000");
    Ord_0.add_attribute("LegExecInst", "I"); // 1
    Ord_0_set.insert("I");
    all_values.push_back(Ord_0_set);
    all_compo_names.insert("Ord_0_set");

    {
      xml_element Leg_49{"Leg"};
      multiset<string> Leg_49_set;
      Leg_49.add_attribute("Sym", "LegSymbol_t_335944123"); // 2
      Leg_49_set.insert("LegSymbol_t_335944123");
      Leg_49.add_attribute("Sfx", "CD"); // 2
      Leg_49_set.insert("CD");
      Leg_49.add_attribute("ID", "LegSecurityID_t_712869539"); // 2
      Leg_49_set.insert("LegSecurityID_t_712869539");
      Leg_49.add_attribute("Src", "L"); // 2
      Leg_49_set.insert("L");
      Leg_49.add_attribute("Prod", "7"); // 2
      Leg_49_set.insert("7");
      Leg_49.add_attribute("CFI", "LegCFICode_t_1232627554"); // 2
      Leg_49_set.insert("LegCFICode_t_1232627554");
      Leg_49.add_attribute("SecTyp", "RETIRED"); // 2
      Leg_49_set.insert("RETIRED");
      Leg_49.add_attribute("SecSubTyp", "LegSecuritySubType_t_2007747818"); // 2
      Leg_49_set.insert("LegSecuritySubType_t_2007747818");
      Leg_49.add_attribute("MMY", "424208721"); // 2
      Leg_49_set.insert("424208721");
      Leg_49.add_attribute("Mat", "LegMaturityDate_t_1526960095"); // 2
      Leg_49_set.insert("LegMaturityDate_t_1526960095");
      Leg_49.add_attribute("MatTm", "480371456"); // 2
      Leg_49_set.insert("480371456");
      Leg_49.add_attribute("CpnPmt", "LegCouponPaymentDate_t_279138446"); // 2
      Leg_49_set.insert("LegCouponPaymentDate_t_279138446");
      Leg_49.add_attribute("Issued", "LegIssueDate_t_416835508"); // 2
      Leg_49_set.insert("LegIssueDate_t_416835508");
      Leg_49.add_attribute("RepoCollSecTyp", "2103811815"); // 2
      Leg_49_set.insert("2103811815");
      Leg_49.add_attribute("RepoTrm", "878065430"); // 2
      Leg_49_set.insert("878065430");
      Leg_49.add_attribute("RepoRt", "8276626.870000"); // 2
      Leg_49_set.insert("8276626.870000");
      Leg_49.add_attribute("Fctr", "13377568.500000"); // 2
      Leg_49_set.insert("13377568.500000");
      Leg_49.add_attribute("CrdRtg", "LegCreditRating_t_1221186746"); // 2
      Leg_49_set.insert("LegCreditRating_t_1221186746");
      Leg_49.add_attribute("Rgstry", "LegInstrRegistry_t_523631104"); // 2
      Leg_49_set.insert("LegInstrRegistry_t_523631104");
      Leg_49.add_attribute("Ctry", "2107936755"); // 2
      Leg_49_set.insert("2107936755");
      Leg_49.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_767238411"); // 2
      Leg_49_set.insert("LegStateOrProvinceOfIssue_t_767238411");
      Leg_49.add_attribute("Lcl", "LegLocaleOfIssue_t_1177689281"); // 2
      Leg_49_set.insert("LegLocaleOfIssue_t_1177689281");
      Leg_49.add_attribute("Redeem", "LegRedemptionDate_t_1820433862"); // 2
      Leg_49_set.insert("LegRedemptionDate_t_1820433862");
      Leg_49.add_attribute("Strk", "11902591.610000"); // 2
      Leg_49_set.insert("11902591.610000");
      Leg_49.add_attribute("StrkCcy", "CHF"); // 2
      Leg_49_set.insert("CHF");
      Leg_49.add_attribute("OptA", "1214115502"); // 2
      Leg_49_set.insert("1214115502");
      Leg_49.add_attribute("Cmult", "18766209.340000"); // 2
      Leg_49_set.insert("18766209.340000");
      Leg_49.add_attribute("MultTyp", "0"); // 2
      Leg_49_set.insert("0");
      Leg_49.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_49_set.insert("2");
      Leg_49.add_attribute("UOM", "lbs"); // 2
      Leg_49_set.insert("lbs");
      Leg_49.add_attribute("UOMQty", "6681417.970000"); // 2
      Leg_49_set.insert("6681417.970000");
      Leg_49.add_attribute("PxUOM", "Gal"); // 2
      Leg_49_set.insert("Gal");
      Leg_49.add_attribute("PxUOMQty", "5396848.480000"); // 2
      Leg_49_set.insert("5396848.480000");
      Leg_49.add_attribute("TmUnit", "Yr"); // 2
      Leg_49_set.insert("Yr");
      Leg_49.add_attribute("ExerStyle", "1"); // 2
      Leg_49_set.insert("1");
      Leg_49.add_attribute("CpnRt", "17723124.020000"); // 2
      Leg_49_set.insert("17723124.020000");
      Leg_49.add_attribute("Exch", "LegSecurityExchange_t_1926541049"); // 2
      Leg_49_set.insert("LegSecurityExchange_t_1926541049");
      Leg_49.add_attribute("Issr", "LegIssuer_t_1953909751"); // 2
      Leg_49_set.insert("LegIssuer_t_1953909751");
      Leg_49.add_attribute("EncLegIssrLen", "49037475"); // 2
      Leg_49_set.insert("49037475");
      Leg_49.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1306017496"); // 2
      Leg_49_set.insert("EncodedLegIssuer_t_1306017496");
      Leg_49.add_attribute("Desc", "LegSecurityDesc_t_286797559"); // 2
      Leg_49_set.insert("LegSecurityDesc_t_286797559");
      Leg_49.add_attribute("EncLegSecDescLen", "328175921"); // 2
      Leg_49_set.insert("328175921");
      Leg_49.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1722853004"); // 2
      Leg_49_set.insert("EncodedLegSecurityDesc_t_1722853004");
      Leg_49.add_attribute("RatioQty", "2431257.270000"); // 2
      Leg_49_set.insert("2431257.270000");
      Leg_49.add_attribute("Side", "9"); // 2
      Leg_49_set.insert("9");
      Leg_49.add_attribute("Ccy", "CHF"); // 2
      Leg_49_set.insert("CHF");
      Leg_49.add_attribute("Pool", "LegPool_t_279944450"); // 2
      Leg_49_set.insert("LegPool_t_279944450");
      Leg_49.add_attribute("Dated", "LegDatedDate_t_926663147"); // 2
      Leg_49_set.insert("LegDatedDate_t_926663147");
      Leg_49.add_attribute("CSetMo", "1541335684"); // 2
      Leg_49_set.insert("1541335684");
      Leg_49.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1047182862"); // 2
      Leg_49_set.insert("LegInterestAccrualDate_t_1047182862");
      Leg_49.add_attribute("PutCall", "2104352428"); // 2
      Leg_49_set.insert("2104352428");
      Leg_49.add_attribute("LegOptionRatio", "12142858.980000"); // 2
      Leg_49_set.insert("12142858.980000");
      Leg_49.add_attribute("Px", "899583.750000"); // 2
      Leg_49_set.insert("899583.750000");
      all_values.push_back(Leg_49_set);
      all_compo_names.insert("Leg_49_set");

      {
        xml_element LegAID_49{"LegAID"};
        multiset<string> LegAID_49_set;
        LegAID_49.add_attribute("SecAltID", "LegSecurityAltID_t_1521217386"); // 3
        LegAID_49_set.insert("LegSecurityAltID_t_1521217386");
        LegAID_49.add_attribute("SecAltIDSrc", "E"); // 3
        LegAID_49_set.insert("E");
        all_values.push_back(LegAID_49_set);
        all_compo_names.insert("LegAID_49_set");

        Leg_49.add_element(LegAID_49);
      }
      Ord_0.add_element(Leg_49);
    }
    {
      xml_element Stip_77{"Stip"};
      multiset<string> Stip_77_set;
      Stip_77.add_attribute("StipTyp", "PRICEFREQ"); // 2
      Stip_77_set.insert("PRICEFREQ");
      Stip_77.add_attribute("StipVal", "LegStipulationValue_t_1250354672"); // 2
      Stip_77_set.insert("LegStipulationValue_t_1250354672");
      all_values.push_back(Stip_77_set);
      all_compo_names.insert("Stip_77_set");

      Ord_0.add_element(Stip_77);
    }
    {
      xml_element PreAll_5{"PreAll"};
      multiset<string> PreAll_5_set;
      PreAll_5.add_attribute("AllocAcct", "LegAllocAccount_t_1557385893"); // 2
      PreAll_5_set.insert("LegAllocAccount_t_1557385893");
      PreAll_5.add_attribute("IndAllocID", "LegIndividualAllocID_t_2116879429"); // 2
      PreAll_5_set.insert("LegIndividualAllocID_t_2116879429");
      PreAll_5.add_attribute("AllocQty", "10771699.810000"); // 2
      PreAll_5_set.insert("10771699.810000");
      PreAll_5.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_78044042"); // 2
      PreAll_5_set.insert("LegAllocAcctIDSource_t_78044042");
      PreAll_5.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_5_set.insert("CAN");
      all_values.push_back(PreAll_5_set);
      all_compo_names.insert("PreAll_5_set");

      {
        xml_element Pty_196{"Pty"};
        multiset<string> Pty_196_set;
        Pty_196.add_attribute("ID", "Nested2PartyID_t_1128315144"); // 3
        Pty_196_set.insert("Nested2PartyID_t_1128315144");
        Pty_196.add_attribute("Src", "2"); // 3
        Pty_196_set.insert("2");
        Pty_196.add_attribute("R", "8"); // 3
        Pty_196_set.insert("8");
        all_values.push_back(Pty_196_set);
        all_compo_names.insert("Pty_196_set");

        {
          xml_element Sub_196{"Sub"};
          multiset<string> Sub_196_set;
          Sub_196.add_attribute("ID", "Nested2PartySubID_t_907372546"); // 4
          Sub_196_set.insert("Nested2PartySubID_t_907372546");
          Sub_196.add_attribute("Typ", "18"); // 4
          Sub_196_set.insert("18");
          all_values.push_back(Sub_196_set);
          all_compo_names.insert("Sub_196_set");

          Pty_196.add_element(Sub_196);
        }
        PreAll_5.add_element(Pty_196);
      }
      Ord_0.add_element(PreAll_5);
    }
    {
      xml_element Pty_197{"Pty"};
      multiset<string> Pty_197_set;
      Pty_197.add_attribute("ID", "NestedPartyID_t_1290721059"); // 2
      Pty_197_set.insert("NestedPartyID_t_1290721059");
      Pty_197.add_attribute("Src", "7"); // 2
      Pty_197_set.insert("7");
      Pty_197.add_attribute("R", "21"); // 2
      Pty_197_set.insert("21");
      all_values.push_back(Pty_197_set);
      all_compo_names.insert("Pty_197_set");

      {
        xml_element Sub_197{"Sub"};
        multiset<string> Sub_197_set;
        Sub_197.add_attribute("ID", "NestedPartySubID_t_1618896980"); // 3
        Sub_197_set.insert("NestedPartySubID_t_1618896980");
        Sub_197.add_attribute("Typ", "18"); // 3
        Sub_197_set.insert("18");
        all_values.push_back(Sub_197_set);
        all_compo_names.insert("Sub_197_set");

        Pty_197.add_element(Sub_197);
      }
      Ord_0.add_element(Pty_197);
    }
    elt.add_element(Ord_0);
  } // end Ord
  { // OrdQty
    xml_element OrdQty_10{"OrdQty"};
    multiset<string> OrdQty_10_set;
    OrdQty_10.add_attribute("Qty", "9517228.600000"); // 1
    OrdQty_10_set.insert("9517228.600000");
    OrdQty_10.add_attribute("Cash", "6776546.840000"); // 1
    OrdQty_10_set.insert("6776546.840000");
    OrdQty_10.add_attribute("Pct", "443077.940000"); // 1
    OrdQty_10_set.insert("443077.940000");
    OrdQty_10.add_attribute("RndDir", "2"); // 1
    OrdQty_10_set.insert("2");
    OrdQty_10.add_attribute("RndMod", "9575991.350000"); // 1
    OrdQty_10_set.insert("9575991.350000");
    all_values.push_back(OrdQty_10_set);
    all_compo_names.insert("OrdQty_10_set");

    elt.add_element(OrdQty_10);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_2{"TrgrInstr"};
    multiset<string> TrgrInstr_2_set;
    TrgrInstr_2.add_attribute("TrgrTyp", "3"); // 1
    TrgrInstr_2_set.insert("3");
    TrgrInstr_2.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_2_set.insert("1");
    TrgrInstr_2.add_attribute("TrgrPx", "20047819.970000"); // 1
    TrgrInstr_2_set.insert("20047819.970000");
    TrgrInstr_2.add_attribute("TrgrSym", "TriggerSymbol_t_927839722"); // 1
    TrgrInstr_2_set.insert("TriggerSymbol_t_927839722");
    TrgrInstr_2.add_attribute("TrgrSecID", "TriggerSecurityID_t_993259723"); // 1
    TrgrInstr_2_set.insert("TriggerSecurityID_t_993259723");
    TrgrInstr_2.add_attribute("TrgrSecIDSrc", "B"); // 1
    TrgrInstr_2_set.insert("B");
    TrgrInstr_2.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_301573461"); // 1
    TrgrInstr_2_set.insert("TriggerSecurityDesc_t_301573461");
    TrgrInstr_2.add_attribute("TrgrPxTyp", "4"); // 1
    TrgrInstr_2_set.insert("4");
    TrgrInstr_2.add_attribute("TrgrPxTypScp", "2"); // 1
    TrgrInstr_2_set.insert("2");
    TrgrInstr_2.add_attribute("TrgrPxDir", "D"); // 1
    TrgrInstr_2_set.insert("D");
    TrgrInstr_2.add_attribute("TrgrNewPx", "16283501.880000"); // 1
    TrgrInstr_2_set.insert("16283501.880000");
    TrgrInstr_2.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_2_set.insert("2");
    TrgrInstr_2.add_attribute("TrgrNewQty", "4816144.670000"); // 1
    TrgrInstr_2_set.insert("4816144.670000");
    TrgrInstr_2.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1706394231"); // 1
    TrgrInstr_2_set.insert("TriggerTradingSessionID_t_1706394231");
    TrgrInstr_2.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1889937921"); // 1
    TrgrInstr_2_set.insert("TriggerTradingSessionSubID_t_1889937921");
    all_values.push_back(TrgrInstr_2_set);
    all_compo_names.insert("TrgrInstr_2_set");

    elt.add_element(TrgrInstr_2);
  } // end TrgrInstr
  { // Comm
    xml_element Comm_11{"Comm"};
    multiset<string> Comm_11_set;
    Comm_11.add_attribute("Comm", "Commission_t_2098469296"); // 1
    Comm_11_set.insert("Commission_t_2098469296");
    Comm_11.add_attribute("CommTyp", "2"); // 1
    Comm_11_set.insert("2");
    Comm_11.add_attribute("Ccy", "GBP"); // 1
    Comm_11_set.insert("GBP");
    Comm_11.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_11_set.insert("Y");
    all_values.push_back(Comm_11_set);
    all_compo_names.insert("Comm_11_set");

    elt.add_element(Comm_11);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_2{"PegInstr"};
    multiset<string> PegInstr_2_set;
    PegInstr_2.add_attribute("OfstVal", "7796273.180000"); // 1
    PegInstr_2_set.insert("7796273.180000");
    PegInstr_2.add_attribute("PegPxTyp", "4"); // 1
    PegInstr_2_set.insert("4");
    PegInstr_2.add_attribute("MoveTyp", "0"); // 1
    PegInstr_2_set.insert("0");
    PegInstr_2.add_attribute("OfstTyp", "0"); // 1
    PegInstr_2_set.insert("0");
    PegInstr_2.add_attribute("LmtTyp", "2"); // 1
    PegInstr_2_set.insert("2");
    PegInstr_2.add_attribute("RndDir", "2"); // 1
    PegInstr_2_set.insert("2");
    PegInstr_2.add_attribute("Scope", "1"); // 1
    PegInstr_2_set.insert("1");
    PegInstr_2.add_attribute("PegSecurityIDSource", "H"); // 1
    PegInstr_2_set.insert("H");
    PegInstr_2.add_attribute("PegSecID", "PegSecurityID_t_1346088213"); // 1
    PegInstr_2_set.insert("PegSecurityID_t_1346088213");
    PegInstr_2.add_attribute("PgSymbl", "PegSymbol_t_677585454"); // 1
    PegInstr_2_set.insert("PegSymbol_t_677585454");
    PegInstr_2.add_attribute("PegSecDesc", "PegSecurityDesc_t_1442573795"); // 1
    PegInstr_2_set.insert("PegSecurityDesc_t_1442573795");
    all_values.push_back(PegInstr_2_set);
    all_compo_names.insert("PegInstr_2_set");

    elt.add_element(PegInstr_2);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_2{"DiscInstr"};
    multiset<string> DiscInstr_2_set;
    DiscInstr_2.add_attribute("DsctnInst", "3"); // 1
    DiscInstr_2_set.insert("3");
    DiscInstr_2.add_attribute("OfstValu", "4565592.790000"); // 1
    DiscInstr_2_set.insert("4565592.790000");
    DiscInstr_2.add_attribute("MoveTyp", "0"); // 1
    DiscInstr_2_set.insert("0");
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
    xml_element StrtPrmGrp_4{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_4_set;
    StrtPrmGrp_4.add_attribute("StrtPrmNme", "StrategyParameterName_t_350975822"); // 1
    StrtPrmGrp_4_set.insert("StrategyParameterName_t_350975822");
    StrtPrmGrp_4.add_attribute("StrtPrmTyp", "9"); // 1
    StrtPrmGrp_4_set.insert("9");
    StrtPrmGrp_4.add_attribute("StrtPrmVal", "StrategyParameterValue_t_1001649838"); // 1
    StrtPrmGrp_4_set.insert("StrategyParameterValue_t_1001649838");
    all_values.push_back(StrtPrmGrp_4_set);
    all_compo_names.insert("StrtPrmGrp_4_set");

    elt.add_element(StrtPrmGrp_4);
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
