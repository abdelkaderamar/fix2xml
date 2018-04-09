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

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"NewOrdMleg" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> NewOrderMultileg_message_t_0;
  elt.add_attribute("ClOrdID", "ClOrdID_t_907500500"); // 0
  NewOrderMultileg_message_t_0.insert("ClOrdID_t_907500500");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_1459351289"); // 0
  NewOrderMultileg_message_t_0.insert("SecondaryClOrdID_t_1459351289");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_435813867"); // 0
  NewOrderMultileg_message_t_0.insert("ClOrdLinkID_t_435813867");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1617592583"); // 0
  NewOrderMultileg_message_t_0.insert("TradeOriginationDate_t_1617592583");
  elt.add_attribute("TrdDt", "TradeDate_t_1567853699"); // 0
  NewOrderMultileg_message_t_0.insert("TradeDate_t_1567853699");
  elt.add_attribute("Acct", "Account_t_1049052093"); // 0
  NewOrderMultileg_message_t_0.insert("Account_t_1049052093");
  elt.add_attribute("AcctIDSrc", "4"); // 0
  NewOrderMultileg_message_t_0.insert("4");
  elt.add_attribute("AcctTyp", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("DayBkngInst", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("BkngUnit", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("PreallocMeth", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_283749330"); // 0
  NewOrderMultileg_message_t_0.insert("AllocID_t_283749330");
  elt.add_attribute("SettlTyp", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("SettlDt", "SettlDate_t_1308891105"); // 0
  NewOrderMultileg_message_t_0.insert("SettlDate_t_1308891105");
  elt.add_attribute("CshMgn", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "B"); // 0
  NewOrderMultileg_message_t_0.insert("B");
  elt.add_attribute("HandlInst", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ExecInst", "J"); // 0
  NewOrderMultileg_message_t_0.insert("J");
  elt.add_attribute("MinQty", "11923237.850000"); // 0
  NewOrderMultileg_message_t_0.insert("11923237.850000");
  elt.add_attribute("MtchInc", "5913247.250000"); // 0
  NewOrderMultileg_message_t_0.insert("5913247.250000");
  elt.add_attribute("MxPxLvls", "2020260710"); // 0
  NewOrderMultileg_message_t_0.insert("2020260710");
  elt.add_attribute("MaxFloor", "12644803.560000"); // 0
  NewOrderMultileg_message_t_0.insert("12644803.560000");
  elt.add_attribute("ExDest", "ExDestination_t_1527991516"); // 0
  NewOrderMultileg_message_t_0.insert("ExDestination_t_1527991516");
  elt.add_attribute("ExDestIDSrc", "C"); // 0
  NewOrderMultileg_message_t_0.insert("C");
  elt.add_attribute("ProcCode", "5"); // 0
  NewOrderMultileg_message_t_0.insert("5");
  elt.add_attribute("Side", "G"); // 0
  NewOrderMultileg_message_t_0.insert("G");
  elt.add_attribute("PrevClsPx", "16618623.240000"); // 0
  NewOrderMultileg_message_t_0.insert("16618623.240000");
  elt.add_attribute("SwapPnts", "17981057.130000"); // 0
  NewOrderMultileg_message_t_0.insert("17981057.130000");
  elt.add_attribute("LocReqd", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_2097093506"); // 0
  NewOrderMultileg_message_t_0.insert("TransactTime_t_2097093506");
  elt.add_attribute("QtyTyp", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("OrdTyp", "6"); // 0
  NewOrderMultileg_message_t_0.insert("6");
  elt.add_attribute("MlegModel", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("MlegPxMeth", "5"); // 0
  NewOrderMultileg_message_t_0.insert("5");
  elt.add_attribute("PxTyp", "18"); // 0
  NewOrderMultileg_message_t_0.insert("18");
  elt.add_attribute("Px", "8293311.990000"); // 0
  NewOrderMultileg_message_t_0.insert("8293311.990000");
  elt.add_attribute("PxPrtScp", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("StopPx", "7438356.950000"); // 0
  NewOrderMultileg_message_t_0.insert("7438356.950000");
  elt.add_attribute("Ccy", "EUR"); // 0
  NewOrderMultileg_message_t_0.insert("EUR");
  elt.add_attribute("ComplianceID", "ComplianceID_t_1426528704"); // 0
  NewOrderMultileg_message_t_0.insert("ComplianceID_t_1426528704");
  elt.add_attribute("SolFlag", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("IOIID", "IOIID_t_1731224036"); // 0
  NewOrderMultileg_message_t_0.insert("IOIID_t_1731224036");
  elt.add_attribute("QID", "QuoteID_t_494513514"); // 0
  NewOrderMultileg_message_t_0.insert("QuoteID_t_494513514");
  elt.add_attribute("RefOrdID", "RefOrderID_t_2024180112"); // 0
  NewOrderMultileg_message_t_0.insert("RefOrderID_t_2024180112");
  elt.add_attribute("RefOrdIDSrc", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("TmInForce", "8"); // 0
  NewOrderMultileg_message_t_0.insert("8");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_243958291"); // 0
  NewOrderMultileg_message_t_0.insert("EffectiveTime_t_243958291");
  elt.add_attribute("ExpireDt", "ExpireDate_t_649040947"); // 0
  NewOrderMultileg_message_t_0.insert("ExpireDate_t_649040947");
  elt.add_attribute("ExpireTm", "ExpireTime_t_487151025"); // 0
  NewOrderMultileg_message_t_0.insert("ExpireTime_t_487151025");
  elt.add_attribute("GTBkngInst", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("Cpcty", "I"); // 0
  NewOrderMultileg_message_t_0.insert("I");
  elt.add_attribute("Rstctions", "7"); // 0
  NewOrderMultileg_message_t_0.insert("7");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  NewOrderMultileg_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ForexReq", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("SettlCcy", "GBP"); // 0
  NewOrderMultileg_message_t_0.insert("GBP");
  elt.add_attribute("BkngTyp", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("Txt", "Text_t_101098324"); // 0
  NewOrderMultileg_message_t_0.insert("Text_t_101098324");
  elt.add_attribute("EncTxtLen", "2034363111"); // 0
  NewOrderMultileg_message_t_0.insert("2034363111");
  elt.add_attribute("EncTxt", "EncodedText_t_951488712"); // 0
  NewOrderMultileg_message_t_0.insert("EncodedText_t_951488712");
  elt.add_attribute("PosEfct", "R"); // 0
  NewOrderMultileg_message_t_0.insert("R");
  elt.add_attribute("Covered", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "14188582.250000"); // 0
  NewOrderMultileg_message_t_0.insert("14188582.250000");
  elt.add_attribute("TgtStrategy", "3"); // 0
  NewOrderMultileg_message_t_0.insert("3");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_2125171809"); // 0
  NewOrderMultileg_message_t_0.insert("TargetStrategyParameters_t_2125171809");
  elt.add_attribute("RFR", "7877961.830000"); // 0
  NewOrderMultileg_message_t_0.insert("7877961.830000");
  elt.add_attribute("ParticipationRt", "13133399.560000"); // 0
  NewOrderMultileg_message_t_0.insert("13133399.560000");
  elt.add_attribute("CxllationRights", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("RegistID", "RegistID_t_592385012"); // 0
  NewOrderMultileg_message_t_0.insert("RegistID_t_592385012");
  elt.add_attribute("Designation", "Designation_t_580958551"); // 0
  NewOrderMultileg_message_t_0.insert("Designation_t_580958551");
  elt.add_attribute("MLEGRptTypReq", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  all_values.push_back(NewOrderMultileg_message_t_0);
  all_compo_names.insert("NewOrderMultileg_message_t");

  { // Hdr
    xml_element Hdr_53{"Hdr"};
    multiset<string> Hdr_53_set;
    Hdr_53.add_attribute("SeqNum", "1086898526"); // 1
    Hdr_53_set.insert("1086898526");
    Hdr_53.add_attribute("SID", "SenderCompID_t_457655015"); // 1
    Hdr_53_set.insert("SenderCompID_t_457655015");
    Hdr_53.add_attribute("TID", "TargetCompID_t_961094719"); // 1
    Hdr_53_set.insert("TargetCompID_t_961094719");
    Hdr_53.add_attribute("OBID", "OnBehalfOfCompID_t_381725766"); // 1
    Hdr_53_set.insert("OnBehalfOfCompID_t_381725766");
    Hdr_53.add_attribute("D2ID", "DeliverToCompID_t_701613306"); // 1
    Hdr_53_set.insert("DeliverToCompID_t_701613306");
    Hdr_53.add_attribute("SSub", "SenderSubID_t_1610135667"); // 1
    Hdr_53_set.insert("SenderSubID_t_1610135667");
    Hdr_53.add_attribute("SLoc", "SenderLocationID_t_868876792"); // 1
    Hdr_53_set.insert("SenderLocationID_t_868876792");
    Hdr_53.add_attribute("TSub", "TargetSubID_t_1536896323"); // 1
    Hdr_53_set.insert("TargetSubID_t_1536896323");
    Hdr_53.add_attribute("TLoc", "TargetLocationID_t_2131953677"); // 1
    Hdr_53_set.insert("TargetLocationID_t_2131953677");
    Hdr_53.add_attribute("OBSub", "OnBehalfOfSubID_t_473024525"); // 1
    Hdr_53_set.insert("OnBehalfOfSubID_t_473024525");
    Hdr_53.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1752687207"); // 1
    Hdr_53_set.insert("OnBehalfOfLocationID_t_1752687207");
    Hdr_53.add_attribute("D2Sub", "DeliverToSubID_t_407360957"); // 1
    Hdr_53_set.insert("DeliverToSubID_t_407360957");
    Hdr_53.add_attribute("D2Loc", "DeliverToLocationID_t_1742335526"); // 1
    Hdr_53_set.insert("DeliverToLocationID_t_1742335526");
    Hdr_53.add_attribute("PosDup", "Y"); // 1
    Hdr_53_set.insert("Y");
    Hdr_53.add_attribute("PosRsnd", "Y"); // 1
    Hdr_53_set.insert("Y");
    Hdr_53.add_attribute("Snt", "SendingTime_t_514784944"); // 1
    Hdr_53_set.insert("SendingTime_t_514784944");
    Hdr_53.add_attribute("OrigSnt", "OrigSendingTime_t_215752207"); // 1
    Hdr_53_set.insert("OrigSendingTime_t_215752207");
    Hdr_53.add_attribute("MsgEncd", "MessageEncoding_t_231510024"); // 1
    Hdr_53_set.insert("MessageEncoding_t_231510024");
    all_values.push_back(Hdr_53_set);
    all_compo_names.insert("Hdr_53_set");

    {
      xml_element Hop_53{"Hop"};
      multiset<string> Hop_53_set;
      Hop_53.add_attribute("ID", "HopCompID_t_1466273656"); // 2
      Hop_53_set.insert("HopCompID_t_1466273656");
      Hop_53.add_attribute("Ref", "815999032"); // 2
      Hop_53_set.insert("815999032");
      Hop_53.add_attribute("Snt", "HopSendingTime_t_1527350635"); // 2
      Hop_53_set.insert("HopSendingTime_t_1527350635");
      all_values.push_back(Hop_53_set);
      all_compo_names.insert("Hop_53_set");

      Hdr_53.add_element(Hop_53);
    }
    elt.add_element(Hdr_53);
  } // end Hdr
  { // Pty
    xml_element Pty_212{"Pty"};
    multiset<string> Pty_212_set;
    Pty_212.add_attribute("ID", "PartyID_t_1385503293"); // 1
    Pty_212_set.insert("PartyID_t_1385503293");
    Pty_212.add_attribute("Src", "9"); // 1
    Pty_212_set.insert("9");
    Pty_212.add_attribute("R", "51"); // 1
    Pty_212_set.insert("51");
    all_values.push_back(Pty_212_set);
    all_compo_names.insert("Pty_212_set");

    {
      xml_element Sub_212{"Sub"};
      multiset<string> Sub_212_set;
      Sub_212.add_attribute("ID", "PartySubID_t_551359601"); // 2
      Sub_212_set.insert("PartySubID_t_551359601");
      Sub_212.add_attribute("Typ", "21"); // 2
      Sub_212_set.insert("21");
      all_values.push_back(Sub_212_set);
      all_compo_names.insert("Sub_212_set");

      Pty_212.add_element(Sub_212);
    }
    elt.add_element(Pty_212);
  } // end Pty
  { // Pty
    xml_element Pty_213{"Pty"};
    multiset<string> Pty_213_set;
    Pty_213.add_attribute("ID", "PartyID_t_1613231656"); // 1
    Pty_213_set.insert("PartyID_t_1613231656");
    Pty_213.add_attribute("Src", "8"); // 1
    Pty_213_set.insert("8");
    Pty_213.add_attribute("R", "39"); // 1
    Pty_213_set.insert("39");
    all_values.push_back(Pty_213_set);
    all_compo_names.insert("Pty_213_set");

    {
      xml_element Sub_213{"Sub"};
      multiset<string> Sub_213_set;
      Sub_213.add_attribute("ID", "PartySubID_t_1284759285"); // 2
      Sub_213_set.insert("PartySubID_t_1284759285");
      Sub_213.add_attribute("Typ", "4"); // 2
      Sub_213_set.insert("4");
      all_values.push_back(Sub_213_set);
      all_compo_names.insert("Sub_213_set");

      Pty_213.add_element(Sub_213);
    }
    elt.add_element(Pty_213);
  } // end Pty
  { // PreAllocMleg
    xml_element PreAllocMleg_1{"PreAllocMleg"};
    multiset<string> PreAllocMleg_1_set;
    PreAllocMleg_1.add_attribute("Acct", "AllocAccount_t_98370356"); // 1
    PreAllocMleg_1_set.insert("AllocAccount_t_98370356");
    PreAllocMleg_1.add_attribute("ActIDSrc", "3"); // 1
    PreAllocMleg_1_set.insert("3");
    PreAllocMleg_1.add_attribute("AllocSettlCcy", "CAN"); // 1
    PreAllocMleg_1_set.insert("CAN");
    PreAllocMleg_1.add_attribute("IndAllocID", "IndividualAllocID_t_1333762050"); // 1
    PreAllocMleg_1_set.insert("IndividualAllocID_t_1333762050");
    PreAllocMleg_1.add_attribute("Qty", "3528642.420000"); // 1
    PreAllocMleg_1_set.insert("3528642.420000");
    all_values.push_back(PreAllocMleg_1_set);
    all_compo_names.insert("PreAllocMleg_1_set");

    {
      xml_element Pty_214{"Pty"};
      multiset<string> Pty_214_set;
      Pty_214.add_attribute("ID", "Nested3PartyID_t_1692976052"); // 2
      Pty_214_set.insert("Nested3PartyID_t_1692976052");
      Pty_214.add_attribute("Src", "1"); // 2
      Pty_214_set.insert("1");
      Pty_214.add_attribute("R", "39"); // 2
      Pty_214_set.insert("39");
      all_values.push_back(Pty_214_set);
      all_compo_names.insert("Pty_214_set");

      {
        xml_element Sub_214{"Sub"};
        multiset<string> Sub_214_set;
        Sub_214.add_attribute("ID", "Nested3PartySubID_t_2100337009"); // 3
        Sub_214_set.insert("Nested3PartySubID_t_2100337009");
        Sub_214.add_attribute("Typ", "26"); // 3
        Sub_214_set.insert("26");
        all_values.push_back(Sub_214_set);
        all_compo_names.insert("Sub_214_set");

        Pty_214.add_element(Sub_214);
      }
      PreAllocMleg_1.add_element(Pty_214);
    }
    elt.add_element(PreAllocMleg_1);
  } // end PreAllocMleg
  { // DsplyInstr
    xml_element DsplyInstr_5{"DsplyInstr"};
    multiset<string> DsplyInstr_5_set;
    DsplyInstr_5.add_attribute("DisplayQty", "727216.840000"); // 1
    DsplyInstr_5_set.insert("727216.840000");
    DsplyInstr_5.add_attribute("SecDspQty", "2974839.230000"); // 1
    DsplyInstr_5_set.insert("2974839.230000");
    DsplyInstr_5.add_attribute("DspWhn", "1"); // 1
    DsplyInstr_5_set.insert("1");
    DsplyInstr_5.add_attribute("DspMthd", "4"); // 1
    DsplyInstr_5_set.insert("4");
    DsplyInstr_5.add_attribute("DsplLwQty", "5289939.470000"); // 1
    DsplyInstr_5_set.insert("5289939.470000");
    DsplyInstr_5.add_attribute("DisplayHighQty", "12352134.060000"); // 1
    DsplyInstr_5_set.insert("12352134.060000");
    DsplyInstr_5.add_attribute("DspMinIncr", "11044729.230000"); // 1
    DsplyInstr_5_set.insert("11044729.230000");
    DsplyInstr_5.add_attribute("RfrshQty", "20563445.820000"); // 1
    DsplyInstr_5_set.insert("20563445.820000");
    all_values.push_back(DsplyInstr_5_set);
    all_compo_names.insert("DsplyInstr_5_set");

    elt.add_element(DsplyInstr_5);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_7{"TrdSes"};
    multiset<string> TrdSes_7_set;
    TrdSes_7.add_attribute("SesID", "5"); // 1
    TrdSes_7_set.insert("5");
    TrdSes_7.add_attribute("SesSub", "7"); // 1
    TrdSes_7_set.insert("7");
    all_values.push_back(TrdSes_7_set);
    all_compo_names.insert("TrdSes_7_set");

    elt.add_element(TrdSes_7);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_8{"TrdSes"};
    multiset<string> TrdSes_8_set;
    TrdSes_8.add_attribute("SesID", "6"); // 1
    TrdSes_8_set.insert("6");
    TrdSes_8.add_attribute("SesSub", "1"); // 1
    TrdSes_8_set.insert("1");
    all_values.push_back(TrdSes_8_set);
    all_compo_names.insert("TrdSes_8_set");

    elt.add_element(TrdSes_8);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_40{"Instrmt"};
    multiset<string> Instrmt_40_set;
    Instrmt_40.add_attribute("Sym", "Symbol_t_637124424"); // 1
    Instrmt_40_set.insert("Symbol_t_637124424");
    Instrmt_40.add_attribute("Sfx", "WI"); // 1
    Instrmt_40_set.insert("WI");
    Instrmt_40.add_attribute("ID", "SecurityID_t_2037596783"); // 1
    Instrmt_40_set.insert("SecurityID_t_2037596783");
    Instrmt_40.add_attribute("Src", "C"); // 1
    Instrmt_40_set.insert("C");
    Instrmt_40.add_attribute("Prod", "11"); // 1
    Instrmt_40_set.insert("11");
    Instrmt_40.add_attribute("ProdCmplx", "ProductComplex_t_2120756275"); // 1
    Instrmt_40_set.insert("ProductComplex_t_2120756275");
    Instrmt_40.add_attribute("SecGrp", "SecurityGroup_t_703145930"); // 1
    Instrmt_40_set.insert("SecurityGroup_t_703145930");
    Instrmt_40.add_attribute("CFI", "CFICode_t_52216409"); // 1
    Instrmt_40_set.insert("CFICode_t_52216409");
    Instrmt_40.add_attribute("SecTyp", "ONITE"); // 1
    Instrmt_40_set.insert("ONITE");
    Instrmt_40.add_attribute("SubTyp", "SecuritySubType_t_1666597497"); // 1
    Instrmt_40_set.insert("SecuritySubType_t_1666597497");
    Instrmt_40.add_attribute("MMY", "1760722432"); // 1
    Instrmt_40_set.insert("1760722432");
    Instrmt_40.add_attribute("MatDt", "MaturityDate_t_1771919936"); // 1
    Instrmt_40_set.insert("MaturityDate_t_1771919936");
    Instrmt_40.add_attribute("MatTm", "2019461739"); // 1
    Instrmt_40_set.insert("2019461739");
    Instrmt_40.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1306214837"); // 1
    Instrmt_40_set.insert("SettleOnOpenFlag_t_1306214837");
    Instrmt_40.add_attribute("AsgnMeth", "1431222864"); // 1
    Instrmt_40_set.insert("1431222864");
    Instrmt_40.add_attribute("Status", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("CpnPmt", "CouponPaymentDate_t_1259068198"); // 1
    Instrmt_40_set.insert("CouponPaymentDate_t_1259068198");
    Instrmt_40.add_attribute("RestrctTyp", "MM"); // 1
    Instrmt_40_set.insert("MM");
    Instrmt_40.add_attribute("Snrty", "SD"); // 1
    Instrmt_40_set.insert("SD");
    Instrmt_40.add_attribute("NotlPctOut", "15565521.210000"); // 1
    Instrmt_40_set.insert("15565521.210000");
    Instrmt_40.add_attribute("OrigNotlPctOut", "4543174.200000"); // 1
    Instrmt_40_set.insert("4543174.200000");
    Instrmt_40.add_attribute("AttchPnt", "1912414.680000"); // 1
    Instrmt_40_set.insert("1912414.680000");
    Instrmt_40.add_attribute("DetchPnt", "20855460.690000"); // 1
    Instrmt_40_set.insert("20855460.690000");
    Instrmt_40.add_attribute("Issued", "IssueDate_t_1689530826"); // 1
    Instrmt_40_set.insert("IssueDate_t_1689530826");
    Instrmt_40.add_attribute("RepoCollSecTyp", "1295714392"); // 1
    Instrmt_40_set.insert("1295714392");
    Instrmt_40.add_attribute("RepoTrm", "1994407003"); // 1
    Instrmt_40_set.insert("1994407003");
    Instrmt_40.add_attribute("RepoRt", "15149088.170000"); // 1
    Instrmt_40_set.insert("15149088.170000");
    Instrmt_40.add_attribute("Fctr", "16382069.600000"); // 1
    Instrmt_40_set.insert("16382069.600000");
    Instrmt_40.add_attribute("CrdRtg", "CreditRating_t_1260823086"); // 1
    Instrmt_40_set.insert("CreditRating_t_1260823086");
    Instrmt_40.add_attribute("Rgstry", "InstrRegistry_t_718247576"); // 1
    Instrmt_40_set.insert("InstrRegistry_t_718247576");
    Instrmt_40.add_attribute("IssuCtry", "384575482"); // 1
    Instrmt_40_set.insert("384575482");
    Instrmt_40.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1897947511"); // 1
    Instrmt_40_set.insert("StateOrProvinceOfIssue_t_1897947511");
    Instrmt_40.add_attribute("Lcl", "LocaleOfIssue_t_1534817991"); // 1
    Instrmt_40_set.insert("LocaleOfIssue_t_1534817991");
    Instrmt_40.add_attribute("Redeem", "RedemptionDate_t_274688617"); // 1
    Instrmt_40_set.insert("RedemptionDate_t_274688617");
    Instrmt_40.add_attribute("StrkPx", "1917715.320000"); // 1
    Instrmt_40_set.insert("1917715.320000");
    Instrmt_40.add_attribute("StrkCcy", "USD"); // 1
    Instrmt_40_set.insert("USD");
    Instrmt_40.add_attribute("StrkMult", "8949174.620000"); // 1
    Instrmt_40_set.insert("8949174.620000");
    Instrmt_40.add_attribute("StrkValu", "15408804.530000"); // 1
    Instrmt_40_set.insert("15408804.530000");
    Instrmt_40.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("StrkPxBndryMeth", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("StrkPxBndryPrcsn", "11541192.370000"); // 1
    Instrmt_40_set.insert("11541192.370000");
    Instrmt_40.add_attribute("PxDtrmnMeth", "2"); // 1
    Instrmt_40_set.insert("2");
    Instrmt_40.add_attribute("OptAt", "286009402"); // 1
    Instrmt_40_set.insert("286009402");
    Instrmt_40.add_attribute("Mult", "3128504.260000"); // 1
    Instrmt_40_set.insert("3128504.260000");
    Instrmt_40.add_attribute("MultTyp", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("FlowSchedTyp", "0"); // 1
    Instrmt_40_set.insert("0");
    Instrmt_40.add_attribute("MinPxIncr", "15719186.250000"); // 1
    Instrmt_40_set.insert("15719186.250000");
    Instrmt_40.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_279672303"); // 1
    Instrmt_40_set.insert("MinPriceIncrementAmount_t_279672303");
    Instrmt_40.add_attribute("UOM", "Gal"); // 1
    Instrmt_40_set.insert("Gal");
    Instrmt_40.add_attribute("UOMQty", "9809870.980000"); // 1
    Instrmt_40_set.insert("9809870.980000");
    Instrmt_40.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_40_set.insert("Alw");
    Instrmt_40.add_attribute("PxUOMQty", "2100643.400000"); // 1
    Instrmt_40_set.insert("2100643.400000");
    Instrmt_40.add_attribute("SettlMeth", "P"); // 1
    Instrmt_40_set.insert("P");
    Instrmt_40.add_attribute("ExerStyle", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("OptPayAmt", "OptPayoutAmount_t_765972875"); // 1
    Instrmt_40_set.insert("OptPayoutAmount_t_765972875");
    Instrmt_40.add_attribute("PxQteMeth", "INT"); // 1
    Instrmt_40_set.insert("INT");
    Instrmt_40.add_attribute("ValMeth", "EQTY"); // 1
    Instrmt_40_set.insert("EQTY");
    Instrmt_40.add_attribute("ListMeth", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("CapPx", "3617096.460000"); // 1
    Instrmt_40_set.insert("3617096.460000");
    Instrmt_40.add_attribute("FlrPx", "13810775.270000"); // 1
    Instrmt_40_set.insert("13810775.270000");
    Instrmt_40.add_attribute("PutCall", "0"); // 1
    Instrmt_40_set.insert("0");
    Instrmt_40.add_attribute("FlexInd", "true"); // 1
    Instrmt_40_set.insert("true");
    Instrmt_40.add_attribute("FlexProdElig", "true"); // 1
    Instrmt_40_set.insert("true");
    Instrmt_40.add_attribute("TmUnit", "Yr"); // 1
    Instrmt_40_set.insert("Yr");
    Instrmt_40.add_attribute("CpnRt", "12377080.340000"); // 1
    Instrmt_40_set.insert("12377080.340000");
    Instrmt_40.add_attribute("Exch", "SecurityExchange_t_1903727388"); // 1
    Instrmt_40_set.insert("SecurityExchange_t_1903727388");
    Instrmt_40.add_attribute("PosLmt", "716465171"); // 1
    Instrmt_40_set.insert("716465171");
    Instrmt_40.add_attribute("NTPosLmt", "631104839"); // 1
    Instrmt_40_set.insert("631104839");
    Instrmt_40.add_attribute("Issr", "Issuer_t_442362869"); // 1
    Instrmt_40_set.insert("Issuer_t_442362869");
    Instrmt_40.add_attribute("EncIssrLen", "1130496483"); // 1
    Instrmt_40_set.insert("1130496483");
    Instrmt_40.add_attribute("EncIssr", "EncodedIssuer_t_1785224076"); // 1
    Instrmt_40_set.insert("EncodedIssuer_t_1785224076");
    Instrmt_40.add_attribute("Desc", "SecurityDesc_t_752918287"); // 1
    Instrmt_40_set.insert("SecurityDesc_t_752918287");
    Instrmt_40.add_attribute("EncSecDescLen", "1416505885"); // 1
    Instrmt_40_set.insert("1416505885");
    Instrmt_40.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_2098074503"); // 1
    Instrmt_40_set.insert("EncodedSecurityDesc_t_2098074503");
    Instrmt_40.add_attribute("Pool", "Pool_t_347212920"); // 1
    Instrmt_40_set.insert("Pool_t_347212920");
    Instrmt_40.add_attribute("CSetMo", "1532561180"); // 1
    Instrmt_40_set.insert("1532561180");
    Instrmt_40.add_attribute("CPPgm", "1"); // 1
    Instrmt_40_set.insert("1");
    Instrmt_40.add_attribute("CPRegT", "CPRegType_t_626885224"); // 1
    Instrmt_40_set.insert("CPRegType_t_626885224");
    Instrmt_40.add_attribute("Dated", "DatedDate_t_1551384052"); // 1
    Instrmt_40_set.insert("DatedDate_t_1551384052");
    Instrmt_40.add_attribute("IntAcrl", "InterestAccrualDate_t_356012930"); // 1
    Instrmt_40_set.insert("InterestAccrualDate_t_356012930");
    all_values.push_back(Instrmt_40_set);
    all_compo_names.insert("Instrmt_40_set");

    {
      xml_element AID_43{"AID"};
      multiset<string> AID_43_set;
      AID_43.add_attribute("AltID", "SecurityAltID_t_1360874947"); // 2
      AID_43_set.insert("SecurityAltID_t_1360874947");
      AID_43.add_attribute("AltIDSrc", "2"); // 2
      AID_43_set.insert("2");
      all_values.push_back(AID_43_set);
      all_compo_names.insert("AID_43_set");

      Instrmt_40.add_element(AID_43);
    }
    {
      xml_element SecXML_43{"SecXML"};
      multiset<string> SecXML_43_set;
      SecXML_43.add_attribute("Schema", "SecurityXMLSchema_t_1275062450"); // 2
      SecXML_43_set.insert("SecurityXMLSchema_t_1275062450");
      all_values.push_back(SecXML_43_set);
      all_compo_names.insert("SecXML_43_set");

      Instrmt_40.add_element(SecXML_43);
    }
    {
      xml_element Evnt_43{"Evnt"};
      multiset<string> Evnt_43_set;
      Evnt_43.add_attribute("EventTyp", "9"); // 2
      Evnt_43_set.insert("9");
      Evnt_43.add_attribute("Dt", "EventDate_t_1119743477"); // 2
      Evnt_43_set.insert("EventDate_t_1119743477");
      Evnt_43.add_attribute("Tm", "EventTime_t_2041035325"); // 2
      Evnt_43_set.insert("EventTime_t_2041035325");
      Evnt_43.add_attribute("Px", "12803739.190000"); // 2
      Evnt_43_set.insert("12803739.190000");
      Evnt_43.add_attribute("Txt", "EventText_t_2116245522"); // 2
      Evnt_43_set.insert("EventText_t_2116245522");
      all_values.push_back(Evnt_43_set);
      all_compo_names.insert("Evnt_43_set");

      Instrmt_40.add_element(Evnt_43);
    }
    {
      xml_element Pty_215{"Pty"};
      multiset<string> Pty_215_set;
      Pty_215.add_attribute("ID", "InstrumentPartyID_t_1920347638"); // 2
      Pty_215_set.insert("InstrumentPartyID_t_1920347638");
      Pty_215.add_attribute("Src", "F"); // 2
      Pty_215_set.insert("F");
      Pty_215.add_attribute("R", "39"); // 2
      Pty_215_set.insert("39");
      all_values.push_back(Pty_215_set);
      all_compo_names.insert("Pty_215_set");

      {
        xml_element Sub_215{"Sub"};
        multiset<string> Sub_215_set;
        Sub_215.add_attribute("ID", "InstrumentPartySubID_t_1550123815"); // 3
        Sub_215_set.insert("InstrumentPartySubID_t_1550123815");
        Sub_215.add_attribute("Typ", "24"); // 3
        Sub_215_set.insert("24");
        all_values.push_back(Sub_215_set);
        all_compo_names.insert("Sub_215_set");

        Pty_215.add_element(Sub_215);
      }
      Instrmt_40.add_element(Pty_215);
    }
    {
      xml_element CmplxEvnt_40{"CmplxEvnt"};
      multiset<string> CmplxEvnt_40_set;
      CmplxEvnt_40.add_attribute("Typ", "5"); // 2
      CmplxEvnt_40_set.insert("5");
      CmplxEvnt_40.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1371671524"); // 2
      CmplxEvnt_40_set.insert("ComplexOptPayoutAmount_t_1371671524");
      CmplxEvnt_40.add_attribute("Px", "4813519.420000"); // 2
      CmplxEvnt_40_set.insert("4813519.420000");
      CmplxEvnt_40.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_40_set.insert("3");
      CmplxEvnt_40.add_attribute("PxBndryPrcsn", "20881366.950000"); // 2
      CmplxEvnt_40_set.insert("20881366.950000");
      CmplxEvnt_40.add_attribute("PxTmTyp", "1"); // 2
      CmplxEvnt_40_set.insert("1");
      CmplxEvnt_40.add_attribute("Cond", "2"); // 2
      CmplxEvnt_40_set.insert("2");
      all_values.push_back(CmplxEvnt_40_set);
      all_compo_names.insert("CmplxEvnt_40_set");

      {
        xml_element EvntDts_40{"EvntDts"};
        multiset<string> EvntDts_40_set;
        EvntDts_40.add_attribute("StartDt", "ComplexEventStartDate_t_1071149530"); // 3
        EvntDts_40_set.insert("ComplexEventStartDate_t_1071149530");
        EvntDts_40.add_attribute("EndDt", "ComplexEventEndDate_t_750197209"); // 3
        EvntDts_40_set.insert("ComplexEventEndDate_t_750197209");
        all_values.push_back(EvntDts_40_set);
        all_compo_names.insert("EvntDts_40_set");

        {
          xml_element EvntTms_40{"EvntTms"};
          multiset<string> EvntTms_40_set;
          EvntTms_40.add_attribute("StartTm", "1809646794"); // 4
          EvntTms_40_set.insert("1809646794");
          EvntTms_40.add_attribute("EndTm", "340171768"); // 4
          EvntTms_40_set.insert("340171768");
          all_values.push_back(EvntTms_40_set);
          all_compo_names.insert("EvntTms_40_set");

          EvntDts_40.add_element(EvntTms_40);
        }
        CmplxEvnt_40.add_element(EvntDts_40);
      }
      Instrmt_40.add_element(CmplxEvnt_40);
    }
    elt.add_element(Instrmt_40);
  } // end Instrmt
  { // Undly
    xml_element Undly_52{"Undly"};
    multiset<string> Undly_52_set;
    Undly_52.add_attribute("Sym", "UnderlyingSymbol_t_9376066"); // 1
    Undly_52_set.insert("UnderlyingSymbol_t_9376066");
    Undly_52.add_attribute("Sfx", "CD"); // 1
    Undly_52_set.insert("CD");
    Undly_52.add_attribute("ID", "UnderlyingSecurityID_t_75813896"); // 1
    Undly_52_set.insert("UnderlyingSecurityID_t_75813896");
    Undly_52.add_attribute("Src", "H"); // 1
    Undly_52_set.insert("H");
    Undly_52.add_attribute("Prod", "5"); // 1
    Undly_52_set.insert("5");
    Undly_52.add_attribute("CFI", "UnderlyingCFICode_t_431826827"); // 1
    Undly_52_set.insert("UnderlyingCFICode_t_431826827");
    Undly_52.add_attribute("SecTyp", "MPP"); // 1
    Undly_52_set.insert("MPP");
    Undly_52.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_890598098"); // 1
    Undly_52_set.insert("UnderlyingSecuritySubType_t_890598098");
    Undly_52.add_attribute("MMY", "1706889277"); // 1
    Undly_52_set.insert("1706889277");
    Undly_52.add_attribute("Mat", "UnderlyingMaturityDate_t_1486564439"); // 1
    Undly_52_set.insert("UnderlyingMaturityDate_t_1486564439");
    Undly_52.add_attribute("MatTm", "2010341575"); // 1
    Undly_52_set.insert("2010341575");
    Undly_52.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1600440954"); // 1
    Undly_52_set.insert("UnderlyingCouponPaymentDate_t_1600440954");
    Undly_52.add_attribute("RestrctTyp", "MM"); // 1
    Undly_52_set.insert("MM");
    Undly_52.add_attribute("Snrty", "SD"); // 1
    Undly_52_set.insert("SD");
    Undly_52.add_attribute("NotlPctOut", "13733049.440000"); // 1
    Undly_52_set.insert("13733049.440000");
    Undly_52.add_attribute("OrigNotlPctOut", "1140546.280000"); // 1
    Undly_52_set.insert("1140546.280000");
    Undly_52.add_attribute("AttchPnt", "11814592.030000"); // 1
    Undly_52_set.insert("11814592.030000");
    Undly_52.add_attribute("DetchPnt", "7759451.110000"); // 1
    Undly_52_set.insert("7759451.110000");
    Undly_52.add_attribute("Issued", "UnderlyingIssueDate_t_1505182184"); // 1
    Undly_52_set.insert("UnderlyingIssueDate_t_1505182184");
    Undly_52.add_attribute("RepoCollSecTyp", "2039581101"); // 1
    Undly_52_set.insert("2039581101");
    Undly_52.add_attribute("RepoTrm", "132987"); // 1
    Undly_52_set.insert("132987");
    Undly_52.add_attribute("RepoRt", "19865341.260000"); // 1
    Undly_52_set.insert("19865341.260000");
    Undly_52.add_attribute("Fctr", "5064630.900000"); // 1
    Undly_52_set.insert("5064630.900000");
    Undly_52.add_attribute("CrdRtg", "UnderlyingCreditRating_t_2088269683"); // 1
    Undly_52_set.insert("UnderlyingCreditRating_t_2088269683");
    Undly_52.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_951507259"); // 1
    Undly_52_set.insert("UnderlyingInstrRegistry_t_951507259");
    Undly_52.add_attribute("Ctry", "1563191597"); // 1
    Undly_52_set.insert("1563191597");
    Undly_52.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_1011935565"); // 1
    Undly_52_set.insert("UnderlyingStateOrProvinceOfIssue_t_1011935565");
    Undly_52.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1701704469"); // 1
    Undly_52_set.insert("UnderlyingLocaleOfIssue_t_1701704469");
    Undly_52.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1225354743"); // 1
    Undly_52_set.insert("UnderlyingRedemptionDate_t_1225354743");
    Undly_52.add_attribute("StrkPx", "13521073.330000"); // 1
    Undly_52_set.insert("13521073.330000");
    Undly_52.add_attribute("StrkCcy", "GBP"); // 1
    Undly_52_set.insert("GBP");
    Undly_52.add_attribute("OptA", "1077356634"); // 1
    Undly_52_set.insert("1077356634");
    Undly_52.add_attribute("Mult", "3308227.820000"); // 1
    Undly_52_set.insert("3308227.820000");
    Undly_52.add_attribute("MultTyp", "1"); // 1
    Undly_52_set.insert("1");
    Undly_52.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_52_set.insert("4");
    Undly_52.add_attribute("UOM", "lbs"); // 1
    Undly_52_set.insert("lbs");
    Undly_52.add_attribute("UOMQty", "17206446.900000"); // 1
    Undly_52_set.insert("17206446.900000");
    Undly_52.add_attribute("PxUOM", "MWh"); // 1
    Undly_52_set.insert("MWh");
    Undly_52.add_attribute("PxUOMQty", "3220552.380000"); // 1
    Undly_52_set.insert("3220552.380000");
    Undly_52.add_attribute("TmUnit", "D"); // 1
    Undly_52_set.insert("D");
    Undly_52.add_attribute("ExerStyle", "2"); // 1
    Undly_52_set.insert("2");
    Undly_52.add_attribute("CpnRt", "19224961.920000"); // 1
    Undly_52_set.insert("19224961.920000");
    Undly_52.add_attribute("Exch", "UnderlyingSecurityExchange_t_1679180192"); // 1
    Undly_52_set.insert("UnderlyingSecurityExchange_t_1679180192");
    Undly_52.add_attribute("Issr", "UnderlyingIssuer_t_791582166"); // 1
    Undly_52_set.insert("UnderlyingIssuer_t_791582166");
    Undly_52.add_attribute("EncUndIssrLen", "1148317488"); // 1
    Undly_52_set.insert("1148317488");
    Undly_52.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1793234820"); // 1
    Undly_52_set.insert("EncodedUnderlyingIssuer_t_1793234820");
    Undly_52.add_attribute("Desc", "UnderlyingSecurityDesc_t_1973041370"); // 1
    Undly_52_set.insert("UnderlyingSecurityDesc_t_1973041370");
    Undly_52.add_attribute("EncUndSecDescLen", "1924262600"); // 1
    Undly_52_set.insert("1924262600");
    Undly_52.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1150933357"); // 1
    Undly_52_set.insert("EncodedUnderlyingSecurityDesc_t_1150933357");
    Undly_52.add_attribute("CPPgm", "UnderlyingCPProgram_t_1865138823"); // 1
    Undly_52_set.insert("UnderlyingCPProgram_t_1865138823");
    Undly_52.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1924395587"); // 1
    Undly_52_set.insert("UnderlyingCPRegType_t_1924395587");
    Undly_52.add_attribute("AllocPct", "9899838.350000"); // 1
    Undly_52_set.insert("9899838.350000");
    Undly_52.add_attribute("Ccy", "JPY"); // 1
    Undly_52_set.insert("JPY");
    Undly_52.add_attribute("Qty", "19414910.950000"); // 1
    Undly_52_set.insert("19414910.950000");
    Undly_52.add_attribute("SettlTyp", "4"); // 1
    Undly_52_set.insert("4");
    Undly_52.add_attribute("CashAmt", "UnderlyingCashAmount_t_729633540"); // 1
    Undly_52_set.insert("UnderlyingCashAmount_t_729633540");
    Undly_52.add_attribute("CashTyp", "FIXED"); // 1
    Undly_52_set.insert("FIXED");
    Undly_52.add_attribute("Px", "8651809.580000"); // 1
    Undly_52_set.insert("8651809.580000");
    Undly_52.add_attribute("DirtPx", "20817408.730000"); // 1
    Undly_52_set.insert("20817408.730000");
    Undly_52.add_attribute("EndPx", "17507208.010000"); // 1
    Undly_52_set.insert("17507208.010000");
    Undly_52.add_attribute("StartVal", "UnderlyingStartValue_t_2099911768"); // 1
    Undly_52_set.insert("UnderlyingStartValue_t_2099911768");
    Undly_52.add_attribute("CurVal", "UnderlyingCurrentValue_t_1011613859"); // 1
    Undly_52_set.insert("UnderlyingCurrentValue_t_1011613859");
    Undly_52.add_attribute("EndVal", "UnderlyingEndValue_t_2081543583"); // 1
    Undly_52_set.insert("UnderlyingEndValue_t_2081543583");
    Undly_52.add_attribute("AdjQty", "18234202.210000"); // 1
    Undly_52_set.insert("18234202.210000");
    Undly_52.add_attribute("FxRate", "12181201.980000"); // 1
    Undly_52_set.insert("12181201.980000");
    Undly_52.add_attribute("FxRateCalc", "M"); // 1
    Undly_52_set.insert("M");
    Undly_52.add_attribute("CapValu", "UnderlyingCapValue_t_1396581263"); // 1
    Undly_52_set.insert("UnderlyingCapValue_t_1396581263");
    Undly_52.add_attribute("SetMeth", "UnderlyingSettlMethod_t_167740987"); // 1
    Undly_52_set.insert("UnderlyingSettlMethod_t_167740987");
    Undly_52.add_attribute("PutCall", "1018764782"); // 1
    Undly_52_set.insert("1018764782");
    all_values.push_back(Undly_52_set);
    all_compo_names.insert("Undly_52_set");

    {
      xml_element UndAID_52{"UndAID"};
      multiset<string> UndAID_52_set;
      UndAID_52.add_attribute("AltID", "UnderlyingSecurityAltID_t_308823097"); // 2
      UndAID_52_set.insert("UnderlyingSecurityAltID_t_308823097");
      UndAID_52.add_attribute("AltIDSrc", "7"); // 2
      UndAID_52_set.insert("7");
      all_values.push_back(UndAID_52_set);
      all_compo_names.insert("UndAID_52_set");

      Undly_52.add_element(UndAID_52);
    }
    {
      xml_element Stip_83{"Stip"};
      multiset<string> Stip_83_set;
      Stip_83.add_attribute("Typ", "SECTOR"); // 2
      Stip_83_set.insert("SECTOR");
      Stip_83.add_attribute("Val", "UnderlyingStipValue_t_1988003289"); // 2
      Stip_83_set.insert("UnderlyingStipValue_t_1988003289");
      all_values.push_back(Stip_83_set);
      all_compo_names.insert("Stip_83_set");

      Undly_52.add_element(Stip_83);
    }
    {
      xml_element Pty_216{"Pty"};
      multiset<string> Pty_216_set;
      Pty_216.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1919285518"); // 2
      Pty_216_set.insert("UnderlyingInstrumentPartyID_t_1919285518");
      Pty_216.add_attribute("Src", "8"); // 2
      Pty_216_set.insert("8");
      Pty_216.add_attribute("R", "75"); // 2
      Pty_216_set.insert("75");
      all_values.push_back(Pty_216_set);
      all_compo_names.insert("Pty_216_set");

      {
        xml_element Sub_216{"Sub"};
        multiset<string> Sub_216_set;
        Sub_216.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1744843240"); // 3
        Sub_216_set.insert("UnderlyingInstrumentPartySubID_t_1744843240");
        Sub_216.add_attribute("Typ", "29"); // 3
        Sub_216_set.insert("29");
        all_values.push_back(Sub_216_set);
        all_compo_names.insert("Sub_216_set");

        Pty_216.add_element(Sub_216);
      }
      Undly_52.add_element(Pty_216);
    }
    elt.add_element(Undly_52);
  } // end Undly
  { // Undly
    xml_element Undly_53{"Undly"};
    multiset<string> Undly_53_set;
    Undly_53.add_attribute("Sym", "UnderlyingSymbol_t_637204170"); // 1
    Undly_53_set.insert("UnderlyingSymbol_t_637204170");
    Undly_53.add_attribute("Sfx", "WI"); // 1
    Undly_53_set.insert("WI");
    Undly_53.add_attribute("ID", "UnderlyingSecurityID_t_1495785706"); // 1
    Undly_53_set.insert("UnderlyingSecurityID_t_1495785706");
    Undly_53.add_attribute("Src", "5"); // 1
    Undly_53_set.insert("5");
    Undly_53.add_attribute("Prod", "6"); // 1
    Undly_53_set.insert("6");
    Undly_53.add_attribute("CFI", "UnderlyingCFICode_t_1213483681"); // 1
    Undly_53_set.insert("UnderlyingCFICode_t_1213483681");
    Undly_53.add_attribute("SecTyp", "FOR"); // 1
    Undly_53_set.insert("FOR");
    Undly_53.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1326442896"); // 1
    Undly_53_set.insert("UnderlyingSecuritySubType_t_1326442896");
    Undly_53.add_attribute("MMY", "1943117221"); // 1
    Undly_53_set.insert("1943117221");
    Undly_53.add_attribute("Mat", "UnderlyingMaturityDate_t_769423721"); // 1
    Undly_53_set.insert("UnderlyingMaturityDate_t_769423721");
    Undly_53.add_attribute("MatTm", "44140206"); // 1
    Undly_53_set.insert("44140206");
    Undly_53.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_1877374446"); // 1
    Undly_53_set.insert("UnderlyingCouponPaymentDate_t_1877374446");
    Undly_53.add_attribute("RestrctTyp", "MM"); // 1
    Undly_53_set.insert("MM");
    Undly_53.add_attribute("Snrty", "SB"); // 1
    Undly_53_set.insert("SB");
    Undly_53.add_attribute("NotlPctOut", "7415046.580000"); // 1
    Undly_53_set.insert("7415046.580000");
    Undly_53.add_attribute("OrigNotlPctOut", "3067208.100000"); // 1
    Undly_53_set.insert("3067208.100000");
    Undly_53.add_attribute("AttchPnt", "18199885.480000"); // 1
    Undly_53_set.insert("18199885.480000");
    Undly_53.add_attribute("DetchPnt", "19596248.560000"); // 1
    Undly_53_set.insert("19596248.560000");
    Undly_53.add_attribute("Issued", "UnderlyingIssueDate_t_1003430354"); // 1
    Undly_53_set.insert("UnderlyingIssueDate_t_1003430354");
    Undly_53.add_attribute("RepoCollSecTyp", "1069086163"); // 1
    Undly_53_set.insert("1069086163");
    Undly_53.add_attribute("RepoTrm", "2127365844"); // 1
    Undly_53_set.insert("2127365844");
    Undly_53.add_attribute("RepoRt", "20221951.370000"); // 1
    Undly_53_set.insert("20221951.370000");
    Undly_53.add_attribute("Fctr", "13779092.600000"); // 1
    Undly_53_set.insert("13779092.600000");
    Undly_53.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1107585548"); // 1
    Undly_53_set.insert("UnderlyingCreditRating_t_1107585548");
    Undly_53.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_668488815"); // 1
    Undly_53_set.insert("UnderlyingInstrRegistry_t_668488815");
    Undly_53.add_attribute("Ctry", "1218428901"); // 1
    Undly_53_set.insert("1218428901");
    Undly_53.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_879387418"); // 1
    Undly_53_set.insert("UnderlyingStateOrProvinceOfIssue_t_879387418");
    Undly_53.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_463099982"); // 1
    Undly_53_set.insert("UnderlyingLocaleOfIssue_t_463099982");
    Undly_53.add_attribute("Redeem", "UnderlyingRedemptionDate_t_704699715"); // 1
    Undly_53_set.insert("UnderlyingRedemptionDate_t_704699715");
    Undly_53.add_attribute("StrkPx", "4767470.110000"); // 1
    Undly_53_set.insert("4767470.110000");
    Undly_53.add_attribute("StrkCcy", "CHF"); // 1
    Undly_53_set.insert("CHF");
    Undly_53.add_attribute("OptA", "1939245426"); // 1
    Undly_53_set.insert("1939245426");
    Undly_53.add_attribute("Mult", "15302758.080000"); // 1
    Undly_53_set.insert("15302758.080000");
    Undly_53.add_attribute("MultTyp", "1"); // 1
    Undly_53_set.insert("1");
    Undly_53.add_attribute("FlowSchedTyp", "4"); // 1
    Undly_53_set.insert("4");
    Undly_53.add_attribute("UOM", "tn"); // 1
    Undly_53_set.insert("tn");
    Undly_53.add_attribute("UOMQty", "953200.480000"); // 1
    Undly_53_set.insert("953200.480000");
    Undly_53.add_attribute("PxUOM", "MWh"); // 1
    Undly_53_set.insert("MWh");
    Undly_53.add_attribute("PxUOMQty", "3919094.140000"); // 1
    Undly_53_set.insert("3919094.140000");
    Undly_53.add_attribute("TmUnit", "Min"); // 1
    Undly_53_set.insert("Min");
    Undly_53.add_attribute("ExerStyle", "1"); // 1
    Undly_53_set.insert("1");
    Undly_53.add_attribute("CpnRt", "1218002.120000"); // 1
    Undly_53_set.insert("1218002.120000");
    Undly_53.add_attribute("Exch", "UnderlyingSecurityExchange_t_1237404644"); // 1
    Undly_53_set.insert("UnderlyingSecurityExchange_t_1237404644");
    Undly_53.add_attribute("Issr", "UnderlyingIssuer_t_698046241"); // 1
    Undly_53_set.insert("UnderlyingIssuer_t_698046241");
    Undly_53.add_attribute("EncUndIssrLen", "863304870"); // 1
    Undly_53_set.insert("863304870");
    Undly_53.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1544125454"); // 1
    Undly_53_set.insert("EncodedUnderlyingIssuer_t_1544125454");
    Undly_53.add_attribute("Desc", "UnderlyingSecurityDesc_t_370551141"); // 1
    Undly_53_set.insert("UnderlyingSecurityDesc_t_370551141");
    Undly_53.add_attribute("EncUndSecDescLen", "675446079"); // 1
    Undly_53_set.insert("675446079");
    Undly_53.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_400072160"); // 1
    Undly_53_set.insert("EncodedUnderlyingSecurityDesc_t_400072160");
    Undly_53.add_attribute("CPPgm", "UnderlyingCPProgram_t_1439637304"); // 1
    Undly_53_set.insert("UnderlyingCPProgram_t_1439637304");
    Undly_53.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_655328275"); // 1
    Undly_53_set.insert("UnderlyingCPRegType_t_655328275");
    Undly_53.add_attribute("AllocPct", "2747836.490000"); // 1
    Undly_53_set.insert("2747836.490000");
    Undly_53.add_attribute("Ccy", "CHF"); // 1
    Undly_53_set.insert("CHF");
    Undly_53.add_attribute("Qty", "9432724.650000"); // 1
    Undly_53_set.insert("9432724.650000");
    Undly_53.add_attribute("SettlTyp", "5"); // 1
    Undly_53_set.insert("5");
    Undly_53.add_attribute("CashAmt", "UnderlyingCashAmount_t_494817593"); // 1
    Undly_53_set.insert("UnderlyingCashAmount_t_494817593");
    Undly_53.add_attribute("CashTyp", "DIFF"); // 1
    Undly_53_set.insert("DIFF");
    Undly_53.add_attribute("Px", "4457078.850000"); // 1
    Undly_53_set.insert("4457078.850000");
    Undly_53.add_attribute("DirtPx", "9715646.040000"); // 1
    Undly_53_set.insert("9715646.040000");
    Undly_53.add_attribute("EndPx", "14408625.490000"); // 1
    Undly_53_set.insert("14408625.490000");
    Undly_53.add_attribute("StartVal", "UnderlyingStartValue_t_1787611771"); // 1
    Undly_53_set.insert("UnderlyingStartValue_t_1787611771");
    Undly_53.add_attribute("CurVal", "UnderlyingCurrentValue_t_763326383"); // 1
    Undly_53_set.insert("UnderlyingCurrentValue_t_763326383");
    Undly_53.add_attribute("EndVal", "UnderlyingEndValue_t_823654709"); // 1
    Undly_53_set.insert("UnderlyingEndValue_t_823654709");
    Undly_53.add_attribute("AdjQty", "4617363.660000"); // 1
    Undly_53_set.insert("4617363.660000");
    Undly_53.add_attribute("FxRate", "942211.940000"); // 1
    Undly_53_set.insert("942211.940000");
    Undly_53.add_attribute("FxRateCalc", "M"); // 1
    Undly_53_set.insert("M");
    Undly_53.add_attribute("CapValu", "UnderlyingCapValue_t_557056415"); // 1
    Undly_53_set.insert("UnderlyingCapValue_t_557056415");
    Undly_53.add_attribute("SetMeth", "UnderlyingSettlMethod_t_751558902"); // 1
    Undly_53_set.insert("UnderlyingSettlMethod_t_751558902");
    Undly_53.add_attribute("PutCall", "1811839964"); // 1
    Undly_53_set.insert("1811839964");
    all_values.push_back(Undly_53_set);
    all_compo_names.insert("Undly_53_set");

    {
      xml_element UndAID_53{"UndAID"};
      multiset<string> UndAID_53_set;
      UndAID_53.add_attribute("AltID", "UnderlyingSecurityAltID_t_1421800184"); // 2
      UndAID_53_set.insert("UnderlyingSecurityAltID_t_1421800184");
      UndAID_53.add_attribute("AltIDSrc", "1"); // 2
      UndAID_53_set.insert("1");
      all_values.push_back(UndAID_53_set);
      all_compo_names.insert("UndAID_53_set");

      Undly_53.add_element(UndAID_53);
    }
    {
      xml_element Stip_84{"Stip"};
      multiset<string> Stip_84_set;
      Stip_84.add_attribute("Typ", "ISSUER"); // 2
      Stip_84_set.insert("ISSUER");
      Stip_84.add_attribute("Val", "UnderlyingStipValue_t_511721180"); // 2
      Stip_84_set.insert("UnderlyingStipValue_t_511721180");
      all_values.push_back(Stip_84_set);
      all_compo_names.insert("Stip_84_set");

      Undly_53.add_element(Stip_84);
    }
    {
      xml_element Pty_217{"Pty"};
      multiset<string> Pty_217_set;
      Pty_217.add_attribute("ID", "UnderlyingInstrumentPartyID_t_3599409"); // 2
      Pty_217_set.insert("UnderlyingInstrumentPartyID_t_3599409");
      Pty_217.add_attribute("Src", "G"); // 2
      Pty_217_set.insert("G");
      Pty_217.add_attribute("R", "40"); // 2
      Pty_217_set.insert("40");
      all_values.push_back(Pty_217_set);
      all_compo_names.insert("Pty_217_set");

      {
        xml_element Sub_217{"Sub"};
        multiset<string> Sub_217_set;
        Sub_217.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_374150550"); // 3
        Sub_217_set.insert("UnderlyingInstrumentPartySubID_t_374150550");
        Sub_217.add_attribute("Typ", "23"); // 3
        Sub_217_set.insert("23");
        all_values.push_back(Sub_217_set);
        all_compo_names.insert("Sub_217_set");

        Pty_217.add_element(Sub_217);
      }
      Undly_53.add_element(Pty_217);
    }
    elt.add_element(Undly_53);
  } // end Undly
  { // Ord
    xml_element Ord_2{"Ord"};
    multiset<string> Ord_2_set;
    Ord_2.add_attribute("Qty", "18137878.540000"); // 1
    Ord_2_set.insert("18137878.540000");
    Ord_2.add_attribute("SwapTyp", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("LegAllocID", "LegAllocID_t_583218796"); // 1
    Ord_2_set.insert("LegAllocID_t_583218796");
    Ord_2.add_attribute("PosEfct", "F"); // 1
    Ord_2_set.insert("F");
    Ord_2.add_attribute("Cover", "0"); // 1
    Ord_2_set.insert("0");
    Ord_2.add_attribute("RefID", "LegRefID_t_1526491261"); // 1
    Ord_2_set.insert("LegRefID_t_1526491261");
    Ord_2.add_attribute("SettlTyp", "2"); // 1
    Ord_2_set.insert("2");
    Ord_2.add_attribute("SettlDt", "LegSettlDate_t_2090483521"); // 1
    Ord_2_set.insert("LegSettlDate_t_2090483521");
    Ord_2.add_attribute("SettlCcy", "CAN"); // 1
    Ord_2_set.insert("CAN");
    Ord_2.add_attribute("OrdQty", "9145644.780000"); // 1
    Ord_2_set.insert("9145644.780000");
    Ord_2.add_attribute("LegVolatility", "787589.620000"); // 1
    Ord_2_set.insert("787589.620000");
    Ord_2.add_attribute("LegDividendYield", "1632113.020000"); // 1
    Ord_2_set.insert("1632113.020000");
    Ord_2.add_attribute("LegCurrencyRatio", "16778908.610000"); // 1
    Ord_2_set.insert("16778908.610000");
    Ord_2.add_attribute("LegExecInst", "l"); // 1
    Ord_2_set.insert("l");
    all_values.push_back(Ord_2_set);
    all_compo_names.insert("Ord_2_set");

    {
      xml_element Leg_52{"Leg"};
      multiset<string> Leg_52_set;
      Leg_52.add_attribute("Sym", "LegSymbol_t_624947669"); // 2
      Leg_52_set.insert("LegSymbol_t_624947669");
      Leg_52.add_attribute("Sfx", "WI"); // 2
      Leg_52_set.insert("WI");
      Leg_52.add_attribute("ID", "LegSecurityID_t_174860573"); // 2
      Leg_52_set.insert("LegSecurityID_t_174860573");
      Leg_52.add_attribute("Src", "9"); // 2
      Leg_52_set.insert("9");
      Leg_52.add_attribute("Prod", "13"); // 2
      Leg_52_set.insert("13");
      Leg_52.add_attribute("CFI", "LegCFICode_t_1986700537"); // 2
      Leg_52_set.insert("LegCFICode_t_1986700537");
      Leg_52.add_attribute("SecTyp", "CMB"); // 2
      Leg_52_set.insert("CMB");
      Leg_52.add_attribute("SecSubTyp", "LegSecuritySubType_t_1829224125"); // 2
      Leg_52_set.insert("LegSecuritySubType_t_1829224125");
      Leg_52.add_attribute("MMY", "1772857065"); // 2
      Leg_52_set.insert("1772857065");
      Leg_52.add_attribute("Mat", "LegMaturityDate_t_968041801"); // 2
      Leg_52_set.insert("LegMaturityDate_t_968041801");
      Leg_52.add_attribute("MatTm", "1832823534"); // 2
      Leg_52_set.insert("1832823534");
      Leg_52.add_attribute("CpnPmt", "LegCouponPaymentDate_t_274834816"); // 2
      Leg_52_set.insert("LegCouponPaymentDate_t_274834816");
      Leg_52.add_attribute("Issued", "LegIssueDate_t_876404787"); // 2
      Leg_52_set.insert("LegIssueDate_t_876404787");
      Leg_52.add_attribute("RepoCollSecTyp", "59490436"); // 2
      Leg_52_set.insert("59490436");
      Leg_52.add_attribute("RepoTrm", "1599742294"); // 2
      Leg_52_set.insert("1599742294");
      Leg_52.add_attribute("RepoRt", "11848399.340000"); // 2
      Leg_52_set.insert("11848399.340000");
      Leg_52.add_attribute("Fctr", "18732782.910000"); // 2
      Leg_52_set.insert("18732782.910000");
      Leg_52.add_attribute("CrdRtg", "LegCreditRating_t_1432494399"); // 2
      Leg_52_set.insert("LegCreditRating_t_1432494399");
      Leg_52.add_attribute("Rgstry", "LegInstrRegistry_t_1768058731"); // 2
      Leg_52_set.insert("LegInstrRegistry_t_1768058731");
      Leg_52.add_attribute("Ctry", "62161766"); // 2
      Leg_52_set.insert("62161766");
      Leg_52.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_880676679"); // 2
      Leg_52_set.insert("LegStateOrProvinceOfIssue_t_880676679");
      Leg_52.add_attribute("Lcl", "LegLocaleOfIssue_t_1147066344"); // 2
      Leg_52_set.insert("LegLocaleOfIssue_t_1147066344");
      Leg_52.add_attribute("Redeem", "LegRedemptionDate_t_139537060"); // 2
      Leg_52_set.insert("LegRedemptionDate_t_139537060");
      Leg_52.add_attribute("Strk", "8236765.530000"); // 2
      Leg_52_set.insert("8236765.530000");
      Leg_52.add_attribute("StrkCcy", "JPY"); // 2
      Leg_52_set.insert("JPY");
      Leg_52.add_attribute("OptA", "1738241031"); // 2
      Leg_52_set.insert("1738241031");
      Leg_52.add_attribute("Cmult", "20112053.670000"); // 2
      Leg_52_set.insert("20112053.670000");
      Leg_52.add_attribute("MultTyp", "2"); // 2
      Leg_52_set.insert("2");
      Leg_52.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_52_set.insert("4");
      Leg_52.add_attribute("UOM", "lbs"); // 2
      Leg_52_set.insert("lbs");
      Leg_52.add_attribute("UOMQty", "14507792.110000"); // 2
      Leg_52_set.insert("14507792.110000");
      Leg_52.add_attribute("PxUOM", "lbs"); // 2
      Leg_52_set.insert("lbs");
      Leg_52.add_attribute("PxUOMQty", "9409959.630000"); // 2
      Leg_52_set.insert("9409959.630000");
      Leg_52.add_attribute("TmUnit", "S"); // 2
      Leg_52_set.insert("S");
      Leg_52.add_attribute("ExerStyle", "2"); // 2
      Leg_52_set.insert("2");
      Leg_52.add_attribute("CpnRt", "7802128.520000"); // 2
      Leg_52_set.insert("7802128.520000");
      Leg_52.add_attribute("Exch", "LegSecurityExchange_t_941620268"); // 2
      Leg_52_set.insert("LegSecurityExchange_t_941620268");
      Leg_52.add_attribute("Issr", "LegIssuer_t_951204438"); // 2
      Leg_52_set.insert("LegIssuer_t_951204438");
      Leg_52.add_attribute("EncLegIssrLen", "405586270"); // 2
      Leg_52_set.insert("405586270");
      Leg_52.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1909662069"); // 2
      Leg_52_set.insert("EncodedLegIssuer_t_1909662069");
      Leg_52.add_attribute("Desc", "LegSecurityDesc_t_636544325"); // 2
      Leg_52_set.insert("LegSecurityDesc_t_636544325");
      Leg_52.add_attribute("EncLegSecDescLen", "680421086"); // 2
      Leg_52_set.insert("680421086");
      Leg_52.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_638583208"); // 2
      Leg_52_set.insert("EncodedLegSecurityDesc_t_638583208");
      Leg_52.add_attribute("RatioQty", "6960347.610000"); // 2
      Leg_52_set.insert("6960347.610000");
      Leg_52.add_attribute("Side", "6"); // 2
      Leg_52_set.insert("6");
      Leg_52.add_attribute("Ccy", "JPY"); // 2
      Leg_52_set.insert("JPY");
      Leg_52.add_attribute("Pool", "LegPool_t_1565174132"); // 2
      Leg_52_set.insert("LegPool_t_1565174132");
      Leg_52.add_attribute("Dated", "LegDatedDate_t_1443998226"); // 2
      Leg_52_set.insert("LegDatedDate_t_1443998226");
      Leg_52.add_attribute("CSetMo", "483991171"); // 2
      Leg_52_set.insert("483991171");
      Leg_52.add_attribute("IntAcrl", "LegInterestAccrualDate_t_298367164"); // 2
      Leg_52_set.insert("LegInterestAccrualDate_t_298367164");
      Leg_52.add_attribute("PutCall", "443580922"); // 2
      Leg_52_set.insert("443580922");
      Leg_52.add_attribute("LegOptionRatio", "6235282.310000"); // 2
      Leg_52_set.insert("6235282.310000");
      Leg_52.add_attribute("Px", "11220437.170000"); // 2
      Leg_52_set.insert("11220437.170000");
      all_values.push_back(Leg_52_set);
      all_compo_names.insert("Leg_52_set");

      {
        xml_element LegAID_52{"LegAID"};
        multiset<string> LegAID_52_set;
        LegAID_52.add_attribute("SecAltID", "LegSecurityAltID_t_228543680"); // 3
        LegAID_52_set.insert("LegSecurityAltID_t_228543680");
        LegAID_52.add_attribute("SecAltIDSrc", "4"); // 3
        LegAID_52_set.insert("4");
        all_values.push_back(LegAID_52_set);
        all_compo_names.insert("LegAID_52_set");

        Leg_52.add_element(LegAID_52);
      }
      Ord_2.add_element(Leg_52);
    }
    {
      xml_element Stip_85{"Stip"};
      multiset<string> Stip_85_set;
      Stip_85.add_attribute("StipTyp", "AVFICO"); // 2
      Stip_85_set.insert("AVFICO");
      Stip_85.add_attribute("StipVal", "LegStipulationValue_t_92265399"); // 2
      Stip_85_set.insert("LegStipulationValue_t_92265399");
      all_values.push_back(Stip_85_set);
      all_compo_names.insert("Stip_85_set");

      Ord_2.add_element(Stip_85);
    }
    {
      xml_element PreAll_9{"PreAll"};
      multiset<string> PreAll_9_set;
      PreAll_9.add_attribute("AllocAcct", "LegAllocAccount_t_2111980014"); // 2
      PreAll_9_set.insert("LegAllocAccount_t_2111980014");
      PreAll_9.add_attribute("IndAllocID", "LegIndividualAllocID_t_1981449344"); // 2
      PreAll_9_set.insert("LegIndividualAllocID_t_1981449344");
      PreAll_9.add_attribute("AllocQty", "8584007.900000"); // 2
      PreAll_9_set.insert("8584007.900000");
      PreAll_9.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_1415275577"); // 2
      PreAll_9_set.insert("LegAllocAcctIDSource_t_1415275577");
      PreAll_9.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_9_set.insert("CAN");
      all_values.push_back(PreAll_9_set);
      all_compo_names.insert("PreAll_9_set");

      {
        xml_element Pty_218{"Pty"};
        multiset<string> Pty_218_set;
        Pty_218.add_attribute("ID", "Nested2PartyID_t_1900575225"); // 3
        Pty_218_set.insert("Nested2PartyID_t_1900575225");
        Pty_218.add_attribute("Src", "5"); // 3
        Pty_218_set.insert("5");
        Pty_218.add_attribute("R", "57"); // 3
        Pty_218_set.insert("57");
        all_values.push_back(Pty_218_set);
        all_compo_names.insert("Pty_218_set");

        {
          xml_element Sub_218{"Sub"};
          multiset<string> Sub_218_set;
          Sub_218.add_attribute("ID", "Nested2PartySubID_t_694711845"); // 4
          Sub_218_set.insert("Nested2PartySubID_t_694711845");
          Sub_218.add_attribute("Typ", "5"); // 4
          Sub_218_set.insert("5");
          all_values.push_back(Sub_218_set);
          all_compo_names.insert("Sub_218_set");

          Pty_218.add_element(Sub_218);
        }
        PreAll_9.add_element(Pty_218);
      }
      Ord_2.add_element(PreAll_9);
    }
    {
      xml_element Pty_219{"Pty"};
      multiset<string> Pty_219_set;
      Pty_219.add_attribute("ID", "NestedPartyID_t_837712228"); // 2
      Pty_219_set.insert("NestedPartyID_t_837712228");
      Pty_219.add_attribute("Src", "B"); // 2
      Pty_219_set.insert("B");
      Pty_219.add_attribute("R", "59"); // 2
      Pty_219_set.insert("59");
      all_values.push_back(Pty_219_set);
      all_compo_names.insert("Pty_219_set");

      {
        xml_element Sub_219{"Sub"};
        multiset<string> Sub_219_set;
        Sub_219.add_attribute("ID", "NestedPartySubID_t_1518133314"); // 3
        Sub_219_set.insert("NestedPartySubID_t_1518133314");
        Sub_219.add_attribute("Typ", "30"); // 3
        Sub_219_set.insert("30");
        all_values.push_back(Sub_219_set);
        all_compo_names.insert("Sub_219_set");

        Pty_219.add_element(Sub_219);
      }
      Ord_2.add_element(Pty_219);
    }
    elt.add_element(Ord_2);
  } // end Ord
  { // Ord
    xml_element Ord_3{"Ord"};
    multiset<string> Ord_3_set;
    Ord_3.add_attribute("Qty", "21330061.850000"); // 1
    Ord_3_set.insert("21330061.850000");
    Ord_3.add_attribute("SwapTyp", "5"); // 1
    Ord_3_set.insert("5");
    Ord_3.add_attribute("LegAllocID", "LegAllocID_t_771412969"); // 1
    Ord_3_set.insert("LegAllocID_t_771412969");
    Ord_3.add_attribute("PosEfct", "O"); // 1
    Ord_3_set.insert("O");
    Ord_3.add_attribute("Cover", "0"); // 1
    Ord_3_set.insert("0");
    Ord_3.add_attribute("RefID", "LegRefID_t_67927547"); // 1
    Ord_3_set.insert("LegRefID_t_67927547");
    Ord_3.add_attribute("SettlTyp", "9"); // 1
    Ord_3_set.insert("9");
    Ord_3.add_attribute("SettlDt", "LegSettlDate_t_1366870696"); // 1
    Ord_3_set.insert("LegSettlDate_t_1366870696");
    Ord_3.add_attribute("SettlCcy", "GBP"); // 1
    Ord_3_set.insert("GBP");
    Ord_3.add_attribute("OrdQty", "3414307.650000"); // 1
    Ord_3_set.insert("3414307.650000");
    Ord_3.add_attribute("LegVolatility", "7400521.500000"); // 1
    Ord_3_set.insert("7400521.500000");
    Ord_3.add_attribute("LegDividendYield", "6535361.680000"); // 1
    Ord_3_set.insert("6535361.680000");
    Ord_3.add_attribute("LegCurrencyRatio", "10542318.650000"); // 1
    Ord_3_set.insert("10542318.650000");
    Ord_3.add_attribute("LegExecInst", "G"); // 1
    Ord_3_set.insert("G");
    all_values.push_back(Ord_3_set);
    all_compo_names.insert("Ord_3_set");

    {
      xml_element Leg_53{"Leg"};
      multiset<string> Leg_53_set;
      Leg_53.add_attribute("Sym", "LegSymbol_t_618032534"); // 2
      Leg_53_set.insert("LegSymbol_t_618032534");
      Leg_53.add_attribute("Sfx", "WI"); // 2
      Leg_53_set.insert("WI");
      Leg_53.add_attribute("ID", "LegSecurityID_t_1690718339"); // 2
      Leg_53_set.insert("LegSecurityID_t_1690718339");
      Leg_53.add_attribute("Src", "M"); // 2
      Leg_53_set.insert("M");
      Leg_53.add_attribute("Prod", "13"); // 2
      Leg_53_set.insert("13");
      Leg_53.add_attribute("CFI", "LegCFICode_t_1342631445"); // 2
      Leg_53_set.insert("LegCFICode_t_1342631445");
      Leg_53.add_attribute("SecTyp", "NONE"); // 2
      Leg_53_set.insert("NONE");
      Leg_53.add_attribute("SecSubTyp", "LegSecuritySubType_t_1464662569"); // 2
      Leg_53_set.insert("LegSecuritySubType_t_1464662569");
      Leg_53.add_attribute("MMY", "1774757403"); // 2
      Leg_53_set.insert("1774757403");
      Leg_53.add_attribute("Mat", "LegMaturityDate_t_333627885"); // 2
      Leg_53_set.insert("LegMaturityDate_t_333627885");
      Leg_53.add_attribute("MatTm", "117606020"); // 2
      Leg_53_set.insert("117606020");
      Leg_53.add_attribute("CpnPmt", "LegCouponPaymentDate_t_464985983"); // 2
      Leg_53_set.insert("LegCouponPaymentDate_t_464985983");
      Leg_53.add_attribute("Issued", "LegIssueDate_t_790518151"); // 2
      Leg_53_set.insert("LegIssueDate_t_790518151");
      Leg_53.add_attribute("RepoCollSecTyp", "1554577444"); // 2
      Leg_53_set.insert("1554577444");
      Leg_53.add_attribute("RepoTrm", "1983119297"); // 2
      Leg_53_set.insert("1983119297");
      Leg_53.add_attribute("RepoRt", "18859916.260000"); // 2
      Leg_53_set.insert("18859916.260000");
      Leg_53.add_attribute("Fctr", "15400999.810000"); // 2
      Leg_53_set.insert("15400999.810000");
      Leg_53.add_attribute("CrdRtg", "LegCreditRating_t_1486448697"); // 2
      Leg_53_set.insert("LegCreditRating_t_1486448697");
      Leg_53.add_attribute("Rgstry", "LegInstrRegistry_t_509920947"); // 2
      Leg_53_set.insert("LegInstrRegistry_t_509920947");
      Leg_53.add_attribute("Ctry", "1947451923"); // 2
      Leg_53_set.insert("1947451923");
      Leg_53.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_407468581"); // 2
      Leg_53_set.insert("LegStateOrProvinceOfIssue_t_407468581");
      Leg_53.add_attribute("Lcl", "LegLocaleOfIssue_t_577848495"); // 2
      Leg_53_set.insert("LegLocaleOfIssue_t_577848495");
      Leg_53.add_attribute("Redeem", "LegRedemptionDate_t_691311388"); // 2
      Leg_53_set.insert("LegRedemptionDate_t_691311388");
      Leg_53.add_attribute("Strk", "17743392.770000"); // 2
      Leg_53_set.insert("17743392.770000");
      Leg_53.add_attribute("StrkCcy", "CAN"); // 2
      Leg_53_set.insert("CAN");
      Leg_53.add_attribute("OptA", "2115770042"); // 2
      Leg_53_set.insert("2115770042");
      Leg_53.add_attribute("Cmult", "18294091.150000"); // 2
      Leg_53_set.insert("18294091.150000");
      Leg_53.add_attribute("MultTyp", "0"); // 2
      Leg_53_set.insert("0");
      Leg_53.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_53_set.insert("4");
      Leg_53.add_attribute("UOM", "MMBtu"); // 2
      Leg_53_set.insert("MMBtu");
      Leg_53.add_attribute("UOMQty", "13302677.870000"); // 2
      Leg_53_set.insert("13302677.870000");
      Leg_53.add_attribute("PxUOM", "MWh"); // 2
      Leg_53_set.insert("MWh");
      Leg_53.add_attribute("PxUOMQty", "574777.080000"); // 2
      Leg_53_set.insert("574777.080000");
      Leg_53.add_attribute("TmUnit", "H"); // 2
      Leg_53_set.insert("H");
      Leg_53.add_attribute("ExerStyle", "0"); // 2
      Leg_53_set.insert("0");
      Leg_53.add_attribute("CpnRt", "14001091.530000"); // 2
      Leg_53_set.insert("14001091.530000");
      Leg_53.add_attribute("Exch", "LegSecurityExchange_t_855008291"); // 2
      Leg_53_set.insert("LegSecurityExchange_t_855008291");
      Leg_53.add_attribute("Issr", "LegIssuer_t_695851001"); // 2
      Leg_53_set.insert("LegIssuer_t_695851001");
      Leg_53.add_attribute("EncLegIssrLen", "1027382908"); // 2
      Leg_53_set.insert("1027382908");
      Leg_53.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1188636176"); // 2
      Leg_53_set.insert("EncodedLegIssuer_t_1188636176");
      Leg_53.add_attribute("Desc", "LegSecurityDesc_t_813457021"); // 2
      Leg_53_set.insert("LegSecurityDesc_t_813457021");
      Leg_53.add_attribute("EncLegSecDescLen", "1492368891"); // 2
      Leg_53_set.insert("1492368891");
      Leg_53.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1979154328"); // 2
      Leg_53_set.insert("EncodedLegSecurityDesc_t_1979154328");
      Leg_53.add_attribute("RatioQty", "2205508.170000"); // 2
      Leg_53_set.insert("2205508.170000");
      Leg_53.add_attribute("Side", "D"); // 2
      Leg_53_set.insert("D");
      Leg_53.add_attribute("Ccy", "CAN"); // 2
      Leg_53_set.insert("CAN");
      Leg_53.add_attribute("Pool", "LegPool_t_666969589"); // 2
      Leg_53_set.insert("LegPool_t_666969589");
      Leg_53.add_attribute("Dated", "LegDatedDate_t_80099605"); // 2
      Leg_53_set.insert("LegDatedDate_t_80099605");
      Leg_53.add_attribute("CSetMo", "1560619074"); // 2
      Leg_53_set.insert("1560619074");
      Leg_53.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1074438170"); // 2
      Leg_53_set.insert("LegInterestAccrualDate_t_1074438170");
      Leg_53.add_attribute("PutCall", "657948100"); // 2
      Leg_53_set.insert("657948100");
      Leg_53.add_attribute("LegOptionRatio", "1044468.150000"); // 2
      Leg_53_set.insert("1044468.150000");
      Leg_53.add_attribute("Px", "7012937.990000"); // 2
      Leg_53_set.insert("7012937.990000");
      all_values.push_back(Leg_53_set);
      all_compo_names.insert("Leg_53_set");

      {
        xml_element LegAID_53{"LegAID"};
        multiset<string> LegAID_53_set;
        LegAID_53.add_attribute("SecAltID", "LegSecurityAltID_t_1747305065"); // 3
        LegAID_53_set.insert("LegSecurityAltID_t_1747305065");
        LegAID_53.add_attribute("SecAltIDSrc", "H"); // 3
        LegAID_53_set.insert("H");
        all_values.push_back(LegAID_53_set);
        all_compo_names.insert("LegAID_53_set");

        Leg_53.add_element(LegAID_53);
      }
      Ord_3.add_element(Leg_53);
    }
    {
      xml_element Stip_86{"Stip"};
      multiset<string> Stip_86_set;
      Stip_86.add_attribute("StipTyp", "PPL"); // 2
      Stip_86_set.insert("PPL");
      Stip_86.add_attribute("StipVal", "LegStipulationValue_t_1429230532"); // 2
      Stip_86_set.insert("LegStipulationValue_t_1429230532");
      all_values.push_back(Stip_86_set);
      all_compo_names.insert("Stip_86_set");

      Ord_3.add_element(Stip_86);
    }
    {
      xml_element PreAll_10{"PreAll"};
      multiset<string> PreAll_10_set;
      PreAll_10.add_attribute("AllocAcct", "LegAllocAccount_t_875381153"); // 2
      PreAll_10_set.insert("LegAllocAccount_t_875381153");
      PreAll_10.add_attribute("IndAllocID", "LegIndividualAllocID_t_1692098452"); // 2
      PreAll_10_set.insert("LegIndividualAllocID_t_1692098452");
      PreAll_10.add_attribute("AllocQty", "19434735.490000"); // 2
      PreAll_10_set.insert("19434735.490000");
      PreAll_10.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_58165292"); // 2
      PreAll_10_set.insert("LegAllocAcctIDSource_t_58165292");
      PreAll_10.add_attribute("AllocSettlCcy", "EUR"); // 2
      PreAll_10_set.insert("EUR");
      all_values.push_back(PreAll_10_set);
      all_compo_names.insert("PreAll_10_set");

      {
        xml_element Pty_220{"Pty"};
        multiset<string> Pty_220_set;
        Pty_220.add_attribute("ID", "Nested2PartyID_t_1274257542"); // 3
        Pty_220_set.insert("Nested2PartyID_t_1274257542");
        Pty_220.add_attribute("Src", "C"); // 3
        Pty_220_set.insert("C");
        Pty_220.add_attribute("R", "76"); // 3
        Pty_220_set.insert("76");
        all_values.push_back(Pty_220_set);
        all_compo_names.insert("Pty_220_set");

        {
          xml_element Sub_220{"Sub"};
          multiset<string> Sub_220_set;
          Sub_220.add_attribute("ID", "Nested2PartySubID_t_2129265833"); // 4
          Sub_220_set.insert("Nested2PartySubID_t_2129265833");
          Sub_220.add_attribute("Typ", "9"); // 4
          Sub_220_set.insert("9");
          all_values.push_back(Sub_220_set);
          all_compo_names.insert("Sub_220_set");

          Pty_220.add_element(Sub_220);
        }
        PreAll_10.add_element(Pty_220);
      }
      Ord_3.add_element(PreAll_10);
    }
    {
      xml_element Pty_221{"Pty"};
      multiset<string> Pty_221_set;
      Pty_221.add_attribute("ID", "NestedPartyID_t_133476022"); // 2
      Pty_221_set.insert("NestedPartyID_t_133476022");
      Pty_221.add_attribute("Src", "7"); // 2
      Pty_221_set.insert("7");
      Pty_221.add_attribute("R", "13"); // 2
      Pty_221_set.insert("13");
      all_values.push_back(Pty_221_set);
      all_compo_names.insert("Pty_221_set");

      {
        xml_element Sub_221{"Sub"};
        multiset<string> Sub_221_set;
        Sub_221.add_attribute("ID", "NestedPartySubID_t_1625844913"); // 3
        Sub_221_set.insert("NestedPartySubID_t_1625844913");
        Sub_221.add_attribute("Typ", "4"); // 3
        Sub_221_set.insert("4");
        all_values.push_back(Sub_221_set);
        all_compo_names.insert("Sub_221_set");

        Pty_221.add_element(Sub_221);
      }
      Ord_3.add_element(Pty_221);
    }
    elt.add_element(Ord_3);
  } // end Ord
  { // Ord
    xml_element Ord_4{"Ord"};
    multiset<string> Ord_4_set;
    Ord_4.add_attribute("Qty", "2688942.490000"); // 1
    Ord_4_set.insert("2688942.490000");
    Ord_4.add_attribute("SwapTyp", "2"); // 1
    Ord_4_set.insert("2");
    Ord_4.add_attribute("LegAllocID", "LegAllocID_t_572267700"); // 1
    Ord_4_set.insert("LegAllocID_t_572267700");
    Ord_4.add_attribute("PosEfct", "C"); // 1
    Ord_4_set.insert("C");
    Ord_4.add_attribute("Cover", "1"); // 1
    Ord_4_set.insert("1");
    Ord_4.add_attribute("RefID", "LegRefID_t_652367305"); // 1
    Ord_4_set.insert("LegRefID_t_652367305");
    Ord_4.add_attribute("SettlTyp", "B"); // 1
    Ord_4_set.insert("B");
    Ord_4.add_attribute("SettlDt", "LegSettlDate_t_400289917"); // 1
    Ord_4_set.insert("LegSettlDate_t_400289917");
    Ord_4.add_attribute("SettlCcy", "GBP"); // 1
    Ord_4_set.insert("GBP");
    Ord_4.add_attribute("OrdQty", "11015837.170000"); // 1
    Ord_4_set.insert("11015837.170000");
    Ord_4.add_attribute("LegVolatility", "9101368.230000"); // 1
    Ord_4_set.insert("9101368.230000");
    Ord_4.add_attribute("LegDividendYield", "17102731.900000"); // 1
    Ord_4_set.insert("17102731.900000");
    Ord_4.add_attribute("LegCurrencyRatio", "17711639.100000"); // 1
    Ord_4_set.insert("17711639.100000");
    Ord_4.add_attribute("LegExecInst", "i"); // 1
    Ord_4_set.insert("i");
    all_values.push_back(Ord_4_set);
    all_compo_names.insert("Ord_4_set");

    {
      xml_element Leg_54{"Leg"};
      multiset<string> Leg_54_set;
      Leg_54.add_attribute("Sym", "LegSymbol_t_438170695"); // 2
      Leg_54_set.insert("LegSymbol_t_438170695");
      Leg_54.add_attribute("Sfx", "WI"); // 2
      Leg_54_set.insert("WI");
      Leg_54.add_attribute("ID", "LegSecurityID_t_2135357257"); // 2
      Leg_54_set.insert("LegSecurityID_t_2135357257");
      Leg_54.add_attribute("Src", "G"); // 2
      Leg_54_set.insert("G");
      Leg_54.add_attribute("Prod", "1"); // 2
      Leg_54_set.insert("1");
      Leg_54.add_attribute("CFI", "LegCFICode_t_1988824866"); // 2
      Leg_54_set.insert("LegCFICode_t_1988824866");
      Leg_54.add_attribute("SecTyp", "EUFRN"); // 2
      Leg_54_set.insert("EUFRN");
      Leg_54.add_attribute("SecSubTyp", "LegSecuritySubType_t_1310144748"); // 2
      Leg_54_set.insert("LegSecuritySubType_t_1310144748");
      Leg_54.add_attribute("MMY", "1094917980"); // 2
      Leg_54_set.insert("1094917980");
      Leg_54.add_attribute("Mat", "LegMaturityDate_t_1752375715"); // 2
      Leg_54_set.insert("LegMaturityDate_t_1752375715");
      Leg_54.add_attribute("MatTm", "545031159"); // 2
      Leg_54_set.insert("545031159");
      Leg_54.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1228394002"); // 2
      Leg_54_set.insert("LegCouponPaymentDate_t_1228394002");
      Leg_54.add_attribute("Issued", "LegIssueDate_t_775310429"); // 2
      Leg_54_set.insert("LegIssueDate_t_775310429");
      Leg_54.add_attribute("RepoCollSecTyp", "593374591"); // 2
      Leg_54_set.insert("593374591");
      Leg_54.add_attribute("RepoTrm", "706755267"); // 2
      Leg_54_set.insert("706755267");
      Leg_54.add_attribute("RepoRt", "17773994.710000"); // 2
      Leg_54_set.insert("17773994.710000");
      Leg_54.add_attribute("Fctr", "8622688.400000"); // 2
      Leg_54_set.insert("8622688.400000");
      Leg_54.add_attribute("CrdRtg", "LegCreditRating_t_1513121072"); // 2
      Leg_54_set.insert("LegCreditRating_t_1513121072");
      Leg_54.add_attribute("Rgstry", "LegInstrRegistry_t_202183523"); // 2
      Leg_54_set.insert("LegInstrRegistry_t_202183523");
      Leg_54.add_attribute("Ctry", "744330241"); // 2
      Leg_54_set.insert("744330241");
      Leg_54.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_838972819"); // 2
      Leg_54_set.insert("LegStateOrProvinceOfIssue_t_838972819");
      Leg_54.add_attribute("Lcl", "LegLocaleOfIssue_t_854550828"); // 2
      Leg_54_set.insert("LegLocaleOfIssue_t_854550828");
      Leg_54.add_attribute("Redeem", "LegRedemptionDate_t_39527068"); // 2
      Leg_54_set.insert("LegRedemptionDate_t_39527068");
      Leg_54.add_attribute("Strk", "12392627.370000"); // 2
      Leg_54_set.insert("12392627.370000");
      Leg_54.add_attribute("StrkCcy", "USD"); // 2
      Leg_54_set.insert("USD");
      Leg_54.add_attribute("OptA", "193362806"); // 2
      Leg_54_set.insert("193362806");
      Leg_54.add_attribute("Cmult", "9275194.100000"); // 2
      Leg_54_set.insert("9275194.100000");
      Leg_54.add_attribute("MultTyp", "2"); // 2
      Leg_54_set.insert("2");
      Leg_54.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_54_set.insert("1");
      Leg_54.add_attribute("UOM", "Bbl"); // 2
      Leg_54_set.insert("Bbl");
      Leg_54.add_attribute("UOMQty", "15876145.950000"); // 2
      Leg_54_set.insert("15876145.950000");
      Leg_54.add_attribute("PxUOM", "Bbl"); // 2
      Leg_54_set.insert("Bbl");
      Leg_54.add_attribute("PxUOMQty", "11072767.270000"); // 2
      Leg_54_set.insert("11072767.270000");
      Leg_54.add_attribute("TmUnit", "S"); // 2
      Leg_54_set.insert("S");
      Leg_54.add_attribute("ExerStyle", "2"); // 2
      Leg_54_set.insert("2");
      Leg_54.add_attribute("CpnRt", "9486179.450000"); // 2
      Leg_54_set.insert("9486179.450000");
      Leg_54.add_attribute("Exch", "LegSecurityExchange_t_1707060463"); // 2
      Leg_54_set.insert("LegSecurityExchange_t_1707060463");
      Leg_54.add_attribute("Issr", "LegIssuer_t_919108575"); // 2
      Leg_54_set.insert("LegIssuer_t_919108575");
      Leg_54.add_attribute("EncLegIssrLen", "2043535925"); // 2
      Leg_54_set.insert("2043535925");
      Leg_54.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1311952530"); // 2
      Leg_54_set.insert("EncodedLegIssuer_t_1311952530");
      Leg_54.add_attribute("Desc", "LegSecurityDesc_t_1464139734"); // 2
      Leg_54_set.insert("LegSecurityDesc_t_1464139734");
      Leg_54.add_attribute("EncLegSecDescLen", "1124446279"); // 2
      Leg_54_set.insert("1124446279");
      Leg_54.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_2087262959"); // 2
      Leg_54_set.insert("EncodedLegSecurityDesc_t_2087262959");
      Leg_54.add_attribute("RatioQty", "20575143.250000"); // 2
      Leg_54_set.insert("20575143.250000");
      Leg_54.add_attribute("Side", "B"); // 2
      Leg_54_set.insert("B");
      Leg_54.add_attribute("Ccy", "GBP"); // 2
      Leg_54_set.insert("GBP");
      Leg_54.add_attribute("Pool", "LegPool_t_1196838970"); // 2
      Leg_54_set.insert("LegPool_t_1196838970");
      Leg_54.add_attribute("Dated", "LegDatedDate_t_1919362305"); // 2
      Leg_54_set.insert("LegDatedDate_t_1919362305");
      Leg_54.add_attribute("CSetMo", "1516629759"); // 2
      Leg_54_set.insert("1516629759");
      Leg_54.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2035811790"); // 2
      Leg_54_set.insert("LegInterestAccrualDate_t_2035811790");
      Leg_54.add_attribute("PutCall", "626429486"); // 2
      Leg_54_set.insert("626429486");
      Leg_54.add_attribute("LegOptionRatio", "15561568.270000"); // 2
      Leg_54_set.insert("15561568.270000");
      Leg_54.add_attribute("Px", "11275908.790000"); // 2
      Leg_54_set.insert("11275908.790000");
      all_values.push_back(Leg_54_set);
      all_compo_names.insert("Leg_54_set");

      {
        xml_element LegAID_54{"LegAID"};
        multiset<string> LegAID_54_set;
        LegAID_54.add_attribute("SecAltID", "LegSecurityAltID_t_643812072"); // 3
        LegAID_54_set.insert("LegSecurityAltID_t_643812072");
        LegAID_54.add_attribute("SecAltIDSrc", "I"); // 3
        LegAID_54_set.insert("I");
        all_values.push_back(LegAID_54_set);
        all_compo_names.insert("LegAID_54_set");

        Leg_54.add_element(LegAID_54);
      }
      Ord_4.add_element(Leg_54);
    }
    {
      xml_element Stip_87{"Stip"};
      multiset<string> Stip_87_set;
      Stip_87.add_attribute("StipTyp", "COUPON"); // 2
      Stip_87_set.insert("COUPON");
      Stip_87.add_attribute("StipVal", "LegStipulationValue_t_1571331482"); // 2
      Stip_87_set.insert("LegStipulationValue_t_1571331482");
      all_values.push_back(Stip_87_set);
      all_compo_names.insert("Stip_87_set");

      Ord_4.add_element(Stip_87);
    }
    {
      xml_element PreAll_11{"PreAll"};
      multiset<string> PreAll_11_set;
      PreAll_11.add_attribute("AllocAcct", "LegAllocAccount_t_2144771437"); // 2
      PreAll_11_set.insert("LegAllocAccount_t_2144771437");
      PreAll_11.add_attribute("IndAllocID", "LegIndividualAllocID_t_1137996753"); // 2
      PreAll_11_set.insert("LegIndividualAllocID_t_1137996753");
      PreAll_11.add_attribute("AllocQty", "5432509.520000"); // 2
      PreAll_11_set.insert("5432509.520000");
      PreAll_11.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_1584902384"); // 2
      PreAll_11_set.insert("LegAllocAcctIDSource_t_1584902384");
      PreAll_11.add_attribute("AllocSettlCcy", "CHF"); // 2
      PreAll_11_set.insert("CHF");
      all_values.push_back(PreAll_11_set);
      all_compo_names.insert("PreAll_11_set");

      {
        xml_element Pty_222{"Pty"};
        multiset<string> Pty_222_set;
        Pty_222.add_attribute("ID", "Nested2PartyID_t_1521369318"); // 3
        Pty_222_set.insert("Nested2PartyID_t_1521369318");
        Pty_222.add_attribute("Src", "B"); // 3
        Pty_222_set.insert("B");
        Pty_222.add_attribute("R", "32"); // 3
        Pty_222_set.insert("32");
        all_values.push_back(Pty_222_set);
        all_compo_names.insert("Pty_222_set");

        {
          xml_element Sub_222{"Sub"};
          multiset<string> Sub_222_set;
          Sub_222.add_attribute("ID", "Nested2PartySubID_t_1080946133"); // 4
          Sub_222_set.insert("Nested2PartySubID_t_1080946133");
          Sub_222.add_attribute("Typ", "30"); // 4
          Sub_222_set.insert("30");
          all_values.push_back(Sub_222_set);
          all_compo_names.insert("Sub_222_set");

          Pty_222.add_element(Sub_222);
        }
        PreAll_11.add_element(Pty_222);
      }
      Ord_4.add_element(PreAll_11);
    }
    {
      xml_element Pty_223{"Pty"};
      multiset<string> Pty_223_set;
      Pty_223.add_attribute("ID", "NestedPartyID_t_347714253"); // 2
      Pty_223_set.insert("NestedPartyID_t_347714253");
      Pty_223.add_attribute("Src", "B"); // 2
      Pty_223_set.insert("B");
      Pty_223.add_attribute("R", "57"); // 2
      Pty_223_set.insert("57");
      all_values.push_back(Pty_223_set);
      all_compo_names.insert("Pty_223_set");

      {
        xml_element Sub_223{"Sub"};
        multiset<string> Sub_223_set;
        Sub_223.add_attribute("ID", "NestedPartySubID_t_1472160532"); // 3
        Sub_223_set.insert("NestedPartySubID_t_1472160532");
        Sub_223.add_attribute("Typ", "19"); // 3
        Sub_223_set.insert("19");
        all_values.push_back(Sub_223_set);
        all_compo_names.insert("Sub_223_set");

        Pty_223.add_element(Sub_223);
      }
      Ord_4.add_element(Pty_223);
    }
    elt.add_element(Ord_4);
  } // end Ord
  { // OrdQty
    xml_element OrdQty_14{"OrdQty"};
    multiset<string> OrdQty_14_set;
    OrdQty_14.add_attribute("Qty", "20255777.030000"); // 1
    OrdQty_14_set.insert("20255777.030000");
    OrdQty_14.add_attribute("Cash", "11558784.300000"); // 1
    OrdQty_14_set.insert("11558784.300000");
    OrdQty_14.add_attribute("Pct", "19023731.100000"); // 1
    OrdQty_14_set.insert("19023731.100000");
    OrdQty_14.add_attribute("RndDir", "2"); // 1
    OrdQty_14_set.insert("2");
    OrdQty_14.add_attribute("RndMod", "2052337.530000"); // 1
    OrdQty_14_set.insert("2052337.530000");
    all_values.push_back(OrdQty_14_set);
    all_compo_names.insert("OrdQty_14_set");

    elt.add_element(OrdQty_14);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_5{"TrgrInstr"};
    multiset<string> TrgrInstr_5_set;
    TrgrInstr_5.add_attribute("TrgrTyp", "4"); // 1
    TrgrInstr_5_set.insert("4");
    TrgrInstr_5.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_5_set.insert("1");
    TrgrInstr_5.add_attribute("TrgrPx", "935618.950000"); // 1
    TrgrInstr_5_set.insert("935618.950000");
    TrgrInstr_5.add_attribute("TrgrSym", "TriggerSymbol_t_153197605"); // 1
    TrgrInstr_5_set.insert("TriggerSymbol_t_153197605");
    TrgrInstr_5.add_attribute("TrgrSecID", "TriggerSecurityID_t_1575696511"); // 1
    TrgrInstr_5_set.insert("TriggerSecurityID_t_1575696511");
    TrgrInstr_5.add_attribute("TrgrSecIDSrc", "7"); // 1
    TrgrInstr_5_set.insert("7");
    TrgrInstr_5.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_797009678"); // 1
    TrgrInstr_5_set.insert("TriggerSecurityDesc_t_797009678");
    TrgrInstr_5.add_attribute("TrgrPxTyp", "5"); // 1
    TrgrInstr_5_set.insert("5");
    TrgrInstr_5.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_5_set.insert("3");
    TrgrInstr_5.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_5_set.insert("U");
    TrgrInstr_5.add_attribute("TrgrNewPx", "4208281.890000"); // 1
    TrgrInstr_5_set.insert("4208281.890000");
    TrgrInstr_5.add_attribute("TrgrOrdTyp", "1"); // 1
    TrgrInstr_5_set.insert("1");
    TrgrInstr_5.add_attribute("TrgrNewQty", "7641084.650000"); // 1
    TrgrInstr_5_set.insert("7641084.650000");
    TrgrInstr_5.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_2005730573"); // 1
    TrgrInstr_5_set.insert("TriggerTradingSessionID_t_2005730573");
    TrgrInstr_5.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_1655954453"); // 1
    TrgrInstr_5_set.insert("TriggerTradingSessionSubID_t_1655954453");
    all_values.push_back(TrgrInstr_5_set);
    all_compo_names.insert("TrgrInstr_5_set");

    elt.add_element(TrgrInstr_5);
  } // end TrgrInstr
  { // Comm
    xml_element Comm_15{"Comm"};
    multiset<string> Comm_15_set;
    Comm_15.add_attribute("Comm", "Commission_t_267152496"); // 1
    Comm_15_set.insert("Commission_t_267152496");
    Comm_15.add_attribute("CommTyp", "4"); // 1
    Comm_15_set.insert("4");
    Comm_15.add_attribute("Ccy", "EUR"); // 1
    Comm_15_set.insert("EUR");
    Comm_15.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_15_set.insert("Y");
    all_values.push_back(Comm_15_set);
    all_compo_names.insert("Comm_15_set");

    elt.add_element(Comm_15);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_5{"PegInstr"};
    multiset<string> PegInstr_5_set;
    PegInstr_5.add_attribute("OfstVal", "20396604.610000"); // 1
    PegInstr_5_set.insert("20396604.610000");
    PegInstr_5.add_attribute("PegPxTyp", "8"); // 1
    PegInstr_5_set.insert("8");
    PegInstr_5.add_attribute("MoveTyp", "1"); // 1
    PegInstr_5_set.insert("1");
    PegInstr_5.add_attribute("OfstTyp", "3"); // 1
    PegInstr_5_set.insert("3");
    PegInstr_5.add_attribute("LmtTyp", "1"); // 1
    PegInstr_5_set.insert("1");
    PegInstr_5.add_attribute("RndDir", "1"); // 1
    PegInstr_5_set.insert("1");
    PegInstr_5.add_attribute("Scope", "3"); // 1
    PegInstr_5_set.insert("3");
    PegInstr_5.add_attribute("PegSecurityIDSource", "L"); // 1
    PegInstr_5_set.insert("L");
    PegInstr_5.add_attribute("PegSecID", "PegSecurityID_t_498577534"); // 1
    PegInstr_5_set.insert("PegSecurityID_t_498577534");
    PegInstr_5.add_attribute("PgSymbl", "PegSymbol_t_388727820"); // 1
    PegInstr_5_set.insert("PegSymbol_t_388727820");
    PegInstr_5.add_attribute("PegSecDesc", "PegSecurityDesc_t_1752317794"); // 1
    PegInstr_5_set.insert("PegSecurityDesc_t_1752317794");
    all_values.push_back(PegInstr_5_set);
    all_compo_names.insert("PegInstr_5_set");

    elt.add_element(PegInstr_5);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_5{"DiscInstr"};
    multiset<string> DiscInstr_5_set;
    DiscInstr_5.add_attribute("DsctnInst", "6"); // 1
    DiscInstr_5_set.insert("6");
    DiscInstr_5.add_attribute("OfstValu", "4082675.040000"); // 1
    DiscInstr_5_set.insert("4082675.040000");
    DiscInstr_5.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_5_set.insert("1");
    DiscInstr_5.add_attribute("OfstTyp", "3"); // 1
    DiscInstr_5_set.insert("3");
    DiscInstr_5.add_attribute("LimitTyp", "2"); // 1
    DiscInstr_5_set.insert("2");
    DiscInstr_5.add_attribute("RndDir", "2"); // 1
    DiscInstr_5_set.insert("2");
    DiscInstr_5.add_attribute("Scope", "2"); // 1
    DiscInstr_5_set.insert("2");
    all_values.push_back(DiscInstr_5_set);
    all_compo_names.insert("DiscInstr_5_set");

    elt.add_element(DiscInstr_5);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_8{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_8_set;
    StrtPrmGrp_8.add_attribute("StrtPrmNme", "StrategyParameterName_t_1314171626"); // 1
    StrtPrmGrp_8_set.insert("StrategyParameterName_t_1314171626");
    StrtPrmGrp_8.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_8_set.insert("23");
    StrtPrmGrp_8.add_attribute("StrtPrmVal", "StrategyParameterValue_t_680848958"); // 1
    StrtPrmGrp_8_set.insert("StrategyParameterValue_t_680848958");
    all_values.push_back(StrtPrmGrp_8_set);
    all_compo_names.insert("StrtPrmGrp_8_set");

    elt.add_element(StrtPrmGrp_8);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_9{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_9_set;
    StrtPrmGrp_9.add_attribute("StrtPrmNme", "StrategyParameterName_t_699307543"); // 1
    StrtPrmGrp_9_set.insert("StrategyParameterName_t_699307543");
    StrtPrmGrp_9.add_attribute("StrtPrmTyp", "16"); // 1
    StrtPrmGrp_9_set.insert("16");
    StrtPrmGrp_9.add_attribute("StrtPrmVal", "StrategyParameterValue_t_539095883"); // 1
    StrtPrmGrp_9_set.insert("StrategyParameterValue_t_539095883");
    all_values.push_back(StrtPrmGrp_9_set);
    all_compo_names.insert("StrtPrmGrp_9_set");

    elt.add_element(StrtPrmGrp_9);
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
