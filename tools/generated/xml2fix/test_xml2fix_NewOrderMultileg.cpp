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
  elt.add_attribute("ClOrdID", "ClOrdID_t_543248017"); // 0
  NewOrderMultileg_message_t_0.insert("ClOrdID_t_543248017");
  elt.add_attribute("ClOrdID2", "SecondaryClOrdID_t_133220328"); // 0
  NewOrderMultileg_message_t_0.insert("SecondaryClOrdID_t_133220328");
  elt.add_attribute("ClOrdLinkID", "ClOrdLinkID_t_243518367"); // 0
  NewOrderMultileg_message_t_0.insert("ClOrdLinkID_t_243518367");
  elt.add_attribute("OrignDt", "TradeOriginationDate_t_1454442430"); // 0
  NewOrderMultileg_message_t_0.insert("TradeOriginationDate_t_1454442430");
  elt.add_attribute("TrdDt", "TradeDate_t_336470591"); // 0
  NewOrderMultileg_message_t_0.insert("TradeDate_t_336470591");
  elt.add_attribute("Acct", "Account_t_830900478"); // 0
  NewOrderMultileg_message_t_0.insert("Account_t_830900478");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  NewOrderMultileg_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "8"); // 0
  NewOrderMultileg_message_t_0.insert("8");
  elt.add_attribute("DayBkngInst", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("BkngUnit", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("PreallocMeth", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("AllocID", "AllocID_t_668807575"); // 0
  NewOrderMultileg_message_t_0.insert("AllocID_t_668807575");
  elt.add_attribute("SettlTyp", "9"); // 0
  NewOrderMultileg_message_t_0.insert("9");
  elt.add_attribute("SettlDt", "SettlDate_t_1082723938"); // 0
  NewOrderMultileg_message_t_0.insert("SettlDate_t_1082723938");
  elt.add_attribute("CshMgn", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ClrFeeInd", "5"); // 0
  NewOrderMultileg_message_t_0.insert("5");
  elt.add_attribute("HandlInst", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("ExecInst", "f"); // 0
  NewOrderMultileg_message_t_0.insert("f");
  elt.add_attribute("MinQty", "2532536.650000"); // 0
  NewOrderMultileg_message_t_0.insert("2532536.650000");
  elt.add_attribute("MtchInc", "18003227.590000"); // 0
  NewOrderMultileg_message_t_0.insert("18003227.590000");
  elt.add_attribute("MxPxLvls", "814833504"); // 0
  NewOrderMultileg_message_t_0.insert("814833504");
  elt.add_attribute("MaxFloor", "6196809.200000"); // 0
  NewOrderMultileg_message_t_0.insert("6196809.200000");
  elt.add_attribute("ExDest", "ExDestination_t_251199816"); // 0
  NewOrderMultileg_message_t_0.insert("ExDestination_t_251199816");
  elt.add_attribute("ExDestIDSrc", "G"); // 0
  NewOrderMultileg_message_t_0.insert("G");
  elt.add_attribute("ProcCode", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("Side", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("PrevClsPx", "3680528.260000"); // 0
  NewOrderMultileg_message_t_0.insert("3680528.260000");
  elt.add_attribute("SwapPnts", "34432.100000"); // 0
  NewOrderMultileg_message_t_0.insert("34432.100000");
  elt.add_attribute("LocReqd", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("TxnTm", "TransactTime_t_292641595"); // 0
  NewOrderMultileg_message_t_0.insert("TransactTime_t_292641595");
  elt.add_attribute("QtyTyp", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("OrdTyp", "8"); // 0
  NewOrderMultileg_message_t_0.insert("8");
  elt.add_attribute("MlegModel", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("MlegPxMeth", "3"); // 0
  NewOrderMultileg_message_t_0.insert("3");
  elt.add_attribute("PxTyp", "4"); // 0
  NewOrderMultileg_message_t_0.insert("4");
  elt.add_attribute("Px", "7623325.140000"); // 0
  NewOrderMultileg_message_t_0.insert("7623325.140000");
  elt.add_attribute("PxPrtScp", "3"); // 0
  NewOrderMultileg_message_t_0.insert("3");
  elt.add_attribute("StopPx", "7613739.360000"); // 0
  NewOrderMultileg_message_t_0.insert("7613739.360000");
  elt.add_attribute("Ccy", "USD"); // 0
  NewOrderMultileg_message_t_0.insert("USD");
  elt.add_attribute("ComplianceID", "ComplianceID_t_800164904"); // 0
  NewOrderMultileg_message_t_0.insert("ComplianceID_t_800164904");
  elt.add_attribute("SolFlag", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("IOIID", "IOIID_t_1227322165"); // 0
  NewOrderMultileg_message_t_0.insert("IOIID_t_1227322165");
  elt.add_attribute("QID", "QuoteID_t_2141840441"); // 0
  NewOrderMultileg_message_t_0.insert("QuoteID_t_2141840441");
  elt.add_attribute("RefOrdID", "RefOrderID_t_1044099212"); // 0
  NewOrderMultileg_message_t_0.insert("RefOrderID_t_1044099212");
  elt.add_attribute("RefOrdIDSrc", "3"); // 0
  NewOrderMultileg_message_t_0.insert("3");
  elt.add_attribute("TmInForce", "9"); // 0
  NewOrderMultileg_message_t_0.insert("9");
  elt.add_attribute("EfctvTm", "EffectiveTime_t_1640498039"); // 0
  NewOrderMultileg_message_t_0.insert("EffectiveTime_t_1640498039");
  elt.add_attribute("ExpireDt", "ExpireDate_t_881272643"); // 0
  NewOrderMultileg_message_t_0.insert("ExpireDate_t_881272643");
  elt.add_attribute("ExpireTm", "ExpireTime_t_1535316295"); // 0
  NewOrderMultileg_message_t_0.insert("ExpireTime_t_1535316295");
  elt.add_attribute("GTBkngInst", "1"); // 0
  NewOrderMultileg_message_t_0.insert("1");
  elt.add_attribute("Cpcty", "W"); // 0
  NewOrderMultileg_message_t_0.insert("W");
  elt.add_attribute("Rstctions", "8"); // 0
  NewOrderMultileg_message_t_0.insert("8");
  elt.add_attribute("PrTrdAnon", "true"); // 0
  NewOrderMultileg_message_t_0.insert("true");
  elt.add_attribute("CustCpcty", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("ForexReq", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("SettlCcy", "CHF"); // 0
  NewOrderMultileg_message_t_0.insert("CHF");
  elt.add_attribute("BkngTyp", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("Txt", "Text_t_1556489486"); // 0
  NewOrderMultileg_message_t_0.insert("Text_t_1556489486");
  elt.add_attribute("EncTxtLen", "559853650"); // 0
  NewOrderMultileg_message_t_0.insert("559853650");
  elt.add_attribute("EncTxt", "EncodedText_t_187104705"); // 0
  NewOrderMultileg_message_t_0.insert("EncodedText_t_187104705");
  elt.add_attribute("PosEfct", "R"); // 0
  NewOrderMultileg_message_t_0.insert("R");
  elt.add_attribute("Covered", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  elt.add_attribute("MaxShow", "16980461.220000"); // 0
  NewOrderMultileg_message_t_0.insert("16980461.220000");
  elt.add_attribute("TgtStrategy", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("TgtStrategyParameters", "TargetStrategyParameters_t_1748048088"); // 0
  NewOrderMultileg_message_t_0.insert("TargetStrategyParameters_t_1748048088");
  elt.add_attribute("RFR", "18924043.690000"); // 0
  NewOrderMultileg_message_t_0.insert("18924043.690000");
  elt.add_attribute("ParticipationRt", "6284922.350000"); // 0
  NewOrderMultileg_message_t_0.insert("6284922.350000");
  elt.add_attribute("CxllationRights", "N"); // 0
  NewOrderMultileg_message_t_0.insert("N");
  elt.add_attribute("MnyLaunderingStat", "2"); // 0
  NewOrderMultileg_message_t_0.insert("2");
  elt.add_attribute("RegistID", "RegistID_t_1428657139"); // 0
  NewOrderMultileg_message_t_0.insert("RegistID_t_1428657139");
  elt.add_attribute("Designation", "Designation_t_1645075523"); // 0
  NewOrderMultileg_message_t_0.insert("Designation_t_1645075523");
  elt.add_attribute("MLEGRptTypReq", "0"); // 0
  NewOrderMultileg_message_t_0.insert("0");
  all_values.push_back(NewOrderMultileg_message_t_0);
  all_compo_names.insert("NewOrderMultileg_message_t");

  { // Hdr
    xml_element Hdr_53{"Hdr"};
    multiset<string> Hdr_53_set;
    Hdr_53.add_attribute("SeqNum", "1423013932"); // 1
    Hdr_53_set.insert("1423013932");
    Hdr_53.add_attribute("SID", "SenderCompID_t_541691087"); // 1
    Hdr_53_set.insert("SenderCompID_t_541691087");
    Hdr_53.add_attribute("TID", "TargetCompID_t_2082060999"); // 1
    Hdr_53_set.insert("TargetCompID_t_2082060999");
    Hdr_53.add_attribute("OBID", "OnBehalfOfCompID_t_557592914"); // 1
    Hdr_53_set.insert("OnBehalfOfCompID_t_557592914");
    Hdr_53.add_attribute("D2ID", "DeliverToCompID_t_34705479"); // 1
    Hdr_53_set.insert("DeliverToCompID_t_34705479");
    Hdr_53.add_attribute("SSub", "SenderSubID_t_815849994"); // 1
    Hdr_53_set.insert("SenderSubID_t_815849994");
    Hdr_53.add_attribute("SLoc", "SenderLocationID_t_2092909209"); // 1
    Hdr_53_set.insert("SenderLocationID_t_2092909209");
    Hdr_53.add_attribute("TSub", "TargetSubID_t_1328042629"); // 1
    Hdr_53_set.insert("TargetSubID_t_1328042629");
    Hdr_53.add_attribute("TLoc", "TargetLocationID_t_364472494"); // 1
    Hdr_53_set.insert("TargetLocationID_t_364472494");
    Hdr_53.add_attribute("OBSub", "OnBehalfOfSubID_t_2100422776"); // 1
    Hdr_53_set.insert("OnBehalfOfSubID_t_2100422776");
    Hdr_53.add_attribute("OBLoc", "OnBehalfOfLocationID_t_725095948"); // 1
    Hdr_53_set.insert("OnBehalfOfLocationID_t_725095948");
    Hdr_53.add_attribute("D2Sub", "DeliverToSubID_t_263631723"); // 1
    Hdr_53_set.insert("DeliverToSubID_t_263631723");
    Hdr_53.add_attribute("D2Loc", "DeliverToLocationID_t_1016661221"); // 1
    Hdr_53_set.insert("DeliverToLocationID_t_1016661221");
    Hdr_53.add_attribute("PosDup", "Y"); // 1
    Hdr_53_set.insert("Y");
    Hdr_53.add_attribute("PosRsnd", "N"); // 1
    Hdr_53_set.insert("N");
    Hdr_53.add_attribute("Snt", "SendingTime_t_2083826524"); // 1
    Hdr_53_set.insert("SendingTime_t_2083826524");
    Hdr_53.add_attribute("OrigSnt", "OrigSendingTime_t_1658262449"); // 1
    Hdr_53_set.insert("OrigSendingTime_t_1658262449");
    Hdr_53.add_attribute("MsgEncd", "MessageEncoding_t_1090697429"); // 1
    Hdr_53_set.insert("MessageEncoding_t_1090697429");
    all_values.push_back(Hdr_53_set);
    all_compo_names.insert("Hdr_53_set");

    {
      xml_element Hop_53{"Hop"};
      multiset<string> Hop_53_set;
      Hop_53.add_attribute("ID", "HopCompID_t_123447581"); // 2
      Hop_53_set.insert("HopCompID_t_123447581");
      Hop_53.add_attribute("Ref", "1642845127"); // 2
      Hop_53_set.insert("1642845127");
      Hop_53.add_attribute("Snt", "HopSendingTime_t_2076413003"); // 2
      Hop_53_set.insert("HopSendingTime_t_2076413003");
      all_values.push_back(Hop_53_set);
      all_compo_names.insert("Hop_53_set");

      Hdr_53.add_element(Hop_53);
    }
    elt.add_element(Hdr_53);
  } // end Hdr
  { // Pty
    xml_element Pty_239{"Pty"};
    multiset<string> Pty_239_set;
    Pty_239.add_attribute("ID", "PartyID_t_1509963426"); // 1
    Pty_239_set.insert("PartyID_t_1509963426");
    Pty_239.add_attribute("Src", "A"); // 1
    Pty_239_set.insert("A");
    Pty_239.add_attribute("R", "66"); // 1
    Pty_239_set.insert("66");
    all_values.push_back(Pty_239_set);
    all_compo_names.insert("Pty_239_set");

    {
      xml_element Sub_239{"Sub"};
      multiset<string> Sub_239_set;
      Sub_239.add_attribute("ID", "PartySubID_t_2138455661"); // 2
      Sub_239_set.insert("PartySubID_t_2138455661");
      Sub_239.add_attribute("Typ", "31"); // 2
      Sub_239_set.insert("31");
      all_values.push_back(Sub_239_set);
      all_compo_names.insert("Sub_239_set");

      Pty_239.add_element(Sub_239);
    }
    elt.add_element(Pty_239);
  } // end Pty
  { // Pty
    xml_element Pty_240{"Pty"};
    multiset<string> Pty_240_set;
    Pty_240.add_attribute("ID", "PartyID_t_1869849735"); // 1
    Pty_240_set.insert("PartyID_t_1869849735");
    Pty_240.add_attribute("Src", "5"); // 1
    Pty_240_set.insert("5");
    Pty_240.add_attribute("R", "20"); // 1
    Pty_240_set.insert("20");
    all_values.push_back(Pty_240_set);
    all_compo_names.insert("Pty_240_set");

    {
      xml_element Sub_240{"Sub"};
      multiset<string> Sub_240_set;
      Sub_240.add_attribute("ID", "PartySubID_t_1253123563"); // 2
      Sub_240_set.insert("PartySubID_t_1253123563");
      Sub_240.add_attribute("Typ", "23"); // 2
      Sub_240_set.insert("23");
      all_values.push_back(Sub_240_set);
      all_compo_names.insert("Sub_240_set");

      Pty_240.add_element(Sub_240);
    }
    elt.add_element(Pty_240);
  } // end Pty
  { // Pty
    xml_element Pty_241{"Pty"};
    multiset<string> Pty_241_set;
    Pty_241.add_attribute("ID", "PartyID_t_1252477008"); // 1
    Pty_241_set.insert("PartyID_t_1252477008");
    Pty_241.add_attribute("Src", "4"); // 1
    Pty_241_set.insert("4");
    Pty_241.add_attribute("R", "41"); // 1
    Pty_241_set.insert("41");
    all_values.push_back(Pty_241_set);
    all_compo_names.insert("Pty_241_set");

    {
      xml_element Sub_241{"Sub"};
      multiset<string> Sub_241_set;
      Sub_241.add_attribute("ID", "PartySubID_t_1287182487"); // 2
      Sub_241_set.insert("PartySubID_t_1287182487");
      Sub_241.add_attribute("Typ", "31"); // 2
      Sub_241_set.insert("31");
      all_values.push_back(Sub_241_set);
      all_compo_names.insert("Sub_241_set");

      Pty_241.add_element(Sub_241);
    }
    elt.add_element(Pty_241);
  } // end Pty
  { // PreAllocMleg
    xml_element PreAllocMleg_2{"PreAllocMleg"};
    multiset<string> PreAllocMleg_2_set;
    PreAllocMleg_2.add_attribute("Acct", "AllocAccount_t_467741468"); // 1
    PreAllocMleg_2_set.insert("AllocAccount_t_467741468");
    PreAllocMleg_2.add_attribute("ActIDSrc", "99"); // 1
    PreAllocMleg_2_set.insert("99");
    PreAllocMleg_2.add_attribute("AllocSettlCcy", "USD"); // 1
    PreAllocMleg_2_set.insert("USD");
    PreAllocMleg_2.add_attribute("IndAllocID", "IndividualAllocID_t_484171478"); // 1
    PreAllocMleg_2_set.insert("IndividualAllocID_t_484171478");
    PreAllocMleg_2.add_attribute("Qty", "202946.130000"); // 1
    PreAllocMleg_2_set.insert("202946.130000");
    all_values.push_back(PreAllocMleg_2_set);
    all_compo_names.insert("PreAllocMleg_2_set");

    {
      xml_element Pty_242{"Pty"};
      multiset<string> Pty_242_set;
      Pty_242.add_attribute("ID", "Nested3PartyID_t_1294610380"); // 2
      Pty_242_set.insert("Nested3PartyID_t_1294610380");
      Pty_242.add_attribute("Src", "A"); // 2
      Pty_242_set.insert("A");
      Pty_242.add_attribute("R", "21"); // 2
      Pty_242_set.insert("21");
      all_values.push_back(Pty_242_set);
      all_compo_names.insert("Pty_242_set");

      {
        xml_element Sub_242{"Sub"};
        multiset<string> Sub_242_set;
        Sub_242.add_attribute("ID", "Nested3PartySubID_t_805389181"); // 3
        Sub_242_set.insert("Nested3PartySubID_t_805389181");
        Sub_242.add_attribute("Typ", "2"); // 3
        Sub_242_set.insert("2");
        all_values.push_back(Sub_242_set);
        all_compo_names.insert("Sub_242_set");

        Pty_242.add_element(Sub_242);
      }
      PreAllocMleg_2.add_element(Pty_242);
    }
    elt.add_element(PreAllocMleg_2);
  } // end PreAllocMleg
  { // DsplyInstr
    xml_element DsplyInstr_5{"DsplyInstr"};
    multiset<string> DsplyInstr_5_set;
    DsplyInstr_5.add_attribute("DisplayQty", "800850.700000"); // 1
    DsplyInstr_5_set.insert("800850.700000");
    DsplyInstr_5.add_attribute("SecDspQty", "3007506.600000"); // 1
    DsplyInstr_5_set.insert("3007506.600000");
    DsplyInstr_5.add_attribute("DspWhn", "2"); // 1
    DsplyInstr_5_set.insert("2");
    DsplyInstr_5.add_attribute("DspMthd", "2"); // 1
    DsplyInstr_5_set.insert("2");
    DsplyInstr_5.add_attribute("DsplLwQty", "18107140.860000"); // 1
    DsplyInstr_5_set.insert("18107140.860000");
    DsplyInstr_5.add_attribute("DisplayHighQty", "15641358.360000"); // 1
    DsplyInstr_5_set.insert("15641358.360000");
    DsplyInstr_5.add_attribute("DspMinIncr", "13205095.490000"); // 1
    DsplyInstr_5_set.insert("13205095.490000");
    DsplyInstr_5.add_attribute("RfrshQty", "18016860.990000"); // 1
    DsplyInstr_5_set.insert("18016860.990000");
    all_values.push_back(DsplyInstr_5_set);
    all_compo_names.insert("DsplyInstr_5_set");

    elt.add_element(DsplyInstr_5);
  } // end DsplyInstr
  { // TrdSes
    xml_element TrdSes_9{"TrdSes"};
    multiset<string> TrdSes_9_set;
    TrdSes_9.add_attribute("SesID", "1"); // 1
    TrdSes_9_set.insert("1");
    TrdSes_9.add_attribute("SesSub", "6"); // 1
    TrdSes_9_set.insert("6");
    all_values.push_back(TrdSes_9_set);
    all_compo_names.insert("TrdSes_9_set");

    elt.add_element(TrdSes_9);
  } // end TrdSes
  { // TrdSes
    xml_element TrdSes_10{"TrdSes"};
    multiset<string> TrdSes_10_set;
    TrdSes_10.add_attribute("SesID", "3"); // 1
    TrdSes_10_set.insert("3");
    TrdSes_10.add_attribute("SesSub", "3"); // 1
    TrdSes_10_set.insert("3");
    all_values.push_back(TrdSes_10_set);
    all_compo_names.insert("TrdSes_10_set");

    elt.add_element(TrdSes_10);
  } // end TrdSes
  { // Instrmt
    xml_element Instrmt_43{"Instrmt"};
    multiset<string> Instrmt_43_set;
    Instrmt_43.add_attribute("Sym", "Symbol_t_1768991040"); // 1
    Instrmt_43_set.insert("Symbol_t_1768991040");
    Instrmt_43.add_attribute("Sfx", "CD"); // 1
    Instrmt_43_set.insert("CD");
    Instrmt_43.add_attribute("ID", "SecurityID_t_1336216466"); // 1
    Instrmt_43_set.insert("SecurityID_t_1336216466");
    Instrmt_43.add_attribute("Src", "5"); // 1
    Instrmt_43_set.insert("5");
    Instrmt_43.add_attribute("Prod", "11"); // 1
    Instrmt_43_set.insert("11");
    Instrmt_43.add_attribute("ProdCmplx", "ProductComplex_t_1192283728"); // 1
    Instrmt_43_set.insert("ProductComplex_t_1192283728");
    Instrmt_43.add_attribute("SecGrp", "SecurityGroup_t_2072437654"); // 1
    Instrmt_43_set.insert("SecurityGroup_t_2072437654");
    Instrmt_43.add_attribute("CFI", "CFICode_t_53065821"); // 1
    Instrmt_43_set.insert("CFICode_t_53065821");
    Instrmt_43.add_attribute("SecTyp", "MPO"); // 1
    Instrmt_43_set.insert("MPO");
    Instrmt_43.add_attribute("SubTyp", "SecuritySubType_t_1076071046"); // 1
    Instrmt_43_set.insert("SecuritySubType_t_1076071046");
    Instrmt_43.add_attribute("MMY", "1245903238"); // 1
    Instrmt_43_set.insert("1245903238");
    Instrmt_43.add_attribute("MatDt", "MaturityDate_t_1896994962"); // 1
    Instrmt_43_set.insert("MaturityDate_t_1896994962");
    Instrmt_43.add_attribute("MatTm", "1096365659"); // 1
    Instrmt_43_set.insert("1096365659");
    Instrmt_43.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_393029970"); // 1
    Instrmt_43_set.insert("SettleOnOpenFlag_t_393029970");
    Instrmt_43.add_attribute("AsgnMeth", "764526571"); // 1
    Instrmt_43_set.insert("764526571");
    Instrmt_43.add_attribute("Status", "1"); // 1
    Instrmt_43_set.insert("1");
    Instrmt_43.add_attribute("CpnPmt", "CouponPaymentDate_t_1198419151"); // 1
    Instrmt_43_set.insert("CouponPaymentDate_t_1198419151");
    Instrmt_43.add_attribute("RestrctTyp", "MR"); // 1
    Instrmt_43_set.insert("MR");
    Instrmt_43.add_attribute("Snrty", "SB"); // 1
    Instrmt_43_set.insert("SB");
    Instrmt_43.add_attribute("NotlPctOut", "14991698.120000"); // 1
    Instrmt_43_set.insert("14991698.120000");
    Instrmt_43.add_attribute("OrigNotlPctOut", "6099140.020000"); // 1
    Instrmt_43_set.insert("6099140.020000");
    Instrmt_43.add_attribute("AttchPnt", "8871833.430000"); // 1
    Instrmt_43_set.insert("8871833.430000");
    Instrmt_43.add_attribute("DetchPnt", "11624002.500000"); // 1
    Instrmt_43_set.insert("11624002.500000");
    Instrmt_43.add_attribute("Issued", "IssueDate_t_26566190"); // 1
    Instrmt_43_set.insert("IssueDate_t_26566190");
    Instrmt_43.add_attribute("RepoCollSecTyp", "60209244"); // 1
    Instrmt_43_set.insert("60209244");
    Instrmt_43.add_attribute("RepoTrm", "816602702"); // 1
    Instrmt_43_set.insert("816602702");
    Instrmt_43.add_attribute("RepoRt", "6564124.240000"); // 1
    Instrmt_43_set.insert("6564124.240000");
    Instrmt_43.add_attribute("Fctr", "11030848.800000"); // 1
    Instrmt_43_set.insert("11030848.800000");
    Instrmt_43.add_attribute("CrdRtg", "CreditRating_t_1890434305"); // 1
    Instrmt_43_set.insert("CreditRating_t_1890434305");
    Instrmt_43.add_attribute("Rgstry", "InstrRegistry_t_1997044578"); // 1
    Instrmt_43_set.insert("InstrRegistry_t_1997044578");
    Instrmt_43.add_attribute("IssuCtry", "1251600431"); // 1
    Instrmt_43_set.insert("1251600431");
    Instrmt_43.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1511941697"); // 1
    Instrmt_43_set.insert("StateOrProvinceOfIssue_t_1511941697");
    Instrmt_43.add_attribute("Lcl", "LocaleOfIssue_t_295186444"); // 1
    Instrmt_43_set.insert("LocaleOfIssue_t_295186444");
    Instrmt_43.add_attribute("Redeem", "RedemptionDate_t_440333250"); // 1
    Instrmt_43_set.insert("RedemptionDate_t_440333250");
    Instrmt_43.add_attribute("StrkPx", "2387177.920000"); // 1
    Instrmt_43_set.insert("2387177.920000");
    Instrmt_43.add_attribute("StrkCcy", "JPY"); // 1
    Instrmt_43_set.insert("JPY");
    Instrmt_43.add_attribute("StrkMult", "1636717.980000"); // 1
    Instrmt_43_set.insert("1636717.980000");
    Instrmt_43.add_attribute("StrkValu", "20810602.660000"); // 1
    Instrmt_43_set.insert("20810602.660000");
    Instrmt_43.add_attribute("StrkPxDtrmnMeth", "2"); // 1
    Instrmt_43_set.insert("2");
    Instrmt_43.add_attribute("StrkPxBndryMeth", "5"); // 1
    Instrmt_43_set.insert("5");
    Instrmt_43.add_attribute("StrkPxBndryPrcsn", "11794798.560000"); // 1
    Instrmt_43_set.insert("11794798.560000");
    Instrmt_43.add_attribute("PxDtrmnMeth", "4"); // 1
    Instrmt_43_set.insert("4");
    Instrmt_43.add_attribute("OptAt", "188624855"); // 1
    Instrmt_43_set.insert("188624855");
    Instrmt_43.add_attribute("Mult", "15725098.260000"); // 1
    Instrmt_43_set.insert("15725098.260000");
    Instrmt_43.add_attribute("MultTyp", "1"); // 1
    Instrmt_43_set.insert("1");
    Instrmt_43.add_attribute("FlowSchedTyp", "3"); // 1
    Instrmt_43_set.insert("3");
    Instrmt_43.add_attribute("MinPxIncr", "6234453.300000"); // 1
    Instrmt_43_set.insert("6234453.300000");
    Instrmt_43.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_2134750307"); // 1
    Instrmt_43_set.insert("MinPriceIncrementAmount_t_2134750307");
    Instrmt_43.add_attribute("UOM", "USD"); // 1
    Instrmt_43_set.insert("USD");
    Instrmt_43.add_attribute("UOMQty", "21226151.420000"); // 1
    Instrmt_43_set.insert("21226151.420000");
    Instrmt_43.add_attribute("PxUOM", "Alw"); // 1
    Instrmt_43_set.insert("Alw");
    Instrmt_43.add_attribute("PxUOMQty", "11144159.160000"); // 1
    Instrmt_43_set.insert("11144159.160000");
    Instrmt_43.add_attribute("SettlMeth", "C"); // 1
    Instrmt_43_set.insert("C");
    Instrmt_43.add_attribute("ExerStyle", "1"); // 1
    Instrmt_43_set.insert("1");
    Instrmt_43.add_attribute("OptPayoutTyp", "1"); // 1
    Instrmt_43_set.insert("1");
    Instrmt_43.add_attribute("OptPayAmt", "OptPayoutAmount_t_1954134446"); // 1
    Instrmt_43_set.insert("OptPayoutAmount_t_1954134446");
    Instrmt_43.add_attribute("PxQteMeth", "STD"); // 1
    Instrmt_43_set.insert("STD");
    Instrmt_43.add_attribute("ValMeth", "FUTDA"); // 1
    Instrmt_43_set.insert("FUTDA");
    Instrmt_43.add_attribute("ListMeth", "0"); // 1
    Instrmt_43_set.insert("0");
    Instrmt_43.add_attribute("CapPx", "11297202.060000"); // 1
    Instrmt_43_set.insert("11297202.060000");
    Instrmt_43.add_attribute("FlrPx", "13818268.230000"); // 1
    Instrmt_43_set.insert("13818268.230000");
    Instrmt_43.add_attribute("PutCall", "1"); // 1
    Instrmt_43_set.insert("1");
    Instrmt_43.add_attribute("FlexInd", "true"); // 1
    Instrmt_43_set.insert("true");
    Instrmt_43.add_attribute("FlexProdElig", "false"); // 1
    Instrmt_43_set.insert("false");
    Instrmt_43.add_attribute("TmUnit", "Wk"); // 1
    Instrmt_43_set.insert("Wk");
    Instrmt_43.add_attribute("CpnRt", "13054174.470000"); // 1
    Instrmt_43_set.insert("13054174.470000");
    Instrmt_43.add_attribute("Exch", "SecurityExchange_t_1307293403"); // 1
    Instrmt_43_set.insert("SecurityExchange_t_1307293403");
    Instrmt_43.add_attribute("PosLmt", "1463932743"); // 1
    Instrmt_43_set.insert("1463932743");
    Instrmt_43.add_attribute("NTPosLmt", "1238994065"); // 1
    Instrmt_43_set.insert("1238994065");
    Instrmt_43.add_attribute("Issr", "Issuer_t_57766569"); // 1
    Instrmt_43_set.insert("Issuer_t_57766569");
    Instrmt_43.add_attribute("EncIssrLen", "556191939"); // 1
    Instrmt_43_set.insert("556191939");
    Instrmt_43.add_attribute("EncIssr", "EncodedIssuer_t_270990274"); // 1
    Instrmt_43_set.insert("EncodedIssuer_t_270990274");
    Instrmt_43.add_attribute("Desc", "SecurityDesc_t_705234696"); // 1
    Instrmt_43_set.insert("SecurityDesc_t_705234696");
    Instrmt_43.add_attribute("EncSecDescLen", "744816794"); // 1
    Instrmt_43_set.insert("744816794");
    Instrmt_43.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1843500100"); // 1
    Instrmt_43_set.insert("EncodedSecurityDesc_t_1843500100");
    Instrmt_43.add_attribute("Pool", "Pool_t_2117229395"); // 1
    Instrmt_43_set.insert("Pool_t_2117229395");
    Instrmt_43.add_attribute("CSetMo", "1986444797"); // 1
    Instrmt_43_set.insert("1986444797");
    Instrmt_43.add_attribute("CPPgm", "99"); // 1
    Instrmt_43_set.insert("99");
    Instrmt_43.add_attribute("CPRegT", "CPRegType_t_2104496054"); // 1
    Instrmt_43_set.insert("CPRegType_t_2104496054");
    Instrmt_43.add_attribute("Dated", "DatedDate_t_66193722"); // 1
    Instrmt_43_set.insert("DatedDate_t_66193722");
    Instrmt_43.add_attribute("IntAcrl", "InterestAccrualDate_t_294593276"); // 1
    Instrmt_43_set.insert("InterestAccrualDate_t_294593276");
    all_values.push_back(Instrmt_43_set);
    all_compo_names.insert("Instrmt_43_set");

    {
      xml_element AID_46{"AID"};
      multiset<string> AID_46_set;
      AID_46.add_attribute("AltID", "SecurityAltID_t_554193068"); // 2
      AID_46_set.insert("SecurityAltID_t_554193068");
      AID_46.add_attribute("AltIDSrc", "B"); // 2
      AID_46_set.insert("B");
      all_values.push_back(AID_46_set);
      all_compo_names.insert("AID_46_set");

      Instrmt_43.add_element(AID_46);
    }
    {
      xml_element SecXML_46{"SecXML"};
      multiset<string> SecXML_46_set;
      SecXML_46.add_attribute("Schema", "SecurityXMLSchema_t_1432125021"); // 2
      SecXML_46_set.insert("SecurityXMLSchema_t_1432125021");
      all_values.push_back(SecXML_46_set);
      all_compo_names.insert("SecXML_46_set");

      Instrmt_43.add_element(SecXML_46);
    }
    {
      xml_element Evnt_46{"Evnt"};
      multiset<string> Evnt_46_set;
      Evnt_46.add_attribute("EventTyp", "1"); // 2
      Evnt_46_set.insert("1");
      Evnt_46.add_attribute("Dt", "EventDate_t_207751150"); // 2
      Evnt_46_set.insert("EventDate_t_207751150");
      Evnt_46.add_attribute("Tm", "EventTime_t_1238775819"); // 2
      Evnt_46_set.insert("EventTime_t_1238775819");
      Evnt_46.add_attribute("Px", "3106155.480000"); // 2
      Evnt_46_set.insert("3106155.480000");
      Evnt_46.add_attribute("Txt", "EventText_t_337977542"); // 2
      Evnt_46_set.insert("EventText_t_337977542");
      all_values.push_back(Evnt_46_set);
      all_compo_names.insert("Evnt_46_set");

      Instrmt_43.add_element(Evnt_46);
    }
    {
      xml_element Pty_243{"Pty"};
      multiset<string> Pty_243_set;
      Pty_243.add_attribute("ID", "InstrumentPartyID_t_788377275"); // 2
      Pty_243_set.insert("InstrumentPartyID_t_788377275");
      Pty_243.add_attribute("Src", "1"); // 2
      Pty_243_set.insert("1");
      Pty_243.add_attribute("R", "45"); // 2
      Pty_243_set.insert("45");
      all_values.push_back(Pty_243_set);
      all_compo_names.insert("Pty_243_set");

      {
        xml_element Sub_243{"Sub"};
        multiset<string> Sub_243_set;
        Sub_243.add_attribute("ID", "InstrumentPartySubID_t_1849920429"); // 3
        Sub_243_set.insert("InstrumentPartySubID_t_1849920429");
        Sub_243.add_attribute("Typ", "2"); // 3
        Sub_243_set.insert("2");
        all_values.push_back(Sub_243_set);
        all_compo_names.insert("Sub_243_set");

        Pty_243.add_element(Sub_243);
      }
      Instrmt_43.add_element(Pty_243);
    }
    {
      xml_element CmplxEvnt_43{"CmplxEvnt"};
      multiset<string> CmplxEvnt_43_set;
      CmplxEvnt_43.add_attribute("Typ", "2"); // 2
      CmplxEvnt_43_set.insert("2");
      CmplxEvnt_43.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1002697726"); // 2
      CmplxEvnt_43_set.insert("ComplexOptPayoutAmount_t_1002697726");
      CmplxEvnt_43.add_attribute("Px", "20231762.030000"); // 2
      CmplxEvnt_43_set.insert("20231762.030000");
      CmplxEvnt_43.add_attribute("PxBndryMeth", "3"); // 2
      CmplxEvnt_43_set.insert("3");
      CmplxEvnt_43.add_attribute("PxBndryPrcsn", "3191468.220000"); // 2
      CmplxEvnt_43_set.insert("3191468.220000");
      CmplxEvnt_43.add_attribute("PxTmTyp", "3"); // 2
      CmplxEvnt_43_set.insert("3");
      CmplxEvnt_43.add_attribute("Cond", "1"); // 2
      CmplxEvnt_43_set.insert("1");
      all_values.push_back(CmplxEvnt_43_set);
      all_compo_names.insert("CmplxEvnt_43_set");

      {
        xml_element EvntDts_43{"EvntDts"};
        multiset<string> EvntDts_43_set;
        EvntDts_43.add_attribute("StartDt", "ComplexEventStartDate_t_875338761"); // 3
        EvntDts_43_set.insert("ComplexEventStartDate_t_875338761");
        EvntDts_43.add_attribute("EndDt", "ComplexEventEndDate_t_1385676894"); // 3
        EvntDts_43_set.insert("ComplexEventEndDate_t_1385676894");
        all_values.push_back(EvntDts_43_set);
        all_compo_names.insert("EvntDts_43_set");

        {
          xml_element EvntTms_43{"EvntTms"};
          multiset<string> EvntTms_43_set;
          EvntTms_43.add_attribute("StartTm", "1317291812"); // 4
          EvntTms_43_set.insert("1317291812");
          EvntTms_43.add_attribute("EndTm", "1620155556"); // 4
          EvntTms_43_set.insert("1620155556");
          all_values.push_back(EvntTms_43_set);
          all_compo_names.insert("EvntTms_43_set");

          EvntDts_43.add_element(EvntTms_43);
        }
        CmplxEvnt_43.add_element(EvntDts_43);
      }
      Instrmt_43.add_element(CmplxEvnt_43);
    }
    elt.add_element(Instrmt_43);
  } // end Instrmt
  { // Undly
    xml_element Undly_57{"Undly"};
    multiset<string> Undly_57_set;
    Undly_57.add_attribute("Sym", "UnderlyingSymbol_t_1287037559"); // 1
    Undly_57_set.insert("UnderlyingSymbol_t_1287037559");
    Undly_57.add_attribute("Sfx", "WI"); // 1
    Undly_57_set.insert("WI");
    Undly_57.add_attribute("ID", "UnderlyingSecurityID_t_1401155129"); // 1
    Undly_57_set.insert("UnderlyingSecurityID_t_1401155129");
    Undly_57.add_attribute("Src", "H"); // 1
    Undly_57_set.insert("H");
    Undly_57.add_attribute("Prod", "2"); // 1
    Undly_57_set.insert("2");
    Undly_57.add_attribute("CFI", "UnderlyingCFICode_t_1695748406"); // 1
    Undly_57_set.insert("UnderlyingCFICode_t_1695748406");
    Undly_57.add_attribute("SecTyp", "VRDN"); // 1
    Undly_57_set.insert("VRDN");
    Undly_57.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_558436418"); // 1
    Undly_57_set.insert("UnderlyingSecuritySubType_t_558436418");
    Undly_57.add_attribute("MMY", "980389779"); // 1
    Undly_57_set.insert("980389779");
    Undly_57.add_attribute("Mat", "UnderlyingMaturityDate_t_828699306"); // 1
    Undly_57_set.insert("UnderlyingMaturityDate_t_828699306");
    Undly_57.add_attribute("MatTm", "766187569"); // 1
    Undly_57_set.insert("766187569");
    Undly_57.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_71681950"); // 1
    Undly_57_set.insert("UnderlyingCouponPaymentDate_t_71681950");
    Undly_57.add_attribute("RestrctTyp", "MM"); // 1
    Undly_57_set.insert("MM");
    Undly_57.add_attribute("Snrty", "SD"); // 1
    Undly_57_set.insert("SD");
    Undly_57.add_attribute("NotlPctOut", "8600592.260000"); // 1
    Undly_57_set.insert("8600592.260000");
    Undly_57.add_attribute("OrigNotlPctOut", "4321669.600000"); // 1
    Undly_57_set.insert("4321669.600000");
    Undly_57.add_attribute("AttchPnt", "6764858.290000"); // 1
    Undly_57_set.insert("6764858.290000");
    Undly_57.add_attribute("DetchPnt", "5624960.070000"); // 1
    Undly_57_set.insert("5624960.070000");
    Undly_57.add_attribute("Issued", "UnderlyingIssueDate_t_1149925716"); // 1
    Undly_57_set.insert("UnderlyingIssueDate_t_1149925716");
    Undly_57.add_attribute("RepoCollSecTyp", "2070966621"); // 1
    Undly_57_set.insert("2070966621");
    Undly_57.add_attribute("RepoTrm", "1565193733"); // 1
    Undly_57_set.insert("1565193733");
    Undly_57.add_attribute("RepoRt", "10256182.710000"); // 1
    Undly_57_set.insert("10256182.710000");
    Undly_57.add_attribute("Fctr", "4777735.200000"); // 1
    Undly_57_set.insert("4777735.200000");
    Undly_57.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1884340555"); // 1
    Undly_57_set.insert("UnderlyingCreditRating_t_1884340555");
    Undly_57.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_2140304891"); // 1
    Undly_57_set.insert("UnderlyingInstrRegistry_t_2140304891");
    Undly_57.add_attribute("Ctry", "1089830636"); // 1
    Undly_57_set.insert("1089830636");
    Undly_57.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_612195669"); // 1
    Undly_57_set.insert("UnderlyingStateOrProvinceOfIssue_t_612195669");
    Undly_57.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1378498138"); // 1
    Undly_57_set.insert("UnderlyingLocaleOfIssue_t_1378498138");
    Undly_57.add_attribute("Redeem", "UnderlyingRedemptionDate_t_259638800"); // 1
    Undly_57_set.insert("UnderlyingRedemptionDate_t_259638800");
    Undly_57.add_attribute("StrkPx", "848675.770000"); // 1
    Undly_57_set.insert("848675.770000");
    Undly_57.add_attribute("StrkCcy", "GBP"); // 1
    Undly_57_set.insert("GBP");
    Undly_57.add_attribute("OptA", "1543984282"); // 1
    Undly_57_set.insert("1543984282");
    Undly_57.add_attribute("Mult", "17138629.660000"); // 1
    Undly_57_set.insert("17138629.660000");
    Undly_57.add_attribute("MultTyp", "0"); // 1
    Undly_57_set.insert("0");
    Undly_57.add_attribute("FlowSchedTyp", "2"); // 1
    Undly_57_set.insert("2");
    Undly_57.add_attribute("UOM", "MWh"); // 1
    Undly_57_set.insert("MWh");
    Undly_57.add_attribute("UOMQty", "2940020.640000"); // 1
    Undly_57_set.insert("2940020.640000");
    Undly_57.add_attribute("PxUOM", "Bu"); // 1
    Undly_57_set.insert("Bu");
    Undly_57.add_attribute("PxUOMQty", "950338.550000"); // 1
    Undly_57_set.insert("950338.550000");
    Undly_57.add_attribute("TmUnit", "S"); // 1
    Undly_57_set.insert("S");
    Undly_57.add_attribute("ExerStyle", "2"); // 1
    Undly_57_set.insert("2");
    Undly_57.add_attribute("CpnRt", "1667158.060000"); // 1
    Undly_57_set.insert("1667158.060000");
    Undly_57.add_attribute("Exch", "UnderlyingSecurityExchange_t_114532576"); // 1
    Undly_57_set.insert("UnderlyingSecurityExchange_t_114532576");
    Undly_57.add_attribute("Issr", "UnderlyingIssuer_t_1203116513"); // 1
    Undly_57_set.insert("UnderlyingIssuer_t_1203116513");
    Undly_57.add_attribute("EncUndIssrLen", "1026775032"); // 1
    Undly_57_set.insert("1026775032");
    Undly_57.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_546699536"); // 1
    Undly_57_set.insert("EncodedUnderlyingIssuer_t_546699536");
    Undly_57.add_attribute("Desc", "UnderlyingSecurityDesc_t_1879602343"); // 1
    Undly_57_set.insert("UnderlyingSecurityDesc_t_1879602343");
    Undly_57.add_attribute("EncUndSecDescLen", "1589271039"); // 1
    Undly_57_set.insert("1589271039");
    Undly_57.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1696625252"); // 1
    Undly_57_set.insert("EncodedUnderlyingSecurityDesc_t_1696625252");
    Undly_57.add_attribute("CPPgm", "UnderlyingCPProgram_t_1803085316"); // 1
    Undly_57_set.insert("UnderlyingCPProgram_t_1803085316");
    Undly_57.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1006981124"); // 1
    Undly_57_set.insert("UnderlyingCPRegType_t_1006981124");
    Undly_57.add_attribute("AllocPct", "5747598.750000"); // 1
    Undly_57_set.insert("5747598.750000");
    Undly_57.add_attribute("Ccy", "GBP"); // 1
    Undly_57_set.insert("GBP");
    Undly_57.add_attribute("Qty", "5675811.180000"); // 1
    Undly_57_set.insert("5675811.180000");
    Undly_57.add_attribute("SettlTyp", "5"); // 1
    Undly_57_set.insert("5");
    Undly_57.add_attribute("CashAmt", "UnderlyingCashAmount_t_1356033701"); // 1
    Undly_57_set.insert("UnderlyingCashAmount_t_1356033701");
    Undly_57.add_attribute("CashTyp", "FIXED"); // 1
    Undly_57_set.insert("FIXED");
    Undly_57.add_attribute("Px", "14828446.240000"); // 1
    Undly_57_set.insert("14828446.240000");
    Undly_57.add_attribute("DirtPx", "14409012.780000"); // 1
    Undly_57_set.insert("14409012.780000");
    Undly_57.add_attribute("EndPx", "1113034.450000"); // 1
    Undly_57_set.insert("1113034.450000");
    Undly_57.add_attribute("StartVal", "UnderlyingStartValue_t_882037336"); // 1
    Undly_57_set.insert("UnderlyingStartValue_t_882037336");
    Undly_57.add_attribute("CurVal", "UnderlyingCurrentValue_t_837401912"); // 1
    Undly_57_set.insert("UnderlyingCurrentValue_t_837401912");
    Undly_57.add_attribute("EndVal", "UnderlyingEndValue_t_1825166412"); // 1
    Undly_57_set.insert("UnderlyingEndValue_t_1825166412");
    Undly_57.add_attribute("AdjQty", "15252800.140000"); // 1
    Undly_57_set.insert("15252800.140000");
    Undly_57.add_attribute("FxRate", "17592129.750000"); // 1
    Undly_57_set.insert("17592129.750000");
    Undly_57.add_attribute("FxRateCalc", "M"); // 1
    Undly_57_set.insert("M");
    Undly_57.add_attribute("CapValu", "UnderlyingCapValue_t_1819282078"); // 1
    Undly_57_set.insert("UnderlyingCapValue_t_1819282078");
    Undly_57.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1091976808"); // 1
    Undly_57_set.insert("UnderlyingSettlMethod_t_1091976808");
    Undly_57.add_attribute("PutCall", "1034844344"); // 1
    Undly_57_set.insert("1034844344");
    all_values.push_back(Undly_57_set);
    all_compo_names.insert("Undly_57_set");

    {
      xml_element UndAID_57{"UndAID"};
      multiset<string> UndAID_57_set;
      UndAID_57.add_attribute("AltID", "UnderlyingSecurityAltID_t_794499800"); // 2
      UndAID_57_set.insert("UnderlyingSecurityAltID_t_794499800");
      UndAID_57.add_attribute("AltIDSrc", "B"); // 2
      UndAID_57_set.insert("B");
      all_values.push_back(UndAID_57_set);
      all_compo_names.insert("UndAID_57_set");

      Undly_57.add_element(UndAID_57);
    }
    {
      xml_element Stip_87{"Stip"};
      multiset<string> Stip_87_set;
      Stip_87.add_attribute("Typ", "INTERNALPX"); // 2
      Stip_87_set.insert("INTERNALPX");
      Stip_87.add_attribute("Val", "UnderlyingStipValue_t_909032376"); // 2
      Stip_87_set.insert("UnderlyingStipValue_t_909032376");
      all_values.push_back(Stip_87_set);
      all_compo_names.insert("Stip_87_set");

      Undly_57.add_element(Stip_87);
    }
    {
      xml_element Pty_244{"Pty"};
      multiset<string> Pty_244_set;
      Pty_244.add_attribute("ID", "UnderlyingInstrumentPartyID_t_246561075"); // 2
      Pty_244_set.insert("UnderlyingInstrumentPartyID_t_246561075");
      Pty_244.add_attribute("Src", "H"); // 2
      Pty_244_set.insert("H");
      Pty_244.add_attribute("R", "70"); // 2
      Pty_244_set.insert("70");
      all_values.push_back(Pty_244_set);
      all_compo_names.insert("Pty_244_set");

      {
        xml_element Sub_244{"Sub"};
        multiset<string> Sub_244_set;
        Sub_244.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_2126163418"); // 3
        Sub_244_set.insert("UnderlyingInstrumentPartySubID_t_2126163418");
        Sub_244.add_attribute("Typ", "32"); // 3
        Sub_244_set.insert("32");
        all_values.push_back(Sub_244_set);
        all_compo_names.insert("Sub_244_set");

        Pty_244.add_element(Sub_244);
      }
      Undly_57.add_element(Pty_244);
    }
    elt.add_element(Undly_57);
  } // end Undly
  { // Ord
    xml_element Ord_4{"Ord"};
    multiset<string> Ord_4_set;
    Ord_4.add_attribute("Qty", "17817650.860000"); // 1
    Ord_4_set.insert("17817650.860000");
    Ord_4.add_attribute("SwapTyp", "2"); // 1
    Ord_4_set.insert("2");
    Ord_4.add_attribute("LegAllocID", "LegAllocID_t_1579633391"); // 1
    Ord_4_set.insert("LegAllocID_t_1579633391");
    Ord_4.add_attribute("PosEfct", "N"); // 1
    Ord_4_set.insert("N");
    Ord_4.add_attribute("Cover", "1"); // 1
    Ord_4_set.insert("1");
    Ord_4.add_attribute("RefID", "LegRefID_t_2147214510"); // 1
    Ord_4_set.insert("LegRefID_t_2147214510");
    Ord_4.add_attribute("SettlTyp", "C"); // 1
    Ord_4_set.insert("C");
    Ord_4.add_attribute("SettlDt", "LegSettlDate_t_482008134"); // 1
    Ord_4_set.insert("LegSettlDate_t_482008134");
    Ord_4.add_attribute("SettlCcy", "EUR"); // 1
    Ord_4_set.insert("EUR");
    Ord_4.add_attribute("OrdQty", "19229094.120000"); // 1
    Ord_4_set.insert("19229094.120000");
    Ord_4.add_attribute("LegVolatility", "20571135.640000"); // 1
    Ord_4_set.insert("20571135.640000");
    Ord_4.add_attribute("LegDividendYield", "12082607.630000"); // 1
    Ord_4_set.insert("12082607.630000");
    Ord_4.add_attribute("LegCurrencyRatio", "6128276.770000"); // 1
    Ord_4_set.insert("6128276.770000");
    Ord_4.add_attribute("LegExecInst", "m"); // 1
    Ord_4_set.insert("m");
    all_values.push_back(Ord_4_set);
    all_compo_names.insert("Ord_4_set");

    {
      xml_element Leg_59{"Leg"};
      multiset<string> Leg_59_set;
      Leg_59.add_attribute("Sym", "LegSymbol_t_586057130"); // 2
      Leg_59_set.insert("LegSymbol_t_586057130");
      Leg_59.add_attribute("Sfx", "CD"); // 2
      Leg_59_set.insert("CD");
      Leg_59.add_attribute("ID", "LegSecurityID_t_527123168"); // 2
      Leg_59_set.insert("LegSecurityID_t_527123168");
      Leg_59.add_attribute("Src", "7"); // 2
      Leg_59_set.insert("7");
      Leg_59.add_attribute("Prod", "6"); // 2
      Leg_59_set.insert("6");
      Leg_59.add_attribute("CFI", "LegCFICode_t_1561967512"); // 2
      Leg_59_set.insert("LegCFICode_t_1561967512");
      Leg_59.add_attribute("SecTyp", "?"); // 2
      Leg_59_set.insert("?");
      Leg_59.add_attribute("SecSubTyp", "LegSecuritySubType_t_359978374"); // 2
      Leg_59_set.insert("LegSecuritySubType_t_359978374");
      Leg_59.add_attribute("MMY", "616044014"); // 2
      Leg_59_set.insert("616044014");
      Leg_59.add_attribute("Mat", "LegMaturityDate_t_1961387737"); // 2
      Leg_59_set.insert("LegMaturityDate_t_1961387737");
      Leg_59.add_attribute("MatTm", "606539449"); // 2
      Leg_59_set.insert("606539449");
      Leg_59.add_attribute("CpnPmt", "LegCouponPaymentDate_t_696895548"); // 2
      Leg_59_set.insert("LegCouponPaymentDate_t_696895548");
      Leg_59.add_attribute("Issued", "LegIssueDate_t_1269636002"); // 2
      Leg_59_set.insert("LegIssueDate_t_1269636002");
      Leg_59.add_attribute("RepoCollSecTyp", "585219220"); // 2
      Leg_59_set.insert("585219220");
      Leg_59.add_attribute("RepoTrm", "219534473"); // 2
      Leg_59_set.insert("219534473");
      Leg_59.add_attribute("RepoRt", "1270258.700000"); // 2
      Leg_59_set.insert("1270258.700000");
      Leg_59.add_attribute("Fctr", "2195006.580000"); // 2
      Leg_59_set.insert("2195006.580000");
      Leg_59.add_attribute("CrdRtg", "LegCreditRating_t_749154523"); // 2
      Leg_59_set.insert("LegCreditRating_t_749154523");
      Leg_59.add_attribute("Rgstry", "LegInstrRegistry_t_1706659262"); // 2
      Leg_59_set.insert("LegInstrRegistry_t_1706659262");
      Leg_59.add_attribute("Ctry", "2134640933"); // 2
      Leg_59_set.insert("2134640933");
      Leg_59.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2022612604"); // 2
      Leg_59_set.insert("LegStateOrProvinceOfIssue_t_2022612604");
      Leg_59.add_attribute("Lcl", "LegLocaleOfIssue_t_1706390124"); // 2
      Leg_59_set.insert("LegLocaleOfIssue_t_1706390124");
      Leg_59.add_attribute("Redeem", "LegRedemptionDate_t_978019735"); // 2
      Leg_59_set.insert("LegRedemptionDate_t_978019735");
      Leg_59.add_attribute("Strk", "3571370.910000"); // 2
      Leg_59_set.insert("3571370.910000");
      Leg_59.add_attribute("StrkCcy", "GBP"); // 2
      Leg_59_set.insert("GBP");
      Leg_59.add_attribute("OptA", "132562855"); // 2
      Leg_59_set.insert("132562855");
      Leg_59.add_attribute("Cmult", "14143465.100000"); // 2
      Leg_59_set.insert("14143465.100000");
      Leg_59.add_attribute("MultTyp", "0"); // 2
      Leg_59_set.insert("0");
      Leg_59.add_attribute("FlowSchedTyp", "2"); // 2
      Leg_59_set.insert("2");
      Leg_59.add_attribute("UOM", "Alw"); // 2
      Leg_59_set.insert("Alw");
      Leg_59.add_attribute("UOMQty", "9510774.080000"); // 2
      Leg_59_set.insert("9510774.080000");
      Leg_59.add_attribute("PxUOM", "Alw"); // 2
      Leg_59_set.insert("Alw");
      Leg_59.add_attribute("PxUOMQty", "15287823.590000"); // 2
      Leg_59_set.insert("15287823.590000");
      Leg_59.add_attribute("TmUnit", "Mo"); // 2
      Leg_59_set.insert("Mo");
      Leg_59.add_attribute("ExerStyle", "2"); // 2
      Leg_59_set.insert("2");
      Leg_59.add_attribute("CpnRt", "9432662.230000"); // 2
      Leg_59_set.insert("9432662.230000");
      Leg_59.add_attribute("Exch", "LegSecurityExchange_t_113804681"); // 2
      Leg_59_set.insert("LegSecurityExchange_t_113804681");
      Leg_59.add_attribute("Issr", "LegIssuer_t_498976074"); // 2
      Leg_59_set.insert("LegIssuer_t_498976074");
      Leg_59.add_attribute("EncLegIssrLen", "1559310238"); // 2
      Leg_59_set.insert("1559310238");
      Leg_59.add_attribute("EncLegIssr", "EncodedLegIssuer_t_2075192419"); // 2
      Leg_59_set.insert("EncodedLegIssuer_t_2075192419");
      Leg_59.add_attribute("Desc", "LegSecurityDesc_t_1105515524"); // 2
      Leg_59_set.insert("LegSecurityDesc_t_1105515524");
      Leg_59.add_attribute("EncLegSecDescLen", "108722138"); // 2
      Leg_59_set.insert("108722138");
      Leg_59.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1197344773"); // 2
      Leg_59_set.insert("EncodedLegSecurityDesc_t_1197344773");
      Leg_59.add_attribute("RatioQty", "16907347.440000"); // 2
      Leg_59_set.insert("16907347.440000");
      Leg_59.add_attribute("Side", "5"); // 2
      Leg_59_set.insert("5");
      Leg_59.add_attribute("Ccy", "USD"); // 2
      Leg_59_set.insert("USD");
      Leg_59.add_attribute("Pool", "LegPool_t_1077411135"); // 2
      Leg_59_set.insert("LegPool_t_1077411135");
      Leg_59.add_attribute("Dated", "LegDatedDate_t_883546257"); // 2
      Leg_59_set.insert("LegDatedDate_t_883546257");
      Leg_59.add_attribute("CSetMo", "1897392687"); // 2
      Leg_59_set.insert("1897392687");
      Leg_59.add_attribute("IntAcrl", "LegInterestAccrualDate_t_952540091"); // 2
      Leg_59_set.insert("LegInterestAccrualDate_t_952540091");
      Leg_59.add_attribute("PutCall", "442452733"); // 2
      Leg_59_set.insert("442452733");
      Leg_59.add_attribute("LegOptionRatio", "7279287.750000"); // 2
      Leg_59_set.insert("7279287.750000");
      Leg_59.add_attribute("Px", "13096771.820000"); // 2
      Leg_59_set.insert("13096771.820000");
      all_values.push_back(Leg_59_set);
      all_compo_names.insert("Leg_59_set");

      {
        xml_element LegAID_59{"LegAID"};
        multiset<string> LegAID_59_set;
        LegAID_59.add_attribute("SecAltID", "LegSecurityAltID_t_1947169328"); // 3
        LegAID_59_set.insert("LegSecurityAltID_t_1947169328");
        LegAID_59.add_attribute("SecAltIDSrc", "G"); // 3
        LegAID_59_set.insert("G");
        all_values.push_back(LegAID_59_set);
        all_compo_names.insert("LegAID_59_set");

        Leg_59.add_element(LegAID_59);
      }
      Ord_4.add_element(Leg_59);
    }
    {
      xml_element Stip_88{"Stip"};
      multiset<string> Stip_88_set;
      Stip_88.add_attribute("StipTyp", "PROD"); // 2
      Stip_88_set.insert("PROD");
      Stip_88.add_attribute("StipVal", "LegStipulationValue_t_1214032190"); // 2
      Stip_88_set.insert("LegStipulationValue_t_1214032190");
      all_values.push_back(Stip_88_set);
      all_compo_names.insert("Stip_88_set");

      Ord_4.add_element(Stip_88);
    }
    {
      xml_element PreAll_13{"PreAll"};
      multiset<string> PreAll_13_set;
      PreAll_13.add_attribute("AllocAcct", "LegAllocAccount_t_249708567"); // 2
      PreAll_13_set.insert("LegAllocAccount_t_249708567");
      PreAll_13.add_attribute("IndAllocID", "LegIndividualAllocID_t_40146922"); // 2
      PreAll_13_set.insert("LegIndividualAllocID_t_40146922");
      PreAll_13.add_attribute("AllocQty", "682077.330000"); // 2
      PreAll_13_set.insert("682077.330000");
      PreAll_13.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_1200785975"); // 2
      PreAll_13_set.insert("LegAllocAcctIDSource_t_1200785975");
      PreAll_13.add_attribute("AllocSettlCcy", "GBP"); // 2
      PreAll_13_set.insert("GBP");
      all_values.push_back(PreAll_13_set);
      all_compo_names.insert("PreAll_13_set");

      {
        xml_element Pty_245{"Pty"};
        multiset<string> Pty_245_set;
        Pty_245.add_attribute("ID", "Nested2PartyID_t_262235296"); // 3
        Pty_245_set.insert("Nested2PartyID_t_262235296");
        Pty_245.add_attribute("Src", "6"); // 3
        Pty_245_set.insert("6");
        Pty_245.add_attribute("R", "16"); // 3
        Pty_245_set.insert("16");
        all_values.push_back(Pty_245_set);
        all_compo_names.insert("Pty_245_set");

        {
          xml_element Sub_245{"Sub"};
          multiset<string> Sub_245_set;
          Sub_245.add_attribute("ID", "Nested2PartySubID_t_376039977"); // 4
          Sub_245_set.insert("Nested2PartySubID_t_376039977");
          Sub_245.add_attribute("Typ", "5"); // 4
          Sub_245_set.insert("5");
          all_values.push_back(Sub_245_set);
          all_compo_names.insert("Sub_245_set");

          Pty_245.add_element(Sub_245);
        }
        PreAll_13.add_element(Pty_245);
      }
      Ord_4.add_element(PreAll_13);
    }
    {
      xml_element Pty_246{"Pty"};
      multiset<string> Pty_246_set;
      Pty_246.add_attribute("ID", "NestedPartyID_t_1952082905"); // 2
      Pty_246_set.insert("NestedPartyID_t_1952082905");
      Pty_246.add_attribute("Src", "9"); // 2
      Pty_246_set.insert("9");
      Pty_246.add_attribute("R", "45"); // 2
      Pty_246_set.insert("45");
      all_values.push_back(Pty_246_set);
      all_compo_names.insert("Pty_246_set");

      {
        xml_element Sub_246{"Sub"};
        multiset<string> Sub_246_set;
        Sub_246.add_attribute("ID", "NestedPartySubID_t_2060805044"); // 3
        Sub_246_set.insert("NestedPartySubID_t_2060805044");
        Sub_246.add_attribute("Typ", "23"); // 3
        Sub_246_set.insert("23");
        all_values.push_back(Sub_246_set);
        all_compo_names.insert("Sub_246_set");

        Pty_246.add_element(Sub_246);
      }
      Ord_4.add_element(Pty_246);
    }
    elt.add_element(Ord_4);
  } // end Ord
  { // Ord
    xml_element Ord_5{"Ord"};
    multiset<string> Ord_5_set;
    Ord_5.add_attribute("Qty", "1493512.060000"); // 1
    Ord_5_set.insert("1493512.060000");
    Ord_5.add_attribute("SwapTyp", "1"); // 1
    Ord_5_set.insert("1");
    Ord_5.add_attribute("LegAllocID", "LegAllocID_t_677980517"); // 1
    Ord_5_set.insert("LegAllocID_t_677980517");
    Ord_5.add_attribute("PosEfct", "N"); // 1
    Ord_5_set.insert("N");
    Ord_5.add_attribute("Cover", "1"); // 1
    Ord_5_set.insert("1");
    Ord_5.add_attribute("RefID", "LegRefID_t_1561526774"); // 1
    Ord_5_set.insert("LegRefID_t_1561526774");
    Ord_5.add_attribute("SettlTyp", "0"); // 1
    Ord_5_set.insert("0");
    Ord_5.add_attribute("SettlDt", "LegSettlDate_t_124045586"); // 1
    Ord_5_set.insert("LegSettlDate_t_124045586");
    Ord_5.add_attribute("SettlCcy", "EUR"); // 1
    Ord_5_set.insert("EUR");
    Ord_5.add_attribute("OrdQty", "14337227.690000"); // 1
    Ord_5_set.insert("14337227.690000");
    Ord_5.add_attribute("LegVolatility", "18036651.880000"); // 1
    Ord_5_set.insert("18036651.880000");
    Ord_5.add_attribute("LegDividendYield", "2746290.640000"); // 1
    Ord_5_set.insert("2746290.640000");
    Ord_5.add_attribute("LegCurrencyRatio", "7284791.590000"); // 1
    Ord_5_set.insert("7284791.590000");
    Ord_5.add_attribute("LegExecInst", "o"); // 1
    Ord_5_set.insert("o");
    all_values.push_back(Ord_5_set);
    all_compo_names.insert("Ord_5_set");

    {
      xml_element Leg_60{"Leg"};
      multiset<string> Leg_60_set;
      Leg_60.add_attribute("Sym", "LegSymbol_t_524337632"); // 2
      Leg_60_set.insert("LegSymbol_t_524337632");
      Leg_60.add_attribute("Sfx", "WI"); // 2
      Leg_60_set.insert("WI");
      Leg_60.add_attribute("ID", "LegSecurityID_t_938421463"); // 2
      Leg_60_set.insert("LegSecurityID_t_938421463");
      Leg_60.add_attribute("Src", "A"); // 2
      Leg_60_set.insert("A");
      Leg_60.add_attribute("Prod", "9"); // 2
      Leg_60_set.insert("9");
      Leg_60.add_attribute("CFI", "LegCFICode_t_387927907"); // 2
      Leg_60_set.insert("LegCFICode_t_387927907");
      Leg_60.add_attribute("SecTyp", "SWING"); // 2
      Leg_60_set.insert("SWING");
      Leg_60.add_attribute("SecSubTyp", "LegSecuritySubType_t_780329052"); // 2
      Leg_60_set.insert("LegSecuritySubType_t_780329052");
      Leg_60.add_attribute("MMY", "780700575"); // 2
      Leg_60_set.insert("780700575");
      Leg_60.add_attribute("Mat", "LegMaturityDate_t_215915233"); // 2
      Leg_60_set.insert("LegMaturityDate_t_215915233");
      Leg_60.add_attribute("MatTm", "280913638"); // 2
      Leg_60_set.insert("280913638");
      Leg_60.add_attribute("CpnPmt", "LegCouponPaymentDate_t_585299832"); // 2
      Leg_60_set.insert("LegCouponPaymentDate_t_585299832");
      Leg_60.add_attribute("Issued", "LegIssueDate_t_519663981"); // 2
      Leg_60_set.insert("LegIssueDate_t_519663981");
      Leg_60.add_attribute("RepoCollSecTyp", "887013748"); // 2
      Leg_60_set.insert("887013748");
      Leg_60.add_attribute("RepoTrm", "498621228"); // 2
      Leg_60_set.insert("498621228");
      Leg_60.add_attribute("RepoRt", "20207575.030000"); // 2
      Leg_60_set.insert("20207575.030000");
      Leg_60.add_attribute("Fctr", "10363649.540000"); // 2
      Leg_60_set.insert("10363649.540000");
      Leg_60.add_attribute("CrdRtg", "LegCreditRating_t_740199236"); // 2
      Leg_60_set.insert("LegCreditRating_t_740199236");
      Leg_60.add_attribute("Rgstry", "LegInstrRegistry_t_551254372"); // 2
      Leg_60_set.insert("LegInstrRegistry_t_551254372");
      Leg_60.add_attribute("Ctry", "948467914"); // 2
      Leg_60_set.insert("948467914");
      Leg_60.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_2059188379"); // 2
      Leg_60_set.insert("LegStateOrProvinceOfIssue_t_2059188379");
      Leg_60.add_attribute("Lcl", "LegLocaleOfIssue_t_2112781146"); // 2
      Leg_60_set.insert("LegLocaleOfIssue_t_2112781146");
      Leg_60.add_attribute("Redeem", "LegRedemptionDate_t_610479914"); // 2
      Leg_60_set.insert("LegRedemptionDate_t_610479914");
      Leg_60.add_attribute("Strk", "357503.180000"); // 2
      Leg_60_set.insert("357503.180000");
      Leg_60.add_attribute("StrkCcy", "CHF"); // 2
      Leg_60_set.insert("CHF");
      Leg_60.add_attribute("OptA", "1469473087"); // 2
      Leg_60_set.insert("1469473087");
      Leg_60.add_attribute("Cmult", "16254585.460000"); // 2
      Leg_60_set.insert("16254585.460000");
      Leg_60.add_attribute("MultTyp", "2"); // 2
      Leg_60_set.insert("2");
      Leg_60.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_60_set.insert("3");
      Leg_60.add_attribute("UOM", "USD"); // 2
      Leg_60_set.insert("USD");
      Leg_60.add_attribute("UOMQty", "17993873.860000"); // 2
      Leg_60_set.insert("17993873.860000");
      Leg_60.add_attribute("PxUOM", "MWh"); // 2
      Leg_60_set.insert("MWh");
      Leg_60.add_attribute("PxUOMQty", "12866100.920000"); // 2
      Leg_60_set.insert("12866100.920000");
      Leg_60.add_attribute("TmUnit", "Min"); // 2
      Leg_60_set.insert("Min");
      Leg_60.add_attribute("ExerStyle", "0"); // 2
      Leg_60_set.insert("0");
      Leg_60.add_attribute("CpnRt", "16745380.000000"); // 2
      Leg_60_set.insert("16745380.000000");
      Leg_60.add_attribute("Exch", "LegSecurityExchange_t_1216902601"); // 2
      Leg_60_set.insert("LegSecurityExchange_t_1216902601");
      Leg_60.add_attribute("Issr", "LegIssuer_t_1230660624"); // 2
      Leg_60_set.insert("LegIssuer_t_1230660624");
      Leg_60.add_attribute("EncLegIssrLen", "307754927"); // 2
      Leg_60_set.insert("307754927");
      Leg_60.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1432817834"); // 2
      Leg_60_set.insert("EncodedLegIssuer_t_1432817834");
      Leg_60.add_attribute("Desc", "LegSecurityDesc_t_1511574262"); // 2
      Leg_60_set.insert("LegSecurityDesc_t_1511574262");
      Leg_60.add_attribute("EncLegSecDescLen", "893054759"); // 2
      Leg_60_set.insert("893054759");
      Leg_60.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_1952481815"); // 2
      Leg_60_set.insert("EncodedLegSecurityDesc_t_1952481815");
      Leg_60.add_attribute("RatioQty", "2511043.620000"); // 2
      Leg_60_set.insert("2511043.620000");
      Leg_60.add_attribute("Side", "5"); // 2
      Leg_60_set.insert("5");
      Leg_60.add_attribute("Ccy", "GBP"); // 2
      Leg_60_set.insert("GBP");
      Leg_60.add_attribute("Pool", "LegPool_t_2131875224"); // 2
      Leg_60_set.insert("LegPool_t_2131875224");
      Leg_60.add_attribute("Dated", "LegDatedDate_t_229526394"); // 2
      Leg_60_set.insert("LegDatedDate_t_229526394");
      Leg_60.add_attribute("CSetMo", "88453582"); // 2
      Leg_60_set.insert("88453582");
      Leg_60.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2043579956"); // 2
      Leg_60_set.insert("LegInterestAccrualDate_t_2043579956");
      Leg_60.add_attribute("PutCall", "194823893"); // 2
      Leg_60_set.insert("194823893");
      Leg_60.add_attribute("LegOptionRatio", "6989334.970000"); // 2
      Leg_60_set.insert("6989334.970000");
      Leg_60.add_attribute("Px", "20793302.740000"); // 2
      Leg_60_set.insert("20793302.740000");
      all_values.push_back(Leg_60_set);
      all_compo_names.insert("Leg_60_set");

      {
        xml_element LegAID_60{"LegAID"};
        multiset<string> LegAID_60_set;
        LegAID_60.add_attribute("SecAltID", "LegSecurityAltID_t_16617251"); // 3
        LegAID_60_set.insert("LegSecurityAltID_t_16617251");
        LegAID_60.add_attribute("SecAltIDSrc", "3"); // 3
        LegAID_60_set.insert("3");
        all_values.push_back(LegAID_60_set);
        all_compo_names.insert("LegAID_60_set");

        Leg_60.add_element(LegAID_60);
      }
      Ord_5.add_element(Leg_60);
    }
    {
      xml_element Stip_89{"Stip"};
      multiset<string> Stip_89_set;
      Stip_89.add_attribute("StipTyp", "PPL"); // 2
      Stip_89_set.insert("PPL");
      Stip_89.add_attribute("StipVal", "LegStipulationValue_t_1642075798"); // 2
      Stip_89_set.insert("LegStipulationValue_t_1642075798");
      all_values.push_back(Stip_89_set);
      all_compo_names.insert("Stip_89_set");

      Ord_5.add_element(Stip_89);
    }
    {
      xml_element PreAll_14{"PreAll"};
      multiset<string> PreAll_14_set;
      PreAll_14.add_attribute("AllocAcct", "LegAllocAccount_t_826920292"); // 2
      PreAll_14_set.insert("LegAllocAccount_t_826920292");
      PreAll_14.add_attribute("IndAllocID", "LegIndividualAllocID_t_1451788311"); // 2
      PreAll_14_set.insert("LegIndividualAllocID_t_1451788311");
      PreAll_14.add_attribute("AllocQty", "19902644.270000"); // 2
      PreAll_14_set.insert("19902644.270000");
      PreAll_14.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_478824030"); // 2
      PreAll_14_set.insert("LegAllocAcctIDSource_t_478824030");
      PreAll_14.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_14_set.insert("CAN");
      all_values.push_back(PreAll_14_set);
      all_compo_names.insert("PreAll_14_set");

      {
        xml_element Pty_247{"Pty"};
        multiset<string> Pty_247_set;
        Pty_247.add_attribute("ID", "Nested2PartyID_t_1855851376"); // 3
        Pty_247_set.insert("Nested2PartyID_t_1855851376");
        Pty_247.add_attribute("Src", "D"); // 3
        Pty_247_set.insert("D");
        Pty_247.add_attribute("R", "16"); // 3
        Pty_247_set.insert("16");
        all_values.push_back(Pty_247_set);
        all_compo_names.insert("Pty_247_set");

        {
          xml_element Sub_247{"Sub"};
          multiset<string> Sub_247_set;
          Sub_247.add_attribute("ID", "Nested2PartySubID_t_925270329"); // 4
          Sub_247_set.insert("Nested2PartySubID_t_925270329");
          Sub_247.add_attribute("Typ", "23"); // 4
          Sub_247_set.insert("23");
          all_values.push_back(Sub_247_set);
          all_compo_names.insert("Sub_247_set");

          Pty_247.add_element(Sub_247);
        }
        PreAll_14.add_element(Pty_247);
      }
      Ord_5.add_element(PreAll_14);
    }
    {
      xml_element Pty_248{"Pty"};
      multiset<string> Pty_248_set;
      Pty_248.add_attribute("ID", "NestedPartyID_t_964200150"); // 2
      Pty_248_set.insert("NestedPartyID_t_964200150");
      Pty_248.add_attribute("Src", "G"); // 2
      Pty_248_set.insert("G");
      Pty_248.add_attribute("R", "70"); // 2
      Pty_248_set.insert("70");
      all_values.push_back(Pty_248_set);
      all_compo_names.insert("Pty_248_set");

      {
        xml_element Sub_248{"Sub"};
        multiset<string> Sub_248_set;
        Sub_248.add_attribute("ID", "NestedPartySubID_t_1857254910"); // 3
        Sub_248_set.insert("NestedPartySubID_t_1857254910");
        Sub_248.add_attribute("Typ", "26"); // 3
        Sub_248_set.insert("26");
        all_values.push_back(Sub_248_set);
        all_compo_names.insert("Sub_248_set");

        Pty_248.add_element(Sub_248);
      }
      Ord_5.add_element(Pty_248);
    }
    elt.add_element(Ord_5);
  } // end Ord
  { // Ord
    xml_element Ord_6{"Ord"};
    multiset<string> Ord_6_set;
    Ord_6.add_attribute("Qty", "14195865.140000"); // 1
    Ord_6_set.insert("14195865.140000");
    Ord_6.add_attribute("SwapTyp", "4"); // 1
    Ord_6_set.insert("4");
    Ord_6.add_attribute("LegAllocID", "LegAllocID_t_1841358353"); // 1
    Ord_6_set.insert("LegAllocID_t_1841358353");
    Ord_6.add_attribute("PosEfct", "O"); // 1
    Ord_6_set.insert("O");
    Ord_6.add_attribute("Cover", "0"); // 1
    Ord_6_set.insert("0");
    Ord_6.add_attribute("RefID", "LegRefID_t_2070884747"); // 1
    Ord_6_set.insert("LegRefID_t_2070884747");
    Ord_6.add_attribute("SettlTyp", "1"); // 1
    Ord_6_set.insert("1");
    Ord_6.add_attribute("SettlDt", "LegSettlDate_t_981935134"); // 1
    Ord_6_set.insert("LegSettlDate_t_981935134");
    Ord_6.add_attribute("SettlCcy", "GBP"); // 1
    Ord_6_set.insert("GBP");
    Ord_6.add_attribute("OrdQty", "9137817.600000"); // 1
    Ord_6_set.insert("9137817.600000");
    Ord_6.add_attribute("LegVolatility", "1348422.440000"); // 1
    Ord_6_set.insert("1348422.440000");
    Ord_6.add_attribute("LegDividendYield", "8988298.000000"); // 1
    Ord_6_set.insert("8988298.000000");
    Ord_6.add_attribute("LegCurrencyRatio", "1676178.250000"); // 1
    Ord_6_set.insert("1676178.250000");
    Ord_6.add_attribute("LegExecInst", "E"); // 1
    Ord_6_set.insert("E");
    all_values.push_back(Ord_6_set);
    all_compo_names.insert("Ord_6_set");

    {
      xml_element Leg_61{"Leg"};
      multiset<string> Leg_61_set;
      Leg_61.add_attribute("Sym", "LegSymbol_t_1725750093"); // 2
      Leg_61_set.insert("LegSymbol_t_1725750093");
      Leg_61.add_attribute("Sfx", "CD"); // 2
      Leg_61_set.insert("CD");
      Leg_61.add_attribute("ID", "LegSecurityID_t_1619698821"); // 2
      Leg_61_set.insert("LegSecurityID_t_1619698821");
      Leg_61.add_attribute("Src", "E"); // 2
      Leg_61_set.insert("E");
      Leg_61.add_attribute("Prod", "9"); // 2
      Leg_61_set.insert("9");
      Leg_61.add_attribute("CFI", "LegCFICode_t_601606044"); // 2
      Leg_61_set.insert("LegCFICode_t_601606044");
      Leg_61.add_attribute("SecTyp", "TAXA"); // 2
      Leg_61_set.insert("TAXA");
      Leg_61.add_attribute("SecSubTyp", "LegSecuritySubType_t_169052745"); // 2
      Leg_61_set.insert("LegSecuritySubType_t_169052745");
      Leg_61.add_attribute("MMY", "1258051268"); // 2
      Leg_61_set.insert("1258051268");
      Leg_61.add_attribute("Mat", "LegMaturityDate_t_690728532"); // 2
      Leg_61_set.insert("LegMaturityDate_t_690728532");
      Leg_61.add_attribute("MatTm", "1973444284"); // 2
      Leg_61_set.insert("1973444284");
      Leg_61.add_attribute("CpnPmt", "LegCouponPaymentDate_t_74767770"); // 2
      Leg_61_set.insert("LegCouponPaymentDate_t_74767770");
      Leg_61.add_attribute("Issued", "LegIssueDate_t_901333047"); // 2
      Leg_61_set.insert("LegIssueDate_t_901333047");
      Leg_61.add_attribute("RepoCollSecTyp", "994442788"); // 2
      Leg_61_set.insert("994442788");
      Leg_61.add_attribute("RepoTrm", "1932022680"); // 2
      Leg_61_set.insert("1932022680");
      Leg_61.add_attribute("RepoRt", "9169357.300000"); // 2
      Leg_61_set.insert("9169357.300000");
      Leg_61.add_attribute("Fctr", "2665456.550000"); // 2
      Leg_61_set.insert("2665456.550000");
      Leg_61.add_attribute("CrdRtg", "LegCreditRating_t_885986282"); // 2
      Leg_61_set.insert("LegCreditRating_t_885986282");
      Leg_61.add_attribute("Rgstry", "LegInstrRegistry_t_610810435"); // 2
      Leg_61_set.insert("LegInstrRegistry_t_610810435");
      Leg_61.add_attribute("Ctry", "826117837"); // 2
      Leg_61_set.insert("826117837");
      Leg_61.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_1971825109"); // 2
      Leg_61_set.insert("LegStateOrProvinceOfIssue_t_1971825109");
      Leg_61.add_attribute("Lcl", "LegLocaleOfIssue_t_534211534"); // 2
      Leg_61_set.insert("LegLocaleOfIssue_t_534211534");
      Leg_61.add_attribute("Redeem", "LegRedemptionDate_t_1474143602"); // 2
      Leg_61_set.insert("LegRedemptionDate_t_1474143602");
      Leg_61.add_attribute("Strk", "8062765.950000"); // 2
      Leg_61_set.insert("8062765.950000");
      Leg_61.add_attribute("StrkCcy", "GBP"); // 2
      Leg_61_set.insert("GBP");
      Leg_61.add_attribute("OptA", "1720058356"); // 2
      Leg_61_set.insert("1720058356");
      Leg_61.add_attribute("Cmult", "7872787.710000"); // 2
      Leg_61_set.insert("7872787.710000");
      Leg_61.add_attribute("MultTyp", "1"); // 2
      Leg_61_set.insert("1");
      Leg_61.add_attribute("FlowSchedTyp", "1"); // 2
      Leg_61_set.insert("1");
      Leg_61.add_attribute("UOM", "Bu"); // 2
      Leg_61_set.insert("Bu");
      Leg_61.add_attribute("UOMQty", "11507154.620000"); // 2
      Leg_61_set.insert("11507154.620000");
      Leg_61.add_attribute("PxUOM", "MMBtu"); // 2
      Leg_61_set.insert("MMBtu");
      Leg_61.add_attribute("PxUOMQty", "20364119.860000"); // 2
      Leg_61_set.insert("20364119.860000");
      Leg_61.add_attribute("TmUnit", "H"); // 2
      Leg_61_set.insert("H");
      Leg_61.add_attribute("ExerStyle", "2"); // 2
      Leg_61_set.insert("2");
      Leg_61.add_attribute("CpnRt", "4905343.820000"); // 2
      Leg_61_set.insert("4905343.820000");
      Leg_61.add_attribute("Exch", "LegSecurityExchange_t_973264141"); // 2
      Leg_61_set.insert("LegSecurityExchange_t_973264141");
      Leg_61.add_attribute("Issr", "LegIssuer_t_1123973246"); // 2
      Leg_61_set.insert("LegIssuer_t_1123973246");
      Leg_61.add_attribute("EncLegIssrLen", "1748585650"); // 2
      Leg_61_set.insert("1748585650");
      Leg_61.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1663992673"); // 2
      Leg_61_set.insert("EncodedLegIssuer_t_1663992673");
      Leg_61.add_attribute("Desc", "LegSecurityDesc_t_949933882"); // 2
      Leg_61_set.insert("LegSecurityDesc_t_949933882");
      Leg_61.add_attribute("EncLegSecDescLen", "1823353421"); // 2
      Leg_61_set.insert("1823353421");
      Leg_61.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_417842073"); // 2
      Leg_61_set.insert("EncodedLegSecurityDesc_t_417842073");
      Leg_61.add_attribute("RatioQty", "19443766.710000"); // 2
      Leg_61_set.insert("19443766.710000");
      Leg_61.add_attribute("Side", "6"); // 2
      Leg_61_set.insert("6");
      Leg_61.add_attribute("Ccy", "USD"); // 2
      Leg_61_set.insert("USD");
      Leg_61.add_attribute("Pool", "LegPool_t_346395088"); // 2
      Leg_61_set.insert("LegPool_t_346395088");
      Leg_61.add_attribute("Dated", "LegDatedDate_t_1945588238"); // 2
      Leg_61_set.insert("LegDatedDate_t_1945588238");
      Leg_61.add_attribute("CSetMo", "889556515"); // 2
      Leg_61_set.insert("889556515");
      Leg_61.add_attribute("IntAcrl", "LegInterestAccrualDate_t_170736549"); // 2
      Leg_61_set.insert("LegInterestAccrualDate_t_170736549");
      Leg_61.add_attribute("PutCall", "332316124"); // 2
      Leg_61_set.insert("332316124");
      Leg_61.add_attribute("LegOptionRatio", "2162164.700000"); // 2
      Leg_61_set.insert("2162164.700000");
      Leg_61.add_attribute("Px", "9770131.440000"); // 2
      Leg_61_set.insert("9770131.440000");
      all_values.push_back(Leg_61_set);
      all_compo_names.insert("Leg_61_set");

      {
        xml_element LegAID_61{"LegAID"};
        multiset<string> LegAID_61_set;
        LegAID_61.add_attribute("SecAltID", "LegSecurityAltID_t_984752651"); // 3
        LegAID_61_set.insert("LegSecurityAltID_t_984752651");
        LegAID_61.add_attribute("SecAltIDSrc", "F"); // 3
        LegAID_61_set.insert("F");
        all_values.push_back(LegAID_61_set);
        all_compo_names.insert("LegAID_61_set");

        Leg_61.add_element(LegAID_61);
      }
      Ord_6.add_element(Leg_61);
    }
    {
      xml_element Stip_90{"Stip"};
      multiset<string> Stip_90_set;
      Stip_90.add_attribute("StipTyp", "HAIRCUT"); // 2
      Stip_90_set.insert("HAIRCUT");
      Stip_90.add_attribute("StipVal", "LegStipulationValue_t_1772031422"); // 2
      Stip_90_set.insert("LegStipulationValue_t_1772031422");
      all_values.push_back(Stip_90_set);
      all_compo_names.insert("Stip_90_set");

      Ord_6.add_element(Stip_90);
    }
    {
      xml_element PreAll_15{"PreAll"};
      multiset<string> PreAll_15_set;
      PreAll_15.add_attribute("AllocAcct", "LegAllocAccount_t_314801055"); // 2
      PreAll_15_set.insert("LegAllocAccount_t_314801055");
      PreAll_15.add_attribute("IndAllocID", "LegIndividualAllocID_t_289780386"); // 2
      PreAll_15_set.insert("LegIndividualAllocID_t_289780386");
      PreAll_15.add_attribute("AllocQty", "412609.390000"); // 2
      PreAll_15_set.insert("412609.390000");
      PreAll_15.add_attribute("AllocAcctIDSrc", "LegAllocAcctIDSource_t_1465516517"); // 2
      PreAll_15_set.insert("LegAllocAcctIDSource_t_1465516517");
      PreAll_15.add_attribute("AllocSettlCcy", "CAN"); // 2
      PreAll_15_set.insert("CAN");
      all_values.push_back(PreAll_15_set);
      all_compo_names.insert("PreAll_15_set");

      {
        xml_element Pty_249{"Pty"};
        multiset<string> Pty_249_set;
        Pty_249.add_attribute("ID", "Nested2PartyID_t_525838807"); // 3
        Pty_249_set.insert("Nested2PartyID_t_525838807");
        Pty_249.add_attribute("Src", "C"); // 3
        Pty_249_set.insert("C");
        Pty_249.add_attribute("R", "1"); // 3
        Pty_249_set.insert("1");
        all_values.push_back(Pty_249_set);
        all_compo_names.insert("Pty_249_set");

        {
          xml_element Sub_249{"Sub"};
          multiset<string> Sub_249_set;
          Sub_249.add_attribute("ID", "Nested2PartySubID_t_1499102948"); // 4
          Sub_249_set.insert("Nested2PartySubID_t_1499102948");
          Sub_249.add_attribute("Typ", "6"); // 4
          Sub_249_set.insert("6");
          all_values.push_back(Sub_249_set);
          all_compo_names.insert("Sub_249_set");

          Pty_249.add_element(Sub_249);
        }
        PreAll_15.add_element(Pty_249);
      }
      Ord_6.add_element(PreAll_15);
    }
    {
      xml_element Pty_250{"Pty"};
      multiset<string> Pty_250_set;
      Pty_250.add_attribute("ID", "NestedPartyID_t_21825662"); // 2
      Pty_250_set.insert("NestedPartyID_t_21825662");
      Pty_250.add_attribute("Src", "8"); // 2
      Pty_250_set.insert("8");
      Pty_250.add_attribute("R", "40"); // 2
      Pty_250_set.insert("40");
      all_values.push_back(Pty_250_set);
      all_compo_names.insert("Pty_250_set");

      {
        xml_element Sub_250{"Sub"};
        multiset<string> Sub_250_set;
        Sub_250.add_attribute("ID", "NestedPartySubID_t_1845179083"); // 3
        Sub_250_set.insert("NestedPartySubID_t_1845179083");
        Sub_250.add_attribute("Typ", "21"); // 3
        Sub_250_set.insert("21");
        all_values.push_back(Sub_250_set);
        all_compo_names.insert("Sub_250_set");

        Pty_250.add_element(Sub_250);
      }
      Ord_6.add_element(Pty_250);
    }
    elt.add_element(Ord_6);
  } // end Ord
  { // OrdQty
    xml_element OrdQty_15{"OrdQty"};
    multiset<string> OrdQty_15_set;
    OrdQty_15.add_attribute("Qty", "1801324.130000"); // 1
    OrdQty_15_set.insert("1801324.130000");
    OrdQty_15.add_attribute("Cash", "13055878.890000"); // 1
    OrdQty_15_set.insert("13055878.890000");
    OrdQty_15.add_attribute("Pct", "6207482.010000"); // 1
    OrdQty_15_set.insert("6207482.010000");
    OrdQty_15.add_attribute("RndDir", "2"); // 1
    OrdQty_15_set.insert("2");
    OrdQty_15.add_attribute("RndMod", "16519829.770000"); // 1
    OrdQty_15_set.insert("16519829.770000");
    all_values.push_back(OrdQty_15_set);
    all_compo_names.insert("OrdQty_15_set");

    elt.add_element(OrdQty_15);
  } // end OrdQty
  { // TrgrInstr
    xml_element TrgrInstr_5{"TrgrInstr"};
    multiset<string> TrgrInstr_5_set;
    TrgrInstr_5.add_attribute("TrgrTyp", "4"); // 1
    TrgrInstr_5_set.insert("4");
    TrgrInstr_5.add_attribute("TrgrActn", "1"); // 1
    TrgrInstr_5_set.insert("1");
    TrgrInstr_5.add_attribute("TrgrPx", "18227195.260000"); // 1
    TrgrInstr_5_set.insert("18227195.260000");
    TrgrInstr_5.add_attribute("TrgrSym", "TriggerSymbol_t_751168916"); // 1
    TrgrInstr_5_set.insert("TriggerSymbol_t_751168916");
    TrgrInstr_5.add_attribute("TrgrSecID", "TriggerSecurityID_t_1349344076"); // 1
    TrgrInstr_5_set.insert("TriggerSecurityID_t_1349344076");
    TrgrInstr_5.add_attribute("TrgrSecIDSrc", "J"); // 1
    TrgrInstr_5_set.insert("J");
    TrgrInstr_5.add_attribute("TrgrSecDesc", "TriggerSecurityDesc_t_1735921567"); // 1
    TrgrInstr_5_set.insert("TriggerSecurityDesc_t_1735921567");
    TrgrInstr_5.add_attribute("TrgrPxTyp", "6"); // 1
    TrgrInstr_5_set.insert("6");
    TrgrInstr_5.add_attribute("TrgrPxTypScp", "3"); // 1
    TrgrInstr_5_set.insert("3");
    TrgrInstr_5.add_attribute("TrgrPxDir", "U"); // 1
    TrgrInstr_5_set.insert("U");
    TrgrInstr_5.add_attribute("TrgrNewPx", "4064971.700000"); // 1
    TrgrInstr_5_set.insert("4064971.700000");
    TrgrInstr_5.add_attribute("TrgrOrdTyp", "2"); // 1
    TrgrInstr_5_set.insert("2");
    TrgrInstr_5.add_attribute("TrgrNewQty", "14017302.810000"); // 1
    TrgrInstr_5_set.insert("14017302.810000");
    TrgrInstr_5.add_attribute("TrgrTrdSessID", "TriggerTradingSessionID_t_1872013688"); // 1
    TrgrInstr_5_set.insert("TriggerTradingSessionID_t_1872013688");
    TrgrInstr_5.add_attribute("TrgrTrdSessSubID", "TriggerTradingSessionSubID_t_993512669"); // 1
    TrgrInstr_5_set.insert("TriggerTradingSessionSubID_t_993512669");
    all_values.push_back(TrgrInstr_5_set);
    all_compo_names.insert("TrgrInstr_5_set");

    elt.add_element(TrgrInstr_5);
  } // end TrgrInstr
  { // Comm
    xml_element Comm_22{"Comm"};
    multiset<string> Comm_22_set;
    Comm_22.add_attribute("Comm", "Commission_t_1331919559"); // 1
    Comm_22_set.insert("Commission_t_1331919559");
    Comm_22.add_attribute("CommTyp", "2"); // 1
    Comm_22_set.insert("2");
    Comm_22.add_attribute("Ccy", "EUR"); // 1
    Comm_22_set.insert("EUR");
    Comm_22.add_attribute("FundRenewWaiv", "Y"); // 1
    Comm_22_set.insert("Y");
    all_values.push_back(Comm_22_set);
    all_compo_names.insert("Comm_22_set");

    elt.add_element(Comm_22);
  } // end Comm
  { // PegInstr
    xml_element PegInstr_5{"PegInstr"};
    multiset<string> PegInstr_5_set;
    PegInstr_5.add_attribute("OfstVal", "8836340.850000"); // 1
    PegInstr_5_set.insert("8836340.850000");
    PegInstr_5.add_attribute("PegPxTyp", "2"); // 1
    PegInstr_5_set.insert("2");
    PegInstr_5.add_attribute("MoveTyp", "0"); // 1
    PegInstr_5_set.insert("0");
    PegInstr_5.add_attribute("OfstTyp", "3"); // 1
    PegInstr_5_set.insert("3");
    PegInstr_5.add_attribute("LmtTyp", "0"); // 1
    PegInstr_5_set.insert("0");
    PegInstr_5.add_attribute("RndDir", "2"); // 1
    PegInstr_5_set.insert("2");
    PegInstr_5.add_attribute("Scope", "1"); // 1
    PegInstr_5_set.insert("1");
    PegInstr_5.add_attribute("PegSecurityIDSource", "J"); // 1
    PegInstr_5_set.insert("J");
    PegInstr_5.add_attribute("PegSecID", "PegSecurityID_t_524318720"); // 1
    PegInstr_5_set.insert("PegSecurityID_t_524318720");
    PegInstr_5.add_attribute("PgSymbl", "PegSymbol_t_1690576979"); // 1
    PegInstr_5_set.insert("PegSymbol_t_1690576979");
    PegInstr_5.add_attribute("PegSecDesc", "PegSecurityDesc_t_134767887"); // 1
    PegInstr_5_set.insert("PegSecurityDesc_t_134767887");
    all_values.push_back(PegInstr_5_set);
    all_compo_names.insert("PegInstr_5_set");

    elt.add_element(PegInstr_5);
  } // end PegInstr
  { // DiscInstr
    xml_element DiscInstr_5{"DiscInstr"};
    multiset<string> DiscInstr_5_set;
    DiscInstr_5.add_attribute("DsctnInst", "0"); // 1
    DiscInstr_5_set.insert("0");
    DiscInstr_5.add_attribute("OfstValu", "6762209.380000"); // 1
    DiscInstr_5_set.insert("6762209.380000");
    DiscInstr_5.add_attribute("MoveTyp", "1"); // 1
    DiscInstr_5_set.insert("1");
    DiscInstr_5.add_attribute("OfstTyp", "0"); // 1
    DiscInstr_5_set.insert("0");
    DiscInstr_5.add_attribute("LimitTyp", "0"); // 1
    DiscInstr_5_set.insert("0");
    DiscInstr_5.add_attribute("RndDir", "2"); // 1
    DiscInstr_5_set.insert("2");
    DiscInstr_5.add_attribute("Scope", "4"); // 1
    DiscInstr_5_set.insert("4");
    all_values.push_back(DiscInstr_5_set);
    all_compo_names.insert("DiscInstr_5_set");

    elt.add_element(DiscInstr_5);
  } // end DiscInstr
  { // StrtPrmGrp
    xml_element StrtPrmGrp_12{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_12_set;
    StrtPrmGrp_12.add_attribute("StrtPrmNme", "StrategyParameterName_t_1664089662"); // 1
    StrtPrmGrp_12_set.insert("StrategyParameterName_t_1664089662");
    StrtPrmGrp_12.add_attribute("StrtPrmTyp", "23"); // 1
    StrtPrmGrp_12_set.insert("23");
    StrtPrmGrp_12.add_attribute("StrtPrmVal", "StrategyParameterValue_t_376274652"); // 1
    StrtPrmGrp_12_set.insert("StrategyParameterValue_t_376274652");
    all_values.push_back(StrtPrmGrp_12_set);
    all_compo_names.insert("StrtPrmGrp_12_set");

    elt.add_element(StrtPrmGrp_12);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_13{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_13_set;
    StrtPrmGrp_13.add_attribute("StrtPrmNme", "StrategyParameterName_t_1008223275"); // 1
    StrtPrmGrp_13_set.insert("StrategyParameterName_t_1008223275");
    StrtPrmGrp_13.add_attribute("StrtPrmTyp", "22"); // 1
    StrtPrmGrp_13_set.insert("22");
    StrtPrmGrp_13.add_attribute("StrtPrmVal", "StrategyParameterValue_t_100804692"); // 1
    StrtPrmGrp_13_set.insert("StrategyParameterValue_t_100804692");
    all_values.push_back(StrtPrmGrp_13_set);
    all_compo_names.insert("StrtPrmGrp_13_set");

    elt.add_element(StrtPrmGrp_13);
  } // end StrtPrmGrp
  { // StrtPrmGrp
    xml_element StrtPrmGrp_14{"StrtPrmGrp"};
    multiset<string> StrtPrmGrp_14_set;
    StrtPrmGrp_14.add_attribute("StrtPrmNme", "StrategyParameterName_t_2001735944"); // 1
    StrtPrmGrp_14_set.insert("StrategyParameterName_t_2001735944");
    StrtPrmGrp_14.add_attribute("StrtPrmTyp", "4"); // 1
    StrtPrmGrp_14_set.insert("4");
    StrtPrmGrp_14.add_attribute("StrtPrmVal", "StrategyParameterValue_t_351173539"); // 1
    StrtPrmGrp_14_set.insert("StrategyParameterValue_t_351173539");
    all_values.push_back(StrtPrmGrp_14_set);
    all_compo_names.insert("StrtPrmGrp_14_set");

    elt.add_element(StrtPrmGrp_14);
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
