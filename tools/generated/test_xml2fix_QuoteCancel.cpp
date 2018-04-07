#include <gtest/gtest.h>

#include "converter/fixml2fix_converter.hxx"
#include "converter/xml_element_helper.hxx"
#include "converter/fix_helper.hxx"
#include "util/fix_env.hxx"
#include "tools/test_util.hxx"

#include <boost/log/trivial.hpp>

#include <quickfix/fix50sp2/QuoteCancel.h>

#include <list>
#include <set>
#include <string>
#include <utility>

using namespace std;
using namespace fix2xml;

TEST ( QuoteCancel_message_t, set_fields)
{

  fixml2fix_converter converter {"../spec/fix/FIX50SP2.xml", "../spec/xsd/fixml-main-5-0-SP2.xsd"};
  auto& fixml_dict = converter.fixml_dico();
  auto &quickfix_dico = converter.quickfix_dico();
  ASSERT_TRUE(converter.init());

  xml_element elt {"QuotCxl" };

  list<multiset<string>> all_values;
  multiset<string> all_compo_names;
  multiset<string> QuoteCancel_message_t_0;
  elt.add_attribute("ReqID", "QuoteReqID_t_1417183786"); // 0
  QuoteCancel_message_t_0.insert("QuoteReqID_t_1417183786");
  elt.add_attribute("QID", "QuoteID_t_2072295410"); // 0
  QuoteCancel_message_t_0.insert("QuoteID_t_2072295410");
  elt.add_attribute("QtMsgID", "QuoteMsgID_t_649207352"); // 0
  QuoteCancel_message_t_0.insert("QuoteMsgID_t_649207352");
  elt.add_attribute("CxlTyp", "5"); // 0
  QuoteCancel_message_t_0.insert("5");
  elt.add_attribute("Typ", "0"); // 0
  QuoteCancel_message_t_0.insert("0");
  elt.add_attribute("RspLvl", "1"); // 0
  QuoteCancel_message_t_0.insert("1");
  elt.add_attribute("Acct", "Account_t_375045749"); // 0
  QuoteCancel_message_t_0.insert("Account_t_375045749");
  elt.add_attribute("AcctIDSrc", "3"); // 0
  QuoteCancel_message_t_0.insert("3");
  elt.add_attribute("AcctTyp", "4"); // 0
  QuoteCancel_message_t_0.insert("4");
  elt.add_attribute("SesID", "4"); // 0
  QuoteCancel_message_t_0.insert("4");
  elt.add_attribute("SesSub", "2"); // 0
  QuoteCancel_message_t_0.insert("2");
  all_values.push_back(QuoteCancel_message_t_0);
  all_compo_names.insert("QuoteCancel_message_t");

  { // Hdr
    xml_element Hdr_69{"Hdr"};
    multiset<string> Hdr_69_set;
    Hdr_69.add_attribute("SeqNum", "61316710"); // 1
    Hdr_69_set.insert("61316710");
    Hdr_69.add_attribute("SID", "SenderCompID_t_1909508381"); // 1
    Hdr_69_set.insert("SenderCompID_t_1909508381");
    Hdr_69.add_attribute("TID", "TargetCompID_t_255944032"); // 1
    Hdr_69_set.insert("TargetCompID_t_255944032");
    Hdr_69.add_attribute("OBID", "OnBehalfOfCompID_t_1194653546"); // 1
    Hdr_69_set.insert("OnBehalfOfCompID_t_1194653546");
    Hdr_69.add_attribute("D2ID", "DeliverToCompID_t_1216924381"); // 1
    Hdr_69_set.insert("DeliverToCompID_t_1216924381");
    Hdr_69.add_attribute("SSub", "SenderSubID_t_861419821"); // 1
    Hdr_69_set.insert("SenderSubID_t_861419821");
    Hdr_69.add_attribute("SLoc", "SenderLocationID_t_1769105597"); // 1
    Hdr_69_set.insert("SenderLocationID_t_1769105597");
    Hdr_69.add_attribute("TSub", "TargetSubID_t_1301233032"); // 1
    Hdr_69_set.insert("TargetSubID_t_1301233032");
    Hdr_69.add_attribute("TLoc", "TargetLocationID_t_389166762"); // 1
    Hdr_69_set.insert("TargetLocationID_t_389166762");
    Hdr_69.add_attribute("OBSub", "OnBehalfOfSubID_t_2018248851"); // 1
    Hdr_69_set.insert("OnBehalfOfSubID_t_2018248851");
    Hdr_69.add_attribute("OBLoc", "OnBehalfOfLocationID_t_1313394941"); // 1
    Hdr_69_set.insert("OnBehalfOfLocationID_t_1313394941");
    Hdr_69.add_attribute("D2Sub", "DeliverToSubID_t_293052862"); // 1
    Hdr_69_set.insert("DeliverToSubID_t_293052862");
    Hdr_69.add_attribute("D2Loc", "DeliverToLocationID_t_561275734"); // 1
    Hdr_69_set.insert("DeliverToLocationID_t_561275734");
    Hdr_69.add_attribute("PosDup", "N"); // 1
    Hdr_69_set.insert("N");
    Hdr_69.add_attribute("PosRsnd", "Y"); // 1
    Hdr_69_set.insert("Y");
    Hdr_69.add_attribute("Snt", "SendingTime_t_1246621058"); // 1
    Hdr_69_set.insert("SendingTime_t_1246621058");
    Hdr_69.add_attribute("OrigSnt", "OrigSendingTime_t_1089645465"); // 1
    Hdr_69_set.insert("OrigSendingTime_t_1089645465");
    Hdr_69.add_attribute("MsgEncd", "MessageEncoding_t_1462584669"); // 1
    Hdr_69_set.insert("MessageEncoding_t_1462584669");
    all_values.push_back(Hdr_69_set);
    all_compo_names.insert("Hdr_69_set");

    {
      xml_element Hop_69{"Hop"};
      multiset<string> Hop_69_set;
      Hop_69.add_attribute("ID", "HopCompID_t_1279498083"); // 2
      Hop_69_set.insert("HopCompID_t_1279498083");
      Hop_69.add_attribute("Ref", "1903526017"); // 2
      Hop_69_set.insert("1903526017");
      Hop_69.add_attribute("Snt", "HopSendingTime_t_732284808"); // 2
      Hop_69_set.insert("HopSendingTime_t_732284808");
      all_values.push_back(Hop_69_set);
      all_compo_names.insert("Hop_69_set");

      Hdr_69.add_element(Hop_69);
    }
    elt.add_element(Hdr_69);
  } // end Hdr
  { // Pty
    xml_element Pty_329{"Pty"};
    multiset<string> Pty_329_set;
    Pty_329.add_attribute("ID", "PartyID_t_405249721"); // 1
    Pty_329_set.insert("PartyID_t_405249721");
    Pty_329.add_attribute("Src", "B"); // 1
    Pty_329_set.insert("B");
    Pty_329.add_attribute("R", "71"); // 1
    Pty_329_set.insert("71");
    all_values.push_back(Pty_329_set);
    all_compo_names.insert("Pty_329_set");

    {
      xml_element Sub_329{"Sub"};
      multiset<string> Sub_329_set;
      Sub_329.add_attribute("ID", "PartySubID_t_119332171"); // 2
      Sub_329_set.insert("PartySubID_t_119332171");
      Sub_329.add_attribute("Typ", "2"); // 2
      Sub_329_set.insert("2");
      all_values.push_back(Sub_329_set);
      all_compo_names.insert("Sub_329_set");

      Pty_329.add_element(Sub_329);
    }
    elt.add_element(Pty_329);
  } // end Pty
  { // TgtPty
    xml_element TgtPty_11{"TgtPty"};
    multiset<string> TgtPty_11_set;
    TgtPty_11.add_attribute("ID", "TargetPartyID_t_1840145814"); // 1
    TgtPty_11_set.insert("TargetPartyID_t_1840145814");
    TgtPty_11.add_attribute("Src", "C"); // 1
    TgtPty_11_set.insert("C");
    TgtPty_11.add_attribute("R", "85"); // 1
    TgtPty_11_set.insert("85");
    all_values.push_back(TgtPty_11_set);
    all_compo_names.insert("TgtPty_11_set");

    elt.add_element(TgtPty_11);
  } // end TgtPty
  { // QuotCxlEntry
    xml_element QuotCxlEntry_0{"QuotCxlEntry"};
    {
      xml_element Instrmt_59{"Instrmt"};
      multiset<string> Instrmt_59_set;
      Instrmt_59.add_attribute("Sym", "Symbol_t_1462464656"); // 2
      Instrmt_59_set.insert("Symbol_t_1462464656");
      Instrmt_59.add_attribute("Sfx", "CD"); // 2
      Instrmt_59_set.insert("CD");
      Instrmt_59.add_attribute("ID", "SecurityID_t_948632422"); // 2
      Instrmt_59_set.insert("SecurityID_t_948632422");
      Instrmt_59.add_attribute("Src", "H"); // 2
      Instrmt_59_set.insert("H");
      Instrmt_59.add_attribute("Prod", "8"); // 2
      Instrmt_59_set.insert("8");
      Instrmt_59.add_attribute("ProdCmplx", "ProductComplex_t_570254371"); // 2
      Instrmt_59_set.insert("ProductComplex_t_570254371");
      Instrmt_59.add_attribute("SecGrp", "SecurityGroup_t_1833138422"); // 2
      Instrmt_59_set.insert("SecurityGroup_t_1833138422");
      Instrmt_59.add_attribute("CFI", "CFICode_t_179698659"); // 2
      Instrmt_59_set.insert("CFICode_t_179698659");
      Instrmt_59.add_attribute("SecTyp", "AN"); // 2
      Instrmt_59_set.insert("AN");
      Instrmt_59.add_attribute("SubTyp", "SecuritySubType_t_999049715"); // 2
      Instrmt_59_set.insert("SecuritySubType_t_999049715");
      Instrmt_59.add_attribute("MMY", "472751521"); // 2
      Instrmt_59_set.insert("472751521");
      Instrmt_59.add_attribute("MatDt", "MaturityDate_t_1002295309"); // 2
      Instrmt_59_set.insert("MaturityDate_t_1002295309");
      Instrmt_59.add_attribute("MatTm", "1855885135"); // 2
      Instrmt_59_set.insert("1855885135");
      Instrmt_59.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1927007598"); // 2
      Instrmt_59_set.insert("SettleOnOpenFlag_t_1927007598");
      Instrmt_59.add_attribute("AsgnMeth", "101432719"); // 2
      Instrmt_59_set.insert("101432719");
      Instrmt_59.add_attribute("Status", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CpnPmt", "CouponPaymentDate_t_1242108620"); // 2
      Instrmt_59_set.insert("CouponPaymentDate_t_1242108620");
      Instrmt_59.add_attribute("RestrctTyp", "MM"); // 2
      Instrmt_59_set.insert("MM");
      Instrmt_59.add_attribute("Snrty", "SR"); // 2
      Instrmt_59_set.insert("SR");
      Instrmt_59.add_attribute("NotlPctOut", "19743934.280000"); // 2
      Instrmt_59_set.insert("19743934.280000");
      Instrmt_59.add_attribute("OrigNotlPctOut", "4377569.990000"); // 2
      Instrmt_59_set.insert("4377569.990000");
      Instrmt_59.add_attribute("AttchPnt", "9593390.430000"); // 2
      Instrmt_59_set.insert("9593390.430000");
      Instrmt_59.add_attribute("DetchPnt", "19645597.120000"); // 2
      Instrmt_59_set.insert("19645597.120000");
      Instrmt_59.add_attribute("Issued", "IssueDate_t_25690488"); // 2
      Instrmt_59_set.insert("IssueDate_t_25690488");
      Instrmt_59.add_attribute("RepoCollSecTyp", "1078671214"); // 2
      Instrmt_59_set.insert("1078671214");
      Instrmt_59.add_attribute("RepoTrm", "182288098"); // 2
      Instrmt_59_set.insert("182288098");
      Instrmt_59.add_attribute("RepoRt", "8027609.140000"); // 2
      Instrmt_59_set.insert("8027609.140000");
      Instrmt_59.add_attribute("Fctr", "7713333.800000"); // 2
      Instrmt_59_set.insert("7713333.800000");
      Instrmt_59.add_attribute("CrdRtg", "CreditRating_t_1882728021"); // 2
      Instrmt_59_set.insert("CreditRating_t_1882728021");
      Instrmt_59.add_attribute("Rgstry", "InstrRegistry_t_1623412605"); // 2
      Instrmt_59_set.insert("InstrRegistry_t_1623412605");
      Instrmt_59.add_attribute("IssuCtry", "525312256"); // 2
      Instrmt_59_set.insert("525312256");
      Instrmt_59.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1197709030"); // 2
      Instrmt_59_set.insert("StateOrProvinceOfIssue_t_1197709030");
      Instrmt_59.add_attribute("Lcl", "LocaleOfIssue_t_552524681"); // 2
      Instrmt_59_set.insert("LocaleOfIssue_t_552524681");
      Instrmt_59.add_attribute("Redeem", "RedemptionDate_t_1473944678"); // 2
      Instrmt_59_set.insert("RedemptionDate_t_1473944678");
      Instrmt_59.add_attribute("StrkPx", "17296144.200000"); // 2
      Instrmt_59_set.insert("17296144.200000");
      Instrmt_59.add_attribute("StrkCcy", "JPY"); // 2
      Instrmt_59_set.insert("JPY");
      Instrmt_59.add_attribute("StrkMult", "14152691.940000"); // 2
      Instrmt_59_set.insert("14152691.940000");
      Instrmt_59.add_attribute("StrkValu", "5227552.380000"); // 2
      Instrmt_59_set.insert("5227552.380000");
      Instrmt_59.add_attribute("StrkPxDtrmnMeth", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("StrkPxBndryMeth", "2"); // 2
      Instrmt_59_set.insert("2");
      Instrmt_59.add_attribute("StrkPxBndryPrcsn", "9955067.600000"); // 2
      Instrmt_59_set.insert("9955067.600000");
      Instrmt_59.add_attribute("PxDtrmnMeth", "2"); // 2
      Instrmt_59_set.insert("2");
      Instrmt_59.add_attribute("OptAt", "2122720396"); // 2
      Instrmt_59_set.insert("2122720396");
      Instrmt_59.add_attribute("Mult", "7750307.100000"); // 2
      Instrmt_59_set.insert("7750307.100000");
      Instrmt_59.add_attribute("MultTyp", "0"); // 2
      Instrmt_59_set.insert("0");
      Instrmt_59.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("MinPxIncr", "20171393.300000"); // 2
      Instrmt_59_set.insert("20171393.300000");
      Instrmt_59.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_674910158"); // 2
      Instrmt_59_set.insert("MinPriceIncrementAmount_t_674910158");
      Instrmt_59.add_attribute("UOM", "MMBtu"); // 2
      Instrmt_59_set.insert("MMBtu");
      Instrmt_59.add_attribute("UOMQty", "18440491.100000"); // 2
      Instrmt_59_set.insert("18440491.100000");
      Instrmt_59.add_attribute("PxUOM", "t"); // 2
      Instrmt_59_set.insert("t");
      Instrmt_59.add_attribute("PxUOMQty", "1392284.170000"); // 2
      Instrmt_59_set.insert("1392284.170000");
      Instrmt_59.add_attribute("SettlMeth", "P"); // 2
      Instrmt_59_set.insert("P");
      Instrmt_59.add_attribute("ExerStyle", "2"); // 2
      Instrmt_59_set.insert("2");
      Instrmt_59.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_59_set.insert("3");
      Instrmt_59.add_attribute("OptPayAmt", "OptPayoutAmount_t_1843413273"); // 2
      Instrmt_59_set.insert("OptPayoutAmount_t_1843413273");
      Instrmt_59.add_attribute("PxQteMeth", "STD"); // 2
      Instrmt_59_set.insert("STD");
      Instrmt_59.add_attribute("ValMeth", "FUT"); // 2
      Instrmt_59_set.insert("FUT");
      Instrmt_59.add_attribute("ListMeth", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CapPx", "14170475.170000"); // 2
      Instrmt_59_set.insert("14170475.170000");
      Instrmt_59.add_attribute("FlrPx", "3670616.190000"); // 2
      Instrmt_59_set.insert("3670616.190000");
      Instrmt_59.add_attribute("PutCall", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("FlexInd", "false"); // 2
      Instrmt_59_set.insert("false");
      Instrmt_59.add_attribute("FlexProdElig", "true"); // 2
      Instrmt_59_set.insert("true");
      Instrmt_59.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_59_set.insert("Mo");
      Instrmt_59.add_attribute("CpnRt", "1651451.300000"); // 2
      Instrmt_59_set.insert("1651451.300000");
      Instrmt_59.add_attribute("Exch", "SecurityExchange_t_1737721700"); // 2
      Instrmt_59_set.insert("SecurityExchange_t_1737721700");
      Instrmt_59.add_attribute("PosLmt", "1626282995"); // 2
      Instrmt_59_set.insert("1626282995");
      Instrmt_59.add_attribute("NTPosLmt", "687900368"); // 2
      Instrmt_59_set.insert("687900368");
      Instrmt_59.add_attribute("Issr", "Issuer_t_2075456676"); // 2
      Instrmt_59_set.insert("Issuer_t_2075456676");
      Instrmt_59.add_attribute("EncIssrLen", "1893118256"); // 2
      Instrmt_59_set.insert("1893118256");
      Instrmt_59.add_attribute("EncIssr", "EncodedIssuer_t_1683407128"); // 2
      Instrmt_59_set.insert("EncodedIssuer_t_1683407128");
      Instrmt_59.add_attribute("Desc", "SecurityDesc_t_1268003314"); // 2
      Instrmt_59_set.insert("SecurityDesc_t_1268003314");
      Instrmt_59.add_attribute("EncSecDescLen", "1868355004"); // 2
      Instrmt_59_set.insert("1868355004");
      Instrmt_59.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_310954191"); // 2
      Instrmt_59_set.insert("EncodedSecurityDesc_t_310954191");
      Instrmt_59.add_attribute("Pool", "Pool_t_561982670"); // 2
      Instrmt_59_set.insert("Pool_t_561982670");
      Instrmt_59.add_attribute("CSetMo", "494155057"); // 2
      Instrmt_59_set.insert("494155057");
      Instrmt_59.add_attribute("CPPgm", "1"); // 2
      Instrmt_59_set.insert("1");
      Instrmt_59.add_attribute("CPRegT", "CPRegType_t_1236892829"); // 2
      Instrmt_59_set.insert("CPRegType_t_1236892829");
      Instrmt_59.add_attribute("Dated", "DatedDate_t_1821528080"); // 2
      Instrmt_59_set.insert("DatedDate_t_1821528080");
      Instrmt_59.add_attribute("IntAcrl", "InterestAccrualDate_t_2024658984"); // 2
      Instrmt_59_set.insert("InterestAccrualDate_t_2024658984");
      all_values.push_back(Instrmt_59_set);
      all_compo_names.insert("Instrmt_59_set");

      {
        xml_element AID_62{"AID"};
        multiset<string> AID_62_set;
        AID_62.add_attribute("AltID", "SecurityAltID_t_202076338"); // 3
        AID_62_set.insert("SecurityAltID_t_202076338");
        AID_62.add_attribute("AltIDSrc", "8"); // 3
        AID_62_set.insert("8");
        all_values.push_back(AID_62_set);
        all_compo_names.insert("AID_62_set");

        Instrmt_59.add_element(AID_62);
      }
      {
        xml_element SecXML_62{"SecXML"};
        multiset<string> SecXML_62_set;
        SecXML_62.add_attribute("Schema", "SecurityXMLSchema_t_1538300511"); // 3
        SecXML_62_set.insert("SecurityXMLSchema_t_1538300511");
        all_values.push_back(SecXML_62_set);
        all_compo_names.insert("SecXML_62_set");

        Instrmt_59.add_element(SecXML_62);
      }
      {
        xml_element Evnt_62{"Evnt"};
        multiset<string> Evnt_62_set;
        Evnt_62.add_attribute("EventTyp", "99"); // 3
        Evnt_62_set.insert("99");
        Evnt_62.add_attribute("Dt", "EventDate_t_1031172481"); // 3
        Evnt_62_set.insert("EventDate_t_1031172481");
        Evnt_62.add_attribute("Tm", "EventTime_t_1234230136"); // 3
        Evnt_62_set.insert("EventTime_t_1234230136");
        Evnt_62.add_attribute("Px", "11340688.960000"); // 3
        Evnt_62_set.insert("11340688.960000");
        Evnt_62.add_attribute("Txt", "EventText_t_872921844"); // 3
        Evnt_62_set.insert("EventText_t_872921844");
        all_values.push_back(Evnt_62_set);
        all_compo_names.insert("Evnt_62_set");

        Instrmt_59.add_element(Evnt_62);
      }
      {
        xml_element Pty_330{"Pty"};
        multiset<string> Pty_330_set;
        Pty_330.add_attribute("ID", "InstrumentPartyID_t_665404135"); // 3
        Pty_330_set.insert("InstrumentPartyID_t_665404135");
        Pty_330.add_attribute("Src", "B"); // 3
        Pty_330_set.insert("B");
        Pty_330.add_attribute("R", "78"); // 3
        Pty_330_set.insert("78");
        all_values.push_back(Pty_330_set);
        all_compo_names.insert("Pty_330_set");

        {
          xml_element Sub_330{"Sub"};
          multiset<string> Sub_330_set;
          Sub_330.add_attribute("ID", "InstrumentPartySubID_t_1294287164"); // 4
          Sub_330_set.insert("InstrumentPartySubID_t_1294287164");
          Sub_330.add_attribute("Typ", "31"); // 4
          Sub_330_set.insert("31");
          all_values.push_back(Sub_330_set);
          all_compo_names.insert("Sub_330_set");

          Pty_330.add_element(Sub_330);
        }
        Instrmt_59.add_element(Pty_330);
      }
      {
        xml_element CmplxEvnt_59{"CmplxEvnt"};
        multiset<string> CmplxEvnt_59_set;
        CmplxEvnt_59.add_attribute("Typ", "6"); // 3
        CmplxEvnt_59_set.insert("6");
        CmplxEvnt_59.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_1505300965"); // 3
        CmplxEvnt_59_set.insert("ComplexOptPayoutAmount_t_1505300965");
        CmplxEvnt_59.add_attribute("Px", "3908664.470000"); // 3
        CmplxEvnt_59_set.insert("3908664.470000");
        CmplxEvnt_59.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_59_set.insert("2");
        CmplxEvnt_59.add_attribute("PxBndryPrcsn", "9841003.120000"); // 3
        CmplxEvnt_59_set.insert("9841003.120000");
        CmplxEvnt_59.add_attribute("PxTmTyp", "2"); // 3
        CmplxEvnt_59_set.insert("2");
        CmplxEvnt_59.add_attribute("Cond", "1"); // 3
        CmplxEvnt_59_set.insert("1");
        all_values.push_back(CmplxEvnt_59_set);
        all_compo_names.insert("CmplxEvnt_59_set");

        {
          xml_element EvntDts_59{"EvntDts"};
          multiset<string> EvntDts_59_set;
          EvntDts_59.add_attribute("StartDt", "ComplexEventStartDate_t_729734920"); // 4
          EvntDts_59_set.insert("ComplexEventStartDate_t_729734920");
          EvntDts_59.add_attribute("EndDt", "ComplexEventEndDate_t_614690296"); // 4
          EvntDts_59_set.insert("ComplexEventEndDate_t_614690296");
          all_values.push_back(EvntDts_59_set);
          all_compo_names.insert("EvntDts_59_set");

          {
            xml_element EvntTms_59{"EvntTms"};
            multiset<string> EvntTms_59_set;
            EvntTms_59.add_attribute("StartTm", "1719720508"); // 5
            EvntTms_59_set.insert("1719720508");
            EvntTms_59.add_attribute("EndTm", "450606277"); // 5
            EvntTms_59_set.insert("450606277");
            all_values.push_back(EvntTms_59_set);
            all_compo_names.insert("EvntTms_59_set");

            EvntDts_59.add_element(EvntTms_59);
          }
          CmplxEvnt_59.add_element(EvntDts_59);
        }
        Instrmt_59.add_element(CmplxEvnt_59);
      }
      QuotCxlEntry_0.add_element(Instrmt_59);
    }
    {
      xml_element FinDetls_17{"FinDetls"};
      multiset<string> FinDetls_17_set;
      FinDetls_17.add_attribute("AgmtDesc", "AgreementDesc_t_925644487"); // 2
      FinDetls_17_set.insert("AgreementDesc_t_925644487");
      FinDetls_17.add_attribute("AgmtID", "AgreementID_t_134219531"); // 2
      FinDetls_17_set.insert("AgreementID_t_134219531");
      FinDetls_17.add_attribute("AgmtDt", "AgreementDate_t_944761334"); // 2
      FinDetls_17_set.insert("AgreementDate_t_944761334");
      FinDetls_17.add_attribute("AgmtCcy", "JPY"); // 2
      FinDetls_17_set.insert("JPY");
      FinDetls_17.add_attribute("TrmTyp", "3"); // 2
      FinDetls_17_set.insert("3");
      FinDetls_17.add_attribute("StartDt", "StartDate_t_983429696"); // 2
      FinDetls_17_set.insert("StartDate_t_983429696");
      FinDetls_17.add_attribute("EndDt", "EndDate_t_1573188698"); // 2
      FinDetls_17_set.insert("EndDate_t_1573188698");
      FinDetls_17.add_attribute("DlvryTyp", "0"); // 2
      FinDetls_17_set.insert("0");
      FinDetls_17.add_attribute("MgnRatio", "3742465.590000"); // 2
      FinDetls_17_set.insert("3742465.590000");
      all_values.push_back(FinDetls_17_set);
      all_compo_names.insert("FinDetls_17_set");

      QuotCxlEntry_0.add_element(FinDetls_17);
    }
    {
      xml_element Undly_83{"Undly"};
      multiset<string> Undly_83_set;
      Undly_83.add_attribute("Sym", "UnderlyingSymbol_t_766139035"); // 2
      Undly_83_set.insert("UnderlyingSymbol_t_766139035");
      Undly_83.add_attribute("Sfx", "WI"); // 2
      Undly_83_set.insert("WI");
      Undly_83.add_attribute("ID", "UnderlyingSecurityID_t_1608476696"); // 2
      Undly_83_set.insert("UnderlyingSecurityID_t_1608476696");
      Undly_83.add_attribute("Src", "I"); // 2
      Undly_83_set.insert("I");
      Undly_83.add_attribute("Prod", "1"); // 2
      Undly_83_set.insert("1");
      Undly_83.add_attribute("CFI", "UnderlyingCFICode_t_126397183"); // 2
      Undly_83_set.insert("UnderlyingCFICode_t_126397183");
      Undly_83.add_attribute("SecTyp", "USTB"); // 2
      Undly_83_set.insert("USTB");
      Undly_83.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1428672757"); // 2
      Undly_83_set.insert("UnderlyingSecuritySubType_t_1428672757");
      Undly_83.add_attribute("MMY", "1420684348"); // 2
      Undly_83_set.insert("1420684348");
      Undly_83.add_attribute("Mat", "UnderlyingMaturityDate_t_382078366"); // 2
      Undly_83_set.insert("UnderlyingMaturityDate_t_382078366");
      Undly_83.add_attribute("MatTm", "214695223"); // 2
      Undly_83_set.insert("214695223");
      Undly_83.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_778501665"); // 2
      Undly_83_set.insert("UnderlyingCouponPaymentDate_t_778501665");
      Undly_83.add_attribute("RestrctTyp", "MR"); // 2
      Undly_83_set.insert("MR");
      Undly_83.add_attribute("Snrty", "SD"); // 2
      Undly_83_set.insert("SD");
      Undly_83.add_attribute("NotlPctOut", "17626019.780000"); // 2
      Undly_83_set.insert("17626019.780000");
      Undly_83.add_attribute("OrigNotlPctOut", "18517116.290000"); // 2
      Undly_83_set.insert("18517116.290000");
      Undly_83.add_attribute("AttchPnt", "11901565.840000"); // 2
      Undly_83_set.insert("11901565.840000");
      Undly_83.add_attribute("DetchPnt", "3448532.500000"); // 2
      Undly_83_set.insert("3448532.500000");
      Undly_83.add_attribute("Issued", "UnderlyingIssueDate_t_318918277"); // 2
      Undly_83_set.insert("UnderlyingIssueDate_t_318918277");
      Undly_83.add_attribute("RepoCollSecTyp", "762393444"); // 2
      Undly_83_set.insert("762393444");
      Undly_83.add_attribute("RepoTrm", "795459527"); // 2
      Undly_83_set.insert("795459527");
      Undly_83.add_attribute("RepoRt", "12445627.640000"); // 2
      Undly_83_set.insert("12445627.640000");
      Undly_83.add_attribute("Fctr", "8966129.750000"); // 2
      Undly_83_set.insert("8966129.750000");
      Undly_83.add_attribute("CrdRtg", "UnderlyingCreditRating_t_1740220862"); // 2
      Undly_83_set.insert("UnderlyingCreditRating_t_1740220862");
      Undly_83.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_203333476"); // 2
      Undly_83_set.insert("UnderlyingInstrRegistry_t_203333476");
      Undly_83.add_attribute("Ctry", "120241687"); // 2
      Undly_83_set.insert("120241687");
      Undly_83.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_211542980"); // 2
      Undly_83_set.insert("UnderlyingStateOrProvinceOfIssue_t_211542980");
      Undly_83.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_1186763173"); // 2
      Undly_83_set.insert("UnderlyingLocaleOfIssue_t_1186763173");
      Undly_83.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1693430386"); // 2
      Undly_83_set.insert("UnderlyingRedemptionDate_t_1693430386");
      Undly_83.add_attribute("StrkPx", "6436215.960000"); // 2
      Undly_83_set.insert("6436215.960000");
      Undly_83.add_attribute("StrkCcy", "CHF"); // 2
      Undly_83_set.insert("CHF");
      Undly_83.add_attribute("OptA", "2106872693"); // 2
      Undly_83_set.insert("2106872693");
      Undly_83.add_attribute("Mult", "10220027.800000"); // 2
      Undly_83_set.insert("10220027.800000");
      Undly_83.add_attribute("MultTyp", "0"); // 2
      Undly_83_set.insert("0");
      Undly_83.add_attribute("FlowSchedTyp", "4"); // 2
      Undly_83_set.insert("4");
      Undly_83.add_attribute("UOM", "Bcf"); // 2
      Undly_83_set.insert("Bcf");
      Undly_83.add_attribute("UOMQty", "2211671.060000"); // 2
      Undly_83_set.insert("2211671.060000");
      Undly_83.add_attribute("PxUOM", "Bu"); // 2
      Undly_83_set.insert("Bu");
      Undly_83.add_attribute("PxUOMQty", "4216006.640000"); // 2
      Undly_83_set.insert("4216006.640000");
      Undly_83.add_attribute("TmUnit", "Wk"); // 2
      Undly_83_set.insert("Wk");
      Undly_83.add_attribute("ExerStyle", "1"); // 2
      Undly_83_set.insert("1");
      Undly_83.add_attribute("CpnRt", "12001023.290000"); // 2
      Undly_83_set.insert("12001023.290000");
      Undly_83.add_attribute("Exch", "UnderlyingSecurityExchange_t_1376190286"); // 2
      Undly_83_set.insert("UnderlyingSecurityExchange_t_1376190286");
      Undly_83.add_attribute("Issr", "UnderlyingIssuer_t_382402061"); // 2
      Undly_83_set.insert("UnderlyingIssuer_t_382402061");
      Undly_83.add_attribute("EncUndIssrLen", "815220659"); // 2
      Undly_83_set.insert("815220659");
      Undly_83.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_1080418267"); // 2
      Undly_83_set.insert("EncodedUnderlyingIssuer_t_1080418267");
      Undly_83.add_attribute("Desc", "UnderlyingSecurityDesc_t_1572558645"); // 2
      Undly_83_set.insert("UnderlyingSecurityDesc_t_1572558645");
      Undly_83.add_attribute("EncUndSecDescLen", "1160073910"); // 2
      Undly_83_set.insert("1160073910");
      Undly_83.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_1399336544"); // 2
      Undly_83_set.insert("EncodedUnderlyingSecurityDesc_t_1399336544");
      Undly_83.add_attribute("CPPgm", "UnderlyingCPProgram_t_187468442"); // 2
      Undly_83_set.insert("UnderlyingCPProgram_t_187468442");
      Undly_83.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_1955533437"); // 2
      Undly_83_set.insert("UnderlyingCPRegType_t_1955533437");
      Undly_83.add_attribute("AllocPct", "4964156.600000"); // 2
      Undly_83_set.insert("4964156.600000");
      Undly_83.add_attribute("Ccy", "CHF"); // 2
      Undly_83_set.insert("CHF");
      Undly_83.add_attribute("Qty", "6997491.360000"); // 2
      Undly_83_set.insert("6997491.360000");
      Undly_83.add_attribute("SettlTyp", "2"); // 2
      Undly_83_set.insert("2");
      Undly_83.add_attribute("CashAmt", "UnderlyingCashAmount_t_1759813632"); // 2
      Undly_83_set.insert("UnderlyingCashAmount_t_1759813632");
      Undly_83.add_attribute("CashTyp", "DIFF"); // 2
      Undly_83_set.insert("DIFF");
      Undly_83.add_attribute("Px", "7502698.430000"); // 2
      Undly_83_set.insert("7502698.430000");
      Undly_83.add_attribute("DirtPx", "2559515.800000"); // 2
      Undly_83_set.insert("2559515.800000");
      Undly_83.add_attribute("EndPx", "13000383.940000"); // 2
      Undly_83_set.insert("13000383.940000");
      Undly_83.add_attribute("StartVal", "UnderlyingStartValue_t_1062355616"); // 2
      Undly_83_set.insert("UnderlyingStartValue_t_1062355616");
      Undly_83.add_attribute("CurVal", "UnderlyingCurrentValue_t_215340626"); // 2
      Undly_83_set.insert("UnderlyingCurrentValue_t_215340626");
      Undly_83.add_attribute("EndVal", "UnderlyingEndValue_t_174557526"); // 2
      Undly_83_set.insert("UnderlyingEndValue_t_174557526");
      Undly_83.add_attribute("AdjQty", "11271656.720000"); // 2
      Undly_83_set.insert("11271656.720000");
      Undly_83.add_attribute("FxRate", "3634189.650000"); // 2
      Undly_83_set.insert("3634189.650000");
      Undly_83.add_attribute("FxRateCalc", "M"); // 2
      Undly_83_set.insert("M");
      Undly_83.add_attribute("CapValu", "UnderlyingCapValue_t_1348332778"); // 2
      Undly_83_set.insert("UnderlyingCapValue_t_1348332778");
      Undly_83.add_attribute("SetMeth", "UnderlyingSettlMethod_t_1940170061"); // 2
      Undly_83_set.insert("UnderlyingSettlMethod_t_1940170061");
      Undly_83.add_attribute("PutCall", "1744558154"); // 2
      Undly_83_set.insert("1744558154");
      all_values.push_back(Undly_83_set);
      all_compo_names.insert("Undly_83_set");

      {
        xml_element UndAID_83{"UndAID"};
        multiset<string> UndAID_83_set;
        UndAID_83.add_attribute("AltID", "UnderlyingSecurityAltID_t_1951578251"); // 3
        UndAID_83_set.insert("UnderlyingSecurityAltID_t_1951578251");
        UndAID_83.add_attribute("AltIDSrc", "8"); // 3
        UndAID_83_set.insert("8");
        all_values.push_back(UndAID_83_set);
        all_compo_names.insert("UndAID_83_set");

        Undly_83.add_element(UndAID_83);
      }
      {
        xml_element Stip_122{"Stip"};
        multiset<string> Stip_122_set;
        Stip_122.add_attribute("Typ", "PRICE"); // 3
        Stip_122_set.insert("PRICE");
        Stip_122.add_attribute("Val", "UnderlyingStipValue_t_1180284889"); // 3
        Stip_122_set.insert("UnderlyingStipValue_t_1180284889");
        all_values.push_back(Stip_122_set);
        all_compo_names.insert("Stip_122_set");

        Undly_83.add_element(Stip_122);
      }
      {
        xml_element Pty_331{"Pty"};
        multiset<string> Pty_331_set;
        Pty_331.add_attribute("ID", "UnderlyingInstrumentPartyID_t_1966534795"); // 3
        Pty_331_set.insert("UnderlyingInstrumentPartyID_t_1966534795");
        Pty_331.add_attribute("Src", "C"); // 3
        Pty_331_set.insert("C");
        Pty_331.add_attribute("R", "32"); // 3
        Pty_331_set.insert("32");
        all_values.push_back(Pty_331_set);
        all_compo_names.insert("Pty_331_set");

        {
          xml_element Sub_331{"Sub"};
          multiset<string> Sub_331_set;
          Sub_331.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1391609792"); // 4
          Sub_331_set.insert("UnderlyingInstrumentPartySubID_t_1391609792");
          Sub_331.add_attribute("Typ", "32"); // 4
          Sub_331_set.insert("32");
          all_values.push_back(Sub_331_set);
          all_compo_names.insert("Sub_331_set");

          Pty_331.add_element(Sub_331);
        }
        Undly_83.add_element(Pty_331);
      }
      QuotCxlEntry_0.add_element(Undly_83);
    }
    {
      xml_element Leg_69{"Leg"};
      multiset<string> Leg_69_set;
      Leg_69.add_attribute("Sym", "LegSymbol_t_1512556052"); // 2
      Leg_69_set.insert("LegSymbol_t_1512556052");
      Leg_69.add_attribute("Sfx", "CD"); // 2
      Leg_69_set.insert("CD");
      Leg_69.add_attribute("ID", "LegSecurityID_t_433037547"); // 2
      Leg_69_set.insert("LegSecurityID_t_433037547");
      Leg_69.add_attribute("Src", "1"); // 2
      Leg_69_set.insert("1");
      Leg_69.add_attribute("Prod", "9"); // 2
      Leg_69_set.insert("9");
      Leg_69.add_attribute("CFI", "LegCFICode_t_1981308198"); // 2
      Leg_69_set.insert("LegCFICode_t_1981308198");
      Leg_69.add_attribute("SecTyp", "PS"); // 2
      Leg_69_set.insert("PS");
      Leg_69.add_attribute("SecSubTyp", "LegSecuritySubType_t_1719999109"); // 2
      Leg_69_set.insert("LegSecuritySubType_t_1719999109");
      Leg_69.add_attribute("MMY", "1593638182"); // 2
      Leg_69_set.insert("1593638182");
      Leg_69.add_attribute("Mat", "LegMaturityDate_t_300265862"); // 2
      Leg_69_set.insert("LegMaturityDate_t_300265862");
      Leg_69.add_attribute("MatTm", "322785304"); // 2
      Leg_69_set.insert("322785304");
      Leg_69.add_attribute("CpnPmt", "LegCouponPaymentDate_t_1849589763"); // 2
      Leg_69_set.insert("LegCouponPaymentDate_t_1849589763");
      Leg_69.add_attribute("Issued", "LegIssueDate_t_1600304256"); // 2
      Leg_69_set.insert("LegIssueDate_t_1600304256");
      Leg_69.add_attribute("RepoCollSecTyp", "1385140920"); // 2
      Leg_69_set.insert("1385140920");
      Leg_69.add_attribute("RepoTrm", "2064930389"); // 2
      Leg_69_set.insert("2064930389");
      Leg_69.add_attribute("RepoRt", "17748617.820000"); // 2
      Leg_69_set.insert("17748617.820000");
      Leg_69.add_attribute("Fctr", "3648229.440000"); // 2
      Leg_69_set.insert("3648229.440000");
      Leg_69.add_attribute("CrdRtg", "LegCreditRating_t_280865706"); // 2
      Leg_69_set.insert("LegCreditRating_t_280865706");
      Leg_69.add_attribute("Rgstry", "LegInstrRegistry_t_950335625"); // 2
      Leg_69_set.insert("LegInstrRegistry_t_950335625");
      Leg_69.add_attribute("Ctry", "1713155723"); // 2
      Leg_69_set.insert("1713155723");
      Leg_69.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_73552119"); // 2
      Leg_69_set.insert("LegStateOrProvinceOfIssue_t_73552119");
      Leg_69.add_attribute("Lcl", "LegLocaleOfIssue_t_547410131"); // 2
      Leg_69_set.insert("LegLocaleOfIssue_t_547410131");
      Leg_69.add_attribute("Redeem", "LegRedemptionDate_t_1517250326"); // 2
      Leg_69_set.insert("LegRedemptionDate_t_1517250326");
      Leg_69.add_attribute("Strk", "16576848.530000"); // 2
      Leg_69_set.insert("16576848.530000");
      Leg_69.add_attribute("StrkCcy", "EUR"); // 2
      Leg_69_set.insert("EUR");
      Leg_69.add_attribute("OptA", "1476736000"); // 2
      Leg_69_set.insert("1476736000");
      Leg_69.add_attribute("Cmult", "8095008.150000"); // 2
      Leg_69_set.insert("8095008.150000");
      Leg_69.add_attribute("MultTyp", "1"); // 2
      Leg_69_set.insert("1");
      Leg_69.add_attribute("FlowSchedTyp", "4"); // 2
      Leg_69_set.insert("4");
      Leg_69.add_attribute("UOM", "Bcf"); // 2
      Leg_69_set.insert("Bcf");
      Leg_69.add_attribute("UOMQty", "283434.790000"); // 2
      Leg_69_set.insert("283434.790000");
      Leg_69.add_attribute("PxUOM", "Bu"); // 2
      Leg_69_set.insert("Bu");
      Leg_69.add_attribute("PxUOMQty", "18675261.190000"); // 2
      Leg_69_set.insert("18675261.190000");
      Leg_69.add_attribute("TmUnit", "H"); // 2
      Leg_69_set.insert("H");
      Leg_69.add_attribute("ExerStyle", "2"); // 2
      Leg_69_set.insert("2");
      Leg_69.add_attribute("CpnRt", "17013506.700000"); // 2
      Leg_69_set.insert("17013506.700000");
      Leg_69.add_attribute("Exch", "LegSecurityExchange_t_451068743"); // 2
      Leg_69_set.insert("LegSecurityExchange_t_451068743");
      Leg_69.add_attribute("Issr", "LegIssuer_t_240648196"); // 2
      Leg_69_set.insert("LegIssuer_t_240648196");
      Leg_69.add_attribute("EncLegIssrLen", "1147505204"); // 2
      Leg_69_set.insert("1147505204");
      Leg_69.add_attribute("EncLegIssr", "EncodedLegIssuer_t_751334605"); // 2
      Leg_69_set.insert("EncodedLegIssuer_t_751334605");
      Leg_69.add_attribute("Desc", "LegSecurityDesc_t_563433500"); // 2
      Leg_69_set.insert("LegSecurityDesc_t_563433500");
      Leg_69.add_attribute("EncLegSecDescLen", "849611319"); // 2
      Leg_69_set.insert("849611319");
      Leg_69.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_204155213"); // 2
      Leg_69_set.insert("EncodedLegSecurityDesc_t_204155213");
      Leg_69.add_attribute("RatioQty", "19485744.200000"); // 2
      Leg_69_set.insert("19485744.200000");
      Leg_69.add_attribute("Side", "D"); // 2
      Leg_69_set.insert("D");
      Leg_69.add_attribute("Ccy", "USD"); // 2
      Leg_69_set.insert("USD");
      Leg_69.add_attribute("Pool", "LegPool_t_1047923766"); // 2
      Leg_69_set.insert("LegPool_t_1047923766");
      Leg_69.add_attribute("Dated", "LegDatedDate_t_781868973"); // 2
      Leg_69_set.insert("LegDatedDate_t_781868973");
      Leg_69.add_attribute("CSetMo", "1879069439"); // 2
      Leg_69_set.insert("1879069439");
      Leg_69.add_attribute("IntAcrl", "LegInterestAccrualDate_t_1121475886"); // 2
      Leg_69_set.insert("LegInterestAccrualDate_t_1121475886");
      Leg_69.add_attribute("PutCall", "1329279104"); // 2
      Leg_69_set.insert("1329279104");
      Leg_69.add_attribute("LegOptionRatio", "12488361.170000"); // 2
      Leg_69_set.insert("12488361.170000");
      Leg_69.add_attribute("Px", "6316770.910000"); // 2
      Leg_69_set.insert("6316770.910000");
      all_values.push_back(Leg_69_set);
      all_compo_names.insert("Leg_69_set");

      {
        xml_element LegAID_69{"LegAID"};
        multiset<string> LegAID_69_set;
        LegAID_69.add_attribute("SecAltID", "LegSecurityAltID_t_526382424"); // 3
        LegAID_69_set.insert("LegSecurityAltID_t_526382424");
        LegAID_69.add_attribute("SecAltIDSrc", "1"); // 3
        LegAID_69_set.insert("1");
        all_values.push_back(LegAID_69_set);
        all_compo_names.insert("LegAID_69_set");

        Leg_69.add_element(LegAID_69);
      }
      QuotCxlEntry_0.add_element(Leg_69);
    }
    elt.add_element(QuotCxlEntry_0);
  } // end QuotCxlEntry
  { // QuotCxlEntry
    xml_element QuotCxlEntry_1{"QuotCxlEntry"};
    {
      xml_element Instrmt_60{"Instrmt"};
      multiset<string> Instrmt_60_set;
      Instrmt_60.add_attribute("Sym", "Symbol_t_2108413091"); // 2
      Instrmt_60_set.insert("Symbol_t_2108413091");
      Instrmt_60.add_attribute("Sfx", "WI"); // 2
      Instrmt_60_set.insert("WI");
      Instrmt_60.add_attribute("ID", "SecurityID_t_314675111"); // 2
      Instrmt_60_set.insert("SecurityID_t_314675111");
      Instrmt_60.add_attribute("Src", "G"); // 2
      Instrmt_60_set.insert("G");
      Instrmt_60.add_attribute("Prod", "10"); // 2
      Instrmt_60_set.insert("10");
      Instrmt_60.add_attribute("ProdCmplx", "ProductComplex_t_343018590"); // 2
      Instrmt_60_set.insert("ProductComplex_t_343018590");
      Instrmt_60.add_attribute("SecGrp", "SecurityGroup_t_834248318"); // 2
      Instrmt_60_set.insert("SecurityGroup_t_834248318");
      Instrmt_60.add_attribute("CFI", "CFICode_t_342930635"); // 2
      Instrmt_60_set.insert("CFICode_t_342930635");
      Instrmt_60.add_attribute("SecTyp", "EUCORP"); // 2
      Instrmt_60_set.insert("EUCORP");
      Instrmt_60.add_attribute("SubTyp", "SecuritySubType_t_1502381053"); // 2
      Instrmt_60_set.insert("SecuritySubType_t_1502381053");
      Instrmt_60.add_attribute("MMY", "2044281305"); // 2
      Instrmt_60_set.insert("2044281305");
      Instrmt_60.add_attribute("MatDt", "MaturityDate_t_683918877"); // 2
      Instrmt_60_set.insert("MaturityDate_t_683918877");
      Instrmt_60.add_attribute("MatTm", "1743029249"); // 2
      Instrmt_60_set.insert("1743029249");
      Instrmt_60.add_attribute("SettlOnOpenFlag", "SettleOnOpenFlag_t_1044302861"); // 2
      Instrmt_60_set.insert("SettleOnOpenFlag_t_1044302861");
      Instrmt_60.add_attribute("AsgnMeth", "1435253482"); // 2
      Instrmt_60_set.insert("1435253482");
      Instrmt_60.add_attribute("Status", "2"); // 2
      Instrmt_60_set.insert("2");
      Instrmt_60.add_attribute("CpnPmt", "CouponPaymentDate_t_1893914181"); // 2
      Instrmt_60_set.insert("CouponPaymentDate_t_1893914181");
      Instrmt_60.add_attribute("RestrctTyp", "FR"); // 2
      Instrmt_60_set.insert("FR");
      Instrmt_60.add_attribute("Snrty", "SR"); // 2
      Instrmt_60_set.insert("SR");
      Instrmt_60.add_attribute("NotlPctOut", "5134885.930000"); // 2
      Instrmt_60_set.insert("5134885.930000");
      Instrmt_60.add_attribute("OrigNotlPctOut", "14709420.440000"); // 2
      Instrmt_60_set.insert("14709420.440000");
      Instrmt_60.add_attribute("AttchPnt", "1259835.900000"); // 2
      Instrmt_60_set.insert("1259835.900000");
      Instrmt_60.add_attribute("DetchPnt", "15614123.600000"); // 2
      Instrmt_60_set.insert("15614123.600000");
      Instrmt_60.add_attribute("Issued", "IssueDate_t_105327369"); // 2
      Instrmt_60_set.insert("IssueDate_t_105327369");
      Instrmt_60.add_attribute("RepoCollSecTyp", "2005053029"); // 2
      Instrmt_60_set.insert("2005053029");
      Instrmt_60.add_attribute("RepoTrm", "535404598"); // 2
      Instrmt_60_set.insert("535404598");
      Instrmt_60.add_attribute("RepoRt", "14346064.730000"); // 2
      Instrmt_60_set.insert("14346064.730000");
      Instrmt_60.add_attribute("Fctr", "11064054.990000"); // 2
      Instrmt_60_set.insert("11064054.990000");
      Instrmt_60.add_attribute("CrdRtg", "CreditRating_t_1167081689"); // 2
      Instrmt_60_set.insert("CreditRating_t_1167081689");
      Instrmt_60.add_attribute("Rgstry", "InstrRegistry_t_1960988897"); // 2
      Instrmt_60_set.insert("InstrRegistry_t_1960988897");
      Instrmt_60.add_attribute("IssuCtry", "757809535"); // 2
      Instrmt_60_set.insert("757809535");
      Instrmt_60.add_attribute("StPrv", "StateOrProvinceOfIssue_t_1128011132"); // 2
      Instrmt_60_set.insert("StateOrProvinceOfIssue_t_1128011132");
      Instrmt_60.add_attribute("Lcl", "LocaleOfIssue_t_1149388488"); // 2
      Instrmt_60_set.insert("LocaleOfIssue_t_1149388488");
      Instrmt_60.add_attribute("Redeem", "RedemptionDate_t_1072484647"); // 2
      Instrmt_60_set.insert("RedemptionDate_t_1072484647");
      Instrmt_60.add_attribute("StrkPx", "18098027.190000"); // 2
      Instrmt_60_set.insert("18098027.190000");
      Instrmt_60.add_attribute("StrkCcy", "EUR"); // 2
      Instrmt_60_set.insert("EUR");
      Instrmt_60.add_attribute("StrkMult", "4965673.900000"); // 2
      Instrmt_60_set.insert("4965673.900000");
      Instrmt_60.add_attribute("StrkValu", "21152072.870000"); // 2
      Instrmt_60_set.insert("21152072.870000");
      Instrmt_60.add_attribute("StrkPxDtrmnMeth", "4"); // 2
      Instrmt_60_set.insert("4");
      Instrmt_60.add_attribute("StrkPxBndryMeth", "4"); // 2
      Instrmt_60_set.insert("4");
      Instrmt_60.add_attribute("StrkPxBndryPrcsn", "20120049.440000"); // 2
      Instrmt_60_set.insert("20120049.440000");
      Instrmt_60.add_attribute("PxDtrmnMeth", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("OptAt", "1594494045"); // 2
      Instrmt_60_set.insert("1594494045");
      Instrmt_60.add_attribute("Mult", "9088241.570000"); // 2
      Instrmt_60_set.insert("9088241.570000");
      Instrmt_60.add_attribute("MultTyp", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("FlowSchedTyp", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("MinPxIncr", "6552546.900000"); // 2
      Instrmt_60_set.insert("6552546.900000");
      Instrmt_60.add_attribute("MinPxIncrAmt", "MinPriceIncrementAmount_t_1111967130"); // 2
      Instrmt_60_set.insert("MinPriceIncrementAmount_t_1111967130");
      Instrmt_60.add_attribute("UOM", "lbs"); // 2
      Instrmt_60_set.insert("lbs");
      Instrmt_60.add_attribute("UOMQty", "11687432.840000"); // 2
      Instrmt_60_set.insert("11687432.840000");
      Instrmt_60.add_attribute("PxUOM", "Gal"); // 2
      Instrmt_60_set.insert("Gal");
      Instrmt_60.add_attribute("PxUOMQty", "18395266.100000"); // 2
      Instrmt_60_set.insert("18395266.100000");
      Instrmt_60.add_attribute("SettlMeth", "C"); // 2
      Instrmt_60_set.insert("C");
      Instrmt_60.add_attribute("ExerStyle", "0"); // 2
      Instrmt_60_set.insert("0");
      Instrmt_60.add_attribute("OptPayoutTyp", "3"); // 2
      Instrmt_60_set.insert("3");
      Instrmt_60.add_attribute("OptPayAmt", "OptPayoutAmount_t_1118076594"); // 2
      Instrmt_60_set.insert("OptPayoutAmount_t_1118076594");
      Instrmt_60.add_attribute("PxQteMeth", "INX"); // 2
      Instrmt_60_set.insert("INX");
      Instrmt_60.add_attribute("ValMeth", "FUTDA"); // 2
      Instrmt_60_set.insert("FUTDA");
      Instrmt_60.add_attribute("ListMeth", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("CapPx", "17888646.180000"); // 2
      Instrmt_60_set.insert("17888646.180000");
      Instrmt_60.add_attribute("FlrPx", "14138273.780000"); // 2
      Instrmt_60_set.insert("14138273.780000");
      Instrmt_60.add_attribute("PutCall", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("FlexInd", "false"); // 2
      Instrmt_60_set.insert("false");
      Instrmt_60.add_attribute("FlexProdElig", "false"); // 2
      Instrmt_60_set.insert("false");
      Instrmt_60.add_attribute("TmUnit", "Mo"); // 2
      Instrmt_60_set.insert("Mo");
      Instrmt_60.add_attribute("CpnRt", "4155624.630000"); // 2
      Instrmt_60_set.insert("4155624.630000");
      Instrmt_60.add_attribute("Exch", "SecurityExchange_t_1754331614"); // 2
      Instrmt_60_set.insert("SecurityExchange_t_1754331614");
      Instrmt_60.add_attribute("PosLmt", "1424572228"); // 2
      Instrmt_60_set.insert("1424572228");
      Instrmt_60.add_attribute("NTPosLmt", "383286102"); // 2
      Instrmt_60_set.insert("383286102");
      Instrmt_60.add_attribute("Issr", "Issuer_t_1255201337"); // 2
      Instrmt_60_set.insert("Issuer_t_1255201337");
      Instrmt_60.add_attribute("EncIssrLen", "1276037024"); // 2
      Instrmt_60_set.insert("1276037024");
      Instrmt_60.add_attribute("EncIssr", "EncodedIssuer_t_247807398"); // 2
      Instrmt_60_set.insert("EncodedIssuer_t_247807398");
      Instrmt_60.add_attribute("Desc", "SecurityDesc_t_1439989937"); // 2
      Instrmt_60_set.insert("SecurityDesc_t_1439989937");
      Instrmt_60.add_attribute("EncSecDescLen", "723047421"); // 2
      Instrmt_60_set.insert("723047421");
      Instrmt_60.add_attribute("EncSecDesc", "EncodedSecurityDesc_t_1156631555"); // 2
      Instrmt_60_set.insert("EncodedSecurityDesc_t_1156631555");
      Instrmt_60.add_attribute("Pool", "Pool_t_912548372"); // 2
      Instrmt_60_set.insert("Pool_t_912548372");
      Instrmt_60.add_attribute("CSetMo", "329036919"); // 2
      Instrmt_60_set.insert("329036919");
      Instrmt_60.add_attribute("CPPgm", "1"); // 2
      Instrmt_60_set.insert("1");
      Instrmt_60.add_attribute("CPRegT", "CPRegType_t_2024515502"); // 2
      Instrmt_60_set.insert("CPRegType_t_2024515502");
      Instrmt_60.add_attribute("Dated", "DatedDate_t_2042579939"); // 2
      Instrmt_60_set.insert("DatedDate_t_2042579939");
      Instrmt_60.add_attribute("IntAcrl", "InterestAccrualDate_t_833145882"); // 2
      Instrmt_60_set.insert("InterestAccrualDate_t_833145882");
      all_values.push_back(Instrmt_60_set);
      all_compo_names.insert("Instrmt_60_set");

      {
        xml_element AID_63{"AID"};
        multiset<string> AID_63_set;
        AID_63.add_attribute("AltID", "SecurityAltID_t_312457381"); // 3
        AID_63_set.insert("SecurityAltID_t_312457381");
        AID_63.add_attribute("AltIDSrc", "C"); // 3
        AID_63_set.insert("C");
        all_values.push_back(AID_63_set);
        all_compo_names.insert("AID_63_set");

        Instrmt_60.add_element(AID_63);
      }
      {
        xml_element SecXML_63{"SecXML"};
        multiset<string> SecXML_63_set;
        SecXML_63.add_attribute("Schema", "SecurityXMLSchema_t_1415817878"); // 3
        SecXML_63_set.insert("SecurityXMLSchema_t_1415817878");
        all_values.push_back(SecXML_63_set);
        all_compo_names.insert("SecXML_63_set");

        Instrmt_60.add_element(SecXML_63);
      }
      {
        xml_element Evnt_63{"Evnt"};
        multiset<string> Evnt_63_set;
        Evnt_63.add_attribute("EventTyp", "16"); // 3
        Evnt_63_set.insert("16");
        Evnt_63.add_attribute("Dt", "EventDate_t_1284235245"); // 3
        Evnt_63_set.insert("EventDate_t_1284235245");
        Evnt_63.add_attribute("Tm", "EventTime_t_386410824"); // 3
        Evnt_63_set.insert("EventTime_t_386410824");
        Evnt_63.add_attribute("Px", "6810859.970000"); // 3
        Evnt_63_set.insert("6810859.970000");
        Evnt_63.add_attribute("Txt", "EventText_t_1940253087"); // 3
        Evnt_63_set.insert("EventText_t_1940253087");
        all_values.push_back(Evnt_63_set);
        all_compo_names.insert("Evnt_63_set");

        Instrmt_60.add_element(Evnt_63);
      }
      {
        xml_element Pty_332{"Pty"};
        multiset<string> Pty_332_set;
        Pty_332.add_attribute("ID", "InstrumentPartyID_t_524085459"); // 3
        Pty_332_set.insert("InstrumentPartyID_t_524085459");
        Pty_332.add_attribute("Src", "B"); // 3
        Pty_332_set.insert("B");
        Pty_332.add_attribute("R", "71"); // 3
        Pty_332_set.insert("71");
        all_values.push_back(Pty_332_set);
        all_compo_names.insert("Pty_332_set");

        {
          xml_element Sub_332{"Sub"};
          multiset<string> Sub_332_set;
          Sub_332.add_attribute("ID", "InstrumentPartySubID_t_1789771226"); // 4
          Sub_332_set.insert("InstrumentPartySubID_t_1789771226");
          Sub_332.add_attribute("Typ", "15"); // 4
          Sub_332_set.insert("15");
          all_values.push_back(Sub_332_set);
          all_compo_names.insert("Sub_332_set");

          Pty_332.add_element(Sub_332);
        }
        Instrmt_60.add_element(Pty_332);
      }
      {
        xml_element CmplxEvnt_60{"CmplxEvnt"};
        multiset<string> CmplxEvnt_60_set;
        CmplxEvnt_60.add_attribute("Typ", "5"); // 3
        CmplxEvnt_60_set.insert("5");
        CmplxEvnt_60.add_attribute("OptPayAmt", "ComplexOptPayoutAmount_t_570292416"); // 3
        CmplxEvnt_60_set.insert("ComplexOptPayoutAmount_t_570292416");
        CmplxEvnt_60.add_attribute("Px", "15287988.900000"); // 3
        CmplxEvnt_60_set.insert("15287988.900000");
        CmplxEvnt_60.add_attribute("PxBndryMeth", "2"); // 3
        CmplxEvnt_60_set.insert("2");
        CmplxEvnt_60.add_attribute("PxBndryPrcsn", "19948646.450000"); // 3
        CmplxEvnt_60_set.insert("19948646.450000");
        CmplxEvnt_60.add_attribute("PxTmTyp", "1"); // 3
        CmplxEvnt_60_set.insert("1");
        CmplxEvnt_60.add_attribute("Cond", "1"); // 3
        CmplxEvnt_60_set.insert("1");
        all_values.push_back(CmplxEvnt_60_set);
        all_compo_names.insert("CmplxEvnt_60_set");

        {
          xml_element EvntDts_60{"EvntDts"};
          multiset<string> EvntDts_60_set;
          EvntDts_60.add_attribute("StartDt", "ComplexEventStartDate_t_1123418021"); // 4
          EvntDts_60_set.insert("ComplexEventStartDate_t_1123418021");
          EvntDts_60.add_attribute("EndDt", "ComplexEventEndDate_t_12408742"); // 4
          EvntDts_60_set.insert("ComplexEventEndDate_t_12408742");
          all_values.push_back(EvntDts_60_set);
          all_compo_names.insert("EvntDts_60_set");

          {
            xml_element EvntTms_60{"EvntTms"};
            multiset<string> EvntTms_60_set;
            EvntTms_60.add_attribute("StartTm", "1699980788"); // 5
            EvntTms_60_set.insert("1699980788");
            EvntTms_60.add_attribute("EndTm", "1846465442"); // 5
            EvntTms_60_set.insert("1846465442");
            all_values.push_back(EvntTms_60_set);
            all_compo_names.insert("EvntTms_60_set");

            EvntDts_60.add_element(EvntTms_60);
          }
          CmplxEvnt_60.add_element(EvntDts_60);
        }
        Instrmt_60.add_element(CmplxEvnt_60);
      }
      QuotCxlEntry_1.add_element(Instrmt_60);
    }
    {
      xml_element FinDetls_18{"FinDetls"};
      multiset<string> FinDetls_18_set;
      FinDetls_18.add_attribute("AgmtDesc", "AgreementDesc_t_1169040297"); // 2
      FinDetls_18_set.insert("AgreementDesc_t_1169040297");
      FinDetls_18.add_attribute("AgmtID", "AgreementID_t_465045512"); // 2
      FinDetls_18_set.insert("AgreementID_t_465045512");
      FinDetls_18.add_attribute("AgmtDt", "AgreementDate_t_28018713"); // 2
      FinDetls_18_set.insert("AgreementDate_t_28018713");
      FinDetls_18.add_attribute("AgmtCcy", "GBP"); // 2
      FinDetls_18_set.insert("GBP");
      FinDetls_18.add_attribute("TrmTyp", "2"); // 2
      FinDetls_18_set.insert("2");
      FinDetls_18.add_attribute("StartDt", "StartDate_t_1666588777"); // 2
      FinDetls_18_set.insert("StartDate_t_1666588777");
      FinDetls_18.add_attribute("EndDt", "EndDate_t_654534747"); // 2
      FinDetls_18_set.insert("EndDate_t_654534747");
      FinDetls_18.add_attribute("DlvryTyp", "2"); // 2
      FinDetls_18_set.insert("2");
      FinDetls_18.add_attribute("MgnRatio", "9349230.070000"); // 2
      FinDetls_18_set.insert("9349230.070000");
      all_values.push_back(FinDetls_18_set);
      all_compo_names.insert("FinDetls_18_set");

      QuotCxlEntry_1.add_element(FinDetls_18);
    }
    {
      xml_element Undly_84{"Undly"};
      multiset<string> Undly_84_set;
      Undly_84.add_attribute("Sym", "UnderlyingSymbol_t_1507745024"); // 2
      Undly_84_set.insert("UnderlyingSymbol_t_1507745024");
      Undly_84.add_attribute("Sfx", "WI"); // 2
      Undly_84_set.insert("WI");
      Undly_84.add_attribute("ID", "UnderlyingSecurityID_t_1321333831"); // 2
      Undly_84_set.insert("UnderlyingSecurityID_t_1321333831");
      Undly_84.add_attribute("Src", "2"); // 2
      Undly_84_set.insert("2");
      Undly_84.add_attribute("Prod", "8"); // 2
      Undly_84_set.insert("8");
      Undly_84.add_attribute("CFI", "UnderlyingCFICode_t_1845419290"); // 2
      Undly_84_set.insert("UnderlyingCFICode_t_1845419290");
      Undly_84.add_attribute("SecTyp", "MPT"); // 2
      Undly_84_set.insert("MPT");
      Undly_84.add_attribute("SubTyp", "UnderlyingSecuritySubType_t_1793855760"); // 2
      Undly_84_set.insert("UnderlyingSecuritySubType_t_1793855760");
      Undly_84.add_attribute("MMY", "1487706868"); // 2
      Undly_84_set.insert("1487706868");
      Undly_84.add_attribute("Mat", "UnderlyingMaturityDate_t_1477050768"); // 2
      Undly_84_set.insert("UnderlyingMaturityDate_t_1477050768");
      Undly_84.add_attribute("MatTm", "1191797307"); // 2
      Undly_84_set.insert("1191797307");
      Undly_84.add_attribute("CpnPmt", "UnderlyingCouponPaymentDate_t_2057999285"); // 2
      Undly_84_set.insert("UnderlyingCouponPaymentDate_t_2057999285");
      Undly_84.add_attribute("RestrctTyp", "MM"); // 2
      Undly_84_set.insert("MM");
      Undly_84.add_attribute("Snrty", "SD"); // 2
      Undly_84_set.insert("SD");
      Undly_84.add_attribute("NotlPctOut", "19053802.820000"); // 2
      Undly_84_set.insert("19053802.820000");
      Undly_84.add_attribute("OrigNotlPctOut", "6229673.540000"); // 2
      Undly_84_set.insert("6229673.540000");
      Undly_84.add_attribute("AttchPnt", "4565776.700000"); // 2
      Undly_84_set.insert("4565776.700000");
      Undly_84.add_attribute("DetchPnt", "8813146.550000"); // 2
      Undly_84_set.insert("8813146.550000");
      Undly_84.add_attribute("Issued", "UnderlyingIssueDate_t_635376096"); // 2
      Undly_84_set.insert("UnderlyingIssueDate_t_635376096");
      Undly_84.add_attribute("RepoCollSecTyp", "9074810"); // 2
      Undly_84_set.insert("9074810");
      Undly_84.add_attribute("RepoTrm", "580296449"); // 2
      Undly_84_set.insert("580296449");
      Undly_84.add_attribute("RepoRt", "18044163.940000"); // 2
      Undly_84_set.insert("18044163.940000");
      Undly_84.add_attribute("Fctr", "4741203.220000"); // 2
      Undly_84_set.insert("4741203.220000");
      Undly_84.add_attribute("CrdRtg", "UnderlyingCreditRating_t_608315162"); // 2
      Undly_84_set.insert("UnderlyingCreditRating_t_608315162");
      Undly_84.add_attribute("Rgstry", "UnderlyingInstrRegistry_t_490375641"); // 2
      Undly_84_set.insert("UnderlyingInstrRegistry_t_490375641");
      Undly_84.add_attribute("Ctry", "816197689"); // 2
      Undly_84_set.insert("816197689");
      Undly_84.add_attribute("StOrProvnc", "UnderlyingStateOrProvinceOfIssue_t_531430167"); // 2
      Undly_84_set.insert("UnderlyingStateOrProvinceOfIssue_t_531430167");
      Undly_84.add_attribute("Lcl", "UnderlyingLocaleOfIssue_t_9480771"); // 2
      Undly_84_set.insert("UnderlyingLocaleOfIssue_t_9480771");
      Undly_84.add_attribute("Redeem", "UnderlyingRedemptionDate_t_1470732436"); // 2
      Undly_84_set.insert("UnderlyingRedemptionDate_t_1470732436");
      Undly_84.add_attribute("StrkPx", "416844.260000"); // 2
      Undly_84_set.insert("416844.260000");
      Undly_84.add_attribute("StrkCcy", "JPY"); // 2
      Undly_84_set.insert("JPY");
      Undly_84.add_attribute("OptA", "836173929"); // 2
      Undly_84_set.insert("836173929");
      Undly_84.add_attribute("Mult", "1182539.620000"); // 2
      Undly_84_set.insert("1182539.620000");
      Undly_84.add_attribute("MultTyp", "1"); // 2
      Undly_84_set.insert("1");
      Undly_84.add_attribute("FlowSchedTyp", "2"); // 2
      Undly_84_set.insert("2");
      Undly_84.add_attribute("UOM", "oz_tr"); // 2
      Undly_84_set.insert("oz_tr");
      Undly_84.add_attribute("UOMQty", "12361555.270000"); // 2
      Undly_84_set.insert("12361555.270000");
      Undly_84.add_attribute("PxUOM", "Bbl"); // 2
      Undly_84_set.insert("Bbl");
      Undly_84.add_attribute("PxUOMQty", "13038964.730000"); // 2
      Undly_84_set.insert("13038964.730000");
      Undly_84.add_attribute("TmUnit", "Min"); // 2
      Undly_84_set.insert("Min");
      Undly_84.add_attribute("ExerStyle", "0"); // 2
      Undly_84_set.insert("0");
      Undly_84.add_attribute("CpnRt", "12144121.100000"); // 2
      Undly_84_set.insert("12144121.100000");
      Undly_84.add_attribute("Exch", "UnderlyingSecurityExchange_t_1424088658"); // 2
      Undly_84_set.insert("UnderlyingSecurityExchange_t_1424088658");
      Undly_84.add_attribute("Issr", "UnderlyingIssuer_t_310705464"); // 2
      Undly_84_set.insert("UnderlyingIssuer_t_310705464");
      Undly_84.add_attribute("EncUndIssrLen", "972308744"); // 2
      Undly_84_set.insert("972308744");
      Undly_84.add_attribute("EncUndIssr", "EncodedUnderlyingIssuer_t_2047056013"); // 2
      Undly_84_set.insert("EncodedUnderlyingIssuer_t_2047056013");
      Undly_84.add_attribute("Desc", "UnderlyingSecurityDesc_t_767283134"); // 2
      Undly_84_set.insert("UnderlyingSecurityDesc_t_767283134");
      Undly_84.add_attribute("EncUndSecDescLen", "1853623399"); // 2
      Undly_84_set.insert("1853623399");
      Undly_84.add_attribute("EncUndSecDesc", "EncodedUnderlyingSecurityDesc_t_534948461"); // 2
      Undly_84_set.insert("EncodedUnderlyingSecurityDesc_t_534948461");
      Undly_84.add_attribute("CPPgm", "UnderlyingCPProgram_t_776357945"); // 2
      Undly_84_set.insert("UnderlyingCPProgram_t_776357945");
      Undly_84.add_attribute("CPRegTyp", "UnderlyingCPRegType_t_286436200"); // 2
      Undly_84_set.insert("UnderlyingCPRegType_t_286436200");
      Undly_84.add_attribute("AllocPct", "1918812.070000"); // 2
      Undly_84_set.insert("1918812.070000");
      Undly_84.add_attribute("Ccy", "USD"); // 2
      Undly_84_set.insert("USD");
      Undly_84.add_attribute("Qty", "6822568.490000"); // 2
      Undly_84_set.insert("6822568.490000");
      Undly_84.add_attribute("SettlTyp", "4"); // 2
      Undly_84_set.insert("4");
      Undly_84.add_attribute("CashAmt", "UnderlyingCashAmount_t_1426181530"); // 2
      Undly_84_set.insert("UnderlyingCashAmount_t_1426181530");
      Undly_84.add_attribute("CashTyp", "FIXED"); // 2
      Undly_84_set.insert("FIXED");
      Undly_84.add_attribute("Px", "13899247.450000"); // 2
      Undly_84_set.insert("13899247.450000");
      Undly_84.add_attribute("DirtPx", "14678659.560000"); // 2
      Undly_84_set.insert("14678659.560000");
      Undly_84.add_attribute("EndPx", "16361413.980000"); // 2
      Undly_84_set.insert("16361413.980000");
      Undly_84.add_attribute("StartVal", "UnderlyingStartValue_t_73434909"); // 2
      Undly_84_set.insert("UnderlyingStartValue_t_73434909");
      Undly_84.add_attribute("CurVal", "UnderlyingCurrentValue_t_156556237"); // 2
      Undly_84_set.insert("UnderlyingCurrentValue_t_156556237");
      Undly_84.add_attribute("EndVal", "UnderlyingEndValue_t_1754395360"); // 2
      Undly_84_set.insert("UnderlyingEndValue_t_1754395360");
      Undly_84.add_attribute("AdjQty", "9457760.950000"); // 2
      Undly_84_set.insert("9457760.950000");
      Undly_84.add_attribute("FxRate", "15799891.100000"); // 2
      Undly_84_set.insert("15799891.100000");
      Undly_84.add_attribute("FxRateCalc", "D"); // 2
      Undly_84_set.insert("D");
      Undly_84.add_attribute("CapValu", "UnderlyingCapValue_t_34447975"); // 2
      Undly_84_set.insert("UnderlyingCapValue_t_34447975");
      Undly_84.add_attribute("SetMeth", "UnderlyingSettlMethod_t_502310447"); // 2
      Undly_84_set.insert("UnderlyingSettlMethod_t_502310447");
      Undly_84.add_attribute("PutCall", "726997790"); // 2
      Undly_84_set.insert("726997790");
      all_values.push_back(Undly_84_set);
      all_compo_names.insert("Undly_84_set");

      {
        xml_element UndAID_84{"UndAID"};
        multiset<string> UndAID_84_set;
        UndAID_84.add_attribute("AltID", "UnderlyingSecurityAltID_t_600170623"); // 3
        UndAID_84_set.insert("UnderlyingSecurityAltID_t_600170623");
        UndAID_84.add_attribute("AltIDSrc", "4"); // 3
        UndAID_84_set.insert("4");
        all_values.push_back(UndAID_84_set);
        all_compo_names.insert("UndAID_84_set");

        Undly_84.add_element(UndAID_84);
      }
      {
        xml_element Stip_123{"Stip"};
        multiset<string> Stip_123_set;
        Stip_123.add_attribute("Typ", "AVFICO"); // 3
        Stip_123_set.insert("AVFICO");
        Stip_123.add_attribute("Val", "UnderlyingStipValue_t_2024259281"); // 3
        Stip_123_set.insert("UnderlyingStipValue_t_2024259281");
        all_values.push_back(Stip_123_set);
        all_compo_names.insert("Stip_123_set");

        Undly_84.add_element(Stip_123);
      }
      {
        xml_element Pty_333{"Pty"};
        multiset<string> Pty_333_set;
        Pty_333.add_attribute("ID", "UnderlyingInstrumentPartyID_t_927134555"); // 3
        Pty_333_set.insert("UnderlyingInstrumentPartyID_t_927134555");
        Pty_333.add_attribute("Src", "H"); // 3
        Pty_333_set.insert("H");
        Pty_333.add_attribute("R", "40"); // 3
        Pty_333_set.insert("40");
        all_values.push_back(Pty_333_set);
        all_compo_names.insert("Pty_333_set");

        {
          xml_element Sub_333{"Sub"};
          multiset<string> Sub_333_set;
          Sub_333.add_attribute("ID", "UnderlyingInstrumentPartySubID_t_1694417689"); // 4
          Sub_333_set.insert("UnderlyingInstrumentPartySubID_t_1694417689");
          Sub_333.add_attribute("Typ", "18"); // 4
          Sub_333_set.insert("18");
          all_values.push_back(Sub_333_set);
          all_compo_names.insert("Sub_333_set");

          Pty_333.add_element(Sub_333);
        }
        Undly_84.add_element(Pty_333);
      }
      QuotCxlEntry_1.add_element(Undly_84);
    }
    {
      xml_element Leg_70{"Leg"};
      multiset<string> Leg_70_set;
      Leg_70.add_attribute("Sym", "LegSymbol_t_311296460"); // 2
      Leg_70_set.insert("LegSymbol_t_311296460");
      Leg_70.add_attribute("Sfx", "CD"); // 2
      Leg_70_set.insert("CD");
      Leg_70.add_attribute("ID", "LegSecurityID_t_758810947"); // 2
      Leg_70_set.insert("LegSecurityID_t_758810947");
      Leg_70.add_attribute("Src", "4"); // 2
      Leg_70_set.insert("4");
      Leg_70.add_attribute("Prod", "13"); // 2
      Leg_70_set.insert("13");
      Leg_70.add_attribute("CFI", "LegCFICode_t_1653562309"); // 2
      Leg_70_set.insert("LegCFICode_t_1653562309");
      Leg_70.add_attribute("SecTyp", "EUCP"); // 2
      Leg_70_set.insert("EUCP");
      Leg_70.add_attribute("SecSubTyp", "LegSecuritySubType_t_1492962562"); // 2
      Leg_70_set.insert("LegSecuritySubType_t_1492962562");
      Leg_70.add_attribute("MMY", "932260191"); // 2
      Leg_70_set.insert("932260191");
      Leg_70.add_attribute("Mat", "LegMaturityDate_t_1877172136"); // 2
      Leg_70_set.insert("LegMaturityDate_t_1877172136");
      Leg_70.add_attribute("MatTm", "735403659"); // 2
      Leg_70_set.insert("735403659");
      Leg_70.add_attribute("CpnPmt", "LegCouponPaymentDate_t_252642499"); // 2
      Leg_70_set.insert("LegCouponPaymentDate_t_252642499");
      Leg_70.add_attribute("Issued", "LegIssueDate_t_1365829887"); // 2
      Leg_70_set.insert("LegIssueDate_t_1365829887");
      Leg_70.add_attribute("RepoCollSecTyp", "808838569"); // 2
      Leg_70_set.insert("808838569");
      Leg_70.add_attribute("RepoTrm", "409198737"); // 2
      Leg_70_set.insert("409198737");
      Leg_70.add_attribute("RepoRt", "9727415.990000"); // 2
      Leg_70_set.insert("9727415.990000");
      Leg_70.add_attribute("Fctr", "17546146.640000"); // 2
      Leg_70_set.insert("17546146.640000");
      Leg_70.add_attribute("CrdRtg", "LegCreditRating_t_1989187847"); // 2
      Leg_70_set.insert("LegCreditRating_t_1989187847");
      Leg_70.add_attribute("Rgstry", "LegInstrRegistry_t_395842916"); // 2
      Leg_70_set.insert("LegInstrRegistry_t_395842916");
      Leg_70.add_attribute("Ctry", "1789062639"); // 2
      Leg_70_set.insert("1789062639");
      Leg_70.add_attribute("StOrProvnc", "LegStateOrProvinceOfIssue_t_344014646"); // 2
      Leg_70_set.insert("LegStateOrProvinceOfIssue_t_344014646");
      Leg_70.add_attribute("Lcl", "LegLocaleOfIssue_t_1122840706"); // 2
      Leg_70_set.insert("LegLocaleOfIssue_t_1122840706");
      Leg_70.add_attribute("Redeem", "LegRedemptionDate_t_241749614"); // 2
      Leg_70_set.insert("LegRedemptionDate_t_241749614");
      Leg_70.add_attribute("Strk", "9604437.370000"); // 2
      Leg_70_set.insert("9604437.370000");
      Leg_70.add_attribute("StrkCcy", "USD"); // 2
      Leg_70_set.insert("USD");
      Leg_70.add_attribute("OptA", "1887578292"); // 2
      Leg_70_set.insert("1887578292");
      Leg_70.add_attribute("Cmult", "16830019.540000"); // 2
      Leg_70_set.insert("16830019.540000");
      Leg_70.add_attribute("MultTyp", "1"); // 2
      Leg_70_set.insert("1");
      Leg_70.add_attribute("FlowSchedTyp", "3"); // 2
      Leg_70_set.insert("3");
      Leg_70.add_attribute("UOM", "Alw"); // 2
      Leg_70_set.insert("Alw");
      Leg_70.add_attribute("UOMQty", "2061697.060000"); // 2
      Leg_70_set.insert("2061697.060000");
      Leg_70.add_attribute("PxUOM", "Alw"); // 2
      Leg_70_set.insert("Alw");
      Leg_70.add_attribute("PxUOMQty", "7667040.000000"); // 2
      Leg_70_set.insert("7667040.000000");
      Leg_70.add_attribute("TmUnit", "Min"); // 2
      Leg_70_set.insert("Min");
      Leg_70.add_attribute("ExerStyle", "1"); // 2
      Leg_70_set.insert("1");
      Leg_70.add_attribute("CpnRt", "2727826.620000"); // 2
      Leg_70_set.insert("2727826.620000");
      Leg_70.add_attribute("Exch", "LegSecurityExchange_t_1894781890"); // 2
      Leg_70_set.insert("LegSecurityExchange_t_1894781890");
      Leg_70.add_attribute("Issr", "LegIssuer_t_529569840"); // 2
      Leg_70_set.insert("LegIssuer_t_529569840");
      Leg_70.add_attribute("EncLegIssrLen", "1205042853"); // 2
      Leg_70_set.insert("1205042853");
      Leg_70.add_attribute("EncLegIssr", "EncodedLegIssuer_t_1624470379"); // 2
      Leg_70_set.insert("EncodedLegIssuer_t_1624470379");
      Leg_70.add_attribute("Desc", "LegSecurityDesc_t_1264973500"); // 2
      Leg_70_set.insert("LegSecurityDesc_t_1264973500");
      Leg_70.add_attribute("EncLegSecDescLen", "1457685353"); // 2
      Leg_70_set.insert("1457685353");
      Leg_70.add_attribute("EncLegSecDesc", "EncodedLegSecurityDesc_t_842816618"); // 2
      Leg_70_set.insert("EncodedLegSecurityDesc_t_842816618");
      Leg_70.add_attribute("RatioQty", "20738120.690000"); // 2
      Leg_70_set.insert("20738120.690000");
      Leg_70.add_attribute("Side", "B"); // 2
      Leg_70_set.insert("B");
      Leg_70.add_attribute("Ccy", "CAN"); // 2
      Leg_70_set.insert("CAN");
      Leg_70.add_attribute("Pool", "LegPool_t_1708588289"); // 2
      Leg_70_set.insert("LegPool_t_1708588289");
      Leg_70.add_attribute("Dated", "LegDatedDate_t_63917486"); // 2
      Leg_70_set.insert("LegDatedDate_t_63917486");
      Leg_70.add_attribute("CSetMo", "1322522077"); // 2
      Leg_70_set.insert("1322522077");
      Leg_70.add_attribute("IntAcrl", "LegInterestAccrualDate_t_2052602935"); // 2
      Leg_70_set.insert("LegInterestAccrualDate_t_2052602935");
      Leg_70.add_attribute("PutCall", "1186758192"); // 2
      Leg_70_set.insert("1186758192");
      Leg_70.add_attribute("LegOptionRatio", "15642716.910000"); // 2
      Leg_70_set.insert("15642716.910000");
      Leg_70.add_attribute("Px", "8655630.240000"); // 2
      Leg_70_set.insert("8655630.240000");
      all_values.push_back(Leg_70_set);
      all_compo_names.insert("Leg_70_set");

      {
        xml_element LegAID_70{"LegAID"};
        multiset<string> LegAID_70_set;
        LegAID_70.add_attribute("SecAltID", "LegSecurityAltID_t_2103525151"); // 3
        LegAID_70_set.insert("LegSecurityAltID_t_2103525151");
        LegAID_70.add_attribute("SecAltIDSrc", "M"); // 3
        LegAID_70_set.insert("M");
        all_values.push_back(LegAID_70_set);
        all_compo_names.insert("LegAID_70_set");

        Leg_70.add_element(LegAID_70);
      }
      QuotCxlEntry_1.add_element(Leg_70);
    }
    elt.add_element(QuotCxlEntry_1);
  } // end QuotCxlEntry
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
